/**
* @file Merlin5_MEMC_MC2
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_MC2_REG_H_
#define _RBUS_MC2_REG_H_

#include "rbus_types.h"



//  MC2 Register Address
#define  MC2_MC2_00                                                             0x18099700
#define  MC2_MC2_00_reg_addr                                                     "0xB8099700"
#define  MC2_MC2_00_reg                                                          0xB8099700
#define  MC2_MC2_00_inst_addr                                                    "0x0000"
#define  set_MC2_MC2_00_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_00_reg)=data)
#define  get_MC2_MC2_00_reg                                                      (*((volatile unsigned int*)MC2_MC2_00_reg))
#define  MC2_MC2_00_mc_obmc_coef_0x_shift                                        (0)
#define  MC2_MC2_00_mc_obmc_coef_0x_mask                                         (0xFFFFFFFF)
#define  MC2_MC2_00_mc_obmc_coef_0x(data)                                        (0xFFFFFFFF&(data))
#define  MC2_MC2_00_get_mc_obmc_coef_0x(data)                                    (0xFFFFFFFF&(data))

#define  MC2_MC2_04                                                             0x18099704
#define  MC2_MC2_04_reg_addr                                                     "0xB8099704"
#define  MC2_MC2_04_reg                                                          0xB8099704
#define  MC2_MC2_04_inst_addr                                                    "0x0001"
#define  set_MC2_MC2_04_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_04_reg)=data)
#define  get_MC2_MC2_04_reg                                                      (*((volatile unsigned int*)MC2_MC2_04_reg))
#define  MC2_MC2_04_mc_obmc_coef_1x_shift                                        (0)
#define  MC2_MC2_04_mc_obmc_coef_1x_mask                                         (0xFFFFFFFF)
#define  MC2_MC2_04_mc_obmc_coef_1x(data)                                        (0xFFFFFFFF&(data))
#define  MC2_MC2_04_get_mc_obmc_coef_1x(data)                                    (0xFFFFFFFF&(data))

#define  MC2_MC2_08                                                             0x18099708
#define  MC2_MC2_08_reg_addr                                                     "0xB8099708"
#define  MC2_MC2_08_reg                                                          0xB8099708
#define  MC2_MC2_08_inst_addr                                                    "0x0002"
#define  set_MC2_MC2_08_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_08_reg)=data)
#define  get_MC2_MC2_08_reg                                                      (*((volatile unsigned int*)MC2_MC2_08_reg))
#define  MC2_MC2_08_mc_obmc_coef_2x_shift                                        (0)
#define  MC2_MC2_08_mc_obmc_coef_2x_mask                                         (0xFFFFFFFF)
#define  MC2_MC2_08_mc_obmc_coef_2x(data)                                        (0xFFFFFFFF&(data))
#define  MC2_MC2_08_get_mc_obmc_coef_2x(data)                                    (0xFFFFFFFF&(data))

#define  MC2_MC2_0C                                                             0x1809970C
#define  MC2_MC2_0C_reg_addr                                                     "0xB809970C"
#define  MC2_MC2_0C_reg                                                          0xB809970C
#define  MC2_MC2_0C_inst_addr                                                    "0x0003"
#define  set_MC2_MC2_0C_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_0C_reg)=data)
#define  get_MC2_MC2_0C_reg                                                      (*((volatile unsigned int*)MC2_MC2_0C_reg))
#define  MC2_MC2_0C_mc_obmc_coef_3x_shift                                        (0)
#define  MC2_MC2_0C_mc_obmc_coef_3x_mask                                         (0xFFFFFFFF)
#define  MC2_MC2_0C_mc_obmc_coef_3x(data)                                        (0xFFFFFFFF&(data))
#define  MC2_MC2_0C_get_mc_obmc_coef_3x(data)                                    (0xFFFFFFFF&(data))

#define  MC2_MC2_10                                                             0x18099710
#define  MC2_MC2_10_reg_addr                                                     "0xB8099710"
#define  MC2_MC2_10_reg                                                          0xB8099710
#define  MC2_MC2_10_inst_addr                                                    "0x0004"
#define  set_MC2_MC2_10_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_10_reg)=data)
#define  get_MC2_MC2_10_reg                                                      (*((volatile unsigned int*)MC2_MC2_10_reg))
#define  MC2_MC2_10_mc_obmc_coef_4x_shift                                        (0)
#define  MC2_MC2_10_mc_obmc_coef_4x_mask                                         (0xFFFFFFFF)
#define  MC2_MC2_10_mc_obmc_coef_4x(data)                                        (0xFFFFFFFF&(data))
#define  MC2_MC2_10_get_mc_obmc_coef_4x(data)                                    (0xFFFFFFFF&(data))

#define  MC2_MC2_14                                                             0x18099714
#define  MC2_MC2_14_reg_addr                                                     "0xB8099714"
#define  MC2_MC2_14_reg                                                          0xB8099714
#define  MC2_MC2_14_inst_addr                                                    "0x0005"
#define  set_MC2_MC2_14_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_14_reg)=data)
#define  get_MC2_MC2_14_reg                                                      (*((volatile unsigned int*)MC2_MC2_14_reg))
#define  MC2_MC2_14_mc_obmc_coef_5x_shift                                        (0)
#define  MC2_MC2_14_mc_obmc_coef_5x_mask                                         (0xFFFFFFFF)
#define  MC2_MC2_14_mc_obmc_coef_5x(data)                                        (0xFFFFFFFF&(data))
#define  MC2_MC2_14_get_mc_obmc_coef_5x(data)                                    (0xFFFFFFFF&(data))

#define  MC2_MC2_18                                                             0x18099718
#define  MC2_MC2_18_reg_addr                                                     "0xB8099718"
#define  MC2_MC2_18_reg                                                          0xB8099718
#define  MC2_MC2_18_inst_addr                                                    "0x0006"
#define  set_MC2_MC2_18_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_18_reg)=data)
#define  get_MC2_MC2_18_reg                                                      (*((volatile unsigned int*)MC2_MC2_18_reg))
#define  MC2_MC2_18_mc_obmc_coef_6x_shift                                        (0)
#define  MC2_MC2_18_mc_obmc_coef_6x_mask                                         (0xFFFFFFFF)
#define  MC2_MC2_18_mc_obmc_coef_6x(data)                                        (0xFFFFFFFF&(data))
#define  MC2_MC2_18_get_mc_obmc_coef_6x(data)                                    (0xFFFFFFFF&(data))

#define  MC2_MC2_1C                                                             0x1809971C
#define  MC2_MC2_1C_reg_addr                                                     "0xB809971C"
#define  MC2_MC2_1C_reg                                                          0xB809971C
#define  MC2_MC2_1C_inst_addr                                                    "0x0007"
#define  set_MC2_MC2_1C_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_1C_reg)=data)
#define  get_MC2_MC2_1C_reg                                                      (*((volatile unsigned int*)MC2_MC2_1C_reg))
#define  MC2_MC2_1C_mc_obmc_coef_7x_shift                                        (0)
#define  MC2_MC2_1C_mc_obmc_coef_7x_mask                                         (0xFFFFFFFF)
#define  MC2_MC2_1C_mc_obmc_coef_7x(data)                                        (0xFFFFFFFF&(data))
#define  MC2_MC2_1C_get_mc_obmc_coef_7x(data)                                    (0xFFFFFFFF&(data))

#define  MC2_MC2_20                                                             0x18099720
#define  MC2_MC2_20_reg_addr                                                     "0xB8099720"
#define  MC2_MC2_20_reg                                                          0xB8099720
#define  MC2_MC2_20_inst_addr                                                    "0x0008"
#define  set_MC2_MC2_20_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_20_reg)=data)
#define  get_MC2_MC2_20_reg                                                      (*((volatile unsigned int*)MC2_MC2_20_reg))
#define  MC2_MC2_20_mc_sc_disptlr_cnt_shift                                      (22)
#define  MC2_MC2_20_mc_sc_disptlr_en_shift                                       (21)
#define  MC2_MC2_20_mc_pxl_logo_pat_val_shift                                    (20)
#define  MC2_MC2_20_mc_pxl_logo_pat_mode_shift                                   (18)
#define  MC2_MC2_20_mc_pxl_logo_pat_en_shift                                     (17)
#define  MC2_MC2_20_mc_blk_logo_pat_val_shift                                    (16)
#define  MC2_MC2_20_mc_blk_logo_pat_mode_shift                                   (14)
#define  MC2_MC2_20_mc_blk_logo_pat_en_shift                                     (13)
#define  MC2_MC2_20_mc_logo_self_lpf_en_shift                                    (12)
#define  MC2_MC2_20_mc_logo_pt_clip_en_shift                                     (10)
#define  MC2_MC2_20_mc_logo_merge_type_shift                                     (6)
#define  MC2_MC2_20_mc_pxl_logo_v_size_shift                                     (5)
#define  MC2_MC2_20_mc_pxl_logo_h_size_shift                                     (4)
#define  MC2_MC2_20_mc_blk_logo_v_size_shift                                     (3)
#define  MC2_MC2_20_mc_blk_logo_h_size_shift                                     (2)
#define  MC2_MC2_20_mc_logo_en_shift                                             (0)
#define  MC2_MC2_20_mc_sc_disptlr_cnt_mask                                       (0x3FC00000)
#define  MC2_MC2_20_mc_sc_disptlr_en_mask                                        (0x00200000)
#define  MC2_MC2_20_mc_pxl_logo_pat_val_mask                                     (0x00100000)
#define  MC2_MC2_20_mc_pxl_logo_pat_mode_mask                                    (0x000C0000)
#define  MC2_MC2_20_mc_pxl_logo_pat_en_mask                                      (0x00020000)
#define  MC2_MC2_20_mc_blk_logo_pat_val_mask                                     (0x00010000)
#define  MC2_MC2_20_mc_blk_logo_pat_mode_mask                                    (0x0000C000)
#define  MC2_MC2_20_mc_blk_logo_pat_en_mask                                      (0x00002000)
#define  MC2_MC2_20_mc_logo_self_lpf_en_mask                                     (0x00001000)
#define  MC2_MC2_20_mc_logo_pt_clip_en_mask                                      (0x00000C00)
#define  MC2_MC2_20_mc_logo_merge_type_mask                                      (0x000003C0)
#define  MC2_MC2_20_mc_pxl_logo_v_size_mask                                      (0x00000020)
#define  MC2_MC2_20_mc_pxl_logo_h_size_mask                                      (0x00000010)
#define  MC2_MC2_20_mc_blk_logo_v_size_mask                                      (0x00000008)
#define  MC2_MC2_20_mc_blk_logo_h_size_mask                                      (0x00000004)
#define  MC2_MC2_20_mc_logo_en_mask                                              (0x00000003)
#define  MC2_MC2_20_mc_sc_disptlr_cnt(data)                                      (0x3FC00000&((data)<<22))
#define  MC2_MC2_20_mc_sc_disptlr_en(data)                                       (0x00200000&((data)<<21))
#define  MC2_MC2_20_mc_pxl_logo_pat_val(data)                                    (0x00100000&((data)<<20))
#define  MC2_MC2_20_mc_pxl_logo_pat_mode(data)                                   (0x000C0000&((data)<<18))
#define  MC2_MC2_20_mc_pxl_logo_pat_en(data)                                     (0x00020000&((data)<<17))
#define  MC2_MC2_20_mc_blk_logo_pat_val(data)                                    (0x00010000&((data)<<16))
#define  MC2_MC2_20_mc_blk_logo_pat_mode(data)                                   (0x0000C000&((data)<<14))
#define  MC2_MC2_20_mc_blk_logo_pat_en(data)                                     (0x00002000&((data)<<13))
#define  MC2_MC2_20_mc_logo_self_lpf_en(data)                                    (0x00001000&((data)<<12))
#define  MC2_MC2_20_mc_logo_pt_clip_en(data)                                     (0x00000C00&((data)<<10))
#define  MC2_MC2_20_mc_logo_merge_type(data)                                     (0x000003C0&((data)<<6))
#define  MC2_MC2_20_mc_pxl_logo_v_size(data)                                     (0x00000020&((data)<<5))
#define  MC2_MC2_20_mc_pxl_logo_h_size(data)                                     (0x00000010&((data)<<4))
#define  MC2_MC2_20_mc_blk_logo_v_size(data)                                     (0x00000008&((data)<<3))
#define  MC2_MC2_20_mc_blk_logo_h_size(data)                                     (0x00000004&((data)<<2))
#define  MC2_MC2_20_mc_logo_en(data)                                             (0x00000003&(data))
#define  MC2_MC2_20_get_mc_sc_disptlr_cnt(data)                                  ((0x3FC00000&(data))>>22)
#define  MC2_MC2_20_get_mc_sc_disptlr_en(data)                                   ((0x00200000&(data))>>21)
#define  MC2_MC2_20_get_mc_pxl_logo_pat_val(data)                                ((0x00100000&(data))>>20)
#define  MC2_MC2_20_get_mc_pxl_logo_pat_mode(data)                               ((0x000C0000&(data))>>18)
#define  MC2_MC2_20_get_mc_pxl_logo_pat_en(data)                                 ((0x00020000&(data))>>17)
#define  MC2_MC2_20_get_mc_blk_logo_pat_val(data)                                ((0x00010000&(data))>>16)
#define  MC2_MC2_20_get_mc_blk_logo_pat_mode(data)                               ((0x0000C000&(data))>>14)
#define  MC2_MC2_20_get_mc_blk_logo_pat_en(data)                                 ((0x00002000&(data))>>13)
#define  MC2_MC2_20_get_mc_logo_self_lpf_en(data)                                ((0x00001000&(data))>>12)
#define  MC2_MC2_20_get_mc_logo_pt_clip_en(data)                                 ((0x00000C00&(data))>>10)
#define  MC2_MC2_20_get_mc_logo_merge_type(data)                                 ((0x000003C0&(data))>>6)
#define  MC2_MC2_20_get_mc_pxl_logo_v_size(data)                                 ((0x00000020&(data))>>5)
#define  MC2_MC2_20_get_mc_pxl_logo_h_size(data)                                 ((0x00000010&(data))>>4)
#define  MC2_MC2_20_get_mc_blk_logo_v_size(data)                                 ((0x00000008&(data))>>3)
#define  MC2_MC2_20_get_mc_blk_logo_h_size(data)                                 ((0x00000004&(data))>>2)
#define  MC2_MC2_20_get_mc_logo_en(data)                                         (0x00000003&(data))

#define  MC2_MC2_24                                                             0x18099724
#define  MC2_MC2_24_reg_addr                                                     "0xB8099724"
#define  MC2_MC2_24_reg                                                          0xB8099724
#define  MC2_MC2_24_inst_addr                                                    "0x0009"
#define  set_MC2_MC2_24_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_24_reg)=data)
#define  get_MC2_MC2_24_reg                                                      (*((volatile unsigned int*)MC2_MC2_24_reg))
#define  MC2_MC2_24_mc_sc_ret_1st_izpz_mod_shift                                 (17)
#define  MC2_MC2_24_mc_sc_ret_1st_izpz_bld_shift                                 (16)
#define  MC2_MC2_24_mc_blk_logo_v_num_shift                                      (8)
#define  MC2_MC2_24_mc_blk_logo_h_num_shift                                      (0)
#define  MC2_MC2_24_mc_sc_ret_1st_izpz_mod_mask                                  (0x000E0000)
#define  MC2_MC2_24_mc_sc_ret_1st_izpz_bld_mask                                  (0x00010000)
#define  MC2_MC2_24_mc_blk_logo_v_num_mask                                       (0x0000FF00)
#define  MC2_MC2_24_mc_blk_logo_h_num_mask                                       (0x000000FF)
#define  MC2_MC2_24_mc_sc_ret_1st_izpz_mod(data)                                 (0x000E0000&((data)<<17))
#define  MC2_MC2_24_mc_sc_ret_1st_izpz_bld(data)                                 (0x00010000&((data)<<16))
#define  MC2_MC2_24_mc_blk_logo_v_num(data)                                      (0x0000FF00&((data)<<8))
#define  MC2_MC2_24_mc_blk_logo_h_num(data)                                      (0x000000FF&(data))
#define  MC2_MC2_24_get_mc_sc_ret_1st_izpz_mod(data)                             ((0x000E0000&(data))>>17)
#define  MC2_MC2_24_get_mc_sc_ret_1st_izpz_bld(data)                             ((0x00010000&(data))>>16)
#define  MC2_MC2_24_get_mc_blk_logo_v_num(data)                                  ((0x0000FF00&(data))>>8)
#define  MC2_MC2_24_get_mc_blk_logo_h_num(data)                                  (0x000000FF&(data))

#define  MC2_MC2_28                                                             0x18099728
#define  MC2_MC2_28_reg_addr                                                     "0xB8099728"
#define  MC2_MC2_28_reg                                                          0xB8099728
#define  MC2_MC2_28_inst_addr                                                    "0x000A"
#define  set_MC2_MC2_28_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_28_reg)=data)
#define  get_MC2_MC2_28_reg                                                      (*((volatile unsigned int*)MC2_MC2_28_reg))
#define  MC2_MC2_28_mc_pxl_logo_v_num_shift                                      (16)
#define  MC2_MC2_28_mc_pxl_logo_h_num_shift                                      (0)
#define  MC2_MC2_28_mc_pxl_logo_v_num_mask                                       (0x03FF0000)
#define  MC2_MC2_28_mc_pxl_logo_h_num_mask                                       (0x000003FF)
#define  MC2_MC2_28_mc_pxl_logo_v_num(data)                                      (0x03FF0000&((data)<<16))
#define  MC2_MC2_28_mc_pxl_logo_h_num(data)                                      (0x000003FF&(data))
#define  MC2_MC2_28_get_mc_pxl_logo_v_num(data)                                  ((0x03FF0000&(data))>>16)
#define  MC2_MC2_28_get_mc_pxl_logo_h_num(data)                                  (0x000003FF&(data))

#define  MC2_MC2_2C                                                             0x1809972C
#define  MC2_MC2_2C_reg_addr                                                     "0xB809972C"
#define  MC2_MC2_2C_reg                                                          0xB809972C
#define  MC2_MC2_2C_inst_addr                                                    "0x000B"
#define  set_MC2_MC2_2C_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_2C_reg)=data)
#define  get_MC2_MC2_2C_reg                                                      (*((volatile unsigned int*)MC2_MC2_2C_reg))
#define  MC2_MC2_2C_mc_logo_lpf_coef1_01_shift                                   (16)
#define  MC2_MC2_2C_mc_logo_lpf_coef1_00_shift                                   (12)
#define  MC2_MC2_2C_mc_logo_lpf_coef0_02_shift                                   (8)
#define  MC2_MC2_2C_mc_logo_lpf_coef0_01_shift                                   (4)
#define  MC2_MC2_2C_mc_logo_lpf_coef0_00_shift                                   (0)
#define  MC2_MC2_2C_mc_logo_lpf_coef1_01_mask                                    (0x000F0000)
#define  MC2_MC2_2C_mc_logo_lpf_coef1_00_mask                                    (0x0000F000)
#define  MC2_MC2_2C_mc_logo_lpf_coef0_02_mask                                    (0x00000F00)
#define  MC2_MC2_2C_mc_logo_lpf_coef0_01_mask                                    (0x000000F0)
#define  MC2_MC2_2C_mc_logo_lpf_coef0_00_mask                                    (0x0000000F)
#define  MC2_MC2_2C_mc_logo_lpf_coef1_01(data)                                   (0x000F0000&((data)<<16))
#define  MC2_MC2_2C_mc_logo_lpf_coef1_00(data)                                   (0x0000F000&((data)<<12))
#define  MC2_MC2_2C_mc_logo_lpf_coef0_02(data)                                   (0x00000F00&((data)<<8))
#define  MC2_MC2_2C_mc_logo_lpf_coef0_01(data)                                   (0x000000F0&((data)<<4))
#define  MC2_MC2_2C_mc_logo_lpf_coef0_00(data)                                   (0x0000000F&(data))
#define  MC2_MC2_2C_get_mc_logo_lpf_coef1_01(data)                               ((0x000F0000&(data))>>16)
#define  MC2_MC2_2C_get_mc_logo_lpf_coef1_00(data)                               ((0x0000F000&(data))>>12)
#define  MC2_MC2_2C_get_mc_logo_lpf_coef0_02(data)                               ((0x00000F00&(data))>>8)
#define  MC2_MC2_2C_get_mc_logo_lpf_coef0_01(data)                               ((0x000000F0&(data))>>4)
#define  MC2_MC2_2C_get_mc_logo_lpf_coef0_00(data)                               (0x0000000F&(data))

#define  MC2_MC2_30                                                             0x18099730
#define  MC2_MC2_30_reg_addr                                                     "0xB8099730"
#define  MC2_MC2_30_reg                                                          0xB8099730
#define  MC2_MC2_30_inst_addr                                                    "0x000C"
#define  set_MC2_MC2_30_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_30_reg)=data)
#define  get_MC2_MC2_30_reg                                                      (*((volatile unsigned int*)MC2_MC2_30_reg))
#define  MC2_MC2_30_mc_logo_self_alpha_max_shift                                 (20)
#define  MC2_MC2_30_mc_logo_self_alpha_min_shift                                 (16)
#define  MC2_MC2_30_mc_logo_self_alpha_slp_shift                                 (8)
#define  MC2_MC2_30_mc_logo_self_alpha_th_shift                                  (0)
#define  MC2_MC2_30_mc_logo_self_alpha_max_mask                                  (0x00F00000)
#define  MC2_MC2_30_mc_logo_self_alpha_min_mask                                  (0x000F0000)
#define  MC2_MC2_30_mc_logo_self_alpha_slp_mask                                  (0x0000FF00)
#define  MC2_MC2_30_mc_logo_self_alpha_th_mask                                   (0x000000FF)
#define  MC2_MC2_30_mc_logo_self_alpha_max(data)                                 (0x00F00000&((data)<<20))
#define  MC2_MC2_30_mc_logo_self_alpha_min(data)                                 (0x000F0000&((data)<<16))
#define  MC2_MC2_30_mc_logo_self_alpha_slp(data)                                 (0x0000FF00&((data)<<8))
#define  MC2_MC2_30_mc_logo_self_alpha_th(data)                                  (0x000000FF&(data))
#define  MC2_MC2_30_get_mc_logo_self_alpha_max(data)                             ((0x00F00000&(data))>>20)
#define  MC2_MC2_30_get_mc_logo_self_alpha_min(data)                             ((0x000F0000&(data))>>16)
#define  MC2_MC2_30_get_mc_logo_self_alpha_slp(data)                             ((0x0000FF00&(data))>>8)
#define  MC2_MC2_30_get_mc_logo_self_alpha_th(data)                              (0x000000FF&(data))

#define  MC2_MC2_50                                                             0x18099750
#define  MC2_MC2_50_reg_addr                                                     "0xB8099750"
#define  MC2_MC2_50_reg                                                          0xB8099750
#define  MC2_MC2_50_inst_addr                                                    "0x000D"
#define  set_MC2_MC2_50_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_50_reg)=data)
#define  get_MC2_MC2_50_reg                                                      (*((volatile unsigned int*)MC2_MC2_50_reg))
#define  MC2_MC2_50_mc_var_dbpt_lvl_shift                                        (12)
#define  MC2_MC2_50_mc_var_dbpt_lpf_en_shift                                     (11)
#define  MC2_MC2_50_mc_var_occl_lvl_shift                                        (4)
#define  MC2_MC2_50_mc_var_lvl_mode_shift                                        (3)
#define  MC2_MC2_50_mc_var_occl_intp_en_shift                                    (2)
#define  MC2_MC2_50_mc_var_lpf_en_shift                                          (0)
#define  MC2_MC2_50_mc_var_dbpt_lvl_mask                                         (0x0007F000)
#define  MC2_MC2_50_mc_var_dbpt_lpf_en_mask                                      (0x00000800)
#define  MC2_MC2_50_mc_var_occl_lvl_mask                                         (0x000007F0)
#define  MC2_MC2_50_mc_var_lvl_mode_mask                                         (0x00000008)
#define  MC2_MC2_50_mc_var_occl_intp_en_mask                                     (0x00000004)
#define  MC2_MC2_50_mc_var_lpf_en_mask                                           (0x00000003)
#define  MC2_MC2_50_mc_var_dbpt_lvl(data)                                        (0x0007F000&((data)<<12))
#define  MC2_MC2_50_mc_var_dbpt_lpf_en(data)                                     (0x00000800&((data)<<11))
#define  MC2_MC2_50_mc_var_occl_lvl(data)                                        (0x000007F0&((data)<<4))
#define  MC2_MC2_50_mc_var_lvl_mode(data)                                        (0x00000008&((data)<<3))
#define  MC2_MC2_50_mc_var_occl_intp_en(data)                                    (0x00000004&((data)<<2))
#define  MC2_MC2_50_mc_var_lpf_en(data)                                          (0x00000003&(data))
#define  MC2_MC2_50_get_mc_var_dbpt_lvl(data)                                    ((0x0007F000&(data))>>12)
#define  MC2_MC2_50_get_mc_var_dbpt_lpf_en(data)                                 ((0x00000800&(data))>>11)
#define  MC2_MC2_50_get_mc_var_occl_lvl(data)                                    ((0x000007F0&(data))>>4)
#define  MC2_MC2_50_get_mc_var_lvl_mode(data)                                    ((0x00000008&(data))>>3)
#define  MC2_MC2_50_get_mc_var_occl_intp_en(data)                                ((0x00000004&(data))>>2)
#define  MC2_MC2_50_get_mc_var_lpf_en(data)                                      (0x00000003&(data))

#define  MC2_MC2_54                                                             0x18099754
#define  MC2_MC2_54_reg_addr                                                     "0xB8099754"
#define  MC2_MC2_54_reg                                                          0xB8099754
#define  MC2_MC2_54_inst_addr                                                    "0x000E"
#define  set_MC2_MC2_54_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_54_reg)=data)
#define  get_MC2_MC2_54_reg                                                      (*((volatile unsigned int*)MC2_MC2_54_reg))
#define  MC2_MC2_54_mc_var_mvd_y_max_shift                                       (24)
#define  MC2_MC2_54_mc_var_mvd_y_min_shift                                       (16)
#define  MC2_MC2_54_mc_var_mvd_slope_shift                                       (8)
#define  MC2_MC2_54_mc_var_mvd_x_th_shift                                        (0)
#define  MC2_MC2_54_mc_var_mvd_y_max_mask                                        (0x7F000000)
#define  MC2_MC2_54_mc_var_mvd_y_min_mask                                        (0x007F0000)
#define  MC2_MC2_54_mc_var_mvd_slope_mask                                        (0x0000FF00)
#define  MC2_MC2_54_mc_var_mvd_x_th_mask                                         (0x000000FF)
#define  MC2_MC2_54_mc_var_mvd_y_max(data)                                       (0x7F000000&((data)<<24))
#define  MC2_MC2_54_mc_var_mvd_y_min(data)                                       (0x007F0000&((data)<<16))
#define  MC2_MC2_54_mc_var_mvd_slope(data)                                       (0x0000FF00&((data)<<8))
#define  MC2_MC2_54_mc_var_mvd_x_th(data)                                        (0x000000FF&(data))
#define  MC2_MC2_54_get_mc_var_mvd_y_max(data)                                   ((0x7F000000&(data))>>24)
#define  MC2_MC2_54_get_mc_var_mvd_y_min(data)                                   ((0x007F0000&(data))>>16)
#define  MC2_MC2_54_get_mc_var_mvd_slope(data)                                   ((0x0000FF00&(data))>>8)
#define  MC2_MC2_54_get_mc_var_mvd_x_th(data)                                    (0x000000FF&(data))

#define  MC2_MC2_58                                                             0x18099758
#define  MC2_MC2_58_reg_addr                                                     "0xB8099758"
#define  MC2_MC2_58_reg                                                          0xB8099758
#define  MC2_MC2_58_inst_addr                                                    "0x000F"
#define  set_MC2_MC2_58_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_58_reg)=data)
#define  get_MC2_MC2_58_reg                                                      (*((volatile unsigned int*)MC2_MC2_58_reg))
#define  MC2_MC2_58_mc_var_fir_y_max_shift                                       (16)
#define  MC2_MC2_58_mc_var_fir_y_min_shift                                       (12)
#define  MC2_MC2_58_mc_var_fir_slope_shift                                       (8)
#define  MC2_MC2_58_mc_var_fir_x_th_shift                                        (0)
#define  MC2_MC2_58_mc_var_fir_y_max_mask                                        (0x000F0000)
#define  MC2_MC2_58_mc_var_fir_y_min_mask                                        (0x0000F000)
#define  MC2_MC2_58_mc_var_fir_slope_mask                                        (0x00000F00)
#define  MC2_MC2_58_mc_var_fir_x_th_mask                                         (0x000000FF)
#define  MC2_MC2_58_mc_var_fir_y_max(data)                                       (0x000F0000&((data)<<16))
#define  MC2_MC2_58_mc_var_fir_y_min(data)                                       (0x0000F000&((data)<<12))
#define  MC2_MC2_58_mc_var_fir_slope(data)                                       (0x00000F00&((data)<<8))
#define  MC2_MC2_58_mc_var_fir_x_th(data)                                        (0x000000FF&(data))
#define  MC2_MC2_58_get_mc_var_fir_y_max(data)                                   ((0x000F0000&(data))>>16)
#define  MC2_MC2_58_get_mc_var_fir_y_min(data)                                   ((0x0000F000&(data))>>12)
#define  MC2_MC2_58_get_mc_var_fir_slope(data)                                   ((0x00000F00&(data))>>8)
#define  MC2_MC2_58_get_mc_var_fir_x_th(data)                                    (0x000000FF&(data))

#define  MC2_MC2_5C                                                             0x1809975C
#define  MC2_MC2_5C_reg_addr                                                     "0xB809975C"
#define  MC2_MC2_5C_reg                                                          0xB809975C
#define  MC2_MC2_5C_inst_addr                                                    "0x0010"
#define  set_MC2_MC2_5C_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_5C_reg)=data)
#define  get_MC2_MC2_5C_reg                                                      (*((volatile unsigned int*)MC2_MC2_5C_reg))
#define  MC2_MC2_5C_mc_var_fir_coef_shift                                        (0)
#define  MC2_MC2_5C_mc_var_fir_coef_mask                                         (0x000FFFFF)
#define  MC2_MC2_5C_mc_var_fir_coef(data)                                        (0x000FFFFF&(data))
#define  MC2_MC2_5C_get_mc_var_fir_coef(data)                                    (0x000FFFFF&(data))

#define  MC2_MC2_60                                                             0x18099760
#define  MC2_MC2_60_reg_addr                                                     "0xB8099760"
#define  MC2_MC2_60_reg                                                          0xB8099760
#define  MC2_MC2_60_inst_addr                                                    "0x0011"
#define  set_MC2_MC2_60_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_60_reg)=data)
#define  get_MC2_MC2_60_reg                                                      (*((volatile unsigned int*)MC2_MC2_60_reg))
#define  MC2_MC2_60_mc_rim_occl_excu_shift                                       (30)
#define  MC2_MC2_60_mc_dia_v_th1_shift                                           (22)
#define  MC2_MC2_60_mc_dia_v_th0_shift                                           (14)
#define  MC2_MC2_60_mc_dia_cnt_coef3_shift                                       (11)
#define  MC2_MC2_60_mc_dia_cnt_coef2_shift                                       (8)
#define  MC2_MC2_60_mc_dia_cnt_coef1_shift                                       (5)
#define  MC2_MC2_60_mc_occ_dly_ctrl_shift                                        (1)
#define  MC2_MC2_60_mc_occlt_dia_en_shift                                        (0)
#define  MC2_MC2_60_mc_rim_occl_excu_mask                                        (0x40000000)
#define  MC2_MC2_60_mc_dia_v_th1_mask                                            (0x3FC00000)
#define  MC2_MC2_60_mc_dia_v_th0_mask                                            (0x003FC000)
#define  MC2_MC2_60_mc_dia_cnt_coef3_mask                                        (0x00003800)
#define  MC2_MC2_60_mc_dia_cnt_coef2_mask                                        (0x00000700)
#define  MC2_MC2_60_mc_dia_cnt_coef1_mask                                        (0x000000E0)
#define  MC2_MC2_60_mc_occ_dly_ctrl_mask                                         (0x0000001E)
#define  MC2_MC2_60_mc_occlt_dia_en_mask                                         (0x00000001)
#define  MC2_MC2_60_mc_rim_occl_excu(data)                                       (0x40000000&((data)<<30))
#define  MC2_MC2_60_mc_dia_v_th1(data)                                           (0x3FC00000&((data)<<22))
#define  MC2_MC2_60_mc_dia_v_th0(data)                                           (0x003FC000&((data)<<14))
#define  MC2_MC2_60_mc_dia_cnt_coef3(data)                                       (0x00003800&((data)<<11))
#define  MC2_MC2_60_mc_dia_cnt_coef2(data)                                       (0x00000700&((data)<<8))
#define  MC2_MC2_60_mc_dia_cnt_coef1(data)                                       (0x000000E0&((data)<<5))
#define  MC2_MC2_60_mc_occ_dly_ctrl(data)                                        (0x0000001E&((data)<<1))
#define  MC2_MC2_60_mc_occlt_dia_en(data)                                        (0x00000001&(data))
#define  MC2_MC2_60_get_mc_rim_occl_excu(data)                                   ((0x40000000&(data))>>30)
#define  MC2_MC2_60_get_mc_dia_v_th1(data)                                       ((0x3FC00000&(data))>>22)
#define  MC2_MC2_60_get_mc_dia_v_th0(data)                                       ((0x003FC000&(data))>>14)
#define  MC2_MC2_60_get_mc_dia_cnt_coef3(data)                                   ((0x00003800&(data))>>11)
#define  MC2_MC2_60_get_mc_dia_cnt_coef2(data)                                   ((0x00000700&(data))>>8)
#define  MC2_MC2_60_get_mc_dia_cnt_coef1(data)                                   ((0x000000E0&(data))>>5)
#define  MC2_MC2_60_get_mc_occ_dly_ctrl(data)                                    ((0x0000001E&(data))>>1)
#define  MC2_MC2_60_get_mc_occlt_dia_en(data)                                    (0x00000001&(data))

#define  MC2_MC2_64                                                             0x18099764
#define  MC2_MC2_64_reg_addr                                                     "0xB8099764"
#define  MC2_MC2_64_reg                                                          0xB8099764
#define  MC2_MC2_64_inst_addr                                                    "0x0012"
#define  set_MC2_MC2_64_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_64_reg)=data)
#define  get_MC2_MC2_64_reg                                                      (*((volatile unsigned int*)MC2_MC2_64_reg))
#define  MC2_MC2_64_mc_dia_c_th1_shift                                           (9)
#define  MC2_MC2_64_mc_dia_c_th0_shift                                           (0)
#define  MC2_MC2_64_mc_dia_c_th1_mask                                            (0x0003FE00)
#define  MC2_MC2_64_mc_dia_c_th0_mask                                            (0x000001FF)
#define  MC2_MC2_64_mc_dia_c_th1(data)                                           (0x0003FE00&((data)<<9))
#define  MC2_MC2_64_mc_dia_c_th0(data)                                           (0x000001FF&(data))
#define  MC2_MC2_64_get_mc_dia_c_th1(data)                                       ((0x0003FE00&(data))>>9)
#define  MC2_MC2_64_get_mc_dia_c_th0(data)                                       (0x000001FF&(data))

#define  MC2_MC2_68                                                             0x18099768
#define  MC2_MC2_68_reg_addr                                                     "0xB8099768"
#define  MC2_MC2_68_reg                                                          0xB8099768
#define  MC2_MC2_68_inst_addr                                                    "0x0013"
#define  set_MC2_MC2_68_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_68_reg)=data)
#define  get_MC2_MC2_68_reg                                                      (*((volatile unsigned int*)MC2_MC2_68_reg))
#define  MC2_MC2_68_mc_var17tap_en_shift                                         (18)
#define  MC2_MC2_68_mc_dia_h_th1_shift                                           (9)
#define  MC2_MC2_68_mc_dia_h_th0_shift                                           (0)
#define  MC2_MC2_68_mc_var17tap_en_mask                                          (0x00040000)
#define  MC2_MC2_68_mc_dia_h_th1_mask                                            (0x0003FE00)
#define  MC2_MC2_68_mc_dia_h_th0_mask                                            (0x000001FF)
#define  MC2_MC2_68_mc_var17tap_en(data)                                         (0x00040000&((data)<<18))
#define  MC2_MC2_68_mc_dia_h_th1(data)                                           (0x0003FE00&((data)<<9))
#define  MC2_MC2_68_mc_dia_h_th0(data)                                           (0x000001FF&(data))
#define  MC2_MC2_68_get_mc_var17tap_en(data)                                     ((0x00040000&(data))>>18)
#define  MC2_MC2_68_get_mc_dia_h_th1(data)                                       ((0x0003FE00&(data))>>9)
#define  MC2_MC2_68_get_mc_dia_h_th0(data)                                       (0x000001FF&(data))

#define  MC2_MC2_6C                                                             0x1809976C
#define  MC2_MC2_6C_reg_addr                                                     "0xB809976C"
#define  MC2_MC2_6C_reg                                                          0xB809976C
#define  MC2_MC2_6C_inst_addr                                                    "0x0014"
#define  set_MC2_MC2_6C_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_6C_reg)=data)
#define  get_MC2_MC2_6C_reg                                                      (*((volatile unsigned int*)MC2_MC2_6C_reg))
#define  MC2_MC2_6C_mc_varfir17_coef3_shift                                      (24)
#define  MC2_MC2_6C_mc_varfir17_coef2_shift                                      (16)
#define  MC2_MC2_6C_mc_varfir17_coef1_shift                                      (8)
#define  MC2_MC2_6C_mc_varfir17_coef0_shift                                      (0)
#define  MC2_MC2_6C_mc_varfir17_coef3_mask                                       (0xFF000000)
#define  MC2_MC2_6C_mc_varfir17_coef2_mask                                       (0x00FF0000)
#define  MC2_MC2_6C_mc_varfir17_coef1_mask                                       (0x0000FF00)
#define  MC2_MC2_6C_mc_varfir17_coef0_mask                                       (0x000000FF)
#define  MC2_MC2_6C_mc_varfir17_coef3(data)                                      (0xFF000000&((data)<<24))
#define  MC2_MC2_6C_mc_varfir17_coef2(data)                                      (0x00FF0000&((data)<<16))
#define  MC2_MC2_6C_mc_varfir17_coef1(data)                                      (0x0000FF00&((data)<<8))
#define  MC2_MC2_6C_mc_varfir17_coef0(data)                                      (0x000000FF&(data))
#define  MC2_MC2_6C_get_mc_varfir17_coef3(data)                                  ((0xFF000000&(data))>>24)
#define  MC2_MC2_6C_get_mc_varfir17_coef2(data)                                  ((0x00FF0000&(data))>>16)
#define  MC2_MC2_6C_get_mc_varfir17_coef1(data)                                  ((0x0000FF00&(data))>>8)
#define  MC2_MC2_6C_get_mc_varfir17_coef0(data)                                  (0x000000FF&(data))

#define  MC2_MC2_70                                                             0x18099770
#define  MC2_MC2_70_reg_addr                                                     "0xB8099770"
#define  MC2_MC2_70_reg                                                          0xB8099770
#define  MC2_MC2_70_inst_addr                                                    "0x0015"
#define  set_MC2_MC2_70_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_70_reg)=data)
#define  get_MC2_MC2_70_reg                                                      (*((volatile unsigned int*)MC2_MC2_70_reg))
#define  MC2_MC2_70_mc_varfir17_coef7_shift                                      (24)
#define  MC2_MC2_70_mc_varfir17_coef6_shift                                      (16)
#define  MC2_MC2_70_mc_varfir17_coef5_shift                                      (8)
#define  MC2_MC2_70_mc_varfir17_coef4_shift                                      (0)
#define  MC2_MC2_70_mc_varfir17_coef7_mask                                       (0xFF000000)
#define  MC2_MC2_70_mc_varfir17_coef6_mask                                       (0x00FF0000)
#define  MC2_MC2_70_mc_varfir17_coef5_mask                                       (0x0000FF00)
#define  MC2_MC2_70_mc_varfir17_coef4_mask                                       (0x000000FF)
#define  MC2_MC2_70_mc_varfir17_coef7(data)                                      (0xFF000000&((data)<<24))
#define  MC2_MC2_70_mc_varfir17_coef6(data)                                      (0x00FF0000&((data)<<16))
#define  MC2_MC2_70_mc_varfir17_coef5(data)                                      (0x0000FF00&((data)<<8))
#define  MC2_MC2_70_mc_varfir17_coef4(data)                                      (0x000000FF&(data))
#define  MC2_MC2_70_get_mc_varfir17_coef7(data)                                  ((0xFF000000&(data))>>24)
#define  MC2_MC2_70_get_mc_varfir17_coef6(data)                                  ((0x00FF0000&(data))>>16)
#define  MC2_MC2_70_get_mc_varfir17_coef5(data)                                  ((0x0000FF00&(data))>>8)
#define  MC2_MC2_70_get_mc_varfir17_coef4(data)                                  (0x000000FF&(data))

#define  MC2_MC2_74                                                             0x18099774
#define  MC2_MC2_74_reg_addr                                                     "0xB8099774"
#define  MC2_MC2_74_reg                                                          0xB8099774
#define  MC2_MC2_74_inst_addr                                                    "0x0016"
#define  set_MC2_MC2_74_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_74_reg)=data)
#define  get_MC2_MC2_74_reg                                                      (*((volatile unsigned int*)MC2_MC2_74_reg))
#define  MC2_MC2_74_lbmc_logo_y2_shift                                           (24)
#define  MC2_MC2_74_lbmc_logo_y1_shift                                           (16)
#define  MC2_MC2_74_lbmc_logo_diff_th_shift                                      (8)
#define  MC2_MC2_74_mc_varfir17_coef8_shift                                      (0)
#define  MC2_MC2_74_lbmc_logo_y2_mask                                            (0xFF000000)
#define  MC2_MC2_74_lbmc_logo_y1_mask                                            (0x00FF0000)
#define  MC2_MC2_74_lbmc_logo_diff_th_mask                                       (0x0000FF00)
#define  MC2_MC2_74_mc_varfir17_coef8_mask                                       (0x000000FF)
#define  MC2_MC2_74_lbmc_logo_y2(data)                                           (0xFF000000&((data)<<24))
#define  MC2_MC2_74_lbmc_logo_y1(data)                                           (0x00FF0000&((data)<<16))
#define  MC2_MC2_74_lbmc_logo_diff_th(data)                                      (0x0000FF00&((data)<<8))
#define  MC2_MC2_74_mc_varfir17_coef8(data)                                      (0x000000FF&(data))
#define  MC2_MC2_74_get_lbmc_logo_y2(data)                                       ((0xFF000000&(data))>>24)
#define  MC2_MC2_74_get_lbmc_logo_y1(data)                                       ((0x00FF0000&(data))>>16)
#define  MC2_MC2_74_get_lbmc_logo_diff_th(data)                                  ((0x0000FF00&(data))>>8)
#define  MC2_MC2_74_get_mc_varfir17_coef8(data)                                  (0x000000FF&(data))

#define  MC2_MC2_7C                                                             0x1809977C
#define  MC2_MC2_7C_reg_addr                                                     "0xB809977C"
#define  MC2_MC2_7C_reg                                                          0xB809977C
#define  MC2_MC2_7C_inst_addr                                                    "0x0017"
#define  set_MC2_MC2_7C_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_7C_reg)=data)
#define  get_MC2_MC2_7C_reg                                                      (*((volatile unsigned int*)MC2_MC2_7C_reg))
#define  MC2_MC2_7C_lbmc_logo_dil_th_shift                                       (23)
#define  MC2_MC2_7C_lbmc_logo_dil_coef2_shift                                    (19)
#define  MC2_MC2_7C_lbmc_logo_dil_coef1_shift                                    (15)
#define  MC2_MC2_7C_lbmc_logo_dil_coef0_shift                                    (11)
#define  MC2_MC2_7C_lbmc_logo_continu_bypa_shift                                 (10)
#define  MC2_MC2_7C_lbmc_logo_zdiff_byps_shift                                   (9)
#define  MC2_MC2_7C_lbmc_logo_color_bypa_shift                                   (8)
#define  MC2_MC2_7C_lbmc_logo_avg_th_shift                                       (0)
#define  MC2_MC2_7C_lbmc_logo_dil_th_mask                                        (0x3F800000)
#define  MC2_MC2_7C_lbmc_logo_dil_coef2_mask                                     (0x00780000)
#define  MC2_MC2_7C_lbmc_logo_dil_coef1_mask                                     (0x00078000)
#define  MC2_MC2_7C_lbmc_logo_dil_coef0_mask                                     (0x00007800)
#define  MC2_MC2_7C_lbmc_logo_continu_bypa_mask                                  (0x00000400)
#define  MC2_MC2_7C_lbmc_logo_zdiff_byps_mask                                    (0x00000200)
#define  MC2_MC2_7C_lbmc_logo_color_bypa_mask                                    (0x00000100)
#define  MC2_MC2_7C_lbmc_logo_avg_th_mask                                        (0x000000FF)
#define  MC2_MC2_7C_lbmc_logo_dil_th(data)                                       (0x3F800000&((data)<<23))
#define  MC2_MC2_7C_lbmc_logo_dil_coef2(data)                                    (0x00780000&((data)<<19))
#define  MC2_MC2_7C_lbmc_logo_dil_coef1(data)                                    (0x00078000&((data)<<15))
#define  MC2_MC2_7C_lbmc_logo_dil_coef0(data)                                    (0x00007800&((data)<<11))
#define  MC2_MC2_7C_lbmc_logo_continu_bypa(data)                                 (0x00000400&((data)<<10))
#define  MC2_MC2_7C_lbmc_logo_zdiff_byps(data)                                   (0x00000200&((data)<<9))
#define  MC2_MC2_7C_lbmc_logo_color_bypa(data)                                   (0x00000100&((data)<<8))
#define  MC2_MC2_7C_lbmc_logo_avg_th(data)                                       (0x000000FF&(data))
#define  MC2_MC2_7C_get_lbmc_logo_dil_th(data)                                   ((0x3F800000&(data))>>23)
#define  MC2_MC2_7C_get_lbmc_logo_dil_coef2(data)                                ((0x00780000&(data))>>19)
#define  MC2_MC2_7C_get_lbmc_logo_dil_coef1(data)                                ((0x00078000&(data))>>15)
#define  MC2_MC2_7C_get_lbmc_logo_dil_coef0(data)                                ((0x00007800&(data))>>11)
#define  MC2_MC2_7C_get_lbmc_logo_continu_bypa(data)                             ((0x00000400&(data))>>10)
#define  MC2_MC2_7C_get_lbmc_logo_zdiff_byps(data)                               ((0x00000200&(data))>>9)
#define  MC2_MC2_7C_get_lbmc_logo_color_bypa(data)                               ((0x00000100&(data))>>8)
#define  MC2_MC2_7C_get_lbmc_logo_avg_th(data)                                   (0x000000FF&(data))

#define  MC2_MC2_80                                                             0x18099780
#define  MC2_MC2_80_reg_addr                                                     "0xB8099780"
#define  MC2_MC2_80_reg                                                          0xB8099780
#define  MC2_MC2_80_inst_addr                                                    "0x0018"
#define  set_MC2_MC2_80_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_80_reg)=data)
#define  get_MC2_MC2_80_reg                                                      (*((volatile unsigned int*)MC2_MC2_80_reg))
#define  MC2_MC2_80_lbmc_logo_y_range_shift                                      (24)
#define  MC2_MC2_80_lbmc_logo_rgn_x2_shift                                       (12)
#define  MC2_MC2_80_lbmc_logo_rgn_x1_shift                                       (0)
#define  MC2_MC2_80_lbmc_logo_y_range_mask                                       (0xFF000000)
#define  MC2_MC2_80_lbmc_logo_rgn_x2_mask                                        (0x00FFF000)
#define  MC2_MC2_80_lbmc_logo_rgn_x1_mask                                        (0x00000FFF)
#define  MC2_MC2_80_lbmc_logo_y_range(data)                                      (0xFF000000&((data)<<24))
#define  MC2_MC2_80_lbmc_logo_rgn_x2(data)                                       (0x00FFF000&((data)<<12))
#define  MC2_MC2_80_lbmc_logo_rgn_x1(data)                                       (0x00000FFF&(data))
#define  MC2_MC2_80_get_lbmc_logo_y_range(data)                                  ((0xFF000000&(data))>>24)
#define  MC2_MC2_80_get_lbmc_logo_rgn_x2(data)                                   ((0x00FFF000&(data))>>12)
#define  MC2_MC2_80_get_lbmc_logo_rgn_x1(data)                                   (0x00000FFF&(data))

#define  MC2_MC2_84                                                             0x18099784
#define  MC2_MC2_84_reg_addr                                                     "0xB8099784"
#define  MC2_MC2_84_reg                                                          0xB8099784
#define  MC2_MC2_84_inst_addr                                                    "0x0019"
#define  set_MC2_MC2_84_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_84_reg)=data)
#define  get_MC2_MC2_84_reg                                                      (*((volatile unsigned int*)MC2_MC2_84_reg))
#define  MC2_MC2_84_lbmc_logo_u_shift                                            (24)
#define  MC2_MC2_84_lbmc_logo_rgn_x4_shift                                       (12)
#define  MC2_MC2_84_lbmc_logo_rgn_x3_shift                                       (0)
#define  MC2_MC2_84_lbmc_logo_u_mask                                             (0xFF000000)
#define  MC2_MC2_84_lbmc_logo_rgn_x4_mask                                        (0x00FFF000)
#define  MC2_MC2_84_lbmc_logo_rgn_x3_mask                                        (0x00000FFF)
#define  MC2_MC2_84_lbmc_logo_u(data)                                            (0xFF000000&((data)<<24))
#define  MC2_MC2_84_lbmc_logo_rgn_x4(data)                                       (0x00FFF000&((data)<<12))
#define  MC2_MC2_84_lbmc_logo_rgn_x3(data)                                       (0x00000FFF&(data))
#define  MC2_MC2_84_get_lbmc_logo_u(data)                                        ((0xFF000000&(data))>>24)
#define  MC2_MC2_84_get_lbmc_logo_rgn_x4(data)                                   ((0x00FFF000&(data))>>12)
#define  MC2_MC2_84_get_lbmc_logo_rgn_x3(data)                                   (0x00000FFF&(data))

#define  MC2_MC2_88                                                             0x18099788
#define  MC2_MC2_88_reg_addr                                                     "0xB8099788"
#define  MC2_MC2_88_reg                                                          0xB8099788
#define  MC2_MC2_88_inst_addr                                                    "0x001A"
#define  set_MC2_MC2_88_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_88_reg)=data)
#define  get_MC2_MC2_88_reg                                                      (*((volatile unsigned int*)MC2_MC2_88_reg))
#define  MC2_MC2_88_lbmc_logo_v_shift                                            (24)
#define  MC2_MC2_88_lbmc_logo_rgn_y1_shift                                       (12)
#define  MC2_MC2_88_lbmc_logo_rgn_x5_shift                                       (0)
#define  MC2_MC2_88_lbmc_logo_v_mask                                             (0xFF000000)
#define  MC2_MC2_88_lbmc_logo_rgn_y1_mask                                        (0x00FFF000)
#define  MC2_MC2_88_lbmc_logo_rgn_x5_mask                                        (0x00000FFF)
#define  MC2_MC2_88_lbmc_logo_v(data)                                            (0xFF000000&((data)<<24))
#define  MC2_MC2_88_lbmc_logo_rgn_y1(data)                                       (0x00FFF000&((data)<<12))
#define  MC2_MC2_88_lbmc_logo_rgn_x5(data)                                       (0x00000FFF&(data))
#define  MC2_MC2_88_get_lbmc_logo_v(data)                                        ((0xFF000000&(data))>>24)
#define  MC2_MC2_88_get_lbmc_logo_rgn_y1(data)                                   ((0x00FFF000&(data))>>12)
#define  MC2_MC2_88_get_lbmc_logo_rgn_x5(data)                                   (0x00000FFF&(data))

#define  MC2_MC2_8C                                                             0x1809978C
#define  MC2_MC2_8C_reg_addr                                                     "0xB809978C"
#define  MC2_MC2_8C_reg                                                          0xB809978C
#define  MC2_MC2_8C_inst_addr                                                    "0x001B"
#define  set_MC2_MC2_8C_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_8C_reg)=data)
#define  get_MC2_MC2_8C_reg                                                      (*((volatile unsigned int*)MC2_MC2_8C_reg))
#define  MC2_MC2_8C_lbmc_logo_c_range_shift                                      (24)
#define  MC2_MC2_8C_lbmc_logo_rgn_y3_shift                                       (12)
#define  MC2_MC2_8C_lbmc_logo_rgn_y2_shift                                       (0)
#define  MC2_MC2_8C_lbmc_logo_c_range_mask                                       (0xFF000000)
#define  MC2_MC2_8C_lbmc_logo_rgn_y3_mask                                        (0x00FFF000)
#define  MC2_MC2_8C_lbmc_logo_rgn_y2_mask                                        (0x00000FFF)
#define  MC2_MC2_8C_lbmc_logo_c_range(data)                                      (0xFF000000&((data)<<24))
#define  MC2_MC2_8C_lbmc_logo_rgn_y3(data)                                       (0x00FFF000&((data)<<12))
#define  MC2_MC2_8C_lbmc_logo_rgn_y2(data)                                       (0x00000FFF&(data))
#define  MC2_MC2_8C_get_lbmc_logo_c_range(data)                                  ((0xFF000000&(data))>>24)
#define  MC2_MC2_8C_get_lbmc_logo_rgn_y3(data)                                   ((0x00FFF000&(data))>>12)
#define  MC2_MC2_8C_get_lbmc_logo_rgn_y2(data)                                   (0x00000FFF&(data))

#define  MC2_MC2_90                                                             0x18099790
#define  MC2_MC2_90_reg_addr                                                     "0xB8099790"
#define  MC2_MC2_90_reg                                                          0xB8099790
#define  MC2_MC2_90_inst_addr                                                    "0x001C"
#define  set_MC2_MC2_90_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_90_reg)=data)
#define  get_MC2_MC2_90_reg                                                      (*((volatile unsigned int*)MC2_MC2_90_reg))
#define  MC2_MC2_90_lbmc_logo_coef2_shift                                        (28)
#define  MC2_MC2_90_lbmc_logo_coef1_shift                                        (24)
#define  MC2_MC2_90_lbmc_logo_tran_sw_en_shift                                   (12)
#define  MC2_MC2_90_lbmc_logo_rgn_y4_shift                                       (0)
#define  MC2_MC2_90_lbmc_logo_coef2_mask                                         (0xF0000000)
#define  MC2_MC2_90_lbmc_logo_coef1_mask                                         (0x0F000000)
#define  MC2_MC2_90_lbmc_logo_tran_sw_en_mask                                    (0x00FFF000)
#define  MC2_MC2_90_lbmc_logo_rgn_y4_mask                                        (0x00000FFF)
#define  MC2_MC2_90_lbmc_logo_coef2(data)                                        (0xF0000000&((data)<<28))
#define  MC2_MC2_90_lbmc_logo_coef1(data)                                        (0x0F000000&((data)<<24))
#define  MC2_MC2_90_lbmc_logo_tran_sw_en(data)                                   (0x00FFF000&((data)<<12))
#define  MC2_MC2_90_lbmc_logo_rgn_y4(data)                                       (0x00000FFF&(data))
#define  MC2_MC2_90_get_lbmc_logo_coef2(data)                                    ((0xF0000000&(data))>>28)
#define  MC2_MC2_90_get_lbmc_logo_coef1(data)                                    ((0x0F000000&(data))>>24)
#define  MC2_MC2_90_get_lbmc_logo_tran_sw_en(data)                               ((0x00FFF000&(data))>>12)
#define  MC2_MC2_90_get_lbmc_logo_rgn_y4(data)                                   (0x00000FFF&(data))

#define  MC2_MC2_94                                                             0x18099794
#define  MC2_MC2_94_reg_addr                                                     "0xB8099794"
#define  MC2_MC2_94_reg                                                          0xB8099794
#define  MC2_MC2_94_inst_addr                                                    "0x001D"
#define  set_MC2_MC2_94_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_94_reg)=data)
#define  get_MC2_MC2_94_reg                                                      (*((volatile unsigned int*)MC2_MC2_94_reg))
#define  MC2_MC2_94_lbmc_logo_rs4_shift                                          (29)
#define  MC2_MC2_94_lbmc_logo_rs3_shift                                          (26)
#define  MC2_MC2_94_lbmc_logo_rs2_shift                                          (23)
#define  MC2_MC2_94_lbmc_logo_rs1_shift                                          (20)
#define  MC2_MC2_94_lbmc_logo_coef4_shift                                        (16)
#define  MC2_MC2_94_lbmc_logo_coef3_shift                                        (12)
#define  MC2_MC2_94_lbmc_logo_transbit_shift                                     (0)
#define  MC2_MC2_94_lbmc_logo_rs4_mask                                           (0xE0000000)
#define  MC2_MC2_94_lbmc_logo_rs3_mask                                           (0x1C000000)
#define  MC2_MC2_94_lbmc_logo_rs2_mask                                           (0x03800000)
#define  MC2_MC2_94_lbmc_logo_rs1_mask                                           (0x00700000)
#define  MC2_MC2_94_lbmc_logo_coef4_mask                                         (0x000F0000)
#define  MC2_MC2_94_lbmc_logo_coef3_mask                                         (0x0000F000)
#define  MC2_MC2_94_lbmc_logo_transbit_mask                                      (0x00000FFF)
#define  MC2_MC2_94_lbmc_logo_rs4(data)                                          (0xE0000000&((data)<<29))
#define  MC2_MC2_94_lbmc_logo_rs3(data)                                          (0x1C000000&((data)<<26))
#define  MC2_MC2_94_lbmc_logo_rs2(data)                                          (0x03800000&((data)<<23))
#define  MC2_MC2_94_lbmc_logo_rs1(data)                                          (0x00700000&((data)<<20))
#define  MC2_MC2_94_lbmc_logo_coef4(data)                                        (0x000F0000&((data)<<16))
#define  MC2_MC2_94_lbmc_logo_coef3(data)                                        (0x0000F000&((data)<<12))
#define  MC2_MC2_94_lbmc_logo_transbit(data)                                     (0x00000FFF&(data))
#define  MC2_MC2_94_get_lbmc_logo_rs4(data)                                      ((0xE0000000&(data))>>29)
#define  MC2_MC2_94_get_lbmc_logo_rs3(data)                                      ((0x1C000000&(data))>>26)
#define  MC2_MC2_94_get_lbmc_logo_rs2(data)                                      ((0x03800000&(data))>>23)
#define  MC2_MC2_94_get_lbmc_logo_rs1(data)                                      ((0x00700000&(data))>>20)
#define  MC2_MC2_94_get_lbmc_logo_coef4(data)                                    ((0x000F0000&(data))>>16)
#define  MC2_MC2_94_get_lbmc_logo_coef3(data)                                    ((0x0000F000&(data))>>12)
#define  MC2_MC2_94_get_lbmc_logo_transbit(data)                                 (0x00000FFF&(data))

#define  MC2_MC2_98                                                             0x18099798
#define  MC2_MC2_98_reg_addr                                                     "0xB8099798"
#define  MC2_MC2_98_reg                                                          0xB8099798
#define  MC2_MC2_98_inst_addr                                                    "0x001E"
#define  set_MC2_MC2_98_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_98_reg)=data)
#define  get_MC2_MC2_98_reg                                                      (*((volatile unsigned int*)MC2_MC2_98_reg))
#define  MC2_MC2_98_mc_logo_vlpf_level_shift                                     (19)
#define  MC2_MC2_98_mc_logo_5x5_cnt_th1_shift                                    (14)
#define  MC2_MC2_98_mc_logo_5x5_cnt_th0_shift                                    (9)
#define  MC2_MC2_98_mc_logo_vlpf_en_shift                                        (8)
#define  MC2_MC2_98_lbmc_logo_show_regon_sel_shift                               (6)
#define  MC2_MC2_98_lbmc_logo_force_no_trans_shift                               (5)
#define  MC2_MC2_98_lbmc_logo_type_shift                                         (4)
#define  MC2_MC2_98_lbmc_logo_statis_en_shift                                    (3)
#define  MC2_MC2_98_lbmc_logo_tran_cond3_en_shift                                (2)
#define  MC2_MC2_98_lbmc_logo_tran_cond2_en_shift                                (1)
#define  MC2_MC2_98_lbmc_logo_tran_cond1_en_shift                                (0)
#define  MC2_MC2_98_mc_logo_vlpf_level_mask                                      (0x03F80000)
#define  MC2_MC2_98_mc_logo_5x5_cnt_th1_mask                                     (0x0007C000)
#define  MC2_MC2_98_mc_logo_5x5_cnt_th0_mask                                     (0x00003E00)
#define  MC2_MC2_98_mc_logo_vlpf_en_mask                                         (0x00000100)
#define  MC2_MC2_98_lbmc_logo_show_regon_sel_mask                                (0x000000C0)
#define  MC2_MC2_98_lbmc_logo_force_no_trans_mask                                (0x00000020)
#define  MC2_MC2_98_lbmc_logo_type_mask                                          (0x00000010)
#define  MC2_MC2_98_lbmc_logo_statis_en_mask                                     (0x00000008)
#define  MC2_MC2_98_lbmc_logo_tran_cond3_en_mask                                 (0x00000004)
#define  MC2_MC2_98_lbmc_logo_tran_cond2_en_mask                                 (0x00000002)
#define  MC2_MC2_98_lbmc_logo_tran_cond1_en_mask                                 (0x00000001)
#define  MC2_MC2_98_mc_logo_vlpf_level(data)                                     (0x03F80000&((data)<<19))
#define  MC2_MC2_98_mc_logo_5x5_cnt_th1(data)                                    (0x0007C000&((data)<<14))
#define  MC2_MC2_98_mc_logo_5x5_cnt_th0(data)                                    (0x00003E00&((data)<<9))
#define  MC2_MC2_98_mc_logo_vlpf_en(data)                                        (0x00000100&((data)<<8))
#define  MC2_MC2_98_lbmc_logo_show_regon_sel(data)                               (0x000000C0&((data)<<6))
#define  MC2_MC2_98_lbmc_logo_force_no_trans(data)                               (0x00000020&((data)<<5))
#define  MC2_MC2_98_lbmc_logo_type(data)                                         (0x00000010&((data)<<4))
#define  MC2_MC2_98_lbmc_logo_statis_en(data)                                    (0x00000008&((data)<<3))
#define  MC2_MC2_98_lbmc_logo_tran_cond3_en(data)                                (0x00000004&((data)<<2))
#define  MC2_MC2_98_lbmc_logo_tran_cond2_en(data)                                (0x00000002&((data)<<1))
#define  MC2_MC2_98_lbmc_logo_tran_cond1_en(data)                                (0x00000001&(data))
#define  MC2_MC2_98_get_mc_logo_vlpf_level(data)                                 ((0x03F80000&(data))>>19)
#define  MC2_MC2_98_get_mc_logo_5x5_cnt_th1(data)                                ((0x0007C000&(data))>>14)
#define  MC2_MC2_98_get_mc_logo_5x5_cnt_th0(data)                                ((0x00003E00&(data))>>9)
#define  MC2_MC2_98_get_mc_logo_vlpf_en(data)                                    ((0x00000100&(data))>>8)
#define  MC2_MC2_98_get_lbmc_logo_show_regon_sel(data)                           ((0x000000C0&(data))>>6)
#define  MC2_MC2_98_get_lbmc_logo_force_no_trans(data)                           ((0x00000020&(data))>>5)
#define  MC2_MC2_98_get_lbmc_logo_type(data)                                     ((0x00000010&(data))>>4)
#define  MC2_MC2_98_get_lbmc_logo_statis_en(data)                                ((0x00000008&(data))>>3)
#define  MC2_MC2_98_get_lbmc_logo_tran_cond3_en(data)                            ((0x00000004&(data))>>2)
#define  MC2_MC2_98_get_lbmc_logo_tran_cond2_en(data)                            ((0x00000002&(data))>>1)
#define  MC2_MC2_98_get_lbmc_logo_tran_cond1_en(data)                            (0x00000001&(data))

#define  MC2_MC2_9C                                                             0x1809979C
#define  MC2_MC2_9C_reg_addr                                                     "0xB809979C"
#define  MC2_MC2_9C_reg                                                          0xB809979C
#define  MC2_MC2_9C_inst_addr                                                    "0x001F"
#define  set_MC2_MC2_9C_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_9C_reg)=data)
#define  get_MC2_MC2_9C_reg                                                      (*((volatile unsigned int*)MC2_MC2_9C_reg))
#define  MC2_MC2_9C_mc_blk_logo_db_rim_top_shift                                 (20)
#define  MC2_MC2_9C_mc_blk_logo_db_rim_righ_shift                                (10)
#define  MC2_MC2_9C_mc_blk_logo_db_rim_left_shift                                (0)
#define  MC2_MC2_9C_mc_blk_logo_db_rim_top_mask                                  (0x3FF00000)
#define  MC2_MC2_9C_mc_blk_logo_db_rim_righ_mask                                 (0x000FFC00)
#define  MC2_MC2_9C_mc_blk_logo_db_rim_left_mask                                 (0x000003FF)
#define  MC2_MC2_9C_mc_blk_logo_db_rim_top(data)                                 (0x3FF00000&((data)<<20))
#define  MC2_MC2_9C_mc_blk_logo_db_rim_righ(data)                                (0x000FFC00&((data)<<10))
#define  MC2_MC2_9C_mc_blk_logo_db_rim_left(data)                                (0x000003FF&(data))
#define  MC2_MC2_9C_get_mc_blk_logo_db_rim_top(data)                             ((0x3FF00000&(data))>>20)
#define  MC2_MC2_9C_get_mc_blk_logo_db_rim_righ(data)                            ((0x000FFC00&(data))>>10)
#define  MC2_MC2_9C_get_mc_blk_logo_db_rim_left(data)                            (0x000003FF&(data))

#define  MC2_MC2_A0                                                             0x180997A0
#define  MC2_MC2_A0_reg_addr                                                     "0xB80997A0"
#define  MC2_MC2_A0_reg                                                          0xB80997A0
#define  MC2_MC2_A0_inst_addr                                                    "0x0020"
#define  set_MC2_MC2_A0_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_A0_reg)=data)
#define  get_MC2_MC2_A0_reg                                                      (*((volatile unsigned int*)MC2_MC2_A0_reg))
#define  MC2_MC2_A0_mc_blk_logo_db_rim_bot_shift                                 (0)
#define  MC2_MC2_A0_mc_blk_logo_db_rim_bot_mask                                  (0x000003FF)
#define  MC2_MC2_A0_mc_blk_logo_db_rim_bot(data)                                 (0x000003FF&(data))
#define  MC2_MC2_A0_get_mc_blk_logo_db_rim_bot(data)                             (0x000003FF&(data))

#define  MC2_MC2_A4                                                             0x180997A4
#define  MC2_MC2_A4_reg_addr                                                     "0xB80997A4"
#define  MC2_MC2_A4_reg                                                          0xB80997A4
#define  MC2_MC2_A4_inst_addr                                                    "0x0021"
#define  set_MC2_MC2_A4_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_A4_reg)=data)
#define  get_MC2_MC2_A4_reg                                                      (*((volatile unsigned int*)MC2_MC2_A4_reg))
#define  MC2_MC2_A4_mc_pix_logo_db_rim_top_shift                                 (20)
#define  MC2_MC2_A4_mc_pix_logo_db_rim_righ_shift                                (10)
#define  MC2_MC2_A4_mc_pix_logo_db_rim_left_shift                                (0)
#define  MC2_MC2_A4_mc_pix_logo_db_rim_top_mask                                  (0x3FF00000)
#define  MC2_MC2_A4_mc_pix_logo_db_rim_righ_mask                                 (0x000FFC00)
#define  MC2_MC2_A4_mc_pix_logo_db_rim_left_mask                                 (0x000003FF)
#define  MC2_MC2_A4_mc_pix_logo_db_rim_top(data)                                 (0x3FF00000&((data)<<20))
#define  MC2_MC2_A4_mc_pix_logo_db_rim_righ(data)                                (0x000FFC00&((data)<<10))
#define  MC2_MC2_A4_mc_pix_logo_db_rim_left(data)                                (0x000003FF&(data))
#define  MC2_MC2_A4_get_mc_pix_logo_db_rim_top(data)                             ((0x3FF00000&(data))>>20)
#define  MC2_MC2_A4_get_mc_pix_logo_db_rim_righ(data)                            ((0x000FFC00&(data))>>10)
#define  MC2_MC2_A4_get_mc_pix_logo_db_rim_left(data)                            (0x000003FF&(data))

#define  MC2_MC2_A8                                                             0x180997A8
#define  MC2_MC2_A8_reg_addr                                                     "0xB80997A8"
#define  MC2_MC2_A8_reg                                                          0xB80997A8
#define  MC2_MC2_A8_inst_addr                                                    "0x0022"
#define  set_MC2_MC2_A8_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_A8_reg)=data)
#define  get_MC2_MC2_A8_reg                                                      (*((volatile unsigned int*)MC2_MC2_A8_reg))
#define  MC2_MC2_A8_mc_pix_logo_db_rim_bot_shift                                 (0)
#define  MC2_MC2_A8_mc_pix_logo_db_rim_bot_mask                                  (0x000003FF)
#define  MC2_MC2_A8_mc_pix_logo_db_rim_bot(data)                                 (0x000003FF&(data))
#define  MC2_MC2_A8_get_mc_pix_logo_db_rim_bot(data)                             (0x000003FF&(data))

#define  MC2_MC2_B0                                                             0x180997B0
#define  MC2_MC2_B0_reg_addr                                                     "0xB80997B0"
#define  MC2_MC2_B0_reg                                                          0xB80997B0
#define  MC2_MC2_B0_inst_addr                                                    "0x0023"
#define  set_MC2_MC2_B0_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_B0_reg)=data)
#define  get_MC2_MC2_B0_reg                                                      (*((volatile unsigned int*)MC2_MC2_B0_reg))
#define  MC2_MC2_B0_regr_lbmc_logo_regon0_cnt_shift                              (0)
#define  MC2_MC2_B0_regr_lbmc_logo_regon0_cnt_mask                               (0x007FFFFF)
#define  MC2_MC2_B0_regr_lbmc_logo_regon0_cnt(data)                              (0x007FFFFF&(data))
#define  MC2_MC2_B0_get_regr_lbmc_logo_regon0_cnt(data)                          (0x007FFFFF&(data))

#define  MC2_MC2_B4                                                             0x180997B4
#define  MC2_MC2_B4_reg_addr                                                     "0xB80997B4"
#define  MC2_MC2_B4_reg                                                          0xB80997B4
#define  MC2_MC2_B4_inst_addr                                                    "0x0024"
#define  set_MC2_MC2_B4_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_B4_reg)=data)
#define  get_MC2_MC2_B4_reg                                                      (*((volatile unsigned int*)MC2_MC2_B4_reg))
#define  MC2_MC2_B4_regr_lbmc_logo_regon1_cnt_shift                              (0)
#define  MC2_MC2_B4_regr_lbmc_logo_regon1_cnt_mask                               (0x007FFFFF)
#define  MC2_MC2_B4_regr_lbmc_logo_regon1_cnt(data)                              (0x007FFFFF&(data))
#define  MC2_MC2_B4_get_regr_lbmc_logo_regon1_cnt(data)                          (0x007FFFFF&(data))

#define  MC2_MC2_B8                                                             0x180997B8
#define  MC2_MC2_B8_reg_addr                                                     "0xB80997B8"
#define  MC2_MC2_B8_reg                                                          0xB80997B8
#define  MC2_MC2_B8_inst_addr                                                    "0x0025"
#define  set_MC2_MC2_B8_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_B8_reg)=data)
#define  get_MC2_MC2_B8_reg                                                      (*((volatile unsigned int*)MC2_MC2_B8_reg))
#define  MC2_MC2_B8_regr_lbmc_logo_regon2_cnt_shift                              (0)
#define  MC2_MC2_B8_regr_lbmc_logo_regon2_cnt_mask                               (0x007FFFFF)
#define  MC2_MC2_B8_regr_lbmc_logo_regon2_cnt(data)                              (0x007FFFFF&(data))
#define  MC2_MC2_B8_get_regr_lbmc_logo_regon2_cnt(data)                          (0x007FFFFF&(data))

#define  MC2_MC2_BC                                                             0x180997BC
#define  MC2_MC2_BC_reg_addr                                                     "0xB80997BC"
#define  MC2_MC2_BC_reg                                                          0xB80997BC
#define  MC2_MC2_BC_inst_addr                                                    "0x0026"
#define  set_MC2_MC2_BC_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_BC_reg)=data)
#define  get_MC2_MC2_BC_reg                                                      (*((volatile unsigned int*)MC2_MC2_BC_reg))
#define  MC2_MC2_BC_regr_lbmc_logo_regon3_cnt_shift                              (0)
#define  MC2_MC2_BC_regr_lbmc_logo_regon3_cnt_mask                               (0x007FFFFF)
#define  MC2_MC2_BC_regr_lbmc_logo_regon3_cnt(data)                              (0x007FFFFF&(data))
#define  MC2_MC2_BC_get_regr_lbmc_logo_regon3_cnt(data)                          (0x007FFFFF&(data))

#define  MC2_MC2_C0                                                             0x180997C0
#define  MC2_MC2_C0_reg_addr                                                     "0xB80997C0"
#define  MC2_MC2_C0_reg                                                          0xB80997C0
#define  MC2_MC2_C0_inst_addr                                                    "0x0027"
#define  set_MC2_MC2_C0_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_C0_reg)=data)
#define  get_MC2_MC2_C0_reg                                                      (*((volatile unsigned int*)MC2_MC2_C0_reg))
#define  MC2_MC2_C0_regr_lbmc_logo_regon4_cnt_shift                              (0)
#define  MC2_MC2_C0_regr_lbmc_logo_regon4_cnt_mask                               (0x007FFFFF)
#define  MC2_MC2_C0_regr_lbmc_logo_regon4_cnt(data)                              (0x007FFFFF&(data))
#define  MC2_MC2_C0_get_regr_lbmc_logo_regon4_cnt(data)                          (0x007FFFFF&(data))

#define  MC2_MC2_C4                                                             0x180997C4
#define  MC2_MC2_C4_reg_addr                                                     "0xB80997C4"
#define  MC2_MC2_C4_reg                                                          0xB80997C4
#define  MC2_MC2_C4_inst_addr                                                    "0x0028"
#define  set_MC2_MC2_C4_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_C4_reg)=data)
#define  get_MC2_MC2_C4_reg                                                      (*((volatile unsigned int*)MC2_MC2_C4_reg))
#define  MC2_MC2_C4_regr_lbmc_logo_regon5_cnt_shift                              (0)
#define  MC2_MC2_C4_regr_lbmc_logo_regon5_cnt_mask                               (0x007FFFFF)
#define  MC2_MC2_C4_regr_lbmc_logo_regon5_cnt(data)                              (0x007FFFFF&(data))
#define  MC2_MC2_C4_get_regr_lbmc_logo_regon5_cnt(data)                          (0x007FFFFF&(data))

#define  MC2_MC2_C8                                                             0x180997C8
#define  MC2_MC2_C8_reg_addr                                                     "0xB80997C8"
#define  MC2_MC2_C8_reg                                                          0xB80997C8
#define  MC2_MC2_C8_inst_addr                                                    "0x0029"
#define  set_MC2_MC2_C8_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_C8_reg)=data)
#define  get_MC2_MC2_C8_reg                                                      (*((volatile unsigned int*)MC2_MC2_C8_reg))
#define  MC2_MC2_C8_regr_lbmc_logo_regon6_cnt_shift                              (0)
#define  MC2_MC2_C8_regr_lbmc_logo_regon6_cnt_mask                               (0x007FFFFF)
#define  MC2_MC2_C8_regr_lbmc_logo_regon6_cnt(data)                              (0x007FFFFF&(data))
#define  MC2_MC2_C8_get_regr_lbmc_logo_regon6_cnt(data)                          (0x007FFFFF&(data))

#define  MC2_MC2_CC                                                             0x180997CC
#define  MC2_MC2_CC_reg_addr                                                     "0xB80997CC"
#define  MC2_MC2_CC_reg                                                          0xB80997CC
#define  MC2_MC2_CC_inst_addr                                                    "0x002A"
#define  set_MC2_MC2_CC_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_CC_reg)=data)
#define  get_MC2_MC2_CC_reg                                                      (*((volatile unsigned int*)MC2_MC2_CC_reg))
#define  MC2_MC2_CC_regr_lbmc_logo_regon7_cnt_shift                              (0)
#define  MC2_MC2_CC_regr_lbmc_logo_regon7_cnt_mask                               (0x007FFFFF)
#define  MC2_MC2_CC_regr_lbmc_logo_regon7_cnt(data)                              (0x007FFFFF&(data))
#define  MC2_MC2_CC_get_regr_lbmc_logo_regon7_cnt(data)                          (0x007FFFFF&(data))

#define  MC2_MC2_D0                                                             0x180997D0
#define  MC2_MC2_D0_reg_addr                                                     "0xB80997D0"
#define  MC2_MC2_D0_reg                                                          0xB80997D0
#define  MC2_MC2_D0_inst_addr                                                    "0x002B"
#define  set_MC2_MC2_D0_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_D0_reg)=data)
#define  get_MC2_MC2_D0_reg                                                      (*((volatile unsigned int*)MC2_MC2_D0_reg))
#define  MC2_MC2_D0_regr_lbmc_logo_regon8_cnt_shift                              (0)
#define  MC2_MC2_D0_regr_lbmc_logo_regon8_cnt_mask                               (0x007FFFFF)
#define  MC2_MC2_D0_regr_lbmc_logo_regon8_cnt(data)                              (0x007FFFFF&(data))
#define  MC2_MC2_D0_get_regr_lbmc_logo_regon8_cnt(data)                          (0x007FFFFF&(data))

#define  MC2_MC2_D4                                                             0x180997D4
#define  MC2_MC2_D4_reg_addr                                                     "0xB80997D4"
#define  MC2_MC2_D4_reg                                                          0xB80997D4
#define  MC2_MC2_D4_inst_addr                                                    "0x002C"
#define  set_MC2_MC2_D4_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_D4_reg)=data)
#define  get_MC2_MC2_D4_reg                                                      (*((volatile unsigned int*)MC2_MC2_D4_reg))
#define  MC2_MC2_D4_regr_lbmc_logo_regon9_cnt_shift                              (0)
#define  MC2_MC2_D4_regr_lbmc_logo_regon9_cnt_mask                               (0x007FFFFF)
#define  MC2_MC2_D4_regr_lbmc_logo_regon9_cnt(data)                              (0x007FFFFF&(data))
#define  MC2_MC2_D4_get_regr_lbmc_logo_regon9_cnt(data)                          (0x007FFFFF&(data))

#define  MC2_MC2_D8                                                             0x180997D8
#define  MC2_MC2_D8_reg_addr                                                     "0xB80997D8"
#define  MC2_MC2_D8_reg                                                          0xB80997D8
#define  MC2_MC2_D8_inst_addr                                                    "0x002D"
#define  set_MC2_MC2_D8_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_D8_reg)=data)
#define  get_MC2_MC2_D8_reg                                                      (*((volatile unsigned int*)MC2_MC2_D8_reg))
#define  MC2_MC2_D8_regr_lbmc_logo_regona_cnt_shift                              (0)
#define  MC2_MC2_D8_regr_lbmc_logo_regona_cnt_mask                               (0x007FFFFF)
#define  MC2_MC2_D8_regr_lbmc_logo_regona_cnt(data)                              (0x007FFFFF&(data))
#define  MC2_MC2_D8_get_regr_lbmc_logo_regona_cnt(data)                          (0x007FFFFF&(data))

#define  MC2_MC2_DC                                                             0x180997DC
#define  MC2_MC2_DC_reg_addr                                                     "0xB80997DC"
#define  MC2_MC2_DC_reg                                                          0xB80997DC
#define  MC2_MC2_DC_inst_addr                                                    "0x002E"
#define  set_MC2_MC2_DC_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_DC_reg)=data)
#define  get_MC2_MC2_DC_reg                                                      (*((volatile unsigned int*)MC2_MC2_DC_reg))
#define  MC2_MC2_DC_regr_lbmc_logo_regonb_cnt_shift                              (0)
#define  MC2_MC2_DC_regr_lbmc_logo_regonb_cnt_mask                               (0x007FFFFF)
#define  MC2_MC2_DC_regr_lbmc_logo_regonb_cnt(data)                              (0x007FFFFF&(data))
#define  MC2_MC2_DC_get_regr_lbmc_logo_regonb_cnt(data)                          (0x007FFFFF&(data))

#define  MC2_MC2_E0                                                             0x180997E0
#define  MC2_MC2_E0_reg_addr                                                     "0xB80997E0"
#define  MC2_MC2_E0_reg                                                          0xB80997E0
#define  MC2_MC2_E0_inst_addr                                                    "0x002F"
#define  set_MC2_MC2_E0_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_E0_reg)=data)
#define  get_MC2_MC2_E0_reg                                                      (*((volatile unsigned int*)MC2_MC2_E0_reg))
#define  MC2_MC2_E0_regr_lbmc_logo_hw_trasbit_shift                              (0)
#define  MC2_MC2_E0_regr_lbmc_logo_hw_trasbit_mask                               (0x00000FFF)
#define  MC2_MC2_E0_regr_lbmc_logo_hw_trasbit(data)                              (0x00000FFF&(data))
#define  MC2_MC2_E0_get_regr_lbmc_logo_hw_trasbit(data)                          (0x00000FFF&(data))

#define  MC2_MC2_F0                                                             0x180997F0
#define  MC2_MC2_F0_reg_addr                                                     "0xB80997F0"
#define  MC2_MC2_F0_reg                                                          0xB80997F0
#define  MC2_MC2_F0_inst_addr                                                    "0x0030"
#define  set_MC2_MC2_F0_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_F0_reg)=data)
#define  get_MC2_MC2_F0_reg                                                      (*((volatile unsigned int*)MC2_MC2_F0_reg))
#define  MC2_MC2_F0_regr_mc_pxl_logo_status2_shift                               (18)
#define  MC2_MC2_F0_regr_mc_pxl_logo_status1_shift                               (8)
#define  MC2_MC2_F0_regr_mc_pxl_logo_status0_shift                               (0)
#define  MC2_MC2_F0_regr_mc_pxl_logo_status2_mask                                (0x0FFC0000)
#define  MC2_MC2_F0_regr_mc_pxl_logo_status1_mask                                (0x0003FF00)
#define  MC2_MC2_F0_regr_mc_pxl_logo_status0_mask                                (0x000000FF)
#define  MC2_MC2_F0_regr_mc_pxl_logo_status2(data)                               (0x0FFC0000&((data)<<18))
#define  MC2_MC2_F0_regr_mc_pxl_logo_status1(data)                               (0x0003FF00&((data)<<8))
#define  MC2_MC2_F0_regr_mc_pxl_logo_status0(data)                               (0x000000FF&(data))
#define  MC2_MC2_F0_get_regr_mc_pxl_logo_status2(data)                           ((0x0FFC0000&(data))>>18)
#define  MC2_MC2_F0_get_regr_mc_pxl_logo_status1(data)                           ((0x0003FF00&(data))>>8)
#define  MC2_MC2_F0_get_regr_mc_pxl_logo_status0(data)                           (0x000000FF&(data))

#define  MC2_MC2_F4                                                             0x180997F4
#define  MC2_MC2_F4_reg_addr                                                     "0xB80997F4"
#define  MC2_MC2_F4_reg                                                          0xB80997F4
#define  MC2_MC2_F4_inst_addr                                                    "0x0031"
#define  set_MC2_MC2_F4_reg(data)                                                (*((volatile unsigned int*)MC2_MC2_F4_reg)=data)
#define  get_MC2_MC2_F4_reg                                                      (*((volatile unsigned int*)MC2_MC2_F4_reg))
#define  MC2_MC2_F4_regr_mc_pxl_logo_status3_shift                               (0)
#define  MC2_MC2_F4_regr_mc_pxl_logo_status3_mask                                (0x0000000F)
#define  MC2_MC2_F4_regr_mc_pxl_logo_status3(data)                               (0x0000000F&(data))
#define  MC2_MC2_F4_get_regr_mc_pxl_logo_status3(data)                           (0x0000000F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======MC2 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_coef_0x:32;
    };
}mc2_mc2_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_coef_1x:32;
    };
}mc2_mc2_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_coef_2x:32;
    };
}mc2_mc2_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_coef_3x:32;
    };
}mc2_mc2_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_coef_4x:32;
    };
}mc2_mc2_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_coef_5x:32;
    };
}mc2_mc2_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_coef_6x:32;
    };
}mc2_mc2_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_coef_7x:32;
    };
}mc2_mc2_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mc_sc_disptlr_cnt:8;
        RBus_UInt32  mc_sc_disptlr_en:1;
        RBus_UInt32  mc_pxl_logo_pat_val:1;
        RBus_UInt32  mc_pxl_logo_pat_mode:2;
        RBus_UInt32  mc_pxl_logo_pat_en:1;
        RBus_UInt32  mc_blk_logo_pat_val:1;
        RBus_UInt32  mc_blk_logo_pat_mode:2;
        RBus_UInt32  mc_blk_logo_pat_en:1;
        RBus_UInt32  mc_logo_self_lpf_en:1;
        RBus_UInt32  mc_logo_pt_clip_en:2;
        RBus_UInt32  mc_logo_merge_type:4;
        RBus_UInt32  mc_pxl_logo_v_size:1;
        RBus_UInt32  mc_pxl_logo_h_size:1;
        RBus_UInt32  mc_blk_logo_v_size:1;
        RBus_UInt32  mc_blk_logo_h_size:1;
        RBus_UInt32  mc_logo_en:2;
    };
}mc2_mc2_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  mc_sc_ret_1st_izpz_mod:3;
        RBus_UInt32  mc_sc_ret_1st_izpz_bld:1;
        RBus_UInt32  mc_blk_logo_v_num:8;
        RBus_UInt32  mc_blk_logo_h_num:8;
    };
}mc2_mc2_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  mc_pxl_logo_v_num:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  mc_pxl_logo_h_num:10;
    };
}mc2_mc2_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  mc_logo_lpf_coef1_01:4;
        RBus_UInt32  mc_logo_lpf_coef1_00:4;
        RBus_UInt32  mc_logo_lpf_coef0_02:4;
        RBus_UInt32  mc_logo_lpf_coef0_01:4;
        RBus_UInt32  mc_logo_lpf_coef0_00:4;
    };
}mc2_mc2_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  mc_logo_self_alpha_max:4;
        RBus_UInt32  mc_logo_self_alpha_min:4;
        RBus_UInt32  mc_logo_self_alpha_slp:8;
        RBus_UInt32  mc_logo_self_alpha_th:8;
    };
}mc2_mc2_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  mc_var_dbpt_lvl:7;
        RBus_UInt32  mc_var_dbpt_lpf_en:1;
        RBus_UInt32  mc_var_occl_lvl:7;
        RBus_UInt32  mc_var_lvl_mode:1;
        RBus_UInt32  mc_var_occl_intp_en:1;
        RBus_UInt32  mc_var_lpf_en:2;
    };
}mc2_mc2_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mc_var_mvd_y_max:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  mc_var_mvd_y_min:7;
        RBus_UInt32  mc_var_mvd_slope:8;
        RBus_UInt32  mc_var_mvd_x_th:8;
    };
}mc2_mc2_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  mc_var_fir_y_max:4;
        RBus_UInt32  mc_var_fir_y_min:4;
        RBus_UInt32  mc_var_fir_slope:4;
        RBus_UInt32  mc_var_fir_x_th:8;
    };
}mc2_mc2_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  mc_var_fir_coef:20;
    };
}mc2_mc2_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mc_rim_occl_excu:1;
        RBus_UInt32  mc_dia_v_th1:8;
        RBus_UInt32  mc_dia_v_th0:8;
        RBus_UInt32  mc_dia_cnt_coef3:3;
        RBus_UInt32  mc_dia_cnt_coef2:3;
        RBus_UInt32  mc_dia_cnt_coef1:3;
        RBus_UInt32  mc_occ_dly_ctrl:4;
        RBus_UInt32  mc_occlt_dia_en:1;
    };
}mc2_mc2_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  mc_dia_c_th1:9;
        RBus_UInt32  mc_dia_c_th0:9;
    };
}mc2_mc2_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  mc_var17tap_en:1;
        RBus_UInt32  mc_dia_h_th1:9;
        RBus_UInt32  mc_dia_h_th0:9;
    };
}mc2_mc2_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_varfir17_coef3:8;
        RBus_UInt32  mc_varfir17_coef2:8;
        RBus_UInt32  mc_varfir17_coef1:8;
        RBus_UInt32  mc_varfir17_coef0:8;
    };
}mc2_mc2_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_varfir17_coef7:8;
        RBus_UInt32  mc_varfir17_coef6:8;
        RBus_UInt32  mc_varfir17_coef5:8;
        RBus_UInt32  mc_varfir17_coef4:8;
    };
}mc2_mc2_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_logo_y2:8;
        RBus_UInt32  lbmc_logo_y1:8;
        RBus_UInt32  lbmc_logo_diff_th:8;
        RBus_UInt32  mc_varfir17_coef8:8;
    };
}mc2_mc2_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_logo_dil_th:7;
        RBus_UInt32  lbmc_logo_dil_coef2:4;
        RBus_UInt32  lbmc_logo_dil_coef1:4;
        RBus_UInt32  lbmc_logo_dil_coef0:4;
        RBus_UInt32  lbmc_logo_continu_bypa:1;
        RBus_UInt32  lbmc_logo_zdiff_byps:1;
        RBus_UInt32  lbmc_logo_color_bypa:1;
        RBus_UInt32  lbmc_logo_avg_th:8;
    };
}mc2_mc2_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_logo_y_range:8;
        RBus_UInt32  lbmc_logo_rgn_x2:12;
        RBus_UInt32  lbmc_logo_rgn_x1:12;
    };
}mc2_mc2_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_logo_u:8;
        RBus_UInt32  lbmc_logo_rgn_x4:12;
        RBus_UInt32  lbmc_logo_rgn_x3:12;
    };
}mc2_mc2_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_logo_v:8;
        RBus_UInt32  lbmc_logo_rgn_y1:12;
        RBus_UInt32  lbmc_logo_rgn_x5:12;
    };
}mc2_mc2_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_logo_c_range:8;
        RBus_UInt32  lbmc_logo_rgn_y3:12;
        RBus_UInt32  lbmc_logo_rgn_y2:12;
    };
}mc2_mc2_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_logo_coef2:4;
        RBus_UInt32  lbmc_logo_coef1:4;
        RBus_UInt32  lbmc_logo_tran_sw_en:12;
        RBus_UInt32  lbmc_logo_rgn_y4:12;
    };
}mc2_mc2_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_logo_rs4:3;
        RBus_UInt32  lbmc_logo_rs3:3;
        RBus_UInt32  lbmc_logo_rs2:3;
        RBus_UInt32  lbmc_logo_rs1:3;
        RBus_UInt32  lbmc_logo_coef4:4;
        RBus_UInt32  lbmc_logo_coef3:4;
        RBus_UInt32  lbmc_logo_transbit:12;
    };
}mc2_mc2_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  mc_logo_vlpf_level:7;
        RBus_UInt32  mc_logo_5x5_cnt_th1:5;
        RBus_UInt32  mc_logo_5x5_cnt_th0:5;
        RBus_UInt32  mc_logo_vlpf_en:1;
        RBus_UInt32  lbmc_logo_show_regon_sel:2;
        RBus_UInt32  lbmc_logo_force_no_trans:1;
        RBus_UInt32  lbmc_logo_type:1;
        RBus_UInt32  lbmc_logo_statis_en:1;
        RBus_UInt32  lbmc_logo_tran_cond3_en:1;
        RBus_UInt32  lbmc_logo_tran_cond2_en:1;
        RBus_UInt32  lbmc_logo_tran_cond1_en:1;
    };
}mc2_mc2_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mc_blk_logo_db_rim_top:10;
        RBus_UInt32  mc_blk_logo_db_rim_righ:10;
        RBus_UInt32  mc_blk_logo_db_rim_left:10;
    };
}mc2_mc2_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  mc_blk_logo_db_rim_bot:10;
    };
}mc2_mc2_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mc_pix_logo_db_rim_top:10;
        RBus_UInt32  mc_pix_logo_db_rim_righ:10;
        RBus_UInt32  mc_pix_logo_db_rim_left:10;
    };
}mc2_mc2_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  mc_pix_logo_db_rim_bot:10;
    };
}mc2_mc2_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_lbmc_logo_regon0_cnt:23;
    };
}mc2_mc2_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_lbmc_logo_regon1_cnt:23;
    };
}mc2_mc2_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_lbmc_logo_regon2_cnt:23;
    };
}mc2_mc2_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_lbmc_logo_regon3_cnt:23;
    };
}mc2_mc2_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_lbmc_logo_regon4_cnt:23;
    };
}mc2_mc2_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_lbmc_logo_regon5_cnt:23;
    };
}mc2_mc2_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_lbmc_logo_regon6_cnt:23;
    };
}mc2_mc2_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_lbmc_logo_regon7_cnt:23;
    };
}mc2_mc2_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_lbmc_logo_regon8_cnt:23;
    };
}mc2_mc2_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_lbmc_logo_regon9_cnt:23;
    };
}mc2_mc2_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_lbmc_logo_regona_cnt:23;
    };
}mc2_mc2_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_lbmc_logo_regonb_cnt:23;
    };
}mc2_mc2_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  regr_lbmc_logo_hw_trasbit:12;
    };
}mc2_mc2_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_mc_pxl_logo_status2:10;
        RBus_UInt32  regr_mc_pxl_logo_status1:10;
        RBus_UInt32  regr_mc_pxl_logo_status0:8;
    };
}mc2_mc2_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  regr_mc_pxl_logo_status3:4;
    };
}mc2_mc2_f4_RBUS;

#else //apply LITTLE_ENDIAN

//======MC2 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_coef_0x:32;
    };
}mc2_mc2_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_coef_1x:32;
    };
}mc2_mc2_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_coef_2x:32;
    };
}mc2_mc2_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_coef_3x:32;
    };
}mc2_mc2_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_coef_4x:32;
    };
}mc2_mc2_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_coef_5x:32;
    };
}mc2_mc2_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_coef_6x:32;
    };
}mc2_mc2_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_coef_7x:32;
    };
}mc2_mc2_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_logo_en:2;
        RBus_UInt32  mc_blk_logo_h_size:1;
        RBus_UInt32  mc_blk_logo_v_size:1;
        RBus_UInt32  mc_pxl_logo_h_size:1;
        RBus_UInt32  mc_pxl_logo_v_size:1;
        RBus_UInt32  mc_logo_merge_type:4;
        RBus_UInt32  mc_logo_pt_clip_en:2;
        RBus_UInt32  mc_logo_self_lpf_en:1;
        RBus_UInt32  mc_blk_logo_pat_en:1;
        RBus_UInt32  mc_blk_logo_pat_mode:2;
        RBus_UInt32  mc_blk_logo_pat_val:1;
        RBus_UInt32  mc_pxl_logo_pat_en:1;
        RBus_UInt32  mc_pxl_logo_pat_mode:2;
        RBus_UInt32  mc_pxl_logo_pat_val:1;
        RBus_UInt32  mc_sc_disptlr_en:1;
        RBus_UInt32  mc_sc_disptlr_cnt:8;
        RBus_UInt32  res1:2;
    };
}mc2_mc2_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_blk_logo_h_num:8;
        RBus_UInt32  mc_blk_logo_v_num:8;
        RBus_UInt32  mc_sc_ret_1st_izpz_bld:1;
        RBus_UInt32  mc_sc_ret_1st_izpz_mod:3;
        RBus_UInt32  res1:12;
    };
}mc2_mc2_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_pxl_logo_h_num:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  mc_pxl_logo_v_num:10;
        RBus_UInt32  res2:6;
    };
}mc2_mc2_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_logo_lpf_coef0_00:4;
        RBus_UInt32  mc_logo_lpf_coef0_01:4;
        RBus_UInt32  mc_logo_lpf_coef0_02:4;
        RBus_UInt32  mc_logo_lpf_coef1_00:4;
        RBus_UInt32  mc_logo_lpf_coef1_01:4;
        RBus_UInt32  res1:12;
    };
}mc2_mc2_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_logo_self_alpha_th:8;
        RBus_UInt32  mc_logo_self_alpha_slp:8;
        RBus_UInt32  mc_logo_self_alpha_min:4;
        RBus_UInt32  mc_logo_self_alpha_max:4;
        RBus_UInt32  res1:8;
    };
}mc2_mc2_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_var_lpf_en:2;
        RBus_UInt32  mc_var_occl_intp_en:1;
        RBus_UInt32  mc_var_lvl_mode:1;
        RBus_UInt32  mc_var_occl_lvl:7;
        RBus_UInt32  mc_var_dbpt_lpf_en:1;
        RBus_UInt32  mc_var_dbpt_lvl:7;
        RBus_UInt32  res1:13;
    };
}mc2_mc2_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_var_mvd_x_th:8;
        RBus_UInt32  mc_var_mvd_slope:8;
        RBus_UInt32  mc_var_mvd_y_min:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  mc_var_mvd_y_max:7;
        RBus_UInt32  res2:1;
    };
}mc2_mc2_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_var_fir_x_th:8;
        RBus_UInt32  mc_var_fir_slope:4;
        RBus_UInt32  mc_var_fir_y_min:4;
        RBus_UInt32  mc_var_fir_y_max:4;
        RBus_UInt32  res1:12;
    };
}mc2_mc2_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_var_fir_coef:20;
        RBus_UInt32  res1:12;
    };
}mc2_mc2_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_occlt_dia_en:1;
        RBus_UInt32  mc_occ_dly_ctrl:4;
        RBus_UInt32  mc_dia_cnt_coef1:3;
        RBus_UInt32  mc_dia_cnt_coef2:3;
        RBus_UInt32  mc_dia_cnt_coef3:3;
        RBus_UInt32  mc_dia_v_th0:8;
        RBus_UInt32  mc_dia_v_th1:8;
        RBus_UInt32  mc_rim_occl_excu:1;
        RBus_UInt32  res1:1;
    };
}mc2_mc2_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dia_c_th0:9;
        RBus_UInt32  mc_dia_c_th1:9;
        RBus_UInt32  res1:14;
    };
}mc2_mc2_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dia_h_th0:9;
        RBus_UInt32  mc_dia_h_th1:9;
        RBus_UInt32  mc_var17tap_en:1;
        RBus_UInt32  res1:13;
    };
}mc2_mc2_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_varfir17_coef0:8;
        RBus_UInt32  mc_varfir17_coef1:8;
        RBus_UInt32  mc_varfir17_coef2:8;
        RBus_UInt32  mc_varfir17_coef3:8;
    };
}mc2_mc2_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_varfir17_coef4:8;
        RBus_UInt32  mc_varfir17_coef5:8;
        RBus_UInt32  mc_varfir17_coef6:8;
        RBus_UInt32  mc_varfir17_coef7:8;
    };
}mc2_mc2_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_varfir17_coef8:8;
        RBus_UInt32  lbmc_logo_diff_th:8;
        RBus_UInt32  lbmc_logo_y1:8;
        RBus_UInt32  lbmc_logo_y2:8;
    };
}mc2_mc2_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_logo_avg_th:8;
        RBus_UInt32  lbmc_logo_color_bypa:1;
        RBus_UInt32  lbmc_logo_zdiff_byps:1;
        RBus_UInt32  lbmc_logo_continu_bypa:1;
        RBus_UInt32  lbmc_logo_dil_coef0:4;
        RBus_UInt32  lbmc_logo_dil_coef1:4;
        RBus_UInt32  lbmc_logo_dil_coef2:4;
        RBus_UInt32  lbmc_logo_dil_th:7;
        RBus_UInt32  res1:2;
    };
}mc2_mc2_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_logo_rgn_x1:12;
        RBus_UInt32  lbmc_logo_rgn_x2:12;
        RBus_UInt32  lbmc_logo_y_range:8;
    };
}mc2_mc2_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_logo_rgn_x3:12;
        RBus_UInt32  lbmc_logo_rgn_x4:12;
        RBus_UInt32  lbmc_logo_u:8;
    };
}mc2_mc2_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_logo_rgn_x5:12;
        RBus_UInt32  lbmc_logo_rgn_y1:12;
        RBus_UInt32  lbmc_logo_v:8;
    };
}mc2_mc2_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_logo_rgn_y2:12;
        RBus_UInt32  lbmc_logo_rgn_y3:12;
        RBus_UInt32  lbmc_logo_c_range:8;
    };
}mc2_mc2_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_logo_rgn_y4:12;
        RBus_UInt32  lbmc_logo_tran_sw_en:12;
        RBus_UInt32  lbmc_logo_coef1:4;
        RBus_UInt32  lbmc_logo_coef2:4;
    };
}mc2_mc2_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_logo_transbit:12;
        RBus_UInt32  lbmc_logo_coef3:4;
        RBus_UInt32  lbmc_logo_coef4:4;
        RBus_UInt32  lbmc_logo_rs1:3;
        RBus_UInt32  lbmc_logo_rs2:3;
        RBus_UInt32  lbmc_logo_rs3:3;
        RBus_UInt32  lbmc_logo_rs4:3;
    };
}mc2_mc2_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_logo_tran_cond1_en:1;
        RBus_UInt32  lbmc_logo_tran_cond2_en:1;
        RBus_UInt32  lbmc_logo_tran_cond3_en:1;
        RBus_UInt32  lbmc_logo_statis_en:1;
        RBus_UInt32  lbmc_logo_type:1;
        RBus_UInt32  lbmc_logo_force_no_trans:1;
        RBus_UInt32  lbmc_logo_show_regon_sel:2;
        RBus_UInt32  mc_logo_vlpf_en:1;
        RBus_UInt32  mc_logo_5x5_cnt_th0:5;
        RBus_UInt32  mc_logo_5x5_cnt_th1:5;
        RBus_UInt32  mc_logo_vlpf_level:7;
        RBus_UInt32  res1:6;
    };
}mc2_mc2_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_blk_logo_db_rim_left:10;
        RBus_UInt32  mc_blk_logo_db_rim_righ:10;
        RBus_UInt32  mc_blk_logo_db_rim_top:10;
        RBus_UInt32  res1:2;
    };
}mc2_mc2_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_blk_logo_db_rim_bot:10;
        RBus_UInt32  res1:22;
    };
}mc2_mc2_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_pix_logo_db_rim_left:10;
        RBus_UInt32  mc_pix_logo_db_rim_righ:10;
        RBus_UInt32  mc_pix_logo_db_rim_top:10;
        RBus_UInt32  res1:2;
    };
}mc2_mc2_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_pix_logo_db_rim_bot:10;
        RBus_UInt32  res1:22;
    };
}mc2_mc2_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_logo_regon0_cnt:23;
        RBus_UInt32  res1:9;
    };
}mc2_mc2_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_logo_regon1_cnt:23;
        RBus_UInt32  res1:9;
    };
}mc2_mc2_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_logo_regon2_cnt:23;
        RBus_UInt32  res1:9;
    };
}mc2_mc2_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_logo_regon3_cnt:23;
        RBus_UInt32  res1:9;
    };
}mc2_mc2_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_logo_regon4_cnt:23;
        RBus_UInt32  res1:9;
    };
}mc2_mc2_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_logo_regon5_cnt:23;
        RBus_UInt32  res1:9;
    };
}mc2_mc2_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_logo_regon6_cnt:23;
        RBus_UInt32  res1:9;
    };
}mc2_mc2_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_logo_regon7_cnt:23;
        RBus_UInt32  res1:9;
    };
}mc2_mc2_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_logo_regon8_cnt:23;
        RBus_UInt32  res1:9;
    };
}mc2_mc2_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_logo_regon9_cnt:23;
        RBus_UInt32  res1:9;
    };
}mc2_mc2_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_logo_regona_cnt:23;
        RBus_UInt32  res1:9;
    };
}mc2_mc2_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_logo_regonb_cnt:23;
        RBus_UInt32  res1:9;
    };
}mc2_mc2_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_logo_hw_trasbit:12;
        RBus_UInt32  res1:20;
    };
}mc2_mc2_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_pxl_logo_status0:8;
        RBus_UInt32  regr_mc_pxl_logo_status1:10;
        RBus_UInt32  regr_mc_pxl_logo_status2:10;
        RBus_UInt32  res1:4;
    };
}mc2_mc2_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_pxl_logo_status3:4;
        RBus_UInt32  res1:28;
    };
}mc2_mc2_f4_RBUS;




#endif 


#endif 
