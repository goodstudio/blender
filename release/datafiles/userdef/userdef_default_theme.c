/* SPDX-License-Identifier: GPL-2.0-or-later */

/**
 * Generated by 'source/tools/utils/blender_theme_as_c.py'
 *
 * Do not hand edit this file!
 */

#include "DNA_userdef_types.h"

#include "BLO_readfile.h"

/* clang-format off */

#ifdef __LITTLE_ENDIAN__
#  define RGBA(c) {((c) >> 24) & 0xff, ((c) >> 16) & 0xff, ((c) >> 8) & 0xff, (c) & 0xff}
#  define RGB(c)  {((c) >> 16) & 0xff, ((c) >> 8) & 0xff, (c) & 0xff}
#else
#  define RGBA(c) {(c) & 0xff, ((c) >> 8) & 0xff, ((c) >> 16) & 0xff, ((c) >> 24) & 0xff}
#  define RGB(c)  {(c) & 0xff, ((c) >> 8) & 0xff, ((c) >> 16) & 0xff}
#endif

const bTheme U_theme_default = {
  .name = "Default",
  .tui = {
    .wcol_regular = {
      .outline = RGBA(0x3d3d3dff),
      .inner = RGBA(0x545454ff),
      .inner_sel = RGBA(0x4772b3ff),
      .item = RGBA(0x1d1d1d80),
      .text = RGBA(0xe6e6e6ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_tool = {
      .outline = RGBA(0x3d3d3dff),
      .inner = RGBA(0x545454ff),
      .inner_sel = RGBA(0x4772b3ff),
      .item = RGBA(0xffffffff),
      .text = RGBA(0xe6e6e6ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_toolbar_item = {
      .outline = RGBA(0x3d3d3dff),
      .inner = RGBA(0x282828ff),
      .inner_sel = RGBA(0x4772b3ff),
      .item = RGBA(0xffffffb3),
      .text = RGBA(0xe6e6e6ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_text = {
      .outline = RGBA(0x3d3d3dff),
      .inner = RGBA(0x1d1d1dff),
      .inner_sel = RGBA(0x181818ff),
      .item = RGBA(0x4772b3ff),
      .text = RGBA(0xe6e6e6ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_radio = {
      .outline = RGBA(0x3d3d3dff),
      .inner = RGBA(0x545454ff),
      .inner_sel = RGBA(0x4772b3ff),
      .item = RGBA(0x252525ff),
      .text = RGBA(0xe6e6e6ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_option = {
      .outline = RGBA(0x3d3d3dff),
      .inner = RGBA(0x545454ff),
      .inner_sel = RGBA(0x4772b3ff),
      .item = RGBA(0xffffffff),
      .text = RGBA(0xe6e6e6ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_toggle = {
      .outline = RGBA(0x3d3d3dff),
      .inner = RGBA(0x545454ff),
      .inner_sel = RGBA(0x4772b3ff),
      .item = RGBA(0x252525ff),
      .text = RGBA(0xe6e6e6ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_num = {
      .outline = RGBA(0x3d3d3dff),
      .inner = RGBA(0x545454ff),
      .inner_sel = RGBA(0x222222ff),
      .item = RGBA(0x4772b3ff),
      .text = RGBA(0xe6e6e6ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_numslider = {
      .outline = RGBA(0x3d3d3dff),
      .inner = RGBA(0x545454ff),
      .inner_sel = RGBA(0x222222ff),
      .item = RGBA(0x4772b3ff),
      .text = RGBA(0xe6e6e6ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_tab = {
      .outline = RGBA(0x1d1d1dff),
      .inner = RGBA(0x1d1d1dff),
      .inner_sel = RGBA(0x303030ff),
      .item = RGBA(0x1d1d1dff),
      .text = RGBA(0x989898ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_menu = {
      .outline = RGBA(0x3d3d3dff),
      .inner = RGBA(0x282828ff),
      .inner_sel = RGBA(0x4772b3b3),
      .item = RGBA(0xd9d9d9ff),
      .text = RGBA(0xe6e6e6ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_pulldown = {
      .outline = RGBA(0x3d3d3dff),
      .inner = RGBA(0x22222266),
      .inner_sel = RGBA(0x4772b3b3),
      .item = RGBA(0x727272ff),
      .text = RGBA(0xd9d9d9ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_menu_back = {
      .outline = RGBA(0x242424ff),
      .inner = RGBA(0x181818ff),
      .inner_sel = RGBA(0x4772b3ff),
      .item = RGBA(0xd9d9d9ff),
      .text = RGBA(0x999999ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_menu_item = {
      .outline = RGBA(0x3d3d3d00),
      .inner = RGBA(0x18181800),
      .inner_sel = RGBA(0x4772b3ff),
      .item = RGBA(0xffffff8f),
      .text = RGBA(0xddddddff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_tooltip = {
      .outline = RGBA(0x242424ff),
      .inner = RGBA(0x1d1d1dff),
      .inner_sel = RGBA(0x4772b3ff),
      .item = RGBA(0xd9d9d9ff),
      .text = RGBA(0xd9d9d9ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_box = {
      .outline = RGBA(0x3d3d3dff),
      .inner = RGBA(0x1d1d1d80),
      .inner_sel = RGBA(0x545454ff),
      .item = RGBA(0x191919ff),
      .text = RGBA(0xe6e6e6ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_scroll = {
      .outline = RGBA(0x3d3d3dff),
      .inner = RGBA(0x22222200),
      .inner_sel = RGBA(0xffffffff),
      .item = RGBA(0x545454ff),
      .text = RGBA(0xe6e6e6ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.5f,
    },
    .wcol_progress = {
      .outline = RGBA(0x3d3d3dff),
      .inner = RGBA(0x222222ff),
      .inner_sel = RGBA(0x4772b3ff),
      .item = RGBA(0x4772b3ff),
      .text = RGBA(0xe6e6e6ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_list_item = {
      .outline = RGBA(0x2d2d2dff),
      .inner = RGBA(0x2d2d2d00),
      .inner_sel = RGBA(0x484a4fff),
      .item = RGBA(0x4772b3ff),
      .text = RGBA(0xccccccff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_view_item = {
      .outline = RGBA(0x2d2d2dff),
      .inner = RGBA(0x303030ff),
      .inner_sel = RGBA(0x4772b3ff),
      .item = RGBA(0x4772b3ff),
      .text = RGBA(0xccccccff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_pie_menu = {
      .outline = RGBA(0x242424ff),
      .inner = RGBA(0x181818ff),
      .inner_sel = RGBA(0x4772b3ff),
      .item = RGBA(0x545454ff),
      .text = RGBA(0xd9d9d9ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_state = {
      .inner_anim = RGBA(0x53992eff),
      .inner_anim_sel = RGBA(0x38a600ff),
      .inner_key = RGBA(0xb3ae36ff),
      .inner_key_sel = RGBA(0xb29700ff),
      .inner_driven = RGBA(0x9000ccff),
      .inner_driven_sel = RGBA(0x9900e6ff),
      .inner_overridden = RGBA(0x00c3c300),
      .inner_overridden_sel = RGBA(0x118f8f00),
      .inner_changed = RGBA(0xcc7529ff),
      .inner_changed_sel = RGBA(0xd26400ff),
      .blend = 0.5f,
    },
    .widget_emboss = RGBA(0x00000026),
    .menu_shadow_fac = 0.4f,
    .menu_shadow_width = 2,
    .editor_outline = RGBA(0x161616ff),
    .transparent_checker_primary = RGBA(0x333333ff),
    .transparent_checker_secondary = RGBA(0x262626ff),
    .transparent_checker_size = 8,
    .icon_alpha = 1.0f,
    .icon_saturation = 0.5f,
    .widget_text_cursor = RGBA(0x71a8ffff),
    .xaxis = RGBA(0xff3352ff),
    .yaxis = RGBA(0x8bdc00ff),
    .zaxis = RGBA(0x2890ffff),
    .gizmo_hi = RGBA(0xffffffff),
    .gizmo_primary = RGBA(0xf5f14dff),
    .gizmo_secondary = RGBA(0x63ffffff),
    .gizmo_view_align = RGBA(0xffffffff),
    .gizmo_a = RGBA(0x4da84dff),
    .gizmo_b = RGBA(0xa33535ff),
    .icon_scene = RGBA(0xccccccff),
    .icon_collection = RGBA(0xffffffff),
    .icon_object = RGBA(0xe19658ff),
    .icon_object_data = RGBA(0x00d4a3ff),
    .icon_modifier = RGBA(0x74a2ffff),
    .icon_shading = RGBA(0xcc6670ff),
    .icon_folder = RGBA(0xccad63ff),
    .panel_roundness = 0.4f,
  },
  .space_properties = {
    .back = RGBA(0x30303000),
    .title = RGBA(0xe6e6e6ff),
    .text = RGBA(0xe6e6e6ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x303030b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x30303000),
    .button_title = RGBA(0xccccccff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .navigation_bar = RGBA(0x1d1d1dff),
    .execution_buts = RGBA(0x1d1d1dff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .active = RGBA(0x4772b3ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .match = RGBA(0x4772b3ff),
  },
  .space_view3d = {
    .back = RGBA(0x3d3d3dff),
    .back_grad = RGBA(0x30303000),
    .background_type = 2,
    .title = RGBA(0xeeeeeeff),
    .text = RGBA(0xe6e6e6ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x303030b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x30303000),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .navigation_bar = RGBA(0x1d1d1dff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .grid = RGBA(0x54545480),
    .wire = RGBA(0x000000ff),
    .wire_edit = RGBA(0x000000ff),
    .select = RGBA(0xed5700ff),
    .lamp = RGBA(0x00000050),
    .speaker = RGBA(0x000000ff),
    .empty = RGBA(0x000000ff),
    .camera = RGBA(0x000000ff),
    .active = RGBA(0xffa028ff),
    .transform = RGBA(0xffffffff),
    .vertex = RGBA(0x000000ff),
    .vertex_select = RGBA(0xff7a00ff),
    .vertex_bevel = RGBA(0x00a5ffff),
    .edge = RGBA(0x000000ff),
    .edge_select = RGBA(0xffa000ff),
    .edge_seam = RGBA(0xdb2512ff),
    .edge_sharp = RGBA(0x00ffffff),
    .edge_facesel = RGBA(0x4b4b4bff),
    .edge_crease = RGBA(0xcc0099ff),
    .edge_bevel = RGBA(0x00a5ffff),
    .face = RGBA(0xffffff02),
    .face_select = RGBA(0xffa5522e),
    .face_back = RGBA(0xff0000b3),
    .face_front = RGBA(0x0000ffb3),
    .face_dot = RGBA(0xff8a00ff),
    .extra_edge_len = RGBA(0x150806ff),
    .extra_edge_angle = RGBA(0x4d4d00ff),
    .extra_face_angle = RGBA(0x0000ccff),
    .extra_face_area = RGBA(0x004d00ff),
    .normal = RGBA(0x22ddddff),
    .vertex_normal = RGBA(0x2361ddff),
    .loop_normal = RGBA(0xdd23ddff),
    .bone_solid = RGBA(0xb2b2b2ff),
    .bone_pose = RGBA(0x50c8ff50),
    .bone_pose_active = RGBA(0x8cffff50),
    .bone_locked_weight = RGBA(0xff000080),
    .cframe = RGBA(0x4772b3ff),
    .time_keyframe = RGBA(0xddd700ff),
    .time_gp_keyframe = RGBA(0xb5e61dff),
    .freestyle_edge_mark = RGBA(0x7fff7fff),
    .freestyle_face_mark = RGBA(0x7fff7f4d),
    .nurb_uline = RGBA(0x909000ff),
    .nurb_vline = RGBA(0x803060ff),
    .act_spline = RGBA(0xdb2512ff),
    .nurb_sel_uline = RGBA(0xf0ff40ff),
    .nurb_sel_vline = RGBA(0xf090a0ff),
    .lastsel_point = RGBA(0xffffffff),
    .handle_free = RGBA(0x000000ff),
    .handle_auto = RGBA(0x909000ff),
    .handle_vect = RGBA(0x409030ff),
    .handle_align = RGBA(0x803060ff),
    .handle_sel_free = RGBA(0x000000ff),
    .handle_sel_auto = RGBA(0xf0ff40ff),
    .handle_sel_vect = RGBA(0x40c030ff),
    .handle_sel_align = RGBA(0xf090a0ff),
    .vertex_size = 3,
    .outline_width = 1,
    .obcenter_dia = 6,
    .facedot_size = 3,
    .editmesh_active = RGBA(0xffffff33),
    .clipping_border_3d = RGBA(0x3f3f3fff),
    .bundle_solid = RGBA(0xc8c8c8ff),
    .camera_path = RGBA(0x000000ff),
    .gp_vertex_size = 3,
    .gp_vertex = RGBA(0x000000ff),
    .gp_vertex_select = RGBA(0xff8500ff),
    .skin_root = RGBA(0xb44d4dff),
    .paint_curve_pivot = RGBA(0xff7f7f7f),
    .paint_curve_handle = RGBA(0x7fff7f7f),
  },
  .space_file = {
    .back = RGBA(0x28282800),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xe6e6e6ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x303030b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x30303000),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .navigation_bar = RGBA(0x303030ff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .hilite = RGBA(0x4772b3ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .row_alternate = RGBA(0xffffff04),
  },
  .space_graph = {
    .back = RGBA(0x30303000),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xa6a6a6ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x303030b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x30303000),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .list = RGBA(0x1d1d1dff),
    .list_title = RGBA(0xffffffff),
    .list_text = RGBA(0xb8b8b8ff),
    .list_text_hi = RGBA(0xffaf23ff),
    .navigation_bar = RGBA(0x1d1d1dff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .shade1 = RGBA(0x96969600),
    .shade2 = RGBA(0x12121264),
    .grid = RGBA(0x1a1a1aff),
    .group = RGBA(0x1a332dff),
    .group_active = RGBA(0x216d5bff),
    .vertex = RGBA(0x000000ff),
    .vertex_select = RGBA(0xff8500ff),
    .vertex_active = RGBA(0xffffffff),
    .cframe = RGBA(0x4772b3ff),
    .time_scrub_background = RGBA(0x161616ff),
    .time_marker_line = RGBA(0xffffff4d),
    .time_marker_line_selected = RGBA(0xffffffb3),
    .lastsel_point = RGBA(0xffffffff),
    .handle_auto = RGBA(0x909000ff),
    .handle_vect = RGBA(0x409030ff),
    .handle_align = RGBA(0x803060ff),
    .handle_auto_clamped = RGBA(0x994030ff),
    .handle_sel_auto = RGBA(0xf0ff40ff),
    .handle_sel_vect = RGBA(0x40c030ff),
    .handle_sel_align = RGBA(0xf090a0ff),
    .handle_sel_auto_clamped = RGBA(0xf0af90ff),
    .ds_channel = RGBA(0x194e80ff),
    .ds_subchannel = RGBA(0x0f2c4dff),
    .vertex_size = 6,
    .outline_width = 1,
    .facedot_size = 4,
    .handle_vertex_select = RGBA(0xff8500ff),
    .handle_vertex_size = 5,
    .anim_preview_range = RGBA(0xa14d0066),
  },
  .space_info = {
    .back = RGBA(0x1d1d1d00),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xc3c3c3ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x303030b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x30303000),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .navigation_bar = RGBA(0x1d1d1dff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .info_selected = RGBA(0x3b5689ff),
    .info_selected_text = RGBA(0xffffffff),
    .info_error = RGBA(0xb34c34ff),
    .info_error_text = RGBA(0xffffffff),
    .info_warning = RGBA(0xac8737ff),
    .info_warning_text = RGBA(0xffffffff),
    .info_info = RGBA(0x1f3862ff),
    .info_info_text = RGBA(0xffffffff),
    .info_debug = RGBA(0x6b3293ff),
    .info_debug_text = RGBA(0xffffffff),
    .info_property = RGBA(0x236666ff),
    .info_property_text = RGBA(0xffffffff),
    .info_operator = RGBA(0x235266ff),
    .info_operator_text = RGBA(0xffffffff),
  },
  .space_action = {
    .back = RGBA(0x30303000),
    .title = RGBA(0xeeeeeeff),
    .text = RGBA(0xa6a6a6ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x303030b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x22222200),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .list = RGBA(0x1d1d1dff),
    .list_title = RGBA(0xffffffff),
    .list_text = RGBA(0xb8b8b8ff),
    .list_text_hi = RGBA(0xffaf23ff),
    .navigation_bar = RGBA(0x1d1d1dff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .shade1 = RGBA(0xc0c0c000),
    .shade2 = RGBA(0x1d1d1d99),
    .hilite = RGBA(0x60c04044),
    .grid = RGBA(0x161616ff),
    .group = RGBA(0x1a332d37),
    .group_active = RGBA(0x216d5b67),
    .strip = RGBA(0xffffff1f),
    .strip_select = RGBA(0xff8c0099),
    .cframe = RGBA(0x4772b3ff),
    .time_scrub_background = RGBA(0x1d1d1dff),
    .time_marker_line = RGBA(0xffffff4d),
    .time_marker_line_selected = RGBA(0xffffffb3),
    .ds_channel = RGBA(0x194e8080),
    .ds_subchannel = RGBA(0x0f2c4d80),
    .ds_ipoline = RGBA(0x94e575cc),
    .keytype_keyframe = RGBA(0xbfbfbfff),
    .keytype_extreme = RGBA(0xe8b3ccff),
    .keytype_breakdown = RGBA(0xb3dbe8ff),
    .keytype_jitter = RGBA(0x94e575ff),
    .keytype_movehold = RGBA(0x808080ff),
    .keytype_keyframe_select = RGBA(0xffbe33ff),
    .keytype_extreme_select = RGBA(0xf28080ff),
    .keytype_breakdown_select = RGBA(0x54bfedff),
    .keytype_jitter_select = RGBA(0x61c042ff),
    .keytype_movehold_select = RGBA(0xffaf23ff),
    .keyborder = RGBA(0x000000ff),
    .keyborder_select = RGBA(0x000000ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .keyframe_scale_fac = 1.0f,
    .handle_vertex_size = 4,
    .anim_active = RGBA(0x4d272766),
    .anim_preview_range = RGBA(0xa14d0066),
  },
  .space_nla = {
    .back = RGBA(0x30303000),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xa6a6a6ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x303030b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x30303000),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .list = RGBA(0x1d1d1dff),
    .list_title = RGBA(0xffffffff),
    .list_text = RGBA(0xb8b8b8ff),
    .list_text_hi = RGBA(0xffaf23ff),
    .navigation_bar = RGBA(0x1d1d1dff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .shade1 = RGBA(0x96969600),
    .grid = RGBA(0x2a2a2aff),
    .strip = RGBA(0x0d0d0d80),
    .strip_select = RGBA(0xff8c00ff),
    .cframe = RGBA(0x4772b3ff),
    .time_scrub_background = RGBA(0x161616ff),
    .time_marker_line = RGBA(0xffffff4d),
    .time_marker_line_selected = RGBA(0xffffffb3),
    .ds_channel = RGBA(0x0f2c4dff),
    .ds_subchannel = RGBA(0x7d98b3ff),
    .keyborder = RGBA(0x000000ff),
    .keyborder_select = RGBA(0x000000ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .handle_vertex_size = 4,
    .anim_active = RGBA(0x99541366),
    .anim_non_active = RGBA(0x4d3b174d),
    .anim_preview_range = RGBA(0xa14d0066),
    .nla_tweaking = RGBA(0x4df31a4d),
    .nla_tweakdupli = RGBA(0xd90000ff),
    .nla_track = RGBA(0x303030ff),
    .nla_transition = RGBA(0x1c2630ff),
    .nla_transition_sel = RGBA(0x2e75dbff),
    .nla_meta = RGBA(0x332642ff),
    .nla_meta_sel = RGBA(0x692196ff),
    .nla_sound = RGBA(0x2b3d3dff),
    .nla_sound_sel = RGBA(0x1f7a7aff),
  },
  .space_sequencer = {
    .back = RGBA(0x18181800),
    .title = RGBA(0xeeeeeeff),
    .text = RGBA(0xa6a6a6ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x303030b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x30303000),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .navigation_bar = RGBA(0x1d1d1dff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .shade1 = RGBA(0xa0a0a000),
    .grid = RGBA(0x303030ff),
    .vertex_select = RGBA(0xff8500ff),
    .bone_pose = RGBA(0x50c8ff50),
    .cframe = RGBA(0x4772b3ff),
    .time_scrub_background = RGBA(0x121212ff),
    .time_marker_line = RGBA(0xffffff4d),
    .time_marker_line_selected = RGBA(0xffffffb3),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .movie = RGBA(0x4d6890ff),
    .movieclip = RGBA(0x8f4c4cff),
    .mask = RGBA(0x8f5656ff),
    .image = RGBA(0x8f744bff),
    .scene = RGBA(0x808033ff),
    .audio = RGBA(0x448080ff),
    .effect = RGBA(0x514a73ff),
    .transition = RGBA(0x8f4571ff),
    .meta = RGBA(0x5b4d91ff),
    .text_strip = RGBA(0x824c8fff),
    .color_strip = RGBA(0x8f8f8fff),
    .active_strip = RGBA(0xd9d9d9ff),
    .selected_strip = RGBA(0xff8f0dff),
    .gp_vertex_size = 3,
    .gp_vertex_select = RGBA(0xff8500ff),
    .row_alternate = RGBA(0xffffff05),
    .anim_preview_range = RGBA(0xa14d0066),
    .metadatatext = RGBA(0xffffffff),
    .list = RGBA(0x18181800),
    .list_title = RGBA(0xffffffff),
    .list_text = RGBA(0xffffffff),
    .list_text_hi = RGBA(0xffffffff),
  },
  .space_image = {
    .back = RGBA(0x30303000),
    .title = RGBA(0xeeeeeeff),
    .text = RGBA(0xe6e6e6ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x303030b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x30303000),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .navigation_bar = RGBA(0x1d1d1dff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .grid = RGBA(0x303030ff),
    .wire_edit = RGBA(0xc0c0c0ff),
    .vertex_select = RGBA(0xff8500ff),
    .edge_select = RGBA(0xff8500ff),
    .face = RGBA(0xffffff0a),
    .face_select = RGBA(0xff85003c),
    .face_dot = RGBA(0xff8500ff),
    .cframe = RGBA(0x4772b3ff),
    .freestyle_face_mark = RGBA(0x7fff7f33),
    .handle_auto = RGBA(0x909000ff),
    .handle_align = RGBA(0x803060ff),
    .handle_sel_auto = RGBA(0xf0ff40ff),
    .handle_sel_align = RGBA(0xf090a0ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 3,
    .editmesh_active = RGBA(0xffffff40),
    .handle_vertex_select = RGBA(0xffff00ff),
    .handle_vertex_size = 5,
    .gp_vertex_size = 3,
    .gp_vertex_select = RGBA(0xff8500ff),
    .preview_back = RGBA(0x727272ff),
    .preview_stitch_face = RGBA(0x7f7f0033),
    .preview_stitch_edge = RGBA(0xff00ff33),
    .preview_stitch_vert = RGBA(0x0000ff33),
    .preview_stitch_stitchable = RGBA(0x00ff00ff),
    .preview_stitch_unstitchable = RGBA(0xff0000ff),
    .preview_stitch_active = RGBA(0xe1d2c323),
    .uv_shadow = RGBA(0x707070ff),
    .paint_curve_pivot = RGBA(0xff7f7f7f),
    .paint_curve_handle = RGBA(0x7fff7f7f),
    .metadatatext = RGBA(0xffffffff),
  },
  .space_text = {
    .back = RGBA(0x23232300),
    .title = RGBA(0xeeeeeeff),
    .text = RGBA(0xe6e6e6ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x303030b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x30303000),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .navigation_bar = RGBA(0x1d1d1dff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .shade2 = RGBA(0x2d4366e6),
    .hilite = RGBA(0xff0000ff),
    .grid = RGBA(0x1d1d1dff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .syntaxl = RGBA(0xe6d573ff),
    .syntaxs = RGBA(0xff734dff),
    .syntaxb = RGBA(0xe62e67ff),
    .syntaxn = RGBA(0x48c5e6ff),
    .syntaxv = RGBA(0x689d06ff),
    .syntaxc = RGBA(0x939393ff),
    .syntaxd = RGBA(0x9c73e6ff),
    .syntaxr = RGBA(0xc4753bff),
    .line_numbers = RGBA(0x777777ff),
  },
  .space_outliner = {
    .back = RGBA(0x28282800),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xc3c3c3ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x282828b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x30303000),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .navigation_bar = RGBA(0x1d1d1dff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .active = RGBA(0x334d80ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .match = RGBA(0x337f334c),
    .selected_highlight = RGBA(0x1d314dff),
    .selected_object = RGBA(0xe96a00ff),
    .active_object = RGBA(0xffaf29ff),
    .edited_object = RGBA(0x00806266),
    .row_alternate = RGBA(0xffffff04),
  },
  .space_node = {
    .back = RGBA(0x1d1d1d00),
    .title = RGBA(0xeeeeeeff),
    .text = RGBA(0xe6e6e6ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x1d1d1db3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x30303000),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .list = RGBA(0x303030ff),
    .list_title = RGBA(0xffffffff),
    .list_text = RGBA(0xb8b8b8ff),
    .list_text_hi = RGBA(0xffaf23ff),
    .navigation_bar = RGBA(0x1d1d1dff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .shade2 = RGBA(0x7f7f7f64),
    .grid = RGBA(0x28282800),
    .wire = RGBA(0x1a1a1aff),
    .select = RGBA(0xed5700ff),
    .active = RGBA(0xffffffff),
    .edge_select = RGBA(0xffffffb3),
    .console_output = RGBA(0x000000ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .noodle_curving = 4,
    .grid_levels = 3,
    .dash_alpha = 0.5f,
    .syntaxl = RGBA(0x303030ff),
    .syntaxs = RGBA(0x973c3cff),
    .syntaxb = RGBA(0xcccc00ff),
    .syntaxn = RGBA(0xff3371ff),
    .syntaxv = RGBA(0x12adffff),
    .syntaxc = RGBA(0x3b660aff),
    .syntaxd = RGBA(0x4c9797ff),
    .syntaxr = RGBA(0x8d8d8dff),
    .nodeclass_output = RGBA(0x4d0017ff),
    .nodeclass_filter = RGBA(0x551a80ff),
    .nodeclass_vector = RGBA(0x4d4dffff),
    .nodeclass_texture = RGBA(0xe66800ff),
    .nodeclass_shader = RGBA(0x24b524ff),
    .nodeclass_script = RGBA(0x084d4dff),
    .nodeclass_pattern = RGBA(0x6c696fff),
    .nodeclass_layout = RGBA(0x6c696fff),
    .nodeclass_geometry = RGBA(0x00d6a3ff),
    .nodeclass_attribute = RGBA(0x001566ff),
    .movie = RGBA(0x0f0f0fcc),
    .gp_vertex_size = 3,
    .gp_vertex = RGBA(0x97979700),
    .gp_vertex_select = RGBA(0xff8500ff),
  },
  .space_preferences = {
    .back = RGBA(0x30303000),
    .title = RGBA(0xeeeeeeff),
    .text = RGBA(0xe6e6e6ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x303030b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x1d1d1dff),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .navigation_bar = RGBA(0x303030ff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
  },
  .space_project_settings = {
    .back = RGBA(0x30303000),
    .title = RGBA(0xeeeeeeff),
    .text = RGBA(0xe6e6e6ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x303030b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x1d1d1dff),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .navigation_bar = RGBA(0x303030ff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
  },
  .space_console = {
    .back = RGBA(0x1d1d1d00),
    .title = RGBA(0xeeeeeeff),
    .text = RGBA(0xe6e6e6ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x303030b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x30303000),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .navigation_bar = RGBA(0x1d1d1dff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .console_output = RGBA(0x71a8ffff),
    .console_input = RGBA(0xf2f2f2ff),
    .console_info = RGBA(0x95d600ff),
    .console_error = RGBA(0xff4d84ff),
    .console_cursor = RGBA(0xff0000ff),
    .console_select = RGBA(0xffffff30),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
  },
  .space_clip = {
    .back = RGBA(0x30303000),
    .title = RGBA(0xeeeeeeff),
    .text = RGBA(0xa6a6a6ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x303030b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x30303000),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .list = RGBA(0x303030ff),
    .list_title = RGBA(0xffffff00),
    .list_text = RGBA(0xb8b8b8ff),
    .list_text_hi = RGBA(0xffaf23ff),
    .navigation_bar = RGBA(0x1d1d1dff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .grid = RGBA(0x181818ff),
    .strip = RGBA(0xffffff80),
    .strip_select = RGBA(0xff8c00ff),
    .cframe = RGBA(0x4772b3ff),
    .time_scrub_background = RGBA(0x181818ff),
    .time_marker_line = RGBA(0xffffff4d),
    .time_marker_line_selected = RGBA(0xffffffb3),
    .handle_auto = RGBA(0x909000ff),
    .handle_align = RGBA(0x803060ff),
    .handle_auto_clamped = RGBA(0x99403000),
    .handle_sel_auto = RGBA(0xf0ff40ff),
    .handle_sel_align = RGBA(0xf090a0ff),
    .handle_sel_auto_clamped = RGBA(0xf0af9000),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .handle_vertex_select = RGBA(0xff8500ff),
    .handle_vertex_size = 5,
    .marker = RGBA(0x808000ff),
    .act_marker = RGBA(0xffffffff),
    .sel_marker = RGBA(0xffff00ff),
    .dis_marker = RGBA(0x7f0000ff),
    .lock_marker = RGBA(0x7f7f7fff),
    .path_before = RGBA(0xff0000ff),
    .path_after = RGBA(0x0000ffff),
    .path_keyframe_before = RGBA(0xffc4c4ff),
    .path_keyframe_after = RGBA(0xc4c4ffff),
    .gp_vertex_size = 1,
    .metadatatext = RGBA(0xffffffff),
  },
  .space_topbar = {
    .back = RGBA(0x18181800),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xe6e6e6ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x181818b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x30303000),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .navigation_bar = RGBA(0x1d1d1dff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .gp_vertex_size = 3,
  },
  .space_statusbar = {
    .back = RGBA(0x30303000),
    .title = RGBA(0xffffffff),
    .text = RGBA(0x838383ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x181818b3),
    .header_text = RGBA(0x888888ff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x30303000),
    .button_text = RGBA(0xcccccc00),
    .button_text_hi = RGBA(0xffffffff),
    .navigation_bar = RGBA(0x1d1d1dff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .gp_vertex_size = 3,
  },
  .space_spreadsheet = {
    .back = RGBA(0x28282800),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xc3c3c3ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x303030b3),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x303030ff),
    .tab_inactive = RGBA(0x1d1d1dff),
    .tab_back = RGBA(0x181818ff),
    .tab_outline = RGBA(0x3d3d3dff),
    .button = RGBA(0x30303000),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .list = RGBA(0x303030ff),
    .list_title = RGBA(0xc3c3c3ff),
    .list_text = RGBA(0xb8b8b8ff),
    .list_text_hi = RGBA(0xffaf23ff),
    .navigation_bar = RGBA(0x1d1d1dff),
    .execution_buts = RGBA(0x303030ff),
    .panelcolors = {
      .header = RGBA(0x3d3d3dff),
      .back = RGBA(0x3d3d3dff),
      .sub_back = RGBA(0x0000001f),
    },
    .hilite = RGBA(0x80808080),
    .active = RGBA(0x3b5689ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .match = RGBA(0x337f334c),
    .selected_highlight = RGBA(0x223a5bff),
    .selected_object = RGBA(0xe96a00ff),
    .active_object = RGBA(0xffaf29ff),
    .edited_object = RGBA(0x00806266),
    .row_alternate = RGBA(0xffffff04),
  },
  .tarm = {
    {
      .solid = RGBA(0x9a0000ff),
      .select = RGBA(0xbd1111ff),
      .active = RGBA(0xf70a0aff),
    },
    {
      .solid = RGBA(0xf74018ff),
      .select = RGBA(0xf66913ff),
      .active = RGBA(0xfa9900ff),
    },
    {
      .solid = RGBA(0x1e9109ff),
      .select = RGBA(0x59b70bff),
      .active = RGBA(0x83ef1dff),
    },
    {
      .solid = RGBA(0x0a3694ff),
      .select = RGBA(0x3667dfff),
      .active = RGBA(0x5ec1efff),
    },
    {
      .solid = RGBA(0xa9294eff),
      .select = RGBA(0xc1416aff),
      .active = RGBA(0xf05d91ff),
    },
    {
      .solid = RGBA(0x430c78ff),
      .select = RGBA(0x543aa3ff),
      .active = RGBA(0x8764d5ff),
    },
    {
      .solid = RGBA(0x24785aff),
      .select = RGBA(0x3c9579ff),
      .active = RGBA(0x6fb6abff),
    },
    {
      .solid = RGBA(0x4b707cff),
      .select = RGBA(0x6a8691ff),
      .active = RGBA(0x9bc2cdff),
    },
    {
      .solid = RGBA(0xf4c90cff),
      .select = RGBA(0xeec236ff),
      .active = RGBA(0xf3ff00ff),
    },
    {
      .solid = RGBA(0x1e2024ff),
      .select = RGBA(0x484c56ff),
      .active = RGBA(0xffffffff),
    },
    {
      .solid = RGBA(0x6f2f6aff),
      .select = RGBA(0x9845beff),
      .active = RGBA(0xd330d6ff),
    },
    {
      .solid = RGBA(0x6c8e22ff),
      .select = RGBA(0x7fb022ff),
      .active = RGBA(0xbbef5bff),
    },
    {
      .solid = RGBA(0x8d8d8dff),
      .select = RGBA(0xb0b0b0ff),
      .active = RGBA(0xdededeff),
    },
    {
      .solid = RGBA(0x834326ff),
      .select = RGBA(0x8b5811ff),
      .active = RGBA(0xbd6a11ff),
    },
    {
      .solid = RGBA(0x08310eff),
      .select = RGBA(0x1c430bff),
      .active = RGBA(0x34622bff),
    },
    {
      .solid = RGBA(0x000000ff),
      .select = RGBA(0x000000ff),
      .active = RGBA(0x000000ff),
    },
    {
      .solid = RGBA(0x000000ff),
      .select = RGBA(0x000000ff),
      .active = RGBA(0x000000ff),
    },
    {
      .solid = RGBA(0x000000ff),
      .select = RGBA(0x000000ff),
      .active = RGBA(0x000000ff),
    },
    {
      .solid = RGBA(0x000000ff),
      .select = RGBA(0x000000ff),
      .active = RGBA(0x000000ff),
    },
    {
      .solid = RGBA(0x000000ff),
      .select = RGBA(0x000000ff),
      .active = RGBA(0x000000ff),
    },
  },
  .collection_color = {
    {
      .color = RGBA(0xe2605bff),
    },
    {
      .color = RGBA(0xf1a355ff),
    },
    {
      .color = RGBA(0xf1dc55ff),
    },
    {
      .color = RGBA(0x7bcc7bff),
    },
    {
      .color = RGBA(0x5db6eaff),
    },
    {
      .color = RGBA(0x8d59daff),
    },
    {
      .color = RGBA(0xc673b8ff),
    },
    {
      .color = RGBA(0x7a5441ff),
    },
  },
  .strip_color = {
    {
      .color = RGBA(0xe2605bff),
    },
    {
      .color = RGBA(0xf1a355ff),
    },
    {
      .color = RGBA(0xf1dc55ff),
    },
    {
      .color = RGBA(0x7bcc7bff),
    },
    {
      .color = RGBA(0x5db6eaff),
    },
    {
      .color = RGBA(0x8d59daff),
    },
    {
      .color = RGBA(0xc673b8ff),
    },
    {
      .color = RGBA(0x7a5441ff),
    },
    {
      .color = RGBA(0x5f5f5fff),
    },
  },
};

/* clang-format on */
