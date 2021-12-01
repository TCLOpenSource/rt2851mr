/**
* @file Merlin5_MEMC_KME_DEHALO
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_DEHALO_REG_H_
#define _RBUS_KME_DEHALO_REG_H_

#include "rbus_types.h"



//  KME_DEHALO Register Address
#define  KME_DEHALO_KME_DEHALO_10                                               0x1809CD10
#define  KME_DEHALO_KME_DEHALO_10_reg_addr                                       "0xB809CD10"
#define  KME_DEHALO_KME_DEHALO_10_reg                                            0xB809CD10
#define  KME_DEHALO_KME_DEHALO_10_inst_addr                                      "0x0000"
#define  set_KME_DEHALO_KME_DEHALO_10_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_10_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_10_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_10_reg))
#define  KME_DEHALO_KME_DEHALO_10_dh_mv_blk_num_shift                            (23)
#define  KME_DEHALO_KME_DEHALO_10_dh_det_row_posi_shift                          (15)
#define  KME_DEHALO_KME_DEHALO_10_dh_logo_blk_size_shift                         (14)
#define  KME_DEHALO_KME_DEHALO_10_dh_logo_row_size_shift                         (12)
#define  KME_DEHALO_KME_DEHALO_10_dh_mv_blk_size_shift                           (11)
#define  KME_DEHALO_KME_DEHALO_10_dh_mv_row_size_shift                           (9)
#define  KME_DEHALO_KME_DEHALO_10_dh_yx_ratio_shift                              (7)
#define  KME_DEHALO_KME_DEHALO_10_dh_out_crc_en_shift                            (6)
#define  KME_DEHALO_KME_DEHALO_10_dh_sram_ls_shift                               (5)
#define  KME_DEHALO_KME_DEHALO_10_dh_scene_change_on_shift                       (4)
#define  KME_DEHALO_KME_DEHALO_10_dh_scene_change_mode_shift                     (3)
#define  KME_DEHALO_KME_DEHALO_10_dh_in_crc_en_shift                             (2)
#define  KME_DEHALO_KME_DEHALO_10_dh_rdbk_en_shift                               (1)
#define  KME_DEHALO_KME_DEHALO_10_dh_en_shift                                    (0)
#define  KME_DEHALO_KME_DEHALO_10_dh_mv_blk_num_mask                             (0xFF800000)
#define  KME_DEHALO_KME_DEHALO_10_dh_det_row_posi_mask                           (0x007F8000)
#define  KME_DEHALO_KME_DEHALO_10_dh_logo_blk_size_mask                          (0x00004000)
#define  KME_DEHALO_KME_DEHALO_10_dh_logo_row_size_mask                          (0x00003000)
#define  KME_DEHALO_KME_DEHALO_10_dh_mv_blk_size_mask                            (0x00000800)
#define  KME_DEHALO_KME_DEHALO_10_dh_mv_row_size_mask                            (0x00000600)
#define  KME_DEHALO_KME_DEHALO_10_dh_yx_ratio_mask                               (0x00000180)
#define  KME_DEHALO_KME_DEHALO_10_dh_out_crc_en_mask                             (0x00000040)
#define  KME_DEHALO_KME_DEHALO_10_dh_sram_ls_mask                                (0x00000020)
#define  KME_DEHALO_KME_DEHALO_10_dh_scene_change_on_mask                        (0x00000010)
#define  KME_DEHALO_KME_DEHALO_10_dh_scene_change_mode_mask                      (0x00000008)
#define  KME_DEHALO_KME_DEHALO_10_dh_in_crc_en_mask                              (0x00000004)
#define  KME_DEHALO_KME_DEHALO_10_dh_rdbk_en_mask                                (0x00000002)
#define  KME_DEHALO_KME_DEHALO_10_dh_en_mask                                     (0x00000001)
#define  KME_DEHALO_KME_DEHALO_10_dh_mv_blk_num(data)                            (0xFF800000&((data)<<23))
#define  KME_DEHALO_KME_DEHALO_10_dh_det_row_posi(data)                          (0x007F8000&((data)<<15))
#define  KME_DEHALO_KME_DEHALO_10_dh_logo_blk_size(data)                         (0x00004000&((data)<<14))
#define  KME_DEHALO_KME_DEHALO_10_dh_logo_row_size(data)                         (0x00003000&((data)<<12))
#define  KME_DEHALO_KME_DEHALO_10_dh_mv_blk_size(data)                           (0x00000800&((data)<<11))
#define  KME_DEHALO_KME_DEHALO_10_dh_mv_row_size(data)                           (0x00000600&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_10_dh_yx_ratio(data)                              (0x00000180&((data)<<7))
#define  KME_DEHALO_KME_DEHALO_10_dh_out_crc_en(data)                            (0x00000040&((data)<<6))
#define  KME_DEHALO_KME_DEHALO_10_dh_sram_ls(data)                               (0x00000020&((data)<<5))
#define  KME_DEHALO_KME_DEHALO_10_dh_scene_change_on(data)                       (0x00000010&((data)<<4))
#define  KME_DEHALO_KME_DEHALO_10_dh_scene_change_mode(data)                     (0x00000008&((data)<<3))
#define  KME_DEHALO_KME_DEHALO_10_dh_in_crc_en(data)                             (0x00000004&((data)<<2))
#define  KME_DEHALO_KME_DEHALO_10_dh_rdbk_en(data)                               (0x00000002&((data)<<1))
#define  KME_DEHALO_KME_DEHALO_10_dh_en(data)                                    (0x00000001&(data))
#define  KME_DEHALO_KME_DEHALO_10_get_dh_mv_blk_num(data)                        ((0xFF800000&(data))>>23)
#define  KME_DEHALO_KME_DEHALO_10_get_dh_det_row_posi(data)                      ((0x007F8000&(data))>>15)
#define  KME_DEHALO_KME_DEHALO_10_get_dh_logo_blk_size(data)                     ((0x00004000&(data))>>14)
#define  KME_DEHALO_KME_DEHALO_10_get_dh_logo_row_size(data)                     ((0x00003000&(data))>>12)
#define  KME_DEHALO_KME_DEHALO_10_get_dh_mv_blk_size(data)                       ((0x00000800&(data))>>11)
#define  KME_DEHALO_KME_DEHALO_10_get_dh_mv_row_size(data)                       ((0x00000600&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_10_get_dh_yx_ratio(data)                          ((0x00000180&(data))>>7)
#define  KME_DEHALO_KME_DEHALO_10_get_dh_out_crc_en(data)                        ((0x00000040&(data))>>6)
#define  KME_DEHALO_KME_DEHALO_10_get_dh_sram_ls(data)                           ((0x00000020&(data))>>5)
#define  KME_DEHALO_KME_DEHALO_10_get_dh_scene_change_on(data)                   ((0x00000010&(data))>>4)
#define  KME_DEHALO_KME_DEHALO_10_get_dh_scene_change_mode(data)                 ((0x00000008&(data))>>3)
#define  KME_DEHALO_KME_DEHALO_10_get_dh_in_crc_en(data)                         ((0x00000004&(data))>>2)
#define  KME_DEHALO_KME_DEHALO_10_get_dh_rdbk_en(data)                           ((0x00000002&(data))>>1)
#define  KME_DEHALO_KME_DEHALO_10_get_dh_en(data)                                (0x00000001&(data))

#define  KME_DEHALO_KME_DEHALO_14                                               0x1809CD14
#define  KME_DEHALO_KME_DEHALO_14_reg_addr                                       "0xB809CD14"
#define  KME_DEHALO_KME_DEHALO_14_reg                                            0xB809CD14
#define  KME_DEHALO_KME_DEHALO_14_inst_addr                                      "0x0001"
#define  set_KME_DEHALO_KME_DEHALO_14_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_14_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_14_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_14_reg))
#define  KME_DEHALO_KME_DEHALO_14_dh_sc_bv_sel_shift                             (30)
#define  KME_DEHALO_KME_DEHALO_14_dh_debug_show_vbuf_info_en_shift               (29)
#define  KME_DEHALO_KME_DEHALO_14_dh_vbuf_double_scan_en_shift                   (28)
#define  KME_DEHALO_KME_DEHALO_14_dh_me2cal_in_480x270_mod_shift                 (27)
#define  KME_DEHALO_KME_DEHALO_14_dh_logo_row_num_shift                          (18)
#define  KME_DEHALO_KME_DEHALO_14_dh_logo_blk_num_shift                          (9)
#define  KME_DEHALO_KME_DEHALO_14_dh_mv_row_num_shift                            (0)
#define  KME_DEHALO_KME_DEHALO_14_dh_sc_bv_sel_mask                              (0x40000000)
#define  KME_DEHALO_KME_DEHALO_14_dh_debug_show_vbuf_info_en_mask                (0x20000000)
#define  KME_DEHALO_KME_DEHALO_14_dh_vbuf_double_scan_en_mask                    (0x10000000)
#define  KME_DEHALO_KME_DEHALO_14_dh_me2cal_in_480x270_mod_mask                  (0x08000000)
#define  KME_DEHALO_KME_DEHALO_14_dh_logo_row_num_mask                           (0x07FC0000)
#define  KME_DEHALO_KME_DEHALO_14_dh_logo_blk_num_mask                           (0x0003FE00)
#define  KME_DEHALO_KME_DEHALO_14_dh_mv_row_num_mask                             (0x000001FF)
#define  KME_DEHALO_KME_DEHALO_14_dh_sc_bv_sel(data)                             (0x40000000&((data)<<30))
#define  KME_DEHALO_KME_DEHALO_14_dh_debug_show_vbuf_info_en(data)               (0x20000000&((data)<<29))
#define  KME_DEHALO_KME_DEHALO_14_dh_vbuf_double_scan_en(data)                   (0x10000000&((data)<<28))
#define  KME_DEHALO_KME_DEHALO_14_dh_me2cal_in_480x270_mod(data)                 (0x08000000&((data)<<27))
#define  KME_DEHALO_KME_DEHALO_14_dh_logo_row_num(data)                          (0x07FC0000&((data)<<18))
#define  KME_DEHALO_KME_DEHALO_14_dh_logo_blk_num(data)                          (0x0003FE00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_14_dh_mv_row_num(data)                            (0x000001FF&(data))
#define  KME_DEHALO_KME_DEHALO_14_get_dh_sc_bv_sel(data)                         ((0x40000000&(data))>>30)
#define  KME_DEHALO_KME_DEHALO_14_get_dh_debug_show_vbuf_info_en(data)           ((0x20000000&(data))>>29)
#define  KME_DEHALO_KME_DEHALO_14_get_dh_vbuf_double_scan_en(data)               ((0x10000000&(data))>>28)
#define  KME_DEHALO_KME_DEHALO_14_get_dh_me2cal_in_480x270_mod(data)             ((0x08000000&(data))>>27)
#define  KME_DEHALO_KME_DEHALO_14_get_dh_logo_row_num(data)                      ((0x07FC0000&(data))>>18)
#define  KME_DEHALO_KME_DEHALO_14_get_dh_logo_blk_num(data)                      ((0x0003FE00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_14_get_dh_mv_row_num(data)                        (0x000001FF&(data))

#define  KME_DEHALO_KME_DEHALO_18                                               0x1809CD18
#define  KME_DEHALO_KME_DEHALO_18_reg_addr                                       "0xB809CD18"
#define  KME_DEHALO_KME_DEHALO_18_reg                                            0xB809CD18
#define  KME_DEHALO_KME_DEHALO_18_inst_addr                                      "0x0002"
#define  set_KME_DEHALO_KME_DEHALO_18_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_18_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_18_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_18_reg))
#define  KME_DEHALO_KME_DEHALO_18_dh_me1_me2_info_to_mc_shift                    (31)
#define  KME_DEHALO_KME_DEHALO_18_dh_med_patt_row_size_shift                     (30)
#define  KME_DEHALO_KME_DEHALO_18_dh_med_patt_blk_size_shift                     (29)
#define  KME_DEHALO_KME_DEHALO_18_dh_pre_patt_row_size_shift                     (28)
#define  KME_DEHALO_KME_DEHALO_18_dh_pre_patt_blk_size_shift                     (27)
#define  KME_DEHALO_KME_DEHALO_18_dh_top_ofst_shift                              (18)
#define  KME_DEHALO_KME_DEHALO_18_dh_right_ofst_shift                            (9)
#define  KME_DEHALO_KME_DEHALO_18_dh_left_ofst_shift                             (0)
#define  KME_DEHALO_KME_DEHALO_18_dh_me1_me2_info_to_mc_mask                     (0x80000000)
#define  KME_DEHALO_KME_DEHALO_18_dh_med_patt_row_size_mask                      (0x40000000)
#define  KME_DEHALO_KME_DEHALO_18_dh_med_patt_blk_size_mask                      (0x20000000)
#define  KME_DEHALO_KME_DEHALO_18_dh_pre_patt_row_size_mask                      (0x10000000)
#define  KME_DEHALO_KME_DEHALO_18_dh_pre_patt_blk_size_mask                      (0x08000000)
#define  KME_DEHALO_KME_DEHALO_18_dh_top_ofst_mask                               (0x07FC0000)
#define  KME_DEHALO_KME_DEHALO_18_dh_right_ofst_mask                             (0x0003FE00)
#define  KME_DEHALO_KME_DEHALO_18_dh_left_ofst_mask                              (0x000001FF)
#define  KME_DEHALO_KME_DEHALO_18_dh_me1_me2_info_to_mc(data)                    (0x80000000&((data)<<31))
#define  KME_DEHALO_KME_DEHALO_18_dh_med_patt_row_size(data)                     (0x40000000&((data)<<30))
#define  KME_DEHALO_KME_DEHALO_18_dh_med_patt_blk_size(data)                     (0x20000000&((data)<<29))
#define  KME_DEHALO_KME_DEHALO_18_dh_pre_patt_row_size(data)                     (0x10000000&((data)<<28))
#define  KME_DEHALO_KME_DEHALO_18_dh_pre_patt_blk_size(data)                     (0x08000000&((data)<<27))
#define  KME_DEHALO_KME_DEHALO_18_dh_top_ofst(data)                              (0x07FC0000&((data)<<18))
#define  KME_DEHALO_KME_DEHALO_18_dh_right_ofst(data)                            (0x0003FE00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_18_dh_left_ofst(data)                             (0x000001FF&(data))
#define  KME_DEHALO_KME_DEHALO_18_get_dh_me1_me2_info_to_mc(data)                ((0x80000000&(data))>>31)
#define  KME_DEHALO_KME_DEHALO_18_get_dh_med_patt_row_size(data)                 ((0x40000000&(data))>>30)
#define  KME_DEHALO_KME_DEHALO_18_get_dh_med_patt_blk_size(data)                 ((0x20000000&(data))>>29)
#define  KME_DEHALO_KME_DEHALO_18_get_dh_pre_patt_row_size(data)                 ((0x10000000&(data))>>28)
#define  KME_DEHALO_KME_DEHALO_18_get_dh_pre_patt_blk_size(data)                 ((0x08000000&(data))>>27)
#define  KME_DEHALO_KME_DEHALO_18_get_dh_top_ofst(data)                          ((0x07FC0000&(data))>>18)
#define  KME_DEHALO_KME_DEHALO_18_get_dh_right_ofst(data)                        ((0x0003FE00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_18_get_dh_left_ofst(data)                         (0x000001FF&(data))

#define  KME_DEHALO_KME_DEHALO_1C                                               0x1809CD1C
#define  KME_DEHALO_KME_DEHALO_1C_reg_addr                                       "0xB809CD1C"
#define  KME_DEHALO_KME_DEHALO_1C_reg                                            0xB809CD1C
#define  KME_DEHALO_KME_DEHALO_1C_inst_addr                                      "0x0003"
#define  set_KME_DEHALO_KME_DEHALO_1C_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_1C_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_1C_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_1C_reg))
#define  KME_DEHALO_KME_DEHALO_1C_dh_pck_force_pedal_0_shift                     (30)
#define  KME_DEHALO_KME_DEHALO_1C_dh_pck_force_fbcovalpha_0_shift                (29)
#define  KME_DEHALO_KME_DEHALO_1C_dh_vbuf_row_mask_shift                         (28)
#define  KME_DEHALO_KME_DEHALO_1C_dh_rt1_drt_2x2_sel_shift                       (27)
#define  KME_DEHALO_KME_DEHALO_1C_dh_rt1_right_ofst_shift                        (18)
#define  KME_DEHALO_KME_DEHALO_1C_dh_rt1_left_ofst_shift                         (9)
#define  KME_DEHALO_KME_DEHALO_1C_dh_bot_ofst_shift                              (0)
#define  KME_DEHALO_KME_DEHALO_1C_dh_pck_force_pedal_0_mask                      (0x40000000)
#define  KME_DEHALO_KME_DEHALO_1C_dh_pck_force_fbcovalpha_0_mask                 (0x20000000)
#define  KME_DEHALO_KME_DEHALO_1C_dh_vbuf_row_mask_mask                          (0x10000000)
#define  KME_DEHALO_KME_DEHALO_1C_dh_rt1_drt_2x2_sel_mask                        (0x08000000)
#define  KME_DEHALO_KME_DEHALO_1C_dh_rt1_right_ofst_mask                         (0x07FC0000)
#define  KME_DEHALO_KME_DEHALO_1C_dh_rt1_left_ofst_mask                          (0x0003FE00)
#define  KME_DEHALO_KME_DEHALO_1C_dh_bot_ofst_mask                               (0x000001FF)
#define  KME_DEHALO_KME_DEHALO_1C_dh_pck_force_pedal_0(data)                     (0x40000000&((data)<<30))
#define  KME_DEHALO_KME_DEHALO_1C_dh_pck_force_fbcovalpha_0(data)                (0x20000000&((data)<<29))
#define  KME_DEHALO_KME_DEHALO_1C_dh_vbuf_row_mask(data)                         (0x10000000&((data)<<28))
#define  KME_DEHALO_KME_DEHALO_1C_dh_rt1_drt_2x2_sel(data)                       (0x08000000&((data)<<27))
#define  KME_DEHALO_KME_DEHALO_1C_dh_rt1_right_ofst(data)                        (0x07FC0000&((data)<<18))
#define  KME_DEHALO_KME_DEHALO_1C_dh_rt1_left_ofst(data)                         (0x0003FE00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_1C_dh_bot_ofst(data)                              (0x000001FF&(data))
#define  KME_DEHALO_KME_DEHALO_1C_get_dh_pck_force_pedal_0(data)                 ((0x40000000&(data))>>30)
#define  KME_DEHALO_KME_DEHALO_1C_get_dh_pck_force_fbcovalpha_0(data)            ((0x20000000&(data))>>29)
#define  KME_DEHALO_KME_DEHALO_1C_get_dh_vbuf_row_mask(data)                     ((0x10000000&(data))>>28)
#define  KME_DEHALO_KME_DEHALO_1C_get_dh_rt1_drt_2x2_sel(data)                   ((0x08000000&(data))>>27)
#define  KME_DEHALO_KME_DEHALO_1C_get_dh_rt1_right_ofst(data)                    ((0x07FC0000&(data))>>18)
#define  KME_DEHALO_KME_DEHALO_1C_get_dh_rt1_left_ofst(data)                     ((0x0003FE00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_1C_get_dh_bot_ofst(data)                          (0x000001FF&(data))

#define  KME_DEHALO_KME_DEHALO_20                                               0x1809CD20
#define  KME_DEHALO_KME_DEHALO_20_reg_addr                                       "0xB809CD20"
#define  KME_DEHALO_KME_DEHALO_20_reg                                            0xB809CD20
#define  KME_DEHALO_KME_DEHALO_20_inst_addr                                      "0x0004"
#define  set_KME_DEHALO_KME_DEHALO_20_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_20_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_20_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_20_reg))
#define  KME_DEHALO_KME_DEHALO_20_dh_rt1_bv_sel_shift                            (30)
#define  KME_DEHALO_KME_DEHALO_20_dh_pfv_conf_gen_bv_sel_shift                   (29)
#define  KME_DEHALO_KME_DEHALO_20_dh_ac_dc_flg_en_shift                          (28)
#define  KME_DEHALO_KME_DEHALO_20_dh_ac_dc_sel_shift                             (27)
#define  KME_DEHALO_KME_DEHALO_20_dh_rt2_left_ofst_shift                         (18)
#define  KME_DEHALO_KME_DEHALO_20_dh_rt1_bot_ofst_shift                          (9)
#define  KME_DEHALO_KME_DEHALO_20_dh_rt1_top_ofst_shift                          (0)
#define  KME_DEHALO_KME_DEHALO_20_dh_rt1_bv_sel_mask                             (0x40000000)
#define  KME_DEHALO_KME_DEHALO_20_dh_pfv_conf_gen_bv_sel_mask                    (0x20000000)
#define  KME_DEHALO_KME_DEHALO_20_dh_ac_dc_flg_en_mask                           (0x10000000)
#define  KME_DEHALO_KME_DEHALO_20_dh_ac_dc_sel_mask                              (0x08000000)
#define  KME_DEHALO_KME_DEHALO_20_dh_rt2_left_ofst_mask                          (0x07FC0000)
#define  KME_DEHALO_KME_DEHALO_20_dh_rt1_bot_ofst_mask                           (0x0003FE00)
#define  KME_DEHALO_KME_DEHALO_20_dh_rt1_top_ofst_mask                           (0x000001FF)
#define  KME_DEHALO_KME_DEHALO_20_dh_rt1_bv_sel(data)                            (0x40000000&((data)<<30))
#define  KME_DEHALO_KME_DEHALO_20_dh_pfv_conf_gen_bv_sel(data)                   (0x20000000&((data)<<29))
#define  KME_DEHALO_KME_DEHALO_20_dh_ac_dc_flg_en(data)                          (0x10000000&((data)<<28))
#define  KME_DEHALO_KME_DEHALO_20_dh_ac_dc_sel(data)                             (0x08000000&((data)<<27))
#define  KME_DEHALO_KME_DEHALO_20_dh_rt2_left_ofst(data)                         (0x07FC0000&((data)<<18))
#define  KME_DEHALO_KME_DEHALO_20_dh_rt1_bot_ofst(data)                          (0x0003FE00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_20_dh_rt1_top_ofst(data)                          (0x000001FF&(data))
#define  KME_DEHALO_KME_DEHALO_20_get_dh_rt1_bv_sel(data)                        ((0x40000000&(data))>>30)
#define  KME_DEHALO_KME_DEHALO_20_get_dh_pfv_conf_gen_bv_sel(data)               ((0x20000000&(data))>>29)
#define  KME_DEHALO_KME_DEHALO_20_get_dh_ac_dc_flg_en(data)                      ((0x10000000&(data))>>28)
#define  KME_DEHALO_KME_DEHALO_20_get_dh_ac_dc_sel(data)                         ((0x08000000&(data))>>27)
#define  KME_DEHALO_KME_DEHALO_20_get_dh_rt2_left_ofst(data)                     ((0x07FC0000&(data))>>18)
#define  KME_DEHALO_KME_DEHALO_20_get_dh_rt1_bot_ofst(data)                      ((0x0003FE00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_20_get_dh_rt1_top_ofst(data)                      (0x000001FF&(data))

#define  KME_DEHALO_KME_DEHALO_24                                               0x1809CD24
#define  KME_DEHALO_KME_DEHALO_24_reg_addr                                       "0xB809CD24"
#define  KME_DEHALO_KME_DEHALO_24_reg                                            0xB809CD24
#define  KME_DEHALO_KME_DEHALO_24_inst_addr                                      "0x0005"
#define  set_KME_DEHALO_KME_DEHALO_24_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_24_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_24_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_24_reg))
#define  KME_DEHALO_KME_DEHALO_24_dh_force_phase_en_shift                        (29)
#define  KME_DEHALO_KME_DEHALO_24_dh_debug_show_me1_me2_shift                    (27)
#define  KME_DEHALO_KME_DEHALO_24_dh_rt2_bot_ofst_shift                          (18)
#define  KME_DEHALO_KME_DEHALO_24_dh_rt2_top_ofst_shift                          (9)
#define  KME_DEHALO_KME_DEHALO_24_dh_rt2_right_ofst_shift                        (0)
#define  KME_DEHALO_KME_DEHALO_24_dh_force_phase_en_mask                         (0x20000000)
#define  KME_DEHALO_KME_DEHALO_24_dh_debug_show_me1_me2_mask                     (0x18000000)
#define  KME_DEHALO_KME_DEHALO_24_dh_rt2_bot_ofst_mask                           (0x07FC0000)
#define  KME_DEHALO_KME_DEHALO_24_dh_rt2_top_ofst_mask                           (0x0003FE00)
#define  KME_DEHALO_KME_DEHALO_24_dh_rt2_right_ofst_mask                         (0x000001FF)
#define  KME_DEHALO_KME_DEHALO_24_dh_force_phase_en(data)                        (0x20000000&((data)<<29))
#define  KME_DEHALO_KME_DEHALO_24_dh_debug_show_me1_me2(data)                    (0x18000000&((data)<<27))
#define  KME_DEHALO_KME_DEHALO_24_dh_rt2_bot_ofst(data)                          (0x07FC0000&((data)<<18))
#define  KME_DEHALO_KME_DEHALO_24_dh_rt2_top_ofst(data)                          (0x0003FE00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_24_dh_rt2_right_ofst(data)                        (0x000001FF&(data))
#define  KME_DEHALO_KME_DEHALO_24_get_dh_force_phase_en(data)                    ((0x20000000&(data))>>29)
#define  KME_DEHALO_KME_DEHALO_24_get_dh_debug_show_me1_me2(data)                ((0x18000000&(data))>>27)
#define  KME_DEHALO_KME_DEHALO_24_get_dh_rt2_bot_ofst(data)                      ((0x07FC0000&(data))>>18)
#define  KME_DEHALO_KME_DEHALO_24_get_dh_rt2_top_ofst(data)                      ((0x0003FE00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_24_get_dh_rt2_right_ofst(data)                    (0x000001FF&(data))

#define  KME_DEHALO_KME_DEHALO_28                                               0x1809CD28
#define  KME_DEHALO_KME_DEHALO_28_reg_addr                                       "0xB809CD28"
#define  KME_DEHALO_KME_DEHALO_28_reg                                            0xB809CD28
#define  KME_DEHALO_KME_DEHALO_28_inst_addr                                      "0x0006"
#define  set_KME_DEHALO_KME_DEHALO_28_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_28_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_28_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_28_reg))
#define  KME_DEHALO_KME_DEHALO_28_dh_mv_med_pat_en_shift                         (31)
#define  KME_DEHALO_KME_DEHALO_28_dh_mv_pat_mv_x_shift                           (20)
#define  KME_DEHALO_KME_DEHALO_28_dh_mv_pat_mv_y_shift                           (10)
#define  KME_DEHALO_KME_DEHALO_28_dh_mv_pat_mode_shift                           (8)
#define  KME_DEHALO_KME_DEHALO_28_dh_mv_pat_en_shift                             (6)
#define  KME_DEHALO_KME_DEHALO_28_dh_force_phase_shift                           (0)
#define  KME_DEHALO_KME_DEHALO_28_dh_mv_med_pat_en_mask                          (0x80000000)
#define  KME_DEHALO_KME_DEHALO_28_dh_mv_pat_mv_x_mask                            (0x7FF00000)
#define  KME_DEHALO_KME_DEHALO_28_dh_mv_pat_mv_y_mask                            (0x000FFC00)
#define  KME_DEHALO_KME_DEHALO_28_dh_mv_pat_mode_mask                            (0x00000300)
#define  KME_DEHALO_KME_DEHALO_28_dh_mv_pat_en_mask                              (0x000000C0)
#define  KME_DEHALO_KME_DEHALO_28_dh_force_phase_mask                            (0x0000003F)
#define  KME_DEHALO_KME_DEHALO_28_dh_mv_med_pat_en(data)                         (0x80000000&((data)<<31))
#define  KME_DEHALO_KME_DEHALO_28_dh_mv_pat_mv_x(data)                           (0x7FF00000&((data)<<20))
#define  KME_DEHALO_KME_DEHALO_28_dh_mv_pat_mv_y(data)                           (0x000FFC00&((data)<<10))
#define  KME_DEHALO_KME_DEHALO_28_dh_mv_pat_mode(data)                           (0x00000300&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_28_dh_mv_pat_en(data)                             (0x000000C0&((data)<<6))
#define  KME_DEHALO_KME_DEHALO_28_dh_force_phase(data)                           (0x0000003F&(data))
#define  KME_DEHALO_KME_DEHALO_28_get_dh_mv_med_pat_en(data)                     ((0x80000000&(data))>>31)
#define  KME_DEHALO_KME_DEHALO_28_get_dh_mv_pat_mv_x(data)                       ((0x7FF00000&(data))>>20)
#define  KME_DEHALO_KME_DEHALO_28_get_dh_mv_pat_mv_y(data)                       ((0x000FFC00&(data))>>10)
#define  KME_DEHALO_KME_DEHALO_28_get_dh_mv_pat_mode(data)                       ((0x00000300&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_28_get_dh_mv_pat_en(data)                         ((0x000000C0&(data))>>6)
#define  KME_DEHALO_KME_DEHALO_28_get_dh_force_phase(data)                       (0x0000003F&(data))

#define  KME_DEHALO_KME_DEHALO_2C                                               0x1809CD2C
#define  KME_DEHALO_KME_DEHALO_2C_reg_addr                                       "0xB809CD2C"
#define  KME_DEHALO_KME_DEHALO_2C_reg                                            0xB809CD2C
#define  KME_DEHALO_KME_DEHALO_2C_inst_addr                                      "0x0007"
#define  set_KME_DEHALO_KME_DEHALO_2C_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_2C_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_2C_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_2C_reg))
#define  KME_DEHALO_KME_DEHALO_2C_dh_dob_dly_sel_shift                           (28)
#define  KME_DEHALO_KME_DEHALO_2C_dh_preflt_vs_sel_shift                         (27)
#define  KME_DEHALO_KME_DEHALO_2C_dh_mv_pat_v0_shift                             (18)
#define  KME_DEHALO_KME_DEHALO_2C_dh_mv_pat_h1_shift                             (9)
#define  KME_DEHALO_KME_DEHALO_2C_dh_mv_pat_h0_shift                             (0)
#define  KME_DEHALO_KME_DEHALO_2C_dh_dob_dly_sel_mask                            (0xF0000000)
#define  KME_DEHALO_KME_DEHALO_2C_dh_preflt_vs_sel_mask                          (0x08000000)
#define  KME_DEHALO_KME_DEHALO_2C_dh_mv_pat_v0_mask                              (0x07FC0000)
#define  KME_DEHALO_KME_DEHALO_2C_dh_mv_pat_h1_mask                              (0x0003FE00)
#define  KME_DEHALO_KME_DEHALO_2C_dh_mv_pat_h0_mask                              (0x000001FF)
#define  KME_DEHALO_KME_DEHALO_2C_dh_dob_dly_sel(data)                           (0xF0000000&((data)<<28))
#define  KME_DEHALO_KME_DEHALO_2C_dh_preflt_vs_sel(data)                         (0x08000000&((data)<<27))
#define  KME_DEHALO_KME_DEHALO_2C_dh_mv_pat_v0(data)                             (0x07FC0000&((data)<<18))
#define  KME_DEHALO_KME_DEHALO_2C_dh_mv_pat_h1(data)                             (0x0003FE00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_2C_dh_mv_pat_h0(data)                             (0x000001FF&(data))
#define  KME_DEHALO_KME_DEHALO_2C_get_dh_dob_dly_sel(data)                       ((0xF0000000&(data))>>28)
#define  KME_DEHALO_KME_DEHALO_2C_get_dh_preflt_vs_sel(data)                     ((0x08000000&(data))>>27)
#define  KME_DEHALO_KME_DEHALO_2C_get_dh_mv_pat_v0(data)                         ((0x07FC0000&(data))>>18)
#define  KME_DEHALO_KME_DEHALO_2C_get_dh_mv_pat_h1(data)                         ((0x0003FE00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_2C_get_dh_mv_pat_h0(data)                         (0x000001FF&(data))

#define  KME_DEHALO_KME_DEHALO_30                                               0x1809CD30
#define  KME_DEHALO_KME_DEHALO_30_reg_addr                                       "0xB809CD30"
#define  KME_DEHALO_KME_DEHALO_30_reg                                            0xB809CD30
#define  KME_DEHALO_KME_DEHALO_30_inst_addr                                      "0x0008"
#define  set_KME_DEHALO_KME_DEHALO_30_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_30_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_30_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_30_reg))
#define  KME_DEHALO_KME_DEHALO_30_dh_me1_dbg_mv_num_shift                        (22)
#define  KME_DEHALO_KME_DEHALO_30_dh_pst_pat_eros_mode_shift                     (21)
#define  KME_DEHALO_KME_DEHALO_30_dh_med_pat_eros_mode_shift                     (20)
#define  KME_DEHALO_KME_DEHALO_30_dh_pre_pat_eros_mode_shift                     (19)
#define  KME_DEHALO_KME_DEHALO_30_dh_med_patt_info_to_mc_shift                   (18)
#define  KME_DEHALO_KME_DEHALO_30_dh_mv_pat_self_en_shift                        (16)
#define  KME_DEHALO_KME_DEHALO_30_dh_mv_pat_self_cycle_shift                     (10)
#define  KME_DEHALO_KME_DEHALO_30_dh_mv_med_pat_self_en_shift                    (9)
#define  KME_DEHALO_KME_DEHALO_30_dh_mv_pat_v1_shift                             (0)
#define  KME_DEHALO_KME_DEHALO_30_dh_me1_dbg_mv_num_mask                         (0x7FC00000)
#define  KME_DEHALO_KME_DEHALO_30_dh_pst_pat_eros_mode_mask                      (0x00200000)
#define  KME_DEHALO_KME_DEHALO_30_dh_med_pat_eros_mode_mask                      (0x00100000)
#define  KME_DEHALO_KME_DEHALO_30_dh_pre_pat_eros_mode_mask                      (0x00080000)
#define  KME_DEHALO_KME_DEHALO_30_dh_med_patt_info_to_mc_mask                    (0x00040000)
#define  KME_DEHALO_KME_DEHALO_30_dh_mv_pat_self_en_mask                         (0x00030000)
#define  KME_DEHALO_KME_DEHALO_30_dh_mv_pat_self_cycle_mask                      (0x0000FC00)
#define  KME_DEHALO_KME_DEHALO_30_dh_mv_med_pat_self_en_mask                     (0x00000200)
#define  KME_DEHALO_KME_DEHALO_30_dh_mv_pat_v1_mask                              (0x000001FF)
#define  KME_DEHALO_KME_DEHALO_30_dh_me1_dbg_mv_num(data)                        (0x7FC00000&((data)<<22))
#define  KME_DEHALO_KME_DEHALO_30_dh_pst_pat_eros_mode(data)                     (0x00200000&((data)<<21))
#define  KME_DEHALO_KME_DEHALO_30_dh_med_pat_eros_mode(data)                     (0x00100000&((data)<<20))
#define  KME_DEHALO_KME_DEHALO_30_dh_pre_pat_eros_mode(data)                     (0x00080000&((data)<<19))
#define  KME_DEHALO_KME_DEHALO_30_dh_med_patt_info_to_mc(data)                   (0x00040000&((data)<<18))
#define  KME_DEHALO_KME_DEHALO_30_dh_mv_pat_self_en(data)                        (0x00030000&((data)<<16))
#define  KME_DEHALO_KME_DEHALO_30_dh_mv_pat_self_cycle(data)                     (0x0000FC00&((data)<<10))
#define  KME_DEHALO_KME_DEHALO_30_dh_mv_med_pat_self_en(data)                    (0x00000200&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_30_dh_mv_pat_v1(data)                             (0x000001FF&(data))
#define  KME_DEHALO_KME_DEHALO_30_get_dh_me1_dbg_mv_num(data)                    ((0x7FC00000&(data))>>22)
#define  KME_DEHALO_KME_DEHALO_30_get_dh_pst_pat_eros_mode(data)                 ((0x00200000&(data))>>21)
#define  KME_DEHALO_KME_DEHALO_30_get_dh_med_pat_eros_mode(data)                 ((0x00100000&(data))>>20)
#define  KME_DEHALO_KME_DEHALO_30_get_dh_pre_pat_eros_mode(data)                 ((0x00080000&(data))>>19)
#define  KME_DEHALO_KME_DEHALO_30_get_dh_med_patt_info_to_mc(data)               ((0x00040000&(data))>>18)
#define  KME_DEHALO_KME_DEHALO_30_get_dh_mv_pat_self_en(data)                    ((0x00030000&(data))>>16)
#define  KME_DEHALO_KME_DEHALO_30_get_dh_mv_pat_self_cycle(data)                 ((0x0000FC00&(data))>>10)
#define  KME_DEHALO_KME_DEHALO_30_get_dh_mv_med_pat_self_en(data)                ((0x00000200&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_30_get_dh_mv_pat_v1(data)                         (0x000001FF&(data))

#define  KME_DEHALO_KME_DEHALO_34                                               0x1809CD34
#define  KME_DEHALO_KME_DEHALO_34_reg_addr                                       "0xB809CD34"
#define  KME_DEHALO_KME_DEHALO_34_reg                                            0xB809CD34
#define  KME_DEHALO_KME_DEHALO_34_inst_addr                                      "0x0009"
#define  set_KME_DEHALO_KME_DEHALO_34_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_34_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_34_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_34_reg))
#define  KME_DEHALO_KME_DEHALO_34_dh_ph_flt_way_shift                            (26)
#define  KME_DEHALO_KME_DEHALO_34_dh_ph_flt_win_size_shift                       (25)
#define  KME_DEHALO_KME_DEHALO_34_dummy_24_shift                                 (24)
#define  KME_DEHALO_KME_DEHALO_34_dh_phbv1_flt_en_shift                          (23)
#define  KME_DEHALO_KME_DEHALO_34_dummy_22_shift                                 (22)
#define  KME_DEHALO_KME_DEHALO_34_dh_phbv0_flt_en_shift                          (21)
#define  KME_DEHALO_KME_DEHALO_34_dh_input_buf_byps_shift                        (20)
#define  KME_DEHALO_KME_DEHALO_34_dh_pst_patt_row_size_shift                     (19)
#define  KME_DEHALO_KME_DEHALO_34_dh_pst_patt_blk_size_shift                     (18)
#define  KME_DEHALO_KME_DEHALO_34_dh_patt_row_num_shift                          (9)
#define  KME_DEHALO_KME_DEHALO_34_dh_patt_blk_num_shift                          (0)
#define  KME_DEHALO_KME_DEHALO_34_dh_ph_flt_way_mask                             (0x3C000000)
#define  KME_DEHALO_KME_DEHALO_34_dh_ph_flt_win_size_mask                        (0x02000000)
#define  KME_DEHALO_KME_DEHALO_34_dummy_24_mask                                  (0x01000000)
#define  KME_DEHALO_KME_DEHALO_34_dh_phbv1_flt_en_mask                           (0x00800000)
#define  KME_DEHALO_KME_DEHALO_34_dummy_22_mask                                  (0x00400000)
#define  KME_DEHALO_KME_DEHALO_34_dh_phbv0_flt_en_mask                           (0x00200000)
#define  KME_DEHALO_KME_DEHALO_34_dh_input_buf_byps_mask                         (0x00100000)
#define  KME_DEHALO_KME_DEHALO_34_dh_pst_patt_row_size_mask                      (0x00080000)
#define  KME_DEHALO_KME_DEHALO_34_dh_pst_patt_blk_size_mask                      (0x00040000)
#define  KME_DEHALO_KME_DEHALO_34_dh_patt_row_num_mask                           (0x0003FE00)
#define  KME_DEHALO_KME_DEHALO_34_dh_patt_blk_num_mask                           (0x000001FF)
#define  KME_DEHALO_KME_DEHALO_34_dh_ph_flt_way(data)                            (0x3C000000&((data)<<26))
#define  KME_DEHALO_KME_DEHALO_34_dh_ph_flt_win_size(data)                       (0x02000000&((data)<<25))
#define  KME_DEHALO_KME_DEHALO_34_dummy_24(data)                                 (0x01000000&((data)<<24))
#define  KME_DEHALO_KME_DEHALO_34_dh_phbv1_flt_en(data)                          (0x00800000&((data)<<23))
#define  KME_DEHALO_KME_DEHALO_34_dummy_22(data)                                 (0x00400000&((data)<<22))
#define  KME_DEHALO_KME_DEHALO_34_dh_phbv0_flt_en(data)                          (0x00200000&((data)<<21))
#define  KME_DEHALO_KME_DEHALO_34_dh_input_buf_byps(data)                        (0x00100000&((data)<<20))
#define  KME_DEHALO_KME_DEHALO_34_dh_pst_patt_row_size(data)                     (0x00080000&((data)<<19))
#define  KME_DEHALO_KME_DEHALO_34_dh_pst_patt_blk_size(data)                     (0x00040000&((data)<<18))
#define  KME_DEHALO_KME_DEHALO_34_dh_patt_row_num(data)                          (0x0003FE00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_34_dh_patt_blk_num(data)                          (0x000001FF&(data))
#define  KME_DEHALO_KME_DEHALO_34_get_dh_ph_flt_way(data)                        ((0x3C000000&(data))>>26)
#define  KME_DEHALO_KME_DEHALO_34_get_dh_ph_flt_win_size(data)                   ((0x02000000&(data))>>25)
#define  KME_DEHALO_KME_DEHALO_34_get_dummy_24(data)                             ((0x01000000&(data))>>24)
#define  KME_DEHALO_KME_DEHALO_34_get_dh_phbv1_flt_en(data)                      ((0x00800000&(data))>>23)
#define  KME_DEHALO_KME_DEHALO_34_get_dummy_22(data)                             ((0x00400000&(data))>>22)
#define  KME_DEHALO_KME_DEHALO_34_get_dh_phbv0_flt_en(data)                      ((0x00200000&(data))>>21)
#define  KME_DEHALO_KME_DEHALO_34_get_dh_input_buf_byps(data)                    ((0x00100000&(data))>>20)
#define  KME_DEHALO_KME_DEHALO_34_get_dh_pst_patt_row_size(data)                 ((0x00080000&(data))>>19)
#define  KME_DEHALO_KME_DEHALO_34_get_dh_pst_patt_blk_size(data)                 ((0x00040000&(data))>>18)
#define  KME_DEHALO_KME_DEHALO_34_get_dh_patt_row_num(data)                      ((0x0003FE00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_34_get_dh_patt_blk_num(data)                      (0x000001FF&(data))

#define  KME_DEHALO_KME_DEHALO_38                                               0x1809CD38
#define  KME_DEHALO_KME_DEHALO_38_reg_addr                                       "0xB809CD38"
#define  KME_DEHALO_KME_DEHALO_38_reg                                            0xB809CD38
#define  KME_DEHALO_KME_DEHALO_38_inst_addr                                      "0x000A"
#define  set_KME_DEHALO_KME_DEHALO_38_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_38_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_38_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_38_reg))
#define  KME_DEHALO_KME_DEHALO_38_dh_phfilt_switch_en_shift                      (31)
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt5_mvdf_cnt_thr_shift                  (28)
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt9_mvdf_cnt_thr_shift                  (24)
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt25_mvdf_cnt_thr_shift                 (19)
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt_sad_valu_th_shift                    (11)
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt_mvdif_th_shift                       (3)
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt_mod_shift                            (0)
#define  KME_DEHALO_KME_DEHALO_38_dh_phfilt_switch_en_mask                       (0x80000000)
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt5_mvdf_cnt_thr_mask                   (0x70000000)
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt9_mvdf_cnt_thr_mask                   (0x0F000000)
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt25_mvdf_cnt_thr_mask                  (0x00F80000)
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt_sad_valu_th_mask                     (0x0007F800)
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt_mvdif_th_mask                        (0x000007F8)
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt_mod_mask                             (0x00000007)
#define  KME_DEHALO_KME_DEHALO_38_dh_phfilt_switch_en(data)                      (0x80000000&((data)<<31))
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt5_mvdf_cnt_thr(data)                  (0x70000000&((data)<<28))
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt9_mvdf_cnt_thr(data)                  (0x0F000000&((data)<<24))
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt25_mvdf_cnt_thr(data)                 (0x00F80000&((data)<<19))
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt_sad_valu_th(data)                    (0x0007F800&((data)<<11))
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt_mvdif_th(data)                       (0x000007F8&((data)<<3))
#define  KME_DEHALO_KME_DEHALO_38_dh_ph_flt_mod(data)                            (0x00000007&(data))
#define  KME_DEHALO_KME_DEHALO_38_get_dh_phfilt_switch_en(data)                  ((0x80000000&(data))>>31)
#define  KME_DEHALO_KME_DEHALO_38_get_dh_ph_flt5_mvdf_cnt_thr(data)              ((0x70000000&(data))>>28)
#define  KME_DEHALO_KME_DEHALO_38_get_dh_ph_flt9_mvdf_cnt_thr(data)              ((0x0F000000&(data))>>24)
#define  KME_DEHALO_KME_DEHALO_38_get_dh_ph_flt25_mvdf_cnt_thr(data)             ((0x00F80000&(data))>>19)
#define  KME_DEHALO_KME_DEHALO_38_get_dh_ph_flt_sad_valu_th(data)                ((0x0007F800&(data))>>11)
#define  KME_DEHALO_KME_DEHALO_38_get_dh_ph_flt_mvdif_th(data)                   ((0x000007F8&(data))>>3)
#define  KME_DEHALO_KME_DEHALO_38_get_dh_ph_flt_mod(data)                        (0x00000007&(data))

#define  KME_DEHALO_KME_DEHALO_3C                                               0x1809CD3C
#define  KME_DEHALO_KME_DEHALO_3C_reg_addr                                       "0xB809CD3C"
#define  KME_DEHALO_KME_DEHALO_3C_reg                                            0xB809CD3C
#define  KME_DEHALO_KME_DEHALO_3C_inst_addr                                      "0x000B"
#define  set_KME_DEHALO_KME_DEHALO_3C_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_3C_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_3C_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_3C_reg))
#define  KME_DEHALO_KME_DEHALO_3C_dh_fblvl_x_mv_en_shift                         (25)
#define  KME_DEHALO_KME_DEHALO_3C_dh_bypass_pstflt_tim_shift                     (24)
#define  KME_DEHALO_KME_DEHALO_3C_dh_bypass_preflt_tim_shift                     (23)
#define  KME_DEHALO_KME_DEHALO_3C_dh_fblvl_cut_shift                             (15)
#define  KME_DEHALO_KME_DEHALO_3C_dh_rt2_mv_debug_sel_shift                      (9)
#define  KME_DEHALO_KME_DEHALO_3C_dh_rt1_mv_debug_sel_shift                      (3)
#define  KME_DEHALO_KME_DEHALO_3C_dummy_2_1_shift                                (1)
#define  KME_DEHALO_KME_DEHALO_3C_dehalo_logo_sync_trg_sel_shift                 (0)
#define  KME_DEHALO_KME_DEHALO_3C_dh_fblvl_x_mv_en_mask                          (0x02000000)
#define  KME_DEHALO_KME_DEHALO_3C_dh_bypass_pstflt_tim_mask                      (0x01000000)
#define  KME_DEHALO_KME_DEHALO_3C_dh_bypass_preflt_tim_mask                      (0x00800000)
#define  KME_DEHALO_KME_DEHALO_3C_dh_fblvl_cut_mask                              (0x007F8000)
#define  KME_DEHALO_KME_DEHALO_3C_dh_rt2_mv_debug_sel_mask                       (0x00007E00)
#define  KME_DEHALO_KME_DEHALO_3C_dh_rt1_mv_debug_sel_mask                       (0x000001F8)
#define  KME_DEHALO_KME_DEHALO_3C_dummy_2_1_mask                                 (0x00000006)
#define  KME_DEHALO_KME_DEHALO_3C_dehalo_logo_sync_trg_sel_mask                  (0x00000001)
#define  KME_DEHALO_KME_DEHALO_3C_dh_fblvl_x_mv_en(data)                         (0x02000000&((data)<<25))
#define  KME_DEHALO_KME_DEHALO_3C_dh_bypass_pstflt_tim(data)                     (0x01000000&((data)<<24))
#define  KME_DEHALO_KME_DEHALO_3C_dh_bypass_preflt_tim(data)                     (0x00800000&((data)<<23))
#define  KME_DEHALO_KME_DEHALO_3C_dh_fblvl_cut(data)                             (0x007F8000&((data)<<15))
#define  KME_DEHALO_KME_DEHALO_3C_dh_rt2_mv_debug_sel(data)                      (0x00007E00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_3C_dh_rt1_mv_debug_sel(data)                      (0x000001F8&((data)<<3))
#define  KME_DEHALO_KME_DEHALO_3C_dummy_2_1(data)                                (0x00000006&((data)<<1))
#define  KME_DEHALO_KME_DEHALO_3C_dehalo_logo_sync_trg_sel(data)                 (0x00000001&(data))
#define  KME_DEHALO_KME_DEHALO_3C_get_dh_fblvl_x_mv_en(data)                     ((0x02000000&(data))>>25)
#define  KME_DEHALO_KME_DEHALO_3C_get_dh_bypass_pstflt_tim(data)                 ((0x01000000&(data))>>24)
#define  KME_DEHALO_KME_DEHALO_3C_get_dh_bypass_preflt_tim(data)                 ((0x00800000&(data))>>23)
#define  KME_DEHALO_KME_DEHALO_3C_get_dh_fblvl_cut(data)                         ((0x007F8000&(data))>>15)
#define  KME_DEHALO_KME_DEHALO_3C_get_dh_rt2_mv_debug_sel(data)                  ((0x00007E00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_3C_get_dh_rt1_mv_debug_sel(data)                  ((0x000001F8&(data))>>3)
#define  KME_DEHALO_KME_DEHALO_3C_get_dummy_2_1(data)                            ((0x00000006&(data))>>1)
#define  KME_DEHALO_KME_DEHALO_3C_get_dehalo_logo_sync_trg_sel(data)             (0x00000001&(data))

#define  KME_DEHALO_KME_DEHALO_40                                               0x1809CD40
#define  KME_DEHALO_KME_DEHALO_40_reg_addr                                       "0xB809CD40"
#define  KME_DEHALO_KME_DEHALO_40_reg                                            0xB809CD40
#define  KME_DEHALO_KME_DEHALO_40_inst_addr                                      "0x000C"
#define  set_KME_DEHALO_KME_DEHALO_40_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_40_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_40_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_40_reg))
#define  KME_DEHALO_KME_DEHALO_40_dummy_31_24_shift                              (24)
#define  KME_DEHALO_KME_DEHALO_40_dummy_23_16_shift                              (16)
#define  KME_DEHALO_KME_DEHALO_40_dummy_15_8_shift                               (8)
#define  KME_DEHALO_KME_DEHALO_40_valid_regen_shift_add_shift                    (4)
#define  KME_DEHALO_KME_DEHALO_40_valid_regen_shift_add_en_shift                 (3)
#define  KME_DEHALO_KME_DEHALO_40_valid_regen_disable_shift                      (2)
#define  KME_DEHALO_KME_DEHALO_40_dh_rt2_bnd_h_mode_shift                        (1)
#define  KME_DEHALO_KME_DEHALO_40_dh_rt2_bnd_v_mode_shift                        (0)
#define  KME_DEHALO_KME_DEHALO_40_dummy_31_24_mask                               (0xFF000000)
#define  KME_DEHALO_KME_DEHALO_40_dummy_23_16_mask                               (0x00FF0000)
#define  KME_DEHALO_KME_DEHALO_40_dummy_15_8_mask                                (0x0000FF00)
#define  KME_DEHALO_KME_DEHALO_40_valid_regen_shift_add_mask                     (0x000000F0)
#define  KME_DEHALO_KME_DEHALO_40_valid_regen_shift_add_en_mask                  (0x00000008)
#define  KME_DEHALO_KME_DEHALO_40_valid_regen_disable_mask                       (0x00000004)
#define  KME_DEHALO_KME_DEHALO_40_dh_rt2_bnd_h_mode_mask                         (0x00000002)
#define  KME_DEHALO_KME_DEHALO_40_dh_rt2_bnd_v_mode_mask                         (0x00000001)
#define  KME_DEHALO_KME_DEHALO_40_dummy_31_24(data)                              (0xFF000000&((data)<<24))
#define  KME_DEHALO_KME_DEHALO_40_dummy_23_16(data)                              (0x00FF0000&((data)<<16))
#define  KME_DEHALO_KME_DEHALO_40_dummy_15_8(data)                               (0x0000FF00&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_40_valid_regen_shift_add(data)                    (0x000000F0&((data)<<4))
#define  KME_DEHALO_KME_DEHALO_40_valid_regen_shift_add_en(data)                 (0x00000008&((data)<<3))
#define  KME_DEHALO_KME_DEHALO_40_valid_regen_disable(data)                      (0x00000004&((data)<<2))
#define  KME_DEHALO_KME_DEHALO_40_dh_rt2_bnd_h_mode(data)                        (0x00000002&((data)<<1))
#define  KME_DEHALO_KME_DEHALO_40_dh_rt2_bnd_v_mode(data)                        (0x00000001&(data))
#define  KME_DEHALO_KME_DEHALO_40_get_dummy_31_24(data)                          ((0xFF000000&(data))>>24)
#define  KME_DEHALO_KME_DEHALO_40_get_dummy_23_16(data)                          ((0x00FF0000&(data))>>16)
#define  KME_DEHALO_KME_DEHALO_40_get_dummy_15_8(data)                           ((0x0000FF00&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_40_get_valid_regen_shift_add(data)                ((0x000000F0&(data))>>4)
#define  KME_DEHALO_KME_DEHALO_40_get_valid_regen_shift_add_en(data)             ((0x00000008&(data))>>3)
#define  KME_DEHALO_KME_DEHALO_40_get_valid_regen_disable(data)                  ((0x00000004&(data))>>2)
#define  KME_DEHALO_KME_DEHALO_40_get_dh_rt2_bnd_h_mode(data)                    ((0x00000002&(data))>>1)
#define  KME_DEHALO_KME_DEHALO_40_get_dh_rt2_bnd_v_mode(data)                    (0x00000001&(data))

#define  KME_DEHALO_KME_DEHALO_44                                               0x1809CD44
#define  KME_DEHALO_KME_DEHALO_44_reg_addr                                       "0xB809CD44"
#define  KME_DEHALO_KME_DEHALO_44_reg                                            0xB809CD44
#define  KME_DEHALO_KME_DEHALO_44_inst_addr                                      "0x000D"
#define  set_KME_DEHALO_KME_DEHALO_44_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_44_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_44_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_44_reg))
#define  KME_DEHALO_KME_DEHALO_44_dh_ph_fbgen_sft_shift                          (19)
#define  KME_DEHALO_KME_DEHALO_44_dh_ph_fbgen_slp_shift                          (11)
#define  KME_DEHALO_KME_DEHALO_44_dh_ph_fbgen_th_shift                           (1)
#define  KME_DEHALO_KME_DEHALO_44_dummy_0_shift                                  (0)
#define  KME_DEHALO_KME_DEHALO_44_dh_ph_fbgen_sft_mask                           (0x00780000)
#define  KME_DEHALO_KME_DEHALO_44_dh_ph_fbgen_slp_mask                           (0x0007F800)
#define  KME_DEHALO_KME_DEHALO_44_dh_ph_fbgen_th_mask                            (0x000007FE)
#define  KME_DEHALO_KME_DEHALO_44_dummy_0_mask                                   (0x00000001)
#define  KME_DEHALO_KME_DEHALO_44_dh_ph_fbgen_sft(data)                          (0x00780000&((data)<<19))
#define  KME_DEHALO_KME_DEHALO_44_dh_ph_fbgen_slp(data)                          (0x0007F800&((data)<<11))
#define  KME_DEHALO_KME_DEHALO_44_dh_ph_fbgen_th(data)                           (0x000007FE&((data)<<1))
#define  KME_DEHALO_KME_DEHALO_44_dummy_0(data)                                  (0x00000001&(data))
#define  KME_DEHALO_KME_DEHALO_44_get_dh_ph_fbgen_sft(data)                      ((0x00780000&(data))>>19)
#define  KME_DEHALO_KME_DEHALO_44_get_dh_ph_fbgen_slp(data)                      ((0x0007F800&(data))>>11)
#define  KME_DEHALO_KME_DEHALO_44_get_dh_ph_fbgen_th(data)                       ((0x000007FE&(data))>>1)
#define  KME_DEHALO_KME_DEHALO_44_get_dummy_0(data)                              (0x00000001&(data))

#define  KME_DEHALO_KME_DEHALO_48                                               0x1809CD48
#define  KME_DEHALO_KME_DEHALO_48_reg_addr                                       "0xB809CD48"
#define  KME_DEHALO_KME_DEHALO_48_reg                                            0xB809CD48
#define  KME_DEHALO_KME_DEHALO_48_inst_addr                                      "0x000E"
#define  set_KME_DEHALO_KME_DEHALO_48_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_48_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_48_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_48_reg))
#define  KME_DEHALO_KME_DEHALO_48_dh_oobgain_force_0_shift                       (20)
#define  KME_DEHALO_KME_DEHALO_48_dh_ph_fbgen_max_shift                          (10)
#define  KME_DEHALO_KME_DEHALO_48_dh_ph_fbgen_min_shift                          (0)
#define  KME_DEHALO_KME_DEHALO_48_dh_oobgain_force_0_mask                        (0x00100000)
#define  KME_DEHALO_KME_DEHALO_48_dh_ph_fbgen_max_mask                           (0x000FFC00)
#define  KME_DEHALO_KME_DEHALO_48_dh_ph_fbgen_min_mask                           (0x000003FF)
#define  KME_DEHALO_KME_DEHALO_48_dh_oobgain_force_0(data)                       (0x00100000&((data)<<20))
#define  KME_DEHALO_KME_DEHALO_48_dh_ph_fbgen_max(data)                          (0x000FFC00&((data)<<10))
#define  KME_DEHALO_KME_DEHALO_48_dh_ph_fbgen_min(data)                          (0x000003FF&(data))
#define  KME_DEHALO_KME_DEHALO_48_get_dh_oobgain_force_0(data)                   ((0x00100000&(data))>>20)
#define  KME_DEHALO_KME_DEHALO_48_get_dh_ph_fbgen_max(data)                      ((0x000FFC00&(data))>>10)
#define  KME_DEHALO_KME_DEHALO_48_get_dh_ph_fbgen_min(data)                      (0x000003FF&(data))

#define  KME_DEHALO_KME_DEHALO_4C                                               0x1809CD4C
#define  KME_DEHALO_KME_DEHALO_4C_reg_addr                                       "0xB809CD4C"
#define  KME_DEHALO_KME_DEHALO_4C_reg                                            0xB809CD4C
#define  KME_DEHALO_KME_DEHALO_4C_inst_addr                                      "0x000F"
#define  set_KME_DEHALO_KME_DEHALO_4C_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_4C_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_4C_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_4C_reg))
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_xidx_shift_shift                        (22)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_force_idx_shift                         (21)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_ooby_shft_shift                         (18)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_oobx_shft_shift                         (15)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_ysec_shft_shift                         (12)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_yfst_shft_shift                         (9)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_xthr_shft_shift                         (6)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_xsec_shft_shift                         (3)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_xfst_shft_shift                         (0)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_xidx_shift_mask                         (0xFFC00000)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_force_idx_mask                          (0x00200000)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_ooby_shft_mask                          (0x001C0000)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_oobx_shft_mask                          (0x00038000)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_ysec_shft_mask                          (0x00007000)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_yfst_shft_mask                          (0x00000E00)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_xthr_shft_mask                          (0x000001C0)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_xsec_shft_mask                          (0x00000038)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_xfst_shft_mask                          (0x00000007)
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_xidx_shift(data)                        (0xFFC00000&((data)<<22))
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_force_idx(data)                         (0x00200000&((data)<<21))
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_ooby_shft(data)                         (0x001C0000&((data)<<18))
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_oobx_shft(data)                         (0x00038000&((data)<<15))
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_ysec_shft(data)                         (0x00007000&((data)<<12))
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_yfst_shft(data)                         (0x00000E00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_xthr_shft(data)                         (0x000001C0&((data)<<6))
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_xsec_shft(data)                         (0x00000038&((data)<<3))
#define  KME_DEHALO_KME_DEHALO_4C_dh_rt1_xfst_shft(data)                         (0x00000007&(data))
#define  KME_DEHALO_KME_DEHALO_4C_get_dh_rt1_xidx_shift(data)                    ((0xFFC00000&(data))>>22)
#define  KME_DEHALO_KME_DEHALO_4C_get_dh_rt1_force_idx(data)                     ((0x00200000&(data))>>21)
#define  KME_DEHALO_KME_DEHALO_4C_get_dh_rt1_ooby_shft(data)                     ((0x001C0000&(data))>>18)
#define  KME_DEHALO_KME_DEHALO_4C_get_dh_rt1_oobx_shft(data)                     ((0x00038000&(data))>>15)
#define  KME_DEHALO_KME_DEHALO_4C_get_dh_rt1_ysec_shft(data)                     ((0x00007000&(data))>>12)
#define  KME_DEHALO_KME_DEHALO_4C_get_dh_rt1_yfst_shft(data)                     ((0x00000E00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_4C_get_dh_rt1_xthr_shft(data)                     ((0x000001C0&(data))>>6)
#define  KME_DEHALO_KME_DEHALO_4C_get_dh_rt1_xsec_shft(data)                     ((0x00000038&(data))>>3)
#define  KME_DEHALO_KME_DEHALO_4C_get_dh_rt1_xfst_shft(data)                     (0x00000007&(data))

#define  KME_DEHALO_KME_DEHALO_50                                               0x1809CD50
#define  KME_DEHALO_KME_DEHALO_50_reg_addr                                       "0xB809CD50"
#define  KME_DEHALO_KME_DEHALO_50_reg                                            0xB809CD50
#define  KME_DEHALO_KME_DEHALO_50_inst_addr                                      "0x0010"
#define  set_KME_DEHALO_KME_DEHALO_50_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_50_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_50_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_50_reg))
#define  KME_DEHALO_KME_DEHALO_50_dh_rt2_point_to_sblk_mode_shift                (27)
#define  KME_DEHALO_KME_DEHALO_50_dh_rt1_point_to_single_blk_shift               (26)
#define  KME_DEHALO_KME_DEHALO_50_dh_rt1_yidx_shift_shift                        (16)
#define  KME_DEHALO_KME_DEHALO_50_dh_rt1_c_xrounding0_shift                      (7)
#define  KME_DEHALO_KME_DEHALO_50_dh_rt1_rt_sr_shift                             (3)
#define  KME_DEHALO_KME_DEHALO_50_dh_rt1_ythr_shft_shift                         (0)
#define  KME_DEHALO_KME_DEHALO_50_dh_rt2_point_to_sblk_mode_mask                 (0x38000000)
#define  KME_DEHALO_KME_DEHALO_50_dh_rt1_point_to_single_blk_mask                (0x04000000)
#define  KME_DEHALO_KME_DEHALO_50_dh_rt1_yidx_shift_mask                         (0x03FF0000)
#define  KME_DEHALO_KME_DEHALO_50_dh_rt1_c_xrounding0_mask                       (0x0000FF80)
#define  KME_DEHALO_KME_DEHALO_50_dh_rt1_rt_sr_mask                              (0x00000078)
#define  KME_DEHALO_KME_DEHALO_50_dh_rt1_ythr_shft_mask                          (0x00000007)
#define  KME_DEHALO_KME_DEHALO_50_dh_rt2_point_to_sblk_mode(data)                (0x38000000&((data)<<27))
#define  KME_DEHALO_KME_DEHALO_50_dh_rt1_point_to_single_blk(data)               (0x04000000&((data)<<26))
#define  KME_DEHALO_KME_DEHALO_50_dh_rt1_yidx_shift(data)                        (0x03FF0000&((data)<<16))
#define  KME_DEHALO_KME_DEHALO_50_dh_rt1_c_xrounding0(data)                      (0x0000FF80&((data)<<7))
#define  KME_DEHALO_KME_DEHALO_50_dh_rt1_rt_sr(data)                             (0x00000078&((data)<<3))
#define  KME_DEHALO_KME_DEHALO_50_dh_rt1_ythr_shft(data)                         (0x00000007&(data))
#define  KME_DEHALO_KME_DEHALO_50_get_dh_rt2_point_to_sblk_mode(data)            ((0x38000000&(data))>>27)
#define  KME_DEHALO_KME_DEHALO_50_get_dh_rt1_point_to_single_blk(data)           ((0x04000000&(data))>>26)
#define  KME_DEHALO_KME_DEHALO_50_get_dh_rt1_yidx_shift(data)                    ((0x03FF0000&(data))>>16)
#define  KME_DEHALO_KME_DEHALO_50_get_dh_rt1_c_xrounding0(data)                  ((0x0000FF80&(data))>>7)
#define  KME_DEHALO_KME_DEHALO_50_get_dh_rt1_rt_sr(data)                         ((0x00000078&(data))>>3)
#define  KME_DEHALO_KME_DEHALO_50_get_dh_rt1_ythr_shft(data)                     (0x00000007&(data))

#define  KME_DEHALO_KME_DEHALO_54                                               0x1809CD54
#define  KME_DEHALO_KME_DEHALO_54_reg_addr                                       "0xB809CD54"
#define  KME_DEHALO_KME_DEHALO_54_reg                                            0xB809CD54
#define  KME_DEHALO_KME_DEHALO_54_inst_addr                                      "0x0011"
#define  set_KME_DEHALO_KME_DEHALO_54_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_54_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_54_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_54_reg))
#define  KME_DEHALO_KME_DEHALO_54_dh_rt1_c_yrounding1_shift                      (18)
#define  KME_DEHALO_KME_DEHALO_54_dh_rt1_c_xrounding1_shift                      (9)
#define  KME_DEHALO_KME_DEHALO_54_dh_rt1_c_yrounding0_shift                      (0)
#define  KME_DEHALO_KME_DEHALO_54_dh_rt1_c_yrounding1_mask                       (0x07FC0000)
#define  KME_DEHALO_KME_DEHALO_54_dh_rt1_c_xrounding1_mask                       (0x0003FE00)
#define  KME_DEHALO_KME_DEHALO_54_dh_rt1_c_yrounding0_mask                       (0x000001FF)
#define  KME_DEHALO_KME_DEHALO_54_dh_rt1_c_yrounding1(data)                      (0x07FC0000&((data)<<18))
#define  KME_DEHALO_KME_DEHALO_54_dh_rt1_c_xrounding1(data)                      (0x0003FE00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_54_dh_rt1_c_yrounding0(data)                      (0x000001FF&(data))
#define  KME_DEHALO_KME_DEHALO_54_get_dh_rt1_c_yrounding1(data)                  ((0x07FC0000&(data))>>18)
#define  KME_DEHALO_KME_DEHALO_54_get_dh_rt1_c_xrounding1(data)                  ((0x0003FE00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_54_get_dh_rt1_c_yrounding0(data)                  (0x000001FF&(data))

#define  KME_DEHALO_KME_DEHALO_58                                               0x1809CD58
#define  KME_DEHALO_KME_DEHALO_58_reg_addr                                       "0xB809CD58"
#define  KME_DEHALO_KME_DEHALO_58_reg                                            0xB809CD58
#define  KME_DEHALO_KME_DEHALO_58_inst_addr                                      "0x0012"
#define  set_KME_DEHALO_KME_DEHALO_58_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_58_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_58_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_58_reg))
#define  KME_DEHALO_KME_DEHALO_58_dh_rt1_penalty2_shift                          (20)
#define  KME_DEHALO_KME_DEHALO_58_dh_rt1_penalty1_shift                          (10)
#define  KME_DEHALO_KME_DEHALO_58_dh_rt1_penalty0_shift                          (0)
#define  KME_DEHALO_KME_DEHALO_58_dh_rt1_penalty2_mask                           (0x3FF00000)
#define  KME_DEHALO_KME_DEHALO_58_dh_rt1_penalty1_mask                           (0x000FFC00)
#define  KME_DEHALO_KME_DEHALO_58_dh_rt1_penalty0_mask                           (0x000003FF)
#define  KME_DEHALO_KME_DEHALO_58_dh_rt1_penalty2(data)                          (0x3FF00000&((data)<<20))
#define  KME_DEHALO_KME_DEHALO_58_dh_rt1_penalty1(data)                          (0x000FFC00&((data)<<10))
#define  KME_DEHALO_KME_DEHALO_58_dh_rt1_penalty0(data)                          (0x000003FF&(data))
#define  KME_DEHALO_KME_DEHALO_58_get_dh_rt1_penalty2(data)                      ((0x3FF00000&(data))>>20)
#define  KME_DEHALO_KME_DEHALO_58_get_dh_rt1_penalty1(data)                      ((0x000FFC00&(data))>>10)
#define  KME_DEHALO_KME_DEHALO_58_get_dh_rt1_penalty0(data)                      (0x000003FF&(data))

#define  KME_DEHALO_KME_DEHALO_5C                                               0x1809CD5C
#define  KME_DEHALO_KME_DEHALO_5C_reg_addr                                       "0xB809CD5C"
#define  KME_DEHALO_KME_DEHALO_5C_reg                                            0xB809CD5C
#define  KME_DEHALO_KME_DEHALO_5C_inst_addr                                      "0x0013"
#define  set_KME_DEHALO_KME_DEHALO_5C_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_5C_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_5C_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_5C_reg))
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_flt_sad_valu_th_shift                   (22)
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_flt_mvdif_th_shift                      (14)
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_flt_mod_shift                           (11)
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_flt_way_shift                           (7)
#define  KME_DEHALO_KME_DEHALO_5C_dummy_6_shift                                  (6)
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_flt_en_shift                            (5)
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_ern_dat_shft_shift                      (1)
#define  KME_DEHALO_KME_DEHALO_5C_dh_mvdiff_pfv_sel_en_shift                     (0)
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_flt_sad_valu_th_mask                    (0x3FC00000)
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_flt_mvdif_th_mask                       (0x003FC000)
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_flt_mod_mask                            (0x00003800)
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_flt_way_mask                            (0x00000780)
#define  KME_DEHALO_KME_DEHALO_5C_dummy_6_mask                                   (0x00000040)
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_flt_en_mask                             (0x00000020)
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_ern_dat_shft_mask                       (0x0000001E)
#define  KME_DEHALO_KME_DEHALO_5C_dh_mvdiff_pfv_sel_en_mask                      (0x00000001)
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_flt_sad_valu_th(data)                   (0x3FC00000&((data)<<22))
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_flt_mvdif_th(data)                      (0x003FC000&((data)<<14))
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_flt_mod(data)                           (0x00003800&((data)<<11))
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_flt_way(data)                           (0x00000780&((data)<<7))
#define  KME_DEHALO_KME_DEHALO_5C_dummy_6(data)                                  (0x00000040&((data)<<6))
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_flt_en(data)                            (0x00000020&((data)<<5))
#define  KME_DEHALO_KME_DEHALO_5C_dh_rt1_ern_dat_shft(data)                      (0x0000001E&((data)<<1))
#define  KME_DEHALO_KME_DEHALO_5C_dh_mvdiff_pfv_sel_en(data)                     (0x00000001&(data))
#define  KME_DEHALO_KME_DEHALO_5C_get_dh_rt1_flt_sad_valu_th(data)               ((0x3FC00000&(data))>>22)
#define  KME_DEHALO_KME_DEHALO_5C_get_dh_rt1_flt_mvdif_th(data)                  ((0x003FC000&(data))>>14)
#define  KME_DEHALO_KME_DEHALO_5C_get_dh_rt1_flt_mod(data)                       ((0x00003800&(data))>>11)
#define  KME_DEHALO_KME_DEHALO_5C_get_dh_rt1_flt_way(data)                       ((0x00000780&(data))>>7)
#define  KME_DEHALO_KME_DEHALO_5C_get_dummy_6(data)                              ((0x00000040&(data))>>6)
#define  KME_DEHALO_KME_DEHALO_5C_get_dh_rt1_flt_en(data)                        ((0x00000020&(data))>>5)
#define  KME_DEHALO_KME_DEHALO_5C_get_dh_rt1_ern_dat_shft(data)                  ((0x0000001E&(data))>>1)
#define  KME_DEHALO_KME_DEHALO_5C_get_dh_mvdiff_pfv_sel_en(data)                 (0x00000001&(data))

#define  KME_DEHALO_KME_DEHALO_60                                               0x1809CD60
#define  KME_DEHALO_KME_DEHALO_60_reg_addr                                       "0xB809CD60"
#define  KME_DEHALO_KME_DEHALO_60_reg                                            0xB809CD60
#define  KME_DEHALO_KME_DEHALO_60_inst_addr                                      "0x0014"
#define  set_KME_DEHALO_KME_DEHALO_60_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_60_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_60_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_60_reg))
#define  KME_DEHALO_KME_DEHALO_60_dummy_26_19_shift                              (19)
#define  KME_DEHALO_KME_DEHALO_60_dummy_18_16_shift                              (16)
#define  KME_DEHALO_KME_DEHALO_60_dummy_15_8_shift                               (8)
#define  KME_DEHALO_KME_DEHALO_60_dummy_7_shift                                  (7)
#define  KME_DEHALO_KME_DEHALO_60_dh_rt1_flt5_mvdf_cnt_thr_shift                 (4)
#define  KME_DEHALO_KME_DEHALO_60_dh_rt1_flt9_mvdf_cnt_thr_shift                 (0)
#define  KME_DEHALO_KME_DEHALO_60_dummy_26_19_mask                               (0x07F80000)
#define  KME_DEHALO_KME_DEHALO_60_dummy_18_16_mask                               (0x00070000)
#define  KME_DEHALO_KME_DEHALO_60_dummy_15_8_mask                                (0x0000FF00)
#define  KME_DEHALO_KME_DEHALO_60_dummy_7_mask                                   (0x00000080)
#define  KME_DEHALO_KME_DEHALO_60_dh_rt1_flt5_mvdf_cnt_thr_mask                  (0x00000070)
#define  KME_DEHALO_KME_DEHALO_60_dh_rt1_flt9_mvdf_cnt_thr_mask                  (0x0000000F)
#define  KME_DEHALO_KME_DEHALO_60_dummy_26_19(data)                              (0x07F80000&((data)<<19))
#define  KME_DEHALO_KME_DEHALO_60_dummy_18_16(data)                              (0x00070000&((data)<<16))
#define  KME_DEHALO_KME_DEHALO_60_dummy_15_8(data)                               (0x0000FF00&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_60_dummy_7(data)                                  (0x00000080&((data)<<7))
#define  KME_DEHALO_KME_DEHALO_60_dh_rt1_flt5_mvdf_cnt_thr(data)                 (0x00000070&((data)<<4))
#define  KME_DEHALO_KME_DEHALO_60_dh_rt1_flt9_mvdf_cnt_thr(data)                 (0x0000000F&(data))
#define  KME_DEHALO_KME_DEHALO_60_get_dummy_26_19(data)                          ((0x07F80000&(data))>>19)
#define  KME_DEHALO_KME_DEHALO_60_get_dummy_18_16(data)                          ((0x00070000&(data))>>16)
#define  KME_DEHALO_KME_DEHALO_60_get_dummy_15_8(data)                           ((0x0000FF00&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_60_get_dummy_7(data)                              ((0x00000080&(data))>>7)
#define  KME_DEHALO_KME_DEHALO_60_get_dh_rt1_flt5_mvdf_cnt_thr(data)             ((0x00000070&(data))>>4)
#define  KME_DEHALO_KME_DEHALO_60_get_dh_rt1_flt9_mvdf_cnt_thr(data)             (0x0000000F&(data))

#define  KME_DEHALO_KME_DEHALO_64                                               0x1809CD64
#define  KME_DEHALO_KME_DEHALO_64_reg_addr                                       "0xB809CD64"
#define  KME_DEHALO_KME_DEHALO_64_reg                                            0xB809CD64
#define  KME_DEHALO_KME_DEHALO_64_inst_addr                                      "0x0015"
#define  set_KME_DEHALO_KME_DEHALO_64_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_64_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_64_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_64_reg))
#define  KME_DEHALO_KME_DEHALO_64_dh_rt1_fbgen_th_shift                          (16)
#define  KME_DEHALO_KME_DEHALO_64_dummy_15_8_shift                               (8)
#define  KME_DEHALO_KME_DEHALO_64_dummy_7_0_shift                                (0)
#define  KME_DEHALO_KME_DEHALO_64_dh_rt1_fbgen_th_mask                           (0x03FF0000)
#define  KME_DEHALO_KME_DEHALO_64_dummy_15_8_mask                                (0x0000FF00)
#define  KME_DEHALO_KME_DEHALO_64_dummy_7_0_mask                                 (0x000000FF)
#define  KME_DEHALO_KME_DEHALO_64_dh_rt1_fbgen_th(data)                          (0x03FF0000&((data)<<16))
#define  KME_DEHALO_KME_DEHALO_64_dummy_15_8(data)                               (0x0000FF00&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_64_dummy_7_0(data)                                (0x000000FF&(data))
#define  KME_DEHALO_KME_DEHALO_64_get_dh_rt1_fbgen_th(data)                      ((0x03FF0000&(data))>>16)
#define  KME_DEHALO_KME_DEHALO_64_get_dummy_15_8(data)                           ((0x0000FF00&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_64_get_dummy_7_0(data)                            (0x000000FF&(data))

#define  KME_DEHALO_KME_DEHALO_68                                               0x1809CD68
#define  KME_DEHALO_KME_DEHALO_68_reg_addr                                       "0xB809CD68"
#define  KME_DEHALO_KME_DEHALO_68_reg                                            0xB809CD68
#define  KME_DEHALO_KME_DEHALO_68_inst_addr                                      "0x0016"
#define  set_KME_DEHALO_KME_DEHALO_68_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_68_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_68_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_68_reg))
#define  KME_DEHALO_KME_DEHALO_68_dh_rt1_fbgen_min_shift                         (12)
#define  KME_DEHALO_KME_DEHALO_68_dh_rt1_fbgen_sft_shift                         (8)
#define  KME_DEHALO_KME_DEHALO_68_dh_rt1_fbgen_slp_shift                         (0)
#define  KME_DEHALO_KME_DEHALO_68_dh_rt1_fbgen_min_mask                          (0x003FF000)
#define  KME_DEHALO_KME_DEHALO_68_dh_rt1_fbgen_sft_mask                          (0x00000F00)
#define  KME_DEHALO_KME_DEHALO_68_dh_rt1_fbgen_slp_mask                          (0x000000FF)
#define  KME_DEHALO_KME_DEHALO_68_dh_rt1_fbgen_min(data)                         (0x003FF000&((data)<<12))
#define  KME_DEHALO_KME_DEHALO_68_dh_rt1_fbgen_sft(data)                         (0x00000F00&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_68_dh_rt1_fbgen_slp(data)                         (0x000000FF&(data))
#define  KME_DEHALO_KME_DEHALO_68_get_dh_rt1_fbgen_min(data)                     ((0x003FF000&(data))>>12)
#define  KME_DEHALO_KME_DEHALO_68_get_dh_rt1_fbgen_sft(data)                     ((0x00000F00&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_68_get_dh_rt1_fbgen_slp(data)                     (0x000000FF&(data))

#define  KME_DEHALO_KME_DEHALO_6C                                               0x1809CD6C
#define  KME_DEHALO_KME_DEHALO_6C_reg_addr                                       "0xB809CD6C"
#define  KME_DEHALO_KME_DEHALO_6C_reg                                            0xB809CD6C
#define  KME_DEHALO_KME_DEHALO_6C_inst_addr                                      "0x0017"
#define  set_KME_DEHALO_KME_DEHALO_6C_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_6C_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_6C_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_6C_reg))
#define  KME_DEHALO_KME_DEHALO_6C_dh_all_fblvl_bld_coef_shift                    (24)
#define  KME_DEHALO_KME_DEHALO_6C_dh_ph_fblvl_bld_coef_shift                     (18)
#define  KME_DEHALO_KME_DEHALO_6C_dh_ondtl_nooccl_phinf_sel_shift                (17)
#define  KME_DEHALO_KME_DEHALO_6C_dh_rt1_force_fblvl_bld_coef_val_shift          (11)
#define  KME_DEHALO_KME_DEHALO_6C_dh_rt1_force_fblvl_bld_coef_en_shift           (10)
#define  KME_DEHALO_KME_DEHALO_6C_dh_rt1_fbgen_max_shift                         (0)
#define  KME_DEHALO_KME_DEHALO_6C_dh_all_fblvl_bld_coef_mask                     (0x3F000000)
#define  KME_DEHALO_KME_DEHALO_6C_dh_ph_fblvl_bld_coef_mask                      (0x00FC0000)
#define  KME_DEHALO_KME_DEHALO_6C_dh_ondtl_nooccl_phinf_sel_mask                 (0x00020000)
#define  KME_DEHALO_KME_DEHALO_6C_dh_rt1_force_fblvl_bld_coef_val_mask           (0x0001F800)
#define  KME_DEHALO_KME_DEHALO_6C_dh_rt1_force_fblvl_bld_coef_en_mask            (0x00000400)
#define  KME_DEHALO_KME_DEHALO_6C_dh_rt1_fbgen_max_mask                          (0x000003FF)
#define  KME_DEHALO_KME_DEHALO_6C_dh_all_fblvl_bld_coef(data)                    (0x3F000000&((data)<<24))
#define  KME_DEHALO_KME_DEHALO_6C_dh_ph_fblvl_bld_coef(data)                     (0x00FC0000&((data)<<18))
#define  KME_DEHALO_KME_DEHALO_6C_dh_ondtl_nooccl_phinf_sel(data)                (0x00020000&((data)<<17))
#define  KME_DEHALO_KME_DEHALO_6C_dh_rt1_force_fblvl_bld_coef_val(data)          (0x0001F800&((data)<<11))
#define  KME_DEHALO_KME_DEHALO_6C_dh_rt1_force_fblvl_bld_coef_en(data)           (0x00000400&((data)<<10))
#define  KME_DEHALO_KME_DEHALO_6C_dh_rt1_fbgen_max(data)                         (0x000003FF&(data))
#define  KME_DEHALO_KME_DEHALO_6C_get_dh_all_fblvl_bld_coef(data)                ((0x3F000000&(data))>>24)
#define  KME_DEHALO_KME_DEHALO_6C_get_dh_ph_fblvl_bld_coef(data)                 ((0x00FC0000&(data))>>18)
#define  KME_DEHALO_KME_DEHALO_6C_get_dh_ondtl_nooccl_phinf_sel(data)            ((0x00020000&(data))>>17)
#define  KME_DEHALO_KME_DEHALO_6C_get_dh_rt1_force_fblvl_bld_coef_val(data)      ((0x0001F800&(data))>>11)
#define  KME_DEHALO_KME_DEHALO_6C_get_dh_rt1_force_fblvl_bld_coef_en(data)       ((0x00000400&(data))>>10)
#define  KME_DEHALO_KME_DEHALO_6C_get_dh_rt1_fbgen_max(data)                     (0x000003FF&(data))

#define  KME_DEHALO_KME_DEHALO_70                                               0x1809CD70
#define  KME_DEHALO_KME_DEHALO_70_reg_addr                                       "0xB809CD70"
#define  KME_DEHALO_KME_DEHALO_70_reg                                            0xB809CD70
#define  KME_DEHALO_KME_DEHALO_70_inst_addr                                      "0x0018"
#define  set_KME_DEHALO_KME_DEHALO_70_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_70_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_70_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_70_reg))
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_gen_ped_limit_shift                     (24)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_gen_diff_slp0_shift                     (20)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_gen_diff_thr0_shift                     (12)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_con_gen_debug_en_shift                  (11)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_con_gen_debug_sel_shift                 (7)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_flg_force_uov_shift            (6)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_flg_force_cov_shift            (5)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_andor_fb_sel_shift             (4)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_flg_fb_sel_shift               (3)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_flg_force_en_shift             (2)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_curve_sel_shift                (1)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_pfv_max_min_sel_shift          (0)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_gen_ped_limit_mask                      (0xFF000000)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_gen_diff_slp0_mask                      (0x00F00000)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_gen_diff_thr0_mask                      (0x000FF000)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_con_gen_debug_en_mask                   (0x00000800)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_con_gen_debug_sel_mask                  (0x00000780)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_flg_force_uov_mask             (0x00000040)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_flg_force_cov_mask             (0x00000020)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_andor_fb_sel_mask              (0x00000010)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_flg_fb_sel_mask                (0x00000008)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_flg_force_en_mask              (0x00000004)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_curve_sel_mask                 (0x00000002)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_pfv_max_min_sel_mask           (0x00000001)
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_gen_ped_limit(data)                     (0xFF000000&((data)<<24))
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_gen_diff_slp0(data)                     (0x00F00000&((data)<<20))
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_gen_diff_thr0(data)                     (0x000FF000&((data)<<12))
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_con_gen_debug_en(data)                  (0x00000800&((data)<<11))
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_con_gen_debug_sel(data)                 (0x00000780&((data)<<7))
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_flg_force_uov(data)            (0x00000040&((data)<<6))
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_flg_force_cov(data)            (0x00000020&((data)<<5))
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_andor_fb_sel(data)             (0x00000010&((data)<<4))
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_flg_fb_sel(data)               (0x00000008&((data)<<3))
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_flg_force_en(data)             (0x00000004&((data)<<2))
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_curve_sel(data)                (0x00000002&((data)<<1))
#define  KME_DEHALO_KME_DEHALO_70_dh_pfv_conf_gen_pfv_max_min_sel(data)          (0x00000001&(data))
#define  KME_DEHALO_KME_DEHALO_70_get_dh_pfv_gen_ped_limit(data)                 ((0xFF000000&(data))>>24)
#define  KME_DEHALO_KME_DEHALO_70_get_dh_pfv_gen_diff_slp0(data)                 ((0x00F00000&(data))>>20)
#define  KME_DEHALO_KME_DEHALO_70_get_dh_pfv_gen_diff_thr0(data)                 ((0x000FF000&(data))>>12)
#define  KME_DEHALO_KME_DEHALO_70_get_dh_pfv_con_gen_debug_en(data)              ((0x00000800&(data))>>11)
#define  KME_DEHALO_KME_DEHALO_70_get_dh_pfv_con_gen_debug_sel(data)             ((0x00000780&(data))>>7)
#define  KME_DEHALO_KME_DEHALO_70_get_dh_pfv_conf_gen_flg_force_uov(data)        ((0x00000040&(data))>>6)
#define  KME_DEHALO_KME_DEHALO_70_get_dh_pfv_conf_gen_flg_force_cov(data)        ((0x00000020&(data))>>5)
#define  KME_DEHALO_KME_DEHALO_70_get_dh_pfv_conf_gen_andor_fb_sel(data)         ((0x00000010&(data))>>4)
#define  KME_DEHALO_KME_DEHALO_70_get_dh_pfv_conf_gen_flg_fb_sel(data)           ((0x00000008&(data))>>3)
#define  KME_DEHALO_KME_DEHALO_70_get_dh_pfv_conf_gen_flg_force_en(data)         ((0x00000004&(data))>>2)
#define  KME_DEHALO_KME_DEHALO_70_get_dh_pfv_conf_gen_curve_sel(data)            ((0x00000002&(data))>>1)
#define  KME_DEHALO_KME_DEHALO_70_get_dh_pfv_conf_gen_pfv_max_min_sel(data)      (0x00000001&(data))

#define  KME_DEHALO_KME_DEHALO_74                                               0x1809CD74
#define  KME_DEHALO_KME_DEHALO_74_reg_addr                                       "0xB809CD74"
#define  KME_DEHALO_KME_DEHALO_74_reg                                            0xB809CD74
#define  KME_DEHALO_KME_DEHALO_74_inst_addr                                      "0x0019"
#define  set_KME_DEHALO_KME_DEHALO_74_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_74_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_74_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_74_reg))
#define  KME_DEHALO_KME_DEHALO_74_dh_rt2_oobgain_force_0_shift                   (22)
#define  KME_DEHALO_KME_DEHALO_74_dh_rt2_force_mv_y_shift                        (12)
#define  KME_DEHALO_KME_DEHALO_74_dh_rt2_force_mv_x_shift                        (1)
#define  KME_DEHALO_KME_DEHALO_74_dh_rt2_force_mv_en_shift                       (0)
#define  KME_DEHALO_KME_DEHALO_74_dh_rt2_oobgain_force_0_mask                    (0x00400000)
#define  KME_DEHALO_KME_DEHALO_74_dh_rt2_force_mv_y_mask                         (0x003FF000)
#define  KME_DEHALO_KME_DEHALO_74_dh_rt2_force_mv_x_mask                         (0x00000FFE)
#define  KME_DEHALO_KME_DEHALO_74_dh_rt2_force_mv_en_mask                        (0x00000001)
#define  KME_DEHALO_KME_DEHALO_74_dh_rt2_oobgain_force_0(data)                   (0x00400000&((data)<<22))
#define  KME_DEHALO_KME_DEHALO_74_dh_rt2_force_mv_y(data)                        (0x003FF000&((data)<<12))
#define  KME_DEHALO_KME_DEHALO_74_dh_rt2_force_mv_x(data)                        (0x00000FFE&((data)<<1))
#define  KME_DEHALO_KME_DEHALO_74_dh_rt2_force_mv_en(data)                       (0x00000001&(data))
#define  KME_DEHALO_KME_DEHALO_74_get_dh_rt2_oobgain_force_0(data)               ((0x00400000&(data))>>22)
#define  KME_DEHALO_KME_DEHALO_74_get_dh_rt2_force_mv_y(data)                    ((0x003FF000&(data))>>12)
#define  KME_DEHALO_KME_DEHALO_74_get_dh_rt2_force_mv_x(data)                    ((0x00000FFE&(data))>>1)
#define  KME_DEHALO_KME_DEHALO_74_get_dh_rt2_force_mv_en(data)                   (0x00000001&(data))

#define  KME_DEHALO_KME_DEHALO_78                                               0x1809CD78
#define  KME_DEHALO_KME_DEHALO_78_reg_addr                                       "0xB809CD78"
#define  KME_DEHALO_KME_DEHALO_78_reg                                            0xB809CD78
#define  KME_DEHALO_KME_DEHALO_78_inst_addr                                      "0x001A"
#define  set_KME_DEHALO_KME_DEHALO_78_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_78_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_78_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_78_reg))
#define  KME_DEHALO_KME_DEHALO_78_dh_rt2_vidx_ofst_shift                         (9)
#define  KME_DEHALO_KME_DEHALO_78_dh_rt2_hidx_ofst_shift                         (0)
#define  KME_DEHALO_KME_DEHALO_78_dh_rt2_vidx_ofst_mask                          (0x0003FE00)
#define  KME_DEHALO_KME_DEHALO_78_dh_rt2_hidx_ofst_mask                          (0x000001FF)
#define  KME_DEHALO_KME_DEHALO_78_dh_rt2_vidx_ofst(data)                         (0x0003FE00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_78_dh_rt2_hidx_ofst(data)                         (0x000001FF&(data))
#define  KME_DEHALO_KME_DEHALO_78_get_dh_rt2_vidx_ofst(data)                     ((0x0003FE00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_78_get_dh_rt2_hidx_ofst(data)                     (0x000001FF&(data))

#define  KME_DEHALO_KME_DEHALO_7C                                               0x1809CD7C
#define  KME_DEHALO_KME_DEHALO_7C_reg_addr                                       "0xB809CD7C"
#define  KME_DEHALO_KME_DEHALO_7C_reg                                            0xB809CD7C
#define  KME_DEHALO_KME_DEHALO_7C_inst_addr                                      "0x001B"
#define  set_KME_DEHALO_KME_DEHALO_7C_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_7C_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_7C_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_7C_reg))
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_ythr_shft_shift                         (29)
#define  KME_DEHALO_KME_DEHALO_7C_dh_phase_prec_shift                            (21)
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_ooby_shft_shift                         (18)
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_oobx_shft_shift                         (15)
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_ysec_shft_shift                         (12)
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_yfst_shft_shift                         (9)
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_xthr_shft_shift                         (6)
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_xsec_shft_shift                         (3)
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_xfst_shft_shift                         (0)
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_ythr_shft_mask                          (0xE0000000)
#define  KME_DEHALO_KME_DEHALO_7C_dh_phase_prec_mask                             (0x1FE00000)
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_ooby_shft_mask                          (0x001C0000)
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_oobx_shft_mask                          (0x00038000)
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_ysec_shft_mask                          (0x00007000)
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_yfst_shft_mask                          (0x00000E00)
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_xthr_shft_mask                          (0x000001C0)
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_xsec_shft_mask                          (0x00000038)
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_xfst_shft_mask                          (0x00000007)
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_ythr_shft(data)                         (0xE0000000&((data)<<29))
#define  KME_DEHALO_KME_DEHALO_7C_dh_phase_prec(data)                            (0x1FE00000&((data)<<21))
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_ooby_shft(data)                         (0x001C0000&((data)<<18))
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_oobx_shft(data)                         (0x00038000&((data)<<15))
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_ysec_shft(data)                         (0x00007000&((data)<<12))
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_yfst_shft(data)                         (0x00000E00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_xthr_shft(data)                         (0x000001C0&((data)<<6))
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_xsec_shft(data)                         (0x00000038&((data)<<3))
#define  KME_DEHALO_KME_DEHALO_7C_dh_rt2_xfst_shft(data)                         (0x00000007&(data))
#define  KME_DEHALO_KME_DEHALO_7C_get_dh_rt2_ythr_shft(data)                     ((0xE0000000&(data))>>29)
#define  KME_DEHALO_KME_DEHALO_7C_get_dh_phase_prec(data)                        ((0x1FE00000&(data))>>21)
#define  KME_DEHALO_KME_DEHALO_7C_get_dh_rt2_ooby_shft(data)                     ((0x001C0000&(data))>>18)
#define  KME_DEHALO_KME_DEHALO_7C_get_dh_rt2_oobx_shft(data)                     ((0x00038000&(data))>>15)
#define  KME_DEHALO_KME_DEHALO_7C_get_dh_rt2_ysec_shft(data)                     ((0x00007000&(data))>>12)
#define  KME_DEHALO_KME_DEHALO_7C_get_dh_rt2_yfst_shft(data)                     ((0x00000E00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_7C_get_dh_rt2_xthr_shft(data)                     ((0x000001C0&(data))>>6)
#define  KME_DEHALO_KME_DEHALO_7C_get_dh_rt2_xsec_shft(data)                     ((0x00000038&(data))>>3)
#define  KME_DEHALO_KME_DEHALO_7C_get_dh_rt2_xfst_shft(data)                     (0x00000007&(data))

#define  KME_DEHALO_KME_DEHALO_80                                               0x1809CD80
#define  KME_DEHALO_KME_DEHALO_80_reg_addr                                       "0xB809CD80"
#define  KME_DEHALO_KME_DEHALO_80_reg                                            0xB809CD80
#define  KME_DEHALO_KME_DEHALO_80_inst_addr                                      "0x001C"
#define  set_KME_DEHALO_KME_DEHALO_80_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_80_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_80_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_80_reg))
#define  KME_DEHALO_KME_DEHALO_80_dh_rt2_sr_shift                                (0)
#define  KME_DEHALO_KME_DEHALO_80_dh_rt2_sr_mask                                 (0x0000000F)
#define  KME_DEHALO_KME_DEHALO_80_dh_rt2_sr(data)                                (0x0000000F&(data))
#define  KME_DEHALO_KME_DEHALO_80_get_dh_rt2_sr(data)                            (0x0000000F&(data))

#define  KME_DEHALO_KME_DEHALO_84                                               0x1809CD84
#define  KME_DEHALO_KME_DEHALO_84_reg_addr                                       "0xB809CD84"
#define  KME_DEHALO_KME_DEHALO_84_reg                                            0xB809CD84
#define  KME_DEHALO_KME_DEHALO_84_inst_addr                                      "0x001D"
#define  set_KME_DEHALO_KME_DEHALO_84_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_84_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_84_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_84_reg))
#define  KME_DEHALO_KME_DEHALO_84_dh_rt2_xrounding1_shift                        (18)
#define  KME_DEHALO_KME_DEHALO_84_dh_rt2_yrounding0_shift                        (9)
#define  KME_DEHALO_KME_DEHALO_84_dh_rt2_xrounding0_shift                        (0)
#define  KME_DEHALO_KME_DEHALO_84_dh_rt2_xrounding1_mask                         (0x07FC0000)
#define  KME_DEHALO_KME_DEHALO_84_dh_rt2_yrounding0_mask                         (0x0003FE00)
#define  KME_DEHALO_KME_DEHALO_84_dh_rt2_xrounding0_mask                         (0x000001FF)
#define  KME_DEHALO_KME_DEHALO_84_dh_rt2_xrounding1(data)                        (0x07FC0000&((data)<<18))
#define  KME_DEHALO_KME_DEHALO_84_dh_rt2_yrounding0(data)                        (0x0003FE00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_84_dh_rt2_xrounding0(data)                        (0x000001FF&(data))
#define  KME_DEHALO_KME_DEHALO_84_get_dh_rt2_xrounding1(data)                    ((0x07FC0000&(data))>>18)
#define  KME_DEHALO_KME_DEHALO_84_get_dh_rt2_yrounding0(data)                    ((0x0003FE00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_84_get_dh_rt2_xrounding0(data)                    (0x000001FF&(data))

#define  KME_DEHALO_KME_DEHALO_88                                               0x1809CD88
#define  KME_DEHALO_KME_DEHALO_88_reg_addr                                       "0xB809CD88"
#define  KME_DEHALO_KME_DEHALO_88_reg                                            0xB809CD88
#define  KME_DEHALO_KME_DEHALO_88_inst_addr                                      "0x001E"
#define  set_KME_DEHALO_KME_DEHALO_88_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_88_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_88_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_88_reg))
#define  KME_DEHALO_KME_DEHALO_88_dh_rt2_yrounding1_shift                        (0)
#define  KME_DEHALO_KME_DEHALO_88_dh_rt2_yrounding1_mask                         (0x000001FF)
#define  KME_DEHALO_KME_DEHALO_88_dh_rt2_yrounding1(data)                        (0x000001FF&(data))
#define  KME_DEHALO_KME_DEHALO_88_get_dh_rt2_yrounding1(data)                    (0x000001FF&(data))

#define  KME_DEHALO_KME_DEHALO_8C                                               0x1809CD8C
#define  KME_DEHALO_KME_DEHALO_8C_reg_addr                                       "0xB809CD8C"
#define  KME_DEHALO_KME_DEHALO_8C_reg                                            0xB809CD8C
#define  KME_DEHALO_KME_DEHALO_8C_inst_addr                                      "0x001F"
#define  set_KME_DEHALO_KME_DEHALO_8C_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_8C_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_8C_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_8C_reg))
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef5_shift                   (27)
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef4_shift                   (23)
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef3_shift                   (19)
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef2_shift                   (15)
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef1_shift                   (11)
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef0_shift                   (2)
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_shift_shift                   (0)
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef5_mask                    (0x78000000)
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef4_mask                    (0x07800000)
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef3_mask                    (0x00780000)
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef2_mask                    (0x00078000)
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef1_mask                    (0x00007800)
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef0_mask                    (0x000007FC)
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_shift_mask                    (0x00000003)
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef5(data)                   (0x78000000&((data)<<27))
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef4(data)                   (0x07800000&((data)<<23))
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef3(data)                   (0x00780000&((data)<<19))
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef2(data)                   (0x00078000&((data)<<15))
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef1(data)                   (0x00007800&((data)<<11))
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_coef0(data)                   (0x000007FC&((data)<<2))
#define  KME_DEHALO_KME_DEHALO_8C_dh_pst_fblvl_flt_shift(data)                   (0x00000003&(data))
#define  KME_DEHALO_KME_DEHALO_8C_get_dh_pst_fblvl_flt_coef5(data)               ((0x78000000&(data))>>27)
#define  KME_DEHALO_KME_DEHALO_8C_get_dh_pst_fblvl_flt_coef4(data)               ((0x07800000&(data))>>23)
#define  KME_DEHALO_KME_DEHALO_8C_get_dh_pst_fblvl_flt_coef3(data)               ((0x00780000&(data))>>19)
#define  KME_DEHALO_KME_DEHALO_8C_get_dh_pst_fblvl_flt_coef2(data)               ((0x00078000&(data))>>15)
#define  KME_DEHALO_KME_DEHALO_8C_get_dh_pst_fblvl_flt_coef1(data)               ((0x00007800&(data))>>11)
#define  KME_DEHALO_KME_DEHALO_8C_get_dh_pst_fblvl_flt_coef0(data)               ((0x000007FC&(data))>>2)
#define  KME_DEHALO_KME_DEHALO_8C_get_dh_pst_fblvl_flt_shift(data)               (0x00000003&(data))

#define  KME_DEHALO_KME_DEHALO_90                                               0x1809CD90
#define  KME_DEHALO_KME_DEHALO_90_reg_addr                                       "0xB809CD90"
#define  KME_DEHALO_KME_DEHALO_90_reg                                            0xB809CD90
#define  KME_DEHALO_KME_DEHALO_90_inst_addr                                      "0x0020"
#define  set_KME_DEHALO_KME_DEHALO_90_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_90_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_90_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_90_reg))
#define  KME_DEHALO_KME_DEHALO_90_dh_pst_fblvl_fbgen_max_shift                   (20)
#define  KME_DEHALO_KME_DEHALO_90_dh_pst_fblvl_fbgen_min_shift                   (10)
#define  KME_DEHALO_KME_DEHALO_90_dh_pst_fblvl_fbgen_th_shift                    (0)
#define  KME_DEHALO_KME_DEHALO_90_dh_pst_fblvl_fbgen_max_mask                    (0x3FF00000)
#define  KME_DEHALO_KME_DEHALO_90_dh_pst_fblvl_fbgen_min_mask                    (0x000FFC00)
#define  KME_DEHALO_KME_DEHALO_90_dh_pst_fblvl_fbgen_th_mask                     (0x000003FF)
#define  KME_DEHALO_KME_DEHALO_90_dh_pst_fblvl_fbgen_max(data)                   (0x3FF00000&((data)<<20))
#define  KME_DEHALO_KME_DEHALO_90_dh_pst_fblvl_fbgen_min(data)                   (0x000FFC00&((data)<<10))
#define  KME_DEHALO_KME_DEHALO_90_dh_pst_fblvl_fbgen_th(data)                    (0x000003FF&(data))
#define  KME_DEHALO_KME_DEHALO_90_get_dh_pst_fblvl_fbgen_max(data)               ((0x3FF00000&(data))>>20)
#define  KME_DEHALO_KME_DEHALO_90_get_dh_pst_fblvl_fbgen_min(data)               ((0x000FFC00&(data))>>10)
#define  KME_DEHALO_KME_DEHALO_90_get_dh_pst_fblvl_fbgen_th(data)                (0x000003FF&(data))

#define  KME_DEHALO_KME_DEHALO_94                                               0x1809CD94
#define  KME_DEHALO_KME_DEHALO_94_reg_addr                                       "0xB809CD94"
#define  KME_DEHALO_KME_DEHALO_94_reg                                            0xB809CD94
#define  KME_DEHALO_KME_DEHALO_94_inst_addr                                      "0x0021"
#define  set_KME_DEHALO_KME_DEHALO_94_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_94_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_94_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_94_reg))
#define  KME_DEHALO_KME_DEHALO_94_dh_pst_fblvl_fbgen_sft_shift                   (8)
#define  KME_DEHALO_KME_DEHALO_94_dh_pst_fblvl_fbgen_slp_shift                   (0)
#define  KME_DEHALO_KME_DEHALO_94_dh_pst_fblvl_fbgen_sft_mask                    (0x00000F00)
#define  KME_DEHALO_KME_DEHALO_94_dh_pst_fblvl_fbgen_slp_mask                    (0x000000FF)
#define  KME_DEHALO_KME_DEHALO_94_dh_pst_fblvl_fbgen_sft(data)                   (0x00000F00&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_94_dh_pst_fblvl_fbgen_slp(data)                   (0x000000FF&(data))
#define  KME_DEHALO_KME_DEHALO_94_get_dh_pst_fblvl_fbgen_sft(data)               ((0x00000F00&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_94_get_dh_pst_fblvl_fbgen_slp(data)               (0x000000FF&(data))

#define  KME_DEHALO_KME_DEHALO_A8                                               0x1809CDA8
#define  KME_DEHALO_KME_DEHALO_A8_reg_addr                                       "0xB809CDA8"
#define  KME_DEHALO_KME_DEHALO_A8_reg                                            0xB809CDA8
#define  KME_DEHALO_KME_DEHALO_A8_inst_addr                                      "0x0022"
#define  set_KME_DEHALO_KME_DEHALO_A8_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_A8_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_A8_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_A8_reg))
#define  KME_DEHALO_KME_DEHALO_A8_dh_pfv_check_dif_limit_shift                   (19)
#define  KME_DEHALO_KME_DEHALO_A8_dh_pfv_check_dif_gain_p_shift                  (12)
#define  KME_DEHALO_KME_DEHALO_A8_dh_pfv_check_dif_gain_i_shift                  (5)
#define  KME_DEHALO_KME_DEHALO_A8_dh_pfv_check_dif_mode_shift                    (4)
#define  KME_DEHALO_KME_DEHALO_A8_dh_pfv_check_debug_sel_shift                   (0)
#define  KME_DEHALO_KME_DEHALO_A8_dh_pfv_check_dif_limit_mask                    (0x1FF80000)
#define  KME_DEHALO_KME_DEHALO_A8_dh_pfv_check_dif_gain_p_mask                   (0x0007F000)
#define  KME_DEHALO_KME_DEHALO_A8_dh_pfv_check_dif_gain_i_mask                   (0x00000FE0)
#define  KME_DEHALO_KME_DEHALO_A8_dh_pfv_check_dif_mode_mask                     (0x00000010)
#define  KME_DEHALO_KME_DEHALO_A8_dh_pfv_check_debug_sel_mask                    (0x0000000F)
#define  KME_DEHALO_KME_DEHALO_A8_dh_pfv_check_dif_limit(data)                   (0x1FF80000&((data)<<19))
#define  KME_DEHALO_KME_DEHALO_A8_dh_pfv_check_dif_gain_p(data)                  (0x0007F000&((data)<<12))
#define  KME_DEHALO_KME_DEHALO_A8_dh_pfv_check_dif_gain_i(data)                  (0x00000FE0&((data)<<5))
#define  KME_DEHALO_KME_DEHALO_A8_dh_pfv_check_dif_mode(data)                    (0x00000010&((data)<<4))
#define  KME_DEHALO_KME_DEHALO_A8_dh_pfv_check_debug_sel(data)                   (0x0000000F&(data))
#define  KME_DEHALO_KME_DEHALO_A8_get_dh_pfv_check_dif_limit(data)               ((0x1FF80000&(data))>>19)
#define  KME_DEHALO_KME_DEHALO_A8_get_dh_pfv_check_dif_gain_p(data)              ((0x0007F000&(data))>>12)
#define  KME_DEHALO_KME_DEHALO_A8_get_dh_pfv_check_dif_gain_i(data)              ((0x00000FE0&(data))>>5)
#define  KME_DEHALO_KME_DEHALO_A8_get_dh_pfv_check_dif_mode(data)                ((0x00000010&(data))>>4)
#define  KME_DEHALO_KME_DEHALO_A8_get_dh_pfv_check_debug_sel(data)               (0x0000000F&(data))

#define  KME_DEHALO_KME_DEHALO_AC                                               0x1809CDAC
#define  KME_DEHALO_KME_DEHALO_AC_reg_addr                                       "0xB809CDAC"
#define  KME_DEHALO_KME_DEHALO_AC_reg                                            0xB809CDAC
#define  KME_DEHALO_KME_DEHALO_AC_inst_addr                                      "0x0023"
#define  set_KME_DEHALO_KME_DEHALO_AC_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_AC_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_AC_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_AC_reg))
#define  KME_DEHALO_KME_DEHALO_AC_dh_occl_gen_debug_en_shift                     (23)
#define  KME_DEHALO_KME_DEHALO_AC_dh_occl_gen_debug_sel_shift                    (19)
#define  KME_DEHALO_KME_DEHALO_AC_dh_ptlogo_penalty_shift                        (9)
#define  KME_DEHALO_KME_DEHALO_AC_dh_oob_penalty_gain_shift                      (5)
#define  KME_DEHALO_KME_DEHALO_AC_dh_pfv_chk_pedal_shf_shift                     (2)
#define  KME_DEHALO_KME_DEHALO_AC_dh_pfv_check_debug_en_shift                    (1)
#define  KME_DEHALO_KME_DEHALO_AC_dh_pfv_chk_diff_win_mode_shift                 (0)
#define  KME_DEHALO_KME_DEHALO_AC_dh_occl_gen_debug_en_mask                      (0x00800000)
#define  KME_DEHALO_KME_DEHALO_AC_dh_occl_gen_debug_sel_mask                     (0x00780000)
#define  KME_DEHALO_KME_DEHALO_AC_dh_ptlogo_penalty_mask                         (0x0007FE00)
#define  KME_DEHALO_KME_DEHALO_AC_dh_oob_penalty_gain_mask                       (0x000001E0)
#define  KME_DEHALO_KME_DEHALO_AC_dh_pfv_chk_pedal_shf_mask                      (0x0000001C)
#define  KME_DEHALO_KME_DEHALO_AC_dh_pfv_check_debug_en_mask                     (0x00000002)
#define  KME_DEHALO_KME_DEHALO_AC_dh_pfv_chk_diff_win_mode_mask                  (0x00000001)
#define  KME_DEHALO_KME_DEHALO_AC_dh_occl_gen_debug_en(data)                     (0x00800000&((data)<<23))
#define  KME_DEHALO_KME_DEHALO_AC_dh_occl_gen_debug_sel(data)                    (0x00780000&((data)<<19))
#define  KME_DEHALO_KME_DEHALO_AC_dh_ptlogo_penalty(data)                        (0x0007FE00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_AC_dh_oob_penalty_gain(data)                      (0x000001E0&((data)<<5))
#define  KME_DEHALO_KME_DEHALO_AC_dh_pfv_chk_pedal_shf(data)                     (0x0000001C&((data)<<2))
#define  KME_DEHALO_KME_DEHALO_AC_dh_pfv_check_debug_en(data)                    (0x00000002&((data)<<1))
#define  KME_DEHALO_KME_DEHALO_AC_dh_pfv_chk_diff_win_mode(data)                 (0x00000001&(data))
#define  KME_DEHALO_KME_DEHALO_AC_get_dh_occl_gen_debug_en(data)                 ((0x00800000&(data))>>23)
#define  KME_DEHALO_KME_DEHALO_AC_get_dh_occl_gen_debug_sel(data)                ((0x00780000&(data))>>19)
#define  KME_DEHALO_KME_DEHALO_AC_get_dh_ptlogo_penalty(data)                    ((0x0007FE00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_AC_get_dh_oob_penalty_gain(data)                  ((0x000001E0&(data))>>5)
#define  KME_DEHALO_KME_DEHALO_AC_get_dh_pfv_chk_pedal_shf(data)                 ((0x0000001C&(data))>>2)
#define  KME_DEHALO_KME_DEHALO_AC_get_dh_pfv_check_debug_en(data)                ((0x00000002&(data))>>1)
#define  KME_DEHALO_KME_DEHALO_AC_get_dh_pfv_chk_diff_win_mode(data)             (0x00000001&(data))

#define  KME_DEHALO_KME_DEHALO_B0                                               0x1809CDB0
#define  KME_DEHALO_KME_DEHALO_B0_reg_addr                                       "0xB809CDB0"
#define  KME_DEHALO_KME_DEHALO_B0_reg                                            0xB809CDB0
#define  KME_DEHALO_KME_DEHALO_B0_inst_addr                                      "0x0024"
#define  set_KME_DEHALO_KME_DEHALO_B0_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_B0_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_B0_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_B0_reg))
#define  KME_DEHALO_KME_DEHALO_B0_dh_occl_gen_sim_trans_shift                    (20)
#define  KME_DEHALO_KME_DEHALO_B0_dh_occl_gen_sim_thr_shift                      (12)
#define  KME_DEHALO_KME_DEHALO_B0_dh_occl_gen_sim_slp_shift                      (0)
#define  KME_DEHALO_KME_DEHALO_B0_dh_occl_gen_sim_trans_mask                     (0x00700000)
#define  KME_DEHALO_KME_DEHALO_B0_dh_occl_gen_sim_thr_mask                       (0x000FF000)
#define  KME_DEHALO_KME_DEHALO_B0_dh_occl_gen_sim_slp_mask                       (0x00000FFF)
#define  KME_DEHALO_KME_DEHALO_B0_dh_occl_gen_sim_trans(data)                    (0x00700000&((data)<<20))
#define  KME_DEHALO_KME_DEHALO_B0_dh_occl_gen_sim_thr(data)                      (0x000FF000&((data)<<12))
#define  KME_DEHALO_KME_DEHALO_B0_dh_occl_gen_sim_slp(data)                      (0x00000FFF&(data))
#define  KME_DEHALO_KME_DEHALO_B0_get_dh_occl_gen_sim_trans(data)                ((0x00700000&(data))>>20)
#define  KME_DEHALO_KME_DEHALO_B0_get_dh_occl_gen_sim_thr(data)                  ((0x000FF000&(data))>>12)
#define  KME_DEHALO_KME_DEHALO_B0_get_dh_occl_gen_sim_slp(data)                  (0x00000FFF&(data))

#define  KME_DEHALO_KME_DEHALO_B4                                               0x1809CDB4
#define  KME_DEHALO_KME_DEHALO_B4_reg_addr                                       "0xB809CDB4"
#define  KME_DEHALO_KME_DEHALO_B4_reg                                            0xB809CDB4
#define  KME_DEHALO_KME_DEHALO_B4_inst_addr                                      "0x0025"
#define  set_KME_DEHALO_KME_DEHALO_B4_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_B4_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_B4_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_B4_reg))
#define  KME_DEHALO_KME_DEHALO_B4_dh_pstoccl_sel_shift                           (30)
#define  KME_DEHALO_KME_DEHALO_B4_dh_pstflt_occl_mv_accord_shift                 (29)
#define  KME_DEHALO_KME_DEHALO_B4_dh_pst_dumy_mask_dly_sel_shift                 (25)
#define  KME_DEHALO_KME_DEHALO_B4_dh_post_flt_en_shift                           (23)
#define  KME_DEHALO_KME_DEHALO_B4_dh_occl_gen_dif_trans_shift                    (20)
#define  KME_DEHALO_KME_DEHALO_B4_dh_occl_gen_dif_thr_shift                      (12)
#define  KME_DEHALO_KME_DEHALO_B4_dh_occl_gen_dif_slp_shift                      (0)
#define  KME_DEHALO_KME_DEHALO_B4_dh_pstoccl_sel_mask                            (0xC0000000)
#define  KME_DEHALO_KME_DEHALO_B4_dh_pstflt_occl_mv_accord_mask                  (0x20000000)
#define  KME_DEHALO_KME_DEHALO_B4_dh_pst_dumy_mask_dly_sel_mask                  (0x1E000000)
#define  KME_DEHALO_KME_DEHALO_B4_dh_post_flt_en_mask                            (0x01800000)
#define  KME_DEHALO_KME_DEHALO_B4_dh_occl_gen_dif_trans_mask                     (0x00700000)
#define  KME_DEHALO_KME_DEHALO_B4_dh_occl_gen_dif_thr_mask                       (0x000FF000)
#define  KME_DEHALO_KME_DEHALO_B4_dh_occl_gen_dif_slp_mask                       (0x00000FFF)
#define  KME_DEHALO_KME_DEHALO_B4_dh_pstoccl_sel(data)                           (0xC0000000&((data)<<30))
#define  KME_DEHALO_KME_DEHALO_B4_dh_pstflt_occl_mv_accord(data)                 (0x20000000&((data)<<29))
#define  KME_DEHALO_KME_DEHALO_B4_dh_pst_dumy_mask_dly_sel(data)                 (0x1E000000&((data)<<25))
#define  KME_DEHALO_KME_DEHALO_B4_dh_post_flt_en(data)                           (0x01800000&((data)<<23))
#define  KME_DEHALO_KME_DEHALO_B4_dh_occl_gen_dif_trans(data)                    (0x00700000&((data)<<20))
#define  KME_DEHALO_KME_DEHALO_B4_dh_occl_gen_dif_thr(data)                      (0x000FF000&((data)<<12))
#define  KME_DEHALO_KME_DEHALO_B4_dh_occl_gen_dif_slp(data)                      (0x00000FFF&(data))
#define  KME_DEHALO_KME_DEHALO_B4_get_dh_pstoccl_sel(data)                       ((0xC0000000&(data))>>30)
#define  KME_DEHALO_KME_DEHALO_B4_get_dh_pstflt_occl_mv_accord(data)             ((0x20000000&(data))>>29)
#define  KME_DEHALO_KME_DEHALO_B4_get_dh_pst_dumy_mask_dly_sel(data)             ((0x1E000000&(data))>>25)
#define  KME_DEHALO_KME_DEHALO_B4_get_dh_post_flt_en(data)                       ((0x01800000&(data))>>23)
#define  KME_DEHALO_KME_DEHALO_B4_get_dh_occl_gen_dif_trans(data)                ((0x00700000&(data))>>20)
#define  KME_DEHALO_KME_DEHALO_B4_get_dh_occl_gen_dif_thr(data)                  ((0x000FF000&(data))>>12)
#define  KME_DEHALO_KME_DEHALO_B4_get_dh_occl_gen_dif_slp(data)                  (0x00000FFF&(data))

#define  KME_DEHALO_KME_DEHALO_B8                                               0x1809CDB8
#define  KME_DEHALO_KME_DEHALO_B8_reg_addr                                       "0xB809CDB8"
#define  KME_DEHALO_KME_DEHALO_B8_reg                                            0xB809CDB8
#define  KME_DEHALO_KME_DEHALO_B8_inst_addr                                      "0x0026"
#define  set_KME_DEHALO_KME_DEHALO_B8_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_B8_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_B8_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_B8_reg))
#define  KME_DEHALO_KME_DEHALO_B8_dh_pstflt_vdumy_int_shift                      (23)
#define  KME_DEHALO_KME_DEHALO_B8_dh_pstflt_vdumy_base_shift                     (17)
#define  KME_DEHALO_KME_DEHALO_B8_dh_post_flt_mv_ext_thr_shift                   (8)
#define  KME_DEHALO_KME_DEHALO_B8_dh_post_flt_mv_new_mode_shift                  (7)
#define  KME_DEHALO_KME_DEHALO_B8_dh_post_flt_occ_ext_thr_shift                  (2)
#define  KME_DEHALO_KME_DEHALO_B8_dh_post_flt_new_mode_shift                     (1)
#define  KME_DEHALO_KME_DEHALO_B8_dh_post_flt_win_mode_shift                     (0)
#define  KME_DEHALO_KME_DEHALO_B8_dh_pstflt_vdumy_int_mask                       (0x1F800000)
#define  KME_DEHALO_KME_DEHALO_B8_dh_pstflt_vdumy_base_mask                      (0x007E0000)
#define  KME_DEHALO_KME_DEHALO_B8_dh_post_flt_mv_ext_thr_mask                    (0x0001FF00)
#define  KME_DEHALO_KME_DEHALO_B8_dh_post_flt_mv_new_mode_mask                   (0x00000080)
#define  KME_DEHALO_KME_DEHALO_B8_dh_post_flt_occ_ext_thr_mask                   (0x0000007C)
#define  KME_DEHALO_KME_DEHALO_B8_dh_post_flt_new_mode_mask                      (0x00000002)
#define  KME_DEHALO_KME_DEHALO_B8_dh_post_flt_win_mode_mask                      (0x00000001)
#define  KME_DEHALO_KME_DEHALO_B8_dh_pstflt_vdumy_int(data)                      (0x1F800000&((data)<<23))
#define  KME_DEHALO_KME_DEHALO_B8_dh_pstflt_vdumy_base(data)                     (0x007E0000&((data)<<17))
#define  KME_DEHALO_KME_DEHALO_B8_dh_post_flt_mv_ext_thr(data)                   (0x0001FF00&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_B8_dh_post_flt_mv_new_mode(data)                  (0x00000080&((data)<<7))
#define  KME_DEHALO_KME_DEHALO_B8_dh_post_flt_occ_ext_thr(data)                  (0x0000007C&((data)<<2))
#define  KME_DEHALO_KME_DEHALO_B8_dh_post_flt_new_mode(data)                     (0x00000002&((data)<<1))
#define  KME_DEHALO_KME_DEHALO_B8_dh_post_flt_win_mode(data)                     (0x00000001&(data))
#define  KME_DEHALO_KME_DEHALO_B8_get_dh_pstflt_vdumy_int(data)                  ((0x1F800000&(data))>>23)
#define  KME_DEHALO_KME_DEHALO_B8_get_dh_pstflt_vdumy_base(data)                 ((0x007E0000&(data))>>17)
#define  KME_DEHALO_KME_DEHALO_B8_get_dh_post_flt_mv_ext_thr(data)               ((0x0001FF00&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_B8_get_dh_post_flt_mv_new_mode(data)              ((0x00000080&(data))>>7)
#define  KME_DEHALO_KME_DEHALO_B8_get_dh_post_flt_occ_ext_thr(data)              ((0x0000007C&(data))>>2)
#define  KME_DEHALO_KME_DEHALO_B8_get_dh_post_flt_new_mode(data)                 ((0x00000002&(data))>>1)
#define  KME_DEHALO_KME_DEHALO_B8_get_dh_post_flt_win_mode(data)                 (0x00000001&(data))

#define  KME_DEHALO_KME_DEHALO_BC                                               0x1809CDBC
#define  KME_DEHALO_KME_DEHALO_BC_reg_addr                                       "0xB809CDBC"
#define  KME_DEHALO_KME_DEHALO_BC_reg                                            0xB809CDBC
#define  KME_DEHALO_KME_DEHALO_BC_inst_addr                                      "0x0027"
#define  set_KME_DEHALO_KME_DEHALO_BC_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_BC_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_BC_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_BC_reg))
#define  KME_DEHALO_KME_DEHALO_BC_dh_cross_bd_de_base_shift                      (27)
#define  KME_DEHALO_KME_DEHALO_BC_dh_cross_bd_erosion_mode_shift                 (26)
#define  KME_DEHALO_KME_DEHALO_BC_dh_post_flt_debug_sel_shift                    (23)
#define  KME_DEHALO_KME_DEHALO_BC_dh_pst_occl_type_thr_shift                     (17)
#define  KME_DEHALO_KME_DEHALO_BC_dh_post_flt_occ_cost_shf_shift                 (13)
#define  KME_DEHALO_KME_DEHALO_BC_dh_post_flt_mv_cost_shf_shift                  (9)
#define  KME_DEHALO_KME_DEHALO_BC_dh_post_flt_apl_dif_gain_shift                 (3)
#define  KME_DEHALO_KME_DEHALO_BC_dh_post_flt_debug_en_shift                     (1)
#define  KME_DEHALO_KME_DEHALO_BC_dh_pstflt_vdumy_mod_shift                      (0)
#define  KME_DEHALO_KME_DEHALO_BC_dh_cross_bd_de_base_mask                       (0xF8000000)
#define  KME_DEHALO_KME_DEHALO_BC_dh_cross_bd_erosion_mode_mask                  (0x04000000)
#define  KME_DEHALO_KME_DEHALO_BC_dh_post_flt_debug_sel_mask                     (0x03800000)
#define  KME_DEHALO_KME_DEHALO_BC_dh_pst_occl_type_thr_mask                      (0x007E0000)
#define  KME_DEHALO_KME_DEHALO_BC_dh_post_flt_occ_cost_shf_mask                  (0x0001E000)
#define  KME_DEHALO_KME_DEHALO_BC_dh_post_flt_mv_cost_shf_mask                   (0x00001E00)
#define  KME_DEHALO_KME_DEHALO_BC_dh_post_flt_apl_dif_gain_mask                  (0x000001F8)
#define  KME_DEHALO_KME_DEHALO_BC_dh_post_flt_debug_en_mask                      (0x00000002)
#define  KME_DEHALO_KME_DEHALO_BC_dh_pstflt_vdumy_mod_mask                       (0x00000001)
#define  KME_DEHALO_KME_DEHALO_BC_dh_cross_bd_de_base(data)                      (0xF8000000&((data)<<27))
#define  KME_DEHALO_KME_DEHALO_BC_dh_cross_bd_erosion_mode(data)                 (0x04000000&((data)<<26))
#define  KME_DEHALO_KME_DEHALO_BC_dh_post_flt_debug_sel(data)                    (0x03800000&((data)<<23))
#define  KME_DEHALO_KME_DEHALO_BC_dh_pst_occl_type_thr(data)                     (0x007E0000&((data)<<17))
#define  KME_DEHALO_KME_DEHALO_BC_dh_post_flt_occ_cost_shf(data)                 (0x0001E000&((data)<<13))
#define  KME_DEHALO_KME_DEHALO_BC_dh_post_flt_mv_cost_shf(data)                  (0x00001E00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_BC_dh_post_flt_apl_dif_gain(data)                 (0x000001F8&((data)<<3))
#define  KME_DEHALO_KME_DEHALO_BC_dh_post_flt_debug_en(data)                     (0x00000002&((data)<<1))
#define  KME_DEHALO_KME_DEHALO_BC_dh_pstflt_vdumy_mod(data)                      (0x00000001&(data))
#define  KME_DEHALO_KME_DEHALO_BC_get_dh_cross_bd_de_base(data)                  ((0xF8000000&(data))>>27)
#define  KME_DEHALO_KME_DEHALO_BC_get_dh_cross_bd_erosion_mode(data)             ((0x04000000&(data))>>26)
#define  KME_DEHALO_KME_DEHALO_BC_get_dh_post_flt_debug_sel(data)                ((0x03800000&(data))>>23)
#define  KME_DEHALO_KME_DEHALO_BC_get_dh_pst_occl_type_thr(data)                 ((0x007E0000&(data))>>17)
#define  KME_DEHALO_KME_DEHALO_BC_get_dh_post_flt_occ_cost_shf(data)             ((0x0001E000&(data))>>13)
#define  KME_DEHALO_KME_DEHALO_BC_get_dh_post_flt_mv_cost_shf(data)              ((0x00001E00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_BC_get_dh_post_flt_apl_dif_gain(data)             ((0x000001F8&(data))>>3)
#define  KME_DEHALO_KME_DEHALO_BC_get_dh_post_flt_debug_en(data)                 ((0x00000002&(data))>>1)
#define  KME_DEHALO_KME_DEHALO_BC_get_dh_pstflt_vdumy_mod(data)                  (0x00000001&(data))

#define  KME_DEHALO_KME_DEHALO_C0                                               0x1809CDC0
#define  KME_DEHALO_KME_DEHALO_C0_reg_addr                                       "0xB809CDC0"
#define  KME_DEHALO_KME_DEHALO_C0_reg                                            0xB809CDC0
#define  KME_DEHALO_KME_DEHALO_C0_inst_addr                                      "0x0028"
#define  set_KME_DEHALO_KME_DEHALO_C0_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_C0_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_C0_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_C0_reg))
#define  KME_DEHALO_KME_DEHALO_C0_dh_pstflt_vsrow_r_dly_sel_shift                (28)
#define  KME_DEHALO_KME_DEHALO_C0_dh_pstflt_vsrow_w_dly_sel_shift                (24)
#define  KME_DEHALO_KME_DEHALO_C0_dh_pstflt_row_dumy_num_shift                   (20)
#define  KME_DEHALO_KME_DEHALO_C0_dh_pstflt_blk_dumy_num_shift                   (16)
#define  KME_DEHALO_KME_DEHALO_C0_dh_pstflt_de_intval_shift                      (10)
#define  KME_DEHALO_KME_DEHALO_C0_dh_pst_occl_dtl_fb_th0_shift                   (4)
#define  KME_DEHALO_KME_DEHALO_C0_dh_pst_occl_dtl_fb_mode_shift                  (2)
#define  KME_DEHALO_KME_DEHALO_C0_dh_pst_occl_dtl_fb_en_shift                    (0)
#define  KME_DEHALO_KME_DEHALO_C0_dh_pstflt_vsrow_r_dly_sel_mask                 (0xF0000000)
#define  KME_DEHALO_KME_DEHALO_C0_dh_pstflt_vsrow_w_dly_sel_mask                 (0x0F000000)
#define  KME_DEHALO_KME_DEHALO_C0_dh_pstflt_row_dumy_num_mask                    (0x00F00000)
#define  KME_DEHALO_KME_DEHALO_C0_dh_pstflt_blk_dumy_num_mask                    (0x000F0000)
#define  KME_DEHALO_KME_DEHALO_C0_dh_pstflt_de_intval_mask                       (0x0000FC00)
#define  KME_DEHALO_KME_DEHALO_C0_dh_pst_occl_dtl_fb_th0_mask                    (0x000003F0)
#define  KME_DEHALO_KME_DEHALO_C0_dh_pst_occl_dtl_fb_mode_mask                   (0x0000000C)
#define  KME_DEHALO_KME_DEHALO_C0_dh_pst_occl_dtl_fb_en_mask                     (0x00000003)
#define  KME_DEHALO_KME_DEHALO_C0_dh_pstflt_vsrow_r_dly_sel(data)                (0xF0000000&((data)<<28))
#define  KME_DEHALO_KME_DEHALO_C0_dh_pstflt_vsrow_w_dly_sel(data)                (0x0F000000&((data)<<24))
#define  KME_DEHALO_KME_DEHALO_C0_dh_pstflt_row_dumy_num(data)                   (0x00F00000&((data)<<20))
#define  KME_DEHALO_KME_DEHALO_C0_dh_pstflt_blk_dumy_num(data)                   (0x000F0000&((data)<<16))
#define  KME_DEHALO_KME_DEHALO_C0_dh_pstflt_de_intval(data)                      (0x0000FC00&((data)<<10))
#define  KME_DEHALO_KME_DEHALO_C0_dh_pst_occl_dtl_fb_th0(data)                   (0x000003F0&((data)<<4))
#define  KME_DEHALO_KME_DEHALO_C0_dh_pst_occl_dtl_fb_mode(data)                  (0x0000000C&((data)<<2))
#define  KME_DEHALO_KME_DEHALO_C0_dh_pst_occl_dtl_fb_en(data)                    (0x00000003&(data))
#define  KME_DEHALO_KME_DEHALO_C0_get_dh_pstflt_vsrow_r_dly_sel(data)            ((0xF0000000&(data))>>28)
#define  KME_DEHALO_KME_DEHALO_C0_get_dh_pstflt_vsrow_w_dly_sel(data)            ((0x0F000000&(data))>>24)
#define  KME_DEHALO_KME_DEHALO_C0_get_dh_pstflt_row_dumy_num(data)               ((0x00F00000&(data))>>20)
#define  KME_DEHALO_KME_DEHALO_C0_get_dh_pstflt_blk_dumy_num(data)               ((0x000F0000&(data))>>16)
#define  KME_DEHALO_KME_DEHALO_C0_get_dh_pstflt_de_intval(data)                  ((0x0000FC00&(data))>>10)
#define  KME_DEHALO_KME_DEHALO_C0_get_dh_pst_occl_dtl_fb_th0(data)               ((0x000003F0&(data))>>4)
#define  KME_DEHALO_KME_DEHALO_C0_get_dh_pst_occl_dtl_fb_mode(data)              ((0x0000000C&(data))>>2)
#define  KME_DEHALO_KME_DEHALO_C0_get_dh_pst_occl_dtl_fb_en(data)                (0x00000003&(data))

#define  KME_DEHALO_KME_DEHALO_C4                                               0x1809CDC4
#define  KME_DEHALO_KME_DEHALO_C4_reg_addr                                       "0xB809CDC4"
#define  KME_DEHALO_KME_DEHALO_C4_reg                                            0xB809CDC4
#define  KME_DEHALO_KME_DEHALO_C4_inst_addr                                      "0x0029"
#define  set_KME_DEHALO_KME_DEHALO_C4_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_C4_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_C4_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_C4_reg))
#define  KME_DEHALO_KME_DEHALO_C4_dh_rt1_fb_gen_mod_shift                        (29)
#define  KME_DEHALO_KME_DEHALO_C4_dh_ph_fb_gen_mod_shift                         (27)
#define  KME_DEHALO_KME_DEHALO_C4_dh_out_vsrow_r_dly_sel_shift                   (23)
#define  KME_DEHALO_KME_DEHALO_C4_dh_pst_occl_alpha_th_shift                     (16)
#define  KME_DEHALO_KME_DEHALO_C4_dh_pst_occl_dtl_fb_th2_shift                   (8)
#define  KME_DEHALO_KME_DEHALO_C4_dh_pst_occl_dtl_fb_th1_shift                   (0)
#define  KME_DEHALO_KME_DEHALO_C4_dh_rt1_fb_gen_mod_mask                         (0x60000000)
#define  KME_DEHALO_KME_DEHALO_C4_dh_ph_fb_gen_mod_mask                          (0x18000000)
#define  KME_DEHALO_KME_DEHALO_C4_dh_out_vsrow_r_dly_sel_mask                    (0x07800000)
#define  KME_DEHALO_KME_DEHALO_C4_dh_pst_occl_alpha_th_mask                      (0x007F0000)
#define  KME_DEHALO_KME_DEHALO_C4_dh_pst_occl_dtl_fb_th2_mask                    (0x0000FF00)
#define  KME_DEHALO_KME_DEHALO_C4_dh_pst_occl_dtl_fb_th1_mask                    (0x000000FF)
#define  KME_DEHALO_KME_DEHALO_C4_dh_rt1_fb_gen_mod(data)                        (0x60000000&((data)<<29))
#define  KME_DEHALO_KME_DEHALO_C4_dh_ph_fb_gen_mod(data)                         (0x18000000&((data)<<27))
#define  KME_DEHALO_KME_DEHALO_C4_dh_out_vsrow_r_dly_sel(data)                   (0x07800000&((data)<<23))
#define  KME_DEHALO_KME_DEHALO_C4_dh_pst_occl_alpha_th(data)                     (0x007F0000&((data)<<16))
#define  KME_DEHALO_KME_DEHALO_C4_dh_pst_occl_dtl_fb_th2(data)                   (0x0000FF00&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_C4_dh_pst_occl_dtl_fb_th1(data)                   (0x000000FF&(data))
#define  KME_DEHALO_KME_DEHALO_C4_get_dh_rt1_fb_gen_mod(data)                    ((0x60000000&(data))>>29)
#define  KME_DEHALO_KME_DEHALO_C4_get_dh_ph_fb_gen_mod(data)                     ((0x18000000&(data))>>27)
#define  KME_DEHALO_KME_DEHALO_C4_get_dh_out_vsrow_r_dly_sel(data)               ((0x07800000&(data))>>23)
#define  KME_DEHALO_KME_DEHALO_C4_get_dh_pst_occl_alpha_th(data)                 ((0x007F0000&(data))>>16)
#define  KME_DEHALO_KME_DEHALO_C4_get_dh_pst_occl_dtl_fb_th2(data)               ((0x0000FF00&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_C4_get_dh_pst_occl_dtl_fb_th1(data)               (0x000000FF&(data))

#define  KME_DEHALO_KME_DEHALO_C8                                               0x1809CDC8
#define  KME_DEHALO_KME_DEHALO_C8_reg_addr                                       "0xB809CDC8"
#define  KME_DEHALO_KME_DEHALO_C8_reg                                            0xB809CDC8
#define  KME_DEHALO_KME_DEHALO_C8_inst_addr                                      "0x002A"
#define  set_KME_DEHALO_KME_DEHALO_C8_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_C8_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_C8_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_C8_reg))
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_medflt_mod_shift                        (15)
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_medflt_way_shift                        (11)
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_medflt_en_shift                         (10)
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_occl_fir_th1_shift                      (7)
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_occl_fir_th0_shift                      (4)
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_occl_fir_major_th_shift                 (1)
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_occl_fir_en_shift                       (0)
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_medflt_mod_mask                         (0x00038000)
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_medflt_way_mask                         (0x00007800)
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_medflt_en_mask                          (0x00000400)
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_occl_fir_th1_mask                       (0x00000380)
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_occl_fir_th0_mask                       (0x00000070)
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_occl_fir_major_th_mask                  (0x0000000E)
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_occl_fir_en_mask                        (0x00000001)
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_medflt_mod(data)                        (0x00038000&((data)<<15))
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_medflt_way(data)                        (0x00007800&((data)<<11))
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_medflt_en(data)                         (0x00000400&((data)<<10))
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_occl_fir_th1(data)                      (0x00000380&((data)<<7))
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_occl_fir_th0(data)                      (0x00000070&((data)<<4))
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_occl_fir_major_th(data)                 (0x0000000E&((data)<<1))
#define  KME_DEHALO_KME_DEHALO_C8_dh_pst_occl_fir_en(data)                       (0x00000001&(data))
#define  KME_DEHALO_KME_DEHALO_C8_get_dh_pst_medflt_mod(data)                    ((0x00038000&(data))>>15)
#define  KME_DEHALO_KME_DEHALO_C8_get_dh_pst_medflt_way(data)                    ((0x00007800&(data))>>11)
#define  KME_DEHALO_KME_DEHALO_C8_get_dh_pst_medflt_en(data)                     ((0x00000400&(data))>>10)
#define  KME_DEHALO_KME_DEHALO_C8_get_dh_pst_occl_fir_th1(data)                  ((0x00000380&(data))>>7)
#define  KME_DEHALO_KME_DEHALO_C8_get_dh_pst_occl_fir_th0(data)                  ((0x00000070&(data))>>4)
#define  KME_DEHALO_KME_DEHALO_C8_get_dh_pst_occl_fir_major_th(data)             ((0x0000000E&(data))>>1)
#define  KME_DEHALO_KME_DEHALO_C8_get_dh_pst_occl_fir_en(data)                   (0x00000001&(data))

#define  KME_DEHALO_KME_DEHALO_CC                                               0x1809CDCC
#define  KME_DEHALO_KME_DEHALO_CC_reg_addr                                       "0xB809CDCC"
#define  KME_DEHALO_KME_DEHALO_CC_reg                                            0xB809CDCC
#define  KME_DEHALO_KME_DEHALO_CC_inst_addr                                      "0x002B"
#define  set_KME_DEHALO_KME_DEHALO_CC_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_CC_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_CC_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_CC_reg))
#define  KME_DEHALO_KME_DEHALO_CC_dh_post_flt_apl_med9_shift                     (23)
#define  KME_DEHALO_KME_DEHALO_CC_dh_pst_medflt5_mvdf_cnt_thr_shift              (20)
#define  KME_DEHALO_KME_DEHALO_CC_dh_pst_medflt9_mvdf_cnt_thr_shift              (16)
#define  KME_DEHALO_KME_DEHALO_CC_dh_pst_medflt_sad_valu_th_shift                (8)
#define  KME_DEHALO_KME_DEHALO_CC_dh_pst_medflt_mvdif_th_shift                   (0)
#define  KME_DEHALO_KME_DEHALO_CC_dh_post_flt_apl_med9_mask                      (0x00800000)
#define  KME_DEHALO_KME_DEHALO_CC_dh_pst_medflt5_mvdf_cnt_thr_mask               (0x00700000)
#define  KME_DEHALO_KME_DEHALO_CC_dh_pst_medflt9_mvdf_cnt_thr_mask               (0x000F0000)
#define  KME_DEHALO_KME_DEHALO_CC_dh_pst_medflt_sad_valu_th_mask                 (0x0000FF00)
#define  KME_DEHALO_KME_DEHALO_CC_dh_pst_medflt_mvdif_th_mask                    (0x000000FF)
#define  KME_DEHALO_KME_DEHALO_CC_dh_post_flt_apl_med9(data)                     (0x00800000&((data)<<23))
#define  KME_DEHALO_KME_DEHALO_CC_dh_pst_medflt5_mvdf_cnt_thr(data)              (0x00700000&((data)<<20))
#define  KME_DEHALO_KME_DEHALO_CC_dh_pst_medflt9_mvdf_cnt_thr(data)              (0x000F0000&((data)<<16))
#define  KME_DEHALO_KME_DEHALO_CC_dh_pst_medflt_sad_valu_th(data)                (0x0000FF00&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_CC_dh_pst_medflt_mvdif_th(data)                   (0x000000FF&(data))
#define  KME_DEHALO_KME_DEHALO_CC_get_dh_post_flt_apl_med9(data)                 ((0x00800000&(data))>>23)
#define  KME_DEHALO_KME_DEHALO_CC_get_dh_pst_medflt5_mvdf_cnt_thr(data)          ((0x00700000&(data))>>20)
#define  KME_DEHALO_KME_DEHALO_CC_get_dh_pst_medflt9_mvdf_cnt_thr(data)          ((0x000F0000&(data))>>16)
#define  KME_DEHALO_KME_DEHALO_CC_get_dh_pst_medflt_sad_valu_th(data)            ((0x0000FF00&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_CC_get_dh_pst_medflt_mvdif_th(data)               (0x000000FF&(data))

#define  KME_DEHALO_KME_DEHALO_D0                                               0x1809CDD0
#define  KME_DEHALO_KME_DEHALO_D0_reg_addr                                       "0xB809CDD0"
#define  KME_DEHALO_KME_DEHALO_D0_reg                                            0xB809CDD0
#define  KME_DEHALO_KME_DEHALO_D0_inst_addr                                      "0x002C"
#define  set_KME_DEHALO_KME_DEHALO_D0_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_D0_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_D0_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_D0_reg))
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_conf_gen_pfv_sel_shift                  (8)
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_gen_new_debug_en_shift                  (7)
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_gen_new_debug_sel_shift                 (4)
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_conf_gen_mv_fb_inv_shift                (3)
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_conf_gen_mv_fb_sel_shift                (2)
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_gen_pfv1st_mv_sel_shift                 (1)
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_gen_pfv1st_mv2_sel_shift                (0)
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_conf_gen_pfv_sel_mask                   (0x00000100)
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_gen_new_debug_en_mask                   (0x00000080)
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_gen_new_debug_sel_mask                  (0x00000070)
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_conf_gen_mv_fb_inv_mask                 (0x00000008)
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_conf_gen_mv_fb_sel_mask                 (0x00000004)
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_gen_pfv1st_mv_sel_mask                  (0x00000002)
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_gen_pfv1st_mv2_sel_mask                 (0x00000001)
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_conf_gen_pfv_sel(data)                  (0x00000100&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_gen_new_debug_en(data)                  (0x00000080&((data)<<7))
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_gen_new_debug_sel(data)                 (0x00000070&((data)<<4))
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_conf_gen_mv_fb_inv(data)                (0x00000008&((data)<<3))
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_conf_gen_mv_fb_sel(data)                (0x00000004&((data)<<2))
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_gen_pfv1st_mv_sel(data)                 (0x00000002&((data)<<1))
#define  KME_DEHALO_KME_DEHALO_D0_dh_pfv_gen_pfv1st_mv2_sel(data)                (0x00000001&(data))
#define  KME_DEHALO_KME_DEHALO_D0_get_dh_pfv_conf_gen_pfv_sel(data)              ((0x00000100&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_D0_get_dh_pfv_gen_new_debug_en(data)              ((0x00000080&(data))>>7)
#define  KME_DEHALO_KME_DEHALO_D0_get_dh_pfv_gen_new_debug_sel(data)             ((0x00000070&(data))>>4)
#define  KME_DEHALO_KME_DEHALO_D0_get_dh_pfv_conf_gen_mv_fb_inv(data)            ((0x00000008&(data))>>3)
#define  KME_DEHALO_KME_DEHALO_D0_get_dh_pfv_conf_gen_mv_fb_sel(data)            ((0x00000004&(data))>>2)
#define  KME_DEHALO_KME_DEHALO_D0_get_dh_pfv_gen_pfv1st_mv_sel(data)             ((0x00000002&(data))>>1)
#define  KME_DEHALO_KME_DEHALO_D0_get_dh_pfv_gen_pfv1st_mv2_sel(data)            (0x00000001&(data))

#define  KME_DEHALO_KME_DEHALO_D4                                               0x1809CDD4
#define  KME_DEHALO_KME_DEHALO_D4_reg_addr                                       "0xB809CDD4"
#define  KME_DEHALO_KME_DEHALO_D4_reg                                            0xB809CDD4
#define  KME_DEHALO_KME_DEHALO_D4_inst_addr                                      "0x002D"
#define  set_KME_DEHALO_KME_DEHALO_D4_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_D4_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_D4_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_D4_reg))
#define  KME_DEHALO_KME_DEHALO_D4_dh_pfv_gen_force_dehalo_level2_shift           (18)
#define  KME_DEHALO_KME_DEHALO_D4_dh_pfv_gen_glb_dehalo_gain2_shift              (12)
#define  KME_DEHALO_KME_DEHALO_D4_dh_pfv_gen_force_dehalo_level_shift            (6)
#define  KME_DEHALO_KME_DEHALO_D4_dh_pfv_gen_glb_dehalo_gain_shift               (0)
#define  KME_DEHALO_KME_DEHALO_D4_dh_pfv_gen_force_dehalo_level2_mask            (0x00FC0000)
#define  KME_DEHALO_KME_DEHALO_D4_dh_pfv_gen_glb_dehalo_gain2_mask               (0x0003F000)
#define  KME_DEHALO_KME_DEHALO_D4_dh_pfv_gen_force_dehalo_level_mask             (0x00000FC0)
#define  KME_DEHALO_KME_DEHALO_D4_dh_pfv_gen_glb_dehalo_gain_mask                (0x0000003F)
#define  KME_DEHALO_KME_DEHALO_D4_dh_pfv_gen_force_dehalo_level2(data)           (0x00FC0000&((data)<<18))
#define  KME_DEHALO_KME_DEHALO_D4_dh_pfv_gen_glb_dehalo_gain2(data)              (0x0003F000&((data)<<12))
#define  KME_DEHALO_KME_DEHALO_D4_dh_pfv_gen_force_dehalo_level(data)            (0x00000FC0&((data)<<6))
#define  KME_DEHALO_KME_DEHALO_D4_dh_pfv_gen_glb_dehalo_gain(data)               (0x0000003F&(data))
#define  KME_DEHALO_KME_DEHALO_D4_get_dh_pfv_gen_force_dehalo_level2(data)       ((0x00FC0000&(data))>>18)
#define  KME_DEHALO_KME_DEHALO_D4_get_dh_pfv_gen_glb_dehalo_gain2(data)          ((0x0003F000&(data))>>12)
#define  KME_DEHALO_KME_DEHALO_D4_get_dh_pfv_gen_force_dehalo_level(data)        ((0x00000FC0&(data))>>6)
#define  KME_DEHALO_KME_DEHALO_D4_get_dh_pfv_gen_glb_dehalo_gain(data)           (0x0000003F&(data))

#define  KME_DEHALO_KME_DEHALO_D8                                               0x1809CDD8
#define  KME_DEHALO_KME_DEHALO_D8_reg_addr                                       "0xB809CDD8"
#define  KME_DEHALO_KME_DEHALO_D8_reg                                            0xB809CDD8
#define  KME_DEHALO_KME_DEHALO_D8_inst_addr                                      "0x002E"
#define  set_KME_DEHALO_KME_DEHALO_D8_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_D8_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_D8_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_D8_reg))
#define  KME_DEHALO_KME_DEHALO_D8_dh_rt1_debug_show_sel_shift                    (14)
#define  KME_DEHALO_KME_DEHALO_D8_dh_phflt_row_dumy_num_shift                    (10)
#define  KME_DEHALO_KME_DEHALO_D8_dh_phflt_blk_dumy_num_shift                    (6)
#define  KME_DEHALO_KME_DEHALO_D8_dh_phflt_de_intval_shift                       (0)
#define  KME_DEHALO_KME_DEHALO_D8_dh_rt1_debug_show_sel_mask                     (0x000FC000)
#define  KME_DEHALO_KME_DEHALO_D8_dh_phflt_row_dumy_num_mask                     (0x00003C00)
#define  KME_DEHALO_KME_DEHALO_D8_dh_phflt_blk_dumy_num_mask                     (0x000003C0)
#define  KME_DEHALO_KME_DEHALO_D8_dh_phflt_de_intval_mask                        (0x0000003F)
#define  KME_DEHALO_KME_DEHALO_D8_dh_rt1_debug_show_sel(data)                    (0x000FC000&((data)<<14))
#define  KME_DEHALO_KME_DEHALO_D8_dh_phflt_row_dumy_num(data)                    (0x00003C00&((data)<<10))
#define  KME_DEHALO_KME_DEHALO_D8_dh_phflt_blk_dumy_num(data)                    (0x000003C0&((data)<<6))
#define  KME_DEHALO_KME_DEHALO_D8_dh_phflt_de_intval(data)                       (0x0000003F&(data))
#define  KME_DEHALO_KME_DEHALO_D8_get_dh_rt1_debug_show_sel(data)                ((0x000FC000&(data))>>14)
#define  KME_DEHALO_KME_DEHALO_D8_get_dh_phflt_row_dumy_num(data)                ((0x00003C00&(data))>>10)
#define  KME_DEHALO_KME_DEHALO_D8_get_dh_phflt_blk_dumy_num(data)                ((0x000003C0&(data))>>6)
#define  KME_DEHALO_KME_DEHALO_D8_get_dh_phflt_de_intval(data)                   (0x0000003F&(data))

#define  KME_DEHALO_KME_DEHALO_DC                                               0x1809CDDC
#define  KME_DEHALO_KME_DEHALO_DC_reg_addr                                       "0xB809CDDC"
#define  KME_DEHALO_KME_DEHALO_DC_reg                                            0xB809CDDC
#define  KME_DEHALO_KME_DEHALO_DC_inst_addr                                      "0x002F"
#define  set_KME_DEHALO_KME_DEHALO_DC_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_DC_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_DC_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_DC_reg))
#define  KME_DEHALO_KME_DEHALO_DC_dh_m4_de_intval_shift                          (20)
#define  KME_DEHALO_KME_DEHALO_DC_dh_rt1_fb_lvl_force_value_shift                (10)
#define  KME_DEHALO_KME_DEHALO_DC_dh_fb_lvl_force_value_shift                    (2)
#define  KME_DEHALO_KME_DEHALO_DC_dh_fb_lvl_force_en_shift                       (1)
#define  KME_DEHALO_KME_DEHALO_DC_dh_rt1_fb_lvl_force_en_shift                   (0)
#define  KME_DEHALO_KME_DEHALO_DC_dh_m4_de_intval_mask                           (0x03F00000)
#define  KME_DEHALO_KME_DEHALO_DC_dh_rt1_fb_lvl_force_value_mask                 (0x000FFC00)
#define  KME_DEHALO_KME_DEHALO_DC_dh_fb_lvl_force_value_mask                     (0x000003FC)
#define  KME_DEHALO_KME_DEHALO_DC_dh_fb_lvl_force_en_mask                        (0x00000002)
#define  KME_DEHALO_KME_DEHALO_DC_dh_rt1_fb_lvl_force_en_mask                    (0x00000001)
#define  KME_DEHALO_KME_DEHALO_DC_dh_m4_de_intval(data)                          (0x03F00000&((data)<<20))
#define  KME_DEHALO_KME_DEHALO_DC_dh_rt1_fb_lvl_force_value(data)                (0x000FFC00&((data)<<10))
#define  KME_DEHALO_KME_DEHALO_DC_dh_fb_lvl_force_value(data)                    (0x000003FC&((data)<<2))
#define  KME_DEHALO_KME_DEHALO_DC_dh_fb_lvl_force_en(data)                       (0x00000002&((data)<<1))
#define  KME_DEHALO_KME_DEHALO_DC_dh_rt1_fb_lvl_force_en(data)                   (0x00000001&(data))
#define  KME_DEHALO_KME_DEHALO_DC_get_dh_m4_de_intval(data)                      ((0x03F00000&(data))>>20)
#define  KME_DEHALO_KME_DEHALO_DC_get_dh_rt1_fb_lvl_force_value(data)            ((0x000FFC00&(data))>>10)
#define  KME_DEHALO_KME_DEHALO_DC_get_dh_fb_lvl_force_value(data)                ((0x000003FC&(data))>>2)
#define  KME_DEHALO_KME_DEHALO_DC_get_dh_fb_lvl_force_en(data)                   ((0x00000002&(data))>>1)
#define  KME_DEHALO_KME_DEHALO_DC_get_dh_rt1_fb_lvl_force_en(data)               (0x00000001&(data))

#define  KME_DEHALO_KME_DEHALO_E0                                               0x1809CDE0
#define  KME_DEHALO_KME_DEHALO_E0_reg_addr                                       "0xB809CDE0"
#define  KME_DEHALO_KME_DEHALO_E0_reg                                            0xB809CDE0
#define  KME_DEHALO_KME_DEHALO_E0_inst_addr                                      "0x0030"
#define  set_KME_DEHALO_KME_DEHALO_E0_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_E0_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_E0_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_E0_reg))
#define  KME_DEHALO_KME_DEHALO_E0_dh_m4_preflt_hsta_en_shift                     (29)
#define  KME_DEHALO_KME_DEHALO_E0_dh_m4_pstflt_hsta_en_shift                     (28)
#define  KME_DEHALO_KME_DEHALO_E0_dh_m4_preflt_hsta_num_shift                    (24)
#define  KME_DEHALO_KME_DEHALO_E0_dh_m4_pstflt_hsta_num_shift                    (20)
#define  KME_DEHALO_KME_DEHALO_E0_dh_pstflt_disable_occl_righ_rim_shift          (9)
#define  KME_DEHALO_KME_DEHALO_E0_dh_pstflt_disable_occl_left_rim_shift          (0)
#define  KME_DEHALO_KME_DEHALO_E0_dh_m4_preflt_hsta_en_mask                      (0x20000000)
#define  KME_DEHALO_KME_DEHALO_E0_dh_m4_pstflt_hsta_en_mask                      (0x10000000)
#define  KME_DEHALO_KME_DEHALO_E0_dh_m4_preflt_hsta_num_mask                     (0x0F000000)
#define  KME_DEHALO_KME_DEHALO_E0_dh_m4_pstflt_hsta_num_mask                     (0x00F00000)
#define  KME_DEHALO_KME_DEHALO_E0_dh_pstflt_disable_occl_righ_rim_mask           (0x0003FE00)
#define  KME_DEHALO_KME_DEHALO_E0_dh_pstflt_disable_occl_left_rim_mask           (0x000001FF)
#define  KME_DEHALO_KME_DEHALO_E0_dh_m4_preflt_hsta_en(data)                     (0x20000000&((data)<<29))
#define  KME_DEHALO_KME_DEHALO_E0_dh_m4_pstflt_hsta_en(data)                     (0x10000000&((data)<<28))
#define  KME_DEHALO_KME_DEHALO_E0_dh_m4_preflt_hsta_num(data)                    (0x0F000000&((data)<<24))
#define  KME_DEHALO_KME_DEHALO_E0_dh_m4_pstflt_hsta_num(data)                    (0x00F00000&((data)<<20))
#define  KME_DEHALO_KME_DEHALO_E0_dh_pstflt_disable_occl_righ_rim(data)          (0x0003FE00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_E0_dh_pstflt_disable_occl_left_rim(data)          (0x000001FF&(data))
#define  KME_DEHALO_KME_DEHALO_E0_get_dh_m4_preflt_hsta_en(data)                 ((0x20000000&(data))>>29)
#define  KME_DEHALO_KME_DEHALO_E0_get_dh_m4_pstflt_hsta_en(data)                 ((0x10000000&(data))>>28)
#define  KME_DEHALO_KME_DEHALO_E0_get_dh_m4_preflt_hsta_num(data)                ((0x0F000000&(data))>>24)
#define  KME_DEHALO_KME_DEHALO_E0_get_dh_m4_pstflt_hsta_num(data)                ((0x00F00000&(data))>>20)
#define  KME_DEHALO_KME_DEHALO_E0_get_dh_pstflt_disable_occl_righ_rim(data)      ((0x0003FE00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_E0_get_dh_pstflt_disable_occl_left_rim(data)      (0x000001FF&(data))

#define  KME_DEHALO_KME_DEHALO_E4                                               0x1809CDE4
#define  KME_DEHALO_KME_DEHALO_E4_reg_addr                                       "0xB809CDE4"
#define  KME_DEHALO_KME_DEHALO_E4_reg                                            0xB809CDE4
#define  KME_DEHALO_KME_DEHALO_E4_inst_addr                                      "0x0031"
#define  set_KME_DEHALO_KME_DEHALO_E4_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_E4_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_E4_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_E4_reg))
#define  KME_DEHALO_KME_DEHALO_E4_dh_pstflt_disable_occl_bot_rim_shift           (9)
#define  KME_DEHALO_KME_DEHALO_E4_dh_pstflt_disable_occl_top_rim_shift           (0)
#define  KME_DEHALO_KME_DEHALO_E4_dh_pstflt_disable_occl_bot_rim_mask            (0x0003FE00)
#define  KME_DEHALO_KME_DEHALO_E4_dh_pstflt_disable_occl_top_rim_mask            (0x000001FF)
#define  KME_DEHALO_KME_DEHALO_E4_dh_pstflt_disable_occl_bot_rim(data)           (0x0003FE00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_E4_dh_pstflt_disable_occl_top_rim(data)           (0x000001FF&(data))
#define  KME_DEHALO_KME_DEHALO_E4_get_dh_pstflt_disable_occl_bot_rim(data)       ((0x0003FE00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_E4_get_dh_pstflt_disable_occl_top_rim(data)       (0x000001FF&(data))

#define  KME_DEHALO_KME_DEHALO_E8                                               0x1809CDE8
#define  KME_DEHALO_KME_DEHALO_E8_reg_addr                                       "0xB809CDE8"
#define  KME_DEHALO_KME_DEHALO_E8_reg                                            0xB809CDE8
#define  KME_DEHALO_KME_DEHALO_E8_inst_addr                                      "0x0032"
#define  set_KME_DEHALO_KME_DEHALO_E8_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_E8_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_E8_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_E8_reg))
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med9filt_switch_en_shift              (14)
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med5filt_switch_en_shift              (13)
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med5flt_data_sel_shift                (11)
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med5flt_en_shift                      (10)
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med9flt_data_sel_shift                (8)
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med9flt_en_shift                      (7)
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_pfvfb_sad_sel_shift                     (6)
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_win_size_sel_shift                      (5)
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_med9flt_sel_shift                       (3)
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_med5flt_sel_shift                       (2)
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_med9flt_en_shift                        (1)
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_med5flt_en_shift                        (0)
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med9filt_switch_en_mask               (0x00004000)
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med5filt_switch_en_mask               (0x00002000)
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med5flt_data_sel_mask                 (0x00001800)
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med5flt_en_mask                       (0x00000400)
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med9flt_data_sel_mask                 (0x00000300)
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med9flt_en_mask                       (0x00000080)
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_pfvfb_sad_sel_mask                      (0x00000040)
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_win_size_sel_mask                       (0x00000020)
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_med9flt_sel_mask                        (0x00000018)
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_med5flt_sel_mask                        (0x00000004)
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_med9flt_en_mask                         (0x00000002)
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_med5flt_en_mask                         (0x00000001)
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med9filt_switch_en(data)              (0x00004000&((data)<<14))
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med5filt_switch_en(data)              (0x00002000&((data)<<13))
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med5flt_data_sel(data)                (0x00001800&((data)<<11))
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med5flt_en(data)                      (0x00000400&((data)<<10))
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med9flt_data_sel(data)                (0x00000300&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_E8_dh_phflt_med9flt_en(data)                      (0x00000080&((data)<<7))
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_pfvfb_sad_sel(data)                     (0x00000040&((data)<<6))
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_win_size_sel(data)                      (0x00000020&((data)<<5))
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_med9flt_sel(data)                       (0x00000018&((data)<<3))
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_med5flt_sel(data)                       (0x00000004&((data)<<2))
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_med9flt_en(data)                        (0x00000002&((data)<<1))
#define  KME_DEHALO_KME_DEHALO_E8_dh_rt1_med5flt_en(data)                        (0x00000001&(data))
#define  KME_DEHALO_KME_DEHALO_E8_get_dh_phflt_med9filt_switch_en(data)          ((0x00004000&(data))>>14)
#define  KME_DEHALO_KME_DEHALO_E8_get_dh_phflt_med5filt_switch_en(data)          ((0x00002000&(data))>>13)
#define  KME_DEHALO_KME_DEHALO_E8_get_dh_phflt_med5flt_data_sel(data)            ((0x00001800&(data))>>11)
#define  KME_DEHALO_KME_DEHALO_E8_get_dh_phflt_med5flt_en(data)                  ((0x00000400&(data))>>10)
#define  KME_DEHALO_KME_DEHALO_E8_get_dh_phflt_med9flt_data_sel(data)            ((0x00000300&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_E8_get_dh_phflt_med9flt_en(data)                  ((0x00000080&(data))>>7)
#define  KME_DEHALO_KME_DEHALO_E8_get_dh_rt1_pfvfb_sad_sel(data)                 ((0x00000040&(data))>>6)
#define  KME_DEHALO_KME_DEHALO_E8_get_dh_rt1_win_size_sel(data)                  ((0x00000020&(data))>>5)
#define  KME_DEHALO_KME_DEHALO_E8_get_dh_rt1_med9flt_sel(data)                   ((0x00000018&(data))>>3)
#define  KME_DEHALO_KME_DEHALO_E8_get_dh_rt1_med5flt_sel(data)                   ((0x00000004&(data))>>2)
#define  KME_DEHALO_KME_DEHALO_E8_get_dh_rt1_med9flt_en(data)                    ((0x00000002&(data))>>1)
#define  KME_DEHALO_KME_DEHALO_E8_get_dh_rt1_med5flt_en(data)                    (0x00000001&(data))

#define  KME_DEHALO_KME_DEHALO_EC                                               0x1809CDEC
#define  KME_DEHALO_KME_DEHALO_EC_reg_addr                                       "0xB809CDEC"
#define  KME_DEHALO_KME_DEHALO_EC_reg                                            0xB809CDEC
#define  KME_DEHALO_KME_DEHALO_EC_inst_addr                                      "0x0033"
#define  set_KME_DEHALO_KME_DEHALO_EC_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_EC_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_EC_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_EC_reg))
#define  KME_DEHALO_KME_DEHALO_EC_dh_mvdiff_fblvl_shift_shift                    (15)
#define  KME_DEHALO_KME_DEHALO_EC_dh_fblvl_mvdiff_s2_shift                       (9)
#define  KME_DEHALO_KME_DEHALO_EC_dh_fblvl_mvdiff_s1_shift                       (3)
#define  KME_DEHALO_KME_DEHALO_EC_dh_fblvl_mvdiff_sel_mode_shift                 (2)
#define  KME_DEHALO_KME_DEHALO_EC_dh_fblvl_mvdiff_win_mode_shift                 (1)
#define  KME_DEHALO_KME_DEHALO_EC_dh_fblvl_mvdiff_gain_en_shift                  (0)
#define  KME_DEHALO_KME_DEHALO_EC_dh_mvdiff_fblvl_shift_mask                     (0x00078000)
#define  KME_DEHALO_KME_DEHALO_EC_dh_fblvl_mvdiff_s2_mask                        (0x00007E00)
#define  KME_DEHALO_KME_DEHALO_EC_dh_fblvl_mvdiff_s1_mask                        (0x000001F8)
#define  KME_DEHALO_KME_DEHALO_EC_dh_fblvl_mvdiff_sel_mode_mask                  (0x00000004)
#define  KME_DEHALO_KME_DEHALO_EC_dh_fblvl_mvdiff_win_mode_mask                  (0x00000002)
#define  KME_DEHALO_KME_DEHALO_EC_dh_fblvl_mvdiff_gain_en_mask                   (0x00000001)
#define  KME_DEHALO_KME_DEHALO_EC_dh_mvdiff_fblvl_shift(data)                    (0x00078000&((data)<<15))
#define  KME_DEHALO_KME_DEHALO_EC_dh_fblvl_mvdiff_s2(data)                       (0x00007E00&((data)<<9))
#define  KME_DEHALO_KME_DEHALO_EC_dh_fblvl_mvdiff_s1(data)                       (0x000001F8&((data)<<3))
#define  KME_DEHALO_KME_DEHALO_EC_dh_fblvl_mvdiff_sel_mode(data)                 (0x00000004&((data)<<2))
#define  KME_DEHALO_KME_DEHALO_EC_dh_fblvl_mvdiff_win_mode(data)                 (0x00000002&((data)<<1))
#define  KME_DEHALO_KME_DEHALO_EC_dh_fblvl_mvdiff_gain_en(data)                  (0x00000001&(data))
#define  KME_DEHALO_KME_DEHALO_EC_get_dh_mvdiff_fblvl_shift(data)                ((0x00078000&(data))>>15)
#define  KME_DEHALO_KME_DEHALO_EC_get_dh_fblvl_mvdiff_s2(data)                   ((0x00007E00&(data))>>9)
#define  KME_DEHALO_KME_DEHALO_EC_get_dh_fblvl_mvdiff_s1(data)                   ((0x000001F8&(data))>>3)
#define  KME_DEHALO_KME_DEHALO_EC_get_dh_fblvl_mvdiff_sel_mode(data)             ((0x00000004&(data))>>2)
#define  KME_DEHALO_KME_DEHALO_EC_get_dh_fblvl_mvdiff_win_mode(data)             ((0x00000002&(data))>>1)
#define  KME_DEHALO_KME_DEHALO_EC_get_dh_fblvl_mvdiff_gain_en(data)              (0x00000001&(data))

#define  KME_DEHALO_KME_DEHALO_F0                                               0x1809CDF0
#define  KME_DEHALO_KME_DEHALO_F0_reg_addr                                       "0xB809CDF0"
#define  KME_DEHALO_KME_DEHALO_F0_reg                                            0xB809CDF0
#define  KME_DEHALO_KME_DEHALO_F0_inst_addr                                      "0x0034"
#define  set_KME_DEHALO_KME_DEHALO_F0_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_F0_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_F0_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_F0_reg))
#define  KME_DEHALO_KME_DEHALO_F0_dh_dtl_curve_x1_shift                          (24)
#define  KME_DEHALO_KME_DEHALO_F0_dh_fblvl_mvdiff_x2_shift                       (12)
#define  KME_DEHALO_KME_DEHALO_F0_dh_fblvl_mvdiff_x1_shift                       (0)
#define  KME_DEHALO_KME_DEHALO_F0_dh_dtl_curve_x1_mask                           (0xFF000000)
#define  KME_DEHALO_KME_DEHALO_F0_dh_fblvl_mvdiff_x2_mask                        (0x00FFF000)
#define  KME_DEHALO_KME_DEHALO_F0_dh_fblvl_mvdiff_x1_mask                        (0x00000FFF)
#define  KME_DEHALO_KME_DEHALO_F0_dh_dtl_curve_x1(data)                          (0xFF000000&((data)<<24))
#define  KME_DEHALO_KME_DEHALO_F0_dh_fblvl_mvdiff_x2(data)                       (0x00FFF000&((data)<<12))
#define  KME_DEHALO_KME_DEHALO_F0_dh_fblvl_mvdiff_x1(data)                       (0x00000FFF&(data))
#define  KME_DEHALO_KME_DEHALO_F0_get_dh_dtl_curve_x1(data)                      ((0xFF000000&(data))>>24)
#define  KME_DEHALO_KME_DEHALO_F0_get_dh_fblvl_mvdiff_x2(data)                   ((0x00FFF000&(data))>>12)
#define  KME_DEHALO_KME_DEHALO_F0_get_dh_fblvl_mvdiff_x1(data)                   (0x00000FFF&(data))

#define  KME_DEHALO_KME_DEHALO_F4                                               0x1809CDF4
#define  KME_DEHALO_KME_DEHALO_F4_reg_addr                                       "0xB809CDF4"
#define  KME_DEHALO_KME_DEHALO_F4_reg                                            0xB809CDF4
#define  KME_DEHALO_KME_DEHALO_F4_inst_addr                                      "0x0035"
#define  set_KME_DEHALO_KME_DEHALO_F4_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_F4_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_F4_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_F4_reg))
#define  KME_DEHALO_KME_DEHALO_F4_dh_dtl_curve_x2_shift                          (24)
#define  KME_DEHALO_KME_DEHALO_F4_dh_fblvl_mvdiff_y1_shift                       (12)
#define  KME_DEHALO_KME_DEHALO_F4_dh_fblvl_mvdiff_x3_shift                       (0)
#define  KME_DEHALO_KME_DEHALO_F4_dh_dtl_curve_x2_mask                           (0xFF000000)
#define  KME_DEHALO_KME_DEHALO_F4_dh_fblvl_mvdiff_y1_mask                        (0x00FFF000)
#define  KME_DEHALO_KME_DEHALO_F4_dh_fblvl_mvdiff_x3_mask                        (0x00000FFF)
#define  KME_DEHALO_KME_DEHALO_F4_dh_dtl_curve_x2(data)                          (0xFF000000&((data)<<24))
#define  KME_DEHALO_KME_DEHALO_F4_dh_fblvl_mvdiff_y1(data)                       (0x00FFF000&((data)<<12))
#define  KME_DEHALO_KME_DEHALO_F4_dh_fblvl_mvdiff_x3(data)                       (0x00000FFF&(data))
#define  KME_DEHALO_KME_DEHALO_F4_get_dh_dtl_curve_x2(data)                      ((0xFF000000&(data))>>24)
#define  KME_DEHALO_KME_DEHALO_F4_get_dh_fblvl_mvdiff_y1(data)                   ((0x00FFF000&(data))>>12)
#define  KME_DEHALO_KME_DEHALO_F4_get_dh_fblvl_mvdiff_x3(data)                   (0x00000FFF&(data))

#define  KME_DEHALO_KME_DEHALO_F8                                               0x1809CDF8
#define  KME_DEHALO_KME_DEHALO_F8_reg_addr                                       "0xB809CDF8"
#define  KME_DEHALO_KME_DEHALO_F8_reg                                            0xB809CDF8
#define  KME_DEHALO_KME_DEHALO_F8_inst_addr                                      "0x0036"
#define  set_KME_DEHALO_KME_DEHALO_F8_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_F8_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_F8_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_F8_reg))
#define  KME_DEHALO_KME_DEHALO_F8_dh_dtl_curve_y1_shift                          (24)
#define  KME_DEHALO_KME_DEHALO_F8_dh_fblvl_mvdiff_y3_shift                       (12)
#define  KME_DEHALO_KME_DEHALO_F8_dh_fblvl_mvdiff_y2_shift                       (0)
#define  KME_DEHALO_KME_DEHALO_F8_dh_dtl_curve_y1_mask                           (0xFF000000)
#define  KME_DEHALO_KME_DEHALO_F8_dh_fblvl_mvdiff_y3_mask                        (0x00FFF000)
#define  KME_DEHALO_KME_DEHALO_F8_dh_fblvl_mvdiff_y2_mask                        (0x00000FFF)
#define  KME_DEHALO_KME_DEHALO_F8_dh_dtl_curve_y1(data)                          (0xFF000000&((data)<<24))
#define  KME_DEHALO_KME_DEHALO_F8_dh_fblvl_mvdiff_y3(data)                       (0x00FFF000&((data)<<12))
#define  KME_DEHALO_KME_DEHALO_F8_dh_fblvl_mvdiff_y2(data)                       (0x00000FFF&(data))
#define  KME_DEHALO_KME_DEHALO_F8_get_dh_dtl_curve_y1(data)                      ((0xFF000000&(data))>>24)
#define  KME_DEHALO_KME_DEHALO_F8_get_dh_fblvl_mvdiff_y3(data)                   ((0x00FFF000&(data))>>12)
#define  KME_DEHALO_KME_DEHALO_F8_get_dh_fblvl_mvdiff_y2(data)                   (0x00000FFF&(data))

#define  KME_DEHALO_KME_DEHALO_FC                                               0x1809CDFC
#define  KME_DEHALO_KME_DEHALO_FC_reg_addr                                       "0xB809CDFC"
#define  KME_DEHALO_KME_DEHALO_FC_reg                                            0xB809CDFC
#define  KME_DEHALO_KME_DEHALO_FC_inst_addr                                      "0x0037"
#define  set_KME_DEHALO_KME_DEHALO_FC_reg(data)                                  (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_FC_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_FC_reg                                        (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_FC_reg))
#define  KME_DEHALO_KME_DEHALO_FC_dh_dtl_gain_en_shift                           (23)
#define  KME_DEHALO_KME_DEHALO_FC_dh_fb_dtl_shift_shift                          (20)
#define  KME_DEHALO_KME_DEHALO_FC_dh_ph_dtl_getmode_shift                        (18)
#define  KME_DEHALO_KME_DEHALO_FC_dh_dtl_curve_s1_shift                          (8)
#define  KME_DEHALO_KME_DEHALO_FC_dh_dtl_curve_y2_shift                          (0)
#define  KME_DEHALO_KME_DEHALO_FC_dh_dtl_gain_en_mask                            (0x00800000)
#define  KME_DEHALO_KME_DEHALO_FC_dh_fb_dtl_shift_mask                           (0x00700000)
#define  KME_DEHALO_KME_DEHALO_FC_dh_ph_dtl_getmode_mask                         (0x000C0000)
#define  KME_DEHALO_KME_DEHALO_FC_dh_dtl_curve_s1_mask                           (0x0003FF00)
#define  KME_DEHALO_KME_DEHALO_FC_dh_dtl_curve_y2_mask                           (0x000000FF)
#define  KME_DEHALO_KME_DEHALO_FC_dh_dtl_gain_en(data)                           (0x00800000&((data)<<23))
#define  KME_DEHALO_KME_DEHALO_FC_dh_fb_dtl_shift(data)                          (0x00700000&((data)<<20))
#define  KME_DEHALO_KME_DEHALO_FC_dh_ph_dtl_getmode(data)                        (0x000C0000&((data)<<18))
#define  KME_DEHALO_KME_DEHALO_FC_dh_dtl_curve_s1(data)                          (0x0003FF00&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_FC_dh_dtl_curve_y2(data)                          (0x000000FF&(data))
#define  KME_DEHALO_KME_DEHALO_FC_get_dh_dtl_gain_en(data)                       ((0x00800000&(data))>>23)
#define  KME_DEHALO_KME_DEHALO_FC_get_dh_fb_dtl_shift(data)                      ((0x00700000&(data))>>20)
#define  KME_DEHALO_KME_DEHALO_FC_get_dh_ph_dtl_getmode(data)                    ((0x000C0000&(data))>>18)
#define  KME_DEHALO_KME_DEHALO_FC_get_dh_dtl_curve_s1(data)                      ((0x0003FF00&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_FC_get_dh_dtl_curve_y2(data)                      (0x000000FF&(data))

#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0                                       0x1809CD00
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_reg_addr                               "0xB809CD00"
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_reg                                    0xB809CD00
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_inst_addr                              "0x0038"
#define  set_KME_DEHALO_KME_DEHALO_LOCAL_FB_0_reg(data)                          (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_LOCAL_FB_0_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_LOCAL_FB_0_reg                                (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_LOCAL_FB_0_reg))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_local_fb_dtl_sad_y_gain_shift          (24)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_local_fb_dtl_mv_th_shift               (16)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_local_fb_pfv_diff_shift                (8)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_local_fb_dtl_th_shift                  (0)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_local_fb_dtl_sad_y_gain_mask           (0x1F000000)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_local_fb_dtl_mv_th_mask                (0x003F0000)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_local_fb_pfv_diff_mask                 (0x00003F00)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_local_fb_dtl_th_mask                   (0x0000007F)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_local_fb_dtl_sad_y_gain(data)          (0x1F000000&((data)<<24))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_local_fb_dtl_mv_th(data)               (0x003F0000&((data)<<16))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_local_fb_pfv_diff(data)                (0x00003F00&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_local_fb_dtl_th(data)                  (0x0000007F&(data))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_get_local_fb_dtl_sad_y_gain(data)      ((0x1F000000&(data))>>24)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_get_local_fb_dtl_mv_th(data)           ((0x003F0000&(data))>>16)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_get_local_fb_pfv_diff(data)            ((0x00003F00&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_0_get_local_fb_dtl_th(data)              (0x0000007F&(data))

#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1                                       0x1809CD04
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_reg_addr                               "0xB809CD04"
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_reg                                    0xB809CD04
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_inst_addr                              "0x0039"
#define  set_KME_DEHALO_KME_DEHALO_LOCAL_FB_1_reg(data)                          (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_LOCAL_FB_1_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_LOCAL_FB_1_reg                                (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_LOCAL_FB_1_reg))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_local_fb_mv_th_3_shift                 (24)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_local_fb_mv_th_2_shift                 (16)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_local_fb_mv_th_1_shift                 (8)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_local_fb_mv_th_0_shift                 (0)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_local_fb_mv_th_3_mask                  (0xFF000000)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_local_fb_mv_th_2_mask                  (0x00FF0000)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_local_fb_mv_th_1_mask                  (0x0000FF00)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_local_fb_mv_th_0_mask                  (0x000000FF)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_local_fb_mv_th_3(data)                 (0xFF000000&((data)<<24))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_local_fb_mv_th_2(data)                 (0x00FF0000&((data)<<16))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_local_fb_mv_th_1(data)                 (0x0000FF00&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_local_fb_mv_th_0(data)                 (0x000000FF&(data))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_get_local_fb_mv_th_3(data)             ((0xFF000000&(data))>>24)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_get_local_fb_mv_th_2(data)             ((0x00FF0000&(data))>>16)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_get_local_fb_mv_th_1(data)             ((0x0000FF00&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_1_get_local_fb_mv_th_0(data)             (0x000000FF&(data))

#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2                                       0x1809CD08
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_reg_addr                               "0xB809CD08"
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_reg                                    0xB809CD08
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_inst_addr                              "0x003A"
#define  set_KME_DEHALO_KME_DEHALO_LOCAL_FB_2_reg(data)                          (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_LOCAL_FB_2_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_LOCAL_FB_2_reg                                (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_LOCAL_FB_2_reg))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_local_fb_th_bound3_shift               (24)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_local_fb_th_bound_shift                (16)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_local_fb_dtl_sad_x_th1_shift           (8)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_local_fb_dtl_sad_x_th0_shift           (0)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_local_fb_th_bound3_mask                (0x0F000000)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_local_fb_th_bound_mask                 (0x003F0000)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_local_fb_dtl_sad_x_th1_mask            (0x0000FF00)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_local_fb_dtl_sad_x_th0_mask            (0x000000FF)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_local_fb_th_bound3(data)               (0x0F000000&((data)<<24))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_local_fb_th_bound(data)                (0x003F0000&((data)<<16))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_local_fb_dtl_sad_x_th1(data)           (0x0000FF00&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_local_fb_dtl_sad_x_th0(data)           (0x000000FF&(data))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_get_local_fb_th_bound3(data)           ((0x0F000000&(data))>>24)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_get_local_fb_th_bound(data)            ((0x003F0000&(data))>>16)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_get_local_fb_dtl_sad_x_th1(data)       ((0x0000FF00&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_2_get_local_fb_dtl_sad_x_th0(data)       (0x000000FF&(data))

#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_3                                       0x1809CD0C
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_3_reg_addr                               "0xB809CD0C"
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_3_reg                                    0xB809CD0C
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_3_inst_addr                              "0x003B"
#define  set_KME_DEHALO_KME_DEHALO_LOCAL_FB_3_reg(data)                          (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_LOCAL_FB_3_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_LOCAL_FB_3_reg                                (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_LOCAL_FB_3_reg))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_3_local_fb_dtl_sad_y_th1_shift           (16)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_3_local_fb_dtl_sad_y_th0_shift           (0)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_3_local_fb_dtl_sad_y_th1_mask            (0x03FF0000)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_3_local_fb_dtl_sad_y_th0_mask            (0x000003FF)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_3_local_fb_dtl_sad_y_th1(data)           (0x03FF0000&((data)<<16))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_3_local_fb_dtl_sad_y_th0(data)           (0x000003FF&(data))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_3_get_local_fb_dtl_sad_y_th1(data)       ((0x03FF0000&(data))>>16)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_3_get_local_fb_dtl_sad_y_th0(data)       (0x000003FF&(data))

#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4                                       0x1809CD98
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_reg_addr                               "0xB809CD98"
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_reg                                    0xB809CD98
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_inst_addr                              "0x003C"
#define  set_KME_DEHALO_KME_DEHALO_LOCAL_FB_4_reg(data)                          (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_LOCAL_FB_4_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_LOCAL_FB_4_reg                                (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_LOCAL_FB_4_reg))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_local_fb_dtl_mv_cnt_shift              (24)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_local_fb_all_fb_th_bound_shift         (16)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_local_fb_th_all_fb_pn_shift            (8)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_local_fb_th_all_fb_bnd_en_shift        (0)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_local_fb_dtl_mv_cnt_mask               (0x1F000000)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_local_fb_all_fb_th_bound_mask          (0x00FF0000)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_local_fb_th_all_fb_pn_mask             (0x00000F00)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_local_fb_th_all_fb_bnd_en_mask         (0x00000003)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_local_fb_dtl_mv_cnt(data)              (0x1F000000&((data)<<24))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_local_fb_all_fb_th_bound(data)         (0x00FF0000&((data)<<16))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_local_fb_th_all_fb_pn(data)            (0x00000F00&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_local_fb_th_all_fb_bnd_en(data)        (0x00000003&(data))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_get_local_fb_dtl_mv_cnt(data)          ((0x1F000000&(data))>>24)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_get_local_fb_all_fb_th_bound(data)     ((0x00FF0000&(data))>>16)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_get_local_fb_th_all_fb_pn(data)        ((0x00000F00&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_4_get_local_fb_th_all_fb_bnd_en(data)    (0x00000003&(data))

#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_5                                       0x1809CD9C
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_5_reg_addr                               "0xB809CD9C"
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_5_reg                                    0xB809CD9C
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_5_inst_addr                              "0x003D"
#define  set_KME_DEHALO_KME_DEHALO_LOCAL_FB_5_reg(data)                          (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_LOCAL_FB_5_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_LOCAL_FB_5_reg                                (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_LOCAL_FB_5_reg))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_5_local_fb_dtl_sad_idx_shift             (20)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_5_local_fb_cnt_dtl_idx_shift             (16)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_5_local_fb_cnt_dtl_shift                 (0)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_5_local_fb_dtl_sad_idx_mask              (0x00F00000)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_5_local_fb_cnt_dtl_idx_mask              (0x000F0000)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_5_local_fb_cnt_dtl_mask                  (0x00007FFF)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_5_local_fb_dtl_sad_idx(data)             (0x00F00000&((data)<<20))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_5_local_fb_cnt_dtl_idx(data)             (0x000F0000&((data)<<16))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_5_local_fb_cnt_dtl(data)                 (0x00007FFF&(data))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_5_get_local_fb_dtl_sad_idx(data)         ((0x00F00000&(data))>>20)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_5_get_local_fb_cnt_dtl_idx(data)         ((0x000F0000&(data))>>16)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_5_get_local_fb_cnt_dtl(data)             (0x00007FFF&(data))

#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_6                                       0x1809CDA0
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_6_reg_addr                               "0xB809CDA0"
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_6_reg                                    0xB809CDA0
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_6_inst_addr                              "0x003E"
#define  set_KME_DEHALO_KME_DEHALO_LOCAL_FB_6_reg(data)                          (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_LOCAL_FB_6_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_LOCAL_FB_6_reg                                (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_LOCAL_FB_6_reg))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_6_local_fb_dtl_sad_shift                 (0)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_6_local_fb_dtl_sad_mask                  (0xFFFFFFFF)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_6_local_fb_dtl_sad(data)                 (0xFFFFFFFF&(data))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_6_get_local_fb_dtl_sad(data)             (0xFFFFFFFF&(data))

#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7                                       0x1809CDA4
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_reg_addr                               "0xB809CDA4"
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_reg                                    0xB809CDA4
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_inst_addr                              "0x003F"
#define  set_KME_DEHALO_KME_DEHALO_LOCAL_FB_7_reg(data)                          (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_LOCAL_FB_7_reg)=data)
#define  get_KME_DEHALO_KME_DEHALO_LOCAL_FB_7_reg                                (*((volatile unsigned int*)KME_DEHALO_KME_DEHALO_LOCAL_FB_7_reg))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_mvn_shift                     (24)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_mvp_shift                     (16)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_occ_cor_th_shift              (8)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_alpha_shift                   (4)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_dbg_shift                     (2)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_occ_cor_en_shift              (1)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_en_shift                      (0)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_mvn_mask                      (0xFF000000)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_mvp_mask                      (0x00FF0000)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_occ_cor_th_mask               (0x00001F00)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_alpha_mask                    (0x000000F0)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_dbg_mask                      (0x00000004)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_occ_cor_en_mask               (0x00000002)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_en_mask                       (0x00000001)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_mvn(data)                     (0xFF000000&((data)<<24))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_mvp(data)                     (0x00FF0000&((data)<<16))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_occ_cor_th(data)              (0x00001F00&((data)<<8))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_alpha(data)                   (0x000000F0&((data)<<4))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_dbg(data)                     (0x00000004&((data)<<2))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_occ_cor_en(data)              (0x00000002&((data)<<1))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_local_fb_en(data)                      (0x00000001&(data))
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_get_local_fb_mvn(data)                 ((0xFF000000&(data))>>24)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_get_local_fb_mvp(data)                 ((0x00FF0000&(data))>>16)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_get_local_fb_occ_cor_th(data)          ((0x00001F00&(data))>>8)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_get_local_fb_alpha(data)               ((0x000000F0&(data))>>4)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_get_local_fb_dbg(data)                 ((0x00000004&(data))>>2)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_get_local_fb_occ_cor_en(data)          ((0x00000002&(data))>>1)
#define  KME_DEHALO_KME_DEHALO_LOCAL_FB_7_get_local_fb_en(data)                  (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_DEHALO register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_mv_blk_num:9;
        RBus_UInt32  dh_det_row_posi:8;
        RBus_UInt32  dh_logo_blk_size:1;
        RBus_UInt32  dh_logo_row_size:2;
        RBus_UInt32  dh_mv_blk_size:1;
        RBus_UInt32  dh_mv_row_size:2;
        RBus_UInt32  dh_yx_ratio:2;
        RBus_UInt32  dh_out_crc_en:1;
        RBus_UInt32  dh_sram_ls:1;
        RBus_UInt32  dh_scene_change_on:1;
        RBus_UInt32  dh_scene_change_mode:1;
        RBus_UInt32  dh_in_crc_en:1;
        RBus_UInt32  dh_rdbk_en:1;
        RBus_UInt32  dh_en:1;
    };
}kme_dehalo_kme_dehalo_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dh_sc_bv_sel:1;
        RBus_UInt32  dh_debug_show_vbuf_info_en:1;
        RBus_UInt32  dh_vbuf_double_scan_en:1;
        RBus_UInt32  dh_me2cal_in_480x270_mod:1;
        RBus_UInt32  dh_logo_row_num:9;
        RBus_UInt32  dh_logo_blk_num:9;
        RBus_UInt32  dh_mv_row_num:9;
    };
}kme_dehalo_kme_dehalo_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_me1_me2_info_to_mc:1;
        RBus_UInt32  dh_med_patt_row_size:1;
        RBus_UInt32  dh_med_patt_blk_size:1;
        RBus_UInt32  dh_pre_patt_row_size:1;
        RBus_UInt32  dh_pre_patt_blk_size:1;
        RBus_UInt32  dh_top_ofst:9;
        RBus_UInt32  dh_right_ofst:9;
        RBus_UInt32  dh_left_ofst:9;
    };
}kme_dehalo_kme_dehalo_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dh_pck_force_pedal_0:1;
        RBus_UInt32  dh_pck_force_fbcovalpha_0:1;
        RBus_UInt32  dh_vbuf_row_mask:1;
        RBus_UInt32  dh_rt1_drt_2x2_sel:1;
        RBus_UInt32  dh_rt1_right_ofst:9;
        RBus_UInt32  dh_rt1_left_ofst:9;
        RBus_UInt32  dh_bot_ofst:9;
    };
}kme_dehalo_kme_dehalo_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dh_rt1_bv_sel:1;
        RBus_UInt32  dh_pfv_conf_gen_bv_sel:1;
        RBus_UInt32  dh_ac_dc_flg_en:1;
        RBus_UInt32  dh_ac_dc_sel:1;
        RBus_UInt32  dh_rt2_left_ofst:9;
        RBus_UInt32  dh_rt1_bot_ofst:9;
        RBus_UInt32  dh_rt1_top_ofst:9;
    };
}kme_dehalo_kme_dehalo_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dh_force_phase_en:1;
        RBus_UInt32  dh_debug_show_me1_me2:2;
        RBus_UInt32  dh_rt2_bot_ofst:9;
        RBus_UInt32  dh_rt2_top_ofst:9;
        RBus_UInt32  dh_rt2_right_ofst:9;
    };
}kme_dehalo_kme_dehalo_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_mv_med_pat_en:1;
        RBus_UInt32  dh_mv_pat_mv_x:11;
        RBus_UInt32  dh_mv_pat_mv_y:10;
        RBus_UInt32  dh_mv_pat_mode:2;
        RBus_UInt32  dh_mv_pat_en:2;
        RBus_UInt32  dh_force_phase:6;
    };
}kme_dehalo_kme_dehalo_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_dob_dly_sel:4;
        RBus_UInt32  dh_preflt_vs_sel:1;
        RBus_UInt32  dh_mv_pat_v0:9;
        RBus_UInt32  dh_mv_pat_h1:9;
        RBus_UInt32  dh_mv_pat_h0:9;
    };
}kme_dehalo_kme_dehalo_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dh_me1_dbg_mv_num:9;
        RBus_UInt32  dh_pst_pat_eros_mode:1;
        RBus_UInt32  dh_med_pat_eros_mode:1;
        RBus_UInt32  dh_pre_pat_eros_mode:1;
        RBus_UInt32  dh_med_patt_info_to_mc:1;
        RBus_UInt32  dh_mv_pat_self_en:2;
        RBus_UInt32  dh_mv_pat_self_cycle:6;
        RBus_UInt32  dh_mv_med_pat_self_en:1;
        RBus_UInt32  dh_mv_pat_v1:9;
    };
}kme_dehalo_kme_dehalo_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dh_ph_flt_way:4;
        RBus_UInt32  dh_ph_flt_win_size:1;
        RBus_UInt32  dummy1809cd34_24:1;
        RBus_UInt32  dh_phbv1_flt_en:1;
        RBus_UInt32  dummy1809cd34_22:1;
        RBus_UInt32  dh_phbv0_flt_en:1;
        RBus_UInt32  dh_input_buf_byps:1;
        RBus_UInt32  dh_pst_patt_row_size:1;
        RBus_UInt32  dh_pst_patt_blk_size:1;
        RBus_UInt32  dh_patt_row_num:9;
        RBus_UInt32  dh_patt_blk_num:9;
    };
}kme_dehalo_kme_dehalo_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_phfilt_switch_en:1;
        RBus_UInt32  dh_ph_flt5_mvdf_cnt_thr:3;
        RBus_UInt32  dh_ph_flt9_mvdf_cnt_thr:4;
        RBus_UInt32  dh_ph_flt25_mvdf_cnt_thr:5;
        RBus_UInt32  dh_ph_flt_sad_valu_th:8;
        RBus_UInt32  dh_ph_flt_mvdif_th:8;
        RBus_UInt32  dh_ph_flt_mod:3;
    };
}kme_dehalo_kme_dehalo_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dh_fblvl_x_mv_en:1;
        RBus_UInt32  dh_bypass_pstflt_tim:1;
        RBus_UInt32  dh_bypass_preflt_tim:1;
        RBus_UInt32  dh_fblvl_cut:8;
        RBus_UInt32  dh_rt2_mv_debug_sel:6;
        RBus_UInt32  dh_rt1_mv_debug_sel:6;
        RBus_UInt32  dummy1809cd3c_2_1:2;
        RBus_UInt32  dehalo_logo_sync_trg_sel:1;
    };
}kme_dehalo_kme_dehalo_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809cd40_31_24:8;
        RBus_UInt32  dummy1809cd40_23_16:8;
        RBus_UInt32  dummy1809cd40_15_8:8;
        RBus_UInt32  valid_regen_shift_add:4;
        RBus_UInt32  valid_regen_shift_add_en:1;
        RBus_UInt32  valid_regen_disable:1;
        RBus_UInt32  dh_rt2_bnd_h_mode:1;
        RBus_UInt32  dh_rt2_bnd_v_mode:1;
    };
}kme_dehalo_kme_dehalo_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  dh_ph_fbgen_sft:4;
        RBus_UInt32  dh_ph_fbgen_slp:8;
        RBus_UInt32  dh_ph_fbgen_th:10;
        RBus_UInt32  dummy1809cd44_0:1;
    };
}kme_dehalo_kme_dehalo_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  dh_oobgain_force_0:1;
        RBus_UInt32  dh_ph_fbgen_max:10;
        RBus_UInt32  dh_ph_fbgen_min:10;
    };
}kme_dehalo_kme_dehalo_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_xidx_shift:10;
        RBus_UInt32  dh_rt1_force_idx:1;
        RBus_UInt32  dh_rt1_ooby_shft:3;
        RBus_UInt32  dh_rt1_oobx_shft:3;
        RBus_UInt32  dh_rt1_ysec_shft:3;
        RBus_UInt32  dh_rt1_yfst_shft:3;
        RBus_UInt32  dh_rt1_xthr_shft:3;
        RBus_UInt32  dh_rt1_xsec_shft:3;
        RBus_UInt32  dh_rt1_xfst_shft:3;
    };
}kme_dehalo_kme_dehalo_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dh_rt2_point_to_sblk_mode:3;
        RBus_UInt32  dh_rt1_point_to_single_blk:1;
        RBus_UInt32  dh_rt1_yidx_shift:10;
        RBus_UInt32  dh_rt1_c_xrounding0:9;
        RBus_UInt32  dh_rt1_rt_sr:4;
        RBus_UInt32  dh_rt1_ythr_shft:3;
    };
}kme_dehalo_kme_dehalo_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  dh_rt1_c_yrounding1:9;
        RBus_UInt32  dh_rt1_c_xrounding1:9;
        RBus_UInt32  dh_rt1_c_yrounding0:9;
    };
}kme_dehalo_kme_dehalo_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dh_rt1_penalty2:10;
        RBus_UInt32  dh_rt1_penalty1:10;
        RBus_UInt32  dh_rt1_penalty0:10;
    };
}kme_dehalo_kme_dehalo_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dh_rt1_flt_sad_valu_th:8;
        RBus_UInt32  dh_rt1_flt_mvdif_th:8;
        RBus_UInt32  dh_rt1_flt_mod:3;
        RBus_UInt32  dh_rt1_flt_way:4;
        RBus_UInt32  dummy1809cd5c_6:1;
        RBus_UInt32  dh_rt1_flt_en:1;
        RBus_UInt32  dh_rt1_ern_dat_shft:4;
        RBus_UInt32  dh_mvdiff_pfv_sel_en:1;
    };
}kme_dehalo_kme_dehalo_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  dummy1809cd60_26_19:8;
        RBus_UInt32  dummy1809cd60_18_16:3;
        RBus_UInt32  dummy1809cd60_15_8:8;
        RBus_UInt32  dummy1809cd60_7:1;
        RBus_UInt32  dh_rt1_flt5_mvdf_cnt_thr:3;
        RBus_UInt32  dh_rt1_flt9_mvdf_cnt_thr:4;
    };
}kme_dehalo_kme_dehalo_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dh_rt1_fbgen_th:10;
        RBus_UInt32  dummy1809cd64_15_8:8;
        RBus_UInt32  dummy1809cd64_7_0:8;
    };
}kme_dehalo_kme_dehalo_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  dh_rt1_fbgen_min:10;
        RBus_UInt32  dh_rt1_fbgen_sft:4;
        RBus_UInt32  dh_rt1_fbgen_slp:8;
    };
}kme_dehalo_kme_dehalo_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dh_all_fblvl_bld_coef:6;
        RBus_UInt32  dh_ph_fblvl_bld_coef:6;
        RBus_UInt32  dh_ondtl_nooccl_phinf_sel:1;
        RBus_UInt32  dh_rt1_force_fblvl_bld_coef_val:6;
        RBus_UInt32  dh_rt1_force_fblvl_bld_coef_en:1;
        RBus_UInt32  dh_rt1_fbgen_max:10;
    };
}kme_dehalo_kme_dehalo_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pfv_gen_ped_limit:8;
        RBus_UInt32  dh_pfv_gen_diff_slp0:4;
        RBus_UInt32  dh_pfv_gen_diff_thr0:8;
        RBus_UInt32  dh_pfv_con_gen_debug_en:1;
        RBus_UInt32  dh_pfv_con_gen_debug_sel:4;
        RBus_UInt32  dh_pfv_conf_gen_flg_force_uov:1;
        RBus_UInt32  dh_pfv_conf_gen_flg_force_cov:1;
        RBus_UInt32  dh_pfv_conf_gen_andor_fb_sel:1;
        RBus_UInt32  dh_pfv_conf_gen_flg_fb_sel:1;
        RBus_UInt32  dh_pfv_conf_gen_flg_force_en:1;
        RBus_UInt32  dh_pfv_conf_gen_curve_sel:1;
        RBus_UInt32  dh_pfv_conf_gen_pfv_max_min_sel:1;
    };
}kme_dehalo_kme_dehalo_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  dh_rt2_oobgain_force_0:1;
        RBus_UInt32  dh_rt2_force_mv_y:10;
        RBus_UInt32  dh_rt2_force_mv_x:11;
        RBus_UInt32  dh_rt2_force_mv_en:1;
    };
}kme_dehalo_kme_dehalo_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  dh_rt2_vidx_ofst:9;
        RBus_UInt32  dh_rt2_hidx_ofst:9;
    };
}kme_dehalo_kme_dehalo_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt2_ythr_shft:3;
        RBus_UInt32  dh_phase_prec:8;
        RBus_UInt32  dh_rt2_ooby_shft:3;
        RBus_UInt32  dh_rt2_oobx_shft:3;
        RBus_UInt32  dh_rt2_ysec_shft:3;
        RBus_UInt32  dh_rt2_yfst_shft:3;
        RBus_UInt32  dh_rt2_xthr_shft:3;
        RBus_UInt32  dh_rt2_xsec_shft:3;
        RBus_UInt32  dh_rt2_xfst_shft:3;
    };
}kme_dehalo_kme_dehalo_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  dh_rt2_sr:4;
    };
}kme_dehalo_kme_dehalo_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  dh_rt2_xrounding1:9;
        RBus_UInt32  dh_rt2_yrounding0:9;
        RBus_UInt32  dh_rt2_xrounding0:9;
    };
}kme_dehalo_kme_dehalo_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  dh_rt2_yrounding1:9;
    };
}kme_dehalo_kme_dehalo_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dh_pst_fblvl_flt_coef5:4;
        RBus_UInt32  dh_pst_fblvl_flt_coef4:4;
        RBus_UInt32  dh_pst_fblvl_flt_coef3:4;
        RBus_UInt32  dh_pst_fblvl_flt_coef2:4;
        RBus_UInt32  dh_pst_fblvl_flt_coef1:4;
        RBus_UInt32  dh_pst_fblvl_flt_coef0:9;
        RBus_UInt32  dh_pst_fblvl_flt_shift:2;
    };
}kme_dehalo_kme_dehalo_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dh_pst_fblvl_fbgen_max:10;
        RBus_UInt32  dh_pst_fblvl_fbgen_min:10;
        RBus_UInt32  dh_pst_fblvl_fbgen_th:10;
    };
}kme_dehalo_kme_dehalo_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  dh_pst_fblvl_fbgen_sft:4;
        RBus_UInt32  dh_pst_fblvl_fbgen_slp:8;
    };
}kme_dehalo_kme_dehalo_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dh_pfv_check_dif_limit:10;
        RBus_UInt32  dh_pfv_check_dif_gain_p:7;
        RBus_UInt32  dh_pfv_check_dif_gain_i:7;
        RBus_UInt32  dh_pfv_check_dif_mode:1;
        RBus_UInt32  dh_pfv_check_debug_sel:4;
    };
}kme_dehalo_kme_dehalo_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dh_occl_gen_debug_en:1;
        RBus_UInt32  dh_occl_gen_debug_sel:4;
        RBus_UInt32  dh_ptlogo_penalty:10;
        RBus_UInt32  dh_oob_penalty_gain:4;
        RBus_UInt32  dh_pfv_chk_pedal_shf:3;
        RBus_UInt32  dh_pfv_check_debug_en:1;
        RBus_UInt32  dh_pfv_chk_diff_win_mode:1;
    };
}kme_dehalo_kme_dehalo_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  dh_occl_gen_sim_trans:3;
        RBus_UInt32  dh_occl_gen_sim_thr:8;
        RBus_UInt32  dh_occl_gen_sim_slp:12;
    };
}kme_dehalo_kme_dehalo_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pstoccl_sel:2;
        RBus_UInt32  dh_pstflt_occl_mv_accord:1;
        RBus_UInt32  dh_pst_dumy_mask_dly_sel:4;
        RBus_UInt32  dh_post_flt_en:2;
        RBus_UInt32  dh_occl_gen_dif_trans:3;
        RBus_UInt32  dh_occl_gen_dif_thr:8;
        RBus_UInt32  dh_occl_gen_dif_slp:12;
    };
}kme_dehalo_kme_dehalo_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dh_pstflt_vdumy_int:6;
        RBus_UInt32  dh_pstflt_vdumy_base:6;
        RBus_UInt32  dh_post_flt_mv_ext_thr:9;
        RBus_UInt32  dh_post_flt_mv_new_mode:1;
        RBus_UInt32  dh_post_flt_occ_ext_thr:5;
        RBus_UInt32  dh_post_flt_new_mode:1;
        RBus_UInt32  dh_post_flt_win_mode:1;
    };
}kme_dehalo_kme_dehalo_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_cross_bd_de_base:5;
        RBus_UInt32  dh_cross_bd_erosion_mode:1;
        RBus_UInt32  dh_post_flt_debug_sel:3;
        RBus_UInt32  dh_pst_occl_type_thr:6;
        RBus_UInt32  dh_post_flt_occ_cost_shf:4;
        RBus_UInt32  dh_post_flt_mv_cost_shf:4;
        RBus_UInt32  dh_post_flt_apl_dif_gain:6;
        RBus_UInt32  res1:1;
        RBus_UInt32  dh_post_flt_debug_en:1;
        RBus_UInt32  dh_pstflt_vdumy_mod:1;
    };
}kme_dehalo_kme_dehalo_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pstflt_vsrow_r_dly_sel:4;
        RBus_UInt32  dh_pstflt_vsrow_w_dly_sel:4;
        RBus_UInt32  dh_pstflt_row_dumy_num:4;
        RBus_UInt32  dh_pstflt_blk_dumy_num:4;
        RBus_UInt32  dh_pstflt_de_intval:6;
        RBus_UInt32  dh_pst_occl_dtl_fb_th0:6;
        RBus_UInt32  dh_pst_occl_dtl_fb_mode:2;
        RBus_UInt32  dh_pst_occl_dtl_fb_en:2;
    };
}kme_dehalo_kme_dehalo_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dh_rt1_fb_gen_mod:2;
        RBus_UInt32  dh_ph_fb_gen_mod:2;
        RBus_UInt32  dh_out_vsrow_r_dly_sel:4;
        RBus_UInt32  dh_pst_occl_alpha_th:7;
        RBus_UInt32  dh_pst_occl_dtl_fb_th2:8;
        RBus_UInt32  dh_pst_occl_dtl_fb_th1:8;
    };
}kme_dehalo_kme_dehalo_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  dh_pst_medflt_mod:3;
        RBus_UInt32  dh_pst_medflt_way:4;
        RBus_UInt32  dh_pst_medflt_en:1;
        RBus_UInt32  dh_pst_occl_fir_th1:3;
        RBus_UInt32  dh_pst_occl_fir_th0:3;
        RBus_UInt32  dh_pst_occl_fir_major_th:3;
        RBus_UInt32  dh_pst_occl_fir_en:1;
    };
}kme_dehalo_kme_dehalo_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dh_post_flt_apl_med9:1;
        RBus_UInt32  dh_pst_medflt5_mvdf_cnt_thr:3;
        RBus_UInt32  dh_pst_medflt9_mvdf_cnt_thr:4;
        RBus_UInt32  dh_pst_medflt_sad_valu_th:8;
        RBus_UInt32  dh_pst_medflt_mvdif_th:8;
    };
}kme_dehalo_kme_dehalo_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  dh_pfv_conf_gen_pfv_sel:1;
        RBus_UInt32  dh_pfv_gen_new_debug_en:1;
        RBus_UInt32  dh_pfv_gen_new_debug_sel:3;
        RBus_UInt32  dh_pfv_conf_gen_mv_fb_inv:1;
        RBus_UInt32  dh_pfv_conf_gen_mv_fb_sel:1;
        RBus_UInt32  dh_pfv_gen_pfv1st_mv_sel:1;
        RBus_UInt32  dh_pfv_gen_pfv1st_mv2_sel:1;
    };
}kme_dehalo_kme_dehalo_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dh_pfv_gen_force_dehalo_level2:6;
        RBus_UInt32  dh_pfv_gen_glb_dehalo_gain2:6;
        RBus_UInt32  dh_pfv_gen_force_dehalo_level:6;
        RBus_UInt32  dh_pfv_gen_glb_dehalo_gain:6;
    };
}kme_dehalo_kme_dehalo_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  dh_rt1_debug_show_sel:6;
        RBus_UInt32  dh_phflt_row_dumy_num:4;
        RBus_UInt32  dh_phflt_blk_dumy_num:4;
        RBus_UInt32  dh_phflt_de_intval:6;
    };
}kme_dehalo_kme_dehalo_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dh_m4_de_intval:6;
        RBus_UInt32  dh_rt1_fb_lvl_force_value:10;
        RBus_UInt32  dh_fb_lvl_force_value:8;
        RBus_UInt32  dh_fb_lvl_force_en:1;
        RBus_UInt32  dh_rt1_fb_lvl_force_en:1;
    };
}kme_dehalo_kme_dehalo_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dh_m4_preflt_hsta_en:1;
        RBus_UInt32  dh_m4_pstflt_hsta_en:1;
        RBus_UInt32  dh_m4_preflt_hsta_num:4;
        RBus_UInt32  dh_m4_pstflt_hsta_num:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  dh_pstflt_disable_occl_righ_rim:9;
        RBus_UInt32  dh_pstflt_disable_occl_left_rim:9;
    };
}kme_dehalo_kme_dehalo_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  dh_pstflt_disable_occl_bot_rim:9;
        RBus_UInt32  dh_pstflt_disable_occl_top_rim:9;
    };
}kme_dehalo_kme_dehalo_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  dh_phflt_med9filt_switch_en:1;
        RBus_UInt32  dh_phflt_med5filt_switch_en:1;
        RBus_UInt32  dh_phflt_med5flt_data_sel:2;
        RBus_UInt32  dh_phflt_med5flt_en:1;
        RBus_UInt32  dh_phflt_med9flt_data_sel:2;
        RBus_UInt32  dh_phflt_med9flt_en:1;
        RBus_UInt32  dh_rt1_pfvfb_sad_sel:1;
        RBus_UInt32  dh_rt1_win_size_sel:1;
        RBus_UInt32  dh_rt1_med9flt_sel:2;
        RBus_UInt32  dh_rt1_med5flt_sel:1;
        RBus_UInt32  dh_rt1_med9flt_en:1;
        RBus_UInt32  dh_rt1_med5flt_en:1;
    };
}kme_dehalo_kme_dehalo_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  dh_mvdiff_fblvl_shift:4;
        RBus_UInt32  dh_fblvl_mvdiff_s2:6;
        RBus_UInt32  dh_fblvl_mvdiff_s1:6;
        RBus_UInt32  dh_fblvl_mvdiff_sel_mode:1;
        RBus_UInt32  dh_fblvl_mvdiff_win_mode:1;
        RBus_UInt32  dh_fblvl_mvdiff_gain_en:1;
    };
}kme_dehalo_kme_dehalo_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_dtl_curve_x1:8;
        RBus_UInt32  dh_fblvl_mvdiff_x2:12;
        RBus_UInt32  dh_fblvl_mvdiff_x1:12;
    };
}kme_dehalo_kme_dehalo_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_dtl_curve_x2:8;
        RBus_UInt32  dh_fblvl_mvdiff_y1:12;
        RBus_UInt32  dh_fblvl_mvdiff_x3:12;
    };
}kme_dehalo_kme_dehalo_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_dtl_curve_y1:8;
        RBus_UInt32  dh_fblvl_mvdiff_y3:12;
        RBus_UInt32  dh_fblvl_mvdiff_y2:12;
    };
}kme_dehalo_kme_dehalo_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dh_dtl_gain_en:1;
        RBus_UInt32  dh_fb_dtl_shift:3;
        RBus_UInt32  dh_ph_dtl_getmode:2;
        RBus_UInt32  dh_dtl_curve_s1:10;
        RBus_UInt32  dh_dtl_curve_y2:8;
    };
}kme_dehalo_kme_dehalo_fc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  local_fb_dtl_sad_y_gain:5;
        RBus_UInt32  res2:2;
        RBus_UInt32  local_fb_dtl_mv_th:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  local_fb_pfv_diff:6;
        RBus_UInt32  res4:1;
        RBus_UInt32  local_fb_dtl_th:7;
    };
}kme_dehalo_kme_dehalo_local_fb_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  local_fb_mv_th_3:8;
        RBus_UInt32  local_fb_mv_th_2:8;
        RBus_UInt32  local_fb_mv_th_1:8;
        RBus_UInt32  local_fb_mv_th_0:8;
    };
}kme_dehalo_kme_dehalo_local_fb_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  local_fb_th_bound3:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  local_fb_th_bound:6;
        RBus_UInt32  local_fb_dtl_sad_x_th1:8;
        RBus_UInt32  local_fb_dtl_sad_x_th0:8;
    };
}kme_dehalo_kme_dehalo_local_fb_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  local_fb_dtl_sad_y_th1:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  local_fb_dtl_sad_y_th0:10;
    };
}kme_dehalo_kme_dehalo_local_fb_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  local_fb_dtl_mv_cnt:5;
        RBus_UInt32  local_fb_all_fb_th_bound:8;
        RBus_UInt32  res2:4;
        RBus_UInt32  local_fb_th_all_fb_pn:4;
        RBus_UInt32  res3:6;
        RBus_UInt32  local_fb_th_all_fb_bnd_en:2;
    };
}kme_dehalo_kme_dehalo_local_fb_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  local_fb_dtl_sad_idx:4;
        RBus_UInt32  local_fb_cnt_dtl_idx:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  local_fb_cnt_dtl:15;
    };
}kme_dehalo_kme_dehalo_local_fb_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  local_fb_dtl_sad:32;
    };
}kme_dehalo_kme_dehalo_local_fb_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  local_fb_mvn:8;
        RBus_UInt32  local_fb_mvp:8;
        RBus_UInt32  res1:3;
        RBus_UInt32  local_fb_occ_cor_th:5;
        RBus_UInt32  local_fb_alpha:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  local_fb_dbg:1;
        RBus_UInt32  local_fb_occ_cor_en:1;
        RBus_UInt32  local_fb_en:1;
    };
}kme_dehalo_kme_dehalo_local_fb_7_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_DEHALO register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_en:1;
        RBus_UInt32  dh_rdbk_en:1;
        RBus_UInt32  dh_in_crc_en:1;
        RBus_UInt32  dh_scene_change_mode:1;
        RBus_UInt32  dh_scene_change_on:1;
        RBus_UInt32  dh_sram_ls:1;
        RBus_UInt32  dh_out_crc_en:1;
        RBus_UInt32  dh_yx_ratio:2;
        RBus_UInt32  dh_mv_row_size:2;
        RBus_UInt32  dh_mv_blk_size:1;
        RBus_UInt32  dh_logo_row_size:2;
        RBus_UInt32  dh_logo_blk_size:1;
        RBus_UInt32  dh_det_row_posi:8;
        RBus_UInt32  dh_mv_blk_num:9;
    };
}kme_dehalo_kme_dehalo_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_mv_row_num:9;
        RBus_UInt32  dh_logo_blk_num:9;
        RBus_UInt32  dh_logo_row_num:9;
        RBus_UInt32  dh_me2cal_in_480x270_mod:1;
        RBus_UInt32  dh_vbuf_double_scan_en:1;
        RBus_UInt32  dh_debug_show_vbuf_info_en:1;
        RBus_UInt32  dh_sc_bv_sel:1;
        RBus_UInt32  res1:1;
    };
}kme_dehalo_kme_dehalo_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_left_ofst:9;
        RBus_UInt32  dh_right_ofst:9;
        RBus_UInt32  dh_top_ofst:9;
        RBus_UInt32  dh_pre_patt_blk_size:1;
        RBus_UInt32  dh_pre_patt_row_size:1;
        RBus_UInt32  dh_med_patt_blk_size:1;
        RBus_UInt32  dh_med_patt_row_size:1;
        RBus_UInt32  dh_me1_me2_info_to_mc:1;
    };
}kme_dehalo_kme_dehalo_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_bot_ofst:9;
        RBus_UInt32  dh_rt1_left_ofst:9;
        RBus_UInt32  dh_rt1_right_ofst:9;
        RBus_UInt32  dh_rt1_drt_2x2_sel:1;
        RBus_UInt32  dh_vbuf_row_mask:1;
        RBus_UInt32  dh_pck_force_fbcovalpha_0:1;
        RBus_UInt32  dh_pck_force_pedal_0:1;
        RBus_UInt32  res1:1;
    };
}kme_dehalo_kme_dehalo_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_top_ofst:9;
        RBus_UInt32  dh_rt1_bot_ofst:9;
        RBus_UInt32  dh_rt2_left_ofst:9;
        RBus_UInt32  dh_ac_dc_sel:1;
        RBus_UInt32  dh_ac_dc_flg_en:1;
        RBus_UInt32  dh_pfv_conf_gen_bv_sel:1;
        RBus_UInt32  dh_rt1_bv_sel:1;
        RBus_UInt32  res1:1;
    };
}kme_dehalo_kme_dehalo_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt2_right_ofst:9;
        RBus_UInt32  dh_rt2_top_ofst:9;
        RBus_UInt32  dh_rt2_bot_ofst:9;
        RBus_UInt32  dh_debug_show_me1_me2:2;
        RBus_UInt32  dh_force_phase_en:1;
        RBus_UInt32  res1:2;
    };
}kme_dehalo_kme_dehalo_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_force_phase:6;
        RBus_UInt32  dh_mv_pat_en:2;
        RBus_UInt32  dh_mv_pat_mode:2;
        RBus_UInt32  dh_mv_pat_mv_y:10;
        RBus_UInt32  dh_mv_pat_mv_x:11;
        RBus_UInt32  dh_mv_med_pat_en:1;
    };
}kme_dehalo_kme_dehalo_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_mv_pat_h0:9;
        RBus_UInt32  dh_mv_pat_h1:9;
        RBus_UInt32  dh_mv_pat_v0:9;
        RBus_UInt32  dh_preflt_vs_sel:1;
        RBus_UInt32  dh_dob_dly_sel:4;
    };
}kme_dehalo_kme_dehalo_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_mv_pat_v1:9;
        RBus_UInt32  dh_mv_med_pat_self_en:1;
        RBus_UInt32  dh_mv_pat_self_cycle:6;
        RBus_UInt32  dh_mv_pat_self_en:2;
        RBus_UInt32  dh_med_patt_info_to_mc:1;
        RBus_UInt32  dh_pre_pat_eros_mode:1;
        RBus_UInt32  dh_med_pat_eros_mode:1;
        RBus_UInt32  dh_pst_pat_eros_mode:1;
        RBus_UInt32  dh_me1_dbg_mv_num:9;
        RBus_UInt32  res1:1;
    };
}kme_dehalo_kme_dehalo_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_patt_blk_num:9;
        RBus_UInt32  dh_patt_row_num:9;
        RBus_UInt32  dh_pst_patt_blk_size:1;
        RBus_UInt32  dh_pst_patt_row_size:1;
        RBus_UInt32  dh_input_buf_byps:1;
        RBus_UInt32  dh_phbv0_flt_en:1;
        RBus_UInt32  dummy1809cd34_22:1;
        RBus_UInt32  dh_phbv1_flt_en:1;
        RBus_UInt32  dummy1809cd34_24:1;
        RBus_UInt32  dh_ph_flt_win_size:1;
        RBus_UInt32  dh_ph_flt_way:4;
        RBus_UInt32  res1:2;
    };
}kme_dehalo_kme_dehalo_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_ph_flt_mod:3;
        RBus_UInt32  dh_ph_flt_mvdif_th:8;
        RBus_UInt32  dh_ph_flt_sad_valu_th:8;
        RBus_UInt32  dh_ph_flt25_mvdf_cnt_thr:5;
        RBus_UInt32  dh_ph_flt9_mvdf_cnt_thr:4;
        RBus_UInt32  dh_ph_flt5_mvdf_cnt_thr:3;
        RBus_UInt32  dh_phfilt_switch_en:1;
    };
}kme_dehalo_kme_dehalo_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dehalo_logo_sync_trg_sel:1;
        RBus_UInt32  dummy1809cd3c_2_1:2;
        RBus_UInt32  dh_rt1_mv_debug_sel:6;
        RBus_UInt32  dh_rt2_mv_debug_sel:6;
        RBus_UInt32  dh_fblvl_cut:8;
        RBus_UInt32  dh_bypass_preflt_tim:1;
        RBus_UInt32  dh_bypass_pstflt_tim:1;
        RBus_UInt32  dh_fblvl_x_mv_en:1;
        RBus_UInt32  res1:6;
    };
}kme_dehalo_kme_dehalo_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt2_bnd_v_mode:1;
        RBus_UInt32  dh_rt2_bnd_h_mode:1;
        RBus_UInt32  valid_regen_disable:1;
        RBus_UInt32  valid_regen_shift_add_en:1;
        RBus_UInt32  valid_regen_shift_add:4;
        RBus_UInt32  dummy1809cd40_15_8:8;
        RBus_UInt32  dummy1809cd40_23_16:8;
        RBus_UInt32  dummy1809cd40_31_24:8;
    };
}kme_dehalo_kme_dehalo_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809cd44_0:1;
        RBus_UInt32  dh_ph_fbgen_th:10;
        RBus_UInt32  dh_ph_fbgen_slp:8;
        RBus_UInt32  dh_ph_fbgen_sft:4;
        RBus_UInt32  res1:9;
    };
}kme_dehalo_kme_dehalo_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_ph_fbgen_min:10;
        RBus_UInt32  dh_ph_fbgen_max:10;
        RBus_UInt32  dh_oobgain_force_0:1;
        RBus_UInt32  res1:11;
    };
}kme_dehalo_kme_dehalo_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_xfst_shft:3;
        RBus_UInt32  dh_rt1_xsec_shft:3;
        RBus_UInt32  dh_rt1_xthr_shft:3;
        RBus_UInt32  dh_rt1_yfst_shft:3;
        RBus_UInt32  dh_rt1_ysec_shft:3;
        RBus_UInt32  dh_rt1_oobx_shft:3;
        RBus_UInt32  dh_rt1_ooby_shft:3;
        RBus_UInt32  dh_rt1_force_idx:1;
        RBus_UInt32  dh_rt1_xidx_shift:10;
    };
}kme_dehalo_kme_dehalo_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_ythr_shft:3;
        RBus_UInt32  dh_rt1_rt_sr:4;
        RBus_UInt32  dh_rt1_c_xrounding0:9;
        RBus_UInt32  dh_rt1_yidx_shift:10;
        RBus_UInt32  dh_rt1_point_to_single_blk:1;
        RBus_UInt32  dh_rt2_point_to_sblk_mode:3;
        RBus_UInt32  res1:2;
    };
}kme_dehalo_kme_dehalo_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_c_yrounding0:9;
        RBus_UInt32  dh_rt1_c_xrounding1:9;
        RBus_UInt32  dh_rt1_c_yrounding1:9;
        RBus_UInt32  res1:5;
    };
}kme_dehalo_kme_dehalo_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_penalty0:10;
        RBus_UInt32  dh_rt1_penalty1:10;
        RBus_UInt32  dh_rt1_penalty2:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo_kme_dehalo_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_mvdiff_pfv_sel_en:1;
        RBus_UInt32  dh_rt1_ern_dat_shft:4;
        RBus_UInt32  dh_rt1_flt_en:1;
        RBus_UInt32  dummy1809cd5c_6:1;
        RBus_UInt32  dh_rt1_flt_way:4;
        RBus_UInt32  dh_rt1_flt_mod:3;
        RBus_UInt32  dh_rt1_flt_mvdif_th:8;
        RBus_UInt32  dh_rt1_flt_sad_valu_th:8;
        RBus_UInt32  res1:2;
    };
}kme_dehalo_kme_dehalo_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_flt9_mvdf_cnt_thr:4;
        RBus_UInt32  dh_rt1_flt5_mvdf_cnt_thr:3;
        RBus_UInt32  dummy1809cd60_7:1;
        RBus_UInt32  dummy1809cd60_15_8:8;
        RBus_UInt32  dummy1809cd60_18_16:3;
        RBus_UInt32  dummy1809cd60_26_19:8;
        RBus_UInt32  res1:5;
    };
}kme_dehalo_kme_dehalo_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809cd64_7_0:8;
        RBus_UInt32  dummy1809cd64_15_8:8;
        RBus_UInt32  dh_rt1_fbgen_th:10;
        RBus_UInt32  res1:6;
    };
}kme_dehalo_kme_dehalo_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_fbgen_slp:8;
        RBus_UInt32  dh_rt1_fbgen_sft:4;
        RBus_UInt32  dh_rt1_fbgen_min:10;
        RBus_UInt32  res1:10;
    };
}kme_dehalo_kme_dehalo_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_fbgen_max:10;
        RBus_UInt32  dh_rt1_force_fblvl_bld_coef_en:1;
        RBus_UInt32  dh_rt1_force_fblvl_bld_coef_val:6;
        RBus_UInt32  dh_ondtl_nooccl_phinf_sel:1;
        RBus_UInt32  dh_ph_fblvl_bld_coef:6;
        RBus_UInt32  dh_all_fblvl_bld_coef:6;
        RBus_UInt32  res1:2;
    };
}kme_dehalo_kme_dehalo_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pfv_conf_gen_pfv_max_min_sel:1;
        RBus_UInt32  dh_pfv_conf_gen_curve_sel:1;
        RBus_UInt32  dh_pfv_conf_gen_flg_force_en:1;
        RBus_UInt32  dh_pfv_conf_gen_flg_fb_sel:1;
        RBus_UInt32  dh_pfv_conf_gen_andor_fb_sel:1;
        RBus_UInt32  dh_pfv_conf_gen_flg_force_cov:1;
        RBus_UInt32  dh_pfv_conf_gen_flg_force_uov:1;
        RBus_UInt32  dh_pfv_con_gen_debug_sel:4;
        RBus_UInt32  dh_pfv_con_gen_debug_en:1;
        RBus_UInt32  dh_pfv_gen_diff_thr0:8;
        RBus_UInt32  dh_pfv_gen_diff_slp0:4;
        RBus_UInt32  dh_pfv_gen_ped_limit:8;
    };
}kme_dehalo_kme_dehalo_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt2_force_mv_en:1;
        RBus_UInt32  dh_rt2_force_mv_x:11;
        RBus_UInt32  dh_rt2_force_mv_y:10;
        RBus_UInt32  dh_rt2_oobgain_force_0:1;
        RBus_UInt32  res1:9;
    };
}kme_dehalo_kme_dehalo_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt2_hidx_ofst:9;
        RBus_UInt32  dh_rt2_vidx_ofst:9;
        RBus_UInt32  res1:14;
    };
}kme_dehalo_kme_dehalo_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt2_xfst_shft:3;
        RBus_UInt32  dh_rt2_xsec_shft:3;
        RBus_UInt32  dh_rt2_xthr_shft:3;
        RBus_UInt32  dh_rt2_yfst_shft:3;
        RBus_UInt32  dh_rt2_ysec_shft:3;
        RBus_UInt32  dh_rt2_oobx_shft:3;
        RBus_UInt32  dh_rt2_ooby_shft:3;
        RBus_UInt32  dh_phase_prec:8;
        RBus_UInt32  dh_rt2_ythr_shft:3;
    };
}kme_dehalo_kme_dehalo_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt2_sr:4;
        RBus_UInt32  res1:28;
    };
}kme_dehalo_kme_dehalo_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt2_xrounding0:9;
        RBus_UInt32  dh_rt2_yrounding0:9;
        RBus_UInt32  dh_rt2_xrounding1:9;
        RBus_UInt32  res1:5;
    };
}kme_dehalo_kme_dehalo_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt2_yrounding1:9;
        RBus_UInt32  res1:23;
    };
}kme_dehalo_kme_dehalo_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pst_fblvl_flt_shift:2;
        RBus_UInt32  dh_pst_fblvl_flt_coef0:9;
        RBus_UInt32  dh_pst_fblvl_flt_coef1:4;
        RBus_UInt32  dh_pst_fblvl_flt_coef2:4;
        RBus_UInt32  dh_pst_fblvl_flt_coef3:4;
        RBus_UInt32  dh_pst_fblvl_flt_coef4:4;
        RBus_UInt32  dh_pst_fblvl_flt_coef5:4;
        RBus_UInt32  res1:1;
    };
}kme_dehalo_kme_dehalo_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pst_fblvl_fbgen_th:10;
        RBus_UInt32  dh_pst_fblvl_fbgen_min:10;
        RBus_UInt32  dh_pst_fblvl_fbgen_max:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo_kme_dehalo_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pst_fblvl_fbgen_slp:8;
        RBus_UInt32  dh_pst_fblvl_fbgen_sft:4;
        RBus_UInt32  res1:20;
    };
}kme_dehalo_kme_dehalo_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pfv_check_debug_sel:4;
        RBus_UInt32  dh_pfv_check_dif_mode:1;
        RBus_UInt32  dh_pfv_check_dif_gain_i:7;
        RBus_UInt32  dh_pfv_check_dif_gain_p:7;
        RBus_UInt32  dh_pfv_check_dif_limit:10;
        RBus_UInt32  res1:3;
    };
}kme_dehalo_kme_dehalo_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pfv_chk_diff_win_mode:1;
        RBus_UInt32  dh_pfv_check_debug_en:1;
        RBus_UInt32  dh_pfv_chk_pedal_shf:3;
        RBus_UInt32  dh_oob_penalty_gain:4;
        RBus_UInt32  dh_ptlogo_penalty:10;
        RBus_UInt32  dh_occl_gen_debug_sel:4;
        RBus_UInt32  dh_occl_gen_debug_en:1;
        RBus_UInt32  res1:8;
    };
}kme_dehalo_kme_dehalo_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_occl_gen_sim_slp:12;
        RBus_UInt32  dh_occl_gen_sim_thr:8;
        RBus_UInt32  dh_occl_gen_sim_trans:3;
        RBus_UInt32  res1:9;
    };
}kme_dehalo_kme_dehalo_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_occl_gen_dif_slp:12;
        RBus_UInt32  dh_occl_gen_dif_thr:8;
        RBus_UInt32  dh_occl_gen_dif_trans:3;
        RBus_UInt32  dh_post_flt_en:2;
        RBus_UInt32  dh_pst_dumy_mask_dly_sel:4;
        RBus_UInt32  dh_pstflt_occl_mv_accord:1;
        RBus_UInt32  dh_pstoccl_sel:2;
    };
}kme_dehalo_kme_dehalo_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_post_flt_win_mode:1;
        RBus_UInt32  dh_post_flt_new_mode:1;
        RBus_UInt32  dh_post_flt_occ_ext_thr:5;
        RBus_UInt32  dh_post_flt_mv_new_mode:1;
        RBus_UInt32  dh_post_flt_mv_ext_thr:9;
        RBus_UInt32  dh_pstflt_vdumy_base:6;
        RBus_UInt32  dh_pstflt_vdumy_int:6;
        RBus_UInt32  res1:3;
    };
}kme_dehalo_kme_dehalo_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pstflt_vdumy_mod:1;
        RBus_UInt32  dh_post_flt_debug_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dh_post_flt_apl_dif_gain:6;
        RBus_UInt32  dh_post_flt_mv_cost_shf:4;
        RBus_UInt32  dh_post_flt_occ_cost_shf:4;
        RBus_UInt32  dh_pst_occl_type_thr:6;
        RBus_UInt32  dh_post_flt_debug_sel:3;
        RBus_UInt32  dh_cross_bd_erosion_mode:1;
        RBus_UInt32  dh_cross_bd_de_base:5;
    };
}kme_dehalo_kme_dehalo_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pst_occl_dtl_fb_en:2;
        RBus_UInt32  dh_pst_occl_dtl_fb_mode:2;
        RBus_UInt32  dh_pst_occl_dtl_fb_th0:6;
        RBus_UInt32  dh_pstflt_de_intval:6;
        RBus_UInt32  dh_pstflt_blk_dumy_num:4;
        RBus_UInt32  dh_pstflt_row_dumy_num:4;
        RBus_UInt32  dh_pstflt_vsrow_w_dly_sel:4;
        RBus_UInt32  dh_pstflt_vsrow_r_dly_sel:4;
    };
}kme_dehalo_kme_dehalo_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pst_occl_dtl_fb_th1:8;
        RBus_UInt32  dh_pst_occl_dtl_fb_th2:8;
        RBus_UInt32  dh_pst_occl_alpha_th:7;
        RBus_UInt32  dh_out_vsrow_r_dly_sel:4;
        RBus_UInt32  dh_ph_fb_gen_mod:2;
        RBus_UInt32  dh_rt1_fb_gen_mod:2;
        RBus_UInt32  res1:1;
    };
}kme_dehalo_kme_dehalo_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pst_occl_fir_en:1;
        RBus_UInt32  dh_pst_occl_fir_major_th:3;
        RBus_UInt32  dh_pst_occl_fir_th0:3;
        RBus_UInt32  dh_pst_occl_fir_th1:3;
        RBus_UInt32  dh_pst_medflt_en:1;
        RBus_UInt32  dh_pst_medflt_way:4;
        RBus_UInt32  dh_pst_medflt_mod:3;
        RBus_UInt32  res1:14;
    };
}kme_dehalo_kme_dehalo_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pst_medflt_mvdif_th:8;
        RBus_UInt32  dh_pst_medflt_sad_valu_th:8;
        RBus_UInt32  dh_pst_medflt9_mvdf_cnt_thr:4;
        RBus_UInt32  dh_pst_medflt5_mvdf_cnt_thr:3;
        RBus_UInt32  dh_post_flt_apl_med9:1;
        RBus_UInt32  res1:8;
    };
}kme_dehalo_kme_dehalo_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pfv_gen_pfv1st_mv2_sel:1;
        RBus_UInt32  dh_pfv_gen_pfv1st_mv_sel:1;
        RBus_UInt32  dh_pfv_conf_gen_mv_fb_sel:1;
        RBus_UInt32  dh_pfv_conf_gen_mv_fb_inv:1;
        RBus_UInt32  dh_pfv_gen_new_debug_sel:3;
        RBus_UInt32  dh_pfv_gen_new_debug_en:1;
        RBus_UInt32  dh_pfv_conf_gen_pfv_sel:1;
        RBus_UInt32  res1:23;
    };
}kme_dehalo_kme_dehalo_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pfv_gen_glb_dehalo_gain:6;
        RBus_UInt32  dh_pfv_gen_force_dehalo_level:6;
        RBus_UInt32  dh_pfv_gen_glb_dehalo_gain2:6;
        RBus_UInt32  dh_pfv_gen_force_dehalo_level2:6;
        RBus_UInt32  res1:8;
    };
}kme_dehalo_kme_dehalo_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_phflt_de_intval:6;
        RBus_UInt32  dh_phflt_blk_dumy_num:4;
        RBus_UInt32  dh_phflt_row_dumy_num:4;
        RBus_UInt32  dh_rt1_debug_show_sel:6;
        RBus_UInt32  res1:12;
    };
}kme_dehalo_kme_dehalo_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_fb_lvl_force_en:1;
        RBus_UInt32  dh_fb_lvl_force_en:1;
        RBus_UInt32  dh_fb_lvl_force_value:8;
        RBus_UInt32  dh_rt1_fb_lvl_force_value:10;
        RBus_UInt32  dh_m4_de_intval:6;
        RBus_UInt32  res1:6;
    };
}kme_dehalo_kme_dehalo_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pstflt_disable_occl_left_rim:9;
        RBus_UInt32  dh_pstflt_disable_occl_righ_rim:9;
        RBus_UInt32  res1:2;
        RBus_UInt32  dh_m4_pstflt_hsta_num:4;
        RBus_UInt32  dh_m4_preflt_hsta_num:4;
        RBus_UInt32  dh_m4_pstflt_hsta_en:1;
        RBus_UInt32  dh_m4_preflt_hsta_en:1;
        RBus_UInt32  res2:2;
    };
}kme_dehalo_kme_dehalo_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pstflt_disable_occl_top_rim:9;
        RBus_UInt32  dh_pstflt_disable_occl_bot_rim:9;
        RBus_UInt32  res1:14;
    };
}kme_dehalo_kme_dehalo_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_med5flt_en:1;
        RBus_UInt32  dh_rt1_med9flt_en:1;
        RBus_UInt32  dh_rt1_med5flt_sel:1;
        RBus_UInt32  dh_rt1_med9flt_sel:2;
        RBus_UInt32  dh_rt1_win_size_sel:1;
        RBus_UInt32  dh_rt1_pfvfb_sad_sel:1;
        RBus_UInt32  dh_phflt_med9flt_en:1;
        RBus_UInt32  dh_phflt_med9flt_data_sel:2;
        RBus_UInt32  dh_phflt_med5flt_en:1;
        RBus_UInt32  dh_phflt_med5flt_data_sel:2;
        RBus_UInt32  dh_phflt_med5filt_switch_en:1;
        RBus_UInt32  dh_phflt_med9filt_switch_en:1;
        RBus_UInt32  res1:17;
    };
}kme_dehalo_kme_dehalo_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_fblvl_mvdiff_gain_en:1;
        RBus_UInt32  dh_fblvl_mvdiff_win_mode:1;
        RBus_UInt32  dh_fblvl_mvdiff_sel_mode:1;
        RBus_UInt32  dh_fblvl_mvdiff_s1:6;
        RBus_UInt32  dh_fblvl_mvdiff_s2:6;
        RBus_UInt32  dh_mvdiff_fblvl_shift:4;
        RBus_UInt32  res1:13;
    };
}kme_dehalo_kme_dehalo_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_fblvl_mvdiff_x1:12;
        RBus_UInt32  dh_fblvl_mvdiff_x2:12;
        RBus_UInt32  dh_dtl_curve_x1:8;
    };
}kme_dehalo_kme_dehalo_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_fblvl_mvdiff_x3:12;
        RBus_UInt32  dh_fblvl_mvdiff_y1:12;
        RBus_UInt32  dh_dtl_curve_x2:8;
    };
}kme_dehalo_kme_dehalo_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_fblvl_mvdiff_y2:12;
        RBus_UInt32  dh_fblvl_mvdiff_y3:12;
        RBus_UInt32  dh_dtl_curve_y1:8;
    };
}kme_dehalo_kme_dehalo_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_dtl_curve_y2:8;
        RBus_UInt32  dh_dtl_curve_s1:10;
        RBus_UInt32  dh_ph_dtl_getmode:2;
        RBus_UInt32  dh_fb_dtl_shift:3;
        RBus_UInt32  dh_dtl_gain_en:1;
        RBus_UInt32  res1:8;
    };
}kme_dehalo_kme_dehalo_fc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  local_fb_dtl_th:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  local_fb_pfv_diff:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  local_fb_dtl_mv_th:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  local_fb_dtl_sad_y_gain:5;
        RBus_UInt32  res4:3;
    };
}kme_dehalo_kme_dehalo_local_fb_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  local_fb_mv_th_0:8;
        RBus_UInt32  local_fb_mv_th_1:8;
        RBus_UInt32  local_fb_mv_th_2:8;
        RBus_UInt32  local_fb_mv_th_3:8;
    };
}kme_dehalo_kme_dehalo_local_fb_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  local_fb_dtl_sad_x_th0:8;
        RBus_UInt32  local_fb_dtl_sad_x_th1:8;
        RBus_UInt32  local_fb_th_bound:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  local_fb_th_bound3:4;
        RBus_UInt32  res2:4;
    };
}kme_dehalo_kme_dehalo_local_fb_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  local_fb_dtl_sad_y_th0:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  local_fb_dtl_sad_y_th1:10;
        RBus_UInt32  res2:6;
    };
}kme_dehalo_kme_dehalo_local_fb_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  local_fb_th_all_fb_bnd_en:2;
        RBus_UInt32  res1:6;
        RBus_UInt32  local_fb_th_all_fb_pn:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  local_fb_all_fb_th_bound:8;
        RBus_UInt32  local_fb_dtl_mv_cnt:5;
        RBus_UInt32  res3:3;
    };
}kme_dehalo_kme_dehalo_local_fb_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  local_fb_cnt_dtl:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  local_fb_cnt_dtl_idx:4;
        RBus_UInt32  local_fb_dtl_sad_idx:4;
        RBus_UInt32  res2:8;
    };
}kme_dehalo_kme_dehalo_local_fb_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  local_fb_dtl_sad:32;
    };
}kme_dehalo_kme_dehalo_local_fb_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  local_fb_en:1;
        RBus_UInt32  local_fb_occ_cor_en:1;
        RBus_UInt32  local_fb_dbg:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  local_fb_alpha:4;
        RBus_UInt32  local_fb_occ_cor_th:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  local_fb_mvp:8;
        RBus_UInt32  local_fb_mvn:8;
    };
}kme_dehalo_kme_dehalo_local_fb_7_RBUS;




#endif 


#endif 
