/**
* @file Merlin5_MEMC_KME_ME2_CALC0
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_ME2_CALC0_REG_H_
#define _RBUS_KME_ME2_CALC0_REG_H_

#include "rbus_types.h"



//  KME_ME2_CALC0 Register Address
#define  KME_ME2_CALC0_KME_ME2_CALC0_00                                         0x1809C800
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_reg_addr                                 "0xB809C800"
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_reg                                      0xB809C800
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_inst_addr                                "0x0000"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_00_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_00_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_00_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_00_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_calc_mon_mode_shift                  (24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_ph_norm_mode_shift                   (22)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_bv_sel_shift                         (21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_dtl_hf_limt_shift                    (13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_dtl_hf_cor_shift                     (5)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_dtl_hf_shft_shift                    (1)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_dtl_hf_mode_shift                    (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_calc_mon_mode_mask                   (0x3F000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_ph_norm_mode_mask                    (0x00C00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_bv_sel_mask                          (0x00200000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_dtl_hf_limt_mask                     (0x001FE000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_dtl_hf_cor_mask                      (0x00001FE0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_dtl_hf_shft_mask                     (0x00000006)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_dtl_hf_mode_mask                     (0x00000001)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_calc_mon_mode(data)                  (0x3F000000&((data)<<24))
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_ph_norm_mode(data)                   (0x00C00000&((data)<<22))
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_bv_sel(data)                         (0x00200000&((data)<<21))
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_dtl_hf_limt(data)                    (0x001FE000&((data)<<13))
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_dtl_hf_cor(data)                     (0x00001FE0&((data)<<5))
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_dtl_hf_shft(data)                    (0x00000006&((data)<<1))
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_me2_dtl_hf_mode(data)                    (0x00000001&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_get_me2_calc_mon_mode(data)              ((0x3F000000&(data))>>24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_get_me2_ph_norm_mode(data)               ((0x00C00000&(data))>>22)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_get_me2_bv_sel(data)                     ((0x00200000&(data))>>21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_get_me2_dtl_hf_limt(data)                ((0x001FE000&(data))>>13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_get_me2_dtl_hf_cor(data)                 ((0x00001FE0&(data))>>5)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_get_me2_dtl_hf_shft(data)                ((0x00000006&(data))>>1)
#define  KME_ME2_CALC0_KME_ME2_CALC0_00_get_me2_dtl_hf_mode(data)                (0x00000001&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_04                                         0x1809C804
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_reg_addr                                 "0xB809C804"
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_reg                                      0xB809C804
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_inst_addr                                "0x0001"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_04_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_04_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_04_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_04_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_me2_mvd_alp_x1_shift                     (21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_me2_dtl_dr_limt_shift                    (13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_me2_dtl_dr_cor_shift                     (5)
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_me2_dtl_dr_shft_shift                    (1)
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_me2_dtl_dr_mode_shift                    (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_me2_mvd_alp_x1_mask                      (0x1FE00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_me2_dtl_dr_limt_mask                     (0x001FE000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_me2_dtl_dr_cor_mask                      (0x00001FE0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_me2_dtl_dr_shft_mask                     (0x00000006)
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_me2_dtl_dr_mode_mask                     (0x00000001)
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_me2_mvd_alp_x1(data)                     (0x1FE00000&((data)<<21))
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_me2_dtl_dr_limt(data)                    (0x001FE000&((data)<<13))
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_me2_dtl_dr_cor(data)                     (0x00001FE0&((data)<<5))
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_me2_dtl_dr_shft(data)                    (0x00000006&((data)<<1))
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_me2_dtl_dr_mode(data)                    (0x00000001&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_get_me2_mvd_alp_x1(data)                 ((0x1FE00000&(data))>>21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_get_me2_dtl_dr_limt(data)                ((0x001FE000&(data))>>13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_get_me2_dtl_dr_cor(data)                 ((0x00001FE0&(data))>>5)
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_get_me2_dtl_dr_shft(data)                ((0x00000006&(data))>>1)
#define  KME_ME2_CALC0_KME_ME2_CALC0_04_get_me2_dtl_dr_mode(data)                (0x00000001&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_08                                         0x1809C808
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_reg_addr                                 "0xB809C808"
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_reg                                      0xB809C808
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_inst_addr                                "0x0002"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_08_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_08_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_08_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_08_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_me2_mvd_alp_x5_shift                     (24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_me2_mvd_alp_x4_shift                     (16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_me2_mvd_alp_x3_shift                     (8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_me2_mvd_alp_x2_shift                     (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_me2_mvd_alp_x5_mask                      (0xFF000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_me2_mvd_alp_x4_mask                      (0x00FF0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_me2_mvd_alp_x3_mask                      (0x0000FF00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_me2_mvd_alp_x2_mask                      (0x000000FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_me2_mvd_alp_x5(data)                     (0xFF000000&((data)<<24))
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_me2_mvd_alp_x4(data)                     (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_me2_mvd_alp_x3(data)                     (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_me2_mvd_alp_x2(data)                     (0x000000FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_get_me2_mvd_alp_x5(data)                 ((0xFF000000&(data))>>24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_get_me2_mvd_alp_x4(data)                 ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_get_me2_mvd_alp_x3(data)                 ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_08_get_me2_mvd_alp_x2(data)                 (0x000000FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_0C                                         0x1809C80C
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_reg_addr                                 "0xB809C80C"
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_reg                                      0xB809C80C
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_inst_addr                                "0x0003"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_0C_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_0C_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_0C_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_0C_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_me2_mvd_alp_y5_shift                     (24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_me2_mvd_alp_y4_shift                     (18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_me2_mvd_alp_y3_shift                     (12)
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_me2_mvd_alp_y2_shift                     (6)
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_me2_mvd_alp_y1_shift                     (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_me2_mvd_alp_y5_mask                      (0x3F000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_me2_mvd_alp_y4_mask                      (0x00FC0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_me2_mvd_alp_y3_mask                      (0x0003F000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_me2_mvd_alp_y2_mask                      (0x00000FC0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_me2_mvd_alp_y1_mask                      (0x0000003F)
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_me2_mvd_alp_y5(data)                     (0x3F000000&((data)<<24))
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_me2_mvd_alp_y4(data)                     (0x00FC0000&((data)<<18))
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_me2_mvd_alp_y3(data)                     (0x0003F000&((data)<<12))
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_me2_mvd_alp_y2(data)                     (0x00000FC0&((data)<<6))
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_me2_mvd_alp_y1(data)                     (0x0000003F&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_get_me2_mvd_alp_y5(data)                 ((0x3F000000&(data))>>24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_get_me2_mvd_alp_y4(data)                 ((0x00FC0000&(data))>>18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_get_me2_mvd_alp_y3(data)                 ((0x0003F000&(data))>>12)
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_get_me2_mvd_alp_y2(data)                 ((0x00000FC0&(data))>>6)
#define  KME_ME2_CALC0_KME_ME2_CALC0_0C_get_me2_mvd_alp_y1(data)                 (0x0000003F&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_10                                         0x1809C810
#define  KME_ME2_CALC0_KME_ME2_CALC0_10_reg_addr                                 "0xB809C810"
#define  KME_ME2_CALC0_KME_ME2_CALC0_10_reg                                      0xB809C810
#define  KME_ME2_CALC0_KME_ME2_CALC0_10_inst_addr                                "0x0004"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_10_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_10_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_10_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_10_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_10_me2_mvd_alp_slope3_shift                 (18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_10_me2_mvd_alp_slope2_shift                 (9)
#define  KME_ME2_CALC0_KME_ME2_CALC0_10_me2_mvd_alp_slope1_shift                 (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_10_me2_mvd_alp_slope3_mask                  (0x07FC0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_10_me2_mvd_alp_slope2_mask                  (0x0003FE00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_10_me2_mvd_alp_slope1_mask                  (0x000001FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_10_me2_mvd_alp_slope3(data)                 (0x07FC0000&((data)<<18))
#define  KME_ME2_CALC0_KME_ME2_CALC0_10_me2_mvd_alp_slope2(data)                 (0x0003FE00&((data)<<9))
#define  KME_ME2_CALC0_KME_ME2_CALC0_10_me2_mvd_alp_slope1(data)                 (0x000001FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_10_get_me2_mvd_alp_slope3(data)             ((0x07FC0000&(data))>>18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_10_get_me2_mvd_alp_slope2(data)             ((0x0003FE00&(data))>>9)
#define  KME_ME2_CALC0_KME_ME2_CALC0_10_get_me2_mvd_alp_slope1(data)             (0x000001FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_14                                         0x1809C814
#define  KME_ME2_CALC0_KME_ME2_CALC0_14_reg_addr                                 "0xB809C814"
#define  KME_ME2_CALC0_KME_ME2_CALC0_14_reg                                      0xB809C814
#define  KME_ME2_CALC0_KME_ME2_CALC0_14_inst_addr                                "0x0005"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_14_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_14_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_14_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_14_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_14_me2_mvd_cuv_x2_shift                     (19)
#define  KME_ME2_CALC0_KME_ME2_CALC0_14_me2_mvd_cuv_x1_shift                     (9)
#define  KME_ME2_CALC0_KME_ME2_CALC0_14_me2_mvd_alp_slope4_shift                 (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_14_me2_mvd_cuv_x2_mask                      (0x1FF80000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_14_me2_mvd_cuv_x1_mask                      (0x0007FE00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_14_me2_mvd_alp_slope4_mask                  (0x000001FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_14_me2_mvd_cuv_x2(data)                     (0x1FF80000&((data)<<19))
#define  KME_ME2_CALC0_KME_ME2_CALC0_14_me2_mvd_cuv_x1(data)                     (0x0007FE00&((data)<<9))
#define  KME_ME2_CALC0_KME_ME2_CALC0_14_me2_mvd_alp_slope4(data)                 (0x000001FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_14_get_me2_mvd_cuv_x2(data)                 ((0x1FF80000&(data))>>19)
#define  KME_ME2_CALC0_KME_ME2_CALC0_14_get_me2_mvd_cuv_x1(data)                 ((0x0007FE00&(data))>>9)
#define  KME_ME2_CALC0_KME_ME2_CALC0_14_get_me2_mvd_alp_slope4(data)             (0x000001FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_18                                         0x1809C818
#define  KME_ME2_CALC0_KME_ME2_CALC0_18_reg_addr                                 "0xB809C818"
#define  KME_ME2_CALC0_KME_ME2_CALC0_18_reg                                      0xB809C818
#define  KME_ME2_CALC0_KME_ME2_CALC0_18_inst_addr                                "0x0006"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_18_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_18_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_18_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_18_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_18_me2_mvd_cuv_y2_shift                     (20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_18_me2_mvd_cuv_y1_shift                     (10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_18_me2_mvd_cuv_x3_shift                     (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_18_me2_mvd_cuv_y2_mask                      (0x3FF00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_18_me2_mvd_cuv_y1_mask                      (0x000FFC00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_18_me2_mvd_cuv_x3_mask                      (0x000003FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_18_me2_mvd_cuv_y2(data)                     (0x3FF00000&((data)<<20))
#define  KME_ME2_CALC0_KME_ME2_CALC0_18_me2_mvd_cuv_y1(data)                     (0x000FFC00&((data)<<10))
#define  KME_ME2_CALC0_KME_ME2_CALC0_18_me2_mvd_cuv_x3(data)                     (0x000003FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_18_get_me2_mvd_cuv_y2(data)                 ((0x3FF00000&(data))>>20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_18_get_me2_mvd_cuv_y1(data)                 ((0x000FFC00&(data))>>10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_18_get_me2_mvd_cuv_x3(data)                 (0x000003FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_1C                                         0x1809C81C
#define  KME_ME2_CALC0_KME_ME2_CALC0_1C_reg_addr                                 "0xB809C81C"
#define  KME_ME2_CALC0_KME_ME2_CALC0_1C_reg                                      0xB809C81C
#define  KME_ME2_CALC0_KME_ME2_CALC0_1C_inst_addr                                "0x0007"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_1C_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_1C_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_1C_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_1C_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_1C_me2_mvd_cuv_slope1_shift                 (10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_1C_me2_mvd_cuv_y3_shift                     (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_1C_me2_mvd_cuv_slope1_mask                  (0x007FFC00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_1C_me2_mvd_cuv_y3_mask                      (0x000003FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_1C_me2_mvd_cuv_slope1(data)                 (0x007FFC00&((data)<<10))
#define  KME_ME2_CALC0_KME_ME2_CALC0_1C_me2_mvd_cuv_y3(data)                     (0x000003FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_1C_get_me2_mvd_cuv_slope1(data)             ((0x007FFC00&(data))>>10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_1C_get_me2_mvd_cuv_y3(data)                 (0x000003FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_20                                         0x1809C820
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_reg_addr                                 "0xB809C820"
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_reg                                      0xB809C820
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_inst_addr                                "0x0008"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_20_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_20_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_20_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_20_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_ph_cdd_dbg_sel_shift                     (27)
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_me2_rmv_vy_step_shift                    (17)
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_me2_ph_mvd_dgain_mode_shift              (13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_me2_mvd_cuv_slope2_shift                 (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_ph_cdd_dbg_sel_mask                      (0xF8000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_me2_rmv_vy_step_mask                     (0x07FE0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_me2_ph_mvd_dgain_mode_mask               (0x0001E000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_me2_mvd_cuv_slope2_mask                  (0x00001FFF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_ph_cdd_dbg_sel(data)                     (0xF8000000&((data)<<27))
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_me2_rmv_vy_step(data)                    (0x07FE0000&((data)<<17))
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_me2_ph_mvd_dgain_mode(data)              (0x0001E000&((data)<<13))
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_me2_mvd_cuv_slope2(data)                 (0x00001FFF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_get_ph_cdd_dbg_sel(data)                 ((0xF8000000&(data))>>27)
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_get_me2_rmv_vy_step(data)                ((0x07FE0000&(data))>>17)
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_get_me2_ph_mvd_dgain_mode(data)          ((0x0001E000&(data))>>13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_20_get_me2_mvd_cuv_slope2(data)             (0x00001FFF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_24                                         0x1809C824
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_reg_addr                                 "0xB809C824"
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_reg                                      0xB809C824
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_inst_addr                                "0x0009"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_24_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_24_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_24_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_24_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_me2_mvd_dgain_x4_shift                   (24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_me2_mvd_dgain_x3_shift                   (16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_me2_mvd_dgain_x2_shift                   (8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_me2_mvd_dgain_x1_shift                   (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_me2_mvd_dgain_x4_mask                    (0xFF000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_me2_mvd_dgain_x3_mask                    (0x00FF0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_me2_mvd_dgain_x2_mask                    (0x0000FF00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_me2_mvd_dgain_x1_mask                    (0x000000FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_me2_mvd_dgain_x4(data)                   (0xFF000000&((data)<<24))
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_me2_mvd_dgain_x3(data)                   (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_me2_mvd_dgain_x2(data)                   (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_me2_mvd_dgain_x1(data)                   (0x000000FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_get_me2_mvd_dgain_x4(data)               ((0xFF000000&(data))>>24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_get_me2_mvd_dgain_x3(data)               ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_get_me2_mvd_dgain_x2(data)               ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_24_get_me2_mvd_dgain_x1(data)               (0x000000FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_28                                         0x1809C828
#define  KME_ME2_CALC0_KME_ME2_CALC0_28_reg_addr                                 "0xB809C828"
#define  KME_ME2_CALC0_KME_ME2_CALC0_28_reg                                      0xB809C828
#define  KME_ME2_CALC0_KME_ME2_CALC0_28_inst_addr                                "0x000A"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_28_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_28_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_28_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_28_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_28_me2_mvd_dgain_y2_shift                   (18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_28_me2_mvd_dgain_y1_shift                   (8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_28_me2_mvd_dgain_x5_shift                   (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_28_me2_mvd_dgain_y2_mask                    (0x0FFC0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_28_me2_mvd_dgain_y1_mask                    (0x0003FF00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_28_me2_mvd_dgain_x5_mask                    (0x000000FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_28_me2_mvd_dgain_y2(data)                   (0x0FFC0000&((data)<<18))
#define  KME_ME2_CALC0_KME_ME2_CALC0_28_me2_mvd_dgain_y1(data)                   (0x0003FF00&((data)<<8))
#define  KME_ME2_CALC0_KME_ME2_CALC0_28_me2_mvd_dgain_x5(data)                   (0x000000FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_28_get_me2_mvd_dgain_y2(data)               ((0x0FFC0000&(data))>>18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_28_get_me2_mvd_dgain_y1(data)               ((0x0003FF00&(data))>>8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_28_get_me2_mvd_dgain_x5(data)               (0x000000FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_2C                                         0x1809C82C
#define  KME_ME2_CALC0_KME_ME2_CALC0_2C_reg_addr                                 "0xB809C82C"
#define  KME_ME2_CALC0_KME_ME2_CALC0_2C_reg                                      0xB809C82C
#define  KME_ME2_CALC0_KME_ME2_CALC0_2C_inst_addr                                "0x000B"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_2C_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_2C_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_2C_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_2C_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_2C_me2_mvd_dgain_y5_shift                   (20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_2C_me2_mvd_dgain_y4_shift                   (10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_2C_me2_mvd_dgain_y3_shift                   (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_2C_me2_mvd_dgain_y5_mask                    (0x3FF00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_2C_me2_mvd_dgain_y4_mask                    (0x000FFC00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_2C_me2_mvd_dgain_y3_mask                    (0x000003FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_2C_me2_mvd_dgain_y5(data)                   (0x3FF00000&((data)<<20))
#define  KME_ME2_CALC0_KME_ME2_CALC0_2C_me2_mvd_dgain_y4(data)                   (0x000FFC00&((data)<<10))
#define  KME_ME2_CALC0_KME_ME2_CALC0_2C_me2_mvd_dgain_y3(data)                   (0x000003FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_2C_get_me2_mvd_dgain_y5(data)               ((0x3FF00000&(data))>>20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_2C_get_me2_mvd_dgain_y4(data)               ((0x000FFC00&(data))>>10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_2C_get_me2_mvd_dgain_y3(data)               (0x000003FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_30                                         0x1809C830
#define  KME_ME2_CALC0_KME_ME2_CALC0_30_reg_addr                                 "0xB809C830"
#define  KME_ME2_CALC0_KME_ME2_CALC0_30_reg                                      0xB809C830
#define  KME_ME2_CALC0_KME_ME2_CALC0_30_inst_addr                                "0x000C"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_30_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_30_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_30_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_30_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_30_me2_mvd_dgain_slope2_shift               (16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_30_me2_mvd_dgain_slope1_shift               (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_30_me2_mvd_dgain_slope2_mask                (0xFFFF0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_30_me2_mvd_dgain_slope1_mask                (0x0000FFFF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_30_me2_mvd_dgain_slope2(data)               (0xFFFF0000&((data)<<16))
#define  KME_ME2_CALC0_KME_ME2_CALC0_30_me2_mvd_dgain_slope1(data)               (0x0000FFFF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_30_get_me2_mvd_dgain_slope2(data)           ((0xFFFF0000&(data))>>16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_30_get_me2_mvd_dgain_slope1(data)           (0x0000FFFF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_34                                         0x1809C834
#define  KME_ME2_CALC0_KME_ME2_CALC0_34_reg_addr                                 "0xB809C834"
#define  KME_ME2_CALC0_KME_ME2_CALC0_34_reg                                      0xB809C834
#define  KME_ME2_CALC0_KME_ME2_CALC0_34_inst_addr                                "0x000D"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_34_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_34_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_34_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_34_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_34_me2_mvd_dgain_slope4_shift               (16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_34_me2_mvd_dgain_slope3_shift               (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_34_me2_mvd_dgain_slope4_mask                (0xFFFF0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_34_me2_mvd_dgain_slope3_mask                (0x0000FFFF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_34_me2_mvd_dgain_slope4(data)               (0xFFFF0000&((data)<<16))
#define  KME_ME2_CALC0_KME_ME2_CALC0_34_me2_mvd_dgain_slope3(data)               (0x0000FFFF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_34_get_me2_mvd_dgain_slope4(data)           ((0xFFFF0000&(data))>>16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_34_get_me2_mvd_dgain_slope3(data)           (0x0000FFFF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_38                                         0x1809C838
#define  KME_ME2_CALC0_KME_ME2_CALC0_38_reg_addr                                 "0xB809C838"
#define  KME_ME2_CALC0_KME_ME2_CALC0_38_reg                                      0xB809C838
#define  KME_ME2_CALC0_KME_ME2_CALC0_38_inst_addr                                "0x000E"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_38_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_38_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_38_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_38_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_38_me2_mvd_pgain_x3_shift                   (20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_38_me2_mvd_pgain_x2_shift                   (10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_38_me2_mvd_pgain_x1_shift                   (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_38_me2_mvd_pgain_x3_mask                    (0x3FF00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_38_me2_mvd_pgain_x2_mask                    (0x000FFC00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_38_me2_mvd_pgain_x1_mask                    (0x000003FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_38_me2_mvd_pgain_x3(data)                   (0x3FF00000&((data)<<20))
#define  KME_ME2_CALC0_KME_ME2_CALC0_38_me2_mvd_pgain_x2(data)                   (0x000FFC00&((data)<<10))
#define  KME_ME2_CALC0_KME_ME2_CALC0_38_me2_mvd_pgain_x1(data)                   (0x000003FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_38_get_me2_mvd_pgain_x3(data)               ((0x3FF00000&(data))>>20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_38_get_me2_mvd_pgain_x2(data)               ((0x000FFC00&(data))>>10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_38_get_me2_mvd_pgain_x1(data)               (0x000003FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_3C                                         0x1809C83C
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_reg_addr                                 "0xB809C83C"
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_reg                                      0xB809C83C
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_inst_addr                                "0x000F"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_3C_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_3C_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_3C_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_3C_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_me2_mvd_pgain_slope1_shift               (18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_me2_mvd_pgain_y3_shift                   (12)
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_me2_mvd_pgain_y2_shift                   (6)
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_me2_mvd_pgain_y1_shift                   (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_me2_mvd_pgain_slope1_mask                (0x07FC0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_me2_mvd_pgain_y3_mask                    (0x0003F000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_me2_mvd_pgain_y2_mask                    (0x00000FC0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_me2_mvd_pgain_y1_mask                    (0x0000003F)
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_me2_mvd_pgain_slope1(data)               (0x07FC0000&((data)<<18))
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_me2_mvd_pgain_y3(data)                   (0x0003F000&((data)<<12))
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_me2_mvd_pgain_y2(data)                   (0x00000FC0&((data)<<6))
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_me2_mvd_pgain_y1(data)                   (0x0000003F&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_get_me2_mvd_pgain_slope1(data)           ((0x07FC0000&(data))>>18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_get_me2_mvd_pgain_y3(data)               ((0x0003F000&(data))>>12)
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_get_me2_mvd_pgain_y2(data)               ((0x00000FC0&(data))>>6)
#define  KME_ME2_CALC0_KME_ME2_CALC0_3C_get_me2_mvd_pgain_y1(data)               (0x0000003F&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_40                                         0x1809C840
#define  KME_ME2_CALC0_KME_ME2_CALC0_40_reg_addr                                 "0xB809C840"
#define  KME_ME2_CALC0_KME_ME2_CALC0_40_reg                                      0xB809C840
#define  KME_ME2_CALC0_KME_ME2_CALC0_40_inst_addr                                "0x0010"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_40_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_40_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_40_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_40_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_40_me2_rmv_vx_step_shift                    (21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_40_me2_gmvd_cnt_x1_shift                    (9)
#define  KME_ME2_CALC0_KME_ME2_CALC0_40_me2_mvd_pgain_slope2_shift               (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_40_me2_rmv_vx_step_mask                     (0xFFE00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_40_me2_gmvd_cnt_x1_mask                     (0x001FFE00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_40_me2_mvd_pgain_slope2_mask                (0x000001FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_40_me2_rmv_vx_step(data)                    (0xFFE00000&((data)<<21))
#define  KME_ME2_CALC0_KME_ME2_CALC0_40_me2_gmvd_cnt_x1(data)                    (0x001FFE00&((data)<<9))
#define  KME_ME2_CALC0_KME_ME2_CALC0_40_me2_mvd_pgain_slope2(data)               (0x000001FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_40_get_me2_rmv_vx_step(data)                ((0xFFE00000&(data))>>21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_40_get_me2_gmvd_cnt_x1(data)                ((0x001FFE00&(data))>>9)
#define  KME_ME2_CALC0_KME_ME2_CALC0_40_get_me2_mvd_pgain_slope2(data)           (0x000001FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_44                                         0x1809C844
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_reg_addr                                 "0xB809C844"
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_reg                                      0xB809C844
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_inst_addr                                "0x0011"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_44_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_44_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_44_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_44_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_me2_ph_mvd_pgain_mode_shift              (28)
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_me2_ph_psad_alp_mode_shift               (24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_me2_gmvd_cnt_x3_shift                    (12)
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_me2_gmvd_cnt_x2_shift                    (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_me2_ph_mvd_pgain_mode_mask               (0xF0000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_me2_ph_psad_alp_mode_mask                (0x0F000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_me2_gmvd_cnt_x3_mask                     (0x00FFF000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_me2_gmvd_cnt_x2_mask                     (0x00000FFF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_me2_ph_mvd_pgain_mode(data)              (0xF0000000&((data)<<28))
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_me2_ph_psad_alp_mode(data)               (0x0F000000&((data)<<24))
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_me2_gmvd_cnt_x3(data)                    (0x00FFF000&((data)<<12))
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_me2_gmvd_cnt_x2(data)                    (0x00000FFF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_get_me2_ph_mvd_pgain_mode(data)          ((0xF0000000&(data))>>28)
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_get_me2_ph_psad_alp_mode(data)           ((0x0F000000&(data))>>24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_get_me2_gmvd_cnt_x3(data)                ((0x00FFF000&(data))>>12)
#define  KME_ME2_CALC0_KME_ME2_CALC0_44_get_me2_gmvd_cnt_x2(data)                (0x00000FFF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_48                                         0x1809C848
#define  KME_ME2_CALC0_KME_ME2_CALC0_48_reg_addr                                 "0xB809C848"
#define  KME_ME2_CALC0_KME_ME2_CALC0_48_reg                                      0xB809C848
#define  KME_ME2_CALC0_KME_ME2_CALC0_48_inst_addr                                "0x0012"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_48_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_48_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_48_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_48_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_48_me2_gmvd_cnt_y3_shift                    (16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_48_me2_gmvd_cnt_y2_shift                    (8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_48_me2_gmvd_cnt_y1_shift                    (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_48_me2_gmvd_cnt_y3_mask                     (0x00FF0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_48_me2_gmvd_cnt_y2_mask                     (0x0000FF00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_48_me2_gmvd_cnt_y1_mask                     (0x000000FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_48_me2_gmvd_cnt_y3(data)                    (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC0_KME_ME2_CALC0_48_me2_gmvd_cnt_y2(data)                    (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC0_KME_ME2_CALC0_48_me2_gmvd_cnt_y1(data)                    (0x000000FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_48_get_me2_gmvd_cnt_y3(data)                ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_48_get_me2_gmvd_cnt_y2(data)                ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_48_get_me2_gmvd_cnt_y1(data)                (0x000000FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_4C                                         0x1809C84C
#define  KME_ME2_CALC0_KME_ME2_CALC0_4C_reg_addr                                 "0xB809C84C"
#define  KME_ME2_CALC0_KME_ME2_CALC0_4C_reg                                      0xB809C84C
#define  KME_ME2_CALC0_KME_ME2_CALC0_4C_inst_addr                                "0x0013"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_4C_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_4C_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_4C_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_4C_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_4C_me2_gmvd_cnt_slope2_shift                (11)
#define  KME_ME2_CALC0_KME_ME2_CALC0_4C_me2_gmvd_cnt_slope1_shift                (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_4C_me2_gmvd_cnt_slope2_mask                 (0x003FF800)
#define  KME_ME2_CALC0_KME_ME2_CALC0_4C_me2_gmvd_cnt_slope1_mask                 (0x000007FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_4C_me2_gmvd_cnt_slope2(data)                (0x003FF800&((data)<<11))
#define  KME_ME2_CALC0_KME_ME2_CALC0_4C_me2_gmvd_cnt_slope1(data)                (0x000007FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_4C_get_me2_gmvd_cnt_slope2(data)            ((0x003FF800&(data))>>11)
#define  KME_ME2_CALC0_KME_ME2_CALC0_4C_get_me2_gmvd_cnt_slope1(data)            (0x000007FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_50                                         0x1809C850
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_reg_addr                                 "0xB809C850"
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_reg                                      0xB809C850
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_inst_addr                                "0x0014"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_50_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_50_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_50_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_50_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_me2_psad_alp_y1_shift                    (24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_me2_psad_alp_x3_shift                    (16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_me2_psad_alp_x2_shift                    (8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_me2_psad_alp_x1_shift                    (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_me2_psad_alp_y1_mask                     (0x3F000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_me2_psad_alp_x3_mask                     (0x00FF0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_me2_psad_alp_x2_mask                     (0x0000FF00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_me2_psad_alp_x1_mask                     (0x000000FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_me2_psad_alp_y1(data)                    (0x3F000000&((data)<<24))
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_me2_psad_alp_x3(data)                    (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_me2_psad_alp_x2(data)                    (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_me2_psad_alp_x1(data)                    (0x000000FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_get_me2_psad_alp_y1(data)                ((0x3F000000&(data))>>24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_get_me2_psad_alp_x3(data)                ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_get_me2_psad_alp_x2(data)                ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_50_get_me2_psad_alp_x1(data)                (0x000000FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_54                                         0x1809C854
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_reg_addr                                 "0xB809C854"
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_reg                                      0xB809C854
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_inst_addr                                "0x0015"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_54_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_54_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_54_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_54_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_me2_rgn_shift_shift                      (30)
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_me2_psad_alp_slope2_shift                (21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_me2_psad_alp_slope1_shift                (12)
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_me2_psad_alp_y3_shift                    (6)
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_me2_psad_alp_y2_shift                    (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_me2_rgn_shift_mask                       (0xC0000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_me2_psad_alp_slope2_mask                 (0x3FE00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_me2_psad_alp_slope1_mask                 (0x001FF000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_me2_psad_alp_y3_mask                     (0x00000FC0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_me2_psad_alp_y2_mask                     (0x0000003F)
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_me2_rgn_shift(data)                      (0xC0000000&((data)<<30))
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_me2_psad_alp_slope2(data)                (0x3FE00000&((data)<<21))
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_me2_psad_alp_slope1(data)                (0x001FF000&((data)<<12))
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_me2_psad_alp_y3(data)                    (0x00000FC0&((data)<<6))
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_me2_psad_alp_y2(data)                    (0x0000003F&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_get_me2_rgn_shift(data)                  ((0xC0000000&(data))>>30)
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_get_me2_psad_alp_slope2(data)            ((0x3FE00000&(data))>>21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_get_me2_psad_alp_slope1(data)            ((0x001FF000&(data))>>12)
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_get_me2_psad_alp_y3(data)                ((0x00000FC0&(data))>>6)
#define  KME_ME2_CALC0_KME_ME2_CALC0_54_get_me2_psad_alp_y2(data)                (0x0000003F&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_60                                         0x1809C860
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_reg_addr                                 "0xB809C860"
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_reg                                      0xB809C860
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_inst_addr                                "0x0016"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_60_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_60_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_60_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_60_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_acdc_pk_dtl_off_shift                (24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_acdc_pk_dtl_th_shift                 (16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_acdc_pk_apl_off_shift                (15)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_acdc_pk_apl_th_shift                 (7)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_dbg_offset_option_shift              (4)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_dbg_cdd_option_shift                 (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_acdc_pk_dtl_off_mask                 (0x01000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_acdc_pk_dtl_th_mask                  (0x00FF0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_acdc_pk_apl_off_mask                 (0x00008000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_acdc_pk_apl_th_mask                  (0x00007F80)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_dbg_offset_option_mask               (0x00000070)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_dbg_cdd_option_mask                  (0x0000000F)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_acdc_pk_dtl_off(data)                (0x01000000&((data)<<24))
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_acdc_pk_dtl_th(data)                 (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_acdc_pk_apl_off(data)                (0x00008000&((data)<<15))
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_acdc_pk_apl_th(data)                 (0x00007F80&((data)<<7))
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_dbg_offset_option(data)              (0x00000070&((data)<<4))
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_me2_dbg_cdd_option(data)                 (0x0000000F&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_get_me2_acdc_pk_dtl_off(data)            ((0x01000000&(data))>>24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_get_me2_acdc_pk_dtl_th(data)             ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_get_me2_acdc_pk_apl_off(data)            ((0x00008000&(data))>>15)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_get_me2_acdc_pk_apl_th(data)             ((0x00007F80&(data))>>7)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_get_me2_dbg_offset_option(data)          ((0x00000070&(data))>>4)
#define  KME_ME2_CALC0_KME_ME2_CALC0_60_get_me2_dbg_cdd_option(data)             (0x0000000F&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_64                                         0x1809C864
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_reg_addr                                 "0xB809C864"
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_reg                                      0xB809C864
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_inst_addr                                "0x0017"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_64_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_64_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_64_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_64_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_me2_calc_boundary_color_shift            (7)
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_me2_calc_mv_boundary_mux_shift           (6)
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_me2_calc_mv_option_shift                 (3)
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_me2_calc_mv_full_mux_shift               (1)
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_me2_mv_out_patt_en_shift                 (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_me2_calc_boundary_color_mask             (0x0FFFFF80)
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_me2_calc_mv_boundary_mux_mask            (0x00000040)
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_me2_calc_mv_option_mask                  (0x00000038)
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_me2_calc_mv_full_mux_mask                (0x00000006)
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_me2_mv_out_patt_en_mask                  (0x00000001)
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_me2_calc_boundary_color(data)            (0x0FFFFF80&((data)<<7))
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_me2_calc_mv_boundary_mux(data)           (0x00000040&((data)<<6))
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_me2_calc_mv_option(data)                 (0x00000038&((data)<<3))
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_me2_calc_mv_full_mux(data)               (0x00000006&((data)<<1))
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_me2_mv_out_patt_en(data)                 (0x00000001&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_get_me2_calc_boundary_color(data)        ((0x0FFFFF80&(data))>>7)
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_get_me2_calc_mv_boundary_mux(data)       ((0x00000040&(data))>>6)
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_get_me2_calc_mv_option(data)             ((0x00000038&(data))>>3)
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_get_me2_calc_mv_full_mux(data)           ((0x00000006&(data))>>1)
#define  KME_ME2_CALC0_KME_ME2_CALC0_64_get_me2_mv_out_patt_en(data)             (0x00000001&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_68                                         0x1809C868
#define  KME_ME2_CALC0_KME_ME2_CALC0_68_reg_addr                                 "0xB809C868"
#define  KME_ME2_CALC0_KME_ME2_CALC0_68_reg                                      0xB809C868
#define  KME_ME2_CALC0_KME_ME2_CALC0_68_inst_addr                                "0x0018"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_68_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_68_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_68_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_68_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_68_me2_gmvd_ucf_x3_shift                    (20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_68_me2_gmvd_ucf_x2_shift                    (10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_68_me2_gmvd_ucf_x1_shift                    (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_68_me2_gmvd_ucf_x3_mask                     (0x3FF00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_68_me2_gmvd_ucf_x2_mask                     (0x000FFC00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_68_me2_gmvd_ucf_x1_mask                     (0x000003FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_68_me2_gmvd_ucf_x3(data)                    (0x3FF00000&((data)<<20))
#define  KME_ME2_CALC0_KME_ME2_CALC0_68_me2_gmvd_ucf_x2(data)                    (0x000FFC00&((data)<<10))
#define  KME_ME2_CALC0_KME_ME2_CALC0_68_me2_gmvd_ucf_x1(data)                    (0x000003FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_68_get_me2_gmvd_ucf_x3(data)                ((0x3FF00000&(data))>>20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_68_get_me2_gmvd_ucf_x2(data)                ((0x000FFC00&(data))>>10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_68_get_me2_gmvd_ucf_x1(data)                (0x000003FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_6C                                         0x1809C86C
#define  KME_ME2_CALC0_KME_ME2_CALC0_6C_reg_addr                                 "0xB809C86C"
#define  KME_ME2_CALC0_KME_ME2_CALC0_6C_reg                                      0xB809C86C
#define  KME_ME2_CALC0_KME_ME2_CALC0_6C_inst_addr                                "0x0019"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_6C_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_6C_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_6C_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_6C_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_6C_me2_gmvd_ucf_y3_shift                    (16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_6C_me2_gmvd_ucf_y2_shift                    (8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_6C_me2_gmvd_ucf_y1_shift                    (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_6C_me2_gmvd_ucf_y3_mask                     (0x00FF0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_6C_me2_gmvd_ucf_y2_mask                     (0x0000FF00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_6C_me2_gmvd_ucf_y1_mask                     (0x000000FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_6C_me2_gmvd_ucf_y3(data)                    (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC0_KME_ME2_CALC0_6C_me2_gmvd_ucf_y2(data)                    (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC0_KME_ME2_CALC0_6C_me2_gmvd_ucf_y1(data)                    (0x000000FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_6C_get_me2_gmvd_ucf_y3(data)                ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_6C_get_me2_gmvd_ucf_y2(data)                ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_6C_get_me2_gmvd_ucf_y1(data)                (0x000000FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_70                                         0x1809C870
#define  KME_ME2_CALC0_KME_ME2_CALC0_70_reg_addr                                 "0xB809C870"
#define  KME_ME2_CALC0_KME_ME2_CALC0_70_reg                                      0xB809C870
#define  KME_ME2_CALC0_KME_ME2_CALC0_70_inst_addr                                "0x001A"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_70_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_70_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_70_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_70_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_70_me2_gmvd_ucf_slope2_shift                (11)
#define  KME_ME2_CALC0_KME_ME2_CALC0_70_me2_gmvd_ucf_slope1_shift                (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_70_me2_gmvd_ucf_slope2_mask                 (0x003FF800)
#define  KME_ME2_CALC0_KME_ME2_CALC0_70_me2_gmvd_ucf_slope1_mask                 (0x000007FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_70_me2_gmvd_ucf_slope2(data)                (0x003FF800&((data)<<11))
#define  KME_ME2_CALC0_KME_ME2_CALC0_70_me2_gmvd_ucf_slope1(data)                (0x000007FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_70_get_me2_gmvd_ucf_slope2(data)            ((0x003FF800&(data))>>11)
#define  KME_ME2_CALC0_KME_ME2_CALC0_70_get_me2_gmvd_ucf_slope1(data)            (0x000007FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_74                                         0x1809C874
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_reg_addr                                 "0xB809C874"
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_reg                                      0xB809C874
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_inst_addr                                "0x001B"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_74_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_74_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_74_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_74_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_me2_mv_invalid_sad_sel_shift             (31)
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_me2_rmv_vact_shift                       (22)
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_me2_rmv_hact_shift                       (13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_me2_ph_mvd_cost_limt_shift               (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_me2_mv_invalid_sad_sel_mask              (0x80000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_me2_rmv_vact_mask                        (0x7FC00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_me2_rmv_hact_mask                        (0x003FE000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_me2_ph_mvd_cost_limt_mask                (0x00001FFF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_me2_mv_invalid_sad_sel(data)             (0x80000000&((data)<<31))
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_me2_rmv_vact(data)                       (0x7FC00000&((data)<<22))
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_me2_rmv_hact(data)                       (0x003FE000&((data)<<13))
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_me2_ph_mvd_cost_limt(data)               (0x00001FFF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_get_me2_mv_invalid_sad_sel(data)         ((0x80000000&(data))>>31)
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_get_me2_rmv_vact(data)                   ((0x7FC00000&(data))>>22)
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_get_me2_rmv_hact(data)                   ((0x003FE000&(data))>>13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_74_get_me2_ph_mvd_cost_limt(data)           (0x00001FFF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_78                                         0x1809C878
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_reg_addr                                 "0xB809C878"
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_reg                                      0xB809C878
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_inst_addr                                "0x001C"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_78_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_78_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_78_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_78_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_me2_ph_gmvd_cost_limt_shift              (15)
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_me2_ph_mvd_alp_mode_shift                (11)
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_me2_ph_dc_pix_ad_data_shift              (3)
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_ph_bv2_ofst_sel_shift                    (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_me2_ph_gmvd_cost_limt_mask               (0x0FFF8000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_me2_ph_mvd_alp_mode_mask                 (0x00007800)
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_me2_ph_dc_pix_ad_data_mask               (0x000007F8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_ph_bv2_ofst_sel_mask                     (0x00000007)
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_me2_ph_gmvd_cost_limt(data)              (0x0FFF8000&((data)<<15))
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_me2_ph_mvd_alp_mode(data)                (0x00007800&((data)<<11))
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_me2_ph_dc_pix_ad_data(data)              (0x000007F8&((data)<<3))
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_ph_bv2_ofst_sel(data)                    (0x00000007&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_get_me2_ph_gmvd_cost_limt(data)          ((0x0FFF8000&(data))>>15)
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_get_me2_ph_mvd_alp_mode(data)            ((0x00007800&(data))>>11)
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_get_me2_ph_dc_pix_ad_data(data)          ((0x000007F8&(data))>>3)
#define  KME_ME2_CALC0_KME_ME2_CALC0_78_get_ph_bv2_ofst_sel(data)                (0x00000007&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_7C                                         0x1809C87C
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_reg_addr                                 "0xB809C87C"
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_reg                                      0xB809C87C
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_inst_addr                                "0x001D"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_7C_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_7C_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_7C_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_7C_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_me2_ph_adpt_cor_gain2_shift              (20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_me2_ph_adpt_cor_gain1_shift              (12)
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_me2_ph_adpt_cor_gain0_shift              (4)
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_me2_ph_adpt_cor_mode_shift               (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_me2_ph_adpt_cor_gain2_mask               (0x0FF00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_me2_ph_adpt_cor_gain1_mask               (0x000FF000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_me2_ph_adpt_cor_gain0_mask               (0x00000FF0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_me2_ph_adpt_cor_mode_mask                (0x0000000F)
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_me2_ph_adpt_cor_gain2(data)              (0x0FF00000&((data)<<20))
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_me2_ph_adpt_cor_gain1(data)              (0x000FF000&((data)<<12))
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_me2_ph_adpt_cor_gain0(data)              (0x00000FF0&((data)<<4))
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_me2_ph_adpt_cor_mode(data)               (0x0000000F&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_get_me2_ph_adpt_cor_gain2(data)          ((0x0FF00000&(data))>>20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_get_me2_ph_adpt_cor_gain1(data)          ((0x000FF000&(data))>>12)
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_get_me2_ph_adpt_cor_gain0(data)          ((0x00000FF0&(data))>>4)
#define  KME_ME2_CALC0_KME_ME2_CALC0_7C_get_me2_ph_adpt_cor_mode(data)           (0x0000000F&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_80                                         0x1809C880
#define  KME_ME2_CALC0_KME_ME2_CALC0_80_reg_addr                                 "0xB809C880"
#define  KME_ME2_CALC0_KME_ME2_CALC0_80_reg                                      0xB809C880
#define  KME_ME2_CALC0_KME_ME2_CALC0_80_inst_addr                                "0x001E"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_80_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_80_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_80_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_80_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_80_me2_ph_dc_pix_cor_thd_shift              (18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_80_me2_ph_adpt_cor_limt_shift               (8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_80_me2_ph_adpt_cor_gain3_shift              (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_80_me2_ph_dc_pix_cor_thd_mask               (0x03FC0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_80_me2_ph_adpt_cor_limt_mask                (0x0003FF00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_80_me2_ph_adpt_cor_gain3_mask               (0x000000FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_80_me2_ph_dc_pix_cor_thd(data)              (0x03FC0000&((data)<<18))
#define  KME_ME2_CALC0_KME_ME2_CALC0_80_me2_ph_adpt_cor_limt(data)               (0x0003FF00&((data)<<8))
#define  KME_ME2_CALC0_KME_ME2_CALC0_80_me2_ph_adpt_cor_gain3(data)              (0x000000FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_80_get_me2_ph_dc_pix_cor_thd(data)          ((0x03FC0000&(data))>>18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_80_get_me2_ph_adpt_cor_limt(data)           ((0x0003FF00&(data))>>8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_80_get_me2_ph_adpt_cor_gain3(data)          (0x000000FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_84                                         0x1809C884
#define  KME_ME2_CALC0_KME_ME2_CALC0_84_reg_addr                                 "0xB809C884"
#define  KME_ME2_CALC0_KME_ME2_CALC0_84_reg                                      0xB809C884
#define  KME_ME2_CALC0_KME_ME2_CALC0_84_inst_addr                                "0x001F"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_84_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_84_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_84_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_84_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_84_me2_pfvgain_curve_x2_shift               (18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_84_me2_pfvgain_curve_x1_shift               (8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_84_me2_ph_dc_pix_sad_limt_shift             (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_84_me2_pfvgain_curve_x2_mask                (0x0FFC0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_84_me2_pfvgain_curve_x1_mask                (0x0003FF00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_84_me2_ph_dc_pix_sad_limt_mask              (0x000000FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_84_me2_pfvgain_curve_x2(data)               (0x0FFC0000&((data)<<18))
#define  KME_ME2_CALC0_KME_ME2_CALC0_84_me2_pfvgain_curve_x1(data)               (0x0003FF00&((data)<<8))
#define  KME_ME2_CALC0_KME_ME2_CALC0_84_me2_ph_dc_pix_sad_limt(data)             (0x000000FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_84_get_me2_pfvgain_curve_x2(data)           ((0x0FFC0000&(data))>>18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_84_get_me2_pfvgain_curve_x1(data)           ((0x0003FF00&(data))>>8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_84_get_me2_ph_dc_pix_sad_limt(data)         (0x000000FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_88                                         0x1809C888
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_reg_addr                                 "0xB809C888"
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_reg                                      0xB809C888
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_inst_addr                                "0x0020"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_88_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_88_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_88_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_88_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_me2_gmv_ucf_sel_shift                    (31)
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_me2_gmv_sel_kme_me2_calc0_shift          (30)
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_me2_pfvgain_curve_y2_shift               (20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_me2_pfvgain_curve_y1_shift               (10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_me2_pfvgain_curve_x3_shift               (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_me2_gmv_ucf_sel_mask                     (0x80000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_me2_gmv_sel_kme_me2_calc0_mask           (0x40000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_me2_pfvgain_curve_y2_mask                (0x3FF00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_me2_pfvgain_curve_y1_mask                (0x000FFC00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_me2_pfvgain_curve_x3_mask                (0x000003FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_me2_gmv_ucf_sel(data)                    (0x80000000&((data)<<31))
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_me2_gmv_sel_kme_me2_calc0(data)          (0x40000000&((data)<<30))
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_me2_pfvgain_curve_y2(data)               (0x3FF00000&((data)<<20))
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_me2_pfvgain_curve_y1(data)               (0x000FFC00&((data)<<10))
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_me2_pfvgain_curve_x3(data)               (0x000003FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_get_me2_gmv_ucf_sel(data)                ((0x80000000&(data))>>31)
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_get_me2_gmv_sel_kme_me2_calc0(data)      ((0x40000000&(data))>>30)
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_get_me2_pfvgain_curve_y2(data)           ((0x3FF00000&(data))>>20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_get_me2_pfvgain_curve_y1(data)           ((0x000FFC00&(data))>>10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_88_get_me2_pfvgain_curve_x3(data)           (0x000003FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_8C                                         0x1809C88C
#define  KME_ME2_CALC0_KME_ME2_CALC0_8C_reg_addr                                 "0xB809C88C"
#define  KME_ME2_CALC0_KME_ME2_CALC0_8C_reg                                      0xB809C88C
#define  KME_ME2_CALC0_KME_ME2_CALC0_8C_inst_addr                                "0x0021"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_8C_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_8C_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_8C_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_8C_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_8C_me2_pfvgain_slope2_shift                 (21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_8C_me2_pfvgain_slope1_shift                 (10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_8C_me2_pfvgain_curve_y3_shift               (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_8C_me2_pfvgain_slope2_mask                  (0xFFE00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_8C_me2_pfvgain_slope1_mask                  (0x001FFC00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_8C_me2_pfvgain_curve_y3_mask                (0x000003FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_8C_me2_pfvgain_slope2(data)                 (0xFFE00000&((data)<<21))
#define  KME_ME2_CALC0_KME_ME2_CALC0_8C_me2_pfvgain_slope1(data)                 (0x001FFC00&((data)<<10))
#define  KME_ME2_CALC0_KME_ME2_CALC0_8C_me2_pfvgain_curve_y3(data)               (0x000003FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_8C_get_me2_pfvgain_slope2(data)             ((0xFFE00000&(data))>>21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_8C_get_me2_pfvgain_slope1(data)             ((0x001FFC00&(data))>>10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_8C_get_me2_pfvgain_curve_y3(data)           (0x000003FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_90                                         0x1809C890
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_reg_addr                                 "0xB809C890"
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_reg                                      0xB809C890
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_inst_addr                                "0x0022"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_90_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_90_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_90_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_90_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_me2_wsad2_min_invalid_sel_ac_shift       (25)
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_me2_wsad2_min_invalid_sel_shift          (23)
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_me2_wsad1_min_invalid_sel_shift          (21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_me2_ofst_pfvdiff_gain_shift              (13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_phme_pfvdiff_limit_shift                 (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_me2_wsad2_min_invalid_sel_ac_mask        (0x06000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_me2_wsad2_min_invalid_sel_mask           (0x01800000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_me2_wsad1_min_invalid_sel_mask           (0x00600000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_me2_ofst_pfvdiff_gain_mask               (0x001FE000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_phme_pfvdiff_limit_mask                  (0x00001FFF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_me2_wsad2_min_invalid_sel_ac(data)       (0x06000000&((data)<<25))
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_me2_wsad2_min_invalid_sel(data)          (0x01800000&((data)<<23))
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_me2_wsad1_min_invalid_sel(data)          (0x00600000&((data)<<21))
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_me2_ofst_pfvdiff_gain(data)              (0x001FE000&((data)<<13))
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_phme_pfvdiff_limit(data)                 (0x00001FFF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_get_me2_wsad2_min_invalid_sel_ac(data)   ((0x06000000&(data))>>25)
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_get_me2_wsad2_min_invalid_sel(data)      ((0x01800000&(data))>>23)
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_get_me2_wsad1_min_invalid_sel(data)      ((0x00600000&(data))>>21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_get_me2_ofst_pfvdiff_gain(data)          ((0x001FE000&(data))>>13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_90_get_phme_pfvdiff_limit(data)             (0x00001FFF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_94                                         0x1809C894
#define  KME_ME2_CALC0_KME_ME2_CALC0_94_reg_addr                                 "0xB809C894"
#define  KME_ME2_CALC0_KME_ME2_CALC0_94_reg                                      0xB809C894
#define  KME_ME2_CALC0_KME_ME2_CALC0_94_inst_addr                                "0x0023"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_94_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_94_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_94_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_94_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_94_me2_ofst_cost_pnt1_shift                 (21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_94_me2_ofst_cost_pnt0_shift                 (13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_94_me2_ofst_pfv_diff_cost_limit_shift       (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_94_me2_ofst_cost_pnt1_mask                  (0x1FE00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_94_me2_ofst_cost_pnt0_mask                  (0x001FE000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_94_me2_ofst_pfv_diff_cost_limit_mask        (0x00001FFF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_94_me2_ofst_cost_pnt1(data)                 (0x1FE00000&((data)<<21))
#define  KME_ME2_CALC0_KME_ME2_CALC0_94_me2_ofst_cost_pnt0(data)                 (0x001FE000&((data)<<13))
#define  KME_ME2_CALC0_KME_ME2_CALC0_94_me2_ofst_pfv_diff_cost_limit(data)       (0x00001FFF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_94_get_me2_ofst_cost_pnt1(data)             ((0x1FE00000&(data))>>21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_94_get_me2_ofst_cost_pnt0(data)             ((0x001FE000&(data))>>13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_94_get_me2_ofst_pfv_diff_cost_limit(data)   (0x00001FFF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_98                                         0x1809C898
#define  KME_ME2_CALC0_KME_ME2_CALC0_98_reg_addr                                 "0xB809C898"
#define  KME_ME2_CALC0_KME_ME2_CALC0_98_reg                                      0xB809C898
#define  KME_ME2_CALC0_KME_ME2_CALC0_98_inst_addr                                "0x0024"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_98_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_98_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_98_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_98_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_98_me2_ofst_cost_pnt4_shift                 (16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_98_me2_ofst_cost_pnt3_shift                 (8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_98_me2_ofst_cost_pnt2_shift                 (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_98_me2_ofst_cost_pnt4_mask                  (0x00FF0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_98_me2_ofst_cost_pnt3_mask                  (0x0000FF00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_98_me2_ofst_cost_pnt2_mask                  (0x000000FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_98_me2_ofst_cost_pnt4(data)                 (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC0_KME_ME2_CALC0_98_me2_ofst_cost_pnt3(data)                 (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC0_KME_ME2_CALC0_98_me2_ofst_cost_pnt2(data)                 (0x000000FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_98_get_me2_ofst_cost_pnt4(data)             ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_98_get_me2_ofst_cost_pnt3(data)             ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_98_get_me2_ofst_cost_pnt2(data)             (0x000000FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_9C                                         0x1809C89C
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_reg_addr                                 "0xB809C89C"
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_reg                                      0xB809C89C
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_inst_addr                                "0x0025"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_9C_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_9C_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_9C_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_9C_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ac_invalid_sel_shift                 (31)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_pix_ad_data_shift              (23)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_dtl_sel_shift                        (20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_apl_sel_shift                        (18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_sel_shift                      (17)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_dc_norm_mode_shift                (15)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_norm_mode_shift                (13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_flt_shft_shift                 (10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_flt_mode_shift                 (8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_flt_sel_shift                  (7)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_bld_src_sel_shift                 (6)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_bld_alpha_shift                   (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ac_invalid_sel_mask                  (0x80000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_pix_ad_data_mask               (0x7F800000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_dtl_sel_mask                         (0x00700000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_apl_sel_mask                         (0x000C0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_sel_mask                       (0x00020000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_dc_norm_mode_mask                 (0x00018000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_norm_mode_mask                 (0x00006000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_flt_shft_mask                  (0x00001C00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_flt_mode_mask                  (0x00000300)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_flt_sel_mask                   (0x00000080)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_bld_src_sel_mask                  (0x00000040)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_bld_alpha_mask                    (0x0000003F)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ac_invalid_sel(data)                 (0x80000000&((data)<<31))
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_pix_ad_data(data)              (0x7F800000&((data)<<23))
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_dtl_sel(data)                        (0x00700000&((data)<<20))
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_apl_sel(data)                        (0x000C0000&((data)<<18))
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_sel(data)                      (0x00020000&((data)<<17))
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_dc_norm_mode(data)                (0x00018000&((data)<<15))
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_norm_mode(data)                (0x00006000&((data)<<13))
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_flt_shft(data)                 (0x00001C00&((data)<<10))
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_flt_mode(data)                 (0x00000300&((data)<<8))
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_ac_flt_sel(data)                  (0x00000080&((data)<<7))
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_bld_src_sel(data)                 (0x00000040&((data)<<6))
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_me2_ph_bld_alpha(data)                   (0x0000003F&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_get_me2_ac_invalid_sel(data)             ((0x80000000&(data))>>31)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_get_me2_ph_ac_pix_ad_data(data)          ((0x7F800000&(data))>>23)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_get_me2_dtl_sel(data)                    ((0x00700000&(data))>>20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_get_me2_apl_sel(data)                    ((0x000C0000&(data))>>18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_get_me2_ph_ac_sel(data)                  ((0x00020000&(data))>>17)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_get_me2_ph_dc_norm_mode(data)            ((0x00018000&(data))>>15)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_get_me2_ph_ac_norm_mode(data)            ((0x00006000&(data))>>13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_get_me2_ph_ac_flt_shft(data)             ((0x00001C00&(data))>>10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_get_me2_ph_ac_flt_mode(data)             ((0x00000300&(data))>>8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_get_me2_ph_ac_flt_sel(data)              ((0x00000080&(data))>>7)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_get_me2_ph_bld_src_sel(data)             ((0x00000040&(data))>>6)
#define  KME_ME2_CALC0_KME_ME2_CALC0_9C_get_me2_ph_bld_alpha(data)               (0x0000003F&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_A0                                         0x1809C8A0
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_reg_addr                                 "0xB809C8A0"
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_reg                                      0xB809C8A0
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_inst_addr                                "0x0026"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_A0_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_A0_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_A0_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_A0_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_me2_bv1_pk_src_ac_shift                  (27)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_me2_bv1_pk_src_dc_shift                  (26)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_me2_vec_eval_mvd_th_shift                (16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_me2_ph_ac_pix_sad_limt_shift             (8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_me2_ph_ac_pix_cor_thd_shift              (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_me2_bv1_pk_src_ac_mask                   (0x08000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_me2_bv1_pk_src_dc_mask                   (0x04000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_me2_vec_eval_mvd_th_mask                 (0x03FF0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_me2_ph_ac_pix_sad_limt_mask              (0x0000FF00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_me2_ph_ac_pix_cor_thd_mask               (0x000000FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_me2_bv1_pk_src_ac(data)                  (0x08000000&((data)<<27))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_me2_bv1_pk_src_dc(data)                  (0x04000000&((data)<<26))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_me2_vec_eval_mvd_th(data)                (0x03FF0000&((data)<<16))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_me2_ph_ac_pix_sad_limt(data)             (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_me2_ph_ac_pix_cor_thd(data)              (0x000000FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_get_me2_bv1_pk_src_ac(data)              ((0x08000000&(data))>>27)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_get_me2_bv1_pk_src_dc(data)              ((0x04000000&(data))>>26)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_get_me2_vec_eval_mvd_th(data)            ((0x03FF0000&(data))>>16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_get_me2_ph_ac_pix_sad_limt(data)         ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A0_get_me2_ph_ac_pix_cor_thd(data)          (0x000000FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_A4                                         0x1809C8A4
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_reg_addr                                 "0xB809C8A4"
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_reg                                      0xB809C8A4
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_inst_addr                                "0x0027"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_A4_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_A4_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_A4_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_A4_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_me2_acdc_pk_sad_diff_off_shift           (23)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_me2_acdc_pk_sad_diff_th_shift            (10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_me2_acdc_pk_en_shift                     (9)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_me2_dc_invalid_sel_shift                 (8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_me2_pfvdiff_gain_shift                   (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_me2_acdc_pk_sad_diff_off_mask            (0x00800000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_me2_acdc_pk_sad_diff_th_mask             (0x007FFC00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_me2_acdc_pk_en_mask                      (0x00000200)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_me2_dc_invalid_sel_mask                  (0x00000100)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_me2_pfvdiff_gain_mask                    (0x000000FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_me2_acdc_pk_sad_diff_off(data)           (0x00800000&((data)<<23))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_me2_acdc_pk_sad_diff_th(data)            (0x007FFC00&((data)<<10))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_me2_acdc_pk_en(data)                     (0x00000200&((data)<<9))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_me2_dc_invalid_sel(data)                 (0x00000100&((data)<<8))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_me2_pfvdiff_gain(data)                   (0x000000FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_get_me2_acdc_pk_sad_diff_off(data)       ((0x00800000&(data))>>23)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_get_me2_acdc_pk_sad_diff_th(data)        ((0x007FFC00&(data))>>10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_get_me2_acdc_pk_en(data)                 ((0x00000200&(data))>>9)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_get_me2_dc_invalid_sel(data)             ((0x00000100&(data))>>8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A4_get_me2_pfvdiff_gain(data)               (0x000000FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_A8                                         0x1809C8A8
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_reg_addr                                 "0xB809C8A8"
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_reg                                      0xB809C8A8
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_inst_addr                                "0x0028"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_A8_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_A8_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_A8_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_A8_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_me2_acdc_pk_small_mv_off_shift           (22)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_me2_acdc_pk_mvdiff_s_off_shift           (21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_me2_acdc_pk_mvdiff_s_th_shift            (11)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_me2_acdc_pk_mvdiff_off_shift             (10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_me2_acdc_pk_mvdiff_th_shift              (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_me2_acdc_pk_small_mv_off_mask            (0x00400000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_me2_acdc_pk_mvdiff_s_off_mask            (0x00200000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_me2_acdc_pk_mvdiff_s_th_mask             (0x001FF800)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_me2_acdc_pk_mvdiff_off_mask              (0x00000400)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_me2_acdc_pk_mvdiff_th_mask               (0x000003FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_me2_acdc_pk_small_mv_off(data)           (0x00400000&((data)<<22))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_me2_acdc_pk_mvdiff_s_off(data)           (0x00200000&((data)<<21))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_me2_acdc_pk_mvdiff_s_th(data)            (0x001FF800&((data)<<11))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_me2_acdc_pk_mvdiff_off(data)             (0x00000400&((data)<<10))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_me2_acdc_pk_mvdiff_th(data)              (0x000003FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_get_me2_acdc_pk_small_mv_off(data)       ((0x00400000&(data))>>22)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_get_me2_acdc_pk_mvdiff_s_off(data)       ((0x00200000&(data))>>21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_get_me2_acdc_pk_mvdiff_s_th(data)        ((0x001FF800&(data))>>11)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_get_me2_acdc_pk_mvdiff_off(data)         ((0x00000400&(data))>>10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_A8_get_me2_acdc_pk_mvdiff_th(data)          (0x000003FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_AC                                         0x1809C8AC
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_reg_addr                                 "0xB809C8AC"
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_reg                                      0xB809C8AC
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_inst_addr                                "0x0029"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_AC_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_AC_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_AC_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_AC_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_pk_bv1_follow_en_shift          (26)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_pk_bv1_ref_shift                (25)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_mvdiff_s_range_off_shift        (24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_mvdiff_s_range_shift            (14)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_bv_ac_sad_off_shift             (13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_bv_ac_sad_th_shift              (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_pk_bv1_follow_en_mask           (0x04000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_pk_bv1_ref_mask                 (0x02000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_mvdiff_s_range_off_mask         (0x01000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_mvdiff_s_range_mask             (0x00FFC000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_bv_ac_sad_off_mask              (0x00002000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_bv_ac_sad_th_mask               (0x00001FFF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_pk_bv1_follow_en(data)          (0x04000000&((data)<<26))
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_pk_bv1_ref(data)                (0x02000000&((data)<<25))
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_mvdiff_s_range_off(data)        (0x01000000&((data)<<24))
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_mvdiff_s_range(data)            (0x00FFC000&((data)<<14))
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_bv_ac_sad_off(data)             (0x00002000&((data)<<13))
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_me2_acdc_bv_ac_sad_th(data)              (0x00001FFF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_get_me2_acdc_pk_bv1_follow_en(data)      ((0x04000000&(data))>>26)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_get_me2_acdc_pk_bv1_ref(data)            ((0x02000000&(data))>>25)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_get_me2_acdc_mvdiff_s_range_off(data)    ((0x01000000&(data))>>24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_get_me2_acdc_mvdiff_s_range(data)        ((0x00FFC000&(data))>>14)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_get_me2_acdc_bv_ac_sad_off(data)         ((0x00002000&(data))>>13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_AC_get_me2_acdc_bv_ac_sad_th(data)          (0x00001FFF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_B0                                         0x1809C8B0
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_reg_addr                                 "0xB809C8B0"
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_reg                                      0xB809C8B0
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_inst_addr                                "0x002A"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_B0_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_B0_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_B0_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_B0_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_me2_loop_acbv_limit_vy_shift             (18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_me2_loop_acbv_limit_vx_shift             (8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_me2_loop_acbv_limit_gmv_gain_shift       (3)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_me2_loop_acbv_limit_sel_shift            (1)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_me2_loop_acbv_limit_en_shift             (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_me2_loop_acbv_limit_vy_mask              (0x07FC0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_me2_loop_acbv_limit_vx_mask              (0x0003FF00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_me2_loop_acbv_limit_gmv_gain_mask        (0x000000F8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_me2_loop_acbv_limit_sel_mask             (0x00000006)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_me2_loop_acbv_limit_en_mask              (0x00000001)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_me2_loop_acbv_limit_vy(data)             (0x07FC0000&((data)<<18))
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_me2_loop_acbv_limit_vx(data)             (0x0003FF00&((data)<<8))
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_me2_loop_acbv_limit_gmv_gain(data)       (0x000000F8&((data)<<3))
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_me2_loop_acbv_limit_sel(data)            (0x00000006&((data)<<1))
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_me2_loop_acbv_limit_en(data)             (0x00000001&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_get_me2_loop_acbv_limit_vy(data)         ((0x07FC0000&(data))>>18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_get_me2_loop_acbv_limit_vx(data)         ((0x0003FF00&(data))>>8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_get_me2_loop_acbv_limit_gmv_gain(data)   ((0x000000F8&(data))>>3)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_get_me2_loop_acbv_limit_sel(data)        ((0x00000006&(data))>>1)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B0_get_me2_loop_acbv_limit_en(data)         (0x00000001&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_B4                                         0x1809C8B4
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_reg_addr                                 "0xB809C8B4"
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_reg                                      0xB809C8B4
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_inst_addr                                "0x002B"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_B4_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_B4_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_B4_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_B4_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_me2_loop_acbv_limit_mv_y2_shift          (27)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_me2_loop_acbv_limit_mv_y1_shift          (22)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_me2_loop_acbv_limit_mv_x2_shift          (11)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_me2_loop_acbv_limit_mv_x1_shift          (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_me2_loop_acbv_limit_mv_y2_mask           (0xF8000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_me2_loop_acbv_limit_mv_y1_mask           (0x07C00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_me2_loop_acbv_limit_mv_x2_mask           (0x003FF800)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_me2_loop_acbv_limit_mv_x1_mask           (0x000007FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_me2_loop_acbv_limit_mv_y2(data)          (0xF8000000&((data)<<27))
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_me2_loop_acbv_limit_mv_y1(data)          (0x07C00000&((data)<<22))
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_me2_loop_acbv_limit_mv_x2(data)          (0x003FF800&((data)<<11))
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_me2_loop_acbv_limit_mv_x1(data)          (0x000007FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_get_me2_loop_acbv_limit_mv_y2(data)      ((0xF8000000&(data))>>27)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_get_me2_loop_acbv_limit_mv_y1(data)      ((0x07C00000&(data))>>22)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_get_me2_loop_acbv_limit_mv_x2(data)      ((0x003FF800&(data))>>11)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B4_get_me2_loop_acbv_limit_mv_x1(data)      (0x000007FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_B8                                         0x1809C8B8
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_reg_addr                                 "0xB809C8B8"
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_reg                                      0xB809C8B8
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_inst_addr                                "0x002C"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_B8_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_B8_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_B8_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_B8_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_me2_sec_multimin1_sad_th_shift           (11)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_me2_sec_multimin1_en_shift               (10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_me2_sec_multimin_sel_shift               (9)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_me2_loop_acbv_limit_mv_s_shift           (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_me2_sec_multimin1_sad_th_mask            (0x00FFF800)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_me2_sec_multimin1_en_mask                (0x00000400)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_me2_sec_multimin_sel_mask                (0x00000200)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_me2_loop_acbv_limit_mv_s_mask            (0x000001FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_me2_sec_multimin1_sad_th(data)           (0x00FFF800&((data)<<11))
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_me2_sec_multimin1_en(data)               (0x00000400&((data)<<10))
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_me2_sec_multimin_sel(data)               (0x00000200&((data)<<9))
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_me2_loop_acbv_limit_mv_s(data)           (0x000001FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_get_me2_sec_multimin1_sad_th(data)       ((0x00FFF800&(data))>>11)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_get_me2_sec_multimin1_en(data)           ((0x00000400&(data))>>10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_get_me2_sec_multimin_sel(data)           ((0x00000200&(data))>>9)
#define  KME_ME2_CALC0_KME_ME2_CALC0_B8_get_me2_loop_acbv_limit_mv_s(data)       (0x000001FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_BC                                         0x1809C8BC
#define  KME_ME2_CALC0_KME_ME2_CALC0_BC_reg_addr                                 "0xB809C8BC"
#define  KME_ME2_CALC0_KME_ME2_CALC0_BC_reg                                      0xB809C8BC
#define  KME_ME2_CALC0_KME_ME2_CALC0_BC_inst_addr                                "0x002D"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_BC_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_BC_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_BC_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_BC_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_BC_me2_sad_th_slope_dc_shift                (26)
#define  KME_ME2_CALC0_KME_ME2_CALC0_BC_me2_sec_mv0_gmv_diff_th_shift            (13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_BC_me2_sec_multimin1_mvdiff_th_shift        (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_BC_me2_sad_th_slope_dc_mask                 (0xFC000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_BC_me2_sec_mv0_gmv_diff_th_mask             (0x03FFE000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_BC_me2_sec_multimin1_mvdiff_th_mask         (0x00001FFF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_BC_me2_sad_th_slope_dc(data)                (0xFC000000&((data)<<26))
#define  KME_ME2_CALC0_KME_ME2_CALC0_BC_me2_sec_mv0_gmv_diff_th(data)            (0x03FFE000&((data)<<13))
#define  KME_ME2_CALC0_KME_ME2_CALC0_BC_me2_sec_multimin1_mvdiff_th(data)        (0x00001FFF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_BC_get_me2_sad_th_slope_dc(data)            ((0xFC000000&(data))>>26)
#define  KME_ME2_CALC0_KME_ME2_CALC0_BC_get_me2_sec_mv0_gmv_diff_th(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_BC_get_me2_sec_multimin1_mvdiff_th(data)    (0x00001FFF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_C0                                         0x1809C8C0
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_reg_addr                                 "0xB809C8C0"
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_reg                                      0xB809C8C0
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_inst_addr                                "0x002E"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_C0_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_C0_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_C0_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_C0_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_me2_sec_multimin2_apl_gain_shift         (23)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_me2_sec_multimin2_sad_gain_shift         (15)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_me2_sec_multimin2_en_shift               (14)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_me2_sec_multimin1_force_bv1_shift        (13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_me2_sec_mv1_gmv_diff_th_shift            (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_me2_sec_multimin2_apl_gain_mask          (0x7F800000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_me2_sec_multimin2_sad_gain_mask          (0x007F8000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_me2_sec_multimin2_en_mask                (0x00004000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_me2_sec_multimin1_force_bv1_mask         (0x00002000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_me2_sec_mv1_gmv_diff_th_mask             (0x00001FFF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_me2_sec_multimin2_apl_gain(data)         (0x7F800000&((data)<<23))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_me2_sec_multimin2_sad_gain(data)         (0x007F8000&((data)<<15))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_me2_sec_multimin2_en(data)               (0x00004000&((data)<<14))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_me2_sec_multimin1_force_bv1(data)        (0x00002000&((data)<<13))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_me2_sec_mv1_gmv_diff_th(data)            (0x00001FFF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_get_me2_sec_multimin2_apl_gain(data)     ((0x7F800000&(data))>>23)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_get_me2_sec_multimin2_sad_gain(data)     ((0x007F8000&(data))>>15)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_get_me2_sec_multimin2_en(data)           ((0x00004000&(data))>>14)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_get_me2_sec_multimin1_force_bv1(data)    ((0x00002000&(data))>>13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C0_get_me2_sec_mv1_gmv_diff_th(data)        (0x00001FFF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_C4                                         0x1809C8C4
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_reg_addr                                 "0xB809C8C4"
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_reg                                      0xB809C8C4
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_inst_addr                                "0x002F"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_C4_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_C4_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_C4_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_C4_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_force_bv1_shift        (29)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_nonzero_off_shift      (28)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_mv_small_off_shift     (27)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_sad_th_shift           (14)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_mvdiff_off_shift       (13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_mvdiff_th_shift        (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_force_bv1_mask         (0x20000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_nonzero_off_mask       (0x10000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_mv_small_off_mask      (0x08000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_sad_th_mask            (0x07FFC000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_mvdiff_off_mask        (0x00002000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_mvdiff_th_mask         (0x00001FFF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_force_bv1(data)        (0x20000000&((data)<<29))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_nonzero_off(data)      (0x10000000&((data)<<28))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_mv_small_off(data)     (0x08000000&((data)<<27))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_sad_th(data)           (0x07FFC000&((data)<<14))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_mvdiff_off(data)       (0x00002000&((data)<<13))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_me2_sec_multimin2_mvdiff_th(data)        (0x00001FFF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_get_me2_sec_multimin2_force_bv1(data)    ((0x20000000&(data))>>29)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_get_me2_sec_multimin2_nonzero_off(data)  ((0x10000000&(data))>>28)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_get_me2_sec_multimin2_mv_small_off(data) ((0x08000000&(data))>>27)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_get_me2_sec_multimin2_sad_th(data)       ((0x07FFC000&(data))>>14)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_get_me2_sec_multimin2_mvdiff_off(data)   ((0x00002000&(data))>>13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C4_get_me2_sec_multimin2_mvdiff_th(data)    (0x00001FFF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_C8                                         0x1809C8C8
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_reg_addr                                 "0xB809C8C8"
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_reg                                      0xB809C8C8
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_inst_addr                                "0x0030"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_C8_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_C8_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_C8_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_C8_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_me2_fst_multimin1_mvdiff_th_shift        (15)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_me2_fst_multimin1_sad_th_shift           (2)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_me2_fst_multimin1_en_shift               (1)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_me2_fst_multimin_sel_shift               (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_me2_fst_multimin1_mvdiff_th_mask         (0x0FFF8000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_me2_fst_multimin1_sad_th_mask            (0x00007FFC)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_me2_fst_multimin1_en_mask                (0x00000002)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_me2_fst_multimin_sel_mask                (0x00000001)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_me2_fst_multimin1_mvdiff_th(data)        (0x0FFF8000&((data)<<15))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_me2_fst_multimin1_sad_th(data)           (0x00007FFC&((data)<<2))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_me2_fst_multimin1_en(data)               (0x00000002&((data)<<1))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_me2_fst_multimin_sel(data)               (0x00000001&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_get_me2_fst_multimin1_mvdiff_th(data)    ((0x0FFF8000&(data))>>15)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_get_me2_fst_multimin1_sad_th(data)       ((0x00007FFC&(data))>>2)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_get_me2_fst_multimin1_en(data)           ((0x00000002&(data))>>1)
#define  KME_ME2_CALC0_KME_ME2_CALC0_C8_get_me2_fst_multimin_sel(data)           (0x00000001&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_CC                                         0x1809C8CC
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_reg_addr                                 "0xB809C8CC"
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_reg                                      0xB809C8CC
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_inst_addr                                "0x0031"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_CC_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_CC_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_CC_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_CC_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_me2_fst_multimin2_en_shift               (27)
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_me2_fst_multimin1_force_bv1_shift        (26)
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_me2_fst_mv1_gmv_diff_th_shift            (13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_me2_fst_mv0_gmv_diff_th_shift            (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_me2_fst_multimin2_en_mask                (0x08000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_me2_fst_multimin1_force_bv1_mask         (0x04000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_me2_fst_mv1_gmv_diff_th_mask             (0x03FFE000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_me2_fst_mv0_gmv_diff_th_mask             (0x00001FFF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_me2_fst_multimin2_en(data)               (0x08000000&((data)<<27))
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_me2_fst_multimin1_force_bv1(data)        (0x04000000&((data)<<26))
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_me2_fst_mv1_gmv_diff_th(data)            (0x03FFE000&((data)<<13))
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_me2_fst_mv0_gmv_diff_th(data)            (0x00001FFF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_get_me2_fst_multimin2_en(data)           ((0x08000000&(data))>>27)
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_get_me2_fst_multimin1_force_bv1(data)    ((0x04000000&(data))>>26)
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_get_me2_fst_mv1_gmv_diff_th(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_CC_get_me2_fst_mv0_gmv_diff_th(data)        (0x00001FFF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_D0                                         0x1809C8D0
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_reg_addr                                 "0xB809C8D0"
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_reg                                      0xB809C8D0
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_inst_addr                                "0x0032"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_D0_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_D0_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_D0_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_D0_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_me2_fst_multimin2_mvdiff_off_shift       (29)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_me2_fst_multimin2_mvdiff_th_shift        (16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_me2_fst_multimin2_apl_gain_shift         (8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_me2_fst_multimin2_sad_gain_shift         (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_me2_fst_multimin2_mvdiff_off_mask        (0x20000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_me2_fst_multimin2_mvdiff_th_mask         (0x1FFF0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_me2_fst_multimin2_apl_gain_mask          (0x0000FF00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_me2_fst_multimin2_sad_gain_mask          (0x000000FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_me2_fst_multimin2_mvdiff_off(data)       (0x20000000&((data)<<29))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_me2_fst_multimin2_mvdiff_th(data)        (0x1FFF0000&((data)<<16))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_me2_fst_multimin2_apl_gain(data)         (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_me2_fst_multimin2_sad_gain(data)         (0x000000FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_get_me2_fst_multimin2_mvdiff_off(data)   ((0x20000000&(data))>>29)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_get_me2_fst_multimin2_mvdiff_th(data)    ((0x1FFF0000&(data))>>16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_get_me2_fst_multimin2_apl_gain(data)     ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D0_get_me2_fst_multimin2_sad_gain(data)     (0x000000FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_D4                                         0x1809C8D4
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_reg_addr                                 "0xB809C8D4"
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_reg                                      0xB809C8D4
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_inst_addr                                "0x0033"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_D4_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_D4_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_D4_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_D4_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_kme_me2_sec_small_object_sad_th_shift    (17)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_kme_me2_sec_small_object_en_shift        (16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_me2_fst_multimin2_force_bv1_shift        (15)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_me2_fst_multimin2_nonzero_off_shift      (14)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_me2_fst_multimin2_mv_small_off_shift     (13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_me2_fst_multimin2_sad_th_shift           (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_kme_me2_sec_small_object_sad_th_mask     (0x3FFE0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_kme_me2_sec_small_object_en_mask         (0x00010000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_me2_fst_multimin2_force_bv1_mask         (0x00008000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_me2_fst_multimin2_nonzero_off_mask       (0x00004000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_me2_fst_multimin2_mv_small_off_mask      (0x00002000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_me2_fst_multimin2_sad_th_mask            (0x00001FFF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_kme_me2_sec_small_object_sad_th(data)    (0x3FFE0000&((data)<<17))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_kme_me2_sec_small_object_en(data)        (0x00010000&((data)<<16))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_me2_fst_multimin2_force_bv1(data)        (0x00008000&((data)<<15))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_me2_fst_multimin2_nonzero_off(data)      (0x00004000&((data)<<14))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_me2_fst_multimin2_mv_small_off(data)     (0x00002000&((data)<<13))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_me2_fst_multimin2_sad_th(data)           (0x00001FFF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_get_kme_me2_sec_small_object_sad_th(data) ((0x3FFE0000&(data))>>17)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_get_kme_me2_sec_small_object_en(data)    ((0x00010000&(data))>>16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_get_me2_fst_multimin2_force_bv1(data)    ((0x00008000&(data))>>15)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_get_me2_fst_multimin2_nonzero_off(data)  ((0x00004000&(data))>>14)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_get_me2_fst_multimin2_mv_small_off(data) ((0x00002000&(data))>>13)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D4_get_me2_fst_multimin2_sad_th(data)       (0x00001FFF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_D8                                         0x1809C8D8
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_reg_addr                                 "0xB809C8D8"
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_reg                                      0xB809C8D8
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_inst_addr                                "0x0034"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_D8_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_D8_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_D8_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_D8_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_kme_me2_fst_small_object_sm_mv_th_shift  (22)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_kme_me2_sec_small_object_ph_mvdiff_gain_shift (16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_kme_me2_sec_small_object_ip_pi_mvdiff_gain_shift (10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_kme_me2_sec_small_object_sm_mv_th_shift  (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_kme_me2_fst_small_object_sm_mv_th_mask   (0xFFC00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_kme_me2_sec_small_object_ph_mvdiff_gain_mask (0x003F0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_kme_me2_sec_small_object_ip_pi_mvdiff_gain_mask (0x0000FC00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_kme_me2_sec_small_object_sm_mv_th_mask   (0x000003FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_kme_me2_fst_small_object_sm_mv_th(data)  (0xFFC00000&((data)<<22))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_kme_me2_sec_small_object_ph_mvdiff_gain(data) (0x003F0000&((data)<<16))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_kme_me2_sec_small_object_ip_pi_mvdiff_gain(data) (0x0000FC00&((data)<<10))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_kme_me2_sec_small_object_sm_mv_th(data)  (0x000003FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_get_kme_me2_fst_small_object_sm_mv_th(data) ((0xFFC00000&(data))>>22)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_get_kme_me2_sec_small_object_ph_mvdiff_gain(data) ((0x003F0000&(data))>>16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_get_kme_me2_sec_small_object_ip_pi_mvdiff_gain(data) ((0x0000FC00&(data))>>10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_D8_get_kme_me2_sec_small_object_sm_mv_th(data) (0x000003FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_DC                                         0x1809C8DC
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_reg_addr                                 "0xB809C8DC"
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_reg                                      0xB809C8DC
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_inst_addr                                "0x0035"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_DC_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_DC_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_DC_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_DC_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_me2_dbg_ero_apl_show_idx_shift           (26)
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_kme_me2_fst_small_object_ph_mvdiff_gain_shift (20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_kme_me2_fst_small_object_ip_pi_mvdiff_gain_shift (14)
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_kme_me2_fst_small_object_sad_th_shift    (1)
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_kme_me2_fst_small_object_en_shift        (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_me2_dbg_ero_apl_show_idx_mask            (0xFC000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_kme_me2_fst_small_object_ph_mvdiff_gain_mask (0x03F00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_kme_me2_fst_small_object_ip_pi_mvdiff_gain_mask (0x000FC000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_kme_me2_fst_small_object_sad_th_mask     (0x00003FFE)
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_kme_me2_fst_small_object_en_mask         (0x00000001)
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_me2_dbg_ero_apl_show_idx(data)           (0xFC000000&((data)<<26))
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_kme_me2_fst_small_object_ph_mvdiff_gain(data) (0x03F00000&((data)<<20))
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_kme_me2_fst_small_object_ip_pi_mvdiff_gain(data) (0x000FC000&((data)<<14))
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_kme_me2_fst_small_object_sad_th(data)    (0x00003FFE&((data)<<1))
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_kme_me2_fst_small_object_en(data)        (0x00000001&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_get_me2_dbg_ero_apl_show_idx(data)       ((0xFC000000&(data))>>26)
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_get_kme_me2_fst_small_object_ph_mvdiff_gain(data) ((0x03F00000&(data))>>20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_get_kme_me2_fst_small_object_ip_pi_mvdiff_gain(data) ((0x000FC000&(data))>>14)
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_get_kme_me2_fst_small_object_sad_th(data) ((0x00003FFE&(data))>>1)
#define  KME_ME2_CALC0_KME_ME2_CALC0_DC_get_kme_me2_fst_small_object_en(data)    (0x00000001&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_E0                                         0x1809C8E0
#define  KME_ME2_CALC0_KME_ME2_CALC0_E0_reg_addr                                 "0xB809C8E0"
#define  KME_ME2_CALC0_KME_ME2_CALC0_E0_reg                                      0xB809C8E0
#define  KME_ME2_CALC0_KME_ME2_CALC0_E0_inst_addr                                "0x0036"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_E0_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_E0_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_E0_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_E0_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E0_me2_dbg_force_bv1_shift                  (10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E0_me2_force_mv_y_shift                     (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E0_me2_dbg_force_bv1_mask                   (0x7FFFFC00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E0_me2_force_mv_y_mask                      (0x000003FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E0_me2_dbg_force_bv1(data)                  (0x7FFFFC00&((data)<<10))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E0_me2_force_mv_y(data)                     (0x000003FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E0_get_me2_dbg_force_bv1(data)              ((0x7FFFFC00&(data))>>10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E0_get_me2_force_mv_y(data)                 (0x000003FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_E4                                         0x1809C8E4
#define  KME_ME2_CALC0_KME_ME2_CALC0_E4_reg_addr                                 "0xB809C8E4"
#define  KME_ME2_CALC0_KME_ME2_CALC0_E4_reg                                      0xB809C8E4
#define  KME_ME2_CALC0_KME_ME2_CALC0_E4_inst_addr                                "0x0037"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_E4_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_E4_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_E4_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_E4_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E4_me2_dbg_force_bv2_shift                  (11)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E4_me2_force_mv_x_shift                     (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E4_me2_dbg_force_bv2_mask                   (0xFFFFF800)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E4_me2_force_mv_x_mask                      (0x000007FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E4_me2_dbg_force_bv2(data)                  (0xFFFFF800&((data)<<11))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E4_me2_force_mv_x(data)                     (0x000007FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E4_get_me2_dbg_force_bv2(data)              ((0xFFFFF800&(data))>>11)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E4_get_me2_force_mv_x(data)                 (0x000007FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_E8                                         0x1809C8E8
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_reg_addr                                 "0xB809C8E8"
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_reg                                      0xB809C8E8
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_inst_addr                                "0x0038"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_E8_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_E8_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_E8_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_E8_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_sm_obj_bv1_dbg_sel_shift             (26)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_sm_obj_bv0_dbg_sel_shift             (24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_mm_bv2_dbg_sel_shift                 (22)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_mm_bv1_dbg_sel_shift                 (20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_limit_bv2_dbg_sel_shift              (18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_limit_bv1_dbg_sel_shift              (16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_pk_bv2_dbg_sel_shift                 (14)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_pk_bv1_dbg_sel_shift                 (12)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_ac_sec2_dbg_sel_shift            (10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_ac_sec1_dbg_sel_shift            (8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_dc_sec2_dbg_sel_shift            (6)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_dc_sec1_dbg_sel_shift            (4)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_dc_fst2_dbg_sel_shift            (2)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_dc_fst1_dbg_sel_shift            (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_sm_obj_bv1_dbg_sel_mask              (0x0C000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_sm_obj_bv0_dbg_sel_mask              (0x03000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_mm_bv2_dbg_sel_mask                  (0x00C00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_mm_bv1_dbg_sel_mask                  (0x00300000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_limit_bv2_dbg_sel_mask               (0x000C0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_limit_bv1_dbg_sel_mask               (0x00030000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_pk_bv2_dbg_sel_mask                  (0x0000C000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_pk_bv1_dbg_sel_mask                  (0x00003000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_ac_sec2_dbg_sel_mask             (0x00000C00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_ac_sec1_dbg_sel_mask             (0x00000300)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_dc_sec2_dbg_sel_mask             (0x000000C0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_dc_sec1_dbg_sel_mask             (0x00000030)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_dc_fst2_dbg_sel_mask             (0x0000000C)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_dc_fst1_dbg_sel_mask             (0x00000003)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_sm_obj_bv1_dbg_sel(data)             (0x0C000000&((data)<<26))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_sm_obj_bv0_dbg_sel(data)             (0x03000000&((data)<<24))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_mm_bv2_dbg_sel(data)                 (0x00C00000&((data)<<22))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_mm_bv1_dbg_sel(data)                 (0x00300000&((data)<<20))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_limit_bv2_dbg_sel(data)              (0x000C0000&((data)<<18))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_limit_bv1_dbg_sel(data)              (0x00030000&((data)<<16))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_pk_bv2_dbg_sel(data)                 (0x0000C000&((data)<<14))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_pk_bv1_dbg_sel(data)                 (0x00003000&((data)<<12))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_ac_sec2_dbg_sel(data)            (0x00000C00&((data)<<10))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_ac_sec1_dbg_sel(data)            (0x00000300&((data)<<8))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_dc_sec2_dbg_sel(data)            (0x000000C0&((data)<<6))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_dc_sec1_dbg_sel(data)            (0x00000030&((data)<<4))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_dc_fst2_dbg_sel(data)            (0x0000000C&((data)<<2))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_me2_vec_dc_fst1_dbg_sel(data)            (0x00000003&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_get_me2_sm_obj_bv1_dbg_sel(data)         ((0x0C000000&(data))>>26)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_get_me2_sm_obj_bv0_dbg_sel(data)         ((0x03000000&(data))>>24)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_get_me2_mm_bv2_dbg_sel(data)             ((0x00C00000&(data))>>22)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_get_me2_mm_bv1_dbg_sel(data)             ((0x00300000&(data))>>20)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_get_me2_limit_bv2_dbg_sel(data)          ((0x000C0000&(data))>>18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_get_me2_limit_bv1_dbg_sel(data)          ((0x00030000&(data))>>16)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_get_me2_pk_bv2_dbg_sel(data)             ((0x0000C000&(data))>>14)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_get_me2_pk_bv1_dbg_sel(data)             ((0x00003000&(data))>>12)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_get_me2_vec_ac_sec2_dbg_sel(data)        ((0x00000C00&(data))>>10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_get_me2_vec_ac_sec1_dbg_sel(data)        ((0x00000300&(data))>>8)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_get_me2_vec_dc_sec2_dbg_sel(data)        ((0x000000C0&(data))>>6)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_get_me2_vec_dc_sec1_dbg_sel(data)        ((0x00000030&(data))>>4)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_get_me2_vec_dc_fst2_dbg_sel(data)        ((0x0000000C&(data))>>2)
#define  KME_ME2_CALC0_KME_ME2_CALC0_E8_get_me2_vec_dc_fst1_dbg_sel(data)        (0x00000003&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_EC                                         0x1809C8EC
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_reg_addr                                 "0xB809C8EC"
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_reg                                      0xB809C8EC
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_inst_addr                                "0x0039"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_EC_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_EC_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_EC_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_EC_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_me2_patt_mv_pat_h0_shift                 (23)
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_me2_patt_mv_pat_mv_x_shift               (12)
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_me2_patt_mv_pat_mv_y_shift               (2)
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_me2_patt_mv_pat_mode_shift               (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_me2_patt_mv_pat_h0_mask                  (0xFF800000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_me2_patt_mv_pat_mv_x_mask                (0x007FF000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_me2_patt_mv_pat_mv_y_mask                (0x00000FFC)
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_me2_patt_mv_pat_mode_mask                (0x00000003)
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_me2_patt_mv_pat_h0(data)                 (0xFF800000&((data)<<23))
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_me2_patt_mv_pat_mv_x(data)               (0x007FF000&((data)<<12))
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_me2_patt_mv_pat_mv_y(data)               (0x00000FFC&((data)<<2))
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_me2_patt_mv_pat_mode(data)               (0x00000003&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_get_me2_patt_mv_pat_h0(data)             ((0xFF800000&(data))>>23)
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_get_me2_patt_mv_pat_mv_x(data)           ((0x007FF000&(data))>>12)
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_get_me2_patt_mv_pat_mv_y(data)           ((0x00000FFC&(data))>>2)
#define  KME_ME2_CALC0_KME_ME2_CALC0_EC_get_me2_patt_mv_pat_mode(data)           (0x00000003&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_F0                                         0x1809C8F0
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_reg_addr                                 "0xB809C8F0"
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_reg                                      0xB809C8F0
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_inst_addr                                "0x003A"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_F0_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_F0_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_F0_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_F0_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_me2_patt_row_size_shift                  (31)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_me2_patt_blk_size_shift                  (30)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_me2_patt_mv_pat_h1_shift                 (21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_me2_patt_mv_pat_mv_x1_shift              (10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_me2_patt_mv_pat_mv_y1_shift              (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_me2_patt_row_size_mask                   (0x80000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_me2_patt_blk_size_mask                   (0x40000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_me2_patt_mv_pat_h1_mask                  (0x3FE00000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_me2_patt_mv_pat_mv_x1_mask               (0x001FFC00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_me2_patt_mv_pat_mv_y1_mask               (0x000003FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_me2_patt_row_size(data)                  (0x80000000&((data)<<31))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_me2_patt_blk_size(data)                  (0x40000000&((data)<<30))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_me2_patt_mv_pat_h1(data)                 (0x3FE00000&((data)<<21))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_me2_patt_mv_pat_mv_x1(data)              (0x001FFC00&((data)<<10))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_me2_patt_mv_pat_mv_y1(data)              (0x000003FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_get_me2_patt_row_size(data)              ((0x80000000&(data))>>31)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_get_me2_patt_blk_size(data)              ((0x40000000&(data))>>30)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_get_me2_patt_mv_pat_h1(data)             ((0x3FE00000&(data))>>21)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_get_me2_patt_mv_pat_mv_x1(data)          ((0x001FFC00&(data))>>10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F0_get_me2_patt_mv_pat_mv_y1(data)          (0x000003FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_F4                                         0x1809C8F4
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_reg_addr                                 "0xB809C8F4"
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_reg                                      0xB809C8F4
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_inst_addr                                "0x003B"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_F4_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_F4_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_F4_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_F4_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_me2_calc_show_scan_shift                 (27)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_me2_patt_blk_num_shift                   (18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_me2_patt_mv_pat_v1_shift                 (9)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_me2_patt_mv_pat_v0_shift                 (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_me2_calc_show_scan_mask                  (0x08000000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_me2_patt_blk_num_mask                    (0x07FC0000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_me2_patt_mv_pat_v1_mask                  (0x0003FE00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_me2_patt_mv_pat_v0_mask                  (0x000001FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_me2_calc_show_scan(data)                 (0x08000000&((data)<<27))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_me2_patt_blk_num(data)                   (0x07FC0000&((data)<<18))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_me2_patt_mv_pat_v1(data)                 (0x0003FE00&((data)<<9))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_me2_patt_mv_pat_v0(data)                 (0x000001FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_get_me2_calc_show_scan(data)             ((0x08000000&(data))>>27)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_get_me2_patt_blk_num(data)               ((0x07FC0000&(data))>>18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_get_me2_patt_mv_pat_v1(data)             ((0x0003FE00&(data))>>9)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F4_get_me2_patt_mv_pat_v0(data)             (0x000001FF&(data))

#define  KME_ME2_CALC0_KME_ME2_CALC0_F8                                         0x1809C8F8
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_reg_addr                                 "0xB809C8F8"
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_reg                                      0xB809C8F8
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_inst_addr                                "0x003C"
#define  set_KME_ME2_CALC0_KME_ME2_CALC0_F8_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_F8_reg)=data)
#define  get_KME_ME2_CALC0_KME_ME2_CALC0_F8_reg                                  (*((volatile unsigned int*)KME_ME2_CALC0_KME_ME2_CALC0_F8_reg))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_me2_sad_th_base_dc_shift                 (19)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_me2_patt_mv_patt_pr_shift                (18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_me2_patt_mv_pat_self_cycle_shift         (10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_me2_patt_mv_pat_self_en_shift            (9)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_me2_patt_row_num_shift                   (0)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_me2_sad_th_base_dc_mask                  (0xFFF80000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_me2_patt_mv_patt_pr_mask                 (0x00040000)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_me2_patt_mv_pat_self_cycle_mask          (0x0003FC00)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_me2_patt_mv_pat_self_en_mask             (0x00000200)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_me2_patt_row_num_mask                    (0x000001FF)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_me2_sad_th_base_dc(data)                 (0xFFF80000&((data)<<19))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_me2_patt_mv_patt_pr(data)                (0x00040000&((data)<<18))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_me2_patt_mv_pat_self_cycle(data)         (0x0003FC00&((data)<<10))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_me2_patt_mv_pat_self_en(data)            (0x00000200&((data)<<9))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_me2_patt_row_num(data)                   (0x000001FF&(data))
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_get_me2_sad_th_base_dc(data)             ((0xFFF80000&(data))>>19)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_get_me2_patt_mv_patt_pr(data)            ((0x00040000&(data))>>18)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_get_me2_patt_mv_pat_self_cycle(data)     ((0x0003FC00&(data))>>10)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_get_me2_patt_mv_pat_self_en(data)        ((0x00000200&(data))>>9)
#define  KME_ME2_CALC0_KME_ME2_CALC0_F8_get_me2_patt_row_num(data)               (0x000001FF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_ME2_CALC0 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me2_calc_mon_mode:6;
        RBus_UInt32  me2_ph_norm_mode:2;
        RBus_UInt32  me2_bv_sel:1;
        RBus_UInt32  me2_dtl_hf_limt:8;
        RBus_UInt32  me2_dtl_hf_cor:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  me2_dtl_hf_shft:2;
        RBus_UInt32  me2_dtl_hf_mode:1;
    };
}kme_me2_calc0_kme_me2_calc0_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me2_mvd_alp_x1:8;
        RBus_UInt32  me2_dtl_dr_limt:8;
        RBus_UInt32  me2_dtl_dr_cor:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  me2_dtl_dr_shft:2;
        RBus_UInt32  me2_dtl_dr_mode:1;
    };
}kme_me2_calc0_kme_me2_calc0_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_alp_x5:8;
        RBus_UInt32  me2_mvd_alp_x4:8;
        RBus_UInt32  me2_mvd_alp_x3:8;
        RBus_UInt32  me2_mvd_alp_x2:8;
    };
}kme_me2_calc0_kme_me2_calc0_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me2_mvd_alp_y5:6;
        RBus_UInt32  me2_mvd_alp_y4:6;
        RBus_UInt32  me2_mvd_alp_y3:6;
        RBus_UInt32  me2_mvd_alp_y2:6;
        RBus_UInt32  me2_mvd_alp_y1:6;
    };
}kme_me2_calc0_kme_me2_calc0_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  me2_mvd_alp_slope3:9;
        RBus_UInt32  me2_mvd_alp_slope2:9;
        RBus_UInt32  me2_mvd_alp_slope1:9;
    };
}kme_me2_calc0_kme_me2_calc0_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me2_mvd_cuv_x2:10;
        RBus_UInt32  me2_mvd_cuv_x1:10;
        RBus_UInt32  me2_mvd_alp_slope4:9;
    };
}kme_me2_calc0_kme_me2_calc0_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me2_mvd_cuv_y2:10;
        RBus_UInt32  me2_mvd_cuv_y1:10;
        RBus_UInt32  me2_mvd_cuv_x3:10;
    };
}kme_me2_calc0_kme_me2_calc0_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  me2_mvd_cuv_slope1:13;
        RBus_UInt32  me2_mvd_cuv_y3:10;
    };
}kme_me2_calc0_kme_me2_calc0_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ph_cdd_dbg_sel:5;
        RBus_UInt32  me2_rmv_vy_step:10;
        RBus_UInt32  me2_ph_mvd_dgain_mode:4;
        RBus_UInt32  me2_mvd_cuv_slope2:13;
    };
}kme_me2_calc0_kme_me2_calc0_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_dgain_x4:8;
        RBus_UInt32  me2_mvd_dgain_x3:8;
        RBus_UInt32  me2_mvd_dgain_x2:8;
        RBus_UInt32  me2_mvd_dgain_x1:8;
    };
}kme_me2_calc0_kme_me2_calc0_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me2_mvd_dgain_y2:10;
        RBus_UInt32  me2_mvd_dgain_y1:10;
        RBus_UInt32  me2_mvd_dgain_x5:8;
    };
}kme_me2_calc0_kme_me2_calc0_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me2_mvd_dgain_y5:10;
        RBus_UInt32  me2_mvd_dgain_y4:10;
        RBus_UInt32  me2_mvd_dgain_y3:10;
    };
}kme_me2_calc0_kme_me2_calc0_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_dgain_slope2:16;
        RBus_UInt32  me2_mvd_dgain_slope1:16;
    };
}kme_me2_calc0_kme_me2_calc0_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_dgain_slope4:16;
        RBus_UInt32  me2_mvd_dgain_slope3:16;
    };
}kme_me2_calc0_kme_me2_calc0_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me2_mvd_pgain_x3:10;
        RBus_UInt32  me2_mvd_pgain_x2:10;
        RBus_UInt32  me2_mvd_pgain_x1:10;
    };
}kme_me2_calc0_kme_me2_calc0_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  me2_mvd_pgain_slope1:9;
        RBus_UInt32  me2_mvd_pgain_y3:6;
        RBus_UInt32  me2_mvd_pgain_y2:6;
        RBus_UInt32  me2_mvd_pgain_y1:6;
    };
}kme_me2_calc0_kme_me2_calc0_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_rmv_vx_step:11;
        RBus_UInt32  me2_gmvd_cnt_x1:12;
        RBus_UInt32  me2_mvd_pgain_slope2:9;
    };
}kme_me2_calc0_kme_me2_calc0_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_ph_mvd_pgain_mode:4;
        RBus_UInt32  me2_ph_psad_alp_mode:4;
        RBus_UInt32  me2_gmvd_cnt_x3:12;
        RBus_UInt32  me2_gmvd_cnt_x2:12;
    };
}kme_me2_calc0_kme_me2_calc0_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me2_gmvd_cnt_y3:8;
        RBus_UInt32  me2_gmvd_cnt_y2:8;
        RBus_UInt32  me2_gmvd_cnt_y1:8;
    };
}kme_me2_calc0_kme_me2_calc0_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  me2_gmvd_cnt_slope2:11;
        RBus_UInt32  me2_gmvd_cnt_slope1:11;
    };
}kme_me2_calc0_kme_me2_calc0_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me2_psad_alp_y1:6;
        RBus_UInt32  me2_psad_alp_x3:8;
        RBus_UInt32  me2_psad_alp_x2:8;
        RBus_UInt32  me2_psad_alp_x1:8;
    };
}kme_me2_calc0_kme_me2_calc0_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_rgn_shift:2;
        RBus_UInt32  me2_psad_alp_slope2:9;
        RBus_UInt32  me2_psad_alp_slope1:9;
        RBus_UInt32  me2_psad_alp_y3:6;
        RBus_UInt32  me2_psad_alp_y2:6;
    };
}kme_me2_calc0_kme_me2_calc0_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  me2_acdc_pk_dtl_off:1;
        RBus_UInt32  me2_acdc_pk_dtl_th:8;
        RBus_UInt32  me2_acdc_pk_apl_off:1;
        RBus_UInt32  me2_acdc_pk_apl_th:8;
        RBus_UInt32  me2_dbg_offset_option:3;
        RBus_UInt32  me2_dbg_cdd_option:4;
    };
}kme_me2_calc0_kme_me2_calc0_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me2_calc_boundary_color:21;
        RBus_UInt32  me2_calc_mv_boundary_mux:1;
        RBus_UInt32  me2_calc_mv_option:3;
        RBus_UInt32  me2_calc_mv_full_mux:2;
        RBus_UInt32  me2_mv_out_patt_en:1;
    };
}kme_me2_calc0_kme_me2_calc0_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me2_gmvd_ucf_x3:10;
        RBus_UInt32  me2_gmvd_ucf_x2:10;
        RBus_UInt32  me2_gmvd_ucf_x1:10;
    };
}kme_me2_calc0_kme_me2_calc0_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me2_gmvd_ucf_y3:8;
        RBus_UInt32  me2_gmvd_ucf_y2:8;
        RBus_UInt32  me2_gmvd_ucf_y1:8;
    };
}kme_me2_calc0_kme_me2_calc0_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  me2_gmvd_ucf_slope2:11;
        RBus_UInt32  me2_gmvd_ucf_slope1:11;
    };
}kme_me2_calc0_kme_me2_calc0_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mv_invalid_sad_sel:1;
        RBus_UInt32  me2_rmv_vact:9;
        RBus_UInt32  me2_rmv_hact:9;
        RBus_UInt32  me2_ph_mvd_cost_limt:13;
    };
}kme_me2_calc0_kme_me2_calc0_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me2_ph_gmvd_cost_limt:13;
        RBus_UInt32  me2_ph_mvd_alp_mode:4;
        RBus_UInt32  me2_ph_dc_pix_ad_data:8;
        RBus_UInt32  ph_bv2_ofst_sel:3;
    };
}kme_me2_calc0_kme_me2_calc0_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me2_ph_adpt_cor_gain2:8;
        RBus_UInt32  me2_ph_adpt_cor_gain1:8;
        RBus_UInt32  me2_ph_adpt_cor_gain0:8;
        RBus_UInt32  me2_ph_adpt_cor_mode:4;
    };
}kme_me2_calc0_kme_me2_calc0_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  me2_ph_dc_pix_cor_thd:8;
        RBus_UInt32  me2_ph_adpt_cor_limt:10;
        RBus_UInt32  me2_ph_adpt_cor_gain3:8;
    };
}kme_me2_calc0_kme_me2_calc0_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me2_pfvgain_curve_x2:10;
        RBus_UInt32  me2_pfvgain_curve_x1:10;
        RBus_UInt32  me2_ph_dc_pix_sad_limt:8;
    };
}kme_me2_calc0_kme_me2_calc0_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_gmv_ucf_sel:1;
        RBus_UInt32  me2_gmv_sel_kme_me2_calc0:1;
        RBus_UInt32  me2_pfvgain_curve_y2:10;
        RBus_UInt32  me2_pfvgain_curve_y1:10;
        RBus_UInt32  me2_pfvgain_curve_x3:10;
    };
}kme_me2_calc0_kme_me2_calc0_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_pfvgain_slope2:11;
        RBus_UInt32  me2_pfvgain_slope1:11;
        RBus_UInt32  me2_pfvgain_curve_y3:10;
    };
}kme_me2_calc0_kme_me2_calc0_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  me2_wsad2_min_invalid_sel_ac:2;
        RBus_UInt32  me2_wsad2_min_invalid_sel:2;
        RBus_UInt32  me2_wsad1_min_invalid_sel:2;
        RBus_UInt32  me2_ofst_pfvdiff_gain:8;
        RBus_UInt32  phme_pfvdiff_limit:13;
    };
}kme_me2_calc0_kme_me2_calc0_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me2_ofst_cost_pnt1:8;
        RBus_UInt32  me2_ofst_cost_pnt0:8;
        RBus_UInt32  me2_ofst_pfv_diff_cost_limit:13;
    };
}kme_me2_calc0_kme_me2_calc0_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me2_ofst_cost_pnt4:8;
        RBus_UInt32  me2_ofst_cost_pnt3:8;
        RBus_UInt32  me2_ofst_cost_pnt2:8;
    };
}kme_me2_calc0_kme_me2_calc0_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_ac_invalid_sel:1;
        RBus_UInt32  me2_ph_ac_pix_ad_data:8;
        RBus_UInt32  me2_dtl_sel:3;
        RBus_UInt32  me2_apl_sel:2;
        RBus_UInt32  me2_ph_ac_sel:1;
        RBus_UInt32  me2_ph_dc_norm_mode:2;
        RBus_UInt32  me2_ph_ac_norm_mode:2;
        RBus_UInt32  me2_ph_ac_flt_shft:3;
        RBus_UInt32  me2_ph_ac_flt_mode:2;
        RBus_UInt32  me2_ph_ac_flt_sel:1;
        RBus_UInt32  me2_ph_bld_src_sel:1;
        RBus_UInt32  me2_ph_bld_alpha:6;
    };
}kme_me2_calc0_kme_me2_calc0_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me2_bv1_pk_src_ac:1;
        RBus_UInt32  me2_bv1_pk_src_dc:1;
        RBus_UInt32  me2_vec_eval_mvd_th:10;
        RBus_UInt32  me2_ph_ac_pix_sad_limt:8;
        RBus_UInt32  me2_ph_ac_pix_cor_thd:8;
    };
}kme_me2_calc0_kme_me2_calc0_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me2_acdc_pk_sad_diff_off:1;
        RBus_UInt32  me2_acdc_pk_sad_diff_th:13;
        RBus_UInt32  me2_acdc_pk_en:1;
        RBus_UInt32  me2_dc_invalid_sel:1;
        RBus_UInt32  me2_pfvdiff_gain:8;
    };
}kme_me2_calc0_kme_me2_calc0_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  me2_acdc_pk_small_mv_off:1;
        RBus_UInt32  me2_acdc_pk_mvdiff_s_off:1;
        RBus_UInt32  me2_acdc_pk_mvdiff_s_th:10;
        RBus_UInt32  me2_acdc_pk_mvdiff_off:1;
        RBus_UInt32  me2_acdc_pk_mvdiff_th:10;
    };
}kme_me2_calc0_kme_me2_calc0_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  me2_acdc_pk_bv1_follow_en:1;
        RBus_UInt32  me2_acdc_pk_bv1_ref:1;
        RBus_UInt32  me2_acdc_mvdiff_s_range_off:1;
        RBus_UInt32  me2_acdc_mvdiff_s_range:10;
        RBus_UInt32  me2_acdc_bv_ac_sad_off:1;
        RBus_UInt32  me2_acdc_bv_ac_sad_th:13;
    };
}kme_me2_calc0_kme_me2_calc0_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  me2_loop_acbv_limit_vy:9;
        RBus_UInt32  me2_loop_acbv_limit_vx:10;
        RBus_UInt32  me2_loop_acbv_limit_gmv_gain:5;
        RBus_UInt32  me2_loop_acbv_limit_sel:2;
        RBus_UInt32  me2_loop_acbv_limit_en:1;
    };
}kme_me2_calc0_kme_me2_calc0_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_loop_acbv_limit_mv_y2:5;
        RBus_UInt32  me2_loop_acbv_limit_mv_y1:5;
        RBus_UInt32  me2_loop_acbv_limit_mv_x2:11;
        RBus_UInt32  me2_loop_acbv_limit_mv_x1:11;
    };
}kme_me2_calc0_kme_me2_calc0_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me2_sec_multimin1_sad_th:13;
        RBus_UInt32  me2_sec_multimin1_en:1;
        RBus_UInt32  me2_sec_multimin_sel:1;
        RBus_UInt32  me2_loop_acbv_limit_mv_s:9;
    };
}kme_me2_calc0_kme_me2_calc0_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_sad_th_slope_dc:6;
        RBus_UInt32  me2_sec_mv0_gmv_diff_th:13;
        RBus_UInt32  me2_sec_multimin1_mvdiff_th:13;
    };
}kme_me2_calc0_kme_me2_calc0_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  me2_sec_multimin2_apl_gain:8;
        RBus_UInt32  me2_sec_multimin2_sad_gain:8;
        RBus_UInt32  me2_sec_multimin2_en:1;
        RBus_UInt32  me2_sec_multimin1_force_bv1:1;
        RBus_UInt32  me2_sec_mv1_gmv_diff_th:13;
    };
}kme_me2_calc0_kme_me2_calc0_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me2_sec_multimin2_force_bv1:1;
        RBus_UInt32  me2_sec_multimin2_nonzero_off:1;
        RBus_UInt32  me2_sec_multimin2_mv_small_off:1;
        RBus_UInt32  me2_sec_multimin2_sad_th:13;
        RBus_UInt32  me2_sec_multimin2_mvdiff_off:1;
        RBus_UInt32  me2_sec_multimin2_mvdiff_th:13;
    };
}kme_me2_calc0_kme_me2_calc0_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me2_fst_multimin1_mvdiff_th:13;
        RBus_UInt32  me2_fst_multimin1_sad_th:13;
        RBus_UInt32  me2_fst_multimin1_en:1;
        RBus_UInt32  me2_fst_multimin_sel:1;
    };
}kme_me2_calc0_kme_me2_calc0_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me2_fst_multimin2_en:1;
        RBus_UInt32  me2_fst_multimin1_force_bv1:1;
        RBus_UInt32  me2_fst_mv1_gmv_diff_th:13;
        RBus_UInt32  me2_fst_mv0_gmv_diff_th:13;
    };
}kme_me2_calc0_kme_me2_calc0_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me2_fst_multimin2_mvdiff_off:1;
        RBus_UInt32  me2_fst_multimin2_mvdiff_th:13;
        RBus_UInt32  me2_fst_multimin2_apl_gain:8;
        RBus_UInt32  me2_fst_multimin2_sad_gain:8;
    };
}kme_me2_calc0_kme_me2_calc0_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_me2_sec_small_object_sad_th:13;
        RBus_UInt32  kme_me2_sec_small_object_en:1;
        RBus_UInt32  me2_fst_multimin2_force_bv1:1;
        RBus_UInt32  me2_fst_multimin2_nonzero_off:1;
        RBus_UInt32  me2_fst_multimin2_mv_small_off:1;
        RBus_UInt32  me2_fst_multimin2_sad_th:13;
    };
}kme_me2_calc0_kme_me2_calc0_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_fst_small_object_sm_mv_th:10;
        RBus_UInt32  kme_me2_sec_small_object_ph_mvdiff_gain:6;
        RBus_UInt32  kme_me2_sec_small_object_ip_pi_mvdiff_gain:6;
        RBus_UInt32  kme_me2_sec_small_object_sm_mv_th:10;
    };
}kme_me2_calc0_kme_me2_calc0_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_dbg_ero_apl_show_idx:6;
        RBus_UInt32  kme_me2_fst_small_object_ph_mvdiff_gain:6;
        RBus_UInt32  kme_me2_fst_small_object_ip_pi_mvdiff_gain:6;
        RBus_UInt32  kme_me2_fst_small_object_sad_th:13;
        RBus_UInt32  kme_me2_fst_small_object_en:1;
    };
}kme_me2_calc0_kme_me2_calc0_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  me2_dbg_force_bv1:21;
        RBus_UInt32  me2_force_mv_y:10;
    };
}kme_me2_calc0_kme_me2_calc0_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_dbg_force_bv2:21;
        RBus_UInt32  me2_force_mv_x:11;
    };
}kme_me2_calc0_kme_me2_calc0_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me2_sm_obj_bv1_dbg_sel:2;
        RBus_UInt32  me2_sm_obj_bv0_dbg_sel:2;
        RBus_UInt32  me2_mm_bv2_dbg_sel:2;
        RBus_UInt32  me2_mm_bv1_dbg_sel:2;
        RBus_UInt32  me2_limit_bv2_dbg_sel:2;
        RBus_UInt32  me2_limit_bv1_dbg_sel:2;
        RBus_UInt32  me2_pk_bv2_dbg_sel:2;
        RBus_UInt32  me2_pk_bv1_dbg_sel:2;
        RBus_UInt32  me2_vec_ac_sec2_dbg_sel:2;
        RBus_UInt32  me2_vec_ac_sec1_dbg_sel:2;
        RBus_UInt32  me2_vec_dc_sec2_dbg_sel:2;
        RBus_UInt32  me2_vec_dc_sec1_dbg_sel:2;
        RBus_UInt32  me2_vec_dc_fst2_dbg_sel:2;
        RBus_UInt32  me2_vec_dc_fst1_dbg_sel:2;
    };
}kme_me2_calc0_kme_me2_calc0_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_patt_mv_pat_h0:9;
        RBus_UInt32  me2_patt_mv_pat_mv_x:11;
        RBus_UInt32  me2_patt_mv_pat_mv_y:10;
        RBus_UInt32  me2_patt_mv_pat_mode:2;
    };
}kme_me2_calc0_kme_me2_calc0_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_patt_row_size:1;
        RBus_UInt32  me2_patt_blk_size:1;
        RBus_UInt32  me2_patt_mv_pat_h1:9;
        RBus_UInt32  me2_patt_mv_pat_mv_x1:11;
        RBus_UInt32  me2_patt_mv_pat_mv_y1:10;
    };
}kme_me2_calc0_kme_me2_calc0_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me2_calc_show_scan:1;
        RBus_UInt32  me2_patt_blk_num:9;
        RBus_UInt32  me2_patt_mv_pat_v1:9;
        RBus_UInt32  me2_patt_mv_pat_v0:9;
    };
}kme_me2_calc0_kme_me2_calc0_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_sad_th_base_dc:13;
        RBus_UInt32  me2_patt_mv_patt_pr:1;
        RBus_UInt32  me2_patt_mv_pat_self_cycle:8;
        RBus_UInt32  me2_patt_mv_pat_self_en:1;
        RBus_UInt32  me2_patt_row_num:9;
    };
}kme_me2_calc0_kme_me2_calc0_f8_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_ME2_CALC0 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_dtl_hf_mode:1;
        RBus_UInt32  me2_dtl_hf_shft:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  me2_dtl_hf_cor:8;
        RBus_UInt32  me2_dtl_hf_limt:8;
        RBus_UInt32  me2_bv_sel:1;
        RBus_UInt32  me2_ph_norm_mode:2;
        RBus_UInt32  me2_calc_mon_mode:6;
        RBus_UInt32  res2:2;
    };
}kme_me2_calc0_kme_me2_calc0_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_dtl_dr_mode:1;
        RBus_UInt32  me2_dtl_dr_shft:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  me2_dtl_dr_cor:8;
        RBus_UInt32  me2_dtl_dr_limt:8;
        RBus_UInt32  me2_mvd_alp_x1:8;
        RBus_UInt32  res2:3;
    };
}kme_me2_calc0_kme_me2_calc0_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_alp_x2:8;
        RBus_UInt32  me2_mvd_alp_x3:8;
        RBus_UInt32  me2_mvd_alp_x4:8;
        RBus_UInt32  me2_mvd_alp_x5:8;
    };
}kme_me2_calc0_kme_me2_calc0_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_alp_y1:6;
        RBus_UInt32  me2_mvd_alp_y2:6;
        RBus_UInt32  me2_mvd_alp_y3:6;
        RBus_UInt32  me2_mvd_alp_y4:6;
        RBus_UInt32  me2_mvd_alp_y5:6;
        RBus_UInt32  res1:2;
    };
}kme_me2_calc0_kme_me2_calc0_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_alp_slope1:9;
        RBus_UInt32  me2_mvd_alp_slope2:9;
        RBus_UInt32  me2_mvd_alp_slope3:9;
        RBus_UInt32  res1:5;
    };
}kme_me2_calc0_kme_me2_calc0_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_alp_slope4:9;
        RBus_UInt32  me2_mvd_cuv_x1:10;
        RBus_UInt32  me2_mvd_cuv_x2:10;
        RBus_UInt32  res1:3;
    };
}kme_me2_calc0_kme_me2_calc0_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_cuv_x3:10;
        RBus_UInt32  me2_mvd_cuv_y1:10;
        RBus_UInt32  me2_mvd_cuv_y2:10;
        RBus_UInt32  res1:2;
    };
}kme_me2_calc0_kme_me2_calc0_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_cuv_y3:10;
        RBus_UInt32  me2_mvd_cuv_slope1:13;
        RBus_UInt32  res1:9;
    };
}kme_me2_calc0_kme_me2_calc0_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_cuv_slope2:13;
        RBus_UInt32  me2_ph_mvd_dgain_mode:4;
        RBus_UInt32  me2_rmv_vy_step:10;
        RBus_UInt32  ph_cdd_dbg_sel:5;
    };
}kme_me2_calc0_kme_me2_calc0_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_dgain_x1:8;
        RBus_UInt32  me2_mvd_dgain_x2:8;
        RBus_UInt32  me2_mvd_dgain_x3:8;
        RBus_UInt32  me2_mvd_dgain_x4:8;
    };
}kme_me2_calc0_kme_me2_calc0_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_dgain_x5:8;
        RBus_UInt32  me2_mvd_dgain_y1:10;
        RBus_UInt32  me2_mvd_dgain_y2:10;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc0_kme_me2_calc0_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_dgain_y3:10;
        RBus_UInt32  me2_mvd_dgain_y4:10;
        RBus_UInt32  me2_mvd_dgain_y5:10;
        RBus_UInt32  res1:2;
    };
}kme_me2_calc0_kme_me2_calc0_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_dgain_slope1:16;
        RBus_UInt32  me2_mvd_dgain_slope2:16;
    };
}kme_me2_calc0_kme_me2_calc0_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_dgain_slope3:16;
        RBus_UInt32  me2_mvd_dgain_slope4:16;
    };
}kme_me2_calc0_kme_me2_calc0_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_pgain_x1:10;
        RBus_UInt32  me2_mvd_pgain_x2:10;
        RBus_UInt32  me2_mvd_pgain_x3:10;
        RBus_UInt32  res1:2;
    };
}kme_me2_calc0_kme_me2_calc0_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_pgain_y1:6;
        RBus_UInt32  me2_mvd_pgain_y2:6;
        RBus_UInt32  me2_mvd_pgain_y3:6;
        RBus_UInt32  me2_mvd_pgain_slope1:9;
        RBus_UInt32  res1:5;
    };
}kme_me2_calc0_kme_me2_calc0_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mvd_pgain_slope2:9;
        RBus_UInt32  me2_gmvd_cnt_x1:12;
        RBus_UInt32  me2_rmv_vx_step:11;
    };
}kme_me2_calc0_kme_me2_calc0_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_gmvd_cnt_x2:12;
        RBus_UInt32  me2_gmvd_cnt_x3:12;
        RBus_UInt32  me2_ph_psad_alp_mode:4;
        RBus_UInt32  me2_ph_mvd_pgain_mode:4;
    };
}kme_me2_calc0_kme_me2_calc0_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_gmvd_cnt_y1:8;
        RBus_UInt32  me2_gmvd_cnt_y2:8;
        RBus_UInt32  me2_gmvd_cnt_y3:8;
        RBus_UInt32  res1:8;
    };
}kme_me2_calc0_kme_me2_calc0_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_gmvd_cnt_slope1:11;
        RBus_UInt32  me2_gmvd_cnt_slope2:11;
        RBus_UInt32  res1:10;
    };
}kme_me2_calc0_kme_me2_calc0_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_psad_alp_x1:8;
        RBus_UInt32  me2_psad_alp_x2:8;
        RBus_UInt32  me2_psad_alp_x3:8;
        RBus_UInt32  me2_psad_alp_y1:6;
        RBus_UInt32  res1:2;
    };
}kme_me2_calc0_kme_me2_calc0_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_psad_alp_y2:6;
        RBus_UInt32  me2_psad_alp_y3:6;
        RBus_UInt32  me2_psad_alp_slope1:9;
        RBus_UInt32  me2_psad_alp_slope2:9;
        RBus_UInt32  me2_rgn_shift:2;
    };
}kme_me2_calc0_kme_me2_calc0_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_dbg_cdd_option:4;
        RBus_UInt32  me2_dbg_offset_option:3;
        RBus_UInt32  me2_acdc_pk_apl_th:8;
        RBus_UInt32  me2_acdc_pk_apl_off:1;
        RBus_UInt32  me2_acdc_pk_dtl_th:8;
        RBus_UInt32  me2_acdc_pk_dtl_off:1;
        RBus_UInt32  res1:7;
    };
}kme_me2_calc0_kme_me2_calc0_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_mv_out_patt_en:1;
        RBus_UInt32  me2_calc_mv_full_mux:2;
        RBus_UInt32  me2_calc_mv_option:3;
        RBus_UInt32  me2_calc_mv_boundary_mux:1;
        RBus_UInt32  me2_calc_boundary_color:21;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc0_kme_me2_calc0_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_gmvd_ucf_x1:10;
        RBus_UInt32  me2_gmvd_ucf_x2:10;
        RBus_UInt32  me2_gmvd_ucf_x3:10;
        RBus_UInt32  res1:2;
    };
}kme_me2_calc0_kme_me2_calc0_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_gmvd_ucf_y1:8;
        RBus_UInt32  me2_gmvd_ucf_y2:8;
        RBus_UInt32  me2_gmvd_ucf_y3:8;
        RBus_UInt32  res1:8;
    };
}kme_me2_calc0_kme_me2_calc0_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_gmvd_ucf_slope1:11;
        RBus_UInt32  me2_gmvd_ucf_slope2:11;
        RBus_UInt32  res1:10;
    };
}kme_me2_calc0_kme_me2_calc0_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_ph_mvd_cost_limt:13;
        RBus_UInt32  me2_rmv_hact:9;
        RBus_UInt32  me2_rmv_vact:9;
        RBus_UInt32  me2_mv_invalid_sad_sel:1;
    };
}kme_me2_calc0_kme_me2_calc0_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ph_bv2_ofst_sel:3;
        RBus_UInt32  me2_ph_dc_pix_ad_data:8;
        RBus_UInt32  me2_ph_mvd_alp_mode:4;
        RBus_UInt32  me2_ph_gmvd_cost_limt:13;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc0_kme_me2_calc0_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_ph_adpt_cor_mode:4;
        RBus_UInt32  me2_ph_adpt_cor_gain0:8;
        RBus_UInt32  me2_ph_adpt_cor_gain1:8;
        RBus_UInt32  me2_ph_adpt_cor_gain2:8;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc0_kme_me2_calc0_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_ph_adpt_cor_gain3:8;
        RBus_UInt32  me2_ph_adpt_cor_limt:10;
        RBus_UInt32  me2_ph_dc_pix_cor_thd:8;
        RBus_UInt32  res1:6;
    };
}kme_me2_calc0_kme_me2_calc0_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_ph_dc_pix_sad_limt:8;
        RBus_UInt32  me2_pfvgain_curve_x1:10;
        RBus_UInt32  me2_pfvgain_curve_x2:10;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc0_kme_me2_calc0_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_pfvgain_curve_x3:10;
        RBus_UInt32  me2_pfvgain_curve_y1:10;
        RBus_UInt32  me2_pfvgain_curve_y2:10;
        RBus_UInt32  me2_gmv_sel_kme_me2_calc0:1;
        RBus_UInt32  me2_gmv_ucf_sel:1;
    };
}kme_me2_calc0_kme_me2_calc0_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_pfvgain_curve_y3:10;
        RBus_UInt32  me2_pfvgain_slope1:11;
        RBus_UInt32  me2_pfvgain_slope2:11;
    };
}kme_me2_calc0_kme_me2_calc0_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  phme_pfvdiff_limit:13;
        RBus_UInt32  me2_ofst_pfvdiff_gain:8;
        RBus_UInt32  me2_wsad1_min_invalid_sel:2;
        RBus_UInt32  me2_wsad2_min_invalid_sel:2;
        RBus_UInt32  me2_wsad2_min_invalid_sel_ac:2;
        RBus_UInt32  res1:5;
    };
}kme_me2_calc0_kme_me2_calc0_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_ofst_pfv_diff_cost_limit:13;
        RBus_UInt32  me2_ofst_cost_pnt0:8;
        RBus_UInt32  me2_ofst_cost_pnt1:8;
        RBus_UInt32  res1:3;
    };
}kme_me2_calc0_kme_me2_calc0_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_ofst_cost_pnt2:8;
        RBus_UInt32  me2_ofst_cost_pnt3:8;
        RBus_UInt32  me2_ofst_cost_pnt4:8;
        RBus_UInt32  res1:8;
    };
}kme_me2_calc0_kme_me2_calc0_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_ph_bld_alpha:6;
        RBus_UInt32  me2_ph_bld_src_sel:1;
        RBus_UInt32  me2_ph_ac_flt_sel:1;
        RBus_UInt32  me2_ph_ac_flt_mode:2;
        RBus_UInt32  me2_ph_ac_flt_shft:3;
        RBus_UInt32  me2_ph_ac_norm_mode:2;
        RBus_UInt32  me2_ph_dc_norm_mode:2;
        RBus_UInt32  me2_ph_ac_sel:1;
        RBus_UInt32  me2_apl_sel:2;
        RBus_UInt32  me2_dtl_sel:3;
        RBus_UInt32  me2_ph_ac_pix_ad_data:8;
        RBus_UInt32  me2_ac_invalid_sel:1;
    };
}kme_me2_calc0_kme_me2_calc0_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_ph_ac_pix_cor_thd:8;
        RBus_UInt32  me2_ph_ac_pix_sad_limt:8;
        RBus_UInt32  me2_vec_eval_mvd_th:10;
        RBus_UInt32  me2_bv1_pk_src_dc:1;
        RBus_UInt32  me2_bv1_pk_src_ac:1;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc0_kme_me2_calc0_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_pfvdiff_gain:8;
        RBus_UInt32  me2_dc_invalid_sel:1;
        RBus_UInt32  me2_acdc_pk_en:1;
        RBus_UInt32  me2_acdc_pk_sad_diff_th:13;
        RBus_UInt32  me2_acdc_pk_sad_diff_off:1;
        RBus_UInt32  res1:8;
    };
}kme_me2_calc0_kme_me2_calc0_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_acdc_pk_mvdiff_th:10;
        RBus_UInt32  me2_acdc_pk_mvdiff_off:1;
        RBus_UInt32  me2_acdc_pk_mvdiff_s_th:10;
        RBus_UInt32  me2_acdc_pk_mvdiff_s_off:1;
        RBus_UInt32  me2_acdc_pk_small_mv_off:1;
        RBus_UInt32  res1:9;
    };
}kme_me2_calc0_kme_me2_calc0_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_acdc_bv_ac_sad_th:13;
        RBus_UInt32  me2_acdc_bv_ac_sad_off:1;
        RBus_UInt32  me2_acdc_mvdiff_s_range:10;
        RBus_UInt32  me2_acdc_mvdiff_s_range_off:1;
        RBus_UInt32  me2_acdc_pk_bv1_ref:1;
        RBus_UInt32  me2_acdc_pk_bv1_follow_en:1;
        RBus_UInt32  res1:5;
    };
}kme_me2_calc0_kme_me2_calc0_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_loop_acbv_limit_en:1;
        RBus_UInt32  me2_loop_acbv_limit_sel:2;
        RBus_UInt32  me2_loop_acbv_limit_gmv_gain:5;
        RBus_UInt32  me2_loop_acbv_limit_vx:10;
        RBus_UInt32  me2_loop_acbv_limit_vy:9;
        RBus_UInt32  res1:5;
    };
}kme_me2_calc0_kme_me2_calc0_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_loop_acbv_limit_mv_x1:11;
        RBus_UInt32  me2_loop_acbv_limit_mv_x2:11;
        RBus_UInt32  me2_loop_acbv_limit_mv_y1:5;
        RBus_UInt32  me2_loop_acbv_limit_mv_y2:5;
    };
}kme_me2_calc0_kme_me2_calc0_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_loop_acbv_limit_mv_s:9;
        RBus_UInt32  me2_sec_multimin_sel:1;
        RBus_UInt32  me2_sec_multimin1_en:1;
        RBus_UInt32  me2_sec_multimin1_sad_th:13;
        RBus_UInt32  res1:8;
    };
}kme_me2_calc0_kme_me2_calc0_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_sec_multimin1_mvdiff_th:13;
        RBus_UInt32  me2_sec_mv0_gmv_diff_th:13;
        RBus_UInt32  me2_sad_th_slope_dc:6;
    };
}kme_me2_calc0_kme_me2_calc0_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_sec_mv1_gmv_diff_th:13;
        RBus_UInt32  me2_sec_multimin1_force_bv1:1;
        RBus_UInt32  me2_sec_multimin2_en:1;
        RBus_UInt32  me2_sec_multimin2_sad_gain:8;
        RBus_UInt32  me2_sec_multimin2_apl_gain:8;
        RBus_UInt32  res1:1;
    };
}kme_me2_calc0_kme_me2_calc0_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_sec_multimin2_mvdiff_th:13;
        RBus_UInt32  me2_sec_multimin2_mvdiff_off:1;
        RBus_UInt32  me2_sec_multimin2_sad_th:13;
        RBus_UInt32  me2_sec_multimin2_mv_small_off:1;
        RBus_UInt32  me2_sec_multimin2_nonzero_off:1;
        RBus_UInt32  me2_sec_multimin2_force_bv1:1;
        RBus_UInt32  res1:2;
    };
}kme_me2_calc0_kme_me2_calc0_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_fst_multimin_sel:1;
        RBus_UInt32  me2_fst_multimin1_en:1;
        RBus_UInt32  me2_fst_multimin1_sad_th:13;
        RBus_UInt32  me2_fst_multimin1_mvdiff_th:13;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc0_kme_me2_calc0_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_fst_mv0_gmv_diff_th:13;
        RBus_UInt32  me2_fst_mv1_gmv_diff_th:13;
        RBus_UInt32  me2_fst_multimin1_force_bv1:1;
        RBus_UInt32  me2_fst_multimin2_en:1;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc0_kme_me2_calc0_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_fst_multimin2_sad_gain:8;
        RBus_UInt32  me2_fst_multimin2_apl_gain:8;
        RBus_UInt32  me2_fst_multimin2_mvdiff_th:13;
        RBus_UInt32  me2_fst_multimin2_mvdiff_off:1;
        RBus_UInt32  res1:2;
    };
}kme_me2_calc0_kme_me2_calc0_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_fst_multimin2_sad_th:13;
        RBus_UInt32  me2_fst_multimin2_mv_small_off:1;
        RBus_UInt32  me2_fst_multimin2_nonzero_off:1;
        RBus_UInt32  me2_fst_multimin2_force_bv1:1;
        RBus_UInt32  kme_me2_sec_small_object_en:1;
        RBus_UInt32  kme_me2_sec_small_object_sad_th:13;
        RBus_UInt32  res1:2;
    };
}kme_me2_calc0_kme_me2_calc0_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_sec_small_object_sm_mv_th:10;
        RBus_UInt32  kme_me2_sec_small_object_ip_pi_mvdiff_gain:6;
        RBus_UInt32  kme_me2_sec_small_object_ph_mvdiff_gain:6;
        RBus_UInt32  kme_me2_fst_small_object_sm_mv_th:10;
    };
}kme_me2_calc0_kme_me2_calc0_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_fst_small_object_en:1;
        RBus_UInt32  kme_me2_fst_small_object_sad_th:13;
        RBus_UInt32  kme_me2_fst_small_object_ip_pi_mvdiff_gain:6;
        RBus_UInt32  kme_me2_fst_small_object_ph_mvdiff_gain:6;
        RBus_UInt32  me2_dbg_ero_apl_show_idx:6;
    };
}kme_me2_calc0_kme_me2_calc0_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_force_mv_y:10;
        RBus_UInt32  me2_dbg_force_bv1:21;
        RBus_UInt32  res1:1;
    };
}kme_me2_calc0_kme_me2_calc0_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_force_mv_x:11;
        RBus_UInt32  me2_dbg_force_bv2:21;
    };
}kme_me2_calc0_kme_me2_calc0_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_vec_dc_fst1_dbg_sel:2;
        RBus_UInt32  me2_vec_dc_fst2_dbg_sel:2;
        RBus_UInt32  me2_vec_dc_sec1_dbg_sel:2;
        RBus_UInt32  me2_vec_dc_sec2_dbg_sel:2;
        RBus_UInt32  me2_vec_ac_sec1_dbg_sel:2;
        RBus_UInt32  me2_vec_ac_sec2_dbg_sel:2;
        RBus_UInt32  me2_pk_bv1_dbg_sel:2;
        RBus_UInt32  me2_pk_bv2_dbg_sel:2;
        RBus_UInt32  me2_limit_bv1_dbg_sel:2;
        RBus_UInt32  me2_limit_bv2_dbg_sel:2;
        RBus_UInt32  me2_mm_bv1_dbg_sel:2;
        RBus_UInt32  me2_mm_bv2_dbg_sel:2;
        RBus_UInt32  me2_sm_obj_bv0_dbg_sel:2;
        RBus_UInt32  me2_sm_obj_bv1_dbg_sel:2;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc0_kme_me2_calc0_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_patt_mv_pat_mode:2;
        RBus_UInt32  me2_patt_mv_pat_mv_y:10;
        RBus_UInt32  me2_patt_mv_pat_mv_x:11;
        RBus_UInt32  me2_patt_mv_pat_h0:9;
    };
}kme_me2_calc0_kme_me2_calc0_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_patt_mv_pat_mv_y1:10;
        RBus_UInt32  me2_patt_mv_pat_mv_x1:11;
        RBus_UInt32  me2_patt_mv_pat_h1:9;
        RBus_UInt32  me2_patt_blk_size:1;
        RBus_UInt32  me2_patt_row_size:1;
    };
}kme_me2_calc0_kme_me2_calc0_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_patt_mv_pat_v0:9;
        RBus_UInt32  me2_patt_mv_pat_v1:9;
        RBus_UInt32  me2_patt_blk_num:9;
        RBus_UInt32  me2_calc_show_scan:1;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc0_kme_me2_calc0_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_patt_row_num:9;
        RBus_UInt32  me2_patt_mv_pat_self_en:1;
        RBus_UInt32  me2_patt_mv_pat_self_cycle:8;
        RBus_UInt32  me2_patt_mv_patt_pr:1;
        RBus_UInt32  me2_sad_th_base_dc:13;
    };
}kme_me2_calc0_kme_me2_calc0_f8_RBUS;




#endif 


#endif 
