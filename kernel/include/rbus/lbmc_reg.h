/**
* @file Merlin5_MEMC_LBMC
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_LBMC_REG_H_
#define _RBUS_LBMC_REG_H_

#include "rbus_types.h"



//  LBMC Register Address
#define  LBMC_LBMC_00                                                           0x18099900
#define  LBMC_LBMC_00_reg_addr                                                   "0xB8099900"
#define  LBMC_LBMC_00_reg                                                        0xB8099900
#define  LBMC_LBMC_00_inst_addr                                                  "0x0000"
#define  set_LBMC_LBMC_00_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_00_reg)=data)
#define  get_LBMC_LBMC_00_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_00_reg))
#define  LBMC_LBMC_00_lbmc_sram_ls_shift                                         (30)
#define  LBMC_LBMC_00_lbmc0_lf_sr4_shift                                         (24)
#define  LBMC_LBMC_00_lbmc0_lf_sr3_shift                                         (18)
#define  LBMC_LBMC_00_lbmc0_lf_sr2_shift                                         (12)
#define  LBMC_LBMC_00_lbmc0_lf_sr1_shift                                         (6)
#define  LBMC_LBMC_00_lbmc0_lf_sr0_shift                                         (0)
#define  LBMC_LBMC_00_lbmc_sram_ls_mask                                          (0x40000000)
#define  LBMC_LBMC_00_lbmc0_lf_sr4_mask                                          (0x3F000000)
#define  LBMC_LBMC_00_lbmc0_lf_sr3_mask                                          (0x00FC0000)
#define  LBMC_LBMC_00_lbmc0_lf_sr2_mask                                          (0x0003F000)
#define  LBMC_LBMC_00_lbmc0_lf_sr1_mask                                          (0x00000FC0)
#define  LBMC_LBMC_00_lbmc0_lf_sr0_mask                                          (0x0000003F)
#define  LBMC_LBMC_00_lbmc_sram_ls(data)                                         (0x40000000&((data)<<30))
#define  LBMC_LBMC_00_lbmc0_lf_sr4(data)                                         (0x3F000000&((data)<<24))
#define  LBMC_LBMC_00_lbmc0_lf_sr3(data)                                         (0x00FC0000&((data)<<18))
#define  LBMC_LBMC_00_lbmc0_lf_sr2(data)                                         (0x0003F000&((data)<<12))
#define  LBMC_LBMC_00_lbmc0_lf_sr1(data)                                         (0x00000FC0&((data)<<6))
#define  LBMC_LBMC_00_lbmc0_lf_sr0(data)                                         (0x0000003F&(data))
#define  LBMC_LBMC_00_get_lbmc_sram_ls(data)                                     ((0x40000000&(data))>>30)
#define  LBMC_LBMC_00_get_lbmc0_lf_sr4(data)                                     ((0x3F000000&(data))>>24)
#define  LBMC_LBMC_00_get_lbmc0_lf_sr3(data)                                     ((0x00FC0000&(data))>>18)
#define  LBMC_LBMC_00_get_lbmc0_lf_sr2(data)                                     ((0x0003F000&(data))>>12)
#define  LBMC_LBMC_00_get_lbmc0_lf_sr1(data)                                     ((0x00000FC0&(data))>>6)
#define  LBMC_LBMC_00_get_lbmc0_lf_sr0(data)                                     (0x0000003F&(data))

#define  LBMC_LBMC_04                                                           0x18099904
#define  LBMC_LBMC_04_reg_addr                                                   "0xB8099904"
#define  LBMC_LBMC_04_reg                                                        0xB8099904
#define  LBMC_LBMC_04_inst_addr                                                  "0x0001"
#define  set_LBMC_LBMC_04_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_04_reg)=data)
#define  get_LBMC_LBMC_04_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_04_reg))
#define  LBMC_LBMC_04_lbmc1_lf_sr0_pos_shift                                     (24)
#define  LBMC_LBMC_04_lbmc0_lf_sr8_shift                                         (18)
#define  LBMC_LBMC_04_lbmc0_lf_sr7_shift                                         (12)
#define  LBMC_LBMC_04_lbmc0_lf_sr6_shift                                         (6)
#define  LBMC_LBMC_04_lbmc0_lf_sr5_shift                                         (0)
#define  LBMC_LBMC_04_lbmc1_lf_sr0_pos_mask                                      (0xFF000000)
#define  LBMC_LBMC_04_lbmc0_lf_sr8_mask                                          (0x00FC0000)
#define  LBMC_LBMC_04_lbmc0_lf_sr7_mask                                          (0x0003F000)
#define  LBMC_LBMC_04_lbmc0_lf_sr6_mask                                          (0x00000FC0)
#define  LBMC_LBMC_04_lbmc0_lf_sr5_mask                                          (0x0000003F)
#define  LBMC_LBMC_04_lbmc1_lf_sr0_pos(data)                                     (0xFF000000&((data)<<24))
#define  LBMC_LBMC_04_lbmc0_lf_sr8(data)                                         (0x00FC0000&((data)<<18))
#define  LBMC_LBMC_04_lbmc0_lf_sr7(data)                                         (0x0003F000&((data)<<12))
#define  LBMC_LBMC_04_lbmc0_lf_sr6(data)                                         (0x00000FC0&((data)<<6))
#define  LBMC_LBMC_04_lbmc0_lf_sr5(data)                                         (0x0000003F&(data))
#define  LBMC_LBMC_04_get_lbmc1_lf_sr0_pos(data)                                 ((0xFF000000&(data))>>24)
#define  LBMC_LBMC_04_get_lbmc0_lf_sr8(data)                                     ((0x00FC0000&(data))>>18)
#define  LBMC_LBMC_04_get_lbmc0_lf_sr7(data)                                     ((0x0003F000&(data))>>12)
#define  LBMC_LBMC_04_get_lbmc0_lf_sr6(data)                                     ((0x00000FC0&(data))>>6)
#define  LBMC_LBMC_04_get_lbmc0_lf_sr5(data)                                     (0x0000003F&(data))

#define  LBMC_LBMC_08                                                           0x18099908
#define  LBMC_LBMC_08_reg_addr                                                   "0xB8099908"
#define  LBMC_LBMC_08_reg                                                        0xB8099908
#define  LBMC_LBMC_08_inst_addr                                                  "0x0002"
#define  set_LBMC_LBMC_08_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_08_reg)=data)
#define  get_LBMC_LBMC_08_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_08_reg))
#define  LBMC_LBMC_08_lbmc1_lf_sr4_pos_shift                                     (24)
#define  LBMC_LBMC_08_lbmc1_lf_sr3_pos_shift                                     (16)
#define  LBMC_LBMC_08_lbmc1_lf_sr2_pos_shift                                     (8)
#define  LBMC_LBMC_08_lbmc1_lf_sr1_pos_shift                                     (0)
#define  LBMC_LBMC_08_lbmc1_lf_sr4_pos_mask                                      (0xFF000000)
#define  LBMC_LBMC_08_lbmc1_lf_sr3_pos_mask                                      (0x00FF0000)
#define  LBMC_LBMC_08_lbmc1_lf_sr2_pos_mask                                      (0x0000FF00)
#define  LBMC_LBMC_08_lbmc1_lf_sr1_pos_mask                                      (0x000000FF)
#define  LBMC_LBMC_08_lbmc1_lf_sr4_pos(data)                                     (0xFF000000&((data)<<24))
#define  LBMC_LBMC_08_lbmc1_lf_sr3_pos(data)                                     (0x00FF0000&((data)<<16))
#define  LBMC_LBMC_08_lbmc1_lf_sr2_pos(data)                                     (0x0000FF00&((data)<<8))
#define  LBMC_LBMC_08_lbmc1_lf_sr1_pos(data)                                     (0x000000FF&(data))
#define  LBMC_LBMC_08_get_lbmc1_lf_sr4_pos(data)                                 ((0xFF000000&(data))>>24)
#define  LBMC_LBMC_08_get_lbmc1_lf_sr3_pos(data)                                 ((0x00FF0000&(data))>>16)
#define  LBMC_LBMC_08_get_lbmc1_lf_sr2_pos(data)                                 ((0x0000FF00&(data))>>8)
#define  LBMC_LBMC_08_get_lbmc1_lf_sr1_pos(data)                                 (0x000000FF&(data))

#define  LBMC_LBMC_0C                                                           0x1809990C
#define  LBMC_LBMC_0C_reg_addr                                                   "0xB809990C"
#define  LBMC_LBMC_0C_reg                                                        0xB809990C
#define  LBMC_LBMC_0C_inst_addr                                                  "0x0003"
#define  set_LBMC_LBMC_0C_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_0C_reg)=data)
#define  get_LBMC_LBMC_0C_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_0C_reg))
#define  LBMC_LBMC_0C_lbmc1_lf_sr8_pos_shift                                     (24)
#define  LBMC_LBMC_0C_lbmc1_lf_sr7_pos_shift                                     (16)
#define  LBMC_LBMC_0C_lbmc1_lf_sr6_pos_shift                                     (8)
#define  LBMC_LBMC_0C_lbmc1_lf_sr5_pos_shift                                     (0)
#define  LBMC_LBMC_0C_lbmc1_lf_sr8_pos_mask                                      (0xFF000000)
#define  LBMC_LBMC_0C_lbmc1_lf_sr7_pos_mask                                      (0x00FF0000)
#define  LBMC_LBMC_0C_lbmc1_lf_sr6_pos_mask                                      (0x0000FF00)
#define  LBMC_LBMC_0C_lbmc1_lf_sr5_pos_mask                                      (0x000000FF)
#define  LBMC_LBMC_0C_lbmc1_lf_sr8_pos(data)                                     (0xFF000000&((data)<<24))
#define  LBMC_LBMC_0C_lbmc1_lf_sr7_pos(data)                                     (0x00FF0000&((data)<<16))
#define  LBMC_LBMC_0C_lbmc1_lf_sr6_pos(data)                                     (0x0000FF00&((data)<<8))
#define  LBMC_LBMC_0C_lbmc1_lf_sr5_pos(data)                                     (0x000000FF&(data))
#define  LBMC_LBMC_0C_get_lbmc1_lf_sr8_pos(data)                                 ((0xFF000000&(data))>>24)
#define  LBMC_LBMC_0C_get_lbmc1_lf_sr7_pos(data)                                 ((0x00FF0000&(data))>>16)
#define  LBMC_LBMC_0C_get_lbmc1_lf_sr6_pos(data)                                 ((0x0000FF00&(data))>>8)
#define  LBMC_LBMC_0C_get_lbmc1_lf_sr5_pos(data)                                 (0x000000FF&(data))

#define  LBMC_LBMC_10                                                           0x18099910
#define  LBMC_LBMC_10_reg_addr                                                   "0xB8099910"
#define  LBMC_LBMC_10_reg                                                        0xB8099910
#define  LBMC_LBMC_10_inst_addr                                                  "0x0004"
#define  set_LBMC_LBMC_10_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_10_reg)=data)
#define  get_LBMC_LBMC_10_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_10_reg))
#define  LBMC_LBMC_10_lbmc0_hf_sr0_shift                                         (28)
#define  LBMC_LBMC_10_lbmc1_lf_sr8_neg_shift                                     (24)
#define  LBMC_LBMC_10_lbmc1_lf_sr7_neg_shift                                     (21)
#define  LBMC_LBMC_10_lbmc1_lf_sr6_neg_shift                                     (18)
#define  LBMC_LBMC_10_lbmc1_lf_sr5_neg_shift                                     (15)
#define  LBMC_LBMC_10_lbmc1_lf_sr4_neg_shift                                     (12)
#define  LBMC_LBMC_10_lbmc1_lf_sr3_neg_shift                                     (9)
#define  LBMC_LBMC_10_lbmc1_lf_sr2_neg_shift                                     (6)
#define  LBMC_LBMC_10_lbmc1_lf_sr1_neg_shift                                     (3)
#define  LBMC_LBMC_10_lbmc1_lf_sr0_neg_shift                                     (0)
#define  LBMC_LBMC_10_lbmc0_hf_sr0_mask                                          (0xF0000000)
#define  LBMC_LBMC_10_lbmc1_lf_sr8_neg_mask                                      (0x07000000)
#define  LBMC_LBMC_10_lbmc1_lf_sr7_neg_mask                                      (0x00E00000)
#define  LBMC_LBMC_10_lbmc1_lf_sr6_neg_mask                                      (0x001C0000)
#define  LBMC_LBMC_10_lbmc1_lf_sr5_neg_mask                                      (0x00038000)
#define  LBMC_LBMC_10_lbmc1_lf_sr4_neg_mask                                      (0x00007000)
#define  LBMC_LBMC_10_lbmc1_lf_sr3_neg_mask                                      (0x00000E00)
#define  LBMC_LBMC_10_lbmc1_lf_sr2_neg_mask                                      (0x000001C0)
#define  LBMC_LBMC_10_lbmc1_lf_sr1_neg_mask                                      (0x00000038)
#define  LBMC_LBMC_10_lbmc1_lf_sr0_neg_mask                                      (0x00000007)
#define  LBMC_LBMC_10_lbmc0_hf_sr0(data)                                         (0xF0000000&((data)<<28))
#define  LBMC_LBMC_10_lbmc1_lf_sr8_neg(data)                                     (0x07000000&((data)<<24))
#define  LBMC_LBMC_10_lbmc1_lf_sr7_neg(data)                                     (0x00E00000&((data)<<21))
#define  LBMC_LBMC_10_lbmc1_lf_sr6_neg(data)                                     (0x001C0000&((data)<<18))
#define  LBMC_LBMC_10_lbmc1_lf_sr5_neg(data)                                     (0x00038000&((data)<<15))
#define  LBMC_LBMC_10_lbmc1_lf_sr4_neg(data)                                     (0x00007000&((data)<<12))
#define  LBMC_LBMC_10_lbmc1_lf_sr3_neg(data)                                     (0x00000E00&((data)<<9))
#define  LBMC_LBMC_10_lbmc1_lf_sr2_neg(data)                                     (0x000001C0&((data)<<6))
#define  LBMC_LBMC_10_lbmc1_lf_sr1_neg(data)                                     (0x00000038&((data)<<3))
#define  LBMC_LBMC_10_lbmc1_lf_sr0_neg(data)                                     (0x00000007&(data))
#define  LBMC_LBMC_10_get_lbmc0_hf_sr0(data)                                     ((0xF0000000&(data))>>28)
#define  LBMC_LBMC_10_get_lbmc1_lf_sr8_neg(data)                                 ((0x07000000&(data))>>24)
#define  LBMC_LBMC_10_get_lbmc1_lf_sr7_neg(data)                                 ((0x00E00000&(data))>>21)
#define  LBMC_LBMC_10_get_lbmc1_lf_sr6_neg(data)                                 ((0x001C0000&(data))>>18)
#define  LBMC_LBMC_10_get_lbmc1_lf_sr5_neg(data)                                 ((0x00038000&(data))>>15)
#define  LBMC_LBMC_10_get_lbmc1_lf_sr4_neg(data)                                 ((0x00007000&(data))>>12)
#define  LBMC_LBMC_10_get_lbmc1_lf_sr3_neg(data)                                 ((0x00000E00&(data))>>9)
#define  LBMC_LBMC_10_get_lbmc1_lf_sr2_neg(data)                                 ((0x000001C0&(data))>>6)
#define  LBMC_LBMC_10_get_lbmc1_lf_sr1_neg(data)                                 ((0x00000038&(data))>>3)
#define  LBMC_LBMC_10_get_lbmc1_lf_sr0_neg(data)                                 (0x00000007&(data))

#define  LBMC_LBMC_14                                                           0x18099914
#define  LBMC_LBMC_14_reg_addr                                                   "0xB8099914"
#define  LBMC_LBMC_14_reg                                                        0xB8099914
#define  LBMC_LBMC_14_inst_addr                                                  "0x0005"
#define  set_LBMC_LBMC_14_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_14_reg)=data)
#define  get_LBMC_LBMC_14_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_14_reg))
#define  LBMC_LBMC_14_lbmc1_hf_sr2_neg_shift                                     (29)
#define  LBMC_LBMC_14_lbmc1_hf_sr1_neg_shift                                     (26)
#define  LBMC_LBMC_14_lbmc1_hf_sr0_neg_shift                                     (23)
#define  LBMC_LBMC_14_lbmc1_hf_sr2_pos_shift                                     (18)
#define  LBMC_LBMC_14_lbmc1_hf_sr1_pos_shift                                     (13)
#define  LBMC_LBMC_14_lbmc1_hf_sr0_pos_shift                                     (8)
#define  LBMC_LBMC_14_lbmc0_hf_sr2_shift                                         (4)
#define  LBMC_LBMC_14_lbmc0_hf_sr1_shift                                         (0)
#define  LBMC_LBMC_14_lbmc1_hf_sr2_neg_mask                                      (0xE0000000)
#define  LBMC_LBMC_14_lbmc1_hf_sr1_neg_mask                                      (0x1C000000)
#define  LBMC_LBMC_14_lbmc1_hf_sr0_neg_mask                                      (0x03800000)
#define  LBMC_LBMC_14_lbmc1_hf_sr2_pos_mask                                      (0x007C0000)
#define  LBMC_LBMC_14_lbmc1_hf_sr1_pos_mask                                      (0x0003E000)
#define  LBMC_LBMC_14_lbmc1_hf_sr0_pos_mask                                      (0x00001F00)
#define  LBMC_LBMC_14_lbmc0_hf_sr2_mask                                          (0x000000F0)
#define  LBMC_LBMC_14_lbmc0_hf_sr1_mask                                          (0x0000000F)
#define  LBMC_LBMC_14_lbmc1_hf_sr2_neg(data)                                     (0xE0000000&((data)<<29))
#define  LBMC_LBMC_14_lbmc1_hf_sr1_neg(data)                                     (0x1C000000&((data)<<26))
#define  LBMC_LBMC_14_lbmc1_hf_sr0_neg(data)                                     (0x03800000&((data)<<23))
#define  LBMC_LBMC_14_lbmc1_hf_sr2_pos(data)                                     (0x007C0000&((data)<<18))
#define  LBMC_LBMC_14_lbmc1_hf_sr1_pos(data)                                     (0x0003E000&((data)<<13))
#define  LBMC_LBMC_14_lbmc1_hf_sr0_pos(data)                                     (0x00001F00&((data)<<8))
#define  LBMC_LBMC_14_lbmc0_hf_sr2(data)                                         (0x000000F0&((data)<<4))
#define  LBMC_LBMC_14_lbmc0_hf_sr1(data)                                         (0x0000000F&(data))
#define  LBMC_LBMC_14_get_lbmc1_hf_sr2_neg(data)                                 ((0xE0000000&(data))>>29)
#define  LBMC_LBMC_14_get_lbmc1_hf_sr1_neg(data)                                 ((0x1C000000&(data))>>26)
#define  LBMC_LBMC_14_get_lbmc1_hf_sr0_neg(data)                                 ((0x03800000&(data))>>23)
#define  LBMC_LBMC_14_get_lbmc1_hf_sr2_pos(data)                                 ((0x007C0000&(data))>>18)
#define  LBMC_LBMC_14_get_lbmc1_hf_sr1_pos(data)                                 ((0x0003E000&(data))>>13)
#define  LBMC_LBMC_14_get_lbmc1_hf_sr0_pos(data)                                 ((0x00001F00&(data))>>8)
#define  LBMC_LBMC_14_get_lbmc0_hf_sr2(data)                                     ((0x000000F0&(data))>>4)
#define  LBMC_LBMC_14_get_lbmc0_hf_sr1(data)                                     (0x0000000F&(data))

#define  LBMC_LBMC_18                                                           0x18099918
#define  LBMC_LBMC_18_reg_addr                                                   "0xB8099918"
#define  LBMC_LBMC_18_reg                                                        0xB8099918
#define  LBMC_LBMC_18_inst_addr                                                  "0x0006"
#define  set_LBMC_LBMC_18_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_18_reg)=data)
#define  get_LBMC_LBMC_18_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_18_reg))
#define  LBMC_LBMC_18_lbmc_dummy_18_shift                                        (0)
#define  LBMC_LBMC_18_lbmc_dummy_18_mask                                         (0xFFFFFFFF)
#define  LBMC_LBMC_18_lbmc_dummy_18(data)                                        (0xFFFFFFFF&(data))
#define  LBMC_LBMC_18_get_lbmc_dummy_18(data)                                    (0xFFFFFFFF&(data))

#define  LBMC_LBMC_1C                                                           0x1809991C
#define  LBMC_LBMC_1C_reg_addr                                                   "0xB809991C"
#define  LBMC_LBMC_1C_reg                                                        0xB809991C
#define  LBMC_LBMC_1C_inst_addr                                                  "0x0007"
#define  set_LBMC_LBMC_1C_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_1C_reg)=data)
#define  get_LBMC_LBMC_1C_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_1C_reg))
#define  LBMC_LBMC_1C_lbmc_dummy_1c_shift                                        (0)
#define  LBMC_LBMC_1C_lbmc_dummy_1c_mask                                         (0xFFFFFFFF)
#define  LBMC_LBMC_1C_lbmc_dummy_1c(data)                                        (0xFFFFFFFF&(data))
#define  LBMC_LBMC_1C_get_lbmc_dummy_1c(data)                                    (0xFFFFFFFF&(data))

#define  LBMC_LBMC_20                                                           0x18099920
#define  LBMC_LBMC_20_reg_addr                                                   "0xB8099920"
#define  LBMC_LBMC_20_reg                                                        0xB8099920
#define  LBMC_LBMC_20_inst_addr                                                  "0x0008"
#define  set_LBMC_LBMC_20_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_20_reg)=data)
#define  get_LBMC_LBMC_20_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_20_reg))
#define  LBMC_LBMC_20_lbmc_mode_shift                                            (31)
#define  LBMC_LBMC_20_fhd_mod_shift                                              (30)
#define  LBMC_LBMC_20_lbmc_hf_420_shift                                          (29)
#define  LBMC_LBMC_20_lbmc_v_act_shift                                           (16)
#define  LBMC_LBMC_20_lbmc_pr_lrinv_shift                                        (14)
#define  LBMC_LBMC_20_lbmc_pr_mod_shift                                          (13)
#define  LBMC_LBMC_20_lbmc_h_act_shift                                           (0)
#define  LBMC_LBMC_20_lbmc_mode_mask                                             (0x80000000)
#define  LBMC_LBMC_20_fhd_mod_mask                                               (0x40000000)
#define  LBMC_LBMC_20_lbmc_hf_420_mask                                           (0x20000000)
#define  LBMC_LBMC_20_lbmc_v_act_mask                                            (0x1FFF0000)
#define  LBMC_LBMC_20_lbmc_pr_lrinv_mask                                         (0x00004000)
#define  LBMC_LBMC_20_lbmc_pr_mod_mask                                           (0x00002000)
#define  LBMC_LBMC_20_lbmc_h_act_mask                                            (0x00001FFF)
#define  LBMC_LBMC_20_lbmc_mode(data)                                            (0x80000000&((data)<<31))
#define  LBMC_LBMC_20_fhd_mod(data)                                              (0x40000000&((data)<<30))
#define  LBMC_LBMC_20_lbmc_hf_420(data)                                          (0x20000000&((data)<<29))
#define  LBMC_LBMC_20_lbmc_v_act(data)                                           (0x1FFF0000&((data)<<16))
#define  LBMC_LBMC_20_lbmc_pr_lrinv(data)                                        (0x00004000&((data)<<14))
#define  LBMC_LBMC_20_lbmc_pr_mod(data)                                          (0x00002000&((data)<<13))
#define  LBMC_LBMC_20_lbmc_h_act(data)                                           (0x00001FFF&(data))
#define  LBMC_LBMC_20_get_lbmc_mode(data)                                        ((0x80000000&(data))>>31)
#define  LBMC_LBMC_20_get_fhd_mod(data)                                          ((0x40000000&(data))>>30)
#define  LBMC_LBMC_20_get_lbmc_hf_420(data)                                      ((0x20000000&(data))>>29)
#define  LBMC_LBMC_20_get_lbmc_v_act(data)                                       ((0x1FFF0000&(data))>>16)
#define  LBMC_LBMC_20_get_lbmc_pr_lrinv(data)                                    ((0x00004000&(data))>>14)
#define  LBMC_LBMC_20_get_lbmc_pr_mod(data)                                      ((0x00002000&(data))>>13)
#define  LBMC_LBMC_20_get_lbmc_h_act(data)                                       (0x00001FFF&(data))

#define  LBMC_LBMC_24                                                           0x18099924
#define  LBMC_LBMC_24_reg_addr                                                   "0xB8099924"
#define  LBMC_LBMC_24_reg                                                        0xB8099924
#define  LBMC_LBMC_24_inst_addr                                                  "0x0009"
#define  set_LBMC_LBMC_24_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_24_reg)=data)
#define  get_LBMC_LBMC_24_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_24_reg))
#define  LBMC_LBMC_24_lbmc_mode_hf_shift                                         (28)
#define  LBMC_LBMC_24_lbmc_mode_lf_shift                                         (24)
#define  LBMC_LBMC_24_lbmc_mode_lfh_shift                                        (20)
#define  LBMC_LBMC_24_normal_hf_prefetch_unit_x2_shift                           (17)
#define  LBMC_LBMC_24_normal_hf_sr_unit_x2_shift                                 (16)
#define  LBMC_LBMC_24_lbmcpc_mode_sel_p_shift                                    (13)
#define  LBMC_LBMC_24_lbmc_hf_nline_option_shift                                 (12)
#define  LBMC_LBMC_24_force_iz_when_mc_phase_eq0_shift                           (10)
#define  LBMC_LBMC_24_lbmc_z_replace_chv_shift                                   (9)
#define  LBMC_LBMC_24_lbmc_en_get_info_shift                                     (8)
#define  LBMC_LBMC_24_lbmc_prefetch_self_shift                                   (7)
#define  LBMC_LBMC_24_lbmc_vflip_shift                                           (6)
#define  LBMC_LBMC_24_lbmc_lpf_2tap_on_shift                                     (5)
#define  LBMC_LBMC_24_lbmcpc_mode_shift                                          (4)
#define  LBMC_LBMC_24_lbmc_3dmode_shift                                          (3)
#define  LBMC_LBMC_24_show_info_sel_shift                                        (0)
#define  LBMC_LBMC_24_lbmc_mode_hf_mask                                          (0xF0000000)
#define  LBMC_LBMC_24_lbmc_mode_lf_mask                                          (0x0F000000)
#define  LBMC_LBMC_24_lbmc_mode_lfh_mask                                         (0x00F00000)
#define  LBMC_LBMC_24_normal_hf_prefetch_unit_x2_mask                            (0x00020000)
#define  LBMC_LBMC_24_normal_hf_sr_unit_x2_mask                                  (0x00010000)
#define  LBMC_LBMC_24_lbmcpc_mode_sel_p_mask                                     (0x00002000)
#define  LBMC_LBMC_24_lbmc_hf_nline_option_mask                                  (0x00001000)
#define  LBMC_LBMC_24_force_iz_when_mc_phase_eq0_mask                            (0x00000400)
#define  LBMC_LBMC_24_lbmc_z_replace_chv_mask                                    (0x00000200)
#define  LBMC_LBMC_24_lbmc_en_get_info_mask                                      (0x00000100)
#define  LBMC_LBMC_24_lbmc_prefetch_self_mask                                    (0x00000080)
#define  LBMC_LBMC_24_lbmc_vflip_mask                                            (0x00000040)
#define  LBMC_LBMC_24_lbmc_lpf_2tap_on_mask                                      (0x00000020)
#define  LBMC_LBMC_24_lbmcpc_mode_mask                                           (0x00000010)
#define  LBMC_LBMC_24_lbmc_3dmode_mask                                           (0x00000008)
#define  LBMC_LBMC_24_show_info_sel_mask                                         (0x00000007)
#define  LBMC_LBMC_24_lbmc_mode_hf(data)                                         (0xF0000000&((data)<<28))
#define  LBMC_LBMC_24_lbmc_mode_lf(data)                                         (0x0F000000&((data)<<24))
#define  LBMC_LBMC_24_lbmc_mode_lfh(data)                                        (0x00F00000&((data)<<20))
#define  LBMC_LBMC_24_normal_hf_prefetch_unit_x2(data)                           (0x00020000&((data)<<17))
#define  LBMC_LBMC_24_normal_hf_sr_unit_x2(data)                                 (0x00010000&((data)<<16))
#define  LBMC_LBMC_24_lbmcpc_mode_sel_p(data)                                    (0x00002000&((data)<<13))
#define  LBMC_LBMC_24_lbmc_hf_nline_option(data)                                 (0x00001000&((data)<<12))
#define  LBMC_LBMC_24_force_iz_when_mc_phase_eq0(data)                           (0x00000400&((data)<<10))
#define  LBMC_LBMC_24_lbmc_z_replace_chv(data)                                   (0x00000200&((data)<<9))
#define  LBMC_LBMC_24_lbmc_en_get_info(data)                                     (0x00000100&((data)<<8))
#define  LBMC_LBMC_24_lbmc_prefetch_self(data)                                   (0x00000080&((data)<<7))
#define  LBMC_LBMC_24_lbmc_vflip(data)                                           (0x00000040&((data)<<6))
#define  LBMC_LBMC_24_lbmc_lpf_2tap_on(data)                                     (0x00000020&((data)<<5))
#define  LBMC_LBMC_24_lbmcpc_mode(data)                                          (0x00000010&((data)<<4))
#define  LBMC_LBMC_24_lbmc_3dmode(data)                                          (0x00000008&((data)<<3))
#define  LBMC_LBMC_24_show_info_sel(data)                                        (0x00000007&(data))
#define  LBMC_LBMC_24_get_lbmc_mode_hf(data)                                     ((0xF0000000&(data))>>28)
#define  LBMC_LBMC_24_get_lbmc_mode_lf(data)                                     ((0x0F000000&(data))>>24)
#define  LBMC_LBMC_24_get_lbmc_mode_lfh(data)                                    ((0x00F00000&(data))>>20)
#define  LBMC_LBMC_24_get_normal_hf_prefetch_unit_x2(data)                       ((0x00020000&(data))>>17)
#define  LBMC_LBMC_24_get_normal_hf_sr_unit_x2(data)                             ((0x00010000&(data))>>16)
#define  LBMC_LBMC_24_get_lbmcpc_mode_sel_p(data)                                ((0x00002000&(data))>>13)
#define  LBMC_LBMC_24_get_lbmc_hf_nline_option(data)                             ((0x00001000&(data))>>12)
#define  LBMC_LBMC_24_get_force_iz_when_mc_phase_eq0(data)                       ((0x00000400&(data))>>10)
#define  LBMC_LBMC_24_get_lbmc_z_replace_chv(data)                               ((0x00000200&(data))>>9)
#define  LBMC_LBMC_24_get_lbmc_en_get_info(data)                                 ((0x00000100&(data))>>8)
#define  LBMC_LBMC_24_get_lbmc_prefetch_self(data)                               ((0x00000080&(data))>>7)
#define  LBMC_LBMC_24_get_lbmc_vflip(data)                                       ((0x00000040&(data))>>6)
#define  LBMC_LBMC_24_get_lbmc_lpf_2tap_on(data)                                 ((0x00000020&(data))>>5)
#define  LBMC_LBMC_24_get_lbmcpc_mode(data)                                      ((0x00000010&(data))>>4)
#define  LBMC_LBMC_24_get_lbmc_3dmode(data)                                      ((0x00000008&(data))>>3)
#define  LBMC_LBMC_24_get_show_info_sel(data)                                    (0x00000007&(data))

#define  LBMC_LBMC_28                                                           0x18099928
#define  LBMC_LBMC_28_reg_addr                                                   "0xB8099928"
#define  LBMC_LBMC_28_reg                                                        0xB8099928
#define  LBMC_LBMC_28_inst_addr                                                  "0x000A"
#define  set_LBMC_LBMC_28_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_28_reg)=data)
#define  get_LBMC_LBMC_28_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_28_reg))
#define  LBMC_LBMC_28_lbmc_xrange_limit_shift                                    (16)
#define  LBMC_LBMC_28_lbmc_row_inactive_shift                                    (0)
#define  LBMC_LBMC_28_lbmc_xrange_limit_mask                                     (0x1FFF0000)
#define  LBMC_LBMC_28_lbmc_row_inactive_mask                                     (0x00001FFF)
#define  LBMC_LBMC_28_lbmc_xrange_limit(data)                                    (0x1FFF0000&((data)<<16))
#define  LBMC_LBMC_28_lbmc_row_inactive(data)                                    (0x00001FFF&(data))
#define  LBMC_LBMC_28_get_lbmc_xrange_limit(data)                                ((0x1FFF0000&(data))>>16)
#define  LBMC_LBMC_28_get_lbmc_row_inactive(data)                                (0x00001FFF&(data))

#define  LBMC_LBMC_2C                                                           0x1809992C
#define  LBMC_LBMC_2C_reg_addr                                                   "0xB809992C"
#define  LBMC_LBMC_2C_reg                                                        0xB809992C
#define  LBMC_LBMC_2C_inst_addr                                                  "0x000B"
#define  set_LBMC_LBMC_2C_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_2C_reg)=data)
#define  get_LBMC_LBMC_2C_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_2C_reg))
#define  LBMC_LBMC_2C_nor_ilf_idx3_prefetch_num_shift                            (21)
#define  LBMC_LBMC_2C_nor_ilf_idx2_prefetch_num_shift                            (14)
#define  LBMC_LBMC_2C_nor_ilf_idx1_prefetch_num_shift                            (7)
#define  LBMC_LBMC_2C_nor_ilf_idx0_prefetch_num_shift                            (0)
#define  LBMC_LBMC_2C_nor_ilf_idx3_prefetch_num_mask                             (0x0FE00000)
#define  LBMC_LBMC_2C_nor_ilf_idx2_prefetch_num_mask                             (0x001FC000)
#define  LBMC_LBMC_2C_nor_ilf_idx1_prefetch_num_mask                             (0x00003F80)
#define  LBMC_LBMC_2C_nor_ilf_idx0_prefetch_num_mask                             (0x0000007F)
#define  LBMC_LBMC_2C_nor_ilf_idx3_prefetch_num(data)                            (0x0FE00000&((data)<<21))
#define  LBMC_LBMC_2C_nor_ilf_idx2_prefetch_num(data)                            (0x001FC000&((data)<<14))
#define  LBMC_LBMC_2C_nor_ilf_idx1_prefetch_num(data)                            (0x00003F80&((data)<<7))
#define  LBMC_LBMC_2C_nor_ilf_idx0_prefetch_num(data)                            (0x0000007F&(data))
#define  LBMC_LBMC_2C_get_nor_ilf_idx3_prefetch_num(data)                        ((0x0FE00000&(data))>>21)
#define  LBMC_LBMC_2C_get_nor_ilf_idx2_prefetch_num(data)                        ((0x001FC000&(data))>>14)
#define  LBMC_LBMC_2C_get_nor_ilf_idx1_prefetch_num(data)                        ((0x00003F80&(data))>>7)
#define  LBMC_LBMC_2C_get_nor_ilf_idx0_prefetch_num(data)                        (0x0000007F&(data))

#define  LBMC_LBMC_30                                                           0x18099930
#define  LBMC_LBMC_30_reg_addr                                                   "0xB8099930"
#define  LBMC_LBMC_30_reg                                                        0xB8099930
#define  LBMC_LBMC_30_inst_addr                                                  "0x000C"
#define  set_LBMC_LBMC_30_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_30_reg)=data)
#define  get_LBMC_LBMC_30_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_30_reg))
#define  LBMC_LBMC_30_nor_ilf_idx7_prefetch_num_shift                            (21)
#define  LBMC_LBMC_30_nor_ilf_idx6_prefetch_num_shift                            (14)
#define  LBMC_LBMC_30_nor_ilf_idx5_prefetch_num_shift                            (7)
#define  LBMC_LBMC_30_nor_ilf_idx4_prefetch_num_shift                            (0)
#define  LBMC_LBMC_30_nor_ilf_idx7_prefetch_num_mask                             (0x0FE00000)
#define  LBMC_LBMC_30_nor_ilf_idx6_prefetch_num_mask                             (0x001FC000)
#define  LBMC_LBMC_30_nor_ilf_idx5_prefetch_num_mask                             (0x00003F80)
#define  LBMC_LBMC_30_nor_ilf_idx4_prefetch_num_mask                             (0x0000007F)
#define  LBMC_LBMC_30_nor_ilf_idx7_prefetch_num(data)                            (0x0FE00000&((data)<<21))
#define  LBMC_LBMC_30_nor_ilf_idx6_prefetch_num(data)                            (0x001FC000&((data)<<14))
#define  LBMC_LBMC_30_nor_ilf_idx5_prefetch_num(data)                            (0x00003F80&((data)<<7))
#define  LBMC_LBMC_30_nor_ilf_idx4_prefetch_num(data)                            (0x0000007F&(data))
#define  LBMC_LBMC_30_get_nor_ilf_idx7_prefetch_num(data)                        ((0x0FE00000&(data))>>21)
#define  LBMC_LBMC_30_get_nor_ilf_idx6_prefetch_num(data)                        ((0x001FC000&(data))>>14)
#define  LBMC_LBMC_30_get_nor_ilf_idx5_prefetch_num(data)                        ((0x00003F80&(data))>>7)
#define  LBMC_LBMC_30_get_nor_ilf_idx4_prefetch_num(data)                        (0x0000007F&(data))

#define  LBMC_LBMC_34                                                           0x18099934
#define  LBMC_LBMC_34_reg_addr                                                   "0xB8099934"
#define  LBMC_LBMC_34_reg                                                        0xB8099934
#define  LBMC_LBMC_34_inst_addr                                                  "0x000D"
#define  set_LBMC_LBMC_34_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_34_reg)=data)
#define  get_LBMC_LBMC_34_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_34_reg))
#define  LBMC_LBMC_34_nor_ilf_idx8_prefetch_num_shift                            (0)
#define  LBMC_LBMC_34_nor_ilf_idx8_prefetch_num_mask                             (0x0000007F)
#define  LBMC_LBMC_34_nor_ilf_idx8_prefetch_num(data)                            (0x0000007F&(data))
#define  LBMC_LBMC_34_get_nor_ilf_idx8_prefetch_num(data)                        (0x0000007F&(data))

#define  LBMC_LBMC_38                                                           0x18099938
#define  LBMC_LBMC_38_reg_addr                                                   "0xB8099938"
#define  LBMC_LBMC_38_reg                                                        0xB8099938
#define  LBMC_LBMC_38_inst_addr                                                  "0x000E"
#define  set_LBMC_LBMC_38_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_38_reg)=data)
#define  get_LBMC_LBMC_38_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_38_reg))
#define  LBMC_LBMC_38_nor_plf_idx3_prefetch_num_shift                            (21)
#define  LBMC_LBMC_38_nor_plf_idx2_prefetch_num_shift                            (14)
#define  LBMC_LBMC_38_nor_plf_idx1_prefetch_num_shift                            (7)
#define  LBMC_LBMC_38_nor_plf_idx0_prefetch_num_shift                            (0)
#define  LBMC_LBMC_38_nor_plf_idx3_prefetch_num_mask                             (0x0FE00000)
#define  LBMC_LBMC_38_nor_plf_idx2_prefetch_num_mask                             (0x001FC000)
#define  LBMC_LBMC_38_nor_plf_idx1_prefetch_num_mask                             (0x00003F80)
#define  LBMC_LBMC_38_nor_plf_idx0_prefetch_num_mask                             (0x0000007F)
#define  LBMC_LBMC_38_nor_plf_idx3_prefetch_num(data)                            (0x0FE00000&((data)<<21))
#define  LBMC_LBMC_38_nor_plf_idx2_prefetch_num(data)                            (0x001FC000&((data)<<14))
#define  LBMC_LBMC_38_nor_plf_idx1_prefetch_num(data)                            (0x00003F80&((data)<<7))
#define  LBMC_LBMC_38_nor_plf_idx0_prefetch_num(data)                            (0x0000007F&(data))
#define  LBMC_LBMC_38_get_nor_plf_idx3_prefetch_num(data)                        ((0x0FE00000&(data))>>21)
#define  LBMC_LBMC_38_get_nor_plf_idx2_prefetch_num(data)                        ((0x001FC000&(data))>>14)
#define  LBMC_LBMC_38_get_nor_plf_idx1_prefetch_num(data)                        ((0x00003F80&(data))>>7)
#define  LBMC_LBMC_38_get_nor_plf_idx0_prefetch_num(data)                        (0x0000007F&(data))

#define  LBMC_LBMC_3C                                                           0x1809993C
#define  LBMC_LBMC_3C_reg_addr                                                   "0xB809993C"
#define  LBMC_LBMC_3C_reg                                                        0xB809993C
#define  LBMC_LBMC_3C_inst_addr                                                  "0x000F"
#define  set_LBMC_LBMC_3C_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_3C_reg)=data)
#define  get_LBMC_LBMC_3C_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_3C_reg))
#define  LBMC_LBMC_3C_nor_plf_idx7_prefetch_num_shift                            (21)
#define  LBMC_LBMC_3C_nor_plf_idx6_prefetch_num_shift                            (14)
#define  LBMC_LBMC_3C_nor_plf_idx5_prefetch_num_shift                            (7)
#define  LBMC_LBMC_3C_nor_plf_idx4_prefetch_num_shift                            (0)
#define  LBMC_LBMC_3C_nor_plf_idx7_prefetch_num_mask                             (0x0FE00000)
#define  LBMC_LBMC_3C_nor_plf_idx6_prefetch_num_mask                             (0x001FC000)
#define  LBMC_LBMC_3C_nor_plf_idx5_prefetch_num_mask                             (0x00003F80)
#define  LBMC_LBMC_3C_nor_plf_idx4_prefetch_num_mask                             (0x0000007F)
#define  LBMC_LBMC_3C_nor_plf_idx7_prefetch_num(data)                            (0x0FE00000&((data)<<21))
#define  LBMC_LBMC_3C_nor_plf_idx6_prefetch_num(data)                            (0x001FC000&((data)<<14))
#define  LBMC_LBMC_3C_nor_plf_idx5_prefetch_num(data)                            (0x00003F80&((data)<<7))
#define  LBMC_LBMC_3C_nor_plf_idx4_prefetch_num(data)                            (0x0000007F&(data))
#define  LBMC_LBMC_3C_get_nor_plf_idx7_prefetch_num(data)                        ((0x0FE00000&(data))>>21)
#define  LBMC_LBMC_3C_get_nor_plf_idx6_prefetch_num(data)                        ((0x001FC000&(data))>>14)
#define  LBMC_LBMC_3C_get_nor_plf_idx5_prefetch_num(data)                        ((0x00003F80&(data))>>7)
#define  LBMC_LBMC_3C_get_nor_plf_idx4_prefetch_num(data)                        (0x0000007F&(data))

#define  LBMC_LBMC_40                                                           0x18099940
#define  LBMC_LBMC_40_reg_addr                                                   "0xB8099940"
#define  LBMC_LBMC_40_reg                                                        0xB8099940
#define  LBMC_LBMC_40_inst_addr                                                  "0x0010"
#define  set_LBMC_LBMC_40_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_40_reg)=data)
#define  get_LBMC_LBMC_40_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_40_reg))
#define  LBMC_LBMC_40_nor_plf_idx8_prefetch_num_shift                            (0)
#define  LBMC_LBMC_40_nor_plf_idx8_prefetch_num_mask                             (0x0000007F)
#define  LBMC_LBMC_40_nor_plf_idx8_prefetch_num(data)                            (0x0000007F&(data))
#define  LBMC_LBMC_40_get_nor_plf_idx8_prefetch_num(data)                        (0x0000007F&(data))

#define  LBMC_LBMC_44                                                           0x18099944
#define  LBMC_LBMC_44_reg_addr                                                   "0xB8099944"
#define  LBMC_LBMC_44_reg                                                        0xB8099944
#define  LBMC_LBMC_44_inst_addr                                                  "0x0011"
#define  set_LBMC_LBMC_44_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_44_reg)=data)
#define  get_LBMC_LBMC_44_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_44_reg))
#define  LBMC_LBMC_44_nor_phf_idx2_prefetch_num_shift                            (24)
#define  LBMC_LBMC_44_nor_phf_idx1_prefetch_num_shift                            (20)
#define  LBMC_LBMC_44_nor_phf_idx0_prefetch_num_shift                            (16)
#define  LBMC_LBMC_44_nor_ihf_idx2_prefetch_num_shift                            (8)
#define  LBMC_LBMC_44_nor_ihf_idx1_prefetch_num_shift                            (4)
#define  LBMC_LBMC_44_nor_ihf_idx0_prefetch_num_shift                            (0)
#define  LBMC_LBMC_44_nor_phf_idx2_prefetch_num_mask                             (0x0F000000)
#define  LBMC_LBMC_44_nor_phf_idx1_prefetch_num_mask                             (0x00F00000)
#define  LBMC_LBMC_44_nor_phf_idx0_prefetch_num_mask                             (0x000F0000)
#define  LBMC_LBMC_44_nor_ihf_idx2_prefetch_num_mask                             (0x00000F00)
#define  LBMC_LBMC_44_nor_ihf_idx1_prefetch_num_mask                             (0x000000F0)
#define  LBMC_LBMC_44_nor_ihf_idx0_prefetch_num_mask                             (0x0000000F)
#define  LBMC_LBMC_44_nor_phf_idx2_prefetch_num(data)                            (0x0F000000&((data)<<24))
#define  LBMC_LBMC_44_nor_phf_idx1_prefetch_num(data)                            (0x00F00000&((data)<<20))
#define  LBMC_LBMC_44_nor_phf_idx0_prefetch_num(data)                            (0x000F0000&((data)<<16))
#define  LBMC_LBMC_44_nor_ihf_idx2_prefetch_num(data)                            (0x00000F00&((data)<<8))
#define  LBMC_LBMC_44_nor_ihf_idx1_prefetch_num(data)                            (0x000000F0&((data)<<4))
#define  LBMC_LBMC_44_nor_ihf_idx0_prefetch_num(data)                            (0x0000000F&(data))
#define  LBMC_LBMC_44_get_nor_phf_idx2_prefetch_num(data)                        ((0x0F000000&(data))>>24)
#define  LBMC_LBMC_44_get_nor_phf_idx1_prefetch_num(data)                        ((0x00F00000&(data))>>20)
#define  LBMC_LBMC_44_get_nor_phf_idx0_prefetch_num(data)                        ((0x000F0000&(data))>>16)
#define  LBMC_LBMC_44_get_nor_ihf_idx2_prefetch_num(data)                        ((0x00000F00&(data))>>8)
#define  LBMC_LBMC_44_get_nor_ihf_idx1_prefetch_num(data)                        ((0x000000F0&(data))>>4)
#define  LBMC_LBMC_44_get_nor_ihf_idx0_prefetch_num(data)                        (0x0000000F&(data))

#define  LBMC_LBMC_48                                                           0x18099948
#define  LBMC_LBMC_48_reg_addr                                                   "0xB8099948"
#define  LBMC_LBMC_48_reg                                                        0xB8099948
#define  LBMC_LBMC_48_inst_addr                                                  "0x0012"
#define  set_LBMC_LBMC_48_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_48_reg)=data)
#define  get_LBMC_LBMC_48_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_48_reg))
#define  LBMC_LBMC_48_sing_ilf_idx3_prefetch_num_shift                           (21)
#define  LBMC_LBMC_48_sing_ilf_idx2_prefetch_num_shift                           (14)
#define  LBMC_LBMC_48_sing_ilf_idx1_prefetch_num_shift                           (7)
#define  LBMC_LBMC_48_sing_ilf_idx0_prefetch_num_shift                           (0)
#define  LBMC_LBMC_48_sing_ilf_idx3_prefetch_num_mask                            (0x0FE00000)
#define  LBMC_LBMC_48_sing_ilf_idx2_prefetch_num_mask                            (0x001FC000)
#define  LBMC_LBMC_48_sing_ilf_idx1_prefetch_num_mask                            (0x00003F80)
#define  LBMC_LBMC_48_sing_ilf_idx0_prefetch_num_mask                            (0x0000007F)
#define  LBMC_LBMC_48_sing_ilf_idx3_prefetch_num(data)                           (0x0FE00000&((data)<<21))
#define  LBMC_LBMC_48_sing_ilf_idx2_prefetch_num(data)                           (0x001FC000&((data)<<14))
#define  LBMC_LBMC_48_sing_ilf_idx1_prefetch_num(data)                           (0x00003F80&((data)<<7))
#define  LBMC_LBMC_48_sing_ilf_idx0_prefetch_num(data)                           (0x0000007F&(data))
#define  LBMC_LBMC_48_get_sing_ilf_idx3_prefetch_num(data)                       ((0x0FE00000&(data))>>21)
#define  LBMC_LBMC_48_get_sing_ilf_idx2_prefetch_num(data)                       ((0x001FC000&(data))>>14)
#define  LBMC_LBMC_48_get_sing_ilf_idx1_prefetch_num(data)                       ((0x00003F80&(data))>>7)
#define  LBMC_LBMC_48_get_sing_ilf_idx0_prefetch_num(data)                       (0x0000007F&(data))

#define  LBMC_LBMC_4C                                                           0x1809994C
#define  LBMC_LBMC_4C_reg_addr                                                   "0xB809994C"
#define  LBMC_LBMC_4C_reg                                                        0xB809994C
#define  LBMC_LBMC_4C_inst_addr                                                  "0x0013"
#define  set_LBMC_LBMC_4C_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_4C_reg)=data)
#define  get_LBMC_LBMC_4C_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_4C_reg))
#define  LBMC_LBMC_4C_sing_ilf_idx7_prefetch_num_shift                           (21)
#define  LBMC_LBMC_4C_sing_ilf_idx6_prefetch_num_shift                           (14)
#define  LBMC_LBMC_4C_sing_ilf_idx5_prefetch_num_shift                           (7)
#define  LBMC_LBMC_4C_sing_ilf_idx4_prefetch_num_shift                           (0)
#define  LBMC_LBMC_4C_sing_ilf_idx7_prefetch_num_mask                            (0x0FE00000)
#define  LBMC_LBMC_4C_sing_ilf_idx6_prefetch_num_mask                            (0x001FC000)
#define  LBMC_LBMC_4C_sing_ilf_idx5_prefetch_num_mask                            (0x00003F80)
#define  LBMC_LBMC_4C_sing_ilf_idx4_prefetch_num_mask                            (0x0000007F)
#define  LBMC_LBMC_4C_sing_ilf_idx7_prefetch_num(data)                           (0x0FE00000&((data)<<21))
#define  LBMC_LBMC_4C_sing_ilf_idx6_prefetch_num(data)                           (0x001FC000&((data)<<14))
#define  LBMC_LBMC_4C_sing_ilf_idx5_prefetch_num(data)                           (0x00003F80&((data)<<7))
#define  LBMC_LBMC_4C_sing_ilf_idx4_prefetch_num(data)                           (0x0000007F&(data))
#define  LBMC_LBMC_4C_get_sing_ilf_idx7_prefetch_num(data)                       ((0x0FE00000&(data))>>21)
#define  LBMC_LBMC_4C_get_sing_ilf_idx6_prefetch_num(data)                       ((0x001FC000&(data))>>14)
#define  LBMC_LBMC_4C_get_sing_ilf_idx5_prefetch_num(data)                       ((0x00003F80&(data))>>7)
#define  LBMC_LBMC_4C_get_sing_ilf_idx4_prefetch_num(data)                       (0x0000007F&(data))

#define  LBMC_LBMC_50                                                           0x18099950
#define  LBMC_LBMC_50_reg_addr                                                   "0xB8099950"
#define  LBMC_LBMC_50_reg                                                        0xB8099950
#define  LBMC_LBMC_50_inst_addr                                                  "0x0014"
#define  set_LBMC_LBMC_50_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_50_reg)=data)
#define  get_LBMC_LBMC_50_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_50_reg))
#define  LBMC_LBMC_50_sing_ilf_idx8_prefetch_num_shift                           (0)
#define  LBMC_LBMC_50_sing_ilf_idx8_prefetch_num_mask                            (0x0000007F)
#define  LBMC_LBMC_50_sing_ilf_idx8_prefetch_num(data)                           (0x0000007F&(data))
#define  LBMC_LBMC_50_get_sing_ilf_idx8_prefetch_num(data)                       (0x0000007F&(data))

#define  LBMC_LBMC_54                                                           0x18099954
#define  LBMC_LBMC_54_reg_addr                                                   "0xB8099954"
#define  LBMC_LBMC_54_reg                                                        0xB8099954
#define  LBMC_LBMC_54_inst_addr                                                  "0x0015"
#define  set_LBMC_LBMC_54_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_54_reg)=data)
#define  get_LBMC_LBMC_54_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_54_reg))
#define  LBMC_LBMC_54_sing_plf_idx3_prefetch_num_shift                           (21)
#define  LBMC_LBMC_54_sing_plf_idx2_prefetch_num_shift                           (14)
#define  LBMC_LBMC_54_sing_plf_idx1_prefetch_num_shift                           (7)
#define  LBMC_LBMC_54_sing_plf_idx0_prefetch_num_shift                           (0)
#define  LBMC_LBMC_54_sing_plf_idx3_prefetch_num_mask                            (0x0FE00000)
#define  LBMC_LBMC_54_sing_plf_idx2_prefetch_num_mask                            (0x001FC000)
#define  LBMC_LBMC_54_sing_plf_idx1_prefetch_num_mask                            (0x00003F80)
#define  LBMC_LBMC_54_sing_plf_idx0_prefetch_num_mask                            (0x0000007F)
#define  LBMC_LBMC_54_sing_plf_idx3_prefetch_num(data)                           (0x0FE00000&((data)<<21))
#define  LBMC_LBMC_54_sing_plf_idx2_prefetch_num(data)                           (0x001FC000&((data)<<14))
#define  LBMC_LBMC_54_sing_plf_idx1_prefetch_num(data)                           (0x00003F80&((data)<<7))
#define  LBMC_LBMC_54_sing_plf_idx0_prefetch_num(data)                           (0x0000007F&(data))
#define  LBMC_LBMC_54_get_sing_plf_idx3_prefetch_num(data)                       ((0x0FE00000&(data))>>21)
#define  LBMC_LBMC_54_get_sing_plf_idx2_prefetch_num(data)                       ((0x001FC000&(data))>>14)
#define  LBMC_LBMC_54_get_sing_plf_idx1_prefetch_num(data)                       ((0x00003F80&(data))>>7)
#define  LBMC_LBMC_54_get_sing_plf_idx0_prefetch_num(data)                       (0x0000007F&(data))

#define  LBMC_LBMC_58                                                           0x18099958
#define  LBMC_LBMC_58_reg_addr                                                   "0xB8099958"
#define  LBMC_LBMC_58_reg                                                        0xB8099958
#define  LBMC_LBMC_58_inst_addr                                                  "0x0016"
#define  set_LBMC_LBMC_58_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_58_reg)=data)
#define  get_LBMC_LBMC_58_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_58_reg))
#define  LBMC_LBMC_58_sing_plf_idx7_prefetch_num_shift                           (21)
#define  LBMC_LBMC_58_sing_plf_idx6_prefetch_num_shift                           (14)
#define  LBMC_LBMC_58_sing_plf_idx5_prefetch_num_shift                           (7)
#define  LBMC_LBMC_58_sing_plf_idx4_prefetch_num_shift                           (0)
#define  LBMC_LBMC_58_sing_plf_idx7_prefetch_num_mask                            (0x0FE00000)
#define  LBMC_LBMC_58_sing_plf_idx6_prefetch_num_mask                            (0x001FC000)
#define  LBMC_LBMC_58_sing_plf_idx5_prefetch_num_mask                            (0x00003F80)
#define  LBMC_LBMC_58_sing_plf_idx4_prefetch_num_mask                            (0x0000007F)
#define  LBMC_LBMC_58_sing_plf_idx7_prefetch_num(data)                           (0x0FE00000&((data)<<21))
#define  LBMC_LBMC_58_sing_plf_idx6_prefetch_num(data)                           (0x001FC000&((data)<<14))
#define  LBMC_LBMC_58_sing_plf_idx5_prefetch_num(data)                           (0x00003F80&((data)<<7))
#define  LBMC_LBMC_58_sing_plf_idx4_prefetch_num(data)                           (0x0000007F&(data))
#define  LBMC_LBMC_58_get_sing_plf_idx7_prefetch_num(data)                       ((0x0FE00000&(data))>>21)
#define  LBMC_LBMC_58_get_sing_plf_idx6_prefetch_num(data)                       ((0x001FC000&(data))>>14)
#define  LBMC_LBMC_58_get_sing_plf_idx5_prefetch_num(data)                       ((0x00003F80&(data))>>7)
#define  LBMC_LBMC_58_get_sing_plf_idx4_prefetch_num(data)                       (0x0000007F&(data))

#define  LBMC_LBMC_5C                                                           0x1809995C
#define  LBMC_LBMC_5C_reg_addr                                                   "0xB809995C"
#define  LBMC_LBMC_5C_reg                                                        0xB809995C
#define  LBMC_LBMC_5C_inst_addr                                                  "0x0017"
#define  set_LBMC_LBMC_5C_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_5C_reg)=data)
#define  get_LBMC_LBMC_5C_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_5C_reg))
#define  LBMC_LBMC_5C_sing_plf_idx8_prefetch_num_shift                           (0)
#define  LBMC_LBMC_5C_sing_plf_idx8_prefetch_num_mask                            (0x0000007F)
#define  LBMC_LBMC_5C_sing_plf_idx8_prefetch_num(data)                           (0x0000007F&(data))
#define  LBMC_LBMC_5C_get_sing_plf_idx8_prefetch_num(data)                       (0x0000007F&(data))

#define  LBMC_LBMC_60                                                           0x18099960
#define  LBMC_LBMC_60_reg_addr                                                   "0xB8099960"
#define  LBMC_LBMC_60_reg                                                        0xB8099960
#define  LBMC_LBMC_60_inst_addr                                                  "0x0018"
#define  set_LBMC_LBMC_60_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_60_reg)=data)
#define  get_LBMC_LBMC_60_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_60_reg))
#define  LBMC_LBMC_60_sing_phf_idx2_prefetch_num_shift                           (26)
#define  LBMC_LBMC_60_sing_phf_idx1_prefetch_num_shift                           (21)
#define  LBMC_LBMC_60_sing_phf_idx0_prefetch_num_shift                           (16)
#define  LBMC_LBMC_60_sing_ihf_idx2_prefetch_num_shift                           (10)
#define  LBMC_LBMC_60_sing_ihf_idx1_prefetch_num_shift                           (5)
#define  LBMC_LBMC_60_sing_ihf_idx0_prefetch_num_shift                           (0)
#define  LBMC_LBMC_60_sing_phf_idx2_prefetch_num_mask                            (0x7C000000)
#define  LBMC_LBMC_60_sing_phf_idx1_prefetch_num_mask                            (0x03E00000)
#define  LBMC_LBMC_60_sing_phf_idx0_prefetch_num_mask                            (0x001F0000)
#define  LBMC_LBMC_60_sing_ihf_idx2_prefetch_num_mask                            (0x00007C00)
#define  LBMC_LBMC_60_sing_ihf_idx1_prefetch_num_mask                            (0x000003E0)
#define  LBMC_LBMC_60_sing_ihf_idx0_prefetch_num_mask                            (0x0000001F)
#define  LBMC_LBMC_60_sing_phf_idx2_prefetch_num(data)                           (0x7C000000&((data)<<26))
#define  LBMC_LBMC_60_sing_phf_idx1_prefetch_num(data)                           (0x03E00000&((data)<<21))
#define  LBMC_LBMC_60_sing_phf_idx0_prefetch_num(data)                           (0x001F0000&((data)<<16))
#define  LBMC_LBMC_60_sing_ihf_idx2_prefetch_num(data)                           (0x00007C00&((data)<<10))
#define  LBMC_LBMC_60_sing_ihf_idx1_prefetch_num(data)                           (0x000003E0&((data)<<5))
#define  LBMC_LBMC_60_sing_ihf_idx0_prefetch_num(data)                           (0x0000001F&(data))
#define  LBMC_LBMC_60_get_sing_phf_idx2_prefetch_num(data)                       ((0x7C000000&(data))>>26)
#define  LBMC_LBMC_60_get_sing_phf_idx1_prefetch_num(data)                       ((0x03E00000&(data))>>21)
#define  LBMC_LBMC_60_get_sing_phf_idx0_prefetch_num(data)                       ((0x001F0000&(data))>>16)
#define  LBMC_LBMC_60_get_sing_ihf_idx2_prefetch_num(data)                       ((0x00007C00&(data))>>10)
#define  LBMC_LBMC_60_get_sing_ihf_idx1_prefetch_num(data)                       ((0x000003E0&(data))>>5)
#define  LBMC_LBMC_60_get_sing_ihf_idx0_prefetch_num(data)                       (0x0000001F&(data))

#define  LBMC_LBMC_80                                                           0x18099980
#define  LBMC_LBMC_80_reg_addr                                                   "0xB8099980"
#define  LBMC_LBMC_80_reg                                                        0xB8099980
#define  LBMC_LBMC_80_inst_addr                                                  "0x0019"
#define  set_LBMC_LBMC_80_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_80_reg)=data)
#define  get_LBMC_LBMC_80_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_80_reg))
#define  LBMC_LBMC_80_lbmc_lf_p_stat_num_shift                                   (12)
#define  LBMC_LBMC_80_lbmc_lf_i_stat_num_shift                                   (0)
#define  LBMC_LBMC_80_lbmc_lf_p_stat_num_mask                                    (0x00FFF000)
#define  LBMC_LBMC_80_lbmc_lf_i_stat_num_mask                                    (0x00000FFF)
#define  LBMC_LBMC_80_lbmc_lf_p_stat_num(data)                                   (0x00FFF000&((data)<<12))
#define  LBMC_LBMC_80_lbmc_lf_i_stat_num(data)                                   (0x00000FFF&(data))
#define  LBMC_LBMC_80_get_lbmc_lf_p_stat_num(data)                               ((0x00FFF000&(data))>>12)
#define  LBMC_LBMC_80_get_lbmc_lf_i_stat_num(data)                               (0x00000FFF&(data))

#define  LBMC_LBMC_84                                                           0x18099984
#define  LBMC_LBMC_84_reg_addr                                                   "0xB8099984"
#define  LBMC_LBMC_84_reg                                                        0xB8099984
#define  LBMC_LBMC_84_inst_addr                                                  "0x001A"
#define  set_LBMC_LBMC_84_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_84_reg)=data)
#define  get_LBMC_LBMC_84_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_84_reg))
#define  LBMC_LBMC_84_lbmc_hf_p_stat_num_shift                                   (12)
#define  LBMC_LBMC_84_lbmc_hf_i_stat_num_shift                                   (0)
#define  LBMC_LBMC_84_lbmc_hf_p_stat_num_mask                                    (0x00FFF000)
#define  LBMC_LBMC_84_lbmc_hf_i_stat_num_mask                                    (0x00000FFF)
#define  LBMC_LBMC_84_lbmc_hf_p_stat_num(data)                                   (0x00FFF000&((data)<<12))
#define  LBMC_LBMC_84_lbmc_hf_i_stat_num(data)                                   (0x00000FFF&(data))
#define  LBMC_LBMC_84_get_lbmc_hf_p_stat_num(data)                               ((0x00FFF000&(data))>>12)
#define  LBMC_LBMC_84_get_lbmc_hf_i_stat_num(data)                               (0x00000FFF&(data))

#define  LBMC_LBMC_88                                                           0x18099988
#define  LBMC_LBMC_88_reg_addr                                                   "0xB8099988"
#define  LBMC_LBMC_88_reg                                                        0xB8099988
#define  LBMC_LBMC_88_inst_addr                                                  "0x001B"
#define  set_LBMC_LBMC_88_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_88_reg)=data)
#define  get_LBMC_LBMC_88_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_88_reg))
#define  LBMC_LBMC_88_lbmc_hf_121_en_shift                                       (31)
#define  LBMC_LBMC_88_lbmc_lfh_121_en_shift                                      (30)
#define  LBMC_LBMC_88_lbmc_out_422to444_shift                                    (29)
#define  LBMC_LBMC_88_lbmc_c_replace_hv_shift                                    (28)
#define  LBMC_LBMC_88_lbmc_c_replace_hv_pwr_opt_post_shift                       (27)
#define  LBMC_LBMC_88_lbmc_c_replace_hv_pwr_opt_sram_shift                       (26)
#define  LBMC_LBMC_88_lbmc_logo_merge_type_shift                                 (24)
#define  LBMC_LBMC_88_mc_logo_5x5cnt_sel_shift                                   (23)
#define  LBMC_LBMC_88_lbmc_single_hf_mode_shift                                  (22)
#define  LBMC_LBMC_88_lbmc_phase_thr_shift                                       (15)
#define  LBMC_LBMC_88_lbmc_refinvlid_hf_en_shift                                 (14)
#define  LBMC_LBMC_88_lbmc_share_hf_en_shift                                     (13)
#define  LBMC_LBMC_88_lbmc_start_get_shift                                       (0)
#define  LBMC_LBMC_88_lbmc_hf_121_en_mask                                        (0x80000000)
#define  LBMC_LBMC_88_lbmc_lfh_121_en_mask                                       (0x40000000)
#define  LBMC_LBMC_88_lbmc_out_422to444_mask                                     (0x20000000)
#define  LBMC_LBMC_88_lbmc_c_replace_hv_mask                                     (0x10000000)
#define  LBMC_LBMC_88_lbmc_c_replace_hv_pwr_opt_post_mask                        (0x08000000)
#define  LBMC_LBMC_88_lbmc_c_replace_hv_pwr_opt_sram_mask                        (0x04000000)
#define  LBMC_LBMC_88_lbmc_logo_merge_type_mask                                  (0x03000000)
#define  LBMC_LBMC_88_mc_logo_5x5cnt_sel_mask                                    (0x00800000)
#define  LBMC_LBMC_88_lbmc_single_hf_mode_mask                                   (0x00400000)
#define  LBMC_LBMC_88_lbmc_phase_thr_mask                                        (0x003F8000)
#define  LBMC_LBMC_88_lbmc_refinvlid_hf_en_mask                                  (0x00004000)
#define  LBMC_LBMC_88_lbmc_share_hf_en_mask                                      (0x00002000)
#define  LBMC_LBMC_88_lbmc_start_get_mask                                        (0x00001FFF)
#define  LBMC_LBMC_88_lbmc_hf_121_en(data)                                       (0x80000000&((data)<<31))
#define  LBMC_LBMC_88_lbmc_lfh_121_en(data)                                      (0x40000000&((data)<<30))
#define  LBMC_LBMC_88_lbmc_out_422to444(data)                                    (0x20000000&((data)<<29))
#define  LBMC_LBMC_88_lbmc_c_replace_hv(data)                                    (0x10000000&((data)<<28))
#define  LBMC_LBMC_88_lbmc_c_replace_hv_pwr_opt_post(data)                       (0x08000000&((data)<<27))
#define  LBMC_LBMC_88_lbmc_c_replace_hv_pwr_opt_sram(data)                       (0x04000000&((data)<<26))
#define  LBMC_LBMC_88_lbmc_logo_merge_type(data)                                 (0x03000000&((data)<<24))
#define  LBMC_LBMC_88_mc_logo_5x5cnt_sel(data)                                   (0x00800000&((data)<<23))
#define  LBMC_LBMC_88_lbmc_single_hf_mode(data)                                  (0x00400000&((data)<<22))
#define  LBMC_LBMC_88_lbmc_phase_thr(data)                                       (0x003F8000&((data)<<15))
#define  LBMC_LBMC_88_lbmc_refinvlid_hf_en(data)                                 (0x00004000&((data)<<14))
#define  LBMC_LBMC_88_lbmc_share_hf_en(data)                                     (0x00002000&((data)<<13))
#define  LBMC_LBMC_88_lbmc_start_get(data)                                       (0x00001FFF&(data))
#define  LBMC_LBMC_88_get_lbmc_hf_121_en(data)                                   ((0x80000000&(data))>>31)
#define  LBMC_LBMC_88_get_lbmc_lfh_121_en(data)                                  ((0x40000000&(data))>>30)
#define  LBMC_LBMC_88_get_lbmc_out_422to444(data)                                ((0x20000000&(data))>>29)
#define  LBMC_LBMC_88_get_lbmc_c_replace_hv(data)                                ((0x10000000&(data))>>28)
#define  LBMC_LBMC_88_get_lbmc_c_replace_hv_pwr_opt_post(data)                   ((0x08000000&(data))>>27)
#define  LBMC_LBMC_88_get_lbmc_c_replace_hv_pwr_opt_sram(data)                   ((0x04000000&(data))>>26)
#define  LBMC_LBMC_88_get_lbmc_logo_merge_type(data)                             ((0x03000000&(data))>>24)
#define  LBMC_LBMC_88_get_mc_logo_5x5cnt_sel(data)                               ((0x00800000&(data))>>23)
#define  LBMC_LBMC_88_get_lbmc_single_hf_mode(data)                              ((0x00400000&(data))>>22)
#define  LBMC_LBMC_88_get_lbmc_phase_thr(data)                                   ((0x003F8000&(data))>>15)
#define  LBMC_LBMC_88_get_lbmc_refinvlid_hf_en(data)                             ((0x00004000&(data))>>14)
#define  LBMC_LBMC_88_get_lbmc_share_hf_en(data)                                 ((0x00002000&(data))>>13)
#define  LBMC_LBMC_88_get_lbmc_start_get(data)                                   (0x00001FFF&(data))

#define  LBMC_LBMC_A0                                                           0x180999A0
#define  LBMC_LBMC_A0_reg_addr                                                   "0xB80999A0"
#define  LBMC_LBMC_A0_reg                                                        0xB80999A0
#define  LBMC_LBMC_A0_inst_addr                                                  "0x001C"
#define  set_LBMC_LBMC_A0_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_A0_reg)=data)
#define  get_LBMC_LBMC_A0_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_A0_reg))
#define  LBMC_LBMC_A0_regr_lbmc_i_lf_get_line_num_shift                          (16)
#define  LBMC_LBMC_A0_regr_lbmc_i_lf_get_data_num_shift                          (0)
#define  LBMC_LBMC_A0_regr_lbmc_i_lf_get_line_num_mask                           (0xFFFF0000)
#define  LBMC_LBMC_A0_regr_lbmc_i_lf_get_data_num_mask                           (0x0000FFFF)
#define  LBMC_LBMC_A0_regr_lbmc_i_lf_get_line_num(data)                          (0xFFFF0000&((data)<<16))
#define  LBMC_LBMC_A0_regr_lbmc_i_lf_get_data_num(data)                          (0x0000FFFF&(data))
#define  LBMC_LBMC_A0_get_regr_lbmc_i_lf_get_line_num(data)                      ((0xFFFF0000&(data))>>16)
#define  LBMC_LBMC_A0_get_regr_lbmc_i_lf_get_data_num(data)                      (0x0000FFFF&(data))

#define  LBMC_LBMC_A4                                                           0x180999A4
#define  LBMC_LBMC_A4_reg_addr                                                   "0xB80999A4"
#define  LBMC_LBMC_A4_reg                                                        0xB80999A4
#define  LBMC_LBMC_A4_inst_addr                                                  "0x001D"
#define  set_LBMC_LBMC_A4_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_A4_reg)=data)
#define  get_LBMC_LBMC_A4_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_A4_reg))
#define  LBMC_LBMC_A4_regr_lbmc_p_lf_get_line_num_shift                          (16)
#define  LBMC_LBMC_A4_regr_lbmc_p_lf_get_data_num_shift                          (0)
#define  LBMC_LBMC_A4_regr_lbmc_p_lf_get_line_num_mask                           (0xFFFF0000)
#define  LBMC_LBMC_A4_regr_lbmc_p_lf_get_data_num_mask                           (0x0000FFFF)
#define  LBMC_LBMC_A4_regr_lbmc_p_lf_get_line_num(data)                          (0xFFFF0000&((data)<<16))
#define  LBMC_LBMC_A4_regr_lbmc_p_lf_get_data_num(data)                          (0x0000FFFF&(data))
#define  LBMC_LBMC_A4_get_regr_lbmc_p_lf_get_line_num(data)                      ((0xFFFF0000&(data))>>16)
#define  LBMC_LBMC_A4_get_regr_lbmc_p_lf_get_data_num(data)                      (0x0000FFFF&(data))

#define  LBMC_LBMC_A8                                                           0x180999A8
#define  LBMC_LBMC_A8_reg_addr                                                   "0xB80999A8"
#define  LBMC_LBMC_A8_reg                                                        0xB80999A8
#define  LBMC_LBMC_A8_inst_addr                                                  "0x001E"
#define  set_LBMC_LBMC_A8_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_A8_reg)=data)
#define  get_LBMC_LBMC_A8_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_A8_reg))
#define  LBMC_LBMC_A8_regr_lbmc_i_hf_get_line_num_shift                          (16)
#define  LBMC_LBMC_A8_regr_lbmc_i_hf_get_data_num_shift                          (0)
#define  LBMC_LBMC_A8_regr_lbmc_i_hf_get_line_num_mask                           (0xFFFF0000)
#define  LBMC_LBMC_A8_regr_lbmc_i_hf_get_data_num_mask                           (0x0000FFFF)
#define  LBMC_LBMC_A8_regr_lbmc_i_hf_get_line_num(data)                          (0xFFFF0000&((data)<<16))
#define  LBMC_LBMC_A8_regr_lbmc_i_hf_get_data_num(data)                          (0x0000FFFF&(data))
#define  LBMC_LBMC_A8_get_regr_lbmc_i_hf_get_line_num(data)                      ((0xFFFF0000&(data))>>16)
#define  LBMC_LBMC_A8_get_regr_lbmc_i_hf_get_data_num(data)                      (0x0000FFFF&(data))

#define  LBMC_LBMC_AC                                                           0x180999AC
#define  LBMC_LBMC_AC_reg_addr                                                   "0xB80999AC"
#define  LBMC_LBMC_AC_reg                                                        0xB80999AC
#define  LBMC_LBMC_AC_inst_addr                                                  "0x001F"
#define  set_LBMC_LBMC_AC_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_AC_reg)=data)
#define  get_LBMC_LBMC_AC_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_AC_reg))
#define  LBMC_LBMC_AC_regr_lbmc_p_hf_get_line_num_shift                          (16)
#define  LBMC_LBMC_AC_regr_lbmc_p_hf_get_data_num_shift                          (0)
#define  LBMC_LBMC_AC_regr_lbmc_p_hf_get_line_num_mask                           (0xFFFF0000)
#define  LBMC_LBMC_AC_regr_lbmc_p_hf_get_data_num_mask                           (0x0000FFFF)
#define  LBMC_LBMC_AC_regr_lbmc_p_hf_get_line_num(data)                          (0xFFFF0000&((data)<<16))
#define  LBMC_LBMC_AC_regr_lbmc_p_hf_get_data_num(data)                          (0x0000FFFF&(data))
#define  LBMC_LBMC_AC_get_regr_lbmc_p_hf_get_line_num(data)                      ((0xFFFF0000&(data))>>16)
#define  LBMC_LBMC_AC_get_regr_lbmc_p_hf_get_data_num(data)                      (0x0000FFFF&(data))

#define  LBMC_LBMC_B0                                                           0x180999B0
#define  LBMC_LBMC_B0_reg_addr                                                   "0xB80999B0"
#define  LBMC_LBMC_B0_reg                                                        0xB80999B0
#define  LBMC_LBMC_B0_inst_addr                                                  "0x0020"
#define  set_LBMC_LBMC_B0_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_B0_reg)=data)
#define  get_LBMC_LBMC_B0_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_B0_reg))
#define  LBMC_LBMC_B0_regr_lbmc_hact_shift                                       (16)
#define  LBMC_LBMC_B0_regr_lbmc_htotal_shift                                     (0)
#define  LBMC_LBMC_B0_regr_lbmc_hact_mask                                        (0x1FFF0000)
#define  LBMC_LBMC_B0_regr_lbmc_htotal_mask                                      (0x00003FFF)
#define  LBMC_LBMC_B0_regr_lbmc_hact(data)                                       (0x1FFF0000&((data)<<16))
#define  LBMC_LBMC_B0_regr_lbmc_htotal(data)                                     (0x00003FFF&(data))
#define  LBMC_LBMC_B0_get_regr_lbmc_hact(data)                                   ((0x1FFF0000&(data))>>16)
#define  LBMC_LBMC_B0_get_regr_lbmc_htotal(data)                                 (0x00003FFF&(data))

#define  LBMC_LBMC_B4                                                           0x180999B4
#define  LBMC_LBMC_B4_reg_addr                                                   "0xB80999B4"
#define  LBMC_LBMC_B4_reg                                                        0xB80999B4
#define  LBMC_LBMC_B4_inst_addr                                                  "0x0021"
#define  set_LBMC_LBMC_B4_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_B4_reg)=data)
#define  get_LBMC_LBMC_B4_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_B4_reg))
#define  LBMC_LBMC_B4_regr_lbmc_vact_shift                                       (16)
#define  LBMC_LBMC_B4_regr_lbmc_hinact_shift                                     (0)
#define  LBMC_LBMC_B4_regr_lbmc_vact_mask                                        (0x1FFF0000)
#define  LBMC_LBMC_B4_regr_lbmc_hinact_mask                                      (0x00001FFF)
#define  LBMC_LBMC_B4_regr_lbmc_vact(data)                                       (0x1FFF0000&((data)<<16))
#define  LBMC_LBMC_B4_regr_lbmc_hinact(data)                                     (0x00001FFF&(data))
#define  LBMC_LBMC_B4_get_regr_lbmc_vact(data)                                   ((0x1FFF0000&(data))>>16)
#define  LBMC_LBMC_B4_get_regr_lbmc_hinact(data)                                 (0x00001FFF&(data))

#define  LBMC_LBMC_B8                                                           0x180999B8
#define  LBMC_LBMC_B8_reg_addr                                                   "0xB80999B8"
#define  LBMC_LBMC_B8_reg                                                        0xB80999B8
#define  LBMC_LBMC_B8_inst_addr                                                  "0x0022"
#define  set_LBMC_LBMC_B8_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_B8_reg)=data)
#define  get_LBMC_LBMC_B8_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_B8_reg))
#define  LBMC_LBMC_B8_regr_lbmc_idx_n_accord_shift                               (28)
#define  LBMC_LBMC_B8_regr_lbmc_vtotal_shift                                     (0)
#define  LBMC_LBMC_B8_regr_lbmc_idx_n_accord_mask                                (0x30000000)
#define  LBMC_LBMC_B8_regr_lbmc_vtotal_mask                                      (0x07FFFFFF)
#define  LBMC_LBMC_B8_regr_lbmc_idx_n_accord(data)                               (0x30000000&((data)<<28))
#define  LBMC_LBMC_B8_regr_lbmc_vtotal(data)                                     (0x07FFFFFF&(data))
#define  LBMC_LBMC_B8_get_regr_lbmc_idx_n_accord(data)                           ((0x30000000&(data))>>28)
#define  LBMC_LBMC_B8_get_regr_lbmc_vtotal(data)                                 (0x07FFFFFF&(data))

#define  LBMC_LBMC_BC                                                           0x180999BC
#define  LBMC_LBMC_BC_reg_addr                                                   "0xB80999BC"
#define  LBMC_LBMC_BC_reg                                                        0xB80999BC
#define  LBMC_LBMC_BC_inst_addr                                                  "0x0023"
#define  set_LBMC_LBMC_BC_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_BC_reg)=data)
#define  get_LBMC_LBMC_BC_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_BC_reg))
#define  LBMC_LBMC_BC_regr_8tap_checker_shift                                    (28)
#define  LBMC_LBMC_BC_regr_pre_trg_num_shift                                     (20)
#define  LBMC_LBMC_BC_regr_trg_blank_shift                                       (0)
#define  LBMC_LBMC_BC_regr_8tap_checker_mask                                     (0xF0000000)
#define  LBMC_LBMC_BC_regr_pre_trg_num_mask                                      (0x0FF00000)
#define  LBMC_LBMC_BC_regr_trg_blank_mask                                        (0x000FFFFF)
#define  LBMC_LBMC_BC_regr_8tap_checker(data)                                    (0xF0000000&((data)<<28))
#define  LBMC_LBMC_BC_regr_pre_trg_num(data)                                     (0x0FF00000&((data)<<20))
#define  LBMC_LBMC_BC_regr_trg_blank(data)                                       (0x000FFFFF&(data))
#define  LBMC_LBMC_BC_get_regr_8tap_checker(data)                                ((0xF0000000&(data))>>28)
#define  LBMC_LBMC_BC_get_regr_pre_trg_num(data)                                 ((0x0FF00000&(data))>>20)
#define  LBMC_LBMC_BC_get_regr_trg_blank(data)                                   (0x000FFFFF&(data))

#define  LBMC_LBMC_C0                                                           0x180999C0
#define  LBMC_LBMC_C0_reg_addr                                                   "0xB80999C0"
#define  LBMC_LBMC_C0_reg                                                        0xB80999C0
#define  LBMC_LBMC_C0_inst_addr                                                  "0x0024"
#define  set_LBMC_LBMC_C0_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_C0_reg)=data)
#define  get_LBMC_LBMC_C0_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_C0_reg))
#define  LBMC_LBMC_C0_regr_pre_n_enough_shift                                    (28)
#define  LBMC_LBMC_C0_regr_pre_endl_num_shift                                    (20)
#define  LBMC_LBMC_C0_regr_blank_de_shift                                        (0)
#define  LBMC_LBMC_C0_regr_pre_n_enough_mask                                     (0xF0000000)
#define  LBMC_LBMC_C0_regr_pre_endl_num_mask                                     (0x0FF00000)
#define  LBMC_LBMC_C0_regr_blank_de_mask                                         (0x000FFFFF)
#define  LBMC_LBMC_C0_regr_pre_n_enough(data)                                    (0xF0000000&((data)<<28))
#define  LBMC_LBMC_C0_regr_pre_endl_num(data)                                    (0x0FF00000&((data)<<20))
#define  LBMC_LBMC_C0_regr_blank_de(data)                                        (0x000FFFFF&(data))
#define  LBMC_LBMC_C0_get_regr_pre_n_enough(data)                                ((0xF0000000&(data))>>28)
#define  LBMC_LBMC_C0_get_regr_pre_endl_num(data)                                ((0x0FF00000&(data))>>20)
#define  LBMC_LBMC_C0_get_regr_blank_de(data)                                    (0x000FFFFF&(data))

#define  LBMC_LBMC_C4                                                           0x180999C4
#define  LBMC_LBMC_C4_reg_addr                                                   "0xB80999C4"
#define  LBMC_LBMC_C4_reg                                                        0xB80999C4
#define  LBMC_LBMC_C4_inst_addr                                                  "0x0025"
#define  set_LBMC_LBMC_C4_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_C4_reg)=data)
#define  get_LBMC_LBMC_C4_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_C4_reg))
#define  LBMC_LBMC_C4_regr_pre_b_trg_num_shift                                   (24)
#define  LBMC_LBMC_C4_regr_pre_stop_num_shift                                    (0)
#define  LBMC_LBMC_C4_regr_pre_b_trg_num_mask                                    (0xFF000000)
#define  LBMC_LBMC_C4_regr_pre_stop_num_mask                                     (0x00FFFFFF)
#define  LBMC_LBMC_C4_regr_pre_b_trg_num(data)                                   (0xFF000000&((data)<<24))
#define  LBMC_LBMC_C4_regr_pre_stop_num(data)                                    (0x00FFFFFF&(data))
#define  LBMC_LBMC_C4_get_regr_pre_b_trg_num(data)                               ((0xFF000000&(data))>>24)
#define  LBMC_LBMC_C4_get_regr_pre_stop_num(data)                                (0x00FFFFFF&(data))

#define  LBMC_LBMC_C8                                                           0x180999C8
#define  LBMC_LBMC_C8_reg_addr                                                   "0xB80999C8"
#define  LBMC_LBMC_C8_reg                                                        0xB80999C8
#define  LBMC_LBMC_C8_inst_addr                                                  "0x0026"
#define  set_LBMC_LBMC_C8_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_C8_reg)=data)
#define  get_LBMC_LBMC_C8_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_C8_reg))
#define  LBMC_LBMC_C8_regr_pre_de_trg_num_shift                                  (24)
#define  LBMC_LBMC_C8_regr_pre_duri_num_shift                                    (0)
#define  LBMC_LBMC_C8_regr_pre_de_trg_num_mask                                   (0xFF000000)
#define  LBMC_LBMC_C8_regr_pre_duri_num_mask                                     (0x00FFFFFF)
#define  LBMC_LBMC_C8_regr_pre_de_trg_num(data)                                  (0xFF000000&((data)<<24))
#define  LBMC_LBMC_C8_regr_pre_duri_num(data)                                    (0x00FFFFFF&(data))
#define  LBMC_LBMC_C8_get_regr_pre_de_trg_num(data)                              ((0xFF000000&(data))>>24)
#define  LBMC_LBMC_C8_get_regr_pre_duri_num(data)                                (0x00FFFFFF&(data))

#define  LBMC_LBMC_CC                                                           0x180999CC
#define  LBMC_LBMC_CC_reg_addr                                                   "0xB80999CC"
#define  LBMC_LBMC_CC_reg                                                        0xB80999CC
#define  LBMC_LBMC_CC_inst_addr                                                  "0x0027"
#define  set_LBMC_LBMC_CC_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_CC_reg)=data)
#define  get_LBMC_LBMC_CC_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_CC_reg))
#define  LBMC_LBMC_CC_regr_lfh_mode_shift                                        (20)
#define  LBMC_LBMC_CC_regr_lfh_index_shift                                       (16)
#define  LBMC_LBMC_CC_regr_hf_mode_shift                                         (9)
#define  LBMC_LBMC_CC_regr_lf_mode_shift                                         (6)
#define  LBMC_LBMC_CC_regr_hf_index_shift                                        (4)
#define  LBMC_LBMC_CC_regr_lf_index_shift                                        (0)
#define  LBMC_LBMC_CC_regr_lfh_mode_mask                                         (0x00700000)
#define  LBMC_LBMC_CC_regr_lfh_index_mask                                        (0x000F0000)
#define  LBMC_LBMC_CC_regr_hf_mode_mask                                          (0x00000E00)
#define  LBMC_LBMC_CC_regr_lf_mode_mask                                          (0x000001C0)
#define  LBMC_LBMC_CC_regr_hf_index_mask                                         (0x00000030)
#define  LBMC_LBMC_CC_regr_lf_index_mask                                         (0x0000000F)
#define  LBMC_LBMC_CC_regr_lfh_mode(data)                                        (0x00700000&((data)<<20))
#define  LBMC_LBMC_CC_regr_lfh_index(data)                                       (0x000F0000&((data)<<16))
#define  LBMC_LBMC_CC_regr_hf_mode(data)                                         (0x00000E00&((data)<<9))
#define  LBMC_LBMC_CC_regr_lf_mode(data)                                         (0x000001C0&((data)<<6))
#define  LBMC_LBMC_CC_regr_hf_index(data)                                        (0x00000030&((data)<<4))
#define  LBMC_LBMC_CC_regr_lf_index(data)                                        (0x0000000F&(data))
#define  LBMC_LBMC_CC_get_regr_lfh_mode(data)                                    ((0x00700000&(data))>>20)
#define  LBMC_LBMC_CC_get_regr_lfh_index(data)                                   ((0x000F0000&(data))>>16)
#define  LBMC_LBMC_CC_get_regr_hf_mode(data)                                     ((0x00000E00&(data))>>9)
#define  LBMC_LBMC_CC_get_regr_lf_mode(data)                                     ((0x000001C0&(data))>>6)
#define  LBMC_LBMC_CC_get_regr_hf_index(data)                                    ((0x00000030&(data))>>4)
#define  LBMC_LBMC_CC_get_regr_lf_index(data)                                    (0x0000000F&(data))

#define  LBMC_LBMC_D0                                                           0x180999D0
#define  LBMC_LBMC_D0_reg_addr                                                   "0xB80999D0"
#define  LBMC_LBMC_D0_reg                                                        0xB80999D0
#define  LBMC_LBMC_D0_inst_addr                                                  "0x0028"
#define  set_LBMC_LBMC_D0_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_D0_reg)=data)
#define  get_LBMC_LBMC_D0_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_D0_reg))
#define  LBMC_LBMC_D0_lbmc0_lfh_sr0_shift                                        (28)
#define  LBMC_LBMC_D0_lbmc0_lfh_sr2_shift                                        (4)
#define  LBMC_LBMC_D0_lbmc0_lfh_sr1_shift                                        (0)
#define  LBMC_LBMC_D0_lbmc0_lfh_sr0_mask                                         (0xF0000000)
#define  LBMC_LBMC_D0_lbmc0_lfh_sr2_mask                                         (0x000000F0)
#define  LBMC_LBMC_D0_lbmc0_lfh_sr1_mask                                         (0x0000000F)
#define  LBMC_LBMC_D0_lbmc0_lfh_sr0(data)                                        (0xF0000000&((data)<<28))
#define  LBMC_LBMC_D0_lbmc0_lfh_sr2(data)                                        (0x000000F0&((data)<<4))
#define  LBMC_LBMC_D0_lbmc0_lfh_sr1(data)                                        (0x0000000F&(data))
#define  LBMC_LBMC_D0_get_lbmc0_lfh_sr0(data)                                    ((0xF0000000&(data))>>28)
#define  LBMC_LBMC_D0_get_lbmc0_lfh_sr2(data)                                    ((0x000000F0&(data))>>4)
#define  LBMC_LBMC_D0_get_lbmc0_lfh_sr1(data)                                    (0x0000000F&(data))

#define  LBMC_LBMC_D4                                                           0x180999D4
#define  LBMC_LBMC_D4_reg_addr                                                   "0xB80999D4"
#define  LBMC_LBMC_D4_reg                                                        0xB80999D4
#define  LBMC_LBMC_D4_inst_addr                                                  "0x0029"
#define  set_LBMC_LBMC_D4_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_D4_reg)=data)
#define  get_LBMC_LBMC_D4_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_D4_reg))
#define  LBMC_LBMC_D4_lbmc1_lfh_sr2_neg_shift                                    (29)
#define  LBMC_LBMC_D4_lbmc1_lfh_sr1_neg_shift                                    (26)
#define  LBMC_LBMC_D4_lbmc1_lfh_sr0_neg_shift                                    (23)
#define  LBMC_LBMC_D4_lbmc1_lfh_sr2_pos_shift                                    (18)
#define  LBMC_LBMC_D4_lbmc1_lfh_sr1_pos_shift                                    (13)
#define  LBMC_LBMC_D4_lbmc1_lfh_sr0_pos_shift                                    (8)
#define  LBMC_LBMC_D4_lbmc1_lfh_sr2_neg_mask                                     (0xE0000000)
#define  LBMC_LBMC_D4_lbmc1_lfh_sr1_neg_mask                                     (0x1C000000)
#define  LBMC_LBMC_D4_lbmc1_lfh_sr0_neg_mask                                     (0x03800000)
#define  LBMC_LBMC_D4_lbmc1_lfh_sr2_pos_mask                                     (0x007C0000)
#define  LBMC_LBMC_D4_lbmc1_lfh_sr1_pos_mask                                     (0x0003E000)
#define  LBMC_LBMC_D4_lbmc1_lfh_sr0_pos_mask                                     (0x00001F00)
#define  LBMC_LBMC_D4_lbmc1_lfh_sr2_neg(data)                                    (0xE0000000&((data)<<29))
#define  LBMC_LBMC_D4_lbmc1_lfh_sr1_neg(data)                                    (0x1C000000&((data)<<26))
#define  LBMC_LBMC_D4_lbmc1_lfh_sr0_neg(data)                                    (0x03800000&((data)<<23))
#define  LBMC_LBMC_D4_lbmc1_lfh_sr2_pos(data)                                    (0x007C0000&((data)<<18))
#define  LBMC_LBMC_D4_lbmc1_lfh_sr1_pos(data)                                    (0x0003E000&((data)<<13))
#define  LBMC_LBMC_D4_lbmc1_lfh_sr0_pos(data)                                    (0x00001F00&((data)<<8))
#define  LBMC_LBMC_D4_get_lbmc1_lfh_sr2_neg(data)                                ((0xE0000000&(data))>>29)
#define  LBMC_LBMC_D4_get_lbmc1_lfh_sr1_neg(data)                                ((0x1C000000&(data))>>26)
#define  LBMC_LBMC_D4_get_lbmc1_lfh_sr0_neg(data)                                ((0x03800000&(data))>>23)
#define  LBMC_LBMC_D4_get_lbmc1_lfh_sr2_pos(data)                                ((0x007C0000&(data))>>18)
#define  LBMC_LBMC_D4_get_lbmc1_lfh_sr1_pos(data)                                ((0x0003E000&(data))>>13)
#define  LBMC_LBMC_D4_get_lbmc1_lfh_sr0_pos(data)                                ((0x00001F00&(data))>>8)

#define  LBMC_LBMC_D8                                                           0x180999D8
#define  LBMC_LBMC_D8_reg_addr                                                   "0xB80999D8"
#define  LBMC_LBMC_D8_reg                                                        0xB80999D8
#define  LBMC_LBMC_D8_inst_addr                                                  "0x002A"
#define  set_LBMC_LBMC_D8_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_D8_reg)=data)
#define  get_LBMC_LBMC_D8_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_D8_reg))
#define  LBMC_LBMC_D8_nor_plfh_idx2_prefetch_num_shift                           (24)
#define  LBMC_LBMC_D8_nor_plfh_idx1_prefetch_num_shift                           (20)
#define  LBMC_LBMC_D8_nor_plfh_idx0_prefetch_num_shift                           (16)
#define  LBMC_LBMC_D8_nor_ilfh_idx2_prefetch_num_shift                           (8)
#define  LBMC_LBMC_D8_nor_ilfh_idx1_prefetch_num_shift                           (4)
#define  LBMC_LBMC_D8_nor_ilfh_idx0_prefetch_num_shift                           (0)
#define  LBMC_LBMC_D8_nor_plfh_idx2_prefetch_num_mask                            (0x0F000000)
#define  LBMC_LBMC_D8_nor_plfh_idx1_prefetch_num_mask                            (0x00F00000)
#define  LBMC_LBMC_D8_nor_plfh_idx0_prefetch_num_mask                            (0x000F0000)
#define  LBMC_LBMC_D8_nor_ilfh_idx2_prefetch_num_mask                            (0x00000F00)
#define  LBMC_LBMC_D8_nor_ilfh_idx1_prefetch_num_mask                            (0x000000F0)
#define  LBMC_LBMC_D8_nor_ilfh_idx0_prefetch_num_mask                            (0x0000000F)
#define  LBMC_LBMC_D8_nor_plfh_idx2_prefetch_num(data)                           (0x0F000000&((data)<<24))
#define  LBMC_LBMC_D8_nor_plfh_idx1_prefetch_num(data)                           (0x00F00000&((data)<<20))
#define  LBMC_LBMC_D8_nor_plfh_idx0_prefetch_num(data)                           (0x000F0000&((data)<<16))
#define  LBMC_LBMC_D8_nor_ilfh_idx2_prefetch_num(data)                           (0x00000F00&((data)<<8))
#define  LBMC_LBMC_D8_nor_ilfh_idx1_prefetch_num(data)                           (0x000000F0&((data)<<4))
#define  LBMC_LBMC_D8_nor_ilfh_idx0_prefetch_num(data)                           (0x0000000F&(data))
#define  LBMC_LBMC_D8_get_nor_plfh_idx2_prefetch_num(data)                       ((0x0F000000&(data))>>24)
#define  LBMC_LBMC_D8_get_nor_plfh_idx1_prefetch_num(data)                       ((0x00F00000&(data))>>20)
#define  LBMC_LBMC_D8_get_nor_plfh_idx0_prefetch_num(data)                       ((0x000F0000&(data))>>16)
#define  LBMC_LBMC_D8_get_nor_ilfh_idx2_prefetch_num(data)                       ((0x00000F00&(data))>>8)
#define  LBMC_LBMC_D8_get_nor_ilfh_idx1_prefetch_num(data)                       ((0x000000F0&(data))>>4)
#define  LBMC_LBMC_D8_get_nor_ilfh_idx0_prefetch_num(data)                       (0x0000000F&(data))

#define  LBMC_LBMC_DC                                                           0x180999DC
#define  LBMC_LBMC_DC_reg_addr                                                   "0xB80999DC"
#define  LBMC_LBMC_DC_reg                                                        0xB80999DC
#define  LBMC_LBMC_DC_inst_addr                                                  "0x002B"
#define  set_LBMC_LBMC_DC_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_DC_reg)=data)
#define  get_LBMC_LBMC_DC_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_DC_reg))
#define  LBMC_LBMC_DC_sing_plfh_idx2_prefetch_num_shift                          (26)
#define  LBMC_LBMC_DC_sing_plfh_idx1_prefetch_num_shift                          (21)
#define  LBMC_LBMC_DC_sing_plfh_idx0_prefetch_num_shift                          (16)
#define  LBMC_LBMC_DC_sing_ilfh_idx2_prefetch_num_shift                          (10)
#define  LBMC_LBMC_DC_sing_ilfh_idx1_prefetch_num_shift                          (5)
#define  LBMC_LBMC_DC_sing_ilfh_idx0_prefetch_num_shift                          (0)
#define  LBMC_LBMC_DC_sing_plfh_idx2_prefetch_num_mask                           (0x7C000000)
#define  LBMC_LBMC_DC_sing_plfh_idx1_prefetch_num_mask                           (0x03E00000)
#define  LBMC_LBMC_DC_sing_plfh_idx0_prefetch_num_mask                           (0x001F0000)
#define  LBMC_LBMC_DC_sing_ilfh_idx2_prefetch_num_mask                           (0x00007C00)
#define  LBMC_LBMC_DC_sing_ilfh_idx1_prefetch_num_mask                           (0x000003E0)
#define  LBMC_LBMC_DC_sing_ilfh_idx0_prefetch_num_mask                           (0x0000001F)
#define  LBMC_LBMC_DC_sing_plfh_idx2_prefetch_num(data)                          (0x7C000000&((data)<<26))
#define  LBMC_LBMC_DC_sing_plfh_idx1_prefetch_num(data)                          (0x03E00000&((data)<<21))
#define  LBMC_LBMC_DC_sing_plfh_idx0_prefetch_num(data)                          (0x001F0000&((data)<<16))
#define  LBMC_LBMC_DC_sing_ilfh_idx2_prefetch_num(data)                          (0x00007C00&((data)<<10))
#define  LBMC_LBMC_DC_sing_ilfh_idx1_prefetch_num(data)                          (0x000003E0&((data)<<5))
#define  LBMC_LBMC_DC_sing_ilfh_idx0_prefetch_num(data)                          (0x0000001F&(data))
#define  LBMC_LBMC_DC_get_sing_plfh_idx2_prefetch_num(data)                      ((0x7C000000&(data))>>26)
#define  LBMC_LBMC_DC_get_sing_plfh_idx1_prefetch_num(data)                      ((0x03E00000&(data))>>21)
#define  LBMC_LBMC_DC_get_sing_plfh_idx0_prefetch_num(data)                      ((0x001F0000&(data))>>16)
#define  LBMC_LBMC_DC_get_sing_ilfh_idx2_prefetch_num(data)                      ((0x00007C00&(data))>>10)
#define  LBMC_LBMC_DC_get_sing_ilfh_idx1_prefetch_num(data)                      ((0x000003E0&(data))>>5)
#define  LBMC_LBMC_DC_get_sing_ilfh_idx0_prefetch_num(data)                      (0x0000001F&(data))

#define  LBMC_LBMC_E0                                                           0x180999E0
#define  LBMC_LBMC_E0_reg_addr                                                   "0xB80999E0"
#define  LBMC_LBMC_E0_reg                                                        0xB80999E0
#define  LBMC_LBMC_E0_inst_addr                                                  "0x002C"
#define  set_LBMC_LBMC_E0_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_E0_reg)=data)
#define  get_LBMC_LBMC_E0_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_E0_reg))
#define  LBMC_LBMC_E0_regr_lbmc_i_lfh_get_line_num_shift                         (16)
#define  LBMC_LBMC_E0_regr_lbmc_i_lfh_get_data_num_shift                         (0)
#define  LBMC_LBMC_E0_regr_lbmc_i_lfh_get_line_num_mask                          (0xFFFF0000)
#define  LBMC_LBMC_E0_regr_lbmc_i_lfh_get_data_num_mask                          (0x0000FFFF)
#define  LBMC_LBMC_E0_regr_lbmc_i_lfh_get_line_num(data)                         (0xFFFF0000&((data)<<16))
#define  LBMC_LBMC_E0_regr_lbmc_i_lfh_get_data_num(data)                         (0x0000FFFF&(data))
#define  LBMC_LBMC_E0_get_regr_lbmc_i_lfh_get_line_num(data)                     ((0xFFFF0000&(data))>>16)
#define  LBMC_LBMC_E0_get_regr_lbmc_i_lfh_get_data_num(data)                     (0x0000FFFF&(data))

#define  LBMC_LBMC_E4                                                           0x180999E4
#define  LBMC_LBMC_E4_reg_addr                                                   "0xB80999E4"
#define  LBMC_LBMC_E4_reg                                                        0xB80999E4
#define  LBMC_LBMC_E4_inst_addr                                                  "0x002D"
#define  set_LBMC_LBMC_E4_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_E4_reg)=data)
#define  get_LBMC_LBMC_E4_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_E4_reg))
#define  LBMC_LBMC_E4_regr_lbmc_p_lfh_get_line_num_shift                         (16)
#define  LBMC_LBMC_E4_regr_lbmc_p_lfh_get_data_num_shift                         (0)
#define  LBMC_LBMC_E4_regr_lbmc_p_lfh_get_line_num_mask                          (0xFFFF0000)
#define  LBMC_LBMC_E4_regr_lbmc_p_lfh_get_data_num_mask                          (0x0000FFFF)
#define  LBMC_LBMC_E4_regr_lbmc_p_lfh_get_line_num(data)                         (0xFFFF0000&((data)<<16))
#define  LBMC_LBMC_E4_regr_lbmc_p_lfh_get_data_num(data)                         (0x0000FFFF&(data))
#define  LBMC_LBMC_E4_get_regr_lbmc_p_lfh_get_line_num(data)                     ((0xFFFF0000&(data))>>16)
#define  LBMC_LBMC_E4_get_regr_lbmc_p_lfh_get_data_num(data)                     (0x0000FFFF&(data))

#define  LBMC_LBMC_E8                                                           0x180999E8
#define  LBMC_LBMC_E8_reg_addr                                                   "0xB80999E8"
#define  LBMC_LBMC_E8_reg                                                        0xB80999E8
#define  LBMC_LBMC_E8_inst_addr                                                  "0x002E"
#define  set_LBMC_LBMC_E8_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_E8_reg)=data)
#define  get_LBMC_LBMC_E8_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_E8_reg))
#define  LBMC_LBMC_E8_lfh_p_underflow_shift                                      (21)
#define  LBMC_LBMC_E8_lfh_i_underflow_shift                                      (20)
#define  LBMC_LBMC_E8_hf_p_underflow_shift                                       (19)
#define  LBMC_LBMC_E8_hf_i_underflow_shift                                       (18)
#define  LBMC_LBMC_E8_lfl_p_underflow_shift                                      (17)
#define  LBMC_LBMC_E8_lfl_i_underflow_shift                                      (16)
#define  LBMC_LBMC_E8_lfh_p_not_enough_shift                                     (5)
#define  LBMC_LBMC_E8_lfh_i_not_enough_shift                                     (4)
#define  LBMC_LBMC_E8_hf_p_not_enough_shift                                      (3)
#define  LBMC_LBMC_E8_hf_i_not_enough_shift                                      (2)
#define  LBMC_LBMC_E8_lfl_p_not_enough_shift                                     (1)
#define  LBMC_LBMC_E8_lfl_i_not_enough_shift                                     (0)
#define  LBMC_LBMC_E8_lfh_p_underflow_mask                                       (0x00200000)
#define  LBMC_LBMC_E8_lfh_i_underflow_mask                                       (0x00100000)
#define  LBMC_LBMC_E8_hf_p_underflow_mask                                        (0x00080000)
#define  LBMC_LBMC_E8_hf_i_underflow_mask                                        (0x00040000)
#define  LBMC_LBMC_E8_lfl_p_underflow_mask                                       (0x00020000)
#define  LBMC_LBMC_E8_lfl_i_underflow_mask                                       (0x00010000)
#define  LBMC_LBMC_E8_lfh_p_not_enough_mask                                      (0x00000020)
#define  LBMC_LBMC_E8_lfh_i_not_enough_mask                                      (0x00000010)
#define  LBMC_LBMC_E8_hf_p_not_enough_mask                                       (0x00000008)
#define  LBMC_LBMC_E8_hf_i_not_enough_mask                                       (0x00000004)
#define  LBMC_LBMC_E8_lfl_p_not_enough_mask                                      (0x00000002)
#define  LBMC_LBMC_E8_lfl_i_not_enough_mask                                      (0x00000001)
#define  LBMC_LBMC_E8_lfh_p_underflow(data)                                      (0x00200000&((data)<<21))
#define  LBMC_LBMC_E8_lfh_i_underflow(data)                                      (0x00100000&((data)<<20))
#define  LBMC_LBMC_E8_hf_p_underflow(data)                                       (0x00080000&((data)<<19))
#define  LBMC_LBMC_E8_hf_i_underflow(data)                                       (0x00040000&((data)<<18))
#define  LBMC_LBMC_E8_lfl_p_underflow(data)                                      (0x00020000&((data)<<17))
#define  LBMC_LBMC_E8_lfl_i_underflow(data)                                      (0x00010000&((data)<<16))
#define  LBMC_LBMC_E8_lfh_p_not_enough(data)                                     (0x00000020&((data)<<5))
#define  LBMC_LBMC_E8_lfh_i_not_enough(data)                                     (0x00000010&((data)<<4))
#define  LBMC_LBMC_E8_hf_p_not_enough(data)                                      (0x00000008&((data)<<3))
#define  LBMC_LBMC_E8_hf_i_not_enough(data)                                      (0x00000004&((data)<<2))
#define  LBMC_LBMC_E8_lfl_p_not_enough(data)                                     (0x00000002&((data)<<1))
#define  LBMC_LBMC_E8_lfl_i_not_enough(data)                                     (0x00000001&(data))
#define  LBMC_LBMC_E8_get_lfh_p_underflow(data)                                  ((0x00200000&(data))>>21)
#define  LBMC_LBMC_E8_get_lfh_i_underflow(data)                                  ((0x00100000&(data))>>20)
#define  LBMC_LBMC_E8_get_hf_p_underflow(data)                                   ((0x00080000&(data))>>19)
#define  LBMC_LBMC_E8_get_hf_i_underflow(data)                                   ((0x00040000&(data))>>18)
#define  LBMC_LBMC_E8_get_lfl_p_underflow(data)                                  ((0x00020000&(data))>>17)
#define  LBMC_LBMC_E8_get_lfl_i_underflow(data)                                  ((0x00010000&(data))>>16)
#define  LBMC_LBMC_E8_get_lfh_p_not_enough(data)                                 ((0x00000020&(data))>>5)
#define  LBMC_LBMC_E8_get_lfh_i_not_enough(data)                                 ((0x00000010&(data))>>4)
#define  LBMC_LBMC_E8_get_hf_p_not_enough(data)                                  ((0x00000008&(data))>>3)
#define  LBMC_LBMC_E8_get_hf_i_not_enough(data)                                  ((0x00000004&(data))>>2)
#define  LBMC_LBMC_E8_get_lfl_p_not_enough(data)                                 ((0x00000002&(data))>>1)
#define  LBMC_LBMC_E8_get_lfl_i_not_enough(data)                                 (0x00000001&(data))

#define  LBMC_LBMC_EC                                                           0x180999EC
#define  LBMC_LBMC_EC_reg_addr                                                   "0xB80999EC"
#define  LBMC_LBMC_EC_reg                                                        0xB80999EC
#define  LBMC_LBMC_EC_inst_addr                                                  "0x002F"
#define  set_LBMC_LBMC_EC_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_EC_reg)=data)
#define  get_LBMC_LBMC_EC_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_EC_reg))
#define  LBMC_LBMC_EC_lbmc_db_apply_shift                                        (2)
#define  LBMC_LBMC_EC_lbmc_db_rd_sel_shift                                       (1)
#define  LBMC_LBMC_EC_lbmc_db_en_shift                                           (0)
#define  LBMC_LBMC_EC_lbmc_db_apply_mask                                         (0x00000004)
#define  LBMC_LBMC_EC_lbmc_db_rd_sel_mask                                        (0x00000002)
#define  LBMC_LBMC_EC_lbmc_db_en_mask                                            (0x00000001)
#define  LBMC_LBMC_EC_lbmc_db_apply(data)                                        (0x00000004&((data)<<2))
#define  LBMC_LBMC_EC_lbmc_db_rd_sel(data)                                       (0x00000002&((data)<<1))
#define  LBMC_LBMC_EC_lbmc_db_en(data)                                           (0x00000001&(data))
#define  LBMC_LBMC_EC_get_lbmc_db_apply(data)                                    ((0x00000004&(data))>>2)
#define  LBMC_LBMC_EC_get_lbmc_db_rd_sel(data)                                   ((0x00000002&(data))>>1)
#define  LBMC_LBMC_EC_get_lbmc_db_en(data)                                       (0x00000001&(data))

#define  LBMC_LBMC_F0                                                           0x180999F0
#define  LBMC_LBMC_F0_reg_addr                                                   "0xB80999F0"
#define  LBMC_LBMC_F0_reg                                                        0xB80999F0
#define  LBMC_LBMC_F0_inst_addr                                                  "0x0030"
#define  set_LBMC_LBMC_F0_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_F0_reg)=data)
#define  get_LBMC_LBMC_F0_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_F0_reg))
#define  LBMC_LBMC_F0_not_enough_cur_shift                                       (16)
#define  LBMC_LBMC_F0_not_enough_write_shift                                     (0)
#define  LBMC_LBMC_F0_not_enough_cur_mask                                        (0x1FFF0000)
#define  LBMC_LBMC_F0_not_enough_write_mask                                      (0x00001FFF)
#define  LBMC_LBMC_F0_not_enough_cur(data)                                       (0x1FFF0000&((data)<<16))
#define  LBMC_LBMC_F0_not_enough_write(data)                                     (0x00001FFF&(data))
#define  LBMC_LBMC_F0_get_not_enough_cur(data)                                   ((0x1FFF0000&(data))>>16)
#define  LBMC_LBMC_F0_get_not_enough_write(data)                                 (0x00001FFF&(data))

#define  LBMC_LBMC_F4                                                           0x180999F4
#define  LBMC_LBMC_F4_reg_addr                                                   "0xB80999F4"
#define  LBMC_LBMC_F4_reg                                                        0xB80999F4
#define  LBMC_LBMC_F4_inst_addr                                                  "0x0031"
#define  set_LBMC_LBMC_F4_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_F4_reg)=data)
#define  get_LBMC_LBMC_F4_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_F4_reg))
#define  LBMC_LBMC_F4_not_enough_target_shift                                    (16)
#define  LBMC_LBMC_F4_underflow_cur_shift                                        (0)
#define  LBMC_LBMC_F4_not_enough_target_mask                                     (0x1FFF0000)
#define  LBMC_LBMC_F4_underflow_cur_mask                                         (0x00001FFF)
#define  LBMC_LBMC_F4_not_enough_target(data)                                    (0x1FFF0000&((data)<<16))
#define  LBMC_LBMC_F4_underflow_cur(data)                                        (0x00001FFF&(data))
#define  LBMC_LBMC_F4_get_not_enough_target(data)                                ((0x1FFF0000&(data))>>16)
#define  LBMC_LBMC_F4_get_underflow_cur(data)                                    (0x00001FFF&(data))

#define  LBMC_LBMC_F8                                                           0x180999F8
#define  LBMC_LBMC_F8_reg_addr                                                   "0xB80999F8"
#define  LBMC_LBMC_F8_reg                                                        0xB80999F8
#define  LBMC_LBMC_F8_inst_addr                                                  "0x0032"
#define  set_LBMC_LBMC_F8_reg(data)                                              (*((volatile unsigned int*)LBMC_LBMC_F8_reg)=data)
#define  get_LBMC_LBMC_F8_reg                                                    (*((volatile unsigned int*)LBMC_LBMC_F8_reg))
#define  LBMC_LBMC_F8_underflow_write_shift                                      (16)
#define  LBMC_LBMC_F8_underflow_target_shift                                     (0)
#define  LBMC_LBMC_F8_underflow_write_mask                                       (0x1FFF0000)
#define  LBMC_LBMC_F8_underflow_target_mask                                      (0x00001FFF)
#define  LBMC_LBMC_F8_underflow_write(data)                                      (0x1FFF0000&((data)<<16))
#define  LBMC_LBMC_F8_underflow_target(data)                                     (0x00001FFF&(data))
#define  LBMC_LBMC_F8_get_underflow_write(data)                                  ((0x1FFF0000&(data))>>16)
#define  LBMC_LBMC_F8_get_underflow_target(data)                                 (0x00001FFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======LBMC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  lbmc_sram_ls:1;
        RBus_UInt32  lbmc0_lf_sr4:6;
        RBus_UInt32  lbmc0_lf_sr3:6;
        RBus_UInt32  lbmc0_lf_sr2:6;
        RBus_UInt32  lbmc0_lf_sr1:6;
        RBus_UInt32  lbmc0_lf_sr0:6;
    };
}lbmc_lbmc_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc1_lf_sr0_pos:8;
        RBus_UInt32  lbmc0_lf_sr8:6;
        RBus_UInt32  lbmc0_lf_sr7:6;
        RBus_UInt32  lbmc0_lf_sr6:6;
        RBus_UInt32  lbmc0_lf_sr5:6;
    };
}lbmc_lbmc_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc1_lf_sr4_pos:8;
        RBus_UInt32  lbmc1_lf_sr3_pos:8;
        RBus_UInt32  lbmc1_lf_sr2_pos:8;
        RBus_UInt32  lbmc1_lf_sr1_pos:8;
    };
}lbmc_lbmc_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc1_lf_sr8_pos:8;
        RBus_UInt32  lbmc1_lf_sr7_pos:8;
        RBus_UInt32  lbmc1_lf_sr6_pos:8;
        RBus_UInt32  lbmc1_lf_sr5_pos:8;
    };
}lbmc_lbmc_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc0_hf_sr0:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  lbmc1_lf_sr8_neg:3;
        RBus_UInt32  lbmc1_lf_sr7_neg:3;
        RBus_UInt32  lbmc1_lf_sr6_neg:3;
        RBus_UInt32  lbmc1_lf_sr5_neg:3;
        RBus_UInt32  lbmc1_lf_sr4_neg:3;
        RBus_UInt32  lbmc1_lf_sr3_neg:3;
        RBus_UInt32  lbmc1_lf_sr2_neg:3;
        RBus_UInt32  lbmc1_lf_sr1_neg:3;
        RBus_UInt32  lbmc1_lf_sr0_neg:3;
    };
}lbmc_lbmc_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc1_hf_sr2_neg:3;
        RBus_UInt32  lbmc1_hf_sr1_neg:3;
        RBus_UInt32  lbmc1_hf_sr0_neg:3;
        RBus_UInt32  lbmc1_hf_sr2_pos:5;
        RBus_UInt32  lbmc1_hf_sr1_pos:5;
        RBus_UInt32  lbmc1_hf_sr0_pos:5;
        RBus_UInt32  lbmc0_hf_sr2:4;
        RBus_UInt32  lbmc0_hf_sr1:4;
    };
}lbmc_lbmc_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_dummy_18:32;
    };
}lbmc_lbmc_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_dummy_1c:32;
    };
}lbmc_lbmc_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_mode:1;
        RBus_UInt32  fhd_mod:1;
        RBus_UInt32  lbmc_hf_420:1;
        RBus_UInt32  lbmc_v_act:13;
        RBus_UInt32  res1:1;
        RBus_UInt32  lbmc_pr_lrinv:1;
        RBus_UInt32  lbmc_pr_mod:1;
        RBus_UInt32  lbmc_h_act:13;
    };
}lbmc_lbmc_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_mode_hf:4;
        RBus_UInt32  lbmc_mode_lf:4;
        RBus_UInt32  lbmc_mode_lfh:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  normal_hf_prefetch_unit_x2:1;
        RBus_UInt32  normal_hf_sr_unit_x2:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmcpc_mode_sel_p:1;
        RBus_UInt32  lbmc_hf_nline_option:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  force_iz_when_mc_phase_eq0:1;
        RBus_UInt32  lbmc_z_replace_chv:1;
        RBus_UInt32  lbmc_en_get_info:1;
        RBus_UInt32  lbmc_prefetch_self:1;
        RBus_UInt32  lbmc_vflip:1;
        RBus_UInt32  lbmc_lpf_2tap_on:1;
        RBus_UInt32  lbmcpc_mode:1;
        RBus_UInt32  lbmc_3dmode:1;
        RBus_UInt32  show_info_sel:3;
    };
}lbmc_lbmc_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  lbmc_xrange_limit:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  lbmc_row_inactive:13;
    };
}lbmc_lbmc_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  nor_ilf_idx3_prefetch_num:7;
        RBus_UInt32  nor_ilf_idx2_prefetch_num:7;
        RBus_UInt32  nor_ilf_idx1_prefetch_num:7;
        RBus_UInt32  nor_ilf_idx0_prefetch_num:7;
    };
}lbmc_lbmc_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  nor_ilf_idx7_prefetch_num:7;
        RBus_UInt32  nor_ilf_idx6_prefetch_num:7;
        RBus_UInt32  nor_ilf_idx5_prefetch_num:7;
        RBus_UInt32  nor_ilf_idx4_prefetch_num:7;
    };
}lbmc_lbmc_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  nor_ilf_idx8_prefetch_num:7;
    };
}lbmc_lbmc_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  nor_plf_idx3_prefetch_num:7;
        RBus_UInt32  nor_plf_idx2_prefetch_num:7;
        RBus_UInt32  nor_plf_idx1_prefetch_num:7;
        RBus_UInt32  nor_plf_idx0_prefetch_num:7;
    };
}lbmc_lbmc_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  nor_plf_idx7_prefetch_num:7;
        RBus_UInt32  nor_plf_idx6_prefetch_num:7;
        RBus_UInt32  nor_plf_idx5_prefetch_num:7;
        RBus_UInt32  nor_plf_idx4_prefetch_num:7;
    };
}lbmc_lbmc_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  nor_plf_idx8_prefetch_num:7;
    };
}lbmc_lbmc_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  nor_phf_idx2_prefetch_num:4;
        RBus_UInt32  nor_phf_idx1_prefetch_num:4;
        RBus_UInt32  nor_phf_idx0_prefetch_num:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  nor_ihf_idx2_prefetch_num:4;
        RBus_UInt32  nor_ihf_idx1_prefetch_num:4;
        RBus_UInt32  nor_ihf_idx0_prefetch_num:4;
    };
}lbmc_lbmc_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  sing_ilf_idx3_prefetch_num:7;
        RBus_UInt32  sing_ilf_idx2_prefetch_num:7;
        RBus_UInt32  sing_ilf_idx1_prefetch_num:7;
        RBus_UInt32  sing_ilf_idx0_prefetch_num:7;
    };
}lbmc_lbmc_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  sing_ilf_idx7_prefetch_num:7;
        RBus_UInt32  sing_ilf_idx6_prefetch_num:7;
        RBus_UInt32  sing_ilf_idx5_prefetch_num:7;
        RBus_UInt32  sing_ilf_idx4_prefetch_num:7;
    };
}lbmc_lbmc_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  sing_ilf_idx8_prefetch_num:7;
    };
}lbmc_lbmc_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  sing_plf_idx3_prefetch_num:7;
        RBus_UInt32  sing_plf_idx2_prefetch_num:7;
        RBus_UInt32  sing_plf_idx1_prefetch_num:7;
        RBus_UInt32  sing_plf_idx0_prefetch_num:7;
    };
}lbmc_lbmc_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  sing_plf_idx7_prefetch_num:7;
        RBus_UInt32  sing_plf_idx6_prefetch_num:7;
        RBus_UInt32  sing_plf_idx5_prefetch_num:7;
        RBus_UInt32  sing_plf_idx4_prefetch_num:7;
    };
}lbmc_lbmc_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  sing_plf_idx8_prefetch_num:7;
    };
}lbmc_lbmc_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  sing_phf_idx2_prefetch_num:5;
        RBus_UInt32  sing_phf_idx1_prefetch_num:5;
        RBus_UInt32  sing_phf_idx0_prefetch_num:5;
        RBus_UInt32  res2:1;
        RBus_UInt32  sing_ihf_idx2_prefetch_num:5;
        RBus_UInt32  sing_ihf_idx1_prefetch_num:5;
        RBus_UInt32  sing_ihf_idx0_prefetch_num:5;
    };
}lbmc_lbmc_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  lbmc_lf_p_stat_num:12;
        RBus_UInt32  lbmc_lf_i_stat_num:12;
    };
}lbmc_lbmc_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  lbmc_hf_p_stat_num:12;
        RBus_UInt32  lbmc_hf_i_stat_num:12;
    };
}lbmc_lbmc_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_hf_121_en:1;
        RBus_UInt32  lbmc_lfh_121_en:1;
        RBus_UInt32  lbmc_out_422to444:1;
        RBus_UInt32  lbmc_c_replace_hv:1;
        RBus_UInt32  lbmc_c_replace_hv_pwr_opt_post:1;
        RBus_UInt32  lbmc_c_replace_hv_pwr_opt_sram:1;
        RBus_UInt32  lbmc_logo_merge_type:2;
        RBus_UInt32  mc_logo_5x5cnt_sel:1;
        RBus_UInt32  lbmc_single_hf_mode:1;
        RBus_UInt32  lbmc_phase_thr:7;
        RBus_UInt32  lbmc_refinvlid_hf_en:1;
        RBus_UInt32  lbmc_share_hf_en:1;
        RBus_UInt32  lbmc_start_get:13;
    };
}lbmc_lbmc_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_i_lf_get_line_num:16;
        RBus_UInt32  regr_lbmc_i_lf_get_data_num:16;
    };
}lbmc_lbmc_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_p_lf_get_line_num:16;
        RBus_UInt32  regr_lbmc_p_lf_get_data_num:16;
    };
}lbmc_lbmc_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_i_hf_get_line_num:16;
        RBus_UInt32  regr_lbmc_i_hf_get_data_num:16;
    };
}lbmc_lbmc_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_p_hf_get_line_num:16;
        RBus_UInt32  regr_lbmc_p_hf_get_data_num:16;
    };
}lbmc_lbmc_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  regr_lbmc_hact:13;
        RBus_UInt32  res2:2;
        RBus_UInt32  regr_lbmc_htotal:14;
    };
}lbmc_lbmc_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  regr_lbmc_vact:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  regr_lbmc_hinact:13;
    };
}lbmc_lbmc_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_lbmc_idx_n_accord:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  regr_lbmc_vtotal:27;
    };
}lbmc_lbmc_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_8tap_checker:4;
        RBus_UInt32  regr_pre_trg_num:8;
        RBus_UInt32  regr_trg_blank:20;
    };
}lbmc_lbmc_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_pre_n_enough:4;
        RBus_UInt32  regr_pre_endl_num:8;
        RBus_UInt32  regr_blank_de:20;
    };
}lbmc_lbmc_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_pre_b_trg_num:8;
        RBus_UInt32  regr_pre_stop_num:24;
    };
}lbmc_lbmc_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_pre_de_trg_num:8;
        RBus_UInt32  regr_pre_duri_num:24;
    };
}lbmc_lbmc_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_lfh_mode:3;
        RBus_UInt32  regr_lfh_index:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  regr_hf_mode:3;
        RBus_UInt32  regr_lf_mode:3;
        RBus_UInt32  regr_hf_index:2;
        RBus_UInt32  regr_lf_index:4;
    };
}lbmc_lbmc_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc0_lfh_sr0:4;
        RBus_UInt32  res1:20;
        RBus_UInt32  lbmc0_lfh_sr2:4;
        RBus_UInt32  lbmc0_lfh_sr1:4;
    };
}lbmc_lbmc_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc1_lfh_sr2_neg:3;
        RBus_UInt32  lbmc1_lfh_sr1_neg:3;
        RBus_UInt32  lbmc1_lfh_sr0_neg:3;
        RBus_UInt32  lbmc1_lfh_sr2_pos:5;
        RBus_UInt32  lbmc1_lfh_sr1_pos:5;
        RBus_UInt32  lbmc1_lfh_sr0_pos:5;
        RBus_UInt32  res1:8;
    };
}lbmc_lbmc_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  nor_plfh_idx2_prefetch_num:4;
        RBus_UInt32  nor_plfh_idx1_prefetch_num:4;
        RBus_UInt32  nor_plfh_idx0_prefetch_num:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  nor_ilfh_idx2_prefetch_num:4;
        RBus_UInt32  nor_ilfh_idx1_prefetch_num:4;
        RBus_UInt32  nor_ilfh_idx0_prefetch_num:4;
    };
}lbmc_lbmc_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  sing_plfh_idx2_prefetch_num:5;
        RBus_UInt32  sing_plfh_idx1_prefetch_num:5;
        RBus_UInt32  sing_plfh_idx0_prefetch_num:5;
        RBus_UInt32  res2:1;
        RBus_UInt32  sing_ilfh_idx2_prefetch_num:5;
        RBus_UInt32  sing_ilfh_idx1_prefetch_num:5;
        RBus_UInt32  sing_ilfh_idx0_prefetch_num:5;
    };
}lbmc_lbmc_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_i_lfh_get_line_num:16;
        RBus_UInt32  regr_lbmc_i_lfh_get_data_num:16;
    };
}lbmc_lbmc_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_p_lfh_get_line_num:16;
        RBus_UInt32  regr_lbmc_p_lfh_get_data_num:16;
    };
}lbmc_lbmc_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  lfh_p_underflow:1;
        RBus_UInt32  lfh_i_underflow:1;
        RBus_UInt32  hf_p_underflow:1;
        RBus_UInt32  hf_i_underflow:1;
        RBus_UInt32  lfl_p_underflow:1;
        RBus_UInt32  lfl_i_underflow:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  lfh_p_not_enough:1;
        RBus_UInt32  lfh_i_not_enough:1;
        RBus_UInt32  hf_p_not_enough:1;
        RBus_UInt32  hf_i_not_enough:1;
        RBus_UInt32  lfl_p_not_enough:1;
        RBus_UInt32  lfl_i_not_enough:1;
    };
}lbmc_lbmc_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  lbmc_db_apply:1;
        RBus_UInt32  lbmc_db_rd_sel:1;
        RBus_UInt32  lbmc_db_en:1;
    };
}lbmc_lbmc_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  not_enough_cur:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  not_enough_write:13;
    };
}lbmc_lbmc_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  not_enough_target:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  underflow_cur:13;
    };
}lbmc_lbmc_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  underflow_write:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  underflow_target:13;
    };
}lbmc_lbmc_f8_RBUS;

#else //apply LITTLE_ENDIAN

//======LBMC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc0_lf_sr0:6;
        RBus_UInt32  lbmc0_lf_sr1:6;
        RBus_UInt32  lbmc0_lf_sr2:6;
        RBus_UInt32  lbmc0_lf_sr3:6;
        RBus_UInt32  lbmc0_lf_sr4:6;
        RBus_UInt32  lbmc_sram_ls:1;
        RBus_UInt32  res1:1;
    };
}lbmc_lbmc_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc0_lf_sr5:6;
        RBus_UInt32  lbmc0_lf_sr6:6;
        RBus_UInt32  lbmc0_lf_sr7:6;
        RBus_UInt32  lbmc0_lf_sr8:6;
        RBus_UInt32  lbmc1_lf_sr0_pos:8;
    };
}lbmc_lbmc_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc1_lf_sr1_pos:8;
        RBus_UInt32  lbmc1_lf_sr2_pos:8;
        RBus_UInt32  lbmc1_lf_sr3_pos:8;
        RBus_UInt32  lbmc1_lf_sr4_pos:8;
    };
}lbmc_lbmc_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc1_lf_sr5_pos:8;
        RBus_UInt32  lbmc1_lf_sr6_pos:8;
        RBus_UInt32  lbmc1_lf_sr7_pos:8;
        RBus_UInt32  lbmc1_lf_sr8_pos:8;
    };
}lbmc_lbmc_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc1_lf_sr0_neg:3;
        RBus_UInt32  lbmc1_lf_sr1_neg:3;
        RBus_UInt32  lbmc1_lf_sr2_neg:3;
        RBus_UInt32  lbmc1_lf_sr3_neg:3;
        RBus_UInt32  lbmc1_lf_sr4_neg:3;
        RBus_UInt32  lbmc1_lf_sr5_neg:3;
        RBus_UInt32  lbmc1_lf_sr6_neg:3;
        RBus_UInt32  lbmc1_lf_sr7_neg:3;
        RBus_UInt32  lbmc1_lf_sr8_neg:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  lbmc0_hf_sr0:4;
    };
}lbmc_lbmc_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc0_hf_sr1:4;
        RBus_UInt32  lbmc0_hf_sr2:4;
        RBus_UInt32  lbmc1_hf_sr0_pos:5;
        RBus_UInt32  lbmc1_hf_sr1_pos:5;
        RBus_UInt32  lbmc1_hf_sr2_pos:5;
        RBus_UInt32  lbmc1_hf_sr0_neg:3;
        RBus_UInt32  lbmc1_hf_sr1_neg:3;
        RBus_UInt32  lbmc1_hf_sr2_neg:3;
    };
}lbmc_lbmc_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_dummy_18:32;
    };
}lbmc_lbmc_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_dummy_1c:32;
    };
}lbmc_lbmc_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_h_act:13;
        RBus_UInt32  lbmc_pr_mod:1;
        RBus_UInt32  lbmc_pr_lrinv:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  lbmc_v_act:13;
        RBus_UInt32  lbmc_hf_420:1;
        RBus_UInt32  fhd_mod:1;
        RBus_UInt32  lbmc_mode:1;
    };
}lbmc_lbmc_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  show_info_sel:3;
        RBus_UInt32  lbmc_3dmode:1;
        RBus_UInt32  lbmcpc_mode:1;
        RBus_UInt32  lbmc_lpf_2tap_on:1;
        RBus_UInt32  lbmc_vflip:1;
        RBus_UInt32  lbmc_prefetch_self:1;
        RBus_UInt32  lbmc_en_get_info:1;
        RBus_UInt32  lbmc_z_replace_chv:1;
        RBus_UInt32  force_iz_when_mc_phase_eq0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  lbmc_hf_nline_option:1;
        RBus_UInt32  lbmcpc_mode_sel_p:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  normal_hf_sr_unit_x2:1;
        RBus_UInt32  normal_hf_prefetch_unit_x2:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_mode_lfh:4;
        RBus_UInt32  lbmc_mode_lf:4;
        RBus_UInt32  lbmc_mode_hf:4;
    };
}lbmc_lbmc_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_row_inactive:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  lbmc_xrange_limit:13;
        RBus_UInt32  res2:3;
    };
}lbmc_lbmc_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nor_ilf_idx0_prefetch_num:7;
        RBus_UInt32  nor_ilf_idx1_prefetch_num:7;
        RBus_UInt32  nor_ilf_idx2_prefetch_num:7;
        RBus_UInt32  nor_ilf_idx3_prefetch_num:7;
        RBus_UInt32  res1:4;
    };
}lbmc_lbmc_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nor_ilf_idx4_prefetch_num:7;
        RBus_UInt32  nor_ilf_idx5_prefetch_num:7;
        RBus_UInt32  nor_ilf_idx6_prefetch_num:7;
        RBus_UInt32  nor_ilf_idx7_prefetch_num:7;
        RBus_UInt32  res1:4;
    };
}lbmc_lbmc_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nor_ilf_idx8_prefetch_num:7;
        RBus_UInt32  res1:25;
    };
}lbmc_lbmc_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nor_plf_idx0_prefetch_num:7;
        RBus_UInt32  nor_plf_idx1_prefetch_num:7;
        RBus_UInt32  nor_plf_idx2_prefetch_num:7;
        RBus_UInt32  nor_plf_idx3_prefetch_num:7;
        RBus_UInt32  res1:4;
    };
}lbmc_lbmc_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nor_plf_idx4_prefetch_num:7;
        RBus_UInt32  nor_plf_idx5_prefetch_num:7;
        RBus_UInt32  nor_plf_idx6_prefetch_num:7;
        RBus_UInt32  nor_plf_idx7_prefetch_num:7;
        RBus_UInt32  res1:4;
    };
}lbmc_lbmc_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nor_plf_idx8_prefetch_num:7;
        RBus_UInt32  res1:25;
    };
}lbmc_lbmc_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nor_ihf_idx0_prefetch_num:4;
        RBus_UInt32  nor_ihf_idx1_prefetch_num:4;
        RBus_UInt32  nor_ihf_idx2_prefetch_num:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  nor_phf_idx0_prefetch_num:4;
        RBus_UInt32  nor_phf_idx1_prefetch_num:4;
        RBus_UInt32  nor_phf_idx2_prefetch_num:4;
        RBus_UInt32  res2:4;
    };
}lbmc_lbmc_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sing_ilf_idx0_prefetch_num:7;
        RBus_UInt32  sing_ilf_idx1_prefetch_num:7;
        RBus_UInt32  sing_ilf_idx2_prefetch_num:7;
        RBus_UInt32  sing_ilf_idx3_prefetch_num:7;
        RBus_UInt32  res1:4;
    };
}lbmc_lbmc_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sing_ilf_idx4_prefetch_num:7;
        RBus_UInt32  sing_ilf_idx5_prefetch_num:7;
        RBus_UInt32  sing_ilf_idx6_prefetch_num:7;
        RBus_UInt32  sing_ilf_idx7_prefetch_num:7;
        RBus_UInt32  res1:4;
    };
}lbmc_lbmc_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sing_ilf_idx8_prefetch_num:7;
        RBus_UInt32  res1:25;
    };
}lbmc_lbmc_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sing_plf_idx0_prefetch_num:7;
        RBus_UInt32  sing_plf_idx1_prefetch_num:7;
        RBus_UInt32  sing_plf_idx2_prefetch_num:7;
        RBus_UInt32  sing_plf_idx3_prefetch_num:7;
        RBus_UInt32  res1:4;
    };
}lbmc_lbmc_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sing_plf_idx4_prefetch_num:7;
        RBus_UInt32  sing_plf_idx5_prefetch_num:7;
        RBus_UInt32  sing_plf_idx6_prefetch_num:7;
        RBus_UInt32  sing_plf_idx7_prefetch_num:7;
        RBus_UInt32  res1:4;
    };
}lbmc_lbmc_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sing_plf_idx8_prefetch_num:7;
        RBus_UInt32  res1:25;
    };
}lbmc_lbmc_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sing_ihf_idx0_prefetch_num:5;
        RBus_UInt32  sing_ihf_idx1_prefetch_num:5;
        RBus_UInt32  sing_ihf_idx2_prefetch_num:5;
        RBus_UInt32  res1:1;
        RBus_UInt32  sing_phf_idx0_prefetch_num:5;
        RBus_UInt32  sing_phf_idx1_prefetch_num:5;
        RBus_UInt32  sing_phf_idx2_prefetch_num:5;
        RBus_UInt32  res2:1;
    };
}lbmc_lbmc_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_lf_i_stat_num:12;
        RBus_UInt32  lbmc_lf_p_stat_num:12;
        RBus_UInt32  res1:8;
    };
}lbmc_lbmc_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_hf_i_stat_num:12;
        RBus_UInt32  lbmc_hf_p_stat_num:12;
        RBus_UInt32  res1:8;
    };
}lbmc_lbmc_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_start_get:13;
        RBus_UInt32  lbmc_share_hf_en:1;
        RBus_UInt32  lbmc_refinvlid_hf_en:1;
        RBus_UInt32  lbmc_phase_thr:7;
        RBus_UInt32  lbmc_single_hf_mode:1;
        RBus_UInt32  mc_logo_5x5cnt_sel:1;
        RBus_UInt32  lbmc_logo_merge_type:2;
        RBus_UInt32  lbmc_c_replace_hv_pwr_opt_sram:1;
        RBus_UInt32  lbmc_c_replace_hv_pwr_opt_post:1;
        RBus_UInt32  lbmc_c_replace_hv:1;
        RBus_UInt32  lbmc_out_422to444:1;
        RBus_UInt32  lbmc_lfh_121_en:1;
        RBus_UInt32  lbmc_hf_121_en:1;
    };
}lbmc_lbmc_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_i_lf_get_data_num:16;
        RBus_UInt32  regr_lbmc_i_lf_get_line_num:16;
    };
}lbmc_lbmc_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_p_lf_get_data_num:16;
        RBus_UInt32  regr_lbmc_p_lf_get_line_num:16;
    };
}lbmc_lbmc_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_i_hf_get_data_num:16;
        RBus_UInt32  regr_lbmc_i_hf_get_line_num:16;
    };
}lbmc_lbmc_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_p_hf_get_data_num:16;
        RBus_UInt32  regr_lbmc_p_hf_get_line_num:16;
    };
}lbmc_lbmc_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_htotal:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_lbmc_hact:13;
        RBus_UInt32  res2:3;
    };
}lbmc_lbmc_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_hinact:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  regr_lbmc_vact:13;
        RBus_UInt32  res2:3;
    };
}lbmc_lbmc_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_vtotal:27;
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_lbmc_idx_n_accord:2;
        RBus_UInt32  res2:2;
    };
}lbmc_lbmc_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_trg_blank:20;
        RBus_UInt32  regr_pre_trg_num:8;
        RBus_UInt32  regr_8tap_checker:4;
    };
}lbmc_lbmc_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_blank_de:20;
        RBus_UInt32  regr_pre_endl_num:8;
        RBus_UInt32  regr_pre_n_enough:4;
    };
}lbmc_lbmc_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_pre_stop_num:24;
        RBus_UInt32  regr_pre_b_trg_num:8;
    };
}lbmc_lbmc_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_pre_duri_num:24;
        RBus_UInt32  regr_pre_de_trg_num:8;
    };
}lbmc_lbmc_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lf_index:4;
        RBus_UInt32  regr_hf_index:2;
        RBus_UInt32  regr_lf_mode:3;
        RBus_UInt32  regr_hf_mode:3;
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_lfh_index:4;
        RBus_UInt32  regr_lfh_mode:3;
        RBus_UInt32  res2:9;
    };
}lbmc_lbmc_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc0_lfh_sr1:4;
        RBus_UInt32  lbmc0_lfh_sr2:4;
        RBus_UInt32  res1:20;
        RBus_UInt32  lbmc0_lfh_sr0:4;
    };
}lbmc_lbmc_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  lbmc1_lfh_sr0_pos:5;
        RBus_UInt32  lbmc1_lfh_sr1_pos:5;
        RBus_UInt32  lbmc1_lfh_sr2_pos:5;
        RBus_UInt32  lbmc1_lfh_sr0_neg:3;
        RBus_UInt32  lbmc1_lfh_sr1_neg:3;
        RBus_UInt32  lbmc1_lfh_sr2_neg:3;
    };
}lbmc_lbmc_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nor_ilfh_idx0_prefetch_num:4;
        RBus_UInt32  nor_ilfh_idx1_prefetch_num:4;
        RBus_UInt32  nor_ilfh_idx2_prefetch_num:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  nor_plfh_idx0_prefetch_num:4;
        RBus_UInt32  nor_plfh_idx1_prefetch_num:4;
        RBus_UInt32  nor_plfh_idx2_prefetch_num:4;
        RBus_UInt32  res2:4;
    };
}lbmc_lbmc_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sing_ilfh_idx0_prefetch_num:5;
        RBus_UInt32  sing_ilfh_idx1_prefetch_num:5;
        RBus_UInt32  sing_ilfh_idx2_prefetch_num:5;
        RBus_UInt32  res1:1;
        RBus_UInt32  sing_plfh_idx0_prefetch_num:5;
        RBus_UInt32  sing_plfh_idx1_prefetch_num:5;
        RBus_UInt32  sing_plfh_idx2_prefetch_num:5;
        RBus_UInt32  res2:1;
    };
}lbmc_lbmc_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_i_lfh_get_data_num:16;
        RBus_UInt32  regr_lbmc_i_lfh_get_line_num:16;
    };
}lbmc_lbmc_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_lbmc_p_lfh_get_data_num:16;
        RBus_UInt32  regr_lbmc_p_lfh_get_line_num:16;
    };
}lbmc_lbmc_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lfl_i_not_enough:1;
        RBus_UInt32  lfl_p_not_enough:1;
        RBus_UInt32  hf_i_not_enough:1;
        RBus_UInt32  hf_p_not_enough:1;
        RBus_UInt32  lfh_i_not_enough:1;
        RBus_UInt32  lfh_p_not_enough:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  lfl_i_underflow:1;
        RBus_UInt32  lfl_p_underflow:1;
        RBus_UInt32  hf_i_underflow:1;
        RBus_UInt32  hf_p_underflow:1;
        RBus_UInt32  lfh_i_underflow:1;
        RBus_UInt32  lfh_p_underflow:1;
        RBus_UInt32  res2:10;
    };
}lbmc_lbmc_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_db_en:1;
        RBus_UInt32  lbmc_db_rd_sel:1;
        RBus_UInt32  lbmc_db_apply:1;
        RBus_UInt32  res1:29;
    };
}lbmc_lbmc_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  not_enough_write:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  not_enough_cur:13;
        RBus_UInt32  res2:3;
    };
}lbmc_lbmc_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  underflow_cur:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  not_enough_target:13;
        RBus_UInt32  res2:3;
    };
}lbmc_lbmc_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  underflow_target:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  underflow_write:13;
        RBus_UInt32  res2:3;
    };
}lbmc_lbmc_f8_RBUS;




#endif 


#endif 
