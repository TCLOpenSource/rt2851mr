/**
* @file Merlin5_MEMC_KME_IPME
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_IPME_REG_H_
#define _RBUS_KME_IPME_REG_H_

#include "rbus_types.h"



//  KME_IPME Register Address
#define  KME_IPME_KME_IPME_00                                                   0x1809BC00
#define  KME_IPME_KME_IPME_00_reg_addr                                           "0xB809BC00"
#define  KME_IPME_KME_IPME_00_reg                                                0xB809BC00
#define  KME_IPME_KME_IPME_00_inst_addr                                          "0x0000"
#define  set_KME_IPME_KME_IPME_00_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_00_reg)=data)
#define  get_KME_IPME_KME_IPME_00_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_00_reg))
#define  KME_IPME_KME_IPME_00_ipme_v_fetch_mode_shift                            (10)
#define  KME_IPME_KME_IPME_00_ipme_v_fetch_opt_shift                             (8)
#define  KME_IPME_KME_IPME_00_ipme_h_fetch_mode_shift                            (6)
#define  KME_IPME_KME_IPME_00_ipme_h_fetch_opt_shift                             (4)
#define  KME_IPME_KME_IPME_00_ipme_vs_o_sel_shift                                (0)
#define  KME_IPME_KME_IPME_00_ipme_v_fetch_mode_mask                             (0x00000C00)
#define  KME_IPME_KME_IPME_00_ipme_v_fetch_opt_mask                              (0x00000300)
#define  KME_IPME_KME_IPME_00_ipme_h_fetch_mode_mask                             (0x000000C0)
#define  KME_IPME_KME_IPME_00_ipme_h_fetch_opt_mask                              (0x00000030)
#define  KME_IPME_KME_IPME_00_ipme_vs_o_sel_mask                                 (0x00000001)
#define  KME_IPME_KME_IPME_00_ipme_v_fetch_mode(data)                            (0x00000C00&((data)<<10))
#define  KME_IPME_KME_IPME_00_ipme_v_fetch_opt(data)                             (0x00000300&((data)<<8))
#define  KME_IPME_KME_IPME_00_ipme_h_fetch_mode(data)                            (0x000000C0&((data)<<6))
#define  KME_IPME_KME_IPME_00_ipme_h_fetch_opt(data)                             (0x00000030&((data)<<4))
#define  KME_IPME_KME_IPME_00_ipme_vs_o_sel(data)                                (0x00000001&(data))
#define  KME_IPME_KME_IPME_00_get_ipme_v_fetch_mode(data)                        ((0x00000C00&(data))>>10)
#define  KME_IPME_KME_IPME_00_get_ipme_v_fetch_opt(data)                         ((0x00000300&(data))>>8)
#define  KME_IPME_KME_IPME_00_get_ipme_h_fetch_mode(data)                        ((0x000000C0&(data))>>6)
#define  KME_IPME_KME_IPME_00_get_ipme_h_fetch_opt(data)                         ((0x00000030&(data))>>4)
#define  KME_IPME_KME_IPME_00_get_ipme_vs_o_sel(data)                            (0x00000001&(data))

#define  KME_IPME_KME_IPME_04                                                   0x1809BC04
#define  KME_IPME_KME_IPME_04_reg_addr                                           "0xB809BC04"
#define  KME_IPME_KME_IPME_04_reg                                                0xB809BC04
#define  KME_IPME_KME_IPME_04_inst_addr                                          "0x0001"
#define  set_KME_IPME_KME_IPME_04_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_04_reg)=data)
#define  get_KME_IPME_KME_IPME_04_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_04_reg))
#define  KME_IPME_KME_IPME_04_ipme_v_flp_alp6_shift                              (9)
#define  KME_IPME_KME_IPME_04_ipme_v_flp_alp5_shift                              (0)
#define  KME_IPME_KME_IPME_04_ipme_v_flp_alp6_mask                               (0x0003FE00)
#define  KME_IPME_KME_IPME_04_ipme_v_flp_alp5_mask                               (0x000001FF)
#define  KME_IPME_KME_IPME_04_ipme_v_flp_alp6(data)                              (0x0003FE00&((data)<<9))
#define  KME_IPME_KME_IPME_04_ipme_v_flp_alp5(data)                              (0x000001FF&(data))
#define  KME_IPME_KME_IPME_04_get_ipme_v_flp_alp6(data)                          ((0x0003FE00&(data))>>9)
#define  KME_IPME_KME_IPME_04_get_ipme_v_flp_alp5(data)                          (0x000001FF&(data))

#define  KME_IPME_KME_IPME_08                                                   0x1809BC08
#define  KME_IPME_KME_IPME_08_reg_addr                                           "0xB809BC08"
#define  KME_IPME_KME_IPME_08_reg                                                0xB809BC08
#define  KME_IPME_KME_IPME_08_inst_addr                                          "0x0002"
#define  set_KME_IPME_KME_IPME_08_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_08_reg)=data)
#define  get_KME_IPME_KME_IPME_08_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_08_reg))
#define  KME_IPME_KME_IPME_08_ipme_high_det_min_clip_shift                       (14)
#define  KME_IPME_KME_IPME_08_ipme_high_det_near_th_shift                        (8)
#define  KME_IPME_KME_IPME_08_ipme_high_det_diff_th_shift                        (1)
#define  KME_IPME_KME_IPME_08_ipme_high_det_en_shift                             (0)
#define  KME_IPME_KME_IPME_08_ipme_high_det_min_clip_mask                        (0x0001C000)
#define  KME_IPME_KME_IPME_08_ipme_high_det_near_th_mask                         (0x00003F00)
#define  KME_IPME_KME_IPME_08_ipme_high_det_diff_th_mask                         (0x000000FE)
#define  KME_IPME_KME_IPME_08_ipme_high_det_en_mask                              (0x00000001)
#define  KME_IPME_KME_IPME_08_ipme_high_det_min_clip(data)                       (0x0001C000&((data)<<14))
#define  KME_IPME_KME_IPME_08_ipme_high_det_near_th(data)                        (0x00003F00&((data)<<8))
#define  KME_IPME_KME_IPME_08_ipme_high_det_diff_th(data)                        (0x000000FE&((data)<<1))
#define  KME_IPME_KME_IPME_08_ipme_high_det_en(data)                             (0x00000001&(data))
#define  KME_IPME_KME_IPME_08_get_ipme_high_det_min_clip(data)                   ((0x0001C000&(data))>>14)
#define  KME_IPME_KME_IPME_08_get_ipme_high_det_near_th(data)                    ((0x00003F00&(data))>>8)
#define  KME_IPME_KME_IPME_08_get_ipme_high_det_diff_th(data)                    ((0x000000FE&(data))>>1)
#define  KME_IPME_KME_IPME_08_get_ipme_high_det_en(data)                         (0x00000001&(data))

#define  KME_IPME_KME_IPME_0C                                                   0x1809BC0C
#define  KME_IPME_KME_IPME_0C_reg_addr                                           "0xB809BC0C"
#define  KME_IPME_KME_IPME_0C_reg                                                0xB809BC0C
#define  KME_IPME_KME_IPME_0C_inst_addr                                          "0x0003"
#define  set_KME_IPME_KME_IPME_0C_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_0C_reg)=data)
#define  get_KME_IPME_KME_IPME_0C_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_0C_reg))
#define  KME_IPME_KME_IPME_0C_ipme_scaler_h_active_shift                         (0)
#define  KME_IPME_KME_IPME_0C_ipme_scaler_h_active_mask                          (0x000003FF)
#define  KME_IPME_KME_IPME_0C_ipme_scaler_h_active(data)                         (0x000003FF&(data))
#define  KME_IPME_KME_IPME_0C_get_ipme_scaler_h_active(data)                     (0x000003FF&(data))

#define  KME_IPME_KME_IPME_10                                                   0x1809BC10
#define  KME_IPME_KME_IPME_10_reg_addr                                           "0xB809BC10"
#define  KME_IPME_KME_IPME_10_reg                                                0xB809BC10
#define  KME_IPME_KME_IPME_10_inst_addr                                          "0x0004"
#define  set_KME_IPME_KME_IPME_10_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_10_reg)=data)
#define  get_KME_IPME_KME_IPME_10_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_10_reg))
#define  KME_IPME_KME_IPME_10_ipme_32lkup5_shift                                 (28)
#define  KME_IPME_KME_IPME_10_ipme_32lkup4_shift                                 (24)
#define  KME_IPME_KME_IPME_10_ipme_32lkup3_shift                                 (20)
#define  KME_IPME_KME_IPME_10_ipme_32lkup2_shift                                 (16)
#define  KME_IPME_KME_IPME_10_ipme_32lkup1_shift                                 (12)
#define  KME_IPME_KME_IPME_10_ipme_32lkup0_shift                                 (8)
#define  KME_IPME_KME_IPME_10_ipme_curve_slp_shift                               (0)
#define  KME_IPME_KME_IPME_10_ipme_32lkup5_mask                                  (0xF0000000)
#define  KME_IPME_KME_IPME_10_ipme_32lkup4_mask                                  (0x0F000000)
#define  KME_IPME_KME_IPME_10_ipme_32lkup3_mask                                  (0x00F00000)
#define  KME_IPME_KME_IPME_10_ipme_32lkup2_mask                                  (0x000F0000)
#define  KME_IPME_KME_IPME_10_ipme_32lkup1_mask                                  (0x0000F000)
#define  KME_IPME_KME_IPME_10_ipme_32lkup0_mask                                  (0x00000F00)
#define  KME_IPME_KME_IPME_10_ipme_curve_slp_mask                                (0x000000FF)
#define  KME_IPME_KME_IPME_10_ipme_32lkup5(data)                                 (0xF0000000&((data)<<28))
#define  KME_IPME_KME_IPME_10_ipme_32lkup4(data)                                 (0x0F000000&((data)<<24))
#define  KME_IPME_KME_IPME_10_ipme_32lkup3(data)                                 (0x00F00000&((data)<<20))
#define  KME_IPME_KME_IPME_10_ipme_32lkup2(data)                                 (0x000F0000&((data)<<16))
#define  KME_IPME_KME_IPME_10_ipme_32lkup1(data)                                 (0x0000F000&((data)<<12))
#define  KME_IPME_KME_IPME_10_ipme_32lkup0(data)                                 (0x00000F00&((data)<<8))
#define  KME_IPME_KME_IPME_10_ipme_curve_slp(data)                               (0x000000FF&(data))
#define  KME_IPME_KME_IPME_10_get_ipme_32lkup5(data)                             ((0xF0000000&(data))>>28)
#define  KME_IPME_KME_IPME_10_get_ipme_32lkup4(data)                             ((0x0F000000&(data))>>24)
#define  KME_IPME_KME_IPME_10_get_ipme_32lkup3(data)                             ((0x00F00000&(data))>>20)
#define  KME_IPME_KME_IPME_10_get_ipme_32lkup2(data)                             ((0x000F0000&(data))>>16)
#define  KME_IPME_KME_IPME_10_get_ipme_32lkup1(data)                             ((0x0000F000&(data))>>12)
#define  KME_IPME_KME_IPME_10_get_ipme_32lkup0(data)                             ((0x00000F00&(data))>>8)
#define  KME_IPME_KME_IPME_10_get_ipme_curve_slp(data)                           (0x000000FF&(data))

#define  KME_IPME_KME_IPME_14                                                   0x1809BC14
#define  KME_IPME_KME_IPME_14_reg_addr                                           "0xB809BC14"
#define  KME_IPME_KME_IPME_14_reg                                                0xB809BC14
#define  KME_IPME_KME_IPME_14_inst_addr                                          "0x0005"
#define  set_KME_IPME_KME_IPME_14_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_14_reg)=data)
#define  get_KME_IPME_KME_IPME_14_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_14_reg))
#define  KME_IPME_KME_IPME_14_ipme_32lkup13_shift                                (28)
#define  KME_IPME_KME_IPME_14_ipme_32lkup12_shift                                (24)
#define  KME_IPME_KME_IPME_14_ipme_32lkup11_shift                                (20)
#define  KME_IPME_KME_IPME_14_ipme_32lkup10_shift                                (16)
#define  KME_IPME_KME_IPME_14_ipme_32lkup9_shift                                 (12)
#define  KME_IPME_KME_IPME_14_ipme_32lkup8_shift                                 (8)
#define  KME_IPME_KME_IPME_14_ipme_32lkup7_shift                                 (4)
#define  KME_IPME_KME_IPME_14_ipme_32lkup6_shift                                 (0)
#define  KME_IPME_KME_IPME_14_ipme_32lkup13_mask                                 (0xF0000000)
#define  KME_IPME_KME_IPME_14_ipme_32lkup12_mask                                 (0x0F000000)
#define  KME_IPME_KME_IPME_14_ipme_32lkup11_mask                                 (0x00F00000)
#define  KME_IPME_KME_IPME_14_ipme_32lkup10_mask                                 (0x000F0000)
#define  KME_IPME_KME_IPME_14_ipme_32lkup9_mask                                  (0x0000F000)
#define  KME_IPME_KME_IPME_14_ipme_32lkup8_mask                                  (0x00000F00)
#define  KME_IPME_KME_IPME_14_ipme_32lkup7_mask                                  (0x000000F0)
#define  KME_IPME_KME_IPME_14_ipme_32lkup6_mask                                  (0x0000000F)
#define  KME_IPME_KME_IPME_14_ipme_32lkup13(data)                                (0xF0000000&((data)<<28))
#define  KME_IPME_KME_IPME_14_ipme_32lkup12(data)                                (0x0F000000&((data)<<24))
#define  KME_IPME_KME_IPME_14_ipme_32lkup11(data)                                (0x00F00000&((data)<<20))
#define  KME_IPME_KME_IPME_14_ipme_32lkup10(data)                                (0x000F0000&((data)<<16))
#define  KME_IPME_KME_IPME_14_ipme_32lkup9(data)                                 (0x0000F000&((data)<<12))
#define  KME_IPME_KME_IPME_14_ipme_32lkup8(data)                                 (0x00000F00&((data)<<8))
#define  KME_IPME_KME_IPME_14_ipme_32lkup7(data)                                 (0x000000F0&((data)<<4))
#define  KME_IPME_KME_IPME_14_ipme_32lkup6(data)                                 (0x0000000F&(data))
#define  KME_IPME_KME_IPME_14_get_ipme_32lkup13(data)                            ((0xF0000000&(data))>>28)
#define  KME_IPME_KME_IPME_14_get_ipme_32lkup12(data)                            ((0x0F000000&(data))>>24)
#define  KME_IPME_KME_IPME_14_get_ipme_32lkup11(data)                            ((0x00F00000&(data))>>20)
#define  KME_IPME_KME_IPME_14_get_ipme_32lkup10(data)                            ((0x000F0000&(data))>>16)
#define  KME_IPME_KME_IPME_14_get_ipme_32lkup9(data)                             ((0x0000F000&(data))>>12)
#define  KME_IPME_KME_IPME_14_get_ipme_32lkup8(data)                             ((0x00000F00&(data))>>8)
#define  KME_IPME_KME_IPME_14_get_ipme_32lkup7(data)                             ((0x000000F0&(data))>>4)
#define  KME_IPME_KME_IPME_14_get_ipme_32lkup6(data)                             (0x0000000F&(data))

#define  KME_IPME_KME_IPME_18                                                   0x1809BC18
#define  KME_IPME_KME_IPME_18_reg_addr                                           "0xB809BC18"
#define  KME_IPME_KME_IPME_18_reg                                                0xB809BC18
#define  KME_IPME_KME_IPME_18_inst_addr                                          "0x0006"
#define  set_KME_IPME_KME_IPME_18_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_18_reg)=data)
#define  get_KME_IPME_KME_IPME_18_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_18_reg))
#define  KME_IPME_KME_IPME_18_ipme_32lkup21_shift                                (28)
#define  KME_IPME_KME_IPME_18_ipme_32lkup20_shift                                (24)
#define  KME_IPME_KME_IPME_18_ipme_32lkup19_shift                                (20)
#define  KME_IPME_KME_IPME_18_ipme_32lkup18_shift                                (16)
#define  KME_IPME_KME_IPME_18_ipme_32lkup17_shift                                (12)
#define  KME_IPME_KME_IPME_18_ipme_32lkup16_shift                                (8)
#define  KME_IPME_KME_IPME_18_ipme_32lkup15_shift                                (4)
#define  KME_IPME_KME_IPME_18_ipme_32lkup14_shift                                (0)
#define  KME_IPME_KME_IPME_18_ipme_32lkup21_mask                                 (0xF0000000)
#define  KME_IPME_KME_IPME_18_ipme_32lkup20_mask                                 (0x0F000000)
#define  KME_IPME_KME_IPME_18_ipme_32lkup19_mask                                 (0x00F00000)
#define  KME_IPME_KME_IPME_18_ipme_32lkup18_mask                                 (0x000F0000)
#define  KME_IPME_KME_IPME_18_ipme_32lkup17_mask                                 (0x0000F000)
#define  KME_IPME_KME_IPME_18_ipme_32lkup16_mask                                 (0x00000F00)
#define  KME_IPME_KME_IPME_18_ipme_32lkup15_mask                                 (0x000000F0)
#define  KME_IPME_KME_IPME_18_ipme_32lkup14_mask                                 (0x0000000F)
#define  KME_IPME_KME_IPME_18_ipme_32lkup21(data)                                (0xF0000000&((data)<<28))
#define  KME_IPME_KME_IPME_18_ipme_32lkup20(data)                                (0x0F000000&((data)<<24))
#define  KME_IPME_KME_IPME_18_ipme_32lkup19(data)                                (0x00F00000&((data)<<20))
#define  KME_IPME_KME_IPME_18_ipme_32lkup18(data)                                (0x000F0000&((data)<<16))
#define  KME_IPME_KME_IPME_18_ipme_32lkup17(data)                                (0x0000F000&((data)<<12))
#define  KME_IPME_KME_IPME_18_ipme_32lkup16(data)                                (0x00000F00&((data)<<8))
#define  KME_IPME_KME_IPME_18_ipme_32lkup15(data)                                (0x000000F0&((data)<<4))
#define  KME_IPME_KME_IPME_18_ipme_32lkup14(data)                                (0x0000000F&(data))
#define  KME_IPME_KME_IPME_18_get_ipme_32lkup21(data)                            ((0xF0000000&(data))>>28)
#define  KME_IPME_KME_IPME_18_get_ipme_32lkup20(data)                            ((0x0F000000&(data))>>24)
#define  KME_IPME_KME_IPME_18_get_ipme_32lkup19(data)                            ((0x00F00000&(data))>>20)
#define  KME_IPME_KME_IPME_18_get_ipme_32lkup18(data)                            ((0x000F0000&(data))>>16)
#define  KME_IPME_KME_IPME_18_get_ipme_32lkup17(data)                            ((0x0000F000&(data))>>12)
#define  KME_IPME_KME_IPME_18_get_ipme_32lkup16(data)                            ((0x00000F00&(data))>>8)
#define  KME_IPME_KME_IPME_18_get_ipme_32lkup15(data)                            ((0x000000F0&(data))>>4)
#define  KME_IPME_KME_IPME_18_get_ipme_32lkup14(data)                            (0x0000000F&(data))

#define  KME_IPME_KME_IPME_1C                                                   0x1809BC1C
#define  KME_IPME_KME_IPME_1C_reg_addr                                           "0xB809BC1C"
#define  KME_IPME_KME_IPME_1C_reg                                                0xB809BC1C
#define  KME_IPME_KME_IPME_1C_inst_addr                                          "0x0007"
#define  set_KME_IPME_KME_IPME_1C_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_1C_reg)=data)
#define  get_KME_IPME_KME_IPME_1C_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_1C_reg))
#define  KME_IPME_KME_IPME_1C_ipme_32lkup29_shift                                (28)
#define  KME_IPME_KME_IPME_1C_ipme_32lkup28_shift                                (24)
#define  KME_IPME_KME_IPME_1C_ipme_32lkup27_shift                                (20)
#define  KME_IPME_KME_IPME_1C_ipme_32lkup26_shift                                (16)
#define  KME_IPME_KME_IPME_1C_ipme_32lkup25_shift                                (12)
#define  KME_IPME_KME_IPME_1C_ipme_32lkup24_shift                                (8)
#define  KME_IPME_KME_IPME_1C_ipme_32lkup23_shift                                (4)
#define  KME_IPME_KME_IPME_1C_ipme_32lkup22_shift                                (0)
#define  KME_IPME_KME_IPME_1C_ipme_32lkup29_mask                                 (0xF0000000)
#define  KME_IPME_KME_IPME_1C_ipme_32lkup28_mask                                 (0x0F000000)
#define  KME_IPME_KME_IPME_1C_ipme_32lkup27_mask                                 (0x00F00000)
#define  KME_IPME_KME_IPME_1C_ipme_32lkup26_mask                                 (0x000F0000)
#define  KME_IPME_KME_IPME_1C_ipme_32lkup25_mask                                 (0x0000F000)
#define  KME_IPME_KME_IPME_1C_ipme_32lkup24_mask                                 (0x00000F00)
#define  KME_IPME_KME_IPME_1C_ipme_32lkup23_mask                                 (0x000000F0)
#define  KME_IPME_KME_IPME_1C_ipme_32lkup22_mask                                 (0x0000000F)
#define  KME_IPME_KME_IPME_1C_ipme_32lkup29(data)                                (0xF0000000&((data)<<28))
#define  KME_IPME_KME_IPME_1C_ipme_32lkup28(data)                                (0x0F000000&((data)<<24))
#define  KME_IPME_KME_IPME_1C_ipme_32lkup27(data)                                (0x00F00000&((data)<<20))
#define  KME_IPME_KME_IPME_1C_ipme_32lkup26(data)                                (0x000F0000&((data)<<16))
#define  KME_IPME_KME_IPME_1C_ipme_32lkup25(data)                                (0x0000F000&((data)<<12))
#define  KME_IPME_KME_IPME_1C_ipme_32lkup24(data)                                (0x00000F00&((data)<<8))
#define  KME_IPME_KME_IPME_1C_ipme_32lkup23(data)                                (0x000000F0&((data)<<4))
#define  KME_IPME_KME_IPME_1C_ipme_32lkup22(data)                                (0x0000000F&(data))
#define  KME_IPME_KME_IPME_1C_get_ipme_32lkup29(data)                            ((0xF0000000&(data))>>28)
#define  KME_IPME_KME_IPME_1C_get_ipme_32lkup28(data)                            ((0x0F000000&(data))>>24)
#define  KME_IPME_KME_IPME_1C_get_ipme_32lkup27(data)                            ((0x00F00000&(data))>>20)
#define  KME_IPME_KME_IPME_1C_get_ipme_32lkup26(data)                            ((0x000F0000&(data))>>16)
#define  KME_IPME_KME_IPME_1C_get_ipme_32lkup25(data)                            ((0x0000F000&(data))>>12)
#define  KME_IPME_KME_IPME_1C_get_ipme_32lkup24(data)                            ((0x00000F00&(data))>>8)
#define  KME_IPME_KME_IPME_1C_get_ipme_32lkup23(data)                            ((0x000000F0&(data))>>4)
#define  KME_IPME_KME_IPME_1C_get_ipme_32lkup22(data)                            (0x0000000F&(data))

#define  KME_IPME_KME_IPME_20                                                   0x1809BC20
#define  KME_IPME_KME_IPME_20_reg_addr                                           "0xB809BC20"
#define  KME_IPME_KME_IPME_20_reg                                                0xB809BC20
#define  KME_IPME_KME_IPME_20_inst_addr                                          "0x0008"
#define  set_KME_IPME_KME_IPME_20_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_20_reg)=data)
#define  get_KME_IPME_KME_IPME_20_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_20_reg))
#define  KME_IPME_KME_IPME_20_ipme_nr_curve_shift_bit_shift                      (10)
#define  KME_IPME_KME_IPME_20_ipme_iir_debug_sel_shift                           (8)
#define  KME_IPME_KME_IPME_20_ipme_32lkup31_shift                                (4)
#define  KME_IPME_KME_IPME_20_ipme_32lkup30_shift                                (0)
#define  KME_IPME_KME_IPME_20_ipme_nr_curve_shift_bit_mask                       (0x00003C00)
#define  KME_IPME_KME_IPME_20_ipme_iir_debug_sel_mask                            (0x00000300)
#define  KME_IPME_KME_IPME_20_ipme_32lkup31_mask                                 (0x000000F0)
#define  KME_IPME_KME_IPME_20_ipme_32lkup30_mask                                 (0x0000000F)
#define  KME_IPME_KME_IPME_20_ipme_nr_curve_shift_bit(data)                      (0x00003C00&((data)<<10))
#define  KME_IPME_KME_IPME_20_ipme_iir_debug_sel(data)                           (0x00000300&((data)<<8))
#define  KME_IPME_KME_IPME_20_ipme_32lkup31(data)                                (0x000000F0&((data)<<4))
#define  KME_IPME_KME_IPME_20_ipme_32lkup30(data)                                (0x0000000F&(data))
#define  KME_IPME_KME_IPME_20_get_ipme_nr_curve_shift_bit(data)                  ((0x00003C00&(data))>>10)
#define  KME_IPME_KME_IPME_20_get_ipme_iir_debug_sel(data)                       ((0x00000300&(data))>>8)
#define  KME_IPME_KME_IPME_20_get_ipme_32lkup31(data)                            ((0x000000F0&(data))>>4)
#define  KME_IPME_KME_IPME_20_get_ipme_32lkup30(data)                            (0x0000000F&(data))

#define  KME_IPME_KME_IPME_24                                                   0x1809BC24
#define  KME_IPME_KME_IPME_24_reg_addr                                           "0xB809BC24"
#define  KME_IPME_KME_IPME_24_reg                                                0xB809BC24
#define  KME_IPME_KME_IPME_24_inst_addr                                          "0x0009"
#define  set_KME_IPME_KME_IPME_24_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_24_reg)=data)
#define  get_KME_IPME_KME_IPME_24_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_24_reg))
#define  KME_IPME_KME_IPME_24_ipme_dummy_regs1_shift                             (20)
#define  KME_IPME_KME_IPME_24_ipme_dummy_regs0_shift                             (12)
#define  KME_IPME_KME_IPME_24_ipme_pscaler_v_active_shift                        (0)
#define  KME_IPME_KME_IPME_24_ipme_dummy_regs1_mask                              (0x0FF00000)
#define  KME_IPME_KME_IPME_24_ipme_dummy_regs0_mask                              (0x000FF000)
#define  KME_IPME_KME_IPME_24_ipme_pscaler_v_active_mask                         (0x00000FFF)
#define  KME_IPME_KME_IPME_24_ipme_dummy_regs1(data)                             (0x0FF00000&((data)<<20))
#define  KME_IPME_KME_IPME_24_ipme_dummy_regs0(data)                             (0x000FF000&((data)<<12))
#define  KME_IPME_KME_IPME_24_ipme_pscaler_v_active(data)                        (0x00000FFF&(data))
#define  KME_IPME_KME_IPME_24_get_ipme_dummy_regs1(data)                         ((0x0FF00000&(data))>>20)
#define  KME_IPME_KME_IPME_24_get_ipme_dummy_regs0(data)                         ((0x000FF000&(data))>>12)
#define  KME_IPME_KME_IPME_24_get_ipme_pscaler_v_active(data)                    (0x00000FFF&(data))

#define  KME_IPME_KME_IPME_28                                                   0x1809BC28
#define  KME_IPME_KME_IPME_28_reg_addr                                           "0xB809BC28"
#define  KME_IPME_KME_IPME_28_reg                                                0xB809BC28
#define  KME_IPME_KME_IPME_28_inst_addr                                          "0x000A"
#define  set_KME_IPME_KME_IPME_28_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_28_reg)=data)
#define  get_KME_IPME_KME_IPME_28_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_28_reg))
#define  KME_IPME_KME_IPME_28_ipme_fmdet_diffcount_y4_shift                      (20)
#define  KME_IPME_KME_IPME_28_ipme_fmdet_diffcount_y3_shift                      (15)
#define  KME_IPME_KME_IPME_28_ipme_fmdet_diffcount_y2_shift                      (10)
#define  KME_IPME_KME_IPME_28_ipme_fmdet_diffcount_y1_shift                      (5)
#define  KME_IPME_KME_IPME_28_ipme_fmdet_diffcount_y0_shift                      (0)
#define  KME_IPME_KME_IPME_28_ipme_fmdet_diffcount_y4_mask                       (0x01F00000)
#define  KME_IPME_KME_IPME_28_ipme_fmdet_diffcount_y3_mask                       (0x000F8000)
#define  KME_IPME_KME_IPME_28_ipme_fmdet_diffcount_y2_mask                       (0x00007C00)
#define  KME_IPME_KME_IPME_28_ipme_fmdet_diffcount_y1_mask                       (0x000003E0)
#define  KME_IPME_KME_IPME_28_ipme_fmdet_diffcount_y0_mask                       (0x0000001F)
#define  KME_IPME_KME_IPME_28_ipme_fmdet_diffcount_y4(data)                      (0x01F00000&((data)<<20))
#define  KME_IPME_KME_IPME_28_ipme_fmdet_diffcount_y3(data)                      (0x000F8000&((data)<<15))
#define  KME_IPME_KME_IPME_28_ipme_fmdet_diffcount_y2(data)                      (0x00007C00&((data)<<10))
#define  KME_IPME_KME_IPME_28_ipme_fmdet_diffcount_y1(data)                      (0x000003E0&((data)<<5))
#define  KME_IPME_KME_IPME_28_ipme_fmdet_diffcount_y0(data)                      (0x0000001F&(data))
#define  KME_IPME_KME_IPME_28_get_ipme_fmdet_diffcount_y4(data)                  ((0x01F00000&(data))>>20)
#define  KME_IPME_KME_IPME_28_get_ipme_fmdet_diffcount_y3(data)                  ((0x000F8000&(data))>>15)
#define  KME_IPME_KME_IPME_28_get_ipme_fmdet_diffcount_y2(data)                  ((0x00007C00&(data))>>10)
#define  KME_IPME_KME_IPME_28_get_ipme_fmdet_diffcount_y1(data)                  ((0x000003E0&(data))>>5)
#define  KME_IPME_KME_IPME_28_get_ipme_fmdet_diffcount_y0(data)                  (0x0000001F&(data))

#define  KME_IPME_KME_IPME_2C                                                   0x1809BC2C
#define  KME_IPME_KME_IPME_2C_reg_addr                                           "0xB809BC2C"
#define  KME_IPME_KME_IPME_2C_reg                                                0xB809BC2C
#define  KME_IPME_KME_IPME_2C_inst_addr                                          "0x000B"
#define  set_KME_IPME_KME_IPME_2C_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_2C_reg)=data)
#define  get_KME_IPME_KME_IPME_2C_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_2C_reg))
#define  KME_IPME_KME_IPME_2C_ipme_fmdet_avg_mot_cnt_shift                       (18)
#define  KME_IPME_KME_IPME_2C_ipme_fmdet_film_th_shift                           (10)
#define  KME_IPME_KME_IPME_2C_ipme_fmdet_pxl_coring_shift                        (2)
#define  KME_IPME_KME_IPME_2C_ipme_fmdet_diff_opt_shift                          (0)
#define  KME_IPME_KME_IPME_2C_ipme_fmdet_avg_mot_cnt_mask                        (0x000C0000)
#define  KME_IPME_KME_IPME_2C_ipme_fmdet_film_th_mask                            (0x0003FC00)
#define  KME_IPME_KME_IPME_2C_ipme_fmdet_pxl_coring_mask                         (0x000003FC)
#define  KME_IPME_KME_IPME_2C_ipme_fmdet_diff_opt_mask                           (0x00000003)
#define  KME_IPME_KME_IPME_2C_ipme_fmdet_avg_mot_cnt(data)                       (0x000C0000&((data)<<18))
#define  KME_IPME_KME_IPME_2C_ipme_fmdet_film_th(data)                           (0x0003FC00&((data)<<10))
#define  KME_IPME_KME_IPME_2C_ipme_fmdet_pxl_coring(data)                        (0x000003FC&((data)<<2))
#define  KME_IPME_KME_IPME_2C_ipme_fmdet_diff_opt(data)                          (0x00000003&(data))
#define  KME_IPME_KME_IPME_2C_get_ipme_fmdet_avg_mot_cnt(data)                   ((0x000C0000&(data))>>18)
#define  KME_IPME_KME_IPME_2C_get_ipme_fmdet_film_th(data)                       ((0x0003FC00&(data))>>10)
#define  KME_IPME_KME_IPME_2C_get_ipme_fmdet_pxl_coring(data)                    ((0x000003FC&(data))>>2)
#define  KME_IPME_KME_IPME_2C_get_ipme_fmdet_diff_opt(data)                      (0x00000003&(data))

#define  KME_IPME_KME_IPME_30                                                   0x1809BC30
#define  KME_IPME_KME_IPME_30_reg_addr                                           "0xB809BC30"
#define  KME_IPME_KME_IPME_30_reg                                                0xB809BC30
#define  KME_IPME_KME_IPME_30_inst_addr                                          "0x000C"
#define  set_KME_IPME_KME_IPME_30_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_30_reg)=data)
#define  get_KME_IPME_KME_IPME_30_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_30_reg))
#define  KME_IPME_KME_IPME_30_ipme_fmdet_glb_sml_weight_shift                    (20)
#define  KME_IPME_KME_IPME_30_ipme_fmdet_glb_big_weight_shift                    (16)
#define  KME_IPME_KME_IPME_30_ipme_fmdet_mot_min_shift                           (8)
#define  KME_IPME_KME_IPME_30_ipme_fmdet_weight_region_shift                     (4)
#define  KME_IPME_KME_IPME_30_ipme_fmdet_weight_all_shift                        (0)
#define  KME_IPME_KME_IPME_30_ipme_fmdet_glb_sml_weight_mask                     (0x00F00000)
#define  KME_IPME_KME_IPME_30_ipme_fmdet_glb_big_weight_mask                     (0x000F0000)
#define  KME_IPME_KME_IPME_30_ipme_fmdet_mot_min_mask                            (0x0000FF00)
#define  KME_IPME_KME_IPME_30_ipme_fmdet_weight_region_mask                      (0x000000F0)
#define  KME_IPME_KME_IPME_30_ipme_fmdet_weight_all_mask                         (0x0000000F)
#define  KME_IPME_KME_IPME_30_ipme_fmdet_glb_sml_weight(data)                    (0x00F00000&((data)<<20))
#define  KME_IPME_KME_IPME_30_ipme_fmdet_glb_big_weight(data)                    (0x000F0000&((data)<<16))
#define  KME_IPME_KME_IPME_30_ipme_fmdet_mot_min(data)                           (0x0000FF00&((data)<<8))
#define  KME_IPME_KME_IPME_30_ipme_fmdet_weight_region(data)                     (0x000000F0&((data)<<4))
#define  KME_IPME_KME_IPME_30_ipme_fmdet_weight_all(data)                        (0x0000000F&(data))
#define  KME_IPME_KME_IPME_30_get_ipme_fmdet_glb_sml_weight(data)                ((0x00F00000&(data))>>20)
#define  KME_IPME_KME_IPME_30_get_ipme_fmdet_glb_big_weight(data)                ((0x000F0000&(data))>>16)
#define  KME_IPME_KME_IPME_30_get_ipme_fmdet_mot_min(data)                       ((0x0000FF00&(data))>>8)
#define  KME_IPME_KME_IPME_30_get_ipme_fmdet_weight_region(data)                 ((0x000000F0&(data))>>4)
#define  KME_IPME_KME_IPME_30_get_ipme_fmdet_weight_all(data)                    (0x0000000F&(data))

#define  KME_IPME_KME_IPME_34                                                   0x1809BC34
#define  KME_IPME_KME_IPME_34_reg_addr                                           "0xB809BC34"
#define  KME_IPME_KME_IPME_34_reg                                                0xB809BC34
#define  KME_IPME_KME_IPME_34_inst_addr                                          "0x000D"
#define  set_KME_IPME_KME_IPME_34_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_34_reg)=data)
#define  get_KME_IPME_KME_IPME_34_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_34_reg))
#define  KME_IPME_KME_IPME_34_ipme_fmdet_region1_sml_weight_shift                (12)
#define  KME_IPME_KME_IPME_34_ipme_fmdet_region1_big_weight_shift                (8)
#define  KME_IPME_KME_IPME_34_ipme_fmdet_region0_sml_weight_shift                (4)
#define  KME_IPME_KME_IPME_34_ipme_fmdet_region0_big_weight_shift                (0)
#define  KME_IPME_KME_IPME_34_ipme_fmdet_region1_sml_weight_mask                 (0x0000F000)
#define  KME_IPME_KME_IPME_34_ipme_fmdet_region1_big_weight_mask                 (0x00000F00)
#define  KME_IPME_KME_IPME_34_ipme_fmdet_region0_sml_weight_mask                 (0x000000F0)
#define  KME_IPME_KME_IPME_34_ipme_fmdet_region0_big_weight_mask                 (0x0000000F)
#define  KME_IPME_KME_IPME_34_ipme_fmdet_region1_sml_weight(data)                (0x0000F000&((data)<<12))
#define  KME_IPME_KME_IPME_34_ipme_fmdet_region1_big_weight(data)                (0x00000F00&((data)<<8))
#define  KME_IPME_KME_IPME_34_ipme_fmdet_region0_sml_weight(data)                (0x000000F0&((data)<<4))
#define  KME_IPME_KME_IPME_34_ipme_fmdet_region0_big_weight(data)                (0x0000000F&(data))
#define  KME_IPME_KME_IPME_34_get_ipme_fmdet_region1_sml_weight(data)            ((0x0000F000&(data))>>12)
#define  KME_IPME_KME_IPME_34_get_ipme_fmdet_region1_big_weight(data)            ((0x00000F00&(data))>>8)
#define  KME_IPME_KME_IPME_34_get_ipme_fmdet_region0_sml_weight(data)            ((0x000000F0&(data))>>4)
#define  KME_IPME_KME_IPME_34_get_ipme_fmdet_region0_big_weight(data)            (0x0000000F&(data))

#define  KME_IPME_KME_IPME_38                                                   0x1809BC38
#define  KME_IPME_KME_IPME_38_reg_addr                                           "0xB809BC38"
#define  KME_IPME_KME_IPME_38_reg                                                0xB809BC38
#define  KME_IPME_KME_IPME_38_inst_addr                                          "0x000E"
#define  set_KME_IPME_KME_IPME_38_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_38_reg)=data)
#define  get_KME_IPME_KME_IPME_38_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_38_reg))
#define  KME_IPME_KME_IPME_38_ipme_fmdet_region3_sml_weight_shift                (12)
#define  KME_IPME_KME_IPME_38_ipme_fmdet_region3_big_weight_shift                (8)
#define  KME_IPME_KME_IPME_38_ipme_fmdet_region2_sml_weight_shift                (4)
#define  KME_IPME_KME_IPME_38_ipme_fmdet_region2_big_weight_shift                (0)
#define  KME_IPME_KME_IPME_38_ipme_fmdet_region3_sml_weight_mask                 (0x0000F000)
#define  KME_IPME_KME_IPME_38_ipme_fmdet_region3_big_weight_mask                 (0x00000F00)
#define  KME_IPME_KME_IPME_38_ipme_fmdet_region2_sml_weight_mask                 (0x000000F0)
#define  KME_IPME_KME_IPME_38_ipme_fmdet_region2_big_weight_mask                 (0x0000000F)
#define  KME_IPME_KME_IPME_38_ipme_fmdet_region3_sml_weight(data)                (0x0000F000&((data)<<12))
#define  KME_IPME_KME_IPME_38_ipme_fmdet_region3_big_weight(data)                (0x00000F00&((data)<<8))
#define  KME_IPME_KME_IPME_38_ipme_fmdet_region2_sml_weight(data)                (0x000000F0&((data)<<4))
#define  KME_IPME_KME_IPME_38_ipme_fmdet_region2_big_weight(data)                (0x0000000F&(data))
#define  KME_IPME_KME_IPME_38_get_ipme_fmdet_region3_sml_weight(data)            ((0x0000F000&(data))>>12)
#define  KME_IPME_KME_IPME_38_get_ipme_fmdet_region3_big_weight(data)            ((0x00000F00&(data))>>8)
#define  KME_IPME_KME_IPME_38_get_ipme_fmdet_region2_sml_weight(data)            ((0x000000F0&(data))>>4)
#define  KME_IPME_KME_IPME_38_get_ipme_fmdet_region2_big_weight(data)            (0x0000000F&(data))

#define  KME_IPME_KME_IPME_3C                                                   0x1809BC3C
#define  KME_IPME_KME_IPME_3C_reg_addr                                           "0xB809BC3C"
#define  KME_IPME_KME_IPME_3C_reg                                                0xB809BC3C
#define  KME_IPME_KME_IPME_3C_inst_addr                                          "0x000F"
#define  set_KME_IPME_KME_IPME_3C_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_3C_reg)=data)
#define  get_KME_IPME_KME_IPME_3C_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_3C_reg))
#define  KME_IPME_KME_IPME_3C_ipme_fdet_5region4_en_shift                        (28)
#define  KME_IPME_KME_IPME_3C_ipme_fdet_5region3_en_shift                        (27)
#define  KME_IPME_KME_IPME_3C_ipme_fdet_5region2_en_shift                        (26)
#define  KME_IPME_KME_IPME_3C_ipme_fdet_5region1_en_shift                        (25)
#define  KME_IPME_KME_IPME_3C_ipme_fdet_5region0_en_shift                        (24)
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_quit_prd_th_shift                       (20)
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_quit_th_shift                           (16)
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_enter_film22_cnt_th_shift               (12)
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_enter_film32_cnt_th_shift               (8)
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_region4_sml_weight_shift                (4)
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_region4_big_weight_shift                (0)
#define  KME_IPME_KME_IPME_3C_ipme_fdet_5region4_en_mask                         (0x10000000)
#define  KME_IPME_KME_IPME_3C_ipme_fdet_5region3_en_mask                         (0x08000000)
#define  KME_IPME_KME_IPME_3C_ipme_fdet_5region2_en_mask                         (0x04000000)
#define  KME_IPME_KME_IPME_3C_ipme_fdet_5region1_en_mask                         (0x02000000)
#define  KME_IPME_KME_IPME_3C_ipme_fdet_5region0_en_mask                         (0x01000000)
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_quit_prd_th_mask                        (0x00F00000)
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_quit_th_mask                            (0x000F0000)
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_enter_film22_cnt_th_mask                (0x0000F000)
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_enter_film32_cnt_th_mask                (0x00000F00)
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_region4_sml_weight_mask                 (0x000000F0)
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_region4_big_weight_mask                 (0x0000000F)
#define  KME_IPME_KME_IPME_3C_ipme_fdet_5region4_en(data)                        (0x10000000&((data)<<28))
#define  KME_IPME_KME_IPME_3C_ipme_fdet_5region3_en(data)                        (0x08000000&((data)<<27))
#define  KME_IPME_KME_IPME_3C_ipme_fdet_5region2_en(data)                        (0x04000000&((data)<<26))
#define  KME_IPME_KME_IPME_3C_ipme_fdet_5region1_en(data)                        (0x02000000&((data)<<25))
#define  KME_IPME_KME_IPME_3C_ipme_fdet_5region0_en(data)                        (0x01000000&((data)<<24))
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_quit_prd_th(data)                       (0x00F00000&((data)<<20))
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_quit_th(data)                           (0x000F0000&((data)<<16))
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_enter_film22_cnt_th(data)               (0x0000F000&((data)<<12))
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_enter_film32_cnt_th(data)               (0x00000F00&((data)<<8))
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_region4_sml_weight(data)                (0x000000F0&((data)<<4))
#define  KME_IPME_KME_IPME_3C_ipme_fmdet_region4_big_weight(data)                (0x0000000F&(data))
#define  KME_IPME_KME_IPME_3C_get_ipme_fdet_5region4_en(data)                    ((0x10000000&(data))>>28)
#define  KME_IPME_KME_IPME_3C_get_ipme_fdet_5region3_en(data)                    ((0x08000000&(data))>>27)
#define  KME_IPME_KME_IPME_3C_get_ipme_fdet_5region2_en(data)                    ((0x04000000&(data))>>26)
#define  KME_IPME_KME_IPME_3C_get_ipme_fdet_5region1_en(data)                    ((0x02000000&(data))>>25)
#define  KME_IPME_KME_IPME_3C_get_ipme_fdet_5region0_en(data)                    ((0x01000000&(data))>>24)
#define  KME_IPME_KME_IPME_3C_get_ipme_fmdet_quit_prd_th(data)                   ((0x00F00000&(data))>>20)
#define  KME_IPME_KME_IPME_3C_get_ipme_fmdet_quit_th(data)                       ((0x000F0000&(data))>>16)
#define  KME_IPME_KME_IPME_3C_get_ipme_fmdet_enter_film22_cnt_th(data)           ((0x0000F000&(data))>>12)
#define  KME_IPME_KME_IPME_3C_get_ipme_fmdet_enter_film32_cnt_th(data)           ((0x00000F00&(data))>>8)
#define  KME_IPME_KME_IPME_3C_get_ipme_fmdet_region4_sml_weight(data)            ((0x000000F0&(data))>>4)
#define  KME_IPME_KME_IPME_3C_get_ipme_fmdet_region4_big_weight(data)            (0x0000000F&(data))

#define  KME_IPME_KME_IPME_40                                                   0x1809BC40
#define  KME_IPME_KME_IPME_40_reg_addr                                           "0xB809BC40"
#define  KME_IPME_KME_IPME_40_reg                                                0xB809BC40
#define  KME_IPME_KME_IPME_40_inst_addr                                          "0x0010"
#define  set_KME_IPME_KME_IPME_40_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_40_reg)=data)
#define  get_KME_IPME_KME_IPME_40_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_40_reg))
#define  KME_IPME_KME_IPME_40_ipme_fmdet_5region1_v1_shift                       (10)
#define  KME_IPME_KME_IPME_40_ipme_fmdet_5region1_v0_shift                       (0)
#define  KME_IPME_KME_IPME_40_ipme_fmdet_5region1_v1_mask                        (0x000FFC00)
#define  KME_IPME_KME_IPME_40_ipme_fmdet_5region1_v0_mask                        (0x000003FF)
#define  KME_IPME_KME_IPME_40_ipme_fmdet_5region1_v1(data)                       (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_40_ipme_fmdet_5region1_v0(data)                       (0x000003FF&(data))
#define  KME_IPME_KME_IPME_40_get_ipme_fmdet_5region1_v1(data)                   ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_40_get_ipme_fmdet_5region1_v0(data)                   (0x000003FF&(data))

#define  KME_IPME_KME_IPME_44                                                   0x1809BC44
#define  KME_IPME_KME_IPME_44_reg_addr                                           "0xB809BC44"
#define  KME_IPME_KME_IPME_44_reg                                                0xB809BC44
#define  KME_IPME_KME_IPME_44_inst_addr                                          "0x0011"
#define  set_KME_IPME_KME_IPME_44_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_44_reg)=data)
#define  get_KME_IPME_KME_IPME_44_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_44_reg))
#define  KME_IPME_KME_IPME_44_ipme_fmdet_5region2_v1_shift                       (10)
#define  KME_IPME_KME_IPME_44_ipme_fmdet_5region2_v0_shift                       (0)
#define  KME_IPME_KME_IPME_44_ipme_fmdet_5region2_v1_mask                        (0x000FFC00)
#define  KME_IPME_KME_IPME_44_ipme_fmdet_5region2_v0_mask                        (0x000003FF)
#define  KME_IPME_KME_IPME_44_ipme_fmdet_5region2_v1(data)                       (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_44_ipme_fmdet_5region2_v0(data)                       (0x000003FF&(data))
#define  KME_IPME_KME_IPME_44_get_ipme_fmdet_5region2_v1(data)                   ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_44_get_ipme_fmdet_5region2_v0(data)                   (0x000003FF&(data))

#define  KME_IPME_KME_IPME_48                                                   0x1809BC48
#define  KME_IPME_KME_IPME_48_reg_addr                                           "0xB809BC48"
#define  KME_IPME_KME_IPME_48_reg                                                0xB809BC48
#define  KME_IPME_KME_IPME_48_inst_addr                                          "0x0012"
#define  set_KME_IPME_KME_IPME_48_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_48_reg)=data)
#define  get_KME_IPME_KME_IPME_48_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_48_reg))
#define  KME_IPME_KME_IPME_48_ipme_fmdet_5region3_h1_shift                       (10)
#define  KME_IPME_KME_IPME_48_ipme_fmdet_5region3_h0_shift                       (0)
#define  KME_IPME_KME_IPME_48_ipme_fmdet_5region3_h1_mask                        (0x000FFC00)
#define  KME_IPME_KME_IPME_48_ipme_fmdet_5region3_h0_mask                        (0x000003FF)
#define  KME_IPME_KME_IPME_48_ipme_fmdet_5region3_h1(data)                       (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_48_ipme_fmdet_5region3_h0(data)                       (0x000003FF&(data))
#define  KME_IPME_KME_IPME_48_get_ipme_fmdet_5region3_h1(data)                   ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_48_get_ipme_fmdet_5region3_h0(data)                   (0x000003FF&(data))

#define  KME_IPME_KME_IPME_4C                                                   0x1809BC4C
#define  KME_IPME_KME_IPME_4C_reg_addr                                           "0xB809BC4C"
#define  KME_IPME_KME_IPME_4C_reg                                                0xB809BC4C
#define  KME_IPME_KME_IPME_4C_inst_addr                                          "0x0013"
#define  set_KME_IPME_KME_IPME_4C_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_4C_reg)=data)
#define  get_KME_IPME_KME_IPME_4C_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_4C_reg))
#define  KME_IPME_KME_IPME_4C_ipme_fmdet_5region4_h1_shift                       (10)
#define  KME_IPME_KME_IPME_4C_ipme_fmdet_5region4_h0_shift                       (0)
#define  KME_IPME_KME_IPME_4C_ipme_fmdet_5region4_h1_mask                        (0x000FFC00)
#define  KME_IPME_KME_IPME_4C_ipme_fmdet_5region4_h0_mask                        (0x000003FF)
#define  KME_IPME_KME_IPME_4C_ipme_fmdet_5region4_h1(data)                       (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_4C_ipme_fmdet_5region4_h0(data)                       (0x000003FF&(data))
#define  KME_IPME_KME_IPME_4C_get_ipme_fmdet_5region4_h1(data)                   ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_4C_get_ipme_fmdet_5region4_h0(data)                   (0x000003FF&(data))

#define  KME_IPME_KME_IPME_50                                                   0x1809BC50
#define  KME_IPME_KME_IPME_50_reg_addr                                           "0xB809BC50"
#define  KME_IPME_KME_IPME_50_reg                                                0xB809BC50
#define  KME_IPME_KME_IPME_50_inst_addr                                          "0x0014"
#define  set_KME_IPME_KME_IPME_50_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_50_reg)=data)
#define  get_KME_IPME_KME_IPME_50_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_50_reg))
#define  KME_IPME_KME_IPME_50_ipme_fmdet_5region5_h1_shift                       (10)
#define  KME_IPME_KME_IPME_50_ipme_fmdet_5region5_h0_shift                       (0)
#define  KME_IPME_KME_IPME_50_ipme_fmdet_5region5_h1_mask                        (0x000FFC00)
#define  KME_IPME_KME_IPME_50_ipme_fmdet_5region5_h0_mask                        (0x000003FF)
#define  KME_IPME_KME_IPME_50_ipme_fmdet_5region5_h1(data)                       (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_50_ipme_fmdet_5region5_h0(data)                       (0x000003FF&(data))
#define  KME_IPME_KME_IPME_50_get_ipme_fmdet_5region5_h1(data)                   ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_50_get_ipme_fmdet_5region5_h0(data)                   (0x000003FF&(data))

#define  KME_IPME_KME_IPME_54                                                   0x1809BC54
#define  KME_IPME_KME_IPME_54_reg_addr                                           "0xB809BC54"
#define  KME_IPME_KME_IPME_54_reg                                                0xB809BC54
#define  KME_IPME_KME_IPME_54_inst_addr                                          "0x0015"
#define  set_KME_IPME_KME_IPME_54_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_54_reg)=data)
#define  get_KME_IPME_KME_IPME_54_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_54_reg))
#define  KME_IPME_KME_IPME_54_ipme_fmdet_5region5_v1_shift                       (10)
#define  KME_IPME_KME_IPME_54_ipme_fmdet_5region5_v0_shift                       (0)
#define  KME_IPME_KME_IPME_54_ipme_fmdet_5region5_v1_mask                        (0x000FFC00)
#define  KME_IPME_KME_IPME_54_ipme_fmdet_5region5_v0_mask                        (0x000003FF)
#define  KME_IPME_KME_IPME_54_ipme_fmdet_5region5_v1(data)                       (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_54_ipme_fmdet_5region5_v0(data)                       (0x000003FF&(data))
#define  KME_IPME_KME_IPME_54_get_ipme_fmdet_5region5_v1(data)                   ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_54_get_ipme_fmdet_5region5_v0(data)                   (0x000003FF&(data))

#define  KME_IPME_KME_IPME_58                                                   0x1809BC58
#define  KME_IPME_KME_IPME_58_reg_addr                                           "0xB809BC58"
#define  KME_IPME_KME_IPME_58_reg                                                0xB809BC58
#define  KME_IPME_KME_IPME_58_inst_addr                                          "0x0016"
#define  set_KME_IPME_KME_IPME_58_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_58_reg)=data)
#define  get_KME_IPME_KME_IPME_58_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_58_reg))
#define  KME_IPME_KME_IPME_58_ipme_fmdet_12region_h1_shift                       (10)
#define  KME_IPME_KME_IPME_58_ipme_fmdet_12region_h0_shift                       (0)
#define  KME_IPME_KME_IPME_58_ipme_fmdet_12region_h1_mask                        (0x000FFC00)
#define  KME_IPME_KME_IPME_58_ipme_fmdet_12region_h0_mask                        (0x000003FF)
#define  KME_IPME_KME_IPME_58_ipme_fmdet_12region_h1(data)                       (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_58_ipme_fmdet_12region_h0(data)                       (0x000003FF&(data))
#define  KME_IPME_KME_IPME_58_get_ipme_fmdet_12region_h1(data)                   ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_58_get_ipme_fmdet_12region_h0(data)                   (0x000003FF&(data))

#define  KME_IPME_KME_IPME_5C                                                   0x1809BC5C
#define  KME_IPME_KME_IPME_5C_reg_addr                                           "0xB809BC5C"
#define  KME_IPME_KME_IPME_5C_reg                                                0xB809BC5C
#define  KME_IPME_KME_IPME_5C_inst_addr                                          "0x0017"
#define  set_KME_IPME_KME_IPME_5C_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_5C_reg)=data)
#define  get_KME_IPME_KME_IPME_5C_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_5C_reg))
#define  KME_IPME_KME_IPME_5C_ipme_fmdet_12region_h3_shift                       (10)
#define  KME_IPME_KME_IPME_5C_ipme_fmdet_12region_h2_shift                       (0)
#define  KME_IPME_KME_IPME_5C_ipme_fmdet_12region_h3_mask                        (0x000FFC00)
#define  KME_IPME_KME_IPME_5C_ipme_fmdet_12region_h2_mask                        (0x000003FF)
#define  KME_IPME_KME_IPME_5C_ipme_fmdet_12region_h3(data)                       (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_5C_ipme_fmdet_12region_h2(data)                       (0x000003FF&(data))
#define  KME_IPME_KME_IPME_5C_get_ipme_fmdet_12region_h3(data)                   ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_5C_get_ipme_fmdet_12region_h2(data)                   (0x000003FF&(data))

#define  KME_IPME_KME_IPME_60                                                   0x1809BC60
#define  KME_IPME_KME_IPME_60_reg_addr                                           "0xB809BC60"
#define  KME_IPME_KME_IPME_60_reg                                                0xB809BC60
#define  KME_IPME_KME_IPME_60_inst_addr                                          "0x0018"
#define  set_KME_IPME_KME_IPME_60_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_60_reg)=data)
#define  get_KME_IPME_KME_IPME_60_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_60_reg))
#define  KME_IPME_KME_IPME_60_ipme_fmdet_12region_v0_shift                       (10)
#define  KME_IPME_KME_IPME_60_ipme_fmdet_12region_h4_shift                       (0)
#define  KME_IPME_KME_IPME_60_ipme_fmdet_12region_v0_mask                        (0x000FFC00)
#define  KME_IPME_KME_IPME_60_ipme_fmdet_12region_h4_mask                        (0x000003FF)
#define  KME_IPME_KME_IPME_60_ipme_fmdet_12region_v0(data)                       (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_60_ipme_fmdet_12region_h4(data)                       (0x000003FF&(data))
#define  KME_IPME_KME_IPME_60_get_ipme_fmdet_12region_v0(data)                   ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_60_get_ipme_fmdet_12region_h4(data)                   (0x000003FF&(data))

#define  KME_IPME_KME_IPME_64                                                   0x1809BC64
#define  KME_IPME_KME_IPME_64_reg_addr                                           "0xB809BC64"
#define  KME_IPME_KME_IPME_64_reg                                                0xB809BC64
#define  KME_IPME_KME_IPME_64_inst_addr                                          "0x0019"
#define  set_KME_IPME_KME_IPME_64_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_64_reg)=data)
#define  get_KME_IPME_KME_IPME_64_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_64_reg))
#define  KME_IPME_KME_IPME_64_ipme_fmdet_12region_v2_shift                       (10)
#define  KME_IPME_KME_IPME_64_ipme_fmdet_12region_v1_shift                       (0)
#define  KME_IPME_KME_IPME_64_ipme_fmdet_12region_v2_mask                        (0x000FFC00)
#define  KME_IPME_KME_IPME_64_ipme_fmdet_12region_v1_mask                        (0x000003FF)
#define  KME_IPME_KME_IPME_64_ipme_fmdet_12region_v2(data)                       (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_64_ipme_fmdet_12region_v1(data)                       (0x000003FF&(data))
#define  KME_IPME_KME_IPME_64_get_ipme_fmdet_12region_v2(data)                   ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_64_get_ipme_fmdet_12region_v1(data)                   (0x000003FF&(data))

#define  KME_IPME_KME_IPME_68                                                   0x1809BC68
#define  KME_IPME_KME_IPME_68_reg_addr                                           "0xB809BC68"
#define  KME_IPME_KME_IPME_68_reg                                                0xB809BC68
#define  KME_IPME_KME_IPME_68_inst_addr                                          "0x001A"
#define  set_KME_IPME_KME_IPME_68_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_68_reg)=data)
#define  get_KME_IPME_KME_IPME_68_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_68_reg))
#define  KME_IPME_KME_IPME_68_ipme_fmdet_16region_v4_shift                       (10)
#define  KME_IPME_KME_IPME_68_ipme_fmdet_12region_v3_shift                       (0)
#define  KME_IPME_KME_IPME_68_ipme_fmdet_16region_v4_mask                        (0x000FFC00)
#define  KME_IPME_KME_IPME_68_ipme_fmdet_12region_v3_mask                        (0x000003FF)
#define  KME_IPME_KME_IPME_68_ipme_fmdet_16region_v4(data)                       (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_68_ipme_fmdet_12region_v3(data)                       (0x000003FF&(data))
#define  KME_IPME_KME_IPME_68_get_ipme_fmdet_16region_v4(data)                   ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_68_get_ipme_fmdet_12region_v3(data)                   (0x000003FF&(data))

#define  KME_IPME_KME_IPME_6C                                                   0x1809BC6C
#define  KME_IPME_KME_IPME_6C_reg_addr                                           "0xB809BC6C"
#define  KME_IPME_KME_IPME_6C_reg                                                0xB809BC6C
#define  KME_IPME_KME_IPME_6C_inst_addr                                          "0x001B"
#define  set_KME_IPME_KME_IPME_6C_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_6C_reg)=data)
#define  get_KME_IPME_KME_IPME_6C_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_6C_reg))
#define  KME_IPME_KME_IPME_6C_ipme_fmdet_4region1_h1_shift                       (11)
#define  KME_IPME_KME_IPME_6C_ipme_fmdet_4region1_h0_shift                       (1)
#define  KME_IPME_KME_IPME_6C_ipme_fmdet_4region1_enable_shift                   (0)
#define  KME_IPME_KME_IPME_6C_ipme_fmdet_4region1_h1_mask                        (0x001FF800)
#define  KME_IPME_KME_IPME_6C_ipme_fmdet_4region1_h0_mask                        (0x000007FE)
#define  KME_IPME_KME_IPME_6C_ipme_fmdet_4region1_enable_mask                    (0x00000001)
#define  KME_IPME_KME_IPME_6C_ipme_fmdet_4region1_h1(data)                       (0x001FF800&((data)<<11))
#define  KME_IPME_KME_IPME_6C_ipme_fmdet_4region1_h0(data)                       (0x000007FE&((data)<<1))
#define  KME_IPME_KME_IPME_6C_ipme_fmdet_4region1_enable(data)                   (0x00000001&(data))
#define  KME_IPME_KME_IPME_6C_get_ipme_fmdet_4region1_h1(data)                   ((0x001FF800&(data))>>11)
#define  KME_IPME_KME_IPME_6C_get_ipme_fmdet_4region1_h0(data)                   ((0x000007FE&(data))>>1)
#define  KME_IPME_KME_IPME_6C_get_ipme_fmdet_4region1_enable(data)               (0x00000001&(data))

#define  KME_IPME_KME_IPME_70                                                   0x1809BC70
#define  KME_IPME_KME_IPME_70_reg_addr                                           "0xB809BC70"
#define  KME_IPME_KME_IPME_70_reg                                                0xB809BC70
#define  KME_IPME_KME_IPME_70_inst_addr                                          "0x001C"
#define  set_KME_IPME_KME_IPME_70_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_70_reg)=data)
#define  get_KME_IPME_KME_IPME_70_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_70_reg))
#define  KME_IPME_KME_IPME_70_ipme_fmdet_4region1_v1_shift                       (10)
#define  KME_IPME_KME_IPME_70_ipme_fmdet_4region1_v0_shift                       (0)
#define  KME_IPME_KME_IPME_70_ipme_fmdet_4region1_v1_mask                        (0x000FFC00)
#define  KME_IPME_KME_IPME_70_ipme_fmdet_4region1_v0_mask                        (0x000003FF)
#define  KME_IPME_KME_IPME_70_ipme_fmdet_4region1_v1(data)                       (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_70_ipme_fmdet_4region1_v0(data)                       (0x000003FF&(data))
#define  KME_IPME_KME_IPME_70_get_ipme_fmdet_4region1_v1(data)                   ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_70_get_ipme_fmdet_4region1_v0(data)                   (0x000003FF&(data))

#define  KME_IPME_KME_IPME_74                                                   0x1809BC74
#define  KME_IPME_KME_IPME_74_reg_addr                                           "0xB809BC74"
#define  KME_IPME_KME_IPME_74_reg                                                0xB809BC74
#define  KME_IPME_KME_IPME_74_inst_addr                                          "0x001D"
#define  set_KME_IPME_KME_IPME_74_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_74_reg)=data)
#define  get_KME_IPME_KME_IPME_74_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_74_reg))
#define  KME_IPME_KME_IPME_74_ipme_fmdet_4region2_h1_shift                       (11)
#define  KME_IPME_KME_IPME_74_ipme_fmdet_4region2_h0_shift                       (1)
#define  KME_IPME_KME_IPME_74_ipme_fmdet_4region2_enable_shift                   (0)
#define  KME_IPME_KME_IPME_74_ipme_fmdet_4region2_h1_mask                        (0x001FF800)
#define  KME_IPME_KME_IPME_74_ipme_fmdet_4region2_h0_mask                        (0x000007FE)
#define  KME_IPME_KME_IPME_74_ipme_fmdet_4region2_enable_mask                    (0x00000001)
#define  KME_IPME_KME_IPME_74_ipme_fmdet_4region2_h1(data)                       (0x001FF800&((data)<<11))
#define  KME_IPME_KME_IPME_74_ipme_fmdet_4region2_h0(data)                       (0x000007FE&((data)<<1))
#define  KME_IPME_KME_IPME_74_ipme_fmdet_4region2_enable(data)                   (0x00000001&(data))
#define  KME_IPME_KME_IPME_74_get_ipme_fmdet_4region2_h1(data)                   ((0x001FF800&(data))>>11)
#define  KME_IPME_KME_IPME_74_get_ipme_fmdet_4region2_h0(data)                   ((0x000007FE&(data))>>1)
#define  KME_IPME_KME_IPME_74_get_ipme_fmdet_4region2_enable(data)               (0x00000001&(data))

#define  KME_IPME_KME_IPME_78                                                   0x1809BC78
#define  KME_IPME_KME_IPME_78_reg_addr                                           "0xB809BC78"
#define  KME_IPME_KME_IPME_78_reg                                                0xB809BC78
#define  KME_IPME_KME_IPME_78_inst_addr                                          "0x001E"
#define  set_KME_IPME_KME_IPME_78_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_78_reg)=data)
#define  get_KME_IPME_KME_IPME_78_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_78_reg))
#define  KME_IPME_KME_IPME_78_ipme_fmdet_4region2_v1_shift                       (10)
#define  KME_IPME_KME_IPME_78_ipme_fmdet_4region2_v0_shift                       (0)
#define  KME_IPME_KME_IPME_78_ipme_fmdet_4region2_v1_mask                        (0x000FFC00)
#define  KME_IPME_KME_IPME_78_ipme_fmdet_4region2_v0_mask                        (0x000003FF)
#define  KME_IPME_KME_IPME_78_ipme_fmdet_4region2_v1(data)                       (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_78_ipme_fmdet_4region2_v0(data)                       (0x000003FF&(data))
#define  KME_IPME_KME_IPME_78_get_ipme_fmdet_4region2_v1(data)                   ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_78_get_ipme_fmdet_4region2_v0(data)                   (0x000003FF&(data))

#define  KME_IPME_KME_IPME_7C                                                   0x1809BC7C
#define  KME_IPME_KME_IPME_7C_reg_addr                                           "0xB809BC7C"
#define  KME_IPME_KME_IPME_7C_reg                                                0xB809BC7C
#define  KME_IPME_KME_IPME_7C_inst_addr                                          "0x001F"
#define  set_KME_IPME_KME_IPME_7C_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_7C_reg)=data)
#define  get_KME_IPME_KME_IPME_7C_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_7C_reg))
#define  KME_IPME_KME_IPME_7C_ipme_fmdet_4region3_h1_shift                       (11)
#define  KME_IPME_KME_IPME_7C_ipme_fmdet_4region3_h0_shift                       (1)
#define  KME_IPME_KME_IPME_7C_ipme_fmdet_4region3_enable_shift                   (0)
#define  KME_IPME_KME_IPME_7C_ipme_fmdet_4region3_h1_mask                        (0x001FF800)
#define  KME_IPME_KME_IPME_7C_ipme_fmdet_4region3_h0_mask                        (0x000007FE)
#define  KME_IPME_KME_IPME_7C_ipme_fmdet_4region3_enable_mask                    (0x00000001)
#define  KME_IPME_KME_IPME_7C_ipme_fmdet_4region3_h1(data)                       (0x001FF800&((data)<<11))
#define  KME_IPME_KME_IPME_7C_ipme_fmdet_4region3_h0(data)                       (0x000007FE&((data)<<1))
#define  KME_IPME_KME_IPME_7C_ipme_fmdet_4region3_enable(data)                   (0x00000001&(data))
#define  KME_IPME_KME_IPME_7C_get_ipme_fmdet_4region3_h1(data)                   ((0x001FF800&(data))>>11)
#define  KME_IPME_KME_IPME_7C_get_ipme_fmdet_4region3_h0(data)                   ((0x000007FE&(data))>>1)
#define  KME_IPME_KME_IPME_7C_get_ipme_fmdet_4region3_enable(data)               (0x00000001&(data))

#define  KME_IPME_KME_IPME_80                                                   0x1809BC80
#define  KME_IPME_KME_IPME_80_reg_addr                                           "0xB809BC80"
#define  KME_IPME_KME_IPME_80_reg                                                0xB809BC80
#define  KME_IPME_KME_IPME_80_inst_addr                                          "0x0020"
#define  set_KME_IPME_KME_IPME_80_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_80_reg)=data)
#define  get_KME_IPME_KME_IPME_80_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_80_reg))
#define  KME_IPME_KME_IPME_80_ipme_fmdet_4region3_v1_shift                       (10)
#define  KME_IPME_KME_IPME_80_ipme_fmdet_4region3_v0_shift                       (0)
#define  KME_IPME_KME_IPME_80_ipme_fmdet_4region3_v1_mask                        (0x000FFC00)
#define  KME_IPME_KME_IPME_80_ipme_fmdet_4region3_v0_mask                        (0x000003FF)
#define  KME_IPME_KME_IPME_80_ipme_fmdet_4region3_v1(data)                       (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_80_ipme_fmdet_4region3_v0(data)                       (0x000003FF&(data))
#define  KME_IPME_KME_IPME_80_get_ipme_fmdet_4region3_v1(data)                   ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_80_get_ipme_fmdet_4region3_v0(data)                   (0x000003FF&(data))

#define  KME_IPME_KME_IPME_84                                                   0x1809BC84
#define  KME_IPME_KME_IPME_84_reg_addr                                           "0xB809BC84"
#define  KME_IPME_KME_IPME_84_reg                                                0xB809BC84
#define  KME_IPME_KME_IPME_84_inst_addr                                          "0x0021"
#define  set_KME_IPME_KME_IPME_84_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_84_reg)=data)
#define  get_KME_IPME_KME_IPME_84_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_84_reg))
#define  KME_IPME_KME_IPME_84_ipme_fmdet_4region4_h1_shift                       (11)
#define  KME_IPME_KME_IPME_84_ipme_fmdet_4region4_h0_shift                       (1)
#define  KME_IPME_KME_IPME_84_ipme_fmdet_4region4_enable_shift                   (0)
#define  KME_IPME_KME_IPME_84_ipme_fmdet_4region4_h1_mask                        (0x001FF800)
#define  KME_IPME_KME_IPME_84_ipme_fmdet_4region4_h0_mask                        (0x000007FE)
#define  KME_IPME_KME_IPME_84_ipme_fmdet_4region4_enable_mask                    (0x00000001)
#define  KME_IPME_KME_IPME_84_ipme_fmdet_4region4_h1(data)                       (0x001FF800&((data)<<11))
#define  KME_IPME_KME_IPME_84_ipme_fmdet_4region4_h0(data)                       (0x000007FE&((data)<<1))
#define  KME_IPME_KME_IPME_84_ipme_fmdet_4region4_enable(data)                   (0x00000001&(data))
#define  KME_IPME_KME_IPME_84_get_ipme_fmdet_4region4_h1(data)                   ((0x001FF800&(data))>>11)
#define  KME_IPME_KME_IPME_84_get_ipme_fmdet_4region4_h0(data)                   ((0x000007FE&(data))>>1)
#define  KME_IPME_KME_IPME_84_get_ipme_fmdet_4region4_enable(data)               (0x00000001&(data))

#define  KME_IPME_KME_IPME_88                                                   0x1809BC88
#define  KME_IPME_KME_IPME_88_reg_addr                                           "0xB809BC88"
#define  KME_IPME_KME_IPME_88_reg                                                0xB809BC88
#define  KME_IPME_KME_IPME_88_inst_addr                                          "0x0022"
#define  set_KME_IPME_KME_IPME_88_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_88_reg)=data)
#define  get_KME_IPME_KME_IPME_88_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_88_reg))
#define  KME_IPME_KME_IPME_88_kme_ipme_top_3dfs_lr_shift                         (20)
#define  KME_IPME_KME_IPME_88_ipme_fmdet_4region4_v1_shift                       (10)
#define  KME_IPME_KME_IPME_88_ipme_fmdet_4region4_v0_shift                       (0)
#define  KME_IPME_KME_IPME_88_kme_ipme_top_3dfs_lr_mask                          (0x00100000)
#define  KME_IPME_KME_IPME_88_ipme_fmdet_4region4_v1_mask                        (0x000FFC00)
#define  KME_IPME_KME_IPME_88_ipme_fmdet_4region4_v0_mask                        (0x000003FF)
#define  KME_IPME_KME_IPME_88_kme_ipme_top_3dfs_lr(data)                         (0x00100000&((data)<<20))
#define  KME_IPME_KME_IPME_88_ipme_fmdet_4region4_v1(data)                       (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_88_ipme_fmdet_4region4_v0(data)                       (0x000003FF&(data))
#define  KME_IPME_KME_IPME_88_get_kme_ipme_top_3dfs_lr(data)                     ((0x00100000&(data))>>20)
#define  KME_IPME_KME_IPME_88_get_ipme_fmdet_4region4_v1(data)                   ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_88_get_ipme_fmdet_4region4_v0(data)                   (0x000003FF&(data))

#define  KME_IPME_KME_IPME_8C                                                   0x1809BC8C
#define  KME_IPME_KME_IPME_8C_reg_addr                                           "0xB809BC8C"
#define  KME_IPME_KME_IPME_8C_reg                                                0xB809BC8C
#define  KME_IPME_KME_IPME_8C_inst_addr                                          "0x0023"
#define  set_KME_IPME_KME_IPME_8C_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_8C_reg)=data)
#define  get_KME_IPME_KME_IPME_8C_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_8C_reg))
#define  KME_IPME_KME_IPME_8C_ipme_h_flp_alp2_shift                              (18)
#define  KME_IPME_KME_IPME_8C_ipme_h_flp_alp1_shift                              (9)
#define  KME_IPME_KME_IPME_8C_ipme_h_flp_alp0_shift                              (0)
#define  KME_IPME_KME_IPME_8C_ipme_h_flp_alp2_mask                               (0x07FC0000)
#define  KME_IPME_KME_IPME_8C_ipme_h_flp_alp1_mask                               (0x0003FE00)
#define  KME_IPME_KME_IPME_8C_ipme_h_flp_alp0_mask                               (0x000001FF)
#define  KME_IPME_KME_IPME_8C_ipme_h_flp_alp2(data)                              (0x07FC0000&((data)<<18))
#define  KME_IPME_KME_IPME_8C_ipme_h_flp_alp1(data)                              (0x0003FE00&((data)<<9))
#define  KME_IPME_KME_IPME_8C_ipme_h_flp_alp0(data)                              (0x000001FF&(data))
#define  KME_IPME_KME_IPME_8C_get_ipme_h_flp_alp2(data)                          ((0x07FC0000&(data))>>18)
#define  KME_IPME_KME_IPME_8C_get_ipme_h_flp_alp1(data)                          ((0x0003FE00&(data))>>9)
#define  KME_IPME_KME_IPME_8C_get_ipme_h_flp_alp0(data)                          (0x000001FF&(data))

#define  KME_IPME_KME_IPME_90                                                   0x1809BC90
#define  KME_IPME_KME_IPME_90_reg_addr                                           "0xB809BC90"
#define  KME_IPME_KME_IPME_90_reg                                                0xB809BC90
#define  KME_IPME_KME_IPME_90_inst_addr                                          "0x0024"
#define  set_KME_IPME_KME_IPME_90_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_90_reg)=data)
#define  get_KME_IPME_KME_IPME_90_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_90_reg))
#define  KME_IPME_KME_IPME_90_ipme_h_flp_alp5_shift                              (18)
#define  KME_IPME_KME_IPME_90_ipme_h_flp_alp4_shift                              (9)
#define  KME_IPME_KME_IPME_90_ipme_h_flp_alp3_shift                              (0)
#define  KME_IPME_KME_IPME_90_ipme_h_flp_alp5_mask                               (0x07FC0000)
#define  KME_IPME_KME_IPME_90_ipme_h_flp_alp4_mask                               (0x0003FE00)
#define  KME_IPME_KME_IPME_90_ipme_h_flp_alp3_mask                               (0x000001FF)
#define  KME_IPME_KME_IPME_90_ipme_h_flp_alp5(data)                              (0x07FC0000&((data)<<18))
#define  KME_IPME_KME_IPME_90_ipme_h_flp_alp4(data)                              (0x0003FE00&((data)<<9))
#define  KME_IPME_KME_IPME_90_ipme_h_flp_alp3(data)                              (0x000001FF&(data))
#define  KME_IPME_KME_IPME_90_get_ipme_h_flp_alp5(data)                          ((0x07FC0000&(data))>>18)
#define  KME_IPME_KME_IPME_90_get_ipme_h_flp_alp4(data)                          ((0x0003FE00&(data))>>9)
#define  KME_IPME_KME_IPME_90_get_ipme_h_flp_alp3(data)                          (0x000001FF&(data))

#define  KME_IPME_KME_IPME_94                                                   0x1809BC94
#define  KME_IPME_KME_IPME_94_reg_addr                                           "0xB809BC94"
#define  KME_IPME_KME_IPME_94_reg                                                0xB809BC94
#define  KME_IPME_KME_IPME_94_inst_addr                                          "0x0025"
#define  set_KME_IPME_KME_IPME_94_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_94_reg)=data)
#define  get_KME_IPME_KME_IPME_94_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_94_reg))
#define  KME_IPME_KME_IPME_94_ipme_v_flp_alp1_shift                              (18)
#define  KME_IPME_KME_IPME_94_ipme_v_flp_alp0_shift                              (9)
#define  KME_IPME_KME_IPME_94_ipme_h_flp_alp6_shift                              (0)
#define  KME_IPME_KME_IPME_94_ipme_v_flp_alp1_mask                               (0x07FC0000)
#define  KME_IPME_KME_IPME_94_ipme_v_flp_alp0_mask                               (0x0003FE00)
#define  KME_IPME_KME_IPME_94_ipme_h_flp_alp6_mask                               (0x000001FF)
#define  KME_IPME_KME_IPME_94_ipme_v_flp_alp1(data)                              (0x07FC0000&((data)<<18))
#define  KME_IPME_KME_IPME_94_ipme_v_flp_alp0(data)                              (0x0003FE00&((data)<<9))
#define  KME_IPME_KME_IPME_94_ipme_h_flp_alp6(data)                              (0x000001FF&(data))
#define  KME_IPME_KME_IPME_94_get_ipme_v_flp_alp1(data)                          ((0x07FC0000&(data))>>18)
#define  KME_IPME_KME_IPME_94_get_ipme_v_flp_alp0(data)                          ((0x0003FE00&(data))>>9)
#define  KME_IPME_KME_IPME_94_get_ipme_h_flp_alp6(data)                          (0x000001FF&(data))

#define  KME_IPME_KME_IPME_98                                                   0x1809BC98
#define  KME_IPME_KME_IPME_98_reg_addr                                           "0xB809BC98"
#define  KME_IPME_KME_IPME_98_reg                                                0xB809BC98
#define  KME_IPME_KME_IPME_98_inst_addr                                          "0x0026"
#define  set_KME_IPME_KME_IPME_98_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_98_reg)=data)
#define  get_KME_IPME_KME_IPME_98_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_98_reg))
#define  KME_IPME_KME_IPME_98_ipme_v_flp_alp4_shift                              (18)
#define  KME_IPME_KME_IPME_98_ipme_v_flp_alp3_shift                              (9)
#define  KME_IPME_KME_IPME_98_ipme_v_flp_alp2_shift                              (0)
#define  KME_IPME_KME_IPME_98_ipme_v_flp_alp4_mask                               (0x07FC0000)
#define  KME_IPME_KME_IPME_98_ipme_v_flp_alp3_mask                               (0x0003FE00)
#define  KME_IPME_KME_IPME_98_ipme_v_flp_alp2_mask                               (0x000001FF)
#define  KME_IPME_KME_IPME_98_ipme_v_flp_alp4(data)                              (0x07FC0000&((data)<<18))
#define  KME_IPME_KME_IPME_98_ipme_v_flp_alp3(data)                              (0x0003FE00&((data)<<9))
#define  KME_IPME_KME_IPME_98_ipme_v_flp_alp2(data)                              (0x000001FF&(data))
#define  KME_IPME_KME_IPME_98_get_ipme_v_flp_alp4(data)                          ((0x07FC0000&(data))>>18)
#define  KME_IPME_KME_IPME_98_get_ipme_v_flp_alp3(data)                          ((0x0003FE00&(data))>>9)
#define  KME_IPME_KME_IPME_98_get_ipme_v_flp_alp2(data)                          (0x000001FF&(data))

#define  KME_IPME_KME_IPME_9C                                                   0x1809BC9C
#define  KME_IPME_KME_IPME_9C_reg_addr                                           "0xB809BC9C"
#define  KME_IPME_KME_IPME_9C_reg                                                0xB809BC9C
#define  KME_IPME_KME_IPME_9C_inst_addr                                          "0x0027"
#define  set_KME_IPME_KME_IPME_9C_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_9C_reg)=data)
#define  get_KME_IPME_KME_IPME_9C_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_9C_reg))
#define  KME_IPME_KME_IPME_9C_ipme_fmdet_rim_h1_shift                            (10)
#define  KME_IPME_KME_IPME_9C_ipme_fmdet_rim_h0_shift                            (0)
#define  KME_IPME_KME_IPME_9C_ipme_fmdet_rim_h1_mask                             (0x000FFC00)
#define  KME_IPME_KME_IPME_9C_ipme_fmdet_rim_h0_mask                             (0x000003FF)
#define  KME_IPME_KME_IPME_9C_ipme_fmdet_rim_h1(data)                            (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_9C_ipme_fmdet_rim_h0(data)                            (0x000003FF&(data))
#define  KME_IPME_KME_IPME_9C_get_ipme_fmdet_rim_h1(data)                        ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_9C_get_ipme_fmdet_rim_h0(data)                        (0x000003FF&(data))

#define  KME_IPME_KME_IPME_A0                                                   0x1809BCA0
#define  KME_IPME_KME_IPME_A0_reg_addr                                           "0xB809BCA0"
#define  KME_IPME_KME_IPME_A0_reg                                                0xB809BCA0
#define  KME_IPME_KME_IPME_A0_inst_addr                                          "0x0028"
#define  set_KME_IPME_KME_IPME_A0_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_A0_reg)=data)
#define  get_KME_IPME_KME_IPME_A0_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_A0_reg))
#define  KME_IPME_KME_IPME_A0_ipme_fmdet_rim_v1_shift                            (10)
#define  KME_IPME_KME_IPME_A0_ipme_fmdet_rim_v0_shift                            (0)
#define  KME_IPME_KME_IPME_A0_ipme_fmdet_rim_v1_mask                             (0x000FFC00)
#define  KME_IPME_KME_IPME_A0_ipme_fmdet_rim_v0_mask                             (0x000003FF)
#define  KME_IPME_KME_IPME_A0_ipme_fmdet_rim_v1(data)                            (0x000FFC00&((data)<<10))
#define  KME_IPME_KME_IPME_A0_ipme_fmdet_rim_v0(data)                            (0x000003FF&(data))
#define  KME_IPME_KME_IPME_A0_get_ipme_fmdet_rim_v1(data)                        ((0x000FFC00&(data))>>10)
#define  KME_IPME_KME_IPME_A0_get_ipme_fmdet_rim_v0(data)                        (0x000003FF&(data))

#define  KME_IPME_KME_IPME_A4                                                   0x1809BCA4
#define  KME_IPME_KME_IPME_A4_reg_addr                                           "0xB809BCA4"
#define  KME_IPME_KME_IPME_A4_reg                                                0xB809BCA4
#define  KME_IPME_KME_IPME_A4_inst_addr                                          "0x0029"
#define  set_KME_IPME_KME_IPME_A4_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_A4_reg)=data)
#define  get_KME_IPME_KME_IPME_A4_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_A4_reg))
#define  KME_IPME_KME_IPME_A4_regr_ipme_fdet_mot_h0_rim_shift                    (0)
#define  KME_IPME_KME_IPME_A4_regr_ipme_fdet_mot_h0_rim_mask                     (0x07FFFFFF)
#define  KME_IPME_KME_IPME_A4_regr_ipme_fdet_mot_h0_rim(data)                    (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_A4_get_regr_ipme_fdet_mot_h0_rim(data)                (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_A8                                                   0x1809BCA8
#define  KME_IPME_KME_IPME_A8_reg_addr                                           "0xB809BCA8"
#define  KME_IPME_KME_IPME_A8_reg                                                0xB809BCA8
#define  KME_IPME_KME_IPME_A8_inst_addr                                          "0x002A"
#define  set_KME_IPME_KME_IPME_A8_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_A8_reg)=data)
#define  get_KME_IPME_KME_IPME_A8_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_A8_reg))
#define  KME_IPME_KME_IPME_A8_regr_ipme_fdet_mot_all_shift                       (0)
#define  KME_IPME_KME_IPME_A8_regr_ipme_fdet_mot_all_mask                        (0x07FFFFFF)
#define  KME_IPME_KME_IPME_A8_regr_ipme_fdet_mot_all(data)                       (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_A8_get_regr_ipme_fdet_mot_all(data)                   (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_AC                                                   0x1809BCAC
#define  KME_IPME_KME_IPME_AC_reg_addr                                           "0xB809BCAC"
#define  KME_IPME_KME_IPME_AC_reg                                                0xB809BCAC
#define  KME_IPME_KME_IPME_AC_inst_addr                                          "0x002B"
#define  set_KME_IPME_KME_IPME_AC_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_AC_reg)=data)
#define  get_KME_IPME_KME_IPME_AC_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_AC_reg))
#define  KME_IPME_KME_IPME_AC_regr_ipme_fdet_mot_h1_rim_shift                    (0)
#define  KME_IPME_KME_IPME_AC_regr_ipme_fdet_mot_h1_rim_mask                     (0x07FFFFFF)
#define  KME_IPME_KME_IPME_AC_regr_ipme_fdet_mot_h1_rim(data)                    (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_AC_get_regr_ipme_fdet_mot_h1_rim(data)                (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_B0                                                   0x1809BCB0
#define  KME_IPME_KME_IPME_B0_reg_addr                                           "0xB809BCB0"
#define  KME_IPME_KME_IPME_B0_reg                                                0xB809BCB0
#define  KME_IPME_KME_IPME_B0_inst_addr                                          "0x002C"
#define  set_KME_IPME_KME_IPME_B0_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_B0_reg)=data)
#define  get_KME_IPME_KME_IPME_B0_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_B0_reg))
#define  KME_IPME_KME_IPME_B0_regr_ipme_fdet_mot_5region1_shift                  (0)
#define  KME_IPME_KME_IPME_B0_regr_ipme_fdet_mot_5region1_mask                   (0x07FFFFFF)
#define  KME_IPME_KME_IPME_B0_regr_ipme_fdet_mot_5region1(data)                  (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_B0_get_regr_ipme_fdet_mot_5region1(data)              (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_B4                                                   0x1809BCB4
#define  KME_IPME_KME_IPME_B4_reg_addr                                           "0xB809BCB4"
#define  KME_IPME_KME_IPME_B4_reg                                                0xB809BCB4
#define  KME_IPME_KME_IPME_B4_inst_addr                                          "0x002D"
#define  set_KME_IPME_KME_IPME_B4_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_B4_reg)=data)
#define  get_KME_IPME_KME_IPME_B4_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_B4_reg))
#define  KME_IPME_KME_IPME_B4_regr_ipme_fdet_mot_5region2_shift                  (0)
#define  KME_IPME_KME_IPME_B4_regr_ipme_fdet_mot_5region2_mask                   (0x07FFFFFF)
#define  KME_IPME_KME_IPME_B4_regr_ipme_fdet_mot_5region2(data)                  (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_B4_get_regr_ipme_fdet_mot_5region2(data)              (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_B8                                                   0x1809BCB8
#define  KME_IPME_KME_IPME_B8_reg_addr                                           "0xB809BCB8"
#define  KME_IPME_KME_IPME_B8_reg                                                0xB809BCB8
#define  KME_IPME_KME_IPME_B8_inst_addr                                          "0x002E"
#define  set_KME_IPME_KME_IPME_B8_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_B8_reg)=data)
#define  get_KME_IPME_KME_IPME_B8_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_B8_reg))
#define  KME_IPME_KME_IPME_B8_regr_ipme_fdet_mot_5region3_shift                  (0)
#define  KME_IPME_KME_IPME_B8_regr_ipme_fdet_mot_5region3_mask                   (0x07FFFFFF)
#define  KME_IPME_KME_IPME_B8_regr_ipme_fdet_mot_5region3(data)                  (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_B8_get_regr_ipme_fdet_mot_5region3(data)              (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_BC                                                   0x1809BCBC
#define  KME_IPME_KME_IPME_BC_reg_addr                                           "0xB809BCBC"
#define  KME_IPME_KME_IPME_BC_reg                                                0xB809BCBC
#define  KME_IPME_KME_IPME_BC_inst_addr                                          "0x002F"
#define  set_KME_IPME_KME_IPME_BC_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_BC_reg)=data)
#define  get_KME_IPME_KME_IPME_BC_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_BC_reg))
#define  KME_IPME_KME_IPME_BC_regr_ipme_fdet_mot_5region4_shift                  (0)
#define  KME_IPME_KME_IPME_BC_regr_ipme_fdet_mot_5region4_mask                   (0x07FFFFFF)
#define  KME_IPME_KME_IPME_BC_regr_ipme_fdet_mot_5region4(data)                  (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_BC_get_regr_ipme_fdet_mot_5region4(data)              (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_C0                                                   0x1809BCC0
#define  KME_IPME_KME_IPME_C0_reg_addr                                           "0xB809BCC0"
#define  KME_IPME_KME_IPME_C0_reg                                                0xB809BCC0
#define  KME_IPME_KME_IPME_C0_inst_addr                                          "0x0030"
#define  set_KME_IPME_KME_IPME_C0_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_C0_reg)=data)
#define  get_KME_IPME_KME_IPME_C0_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_C0_reg))
#define  KME_IPME_KME_IPME_C0_regr_ipme_fdet_mot_5region5_shift                  (0)
#define  KME_IPME_KME_IPME_C0_regr_ipme_fdet_mot_5region5_mask                   (0x07FFFFFF)
#define  KME_IPME_KME_IPME_C0_regr_ipme_fdet_mot_5region5(data)                  (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_C0_get_regr_ipme_fdet_mot_5region5(data)              (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_C4                                                   0x1809BCC4
#define  KME_IPME_KME_IPME_C4_reg_addr                                           "0xB809BCC4"
#define  KME_IPME_KME_IPME_C4_reg                                                0xB809BCC4
#define  KME_IPME_KME_IPME_C4_inst_addr                                          "0x0031"
#define  set_KME_IPME_KME_IPME_C4_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_C4_reg)=data)
#define  get_KME_IPME_KME_IPME_C4_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_C4_reg))
#define  KME_IPME_KME_IPME_C4_regr_ipme_fdet_mot_12region1_shift                 (0)
#define  KME_IPME_KME_IPME_C4_regr_ipme_fdet_mot_12region1_mask                  (0x07FFFFFF)
#define  KME_IPME_KME_IPME_C4_regr_ipme_fdet_mot_12region1(data)                 (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_C4_get_regr_ipme_fdet_mot_12region1(data)             (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_C8                                                   0x1809BCC8
#define  KME_IPME_KME_IPME_C8_reg_addr                                           "0xB809BCC8"
#define  KME_IPME_KME_IPME_C8_reg                                                0xB809BCC8
#define  KME_IPME_KME_IPME_C8_inst_addr                                          "0x0032"
#define  set_KME_IPME_KME_IPME_C8_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_C8_reg)=data)
#define  get_KME_IPME_KME_IPME_C8_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_C8_reg))
#define  KME_IPME_KME_IPME_C8_regr_ipme_fdet_mot_12region2_shift                 (0)
#define  KME_IPME_KME_IPME_C8_regr_ipme_fdet_mot_12region2_mask                  (0x07FFFFFF)
#define  KME_IPME_KME_IPME_C8_regr_ipme_fdet_mot_12region2(data)                 (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_C8_get_regr_ipme_fdet_mot_12region2(data)             (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_CC                                                   0x1809BCCC
#define  KME_IPME_KME_IPME_CC_reg_addr                                           "0xB809BCCC"
#define  KME_IPME_KME_IPME_CC_reg                                                0xB809BCCC
#define  KME_IPME_KME_IPME_CC_inst_addr                                          "0x0033"
#define  set_KME_IPME_KME_IPME_CC_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_CC_reg)=data)
#define  get_KME_IPME_KME_IPME_CC_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_CC_reg))
#define  KME_IPME_KME_IPME_CC_regr_ipme_fdet_mot_12region3_shift                 (0)
#define  KME_IPME_KME_IPME_CC_regr_ipme_fdet_mot_12region3_mask                  (0x07FFFFFF)
#define  KME_IPME_KME_IPME_CC_regr_ipme_fdet_mot_12region3(data)                 (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_CC_get_regr_ipme_fdet_mot_12region3(data)             (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_D0                                                   0x1809BCD0
#define  KME_IPME_KME_IPME_D0_reg_addr                                           "0xB809BCD0"
#define  KME_IPME_KME_IPME_D0_reg                                                0xB809BCD0
#define  KME_IPME_KME_IPME_D0_inst_addr                                          "0x0034"
#define  set_KME_IPME_KME_IPME_D0_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_D0_reg)=data)
#define  get_KME_IPME_KME_IPME_D0_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_D0_reg))
#define  KME_IPME_KME_IPME_D0_regr_ipme_fdet_mot_12region4_shift                 (0)
#define  KME_IPME_KME_IPME_D0_regr_ipme_fdet_mot_12region4_mask                  (0x07FFFFFF)
#define  KME_IPME_KME_IPME_D0_regr_ipme_fdet_mot_12region4(data)                 (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_D0_get_regr_ipme_fdet_mot_12region4(data)             (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_D4                                                   0x1809BCD4
#define  KME_IPME_KME_IPME_D4_reg_addr                                           "0xB809BCD4"
#define  KME_IPME_KME_IPME_D4_reg                                                0xB809BCD4
#define  KME_IPME_KME_IPME_D4_inst_addr                                          "0x0035"
#define  set_KME_IPME_KME_IPME_D4_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_D4_reg)=data)
#define  get_KME_IPME_KME_IPME_D4_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_D4_reg))
#define  KME_IPME_KME_IPME_D4_regr_ipme_fdet_mot_12region5_shift                 (0)
#define  KME_IPME_KME_IPME_D4_regr_ipme_fdet_mot_12region5_mask                  (0x07FFFFFF)
#define  KME_IPME_KME_IPME_D4_regr_ipme_fdet_mot_12region5(data)                 (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_D4_get_regr_ipme_fdet_mot_12region5(data)             (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_D8                                                   0x1809BCD8
#define  KME_IPME_KME_IPME_D8_reg_addr                                           "0xB809BCD8"
#define  KME_IPME_KME_IPME_D8_reg                                                0xB809BCD8
#define  KME_IPME_KME_IPME_D8_inst_addr                                          "0x0036"
#define  set_KME_IPME_KME_IPME_D8_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_D8_reg)=data)
#define  get_KME_IPME_KME_IPME_D8_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_D8_reg))
#define  KME_IPME_KME_IPME_D8_regr_ipme_fdet_mot_12region6_shift                 (0)
#define  KME_IPME_KME_IPME_D8_regr_ipme_fdet_mot_12region6_mask                  (0x07FFFFFF)
#define  KME_IPME_KME_IPME_D8_regr_ipme_fdet_mot_12region6(data)                 (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_D8_get_regr_ipme_fdet_mot_12region6(data)             (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_DC                                                   0x1809BCDC
#define  KME_IPME_KME_IPME_DC_reg_addr                                           "0xB809BCDC"
#define  KME_IPME_KME_IPME_DC_reg                                                0xB809BCDC
#define  KME_IPME_KME_IPME_DC_inst_addr                                          "0x0037"
#define  set_KME_IPME_KME_IPME_DC_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_DC_reg)=data)
#define  get_KME_IPME_KME_IPME_DC_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_DC_reg))
#define  KME_IPME_KME_IPME_DC_regr_ipme_fdet_mot_12region7_shift                 (0)
#define  KME_IPME_KME_IPME_DC_regr_ipme_fdet_mot_12region7_mask                  (0x07FFFFFF)
#define  KME_IPME_KME_IPME_DC_regr_ipme_fdet_mot_12region7(data)                 (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_DC_get_regr_ipme_fdet_mot_12region7(data)             (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_E0                                                   0x1809BCE0
#define  KME_IPME_KME_IPME_E0_reg_addr                                           "0xB809BCE0"
#define  KME_IPME_KME_IPME_E0_reg                                                0xB809BCE0
#define  KME_IPME_KME_IPME_E0_inst_addr                                          "0x0038"
#define  set_KME_IPME_KME_IPME_E0_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_E0_reg)=data)
#define  get_KME_IPME_KME_IPME_E0_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_E0_reg))
#define  KME_IPME_KME_IPME_E0_regr_ipme_fdet_mot_12region8_shift                 (0)
#define  KME_IPME_KME_IPME_E0_regr_ipme_fdet_mot_12region8_mask                  (0x07FFFFFF)
#define  KME_IPME_KME_IPME_E0_regr_ipme_fdet_mot_12region8(data)                 (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_E0_get_regr_ipme_fdet_mot_12region8(data)             (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_E4                                                   0x1809BCE4
#define  KME_IPME_KME_IPME_E4_reg_addr                                           "0xB809BCE4"
#define  KME_IPME_KME_IPME_E4_reg                                                0xB809BCE4
#define  KME_IPME_KME_IPME_E4_inst_addr                                          "0x0039"
#define  set_KME_IPME_KME_IPME_E4_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_E4_reg)=data)
#define  get_KME_IPME_KME_IPME_E4_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_E4_reg))
#define  KME_IPME_KME_IPME_E4_regr_ipme_fdet_mot_12region9_shift                 (0)
#define  KME_IPME_KME_IPME_E4_regr_ipme_fdet_mot_12region9_mask                  (0x07FFFFFF)
#define  KME_IPME_KME_IPME_E4_regr_ipme_fdet_mot_12region9(data)                 (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_E4_get_regr_ipme_fdet_mot_12region9(data)             (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_E8                                                   0x1809BCE8
#define  KME_IPME_KME_IPME_E8_reg_addr                                           "0xB809BCE8"
#define  KME_IPME_KME_IPME_E8_reg                                                0xB809BCE8
#define  KME_IPME_KME_IPME_E8_inst_addr                                          "0x003A"
#define  set_KME_IPME_KME_IPME_E8_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_E8_reg)=data)
#define  get_KME_IPME_KME_IPME_E8_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_E8_reg))
#define  KME_IPME_KME_IPME_E8_regr_ipme_fdet_mot_12region10_shift                (0)
#define  KME_IPME_KME_IPME_E8_regr_ipme_fdet_mot_12region10_mask                 (0x07FFFFFF)
#define  KME_IPME_KME_IPME_E8_regr_ipme_fdet_mot_12region10(data)                (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_E8_get_regr_ipme_fdet_mot_12region10(data)            (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_EC                                                   0x1809BCEC
#define  KME_IPME_KME_IPME_EC_reg_addr                                           "0xB809BCEC"
#define  KME_IPME_KME_IPME_EC_reg                                                0xB809BCEC
#define  KME_IPME_KME_IPME_EC_inst_addr                                          "0x003B"
#define  set_KME_IPME_KME_IPME_EC_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_EC_reg)=data)
#define  get_KME_IPME_KME_IPME_EC_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_EC_reg))
#define  KME_IPME_KME_IPME_EC_regr_ipme_fdet_mot_12region11_shift                (0)
#define  KME_IPME_KME_IPME_EC_regr_ipme_fdet_mot_12region11_mask                 (0x07FFFFFF)
#define  KME_IPME_KME_IPME_EC_regr_ipme_fdet_mot_12region11(data)                (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_EC_get_regr_ipme_fdet_mot_12region11(data)            (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_F0                                                   0x1809BCF0
#define  KME_IPME_KME_IPME_F0_reg_addr                                           "0xB809BCF0"
#define  KME_IPME_KME_IPME_F0_reg                                                0xB809BCF0
#define  KME_IPME_KME_IPME_F0_inst_addr                                          "0x003C"
#define  set_KME_IPME_KME_IPME_F0_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_F0_reg)=data)
#define  get_KME_IPME_KME_IPME_F0_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_F0_reg))
#define  KME_IPME_KME_IPME_F0_regr_ipme_fdet_mot_12region12_shift                (0)
#define  KME_IPME_KME_IPME_F0_regr_ipme_fdet_mot_12region12_mask                 (0x07FFFFFF)
#define  KME_IPME_KME_IPME_F0_regr_ipme_fdet_mot_12region12(data)                (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_F0_get_regr_ipme_fdet_mot_12region12(data)            (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_F4                                                   0x1809BCF4
#define  KME_IPME_KME_IPME_F4_reg_addr                                           "0xB809BCF4"
#define  KME_IPME_KME_IPME_F4_reg                                                0xB809BCF4
#define  KME_IPME_KME_IPME_F4_inst_addr                                          "0x003D"
#define  set_KME_IPME_KME_IPME_F4_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_F4_reg)=data)
#define  get_KME_IPME_KME_IPME_F4_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_F4_reg))
#define  KME_IPME_KME_IPME_F4_regr_ipme_fdet_film_mode_shift                     (3)
#define  KME_IPME_KME_IPME_F4_regr_ipme_fdet_phase_id_shift                      (0)
#define  KME_IPME_KME_IPME_F4_regr_ipme_fdet_film_mode_mask                      (0x00000038)
#define  KME_IPME_KME_IPME_F4_regr_ipme_fdet_phase_id_mask                       (0x00000007)
#define  KME_IPME_KME_IPME_F4_regr_ipme_fdet_film_mode(data)                     (0x00000038&((data)<<3))
#define  KME_IPME_KME_IPME_F4_regr_ipme_fdet_phase_id(data)                      (0x00000007&(data))
#define  KME_IPME_KME_IPME_F4_get_regr_ipme_fdet_film_mode(data)                 ((0x00000038&(data))>>3)
#define  KME_IPME_KME_IPME_F4_get_regr_ipme_fdet_phase_id(data)                  (0x00000007&(data))

#define  KME_IPME_KME_IPME_F8                                                   0x1809BCF8
#define  KME_IPME_KME_IPME_F8_reg_addr                                           "0xB809BCF8"
#define  KME_IPME_KME_IPME_F8_reg                                                0xB809BCF8
#define  KME_IPME_KME_IPME_F8_inst_addr                                          "0x003E"
#define  set_KME_IPME_KME_IPME_F8_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_F8_reg)=data)
#define  get_KME_IPME_KME_IPME_F8_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_F8_reg))
#define  KME_IPME_KME_IPME_F8_regr_ipme_fdet_mot_v0_rim_shift                    (0)
#define  KME_IPME_KME_IPME_F8_regr_ipme_fdet_mot_v0_rim_mask                     (0x07FFFFFF)
#define  KME_IPME_KME_IPME_F8_regr_ipme_fdet_mot_v0_rim(data)                    (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_F8_get_regr_ipme_fdet_mot_v0_rim(data)                (0x07FFFFFF&(data))

#define  KME_IPME_KME_IPME_FC                                                   0x1809BCFC
#define  KME_IPME_KME_IPME_FC_reg_addr                                           "0xB809BCFC"
#define  KME_IPME_KME_IPME_FC_reg                                                0xB809BCFC
#define  KME_IPME_KME_IPME_FC_inst_addr                                          "0x003F"
#define  set_KME_IPME_KME_IPME_FC_reg(data)                                      (*((volatile unsigned int*)KME_IPME_KME_IPME_FC_reg)=data)
#define  get_KME_IPME_KME_IPME_FC_reg                                            (*((volatile unsigned int*)KME_IPME_KME_IPME_FC_reg))
#define  KME_IPME_KME_IPME_FC_regr_ipme_fdet_mot_v1_rim_shift                    (0)
#define  KME_IPME_KME_IPME_FC_regr_ipme_fdet_mot_v1_rim_mask                     (0x07FFFFFF)
#define  KME_IPME_KME_IPME_FC_regr_ipme_fdet_mot_v1_rim(data)                    (0x07FFFFFF&(data))
#define  KME_IPME_KME_IPME_FC_get_regr_ipme_fdet_mot_v1_rim(data)                (0x07FFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_IPME register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ipme_v_fetch_mode:2;
        RBus_UInt32  ipme_v_fetch_opt:2;
        RBus_UInt32  ipme_h_fetch_mode:2;
        RBus_UInt32  ipme_h_fetch_opt:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  ipme_vs_o_sel:1;
    };
}kme_ipme_kme_ipme_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  ipme_v_flp_alp6:9;
        RBus_UInt32  ipme_v_flp_alp5:9;
    };
}kme_ipme_kme_ipme_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  ipme_high_det_min_clip:3;
        RBus_UInt32  ipme_high_det_near_th:6;
        RBus_UInt32  ipme_high_det_diff_th:7;
        RBus_UInt32  ipme_high_det_en:1;
    };
}kme_ipme_kme_ipme_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  ipme_scaler_h_active:10;
    };
}kme_ipme_kme_ipme_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_32lkup5:4;
        RBus_UInt32  ipme_32lkup4:4;
        RBus_UInt32  ipme_32lkup3:4;
        RBus_UInt32  ipme_32lkup2:4;
        RBus_UInt32  ipme_32lkup1:4;
        RBus_UInt32  ipme_32lkup0:4;
        RBus_UInt32  ipme_curve_slp:8;
    };
}kme_ipme_kme_ipme_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_32lkup13:4;
        RBus_UInt32  ipme_32lkup12:4;
        RBus_UInt32  ipme_32lkup11:4;
        RBus_UInt32  ipme_32lkup10:4;
        RBus_UInt32  ipme_32lkup9:4;
        RBus_UInt32  ipme_32lkup8:4;
        RBus_UInt32  ipme_32lkup7:4;
        RBus_UInt32  ipme_32lkup6:4;
    };
}kme_ipme_kme_ipme_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_32lkup21:4;
        RBus_UInt32  ipme_32lkup20:4;
        RBus_UInt32  ipme_32lkup19:4;
        RBus_UInt32  ipme_32lkup18:4;
        RBus_UInt32  ipme_32lkup17:4;
        RBus_UInt32  ipme_32lkup16:4;
        RBus_UInt32  ipme_32lkup15:4;
        RBus_UInt32  ipme_32lkup14:4;
    };
}kme_ipme_kme_ipme_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_32lkup29:4;
        RBus_UInt32  ipme_32lkup28:4;
        RBus_UInt32  ipme_32lkup27:4;
        RBus_UInt32  ipme_32lkup26:4;
        RBus_UInt32  ipme_32lkup25:4;
        RBus_UInt32  ipme_32lkup24:4;
        RBus_UInt32  ipme_32lkup23:4;
        RBus_UInt32  ipme_32lkup22:4;
    };
}kme_ipme_kme_ipme_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  ipme_nr_curve_shift_bit:4;
        RBus_UInt32  ipme_iir_debug_sel:2;
        RBus_UInt32  ipme_32lkup31:4;
        RBus_UInt32  ipme_32lkup30:4;
    };
}kme_ipme_kme_ipme_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ipme_dummy_regs1:8;
        RBus_UInt32  ipme_dummy_regs0:8;
        RBus_UInt32  ipme_pscaler_v_active:12;
    };
}kme_ipme_kme_ipme_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  ipme_fmdet_diffcount_y4:5;
        RBus_UInt32  ipme_fmdet_diffcount_y3:5;
        RBus_UInt32  ipme_fmdet_diffcount_y2:5;
        RBus_UInt32  ipme_fmdet_diffcount_y1:5;
        RBus_UInt32  ipme_fmdet_diffcount_y0:5;
    };
}kme_ipme_kme_ipme_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_avg_mot_cnt:2;
        RBus_UInt32  ipme_fmdet_film_th:8;
        RBus_UInt32  ipme_fmdet_pxl_coring:8;
        RBus_UInt32  ipme_fmdet_diff_opt:2;
    };
}kme_ipme_kme_ipme_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ipme_fmdet_glb_sml_weight:4;
        RBus_UInt32  ipme_fmdet_glb_big_weight:4;
        RBus_UInt32  ipme_fmdet_mot_min:8;
        RBus_UInt32  ipme_fmdet_weight_region:4;
        RBus_UInt32  ipme_fmdet_weight_all:4;
    };
}kme_ipme_kme_ipme_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ipme_fmdet_region1_sml_weight:4;
        RBus_UInt32  ipme_fmdet_region1_big_weight:4;
        RBus_UInt32  ipme_fmdet_region0_sml_weight:4;
        RBus_UInt32  ipme_fmdet_region0_big_weight:4;
    };
}kme_ipme_kme_ipme_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ipme_fmdet_region3_sml_weight:4;
        RBus_UInt32  ipme_fmdet_region3_big_weight:4;
        RBus_UInt32  ipme_fmdet_region2_sml_weight:4;
        RBus_UInt32  ipme_fmdet_region2_big_weight:4;
    };
}kme_ipme_kme_ipme_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ipme_fdet_5region4_en:1;
        RBus_UInt32  ipme_fdet_5region3_en:1;
        RBus_UInt32  ipme_fdet_5region2_en:1;
        RBus_UInt32  ipme_fdet_5region1_en:1;
        RBus_UInt32  ipme_fdet_5region0_en:1;
        RBus_UInt32  ipme_fmdet_quit_prd_th:4;
        RBus_UInt32  ipme_fmdet_quit_th:4;
        RBus_UInt32  ipme_fmdet_enter_film22_cnt_th:4;
        RBus_UInt32  ipme_fmdet_enter_film32_cnt_th:4;
        RBus_UInt32  ipme_fmdet_region4_sml_weight:4;
        RBus_UInt32  ipme_fmdet_region4_big_weight:4;
    };
}kme_ipme_kme_ipme_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_5region1_v1:10;
        RBus_UInt32  ipme_fmdet_5region1_v0:10;
    };
}kme_ipme_kme_ipme_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_5region2_v1:10;
        RBus_UInt32  ipme_fmdet_5region2_v0:10;
    };
}kme_ipme_kme_ipme_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_5region3_h1:10;
        RBus_UInt32  ipme_fmdet_5region3_h0:10;
    };
}kme_ipme_kme_ipme_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_5region4_h1:10;
        RBus_UInt32  ipme_fmdet_5region4_h0:10;
    };
}kme_ipme_kme_ipme_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_5region5_h1:10;
        RBus_UInt32  ipme_fmdet_5region5_h0:10;
    };
}kme_ipme_kme_ipme_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_5region5_v1:10;
        RBus_UInt32  ipme_fmdet_5region5_v0:10;
    };
}kme_ipme_kme_ipme_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_12region_h1:10;
        RBus_UInt32  ipme_fmdet_12region_h0:10;
    };
}kme_ipme_kme_ipme_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_12region_h3:10;
        RBus_UInt32  ipme_fmdet_12region_h2:10;
    };
}kme_ipme_kme_ipme_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_12region_v0:10;
        RBus_UInt32  ipme_fmdet_12region_h4:10;
    };
}kme_ipme_kme_ipme_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_12region_v2:10;
        RBus_UInt32  ipme_fmdet_12region_v1:10;
    };
}kme_ipme_kme_ipme_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_16region_v4:10;
        RBus_UInt32  ipme_fmdet_12region_v3:10;
    };
}kme_ipme_kme_ipme_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  ipme_fmdet_4region1_h1:10;
        RBus_UInt32  ipme_fmdet_4region1_h0:10;
        RBus_UInt32  ipme_fmdet_4region1_enable:1;
    };
}kme_ipme_kme_ipme_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_4region1_v1:10;
        RBus_UInt32  ipme_fmdet_4region1_v0:10;
    };
}kme_ipme_kme_ipme_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  ipme_fmdet_4region2_h1:10;
        RBus_UInt32  ipme_fmdet_4region2_h0:10;
        RBus_UInt32  ipme_fmdet_4region2_enable:1;
    };
}kme_ipme_kme_ipme_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_4region2_v1:10;
        RBus_UInt32  ipme_fmdet_4region2_v0:10;
    };
}kme_ipme_kme_ipme_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  ipme_fmdet_4region3_h1:10;
        RBus_UInt32  ipme_fmdet_4region3_h0:10;
        RBus_UInt32  ipme_fmdet_4region3_enable:1;
    };
}kme_ipme_kme_ipme_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_4region3_v1:10;
        RBus_UInt32  ipme_fmdet_4region3_v0:10;
    };
}kme_ipme_kme_ipme_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  ipme_fmdet_4region4_h1:10;
        RBus_UInt32  ipme_fmdet_4region4_h0:10;
        RBus_UInt32  ipme_fmdet_4region4_enable:1;
    };
}kme_ipme_kme_ipme_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  kme_ipme_top_3dfs_lr:1;
        RBus_UInt32  ipme_fmdet_4region4_v1:10;
        RBus_UInt32  ipme_fmdet_4region4_v0:10;
    };
}kme_ipme_kme_ipme_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_h_flp_alp2:9;
        RBus_UInt32  ipme_h_flp_alp1:9;
        RBus_UInt32  ipme_h_flp_alp0:9;
    };
}kme_ipme_kme_ipme_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_h_flp_alp5:9;
        RBus_UInt32  ipme_h_flp_alp4:9;
        RBus_UInt32  ipme_h_flp_alp3:9;
    };
}kme_ipme_kme_ipme_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_v_flp_alp1:9;
        RBus_UInt32  ipme_v_flp_alp0:9;
        RBus_UInt32  ipme_h_flp_alp6:9;
    };
}kme_ipme_kme_ipme_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_v_flp_alp4:9;
        RBus_UInt32  ipme_v_flp_alp3:9;
        RBus_UInt32  ipme_v_flp_alp2:9;
    };
}kme_ipme_kme_ipme_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_rim_h1:10;
        RBus_UInt32  ipme_fmdet_rim_h0:10;
    };
}kme_ipme_kme_ipme_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ipme_fmdet_rim_v1:10;
        RBus_UInt32  ipme_fmdet_rim_v0:10;
    };
}kme_ipme_kme_ipme_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_h0_rim:27;
    };
}kme_ipme_kme_ipme_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_all:27;
    };
}kme_ipme_kme_ipme_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_h1_rim:27;
    };
}kme_ipme_kme_ipme_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_5region1:27;
    };
}kme_ipme_kme_ipme_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_5region2:27;
    };
}kme_ipme_kme_ipme_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_5region3:27;
    };
}kme_ipme_kme_ipme_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_5region4:27;
    };
}kme_ipme_kme_ipme_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_5region5:27;
    };
}kme_ipme_kme_ipme_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_12region1:27;
    };
}kme_ipme_kme_ipme_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_12region2:27;
    };
}kme_ipme_kme_ipme_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_12region3:27;
    };
}kme_ipme_kme_ipme_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_12region4:27;
    };
}kme_ipme_kme_ipme_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_12region5:27;
    };
}kme_ipme_kme_ipme_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_12region6:27;
    };
}kme_ipme_kme_ipme_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_12region7:27;
    };
}kme_ipme_kme_ipme_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_12region8:27;
    };
}kme_ipme_kme_ipme_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_12region9:27;
    };
}kme_ipme_kme_ipme_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_12region10:27;
    };
}kme_ipme_kme_ipme_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_12region11:27;
    };
}kme_ipme_kme_ipme_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_12region12:27;
    };
}kme_ipme_kme_ipme_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  regr_ipme_fdet_film_mode:3;
        RBus_UInt32  regr_ipme_fdet_phase_id:3;
    };
}kme_ipme_kme_ipme_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_v0_rim:27;
    };
}kme_ipme_kme_ipme_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  regr_ipme_fdet_mot_v1_rim:27;
    };
}kme_ipme_kme_ipme_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_IPME register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_vs_o_sel:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  ipme_h_fetch_opt:2;
        RBus_UInt32  ipme_h_fetch_mode:2;
        RBus_UInt32  ipme_v_fetch_opt:2;
        RBus_UInt32  ipme_v_fetch_mode:2;
        RBus_UInt32  res2:20;
    };
}kme_ipme_kme_ipme_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_v_flp_alp5:9;
        RBus_UInt32  ipme_v_flp_alp6:9;
        RBus_UInt32  res1:14;
    };
}kme_ipme_kme_ipme_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_high_det_en:1;
        RBus_UInt32  ipme_high_det_diff_th:7;
        RBus_UInt32  ipme_high_det_near_th:6;
        RBus_UInt32  ipme_high_det_min_clip:3;
        RBus_UInt32  res1:15;
    };
}kme_ipme_kme_ipme_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_scaler_h_active:10;
        RBus_UInt32  res1:22;
    };
}kme_ipme_kme_ipme_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_curve_slp:8;
        RBus_UInt32  ipme_32lkup0:4;
        RBus_UInt32  ipme_32lkup1:4;
        RBus_UInt32  ipme_32lkup2:4;
        RBus_UInt32  ipme_32lkup3:4;
        RBus_UInt32  ipme_32lkup4:4;
        RBus_UInt32  ipme_32lkup5:4;
    };
}kme_ipme_kme_ipme_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_32lkup6:4;
        RBus_UInt32  ipme_32lkup7:4;
        RBus_UInt32  ipme_32lkup8:4;
        RBus_UInt32  ipme_32lkup9:4;
        RBus_UInt32  ipme_32lkup10:4;
        RBus_UInt32  ipme_32lkup11:4;
        RBus_UInt32  ipme_32lkup12:4;
        RBus_UInt32  ipme_32lkup13:4;
    };
}kme_ipme_kme_ipme_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_32lkup14:4;
        RBus_UInt32  ipme_32lkup15:4;
        RBus_UInt32  ipme_32lkup16:4;
        RBus_UInt32  ipme_32lkup17:4;
        RBus_UInt32  ipme_32lkup18:4;
        RBus_UInt32  ipme_32lkup19:4;
        RBus_UInt32  ipme_32lkup20:4;
        RBus_UInt32  ipme_32lkup21:4;
    };
}kme_ipme_kme_ipme_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_32lkup22:4;
        RBus_UInt32  ipme_32lkup23:4;
        RBus_UInt32  ipme_32lkup24:4;
        RBus_UInt32  ipme_32lkup25:4;
        RBus_UInt32  ipme_32lkup26:4;
        RBus_UInt32  ipme_32lkup27:4;
        RBus_UInt32  ipme_32lkup28:4;
        RBus_UInt32  ipme_32lkup29:4;
    };
}kme_ipme_kme_ipme_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_32lkup30:4;
        RBus_UInt32  ipme_32lkup31:4;
        RBus_UInt32  ipme_iir_debug_sel:2;
        RBus_UInt32  ipme_nr_curve_shift_bit:4;
        RBus_UInt32  res1:18;
    };
}kme_ipme_kme_ipme_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_pscaler_v_active:12;
        RBus_UInt32  ipme_dummy_regs0:8;
        RBus_UInt32  ipme_dummy_regs1:8;
        RBus_UInt32  res1:4;
    };
}kme_ipme_kme_ipme_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_diffcount_y0:5;
        RBus_UInt32  ipme_fmdet_diffcount_y1:5;
        RBus_UInt32  ipme_fmdet_diffcount_y2:5;
        RBus_UInt32  ipme_fmdet_diffcount_y3:5;
        RBus_UInt32  ipme_fmdet_diffcount_y4:5;
        RBus_UInt32  res1:7;
    };
}kme_ipme_kme_ipme_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_diff_opt:2;
        RBus_UInt32  ipme_fmdet_pxl_coring:8;
        RBus_UInt32  ipme_fmdet_film_th:8;
        RBus_UInt32  ipme_fmdet_avg_mot_cnt:2;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_weight_all:4;
        RBus_UInt32  ipme_fmdet_weight_region:4;
        RBus_UInt32  ipme_fmdet_mot_min:8;
        RBus_UInt32  ipme_fmdet_glb_big_weight:4;
        RBus_UInt32  ipme_fmdet_glb_sml_weight:4;
        RBus_UInt32  res1:8;
    };
}kme_ipme_kme_ipme_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_region0_big_weight:4;
        RBus_UInt32  ipme_fmdet_region0_sml_weight:4;
        RBus_UInt32  ipme_fmdet_region1_big_weight:4;
        RBus_UInt32  ipme_fmdet_region1_sml_weight:4;
        RBus_UInt32  res1:16;
    };
}kme_ipme_kme_ipme_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_region2_big_weight:4;
        RBus_UInt32  ipme_fmdet_region2_sml_weight:4;
        RBus_UInt32  ipme_fmdet_region3_big_weight:4;
        RBus_UInt32  ipme_fmdet_region3_sml_weight:4;
        RBus_UInt32  res1:16;
    };
}kme_ipme_kme_ipme_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_region4_big_weight:4;
        RBus_UInt32  ipme_fmdet_region4_sml_weight:4;
        RBus_UInt32  ipme_fmdet_enter_film32_cnt_th:4;
        RBus_UInt32  ipme_fmdet_enter_film22_cnt_th:4;
        RBus_UInt32  ipme_fmdet_quit_th:4;
        RBus_UInt32  ipme_fmdet_quit_prd_th:4;
        RBus_UInt32  ipme_fdet_5region0_en:1;
        RBus_UInt32  ipme_fdet_5region1_en:1;
        RBus_UInt32  ipme_fdet_5region2_en:1;
        RBus_UInt32  ipme_fdet_5region3_en:1;
        RBus_UInt32  ipme_fdet_5region4_en:1;
        RBus_UInt32  res1:3;
    };
}kme_ipme_kme_ipme_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_5region1_v0:10;
        RBus_UInt32  ipme_fmdet_5region1_v1:10;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_5region2_v0:10;
        RBus_UInt32  ipme_fmdet_5region2_v1:10;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_5region3_h0:10;
        RBus_UInt32  ipme_fmdet_5region3_h1:10;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_5region4_h0:10;
        RBus_UInt32  ipme_fmdet_5region4_h1:10;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_5region5_h0:10;
        RBus_UInt32  ipme_fmdet_5region5_h1:10;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_5region5_v0:10;
        RBus_UInt32  ipme_fmdet_5region5_v1:10;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_12region_h0:10;
        RBus_UInt32  ipme_fmdet_12region_h1:10;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_12region_h2:10;
        RBus_UInt32  ipme_fmdet_12region_h3:10;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_12region_h4:10;
        RBus_UInt32  ipme_fmdet_12region_v0:10;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_12region_v1:10;
        RBus_UInt32  ipme_fmdet_12region_v2:10;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_12region_v3:10;
        RBus_UInt32  ipme_fmdet_16region_v4:10;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_4region1_enable:1;
        RBus_UInt32  ipme_fmdet_4region1_h0:10;
        RBus_UInt32  ipme_fmdet_4region1_h1:10;
        RBus_UInt32  res1:11;
    };
}kme_ipme_kme_ipme_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_4region1_v0:10;
        RBus_UInt32  ipme_fmdet_4region1_v1:10;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_4region2_enable:1;
        RBus_UInt32  ipme_fmdet_4region2_h0:10;
        RBus_UInt32  ipme_fmdet_4region2_h1:10;
        RBus_UInt32  res1:11;
    };
}kme_ipme_kme_ipme_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_4region2_v0:10;
        RBus_UInt32  ipme_fmdet_4region2_v1:10;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_4region3_enable:1;
        RBus_UInt32  ipme_fmdet_4region3_h0:10;
        RBus_UInt32  ipme_fmdet_4region3_h1:10;
        RBus_UInt32  res1:11;
    };
}kme_ipme_kme_ipme_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_4region3_v0:10;
        RBus_UInt32  ipme_fmdet_4region3_v1:10;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_4region4_enable:1;
        RBus_UInt32  ipme_fmdet_4region4_h0:10;
        RBus_UInt32  ipme_fmdet_4region4_h1:10;
        RBus_UInt32  res1:11;
    };
}kme_ipme_kme_ipme_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_4region4_v0:10;
        RBus_UInt32  ipme_fmdet_4region4_v1:10;
        RBus_UInt32  kme_ipme_top_3dfs_lr:1;
        RBus_UInt32  res1:11;
    };
}kme_ipme_kme_ipme_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_h_flp_alp0:9;
        RBus_UInt32  ipme_h_flp_alp1:9;
        RBus_UInt32  ipme_h_flp_alp2:9;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_h_flp_alp3:9;
        RBus_UInt32  ipme_h_flp_alp4:9;
        RBus_UInt32  ipme_h_flp_alp5:9;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_h_flp_alp6:9;
        RBus_UInt32  ipme_v_flp_alp0:9;
        RBus_UInt32  ipme_v_flp_alp1:9;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_v_flp_alp2:9;
        RBus_UInt32  ipme_v_flp_alp3:9;
        RBus_UInt32  ipme_v_flp_alp4:9;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_rim_h0:10;
        RBus_UInt32  ipme_fmdet_rim_h1:10;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_rim_v0:10;
        RBus_UInt32  ipme_fmdet_rim_v1:10;
        RBus_UInt32  res1:12;
    };
}kme_ipme_kme_ipme_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_h0_rim:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_all:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_h1_rim:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_5region1:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_5region2:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_5region3:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_5region4:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_5region5:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_12region1:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_12region2:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_12region3:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_12region4:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_12region5:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_12region6:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_12region7:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_12region8:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_12region9:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_12region10:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_12region11:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_12region12:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_phase_id:3;
        RBus_UInt32  regr_ipme_fdet_film_mode:3;
        RBus_UInt32  res1:26;
    };
}kme_ipme_kme_ipme_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_v0_rim:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_mot_v1_rim:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme_kme_ipme_fc_RBUS;




#endif 


#endif 
