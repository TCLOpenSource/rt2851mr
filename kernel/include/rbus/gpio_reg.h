/**
* @file Merlin5-DesignSpec-ISO_MISC_GPIO
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_GPIO_REG_H_
#define _RBUS_GPIO_REG_H_

#include "rbus_types.h"



//  GPIO Register Address
#define  GPIO_GPDIR                                                             0x18061100
#define  GPIO_GPDIR_reg_addr                                                     "0xB8061100"
#define  GPIO_GPDIR_reg                                                          0xB8061100
#define  GPIO_GPDIR_inst_addr                                                    "0x0000"
#define  set_GPIO_GPDIR_reg(data)                                                (*((volatile unsigned int*)GPIO_GPDIR_reg)=data)
#define  get_GPIO_GPDIR_reg                                                      (*((volatile unsigned int*)GPIO_GPDIR_reg))
#define  GPIO_GPDIR_gpdir30_shift                                                (31)
#define  GPIO_GPDIR_gpdir29_shift                                                (30)
#define  GPIO_GPDIR_gpdir28_shift                                                (29)
#define  GPIO_GPDIR_gpdir27_shift                                                (28)
#define  GPIO_GPDIR_gpdir26_shift                                                (27)
#define  GPIO_GPDIR_gpdir25_shift                                                (26)
#define  GPIO_GPDIR_gpdir24_shift                                                (25)
#define  GPIO_GPDIR_gpdir23_shift                                                (24)
#define  GPIO_GPDIR_gpdir22_shift                                                (23)
#define  GPIO_GPDIR_gpdir21_shift                                                (22)
#define  GPIO_GPDIR_gpdir20_shift                                                (21)
#define  GPIO_GPDIR_gpdir19_shift                                                (20)
#define  GPIO_GPDIR_gpdir18_shift                                                (19)
#define  GPIO_GPDIR_gpdir17_shift                                                (18)
#define  GPIO_GPDIR_gpdir16_shift                                                (17)
#define  GPIO_GPDIR_gpdir15_shift                                                (16)
#define  GPIO_GPDIR_gpdir14_shift                                                (15)
#define  GPIO_GPDIR_gpdir13_shift                                                (14)
#define  GPIO_GPDIR_gpdir12_shift                                                (13)
#define  GPIO_GPDIR_gpdir11_shift                                                (12)
#define  GPIO_GPDIR_gpdir10_shift                                                (11)
#define  GPIO_GPDIR_gpdir9_shift                                                 (10)
#define  GPIO_GPDIR_gpdir8_shift                                                 (9)
#define  GPIO_GPDIR_gpdir7_shift                                                 (8)
#define  GPIO_GPDIR_gpdir6_shift                                                 (7)
#define  GPIO_GPDIR_gpdir5_shift                                                 (6)
#define  GPIO_GPDIR_gpdir4_shift                                                 (5)
#define  GPIO_GPDIR_gpdir3_shift                                                 (4)
#define  GPIO_GPDIR_gpdir2_shift                                                 (3)
#define  GPIO_GPDIR_gpdir1_shift                                                 (2)
#define  GPIO_GPDIR_gpdir0_shift                                                 (1)
#define  GPIO_GPDIR_write_data_shift                                             (0)
#define  GPIO_GPDIR_gpdir30_mask                                                 (0x80000000)
#define  GPIO_GPDIR_gpdir29_mask                                                 (0x40000000)
#define  GPIO_GPDIR_gpdir28_mask                                                 (0x20000000)
#define  GPIO_GPDIR_gpdir27_mask                                                 (0x10000000)
#define  GPIO_GPDIR_gpdir26_mask                                                 (0x08000000)
#define  GPIO_GPDIR_gpdir25_mask                                                 (0x04000000)
#define  GPIO_GPDIR_gpdir24_mask                                                 (0x02000000)
#define  GPIO_GPDIR_gpdir23_mask                                                 (0x01000000)
#define  GPIO_GPDIR_gpdir22_mask                                                 (0x00800000)
#define  GPIO_GPDIR_gpdir21_mask                                                 (0x00400000)
#define  GPIO_GPDIR_gpdir20_mask                                                 (0x00200000)
#define  GPIO_GPDIR_gpdir19_mask                                                 (0x00100000)
#define  GPIO_GPDIR_gpdir18_mask                                                 (0x00080000)
#define  GPIO_GPDIR_gpdir17_mask                                                 (0x00040000)
#define  GPIO_GPDIR_gpdir16_mask                                                 (0x00020000)
#define  GPIO_GPDIR_gpdir15_mask                                                 (0x00010000)
#define  GPIO_GPDIR_gpdir14_mask                                                 (0x00008000)
#define  GPIO_GPDIR_gpdir13_mask                                                 (0x00004000)
#define  GPIO_GPDIR_gpdir12_mask                                                 (0x00002000)
#define  GPIO_GPDIR_gpdir11_mask                                                 (0x00001000)
#define  GPIO_GPDIR_gpdir10_mask                                                 (0x00000800)
#define  GPIO_GPDIR_gpdir9_mask                                                  (0x00000400)
#define  GPIO_GPDIR_gpdir8_mask                                                  (0x00000200)
#define  GPIO_GPDIR_gpdir7_mask                                                  (0x00000100)
#define  GPIO_GPDIR_gpdir6_mask                                                  (0x00000080)
#define  GPIO_GPDIR_gpdir5_mask                                                  (0x00000040)
#define  GPIO_GPDIR_gpdir4_mask                                                  (0x00000020)
#define  GPIO_GPDIR_gpdir3_mask                                                  (0x00000010)
#define  GPIO_GPDIR_gpdir2_mask                                                  (0x00000008)
#define  GPIO_GPDIR_gpdir1_mask                                                  (0x00000004)
#define  GPIO_GPDIR_gpdir0_mask                                                  (0x00000002)
#define  GPIO_GPDIR_write_data_mask                                              (0x00000001)
#define  GPIO_GPDIR_gpdir30(data)                                                (0x80000000&((data)<<31))
#define  GPIO_GPDIR_gpdir29(data)                                                (0x40000000&((data)<<30))
#define  GPIO_GPDIR_gpdir28(data)                                                (0x20000000&((data)<<29))
#define  GPIO_GPDIR_gpdir27(data)                                                (0x10000000&((data)<<28))
#define  GPIO_GPDIR_gpdir26(data)                                                (0x08000000&((data)<<27))
#define  GPIO_GPDIR_gpdir25(data)                                                (0x04000000&((data)<<26))
#define  GPIO_GPDIR_gpdir24(data)                                                (0x02000000&((data)<<25))
#define  GPIO_GPDIR_gpdir23(data)                                                (0x01000000&((data)<<24))
#define  GPIO_GPDIR_gpdir22(data)                                                (0x00800000&((data)<<23))
#define  GPIO_GPDIR_gpdir21(data)                                                (0x00400000&((data)<<22))
#define  GPIO_GPDIR_gpdir20(data)                                                (0x00200000&((data)<<21))
#define  GPIO_GPDIR_gpdir19(data)                                                (0x00100000&((data)<<20))
#define  GPIO_GPDIR_gpdir18(data)                                                (0x00080000&((data)<<19))
#define  GPIO_GPDIR_gpdir17(data)                                                (0x00040000&((data)<<18))
#define  GPIO_GPDIR_gpdir16(data)                                                (0x00020000&((data)<<17))
#define  GPIO_GPDIR_gpdir15(data)                                                (0x00010000&((data)<<16))
#define  GPIO_GPDIR_gpdir14(data)                                                (0x00008000&((data)<<15))
#define  GPIO_GPDIR_gpdir13(data)                                                (0x00004000&((data)<<14))
#define  GPIO_GPDIR_gpdir12(data)                                                (0x00002000&((data)<<13))
#define  GPIO_GPDIR_gpdir11(data)                                                (0x00001000&((data)<<12))
#define  GPIO_GPDIR_gpdir10(data)                                                (0x00000800&((data)<<11))
#define  GPIO_GPDIR_gpdir9(data)                                                 (0x00000400&((data)<<10))
#define  GPIO_GPDIR_gpdir8(data)                                                 (0x00000200&((data)<<9))
#define  GPIO_GPDIR_gpdir7(data)                                                 (0x00000100&((data)<<8))
#define  GPIO_GPDIR_gpdir6(data)                                                 (0x00000080&((data)<<7))
#define  GPIO_GPDIR_gpdir5(data)                                                 (0x00000040&((data)<<6))
#define  GPIO_GPDIR_gpdir4(data)                                                 (0x00000020&((data)<<5))
#define  GPIO_GPDIR_gpdir3(data)                                                 (0x00000010&((data)<<4))
#define  GPIO_GPDIR_gpdir2(data)                                                 (0x00000008&((data)<<3))
#define  GPIO_GPDIR_gpdir1(data)                                                 (0x00000004&((data)<<2))
#define  GPIO_GPDIR_gpdir0(data)                                                 (0x00000002&((data)<<1))
#define  GPIO_GPDIR_write_data(data)                                             (0x00000001&(data))
#define  GPIO_GPDIR_get_gpdir30(data)                                            ((0x80000000&(data))>>31)
#define  GPIO_GPDIR_get_gpdir29(data)                                            ((0x40000000&(data))>>30)
#define  GPIO_GPDIR_get_gpdir28(data)                                            ((0x20000000&(data))>>29)
#define  GPIO_GPDIR_get_gpdir27(data)                                            ((0x10000000&(data))>>28)
#define  GPIO_GPDIR_get_gpdir26(data)                                            ((0x08000000&(data))>>27)
#define  GPIO_GPDIR_get_gpdir25(data)                                            ((0x04000000&(data))>>26)
#define  GPIO_GPDIR_get_gpdir24(data)                                            ((0x02000000&(data))>>25)
#define  GPIO_GPDIR_get_gpdir23(data)                                            ((0x01000000&(data))>>24)
#define  GPIO_GPDIR_get_gpdir22(data)                                            ((0x00800000&(data))>>23)
#define  GPIO_GPDIR_get_gpdir21(data)                                            ((0x00400000&(data))>>22)
#define  GPIO_GPDIR_get_gpdir20(data)                                            ((0x00200000&(data))>>21)
#define  GPIO_GPDIR_get_gpdir19(data)                                            ((0x00100000&(data))>>20)
#define  GPIO_GPDIR_get_gpdir18(data)                                            ((0x00080000&(data))>>19)
#define  GPIO_GPDIR_get_gpdir17(data)                                            ((0x00040000&(data))>>18)
#define  GPIO_GPDIR_get_gpdir16(data)                                            ((0x00020000&(data))>>17)
#define  GPIO_GPDIR_get_gpdir15(data)                                            ((0x00010000&(data))>>16)
#define  GPIO_GPDIR_get_gpdir14(data)                                            ((0x00008000&(data))>>15)
#define  GPIO_GPDIR_get_gpdir13(data)                                            ((0x00004000&(data))>>14)
#define  GPIO_GPDIR_get_gpdir12(data)                                            ((0x00002000&(data))>>13)
#define  GPIO_GPDIR_get_gpdir11(data)                                            ((0x00001000&(data))>>12)
#define  GPIO_GPDIR_get_gpdir10(data)                                            ((0x00000800&(data))>>11)
#define  GPIO_GPDIR_get_gpdir9(data)                                             ((0x00000400&(data))>>10)
#define  GPIO_GPDIR_get_gpdir8(data)                                             ((0x00000200&(data))>>9)
#define  GPIO_GPDIR_get_gpdir7(data)                                             ((0x00000100&(data))>>8)
#define  GPIO_GPDIR_get_gpdir6(data)                                             ((0x00000080&(data))>>7)
#define  GPIO_GPDIR_get_gpdir5(data)                                             ((0x00000040&(data))>>6)
#define  GPIO_GPDIR_get_gpdir4(data)                                             ((0x00000020&(data))>>5)
#define  GPIO_GPDIR_get_gpdir3(data)                                             ((0x00000010&(data))>>4)
#define  GPIO_GPDIR_get_gpdir2(data)                                             ((0x00000008&(data))>>3)
#define  GPIO_GPDIR_get_gpdir1(data)                                             ((0x00000004&(data))>>2)
#define  GPIO_GPDIR_get_gpdir0(data)                                             ((0x00000002&(data))>>1)
#define  GPIO_GPDIR_get_write_data(data)                                         (0x00000001&(data))

#define  GPIO_GPDIR_1                                                           0x18061104
#define  GPIO_GPDIR_1_reg_addr                                                   "0xB8061104"
#define  GPIO_GPDIR_1_reg                                                        0xB8061104
#define  GPIO_GPDIR_1_inst_addr                                                  "0x0001"
#define  set_GPIO_GPDIR_1_reg(data)                                              (*((volatile unsigned int*)GPIO_GPDIR_1_reg)=data)
#define  get_GPIO_GPDIR_1_reg                                                    (*((volatile unsigned int*)GPIO_GPDIR_1_reg))
#define  GPIO_GPDIR_1_gpdir60_shift                                              (30)
#define  GPIO_GPDIR_1_gpdir59_shift                                              (29)
#define  GPIO_GPDIR_1_gpdir58_shift                                              (28)
#define  GPIO_GPDIR_1_gpdir57_shift                                              (27)
#define  GPIO_GPDIR_1_gpdir56_shift                                              (26)
#define  GPIO_GPDIR_1_gpdir55_shift                                              (25)
#define  GPIO_GPDIR_1_gpdir54_shift                                              (24)
#define  GPIO_GPDIR_1_gpdir53_shift                                              (23)
#define  GPIO_GPDIR_1_gpdir52_shift                                              (22)
#define  GPIO_GPDIR_1_gpdir51_shift                                              (21)
#define  GPIO_GPDIR_1_gpdir50_shift                                              (20)
#define  GPIO_GPDIR_1_gpdir49_shift                                              (19)
#define  GPIO_GPDIR_1_gpdir48_shift                                              (18)
#define  GPIO_GPDIR_1_gpdir47_shift                                              (17)
#define  GPIO_GPDIR_1_gpdir46_shift                                              (16)
#define  GPIO_GPDIR_1_gpdir45_shift                                              (15)
#define  GPIO_GPDIR_1_gpdir44_shift                                              (14)
#define  GPIO_GPDIR_1_gpdir43_shift                                              (13)
#define  GPIO_GPDIR_1_gpdir42_shift                                              (12)
#define  GPIO_GPDIR_1_gpdir41_shift                                              (11)
#define  GPIO_GPDIR_1_gpdir40_shift                                              (10)
#define  GPIO_GPDIR_1_gpdir39_shift                                              (9)
#define  GPIO_GPDIR_1_gpdir38_shift                                              (8)
#define  GPIO_GPDIR_1_gpdir37_shift                                              (7)
#define  GPIO_GPDIR_1_gpdir36_shift                                              (6)
#define  GPIO_GPDIR_1_gpdir35_shift                                              (5)
#define  GPIO_GPDIR_1_gpdir34_shift                                              (4)
#define  GPIO_GPDIR_1_gpdir33_shift                                              (3)
#define  GPIO_GPDIR_1_gpdir32_shift                                              (2)
#define  GPIO_GPDIR_1_gpdir31_shift                                              (1)
#define  GPIO_GPDIR_1_write_data_shift                                           (0)
#define  GPIO_GPDIR_1_gpdir60_mask                                               (0x40000000)
#define  GPIO_GPDIR_1_gpdir59_mask                                               (0x20000000)
#define  GPIO_GPDIR_1_gpdir58_mask                                               (0x10000000)
#define  GPIO_GPDIR_1_gpdir57_mask                                               (0x08000000)
#define  GPIO_GPDIR_1_gpdir56_mask                                               (0x04000000)
#define  GPIO_GPDIR_1_gpdir55_mask                                               (0x02000000)
#define  GPIO_GPDIR_1_gpdir54_mask                                               (0x01000000)
#define  GPIO_GPDIR_1_gpdir53_mask                                               (0x00800000)
#define  GPIO_GPDIR_1_gpdir52_mask                                               (0x00400000)
#define  GPIO_GPDIR_1_gpdir51_mask                                               (0x00200000)
#define  GPIO_GPDIR_1_gpdir50_mask                                               (0x00100000)
#define  GPIO_GPDIR_1_gpdir49_mask                                               (0x00080000)
#define  GPIO_GPDIR_1_gpdir48_mask                                               (0x00040000)
#define  GPIO_GPDIR_1_gpdir47_mask                                               (0x00020000)
#define  GPIO_GPDIR_1_gpdir46_mask                                               (0x00010000)
#define  GPIO_GPDIR_1_gpdir45_mask                                               (0x00008000)
#define  GPIO_GPDIR_1_gpdir44_mask                                               (0x00004000)
#define  GPIO_GPDIR_1_gpdir43_mask                                               (0x00002000)
#define  GPIO_GPDIR_1_gpdir42_mask                                               (0x00001000)
#define  GPIO_GPDIR_1_gpdir41_mask                                               (0x00000800)
#define  GPIO_GPDIR_1_gpdir40_mask                                               (0x00000400)
#define  GPIO_GPDIR_1_gpdir39_mask                                               (0x00000200)
#define  GPIO_GPDIR_1_gpdir38_mask                                               (0x00000100)
#define  GPIO_GPDIR_1_gpdir37_mask                                               (0x00000080)
#define  GPIO_GPDIR_1_gpdir36_mask                                               (0x00000040)
#define  GPIO_GPDIR_1_gpdir35_mask                                               (0x00000020)
#define  GPIO_GPDIR_1_gpdir34_mask                                               (0x00000010)
#define  GPIO_GPDIR_1_gpdir33_mask                                               (0x00000008)
#define  GPIO_GPDIR_1_gpdir32_mask                                               (0x00000004)
#define  GPIO_GPDIR_1_gpdir31_mask                                               (0x00000002)
#define  GPIO_GPDIR_1_write_data_mask                                            (0x00000001)
#define  GPIO_GPDIR_1_gpdir60(data)                                              (0x40000000&((data)<<30))
#define  GPIO_GPDIR_1_gpdir59(data)                                              (0x20000000&((data)<<29))
#define  GPIO_GPDIR_1_gpdir58(data)                                              (0x10000000&((data)<<28))
#define  GPIO_GPDIR_1_gpdir57(data)                                              (0x08000000&((data)<<27))
#define  GPIO_GPDIR_1_gpdir56(data)                                              (0x04000000&((data)<<26))
#define  GPIO_GPDIR_1_gpdir55(data)                                              (0x02000000&((data)<<25))
#define  GPIO_GPDIR_1_gpdir54(data)                                              (0x01000000&((data)<<24))
#define  GPIO_GPDIR_1_gpdir53(data)                                              (0x00800000&((data)<<23))
#define  GPIO_GPDIR_1_gpdir52(data)                                              (0x00400000&((data)<<22))
#define  GPIO_GPDIR_1_gpdir51(data)                                              (0x00200000&((data)<<21))
#define  GPIO_GPDIR_1_gpdir50(data)                                              (0x00100000&((data)<<20))
#define  GPIO_GPDIR_1_gpdir49(data)                                              (0x00080000&((data)<<19))
#define  GPIO_GPDIR_1_gpdir48(data)                                              (0x00040000&((data)<<18))
#define  GPIO_GPDIR_1_gpdir47(data)                                              (0x00020000&((data)<<17))
#define  GPIO_GPDIR_1_gpdir46(data)                                              (0x00010000&((data)<<16))
#define  GPIO_GPDIR_1_gpdir45(data)                                              (0x00008000&((data)<<15))
#define  GPIO_GPDIR_1_gpdir44(data)                                              (0x00004000&((data)<<14))
#define  GPIO_GPDIR_1_gpdir43(data)                                              (0x00002000&((data)<<13))
#define  GPIO_GPDIR_1_gpdir42(data)                                              (0x00001000&((data)<<12))
#define  GPIO_GPDIR_1_gpdir41(data)                                              (0x00000800&((data)<<11))
#define  GPIO_GPDIR_1_gpdir40(data)                                              (0x00000400&((data)<<10))
#define  GPIO_GPDIR_1_gpdir39(data)                                              (0x00000200&((data)<<9))
#define  GPIO_GPDIR_1_gpdir38(data)                                              (0x00000100&((data)<<8))
#define  GPIO_GPDIR_1_gpdir37(data)                                              (0x00000080&((data)<<7))
#define  GPIO_GPDIR_1_gpdir36(data)                                              (0x00000040&((data)<<6))
#define  GPIO_GPDIR_1_gpdir35(data)                                              (0x00000020&((data)<<5))
#define  GPIO_GPDIR_1_gpdir34(data)                                              (0x00000010&((data)<<4))
#define  GPIO_GPDIR_1_gpdir33(data)                                              (0x00000008&((data)<<3))
#define  GPIO_GPDIR_1_gpdir32(data)                                              (0x00000004&((data)<<2))
#define  GPIO_GPDIR_1_gpdir31(data)                                              (0x00000002&((data)<<1))
#define  GPIO_GPDIR_1_write_data(data)                                           (0x00000001&(data))
#define  GPIO_GPDIR_1_get_gpdir60(data)                                          ((0x40000000&(data))>>30)
#define  GPIO_GPDIR_1_get_gpdir59(data)                                          ((0x20000000&(data))>>29)
#define  GPIO_GPDIR_1_get_gpdir58(data)                                          ((0x10000000&(data))>>28)
#define  GPIO_GPDIR_1_get_gpdir57(data)                                          ((0x08000000&(data))>>27)
#define  GPIO_GPDIR_1_get_gpdir56(data)                                          ((0x04000000&(data))>>26)
#define  GPIO_GPDIR_1_get_gpdir55(data)                                          ((0x02000000&(data))>>25)
#define  GPIO_GPDIR_1_get_gpdir54(data)                                          ((0x01000000&(data))>>24)
#define  GPIO_GPDIR_1_get_gpdir53(data)                                          ((0x00800000&(data))>>23)
#define  GPIO_GPDIR_1_get_gpdir52(data)                                          ((0x00400000&(data))>>22)
#define  GPIO_GPDIR_1_get_gpdir51(data)                                          ((0x00200000&(data))>>21)
#define  GPIO_GPDIR_1_get_gpdir50(data)                                          ((0x00100000&(data))>>20)
#define  GPIO_GPDIR_1_get_gpdir49(data)                                          ((0x00080000&(data))>>19)
#define  GPIO_GPDIR_1_get_gpdir48(data)                                          ((0x00040000&(data))>>18)
#define  GPIO_GPDIR_1_get_gpdir47(data)                                          ((0x00020000&(data))>>17)
#define  GPIO_GPDIR_1_get_gpdir46(data)                                          ((0x00010000&(data))>>16)
#define  GPIO_GPDIR_1_get_gpdir45(data)                                          ((0x00008000&(data))>>15)
#define  GPIO_GPDIR_1_get_gpdir44(data)                                          ((0x00004000&(data))>>14)
#define  GPIO_GPDIR_1_get_gpdir43(data)                                          ((0x00002000&(data))>>13)
#define  GPIO_GPDIR_1_get_gpdir42(data)                                          ((0x00001000&(data))>>12)
#define  GPIO_GPDIR_1_get_gpdir41(data)                                          ((0x00000800&(data))>>11)
#define  GPIO_GPDIR_1_get_gpdir40(data)                                          ((0x00000400&(data))>>10)
#define  GPIO_GPDIR_1_get_gpdir39(data)                                          ((0x00000200&(data))>>9)
#define  GPIO_GPDIR_1_get_gpdir38(data)                                          ((0x00000100&(data))>>8)
#define  GPIO_GPDIR_1_get_gpdir37(data)                                          ((0x00000080&(data))>>7)
#define  GPIO_GPDIR_1_get_gpdir36(data)                                          ((0x00000040&(data))>>6)
#define  GPIO_GPDIR_1_get_gpdir35(data)                                          ((0x00000020&(data))>>5)
#define  GPIO_GPDIR_1_get_gpdir34(data)                                          ((0x00000010&(data))>>4)
#define  GPIO_GPDIR_1_get_gpdir33(data)                                          ((0x00000008&(data))>>3)
#define  GPIO_GPDIR_1_get_gpdir32(data)                                          ((0x00000004&(data))>>2)
#define  GPIO_GPDIR_1_get_gpdir31(data)                                          ((0x00000002&(data))>>1)
#define  GPIO_GPDIR_1_get_write_data(data)                                       (0x00000001&(data))

#define  GPIO_GPDATO                                                            0x18061108
#define  GPIO_GPDATO_reg_addr                                                    "0xB8061108"
#define  GPIO_GPDATO_reg                                                         0xB8061108
#define  GPIO_GPDATO_inst_addr                                                   "0x0002"
#define  set_GPIO_GPDATO_reg(data)                                               (*((volatile unsigned int*)GPIO_GPDATO_reg)=data)
#define  get_GPIO_GPDATO_reg                                                     (*((volatile unsigned int*)GPIO_GPDATO_reg))
#define  GPIO_GPDATO_gpdato30_shift                                              (31)
#define  GPIO_GPDATO_gpdato29_shift                                              (30)
#define  GPIO_GPDATO_gpdato28_shift                                              (29)
#define  GPIO_GPDATO_gpdato27_shift                                              (28)
#define  GPIO_GPDATO_gpdato26_shift                                              (27)
#define  GPIO_GPDATO_gpdato25_shift                                              (26)
#define  GPIO_GPDATO_gpdato24_shift                                              (25)
#define  GPIO_GPDATO_gpdato23_shift                                              (24)
#define  GPIO_GPDATO_gpdato22_shift                                              (23)
#define  GPIO_GPDATO_gpdato21_shift                                              (22)
#define  GPIO_GPDATO_gpdato20_shift                                              (21)
#define  GPIO_GPDATO_gpdato19_shift                                              (20)
#define  GPIO_GPDATO_gpdato18_shift                                              (19)
#define  GPIO_GPDATO_gpdato17_shift                                              (18)
#define  GPIO_GPDATO_gpdato16_shift                                              (17)
#define  GPIO_GPDATO_gpdato15_shift                                              (16)
#define  GPIO_GPDATO_gpdato14_shift                                              (15)
#define  GPIO_GPDATO_gpdato13_shift                                              (14)
#define  GPIO_GPDATO_gpdato12_shift                                              (13)
#define  GPIO_GPDATO_gpdato11_shift                                              (12)
#define  GPIO_GPDATO_gpdato10_shift                                              (11)
#define  GPIO_GPDATO_gpdato9_shift                                               (10)
#define  GPIO_GPDATO_gpdato8_shift                                               (9)
#define  GPIO_GPDATO_gpdato7_shift                                               (8)
#define  GPIO_GPDATO_gpdato6_shift                                               (7)
#define  GPIO_GPDATO_gpdato5_shift                                               (6)
#define  GPIO_GPDATO_gpdato4_shift                                               (5)
#define  GPIO_GPDATO_gpdato3_shift                                               (4)
#define  GPIO_GPDATO_gpdato2_shift                                               (3)
#define  GPIO_GPDATO_gpdato1_shift                                               (2)
#define  GPIO_GPDATO_gpdato0_shift                                               (1)
#define  GPIO_GPDATO_write_data_shift                                            (0)
#define  GPIO_GPDATO_gpdato30_mask                                               (0x80000000)
#define  GPIO_GPDATO_gpdato29_mask                                               (0x40000000)
#define  GPIO_GPDATO_gpdato28_mask                                               (0x20000000)
#define  GPIO_GPDATO_gpdato27_mask                                               (0x10000000)
#define  GPIO_GPDATO_gpdato26_mask                                               (0x08000000)
#define  GPIO_GPDATO_gpdato25_mask                                               (0x04000000)
#define  GPIO_GPDATO_gpdato24_mask                                               (0x02000000)
#define  GPIO_GPDATO_gpdato23_mask                                               (0x01000000)
#define  GPIO_GPDATO_gpdato22_mask                                               (0x00800000)
#define  GPIO_GPDATO_gpdato21_mask                                               (0x00400000)
#define  GPIO_GPDATO_gpdato20_mask                                               (0x00200000)
#define  GPIO_GPDATO_gpdato19_mask                                               (0x00100000)
#define  GPIO_GPDATO_gpdato18_mask                                               (0x00080000)
#define  GPIO_GPDATO_gpdato17_mask                                               (0x00040000)
#define  GPIO_GPDATO_gpdato16_mask                                               (0x00020000)
#define  GPIO_GPDATO_gpdato15_mask                                               (0x00010000)
#define  GPIO_GPDATO_gpdato14_mask                                               (0x00008000)
#define  GPIO_GPDATO_gpdato13_mask                                               (0x00004000)
#define  GPIO_GPDATO_gpdato12_mask                                               (0x00002000)
#define  GPIO_GPDATO_gpdato11_mask                                               (0x00001000)
#define  GPIO_GPDATO_gpdato10_mask                                               (0x00000800)
#define  GPIO_GPDATO_gpdato9_mask                                                (0x00000400)
#define  GPIO_GPDATO_gpdato8_mask                                                (0x00000200)
#define  GPIO_GPDATO_gpdato7_mask                                                (0x00000100)
#define  GPIO_GPDATO_gpdato6_mask                                                (0x00000080)
#define  GPIO_GPDATO_gpdato5_mask                                                (0x00000040)
#define  GPIO_GPDATO_gpdato4_mask                                                (0x00000020)
#define  GPIO_GPDATO_gpdato3_mask                                                (0x00000010)
#define  GPIO_GPDATO_gpdato2_mask                                                (0x00000008)
#define  GPIO_GPDATO_gpdato1_mask                                                (0x00000004)
#define  GPIO_GPDATO_gpdato0_mask                                                (0x00000002)
#define  GPIO_GPDATO_write_data_mask                                             (0x00000001)
#define  GPIO_GPDATO_gpdato30(data)                                              (0x80000000&((data)<<31))
#define  GPIO_GPDATO_gpdato29(data)                                              (0x40000000&((data)<<30))
#define  GPIO_GPDATO_gpdato28(data)                                              (0x20000000&((data)<<29))
#define  GPIO_GPDATO_gpdato27(data)                                              (0x10000000&((data)<<28))
#define  GPIO_GPDATO_gpdato26(data)                                              (0x08000000&((data)<<27))
#define  GPIO_GPDATO_gpdato25(data)                                              (0x04000000&((data)<<26))
#define  GPIO_GPDATO_gpdato24(data)                                              (0x02000000&((data)<<25))
#define  GPIO_GPDATO_gpdato23(data)                                              (0x01000000&((data)<<24))
#define  GPIO_GPDATO_gpdato22(data)                                              (0x00800000&((data)<<23))
#define  GPIO_GPDATO_gpdato21(data)                                              (0x00400000&((data)<<22))
#define  GPIO_GPDATO_gpdato20(data)                                              (0x00200000&((data)<<21))
#define  GPIO_GPDATO_gpdato19(data)                                              (0x00100000&((data)<<20))
#define  GPIO_GPDATO_gpdato18(data)                                              (0x00080000&((data)<<19))
#define  GPIO_GPDATO_gpdato17(data)                                              (0x00040000&((data)<<18))
#define  GPIO_GPDATO_gpdato16(data)                                              (0x00020000&((data)<<17))
#define  GPIO_GPDATO_gpdato15(data)                                              (0x00010000&((data)<<16))
#define  GPIO_GPDATO_gpdato14(data)                                              (0x00008000&((data)<<15))
#define  GPIO_GPDATO_gpdato13(data)                                              (0x00004000&((data)<<14))
#define  GPIO_GPDATO_gpdato12(data)                                              (0x00002000&((data)<<13))
#define  GPIO_GPDATO_gpdato11(data)                                              (0x00001000&((data)<<12))
#define  GPIO_GPDATO_gpdato10(data)                                              (0x00000800&((data)<<11))
#define  GPIO_GPDATO_gpdato9(data)                                               (0x00000400&((data)<<10))
#define  GPIO_GPDATO_gpdato8(data)                                               (0x00000200&((data)<<9))
#define  GPIO_GPDATO_gpdato7(data)                                               (0x00000100&((data)<<8))
#define  GPIO_GPDATO_gpdato6(data)                                               (0x00000080&((data)<<7))
#define  GPIO_GPDATO_gpdato5(data)                                               (0x00000040&((data)<<6))
#define  GPIO_GPDATO_gpdato4(data)                                               (0x00000020&((data)<<5))
#define  GPIO_GPDATO_gpdato3(data)                                               (0x00000010&((data)<<4))
#define  GPIO_GPDATO_gpdato2(data)                                               (0x00000008&((data)<<3))
#define  GPIO_GPDATO_gpdato1(data)                                               (0x00000004&((data)<<2))
#define  GPIO_GPDATO_gpdato0(data)                                               (0x00000002&((data)<<1))
#define  GPIO_GPDATO_write_data(data)                                            (0x00000001&(data))
#define  GPIO_GPDATO_get_gpdato30(data)                                          ((0x80000000&(data))>>31)
#define  GPIO_GPDATO_get_gpdato29(data)                                          ((0x40000000&(data))>>30)
#define  GPIO_GPDATO_get_gpdato28(data)                                          ((0x20000000&(data))>>29)
#define  GPIO_GPDATO_get_gpdato27(data)                                          ((0x10000000&(data))>>28)
#define  GPIO_GPDATO_get_gpdato26(data)                                          ((0x08000000&(data))>>27)
#define  GPIO_GPDATO_get_gpdato25(data)                                          ((0x04000000&(data))>>26)
#define  GPIO_GPDATO_get_gpdato24(data)                                          ((0x02000000&(data))>>25)
#define  GPIO_GPDATO_get_gpdato23(data)                                          ((0x01000000&(data))>>24)
#define  GPIO_GPDATO_get_gpdato22(data)                                          ((0x00800000&(data))>>23)
#define  GPIO_GPDATO_get_gpdato21(data)                                          ((0x00400000&(data))>>22)
#define  GPIO_GPDATO_get_gpdato20(data)                                          ((0x00200000&(data))>>21)
#define  GPIO_GPDATO_get_gpdato19(data)                                          ((0x00100000&(data))>>20)
#define  GPIO_GPDATO_get_gpdato18(data)                                          ((0x00080000&(data))>>19)
#define  GPIO_GPDATO_get_gpdato17(data)                                          ((0x00040000&(data))>>18)
#define  GPIO_GPDATO_get_gpdato16(data)                                          ((0x00020000&(data))>>17)
#define  GPIO_GPDATO_get_gpdato15(data)                                          ((0x00010000&(data))>>16)
#define  GPIO_GPDATO_get_gpdato14(data)                                          ((0x00008000&(data))>>15)
#define  GPIO_GPDATO_get_gpdato13(data)                                          ((0x00004000&(data))>>14)
#define  GPIO_GPDATO_get_gpdato12(data)                                          ((0x00002000&(data))>>13)
#define  GPIO_GPDATO_get_gpdato11(data)                                          ((0x00001000&(data))>>12)
#define  GPIO_GPDATO_get_gpdato10(data)                                          ((0x00000800&(data))>>11)
#define  GPIO_GPDATO_get_gpdato9(data)                                           ((0x00000400&(data))>>10)
#define  GPIO_GPDATO_get_gpdato8(data)                                           ((0x00000200&(data))>>9)
#define  GPIO_GPDATO_get_gpdato7(data)                                           ((0x00000100&(data))>>8)
#define  GPIO_GPDATO_get_gpdato6(data)                                           ((0x00000080&(data))>>7)
#define  GPIO_GPDATO_get_gpdato5(data)                                           ((0x00000040&(data))>>6)
#define  GPIO_GPDATO_get_gpdato4(data)                                           ((0x00000020&(data))>>5)
#define  GPIO_GPDATO_get_gpdato3(data)                                           ((0x00000010&(data))>>4)
#define  GPIO_GPDATO_get_gpdato2(data)                                           ((0x00000008&(data))>>3)
#define  GPIO_GPDATO_get_gpdato1(data)                                           ((0x00000004&(data))>>2)
#define  GPIO_GPDATO_get_gpdato0(data)                                           ((0x00000002&(data))>>1)
#define  GPIO_GPDATO_get_write_data(data)                                        (0x00000001&(data))

#define  GPIO_GPDATO_1                                                          0x1806110C
#define  GPIO_GPDATO_1_reg_addr                                                  "0xB806110C"
#define  GPIO_GPDATO_1_reg                                                       0xB806110C
#define  GPIO_GPDATO_1_inst_addr                                                 "0x0003"
#define  set_GPIO_GPDATO_1_reg(data)                                             (*((volatile unsigned int*)GPIO_GPDATO_1_reg)=data)
#define  get_GPIO_GPDATO_1_reg                                                   (*((volatile unsigned int*)GPIO_GPDATO_1_reg))
#define  GPIO_GPDATO_1_gpdato60_shift                                            (30)
#define  GPIO_GPDATO_1_gpdato59_shift                                            (29)
#define  GPIO_GPDATO_1_gpdato58_shift                                            (28)
#define  GPIO_GPDATO_1_gpdato57_shift                                            (27)
#define  GPIO_GPDATO_1_gpdato56_shift                                            (26)
#define  GPIO_GPDATO_1_gpdato55_shift                                            (25)
#define  GPIO_GPDATO_1_gpdato54_shift                                            (24)
#define  GPIO_GPDATO_1_gpdato53_shift                                            (23)
#define  GPIO_GPDATO_1_gpdato52_shift                                            (22)
#define  GPIO_GPDATO_1_gpdato51_shift                                            (21)
#define  GPIO_GPDATO_1_gpdato50_shift                                            (20)
#define  GPIO_GPDATO_1_gpdato49_shift                                            (19)
#define  GPIO_GPDATO_1_gpdato48_shift                                            (18)
#define  GPIO_GPDATO_1_gpdato47_shift                                            (17)
#define  GPIO_GPDATO_1_gpdato46_shift                                            (16)
#define  GPIO_GPDATO_1_gpdato45_shift                                            (15)
#define  GPIO_GPDATO_1_gpdato44_shift                                            (14)
#define  GPIO_GPDATO_1_gpdato43_shift                                            (13)
#define  GPIO_GPDATO_1_gpdato42_shift                                            (12)
#define  GPIO_GPDATO_1_gpdato41_shift                                            (11)
#define  GPIO_GPDATO_1_gpdato40_shift                                            (10)
#define  GPIO_GPDATO_1_gpdato39_shift                                            (9)
#define  GPIO_GPDATO_1_gpdato38_shift                                            (8)
#define  GPIO_GPDATO_1_gpdato37_shift                                            (7)
#define  GPIO_GPDATO_1_gpdato36_shift                                            (6)
#define  GPIO_GPDATO_1_gpdato35_shift                                            (5)
#define  GPIO_GPDATO_1_gpdato34_shift                                            (4)
#define  GPIO_GPDATO_1_gpdato33_shift                                            (3)
#define  GPIO_GPDATO_1_gpdato32_shift                                            (2)
#define  GPIO_GPDATO_1_gpdato31_shift                                            (1)
#define  GPIO_GPDATO_1_write_data_shift                                          (0)
#define  GPIO_GPDATO_1_gpdato60_mask                                             (0x40000000)
#define  GPIO_GPDATO_1_gpdato59_mask                                             (0x20000000)
#define  GPIO_GPDATO_1_gpdato58_mask                                             (0x10000000)
#define  GPIO_GPDATO_1_gpdato57_mask                                             (0x08000000)
#define  GPIO_GPDATO_1_gpdato56_mask                                             (0x04000000)
#define  GPIO_GPDATO_1_gpdato55_mask                                             (0x02000000)
#define  GPIO_GPDATO_1_gpdato54_mask                                             (0x01000000)
#define  GPIO_GPDATO_1_gpdato53_mask                                             (0x00800000)
#define  GPIO_GPDATO_1_gpdato52_mask                                             (0x00400000)
#define  GPIO_GPDATO_1_gpdato51_mask                                             (0x00200000)
#define  GPIO_GPDATO_1_gpdato50_mask                                             (0x00100000)
#define  GPIO_GPDATO_1_gpdato49_mask                                             (0x00080000)
#define  GPIO_GPDATO_1_gpdato48_mask                                             (0x00040000)
#define  GPIO_GPDATO_1_gpdato47_mask                                             (0x00020000)
#define  GPIO_GPDATO_1_gpdato46_mask                                             (0x00010000)
#define  GPIO_GPDATO_1_gpdato45_mask                                             (0x00008000)
#define  GPIO_GPDATO_1_gpdato44_mask                                             (0x00004000)
#define  GPIO_GPDATO_1_gpdato43_mask                                             (0x00002000)
#define  GPIO_GPDATO_1_gpdato42_mask                                             (0x00001000)
#define  GPIO_GPDATO_1_gpdato41_mask                                             (0x00000800)
#define  GPIO_GPDATO_1_gpdato40_mask                                             (0x00000400)
#define  GPIO_GPDATO_1_gpdato39_mask                                             (0x00000200)
#define  GPIO_GPDATO_1_gpdato38_mask                                             (0x00000100)
#define  GPIO_GPDATO_1_gpdato37_mask                                             (0x00000080)
#define  GPIO_GPDATO_1_gpdato36_mask                                             (0x00000040)
#define  GPIO_GPDATO_1_gpdato35_mask                                             (0x00000020)
#define  GPIO_GPDATO_1_gpdato34_mask                                             (0x00000010)
#define  GPIO_GPDATO_1_gpdato33_mask                                             (0x00000008)
#define  GPIO_GPDATO_1_gpdato32_mask                                             (0x00000004)
#define  GPIO_GPDATO_1_gpdato31_mask                                             (0x00000002)
#define  GPIO_GPDATO_1_write_data_mask                                           (0x00000001)
#define  GPIO_GPDATO_1_gpdato60(data)                                            (0x40000000&((data)<<30))
#define  GPIO_GPDATO_1_gpdato59(data)                                            (0x20000000&((data)<<29))
#define  GPIO_GPDATO_1_gpdato58(data)                                            (0x10000000&((data)<<28))
#define  GPIO_GPDATO_1_gpdato57(data)                                            (0x08000000&((data)<<27))
#define  GPIO_GPDATO_1_gpdato56(data)                                            (0x04000000&((data)<<26))
#define  GPIO_GPDATO_1_gpdato55(data)                                            (0x02000000&((data)<<25))
#define  GPIO_GPDATO_1_gpdato54(data)                                            (0x01000000&((data)<<24))
#define  GPIO_GPDATO_1_gpdato53(data)                                            (0x00800000&((data)<<23))
#define  GPIO_GPDATO_1_gpdato52(data)                                            (0x00400000&((data)<<22))
#define  GPIO_GPDATO_1_gpdato51(data)                                            (0x00200000&((data)<<21))
#define  GPIO_GPDATO_1_gpdato50(data)                                            (0x00100000&((data)<<20))
#define  GPIO_GPDATO_1_gpdato49(data)                                            (0x00080000&((data)<<19))
#define  GPIO_GPDATO_1_gpdato48(data)                                            (0x00040000&((data)<<18))
#define  GPIO_GPDATO_1_gpdato47(data)                                            (0x00020000&((data)<<17))
#define  GPIO_GPDATO_1_gpdato46(data)                                            (0x00010000&((data)<<16))
#define  GPIO_GPDATO_1_gpdato45(data)                                            (0x00008000&((data)<<15))
#define  GPIO_GPDATO_1_gpdato44(data)                                            (0x00004000&((data)<<14))
#define  GPIO_GPDATO_1_gpdato43(data)                                            (0x00002000&((data)<<13))
#define  GPIO_GPDATO_1_gpdato42(data)                                            (0x00001000&((data)<<12))
#define  GPIO_GPDATO_1_gpdato41(data)                                            (0x00000800&((data)<<11))
#define  GPIO_GPDATO_1_gpdato40(data)                                            (0x00000400&((data)<<10))
#define  GPIO_GPDATO_1_gpdato39(data)                                            (0x00000200&((data)<<9))
#define  GPIO_GPDATO_1_gpdato38(data)                                            (0x00000100&((data)<<8))
#define  GPIO_GPDATO_1_gpdato37(data)                                            (0x00000080&((data)<<7))
#define  GPIO_GPDATO_1_gpdato36(data)                                            (0x00000040&((data)<<6))
#define  GPIO_GPDATO_1_gpdato35(data)                                            (0x00000020&((data)<<5))
#define  GPIO_GPDATO_1_gpdato34(data)                                            (0x00000010&((data)<<4))
#define  GPIO_GPDATO_1_gpdato33(data)                                            (0x00000008&((data)<<3))
#define  GPIO_GPDATO_1_gpdato32(data)                                            (0x00000004&((data)<<2))
#define  GPIO_GPDATO_1_gpdato31(data)                                            (0x00000002&((data)<<1))
#define  GPIO_GPDATO_1_write_data(data)                                          (0x00000001&(data))
#define  GPIO_GPDATO_1_get_gpdato60(data)                                        ((0x40000000&(data))>>30)
#define  GPIO_GPDATO_1_get_gpdato59(data)                                        ((0x20000000&(data))>>29)
#define  GPIO_GPDATO_1_get_gpdato58(data)                                        ((0x10000000&(data))>>28)
#define  GPIO_GPDATO_1_get_gpdato57(data)                                        ((0x08000000&(data))>>27)
#define  GPIO_GPDATO_1_get_gpdato56(data)                                        ((0x04000000&(data))>>26)
#define  GPIO_GPDATO_1_get_gpdato55(data)                                        ((0x02000000&(data))>>25)
#define  GPIO_GPDATO_1_get_gpdato54(data)                                        ((0x01000000&(data))>>24)
#define  GPIO_GPDATO_1_get_gpdato53(data)                                        ((0x00800000&(data))>>23)
#define  GPIO_GPDATO_1_get_gpdato52(data)                                        ((0x00400000&(data))>>22)
#define  GPIO_GPDATO_1_get_gpdato51(data)                                        ((0x00200000&(data))>>21)
#define  GPIO_GPDATO_1_get_gpdato50(data)                                        ((0x00100000&(data))>>20)
#define  GPIO_GPDATO_1_get_gpdato49(data)                                        ((0x00080000&(data))>>19)
#define  GPIO_GPDATO_1_get_gpdato48(data)                                        ((0x00040000&(data))>>18)
#define  GPIO_GPDATO_1_get_gpdato47(data)                                        ((0x00020000&(data))>>17)
#define  GPIO_GPDATO_1_get_gpdato46(data)                                        ((0x00010000&(data))>>16)
#define  GPIO_GPDATO_1_get_gpdato45(data)                                        ((0x00008000&(data))>>15)
#define  GPIO_GPDATO_1_get_gpdato44(data)                                        ((0x00004000&(data))>>14)
#define  GPIO_GPDATO_1_get_gpdato43(data)                                        ((0x00002000&(data))>>13)
#define  GPIO_GPDATO_1_get_gpdato42(data)                                        ((0x00001000&(data))>>12)
#define  GPIO_GPDATO_1_get_gpdato41(data)                                        ((0x00000800&(data))>>11)
#define  GPIO_GPDATO_1_get_gpdato40(data)                                        ((0x00000400&(data))>>10)
#define  GPIO_GPDATO_1_get_gpdato39(data)                                        ((0x00000200&(data))>>9)
#define  GPIO_GPDATO_1_get_gpdato38(data)                                        ((0x00000100&(data))>>8)
#define  GPIO_GPDATO_1_get_gpdato37(data)                                        ((0x00000080&(data))>>7)
#define  GPIO_GPDATO_1_get_gpdato36(data)                                        ((0x00000040&(data))>>6)
#define  GPIO_GPDATO_1_get_gpdato35(data)                                        ((0x00000020&(data))>>5)
#define  GPIO_GPDATO_1_get_gpdato34(data)                                        ((0x00000010&(data))>>4)
#define  GPIO_GPDATO_1_get_gpdato33(data)                                        ((0x00000008&(data))>>3)
#define  GPIO_GPDATO_1_get_gpdato32(data)                                        ((0x00000004&(data))>>2)
#define  GPIO_GPDATO_1_get_gpdato31(data)                                        ((0x00000002&(data))>>1)
#define  GPIO_GPDATO_1_get_write_data(data)                                      (0x00000001&(data))

#define  GPIO_GPDATI                                                            0x18061110
#define  GPIO_GPDATI_reg_addr                                                    "0xB8061110"
#define  GPIO_GPDATI_reg                                                         0xB8061110
#define  GPIO_GPDATI_inst_addr                                                   "0x0004"
#define  set_GPIO_GPDATI_reg(data)                                               (*((volatile unsigned int*)GPIO_GPDATI_reg)=data)
#define  get_GPIO_GPDATI_reg                                                     (*((volatile unsigned int*)GPIO_GPDATI_reg))
#define  GPIO_GPDATI_gpdati_shift                                                (1)
#define  GPIO_GPDATI_gpdati_mask                                                 (0xFFFFFFFE)
#define  GPIO_GPDATI_gpdati(data)                                                (0xFFFFFFFE&((data)<<1))
#define  GPIO_GPDATI_get_gpdati(data)                                            ((0xFFFFFFFE&(data))>>1)

#define  GPIO_GPDATI_1                                                          0x18061114
#define  GPIO_GPDATI_1_reg_addr                                                  "0xB8061114"
#define  GPIO_GPDATI_1_reg                                                       0xB8061114
#define  GPIO_GPDATI_1_inst_addr                                                 "0x0005"
#define  set_GPIO_GPDATI_1_reg(data)                                             (*((volatile unsigned int*)GPIO_GPDATI_1_reg)=data)
#define  get_GPIO_GPDATI_1_reg                                                   (*((volatile unsigned int*)GPIO_GPDATI_1_reg))
#define  GPIO_GPDATI_1_gpdati_shift                                              (1)
#define  GPIO_GPDATI_1_gpdati_mask                                               (0x7FFFFFFE)
#define  GPIO_GPDATI_1_gpdati(data)                                              (0x7FFFFFFE&((data)<<1))
#define  GPIO_GPDATI_1_get_gpdati(data)                                          ((0x7FFFFFFE&(data))>>1)

#define  GPIO_GPIE                                                              0x18061118
#define  GPIO_GPIE_reg_addr                                                      "0xB8061118"
#define  GPIO_GPIE_reg                                                           0xB8061118
#define  GPIO_GPIE_inst_addr                                                     "0x0006"
#define  set_GPIO_GPIE_reg(data)                                                 (*((volatile unsigned int*)GPIO_GPIE_reg)=data)
#define  get_GPIO_GPIE_reg                                                       (*((volatile unsigned int*)GPIO_GPIE_reg))
#define  GPIO_GPIE_gp30_shift                                                    (31)
#define  GPIO_GPIE_gp29_shift                                                    (30)
#define  GPIO_GPIE_gp28_shift                                                    (29)
#define  GPIO_GPIE_gp27_shift                                                    (28)
#define  GPIO_GPIE_gp26_shift                                                    (27)
#define  GPIO_GPIE_gp25_shift                                                    (26)
#define  GPIO_GPIE_gp24_shift                                                    (25)
#define  GPIO_GPIE_gp23_shift                                                    (24)
#define  GPIO_GPIE_gp22_shift                                                    (23)
#define  GPIO_GPIE_gp21_shift                                                    (22)
#define  GPIO_GPIE_gp20_shift                                                    (21)
#define  GPIO_GPIE_gp19_shift                                                    (20)
#define  GPIO_GPIE_gp18_shift                                                    (19)
#define  GPIO_GPIE_gp17_shift                                                    (18)
#define  GPIO_GPIE_gp16_shift                                                    (17)
#define  GPIO_GPIE_gp15_shift                                                    (16)
#define  GPIO_GPIE_gp14_shift                                                    (15)
#define  GPIO_GPIE_gp13_shift                                                    (14)
#define  GPIO_GPIE_gp12_shift                                                    (13)
#define  GPIO_GPIE_gp11_shift                                                    (12)
#define  GPIO_GPIE_gp10_shift                                                    (11)
#define  GPIO_GPIE_gp9_shift                                                     (10)
#define  GPIO_GPIE_gp8_shift                                                     (9)
#define  GPIO_GPIE_gp7_shift                                                     (8)
#define  GPIO_GPIE_gp6_shift                                                     (7)
#define  GPIO_GPIE_gp5_shift                                                     (6)
#define  GPIO_GPIE_gp4_shift                                                     (5)
#define  GPIO_GPIE_gp3_shift                                                     (4)
#define  GPIO_GPIE_gp2_shift                                                     (3)
#define  GPIO_GPIE_gp1_shift                                                     (2)
#define  GPIO_GPIE_gp0_shift                                                     (1)
#define  GPIO_GPIE_write_data_shift                                              (0)
#define  GPIO_GPIE_gp30_mask                                                     (0x80000000)
#define  GPIO_GPIE_gp29_mask                                                     (0x40000000)
#define  GPIO_GPIE_gp28_mask                                                     (0x20000000)
#define  GPIO_GPIE_gp27_mask                                                     (0x10000000)
#define  GPIO_GPIE_gp26_mask                                                     (0x08000000)
#define  GPIO_GPIE_gp25_mask                                                     (0x04000000)
#define  GPIO_GPIE_gp24_mask                                                     (0x02000000)
#define  GPIO_GPIE_gp23_mask                                                     (0x01000000)
#define  GPIO_GPIE_gp22_mask                                                     (0x00800000)
#define  GPIO_GPIE_gp21_mask                                                     (0x00400000)
#define  GPIO_GPIE_gp20_mask                                                     (0x00200000)
#define  GPIO_GPIE_gp19_mask                                                     (0x00100000)
#define  GPIO_GPIE_gp18_mask                                                     (0x00080000)
#define  GPIO_GPIE_gp17_mask                                                     (0x00040000)
#define  GPIO_GPIE_gp16_mask                                                     (0x00020000)
#define  GPIO_GPIE_gp15_mask                                                     (0x00010000)
#define  GPIO_GPIE_gp14_mask                                                     (0x00008000)
#define  GPIO_GPIE_gp13_mask                                                     (0x00004000)
#define  GPIO_GPIE_gp12_mask                                                     (0x00002000)
#define  GPIO_GPIE_gp11_mask                                                     (0x00001000)
#define  GPIO_GPIE_gp10_mask                                                     (0x00000800)
#define  GPIO_GPIE_gp9_mask                                                      (0x00000400)
#define  GPIO_GPIE_gp8_mask                                                      (0x00000200)
#define  GPIO_GPIE_gp7_mask                                                      (0x00000100)
#define  GPIO_GPIE_gp6_mask                                                      (0x00000080)
#define  GPIO_GPIE_gp5_mask                                                      (0x00000040)
#define  GPIO_GPIE_gp4_mask                                                      (0x00000020)
#define  GPIO_GPIE_gp3_mask                                                      (0x00000010)
#define  GPIO_GPIE_gp2_mask                                                      (0x00000008)
#define  GPIO_GPIE_gp1_mask                                                      (0x00000004)
#define  GPIO_GPIE_gp0_mask                                                      (0x00000002)
#define  GPIO_GPIE_write_data_mask                                               (0x00000001)
#define  GPIO_GPIE_gp30(data)                                                    (0x80000000&((data)<<31))
#define  GPIO_GPIE_gp29(data)                                                    (0x40000000&((data)<<30))
#define  GPIO_GPIE_gp28(data)                                                    (0x20000000&((data)<<29))
#define  GPIO_GPIE_gp27(data)                                                    (0x10000000&((data)<<28))
#define  GPIO_GPIE_gp26(data)                                                    (0x08000000&((data)<<27))
#define  GPIO_GPIE_gp25(data)                                                    (0x04000000&((data)<<26))
#define  GPIO_GPIE_gp24(data)                                                    (0x02000000&((data)<<25))
#define  GPIO_GPIE_gp23(data)                                                    (0x01000000&((data)<<24))
#define  GPIO_GPIE_gp22(data)                                                    (0x00800000&((data)<<23))
#define  GPIO_GPIE_gp21(data)                                                    (0x00400000&((data)<<22))
#define  GPIO_GPIE_gp20(data)                                                    (0x00200000&((data)<<21))
#define  GPIO_GPIE_gp19(data)                                                    (0x00100000&((data)<<20))
#define  GPIO_GPIE_gp18(data)                                                    (0x00080000&((data)<<19))
#define  GPIO_GPIE_gp17(data)                                                    (0x00040000&((data)<<18))
#define  GPIO_GPIE_gp16(data)                                                    (0x00020000&((data)<<17))
#define  GPIO_GPIE_gp15(data)                                                    (0x00010000&((data)<<16))
#define  GPIO_GPIE_gp14(data)                                                    (0x00008000&((data)<<15))
#define  GPIO_GPIE_gp13(data)                                                    (0x00004000&((data)<<14))
#define  GPIO_GPIE_gp12(data)                                                    (0x00002000&((data)<<13))
#define  GPIO_GPIE_gp11(data)                                                    (0x00001000&((data)<<12))
#define  GPIO_GPIE_gp10(data)                                                    (0x00000800&((data)<<11))
#define  GPIO_GPIE_gp9(data)                                                     (0x00000400&((data)<<10))
#define  GPIO_GPIE_gp8(data)                                                     (0x00000200&((data)<<9))
#define  GPIO_GPIE_gp7(data)                                                     (0x00000100&((data)<<8))
#define  GPIO_GPIE_gp6(data)                                                     (0x00000080&((data)<<7))
#define  GPIO_GPIE_gp5(data)                                                     (0x00000040&((data)<<6))
#define  GPIO_GPIE_gp4(data)                                                     (0x00000020&((data)<<5))
#define  GPIO_GPIE_gp3(data)                                                     (0x00000010&((data)<<4))
#define  GPIO_GPIE_gp2(data)                                                     (0x00000008&((data)<<3))
#define  GPIO_GPIE_gp1(data)                                                     (0x00000004&((data)<<2))
#define  GPIO_GPIE_gp0(data)                                                     (0x00000002&((data)<<1))
#define  GPIO_GPIE_write_data(data)                                              (0x00000001&(data))
#define  GPIO_GPIE_get_gp30(data)                                                ((0x80000000&(data))>>31)
#define  GPIO_GPIE_get_gp29(data)                                                ((0x40000000&(data))>>30)
#define  GPIO_GPIE_get_gp28(data)                                                ((0x20000000&(data))>>29)
#define  GPIO_GPIE_get_gp27(data)                                                ((0x10000000&(data))>>28)
#define  GPIO_GPIE_get_gp26(data)                                                ((0x08000000&(data))>>27)
#define  GPIO_GPIE_get_gp25(data)                                                ((0x04000000&(data))>>26)
#define  GPIO_GPIE_get_gp24(data)                                                ((0x02000000&(data))>>25)
#define  GPIO_GPIE_get_gp23(data)                                                ((0x01000000&(data))>>24)
#define  GPIO_GPIE_get_gp22(data)                                                ((0x00800000&(data))>>23)
#define  GPIO_GPIE_get_gp21(data)                                                ((0x00400000&(data))>>22)
#define  GPIO_GPIE_get_gp20(data)                                                ((0x00200000&(data))>>21)
#define  GPIO_GPIE_get_gp19(data)                                                ((0x00100000&(data))>>20)
#define  GPIO_GPIE_get_gp18(data)                                                ((0x00080000&(data))>>19)
#define  GPIO_GPIE_get_gp17(data)                                                ((0x00040000&(data))>>18)
#define  GPIO_GPIE_get_gp16(data)                                                ((0x00020000&(data))>>17)
#define  GPIO_GPIE_get_gp15(data)                                                ((0x00010000&(data))>>16)
#define  GPIO_GPIE_get_gp14(data)                                                ((0x00008000&(data))>>15)
#define  GPIO_GPIE_get_gp13(data)                                                ((0x00004000&(data))>>14)
#define  GPIO_GPIE_get_gp12(data)                                                ((0x00002000&(data))>>13)
#define  GPIO_GPIE_get_gp11(data)                                                ((0x00001000&(data))>>12)
#define  GPIO_GPIE_get_gp10(data)                                                ((0x00000800&(data))>>11)
#define  GPIO_GPIE_get_gp9(data)                                                 ((0x00000400&(data))>>10)
#define  GPIO_GPIE_get_gp8(data)                                                 ((0x00000200&(data))>>9)
#define  GPIO_GPIE_get_gp7(data)                                                 ((0x00000100&(data))>>8)
#define  GPIO_GPIE_get_gp6(data)                                                 ((0x00000080&(data))>>7)
#define  GPIO_GPIE_get_gp5(data)                                                 ((0x00000040&(data))>>6)
#define  GPIO_GPIE_get_gp4(data)                                                 ((0x00000020&(data))>>5)
#define  GPIO_GPIE_get_gp3(data)                                                 ((0x00000010&(data))>>4)
#define  GPIO_GPIE_get_gp2(data)                                                 ((0x00000008&(data))>>3)
#define  GPIO_GPIE_get_gp1(data)                                                 ((0x00000004&(data))>>2)
#define  GPIO_GPIE_get_gp0(data)                                                 ((0x00000002&(data))>>1)
#define  GPIO_GPIE_get_write_data(data)                                          (0x00000001&(data))

#define  GPIO_GPIE_1                                                            0x1806111C
#define  GPIO_GPIE_1_reg_addr                                                    "0xB806111C"
#define  GPIO_GPIE_1_reg                                                         0xB806111C
#define  GPIO_GPIE_1_inst_addr                                                   "0x0007"
#define  set_GPIO_GPIE_1_reg(data)                                               (*((volatile unsigned int*)GPIO_GPIE_1_reg)=data)
#define  get_GPIO_GPIE_1_reg                                                     (*((volatile unsigned int*)GPIO_GPIE_1_reg))
#define  GPIO_GPIE_1_gp60_shift                                                  (30)
#define  GPIO_GPIE_1_gp59_shift                                                  (29)
#define  GPIO_GPIE_1_gp58_shift                                                  (28)
#define  GPIO_GPIE_1_gp57_shift                                                  (27)
#define  GPIO_GPIE_1_gp56_shift                                                  (26)
#define  GPIO_GPIE_1_gp55_shift                                                  (25)
#define  GPIO_GPIE_1_gp54_shift                                                  (24)
#define  GPIO_GPIE_1_gp53_shift                                                  (23)
#define  GPIO_GPIE_1_gp52_shift                                                  (22)
#define  GPIO_GPIE_1_gp51_shift                                                  (21)
#define  GPIO_GPIE_1_gp50_shift                                                  (20)
#define  GPIO_GPIE_1_gp49_shift                                                  (19)
#define  GPIO_GPIE_1_gp48_shift                                                  (18)
#define  GPIO_GPIE_1_gp47_shift                                                  (17)
#define  GPIO_GPIE_1_gp46_shift                                                  (16)
#define  GPIO_GPIE_1_gp45_shift                                                  (15)
#define  GPIO_GPIE_1_gp44_shift                                                  (14)
#define  GPIO_GPIE_1_gp43_shift                                                  (13)
#define  GPIO_GPIE_1_gp42_shift                                                  (12)
#define  GPIO_GPIE_1_gp41_shift                                                  (11)
#define  GPIO_GPIE_1_gp40_shift                                                  (10)
#define  GPIO_GPIE_1_gp39_shift                                                  (9)
#define  GPIO_GPIE_1_gp38_shift                                                  (8)
#define  GPIO_GPIE_1_gp37_shift                                                  (7)
#define  GPIO_GPIE_1_gp36_shift                                                  (6)
#define  GPIO_GPIE_1_gp35_shift                                                  (5)
#define  GPIO_GPIE_1_gp34_shift                                                  (4)
#define  GPIO_GPIE_1_gp33_shift                                                  (3)
#define  GPIO_GPIE_1_gp32_shift                                                  (2)
#define  GPIO_GPIE_1_gp31_shift                                                  (1)
#define  GPIO_GPIE_1_write_data_shift                                            (0)
#define  GPIO_GPIE_1_gp60_mask                                                   (0x40000000)
#define  GPIO_GPIE_1_gp59_mask                                                   (0x20000000)
#define  GPIO_GPIE_1_gp58_mask                                                   (0x10000000)
#define  GPIO_GPIE_1_gp57_mask                                                   (0x08000000)
#define  GPIO_GPIE_1_gp56_mask                                                   (0x04000000)
#define  GPIO_GPIE_1_gp55_mask                                                   (0x02000000)
#define  GPIO_GPIE_1_gp54_mask                                                   (0x01000000)
#define  GPIO_GPIE_1_gp53_mask                                                   (0x00800000)
#define  GPIO_GPIE_1_gp52_mask                                                   (0x00400000)
#define  GPIO_GPIE_1_gp51_mask                                                   (0x00200000)
#define  GPIO_GPIE_1_gp50_mask                                                   (0x00100000)
#define  GPIO_GPIE_1_gp49_mask                                                   (0x00080000)
#define  GPIO_GPIE_1_gp48_mask                                                   (0x00040000)
#define  GPIO_GPIE_1_gp47_mask                                                   (0x00020000)
#define  GPIO_GPIE_1_gp46_mask                                                   (0x00010000)
#define  GPIO_GPIE_1_gp45_mask                                                   (0x00008000)
#define  GPIO_GPIE_1_gp44_mask                                                   (0x00004000)
#define  GPIO_GPIE_1_gp43_mask                                                   (0x00002000)
#define  GPIO_GPIE_1_gp42_mask                                                   (0x00001000)
#define  GPIO_GPIE_1_gp41_mask                                                   (0x00000800)
#define  GPIO_GPIE_1_gp40_mask                                                   (0x00000400)
#define  GPIO_GPIE_1_gp39_mask                                                   (0x00000200)
#define  GPIO_GPIE_1_gp38_mask                                                   (0x00000100)
#define  GPIO_GPIE_1_gp37_mask                                                   (0x00000080)
#define  GPIO_GPIE_1_gp36_mask                                                   (0x00000040)
#define  GPIO_GPIE_1_gp35_mask                                                   (0x00000020)
#define  GPIO_GPIE_1_gp34_mask                                                   (0x00000010)
#define  GPIO_GPIE_1_gp33_mask                                                   (0x00000008)
#define  GPIO_GPIE_1_gp32_mask                                                   (0x00000004)
#define  GPIO_GPIE_1_gp31_mask                                                   (0x00000002)
#define  GPIO_GPIE_1_write_data_mask                                             (0x00000001)
#define  GPIO_GPIE_1_gp60(data)                                                  (0x40000000&((data)<<30))
#define  GPIO_GPIE_1_gp59(data)                                                  (0x20000000&((data)<<29))
#define  GPIO_GPIE_1_gp58(data)                                                  (0x10000000&((data)<<28))
#define  GPIO_GPIE_1_gp57(data)                                                  (0x08000000&((data)<<27))
#define  GPIO_GPIE_1_gp56(data)                                                  (0x04000000&((data)<<26))
#define  GPIO_GPIE_1_gp55(data)                                                  (0x02000000&((data)<<25))
#define  GPIO_GPIE_1_gp54(data)                                                  (0x01000000&((data)<<24))
#define  GPIO_GPIE_1_gp53(data)                                                  (0x00800000&((data)<<23))
#define  GPIO_GPIE_1_gp52(data)                                                  (0x00400000&((data)<<22))
#define  GPIO_GPIE_1_gp51(data)                                                  (0x00200000&((data)<<21))
#define  GPIO_GPIE_1_gp50(data)                                                  (0x00100000&((data)<<20))
#define  GPIO_GPIE_1_gp49(data)                                                  (0x00080000&((data)<<19))
#define  GPIO_GPIE_1_gp48(data)                                                  (0x00040000&((data)<<18))
#define  GPIO_GPIE_1_gp47(data)                                                  (0x00020000&((data)<<17))
#define  GPIO_GPIE_1_gp46(data)                                                  (0x00010000&((data)<<16))
#define  GPIO_GPIE_1_gp45(data)                                                  (0x00008000&((data)<<15))
#define  GPIO_GPIE_1_gp44(data)                                                  (0x00004000&((data)<<14))
#define  GPIO_GPIE_1_gp43(data)                                                  (0x00002000&((data)<<13))
#define  GPIO_GPIE_1_gp42(data)                                                  (0x00001000&((data)<<12))
#define  GPIO_GPIE_1_gp41(data)                                                  (0x00000800&((data)<<11))
#define  GPIO_GPIE_1_gp40(data)                                                  (0x00000400&((data)<<10))
#define  GPIO_GPIE_1_gp39(data)                                                  (0x00000200&((data)<<9))
#define  GPIO_GPIE_1_gp38(data)                                                  (0x00000100&((data)<<8))
#define  GPIO_GPIE_1_gp37(data)                                                  (0x00000080&((data)<<7))
#define  GPIO_GPIE_1_gp36(data)                                                  (0x00000040&((data)<<6))
#define  GPIO_GPIE_1_gp35(data)                                                  (0x00000020&((data)<<5))
#define  GPIO_GPIE_1_gp34(data)                                                  (0x00000010&((data)<<4))
#define  GPIO_GPIE_1_gp33(data)                                                  (0x00000008&((data)<<3))
#define  GPIO_GPIE_1_gp32(data)                                                  (0x00000004&((data)<<2))
#define  GPIO_GPIE_1_gp31(data)                                                  (0x00000002&((data)<<1))
#define  GPIO_GPIE_1_write_data(data)                                            (0x00000001&(data))
#define  GPIO_GPIE_1_get_gp60(data)                                              ((0x40000000&(data))>>30)
#define  GPIO_GPIE_1_get_gp59(data)                                              ((0x20000000&(data))>>29)
#define  GPIO_GPIE_1_get_gp58(data)                                              ((0x10000000&(data))>>28)
#define  GPIO_GPIE_1_get_gp57(data)                                              ((0x08000000&(data))>>27)
#define  GPIO_GPIE_1_get_gp56(data)                                              ((0x04000000&(data))>>26)
#define  GPIO_GPIE_1_get_gp55(data)                                              ((0x02000000&(data))>>25)
#define  GPIO_GPIE_1_get_gp54(data)                                              ((0x01000000&(data))>>24)
#define  GPIO_GPIE_1_get_gp53(data)                                              ((0x00800000&(data))>>23)
#define  GPIO_GPIE_1_get_gp52(data)                                              ((0x00400000&(data))>>22)
#define  GPIO_GPIE_1_get_gp51(data)                                              ((0x00200000&(data))>>21)
#define  GPIO_GPIE_1_get_gp50(data)                                              ((0x00100000&(data))>>20)
#define  GPIO_GPIE_1_get_gp49(data)                                              ((0x00080000&(data))>>19)
#define  GPIO_GPIE_1_get_gp48(data)                                              ((0x00040000&(data))>>18)
#define  GPIO_GPIE_1_get_gp47(data)                                              ((0x00020000&(data))>>17)
#define  GPIO_GPIE_1_get_gp46(data)                                              ((0x00010000&(data))>>16)
#define  GPIO_GPIE_1_get_gp45(data)                                              ((0x00008000&(data))>>15)
#define  GPIO_GPIE_1_get_gp44(data)                                              ((0x00004000&(data))>>14)
#define  GPIO_GPIE_1_get_gp43(data)                                              ((0x00002000&(data))>>13)
#define  GPIO_GPIE_1_get_gp42(data)                                              ((0x00001000&(data))>>12)
#define  GPIO_GPIE_1_get_gp41(data)                                              ((0x00000800&(data))>>11)
#define  GPIO_GPIE_1_get_gp40(data)                                              ((0x00000400&(data))>>10)
#define  GPIO_GPIE_1_get_gp39(data)                                              ((0x00000200&(data))>>9)
#define  GPIO_GPIE_1_get_gp38(data)                                              ((0x00000100&(data))>>8)
#define  GPIO_GPIE_1_get_gp37(data)                                              ((0x00000080&(data))>>7)
#define  GPIO_GPIE_1_get_gp36(data)                                              ((0x00000040&(data))>>6)
#define  GPIO_GPIE_1_get_gp35(data)                                              ((0x00000020&(data))>>5)
#define  GPIO_GPIE_1_get_gp34(data)                                              ((0x00000010&(data))>>4)
#define  GPIO_GPIE_1_get_gp33(data)                                              ((0x00000008&(data))>>3)
#define  GPIO_GPIE_1_get_gp32(data)                                              ((0x00000004&(data))>>2)
#define  GPIO_GPIE_1_get_gp31(data)                                              ((0x00000002&(data))>>1)
#define  GPIO_GPIE_1_get_write_data(data)                                        (0x00000001&(data))

#define  GPIO_GPDP                                                              0x18061120
#define  GPIO_GPDP_reg_addr                                                      "0xB8061120"
#define  GPIO_GPDP_reg                                                           0xB8061120
#define  GPIO_GPDP_inst_addr                                                     "0x0008"
#define  set_GPIO_GPDP_reg(data)                                                 (*((volatile unsigned int*)GPIO_GPDP_reg)=data)
#define  get_GPIO_GPDP_reg                                                       (*((volatile unsigned int*)GPIO_GPDP_reg))
#define  GPIO_GPDP_gpha30_shift                                                  (31)
#define  GPIO_GPDP_gpha29_shift                                                  (30)
#define  GPIO_GPDP_gpha28_shift                                                  (29)
#define  GPIO_GPDP_gpha27_shift                                                  (28)
#define  GPIO_GPDP_gpha26_shift                                                  (27)
#define  GPIO_GPDP_gpha25_shift                                                  (26)
#define  GPIO_GPDP_gpha24_shift                                                  (25)
#define  GPIO_GPDP_gpha23_shift                                                  (24)
#define  GPIO_GPDP_gpha22_shift                                                  (23)
#define  GPIO_GPDP_gpha21_shift                                                  (22)
#define  GPIO_GPDP_gpha20_shift                                                  (21)
#define  GPIO_GPDP_gpha19_shift                                                  (20)
#define  GPIO_GPDP_gpha18_shift                                                  (19)
#define  GPIO_GPDP_gpha17_shift                                                  (18)
#define  GPIO_GPDP_gpha16_shift                                                  (17)
#define  GPIO_GPDP_gpha15_shift                                                  (16)
#define  GPIO_GPDP_gpha14_shift                                                  (15)
#define  GPIO_GPDP_gpha13_shift                                                  (14)
#define  GPIO_GPDP_gpha12_shift                                                  (13)
#define  GPIO_GPDP_gpha11_shift                                                  (12)
#define  GPIO_GPDP_gpha10_shift                                                  (11)
#define  GPIO_GPDP_gpha9_shift                                                   (10)
#define  GPIO_GPDP_gpha8_shift                                                   (9)
#define  GPIO_GPDP_gpha7_shift                                                   (8)
#define  GPIO_GPDP_gpha6_shift                                                   (7)
#define  GPIO_GPDP_gpha5_shift                                                   (6)
#define  GPIO_GPDP_gpha4_shift                                                   (5)
#define  GPIO_GPDP_gpha3_shift                                                   (4)
#define  GPIO_GPDP_gpha2_shift                                                   (3)
#define  GPIO_GPDP_gpha1_shift                                                   (2)
#define  GPIO_GPDP_gpha0_shift                                                   (1)
#define  GPIO_GPDP_write_data_shift                                              (0)
#define  GPIO_GPDP_gpha30_mask                                                   (0x80000000)
#define  GPIO_GPDP_gpha29_mask                                                   (0x40000000)
#define  GPIO_GPDP_gpha28_mask                                                   (0x20000000)
#define  GPIO_GPDP_gpha27_mask                                                   (0x10000000)
#define  GPIO_GPDP_gpha26_mask                                                   (0x08000000)
#define  GPIO_GPDP_gpha25_mask                                                   (0x04000000)
#define  GPIO_GPDP_gpha24_mask                                                   (0x02000000)
#define  GPIO_GPDP_gpha23_mask                                                   (0x01000000)
#define  GPIO_GPDP_gpha22_mask                                                   (0x00800000)
#define  GPIO_GPDP_gpha21_mask                                                   (0x00400000)
#define  GPIO_GPDP_gpha20_mask                                                   (0x00200000)
#define  GPIO_GPDP_gpha19_mask                                                   (0x00100000)
#define  GPIO_GPDP_gpha18_mask                                                   (0x00080000)
#define  GPIO_GPDP_gpha17_mask                                                   (0x00040000)
#define  GPIO_GPDP_gpha16_mask                                                   (0x00020000)
#define  GPIO_GPDP_gpha15_mask                                                   (0x00010000)
#define  GPIO_GPDP_gpha14_mask                                                   (0x00008000)
#define  GPIO_GPDP_gpha13_mask                                                   (0x00004000)
#define  GPIO_GPDP_gpha12_mask                                                   (0x00002000)
#define  GPIO_GPDP_gpha11_mask                                                   (0x00001000)
#define  GPIO_GPDP_gpha10_mask                                                   (0x00000800)
#define  GPIO_GPDP_gpha9_mask                                                    (0x00000400)
#define  GPIO_GPDP_gpha8_mask                                                    (0x00000200)
#define  GPIO_GPDP_gpha7_mask                                                    (0x00000100)
#define  GPIO_GPDP_gpha6_mask                                                    (0x00000080)
#define  GPIO_GPDP_gpha5_mask                                                    (0x00000040)
#define  GPIO_GPDP_gpha4_mask                                                    (0x00000020)
#define  GPIO_GPDP_gpha3_mask                                                    (0x00000010)
#define  GPIO_GPDP_gpha2_mask                                                    (0x00000008)
#define  GPIO_GPDP_gpha1_mask                                                    (0x00000004)
#define  GPIO_GPDP_gpha0_mask                                                    (0x00000002)
#define  GPIO_GPDP_write_data_mask                                               (0x00000001)
#define  GPIO_GPDP_gpha30(data)                                                  (0x80000000&((data)<<31))
#define  GPIO_GPDP_gpha29(data)                                                  (0x40000000&((data)<<30))
#define  GPIO_GPDP_gpha28(data)                                                  (0x20000000&((data)<<29))
#define  GPIO_GPDP_gpha27(data)                                                  (0x10000000&((data)<<28))
#define  GPIO_GPDP_gpha26(data)                                                  (0x08000000&((data)<<27))
#define  GPIO_GPDP_gpha25(data)                                                  (0x04000000&((data)<<26))
#define  GPIO_GPDP_gpha24(data)                                                  (0x02000000&((data)<<25))
#define  GPIO_GPDP_gpha23(data)                                                  (0x01000000&((data)<<24))
#define  GPIO_GPDP_gpha22(data)                                                  (0x00800000&((data)<<23))
#define  GPIO_GPDP_gpha21(data)                                                  (0x00400000&((data)<<22))
#define  GPIO_GPDP_gpha20(data)                                                  (0x00200000&((data)<<21))
#define  GPIO_GPDP_gpha19(data)                                                  (0x00100000&((data)<<20))
#define  GPIO_GPDP_gpha18(data)                                                  (0x00080000&((data)<<19))
#define  GPIO_GPDP_gpha17(data)                                                  (0x00040000&((data)<<18))
#define  GPIO_GPDP_gpha16(data)                                                  (0x00020000&((data)<<17))
#define  GPIO_GPDP_gpha15(data)                                                  (0x00010000&((data)<<16))
#define  GPIO_GPDP_gpha14(data)                                                  (0x00008000&((data)<<15))
#define  GPIO_GPDP_gpha13(data)                                                  (0x00004000&((data)<<14))
#define  GPIO_GPDP_gpha12(data)                                                  (0x00002000&((data)<<13))
#define  GPIO_GPDP_gpha11(data)                                                  (0x00001000&((data)<<12))
#define  GPIO_GPDP_gpha10(data)                                                  (0x00000800&((data)<<11))
#define  GPIO_GPDP_gpha9(data)                                                   (0x00000400&((data)<<10))
#define  GPIO_GPDP_gpha8(data)                                                   (0x00000200&((data)<<9))
#define  GPIO_GPDP_gpha7(data)                                                   (0x00000100&((data)<<8))
#define  GPIO_GPDP_gpha6(data)                                                   (0x00000080&((data)<<7))
#define  GPIO_GPDP_gpha5(data)                                                   (0x00000040&((data)<<6))
#define  GPIO_GPDP_gpha4(data)                                                   (0x00000020&((data)<<5))
#define  GPIO_GPDP_gpha3(data)                                                   (0x00000010&((data)<<4))
#define  GPIO_GPDP_gpha2(data)                                                   (0x00000008&((data)<<3))
#define  GPIO_GPDP_gpha1(data)                                                   (0x00000004&((data)<<2))
#define  GPIO_GPDP_gpha0(data)                                                   (0x00000002&((data)<<1))
#define  GPIO_GPDP_write_data(data)                                              (0x00000001&(data))
#define  GPIO_GPDP_get_gpha30(data)                                              ((0x80000000&(data))>>31)
#define  GPIO_GPDP_get_gpha29(data)                                              ((0x40000000&(data))>>30)
#define  GPIO_GPDP_get_gpha28(data)                                              ((0x20000000&(data))>>29)
#define  GPIO_GPDP_get_gpha27(data)                                              ((0x10000000&(data))>>28)
#define  GPIO_GPDP_get_gpha26(data)                                              ((0x08000000&(data))>>27)
#define  GPIO_GPDP_get_gpha25(data)                                              ((0x04000000&(data))>>26)
#define  GPIO_GPDP_get_gpha24(data)                                              ((0x02000000&(data))>>25)
#define  GPIO_GPDP_get_gpha23(data)                                              ((0x01000000&(data))>>24)
#define  GPIO_GPDP_get_gpha22(data)                                              ((0x00800000&(data))>>23)
#define  GPIO_GPDP_get_gpha21(data)                                              ((0x00400000&(data))>>22)
#define  GPIO_GPDP_get_gpha20(data)                                              ((0x00200000&(data))>>21)
#define  GPIO_GPDP_get_gpha19(data)                                              ((0x00100000&(data))>>20)
#define  GPIO_GPDP_get_gpha18(data)                                              ((0x00080000&(data))>>19)
#define  GPIO_GPDP_get_gpha17(data)                                              ((0x00040000&(data))>>18)
#define  GPIO_GPDP_get_gpha16(data)                                              ((0x00020000&(data))>>17)
#define  GPIO_GPDP_get_gpha15(data)                                              ((0x00010000&(data))>>16)
#define  GPIO_GPDP_get_gpha14(data)                                              ((0x00008000&(data))>>15)
#define  GPIO_GPDP_get_gpha13(data)                                              ((0x00004000&(data))>>14)
#define  GPIO_GPDP_get_gpha12(data)                                              ((0x00002000&(data))>>13)
#define  GPIO_GPDP_get_gpha11(data)                                              ((0x00001000&(data))>>12)
#define  GPIO_GPDP_get_gpha10(data)                                              ((0x00000800&(data))>>11)
#define  GPIO_GPDP_get_gpha9(data)                                               ((0x00000400&(data))>>10)
#define  GPIO_GPDP_get_gpha8(data)                                               ((0x00000200&(data))>>9)
#define  GPIO_GPDP_get_gpha7(data)                                               ((0x00000100&(data))>>8)
#define  GPIO_GPDP_get_gpha6(data)                                               ((0x00000080&(data))>>7)
#define  GPIO_GPDP_get_gpha5(data)                                               ((0x00000040&(data))>>6)
#define  GPIO_GPDP_get_gpha4(data)                                               ((0x00000020&(data))>>5)
#define  GPIO_GPDP_get_gpha3(data)                                               ((0x00000010&(data))>>4)
#define  GPIO_GPDP_get_gpha2(data)                                               ((0x00000008&(data))>>3)
#define  GPIO_GPDP_get_gpha1(data)                                               ((0x00000004&(data))>>2)
#define  GPIO_GPDP_get_gpha0(data)                                               ((0x00000002&(data))>>1)
#define  GPIO_GPDP_get_write_data(data)                                          (0x00000001&(data))

#define  GPIO_GPDP_1                                                            0x18061124
#define  GPIO_GPDP_1_reg_addr                                                    "0xB8061124"
#define  GPIO_GPDP_1_reg                                                         0xB8061124
#define  GPIO_GPDP_1_inst_addr                                                   "0x0009"
#define  set_GPIO_GPDP_1_reg(data)                                               (*((volatile unsigned int*)GPIO_GPDP_1_reg)=data)
#define  get_GPIO_GPDP_1_reg                                                     (*((volatile unsigned int*)GPIO_GPDP_1_reg))
#define  GPIO_GPDP_1_gpha60_shift                                                (30)
#define  GPIO_GPDP_1_gpha59_shift                                                (29)
#define  GPIO_GPDP_1_gpha58_shift                                                (28)
#define  GPIO_GPDP_1_gpha57_shift                                                (27)
#define  GPIO_GPDP_1_gpha56_shift                                                (26)
#define  GPIO_GPDP_1_gpha55_shift                                                (25)
#define  GPIO_GPDP_1_gpha54_shift                                                (24)
#define  GPIO_GPDP_1_gpha53_shift                                                (23)
#define  GPIO_GPDP_1_gpha52_shift                                                (22)
#define  GPIO_GPDP_1_gpha51_shift                                                (21)
#define  GPIO_GPDP_1_gpha50_shift                                                (20)
#define  GPIO_GPDP_1_gpha49_shift                                                (19)
#define  GPIO_GPDP_1_gpha48_shift                                                (18)
#define  GPIO_GPDP_1_gpha47_shift                                                (17)
#define  GPIO_GPDP_1_gpha46_shift                                                (16)
#define  GPIO_GPDP_1_gpha45_shift                                                (15)
#define  GPIO_GPDP_1_gpha44_shift                                                (14)
#define  GPIO_GPDP_1_gpha43_shift                                                (13)
#define  GPIO_GPDP_1_gpha42_shift                                                (12)
#define  GPIO_GPDP_1_gpha41_shift                                                (11)
#define  GPIO_GPDP_1_gpha40_shift                                                (10)
#define  GPIO_GPDP_1_gpha39_shift                                                (9)
#define  GPIO_GPDP_1_gpha38_shift                                                (8)
#define  GPIO_GPDP_1_gpha37_shift                                                (7)
#define  GPIO_GPDP_1_gpha36_shift                                                (6)
#define  GPIO_GPDP_1_gpha35_shift                                                (5)
#define  GPIO_GPDP_1_gpha34_shift                                                (4)
#define  GPIO_GPDP_1_gpha33_shift                                                (3)
#define  GPIO_GPDP_1_gpha32_shift                                                (2)
#define  GPIO_GPDP_1_gpha31_shift                                                (1)
#define  GPIO_GPDP_1_write_data_shift                                            (0)
#define  GPIO_GPDP_1_gpha60_mask                                                 (0x40000000)
#define  GPIO_GPDP_1_gpha59_mask                                                 (0x20000000)
#define  GPIO_GPDP_1_gpha58_mask                                                 (0x10000000)
#define  GPIO_GPDP_1_gpha57_mask                                                 (0x08000000)
#define  GPIO_GPDP_1_gpha56_mask                                                 (0x04000000)
#define  GPIO_GPDP_1_gpha55_mask                                                 (0x02000000)
#define  GPIO_GPDP_1_gpha54_mask                                                 (0x01000000)
#define  GPIO_GPDP_1_gpha53_mask                                                 (0x00800000)
#define  GPIO_GPDP_1_gpha52_mask                                                 (0x00400000)
#define  GPIO_GPDP_1_gpha51_mask                                                 (0x00200000)
#define  GPIO_GPDP_1_gpha50_mask                                                 (0x00100000)
#define  GPIO_GPDP_1_gpha49_mask                                                 (0x00080000)
#define  GPIO_GPDP_1_gpha48_mask                                                 (0x00040000)
#define  GPIO_GPDP_1_gpha47_mask                                                 (0x00020000)
#define  GPIO_GPDP_1_gpha46_mask                                                 (0x00010000)
#define  GPIO_GPDP_1_gpha45_mask                                                 (0x00008000)
#define  GPIO_GPDP_1_gpha44_mask                                                 (0x00004000)
#define  GPIO_GPDP_1_gpha43_mask                                                 (0x00002000)
#define  GPIO_GPDP_1_gpha42_mask                                                 (0x00001000)
#define  GPIO_GPDP_1_gpha41_mask                                                 (0x00000800)
#define  GPIO_GPDP_1_gpha40_mask                                                 (0x00000400)
#define  GPIO_GPDP_1_gpha39_mask                                                 (0x00000200)
#define  GPIO_GPDP_1_gpha38_mask                                                 (0x00000100)
#define  GPIO_GPDP_1_gpha37_mask                                                 (0x00000080)
#define  GPIO_GPDP_1_gpha36_mask                                                 (0x00000040)
#define  GPIO_GPDP_1_gpha35_mask                                                 (0x00000020)
#define  GPIO_GPDP_1_gpha34_mask                                                 (0x00000010)
#define  GPIO_GPDP_1_gpha33_mask                                                 (0x00000008)
#define  GPIO_GPDP_1_gpha32_mask                                                 (0x00000004)
#define  GPIO_GPDP_1_gpha31_mask                                                 (0x00000002)
#define  GPIO_GPDP_1_write_data_mask                                             (0x00000001)
#define  GPIO_GPDP_1_gpha60(data)                                                (0x40000000&((data)<<30))
#define  GPIO_GPDP_1_gpha59(data)                                                (0x20000000&((data)<<29))
#define  GPIO_GPDP_1_gpha58(data)                                                (0x10000000&((data)<<28))
#define  GPIO_GPDP_1_gpha57(data)                                                (0x08000000&((data)<<27))
#define  GPIO_GPDP_1_gpha56(data)                                                (0x04000000&((data)<<26))
#define  GPIO_GPDP_1_gpha55(data)                                                (0x02000000&((data)<<25))
#define  GPIO_GPDP_1_gpha54(data)                                                (0x01000000&((data)<<24))
#define  GPIO_GPDP_1_gpha53(data)                                                (0x00800000&((data)<<23))
#define  GPIO_GPDP_1_gpha52(data)                                                (0x00400000&((data)<<22))
#define  GPIO_GPDP_1_gpha51(data)                                                (0x00200000&((data)<<21))
#define  GPIO_GPDP_1_gpha50(data)                                                (0x00100000&((data)<<20))
#define  GPIO_GPDP_1_gpha49(data)                                                (0x00080000&((data)<<19))
#define  GPIO_GPDP_1_gpha48(data)                                                (0x00040000&((data)<<18))
#define  GPIO_GPDP_1_gpha47(data)                                                (0x00020000&((data)<<17))
#define  GPIO_GPDP_1_gpha46(data)                                                (0x00010000&((data)<<16))
#define  GPIO_GPDP_1_gpha45(data)                                                (0x00008000&((data)<<15))
#define  GPIO_GPDP_1_gpha44(data)                                                (0x00004000&((data)<<14))
#define  GPIO_GPDP_1_gpha43(data)                                                (0x00002000&((data)<<13))
#define  GPIO_GPDP_1_gpha42(data)                                                (0x00001000&((data)<<12))
#define  GPIO_GPDP_1_gpha41(data)                                                (0x00000800&((data)<<11))
#define  GPIO_GPDP_1_gpha40(data)                                                (0x00000400&((data)<<10))
#define  GPIO_GPDP_1_gpha39(data)                                                (0x00000200&((data)<<9))
#define  GPIO_GPDP_1_gpha38(data)                                                (0x00000100&((data)<<8))
#define  GPIO_GPDP_1_gpha37(data)                                                (0x00000080&((data)<<7))
#define  GPIO_GPDP_1_gpha36(data)                                                (0x00000040&((data)<<6))
#define  GPIO_GPDP_1_gpha35(data)                                                (0x00000020&((data)<<5))
#define  GPIO_GPDP_1_gpha34(data)                                                (0x00000010&((data)<<4))
#define  GPIO_GPDP_1_gpha33(data)                                                (0x00000008&((data)<<3))
#define  GPIO_GPDP_1_gpha32(data)                                                (0x00000004&((data)<<2))
#define  GPIO_GPDP_1_gpha31(data)                                                (0x00000002&((data)<<1))
#define  GPIO_GPDP_1_write_data(data)                                            (0x00000001&(data))
#define  GPIO_GPDP_1_get_gpha60(data)                                            ((0x40000000&(data))>>30)
#define  GPIO_GPDP_1_get_gpha59(data)                                            ((0x20000000&(data))>>29)
#define  GPIO_GPDP_1_get_gpha58(data)                                            ((0x10000000&(data))>>28)
#define  GPIO_GPDP_1_get_gpha57(data)                                            ((0x08000000&(data))>>27)
#define  GPIO_GPDP_1_get_gpha56(data)                                            ((0x04000000&(data))>>26)
#define  GPIO_GPDP_1_get_gpha55(data)                                            ((0x02000000&(data))>>25)
#define  GPIO_GPDP_1_get_gpha54(data)                                            ((0x01000000&(data))>>24)
#define  GPIO_GPDP_1_get_gpha53(data)                                            ((0x00800000&(data))>>23)
#define  GPIO_GPDP_1_get_gpha52(data)                                            ((0x00400000&(data))>>22)
#define  GPIO_GPDP_1_get_gpha51(data)                                            ((0x00200000&(data))>>21)
#define  GPIO_GPDP_1_get_gpha50(data)                                            ((0x00100000&(data))>>20)
#define  GPIO_GPDP_1_get_gpha49(data)                                            ((0x00080000&(data))>>19)
#define  GPIO_GPDP_1_get_gpha48(data)                                            ((0x00040000&(data))>>18)
#define  GPIO_GPDP_1_get_gpha47(data)                                            ((0x00020000&(data))>>17)
#define  GPIO_GPDP_1_get_gpha46(data)                                            ((0x00010000&(data))>>16)
#define  GPIO_GPDP_1_get_gpha45(data)                                            ((0x00008000&(data))>>15)
#define  GPIO_GPDP_1_get_gpha44(data)                                            ((0x00004000&(data))>>14)
#define  GPIO_GPDP_1_get_gpha43(data)                                            ((0x00002000&(data))>>13)
#define  GPIO_GPDP_1_get_gpha42(data)                                            ((0x00001000&(data))>>12)
#define  GPIO_GPDP_1_get_gpha41(data)                                            ((0x00000800&(data))>>11)
#define  GPIO_GPDP_1_get_gpha40(data)                                            ((0x00000400&(data))>>10)
#define  GPIO_GPDP_1_get_gpha39(data)                                            ((0x00000200&(data))>>9)
#define  GPIO_GPDP_1_get_gpha38(data)                                            ((0x00000100&(data))>>8)
#define  GPIO_GPDP_1_get_gpha37(data)                                            ((0x00000080&(data))>>7)
#define  GPIO_GPDP_1_get_gpha36(data)                                            ((0x00000040&(data))>>6)
#define  GPIO_GPDP_1_get_gpha35(data)                                            ((0x00000020&(data))>>5)
#define  GPIO_GPDP_1_get_gpha34(data)                                            ((0x00000010&(data))>>4)
#define  GPIO_GPDP_1_get_gpha33(data)                                            ((0x00000008&(data))>>3)
#define  GPIO_GPDP_1_get_gpha32(data)                                            ((0x00000004&(data))>>2)
#define  GPIO_GPDP_1_get_gpha31(data)                                            ((0x00000002&(data))>>1)
#define  GPIO_GPDP_1_get_write_data(data)                                        (0x00000001&(data))

#define  GPIO_GPDEB                                                             0x18061128
#define  GPIO_GPDEB_reg_addr                                                     "0xB8061128"
#define  GPIO_GPDEB_reg                                                          0xB8061128
#define  GPIO_GPDEB_inst_addr                                                    "0x000A"
#define  set_GPIO_GPDEB_reg(data)                                                (*((volatile unsigned int*)GPIO_GPDEB_reg)=data)
#define  get_GPIO_GPDEB_reg                                                      (*((volatile unsigned int*)GPIO_GPDEB_reg))
#define  GPIO_GPDEB_write_en4_shift                                              (15)
#define  GPIO_GPDEB_clk4_shift                                                   (12)
#define  GPIO_GPDEB_write_en3_shift                                              (11)
#define  GPIO_GPDEB_clk3_shift                                                   (8)
#define  GPIO_GPDEB_write_en2_shift                                              (7)
#define  GPIO_GPDEB_clk2_shift                                                   (4)
#define  GPIO_GPDEB_write_en1_shift                                              (3)
#define  GPIO_GPDEB_clk1_shift                                                   (0)
#define  GPIO_GPDEB_write_en4_mask                                               (0x00008000)
#define  GPIO_GPDEB_clk4_mask                                                    (0x00007000)
#define  GPIO_GPDEB_write_en3_mask                                               (0x00000800)
#define  GPIO_GPDEB_clk3_mask                                                    (0x00000700)
#define  GPIO_GPDEB_write_en2_mask                                               (0x00000080)
#define  GPIO_GPDEB_clk2_mask                                                    (0x00000070)
#define  GPIO_GPDEB_write_en1_mask                                               (0x00000008)
#define  GPIO_GPDEB_clk1_mask                                                    (0x00000007)
#define  GPIO_GPDEB_write_en4(data)                                              (0x00008000&((data)<<15))
#define  GPIO_GPDEB_clk4(data)                                                   (0x00007000&((data)<<12))
#define  GPIO_GPDEB_write_en3(data)                                              (0x00000800&((data)<<11))
#define  GPIO_GPDEB_clk3(data)                                                   (0x00000700&((data)<<8))
#define  GPIO_GPDEB_write_en2(data)                                              (0x00000080&((data)<<7))
#define  GPIO_GPDEB_clk2(data)                                                   (0x00000070&((data)<<4))
#define  GPIO_GPDEB_write_en1(data)                                              (0x00000008&((data)<<3))
#define  GPIO_GPDEB_clk1(data)                                                   (0x00000007&(data))
#define  GPIO_GPDEB_get_write_en4(data)                                          ((0x00008000&(data))>>15)
#define  GPIO_GPDEB_get_clk4(data)                                               ((0x00007000&(data))>>12)
#define  GPIO_GPDEB_get_write_en3(data)                                          ((0x00000800&(data))>>11)
#define  GPIO_GPDEB_get_clk3(data)                                               ((0x00000700&(data))>>8)
#define  GPIO_GPDEB_get_write_en2(data)                                          ((0x00000080&(data))>>7)
#define  GPIO_GPDEB_get_clk2(data)                                               ((0x00000070&(data))>>4)
#define  GPIO_GPDEB_get_write_en1(data)                                          ((0x00000008&(data))>>3)
#define  GPIO_GPDEB_get_clk1(data)                                               (0x00000007&(data))

#define  GPIO_ISR_GP_ASSERT                                                     0x1806112C
#define  GPIO_ISR_GP_ASSERT_reg_addr                                             "0xB806112C"
#define  GPIO_ISR_GP_ASSERT_reg                                                  0xB806112C
#define  GPIO_ISR_GP_ASSERT_inst_addr                                            "0x000B"
#define  set_GPIO_ISR_GP_ASSERT_reg(data)                                        (*((volatile unsigned int*)GPIO_ISR_GP_ASSERT_reg)=data)
#define  get_GPIO_ISR_GP_ASSERT_reg                                              (*((volatile unsigned int*)GPIO_ISR_GP_ASSERT_reg))
#define  GPIO_ISR_GP_ASSERT_int30_a_shift                                        (31)
#define  GPIO_ISR_GP_ASSERT_int29_a_shift                                        (30)
#define  GPIO_ISR_GP_ASSERT_int28_a_shift                                        (29)
#define  GPIO_ISR_GP_ASSERT_int27_a_shift                                        (28)
#define  GPIO_ISR_GP_ASSERT_int26_a_shift                                        (27)
#define  GPIO_ISR_GP_ASSERT_int25_a_shift                                        (26)
#define  GPIO_ISR_GP_ASSERT_int24_a_shift                                        (25)
#define  GPIO_ISR_GP_ASSERT_int23_a_shift                                        (24)
#define  GPIO_ISR_GP_ASSERT_int22_a_shift                                        (23)
#define  GPIO_ISR_GP_ASSERT_int21_a_shift                                        (22)
#define  GPIO_ISR_GP_ASSERT_int20_a_shift                                        (21)
#define  GPIO_ISR_GP_ASSERT_int19_a_shift                                        (20)
#define  GPIO_ISR_GP_ASSERT_int18_a_shift                                        (19)
#define  GPIO_ISR_GP_ASSERT_int17_a_shift                                        (18)
#define  GPIO_ISR_GP_ASSERT_int16_a_shift                                        (17)
#define  GPIO_ISR_GP_ASSERT_int15_a_shift                                        (16)
#define  GPIO_ISR_GP_ASSERT_int14_a_shift                                        (15)
#define  GPIO_ISR_GP_ASSERT_int13_a_shift                                        (14)
#define  GPIO_ISR_GP_ASSERT_int12_a_shift                                        (13)
#define  GPIO_ISR_GP_ASSERT_int11_a_shift                                        (12)
#define  GPIO_ISR_GP_ASSERT_int10_a_shift                                        (11)
#define  GPIO_ISR_GP_ASSERT_int9_a_shift                                         (10)
#define  GPIO_ISR_GP_ASSERT_int8_a_shift                                         (9)
#define  GPIO_ISR_GP_ASSERT_int7_a_shift                                         (8)
#define  GPIO_ISR_GP_ASSERT_int6_a_shift                                         (7)
#define  GPIO_ISR_GP_ASSERT_int5_a_shift                                         (6)
#define  GPIO_ISR_GP_ASSERT_int4_a_shift                                         (5)
#define  GPIO_ISR_GP_ASSERT_int3_a_shift                                         (4)
#define  GPIO_ISR_GP_ASSERT_int2_a_shift                                         (3)
#define  GPIO_ISR_GP_ASSERT_int1_a_shift                                         (2)
#define  GPIO_ISR_GP_ASSERT_int0_a_shift                                         (1)
#define  GPIO_ISR_GP_ASSERT_write_data_shift                                     (0)
#define  GPIO_ISR_GP_ASSERT_int30_a_mask                                         (0x80000000)
#define  GPIO_ISR_GP_ASSERT_int29_a_mask                                         (0x40000000)
#define  GPIO_ISR_GP_ASSERT_int28_a_mask                                         (0x20000000)
#define  GPIO_ISR_GP_ASSERT_int27_a_mask                                         (0x10000000)
#define  GPIO_ISR_GP_ASSERT_int26_a_mask                                         (0x08000000)
#define  GPIO_ISR_GP_ASSERT_int25_a_mask                                         (0x04000000)
#define  GPIO_ISR_GP_ASSERT_int24_a_mask                                         (0x02000000)
#define  GPIO_ISR_GP_ASSERT_int23_a_mask                                         (0x01000000)
#define  GPIO_ISR_GP_ASSERT_int22_a_mask                                         (0x00800000)
#define  GPIO_ISR_GP_ASSERT_int21_a_mask                                         (0x00400000)
#define  GPIO_ISR_GP_ASSERT_int20_a_mask                                         (0x00200000)
#define  GPIO_ISR_GP_ASSERT_int19_a_mask                                         (0x00100000)
#define  GPIO_ISR_GP_ASSERT_int18_a_mask                                         (0x00080000)
#define  GPIO_ISR_GP_ASSERT_int17_a_mask                                         (0x00040000)
#define  GPIO_ISR_GP_ASSERT_int16_a_mask                                         (0x00020000)
#define  GPIO_ISR_GP_ASSERT_int15_a_mask                                         (0x00010000)
#define  GPIO_ISR_GP_ASSERT_int14_a_mask                                         (0x00008000)
#define  GPIO_ISR_GP_ASSERT_int13_a_mask                                         (0x00004000)
#define  GPIO_ISR_GP_ASSERT_int12_a_mask                                         (0x00002000)
#define  GPIO_ISR_GP_ASSERT_int11_a_mask                                         (0x00001000)
#define  GPIO_ISR_GP_ASSERT_int10_a_mask                                         (0x00000800)
#define  GPIO_ISR_GP_ASSERT_int9_a_mask                                          (0x00000400)
#define  GPIO_ISR_GP_ASSERT_int8_a_mask                                          (0x00000200)
#define  GPIO_ISR_GP_ASSERT_int7_a_mask                                          (0x00000100)
#define  GPIO_ISR_GP_ASSERT_int6_a_mask                                          (0x00000080)
#define  GPIO_ISR_GP_ASSERT_int5_a_mask                                          (0x00000040)
#define  GPIO_ISR_GP_ASSERT_int4_a_mask                                          (0x00000020)
#define  GPIO_ISR_GP_ASSERT_int3_a_mask                                          (0x00000010)
#define  GPIO_ISR_GP_ASSERT_int2_a_mask                                          (0x00000008)
#define  GPIO_ISR_GP_ASSERT_int1_a_mask                                          (0x00000004)
#define  GPIO_ISR_GP_ASSERT_int0_a_mask                                          (0x00000002)
#define  GPIO_ISR_GP_ASSERT_write_data_mask                                      (0x00000001)
#define  GPIO_ISR_GP_ASSERT_int30_a(data)                                        (0x80000000&((data)<<31))
#define  GPIO_ISR_GP_ASSERT_int29_a(data)                                        (0x40000000&((data)<<30))
#define  GPIO_ISR_GP_ASSERT_int28_a(data)                                        (0x20000000&((data)<<29))
#define  GPIO_ISR_GP_ASSERT_int27_a(data)                                        (0x10000000&((data)<<28))
#define  GPIO_ISR_GP_ASSERT_int26_a(data)                                        (0x08000000&((data)<<27))
#define  GPIO_ISR_GP_ASSERT_int25_a(data)                                        (0x04000000&((data)<<26))
#define  GPIO_ISR_GP_ASSERT_int24_a(data)                                        (0x02000000&((data)<<25))
#define  GPIO_ISR_GP_ASSERT_int23_a(data)                                        (0x01000000&((data)<<24))
#define  GPIO_ISR_GP_ASSERT_int22_a(data)                                        (0x00800000&((data)<<23))
#define  GPIO_ISR_GP_ASSERT_int21_a(data)                                        (0x00400000&((data)<<22))
#define  GPIO_ISR_GP_ASSERT_int20_a(data)                                        (0x00200000&((data)<<21))
#define  GPIO_ISR_GP_ASSERT_int19_a(data)                                        (0x00100000&((data)<<20))
#define  GPIO_ISR_GP_ASSERT_int18_a(data)                                        (0x00080000&((data)<<19))
#define  GPIO_ISR_GP_ASSERT_int17_a(data)                                        (0x00040000&((data)<<18))
#define  GPIO_ISR_GP_ASSERT_int16_a(data)                                        (0x00020000&((data)<<17))
#define  GPIO_ISR_GP_ASSERT_int15_a(data)                                        (0x00010000&((data)<<16))
#define  GPIO_ISR_GP_ASSERT_int14_a(data)                                        (0x00008000&((data)<<15))
#define  GPIO_ISR_GP_ASSERT_int13_a(data)                                        (0x00004000&((data)<<14))
#define  GPIO_ISR_GP_ASSERT_int12_a(data)                                        (0x00002000&((data)<<13))
#define  GPIO_ISR_GP_ASSERT_int11_a(data)                                        (0x00001000&((data)<<12))
#define  GPIO_ISR_GP_ASSERT_int10_a(data)                                        (0x00000800&((data)<<11))
#define  GPIO_ISR_GP_ASSERT_int9_a(data)                                         (0x00000400&((data)<<10))
#define  GPIO_ISR_GP_ASSERT_int8_a(data)                                         (0x00000200&((data)<<9))
#define  GPIO_ISR_GP_ASSERT_int7_a(data)                                         (0x00000100&((data)<<8))
#define  GPIO_ISR_GP_ASSERT_int6_a(data)                                         (0x00000080&((data)<<7))
#define  GPIO_ISR_GP_ASSERT_int5_a(data)                                         (0x00000040&((data)<<6))
#define  GPIO_ISR_GP_ASSERT_int4_a(data)                                         (0x00000020&((data)<<5))
#define  GPIO_ISR_GP_ASSERT_int3_a(data)                                         (0x00000010&((data)<<4))
#define  GPIO_ISR_GP_ASSERT_int2_a(data)                                         (0x00000008&((data)<<3))
#define  GPIO_ISR_GP_ASSERT_int1_a(data)                                         (0x00000004&((data)<<2))
#define  GPIO_ISR_GP_ASSERT_int0_a(data)                                         (0x00000002&((data)<<1))
#define  GPIO_ISR_GP_ASSERT_write_data(data)                                     (0x00000001&(data))
#define  GPIO_ISR_GP_ASSERT_get_int30_a(data)                                    ((0x80000000&(data))>>31)
#define  GPIO_ISR_GP_ASSERT_get_int29_a(data)                                    ((0x40000000&(data))>>30)
#define  GPIO_ISR_GP_ASSERT_get_int28_a(data)                                    ((0x20000000&(data))>>29)
#define  GPIO_ISR_GP_ASSERT_get_int27_a(data)                                    ((0x10000000&(data))>>28)
#define  GPIO_ISR_GP_ASSERT_get_int26_a(data)                                    ((0x08000000&(data))>>27)
#define  GPIO_ISR_GP_ASSERT_get_int25_a(data)                                    ((0x04000000&(data))>>26)
#define  GPIO_ISR_GP_ASSERT_get_int24_a(data)                                    ((0x02000000&(data))>>25)
#define  GPIO_ISR_GP_ASSERT_get_int23_a(data)                                    ((0x01000000&(data))>>24)
#define  GPIO_ISR_GP_ASSERT_get_int22_a(data)                                    ((0x00800000&(data))>>23)
#define  GPIO_ISR_GP_ASSERT_get_int21_a(data)                                    ((0x00400000&(data))>>22)
#define  GPIO_ISR_GP_ASSERT_get_int20_a(data)                                    ((0x00200000&(data))>>21)
#define  GPIO_ISR_GP_ASSERT_get_int19_a(data)                                    ((0x00100000&(data))>>20)
#define  GPIO_ISR_GP_ASSERT_get_int18_a(data)                                    ((0x00080000&(data))>>19)
#define  GPIO_ISR_GP_ASSERT_get_int17_a(data)                                    ((0x00040000&(data))>>18)
#define  GPIO_ISR_GP_ASSERT_get_int16_a(data)                                    ((0x00020000&(data))>>17)
#define  GPIO_ISR_GP_ASSERT_get_int15_a(data)                                    ((0x00010000&(data))>>16)
#define  GPIO_ISR_GP_ASSERT_get_int14_a(data)                                    ((0x00008000&(data))>>15)
#define  GPIO_ISR_GP_ASSERT_get_int13_a(data)                                    ((0x00004000&(data))>>14)
#define  GPIO_ISR_GP_ASSERT_get_int12_a(data)                                    ((0x00002000&(data))>>13)
#define  GPIO_ISR_GP_ASSERT_get_int11_a(data)                                    ((0x00001000&(data))>>12)
#define  GPIO_ISR_GP_ASSERT_get_int10_a(data)                                    ((0x00000800&(data))>>11)
#define  GPIO_ISR_GP_ASSERT_get_int9_a(data)                                     ((0x00000400&(data))>>10)
#define  GPIO_ISR_GP_ASSERT_get_int8_a(data)                                     ((0x00000200&(data))>>9)
#define  GPIO_ISR_GP_ASSERT_get_int7_a(data)                                     ((0x00000100&(data))>>8)
#define  GPIO_ISR_GP_ASSERT_get_int6_a(data)                                     ((0x00000080&(data))>>7)
#define  GPIO_ISR_GP_ASSERT_get_int5_a(data)                                     ((0x00000040&(data))>>6)
#define  GPIO_ISR_GP_ASSERT_get_int4_a(data)                                     ((0x00000020&(data))>>5)
#define  GPIO_ISR_GP_ASSERT_get_int3_a(data)                                     ((0x00000010&(data))>>4)
#define  GPIO_ISR_GP_ASSERT_get_int2_a(data)                                     ((0x00000008&(data))>>3)
#define  GPIO_ISR_GP_ASSERT_get_int1_a(data)                                     ((0x00000004&(data))>>2)
#define  GPIO_ISR_GP_ASSERT_get_int0_a(data)                                     ((0x00000002&(data))>>1)
#define  GPIO_ISR_GP_ASSERT_get_write_data(data)                                 (0x00000001&(data))

#define  GPIO_ISR_GP_ASSERT_1                                                   0x18061130
#define  GPIO_ISR_GP_ASSERT_1_reg_addr                                           "0xB8061130"
#define  GPIO_ISR_GP_ASSERT_1_reg                                                0xB8061130
#define  GPIO_ISR_GP_ASSERT_1_inst_addr                                          "0x000C"
#define  set_GPIO_ISR_GP_ASSERT_1_reg(data)                                      (*((volatile unsigned int*)GPIO_ISR_GP_ASSERT_1_reg)=data)
#define  get_GPIO_ISR_GP_ASSERT_1_reg                                            (*((volatile unsigned int*)GPIO_ISR_GP_ASSERT_1_reg))
#define  GPIO_ISR_GP_ASSERT_1_int60_a_shift                                      (30)
#define  GPIO_ISR_GP_ASSERT_1_int59_a_shift                                      (29)
#define  GPIO_ISR_GP_ASSERT_1_int58_a_shift                                      (28)
#define  GPIO_ISR_GP_ASSERT_1_int57_a_shift                                      (27)
#define  GPIO_ISR_GP_ASSERT_1_int56_a_shift                                      (26)
#define  GPIO_ISR_GP_ASSERT_1_int55_a_shift                                      (25)
#define  GPIO_ISR_GP_ASSERT_1_int54_a_shift                                      (24)
#define  GPIO_ISR_GP_ASSERT_1_int53_a_shift                                      (23)
#define  GPIO_ISR_GP_ASSERT_1_int52_a_shift                                      (22)
#define  GPIO_ISR_GP_ASSERT_1_int51_a_shift                                      (21)
#define  GPIO_ISR_GP_ASSERT_1_int50_a_shift                                      (20)
#define  GPIO_ISR_GP_ASSERT_1_int49_a_shift                                      (19)
#define  GPIO_ISR_GP_ASSERT_1_int48_a_shift                                      (18)
#define  GPIO_ISR_GP_ASSERT_1_int47_a_shift                                      (17)
#define  GPIO_ISR_GP_ASSERT_1_int46_a_shift                                      (16)
#define  GPIO_ISR_GP_ASSERT_1_int45_a_shift                                      (15)
#define  GPIO_ISR_GP_ASSERT_1_int44_a_shift                                      (14)
#define  GPIO_ISR_GP_ASSERT_1_int43_a_shift                                      (13)
#define  GPIO_ISR_GP_ASSERT_1_int42_a_shift                                      (12)
#define  GPIO_ISR_GP_ASSERT_1_int41_a_shift                                      (11)
#define  GPIO_ISR_GP_ASSERT_1_int40_a_shift                                      (10)
#define  GPIO_ISR_GP_ASSERT_1_int39_a_shift                                      (9)
#define  GPIO_ISR_GP_ASSERT_1_int38_a_shift                                      (8)
#define  GPIO_ISR_GP_ASSERT_1_int37_a_shift                                      (7)
#define  GPIO_ISR_GP_ASSERT_1_int36_a_shift                                      (6)
#define  GPIO_ISR_GP_ASSERT_1_int35_a_shift                                      (5)
#define  GPIO_ISR_GP_ASSERT_1_int34_a_shift                                      (4)
#define  GPIO_ISR_GP_ASSERT_1_int33_a_shift                                      (3)
#define  GPIO_ISR_GP_ASSERT_1_int32_a_shift                                      (2)
#define  GPIO_ISR_GP_ASSERT_1_int31_a_shift                                      (1)
#define  GPIO_ISR_GP_ASSERT_1_write_data_shift                                   (0)
#define  GPIO_ISR_GP_ASSERT_1_int60_a_mask                                       (0x40000000)
#define  GPIO_ISR_GP_ASSERT_1_int59_a_mask                                       (0x20000000)
#define  GPIO_ISR_GP_ASSERT_1_int58_a_mask                                       (0x10000000)
#define  GPIO_ISR_GP_ASSERT_1_int57_a_mask                                       (0x08000000)
#define  GPIO_ISR_GP_ASSERT_1_int56_a_mask                                       (0x04000000)
#define  GPIO_ISR_GP_ASSERT_1_int55_a_mask                                       (0x02000000)
#define  GPIO_ISR_GP_ASSERT_1_int54_a_mask                                       (0x01000000)
#define  GPIO_ISR_GP_ASSERT_1_int53_a_mask                                       (0x00800000)
#define  GPIO_ISR_GP_ASSERT_1_int52_a_mask                                       (0x00400000)
#define  GPIO_ISR_GP_ASSERT_1_int51_a_mask                                       (0x00200000)
#define  GPIO_ISR_GP_ASSERT_1_int50_a_mask                                       (0x00100000)
#define  GPIO_ISR_GP_ASSERT_1_int49_a_mask                                       (0x00080000)
#define  GPIO_ISR_GP_ASSERT_1_int48_a_mask                                       (0x00040000)
#define  GPIO_ISR_GP_ASSERT_1_int47_a_mask                                       (0x00020000)
#define  GPIO_ISR_GP_ASSERT_1_int46_a_mask                                       (0x00010000)
#define  GPIO_ISR_GP_ASSERT_1_int45_a_mask                                       (0x00008000)
#define  GPIO_ISR_GP_ASSERT_1_int44_a_mask                                       (0x00004000)
#define  GPIO_ISR_GP_ASSERT_1_int43_a_mask                                       (0x00002000)
#define  GPIO_ISR_GP_ASSERT_1_int42_a_mask                                       (0x00001000)
#define  GPIO_ISR_GP_ASSERT_1_int41_a_mask                                       (0x00000800)
#define  GPIO_ISR_GP_ASSERT_1_int40_a_mask                                       (0x00000400)
#define  GPIO_ISR_GP_ASSERT_1_int39_a_mask                                       (0x00000200)
#define  GPIO_ISR_GP_ASSERT_1_int38_a_mask                                       (0x00000100)
#define  GPIO_ISR_GP_ASSERT_1_int37_a_mask                                       (0x00000080)
#define  GPIO_ISR_GP_ASSERT_1_int36_a_mask                                       (0x00000040)
#define  GPIO_ISR_GP_ASSERT_1_int35_a_mask                                       (0x00000020)
#define  GPIO_ISR_GP_ASSERT_1_int34_a_mask                                       (0x00000010)
#define  GPIO_ISR_GP_ASSERT_1_int33_a_mask                                       (0x00000008)
#define  GPIO_ISR_GP_ASSERT_1_int32_a_mask                                       (0x00000004)
#define  GPIO_ISR_GP_ASSERT_1_int31_a_mask                                       (0x00000002)
#define  GPIO_ISR_GP_ASSERT_1_write_data_mask                                    (0x00000001)
#define  GPIO_ISR_GP_ASSERT_1_int60_a(data)                                      (0x40000000&((data)<<30))
#define  GPIO_ISR_GP_ASSERT_1_int59_a(data)                                      (0x20000000&((data)<<29))
#define  GPIO_ISR_GP_ASSERT_1_int58_a(data)                                      (0x10000000&((data)<<28))
#define  GPIO_ISR_GP_ASSERT_1_int57_a(data)                                      (0x08000000&((data)<<27))
#define  GPIO_ISR_GP_ASSERT_1_int56_a(data)                                      (0x04000000&((data)<<26))
#define  GPIO_ISR_GP_ASSERT_1_int55_a(data)                                      (0x02000000&((data)<<25))
#define  GPIO_ISR_GP_ASSERT_1_int54_a(data)                                      (0x01000000&((data)<<24))
#define  GPIO_ISR_GP_ASSERT_1_int53_a(data)                                      (0x00800000&((data)<<23))
#define  GPIO_ISR_GP_ASSERT_1_int52_a(data)                                      (0x00400000&((data)<<22))
#define  GPIO_ISR_GP_ASSERT_1_int51_a(data)                                      (0x00200000&((data)<<21))
#define  GPIO_ISR_GP_ASSERT_1_int50_a(data)                                      (0x00100000&((data)<<20))
#define  GPIO_ISR_GP_ASSERT_1_int49_a(data)                                      (0x00080000&((data)<<19))
#define  GPIO_ISR_GP_ASSERT_1_int48_a(data)                                      (0x00040000&((data)<<18))
#define  GPIO_ISR_GP_ASSERT_1_int47_a(data)                                      (0x00020000&((data)<<17))
#define  GPIO_ISR_GP_ASSERT_1_int46_a(data)                                      (0x00010000&((data)<<16))
#define  GPIO_ISR_GP_ASSERT_1_int45_a(data)                                      (0x00008000&((data)<<15))
#define  GPIO_ISR_GP_ASSERT_1_int44_a(data)                                      (0x00004000&((data)<<14))
#define  GPIO_ISR_GP_ASSERT_1_int43_a(data)                                      (0x00002000&((data)<<13))
#define  GPIO_ISR_GP_ASSERT_1_int42_a(data)                                      (0x00001000&((data)<<12))
#define  GPIO_ISR_GP_ASSERT_1_int41_a(data)                                      (0x00000800&((data)<<11))
#define  GPIO_ISR_GP_ASSERT_1_int40_a(data)                                      (0x00000400&((data)<<10))
#define  GPIO_ISR_GP_ASSERT_1_int39_a(data)                                      (0x00000200&((data)<<9))
#define  GPIO_ISR_GP_ASSERT_1_int38_a(data)                                      (0x00000100&((data)<<8))
#define  GPIO_ISR_GP_ASSERT_1_int37_a(data)                                      (0x00000080&((data)<<7))
#define  GPIO_ISR_GP_ASSERT_1_int36_a(data)                                      (0x00000040&((data)<<6))
#define  GPIO_ISR_GP_ASSERT_1_int35_a(data)                                      (0x00000020&((data)<<5))
#define  GPIO_ISR_GP_ASSERT_1_int34_a(data)                                      (0x00000010&((data)<<4))
#define  GPIO_ISR_GP_ASSERT_1_int33_a(data)                                      (0x00000008&((data)<<3))
#define  GPIO_ISR_GP_ASSERT_1_int32_a(data)                                      (0x00000004&((data)<<2))
#define  GPIO_ISR_GP_ASSERT_1_int31_a(data)                                      (0x00000002&((data)<<1))
#define  GPIO_ISR_GP_ASSERT_1_write_data(data)                                   (0x00000001&(data))
#define  GPIO_ISR_GP_ASSERT_1_get_int60_a(data)                                  ((0x40000000&(data))>>30)
#define  GPIO_ISR_GP_ASSERT_1_get_int59_a(data)                                  ((0x20000000&(data))>>29)
#define  GPIO_ISR_GP_ASSERT_1_get_int58_a(data)                                  ((0x10000000&(data))>>28)
#define  GPIO_ISR_GP_ASSERT_1_get_int57_a(data)                                  ((0x08000000&(data))>>27)
#define  GPIO_ISR_GP_ASSERT_1_get_int56_a(data)                                  ((0x04000000&(data))>>26)
#define  GPIO_ISR_GP_ASSERT_1_get_int55_a(data)                                  ((0x02000000&(data))>>25)
#define  GPIO_ISR_GP_ASSERT_1_get_int54_a(data)                                  ((0x01000000&(data))>>24)
#define  GPIO_ISR_GP_ASSERT_1_get_int53_a(data)                                  ((0x00800000&(data))>>23)
#define  GPIO_ISR_GP_ASSERT_1_get_int52_a(data)                                  ((0x00400000&(data))>>22)
#define  GPIO_ISR_GP_ASSERT_1_get_int51_a(data)                                  ((0x00200000&(data))>>21)
#define  GPIO_ISR_GP_ASSERT_1_get_int50_a(data)                                  ((0x00100000&(data))>>20)
#define  GPIO_ISR_GP_ASSERT_1_get_int49_a(data)                                  ((0x00080000&(data))>>19)
#define  GPIO_ISR_GP_ASSERT_1_get_int48_a(data)                                  ((0x00040000&(data))>>18)
#define  GPIO_ISR_GP_ASSERT_1_get_int47_a(data)                                  ((0x00020000&(data))>>17)
#define  GPIO_ISR_GP_ASSERT_1_get_int46_a(data)                                  ((0x00010000&(data))>>16)
#define  GPIO_ISR_GP_ASSERT_1_get_int45_a(data)                                  ((0x00008000&(data))>>15)
#define  GPIO_ISR_GP_ASSERT_1_get_int44_a(data)                                  ((0x00004000&(data))>>14)
#define  GPIO_ISR_GP_ASSERT_1_get_int43_a(data)                                  ((0x00002000&(data))>>13)
#define  GPIO_ISR_GP_ASSERT_1_get_int42_a(data)                                  ((0x00001000&(data))>>12)
#define  GPIO_ISR_GP_ASSERT_1_get_int41_a(data)                                  ((0x00000800&(data))>>11)
#define  GPIO_ISR_GP_ASSERT_1_get_int40_a(data)                                  ((0x00000400&(data))>>10)
#define  GPIO_ISR_GP_ASSERT_1_get_int39_a(data)                                  ((0x00000200&(data))>>9)
#define  GPIO_ISR_GP_ASSERT_1_get_int38_a(data)                                  ((0x00000100&(data))>>8)
#define  GPIO_ISR_GP_ASSERT_1_get_int37_a(data)                                  ((0x00000080&(data))>>7)
#define  GPIO_ISR_GP_ASSERT_1_get_int36_a(data)                                  ((0x00000040&(data))>>6)
#define  GPIO_ISR_GP_ASSERT_1_get_int35_a(data)                                  ((0x00000020&(data))>>5)
#define  GPIO_ISR_GP_ASSERT_1_get_int34_a(data)                                  ((0x00000010&(data))>>4)
#define  GPIO_ISR_GP_ASSERT_1_get_int33_a(data)                                  ((0x00000008&(data))>>3)
#define  GPIO_ISR_GP_ASSERT_1_get_int32_a(data)                                  ((0x00000004&(data))>>2)
#define  GPIO_ISR_GP_ASSERT_1_get_int31_a(data)                                  ((0x00000002&(data))>>1)
#define  GPIO_ISR_GP_ASSERT_1_get_write_data(data)                               (0x00000001&(data))

#define  GPIO_ISR_GP_DEASSERT                                                   0x18061134
#define  GPIO_ISR_GP_DEASSERT_reg_addr                                           "0xB8061134"
#define  GPIO_ISR_GP_DEASSERT_reg                                                0xB8061134
#define  GPIO_ISR_GP_DEASSERT_inst_addr                                          "0x000D"
#define  set_GPIO_ISR_GP_DEASSERT_reg(data)                                      (*((volatile unsigned int*)GPIO_ISR_GP_DEASSERT_reg)=data)
#define  get_GPIO_ISR_GP_DEASSERT_reg                                            (*((volatile unsigned int*)GPIO_ISR_GP_DEASSERT_reg))
#define  GPIO_ISR_GP_DEASSERT_int30_da_shift                                     (31)
#define  GPIO_ISR_GP_DEASSERT_int29_da_shift                                     (30)
#define  GPIO_ISR_GP_DEASSERT_int28_da_shift                                     (29)
#define  GPIO_ISR_GP_DEASSERT_int27_da_shift                                     (28)
#define  GPIO_ISR_GP_DEASSERT_int26_da_shift                                     (27)
#define  GPIO_ISR_GP_DEASSERT_int25_da_shift                                     (26)
#define  GPIO_ISR_GP_DEASSERT_int24_da_shift                                     (25)
#define  GPIO_ISR_GP_DEASSERT_int23_da_shift                                     (24)
#define  GPIO_ISR_GP_DEASSERT_int22_da_shift                                     (23)
#define  GPIO_ISR_GP_DEASSERT_int21_da_shift                                     (22)
#define  GPIO_ISR_GP_DEASSERT_int20_da_shift                                     (21)
#define  GPIO_ISR_GP_DEASSERT_int19_da_shift                                     (20)
#define  GPIO_ISR_GP_DEASSERT_int18_da_shift                                     (19)
#define  GPIO_ISR_GP_DEASSERT_int17_da_shift                                     (18)
#define  GPIO_ISR_GP_DEASSERT_int16_da_shift                                     (17)
#define  GPIO_ISR_GP_DEASSERT_int15_da_shift                                     (16)
#define  GPIO_ISR_GP_DEASSERT_int14_da_shift                                     (15)
#define  GPIO_ISR_GP_DEASSERT_int13_da_shift                                     (14)
#define  GPIO_ISR_GP_DEASSERT_int12_da_shift                                     (13)
#define  GPIO_ISR_GP_DEASSERT_int11_da_shift                                     (12)
#define  GPIO_ISR_GP_DEASSERT_int10_da_shift                                     (11)
#define  GPIO_ISR_GP_DEASSERT_int9_da_shift                                      (10)
#define  GPIO_ISR_GP_DEASSERT_int8_da_shift                                      (9)
#define  GPIO_ISR_GP_DEASSERT_int7_da_shift                                      (8)
#define  GPIO_ISR_GP_DEASSERT_int6_da_shift                                      (7)
#define  GPIO_ISR_GP_DEASSERT_int5_da_shift                                      (6)
#define  GPIO_ISR_GP_DEASSERT_int4_da_shift                                      (5)
#define  GPIO_ISR_GP_DEASSERT_int3_da_shift                                      (4)
#define  GPIO_ISR_GP_DEASSERT_int2_da_shift                                      (3)
#define  GPIO_ISR_GP_DEASSERT_int1_da_shift                                      (2)
#define  GPIO_ISR_GP_DEASSERT_int0_da_shift                                      (1)
#define  GPIO_ISR_GP_DEASSERT_write_data_shift                                   (0)
#define  GPIO_ISR_GP_DEASSERT_int30_da_mask                                      (0x80000000)
#define  GPIO_ISR_GP_DEASSERT_int29_da_mask                                      (0x40000000)
#define  GPIO_ISR_GP_DEASSERT_int28_da_mask                                      (0x20000000)
#define  GPIO_ISR_GP_DEASSERT_int27_da_mask                                      (0x10000000)
#define  GPIO_ISR_GP_DEASSERT_int26_da_mask                                      (0x08000000)
#define  GPIO_ISR_GP_DEASSERT_int25_da_mask                                      (0x04000000)
#define  GPIO_ISR_GP_DEASSERT_int24_da_mask                                      (0x02000000)
#define  GPIO_ISR_GP_DEASSERT_int23_da_mask                                      (0x01000000)
#define  GPIO_ISR_GP_DEASSERT_int22_da_mask                                      (0x00800000)
#define  GPIO_ISR_GP_DEASSERT_int21_da_mask                                      (0x00400000)
#define  GPIO_ISR_GP_DEASSERT_int20_da_mask                                      (0x00200000)
#define  GPIO_ISR_GP_DEASSERT_int19_da_mask                                      (0x00100000)
#define  GPIO_ISR_GP_DEASSERT_int18_da_mask                                      (0x00080000)
#define  GPIO_ISR_GP_DEASSERT_int17_da_mask                                      (0x00040000)
#define  GPIO_ISR_GP_DEASSERT_int16_da_mask                                      (0x00020000)
#define  GPIO_ISR_GP_DEASSERT_int15_da_mask                                      (0x00010000)
#define  GPIO_ISR_GP_DEASSERT_int14_da_mask                                      (0x00008000)
#define  GPIO_ISR_GP_DEASSERT_int13_da_mask                                      (0x00004000)
#define  GPIO_ISR_GP_DEASSERT_int12_da_mask                                      (0x00002000)
#define  GPIO_ISR_GP_DEASSERT_int11_da_mask                                      (0x00001000)
#define  GPIO_ISR_GP_DEASSERT_int10_da_mask                                      (0x00000800)
#define  GPIO_ISR_GP_DEASSERT_int9_da_mask                                       (0x00000400)
#define  GPIO_ISR_GP_DEASSERT_int8_da_mask                                       (0x00000200)
#define  GPIO_ISR_GP_DEASSERT_int7_da_mask                                       (0x00000100)
#define  GPIO_ISR_GP_DEASSERT_int6_da_mask                                       (0x00000080)
#define  GPIO_ISR_GP_DEASSERT_int5_da_mask                                       (0x00000040)
#define  GPIO_ISR_GP_DEASSERT_int4_da_mask                                       (0x00000020)
#define  GPIO_ISR_GP_DEASSERT_int3_da_mask                                       (0x00000010)
#define  GPIO_ISR_GP_DEASSERT_int2_da_mask                                       (0x00000008)
#define  GPIO_ISR_GP_DEASSERT_int1_da_mask                                       (0x00000004)
#define  GPIO_ISR_GP_DEASSERT_int0_da_mask                                       (0x00000002)
#define  GPIO_ISR_GP_DEASSERT_write_data_mask                                    (0x00000001)
#define  GPIO_ISR_GP_DEASSERT_int30_da(data)                                     (0x80000000&((data)<<31))
#define  GPIO_ISR_GP_DEASSERT_int29_da(data)                                     (0x40000000&((data)<<30))
#define  GPIO_ISR_GP_DEASSERT_int28_da(data)                                     (0x20000000&((data)<<29))
#define  GPIO_ISR_GP_DEASSERT_int27_da(data)                                     (0x10000000&((data)<<28))
#define  GPIO_ISR_GP_DEASSERT_int26_da(data)                                     (0x08000000&((data)<<27))
#define  GPIO_ISR_GP_DEASSERT_int25_da(data)                                     (0x04000000&((data)<<26))
#define  GPIO_ISR_GP_DEASSERT_int24_da(data)                                     (0x02000000&((data)<<25))
#define  GPIO_ISR_GP_DEASSERT_int23_da(data)                                     (0x01000000&((data)<<24))
#define  GPIO_ISR_GP_DEASSERT_int22_da(data)                                     (0x00800000&((data)<<23))
#define  GPIO_ISR_GP_DEASSERT_int21_da(data)                                     (0x00400000&((data)<<22))
#define  GPIO_ISR_GP_DEASSERT_int20_da(data)                                     (0x00200000&((data)<<21))
#define  GPIO_ISR_GP_DEASSERT_int19_da(data)                                     (0x00100000&((data)<<20))
#define  GPIO_ISR_GP_DEASSERT_int18_da(data)                                     (0x00080000&((data)<<19))
#define  GPIO_ISR_GP_DEASSERT_int17_da(data)                                     (0x00040000&((data)<<18))
#define  GPIO_ISR_GP_DEASSERT_int16_da(data)                                     (0x00020000&((data)<<17))
#define  GPIO_ISR_GP_DEASSERT_int15_da(data)                                     (0x00010000&((data)<<16))
#define  GPIO_ISR_GP_DEASSERT_int14_da(data)                                     (0x00008000&((data)<<15))
#define  GPIO_ISR_GP_DEASSERT_int13_da(data)                                     (0x00004000&((data)<<14))
#define  GPIO_ISR_GP_DEASSERT_int12_da(data)                                     (0x00002000&((data)<<13))
#define  GPIO_ISR_GP_DEASSERT_int11_da(data)                                     (0x00001000&((data)<<12))
#define  GPIO_ISR_GP_DEASSERT_int10_da(data)                                     (0x00000800&((data)<<11))
#define  GPIO_ISR_GP_DEASSERT_int9_da(data)                                      (0x00000400&((data)<<10))
#define  GPIO_ISR_GP_DEASSERT_int8_da(data)                                      (0x00000200&((data)<<9))
#define  GPIO_ISR_GP_DEASSERT_int7_da(data)                                      (0x00000100&((data)<<8))
#define  GPIO_ISR_GP_DEASSERT_int6_da(data)                                      (0x00000080&((data)<<7))
#define  GPIO_ISR_GP_DEASSERT_int5_da(data)                                      (0x00000040&((data)<<6))
#define  GPIO_ISR_GP_DEASSERT_int4_da(data)                                      (0x00000020&((data)<<5))
#define  GPIO_ISR_GP_DEASSERT_int3_da(data)                                      (0x00000010&((data)<<4))
#define  GPIO_ISR_GP_DEASSERT_int2_da(data)                                      (0x00000008&((data)<<3))
#define  GPIO_ISR_GP_DEASSERT_int1_da(data)                                      (0x00000004&((data)<<2))
#define  GPIO_ISR_GP_DEASSERT_int0_da(data)                                      (0x00000002&((data)<<1))
#define  GPIO_ISR_GP_DEASSERT_write_data(data)                                   (0x00000001&(data))
#define  GPIO_ISR_GP_DEASSERT_get_int30_da(data)                                 ((0x80000000&(data))>>31)
#define  GPIO_ISR_GP_DEASSERT_get_int29_da(data)                                 ((0x40000000&(data))>>30)
#define  GPIO_ISR_GP_DEASSERT_get_int28_da(data)                                 ((0x20000000&(data))>>29)
#define  GPIO_ISR_GP_DEASSERT_get_int27_da(data)                                 ((0x10000000&(data))>>28)
#define  GPIO_ISR_GP_DEASSERT_get_int26_da(data)                                 ((0x08000000&(data))>>27)
#define  GPIO_ISR_GP_DEASSERT_get_int25_da(data)                                 ((0x04000000&(data))>>26)
#define  GPIO_ISR_GP_DEASSERT_get_int24_da(data)                                 ((0x02000000&(data))>>25)
#define  GPIO_ISR_GP_DEASSERT_get_int23_da(data)                                 ((0x01000000&(data))>>24)
#define  GPIO_ISR_GP_DEASSERT_get_int22_da(data)                                 ((0x00800000&(data))>>23)
#define  GPIO_ISR_GP_DEASSERT_get_int21_da(data)                                 ((0x00400000&(data))>>22)
#define  GPIO_ISR_GP_DEASSERT_get_int20_da(data)                                 ((0x00200000&(data))>>21)
#define  GPIO_ISR_GP_DEASSERT_get_int19_da(data)                                 ((0x00100000&(data))>>20)
#define  GPIO_ISR_GP_DEASSERT_get_int18_da(data)                                 ((0x00080000&(data))>>19)
#define  GPIO_ISR_GP_DEASSERT_get_int17_da(data)                                 ((0x00040000&(data))>>18)
#define  GPIO_ISR_GP_DEASSERT_get_int16_da(data)                                 ((0x00020000&(data))>>17)
#define  GPIO_ISR_GP_DEASSERT_get_int15_da(data)                                 ((0x00010000&(data))>>16)
#define  GPIO_ISR_GP_DEASSERT_get_int14_da(data)                                 ((0x00008000&(data))>>15)
#define  GPIO_ISR_GP_DEASSERT_get_int13_da(data)                                 ((0x00004000&(data))>>14)
#define  GPIO_ISR_GP_DEASSERT_get_int12_da(data)                                 ((0x00002000&(data))>>13)
#define  GPIO_ISR_GP_DEASSERT_get_int11_da(data)                                 ((0x00001000&(data))>>12)
#define  GPIO_ISR_GP_DEASSERT_get_int10_da(data)                                 ((0x00000800&(data))>>11)
#define  GPIO_ISR_GP_DEASSERT_get_int9_da(data)                                  ((0x00000400&(data))>>10)
#define  GPIO_ISR_GP_DEASSERT_get_int8_da(data)                                  ((0x00000200&(data))>>9)
#define  GPIO_ISR_GP_DEASSERT_get_int7_da(data)                                  ((0x00000100&(data))>>8)
#define  GPIO_ISR_GP_DEASSERT_get_int6_da(data)                                  ((0x00000080&(data))>>7)
#define  GPIO_ISR_GP_DEASSERT_get_int5_da(data)                                  ((0x00000040&(data))>>6)
#define  GPIO_ISR_GP_DEASSERT_get_int4_da(data)                                  ((0x00000020&(data))>>5)
#define  GPIO_ISR_GP_DEASSERT_get_int3_da(data)                                  ((0x00000010&(data))>>4)
#define  GPIO_ISR_GP_DEASSERT_get_int2_da(data)                                  ((0x00000008&(data))>>3)
#define  GPIO_ISR_GP_DEASSERT_get_int1_da(data)                                  ((0x00000004&(data))>>2)
#define  GPIO_ISR_GP_DEASSERT_get_int0_da(data)                                  ((0x00000002&(data))>>1)
#define  GPIO_ISR_GP_DEASSERT_get_write_data(data)                               (0x00000001&(data))

#define  GPIO_ISR_GP_DEASSERT_1                                                 0x18061138
#define  GPIO_ISR_GP_DEASSERT_1_reg_addr                                         "0xB8061138"
#define  GPIO_ISR_GP_DEASSERT_1_reg                                              0xB8061138
#define  GPIO_ISR_GP_DEASSERT_1_inst_addr                                        "0x000E"
#define  set_GPIO_ISR_GP_DEASSERT_1_reg(data)                                    (*((volatile unsigned int*)GPIO_ISR_GP_DEASSERT_1_reg)=data)
#define  get_GPIO_ISR_GP_DEASSERT_1_reg                                          (*((volatile unsigned int*)GPIO_ISR_GP_DEASSERT_1_reg))
#define  GPIO_ISR_GP_DEASSERT_1_int60_da_shift                                   (30)
#define  GPIO_ISR_GP_DEASSERT_1_int59_da_shift                                   (29)
#define  GPIO_ISR_GP_DEASSERT_1_int58_da_shift                                   (28)
#define  GPIO_ISR_GP_DEASSERT_1_int57_da_shift                                   (27)
#define  GPIO_ISR_GP_DEASSERT_1_int56_da_shift                                   (26)
#define  GPIO_ISR_GP_DEASSERT_1_int55_da_shift                                   (25)
#define  GPIO_ISR_GP_DEASSERT_1_int54_da_shift                                   (24)
#define  GPIO_ISR_GP_DEASSERT_1_int53_da_shift                                   (23)
#define  GPIO_ISR_GP_DEASSERT_1_int52_da_shift                                   (22)
#define  GPIO_ISR_GP_DEASSERT_1_int51_da_shift                                   (21)
#define  GPIO_ISR_GP_DEASSERT_1_int50_da_shift                                   (20)
#define  GPIO_ISR_GP_DEASSERT_1_int49_da_shift                                   (19)
#define  GPIO_ISR_GP_DEASSERT_1_int48_da_shift                                   (18)
#define  GPIO_ISR_GP_DEASSERT_1_int47_da_shift                                   (17)
#define  GPIO_ISR_GP_DEASSERT_1_int46_da_shift                                   (16)
#define  GPIO_ISR_GP_DEASSERT_1_int45_da_shift                                   (15)
#define  GPIO_ISR_GP_DEASSERT_1_int44_da_shift                                   (14)
#define  GPIO_ISR_GP_DEASSERT_1_int43_da_shift                                   (13)
#define  GPIO_ISR_GP_DEASSERT_1_int42_da_shift                                   (12)
#define  GPIO_ISR_GP_DEASSERT_1_int41_da_shift                                   (11)
#define  GPIO_ISR_GP_DEASSERT_1_int40_da_shift                                   (10)
#define  GPIO_ISR_GP_DEASSERT_1_int39_da_shift                                   (9)
#define  GPIO_ISR_GP_DEASSERT_1_int38_da_shift                                   (8)
#define  GPIO_ISR_GP_DEASSERT_1_int37_da_shift                                   (7)
#define  GPIO_ISR_GP_DEASSERT_1_int36_da_shift                                   (6)
#define  GPIO_ISR_GP_DEASSERT_1_int35_da_shift                                   (5)
#define  GPIO_ISR_GP_DEASSERT_1_int34_da_shift                                   (4)
#define  GPIO_ISR_GP_DEASSERT_1_int33_da_shift                                   (3)
#define  GPIO_ISR_GP_DEASSERT_1_int32_da_shift                                   (2)
#define  GPIO_ISR_GP_DEASSERT_1_int31_da_shift                                   (1)
#define  GPIO_ISR_GP_DEASSERT_1_write_data_shift                                 (0)
#define  GPIO_ISR_GP_DEASSERT_1_int60_da_mask                                    (0x40000000)
#define  GPIO_ISR_GP_DEASSERT_1_int59_da_mask                                    (0x20000000)
#define  GPIO_ISR_GP_DEASSERT_1_int58_da_mask                                    (0x10000000)
#define  GPIO_ISR_GP_DEASSERT_1_int57_da_mask                                    (0x08000000)
#define  GPIO_ISR_GP_DEASSERT_1_int56_da_mask                                    (0x04000000)
#define  GPIO_ISR_GP_DEASSERT_1_int55_da_mask                                    (0x02000000)
#define  GPIO_ISR_GP_DEASSERT_1_int54_da_mask                                    (0x01000000)
#define  GPIO_ISR_GP_DEASSERT_1_int53_da_mask                                    (0x00800000)
#define  GPIO_ISR_GP_DEASSERT_1_int52_da_mask                                    (0x00400000)
#define  GPIO_ISR_GP_DEASSERT_1_int51_da_mask                                    (0x00200000)
#define  GPIO_ISR_GP_DEASSERT_1_int50_da_mask                                    (0x00100000)
#define  GPIO_ISR_GP_DEASSERT_1_int49_da_mask                                    (0x00080000)
#define  GPIO_ISR_GP_DEASSERT_1_int48_da_mask                                    (0x00040000)
#define  GPIO_ISR_GP_DEASSERT_1_int47_da_mask                                    (0x00020000)
#define  GPIO_ISR_GP_DEASSERT_1_int46_da_mask                                    (0x00010000)
#define  GPIO_ISR_GP_DEASSERT_1_int45_da_mask                                    (0x00008000)
#define  GPIO_ISR_GP_DEASSERT_1_int44_da_mask                                    (0x00004000)
#define  GPIO_ISR_GP_DEASSERT_1_int43_da_mask                                    (0x00002000)
#define  GPIO_ISR_GP_DEASSERT_1_int42_da_mask                                    (0x00001000)
#define  GPIO_ISR_GP_DEASSERT_1_int41_da_mask                                    (0x00000800)
#define  GPIO_ISR_GP_DEASSERT_1_int40_da_mask                                    (0x00000400)
#define  GPIO_ISR_GP_DEASSERT_1_int39_da_mask                                    (0x00000200)
#define  GPIO_ISR_GP_DEASSERT_1_int38_da_mask                                    (0x00000100)
#define  GPIO_ISR_GP_DEASSERT_1_int37_da_mask                                    (0x00000080)
#define  GPIO_ISR_GP_DEASSERT_1_int36_da_mask                                    (0x00000040)
#define  GPIO_ISR_GP_DEASSERT_1_int35_da_mask                                    (0x00000020)
#define  GPIO_ISR_GP_DEASSERT_1_int34_da_mask                                    (0x00000010)
#define  GPIO_ISR_GP_DEASSERT_1_int33_da_mask                                    (0x00000008)
#define  GPIO_ISR_GP_DEASSERT_1_int32_da_mask                                    (0x00000004)
#define  GPIO_ISR_GP_DEASSERT_1_int31_da_mask                                    (0x00000002)
#define  GPIO_ISR_GP_DEASSERT_1_write_data_mask                                  (0x00000001)
#define  GPIO_ISR_GP_DEASSERT_1_int60_da(data)                                   (0x40000000&((data)<<30))
#define  GPIO_ISR_GP_DEASSERT_1_int59_da(data)                                   (0x20000000&((data)<<29))
#define  GPIO_ISR_GP_DEASSERT_1_int58_da(data)                                   (0x10000000&((data)<<28))
#define  GPIO_ISR_GP_DEASSERT_1_int57_da(data)                                   (0x08000000&((data)<<27))
#define  GPIO_ISR_GP_DEASSERT_1_int56_da(data)                                   (0x04000000&((data)<<26))
#define  GPIO_ISR_GP_DEASSERT_1_int55_da(data)                                   (0x02000000&((data)<<25))
#define  GPIO_ISR_GP_DEASSERT_1_int54_da(data)                                   (0x01000000&((data)<<24))
#define  GPIO_ISR_GP_DEASSERT_1_int53_da(data)                                   (0x00800000&((data)<<23))
#define  GPIO_ISR_GP_DEASSERT_1_int52_da(data)                                   (0x00400000&((data)<<22))
#define  GPIO_ISR_GP_DEASSERT_1_int51_da(data)                                   (0x00200000&((data)<<21))
#define  GPIO_ISR_GP_DEASSERT_1_int50_da(data)                                   (0x00100000&((data)<<20))
#define  GPIO_ISR_GP_DEASSERT_1_int49_da(data)                                   (0x00080000&((data)<<19))
#define  GPIO_ISR_GP_DEASSERT_1_int48_da(data)                                   (0x00040000&((data)<<18))
#define  GPIO_ISR_GP_DEASSERT_1_int47_da(data)                                   (0x00020000&((data)<<17))
#define  GPIO_ISR_GP_DEASSERT_1_int46_da(data)                                   (0x00010000&((data)<<16))
#define  GPIO_ISR_GP_DEASSERT_1_int45_da(data)                                   (0x00008000&((data)<<15))
#define  GPIO_ISR_GP_DEASSERT_1_int44_da(data)                                   (0x00004000&((data)<<14))
#define  GPIO_ISR_GP_DEASSERT_1_int43_da(data)                                   (0x00002000&((data)<<13))
#define  GPIO_ISR_GP_DEASSERT_1_int42_da(data)                                   (0x00001000&((data)<<12))
#define  GPIO_ISR_GP_DEASSERT_1_int41_da(data)                                   (0x00000800&((data)<<11))
#define  GPIO_ISR_GP_DEASSERT_1_int40_da(data)                                   (0x00000400&((data)<<10))
#define  GPIO_ISR_GP_DEASSERT_1_int39_da(data)                                   (0x00000200&((data)<<9))
#define  GPIO_ISR_GP_DEASSERT_1_int38_da(data)                                   (0x00000100&((data)<<8))
#define  GPIO_ISR_GP_DEASSERT_1_int37_da(data)                                   (0x00000080&((data)<<7))
#define  GPIO_ISR_GP_DEASSERT_1_int36_da(data)                                   (0x00000040&((data)<<6))
#define  GPIO_ISR_GP_DEASSERT_1_int35_da(data)                                   (0x00000020&((data)<<5))
#define  GPIO_ISR_GP_DEASSERT_1_int34_da(data)                                   (0x00000010&((data)<<4))
#define  GPIO_ISR_GP_DEASSERT_1_int33_da(data)                                   (0x00000008&((data)<<3))
#define  GPIO_ISR_GP_DEASSERT_1_int32_da(data)                                   (0x00000004&((data)<<2))
#define  GPIO_ISR_GP_DEASSERT_1_int31_da(data)                                   (0x00000002&((data)<<1))
#define  GPIO_ISR_GP_DEASSERT_1_write_data(data)                                 (0x00000001&(data))
#define  GPIO_ISR_GP_DEASSERT_1_get_int60_da(data)                               ((0x40000000&(data))>>30)
#define  GPIO_ISR_GP_DEASSERT_1_get_int59_da(data)                               ((0x20000000&(data))>>29)
#define  GPIO_ISR_GP_DEASSERT_1_get_int58_da(data)                               ((0x10000000&(data))>>28)
#define  GPIO_ISR_GP_DEASSERT_1_get_int57_da(data)                               ((0x08000000&(data))>>27)
#define  GPIO_ISR_GP_DEASSERT_1_get_int56_da(data)                               ((0x04000000&(data))>>26)
#define  GPIO_ISR_GP_DEASSERT_1_get_int55_da(data)                               ((0x02000000&(data))>>25)
#define  GPIO_ISR_GP_DEASSERT_1_get_int54_da(data)                               ((0x01000000&(data))>>24)
#define  GPIO_ISR_GP_DEASSERT_1_get_int53_da(data)                               ((0x00800000&(data))>>23)
#define  GPIO_ISR_GP_DEASSERT_1_get_int52_da(data)                               ((0x00400000&(data))>>22)
#define  GPIO_ISR_GP_DEASSERT_1_get_int51_da(data)                               ((0x00200000&(data))>>21)
#define  GPIO_ISR_GP_DEASSERT_1_get_int50_da(data)                               ((0x00100000&(data))>>20)
#define  GPIO_ISR_GP_DEASSERT_1_get_int49_da(data)                               ((0x00080000&(data))>>19)
#define  GPIO_ISR_GP_DEASSERT_1_get_int48_da(data)                               ((0x00040000&(data))>>18)
#define  GPIO_ISR_GP_DEASSERT_1_get_int47_da(data)                               ((0x00020000&(data))>>17)
#define  GPIO_ISR_GP_DEASSERT_1_get_int46_da(data)                               ((0x00010000&(data))>>16)
#define  GPIO_ISR_GP_DEASSERT_1_get_int45_da(data)                               ((0x00008000&(data))>>15)
#define  GPIO_ISR_GP_DEASSERT_1_get_int44_da(data)                               ((0x00004000&(data))>>14)
#define  GPIO_ISR_GP_DEASSERT_1_get_int43_da(data)                               ((0x00002000&(data))>>13)
#define  GPIO_ISR_GP_DEASSERT_1_get_int42_da(data)                               ((0x00001000&(data))>>12)
#define  GPIO_ISR_GP_DEASSERT_1_get_int41_da(data)                               ((0x00000800&(data))>>11)
#define  GPIO_ISR_GP_DEASSERT_1_get_int40_da(data)                               ((0x00000400&(data))>>10)
#define  GPIO_ISR_GP_DEASSERT_1_get_int39_da(data)                               ((0x00000200&(data))>>9)
#define  GPIO_ISR_GP_DEASSERT_1_get_int38_da(data)                               ((0x00000100&(data))>>8)
#define  GPIO_ISR_GP_DEASSERT_1_get_int37_da(data)                               ((0x00000080&(data))>>7)
#define  GPIO_ISR_GP_DEASSERT_1_get_int36_da(data)                               ((0x00000040&(data))>>6)
#define  GPIO_ISR_GP_DEASSERT_1_get_int35_da(data)                               ((0x00000020&(data))>>5)
#define  GPIO_ISR_GP_DEASSERT_1_get_int34_da(data)                               ((0x00000010&(data))>>4)
#define  GPIO_ISR_GP_DEASSERT_1_get_int33_da(data)                               ((0x00000008&(data))>>3)
#define  GPIO_ISR_GP_DEASSERT_1_get_int32_da(data)                               ((0x00000004&(data))>>2)
#define  GPIO_ISR_GP_DEASSERT_1_get_int31_da(data)                               ((0x00000002&(data))>>1)
#define  GPIO_ISR_GP_DEASSERT_1_get_write_data(data)                             (0x00000001&(data))

#define  GPIO_GP_INT_SEL                                                        0x1806113C
#define  GPIO_GP_INT_SEL_reg_addr                                                "0xB806113C"
#define  GPIO_GP_INT_SEL_reg                                                     0xB806113C
#define  GPIO_GP_INT_SEL_inst_addr                                               "0x000F"
#define  set_GPIO_GP_INT_SEL_reg(data)                                           (*((volatile unsigned int*)GPIO_GP_INT_SEL_reg)=data)
#define  get_GPIO_GP_INT_SEL_reg                                                 (*((volatile unsigned int*)GPIO_GP_INT_SEL_reg))
#define  GPIO_GP_INT_SEL_intsel_shift                                            (0)
#define  GPIO_GP_INT_SEL_intsel_mask                                             (0x00000003)
#define  GPIO_GP_INT_SEL_intsel(data)                                            (0x00000003&(data))
#define  GPIO_GP_INT_SEL_get_intsel(data)                                        (0x00000003&(data))

#define  GPIO_GPINT_EMCU                                                        0x18061140
#define  GPIO_GPINT_EMCU_reg_addr                                                "0xB8061140"
#define  GPIO_GPINT_EMCU_reg                                                     0xB8061140
#define  GPIO_GPINT_EMCU_inst_addr                                               "0x0010"
#define  set_GPIO_GPINT_EMCU_reg(data)                                           (*((volatile unsigned int*)GPIO_GPINT_EMCU_reg)=data)
#define  get_GPIO_GPINT_EMCU_reg                                                 (*((volatile unsigned int*)GPIO_GPINT_EMCU_reg))
#define  GPIO_GPINT_EMCU_unmask30_shift                                          (31)
#define  GPIO_GPINT_EMCU_unmask29_shift                                          (30)
#define  GPIO_GPINT_EMCU_unmask28_shift                                          (29)
#define  GPIO_GPINT_EMCU_unmask27_shift                                          (28)
#define  GPIO_GPINT_EMCU_unmask26_shift                                          (27)
#define  GPIO_GPINT_EMCU_unmask25_shift                                          (26)
#define  GPIO_GPINT_EMCU_unmask24_shift                                          (25)
#define  GPIO_GPINT_EMCU_unmask23_shift                                          (24)
#define  GPIO_GPINT_EMCU_unmask22_shift                                          (23)
#define  GPIO_GPINT_EMCU_unmask21_shift                                          (22)
#define  GPIO_GPINT_EMCU_unmask20_shift                                          (21)
#define  GPIO_GPINT_EMCU_unmask19_shift                                          (20)
#define  GPIO_GPINT_EMCU_unmask18_shift                                          (19)
#define  GPIO_GPINT_EMCU_unmask17_shift                                          (18)
#define  GPIO_GPINT_EMCU_unmask16_shift                                          (17)
#define  GPIO_GPINT_EMCU_unmask15_shift                                          (16)
#define  GPIO_GPINT_EMCU_unmask14_shift                                          (15)
#define  GPIO_GPINT_EMCU_unmask13_shift                                          (14)
#define  GPIO_GPINT_EMCU_unmask12_shift                                          (13)
#define  GPIO_GPINT_EMCU_unmask11_shift                                          (12)
#define  GPIO_GPINT_EMCU_unmask10_shift                                          (11)
#define  GPIO_GPINT_EMCU_unmask9_shift                                           (10)
#define  GPIO_GPINT_EMCU_unmask8_shift                                           (9)
#define  GPIO_GPINT_EMCU_unmask7_shift                                           (8)
#define  GPIO_GPINT_EMCU_unmask6_shift                                           (7)
#define  GPIO_GPINT_EMCU_unmask5_shift                                           (6)
#define  GPIO_GPINT_EMCU_unmask4_shift                                           (5)
#define  GPIO_GPINT_EMCU_unmask3_shift                                           (4)
#define  GPIO_GPINT_EMCU_unmask2_shift                                           (3)
#define  GPIO_GPINT_EMCU_unmask1_shift                                           (2)
#define  GPIO_GPINT_EMCU_unmask0_shift                                           (1)
#define  GPIO_GPINT_EMCU_write_data_shift                                        (0)
#define  GPIO_GPINT_EMCU_unmask30_mask                                           (0x80000000)
#define  GPIO_GPINT_EMCU_unmask29_mask                                           (0x40000000)
#define  GPIO_GPINT_EMCU_unmask28_mask                                           (0x20000000)
#define  GPIO_GPINT_EMCU_unmask27_mask                                           (0x10000000)
#define  GPIO_GPINT_EMCU_unmask26_mask                                           (0x08000000)
#define  GPIO_GPINT_EMCU_unmask25_mask                                           (0x04000000)
#define  GPIO_GPINT_EMCU_unmask24_mask                                           (0x02000000)
#define  GPIO_GPINT_EMCU_unmask23_mask                                           (0x01000000)
#define  GPIO_GPINT_EMCU_unmask22_mask                                           (0x00800000)
#define  GPIO_GPINT_EMCU_unmask21_mask                                           (0x00400000)
#define  GPIO_GPINT_EMCU_unmask20_mask                                           (0x00200000)
#define  GPIO_GPINT_EMCU_unmask19_mask                                           (0x00100000)
#define  GPIO_GPINT_EMCU_unmask18_mask                                           (0x00080000)
#define  GPIO_GPINT_EMCU_unmask17_mask                                           (0x00040000)
#define  GPIO_GPINT_EMCU_unmask16_mask                                           (0x00020000)
#define  GPIO_GPINT_EMCU_unmask15_mask                                           (0x00010000)
#define  GPIO_GPINT_EMCU_unmask14_mask                                           (0x00008000)
#define  GPIO_GPINT_EMCU_unmask13_mask                                           (0x00004000)
#define  GPIO_GPINT_EMCU_unmask12_mask                                           (0x00002000)
#define  GPIO_GPINT_EMCU_unmask11_mask                                           (0x00001000)
#define  GPIO_GPINT_EMCU_unmask10_mask                                           (0x00000800)
#define  GPIO_GPINT_EMCU_unmask9_mask                                            (0x00000400)
#define  GPIO_GPINT_EMCU_unmask8_mask                                            (0x00000200)
#define  GPIO_GPINT_EMCU_unmask7_mask                                            (0x00000100)
#define  GPIO_GPINT_EMCU_unmask6_mask                                            (0x00000080)
#define  GPIO_GPINT_EMCU_unmask5_mask                                            (0x00000040)
#define  GPIO_GPINT_EMCU_unmask4_mask                                            (0x00000020)
#define  GPIO_GPINT_EMCU_unmask3_mask                                            (0x00000010)
#define  GPIO_GPINT_EMCU_unmask2_mask                                            (0x00000008)
#define  GPIO_GPINT_EMCU_unmask1_mask                                            (0x00000004)
#define  GPIO_GPINT_EMCU_unmask0_mask                                            (0x00000002)
#define  GPIO_GPINT_EMCU_write_data_mask                                         (0x00000001)
#define  GPIO_GPINT_EMCU_unmask30(data)                                          (0x80000000&((data)<<31))
#define  GPIO_GPINT_EMCU_unmask29(data)                                          (0x40000000&((data)<<30))
#define  GPIO_GPINT_EMCU_unmask28(data)                                          (0x20000000&((data)<<29))
#define  GPIO_GPINT_EMCU_unmask27(data)                                          (0x10000000&((data)<<28))
#define  GPIO_GPINT_EMCU_unmask26(data)                                          (0x08000000&((data)<<27))
#define  GPIO_GPINT_EMCU_unmask25(data)                                          (0x04000000&((data)<<26))
#define  GPIO_GPINT_EMCU_unmask24(data)                                          (0x02000000&((data)<<25))
#define  GPIO_GPINT_EMCU_unmask23(data)                                          (0x01000000&((data)<<24))
#define  GPIO_GPINT_EMCU_unmask22(data)                                          (0x00800000&((data)<<23))
#define  GPIO_GPINT_EMCU_unmask21(data)                                          (0x00400000&((data)<<22))
#define  GPIO_GPINT_EMCU_unmask20(data)                                          (0x00200000&((data)<<21))
#define  GPIO_GPINT_EMCU_unmask19(data)                                          (0x00100000&((data)<<20))
#define  GPIO_GPINT_EMCU_unmask18(data)                                          (0x00080000&((data)<<19))
#define  GPIO_GPINT_EMCU_unmask17(data)                                          (0x00040000&((data)<<18))
#define  GPIO_GPINT_EMCU_unmask16(data)                                          (0x00020000&((data)<<17))
#define  GPIO_GPINT_EMCU_unmask15(data)                                          (0x00010000&((data)<<16))
#define  GPIO_GPINT_EMCU_unmask14(data)                                          (0x00008000&((data)<<15))
#define  GPIO_GPINT_EMCU_unmask13(data)                                          (0x00004000&((data)<<14))
#define  GPIO_GPINT_EMCU_unmask12(data)                                          (0x00002000&((data)<<13))
#define  GPIO_GPINT_EMCU_unmask11(data)                                          (0x00001000&((data)<<12))
#define  GPIO_GPINT_EMCU_unmask10(data)                                          (0x00000800&((data)<<11))
#define  GPIO_GPINT_EMCU_unmask9(data)                                           (0x00000400&((data)<<10))
#define  GPIO_GPINT_EMCU_unmask8(data)                                           (0x00000200&((data)<<9))
#define  GPIO_GPINT_EMCU_unmask7(data)                                           (0x00000100&((data)<<8))
#define  GPIO_GPINT_EMCU_unmask6(data)                                           (0x00000080&((data)<<7))
#define  GPIO_GPINT_EMCU_unmask5(data)                                           (0x00000040&((data)<<6))
#define  GPIO_GPINT_EMCU_unmask4(data)                                           (0x00000020&((data)<<5))
#define  GPIO_GPINT_EMCU_unmask3(data)                                           (0x00000010&((data)<<4))
#define  GPIO_GPINT_EMCU_unmask2(data)                                           (0x00000008&((data)<<3))
#define  GPIO_GPINT_EMCU_unmask1(data)                                           (0x00000004&((data)<<2))
#define  GPIO_GPINT_EMCU_unmask0(data)                                           (0x00000002&((data)<<1))
#define  GPIO_GPINT_EMCU_write_data(data)                                        (0x00000001&(data))
#define  GPIO_GPINT_EMCU_get_unmask30(data)                                      ((0x80000000&(data))>>31)
#define  GPIO_GPINT_EMCU_get_unmask29(data)                                      ((0x40000000&(data))>>30)
#define  GPIO_GPINT_EMCU_get_unmask28(data)                                      ((0x20000000&(data))>>29)
#define  GPIO_GPINT_EMCU_get_unmask27(data)                                      ((0x10000000&(data))>>28)
#define  GPIO_GPINT_EMCU_get_unmask26(data)                                      ((0x08000000&(data))>>27)
#define  GPIO_GPINT_EMCU_get_unmask25(data)                                      ((0x04000000&(data))>>26)
#define  GPIO_GPINT_EMCU_get_unmask24(data)                                      ((0x02000000&(data))>>25)
#define  GPIO_GPINT_EMCU_get_unmask23(data)                                      ((0x01000000&(data))>>24)
#define  GPIO_GPINT_EMCU_get_unmask22(data)                                      ((0x00800000&(data))>>23)
#define  GPIO_GPINT_EMCU_get_unmask21(data)                                      ((0x00400000&(data))>>22)
#define  GPIO_GPINT_EMCU_get_unmask20(data)                                      ((0x00200000&(data))>>21)
#define  GPIO_GPINT_EMCU_get_unmask19(data)                                      ((0x00100000&(data))>>20)
#define  GPIO_GPINT_EMCU_get_unmask18(data)                                      ((0x00080000&(data))>>19)
#define  GPIO_GPINT_EMCU_get_unmask17(data)                                      ((0x00040000&(data))>>18)
#define  GPIO_GPINT_EMCU_get_unmask16(data)                                      ((0x00020000&(data))>>17)
#define  GPIO_GPINT_EMCU_get_unmask15(data)                                      ((0x00010000&(data))>>16)
#define  GPIO_GPINT_EMCU_get_unmask14(data)                                      ((0x00008000&(data))>>15)
#define  GPIO_GPINT_EMCU_get_unmask13(data)                                      ((0x00004000&(data))>>14)
#define  GPIO_GPINT_EMCU_get_unmask12(data)                                      ((0x00002000&(data))>>13)
#define  GPIO_GPINT_EMCU_get_unmask11(data)                                      ((0x00001000&(data))>>12)
#define  GPIO_GPINT_EMCU_get_unmask10(data)                                      ((0x00000800&(data))>>11)
#define  GPIO_GPINT_EMCU_get_unmask9(data)                                       ((0x00000400&(data))>>10)
#define  GPIO_GPINT_EMCU_get_unmask8(data)                                       ((0x00000200&(data))>>9)
#define  GPIO_GPINT_EMCU_get_unmask7(data)                                       ((0x00000100&(data))>>8)
#define  GPIO_GPINT_EMCU_get_unmask6(data)                                       ((0x00000080&(data))>>7)
#define  GPIO_GPINT_EMCU_get_unmask5(data)                                       ((0x00000040&(data))>>6)
#define  GPIO_GPINT_EMCU_get_unmask4(data)                                       ((0x00000020&(data))>>5)
#define  GPIO_GPINT_EMCU_get_unmask3(data)                                       ((0x00000010&(data))>>4)
#define  GPIO_GPINT_EMCU_get_unmask2(data)                                       ((0x00000008&(data))>>3)
#define  GPIO_GPINT_EMCU_get_unmask1(data)                                       ((0x00000004&(data))>>2)
#define  GPIO_GPINT_EMCU_get_unmask0(data)                                       ((0x00000002&(data))>>1)
#define  GPIO_GPINT_EMCU_get_write_data(data)                                    (0x00000001&(data))

#define  GPIO_GPINT_EMCU_1                                                      0x18061144
#define  GPIO_GPINT_EMCU_1_reg_addr                                              "0xB8061144"
#define  GPIO_GPINT_EMCU_1_reg                                                   0xB8061144
#define  GPIO_GPINT_EMCU_1_inst_addr                                             "0x0011"
#define  set_GPIO_GPINT_EMCU_1_reg(data)                                         (*((volatile unsigned int*)GPIO_GPINT_EMCU_1_reg)=data)
#define  get_GPIO_GPINT_EMCU_1_reg                                               (*((volatile unsigned int*)GPIO_GPINT_EMCU_1_reg))
#define  GPIO_GPINT_EMCU_1_unmask60_shift                                        (30)
#define  GPIO_GPINT_EMCU_1_unmask59_shift                                        (29)
#define  GPIO_GPINT_EMCU_1_unmask58_shift                                        (28)
#define  GPIO_GPINT_EMCU_1_unmask57_shift                                        (27)
#define  GPIO_GPINT_EMCU_1_unmask56_shift                                        (26)
#define  GPIO_GPINT_EMCU_1_unmask55_shift                                        (25)
#define  GPIO_GPINT_EMCU_1_unmask54_shift                                        (24)
#define  GPIO_GPINT_EMCU_1_unmask53_shift                                        (23)
#define  GPIO_GPINT_EMCU_1_unmask52_shift                                        (22)
#define  GPIO_GPINT_EMCU_1_unmask51_shift                                        (21)
#define  GPIO_GPINT_EMCU_1_unmask50_shift                                        (20)
#define  GPIO_GPINT_EMCU_1_unmask49_shift                                        (19)
#define  GPIO_GPINT_EMCU_1_unmask48_shift                                        (18)
#define  GPIO_GPINT_EMCU_1_unmask47_shift                                        (17)
#define  GPIO_GPINT_EMCU_1_unmask46_shift                                        (16)
#define  GPIO_GPINT_EMCU_1_unmask45_shift                                        (15)
#define  GPIO_GPINT_EMCU_1_unmask44_shift                                        (14)
#define  GPIO_GPINT_EMCU_1_unmask43_shift                                        (13)
#define  GPIO_GPINT_EMCU_1_unmask42_shift                                        (12)
#define  GPIO_GPINT_EMCU_1_unmask41_shift                                        (11)
#define  GPIO_GPINT_EMCU_1_unmask40_shift                                        (10)
#define  GPIO_GPINT_EMCU_1_unmask39_shift                                        (9)
#define  GPIO_GPINT_EMCU_1_unmask38_shift                                        (8)
#define  GPIO_GPINT_EMCU_1_unmask37_shift                                        (7)
#define  GPIO_GPINT_EMCU_1_unmask36_shift                                        (6)
#define  GPIO_GPINT_EMCU_1_unmask35_shift                                        (5)
#define  GPIO_GPINT_EMCU_1_unmask34_shift                                        (4)
#define  GPIO_GPINT_EMCU_1_unmask33_shift                                        (3)
#define  GPIO_GPINT_EMCU_1_unmask32_shift                                        (2)
#define  GPIO_GPINT_EMCU_1_unmask31_shift                                        (1)
#define  GPIO_GPINT_EMCU_1_write_data_shift                                      (0)
#define  GPIO_GPINT_EMCU_1_unmask60_mask                                         (0x40000000)
#define  GPIO_GPINT_EMCU_1_unmask59_mask                                         (0x20000000)
#define  GPIO_GPINT_EMCU_1_unmask58_mask                                         (0x10000000)
#define  GPIO_GPINT_EMCU_1_unmask57_mask                                         (0x08000000)
#define  GPIO_GPINT_EMCU_1_unmask56_mask                                         (0x04000000)
#define  GPIO_GPINT_EMCU_1_unmask55_mask                                         (0x02000000)
#define  GPIO_GPINT_EMCU_1_unmask54_mask                                         (0x01000000)
#define  GPIO_GPINT_EMCU_1_unmask53_mask                                         (0x00800000)
#define  GPIO_GPINT_EMCU_1_unmask52_mask                                         (0x00400000)
#define  GPIO_GPINT_EMCU_1_unmask51_mask                                         (0x00200000)
#define  GPIO_GPINT_EMCU_1_unmask50_mask                                         (0x00100000)
#define  GPIO_GPINT_EMCU_1_unmask49_mask                                         (0x00080000)
#define  GPIO_GPINT_EMCU_1_unmask48_mask                                         (0x00040000)
#define  GPIO_GPINT_EMCU_1_unmask47_mask                                         (0x00020000)
#define  GPIO_GPINT_EMCU_1_unmask46_mask                                         (0x00010000)
#define  GPIO_GPINT_EMCU_1_unmask45_mask                                         (0x00008000)
#define  GPIO_GPINT_EMCU_1_unmask44_mask                                         (0x00004000)
#define  GPIO_GPINT_EMCU_1_unmask43_mask                                         (0x00002000)
#define  GPIO_GPINT_EMCU_1_unmask42_mask                                         (0x00001000)
#define  GPIO_GPINT_EMCU_1_unmask41_mask                                         (0x00000800)
#define  GPIO_GPINT_EMCU_1_unmask40_mask                                         (0x00000400)
#define  GPIO_GPINT_EMCU_1_unmask39_mask                                         (0x00000200)
#define  GPIO_GPINT_EMCU_1_unmask38_mask                                         (0x00000100)
#define  GPIO_GPINT_EMCU_1_unmask37_mask                                         (0x00000080)
#define  GPIO_GPINT_EMCU_1_unmask36_mask                                         (0x00000040)
#define  GPIO_GPINT_EMCU_1_unmask35_mask                                         (0x00000020)
#define  GPIO_GPINT_EMCU_1_unmask34_mask                                         (0x00000010)
#define  GPIO_GPINT_EMCU_1_unmask33_mask                                         (0x00000008)
#define  GPIO_GPINT_EMCU_1_unmask32_mask                                         (0x00000004)
#define  GPIO_GPINT_EMCU_1_unmask31_mask                                         (0x00000002)
#define  GPIO_GPINT_EMCU_1_write_data_mask                                       (0x00000001)
#define  GPIO_GPINT_EMCU_1_unmask60(data)                                        (0x40000000&((data)<<30))
#define  GPIO_GPINT_EMCU_1_unmask59(data)                                        (0x20000000&((data)<<29))
#define  GPIO_GPINT_EMCU_1_unmask58(data)                                        (0x10000000&((data)<<28))
#define  GPIO_GPINT_EMCU_1_unmask57(data)                                        (0x08000000&((data)<<27))
#define  GPIO_GPINT_EMCU_1_unmask56(data)                                        (0x04000000&((data)<<26))
#define  GPIO_GPINT_EMCU_1_unmask55(data)                                        (0x02000000&((data)<<25))
#define  GPIO_GPINT_EMCU_1_unmask54(data)                                        (0x01000000&((data)<<24))
#define  GPIO_GPINT_EMCU_1_unmask53(data)                                        (0x00800000&((data)<<23))
#define  GPIO_GPINT_EMCU_1_unmask52(data)                                        (0x00400000&((data)<<22))
#define  GPIO_GPINT_EMCU_1_unmask51(data)                                        (0x00200000&((data)<<21))
#define  GPIO_GPINT_EMCU_1_unmask50(data)                                        (0x00100000&((data)<<20))
#define  GPIO_GPINT_EMCU_1_unmask49(data)                                        (0x00080000&((data)<<19))
#define  GPIO_GPINT_EMCU_1_unmask48(data)                                        (0x00040000&((data)<<18))
#define  GPIO_GPINT_EMCU_1_unmask47(data)                                        (0x00020000&((data)<<17))
#define  GPIO_GPINT_EMCU_1_unmask46(data)                                        (0x00010000&((data)<<16))
#define  GPIO_GPINT_EMCU_1_unmask45(data)                                        (0x00008000&((data)<<15))
#define  GPIO_GPINT_EMCU_1_unmask44(data)                                        (0x00004000&((data)<<14))
#define  GPIO_GPINT_EMCU_1_unmask43(data)                                        (0x00002000&((data)<<13))
#define  GPIO_GPINT_EMCU_1_unmask42(data)                                        (0x00001000&((data)<<12))
#define  GPIO_GPINT_EMCU_1_unmask41(data)                                        (0x00000800&((data)<<11))
#define  GPIO_GPINT_EMCU_1_unmask40(data)                                        (0x00000400&((data)<<10))
#define  GPIO_GPINT_EMCU_1_unmask39(data)                                        (0x00000200&((data)<<9))
#define  GPIO_GPINT_EMCU_1_unmask38(data)                                        (0x00000100&((data)<<8))
#define  GPIO_GPINT_EMCU_1_unmask37(data)                                        (0x00000080&((data)<<7))
#define  GPIO_GPINT_EMCU_1_unmask36(data)                                        (0x00000040&((data)<<6))
#define  GPIO_GPINT_EMCU_1_unmask35(data)                                        (0x00000020&((data)<<5))
#define  GPIO_GPINT_EMCU_1_unmask34(data)                                        (0x00000010&((data)<<4))
#define  GPIO_GPINT_EMCU_1_unmask33(data)                                        (0x00000008&((data)<<3))
#define  GPIO_GPINT_EMCU_1_unmask32(data)                                        (0x00000004&((data)<<2))
#define  GPIO_GPINT_EMCU_1_unmask31(data)                                        (0x00000002&((data)<<1))
#define  GPIO_GPINT_EMCU_1_write_data(data)                                      (0x00000001&(data))
#define  GPIO_GPINT_EMCU_1_get_unmask60(data)                                    ((0x40000000&(data))>>30)
#define  GPIO_GPINT_EMCU_1_get_unmask59(data)                                    ((0x20000000&(data))>>29)
#define  GPIO_GPINT_EMCU_1_get_unmask58(data)                                    ((0x10000000&(data))>>28)
#define  GPIO_GPINT_EMCU_1_get_unmask57(data)                                    ((0x08000000&(data))>>27)
#define  GPIO_GPINT_EMCU_1_get_unmask56(data)                                    ((0x04000000&(data))>>26)
#define  GPIO_GPINT_EMCU_1_get_unmask55(data)                                    ((0x02000000&(data))>>25)
#define  GPIO_GPINT_EMCU_1_get_unmask54(data)                                    ((0x01000000&(data))>>24)
#define  GPIO_GPINT_EMCU_1_get_unmask53(data)                                    ((0x00800000&(data))>>23)
#define  GPIO_GPINT_EMCU_1_get_unmask52(data)                                    ((0x00400000&(data))>>22)
#define  GPIO_GPINT_EMCU_1_get_unmask51(data)                                    ((0x00200000&(data))>>21)
#define  GPIO_GPINT_EMCU_1_get_unmask50(data)                                    ((0x00100000&(data))>>20)
#define  GPIO_GPINT_EMCU_1_get_unmask49(data)                                    ((0x00080000&(data))>>19)
#define  GPIO_GPINT_EMCU_1_get_unmask48(data)                                    ((0x00040000&(data))>>18)
#define  GPIO_GPINT_EMCU_1_get_unmask47(data)                                    ((0x00020000&(data))>>17)
#define  GPIO_GPINT_EMCU_1_get_unmask46(data)                                    ((0x00010000&(data))>>16)
#define  GPIO_GPINT_EMCU_1_get_unmask45(data)                                    ((0x00008000&(data))>>15)
#define  GPIO_GPINT_EMCU_1_get_unmask44(data)                                    ((0x00004000&(data))>>14)
#define  GPIO_GPINT_EMCU_1_get_unmask43(data)                                    ((0x00002000&(data))>>13)
#define  GPIO_GPINT_EMCU_1_get_unmask42(data)                                    ((0x00001000&(data))>>12)
#define  GPIO_GPINT_EMCU_1_get_unmask41(data)                                    ((0x00000800&(data))>>11)
#define  GPIO_GPINT_EMCU_1_get_unmask40(data)                                    ((0x00000400&(data))>>10)
#define  GPIO_GPINT_EMCU_1_get_unmask39(data)                                    ((0x00000200&(data))>>9)
#define  GPIO_GPINT_EMCU_1_get_unmask38(data)                                    ((0x00000100&(data))>>8)
#define  GPIO_GPINT_EMCU_1_get_unmask37(data)                                    ((0x00000080&(data))>>7)
#define  GPIO_GPINT_EMCU_1_get_unmask36(data)                                    ((0x00000040&(data))>>6)
#define  GPIO_GPINT_EMCU_1_get_unmask35(data)                                    ((0x00000020&(data))>>5)
#define  GPIO_GPINT_EMCU_1_get_unmask34(data)                                    ((0x00000010&(data))>>4)
#define  GPIO_GPINT_EMCU_1_get_unmask33(data)                                    ((0x00000008&(data))>>3)
#define  GPIO_GPINT_EMCU_1_get_unmask32(data)                                    ((0x00000004&(data))>>2)
#define  GPIO_GPINT_EMCU_1_get_unmask31(data)                                    ((0x00000002&(data))>>1)
#define  GPIO_GPINT_EMCU_1_get_write_data(data)                                  (0x00000001&(data))

#define  GPIO_GPINT_SCPU                                                        0x18061148
#define  GPIO_GPINT_SCPU_reg_addr                                                "0xB8061148"
#define  GPIO_GPINT_SCPU_reg                                                     0xB8061148
#define  GPIO_GPINT_SCPU_inst_addr                                               "0x0012"
#define  set_GPIO_GPINT_SCPU_reg(data)                                           (*((volatile unsigned int*)GPIO_GPINT_SCPU_reg)=data)
#define  get_GPIO_GPINT_SCPU_reg                                                 (*((volatile unsigned int*)GPIO_GPINT_SCPU_reg))
#define  GPIO_GPINT_SCPU_unmask30_shift                                          (31)
#define  GPIO_GPINT_SCPU_unmask29_shift                                          (30)
#define  GPIO_GPINT_SCPU_unmask28_shift                                          (29)
#define  GPIO_GPINT_SCPU_unmask27_shift                                          (28)
#define  GPIO_GPINT_SCPU_unmask26_shift                                          (27)
#define  GPIO_GPINT_SCPU_unmask25_shift                                          (26)
#define  GPIO_GPINT_SCPU_unmask24_shift                                          (25)
#define  GPIO_GPINT_SCPU_unmask23_shift                                          (24)
#define  GPIO_GPINT_SCPU_unmask22_shift                                          (23)
#define  GPIO_GPINT_SCPU_unmask21_shift                                          (22)
#define  GPIO_GPINT_SCPU_unmask20_shift                                          (21)
#define  GPIO_GPINT_SCPU_unmask19_shift                                          (20)
#define  GPIO_GPINT_SCPU_unmask18_shift                                          (19)
#define  GPIO_GPINT_SCPU_unmask17_shift                                          (18)
#define  GPIO_GPINT_SCPU_unmask16_shift                                          (17)
#define  GPIO_GPINT_SCPU_unmask15_shift                                          (16)
#define  GPIO_GPINT_SCPU_unmask14_shift                                          (15)
#define  GPIO_GPINT_SCPU_unmask13_shift                                          (14)
#define  GPIO_GPINT_SCPU_unmask12_shift                                          (13)
#define  GPIO_GPINT_SCPU_unmask11_shift                                          (12)
#define  GPIO_GPINT_SCPU_unmask10_shift                                          (11)
#define  GPIO_GPINT_SCPU_unmask9_shift                                           (10)
#define  GPIO_GPINT_SCPU_unmask8_shift                                           (9)
#define  GPIO_GPINT_SCPU_unmask7_shift                                           (8)
#define  GPIO_GPINT_SCPU_unmask6_shift                                           (7)
#define  GPIO_GPINT_SCPU_unmask5_shift                                           (6)
#define  GPIO_GPINT_SCPU_unmask4_shift                                           (5)
#define  GPIO_GPINT_SCPU_unmask3_shift                                           (4)
#define  GPIO_GPINT_SCPU_unmask2_shift                                           (3)
#define  GPIO_GPINT_SCPU_unmask1_shift                                           (2)
#define  GPIO_GPINT_SCPU_unmask0_shift                                           (1)
#define  GPIO_GPINT_SCPU_write_data_shift                                        (0)
#define  GPIO_GPINT_SCPU_unmask30_mask                                           (0x80000000)
#define  GPIO_GPINT_SCPU_unmask29_mask                                           (0x40000000)
#define  GPIO_GPINT_SCPU_unmask28_mask                                           (0x20000000)
#define  GPIO_GPINT_SCPU_unmask27_mask                                           (0x10000000)
#define  GPIO_GPINT_SCPU_unmask26_mask                                           (0x08000000)
#define  GPIO_GPINT_SCPU_unmask25_mask                                           (0x04000000)
#define  GPIO_GPINT_SCPU_unmask24_mask                                           (0x02000000)
#define  GPIO_GPINT_SCPU_unmask23_mask                                           (0x01000000)
#define  GPIO_GPINT_SCPU_unmask22_mask                                           (0x00800000)
#define  GPIO_GPINT_SCPU_unmask21_mask                                           (0x00400000)
#define  GPIO_GPINT_SCPU_unmask20_mask                                           (0x00200000)
#define  GPIO_GPINT_SCPU_unmask19_mask                                           (0x00100000)
#define  GPIO_GPINT_SCPU_unmask18_mask                                           (0x00080000)
#define  GPIO_GPINT_SCPU_unmask17_mask                                           (0x00040000)
#define  GPIO_GPINT_SCPU_unmask16_mask                                           (0x00020000)
#define  GPIO_GPINT_SCPU_unmask15_mask                                           (0x00010000)
#define  GPIO_GPINT_SCPU_unmask14_mask                                           (0x00008000)
#define  GPIO_GPINT_SCPU_unmask13_mask                                           (0x00004000)
#define  GPIO_GPINT_SCPU_unmask12_mask                                           (0x00002000)
#define  GPIO_GPINT_SCPU_unmask11_mask                                           (0x00001000)
#define  GPIO_GPINT_SCPU_unmask10_mask                                           (0x00000800)
#define  GPIO_GPINT_SCPU_unmask9_mask                                            (0x00000400)
#define  GPIO_GPINT_SCPU_unmask8_mask                                            (0x00000200)
#define  GPIO_GPINT_SCPU_unmask7_mask                                            (0x00000100)
#define  GPIO_GPINT_SCPU_unmask6_mask                                            (0x00000080)
#define  GPIO_GPINT_SCPU_unmask5_mask                                            (0x00000040)
#define  GPIO_GPINT_SCPU_unmask4_mask                                            (0x00000020)
#define  GPIO_GPINT_SCPU_unmask3_mask                                            (0x00000010)
#define  GPIO_GPINT_SCPU_unmask2_mask                                            (0x00000008)
#define  GPIO_GPINT_SCPU_unmask1_mask                                            (0x00000004)
#define  GPIO_GPINT_SCPU_unmask0_mask                                            (0x00000002)
#define  GPIO_GPINT_SCPU_write_data_mask                                         (0x00000001)
#define  GPIO_GPINT_SCPU_unmask30(data)                                          (0x80000000&((data)<<31))
#define  GPIO_GPINT_SCPU_unmask29(data)                                          (0x40000000&((data)<<30))
#define  GPIO_GPINT_SCPU_unmask28(data)                                          (0x20000000&((data)<<29))
#define  GPIO_GPINT_SCPU_unmask27(data)                                          (0x10000000&((data)<<28))
#define  GPIO_GPINT_SCPU_unmask26(data)                                          (0x08000000&((data)<<27))
#define  GPIO_GPINT_SCPU_unmask25(data)                                          (0x04000000&((data)<<26))
#define  GPIO_GPINT_SCPU_unmask24(data)                                          (0x02000000&((data)<<25))
#define  GPIO_GPINT_SCPU_unmask23(data)                                          (0x01000000&((data)<<24))
#define  GPIO_GPINT_SCPU_unmask22(data)                                          (0x00800000&((data)<<23))
#define  GPIO_GPINT_SCPU_unmask21(data)                                          (0x00400000&((data)<<22))
#define  GPIO_GPINT_SCPU_unmask20(data)                                          (0x00200000&((data)<<21))
#define  GPIO_GPINT_SCPU_unmask19(data)                                          (0x00100000&((data)<<20))
#define  GPIO_GPINT_SCPU_unmask18(data)                                          (0x00080000&((data)<<19))
#define  GPIO_GPINT_SCPU_unmask17(data)                                          (0x00040000&((data)<<18))
#define  GPIO_GPINT_SCPU_unmask16(data)                                          (0x00020000&((data)<<17))
#define  GPIO_GPINT_SCPU_unmask15(data)                                          (0x00010000&((data)<<16))
#define  GPIO_GPINT_SCPU_unmask14(data)                                          (0x00008000&((data)<<15))
#define  GPIO_GPINT_SCPU_unmask13(data)                                          (0x00004000&((data)<<14))
#define  GPIO_GPINT_SCPU_unmask12(data)                                          (0x00002000&((data)<<13))
#define  GPIO_GPINT_SCPU_unmask11(data)                                          (0x00001000&((data)<<12))
#define  GPIO_GPINT_SCPU_unmask10(data)                                          (0x00000800&((data)<<11))
#define  GPIO_GPINT_SCPU_unmask9(data)                                           (0x00000400&((data)<<10))
#define  GPIO_GPINT_SCPU_unmask8(data)                                           (0x00000200&((data)<<9))
#define  GPIO_GPINT_SCPU_unmask7(data)                                           (0x00000100&((data)<<8))
#define  GPIO_GPINT_SCPU_unmask6(data)                                           (0x00000080&((data)<<7))
#define  GPIO_GPINT_SCPU_unmask5(data)                                           (0x00000040&((data)<<6))
#define  GPIO_GPINT_SCPU_unmask4(data)                                           (0x00000020&((data)<<5))
#define  GPIO_GPINT_SCPU_unmask3(data)                                           (0x00000010&((data)<<4))
#define  GPIO_GPINT_SCPU_unmask2(data)                                           (0x00000008&((data)<<3))
#define  GPIO_GPINT_SCPU_unmask1(data)                                           (0x00000004&((data)<<2))
#define  GPIO_GPINT_SCPU_unmask0(data)                                           (0x00000002&((data)<<1))
#define  GPIO_GPINT_SCPU_write_data(data)                                        (0x00000001&(data))
#define  GPIO_GPINT_SCPU_get_unmask30(data)                                      ((0x80000000&(data))>>31)
#define  GPIO_GPINT_SCPU_get_unmask29(data)                                      ((0x40000000&(data))>>30)
#define  GPIO_GPINT_SCPU_get_unmask28(data)                                      ((0x20000000&(data))>>29)
#define  GPIO_GPINT_SCPU_get_unmask27(data)                                      ((0x10000000&(data))>>28)
#define  GPIO_GPINT_SCPU_get_unmask26(data)                                      ((0x08000000&(data))>>27)
#define  GPIO_GPINT_SCPU_get_unmask25(data)                                      ((0x04000000&(data))>>26)
#define  GPIO_GPINT_SCPU_get_unmask24(data)                                      ((0x02000000&(data))>>25)
#define  GPIO_GPINT_SCPU_get_unmask23(data)                                      ((0x01000000&(data))>>24)
#define  GPIO_GPINT_SCPU_get_unmask22(data)                                      ((0x00800000&(data))>>23)
#define  GPIO_GPINT_SCPU_get_unmask21(data)                                      ((0x00400000&(data))>>22)
#define  GPIO_GPINT_SCPU_get_unmask20(data)                                      ((0x00200000&(data))>>21)
#define  GPIO_GPINT_SCPU_get_unmask19(data)                                      ((0x00100000&(data))>>20)
#define  GPIO_GPINT_SCPU_get_unmask18(data)                                      ((0x00080000&(data))>>19)
#define  GPIO_GPINT_SCPU_get_unmask17(data)                                      ((0x00040000&(data))>>18)
#define  GPIO_GPINT_SCPU_get_unmask16(data)                                      ((0x00020000&(data))>>17)
#define  GPIO_GPINT_SCPU_get_unmask15(data)                                      ((0x00010000&(data))>>16)
#define  GPIO_GPINT_SCPU_get_unmask14(data)                                      ((0x00008000&(data))>>15)
#define  GPIO_GPINT_SCPU_get_unmask13(data)                                      ((0x00004000&(data))>>14)
#define  GPIO_GPINT_SCPU_get_unmask12(data)                                      ((0x00002000&(data))>>13)
#define  GPIO_GPINT_SCPU_get_unmask11(data)                                      ((0x00001000&(data))>>12)
#define  GPIO_GPINT_SCPU_get_unmask10(data)                                      ((0x00000800&(data))>>11)
#define  GPIO_GPINT_SCPU_get_unmask9(data)                                       ((0x00000400&(data))>>10)
#define  GPIO_GPINT_SCPU_get_unmask8(data)                                       ((0x00000200&(data))>>9)
#define  GPIO_GPINT_SCPU_get_unmask7(data)                                       ((0x00000100&(data))>>8)
#define  GPIO_GPINT_SCPU_get_unmask6(data)                                       ((0x00000080&(data))>>7)
#define  GPIO_GPINT_SCPU_get_unmask5(data)                                       ((0x00000040&(data))>>6)
#define  GPIO_GPINT_SCPU_get_unmask4(data)                                       ((0x00000020&(data))>>5)
#define  GPIO_GPINT_SCPU_get_unmask3(data)                                       ((0x00000010&(data))>>4)
#define  GPIO_GPINT_SCPU_get_unmask2(data)                                       ((0x00000008&(data))>>3)
#define  GPIO_GPINT_SCPU_get_unmask1(data)                                       ((0x00000004&(data))>>2)
#define  GPIO_GPINT_SCPU_get_unmask0(data)                                       ((0x00000002&(data))>>1)
#define  GPIO_GPINT_SCPU_get_write_data(data)                                    (0x00000001&(data))

#define  GPIO_GPINT_SCPU_1                                                      0x1806114C
#define  GPIO_GPINT_SCPU_1_reg_addr                                              "0xB806114C"
#define  GPIO_GPINT_SCPU_1_reg                                                   0xB806114C
#define  GPIO_GPINT_SCPU_1_inst_addr                                             "0x0013"
#define  set_GPIO_GPINT_SCPU_1_reg(data)                                         (*((volatile unsigned int*)GPIO_GPINT_SCPU_1_reg)=data)
#define  get_GPIO_GPINT_SCPU_1_reg                                               (*((volatile unsigned int*)GPIO_GPINT_SCPU_1_reg))
#define  GPIO_GPINT_SCPU_1_unmask60_shift                                        (30)
#define  GPIO_GPINT_SCPU_1_unmask59_shift                                        (29)
#define  GPIO_GPINT_SCPU_1_unmask58_shift                                        (28)
#define  GPIO_GPINT_SCPU_1_unmask57_shift                                        (27)
#define  GPIO_GPINT_SCPU_1_unmask56_shift                                        (26)
#define  GPIO_GPINT_SCPU_1_unmask55_shift                                        (25)
#define  GPIO_GPINT_SCPU_1_unmask54_shift                                        (24)
#define  GPIO_GPINT_SCPU_1_unmask53_shift                                        (23)
#define  GPIO_GPINT_SCPU_1_unmask52_shift                                        (22)
#define  GPIO_GPINT_SCPU_1_unmask51_shift                                        (21)
#define  GPIO_GPINT_SCPU_1_unmask50_shift                                        (20)
#define  GPIO_GPINT_SCPU_1_unmask49_shift                                        (19)
#define  GPIO_GPINT_SCPU_1_unmask48_shift                                        (18)
#define  GPIO_GPINT_SCPU_1_unmask47_shift                                        (17)
#define  GPIO_GPINT_SCPU_1_unmask46_shift                                        (16)
#define  GPIO_GPINT_SCPU_1_unmask45_shift                                        (15)
#define  GPIO_GPINT_SCPU_1_unmask44_shift                                        (14)
#define  GPIO_GPINT_SCPU_1_unmask43_shift                                        (13)
#define  GPIO_GPINT_SCPU_1_unmask42_shift                                        (12)
#define  GPIO_GPINT_SCPU_1_unmask41_shift                                        (11)
#define  GPIO_GPINT_SCPU_1_unmask40_shift                                        (10)
#define  GPIO_GPINT_SCPU_1_unmask39_shift                                        (9)
#define  GPIO_GPINT_SCPU_1_unmask38_shift                                        (8)
#define  GPIO_GPINT_SCPU_1_unmask37_shift                                        (7)
#define  GPIO_GPINT_SCPU_1_unmask36_shift                                        (6)
#define  GPIO_GPINT_SCPU_1_unmask35_shift                                        (5)
#define  GPIO_GPINT_SCPU_1_unmask34_shift                                        (4)
#define  GPIO_GPINT_SCPU_1_unmask33_shift                                        (3)
#define  GPIO_GPINT_SCPU_1_unmask32_shift                                        (2)
#define  GPIO_GPINT_SCPU_1_unmask31_shift                                        (1)
#define  GPIO_GPINT_SCPU_1_write_data_shift                                      (0)
#define  GPIO_GPINT_SCPU_1_unmask60_mask                                         (0x40000000)
#define  GPIO_GPINT_SCPU_1_unmask59_mask                                         (0x20000000)
#define  GPIO_GPINT_SCPU_1_unmask58_mask                                         (0x10000000)
#define  GPIO_GPINT_SCPU_1_unmask57_mask                                         (0x08000000)
#define  GPIO_GPINT_SCPU_1_unmask56_mask                                         (0x04000000)
#define  GPIO_GPINT_SCPU_1_unmask55_mask                                         (0x02000000)
#define  GPIO_GPINT_SCPU_1_unmask54_mask                                         (0x01000000)
#define  GPIO_GPINT_SCPU_1_unmask53_mask                                         (0x00800000)
#define  GPIO_GPINT_SCPU_1_unmask52_mask                                         (0x00400000)
#define  GPIO_GPINT_SCPU_1_unmask51_mask                                         (0x00200000)
#define  GPIO_GPINT_SCPU_1_unmask50_mask                                         (0x00100000)
#define  GPIO_GPINT_SCPU_1_unmask49_mask                                         (0x00080000)
#define  GPIO_GPINT_SCPU_1_unmask48_mask                                         (0x00040000)
#define  GPIO_GPINT_SCPU_1_unmask47_mask                                         (0x00020000)
#define  GPIO_GPINT_SCPU_1_unmask46_mask                                         (0x00010000)
#define  GPIO_GPINT_SCPU_1_unmask45_mask                                         (0x00008000)
#define  GPIO_GPINT_SCPU_1_unmask44_mask                                         (0x00004000)
#define  GPIO_GPINT_SCPU_1_unmask43_mask                                         (0x00002000)
#define  GPIO_GPINT_SCPU_1_unmask42_mask                                         (0x00001000)
#define  GPIO_GPINT_SCPU_1_unmask41_mask                                         (0x00000800)
#define  GPIO_GPINT_SCPU_1_unmask40_mask                                         (0x00000400)
#define  GPIO_GPINT_SCPU_1_unmask39_mask                                         (0x00000200)
#define  GPIO_GPINT_SCPU_1_unmask38_mask                                         (0x00000100)
#define  GPIO_GPINT_SCPU_1_unmask37_mask                                         (0x00000080)
#define  GPIO_GPINT_SCPU_1_unmask36_mask                                         (0x00000040)
#define  GPIO_GPINT_SCPU_1_unmask35_mask                                         (0x00000020)
#define  GPIO_GPINT_SCPU_1_unmask34_mask                                         (0x00000010)
#define  GPIO_GPINT_SCPU_1_unmask33_mask                                         (0x00000008)
#define  GPIO_GPINT_SCPU_1_unmask32_mask                                         (0x00000004)
#define  GPIO_GPINT_SCPU_1_unmask31_mask                                         (0x00000002)
#define  GPIO_GPINT_SCPU_1_write_data_mask                                       (0x00000001)
#define  GPIO_GPINT_SCPU_1_unmask60(data)                                        (0x40000000&((data)<<30))
#define  GPIO_GPINT_SCPU_1_unmask59(data)                                        (0x20000000&((data)<<29))
#define  GPIO_GPINT_SCPU_1_unmask58(data)                                        (0x10000000&((data)<<28))
#define  GPIO_GPINT_SCPU_1_unmask57(data)                                        (0x08000000&((data)<<27))
#define  GPIO_GPINT_SCPU_1_unmask56(data)                                        (0x04000000&((data)<<26))
#define  GPIO_GPINT_SCPU_1_unmask55(data)                                        (0x02000000&((data)<<25))
#define  GPIO_GPINT_SCPU_1_unmask54(data)                                        (0x01000000&((data)<<24))
#define  GPIO_GPINT_SCPU_1_unmask53(data)                                        (0x00800000&((data)<<23))
#define  GPIO_GPINT_SCPU_1_unmask52(data)                                        (0x00400000&((data)<<22))
#define  GPIO_GPINT_SCPU_1_unmask51(data)                                        (0x00200000&((data)<<21))
#define  GPIO_GPINT_SCPU_1_unmask50(data)                                        (0x00100000&((data)<<20))
#define  GPIO_GPINT_SCPU_1_unmask49(data)                                        (0x00080000&((data)<<19))
#define  GPIO_GPINT_SCPU_1_unmask48(data)                                        (0x00040000&((data)<<18))
#define  GPIO_GPINT_SCPU_1_unmask47(data)                                        (0x00020000&((data)<<17))
#define  GPIO_GPINT_SCPU_1_unmask46(data)                                        (0x00010000&((data)<<16))
#define  GPIO_GPINT_SCPU_1_unmask45(data)                                        (0x00008000&((data)<<15))
#define  GPIO_GPINT_SCPU_1_unmask44(data)                                        (0x00004000&((data)<<14))
#define  GPIO_GPINT_SCPU_1_unmask43(data)                                        (0x00002000&((data)<<13))
#define  GPIO_GPINT_SCPU_1_unmask42(data)                                        (0x00001000&((data)<<12))
#define  GPIO_GPINT_SCPU_1_unmask41(data)                                        (0x00000800&((data)<<11))
#define  GPIO_GPINT_SCPU_1_unmask40(data)                                        (0x00000400&((data)<<10))
#define  GPIO_GPINT_SCPU_1_unmask39(data)                                        (0x00000200&((data)<<9))
#define  GPIO_GPINT_SCPU_1_unmask38(data)                                        (0x00000100&((data)<<8))
#define  GPIO_GPINT_SCPU_1_unmask37(data)                                        (0x00000080&((data)<<7))
#define  GPIO_GPINT_SCPU_1_unmask36(data)                                        (0x00000040&((data)<<6))
#define  GPIO_GPINT_SCPU_1_unmask35(data)                                        (0x00000020&((data)<<5))
#define  GPIO_GPINT_SCPU_1_unmask34(data)                                        (0x00000010&((data)<<4))
#define  GPIO_GPINT_SCPU_1_unmask33(data)                                        (0x00000008&((data)<<3))
#define  GPIO_GPINT_SCPU_1_unmask32(data)                                        (0x00000004&((data)<<2))
#define  GPIO_GPINT_SCPU_1_unmask31(data)                                        (0x00000002&((data)<<1))
#define  GPIO_GPINT_SCPU_1_write_data(data)                                      (0x00000001&(data))
#define  GPIO_GPINT_SCPU_1_get_unmask60(data)                                    ((0x40000000&(data))>>30)
#define  GPIO_GPINT_SCPU_1_get_unmask59(data)                                    ((0x20000000&(data))>>29)
#define  GPIO_GPINT_SCPU_1_get_unmask58(data)                                    ((0x10000000&(data))>>28)
#define  GPIO_GPINT_SCPU_1_get_unmask57(data)                                    ((0x08000000&(data))>>27)
#define  GPIO_GPINT_SCPU_1_get_unmask56(data)                                    ((0x04000000&(data))>>26)
#define  GPIO_GPINT_SCPU_1_get_unmask55(data)                                    ((0x02000000&(data))>>25)
#define  GPIO_GPINT_SCPU_1_get_unmask54(data)                                    ((0x01000000&(data))>>24)
#define  GPIO_GPINT_SCPU_1_get_unmask53(data)                                    ((0x00800000&(data))>>23)
#define  GPIO_GPINT_SCPU_1_get_unmask52(data)                                    ((0x00400000&(data))>>22)
#define  GPIO_GPINT_SCPU_1_get_unmask51(data)                                    ((0x00200000&(data))>>21)
#define  GPIO_GPINT_SCPU_1_get_unmask50(data)                                    ((0x00100000&(data))>>20)
#define  GPIO_GPINT_SCPU_1_get_unmask49(data)                                    ((0x00080000&(data))>>19)
#define  GPIO_GPINT_SCPU_1_get_unmask48(data)                                    ((0x00040000&(data))>>18)
#define  GPIO_GPINT_SCPU_1_get_unmask47(data)                                    ((0x00020000&(data))>>17)
#define  GPIO_GPINT_SCPU_1_get_unmask46(data)                                    ((0x00010000&(data))>>16)
#define  GPIO_GPINT_SCPU_1_get_unmask45(data)                                    ((0x00008000&(data))>>15)
#define  GPIO_GPINT_SCPU_1_get_unmask44(data)                                    ((0x00004000&(data))>>14)
#define  GPIO_GPINT_SCPU_1_get_unmask43(data)                                    ((0x00002000&(data))>>13)
#define  GPIO_GPINT_SCPU_1_get_unmask42(data)                                    ((0x00001000&(data))>>12)
#define  GPIO_GPINT_SCPU_1_get_unmask41(data)                                    ((0x00000800&(data))>>11)
#define  GPIO_GPINT_SCPU_1_get_unmask40(data)                                    ((0x00000400&(data))>>10)
#define  GPIO_GPINT_SCPU_1_get_unmask39(data)                                    ((0x00000200&(data))>>9)
#define  GPIO_GPINT_SCPU_1_get_unmask38(data)                                    ((0x00000100&(data))>>8)
#define  GPIO_GPINT_SCPU_1_get_unmask37(data)                                    ((0x00000080&(data))>>7)
#define  GPIO_GPINT_SCPU_1_get_unmask36(data)                                    ((0x00000040&(data))>>6)
#define  GPIO_GPINT_SCPU_1_get_unmask35(data)                                    ((0x00000020&(data))>>5)
#define  GPIO_GPINT_SCPU_1_get_unmask34(data)                                    ((0x00000010&(data))>>4)
#define  GPIO_GPINT_SCPU_1_get_unmask33(data)                                    ((0x00000008&(data))>>3)
#define  GPIO_GPINT_SCPU_1_get_unmask32(data)                                    ((0x00000004&(data))>>2)
#define  GPIO_GPINT_SCPU_1_get_unmask31(data)                                    ((0x00000002&(data))>>1)
#define  GPIO_GPINT_SCPU_1_get_write_data(data)                                  (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======GPIO register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpdir30:1;
        RBus_UInt32  gpdir29:1;
        RBus_UInt32  gpdir28:1;
        RBus_UInt32  gpdir27:1;
        RBus_UInt32  gpdir26:1;
        RBus_UInt32  gpdir25:1;
        RBus_UInt32  gpdir24:1;
        RBus_UInt32  gpdir23:1;
        RBus_UInt32  gpdir22:1;
        RBus_UInt32  gpdir21:1;
        RBus_UInt32  gpdir20:1;
        RBus_UInt32  gpdir19:1;
        RBus_UInt32  gpdir18:1;
        RBus_UInt32  gpdir17:1;
        RBus_UInt32  gpdir16:1;
        RBus_UInt32  gpdir15:1;
        RBus_UInt32  gpdir14:1;
        RBus_UInt32  gpdir13:1;
        RBus_UInt32  gpdir12:1;
        RBus_UInt32  gpdir11:1;
        RBus_UInt32  gpdir10:1;
        RBus_UInt32  gpdir9:1;
        RBus_UInt32  gpdir8:1;
        RBus_UInt32  gpdir7:1;
        RBus_UInt32  gpdir6:1;
        RBus_UInt32  gpdir5:1;
        RBus_UInt32  gpdir4:1;
        RBus_UInt32  gpdir3:1;
        RBus_UInt32  gpdir2:1;
        RBus_UInt32  gpdir1:1;
        RBus_UInt32  gpdir0:1;
        RBus_UInt32  write_data:1;
    };
}gpio_gpdir_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  gpdir60:1;
        RBus_UInt32  gpdir59:1;
        RBus_UInt32  gpdir58:1;
        RBus_UInt32  gpdir57:1;
        RBus_UInt32  gpdir56:1;
        RBus_UInt32  gpdir55:1;
        RBus_UInt32  gpdir54:1;
        RBus_UInt32  gpdir53:1;
        RBus_UInt32  gpdir52:1;
        RBus_UInt32  gpdir51:1;
        RBus_UInt32  gpdir50:1;
        RBus_UInt32  gpdir49:1;
        RBus_UInt32  gpdir48:1;
        RBus_UInt32  gpdir47:1;
        RBus_UInt32  gpdir46:1;
        RBus_UInt32  gpdir45:1;
        RBus_UInt32  gpdir44:1;
        RBus_UInt32  gpdir43:1;
        RBus_UInt32  gpdir42:1;
        RBus_UInt32  gpdir41:1;
        RBus_UInt32  gpdir40:1;
        RBus_UInt32  gpdir39:1;
        RBus_UInt32  gpdir38:1;
        RBus_UInt32  gpdir37:1;
        RBus_UInt32  gpdir36:1;
        RBus_UInt32  gpdir35:1;
        RBus_UInt32  gpdir34:1;
        RBus_UInt32  gpdir33:1;
        RBus_UInt32  gpdir32:1;
        RBus_UInt32  gpdir31:1;
        RBus_UInt32  write_data:1;
    };
}gpio_gpdir_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpdato30:1;
        RBus_UInt32  gpdato29:1;
        RBus_UInt32  gpdato28:1;
        RBus_UInt32  gpdato27:1;
        RBus_UInt32  gpdato26:1;
        RBus_UInt32  gpdato25:1;
        RBus_UInt32  gpdato24:1;
        RBus_UInt32  gpdato23:1;
        RBus_UInt32  gpdato22:1;
        RBus_UInt32  gpdato21:1;
        RBus_UInt32  gpdato20:1;
        RBus_UInt32  gpdato19:1;
        RBus_UInt32  gpdato18:1;
        RBus_UInt32  gpdato17:1;
        RBus_UInt32  gpdato16:1;
        RBus_UInt32  gpdato15:1;
        RBus_UInt32  gpdato14:1;
        RBus_UInt32  gpdato13:1;
        RBus_UInt32  gpdato12:1;
        RBus_UInt32  gpdato11:1;
        RBus_UInt32  gpdato10:1;
        RBus_UInt32  gpdato9:1;
        RBus_UInt32  gpdato8:1;
        RBus_UInt32  gpdato7:1;
        RBus_UInt32  gpdato6:1;
        RBus_UInt32  gpdato5:1;
        RBus_UInt32  gpdato4:1;
        RBus_UInt32  gpdato3:1;
        RBus_UInt32  gpdato2:1;
        RBus_UInt32  gpdato1:1;
        RBus_UInt32  gpdato0:1;
        RBus_UInt32  write_data:1;
    };
}gpio_gpdato_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  gpdato60:1;
        RBus_UInt32  gpdato59:1;
        RBus_UInt32  gpdato58:1;
        RBus_UInt32  gpdato57:1;
        RBus_UInt32  gpdato56:1;
        RBus_UInt32  gpdato55:1;
        RBus_UInt32  gpdato54:1;
        RBus_UInt32  gpdato53:1;
        RBus_UInt32  gpdato52:1;
        RBus_UInt32  gpdato51:1;
        RBus_UInt32  gpdato50:1;
        RBus_UInt32  gpdato49:1;
        RBus_UInt32  gpdato48:1;
        RBus_UInt32  gpdato47:1;
        RBus_UInt32  gpdato46:1;
        RBus_UInt32  gpdato45:1;
        RBus_UInt32  gpdato44:1;
        RBus_UInt32  gpdato43:1;
        RBus_UInt32  gpdato42:1;
        RBus_UInt32  gpdato41:1;
        RBus_UInt32  gpdato40:1;
        RBus_UInt32  gpdato39:1;
        RBus_UInt32  gpdato38:1;
        RBus_UInt32  gpdato37:1;
        RBus_UInt32  gpdato36:1;
        RBus_UInt32  gpdato35:1;
        RBus_UInt32  gpdato34:1;
        RBus_UInt32  gpdato33:1;
        RBus_UInt32  gpdato32:1;
        RBus_UInt32  gpdato31:1;
        RBus_UInt32  write_data:1;
    };
}gpio_gpdato_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpdati:31;
        RBus_UInt32  res1:1;
    };
}gpio_gpdati_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  gpdati:30;
        RBus_UInt32  res2:1;
    };
}gpio_gpdati_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gp30:1;
        RBus_UInt32  gp29:1;
        RBus_UInt32  gp28:1;
        RBus_UInt32  gp27:1;
        RBus_UInt32  gp26:1;
        RBus_UInt32  gp25:1;
        RBus_UInt32  gp24:1;
        RBus_UInt32  gp23:1;
        RBus_UInt32  gp22:1;
        RBus_UInt32  gp21:1;
        RBus_UInt32  gp20:1;
        RBus_UInt32  gp19:1;
        RBus_UInt32  gp18:1;
        RBus_UInt32  gp17:1;
        RBus_UInt32  gp16:1;
        RBus_UInt32  gp15:1;
        RBus_UInt32  gp14:1;
        RBus_UInt32  gp13:1;
        RBus_UInt32  gp12:1;
        RBus_UInt32  gp11:1;
        RBus_UInt32  gp10:1;
        RBus_UInt32  gp9:1;
        RBus_UInt32  gp8:1;
        RBus_UInt32  gp7:1;
        RBus_UInt32  gp6:1;
        RBus_UInt32  gp5:1;
        RBus_UInt32  gp4:1;
        RBus_UInt32  gp3:1;
        RBus_UInt32  gp2:1;
        RBus_UInt32  gp1:1;
        RBus_UInt32  gp0:1;
        RBus_UInt32  write_data:1;
    };
}gpio_gpie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  gp60:1;
        RBus_UInt32  gp59:1;
        RBus_UInt32  gp58:1;
        RBus_UInt32  gp57:1;
        RBus_UInt32  gp56:1;
        RBus_UInt32  gp55:1;
        RBus_UInt32  gp54:1;
        RBus_UInt32  gp53:1;
        RBus_UInt32  gp52:1;
        RBus_UInt32  gp51:1;
        RBus_UInt32  gp50:1;
        RBus_UInt32  gp49:1;
        RBus_UInt32  gp48:1;
        RBus_UInt32  gp47:1;
        RBus_UInt32  gp46:1;
        RBus_UInt32  gp45:1;
        RBus_UInt32  gp44:1;
        RBus_UInt32  gp43:1;
        RBus_UInt32  gp42:1;
        RBus_UInt32  gp41:1;
        RBus_UInt32  gp40:1;
        RBus_UInt32  gp39:1;
        RBus_UInt32  gp38:1;
        RBus_UInt32  gp37:1;
        RBus_UInt32  gp36:1;
        RBus_UInt32  gp35:1;
        RBus_UInt32  gp34:1;
        RBus_UInt32  gp33:1;
        RBus_UInt32  gp32:1;
        RBus_UInt32  gp31:1;
        RBus_UInt32  write_data:1;
    };
}gpio_gpie_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpha30:1;
        RBus_UInt32  gpha29:1;
        RBus_UInt32  gpha28:1;
        RBus_UInt32  gpha27:1;
        RBus_UInt32  gpha26:1;
        RBus_UInt32  gpha25:1;
        RBus_UInt32  gpha24:1;
        RBus_UInt32  gpha23:1;
        RBus_UInt32  gpha22:1;
        RBus_UInt32  gpha21:1;
        RBus_UInt32  gpha20:1;
        RBus_UInt32  gpha19:1;
        RBus_UInt32  gpha18:1;
        RBus_UInt32  gpha17:1;
        RBus_UInt32  gpha16:1;
        RBus_UInt32  gpha15:1;
        RBus_UInt32  gpha14:1;
        RBus_UInt32  gpha13:1;
        RBus_UInt32  gpha12:1;
        RBus_UInt32  gpha11:1;
        RBus_UInt32  gpha10:1;
        RBus_UInt32  gpha9:1;
        RBus_UInt32  gpha8:1;
        RBus_UInt32  gpha7:1;
        RBus_UInt32  gpha6:1;
        RBus_UInt32  gpha5:1;
        RBus_UInt32  gpha4:1;
        RBus_UInt32  gpha3:1;
        RBus_UInt32  gpha2:1;
        RBus_UInt32  gpha1:1;
        RBus_UInt32  gpha0:1;
        RBus_UInt32  write_data:1;
    };
}gpio_gpdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  gpha60:1;
        RBus_UInt32  gpha59:1;
        RBus_UInt32  gpha58:1;
        RBus_UInt32  gpha57:1;
        RBus_UInt32  gpha56:1;
        RBus_UInt32  gpha55:1;
        RBus_UInt32  gpha54:1;
        RBus_UInt32  gpha53:1;
        RBus_UInt32  gpha52:1;
        RBus_UInt32  gpha51:1;
        RBus_UInt32  gpha50:1;
        RBus_UInt32  gpha49:1;
        RBus_UInt32  gpha48:1;
        RBus_UInt32  gpha47:1;
        RBus_UInt32  gpha46:1;
        RBus_UInt32  gpha45:1;
        RBus_UInt32  gpha44:1;
        RBus_UInt32  gpha43:1;
        RBus_UInt32  gpha42:1;
        RBus_UInt32  gpha41:1;
        RBus_UInt32  gpha40:1;
        RBus_UInt32  gpha39:1;
        RBus_UInt32  gpha38:1;
        RBus_UInt32  gpha37:1;
        RBus_UInt32  gpha36:1;
        RBus_UInt32  gpha35:1;
        RBus_UInt32  gpha34:1;
        RBus_UInt32  gpha33:1;
        RBus_UInt32  gpha32:1;
        RBus_UInt32  gpha31:1;
        RBus_UInt32  write_data:1;
    };
}gpio_gpdp_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  clk4:3;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  clk3:3;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  clk2:3;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  clk1:3;
    };
}gpio_gpdeb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int30_a:1;
        RBus_UInt32  int29_a:1;
        RBus_UInt32  int28_a:1;
        RBus_UInt32  int27_a:1;
        RBus_UInt32  int26_a:1;
        RBus_UInt32  int25_a:1;
        RBus_UInt32  int24_a:1;
        RBus_UInt32  int23_a:1;
        RBus_UInt32  int22_a:1;
        RBus_UInt32  int21_a:1;
        RBus_UInt32  int20_a:1;
        RBus_UInt32  int19_a:1;
        RBus_UInt32  int18_a:1;
        RBus_UInt32  int17_a:1;
        RBus_UInt32  int16_a:1;
        RBus_UInt32  int15_a:1;
        RBus_UInt32  int14_a:1;
        RBus_UInt32  int13_a:1;
        RBus_UInt32  int12_a:1;
        RBus_UInt32  int11_a:1;
        RBus_UInt32  int10_a:1;
        RBus_UInt32  int9_a:1;
        RBus_UInt32  int8_a:1;
        RBus_UInt32  int7_a:1;
        RBus_UInt32  int6_a:1;
        RBus_UInt32  int5_a:1;
        RBus_UInt32  int4_a:1;
        RBus_UInt32  int3_a:1;
        RBus_UInt32  int2_a:1;
        RBus_UInt32  int1_a:1;
        RBus_UInt32  int0_a:1;
        RBus_UInt32  write_data:1;
    };
}gpio_isr_gp_assert_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  int60_a:1;
        RBus_UInt32  int59_a:1;
        RBus_UInt32  int58_a:1;
        RBus_UInt32  int57_a:1;
        RBus_UInt32  int56_a:1;
        RBus_UInt32  int55_a:1;
        RBus_UInt32  int54_a:1;
        RBus_UInt32  int53_a:1;
        RBus_UInt32  int52_a:1;
        RBus_UInt32  int51_a:1;
        RBus_UInt32  int50_a:1;
        RBus_UInt32  int49_a:1;
        RBus_UInt32  int48_a:1;
        RBus_UInt32  int47_a:1;
        RBus_UInt32  int46_a:1;
        RBus_UInt32  int45_a:1;
        RBus_UInt32  int44_a:1;
        RBus_UInt32  int43_a:1;
        RBus_UInt32  int42_a:1;
        RBus_UInt32  int41_a:1;
        RBus_UInt32  int40_a:1;
        RBus_UInt32  int39_a:1;
        RBus_UInt32  int38_a:1;
        RBus_UInt32  int37_a:1;
        RBus_UInt32  int36_a:1;
        RBus_UInt32  int35_a:1;
        RBus_UInt32  int34_a:1;
        RBus_UInt32  int33_a:1;
        RBus_UInt32  int32_a:1;
        RBus_UInt32  int31_a:1;
        RBus_UInt32  write_data:1;
    };
}gpio_isr_gp_assert_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int30_da:1;
        RBus_UInt32  int29_da:1;
        RBus_UInt32  int28_da:1;
        RBus_UInt32  int27_da:1;
        RBus_UInt32  int26_da:1;
        RBus_UInt32  int25_da:1;
        RBus_UInt32  int24_da:1;
        RBus_UInt32  int23_da:1;
        RBus_UInt32  int22_da:1;
        RBus_UInt32  int21_da:1;
        RBus_UInt32  int20_da:1;
        RBus_UInt32  int19_da:1;
        RBus_UInt32  int18_da:1;
        RBus_UInt32  int17_da:1;
        RBus_UInt32  int16_da:1;
        RBus_UInt32  int15_da:1;
        RBus_UInt32  int14_da:1;
        RBus_UInt32  int13_da:1;
        RBus_UInt32  int12_da:1;
        RBus_UInt32  int11_da:1;
        RBus_UInt32  int10_da:1;
        RBus_UInt32  int9_da:1;
        RBus_UInt32  int8_da:1;
        RBus_UInt32  int7_da:1;
        RBus_UInt32  int6_da:1;
        RBus_UInt32  int5_da:1;
        RBus_UInt32  int4_da:1;
        RBus_UInt32  int3_da:1;
        RBus_UInt32  int2_da:1;
        RBus_UInt32  int1_da:1;
        RBus_UInt32  int0_da:1;
        RBus_UInt32  write_data:1;
    };
}gpio_isr_gp_deassert_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  int60_da:1;
        RBus_UInt32  int59_da:1;
        RBus_UInt32  int58_da:1;
        RBus_UInt32  int57_da:1;
        RBus_UInt32  int56_da:1;
        RBus_UInt32  int55_da:1;
        RBus_UInt32  int54_da:1;
        RBus_UInt32  int53_da:1;
        RBus_UInt32  int52_da:1;
        RBus_UInt32  int51_da:1;
        RBus_UInt32  int50_da:1;
        RBus_UInt32  int49_da:1;
        RBus_UInt32  int48_da:1;
        RBus_UInt32  int47_da:1;
        RBus_UInt32  int46_da:1;
        RBus_UInt32  int45_da:1;
        RBus_UInt32  int44_da:1;
        RBus_UInt32  int43_da:1;
        RBus_UInt32  int42_da:1;
        RBus_UInt32  int41_da:1;
        RBus_UInt32  int40_da:1;
        RBus_UInt32  int39_da:1;
        RBus_UInt32  int38_da:1;
        RBus_UInt32  int37_da:1;
        RBus_UInt32  int36_da:1;
        RBus_UInt32  int35_da:1;
        RBus_UInt32  int34_da:1;
        RBus_UInt32  int33_da:1;
        RBus_UInt32  int32_da:1;
        RBus_UInt32  int31_da:1;
        RBus_UInt32  write_data:1;
    };
}gpio_isr_gp_deassert_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  intsel:2;
    };
}gpio_gp_int_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  unmask30:1;
        RBus_UInt32  unmask29:1;
        RBus_UInt32  unmask28:1;
        RBus_UInt32  unmask27:1;
        RBus_UInt32  unmask26:1;
        RBus_UInt32  unmask25:1;
        RBus_UInt32  unmask24:1;
        RBus_UInt32  unmask23:1;
        RBus_UInt32  unmask22:1;
        RBus_UInt32  unmask21:1;
        RBus_UInt32  unmask20:1;
        RBus_UInt32  unmask19:1;
        RBus_UInt32  unmask18:1;
        RBus_UInt32  unmask17:1;
        RBus_UInt32  unmask16:1;
        RBus_UInt32  unmask15:1;
        RBus_UInt32  unmask14:1;
        RBus_UInt32  unmask13:1;
        RBus_UInt32  unmask12:1;
        RBus_UInt32  unmask11:1;
        RBus_UInt32  unmask10:1;
        RBus_UInt32  unmask9:1;
        RBus_UInt32  unmask8:1;
        RBus_UInt32  unmask7:1;
        RBus_UInt32  unmask6:1;
        RBus_UInt32  unmask5:1;
        RBus_UInt32  unmask4:1;
        RBus_UInt32  unmask3:1;
        RBus_UInt32  unmask2:1;
        RBus_UInt32  unmask1:1;
        RBus_UInt32  unmask0:1;
        RBus_UInt32  write_data:1;
    };
}gpio_gpint_emcu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  unmask60:1;
        RBus_UInt32  unmask59:1;
        RBus_UInt32  unmask58:1;
        RBus_UInt32  unmask57:1;
        RBus_UInt32  unmask56:1;
        RBus_UInt32  unmask55:1;
        RBus_UInt32  unmask54:1;
        RBus_UInt32  unmask53:1;
        RBus_UInt32  unmask52:1;
        RBus_UInt32  unmask51:1;
        RBus_UInt32  unmask50:1;
        RBus_UInt32  unmask49:1;
        RBus_UInt32  unmask48:1;
        RBus_UInt32  unmask47:1;
        RBus_UInt32  unmask46:1;
        RBus_UInt32  unmask45:1;
        RBus_UInt32  unmask44:1;
        RBus_UInt32  unmask43:1;
        RBus_UInt32  unmask42:1;
        RBus_UInt32  unmask41:1;
        RBus_UInt32  unmask40:1;
        RBus_UInt32  unmask39:1;
        RBus_UInt32  unmask38:1;
        RBus_UInt32  unmask37:1;
        RBus_UInt32  unmask36:1;
        RBus_UInt32  unmask35:1;
        RBus_UInt32  unmask34:1;
        RBus_UInt32  unmask33:1;
        RBus_UInt32  unmask32:1;
        RBus_UInt32  unmask31:1;
        RBus_UInt32  write_data:1;
    };
}gpio_gpint_emcu_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  unmask30:1;
        RBus_UInt32  unmask29:1;
        RBus_UInt32  unmask28:1;
        RBus_UInt32  unmask27:1;
        RBus_UInt32  unmask26:1;
        RBus_UInt32  unmask25:1;
        RBus_UInt32  unmask24:1;
        RBus_UInt32  unmask23:1;
        RBus_UInt32  unmask22:1;
        RBus_UInt32  unmask21:1;
        RBus_UInt32  unmask20:1;
        RBus_UInt32  unmask19:1;
        RBus_UInt32  unmask18:1;
        RBus_UInt32  unmask17:1;
        RBus_UInt32  unmask16:1;
        RBus_UInt32  unmask15:1;
        RBus_UInt32  unmask14:1;
        RBus_UInt32  unmask13:1;
        RBus_UInt32  unmask12:1;
        RBus_UInt32  unmask11:1;
        RBus_UInt32  unmask10:1;
        RBus_UInt32  unmask9:1;
        RBus_UInt32  unmask8:1;
        RBus_UInt32  unmask7:1;
        RBus_UInt32  unmask6:1;
        RBus_UInt32  unmask5:1;
        RBus_UInt32  unmask4:1;
        RBus_UInt32  unmask3:1;
        RBus_UInt32  unmask2:1;
        RBus_UInt32  unmask1:1;
        RBus_UInt32  unmask0:1;
        RBus_UInt32  write_data:1;
    };
}gpio_gpint_scpu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  unmask60:1;
        RBus_UInt32  unmask59:1;
        RBus_UInt32  unmask58:1;
        RBus_UInt32  unmask57:1;
        RBus_UInt32  unmask56:1;
        RBus_UInt32  unmask55:1;
        RBus_UInt32  unmask54:1;
        RBus_UInt32  unmask53:1;
        RBus_UInt32  unmask52:1;
        RBus_UInt32  unmask51:1;
        RBus_UInt32  unmask50:1;
        RBus_UInt32  unmask49:1;
        RBus_UInt32  unmask48:1;
        RBus_UInt32  unmask47:1;
        RBus_UInt32  unmask46:1;
        RBus_UInt32  unmask45:1;
        RBus_UInt32  unmask44:1;
        RBus_UInt32  unmask43:1;
        RBus_UInt32  unmask42:1;
        RBus_UInt32  unmask41:1;
        RBus_UInt32  unmask40:1;
        RBus_UInt32  unmask39:1;
        RBus_UInt32  unmask38:1;
        RBus_UInt32  unmask37:1;
        RBus_UInt32  unmask36:1;
        RBus_UInt32  unmask35:1;
        RBus_UInt32  unmask34:1;
        RBus_UInt32  unmask33:1;
        RBus_UInt32  unmask32:1;
        RBus_UInt32  unmask31:1;
        RBus_UInt32  write_data:1;
    };
}gpio_gpint_scpu_1_RBUS;

#else //apply LITTLE_ENDIAN

//======GPIO register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpdir0:1;
        RBus_UInt32  gpdir1:1;
        RBus_UInt32  gpdir2:1;
        RBus_UInt32  gpdir3:1;
        RBus_UInt32  gpdir4:1;
        RBus_UInt32  gpdir5:1;
        RBus_UInt32  gpdir6:1;
        RBus_UInt32  gpdir7:1;
        RBus_UInt32  gpdir8:1;
        RBus_UInt32  gpdir9:1;
        RBus_UInt32  gpdir10:1;
        RBus_UInt32  gpdir11:1;
        RBus_UInt32  gpdir12:1;
        RBus_UInt32  gpdir13:1;
        RBus_UInt32  gpdir14:1;
        RBus_UInt32  gpdir15:1;
        RBus_UInt32  gpdir16:1;
        RBus_UInt32  gpdir17:1;
        RBus_UInt32  gpdir18:1;
        RBus_UInt32  gpdir19:1;
        RBus_UInt32  gpdir20:1;
        RBus_UInt32  gpdir21:1;
        RBus_UInt32  gpdir22:1;
        RBus_UInt32  gpdir23:1;
        RBus_UInt32  gpdir24:1;
        RBus_UInt32  gpdir25:1;
        RBus_UInt32  gpdir26:1;
        RBus_UInt32  gpdir27:1;
        RBus_UInt32  gpdir28:1;
        RBus_UInt32  gpdir29:1;
        RBus_UInt32  gpdir30:1;
    };
}gpio_gpdir_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpdir31:1;
        RBus_UInt32  gpdir32:1;
        RBus_UInt32  gpdir33:1;
        RBus_UInt32  gpdir34:1;
        RBus_UInt32  gpdir35:1;
        RBus_UInt32  gpdir36:1;
        RBus_UInt32  gpdir37:1;
        RBus_UInt32  gpdir38:1;
        RBus_UInt32  gpdir39:1;
        RBus_UInt32  gpdir40:1;
        RBus_UInt32  gpdir41:1;
        RBus_UInt32  gpdir42:1;
        RBus_UInt32  gpdir43:1;
        RBus_UInt32  gpdir44:1;
        RBus_UInt32  gpdir45:1;
        RBus_UInt32  gpdir46:1;
        RBus_UInt32  gpdir47:1;
        RBus_UInt32  gpdir48:1;
        RBus_UInt32  gpdir49:1;
        RBus_UInt32  gpdir50:1;
        RBus_UInt32  gpdir51:1;
        RBus_UInt32  gpdir52:1;
        RBus_UInt32  gpdir53:1;
        RBus_UInt32  gpdir54:1;
        RBus_UInt32  gpdir55:1;
        RBus_UInt32  gpdir56:1;
        RBus_UInt32  gpdir57:1;
        RBus_UInt32  gpdir58:1;
        RBus_UInt32  gpdir59:1;
        RBus_UInt32  gpdir60:1;
        RBus_UInt32  res1:1;
    };
}gpio_gpdir_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpdato0:1;
        RBus_UInt32  gpdato1:1;
        RBus_UInt32  gpdato2:1;
        RBus_UInt32  gpdato3:1;
        RBus_UInt32  gpdato4:1;
        RBus_UInt32  gpdato5:1;
        RBus_UInt32  gpdato6:1;
        RBus_UInt32  gpdato7:1;
        RBus_UInt32  gpdato8:1;
        RBus_UInt32  gpdato9:1;
        RBus_UInt32  gpdato10:1;
        RBus_UInt32  gpdato11:1;
        RBus_UInt32  gpdato12:1;
        RBus_UInt32  gpdato13:1;
        RBus_UInt32  gpdato14:1;
        RBus_UInt32  gpdato15:1;
        RBus_UInt32  gpdato16:1;
        RBus_UInt32  gpdato17:1;
        RBus_UInt32  gpdato18:1;
        RBus_UInt32  gpdato19:1;
        RBus_UInt32  gpdato20:1;
        RBus_UInt32  gpdato21:1;
        RBus_UInt32  gpdato22:1;
        RBus_UInt32  gpdato23:1;
        RBus_UInt32  gpdato24:1;
        RBus_UInt32  gpdato25:1;
        RBus_UInt32  gpdato26:1;
        RBus_UInt32  gpdato27:1;
        RBus_UInt32  gpdato28:1;
        RBus_UInt32  gpdato29:1;
        RBus_UInt32  gpdato30:1;
    };
}gpio_gpdato_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpdato31:1;
        RBus_UInt32  gpdato32:1;
        RBus_UInt32  gpdato33:1;
        RBus_UInt32  gpdato34:1;
        RBus_UInt32  gpdato35:1;
        RBus_UInt32  gpdato36:1;
        RBus_UInt32  gpdato37:1;
        RBus_UInt32  gpdato38:1;
        RBus_UInt32  gpdato39:1;
        RBus_UInt32  gpdato40:1;
        RBus_UInt32  gpdato41:1;
        RBus_UInt32  gpdato42:1;
        RBus_UInt32  gpdato43:1;
        RBus_UInt32  gpdato44:1;
        RBus_UInt32  gpdato45:1;
        RBus_UInt32  gpdato46:1;
        RBus_UInt32  gpdato47:1;
        RBus_UInt32  gpdato48:1;
        RBus_UInt32  gpdato49:1;
        RBus_UInt32  gpdato50:1;
        RBus_UInt32  gpdato51:1;
        RBus_UInt32  gpdato52:1;
        RBus_UInt32  gpdato53:1;
        RBus_UInt32  gpdato54:1;
        RBus_UInt32  gpdato55:1;
        RBus_UInt32  gpdato56:1;
        RBus_UInt32  gpdato57:1;
        RBus_UInt32  gpdato58:1;
        RBus_UInt32  gpdato59:1;
        RBus_UInt32  gpdato60:1;
        RBus_UInt32  res1:1;
    };
}gpio_gpdato_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  gpdati:31;
    };
}gpio_gpdati_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  gpdati:30;
        RBus_UInt32  res2:1;
    };
}gpio_gpdati_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gp0:1;
        RBus_UInt32  gp1:1;
        RBus_UInt32  gp2:1;
        RBus_UInt32  gp3:1;
        RBus_UInt32  gp4:1;
        RBus_UInt32  gp5:1;
        RBus_UInt32  gp6:1;
        RBus_UInt32  gp7:1;
        RBus_UInt32  gp8:1;
        RBus_UInt32  gp9:1;
        RBus_UInt32  gp10:1;
        RBus_UInt32  gp11:1;
        RBus_UInt32  gp12:1;
        RBus_UInt32  gp13:1;
        RBus_UInt32  gp14:1;
        RBus_UInt32  gp15:1;
        RBus_UInt32  gp16:1;
        RBus_UInt32  gp17:1;
        RBus_UInt32  gp18:1;
        RBus_UInt32  gp19:1;
        RBus_UInt32  gp20:1;
        RBus_UInt32  gp21:1;
        RBus_UInt32  gp22:1;
        RBus_UInt32  gp23:1;
        RBus_UInt32  gp24:1;
        RBus_UInt32  gp25:1;
        RBus_UInt32  gp26:1;
        RBus_UInt32  gp27:1;
        RBus_UInt32  gp28:1;
        RBus_UInt32  gp29:1;
        RBus_UInt32  gp30:1;
    };
}gpio_gpie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gp31:1;
        RBus_UInt32  gp32:1;
        RBus_UInt32  gp33:1;
        RBus_UInt32  gp34:1;
        RBus_UInt32  gp35:1;
        RBus_UInt32  gp36:1;
        RBus_UInt32  gp37:1;
        RBus_UInt32  gp38:1;
        RBus_UInt32  gp39:1;
        RBus_UInt32  gp40:1;
        RBus_UInt32  gp41:1;
        RBus_UInt32  gp42:1;
        RBus_UInt32  gp43:1;
        RBus_UInt32  gp44:1;
        RBus_UInt32  gp45:1;
        RBus_UInt32  gp46:1;
        RBus_UInt32  gp47:1;
        RBus_UInt32  gp48:1;
        RBus_UInt32  gp49:1;
        RBus_UInt32  gp50:1;
        RBus_UInt32  gp51:1;
        RBus_UInt32  gp52:1;
        RBus_UInt32  gp53:1;
        RBus_UInt32  gp54:1;
        RBus_UInt32  gp55:1;
        RBus_UInt32  gp56:1;
        RBus_UInt32  gp57:1;
        RBus_UInt32  gp58:1;
        RBus_UInt32  gp59:1;
        RBus_UInt32  gp60:1;
        RBus_UInt32  res1:1;
    };
}gpio_gpie_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpha0:1;
        RBus_UInt32  gpha1:1;
        RBus_UInt32  gpha2:1;
        RBus_UInt32  gpha3:1;
        RBus_UInt32  gpha4:1;
        RBus_UInt32  gpha5:1;
        RBus_UInt32  gpha6:1;
        RBus_UInt32  gpha7:1;
        RBus_UInt32  gpha8:1;
        RBus_UInt32  gpha9:1;
        RBus_UInt32  gpha10:1;
        RBus_UInt32  gpha11:1;
        RBus_UInt32  gpha12:1;
        RBus_UInt32  gpha13:1;
        RBus_UInt32  gpha14:1;
        RBus_UInt32  gpha15:1;
        RBus_UInt32  gpha16:1;
        RBus_UInt32  gpha17:1;
        RBus_UInt32  gpha18:1;
        RBus_UInt32  gpha19:1;
        RBus_UInt32  gpha20:1;
        RBus_UInt32  gpha21:1;
        RBus_UInt32  gpha22:1;
        RBus_UInt32  gpha23:1;
        RBus_UInt32  gpha24:1;
        RBus_UInt32  gpha25:1;
        RBus_UInt32  gpha26:1;
        RBus_UInt32  gpha27:1;
        RBus_UInt32  gpha28:1;
        RBus_UInt32  gpha29:1;
        RBus_UInt32  gpha30:1;
    };
}gpio_gpdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpha31:1;
        RBus_UInt32  gpha32:1;
        RBus_UInt32  gpha33:1;
        RBus_UInt32  gpha34:1;
        RBus_UInt32  gpha35:1;
        RBus_UInt32  gpha36:1;
        RBus_UInt32  gpha37:1;
        RBus_UInt32  gpha38:1;
        RBus_UInt32  gpha39:1;
        RBus_UInt32  gpha40:1;
        RBus_UInt32  gpha41:1;
        RBus_UInt32  gpha42:1;
        RBus_UInt32  gpha43:1;
        RBus_UInt32  gpha44:1;
        RBus_UInt32  gpha45:1;
        RBus_UInt32  gpha46:1;
        RBus_UInt32  gpha47:1;
        RBus_UInt32  gpha48:1;
        RBus_UInt32  gpha49:1;
        RBus_UInt32  gpha50:1;
        RBus_UInt32  gpha51:1;
        RBus_UInt32  gpha52:1;
        RBus_UInt32  gpha53:1;
        RBus_UInt32  gpha54:1;
        RBus_UInt32  gpha55:1;
        RBus_UInt32  gpha56:1;
        RBus_UInt32  gpha57:1;
        RBus_UInt32  gpha58:1;
        RBus_UInt32  gpha59:1;
        RBus_UInt32  gpha60:1;
        RBus_UInt32  res1:1;
    };
}gpio_gpdp_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk1:3;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  clk2:3;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  clk3:3;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  clk4:3;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  res1:16;
    };
}gpio_gpdeb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int0_a:1;
        RBus_UInt32  int1_a:1;
        RBus_UInt32  int2_a:1;
        RBus_UInt32  int3_a:1;
        RBus_UInt32  int4_a:1;
        RBus_UInt32  int5_a:1;
        RBus_UInt32  int6_a:1;
        RBus_UInt32  int7_a:1;
        RBus_UInt32  int8_a:1;
        RBus_UInt32  int9_a:1;
        RBus_UInt32  int10_a:1;
        RBus_UInt32  int11_a:1;
        RBus_UInt32  int12_a:1;
        RBus_UInt32  int13_a:1;
        RBus_UInt32  int14_a:1;
        RBus_UInt32  int15_a:1;
        RBus_UInt32  int16_a:1;
        RBus_UInt32  int17_a:1;
        RBus_UInt32  int18_a:1;
        RBus_UInt32  int19_a:1;
        RBus_UInt32  int20_a:1;
        RBus_UInt32  int21_a:1;
        RBus_UInt32  int22_a:1;
        RBus_UInt32  int23_a:1;
        RBus_UInt32  int24_a:1;
        RBus_UInt32  int25_a:1;
        RBus_UInt32  int26_a:1;
        RBus_UInt32  int27_a:1;
        RBus_UInt32  int28_a:1;
        RBus_UInt32  int29_a:1;
        RBus_UInt32  int30_a:1;
    };
}gpio_isr_gp_assert_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int31_a:1;
        RBus_UInt32  int32_a:1;
        RBus_UInt32  int33_a:1;
        RBus_UInt32  int34_a:1;
        RBus_UInt32  int35_a:1;
        RBus_UInt32  int36_a:1;
        RBus_UInt32  int37_a:1;
        RBus_UInt32  int38_a:1;
        RBus_UInt32  int39_a:1;
        RBus_UInt32  int40_a:1;
        RBus_UInt32  int41_a:1;
        RBus_UInt32  int42_a:1;
        RBus_UInt32  int43_a:1;
        RBus_UInt32  int44_a:1;
        RBus_UInt32  int45_a:1;
        RBus_UInt32  int46_a:1;
        RBus_UInt32  int47_a:1;
        RBus_UInt32  int48_a:1;
        RBus_UInt32  int49_a:1;
        RBus_UInt32  int50_a:1;
        RBus_UInt32  int51_a:1;
        RBus_UInt32  int52_a:1;
        RBus_UInt32  int53_a:1;
        RBus_UInt32  int54_a:1;
        RBus_UInt32  int55_a:1;
        RBus_UInt32  int56_a:1;
        RBus_UInt32  int57_a:1;
        RBus_UInt32  int58_a:1;
        RBus_UInt32  int59_a:1;
        RBus_UInt32  int60_a:1;
        RBus_UInt32  res1:1;
    };
}gpio_isr_gp_assert_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int0_da:1;
        RBus_UInt32  int1_da:1;
        RBus_UInt32  int2_da:1;
        RBus_UInt32  int3_da:1;
        RBus_UInt32  int4_da:1;
        RBus_UInt32  int5_da:1;
        RBus_UInt32  int6_da:1;
        RBus_UInt32  int7_da:1;
        RBus_UInt32  int8_da:1;
        RBus_UInt32  int9_da:1;
        RBus_UInt32  int10_da:1;
        RBus_UInt32  int11_da:1;
        RBus_UInt32  int12_da:1;
        RBus_UInt32  int13_da:1;
        RBus_UInt32  int14_da:1;
        RBus_UInt32  int15_da:1;
        RBus_UInt32  int16_da:1;
        RBus_UInt32  int17_da:1;
        RBus_UInt32  int18_da:1;
        RBus_UInt32  int19_da:1;
        RBus_UInt32  int20_da:1;
        RBus_UInt32  int21_da:1;
        RBus_UInt32  int22_da:1;
        RBus_UInt32  int23_da:1;
        RBus_UInt32  int24_da:1;
        RBus_UInt32  int25_da:1;
        RBus_UInt32  int26_da:1;
        RBus_UInt32  int27_da:1;
        RBus_UInt32  int28_da:1;
        RBus_UInt32  int29_da:1;
        RBus_UInt32  int30_da:1;
    };
}gpio_isr_gp_deassert_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int31_da:1;
        RBus_UInt32  int32_da:1;
        RBus_UInt32  int33_da:1;
        RBus_UInt32  int34_da:1;
        RBus_UInt32  int35_da:1;
        RBus_UInt32  int36_da:1;
        RBus_UInt32  int37_da:1;
        RBus_UInt32  int38_da:1;
        RBus_UInt32  int39_da:1;
        RBus_UInt32  int40_da:1;
        RBus_UInt32  int41_da:1;
        RBus_UInt32  int42_da:1;
        RBus_UInt32  int43_da:1;
        RBus_UInt32  int44_da:1;
        RBus_UInt32  int45_da:1;
        RBus_UInt32  int46_da:1;
        RBus_UInt32  int47_da:1;
        RBus_UInt32  int48_da:1;
        RBus_UInt32  int49_da:1;
        RBus_UInt32  int50_da:1;
        RBus_UInt32  int51_da:1;
        RBus_UInt32  int52_da:1;
        RBus_UInt32  int53_da:1;
        RBus_UInt32  int54_da:1;
        RBus_UInt32  int55_da:1;
        RBus_UInt32  int56_da:1;
        RBus_UInt32  int57_da:1;
        RBus_UInt32  int58_da:1;
        RBus_UInt32  int59_da:1;
        RBus_UInt32  int60_da:1;
        RBus_UInt32  res1:1;
    };
}gpio_isr_gp_deassert_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  intsel:2;
        RBus_UInt32  res1:30;
    };
}gpio_gp_int_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  unmask0:1;
        RBus_UInt32  unmask1:1;
        RBus_UInt32  unmask2:1;
        RBus_UInt32  unmask3:1;
        RBus_UInt32  unmask4:1;
        RBus_UInt32  unmask5:1;
        RBus_UInt32  unmask6:1;
        RBus_UInt32  unmask7:1;
        RBus_UInt32  unmask8:1;
        RBus_UInt32  unmask9:1;
        RBus_UInt32  unmask10:1;
        RBus_UInt32  unmask11:1;
        RBus_UInt32  unmask12:1;
        RBus_UInt32  unmask13:1;
        RBus_UInt32  unmask14:1;
        RBus_UInt32  unmask15:1;
        RBus_UInt32  unmask16:1;
        RBus_UInt32  unmask17:1;
        RBus_UInt32  unmask18:1;
        RBus_UInt32  unmask19:1;
        RBus_UInt32  unmask20:1;
        RBus_UInt32  unmask21:1;
        RBus_UInt32  unmask22:1;
        RBus_UInt32  unmask23:1;
        RBus_UInt32  unmask24:1;
        RBus_UInt32  unmask25:1;
        RBus_UInt32  unmask26:1;
        RBus_UInt32  unmask27:1;
        RBus_UInt32  unmask28:1;
        RBus_UInt32  unmask29:1;
        RBus_UInt32  unmask30:1;
    };
}gpio_gpint_emcu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  unmask31:1;
        RBus_UInt32  unmask32:1;
        RBus_UInt32  unmask33:1;
        RBus_UInt32  unmask34:1;
        RBus_UInt32  unmask35:1;
        RBus_UInt32  unmask36:1;
        RBus_UInt32  unmask37:1;
        RBus_UInt32  unmask38:1;
        RBus_UInt32  unmask39:1;
        RBus_UInt32  unmask40:1;
        RBus_UInt32  unmask41:1;
        RBus_UInt32  unmask42:1;
        RBus_UInt32  unmask43:1;
        RBus_UInt32  unmask44:1;
        RBus_UInt32  unmask45:1;
        RBus_UInt32  unmask46:1;
        RBus_UInt32  unmask47:1;
        RBus_UInt32  unmask48:1;
        RBus_UInt32  unmask49:1;
        RBus_UInt32  unmask50:1;
        RBus_UInt32  unmask51:1;
        RBus_UInt32  unmask52:1;
        RBus_UInt32  unmask53:1;
        RBus_UInt32  unmask54:1;
        RBus_UInt32  unmask55:1;
        RBus_UInt32  unmask56:1;
        RBus_UInt32  unmask57:1;
        RBus_UInt32  unmask58:1;
        RBus_UInt32  unmask59:1;
        RBus_UInt32  unmask60:1;
        RBus_UInt32  res1:1;
    };
}gpio_gpint_emcu_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  unmask0:1;
        RBus_UInt32  unmask1:1;
        RBus_UInt32  unmask2:1;
        RBus_UInt32  unmask3:1;
        RBus_UInt32  unmask4:1;
        RBus_UInt32  unmask5:1;
        RBus_UInt32  unmask6:1;
        RBus_UInt32  unmask7:1;
        RBus_UInt32  unmask8:1;
        RBus_UInt32  unmask9:1;
        RBus_UInt32  unmask10:1;
        RBus_UInt32  unmask11:1;
        RBus_UInt32  unmask12:1;
        RBus_UInt32  unmask13:1;
        RBus_UInt32  unmask14:1;
        RBus_UInt32  unmask15:1;
        RBus_UInt32  unmask16:1;
        RBus_UInt32  unmask17:1;
        RBus_UInt32  unmask18:1;
        RBus_UInt32  unmask19:1;
        RBus_UInt32  unmask20:1;
        RBus_UInt32  unmask21:1;
        RBus_UInt32  unmask22:1;
        RBus_UInt32  unmask23:1;
        RBus_UInt32  unmask24:1;
        RBus_UInt32  unmask25:1;
        RBus_UInt32  unmask26:1;
        RBus_UInt32  unmask27:1;
        RBus_UInt32  unmask28:1;
        RBus_UInt32  unmask29:1;
        RBus_UInt32  unmask30:1;
    };
}gpio_gpint_scpu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  unmask31:1;
        RBus_UInt32  unmask32:1;
        RBus_UInt32  unmask33:1;
        RBus_UInt32  unmask34:1;
        RBus_UInt32  unmask35:1;
        RBus_UInt32  unmask36:1;
        RBus_UInt32  unmask37:1;
        RBus_UInt32  unmask38:1;
        RBus_UInt32  unmask39:1;
        RBus_UInt32  unmask40:1;
        RBus_UInt32  unmask41:1;
        RBus_UInt32  unmask42:1;
        RBus_UInt32  unmask43:1;
        RBus_UInt32  unmask44:1;
        RBus_UInt32  unmask45:1;
        RBus_UInt32  unmask46:1;
        RBus_UInt32  unmask47:1;
        RBus_UInt32  unmask48:1;
        RBus_UInt32  unmask49:1;
        RBus_UInt32  unmask50:1;
        RBus_UInt32  unmask51:1;
        RBus_UInt32  unmask52:1;
        RBus_UInt32  unmask53:1;
        RBus_UInt32  unmask54:1;
        RBus_UInt32  unmask55:1;
        RBus_UInt32  unmask56:1;
        RBus_UInt32  unmask57:1;
        RBus_UInt32  unmask58:1;
        RBus_UInt32  unmask59:1;
        RBus_UInt32  unmask60:1;
        RBus_UInt32  res1:1;
    };
}gpio_gpint_scpu_1_RBUS;




#endif 


#endif 
