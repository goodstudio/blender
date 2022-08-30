/* SPDX-License-Identifier: GPL-2.0-or-later
 * Copyright 2021 Tangent Animation and. NVIDIA Corporation. All rights reserved. */

#include "usd_reader_stage.h"
#include "usd_reader_camera.h"
#include "usd_reader_curve.h"
#include "usd_reader_instance.h"
#include "usd_reader_light.h"
#include "usd_reader_mesh.h"
#include "usd_reader_nurbs.h"
#include "usd_reader_prim.h"
#include "usd_reader_skeleton.h"
#include "usd_reader_volume.h"
#include "usd_reader_xform.h"

#include <pxr/pxr.h>
#include <pxr/usd/usdGeom/camera.h>
#include <pxr/usd/usdGeom/curves.h>
#include <pxr/usd/usdGeom/mesh.h>
#include <pxr/usd/usdGeom/nurbsCurves.h>
#include <pxr/usd/usdGeom/scope.h>
#include <pxr/usd/usdGeom/xform.h>
#include <pxr/usd/usdLux/domeLight.h>
#if PXR_VERSION >= 2111
#  include <pxr/usd/usdLux/boundableLightBase.h>
#  include <pxr/usd/usdLux/nonboundableLightBase.h>
#else
#  include <pxr/usd/usdLux/light.h>
#endif
#include <pxr/usd/usdSkel/skeleton.h>

#include <iostream>

#include "BKE_modifier.h"
#include "BLI_sort.hh"
#include "BLI_string.h"

struct Object;

namespace blender::io::usd {

USDStageReader::USDStageReader(pxr::UsdStageRefPtr stage,
                               const USDImportParams &params,
                               const ImportSettings &settings)
    : stage_(stage), params_(params), settings_(settings)
{
}

USDStageReader::~USDStageReader()
{
  clear_proto_readers();
  clear_readers();
}

bool USDStageReader::valid() const
{
  return stage_;
}

USDPrimReader *USDStageReader::create_reader_if_allowed(const pxr::UsdPrim &prim,
                                                        pxr::UsdGeomXformCache *xf_cache)
{
  if (params_.use_instancing && prim.IsInstance()) {
    return new USDInstanceReader(prim, params_, settings_);
  }
  if (params_.import_cameras && prim.IsA<pxr::UsdGeomCamera>()) {
    return new USDCameraReader(prim, params_, settings_);
  }
  if (params_.import_curves && prim.IsA<pxr::UsdGeomBasisCurves>()) {
    return new USDCurvesReader(prim, params_, settings_);
  }
  if (params_.import_curves && prim.IsA<pxr::UsdGeomNurbsCurves>()) {
    return new USDNurbsReader(prim, params_, settings_);
  }
  if (params_.import_meshes && prim.IsA<pxr::UsdGeomMesh>()) {
    return new USDMeshReader(prim, params_, settings_);
  }
  if (params_.import_lights && prim.IsA<pxr::UsdLuxDomeLight>()) {
    return new USDXformReader(prim, params_, settings_);
  }
#if PXR_VERSION >= 2111
  if (params_.import_lights && (prim.IsA<pxr::UsdLuxBoundableLightBase>() ||
                                prim.IsA<pxr::UsdLuxNonboundableLightBase>())) {
#else
  if (params_.import_lights && prim.IsA<pxr::UsdLuxLight>()) {
#endif
    return new USDLightReader(prim, params_, settings_, xf_cache);
  }
  if (params_.import_volumes && prim.IsA<pxr::UsdVolVolume>()) {
    return new USDVolumeReader(prim, params_, settings_);
  }
  if (params_.import_skeletons && prim.IsA<pxr::UsdSkelSkeleton>()) {
    return new USDSkeletonReader(prim, params_, settings_);
  }
  if (prim.IsA<pxr::UsdGeomImageable>()) {
    return new USDXformReader(prim, params_, settings_);
  }
  if (prim.GetPrimTypeInfo() == pxr::UsdPrimTypeInfo::GetEmptyPrimType()) {
    /* Handle the less common case where the prim has no type specified. */
    return new USDXformReader(prim, params_, settings_);
  }

  return nullptr;
}

USDPrimReader *USDStageReader::create_reader(const pxr::UsdPrim &prim,
                                             pxr::UsdGeomXformCache *xf_cache)
{
  if (prim.IsA<pxr::UsdGeomCamera>()) {
    return new USDCameraReader(prim, params_, settings_);
  }
  if (prim.IsA<pxr::UsdGeomBasisCurves>()) {
    return new USDCurvesReader(prim, params_, settings_);
  }
  if (prim.IsA<pxr::UsdGeomNurbsCurves>()) {
    return new USDNurbsReader(prim, params_, settings_);
  }
  if (prim.IsA<pxr::UsdGeomMesh>()) {
    return new USDMeshReader(prim, params_, settings_);
  }
  if (prim.IsA<pxr::UsdLuxDomeLight>()) {
    return new USDXformReader(prim, params_, settings_);
  }
#if PXR_VERSION >= 2111
  if (prim.IsA<pxr::UsdLuxBoundableLightBase>() || prim.IsA<pxr::UsdLuxNonboundableLightBase>()) {
#else
  if (prim.IsA<pxr::UsdLuxLight>()) {
#endif
    return new USDLightReader(prim, params_, settings_, xf_cache);
  }
  if (prim.IsA<pxr::UsdVolVolume>()) {
    return new USDVolumeReader(prim, params_, settings_);
  }
  if (prim.IsA<pxr::UsdSkelSkeleton>()) {
    return new USDSkeletonReader(prim, params_, settings_);
  }
  if (prim.IsA<pxr::UsdGeomImageable>()) {
    return new USDXformReader(prim, params_, settings_);
  }
  return nullptr;
}

bool USDStageReader::include_by_visibility(const pxr::UsdGeomImageable &imageable) const
{
  if (!params_.import_visible_only) {
    /* Invisible prims are allowed. */
    return true;
  }

  pxr::UsdAttribute visibility_attr = imageable.GetVisibilityAttr();

  if (!visibility_attr) {
    /* No visibility attribute, so allow. */
    return true;
  }

  /* Include if the prim has an animating visibility attribute or is not invisible. */

  if (visibility_attr.ValueMightBeTimeVarying()) {
    return true;
  }

  pxr::TfToken visibility;
  visibility_attr.Get(&visibility);
  return visibility != pxr::UsdGeomTokens->invisible;
}

bool USDStageReader::include_by_purpose(const pxr::UsdGeomImageable &imageable) const
{
  if (params_.import_skeletons && imageable.GetPrim().IsA<pxr::UsdSkelSkeleton>()) {
    /* Always include skeletons, if requested by the user, regardless of purpose. */
    return true;
  }

  if (params_.import_guide && params_.import_proxy && params_.import_render) {
    /* The options allow any purpose, so we trivially include the prim. */
    return true;
  }

  pxr::UsdAttribute purpose_attr = imageable.GetPurposeAttr();

  if (!purpose_attr) {
    /* No purpose attribute, so trivially include the prim. */
    return true;
  }

  pxr::TfToken purpose;
  purpose_attr.Get(&purpose);

  if (purpose == pxr::UsdGeomTokens->guide) {
    return params_.import_guide;
  }
  if (purpose == pxr::UsdGeomTokens->proxy) {
    return params_.import_proxy;
  }
  if (purpose == pxr::UsdGeomTokens->render) {
    return params_.import_render;
  }

  return true;
}

/* Determine if the given reader can use the parent of the encapsulated USD prim
 * to compute the Blender object's transform. If so, the reader is appropriately
 * flagged and the function returns true. Otherwise, the function returns false. */

bool USDStageReader::merge_with_parent(USDPrimReader *reader) const
{
  USDXformReader *xform_reader = dynamic_cast<USDXformReader *>(reader);

  if (!xform_reader) {
    return false;
  }

  /* Check if the Xform reader is already merged. */
  if (xform_reader->use_parent_xform()) {
    return false;
  }

  /* Only merge if the parent is an Xform. */
  if (!xform_reader->prim().GetParent().IsA<pxr::UsdGeomXform>()) {
    return false;
  }

  /* Don't merge if instancing is enabled and the parent is an instance. */
  if (params_.use_instancing && xform_reader->prim().GetParent().IsInstance()) {
    return false;
  }

  /* Don't merge Xform, Scope or undefined prims. */
  if (xform_reader->prim().IsA<pxr::UsdGeomXform>() ||
      xform_reader->prim().IsA<pxr::UsdGeomScope>() ||
      xform_reader->prim().GetPrimTypeInfo()
        == pxr::UsdPrimTypeInfo::GetEmptyPrimType()) {
    return false;
  }

  /* Don't merge if the prim has authored transform ops. */
  if (xform_reader->prim_has_xform_ops()) {
    return false;
  }

  /* Flag the Xform reader as merged. */
  xform_reader->set_use_parent_xform(true);

  return true;
}

USDPrimReader *USDStageReader::collect_readers(Main *bmain,
                                               const pxr::UsdPrim &prim,
                                               pxr::UsdGeomXformCache *xf_cache,
                                               std::vector<USDPrimReader *> &r_readers)
{
  if (prim.IsA<pxr::UsdGeomImageable>()) {
    pxr::UsdGeomImageable imageable(prim);

    if (!include_by_purpose(imageable)) {
      return nullptr;
    }

    if (!include_by_visibility(imageable)) {
      return nullptr;
    }
  }

  if (prim.IsA<pxr::UsdLuxDomeLight>()) {
    dome_lights_.push_back(pxr::UsdLuxDomeLight(prim));
  }

  pxr::Usd_PrimFlagsPredicate filter_predicate = pxr::UsdPrimDefaultPredicate;

  if (!params_.use_instancing && params_.import_instance_proxies) {
    filter_predicate = pxr::UsdTraverseInstanceProxies(filter_predicate);
  }

  pxr::UsdPrimSiblingRange children = prim.GetFilteredChildren(filter_predicate);

  std::vector<USDPrimReader *> child_readers;

  for (const auto &childPrim : children) {
    if (USDPrimReader *child_reader = collect_readers(bmain, childPrim, xf_cache, r_readers)) {
      child_readers.push_back(child_reader);
    }
  }

  /* We prune the current prim if it's a Scope
   * and we didn't convert any of its children. */
  if (child_readers.empty() && prim.IsA<pxr::UsdGeomScope>() &&
      !(params_.use_instancing && prim.IsInstance())) {
    return nullptr;
  }

  /* Check if we can merge an Xform with its child prim. */
  if (child_readers.size() == 1) {
    USDPrimReader *child_reader = child_readers.front();

    if (merge_with_parent(child_reader)) {
      return child_reader;
    }
  }

  if (prim.IsPseudoRoot() || prim.IsPrototype()) {
    return nullptr;
  }

  USDPrimReader *reader = create_reader_if_allowed(prim, xf_cache);

  if (!reader) {
    return nullptr;
  }

  r_readers.push_back(reader);
  reader->incref();

  /* Set each child reader's parent. */
  for (USDPrimReader *child_reader : child_readers) {
    child_reader->parent(reader);
  }

  return reader;
}

void USDStageReader::collect_readers(Main *bmain)
{
  if (!valid()) {
    return;
  }

  clear_readers();
  clear_proto_readers();
  dome_lights_.clear();

  /* Iterate through the stage. */
  pxr::UsdPrim root = stage_->GetPseudoRoot();

  std::string prim_path_mask(params_.prim_path_mask);

  if (!prim_path_mask.empty()) {
    pxr::UsdPrim prim = stage_->GetPrimAtPath(pxr::SdfPath(prim_path_mask));
    if (prim.IsValid()) {
      root = prim;
    }
    else {
      std::cerr << "WARNING: Prim Path Mask " << prim_path_mask
                << " does not specify a valid prim.\n";
    }
  }

  stage_->SetInterpolationType(pxr::UsdInterpolationType::UsdInterpolationTypeHeld);

  pxr::UsdGeomXformCache xf_cache;
  collect_readers(bmain, root, &xf_cache, readers_);

  if (params_.use_instancing) {
    // Collect the scenegraph instance prototypes.
    std::vector<pxr::UsdPrim> protos = stage_->GetPrototypes();

    for (const pxr::UsdPrim &proto_prim : protos) {
      std::vector<USDPrimReader *> proto_readers;
      collect_readers(bmain, proto_prim, &xf_cache, proto_readers);
      proto_readers_.insert(std::make_pair(proto_prim.GetPath(), proto_readers));
    }
  }
}

void USDStageReader::process_armature_modifiers() const
{
  /* Create armature object map. */
  std::map<std::string, Object *> usd_path_to_armature;
  for (const USDPrimReader *reader : readers_) {
    if (dynamic_cast<const USDSkeletonReader *>(reader) && reader->object()) {
      usd_path_to_armature.insert(std::make_pair(reader->prim_path(), reader->object()));
    }
  }

  /* Set armature objects on armature modifiers. */
  for (const USDPrimReader *reader : readers_) {
    if (!reader->object()) {
      /* This should never happen. */
      continue;
    }
    if (const USDMeshReader * mesh_reader = dynamic_cast<const USDMeshReader *>(reader)) {
      ModifierData *md = BKE_modifiers_findby_type(reader->object(), eModifierType_Armature);
      if (!md) {
        continue;
      }
      ArmatureModifierData *amd = reinterpret_cast<ArmatureModifierData *>(md);
      std::string skel_path = mesh_reader->get_skeleton_path();
      std::map<std::string, Object *>::const_iterator it = usd_path_to_armature.find(skel_path);
      if (it != usd_path_to_armature.end()) {
        amd->object = it->second;
      }
      else {
        std::cout << "WARNING: couldn't find armature object for armature modifier for USD prim "
                  << reader->prim_path() << " bound to skeleton " << skel_path << std::endl;
      }
    }
  }
}

void USDStageReader::clear_readers()
{
  for (USDPrimReader *reader : readers_) {
    if (!reader) {
      continue;
    }

    reader->decref();

    if (reader->refcount() == 0) {
      delete reader;
    }
  }

  readers_.clear();
}

void USDStageReader::clear_proto_readers()
{
  for (auto &pair : proto_readers_) {

    for (USDPrimReader *reader : pair.second) {

      if (!reader) {
        continue;
      }

      reader->decref();

      if (reader->refcount() == 0) {
        delete reader;
      }
    }

    pair.second.clear();
  }

  proto_readers_.clear();
}

void USDStageReader::sort_readers()
{
  blender::parallel_sort(
      readers_.begin(), readers_.end(), [](const USDPrimReader *a, const USDPrimReader *b) {
        const char *na = a ? a->name().c_str() : "";
        const char *nb = b ? b->name().c_str() : "";
        return BLI_strcasecmp(na, nb) < 0;
      });
}

}  // Namespace blender::io::usd
