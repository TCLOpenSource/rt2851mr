/**
* @file Merlin5_MEMC_KPOST_TOP
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KPOST_TOP_REG_H_
#define _RBUS_KPOST_TOP_REG_H_

#include "rbus_types.h"



//  KPOST_TOP Register Address
#define  KPOST_TOP_KPOST_TOP_00                                                 0x1809D000
#define  KPOST_TOP_KPOST_TOP_00_reg_addr                                         "0xB809D000"
#define  KPOST_TOP_KPOST_TOP_00_reg                                              0xB809D000
#define  KPOST_TOP_KPOST_TOP_00_inst_addr                                        "0x0000"
#define  set_KPOST_TOP_KPOST_TOP_00_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_00_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_00_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_00_reg))
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_color_shift                          (29)
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_v_shift                              (16)
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_en_shift                             (15)
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_3d_flag_shift                        (14)
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_show_shift                           (13)
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_h_shift                              (0)
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_color_mask                           (0xE0000000)
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_v_mask                               (0x1FFF0000)
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_en_mask                              (0x00008000)
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_3d_flag_mask                         (0x00004000)
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_show_mask                            (0x00002000)
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_h_mask                               (0x00001FFF)
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_color(data)                          (0xE0000000&((data)<<29))
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_v(data)                              (0x1FFF0000&((data)<<16))
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_en(data)                             (0x00008000&((data)<<15))
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_3d_flag(data)                        (0x00004000&((data)<<14))
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_show(data)                           (0x00002000&((data)<<13))
#define  KPOST_TOP_KPOST_TOP_00_post_cursor_h(data)                              (0x00001FFF&(data))
#define  KPOST_TOP_KPOST_TOP_00_get_post_cursor_color(data)                      ((0xE0000000&(data))>>29)
#define  KPOST_TOP_KPOST_TOP_00_get_post_cursor_v(data)                          ((0x1FFF0000&(data))>>16)
#define  KPOST_TOP_KPOST_TOP_00_get_post_cursor_en(data)                         ((0x00008000&(data))>>15)
#define  KPOST_TOP_KPOST_TOP_00_get_post_cursor_3d_flag(data)                    ((0x00004000&(data))>>14)
#define  KPOST_TOP_KPOST_TOP_00_get_post_cursor_show(data)                       ((0x00002000&(data))>>13)
#define  KPOST_TOP_KPOST_TOP_00_get_post_cursor_h(data)                          (0x00001FFF&(data))

#define  KPOST_TOP_KPOST_TOP_04                                                 0x1809D004
#define  KPOST_TOP_KPOST_TOP_04_reg_addr                                         "0xB809D004"
#define  KPOST_TOP_KPOST_TOP_04_reg                                              0xB809D004
#define  KPOST_TOP_KPOST_TOP_04_inst_addr                                        "0x0001"
#define  set_KPOST_TOP_KPOST_TOP_04_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_04_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_04_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_04_reg))
#define  KPOST_TOP_KPOST_TOP_04_post_out_vtotal_int_shift                        (20)
#define  KPOST_TOP_KPOST_TOP_04_post_out_measure_en_shift                        (19)
#define  KPOST_TOP_KPOST_TOP_04_post_out_measure_sel_shift                       (16)
#define  KPOST_TOP_KPOST_TOP_04_post_out_int_sel_shift                           (13)
#define  KPOST_TOP_KPOST_TOP_04_post_dummy_00_shift                              (0)
#define  KPOST_TOP_KPOST_TOP_04_post_out_vtotal_int_mask                         (0xFFF00000)
#define  KPOST_TOP_KPOST_TOP_04_post_out_measure_en_mask                         (0x00080000)
#define  KPOST_TOP_KPOST_TOP_04_post_out_measure_sel_mask                        (0x00070000)
#define  KPOST_TOP_KPOST_TOP_04_post_out_int_sel_mask                            (0x0000E000)
#define  KPOST_TOP_KPOST_TOP_04_post_dummy_00_mask                               (0x00001FFF)
#define  KPOST_TOP_KPOST_TOP_04_post_out_vtotal_int(data)                        (0xFFF00000&((data)<<20))
#define  KPOST_TOP_KPOST_TOP_04_post_out_measure_en(data)                        (0x00080000&((data)<<19))
#define  KPOST_TOP_KPOST_TOP_04_post_out_measure_sel(data)                       (0x00070000&((data)<<16))
#define  KPOST_TOP_KPOST_TOP_04_post_out_int_sel(data)                           (0x0000E000&((data)<<13))
#define  KPOST_TOP_KPOST_TOP_04_post_dummy_00(data)                              (0x00001FFF&(data))
#define  KPOST_TOP_KPOST_TOP_04_get_post_out_vtotal_int(data)                    ((0xFFF00000&(data))>>20)
#define  KPOST_TOP_KPOST_TOP_04_get_post_out_measure_en(data)                    ((0x00080000&(data))>>19)
#define  KPOST_TOP_KPOST_TOP_04_get_post_out_measure_sel(data)                   ((0x00070000&(data))>>16)
#define  KPOST_TOP_KPOST_TOP_04_get_post_out_int_sel(data)                       ((0x0000E000&(data))>>13)
#define  KPOST_TOP_KPOST_TOP_04_get_post_dummy_00(data)                          (0x00001FFF&(data))

#define  KPOST_TOP_KPOST_TOP_08                                                 0x1809D008
#define  KPOST_TOP_KPOST_TOP_08_reg_addr                                         "0xB809D008"
#define  KPOST_TOP_KPOST_TOP_08_reg                                              0xB809D008
#define  KPOST_TOP_KPOST_TOP_08_inst_addr                                        "0x0002"
#define  set_KPOST_TOP_KPOST_TOP_08_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_08_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_08_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_08_reg))
#define  KPOST_TOP_KPOST_TOP_08_blackinsert_frame_en_shift                       (31)
#define  KPOST_TOP_KPOST_TOP_08_blackinsert_line_patt_l_shift                    (15)
#define  KPOST_TOP_KPOST_TOP_08_blackinsert_line_type_shift                      (11)
#define  KPOST_TOP_KPOST_TOP_08_blackinsert_line_en_shift                        (10)
#define  KPOST_TOP_KPOST_TOP_08_post_cursor_src_3d_en_shift                      (9)
#define  KPOST_TOP_KPOST_TOP_08_post_int_en_shift                                (5)
#define  KPOST_TOP_KPOST_TOP_08_post_int_wclr_shift                              (1)
#define  KPOST_TOP_KPOST_TOP_08_post_int_source_sel_shift                        (0)
#define  KPOST_TOP_KPOST_TOP_08_blackinsert_frame_en_mask                        (0x80000000)
#define  KPOST_TOP_KPOST_TOP_08_blackinsert_line_patt_l_mask                     (0x7FFF8000)
#define  KPOST_TOP_KPOST_TOP_08_blackinsert_line_type_mask                       (0x00007800)
#define  KPOST_TOP_KPOST_TOP_08_blackinsert_line_en_mask                         (0x00000400)
#define  KPOST_TOP_KPOST_TOP_08_post_cursor_src_3d_en_mask                       (0x00000200)
#define  KPOST_TOP_KPOST_TOP_08_post_int_en_mask                                 (0x000001E0)
#define  KPOST_TOP_KPOST_TOP_08_post_int_wclr_mask                               (0x0000001E)
#define  KPOST_TOP_KPOST_TOP_08_post_int_source_sel_mask                         (0x00000001)
#define  KPOST_TOP_KPOST_TOP_08_blackinsert_frame_en(data)                       (0x80000000&((data)<<31))
#define  KPOST_TOP_KPOST_TOP_08_blackinsert_line_patt_l(data)                    (0x7FFF8000&((data)<<15))
#define  KPOST_TOP_KPOST_TOP_08_blackinsert_line_type(data)                      (0x00007800&((data)<<11))
#define  KPOST_TOP_KPOST_TOP_08_blackinsert_line_en(data)                        (0x00000400&((data)<<10))
#define  KPOST_TOP_KPOST_TOP_08_post_cursor_src_3d_en(data)                      (0x00000200&((data)<<9))
#define  KPOST_TOP_KPOST_TOP_08_post_int_en(data)                                (0x000001E0&((data)<<5))
#define  KPOST_TOP_KPOST_TOP_08_post_int_wclr(data)                              (0x0000001E&((data)<<1))
#define  KPOST_TOP_KPOST_TOP_08_post_int_source_sel(data)                        (0x00000001&(data))
#define  KPOST_TOP_KPOST_TOP_08_get_blackinsert_frame_en(data)                   ((0x80000000&(data))>>31)
#define  KPOST_TOP_KPOST_TOP_08_get_blackinsert_line_patt_l(data)                ((0x7FFF8000&(data))>>15)
#define  KPOST_TOP_KPOST_TOP_08_get_blackinsert_line_type(data)                  ((0x00007800&(data))>>11)
#define  KPOST_TOP_KPOST_TOP_08_get_blackinsert_line_en(data)                    ((0x00000400&(data))>>10)
#define  KPOST_TOP_KPOST_TOP_08_get_post_cursor_src_3d_en(data)                  ((0x00000200&(data))>>9)
#define  KPOST_TOP_KPOST_TOP_08_get_post_int_en(data)                            ((0x000001E0&(data))>>5)
#define  KPOST_TOP_KPOST_TOP_08_get_post_int_wclr(data)                          ((0x0000001E&(data))>>1)
#define  KPOST_TOP_KPOST_TOP_08_get_post_int_source_sel(data)                    (0x00000001&(data))

#define  KPOST_TOP_KPOST_TOP_0C                                                 0x1809D00C
#define  KPOST_TOP_KPOST_TOP_0C_reg_addr                                         "0xB809D00C"
#define  KPOST_TOP_KPOST_TOP_0C_reg                                              0xB809D00C
#define  KPOST_TOP_KPOST_TOP_0C_inst_addr                                        "0x0003"
#define  set_KPOST_TOP_KPOST_TOP_0C_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_0C_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_0C_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_0C_reg))
#define  KPOST_TOP_KPOST_TOP_0C_blackinsert_line_patt_r_shift                    (15)
#define  KPOST_TOP_KPOST_TOP_0C_blackinsert_half_v_en_shift                      (14)
#define  KPOST_TOP_KPOST_TOP_0C_blackinsert_half_v_mode_shift                    (13)
#define  KPOST_TOP_KPOST_TOP_0C_blackinsert_half_v_center_shift                  (0)
#define  KPOST_TOP_KPOST_TOP_0C_blackinsert_line_patt_r_mask                     (0x7FFF8000)
#define  KPOST_TOP_KPOST_TOP_0C_blackinsert_half_v_en_mask                       (0x00004000)
#define  KPOST_TOP_KPOST_TOP_0C_blackinsert_half_v_mode_mask                     (0x00002000)
#define  KPOST_TOP_KPOST_TOP_0C_blackinsert_half_v_center_mask                   (0x00001FFF)
#define  KPOST_TOP_KPOST_TOP_0C_blackinsert_line_patt_r(data)                    (0x7FFF8000&((data)<<15))
#define  KPOST_TOP_KPOST_TOP_0C_blackinsert_half_v_en(data)                      (0x00004000&((data)<<14))
#define  KPOST_TOP_KPOST_TOP_0C_blackinsert_half_v_mode(data)                    (0x00002000&((data)<<13))
#define  KPOST_TOP_KPOST_TOP_0C_blackinsert_half_v_center(data)                  (0x00001FFF&(data))
#define  KPOST_TOP_KPOST_TOP_0C_get_blackinsert_line_patt_r(data)                ((0x7FFF8000&(data))>>15)
#define  KPOST_TOP_KPOST_TOP_0C_get_blackinsert_half_v_en(data)                  ((0x00004000&(data))>>14)
#define  KPOST_TOP_KPOST_TOP_0C_get_blackinsert_half_v_mode(data)                ((0x00002000&(data))>>13)
#define  KPOST_TOP_KPOST_TOP_0C_get_blackinsert_half_v_center(data)              (0x00001FFF&(data))

#define  KPOST_TOP_KPOST_TOP_10                                                 0x1809D010
#define  KPOST_TOP_KPOST_TOP_10_reg_addr                                         "0xB809D010"
#define  KPOST_TOP_KPOST_TOP_10_reg                                              0xB809D010
#define  KPOST_TOP_KPOST_TOP_10_inst_addr                                        "0x0004"
#define  set_KPOST_TOP_KPOST_TOP_10_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_10_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_10_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_10_reg))
#define  KPOST_TOP_KPOST_TOP_10_post_patt_vtotal_shift                           (16)
#define  KPOST_TOP_KPOST_TOP_10_post_patt_htotal_shift                           (0)
#define  KPOST_TOP_KPOST_TOP_10_post_patt_vtotal_mask                            (0xFFFF0000)
#define  KPOST_TOP_KPOST_TOP_10_post_patt_htotal_mask                            (0x0000FFFF)
#define  KPOST_TOP_KPOST_TOP_10_post_patt_vtotal(data)                           (0xFFFF0000&((data)<<16))
#define  KPOST_TOP_KPOST_TOP_10_post_patt_htotal(data)                           (0x0000FFFF&(data))
#define  KPOST_TOP_KPOST_TOP_10_get_post_patt_vtotal(data)                       ((0xFFFF0000&(data))>>16)
#define  KPOST_TOP_KPOST_TOP_10_get_post_patt_htotal(data)                       (0x0000FFFF&(data))

#define  KPOST_TOP_KPOST_TOP_14                                                 0x1809D014
#define  KPOST_TOP_KPOST_TOP_14_reg_addr                                         "0xB809D014"
#define  KPOST_TOP_KPOST_TOP_14_reg                                              0xB809D014
#define  KPOST_TOP_KPOST_TOP_14_inst_addr                                        "0x0005"
#define  set_KPOST_TOP_KPOST_TOP_14_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_14_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_14_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_14_reg))
#define  KPOST_TOP_KPOST_TOP_14_post_patt_vact_shift                             (16)
#define  KPOST_TOP_KPOST_TOP_14_post_patt_hact_shift                             (0)
#define  KPOST_TOP_KPOST_TOP_14_post_patt_vact_mask                              (0xFFFF0000)
#define  KPOST_TOP_KPOST_TOP_14_post_patt_hact_mask                              (0x0000FFFF)
#define  KPOST_TOP_KPOST_TOP_14_post_patt_vact(data)                             (0xFFFF0000&((data)<<16))
#define  KPOST_TOP_KPOST_TOP_14_post_patt_hact(data)                             (0x0000FFFF&(data))
#define  KPOST_TOP_KPOST_TOP_14_get_post_patt_vact(data)                         ((0xFFFF0000&(data))>>16)
#define  KPOST_TOP_KPOST_TOP_14_get_post_patt_hact(data)                         (0x0000FFFF&(data))

#define  KPOST_TOP_KPOST_TOP_18                                                 0x1809D018
#define  KPOST_TOP_KPOST_TOP_18_reg_addr                                         "0xB809D018"
#define  KPOST_TOP_KPOST_TOP_18_reg                                              0xB809D018
#define  KPOST_TOP_KPOST_TOP_18_inst_addr                                        "0x0006"
#define  set_KPOST_TOP_KPOST_TOP_18_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_18_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_18_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_18_reg))
#define  KPOST_TOP_KPOST_TOP_18_post_patt_vs_bporch_shift                        (24)
#define  KPOST_TOP_KPOST_TOP_18_post_patt_hs_bporch_shift                        (16)
#define  KPOST_TOP_KPOST_TOP_18_post_patt_vs_width_shift                         (8)
#define  KPOST_TOP_KPOST_TOP_18_post_patt_hs_width_shift                         (0)
#define  KPOST_TOP_KPOST_TOP_18_post_patt_vs_bporch_mask                         (0xFF000000)
#define  KPOST_TOP_KPOST_TOP_18_post_patt_hs_bporch_mask                         (0x00FF0000)
#define  KPOST_TOP_KPOST_TOP_18_post_patt_vs_width_mask                          (0x0000FF00)
#define  KPOST_TOP_KPOST_TOP_18_post_patt_hs_width_mask                          (0x000000FF)
#define  KPOST_TOP_KPOST_TOP_18_post_patt_vs_bporch(data)                        (0xFF000000&((data)<<24))
#define  KPOST_TOP_KPOST_TOP_18_post_patt_hs_bporch(data)                        (0x00FF0000&((data)<<16))
#define  KPOST_TOP_KPOST_TOP_18_post_patt_vs_width(data)                         (0x0000FF00&((data)<<8))
#define  KPOST_TOP_KPOST_TOP_18_post_patt_hs_width(data)                         (0x000000FF&(data))
#define  KPOST_TOP_KPOST_TOP_18_get_post_patt_vs_bporch(data)                    ((0xFF000000&(data))>>24)
#define  KPOST_TOP_KPOST_TOP_18_get_post_patt_hs_bporch(data)                    ((0x00FF0000&(data))>>16)
#define  KPOST_TOP_KPOST_TOP_18_get_post_patt_vs_width(data)                     ((0x0000FF00&(data))>>8)
#define  KPOST_TOP_KPOST_TOP_18_get_post_patt_hs_width(data)                     (0x000000FF&(data))

#define  KPOST_TOP_KPOST_TOP_1C                                                 0x1809D01C
#define  KPOST_TOP_KPOST_TOP_1C_reg_addr                                         "0xB809D01C"
#define  KPOST_TOP_KPOST_TOP_1C_reg                                              0xB809D01C
#define  KPOST_TOP_KPOST_TOP_1C_inst_addr                                        "0x0007"
#define  set_KPOST_TOP_KPOST_TOP_1C_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_1C_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_1C_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_1C_reg))
#define  KPOST_TOP_KPOST_TOP_1C_post_mon_sel_shift                               (27)
#define  KPOST_TOP_KPOST_TOP_1C_post_patt_0f_region_shift                        (15)
#define  KPOST_TOP_KPOST_TOP_1C_post_patt_0e_grid_shift                          (7)
#define  KPOST_TOP_KPOST_TOP_1C_post_patt_mode_shift                             (3)
#define  KPOST_TOP_KPOST_TOP_1C_post_hv_measure_shift                            (2)
#define  KPOST_TOP_KPOST_TOP_1C_post_patt_slf_gen_shift                          (1)
#define  KPOST_TOP_KPOST_TOP_1C_post_patt_enable_shift                           (0)
#define  KPOST_TOP_KPOST_TOP_1C_post_mon_sel_mask                                (0xF8000000)
#define  KPOST_TOP_KPOST_TOP_1C_post_patt_0f_region_mask                         (0x07FF8000)
#define  KPOST_TOP_KPOST_TOP_1C_post_patt_0e_grid_mask                           (0x00007F80)
#define  KPOST_TOP_KPOST_TOP_1C_post_patt_mode_mask                              (0x00000078)
#define  KPOST_TOP_KPOST_TOP_1C_post_hv_measure_mask                             (0x00000004)
#define  KPOST_TOP_KPOST_TOP_1C_post_patt_slf_gen_mask                           (0x00000002)
#define  KPOST_TOP_KPOST_TOP_1C_post_patt_enable_mask                            (0x00000001)
#define  KPOST_TOP_KPOST_TOP_1C_post_mon_sel(data)                               (0xF8000000&((data)<<27))
#define  KPOST_TOP_KPOST_TOP_1C_post_patt_0f_region(data)                        (0x07FF8000&((data)<<15))
#define  KPOST_TOP_KPOST_TOP_1C_post_patt_0e_grid(data)                          (0x00007F80&((data)<<7))
#define  KPOST_TOP_KPOST_TOP_1C_post_patt_mode(data)                             (0x00000078&((data)<<3))
#define  KPOST_TOP_KPOST_TOP_1C_post_hv_measure(data)                            (0x00000004&((data)<<2))
#define  KPOST_TOP_KPOST_TOP_1C_post_patt_slf_gen(data)                          (0x00000002&((data)<<1))
#define  KPOST_TOP_KPOST_TOP_1C_post_patt_enable(data)                           (0x00000001&(data))
#define  KPOST_TOP_KPOST_TOP_1C_get_post_mon_sel(data)                           ((0xF8000000&(data))>>27)
#define  KPOST_TOP_KPOST_TOP_1C_get_post_patt_0f_region(data)                    ((0x07FF8000&(data))>>15)
#define  KPOST_TOP_KPOST_TOP_1C_get_post_patt_0e_grid(data)                      ((0x00007F80&(data))>>7)
#define  KPOST_TOP_KPOST_TOP_1C_get_post_patt_mode(data)                         ((0x00000078&(data))>>3)
#define  KPOST_TOP_KPOST_TOP_1C_get_post_hv_measure(data)                        ((0x00000004&(data))>>2)
#define  KPOST_TOP_KPOST_TOP_1C_get_post_patt_slf_gen(data)                      ((0x00000002&(data))>>1)
#define  KPOST_TOP_KPOST_TOP_1C_get_post_patt_enable(data)                       (0x00000001&(data))

#define  KPOST_TOP_KPOST_TOP_20                                                 0x1809D020
#define  KPOST_TOP_KPOST_TOP_20_reg_addr                                         "0xB809D020"
#define  KPOST_TOP_KPOST_TOP_20_reg                                              0xB809D020
#define  KPOST_TOP_KPOST_TOP_20_inst_addr                                        "0x0008"
#define  set_KPOST_TOP_KPOST_TOP_20_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_20_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_20_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_20_reg))
#define  KPOST_TOP_KPOST_TOP_20_post_cursor_h_width_shift                        (28)
#define  KPOST_TOP_KPOST_TOP_20_post_patt_r_mask_shift                           (12)
#define  KPOST_TOP_KPOST_TOP_20_post_patt_4p_rgb_shift                           (0)
#define  KPOST_TOP_KPOST_TOP_20_post_cursor_h_width_mask                         (0xF0000000)
#define  KPOST_TOP_KPOST_TOP_20_post_patt_r_mask_mask                            (0x0FFFF000)
#define  KPOST_TOP_KPOST_TOP_20_post_patt_4p_rgb_mask                            (0x00000FFF)
#define  KPOST_TOP_KPOST_TOP_20_post_cursor_h_width(data)                        (0xF0000000&((data)<<28))
#define  KPOST_TOP_KPOST_TOP_20_post_patt_r_mask(data)                           (0x0FFFF000&((data)<<12))
#define  KPOST_TOP_KPOST_TOP_20_post_patt_4p_rgb(data)                           (0x00000FFF&(data))
#define  KPOST_TOP_KPOST_TOP_20_get_post_cursor_h_width(data)                    ((0xF0000000&(data))>>28)
#define  KPOST_TOP_KPOST_TOP_20_get_post_patt_r_mask(data)                       ((0x0FFFF000&(data))>>12)
#define  KPOST_TOP_KPOST_TOP_20_get_post_patt_4p_rgb(data)                       (0x00000FFF&(data))

#define  KPOST_TOP_KPOST_TOP_24                                                 0x1809D024
#define  KPOST_TOP_KPOST_TOP_24_reg_addr                                         "0xB809D024"
#define  KPOST_TOP_KPOST_TOP_24_reg                                              0xB809D024
#define  KPOST_TOP_KPOST_TOP_24_inst_addr                                        "0x0009"
#define  set_KPOST_TOP_KPOST_TOP_24_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_24_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_24_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_24_reg))
#define  KPOST_TOP_KPOST_TOP_24_post_patt_b_mask_shift                           (16)
#define  KPOST_TOP_KPOST_TOP_24_post_patt_g_mask_shift                           (0)
#define  KPOST_TOP_KPOST_TOP_24_post_patt_b_mask_mask                            (0xFFFF0000)
#define  KPOST_TOP_KPOST_TOP_24_post_patt_g_mask_mask                            (0x0000FFFF)
#define  KPOST_TOP_KPOST_TOP_24_post_patt_b_mask(data)                           (0xFFFF0000&((data)<<16))
#define  KPOST_TOP_KPOST_TOP_24_post_patt_g_mask(data)                           (0x0000FFFF&(data))
#define  KPOST_TOP_KPOST_TOP_24_get_post_patt_b_mask(data)                       ((0xFFFF0000&(data))>>16)
#define  KPOST_TOP_KPOST_TOP_24_get_post_patt_g_mask(data)                       (0x0000FFFF&(data))

#define  KPOST_TOP_KPOST_TOP_28                                                 0x1809D028
#define  KPOST_TOP_KPOST_TOP_28_reg_addr                                         "0xB809D028"
#define  KPOST_TOP_KPOST_TOP_28_reg                                              0xB809D028
#define  KPOST_TOP_KPOST_TOP_28_inst_addr                                        "0x000A"
#define  set_KPOST_TOP_KPOST_TOP_28_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_28_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_28_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_28_reg))
#define  KPOST_TOP_KPOST_TOP_28_kpost_test1_shift                                (26)
#define  KPOST_TOP_KPOST_TOP_28_kpost_sram_ls_value_shift                        (25)
#define  KPOST_TOP_KPOST_TOP_28_kpost_sram_ls_en_shift                           (24)
#define  KPOST_TOP_KPOST_TOP_28_kpost_4port_hde_center_value_shift               (13)
#define  KPOST_TOP_KPOST_TOP_28_hde_center_value_shift                           (1)
#define  KPOST_TOP_KPOST_TOP_28_pr_mode_en_shift                                 (0)
#define  KPOST_TOP_KPOST_TOP_28_kpost_test1_mask                                 (0x04000000)
#define  KPOST_TOP_KPOST_TOP_28_kpost_sram_ls_value_mask                         (0x02000000)
#define  KPOST_TOP_KPOST_TOP_28_kpost_sram_ls_en_mask                            (0x01000000)
#define  KPOST_TOP_KPOST_TOP_28_kpost_4port_hde_center_value_mask                (0x00FFE000)
#define  KPOST_TOP_KPOST_TOP_28_hde_center_value_mask                            (0x00001FFE)
#define  KPOST_TOP_KPOST_TOP_28_pr_mode_en_mask                                  (0x00000001)
#define  KPOST_TOP_KPOST_TOP_28_kpost_test1(data)                                (0x04000000&((data)<<26))
#define  KPOST_TOP_KPOST_TOP_28_kpost_sram_ls_value(data)                        (0x02000000&((data)<<25))
#define  KPOST_TOP_KPOST_TOP_28_kpost_sram_ls_en(data)                           (0x01000000&((data)<<24))
#define  KPOST_TOP_KPOST_TOP_28_kpost_4port_hde_center_value(data)               (0x00FFE000&((data)<<13))
#define  KPOST_TOP_KPOST_TOP_28_hde_center_value(data)                           (0x00001FFE&((data)<<1))
#define  KPOST_TOP_KPOST_TOP_28_pr_mode_en(data)                                 (0x00000001&(data))
#define  KPOST_TOP_KPOST_TOP_28_get_kpost_test1(data)                            ((0x04000000&(data))>>26)
#define  KPOST_TOP_KPOST_TOP_28_get_kpost_sram_ls_value(data)                    ((0x02000000&(data))>>25)
#define  KPOST_TOP_KPOST_TOP_28_get_kpost_sram_ls_en(data)                       ((0x01000000&(data))>>24)
#define  KPOST_TOP_KPOST_TOP_28_get_kpost_4port_hde_center_value(data)           ((0x00FFE000&(data))>>13)
#define  KPOST_TOP_KPOST_TOP_28_get_hde_center_value(data)                       ((0x00001FFE&(data))>>1)
#define  KPOST_TOP_KPOST_TOP_28_get_pr_mode_en(data)                             (0x00000001&(data))

#define  KPOST_TOP_KPOST_TOP_30                                                 0x1809D030
#define  KPOST_TOP_KPOST_TOP_30_reg_addr                                         "0xB809D030"
#define  KPOST_TOP_KPOST_TOP_30_reg                                              0xB809D030
#define  KPOST_TOP_KPOST_TOP_30_inst_addr                                        "0x000B"
#define  set_KPOST_TOP_KPOST_TOP_30_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_30_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_30_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_30_reg))
#define  KPOST_TOP_KPOST_TOP_30_dummy_23_0_shift                                 (0)
#define  KPOST_TOP_KPOST_TOP_30_dummy_23_0_mask                                  (0x00FFFFFF)
#define  KPOST_TOP_KPOST_TOP_30_dummy_23_0(data)                                 (0x00FFFFFF&(data))
#define  KPOST_TOP_KPOST_TOP_30_get_dummy_23_0(data)                             (0x00FFFFFF&(data))

#define  KPOST_TOP_KPOST_TOP_34                                                 0x1809D034
#define  KPOST_TOP_KPOST_TOP_34_reg_addr                                         "0xB809D034"
#define  KPOST_TOP_KPOST_TOP_34_reg                                              0xB809D034
#define  KPOST_TOP_KPOST_TOP_34_inst_addr                                        "0x000C"
#define  set_KPOST_TOP_KPOST_TOP_34_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_34_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_34_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_34_reg))
#define  KPOST_TOP_KPOST_TOP_34_dummy_31_0_shift                                 (0)
#define  KPOST_TOP_KPOST_TOP_34_dummy_31_0_mask                                  (0xFFFFFFFF)
#define  KPOST_TOP_KPOST_TOP_34_dummy_31_0(data)                                 (0xFFFFFFFF&(data))
#define  KPOST_TOP_KPOST_TOP_34_get_dummy_31_0(data)                             (0xFFFFFFFF&(data))

#define  KPOST_TOP_KPOST_TOP_38                                                 0x1809D038
#define  KPOST_TOP_KPOST_TOP_38_reg_addr                                         "0xB809D038"
#define  KPOST_TOP_KPOST_TOP_38_reg                                              0xB809D038
#define  KPOST_TOP_KPOST_TOP_38_inst_addr                                        "0x000D"
#define  set_KPOST_TOP_KPOST_TOP_38_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_38_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_38_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_38_reg))
#define  KPOST_TOP_KPOST_TOP_38_dummy_31_0_shift                                 (0)
#define  KPOST_TOP_KPOST_TOP_38_dummy_31_0_mask                                  (0xFFFFFFFF)
#define  KPOST_TOP_KPOST_TOP_38_dummy_31_0(data)                                 (0xFFFFFFFF&(data))
#define  KPOST_TOP_KPOST_TOP_38_get_dummy_31_0(data)                             (0xFFFFFFFF&(data))

#define  KPOST_TOP_KPOST_TOP_3C                                                 0x1809D03C
#define  KPOST_TOP_KPOST_TOP_3C_reg_addr                                         "0xB809D03C"
#define  KPOST_TOP_KPOST_TOP_3C_reg                                              0xB809D03C
#define  KPOST_TOP_KPOST_TOP_3C_inst_addr                                        "0x000E"
#define  set_KPOST_TOP_KPOST_TOP_3C_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_3C_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_3C_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_3C_reg))
#define  KPOST_TOP_KPOST_TOP_3C_dummy_31_0_shift                                 (0)
#define  KPOST_TOP_KPOST_TOP_3C_dummy_31_0_mask                                  (0xFFFFFFFF)
#define  KPOST_TOP_KPOST_TOP_3C_dummy_31_0(data)                                 (0xFFFFFFFF&(data))
#define  KPOST_TOP_KPOST_TOP_3C_get_dummy_31_0(data)                             (0xFFFFFFFF&(data))

#define  KPOST_TOP_KPOST_TOP_40                                                 0x1809D040
#define  KPOST_TOP_KPOST_TOP_40_reg_addr                                         "0xB809D040"
#define  KPOST_TOP_KPOST_TOP_40_reg                                              0xB809D040
#define  KPOST_TOP_KPOST_TOP_40_inst_addr                                        "0x000F"
#define  set_KPOST_TOP_KPOST_TOP_40_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_40_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_40_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_40_reg))
#define  KPOST_TOP_KPOST_TOP_40_dummy_3_0_shift                                  (0)
#define  KPOST_TOP_KPOST_TOP_40_dummy_3_0_mask                                   (0x0000000F)
#define  KPOST_TOP_KPOST_TOP_40_dummy_3_0(data)                                  (0x0000000F&(data))
#define  KPOST_TOP_KPOST_TOP_40_get_dummy_3_0(data)                              (0x0000000F&(data))

#define  KPOST_TOP_KPOST_TOP_44                                                 0x1809D044
#define  KPOST_TOP_KPOST_TOP_44_reg_addr                                         "0xB809D044"
#define  KPOST_TOP_KPOST_TOP_44_reg                                              0xB809D044
#define  KPOST_TOP_KPOST_TOP_44_inst_addr                                        "0x0010"
#define  set_KPOST_TOP_KPOST_TOP_44_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_44_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_44_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_44_reg))
#define  KPOST_TOP_KPOST_TOP_44_dummy_31_0_shift                                 (0)
#define  KPOST_TOP_KPOST_TOP_44_dummy_31_0_mask                                  (0xFFFFFFFF)
#define  KPOST_TOP_KPOST_TOP_44_dummy_31_0(data)                                 (0xFFFFFFFF&(data))
#define  KPOST_TOP_KPOST_TOP_44_get_dummy_31_0(data)                             (0xFFFFFFFF&(data))

#define  KPOST_TOP_KPOST_TOP_48                                                 0x1809D048
#define  KPOST_TOP_KPOST_TOP_48_reg_addr                                         "0xB809D048"
#define  KPOST_TOP_KPOST_TOP_48_reg                                              0xB809D048
#define  KPOST_TOP_KPOST_TOP_48_inst_addr                                        "0x0011"
#define  set_KPOST_TOP_KPOST_TOP_48_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_48_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_48_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_48_reg))
#define  KPOST_TOP_KPOST_TOP_48_dummy_31_0_shift                                 (0)
#define  KPOST_TOP_KPOST_TOP_48_dummy_31_0_mask                                  (0xFFFFFFFF)
#define  KPOST_TOP_KPOST_TOP_48_dummy_31_0(data)                                 (0xFFFFFFFF&(data))
#define  KPOST_TOP_KPOST_TOP_48_get_dummy_31_0(data)                             (0xFFFFFFFF&(data))

#define  KPOST_TOP_KPOST_TOP_4C                                                 0x1809D04C
#define  KPOST_TOP_KPOST_TOP_4C_reg_addr                                         "0xB809D04C"
#define  KPOST_TOP_KPOST_TOP_4C_reg                                              0xB809D04C
#define  KPOST_TOP_KPOST_TOP_4C_inst_addr                                        "0x0012"
#define  set_KPOST_TOP_KPOST_TOP_4C_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_4C_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_4C_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_4C_reg))
#define  KPOST_TOP_KPOST_TOP_4C_dummy_31_0_shift                                 (0)
#define  KPOST_TOP_KPOST_TOP_4C_dummy_31_0_mask                                  (0xFFFFFFFF)
#define  KPOST_TOP_KPOST_TOP_4C_dummy_31_0(data)                                 (0xFFFFFFFF&(data))
#define  KPOST_TOP_KPOST_TOP_4C_get_dummy_31_0(data)                             (0xFFFFFFFF&(data))

#define  KPOST_TOP_KPOST_TOP_50                                                 0x1809D050
#define  KPOST_TOP_KPOST_TOP_50_reg_addr                                         "0xB809D050"
#define  KPOST_TOP_KPOST_TOP_50_reg                                              0xB809D050
#define  KPOST_TOP_KPOST_TOP_50_inst_addr                                        "0x0013"
#define  set_KPOST_TOP_KPOST_TOP_50_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_50_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_50_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_50_reg))
#define  KPOST_TOP_KPOST_TOP_50_dummy_3_0_shift                                  (0)
#define  KPOST_TOP_KPOST_TOP_50_dummy_3_0_mask                                   (0x0000000F)
#define  KPOST_TOP_KPOST_TOP_50_dummy_3_0(data)                                  (0x0000000F&(data))
#define  KPOST_TOP_KPOST_TOP_50_get_dummy_3_0(data)                              (0x0000000F&(data))

#define  KPOST_TOP_KPOST_TOP_60                                                 0x1809D060
#define  KPOST_TOP_KPOST_TOP_60_reg_addr                                         "0xB809D060"
#define  KPOST_TOP_KPOST_TOP_60_reg                                              0xB809D060
#define  KPOST_TOP_KPOST_TOP_60_inst_addr                                        "0x0014"
#define  set_KPOST_TOP_KPOST_TOP_60_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_60_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_60_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_60_reg))
#define  KPOST_TOP_KPOST_TOP_60_post_second_run_en_shift                         (31)
#define  KPOST_TOP_KPOST_TOP_60_bluescreen_shift                                 (30)
#define  KPOST_TOP_KPOST_TOP_60_bluescreen_rgb_shift                             (0)
#define  KPOST_TOP_KPOST_TOP_60_post_second_run_en_mask                          (0x80000000)
#define  KPOST_TOP_KPOST_TOP_60_bluescreen_mask                                  (0x40000000)
#define  KPOST_TOP_KPOST_TOP_60_bluescreen_rgb_mask                              (0x3FFFFFFF)
#define  KPOST_TOP_KPOST_TOP_60_post_second_run_en(data)                         (0x80000000&((data)<<31))
#define  KPOST_TOP_KPOST_TOP_60_bluescreen(data)                                 (0x40000000&((data)<<30))
#define  KPOST_TOP_KPOST_TOP_60_bluescreen_rgb(data)                             (0x3FFFFFFF&(data))
#define  KPOST_TOP_KPOST_TOP_60_get_post_second_run_en(data)                     ((0x80000000&(data))>>31)
#define  KPOST_TOP_KPOST_TOP_60_get_bluescreen(data)                             ((0x40000000&(data))>>30)
#define  KPOST_TOP_KPOST_TOP_60_get_bluescreen_rgb(data)                         (0x3FFFFFFF&(data))

#define  KPOST_TOP_KPOST_TOP_64                                                 0x1809D064
#define  KPOST_TOP_KPOST_TOP_64_reg_addr                                         "0xB809D064"
#define  KPOST_TOP_KPOST_TOP_64_reg                                              0xB809D064
#define  KPOST_TOP_KPOST_TOP_64_inst_addr                                        "0x0015"
#define  set_KPOST_TOP_KPOST_TOP_64_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_64_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_64_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_64_reg))
#define  KPOST_TOP_KPOST_TOP_64_post_ls_shift                                    (0)
#define  KPOST_TOP_KPOST_TOP_64_post_ls_mask                                     (0x00000007)
#define  KPOST_TOP_KPOST_TOP_64_post_ls(data)                                    (0x00000007&(data))
#define  KPOST_TOP_KPOST_TOP_64_get_post_ls(data)                                (0x00000007&(data))

#define  KPOST_TOP_KPOST_TOP_68                                                 0x1809D068
#define  KPOST_TOP_KPOST_TOP_68_reg_addr                                         "0xB809D068"
#define  KPOST_TOP_KPOST_TOP_68_reg                                              0xB809D068
#define  KPOST_TOP_KPOST_TOP_68_inst_addr                                        "0x0016"
#define  set_KPOST_TOP_KPOST_TOP_68_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_68_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_68_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_68_reg))
#define  KPOST_TOP_KPOST_TOP_68_post_rme_shift                                   (0)
#define  KPOST_TOP_KPOST_TOP_68_post_rme_mask                                    (0x00000007)
#define  KPOST_TOP_KPOST_TOP_68_post_rme(data)                                   (0x00000007&(data))
#define  KPOST_TOP_KPOST_TOP_68_get_post_rme(data)                               (0x00000007&(data))

#define  KPOST_TOP_KPOST_TOP_6C                                                 0x1809D06C
#define  KPOST_TOP_KPOST_TOP_6C_reg_addr                                         "0xB809D06C"
#define  KPOST_TOP_KPOST_TOP_6C_reg                                              0xB809D06C
#define  KPOST_TOP_KPOST_TOP_6C_inst_addr                                        "0x0017"
#define  set_KPOST_TOP_KPOST_TOP_6C_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_6C_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_6C_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_6C_reg))
#define  KPOST_TOP_KPOST_TOP_6C_post_rm_shift                                    (0)
#define  KPOST_TOP_KPOST_TOP_6C_post_rm_mask                                     (0x00000FFF)
#define  KPOST_TOP_KPOST_TOP_6C_post_rm(data)                                    (0x00000FFF&(data))
#define  KPOST_TOP_KPOST_TOP_6C_get_post_rm(data)                                (0x00000FFF&(data))

#define  KPOST_TOP_KPOST_TOP_80                                                 0x1809D080
#define  KPOST_TOP_KPOST_TOP_80_reg_addr                                         "0xB809D080"
#define  KPOST_TOP_KPOST_TOP_80_reg                                              0xB809D080
#define  KPOST_TOP_KPOST_TOP_80_inst_addr                                        "0x0018"
#define  set_KPOST_TOP_KPOST_TOP_80_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_80_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_80_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_80_reg))
#define  KPOST_TOP_KPOST_TOP_80_post_usr_coef01_shift                            (15)
#define  KPOST_TOP_KPOST_TOP_80_post_usr_coef00_shift                            (0)
#define  KPOST_TOP_KPOST_TOP_80_post_usr_coef01_mask                             (0x3FFF8000)
#define  KPOST_TOP_KPOST_TOP_80_post_usr_coef00_mask                             (0x00007FFF)
#define  KPOST_TOP_KPOST_TOP_80_post_usr_coef01(data)                            (0x3FFF8000&((data)<<15))
#define  KPOST_TOP_KPOST_TOP_80_post_usr_coef00(data)                            (0x00007FFF&(data))
#define  KPOST_TOP_KPOST_TOP_80_get_post_usr_coef01(data)                        ((0x3FFF8000&(data))>>15)
#define  KPOST_TOP_KPOST_TOP_80_get_post_usr_coef00(data)                        (0x00007FFF&(data))

#define  KPOST_TOP_KPOST_TOP_84                                                 0x1809D084
#define  KPOST_TOP_KPOST_TOP_84_reg_addr                                         "0xB809D084"
#define  KPOST_TOP_KPOST_TOP_84_reg                                              0xB809D084
#define  KPOST_TOP_KPOST_TOP_84_inst_addr                                        "0x0019"
#define  set_KPOST_TOP_KPOST_TOP_84_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_84_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_84_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_84_reg))
#define  KPOST_TOP_KPOST_TOP_84_post_usr_coef10_shift                            (15)
#define  KPOST_TOP_KPOST_TOP_84_post_usr_coef02_shift                            (0)
#define  KPOST_TOP_KPOST_TOP_84_post_usr_coef10_mask                             (0x3FFF8000)
#define  KPOST_TOP_KPOST_TOP_84_post_usr_coef02_mask                             (0x00007FFF)
#define  KPOST_TOP_KPOST_TOP_84_post_usr_coef10(data)                            (0x3FFF8000&((data)<<15))
#define  KPOST_TOP_KPOST_TOP_84_post_usr_coef02(data)                            (0x00007FFF&(data))
#define  KPOST_TOP_KPOST_TOP_84_get_post_usr_coef10(data)                        ((0x3FFF8000&(data))>>15)
#define  KPOST_TOP_KPOST_TOP_84_get_post_usr_coef02(data)                        (0x00007FFF&(data))

#define  KPOST_TOP_KPOST_TOP_88                                                 0x1809D088
#define  KPOST_TOP_KPOST_TOP_88_reg_addr                                         "0xB809D088"
#define  KPOST_TOP_KPOST_TOP_88_reg                                              0xB809D088
#define  KPOST_TOP_KPOST_TOP_88_inst_addr                                        "0x001A"
#define  set_KPOST_TOP_KPOST_TOP_88_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_88_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_88_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_88_reg))
#define  KPOST_TOP_KPOST_TOP_88_post_usr_coef12_shift                            (15)
#define  KPOST_TOP_KPOST_TOP_88_post_usr_coef11_shift                            (0)
#define  KPOST_TOP_KPOST_TOP_88_post_usr_coef12_mask                             (0x3FFF8000)
#define  KPOST_TOP_KPOST_TOP_88_post_usr_coef11_mask                             (0x00007FFF)
#define  KPOST_TOP_KPOST_TOP_88_post_usr_coef12(data)                            (0x3FFF8000&((data)<<15))
#define  KPOST_TOP_KPOST_TOP_88_post_usr_coef11(data)                            (0x00007FFF&(data))
#define  KPOST_TOP_KPOST_TOP_88_get_post_usr_coef12(data)                        ((0x3FFF8000&(data))>>15)
#define  KPOST_TOP_KPOST_TOP_88_get_post_usr_coef11(data)                        (0x00007FFF&(data))

#define  KPOST_TOP_KPOST_TOP_8C                                                 0x1809D08C
#define  KPOST_TOP_KPOST_TOP_8C_reg_addr                                         "0xB809D08C"
#define  KPOST_TOP_KPOST_TOP_8C_reg                                              0xB809D08C
#define  KPOST_TOP_KPOST_TOP_8C_inst_addr                                        "0x001B"
#define  set_KPOST_TOP_KPOST_TOP_8C_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_8C_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_8C_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_8C_reg))
#define  KPOST_TOP_KPOST_TOP_8C_post_usr_coef21_shift                            (15)
#define  KPOST_TOP_KPOST_TOP_8C_post_usr_coef20_shift                            (0)
#define  KPOST_TOP_KPOST_TOP_8C_post_usr_coef21_mask                             (0x3FFF8000)
#define  KPOST_TOP_KPOST_TOP_8C_post_usr_coef20_mask                             (0x00007FFF)
#define  KPOST_TOP_KPOST_TOP_8C_post_usr_coef21(data)                            (0x3FFF8000&((data)<<15))
#define  KPOST_TOP_KPOST_TOP_8C_post_usr_coef20(data)                            (0x00007FFF&(data))
#define  KPOST_TOP_KPOST_TOP_8C_get_post_usr_coef21(data)                        ((0x3FFF8000&(data))>>15)
#define  KPOST_TOP_KPOST_TOP_8C_get_post_usr_coef20(data)                        (0x00007FFF&(data))

#define  KPOST_TOP_KPOST_TOP_90                                                 0x1809D090
#define  KPOST_TOP_KPOST_TOP_90_reg_addr                                         "0xB809D090"
#define  KPOST_TOP_KPOST_TOP_90_reg                                              0xB809D090
#define  KPOST_TOP_KPOST_TOP_90_inst_addr                                        "0x001C"
#define  set_KPOST_TOP_KPOST_TOP_90_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_90_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_90_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_90_reg))
#define  KPOST_TOP_KPOST_TOP_90_post_usr_const0_shift                            (15)
#define  KPOST_TOP_KPOST_TOP_90_post_usr_coef22_shift                            (0)
#define  KPOST_TOP_KPOST_TOP_90_post_usr_const0_mask                             (0x07FF8000)
#define  KPOST_TOP_KPOST_TOP_90_post_usr_coef22_mask                             (0x00007FFF)
#define  KPOST_TOP_KPOST_TOP_90_post_usr_const0(data)                            (0x07FF8000&((data)<<15))
#define  KPOST_TOP_KPOST_TOP_90_post_usr_coef22(data)                            (0x00007FFF&(data))
#define  KPOST_TOP_KPOST_TOP_90_get_post_usr_const0(data)                        ((0x07FF8000&(data))>>15)
#define  KPOST_TOP_KPOST_TOP_90_get_post_usr_coef22(data)                        (0x00007FFF&(data))

#define  KPOST_TOP_KPOST_TOP_94                                                 0x1809D094
#define  KPOST_TOP_KPOST_TOP_94_reg_addr                                         "0xB809D094"
#define  KPOST_TOP_KPOST_TOP_94_reg                                              0xB809D094
#define  KPOST_TOP_KPOST_TOP_94_inst_addr                                        "0x001D"
#define  set_KPOST_TOP_KPOST_TOP_94_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_94_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_94_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_94_reg))
#define  KPOST_TOP_KPOST_TOP_94_post_convert_map_shift                           (29)
#define  KPOST_TOP_KPOST_TOP_94_post_convert_mode_shift                          (25)
#define  KPOST_TOP_KPOST_TOP_94_post_convert_on_shift                            (24)
#define  KPOST_TOP_KPOST_TOP_94_post_usr_const2_shift                            (12)
#define  KPOST_TOP_KPOST_TOP_94_post_usr_const1_shift                            (0)
#define  KPOST_TOP_KPOST_TOP_94_post_convert_map_mask                            (0xE0000000)
#define  KPOST_TOP_KPOST_TOP_94_post_convert_mode_mask                           (0x1E000000)
#define  KPOST_TOP_KPOST_TOP_94_post_convert_on_mask                             (0x01000000)
#define  KPOST_TOP_KPOST_TOP_94_post_usr_const2_mask                             (0x00FFF000)
#define  KPOST_TOP_KPOST_TOP_94_post_usr_const1_mask                             (0x00000FFF)
#define  KPOST_TOP_KPOST_TOP_94_post_convert_map(data)                           (0xE0000000&((data)<<29))
#define  KPOST_TOP_KPOST_TOP_94_post_convert_mode(data)                          (0x1E000000&((data)<<25))
#define  KPOST_TOP_KPOST_TOP_94_post_convert_on(data)                            (0x01000000&((data)<<24))
#define  KPOST_TOP_KPOST_TOP_94_post_usr_const2(data)                            (0x00FFF000&((data)<<12))
#define  KPOST_TOP_KPOST_TOP_94_post_usr_const1(data)                            (0x00000FFF&(data))
#define  KPOST_TOP_KPOST_TOP_94_get_post_convert_map(data)                       ((0xE0000000&(data))>>29)
#define  KPOST_TOP_KPOST_TOP_94_get_post_convert_mode(data)                      ((0x1E000000&(data))>>25)
#define  KPOST_TOP_KPOST_TOP_94_get_post_convert_on(data)                        ((0x01000000&(data))>>24)
#define  KPOST_TOP_KPOST_TOP_94_get_post_usr_const2(data)                        ((0x00FFF000&(data))>>12)
#define  KPOST_TOP_KPOST_TOP_94_get_post_usr_const1(data)                        (0x00000FFF&(data))

#define  KPOST_TOP_KPOST_TOP_A0                                                 0x1809D0A0
#define  KPOST_TOP_KPOST_TOP_A0_reg_addr                                         "0xB809D0A0"
#define  KPOST_TOP_KPOST_TOP_A0_reg                                              0xB809D0A0
#define  KPOST_TOP_KPOST_TOP_A0_inst_addr                                        "0x001E"
#define  set_KPOST_TOP_KPOST_TOP_A0_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_A0_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_A0_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_A0_reg))
#define  KPOST_TOP_KPOST_TOP_A0_post_seg_disp_data_1_shift                       (16)
#define  KPOST_TOP_KPOST_TOP_A0_post_seg_disp_data_0_shift                       (0)
#define  KPOST_TOP_KPOST_TOP_A0_post_seg_disp_data_1_mask                        (0xFFFF0000)
#define  KPOST_TOP_KPOST_TOP_A0_post_seg_disp_data_0_mask                        (0x0000FFFF)
#define  KPOST_TOP_KPOST_TOP_A0_post_seg_disp_data_1(data)                       (0xFFFF0000&((data)<<16))
#define  KPOST_TOP_KPOST_TOP_A0_post_seg_disp_data_0(data)                       (0x0000FFFF&(data))
#define  KPOST_TOP_KPOST_TOP_A0_get_post_seg_disp_data_1(data)                   ((0xFFFF0000&(data))>>16)
#define  KPOST_TOP_KPOST_TOP_A0_get_post_seg_disp_data_0(data)                   (0x0000FFFF&(data))

#define  KPOST_TOP_KPOST_TOP_A4                                                 0x1809D0A4
#define  KPOST_TOP_KPOST_TOP_A4_reg_addr                                         "0xB809D0A4"
#define  KPOST_TOP_KPOST_TOP_A4_reg                                              0xB809D0A4
#define  KPOST_TOP_KPOST_TOP_A4_inst_addr                                        "0x001F"
#define  set_KPOST_TOP_KPOST_TOP_A4_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_A4_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_A4_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_A4_reg))
#define  KPOST_TOP_KPOST_TOP_A4_post_seg_disp_data_3_shift                       (16)
#define  KPOST_TOP_KPOST_TOP_A4_post_seg_disp_data_2_shift                       (0)
#define  KPOST_TOP_KPOST_TOP_A4_post_seg_disp_data_3_mask                        (0xFFFF0000)
#define  KPOST_TOP_KPOST_TOP_A4_post_seg_disp_data_2_mask                        (0x0000FFFF)
#define  KPOST_TOP_KPOST_TOP_A4_post_seg_disp_data_3(data)                       (0xFFFF0000&((data)<<16))
#define  KPOST_TOP_KPOST_TOP_A4_post_seg_disp_data_2(data)                       (0x0000FFFF&(data))
#define  KPOST_TOP_KPOST_TOP_A4_get_post_seg_disp_data_3(data)                   ((0xFFFF0000&(data))>>16)
#define  KPOST_TOP_KPOST_TOP_A4_get_post_seg_disp_data_2(data)                   (0x0000FFFF&(data))

#define  KPOST_TOP_KPOST_TOP_A8                                                 0x1809D0A8
#define  KPOST_TOP_KPOST_TOP_A8_reg_addr                                         "0xB809D0A8"
#define  KPOST_TOP_KPOST_TOP_A8_reg                                              0xB809D0A8
#define  KPOST_TOP_KPOST_TOP_A8_inst_addr                                        "0x0020"
#define  set_KPOST_TOP_KPOST_TOP_A8_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_A8_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_A8_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_A8_reg))
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_enable_3_shift                     (27)
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_enable_2_shift                     (26)
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_enable_1_shift                     (25)
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_enable_0_shift                     (24)
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_data_color_1_shift                 (12)
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_data_color_0_shift                 (0)
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_enable_3_mask                      (0x08000000)
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_enable_2_mask                      (0x04000000)
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_enable_1_mask                      (0x02000000)
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_enable_0_mask                      (0x01000000)
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_data_color_1_mask                  (0x00FFF000)
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_data_color_0_mask                  (0x00000FFF)
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_enable_3(data)                     (0x08000000&((data)<<27))
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_enable_2(data)                     (0x04000000&((data)<<26))
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_enable_1(data)                     (0x02000000&((data)<<25))
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_enable_0(data)                     (0x01000000&((data)<<24))
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_data_color_1(data)                 (0x00FFF000&((data)<<12))
#define  KPOST_TOP_KPOST_TOP_A8_post_seg_disp_data_color_0(data)                 (0x00000FFF&(data))
#define  KPOST_TOP_KPOST_TOP_A8_get_post_seg_disp_enable_3(data)                 ((0x08000000&(data))>>27)
#define  KPOST_TOP_KPOST_TOP_A8_get_post_seg_disp_enable_2(data)                 ((0x04000000&(data))>>26)
#define  KPOST_TOP_KPOST_TOP_A8_get_post_seg_disp_enable_1(data)                 ((0x02000000&(data))>>25)
#define  KPOST_TOP_KPOST_TOP_A8_get_post_seg_disp_enable_0(data)                 ((0x01000000&(data))>>24)
#define  KPOST_TOP_KPOST_TOP_A8_get_post_seg_disp_data_color_1(data)             ((0x00FFF000&(data))>>12)
#define  KPOST_TOP_KPOST_TOP_A8_get_post_seg_disp_data_color_0(data)             (0x00000FFF&(data))

#define  KPOST_TOP_KPOST_TOP_AC                                                 0x1809D0AC
#define  KPOST_TOP_KPOST_TOP_AC_reg_addr                                         "0xB809D0AC"
#define  KPOST_TOP_KPOST_TOP_AC_reg                                              0xB809D0AC
#define  KPOST_TOP_KPOST_TOP_AC_inst_addr                                        "0x0021"
#define  set_KPOST_TOP_KPOST_TOP_AC_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_AC_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_AC_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_AC_reg))
#define  KPOST_TOP_KPOST_TOP_AC_post_seg_length_shift                            (24)
#define  KPOST_TOP_KPOST_TOP_AC_post_seg_place_y_0_shift                         (12)
#define  KPOST_TOP_KPOST_TOP_AC_post_seg_place_x_0_shift                         (0)
#define  KPOST_TOP_KPOST_TOP_AC_post_seg_length_mask                             (0xFF000000)
#define  KPOST_TOP_KPOST_TOP_AC_post_seg_place_y_0_mask                          (0x00FFF000)
#define  KPOST_TOP_KPOST_TOP_AC_post_seg_place_x_0_mask                          (0x00000FFF)
#define  KPOST_TOP_KPOST_TOP_AC_post_seg_length(data)                            (0xFF000000&((data)<<24))
#define  KPOST_TOP_KPOST_TOP_AC_post_seg_place_y_0(data)                         (0x00FFF000&((data)<<12))
#define  KPOST_TOP_KPOST_TOP_AC_post_seg_place_x_0(data)                         (0x00000FFF&(data))
#define  KPOST_TOP_KPOST_TOP_AC_get_post_seg_length(data)                        ((0xFF000000&(data))>>24)
#define  KPOST_TOP_KPOST_TOP_AC_get_post_seg_place_y_0(data)                     ((0x00FFF000&(data))>>12)
#define  KPOST_TOP_KPOST_TOP_AC_get_post_seg_place_x_0(data)                     (0x00000FFF&(data))

#define  KPOST_TOP_KPOST_TOP_B0                                                 0x1809D0B0
#define  KPOST_TOP_KPOST_TOP_B0_reg_addr                                         "0xB809D0B0"
#define  KPOST_TOP_KPOST_TOP_B0_reg                                              0xB809D0B0
#define  KPOST_TOP_KPOST_TOP_B0_inst_addr                                        "0x0022"
#define  set_KPOST_TOP_KPOST_TOP_B0_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_B0_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_B0_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_B0_reg))
#define  KPOST_TOP_KPOST_TOP_B0_post_seg_width_shift                             (24)
#define  KPOST_TOP_KPOST_TOP_B0_post_seg_place_y_1_shift                         (12)
#define  KPOST_TOP_KPOST_TOP_B0_post_seg_place_x_1_shift                         (0)
#define  KPOST_TOP_KPOST_TOP_B0_post_seg_width_mask                              (0xFF000000)
#define  KPOST_TOP_KPOST_TOP_B0_post_seg_place_y_1_mask                          (0x00FFF000)
#define  KPOST_TOP_KPOST_TOP_B0_post_seg_place_x_1_mask                          (0x00000FFF)
#define  KPOST_TOP_KPOST_TOP_B0_post_seg_width(data)                             (0xFF000000&((data)<<24))
#define  KPOST_TOP_KPOST_TOP_B0_post_seg_place_y_1(data)                         (0x00FFF000&((data)<<12))
#define  KPOST_TOP_KPOST_TOP_B0_post_seg_place_x_1(data)                         (0x00000FFF&(data))
#define  KPOST_TOP_KPOST_TOP_B0_get_post_seg_width(data)                         ((0xFF000000&(data))>>24)
#define  KPOST_TOP_KPOST_TOP_B0_get_post_seg_place_y_1(data)                     ((0x00FFF000&(data))>>12)
#define  KPOST_TOP_KPOST_TOP_B0_get_post_seg_place_x_1(data)                     (0x00000FFF&(data))

#define  KPOST_TOP_KPOST_TOP_B4                                                 0x1809D0B4
#define  KPOST_TOP_KPOST_TOP_B4_reg_addr                                         "0xB809D0B4"
#define  KPOST_TOP_KPOST_TOP_B4_reg                                              0xB809D0B4
#define  KPOST_TOP_KPOST_TOP_B4_inst_addr                                        "0x0023"
#define  set_KPOST_TOP_KPOST_TOP_B4_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_B4_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_B4_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_B4_reg))
#define  KPOST_TOP_KPOST_TOP_B4_post_seg_distance_shift                          (24)
#define  KPOST_TOP_KPOST_TOP_B4_post_seg_place_y_2_shift                         (12)
#define  KPOST_TOP_KPOST_TOP_B4_post_seg_place_x_2_shift                         (0)
#define  KPOST_TOP_KPOST_TOP_B4_post_seg_distance_mask                           (0xFF000000)
#define  KPOST_TOP_KPOST_TOP_B4_post_seg_place_y_2_mask                          (0x00FFF000)
#define  KPOST_TOP_KPOST_TOP_B4_post_seg_place_x_2_mask                          (0x00000FFF)
#define  KPOST_TOP_KPOST_TOP_B4_post_seg_distance(data)                          (0xFF000000&((data)<<24))
#define  KPOST_TOP_KPOST_TOP_B4_post_seg_place_y_2(data)                         (0x00FFF000&((data)<<12))
#define  KPOST_TOP_KPOST_TOP_B4_post_seg_place_x_2(data)                         (0x00000FFF&(data))
#define  KPOST_TOP_KPOST_TOP_B4_get_post_seg_distance(data)                      ((0xFF000000&(data))>>24)
#define  KPOST_TOP_KPOST_TOP_B4_get_post_seg_place_y_2(data)                     ((0x00FFF000&(data))>>12)
#define  KPOST_TOP_KPOST_TOP_B4_get_post_seg_place_x_2(data)                     (0x00000FFF&(data))

#define  KPOST_TOP_KPOST_TOP_B8                                                 0x1809D0B8
#define  KPOST_TOP_KPOST_TOP_B8_reg_addr                                         "0xB809D0B8"
#define  KPOST_TOP_KPOST_TOP_B8_reg                                              0xB809D0B8
#define  KPOST_TOP_KPOST_TOP_B8_inst_addr                                        "0x0024"
#define  set_KPOST_TOP_KPOST_TOP_B8_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_B8_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_B8_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_B8_reg))
#define  KPOST_TOP_KPOST_TOP_B8_post_seg_place_y_3_shift                         (12)
#define  KPOST_TOP_KPOST_TOP_B8_post_seg_place_x_3_shift                         (0)
#define  KPOST_TOP_KPOST_TOP_B8_post_seg_place_y_3_mask                          (0x00FFF000)
#define  KPOST_TOP_KPOST_TOP_B8_post_seg_place_x_3_mask                          (0x00000FFF)
#define  KPOST_TOP_KPOST_TOP_B8_post_seg_place_y_3(data)                         (0x00FFF000&((data)<<12))
#define  KPOST_TOP_KPOST_TOP_B8_post_seg_place_x_3(data)                         (0x00000FFF&(data))
#define  KPOST_TOP_KPOST_TOP_B8_get_post_seg_place_y_3(data)                     ((0x00FFF000&(data))>>12)
#define  KPOST_TOP_KPOST_TOP_B8_get_post_seg_place_x_3(data)                     (0x00000FFF&(data))

#define  KPOST_TOP_KPOST_TOP_BC                                                 0x1809D0BC
#define  KPOST_TOP_KPOST_TOP_BC_reg_addr                                         "0xB809D0BC"
#define  KPOST_TOP_KPOST_TOP_BC_reg                                              0xB809D0BC
#define  KPOST_TOP_KPOST_TOP_BC_inst_addr                                        "0x0025"
#define  set_KPOST_TOP_KPOST_TOP_BC_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_BC_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_BC_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_BC_reg))
#define  KPOST_TOP_KPOST_TOP_BC_post_seg_disp_data_color_3_shift                 (12)
#define  KPOST_TOP_KPOST_TOP_BC_post_seg_disp_data_color_2_shift                 (0)
#define  KPOST_TOP_KPOST_TOP_BC_post_seg_disp_data_color_3_mask                  (0x00FFF000)
#define  KPOST_TOP_KPOST_TOP_BC_post_seg_disp_data_color_2_mask                  (0x00000FFF)
#define  KPOST_TOP_KPOST_TOP_BC_post_seg_disp_data_color_3(data)                 (0x00FFF000&((data)<<12))
#define  KPOST_TOP_KPOST_TOP_BC_post_seg_disp_data_color_2(data)                 (0x00000FFF&(data))
#define  KPOST_TOP_KPOST_TOP_BC_get_post_seg_disp_data_color_3(data)             ((0x00FFF000&(data))>>12)
#define  KPOST_TOP_KPOST_TOP_BC_get_post_seg_disp_data_color_2(data)             (0x00000FFF&(data))

#define  KPOST_TOP_KPOST_TOP_C0                                                 0x1809D0C0
#define  KPOST_TOP_KPOST_TOP_C0_reg_addr                                         "0xB809D0C0"
#define  KPOST_TOP_KPOST_TOP_C0_reg                                              0xB809D0C0
#define  KPOST_TOP_KPOST_TOP_C0_inst_addr                                        "0x0026"
#define  set_KPOST_TOP_KPOST_TOP_C0_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_C0_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_C0_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_C0_reg))
#define  KPOST_TOP_KPOST_TOP_C0_regr_ln2to4p_1stln_in2out_dly_shift              (0)
#define  KPOST_TOP_KPOST_TOP_C0_regr_ln2to4p_1stln_in2out_dly_mask               (0x00000FFF)
#define  KPOST_TOP_KPOST_TOP_C0_regr_ln2to4p_1stln_in2out_dly(data)              (0x00000FFF&(data))
#define  KPOST_TOP_KPOST_TOP_C0_get_regr_ln2to4p_1stln_in2out_dly(data)          (0x00000FFF&(data))

#define  KPOST_TOP_KPOST_TOP_E0                                                 0x1809D0E0
#define  KPOST_TOP_KPOST_TOP_E0_reg_addr                                         "0xB809D0E0"
#define  KPOST_TOP_KPOST_TOP_E0_reg                                              0xB809D0E0
#define  KPOST_TOP_KPOST_TOP_E0_inst_addr                                        "0x0027"
#define  set_KPOST_TOP_KPOST_TOP_E0_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_E0_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_E0_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_E0_reg))
#define  KPOST_TOP_KPOST_TOP_E0_regr_post_bist_done_shift                        (0)
#define  KPOST_TOP_KPOST_TOP_E0_regr_post_bist_done_mask                         (0x0000003F)
#define  KPOST_TOP_KPOST_TOP_E0_regr_post_bist_done(data)                        (0x0000003F&(data))
#define  KPOST_TOP_KPOST_TOP_E0_get_regr_post_bist_done(data)                    (0x0000003F&(data))

#define  KPOST_TOP_KPOST_TOP_E4                                                 0x1809D0E4
#define  KPOST_TOP_KPOST_TOP_E4_reg_addr                                         "0xB809D0E4"
#define  KPOST_TOP_KPOST_TOP_E4_reg                                              0xB809D0E4
#define  KPOST_TOP_KPOST_TOP_E4_inst_addr                                        "0x0028"
#define  set_KPOST_TOP_KPOST_TOP_E4_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_E4_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_E4_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_E4_reg))
#define  KPOST_TOP_KPOST_TOP_E4_regr_post_bisr_repaired_shift                    (26)
#define  KPOST_TOP_KPOST_TOP_E4_regr_ln2to4p_err_status_shift                    (24)
#define  KPOST_TOP_KPOST_TOP_E4_regr_ln2to4p_v_outafterin_shift                  (12)
#define  KPOST_TOP_KPOST_TOP_E4_regr_ln2to4p_v_outbeforein_shift                 (0)
#define  KPOST_TOP_KPOST_TOP_E4_regr_post_bisr_repaired_mask                     (0x04000000)
#define  KPOST_TOP_KPOST_TOP_E4_regr_ln2to4p_err_status_mask                     (0x03000000)
#define  KPOST_TOP_KPOST_TOP_E4_regr_ln2to4p_v_outafterin_mask                   (0x00FFF000)
#define  KPOST_TOP_KPOST_TOP_E4_regr_ln2to4p_v_outbeforein_mask                  (0x00000FFF)
#define  KPOST_TOP_KPOST_TOP_E4_regr_post_bisr_repaired(data)                    (0x04000000&((data)<<26))
#define  KPOST_TOP_KPOST_TOP_E4_regr_ln2to4p_err_status(data)                    (0x03000000&((data)<<24))
#define  KPOST_TOP_KPOST_TOP_E4_regr_ln2to4p_v_outafterin(data)                  (0x00FFF000&((data)<<12))
#define  KPOST_TOP_KPOST_TOP_E4_regr_ln2to4p_v_outbeforein(data)                 (0x00000FFF&(data))
#define  KPOST_TOP_KPOST_TOP_E4_get_regr_post_bisr_repaired(data)                ((0x04000000&(data))>>26)
#define  KPOST_TOP_KPOST_TOP_E4_get_regr_ln2to4p_err_status(data)                ((0x03000000&(data))>>24)
#define  KPOST_TOP_KPOST_TOP_E4_get_regr_ln2to4p_v_outafterin(data)              ((0x00FFF000&(data))>>12)
#define  KPOST_TOP_KPOST_TOP_E4_get_regr_ln2to4p_v_outbeforein(data)             (0x00000FFF&(data))

#define  KPOST_TOP_KPOST_TOP_E8                                                 0x1809D0E8
#define  KPOST_TOP_KPOST_TOP_E8_reg_addr                                         "0xB809D0E8"
#define  KPOST_TOP_KPOST_TOP_E8_reg                                              0xB809D0E8
#define  KPOST_TOP_KPOST_TOP_E8_inst_addr                                        "0x0029"
#define  set_KPOST_TOP_KPOST_TOP_E8_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_E8_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_E8_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_E8_reg))
#define  KPOST_TOP_KPOST_TOP_E8_regr_post_bist_fail_shift                        (12)
#define  KPOST_TOP_KPOST_TOP_E8_regr_post_bist_fail_mask                         (0x0003F000)
#define  KPOST_TOP_KPOST_TOP_E8_regr_post_bist_fail(data)                        (0x0003F000&((data)<<12))
#define  KPOST_TOP_KPOST_TOP_E8_get_regr_post_bist_fail(data)                    ((0x0003F000&(data))>>12)

#define  KPOST_TOP_KPOST_TOP_EC                                                 0x1809D0EC
#define  KPOST_TOP_KPOST_TOP_EC_reg_addr                                         "0xB809D0EC"
#define  KPOST_TOP_KPOST_TOP_EC_reg                                              0xB809D0EC
#define  KPOST_TOP_KPOST_TOP_EC_inst_addr                                        "0x002A"
#define  set_KPOST_TOP_KPOST_TOP_EC_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_EC_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_EC_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_EC_reg))
#define  KPOST_TOP_KPOST_TOP_EC_regr_post_bisr_fail_shift                        (24)
#define  KPOST_TOP_KPOST_TOP_EC_regr_post_out_vact_measure_shift                 (12)
#define  KPOST_TOP_KPOST_TOP_EC_regr_post_out_hact_measure_shift                 (0)
#define  KPOST_TOP_KPOST_TOP_EC_regr_post_bisr_fail_mask                         (0x01000000)
#define  KPOST_TOP_KPOST_TOP_EC_regr_post_out_vact_measure_mask                  (0x00FFF000)
#define  KPOST_TOP_KPOST_TOP_EC_regr_post_out_hact_measure_mask                  (0x00000FFF)
#define  KPOST_TOP_KPOST_TOP_EC_regr_post_bisr_fail(data)                        (0x01000000&((data)<<24))
#define  KPOST_TOP_KPOST_TOP_EC_regr_post_out_vact_measure(data)                 (0x00FFF000&((data)<<12))
#define  KPOST_TOP_KPOST_TOP_EC_regr_post_out_hact_measure(data)                 (0x00000FFF&(data))
#define  KPOST_TOP_KPOST_TOP_EC_get_regr_post_bisr_fail(data)                    ((0x01000000&(data))>>24)
#define  KPOST_TOP_KPOST_TOP_EC_get_regr_post_out_vact_measure(data)             ((0x00FFF000&(data))>>12)
#define  KPOST_TOP_KPOST_TOP_EC_get_regr_post_out_hact_measure(data)             (0x00000FFF&(data))

#define  KPOST_TOP_KPOST_TOP_F0                                                 0x1809D0F0
#define  KPOST_TOP_KPOST_TOP_F0_reg_addr                                         "0xB809D0F0"
#define  KPOST_TOP_KPOST_TOP_F0_reg                                              0xB809D0F0
#define  KPOST_TOP_KPOST_TOP_F0_inst_addr                                        "0x002B"
#define  set_KPOST_TOP_KPOST_TOP_F0_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_F0_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_F0_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_F0_reg))
#define  KPOST_TOP_KPOST_TOP_F0_regr_post_int_pending_shift                      (24)
#define  KPOST_TOP_KPOST_TOP_F0_regr_post_out_vtot_measure_shift                 (12)
#define  KPOST_TOP_KPOST_TOP_F0_regr_post_out_htot_measure_shift                 (0)
#define  KPOST_TOP_KPOST_TOP_F0_regr_post_int_pending_mask                       (0x0F000000)
#define  KPOST_TOP_KPOST_TOP_F0_regr_post_out_vtot_measure_mask                  (0x00FFF000)
#define  KPOST_TOP_KPOST_TOP_F0_regr_post_out_htot_measure_mask                  (0x00000FFF)
#define  KPOST_TOP_KPOST_TOP_F0_regr_post_int_pending(data)                      (0x0F000000&((data)<<24))
#define  KPOST_TOP_KPOST_TOP_F0_regr_post_out_vtot_measure(data)                 (0x00FFF000&((data)<<12))
#define  KPOST_TOP_KPOST_TOP_F0_regr_post_out_htot_measure(data)                 (0x00000FFF&(data))
#define  KPOST_TOP_KPOST_TOP_F0_get_regr_post_int_pending(data)                  ((0x0F000000&(data))>>24)
#define  KPOST_TOP_KPOST_TOP_F0_get_regr_post_out_vtot_measure(data)             ((0x00FFF000&(data))>>12)
#define  KPOST_TOP_KPOST_TOP_F0_get_regr_post_out_htot_measure(data)             (0x00000FFF&(data))

#define  KPOST_TOP_KPOST_TOP_F4                                                 0x1809D0F4
#define  KPOST_TOP_KPOST_TOP_F4_reg_addr                                         "0xB809D0F4"
#define  KPOST_TOP_KPOST_TOP_F4_reg                                              0xB809D0F4
#define  KPOST_TOP_KPOST_TOP_F4_inst_addr                                        "0x002C"
#define  set_KPOST_TOP_KPOST_TOP_F4_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_F4_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_F4_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_F4_reg))
#define  KPOST_TOP_KPOST_TOP_F4_regr_post_vact_shift                             (13)
#define  KPOST_TOP_KPOST_TOP_F4_regr_post_hact_shift                             (0)
#define  KPOST_TOP_KPOST_TOP_F4_regr_post_vact_mask                              (0x03FFE000)
#define  KPOST_TOP_KPOST_TOP_F4_regr_post_hact_mask                              (0x00001FFF)
#define  KPOST_TOP_KPOST_TOP_F4_regr_post_vact(data)                             (0x03FFE000&((data)<<13))
#define  KPOST_TOP_KPOST_TOP_F4_regr_post_hact(data)                             (0x00001FFF&(data))
#define  KPOST_TOP_KPOST_TOP_F4_get_regr_post_vact(data)                         ((0x03FFE000&(data))>>13)
#define  KPOST_TOP_KPOST_TOP_F4_get_regr_post_hact(data)                         (0x00001FFF&(data))

#define  KPOST_TOP_KPOST_TOP_F8                                                 0x1809D0F8
#define  KPOST_TOP_KPOST_TOP_F8_reg_addr                                         "0xB809D0F8"
#define  KPOST_TOP_KPOST_TOP_F8_reg                                              0xB809D0F8
#define  KPOST_TOP_KPOST_TOP_F8_inst_addr                                        "0x002D"
#define  set_KPOST_TOP_KPOST_TOP_F8_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_F8_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_F8_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_F8_reg))
#define  KPOST_TOP_KPOST_TOP_F8_regr_post_cursor_fd_b_shift                      (20)
#define  KPOST_TOP_KPOST_TOP_F8_regr_post_cursor_fd_g_shift                      (10)
#define  KPOST_TOP_KPOST_TOP_F8_regr_post_cursor_fd_r_shift                      (0)
#define  KPOST_TOP_KPOST_TOP_F8_regr_post_cursor_fd_b_mask                       (0x3FF00000)
#define  KPOST_TOP_KPOST_TOP_F8_regr_post_cursor_fd_g_mask                       (0x000FFC00)
#define  KPOST_TOP_KPOST_TOP_F8_regr_post_cursor_fd_r_mask                       (0x000003FF)
#define  KPOST_TOP_KPOST_TOP_F8_regr_post_cursor_fd_b(data)                      (0x3FF00000&((data)<<20))
#define  KPOST_TOP_KPOST_TOP_F8_regr_post_cursor_fd_g(data)                      (0x000FFC00&((data)<<10))
#define  KPOST_TOP_KPOST_TOP_F8_regr_post_cursor_fd_r(data)                      (0x000003FF&(data))
#define  KPOST_TOP_KPOST_TOP_F8_get_regr_post_cursor_fd_b(data)                  ((0x3FF00000&(data))>>20)
#define  KPOST_TOP_KPOST_TOP_F8_get_regr_post_cursor_fd_g(data)                  ((0x000FFC00&(data))>>10)
#define  KPOST_TOP_KPOST_TOP_F8_get_regr_post_cursor_fd_r(data)                  (0x000003FF&(data))

#define  KPOST_TOP_KPOST_TOP_FC                                                 0x1809D0FC
#define  KPOST_TOP_KPOST_TOP_FC_reg_addr                                         "0xB809D0FC"
#define  KPOST_TOP_KPOST_TOP_FC_reg                                              0xB809D0FC
#define  KPOST_TOP_KPOST_TOP_FC_inst_addr                                        "0x002E"
#define  set_KPOST_TOP_KPOST_TOP_FC_reg(data)                                    (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_FC_reg)=data)
#define  get_KPOST_TOP_KPOST_TOP_FC_reg                                          (*((volatile unsigned int*)KPOST_TOP_KPOST_TOP_FC_reg))
#define  KPOST_TOP_KPOST_TOP_FC_regr_post_cursor_bd_b_shift                      (20)
#define  KPOST_TOP_KPOST_TOP_FC_regr_post_cursor_bd_g_shift                      (10)
#define  KPOST_TOP_KPOST_TOP_FC_regr_post_cursor_bd_r_shift                      (0)
#define  KPOST_TOP_KPOST_TOP_FC_regr_post_cursor_bd_b_mask                       (0x3FF00000)
#define  KPOST_TOP_KPOST_TOP_FC_regr_post_cursor_bd_g_mask                       (0x000FFC00)
#define  KPOST_TOP_KPOST_TOP_FC_regr_post_cursor_bd_r_mask                       (0x000003FF)
#define  KPOST_TOP_KPOST_TOP_FC_regr_post_cursor_bd_b(data)                      (0x3FF00000&((data)<<20))
#define  KPOST_TOP_KPOST_TOP_FC_regr_post_cursor_bd_g(data)                      (0x000FFC00&((data)<<10))
#define  KPOST_TOP_KPOST_TOP_FC_regr_post_cursor_bd_r(data)                      (0x000003FF&(data))
#define  KPOST_TOP_KPOST_TOP_FC_get_regr_post_cursor_bd_b(data)                  ((0x3FF00000&(data))>>20)
#define  KPOST_TOP_KPOST_TOP_FC_get_regr_post_cursor_bd_g(data)                  ((0x000FFC00&(data))>>10)
#define  KPOST_TOP_KPOST_TOP_FC_get_regr_post_cursor_bd_r(data)                  (0x000003FF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KPOST_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_cursor_color:3;
        RBus_UInt32  post_cursor_v:13;
        RBus_UInt32  post_cursor_en:1;
        RBus_UInt32  post_cursor_3d_flag:1;
        RBus_UInt32  post_cursor_show:1;
        RBus_UInt32  post_cursor_h:13;
    };
}kpost_top_kpost_top_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_out_vtotal_int:12;
        RBus_UInt32  post_out_measure_en:1;
        RBus_UInt32  post_out_measure_sel:3;
        RBus_UInt32  post_out_int_sel:3;
        RBus_UInt32  post_dummy_00:13;
    };
}kpost_top_kpost_top_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blackinsert_frame_en:1;
        RBus_UInt32  blackinsert_line_patt_l:16;
        RBus_UInt32  blackinsert_line_type:4;
        RBus_UInt32  blackinsert_line_en:1;
        RBus_UInt32  post_cursor_src_3d_en:1;
        RBus_UInt32  post_int_en:4;
        RBus_UInt32  post_int_wclr:4;
        RBus_UInt32  post_int_source_sel:1;
    };
}kpost_top_kpost_top_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  blackinsert_line_patt_r:16;
        RBus_UInt32  blackinsert_half_v_en:1;
        RBus_UInt32  blackinsert_half_v_mode:1;
        RBus_UInt32  blackinsert_half_v_center:13;
    };
}kpost_top_kpost_top_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_patt_vtotal:16;
        RBus_UInt32  post_patt_htotal:16;
    };
}kpost_top_kpost_top_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_patt_vact:16;
        RBus_UInt32  post_patt_hact:16;
    };
}kpost_top_kpost_top_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_patt_vs_bporch:8;
        RBus_UInt32  post_patt_hs_bporch:8;
        RBus_UInt32  post_patt_vs_width:8;
        RBus_UInt32  post_patt_hs_width:8;
    };
}kpost_top_kpost_top_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_mon_sel:5;
        RBus_UInt32  post_patt_0f_region:12;
        RBus_UInt32  post_patt_0e_grid:8;
        RBus_UInt32  post_patt_mode:4;
        RBus_UInt32  post_hv_measure:1;
        RBus_UInt32  post_patt_slf_gen:1;
        RBus_UInt32  post_patt_enable:1;
    };
}kpost_top_kpost_top_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_cursor_h_width:4;
        RBus_UInt32  post_patt_r_mask:16;
        RBus_UInt32  post_patt_4p_rgb:12;
    };
}kpost_top_kpost_top_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_patt_b_mask:16;
        RBus_UInt32  post_patt_g_mask:16;
    };
}kpost_top_kpost_top_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  kpost_test1:1;
        RBus_UInt32  kpost_sram_ls_value:1;
        RBus_UInt32  kpost_sram_ls_en:1;
        RBus_UInt32  kpost_4port_hde_center_value:11;
        RBus_UInt32  hde_center_value:12;
        RBus_UInt32  pr_mode_en:1;
    };
}kpost_top_kpost_top_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dummy1809d030_23_0:24;
    };
}kpost_top_kpost_top_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809d034_31_0:32;
    };
}kpost_top_kpost_top_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809d038_31_0:32;
    };
}kpost_top_kpost_top_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809d03c_31_0:32;
    };
}kpost_top_kpost_top_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  dummy1809d040_3_0:4;
    };
}kpost_top_kpost_top_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809d044_31_0:32;
    };
}kpost_top_kpost_top_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809d048_31_0:32;
    };
}kpost_top_kpost_top_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809d04c_31_0:32;
    };
}kpost_top_kpost_top_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  dummy1809d050_3_0:4;
    };
}kpost_top_kpost_top_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_second_run_en:1;
        RBus_UInt32  bluescreen:1;
        RBus_UInt32  bluescreen_rgb:30;
    };
}kpost_top_kpost_top_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  post_ls:3;
    };
}kpost_top_kpost_top_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  post_rme:3;
    };
}kpost_top_kpost_top_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  post_rm:12;
    };
}kpost_top_kpost_top_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  post_usr_coef01:15;
        RBus_UInt32  post_usr_coef00:15;
    };
}kpost_top_kpost_top_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  post_usr_coef10:15;
        RBus_UInt32  post_usr_coef02:15;
    };
}kpost_top_kpost_top_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  post_usr_coef12:15;
        RBus_UInt32  post_usr_coef11:15;
    };
}kpost_top_kpost_top_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  post_usr_coef21:15;
        RBus_UInt32  post_usr_coef20:15;
    };
}kpost_top_kpost_top_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  post_usr_const0:12;
        RBus_UInt32  post_usr_coef22:15;
    };
}kpost_top_kpost_top_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_convert_map:3;
        RBus_UInt32  post_convert_mode:4;
        RBus_UInt32  post_convert_on:1;
        RBus_UInt32  post_usr_const2:12;
        RBus_UInt32  post_usr_const1:12;
    };
}kpost_top_kpost_top_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_seg_disp_data_1:16;
        RBus_UInt32  post_seg_disp_data_0:16;
    };
}kpost_top_kpost_top_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_seg_disp_data_3:16;
        RBus_UInt32  post_seg_disp_data_2:16;
    };
}kpost_top_kpost_top_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  post_seg_disp_enable_3:1;
        RBus_UInt32  post_seg_disp_enable_2:1;
        RBus_UInt32  post_seg_disp_enable_1:1;
        RBus_UInt32  post_seg_disp_enable_0:1;
        RBus_UInt32  post_seg_disp_data_color_1:12;
        RBus_UInt32  post_seg_disp_data_color_0:12;
    };
}kpost_top_kpost_top_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_seg_length:8;
        RBus_UInt32  post_seg_place_y_0:12;
        RBus_UInt32  post_seg_place_x_0:12;
    };
}kpost_top_kpost_top_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_seg_width:8;
        RBus_UInt32  post_seg_place_y_1:12;
        RBus_UInt32  post_seg_place_x_1:12;
    };
}kpost_top_kpost_top_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_seg_distance:8;
        RBus_UInt32  post_seg_place_y_2:12;
        RBus_UInt32  post_seg_place_x_2:12;
    };
}kpost_top_kpost_top_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  post_seg_place_y_3:12;
        RBus_UInt32  post_seg_place_x_3:12;
    };
}kpost_top_kpost_top_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  post_seg_disp_data_color_3:12;
        RBus_UInt32  post_seg_disp_data_color_2:12;
    };
}kpost_top_kpost_top_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  regr_ln2to4p_1stln_in2out_dly:12;
    };
}kpost_top_kpost_top_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  regr_post_bist_done:6;
    };
}kpost_top_kpost_top_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_post_bisr_repaired:1;
        RBus_UInt32  regr_ln2to4p_err_status:2;
        RBus_UInt32  regr_ln2to4p_v_outafterin:12;
        RBus_UInt32  regr_ln2to4p_v_outbeforein:12;
    };
}kpost_top_kpost_top_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  regr_post_bist_fail:6;
        RBus_UInt32  res2:12;
    };
}kpost_top_kpost_top_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  regr_post_bisr_fail:1;
        RBus_UInt32  regr_post_out_vact_measure:12;
        RBus_UInt32  regr_post_out_hact_measure:12;
    };
}kpost_top_kpost_top_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_post_int_pending:4;
        RBus_UInt32  regr_post_out_vtot_measure:12;
        RBus_UInt32  regr_post_out_htot_measure:12;
    };
}kpost_top_kpost_top_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_post_vact:13;
        RBus_UInt32  regr_post_hact:13;
    };
}kpost_top_kpost_top_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_post_cursor_fd_b:10;
        RBus_UInt32  regr_post_cursor_fd_g:10;
        RBus_UInt32  regr_post_cursor_fd_r:10;
    };
}kpost_top_kpost_top_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_post_cursor_bd_b:10;
        RBus_UInt32  regr_post_cursor_bd_g:10;
        RBus_UInt32  regr_post_cursor_bd_r:10;
    };
}kpost_top_kpost_top_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======KPOST_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_cursor_h:13;
        RBus_UInt32  post_cursor_show:1;
        RBus_UInt32  post_cursor_3d_flag:1;
        RBus_UInt32  post_cursor_en:1;
        RBus_UInt32  post_cursor_v:13;
        RBus_UInt32  post_cursor_color:3;
    };
}kpost_top_kpost_top_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_dummy_00:13;
        RBus_UInt32  post_out_int_sel:3;
        RBus_UInt32  post_out_measure_sel:3;
        RBus_UInt32  post_out_measure_en:1;
        RBus_UInt32  post_out_vtotal_int:12;
    };
}kpost_top_kpost_top_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_int_source_sel:1;
        RBus_UInt32  post_int_wclr:4;
        RBus_UInt32  post_int_en:4;
        RBus_UInt32  post_cursor_src_3d_en:1;
        RBus_UInt32  blackinsert_line_en:1;
        RBus_UInt32  blackinsert_line_type:4;
        RBus_UInt32  blackinsert_line_patt_l:16;
        RBus_UInt32  blackinsert_frame_en:1;
    };
}kpost_top_kpost_top_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blackinsert_half_v_center:13;
        RBus_UInt32  blackinsert_half_v_mode:1;
        RBus_UInt32  blackinsert_half_v_en:1;
        RBus_UInt32  blackinsert_line_patt_r:16;
        RBus_UInt32  res1:1;
    };
}kpost_top_kpost_top_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_patt_htotal:16;
        RBus_UInt32  post_patt_vtotal:16;
    };
}kpost_top_kpost_top_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_patt_hact:16;
        RBus_UInt32  post_patt_vact:16;
    };
}kpost_top_kpost_top_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_patt_hs_width:8;
        RBus_UInt32  post_patt_vs_width:8;
        RBus_UInt32  post_patt_hs_bporch:8;
        RBus_UInt32  post_patt_vs_bporch:8;
    };
}kpost_top_kpost_top_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_patt_enable:1;
        RBus_UInt32  post_patt_slf_gen:1;
        RBus_UInt32  post_hv_measure:1;
        RBus_UInt32  post_patt_mode:4;
        RBus_UInt32  post_patt_0e_grid:8;
        RBus_UInt32  post_patt_0f_region:12;
        RBus_UInt32  post_mon_sel:5;
    };
}kpost_top_kpost_top_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_patt_4p_rgb:12;
        RBus_UInt32  post_patt_r_mask:16;
        RBus_UInt32  post_cursor_h_width:4;
    };
}kpost_top_kpost_top_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_patt_g_mask:16;
        RBus_UInt32  post_patt_b_mask:16;
    };
}kpost_top_kpost_top_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pr_mode_en:1;
        RBus_UInt32  hde_center_value:12;
        RBus_UInt32  kpost_4port_hde_center_value:11;
        RBus_UInt32  kpost_sram_ls_en:1;
        RBus_UInt32  kpost_sram_ls_value:1;
        RBus_UInt32  kpost_test1:1;
        RBus_UInt32  res1:5;
    };
}kpost_top_kpost_top_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809d030_23_0:24;
        RBus_UInt32  res1:8;
    };
}kpost_top_kpost_top_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809d034_31_0:32;
    };
}kpost_top_kpost_top_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809d038_31_0:32;
    };
}kpost_top_kpost_top_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809d03c_31_0:32;
    };
}kpost_top_kpost_top_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809d040_3_0:4;
        RBus_UInt32  res1:28;
    };
}kpost_top_kpost_top_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809d044_31_0:32;
    };
}kpost_top_kpost_top_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809d048_31_0:32;
    };
}kpost_top_kpost_top_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809d04c_31_0:32;
    };
}kpost_top_kpost_top_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809d050_3_0:4;
        RBus_UInt32  res1:28;
    };
}kpost_top_kpost_top_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bluescreen_rgb:30;
        RBus_UInt32  bluescreen:1;
        RBus_UInt32  post_second_run_en:1;
    };
}kpost_top_kpost_top_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_ls:3;
        RBus_UInt32  res1:29;
    };
}kpost_top_kpost_top_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_rme:3;
        RBus_UInt32  res1:29;
    };
}kpost_top_kpost_top_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_rm:12;
        RBus_UInt32  res1:20;
    };
}kpost_top_kpost_top_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_usr_coef00:15;
        RBus_UInt32  post_usr_coef01:15;
        RBus_UInt32  res1:2;
    };
}kpost_top_kpost_top_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_usr_coef02:15;
        RBus_UInt32  post_usr_coef10:15;
        RBus_UInt32  res1:2;
    };
}kpost_top_kpost_top_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_usr_coef11:15;
        RBus_UInt32  post_usr_coef12:15;
        RBus_UInt32  res1:2;
    };
}kpost_top_kpost_top_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_usr_coef20:15;
        RBus_UInt32  post_usr_coef21:15;
        RBus_UInt32  res1:2;
    };
}kpost_top_kpost_top_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_usr_coef22:15;
        RBus_UInt32  post_usr_const0:12;
        RBus_UInt32  res1:5;
    };
}kpost_top_kpost_top_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_usr_const1:12;
        RBus_UInt32  post_usr_const2:12;
        RBus_UInt32  post_convert_on:1;
        RBus_UInt32  post_convert_mode:4;
        RBus_UInt32  post_convert_map:3;
    };
}kpost_top_kpost_top_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_seg_disp_data_0:16;
        RBus_UInt32  post_seg_disp_data_1:16;
    };
}kpost_top_kpost_top_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_seg_disp_data_2:16;
        RBus_UInt32  post_seg_disp_data_3:16;
    };
}kpost_top_kpost_top_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_seg_disp_data_color_0:12;
        RBus_UInt32  post_seg_disp_data_color_1:12;
        RBus_UInt32  post_seg_disp_enable_0:1;
        RBus_UInt32  post_seg_disp_enable_1:1;
        RBus_UInt32  post_seg_disp_enable_2:1;
        RBus_UInt32  post_seg_disp_enable_3:1;
        RBus_UInt32  res1:4;
    };
}kpost_top_kpost_top_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_seg_place_x_0:12;
        RBus_UInt32  post_seg_place_y_0:12;
        RBus_UInt32  post_seg_length:8;
    };
}kpost_top_kpost_top_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_seg_place_x_1:12;
        RBus_UInt32  post_seg_place_y_1:12;
        RBus_UInt32  post_seg_width:8;
    };
}kpost_top_kpost_top_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_seg_place_x_2:12;
        RBus_UInt32  post_seg_place_y_2:12;
        RBus_UInt32  post_seg_distance:8;
    };
}kpost_top_kpost_top_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_seg_place_x_3:12;
        RBus_UInt32  post_seg_place_y_3:12;
        RBus_UInt32  res1:8;
    };
}kpost_top_kpost_top_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_seg_disp_data_color_2:12;
        RBus_UInt32  post_seg_disp_data_color_3:12;
        RBus_UInt32  res1:8;
    };
}kpost_top_kpost_top_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ln2to4p_1stln_in2out_dly:12;
        RBus_UInt32  res1:20;
    };
}kpost_top_kpost_top_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_post_bist_done:6;
        RBus_UInt32  res1:26;
    };
}kpost_top_kpost_top_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ln2to4p_v_outbeforein:12;
        RBus_UInt32  regr_ln2to4p_v_outafterin:12;
        RBus_UInt32  regr_ln2to4p_err_status:2;
        RBus_UInt32  regr_post_bisr_repaired:1;
        RBus_UInt32  res1:5;
    };
}kpost_top_kpost_top_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_post_bist_fail:6;
        RBus_UInt32  res2:14;
    };
}kpost_top_kpost_top_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_post_out_hact_measure:12;
        RBus_UInt32  regr_post_out_vact_measure:12;
        RBus_UInt32  regr_post_bisr_fail:1;
        RBus_UInt32  res1:7;
    };
}kpost_top_kpost_top_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_post_out_htot_measure:12;
        RBus_UInt32  regr_post_out_vtot_measure:12;
        RBus_UInt32  regr_post_int_pending:4;
        RBus_UInt32  res1:4;
    };
}kpost_top_kpost_top_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_post_hact:13;
        RBus_UInt32  regr_post_vact:13;
        RBus_UInt32  res1:6;
    };
}kpost_top_kpost_top_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_post_cursor_fd_r:10;
        RBus_UInt32  regr_post_cursor_fd_g:10;
        RBus_UInt32  regr_post_cursor_fd_b:10;
        RBus_UInt32  res1:2;
    };
}kpost_top_kpost_top_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_post_cursor_bd_r:10;
        RBus_UInt32  regr_post_cursor_bd_g:10;
        RBus_UInt32  regr_post_cursor_bd_b:10;
        RBus_UInt32  res1:2;
    };
}kpost_top_kpost_top_fc_RBUS;




#endif 


#endif 
