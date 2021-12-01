/**
* @file Merlin5-DesignSpec-MISC_GPIO
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_MIS_GPIO_REG_H_
#define _RBUS_MIS_GPIO_REG_H_

#include "rbus_types.h"



//  MIS_GPIO Register Address
#define  MIS_GPIO_GP0DIR                                                        0x1801BD00
#define  MIS_GPIO_GP0DIR_reg_addr                                                "0xB801BD00"
#define  MIS_GPIO_GP0DIR_reg                                                     0xB801BD00
#define  MIS_GPIO_GP0DIR_inst_addr                                               "0x0000"
#define  set_MIS_GPIO_GP0DIR_reg(data)                                           (*((volatile unsigned int*)MIS_GPIO_GP0DIR_reg)=data)
#define  get_MIS_GPIO_GP0DIR_reg                                                 (*((volatile unsigned int*)MIS_GPIO_GP0DIR_reg))
#define  MIS_GPIO_GP0DIR_gpdir30_shift                                           (31)
#define  MIS_GPIO_GP0DIR_gpdir29_shift                                           (30)
#define  MIS_GPIO_GP0DIR_gpdir28_shift                                           (29)
#define  MIS_GPIO_GP0DIR_gpdir27_shift                                           (28)
#define  MIS_GPIO_GP0DIR_gpdir26_shift                                           (27)
#define  MIS_GPIO_GP0DIR_gpdir25_shift                                           (26)
#define  MIS_GPIO_GP0DIR_gpdir24_shift                                           (25)
#define  MIS_GPIO_GP0DIR_gpdir23_shift                                           (24)
#define  MIS_GPIO_GP0DIR_gpdir22_shift                                           (23)
#define  MIS_GPIO_GP0DIR_gpdir21_shift                                           (22)
#define  MIS_GPIO_GP0DIR_gpdir20_shift                                           (21)
#define  MIS_GPIO_GP0DIR_gpdir19_shift                                           (20)
#define  MIS_GPIO_GP0DIR_gpdir18_shift                                           (19)
#define  MIS_GPIO_GP0DIR_gpdir17_shift                                           (18)
#define  MIS_GPIO_GP0DIR_gpdir16_shift                                           (17)
#define  MIS_GPIO_GP0DIR_gpdir15_shift                                           (16)
#define  MIS_GPIO_GP0DIR_gpdir14_shift                                           (15)
#define  MIS_GPIO_GP0DIR_gpdir13_shift                                           (14)
#define  MIS_GPIO_GP0DIR_gpdir12_shift                                           (13)
#define  MIS_GPIO_GP0DIR_gpdir11_shift                                           (12)
#define  MIS_GPIO_GP0DIR_gpdir10_shift                                           (11)
#define  MIS_GPIO_GP0DIR_gpdir9_shift                                            (10)
#define  MIS_GPIO_GP0DIR_gpdir8_shift                                            (9)
#define  MIS_GPIO_GP0DIR_gpdir7_shift                                            (8)
#define  MIS_GPIO_GP0DIR_gpdir6_shift                                            (7)
#define  MIS_GPIO_GP0DIR_gpdir5_shift                                            (6)
#define  MIS_GPIO_GP0DIR_gpdir4_shift                                            (5)
#define  MIS_GPIO_GP0DIR_gpdir3_shift                                            (4)
#define  MIS_GPIO_GP0DIR_gpdir2_shift                                            (3)
#define  MIS_GPIO_GP0DIR_gpdir1_shift                                            (2)
#define  MIS_GPIO_GP0DIR_gpdir0_shift                                            (1)
#define  MIS_GPIO_GP0DIR_write_data_shift                                        (0)
#define  MIS_GPIO_GP0DIR_gpdir30_mask                                            (0x80000000)
#define  MIS_GPIO_GP0DIR_gpdir29_mask                                            (0x40000000)
#define  MIS_GPIO_GP0DIR_gpdir28_mask                                            (0x20000000)
#define  MIS_GPIO_GP0DIR_gpdir27_mask                                            (0x10000000)
#define  MIS_GPIO_GP0DIR_gpdir26_mask                                            (0x08000000)
#define  MIS_GPIO_GP0DIR_gpdir25_mask                                            (0x04000000)
#define  MIS_GPIO_GP0DIR_gpdir24_mask                                            (0x02000000)
#define  MIS_GPIO_GP0DIR_gpdir23_mask                                            (0x01000000)
#define  MIS_GPIO_GP0DIR_gpdir22_mask                                            (0x00800000)
#define  MIS_GPIO_GP0DIR_gpdir21_mask                                            (0x00400000)
#define  MIS_GPIO_GP0DIR_gpdir20_mask                                            (0x00200000)
#define  MIS_GPIO_GP0DIR_gpdir19_mask                                            (0x00100000)
#define  MIS_GPIO_GP0DIR_gpdir18_mask                                            (0x00080000)
#define  MIS_GPIO_GP0DIR_gpdir17_mask                                            (0x00040000)
#define  MIS_GPIO_GP0DIR_gpdir16_mask                                            (0x00020000)
#define  MIS_GPIO_GP0DIR_gpdir15_mask                                            (0x00010000)
#define  MIS_GPIO_GP0DIR_gpdir14_mask                                            (0x00008000)
#define  MIS_GPIO_GP0DIR_gpdir13_mask                                            (0x00004000)
#define  MIS_GPIO_GP0DIR_gpdir12_mask                                            (0x00002000)
#define  MIS_GPIO_GP0DIR_gpdir11_mask                                            (0x00001000)
#define  MIS_GPIO_GP0DIR_gpdir10_mask                                            (0x00000800)
#define  MIS_GPIO_GP0DIR_gpdir9_mask                                             (0x00000400)
#define  MIS_GPIO_GP0DIR_gpdir8_mask                                             (0x00000200)
#define  MIS_GPIO_GP0DIR_gpdir7_mask                                             (0x00000100)
#define  MIS_GPIO_GP0DIR_gpdir6_mask                                             (0x00000080)
#define  MIS_GPIO_GP0DIR_gpdir5_mask                                             (0x00000040)
#define  MIS_GPIO_GP0DIR_gpdir4_mask                                             (0x00000020)
#define  MIS_GPIO_GP0DIR_gpdir3_mask                                             (0x00000010)
#define  MIS_GPIO_GP0DIR_gpdir2_mask                                             (0x00000008)
#define  MIS_GPIO_GP0DIR_gpdir1_mask                                             (0x00000004)
#define  MIS_GPIO_GP0DIR_gpdir0_mask                                             (0x00000002)
#define  MIS_GPIO_GP0DIR_write_data_mask                                         (0x00000001)
#define  MIS_GPIO_GP0DIR_gpdir30(data)                                           (0x80000000&((data)<<31))
#define  MIS_GPIO_GP0DIR_gpdir29(data)                                           (0x40000000&((data)<<30))
#define  MIS_GPIO_GP0DIR_gpdir28(data)                                           (0x20000000&((data)<<29))
#define  MIS_GPIO_GP0DIR_gpdir27(data)                                           (0x10000000&((data)<<28))
#define  MIS_GPIO_GP0DIR_gpdir26(data)                                           (0x08000000&((data)<<27))
#define  MIS_GPIO_GP0DIR_gpdir25(data)                                           (0x04000000&((data)<<26))
#define  MIS_GPIO_GP0DIR_gpdir24(data)                                           (0x02000000&((data)<<25))
#define  MIS_GPIO_GP0DIR_gpdir23(data)                                           (0x01000000&((data)<<24))
#define  MIS_GPIO_GP0DIR_gpdir22(data)                                           (0x00800000&((data)<<23))
#define  MIS_GPIO_GP0DIR_gpdir21(data)                                           (0x00400000&((data)<<22))
#define  MIS_GPIO_GP0DIR_gpdir20(data)                                           (0x00200000&((data)<<21))
#define  MIS_GPIO_GP0DIR_gpdir19(data)                                           (0x00100000&((data)<<20))
#define  MIS_GPIO_GP0DIR_gpdir18(data)                                           (0x00080000&((data)<<19))
#define  MIS_GPIO_GP0DIR_gpdir17(data)                                           (0x00040000&((data)<<18))
#define  MIS_GPIO_GP0DIR_gpdir16(data)                                           (0x00020000&((data)<<17))
#define  MIS_GPIO_GP0DIR_gpdir15(data)                                           (0x00010000&((data)<<16))
#define  MIS_GPIO_GP0DIR_gpdir14(data)                                           (0x00008000&((data)<<15))
#define  MIS_GPIO_GP0DIR_gpdir13(data)                                           (0x00004000&((data)<<14))
#define  MIS_GPIO_GP0DIR_gpdir12(data)                                           (0x00002000&((data)<<13))
#define  MIS_GPIO_GP0DIR_gpdir11(data)                                           (0x00001000&((data)<<12))
#define  MIS_GPIO_GP0DIR_gpdir10(data)                                           (0x00000800&((data)<<11))
#define  MIS_GPIO_GP0DIR_gpdir9(data)                                            (0x00000400&((data)<<10))
#define  MIS_GPIO_GP0DIR_gpdir8(data)                                            (0x00000200&((data)<<9))
#define  MIS_GPIO_GP0DIR_gpdir7(data)                                            (0x00000100&((data)<<8))
#define  MIS_GPIO_GP0DIR_gpdir6(data)                                            (0x00000080&((data)<<7))
#define  MIS_GPIO_GP0DIR_gpdir5(data)                                            (0x00000040&((data)<<6))
#define  MIS_GPIO_GP0DIR_gpdir4(data)                                            (0x00000020&((data)<<5))
#define  MIS_GPIO_GP0DIR_gpdir3(data)                                            (0x00000010&((data)<<4))
#define  MIS_GPIO_GP0DIR_gpdir2(data)                                            (0x00000008&((data)<<3))
#define  MIS_GPIO_GP0DIR_gpdir1(data)                                            (0x00000004&((data)<<2))
#define  MIS_GPIO_GP0DIR_gpdir0(data)                                            (0x00000002&((data)<<1))
#define  MIS_GPIO_GP0DIR_write_data(data)                                        (0x00000001&(data))
#define  MIS_GPIO_GP0DIR_get_gpdir30(data)                                       ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP0DIR_get_gpdir29(data)                                       ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP0DIR_get_gpdir28(data)                                       ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP0DIR_get_gpdir27(data)                                       ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP0DIR_get_gpdir26(data)                                       ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP0DIR_get_gpdir25(data)                                       ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP0DIR_get_gpdir24(data)                                       ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP0DIR_get_gpdir23(data)                                       ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP0DIR_get_gpdir22(data)                                       ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP0DIR_get_gpdir21(data)                                       ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP0DIR_get_gpdir20(data)                                       ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP0DIR_get_gpdir19(data)                                       ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP0DIR_get_gpdir18(data)                                       ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP0DIR_get_gpdir17(data)                                       ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP0DIR_get_gpdir16(data)                                       ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP0DIR_get_gpdir15(data)                                       ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP0DIR_get_gpdir14(data)                                       ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP0DIR_get_gpdir13(data)                                       ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP0DIR_get_gpdir12(data)                                       ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP0DIR_get_gpdir11(data)                                       ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP0DIR_get_gpdir10(data)                                       ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP0DIR_get_gpdir9(data)                                        ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP0DIR_get_gpdir8(data)                                        ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP0DIR_get_gpdir7(data)                                        ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP0DIR_get_gpdir6(data)                                        ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP0DIR_get_gpdir5(data)                                        ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP0DIR_get_gpdir4(data)                                        ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP0DIR_get_gpdir3(data)                                        ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP0DIR_get_gpdir2(data)                                        ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP0DIR_get_gpdir1(data)                                        ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP0DIR_get_gpdir0(data)                                        ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP0DIR_get_write_data(data)                                    (0x00000001&(data))

#define  MIS_GPIO_GP1DIR                                                        0x1801BD04
#define  MIS_GPIO_GP1DIR_reg_addr                                                "0xB801BD04"
#define  MIS_GPIO_GP1DIR_reg                                                     0xB801BD04
#define  MIS_GPIO_GP1DIR_inst_addr                                               "0x0001"
#define  set_MIS_GPIO_GP1DIR_reg(data)                                           (*((volatile unsigned int*)MIS_GPIO_GP1DIR_reg)=data)
#define  get_MIS_GPIO_GP1DIR_reg                                                 (*((volatile unsigned int*)MIS_GPIO_GP1DIR_reg))
#define  MIS_GPIO_GP1DIR_gpdir61_shift                                           (31)
#define  MIS_GPIO_GP1DIR_gpdir60_shift                                           (30)
#define  MIS_GPIO_GP1DIR_gpdir59_shift                                           (29)
#define  MIS_GPIO_GP1DIR_gpdir58_shift                                           (28)
#define  MIS_GPIO_GP1DIR_gpdir57_shift                                           (27)
#define  MIS_GPIO_GP1DIR_gpdir56_shift                                           (26)
#define  MIS_GPIO_GP1DIR_gpdir55_shift                                           (25)
#define  MIS_GPIO_GP1DIR_gpdir54_shift                                           (24)
#define  MIS_GPIO_GP1DIR_gpdir53_shift                                           (23)
#define  MIS_GPIO_GP1DIR_gpdir52_shift                                           (22)
#define  MIS_GPIO_GP1DIR_gpdir51_shift                                           (21)
#define  MIS_GPIO_GP1DIR_gpdir50_shift                                           (20)
#define  MIS_GPIO_GP1DIR_gpdir49_shift                                           (19)
#define  MIS_GPIO_GP1DIR_gpdir48_shift                                           (18)
#define  MIS_GPIO_GP1DIR_gpdir47_shift                                           (17)
#define  MIS_GPIO_GP1DIR_gpdir46_shift                                           (16)
#define  MIS_GPIO_GP1DIR_gpdir45_shift                                           (15)
#define  MIS_GPIO_GP1DIR_gpdir44_shift                                           (14)
#define  MIS_GPIO_GP1DIR_gpdir43_shift                                           (13)
#define  MIS_GPIO_GP1DIR_gpdir42_shift                                           (12)
#define  MIS_GPIO_GP1DIR_gpdir41_shift                                           (11)
#define  MIS_GPIO_GP1DIR_gpdir40_shift                                           (10)
#define  MIS_GPIO_GP1DIR_gpdir39_shift                                           (9)
#define  MIS_GPIO_GP1DIR_gpdir38_shift                                           (8)
#define  MIS_GPIO_GP1DIR_gpdir37_shift                                           (7)
#define  MIS_GPIO_GP1DIR_gpdir36_shift                                           (6)
#define  MIS_GPIO_GP1DIR_gpdir35_shift                                           (5)
#define  MIS_GPIO_GP1DIR_gpdir34_shift                                           (4)
#define  MIS_GPIO_GP1DIR_gpdir33_shift                                           (3)
#define  MIS_GPIO_GP1DIR_gpdir32_shift                                           (2)
#define  MIS_GPIO_GP1DIR_gpdir31_shift                                           (1)
#define  MIS_GPIO_GP1DIR_write_data_shift                                        (0)
#define  MIS_GPIO_GP1DIR_gpdir61_mask                                            (0x80000000)
#define  MIS_GPIO_GP1DIR_gpdir60_mask                                            (0x40000000)
#define  MIS_GPIO_GP1DIR_gpdir59_mask                                            (0x20000000)
#define  MIS_GPIO_GP1DIR_gpdir58_mask                                            (0x10000000)
#define  MIS_GPIO_GP1DIR_gpdir57_mask                                            (0x08000000)
#define  MIS_GPIO_GP1DIR_gpdir56_mask                                            (0x04000000)
#define  MIS_GPIO_GP1DIR_gpdir55_mask                                            (0x02000000)
#define  MIS_GPIO_GP1DIR_gpdir54_mask                                            (0x01000000)
#define  MIS_GPIO_GP1DIR_gpdir53_mask                                            (0x00800000)
#define  MIS_GPIO_GP1DIR_gpdir52_mask                                            (0x00400000)
#define  MIS_GPIO_GP1DIR_gpdir51_mask                                            (0x00200000)
#define  MIS_GPIO_GP1DIR_gpdir50_mask                                            (0x00100000)
#define  MIS_GPIO_GP1DIR_gpdir49_mask                                            (0x00080000)
#define  MIS_GPIO_GP1DIR_gpdir48_mask                                            (0x00040000)
#define  MIS_GPIO_GP1DIR_gpdir47_mask                                            (0x00020000)
#define  MIS_GPIO_GP1DIR_gpdir46_mask                                            (0x00010000)
#define  MIS_GPIO_GP1DIR_gpdir45_mask                                            (0x00008000)
#define  MIS_GPIO_GP1DIR_gpdir44_mask                                            (0x00004000)
#define  MIS_GPIO_GP1DIR_gpdir43_mask                                            (0x00002000)
#define  MIS_GPIO_GP1DIR_gpdir42_mask                                            (0x00001000)
#define  MIS_GPIO_GP1DIR_gpdir41_mask                                            (0x00000800)
#define  MIS_GPIO_GP1DIR_gpdir40_mask                                            (0x00000400)
#define  MIS_GPIO_GP1DIR_gpdir39_mask                                            (0x00000200)
#define  MIS_GPIO_GP1DIR_gpdir38_mask                                            (0x00000100)
#define  MIS_GPIO_GP1DIR_gpdir37_mask                                            (0x00000080)
#define  MIS_GPIO_GP1DIR_gpdir36_mask                                            (0x00000040)
#define  MIS_GPIO_GP1DIR_gpdir35_mask                                            (0x00000020)
#define  MIS_GPIO_GP1DIR_gpdir34_mask                                            (0x00000010)
#define  MIS_GPIO_GP1DIR_gpdir33_mask                                            (0x00000008)
#define  MIS_GPIO_GP1DIR_gpdir32_mask                                            (0x00000004)
#define  MIS_GPIO_GP1DIR_gpdir31_mask                                            (0x00000002)
#define  MIS_GPIO_GP1DIR_write_data_mask                                         (0x00000001)
#define  MIS_GPIO_GP1DIR_gpdir61(data)                                           (0x80000000&((data)<<31))
#define  MIS_GPIO_GP1DIR_gpdir60(data)                                           (0x40000000&((data)<<30))
#define  MIS_GPIO_GP1DIR_gpdir59(data)                                           (0x20000000&((data)<<29))
#define  MIS_GPIO_GP1DIR_gpdir58(data)                                           (0x10000000&((data)<<28))
#define  MIS_GPIO_GP1DIR_gpdir57(data)                                           (0x08000000&((data)<<27))
#define  MIS_GPIO_GP1DIR_gpdir56(data)                                           (0x04000000&((data)<<26))
#define  MIS_GPIO_GP1DIR_gpdir55(data)                                           (0x02000000&((data)<<25))
#define  MIS_GPIO_GP1DIR_gpdir54(data)                                           (0x01000000&((data)<<24))
#define  MIS_GPIO_GP1DIR_gpdir53(data)                                           (0x00800000&((data)<<23))
#define  MIS_GPIO_GP1DIR_gpdir52(data)                                           (0x00400000&((data)<<22))
#define  MIS_GPIO_GP1DIR_gpdir51(data)                                           (0x00200000&((data)<<21))
#define  MIS_GPIO_GP1DIR_gpdir50(data)                                           (0x00100000&((data)<<20))
#define  MIS_GPIO_GP1DIR_gpdir49(data)                                           (0x00080000&((data)<<19))
#define  MIS_GPIO_GP1DIR_gpdir48(data)                                           (0x00040000&((data)<<18))
#define  MIS_GPIO_GP1DIR_gpdir47(data)                                           (0x00020000&((data)<<17))
#define  MIS_GPIO_GP1DIR_gpdir46(data)                                           (0x00010000&((data)<<16))
#define  MIS_GPIO_GP1DIR_gpdir45(data)                                           (0x00008000&((data)<<15))
#define  MIS_GPIO_GP1DIR_gpdir44(data)                                           (0x00004000&((data)<<14))
#define  MIS_GPIO_GP1DIR_gpdir43(data)                                           (0x00002000&((data)<<13))
#define  MIS_GPIO_GP1DIR_gpdir42(data)                                           (0x00001000&((data)<<12))
#define  MIS_GPIO_GP1DIR_gpdir41(data)                                           (0x00000800&((data)<<11))
#define  MIS_GPIO_GP1DIR_gpdir40(data)                                           (0x00000400&((data)<<10))
#define  MIS_GPIO_GP1DIR_gpdir39(data)                                           (0x00000200&((data)<<9))
#define  MIS_GPIO_GP1DIR_gpdir38(data)                                           (0x00000100&((data)<<8))
#define  MIS_GPIO_GP1DIR_gpdir37(data)                                           (0x00000080&((data)<<7))
#define  MIS_GPIO_GP1DIR_gpdir36(data)                                           (0x00000040&((data)<<6))
#define  MIS_GPIO_GP1DIR_gpdir35(data)                                           (0x00000020&((data)<<5))
#define  MIS_GPIO_GP1DIR_gpdir34(data)                                           (0x00000010&((data)<<4))
#define  MIS_GPIO_GP1DIR_gpdir33(data)                                           (0x00000008&((data)<<3))
#define  MIS_GPIO_GP1DIR_gpdir32(data)                                           (0x00000004&((data)<<2))
#define  MIS_GPIO_GP1DIR_gpdir31(data)                                           (0x00000002&((data)<<1))
#define  MIS_GPIO_GP1DIR_write_data(data)                                        (0x00000001&(data))
#define  MIS_GPIO_GP1DIR_get_gpdir61(data)                                       ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP1DIR_get_gpdir60(data)                                       ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP1DIR_get_gpdir59(data)                                       ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP1DIR_get_gpdir58(data)                                       ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP1DIR_get_gpdir57(data)                                       ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP1DIR_get_gpdir56(data)                                       ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP1DIR_get_gpdir55(data)                                       ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP1DIR_get_gpdir54(data)                                       ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP1DIR_get_gpdir53(data)                                       ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP1DIR_get_gpdir52(data)                                       ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP1DIR_get_gpdir51(data)                                       ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP1DIR_get_gpdir50(data)                                       ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP1DIR_get_gpdir49(data)                                       ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP1DIR_get_gpdir48(data)                                       ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP1DIR_get_gpdir47(data)                                       ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP1DIR_get_gpdir46(data)                                       ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP1DIR_get_gpdir45(data)                                       ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP1DIR_get_gpdir44(data)                                       ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP1DIR_get_gpdir43(data)                                       ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP1DIR_get_gpdir42(data)                                       ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP1DIR_get_gpdir41(data)                                       ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP1DIR_get_gpdir40(data)                                       ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP1DIR_get_gpdir39(data)                                       ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP1DIR_get_gpdir38(data)                                       ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP1DIR_get_gpdir37(data)                                       ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP1DIR_get_gpdir36(data)                                       ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP1DIR_get_gpdir35(data)                                       ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP1DIR_get_gpdir34(data)                                       ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP1DIR_get_gpdir33(data)                                       ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP1DIR_get_gpdir32(data)                                       ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP1DIR_get_gpdir31(data)                                       ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP1DIR_get_write_data(data)                                    (0x00000001&(data))

#define  MIS_GPIO_GP2DIR                                                        0x1801BD08
#define  MIS_GPIO_GP2DIR_reg_addr                                                "0xB801BD08"
#define  MIS_GPIO_GP2DIR_reg                                                     0xB801BD08
#define  MIS_GPIO_GP2DIR_inst_addr                                               "0x0002"
#define  set_MIS_GPIO_GP2DIR_reg(data)                                           (*((volatile unsigned int*)MIS_GPIO_GP2DIR_reg)=data)
#define  get_MIS_GPIO_GP2DIR_reg                                                 (*((volatile unsigned int*)MIS_GPIO_GP2DIR_reg))
#define  MIS_GPIO_GP2DIR_gpdir92_shift                                           (31)
#define  MIS_GPIO_GP2DIR_gpdir91_shift                                           (30)
#define  MIS_GPIO_GP2DIR_gpdir90_shift                                           (29)
#define  MIS_GPIO_GP2DIR_gpdir89_shift                                           (28)
#define  MIS_GPIO_GP2DIR_gpdir88_shift                                           (27)
#define  MIS_GPIO_GP2DIR_gpdir87_shift                                           (26)
#define  MIS_GPIO_GP2DIR_gpdir86_shift                                           (25)
#define  MIS_GPIO_GP2DIR_gpdir85_shift                                           (24)
#define  MIS_GPIO_GP2DIR_gpdir84_shift                                           (23)
#define  MIS_GPIO_GP2DIR_gpdir83_shift                                           (22)
#define  MIS_GPIO_GP2DIR_gpdir82_shift                                           (21)
#define  MIS_GPIO_GP2DIR_gpdir81_shift                                           (20)
#define  MIS_GPIO_GP2DIR_gpdir80_shift                                           (19)
#define  MIS_GPIO_GP2DIR_gpdir79_shift                                           (18)
#define  MIS_GPIO_GP2DIR_gpdir78_shift                                           (17)
#define  MIS_GPIO_GP2DIR_gpdir77_shift                                           (16)
#define  MIS_GPIO_GP2DIR_gpdir76_shift                                           (15)
#define  MIS_GPIO_GP2DIR_gpdir75_shift                                           (14)
#define  MIS_GPIO_GP2DIR_gpdir74_shift                                           (13)
#define  MIS_GPIO_GP2DIR_gpdir73_shift                                           (12)
#define  MIS_GPIO_GP2DIR_gpdir72_shift                                           (11)
#define  MIS_GPIO_GP2DIR_gpdir71_shift                                           (10)
#define  MIS_GPIO_GP2DIR_gpdir70_shift                                           (9)
#define  MIS_GPIO_GP2DIR_gpdir69_shift                                           (8)
#define  MIS_GPIO_GP2DIR_gpdir68_shift                                           (7)
#define  MIS_GPIO_GP2DIR_gpdir67_shift                                           (6)
#define  MIS_GPIO_GP2DIR_gpdir66_shift                                           (5)
#define  MIS_GPIO_GP2DIR_gpdir65_shift                                           (4)
#define  MIS_GPIO_GP2DIR_gpdir64_shift                                           (3)
#define  MIS_GPIO_GP2DIR_gpdir63_shift                                           (2)
#define  MIS_GPIO_GP2DIR_gpdir62_shift                                           (1)
#define  MIS_GPIO_GP2DIR_write_data_shift                                        (0)
#define  MIS_GPIO_GP2DIR_gpdir92_mask                                            (0x80000000)
#define  MIS_GPIO_GP2DIR_gpdir91_mask                                            (0x40000000)
#define  MIS_GPIO_GP2DIR_gpdir90_mask                                            (0x20000000)
#define  MIS_GPIO_GP2DIR_gpdir89_mask                                            (0x10000000)
#define  MIS_GPIO_GP2DIR_gpdir88_mask                                            (0x08000000)
#define  MIS_GPIO_GP2DIR_gpdir87_mask                                            (0x04000000)
#define  MIS_GPIO_GP2DIR_gpdir86_mask                                            (0x02000000)
#define  MIS_GPIO_GP2DIR_gpdir85_mask                                            (0x01000000)
#define  MIS_GPIO_GP2DIR_gpdir84_mask                                            (0x00800000)
#define  MIS_GPIO_GP2DIR_gpdir83_mask                                            (0x00400000)
#define  MIS_GPIO_GP2DIR_gpdir82_mask                                            (0x00200000)
#define  MIS_GPIO_GP2DIR_gpdir81_mask                                            (0x00100000)
#define  MIS_GPIO_GP2DIR_gpdir80_mask                                            (0x00080000)
#define  MIS_GPIO_GP2DIR_gpdir79_mask                                            (0x00040000)
#define  MIS_GPIO_GP2DIR_gpdir78_mask                                            (0x00020000)
#define  MIS_GPIO_GP2DIR_gpdir77_mask                                            (0x00010000)
#define  MIS_GPIO_GP2DIR_gpdir76_mask                                            (0x00008000)
#define  MIS_GPIO_GP2DIR_gpdir75_mask                                            (0x00004000)
#define  MIS_GPIO_GP2DIR_gpdir74_mask                                            (0x00002000)
#define  MIS_GPIO_GP2DIR_gpdir73_mask                                            (0x00001000)
#define  MIS_GPIO_GP2DIR_gpdir72_mask                                            (0x00000800)
#define  MIS_GPIO_GP2DIR_gpdir71_mask                                            (0x00000400)
#define  MIS_GPIO_GP2DIR_gpdir70_mask                                            (0x00000200)
#define  MIS_GPIO_GP2DIR_gpdir69_mask                                            (0x00000100)
#define  MIS_GPIO_GP2DIR_gpdir68_mask                                            (0x00000080)
#define  MIS_GPIO_GP2DIR_gpdir67_mask                                            (0x00000040)
#define  MIS_GPIO_GP2DIR_gpdir66_mask                                            (0x00000020)
#define  MIS_GPIO_GP2DIR_gpdir65_mask                                            (0x00000010)
#define  MIS_GPIO_GP2DIR_gpdir64_mask                                            (0x00000008)
#define  MIS_GPIO_GP2DIR_gpdir63_mask                                            (0x00000004)
#define  MIS_GPIO_GP2DIR_gpdir62_mask                                            (0x00000002)
#define  MIS_GPIO_GP2DIR_write_data_mask                                         (0x00000001)
#define  MIS_GPIO_GP2DIR_gpdir92(data)                                           (0x80000000&((data)<<31))
#define  MIS_GPIO_GP2DIR_gpdir91(data)                                           (0x40000000&((data)<<30))
#define  MIS_GPIO_GP2DIR_gpdir90(data)                                           (0x20000000&((data)<<29))
#define  MIS_GPIO_GP2DIR_gpdir89(data)                                           (0x10000000&((data)<<28))
#define  MIS_GPIO_GP2DIR_gpdir88(data)                                           (0x08000000&((data)<<27))
#define  MIS_GPIO_GP2DIR_gpdir87(data)                                           (0x04000000&((data)<<26))
#define  MIS_GPIO_GP2DIR_gpdir86(data)                                           (0x02000000&((data)<<25))
#define  MIS_GPIO_GP2DIR_gpdir85(data)                                           (0x01000000&((data)<<24))
#define  MIS_GPIO_GP2DIR_gpdir84(data)                                           (0x00800000&((data)<<23))
#define  MIS_GPIO_GP2DIR_gpdir83(data)                                           (0x00400000&((data)<<22))
#define  MIS_GPIO_GP2DIR_gpdir82(data)                                           (0x00200000&((data)<<21))
#define  MIS_GPIO_GP2DIR_gpdir81(data)                                           (0x00100000&((data)<<20))
#define  MIS_GPIO_GP2DIR_gpdir80(data)                                           (0x00080000&((data)<<19))
#define  MIS_GPIO_GP2DIR_gpdir79(data)                                           (0x00040000&((data)<<18))
#define  MIS_GPIO_GP2DIR_gpdir78(data)                                           (0x00020000&((data)<<17))
#define  MIS_GPIO_GP2DIR_gpdir77(data)                                           (0x00010000&((data)<<16))
#define  MIS_GPIO_GP2DIR_gpdir76(data)                                           (0x00008000&((data)<<15))
#define  MIS_GPIO_GP2DIR_gpdir75(data)                                           (0x00004000&((data)<<14))
#define  MIS_GPIO_GP2DIR_gpdir74(data)                                           (0x00002000&((data)<<13))
#define  MIS_GPIO_GP2DIR_gpdir73(data)                                           (0x00001000&((data)<<12))
#define  MIS_GPIO_GP2DIR_gpdir72(data)                                           (0x00000800&((data)<<11))
#define  MIS_GPIO_GP2DIR_gpdir71(data)                                           (0x00000400&((data)<<10))
#define  MIS_GPIO_GP2DIR_gpdir70(data)                                           (0x00000200&((data)<<9))
#define  MIS_GPIO_GP2DIR_gpdir69(data)                                           (0x00000100&((data)<<8))
#define  MIS_GPIO_GP2DIR_gpdir68(data)                                           (0x00000080&((data)<<7))
#define  MIS_GPIO_GP2DIR_gpdir67(data)                                           (0x00000040&((data)<<6))
#define  MIS_GPIO_GP2DIR_gpdir66(data)                                           (0x00000020&((data)<<5))
#define  MIS_GPIO_GP2DIR_gpdir65(data)                                           (0x00000010&((data)<<4))
#define  MIS_GPIO_GP2DIR_gpdir64(data)                                           (0x00000008&((data)<<3))
#define  MIS_GPIO_GP2DIR_gpdir63(data)                                           (0x00000004&((data)<<2))
#define  MIS_GPIO_GP2DIR_gpdir62(data)                                           (0x00000002&((data)<<1))
#define  MIS_GPIO_GP2DIR_write_data(data)                                        (0x00000001&(data))
#define  MIS_GPIO_GP2DIR_get_gpdir92(data)                                       ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP2DIR_get_gpdir91(data)                                       ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP2DIR_get_gpdir90(data)                                       ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP2DIR_get_gpdir89(data)                                       ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP2DIR_get_gpdir88(data)                                       ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP2DIR_get_gpdir87(data)                                       ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP2DIR_get_gpdir86(data)                                       ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP2DIR_get_gpdir85(data)                                       ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP2DIR_get_gpdir84(data)                                       ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP2DIR_get_gpdir83(data)                                       ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP2DIR_get_gpdir82(data)                                       ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP2DIR_get_gpdir81(data)                                       ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP2DIR_get_gpdir80(data)                                       ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP2DIR_get_gpdir79(data)                                       ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP2DIR_get_gpdir78(data)                                       ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP2DIR_get_gpdir77(data)                                       ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP2DIR_get_gpdir76(data)                                       ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP2DIR_get_gpdir75(data)                                       ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP2DIR_get_gpdir74(data)                                       ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP2DIR_get_gpdir73(data)                                       ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP2DIR_get_gpdir72(data)                                       ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP2DIR_get_gpdir71(data)                                       ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP2DIR_get_gpdir70(data)                                       ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP2DIR_get_gpdir69(data)                                       ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP2DIR_get_gpdir68(data)                                       ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP2DIR_get_gpdir67(data)                                       ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP2DIR_get_gpdir66(data)                                       ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP2DIR_get_gpdir65(data)                                       ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP2DIR_get_gpdir64(data)                                       ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP2DIR_get_gpdir63(data)                                       ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP2DIR_get_gpdir62(data)                                       ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP2DIR_get_write_data(data)                                    (0x00000001&(data))

#define  MIS_GPIO_GP3DIR                                                        0x1801BD0C
#define  MIS_GPIO_GP3DIR_reg_addr                                                "0xB801BD0C"
#define  MIS_GPIO_GP3DIR_reg                                                     0xB801BD0C
#define  MIS_GPIO_GP3DIR_inst_addr                                               "0x0003"
#define  set_MIS_GPIO_GP3DIR_reg(data)                                           (*((volatile unsigned int*)MIS_GPIO_GP3DIR_reg)=data)
#define  get_MIS_GPIO_GP3DIR_reg                                                 (*((volatile unsigned int*)MIS_GPIO_GP3DIR_reg))
#define  MIS_GPIO_GP3DIR_gpdir123_shift                                          (31)
#define  MIS_GPIO_GP3DIR_gpdir122_shift                                          (30)
#define  MIS_GPIO_GP3DIR_gpdir121_shift                                          (29)
#define  MIS_GPIO_GP3DIR_gpdir120_shift                                          (28)
#define  MIS_GPIO_GP3DIR_gpdir119_shift                                          (27)
#define  MIS_GPIO_GP3DIR_gpdir118_shift                                          (26)
#define  MIS_GPIO_GP3DIR_gpdir117_shift                                          (25)
#define  MIS_GPIO_GP3DIR_gpdir116_shift                                          (24)
#define  MIS_GPIO_GP3DIR_gpdir115_shift                                          (23)
#define  MIS_GPIO_GP3DIR_gpdir114_shift                                          (22)
#define  MIS_GPIO_GP3DIR_gpdir113_shift                                          (21)
#define  MIS_GPIO_GP3DIR_gpdir112_shift                                          (20)
#define  MIS_GPIO_GP3DIR_gpdir111_shift                                          (19)
#define  MIS_GPIO_GP3DIR_gpdir110_shift                                          (18)
#define  MIS_GPIO_GP3DIR_gpdir109_shift                                          (17)
#define  MIS_GPIO_GP3DIR_gpdir108_shift                                          (16)
#define  MIS_GPIO_GP3DIR_gpdir107_shift                                          (15)
#define  MIS_GPIO_GP3DIR_gpdir106_shift                                          (14)
#define  MIS_GPIO_GP3DIR_gpdir105_shift                                          (13)
#define  MIS_GPIO_GP3DIR_gpdir104_shift                                          (12)
#define  MIS_GPIO_GP3DIR_gpdir103_shift                                          (11)
#define  MIS_GPIO_GP3DIR_gpdir102_shift                                          (10)
#define  MIS_GPIO_GP3DIR_gpdir101_shift                                          (9)
#define  MIS_GPIO_GP3DIR_gpdir100_shift                                          (8)
#define  MIS_GPIO_GP3DIR_gpdir99_shift                                           (7)
#define  MIS_GPIO_GP3DIR_gpdir98_shift                                           (6)
#define  MIS_GPIO_GP3DIR_gpdir97_shift                                           (5)
#define  MIS_GPIO_GP3DIR_gpdir96_shift                                           (4)
#define  MIS_GPIO_GP3DIR_gpdir95_shift                                           (3)
#define  MIS_GPIO_GP3DIR_gpdir94_shift                                           (2)
#define  MIS_GPIO_GP3DIR_gpdir93_shift                                           (1)
#define  MIS_GPIO_GP3DIR_write_data_shift                                        (0)
#define  MIS_GPIO_GP3DIR_gpdir123_mask                                           (0x80000000)
#define  MIS_GPIO_GP3DIR_gpdir122_mask                                           (0x40000000)
#define  MIS_GPIO_GP3DIR_gpdir121_mask                                           (0x20000000)
#define  MIS_GPIO_GP3DIR_gpdir120_mask                                           (0x10000000)
#define  MIS_GPIO_GP3DIR_gpdir119_mask                                           (0x08000000)
#define  MIS_GPIO_GP3DIR_gpdir118_mask                                           (0x04000000)
#define  MIS_GPIO_GP3DIR_gpdir117_mask                                           (0x02000000)
#define  MIS_GPIO_GP3DIR_gpdir116_mask                                           (0x01000000)
#define  MIS_GPIO_GP3DIR_gpdir115_mask                                           (0x00800000)
#define  MIS_GPIO_GP3DIR_gpdir114_mask                                           (0x00400000)
#define  MIS_GPIO_GP3DIR_gpdir113_mask                                           (0x00200000)
#define  MIS_GPIO_GP3DIR_gpdir112_mask                                           (0x00100000)
#define  MIS_GPIO_GP3DIR_gpdir111_mask                                           (0x00080000)
#define  MIS_GPIO_GP3DIR_gpdir110_mask                                           (0x00040000)
#define  MIS_GPIO_GP3DIR_gpdir109_mask                                           (0x00020000)
#define  MIS_GPIO_GP3DIR_gpdir108_mask                                           (0x00010000)
#define  MIS_GPIO_GP3DIR_gpdir107_mask                                           (0x00008000)
#define  MIS_GPIO_GP3DIR_gpdir106_mask                                           (0x00004000)
#define  MIS_GPIO_GP3DIR_gpdir105_mask                                           (0x00002000)
#define  MIS_GPIO_GP3DIR_gpdir104_mask                                           (0x00001000)
#define  MIS_GPIO_GP3DIR_gpdir103_mask                                           (0x00000800)
#define  MIS_GPIO_GP3DIR_gpdir102_mask                                           (0x00000400)
#define  MIS_GPIO_GP3DIR_gpdir101_mask                                           (0x00000200)
#define  MIS_GPIO_GP3DIR_gpdir100_mask                                           (0x00000100)
#define  MIS_GPIO_GP3DIR_gpdir99_mask                                            (0x00000080)
#define  MIS_GPIO_GP3DIR_gpdir98_mask                                            (0x00000040)
#define  MIS_GPIO_GP3DIR_gpdir97_mask                                            (0x00000020)
#define  MIS_GPIO_GP3DIR_gpdir96_mask                                            (0x00000010)
#define  MIS_GPIO_GP3DIR_gpdir95_mask                                            (0x00000008)
#define  MIS_GPIO_GP3DIR_gpdir94_mask                                            (0x00000004)
#define  MIS_GPIO_GP3DIR_gpdir93_mask                                            (0x00000002)
#define  MIS_GPIO_GP3DIR_write_data_mask                                         (0x00000001)
#define  MIS_GPIO_GP3DIR_gpdir123(data)                                          (0x80000000&((data)<<31))
#define  MIS_GPIO_GP3DIR_gpdir122(data)                                          (0x40000000&((data)<<30))
#define  MIS_GPIO_GP3DIR_gpdir121(data)                                          (0x20000000&((data)<<29))
#define  MIS_GPIO_GP3DIR_gpdir120(data)                                          (0x10000000&((data)<<28))
#define  MIS_GPIO_GP3DIR_gpdir119(data)                                          (0x08000000&((data)<<27))
#define  MIS_GPIO_GP3DIR_gpdir118(data)                                          (0x04000000&((data)<<26))
#define  MIS_GPIO_GP3DIR_gpdir117(data)                                          (0x02000000&((data)<<25))
#define  MIS_GPIO_GP3DIR_gpdir116(data)                                          (0x01000000&((data)<<24))
#define  MIS_GPIO_GP3DIR_gpdir115(data)                                          (0x00800000&((data)<<23))
#define  MIS_GPIO_GP3DIR_gpdir114(data)                                          (0x00400000&((data)<<22))
#define  MIS_GPIO_GP3DIR_gpdir113(data)                                          (0x00200000&((data)<<21))
#define  MIS_GPIO_GP3DIR_gpdir112(data)                                          (0x00100000&((data)<<20))
#define  MIS_GPIO_GP3DIR_gpdir111(data)                                          (0x00080000&((data)<<19))
#define  MIS_GPIO_GP3DIR_gpdir110(data)                                          (0x00040000&((data)<<18))
#define  MIS_GPIO_GP3DIR_gpdir109(data)                                          (0x00020000&((data)<<17))
#define  MIS_GPIO_GP3DIR_gpdir108(data)                                          (0x00010000&((data)<<16))
#define  MIS_GPIO_GP3DIR_gpdir107(data)                                          (0x00008000&((data)<<15))
#define  MIS_GPIO_GP3DIR_gpdir106(data)                                          (0x00004000&((data)<<14))
#define  MIS_GPIO_GP3DIR_gpdir105(data)                                          (0x00002000&((data)<<13))
#define  MIS_GPIO_GP3DIR_gpdir104(data)                                          (0x00001000&((data)<<12))
#define  MIS_GPIO_GP3DIR_gpdir103(data)                                          (0x00000800&((data)<<11))
#define  MIS_GPIO_GP3DIR_gpdir102(data)                                          (0x00000400&((data)<<10))
#define  MIS_GPIO_GP3DIR_gpdir101(data)                                          (0x00000200&((data)<<9))
#define  MIS_GPIO_GP3DIR_gpdir100(data)                                          (0x00000100&((data)<<8))
#define  MIS_GPIO_GP3DIR_gpdir99(data)                                           (0x00000080&((data)<<7))
#define  MIS_GPIO_GP3DIR_gpdir98(data)                                           (0x00000040&((data)<<6))
#define  MIS_GPIO_GP3DIR_gpdir97(data)                                           (0x00000020&((data)<<5))
#define  MIS_GPIO_GP3DIR_gpdir96(data)                                           (0x00000010&((data)<<4))
#define  MIS_GPIO_GP3DIR_gpdir95(data)                                           (0x00000008&((data)<<3))
#define  MIS_GPIO_GP3DIR_gpdir94(data)                                           (0x00000004&((data)<<2))
#define  MIS_GPIO_GP3DIR_gpdir93(data)                                           (0x00000002&((data)<<1))
#define  MIS_GPIO_GP3DIR_write_data(data)                                        (0x00000001&(data))
#define  MIS_GPIO_GP3DIR_get_gpdir123(data)                                      ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP3DIR_get_gpdir122(data)                                      ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP3DIR_get_gpdir121(data)                                      ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP3DIR_get_gpdir120(data)                                      ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP3DIR_get_gpdir119(data)                                      ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP3DIR_get_gpdir118(data)                                      ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP3DIR_get_gpdir117(data)                                      ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP3DIR_get_gpdir116(data)                                      ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP3DIR_get_gpdir115(data)                                      ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP3DIR_get_gpdir114(data)                                      ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP3DIR_get_gpdir113(data)                                      ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP3DIR_get_gpdir112(data)                                      ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP3DIR_get_gpdir111(data)                                      ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP3DIR_get_gpdir110(data)                                      ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP3DIR_get_gpdir109(data)                                      ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP3DIR_get_gpdir108(data)                                      ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP3DIR_get_gpdir107(data)                                      ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP3DIR_get_gpdir106(data)                                      ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP3DIR_get_gpdir105(data)                                      ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP3DIR_get_gpdir104(data)                                      ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP3DIR_get_gpdir103(data)                                      ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP3DIR_get_gpdir102(data)                                      ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP3DIR_get_gpdir101(data)                                      ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP3DIR_get_gpdir100(data)                                      ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP3DIR_get_gpdir99(data)                                       ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP3DIR_get_gpdir98(data)                                       ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP3DIR_get_gpdir97(data)                                       ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP3DIR_get_gpdir96(data)                                       ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP3DIR_get_gpdir95(data)                                       ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP3DIR_get_gpdir94(data)                                       ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP3DIR_get_gpdir93(data)                                       ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP3DIR_get_write_data(data)                                    (0x00000001&(data))

#define  MIS_GPIO_GP4DIR                                                        0x1801BD10
#define  MIS_GPIO_GP4DIR_reg_addr                                                "0xB801BD10"
#define  MIS_GPIO_GP4DIR_reg                                                     0xB801BD10
#define  MIS_GPIO_GP4DIR_inst_addr                                               "0x0004"
#define  set_MIS_GPIO_GP4DIR_reg(data)                                           (*((volatile unsigned int*)MIS_GPIO_GP4DIR_reg)=data)
#define  get_MIS_GPIO_GP4DIR_reg                                                 (*((volatile unsigned int*)MIS_GPIO_GP4DIR_reg))
#define  MIS_GPIO_GP4DIR_gpdir154_shift                                          (31)
#define  MIS_GPIO_GP4DIR_gpdir153_shift                                          (30)
#define  MIS_GPIO_GP4DIR_gpdir152_shift                                          (29)
#define  MIS_GPIO_GP4DIR_gpdir151_shift                                          (28)
#define  MIS_GPIO_GP4DIR_gpdir150_shift                                          (27)
#define  MIS_GPIO_GP4DIR_gpdir149_shift                                          (26)
#define  MIS_GPIO_GP4DIR_gpdir148_shift                                          (25)
#define  MIS_GPIO_GP4DIR_gpdir147_shift                                          (24)
#define  MIS_GPIO_GP4DIR_gpdir146_shift                                          (23)
#define  MIS_GPIO_GP4DIR_gpdir145_shift                                          (22)
#define  MIS_GPIO_GP4DIR_gpdir144_shift                                          (21)
#define  MIS_GPIO_GP4DIR_gpdir143_shift                                          (20)
#define  MIS_GPIO_GP4DIR_gpdir142_shift                                          (19)
#define  MIS_GPIO_GP4DIR_gpdir141_shift                                          (18)
#define  MIS_GPIO_GP4DIR_gpdir140_shift                                          (17)
#define  MIS_GPIO_GP4DIR_gpdir139_shift                                          (16)
#define  MIS_GPIO_GP4DIR_gpdir138_shift                                          (15)
#define  MIS_GPIO_GP4DIR_gpdir137_shift                                          (14)
#define  MIS_GPIO_GP4DIR_gpdir136_shift                                          (13)
#define  MIS_GPIO_GP4DIR_gpdir135_shift                                          (12)
#define  MIS_GPIO_GP4DIR_gpdir134_shift                                          (11)
#define  MIS_GPIO_GP4DIR_gpdir133_shift                                          (10)
#define  MIS_GPIO_GP4DIR_gpdir132_shift                                          (9)
#define  MIS_GPIO_GP4DIR_gpdir131_shift                                          (8)
#define  MIS_GPIO_GP4DIR_gpdir130_shift                                          (7)
#define  MIS_GPIO_GP4DIR_gpdir129_shift                                          (6)
#define  MIS_GPIO_GP4DIR_gpdir128_shift                                          (5)
#define  MIS_GPIO_GP4DIR_gpdir127_shift                                          (4)
#define  MIS_GPIO_GP4DIR_gpdir126_shift                                          (3)
#define  MIS_GPIO_GP4DIR_gpdir125_shift                                          (2)
#define  MIS_GPIO_GP4DIR_gpdir124_shift                                          (1)
#define  MIS_GPIO_GP4DIR_write_data_shift                                        (0)
#define  MIS_GPIO_GP4DIR_gpdir154_mask                                           (0x80000000)
#define  MIS_GPIO_GP4DIR_gpdir153_mask                                           (0x40000000)
#define  MIS_GPIO_GP4DIR_gpdir152_mask                                           (0x20000000)
#define  MIS_GPIO_GP4DIR_gpdir151_mask                                           (0x10000000)
#define  MIS_GPIO_GP4DIR_gpdir150_mask                                           (0x08000000)
#define  MIS_GPIO_GP4DIR_gpdir149_mask                                           (0x04000000)
#define  MIS_GPIO_GP4DIR_gpdir148_mask                                           (0x02000000)
#define  MIS_GPIO_GP4DIR_gpdir147_mask                                           (0x01000000)
#define  MIS_GPIO_GP4DIR_gpdir146_mask                                           (0x00800000)
#define  MIS_GPIO_GP4DIR_gpdir145_mask                                           (0x00400000)
#define  MIS_GPIO_GP4DIR_gpdir144_mask                                           (0x00200000)
#define  MIS_GPIO_GP4DIR_gpdir143_mask                                           (0x00100000)
#define  MIS_GPIO_GP4DIR_gpdir142_mask                                           (0x00080000)
#define  MIS_GPIO_GP4DIR_gpdir141_mask                                           (0x00040000)
#define  MIS_GPIO_GP4DIR_gpdir140_mask                                           (0x00020000)
#define  MIS_GPIO_GP4DIR_gpdir139_mask                                           (0x00010000)
#define  MIS_GPIO_GP4DIR_gpdir138_mask                                           (0x00008000)
#define  MIS_GPIO_GP4DIR_gpdir137_mask                                           (0x00004000)
#define  MIS_GPIO_GP4DIR_gpdir136_mask                                           (0x00002000)
#define  MIS_GPIO_GP4DIR_gpdir135_mask                                           (0x00001000)
#define  MIS_GPIO_GP4DIR_gpdir134_mask                                           (0x00000800)
#define  MIS_GPIO_GP4DIR_gpdir133_mask                                           (0x00000400)
#define  MIS_GPIO_GP4DIR_gpdir132_mask                                           (0x00000200)
#define  MIS_GPIO_GP4DIR_gpdir131_mask                                           (0x00000100)
#define  MIS_GPIO_GP4DIR_gpdir130_mask                                           (0x00000080)
#define  MIS_GPIO_GP4DIR_gpdir129_mask                                           (0x00000040)
#define  MIS_GPIO_GP4DIR_gpdir128_mask                                           (0x00000020)
#define  MIS_GPIO_GP4DIR_gpdir127_mask                                           (0x00000010)
#define  MIS_GPIO_GP4DIR_gpdir126_mask                                           (0x00000008)
#define  MIS_GPIO_GP4DIR_gpdir125_mask                                           (0x00000004)
#define  MIS_GPIO_GP4DIR_gpdir124_mask                                           (0x00000002)
#define  MIS_GPIO_GP4DIR_write_data_mask                                         (0x00000001)
#define  MIS_GPIO_GP4DIR_gpdir154(data)                                          (0x80000000&((data)<<31))
#define  MIS_GPIO_GP4DIR_gpdir153(data)                                          (0x40000000&((data)<<30))
#define  MIS_GPIO_GP4DIR_gpdir152(data)                                          (0x20000000&((data)<<29))
#define  MIS_GPIO_GP4DIR_gpdir151(data)                                          (0x10000000&((data)<<28))
#define  MIS_GPIO_GP4DIR_gpdir150(data)                                          (0x08000000&((data)<<27))
#define  MIS_GPIO_GP4DIR_gpdir149(data)                                          (0x04000000&((data)<<26))
#define  MIS_GPIO_GP4DIR_gpdir148(data)                                          (0x02000000&((data)<<25))
#define  MIS_GPIO_GP4DIR_gpdir147(data)                                          (0x01000000&((data)<<24))
#define  MIS_GPIO_GP4DIR_gpdir146(data)                                          (0x00800000&((data)<<23))
#define  MIS_GPIO_GP4DIR_gpdir145(data)                                          (0x00400000&((data)<<22))
#define  MIS_GPIO_GP4DIR_gpdir144(data)                                          (0x00200000&((data)<<21))
#define  MIS_GPIO_GP4DIR_gpdir143(data)                                          (0x00100000&((data)<<20))
#define  MIS_GPIO_GP4DIR_gpdir142(data)                                          (0x00080000&((data)<<19))
#define  MIS_GPIO_GP4DIR_gpdir141(data)                                          (0x00040000&((data)<<18))
#define  MIS_GPIO_GP4DIR_gpdir140(data)                                          (0x00020000&((data)<<17))
#define  MIS_GPIO_GP4DIR_gpdir139(data)                                          (0x00010000&((data)<<16))
#define  MIS_GPIO_GP4DIR_gpdir138(data)                                          (0x00008000&((data)<<15))
#define  MIS_GPIO_GP4DIR_gpdir137(data)                                          (0x00004000&((data)<<14))
#define  MIS_GPIO_GP4DIR_gpdir136(data)                                          (0x00002000&((data)<<13))
#define  MIS_GPIO_GP4DIR_gpdir135(data)                                          (0x00001000&((data)<<12))
#define  MIS_GPIO_GP4DIR_gpdir134(data)                                          (0x00000800&((data)<<11))
#define  MIS_GPIO_GP4DIR_gpdir133(data)                                          (0x00000400&((data)<<10))
#define  MIS_GPIO_GP4DIR_gpdir132(data)                                          (0x00000200&((data)<<9))
#define  MIS_GPIO_GP4DIR_gpdir131(data)                                          (0x00000100&((data)<<8))
#define  MIS_GPIO_GP4DIR_gpdir130(data)                                          (0x00000080&((data)<<7))
#define  MIS_GPIO_GP4DIR_gpdir129(data)                                          (0x00000040&((data)<<6))
#define  MIS_GPIO_GP4DIR_gpdir128(data)                                          (0x00000020&((data)<<5))
#define  MIS_GPIO_GP4DIR_gpdir127(data)                                          (0x00000010&((data)<<4))
#define  MIS_GPIO_GP4DIR_gpdir126(data)                                          (0x00000008&((data)<<3))
#define  MIS_GPIO_GP4DIR_gpdir125(data)                                          (0x00000004&((data)<<2))
#define  MIS_GPIO_GP4DIR_gpdir124(data)                                          (0x00000002&((data)<<1))
#define  MIS_GPIO_GP4DIR_write_data(data)                                        (0x00000001&(data))
#define  MIS_GPIO_GP4DIR_get_gpdir154(data)                                      ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP4DIR_get_gpdir153(data)                                      ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP4DIR_get_gpdir152(data)                                      ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP4DIR_get_gpdir151(data)                                      ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP4DIR_get_gpdir150(data)                                      ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP4DIR_get_gpdir149(data)                                      ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP4DIR_get_gpdir148(data)                                      ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP4DIR_get_gpdir147(data)                                      ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP4DIR_get_gpdir146(data)                                      ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP4DIR_get_gpdir145(data)                                      ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP4DIR_get_gpdir144(data)                                      ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP4DIR_get_gpdir143(data)                                      ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP4DIR_get_gpdir142(data)                                      ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP4DIR_get_gpdir141(data)                                      ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP4DIR_get_gpdir140(data)                                      ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP4DIR_get_gpdir139(data)                                      ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP4DIR_get_gpdir138(data)                                      ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP4DIR_get_gpdir137(data)                                      ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP4DIR_get_gpdir136(data)                                      ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP4DIR_get_gpdir135(data)                                      ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP4DIR_get_gpdir134(data)                                      ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP4DIR_get_gpdir133(data)                                      ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP4DIR_get_gpdir132(data)                                      ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP4DIR_get_gpdir131(data)                                      ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP4DIR_get_gpdir130(data)                                      ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP4DIR_get_gpdir129(data)                                      ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP4DIR_get_gpdir128(data)                                      ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP4DIR_get_gpdir127(data)                                      ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP4DIR_get_gpdir126(data)                                      ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP4DIR_get_gpdir125(data)                                      ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP4DIR_get_gpdir124(data)                                      ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP4DIR_get_write_data(data)                                    (0x00000001&(data))

#define  MIS_GPIO_GP5DIR                                                        0x1801BD14
#define  MIS_GPIO_GP5DIR_reg_addr                                                "0xB801BD14"
#define  MIS_GPIO_GP5DIR_reg                                                     0xB801BD14
#define  MIS_GPIO_GP5DIR_inst_addr                                               "0x0005"
#define  set_MIS_GPIO_GP5DIR_reg(data)                                           (*((volatile unsigned int*)MIS_GPIO_GP5DIR_reg)=data)
#define  get_MIS_GPIO_GP5DIR_reg                                                 (*((volatile unsigned int*)MIS_GPIO_GP5DIR_reg))
#define  MIS_GPIO_GP5DIR_gpdir160_shift                                          (6)
#define  MIS_GPIO_GP5DIR_gpdir159_shift                                          (5)
#define  MIS_GPIO_GP5DIR_gpdir158_shift                                          (4)
#define  MIS_GPIO_GP5DIR_gpdir157_shift                                          (3)
#define  MIS_GPIO_GP5DIR_gpdir156_shift                                          (2)
#define  MIS_GPIO_GP5DIR_gpdir155_shift                                          (1)
#define  MIS_GPIO_GP5DIR_write_data_shift                                        (0)
#define  MIS_GPIO_GP5DIR_gpdir160_mask                                           (0x00000040)
#define  MIS_GPIO_GP5DIR_gpdir159_mask                                           (0x00000020)
#define  MIS_GPIO_GP5DIR_gpdir158_mask                                           (0x00000010)
#define  MIS_GPIO_GP5DIR_gpdir157_mask                                           (0x00000008)
#define  MIS_GPIO_GP5DIR_gpdir156_mask                                           (0x00000004)
#define  MIS_GPIO_GP5DIR_gpdir155_mask                                           (0x00000002)
#define  MIS_GPIO_GP5DIR_write_data_mask                                         (0x00000001)
#define  MIS_GPIO_GP5DIR_gpdir160(data)                                          (0x00000040&((data)<<6))
#define  MIS_GPIO_GP5DIR_gpdir159(data)                                          (0x00000020&((data)<<5))
#define  MIS_GPIO_GP5DIR_gpdir158(data)                                          (0x00000010&((data)<<4))
#define  MIS_GPIO_GP5DIR_gpdir157(data)                                          (0x00000008&((data)<<3))
#define  MIS_GPIO_GP5DIR_gpdir156(data)                                          (0x00000004&((data)<<2))
#define  MIS_GPIO_GP5DIR_gpdir155(data)                                          (0x00000002&((data)<<1))
#define  MIS_GPIO_GP5DIR_write_data(data)                                        (0x00000001&(data))
#define  MIS_GPIO_GP5DIR_get_gpdir160(data)                                      ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP5DIR_get_gpdir159(data)                                      ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP5DIR_get_gpdir158(data)                                      ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP5DIR_get_gpdir157(data)                                      ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP5DIR_get_gpdir156(data)                                      ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP5DIR_get_gpdir155(data)                                      ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP5DIR_get_write_data(data)                                    (0x00000001&(data))

#define  MIS_GPIO_GP0DATO                                                       0x1801BD18
#define  MIS_GPIO_GP0DATO_reg_addr                                               "0xB801BD18"
#define  MIS_GPIO_GP0DATO_reg                                                    0xB801BD18
#define  MIS_GPIO_GP0DATO_inst_addr                                              "0x0006"
#define  set_MIS_GPIO_GP0DATO_reg(data)                                          (*((volatile unsigned int*)MIS_GPIO_GP0DATO_reg)=data)
#define  get_MIS_GPIO_GP0DATO_reg                                                (*((volatile unsigned int*)MIS_GPIO_GP0DATO_reg))
#define  MIS_GPIO_GP0DATO_gpdato30_shift                                         (31)
#define  MIS_GPIO_GP0DATO_gpdato29_shift                                         (30)
#define  MIS_GPIO_GP0DATO_gpdato28_shift                                         (29)
#define  MIS_GPIO_GP0DATO_gpdato27_shift                                         (28)
#define  MIS_GPIO_GP0DATO_gpdato26_shift                                         (27)
#define  MIS_GPIO_GP0DATO_gpdato25_shift                                         (26)
#define  MIS_GPIO_GP0DATO_gpdato24_shift                                         (25)
#define  MIS_GPIO_GP0DATO_gpdato23_shift                                         (24)
#define  MIS_GPIO_GP0DATO_gpdato22_shift                                         (23)
#define  MIS_GPIO_GP0DATO_gpdato21_shift                                         (22)
#define  MIS_GPIO_GP0DATO_gpdato20_shift                                         (21)
#define  MIS_GPIO_GP0DATO_gpdato19_shift                                         (20)
#define  MIS_GPIO_GP0DATO_gpdato18_shift                                         (19)
#define  MIS_GPIO_GP0DATO_gpdato17_shift                                         (18)
#define  MIS_GPIO_GP0DATO_gpdato16_shift                                         (17)
#define  MIS_GPIO_GP0DATO_gpdato15_shift                                         (16)
#define  MIS_GPIO_GP0DATO_gpdato14_shift                                         (15)
#define  MIS_GPIO_GP0DATO_gpdato13_shift                                         (14)
#define  MIS_GPIO_GP0DATO_gpdato12_shift                                         (13)
#define  MIS_GPIO_GP0DATO_gpdato11_shift                                         (12)
#define  MIS_GPIO_GP0DATO_gpdato10_shift                                         (11)
#define  MIS_GPIO_GP0DATO_gpdato9_shift                                          (10)
#define  MIS_GPIO_GP0DATO_gpdato8_shift                                          (9)
#define  MIS_GPIO_GP0DATO_gpdato7_shift                                          (8)
#define  MIS_GPIO_GP0DATO_gpdato6_shift                                          (7)
#define  MIS_GPIO_GP0DATO_gpdato5_shift                                          (6)
#define  MIS_GPIO_GP0DATO_gpdato4_shift                                          (5)
#define  MIS_GPIO_GP0DATO_gpdato3_shift                                          (4)
#define  MIS_GPIO_GP0DATO_gpdato2_shift                                          (3)
#define  MIS_GPIO_GP0DATO_gpdato1_shift                                          (2)
#define  MIS_GPIO_GP0DATO_gpdato0_shift                                          (1)
#define  MIS_GPIO_GP0DATO_write_data_shift                                       (0)
#define  MIS_GPIO_GP0DATO_gpdato30_mask                                          (0x80000000)
#define  MIS_GPIO_GP0DATO_gpdato29_mask                                          (0x40000000)
#define  MIS_GPIO_GP0DATO_gpdato28_mask                                          (0x20000000)
#define  MIS_GPIO_GP0DATO_gpdato27_mask                                          (0x10000000)
#define  MIS_GPIO_GP0DATO_gpdato26_mask                                          (0x08000000)
#define  MIS_GPIO_GP0DATO_gpdato25_mask                                          (0x04000000)
#define  MIS_GPIO_GP0DATO_gpdato24_mask                                          (0x02000000)
#define  MIS_GPIO_GP0DATO_gpdato23_mask                                          (0x01000000)
#define  MIS_GPIO_GP0DATO_gpdato22_mask                                          (0x00800000)
#define  MIS_GPIO_GP0DATO_gpdato21_mask                                          (0x00400000)
#define  MIS_GPIO_GP0DATO_gpdato20_mask                                          (0x00200000)
#define  MIS_GPIO_GP0DATO_gpdato19_mask                                          (0x00100000)
#define  MIS_GPIO_GP0DATO_gpdato18_mask                                          (0x00080000)
#define  MIS_GPIO_GP0DATO_gpdato17_mask                                          (0x00040000)
#define  MIS_GPIO_GP0DATO_gpdato16_mask                                          (0x00020000)
#define  MIS_GPIO_GP0DATO_gpdato15_mask                                          (0x00010000)
#define  MIS_GPIO_GP0DATO_gpdato14_mask                                          (0x00008000)
#define  MIS_GPIO_GP0DATO_gpdato13_mask                                          (0x00004000)
#define  MIS_GPIO_GP0DATO_gpdato12_mask                                          (0x00002000)
#define  MIS_GPIO_GP0DATO_gpdato11_mask                                          (0x00001000)
#define  MIS_GPIO_GP0DATO_gpdato10_mask                                          (0x00000800)
#define  MIS_GPIO_GP0DATO_gpdato9_mask                                           (0x00000400)
#define  MIS_GPIO_GP0DATO_gpdato8_mask                                           (0x00000200)
#define  MIS_GPIO_GP0DATO_gpdato7_mask                                           (0x00000100)
#define  MIS_GPIO_GP0DATO_gpdato6_mask                                           (0x00000080)
#define  MIS_GPIO_GP0DATO_gpdato5_mask                                           (0x00000040)
#define  MIS_GPIO_GP0DATO_gpdato4_mask                                           (0x00000020)
#define  MIS_GPIO_GP0DATO_gpdato3_mask                                           (0x00000010)
#define  MIS_GPIO_GP0DATO_gpdato2_mask                                           (0x00000008)
#define  MIS_GPIO_GP0DATO_gpdato1_mask                                           (0x00000004)
#define  MIS_GPIO_GP0DATO_gpdato0_mask                                           (0x00000002)
#define  MIS_GPIO_GP0DATO_write_data_mask                                        (0x00000001)
#define  MIS_GPIO_GP0DATO_gpdato30(data)                                         (0x80000000&((data)<<31))
#define  MIS_GPIO_GP0DATO_gpdato29(data)                                         (0x40000000&((data)<<30))
#define  MIS_GPIO_GP0DATO_gpdato28(data)                                         (0x20000000&((data)<<29))
#define  MIS_GPIO_GP0DATO_gpdato27(data)                                         (0x10000000&((data)<<28))
#define  MIS_GPIO_GP0DATO_gpdato26(data)                                         (0x08000000&((data)<<27))
#define  MIS_GPIO_GP0DATO_gpdato25(data)                                         (0x04000000&((data)<<26))
#define  MIS_GPIO_GP0DATO_gpdato24(data)                                         (0x02000000&((data)<<25))
#define  MIS_GPIO_GP0DATO_gpdato23(data)                                         (0x01000000&((data)<<24))
#define  MIS_GPIO_GP0DATO_gpdato22(data)                                         (0x00800000&((data)<<23))
#define  MIS_GPIO_GP0DATO_gpdato21(data)                                         (0x00400000&((data)<<22))
#define  MIS_GPIO_GP0DATO_gpdato20(data)                                         (0x00200000&((data)<<21))
#define  MIS_GPIO_GP0DATO_gpdato19(data)                                         (0x00100000&((data)<<20))
#define  MIS_GPIO_GP0DATO_gpdato18(data)                                         (0x00080000&((data)<<19))
#define  MIS_GPIO_GP0DATO_gpdato17(data)                                         (0x00040000&((data)<<18))
#define  MIS_GPIO_GP0DATO_gpdato16(data)                                         (0x00020000&((data)<<17))
#define  MIS_GPIO_GP0DATO_gpdato15(data)                                         (0x00010000&((data)<<16))
#define  MIS_GPIO_GP0DATO_gpdato14(data)                                         (0x00008000&((data)<<15))
#define  MIS_GPIO_GP0DATO_gpdato13(data)                                         (0x00004000&((data)<<14))
#define  MIS_GPIO_GP0DATO_gpdato12(data)                                         (0x00002000&((data)<<13))
#define  MIS_GPIO_GP0DATO_gpdato11(data)                                         (0x00001000&((data)<<12))
#define  MIS_GPIO_GP0DATO_gpdato10(data)                                         (0x00000800&((data)<<11))
#define  MIS_GPIO_GP0DATO_gpdato9(data)                                          (0x00000400&((data)<<10))
#define  MIS_GPIO_GP0DATO_gpdato8(data)                                          (0x00000200&((data)<<9))
#define  MIS_GPIO_GP0DATO_gpdato7(data)                                          (0x00000100&((data)<<8))
#define  MIS_GPIO_GP0DATO_gpdato6(data)                                          (0x00000080&((data)<<7))
#define  MIS_GPIO_GP0DATO_gpdato5(data)                                          (0x00000040&((data)<<6))
#define  MIS_GPIO_GP0DATO_gpdato4(data)                                          (0x00000020&((data)<<5))
#define  MIS_GPIO_GP0DATO_gpdato3(data)                                          (0x00000010&((data)<<4))
#define  MIS_GPIO_GP0DATO_gpdato2(data)                                          (0x00000008&((data)<<3))
#define  MIS_GPIO_GP0DATO_gpdato1(data)                                          (0x00000004&((data)<<2))
#define  MIS_GPIO_GP0DATO_gpdato0(data)                                          (0x00000002&((data)<<1))
#define  MIS_GPIO_GP0DATO_write_data(data)                                       (0x00000001&(data))
#define  MIS_GPIO_GP0DATO_get_gpdato30(data)                                     ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP0DATO_get_gpdato29(data)                                     ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP0DATO_get_gpdato28(data)                                     ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP0DATO_get_gpdato27(data)                                     ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP0DATO_get_gpdato26(data)                                     ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP0DATO_get_gpdato25(data)                                     ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP0DATO_get_gpdato24(data)                                     ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP0DATO_get_gpdato23(data)                                     ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP0DATO_get_gpdato22(data)                                     ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP0DATO_get_gpdato21(data)                                     ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP0DATO_get_gpdato20(data)                                     ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP0DATO_get_gpdato19(data)                                     ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP0DATO_get_gpdato18(data)                                     ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP0DATO_get_gpdato17(data)                                     ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP0DATO_get_gpdato16(data)                                     ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP0DATO_get_gpdato15(data)                                     ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP0DATO_get_gpdato14(data)                                     ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP0DATO_get_gpdato13(data)                                     ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP0DATO_get_gpdato12(data)                                     ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP0DATO_get_gpdato11(data)                                     ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP0DATO_get_gpdato10(data)                                     ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP0DATO_get_gpdato9(data)                                      ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP0DATO_get_gpdato8(data)                                      ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP0DATO_get_gpdato7(data)                                      ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP0DATO_get_gpdato6(data)                                      ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP0DATO_get_gpdato5(data)                                      ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP0DATO_get_gpdato4(data)                                      ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP0DATO_get_gpdato3(data)                                      ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP0DATO_get_gpdato2(data)                                      ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP0DATO_get_gpdato1(data)                                      ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP0DATO_get_gpdato0(data)                                      ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP0DATO_get_write_data(data)                                   (0x00000001&(data))

#define  MIS_GPIO_GP1DATO                                                       0x1801BD1C
#define  MIS_GPIO_GP1DATO_reg_addr                                               "0xB801BD1C"
#define  MIS_GPIO_GP1DATO_reg                                                    0xB801BD1C
#define  MIS_GPIO_GP1DATO_inst_addr                                              "0x0007"
#define  set_MIS_GPIO_GP1DATO_reg(data)                                          (*((volatile unsigned int*)MIS_GPIO_GP1DATO_reg)=data)
#define  get_MIS_GPIO_GP1DATO_reg                                                (*((volatile unsigned int*)MIS_GPIO_GP1DATO_reg))
#define  MIS_GPIO_GP1DATO_gpdato61_shift                                         (31)
#define  MIS_GPIO_GP1DATO_gpdato60_shift                                         (30)
#define  MIS_GPIO_GP1DATO_gpdato59_shift                                         (29)
#define  MIS_GPIO_GP1DATO_gpdato58_shift                                         (28)
#define  MIS_GPIO_GP1DATO_gpdato57_shift                                         (27)
#define  MIS_GPIO_GP1DATO_gpdato56_shift                                         (26)
#define  MIS_GPIO_GP1DATO_gpdato55_shift                                         (25)
#define  MIS_GPIO_GP1DATO_gpdato54_shift                                         (24)
#define  MIS_GPIO_GP1DATO_gpdato53_shift                                         (23)
#define  MIS_GPIO_GP1DATO_gpdato52_shift                                         (22)
#define  MIS_GPIO_GP1DATO_gpdato51_shift                                         (21)
#define  MIS_GPIO_GP1DATO_gpdato50_shift                                         (20)
#define  MIS_GPIO_GP1DATO_gpdato49_shift                                         (19)
#define  MIS_GPIO_GP1DATO_gpdato48_shift                                         (18)
#define  MIS_GPIO_GP1DATO_gpdato47_shift                                         (17)
#define  MIS_GPIO_GP1DATO_gpdato46_shift                                         (16)
#define  MIS_GPIO_GP1DATO_gpdato45_shift                                         (15)
#define  MIS_GPIO_GP1DATO_gpdato44_shift                                         (14)
#define  MIS_GPIO_GP1DATO_gpdato43_shift                                         (13)
#define  MIS_GPIO_GP1DATO_gpdato42_shift                                         (12)
#define  MIS_GPIO_GP1DATO_gpdato41_shift                                         (11)
#define  MIS_GPIO_GP1DATO_gpdato40_shift                                         (10)
#define  MIS_GPIO_GP1DATO_gpdato39_shift                                         (9)
#define  MIS_GPIO_GP1DATO_gpdato38_shift                                         (8)
#define  MIS_GPIO_GP1DATO_gpdato37_shift                                         (7)
#define  MIS_GPIO_GP1DATO_gpdato36_shift                                         (6)
#define  MIS_GPIO_GP1DATO_gpdato35_shift                                         (5)
#define  MIS_GPIO_GP1DATO_gpdato34_shift                                         (4)
#define  MIS_GPIO_GP1DATO_gpdato33_shift                                         (3)
#define  MIS_GPIO_GP1DATO_gpdato32_shift                                         (2)
#define  MIS_GPIO_GP1DATO_gpdato31_shift                                         (1)
#define  MIS_GPIO_GP1DATO_write_data_shift                                       (0)
#define  MIS_GPIO_GP1DATO_gpdato61_mask                                          (0x80000000)
#define  MIS_GPIO_GP1DATO_gpdato60_mask                                          (0x40000000)
#define  MIS_GPIO_GP1DATO_gpdato59_mask                                          (0x20000000)
#define  MIS_GPIO_GP1DATO_gpdato58_mask                                          (0x10000000)
#define  MIS_GPIO_GP1DATO_gpdato57_mask                                          (0x08000000)
#define  MIS_GPIO_GP1DATO_gpdato56_mask                                          (0x04000000)
#define  MIS_GPIO_GP1DATO_gpdato55_mask                                          (0x02000000)
#define  MIS_GPIO_GP1DATO_gpdato54_mask                                          (0x01000000)
#define  MIS_GPIO_GP1DATO_gpdato53_mask                                          (0x00800000)
#define  MIS_GPIO_GP1DATO_gpdato52_mask                                          (0x00400000)
#define  MIS_GPIO_GP1DATO_gpdato51_mask                                          (0x00200000)
#define  MIS_GPIO_GP1DATO_gpdato50_mask                                          (0x00100000)
#define  MIS_GPIO_GP1DATO_gpdato49_mask                                          (0x00080000)
#define  MIS_GPIO_GP1DATO_gpdato48_mask                                          (0x00040000)
#define  MIS_GPIO_GP1DATO_gpdato47_mask                                          (0x00020000)
#define  MIS_GPIO_GP1DATO_gpdato46_mask                                          (0x00010000)
#define  MIS_GPIO_GP1DATO_gpdato45_mask                                          (0x00008000)
#define  MIS_GPIO_GP1DATO_gpdato44_mask                                          (0x00004000)
#define  MIS_GPIO_GP1DATO_gpdato43_mask                                          (0x00002000)
#define  MIS_GPIO_GP1DATO_gpdato42_mask                                          (0x00001000)
#define  MIS_GPIO_GP1DATO_gpdato41_mask                                          (0x00000800)
#define  MIS_GPIO_GP1DATO_gpdato40_mask                                          (0x00000400)
#define  MIS_GPIO_GP1DATO_gpdato39_mask                                          (0x00000200)
#define  MIS_GPIO_GP1DATO_gpdato38_mask                                          (0x00000100)
#define  MIS_GPIO_GP1DATO_gpdato37_mask                                          (0x00000080)
#define  MIS_GPIO_GP1DATO_gpdato36_mask                                          (0x00000040)
#define  MIS_GPIO_GP1DATO_gpdato35_mask                                          (0x00000020)
#define  MIS_GPIO_GP1DATO_gpdato34_mask                                          (0x00000010)
#define  MIS_GPIO_GP1DATO_gpdato33_mask                                          (0x00000008)
#define  MIS_GPIO_GP1DATO_gpdato32_mask                                          (0x00000004)
#define  MIS_GPIO_GP1DATO_gpdato31_mask                                          (0x00000002)
#define  MIS_GPIO_GP1DATO_write_data_mask                                        (0x00000001)
#define  MIS_GPIO_GP1DATO_gpdato61(data)                                         (0x80000000&((data)<<31))
#define  MIS_GPIO_GP1DATO_gpdato60(data)                                         (0x40000000&((data)<<30))
#define  MIS_GPIO_GP1DATO_gpdato59(data)                                         (0x20000000&((data)<<29))
#define  MIS_GPIO_GP1DATO_gpdato58(data)                                         (0x10000000&((data)<<28))
#define  MIS_GPIO_GP1DATO_gpdato57(data)                                         (0x08000000&((data)<<27))
#define  MIS_GPIO_GP1DATO_gpdato56(data)                                         (0x04000000&((data)<<26))
#define  MIS_GPIO_GP1DATO_gpdato55(data)                                         (0x02000000&((data)<<25))
#define  MIS_GPIO_GP1DATO_gpdato54(data)                                         (0x01000000&((data)<<24))
#define  MIS_GPIO_GP1DATO_gpdato53(data)                                         (0x00800000&((data)<<23))
#define  MIS_GPIO_GP1DATO_gpdato52(data)                                         (0x00400000&((data)<<22))
#define  MIS_GPIO_GP1DATO_gpdato51(data)                                         (0x00200000&((data)<<21))
#define  MIS_GPIO_GP1DATO_gpdato50(data)                                         (0x00100000&((data)<<20))
#define  MIS_GPIO_GP1DATO_gpdato49(data)                                         (0x00080000&((data)<<19))
#define  MIS_GPIO_GP1DATO_gpdato48(data)                                         (0x00040000&((data)<<18))
#define  MIS_GPIO_GP1DATO_gpdato47(data)                                         (0x00020000&((data)<<17))
#define  MIS_GPIO_GP1DATO_gpdato46(data)                                         (0x00010000&((data)<<16))
#define  MIS_GPIO_GP1DATO_gpdato45(data)                                         (0x00008000&((data)<<15))
#define  MIS_GPIO_GP1DATO_gpdato44(data)                                         (0x00004000&((data)<<14))
#define  MIS_GPIO_GP1DATO_gpdato43(data)                                         (0x00002000&((data)<<13))
#define  MIS_GPIO_GP1DATO_gpdato42(data)                                         (0x00001000&((data)<<12))
#define  MIS_GPIO_GP1DATO_gpdato41(data)                                         (0x00000800&((data)<<11))
#define  MIS_GPIO_GP1DATO_gpdato40(data)                                         (0x00000400&((data)<<10))
#define  MIS_GPIO_GP1DATO_gpdato39(data)                                         (0x00000200&((data)<<9))
#define  MIS_GPIO_GP1DATO_gpdato38(data)                                         (0x00000100&((data)<<8))
#define  MIS_GPIO_GP1DATO_gpdato37(data)                                         (0x00000080&((data)<<7))
#define  MIS_GPIO_GP1DATO_gpdato36(data)                                         (0x00000040&((data)<<6))
#define  MIS_GPIO_GP1DATO_gpdato35(data)                                         (0x00000020&((data)<<5))
#define  MIS_GPIO_GP1DATO_gpdato34(data)                                         (0x00000010&((data)<<4))
#define  MIS_GPIO_GP1DATO_gpdato33(data)                                         (0x00000008&((data)<<3))
#define  MIS_GPIO_GP1DATO_gpdato32(data)                                         (0x00000004&((data)<<2))
#define  MIS_GPIO_GP1DATO_gpdato31(data)                                         (0x00000002&((data)<<1))
#define  MIS_GPIO_GP1DATO_write_data(data)                                       (0x00000001&(data))
#define  MIS_GPIO_GP1DATO_get_gpdato61(data)                                     ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP1DATO_get_gpdato60(data)                                     ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP1DATO_get_gpdato59(data)                                     ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP1DATO_get_gpdato58(data)                                     ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP1DATO_get_gpdato57(data)                                     ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP1DATO_get_gpdato56(data)                                     ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP1DATO_get_gpdato55(data)                                     ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP1DATO_get_gpdato54(data)                                     ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP1DATO_get_gpdato53(data)                                     ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP1DATO_get_gpdato52(data)                                     ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP1DATO_get_gpdato51(data)                                     ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP1DATO_get_gpdato50(data)                                     ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP1DATO_get_gpdato49(data)                                     ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP1DATO_get_gpdato48(data)                                     ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP1DATO_get_gpdato47(data)                                     ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP1DATO_get_gpdato46(data)                                     ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP1DATO_get_gpdato45(data)                                     ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP1DATO_get_gpdato44(data)                                     ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP1DATO_get_gpdato43(data)                                     ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP1DATO_get_gpdato42(data)                                     ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP1DATO_get_gpdato41(data)                                     ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP1DATO_get_gpdato40(data)                                     ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP1DATO_get_gpdato39(data)                                     ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP1DATO_get_gpdato38(data)                                     ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP1DATO_get_gpdato37(data)                                     ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP1DATO_get_gpdato36(data)                                     ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP1DATO_get_gpdato35(data)                                     ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP1DATO_get_gpdato34(data)                                     ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP1DATO_get_gpdato33(data)                                     ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP1DATO_get_gpdato32(data)                                     ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP1DATO_get_gpdato31(data)                                     ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP1DATO_get_write_data(data)                                   (0x00000001&(data))

#define  MIS_GPIO_GP2DATO                                                       0x1801BD20
#define  MIS_GPIO_GP2DATO_reg_addr                                               "0xB801BD20"
#define  MIS_GPIO_GP2DATO_reg                                                    0xB801BD20
#define  MIS_GPIO_GP2DATO_inst_addr                                              "0x0008"
#define  set_MIS_GPIO_GP2DATO_reg(data)                                          (*((volatile unsigned int*)MIS_GPIO_GP2DATO_reg)=data)
#define  get_MIS_GPIO_GP2DATO_reg                                                (*((volatile unsigned int*)MIS_GPIO_GP2DATO_reg))
#define  MIS_GPIO_GP2DATO_gpdato92_shift                                         (31)
#define  MIS_GPIO_GP2DATO_gpdato91_shift                                         (30)
#define  MIS_GPIO_GP2DATO_gpdato90_shift                                         (29)
#define  MIS_GPIO_GP2DATO_gpdato89_shift                                         (28)
#define  MIS_GPIO_GP2DATO_gpdato88_shift                                         (27)
#define  MIS_GPIO_GP2DATO_gpdato87_shift                                         (26)
#define  MIS_GPIO_GP2DATO_gpdato86_shift                                         (25)
#define  MIS_GPIO_GP2DATO_gpdato85_shift                                         (24)
#define  MIS_GPIO_GP2DATO_gpdato84_shift                                         (23)
#define  MIS_GPIO_GP2DATO_gpdato83_shift                                         (22)
#define  MIS_GPIO_GP2DATO_gpdato82_shift                                         (21)
#define  MIS_GPIO_GP2DATO_gpdato81_shift                                         (20)
#define  MIS_GPIO_GP2DATO_gpdato80_shift                                         (19)
#define  MIS_GPIO_GP2DATO_gpdato79_shift                                         (18)
#define  MIS_GPIO_GP2DATO_gpdato78_shift                                         (17)
#define  MIS_GPIO_GP2DATO_gpdato77_shift                                         (16)
#define  MIS_GPIO_GP2DATO_gpdato76_shift                                         (15)
#define  MIS_GPIO_GP2DATO_gpdato75_shift                                         (14)
#define  MIS_GPIO_GP2DATO_gpdato74_shift                                         (13)
#define  MIS_GPIO_GP2DATO_gpdato73_shift                                         (12)
#define  MIS_GPIO_GP2DATO_gpdato72_shift                                         (11)
#define  MIS_GPIO_GP2DATO_gpdato71_shift                                         (10)
#define  MIS_GPIO_GP2DATO_gpdato70_shift                                         (9)
#define  MIS_GPIO_GP2DATO_gpdato69_shift                                         (8)
#define  MIS_GPIO_GP2DATO_gpdato68_shift                                         (7)
#define  MIS_GPIO_GP2DATO_gpdato67_shift                                         (6)
#define  MIS_GPIO_GP2DATO_gpdato66_shift                                         (5)
#define  MIS_GPIO_GP2DATO_gpdato65_shift                                         (4)
#define  MIS_GPIO_GP2DATO_gpdato64_shift                                         (3)
#define  MIS_GPIO_GP2DATO_gpdato63_shift                                         (2)
#define  MIS_GPIO_GP2DATO_gpdato62_shift                                         (1)
#define  MIS_GPIO_GP2DATO_write_data_shift                                       (0)
#define  MIS_GPIO_GP2DATO_gpdato92_mask                                          (0x80000000)
#define  MIS_GPIO_GP2DATO_gpdato91_mask                                          (0x40000000)
#define  MIS_GPIO_GP2DATO_gpdato90_mask                                          (0x20000000)
#define  MIS_GPIO_GP2DATO_gpdato89_mask                                          (0x10000000)
#define  MIS_GPIO_GP2DATO_gpdato88_mask                                          (0x08000000)
#define  MIS_GPIO_GP2DATO_gpdato87_mask                                          (0x04000000)
#define  MIS_GPIO_GP2DATO_gpdato86_mask                                          (0x02000000)
#define  MIS_GPIO_GP2DATO_gpdato85_mask                                          (0x01000000)
#define  MIS_GPIO_GP2DATO_gpdato84_mask                                          (0x00800000)
#define  MIS_GPIO_GP2DATO_gpdato83_mask                                          (0x00400000)
#define  MIS_GPIO_GP2DATO_gpdato82_mask                                          (0x00200000)
#define  MIS_GPIO_GP2DATO_gpdato81_mask                                          (0x00100000)
#define  MIS_GPIO_GP2DATO_gpdato80_mask                                          (0x00080000)
#define  MIS_GPIO_GP2DATO_gpdato79_mask                                          (0x00040000)
#define  MIS_GPIO_GP2DATO_gpdato78_mask                                          (0x00020000)
#define  MIS_GPIO_GP2DATO_gpdato77_mask                                          (0x00010000)
#define  MIS_GPIO_GP2DATO_gpdato76_mask                                          (0x00008000)
#define  MIS_GPIO_GP2DATO_gpdato75_mask                                          (0x00004000)
#define  MIS_GPIO_GP2DATO_gpdato74_mask                                          (0x00002000)
#define  MIS_GPIO_GP2DATO_gpdato73_mask                                          (0x00001000)
#define  MIS_GPIO_GP2DATO_gpdato72_mask                                          (0x00000800)
#define  MIS_GPIO_GP2DATO_gpdato71_mask                                          (0x00000400)
#define  MIS_GPIO_GP2DATO_gpdato70_mask                                          (0x00000200)
#define  MIS_GPIO_GP2DATO_gpdato69_mask                                          (0x00000100)
#define  MIS_GPIO_GP2DATO_gpdato68_mask                                          (0x00000080)
#define  MIS_GPIO_GP2DATO_gpdato67_mask                                          (0x00000040)
#define  MIS_GPIO_GP2DATO_gpdato66_mask                                          (0x00000020)
#define  MIS_GPIO_GP2DATO_gpdato65_mask                                          (0x00000010)
#define  MIS_GPIO_GP2DATO_gpdato64_mask                                          (0x00000008)
#define  MIS_GPIO_GP2DATO_gpdato63_mask                                          (0x00000004)
#define  MIS_GPIO_GP2DATO_gpdato62_mask                                          (0x00000002)
#define  MIS_GPIO_GP2DATO_write_data_mask                                        (0x00000001)
#define  MIS_GPIO_GP2DATO_gpdato92(data)                                         (0x80000000&((data)<<31))
#define  MIS_GPIO_GP2DATO_gpdato91(data)                                         (0x40000000&((data)<<30))
#define  MIS_GPIO_GP2DATO_gpdato90(data)                                         (0x20000000&((data)<<29))
#define  MIS_GPIO_GP2DATO_gpdato89(data)                                         (0x10000000&((data)<<28))
#define  MIS_GPIO_GP2DATO_gpdato88(data)                                         (0x08000000&((data)<<27))
#define  MIS_GPIO_GP2DATO_gpdato87(data)                                         (0x04000000&((data)<<26))
#define  MIS_GPIO_GP2DATO_gpdato86(data)                                         (0x02000000&((data)<<25))
#define  MIS_GPIO_GP2DATO_gpdato85(data)                                         (0x01000000&((data)<<24))
#define  MIS_GPIO_GP2DATO_gpdato84(data)                                         (0x00800000&((data)<<23))
#define  MIS_GPIO_GP2DATO_gpdato83(data)                                         (0x00400000&((data)<<22))
#define  MIS_GPIO_GP2DATO_gpdato82(data)                                         (0x00200000&((data)<<21))
#define  MIS_GPIO_GP2DATO_gpdato81(data)                                         (0x00100000&((data)<<20))
#define  MIS_GPIO_GP2DATO_gpdato80(data)                                         (0x00080000&((data)<<19))
#define  MIS_GPIO_GP2DATO_gpdato79(data)                                         (0x00040000&((data)<<18))
#define  MIS_GPIO_GP2DATO_gpdato78(data)                                         (0x00020000&((data)<<17))
#define  MIS_GPIO_GP2DATO_gpdato77(data)                                         (0x00010000&((data)<<16))
#define  MIS_GPIO_GP2DATO_gpdato76(data)                                         (0x00008000&((data)<<15))
#define  MIS_GPIO_GP2DATO_gpdato75(data)                                         (0x00004000&((data)<<14))
#define  MIS_GPIO_GP2DATO_gpdato74(data)                                         (0x00002000&((data)<<13))
#define  MIS_GPIO_GP2DATO_gpdato73(data)                                         (0x00001000&((data)<<12))
#define  MIS_GPIO_GP2DATO_gpdato72(data)                                         (0x00000800&((data)<<11))
#define  MIS_GPIO_GP2DATO_gpdato71(data)                                         (0x00000400&((data)<<10))
#define  MIS_GPIO_GP2DATO_gpdato70(data)                                         (0x00000200&((data)<<9))
#define  MIS_GPIO_GP2DATO_gpdato69(data)                                         (0x00000100&((data)<<8))
#define  MIS_GPIO_GP2DATO_gpdato68(data)                                         (0x00000080&((data)<<7))
#define  MIS_GPIO_GP2DATO_gpdato67(data)                                         (0x00000040&((data)<<6))
#define  MIS_GPIO_GP2DATO_gpdato66(data)                                         (0x00000020&((data)<<5))
#define  MIS_GPIO_GP2DATO_gpdato65(data)                                         (0x00000010&((data)<<4))
#define  MIS_GPIO_GP2DATO_gpdato64(data)                                         (0x00000008&((data)<<3))
#define  MIS_GPIO_GP2DATO_gpdato63(data)                                         (0x00000004&((data)<<2))
#define  MIS_GPIO_GP2DATO_gpdato62(data)                                         (0x00000002&((data)<<1))
#define  MIS_GPIO_GP2DATO_write_data(data)                                       (0x00000001&(data))
#define  MIS_GPIO_GP2DATO_get_gpdato92(data)                                     ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP2DATO_get_gpdato91(data)                                     ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP2DATO_get_gpdato90(data)                                     ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP2DATO_get_gpdato89(data)                                     ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP2DATO_get_gpdato88(data)                                     ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP2DATO_get_gpdato87(data)                                     ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP2DATO_get_gpdato86(data)                                     ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP2DATO_get_gpdato85(data)                                     ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP2DATO_get_gpdato84(data)                                     ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP2DATO_get_gpdato83(data)                                     ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP2DATO_get_gpdato82(data)                                     ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP2DATO_get_gpdato81(data)                                     ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP2DATO_get_gpdato80(data)                                     ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP2DATO_get_gpdato79(data)                                     ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP2DATO_get_gpdato78(data)                                     ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP2DATO_get_gpdato77(data)                                     ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP2DATO_get_gpdato76(data)                                     ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP2DATO_get_gpdato75(data)                                     ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP2DATO_get_gpdato74(data)                                     ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP2DATO_get_gpdato73(data)                                     ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP2DATO_get_gpdato72(data)                                     ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP2DATO_get_gpdato71(data)                                     ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP2DATO_get_gpdato70(data)                                     ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP2DATO_get_gpdato69(data)                                     ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP2DATO_get_gpdato68(data)                                     ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP2DATO_get_gpdato67(data)                                     ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP2DATO_get_gpdato66(data)                                     ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP2DATO_get_gpdato65(data)                                     ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP2DATO_get_gpdato64(data)                                     ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP2DATO_get_gpdato63(data)                                     ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP2DATO_get_gpdato62(data)                                     ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP2DATO_get_write_data(data)                                   (0x00000001&(data))

#define  MIS_GPIO_GP3DATO                                                       0x1801BD24
#define  MIS_GPIO_GP3DATO_reg_addr                                               "0xB801BD24"
#define  MIS_GPIO_GP3DATO_reg                                                    0xB801BD24
#define  MIS_GPIO_GP3DATO_inst_addr                                              "0x0009"
#define  set_MIS_GPIO_GP3DATO_reg(data)                                          (*((volatile unsigned int*)MIS_GPIO_GP3DATO_reg)=data)
#define  get_MIS_GPIO_GP3DATO_reg                                                (*((volatile unsigned int*)MIS_GPIO_GP3DATO_reg))
#define  MIS_GPIO_GP3DATO_gpdato123_shift                                        (31)
#define  MIS_GPIO_GP3DATO_gpdato122_shift                                        (30)
#define  MIS_GPIO_GP3DATO_gpdato121_shift                                        (29)
#define  MIS_GPIO_GP3DATO_gpdato120_shift                                        (28)
#define  MIS_GPIO_GP3DATO_gpdato119_shift                                        (27)
#define  MIS_GPIO_GP3DATO_gpdato118_shift                                        (26)
#define  MIS_GPIO_GP3DATO_gpdato117_shift                                        (25)
#define  MIS_GPIO_GP3DATO_gpdato116_shift                                        (24)
#define  MIS_GPIO_GP3DATO_gpdato115_shift                                        (23)
#define  MIS_GPIO_GP3DATO_gpdato114_shift                                        (22)
#define  MIS_GPIO_GP3DATO_gpdato113_shift                                        (21)
#define  MIS_GPIO_GP3DATO_gpdato112_shift                                        (20)
#define  MIS_GPIO_GP3DATO_gpdato111_shift                                        (19)
#define  MIS_GPIO_GP3DATO_gpdato110_shift                                        (18)
#define  MIS_GPIO_GP3DATO_gpdato109_shift                                        (17)
#define  MIS_GPIO_GP3DATO_gpdato108_shift                                        (16)
#define  MIS_GPIO_GP3DATO_gpdato107_shift                                        (15)
#define  MIS_GPIO_GP3DATO_gpdato106_shift                                        (14)
#define  MIS_GPIO_GP3DATO_gpdato105_shift                                        (13)
#define  MIS_GPIO_GP3DATO_gpdato104_shift                                        (12)
#define  MIS_GPIO_GP3DATO_gpdato103_shift                                        (11)
#define  MIS_GPIO_GP3DATO_gpdato102_shift                                        (10)
#define  MIS_GPIO_GP3DATO_gpdato101_shift                                        (9)
#define  MIS_GPIO_GP3DATO_gpdato100_shift                                        (8)
#define  MIS_GPIO_GP3DATO_gpdato99_shift                                         (7)
#define  MIS_GPIO_GP3DATO_gpdato98_shift                                         (6)
#define  MIS_GPIO_GP3DATO_gpdato97_shift                                         (5)
#define  MIS_GPIO_GP3DATO_gpdato96_shift                                         (4)
#define  MIS_GPIO_GP3DATO_gpdato95_shift                                         (3)
#define  MIS_GPIO_GP3DATO_gpdato94_shift                                         (2)
#define  MIS_GPIO_GP3DATO_gpdato93_shift                                         (1)
#define  MIS_GPIO_GP3DATO_write_data_shift                                       (0)
#define  MIS_GPIO_GP3DATO_gpdato123_mask                                         (0x80000000)
#define  MIS_GPIO_GP3DATO_gpdato122_mask                                         (0x40000000)
#define  MIS_GPIO_GP3DATO_gpdato121_mask                                         (0x20000000)
#define  MIS_GPIO_GP3DATO_gpdato120_mask                                         (0x10000000)
#define  MIS_GPIO_GP3DATO_gpdato119_mask                                         (0x08000000)
#define  MIS_GPIO_GP3DATO_gpdato118_mask                                         (0x04000000)
#define  MIS_GPIO_GP3DATO_gpdato117_mask                                         (0x02000000)
#define  MIS_GPIO_GP3DATO_gpdato116_mask                                         (0x01000000)
#define  MIS_GPIO_GP3DATO_gpdato115_mask                                         (0x00800000)
#define  MIS_GPIO_GP3DATO_gpdato114_mask                                         (0x00400000)
#define  MIS_GPIO_GP3DATO_gpdato113_mask                                         (0x00200000)
#define  MIS_GPIO_GP3DATO_gpdato112_mask                                         (0x00100000)
#define  MIS_GPIO_GP3DATO_gpdato111_mask                                         (0x00080000)
#define  MIS_GPIO_GP3DATO_gpdato110_mask                                         (0x00040000)
#define  MIS_GPIO_GP3DATO_gpdato109_mask                                         (0x00020000)
#define  MIS_GPIO_GP3DATO_gpdato108_mask                                         (0x00010000)
#define  MIS_GPIO_GP3DATO_gpdato107_mask                                         (0x00008000)
#define  MIS_GPIO_GP3DATO_gpdato106_mask                                         (0x00004000)
#define  MIS_GPIO_GP3DATO_gpdato105_mask                                         (0x00002000)
#define  MIS_GPIO_GP3DATO_gpdato104_mask                                         (0x00001000)
#define  MIS_GPIO_GP3DATO_gpdato103_mask                                         (0x00000800)
#define  MIS_GPIO_GP3DATO_gpdato102_mask                                         (0x00000400)
#define  MIS_GPIO_GP3DATO_gpdato101_mask                                         (0x00000200)
#define  MIS_GPIO_GP3DATO_gpdato100_mask                                         (0x00000100)
#define  MIS_GPIO_GP3DATO_gpdato99_mask                                          (0x00000080)
#define  MIS_GPIO_GP3DATO_gpdato98_mask                                          (0x00000040)
#define  MIS_GPIO_GP3DATO_gpdato97_mask                                          (0x00000020)
#define  MIS_GPIO_GP3DATO_gpdato96_mask                                          (0x00000010)
#define  MIS_GPIO_GP3DATO_gpdato95_mask                                          (0x00000008)
#define  MIS_GPIO_GP3DATO_gpdato94_mask                                          (0x00000004)
#define  MIS_GPIO_GP3DATO_gpdato93_mask                                          (0x00000002)
#define  MIS_GPIO_GP3DATO_write_data_mask                                        (0x00000001)
#define  MIS_GPIO_GP3DATO_gpdato123(data)                                        (0x80000000&((data)<<31))
#define  MIS_GPIO_GP3DATO_gpdato122(data)                                        (0x40000000&((data)<<30))
#define  MIS_GPIO_GP3DATO_gpdato121(data)                                        (0x20000000&((data)<<29))
#define  MIS_GPIO_GP3DATO_gpdato120(data)                                        (0x10000000&((data)<<28))
#define  MIS_GPIO_GP3DATO_gpdato119(data)                                        (0x08000000&((data)<<27))
#define  MIS_GPIO_GP3DATO_gpdato118(data)                                        (0x04000000&((data)<<26))
#define  MIS_GPIO_GP3DATO_gpdato117(data)                                        (0x02000000&((data)<<25))
#define  MIS_GPIO_GP3DATO_gpdato116(data)                                        (0x01000000&((data)<<24))
#define  MIS_GPIO_GP3DATO_gpdato115(data)                                        (0x00800000&((data)<<23))
#define  MIS_GPIO_GP3DATO_gpdato114(data)                                        (0x00400000&((data)<<22))
#define  MIS_GPIO_GP3DATO_gpdato113(data)                                        (0x00200000&((data)<<21))
#define  MIS_GPIO_GP3DATO_gpdato112(data)                                        (0x00100000&((data)<<20))
#define  MIS_GPIO_GP3DATO_gpdato111(data)                                        (0x00080000&((data)<<19))
#define  MIS_GPIO_GP3DATO_gpdato110(data)                                        (0x00040000&((data)<<18))
#define  MIS_GPIO_GP3DATO_gpdato109(data)                                        (0x00020000&((data)<<17))
#define  MIS_GPIO_GP3DATO_gpdato108(data)                                        (0x00010000&((data)<<16))
#define  MIS_GPIO_GP3DATO_gpdato107(data)                                        (0x00008000&((data)<<15))
#define  MIS_GPIO_GP3DATO_gpdato106(data)                                        (0x00004000&((data)<<14))
#define  MIS_GPIO_GP3DATO_gpdato105(data)                                        (0x00002000&((data)<<13))
#define  MIS_GPIO_GP3DATO_gpdato104(data)                                        (0x00001000&((data)<<12))
#define  MIS_GPIO_GP3DATO_gpdato103(data)                                        (0x00000800&((data)<<11))
#define  MIS_GPIO_GP3DATO_gpdato102(data)                                        (0x00000400&((data)<<10))
#define  MIS_GPIO_GP3DATO_gpdato101(data)                                        (0x00000200&((data)<<9))
#define  MIS_GPIO_GP3DATO_gpdato100(data)                                        (0x00000100&((data)<<8))
#define  MIS_GPIO_GP3DATO_gpdato99(data)                                         (0x00000080&((data)<<7))
#define  MIS_GPIO_GP3DATO_gpdato98(data)                                         (0x00000040&((data)<<6))
#define  MIS_GPIO_GP3DATO_gpdato97(data)                                         (0x00000020&((data)<<5))
#define  MIS_GPIO_GP3DATO_gpdato96(data)                                         (0x00000010&((data)<<4))
#define  MIS_GPIO_GP3DATO_gpdato95(data)                                         (0x00000008&((data)<<3))
#define  MIS_GPIO_GP3DATO_gpdato94(data)                                         (0x00000004&((data)<<2))
#define  MIS_GPIO_GP3DATO_gpdato93(data)                                         (0x00000002&((data)<<1))
#define  MIS_GPIO_GP3DATO_write_data(data)                                       (0x00000001&(data))
#define  MIS_GPIO_GP3DATO_get_gpdato123(data)                                    ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP3DATO_get_gpdato122(data)                                    ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP3DATO_get_gpdato121(data)                                    ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP3DATO_get_gpdato120(data)                                    ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP3DATO_get_gpdato119(data)                                    ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP3DATO_get_gpdato118(data)                                    ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP3DATO_get_gpdato117(data)                                    ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP3DATO_get_gpdato116(data)                                    ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP3DATO_get_gpdato115(data)                                    ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP3DATO_get_gpdato114(data)                                    ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP3DATO_get_gpdato113(data)                                    ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP3DATO_get_gpdato112(data)                                    ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP3DATO_get_gpdato111(data)                                    ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP3DATO_get_gpdato110(data)                                    ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP3DATO_get_gpdato109(data)                                    ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP3DATO_get_gpdato108(data)                                    ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP3DATO_get_gpdato107(data)                                    ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP3DATO_get_gpdato106(data)                                    ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP3DATO_get_gpdato105(data)                                    ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP3DATO_get_gpdato104(data)                                    ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP3DATO_get_gpdato103(data)                                    ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP3DATO_get_gpdato102(data)                                    ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP3DATO_get_gpdato101(data)                                    ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP3DATO_get_gpdato100(data)                                    ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP3DATO_get_gpdato99(data)                                     ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP3DATO_get_gpdato98(data)                                     ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP3DATO_get_gpdato97(data)                                     ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP3DATO_get_gpdato96(data)                                     ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP3DATO_get_gpdato95(data)                                     ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP3DATO_get_gpdato94(data)                                     ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP3DATO_get_gpdato93(data)                                     ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP3DATO_get_write_data(data)                                   (0x00000001&(data))

#define  MIS_GPIO_GP4DATO                                                       0x1801BD28
#define  MIS_GPIO_GP4DATO_reg_addr                                               "0xB801BD28"
#define  MIS_GPIO_GP4DATO_reg                                                    0xB801BD28
#define  MIS_GPIO_GP4DATO_inst_addr                                              "0x000A"
#define  set_MIS_GPIO_GP4DATO_reg(data)                                          (*((volatile unsigned int*)MIS_GPIO_GP4DATO_reg)=data)
#define  get_MIS_GPIO_GP4DATO_reg                                                (*((volatile unsigned int*)MIS_GPIO_GP4DATO_reg))
#define  MIS_GPIO_GP4DATO_gpdato154_shift                                        (31)
#define  MIS_GPIO_GP4DATO_gpdato153_shift                                        (30)
#define  MIS_GPIO_GP4DATO_gpdato152_shift                                        (29)
#define  MIS_GPIO_GP4DATO_gpdato151_shift                                        (28)
#define  MIS_GPIO_GP4DATO_gpdato150_shift                                        (27)
#define  MIS_GPIO_GP4DATO_gpdato149_shift                                        (26)
#define  MIS_GPIO_GP4DATO_gpdato148_shift                                        (25)
#define  MIS_GPIO_GP4DATO_gpdato147_shift                                        (24)
#define  MIS_GPIO_GP4DATO_gpdato146_shift                                        (23)
#define  MIS_GPIO_GP4DATO_gpdato145_shift                                        (22)
#define  MIS_GPIO_GP4DATO_gpdato144_shift                                        (21)
#define  MIS_GPIO_GP4DATO_gpdato143_shift                                        (20)
#define  MIS_GPIO_GP4DATO_gpdato142_shift                                        (19)
#define  MIS_GPIO_GP4DATO_gpdato141_shift                                        (18)
#define  MIS_GPIO_GP4DATO_gpdato140_shift                                        (17)
#define  MIS_GPIO_GP4DATO_gpdato139_shift                                        (16)
#define  MIS_GPIO_GP4DATO_gpdato138_shift                                        (15)
#define  MIS_GPIO_GP4DATO_gpdato137_shift                                        (14)
#define  MIS_GPIO_GP4DATO_gpdato136_shift                                        (13)
#define  MIS_GPIO_GP4DATO_gpdato135_shift                                        (12)
#define  MIS_GPIO_GP4DATO_gpdato134_shift                                        (11)
#define  MIS_GPIO_GP4DATO_gpdato133_shift                                        (10)
#define  MIS_GPIO_GP4DATO_gpdato132_shift                                        (9)
#define  MIS_GPIO_GP4DATO_gpdato131_shift                                        (8)
#define  MIS_GPIO_GP4DATO_gpdato130_shift                                        (7)
#define  MIS_GPIO_GP4DATO_gpdato129_shift                                        (6)
#define  MIS_GPIO_GP4DATO_gpdato128_shift                                        (5)
#define  MIS_GPIO_GP4DATO_gpdato127_shift                                        (4)
#define  MIS_GPIO_GP4DATO_gpdato126_shift                                        (3)
#define  MIS_GPIO_GP4DATO_gpdato125_shift                                        (2)
#define  MIS_GPIO_GP4DATO_gpdato124_shift                                        (1)
#define  MIS_GPIO_GP4DATO_write_data_shift                                       (0)
#define  MIS_GPIO_GP4DATO_gpdato154_mask                                         (0x80000000)
#define  MIS_GPIO_GP4DATO_gpdato153_mask                                         (0x40000000)
#define  MIS_GPIO_GP4DATO_gpdato152_mask                                         (0x20000000)
#define  MIS_GPIO_GP4DATO_gpdato151_mask                                         (0x10000000)
#define  MIS_GPIO_GP4DATO_gpdato150_mask                                         (0x08000000)
#define  MIS_GPIO_GP4DATO_gpdato149_mask                                         (0x04000000)
#define  MIS_GPIO_GP4DATO_gpdato148_mask                                         (0x02000000)
#define  MIS_GPIO_GP4DATO_gpdato147_mask                                         (0x01000000)
#define  MIS_GPIO_GP4DATO_gpdato146_mask                                         (0x00800000)
#define  MIS_GPIO_GP4DATO_gpdato145_mask                                         (0x00400000)
#define  MIS_GPIO_GP4DATO_gpdato144_mask                                         (0x00200000)
#define  MIS_GPIO_GP4DATO_gpdato143_mask                                         (0x00100000)
#define  MIS_GPIO_GP4DATO_gpdato142_mask                                         (0x00080000)
#define  MIS_GPIO_GP4DATO_gpdato141_mask                                         (0x00040000)
#define  MIS_GPIO_GP4DATO_gpdato140_mask                                         (0x00020000)
#define  MIS_GPIO_GP4DATO_gpdato139_mask                                         (0x00010000)
#define  MIS_GPIO_GP4DATO_gpdato138_mask                                         (0x00008000)
#define  MIS_GPIO_GP4DATO_gpdato137_mask                                         (0x00004000)
#define  MIS_GPIO_GP4DATO_gpdato136_mask                                         (0x00002000)
#define  MIS_GPIO_GP4DATO_gpdato135_mask                                         (0x00001000)
#define  MIS_GPIO_GP4DATO_gpdato134_mask                                         (0x00000800)
#define  MIS_GPIO_GP4DATO_gpdato133_mask                                         (0x00000400)
#define  MIS_GPIO_GP4DATO_gpdato132_mask                                         (0x00000200)
#define  MIS_GPIO_GP4DATO_gpdato131_mask                                         (0x00000100)
#define  MIS_GPIO_GP4DATO_gpdato130_mask                                         (0x00000080)
#define  MIS_GPIO_GP4DATO_gpdato129_mask                                         (0x00000040)
#define  MIS_GPIO_GP4DATO_gpdato128_mask                                         (0x00000020)
#define  MIS_GPIO_GP4DATO_gpdato127_mask                                         (0x00000010)
#define  MIS_GPIO_GP4DATO_gpdato126_mask                                         (0x00000008)
#define  MIS_GPIO_GP4DATO_gpdato125_mask                                         (0x00000004)
#define  MIS_GPIO_GP4DATO_gpdato124_mask                                         (0x00000002)
#define  MIS_GPIO_GP4DATO_write_data_mask                                        (0x00000001)
#define  MIS_GPIO_GP4DATO_gpdato154(data)                                        (0x80000000&((data)<<31))
#define  MIS_GPIO_GP4DATO_gpdato153(data)                                        (0x40000000&((data)<<30))
#define  MIS_GPIO_GP4DATO_gpdato152(data)                                        (0x20000000&((data)<<29))
#define  MIS_GPIO_GP4DATO_gpdato151(data)                                        (0x10000000&((data)<<28))
#define  MIS_GPIO_GP4DATO_gpdato150(data)                                        (0x08000000&((data)<<27))
#define  MIS_GPIO_GP4DATO_gpdato149(data)                                        (0x04000000&((data)<<26))
#define  MIS_GPIO_GP4DATO_gpdato148(data)                                        (0x02000000&((data)<<25))
#define  MIS_GPIO_GP4DATO_gpdato147(data)                                        (0x01000000&((data)<<24))
#define  MIS_GPIO_GP4DATO_gpdato146(data)                                        (0x00800000&((data)<<23))
#define  MIS_GPIO_GP4DATO_gpdato145(data)                                        (0x00400000&((data)<<22))
#define  MIS_GPIO_GP4DATO_gpdato144(data)                                        (0x00200000&((data)<<21))
#define  MIS_GPIO_GP4DATO_gpdato143(data)                                        (0x00100000&((data)<<20))
#define  MIS_GPIO_GP4DATO_gpdato142(data)                                        (0x00080000&((data)<<19))
#define  MIS_GPIO_GP4DATO_gpdato141(data)                                        (0x00040000&((data)<<18))
#define  MIS_GPIO_GP4DATO_gpdato140(data)                                        (0x00020000&((data)<<17))
#define  MIS_GPIO_GP4DATO_gpdato139(data)                                        (0x00010000&((data)<<16))
#define  MIS_GPIO_GP4DATO_gpdato138(data)                                        (0x00008000&((data)<<15))
#define  MIS_GPIO_GP4DATO_gpdato137(data)                                        (0x00004000&((data)<<14))
#define  MIS_GPIO_GP4DATO_gpdato136(data)                                        (0x00002000&((data)<<13))
#define  MIS_GPIO_GP4DATO_gpdato135(data)                                        (0x00001000&((data)<<12))
#define  MIS_GPIO_GP4DATO_gpdato134(data)                                        (0x00000800&((data)<<11))
#define  MIS_GPIO_GP4DATO_gpdato133(data)                                        (0x00000400&((data)<<10))
#define  MIS_GPIO_GP4DATO_gpdato132(data)                                        (0x00000200&((data)<<9))
#define  MIS_GPIO_GP4DATO_gpdato131(data)                                        (0x00000100&((data)<<8))
#define  MIS_GPIO_GP4DATO_gpdato130(data)                                        (0x00000080&((data)<<7))
#define  MIS_GPIO_GP4DATO_gpdato129(data)                                        (0x00000040&((data)<<6))
#define  MIS_GPIO_GP4DATO_gpdato128(data)                                        (0x00000020&((data)<<5))
#define  MIS_GPIO_GP4DATO_gpdato127(data)                                        (0x00000010&((data)<<4))
#define  MIS_GPIO_GP4DATO_gpdato126(data)                                        (0x00000008&((data)<<3))
#define  MIS_GPIO_GP4DATO_gpdato125(data)                                        (0x00000004&((data)<<2))
#define  MIS_GPIO_GP4DATO_gpdato124(data)                                        (0x00000002&((data)<<1))
#define  MIS_GPIO_GP4DATO_write_data(data)                                       (0x00000001&(data))
#define  MIS_GPIO_GP4DATO_get_gpdato154(data)                                    ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP4DATO_get_gpdato153(data)                                    ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP4DATO_get_gpdato152(data)                                    ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP4DATO_get_gpdato151(data)                                    ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP4DATO_get_gpdato150(data)                                    ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP4DATO_get_gpdato149(data)                                    ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP4DATO_get_gpdato148(data)                                    ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP4DATO_get_gpdato147(data)                                    ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP4DATO_get_gpdato146(data)                                    ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP4DATO_get_gpdato145(data)                                    ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP4DATO_get_gpdato144(data)                                    ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP4DATO_get_gpdato143(data)                                    ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP4DATO_get_gpdato142(data)                                    ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP4DATO_get_gpdato141(data)                                    ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP4DATO_get_gpdato140(data)                                    ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP4DATO_get_gpdato139(data)                                    ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP4DATO_get_gpdato138(data)                                    ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP4DATO_get_gpdato137(data)                                    ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP4DATO_get_gpdato136(data)                                    ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP4DATO_get_gpdato135(data)                                    ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP4DATO_get_gpdato134(data)                                    ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP4DATO_get_gpdato133(data)                                    ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP4DATO_get_gpdato132(data)                                    ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP4DATO_get_gpdato131(data)                                    ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP4DATO_get_gpdato130(data)                                    ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP4DATO_get_gpdato129(data)                                    ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP4DATO_get_gpdato128(data)                                    ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP4DATO_get_gpdato127(data)                                    ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP4DATO_get_gpdato126(data)                                    ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP4DATO_get_gpdato125(data)                                    ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP4DATO_get_gpdato124(data)                                    ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP4DATO_get_write_data(data)                                   (0x00000001&(data))

#define  MIS_GPIO_GP5DATO                                                       0x1801BD2C
#define  MIS_GPIO_GP5DATO_reg_addr                                               "0xB801BD2C"
#define  MIS_GPIO_GP5DATO_reg                                                    0xB801BD2C
#define  MIS_GPIO_GP5DATO_inst_addr                                              "0x000B"
#define  set_MIS_GPIO_GP5DATO_reg(data)                                          (*((volatile unsigned int*)MIS_GPIO_GP5DATO_reg)=data)
#define  get_MIS_GPIO_GP5DATO_reg                                                (*((volatile unsigned int*)MIS_GPIO_GP5DATO_reg))
#define  MIS_GPIO_GP5DATO_gpdato160_shift                                        (6)
#define  MIS_GPIO_GP5DATO_gpdato159_shift                                        (5)
#define  MIS_GPIO_GP5DATO_gpdato158_shift                                        (4)
#define  MIS_GPIO_GP5DATO_gpdato157_shift                                        (3)
#define  MIS_GPIO_GP5DATO_gpdato156_shift                                        (2)
#define  MIS_GPIO_GP5DATO_gpdato155_shift                                        (1)
#define  MIS_GPIO_GP5DATO_write_data_shift                                       (0)
#define  MIS_GPIO_GP5DATO_gpdato160_mask                                         (0x00000040)
#define  MIS_GPIO_GP5DATO_gpdato159_mask                                         (0x00000020)
#define  MIS_GPIO_GP5DATO_gpdato158_mask                                         (0x00000010)
#define  MIS_GPIO_GP5DATO_gpdato157_mask                                         (0x00000008)
#define  MIS_GPIO_GP5DATO_gpdato156_mask                                         (0x00000004)
#define  MIS_GPIO_GP5DATO_gpdato155_mask                                         (0x00000002)
#define  MIS_GPIO_GP5DATO_write_data_mask                                        (0x00000001)
#define  MIS_GPIO_GP5DATO_gpdato160(data)                                        (0x00000040&((data)<<6))
#define  MIS_GPIO_GP5DATO_gpdato159(data)                                        (0x00000020&((data)<<5))
#define  MIS_GPIO_GP5DATO_gpdato158(data)                                        (0x00000010&((data)<<4))
#define  MIS_GPIO_GP5DATO_gpdato157(data)                                        (0x00000008&((data)<<3))
#define  MIS_GPIO_GP5DATO_gpdato156(data)                                        (0x00000004&((data)<<2))
#define  MIS_GPIO_GP5DATO_gpdato155(data)                                        (0x00000002&((data)<<1))
#define  MIS_GPIO_GP5DATO_write_data(data)                                       (0x00000001&(data))
#define  MIS_GPIO_GP5DATO_get_gpdato160(data)                                    ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP5DATO_get_gpdato159(data)                                    ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP5DATO_get_gpdato158(data)                                    ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP5DATO_get_gpdato157(data)                                    ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP5DATO_get_gpdato156(data)                                    ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP5DATO_get_gpdato155(data)                                    ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP5DATO_get_write_data(data)                                   (0x00000001&(data))

#define  MIS_GPIO_GP0DATI                                                       0x1801BD30
#define  MIS_GPIO_GP0DATI_reg_addr                                               "0xB801BD30"
#define  MIS_GPIO_GP0DATI_reg                                                    0xB801BD30
#define  MIS_GPIO_GP0DATI_inst_addr                                              "0x000C"
#define  set_MIS_GPIO_GP0DATI_reg(data)                                          (*((volatile unsigned int*)MIS_GPIO_GP0DATI_reg)=data)
#define  get_MIS_GPIO_GP0DATI_reg                                                (*((volatile unsigned int*)MIS_GPIO_GP0DATI_reg))
#define  MIS_GPIO_GP0DATI_gpdati_shift                                           (1)
#define  MIS_GPIO_GP0DATI_gpdati_mask                                            (0xFFFFFFFE)
#define  MIS_GPIO_GP0DATI_gpdati(data)                                           (0xFFFFFFFE&((data)<<1))
#define  MIS_GPIO_GP0DATI_get_gpdati(data)                                       ((0xFFFFFFFE&(data))>>1)

#define  MIS_GPIO_GP1DATI                                                       0x1801BD34
#define  MIS_GPIO_GP1DATI_reg_addr                                               "0xB801BD34"
#define  MIS_GPIO_GP1DATI_reg                                                    0xB801BD34
#define  MIS_GPIO_GP1DATI_inst_addr                                              "0x000D"
#define  set_MIS_GPIO_GP1DATI_reg(data)                                          (*((volatile unsigned int*)MIS_GPIO_GP1DATI_reg)=data)
#define  get_MIS_GPIO_GP1DATI_reg                                                (*((volatile unsigned int*)MIS_GPIO_GP1DATI_reg))
#define  MIS_GPIO_GP1DATI_gpdati_shift                                           (1)
#define  MIS_GPIO_GP1DATI_gpdati_mask                                            (0xFFFFFFFE)
#define  MIS_GPIO_GP1DATI_gpdati(data)                                           (0xFFFFFFFE&((data)<<1))
#define  MIS_GPIO_GP1DATI_get_gpdati(data)                                       ((0xFFFFFFFE&(data))>>1)

#define  MIS_GPIO_GP2DATI                                                       0x1801BD38
#define  MIS_GPIO_GP2DATI_reg_addr                                               "0xB801BD38"
#define  MIS_GPIO_GP2DATI_reg                                                    0xB801BD38
#define  MIS_GPIO_GP2DATI_inst_addr                                              "0x000E"
#define  set_MIS_GPIO_GP2DATI_reg(data)                                          (*((volatile unsigned int*)MIS_GPIO_GP2DATI_reg)=data)
#define  get_MIS_GPIO_GP2DATI_reg                                                (*((volatile unsigned int*)MIS_GPIO_GP2DATI_reg))
#define  MIS_GPIO_GP2DATI_gpdati_shift                                           (1)
#define  MIS_GPIO_GP2DATI_gpdati_mask                                            (0xFFFFFFFE)
#define  MIS_GPIO_GP2DATI_gpdati(data)                                           (0xFFFFFFFE&((data)<<1))
#define  MIS_GPIO_GP2DATI_get_gpdati(data)                                       ((0xFFFFFFFE&(data))>>1)

#define  MIS_GPIO_GP3DATI                                                       0x1801BD3C
#define  MIS_GPIO_GP3DATI_reg_addr                                               "0xB801BD3C"
#define  MIS_GPIO_GP3DATI_reg                                                    0xB801BD3C
#define  MIS_GPIO_GP3DATI_inst_addr                                              "0x000F"
#define  set_MIS_GPIO_GP3DATI_reg(data)                                          (*((volatile unsigned int*)MIS_GPIO_GP3DATI_reg)=data)
#define  get_MIS_GPIO_GP3DATI_reg                                                (*((volatile unsigned int*)MIS_GPIO_GP3DATI_reg))
#define  MIS_GPIO_GP3DATI_gpdati_shift                                           (1)
#define  MIS_GPIO_GP3DATI_gpdati_mask                                            (0xFFFFFFFE)
#define  MIS_GPIO_GP3DATI_gpdati(data)                                           (0xFFFFFFFE&((data)<<1))
#define  MIS_GPIO_GP3DATI_get_gpdati(data)                                       ((0xFFFFFFFE&(data))>>1)

#define  MIS_GPIO_GP4DATI                                                       0x1801BD40
#define  MIS_GPIO_GP4DATI_reg_addr                                               "0xB801BD40"
#define  MIS_GPIO_GP4DATI_reg                                                    0xB801BD40
#define  MIS_GPIO_GP4DATI_inst_addr                                              "0x0010"
#define  set_MIS_GPIO_GP4DATI_reg(data)                                          (*((volatile unsigned int*)MIS_GPIO_GP4DATI_reg)=data)
#define  get_MIS_GPIO_GP4DATI_reg                                                (*((volatile unsigned int*)MIS_GPIO_GP4DATI_reg))
#define  MIS_GPIO_GP4DATI_gpdati_shift                                           (1)
#define  MIS_GPIO_GP4DATI_gpdati_mask                                            (0xFFFFFFFE)
#define  MIS_GPIO_GP4DATI_gpdati(data)                                           (0xFFFFFFFE&((data)<<1))
#define  MIS_GPIO_GP4DATI_get_gpdati(data)                                       ((0xFFFFFFFE&(data))>>1)

#define  MIS_GPIO_GP5DATI                                                       0x1801BD44
#define  MIS_GPIO_GP5DATI_reg_addr                                               "0xB801BD44"
#define  MIS_GPIO_GP5DATI_reg                                                    0xB801BD44
#define  MIS_GPIO_GP5DATI_inst_addr                                              "0x0011"
#define  set_MIS_GPIO_GP5DATI_reg(data)                                          (*((volatile unsigned int*)MIS_GPIO_GP5DATI_reg)=data)
#define  get_MIS_GPIO_GP5DATI_reg                                                (*((volatile unsigned int*)MIS_GPIO_GP5DATI_reg))
#define  MIS_GPIO_GP5DATI_gpdati_shift                                           (1)
#define  MIS_GPIO_GP5DATI_gpdati_mask                                            (0x0000007E)
#define  MIS_GPIO_GP5DATI_gpdati(data)                                           (0x0000007E&((data)<<1))
#define  MIS_GPIO_GP5DATI_get_gpdati(data)                                       ((0x0000007E&(data))>>1)

#define  MIS_GPIO_GP0IE                                                         0x1801BD48
#define  MIS_GPIO_GP0IE_reg_addr                                                 "0xB801BD48"
#define  MIS_GPIO_GP0IE_reg                                                      0xB801BD48
#define  MIS_GPIO_GP0IE_inst_addr                                                "0x0012"
#define  set_MIS_GPIO_GP0IE_reg(data)                                            (*((volatile unsigned int*)MIS_GPIO_GP0IE_reg)=data)
#define  get_MIS_GPIO_GP0IE_reg                                                  (*((volatile unsigned int*)MIS_GPIO_GP0IE_reg))
#define  MIS_GPIO_GP0IE_gp30_shift                                               (31)
#define  MIS_GPIO_GP0IE_gp29_shift                                               (30)
#define  MIS_GPIO_GP0IE_gp28_shift                                               (29)
#define  MIS_GPIO_GP0IE_gp27_shift                                               (28)
#define  MIS_GPIO_GP0IE_gp26_shift                                               (27)
#define  MIS_GPIO_GP0IE_gp25_shift                                               (26)
#define  MIS_GPIO_GP0IE_gp24_shift                                               (25)
#define  MIS_GPIO_GP0IE_gp23_shift                                               (24)
#define  MIS_GPIO_GP0IE_gp22_shift                                               (23)
#define  MIS_GPIO_GP0IE_gp21_shift                                               (22)
#define  MIS_GPIO_GP0IE_gp20_shift                                               (21)
#define  MIS_GPIO_GP0IE_gp19_shift                                               (20)
#define  MIS_GPIO_GP0IE_gp18_shift                                               (19)
#define  MIS_GPIO_GP0IE_gp17_shift                                               (18)
#define  MIS_GPIO_GP0IE_gp16_shift                                               (17)
#define  MIS_GPIO_GP0IE_gp15_shift                                               (16)
#define  MIS_GPIO_GP0IE_gp14_shift                                               (15)
#define  MIS_GPIO_GP0IE_gp13_shift                                               (14)
#define  MIS_GPIO_GP0IE_gp12_shift                                               (13)
#define  MIS_GPIO_GP0IE_gp11_shift                                               (12)
#define  MIS_GPIO_GP0IE_gp10_shift                                               (11)
#define  MIS_GPIO_GP0IE_gp9_shift                                                (10)
#define  MIS_GPIO_GP0IE_gp8_shift                                                (9)
#define  MIS_GPIO_GP0IE_gp7_shift                                                (8)
#define  MIS_GPIO_GP0IE_gp6_shift                                                (7)
#define  MIS_GPIO_GP0IE_gp5_shift                                                (6)
#define  MIS_GPIO_GP0IE_gp4_shift                                                (5)
#define  MIS_GPIO_GP0IE_gp3_shift                                                (4)
#define  MIS_GPIO_GP0IE_gp2_shift                                                (3)
#define  MIS_GPIO_GP0IE_gp1_shift                                                (2)
#define  MIS_GPIO_GP0IE_gp0_shift                                                (1)
#define  MIS_GPIO_GP0IE_write_data_shift                                         (0)
#define  MIS_GPIO_GP0IE_gp30_mask                                                (0x80000000)
#define  MIS_GPIO_GP0IE_gp29_mask                                                (0x40000000)
#define  MIS_GPIO_GP0IE_gp28_mask                                                (0x20000000)
#define  MIS_GPIO_GP0IE_gp27_mask                                                (0x10000000)
#define  MIS_GPIO_GP0IE_gp26_mask                                                (0x08000000)
#define  MIS_GPIO_GP0IE_gp25_mask                                                (0x04000000)
#define  MIS_GPIO_GP0IE_gp24_mask                                                (0x02000000)
#define  MIS_GPIO_GP0IE_gp23_mask                                                (0x01000000)
#define  MIS_GPIO_GP0IE_gp22_mask                                                (0x00800000)
#define  MIS_GPIO_GP0IE_gp21_mask                                                (0x00400000)
#define  MIS_GPIO_GP0IE_gp20_mask                                                (0x00200000)
#define  MIS_GPIO_GP0IE_gp19_mask                                                (0x00100000)
#define  MIS_GPIO_GP0IE_gp18_mask                                                (0x00080000)
#define  MIS_GPIO_GP0IE_gp17_mask                                                (0x00040000)
#define  MIS_GPIO_GP0IE_gp16_mask                                                (0x00020000)
#define  MIS_GPIO_GP0IE_gp15_mask                                                (0x00010000)
#define  MIS_GPIO_GP0IE_gp14_mask                                                (0x00008000)
#define  MIS_GPIO_GP0IE_gp13_mask                                                (0x00004000)
#define  MIS_GPIO_GP0IE_gp12_mask                                                (0x00002000)
#define  MIS_GPIO_GP0IE_gp11_mask                                                (0x00001000)
#define  MIS_GPIO_GP0IE_gp10_mask                                                (0x00000800)
#define  MIS_GPIO_GP0IE_gp9_mask                                                 (0x00000400)
#define  MIS_GPIO_GP0IE_gp8_mask                                                 (0x00000200)
#define  MIS_GPIO_GP0IE_gp7_mask                                                 (0x00000100)
#define  MIS_GPIO_GP0IE_gp6_mask                                                 (0x00000080)
#define  MIS_GPIO_GP0IE_gp5_mask                                                 (0x00000040)
#define  MIS_GPIO_GP0IE_gp4_mask                                                 (0x00000020)
#define  MIS_GPIO_GP0IE_gp3_mask                                                 (0x00000010)
#define  MIS_GPIO_GP0IE_gp2_mask                                                 (0x00000008)
#define  MIS_GPIO_GP0IE_gp1_mask                                                 (0x00000004)
#define  MIS_GPIO_GP0IE_gp0_mask                                                 (0x00000002)
#define  MIS_GPIO_GP0IE_write_data_mask                                          (0x00000001)
#define  MIS_GPIO_GP0IE_gp30(data)                                               (0x80000000&((data)<<31))
#define  MIS_GPIO_GP0IE_gp29(data)                                               (0x40000000&((data)<<30))
#define  MIS_GPIO_GP0IE_gp28(data)                                               (0x20000000&((data)<<29))
#define  MIS_GPIO_GP0IE_gp27(data)                                               (0x10000000&((data)<<28))
#define  MIS_GPIO_GP0IE_gp26(data)                                               (0x08000000&((data)<<27))
#define  MIS_GPIO_GP0IE_gp25(data)                                               (0x04000000&((data)<<26))
#define  MIS_GPIO_GP0IE_gp24(data)                                               (0x02000000&((data)<<25))
#define  MIS_GPIO_GP0IE_gp23(data)                                               (0x01000000&((data)<<24))
#define  MIS_GPIO_GP0IE_gp22(data)                                               (0x00800000&((data)<<23))
#define  MIS_GPIO_GP0IE_gp21(data)                                               (0x00400000&((data)<<22))
#define  MIS_GPIO_GP0IE_gp20(data)                                               (0x00200000&((data)<<21))
#define  MIS_GPIO_GP0IE_gp19(data)                                               (0x00100000&((data)<<20))
#define  MIS_GPIO_GP0IE_gp18(data)                                               (0x00080000&((data)<<19))
#define  MIS_GPIO_GP0IE_gp17(data)                                               (0x00040000&((data)<<18))
#define  MIS_GPIO_GP0IE_gp16(data)                                               (0x00020000&((data)<<17))
#define  MIS_GPIO_GP0IE_gp15(data)                                               (0x00010000&((data)<<16))
#define  MIS_GPIO_GP0IE_gp14(data)                                               (0x00008000&((data)<<15))
#define  MIS_GPIO_GP0IE_gp13(data)                                               (0x00004000&((data)<<14))
#define  MIS_GPIO_GP0IE_gp12(data)                                               (0x00002000&((data)<<13))
#define  MIS_GPIO_GP0IE_gp11(data)                                               (0x00001000&((data)<<12))
#define  MIS_GPIO_GP0IE_gp10(data)                                               (0x00000800&((data)<<11))
#define  MIS_GPIO_GP0IE_gp9(data)                                                (0x00000400&((data)<<10))
#define  MIS_GPIO_GP0IE_gp8(data)                                                (0x00000200&((data)<<9))
#define  MIS_GPIO_GP0IE_gp7(data)                                                (0x00000100&((data)<<8))
#define  MIS_GPIO_GP0IE_gp6(data)                                                (0x00000080&((data)<<7))
#define  MIS_GPIO_GP0IE_gp5(data)                                                (0x00000040&((data)<<6))
#define  MIS_GPIO_GP0IE_gp4(data)                                                (0x00000020&((data)<<5))
#define  MIS_GPIO_GP0IE_gp3(data)                                                (0x00000010&((data)<<4))
#define  MIS_GPIO_GP0IE_gp2(data)                                                (0x00000008&((data)<<3))
#define  MIS_GPIO_GP0IE_gp1(data)                                                (0x00000004&((data)<<2))
#define  MIS_GPIO_GP0IE_gp0(data)                                                (0x00000002&((data)<<1))
#define  MIS_GPIO_GP0IE_write_data(data)                                         (0x00000001&(data))
#define  MIS_GPIO_GP0IE_get_gp30(data)                                           ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP0IE_get_gp29(data)                                           ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP0IE_get_gp28(data)                                           ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP0IE_get_gp27(data)                                           ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP0IE_get_gp26(data)                                           ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP0IE_get_gp25(data)                                           ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP0IE_get_gp24(data)                                           ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP0IE_get_gp23(data)                                           ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP0IE_get_gp22(data)                                           ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP0IE_get_gp21(data)                                           ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP0IE_get_gp20(data)                                           ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP0IE_get_gp19(data)                                           ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP0IE_get_gp18(data)                                           ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP0IE_get_gp17(data)                                           ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP0IE_get_gp16(data)                                           ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP0IE_get_gp15(data)                                           ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP0IE_get_gp14(data)                                           ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP0IE_get_gp13(data)                                           ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP0IE_get_gp12(data)                                           ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP0IE_get_gp11(data)                                           ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP0IE_get_gp10(data)                                           ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP0IE_get_gp9(data)                                            ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP0IE_get_gp8(data)                                            ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP0IE_get_gp7(data)                                            ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP0IE_get_gp6(data)                                            ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP0IE_get_gp5(data)                                            ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP0IE_get_gp4(data)                                            ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP0IE_get_gp3(data)                                            ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP0IE_get_gp2(data)                                            ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP0IE_get_gp1(data)                                            ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP0IE_get_gp0(data)                                            ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP0IE_get_write_data(data)                                     (0x00000001&(data))

#define  MIS_GPIO_GP1IE                                                         0x1801BD50
#define  MIS_GPIO_GP1IE_reg_addr                                                 "0xB801BD50"
#define  MIS_GPIO_GP1IE_reg                                                      0xB801BD50
#define  MIS_GPIO_GP1IE_inst_addr                                                "0x0013"
#define  set_MIS_GPIO_GP1IE_reg(data)                                            (*((volatile unsigned int*)MIS_GPIO_GP1IE_reg)=data)
#define  get_MIS_GPIO_GP1IE_reg                                                  (*((volatile unsigned int*)MIS_GPIO_GP1IE_reg))
#define  MIS_GPIO_GP1IE_gp61_shift                                               (31)
#define  MIS_GPIO_GP1IE_gp60_shift                                               (30)
#define  MIS_GPIO_GP1IE_gp59_shift                                               (29)
#define  MIS_GPIO_GP1IE_gp58_shift                                               (28)
#define  MIS_GPIO_GP1IE_gp57_shift                                               (27)
#define  MIS_GPIO_GP1IE_gp56_shift                                               (26)
#define  MIS_GPIO_GP1IE_gp55_shift                                               (25)
#define  MIS_GPIO_GP1IE_gp54_shift                                               (24)
#define  MIS_GPIO_GP1IE_gp53_shift                                               (23)
#define  MIS_GPIO_GP1IE_gp52_shift                                               (22)
#define  MIS_GPIO_GP1IE_gp51_shift                                               (21)
#define  MIS_GPIO_GP1IE_gp50_shift                                               (20)
#define  MIS_GPIO_GP1IE_gp49_shift                                               (19)
#define  MIS_GPIO_GP1IE_gp48_shift                                               (18)
#define  MIS_GPIO_GP1IE_gp47_shift                                               (17)
#define  MIS_GPIO_GP1IE_gp46_shift                                               (16)
#define  MIS_GPIO_GP1IE_gp45_shift                                               (15)
#define  MIS_GPIO_GP1IE_gp44_shift                                               (14)
#define  MIS_GPIO_GP1IE_gp43_shift                                               (13)
#define  MIS_GPIO_GP1IE_gp42_shift                                               (12)
#define  MIS_GPIO_GP1IE_gp41_shift                                               (11)
#define  MIS_GPIO_GP1IE_gp40_shift                                               (10)
#define  MIS_GPIO_GP1IE_gp39_shift                                               (9)
#define  MIS_GPIO_GP1IE_gp38_shift                                               (8)
#define  MIS_GPIO_GP1IE_gp37_shift                                               (7)
#define  MIS_GPIO_GP1IE_gp36_shift                                               (6)
#define  MIS_GPIO_GP1IE_gp35_shift                                               (5)
#define  MIS_GPIO_GP1IE_gp34_shift                                               (4)
#define  MIS_GPIO_GP1IE_gp33_shift                                               (3)
#define  MIS_GPIO_GP1IE_gp32_shift                                               (2)
#define  MIS_GPIO_GP1IE_gp31_shift                                               (1)
#define  MIS_GPIO_GP1IE_write_data_shift                                         (0)
#define  MIS_GPIO_GP1IE_gp61_mask                                                (0x80000000)
#define  MIS_GPIO_GP1IE_gp60_mask                                                (0x40000000)
#define  MIS_GPIO_GP1IE_gp59_mask                                                (0x20000000)
#define  MIS_GPIO_GP1IE_gp58_mask                                                (0x10000000)
#define  MIS_GPIO_GP1IE_gp57_mask                                                (0x08000000)
#define  MIS_GPIO_GP1IE_gp56_mask                                                (0x04000000)
#define  MIS_GPIO_GP1IE_gp55_mask                                                (0x02000000)
#define  MIS_GPIO_GP1IE_gp54_mask                                                (0x01000000)
#define  MIS_GPIO_GP1IE_gp53_mask                                                (0x00800000)
#define  MIS_GPIO_GP1IE_gp52_mask                                                (0x00400000)
#define  MIS_GPIO_GP1IE_gp51_mask                                                (0x00200000)
#define  MIS_GPIO_GP1IE_gp50_mask                                                (0x00100000)
#define  MIS_GPIO_GP1IE_gp49_mask                                                (0x00080000)
#define  MIS_GPIO_GP1IE_gp48_mask                                                (0x00040000)
#define  MIS_GPIO_GP1IE_gp47_mask                                                (0x00020000)
#define  MIS_GPIO_GP1IE_gp46_mask                                                (0x00010000)
#define  MIS_GPIO_GP1IE_gp45_mask                                                (0x00008000)
#define  MIS_GPIO_GP1IE_gp44_mask                                                (0x00004000)
#define  MIS_GPIO_GP1IE_gp43_mask                                                (0x00002000)
#define  MIS_GPIO_GP1IE_gp42_mask                                                (0x00001000)
#define  MIS_GPIO_GP1IE_gp41_mask                                                (0x00000800)
#define  MIS_GPIO_GP1IE_gp40_mask                                                (0x00000400)
#define  MIS_GPIO_GP1IE_gp39_mask                                                (0x00000200)
#define  MIS_GPIO_GP1IE_gp38_mask                                                (0x00000100)
#define  MIS_GPIO_GP1IE_gp37_mask                                                (0x00000080)
#define  MIS_GPIO_GP1IE_gp36_mask                                                (0x00000040)
#define  MIS_GPIO_GP1IE_gp35_mask                                                (0x00000020)
#define  MIS_GPIO_GP1IE_gp34_mask                                                (0x00000010)
#define  MIS_GPIO_GP1IE_gp33_mask                                                (0x00000008)
#define  MIS_GPIO_GP1IE_gp32_mask                                                (0x00000004)
#define  MIS_GPIO_GP1IE_gp31_mask                                                (0x00000002)
#define  MIS_GPIO_GP1IE_write_data_mask                                          (0x00000001)
#define  MIS_GPIO_GP1IE_gp61(data)                                               (0x80000000&((data)<<31))
#define  MIS_GPIO_GP1IE_gp60(data)                                               (0x40000000&((data)<<30))
#define  MIS_GPIO_GP1IE_gp59(data)                                               (0x20000000&((data)<<29))
#define  MIS_GPIO_GP1IE_gp58(data)                                               (0x10000000&((data)<<28))
#define  MIS_GPIO_GP1IE_gp57(data)                                               (0x08000000&((data)<<27))
#define  MIS_GPIO_GP1IE_gp56(data)                                               (0x04000000&((data)<<26))
#define  MIS_GPIO_GP1IE_gp55(data)                                               (0x02000000&((data)<<25))
#define  MIS_GPIO_GP1IE_gp54(data)                                               (0x01000000&((data)<<24))
#define  MIS_GPIO_GP1IE_gp53(data)                                               (0x00800000&((data)<<23))
#define  MIS_GPIO_GP1IE_gp52(data)                                               (0x00400000&((data)<<22))
#define  MIS_GPIO_GP1IE_gp51(data)                                               (0x00200000&((data)<<21))
#define  MIS_GPIO_GP1IE_gp50(data)                                               (0x00100000&((data)<<20))
#define  MIS_GPIO_GP1IE_gp49(data)                                               (0x00080000&((data)<<19))
#define  MIS_GPIO_GP1IE_gp48(data)                                               (0x00040000&((data)<<18))
#define  MIS_GPIO_GP1IE_gp47(data)                                               (0x00020000&((data)<<17))
#define  MIS_GPIO_GP1IE_gp46(data)                                               (0x00010000&((data)<<16))
#define  MIS_GPIO_GP1IE_gp45(data)                                               (0x00008000&((data)<<15))
#define  MIS_GPIO_GP1IE_gp44(data)                                               (0x00004000&((data)<<14))
#define  MIS_GPIO_GP1IE_gp43(data)                                               (0x00002000&((data)<<13))
#define  MIS_GPIO_GP1IE_gp42(data)                                               (0x00001000&((data)<<12))
#define  MIS_GPIO_GP1IE_gp41(data)                                               (0x00000800&((data)<<11))
#define  MIS_GPIO_GP1IE_gp40(data)                                               (0x00000400&((data)<<10))
#define  MIS_GPIO_GP1IE_gp39(data)                                               (0x00000200&((data)<<9))
#define  MIS_GPIO_GP1IE_gp38(data)                                               (0x00000100&((data)<<8))
#define  MIS_GPIO_GP1IE_gp37(data)                                               (0x00000080&((data)<<7))
#define  MIS_GPIO_GP1IE_gp36(data)                                               (0x00000040&((data)<<6))
#define  MIS_GPIO_GP1IE_gp35(data)                                               (0x00000020&((data)<<5))
#define  MIS_GPIO_GP1IE_gp34(data)                                               (0x00000010&((data)<<4))
#define  MIS_GPIO_GP1IE_gp33(data)                                               (0x00000008&((data)<<3))
#define  MIS_GPIO_GP1IE_gp32(data)                                               (0x00000004&((data)<<2))
#define  MIS_GPIO_GP1IE_gp31(data)                                               (0x00000002&((data)<<1))
#define  MIS_GPIO_GP1IE_write_data(data)                                         (0x00000001&(data))
#define  MIS_GPIO_GP1IE_get_gp61(data)                                           ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP1IE_get_gp60(data)                                           ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP1IE_get_gp59(data)                                           ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP1IE_get_gp58(data)                                           ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP1IE_get_gp57(data)                                           ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP1IE_get_gp56(data)                                           ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP1IE_get_gp55(data)                                           ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP1IE_get_gp54(data)                                           ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP1IE_get_gp53(data)                                           ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP1IE_get_gp52(data)                                           ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP1IE_get_gp51(data)                                           ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP1IE_get_gp50(data)                                           ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP1IE_get_gp49(data)                                           ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP1IE_get_gp48(data)                                           ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP1IE_get_gp47(data)                                           ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP1IE_get_gp46(data)                                           ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP1IE_get_gp45(data)                                           ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP1IE_get_gp44(data)                                           ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP1IE_get_gp43(data)                                           ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP1IE_get_gp42(data)                                           ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP1IE_get_gp41(data)                                           ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP1IE_get_gp40(data)                                           ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP1IE_get_gp39(data)                                           ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP1IE_get_gp38(data)                                           ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP1IE_get_gp37(data)                                           ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP1IE_get_gp36(data)                                           ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP1IE_get_gp35(data)                                           ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP1IE_get_gp34(data)                                           ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP1IE_get_gp33(data)                                           ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP1IE_get_gp32(data)                                           ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP1IE_get_gp31(data)                                           ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP1IE_get_write_data(data)                                     (0x00000001&(data))

#define  MIS_GPIO_GP2IE                                                         0x1801BD54
#define  MIS_GPIO_GP2IE_reg_addr                                                 "0xB801BD54"
#define  MIS_GPIO_GP2IE_reg                                                      0xB801BD54
#define  MIS_GPIO_GP2IE_inst_addr                                                "0x0014"
#define  set_MIS_GPIO_GP2IE_reg(data)                                            (*((volatile unsigned int*)MIS_GPIO_GP2IE_reg)=data)
#define  get_MIS_GPIO_GP2IE_reg                                                  (*((volatile unsigned int*)MIS_GPIO_GP2IE_reg))
#define  MIS_GPIO_GP2IE_gp92_shift                                               (31)
#define  MIS_GPIO_GP2IE_gp91_shift                                               (30)
#define  MIS_GPIO_GP2IE_gp90_shift                                               (29)
#define  MIS_GPIO_GP2IE_gp89_shift                                               (28)
#define  MIS_GPIO_GP2IE_gp88_shift                                               (27)
#define  MIS_GPIO_GP2IE_gp87_shift                                               (26)
#define  MIS_GPIO_GP2IE_gp86_shift                                               (25)
#define  MIS_GPIO_GP2IE_gp85_shift                                               (24)
#define  MIS_GPIO_GP2IE_gp84_shift                                               (23)
#define  MIS_GPIO_GP2IE_gp83_shift                                               (22)
#define  MIS_GPIO_GP2IE_gp82_shift                                               (21)
#define  MIS_GPIO_GP2IE_gp81_shift                                               (20)
#define  MIS_GPIO_GP2IE_gp80_shift                                               (19)
#define  MIS_GPIO_GP2IE_gp79_shift                                               (18)
#define  MIS_GPIO_GP2IE_gp78_shift                                               (17)
#define  MIS_GPIO_GP2IE_gp77_shift                                               (16)
#define  MIS_GPIO_GP2IE_gp76_shift                                               (15)
#define  MIS_GPIO_GP2IE_gp75_shift                                               (14)
#define  MIS_GPIO_GP2IE_gp74_shift                                               (13)
#define  MIS_GPIO_GP2IE_gp73_shift                                               (12)
#define  MIS_GPIO_GP2IE_gp72_shift                                               (11)
#define  MIS_GPIO_GP2IE_gp71_shift                                               (10)
#define  MIS_GPIO_GP2IE_gp70_shift                                               (9)
#define  MIS_GPIO_GP2IE_gp69_shift                                               (8)
#define  MIS_GPIO_GP2IE_gp68_shift                                               (7)
#define  MIS_GPIO_GP2IE_gp67_shift                                               (6)
#define  MIS_GPIO_GP2IE_gp66_shift                                               (5)
#define  MIS_GPIO_GP2IE_gp65_shift                                               (4)
#define  MIS_GPIO_GP2IE_gp64_shift                                               (3)
#define  MIS_GPIO_GP2IE_gp63_shift                                               (2)
#define  MIS_GPIO_GP2IE_gp62_shift                                               (1)
#define  MIS_GPIO_GP2IE_write_data_shift                                         (0)
#define  MIS_GPIO_GP2IE_gp92_mask                                                (0x80000000)
#define  MIS_GPIO_GP2IE_gp91_mask                                                (0x40000000)
#define  MIS_GPIO_GP2IE_gp90_mask                                                (0x20000000)
#define  MIS_GPIO_GP2IE_gp89_mask                                                (0x10000000)
#define  MIS_GPIO_GP2IE_gp88_mask                                                (0x08000000)
#define  MIS_GPIO_GP2IE_gp87_mask                                                (0x04000000)
#define  MIS_GPIO_GP2IE_gp86_mask                                                (0x02000000)
#define  MIS_GPIO_GP2IE_gp85_mask                                                (0x01000000)
#define  MIS_GPIO_GP2IE_gp84_mask                                                (0x00800000)
#define  MIS_GPIO_GP2IE_gp83_mask                                                (0x00400000)
#define  MIS_GPIO_GP2IE_gp82_mask                                                (0x00200000)
#define  MIS_GPIO_GP2IE_gp81_mask                                                (0x00100000)
#define  MIS_GPIO_GP2IE_gp80_mask                                                (0x00080000)
#define  MIS_GPIO_GP2IE_gp79_mask                                                (0x00040000)
#define  MIS_GPIO_GP2IE_gp78_mask                                                (0x00020000)
#define  MIS_GPIO_GP2IE_gp77_mask                                                (0x00010000)
#define  MIS_GPIO_GP2IE_gp76_mask                                                (0x00008000)
#define  MIS_GPIO_GP2IE_gp75_mask                                                (0x00004000)
#define  MIS_GPIO_GP2IE_gp74_mask                                                (0x00002000)
#define  MIS_GPIO_GP2IE_gp73_mask                                                (0x00001000)
#define  MIS_GPIO_GP2IE_gp72_mask                                                (0x00000800)
#define  MIS_GPIO_GP2IE_gp71_mask                                                (0x00000400)
#define  MIS_GPIO_GP2IE_gp70_mask                                                (0x00000200)
#define  MIS_GPIO_GP2IE_gp69_mask                                                (0x00000100)
#define  MIS_GPIO_GP2IE_gp68_mask                                                (0x00000080)
#define  MIS_GPIO_GP2IE_gp67_mask                                                (0x00000040)
#define  MIS_GPIO_GP2IE_gp66_mask                                                (0x00000020)
#define  MIS_GPIO_GP2IE_gp65_mask                                                (0x00000010)
#define  MIS_GPIO_GP2IE_gp64_mask                                                (0x00000008)
#define  MIS_GPIO_GP2IE_gp63_mask                                                (0x00000004)
#define  MIS_GPIO_GP2IE_gp62_mask                                                (0x00000002)
#define  MIS_GPIO_GP2IE_write_data_mask                                          (0x00000001)
#define  MIS_GPIO_GP2IE_gp92(data)                                               (0x80000000&((data)<<31))
#define  MIS_GPIO_GP2IE_gp91(data)                                               (0x40000000&((data)<<30))
#define  MIS_GPIO_GP2IE_gp90(data)                                               (0x20000000&((data)<<29))
#define  MIS_GPIO_GP2IE_gp89(data)                                               (0x10000000&((data)<<28))
#define  MIS_GPIO_GP2IE_gp88(data)                                               (0x08000000&((data)<<27))
#define  MIS_GPIO_GP2IE_gp87(data)                                               (0x04000000&((data)<<26))
#define  MIS_GPIO_GP2IE_gp86(data)                                               (0x02000000&((data)<<25))
#define  MIS_GPIO_GP2IE_gp85(data)                                               (0x01000000&((data)<<24))
#define  MIS_GPIO_GP2IE_gp84(data)                                               (0x00800000&((data)<<23))
#define  MIS_GPIO_GP2IE_gp83(data)                                               (0x00400000&((data)<<22))
#define  MIS_GPIO_GP2IE_gp82(data)                                               (0x00200000&((data)<<21))
#define  MIS_GPIO_GP2IE_gp81(data)                                               (0x00100000&((data)<<20))
#define  MIS_GPIO_GP2IE_gp80(data)                                               (0x00080000&((data)<<19))
#define  MIS_GPIO_GP2IE_gp79(data)                                               (0x00040000&((data)<<18))
#define  MIS_GPIO_GP2IE_gp78(data)                                               (0x00020000&((data)<<17))
#define  MIS_GPIO_GP2IE_gp77(data)                                               (0x00010000&((data)<<16))
#define  MIS_GPIO_GP2IE_gp76(data)                                               (0x00008000&((data)<<15))
#define  MIS_GPIO_GP2IE_gp75(data)                                               (0x00004000&((data)<<14))
#define  MIS_GPIO_GP2IE_gp74(data)                                               (0x00002000&((data)<<13))
#define  MIS_GPIO_GP2IE_gp73(data)                                               (0x00001000&((data)<<12))
#define  MIS_GPIO_GP2IE_gp72(data)                                               (0x00000800&((data)<<11))
#define  MIS_GPIO_GP2IE_gp71(data)                                               (0x00000400&((data)<<10))
#define  MIS_GPIO_GP2IE_gp70(data)                                               (0x00000200&((data)<<9))
#define  MIS_GPIO_GP2IE_gp69(data)                                               (0x00000100&((data)<<8))
#define  MIS_GPIO_GP2IE_gp68(data)                                               (0x00000080&((data)<<7))
#define  MIS_GPIO_GP2IE_gp67(data)                                               (0x00000040&((data)<<6))
#define  MIS_GPIO_GP2IE_gp66(data)                                               (0x00000020&((data)<<5))
#define  MIS_GPIO_GP2IE_gp65(data)                                               (0x00000010&((data)<<4))
#define  MIS_GPIO_GP2IE_gp64(data)                                               (0x00000008&((data)<<3))
#define  MIS_GPIO_GP2IE_gp63(data)                                               (0x00000004&((data)<<2))
#define  MIS_GPIO_GP2IE_gp62(data)                                               (0x00000002&((data)<<1))
#define  MIS_GPIO_GP2IE_write_data(data)                                         (0x00000001&(data))
#define  MIS_GPIO_GP2IE_get_gp92(data)                                           ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP2IE_get_gp91(data)                                           ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP2IE_get_gp90(data)                                           ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP2IE_get_gp89(data)                                           ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP2IE_get_gp88(data)                                           ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP2IE_get_gp87(data)                                           ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP2IE_get_gp86(data)                                           ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP2IE_get_gp85(data)                                           ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP2IE_get_gp84(data)                                           ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP2IE_get_gp83(data)                                           ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP2IE_get_gp82(data)                                           ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP2IE_get_gp81(data)                                           ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP2IE_get_gp80(data)                                           ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP2IE_get_gp79(data)                                           ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP2IE_get_gp78(data)                                           ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP2IE_get_gp77(data)                                           ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP2IE_get_gp76(data)                                           ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP2IE_get_gp75(data)                                           ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP2IE_get_gp74(data)                                           ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP2IE_get_gp73(data)                                           ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP2IE_get_gp72(data)                                           ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP2IE_get_gp71(data)                                           ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP2IE_get_gp70(data)                                           ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP2IE_get_gp69(data)                                           ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP2IE_get_gp68(data)                                           ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP2IE_get_gp67(data)                                           ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP2IE_get_gp66(data)                                           ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP2IE_get_gp65(data)                                           ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP2IE_get_gp64(data)                                           ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP2IE_get_gp63(data)                                           ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP2IE_get_gp62(data)                                           ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP2IE_get_write_data(data)                                     (0x00000001&(data))

#define  MIS_GPIO_GP3IE                                                         0x1801BD58
#define  MIS_GPIO_GP3IE_reg_addr                                                 "0xB801BD58"
#define  MIS_GPIO_GP3IE_reg                                                      0xB801BD58
#define  MIS_GPIO_GP3IE_inst_addr                                                "0x0015"
#define  set_MIS_GPIO_GP3IE_reg(data)                                            (*((volatile unsigned int*)MIS_GPIO_GP3IE_reg)=data)
#define  get_MIS_GPIO_GP3IE_reg                                                  (*((volatile unsigned int*)MIS_GPIO_GP3IE_reg))
#define  MIS_GPIO_GP3IE_gp123_shift                                              (31)
#define  MIS_GPIO_GP3IE_gp122_shift                                              (30)
#define  MIS_GPIO_GP3IE_gp121_shift                                              (29)
#define  MIS_GPIO_GP3IE_gp120_shift                                              (28)
#define  MIS_GPIO_GP3IE_gp119_shift                                              (27)
#define  MIS_GPIO_GP3IE_gp118_shift                                              (26)
#define  MIS_GPIO_GP3IE_gp117_shift                                              (25)
#define  MIS_GPIO_GP3IE_gp116_shift                                              (24)
#define  MIS_GPIO_GP3IE_gp115_shift                                              (23)
#define  MIS_GPIO_GP3IE_gp114_shift                                              (22)
#define  MIS_GPIO_GP3IE_gp113_shift                                              (21)
#define  MIS_GPIO_GP3IE_gp112_shift                                              (20)
#define  MIS_GPIO_GP3IE_gp111_shift                                              (19)
#define  MIS_GPIO_GP3IE_gp110_shift                                              (18)
#define  MIS_GPIO_GP3IE_gp109_shift                                              (17)
#define  MIS_GPIO_GP3IE_gp108_shift                                              (16)
#define  MIS_GPIO_GP3IE_gp107_shift                                              (15)
#define  MIS_GPIO_GP3IE_gp106_shift                                              (14)
#define  MIS_GPIO_GP3IE_gp105_shift                                              (13)
#define  MIS_GPIO_GP3IE_gp104_shift                                              (12)
#define  MIS_GPIO_GP3IE_gp103_shift                                              (11)
#define  MIS_GPIO_GP3IE_gp102_shift                                              (10)
#define  MIS_GPIO_GP3IE_gp101_shift                                              (9)
#define  MIS_GPIO_GP3IE_gp100_shift                                              (8)
#define  MIS_GPIO_GP3IE_gp99_shift                                               (7)
#define  MIS_GPIO_GP3IE_gp98_shift                                               (6)
#define  MIS_GPIO_GP3IE_gp97_shift                                               (5)
#define  MIS_GPIO_GP3IE_gp96_shift                                               (4)
#define  MIS_GPIO_GP3IE_gp95_shift                                               (3)
#define  MIS_GPIO_GP3IE_gp94_shift                                               (2)
#define  MIS_GPIO_GP3IE_gp93_shift                                               (1)
#define  MIS_GPIO_GP3IE_write_data_shift                                         (0)
#define  MIS_GPIO_GP3IE_gp123_mask                                               (0x80000000)
#define  MIS_GPIO_GP3IE_gp122_mask                                               (0x40000000)
#define  MIS_GPIO_GP3IE_gp121_mask                                               (0x20000000)
#define  MIS_GPIO_GP3IE_gp120_mask                                               (0x10000000)
#define  MIS_GPIO_GP3IE_gp119_mask                                               (0x08000000)
#define  MIS_GPIO_GP3IE_gp118_mask                                               (0x04000000)
#define  MIS_GPIO_GP3IE_gp117_mask                                               (0x02000000)
#define  MIS_GPIO_GP3IE_gp116_mask                                               (0x01000000)
#define  MIS_GPIO_GP3IE_gp115_mask                                               (0x00800000)
#define  MIS_GPIO_GP3IE_gp114_mask                                               (0x00400000)
#define  MIS_GPIO_GP3IE_gp113_mask                                               (0x00200000)
#define  MIS_GPIO_GP3IE_gp112_mask                                               (0x00100000)
#define  MIS_GPIO_GP3IE_gp111_mask                                               (0x00080000)
#define  MIS_GPIO_GP3IE_gp110_mask                                               (0x00040000)
#define  MIS_GPIO_GP3IE_gp109_mask                                               (0x00020000)
#define  MIS_GPIO_GP3IE_gp108_mask                                               (0x00010000)
#define  MIS_GPIO_GP3IE_gp107_mask                                               (0x00008000)
#define  MIS_GPIO_GP3IE_gp106_mask                                               (0x00004000)
#define  MIS_GPIO_GP3IE_gp105_mask                                               (0x00002000)
#define  MIS_GPIO_GP3IE_gp104_mask                                               (0x00001000)
#define  MIS_GPIO_GP3IE_gp103_mask                                               (0x00000800)
#define  MIS_GPIO_GP3IE_gp102_mask                                               (0x00000400)
#define  MIS_GPIO_GP3IE_gp101_mask                                               (0x00000200)
#define  MIS_GPIO_GP3IE_gp100_mask                                               (0x00000100)
#define  MIS_GPIO_GP3IE_gp99_mask                                                (0x00000080)
#define  MIS_GPIO_GP3IE_gp98_mask                                                (0x00000040)
#define  MIS_GPIO_GP3IE_gp97_mask                                                (0x00000020)
#define  MIS_GPIO_GP3IE_gp96_mask                                                (0x00000010)
#define  MIS_GPIO_GP3IE_gp95_mask                                                (0x00000008)
#define  MIS_GPIO_GP3IE_gp94_mask                                                (0x00000004)
#define  MIS_GPIO_GP3IE_gp93_mask                                                (0x00000002)
#define  MIS_GPIO_GP3IE_write_data_mask                                          (0x00000001)
#define  MIS_GPIO_GP3IE_gp123(data)                                              (0x80000000&((data)<<31))
#define  MIS_GPIO_GP3IE_gp122(data)                                              (0x40000000&((data)<<30))
#define  MIS_GPIO_GP3IE_gp121(data)                                              (0x20000000&((data)<<29))
#define  MIS_GPIO_GP3IE_gp120(data)                                              (0x10000000&((data)<<28))
#define  MIS_GPIO_GP3IE_gp119(data)                                              (0x08000000&((data)<<27))
#define  MIS_GPIO_GP3IE_gp118(data)                                              (0x04000000&((data)<<26))
#define  MIS_GPIO_GP3IE_gp117(data)                                              (0x02000000&((data)<<25))
#define  MIS_GPIO_GP3IE_gp116(data)                                              (0x01000000&((data)<<24))
#define  MIS_GPIO_GP3IE_gp115(data)                                              (0x00800000&((data)<<23))
#define  MIS_GPIO_GP3IE_gp114(data)                                              (0x00400000&((data)<<22))
#define  MIS_GPIO_GP3IE_gp113(data)                                              (0x00200000&((data)<<21))
#define  MIS_GPIO_GP3IE_gp112(data)                                              (0x00100000&((data)<<20))
#define  MIS_GPIO_GP3IE_gp111(data)                                              (0x00080000&((data)<<19))
#define  MIS_GPIO_GP3IE_gp110(data)                                              (0x00040000&((data)<<18))
#define  MIS_GPIO_GP3IE_gp109(data)                                              (0x00020000&((data)<<17))
#define  MIS_GPIO_GP3IE_gp108(data)                                              (0x00010000&((data)<<16))
#define  MIS_GPIO_GP3IE_gp107(data)                                              (0x00008000&((data)<<15))
#define  MIS_GPIO_GP3IE_gp106(data)                                              (0x00004000&((data)<<14))
#define  MIS_GPIO_GP3IE_gp105(data)                                              (0x00002000&((data)<<13))
#define  MIS_GPIO_GP3IE_gp104(data)                                              (0x00001000&((data)<<12))
#define  MIS_GPIO_GP3IE_gp103(data)                                              (0x00000800&((data)<<11))
#define  MIS_GPIO_GP3IE_gp102(data)                                              (0x00000400&((data)<<10))
#define  MIS_GPIO_GP3IE_gp101(data)                                              (0x00000200&((data)<<9))
#define  MIS_GPIO_GP3IE_gp100(data)                                              (0x00000100&((data)<<8))
#define  MIS_GPIO_GP3IE_gp99(data)                                               (0x00000080&((data)<<7))
#define  MIS_GPIO_GP3IE_gp98(data)                                               (0x00000040&((data)<<6))
#define  MIS_GPIO_GP3IE_gp97(data)                                               (0x00000020&((data)<<5))
#define  MIS_GPIO_GP3IE_gp96(data)                                               (0x00000010&((data)<<4))
#define  MIS_GPIO_GP3IE_gp95(data)                                               (0x00000008&((data)<<3))
#define  MIS_GPIO_GP3IE_gp94(data)                                               (0x00000004&((data)<<2))
#define  MIS_GPIO_GP3IE_gp93(data)                                               (0x00000002&((data)<<1))
#define  MIS_GPIO_GP3IE_write_data(data)                                         (0x00000001&(data))
#define  MIS_GPIO_GP3IE_get_gp123(data)                                          ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP3IE_get_gp122(data)                                          ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP3IE_get_gp121(data)                                          ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP3IE_get_gp120(data)                                          ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP3IE_get_gp119(data)                                          ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP3IE_get_gp118(data)                                          ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP3IE_get_gp117(data)                                          ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP3IE_get_gp116(data)                                          ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP3IE_get_gp115(data)                                          ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP3IE_get_gp114(data)                                          ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP3IE_get_gp113(data)                                          ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP3IE_get_gp112(data)                                          ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP3IE_get_gp111(data)                                          ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP3IE_get_gp110(data)                                          ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP3IE_get_gp109(data)                                          ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP3IE_get_gp108(data)                                          ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP3IE_get_gp107(data)                                          ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP3IE_get_gp106(data)                                          ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP3IE_get_gp105(data)                                          ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP3IE_get_gp104(data)                                          ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP3IE_get_gp103(data)                                          ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP3IE_get_gp102(data)                                          ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP3IE_get_gp101(data)                                          ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP3IE_get_gp100(data)                                          ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP3IE_get_gp99(data)                                           ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP3IE_get_gp98(data)                                           ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP3IE_get_gp97(data)                                           ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP3IE_get_gp96(data)                                           ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP3IE_get_gp95(data)                                           ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP3IE_get_gp94(data)                                           ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP3IE_get_gp93(data)                                           ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP3IE_get_write_data(data)                                     (0x00000001&(data))

#define  MIS_GPIO_GP4IE                                                         0x1801BD5C
#define  MIS_GPIO_GP4IE_reg_addr                                                 "0xB801BD5C"
#define  MIS_GPIO_GP4IE_reg                                                      0xB801BD5C
#define  MIS_GPIO_GP4IE_inst_addr                                                "0x0016"
#define  set_MIS_GPIO_GP4IE_reg(data)                                            (*((volatile unsigned int*)MIS_GPIO_GP4IE_reg)=data)
#define  get_MIS_GPIO_GP4IE_reg                                                  (*((volatile unsigned int*)MIS_GPIO_GP4IE_reg))
#define  MIS_GPIO_GP4IE_gp154_shift                                              (31)
#define  MIS_GPIO_GP4IE_gp153_shift                                              (30)
#define  MIS_GPIO_GP4IE_gp152_shift                                              (29)
#define  MIS_GPIO_GP4IE_gp151_shift                                              (28)
#define  MIS_GPIO_GP4IE_gp150_shift                                              (27)
#define  MIS_GPIO_GP4IE_gp149_shift                                              (26)
#define  MIS_GPIO_GP4IE_gp148_shift                                              (25)
#define  MIS_GPIO_GP4IE_gp147_shift                                              (24)
#define  MIS_GPIO_GP4IE_gp146_shift                                              (23)
#define  MIS_GPIO_GP4IE_gp145_shift                                              (22)
#define  MIS_GPIO_GP4IE_gp144_shift                                              (21)
#define  MIS_GPIO_GP4IE_gp143_shift                                              (20)
#define  MIS_GPIO_GP4IE_gp142_shift                                              (19)
#define  MIS_GPIO_GP4IE_gp141_shift                                              (18)
#define  MIS_GPIO_GP4IE_gp140_shift                                              (17)
#define  MIS_GPIO_GP4IE_gp139_shift                                              (16)
#define  MIS_GPIO_GP4IE_gp138_shift                                              (15)
#define  MIS_GPIO_GP4IE_gp137_shift                                              (14)
#define  MIS_GPIO_GP4IE_gp136_shift                                              (13)
#define  MIS_GPIO_GP4IE_gp135_shift                                              (12)
#define  MIS_GPIO_GP4IE_gp134_shift                                              (11)
#define  MIS_GPIO_GP4IE_gp133_shift                                              (10)
#define  MIS_GPIO_GP4IE_gp132_shift                                              (9)
#define  MIS_GPIO_GP4IE_gp131_shift                                              (8)
#define  MIS_GPIO_GP4IE_gp130_shift                                              (7)
#define  MIS_GPIO_GP4IE_gp129_shift                                              (6)
#define  MIS_GPIO_GP4IE_gp128_shift                                              (5)
#define  MIS_GPIO_GP4IE_gp127_shift                                              (4)
#define  MIS_GPIO_GP4IE_gp126_shift                                              (3)
#define  MIS_GPIO_GP4IE_gp125_shift                                              (2)
#define  MIS_GPIO_GP4IE_gp124_shift                                              (1)
#define  MIS_GPIO_GP4IE_write_data_shift                                         (0)
#define  MIS_GPIO_GP4IE_gp154_mask                                               (0x80000000)
#define  MIS_GPIO_GP4IE_gp153_mask                                               (0x40000000)
#define  MIS_GPIO_GP4IE_gp152_mask                                               (0x20000000)
#define  MIS_GPIO_GP4IE_gp151_mask                                               (0x10000000)
#define  MIS_GPIO_GP4IE_gp150_mask                                               (0x08000000)
#define  MIS_GPIO_GP4IE_gp149_mask                                               (0x04000000)
#define  MIS_GPIO_GP4IE_gp148_mask                                               (0x02000000)
#define  MIS_GPIO_GP4IE_gp147_mask                                               (0x01000000)
#define  MIS_GPIO_GP4IE_gp146_mask                                               (0x00800000)
#define  MIS_GPIO_GP4IE_gp145_mask                                               (0x00400000)
#define  MIS_GPIO_GP4IE_gp144_mask                                               (0x00200000)
#define  MIS_GPIO_GP4IE_gp143_mask                                               (0x00100000)
#define  MIS_GPIO_GP4IE_gp142_mask                                               (0x00080000)
#define  MIS_GPIO_GP4IE_gp141_mask                                               (0x00040000)
#define  MIS_GPIO_GP4IE_gp140_mask                                               (0x00020000)
#define  MIS_GPIO_GP4IE_gp139_mask                                               (0x00010000)
#define  MIS_GPIO_GP4IE_gp138_mask                                               (0x00008000)
#define  MIS_GPIO_GP4IE_gp137_mask                                               (0x00004000)
#define  MIS_GPIO_GP4IE_gp136_mask                                               (0x00002000)
#define  MIS_GPIO_GP4IE_gp135_mask                                               (0x00001000)
#define  MIS_GPIO_GP4IE_gp134_mask                                               (0x00000800)
#define  MIS_GPIO_GP4IE_gp133_mask                                               (0x00000400)
#define  MIS_GPIO_GP4IE_gp132_mask                                               (0x00000200)
#define  MIS_GPIO_GP4IE_gp131_mask                                               (0x00000100)
#define  MIS_GPIO_GP4IE_gp130_mask                                               (0x00000080)
#define  MIS_GPIO_GP4IE_gp129_mask                                               (0x00000040)
#define  MIS_GPIO_GP4IE_gp128_mask                                               (0x00000020)
#define  MIS_GPIO_GP4IE_gp127_mask                                               (0x00000010)
#define  MIS_GPIO_GP4IE_gp126_mask                                               (0x00000008)
#define  MIS_GPIO_GP4IE_gp125_mask                                               (0x00000004)
#define  MIS_GPIO_GP4IE_gp124_mask                                               (0x00000002)
#define  MIS_GPIO_GP4IE_write_data_mask                                          (0x00000001)
#define  MIS_GPIO_GP4IE_gp154(data)                                              (0x80000000&((data)<<31))
#define  MIS_GPIO_GP4IE_gp153(data)                                              (0x40000000&((data)<<30))
#define  MIS_GPIO_GP4IE_gp152(data)                                              (0x20000000&((data)<<29))
#define  MIS_GPIO_GP4IE_gp151(data)                                              (0x10000000&((data)<<28))
#define  MIS_GPIO_GP4IE_gp150(data)                                              (0x08000000&((data)<<27))
#define  MIS_GPIO_GP4IE_gp149(data)                                              (0x04000000&((data)<<26))
#define  MIS_GPIO_GP4IE_gp148(data)                                              (0x02000000&((data)<<25))
#define  MIS_GPIO_GP4IE_gp147(data)                                              (0x01000000&((data)<<24))
#define  MIS_GPIO_GP4IE_gp146(data)                                              (0x00800000&((data)<<23))
#define  MIS_GPIO_GP4IE_gp145(data)                                              (0x00400000&((data)<<22))
#define  MIS_GPIO_GP4IE_gp144(data)                                              (0x00200000&((data)<<21))
#define  MIS_GPIO_GP4IE_gp143(data)                                              (0x00100000&((data)<<20))
#define  MIS_GPIO_GP4IE_gp142(data)                                              (0x00080000&((data)<<19))
#define  MIS_GPIO_GP4IE_gp141(data)                                              (0x00040000&((data)<<18))
#define  MIS_GPIO_GP4IE_gp140(data)                                              (0x00020000&((data)<<17))
#define  MIS_GPIO_GP4IE_gp139(data)                                              (0x00010000&((data)<<16))
#define  MIS_GPIO_GP4IE_gp138(data)                                              (0x00008000&((data)<<15))
#define  MIS_GPIO_GP4IE_gp137(data)                                              (0x00004000&((data)<<14))
#define  MIS_GPIO_GP4IE_gp136(data)                                              (0x00002000&((data)<<13))
#define  MIS_GPIO_GP4IE_gp135(data)                                              (0x00001000&((data)<<12))
#define  MIS_GPIO_GP4IE_gp134(data)                                              (0x00000800&((data)<<11))
#define  MIS_GPIO_GP4IE_gp133(data)                                              (0x00000400&((data)<<10))
#define  MIS_GPIO_GP4IE_gp132(data)                                              (0x00000200&((data)<<9))
#define  MIS_GPIO_GP4IE_gp131(data)                                              (0x00000100&((data)<<8))
#define  MIS_GPIO_GP4IE_gp130(data)                                              (0x00000080&((data)<<7))
#define  MIS_GPIO_GP4IE_gp129(data)                                              (0x00000040&((data)<<6))
#define  MIS_GPIO_GP4IE_gp128(data)                                              (0x00000020&((data)<<5))
#define  MIS_GPIO_GP4IE_gp127(data)                                              (0x00000010&((data)<<4))
#define  MIS_GPIO_GP4IE_gp126(data)                                              (0x00000008&((data)<<3))
#define  MIS_GPIO_GP4IE_gp125(data)                                              (0x00000004&((data)<<2))
#define  MIS_GPIO_GP4IE_gp124(data)                                              (0x00000002&((data)<<1))
#define  MIS_GPIO_GP4IE_write_data(data)                                         (0x00000001&(data))
#define  MIS_GPIO_GP4IE_get_gp154(data)                                          ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP4IE_get_gp153(data)                                          ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP4IE_get_gp152(data)                                          ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP4IE_get_gp151(data)                                          ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP4IE_get_gp150(data)                                          ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP4IE_get_gp149(data)                                          ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP4IE_get_gp148(data)                                          ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP4IE_get_gp147(data)                                          ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP4IE_get_gp146(data)                                          ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP4IE_get_gp145(data)                                          ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP4IE_get_gp144(data)                                          ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP4IE_get_gp143(data)                                          ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP4IE_get_gp142(data)                                          ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP4IE_get_gp141(data)                                          ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP4IE_get_gp140(data)                                          ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP4IE_get_gp139(data)                                          ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP4IE_get_gp138(data)                                          ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP4IE_get_gp137(data)                                          ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP4IE_get_gp136(data)                                          ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP4IE_get_gp135(data)                                          ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP4IE_get_gp134(data)                                          ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP4IE_get_gp133(data)                                          ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP4IE_get_gp132(data)                                          ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP4IE_get_gp131(data)                                          ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP4IE_get_gp130(data)                                          ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP4IE_get_gp129(data)                                          ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP4IE_get_gp128(data)                                          ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP4IE_get_gp127(data)                                          ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP4IE_get_gp126(data)                                          ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP4IE_get_gp125(data)                                          ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP4IE_get_gp124(data)                                          ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP4IE_get_write_data(data)                                     (0x00000001&(data))

#define  MIS_GPIO_GP5IE                                                         0x1801BD60
#define  MIS_GPIO_GP5IE_reg_addr                                                 "0xB801BD60"
#define  MIS_GPIO_GP5IE_reg                                                      0xB801BD60
#define  MIS_GPIO_GP5IE_inst_addr                                                "0x0017"
#define  set_MIS_GPIO_GP5IE_reg(data)                                            (*((volatile unsigned int*)MIS_GPIO_GP5IE_reg)=data)
#define  get_MIS_GPIO_GP5IE_reg                                                  (*((volatile unsigned int*)MIS_GPIO_GP5IE_reg))
#define  MIS_GPIO_GP5IE_gp160_shift                                              (6)
#define  MIS_GPIO_GP5IE_gp159_shift                                              (5)
#define  MIS_GPIO_GP5IE_gp158_shift                                              (4)
#define  MIS_GPIO_GP5IE_gp157_shift                                              (3)
#define  MIS_GPIO_GP5IE_gp156_shift                                              (2)
#define  MIS_GPIO_GP5IE_gp155_shift                                              (1)
#define  MIS_GPIO_GP5IE_write_data_shift                                         (0)
#define  MIS_GPIO_GP5IE_gp160_mask                                               (0x00000040)
#define  MIS_GPIO_GP5IE_gp159_mask                                               (0x00000020)
#define  MIS_GPIO_GP5IE_gp158_mask                                               (0x00000010)
#define  MIS_GPIO_GP5IE_gp157_mask                                               (0x00000008)
#define  MIS_GPIO_GP5IE_gp156_mask                                               (0x00000004)
#define  MIS_GPIO_GP5IE_gp155_mask                                               (0x00000002)
#define  MIS_GPIO_GP5IE_write_data_mask                                          (0x00000001)
#define  MIS_GPIO_GP5IE_gp160(data)                                              (0x00000040&((data)<<6))
#define  MIS_GPIO_GP5IE_gp159(data)                                              (0x00000020&((data)<<5))
#define  MIS_GPIO_GP5IE_gp158(data)                                              (0x00000010&((data)<<4))
#define  MIS_GPIO_GP5IE_gp157(data)                                              (0x00000008&((data)<<3))
#define  MIS_GPIO_GP5IE_gp156(data)                                              (0x00000004&((data)<<2))
#define  MIS_GPIO_GP5IE_gp155(data)                                              (0x00000002&((data)<<1))
#define  MIS_GPIO_GP5IE_write_data(data)                                         (0x00000001&(data))
#define  MIS_GPIO_GP5IE_get_gp160(data)                                          ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP5IE_get_gp159(data)                                          ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP5IE_get_gp158(data)                                          ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP5IE_get_gp157(data)                                          ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP5IE_get_gp156(data)                                          ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP5IE_get_gp155(data)                                          ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP5IE_get_write_data(data)                                     (0x00000001&(data))

#define  MIS_GPIO_GP0DP                                                         0x1801BD64
#define  MIS_GPIO_GP0DP_reg_addr                                                 "0xB801BD64"
#define  MIS_GPIO_GP0DP_reg                                                      0xB801BD64
#define  MIS_GPIO_GP0DP_inst_addr                                                "0x0018"
#define  set_MIS_GPIO_GP0DP_reg(data)                                            (*((volatile unsigned int*)MIS_GPIO_GP0DP_reg)=data)
#define  get_MIS_GPIO_GP0DP_reg                                                  (*((volatile unsigned int*)MIS_GPIO_GP0DP_reg))
#define  MIS_GPIO_GP0DP_gpha30_shift                                             (31)
#define  MIS_GPIO_GP0DP_gpha29_shift                                             (30)
#define  MIS_GPIO_GP0DP_gpha28_shift                                             (29)
#define  MIS_GPIO_GP0DP_gpha27_shift                                             (28)
#define  MIS_GPIO_GP0DP_gpha26_shift                                             (27)
#define  MIS_GPIO_GP0DP_gpha25_shift                                             (26)
#define  MIS_GPIO_GP0DP_gpha24_shift                                             (25)
#define  MIS_GPIO_GP0DP_gpha23_shift                                             (24)
#define  MIS_GPIO_GP0DP_gpha22_shift                                             (23)
#define  MIS_GPIO_GP0DP_gpha21_shift                                             (22)
#define  MIS_GPIO_GP0DP_gpha20_shift                                             (21)
#define  MIS_GPIO_GP0DP_gpha19_shift                                             (20)
#define  MIS_GPIO_GP0DP_gpha18_shift                                             (19)
#define  MIS_GPIO_GP0DP_gpha17_shift                                             (18)
#define  MIS_GPIO_GP0DP_gpha16_shift                                             (17)
#define  MIS_GPIO_GP0DP_gpha15_shift                                             (16)
#define  MIS_GPIO_GP0DP_gpha14_shift                                             (15)
#define  MIS_GPIO_GP0DP_gpha13_shift                                             (14)
#define  MIS_GPIO_GP0DP_gpha12_shift                                             (13)
#define  MIS_GPIO_GP0DP_gpha11_shift                                             (12)
#define  MIS_GPIO_GP0DP_gpha10_shift                                             (11)
#define  MIS_GPIO_GP0DP_gpha9_shift                                              (10)
#define  MIS_GPIO_GP0DP_gpha8_shift                                              (9)
#define  MIS_GPIO_GP0DP_gpha7_shift                                              (8)
#define  MIS_GPIO_GP0DP_gpha6_shift                                              (7)
#define  MIS_GPIO_GP0DP_gpha5_shift                                              (6)
#define  MIS_GPIO_GP0DP_gpha4_shift                                              (5)
#define  MIS_GPIO_GP0DP_gpha3_shift                                              (4)
#define  MIS_GPIO_GP0DP_gpha2_shift                                              (3)
#define  MIS_GPIO_GP0DP_gpha1_shift                                              (2)
#define  MIS_GPIO_GP0DP_gpha0_shift                                              (1)
#define  MIS_GPIO_GP0DP_write_data_shift                                         (0)
#define  MIS_GPIO_GP0DP_gpha30_mask                                              (0x80000000)
#define  MIS_GPIO_GP0DP_gpha29_mask                                              (0x40000000)
#define  MIS_GPIO_GP0DP_gpha28_mask                                              (0x20000000)
#define  MIS_GPIO_GP0DP_gpha27_mask                                              (0x10000000)
#define  MIS_GPIO_GP0DP_gpha26_mask                                              (0x08000000)
#define  MIS_GPIO_GP0DP_gpha25_mask                                              (0x04000000)
#define  MIS_GPIO_GP0DP_gpha24_mask                                              (0x02000000)
#define  MIS_GPIO_GP0DP_gpha23_mask                                              (0x01000000)
#define  MIS_GPIO_GP0DP_gpha22_mask                                              (0x00800000)
#define  MIS_GPIO_GP0DP_gpha21_mask                                              (0x00400000)
#define  MIS_GPIO_GP0DP_gpha20_mask                                              (0x00200000)
#define  MIS_GPIO_GP0DP_gpha19_mask                                              (0x00100000)
#define  MIS_GPIO_GP0DP_gpha18_mask                                              (0x00080000)
#define  MIS_GPIO_GP0DP_gpha17_mask                                              (0x00040000)
#define  MIS_GPIO_GP0DP_gpha16_mask                                              (0x00020000)
#define  MIS_GPIO_GP0DP_gpha15_mask                                              (0x00010000)
#define  MIS_GPIO_GP0DP_gpha14_mask                                              (0x00008000)
#define  MIS_GPIO_GP0DP_gpha13_mask                                              (0x00004000)
#define  MIS_GPIO_GP0DP_gpha12_mask                                              (0x00002000)
#define  MIS_GPIO_GP0DP_gpha11_mask                                              (0x00001000)
#define  MIS_GPIO_GP0DP_gpha10_mask                                              (0x00000800)
#define  MIS_GPIO_GP0DP_gpha9_mask                                               (0x00000400)
#define  MIS_GPIO_GP0DP_gpha8_mask                                               (0x00000200)
#define  MIS_GPIO_GP0DP_gpha7_mask                                               (0x00000100)
#define  MIS_GPIO_GP0DP_gpha6_mask                                               (0x00000080)
#define  MIS_GPIO_GP0DP_gpha5_mask                                               (0x00000040)
#define  MIS_GPIO_GP0DP_gpha4_mask                                               (0x00000020)
#define  MIS_GPIO_GP0DP_gpha3_mask                                               (0x00000010)
#define  MIS_GPIO_GP0DP_gpha2_mask                                               (0x00000008)
#define  MIS_GPIO_GP0DP_gpha1_mask                                               (0x00000004)
#define  MIS_GPIO_GP0DP_gpha0_mask                                               (0x00000002)
#define  MIS_GPIO_GP0DP_write_data_mask                                          (0x00000001)
#define  MIS_GPIO_GP0DP_gpha30(data)                                             (0x80000000&((data)<<31))
#define  MIS_GPIO_GP0DP_gpha29(data)                                             (0x40000000&((data)<<30))
#define  MIS_GPIO_GP0DP_gpha28(data)                                             (0x20000000&((data)<<29))
#define  MIS_GPIO_GP0DP_gpha27(data)                                             (0x10000000&((data)<<28))
#define  MIS_GPIO_GP0DP_gpha26(data)                                             (0x08000000&((data)<<27))
#define  MIS_GPIO_GP0DP_gpha25(data)                                             (0x04000000&((data)<<26))
#define  MIS_GPIO_GP0DP_gpha24(data)                                             (0x02000000&((data)<<25))
#define  MIS_GPIO_GP0DP_gpha23(data)                                             (0x01000000&((data)<<24))
#define  MIS_GPIO_GP0DP_gpha22(data)                                             (0x00800000&((data)<<23))
#define  MIS_GPIO_GP0DP_gpha21(data)                                             (0x00400000&((data)<<22))
#define  MIS_GPIO_GP0DP_gpha20(data)                                             (0x00200000&((data)<<21))
#define  MIS_GPIO_GP0DP_gpha19(data)                                             (0x00100000&((data)<<20))
#define  MIS_GPIO_GP0DP_gpha18(data)                                             (0x00080000&((data)<<19))
#define  MIS_GPIO_GP0DP_gpha17(data)                                             (0x00040000&((data)<<18))
#define  MIS_GPIO_GP0DP_gpha16(data)                                             (0x00020000&((data)<<17))
#define  MIS_GPIO_GP0DP_gpha15(data)                                             (0x00010000&((data)<<16))
#define  MIS_GPIO_GP0DP_gpha14(data)                                             (0x00008000&((data)<<15))
#define  MIS_GPIO_GP0DP_gpha13(data)                                             (0x00004000&((data)<<14))
#define  MIS_GPIO_GP0DP_gpha12(data)                                             (0x00002000&((data)<<13))
#define  MIS_GPIO_GP0DP_gpha11(data)                                             (0x00001000&((data)<<12))
#define  MIS_GPIO_GP0DP_gpha10(data)                                             (0x00000800&((data)<<11))
#define  MIS_GPIO_GP0DP_gpha9(data)                                              (0x00000400&((data)<<10))
#define  MIS_GPIO_GP0DP_gpha8(data)                                              (0x00000200&((data)<<9))
#define  MIS_GPIO_GP0DP_gpha7(data)                                              (0x00000100&((data)<<8))
#define  MIS_GPIO_GP0DP_gpha6(data)                                              (0x00000080&((data)<<7))
#define  MIS_GPIO_GP0DP_gpha5(data)                                              (0x00000040&((data)<<6))
#define  MIS_GPIO_GP0DP_gpha4(data)                                              (0x00000020&((data)<<5))
#define  MIS_GPIO_GP0DP_gpha3(data)                                              (0x00000010&((data)<<4))
#define  MIS_GPIO_GP0DP_gpha2(data)                                              (0x00000008&((data)<<3))
#define  MIS_GPIO_GP0DP_gpha1(data)                                              (0x00000004&((data)<<2))
#define  MIS_GPIO_GP0DP_gpha0(data)                                              (0x00000002&((data)<<1))
#define  MIS_GPIO_GP0DP_write_data(data)                                         (0x00000001&(data))
#define  MIS_GPIO_GP0DP_get_gpha30(data)                                         ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP0DP_get_gpha29(data)                                         ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP0DP_get_gpha28(data)                                         ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP0DP_get_gpha27(data)                                         ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP0DP_get_gpha26(data)                                         ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP0DP_get_gpha25(data)                                         ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP0DP_get_gpha24(data)                                         ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP0DP_get_gpha23(data)                                         ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP0DP_get_gpha22(data)                                         ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP0DP_get_gpha21(data)                                         ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP0DP_get_gpha20(data)                                         ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP0DP_get_gpha19(data)                                         ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP0DP_get_gpha18(data)                                         ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP0DP_get_gpha17(data)                                         ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP0DP_get_gpha16(data)                                         ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP0DP_get_gpha15(data)                                         ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP0DP_get_gpha14(data)                                         ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP0DP_get_gpha13(data)                                         ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP0DP_get_gpha12(data)                                         ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP0DP_get_gpha11(data)                                         ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP0DP_get_gpha10(data)                                         ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP0DP_get_gpha9(data)                                          ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP0DP_get_gpha8(data)                                          ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP0DP_get_gpha7(data)                                          ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP0DP_get_gpha6(data)                                          ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP0DP_get_gpha5(data)                                          ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP0DP_get_gpha4(data)                                          ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP0DP_get_gpha3(data)                                          ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP0DP_get_gpha2(data)                                          ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP0DP_get_gpha1(data)                                          ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP0DP_get_gpha0(data)                                          ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP0DP_get_write_data(data)                                     (0x00000001&(data))

#define  MIS_GPIO_GP1DP                                                         0x1801BD68
#define  MIS_GPIO_GP1DP_reg_addr                                                 "0xB801BD68"
#define  MIS_GPIO_GP1DP_reg                                                      0xB801BD68
#define  MIS_GPIO_GP1DP_inst_addr                                                "0x0019"
#define  set_MIS_GPIO_GP1DP_reg(data)                                            (*((volatile unsigned int*)MIS_GPIO_GP1DP_reg)=data)
#define  get_MIS_GPIO_GP1DP_reg                                                  (*((volatile unsigned int*)MIS_GPIO_GP1DP_reg))
#define  MIS_GPIO_GP1DP_gpha61_shift                                             (31)
#define  MIS_GPIO_GP1DP_gpha60_shift                                             (30)
#define  MIS_GPIO_GP1DP_gpha59_shift                                             (29)
#define  MIS_GPIO_GP1DP_gpha58_shift                                             (28)
#define  MIS_GPIO_GP1DP_gpha57_shift                                             (27)
#define  MIS_GPIO_GP1DP_gpha56_shift                                             (26)
#define  MIS_GPIO_GP1DP_gpha55_shift                                             (25)
#define  MIS_GPIO_GP1DP_gpha54_shift                                             (24)
#define  MIS_GPIO_GP1DP_gpha53_shift                                             (23)
#define  MIS_GPIO_GP1DP_gpha52_shift                                             (22)
#define  MIS_GPIO_GP1DP_gpha51_shift                                             (21)
#define  MIS_GPIO_GP1DP_gpha50_shift                                             (20)
#define  MIS_GPIO_GP1DP_gpha49_shift                                             (19)
#define  MIS_GPIO_GP1DP_gpha48_shift                                             (18)
#define  MIS_GPIO_GP1DP_gpha47_shift                                             (17)
#define  MIS_GPIO_GP1DP_gpha46_shift                                             (16)
#define  MIS_GPIO_GP1DP_gpha45_shift                                             (15)
#define  MIS_GPIO_GP1DP_gpha44_shift                                             (14)
#define  MIS_GPIO_GP1DP_gpha43_shift                                             (13)
#define  MIS_GPIO_GP1DP_gpha42_shift                                             (12)
#define  MIS_GPIO_GP1DP_gpha41_shift                                             (11)
#define  MIS_GPIO_GP1DP_gpha40_shift                                             (10)
#define  MIS_GPIO_GP1DP_gpha39_shift                                             (9)
#define  MIS_GPIO_GP1DP_gpha38_shift                                             (8)
#define  MIS_GPIO_GP1DP_gpha37_shift                                             (7)
#define  MIS_GPIO_GP1DP_gpha36_shift                                             (6)
#define  MIS_GPIO_GP1DP_gpha35_shift                                             (5)
#define  MIS_GPIO_GP1DP_gpha34_shift                                             (4)
#define  MIS_GPIO_GP1DP_gpha33_shift                                             (3)
#define  MIS_GPIO_GP1DP_gpha32_shift                                             (2)
#define  MIS_GPIO_GP1DP_gpha31_shift                                             (1)
#define  MIS_GPIO_GP1DP_write_data_shift                                         (0)
#define  MIS_GPIO_GP1DP_gpha61_mask                                              (0x80000000)
#define  MIS_GPIO_GP1DP_gpha60_mask                                              (0x40000000)
#define  MIS_GPIO_GP1DP_gpha59_mask                                              (0x20000000)
#define  MIS_GPIO_GP1DP_gpha58_mask                                              (0x10000000)
#define  MIS_GPIO_GP1DP_gpha57_mask                                              (0x08000000)
#define  MIS_GPIO_GP1DP_gpha56_mask                                              (0x04000000)
#define  MIS_GPIO_GP1DP_gpha55_mask                                              (0x02000000)
#define  MIS_GPIO_GP1DP_gpha54_mask                                              (0x01000000)
#define  MIS_GPIO_GP1DP_gpha53_mask                                              (0x00800000)
#define  MIS_GPIO_GP1DP_gpha52_mask                                              (0x00400000)
#define  MIS_GPIO_GP1DP_gpha51_mask                                              (0x00200000)
#define  MIS_GPIO_GP1DP_gpha50_mask                                              (0x00100000)
#define  MIS_GPIO_GP1DP_gpha49_mask                                              (0x00080000)
#define  MIS_GPIO_GP1DP_gpha48_mask                                              (0x00040000)
#define  MIS_GPIO_GP1DP_gpha47_mask                                              (0x00020000)
#define  MIS_GPIO_GP1DP_gpha46_mask                                              (0x00010000)
#define  MIS_GPIO_GP1DP_gpha45_mask                                              (0x00008000)
#define  MIS_GPIO_GP1DP_gpha44_mask                                              (0x00004000)
#define  MIS_GPIO_GP1DP_gpha43_mask                                              (0x00002000)
#define  MIS_GPIO_GP1DP_gpha42_mask                                              (0x00001000)
#define  MIS_GPIO_GP1DP_gpha41_mask                                              (0x00000800)
#define  MIS_GPIO_GP1DP_gpha40_mask                                              (0x00000400)
#define  MIS_GPIO_GP1DP_gpha39_mask                                              (0x00000200)
#define  MIS_GPIO_GP1DP_gpha38_mask                                              (0x00000100)
#define  MIS_GPIO_GP1DP_gpha37_mask                                              (0x00000080)
#define  MIS_GPIO_GP1DP_gpha36_mask                                              (0x00000040)
#define  MIS_GPIO_GP1DP_gpha35_mask                                              (0x00000020)
#define  MIS_GPIO_GP1DP_gpha34_mask                                              (0x00000010)
#define  MIS_GPIO_GP1DP_gpha33_mask                                              (0x00000008)
#define  MIS_GPIO_GP1DP_gpha32_mask                                              (0x00000004)
#define  MIS_GPIO_GP1DP_gpha31_mask                                              (0x00000002)
#define  MIS_GPIO_GP1DP_write_data_mask                                          (0x00000001)
#define  MIS_GPIO_GP1DP_gpha61(data)                                             (0x80000000&((data)<<31))
#define  MIS_GPIO_GP1DP_gpha60(data)                                             (0x40000000&((data)<<30))
#define  MIS_GPIO_GP1DP_gpha59(data)                                             (0x20000000&((data)<<29))
#define  MIS_GPIO_GP1DP_gpha58(data)                                             (0x10000000&((data)<<28))
#define  MIS_GPIO_GP1DP_gpha57(data)                                             (0x08000000&((data)<<27))
#define  MIS_GPIO_GP1DP_gpha56(data)                                             (0x04000000&((data)<<26))
#define  MIS_GPIO_GP1DP_gpha55(data)                                             (0x02000000&((data)<<25))
#define  MIS_GPIO_GP1DP_gpha54(data)                                             (0x01000000&((data)<<24))
#define  MIS_GPIO_GP1DP_gpha53(data)                                             (0x00800000&((data)<<23))
#define  MIS_GPIO_GP1DP_gpha52(data)                                             (0x00400000&((data)<<22))
#define  MIS_GPIO_GP1DP_gpha51(data)                                             (0x00200000&((data)<<21))
#define  MIS_GPIO_GP1DP_gpha50(data)                                             (0x00100000&((data)<<20))
#define  MIS_GPIO_GP1DP_gpha49(data)                                             (0x00080000&((data)<<19))
#define  MIS_GPIO_GP1DP_gpha48(data)                                             (0x00040000&((data)<<18))
#define  MIS_GPIO_GP1DP_gpha47(data)                                             (0x00020000&((data)<<17))
#define  MIS_GPIO_GP1DP_gpha46(data)                                             (0x00010000&((data)<<16))
#define  MIS_GPIO_GP1DP_gpha45(data)                                             (0x00008000&((data)<<15))
#define  MIS_GPIO_GP1DP_gpha44(data)                                             (0x00004000&((data)<<14))
#define  MIS_GPIO_GP1DP_gpha43(data)                                             (0x00002000&((data)<<13))
#define  MIS_GPIO_GP1DP_gpha42(data)                                             (0x00001000&((data)<<12))
#define  MIS_GPIO_GP1DP_gpha41(data)                                             (0x00000800&((data)<<11))
#define  MIS_GPIO_GP1DP_gpha40(data)                                             (0x00000400&((data)<<10))
#define  MIS_GPIO_GP1DP_gpha39(data)                                             (0x00000200&((data)<<9))
#define  MIS_GPIO_GP1DP_gpha38(data)                                             (0x00000100&((data)<<8))
#define  MIS_GPIO_GP1DP_gpha37(data)                                             (0x00000080&((data)<<7))
#define  MIS_GPIO_GP1DP_gpha36(data)                                             (0x00000040&((data)<<6))
#define  MIS_GPIO_GP1DP_gpha35(data)                                             (0x00000020&((data)<<5))
#define  MIS_GPIO_GP1DP_gpha34(data)                                             (0x00000010&((data)<<4))
#define  MIS_GPIO_GP1DP_gpha33(data)                                             (0x00000008&((data)<<3))
#define  MIS_GPIO_GP1DP_gpha32(data)                                             (0x00000004&((data)<<2))
#define  MIS_GPIO_GP1DP_gpha31(data)                                             (0x00000002&((data)<<1))
#define  MIS_GPIO_GP1DP_write_data(data)                                         (0x00000001&(data))
#define  MIS_GPIO_GP1DP_get_gpha61(data)                                         ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP1DP_get_gpha60(data)                                         ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP1DP_get_gpha59(data)                                         ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP1DP_get_gpha58(data)                                         ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP1DP_get_gpha57(data)                                         ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP1DP_get_gpha56(data)                                         ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP1DP_get_gpha55(data)                                         ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP1DP_get_gpha54(data)                                         ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP1DP_get_gpha53(data)                                         ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP1DP_get_gpha52(data)                                         ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP1DP_get_gpha51(data)                                         ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP1DP_get_gpha50(data)                                         ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP1DP_get_gpha49(data)                                         ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP1DP_get_gpha48(data)                                         ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP1DP_get_gpha47(data)                                         ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP1DP_get_gpha46(data)                                         ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP1DP_get_gpha45(data)                                         ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP1DP_get_gpha44(data)                                         ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP1DP_get_gpha43(data)                                         ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP1DP_get_gpha42(data)                                         ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP1DP_get_gpha41(data)                                         ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP1DP_get_gpha40(data)                                         ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP1DP_get_gpha39(data)                                         ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP1DP_get_gpha38(data)                                         ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP1DP_get_gpha37(data)                                         ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP1DP_get_gpha36(data)                                         ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP1DP_get_gpha35(data)                                         ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP1DP_get_gpha34(data)                                         ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP1DP_get_gpha33(data)                                         ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP1DP_get_gpha32(data)                                         ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP1DP_get_gpha31(data)                                         ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP1DP_get_write_data(data)                                     (0x00000001&(data))

#define  MIS_GPIO_GP2DP                                                         0x1801BD6C
#define  MIS_GPIO_GP2DP_reg_addr                                                 "0xB801BD6C"
#define  MIS_GPIO_GP2DP_reg                                                      0xB801BD6C
#define  MIS_GPIO_GP2DP_inst_addr                                                "0x001A"
#define  set_MIS_GPIO_GP2DP_reg(data)                                            (*((volatile unsigned int*)MIS_GPIO_GP2DP_reg)=data)
#define  get_MIS_GPIO_GP2DP_reg                                                  (*((volatile unsigned int*)MIS_GPIO_GP2DP_reg))
#define  MIS_GPIO_GP2DP_gpha92_shift                                             (31)
#define  MIS_GPIO_GP2DP_gpha91_shift                                             (30)
#define  MIS_GPIO_GP2DP_gpha90_shift                                             (29)
#define  MIS_GPIO_GP2DP_gpha89_shift                                             (28)
#define  MIS_GPIO_GP2DP_gpha88_shift                                             (27)
#define  MIS_GPIO_GP2DP_gpha87_shift                                             (26)
#define  MIS_GPIO_GP2DP_gpha86_shift                                             (25)
#define  MIS_GPIO_GP2DP_gpha85_shift                                             (24)
#define  MIS_GPIO_GP2DP_gpha84_shift                                             (23)
#define  MIS_GPIO_GP2DP_gpha83_shift                                             (22)
#define  MIS_GPIO_GP2DP_gpha82_shift                                             (21)
#define  MIS_GPIO_GP2DP_gpha81_shift                                             (20)
#define  MIS_GPIO_GP2DP_gpha80_shift                                             (19)
#define  MIS_GPIO_GP2DP_gpha79_shift                                             (18)
#define  MIS_GPIO_GP2DP_gpha78_shift                                             (17)
#define  MIS_GPIO_GP2DP_gpha77_shift                                             (16)
#define  MIS_GPIO_GP2DP_gpha76_shift                                             (15)
#define  MIS_GPIO_GP2DP_gpha75_shift                                             (14)
#define  MIS_GPIO_GP2DP_gpha74_shift                                             (13)
#define  MIS_GPIO_GP2DP_gpha73_shift                                             (12)
#define  MIS_GPIO_GP2DP_gpha72_shift                                             (11)
#define  MIS_GPIO_GP2DP_gpha71_shift                                             (10)
#define  MIS_GPIO_GP2DP_gpha70_shift                                             (9)
#define  MIS_GPIO_GP2DP_gpha69_shift                                             (8)
#define  MIS_GPIO_GP2DP_gpha68_shift                                             (7)
#define  MIS_GPIO_GP2DP_gpha67_shift                                             (6)
#define  MIS_GPIO_GP2DP_gpha66_shift                                             (5)
#define  MIS_GPIO_GP2DP_gpha65_shift                                             (4)
#define  MIS_GPIO_GP2DP_gpha64_shift                                             (3)
#define  MIS_GPIO_GP2DP_gpha63_shift                                             (2)
#define  MIS_GPIO_GP2DP_gpha62_shift                                             (1)
#define  MIS_GPIO_GP2DP_write_data_shift                                         (0)
#define  MIS_GPIO_GP2DP_gpha92_mask                                              (0x80000000)
#define  MIS_GPIO_GP2DP_gpha91_mask                                              (0x40000000)
#define  MIS_GPIO_GP2DP_gpha90_mask                                              (0x20000000)
#define  MIS_GPIO_GP2DP_gpha89_mask                                              (0x10000000)
#define  MIS_GPIO_GP2DP_gpha88_mask                                              (0x08000000)
#define  MIS_GPIO_GP2DP_gpha87_mask                                              (0x04000000)
#define  MIS_GPIO_GP2DP_gpha86_mask                                              (0x02000000)
#define  MIS_GPIO_GP2DP_gpha85_mask                                              (0x01000000)
#define  MIS_GPIO_GP2DP_gpha84_mask                                              (0x00800000)
#define  MIS_GPIO_GP2DP_gpha83_mask                                              (0x00400000)
#define  MIS_GPIO_GP2DP_gpha82_mask                                              (0x00200000)
#define  MIS_GPIO_GP2DP_gpha81_mask                                              (0x00100000)
#define  MIS_GPIO_GP2DP_gpha80_mask                                              (0x00080000)
#define  MIS_GPIO_GP2DP_gpha79_mask                                              (0x00040000)
#define  MIS_GPIO_GP2DP_gpha78_mask                                              (0x00020000)
#define  MIS_GPIO_GP2DP_gpha77_mask                                              (0x00010000)
#define  MIS_GPIO_GP2DP_gpha76_mask                                              (0x00008000)
#define  MIS_GPIO_GP2DP_gpha75_mask                                              (0x00004000)
#define  MIS_GPIO_GP2DP_gpha74_mask                                              (0x00002000)
#define  MIS_GPIO_GP2DP_gpha73_mask                                              (0x00001000)
#define  MIS_GPIO_GP2DP_gpha72_mask                                              (0x00000800)
#define  MIS_GPIO_GP2DP_gpha71_mask                                              (0x00000400)
#define  MIS_GPIO_GP2DP_gpha70_mask                                              (0x00000200)
#define  MIS_GPIO_GP2DP_gpha69_mask                                              (0x00000100)
#define  MIS_GPIO_GP2DP_gpha68_mask                                              (0x00000080)
#define  MIS_GPIO_GP2DP_gpha67_mask                                              (0x00000040)
#define  MIS_GPIO_GP2DP_gpha66_mask                                              (0x00000020)
#define  MIS_GPIO_GP2DP_gpha65_mask                                              (0x00000010)
#define  MIS_GPIO_GP2DP_gpha64_mask                                              (0x00000008)
#define  MIS_GPIO_GP2DP_gpha63_mask                                              (0x00000004)
#define  MIS_GPIO_GP2DP_gpha62_mask                                              (0x00000002)
#define  MIS_GPIO_GP2DP_write_data_mask                                          (0x00000001)
#define  MIS_GPIO_GP2DP_gpha92(data)                                             (0x80000000&((data)<<31))
#define  MIS_GPIO_GP2DP_gpha91(data)                                             (0x40000000&((data)<<30))
#define  MIS_GPIO_GP2DP_gpha90(data)                                             (0x20000000&((data)<<29))
#define  MIS_GPIO_GP2DP_gpha89(data)                                             (0x10000000&((data)<<28))
#define  MIS_GPIO_GP2DP_gpha88(data)                                             (0x08000000&((data)<<27))
#define  MIS_GPIO_GP2DP_gpha87(data)                                             (0x04000000&((data)<<26))
#define  MIS_GPIO_GP2DP_gpha86(data)                                             (0x02000000&((data)<<25))
#define  MIS_GPIO_GP2DP_gpha85(data)                                             (0x01000000&((data)<<24))
#define  MIS_GPIO_GP2DP_gpha84(data)                                             (0x00800000&((data)<<23))
#define  MIS_GPIO_GP2DP_gpha83(data)                                             (0x00400000&((data)<<22))
#define  MIS_GPIO_GP2DP_gpha82(data)                                             (0x00200000&((data)<<21))
#define  MIS_GPIO_GP2DP_gpha81(data)                                             (0x00100000&((data)<<20))
#define  MIS_GPIO_GP2DP_gpha80(data)                                             (0x00080000&((data)<<19))
#define  MIS_GPIO_GP2DP_gpha79(data)                                             (0x00040000&((data)<<18))
#define  MIS_GPIO_GP2DP_gpha78(data)                                             (0x00020000&((data)<<17))
#define  MIS_GPIO_GP2DP_gpha77(data)                                             (0x00010000&((data)<<16))
#define  MIS_GPIO_GP2DP_gpha76(data)                                             (0x00008000&((data)<<15))
#define  MIS_GPIO_GP2DP_gpha75(data)                                             (0x00004000&((data)<<14))
#define  MIS_GPIO_GP2DP_gpha74(data)                                             (0x00002000&((data)<<13))
#define  MIS_GPIO_GP2DP_gpha73(data)                                             (0x00001000&((data)<<12))
#define  MIS_GPIO_GP2DP_gpha72(data)                                             (0x00000800&((data)<<11))
#define  MIS_GPIO_GP2DP_gpha71(data)                                             (0x00000400&((data)<<10))
#define  MIS_GPIO_GP2DP_gpha70(data)                                             (0x00000200&((data)<<9))
#define  MIS_GPIO_GP2DP_gpha69(data)                                             (0x00000100&((data)<<8))
#define  MIS_GPIO_GP2DP_gpha68(data)                                             (0x00000080&((data)<<7))
#define  MIS_GPIO_GP2DP_gpha67(data)                                             (0x00000040&((data)<<6))
#define  MIS_GPIO_GP2DP_gpha66(data)                                             (0x00000020&((data)<<5))
#define  MIS_GPIO_GP2DP_gpha65(data)                                             (0x00000010&((data)<<4))
#define  MIS_GPIO_GP2DP_gpha64(data)                                             (0x00000008&((data)<<3))
#define  MIS_GPIO_GP2DP_gpha63(data)                                             (0x00000004&((data)<<2))
#define  MIS_GPIO_GP2DP_gpha62(data)                                             (0x00000002&((data)<<1))
#define  MIS_GPIO_GP2DP_write_data(data)                                         (0x00000001&(data))
#define  MIS_GPIO_GP2DP_get_gpha92(data)                                         ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP2DP_get_gpha91(data)                                         ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP2DP_get_gpha90(data)                                         ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP2DP_get_gpha89(data)                                         ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP2DP_get_gpha88(data)                                         ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP2DP_get_gpha87(data)                                         ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP2DP_get_gpha86(data)                                         ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP2DP_get_gpha85(data)                                         ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP2DP_get_gpha84(data)                                         ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP2DP_get_gpha83(data)                                         ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP2DP_get_gpha82(data)                                         ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP2DP_get_gpha81(data)                                         ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP2DP_get_gpha80(data)                                         ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP2DP_get_gpha79(data)                                         ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP2DP_get_gpha78(data)                                         ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP2DP_get_gpha77(data)                                         ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP2DP_get_gpha76(data)                                         ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP2DP_get_gpha75(data)                                         ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP2DP_get_gpha74(data)                                         ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP2DP_get_gpha73(data)                                         ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP2DP_get_gpha72(data)                                         ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP2DP_get_gpha71(data)                                         ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP2DP_get_gpha70(data)                                         ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP2DP_get_gpha69(data)                                         ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP2DP_get_gpha68(data)                                         ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP2DP_get_gpha67(data)                                         ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP2DP_get_gpha66(data)                                         ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP2DP_get_gpha65(data)                                         ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP2DP_get_gpha64(data)                                         ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP2DP_get_gpha63(data)                                         ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP2DP_get_gpha62(data)                                         ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP2DP_get_write_data(data)                                     (0x00000001&(data))

#define  MIS_GPIO_GP3DP                                                         0x1801BD70
#define  MIS_GPIO_GP3DP_reg_addr                                                 "0xB801BD70"
#define  MIS_GPIO_GP3DP_reg                                                      0xB801BD70
#define  MIS_GPIO_GP3DP_inst_addr                                                "0x001B"
#define  set_MIS_GPIO_GP3DP_reg(data)                                            (*((volatile unsigned int*)MIS_GPIO_GP3DP_reg)=data)
#define  get_MIS_GPIO_GP3DP_reg                                                  (*((volatile unsigned int*)MIS_GPIO_GP3DP_reg))
#define  MIS_GPIO_GP3DP_gpha123_shift                                            (31)
#define  MIS_GPIO_GP3DP_gpha122_shift                                            (30)
#define  MIS_GPIO_GP3DP_gpha121_shift                                            (29)
#define  MIS_GPIO_GP3DP_gpha120_shift                                            (28)
#define  MIS_GPIO_GP3DP_gpha119_shift                                            (27)
#define  MIS_GPIO_GP3DP_gpha118_shift                                            (26)
#define  MIS_GPIO_GP3DP_gpha117_shift                                            (25)
#define  MIS_GPIO_GP3DP_gpha116_shift                                            (24)
#define  MIS_GPIO_GP3DP_gpha115_shift                                            (23)
#define  MIS_GPIO_GP3DP_gpha114_shift                                            (22)
#define  MIS_GPIO_GP3DP_gpha113_shift                                            (21)
#define  MIS_GPIO_GP3DP_gpha112_shift                                            (20)
#define  MIS_GPIO_GP3DP_gpha111_shift                                            (19)
#define  MIS_GPIO_GP3DP_gpha110_shift                                            (18)
#define  MIS_GPIO_GP3DP_gpha109_shift                                            (17)
#define  MIS_GPIO_GP3DP_gpha108_shift                                            (16)
#define  MIS_GPIO_GP3DP_gpha107_shift                                            (15)
#define  MIS_GPIO_GP3DP_gpha106_shift                                            (14)
#define  MIS_GPIO_GP3DP_gpha105_shift                                            (13)
#define  MIS_GPIO_GP3DP_gpha104_shift                                            (12)
#define  MIS_GPIO_GP3DP_gpha103_shift                                            (11)
#define  MIS_GPIO_GP3DP_gpha102_shift                                            (10)
#define  MIS_GPIO_GP3DP_gpha101_shift                                            (9)
#define  MIS_GPIO_GP3DP_gpha100_shift                                            (8)
#define  MIS_GPIO_GP3DP_gpha99_shift                                             (7)
#define  MIS_GPIO_GP3DP_gpha98_shift                                             (6)
#define  MIS_GPIO_GP3DP_gpha97_shift                                             (5)
#define  MIS_GPIO_GP3DP_gpha96_shift                                             (4)
#define  MIS_GPIO_GP3DP_gpha95_shift                                             (3)
#define  MIS_GPIO_GP3DP_gpha94_shift                                             (2)
#define  MIS_GPIO_GP3DP_gpha93_shift                                             (1)
#define  MIS_GPIO_GP3DP_write_data_shift                                         (0)
#define  MIS_GPIO_GP3DP_gpha123_mask                                             (0x80000000)
#define  MIS_GPIO_GP3DP_gpha122_mask                                             (0x40000000)
#define  MIS_GPIO_GP3DP_gpha121_mask                                             (0x20000000)
#define  MIS_GPIO_GP3DP_gpha120_mask                                             (0x10000000)
#define  MIS_GPIO_GP3DP_gpha119_mask                                             (0x08000000)
#define  MIS_GPIO_GP3DP_gpha118_mask                                             (0x04000000)
#define  MIS_GPIO_GP3DP_gpha117_mask                                             (0x02000000)
#define  MIS_GPIO_GP3DP_gpha116_mask                                             (0x01000000)
#define  MIS_GPIO_GP3DP_gpha115_mask                                             (0x00800000)
#define  MIS_GPIO_GP3DP_gpha114_mask                                             (0x00400000)
#define  MIS_GPIO_GP3DP_gpha113_mask                                             (0x00200000)
#define  MIS_GPIO_GP3DP_gpha112_mask                                             (0x00100000)
#define  MIS_GPIO_GP3DP_gpha111_mask                                             (0x00080000)
#define  MIS_GPIO_GP3DP_gpha110_mask                                             (0x00040000)
#define  MIS_GPIO_GP3DP_gpha109_mask                                             (0x00020000)
#define  MIS_GPIO_GP3DP_gpha108_mask                                             (0x00010000)
#define  MIS_GPIO_GP3DP_gpha107_mask                                             (0x00008000)
#define  MIS_GPIO_GP3DP_gpha106_mask                                             (0x00004000)
#define  MIS_GPIO_GP3DP_gpha105_mask                                             (0x00002000)
#define  MIS_GPIO_GP3DP_gpha104_mask                                             (0x00001000)
#define  MIS_GPIO_GP3DP_gpha103_mask                                             (0x00000800)
#define  MIS_GPIO_GP3DP_gpha102_mask                                             (0x00000400)
#define  MIS_GPIO_GP3DP_gpha101_mask                                             (0x00000200)
#define  MIS_GPIO_GP3DP_gpha100_mask                                             (0x00000100)
#define  MIS_GPIO_GP3DP_gpha99_mask                                              (0x00000080)
#define  MIS_GPIO_GP3DP_gpha98_mask                                              (0x00000040)
#define  MIS_GPIO_GP3DP_gpha97_mask                                              (0x00000020)
#define  MIS_GPIO_GP3DP_gpha96_mask                                              (0x00000010)
#define  MIS_GPIO_GP3DP_gpha95_mask                                              (0x00000008)
#define  MIS_GPIO_GP3DP_gpha94_mask                                              (0x00000004)
#define  MIS_GPIO_GP3DP_gpha93_mask                                              (0x00000002)
#define  MIS_GPIO_GP3DP_write_data_mask                                          (0x00000001)
#define  MIS_GPIO_GP3DP_gpha123(data)                                            (0x80000000&((data)<<31))
#define  MIS_GPIO_GP3DP_gpha122(data)                                            (0x40000000&((data)<<30))
#define  MIS_GPIO_GP3DP_gpha121(data)                                            (0x20000000&((data)<<29))
#define  MIS_GPIO_GP3DP_gpha120(data)                                            (0x10000000&((data)<<28))
#define  MIS_GPIO_GP3DP_gpha119(data)                                            (0x08000000&((data)<<27))
#define  MIS_GPIO_GP3DP_gpha118(data)                                            (0x04000000&((data)<<26))
#define  MIS_GPIO_GP3DP_gpha117(data)                                            (0x02000000&((data)<<25))
#define  MIS_GPIO_GP3DP_gpha116(data)                                            (0x01000000&((data)<<24))
#define  MIS_GPIO_GP3DP_gpha115(data)                                            (0x00800000&((data)<<23))
#define  MIS_GPIO_GP3DP_gpha114(data)                                            (0x00400000&((data)<<22))
#define  MIS_GPIO_GP3DP_gpha113(data)                                            (0x00200000&((data)<<21))
#define  MIS_GPIO_GP3DP_gpha112(data)                                            (0x00100000&((data)<<20))
#define  MIS_GPIO_GP3DP_gpha111(data)                                            (0x00080000&((data)<<19))
#define  MIS_GPIO_GP3DP_gpha110(data)                                            (0x00040000&((data)<<18))
#define  MIS_GPIO_GP3DP_gpha109(data)                                            (0x00020000&((data)<<17))
#define  MIS_GPIO_GP3DP_gpha108(data)                                            (0x00010000&((data)<<16))
#define  MIS_GPIO_GP3DP_gpha107(data)                                            (0x00008000&((data)<<15))
#define  MIS_GPIO_GP3DP_gpha106(data)                                            (0x00004000&((data)<<14))
#define  MIS_GPIO_GP3DP_gpha105(data)                                            (0x00002000&((data)<<13))
#define  MIS_GPIO_GP3DP_gpha104(data)                                            (0x00001000&((data)<<12))
#define  MIS_GPIO_GP3DP_gpha103(data)                                            (0x00000800&((data)<<11))
#define  MIS_GPIO_GP3DP_gpha102(data)                                            (0x00000400&((data)<<10))
#define  MIS_GPIO_GP3DP_gpha101(data)                                            (0x00000200&((data)<<9))
#define  MIS_GPIO_GP3DP_gpha100(data)                                            (0x00000100&((data)<<8))
#define  MIS_GPIO_GP3DP_gpha99(data)                                             (0x00000080&((data)<<7))
#define  MIS_GPIO_GP3DP_gpha98(data)                                             (0x00000040&((data)<<6))
#define  MIS_GPIO_GP3DP_gpha97(data)                                             (0x00000020&((data)<<5))
#define  MIS_GPIO_GP3DP_gpha96(data)                                             (0x00000010&((data)<<4))
#define  MIS_GPIO_GP3DP_gpha95(data)                                             (0x00000008&((data)<<3))
#define  MIS_GPIO_GP3DP_gpha94(data)                                             (0x00000004&((data)<<2))
#define  MIS_GPIO_GP3DP_gpha93(data)                                             (0x00000002&((data)<<1))
#define  MIS_GPIO_GP3DP_write_data(data)                                         (0x00000001&(data))
#define  MIS_GPIO_GP3DP_get_gpha123(data)                                        ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP3DP_get_gpha122(data)                                        ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP3DP_get_gpha121(data)                                        ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP3DP_get_gpha120(data)                                        ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP3DP_get_gpha119(data)                                        ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP3DP_get_gpha118(data)                                        ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP3DP_get_gpha117(data)                                        ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP3DP_get_gpha116(data)                                        ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP3DP_get_gpha115(data)                                        ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP3DP_get_gpha114(data)                                        ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP3DP_get_gpha113(data)                                        ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP3DP_get_gpha112(data)                                        ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP3DP_get_gpha111(data)                                        ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP3DP_get_gpha110(data)                                        ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP3DP_get_gpha109(data)                                        ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP3DP_get_gpha108(data)                                        ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP3DP_get_gpha107(data)                                        ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP3DP_get_gpha106(data)                                        ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP3DP_get_gpha105(data)                                        ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP3DP_get_gpha104(data)                                        ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP3DP_get_gpha103(data)                                        ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP3DP_get_gpha102(data)                                        ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP3DP_get_gpha101(data)                                        ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP3DP_get_gpha100(data)                                        ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP3DP_get_gpha99(data)                                         ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP3DP_get_gpha98(data)                                         ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP3DP_get_gpha97(data)                                         ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP3DP_get_gpha96(data)                                         ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP3DP_get_gpha95(data)                                         ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP3DP_get_gpha94(data)                                         ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP3DP_get_gpha93(data)                                         ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP3DP_get_write_data(data)                                     (0x00000001&(data))

#define  MIS_GPIO_GP4DP                                                         0x1801BD74
#define  MIS_GPIO_GP4DP_reg_addr                                                 "0xB801BD74"
#define  MIS_GPIO_GP4DP_reg                                                      0xB801BD74
#define  MIS_GPIO_GP4DP_inst_addr                                                "0x001C"
#define  set_MIS_GPIO_GP4DP_reg(data)                                            (*((volatile unsigned int*)MIS_GPIO_GP4DP_reg)=data)
#define  get_MIS_GPIO_GP4DP_reg                                                  (*((volatile unsigned int*)MIS_GPIO_GP4DP_reg))
#define  MIS_GPIO_GP4DP_gpha154_shift                                            (31)
#define  MIS_GPIO_GP4DP_gpha153_shift                                            (30)
#define  MIS_GPIO_GP4DP_gpha152_shift                                            (29)
#define  MIS_GPIO_GP4DP_gpha151_shift                                            (28)
#define  MIS_GPIO_GP4DP_gpha150_shift                                            (27)
#define  MIS_GPIO_GP4DP_gpha149_shift                                            (26)
#define  MIS_GPIO_GP4DP_gpha148_shift                                            (25)
#define  MIS_GPIO_GP4DP_gpha147_shift                                            (24)
#define  MIS_GPIO_GP4DP_gpha146_shift                                            (23)
#define  MIS_GPIO_GP4DP_gpha145_shift                                            (22)
#define  MIS_GPIO_GP4DP_gpha144_shift                                            (21)
#define  MIS_GPIO_GP4DP_gpha143_shift                                            (20)
#define  MIS_GPIO_GP4DP_gpha142_shift                                            (19)
#define  MIS_GPIO_GP4DP_gpha141_shift                                            (18)
#define  MIS_GPIO_GP4DP_gpha140_shift                                            (17)
#define  MIS_GPIO_GP4DP_gpha139_shift                                            (16)
#define  MIS_GPIO_GP4DP_gpha138_shift                                            (15)
#define  MIS_GPIO_GP4DP_gpha137_shift                                            (14)
#define  MIS_GPIO_GP4DP_gpha136_shift                                            (13)
#define  MIS_GPIO_GP4DP_gpha135_shift                                            (12)
#define  MIS_GPIO_GP4DP_gpha134_shift                                            (11)
#define  MIS_GPIO_GP4DP_gpha133_shift                                            (10)
#define  MIS_GPIO_GP4DP_gpha132_shift                                            (9)
#define  MIS_GPIO_GP4DP_gpha131_shift                                            (8)
#define  MIS_GPIO_GP4DP_gpha130_shift                                            (7)
#define  MIS_GPIO_GP4DP_gpha129_shift                                            (6)
#define  MIS_GPIO_GP4DP_gpha128_shift                                            (5)
#define  MIS_GPIO_GP4DP_gpha127_shift                                            (4)
#define  MIS_GPIO_GP4DP_gpha126_shift                                            (3)
#define  MIS_GPIO_GP4DP_gpha125_shift                                            (2)
#define  MIS_GPIO_GP4DP_gpha124_shift                                            (1)
#define  MIS_GPIO_GP4DP_write_data_shift                                         (0)
#define  MIS_GPIO_GP4DP_gpha154_mask                                             (0x80000000)
#define  MIS_GPIO_GP4DP_gpha153_mask                                             (0x40000000)
#define  MIS_GPIO_GP4DP_gpha152_mask                                             (0x20000000)
#define  MIS_GPIO_GP4DP_gpha151_mask                                             (0x10000000)
#define  MIS_GPIO_GP4DP_gpha150_mask                                             (0x08000000)
#define  MIS_GPIO_GP4DP_gpha149_mask                                             (0x04000000)
#define  MIS_GPIO_GP4DP_gpha148_mask                                             (0x02000000)
#define  MIS_GPIO_GP4DP_gpha147_mask                                             (0x01000000)
#define  MIS_GPIO_GP4DP_gpha146_mask                                             (0x00800000)
#define  MIS_GPIO_GP4DP_gpha145_mask                                             (0x00400000)
#define  MIS_GPIO_GP4DP_gpha144_mask                                             (0x00200000)
#define  MIS_GPIO_GP4DP_gpha143_mask                                             (0x00100000)
#define  MIS_GPIO_GP4DP_gpha142_mask                                             (0x00080000)
#define  MIS_GPIO_GP4DP_gpha141_mask                                             (0x00040000)
#define  MIS_GPIO_GP4DP_gpha140_mask                                             (0x00020000)
#define  MIS_GPIO_GP4DP_gpha139_mask                                             (0x00010000)
#define  MIS_GPIO_GP4DP_gpha138_mask                                             (0x00008000)
#define  MIS_GPIO_GP4DP_gpha137_mask                                             (0x00004000)
#define  MIS_GPIO_GP4DP_gpha136_mask                                             (0x00002000)
#define  MIS_GPIO_GP4DP_gpha135_mask                                             (0x00001000)
#define  MIS_GPIO_GP4DP_gpha134_mask                                             (0x00000800)
#define  MIS_GPIO_GP4DP_gpha133_mask                                             (0x00000400)
#define  MIS_GPIO_GP4DP_gpha132_mask                                             (0x00000200)
#define  MIS_GPIO_GP4DP_gpha131_mask                                             (0x00000100)
#define  MIS_GPIO_GP4DP_gpha130_mask                                             (0x00000080)
#define  MIS_GPIO_GP4DP_gpha129_mask                                             (0x00000040)
#define  MIS_GPIO_GP4DP_gpha128_mask                                             (0x00000020)
#define  MIS_GPIO_GP4DP_gpha127_mask                                             (0x00000010)
#define  MIS_GPIO_GP4DP_gpha126_mask                                             (0x00000008)
#define  MIS_GPIO_GP4DP_gpha125_mask                                             (0x00000004)
#define  MIS_GPIO_GP4DP_gpha124_mask                                             (0x00000002)
#define  MIS_GPIO_GP4DP_write_data_mask                                          (0x00000001)
#define  MIS_GPIO_GP4DP_gpha154(data)                                            (0x80000000&((data)<<31))
#define  MIS_GPIO_GP4DP_gpha153(data)                                            (0x40000000&((data)<<30))
#define  MIS_GPIO_GP4DP_gpha152(data)                                            (0x20000000&((data)<<29))
#define  MIS_GPIO_GP4DP_gpha151(data)                                            (0x10000000&((data)<<28))
#define  MIS_GPIO_GP4DP_gpha150(data)                                            (0x08000000&((data)<<27))
#define  MIS_GPIO_GP4DP_gpha149(data)                                            (0x04000000&((data)<<26))
#define  MIS_GPIO_GP4DP_gpha148(data)                                            (0x02000000&((data)<<25))
#define  MIS_GPIO_GP4DP_gpha147(data)                                            (0x01000000&((data)<<24))
#define  MIS_GPIO_GP4DP_gpha146(data)                                            (0x00800000&((data)<<23))
#define  MIS_GPIO_GP4DP_gpha145(data)                                            (0x00400000&((data)<<22))
#define  MIS_GPIO_GP4DP_gpha144(data)                                            (0x00200000&((data)<<21))
#define  MIS_GPIO_GP4DP_gpha143(data)                                            (0x00100000&((data)<<20))
#define  MIS_GPIO_GP4DP_gpha142(data)                                            (0x00080000&((data)<<19))
#define  MIS_GPIO_GP4DP_gpha141(data)                                            (0x00040000&((data)<<18))
#define  MIS_GPIO_GP4DP_gpha140(data)                                            (0x00020000&((data)<<17))
#define  MIS_GPIO_GP4DP_gpha139(data)                                            (0x00010000&((data)<<16))
#define  MIS_GPIO_GP4DP_gpha138(data)                                            (0x00008000&((data)<<15))
#define  MIS_GPIO_GP4DP_gpha137(data)                                            (0x00004000&((data)<<14))
#define  MIS_GPIO_GP4DP_gpha136(data)                                            (0x00002000&((data)<<13))
#define  MIS_GPIO_GP4DP_gpha135(data)                                            (0x00001000&((data)<<12))
#define  MIS_GPIO_GP4DP_gpha134(data)                                            (0x00000800&((data)<<11))
#define  MIS_GPIO_GP4DP_gpha133(data)                                            (0x00000400&((data)<<10))
#define  MIS_GPIO_GP4DP_gpha132(data)                                            (0x00000200&((data)<<9))
#define  MIS_GPIO_GP4DP_gpha131(data)                                            (0x00000100&((data)<<8))
#define  MIS_GPIO_GP4DP_gpha130(data)                                            (0x00000080&((data)<<7))
#define  MIS_GPIO_GP4DP_gpha129(data)                                            (0x00000040&((data)<<6))
#define  MIS_GPIO_GP4DP_gpha128(data)                                            (0x00000020&((data)<<5))
#define  MIS_GPIO_GP4DP_gpha127(data)                                            (0x00000010&((data)<<4))
#define  MIS_GPIO_GP4DP_gpha126(data)                                            (0x00000008&((data)<<3))
#define  MIS_GPIO_GP4DP_gpha125(data)                                            (0x00000004&((data)<<2))
#define  MIS_GPIO_GP4DP_gpha124(data)                                            (0x00000002&((data)<<1))
#define  MIS_GPIO_GP4DP_write_data(data)                                         (0x00000001&(data))
#define  MIS_GPIO_GP4DP_get_gpha154(data)                                        ((0x80000000&(data))>>31)
#define  MIS_GPIO_GP4DP_get_gpha153(data)                                        ((0x40000000&(data))>>30)
#define  MIS_GPIO_GP4DP_get_gpha152(data)                                        ((0x20000000&(data))>>29)
#define  MIS_GPIO_GP4DP_get_gpha151(data)                                        ((0x10000000&(data))>>28)
#define  MIS_GPIO_GP4DP_get_gpha150(data)                                        ((0x08000000&(data))>>27)
#define  MIS_GPIO_GP4DP_get_gpha149(data)                                        ((0x04000000&(data))>>26)
#define  MIS_GPIO_GP4DP_get_gpha148(data)                                        ((0x02000000&(data))>>25)
#define  MIS_GPIO_GP4DP_get_gpha147(data)                                        ((0x01000000&(data))>>24)
#define  MIS_GPIO_GP4DP_get_gpha146(data)                                        ((0x00800000&(data))>>23)
#define  MIS_GPIO_GP4DP_get_gpha145(data)                                        ((0x00400000&(data))>>22)
#define  MIS_GPIO_GP4DP_get_gpha144(data)                                        ((0x00200000&(data))>>21)
#define  MIS_GPIO_GP4DP_get_gpha143(data)                                        ((0x00100000&(data))>>20)
#define  MIS_GPIO_GP4DP_get_gpha142(data)                                        ((0x00080000&(data))>>19)
#define  MIS_GPIO_GP4DP_get_gpha141(data)                                        ((0x00040000&(data))>>18)
#define  MIS_GPIO_GP4DP_get_gpha140(data)                                        ((0x00020000&(data))>>17)
#define  MIS_GPIO_GP4DP_get_gpha139(data)                                        ((0x00010000&(data))>>16)
#define  MIS_GPIO_GP4DP_get_gpha138(data)                                        ((0x00008000&(data))>>15)
#define  MIS_GPIO_GP4DP_get_gpha137(data)                                        ((0x00004000&(data))>>14)
#define  MIS_GPIO_GP4DP_get_gpha136(data)                                        ((0x00002000&(data))>>13)
#define  MIS_GPIO_GP4DP_get_gpha135(data)                                        ((0x00001000&(data))>>12)
#define  MIS_GPIO_GP4DP_get_gpha134(data)                                        ((0x00000800&(data))>>11)
#define  MIS_GPIO_GP4DP_get_gpha133(data)                                        ((0x00000400&(data))>>10)
#define  MIS_GPIO_GP4DP_get_gpha132(data)                                        ((0x00000200&(data))>>9)
#define  MIS_GPIO_GP4DP_get_gpha131(data)                                        ((0x00000100&(data))>>8)
#define  MIS_GPIO_GP4DP_get_gpha130(data)                                        ((0x00000080&(data))>>7)
#define  MIS_GPIO_GP4DP_get_gpha129(data)                                        ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP4DP_get_gpha128(data)                                        ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP4DP_get_gpha127(data)                                        ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP4DP_get_gpha126(data)                                        ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP4DP_get_gpha125(data)                                        ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP4DP_get_gpha124(data)                                        ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP4DP_get_write_data(data)                                     (0x00000001&(data))

#define  MIS_GPIO_GP5DP                                                         0x1801BD78
#define  MIS_GPIO_GP5DP_reg_addr                                                 "0xB801BD78"
#define  MIS_GPIO_GP5DP_reg                                                      0xB801BD78
#define  MIS_GPIO_GP5DP_inst_addr                                                "0x001D"
#define  set_MIS_GPIO_GP5DP_reg(data)                                            (*((volatile unsigned int*)MIS_GPIO_GP5DP_reg)=data)
#define  get_MIS_GPIO_GP5DP_reg                                                  (*((volatile unsigned int*)MIS_GPIO_GP5DP_reg))
#define  MIS_GPIO_GP5DP_gpha160_shift                                            (6)
#define  MIS_GPIO_GP5DP_gpha159_shift                                            (5)
#define  MIS_GPIO_GP5DP_gpha158_shift                                            (4)
#define  MIS_GPIO_GP5DP_gpha157_shift                                            (3)
#define  MIS_GPIO_GP5DP_gpha156_shift                                            (2)
#define  MIS_GPIO_GP5DP_gpha155_shift                                            (1)
#define  MIS_GPIO_GP5DP_write_data_shift                                         (0)
#define  MIS_GPIO_GP5DP_gpha160_mask                                             (0x00000040)
#define  MIS_GPIO_GP5DP_gpha159_mask                                             (0x00000020)
#define  MIS_GPIO_GP5DP_gpha158_mask                                             (0x00000010)
#define  MIS_GPIO_GP5DP_gpha157_mask                                             (0x00000008)
#define  MIS_GPIO_GP5DP_gpha156_mask                                             (0x00000004)
#define  MIS_GPIO_GP5DP_gpha155_mask                                             (0x00000002)
#define  MIS_GPIO_GP5DP_write_data_mask                                          (0x00000001)
#define  MIS_GPIO_GP5DP_gpha160(data)                                            (0x00000040&((data)<<6))
#define  MIS_GPIO_GP5DP_gpha159(data)                                            (0x00000020&((data)<<5))
#define  MIS_GPIO_GP5DP_gpha158(data)                                            (0x00000010&((data)<<4))
#define  MIS_GPIO_GP5DP_gpha157(data)                                            (0x00000008&((data)<<3))
#define  MIS_GPIO_GP5DP_gpha156(data)                                            (0x00000004&((data)<<2))
#define  MIS_GPIO_GP5DP_gpha155(data)                                            (0x00000002&((data)<<1))
#define  MIS_GPIO_GP5DP_write_data(data)                                         (0x00000001&(data))
#define  MIS_GPIO_GP5DP_get_gpha160(data)                                        ((0x00000040&(data))>>6)
#define  MIS_GPIO_GP5DP_get_gpha159(data)                                        ((0x00000020&(data))>>5)
#define  MIS_GPIO_GP5DP_get_gpha158(data)                                        ((0x00000010&(data))>>4)
#define  MIS_GPIO_GP5DP_get_gpha157(data)                                        ((0x00000008&(data))>>3)
#define  MIS_GPIO_GP5DP_get_gpha156(data)                                        ((0x00000004&(data))>>2)
#define  MIS_GPIO_GP5DP_get_gpha155(data)                                        ((0x00000002&(data))>>1)
#define  MIS_GPIO_GP5DP_get_write_data(data)                                     (0x00000001&(data))

#define  MIS_GPIO_GPDEB                                                         0x1801BD7C
#define  MIS_GPIO_GPDEB_reg_addr                                                 "0xB801BD7C"
#define  MIS_GPIO_GPDEB_reg                                                      0xB801BD7C
#define  MIS_GPIO_GPDEB_inst_addr                                                "0x001E"
#define  set_MIS_GPIO_GPDEB_reg(data)                                            (*((volatile unsigned int*)MIS_GPIO_GPDEB_reg)=data)
#define  get_MIS_GPIO_GPDEB_reg                                                  (*((volatile unsigned int*)MIS_GPIO_GPDEB_reg))
#define  MIS_GPIO_GPDEB_write_enable8_shift                                      (31)
#define  MIS_GPIO_GPDEB_clk8_shift                                               (28)
#define  MIS_GPIO_GPDEB_write_enable7_shift                                      (27)
#define  MIS_GPIO_GPDEB_clk7_shift                                               (24)
#define  MIS_GPIO_GPDEB_write_enable6_shift                                      (23)
#define  MIS_GPIO_GPDEB_clk6_shift                                               (20)
#define  MIS_GPIO_GPDEB_write_enable5_shift                                      (19)
#define  MIS_GPIO_GPDEB_clk5_shift                                               (16)
#define  MIS_GPIO_GPDEB_write_enable4_shift                                      (15)
#define  MIS_GPIO_GPDEB_clk4_shift                                               (12)
#define  MIS_GPIO_GPDEB_write_enable3_shift                                      (11)
#define  MIS_GPIO_GPDEB_clk3_shift                                               (8)
#define  MIS_GPIO_GPDEB_write_enable2_shift                                      (7)
#define  MIS_GPIO_GPDEB_clk2_shift                                               (4)
#define  MIS_GPIO_GPDEB_write_enable1_shift                                      (3)
#define  MIS_GPIO_GPDEB_clk1_shift                                               (0)
#define  MIS_GPIO_GPDEB_write_enable8_mask                                       (0x80000000)
#define  MIS_GPIO_GPDEB_clk8_mask                                                (0x70000000)
#define  MIS_GPIO_GPDEB_write_enable7_mask                                       (0x08000000)
#define  MIS_GPIO_GPDEB_clk7_mask                                                (0x07000000)
#define  MIS_GPIO_GPDEB_write_enable6_mask                                       (0x00800000)
#define  MIS_GPIO_GPDEB_clk6_mask                                                (0x00700000)
#define  MIS_GPIO_GPDEB_write_enable5_mask                                       (0x00080000)
#define  MIS_GPIO_GPDEB_clk5_mask                                                (0x00070000)
#define  MIS_GPIO_GPDEB_write_enable4_mask                                       (0x00008000)
#define  MIS_GPIO_GPDEB_clk4_mask                                                (0x00007000)
#define  MIS_GPIO_GPDEB_write_enable3_mask                                       (0x00000800)
#define  MIS_GPIO_GPDEB_clk3_mask                                                (0x00000700)
#define  MIS_GPIO_GPDEB_write_enable2_mask                                       (0x00000080)
#define  MIS_GPIO_GPDEB_clk2_mask                                                (0x00000070)
#define  MIS_GPIO_GPDEB_write_enable1_mask                                       (0x00000008)
#define  MIS_GPIO_GPDEB_clk1_mask                                                (0x00000007)
#define  MIS_GPIO_GPDEB_write_enable8(data)                                      (0x80000000&((data)<<31))
#define  MIS_GPIO_GPDEB_clk8(data)                                               (0x70000000&((data)<<28))
#define  MIS_GPIO_GPDEB_write_enable7(data)                                      (0x08000000&((data)<<27))
#define  MIS_GPIO_GPDEB_clk7(data)                                               (0x07000000&((data)<<24))
#define  MIS_GPIO_GPDEB_write_enable6(data)                                      (0x00800000&((data)<<23))
#define  MIS_GPIO_GPDEB_clk6(data)                                               (0x00700000&((data)<<20))
#define  MIS_GPIO_GPDEB_write_enable5(data)                                      (0x00080000&((data)<<19))
#define  MIS_GPIO_GPDEB_clk5(data)                                               (0x00070000&((data)<<16))
#define  MIS_GPIO_GPDEB_write_enable4(data)                                      (0x00008000&((data)<<15))
#define  MIS_GPIO_GPDEB_clk4(data)                                               (0x00007000&((data)<<12))
#define  MIS_GPIO_GPDEB_write_enable3(data)                                      (0x00000800&((data)<<11))
#define  MIS_GPIO_GPDEB_clk3(data)                                               (0x00000700&((data)<<8))
#define  MIS_GPIO_GPDEB_write_enable2(data)                                      (0x00000080&((data)<<7))
#define  MIS_GPIO_GPDEB_clk2(data)                                               (0x00000070&((data)<<4))
#define  MIS_GPIO_GPDEB_write_enable1(data)                                      (0x00000008&((data)<<3))
#define  MIS_GPIO_GPDEB_clk1(data)                                               (0x00000007&(data))
#define  MIS_GPIO_GPDEB_get_write_enable8(data)                                  ((0x80000000&(data))>>31)
#define  MIS_GPIO_GPDEB_get_clk8(data)                                           ((0x70000000&(data))>>28)
#define  MIS_GPIO_GPDEB_get_write_enable7(data)                                  ((0x08000000&(data))>>27)
#define  MIS_GPIO_GPDEB_get_clk7(data)                                           ((0x07000000&(data))>>24)
#define  MIS_GPIO_GPDEB_get_write_enable6(data)                                  ((0x00800000&(data))>>23)
#define  MIS_GPIO_GPDEB_get_clk6(data)                                           ((0x00700000&(data))>>20)
#define  MIS_GPIO_GPDEB_get_write_enable5(data)                                  ((0x00080000&(data))>>19)
#define  MIS_GPIO_GPDEB_get_clk5(data)                                           ((0x00070000&(data))>>16)
#define  MIS_GPIO_GPDEB_get_write_enable4(data)                                  ((0x00008000&(data))>>15)
#define  MIS_GPIO_GPDEB_get_clk4(data)                                           ((0x00007000&(data))>>12)
#define  MIS_GPIO_GPDEB_get_write_enable3(data)                                  ((0x00000800&(data))>>11)
#define  MIS_GPIO_GPDEB_get_clk3(data)                                           ((0x00000700&(data))>>8)
#define  MIS_GPIO_GPDEB_get_write_enable2(data)                                  ((0x00000080&(data))>>7)
#define  MIS_GPIO_GPDEB_get_clk2(data)                                           ((0x00000070&(data))>>4)
#define  MIS_GPIO_GPDEB_get_write_enable1(data)                                  ((0x00000008&(data))>>3)
#define  MIS_GPIO_GPDEB_get_clk1(data)                                           (0x00000007&(data))

#define  MIS_GPIO_GPDEB_1                                                       0x1801BD80
#define  MIS_GPIO_GPDEB_1_reg_addr                                               "0xB801BD80"
#define  MIS_GPIO_GPDEB_1_reg                                                    0xB801BD80
#define  MIS_GPIO_GPDEB_1_inst_addr                                              "0x001F"
#define  set_MIS_GPIO_GPDEB_1_reg(data)                                          (*((volatile unsigned int*)MIS_GPIO_GPDEB_1_reg)=data)
#define  get_MIS_GPIO_GPDEB_1_reg                                                (*((volatile unsigned int*)MIS_GPIO_GPDEB_1_reg))
#define  MIS_GPIO_GPDEB_1_write_enable3_shift                                    (11)
#define  MIS_GPIO_GPDEB_1_clk3_shift                                             (8)
#define  MIS_GPIO_GPDEB_1_write_enable2_shift                                    (7)
#define  MIS_GPIO_GPDEB_1_clk2_shift                                             (4)
#define  MIS_GPIO_GPDEB_1_write_enable1_shift                                    (3)
#define  MIS_GPIO_GPDEB_1_clk1_shift                                             (0)
#define  MIS_GPIO_GPDEB_1_write_enable3_mask                                     (0x00000800)
#define  MIS_GPIO_GPDEB_1_clk3_mask                                              (0x00000700)
#define  MIS_GPIO_GPDEB_1_write_enable2_mask                                     (0x00000080)
#define  MIS_GPIO_GPDEB_1_clk2_mask                                              (0x00000070)
#define  MIS_GPIO_GPDEB_1_write_enable1_mask                                     (0x00000008)
#define  MIS_GPIO_GPDEB_1_clk1_mask                                              (0x00000007)
#define  MIS_GPIO_GPDEB_1_write_enable3(data)                                    (0x00000800&((data)<<11))
#define  MIS_GPIO_GPDEB_1_clk3(data)                                             (0x00000700&((data)<<8))
#define  MIS_GPIO_GPDEB_1_write_enable2(data)                                    (0x00000080&((data)<<7))
#define  MIS_GPIO_GPDEB_1_clk2(data)                                             (0x00000070&((data)<<4))
#define  MIS_GPIO_GPDEB_1_write_enable1(data)                                    (0x00000008&((data)<<3))
#define  MIS_GPIO_GPDEB_1_clk1(data)                                             (0x00000007&(data))
#define  MIS_GPIO_GPDEB_1_get_write_enable3(data)                                ((0x00000800&(data))>>11)
#define  MIS_GPIO_GPDEB_1_get_clk3(data)                                         ((0x00000700&(data))>>8)
#define  MIS_GPIO_GPDEB_1_get_write_enable2(data)                                ((0x00000080&(data))>>7)
#define  MIS_GPIO_GPDEB_1_get_clk2(data)                                         ((0x00000070&(data))>>4)
#define  MIS_GPIO_GPDEB_1_get_write_enable1(data)                                ((0x00000008&(data))>>3)
#define  MIS_GPIO_GPDEB_1_get_clk1(data)                                         (0x00000007&(data))

#define  MIS_GPIO_ISR_GP0A                                                      0x1801BD84
#define  MIS_GPIO_ISR_GP0A_reg_addr                                              "0xB801BD84"
#define  MIS_GPIO_ISR_GP0A_reg                                                   0xB801BD84
#define  MIS_GPIO_ISR_GP0A_inst_addr                                             "0x0020"
#define  set_MIS_GPIO_ISR_GP0A_reg(data)                                         (*((volatile unsigned int*)MIS_GPIO_ISR_GP0A_reg)=data)
#define  get_MIS_GPIO_ISR_GP0A_reg                                               (*((volatile unsigned int*)MIS_GPIO_ISR_GP0A_reg))
#define  MIS_GPIO_ISR_GP0A_int30_shift                                           (31)
#define  MIS_GPIO_ISR_GP0A_int29_shift                                           (30)
#define  MIS_GPIO_ISR_GP0A_int28_shift                                           (29)
#define  MIS_GPIO_ISR_GP0A_int27_shift                                           (28)
#define  MIS_GPIO_ISR_GP0A_int26_shift                                           (27)
#define  MIS_GPIO_ISR_GP0A_int25_shift                                           (26)
#define  MIS_GPIO_ISR_GP0A_int24_shift                                           (25)
#define  MIS_GPIO_ISR_GP0A_int23_shift                                           (24)
#define  MIS_GPIO_ISR_GP0A_int22_shift                                           (23)
#define  MIS_GPIO_ISR_GP0A_int21_shift                                           (22)
#define  MIS_GPIO_ISR_GP0A_int20_shift                                           (21)
#define  MIS_GPIO_ISR_GP0A_int19_shift                                           (20)
#define  MIS_GPIO_ISR_GP0A_int18_shift                                           (19)
#define  MIS_GPIO_ISR_GP0A_int17_shift                                           (18)
#define  MIS_GPIO_ISR_GP0A_int16_shift                                           (17)
#define  MIS_GPIO_ISR_GP0A_int15_shift                                           (16)
#define  MIS_GPIO_ISR_GP0A_int14_shift                                           (15)
#define  MIS_GPIO_ISR_GP0A_int13_shift                                           (14)
#define  MIS_GPIO_ISR_GP0A_int12_shift                                           (13)
#define  MIS_GPIO_ISR_GP0A_int11_shift                                           (12)
#define  MIS_GPIO_ISR_GP0A_int10_shift                                           (11)
#define  MIS_GPIO_ISR_GP0A_int9_shift                                            (10)
#define  MIS_GPIO_ISR_GP0A_int8_shift                                            (9)
#define  MIS_GPIO_ISR_GP0A_int7_shift                                            (8)
#define  MIS_GPIO_ISR_GP0A_int6_shift                                            (7)
#define  MIS_GPIO_ISR_GP0A_int5_shift                                            (6)
#define  MIS_GPIO_ISR_GP0A_int4_shift                                            (5)
#define  MIS_GPIO_ISR_GP0A_int3_shift                                            (4)
#define  MIS_GPIO_ISR_GP0A_int2_shift                                            (3)
#define  MIS_GPIO_ISR_GP0A_int1_shift                                            (2)
#define  MIS_GPIO_ISR_GP0A_int0_shift                                            (1)
#define  MIS_GPIO_ISR_GP0A_write_data_shift                                      (0)
#define  MIS_GPIO_ISR_GP0A_int30_mask                                            (0x80000000)
#define  MIS_GPIO_ISR_GP0A_int29_mask                                            (0x40000000)
#define  MIS_GPIO_ISR_GP0A_int28_mask                                            (0x20000000)
#define  MIS_GPIO_ISR_GP0A_int27_mask                                            (0x10000000)
#define  MIS_GPIO_ISR_GP0A_int26_mask                                            (0x08000000)
#define  MIS_GPIO_ISR_GP0A_int25_mask                                            (0x04000000)
#define  MIS_GPIO_ISR_GP0A_int24_mask                                            (0x02000000)
#define  MIS_GPIO_ISR_GP0A_int23_mask                                            (0x01000000)
#define  MIS_GPIO_ISR_GP0A_int22_mask                                            (0x00800000)
#define  MIS_GPIO_ISR_GP0A_int21_mask                                            (0x00400000)
#define  MIS_GPIO_ISR_GP0A_int20_mask                                            (0x00200000)
#define  MIS_GPIO_ISR_GP0A_int19_mask                                            (0x00100000)
#define  MIS_GPIO_ISR_GP0A_int18_mask                                            (0x00080000)
#define  MIS_GPIO_ISR_GP0A_int17_mask                                            (0x00040000)
#define  MIS_GPIO_ISR_GP0A_int16_mask                                            (0x00020000)
#define  MIS_GPIO_ISR_GP0A_int15_mask                                            (0x00010000)
#define  MIS_GPIO_ISR_GP0A_int14_mask                                            (0x00008000)
#define  MIS_GPIO_ISR_GP0A_int13_mask                                            (0x00004000)
#define  MIS_GPIO_ISR_GP0A_int12_mask                                            (0x00002000)
#define  MIS_GPIO_ISR_GP0A_int11_mask                                            (0x00001000)
#define  MIS_GPIO_ISR_GP0A_int10_mask                                            (0x00000800)
#define  MIS_GPIO_ISR_GP0A_int9_mask                                             (0x00000400)
#define  MIS_GPIO_ISR_GP0A_int8_mask                                             (0x00000200)
#define  MIS_GPIO_ISR_GP0A_int7_mask                                             (0x00000100)
#define  MIS_GPIO_ISR_GP0A_int6_mask                                             (0x00000080)
#define  MIS_GPIO_ISR_GP0A_int5_mask                                             (0x00000040)
#define  MIS_GPIO_ISR_GP0A_int4_mask                                             (0x00000020)
#define  MIS_GPIO_ISR_GP0A_int3_mask                                             (0x00000010)
#define  MIS_GPIO_ISR_GP0A_int2_mask                                             (0x00000008)
#define  MIS_GPIO_ISR_GP0A_int1_mask                                             (0x00000004)
#define  MIS_GPIO_ISR_GP0A_int0_mask                                             (0x00000002)
#define  MIS_GPIO_ISR_GP0A_write_data_mask                                       (0x00000001)
#define  MIS_GPIO_ISR_GP0A_int30(data)                                           (0x80000000&((data)<<31))
#define  MIS_GPIO_ISR_GP0A_int29(data)                                           (0x40000000&((data)<<30))
#define  MIS_GPIO_ISR_GP0A_int28(data)                                           (0x20000000&((data)<<29))
#define  MIS_GPIO_ISR_GP0A_int27(data)                                           (0x10000000&((data)<<28))
#define  MIS_GPIO_ISR_GP0A_int26(data)                                           (0x08000000&((data)<<27))
#define  MIS_GPIO_ISR_GP0A_int25(data)                                           (0x04000000&((data)<<26))
#define  MIS_GPIO_ISR_GP0A_int24(data)                                           (0x02000000&((data)<<25))
#define  MIS_GPIO_ISR_GP0A_int23(data)                                           (0x01000000&((data)<<24))
#define  MIS_GPIO_ISR_GP0A_int22(data)                                           (0x00800000&((data)<<23))
#define  MIS_GPIO_ISR_GP0A_int21(data)                                           (0x00400000&((data)<<22))
#define  MIS_GPIO_ISR_GP0A_int20(data)                                           (0x00200000&((data)<<21))
#define  MIS_GPIO_ISR_GP0A_int19(data)                                           (0x00100000&((data)<<20))
#define  MIS_GPIO_ISR_GP0A_int18(data)                                           (0x00080000&((data)<<19))
#define  MIS_GPIO_ISR_GP0A_int17(data)                                           (0x00040000&((data)<<18))
#define  MIS_GPIO_ISR_GP0A_int16(data)                                           (0x00020000&((data)<<17))
#define  MIS_GPIO_ISR_GP0A_int15(data)                                           (0x00010000&((data)<<16))
#define  MIS_GPIO_ISR_GP0A_int14(data)                                           (0x00008000&((data)<<15))
#define  MIS_GPIO_ISR_GP0A_int13(data)                                           (0x00004000&((data)<<14))
#define  MIS_GPIO_ISR_GP0A_int12(data)                                           (0x00002000&((data)<<13))
#define  MIS_GPIO_ISR_GP0A_int11(data)                                           (0x00001000&((data)<<12))
#define  MIS_GPIO_ISR_GP0A_int10(data)                                           (0x00000800&((data)<<11))
#define  MIS_GPIO_ISR_GP0A_int9(data)                                            (0x00000400&((data)<<10))
#define  MIS_GPIO_ISR_GP0A_int8(data)                                            (0x00000200&((data)<<9))
#define  MIS_GPIO_ISR_GP0A_int7(data)                                            (0x00000100&((data)<<8))
#define  MIS_GPIO_ISR_GP0A_int6(data)                                            (0x00000080&((data)<<7))
#define  MIS_GPIO_ISR_GP0A_int5(data)                                            (0x00000040&((data)<<6))
#define  MIS_GPIO_ISR_GP0A_int4(data)                                            (0x00000020&((data)<<5))
#define  MIS_GPIO_ISR_GP0A_int3(data)                                            (0x00000010&((data)<<4))
#define  MIS_GPIO_ISR_GP0A_int2(data)                                            (0x00000008&((data)<<3))
#define  MIS_GPIO_ISR_GP0A_int1(data)                                            (0x00000004&((data)<<2))
#define  MIS_GPIO_ISR_GP0A_int0(data)                                            (0x00000002&((data)<<1))
#define  MIS_GPIO_ISR_GP0A_write_data(data)                                      (0x00000001&(data))
#define  MIS_GPIO_ISR_GP0A_get_int30(data)                                       ((0x80000000&(data))>>31)
#define  MIS_GPIO_ISR_GP0A_get_int29(data)                                       ((0x40000000&(data))>>30)
#define  MIS_GPIO_ISR_GP0A_get_int28(data)                                       ((0x20000000&(data))>>29)
#define  MIS_GPIO_ISR_GP0A_get_int27(data)                                       ((0x10000000&(data))>>28)
#define  MIS_GPIO_ISR_GP0A_get_int26(data)                                       ((0x08000000&(data))>>27)
#define  MIS_GPIO_ISR_GP0A_get_int25(data)                                       ((0x04000000&(data))>>26)
#define  MIS_GPIO_ISR_GP0A_get_int24(data)                                       ((0x02000000&(data))>>25)
#define  MIS_GPIO_ISR_GP0A_get_int23(data)                                       ((0x01000000&(data))>>24)
#define  MIS_GPIO_ISR_GP0A_get_int22(data)                                       ((0x00800000&(data))>>23)
#define  MIS_GPIO_ISR_GP0A_get_int21(data)                                       ((0x00400000&(data))>>22)
#define  MIS_GPIO_ISR_GP0A_get_int20(data)                                       ((0x00200000&(data))>>21)
#define  MIS_GPIO_ISR_GP0A_get_int19(data)                                       ((0x00100000&(data))>>20)
#define  MIS_GPIO_ISR_GP0A_get_int18(data)                                       ((0x00080000&(data))>>19)
#define  MIS_GPIO_ISR_GP0A_get_int17(data)                                       ((0x00040000&(data))>>18)
#define  MIS_GPIO_ISR_GP0A_get_int16(data)                                       ((0x00020000&(data))>>17)
#define  MIS_GPIO_ISR_GP0A_get_int15(data)                                       ((0x00010000&(data))>>16)
#define  MIS_GPIO_ISR_GP0A_get_int14(data)                                       ((0x00008000&(data))>>15)
#define  MIS_GPIO_ISR_GP0A_get_int13(data)                                       ((0x00004000&(data))>>14)
#define  MIS_GPIO_ISR_GP0A_get_int12(data)                                       ((0x00002000&(data))>>13)
#define  MIS_GPIO_ISR_GP0A_get_int11(data)                                       ((0x00001000&(data))>>12)
#define  MIS_GPIO_ISR_GP0A_get_int10(data)                                       ((0x00000800&(data))>>11)
#define  MIS_GPIO_ISR_GP0A_get_int9(data)                                        ((0x00000400&(data))>>10)
#define  MIS_GPIO_ISR_GP0A_get_int8(data)                                        ((0x00000200&(data))>>9)
#define  MIS_GPIO_ISR_GP0A_get_int7(data)                                        ((0x00000100&(data))>>8)
#define  MIS_GPIO_ISR_GP0A_get_int6(data)                                        ((0x00000080&(data))>>7)
#define  MIS_GPIO_ISR_GP0A_get_int5(data)                                        ((0x00000040&(data))>>6)
#define  MIS_GPIO_ISR_GP0A_get_int4(data)                                        ((0x00000020&(data))>>5)
#define  MIS_GPIO_ISR_GP0A_get_int3(data)                                        ((0x00000010&(data))>>4)
#define  MIS_GPIO_ISR_GP0A_get_int2(data)                                        ((0x00000008&(data))>>3)
#define  MIS_GPIO_ISR_GP0A_get_int1(data)                                        ((0x00000004&(data))>>2)
#define  MIS_GPIO_ISR_GP0A_get_int0(data)                                        ((0x00000002&(data))>>1)
#define  MIS_GPIO_ISR_GP0A_get_write_data(data)                                  (0x00000001&(data))

#define  MIS_GPIO_ISR_GP1A                                                      0x1801BD88
#define  MIS_GPIO_ISR_GP1A_reg_addr                                              "0xB801BD88"
#define  MIS_GPIO_ISR_GP1A_reg                                                   0xB801BD88
#define  MIS_GPIO_ISR_GP1A_inst_addr                                             "0x0021"
#define  set_MIS_GPIO_ISR_GP1A_reg(data)                                         (*((volatile unsigned int*)MIS_GPIO_ISR_GP1A_reg)=data)
#define  get_MIS_GPIO_ISR_GP1A_reg                                               (*((volatile unsigned int*)MIS_GPIO_ISR_GP1A_reg))
#define  MIS_GPIO_ISR_GP1A_int61_shift                                           (31)
#define  MIS_GPIO_ISR_GP1A_int60_shift                                           (30)
#define  MIS_GPIO_ISR_GP1A_int59_shift                                           (29)
#define  MIS_GPIO_ISR_GP1A_int58_shift                                           (28)
#define  MIS_GPIO_ISR_GP1A_int57_shift                                           (27)
#define  MIS_GPIO_ISR_GP1A_int56_shift                                           (26)
#define  MIS_GPIO_ISR_GP1A_int55_shift                                           (25)
#define  MIS_GPIO_ISR_GP1A_int54_shift                                           (24)
#define  MIS_GPIO_ISR_GP1A_int53_shift                                           (23)
#define  MIS_GPIO_ISR_GP1A_int52_shift                                           (22)
#define  MIS_GPIO_ISR_GP1A_int51_shift                                           (21)
#define  MIS_GPIO_ISR_GP1A_int50_shift                                           (20)
#define  MIS_GPIO_ISR_GP1A_int49_shift                                           (19)
#define  MIS_GPIO_ISR_GP1A_int48_shift                                           (18)
#define  MIS_GPIO_ISR_GP1A_int47_shift                                           (17)
#define  MIS_GPIO_ISR_GP1A_int46_shift                                           (16)
#define  MIS_GPIO_ISR_GP1A_int45_shift                                           (15)
#define  MIS_GPIO_ISR_GP1A_int44_shift                                           (14)
#define  MIS_GPIO_ISR_GP1A_int43_shift                                           (13)
#define  MIS_GPIO_ISR_GP1A_int42_shift                                           (12)
#define  MIS_GPIO_ISR_GP1A_int41_shift                                           (11)
#define  MIS_GPIO_ISR_GP1A_int40_shift                                           (10)
#define  MIS_GPIO_ISR_GP1A_int39_shift                                           (9)
#define  MIS_GPIO_ISR_GP1A_int38_shift                                           (8)
#define  MIS_GPIO_ISR_GP1A_int37_shift                                           (7)
#define  MIS_GPIO_ISR_GP1A_int36_shift                                           (6)
#define  MIS_GPIO_ISR_GP1A_int35_shift                                           (5)
#define  MIS_GPIO_ISR_GP1A_int34_shift                                           (4)
#define  MIS_GPIO_ISR_GP1A_int33_shift                                           (3)
#define  MIS_GPIO_ISR_GP1A_int32_shift                                           (2)
#define  MIS_GPIO_ISR_GP1A_int31_shift                                           (1)
#define  MIS_GPIO_ISR_GP1A_write_data_shift                                      (0)
#define  MIS_GPIO_ISR_GP1A_int61_mask                                            (0x80000000)
#define  MIS_GPIO_ISR_GP1A_int60_mask                                            (0x40000000)
#define  MIS_GPIO_ISR_GP1A_int59_mask                                            (0x20000000)
#define  MIS_GPIO_ISR_GP1A_int58_mask                                            (0x10000000)
#define  MIS_GPIO_ISR_GP1A_int57_mask                                            (0x08000000)
#define  MIS_GPIO_ISR_GP1A_int56_mask                                            (0x04000000)
#define  MIS_GPIO_ISR_GP1A_int55_mask                                            (0x02000000)
#define  MIS_GPIO_ISR_GP1A_int54_mask                                            (0x01000000)
#define  MIS_GPIO_ISR_GP1A_int53_mask                                            (0x00800000)
#define  MIS_GPIO_ISR_GP1A_int52_mask                                            (0x00400000)
#define  MIS_GPIO_ISR_GP1A_int51_mask                                            (0x00200000)
#define  MIS_GPIO_ISR_GP1A_int50_mask                                            (0x00100000)
#define  MIS_GPIO_ISR_GP1A_int49_mask                                            (0x00080000)
#define  MIS_GPIO_ISR_GP1A_int48_mask                                            (0x00040000)
#define  MIS_GPIO_ISR_GP1A_int47_mask                                            (0x00020000)
#define  MIS_GPIO_ISR_GP1A_int46_mask                                            (0x00010000)
#define  MIS_GPIO_ISR_GP1A_int45_mask                                            (0x00008000)
#define  MIS_GPIO_ISR_GP1A_int44_mask                                            (0x00004000)
#define  MIS_GPIO_ISR_GP1A_int43_mask                                            (0x00002000)
#define  MIS_GPIO_ISR_GP1A_int42_mask                                            (0x00001000)
#define  MIS_GPIO_ISR_GP1A_int41_mask                                            (0x00000800)
#define  MIS_GPIO_ISR_GP1A_int40_mask                                            (0x00000400)
#define  MIS_GPIO_ISR_GP1A_int39_mask                                            (0x00000200)
#define  MIS_GPIO_ISR_GP1A_int38_mask                                            (0x00000100)
#define  MIS_GPIO_ISR_GP1A_int37_mask                                            (0x00000080)
#define  MIS_GPIO_ISR_GP1A_int36_mask                                            (0x00000040)
#define  MIS_GPIO_ISR_GP1A_int35_mask                                            (0x00000020)
#define  MIS_GPIO_ISR_GP1A_int34_mask                                            (0x00000010)
#define  MIS_GPIO_ISR_GP1A_int33_mask                                            (0x00000008)
#define  MIS_GPIO_ISR_GP1A_int32_mask                                            (0x00000004)
#define  MIS_GPIO_ISR_GP1A_int31_mask                                            (0x00000002)
#define  MIS_GPIO_ISR_GP1A_write_data_mask                                       (0x00000001)
#define  MIS_GPIO_ISR_GP1A_int61(data)                                           (0x80000000&((data)<<31))
#define  MIS_GPIO_ISR_GP1A_int60(data)                                           (0x40000000&((data)<<30))
#define  MIS_GPIO_ISR_GP1A_int59(data)                                           (0x20000000&((data)<<29))
#define  MIS_GPIO_ISR_GP1A_int58(data)                                           (0x10000000&((data)<<28))
#define  MIS_GPIO_ISR_GP1A_int57(data)                                           (0x08000000&((data)<<27))
#define  MIS_GPIO_ISR_GP1A_int56(data)                                           (0x04000000&((data)<<26))
#define  MIS_GPIO_ISR_GP1A_int55(data)                                           (0x02000000&((data)<<25))
#define  MIS_GPIO_ISR_GP1A_int54(data)                                           (0x01000000&((data)<<24))
#define  MIS_GPIO_ISR_GP1A_int53(data)                                           (0x00800000&((data)<<23))
#define  MIS_GPIO_ISR_GP1A_int52(data)                                           (0x00400000&((data)<<22))
#define  MIS_GPIO_ISR_GP1A_int51(data)                                           (0x00200000&((data)<<21))
#define  MIS_GPIO_ISR_GP1A_int50(data)                                           (0x00100000&((data)<<20))
#define  MIS_GPIO_ISR_GP1A_int49(data)                                           (0x00080000&((data)<<19))
#define  MIS_GPIO_ISR_GP1A_int48(data)                                           (0x00040000&((data)<<18))
#define  MIS_GPIO_ISR_GP1A_int47(data)                                           (0x00020000&((data)<<17))
#define  MIS_GPIO_ISR_GP1A_int46(data)                                           (0x00010000&((data)<<16))
#define  MIS_GPIO_ISR_GP1A_int45(data)                                           (0x00008000&((data)<<15))
#define  MIS_GPIO_ISR_GP1A_int44(data)                                           (0x00004000&((data)<<14))
#define  MIS_GPIO_ISR_GP1A_int43(data)                                           (0x00002000&((data)<<13))
#define  MIS_GPIO_ISR_GP1A_int42(data)                                           (0x00001000&((data)<<12))
#define  MIS_GPIO_ISR_GP1A_int41(data)                                           (0x00000800&((data)<<11))
#define  MIS_GPIO_ISR_GP1A_int40(data)                                           (0x00000400&((data)<<10))
#define  MIS_GPIO_ISR_GP1A_int39(data)                                           (0x00000200&((data)<<9))
#define  MIS_GPIO_ISR_GP1A_int38(data)                                           (0x00000100&((data)<<8))
#define  MIS_GPIO_ISR_GP1A_int37(data)                                           (0x00000080&((data)<<7))
#define  MIS_GPIO_ISR_GP1A_int36(data)                                           (0x00000040&((data)<<6))
#define  MIS_GPIO_ISR_GP1A_int35(data)                                           (0x00000020&((data)<<5))
#define  MIS_GPIO_ISR_GP1A_int34(data)                                           (0x00000010&((data)<<4))
#define  MIS_GPIO_ISR_GP1A_int33(data)                                           (0x00000008&((data)<<3))
#define  MIS_GPIO_ISR_GP1A_int32(data)                                           (0x00000004&((data)<<2))
#define  MIS_GPIO_ISR_GP1A_int31(data)                                           (0x00000002&((data)<<1))
#define  MIS_GPIO_ISR_GP1A_write_data(data)                                      (0x00000001&(data))
#define  MIS_GPIO_ISR_GP1A_get_int61(data)                                       ((0x80000000&(data))>>31)
#define  MIS_GPIO_ISR_GP1A_get_int60(data)                                       ((0x40000000&(data))>>30)
#define  MIS_GPIO_ISR_GP1A_get_int59(data)                                       ((0x20000000&(data))>>29)
#define  MIS_GPIO_ISR_GP1A_get_int58(data)                                       ((0x10000000&(data))>>28)
#define  MIS_GPIO_ISR_GP1A_get_int57(data)                                       ((0x08000000&(data))>>27)
#define  MIS_GPIO_ISR_GP1A_get_int56(data)                                       ((0x04000000&(data))>>26)
#define  MIS_GPIO_ISR_GP1A_get_int55(data)                                       ((0x02000000&(data))>>25)
#define  MIS_GPIO_ISR_GP1A_get_int54(data)                                       ((0x01000000&(data))>>24)
#define  MIS_GPIO_ISR_GP1A_get_int53(data)                                       ((0x00800000&(data))>>23)
#define  MIS_GPIO_ISR_GP1A_get_int52(data)                                       ((0x00400000&(data))>>22)
#define  MIS_GPIO_ISR_GP1A_get_int51(data)                                       ((0x00200000&(data))>>21)
#define  MIS_GPIO_ISR_GP1A_get_int50(data)                                       ((0x00100000&(data))>>20)
#define  MIS_GPIO_ISR_GP1A_get_int49(data)                                       ((0x00080000&(data))>>19)
#define  MIS_GPIO_ISR_GP1A_get_int48(data)                                       ((0x00040000&(data))>>18)
#define  MIS_GPIO_ISR_GP1A_get_int47(data)                                       ((0x00020000&(data))>>17)
#define  MIS_GPIO_ISR_GP1A_get_int46(data)                                       ((0x00010000&(data))>>16)
#define  MIS_GPIO_ISR_GP1A_get_int45(data)                                       ((0x00008000&(data))>>15)
#define  MIS_GPIO_ISR_GP1A_get_int44(data)                                       ((0x00004000&(data))>>14)
#define  MIS_GPIO_ISR_GP1A_get_int43(data)                                       ((0x00002000&(data))>>13)
#define  MIS_GPIO_ISR_GP1A_get_int42(data)                                       ((0x00001000&(data))>>12)
#define  MIS_GPIO_ISR_GP1A_get_int41(data)                                       ((0x00000800&(data))>>11)
#define  MIS_GPIO_ISR_GP1A_get_int40(data)                                       ((0x00000400&(data))>>10)
#define  MIS_GPIO_ISR_GP1A_get_int39(data)                                       ((0x00000200&(data))>>9)
#define  MIS_GPIO_ISR_GP1A_get_int38(data)                                       ((0x00000100&(data))>>8)
#define  MIS_GPIO_ISR_GP1A_get_int37(data)                                       ((0x00000080&(data))>>7)
#define  MIS_GPIO_ISR_GP1A_get_int36(data)                                       ((0x00000040&(data))>>6)
#define  MIS_GPIO_ISR_GP1A_get_int35(data)                                       ((0x00000020&(data))>>5)
#define  MIS_GPIO_ISR_GP1A_get_int34(data)                                       ((0x00000010&(data))>>4)
#define  MIS_GPIO_ISR_GP1A_get_int33(data)                                       ((0x00000008&(data))>>3)
#define  MIS_GPIO_ISR_GP1A_get_int32(data)                                       ((0x00000004&(data))>>2)
#define  MIS_GPIO_ISR_GP1A_get_int31(data)                                       ((0x00000002&(data))>>1)
#define  MIS_GPIO_ISR_GP1A_get_write_data(data)                                  (0x00000001&(data))

#define  MIS_GPIO_ISR_GP2A                                                      0x1801BD8C
#define  MIS_GPIO_ISR_GP2A_reg_addr                                              "0xB801BD8C"
#define  MIS_GPIO_ISR_GP2A_reg                                                   0xB801BD8C
#define  MIS_GPIO_ISR_GP2A_inst_addr                                             "0x0022"
#define  set_MIS_GPIO_ISR_GP2A_reg(data)                                         (*((volatile unsigned int*)MIS_GPIO_ISR_GP2A_reg)=data)
#define  get_MIS_GPIO_ISR_GP2A_reg                                               (*((volatile unsigned int*)MIS_GPIO_ISR_GP2A_reg))
#define  MIS_GPIO_ISR_GP2A_int92_shift                                           (31)
#define  MIS_GPIO_ISR_GP2A_int91_shift                                           (30)
#define  MIS_GPIO_ISR_GP2A_int90_shift                                           (29)
#define  MIS_GPIO_ISR_GP2A_int89_shift                                           (28)
#define  MIS_GPIO_ISR_GP2A_int88_shift                                           (27)
#define  MIS_GPIO_ISR_GP2A_int87_shift                                           (26)
#define  MIS_GPIO_ISR_GP2A_int86_shift                                           (25)
#define  MIS_GPIO_ISR_GP2A_int85_shift                                           (24)
#define  MIS_GPIO_ISR_GP2A_int84_shift                                           (23)
#define  MIS_GPIO_ISR_GP2A_int83_shift                                           (22)
#define  MIS_GPIO_ISR_GP2A_int82_shift                                           (21)
#define  MIS_GPIO_ISR_GP2A_int81_shift                                           (20)
#define  MIS_GPIO_ISR_GP2A_int80_shift                                           (19)
#define  MIS_GPIO_ISR_GP2A_int79_shift                                           (18)
#define  MIS_GPIO_ISR_GP2A_int78_shift                                           (17)
#define  MIS_GPIO_ISR_GP2A_int77_shift                                           (16)
#define  MIS_GPIO_ISR_GP2A_int76_shift                                           (15)
#define  MIS_GPIO_ISR_GP2A_int75_shift                                           (14)
#define  MIS_GPIO_ISR_GP2A_int74_shift                                           (13)
#define  MIS_GPIO_ISR_GP2A_int73_shift                                           (12)
#define  MIS_GPIO_ISR_GP2A_int72_shift                                           (11)
#define  MIS_GPIO_ISR_GP2A_int71_shift                                           (10)
#define  MIS_GPIO_ISR_GP2A_int70_shift                                           (9)
#define  MIS_GPIO_ISR_GP2A_int69_shift                                           (8)
#define  MIS_GPIO_ISR_GP2A_int68_shift                                           (7)
#define  MIS_GPIO_ISR_GP2A_int67_shift                                           (6)
#define  MIS_GPIO_ISR_GP2A_int66_shift                                           (5)
#define  MIS_GPIO_ISR_GP2A_int65_shift                                           (4)
#define  MIS_GPIO_ISR_GP2A_int64_shift                                           (3)
#define  MIS_GPIO_ISR_GP2A_int63_shift                                           (2)
#define  MIS_GPIO_ISR_GP2A_int62_shift                                           (1)
#define  MIS_GPIO_ISR_GP2A_write_data_shift                                      (0)
#define  MIS_GPIO_ISR_GP2A_int92_mask                                            (0x80000000)
#define  MIS_GPIO_ISR_GP2A_int91_mask                                            (0x40000000)
#define  MIS_GPIO_ISR_GP2A_int90_mask                                            (0x20000000)
#define  MIS_GPIO_ISR_GP2A_int89_mask                                            (0x10000000)
#define  MIS_GPIO_ISR_GP2A_int88_mask                                            (0x08000000)
#define  MIS_GPIO_ISR_GP2A_int87_mask                                            (0x04000000)
#define  MIS_GPIO_ISR_GP2A_int86_mask                                            (0x02000000)
#define  MIS_GPIO_ISR_GP2A_int85_mask                                            (0x01000000)
#define  MIS_GPIO_ISR_GP2A_int84_mask                                            (0x00800000)
#define  MIS_GPIO_ISR_GP2A_int83_mask                                            (0x00400000)
#define  MIS_GPIO_ISR_GP2A_int82_mask                                            (0x00200000)
#define  MIS_GPIO_ISR_GP2A_int81_mask                                            (0x00100000)
#define  MIS_GPIO_ISR_GP2A_int80_mask                                            (0x00080000)
#define  MIS_GPIO_ISR_GP2A_int79_mask                                            (0x00040000)
#define  MIS_GPIO_ISR_GP2A_int78_mask                                            (0x00020000)
#define  MIS_GPIO_ISR_GP2A_int77_mask                                            (0x00010000)
#define  MIS_GPIO_ISR_GP2A_int76_mask                                            (0x00008000)
#define  MIS_GPIO_ISR_GP2A_int75_mask                                            (0x00004000)
#define  MIS_GPIO_ISR_GP2A_int74_mask                                            (0x00002000)
#define  MIS_GPIO_ISR_GP2A_int73_mask                                            (0x00001000)
#define  MIS_GPIO_ISR_GP2A_int72_mask                                            (0x00000800)
#define  MIS_GPIO_ISR_GP2A_int71_mask                                            (0x00000400)
#define  MIS_GPIO_ISR_GP2A_int70_mask                                            (0x00000200)
#define  MIS_GPIO_ISR_GP2A_int69_mask                                            (0x00000100)
#define  MIS_GPIO_ISR_GP2A_int68_mask                                            (0x00000080)
#define  MIS_GPIO_ISR_GP2A_int67_mask                                            (0x00000040)
#define  MIS_GPIO_ISR_GP2A_int66_mask                                            (0x00000020)
#define  MIS_GPIO_ISR_GP2A_int65_mask                                            (0x00000010)
#define  MIS_GPIO_ISR_GP2A_int64_mask                                            (0x00000008)
#define  MIS_GPIO_ISR_GP2A_int63_mask                                            (0x00000004)
#define  MIS_GPIO_ISR_GP2A_int62_mask                                            (0x00000002)
#define  MIS_GPIO_ISR_GP2A_write_data_mask                                       (0x00000001)
#define  MIS_GPIO_ISR_GP2A_int92(data)                                           (0x80000000&((data)<<31))
#define  MIS_GPIO_ISR_GP2A_int91(data)                                           (0x40000000&((data)<<30))
#define  MIS_GPIO_ISR_GP2A_int90(data)                                           (0x20000000&((data)<<29))
#define  MIS_GPIO_ISR_GP2A_int89(data)                                           (0x10000000&((data)<<28))
#define  MIS_GPIO_ISR_GP2A_int88(data)                                           (0x08000000&((data)<<27))
#define  MIS_GPIO_ISR_GP2A_int87(data)                                           (0x04000000&((data)<<26))
#define  MIS_GPIO_ISR_GP2A_int86(data)                                           (0x02000000&((data)<<25))
#define  MIS_GPIO_ISR_GP2A_int85(data)                                           (0x01000000&((data)<<24))
#define  MIS_GPIO_ISR_GP2A_int84(data)                                           (0x00800000&((data)<<23))
#define  MIS_GPIO_ISR_GP2A_int83(data)                                           (0x00400000&((data)<<22))
#define  MIS_GPIO_ISR_GP2A_int82(data)                                           (0x00200000&((data)<<21))
#define  MIS_GPIO_ISR_GP2A_int81(data)                                           (0x00100000&((data)<<20))
#define  MIS_GPIO_ISR_GP2A_int80(data)                                           (0x00080000&((data)<<19))
#define  MIS_GPIO_ISR_GP2A_int79(data)                                           (0x00040000&((data)<<18))
#define  MIS_GPIO_ISR_GP2A_int78(data)                                           (0x00020000&((data)<<17))
#define  MIS_GPIO_ISR_GP2A_int77(data)                                           (0x00010000&((data)<<16))
#define  MIS_GPIO_ISR_GP2A_int76(data)                                           (0x00008000&((data)<<15))
#define  MIS_GPIO_ISR_GP2A_int75(data)                                           (0x00004000&((data)<<14))
#define  MIS_GPIO_ISR_GP2A_int74(data)                                           (0x00002000&((data)<<13))
#define  MIS_GPIO_ISR_GP2A_int73(data)                                           (0x00001000&((data)<<12))
#define  MIS_GPIO_ISR_GP2A_int72(data)                                           (0x00000800&((data)<<11))
#define  MIS_GPIO_ISR_GP2A_int71(data)                                           (0x00000400&((data)<<10))
#define  MIS_GPIO_ISR_GP2A_int70(data)                                           (0x00000200&((data)<<9))
#define  MIS_GPIO_ISR_GP2A_int69(data)                                           (0x00000100&((data)<<8))
#define  MIS_GPIO_ISR_GP2A_int68(data)                                           (0x00000080&((data)<<7))
#define  MIS_GPIO_ISR_GP2A_int67(data)                                           (0x00000040&((data)<<6))
#define  MIS_GPIO_ISR_GP2A_int66(data)                                           (0x00000020&((data)<<5))
#define  MIS_GPIO_ISR_GP2A_int65(data)                                           (0x00000010&((data)<<4))
#define  MIS_GPIO_ISR_GP2A_int64(data)                                           (0x00000008&((data)<<3))
#define  MIS_GPIO_ISR_GP2A_int63(data)                                           (0x00000004&((data)<<2))
#define  MIS_GPIO_ISR_GP2A_int62(data)                                           (0x00000002&((data)<<1))
#define  MIS_GPIO_ISR_GP2A_write_data(data)                                      (0x00000001&(data))
#define  MIS_GPIO_ISR_GP2A_get_int92(data)                                       ((0x80000000&(data))>>31)
#define  MIS_GPIO_ISR_GP2A_get_int91(data)                                       ((0x40000000&(data))>>30)
#define  MIS_GPIO_ISR_GP2A_get_int90(data)                                       ((0x20000000&(data))>>29)
#define  MIS_GPIO_ISR_GP2A_get_int89(data)                                       ((0x10000000&(data))>>28)
#define  MIS_GPIO_ISR_GP2A_get_int88(data)                                       ((0x08000000&(data))>>27)
#define  MIS_GPIO_ISR_GP2A_get_int87(data)                                       ((0x04000000&(data))>>26)
#define  MIS_GPIO_ISR_GP2A_get_int86(data)                                       ((0x02000000&(data))>>25)
#define  MIS_GPIO_ISR_GP2A_get_int85(data)                                       ((0x01000000&(data))>>24)
#define  MIS_GPIO_ISR_GP2A_get_int84(data)                                       ((0x00800000&(data))>>23)
#define  MIS_GPIO_ISR_GP2A_get_int83(data)                                       ((0x00400000&(data))>>22)
#define  MIS_GPIO_ISR_GP2A_get_int82(data)                                       ((0x00200000&(data))>>21)
#define  MIS_GPIO_ISR_GP2A_get_int81(data)                                       ((0x00100000&(data))>>20)
#define  MIS_GPIO_ISR_GP2A_get_int80(data)                                       ((0x00080000&(data))>>19)
#define  MIS_GPIO_ISR_GP2A_get_int79(data)                                       ((0x00040000&(data))>>18)
#define  MIS_GPIO_ISR_GP2A_get_int78(data)                                       ((0x00020000&(data))>>17)
#define  MIS_GPIO_ISR_GP2A_get_int77(data)                                       ((0x00010000&(data))>>16)
#define  MIS_GPIO_ISR_GP2A_get_int76(data)                                       ((0x00008000&(data))>>15)
#define  MIS_GPIO_ISR_GP2A_get_int75(data)                                       ((0x00004000&(data))>>14)
#define  MIS_GPIO_ISR_GP2A_get_int74(data)                                       ((0x00002000&(data))>>13)
#define  MIS_GPIO_ISR_GP2A_get_int73(data)                                       ((0x00001000&(data))>>12)
#define  MIS_GPIO_ISR_GP2A_get_int72(data)                                       ((0x00000800&(data))>>11)
#define  MIS_GPIO_ISR_GP2A_get_int71(data)                                       ((0x00000400&(data))>>10)
#define  MIS_GPIO_ISR_GP2A_get_int70(data)                                       ((0x00000200&(data))>>9)
#define  MIS_GPIO_ISR_GP2A_get_int69(data)                                       ((0x00000100&(data))>>8)
#define  MIS_GPIO_ISR_GP2A_get_int68(data)                                       ((0x00000080&(data))>>7)
#define  MIS_GPIO_ISR_GP2A_get_int67(data)                                       ((0x00000040&(data))>>6)
#define  MIS_GPIO_ISR_GP2A_get_int66(data)                                       ((0x00000020&(data))>>5)
#define  MIS_GPIO_ISR_GP2A_get_int65(data)                                       ((0x00000010&(data))>>4)
#define  MIS_GPIO_ISR_GP2A_get_int64(data)                                       ((0x00000008&(data))>>3)
#define  MIS_GPIO_ISR_GP2A_get_int63(data)                                       ((0x00000004&(data))>>2)
#define  MIS_GPIO_ISR_GP2A_get_int62(data)                                       ((0x00000002&(data))>>1)
#define  MIS_GPIO_ISR_GP2A_get_write_data(data)                                  (0x00000001&(data))

#define  MIS_GPIO_ISR_GP3A                                                      0x1801BD90
#define  MIS_GPIO_ISR_GP3A_reg_addr                                              "0xB801BD90"
#define  MIS_GPIO_ISR_GP3A_reg                                                   0xB801BD90
#define  MIS_GPIO_ISR_GP3A_inst_addr                                             "0x0023"
#define  set_MIS_GPIO_ISR_GP3A_reg(data)                                         (*((volatile unsigned int*)MIS_GPIO_ISR_GP3A_reg)=data)
#define  get_MIS_GPIO_ISR_GP3A_reg                                               (*((volatile unsigned int*)MIS_GPIO_ISR_GP3A_reg))
#define  MIS_GPIO_ISR_GP3A_int123_shift                                          (31)
#define  MIS_GPIO_ISR_GP3A_int122_shift                                          (30)
#define  MIS_GPIO_ISR_GP3A_int121_shift                                          (29)
#define  MIS_GPIO_ISR_GP3A_int120_shift                                          (28)
#define  MIS_GPIO_ISR_GP3A_int119_shift                                          (27)
#define  MIS_GPIO_ISR_GP3A_int118_shift                                          (26)
#define  MIS_GPIO_ISR_GP3A_int117_shift                                          (25)
#define  MIS_GPIO_ISR_GP3A_int116_shift                                          (24)
#define  MIS_GPIO_ISR_GP3A_int115_shift                                          (23)
#define  MIS_GPIO_ISR_GP3A_int114_shift                                          (22)
#define  MIS_GPIO_ISR_GP3A_int113_shift                                          (21)
#define  MIS_GPIO_ISR_GP3A_int112_shift                                          (20)
#define  MIS_GPIO_ISR_GP3A_int111_shift                                          (19)
#define  MIS_GPIO_ISR_GP3A_int110_shift                                          (18)
#define  MIS_GPIO_ISR_GP3A_int109_shift                                          (17)
#define  MIS_GPIO_ISR_GP3A_int108_shift                                          (16)
#define  MIS_GPIO_ISR_GP3A_int107_shift                                          (15)
#define  MIS_GPIO_ISR_GP3A_int106_shift                                          (14)
#define  MIS_GPIO_ISR_GP3A_int105_shift                                          (13)
#define  MIS_GPIO_ISR_GP3A_int104_shift                                          (12)
#define  MIS_GPIO_ISR_GP3A_int103_shift                                          (11)
#define  MIS_GPIO_ISR_GP3A_int102_shift                                          (10)
#define  MIS_GPIO_ISR_GP3A_int101_shift                                          (9)
#define  MIS_GPIO_ISR_GP3A_int100_shift                                          (8)
#define  MIS_GPIO_ISR_GP3A_int99_shift                                           (7)
#define  MIS_GPIO_ISR_GP3A_int98_shift                                           (6)
#define  MIS_GPIO_ISR_GP3A_int97_shift                                           (5)
#define  MIS_GPIO_ISR_GP3A_int96_shift                                           (4)
#define  MIS_GPIO_ISR_GP3A_int95_shift                                           (3)
#define  MIS_GPIO_ISR_GP3A_int94_shift                                           (2)
#define  MIS_GPIO_ISR_GP3A_int93_shift                                           (1)
#define  MIS_GPIO_ISR_GP3A_write_data_shift                                      (0)
#define  MIS_GPIO_ISR_GP3A_int123_mask                                           (0x80000000)
#define  MIS_GPIO_ISR_GP3A_int122_mask                                           (0x40000000)
#define  MIS_GPIO_ISR_GP3A_int121_mask                                           (0x20000000)
#define  MIS_GPIO_ISR_GP3A_int120_mask                                           (0x10000000)
#define  MIS_GPIO_ISR_GP3A_int119_mask                                           (0x08000000)
#define  MIS_GPIO_ISR_GP3A_int118_mask                                           (0x04000000)
#define  MIS_GPIO_ISR_GP3A_int117_mask                                           (0x02000000)
#define  MIS_GPIO_ISR_GP3A_int116_mask                                           (0x01000000)
#define  MIS_GPIO_ISR_GP3A_int115_mask                                           (0x00800000)
#define  MIS_GPIO_ISR_GP3A_int114_mask                                           (0x00400000)
#define  MIS_GPIO_ISR_GP3A_int113_mask                                           (0x00200000)
#define  MIS_GPIO_ISR_GP3A_int112_mask                                           (0x00100000)
#define  MIS_GPIO_ISR_GP3A_int111_mask                                           (0x00080000)
#define  MIS_GPIO_ISR_GP3A_int110_mask                                           (0x00040000)
#define  MIS_GPIO_ISR_GP3A_int109_mask                                           (0x00020000)
#define  MIS_GPIO_ISR_GP3A_int108_mask                                           (0x00010000)
#define  MIS_GPIO_ISR_GP3A_int107_mask                                           (0x00008000)
#define  MIS_GPIO_ISR_GP3A_int106_mask                                           (0x00004000)
#define  MIS_GPIO_ISR_GP3A_int105_mask                                           (0x00002000)
#define  MIS_GPIO_ISR_GP3A_int104_mask                                           (0x00001000)
#define  MIS_GPIO_ISR_GP3A_int103_mask                                           (0x00000800)
#define  MIS_GPIO_ISR_GP3A_int102_mask                                           (0x00000400)
#define  MIS_GPIO_ISR_GP3A_int101_mask                                           (0x00000200)
#define  MIS_GPIO_ISR_GP3A_int100_mask                                           (0x00000100)
#define  MIS_GPIO_ISR_GP3A_int99_mask                                            (0x00000080)
#define  MIS_GPIO_ISR_GP3A_int98_mask                                            (0x00000040)
#define  MIS_GPIO_ISR_GP3A_int97_mask                                            (0x00000020)
#define  MIS_GPIO_ISR_GP3A_int96_mask                                            (0x00000010)
#define  MIS_GPIO_ISR_GP3A_int95_mask                                            (0x00000008)
#define  MIS_GPIO_ISR_GP3A_int94_mask                                            (0x00000004)
#define  MIS_GPIO_ISR_GP3A_int93_mask                                            (0x00000002)
#define  MIS_GPIO_ISR_GP3A_write_data_mask                                       (0x00000001)
#define  MIS_GPIO_ISR_GP3A_int123(data)                                          (0x80000000&((data)<<31))
#define  MIS_GPIO_ISR_GP3A_int122(data)                                          (0x40000000&((data)<<30))
#define  MIS_GPIO_ISR_GP3A_int121(data)                                          (0x20000000&((data)<<29))
#define  MIS_GPIO_ISR_GP3A_int120(data)                                          (0x10000000&((data)<<28))
#define  MIS_GPIO_ISR_GP3A_int119(data)                                          (0x08000000&((data)<<27))
#define  MIS_GPIO_ISR_GP3A_int118(data)                                          (0x04000000&((data)<<26))
#define  MIS_GPIO_ISR_GP3A_int117(data)                                          (0x02000000&((data)<<25))
#define  MIS_GPIO_ISR_GP3A_int116(data)                                          (0x01000000&((data)<<24))
#define  MIS_GPIO_ISR_GP3A_int115(data)                                          (0x00800000&((data)<<23))
#define  MIS_GPIO_ISR_GP3A_int114(data)                                          (0x00400000&((data)<<22))
#define  MIS_GPIO_ISR_GP3A_int113(data)                                          (0x00200000&((data)<<21))
#define  MIS_GPIO_ISR_GP3A_int112(data)                                          (0x00100000&((data)<<20))
#define  MIS_GPIO_ISR_GP3A_int111(data)                                          (0x00080000&((data)<<19))
#define  MIS_GPIO_ISR_GP3A_int110(data)                                          (0x00040000&((data)<<18))
#define  MIS_GPIO_ISR_GP3A_int109(data)                                          (0x00020000&((data)<<17))
#define  MIS_GPIO_ISR_GP3A_int108(data)                                          (0x00010000&((data)<<16))
#define  MIS_GPIO_ISR_GP3A_int107(data)                                          (0x00008000&((data)<<15))
#define  MIS_GPIO_ISR_GP3A_int106(data)                                          (0x00004000&((data)<<14))
#define  MIS_GPIO_ISR_GP3A_int105(data)                                          (0x00002000&((data)<<13))
#define  MIS_GPIO_ISR_GP3A_int104(data)                                          (0x00001000&((data)<<12))
#define  MIS_GPIO_ISR_GP3A_int103(data)                                          (0x00000800&((data)<<11))
#define  MIS_GPIO_ISR_GP3A_int102(data)                                          (0x00000400&((data)<<10))
#define  MIS_GPIO_ISR_GP3A_int101(data)                                          (0x00000200&((data)<<9))
#define  MIS_GPIO_ISR_GP3A_int100(data)                                          (0x00000100&((data)<<8))
#define  MIS_GPIO_ISR_GP3A_int99(data)                                           (0x00000080&((data)<<7))
#define  MIS_GPIO_ISR_GP3A_int98(data)                                           (0x00000040&((data)<<6))
#define  MIS_GPIO_ISR_GP3A_int97(data)                                           (0x00000020&((data)<<5))
#define  MIS_GPIO_ISR_GP3A_int96(data)                                           (0x00000010&((data)<<4))
#define  MIS_GPIO_ISR_GP3A_int95(data)                                           (0x00000008&((data)<<3))
#define  MIS_GPIO_ISR_GP3A_int94(data)                                           (0x00000004&((data)<<2))
#define  MIS_GPIO_ISR_GP3A_int93(data)                                           (0x00000002&((data)<<1))
#define  MIS_GPIO_ISR_GP3A_write_data(data)                                      (0x00000001&(data))
#define  MIS_GPIO_ISR_GP3A_get_int123(data)                                      ((0x80000000&(data))>>31)
#define  MIS_GPIO_ISR_GP3A_get_int122(data)                                      ((0x40000000&(data))>>30)
#define  MIS_GPIO_ISR_GP3A_get_int121(data)                                      ((0x20000000&(data))>>29)
#define  MIS_GPIO_ISR_GP3A_get_int120(data)                                      ((0x10000000&(data))>>28)
#define  MIS_GPIO_ISR_GP3A_get_int119(data)                                      ((0x08000000&(data))>>27)
#define  MIS_GPIO_ISR_GP3A_get_int118(data)                                      ((0x04000000&(data))>>26)
#define  MIS_GPIO_ISR_GP3A_get_int117(data)                                      ((0x02000000&(data))>>25)
#define  MIS_GPIO_ISR_GP3A_get_int116(data)                                      ((0x01000000&(data))>>24)
#define  MIS_GPIO_ISR_GP3A_get_int115(data)                                      ((0x00800000&(data))>>23)
#define  MIS_GPIO_ISR_GP3A_get_int114(data)                                      ((0x00400000&(data))>>22)
#define  MIS_GPIO_ISR_GP3A_get_int113(data)                                      ((0x00200000&(data))>>21)
#define  MIS_GPIO_ISR_GP3A_get_int112(data)                                      ((0x00100000&(data))>>20)
#define  MIS_GPIO_ISR_GP3A_get_int111(data)                                      ((0x00080000&(data))>>19)
#define  MIS_GPIO_ISR_GP3A_get_int110(data)                                      ((0x00040000&(data))>>18)
#define  MIS_GPIO_ISR_GP3A_get_int109(data)                                      ((0x00020000&(data))>>17)
#define  MIS_GPIO_ISR_GP3A_get_int108(data)                                      ((0x00010000&(data))>>16)
#define  MIS_GPIO_ISR_GP3A_get_int107(data)                                      ((0x00008000&(data))>>15)
#define  MIS_GPIO_ISR_GP3A_get_int106(data)                                      ((0x00004000&(data))>>14)
#define  MIS_GPIO_ISR_GP3A_get_int105(data)                                      ((0x00002000&(data))>>13)
#define  MIS_GPIO_ISR_GP3A_get_int104(data)                                      ((0x00001000&(data))>>12)
#define  MIS_GPIO_ISR_GP3A_get_int103(data)                                      ((0x00000800&(data))>>11)
#define  MIS_GPIO_ISR_GP3A_get_int102(data)                                      ((0x00000400&(data))>>10)
#define  MIS_GPIO_ISR_GP3A_get_int101(data)                                      ((0x00000200&(data))>>9)
#define  MIS_GPIO_ISR_GP3A_get_int100(data)                                      ((0x00000100&(data))>>8)
#define  MIS_GPIO_ISR_GP3A_get_int99(data)                                       ((0x00000080&(data))>>7)
#define  MIS_GPIO_ISR_GP3A_get_int98(data)                                       ((0x00000040&(data))>>6)
#define  MIS_GPIO_ISR_GP3A_get_int97(data)                                       ((0x00000020&(data))>>5)
#define  MIS_GPIO_ISR_GP3A_get_int96(data)                                       ((0x00000010&(data))>>4)
#define  MIS_GPIO_ISR_GP3A_get_int95(data)                                       ((0x00000008&(data))>>3)
#define  MIS_GPIO_ISR_GP3A_get_int94(data)                                       ((0x00000004&(data))>>2)
#define  MIS_GPIO_ISR_GP3A_get_int93(data)                                       ((0x00000002&(data))>>1)
#define  MIS_GPIO_ISR_GP3A_get_write_data(data)                                  (0x00000001&(data))

#define  MIS_GPIO_ISR_GP4A                                                      0x1801BD94
#define  MIS_GPIO_ISR_GP4A_reg_addr                                              "0xB801BD94"
#define  MIS_GPIO_ISR_GP4A_reg                                                   0xB801BD94
#define  MIS_GPIO_ISR_GP4A_inst_addr                                             "0x0024"
#define  set_MIS_GPIO_ISR_GP4A_reg(data)                                         (*((volatile unsigned int*)MIS_GPIO_ISR_GP4A_reg)=data)
#define  get_MIS_GPIO_ISR_GP4A_reg                                               (*((volatile unsigned int*)MIS_GPIO_ISR_GP4A_reg))
#define  MIS_GPIO_ISR_GP4A_int154_shift                                          (31)
#define  MIS_GPIO_ISR_GP4A_int153_shift                                          (30)
#define  MIS_GPIO_ISR_GP4A_int152_shift                                          (29)
#define  MIS_GPIO_ISR_GP4A_int151_shift                                          (28)
#define  MIS_GPIO_ISR_GP4A_int150_shift                                          (27)
#define  MIS_GPIO_ISR_GP4A_int149_shift                                          (26)
#define  MIS_GPIO_ISR_GP4A_int148_shift                                          (25)
#define  MIS_GPIO_ISR_GP4A_int147_shift                                          (24)
#define  MIS_GPIO_ISR_GP4A_int146_shift                                          (23)
#define  MIS_GPIO_ISR_GP4A_int145_shift                                          (22)
#define  MIS_GPIO_ISR_GP4A_int144_shift                                          (21)
#define  MIS_GPIO_ISR_GP4A_int143_shift                                          (20)
#define  MIS_GPIO_ISR_GP4A_int142_shift                                          (19)
#define  MIS_GPIO_ISR_GP4A_int141_shift                                          (18)
#define  MIS_GPIO_ISR_GP4A_int140_shift                                          (17)
#define  MIS_GPIO_ISR_GP4A_int139_shift                                          (16)
#define  MIS_GPIO_ISR_GP4A_int138_shift                                          (15)
#define  MIS_GPIO_ISR_GP4A_int137_shift                                          (14)
#define  MIS_GPIO_ISR_GP4A_int136_shift                                          (13)
#define  MIS_GPIO_ISR_GP4A_int135_shift                                          (12)
#define  MIS_GPIO_ISR_GP4A_int134_shift                                          (11)
#define  MIS_GPIO_ISR_GP4A_int133_shift                                          (10)
#define  MIS_GPIO_ISR_GP4A_int132_shift                                          (9)
#define  MIS_GPIO_ISR_GP4A_int131_shift                                          (8)
#define  MIS_GPIO_ISR_GP4A_int130_shift                                          (7)
#define  MIS_GPIO_ISR_GP4A_int129_shift                                          (6)
#define  MIS_GPIO_ISR_GP4A_int128_shift                                          (5)
#define  MIS_GPIO_ISR_GP4A_int127_shift                                          (4)
#define  MIS_GPIO_ISR_GP4A_int126_shift                                          (3)
#define  MIS_GPIO_ISR_GP4A_int125_shift                                          (2)
#define  MIS_GPIO_ISR_GP4A_int124_shift                                          (1)
#define  MIS_GPIO_ISR_GP4A_write_data_shift                                      (0)
#define  MIS_GPIO_ISR_GP4A_int154_mask                                           (0x80000000)
#define  MIS_GPIO_ISR_GP4A_int153_mask                                           (0x40000000)
#define  MIS_GPIO_ISR_GP4A_int152_mask                                           (0x20000000)
#define  MIS_GPIO_ISR_GP4A_int151_mask                                           (0x10000000)
#define  MIS_GPIO_ISR_GP4A_int150_mask                                           (0x08000000)
#define  MIS_GPIO_ISR_GP4A_int149_mask                                           (0x04000000)
#define  MIS_GPIO_ISR_GP4A_int148_mask                                           (0x02000000)
#define  MIS_GPIO_ISR_GP4A_int147_mask                                           (0x01000000)
#define  MIS_GPIO_ISR_GP4A_int146_mask                                           (0x00800000)
#define  MIS_GPIO_ISR_GP4A_int145_mask                                           (0x00400000)
#define  MIS_GPIO_ISR_GP4A_int144_mask                                           (0x00200000)
#define  MIS_GPIO_ISR_GP4A_int143_mask                                           (0x00100000)
#define  MIS_GPIO_ISR_GP4A_int142_mask                                           (0x00080000)
#define  MIS_GPIO_ISR_GP4A_int141_mask                                           (0x00040000)
#define  MIS_GPIO_ISR_GP4A_int140_mask                                           (0x00020000)
#define  MIS_GPIO_ISR_GP4A_int139_mask                                           (0x00010000)
#define  MIS_GPIO_ISR_GP4A_int138_mask                                           (0x00008000)
#define  MIS_GPIO_ISR_GP4A_int137_mask                                           (0x00004000)
#define  MIS_GPIO_ISR_GP4A_int136_mask                                           (0x00002000)
#define  MIS_GPIO_ISR_GP4A_int135_mask                                           (0x00001000)
#define  MIS_GPIO_ISR_GP4A_int134_mask                                           (0x00000800)
#define  MIS_GPIO_ISR_GP4A_int133_mask                                           (0x00000400)
#define  MIS_GPIO_ISR_GP4A_int132_mask                                           (0x00000200)
#define  MIS_GPIO_ISR_GP4A_int131_mask                                           (0x00000100)
#define  MIS_GPIO_ISR_GP4A_int130_mask                                           (0x00000080)
#define  MIS_GPIO_ISR_GP4A_int129_mask                                           (0x00000040)
#define  MIS_GPIO_ISR_GP4A_int128_mask                                           (0x00000020)
#define  MIS_GPIO_ISR_GP4A_int127_mask                                           (0x00000010)
#define  MIS_GPIO_ISR_GP4A_int126_mask                                           (0x00000008)
#define  MIS_GPIO_ISR_GP4A_int125_mask                                           (0x00000004)
#define  MIS_GPIO_ISR_GP4A_int124_mask                                           (0x00000002)
#define  MIS_GPIO_ISR_GP4A_write_data_mask                                       (0x00000001)
#define  MIS_GPIO_ISR_GP4A_int154(data)                                          (0x80000000&((data)<<31))
#define  MIS_GPIO_ISR_GP4A_int153(data)                                          (0x40000000&((data)<<30))
#define  MIS_GPIO_ISR_GP4A_int152(data)                                          (0x20000000&((data)<<29))
#define  MIS_GPIO_ISR_GP4A_int151(data)                                          (0x10000000&((data)<<28))
#define  MIS_GPIO_ISR_GP4A_int150(data)                                          (0x08000000&((data)<<27))
#define  MIS_GPIO_ISR_GP4A_int149(data)                                          (0x04000000&((data)<<26))
#define  MIS_GPIO_ISR_GP4A_int148(data)                                          (0x02000000&((data)<<25))
#define  MIS_GPIO_ISR_GP4A_int147(data)                                          (0x01000000&((data)<<24))
#define  MIS_GPIO_ISR_GP4A_int146(data)                                          (0x00800000&((data)<<23))
#define  MIS_GPIO_ISR_GP4A_int145(data)                                          (0x00400000&((data)<<22))
#define  MIS_GPIO_ISR_GP4A_int144(data)                                          (0x00200000&((data)<<21))
#define  MIS_GPIO_ISR_GP4A_int143(data)                                          (0x00100000&((data)<<20))
#define  MIS_GPIO_ISR_GP4A_int142(data)                                          (0x00080000&((data)<<19))
#define  MIS_GPIO_ISR_GP4A_int141(data)                                          (0x00040000&((data)<<18))
#define  MIS_GPIO_ISR_GP4A_int140(data)                                          (0x00020000&((data)<<17))
#define  MIS_GPIO_ISR_GP4A_int139(data)                                          (0x00010000&((data)<<16))
#define  MIS_GPIO_ISR_GP4A_int138(data)                                          (0x00008000&((data)<<15))
#define  MIS_GPIO_ISR_GP4A_int137(data)                                          (0x00004000&((data)<<14))
#define  MIS_GPIO_ISR_GP4A_int136(data)                                          (0x00002000&((data)<<13))
#define  MIS_GPIO_ISR_GP4A_int135(data)                                          (0x00001000&((data)<<12))
#define  MIS_GPIO_ISR_GP4A_int134(data)                                          (0x00000800&((data)<<11))
#define  MIS_GPIO_ISR_GP4A_int133(data)                                          (0x00000400&((data)<<10))
#define  MIS_GPIO_ISR_GP4A_int132(data)                                          (0x00000200&((data)<<9))
#define  MIS_GPIO_ISR_GP4A_int131(data)                                          (0x00000100&((data)<<8))
#define  MIS_GPIO_ISR_GP4A_int130(data)                                          (0x00000080&((data)<<7))
#define  MIS_GPIO_ISR_GP4A_int129(data)                                          (0x00000040&((data)<<6))
#define  MIS_GPIO_ISR_GP4A_int128(data)                                          (0x00000020&((data)<<5))
#define  MIS_GPIO_ISR_GP4A_int127(data)                                          (0x00000010&((data)<<4))
#define  MIS_GPIO_ISR_GP4A_int126(data)                                          (0x00000008&((data)<<3))
#define  MIS_GPIO_ISR_GP4A_int125(data)                                          (0x00000004&((data)<<2))
#define  MIS_GPIO_ISR_GP4A_int124(data)                                          (0x00000002&((data)<<1))
#define  MIS_GPIO_ISR_GP4A_write_data(data)                                      (0x00000001&(data))
#define  MIS_GPIO_ISR_GP4A_get_int154(data)                                      ((0x80000000&(data))>>31)
#define  MIS_GPIO_ISR_GP4A_get_int153(data)                                      ((0x40000000&(data))>>30)
#define  MIS_GPIO_ISR_GP4A_get_int152(data)                                      ((0x20000000&(data))>>29)
#define  MIS_GPIO_ISR_GP4A_get_int151(data)                                      ((0x10000000&(data))>>28)
#define  MIS_GPIO_ISR_GP4A_get_int150(data)                                      ((0x08000000&(data))>>27)
#define  MIS_GPIO_ISR_GP4A_get_int149(data)                                      ((0x04000000&(data))>>26)
#define  MIS_GPIO_ISR_GP4A_get_int148(data)                                      ((0x02000000&(data))>>25)
#define  MIS_GPIO_ISR_GP4A_get_int147(data)                                      ((0x01000000&(data))>>24)
#define  MIS_GPIO_ISR_GP4A_get_int146(data)                                      ((0x00800000&(data))>>23)
#define  MIS_GPIO_ISR_GP4A_get_int145(data)                                      ((0x00400000&(data))>>22)
#define  MIS_GPIO_ISR_GP4A_get_int144(data)                                      ((0x00200000&(data))>>21)
#define  MIS_GPIO_ISR_GP4A_get_int143(data)                                      ((0x00100000&(data))>>20)
#define  MIS_GPIO_ISR_GP4A_get_int142(data)                                      ((0x00080000&(data))>>19)
#define  MIS_GPIO_ISR_GP4A_get_int141(data)                                      ((0x00040000&(data))>>18)
#define  MIS_GPIO_ISR_GP4A_get_int140(data)                                      ((0x00020000&(data))>>17)
#define  MIS_GPIO_ISR_GP4A_get_int139(data)                                      ((0x00010000&(data))>>16)
#define  MIS_GPIO_ISR_GP4A_get_int138(data)                                      ((0x00008000&(data))>>15)
#define  MIS_GPIO_ISR_GP4A_get_int137(data)                                      ((0x00004000&(data))>>14)
#define  MIS_GPIO_ISR_GP4A_get_int136(data)                                      ((0x00002000&(data))>>13)
#define  MIS_GPIO_ISR_GP4A_get_int135(data)                                      ((0x00001000&(data))>>12)
#define  MIS_GPIO_ISR_GP4A_get_int134(data)                                      ((0x00000800&(data))>>11)
#define  MIS_GPIO_ISR_GP4A_get_int133(data)                                      ((0x00000400&(data))>>10)
#define  MIS_GPIO_ISR_GP4A_get_int132(data)                                      ((0x00000200&(data))>>9)
#define  MIS_GPIO_ISR_GP4A_get_int131(data)                                      ((0x00000100&(data))>>8)
#define  MIS_GPIO_ISR_GP4A_get_int130(data)                                      ((0x00000080&(data))>>7)
#define  MIS_GPIO_ISR_GP4A_get_int129(data)                                      ((0x00000040&(data))>>6)
#define  MIS_GPIO_ISR_GP4A_get_int128(data)                                      ((0x00000020&(data))>>5)
#define  MIS_GPIO_ISR_GP4A_get_int127(data)                                      ((0x00000010&(data))>>4)
#define  MIS_GPIO_ISR_GP4A_get_int126(data)                                      ((0x00000008&(data))>>3)
#define  MIS_GPIO_ISR_GP4A_get_int125(data)                                      ((0x00000004&(data))>>2)
#define  MIS_GPIO_ISR_GP4A_get_int124(data)                                      ((0x00000002&(data))>>1)
#define  MIS_GPIO_ISR_GP4A_get_write_data(data)                                  (0x00000001&(data))

#define  MIS_GPIO_ISR_GP5A                                                      0x1801BD98
#define  MIS_GPIO_ISR_GP5A_reg_addr                                              "0xB801BD98"
#define  MIS_GPIO_ISR_GP5A_reg                                                   0xB801BD98
#define  MIS_GPIO_ISR_GP5A_inst_addr                                             "0x0025"
#define  set_MIS_GPIO_ISR_GP5A_reg(data)                                         (*((volatile unsigned int*)MIS_GPIO_ISR_GP5A_reg)=data)
#define  get_MIS_GPIO_ISR_GP5A_reg                                               (*((volatile unsigned int*)MIS_GPIO_ISR_GP5A_reg))
#define  MIS_GPIO_ISR_GP5A_int160_shift                                          (6)
#define  MIS_GPIO_ISR_GP5A_int159_shift                                          (5)
#define  MIS_GPIO_ISR_GP5A_int158_shift                                          (4)
#define  MIS_GPIO_ISR_GP5A_int157_shift                                          (3)
#define  MIS_GPIO_ISR_GP5A_int156_shift                                          (2)
#define  MIS_GPIO_ISR_GP5A_int155_shift                                          (1)
#define  MIS_GPIO_ISR_GP5A_write_data_shift                                      (0)
#define  MIS_GPIO_ISR_GP5A_int160_mask                                           (0x00000040)
#define  MIS_GPIO_ISR_GP5A_int159_mask                                           (0x00000020)
#define  MIS_GPIO_ISR_GP5A_int158_mask                                           (0x00000010)
#define  MIS_GPIO_ISR_GP5A_int157_mask                                           (0x00000008)
#define  MIS_GPIO_ISR_GP5A_int156_mask                                           (0x00000004)
#define  MIS_GPIO_ISR_GP5A_int155_mask                                           (0x00000002)
#define  MIS_GPIO_ISR_GP5A_write_data_mask                                       (0x00000001)
#define  MIS_GPIO_ISR_GP5A_int160(data)                                          (0x00000040&((data)<<6))
#define  MIS_GPIO_ISR_GP5A_int159(data)                                          (0x00000020&((data)<<5))
#define  MIS_GPIO_ISR_GP5A_int158(data)                                          (0x00000010&((data)<<4))
#define  MIS_GPIO_ISR_GP5A_int157(data)                                          (0x00000008&((data)<<3))
#define  MIS_GPIO_ISR_GP5A_int156(data)                                          (0x00000004&((data)<<2))
#define  MIS_GPIO_ISR_GP5A_int155(data)                                          (0x00000002&((data)<<1))
#define  MIS_GPIO_ISR_GP5A_write_data(data)                                      (0x00000001&(data))
#define  MIS_GPIO_ISR_GP5A_get_int160(data)                                      ((0x00000040&(data))>>6)
#define  MIS_GPIO_ISR_GP5A_get_int159(data)                                      ((0x00000020&(data))>>5)
#define  MIS_GPIO_ISR_GP5A_get_int158(data)                                      ((0x00000010&(data))>>4)
#define  MIS_GPIO_ISR_GP5A_get_int157(data)                                      ((0x00000008&(data))>>3)
#define  MIS_GPIO_ISR_GP5A_get_int156(data)                                      ((0x00000004&(data))>>2)
#define  MIS_GPIO_ISR_GP5A_get_int155(data)                                      ((0x00000002&(data))>>1)
#define  MIS_GPIO_ISR_GP5A_get_write_data(data)                                  (0x00000001&(data))

#define  MIS_GPIO_ISR_GP0DA                                                     0x1801BD9C
#define  MIS_GPIO_ISR_GP0DA_reg_addr                                             "0xB801BD9C"
#define  MIS_GPIO_ISR_GP0DA_reg                                                  0xB801BD9C
#define  MIS_GPIO_ISR_GP0DA_inst_addr                                            "0x0026"
#define  set_MIS_GPIO_ISR_GP0DA_reg(data)                                        (*((volatile unsigned int*)MIS_GPIO_ISR_GP0DA_reg)=data)
#define  get_MIS_GPIO_ISR_GP0DA_reg                                              (*((volatile unsigned int*)MIS_GPIO_ISR_GP0DA_reg))
#define  MIS_GPIO_ISR_GP0DA_int30_shift                                          (31)
#define  MIS_GPIO_ISR_GP0DA_int29_shift                                          (30)
#define  MIS_GPIO_ISR_GP0DA_int28_shift                                          (29)
#define  MIS_GPIO_ISR_GP0DA_int27_shift                                          (28)
#define  MIS_GPIO_ISR_GP0DA_int26_shift                                          (27)
#define  MIS_GPIO_ISR_GP0DA_int25_shift                                          (26)
#define  MIS_GPIO_ISR_GP0DA_int24_shift                                          (25)
#define  MIS_GPIO_ISR_GP0DA_int23_shift                                          (24)
#define  MIS_GPIO_ISR_GP0DA_int22_shift                                          (23)
#define  MIS_GPIO_ISR_GP0DA_int21_shift                                          (22)
#define  MIS_GPIO_ISR_GP0DA_int20_shift                                          (21)
#define  MIS_GPIO_ISR_GP0DA_int19_shift                                          (20)
#define  MIS_GPIO_ISR_GP0DA_int18_shift                                          (19)
#define  MIS_GPIO_ISR_GP0DA_int17_shift                                          (18)
#define  MIS_GPIO_ISR_GP0DA_int16_shift                                          (17)
#define  MIS_GPIO_ISR_GP0DA_int15_shift                                          (16)
#define  MIS_GPIO_ISR_GP0DA_int14_shift                                          (15)
#define  MIS_GPIO_ISR_GP0DA_int13_shift                                          (14)
#define  MIS_GPIO_ISR_GP0DA_int12_shift                                          (13)
#define  MIS_GPIO_ISR_GP0DA_int11_shift                                          (12)
#define  MIS_GPIO_ISR_GP0DA_int10_shift                                          (11)
#define  MIS_GPIO_ISR_GP0DA_int9_shift                                           (10)
#define  MIS_GPIO_ISR_GP0DA_int8_shift                                           (9)
#define  MIS_GPIO_ISR_GP0DA_int7_shift                                           (8)
#define  MIS_GPIO_ISR_GP0DA_int6_shift                                           (7)
#define  MIS_GPIO_ISR_GP0DA_int5_shift                                           (6)
#define  MIS_GPIO_ISR_GP0DA_int4_shift                                           (5)
#define  MIS_GPIO_ISR_GP0DA_int3_shift                                           (4)
#define  MIS_GPIO_ISR_GP0DA_int2_shift                                           (3)
#define  MIS_GPIO_ISR_GP0DA_int1_shift                                           (2)
#define  MIS_GPIO_ISR_GP0DA_int0_shift                                           (1)
#define  MIS_GPIO_ISR_GP0DA_write_data_shift                                     (0)
#define  MIS_GPIO_ISR_GP0DA_int30_mask                                           (0x80000000)
#define  MIS_GPIO_ISR_GP0DA_int29_mask                                           (0x40000000)
#define  MIS_GPIO_ISR_GP0DA_int28_mask                                           (0x20000000)
#define  MIS_GPIO_ISR_GP0DA_int27_mask                                           (0x10000000)
#define  MIS_GPIO_ISR_GP0DA_int26_mask                                           (0x08000000)
#define  MIS_GPIO_ISR_GP0DA_int25_mask                                           (0x04000000)
#define  MIS_GPIO_ISR_GP0DA_int24_mask                                           (0x02000000)
#define  MIS_GPIO_ISR_GP0DA_int23_mask                                           (0x01000000)
#define  MIS_GPIO_ISR_GP0DA_int22_mask                                           (0x00800000)
#define  MIS_GPIO_ISR_GP0DA_int21_mask                                           (0x00400000)
#define  MIS_GPIO_ISR_GP0DA_int20_mask                                           (0x00200000)
#define  MIS_GPIO_ISR_GP0DA_int19_mask                                           (0x00100000)
#define  MIS_GPIO_ISR_GP0DA_int18_mask                                           (0x00080000)
#define  MIS_GPIO_ISR_GP0DA_int17_mask                                           (0x00040000)
#define  MIS_GPIO_ISR_GP0DA_int16_mask                                           (0x00020000)
#define  MIS_GPIO_ISR_GP0DA_int15_mask                                           (0x00010000)
#define  MIS_GPIO_ISR_GP0DA_int14_mask                                           (0x00008000)
#define  MIS_GPIO_ISR_GP0DA_int13_mask                                           (0x00004000)
#define  MIS_GPIO_ISR_GP0DA_int12_mask                                           (0x00002000)
#define  MIS_GPIO_ISR_GP0DA_int11_mask                                           (0x00001000)
#define  MIS_GPIO_ISR_GP0DA_int10_mask                                           (0x00000800)
#define  MIS_GPIO_ISR_GP0DA_int9_mask                                            (0x00000400)
#define  MIS_GPIO_ISR_GP0DA_int8_mask                                            (0x00000200)
#define  MIS_GPIO_ISR_GP0DA_int7_mask                                            (0x00000100)
#define  MIS_GPIO_ISR_GP0DA_int6_mask                                            (0x00000080)
#define  MIS_GPIO_ISR_GP0DA_int5_mask                                            (0x00000040)
#define  MIS_GPIO_ISR_GP0DA_int4_mask                                            (0x00000020)
#define  MIS_GPIO_ISR_GP0DA_int3_mask                                            (0x00000010)
#define  MIS_GPIO_ISR_GP0DA_int2_mask                                            (0x00000008)
#define  MIS_GPIO_ISR_GP0DA_int1_mask                                            (0x00000004)
#define  MIS_GPIO_ISR_GP0DA_int0_mask                                            (0x00000002)
#define  MIS_GPIO_ISR_GP0DA_write_data_mask                                      (0x00000001)
#define  MIS_GPIO_ISR_GP0DA_int30(data)                                          (0x80000000&((data)<<31))
#define  MIS_GPIO_ISR_GP0DA_int29(data)                                          (0x40000000&((data)<<30))
#define  MIS_GPIO_ISR_GP0DA_int28(data)                                          (0x20000000&((data)<<29))
#define  MIS_GPIO_ISR_GP0DA_int27(data)                                          (0x10000000&((data)<<28))
#define  MIS_GPIO_ISR_GP0DA_int26(data)                                          (0x08000000&((data)<<27))
#define  MIS_GPIO_ISR_GP0DA_int25(data)                                          (0x04000000&((data)<<26))
#define  MIS_GPIO_ISR_GP0DA_int24(data)                                          (0x02000000&((data)<<25))
#define  MIS_GPIO_ISR_GP0DA_int23(data)                                          (0x01000000&((data)<<24))
#define  MIS_GPIO_ISR_GP0DA_int22(data)                                          (0x00800000&((data)<<23))
#define  MIS_GPIO_ISR_GP0DA_int21(data)                                          (0x00400000&((data)<<22))
#define  MIS_GPIO_ISR_GP0DA_int20(data)                                          (0x00200000&((data)<<21))
#define  MIS_GPIO_ISR_GP0DA_int19(data)                                          (0x00100000&((data)<<20))
#define  MIS_GPIO_ISR_GP0DA_int18(data)                                          (0x00080000&((data)<<19))
#define  MIS_GPIO_ISR_GP0DA_int17(data)                                          (0x00040000&((data)<<18))
#define  MIS_GPIO_ISR_GP0DA_int16(data)                                          (0x00020000&((data)<<17))
#define  MIS_GPIO_ISR_GP0DA_int15(data)                                          (0x00010000&((data)<<16))
#define  MIS_GPIO_ISR_GP0DA_int14(data)                                          (0x00008000&((data)<<15))
#define  MIS_GPIO_ISR_GP0DA_int13(data)                                          (0x00004000&((data)<<14))
#define  MIS_GPIO_ISR_GP0DA_int12(data)                                          (0x00002000&((data)<<13))
#define  MIS_GPIO_ISR_GP0DA_int11(data)                                          (0x00001000&((data)<<12))
#define  MIS_GPIO_ISR_GP0DA_int10(data)                                          (0x00000800&((data)<<11))
#define  MIS_GPIO_ISR_GP0DA_int9(data)                                           (0x00000400&((data)<<10))
#define  MIS_GPIO_ISR_GP0DA_int8(data)                                           (0x00000200&((data)<<9))
#define  MIS_GPIO_ISR_GP0DA_int7(data)                                           (0x00000100&((data)<<8))
#define  MIS_GPIO_ISR_GP0DA_int6(data)                                           (0x00000080&((data)<<7))
#define  MIS_GPIO_ISR_GP0DA_int5(data)                                           (0x00000040&((data)<<6))
#define  MIS_GPIO_ISR_GP0DA_int4(data)                                           (0x00000020&((data)<<5))
#define  MIS_GPIO_ISR_GP0DA_int3(data)                                           (0x00000010&((data)<<4))
#define  MIS_GPIO_ISR_GP0DA_int2(data)                                           (0x00000008&((data)<<3))
#define  MIS_GPIO_ISR_GP0DA_int1(data)                                           (0x00000004&((data)<<2))
#define  MIS_GPIO_ISR_GP0DA_int0(data)                                           (0x00000002&((data)<<1))
#define  MIS_GPIO_ISR_GP0DA_write_data(data)                                     (0x00000001&(data))
#define  MIS_GPIO_ISR_GP0DA_get_int30(data)                                      ((0x80000000&(data))>>31)
#define  MIS_GPIO_ISR_GP0DA_get_int29(data)                                      ((0x40000000&(data))>>30)
#define  MIS_GPIO_ISR_GP0DA_get_int28(data)                                      ((0x20000000&(data))>>29)
#define  MIS_GPIO_ISR_GP0DA_get_int27(data)                                      ((0x10000000&(data))>>28)
#define  MIS_GPIO_ISR_GP0DA_get_int26(data)                                      ((0x08000000&(data))>>27)
#define  MIS_GPIO_ISR_GP0DA_get_int25(data)                                      ((0x04000000&(data))>>26)
#define  MIS_GPIO_ISR_GP0DA_get_int24(data)                                      ((0x02000000&(data))>>25)
#define  MIS_GPIO_ISR_GP0DA_get_int23(data)                                      ((0x01000000&(data))>>24)
#define  MIS_GPIO_ISR_GP0DA_get_int22(data)                                      ((0x00800000&(data))>>23)
#define  MIS_GPIO_ISR_GP0DA_get_int21(data)                                      ((0x00400000&(data))>>22)
#define  MIS_GPIO_ISR_GP0DA_get_int20(data)                                      ((0x00200000&(data))>>21)
#define  MIS_GPIO_ISR_GP0DA_get_int19(data)                                      ((0x00100000&(data))>>20)
#define  MIS_GPIO_ISR_GP0DA_get_int18(data)                                      ((0x00080000&(data))>>19)
#define  MIS_GPIO_ISR_GP0DA_get_int17(data)                                      ((0x00040000&(data))>>18)
#define  MIS_GPIO_ISR_GP0DA_get_int16(data)                                      ((0x00020000&(data))>>17)
#define  MIS_GPIO_ISR_GP0DA_get_int15(data)                                      ((0x00010000&(data))>>16)
#define  MIS_GPIO_ISR_GP0DA_get_int14(data)                                      ((0x00008000&(data))>>15)
#define  MIS_GPIO_ISR_GP0DA_get_int13(data)                                      ((0x00004000&(data))>>14)
#define  MIS_GPIO_ISR_GP0DA_get_int12(data)                                      ((0x00002000&(data))>>13)
#define  MIS_GPIO_ISR_GP0DA_get_int11(data)                                      ((0x00001000&(data))>>12)
#define  MIS_GPIO_ISR_GP0DA_get_int10(data)                                      ((0x00000800&(data))>>11)
#define  MIS_GPIO_ISR_GP0DA_get_int9(data)                                       ((0x00000400&(data))>>10)
#define  MIS_GPIO_ISR_GP0DA_get_int8(data)                                       ((0x00000200&(data))>>9)
#define  MIS_GPIO_ISR_GP0DA_get_int7(data)                                       ((0x00000100&(data))>>8)
#define  MIS_GPIO_ISR_GP0DA_get_int6(data)                                       ((0x00000080&(data))>>7)
#define  MIS_GPIO_ISR_GP0DA_get_int5(data)                                       ((0x00000040&(data))>>6)
#define  MIS_GPIO_ISR_GP0DA_get_int4(data)                                       ((0x00000020&(data))>>5)
#define  MIS_GPIO_ISR_GP0DA_get_int3(data)                                       ((0x00000010&(data))>>4)
#define  MIS_GPIO_ISR_GP0DA_get_int2(data)                                       ((0x00000008&(data))>>3)
#define  MIS_GPIO_ISR_GP0DA_get_int1(data)                                       ((0x00000004&(data))>>2)
#define  MIS_GPIO_ISR_GP0DA_get_int0(data)                                       ((0x00000002&(data))>>1)
#define  MIS_GPIO_ISR_GP0DA_get_write_data(data)                                 (0x00000001&(data))

#define  MIS_GPIO_ISR_GP1DA                                                     0x1801BDA0
#define  MIS_GPIO_ISR_GP1DA_reg_addr                                             "0xB801BDA0"
#define  MIS_GPIO_ISR_GP1DA_reg                                                  0xB801BDA0
#define  MIS_GPIO_ISR_GP1DA_inst_addr                                            "0x0027"
#define  set_MIS_GPIO_ISR_GP1DA_reg(data)                                        (*((volatile unsigned int*)MIS_GPIO_ISR_GP1DA_reg)=data)
#define  get_MIS_GPIO_ISR_GP1DA_reg                                              (*((volatile unsigned int*)MIS_GPIO_ISR_GP1DA_reg))
#define  MIS_GPIO_ISR_GP1DA_int61_shift                                          (31)
#define  MIS_GPIO_ISR_GP1DA_int60_shift                                          (30)
#define  MIS_GPIO_ISR_GP1DA_int59_shift                                          (29)
#define  MIS_GPIO_ISR_GP1DA_int58_shift                                          (28)
#define  MIS_GPIO_ISR_GP1DA_int57_shift                                          (27)
#define  MIS_GPIO_ISR_GP1DA_int56_shift                                          (26)
#define  MIS_GPIO_ISR_GP1DA_int55_shift                                          (25)
#define  MIS_GPIO_ISR_GP1DA_int54_shift                                          (24)
#define  MIS_GPIO_ISR_GP1DA_int53_shift                                          (23)
#define  MIS_GPIO_ISR_GP1DA_int52_shift                                          (22)
#define  MIS_GPIO_ISR_GP1DA_int51_shift                                          (21)
#define  MIS_GPIO_ISR_GP1DA_int50_shift                                          (20)
#define  MIS_GPIO_ISR_GP1DA_int49_shift                                          (19)
#define  MIS_GPIO_ISR_GP1DA_int48_shift                                          (18)
#define  MIS_GPIO_ISR_GP1DA_int47_shift                                          (17)
#define  MIS_GPIO_ISR_GP1DA_int46_shift                                          (16)
#define  MIS_GPIO_ISR_GP1DA_int45_shift                                          (15)
#define  MIS_GPIO_ISR_GP1DA_int44_shift                                          (14)
#define  MIS_GPIO_ISR_GP1DA_int43_shift                                          (13)
#define  MIS_GPIO_ISR_GP1DA_int42_shift                                          (12)
#define  MIS_GPIO_ISR_GP1DA_int41_shift                                          (11)
#define  MIS_GPIO_ISR_GP1DA_int40_shift                                          (10)
#define  MIS_GPIO_ISR_GP1DA_int39_shift                                          (9)
#define  MIS_GPIO_ISR_GP1DA_int38_shift                                          (8)
#define  MIS_GPIO_ISR_GP1DA_int37_shift                                          (7)
#define  MIS_GPIO_ISR_GP1DA_int36_shift                                          (6)
#define  MIS_GPIO_ISR_GP1DA_int35_shift                                          (5)
#define  MIS_GPIO_ISR_GP1DA_int34_shift                                          (4)
#define  MIS_GPIO_ISR_GP1DA_int33_shift                                          (3)
#define  MIS_GPIO_ISR_GP1DA_int32_shift                                          (2)
#define  MIS_GPIO_ISR_GP1DA_int31_shift                                          (1)
#define  MIS_GPIO_ISR_GP1DA_write_data_shift                                     (0)
#define  MIS_GPIO_ISR_GP1DA_int61_mask                                           (0x80000000)
#define  MIS_GPIO_ISR_GP1DA_int60_mask                                           (0x40000000)
#define  MIS_GPIO_ISR_GP1DA_int59_mask                                           (0x20000000)
#define  MIS_GPIO_ISR_GP1DA_int58_mask                                           (0x10000000)
#define  MIS_GPIO_ISR_GP1DA_int57_mask                                           (0x08000000)
#define  MIS_GPIO_ISR_GP1DA_int56_mask                                           (0x04000000)
#define  MIS_GPIO_ISR_GP1DA_int55_mask                                           (0x02000000)
#define  MIS_GPIO_ISR_GP1DA_int54_mask                                           (0x01000000)
#define  MIS_GPIO_ISR_GP1DA_int53_mask                                           (0x00800000)
#define  MIS_GPIO_ISR_GP1DA_int52_mask                                           (0x00400000)
#define  MIS_GPIO_ISR_GP1DA_int51_mask                                           (0x00200000)
#define  MIS_GPIO_ISR_GP1DA_int50_mask                                           (0x00100000)
#define  MIS_GPIO_ISR_GP1DA_int49_mask                                           (0x00080000)
#define  MIS_GPIO_ISR_GP1DA_int48_mask                                           (0x00040000)
#define  MIS_GPIO_ISR_GP1DA_int47_mask                                           (0x00020000)
#define  MIS_GPIO_ISR_GP1DA_int46_mask                                           (0x00010000)
#define  MIS_GPIO_ISR_GP1DA_int45_mask                                           (0x00008000)
#define  MIS_GPIO_ISR_GP1DA_int44_mask                                           (0x00004000)
#define  MIS_GPIO_ISR_GP1DA_int43_mask                                           (0x00002000)
#define  MIS_GPIO_ISR_GP1DA_int42_mask                                           (0x00001000)
#define  MIS_GPIO_ISR_GP1DA_int41_mask                                           (0x00000800)
#define  MIS_GPIO_ISR_GP1DA_int40_mask                                           (0x00000400)
#define  MIS_GPIO_ISR_GP1DA_int39_mask                                           (0x00000200)
#define  MIS_GPIO_ISR_GP1DA_int38_mask                                           (0x00000100)
#define  MIS_GPIO_ISR_GP1DA_int37_mask                                           (0x00000080)
#define  MIS_GPIO_ISR_GP1DA_int36_mask                                           (0x00000040)
#define  MIS_GPIO_ISR_GP1DA_int35_mask                                           (0x00000020)
#define  MIS_GPIO_ISR_GP1DA_int34_mask                                           (0x00000010)
#define  MIS_GPIO_ISR_GP1DA_int33_mask                                           (0x00000008)
#define  MIS_GPIO_ISR_GP1DA_int32_mask                                           (0x00000004)
#define  MIS_GPIO_ISR_GP1DA_int31_mask                                           (0x00000002)
#define  MIS_GPIO_ISR_GP1DA_write_data_mask                                      (0x00000001)
#define  MIS_GPIO_ISR_GP1DA_int61(data)                                          (0x80000000&((data)<<31))
#define  MIS_GPIO_ISR_GP1DA_int60(data)                                          (0x40000000&((data)<<30))
#define  MIS_GPIO_ISR_GP1DA_int59(data)                                          (0x20000000&((data)<<29))
#define  MIS_GPIO_ISR_GP1DA_int58(data)                                          (0x10000000&((data)<<28))
#define  MIS_GPIO_ISR_GP1DA_int57(data)                                          (0x08000000&((data)<<27))
#define  MIS_GPIO_ISR_GP1DA_int56(data)                                          (0x04000000&((data)<<26))
#define  MIS_GPIO_ISR_GP1DA_int55(data)                                          (0x02000000&((data)<<25))
#define  MIS_GPIO_ISR_GP1DA_int54(data)                                          (0x01000000&((data)<<24))
#define  MIS_GPIO_ISR_GP1DA_int53(data)                                          (0x00800000&((data)<<23))
#define  MIS_GPIO_ISR_GP1DA_int52(data)                                          (0x00400000&((data)<<22))
#define  MIS_GPIO_ISR_GP1DA_int51(data)                                          (0x00200000&((data)<<21))
#define  MIS_GPIO_ISR_GP1DA_int50(data)                                          (0x00100000&((data)<<20))
#define  MIS_GPIO_ISR_GP1DA_int49(data)                                          (0x00080000&((data)<<19))
#define  MIS_GPIO_ISR_GP1DA_int48(data)                                          (0x00040000&((data)<<18))
#define  MIS_GPIO_ISR_GP1DA_int47(data)                                          (0x00020000&((data)<<17))
#define  MIS_GPIO_ISR_GP1DA_int46(data)                                          (0x00010000&((data)<<16))
#define  MIS_GPIO_ISR_GP1DA_int45(data)                                          (0x00008000&((data)<<15))
#define  MIS_GPIO_ISR_GP1DA_int44(data)                                          (0x00004000&((data)<<14))
#define  MIS_GPIO_ISR_GP1DA_int43(data)                                          (0x00002000&((data)<<13))
#define  MIS_GPIO_ISR_GP1DA_int42(data)                                          (0x00001000&((data)<<12))
#define  MIS_GPIO_ISR_GP1DA_int41(data)                                          (0x00000800&((data)<<11))
#define  MIS_GPIO_ISR_GP1DA_int40(data)                                          (0x00000400&((data)<<10))
#define  MIS_GPIO_ISR_GP1DA_int39(data)                                          (0x00000200&((data)<<9))
#define  MIS_GPIO_ISR_GP1DA_int38(data)                                          (0x00000100&((data)<<8))
#define  MIS_GPIO_ISR_GP1DA_int37(data)                                          (0x00000080&((data)<<7))
#define  MIS_GPIO_ISR_GP1DA_int36(data)                                          (0x00000040&((data)<<6))
#define  MIS_GPIO_ISR_GP1DA_int35(data)                                          (0x00000020&((data)<<5))
#define  MIS_GPIO_ISR_GP1DA_int34(data)                                          (0x00000010&((data)<<4))
#define  MIS_GPIO_ISR_GP1DA_int33(data)                                          (0x00000008&((data)<<3))
#define  MIS_GPIO_ISR_GP1DA_int32(data)                                          (0x00000004&((data)<<2))
#define  MIS_GPIO_ISR_GP1DA_int31(data)                                          (0x00000002&((data)<<1))
#define  MIS_GPIO_ISR_GP1DA_write_data(data)                                     (0x00000001&(data))
#define  MIS_GPIO_ISR_GP1DA_get_int61(data)                                      ((0x80000000&(data))>>31)
#define  MIS_GPIO_ISR_GP1DA_get_int60(data)                                      ((0x40000000&(data))>>30)
#define  MIS_GPIO_ISR_GP1DA_get_int59(data)                                      ((0x20000000&(data))>>29)
#define  MIS_GPIO_ISR_GP1DA_get_int58(data)                                      ((0x10000000&(data))>>28)
#define  MIS_GPIO_ISR_GP1DA_get_int57(data)                                      ((0x08000000&(data))>>27)
#define  MIS_GPIO_ISR_GP1DA_get_int56(data)                                      ((0x04000000&(data))>>26)
#define  MIS_GPIO_ISR_GP1DA_get_int55(data)                                      ((0x02000000&(data))>>25)
#define  MIS_GPIO_ISR_GP1DA_get_int54(data)                                      ((0x01000000&(data))>>24)
#define  MIS_GPIO_ISR_GP1DA_get_int53(data)                                      ((0x00800000&(data))>>23)
#define  MIS_GPIO_ISR_GP1DA_get_int52(data)                                      ((0x00400000&(data))>>22)
#define  MIS_GPIO_ISR_GP1DA_get_int51(data)                                      ((0x00200000&(data))>>21)
#define  MIS_GPIO_ISR_GP1DA_get_int50(data)                                      ((0x00100000&(data))>>20)
#define  MIS_GPIO_ISR_GP1DA_get_int49(data)                                      ((0x00080000&(data))>>19)
#define  MIS_GPIO_ISR_GP1DA_get_int48(data)                                      ((0x00040000&(data))>>18)
#define  MIS_GPIO_ISR_GP1DA_get_int47(data)                                      ((0x00020000&(data))>>17)
#define  MIS_GPIO_ISR_GP1DA_get_int46(data)                                      ((0x00010000&(data))>>16)
#define  MIS_GPIO_ISR_GP1DA_get_int45(data)                                      ((0x00008000&(data))>>15)
#define  MIS_GPIO_ISR_GP1DA_get_int44(data)                                      ((0x00004000&(data))>>14)
#define  MIS_GPIO_ISR_GP1DA_get_int43(data)                                      ((0x00002000&(data))>>13)
#define  MIS_GPIO_ISR_GP1DA_get_int42(data)                                      ((0x00001000&(data))>>12)
#define  MIS_GPIO_ISR_GP1DA_get_int41(data)                                      ((0x00000800&(data))>>11)
#define  MIS_GPIO_ISR_GP1DA_get_int40(data)                                      ((0x00000400&(data))>>10)
#define  MIS_GPIO_ISR_GP1DA_get_int39(data)                                      ((0x00000200&(data))>>9)
#define  MIS_GPIO_ISR_GP1DA_get_int38(data)                                      ((0x00000100&(data))>>8)
#define  MIS_GPIO_ISR_GP1DA_get_int37(data)                                      ((0x00000080&(data))>>7)
#define  MIS_GPIO_ISR_GP1DA_get_int36(data)                                      ((0x00000040&(data))>>6)
#define  MIS_GPIO_ISR_GP1DA_get_int35(data)                                      ((0x00000020&(data))>>5)
#define  MIS_GPIO_ISR_GP1DA_get_int34(data)                                      ((0x00000010&(data))>>4)
#define  MIS_GPIO_ISR_GP1DA_get_int33(data)                                      ((0x00000008&(data))>>3)
#define  MIS_GPIO_ISR_GP1DA_get_int32(data)                                      ((0x00000004&(data))>>2)
#define  MIS_GPIO_ISR_GP1DA_get_int31(data)                                      ((0x00000002&(data))>>1)
#define  MIS_GPIO_ISR_GP1DA_get_write_data(data)                                 (0x00000001&(data))

#define  MIS_GPIO_ISR_GP2DA                                                     0x1801BDA4
#define  MIS_GPIO_ISR_GP2DA_reg_addr                                             "0xB801BDA4"
#define  MIS_GPIO_ISR_GP2DA_reg                                                  0xB801BDA4
#define  MIS_GPIO_ISR_GP2DA_inst_addr                                            "0x0028"
#define  set_MIS_GPIO_ISR_GP2DA_reg(data)                                        (*((volatile unsigned int*)MIS_GPIO_ISR_GP2DA_reg)=data)
#define  get_MIS_GPIO_ISR_GP2DA_reg                                              (*((volatile unsigned int*)MIS_GPIO_ISR_GP2DA_reg))
#define  MIS_GPIO_ISR_GP2DA_int92_shift                                          (31)
#define  MIS_GPIO_ISR_GP2DA_int91_shift                                          (30)
#define  MIS_GPIO_ISR_GP2DA_int90_shift                                          (29)
#define  MIS_GPIO_ISR_GP2DA_int89_shift                                          (28)
#define  MIS_GPIO_ISR_GP2DA_int88_shift                                          (27)
#define  MIS_GPIO_ISR_GP2DA_int87_shift                                          (26)
#define  MIS_GPIO_ISR_GP2DA_int86_shift                                          (25)
#define  MIS_GPIO_ISR_GP2DA_int85_shift                                          (24)
#define  MIS_GPIO_ISR_GP2DA_int84_shift                                          (23)
#define  MIS_GPIO_ISR_GP2DA_int83_shift                                          (22)
#define  MIS_GPIO_ISR_GP2DA_int82_shift                                          (21)
#define  MIS_GPIO_ISR_GP2DA_int81_shift                                          (20)
#define  MIS_GPIO_ISR_GP2DA_int80_shift                                          (19)
#define  MIS_GPIO_ISR_GP2DA_int79_shift                                          (18)
#define  MIS_GPIO_ISR_GP2DA_int78_shift                                          (17)
#define  MIS_GPIO_ISR_GP2DA_int77_shift                                          (16)
#define  MIS_GPIO_ISR_GP2DA_int76_shift                                          (15)
#define  MIS_GPIO_ISR_GP2DA_int75_shift                                          (14)
#define  MIS_GPIO_ISR_GP2DA_int74_shift                                          (13)
#define  MIS_GPIO_ISR_GP2DA_int73_shift                                          (12)
#define  MIS_GPIO_ISR_GP2DA_int72_shift                                          (11)
#define  MIS_GPIO_ISR_GP2DA_int71_shift                                          (10)
#define  MIS_GPIO_ISR_GP2DA_int70_shift                                          (9)
#define  MIS_GPIO_ISR_GP2DA_int69_shift                                          (8)
#define  MIS_GPIO_ISR_GP2DA_int68_shift                                          (7)
#define  MIS_GPIO_ISR_GP2DA_int67_shift                                          (6)
#define  MIS_GPIO_ISR_GP2DA_int66_shift                                          (5)
#define  MIS_GPIO_ISR_GP2DA_int65_shift                                          (4)
#define  MIS_GPIO_ISR_GP2DA_int64_shift                                          (3)
#define  MIS_GPIO_ISR_GP2DA_int63_shift                                          (2)
#define  MIS_GPIO_ISR_GP2DA_int62_shift                                          (1)
#define  MIS_GPIO_ISR_GP2DA_write_data_shift                                     (0)
#define  MIS_GPIO_ISR_GP2DA_int92_mask                                           (0x80000000)
#define  MIS_GPIO_ISR_GP2DA_int91_mask                                           (0x40000000)
#define  MIS_GPIO_ISR_GP2DA_int90_mask                                           (0x20000000)
#define  MIS_GPIO_ISR_GP2DA_int89_mask                                           (0x10000000)
#define  MIS_GPIO_ISR_GP2DA_int88_mask                                           (0x08000000)
#define  MIS_GPIO_ISR_GP2DA_int87_mask                                           (0x04000000)
#define  MIS_GPIO_ISR_GP2DA_int86_mask                                           (0x02000000)
#define  MIS_GPIO_ISR_GP2DA_int85_mask                                           (0x01000000)
#define  MIS_GPIO_ISR_GP2DA_int84_mask                                           (0x00800000)
#define  MIS_GPIO_ISR_GP2DA_int83_mask                                           (0x00400000)
#define  MIS_GPIO_ISR_GP2DA_int82_mask                                           (0x00200000)
#define  MIS_GPIO_ISR_GP2DA_int81_mask                                           (0x00100000)
#define  MIS_GPIO_ISR_GP2DA_int80_mask                                           (0x00080000)
#define  MIS_GPIO_ISR_GP2DA_int79_mask                                           (0x00040000)
#define  MIS_GPIO_ISR_GP2DA_int78_mask                                           (0x00020000)
#define  MIS_GPIO_ISR_GP2DA_int77_mask                                           (0x00010000)
#define  MIS_GPIO_ISR_GP2DA_int76_mask                                           (0x00008000)
#define  MIS_GPIO_ISR_GP2DA_int75_mask                                           (0x00004000)
#define  MIS_GPIO_ISR_GP2DA_int74_mask                                           (0x00002000)
#define  MIS_GPIO_ISR_GP2DA_int73_mask                                           (0x00001000)
#define  MIS_GPIO_ISR_GP2DA_int72_mask                                           (0x00000800)
#define  MIS_GPIO_ISR_GP2DA_int71_mask                                           (0x00000400)
#define  MIS_GPIO_ISR_GP2DA_int70_mask                                           (0x00000200)
#define  MIS_GPIO_ISR_GP2DA_int69_mask                                           (0x00000100)
#define  MIS_GPIO_ISR_GP2DA_int68_mask                                           (0x00000080)
#define  MIS_GPIO_ISR_GP2DA_int67_mask                                           (0x00000040)
#define  MIS_GPIO_ISR_GP2DA_int66_mask                                           (0x00000020)
#define  MIS_GPIO_ISR_GP2DA_int65_mask                                           (0x00000010)
#define  MIS_GPIO_ISR_GP2DA_int64_mask                                           (0x00000008)
#define  MIS_GPIO_ISR_GP2DA_int63_mask                                           (0x00000004)
#define  MIS_GPIO_ISR_GP2DA_int62_mask                                           (0x00000002)
#define  MIS_GPIO_ISR_GP2DA_write_data_mask                                      (0x00000001)
#define  MIS_GPIO_ISR_GP2DA_int92(data)                                          (0x80000000&((data)<<31))
#define  MIS_GPIO_ISR_GP2DA_int91(data)                                          (0x40000000&((data)<<30))
#define  MIS_GPIO_ISR_GP2DA_int90(data)                                          (0x20000000&((data)<<29))
#define  MIS_GPIO_ISR_GP2DA_int89(data)                                          (0x10000000&((data)<<28))
#define  MIS_GPIO_ISR_GP2DA_int88(data)                                          (0x08000000&((data)<<27))
#define  MIS_GPIO_ISR_GP2DA_int87(data)                                          (0x04000000&((data)<<26))
#define  MIS_GPIO_ISR_GP2DA_int86(data)                                          (0x02000000&((data)<<25))
#define  MIS_GPIO_ISR_GP2DA_int85(data)                                          (0x01000000&((data)<<24))
#define  MIS_GPIO_ISR_GP2DA_int84(data)                                          (0x00800000&((data)<<23))
#define  MIS_GPIO_ISR_GP2DA_int83(data)                                          (0x00400000&((data)<<22))
#define  MIS_GPIO_ISR_GP2DA_int82(data)                                          (0x00200000&((data)<<21))
#define  MIS_GPIO_ISR_GP2DA_int81(data)                                          (0x00100000&((data)<<20))
#define  MIS_GPIO_ISR_GP2DA_int80(data)                                          (0x00080000&((data)<<19))
#define  MIS_GPIO_ISR_GP2DA_int79(data)                                          (0x00040000&((data)<<18))
#define  MIS_GPIO_ISR_GP2DA_int78(data)                                          (0x00020000&((data)<<17))
#define  MIS_GPIO_ISR_GP2DA_int77(data)                                          (0x00010000&((data)<<16))
#define  MIS_GPIO_ISR_GP2DA_int76(data)                                          (0x00008000&((data)<<15))
#define  MIS_GPIO_ISR_GP2DA_int75(data)                                          (0x00004000&((data)<<14))
#define  MIS_GPIO_ISR_GP2DA_int74(data)                                          (0x00002000&((data)<<13))
#define  MIS_GPIO_ISR_GP2DA_int73(data)                                          (0x00001000&((data)<<12))
#define  MIS_GPIO_ISR_GP2DA_int72(data)                                          (0x00000800&((data)<<11))
#define  MIS_GPIO_ISR_GP2DA_int71(data)                                          (0x00000400&((data)<<10))
#define  MIS_GPIO_ISR_GP2DA_int70(data)                                          (0x00000200&((data)<<9))
#define  MIS_GPIO_ISR_GP2DA_int69(data)                                          (0x00000100&((data)<<8))
#define  MIS_GPIO_ISR_GP2DA_int68(data)                                          (0x00000080&((data)<<7))
#define  MIS_GPIO_ISR_GP2DA_int67(data)                                          (0x00000040&((data)<<6))
#define  MIS_GPIO_ISR_GP2DA_int66(data)                                          (0x00000020&((data)<<5))
#define  MIS_GPIO_ISR_GP2DA_int65(data)                                          (0x00000010&((data)<<4))
#define  MIS_GPIO_ISR_GP2DA_int64(data)                                          (0x00000008&((data)<<3))
#define  MIS_GPIO_ISR_GP2DA_int63(data)                                          (0x00000004&((data)<<2))
#define  MIS_GPIO_ISR_GP2DA_int62(data)                                          (0x00000002&((data)<<1))
#define  MIS_GPIO_ISR_GP2DA_write_data(data)                                     (0x00000001&(data))
#define  MIS_GPIO_ISR_GP2DA_get_int92(data)                                      ((0x80000000&(data))>>31)
#define  MIS_GPIO_ISR_GP2DA_get_int91(data)                                      ((0x40000000&(data))>>30)
#define  MIS_GPIO_ISR_GP2DA_get_int90(data)                                      ((0x20000000&(data))>>29)
#define  MIS_GPIO_ISR_GP2DA_get_int89(data)                                      ((0x10000000&(data))>>28)
#define  MIS_GPIO_ISR_GP2DA_get_int88(data)                                      ((0x08000000&(data))>>27)
#define  MIS_GPIO_ISR_GP2DA_get_int87(data)                                      ((0x04000000&(data))>>26)
#define  MIS_GPIO_ISR_GP2DA_get_int86(data)                                      ((0x02000000&(data))>>25)
#define  MIS_GPIO_ISR_GP2DA_get_int85(data)                                      ((0x01000000&(data))>>24)
#define  MIS_GPIO_ISR_GP2DA_get_int84(data)                                      ((0x00800000&(data))>>23)
#define  MIS_GPIO_ISR_GP2DA_get_int83(data)                                      ((0x00400000&(data))>>22)
#define  MIS_GPIO_ISR_GP2DA_get_int82(data)                                      ((0x00200000&(data))>>21)
#define  MIS_GPIO_ISR_GP2DA_get_int81(data)                                      ((0x00100000&(data))>>20)
#define  MIS_GPIO_ISR_GP2DA_get_int80(data)                                      ((0x00080000&(data))>>19)
#define  MIS_GPIO_ISR_GP2DA_get_int79(data)                                      ((0x00040000&(data))>>18)
#define  MIS_GPIO_ISR_GP2DA_get_int78(data)                                      ((0x00020000&(data))>>17)
#define  MIS_GPIO_ISR_GP2DA_get_int77(data)                                      ((0x00010000&(data))>>16)
#define  MIS_GPIO_ISR_GP2DA_get_int76(data)                                      ((0x00008000&(data))>>15)
#define  MIS_GPIO_ISR_GP2DA_get_int75(data)                                      ((0x00004000&(data))>>14)
#define  MIS_GPIO_ISR_GP2DA_get_int74(data)                                      ((0x00002000&(data))>>13)
#define  MIS_GPIO_ISR_GP2DA_get_int73(data)                                      ((0x00001000&(data))>>12)
#define  MIS_GPIO_ISR_GP2DA_get_int72(data)                                      ((0x00000800&(data))>>11)
#define  MIS_GPIO_ISR_GP2DA_get_int71(data)                                      ((0x00000400&(data))>>10)
#define  MIS_GPIO_ISR_GP2DA_get_int70(data)                                      ((0x00000200&(data))>>9)
#define  MIS_GPIO_ISR_GP2DA_get_int69(data)                                      ((0x00000100&(data))>>8)
#define  MIS_GPIO_ISR_GP2DA_get_int68(data)                                      ((0x00000080&(data))>>7)
#define  MIS_GPIO_ISR_GP2DA_get_int67(data)                                      ((0x00000040&(data))>>6)
#define  MIS_GPIO_ISR_GP2DA_get_int66(data)                                      ((0x00000020&(data))>>5)
#define  MIS_GPIO_ISR_GP2DA_get_int65(data)                                      ((0x00000010&(data))>>4)
#define  MIS_GPIO_ISR_GP2DA_get_int64(data)                                      ((0x00000008&(data))>>3)
#define  MIS_GPIO_ISR_GP2DA_get_int63(data)                                      ((0x00000004&(data))>>2)
#define  MIS_GPIO_ISR_GP2DA_get_int62(data)                                      ((0x00000002&(data))>>1)
#define  MIS_GPIO_ISR_GP2DA_get_write_data(data)                                 (0x00000001&(data))

#define  MIS_GPIO_ISR_GP3DA                                                     0x1801BDA8
#define  MIS_GPIO_ISR_GP3DA_reg_addr                                             "0xB801BDA8"
#define  MIS_GPIO_ISR_GP3DA_reg                                                  0xB801BDA8
#define  MIS_GPIO_ISR_GP3DA_inst_addr                                            "0x0029"
#define  set_MIS_GPIO_ISR_GP3DA_reg(data)                                        (*((volatile unsigned int*)MIS_GPIO_ISR_GP3DA_reg)=data)
#define  get_MIS_GPIO_ISR_GP3DA_reg                                              (*((volatile unsigned int*)MIS_GPIO_ISR_GP3DA_reg))
#define  MIS_GPIO_ISR_GP3DA_int123_shift                                         (31)
#define  MIS_GPIO_ISR_GP3DA_int122_shift                                         (30)
#define  MIS_GPIO_ISR_GP3DA_int121_shift                                         (29)
#define  MIS_GPIO_ISR_GP3DA_int120_shift                                         (28)
#define  MIS_GPIO_ISR_GP3DA_int119_shift                                         (27)
#define  MIS_GPIO_ISR_GP3DA_int118_shift                                         (26)
#define  MIS_GPIO_ISR_GP3DA_int117_shift                                         (25)
#define  MIS_GPIO_ISR_GP3DA_int116_shift                                         (24)
#define  MIS_GPIO_ISR_GP3DA_int115_shift                                         (23)
#define  MIS_GPIO_ISR_GP3DA_int114_shift                                         (22)
#define  MIS_GPIO_ISR_GP3DA_int113_shift                                         (21)
#define  MIS_GPIO_ISR_GP3DA_int112_shift                                         (20)
#define  MIS_GPIO_ISR_GP3DA_int111_shift                                         (19)
#define  MIS_GPIO_ISR_GP3DA_int110_shift                                         (18)
#define  MIS_GPIO_ISR_GP3DA_int109_shift                                         (17)
#define  MIS_GPIO_ISR_GP3DA_int108_shift                                         (16)
#define  MIS_GPIO_ISR_GP3DA_int107_shift                                         (15)
#define  MIS_GPIO_ISR_GP3DA_int106_shift                                         (14)
#define  MIS_GPIO_ISR_GP3DA_int105_shift                                         (13)
#define  MIS_GPIO_ISR_GP3DA_int104_shift                                         (12)
#define  MIS_GPIO_ISR_GP3DA_int103_shift                                         (11)
#define  MIS_GPIO_ISR_GP3DA_int102_shift                                         (10)
#define  MIS_GPIO_ISR_GP3DA_int101_shift                                         (9)
#define  MIS_GPIO_ISR_GP3DA_int100_shift                                         (8)
#define  MIS_GPIO_ISR_GP3DA_int99_shift                                          (7)
#define  MIS_GPIO_ISR_GP3DA_int98_shift                                          (6)
#define  MIS_GPIO_ISR_GP3DA_int97_shift                                          (5)
#define  MIS_GPIO_ISR_GP3DA_int96_shift                                          (4)
#define  MIS_GPIO_ISR_GP3DA_int95_shift                                          (3)
#define  MIS_GPIO_ISR_GP3DA_int94_shift                                          (2)
#define  MIS_GPIO_ISR_GP3DA_int93_shift                                          (1)
#define  MIS_GPIO_ISR_GP3DA_write_data_shift                                     (0)
#define  MIS_GPIO_ISR_GP3DA_int123_mask                                          (0x80000000)
#define  MIS_GPIO_ISR_GP3DA_int122_mask                                          (0x40000000)
#define  MIS_GPIO_ISR_GP3DA_int121_mask                                          (0x20000000)
#define  MIS_GPIO_ISR_GP3DA_int120_mask                                          (0x10000000)
#define  MIS_GPIO_ISR_GP3DA_int119_mask                                          (0x08000000)
#define  MIS_GPIO_ISR_GP3DA_int118_mask                                          (0x04000000)
#define  MIS_GPIO_ISR_GP3DA_int117_mask                                          (0x02000000)
#define  MIS_GPIO_ISR_GP3DA_int116_mask                                          (0x01000000)
#define  MIS_GPIO_ISR_GP3DA_int115_mask                                          (0x00800000)
#define  MIS_GPIO_ISR_GP3DA_int114_mask                                          (0x00400000)
#define  MIS_GPIO_ISR_GP3DA_int113_mask                                          (0x00200000)
#define  MIS_GPIO_ISR_GP3DA_int112_mask                                          (0x00100000)
#define  MIS_GPIO_ISR_GP3DA_int111_mask                                          (0x00080000)
#define  MIS_GPIO_ISR_GP3DA_int110_mask                                          (0x00040000)
#define  MIS_GPIO_ISR_GP3DA_int109_mask                                          (0x00020000)
#define  MIS_GPIO_ISR_GP3DA_int108_mask                                          (0x00010000)
#define  MIS_GPIO_ISR_GP3DA_int107_mask                                          (0x00008000)
#define  MIS_GPIO_ISR_GP3DA_int106_mask                                          (0x00004000)
#define  MIS_GPIO_ISR_GP3DA_int105_mask                                          (0x00002000)
#define  MIS_GPIO_ISR_GP3DA_int104_mask                                          (0x00001000)
#define  MIS_GPIO_ISR_GP3DA_int103_mask                                          (0x00000800)
#define  MIS_GPIO_ISR_GP3DA_int102_mask                                          (0x00000400)
#define  MIS_GPIO_ISR_GP3DA_int101_mask                                          (0x00000200)
#define  MIS_GPIO_ISR_GP3DA_int100_mask                                          (0x00000100)
#define  MIS_GPIO_ISR_GP3DA_int99_mask                                           (0x00000080)
#define  MIS_GPIO_ISR_GP3DA_int98_mask                                           (0x00000040)
#define  MIS_GPIO_ISR_GP3DA_int97_mask                                           (0x00000020)
#define  MIS_GPIO_ISR_GP3DA_int96_mask                                           (0x00000010)
#define  MIS_GPIO_ISR_GP3DA_int95_mask                                           (0x00000008)
#define  MIS_GPIO_ISR_GP3DA_int94_mask                                           (0x00000004)
#define  MIS_GPIO_ISR_GP3DA_int93_mask                                           (0x00000002)
#define  MIS_GPIO_ISR_GP3DA_write_data_mask                                      (0x00000001)
#define  MIS_GPIO_ISR_GP3DA_int123(data)                                         (0x80000000&((data)<<31))
#define  MIS_GPIO_ISR_GP3DA_int122(data)                                         (0x40000000&((data)<<30))
#define  MIS_GPIO_ISR_GP3DA_int121(data)                                         (0x20000000&((data)<<29))
#define  MIS_GPIO_ISR_GP3DA_int120(data)                                         (0x10000000&((data)<<28))
#define  MIS_GPIO_ISR_GP3DA_int119(data)                                         (0x08000000&((data)<<27))
#define  MIS_GPIO_ISR_GP3DA_int118(data)                                         (0x04000000&((data)<<26))
#define  MIS_GPIO_ISR_GP3DA_int117(data)                                         (0x02000000&((data)<<25))
#define  MIS_GPIO_ISR_GP3DA_int116(data)                                         (0x01000000&((data)<<24))
#define  MIS_GPIO_ISR_GP3DA_int115(data)                                         (0x00800000&((data)<<23))
#define  MIS_GPIO_ISR_GP3DA_int114(data)                                         (0x00400000&((data)<<22))
#define  MIS_GPIO_ISR_GP3DA_int113(data)                                         (0x00200000&((data)<<21))
#define  MIS_GPIO_ISR_GP3DA_int112(data)                                         (0x00100000&((data)<<20))
#define  MIS_GPIO_ISR_GP3DA_int111(data)                                         (0x00080000&((data)<<19))
#define  MIS_GPIO_ISR_GP3DA_int110(data)                                         (0x00040000&((data)<<18))
#define  MIS_GPIO_ISR_GP3DA_int109(data)                                         (0x00020000&((data)<<17))
#define  MIS_GPIO_ISR_GP3DA_int108(data)                                         (0x00010000&((data)<<16))
#define  MIS_GPIO_ISR_GP3DA_int107(data)                                         (0x00008000&((data)<<15))
#define  MIS_GPIO_ISR_GP3DA_int106(data)                                         (0x00004000&((data)<<14))
#define  MIS_GPIO_ISR_GP3DA_int105(data)                                         (0x00002000&((data)<<13))
#define  MIS_GPIO_ISR_GP3DA_int104(data)                                         (0x00001000&((data)<<12))
#define  MIS_GPIO_ISR_GP3DA_int103(data)                                         (0x00000800&((data)<<11))
#define  MIS_GPIO_ISR_GP3DA_int102(data)                                         (0x00000400&((data)<<10))
#define  MIS_GPIO_ISR_GP3DA_int101(data)                                         (0x00000200&((data)<<9))
#define  MIS_GPIO_ISR_GP3DA_int100(data)                                         (0x00000100&((data)<<8))
#define  MIS_GPIO_ISR_GP3DA_int99(data)                                          (0x00000080&((data)<<7))
#define  MIS_GPIO_ISR_GP3DA_int98(data)                                          (0x00000040&((data)<<6))
#define  MIS_GPIO_ISR_GP3DA_int97(data)                                          (0x00000020&((data)<<5))
#define  MIS_GPIO_ISR_GP3DA_int96(data)                                          (0x00000010&((data)<<4))
#define  MIS_GPIO_ISR_GP3DA_int95(data)                                          (0x00000008&((data)<<3))
#define  MIS_GPIO_ISR_GP3DA_int94(data)                                          (0x00000004&((data)<<2))
#define  MIS_GPIO_ISR_GP3DA_int93(data)                                          (0x00000002&((data)<<1))
#define  MIS_GPIO_ISR_GP3DA_write_data(data)                                     (0x00000001&(data))
#define  MIS_GPIO_ISR_GP3DA_get_int123(data)                                     ((0x80000000&(data))>>31)
#define  MIS_GPIO_ISR_GP3DA_get_int122(data)                                     ((0x40000000&(data))>>30)
#define  MIS_GPIO_ISR_GP3DA_get_int121(data)                                     ((0x20000000&(data))>>29)
#define  MIS_GPIO_ISR_GP3DA_get_int120(data)                                     ((0x10000000&(data))>>28)
#define  MIS_GPIO_ISR_GP3DA_get_int119(data)                                     ((0x08000000&(data))>>27)
#define  MIS_GPIO_ISR_GP3DA_get_int118(data)                                     ((0x04000000&(data))>>26)
#define  MIS_GPIO_ISR_GP3DA_get_int117(data)                                     ((0x02000000&(data))>>25)
#define  MIS_GPIO_ISR_GP3DA_get_int116(data)                                     ((0x01000000&(data))>>24)
#define  MIS_GPIO_ISR_GP3DA_get_int115(data)                                     ((0x00800000&(data))>>23)
#define  MIS_GPIO_ISR_GP3DA_get_int114(data)                                     ((0x00400000&(data))>>22)
#define  MIS_GPIO_ISR_GP3DA_get_int113(data)                                     ((0x00200000&(data))>>21)
#define  MIS_GPIO_ISR_GP3DA_get_int112(data)                                     ((0x00100000&(data))>>20)
#define  MIS_GPIO_ISR_GP3DA_get_int111(data)                                     ((0x00080000&(data))>>19)
#define  MIS_GPIO_ISR_GP3DA_get_int110(data)                                     ((0x00040000&(data))>>18)
#define  MIS_GPIO_ISR_GP3DA_get_int109(data)                                     ((0x00020000&(data))>>17)
#define  MIS_GPIO_ISR_GP3DA_get_int108(data)                                     ((0x00010000&(data))>>16)
#define  MIS_GPIO_ISR_GP3DA_get_int107(data)                                     ((0x00008000&(data))>>15)
#define  MIS_GPIO_ISR_GP3DA_get_int106(data)                                     ((0x00004000&(data))>>14)
#define  MIS_GPIO_ISR_GP3DA_get_int105(data)                                     ((0x00002000&(data))>>13)
#define  MIS_GPIO_ISR_GP3DA_get_int104(data)                                     ((0x00001000&(data))>>12)
#define  MIS_GPIO_ISR_GP3DA_get_int103(data)                                     ((0x00000800&(data))>>11)
#define  MIS_GPIO_ISR_GP3DA_get_int102(data)                                     ((0x00000400&(data))>>10)
#define  MIS_GPIO_ISR_GP3DA_get_int101(data)                                     ((0x00000200&(data))>>9)
#define  MIS_GPIO_ISR_GP3DA_get_int100(data)                                     ((0x00000100&(data))>>8)
#define  MIS_GPIO_ISR_GP3DA_get_int99(data)                                      ((0x00000080&(data))>>7)
#define  MIS_GPIO_ISR_GP3DA_get_int98(data)                                      ((0x00000040&(data))>>6)
#define  MIS_GPIO_ISR_GP3DA_get_int97(data)                                      ((0x00000020&(data))>>5)
#define  MIS_GPIO_ISR_GP3DA_get_int96(data)                                      ((0x00000010&(data))>>4)
#define  MIS_GPIO_ISR_GP3DA_get_int95(data)                                      ((0x00000008&(data))>>3)
#define  MIS_GPIO_ISR_GP3DA_get_int94(data)                                      ((0x00000004&(data))>>2)
#define  MIS_GPIO_ISR_GP3DA_get_int93(data)                                      ((0x00000002&(data))>>1)
#define  MIS_GPIO_ISR_GP3DA_get_write_data(data)                                 (0x00000001&(data))

#define  MIS_GPIO_ISR_GP4DA                                                     0x1801BDAC
#define  MIS_GPIO_ISR_GP4DA_reg_addr                                             "0xB801BDAC"
#define  MIS_GPIO_ISR_GP4DA_reg                                                  0xB801BDAC
#define  MIS_GPIO_ISR_GP4DA_inst_addr                                            "0x002A"
#define  set_MIS_GPIO_ISR_GP4DA_reg(data)                                        (*((volatile unsigned int*)MIS_GPIO_ISR_GP4DA_reg)=data)
#define  get_MIS_GPIO_ISR_GP4DA_reg                                              (*((volatile unsigned int*)MIS_GPIO_ISR_GP4DA_reg))
#define  MIS_GPIO_ISR_GP4DA_int154_shift                                         (31)
#define  MIS_GPIO_ISR_GP4DA_int153_shift                                         (30)
#define  MIS_GPIO_ISR_GP4DA_int152_shift                                         (29)
#define  MIS_GPIO_ISR_GP4DA_int151_shift                                         (28)
#define  MIS_GPIO_ISR_GP4DA_int150_shift                                         (27)
#define  MIS_GPIO_ISR_GP4DA_int149_shift                                         (26)
#define  MIS_GPIO_ISR_GP4DA_int148_shift                                         (25)
#define  MIS_GPIO_ISR_GP4DA_int147_shift                                         (24)
#define  MIS_GPIO_ISR_GP4DA_int146_shift                                         (23)
#define  MIS_GPIO_ISR_GP4DA_int145_shift                                         (22)
#define  MIS_GPIO_ISR_GP4DA_int144_shift                                         (21)
#define  MIS_GPIO_ISR_GP4DA_int143_shift                                         (20)
#define  MIS_GPIO_ISR_GP4DA_int142_shift                                         (19)
#define  MIS_GPIO_ISR_GP4DA_int141_shift                                         (18)
#define  MIS_GPIO_ISR_GP4DA_int140_shift                                         (17)
#define  MIS_GPIO_ISR_GP4DA_int139_shift                                         (16)
#define  MIS_GPIO_ISR_GP4DA_int138_shift                                         (15)
#define  MIS_GPIO_ISR_GP4DA_int137_shift                                         (14)
#define  MIS_GPIO_ISR_GP4DA_int136_shift                                         (13)
#define  MIS_GPIO_ISR_GP4DA_int135_shift                                         (12)
#define  MIS_GPIO_ISR_GP4DA_int134_shift                                         (11)
#define  MIS_GPIO_ISR_GP4DA_int133_shift                                         (10)
#define  MIS_GPIO_ISR_GP4DA_int132_shift                                         (9)
#define  MIS_GPIO_ISR_GP4DA_int131_shift                                         (8)
#define  MIS_GPIO_ISR_GP4DA_int130_shift                                         (7)
#define  MIS_GPIO_ISR_GP4DA_int129_shift                                         (6)
#define  MIS_GPIO_ISR_GP4DA_int128_shift                                         (5)
#define  MIS_GPIO_ISR_GP4DA_int127_shift                                         (4)
#define  MIS_GPIO_ISR_GP4DA_int126_shift                                         (3)
#define  MIS_GPIO_ISR_GP4DA_int125_shift                                         (2)
#define  MIS_GPIO_ISR_GP4DA_int124_shift                                         (1)
#define  MIS_GPIO_ISR_GP4DA_write_data_shift                                     (0)
#define  MIS_GPIO_ISR_GP4DA_int154_mask                                          (0x80000000)
#define  MIS_GPIO_ISR_GP4DA_int153_mask                                          (0x40000000)
#define  MIS_GPIO_ISR_GP4DA_int152_mask                                          (0x20000000)
#define  MIS_GPIO_ISR_GP4DA_int151_mask                                          (0x10000000)
#define  MIS_GPIO_ISR_GP4DA_int150_mask                                          (0x08000000)
#define  MIS_GPIO_ISR_GP4DA_int149_mask                                          (0x04000000)
#define  MIS_GPIO_ISR_GP4DA_int148_mask                                          (0x02000000)
#define  MIS_GPIO_ISR_GP4DA_int147_mask                                          (0x01000000)
#define  MIS_GPIO_ISR_GP4DA_int146_mask                                          (0x00800000)
#define  MIS_GPIO_ISR_GP4DA_int145_mask                                          (0x00400000)
#define  MIS_GPIO_ISR_GP4DA_int144_mask                                          (0x00200000)
#define  MIS_GPIO_ISR_GP4DA_int143_mask                                          (0x00100000)
#define  MIS_GPIO_ISR_GP4DA_int142_mask                                          (0x00080000)
#define  MIS_GPIO_ISR_GP4DA_int141_mask                                          (0x00040000)
#define  MIS_GPIO_ISR_GP4DA_int140_mask                                          (0x00020000)
#define  MIS_GPIO_ISR_GP4DA_int139_mask                                          (0x00010000)
#define  MIS_GPIO_ISR_GP4DA_int138_mask                                          (0x00008000)
#define  MIS_GPIO_ISR_GP4DA_int137_mask                                          (0x00004000)
#define  MIS_GPIO_ISR_GP4DA_int136_mask                                          (0x00002000)
#define  MIS_GPIO_ISR_GP4DA_int135_mask                                          (0x00001000)
#define  MIS_GPIO_ISR_GP4DA_int134_mask                                          (0x00000800)
#define  MIS_GPIO_ISR_GP4DA_int133_mask                                          (0x00000400)
#define  MIS_GPIO_ISR_GP4DA_int132_mask                                          (0x00000200)
#define  MIS_GPIO_ISR_GP4DA_int131_mask                                          (0x00000100)
#define  MIS_GPIO_ISR_GP4DA_int130_mask                                          (0x00000080)
#define  MIS_GPIO_ISR_GP4DA_int129_mask                                          (0x00000040)
#define  MIS_GPIO_ISR_GP4DA_int128_mask                                          (0x00000020)
#define  MIS_GPIO_ISR_GP4DA_int127_mask                                          (0x00000010)
#define  MIS_GPIO_ISR_GP4DA_int126_mask                                          (0x00000008)
#define  MIS_GPIO_ISR_GP4DA_int125_mask                                          (0x00000004)
#define  MIS_GPIO_ISR_GP4DA_int124_mask                                          (0x00000002)
#define  MIS_GPIO_ISR_GP4DA_write_data_mask                                      (0x00000001)
#define  MIS_GPIO_ISR_GP4DA_int154(data)                                         (0x80000000&((data)<<31))
#define  MIS_GPIO_ISR_GP4DA_int153(data)                                         (0x40000000&((data)<<30))
#define  MIS_GPIO_ISR_GP4DA_int152(data)                                         (0x20000000&((data)<<29))
#define  MIS_GPIO_ISR_GP4DA_int151(data)                                         (0x10000000&((data)<<28))
#define  MIS_GPIO_ISR_GP4DA_int150(data)                                         (0x08000000&((data)<<27))
#define  MIS_GPIO_ISR_GP4DA_int149(data)                                         (0x04000000&((data)<<26))
#define  MIS_GPIO_ISR_GP4DA_int148(data)                                         (0x02000000&((data)<<25))
#define  MIS_GPIO_ISR_GP4DA_int147(data)                                         (0x01000000&((data)<<24))
#define  MIS_GPIO_ISR_GP4DA_int146(data)                                         (0x00800000&((data)<<23))
#define  MIS_GPIO_ISR_GP4DA_int145(data)                                         (0x00400000&((data)<<22))
#define  MIS_GPIO_ISR_GP4DA_int144(data)                                         (0x00200000&((data)<<21))
#define  MIS_GPIO_ISR_GP4DA_int143(data)                                         (0x00100000&((data)<<20))
#define  MIS_GPIO_ISR_GP4DA_int142(data)                                         (0x00080000&((data)<<19))
#define  MIS_GPIO_ISR_GP4DA_int141(data)                                         (0x00040000&((data)<<18))
#define  MIS_GPIO_ISR_GP4DA_int140(data)                                         (0x00020000&((data)<<17))
#define  MIS_GPIO_ISR_GP4DA_int139(data)                                         (0x00010000&((data)<<16))
#define  MIS_GPIO_ISR_GP4DA_int138(data)                                         (0x00008000&((data)<<15))
#define  MIS_GPIO_ISR_GP4DA_int137(data)                                         (0x00004000&((data)<<14))
#define  MIS_GPIO_ISR_GP4DA_int136(data)                                         (0x00002000&((data)<<13))
#define  MIS_GPIO_ISR_GP4DA_int135(data)                                         (0x00001000&((data)<<12))
#define  MIS_GPIO_ISR_GP4DA_int134(data)                                         (0x00000800&((data)<<11))
#define  MIS_GPIO_ISR_GP4DA_int133(data)                                         (0x00000400&((data)<<10))
#define  MIS_GPIO_ISR_GP4DA_int132(data)                                         (0x00000200&((data)<<9))
#define  MIS_GPIO_ISR_GP4DA_int131(data)                                         (0x00000100&((data)<<8))
#define  MIS_GPIO_ISR_GP4DA_int130(data)                                         (0x00000080&((data)<<7))
#define  MIS_GPIO_ISR_GP4DA_int129(data)                                         (0x00000040&((data)<<6))
#define  MIS_GPIO_ISR_GP4DA_int128(data)                                         (0x00000020&((data)<<5))
#define  MIS_GPIO_ISR_GP4DA_int127(data)                                         (0x00000010&((data)<<4))
#define  MIS_GPIO_ISR_GP4DA_int126(data)                                         (0x00000008&((data)<<3))
#define  MIS_GPIO_ISR_GP4DA_int125(data)                                         (0x00000004&((data)<<2))
#define  MIS_GPIO_ISR_GP4DA_int124(data)                                         (0x00000002&((data)<<1))
#define  MIS_GPIO_ISR_GP4DA_write_data(data)                                     (0x00000001&(data))
#define  MIS_GPIO_ISR_GP4DA_get_int154(data)                                     ((0x80000000&(data))>>31)
#define  MIS_GPIO_ISR_GP4DA_get_int153(data)                                     ((0x40000000&(data))>>30)
#define  MIS_GPIO_ISR_GP4DA_get_int152(data)                                     ((0x20000000&(data))>>29)
#define  MIS_GPIO_ISR_GP4DA_get_int151(data)                                     ((0x10000000&(data))>>28)
#define  MIS_GPIO_ISR_GP4DA_get_int150(data)                                     ((0x08000000&(data))>>27)
#define  MIS_GPIO_ISR_GP4DA_get_int149(data)                                     ((0x04000000&(data))>>26)
#define  MIS_GPIO_ISR_GP4DA_get_int148(data)                                     ((0x02000000&(data))>>25)
#define  MIS_GPIO_ISR_GP4DA_get_int147(data)                                     ((0x01000000&(data))>>24)
#define  MIS_GPIO_ISR_GP4DA_get_int146(data)                                     ((0x00800000&(data))>>23)
#define  MIS_GPIO_ISR_GP4DA_get_int145(data)                                     ((0x00400000&(data))>>22)
#define  MIS_GPIO_ISR_GP4DA_get_int144(data)                                     ((0x00200000&(data))>>21)
#define  MIS_GPIO_ISR_GP4DA_get_int143(data)                                     ((0x00100000&(data))>>20)
#define  MIS_GPIO_ISR_GP4DA_get_int142(data)                                     ((0x00080000&(data))>>19)
#define  MIS_GPIO_ISR_GP4DA_get_int141(data)                                     ((0x00040000&(data))>>18)
#define  MIS_GPIO_ISR_GP4DA_get_int140(data)                                     ((0x00020000&(data))>>17)
#define  MIS_GPIO_ISR_GP4DA_get_int139(data)                                     ((0x00010000&(data))>>16)
#define  MIS_GPIO_ISR_GP4DA_get_int138(data)                                     ((0x00008000&(data))>>15)
#define  MIS_GPIO_ISR_GP4DA_get_int137(data)                                     ((0x00004000&(data))>>14)
#define  MIS_GPIO_ISR_GP4DA_get_int136(data)                                     ((0x00002000&(data))>>13)
#define  MIS_GPIO_ISR_GP4DA_get_int135(data)                                     ((0x00001000&(data))>>12)
#define  MIS_GPIO_ISR_GP4DA_get_int134(data)                                     ((0x00000800&(data))>>11)
#define  MIS_GPIO_ISR_GP4DA_get_int133(data)                                     ((0x00000400&(data))>>10)
#define  MIS_GPIO_ISR_GP4DA_get_int132(data)                                     ((0x00000200&(data))>>9)
#define  MIS_GPIO_ISR_GP4DA_get_int131(data)                                     ((0x00000100&(data))>>8)
#define  MIS_GPIO_ISR_GP4DA_get_int130(data)                                     ((0x00000080&(data))>>7)
#define  MIS_GPIO_ISR_GP4DA_get_int129(data)                                     ((0x00000040&(data))>>6)
#define  MIS_GPIO_ISR_GP4DA_get_int128(data)                                     ((0x00000020&(data))>>5)
#define  MIS_GPIO_ISR_GP4DA_get_int127(data)                                     ((0x00000010&(data))>>4)
#define  MIS_GPIO_ISR_GP4DA_get_int126(data)                                     ((0x00000008&(data))>>3)
#define  MIS_GPIO_ISR_GP4DA_get_int125(data)                                     ((0x00000004&(data))>>2)
#define  MIS_GPIO_ISR_GP4DA_get_int124(data)                                     ((0x00000002&(data))>>1)
#define  MIS_GPIO_ISR_GP4DA_get_write_data(data)                                 (0x00000001&(data))

#define  MIS_GPIO_ISR_GP5DA                                                     0x1801BDB0
#define  MIS_GPIO_ISR_GP5DA_reg_addr                                             "0xB801BDB0"
#define  MIS_GPIO_ISR_GP5DA_reg                                                  0xB801BDB0
#define  MIS_GPIO_ISR_GP5DA_inst_addr                                            "0x002B"
#define  set_MIS_GPIO_ISR_GP5DA_reg(data)                                        (*((volatile unsigned int*)MIS_GPIO_ISR_GP5DA_reg)=data)
#define  get_MIS_GPIO_ISR_GP5DA_reg                                              (*((volatile unsigned int*)MIS_GPIO_ISR_GP5DA_reg))
#define  MIS_GPIO_ISR_GP5DA_int160_shift                                         (6)
#define  MIS_GPIO_ISR_GP5DA_int159_shift                                         (5)
#define  MIS_GPIO_ISR_GP5DA_int158_shift                                         (4)
#define  MIS_GPIO_ISR_GP5DA_int157_shift                                         (3)
#define  MIS_GPIO_ISR_GP5DA_int156_shift                                         (2)
#define  MIS_GPIO_ISR_GP5DA_int155_shift                                         (1)
#define  MIS_GPIO_ISR_GP5DA_write_data_shift                                     (0)
#define  MIS_GPIO_ISR_GP5DA_int160_mask                                          (0x00000040)
#define  MIS_GPIO_ISR_GP5DA_int159_mask                                          (0x00000020)
#define  MIS_GPIO_ISR_GP5DA_int158_mask                                          (0x00000010)
#define  MIS_GPIO_ISR_GP5DA_int157_mask                                          (0x00000008)
#define  MIS_GPIO_ISR_GP5DA_int156_mask                                          (0x00000004)
#define  MIS_GPIO_ISR_GP5DA_int155_mask                                          (0x00000002)
#define  MIS_GPIO_ISR_GP5DA_write_data_mask                                      (0x00000001)
#define  MIS_GPIO_ISR_GP5DA_int160(data)                                         (0x00000040&((data)<<6))
#define  MIS_GPIO_ISR_GP5DA_int159(data)                                         (0x00000020&((data)<<5))
#define  MIS_GPIO_ISR_GP5DA_int158(data)                                         (0x00000010&((data)<<4))
#define  MIS_GPIO_ISR_GP5DA_int157(data)                                         (0x00000008&((data)<<3))
#define  MIS_GPIO_ISR_GP5DA_int156(data)                                         (0x00000004&((data)<<2))
#define  MIS_GPIO_ISR_GP5DA_int155(data)                                         (0x00000002&((data)<<1))
#define  MIS_GPIO_ISR_GP5DA_write_data(data)                                     (0x00000001&(data))
#define  MIS_GPIO_ISR_GP5DA_get_int160(data)                                     ((0x00000040&(data))>>6)
#define  MIS_GPIO_ISR_GP5DA_get_int159(data)                                     ((0x00000020&(data))>>5)
#define  MIS_GPIO_ISR_GP5DA_get_int158(data)                                     ((0x00000010&(data))>>4)
#define  MIS_GPIO_ISR_GP5DA_get_int157(data)                                     ((0x00000008&(data))>>3)
#define  MIS_GPIO_ISR_GP5DA_get_int156(data)                                     ((0x00000004&(data))>>2)
#define  MIS_GPIO_ISR_GP5DA_get_int155(data)                                     ((0x00000002&(data))>>1)
#define  MIS_GPIO_ISR_GP5DA_get_write_data(data)                                 (0x00000001&(data))

#define  MIS_GPIO_GPI0_DATI                                                     0x1801BDB4
#define  MIS_GPIO_GPI0_DATI_reg_addr                                             "0xB801BDB4"
#define  MIS_GPIO_GPI0_DATI_reg                                                  0xB801BDB4
#define  MIS_GPIO_GPI0_DATI_inst_addr                                            "0x002C"
#define  set_MIS_GPIO_GPI0_DATI_reg(data)                                        (*((volatile unsigned int*)MIS_GPIO_GPI0_DATI_reg)=data)
#define  get_MIS_GPIO_GPI0_DATI_reg                                              (*((volatile unsigned int*)MIS_GPIO_GPI0_DATI_reg))
#define  MIS_GPIO_GPI0_DATI_gpidati_shift                                        (1)
#define  MIS_GPIO_GPI0_DATI_gpidati_mask                                         (0xFFFFFFFE)
#define  MIS_GPIO_GPI0_DATI_gpidati(data)                                        (0xFFFFFFFE&((data)<<1))
#define  MIS_GPIO_GPI0_DATI_get_gpidati(data)                                    ((0xFFFFFFFE&(data))>>1)

#define  MIS_GPIO_GPI1_DATI                                                     0x1801BDB8
#define  MIS_GPIO_GPI1_DATI_reg_addr                                             "0xB801BDB8"
#define  MIS_GPIO_GPI1_DATI_reg                                                  0xB801BDB8
#define  MIS_GPIO_GPI1_DATI_inst_addr                                            "0x002D"
#define  set_MIS_GPIO_GPI1_DATI_reg(data)                                        (*((volatile unsigned int*)MIS_GPIO_GPI1_DATI_reg)=data)
#define  get_MIS_GPIO_GPI1_DATI_reg                                              (*((volatile unsigned int*)MIS_GPIO_GPI1_DATI_reg))
#define  MIS_GPIO_GPI1_DATI_gpidati_shift                                        (1)
#define  MIS_GPIO_GPI1_DATI_gpidati_mask                                         (0x00000002)
#define  MIS_GPIO_GPI1_DATI_gpidati(data)                                        (0x00000002&((data)<<1))
#define  MIS_GPIO_GPI1_DATI_get_gpidati(data)                                    ((0x00000002&(data))>>1)

#define  MIS_GPIO_GPI0_GPIE                                                     0x1801BDBC
#define  MIS_GPIO_GPI0_GPIE_reg_addr                                             "0xB801BDBC"
#define  MIS_GPIO_GPI0_GPIE_reg                                                  0xB801BDBC
#define  MIS_GPIO_GPI0_GPIE_inst_addr                                            "0x002E"
#define  set_MIS_GPIO_GPI0_GPIE_reg(data)                                        (*((volatile unsigned int*)MIS_GPIO_GPI0_GPIE_reg)=data)
#define  get_MIS_GPIO_GPI0_GPIE_reg                                              (*((volatile unsigned int*)MIS_GPIO_GPI0_GPIE_reg))
#define  MIS_GPIO_GPI0_GPIE_gp30_shift                                           (31)
#define  MIS_GPIO_GPI0_GPIE_gp29_shift                                           (30)
#define  MIS_GPIO_GPI0_GPIE_gp28_shift                                           (29)
#define  MIS_GPIO_GPI0_GPIE_gp27_shift                                           (28)
#define  MIS_GPIO_GPI0_GPIE_gp26_shift                                           (27)
#define  MIS_GPIO_GPI0_GPIE_gp25_shift                                           (26)
#define  MIS_GPIO_GPI0_GPIE_gp24_shift                                           (25)
#define  MIS_GPIO_GPI0_GPIE_gp23_shift                                           (24)
#define  MIS_GPIO_GPI0_GPIE_gp22_shift                                           (23)
#define  MIS_GPIO_GPI0_GPIE_gp21_shift                                           (22)
#define  MIS_GPIO_GPI0_GPIE_gp20_shift                                           (21)
#define  MIS_GPIO_GPI0_GPIE_gp19_shift                                           (20)
#define  MIS_GPIO_GPI0_GPIE_gp18_shift                                           (19)
#define  MIS_GPIO_GPI0_GPIE_gp17_shift                                           (18)
#define  MIS_GPIO_GPI0_GPIE_gp16_shift                                           (17)
#define  MIS_GPIO_GPI0_GPIE_gp15_shift                                           (16)
#define  MIS_GPIO_GPI0_GPIE_gp14_shift                                           (15)
#define  MIS_GPIO_GPI0_GPIE_gp13_shift                                           (14)
#define  MIS_GPIO_GPI0_GPIE_gp12_shift                                           (13)
#define  MIS_GPIO_GPI0_GPIE_gp11_shift                                           (12)
#define  MIS_GPIO_GPI0_GPIE_gp10_shift                                           (11)
#define  MIS_GPIO_GPI0_GPIE_gp9_shift                                            (10)
#define  MIS_GPIO_GPI0_GPIE_gp8_shift                                            (9)
#define  MIS_GPIO_GPI0_GPIE_gp7_shift                                            (8)
#define  MIS_GPIO_GPI0_GPIE_gp6_shift                                            (7)
#define  MIS_GPIO_GPI0_GPIE_gp5_shift                                            (6)
#define  MIS_GPIO_GPI0_GPIE_gp4_shift                                            (5)
#define  MIS_GPIO_GPI0_GPIE_gp3_shift                                            (4)
#define  MIS_GPIO_GPI0_GPIE_gp2_shift                                            (3)
#define  MIS_GPIO_GPI0_GPIE_gp1_shift                                            (2)
#define  MIS_GPIO_GPI0_GPIE_gp0_shift                                            (1)
#define  MIS_GPIO_GPI0_GPIE_write_data_shift                                     (0)
#define  MIS_GPIO_GPI0_GPIE_gp30_mask                                            (0x80000000)
#define  MIS_GPIO_GPI0_GPIE_gp29_mask                                            (0x40000000)
#define  MIS_GPIO_GPI0_GPIE_gp28_mask                                            (0x20000000)
#define  MIS_GPIO_GPI0_GPIE_gp27_mask                                            (0x10000000)
#define  MIS_GPIO_GPI0_GPIE_gp26_mask                                            (0x08000000)
#define  MIS_GPIO_GPI0_GPIE_gp25_mask                                            (0x04000000)
#define  MIS_GPIO_GPI0_GPIE_gp24_mask                                            (0x02000000)
#define  MIS_GPIO_GPI0_GPIE_gp23_mask                                            (0x01000000)
#define  MIS_GPIO_GPI0_GPIE_gp22_mask                                            (0x00800000)
#define  MIS_GPIO_GPI0_GPIE_gp21_mask                                            (0x00400000)
#define  MIS_GPIO_GPI0_GPIE_gp20_mask                                            (0x00200000)
#define  MIS_GPIO_GPI0_GPIE_gp19_mask                                            (0x00100000)
#define  MIS_GPIO_GPI0_GPIE_gp18_mask                                            (0x00080000)
#define  MIS_GPIO_GPI0_GPIE_gp17_mask                                            (0x00040000)
#define  MIS_GPIO_GPI0_GPIE_gp16_mask                                            (0x00020000)
#define  MIS_GPIO_GPI0_GPIE_gp15_mask                                            (0x00010000)
#define  MIS_GPIO_GPI0_GPIE_gp14_mask                                            (0x00008000)
#define  MIS_GPIO_GPI0_GPIE_gp13_mask                                            (0x00004000)
#define  MIS_GPIO_GPI0_GPIE_gp12_mask                                            (0x00002000)
#define  MIS_GPIO_GPI0_GPIE_gp11_mask                                            (0x00001000)
#define  MIS_GPIO_GPI0_GPIE_gp10_mask                                            (0x00000800)
#define  MIS_GPIO_GPI0_GPIE_gp9_mask                                             (0x00000400)
#define  MIS_GPIO_GPI0_GPIE_gp8_mask                                             (0x00000200)
#define  MIS_GPIO_GPI0_GPIE_gp7_mask                                             (0x00000100)
#define  MIS_GPIO_GPI0_GPIE_gp6_mask                                             (0x00000080)
#define  MIS_GPIO_GPI0_GPIE_gp5_mask                                             (0x00000040)
#define  MIS_GPIO_GPI0_GPIE_gp4_mask                                             (0x00000020)
#define  MIS_GPIO_GPI0_GPIE_gp3_mask                                             (0x00000010)
#define  MIS_GPIO_GPI0_GPIE_gp2_mask                                             (0x00000008)
#define  MIS_GPIO_GPI0_GPIE_gp1_mask                                             (0x00000004)
#define  MIS_GPIO_GPI0_GPIE_gp0_mask                                             (0x00000002)
#define  MIS_GPIO_GPI0_GPIE_write_data_mask                                      (0x00000001)
#define  MIS_GPIO_GPI0_GPIE_gp30(data)                                           (0x80000000&((data)<<31))
#define  MIS_GPIO_GPI0_GPIE_gp29(data)                                           (0x40000000&((data)<<30))
#define  MIS_GPIO_GPI0_GPIE_gp28(data)                                           (0x20000000&((data)<<29))
#define  MIS_GPIO_GPI0_GPIE_gp27(data)                                           (0x10000000&((data)<<28))
#define  MIS_GPIO_GPI0_GPIE_gp26(data)                                           (0x08000000&((data)<<27))
#define  MIS_GPIO_GPI0_GPIE_gp25(data)                                           (0x04000000&((data)<<26))
#define  MIS_GPIO_GPI0_GPIE_gp24(data)                                           (0x02000000&((data)<<25))
#define  MIS_GPIO_GPI0_GPIE_gp23(data)                                           (0x01000000&((data)<<24))
#define  MIS_GPIO_GPI0_GPIE_gp22(data)                                           (0x00800000&((data)<<23))
#define  MIS_GPIO_GPI0_GPIE_gp21(data)                                           (0x00400000&((data)<<22))
#define  MIS_GPIO_GPI0_GPIE_gp20(data)                                           (0x00200000&((data)<<21))
#define  MIS_GPIO_GPI0_GPIE_gp19(data)                                           (0x00100000&((data)<<20))
#define  MIS_GPIO_GPI0_GPIE_gp18(data)                                           (0x00080000&((data)<<19))
#define  MIS_GPIO_GPI0_GPIE_gp17(data)                                           (0x00040000&((data)<<18))
#define  MIS_GPIO_GPI0_GPIE_gp16(data)                                           (0x00020000&((data)<<17))
#define  MIS_GPIO_GPI0_GPIE_gp15(data)                                           (0x00010000&((data)<<16))
#define  MIS_GPIO_GPI0_GPIE_gp14(data)                                           (0x00008000&((data)<<15))
#define  MIS_GPIO_GPI0_GPIE_gp13(data)                                           (0x00004000&((data)<<14))
#define  MIS_GPIO_GPI0_GPIE_gp12(data)                                           (0x00002000&((data)<<13))
#define  MIS_GPIO_GPI0_GPIE_gp11(data)                                           (0x00001000&((data)<<12))
#define  MIS_GPIO_GPI0_GPIE_gp10(data)                                           (0x00000800&((data)<<11))
#define  MIS_GPIO_GPI0_GPIE_gp9(data)                                            (0x00000400&((data)<<10))
#define  MIS_GPIO_GPI0_GPIE_gp8(data)                                            (0x00000200&((data)<<9))
#define  MIS_GPIO_GPI0_GPIE_gp7(data)                                            (0x00000100&((data)<<8))
#define  MIS_GPIO_GPI0_GPIE_gp6(data)                                            (0x00000080&((data)<<7))
#define  MIS_GPIO_GPI0_GPIE_gp5(data)                                            (0x00000040&((data)<<6))
#define  MIS_GPIO_GPI0_GPIE_gp4(data)                                            (0x00000020&((data)<<5))
#define  MIS_GPIO_GPI0_GPIE_gp3(data)                                            (0x00000010&((data)<<4))
#define  MIS_GPIO_GPI0_GPIE_gp2(data)                                            (0x00000008&((data)<<3))
#define  MIS_GPIO_GPI0_GPIE_gp1(data)                                            (0x00000004&((data)<<2))
#define  MIS_GPIO_GPI0_GPIE_gp0(data)                                            (0x00000002&((data)<<1))
#define  MIS_GPIO_GPI0_GPIE_write_data(data)                                     (0x00000001&(data))
#define  MIS_GPIO_GPI0_GPIE_get_gp30(data)                                       ((0x80000000&(data))>>31)
#define  MIS_GPIO_GPI0_GPIE_get_gp29(data)                                       ((0x40000000&(data))>>30)
#define  MIS_GPIO_GPI0_GPIE_get_gp28(data)                                       ((0x20000000&(data))>>29)
#define  MIS_GPIO_GPI0_GPIE_get_gp27(data)                                       ((0x10000000&(data))>>28)
#define  MIS_GPIO_GPI0_GPIE_get_gp26(data)                                       ((0x08000000&(data))>>27)
#define  MIS_GPIO_GPI0_GPIE_get_gp25(data)                                       ((0x04000000&(data))>>26)
#define  MIS_GPIO_GPI0_GPIE_get_gp24(data)                                       ((0x02000000&(data))>>25)
#define  MIS_GPIO_GPI0_GPIE_get_gp23(data)                                       ((0x01000000&(data))>>24)
#define  MIS_GPIO_GPI0_GPIE_get_gp22(data)                                       ((0x00800000&(data))>>23)
#define  MIS_GPIO_GPI0_GPIE_get_gp21(data)                                       ((0x00400000&(data))>>22)
#define  MIS_GPIO_GPI0_GPIE_get_gp20(data)                                       ((0x00200000&(data))>>21)
#define  MIS_GPIO_GPI0_GPIE_get_gp19(data)                                       ((0x00100000&(data))>>20)
#define  MIS_GPIO_GPI0_GPIE_get_gp18(data)                                       ((0x00080000&(data))>>19)
#define  MIS_GPIO_GPI0_GPIE_get_gp17(data)                                       ((0x00040000&(data))>>18)
#define  MIS_GPIO_GPI0_GPIE_get_gp16(data)                                       ((0x00020000&(data))>>17)
#define  MIS_GPIO_GPI0_GPIE_get_gp15(data)                                       ((0x00010000&(data))>>16)
#define  MIS_GPIO_GPI0_GPIE_get_gp14(data)                                       ((0x00008000&(data))>>15)
#define  MIS_GPIO_GPI0_GPIE_get_gp13(data)                                       ((0x00004000&(data))>>14)
#define  MIS_GPIO_GPI0_GPIE_get_gp12(data)                                       ((0x00002000&(data))>>13)
#define  MIS_GPIO_GPI0_GPIE_get_gp11(data)                                       ((0x00001000&(data))>>12)
#define  MIS_GPIO_GPI0_GPIE_get_gp10(data)                                       ((0x00000800&(data))>>11)
#define  MIS_GPIO_GPI0_GPIE_get_gp9(data)                                        ((0x00000400&(data))>>10)
#define  MIS_GPIO_GPI0_GPIE_get_gp8(data)                                        ((0x00000200&(data))>>9)
#define  MIS_GPIO_GPI0_GPIE_get_gp7(data)                                        ((0x00000100&(data))>>8)
#define  MIS_GPIO_GPI0_GPIE_get_gp6(data)                                        ((0x00000080&(data))>>7)
#define  MIS_GPIO_GPI0_GPIE_get_gp5(data)                                        ((0x00000040&(data))>>6)
#define  MIS_GPIO_GPI0_GPIE_get_gp4(data)                                        ((0x00000020&(data))>>5)
#define  MIS_GPIO_GPI0_GPIE_get_gp3(data)                                        ((0x00000010&(data))>>4)
#define  MIS_GPIO_GPI0_GPIE_get_gp2(data)                                        ((0x00000008&(data))>>3)
#define  MIS_GPIO_GPI0_GPIE_get_gp1(data)                                        ((0x00000004&(data))>>2)
#define  MIS_GPIO_GPI0_GPIE_get_gp0(data)                                        ((0x00000002&(data))>>1)
#define  MIS_GPIO_GPI0_GPIE_get_write_data(data)                                 (0x00000001&(data))

#define  MIS_GPIO_GPI1_GPIE                                                     0x1801BDC0
#define  MIS_GPIO_GPI1_GPIE_reg_addr                                             "0xB801BDC0"
#define  MIS_GPIO_GPI1_GPIE_reg                                                  0xB801BDC0
#define  MIS_GPIO_GPI1_GPIE_inst_addr                                            "0x002F"
#define  set_MIS_GPIO_GPI1_GPIE_reg(data)                                        (*((volatile unsigned int*)MIS_GPIO_GPI1_GPIE_reg)=data)
#define  get_MIS_GPIO_GPI1_GPIE_reg                                              (*((volatile unsigned int*)MIS_GPIO_GPI1_GPIE_reg))
#define  MIS_GPIO_GPI1_GPIE_gp31_shift                                           (1)
#define  MIS_GPIO_GPI1_GPIE_write_data_shift                                     (0)
#define  MIS_GPIO_GPI1_GPIE_gp31_mask                                            (0x00000002)
#define  MIS_GPIO_GPI1_GPIE_write_data_mask                                      (0x00000001)
#define  MIS_GPIO_GPI1_GPIE_gp31(data)                                           (0x00000002&((data)<<1))
#define  MIS_GPIO_GPI1_GPIE_write_data(data)                                     (0x00000001&(data))
#define  MIS_GPIO_GPI1_GPIE_get_gp31(data)                                       ((0x00000002&(data))>>1)
#define  MIS_GPIO_GPI1_GPIE_get_write_data(data)                                 (0x00000001&(data))

#define  MIS_GPIO_GPI0_DP                                                       0x1801BDC4
#define  MIS_GPIO_GPI0_DP_reg_addr                                               "0xB801BDC4"
#define  MIS_GPIO_GPI0_DP_reg                                                    0xB801BDC4
#define  MIS_GPIO_GPI0_DP_inst_addr                                              "0x0030"
#define  set_MIS_GPIO_GPI0_DP_reg(data)                                          (*((volatile unsigned int*)MIS_GPIO_GPI0_DP_reg)=data)
#define  get_MIS_GPIO_GPI0_DP_reg                                                (*((volatile unsigned int*)MIS_GPIO_GPI0_DP_reg))
#define  MIS_GPIO_GPI0_DP_gpha30_shift                                           (31)
#define  MIS_GPIO_GPI0_DP_gpha29_shift                                           (30)
#define  MIS_GPIO_GPI0_DP_gpha28_shift                                           (29)
#define  MIS_GPIO_GPI0_DP_gpha27_shift                                           (28)
#define  MIS_GPIO_GPI0_DP_gpha26_shift                                           (27)
#define  MIS_GPIO_GPI0_DP_gpha25_shift                                           (26)
#define  MIS_GPIO_GPI0_DP_gpha24_shift                                           (25)
#define  MIS_GPIO_GPI0_DP_gpha23_shift                                           (24)
#define  MIS_GPIO_GPI0_DP_gpha22_shift                                           (23)
#define  MIS_GPIO_GPI0_DP_gpha21_shift                                           (22)
#define  MIS_GPIO_GPI0_DP_gpha20_shift                                           (21)
#define  MIS_GPIO_GPI0_DP_gpha19_shift                                           (20)
#define  MIS_GPIO_GPI0_DP_gpha18_shift                                           (19)
#define  MIS_GPIO_GPI0_DP_gpha17_shift                                           (18)
#define  MIS_GPIO_GPI0_DP_gpha16_shift                                           (17)
#define  MIS_GPIO_GPI0_DP_gpha15_shift                                           (16)
#define  MIS_GPIO_GPI0_DP_gpha14_shift                                           (15)
#define  MIS_GPIO_GPI0_DP_gpha13_shift                                           (14)
#define  MIS_GPIO_GPI0_DP_gpha12_shift                                           (13)
#define  MIS_GPIO_GPI0_DP_gpha11_shift                                           (12)
#define  MIS_GPIO_GPI0_DP_gpha10_shift                                           (11)
#define  MIS_GPIO_GPI0_DP_gpha9_shift                                            (10)
#define  MIS_GPIO_GPI0_DP_gpha8_shift                                            (9)
#define  MIS_GPIO_GPI0_DP_gpha7_shift                                            (8)
#define  MIS_GPIO_GPI0_DP_gpha6_shift                                            (7)
#define  MIS_GPIO_GPI0_DP_gpha5_shift                                            (6)
#define  MIS_GPIO_GPI0_DP_gpha4_shift                                            (5)
#define  MIS_GPIO_GPI0_DP_gpha3_shift                                            (4)
#define  MIS_GPIO_GPI0_DP_gpha2_shift                                            (3)
#define  MIS_GPIO_GPI0_DP_gpha1_shift                                            (2)
#define  MIS_GPIO_GPI0_DP_gpha0_shift                                            (1)
#define  MIS_GPIO_GPI0_DP_write_data_shift                                       (0)
#define  MIS_GPIO_GPI0_DP_gpha30_mask                                            (0x80000000)
#define  MIS_GPIO_GPI0_DP_gpha29_mask                                            (0x40000000)
#define  MIS_GPIO_GPI0_DP_gpha28_mask                                            (0x20000000)
#define  MIS_GPIO_GPI0_DP_gpha27_mask                                            (0x10000000)
#define  MIS_GPIO_GPI0_DP_gpha26_mask                                            (0x08000000)
#define  MIS_GPIO_GPI0_DP_gpha25_mask                                            (0x04000000)
#define  MIS_GPIO_GPI0_DP_gpha24_mask                                            (0x02000000)
#define  MIS_GPIO_GPI0_DP_gpha23_mask                                            (0x01000000)
#define  MIS_GPIO_GPI0_DP_gpha22_mask                                            (0x00800000)
#define  MIS_GPIO_GPI0_DP_gpha21_mask                                            (0x00400000)
#define  MIS_GPIO_GPI0_DP_gpha20_mask                                            (0x00200000)
#define  MIS_GPIO_GPI0_DP_gpha19_mask                                            (0x00100000)
#define  MIS_GPIO_GPI0_DP_gpha18_mask                                            (0x00080000)
#define  MIS_GPIO_GPI0_DP_gpha17_mask                                            (0x00040000)
#define  MIS_GPIO_GPI0_DP_gpha16_mask                                            (0x00020000)
#define  MIS_GPIO_GPI0_DP_gpha15_mask                                            (0x00010000)
#define  MIS_GPIO_GPI0_DP_gpha14_mask                                            (0x00008000)
#define  MIS_GPIO_GPI0_DP_gpha13_mask                                            (0x00004000)
#define  MIS_GPIO_GPI0_DP_gpha12_mask                                            (0x00002000)
#define  MIS_GPIO_GPI0_DP_gpha11_mask                                            (0x00001000)
#define  MIS_GPIO_GPI0_DP_gpha10_mask                                            (0x00000800)
#define  MIS_GPIO_GPI0_DP_gpha9_mask                                             (0x00000400)
#define  MIS_GPIO_GPI0_DP_gpha8_mask                                             (0x00000200)
#define  MIS_GPIO_GPI0_DP_gpha7_mask                                             (0x00000100)
#define  MIS_GPIO_GPI0_DP_gpha6_mask                                             (0x00000080)
#define  MIS_GPIO_GPI0_DP_gpha5_mask                                             (0x00000040)
#define  MIS_GPIO_GPI0_DP_gpha4_mask                                             (0x00000020)
#define  MIS_GPIO_GPI0_DP_gpha3_mask                                             (0x00000010)
#define  MIS_GPIO_GPI0_DP_gpha2_mask                                             (0x00000008)
#define  MIS_GPIO_GPI0_DP_gpha1_mask                                             (0x00000004)
#define  MIS_GPIO_GPI0_DP_gpha0_mask                                             (0x00000002)
#define  MIS_GPIO_GPI0_DP_write_data_mask                                        (0x00000001)
#define  MIS_GPIO_GPI0_DP_gpha30(data)                                           (0x80000000&((data)<<31))
#define  MIS_GPIO_GPI0_DP_gpha29(data)                                           (0x40000000&((data)<<30))
#define  MIS_GPIO_GPI0_DP_gpha28(data)                                           (0x20000000&((data)<<29))
#define  MIS_GPIO_GPI0_DP_gpha27(data)                                           (0x10000000&((data)<<28))
#define  MIS_GPIO_GPI0_DP_gpha26(data)                                           (0x08000000&((data)<<27))
#define  MIS_GPIO_GPI0_DP_gpha25(data)                                           (0x04000000&((data)<<26))
#define  MIS_GPIO_GPI0_DP_gpha24(data)                                           (0x02000000&((data)<<25))
#define  MIS_GPIO_GPI0_DP_gpha23(data)                                           (0x01000000&((data)<<24))
#define  MIS_GPIO_GPI0_DP_gpha22(data)                                           (0x00800000&((data)<<23))
#define  MIS_GPIO_GPI0_DP_gpha21(data)                                           (0x00400000&((data)<<22))
#define  MIS_GPIO_GPI0_DP_gpha20(data)                                           (0x00200000&((data)<<21))
#define  MIS_GPIO_GPI0_DP_gpha19(data)                                           (0x00100000&((data)<<20))
#define  MIS_GPIO_GPI0_DP_gpha18(data)                                           (0x00080000&((data)<<19))
#define  MIS_GPIO_GPI0_DP_gpha17(data)                                           (0x00040000&((data)<<18))
#define  MIS_GPIO_GPI0_DP_gpha16(data)                                           (0x00020000&((data)<<17))
#define  MIS_GPIO_GPI0_DP_gpha15(data)                                           (0x00010000&((data)<<16))
#define  MIS_GPIO_GPI0_DP_gpha14(data)                                           (0x00008000&((data)<<15))
#define  MIS_GPIO_GPI0_DP_gpha13(data)                                           (0x00004000&((data)<<14))
#define  MIS_GPIO_GPI0_DP_gpha12(data)                                           (0x00002000&((data)<<13))
#define  MIS_GPIO_GPI0_DP_gpha11(data)                                           (0x00001000&((data)<<12))
#define  MIS_GPIO_GPI0_DP_gpha10(data)                                           (0x00000800&((data)<<11))
#define  MIS_GPIO_GPI0_DP_gpha9(data)                                            (0x00000400&((data)<<10))
#define  MIS_GPIO_GPI0_DP_gpha8(data)                                            (0x00000200&((data)<<9))
#define  MIS_GPIO_GPI0_DP_gpha7(data)                                            (0x00000100&((data)<<8))
#define  MIS_GPIO_GPI0_DP_gpha6(data)                                            (0x00000080&((data)<<7))
#define  MIS_GPIO_GPI0_DP_gpha5(data)                                            (0x00000040&((data)<<6))
#define  MIS_GPIO_GPI0_DP_gpha4(data)                                            (0x00000020&((data)<<5))
#define  MIS_GPIO_GPI0_DP_gpha3(data)                                            (0x00000010&((data)<<4))
#define  MIS_GPIO_GPI0_DP_gpha2(data)                                            (0x00000008&((data)<<3))
#define  MIS_GPIO_GPI0_DP_gpha1(data)                                            (0x00000004&((data)<<2))
#define  MIS_GPIO_GPI0_DP_gpha0(data)                                            (0x00000002&((data)<<1))
#define  MIS_GPIO_GPI0_DP_write_data(data)                                       (0x00000001&(data))
#define  MIS_GPIO_GPI0_DP_get_gpha30(data)                                       ((0x80000000&(data))>>31)
#define  MIS_GPIO_GPI0_DP_get_gpha29(data)                                       ((0x40000000&(data))>>30)
#define  MIS_GPIO_GPI0_DP_get_gpha28(data)                                       ((0x20000000&(data))>>29)
#define  MIS_GPIO_GPI0_DP_get_gpha27(data)                                       ((0x10000000&(data))>>28)
#define  MIS_GPIO_GPI0_DP_get_gpha26(data)                                       ((0x08000000&(data))>>27)
#define  MIS_GPIO_GPI0_DP_get_gpha25(data)                                       ((0x04000000&(data))>>26)
#define  MIS_GPIO_GPI0_DP_get_gpha24(data)                                       ((0x02000000&(data))>>25)
#define  MIS_GPIO_GPI0_DP_get_gpha23(data)                                       ((0x01000000&(data))>>24)
#define  MIS_GPIO_GPI0_DP_get_gpha22(data)                                       ((0x00800000&(data))>>23)
#define  MIS_GPIO_GPI0_DP_get_gpha21(data)                                       ((0x00400000&(data))>>22)
#define  MIS_GPIO_GPI0_DP_get_gpha20(data)                                       ((0x00200000&(data))>>21)
#define  MIS_GPIO_GPI0_DP_get_gpha19(data)                                       ((0x00100000&(data))>>20)
#define  MIS_GPIO_GPI0_DP_get_gpha18(data)                                       ((0x00080000&(data))>>19)
#define  MIS_GPIO_GPI0_DP_get_gpha17(data)                                       ((0x00040000&(data))>>18)
#define  MIS_GPIO_GPI0_DP_get_gpha16(data)                                       ((0x00020000&(data))>>17)
#define  MIS_GPIO_GPI0_DP_get_gpha15(data)                                       ((0x00010000&(data))>>16)
#define  MIS_GPIO_GPI0_DP_get_gpha14(data)                                       ((0x00008000&(data))>>15)
#define  MIS_GPIO_GPI0_DP_get_gpha13(data)                                       ((0x00004000&(data))>>14)
#define  MIS_GPIO_GPI0_DP_get_gpha12(data)                                       ((0x00002000&(data))>>13)
#define  MIS_GPIO_GPI0_DP_get_gpha11(data)                                       ((0x00001000&(data))>>12)
#define  MIS_GPIO_GPI0_DP_get_gpha10(data)                                       ((0x00000800&(data))>>11)
#define  MIS_GPIO_GPI0_DP_get_gpha9(data)                                        ((0x00000400&(data))>>10)
#define  MIS_GPIO_GPI0_DP_get_gpha8(data)                                        ((0x00000200&(data))>>9)
#define  MIS_GPIO_GPI0_DP_get_gpha7(data)                                        ((0x00000100&(data))>>8)
#define  MIS_GPIO_GPI0_DP_get_gpha6(data)                                        ((0x00000080&(data))>>7)
#define  MIS_GPIO_GPI0_DP_get_gpha5(data)                                        ((0x00000040&(data))>>6)
#define  MIS_GPIO_GPI0_DP_get_gpha4(data)                                        ((0x00000020&(data))>>5)
#define  MIS_GPIO_GPI0_DP_get_gpha3(data)                                        ((0x00000010&(data))>>4)
#define  MIS_GPIO_GPI0_DP_get_gpha2(data)                                        ((0x00000008&(data))>>3)
#define  MIS_GPIO_GPI0_DP_get_gpha1(data)                                        ((0x00000004&(data))>>2)
#define  MIS_GPIO_GPI0_DP_get_gpha0(data)                                        ((0x00000002&(data))>>1)
#define  MIS_GPIO_GPI0_DP_get_write_data(data)                                   (0x00000001&(data))

#define  MIS_GPIO_GPI1_DP                                                       0x1801BDC8
#define  MIS_GPIO_GPI1_DP_reg_addr                                               "0xB801BDC8"
#define  MIS_GPIO_GPI1_DP_reg                                                    0xB801BDC8
#define  MIS_GPIO_GPI1_DP_inst_addr                                              "0x0031"
#define  set_MIS_GPIO_GPI1_DP_reg(data)                                          (*((volatile unsigned int*)MIS_GPIO_GPI1_DP_reg)=data)
#define  get_MIS_GPIO_GPI1_DP_reg                                                (*((volatile unsigned int*)MIS_GPIO_GPI1_DP_reg))
#define  MIS_GPIO_GPI1_DP_gpha31_shift                                           (1)
#define  MIS_GPIO_GPI1_DP_write_data_shift                                       (0)
#define  MIS_GPIO_GPI1_DP_gpha31_mask                                            (0x00000002)
#define  MIS_GPIO_GPI1_DP_write_data_mask                                        (0x00000001)
#define  MIS_GPIO_GPI1_DP_gpha31(data)                                           (0x00000002&((data)<<1))
#define  MIS_GPIO_GPI1_DP_write_data(data)                                       (0x00000001&(data))
#define  MIS_GPIO_GPI1_DP_get_gpha31(data)                                       ((0x00000002&(data))>>1)
#define  MIS_GPIO_GPI1_DP_get_write_data(data)                                   (0x00000001&(data))

#define  MIS_GPIO_GPI_DEB                                                       0x1801BDCC
#define  MIS_GPIO_GPI_DEB_reg_addr                                               "0xB801BDCC"
#define  MIS_GPIO_GPI_DEB_reg                                                    0xB801BDCC
#define  MIS_GPIO_GPI_DEB_inst_addr                                              "0x0032"
#define  set_MIS_GPIO_GPI_DEB_reg(data)                                          (*((volatile unsigned int*)MIS_GPIO_GPI_DEB_reg)=data)
#define  get_MIS_GPIO_GPI_DEB_reg                                                (*((volatile unsigned int*)MIS_GPIO_GPI_DEB_reg))
#define  MIS_GPIO_GPI_DEB_write_enable2_shift                                    (7)
#define  MIS_GPIO_GPI_DEB_clk2_shift                                             (4)
#define  MIS_GPIO_GPI_DEB_write_enable1_shift                                    (3)
#define  MIS_GPIO_GPI_DEB_clk1_shift                                             (0)
#define  MIS_GPIO_GPI_DEB_write_enable2_mask                                     (0x00000080)
#define  MIS_GPIO_GPI_DEB_clk2_mask                                              (0x00000070)
#define  MIS_GPIO_GPI_DEB_write_enable1_mask                                     (0x00000008)
#define  MIS_GPIO_GPI_DEB_clk1_mask                                              (0x00000007)
#define  MIS_GPIO_GPI_DEB_write_enable2(data)                                    (0x00000080&((data)<<7))
#define  MIS_GPIO_GPI_DEB_clk2(data)                                             (0x00000070&((data)<<4))
#define  MIS_GPIO_GPI_DEB_write_enable1(data)                                    (0x00000008&((data)<<3))
#define  MIS_GPIO_GPI_DEB_clk1(data)                                             (0x00000007&(data))
#define  MIS_GPIO_GPI_DEB_get_write_enable2(data)                                ((0x00000080&(data))>>7)
#define  MIS_GPIO_GPI_DEB_get_clk2(data)                                         ((0x00000070&(data))>>4)
#define  MIS_GPIO_GPI_DEB_get_write_enable1(data)                                ((0x00000008&(data))>>3)
#define  MIS_GPIO_GPI_DEB_get_clk1(data)                                         (0x00000007&(data))

#define  MIS_GPIO_ISR_GPI0_ASSERT                                               0x1801BDD0
#define  MIS_GPIO_ISR_GPI0_ASSERT_reg_addr                                       "0xB801BDD0"
#define  MIS_GPIO_ISR_GPI0_ASSERT_reg                                            0xB801BDD0
#define  MIS_GPIO_ISR_GPI0_ASSERT_inst_addr                                      "0x0033"
#define  set_MIS_GPIO_ISR_GPI0_ASSERT_reg(data)                                  (*((volatile unsigned int*)MIS_GPIO_ISR_GPI0_ASSERT_reg)=data)
#define  get_MIS_GPIO_ISR_GPI0_ASSERT_reg                                        (*((volatile unsigned int*)MIS_GPIO_ISR_GPI0_ASSERT_reg))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int30_a_shift                                  (31)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int29_a_shift                                  (30)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int28_a_shift                                  (29)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int27_a_shift                                  (28)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int26_a_shift                                  (27)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int25_a_shift                                  (26)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int24_a_shift                                  (25)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int23_a_shift                                  (24)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int22_a_shift                                  (23)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int21_a_shift                                  (22)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int20_a_shift                                  (21)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int19_a_shift                                  (20)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int18_a_shift                                  (19)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int17_a_shift                                  (18)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int16_a_shift                                  (17)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int15_a_shift                                  (16)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int14_a_shift                                  (15)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int13_a_shift                                  (14)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int12_a_shift                                  (13)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int11_a_shift                                  (12)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int10_a_shift                                  (11)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int9_a_shift                                   (10)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int8_a_shift                                   (9)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int7_a_shift                                   (8)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int6_a_shift                                   (7)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int5_a_shift                                   (6)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int4_a_shift                                   (5)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int3_a_shift                                   (4)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int2_a_shift                                   (3)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int1_a_shift                                   (2)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int0_a_shift                                   (1)
#define  MIS_GPIO_ISR_GPI0_ASSERT_write_data_shift                               (0)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int30_a_mask                                   (0x80000000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int29_a_mask                                   (0x40000000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int28_a_mask                                   (0x20000000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int27_a_mask                                   (0x10000000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int26_a_mask                                   (0x08000000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int25_a_mask                                   (0x04000000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int24_a_mask                                   (0x02000000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int23_a_mask                                   (0x01000000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int22_a_mask                                   (0x00800000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int21_a_mask                                   (0x00400000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int20_a_mask                                   (0x00200000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int19_a_mask                                   (0x00100000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int18_a_mask                                   (0x00080000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int17_a_mask                                   (0x00040000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int16_a_mask                                   (0x00020000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int15_a_mask                                   (0x00010000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int14_a_mask                                   (0x00008000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int13_a_mask                                   (0x00004000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int12_a_mask                                   (0x00002000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int11_a_mask                                   (0x00001000)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int10_a_mask                                   (0x00000800)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int9_a_mask                                    (0x00000400)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int8_a_mask                                    (0x00000200)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int7_a_mask                                    (0x00000100)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int6_a_mask                                    (0x00000080)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int5_a_mask                                    (0x00000040)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int4_a_mask                                    (0x00000020)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int3_a_mask                                    (0x00000010)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int2_a_mask                                    (0x00000008)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int1_a_mask                                    (0x00000004)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int0_a_mask                                    (0x00000002)
#define  MIS_GPIO_ISR_GPI0_ASSERT_write_data_mask                                (0x00000001)
#define  MIS_GPIO_ISR_GPI0_ASSERT_int30_a(data)                                  (0x80000000&((data)<<31))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int29_a(data)                                  (0x40000000&((data)<<30))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int28_a(data)                                  (0x20000000&((data)<<29))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int27_a(data)                                  (0x10000000&((data)<<28))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int26_a(data)                                  (0x08000000&((data)<<27))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int25_a(data)                                  (0x04000000&((data)<<26))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int24_a(data)                                  (0x02000000&((data)<<25))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int23_a(data)                                  (0x01000000&((data)<<24))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int22_a(data)                                  (0x00800000&((data)<<23))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int21_a(data)                                  (0x00400000&((data)<<22))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int20_a(data)                                  (0x00200000&((data)<<21))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int19_a(data)                                  (0x00100000&((data)<<20))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int18_a(data)                                  (0x00080000&((data)<<19))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int17_a(data)                                  (0x00040000&((data)<<18))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int16_a(data)                                  (0x00020000&((data)<<17))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int15_a(data)                                  (0x00010000&((data)<<16))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int14_a(data)                                  (0x00008000&((data)<<15))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int13_a(data)                                  (0x00004000&((data)<<14))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int12_a(data)                                  (0x00002000&((data)<<13))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int11_a(data)                                  (0x00001000&((data)<<12))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int10_a(data)                                  (0x00000800&((data)<<11))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int9_a(data)                                   (0x00000400&((data)<<10))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int8_a(data)                                   (0x00000200&((data)<<9))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int7_a(data)                                   (0x00000100&((data)<<8))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int6_a(data)                                   (0x00000080&((data)<<7))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int5_a(data)                                   (0x00000040&((data)<<6))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int4_a(data)                                   (0x00000020&((data)<<5))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int3_a(data)                                   (0x00000010&((data)<<4))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int2_a(data)                                   (0x00000008&((data)<<3))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int1_a(data)                                   (0x00000004&((data)<<2))
#define  MIS_GPIO_ISR_GPI0_ASSERT_int0_a(data)                                   (0x00000002&((data)<<1))
#define  MIS_GPIO_ISR_GPI0_ASSERT_write_data(data)                               (0x00000001&(data))
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int30_a(data)                              ((0x80000000&(data))>>31)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int29_a(data)                              ((0x40000000&(data))>>30)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int28_a(data)                              ((0x20000000&(data))>>29)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int27_a(data)                              ((0x10000000&(data))>>28)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int26_a(data)                              ((0x08000000&(data))>>27)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int25_a(data)                              ((0x04000000&(data))>>26)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int24_a(data)                              ((0x02000000&(data))>>25)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int23_a(data)                              ((0x01000000&(data))>>24)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int22_a(data)                              ((0x00800000&(data))>>23)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int21_a(data)                              ((0x00400000&(data))>>22)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int20_a(data)                              ((0x00200000&(data))>>21)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int19_a(data)                              ((0x00100000&(data))>>20)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int18_a(data)                              ((0x00080000&(data))>>19)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int17_a(data)                              ((0x00040000&(data))>>18)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int16_a(data)                              ((0x00020000&(data))>>17)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int15_a(data)                              ((0x00010000&(data))>>16)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int14_a(data)                              ((0x00008000&(data))>>15)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int13_a(data)                              ((0x00004000&(data))>>14)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int12_a(data)                              ((0x00002000&(data))>>13)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int11_a(data)                              ((0x00001000&(data))>>12)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int10_a(data)                              ((0x00000800&(data))>>11)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int9_a(data)                               ((0x00000400&(data))>>10)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int8_a(data)                               ((0x00000200&(data))>>9)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int7_a(data)                               ((0x00000100&(data))>>8)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int6_a(data)                               ((0x00000080&(data))>>7)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int5_a(data)                               ((0x00000040&(data))>>6)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int4_a(data)                               ((0x00000020&(data))>>5)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int3_a(data)                               ((0x00000010&(data))>>4)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int2_a(data)                               ((0x00000008&(data))>>3)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int1_a(data)                               ((0x00000004&(data))>>2)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_int0_a(data)                               ((0x00000002&(data))>>1)
#define  MIS_GPIO_ISR_GPI0_ASSERT_get_write_data(data)                           (0x00000001&(data))

#define  MIS_GPIO_ISR_GPI1_ASSERT                                               0x1801BDD4
#define  MIS_GPIO_ISR_GPI1_ASSERT_reg_addr                                       "0xB801BDD4"
#define  MIS_GPIO_ISR_GPI1_ASSERT_reg                                            0xB801BDD4
#define  MIS_GPIO_ISR_GPI1_ASSERT_inst_addr                                      "0x0034"
#define  set_MIS_GPIO_ISR_GPI1_ASSERT_reg(data)                                  (*((volatile unsigned int*)MIS_GPIO_ISR_GPI1_ASSERT_reg)=data)
#define  get_MIS_GPIO_ISR_GPI1_ASSERT_reg                                        (*((volatile unsigned int*)MIS_GPIO_ISR_GPI1_ASSERT_reg))
#define  MIS_GPIO_ISR_GPI1_ASSERT_int31_a_shift                                  (1)
#define  MIS_GPIO_ISR_GPI1_ASSERT_write_data_shift                               (0)
#define  MIS_GPIO_ISR_GPI1_ASSERT_int31_a_mask                                   (0x00000002)
#define  MIS_GPIO_ISR_GPI1_ASSERT_write_data_mask                                (0x00000001)
#define  MIS_GPIO_ISR_GPI1_ASSERT_int31_a(data)                                  (0x00000002&((data)<<1))
#define  MIS_GPIO_ISR_GPI1_ASSERT_write_data(data)                               (0x00000001&(data))
#define  MIS_GPIO_ISR_GPI1_ASSERT_get_int31_a(data)                              ((0x00000002&(data))>>1)
#define  MIS_GPIO_ISR_GPI1_ASSERT_get_write_data(data)                           (0x00000001&(data))

#define  MIS_GPIO_ISR_GPI0_DEASSERT                                             0x1801BDD8
#define  MIS_GPIO_ISR_GPI0_DEASSERT_reg_addr                                     "0xB801BDD8"
#define  MIS_GPIO_ISR_GPI0_DEASSERT_reg                                          0xB801BDD8
#define  MIS_GPIO_ISR_GPI0_DEASSERT_inst_addr                                    "0x0035"
#define  set_MIS_GPIO_ISR_GPI0_DEASSERT_reg(data)                                (*((volatile unsigned int*)MIS_GPIO_ISR_GPI0_DEASSERT_reg)=data)
#define  get_MIS_GPIO_ISR_GPI0_DEASSERT_reg                                      (*((volatile unsigned int*)MIS_GPIO_ISR_GPI0_DEASSERT_reg))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int30_da_shift                               (31)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int29_da_shift                               (30)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int28_da_shift                               (29)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int27_da_shift                               (28)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int26_da_shift                               (27)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int25_da_shift                               (26)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int24_da_shift                               (25)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int23_da_shift                               (24)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int22_da_shift                               (23)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int21_da_shift                               (22)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int20_da_shift                               (21)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int19_da_shift                               (20)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int18_da_shift                               (19)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int17_da_shift                               (18)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int16_da_shift                               (17)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int15_da_shift                               (16)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int14_da_shift                               (15)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int13_da_shift                               (14)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int12_da_shift                               (13)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int11_da_shift                               (12)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int10_da_shift                               (11)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int9_da_shift                                (10)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int8_da_shift                                (9)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int7_da_shift                                (8)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int6_da_shift                                (7)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int5_da_shift                                (6)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int4_da_shift                                (5)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int3_da_shift                                (4)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int2_da_shift                                (3)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int1_da_shift                                (2)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int0_da_shift                                (1)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_write_data_shift                             (0)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int30_da_mask                                (0x80000000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int29_da_mask                                (0x40000000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int28_da_mask                                (0x20000000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int27_da_mask                                (0x10000000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int26_da_mask                                (0x08000000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int25_da_mask                                (0x04000000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int24_da_mask                                (0x02000000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int23_da_mask                                (0x01000000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int22_da_mask                                (0x00800000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int21_da_mask                                (0x00400000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int20_da_mask                                (0x00200000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int19_da_mask                                (0x00100000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int18_da_mask                                (0x00080000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int17_da_mask                                (0x00040000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int16_da_mask                                (0x00020000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int15_da_mask                                (0x00010000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int14_da_mask                                (0x00008000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int13_da_mask                                (0x00004000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int12_da_mask                                (0x00002000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int11_da_mask                                (0x00001000)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int10_da_mask                                (0x00000800)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int9_da_mask                                 (0x00000400)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int8_da_mask                                 (0x00000200)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int7_da_mask                                 (0x00000100)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int6_da_mask                                 (0x00000080)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int5_da_mask                                 (0x00000040)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int4_da_mask                                 (0x00000020)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int3_da_mask                                 (0x00000010)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int2_da_mask                                 (0x00000008)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int1_da_mask                                 (0x00000004)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int0_da_mask                                 (0x00000002)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_write_data_mask                              (0x00000001)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int30_da(data)                               (0x80000000&((data)<<31))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int29_da(data)                               (0x40000000&((data)<<30))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int28_da(data)                               (0x20000000&((data)<<29))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int27_da(data)                               (0x10000000&((data)<<28))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int26_da(data)                               (0x08000000&((data)<<27))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int25_da(data)                               (0x04000000&((data)<<26))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int24_da(data)                               (0x02000000&((data)<<25))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int23_da(data)                               (0x01000000&((data)<<24))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int22_da(data)                               (0x00800000&((data)<<23))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int21_da(data)                               (0x00400000&((data)<<22))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int20_da(data)                               (0x00200000&((data)<<21))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int19_da(data)                               (0x00100000&((data)<<20))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int18_da(data)                               (0x00080000&((data)<<19))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int17_da(data)                               (0x00040000&((data)<<18))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int16_da(data)                               (0x00020000&((data)<<17))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int15_da(data)                               (0x00010000&((data)<<16))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int14_da(data)                               (0x00008000&((data)<<15))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int13_da(data)                               (0x00004000&((data)<<14))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int12_da(data)                               (0x00002000&((data)<<13))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int11_da(data)                               (0x00001000&((data)<<12))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int10_da(data)                               (0x00000800&((data)<<11))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int9_da(data)                                (0x00000400&((data)<<10))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int8_da(data)                                (0x00000200&((data)<<9))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int7_da(data)                                (0x00000100&((data)<<8))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int6_da(data)                                (0x00000080&((data)<<7))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int5_da(data)                                (0x00000040&((data)<<6))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int4_da(data)                                (0x00000020&((data)<<5))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int3_da(data)                                (0x00000010&((data)<<4))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int2_da(data)                                (0x00000008&((data)<<3))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int1_da(data)                                (0x00000004&((data)<<2))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_int0_da(data)                                (0x00000002&((data)<<1))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_write_data(data)                             (0x00000001&(data))
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int30_da(data)                           ((0x80000000&(data))>>31)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int29_da(data)                           ((0x40000000&(data))>>30)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int28_da(data)                           ((0x20000000&(data))>>29)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int27_da(data)                           ((0x10000000&(data))>>28)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int26_da(data)                           ((0x08000000&(data))>>27)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int25_da(data)                           ((0x04000000&(data))>>26)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int24_da(data)                           ((0x02000000&(data))>>25)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int23_da(data)                           ((0x01000000&(data))>>24)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int22_da(data)                           ((0x00800000&(data))>>23)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int21_da(data)                           ((0x00400000&(data))>>22)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int20_da(data)                           ((0x00200000&(data))>>21)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int19_da(data)                           ((0x00100000&(data))>>20)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int18_da(data)                           ((0x00080000&(data))>>19)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int17_da(data)                           ((0x00040000&(data))>>18)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int16_da(data)                           ((0x00020000&(data))>>17)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int15_da(data)                           ((0x00010000&(data))>>16)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int14_da(data)                           ((0x00008000&(data))>>15)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int13_da(data)                           ((0x00004000&(data))>>14)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int12_da(data)                           ((0x00002000&(data))>>13)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int11_da(data)                           ((0x00001000&(data))>>12)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int10_da(data)                           ((0x00000800&(data))>>11)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int9_da(data)                            ((0x00000400&(data))>>10)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int8_da(data)                            ((0x00000200&(data))>>9)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int7_da(data)                            ((0x00000100&(data))>>8)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int6_da(data)                            ((0x00000080&(data))>>7)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int5_da(data)                            ((0x00000040&(data))>>6)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int4_da(data)                            ((0x00000020&(data))>>5)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int3_da(data)                            ((0x00000010&(data))>>4)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int2_da(data)                            ((0x00000008&(data))>>3)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int1_da(data)                            ((0x00000004&(data))>>2)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_int0_da(data)                            ((0x00000002&(data))>>1)
#define  MIS_GPIO_ISR_GPI0_DEASSERT_get_write_data(data)                         (0x00000001&(data))

#define  MIS_GPIO_ISR_GPI1_DEASSERT                                             0x1801BDDC
#define  MIS_GPIO_ISR_GPI1_DEASSERT_reg_addr                                     "0xB801BDDC"
#define  MIS_GPIO_ISR_GPI1_DEASSERT_reg                                          0xB801BDDC
#define  MIS_GPIO_ISR_GPI1_DEASSERT_inst_addr                                    "0x0036"
#define  set_MIS_GPIO_ISR_GPI1_DEASSERT_reg(data)                                (*((volatile unsigned int*)MIS_GPIO_ISR_GPI1_DEASSERT_reg)=data)
#define  get_MIS_GPIO_ISR_GPI1_DEASSERT_reg                                      (*((volatile unsigned int*)MIS_GPIO_ISR_GPI1_DEASSERT_reg))
#define  MIS_GPIO_ISR_GPI1_DEASSERT_int31_da_shift                               (1)
#define  MIS_GPIO_ISR_GPI1_DEASSERT_write_data_shift                             (0)
#define  MIS_GPIO_ISR_GPI1_DEASSERT_int31_da_mask                                (0x00000002)
#define  MIS_GPIO_ISR_GPI1_DEASSERT_write_data_mask                              (0x00000001)
#define  MIS_GPIO_ISR_GPI1_DEASSERT_int31_da(data)                               (0x00000002&((data)<<1))
#define  MIS_GPIO_ISR_GPI1_DEASSERT_write_data(data)                             (0x00000001&(data))
#define  MIS_GPIO_ISR_GPI1_DEASSERT_get_int31_da(data)                           ((0x00000002&(data))>>1)
#define  MIS_GPIO_ISR_GPI1_DEASSERT_get_write_data(data)                         (0x00000001&(data))

#define  MIS_GPIO_GP_INT_SEL                                                    0x1801BDE0
#define  MIS_GPIO_GP_INT_SEL_reg_addr                                            "0xB801BDE0"
#define  MIS_GPIO_GP_INT_SEL_reg                                                 0xB801BDE0
#define  MIS_GPIO_GP_INT_SEL_inst_addr                                           "0x0037"
#define  set_MIS_GPIO_GP_INT_SEL_reg(data)                                       (*((volatile unsigned int*)MIS_GPIO_GP_INT_SEL_reg)=data)
#define  get_MIS_GPIO_GP_INT_SEL_reg                                             (*((volatile unsigned int*)MIS_GPIO_GP_INT_SEL_reg))
#define  MIS_GPIO_GP_INT_SEL_intsel_shift                                        (0)
#define  MIS_GPIO_GP_INT_SEL_intsel_mask                                         (0x00000003)
#define  MIS_GPIO_GP_INT_SEL_intsel(data)                                        (0x00000003&(data))
#define  MIS_GPIO_GP_INT_SEL_get_intsel(data)                                    (0x00000003&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======MIS_GPIO register structure define==========

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
}mis_gpio_gp0dir_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpdir61:1;
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
}mis_gpio_gp1dir_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpdir92:1;
        RBus_UInt32  gpdir91:1;
        RBus_UInt32  gpdir90:1;
        RBus_UInt32  gpdir89:1;
        RBus_UInt32  gpdir88:1;
        RBus_UInt32  gpdir87:1;
        RBus_UInt32  gpdir86:1;
        RBus_UInt32  gpdir85:1;
        RBus_UInt32  gpdir84:1;
        RBus_UInt32  gpdir83:1;
        RBus_UInt32  gpdir82:1;
        RBus_UInt32  gpdir81:1;
        RBus_UInt32  gpdir80:1;
        RBus_UInt32  gpdir79:1;
        RBus_UInt32  gpdir78:1;
        RBus_UInt32  gpdir77:1;
        RBus_UInt32  gpdir76:1;
        RBus_UInt32  gpdir75:1;
        RBus_UInt32  gpdir74:1;
        RBus_UInt32  gpdir73:1;
        RBus_UInt32  gpdir72:1;
        RBus_UInt32  gpdir71:1;
        RBus_UInt32  gpdir70:1;
        RBus_UInt32  gpdir69:1;
        RBus_UInt32  gpdir68:1;
        RBus_UInt32  gpdir67:1;
        RBus_UInt32  gpdir66:1;
        RBus_UInt32  gpdir65:1;
        RBus_UInt32  gpdir64:1;
        RBus_UInt32  gpdir63:1;
        RBus_UInt32  gpdir62:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gp2dir_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpdir123:1;
        RBus_UInt32  gpdir122:1;
        RBus_UInt32  gpdir121:1;
        RBus_UInt32  gpdir120:1;
        RBus_UInt32  gpdir119:1;
        RBus_UInt32  gpdir118:1;
        RBus_UInt32  gpdir117:1;
        RBus_UInt32  gpdir116:1;
        RBus_UInt32  gpdir115:1;
        RBus_UInt32  gpdir114:1;
        RBus_UInt32  gpdir113:1;
        RBus_UInt32  gpdir112:1;
        RBus_UInt32  gpdir111:1;
        RBus_UInt32  gpdir110:1;
        RBus_UInt32  gpdir109:1;
        RBus_UInt32  gpdir108:1;
        RBus_UInt32  gpdir107:1;
        RBus_UInt32  gpdir106:1;
        RBus_UInt32  gpdir105:1;
        RBus_UInt32  gpdir104:1;
        RBus_UInt32  gpdir103:1;
        RBus_UInt32  gpdir102:1;
        RBus_UInt32  gpdir101:1;
        RBus_UInt32  gpdir100:1;
        RBus_UInt32  gpdir99:1;
        RBus_UInt32  gpdir98:1;
        RBus_UInt32  gpdir97:1;
        RBus_UInt32  gpdir96:1;
        RBus_UInt32  gpdir95:1;
        RBus_UInt32  gpdir94:1;
        RBus_UInt32  gpdir93:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gp3dir_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpdir154:1;
        RBus_UInt32  gpdir153:1;
        RBus_UInt32  gpdir152:1;
        RBus_UInt32  gpdir151:1;
        RBus_UInt32  gpdir150:1;
        RBus_UInt32  gpdir149:1;
        RBus_UInt32  gpdir148:1;
        RBus_UInt32  gpdir147:1;
        RBus_UInt32  gpdir146:1;
        RBus_UInt32  gpdir145:1;
        RBus_UInt32  gpdir144:1;
        RBus_UInt32  gpdir143:1;
        RBus_UInt32  gpdir142:1;
        RBus_UInt32  gpdir141:1;
        RBus_UInt32  gpdir140:1;
        RBus_UInt32  gpdir139:1;
        RBus_UInt32  gpdir138:1;
        RBus_UInt32  gpdir137:1;
        RBus_UInt32  gpdir136:1;
        RBus_UInt32  gpdir135:1;
        RBus_UInt32  gpdir134:1;
        RBus_UInt32  gpdir133:1;
        RBus_UInt32  gpdir132:1;
        RBus_UInt32  gpdir131:1;
        RBus_UInt32  gpdir130:1;
        RBus_UInt32  gpdir129:1;
        RBus_UInt32  gpdir128:1;
        RBus_UInt32  gpdir127:1;
        RBus_UInt32  gpdir126:1;
        RBus_UInt32  gpdir125:1;
        RBus_UInt32  gpdir124:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gp4dir_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  gpdir160:1;
        RBus_UInt32  gpdir159:1;
        RBus_UInt32  gpdir158:1;
        RBus_UInt32  gpdir157:1;
        RBus_UInt32  gpdir156:1;
        RBus_UInt32  gpdir155:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gp5dir_RBUS;

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
}mis_gpio_gp0dato_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpdato61:1;
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
}mis_gpio_gp1dato_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpdato92:1;
        RBus_UInt32  gpdato91:1;
        RBus_UInt32  gpdato90:1;
        RBus_UInt32  gpdato89:1;
        RBus_UInt32  gpdato88:1;
        RBus_UInt32  gpdato87:1;
        RBus_UInt32  gpdato86:1;
        RBus_UInt32  gpdato85:1;
        RBus_UInt32  gpdato84:1;
        RBus_UInt32  gpdato83:1;
        RBus_UInt32  gpdato82:1;
        RBus_UInt32  gpdato81:1;
        RBus_UInt32  gpdato80:1;
        RBus_UInt32  gpdato79:1;
        RBus_UInt32  gpdato78:1;
        RBus_UInt32  gpdato77:1;
        RBus_UInt32  gpdato76:1;
        RBus_UInt32  gpdato75:1;
        RBus_UInt32  gpdato74:1;
        RBus_UInt32  gpdato73:1;
        RBus_UInt32  gpdato72:1;
        RBus_UInt32  gpdato71:1;
        RBus_UInt32  gpdato70:1;
        RBus_UInt32  gpdato69:1;
        RBus_UInt32  gpdato68:1;
        RBus_UInt32  gpdato67:1;
        RBus_UInt32  gpdato66:1;
        RBus_UInt32  gpdato65:1;
        RBus_UInt32  gpdato64:1;
        RBus_UInt32  gpdato63:1;
        RBus_UInt32  gpdato62:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gp2dato_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpdato123:1;
        RBus_UInt32  gpdato122:1;
        RBus_UInt32  gpdato121:1;
        RBus_UInt32  gpdato120:1;
        RBus_UInt32  gpdato119:1;
        RBus_UInt32  gpdato118:1;
        RBus_UInt32  gpdato117:1;
        RBus_UInt32  gpdato116:1;
        RBus_UInt32  gpdato115:1;
        RBus_UInt32  gpdato114:1;
        RBus_UInt32  gpdato113:1;
        RBus_UInt32  gpdato112:1;
        RBus_UInt32  gpdato111:1;
        RBus_UInt32  gpdato110:1;
        RBus_UInt32  gpdato109:1;
        RBus_UInt32  gpdato108:1;
        RBus_UInt32  gpdato107:1;
        RBus_UInt32  gpdato106:1;
        RBus_UInt32  gpdato105:1;
        RBus_UInt32  gpdato104:1;
        RBus_UInt32  gpdato103:1;
        RBus_UInt32  gpdato102:1;
        RBus_UInt32  gpdato101:1;
        RBus_UInt32  gpdato100:1;
        RBus_UInt32  gpdato99:1;
        RBus_UInt32  gpdato98:1;
        RBus_UInt32  gpdato97:1;
        RBus_UInt32  gpdato96:1;
        RBus_UInt32  gpdato95:1;
        RBus_UInt32  gpdato94:1;
        RBus_UInt32  gpdato93:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gp3dato_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpdato154:1;
        RBus_UInt32  gpdato153:1;
        RBus_UInt32  gpdato152:1;
        RBus_UInt32  gpdato151:1;
        RBus_UInt32  gpdato150:1;
        RBus_UInt32  gpdato149:1;
        RBus_UInt32  gpdato148:1;
        RBus_UInt32  gpdato147:1;
        RBus_UInt32  gpdato146:1;
        RBus_UInt32  gpdato145:1;
        RBus_UInt32  gpdato144:1;
        RBus_UInt32  gpdato143:1;
        RBus_UInt32  gpdato142:1;
        RBus_UInt32  gpdato141:1;
        RBus_UInt32  gpdato140:1;
        RBus_UInt32  gpdato139:1;
        RBus_UInt32  gpdato138:1;
        RBus_UInt32  gpdato137:1;
        RBus_UInt32  gpdato136:1;
        RBus_UInt32  gpdato135:1;
        RBus_UInt32  gpdato134:1;
        RBus_UInt32  gpdato133:1;
        RBus_UInt32  gpdato132:1;
        RBus_UInt32  gpdato131:1;
        RBus_UInt32  gpdato130:1;
        RBus_UInt32  gpdato129:1;
        RBus_UInt32  gpdato128:1;
        RBus_UInt32  gpdato127:1;
        RBus_UInt32  gpdato126:1;
        RBus_UInt32  gpdato125:1;
        RBus_UInt32  gpdato124:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gp4dato_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  gpdato160:1;
        RBus_UInt32  gpdato159:1;
        RBus_UInt32  gpdato158:1;
        RBus_UInt32  gpdato157:1;
        RBus_UInt32  gpdato156:1;
        RBus_UInt32  gpdato155:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gp5dato_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpdati:31;
        RBus_UInt32  res1:1;
    };
}mis_gpio_gp0dati_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpdati:31;
        RBus_UInt32  res1:1;
    };
}mis_gpio_gp1dati_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpdati:31;
        RBus_UInt32  res1:1;
    };
}mis_gpio_gp2dati_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpdati:31;
        RBus_UInt32  res1:1;
    };
}mis_gpio_gp3dati_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpdati:31;
        RBus_UInt32  res1:1;
    };
}mis_gpio_gp4dati_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  gpdati:6;
        RBus_UInt32  res2:1;
    };
}mis_gpio_gp5dati_RBUS;

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
}mis_gpio_gp0ie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gp61:1;
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
}mis_gpio_gp1ie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gp92:1;
        RBus_UInt32  gp91:1;
        RBus_UInt32  gp90:1;
        RBus_UInt32  gp89:1;
        RBus_UInt32  gp88:1;
        RBus_UInt32  gp87:1;
        RBus_UInt32  gp86:1;
        RBus_UInt32  gp85:1;
        RBus_UInt32  gp84:1;
        RBus_UInt32  gp83:1;
        RBus_UInt32  gp82:1;
        RBus_UInt32  gp81:1;
        RBus_UInt32  gp80:1;
        RBus_UInt32  gp79:1;
        RBus_UInt32  gp78:1;
        RBus_UInt32  gp77:1;
        RBus_UInt32  gp76:1;
        RBus_UInt32  gp75:1;
        RBus_UInt32  gp74:1;
        RBus_UInt32  gp73:1;
        RBus_UInt32  gp72:1;
        RBus_UInt32  gp71:1;
        RBus_UInt32  gp70:1;
        RBus_UInt32  gp69:1;
        RBus_UInt32  gp68:1;
        RBus_UInt32  gp67:1;
        RBus_UInt32  gp66:1;
        RBus_UInt32  gp65:1;
        RBus_UInt32  gp64:1;
        RBus_UInt32  gp63:1;
        RBus_UInt32  gp62:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gp2ie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gp123:1;
        RBus_UInt32  gp122:1;
        RBus_UInt32  gp121:1;
        RBus_UInt32  gp120:1;
        RBus_UInt32  gp119:1;
        RBus_UInt32  gp118:1;
        RBus_UInt32  gp117:1;
        RBus_UInt32  gp116:1;
        RBus_UInt32  gp115:1;
        RBus_UInt32  gp114:1;
        RBus_UInt32  gp113:1;
        RBus_UInt32  gp112:1;
        RBus_UInt32  gp111:1;
        RBus_UInt32  gp110:1;
        RBus_UInt32  gp109:1;
        RBus_UInt32  gp108:1;
        RBus_UInt32  gp107:1;
        RBus_UInt32  gp106:1;
        RBus_UInt32  gp105:1;
        RBus_UInt32  gp104:1;
        RBus_UInt32  gp103:1;
        RBus_UInt32  gp102:1;
        RBus_UInt32  gp101:1;
        RBus_UInt32  gp100:1;
        RBus_UInt32  gp99:1;
        RBus_UInt32  gp98:1;
        RBus_UInt32  gp97:1;
        RBus_UInt32  gp96:1;
        RBus_UInt32  gp95:1;
        RBus_UInt32  gp94:1;
        RBus_UInt32  gp93:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gp3ie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gp154:1;
        RBus_UInt32  gp153:1;
        RBus_UInt32  gp152:1;
        RBus_UInt32  gp151:1;
        RBus_UInt32  gp150:1;
        RBus_UInt32  gp149:1;
        RBus_UInt32  gp148:1;
        RBus_UInt32  gp147:1;
        RBus_UInt32  gp146:1;
        RBus_UInt32  gp145:1;
        RBus_UInt32  gp144:1;
        RBus_UInt32  gp143:1;
        RBus_UInt32  gp142:1;
        RBus_UInt32  gp141:1;
        RBus_UInt32  gp140:1;
        RBus_UInt32  gp139:1;
        RBus_UInt32  gp138:1;
        RBus_UInt32  gp137:1;
        RBus_UInt32  gp136:1;
        RBus_UInt32  gp135:1;
        RBus_UInt32  gp134:1;
        RBus_UInt32  gp133:1;
        RBus_UInt32  gp132:1;
        RBus_UInt32  gp131:1;
        RBus_UInt32  gp130:1;
        RBus_UInt32  gp129:1;
        RBus_UInt32  gp128:1;
        RBus_UInt32  gp127:1;
        RBus_UInt32  gp126:1;
        RBus_UInt32  gp125:1;
        RBus_UInt32  gp124:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gp4ie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  gp160:1;
        RBus_UInt32  gp159:1;
        RBus_UInt32  gp158:1;
        RBus_UInt32  gp157:1;
        RBus_UInt32  gp156:1;
        RBus_UInt32  gp155:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gp5ie_RBUS;

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
}mis_gpio_gp0dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpha61:1;
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
}mis_gpio_gp1dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpha92:1;
        RBus_UInt32  gpha91:1;
        RBus_UInt32  gpha90:1;
        RBus_UInt32  gpha89:1;
        RBus_UInt32  gpha88:1;
        RBus_UInt32  gpha87:1;
        RBus_UInt32  gpha86:1;
        RBus_UInt32  gpha85:1;
        RBus_UInt32  gpha84:1;
        RBus_UInt32  gpha83:1;
        RBus_UInt32  gpha82:1;
        RBus_UInt32  gpha81:1;
        RBus_UInt32  gpha80:1;
        RBus_UInt32  gpha79:1;
        RBus_UInt32  gpha78:1;
        RBus_UInt32  gpha77:1;
        RBus_UInt32  gpha76:1;
        RBus_UInt32  gpha75:1;
        RBus_UInt32  gpha74:1;
        RBus_UInt32  gpha73:1;
        RBus_UInt32  gpha72:1;
        RBus_UInt32  gpha71:1;
        RBus_UInt32  gpha70:1;
        RBus_UInt32  gpha69:1;
        RBus_UInt32  gpha68:1;
        RBus_UInt32  gpha67:1;
        RBus_UInt32  gpha66:1;
        RBus_UInt32  gpha65:1;
        RBus_UInt32  gpha64:1;
        RBus_UInt32  gpha63:1;
        RBus_UInt32  gpha62:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gp2dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpha123:1;
        RBus_UInt32  gpha122:1;
        RBus_UInt32  gpha121:1;
        RBus_UInt32  gpha120:1;
        RBus_UInt32  gpha119:1;
        RBus_UInt32  gpha118:1;
        RBus_UInt32  gpha117:1;
        RBus_UInt32  gpha116:1;
        RBus_UInt32  gpha115:1;
        RBus_UInt32  gpha114:1;
        RBus_UInt32  gpha113:1;
        RBus_UInt32  gpha112:1;
        RBus_UInt32  gpha111:1;
        RBus_UInt32  gpha110:1;
        RBus_UInt32  gpha109:1;
        RBus_UInt32  gpha108:1;
        RBus_UInt32  gpha107:1;
        RBus_UInt32  gpha106:1;
        RBus_UInt32  gpha105:1;
        RBus_UInt32  gpha104:1;
        RBus_UInt32  gpha103:1;
        RBus_UInt32  gpha102:1;
        RBus_UInt32  gpha101:1;
        RBus_UInt32  gpha100:1;
        RBus_UInt32  gpha99:1;
        RBus_UInt32  gpha98:1;
        RBus_UInt32  gpha97:1;
        RBus_UInt32  gpha96:1;
        RBus_UInt32  gpha95:1;
        RBus_UInt32  gpha94:1;
        RBus_UInt32  gpha93:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gp3dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpha154:1;
        RBus_UInt32  gpha153:1;
        RBus_UInt32  gpha152:1;
        RBus_UInt32  gpha151:1;
        RBus_UInt32  gpha150:1;
        RBus_UInt32  gpha149:1;
        RBus_UInt32  gpha148:1;
        RBus_UInt32  gpha147:1;
        RBus_UInt32  gpha146:1;
        RBus_UInt32  gpha145:1;
        RBus_UInt32  gpha144:1;
        RBus_UInt32  gpha143:1;
        RBus_UInt32  gpha142:1;
        RBus_UInt32  gpha141:1;
        RBus_UInt32  gpha140:1;
        RBus_UInt32  gpha139:1;
        RBus_UInt32  gpha138:1;
        RBus_UInt32  gpha137:1;
        RBus_UInt32  gpha136:1;
        RBus_UInt32  gpha135:1;
        RBus_UInt32  gpha134:1;
        RBus_UInt32  gpha133:1;
        RBus_UInt32  gpha132:1;
        RBus_UInt32  gpha131:1;
        RBus_UInt32  gpha130:1;
        RBus_UInt32  gpha129:1;
        RBus_UInt32  gpha128:1;
        RBus_UInt32  gpha127:1;
        RBus_UInt32  gpha126:1;
        RBus_UInt32  gpha125:1;
        RBus_UInt32  gpha124:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gp4dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  gpha160:1;
        RBus_UInt32  gpha159:1;
        RBus_UInt32  gpha158:1;
        RBus_UInt32  gpha157:1;
        RBus_UInt32  gpha156:1;
        RBus_UInt32  gpha155:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gp5dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_enable8:1;
        RBus_UInt32  clk8:3;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  clk7:3;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  clk6:3;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  clk5:3;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  clk4:3;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  clk3:3;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  clk2:3;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  clk1:3;
    };
}mis_gpio_gpdeb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  clk3:3;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  clk2:3;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  clk1:3;
    };
}mis_gpio_gpdeb_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int30:1;
        RBus_UInt32  int29:1;
        RBus_UInt32  int28:1;
        RBus_UInt32  int27:1;
        RBus_UInt32  int26:1;
        RBus_UInt32  int25:1;
        RBus_UInt32  int24:1;
        RBus_UInt32  int23:1;
        RBus_UInt32  int22:1;
        RBus_UInt32  int21:1;
        RBus_UInt32  int20:1;
        RBus_UInt32  int19:1;
        RBus_UInt32  int18:1;
        RBus_UInt32  int17:1;
        RBus_UInt32  int16:1;
        RBus_UInt32  int15:1;
        RBus_UInt32  int14:1;
        RBus_UInt32  int13:1;
        RBus_UInt32  int12:1;
        RBus_UInt32  int11:1;
        RBus_UInt32  int10:1;
        RBus_UInt32  int9:1;
        RBus_UInt32  int8:1;
        RBus_UInt32  int7:1;
        RBus_UInt32  int6:1;
        RBus_UInt32  int5:1;
        RBus_UInt32  int4:1;
        RBus_UInt32  int3:1;
        RBus_UInt32  int2:1;
        RBus_UInt32  int1:1;
        RBus_UInt32  int0:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_isr_gp0a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int61:1;
        RBus_UInt32  int60:1;
        RBus_UInt32  int59:1;
        RBus_UInt32  int58:1;
        RBus_UInt32  int57:1;
        RBus_UInt32  int56:1;
        RBus_UInt32  int55:1;
        RBus_UInt32  int54:1;
        RBus_UInt32  int53:1;
        RBus_UInt32  int52:1;
        RBus_UInt32  int51:1;
        RBus_UInt32  int50:1;
        RBus_UInt32  int49:1;
        RBus_UInt32  int48:1;
        RBus_UInt32  int47:1;
        RBus_UInt32  int46:1;
        RBus_UInt32  int45:1;
        RBus_UInt32  int44:1;
        RBus_UInt32  int43:1;
        RBus_UInt32  int42:1;
        RBus_UInt32  int41:1;
        RBus_UInt32  int40:1;
        RBus_UInt32  int39:1;
        RBus_UInt32  int38:1;
        RBus_UInt32  int37:1;
        RBus_UInt32  int36:1;
        RBus_UInt32  int35:1;
        RBus_UInt32  int34:1;
        RBus_UInt32  int33:1;
        RBus_UInt32  int32:1;
        RBus_UInt32  int31:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_isr_gp1a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int92:1;
        RBus_UInt32  int91:1;
        RBus_UInt32  int90:1;
        RBus_UInt32  int89:1;
        RBus_UInt32  int88:1;
        RBus_UInt32  int87:1;
        RBus_UInt32  int86:1;
        RBus_UInt32  int85:1;
        RBus_UInt32  int84:1;
        RBus_UInt32  int83:1;
        RBus_UInt32  int82:1;
        RBus_UInt32  int81:1;
        RBus_UInt32  int80:1;
        RBus_UInt32  int79:1;
        RBus_UInt32  int78:1;
        RBus_UInt32  int77:1;
        RBus_UInt32  int76:1;
        RBus_UInt32  int75:1;
        RBus_UInt32  int74:1;
        RBus_UInt32  int73:1;
        RBus_UInt32  int72:1;
        RBus_UInt32  int71:1;
        RBus_UInt32  int70:1;
        RBus_UInt32  int69:1;
        RBus_UInt32  int68:1;
        RBus_UInt32  int67:1;
        RBus_UInt32  int66:1;
        RBus_UInt32  int65:1;
        RBus_UInt32  int64:1;
        RBus_UInt32  int63:1;
        RBus_UInt32  int62:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_isr_gp2a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int123:1;
        RBus_UInt32  int122:1;
        RBus_UInt32  int121:1;
        RBus_UInt32  int120:1;
        RBus_UInt32  int119:1;
        RBus_UInt32  int118:1;
        RBus_UInt32  int117:1;
        RBus_UInt32  int116:1;
        RBus_UInt32  int115:1;
        RBus_UInt32  int114:1;
        RBus_UInt32  int113:1;
        RBus_UInt32  int112:1;
        RBus_UInt32  int111:1;
        RBus_UInt32  int110:1;
        RBus_UInt32  int109:1;
        RBus_UInt32  int108:1;
        RBus_UInt32  int107:1;
        RBus_UInt32  int106:1;
        RBus_UInt32  int105:1;
        RBus_UInt32  int104:1;
        RBus_UInt32  int103:1;
        RBus_UInt32  int102:1;
        RBus_UInt32  int101:1;
        RBus_UInt32  int100:1;
        RBus_UInt32  int99:1;
        RBus_UInt32  int98:1;
        RBus_UInt32  int97:1;
        RBus_UInt32  int96:1;
        RBus_UInt32  int95:1;
        RBus_UInt32  int94:1;
        RBus_UInt32  int93:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_isr_gp3a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int154:1;
        RBus_UInt32  int153:1;
        RBus_UInt32  int152:1;
        RBus_UInt32  int151:1;
        RBus_UInt32  int150:1;
        RBus_UInt32  int149:1;
        RBus_UInt32  int148:1;
        RBus_UInt32  int147:1;
        RBus_UInt32  int146:1;
        RBus_UInt32  int145:1;
        RBus_UInt32  int144:1;
        RBus_UInt32  int143:1;
        RBus_UInt32  int142:1;
        RBus_UInt32  int141:1;
        RBus_UInt32  int140:1;
        RBus_UInt32  int139:1;
        RBus_UInt32  int138:1;
        RBus_UInt32  int137:1;
        RBus_UInt32  int136:1;
        RBus_UInt32  int135:1;
        RBus_UInt32  int134:1;
        RBus_UInt32  int133:1;
        RBus_UInt32  int132:1;
        RBus_UInt32  int131:1;
        RBus_UInt32  int130:1;
        RBus_UInt32  int129:1;
        RBus_UInt32  int128:1;
        RBus_UInt32  int127:1;
        RBus_UInt32  int126:1;
        RBus_UInt32  int125:1;
        RBus_UInt32  int124:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_isr_gp4a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  int160:1;
        RBus_UInt32  int159:1;
        RBus_UInt32  int158:1;
        RBus_UInt32  int157:1;
        RBus_UInt32  int156:1;
        RBus_UInt32  int155:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_isr_gp5a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int30:1;
        RBus_UInt32  int29:1;
        RBus_UInt32  int28:1;
        RBus_UInt32  int27:1;
        RBus_UInt32  int26:1;
        RBus_UInt32  int25:1;
        RBus_UInt32  int24:1;
        RBus_UInt32  int23:1;
        RBus_UInt32  int22:1;
        RBus_UInt32  int21:1;
        RBus_UInt32  int20:1;
        RBus_UInt32  int19:1;
        RBus_UInt32  int18:1;
        RBus_UInt32  int17:1;
        RBus_UInt32  int16:1;
        RBus_UInt32  int15:1;
        RBus_UInt32  int14:1;
        RBus_UInt32  int13:1;
        RBus_UInt32  int12:1;
        RBus_UInt32  int11:1;
        RBus_UInt32  int10:1;
        RBus_UInt32  int9:1;
        RBus_UInt32  int8:1;
        RBus_UInt32  int7:1;
        RBus_UInt32  int6:1;
        RBus_UInt32  int5:1;
        RBus_UInt32  int4:1;
        RBus_UInt32  int3:1;
        RBus_UInt32  int2:1;
        RBus_UInt32  int1:1;
        RBus_UInt32  int0:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_isr_gp0da_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int61:1;
        RBus_UInt32  int60:1;
        RBus_UInt32  int59:1;
        RBus_UInt32  int58:1;
        RBus_UInt32  int57:1;
        RBus_UInt32  int56:1;
        RBus_UInt32  int55:1;
        RBus_UInt32  int54:1;
        RBus_UInt32  int53:1;
        RBus_UInt32  int52:1;
        RBus_UInt32  int51:1;
        RBus_UInt32  int50:1;
        RBus_UInt32  int49:1;
        RBus_UInt32  int48:1;
        RBus_UInt32  int47:1;
        RBus_UInt32  int46:1;
        RBus_UInt32  int45:1;
        RBus_UInt32  int44:1;
        RBus_UInt32  int43:1;
        RBus_UInt32  int42:1;
        RBus_UInt32  int41:1;
        RBus_UInt32  int40:1;
        RBus_UInt32  int39:1;
        RBus_UInt32  int38:1;
        RBus_UInt32  int37:1;
        RBus_UInt32  int36:1;
        RBus_UInt32  int35:1;
        RBus_UInt32  int34:1;
        RBus_UInt32  int33:1;
        RBus_UInt32  int32:1;
        RBus_UInt32  int31:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_isr_gp1da_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int92:1;
        RBus_UInt32  int91:1;
        RBus_UInt32  int90:1;
        RBus_UInt32  int89:1;
        RBus_UInt32  int88:1;
        RBus_UInt32  int87:1;
        RBus_UInt32  int86:1;
        RBus_UInt32  int85:1;
        RBus_UInt32  int84:1;
        RBus_UInt32  int83:1;
        RBus_UInt32  int82:1;
        RBus_UInt32  int81:1;
        RBus_UInt32  int80:1;
        RBus_UInt32  int79:1;
        RBus_UInt32  int78:1;
        RBus_UInt32  int77:1;
        RBus_UInt32  int76:1;
        RBus_UInt32  int75:1;
        RBus_UInt32  int74:1;
        RBus_UInt32  int73:1;
        RBus_UInt32  int72:1;
        RBus_UInt32  int71:1;
        RBus_UInt32  int70:1;
        RBus_UInt32  int69:1;
        RBus_UInt32  int68:1;
        RBus_UInt32  int67:1;
        RBus_UInt32  int66:1;
        RBus_UInt32  int65:1;
        RBus_UInt32  int64:1;
        RBus_UInt32  int63:1;
        RBus_UInt32  int62:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_isr_gp2da_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int123:1;
        RBus_UInt32  int122:1;
        RBus_UInt32  int121:1;
        RBus_UInt32  int120:1;
        RBus_UInt32  int119:1;
        RBus_UInt32  int118:1;
        RBus_UInt32  int117:1;
        RBus_UInt32  int116:1;
        RBus_UInt32  int115:1;
        RBus_UInt32  int114:1;
        RBus_UInt32  int113:1;
        RBus_UInt32  int112:1;
        RBus_UInt32  int111:1;
        RBus_UInt32  int110:1;
        RBus_UInt32  int109:1;
        RBus_UInt32  int108:1;
        RBus_UInt32  int107:1;
        RBus_UInt32  int106:1;
        RBus_UInt32  int105:1;
        RBus_UInt32  int104:1;
        RBus_UInt32  int103:1;
        RBus_UInt32  int102:1;
        RBus_UInt32  int101:1;
        RBus_UInt32  int100:1;
        RBus_UInt32  int99:1;
        RBus_UInt32  int98:1;
        RBus_UInt32  int97:1;
        RBus_UInt32  int96:1;
        RBus_UInt32  int95:1;
        RBus_UInt32  int94:1;
        RBus_UInt32  int93:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_isr_gp3da_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int154:1;
        RBus_UInt32  int153:1;
        RBus_UInt32  int152:1;
        RBus_UInt32  int151:1;
        RBus_UInt32  int150:1;
        RBus_UInt32  int149:1;
        RBus_UInt32  int148:1;
        RBus_UInt32  int147:1;
        RBus_UInt32  int146:1;
        RBus_UInt32  int145:1;
        RBus_UInt32  int144:1;
        RBus_UInt32  int143:1;
        RBus_UInt32  int142:1;
        RBus_UInt32  int141:1;
        RBus_UInt32  int140:1;
        RBus_UInt32  int139:1;
        RBus_UInt32  int138:1;
        RBus_UInt32  int137:1;
        RBus_UInt32  int136:1;
        RBus_UInt32  int135:1;
        RBus_UInt32  int134:1;
        RBus_UInt32  int133:1;
        RBus_UInt32  int132:1;
        RBus_UInt32  int131:1;
        RBus_UInt32  int130:1;
        RBus_UInt32  int129:1;
        RBus_UInt32  int128:1;
        RBus_UInt32  int127:1;
        RBus_UInt32  int126:1;
        RBus_UInt32  int125:1;
        RBus_UInt32  int124:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_isr_gp4da_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  int160:1;
        RBus_UInt32  int159:1;
        RBus_UInt32  int158:1;
        RBus_UInt32  int157:1;
        RBus_UInt32  int156:1;
        RBus_UInt32  int155:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_isr_gp5da_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpidati:31;
        RBus_UInt32  res1:1;
    };
}mis_gpio_gpi0_dati_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  gpidati:1;
        RBus_UInt32  res2:1;
    };
}mis_gpio_gpi1_dati_RBUS;

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
}mis_gpio_gpi0_gpie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  gp31:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gpi1_gpie_RBUS;

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
}mis_gpio_gpi0_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  gpha31:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_gpi1_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  clk2:3;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  clk1:3;
    };
}mis_gpio_gpi_deb_RBUS;

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
}mis_gpio_isr_gpi0_assert_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  int31_a:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_isr_gpi1_assert_RBUS;

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
}mis_gpio_isr_gpi0_deassert_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  int31_da:1;
        RBus_UInt32  write_data:1;
    };
}mis_gpio_isr_gpi1_deassert_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  intsel:2;
    };
}mis_gpio_gp_int_sel_RBUS;

#else //apply LITTLE_ENDIAN

//======MIS_GPIO register structure define==========

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
}mis_gpio_gp0dir_RBUS;

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
        RBus_UInt32  gpdir61:1;
    };
}mis_gpio_gp1dir_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpdir62:1;
        RBus_UInt32  gpdir63:1;
        RBus_UInt32  gpdir64:1;
        RBus_UInt32  gpdir65:1;
        RBus_UInt32  gpdir66:1;
        RBus_UInt32  gpdir67:1;
        RBus_UInt32  gpdir68:1;
        RBus_UInt32  gpdir69:1;
        RBus_UInt32  gpdir70:1;
        RBus_UInt32  gpdir71:1;
        RBus_UInt32  gpdir72:1;
        RBus_UInt32  gpdir73:1;
        RBus_UInt32  gpdir74:1;
        RBus_UInt32  gpdir75:1;
        RBus_UInt32  gpdir76:1;
        RBus_UInt32  gpdir77:1;
        RBus_UInt32  gpdir78:1;
        RBus_UInt32  gpdir79:1;
        RBus_UInt32  gpdir80:1;
        RBus_UInt32  gpdir81:1;
        RBus_UInt32  gpdir82:1;
        RBus_UInt32  gpdir83:1;
        RBus_UInt32  gpdir84:1;
        RBus_UInt32  gpdir85:1;
        RBus_UInt32  gpdir86:1;
        RBus_UInt32  gpdir87:1;
        RBus_UInt32  gpdir88:1;
        RBus_UInt32  gpdir89:1;
        RBus_UInt32  gpdir90:1;
        RBus_UInt32  gpdir91:1;
        RBus_UInt32  gpdir92:1;
    };
}mis_gpio_gp2dir_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpdir93:1;
        RBus_UInt32  gpdir94:1;
        RBus_UInt32  gpdir95:1;
        RBus_UInt32  gpdir96:1;
        RBus_UInt32  gpdir97:1;
        RBus_UInt32  gpdir98:1;
        RBus_UInt32  gpdir99:1;
        RBus_UInt32  gpdir100:1;
        RBus_UInt32  gpdir101:1;
        RBus_UInt32  gpdir102:1;
        RBus_UInt32  gpdir103:1;
        RBus_UInt32  gpdir104:1;
        RBus_UInt32  gpdir105:1;
        RBus_UInt32  gpdir106:1;
        RBus_UInt32  gpdir107:1;
        RBus_UInt32  gpdir108:1;
        RBus_UInt32  gpdir109:1;
        RBus_UInt32  gpdir110:1;
        RBus_UInt32  gpdir111:1;
        RBus_UInt32  gpdir112:1;
        RBus_UInt32  gpdir113:1;
        RBus_UInt32  gpdir114:1;
        RBus_UInt32  gpdir115:1;
        RBus_UInt32  gpdir116:1;
        RBus_UInt32  gpdir117:1;
        RBus_UInt32  gpdir118:1;
        RBus_UInt32  gpdir119:1;
        RBus_UInt32  gpdir120:1;
        RBus_UInt32  gpdir121:1;
        RBus_UInt32  gpdir122:1;
        RBus_UInt32  gpdir123:1;
    };
}mis_gpio_gp3dir_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpdir124:1;
        RBus_UInt32  gpdir125:1;
        RBus_UInt32  gpdir126:1;
        RBus_UInt32  gpdir127:1;
        RBus_UInt32  gpdir128:1;
        RBus_UInt32  gpdir129:1;
        RBus_UInt32  gpdir130:1;
        RBus_UInt32  gpdir131:1;
        RBus_UInt32  gpdir132:1;
        RBus_UInt32  gpdir133:1;
        RBus_UInt32  gpdir134:1;
        RBus_UInt32  gpdir135:1;
        RBus_UInt32  gpdir136:1;
        RBus_UInt32  gpdir137:1;
        RBus_UInt32  gpdir138:1;
        RBus_UInt32  gpdir139:1;
        RBus_UInt32  gpdir140:1;
        RBus_UInt32  gpdir141:1;
        RBus_UInt32  gpdir142:1;
        RBus_UInt32  gpdir143:1;
        RBus_UInt32  gpdir144:1;
        RBus_UInt32  gpdir145:1;
        RBus_UInt32  gpdir146:1;
        RBus_UInt32  gpdir147:1;
        RBus_UInt32  gpdir148:1;
        RBus_UInt32  gpdir149:1;
        RBus_UInt32  gpdir150:1;
        RBus_UInt32  gpdir151:1;
        RBus_UInt32  gpdir152:1;
        RBus_UInt32  gpdir153:1;
        RBus_UInt32  gpdir154:1;
    };
}mis_gpio_gp4dir_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpdir155:1;
        RBus_UInt32  gpdir156:1;
        RBus_UInt32  gpdir157:1;
        RBus_UInt32  gpdir158:1;
        RBus_UInt32  gpdir159:1;
        RBus_UInt32  gpdir160:1;
        RBus_UInt32  res1:25;
    };
}mis_gpio_gp5dir_RBUS;

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
}mis_gpio_gp0dato_RBUS;

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
        RBus_UInt32  gpdato61:1;
    };
}mis_gpio_gp1dato_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpdato62:1;
        RBus_UInt32  gpdato63:1;
        RBus_UInt32  gpdato64:1;
        RBus_UInt32  gpdato65:1;
        RBus_UInt32  gpdato66:1;
        RBus_UInt32  gpdato67:1;
        RBus_UInt32  gpdato68:1;
        RBus_UInt32  gpdato69:1;
        RBus_UInt32  gpdato70:1;
        RBus_UInt32  gpdato71:1;
        RBus_UInt32  gpdato72:1;
        RBus_UInt32  gpdato73:1;
        RBus_UInt32  gpdato74:1;
        RBus_UInt32  gpdato75:1;
        RBus_UInt32  gpdato76:1;
        RBus_UInt32  gpdato77:1;
        RBus_UInt32  gpdato78:1;
        RBus_UInt32  gpdato79:1;
        RBus_UInt32  gpdato80:1;
        RBus_UInt32  gpdato81:1;
        RBus_UInt32  gpdato82:1;
        RBus_UInt32  gpdato83:1;
        RBus_UInt32  gpdato84:1;
        RBus_UInt32  gpdato85:1;
        RBus_UInt32  gpdato86:1;
        RBus_UInt32  gpdato87:1;
        RBus_UInt32  gpdato88:1;
        RBus_UInt32  gpdato89:1;
        RBus_UInt32  gpdato90:1;
        RBus_UInt32  gpdato91:1;
        RBus_UInt32  gpdato92:1;
    };
}mis_gpio_gp2dato_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpdato93:1;
        RBus_UInt32  gpdato94:1;
        RBus_UInt32  gpdato95:1;
        RBus_UInt32  gpdato96:1;
        RBus_UInt32  gpdato97:1;
        RBus_UInt32  gpdato98:1;
        RBus_UInt32  gpdato99:1;
        RBus_UInt32  gpdato100:1;
        RBus_UInt32  gpdato101:1;
        RBus_UInt32  gpdato102:1;
        RBus_UInt32  gpdato103:1;
        RBus_UInt32  gpdato104:1;
        RBus_UInt32  gpdato105:1;
        RBus_UInt32  gpdato106:1;
        RBus_UInt32  gpdato107:1;
        RBus_UInt32  gpdato108:1;
        RBus_UInt32  gpdato109:1;
        RBus_UInt32  gpdato110:1;
        RBus_UInt32  gpdato111:1;
        RBus_UInt32  gpdato112:1;
        RBus_UInt32  gpdato113:1;
        RBus_UInt32  gpdato114:1;
        RBus_UInt32  gpdato115:1;
        RBus_UInt32  gpdato116:1;
        RBus_UInt32  gpdato117:1;
        RBus_UInt32  gpdato118:1;
        RBus_UInt32  gpdato119:1;
        RBus_UInt32  gpdato120:1;
        RBus_UInt32  gpdato121:1;
        RBus_UInt32  gpdato122:1;
        RBus_UInt32  gpdato123:1;
    };
}mis_gpio_gp3dato_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpdato124:1;
        RBus_UInt32  gpdato125:1;
        RBus_UInt32  gpdato126:1;
        RBus_UInt32  gpdato127:1;
        RBus_UInt32  gpdato128:1;
        RBus_UInt32  gpdato129:1;
        RBus_UInt32  gpdato130:1;
        RBus_UInt32  gpdato131:1;
        RBus_UInt32  gpdato132:1;
        RBus_UInt32  gpdato133:1;
        RBus_UInt32  gpdato134:1;
        RBus_UInt32  gpdato135:1;
        RBus_UInt32  gpdato136:1;
        RBus_UInt32  gpdato137:1;
        RBus_UInt32  gpdato138:1;
        RBus_UInt32  gpdato139:1;
        RBus_UInt32  gpdato140:1;
        RBus_UInt32  gpdato141:1;
        RBus_UInt32  gpdato142:1;
        RBus_UInt32  gpdato143:1;
        RBus_UInt32  gpdato144:1;
        RBus_UInt32  gpdato145:1;
        RBus_UInt32  gpdato146:1;
        RBus_UInt32  gpdato147:1;
        RBus_UInt32  gpdato148:1;
        RBus_UInt32  gpdato149:1;
        RBus_UInt32  gpdato150:1;
        RBus_UInt32  gpdato151:1;
        RBus_UInt32  gpdato152:1;
        RBus_UInt32  gpdato153:1;
        RBus_UInt32  gpdato154:1;
    };
}mis_gpio_gp4dato_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpdato155:1;
        RBus_UInt32  gpdato156:1;
        RBus_UInt32  gpdato157:1;
        RBus_UInt32  gpdato158:1;
        RBus_UInt32  gpdato159:1;
        RBus_UInt32  gpdato160:1;
        RBus_UInt32  res1:25;
    };
}mis_gpio_gp5dato_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  gpdati:31;
    };
}mis_gpio_gp0dati_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  gpdati:31;
    };
}mis_gpio_gp1dati_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  gpdati:31;
    };
}mis_gpio_gp2dati_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  gpdati:31;
    };
}mis_gpio_gp3dati_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  gpdati:31;
    };
}mis_gpio_gp4dati_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  gpdati:6;
        RBus_UInt32  res2:25;
    };
}mis_gpio_gp5dati_RBUS;

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
}mis_gpio_gp0ie_RBUS;

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
        RBus_UInt32  gp61:1;
    };
}mis_gpio_gp1ie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gp62:1;
        RBus_UInt32  gp63:1;
        RBus_UInt32  gp64:1;
        RBus_UInt32  gp65:1;
        RBus_UInt32  gp66:1;
        RBus_UInt32  gp67:1;
        RBus_UInt32  gp68:1;
        RBus_UInt32  gp69:1;
        RBus_UInt32  gp70:1;
        RBus_UInt32  gp71:1;
        RBus_UInt32  gp72:1;
        RBus_UInt32  gp73:1;
        RBus_UInt32  gp74:1;
        RBus_UInt32  gp75:1;
        RBus_UInt32  gp76:1;
        RBus_UInt32  gp77:1;
        RBus_UInt32  gp78:1;
        RBus_UInt32  gp79:1;
        RBus_UInt32  gp80:1;
        RBus_UInt32  gp81:1;
        RBus_UInt32  gp82:1;
        RBus_UInt32  gp83:1;
        RBus_UInt32  gp84:1;
        RBus_UInt32  gp85:1;
        RBus_UInt32  gp86:1;
        RBus_UInt32  gp87:1;
        RBus_UInt32  gp88:1;
        RBus_UInt32  gp89:1;
        RBus_UInt32  gp90:1;
        RBus_UInt32  gp91:1;
        RBus_UInt32  gp92:1;
    };
}mis_gpio_gp2ie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gp93:1;
        RBus_UInt32  gp94:1;
        RBus_UInt32  gp95:1;
        RBus_UInt32  gp96:1;
        RBus_UInt32  gp97:1;
        RBus_UInt32  gp98:1;
        RBus_UInt32  gp99:1;
        RBus_UInt32  gp100:1;
        RBus_UInt32  gp101:1;
        RBus_UInt32  gp102:1;
        RBus_UInt32  gp103:1;
        RBus_UInt32  gp104:1;
        RBus_UInt32  gp105:1;
        RBus_UInt32  gp106:1;
        RBus_UInt32  gp107:1;
        RBus_UInt32  gp108:1;
        RBus_UInt32  gp109:1;
        RBus_UInt32  gp110:1;
        RBus_UInt32  gp111:1;
        RBus_UInt32  gp112:1;
        RBus_UInt32  gp113:1;
        RBus_UInt32  gp114:1;
        RBus_UInt32  gp115:1;
        RBus_UInt32  gp116:1;
        RBus_UInt32  gp117:1;
        RBus_UInt32  gp118:1;
        RBus_UInt32  gp119:1;
        RBus_UInt32  gp120:1;
        RBus_UInt32  gp121:1;
        RBus_UInt32  gp122:1;
        RBus_UInt32  gp123:1;
    };
}mis_gpio_gp3ie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gp124:1;
        RBus_UInt32  gp125:1;
        RBus_UInt32  gp126:1;
        RBus_UInt32  gp127:1;
        RBus_UInt32  gp128:1;
        RBus_UInt32  gp129:1;
        RBus_UInt32  gp130:1;
        RBus_UInt32  gp131:1;
        RBus_UInt32  gp132:1;
        RBus_UInt32  gp133:1;
        RBus_UInt32  gp134:1;
        RBus_UInt32  gp135:1;
        RBus_UInt32  gp136:1;
        RBus_UInt32  gp137:1;
        RBus_UInt32  gp138:1;
        RBus_UInt32  gp139:1;
        RBus_UInt32  gp140:1;
        RBus_UInt32  gp141:1;
        RBus_UInt32  gp142:1;
        RBus_UInt32  gp143:1;
        RBus_UInt32  gp144:1;
        RBus_UInt32  gp145:1;
        RBus_UInt32  gp146:1;
        RBus_UInt32  gp147:1;
        RBus_UInt32  gp148:1;
        RBus_UInt32  gp149:1;
        RBus_UInt32  gp150:1;
        RBus_UInt32  gp151:1;
        RBus_UInt32  gp152:1;
        RBus_UInt32  gp153:1;
        RBus_UInt32  gp154:1;
    };
}mis_gpio_gp4ie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gp155:1;
        RBus_UInt32  gp156:1;
        RBus_UInt32  gp157:1;
        RBus_UInt32  gp158:1;
        RBus_UInt32  gp159:1;
        RBus_UInt32  gp160:1;
        RBus_UInt32  res1:25;
    };
}mis_gpio_gp5ie_RBUS;

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
}mis_gpio_gp0dp_RBUS;

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
        RBus_UInt32  gpha61:1;
    };
}mis_gpio_gp1dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpha62:1;
        RBus_UInt32  gpha63:1;
        RBus_UInt32  gpha64:1;
        RBus_UInt32  gpha65:1;
        RBus_UInt32  gpha66:1;
        RBus_UInt32  gpha67:1;
        RBus_UInt32  gpha68:1;
        RBus_UInt32  gpha69:1;
        RBus_UInt32  gpha70:1;
        RBus_UInt32  gpha71:1;
        RBus_UInt32  gpha72:1;
        RBus_UInt32  gpha73:1;
        RBus_UInt32  gpha74:1;
        RBus_UInt32  gpha75:1;
        RBus_UInt32  gpha76:1;
        RBus_UInt32  gpha77:1;
        RBus_UInt32  gpha78:1;
        RBus_UInt32  gpha79:1;
        RBus_UInt32  gpha80:1;
        RBus_UInt32  gpha81:1;
        RBus_UInt32  gpha82:1;
        RBus_UInt32  gpha83:1;
        RBus_UInt32  gpha84:1;
        RBus_UInt32  gpha85:1;
        RBus_UInt32  gpha86:1;
        RBus_UInt32  gpha87:1;
        RBus_UInt32  gpha88:1;
        RBus_UInt32  gpha89:1;
        RBus_UInt32  gpha90:1;
        RBus_UInt32  gpha91:1;
        RBus_UInt32  gpha92:1;
    };
}mis_gpio_gp2dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpha93:1;
        RBus_UInt32  gpha94:1;
        RBus_UInt32  gpha95:1;
        RBus_UInt32  gpha96:1;
        RBus_UInt32  gpha97:1;
        RBus_UInt32  gpha98:1;
        RBus_UInt32  gpha99:1;
        RBus_UInt32  gpha100:1;
        RBus_UInt32  gpha101:1;
        RBus_UInt32  gpha102:1;
        RBus_UInt32  gpha103:1;
        RBus_UInt32  gpha104:1;
        RBus_UInt32  gpha105:1;
        RBus_UInt32  gpha106:1;
        RBus_UInt32  gpha107:1;
        RBus_UInt32  gpha108:1;
        RBus_UInt32  gpha109:1;
        RBus_UInt32  gpha110:1;
        RBus_UInt32  gpha111:1;
        RBus_UInt32  gpha112:1;
        RBus_UInt32  gpha113:1;
        RBus_UInt32  gpha114:1;
        RBus_UInt32  gpha115:1;
        RBus_UInt32  gpha116:1;
        RBus_UInt32  gpha117:1;
        RBus_UInt32  gpha118:1;
        RBus_UInt32  gpha119:1;
        RBus_UInt32  gpha120:1;
        RBus_UInt32  gpha121:1;
        RBus_UInt32  gpha122:1;
        RBus_UInt32  gpha123:1;
    };
}mis_gpio_gp3dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpha124:1;
        RBus_UInt32  gpha125:1;
        RBus_UInt32  gpha126:1;
        RBus_UInt32  gpha127:1;
        RBus_UInt32  gpha128:1;
        RBus_UInt32  gpha129:1;
        RBus_UInt32  gpha130:1;
        RBus_UInt32  gpha131:1;
        RBus_UInt32  gpha132:1;
        RBus_UInt32  gpha133:1;
        RBus_UInt32  gpha134:1;
        RBus_UInt32  gpha135:1;
        RBus_UInt32  gpha136:1;
        RBus_UInt32  gpha137:1;
        RBus_UInt32  gpha138:1;
        RBus_UInt32  gpha139:1;
        RBus_UInt32  gpha140:1;
        RBus_UInt32  gpha141:1;
        RBus_UInt32  gpha142:1;
        RBus_UInt32  gpha143:1;
        RBus_UInt32  gpha144:1;
        RBus_UInt32  gpha145:1;
        RBus_UInt32  gpha146:1;
        RBus_UInt32  gpha147:1;
        RBus_UInt32  gpha148:1;
        RBus_UInt32  gpha149:1;
        RBus_UInt32  gpha150:1;
        RBus_UInt32  gpha151:1;
        RBus_UInt32  gpha152:1;
        RBus_UInt32  gpha153:1;
        RBus_UInt32  gpha154:1;
    };
}mis_gpio_gp4dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpha155:1;
        RBus_UInt32  gpha156:1;
        RBus_UInt32  gpha157:1;
        RBus_UInt32  gpha158:1;
        RBus_UInt32  gpha159:1;
        RBus_UInt32  gpha160:1;
        RBus_UInt32  res1:25;
    };
}mis_gpio_gp5dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk1:3;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  clk2:3;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  clk3:3;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  clk4:3;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  clk5:3;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  clk6:3;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  clk7:3;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  clk8:3;
        RBus_UInt32  write_enable8:1;
    };
}mis_gpio_gpdeb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk1:3;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  clk2:3;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  clk3:3;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  res1:20;
    };
}mis_gpio_gpdeb_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int0:1;
        RBus_UInt32  int1:1;
        RBus_UInt32  int2:1;
        RBus_UInt32  int3:1;
        RBus_UInt32  int4:1;
        RBus_UInt32  int5:1;
        RBus_UInt32  int6:1;
        RBus_UInt32  int7:1;
        RBus_UInt32  int8:1;
        RBus_UInt32  int9:1;
        RBus_UInt32  int10:1;
        RBus_UInt32  int11:1;
        RBus_UInt32  int12:1;
        RBus_UInt32  int13:1;
        RBus_UInt32  int14:1;
        RBus_UInt32  int15:1;
        RBus_UInt32  int16:1;
        RBus_UInt32  int17:1;
        RBus_UInt32  int18:1;
        RBus_UInt32  int19:1;
        RBus_UInt32  int20:1;
        RBus_UInt32  int21:1;
        RBus_UInt32  int22:1;
        RBus_UInt32  int23:1;
        RBus_UInt32  int24:1;
        RBus_UInt32  int25:1;
        RBus_UInt32  int26:1;
        RBus_UInt32  int27:1;
        RBus_UInt32  int28:1;
        RBus_UInt32  int29:1;
        RBus_UInt32  int30:1;
    };
}mis_gpio_isr_gp0a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int31:1;
        RBus_UInt32  int32:1;
        RBus_UInt32  int33:1;
        RBus_UInt32  int34:1;
        RBus_UInt32  int35:1;
        RBus_UInt32  int36:1;
        RBus_UInt32  int37:1;
        RBus_UInt32  int38:1;
        RBus_UInt32  int39:1;
        RBus_UInt32  int40:1;
        RBus_UInt32  int41:1;
        RBus_UInt32  int42:1;
        RBus_UInt32  int43:1;
        RBus_UInt32  int44:1;
        RBus_UInt32  int45:1;
        RBus_UInt32  int46:1;
        RBus_UInt32  int47:1;
        RBus_UInt32  int48:1;
        RBus_UInt32  int49:1;
        RBus_UInt32  int50:1;
        RBus_UInt32  int51:1;
        RBus_UInt32  int52:1;
        RBus_UInt32  int53:1;
        RBus_UInt32  int54:1;
        RBus_UInt32  int55:1;
        RBus_UInt32  int56:1;
        RBus_UInt32  int57:1;
        RBus_UInt32  int58:1;
        RBus_UInt32  int59:1;
        RBus_UInt32  int60:1;
        RBus_UInt32  int61:1;
    };
}mis_gpio_isr_gp1a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int62:1;
        RBus_UInt32  int63:1;
        RBus_UInt32  int64:1;
        RBus_UInt32  int65:1;
        RBus_UInt32  int66:1;
        RBus_UInt32  int67:1;
        RBus_UInt32  int68:1;
        RBus_UInt32  int69:1;
        RBus_UInt32  int70:1;
        RBus_UInt32  int71:1;
        RBus_UInt32  int72:1;
        RBus_UInt32  int73:1;
        RBus_UInt32  int74:1;
        RBus_UInt32  int75:1;
        RBus_UInt32  int76:1;
        RBus_UInt32  int77:1;
        RBus_UInt32  int78:1;
        RBus_UInt32  int79:1;
        RBus_UInt32  int80:1;
        RBus_UInt32  int81:1;
        RBus_UInt32  int82:1;
        RBus_UInt32  int83:1;
        RBus_UInt32  int84:1;
        RBus_UInt32  int85:1;
        RBus_UInt32  int86:1;
        RBus_UInt32  int87:1;
        RBus_UInt32  int88:1;
        RBus_UInt32  int89:1;
        RBus_UInt32  int90:1;
        RBus_UInt32  int91:1;
        RBus_UInt32  int92:1;
    };
}mis_gpio_isr_gp2a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int93:1;
        RBus_UInt32  int94:1;
        RBus_UInt32  int95:1;
        RBus_UInt32  int96:1;
        RBus_UInt32  int97:1;
        RBus_UInt32  int98:1;
        RBus_UInt32  int99:1;
        RBus_UInt32  int100:1;
        RBus_UInt32  int101:1;
        RBus_UInt32  int102:1;
        RBus_UInt32  int103:1;
        RBus_UInt32  int104:1;
        RBus_UInt32  int105:1;
        RBus_UInt32  int106:1;
        RBus_UInt32  int107:1;
        RBus_UInt32  int108:1;
        RBus_UInt32  int109:1;
        RBus_UInt32  int110:1;
        RBus_UInt32  int111:1;
        RBus_UInt32  int112:1;
        RBus_UInt32  int113:1;
        RBus_UInt32  int114:1;
        RBus_UInt32  int115:1;
        RBus_UInt32  int116:1;
        RBus_UInt32  int117:1;
        RBus_UInt32  int118:1;
        RBus_UInt32  int119:1;
        RBus_UInt32  int120:1;
        RBus_UInt32  int121:1;
        RBus_UInt32  int122:1;
        RBus_UInt32  int123:1;
    };
}mis_gpio_isr_gp3a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int124:1;
        RBus_UInt32  int125:1;
        RBus_UInt32  int126:1;
        RBus_UInt32  int127:1;
        RBus_UInt32  int128:1;
        RBus_UInt32  int129:1;
        RBus_UInt32  int130:1;
        RBus_UInt32  int131:1;
        RBus_UInt32  int132:1;
        RBus_UInt32  int133:1;
        RBus_UInt32  int134:1;
        RBus_UInt32  int135:1;
        RBus_UInt32  int136:1;
        RBus_UInt32  int137:1;
        RBus_UInt32  int138:1;
        RBus_UInt32  int139:1;
        RBus_UInt32  int140:1;
        RBus_UInt32  int141:1;
        RBus_UInt32  int142:1;
        RBus_UInt32  int143:1;
        RBus_UInt32  int144:1;
        RBus_UInt32  int145:1;
        RBus_UInt32  int146:1;
        RBus_UInt32  int147:1;
        RBus_UInt32  int148:1;
        RBus_UInt32  int149:1;
        RBus_UInt32  int150:1;
        RBus_UInt32  int151:1;
        RBus_UInt32  int152:1;
        RBus_UInt32  int153:1;
        RBus_UInt32  int154:1;
    };
}mis_gpio_isr_gp4a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int155:1;
        RBus_UInt32  int156:1;
        RBus_UInt32  int157:1;
        RBus_UInt32  int158:1;
        RBus_UInt32  int159:1;
        RBus_UInt32  int160:1;
        RBus_UInt32  res1:25;
    };
}mis_gpio_isr_gp5a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int0:1;
        RBus_UInt32  int1:1;
        RBus_UInt32  int2:1;
        RBus_UInt32  int3:1;
        RBus_UInt32  int4:1;
        RBus_UInt32  int5:1;
        RBus_UInt32  int6:1;
        RBus_UInt32  int7:1;
        RBus_UInt32  int8:1;
        RBus_UInt32  int9:1;
        RBus_UInt32  int10:1;
        RBus_UInt32  int11:1;
        RBus_UInt32  int12:1;
        RBus_UInt32  int13:1;
        RBus_UInt32  int14:1;
        RBus_UInt32  int15:1;
        RBus_UInt32  int16:1;
        RBus_UInt32  int17:1;
        RBus_UInt32  int18:1;
        RBus_UInt32  int19:1;
        RBus_UInt32  int20:1;
        RBus_UInt32  int21:1;
        RBus_UInt32  int22:1;
        RBus_UInt32  int23:1;
        RBus_UInt32  int24:1;
        RBus_UInt32  int25:1;
        RBus_UInt32  int26:1;
        RBus_UInt32  int27:1;
        RBus_UInt32  int28:1;
        RBus_UInt32  int29:1;
        RBus_UInt32  int30:1;
    };
}mis_gpio_isr_gp0da_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int31:1;
        RBus_UInt32  int32:1;
        RBus_UInt32  int33:1;
        RBus_UInt32  int34:1;
        RBus_UInt32  int35:1;
        RBus_UInt32  int36:1;
        RBus_UInt32  int37:1;
        RBus_UInt32  int38:1;
        RBus_UInt32  int39:1;
        RBus_UInt32  int40:1;
        RBus_UInt32  int41:1;
        RBus_UInt32  int42:1;
        RBus_UInt32  int43:1;
        RBus_UInt32  int44:1;
        RBus_UInt32  int45:1;
        RBus_UInt32  int46:1;
        RBus_UInt32  int47:1;
        RBus_UInt32  int48:1;
        RBus_UInt32  int49:1;
        RBus_UInt32  int50:1;
        RBus_UInt32  int51:1;
        RBus_UInt32  int52:1;
        RBus_UInt32  int53:1;
        RBus_UInt32  int54:1;
        RBus_UInt32  int55:1;
        RBus_UInt32  int56:1;
        RBus_UInt32  int57:1;
        RBus_UInt32  int58:1;
        RBus_UInt32  int59:1;
        RBus_UInt32  int60:1;
        RBus_UInt32  int61:1;
    };
}mis_gpio_isr_gp1da_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int62:1;
        RBus_UInt32  int63:1;
        RBus_UInt32  int64:1;
        RBus_UInt32  int65:1;
        RBus_UInt32  int66:1;
        RBus_UInt32  int67:1;
        RBus_UInt32  int68:1;
        RBus_UInt32  int69:1;
        RBus_UInt32  int70:1;
        RBus_UInt32  int71:1;
        RBus_UInt32  int72:1;
        RBus_UInt32  int73:1;
        RBus_UInt32  int74:1;
        RBus_UInt32  int75:1;
        RBus_UInt32  int76:1;
        RBus_UInt32  int77:1;
        RBus_UInt32  int78:1;
        RBus_UInt32  int79:1;
        RBus_UInt32  int80:1;
        RBus_UInt32  int81:1;
        RBus_UInt32  int82:1;
        RBus_UInt32  int83:1;
        RBus_UInt32  int84:1;
        RBus_UInt32  int85:1;
        RBus_UInt32  int86:1;
        RBus_UInt32  int87:1;
        RBus_UInt32  int88:1;
        RBus_UInt32  int89:1;
        RBus_UInt32  int90:1;
        RBus_UInt32  int91:1;
        RBus_UInt32  int92:1;
    };
}mis_gpio_isr_gp2da_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int93:1;
        RBus_UInt32  int94:1;
        RBus_UInt32  int95:1;
        RBus_UInt32  int96:1;
        RBus_UInt32  int97:1;
        RBus_UInt32  int98:1;
        RBus_UInt32  int99:1;
        RBus_UInt32  int100:1;
        RBus_UInt32  int101:1;
        RBus_UInt32  int102:1;
        RBus_UInt32  int103:1;
        RBus_UInt32  int104:1;
        RBus_UInt32  int105:1;
        RBus_UInt32  int106:1;
        RBus_UInt32  int107:1;
        RBus_UInt32  int108:1;
        RBus_UInt32  int109:1;
        RBus_UInt32  int110:1;
        RBus_UInt32  int111:1;
        RBus_UInt32  int112:1;
        RBus_UInt32  int113:1;
        RBus_UInt32  int114:1;
        RBus_UInt32  int115:1;
        RBus_UInt32  int116:1;
        RBus_UInt32  int117:1;
        RBus_UInt32  int118:1;
        RBus_UInt32  int119:1;
        RBus_UInt32  int120:1;
        RBus_UInt32  int121:1;
        RBus_UInt32  int122:1;
        RBus_UInt32  int123:1;
    };
}mis_gpio_isr_gp3da_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int124:1;
        RBus_UInt32  int125:1;
        RBus_UInt32  int126:1;
        RBus_UInt32  int127:1;
        RBus_UInt32  int128:1;
        RBus_UInt32  int129:1;
        RBus_UInt32  int130:1;
        RBus_UInt32  int131:1;
        RBus_UInt32  int132:1;
        RBus_UInt32  int133:1;
        RBus_UInt32  int134:1;
        RBus_UInt32  int135:1;
        RBus_UInt32  int136:1;
        RBus_UInt32  int137:1;
        RBus_UInt32  int138:1;
        RBus_UInt32  int139:1;
        RBus_UInt32  int140:1;
        RBus_UInt32  int141:1;
        RBus_UInt32  int142:1;
        RBus_UInt32  int143:1;
        RBus_UInt32  int144:1;
        RBus_UInt32  int145:1;
        RBus_UInt32  int146:1;
        RBus_UInt32  int147:1;
        RBus_UInt32  int148:1;
        RBus_UInt32  int149:1;
        RBus_UInt32  int150:1;
        RBus_UInt32  int151:1;
        RBus_UInt32  int152:1;
        RBus_UInt32  int153:1;
        RBus_UInt32  int154:1;
    };
}mis_gpio_isr_gp4da_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int155:1;
        RBus_UInt32  int156:1;
        RBus_UInt32  int157:1;
        RBus_UInt32  int158:1;
        RBus_UInt32  int159:1;
        RBus_UInt32  int160:1;
        RBus_UInt32  res1:25;
    };
}mis_gpio_isr_gp5da_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  gpidati:31;
    };
}mis_gpio_gpi0_dati_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  gpidati:1;
        RBus_UInt32  res2:30;
    };
}mis_gpio_gpi1_dati_RBUS;

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
}mis_gpio_gpi0_gpie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gp31:1;
        RBus_UInt32  res1:30;
    };
}mis_gpio_gpi1_gpie_RBUS;

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
}mis_gpio_gpi0_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  gpha31:1;
        RBus_UInt32  res1:30;
    };
}mis_gpio_gpi1_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk1:3;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  clk2:3;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  res1:24;
    };
}mis_gpio_gpi_deb_RBUS;

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
}mis_gpio_isr_gpi0_assert_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int31_a:1;
        RBus_UInt32  res1:30;
    };
}mis_gpio_isr_gpi1_assert_RBUS;

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
}mis_gpio_isr_gpi0_deassert_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int31_da:1;
        RBus_UInt32  res1:30;
    };
}mis_gpio_isr_gpi1_deassert_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  intsel:2;
        RBus_UInt32  res1:30;
    };
}mis_gpio_gp_int_sel_RBUS;




#endif 


#endif 
