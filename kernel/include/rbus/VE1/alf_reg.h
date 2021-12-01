/**
* @file Merlin5_VE_ALF_Spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_ALF_REG_H_
#define _RBUS_ALF_REG_H_

#include "rbus_types.h"



//  ALF Register Address
#define  ALF_ALF_CTRL                                                           0x1800F500
#define  ALF_ALF_CTRL_reg_addr                                                   "0xB800F500"
#define  ALF_ALF_CTRL_reg                                                        0xB800F500
#define  ALF_ALF_CTRL_inst_addr                                                  "0x0000"
#define  ALF_ALF_CTRL_inst_adr                                                   "0x0040"
#define  ALF_ALF_CTRL_inst                                                       0x0040
#define  set_ALF_ALF_CTRL_reg(data)                                              (*((volatile unsigned int*)ALF_ALF_CTRL_reg)=data)
#define  get_ALF_ALF_CTRL_reg                                                    (*((volatile unsigned int*)ALF_ALF_CTRL_reg))
#define  ALF_ALF_CTRL_akm_st_mode_shift                                          (3)
#define  ALF_ALF_CTRL_alf_wdone_1t_after_wlast_shift                             (2)
#define  ALF_ALF_CTRL_alf_reset_shift                                            (1)
#define  ALF_ALF_CTRL_alf_busy_shift                                             (0)
#define  ALF_ALF_CTRL_akm_st_mode_mask                                           (0x00000008)
#define  ALF_ALF_CTRL_alf_wdone_1t_after_wlast_mask                              (0x00000004)
#define  ALF_ALF_CTRL_alf_reset_mask                                             (0x00000002)
#define  ALF_ALF_CTRL_alf_busy_mask                                              (0x00000001)
#define  ALF_ALF_CTRL_akm_st_mode(data)                                          (0x00000008&((data)<<3))
#define  ALF_ALF_CTRL_alf_wdone_1t_after_wlast(data)                             (0x00000004&((data)<<2))
#define  ALF_ALF_CTRL_alf_reset(data)                                            (0x00000002&((data)<<1))
#define  ALF_ALF_CTRL_alf_busy(data)                                             (0x00000001&(data))
#define  ALF_ALF_CTRL_get_akm_st_mode(data)                                      ((0x00000008&(data))>>3)
#define  ALF_ALF_CTRL_get_alf_wdone_1t_after_wlast(data)                         ((0x00000004&(data))>>2)
#define  ALF_ALF_CTRL_get_alf_reset(data)                                        ((0x00000002&(data))>>1)
#define  ALF_ALF_CTRL_get_alf_busy(data)                                         (0x00000001&(data))
#define  ALF_ALF_CTRL_akm_st_mode_src(data)                                      ((0x00000008&(data))>>3)
#define  ALF_ALF_CTRL_alf_wdone_1t_after_wlast_src(data)                         ((0x00000004&(data))>>2)
#define  ALF_ALF_CTRL_alf_reset_src(data)                                        ((0x00000002&(data))>>1)
#define  ALF_ALF_CTRL_alf_busy_src(data)                                         (0x00000001&(data))

#define  ALF_ALF_PAR0                                                           0x1800F504
#define  ALF_ALF_PAR0_reg_addr                                                   "0xB800F504"
#define  ALF_ALF_PAR0_reg                                                        0xB800F504
#define  ALF_ALF_PAR0_inst_addr                                                  "0x0001"
#define  ALF_ALF_PAR0_inst_adr                                                   "0x0041"
#define  ALF_ALF_PAR0_inst                                                       0x0041
#define  set_ALF_ALF_PAR0_reg(data)                                              (*((volatile unsigned int*)ALF_ALF_PAR0_reg)=data)
#define  get_ALF_ALF_PAR0_reg                                                    (*((volatile unsigned int*)ALF_ALF_PAR0_reg))
#define  ALF_ALF_PAR0_alf_coeff_idx_table_0_shift                                (28)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_1_shift                                (24)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_2_shift                                (20)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_3_shift                                (16)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_4_shift                                (12)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_5_shift                                (8)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_6_shift                                (4)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_7_shift                                (0)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_0_mask                                 (0xF0000000)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_1_mask                                 (0x0F000000)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_2_mask                                 (0x00F00000)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_3_mask                                 (0x000F0000)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_4_mask                                 (0x0000F000)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_5_mask                                 (0x00000F00)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_6_mask                                 (0x000000F0)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_7_mask                                 (0x0000000F)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_0(data)                                (0xF0000000&((data)<<28))
#define  ALF_ALF_PAR0_alf_coeff_idx_table_1(data)                                (0x0F000000&((data)<<24))
#define  ALF_ALF_PAR0_alf_coeff_idx_table_2(data)                                (0x00F00000&((data)<<20))
#define  ALF_ALF_PAR0_alf_coeff_idx_table_3(data)                                (0x000F0000&((data)<<16))
#define  ALF_ALF_PAR0_alf_coeff_idx_table_4(data)                                (0x0000F000&((data)<<12))
#define  ALF_ALF_PAR0_alf_coeff_idx_table_5(data)                                (0x00000F00&((data)<<8))
#define  ALF_ALF_PAR0_alf_coeff_idx_table_6(data)                                (0x000000F0&((data)<<4))
#define  ALF_ALF_PAR0_alf_coeff_idx_table_7(data)                                (0x0000000F&(data))
#define  ALF_ALF_PAR0_get_alf_coeff_idx_table_0(data)                            ((0xF0000000&(data))>>28)
#define  ALF_ALF_PAR0_get_alf_coeff_idx_table_1(data)                            ((0x0F000000&(data))>>24)
#define  ALF_ALF_PAR0_get_alf_coeff_idx_table_2(data)                            ((0x00F00000&(data))>>20)
#define  ALF_ALF_PAR0_get_alf_coeff_idx_table_3(data)                            ((0x000F0000&(data))>>16)
#define  ALF_ALF_PAR0_get_alf_coeff_idx_table_4(data)                            ((0x0000F000&(data))>>12)
#define  ALF_ALF_PAR0_get_alf_coeff_idx_table_5(data)                            ((0x00000F00&(data))>>8)
#define  ALF_ALF_PAR0_get_alf_coeff_idx_table_6(data)                            ((0x000000F0&(data))>>4)
#define  ALF_ALF_PAR0_get_alf_coeff_idx_table_7(data)                            (0x0000000F&(data))
#define  ALF_ALF_PAR0_alf_coeff_idx_table_0_src(data)                            ((0xF0000000&(data))>>28)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_1_src(data)                            ((0x0F000000&(data))>>24)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_2_src(data)                            ((0x00F00000&(data))>>20)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_3_src(data)                            ((0x000F0000&(data))>>16)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_4_src(data)                            ((0x0000F000&(data))>>12)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_5_src(data)                            ((0x00000F00&(data))>>8)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_6_src(data)                            ((0x000000F0&(data))>>4)
#define  ALF_ALF_PAR0_alf_coeff_idx_table_7_src(data)                            (0x0000000F&(data))

#define  ALF_ALF_PAR1                                                           0x1800F508
#define  ALF_ALF_PAR1_reg_addr                                                   "0xB800F508"
#define  ALF_ALF_PAR1_reg                                                        0xB800F508
#define  ALF_ALF_PAR1_inst_addr                                                  "0x0002"
#define  ALF_ALF_PAR1_inst_adr                                                   "0x0042"
#define  ALF_ALF_PAR1_inst                                                       0x0042
#define  set_ALF_ALF_PAR1_reg(data)                                              (*((volatile unsigned int*)ALF_ALF_PAR1_reg)=data)
#define  get_ALF_ALF_PAR1_reg                                                    (*((volatile unsigned int*)ALF_ALF_PAR1_reg))
#define  ALF_ALF_PAR1_alf_coeff_idx_table_8_shift                                (28)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_9_shift                                (24)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_10_shift                               (20)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_11_shift                               (16)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_12_shift                               (12)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_13_shift                               (8)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_14_shift                               (4)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_15_shift                               (0)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_8_mask                                 (0xF0000000)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_9_mask                                 (0x0F000000)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_10_mask                                (0x00F00000)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_11_mask                                (0x000F0000)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_12_mask                                (0x0000F000)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_13_mask                                (0x00000F00)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_14_mask                                (0x000000F0)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_15_mask                                (0x0000000F)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_8(data)                                (0xF0000000&((data)<<28))
#define  ALF_ALF_PAR1_alf_coeff_idx_table_9(data)                                (0x0F000000&((data)<<24))
#define  ALF_ALF_PAR1_alf_coeff_idx_table_10(data)                               (0x00F00000&((data)<<20))
#define  ALF_ALF_PAR1_alf_coeff_idx_table_11(data)                               (0x000F0000&((data)<<16))
#define  ALF_ALF_PAR1_alf_coeff_idx_table_12(data)                               (0x0000F000&((data)<<12))
#define  ALF_ALF_PAR1_alf_coeff_idx_table_13(data)                               (0x00000F00&((data)<<8))
#define  ALF_ALF_PAR1_alf_coeff_idx_table_14(data)                               (0x000000F0&((data)<<4))
#define  ALF_ALF_PAR1_alf_coeff_idx_table_15(data)                               (0x0000000F&(data))
#define  ALF_ALF_PAR1_get_alf_coeff_idx_table_8(data)                            ((0xF0000000&(data))>>28)
#define  ALF_ALF_PAR1_get_alf_coeff_idx_table_9(data)                            ((0x0F000000&(data))>>24)
#define  ALF_ALF_PAR1_get_alf_coeff_idx_table_10(data)                           ((0x00F00000&(data))>>20)
#define  ALF_ALF_PAR1_get_alf_coeff_idx_table_11(data)                           ((0x000F0000&(data))>>16)
#define  ALF_ALF_PAR1_get_alf_coeff_idx_table_12(data)                           ((0x0000F000&(data))>>12)
#define  ALF_ALF_PAR1_get_alf_coeff_idx_table_13(data)                           ((0x00000F00&(data))>>8)
#define  ALF_ALF_PAR1_get_alf_coeff_idx_table_14(data)                           ((0x000000F0&(data))>>4)
#define  ALF_ALF_PAR1_get_alf_coeff_idx_table_15(data)                           (0x0000000F&(data))
#define  ALF_ALF_PAR1_alf_coeff_idx_table_8_src(data)                            ((0xF0000000&(data))>>28)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_9_src(data)                            ((0x0F000000&(data))>>24)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_10_src(data)                           ((0x00F00000&(data))>>20)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_11_src(data)                           ((0x000F0000&(data))>>16)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_12_src(data)                           ((0x0000F000&(data))>>12)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_13_src(data)                           ((0x00000F00&(data))>>8)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_14_src(data)                           ((0x000000F0&(data))>>4)
#define  ALF_ALF_PAR1_alf_coeff_idx_table_15_src(data)                           (0x0000000F&(data))

#define  ALF_ALF_PAR2                                                           0x1800F50C
#define  ALF_ALF_PAR2_reg_addr                                                   "0xB800F50C"
#define  ALF_ALF_PAR2_reg                                                        0xB800F50C
#define  ALF_ALF_PAR2_inst_addr                                                  "0x0003"
#define  ALF_ALF_PAR2_inst_adr                                                   "0x0043"
#define  ALF_ALF_PAR2_inst                                                       0x0043
#define  set_ALF_ALF_PAR2_reg(data)                                              (*((volatile unsigned int*)ALF_ALF_PAR2_reg)=data)
#define  get_ALF_ALF_PAR2_reg                                                    (*((volatile unsigned int*)ALF_ALF_PAR2_reg))
#define  ALF_ALF_PAR2_x_interval_shift                                           (11)
#define  ALF_ALF_PAR2_y_internal_shift                                           (0)
#define  ALF_ALF_PAR2_x_interval_mask                                            (0x007FF800)
#define  ALF_ALF_PAR2_y_internal_mask                                            (0x000007FF)
#define  ALF_ALF_PAR2_x_interval(data)                                           (0x007FF800&((data)<<11))
#define  ALF_ALF_PAR2_y_internal(data)                                           (0x000007FF&(data))
#define  ALF_ALF_PAR2_get_x_interval(data)                                       ((0x007FF800&(data))>>11)
#define  ALF_ALF_PAR2_get_y_internal(data)                                       (0x000007FF&(data))
#define  ALF_ALF_PAR2_x_interval_src(data)                                       ((0x007FF800&(data))>>11)
#define  ALF_ALF_PAR2_y_internal_src(data)                                       (0x000007FF&(data))

#define  ALF_ALF_COEF_Y_A_0                                                     0x1800F510
#define  ALF_ALF_COEF_Y_A_0_reg_addr                                             "0xB800F510"
#define  ALF_ALF_COEF_Y_A_0_reg                                                  0xB800F510
#define  ALF_ALF_COEF_Y_A_0_inst_addr                                            "0x0004"
#define  ALF_ALF_COEF_Y_A_0_inst_adr                                             "0x0044"
#define  ALF_ALF_COEF_Y_A_0_inst                                                 0x0044
#define  set_ALF_ALF_COEF_Y_A_0_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_0_reg)=data)
#define  get_ALF_ALF_COEF_Y_A_0_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_0_reg))
#define  ALF_ALF_COEF_Y_A_alf_coeff_luma0_shift                                  (21)
#define  ALF_ALF_COEF_Y_A_alf_coeff_luma1_shift                                  (14)
#define  ALF_ALF_COEF_Y_A_alf_coeff_luma2_shift                                  (7)
#define  ALF_ALF_COEF_Y_A_alf_coeff_luma3_shift                                  (0)
#define  ALF_ALF_COEF_Y_A_alf_coeff_luma0_mask                                   (0x0FE00000)
#define  ALF_ALF_COEF_Y_A_alf_coeff_luma1_mask                                   (0x001FC000)
#define  ALF_ALF_COEF_Y_A_alf_coeff_luma2_mask                                   (0x00003F80)
#define  ALF_ALF_COEF_Y_A_alf_coeff_luma3_mask                                   (0x0000007F)
#define  ALF_ALF_COEF_Y_A_alf_coeff_luma0(data)                                  (0x0FE00000&((data)<<21))
#define  ALF_ALF_COEF_Y_A_alf_coeff_luma1(data)                                  (0x001FC000&((data)<<14))
#define  ALF_ALF_COEF_Y_A_alf_coeff_luma2(data)                                  (0x00003F80&((data)<<7))
#define  ALF_ALF_COEF_Y_A_alf_coeff_luma3(data)                                  (0x0000007F&(data))
#define  ALF_ALF_COEF_Y_A_get_alf_coeff_luma0(data)                              ((0x0FE00000&(data))>>21)
#define  ALF_ALF_COEF_Y_A_get_alf_coeff_luma1(data)                              ((0x001FC000&(data))>>14)
#define  ALF_ALF_COEF_Y_A_get_alf_coeff_luma2(data)                              ((0x00003F80&(data))>>7)
#define  ALF_ALF_COEF_Y_A_get_alf_coeff_luma3(data)                              (0x0000007F&(data))
#define  ALF_ALF_COEF_Y_A_alf_coeff_luma0_src(data)                              ((0x0FE00000&(data))>>21)
#define  ALF_ALF_COEF_Y_A_alf_coeff_luma1_src(data)                              ((0x001FC000&(data))>>14)
#define  ALF_ALF_COEF_Y_A_alf_coeff_luma2_src(data)                              ((0x00003F80&(data))>>7)
#define  ALF_ALF_COEF_Y_A_alf_coeff_luma3_src(data)                              (0x0000007F&(data))

#define  ALF_ALF_COEF_Y_A_1                                                     0x1800F514
#define  ALF_ALF_COEF_Y_A_1_reg_addr                                             "0xB800F514"
#define  ALF_ALF_COEF_Y_A_1_reg                                                  0xB800F514
#define  ALF_ALF_COEF_Y_A_1_inst_addr                                            "0x0005"
#define  ALF_ALF_COEF_Y_A_1_inst_adr                                             "0x0045"
#define  ALF_ALF_COEF_Y_A_1_inst                                                 0x0045
#define  set_ALF_ALF_COEF_Y_A_1_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_1_reg)=data)
#define  get_ALF_ALF_COEF_Y_A_1_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_1_reg))

#define  ALF_ALF_COEF_Y_A_2                                                     0x1800F518
#define  ALF_ALF_COEF_Y_A_2_reg_addr                                             "0xB800F518"
#define  ALF_ALF_COEF_Y_A_2_reg                                                  0xB800F518
#define  ALF_ALF_COEF_Y_A_2_inst_addr                                            "0x0006"
#define  ALF_ALF_COEF_Y_A_2_inst_adr                                             "0x0046"
#define  ALF_ALF_COEF_Y_A_2_inst                                                 0x0046
#define  set_ALF_ALF_COEF_Y_A_2_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_2_reg)=data)
#define  get_ALF_ALF_COEF_Y_A_2_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_2_reg))

#define  ALF_ALF_COEF_Y_A_3                                                     0x1800F51C
#define  ALF_ALF_COEF_Y_A_3_reg_addr                                             "0xB800F51C"
#define  ALF_ALF_COEF_Y_A_3_reg                                                  0xB800F51C
#define  ALF_ALF_COEF_Y_A_3_inst_addr                                            "0x0007"
#define  ALF_ALF_COEF_Y_A_3_inst_adr                                             "0x0047"
#define  ALF_ALF_COEF_Y_A_3_inst                                                 0x0047
#define  set_ALF_ALF_COEF_Y_A_3_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_3_reg)=data)
#define  get_ALF_ALF_COEF_Y_A_3_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_3_reg))

#define  ALF_ALF_COEF_Y_A_4                                                     0x1800F520
#define  ALF_ALF_COEF_Y_A_4_reg_addr                                             "0xB800F520"
#define  ALF_ALF_COEF_Y_A_4_reg                                                  0xB800F520
#define  ALF_ALF_COEF_Y_A_4_inst_addr                                            "0x0008"
#define  ALF_ALF_COEF_Y_A_4_inst_adr                                             "0x0048"
#define  ALF_ALF_COEF_Y_A_4_inst                                                 0x0048
#define  set_ALF_ALF_COEF_Y_A_4_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_4_reg)=data)
#define  get_ALF_ALF_COEF_Y_A_4_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_4_reg))

#define  ALF_ALF_COEF_Y_A_5                                                     0x1800F524
#define  ALF_ALF_COEF_Y_A_5_reg_addr                                             "0xB800F524"
#define  ALF_ALF_COEF_Y_A_5_reg                                                  0xB800F524
#define  ALF_ALF_COEF_Y_A_5_inst_addr                                            "0x0009"
#define  ALF_ALF_COEF_Y_A_5_inst_adr                                             "0x0049"
#define  ALF_ALF_COEF_Y_A_5_inst                                                 0x0049
#define  set_ALF_ALF_COEF_Y_A_5_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_5_reg)=data)
#define  get_ALF_ALF_COEF_Y_A_5_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_5_reg))

#define  ALF_ALF_COEF_Y_A_6                                                     0x1800F528
#define  ALF_ALF_COEF_Y_A_6_reg_addr                                             "0xB800F528"
#define  ALF_ALF_COEF_Y_A_6_reg                                                  0xB800F528
#define  ALF_ALF_COEF_Y_A_6_inst_addr                                            "0x000A"
#define  ALF_ALF_COEF_Y_A_6_inst_adr                                             "0x004A"
#define  ALF_ALF_COEF_Y_A_6_inst                                                 0x004A
#define  set_ALF_ALF_COEF_Y_A_6_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_6_reg)=data)
#define  get_ALF_ALF_COEF_Y_A_6_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_6_reg))

#define  ALF_ALF_COEF_Y_A_7                                                     0x1800F52C
#define  ALF_ALF_COEF_Y_A_7_reg_addr                                             "0xB800F52C"
#define  ALF_ALF_COEF_Y_A_7_reg                                                  0xB800F52C
#define  ALF_ALF_COEF_Y_A_7_inst_addr                                            "0x000B"
#define  ALF_ALF_COEF_Y_A_7_inst_adr                                             "0x004B"
#define  ALF_ALF_COEF_Y_A_7_inst                                                 0x004B
#define  set_ALF_ALF_COEF_Y_A_7_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_7_reg)=data)
#define  get_ALF_ALF_COEF_Y_A_7_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_7_reg))

#define  ALF_ALF_COEF_Y_A_8                                                     0x1800F530
#define  ALF_ALF_COEF_Y_A_8_reg_addr                                             "0xB800F530"
#define  ALF_ALF_COEF_Y_A_8_reg                                                  0xB800F530
#define  ALF_ALF_COEF_Y_A_8_inst_addr                                            "0x000C"
#define  ALF_ALF_COEF_Y_A_8_inst_adr                                             "0x004C"
#define  ALF_ALF_COEF_Y_A_8_inst                                                 0x004C
#define  set_ALF_ALF_COEF_Y_A_8_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_8_reg)=data)
#define  get_ALF_ALF_COEF_Y_A_8_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_8_reg))

#define  ALF_ALF_COEF_Y_A_9                                                     0x1800F534
#define  ALF_ALF_COEF_Y_A_9_reg_addr                                             "0xB800F534"
#define  ALF_ALF_COEF_Y_A_9_reg                                                  0xB800F534
#define  ALF_ALF_COEF_Y_A_9_inst_addr                                            "0x000D"
#define  ALF_ALF_COEF_Y_A_9_inst_adr                                             "0x004D"
#define  ALF_ALF_COEF_Y_A_9_inst                                                 0x004D
#define  set_ALF_ALF_COEF_Y_A_9_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_9_reg)=data)
#define  get_ALF_ALF_COEF_Y_A_9_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_9_reg))

#define  ALF_ALF_COEF_Y_A_10                                                    0x1800F538
#define  ALF_ALF_COEF_Y_A_10_reg_addr                                            "0xB800F538"
#define  ALF_ALF_COEF_Y_A_10_reg                                                 0xB800F538
#define  ALF_ALF_COEF_Y_A_10_inst_addr                                           "0x000E"
#define  ALF_ALF_COEF_Y_A_10_inst_adr                                            "0x004E"
#define  ALF_ALF_COEF_Y_A_10_inst                                                0x004E
#define  set_ALF_ALF_COEF_Y_A_10_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_10_reg)=data)
#define  get_ALF_ALF_COEF_Y_A_10_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_10_reg))

#define  ALF_ALF_COEF_Y_A_11                                                    0x1800F53C
#define  ALF_ALF_COEF_Y_A_11_reg_addr                                            "0xB800F53C"
#define  ALF_ALF_COEF_Y_A_11_reg                                                 0xB800F53C
#define  ALF_ALF_COEF_Y_A_11_inst_addr                                           "0x000F"
#define  ALF_ALF_COEF_Y_A_11_inst_adr                                            "0x004F"
#define  ALF_ALF_COEF_Y_A_11_inst                                                0x004F
#define  set_ALF_ALF_COEF_Y_A_11_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_11_reg)=data)
#define  get_ALF_ALF_COEF_Y_A_11_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_11_reg))

#define  ALF_ALF_COEF_Y_A_12                                                    0x1800F540
#define  ALF_ALF_COEF_Y_A_12_reg_addr                                            "0xB800F540"
#define  ALF_ALF_COEF_Y_A_12_reg                                                 0xB800F540
#define  ALF_ALF_COEF_Y_A_12_inst_addr                                           "0x0010"
#define  ALF_ALF_COEF_Y_A_12_inst_adr                                            "0x0050"
#define  ALF_ALF_COEF_Y_A_12_inst                                                0x0050
#define  set_ALF_ALF_COEF_Y_A_12_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_12_reg)=data)
#define  get_ALF_ALF_COEF_Y_A_12_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_12_reg))

#define  ALF_ALF_COEF_Y_A_13                                                    0x1800F544
#define  ALF_ALF_COEF_Y_A_13_reg_addr                                            "0xB800F544"
#define  ALF_ALF_COEF_Y_A_13_reg                                                 0xB800F544
#define  ALF_ALF_COEF_Y_A_13_inst_addr                                           "0x0011"
#define  ALF_ALF_COEF_Y_A_13_inst_adr                                            "0x0051"
#define  ALF_ALF_COEF_Y_A_13_inst                                                0x0051
#define  set_ALF_ALF_COEF_Y_A_13_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_13_reg)=data)
#define  get_ALF_ALF_COEF_Y_A_13_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_13_reg))

#define  ALF_ALF_COEF_Y_A_14                                                    0x1800F548
#define  ALF_ALF_COEF_Y_A_14_reg_addr                                            "0xB800F548"
#define  ALF_ALF_COEF_Y_A_14_reg                                                 0xB800F548
#define  ALF_ALF_COEF_Y_A_14_inst_addr                                           "0x0012"
#define  ALF_ALF_COEF_Y_A_14_inst_adr                                            "0x0052"
#define  ALF_ALF_COEF_Y_A_14_inst                                                0x0052
#define  set_ALF_ALF_COEF_Y_A_14_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_14_reg)=data)
#define  get_ALF_ALF_COEF_Y_A_14_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_14_reg))

#define  ALF_ALF_COEF_Y_A_15                                                    0x1800F54C
#define  ALF_ALF_COEF_Y_A_15_reg_addr                                            "0xB800F54C"
#define  ALF_ALF_COEF_Y_A_15_reg                                                 0xB800F54C
#define  ALF_ALF_COEF_Y_A_15_inst_addr                                           "0x0013"
#define  ALF_ALF_COEF_Y_A_15_inst_adr                                            "0x0053"
#define  ALF_ALF_COEF_Y_A_15_inst                                                0x0053
#define  set_ALF_ALF_COEF_Y_A_15_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_15_reg)=data)
#define  get_ALF_ALF_COEF_Y_A_15_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_A_15_reg))

#define  ALF_ALF_COEF_Y_B_0                                                     0x1800F550
#define  ALF_ALF_COEF_Y_B_0_reg_addr                                             "0xB800F550"
#define  ALF_ALF_COEF_Y_B_0_reg                                                  0xB800F550
#define  ALF_ALF_COEF_Y_B_0_inst_addr                                            "0x0014"
#define  ALF_ALF_COEF_Y_B_0_inst_adr                                             "0x0054"
#define  ALF_ALF_COEF_Y_B_0_inst                                                 0x0054
#define  set_ALF_ALF_COEF_Y_B_0_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_0_reg)=data)
#define  get_ALF_ALF_COEF_Y_B_0_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_0_reg))
#define  ALF_ALF_COEF_Y_B_alf_coeff_luma4_shift                                  (21)
#define  ALF_ALF_COEF_Y_B_alf_coeff_luma5_shift                                  (14)
#define  ALF_ALF_COEF_Y_B_alf_coeff_luma6_shift                                  (7)
#define  ALF_ALF_COEF_Y_B_alf_coeff_luma7_shift                                  (0)
#define  ALF_ALF_COEF_Y_B_alf_coeff_luma4_mask                                   (0x0FE00000)
#define  ALF_ALF_COEF_Y_B_alf_coeff_luma5_mask                                   (0x001FC000)
#define  ALF_ALF_COEF_Y_B_alf_coeff_luma6_mask                                   (0x00003F80)
#define  ALF_ALF_COEF_Y_B_alf_coeff_luma7_mask                                   (0x0000007F)
#define  ALF_ALF_COEF_Y_B_alf_coeff_luma4(data)                                  (0x0FE00000&((data)<<21))
#define  ALF_ALF_COEF_Y_B_alf_coeff_luma5(data)                                  (0x001FC000&((data)<<14))
#define  ALF_ALF_COEF_Y_B_alf_coeff_luma6(data)                                  (0x00003F80&((data)<<7))
#define  ALF_ALF_COEF_Y_B_alf_coeff_luma7(data)                                  (0x0000007F&(data))
#define  ALF_ALF_COEF_Y_B_get_alf_coeff_luma4(data)                              ((0x0FE00000&(data))>>21)
#define  ALF_ALF_COEF_Y_B_get_alf_coeff_luma5(data)                              ((0x001FC000&(data))>>14)
#define  ALF_ALF_COEF_Y_B_get_alf_coeff_luma6(data)                              ((0x00003F80&(data))>>7)
#define  ALF_ALF_COEF_Y_B_get_alf_coeff_luma7(data)                              (0x0000007F&(data))
#define  ALF_ALF_COEF_Y_B_alf_coeff_luma4_src(data)                              ((0x0FE00000&(data))>>21)
#define  ALF_ALF_COEF_Y_B_alf_coeff_luma5_src(data)                              ((0x001FC000&(data))>>14)
#define  ALF_ALF_COEF_Y_B_alf_coeff_luma6_src(data)                              ((0x00003F80&(data))>>7)
#define  ALF_ALF_COEF_Y_B_alf_coeff_luma7_src(data)                              (0x0000007F&(data))

#define  ALF_ALF_COEF_Y_B_1                                                     0x1800F554
#define  ALF_ALF_COEF_Y_B_1_reg_addr                                             "0xB800F554"
#define  ALF_ALF_COEF_Y_B_1_reg                                                  0xB800F554
#define  ALF_ALF_COEF_Y_B_1_inst_addr                                            "0x0015"
#define  ALF_ALF_COEF_Y_B_1_inst_adr                                             "0x0055"
#define  ALF_ALF_COEF_Y_B_1_inst                                                 0x0055
#define  set_ALF_ALF_COEF_Y_B_1_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_1_reg)=data)
#define  get_ALF_ALF_COEF_Y_B_1_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_1_reg))

#define  ALF_ALF_COEF_Y_B_2                                                     0x1800F558
#define  ALF_ALF_COEF_Y_B_2_reg_addr                                             "0xB800F558"
#define  ALF_ALF_COEF_Y_B_2_reg                                                  0xB800F558
#define  ALF_ALF_COEF_Y_B_2_inst_addr                                            "0x0016"
#define  ALF_ALF_COEF_Y_B_2_inst_adr                                             "0x0056"
#define  ALF_ALF_COEF_Y_B_2_inst                                                 0x0056
#define  set_ALF_ALF_COEF_Y_B_2_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_2_reg)=data)
#define  get_ALF_ALF_COEF_Y_B_2_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_2_reg))

#define  ALF_ALF_COEF_Y_B_3                                                     0x1800F55C
#define  ALF_ALF_COEF_Y_B_3_reg_addr                                             "0xB800F55C"
#define  ALF_ALF_COEF_Y_B_3_reg                                                  0xB800F55C
#define  ALF_ALF_COEF_Y_B_3_inst_addr                                            "0x0017"
#define  ALF_ALF_COEF_Y_B_3_inst_adr                                             "0x0057"
#define  ALF_ALF_COEF_Y_B_3_inst                                                 0x0057
#define  set_ALF_ALF_COEF_Y_B_3_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_3_reg)=data)
#define  get_ALF_ALF_COEF_Y_B_3_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_3_reg))

#define  ALF_ALF_COEF_Y_B_4                                                     0x1800F560
#define  ALF_ALF_COEF_Y_B_4_reg_addr                                             "0xB800F560"
#define  ALF_ALF_COEF_Y_B_4_reg                                                  0xB800F560
#define  ALF_ALF_COEF_Y_B_4_inst_addr                                            "0x0018"
#define  ALF_ALF_COEF_Y_B_4_inst_adr                                             "0x0058"
#define  ALF_ALF_COEF_Y_B_4_inst                                                 0x0058
#define  set_ALF_ALF_COEF_Y_B_4_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_4_reg)=data)
#define  get_ALF_ALF_COEF_Y_B_4_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_4_reg))

#define  ALF_ALF_COEF_Y_B_5                                                     0x1800F564
#define  ALF_ALF_COEF_Y_B_5_reg_addr                                             "0xB800F564"
#define  ALF_ALF_COEF_Y_B_5_reg                                                  0xB800F564
#define  ALF_ALF_COEF_Y_B_5_inst_addr                                            "0x0019"
#define  ALF_ALF_COEF_Y_B_5_inst_adr                                             "0x0059"
#define  ALF_ALF_COEF_Y_B_5_inst                                                 0x0059
#define  set_ALF_ALF_COEF_Y_B_5_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_5_reg)=data)
#define  get_ALF_ALF_COEF_Y_B_5_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_5_reg))

#define  ALF_ALF_COEF_Y_B_6                                                     0x1800F568
#define  ALF_ALF_COEF_Y_B_6_reg_addr                                             "0xB800F568"
#define  ALF_ALF_COEF_Y_B_6_reg                                                  0xB800F568
#define  ALF_ALF_COEF_Y_B_6_inst_addr                                            "0x001A"
#define  ALF_ALF_COEF_Y_B_6_inst_adr                                             "0x005A"
#define  ALF_ALF_COEF_Y_B_6_inst                                                 0x005A
#define  set_ALF_ALF_COEF_Y_B_6_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_6_reg)=data)
#define  get_ALF_ALF_COEF_Y_B_6_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_6_reg))

#define  ALF_ALF_COEF_Y_B_7                                                     0x1800F56C
#define  ALF_ALF_COEF_Y_B_7_reg_addr                                             "0xB800F56C"
#define  ALF_ALF_COEF_Y_B_7_reg                                                  0xB800F56C
#define  ALF_ALF_COEF_Y_B_7_inst_addr                                            "0x001B"
#define  ALF_ALF_COEF_Y_B_7_inst_adr                                             "0x005B"
#define  ALF_ALF_COEF_Y_B_7_inst                                                 0x005B
#define  set_ALF_ALF_COEF_Y_B_7_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_7_reg)=data)
#define  get_ALF_ALF_COEF_Y_B_7_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_7_reg))

#define  ALF_ALF_COEF_Y_B_8                                                     0x1800F570
#define  ALF_ALF_COEF_Y_B_8_reg_addr                                             "0xB800F570"
#define  ALF_ALF_COEF_Y_B_8_reg                                                  0xB800F570
#define  ALF_ALF_COEF_Y_B_8_inst_addr                                            "0x001C"
#define  ALF_ALF_COEF_Y_B_8_inst_adr                                             "0x005C"
#define  ALF_ALF_COEF_Y_B_8_inst                                                 0x005C
#define  set_ALF_ALF_COEF_Y_B_8_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_8_reg)=data)
#define  get_ALF_ALF_COEF_Y_B_8_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_8_reg))

#define  ALF_ALF_COEF_Y_B_9                                                     0x1800F574
#define  ALF_ALF_COEF_Y_B_9_reg_addr                                             "0xB800F574"
#define  ALF_ALF_COEF_Y_B_9_reg                                                  0xB800F574
#define  ALF_ALF_COEF_Y_B_9_inst_addr                                            "0x001D"
#define  ALF_ALF_COEF_Y_B_9_inst_adr                                             "0x005D"
#define  ALF_ALF_COEF_Y_B_9_inst                                                 0x005D
#define  set_ALF_ALF_COEF_Y_B_9_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_9_reg)=data)
#define  get_ALF_ALF_COEF_Y_B_9_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_9_reg))

#define  ALF_ALF_COEF_Y_B_10                                                    0x1800F578
#define  ALF_ALF_COEF_Y_B_10_reg_addr                                            "0xB800F578"
#define  ALF_ALF_COEF_Y_B_10_reg                                                 0xB800F578
#define  ALF_ALF_COEF_Y_B_10_inst_addr                                           "0x001E"
#define  ALF_ALF_COEF_Y_B_10_inst_adr                                            "0x005E"
#define  ALF_ALF_COEF_Y_B_10_inst                                                0x005E
#define  set_ALF_ALF_COEF_Y_B_10_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_10_reg)=data)
#define  get_ALF_ALF_COEF_Y_B_10_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_10_reg))

#define  ALF_ALF_COEF_Y_B_11                                                    0x1800F57C
#define  ALF_ALF_COEF_Y_B_11_reg_addr                                            "0xB800F57C"
#define  ALF_ALF_COEF_Y_B_11_reg                                                 0xB800F57C
#define  ALF_ALF_COEF_Y_B_11_inst_addr                                           "0x001F"
#define  ALF_ALF_COEF_Y_B_11_inst_adr                                            "0x005F"
#define  ALF_ALF_COEF_Y_B_11_inst                                                0x005F
#define  set_ALF_ALF_COEF_Y_B_11_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_11_reg)=data)
#define  get_ALF_ALF_COEF_Y_B_11_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_11_reg))

#define  ALF_ALF_COEF_Y_B_12                                                    0x1800F580
#define  ALF_ALF_COEF_Y_B_12_reg_addr                                            "0xB800F580"
#define  ALF_ALF_COEF_Y_B_12_reg                                                 0xB800F580
#define  ALF_ALF_COEF_Y_B_12_inst_addr                                           "0x0020"
#define  ALF_ALF_COEF_Y_B_12_inst_adr                                            "0x0060"
#define  ALF_ALF_COEF_Y_B_12_inst                                                0x0060
#define  set_ALF_ALF_COEF_Y_B_12_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_12_reg)=data)
#define  get_ALF_ALF_COEF_Y_B_12_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_12_reg))

#define  ALF_ALF_COEF_Y_B_13                                                    0x1800F584
#define  ALF_ALF_COEF_Y_B_13_reg_addr                                            "0xB800F584"
#define  ALF_ALF_COEF_Y_B_13_reg                                                 0xB800F584
#define  ALF_ALF_COEF_Y_B_13_inst_addr                                           "0x0021"
#define  ALF_ALF_COEF_Y_B_13_inst_adr                                            "0x0061"
#define  ALF_ALF_COEF_Y_B_13_inst                                                0x0061
#define  set_ALF_ALF_COEF_Y_B_13_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_13_reg)=data)
#define  get_ALF_ALF_COEF_Y_B_13_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_13_reg))

#define  ALF_ALF_COEF_Y_B_14                                                    0x1800F588
#define  ALF_ALF_COEF_Y_B_14_reg_addr                                            "0xB800F588"
#define  ALF_ALF_COEF_Y_B_14_reg                                                 0xB800F588
#define  ALF_ALF_COEF_Y_B_14_inst_addr                                           "0x0022"
#define  ALF_ALF_COEF_Y_B_14_inst_adr                                            "0x0062"
#define  ALF_ALF_COEF_Y_B_14_inst                                                0x0062
#define  set_ALF_ALF_COEF_Y_B_14_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_14_reg)=data)
#define  get_ALF_ALF_COEF_Y_B_14_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_14_reg))

#define  ALF_ALF_COEF_Y_B_15                                                    0x1800F58C
#define  ALF_ALF_COEF_Y_B_15_reg_addr                                            "0xB800F58C"
#define  ALF_ALF_COEF_Y_B_15_reg                                                 0xB800F58C
#define  ALF_ALF_COEF_Y_B_15_inst_addr                                           "0x0023"
#define  ALF_ALF_COEF_Y_B_15_inst_adr                                            "0x0063"
#define  ALF_ALF_COEF_Y_B_15_inst                                                0x0063
#define  set_ALF_ALF_COEF_Y_B_15_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_15_reg)=data)
#define  get_ALF_ALF_COEF_Y_B_15_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_B_15_reg))

#define  ALF_ALF_COEF_Y_C_0                                                     0x1800F590
#define  ALF_ALF_COEF_Y_C_0_reg_addr                                             "0xB800F590"
#define  ALF_ALF_COEF_Y_C_0_reg                                                  0xB800F590
#define  ALF_ALF_COEF_Y_C_0_inst_addr                                            "0x0024"
#define  ALF_ALF_COEF_Y_C_0_inst_adr                                             "0x0064"
#define  ALF_ALF_COEF_Y_C_0_inst                                                 0x0064
#define  set_ALF_ALF_COEF_Y_C_0_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_0_reg)=data)
#define  get_ALF_ALF_COEF_Y_C_0_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_0_reg))
#define  ALF_ALF_COEF_Y_C_alf_coeff_luma8_shift                                  (0)
#define  ALF_ALF_COEF_Y_C_alf_coeff_luma8_mask                                   (0x0000007F)
#define  ALF_ALF_COEF_Y_C_alf_coeff_luma8(data)                                  (0x0000007F&(data))
#define  ALF_ALF_COEF_Y_C_get_alf_coeff_luma8(data)                              (0x0000007F&(data))
#define  ALF_ALF_COEF_Y_C_alf_coeff_luma8_src(data)                              (0x0000007F&(data))

#define  ALF_ALF_COEF_Y_C_1                                                     0x1800F594
#define  ALF_ALF_COEF_Y_C_1_reg_addr                                             "0xB800F594"
#define  ALF_ALF_COEF_Y_C_1_reg                                                  0xB800F594
#define  ALF_ALF_COEF_Y_C_1_inst_addr                                            "0x0025"
#define  ALF_ALF_COEF_Y_C_1_inst_adr                                             "0x0065"
#define  ALF_ALF_COEF_Y_C_1_inst                                                 0x0065
#define  set_ALF_ALF_COEF_Y_C_1_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_1_reg)=data)
#define  get_ALF_ALF_COEF_Y_C_1_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_1_reg))

#define  ALF_ALF_COEF_Y_C_2                                                     0x1800F598
#define  ALF_ALF_COEF_Y_C_2_reg_addr                                             "0xB800F598"
#define  ALF_ALF_COEF_Y_C_2_reg                                                  0xB800F598
#define  ALF_ALF_COEF_Y_C_2_inst_addr                                            "0x0026"
#define  ALF_ALF_COEF_Y_C_2_inst_adr                                             "0x0066"
#define  ALF_ALF_COEF_Y_C_2_inst                                                 0x0066
#define  set_ALF_ALF_COEF_Y_C_2_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_2_reg)=data)
#define  get_ALF_ALF_COEF_Y_C_2_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_2_reg))

#define  ALF_ALF_COEF_Y_C_3                                                     0x1800F59C
#define  ALF_ALF_COEF_Y_C_3_reg_addr                                             "0xB800F59C"
#define  ALF_ALF_COEF_Y_C_3_reg                                                  0xB800F59C
#define  ALF_ALF_COEF_Y_C_3_inst_addr                                            "0x0027"
#define  ALF_ALF_COEF_Y_C_3_inst_adr                                             "0x0067"
#define  ALF_ALF_COEF_Y_C_3_inst                                                 0x0067
#define  set_ALF_ALF_COEF_Y_C_3_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_3_reg)=data)
#define  get_ALF_ALF_COEF_Y_C_3_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_3_reg))

#define  ALF_ALF_COEF_Y_C_4                                                     0x1800F5A0
#define  ALF_ALF_COEF_Y_C_4_reg_addr                                             "0xB800F5A0"
#define  ALF_ALF_COEF_Y_C_4_reg                                                  0xB800F5A0
#define  ALF_ALF_COEF_Y_C_4_inst_addr                                            "0x0028"
#define  ALF_ALF_COEF_Y_C_4_inst_adr                                             "0x0068"
#define  ALF_ALF_COEF_Y_C_4_inst                                                 0x0068
#define  set_ALF_ALF_COEF_Y_C_4_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_4_reg)=data)
#define  get_ALF_ALF_COEF_Y_C_4_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_4_reg))

#define  ALF_ALF_COEF_Y_C_5                                                     0x1800F5A4
#define  ALF_ALF_COEF_Y_C_5_reg_addr                                             "0xB800F5A4"
#define  ALF_ALF_COEF_Y_C_5_reg                                                  0xB800F5A4
#define  ALF_ALF_COEF_Y_C_5_inst_addr                                            "0x0029"
#define  ALF_ALF_COEF_Y_C_5_inst_adr                                             "0x0069"
#define  ALF_ALF_COEF_Y_C_5_inst                                                 0x0069
#define  set_ALF_ALF_COEF_Y_C_5_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_5_reg)=data)
#define  get_ALF_ALF_COEF_Y_C_5_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_5_reg))

#define  ALF_ALF_COEF_Y_C_6                                                     0x1800F5A8
#define  ALF_ALF_COEF_Y_C_6_reg_addr                                             "0xB800F5A8"
#define  ALF_ALF_COEF_Y_C_6_reg                                                  0xB800F5A8
#define  ALF_ALF_COEF_Y_C_6_inst_addr                                            "0x002A"
#define  ALF_ALF_COEF_Y_C_6_inst_adr                                             "0x006A"
#define  ALF_ALF_COEF_Y_C_6_inst                                                 0x006A
#define  set_ALF_ALF_COEF_Y_C_6_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_6_reg)=data)
#define  get_ALF_ALF_COEF_Y_C_6_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_6_reg))

#define  ALF_ALF_COEF_Y_C_7                                                     0x1800F5AC
#define  ALF_ALF_COEF_Y_C_7_reg_addr                                             "0xB800F5AC"
#define  ALF_ALF_COEF_Y_C_7_reg                                                  0xB800F5AC
#define  ALF_ALF_COEF_Y_C_7_inst_addr                                            "0x002B"
#define  ALF_ALF_COEF_Y_C_7_inst_adr                                             "0x006B"
#define  ALF_ALF_COEF_Y_C_7_inst                                                 0x006B
#define  set_ALF_ALF_COEF_Y_C_7_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_7_reg)=data)
#define  get_ALF_ALF_COEF_Y_C_7_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_7_reg))

#define  ALF_ALF_COEF_Y_C_8                                                     0x1800F5B0
#define  ALF_ALF_COEF_Y_C_8_reg_addr                                             "0xB800F5B0"
#define  ALF_ALF_COEF_Y_C_8_reg                                                  0xB800F5B0
#define  ALF_ALF_COEF_Y_C_8_inst_addr                                            "0x002C"
#define  ALF_ALF_COEF_Y_C_8_inst_adr                                             "0x006C"
#define  ALF_ALF_COEF_Y_C_8_inst                                                 0x006C
#define  set_ALF_ALF_COEF_Y_C_8_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_8_reg)=data)
#define  get_ALF_ALF_COEF_Y_C_8_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_8_reg))

#define  ALF_ALF_COEF_Y_C_9                                                     0x1800F5B4
#define  ALF_ALF_COEF_Y_C_9_reg_addr                                             "0xB800F5B4"
#define  ALF_ALF_COEF_Y_C_9_reg                                                  0xB800F5B4
#define  ALF_ALF_COEF_Y_C_9_inst_addr                                            "0x002D"
#define  ALF_ALF_COEF_Y_C_9_inst_adr                                             "0x006D"
#define  ALF_ALF_COEF_Y_C_9_inst                                                 0x006D
#define  set_ALF_ALF_COEF_Y_C_9_reg(data)                                        (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_9_reg)=data)
#define  get_ALF_ALF_COEF_Y_C_9_reg                                              (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_9_reg))

#define  ALF_ALF_COEF_Y_C_10                                                    0x1800F5B8
#define  ALF_ALF_COEF_Y_C_10_reg_addr                                            "0xB800F5B8"
#define  ALF_ALF_COEF_Y_C_10_reg                                                 0xB800F5B8
#define  ALF_ALF_COEF_Y_C_10_inst_addr                                           "0x002E"
#define  ALF_ALF_COEF_Y_C_10_inst_adr                                            "0x006E"
#define  ALF_ALF_COEF_Y_C_10_inst                                                0x006E
#define  set_ALF_ALF_COEF_Y_C_10_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_10_reg)=data)
#define  get_ALF_ALF_COEF_Y_C_10_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_10_reg))

#define  ALF_ALF_COEF_Y_C_11                                                    0x1800F5BC
#define  ALF_ALF_COEF_Y_C_11_reg_addr                                            "0xB800F5BC"
#define  ALF_ALF_COEF_Y_C_11_reg                                                 0xB800F5BC
#define  ALF_ALF_COEF_Y_C_11_inst_addr                                           "0x002F"
#define  ALF_ALF_COEF_Y_C_11_inst_adr                                            "0x006F"
#define  ALF_ALF_COEF_Y_C_11_inst                                                0x006F
#define  set_ALF_ALF_COEF_Y_C_11_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_11_reg)=data)
#define  get_ALF_ALF_COEF_Y_C_11_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_11_reg))

#define  ALF_ALF_COEF_Y_C_12                                                    0x1800F5C0
#define  ALF_ALF_COEF_Y_C_12_reg_addr                                            "0xB800F5C0"
#define  ALF_ALF_COEF_Y_C_12_reg                                                 0xB800F5C0
#define  ALF_ALF_COEF_Y_C_12_inst_addr                                           "0x0030"
#define  ALF_ALF_COEF_Y_C_12_inst_adr                                            "0x0070"
#define  ALF_ALF_COEF_Y_C_12_inst                                                0x0070
#define  set_ALF_ALF_COEF_Y_C_12_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_12_reg)=data)
#define  get_ALF_ALF_COEF_Y_C_12_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_12_reg))

#define  ALF_ALF_COEF_Y_C_13                                                    0x1800F5C4
#define  ALF_ALF_COEF_Y_C_13_reg_addr                                            "0xB800F5C4"
#define  ALF_ALF_COEF_Y_C_13_reg                                                 0xB800F5C4
#define  ALF_ALF_COEF_Y_C_13_inst_addr                                           "0x0031"
#define  ALF_ALF_COEF_Y_C_13_inst_adr                                            "0x0071"
#define  ALF_ALF_COEF_Y_C_13_inst                                                0x0071
#define  set_ALF_ALF_COEF_Y_C_13_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_13_reg)=data)
#define  get_ALF_ALF_COEF_Y_C_13_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_13_reg))

#define  ALF_ALF_COEF_Y_C_14                                                    0x1800F5C8
#define  ALF_ALF_COEF_Y_C_14_reg_addr                                            "0xB800F5C8"
#define  ALF_ALF_COEF_Y_C_14_reg                                                 0xB800F5C8
#define  ALF_ALF_COEF_Y_C_14_inst_addr                                           "0x0032"
#define  ALF_ALF_COEF_Y_C_14_inst_adr                                            "0x0072"
#define  ALF_ALF_COEF_Y_C_14_inst                                                0x0072
#define  set_ALF_ALF_COEF_Y_C_14_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_14_reg)=data)
#define  get_ALF_ALF_COEF_Y_C_14_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_14_reg))

#define  ALF_ALF_COEF_Y_C_15                                                    0x1800F5CC
#define  ALF_ALF_COEF_Y_C_15_reg_addr                                            "0xB800F5CC"
#define  ALF_ALF_COEF_Y_C_15_reg                                                 0xB800F5CC
#define  ALF_ALF_COEF_Y_C_15_inst_addr                                           "0x0033"
#define  ALF_ALF_COEF_Y_C_15_inst_adr                                            "0x0073"
#define  ALF_ALF_COEF_Y_C_15_inst                                                0x0073
#define  set_ALF_ALF_COEF_Y_C_15_reg(data)                                       (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_15_reg)=data)
#define  get_ALF_ALF_COEF_Y_C_15_reg                                             (*((volatile unsigned int*)ALF_ALF_COEF_Y_C_15_reg))

#define  ALF_ALF_COEF_CB_A                                                      0x1800F5D0
#define  ALF_ALF_COEF_CB_A_reg_addr                                              "0xB800F5D0"
#define  ALF_ALF_COEF_CB_A_reg                                                   0xB800F5D0
#define  ALF_ALF_COEF_CB_A_inst_addr                                             "0x0034"
#define  ALF_ALF_COEF_CB_A_inst_adr                                              "0x0074"
#define  ALF_ALF_COEF_CB_A_inst                                                  0x0074
#define  set_ALF_ALF_COEF_CB_A_reg(data)                                         (*((volatile unsigned int*)ALF_ALF_COEF_CB_A_reg)=data)
#define  get_ALF_ALF_COEF_CB_A_reg                                               (*((volatile unsigned int*)ALF_ALF_COEF_CB_A_reg))
#define  ALF_ALF_COEF_CB_A_alf_coeff_cb0_shift                                   (21)
#define  ALF_ALF_COEF_CB_A_alf_coeff_cb1_shift                                   (14)
#define  ALF_ALF_COEF_CB_A_alf_coeff_cb2_shift                                   (7)
#define  ALF_ALF_COEF_CB_A_alf_coeff_cb3_shift                                   (0)
#define  ALF_ALF_COEF_CB_A_alf_coeff_cb0_mask                                    (0x0FE00000)
#define  ALF_ALF_COEF_CB_A_alf_coeff_cb1_mask                                    (0x001FC000)
#define  ALF_ALF_COEF_CB_A_alf_coeff_cb2_mask                                    (0x00003F80)
#define  ALF_ALF_COEF_CB_A_alf_coeff_cb3_mask                                    (0x0000007F)
#define  ALF_ALF_COEF_CB_A_alf_coeff_cb0(data)                                   (0x0FE00000&((data)<<21))
#define  ALF_ALF_COEF_CB_A_alf_coeff_cb1(data)                                   (0x001FC000&((data)<<14))
#define  ALF_ALF_COEF_CB_A_alf_coeff_cb2(data)                                   (0x00003F80&((data)<<7))
#define  ALF_ALF_COEF_CB_A_alf_coeff_cb3(data)                                   (0x0000007F&(data))
#define  ALF_ALF_COEF_CB_A_get_alf_coeff_cb0(data)                               ((0x0FE00000&(data))>>21)
#define  ALF_ALF_COEF_CB_A_get_alf_coeff_cb1(data)                               ((0x001FC000&(data))>>14)
#define  ALF_ALF_COEF_CB_A_get_alf_coeff_cb2(data)                               ((0x00003F80&(data))>>7)
#define  ALF_ALF_COEF_CB_A_get_alf_coeff_cb3(data)                               (0x0000007F&(data))
#define  ALF_ALF_COEF_CB_A_alf_coeff_cb0_src(data)                               ((0x0FE00000&(data))>>21)
#define  ALF_ALF_COEF_CB_A_alf_coeff_cb1_src(data)                               ((0x001FC000&(data))>>14)
#define  ALF_ALF_COEF_CB_A_alf_coeff_cb2_src(data)                               ((0x00003F80&(data))>>7)
#define  ALF_ALF_COEF_CB_A_alf_coeff_cb3_src(data)                               (0x0000007F&(data))

#define  ALF_ALF_COEF_CB_B                                                      0x1800F5D4
#define  ALF_ALF_COEF_CB_B_reg_addr                                              "0xB800F5D4"
#define  ALF_ALF_COEF_CB_B_reg                                                   0xB800F5D4
#define  ALF_ALF_COEF_CB_B_inst_addr                                             "0x0035"
#define  ALF_ALF_COEF_CB_B_inst_adr                                              "0x0075"
#define  ALF_ALF_COEF_CB_B_inst                                                  0x0075
#define  set_ALF_ALF_COEF_CB_B_reg(data)                                         (*((volatile unsigned int*)ALF_ALF_COEF_CB_B_reg)=data)
#define  get_ALF_ALF_COEF_CB_B_reg                                               (*((volatile unsigned int*)ALF_ALF_COEF_CB_B_reg))
#define  ALF_ALF_COEF_CB_B_alf_coeff_cb4_shift                                   (21)
#define  ALF_ALF_COEF_CB_B_alf_coeff_cb5_shift                                   (14)
#define  ALF_ALF_COEF_CB_B_alf_coeff_cb6_shift                                   (7)
#define  ALF_ALF_COEF_CB_B_alf_coeff_cb7_shift                                   (0)
#define  ALF_ALF_COEF_CB_B_alf_coeff_cb4_mask                                    (0x0FE00000)
#define  ALF_ALF_COEF_CB_B_alf_coeff_cb5_mask                                    (0x001FC000)
#define  ALF_ALF_COEF_CB_B_alf_coeff_cb6_mask                                    (0x00003F80)
#define  ALF_ALF_COEF_CB_B_alf_coeff_cb7_mask                                    (0x0000007F)
#define  ALF_ALF_COEF_CB_B_alf_coeff_cb4(data)                                   (0x0FE00000&((data)<<21))
#define  ALF_ALF_COEF_CB_B_alf_coeff_cb5(data)                                   (0x001FC000&((data)<<14))
#define  ALF_ALF_COEF_CB_B_alf_coeff_cb6(data)                                   (0x00003F80&((data)<<7))
#define  ALF_ALF_COEF_CB_B_alf_coeff_cb7(data)                                   (0x0000007F&(data))
#define  ALF_ALF_COEF_CB_B_get_alf_coeff_cb4(data)                               ((0x0FE00000&(data))>>21)
#define  ALF_ALF_COEF_CB_B_get_alf_coeff_cb5(data)                               ((0x001FC000&(data))>>14)
#define  ALF_ALF_COEF_CB_B_get_alf_coeff_cb6(data)                               ((0x00003F80&(data))>>7)
#define  ALF_ALF_COEF_CB_B_get_alf_coeff_cb7(data)                               (0x0000007F&(data))
#define  ALF_ALF_COEF_CB_B_alf_coeff_cb4_src(data)                               ((0x0FE00000&(data))>>21)
#define  ALF_ALF_COEF_CB_B_alf_coeff_cb5_src(data)                               ((0x001FC000&(data))>>14)
#define  ALF_ALF_COEF_CB_B_alf_coeff_cb6_src(data)                               ((0x00003F80&(data))>>7)
#define  ALF_ALF_COEF_CB_B_alf_coeff_cb7_src(data)                               (0x0000007F&(data))

#define  ALF_ALF_COEF_CB_C                                                      0x1800F5D8
#define  ALF_ALF_COEF_CB_C_reg_addr                                              "0xB800F5D8"
#define  ALF_ALF_COEF_CB_C_reg                                                   0xB800F5D8
#define  ALF_ALF_COEF_CB_C_inst_addr                                             "0x0036"
#define  ALF_ALF_COEF_CB_C_inst_adr                                              "0x0076"
#define  ALF_ALF_COEF_CB_C_inst                                                  0x0076
#define  set_ALF_ALF_COEF_CB_C_reg(data)                                         (*((volatile unsigned int*)ALF_ALF_COEF_CB_C_reg)=data)
#define  get_ALF_ALF_COEF_CB_C_reg                                               (*((volatile unsigned int*)ALF_ALF_COEF_CB_C_reg))
#define  ALF_ALF_COEF_CB_C_alf_coeff_cb8_shift                                   (0)
#define  ALF_ALF_COEF_CB_C_alf_coeff_cb8_mask                                    (0x0000007F)
#define  ALF_ALF_COEF_CB_C_alf_coeff_cb8(data)                                   (0x0000007F&(data))
#define  ALF_ALF_COEF_CB_C_get_alf_coeff_cb8(data)                               (0x0000007F&(data))
#define  ALF_ALF_COEF_CB_C_alf_coeff_cb8_src(data)                               (0x0000007F&(data))

#define  ALF_ALF_COEF_CR_A                                                      0x1800F5DC
#define  ALF_ALF_COEF_CR_A_reg_addr                                              "0xB800F5DC"
#define  ALF_ALF_COEF_CR_A_reg                                                   0xB800F5DC
#define  ALF_ALF_COEF_CR_A_inst_addr                                             "0x0037"
#define  ALF_ALF_COEF_CR_A_inst_adr                                              "0x0077"
#define  ALF_ALF_COEF_CR_A_inst                                                  0x0077
#define  set_ALF_ALF_COEF_CR_A_reg(data)                                         (*((volatile unsigned int*)ALF_ALF_COEF_CR_A_reg)=data)
#define  get_ALF_ALF_COEF_CR_A_reg                                               (*((volatile unsigned int*)ALF_ALF_COEF_CR_A_reg))
#define  ALF_ALF_COEF_CR_A_alf_coeff_cr0_shift                                   (21)
#define  ALF_ALF_COEF_CR_A_alf_coeff_cr1_shift                                   (14)
#define  ALF_ALF_COEF_CR_A_alf_coeff_cr2_shift                                   (7)
#define  ALF_ALF_COEF_CR_A_alf_coeff_cr3_shift                                   (0)
#define  ALF_ALF_COEF_CR_A_alf_coeff_cr0_mask                                    (0x0FE00000)
#define  ALF_ALF_COEF_CR_A_alf_coeff_cr1_mask                                    (0x001FC000)
#define  ALF_ALF_COEF_CR_A_alf_coeff_cr2_mask                                    (0x00003F80)
#define  ALF_ALF_COEF_CR_A_alf_coeff_cr3_mask                                    (0x0000007F)
#define  ALF_ALF_COEF_CR_A_alf_coeff_cr0(data)                                   (0x0FE00000&((data)<<21))
#define  ALF_ALF_COEF_CR_A_alf_coeff_cr1(data)                                   (0x001FC000&((data)<<14))
#define  ALF_ALF_COEF_CR_A_alf_coeff_cr2(data)                                   (0x00003F80&((data)<<7))
#define  ALF_ALF_COEF_CR_A_alf_coeff_cr3(data)                                   (0x0000007F&(data))
#define  ALF_ALF_COEF_CR_A_get_alf_coeff_cr0(data)                               ((0x0FE00000&(data))>>21)
#define  ALF_ALF_COEF_CR_A_get_alf_coeff_cr1(data)                               ((0x001FC000&(data))>>14)
#define  ALF_ALF_COEF_CR_A_get_alf_coeff_cr2(data)                               ((0x00003F80&(data))>>7)
#define  ALF_ALF_COEF_CR_A_get_alf_coeff_cr3(data)                               (0x0000007F&(data))
#define  ALF_ALF_COEF_CR_A_alf_coeff_cr0_src(data)                               ((0x0FE00000&(data))>>21)
#define  ALF_ALF_COEF_CR_A_alf_coeff_cr1_src(data)                               ((0x001FC000&(data))>>14)
#define  ALF_ALF_COEF_CR_A_alf_coeff_cr2_src(data)                               ((0x00003F80&(data))>>7)
#define  ALF_ALF_COEF_CR_A_alf_coeff_cr3_src(data)                               (0x0000007F&(data))

#define  ALF_ALF_COEF_CR_B                                                      0x1800F5E0
#define  ALF_ALF_COEF_CR_B_reg_addr                                              "0xB800F5E0"
#define  ALF_ALF_COEF_CR_B_reg                                                   0xB800F5E0
#define  ALF_ALF_COEF_CR_B_inst_addr                                             "0x0038"
#define  ALF_ALF_COEF_CR_B_inst_adr                                              "0x0078"
#define  ALF_ALF_COEF_CR_B_inst                                                  0x0078
#define  set_ALF_ALF_COEF_CR_B_reg(data)                                         (*((volatile unsigned int*)ALF_ALF_COEF_CR_B_reg)=data)
#define  get_ALF_ALF_COEF_CR_B_reg                                               (*((volatile unsigned int*)ALF_ALF_COEF_CR_B_reg))
#define  ALF_ALF_COEF_CR_B_alf_coeff_cr4_shift                                   (21)
#define  ALF_ALF_COEF_CR_B_alf_coeff_cr5_shift                                   (14)
#define  ALF_ALF_COEF_CR_B_alf_coeff_cr6_shift                                   (7)
#define  ALF_ALF_COEF_CR_B_alf_coeff_cr7_shift                                   (0)
#define  ALF_ALF_COEF_CR_B_alf_coeff_cr4_mask                                    (0x0FE00000)
#define  ALF_ALF_COEF_CR_B_alf_coeff_cr5_mask                                    (0x001FC000)
#define  ALF_ALF_COEF_CR_B_alf_coeff_cr6_mask                                    (0x00003F80)
#define  ALF_ALF_COEF_CR_B_alf_coeff_cr7_mask                                    (0x0000007F)
#define  ALF_ALF_COEF_CR_B_alf_coeff_cr4(data)                                   (0x0FE00000&((data)<<21))
#define  ALF_ALF_COEF_CR_B_alf_coeff_cr5(data)                                   (0x001FC000&((data)<<14))
#define  ALF_ALF_COEF_CR_B_alf_coeff_cr6(data)                                   (0x00003F80&((data)<<7))
#define  ALF_ALF_COEF_CR_B_alf_coeff_cr7(data)                                   (0x0000007F&(data))
#define  ALF_ALF_COEF_CR_B_get_alf_coeff_cr4(data)                               ((0x0FE00000&(data))>>21)
#define  ALF_ALF_COEF_CR_B_get_alf_coeff_cr5(data)                               ((0x001FC000&(data))>>14)
#define  ALF_ALF_COEF_CR_B_get_alf_coeff_cr6(data)                               ((0x00003F80&(data))>>7)
#define  ALF_ALF_COEF_CR_B_get_alf_coeff_cr7(data)                               (0x0000007F&(data))
#define  ALF_ALF_COEF_CR_B_alf_coeff_cr4_src(data)                               ((0x0FE00000&(data))>>21)
#define  ALF_ALF_COEF_CR_B_alf_coeff_cr5_src(data)                               ((0x001FC000&(data))>>14)
#define  ALF_ALF_COEF_CR_B_alf_coeff_cr6_src(data)                               ((0x00003F80&(data))>>7)
#define  ALF_ALF_COEF_CR_B_alf_coeff_cr7_src(data)                               (0x0000007F&(data))

#define  ALF_ALF_COEF_CR_C                                                      0x1800F5E4
#define  ALF_ALF_COEF_CR_C_reg_addr                                              "0xB800F5E4"
#define  ALF_ALF_COEF_CR_C_reg                                                   0xB800F5E4
#define  ALF_ALF_COEF_CR_C_inst_addr                                             "0x0039"
#define  ALF_ALF_COEF_CR_C_inst_adr                                              "0x0079"
#define  ALF_ALF_COEF_CR_C_inst                                                  0x0079
#define  set_ALF_ALF_COEF_CR_C_reg(data)                                         (*((volatile unsigned int*)ALF_ALF_COEF_CR_C_reg)=data)
#define  get_ALF_ALF_COEF_CR_C_reg                                               (*((volatile unsigned int*)ALF_ALF_COEF_CR_C_reg))
#define  ALF_ALF_COEF_CR_C_alf_coeff_cr8_shift                                   (0)
#define  ALF_ALF_COEF_CR_C_alf_coeff_cr8_mask                                    (0x0000007F)
#define  ALF_ALF_COEF_CR_C_alf_coeff_cr8(data)                                   (0x0000007F&(data))
#define  ALF_ALF_COEF_CR_C_get_alf_coeff_cr8(data)                               (0x0000007F&(data))
#define  ALF_ALF_COEF_CR_C_alf_coeff_cr8_src(data)                               (0x0000007F&(data))

#define  ALF_ALF_VM0                                                            0x1800F5F0
#define  ALF_ALF_VM0_reg_addr                                                    "0xB800F5F0"
#define  ALF_ALF_VM0_reg                                                         0xB800F5F0
#define  ALF_ALF_VM0_inst_addr                                                   "0x003A"
#define  ALF_ALF_VM0_inst_adr                                                    "0x007C"
#define  ALF_ALF_VM0_inst                                                        0x007C
#define  set_ALF_ALF_VM0_reg(data)                                               (*((volatile unsigned int*)ALF_ALF_VM0_reg)=data)
#define  get_ALF_ALF_VM0_reg                                                     (*((volatile unsigned int*)ALF_ALF_VM0_reg))
#define  ALF_ALF_VM0_vm_basea0_shift                                             (21)
#define  ALF_ALF_VM0_vm_basea1_shift                                             (14)
#define  ALF_ALF_VM0_vm_sb_adr_shift                                             (0)
#define  ALF_ALF_VM0_vm_basea0_mask                                              (0x0FE00000)
#define  ALF_ALF_VM0_vm_basea1_mask                                              (0x001FC000)
#define  ALF_ALF_VM0_vm_sb_adr_mask                                              (0x0000003F)
#define  ALF_ALF_VM0_vm_basea0(data)                                             (0x0FE00000&((data)<<21))
#define  ALF_ALF_VM0_vm_basea1(data)                                             (0x001FC000&((data)<<14))
#define  ALF_ALF_VM0_vm_sb_adr(data)                                             (0x0000003F&(data))
#define  ALF_ALF_VM0_get_vm_basea0(data)                                         ((0x0FE00000&(data))>>21)
#define  ALF_ALF_VM0_get_vm_basea1(data)                                         ((0x001FC000&(data))>>14)
#define  ALF_ALF_VM0_get_vm_sb_adr(data)                                         (0x0000003F&(data))
#define  ALF_ALF_VM0_vm_basea0_src(data)                                         ((0x0FE00000&(data))>>21)
#define  ALF_ALF_VM0_vm_basea1_src(data)                                         ((0x001FC000&(data))>>14)
#define  ALF_ALF_VM0_vm_sb_adr_src(data)                                         (0x0000003F&(data))

#define  ALF_ALF_VM1                                                            0x1800F5F4
#define  ALF_ALF_VM1_reg_addr                                                    "0xB800F5F4"
#define  ALF_ALF_VM1_reg                                                         0xB800F5F4
#define  ALF_ALF_VM1_inst_addr                                                   "0x003B"
#define  ALF_ALF_VM1_inst_adr                                                    "0x007D"
#define  ALF_ALF_VM1_inst                                                        0x007D
#define  set_ALF_ALF_VM1_reg(data)                                               (*((volatile unsigned int*)ALF_ALF_VM1_reg)=data)
#define  get_ALF_ALF_VM1_reg                                                     (*((volatile unsigned int*)ALF_ALF_VM1_reg))
#define  ALF_ALF_VM1_vm_offseta0_shift                                           (16)
#define  ALF_ALF_VM1_vm_offseta1_shift                                           (0)
#define  ALF_ALF_VM1_vm_offseta0_mask                                            (0x003F0000)
#define  ALF_ALF_VM1_vm_offseta1_mask                                            (0x0000003F)
#define  ALF_ALF_VM1_vm_offseta0(data)                                           (0x003F0000&((data)<<16))
#define  ALF_ALF_VM1_vm_offseta1(data)                                           (0x0000003F&(data))
#define  ALF_ALF_VM1_get_vm_offseta0(data)                                       ((0x003F0000&(data))>>16)
#define  ALF_ALF_VM1_get_vm_offseta1(data)                                       (0x0000003F&(data))
#define  ALF_ALF_VM1_vm_offseta0_src(data)                                       ((0x003F0000&(data))>>16)
#define  ALF_ALF_VM1_vm_offseta1_src(data)                                       (0x0000003F&(data))

#define  ALF_ALF_DMA                                                            0x1800F5F8
#define  ALF_ALF_DMA_reg_addr                                                    "0xB800F5F8"
#define  ALF_ALF_DMA_reg                                                         0xB800F5F8
#define  ALF_ALF_DMA_inst_addr                                                   "0x003C"
#define  ALF_ALF_DMA_inst_adr                                                    "0x007E"
#define  ALF_ALF_DMA_inst                                                        0x007E
#define  set_ALF_ALF_DMA_reg(data)                                               (*((volatile unsigned int*)ALF_ALF_DMA_reg)=data)
#define  get_ALF_ALF_DMA_reg                                                     (*((volatile unsigned int*)ALF_ALF_DMA_reg))
#define  ALF_ALF_DMA_dma_busy_shift                                              (31)
#define  ALF_ALF_DMA_dma_adr_shift                                               (0)
#define  ALF_ALF_DMA_dma_busy_mask                                               (0x80000000)
#define  ALF_ALF_DMA_dma_adr_mask                                                (0x7FFFFFFF)
#define  ALF_ALF_DMA_dma_busy(data)                                              (0x80000000&((data)<<31))
#define  ALF_ALF_DMA_dma_adr(data)                                               (0x7FFFFFFF&(data))
#define  ALF_ALF_DMA_get_dma_busy(data)                                          ((0x80000000&(data))>>31)
#define  ALF_ALF_DMA_get_dma_adr(data)                                           (0x7FFFFFFF&(data))
#define  ALF_ALF_DMA_dma_busy_src(data)                                          ((0x80000000&(data))>>31)
#define  ALF_ALF_DMA_dma_adr_src(data)                                           (0x7FFFFFFF&(data))

#define  ALF_ALF_DMA_BOT                                                        0x1800F5FC
#define  ALF_ALF_DMA_BOT_reg_addr                                                "0xB800F5FC"
#define  ALF_ALF_DMA_BOT_reg                                                     0xB800F5FC
#define  ALF_ALF_DMA_BOT_inst_addr                                               "0x003D"
#define  ALF_ALF_DMA_BOT_inst_adr                                                "0x007F"
#define  ALF_ALF_DMA_BOT_inst                                                    0x007F
#define  set_ALF_ALF_DMA_BOT_reg(data)                                           (*((volatile unsigned int*)ALF_ALF_DMA_BOT_reg)=data)
#define  get_ALF_ALF_DMA_BOT_reg                                                 (*((volatile unsigned int*)ALF_ALF_DMA_BOT_reg))
#define  ALF_ALF_DMA_BOT_bot_dma_busy_shift                                      (31)
#define  ALF_ALF_DMA_BOT_bot_dma_adr_shift                                       (0)
#define  ALF_ALF_DMA_BOT_bot_dma_busy_mask                                       (0x80000000)
#define  ALF_ALF_DMA_BOT_bot_dma_adr_mask                                        (0x7FFFFFFF)
#define  ALF_ALF_DMA_BOT_bot_dma_busy(data)                                      (0x80000000&((data)<<31))
#define  ALF_ALF_DMA_BOT_bot_dma_adr(data)                                       (0x7FFFFFFF&(data))
#define  ALF_ALF_DMA_BOT_get_bot_dma_busy(data)                                  ((0x80000000&(data))>>31)
#define  ALF_ALF_DMA_BOT_get_bot_dma_adr(data)                                   (0x7FFFFFFF&(data))
#define  ALF_ALF_DMA_BOT_bot_dma_busy_src(data)                                  ((0x80000000&(data))>>31)
#define  ALF_ALF_DMA_BOT_bot_dma_adr_src(data)                                   (0x7FFFFFFF&(data))

#ifdef _ALF_USE_STRUCT
#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======ALF register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  akm_st_mode:1;
        RBus_UInt32  alf_wdone_1t_after_wlast:1;
        RBus_UInt32  alf_reset:1;
        RBus_UInt32  alf_busy:1;
    };
}ALF_ALF_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alf_coeff_idx_table_0:4;
        RBus_UInt32  alf_coeff_idx_table_1:4;
        RBus_UInt32  alf_coeff_idx_table_2:4;
        RBus_UInt32  alf_coeff_idx_table_3:4;
        RBus_UInt32  alf_coeff_idx_table_4:4;
        RBus_UInt32  alf_coeff_idx_table_5:4;
        RBus_UInt32  alf_coeff_idx_table_6:4;
        RBus_UInt32  alf_coeff_idx_table_7:4;
    };
}ALF_ALF_PAR0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alf_coeff_idx_table_8:4;
        RBus_UInt32  alf_coeff_idx_table_9:4;
        RBus_UInt32  alf_coeff_idx_table_10:4;
        RBus_UInt32  alf_coeff_idx_table_11:4;
        RBus_UInt32  alf_coeff_idx_table_12:4;
        RBus_UInt32  alf_coeff_idx_table_13:4;
        RBus_UInt32  alf_coeff_idx_table_14:4;
        RBus_UInt32  alf_coeff_idx_table_15:4;
    };
}ALF_ALF_PAR1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  x_interval:12;
        RBus_UInt32  y_internal:11;
    };
}ALF_ALF_PAR2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  alf_coeff_luma0:7;
        RBus_UInt32  alf_coeff_luma1:7;
        RBus_UInt32  alf_coeff_luma2:7;
        RBus_UInt32  alf_coeff_luma3:7;
    };
}ALF_ALF_COEF_Y_A_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  alf_coeff_luma4:7;
        RBus_UInt32  alf_coeff_luma5:7;
        RBus_UInt32  alf_coeff_luma6:7;
        RBus_UInt32  alf_coeff_luma7:7;
    };
}ALF_ALF_COEF_Y_B_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  alf_coeff_luma8:7;
    };
}ALF_ALF_COEF_Y_C_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  alf_coeff_cb0:7;
        RBus_UInt32  alf_coeff_cb1:7;
        RBus_UInt32  alf_coeff_cb2:7;
        RBus_UInt32  alf_coeff_cb3:7;
    };
}ALF_ALF_COEF_CB_A_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  alf_coeff_cb4:7;
        RBus_UInt32  alf_coeff_cb5:7;
        RBus_UInt32  alf_coeff_cb6:7;
        RBus_UInt32  alf_coeff_cb7:7;
    };
}ALF_ALF_COEF_CB_B_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  alf_coeff_cb8:7;
    };
}ALF_ALF_COEF_CB_C_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  alf_coeff_cr0:7;
        RBus_UInt32  alf_coeff_cr1:7;
        RBus_UInt32  alf_coeff_cr2:7;
        RBus_UInt32  alf_coeff_cr3:7;
    };
}ALF_ALF_COEF_CR_A_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  alf_coeff_cr4:7;
        RBus_UInt32  alf_coeff_cr5:7;
        RBus_UInt32  alf_coeff_cr6:7;
        RBus_UInt32  alf_coeff_cr7:7;
    };
}ALF_ALF_COEF_CR_B_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  alf_coeff_cr8:7;
    };
}ALF_ALF_COEF_CR_C_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  vm_basea0:7;
        RBus_UInt32  vm_basea1:7;
        RBus_UInt32  res2:8;
        RBus_UInt32  vm_sb_adr:6;
    };
}ALF_ALF_VM0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  vm_offseta0:6;
        RBus_UInt32  res2:10;
        RBus_UInt32  vm_offseta1:6;
    };
}ALF_ALF_VM1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_busy:1;
        RBus_UInt32  dma_adr:31;
    };
}ALF_ALF_DMA_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bot_dma_busy:1;
        RBus_UInt32  bot_dma_adr:31;
    };
}ALF_ALF_DMA_BOT_RBUS;

#else //apply LITTLE_ENDIAN

//======ALF register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alf_busy:1;
        RBus_UInt32  alf_reset:1;
        RBus_UInt32  alf_wdone_1t_after_wlast:1;
        RBus_UInt32  akm_st_mode:1;
        RBus_UInt32  res1:28;
    };
}ALF_ALF_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alf_coeff_idx_table_7:4;
        RBus_UInt32  alf_coeff_idx_table_6:4;
        RBus_UInt32  alf_coeff_idx_table_5:4;
        RBus_UInt32  alf_coeff_idx_table_4:4;
        RBus_UInt32  alf_coeff_idx_table_3:4;
        RBus_UInt32  alf_coeff_idx_table_2:4;
        RBus_UInt32  alf_coeff_idx_table_1:4;
        RBus_UInt32  alf_coeff_idx_table_0:4;
    };
}ALF_ALF_PAR0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alf_coeff_idx_table_15:4;
        RBus_UInt32  alf_coeff_idx_table_14:4;
        RBus_UInt32  alf_coeff_idx_table_13:4;
        RBus_UInt32  alf_coeff_idx_table_12:4;
        RBus_UInt32  alf_coeff_idx_table_11:4;
        RBus_UInt32  alf_coeff_idx_table_10:4;
        RBus_UInt32  alf_coeff_idx_table_9:4;
        RBus_UInt32  alf_coeff_idx_table_8:4;
    };
}ALF_ALF_PAR1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_internal:11;
        RBus_UInt32  x_interval:12;
        RBus_UInt32  res1:9;
    };
}ALF_ALF_PAR2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alf_coeff_luma3:7;
        RBus_UInt32  alf_coeff_luma2:7;
        RBus_UInt32  alf_coeff_luma1:7;
        RBus_UInt32  alf_coeff_luma0:7;
        RBus_UInt32  res1:4;
    };
}ALF_ALF_COEF_Y_A_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alf_coeff_luma7:7;
        RBus_UInt32  alf_coeff_luma6:7;
        RBus_UInt32  alf_coeff_luma5:7;
        RBus_UInt32  alf_coeff_luma4:7;
        RBus_UInt32  res1:4;
    };
}ALF_ALF_COEF_Y_B_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alf_coeff_luma8:7;
        RBus_UInt32  res1:25;
    };
}ALF_ALF_COEF_Y_C_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alf_coeff_cb3:7;
        RBus_UInt32  alf_coeff_cb2:7;
        RBus_UInt32  alf_coeff_cb1:7;
        RBus_UInt32  alf_coeff_cb0:7;
        RBus_UInt32  res1:4;
    };
}ALF_ALF_COEF_CB_A_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alf_coeff_cb7:7;
        RBus_UInt32  alf_coeff_cb6:7;
        RBus_UInt32  alf_coeff_cb5:7;
        RBus_UInt32  alf_coeff_cb4:7;
        RBus_UInt32  res1:4;
    };
}ALF_ALF_COEF_CB_B_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alf_coeff_cb8:7;
        RBus_UInt32  res1:25;
    };
}ALF_ALF_COEF_CB_C_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alf_coeff_cr3:7;
        RBus_UInt32  alf_coeff_cr2:7;
        RBus_UInt32  alf_coeff_cr1:7;
        RBus_UInt32  alf_coeff_cr0:7;
        RBus_UInt32  res1:4;
    };
}ALF_ALF_COEF_CR_A_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alf_coeff_cr7:7;
        RBus_UInt32  alf_coeff_cr6:7;
        RBus_UInt32  alf_coeff_cr5:7;
        RBus_UInt32  alf_coeff_cr4:7;
        RBus_UInt32  res1:4;
    };
}ALF_ALF_COEF_CR_B_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alf_coeff_cr8:7;
        RBus_UInt32  res1:25;
    };
}ALF_ALF_COEF_CR_C_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vm_sb_adr:6;
        RBus_UInt32  res1:8;
        RBus_UInt32  vm_basea1:7;
        RBus_UInt32  vm_basea0:7;
        RBus_UInt32  res2:4;
    };
}ALF_ALF_VM0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vm_offseta1:6;
        RBus_UInt32  res1:10;
        RBus_UInt32  vm_offseta0:6;
        RBus_UInt32  res2:10;
    };
}ALF_ALF_VM1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_adr:31;
        RBus_UInt32  dma_busy:1;
    };
}ALF_ALF_DMA_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bot_dma_adr:31;
        RBus_UInt32  bot_dma_busy:1;
    };
}ALF_ALF_DMA_BOT_RBUS;




#endif 


#endif 
#endif 
