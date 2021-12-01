/**
* @file Merlin5_DesignSpec-I-Domain_Main_Dither
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_MAIN_DITHER_REG_H_
#define _RBUS_MAIN_DITHER_REG_H_

#include "rbus_types.h"



//  MAIN_DITHER Register Address
#define  MAIN_DITHER_I_Main_DITHER_CTRL1                                        0x18022600
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_reg_addr                                "0xB8022600"
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_reg                                     0xB8022600
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_inst_addr                               "0x0000"
#define  set_MAIN_DITHER_I_Main_DITHER_CTRL1_reg(data)                           (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_CTRL1_reg)=data)
#define  get_MAIN_DITHER_I_Main_DITHER_CTRL1_reg                                 (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_CTRL1_reg))
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_main_dither_bit_sel_shift               (10)
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_main_dither_en_shift                    (5)
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_main_dither_temporal_enable_shift       (4)
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_main_dither_value_sign_shift            (3)
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_main_dither_bit_sel_mask                (0x00000400)
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_main_dither_en_mask                     (0x00000020)
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_main_dither_temporal_enable_mask        (0x00000010)
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_main_dither_value_sign_mask             (0x00000008)
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_main_dither_bit_sel(data)               (0x00000400&((data)<<10))
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_main_dither_en(data)                    (0x00000020&((data)<<5))
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_main_dither_temporal_enable(data)       (0x00000010&((data)<<4))
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_main_dither_value_sign(data)            (0x00000008&((data)<<3))
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_get_main_dither_bit_sel(data)           ((0x00000400&(data))>>10)
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_get_main_dither_en(data)                ((0x00000020&(data))>>5)
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_get_main_dither_temporal_enable(data)   ((0x00000010&(data))>>4)
#define  MAIN_DITHER_I_Main_DITHER_CTRL1_get_main_dither_value_sign(data)        ((0x00000008&(data))>>3)

#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15                                  0x18022604
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_reg_addr                          "0xB8022604"
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_reg                               0xB8022604
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_inst_addr                         "0x0001"
#define  set_MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_reg(data)                     (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_reg)=data)
#define  get_MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_reg                           (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_reg))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_15_shift        (30)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_14_shift        (28)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_13_shift        (26)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_12_shift        (24)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_11_shift        (22)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_10_shift        (20)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_9_shift         (18)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_8_shift         (16)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_7_shift         (14)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_6_shift         (12)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_5_shift         (10)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_4_shift         (8)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_3_shift         (6)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_2_shift         (4)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_1_shift         (2)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_0_shift         (0)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_15_mask         (0xC0000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_14_mask         (0x30000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_13_mask         (0x0C000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_12_mask         (0x03000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_11_mask         (0x00C00000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_10_mask         (0x00300000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_9_mask          (0x000C0000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_8_mask          (0x00030000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_7_mask          (0x0000C000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_6_mask          (0x00003000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_5_mask          (0x00000C00)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_4_mask          (0x00000300)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_3_mask          (0x000000C0)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_2_mask          (0x00000030)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_1_mask          (0x0000000C)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_0_mask          (0x00000003)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_15(data)        (0xC0000000&((data)<<30))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_14(data)        (0x30000000&((data)<<28))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_13(data)        (0x0C000000&((data)<<26))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_12(data)        (0x03000000&((data)<<24))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_11(data)        (0x00C00000&((data)<<22))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_10(data)        (0x00300000&((data)<<20))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_9(data)         (0x000C0000&((data)<<18))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_8(data)         (0x00030000&((data)<<16))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_7(data)         (0x0000C000&((data)<<14))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_6(data)         (0x00003000&((data)<<12))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_5(data)         (0x00000C00&((data)<<10))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_4(data)         (0x00000300&((data)<<8))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_3(data)         (0x000000C0&((data)<<6))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_2(data)         (0x00000030&((data)<<4))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_1(data)         (0x0000000C&((data)<<2))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_main_dither_seq_r_0(data)         (0x00000003&(data))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_get_main_dither_seq_r_15(data)    ((0xC0000000&(data))>>30)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_get_main_dither_seq_r_14(data)    ((0x30000000&(data))>>28)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_get_main_dither_seq_r_13(data)    ((0x0C000000&(data))>>26)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_get_main_dither_seq_r_12(data)    ((0x03000000&(data))>>24)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_get_main_dither_seq_r_11(data)    ((0x00C00000&(data))>>22)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_get_main_dither_seq_r_10(data)    ((0x00300000&(data))>>20)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_get_main_dither_seq_r_9(data)     ((0x000C0000&(data))>>18)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_get_main_dither_seq_r_8(data)     ((0x00030000&(data))>>16)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_get_main_dither_seq_r_7(data)     ((0x0000C000&(data))>>14)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_get_main_dither_seq_r_6(data)     ((0x00003000&(data))>>12)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_get_main_dither_seq_r_5(data)     ((0x00000C00&(data))>>10)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_get_main_dither_seq_r_4(data)     ((0x00000300&(data))>>8)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_get_main_dither_seq_r_3(data)     ((0x000000C0&(data))>>6)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_get_main_dither_seq_r_2(data)     ((0x00000030&(data))>>4)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_get_main_dither_seq_r_1(data)     ((0x0000000C&(data))>>2)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_00_15_get_main_dither_seq_r_0(data)     (0x00000003&(data))

#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31                                  0x18022608
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_reg_addr                          "0xB8022608"
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_reg                               0xB8022608
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_inst_addr                         "0x0002"
#define  set_MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_reg(data)                     (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_reg)=data)
#define  get_MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_reg                           (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_reg))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_31_shift        (30)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_30_shift        (28)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_29_shift        (26)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_28_shift        (24)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_27_shift        (22)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_26_shift        (20)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_25_shift        (18)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_24_shift        (16)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_23_shift        (14)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_22_shift        (12)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_21_shift        (10)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_20_shift        (8)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_19_shift        (6)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_18_shift        (4)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_17_shift        (2)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_16_shift        (0)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_31_mask         (0xC0000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_30_mask         (0x30000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_29_mask         (0x0C000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_28_mask         (0x03000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_27_mask         (0x00C00000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_26_mask         (0x00300000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_25_mask         (0x000C0000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_24_mask         (0x00030000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_23_mask         (0x0000C000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_22_mask         (0x00003000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_21_mask         (0x00000C00)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_20_mask         (0x00000300)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_19_mask         (0x000000C0)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_18_mask         (0x00000030)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_17_mask         (0x0000000C)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_16_mask         (0x00000003)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_31(data)        (0xC0000000&((data)<<30))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_30(data)        (0x30000000&((data)<<28))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_29(data)        (0x0C000000&((data)<<26))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_28(data)        (0x03000000&((data)<<24))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_27(data)        (0x00C00000&((data)<<22))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_26(data)        (0x00300000&((data)<<20))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_25(data)        (0x000C0000&((data)<<18))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_24(data)        (0x00030000&((data)<<16))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_23(data)        (0x0000C000&((data)<<14))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_22(data)        (0x00003000&((data)<<12))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_21(data)        (0x00000C00&((data)<<10))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_20(data)        (0x00000300&((data)<<8))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_19(data)        (0x000000C0&((data)<<6))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_18(data)        (0x00000030&((data)<<4))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_17(data)        (0x0000000C&((data)<<2))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_main_dither_seq_r_16(data)        (0x00000003&(data))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_get_main_dither_seq_r_31(data)    ((0xC0000000&(data))>>30)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_get_main_dither_seq_r_30(data)    ((0x30000000&(data))>>28)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_get_main_dither_seq_r_29(data)    ((0x0C000000&(data))>>26)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_get_main_dither_seq_r_28(data)    ((0x03000000&(data))>>24)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_get_main_dither_seq_r_27(data)    ((0x00C00000&(data))>>22)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_get_main_dither_seq_r_26(data)    ((0x00300000&(data))>>20)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_get_main_dither_seq_r_25(data)    ((0x000C0000&(data))>>18)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_get_main_dither_seq_r_24(data)    ((0x00030000&(data))>>16)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_get_main_dither_seq_r_23(data)    ((0x0000C000&(data))>>14)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_get_main_dither_seq_r_22(data)    ((0x00003000&(data))>>12)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_get_main_dither_seq_r_21(data)    ((0x00000C00&(data))>>10)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_get_main_dither_seq_r_20(data)    ((0x00000300&(data))>>8)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_get_main_dither_seq_r_19(data)    ((0x000000C0&(data))>>6)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_get_main_dither_seq_r_18(data)    ((0x00000030&(data))>>4)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_get_main_dither_seq_r_17(data)    ((0x0000000C&(data))>>2)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_R_16_31_get_main_dither_seq_r_16(data)    (0x00000003&(data))

#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07                                  0x1802260C
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_reg_addr                          "0xB802260C"
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_reg                               0xB802260C
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_inst_addr                         "0x0003"
#define  set_MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_reg(data)                     (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_reg)=data)
#define  get_MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_reg                           (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_reg))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_15_shift        (30)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_14_shift        (28)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_13_shift        (26)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_12_shift        (24)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_11_shift        (22)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_10_shift        (20)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_9_shift         (18)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_8_shift         (16)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_7_shift         (14)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_6_shift         (12)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_5_shift         (10)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_4_shift         (8)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_3_shift         (6)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_2_shift         (4)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_1_shift         (2)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_0_shift         (0)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_15_mask         (0xC0000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_14_mask         (0x30000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_13_mask         (0x0C000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_12_mask         (0x03000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_11_mask         (0x00C00000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_10_mask         (0x00300000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_9_mask          (0x000C0000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_8_mask          (0x00030000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_7_mask          (0x0000C000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_6_mask          (0x00003000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_5_mask          (0x00000C00)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_4_mask          (0x00000300)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_3_mask          (0x000000C0)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_2_mask          (0x00000030)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_1_mask          (0x0000000C)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_0_mask          (0x00000003)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_15(data)        (0xC0000000&((data)<<30))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_14(data)        (0x30000000&((data)<<28))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_13(data)        (0x0C000000&((data)<<26))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_12(data)        (0x03000000&((data)<<24))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_11(data)        (0x00C00000&((data)<<22))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_10(data)        (0x00300000&((data)<<20))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_9(data)         (0x000C0000&((data)<<18))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_8(data)         (0x00030000&((data)<<16))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_7(data)         (0x0000C000&((data)<<14))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_6(data)         (0x00003000&((data)<<12))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_5(data)         (0x00000C00&((data)<<10))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_4(data)         (0x00000300&((data)<<8))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_3(data)         (0x000000C0&((data)<<6))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_2(data)         (0x00000030&((data)<<4))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_1(data)         (0x0000000C&((data)<<2))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_main_dither_seq_g_0(data)         (0x00000003&(data))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_get_main_dither_seq_g_15(data)    ((0xC0000000&(data))>>30)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_get_main_dither_seq_g_14(data)    ((0x30000000&(data))>>28)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_get_main_dither_seq_g_13(data)    ((0x0C000000&(data))>>26)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_get_main_dither_seq_g_12(data)    ((0x03000000&(data))>>24)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_get_main_dither_seq_g_11(data)    ((0x00C00000&(data))>>22)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_get_main_dither_seq_g_10(data)    ((0x00300000&(data))>>20)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_get_main_dither_seq_g_9(data)     ((0x000C0000&(data))>>18)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_get_main_dither_seq_g_8(data)     ((0x00030000&(data))>>16)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_get_main_dither_seq_g_7(data)     ((0x0000C000&(data))>>14)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_get_main_dither_seq_g_6(data)     ((0x00003000&(data))>>12)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_get_main_dither_seq_g_5(data)     ((0x00000C00&(data))>>10)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_get_main_dither_seq_g_4(data)     ((0x00000300&(data))>>8)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_get_main_dither_seq_g_3(data)     ((0x000000C0&(data))>>6)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_get_main_dither_seq_g_2(data)     ((0x00000030&(data))>>4)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_get_main_dither_seq_g_1(data)     ((0x0000000C&(data))>>2)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_00_07_get_main_dither_seq_g_0(data)     (0x00000003&(data))

#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31                                  0x18022610
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_reg_addr                          "0xB8022610"
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_reg                               0xB8022610
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_inst_addr                         "0x0004"
#define  set_MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_reg(data)                     (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_reg)=data)
#define  get_MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_reg                           (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_reg))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_31_shift        (30)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_30_shift        (28)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_29_shift        (26)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_28_shift        (24)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_27_shift        (22)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_26_shift        (20)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_25_shift        (18)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_24_shift        (16)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_23_shift        (14)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_22_shift        (12)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_21_shift        (10)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_20_shift        (8)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_19_shift        (6)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_18_shift        (4)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_17_shift        (2)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_16_shift        (0)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_31_mask         (0xC0000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_30_mask         (0x30000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_29_mask         (0x0C000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_28_mask         (0x03000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_27_mask         (0x00C00000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_26_mask         (0x00300000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_25_mask         (0x000C0000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_24_mask         (0x00030000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_23_mask         (0x0000C000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_22_mask         (0x00003000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_21_mask         (0x00000C00)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_20_mask         (0x00000300)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_19_mask         (0x000000C0)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_18_mask         (0x00000030)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_17_mask         (0x0000000C)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_16_mask         (0x00000003)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_31(data)        (0xC0000000&((data)<<30))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_30(data)        (0x30000000&((data)<<28))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_29(data)        (0x0C000000&((data)<<26))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_28(data)        (0x03000000&((data)<<24))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_27(data)        (0x00C00000&((data)<<22))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_26(data)        (0x00300000&((data)<<20))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_25(data)        (0x000C0000&((data)<<18))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_24(data)        (0x00030000&((data)<<16))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_23(data)        (0x0000C000&((data)<<14))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_22(data)        (0x00003000&((data)<<12))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_21(data)        (0x00000C00&((data)<<10))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_20(data)        (0x00000300&((data)<<8))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_19(data)        (0x000000C0&((data)<<6))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_18(data)        (0x00000030&((data)<<4))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_17(data)        (0x0000000C&((data)<<2))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_main_dither_seq_g_16(data)        (0x00000003&(data))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_get_main_dither_seq_g_31(data)    ((0xC0000000&(data))>>30)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_get_main_dither_seq_g_30(data)    ((0x30000000&(data))>>28)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_get_main_dither_seq_g_29(data)    ((0x0C000000&(data))>>26)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_get_main_dither_seq_g_28(data)    ((0x03000000&(data))>>24)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_get_main_dither_seq_g_27(data)    ((0x00C00000&(data))>>22)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_get_main_dither_seq_g_26(data)    ((0x00300000&(data))>>20)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_get_main_dither_seq_g_25(data)    ((0x000C0000&(data))>>18)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_get_main_dither_seq_g_24(data)    ((0x00030000&(data))>>16)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_get_main_dither_seq_g_23(data)    ((0x0000C000&(data))>>14)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_get_main_dither_seq_g_22(data)    ((0x00003000&(data))>>12)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_get_main_dither_seq_g_21(data)    ((0x00000C00&(data))>>10)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_get_main_dither_seq_g_20(data)    ((0x00000300&(data))>>8)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_get_main_dither_seq_g_19(data)    ((0x000000C0&(data))>>6)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_get_main_dither_seq_g_18(data)    ((0x00000030&(data))>>4)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_get_main_dither_seq_g_17(data)    ((0x0000000C&(data))>>2)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_G_16_31_get_main_dither_seq_g_16(data)    (0x00000003&(data))

#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15                                  0x18022614
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_reg_addr                          "0xB8022614"
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_reg                               0xB8022614
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_inst_addr                         "0x0005"
#define  set_MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_reg(data)                     (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_reg)=data)
#define  get_MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_reg                           (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_reg))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_15_shift        (30)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_14_shift        (28)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_13_shift        (26)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_12_shift        (24)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_11_shift        (22)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_10_shift        (20)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_9_shift         (18)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_8_shift         (16)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_7_shift         (14)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_6_shift         (12)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_5_shift         (10)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_4_shift         (8)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_3_shift         (6)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_2_shift         (4)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_1_shift         (2)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_0_shift         (0)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_15_mask         (0xC0000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_14_mask         (0x30000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_13_mask         (0x0C000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_12_mask         (0x03000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_11_mask         (0x00C00000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_10_mask         (0x00300000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_9_mask          (0x000C0000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_8_mask          (0x00030000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_7_mask          (0x0000C000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_6_mask          (0x00003000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_5_mask          (0x00000C00)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_4_mask          (0x00000300)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_3_mask          (0x000000C0)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_2_mask          (0x00000030)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_1_mask          (0x0000000C)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_0_mask          (0x00000003)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_15(data)        (0xC0000000&((data)<<30))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_14(data)        (0x30000000&((data)<<28))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_13(data)        (0x0C000000&((data)<<26))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_12(data)        (0x03000000&((data)<<24))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_11(data)        (0x00C00000&((data)<<22))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_10(data)        (0x00300000&((data)<<20))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_9(data)         (0x000C0000&((data)<<18))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_8(data)         (0x00030000&((data)<<16))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_7(data)         (0x0000C000&((data)<<14))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_6(data)         (0x00003000&((data)<<12))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_5(data)         (0x00000C00&((data)<<10))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_4(data)         (0x00000300&((data)<<8))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_3(data)         (0x000000C0&((data)<<6))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_2(data)         (0x00000030&((data)<<4))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_1(data)         (0x0000000C&((data)<<2))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_main_dither_seq_b_0(data)         (0x00000003&(data))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_get_main_dither_seq_b_15(data)    ((0xC0000000&(data))>>30)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_get_main_dither_seq_b_14(data)    ((0x30000000&(data))>>28)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_get_main_dither_seq_b_13(data)    ((0x0C000000&(data))>>26)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_get_main_dither_seq_b_12(data)    ((0x03000000&(data))>>24)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_get_main_dither_seq_b_11(data)    ((0x00C00000&(data))>>22)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_get_main_dither_seq_b_10(data)    ((0x00300000&(data))>>20)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_get_main_dither_seq_b_9(data)     ((0x000C0000&(data))>>18)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_get_main_dither_seq_b_8(data)     ((0x00030000&(data))>>16)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_get_main_dither_seq_b_7(data)     ((0x0000C000&(data))>>14)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_get_main_dither_seq_b_6(data)     ((0x00003000&(data))>>12)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_get_main_dither_seq_b_5(data)     ((0x00000C00&(data))>>10)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_get_main_dither_seq_b_4(data)     ((0x00000300&(data))>>8)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_get_main_dither_seq_b_3(data)     ((0x000000C0&(data))>>6)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_get_main_dither_seq_b_2(data)     ((0x00000030&(data))>>4)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_get_main_dither_seq_b_1(data)     ((0x0000000C&(data))>>2)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_00_15_get_main_dither_seq_b_0(data)     (0x00000003&(data))

#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31                                  0x18022618
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_reg_addr                          "0xB8022618"
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_reg                               0xB8022618
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_inst_addr                         "0x0006"
#define  set_MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_reg(data)                     (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_reg)=data)
#define  get_MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_reg                           (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_reg))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_31_shift        (30)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_30_shift        (28)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_29_shift        (26)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_28_shift        (24)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_27_shift        (22)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_26_shift        (20)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_25_shift        (18)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_24_shift        (16)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_23_shift        (14)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_22_shift        (12)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_21_shift        (10)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_20_shift        (8)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_19_shift        (6)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_18_shift        (4)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_17_shift        (2)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_16_shift        (0)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_31_mask         (0xC0000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_30_mask         (0x30000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_29_mask         (0x0C000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_28_mask         (0x03000000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_27_mask         (0x00C00000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_26_mask         (0x00300000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_25_mask         (0x000C0000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_24_mask         (0x00030000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_23_mask         (0x0000C000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_22_mask         (0x00003000)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_21_mask         (0x00000C00)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_20_mask         (0x00000300)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_19_mask         (0x000000C0)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_18_mask         (0x00000030)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_17_mask         (0x0000000C)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_16_mask         (0x00000003)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_31(data)        (0xC0000000&((data)<<30))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_30(data)        (0x30000000&((data)<<28))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_29(data)        (0x0C000000&((data)<<26))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_28(data)        (0x03000000&((data)<<24))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_27(data)        (0x00C00000&((data)<<22))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_26(data)        (0x00300000&((data)<<20))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_25(data)        (0x000C0000&((data)<<18))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_24(data)        (0x00030000&((data)<<16))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_23(data)        (0x0000C000&((data)<<14))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_22(data)        (0x00003000&((data)<<12))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_21(data)        (0x00000C00&((data)<<10))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_20(data)        (0x00000300&((data)<<8))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_19(data)        (0x000000C0&((data)<<6))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_18(data)        (0x00000030&((data)<<4))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_17(data)        (0x0000000C&((data)<<2))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_main_dither_seq_b_16(data)        (0x00000003&(data))
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_get_main_dither_seq_b_31(data)    ((0xC0000000&(data))>>30)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_get_main_dither_seq_b_30(data)    ((0x30000000&(data))>>28)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_get_main_dither_seq_b_29(data)    ((0x0C000000&(data))>>26)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_get_main_dither_seq_b_28(data)    ((0x03000000&(data))>>24)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_get_main_dither_seq_b_27(data)    ((0x00C00000&(data))>>22)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_get_main_dither_seq_b_26(data)    ((0x00300000&(data))>>20)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_get_main_dither_seq_b_25(data)    ((0x000C0000&(data))>>18)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_get_main_dither_seq_b_24(data)    ((0x00030000&(data))>>16)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_get_main_dither_seq_b_23(data)    ((0x0000C000&(data))>>14)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_get_main_dither_seq_b_22(data)    ((0x00003000&(data))>>12)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_get_main_dither_seq_b_21(data)    ((0x00000C00&(data))>>10)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_get_main_dither_seq_b_20(data)    ((0x00000300&(data))>>8)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_get_main_dither_seq_b_19(data)    ((0x000000C0&(data))>>6)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_get_main_dither_seq_b_18(data)    ((0x00000030&(data))>>4)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_get_main_dither_seq_b_17(data)    ((0x0000000C&(data))>>2)
#define  MAIN_DITHER_I_Main_DITHER_SEQ_B_16_31_get_main_dither_seq_b_16(data)    (0x00000003&(data))

#define  MAIN_DITHER_I_Main_DITHER_TB_R_00                                      0x1802261C
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_reg_addr                              "0xB802261C"
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_reg                                   0xB802261C
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_inst_addr                             "0x0007"
#define  set_MAIN_DITHER_I_Main_DITHER_TB_R_00_reg(data)                         (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_TB_R_00_reg)=data)
#define  get_MAIN_DITHER_I_Main_DITHER_TB_R_00_reg                               (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_TB_R_00_reg))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_13_shift            (28)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_12_shift            (24)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_11_shift            (20)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_10_shift            (16)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_03_shift            (12)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_02_shift            (8)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_01_shift            (4)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_00_shift            (0)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_13_mask             (0xF0000000)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_12_mask             (0x0F000000)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_11_mask             (0x00F00000)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_10_mask             (0x000F0000)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_03_mask             (0x0000F000)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_02_mask             (0x00000F00)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_01_mask             (0x000000F0)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_00_mask             (0x0000000F)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_13(data)            (0xF0000000&((data)<<28))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_12(data)            (0x0F000000&((data)<<24))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_11(data)            (0x00F00000&((data)<<20))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_10(data)            (0x000F0000&((data)<<16))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_03(data)            (0x0000F000&((data)<<12))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_02(data)            (0x00000F00&((data)<<8))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_01(data)            (0x000000F0&((data)<<4))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_main_dither_tab_r_00(data)            (0x0000000F&(data))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_get_main_dither_tab_r_13(data)        ((0xF0000000&(data))>>28)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_get_main_dither_tab_r_12(data)        ((0x0F000000&(data))>>24)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_get_main_dither_tab_r_11(data)        ((0x00F00000&(data))>>20)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_get_main_dither_tab_r_10(data)        ((0x000F0000&(data))>>16)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_get_main_dither_tab_r_03(data)        ((0x0000F000&(data))>>12)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_get_main_dither_tab_r_02(data)        ((0x00000F00&(data))>>8)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_get_main_dither_tab_r_01(data)        ((0x000000F0&(data))>>4)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_00_get_main_dither_tab_r_00(data)        (0x0000000F&(data))

#define  MAIN_DITHER_I_Main_DITHER_TB_R_02                                      0x18022620
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_reg_addr                              "0xB8022620"
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_reg                                   0xB8022620
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_inst_addr                             "0x0008"
#define  set_MAIN_DITHER_I_Main_DITHER_TB_R_02_reg(data)                         (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_TB_R_02_reg)=data)
#define  get_MAIN_DITHER_I_Main_DITHER_TB_R_02_reg                               (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_TB_R_02_reg))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_33_shift            (28)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_32_shift            (24)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_31_shift            (20)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_30_shift            (16)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_23_shift            (12)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_22_shift            (8)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_21_shift            (4)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_20_shift            (0)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_33_mask             (0xF0000000)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_32_mask             (0x0F000000)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_31_mask             (0x00F00000)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_30_mask             (0x000F0000)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_23_mask             (0x0000F000)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_22_mask             (0x00000F00)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_21_mask             (0x000000F0)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_20_mask             (0x0000000F)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_33(data)            (0xF0000000&((data)<<28))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_32(data)            (0x0F000000&((data)<<24))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_31(data)            (0x00F00000&((data)<<20))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_30(data)            (0x000F0000&((data)<<16))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_23(data)            (0x0000F000&((data)<<12))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_22(data)            (0x00000F00&((data)<<8))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_21(data)            (0x000000F0&((data)<<4))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_main_dither_tab_r_20(data)            (0x0000000F&(data))
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_get_main_dither_tab_r_33(data)        ((0xF0000000&(data))>>28)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_get_main_dither_tab_r_32(data)        ((0x0F000000&(data))>>24)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_get_main_dither_tab_r_31(data)        ((0x00F00000&(data))>>20)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_get_main_dither_tab_r_30(data)        ((0x000F0000&(data))>>16)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_get_main_dither_tab_r_23(data)        ((0x0000F000&(data))>>12)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_get_main_dither_tab_r_22(data)        ((0x00000F00&(data))>>8)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_get_main_dither_tab_r_21(data)        ((0x000000F0&(data))>>4)
#define  MAIN_DITHER_I_Main_DITHER_TB_R_02_get_main_dither_tab_r_20(data)        (0x0000000F&(data))

#define  MAIN_DITHER_I_Main_DITHER_TB_G_00                                      0x18022624
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_reg_addr                              "0xB8022624"
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_reg                                   0xB8022624
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_inst_addr                             "0x0009"
#define  set_MAIN_DITHER_I_Main_DITHER_TB_G_00_reg(data)                         (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_TB_G_00_reg)=data)
#define  get_MAIN_DITHER_I_Main_DITHER_TB_G_00_reg                               (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_TB_G_00_reg))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_13_shift            (28)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_12_shift            (24)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_11_shift            (20)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_10_shift            (16)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_03_shift            (12)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_02_shift            (8)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_01_shift            (4)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_00_shift            (0)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_13_mask             (0xF0000000)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_12_mask             (0x0F000000)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_11_mask             (0x00F00000)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_10_mask             (0x000F0000)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_03_mask             (0x0000F000)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_02_mask             (0x00000F00)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_01_mask             (0x000000F0)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_00_mask             (0x0000000F)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_13(data)            (0xF0000000&((data)<<28))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_12(data)            (0x0F000000&((data)<<24))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_11(data)            (0x00F00000&((data)<<20))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_10(data)            (0x000F0000&((data)<<16))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_03(data)            (0x0000F000&((data)<<12))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_02(data)            (0x00000F00&((data)<<8))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_01(data)            (0x000000F0&((data)<<4))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_main_dither_tab_g_00(data)            (0x0000000F&(data))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_get_main_dither_tab_g_13(data)        ((0xF0000000&(data))>>28)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_get_main_dither_tab_g_12(data)        ((0x0F000000&(data))>>24)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_get_main_dither_tab_g_11(data)        ((0x00F00000&(data))>>20)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_get_main_dither_tab_g_10(data)        ((0x000F0000&(data))>>16)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_get_main_dither_tab_g_03(data)        ((0x0000F000&(data))>>12)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_get_main_dither_tab_g_02(data)        ((0x00000F00&(data))>>8)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_get_main_dither_tab_g_01(data)        ((0x000000F0&(data))>>4)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_00_get_main_dither_tab_g_00(data)        (0x0000000F&(data))

#define  MAIN_DITHER_I_Main_DITHER_TB_G_02                                      0x18022628
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_reg_addr                              "0xB8022628"
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_reg                                   0xB8022628
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_inst_addr                             "0x000A"
#define  set_MAIN_DITHER_I_Main_DITHER_TB_G_02_reg(data)                         (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_TB_G_02_reg)=data)
#define  get_MAIN_DITHER_I_Main_DITHER_TB_G_02_reg                               (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_TB_G_02_reg))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_33_shift            (28)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_32_shift            (24)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_31_shift            (20)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_30_shift            (16)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_23_shift            (12)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_22_shift            (8)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_21_shift            (4)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_20_shift            (0)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_33_mask             (0xF0000000)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_32_mask             (0x0F000000)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_31_mask             (0x00F00000)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_30_mask             (0x000F0000)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_23_mask             (0x0000F000)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_22_mask             (0x00000F00)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_21_mask             (0x000000F0)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_20_mask             (0x0000000F)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_33(data)            (0xF0000000&((data)<<28))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_32(data)            (0x0F000000&((data)<<24))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_31(data)            (0x00F00000&((data)<<20))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_30(data)            (0x000F0000&((data)<<16))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_23(data)            (0x0000F000&((data)<<12))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_22(data)            (0x00000F00&((data)<<8))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_21(data)            (0x000000F0&((data)<<4))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_main_dither_tab_g_20(data)            (0x0000000F&(data))
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_get_main_dither_tab_g_33(data)        ((0xF0000000&(data))>>28)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_get_main_dither_tab_g_32(data)        ((0x0F000000&(data))>>24)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_get_main_dither_tab_g_31(data)        ((0x00F00000&(data))>>20)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_get_main_dither_tab_g_30(data)        ((0x000F0000&(data))>>16)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_get_main_dither_tab_g_23(data)        ((0x0000F000&(data))>>12)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_get_main_dither_tab_g_22(data)        ((0x00000F00&(data))>>8)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_get_main_dither_tab_g_21(data)        ((0x000000F0&(data))>>4)
#define  MAIN_DITHER_I_Main_DITHER_TB_G_02_get_main_dither_tab_g_20(data)        (0x0000000F&(data))

#define  MAIN_DITHER_I_Main_DITHER_TB_B_00                                      0x1802262C
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_reg_addr                              "0xB802262C"
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_reg                                   0xB802262C
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_inst_addr                             "0x000B"
#define  set_MAIN_DITHER_I_Main_DITHER_TB_B_00_reg(data)                         (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_TB_B_00_reg)=data)
#define  get_MAIN_DITHER_I_Main_DITHER_TB_B_00_reg                               (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_TB_B_00_reg))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_13_shift            (28)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_12_shift            (24)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_11_shift            (20)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_10_shift            (16)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_03_shift            (12)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_02_shift            (8)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_01_shift            (4)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_00_shift            (0)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_13_mask             (0xF0000000)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_12_mask             (0x0F000000)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_11_mask             (0x00F00000)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_10_mask             (0x000F0000)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_03_mask             (0x0000F000)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_02_mask             (0x00000F00)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_01_mask             (0x000000F0)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_00_mask             (0x0000000F)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_13(data)            (0xF0000000&((data)<<28))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_12(data)            (0x0F000000&((data)<<24))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_11(data)            (0x00F00000&((data)<<20))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_10(data)            (0x000F0000&((data)<<16))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_03(data)            (0x0000F000&((data)<<12))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_02(data)            (0x00000F00&((data)<<8))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_01(data)            (0x000000F0&((data)<<4))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_main_dither_tab_b_00(data)            (0x0000000F&(data))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_get_main_dither_tab_b_13(data)        ((0xF0000000&(data))>>28)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_get_main_dither_tab_b_12(data)        ((0x0F000000&(data))>>24)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_get_main_dither_tab_b_11(data)        ((0x00F00000&(data))>>20)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_get_main_dither_tab_b_10(data)        ((0x000F0000&(data))>>16)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_get_main_dither_tab_b_03(data)        ((0x0000F000&(data))>>12)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_get_main_dither_tab_b_02(data)        ((0x00000F00&(data))>>8)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_get_main_dither_tab_b_01(data)        ((0x000000F0&(data))>>4)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_00_get_main_dither_tab_b_00(data)        (0x0000000F&(data))

#define  MAIN_DITHER_I_Main_DITHER_TB_B_02                                      0x18022630
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_reg_addr                              "0xB8022630"
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_reg                                   0xB8022630
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_inst_addr                             "0x000C"
#define  set_MAIN_DITHER_I_Main_DITHER_TB_B_02_reg(data)                         (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_TB_B_02_reg)=data)
#define  get_MAIN_DITHER_I_Main_DITHER_TB_B_02_reg                               (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_TB_B_02_reg))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_33_shift            (28)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_32_shift            (24)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_31_shift            (20)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_30_shift            (16)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_23_shift            (12)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_22_shift            (8)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_21_shift            (4)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_20_shift            (0)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_33_mask             (0xF0000000)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_32_mask             (0x0F000000)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_31_mask             (0x00F00000)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_30_mask             (0x000F0000)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_23_mask             (0x0000F000)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_22_mask             (0x00000F00)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_21_mask             (0x000000F0)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_20_mask             (0x0000000F)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_33(data)            (0xF0000000&((data)<<28))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_32(data)            (0x0F000000&((data)<<24))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_31(data)            (0x00F00000&((data)<<20))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_30(data)            (0x000F0000&((data)<<16))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_23(data)            (0x0000F000&((data)<<12))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_22(data)            (0x00000F00&((data)<<8))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_21(data)            (0x000000F0&((data)<<4))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_main_dither_tab_b_20(data)            (0x0000000F&(data))
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_get_main_dither_tab_b_33(data)        ((0xF0000000&(data))>>28)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_get_main_dither_tab_b_32(data)        ((0x0F000000&(data))>>24)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_get_main_dither_tab_b_31(data)        ((0x00F00000&(data))>>20)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_get_main_dither_tab_b_30(data)        ((0x000F0000&(data))>>16)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_get_main_dither_tab_b_23(data)        ((0x0000F000&(data))>>12)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_get_main_dither_tab_b_22(data)        ((0x00000F00&(data))>>8)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_get_main_dither_tab_b_21(data)        ((0x000000F0&(data))>>4)
#define  MAIN_DITHER_I_Main_DITHER_TB_B_02_get_main_dither_tab_b_20(data)        (0x0000000F&(data))

#define  MAIN_DITHER_I_Main_DITHER_Temp_TB                                      0x18022634
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_reg_addr                              "0xB8022634"
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_reg                                   0xB8022634
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_inst_addr                             "0x000D"
#define  set_MAIN_DITHER_I_Main_DITHER_Temp_TB_reg(data)                         (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_Temp_TB_reg)=data)
#define  get_MAIN_DITHER_I_Main_DITHER_Temp_TB_reg                               (*((volatile unsigned int*)MAIN_DITHER_I_Main_DITHER_Temp_TB_reg))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_15_shift  (30)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_14_shift  (28)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_13_shift  (26)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_12_shift  (24)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_11_shift  (22)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_10_shift  (20)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_9_shift   (18)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_8_shift   (16)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_7_shift   (14)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_6_shift   (12)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_5_shift   (10)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_4_shift   (8)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_3_shift   (6)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_2_shift   (4)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_1_shift   (2)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_0_shift   (0)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_15_mask   (0xC0000000)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_14_mask   (0x30000000)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_13_mask   (0x0C000000)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_12_mask   (0x03000000)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_11_mask   (0x00C00000)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_10_mask   (0x00300000)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_9_mask    (0x000C0000)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_8_mask    (0x00030000)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_7_mask    (0x0000C000)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_6_mask    (0x00003000)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_5_mask    (0x00000C00)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_4_mask    (0x00000300)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_3_mask    (0x000000C0)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_2_mask    (0x00000030)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_1_mask    (0x0000000C)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_0_mask    (0x00000003)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_15(data)  (0xC0000000&((data)<<30))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_14(data)  (0x30000000&((data)<<28))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_13(data)  (0x0C000000&((data)<<26))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_12(data)  (0x03000000&((data)<<24))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_11(data)  (0x00C00000&((data)<<22))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_10(data)  (0x00300000&((data)<<20))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_9(data)   (0x000C0000&((data)<<18))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_8(data)   (0x00030000&((data)<<16))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_7(data)   (0x0000C000&((data)<<14))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_6(data)   (0x00003000&((data)<<12))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_5(data)   (0x00000C00&((data)<<10))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_4(data)   (0x00000300&((data)<<8))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_3(data)   (0x000000C0&((data)<<6))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_2(data)   (0x00000030&((data)<<4))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_1(data)   (0x0000000C&((data)<<2))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_main_dither_tab_temp_offset_0(data)   (0x00000003&(data))
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_get_main_dither_tab_temp_offset_15(data) ((0xC0000000&(data))>>30)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_get_main_dither_tab_temp_offset_14(data) ((0x30000000&(data))>>28)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_get_main_dither_tab_temp_offset_13(data) ((0x0C000000&(data))>>26)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_get_main_dither_tab_temp_offset_12(data) ((0x03000000&(data))>>24)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_get_main_dither_tab_temp_offset_11(data) ((0x00C00000&(data))>>22)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_get_main_dither_tab_temp_offset_10(data) ((0x00300000&(data))>>20)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_get_main_dither_tab_temp_offset_9(data) ((0x000C0000&(data))>>18)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_get_main_dither_tab_temp_offset_8(data) ((0x00030000&(data))>>16)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_get_main_dither_tab_temp_offset_7(data) ((0x0000C000&(data))>>14)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_get_main_dither_tab_temp_offset_6(data) ((0x00003000&(data))>>12)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_get_main_dither_tab_temp_offset_5(data) ((0x00000C00&(data))>>10)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_get_main_dither_tab_temp_offset_4(data) ((0x00000300&(data))>>8)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_get_main_dither_tab_temp_offset_3(data) ((0x000000C0&(data))>>6)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_get_main_dither_tab_temp_offset_2(data) ((0x00000030&(data))>>4)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_get_main_dither_tab_temp_offset_1(data) ((0x0000000C&(data))>>2)
#define  MAIN_DITHER_I_Main_DITHER_Temp_TB_get_main_dither_tab_temp_offset_0(data) (0x00000003&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======MAIN_DITHER register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  main_dither_bit_sel:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  main_dither_en:1;
        RBus_UInt32  main_dither_temporal_enable:1;
        RBus_UInt32  main_dither_value_sign:1;
        RBus_UInt32  res3:3;
    };
}main_dither_i_main_dither_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_seq_r_15:2;
        RBus_UInt32  main_dither_seq_r_14:2;
        RBus_UInt32  main_dither_seq_r_13:2;
        RBus_UInt32  main_dither_seq_r_12:2;
        RBus_UInt32  main_dither_seq_r_11:2;
        RBus_UInt32  main_dither_seq_r_10:2;
        RBus_UInt32  main_dither_seq_r_9:2;
        RBus_UInt32  main_dither_seq_r_8:2;
        RBus_UInt32  main_dither_seq_r_7:2;
        RBus_UInt32  main_dither_seq_r_6:2;
        RBus_UInt32  main_dither_seq_r_5:2;
        RBus_UInt32  main_dither_seq_r_4:2;
        RBus_UInt32  main_dither_seq_r_3:2;
        RBus_UInt32  main_dither_seq_r_2:2;
        RBus_UInt32  main_dither_seq_r_1:2;
        RBus_UInt32  main_dither_seq_r_0:2;
    };
}main_dither_i_main_dither_seq_r_00_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_seq_r_31:2;
        RBus_UInt32  main_dither_seq_r_30:2;
        RBus_UInt32  main_dither_seq_r_29:2;
        RBus_UInt32  main_dither_seq_r_28:2;
        RBus_UInt32  main_dither_seq_r_27:2;
        RBus_UInt32  main_dither_seq_r_26:2;
        RBus_UInt32  main_dither_seq_r_25:2;
        RBus_UInt32  main_dither_seq_r_24:2;
        RBus_UInt32  main_dither_seq_r_23:2;
        RBus_UInt32  main_dither_seq_r_22:2;
        RBus_UInt32  main_dither_seq_r_21:2;
        RBus_UInt32  main_dither_seq_r_20:2;
        RBus_UInt32  main_dither_seq_r_19:2;
        RBus_UInt32  main_dither_seq_r_18:2;
        RBus_UInt32  main_dither_seq_r_17:2;
        RBus_UInt32  main_dither_seq_r_16:2;
    };
}main_dither_i_main_dither_seq_r_16_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_seq_g_15:2;
        RBus_UInt32  main_dither_seq_g_14:2;
        RBus_UInt32  main_dither_seq_g_13:2;
        RBus_UInt32  main_dither_seq_g_12:2;
        RBus_UInt32  main_dither_seq_g_11:2;
        RBus_UInt32  main_dither_seq_g_10:2;
        RBus_UInt32  main_dither_seq_g_9:2;
        RBus_UInt32  main_dither_seq_g_8:2;
        RBus_UInt32  main_dither_seq_g_7:2;
        RBus_UInt32  main_dither_seq_g_6:2;
        RBus_UInt32  main_dither_seq_g_5:2;
        RBus_UInt32  main_dither_seq_g_4:2;
        RBus_UInt32  main_dither_seq_g_3:2;
        RBus_UInt32  main_dither_seq_g_2:2;
        RBus_UInt32  main_dither_seq_g_1:2;
        RBus_UInt32  main_dither_seq_g_0:2;
    };
}main_dither_i_main_dither_seq_g_00_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_seq_g_31:2;
        RBus_UInt32  main_dither_seq_g_30:2;
        RBus_UInt32  main_dither_seq_g_29:2;
        RBus_UInt32  main_dither_seq_g_28:2;
        RBus_UInt32  main_dither_seq_g_27:2;
        RBus_UInt32  main_dither_seq_g_26:2;
        RBus_UInt32  main_dither_seq_g_25:2;
        RBus_UInt32  main_dither_seq_g_24:2;
        RBus_UInt32  main_dither_seq_g_23:2;
        RBus_UInt32  main_dither_seq_g_22:2;
        RBus_UInt32  main_dither_seq_g_21:2;
        RBus_UInt32  main_dither_seq_g_20:2;
        RBus_UInt32  main_dither_seq_g_19:2;
        RBus_UInt32  main_dither_seq_g_18:2;
        RBus_UInt32  main_dither_seq_g_17:2;
        RBus_UInt32  main_dither_seq_g_16:2;
    };
}main_dither_i_main_dither_seq_g_16_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_seq_b_15:2;
        RBus_UInt32  main_dither_seq_b_14:2;
        RBus_UInt32  main_dither_seq_b_13:2;
        RBus_UInt32  main_dither_seq_b_12:2;
        RBus_UInt32  main_dither_seq_b_11:2;
        RBus_UInt32  main_dither_seq_b_10:2;
        RBus_UInt32  main_dither_seq_b_9:2;
        RBus_UInt32  main_dither_seq_b_8:2;
        RBus_UInt32  main_dither_seq_b_7:2;
        RBus_UInt32  main_dither_seq_b_6:2;
        RBus_UInt32  main_dither_seq_b_5:2;
        RBus_UInt32  main_dither_seq_b_4:2;
        RBus_UInt32  main_dither_seq_b_3:2;
        RBus_UInt32  main_dither_seq_b_2:2;
        RBus_UInt32  main_dither_seq_b_1:2;
        RBus_UInt32  main_dither_seq_b_0:2;
    };
}main_dither_i_main_dither_seq_b_00_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_seq_b_31:2;
        RBus_UInt32  main_dither_seq_b_30:2;
        RBus_UInt32  main_dither_seq_b_29:2;
        RBus_UInt32  main_dither_seq_b_28:2;
        RBus_UInt32  main_dither_seq_b_27:2;
        RBus_UInt32  main_dither_seq_b_26:2;
        RBus_UInt32  main_dither_seq_b_25:2;
        RBus_UInt32  main_dither_seq_b_24:2;
        RBus_UInt32  main_dither_seq_b_23:2;
        RBus_UInt32  main_dither_seq_b_22:2;
        RBus_UInt32  main_dither_seq_b_21:2;
        RBus_UInt32  main_dither_seq_b_20:2;
        RBus_UInt32  main_dither_seq_b_19:2;
        RBus_UInt32  main_dither_seq_b_18:2;
        RBus_UInt32  main_dither_seq_b_17:2;
        RBus_UInt32  main_dither_seq_b_16:2;
    };
}main_dither_i_main_dither_seq_b_16_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_tab_r_13:4;
        RBus_UInt32  main_dither_tab_r_12:4;
        RBus_UInt32  main_dither_tab_r_11:4;
        RBus_UInt32  main_dither_tab_r_10:4;
        RBus_UInt32  main_dither_tab_r_03:4;
        RBus_UInt32  main_dither_tab_r_02:4;
        RBus_UInt32  main_dither_tab_r_01:4;
        RBus_UInt32  main_dither_tab_r_00:4;
    };
}main_dither_i_main_dither_tb_r_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_tab_r_33:4;
        RBus_UInt32  main_dither_tab_r_32:4;
        RBus_UInt32  main_dither_tab_r_31:4;
        RBus_UInt32  main_dither_tab_r_30:4;
        RBus_UInt32  main_dither_tab_r_23:4;
        RBus_UInt32  main_dither_tab_r_22:4;
        RBus_UInt32  main_dither_tab_r_21:4;
        RBus_UInt32  main_dither_tab_r_20:4;
    };
}main_dither_i_main_dither_tb_r_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_tab_g_13:4;
        RBus_UInt32  main_dither_tab_g_12:4;
        RBus_UInt32  main_dither_tab_g_11:4;
        RBus_UInt32  main_dither_tab_g_10:4;
        RBus_UInt32  main_dither_tab_g_03:4;
        RBus_UInt32  main_dither_tab_g_02:4;
        RBus_UInt32  main_dither_tab_g_01:4;
        RBus_UInt32  main_dither_tab_g_00:4;
    };
}main_dither_i_main_dither_tb_g_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_tab_g_33:4;
        RBus_UInt32  main_dither_tab_g_32:4;
        RBus_UInt32  main_dither_tab_g_31:4;
        RBus_UInt32  main_dither_tab_g_30:4;
        RBus_UInt32  main_dither_tab_g_23:4;
        RBus_UInt32  main_dither_tab_g_22:4;
        RBus_UInt32  main_dither_tab_g_21:4;
        RBus_UInt32  main_dither_tab_g_20:4;
    };
}main_dither_i_main_dither_tb_g_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_tab_b_13:4;
        RBus_UInt32  main_dither_tab_b_12:4;
        RBus_UInt32  main_dither_tab_b_11:4;
        RBus_UInt32  main_dither_tab_b_10:4;
        RBus_UInt32  main_dither_tab_b_03:4;
        RBus_UInt32  main_dither_tab_b_02:4;
        RBus_UInt32  main_dither_tab_b_01:4;
        RBus_UInt32  main_dither_tab_b_00:4;
    };
}main_dither_i_main_dither_tb_b_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_tab_b_33:4;
        RBus_UInt32  main_dither_tab_b_32:4;
        RBus_UInt32  main_dither_tab_b_31:4;
        RBus_UInt32  main_dither_tab_b_30:4;
        RBus_UInt32  main_dither_tab_b_23:4;
        RBus_UInt32  main_dither_tab_b_22:4;
        RBus_UInt32  main_dither_tab_b_21:4;
        RBus_UInt32  main_dither_tab_b_20:4;
    };
}main_dither_i_main_dither_tb_b_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_tab_temp_offset_15:2;
        RBus_UInt32  main_dither_tab_temp_offset_14:2;
        RBus_UInt32  main_dither_tab_temp_offset_13:2;
        RBus_UInt32  main_dither_tab_temp_offset_12:2;
        RBus_UInt32  main_dither_tab_temp_offset_11:2;
        RBus_UInt32  main_dither_tab_temp_offset_10:2;
        RBus_UInt32  main_dither_tab_temp_offset_9:2;
        RBus_UInt32  main_dither_tab_temp_offset_8:2;
        RBus_UInt32  main_dither_tab_temp_offset_7:2;
        RBus_UInt32  main_dither_tab_temp_offset_6:2;
        RBus_UInt32  main_dither_tab_temp_offset_5:2;
        RBus_UInt32  main_dither_tab_temp_offset_4:2;
        RBus_UInt32  main_dither_tab_temp_offset_3:2;
        RBus_UInt32  main_dither_tab_temp_offset_2:2;
        RBus_UInt32  main_dither_tab_temp_offset_1:2;
        RBus_UInt32  main_dither_tab_temp_offset_0:2;
    };
}main_dither_i_main_dither_temp_tb_RBUS;

#else //apply LITTLE_ENDIAN

//======MAIN_DITHER register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_dither_value_sign:1;
        RBus_UInt32  main_dither_temporal_enable:1;
        RBus_UInt32  main_dither_en:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  main_dither_bit_sel:1;
        RBus_UInt32  res3:21;
    };
}main_dither_i_main_dither_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_seq_r_0:2;
        RBus_UInt32  main_dither_seq_r_1:2;
        RBus_UInt32  main_dither_seq_r_2:2;
        RBus_UInt32  main_dither_seq_r_3:2;
        RBus_UInt32  main_dither_seq_r_4:2;
        RBus_UInt32  main_dither_seq_r_5:2;
        RBus_UInt32  main_dither_seq_r_6:2;
        RBus_UInt32  main_dither_seq_r_7:2;
        RBus_UInt32  main_dither_seq_r_8:2;
        RBus_UInt32  main_dither_seq_r_9:2;
        RBus_UInt32  main_dither_seq_r_10:2;
        RBus_UInt32  main_dither_seq_r_11:2;
        RBus_UInt32  main_dither_seq_r_12:2;
        RBus_UInt32  main_dither_seq_r_13:2;
        RBus_UInt32  main_dither_seq_r_14:2;
        RBus_UInt32  main_dither_seq_r_15:2;
    };
}main_dither_i_main_dither_seq_r_00_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_seq_r_16:2;
        RBus_UInt32  main_dither_seq_r_17:2;
        RBus_UInt32  main_dither_seq_r_18:2;
        RBus_UInt32  main_dither_seq_r_19:2;
        RBus_UInt32  main_dither_seq_r_20:2;
        RBus_UInt32  main_dither_seq_r_21:2;
        RBus_UInt32  main_dither_seq_r_22:2;
        RBus_UInt32  main_dither_seq_r_23:2;
        RBus_UInt32  main_dither_seq_r_24:2;
        RBus_UInt32  main_dither_seq_r_25:2;
        RBus_UInt32  main_dither_seq_r_26:2;
        RBus_UInt32  main_dither_seq_r_27:2;
        RBus_UInt32  main_dither_seq_r_28:2;
        RBus_UInt32  main_dither_seq_r_29:2;
        RBus_UInt32  main_dither_seq_r_30:2;
        RBus_UInt32  main_dither_seq_r_31:2;
    };
}main_dither_i_main_dither_seq_r_16_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_seq_g_0:2;
        RBus_UInt32  main_dither_seq_g_1:2;
        RBus_UInt32  main_dither_seq_g_2:2;
        RBus_UInt32  main_dither_seq_g_3:2;
        RBus_UInt32  main_dither_seq_g_4:2;
        RBus_UInt32  main_dither_seq_g_5:2;
        RBus_UInt32  main_dither_seq_g_6:2;
        RBus_UInt32  main_dither_seq_g_7:2;
        RBus_UInt32  main_dither_seq_g_8:2;
        RBus_UInt32  main_dither_seq_g_9:2;
        RBus_UInt32  main_dither_seq_g_10:2;
        RBus_UInt32  main_dither_seq_g_11:2;
        RBus_UInt32  main_dither_seq_g_12:2;
        RBus_UInt32  main_dither_seq_g_13:2;
        RBus_UInt32  main_dither_seq_g_14:2;
        RBus_UInt32  main_dither_seq_g_15:2;
    };
}main_dither_i_main_dither_seq_g_00_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_seq_g_16:2;
        RBus_UInt32  main_dither_seq_g_17:2;
        RBus_UInt32  main_dither_seq_g_18:2;
        RBus_UInt32  main_dither_seq_g_19:2;
        RBus_UInt32  main_dither_seq_g_20:2;
        RBus_UInt32  main_dither_seq_g_21:2;
        RBus_UInt32  main_dither_seq_g_22:2;
        RBus_UInt32  main_dither_seq_g_23:2;
        RBus_UInt32  main_dither_seq_g_24:2;
        RBus_UInt32  main_dither_seq_g_25:2;
        RBus_UInt32  main_dither_seq_g_26:2;
        RBus_UInt32  main_dither_seq_g_27:2;
        RBus_UInt32  main_dither_seq_g_28:2;
        RBus_UInt32  main_dither_seq_g_29:2;
        RBus_UInt32  main_dither_seq_g_30:2;
        RBus_UInt32  main_dither_seq_g_31:2;
    };
}main_dither_i_main_dither_seq_g_16_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_seq_b_0:2;
        RBus_UInt32  main_dither_seq_b_1:2;
        RBus_UInt32  main_dither_seq_b_2:2;
        RBus_UInt32  main_dither_seq_b_3:2;
        RBus_UInt32  main_dither_seq_b_4:2;
        RBus_UInt32  main_dither_seq_b_5:2;
        RBus_UInt32  main_dither_seq_b_6:2;
        RBus_UInt32  main_dither_seq_b_7:2;
        RBus_UInt32  main_dither_seq_b_8:2;
        RBus_UInt32  main_dither_seq_b_9:2;
        RBus_UInt32  main_dither_seq_b_10:2;
        RBus_UInt32  main_dither_seq_b_11:2;
        RBus_UInt32  main_dither_seq_b_12:2;
        RBus_UInt32  main_dither_seq_b_13:2;
        RBus_UInt32  main_dither_seq_b_14:2;
        RBus_UInt32  main_dither_seq_b_15:2;
    };
}main_dither_i_main_dither_seq_b_00_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_seq_b_16:2;
        RBus_UInt32  main_dither_seq_b_17:2;
        RBus_UInt32  main_dither_seq_b_18:2;
        RBus_UInt32  main_dither_seq_b_19:2;
        RBus_UInt32  main_dither_seq_b_20:2;
        RBus_UInt32  main_dither_seq_b_21:2;
        RBus_UInt32  main_dither_seq_b_22:2;
        RBus_UInt32  main_dither_seq_b_23:2;
        RBus_UInt32  main_dither_seq_b_24:2;
        RBus_UInt32  main_dither_seq_b_25:2;
        RBus_UInt32  main_dither_seq_b_26:2;
        RBus_UInt32  main_dither_seq_b_27:2;
        RBus_UInt32  main_dither_seq_b_28:2;
        RBus_UInt32  main_dither_seq_b_29:2;
        RBus_UInt32  main_dither_seq_b_30:2;
        RBus_UInt32  main_dither_seq_b_31:2;
    };
}main_dither_i_main_dither_seq_b_16_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_tab_r_00:4;
        RBus_UInt32  main_dither_tab_r_01:4;
        RBus_UInt32  main_dither_tab_r_02:4;
        RBus_UInt32  main_dither_tab_r_03:4;
        RBus_UInt32  main_dither_tab_r_10:4;
        RBus_UInt32  main_dither_tab_r_11:4;
        RBus_UInt32  main_dither_tab_r_12:4;
        RBus_UInt32  main_dither_tab_r_13:4;
    };
}main_dither_i_main_dither_tb_r_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_tab_r_20:4;
        RBus_UInt32  main_dither_tab_r_21:4;
        RBus_UInt32  main_dither_tab_r_22:4;
        RBus_UInt32  main_dither_tab_r_23:4;
        RBus_UInt32  main_dither_tab_r_30:4;
        RBus_UInt32  main_dither_tab_r_31:4;
        RBus_UInt32  main_dither_tab_r_32:4;
        RBus_UInt32  main_dither_tab_r_33:4;
    };
}main_dither_i_main_dither_tb_r_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_tab_g_00:4;
        RBus_UInt32  main_dither_tab_g_01:4;
        RBus_UInt32  main_dither_tab_g_02:4;
        RBus_UInt32  main_dither_tab_g_03:4;
        RBus_UInt32  main_dither_tab_g_10:4;
        RBus_UInt32  main_dither_tab_g_11:4;
        RBus_UInt32  main_dither_tab_g_12:4;
        RBus_UInt32  main_dither_tab_g_13:4;
    };
}main_dither_i_main_dither_tb_g_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_tab_g_20:4;
        RBus_UInt32  main_dither_tab_g_21:4;
        RBus_UInt32  main_dither_tab_g_22:4;
        RBus_UInt32  main_dither_tab_g_23:4;
        RBus_UInt32  main_dither_tab_g_30:4;
        RBus_UInt32  main_dither_tab_g_31:4;
        RBus_UInt32  main_dither_tab_g_32:4;
        RBus_UInt32  main_dither_tab_g_33:4;
    };
}main_dither_i_main_dither_tb_g_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_tab_b_00:4;
        RBus_UInt32  main_dither_tab_b_01:4;
        RBus_UInt32  main_dither_tab_b_02:4;
        RBus_UInt32  main_dither_tab_b_03:4;
        RBus_UInt32  main_dither_tab_b_10:4;
        RBus_UInt32  main_dither_tab_b_11:4;
        RBus_UInt32  main_dither_tab_b_12:4;
        RBus_UInt32  main_dither_tab_b_13:4;
    };
}main_dither_i_main_dither_tb_b_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_tab_b_20:4;
        RBus_UInt32  main_dither_tab_b_21:4;
        RBus_UInt32  main_dither_tab_b_22:4;
        RBus_UInt32  main_dither_tab_b_23:4;
        RBus_UInt32  main_dither_tab_b_30:4;
        RBus_UInt32  main_dither_tab_b_31:4;
        RBus_UInt32  main_dither_tab_b_32:4;
        RBus_UInt32  main_dither_tab_b_33:4;
    };
}main_dither_i_main_dither_tb_b_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dither_tab_temp_offset_0:2;
        RBus_UInt32  main_dither_tab_temp_offset_1:2;
        RBus_UInt32  main_dither_tab_temp_offset_2:2;
        RBus_UInt32  main_dither_tab_temp_offset_3:2;
        RBus_UInt32  main_dither_tab_temp_offset_4:2;
        RBus_UInt32  main_dither_tab_temp_offset_5:2;
        RBus_UInt32  main_dither_tab_temp_offset_6:2;
        RBus_UInt32  main_dither_tab_temp_offset_7:2;
        RBus_UInt32  main_dither_tab_temp_offset_8:2;
        RBus_UInt32  main_dither_tab_temp_offset_9:2;
        RBus_UInt32  main_dither_tab_temp_offset_10:2;
        RBus_UInt32  main_dither_tab_temp_offset_11:2;
        RBus_UInt32  main_dither_tab_temp_offset_12:2;
        RBus_UInt32  main_dither_tab_temp_offset_13:2;
        RBus_UInt32  main_dither_tab_temp_offset_14:2;
        RBus_UInt32  main_dither_tab_temp_offset_15:2;
    };
}main_dither_i_main_dither_temp_tb_RBUS;




#endif 


#endif 
