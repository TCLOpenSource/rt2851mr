/**
* @file Merlin5-DesignSpec-D-Domain_VALC
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_VALC_REG_H_
#define _RBUS_VALC_REG_H_

#include "rbus_types.h"



//  VALC Register Address
#define  VALC_PCID_VALC_CTRL                                                    0x1802EE00
#define  VALC_PCID_VALC_CTRL_reg_addr                                            "0xB802EE00"
#define  VALC_PCID_VALC_CTRL_reg                                                 0xB802EE00
#define  VALC_PCID_VALC_CTRL_inst_addr                                           "0x0000"
#define  set_VALC_PCID_VALC_CTRL_reg(data)                                       (*((volatile unsigned int*)VALC_PCID_VALC_CTRL_reg)=data)
#define  get_VALC_PCID_VALC_CTRL_reg                                             (*((volatile unsigned int*)VALC_PCID_VALC_CTRL_reg))
#define  VALC_PCID_VALC_CTRL_dummy_31_14_shift                                   (14)
#define  VALC_PCID_VALC_CTRL_valc_spatial_sel_shift                              (12)
#define  VALC_PCID_VALC_CTRL_valc_dbg_region_shift                               (8)
#define  VALC_PCID_VALC_CTRL_valc_dbg_sel_shift                                  (4)
#define  VALC_PCID_VALC_CTRL_valc_hpf_clip_shift                                 (1)
#define  VALC_PCID_VALC_CTRL_valc_func_en_shift                                  (0)
#define  VALC_PCID_VALC_CTRL_dummy_31_14_mask                                    (0xFFFFC000)
#define  VALC_PCID_VALC_CTRL_valc_spatial_sel_mask                               (0x00003000)
#define  VALC_PCID_VALC_CTRL_valc_dbg_region_mask                                (0x00000F00)
#define  VALC_PCID_VALC_CTRL_valc_dbg_sel_mask                                   (0x00000030)
#define  VALC_PCID_VALC_CTRL_valc_hpf_clip_mask                                  (0x00000006)
#define  VALC_PCID_VALC_CTRL_valc_func_en_mask                                   (0x00000001)
#define  VALC_PCID_VALC_CTRL_dummy_31_14(data)                                   (0xFFFFC000&((data)<<14))
#define  VALC_PCID_VALC_CTRL_valc_spatial_sel(data)                              (0x00003000&((data)<<12))
#define  VALC_PCID_VALC_CTRL_valc_dbg_region(data)                               (0x00000F00&((data)<<8))
#define  VALC_PCID_VALC_CTRL_valc_dbg_sel(data)                                  (0x00000030&((data)<<4))
#define  VALC_PCID_VALC_CTRL_valc_hpf_clip(data)                                 (0x00000006&((data)<<1))
#define  VALC_PCID_VALC_CTRL_valc_func_en(data)                                  (0x00000001&(data))
#define  VALC_PCID_VALC_CTRL_get_dummy_31_14(data)                               ((0xFFFFC000&(data))>>14)
#define  VALC_PCID_VALC_CTRL_get_valc_spatial_sel(data)                          ((0x00003000&(data))>>12)
#define  VALC_PCID_VALC_CTRL_get_valc_dbg_region(data)                           ((0x00000F00&(data))>>8)
#define  VALC_PCID_VALC_CTRL_get_valc_dbg_sel(data)                              ((0x00000030&(data))>>4)
#define  VALC_PCID_VALC_CTRL_get_valc_hpf_clip(data)                             ((0x00000006&(data))>>1)
#define  VALC_PCID_VALC_CTRL_get_valc_func_en(data)                              (0x00000001&(data))

#define  VALC_PCID_VALC_HPF_0                                                   0x1802EE04
#define  VALC_PCID_VALC_HPF_0_reg_addr                                           "0xB802EE04"
#define  VALC_PCID_VALC_HPF_0_reg                                                0xB802EE04
#define  VALC_PCID_VALC_HPF_0_inst_addr                                          "0x0001"
#define  set_VALC_PCID_VALC_HPF_0_reg(data)                                      (*((volatile unsigned int*)VALC_PCID_VALC_HPF_0_reg)=data)
#define  get_VALC_PCID_VALC_HPF_0_reg                                            (*((volatile unsigned int*)VALC_PCID_VALC_HPF_0_reg))
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w15_shift                                 (28)
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w14_shift                                 (24)
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w13_shift                                 (20)
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w12_shift                                 (16)
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w11_shift                                 (12)
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w10_shift                                 (8)
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w9_shift                                  (4)
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w8_shift                                  (0)
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w15_mask                                  (0xF0000000)
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w14_mask                                  (0x0F000000)
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w13_mask                                  (0x00F00000)
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w12_mask                                  (0x000F0000)
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w11_mask                                  (0x0000F000)
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w10_mask                                  (0x00000F00)
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w9_mask                                   (0x000000F0)
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w8_mask                                   (0x0000000F)
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w15(data)                                 (0xF0000000&((data)<<28))
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w14(data)                                 (0x0F000000&((data)<<24))
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w13(data)                                 (0x00F00000&((data)<<20))
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w12(data)                                 (0x000F0000&((data)<<16))
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w11(data)                                 (0x0000F000&((data)<<12))
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w10(data)                                 (0x00000F00&((data)<<8))
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w9(data)                                  (0x000000F0&((data)<<4))
#define  VALC_PCID_VALC_HPF_0_valc_hpf_w8(data)                                  (0x0000000F&(data))
#define  VALC_PCID_VALC_HPF_0_get_valc_hpf_w15(data)                             ((0xF0000000&(data))>>28)
#define  VALC_PCID_VALC_HPF_0_get_valc_hpf_w14(data)                             ((0x0F000000&(data))>>24)
#define  VALC_PCID_VALC_HPF_0_get_valc_hpf_w13(data)                             ((0x00F00000&(data))>>20)
#define  VALC_PCID_VALC_HPF_0_get_valc_hpf_w12(data)                             ((0x000F0000&(data))>>16)
#define  VALC_PCID_VALC_HPF_0_get_valc_hpf_w11(data)                             ((0x0000F000&(data))>>12)
#define  VALC_PCID_VALC_HPF_0_get_valc_hpf_w10(data)                             ((0x00000F00&(data))>>8)
#define  VALC_PCID_VALC_HPF_0_get_valc_hpf_w9(data)                              ((0x000000F0&(data))>>4)
#define  VALC_PCID_VALC_HPF_0_get_valc_hpf_w8(data)                              (0x0000000F&(data))

#define  VALC_PCID_VALC_HPF_1                                                   0x1802EE08
#define  VALC_PCID_VALC_HPF_1_reg_addr                                           "0xB802EE08"
#define  VALC_PCID_VALC_HPF_1_reg                                                0xB802EE08
#define  VALC_PCID_VALC_HPF_1_inst_addr                                          "0x0002"
#define  set_VALC_PCID_VALC_HPF_1_reg(data)                                      (*((volatile unsigned int*)VALC_PCID_VALC_HPF_1_reg)=data)
#define  get_VALC_PCID_VALC_HPF_1_reg                                            (*((volatile unsigned int*)VALC_PCID_VALC_HPF_1_reg))
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w7_shift                                  (28)
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w6_shift                                  (24)
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w5_shift                                  (20)
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w4_shift                                  (16)
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w3_shift                                  (12)
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w2_shift                                  (8)
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w1_shift                                  (4)
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w0_shift                                  (0)
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w7_mask                                   (0xF0000000)
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w6_mask                                   (0x0F000000)
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w5_mask                                   (0x00F00000)
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w4_mask                                   (0x000F0000)
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w3_mask                                   (0x0000F000)
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w2_mask                                   (0x00000F00)
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w1_mask                                   (0x000000F0)
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w0_mask                                   (0x0000000F)
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w7(data)                                  (0xF0000000&((data)<<28))
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w6(data)                                  (0x0F000000&((data)<<24))
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w5(data)                                  (0x00F00000&((data)<<20))
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w4(data)                                  (0x000F0000&((data)<<16))
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w3(data)                                  (0x0000F000&((data)<<12))
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w2(data)                                  (0x00000F00&((data)<<8))
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w1(data)                                  (0x000000F0&((data)<<4))
#define  VALC_PCID_VALC_HPF_1_valc_hpf_w0(data)                                  (0x0000000F&(data))
#define  VALC_PCID_VALC_HPF_1_get_valc_hpf_w7(data)                              ((0xF0000000&(data))>>28)
#define  VALC_PCID_VALC_HPF_1_get_valc_hpf_w6(data)                              ((0x0F000000&(data))>>24)
#define  VALC_PCID_VALC_HPF_1_get_valc_hpf_w5(data)                              ((0x00F00000&(data))>>20)
#define  VALC_PCID_VALC_HPF_1_get_valc_hpf_w4(data)                              ((0x000F0000&(data))>>16)
#define  VALC_PCID_VALC_HPF_1_get_valc_hpf_w3(data)                              ((0x0000F000&(data))>>12)
#define  VALC_PCID_VALC_HPF_1_get_valc_hpf_w2(data)                              ((0x00000F00&(data))>>8)
#define  VALC_PCID_VALC_HPF_1_get_valc_hpf_w1(data)                              ((0x000000F0&(data))>>4)
#define  VALC_PCID_VALC_HPF_1_get_valc_hpf_w0(data)                              (0x0000000F&(data))

#define  VALC_PCID_VALC_SAT_0                                                   0x1802EE0C
#define  VALC_PCID_VALC_SAT_0_reg_addr                                           "0xB802EE0C"
#define  VALC_PCID_VALC_SAT_0_reg                                                0xB802EE0C
#define  VALC_PCID_VALC_SAT_0_inst_addr                                          "0x0003"
#define  set_VALC_PCID_VALC_SAT_0_reg(data)                                      (*((volatile unsigned int*)VALC_PCID_VALC_SAT_0_reg)=data)
#define  get_VALC_PCID_VALC_SAT_0_reg                                            (*((volatile unsigned int*)VALC_PCID_VALC_SAT_0_reg))
#define  VALC_PCID_VALC_SAT_0_valc_sat_w15_shift                                 (28)
#define  VALC_PCID_VALC_SAT_0_valc_sat_w14_shift                                 (24)
#define  VALC_PCID_VALC_SAT_0_valc_sat_w13_shift                                 (20)
#define  VALC_PCID_VALC_SAT_0_valc_sat_w12_shift                                 (16)
#define  VALC_PCID_VALC_SAT_0_valc_sat_w11_shift                                 (12)
#define  VALC_PCID_VALC_SAT_0_valc_sat_w10_shift                                 (8)
#define  VALC_PCID_VALC_SAT_0_valc_sat_w9_shift                                  (4)
#define  VALC_PCID_VALC_SAT_0_valc_sat_w8_shift                                  (0)
#define  VALC_PCID_VALC_SAT_0_valc_sat_w15_mask                                  (0xF0000000)
#define  VALC_PCID_VALC_SAT_0_valc_sat_w14_mask                                  (0x0F000000)
#define  VALC_PCID_VALC_SAT_0_valc_sat_w13_mask                                  (0x00F00000)
#define  VALC_PCID_VALC_SAT_0_valc_sat_w12_mask                                  (0x000F0000)
#define  VALC_PCID_VALC_SAT_0_valc_sat_w11_mask                                  (0x0000F000)
#define  VALC_PCID_VALC_SAT_0_valc_sat_w10_mask                                  (0x00000F00)
#define  VALC_PCID_VALC_SAT_0_valc_sat_w9_mask                                   (0x000000F0)
#define  VALC_PCID_VALC_SAT_0_valc_sat_w8_mask                                   (0x0000000F)
#define  VALC_PCID_VALC_SAT_0_valc_sat_w15(data)                                 (0xF0000000&((data)<<28))
#define  VALC_PCID_VALC_SAT_0_valc_sat_w14(data)                                 (0x0F000000&((data)<<24))
#define  VALC_PCID_VALC_SAT_0_valc_sat_w13(data)                                 (0x00F00000&((data)<<20))
#define  VALC_PCID_VALC_SAT_0_valc_sat_w12(data)                                 (0x000F0000&((data)<<16))
#define  VALC_PCID_VALC_SAT_0_valc_sat_w11(data)                                 (0x0000F000&((data)<<12))
#define  VALC_PCID_VALC_SAT_0_valc_sat_w10(data)                                 (0x00000F00&((data)<<8))
#define  VALC_PCID_VALC_SAT_0_valc_sat_w9(data)                                  (0x000000F0&((data)<<4))
#define  VALC_PCID_VALC_SAT_0_valc_sat_w8(data)                                  (0x0000000F&(data))
#define  VALC_PCID_VALC_SAT_0_get_valc_sat_w15(data)                             ((0xF0000000&(data))>>28)
#define  VALC_PCID_VALC_SAT_0_get_valc_sat_w14(data)                             ((0x0F000000&(data))>>24)
#define  VALC_PCID_VALC_SAT_0_get_valc_sat_w13(data)                             ((0x00F00000&(data))>>20)
#define  VALC_PCID_VALC_SAT_0_get_valc_sat_w12(data)                             ((0x000F0000&(data))>>16)
#define  VALC_PCID_VALC_SAT_0_get_valc_sat_w11(data)                             ((0x0000F000&(data))>>12)
#define  VALC_PCID_VALC_SAT_0_get_valc_sat_w10(data)                             ((0x00000F00&(data))>>8)
#define  VALC_PCID_VALC_SAT_0_get_valc_sat_w9(data)                              ((0x000000F0&(data))>>4)
#define  VALC_PCID_VALC_SAT_0_get_valc_sat_w8(data)                              (0x0000000F&(data))

#define  VALC_PCID_VALC_SAT_1                                                   0x1802EE10
#define  VALC_PCID_VALC_SAT_1_reg_addr                                           "0xB802EE10"
#define  VALC_PCID_VALC_SAT_1_reg                                                0xB802EE10
#define  VALC_PCID_VALC_SAT_1_inst_addr                                          "0x0004"
#define  set_VALC_PCID_VALC_SAT_1_reg(data)                                      (*((volatile unsigned int*)VALC_PCID_VALC_SAT_1_reg)=data)
#define  get_VALC_PCID_VALC_SAT_1_reg                                            (*((volatile unsigned int*)VALC_PCID_VALC_SAT_1_reg))
#define  VALC_PCID_VALC_SAT_1_valc_sat_w7_shift                                  (28)
#define  VALC_PCID_VALC_SAT_1_valc_sat_w6_shift                                  (24)
#define  VALC_PCID_VALC_SAT_1_valc_sat_w5_shift                                  (20)
#define  VALC_PCID_VALC_SAT_1_valc_sat_w4_shift                                  (16)
#define  VALC_PCID_VALC_SAT_1_valc_sat_w3_shift                                  (12)
#define  VALC_PCID_VALC_SAT_1_valc_sat_w2_shift                                  (8)
#define  VALC_PCID_VALC_SAT_1_valc_sat_w1_shift                                  (4)
#define  VALC_PCID_VALC_SAT_1_valc_sat_w0_shift                                  (0)
#define  VALC_PCID_VALC_SAT_1_valc_sat_w7_mask                                   (0xF0000000)
#define  VALC_PCID_VALC_SAT_1_valc_sat_w6_mask                                   (0x0F000000)
#define  VALC_PCID_VALC_SAT_1_valc_sat_w5_mask                                   (0x00F00000)
#define  VALC_PCID_VALC_SAT_1_valc_sat_w4_mask                                   (0x000F0000)
#define  VALC_PCID_VALC_SAT_1_valc_sat_w3_mask                                   (0x0000F000)
#define  VALC_PCID_VALC_SAT_1_valc_sat_w2_mask                                   (0x00000F00)
#define  VALC_PCID_VALC_SAT_1_valc_sat_w1_mask                                   (0x000000F0)
#define  VALC_PCID_VALC_SAT_1_valc_sat_w0_mask                                   (0x0000000F)
#define  VALC_PCID_VALC_SAT_1_valc_sat_w7(data)                                  (0xF0000000&((data)<<28))
#define  VALC_PCID_VALC_SAT_1_valc_sat_w6(data)                                  (0x0F000000&((data)<<24))
#define  VALC_PCID_VALC_SAT_1_valc_sat_w5(data)                                  (0x00F00000&((data)<<20))
#define  VALC_PCID_VALC_SAT_1_valc_sat_w4(data)                                  (0x000F0000&((data)<<16))
#define  VALC_PCID_VALC_SAT_1_valc_sat_w3(data)                                  (0x0000F000&((data)<<12))
#define  VALC_PCID_VALC_SAT_1_valc_sat_w2(data)                                  (0x00000F00&((data)<<8))
#define  VALC_PCID_VALC_SAT_1_valc_sat_w1(data)                                  (0x000000F0&((data)<<4))
#define  VALC_PCID_VALC_SAT_1_valc_sat_w0(data)                                  (0x0000000F&(data))
#define  VALC_PCID_VALC_SAT_1_get_valc_sat_w7(data)                              ((0xF0000000&(data))>>28)
#define  VALC_PCID_VALC_SAT_1_get_valc_sat_w6(data)                              ((0x0F000000&(data))>>24)
#define  VALC_PCID_VALC_SAT_1_get_valc_sat_w5(data)                              ((0x00F00000&(data))>>20)
#define  VALC_PCID_VALC_SAT_1_get_valc_sat_w4(data)                              ((0x000F0000&(data))>>16)
#define  VALC_PCID_VALC_SAT_1_get_valc_sat_w3(data)                              ((0x0000F000&(data))>>12)
#define  VALC_PCID_VALC_SAT_1_get_valc_sat_w2(data)                              ((0x00000F00&(data))>>8)
#define  VALC_PCID_VALC_SAT_1_get_valc_sat_w1(data)                              ((0x000000F0&(data))>>4)
#define  VALC_PCID_VALC_SAT_1_get_valc_sat_w0(data)                              (0x0000000F&(data))

#define  VALC_VALC_RM                                                           0x1802EEA0
#define  VALC_VALC_RM_reg_addr                                                   "0xB802EEA0"
#define  VALC_VALC_RM_reg                                                        0xB802EEA0
#define  VALC_VALC_RM_inst_addr                                                  "0x0005"
#define  set_VALC_VALC_RM_reg(data)                                              (*((volatile unsigned int*)VALC_VALC_RM_reg)=data)
#define  get_VALC_VALC_RM_reg                                                    (*((volatile unsigned int*)VALC_VALC_RM_reg))
#define  VALC_VALC_RM_valc_lb_test1_1_shift                                      (17)
#define  VALC_VALC_RM_valc_lb_test1_0_shift                                      (16)
#define  VALC_VALC_RM_valc_lb_rm_1_shift                                         (4)
#define  VALC_VALC_RM_valc_lb_rm_0_shift                                         (0)
#define  VALC_VALC_RM_valc_lb_test1_1_mask                                       (0x00020000)
#define  VALC_VALC_RM_valc_lb_test1_0_mask                                       (0x00010000)
#define  VALC_VALC_RM_valc_lb_rm_1_mask                                          (0x000000F0)
#define  VALC_VALC_RM_valc_lb_rm_0_mask                                          (0x0000000F)
#define  VALC_VALC_RM_valc_lb_test1_1(data)                                      (0x00020000&((data)<<17))
#define  VALC_VALC_RM_valc_lb_test1_0(data)                                      (0x00010000&((data)<<16))
#define  VALC_VALC_RM_valc_lb_rm_1(data)                                         (0x000000F0&((data)<<4))
#define  VALC_VALC_RM_valc_lb_rm_0(data)                                         (0x0000000F&(data))
#define  VALC_VALC_RM_get_valc_lb_test1_1(data)                                  ((0x00020000&(data))>>17)
#define  VALC_VALC_RM_get_valc_lb_test1_0(data)                                  ((0x00010000&(data))>>16)
#define  VALC_VALC_RM_get_valc_lb_rm_1(data)                                     ((0x000000F0&(data))>>4)
#define  VALC_VALC_RM_get_valc_lb_rm_0(data)                                     (0x0000000F&(data))

#define  VALC_VALC_RME_LS                                                       0x1802EEA4
#define  VALC_VALC_RME_LS_reg_addr                                               "0xB802EEA4"
#define  VALC_VALC_RME_LS_reg                                                    0xB802EEA4
#define  VALC_VALC_RME_LS_inst_addr                                              "0x0006"
#define  set_VALC_VALC_RME_LS_reg(data)                                          (*((volatile unsigned int*)VALC_VALC_RME_LS_reg)=data)
#define  get_VALC_VALC_RME_LS_reg                                                (*((volatile unsigned int*)VALC_VALC_RME_LS_reg))
#define  VALC_VALC_RME_LS_valc_lb_ls_1_shift                                     (17)
#define  VALC_VALC_RME_LS_valc_lb_ls_0_shift                                     (16)
#define  VALC_VALC_RME_LS_valc_lb_rme_1_shift                                    (1)
#define  VALC_VALC_RME_LS_valc_lb_rme_0_shift                                    (0)
#define  VALC_VALC_RME_LS_valc_lb_ls_1_mask                                      (0x00020000)
#define  VALC_VALC_RME_LS_valc_lb_ls_0_mask                                      (0x00010000)
#define  VALC_VALC_RME_LS_valc_lb_rme_1_mask                                     (0x00000002)
#define  VALC_VALC_RME_LS_valc_lb_rme_0_mask                                     (0x00000001)
#define  VALC_VALC_RME_LS_valc_lb_ls_1(data)                                     (0x00020000&((data)<<17))
#define  VALC_VALC_RME_LS_valc_lb_ls_0(data)                                     (0x00010000&((data)<<16))
#define  VALC_VALC_RME_LS_valc_lb_rme_1(data)                                    (0x00000002&((data)<<1))
#define  VALC_VALC_RME_LS_valc_lb_rme_0(data)                                    (0x00000001&(data))
#define  VALC_VALC_RME_LS_get_valc_lb_ls_1(data)                                 ((0x00020000&(data))>>17)
#define  VALC_VALC_RME_LS_get_valc_lb_ls_0(data)                                 ((0x00010000&(data))>>16)
#define  VALC_VALC_RME_LS_get_valc_lb_rme_1(data)                                ((0x00000002&(data))>>1)
#define  VALC_VALC_RME_LS_get_valc_lb_rme_0(data)                                (0x00000001&(data))

#define  VALC_VALC_FAIL                                                         0x1802EEA8
#define  VALC_VALC_FAIL_reg_addr                                                 "0xB802EEA8"
#define  VALC_VALC_FAIL_reg                                                      0xB802EEA8
#define  VALC_VALC_FAIL_inst_addr                                                "0x0007"
#define  set_VALC_VALC_FAIL_reg(data)                                            (*((volatile unsigned int*)VALC_VALC_FAIL_reg)=data)
#define  get_VALC_VALC_FAIL_reg                                                  (*((volatile unsigned int*)VALC_VALC_FAIL_reg))
#define  VALC_VALC_FAIL_valc_lb_drf_fail_1_shift                                 (17)
#define  VALC_VALC_FAIL_valc_lb_drf_fail_0_shift                                 (16)
#define  VALC_VALC_FAIL_valc_lb_bist_fail_1_shift                                (1)
#define  VALC_VALC_FAIL_valc_lb_bist_fail_0_shift                                (0)
#define  VALC_VALC_FAIL_valc_lb_drf_fail_1_mask                                  (0x00020000)
#define  VALC_VALC_FAIL_valc_lb_drf_fail_0_mask                                  (0x00010000)
#define  VALC_VALC_FAIL_valc_lb_bist_fail_1_mask                                 (0x00000002)
#define  VALC_VALC_FAIL_valc_lb_bist_fail_0_mask                                 (0x00000001)
#define  VALC_VALC_FAIL_valc_lb_drf_fail_1(data)                                 (0x00020000&((data)<<17))
#define  VALC_VALC_FAIL_valc_lb_drf_fail_0(data)                                 (0x00010000&((data)<<16))
#define  VALC_VALC_FAIL_valc_lb_bist_fail_1(data)                                (0x00000002&((data)<<1))
#define  VALC_VALC_FAIL_valc_lb_bist_fail_0(data)                                (0x00000001&(data))
#define  VALC_VALC_FAIL_get_valc_lb_drf_fail_1(data)                             ((0x00020000&(data))>>17)
#define  VALC_VALC_FAIL_get_valc_lb_drf_fail_0(data)                             ((0x00010000&(data))>>16)
#define  VALC_VALC_FAIL_get_valc_lb_bist_fail_1(data)                            ((0x00000002&(data))>>1)
#define  VALC_VALC_FAIL_get_valc_lb_bist_fail_0(data)                            (0x00000001&(data))

#define  VALC_VALC_TESTRWM                                                      0x1802EEAC
#define  VALC_VALC_TESTRWM_reg_addr                                              "0xB802EEAC"
#define  VALC_VALC_TESTRWM_reg                                                   0xB802EEAC
#define  VALC_VALC_TESTRWM_inst_addr                                             "0x0008"
#define  set_VALC_VALC_TESTRWM_reg(data)                                         (*((volatile unsigned int*)VALC_VALC_TESTRWM_reg)=data)
#define  get_VALC_VALC_TESTRWM_reg                                               (*((volatile unsigned int*)VALC_VALC_TESTRWM_reg))
#define  VALC_VALC_TESTRWM_valc_lb_testrwm_1_shift                               (1)
#define  VALC_VALC_TESTRWM_valc_lb_testrwm_0_shift                               (0)
#define  VALC_VALC_TESTRWM_valc_lb_testrwm_1_mask                                (0x00000002)
#define  VALC_VALC_TESTRWM_valc_lb_testrwm_0_mask                                (0x00000001)
#define  VALC_VALC_TESTRWM_valc_lb_testrwm_1(data)                               (0x00000002&((data)<<1))
#define  VALC_VALC_TESTRWM_valc_lb_testrwm_0(data)                               (0x00000001&(data))
#define  VALC_VALC_TESTRWM_get_valc_lb_testrwm_1(data)                           ((0x00000002&(data))>>1)
#define  VALC_VALC_TESTRWM_get_valc_lb_testrwm_0(data)                           (0x00000001&(data))

#define  VALC_VALC_LUT_ADDR                                                     0x1802EE20
#define  VALC_VALC_LUT_ADDR_reg_addr                                             "0xB802EE20"
#define  VALC_VALC_LUT_ADDR_reg                                                  0xB802EE20
#define  VALC_VALC_LUT_ADDR_inst_addr                                            "0x0009"
#define  set_VALC_VALC_LUT_ADDR_reg(data)                                        (*((volatile unsigned int*)VALC_VALC_LUT_ADDR_reg)=data)
#define  get_VALC_VALC_LUT_ADDR_reg                                              (*((volatile unsigned int*)VALC_VALC_LUT_ADDR_reg))
#define  VALC_VALC_LUT_ADDR_valc_lut_ax_en_shift                                 (16)
#define  VALC_VALC_LUT_ADDR_valc_lut_sel_shift                                   (12)
#define  VALC_VALC_LUT_ADDR_valc_lut_ax_en_mask                                  (0x00010000)
#define  VALC_VALC_LUT_ADDR_valc_lut_sel_mask                                    (0x00003000)
#define  VALC_VALC_LUT_ADDR_valc_lut_ax_en(data)                                 (0x00010000&((data)<<16))
#define  VALC_VALC_LUT_ADDR_valc_lut_sel(data)                                   (0x00003000&((data)<<12))
#define  VALC_VALC_LUT_ADDR_get_valc_lut_ax_en(data)                             ((0x00010000&(data))>>16)
#define  VALC_VALC_LUT_ADDR_get_valc_lut_sel(data)                               ((0x00003000&(data))>>12)

#define  VALC_VALC_LUT_DATA                                                     0x1802EE24
#define  VALC_VALC_LUT_DATA_reg_addr                                             "0xB802EE24"
#define  VALC_VALC_LUT_DATA_reg                                                  0xB802EE24
#define  VALC_VALC_LUT_DATA_inst_addr                                            "0x000A"
#define  set_VALC_VALC_LUT_DATA_reg(data)                                        (*((volatile unsigned int*)VALC_VALC_LUT_DATA_reg)=data)
#define  get_VALC_VALC_LUT_DATA_reg                                              (*((volatile unsigned int*)VALC_VALC_LUT_DATA_reg))
#define  VALC_VALC_LUT_DATA_valc_lut_data_shift                                  (0)
#define  VALC_VALC_LUT_DATA_valc_lut_data_mask                                   (0xFFFFFFFF)
#define  VALC_VALC_LUT_DATA_valc_lut_data(data)                                  (0xFFFFFFFF&(data))
#define  VALC_VALC_LUT_DATA_get_valc_lut_data(data)                              (0xFFFFFFFF&(data))

#define  VALC_VALC_AccessData_CTRL                                              0x1802EEE0
#define  VALC_VALC_AccessData_CTRL_reg_addr                                      "0xB802EEE0"
#define  VALC_VALC_AccessData_CTRL_reg                                           0xB802EEE0
#define  VALC_VALC_AccessData_CTRL_inst_addr                                     "0x000B"
#define  set_VALC_VALC_AccessData_CTRL_reg(data)                                 (*((volatile unsigned int*)VALC_VALC_AccessData_CTRL_reg)=data)
#define  get_VALC_VALC_AccessData_CTRL_reg                                       (*((volatile unsigned int*)VALC_VALC_AccessData_CTRL_reg))
#define  VALC_VALC_AccessData_CTRL_access_location_sel_shift                     (3)
#define  VALC_VALC_AccessData_CTRL_access_cross_bar_en_shift                     (2)
#define  VALC_VALC_AccessData_CTRL_access_write_en_shift                         (1)
#define  VALC_VALC_AccessData_CTRL_access_read_en_shift                          (0)
#define  VALC_VALC_AccessData_CTRL_access_location_sel_mask                      (0x00000008)
#define  VALC_VALC_AccessData_CTRL_access_cross_bar_en_mask                      (0x00000004)
#define  VALC_VALC_AccessData_CTRL_access_write_en_mask                          (0x00000002)
#define  VALC_VALC_AccessData_CTRL_access_read_en_mask                           (0x00000001)
#define  VALC_VALC_AccessData_CTRL_access_location_sel(data)                     (0x00000008&((data)<<3))
#define  VALC_VALC_AccessData_CTRL_access_cross_bar_en(data)                     (0x00000004&((data)<<2))
#define  VALC_VALC_AccessData_CTRL_access_write_en(data)                         (0x00000002&((data)<<1))
#define  VALC_VALC_AccessData_CTRL_access_read_en(data)                          (0x00000001&(data))
#define  VALC_VALC_AccessData_CTRL_get_access_location_sel(data)                 ((0x00000008&(data))>>3)
#define  VALC_VALC_AccessData_CTRL_get_access_cross_bar_en(data)                 ((0x00000004&(data))>>2)
#define  VALC_VALC_AccessData_CTRL_get_access_write_en(data)                     ((0x00000002&(data))>>1)
#define  VALC_VALC_AccessData_CTRL_get_access_read_en(data)                      (0x00000001&(data))

#define  VALC_VALC_AccessData_PosCtrl                                           0x1802EEE4
#define  VALC_VALC_AccessData_PosCtrl_reg_addr                                   "0xB802EEE4"
#define  VALC_VALC_AccessData_PosCtrl_reg                                        0xB802EEE4
#define  VALC_VALC_AccessData_PosCtrl_inst_addr                                  "0x000C"
#define  set_VALC_VALC_AccessData_PosCtrl_reg(data)                              (*((volatile unsigned int*)VALC_VALC_AccessData_PosCtrl_reg)=data)
#define  get_VALC_VALC_AccessData_PosCtrl_reg                                    (*((volatile unsigned int*)VALC_VALC_AccessData_PosCtrl_reg))
#define  VALC_VALC_AccessData_PosCtrl_access_starty_shift                        (16)
#define  VALC_VALC_AccessData_PosCtrl_access_startx_shift                        (0)
#define  VALC_VALC_AccessData_PosCtrl_access_starty_mask                         (0x0FFF0000)
#define  VALC_VALC_AccessData_PosCtrl_access_startx_mask                         (0x00000FFF)
#define  VALC_VALC_AccessData_PosCtrl_access_starty(data)                        (0x0FFF0000&((data)<<16))
#define  VALC_VALC_AccessData_PosCtrl_access_startx(data)                        (0x00000FFF&(data))
#define  VALC_VALC_AccessData_PosCtrl_get_access_starty(data)                    ((0x0FFF0000&(data))>>16)
#define  VALC_VALC_AccessData_PosCtrl_get_access_startx(data)                    (0x00000FFF&(data))

#define  VALC_VALC_AccessData_R                                                 0x1802EEE8
#define  VALC_VALC_AccessData_R_reg_addr                                         "0xB802EEE8"
#define  VALC_VALC_AccessData_R_reg                                              0xB802EEE8
#define  VALC_VALC_AccessData_R_inst_addr                                        "0x000D"
#define  set_VALC_VALC_AccessData_R_reg(data)                                    (*((volatile unsigned int*)VALC_VALC_AccessData_R_reg)=data)
#define  get_VALC_VALC_AccessData_R_reg                                          (*((volatile unsigned int*)VALC_VALC_AccessData_R_reg))
#define  VALC_VALC_AccessData_R_access_read_r_shift                              (16)
#define  VALC_VALC_AccessData_R_access_write_r_shift                             (0)
#define  VALC_VALC_AccessData_R_access_read_r_mask                               (0x0FFF0000)
#define  VALC_VALC_AccessData_R_access_write_r_mask                              (0x00000FFF)
#define  VALC_VALC_AccessData_R_access_read_r(data)                              (0x0FFF0000&((data)<<16))
#define  VALC_VALC_AccessData_R_access_write_r(data)                             (0x00000FFF&(data))
#define  VALC_VALC_AccessData_R_get_access_read_r(data)                          ((0x0FFF0000&(data))>>16)
#define  VALC_VALC_AccessData_R_get_access_write_r(data)                         (0x00000FFF&(data))

#define  VALC_VALC_AccessData_G                                                 0x1802EEEC
#define  VALC_VALC_AccessData_G_reg_addr                                         "0xB802EEEC"
#define  VALC_VALC_AccessData_G_reg                                              0xB802EEEC
#define  VALC_VALC_AccessData_G_inst_addr                                        "0x000E"
#define  set_VALC_VALC_AccessData_G_reg(data)                                    (*((volatile unsigned int*)VALC_VALC_AccessData_G_reg)=data)
#define  get_VALC_VALC_AccessData_G_reg                                          (*((volatile unsigned int*)VALC_VALC_AccessData_G_reg))
#define  VALC_VALC_AccessData_G_access_read_g_shift                              (16)
#define  VALC_VALC_AccessData_G_access_write_g_shift                             (0)
#define  VALC_VALC_AccessData_G_access_read_g_mask                               (0x0FFF0000)
#define  VALC_VALC_AccessData_G_access_write_g_mask                              (0x00000FFF)
#define  VALC_VALC_AccessData_G_access_read_g(data)                              (0x0FFF0000&((data)<<16))
#define  VALC_VALC_AccessData_G_access_write_g(data)                             (0x00000FFF&(data))
#define  VALC_VALC_AccessData_G_get_access_read_g(data)                          ((0x0FFF0000&(data))>>16)
#define  VALC_VALC_AccessData_G_get_access_write_g(data)                         (0x00000FFF&(data))

#define  VALC_VALC_AccessData_B                                                 0x1802EEF0
#define  VALC_VALC_AccessData_B_reg_addr                                         "0xB802EEF0"
#define  VALC_VALC_AccessData_B_reg                                              0xB802EEF0
#define  VALC_VALC_AccessData_B_inst_addr                                        "0x000F"
#define  set_VALC_VALC_AccessData_B_reg(data)                                    (*((volatile unsigned int*)VALC_VALC_AccessData_B_reg)=data)
#define  get_VALC_VALC_AccessData_B_reg                                          (*((volatile unsigned int*)VALC_VALC_AccessData_B_reg))
#define  VALC_VALC_AccessData_B_access_read_b_shift                              (16)
#define  VALC_VALC_AccessData_B_access_write_b_shift                             (0)
#define  VALC_VALC_AccessData_B_access_read_b_mask                               (0x0FFF0000)
#define  VALC_VALC_AccessData_B_access_write_b_mask                              (0x00000FFF)
#define  VALC_VALC_AccessData_B_access_read_b(data)                              (0x0FFF0000&((data)<<16))
#define  VALC_VALC_AccessData_B_access_write_b(data)                             (0x00000FFF&(data))
#define  VALC_VALC_AccessData_B_get_access_read_b(data)                          ((0x0FFF0000&(data))>>16)
#define  VALC_VALC_AccessData_B_get_access_write_b(data)                         (0x00000FFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======VALC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802ee00_31_14:18;
        RBus_UInt32  valc_spatial_sel:2;
        RBus_UInt32  valc_dbg_region:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  valc_dbg_sel:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  valc_hpf_clip:2;
        RBus_UInt32  valc_func_en:1;
    };
}valc_pcid_valc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_hpf_w15:4;
        RBus_UInt32  valc_hpf_w14:4;
        RBus_UInt32  valc_hpf_w13:4;
        RBus_UInt32  valc_hpf_w12:4;
        RBus_UInt32  valc_hpf_w11:4;
        RBus_UInt32  valc_hpf_w10:4;
        RBus_UInt32  valc_hpf_w9:4;
        RBus_UInt32  valc_hpf_w8:4;
    };
}valc_pcid_valc_hpf_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_hpf_w7:4;
        RBus_UInt32  valc_hpf_w6:4;
        RBus_UInt32  valc_hpf_w5:4;
        RBus_UInt32  valc_hpf_w4:4;
        RBus_UInt32  valc_hpf_w3:4;
        RBus_UInt32  valc_hpf_w2:4;
        RBus_UInt32  valc_hpf_w1:4;
        RBus_UInt32  valc_hpf_w0:4;
    };
}valc_pcid_valc_hpf_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_sat_w15:4;
        RBus_UInt32  valc_sat_w14:4;
        RBus_UInt32  valc_sat_w13:4;
        RBus_UInt32  valc_sat_w12:4;
        RBus_UInt32  valc_sat_w11:4;
        RBus_UInt32  valc_sat_w10:4;
        RBus_UInt32  valc_sat_w9:4;
        RBus_UInt32  valc_sat_w8:4;
    };
}valc_pcid_valc_sat_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_sat_w7:4;
        RBus_UInt32  valc_sat_w6:4;
        RBus_UInt32  valc_sat_w5:4;
        RBus_UInt32  valc_sat_w4:4;
        RBus_UInt32  valc_sat_w3:4;
        RBus_UInt32  valc_sat_w2:4;
        RBus_UInt32  valc_sat_w1:4;
        RBus_UInt32  valc_sat_w0:4;
    };
}valc_pcid_valc_sat_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  valc_lb_test1_1:1;
        RBus_UInt32  valc_lb_test1_0:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  valc_lb_rm_1:4;
        RBus_UInt32  valc_lb_rm_0:4;
    };
}valc_valc_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  valc_lb_ls_1:1;
        RBus_UInt32  valc_lb_ls_0:1;
        RBus_UInt32  res2:14;
        RBus_UInt32  valc_lb_rme_1:1;
        RBus_UInt32  valc_lb_rme_0:1;
    };
}valc_valc_rme_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  valc_lb_drf_fail_1:1;
        RBus_UInt32  valc_lb_drf_fail_0:1;
        RBus_UInt32  res2:14;
        RBus_UInt32  valc_lb_bist_fail_1:1;
        RBus_UInt32  valc_lb_bist_fail_0:1;
    };
}valc_valc_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  valc_lb_testrwm_1:1;
        RBus_UInt32  valc_lb_testrwm_0:1;
    };
}valc_valc_testrwm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  valc_lut_ax_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  valc_lut_sel:2;
        RBus_UInt32  res3:12;
    };
}valc_valc_lut_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_lut_data:32;
    };
}valc_valc_lut_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  access_location_sel:1;
        RBus_UInt32  access_cross_bar_en:1;
        RBus_UInt32  access_write_en:1;
        RBus_UInt32  access_read_en:1;
    };
}valc_valc_accessdata_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  access_starty:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  access_startx:12;
    };
}valc_valc_accessdata_posctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_r:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  access_write_r:12;
    };
}valc_valc_accessdata_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_g:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  access_write_g:12;
    };
}valc_valc_accessdata_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_b:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  access_write_b:12;
    };
}valc_valc_accessdata_b_RBUS;

#else //apply LITTLE_ENDIAN

//======VALC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_func_en:1;
        RBus_UInt32  valc_hpf_clip:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  valc_dbg_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  valc_dbg_region:4;
        RBus_UInt32  valc_spatial_sel:2;
        RBus_UInt32  dummy1802ee00_31_14:18;
    };
}valc_pcid_valc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_hpf_w8:4;
        RBus_UInt32  valc_hpf_w9:4;
        RBus_UInt32  valc_hpf_w10:4;
        RBus_UInt32  valc_hpf_w11:4;
        RBus_UInt32  valc_hpf_w12:4;
        RBus_UInt32  valc_hpf_w13:4;
        RBus_UInt32  valc_hpf_w14:4;
        RBus_UInt32  valc_hpf_w15:4;
    };
}valc_pcid_valc_hpf_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_hpf_w0:4;
        RBus_UInt32  valc_hpf_w1:4;
        RBus_UInt32  valc_hpf_w2:4;
        RBus_UInt32  valc_hpf_w3:4;
        RBus_UInt32  valc_hpf_w4:4;
        RBus_UInt32  valc_hpf_w5:4;
        RBus_UInt32  valc_hpf_w6:4;
        RBus_UInt32  valc_hpf_w7:4;
    };
}valc_pcid_valc_hpf_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_sat_w8:4;
        RBus_UInt32  valc_sat_w9:4;
        RBus_UInt32  valc_sat_w10:4;
        RBus_UInt32  valc_sat_w11:4;
        RBus_UInt32  valc_sat_w12:4;
        RBus_UInt32  valc_sat_w13:4;
        RBus_UInt32  valc_sat_w14:4;
        RBus_UInt32  valc_sat_w15:4;
    };
}valc_pcid_valc_sat_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_sat_w0:4;
        RBus_UInt32  valc_sat_w1:4;
        RBus_UInt32  valc_sat_w2:4;
        RBus_UInt32  valc_sat_w3:4;
        RBus_UInt32  valc_sat_w4:4;
        RBus_UInt32  valc_sat_w5:4;
        RBus_UInt32  valc_sat_w6:4;
        RBus_UInt32  valc_sat_w7:4;
    };
}valc_pcid_valc_sat_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_lb_rm_0:4;
        RBus_UInt32  valc_lb_rm_1:4;
        RBus_UInt32  res1:8;
        RBus_UInt32  valc_lb_test1_0:1;
        RBus_UInt32  valc_lb_test1_1:1;
        RBus_UInt32  res2:14;
    };
}valc_valc_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_lb_rme_0:1;
        RBus_UInt32  valc_lb_rme_1:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  valc_lb_ls_0:1;
        RBus_UInt32  valc_lb_ls_1:1;
        RBus_UInt32  res2:14;
    };
}valc_valc_rme_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_lb_bist_fail_0:1;
        RBus_UInt32  valc_lb_bist_fail_1:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  valc_lb_drf_fail_0:1;
        RBus_UInt32  valc_lb_drf_fail_1:1;
        RBus_UInt32  res2:14;
    };
}valc_valc_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_lb_testrwm_0:1;
        RBus_UInt32  valc_lb_testrwm_1:1;
        RBus_UInt32  res1:30;
    };
}valc_valc_testrwm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  valc_lut_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  valc_lut_ax_en:1;
        RBus_UInt32  res3:15;
    };
}valc_valc_lut_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  valc_lut_data:32;
    };
}valc_valc_lut_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_read_en:1;
        RBus_UInt32  access_write_en:1;
        RBus_UInt32  access_cross_bar_en:1;
        RBus_UInt32  access_location_sel:1;
        RBus_UInt32  res1:28;
    };
}valc_valc_accessdata_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_startx:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  access_starty:12;
        RBus_UInt32  res2:4;
    };
}valc_valc_accessdata_posctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_write_r:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_r:12;
        RBus_UInt32  res2:4;
    };
}valc_valc_accessdata_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_write_g:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_g:12;
        RBus_UInt32  res2:4;
    };
}valc_valc_accessdata_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_write_b:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_b:12;
        RBus_UInt32  res2:4;
    };
}valc_valc_accessdata_b_RBUS;




#endif 


#endif 
