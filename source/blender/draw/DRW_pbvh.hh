/* SPDX-License-Identifier: GPL-2.0-or-later
 * Copyright 2022 Blender Foundation. */

/** \file
 * \ingroup draw
 */

#pragma once

/* Needed for BKE_ccg.h. */
#include "BLI_assert.h"
#include "BLI_bitmap.h"
#include "BLI_span.hh"

#include "BKE_ccg.h"

struct PBVHAttrReq;
struct GPUBatch;
struct PBVHNode;
struct PBVHBatches;
struct PBVHGPUFormat;
struct GSet;
struct DMFlagMat;
struct Mesh;
struct MLoopTri;
struct CustomData;
struct MPoly;
struct SubdivCCG;
struct BMesh;

struct PBVH_GPU_Args {
  int pbvh_type;

  struct BMesh *bm;
  const struct Mesh *me;
  const float (*vert_positions)[3];
  blender::Span<int> corner_verts;
  blender::Span<int> corner_edges;
  const MPoly *polys;
  int mesh_verts_num, mesh_faces_num, mesh_grids_num;
  struct CustomData *vdata, *ldata, *pdata;
  const float (*vert_normals)[3];

  const char *active_color;
  const char *render_color;

  int face_sets_color_seed, face_sets_color_default;
  int *face_sets; /* for PBVH_FACES and PBVH_GRIDS */

  struct SubdivCCG *subdiv_ccg;
  const struct DMFlagMat *grid_flag_mats;
  const int *grid_indices;
  CCGKey ccg_key;
  CCGElem **grids;
  void **gridfaces;
  BLI_bitmap **grid_hidden;

  int *prim_indices;
  int totprim;

  const bool *hide_poly;

  int node_verts_num;

  const struct MLoopTri *mlooptri;
  struct PBVHNode *node;

  bool flat_vcol_shading;
  bool show_orig;

  /* BMesh. */
  struct TableGSet *bm_unique_vert, *bm_other_verts, *bm_faces;
  int cd_mask_layer;
  struct PBVHTriBuf *tribuf, *tri_buffers;
  int tot_tri_buffers, updategen;
  struct MSculptVert *msculptverts;
};

void DRW_pbvh_node_update(PBVHBatches *batches, PBVH_GPU_Args *args);
void DRW_pbvh_update_pre(PBVHBatches *batches, PBVH_GPU_Args *args);

void DRW_pbvh_node_gpu_flush(PBVHBatches *batches);
PBVHBatches *DRW_pbvh_node_create(PBVH_GPU_Args *args);
void DRW_pbvh_node_free(PBVHBatches *batches);
GPUBatch *DRW_pbvh_tris_get(PBVHBatches *batches,
                            PBVHAttrReq *attrs,
                            int attrs_num,
                            PBVH_GPU_Args *args,
                            int *r_prim_count,
                            bool do_coarse_grids);
GPUBatch *DRW_pbvh_lines_get(PBVHBatches *batches,
                             PBVHAttrReq *attrs,
                             int attrs_num,
                             PBVH_GPU_Args *args,
                             int *r_prim_count,
                             bool do_coarse_grids);
