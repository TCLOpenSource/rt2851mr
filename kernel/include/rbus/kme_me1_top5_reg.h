/**
* @file Merlin5_MEMC_KME_ME1_TOP5
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_ME1_TOP5_REG_H_
#define _RBUS_KME_ME1_TOP5_REG_H_

#include "rbus_types.h"



//  KME_ME1_TOP5 Register Address
#define  KME_ME1_TOP5_KME_ME1_TOP5_00                                           0x1809B600
#define  KME_ME1_TOP5_KME_ME1_TOP5_00_reg_addr                                   "0xB809B600"
#define  KME_ME1_TOP5_KME_ME1_TOP5_00_reg                                        0xB809B600
#define  KME_ME1_TOP5_KME_ME1_TOP5_00_inst_addr                                  "0x0000"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_00_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_00_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_00_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_00_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_00_regr_me1_rgn00_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_00_regr_me1_rgn00_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_00_regr_me1_rgn00_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_00_regr_me1_rgn00_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_00_regr_me1_rgn00_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_00_regr_me1_rgn00_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_00_get_regr_me1_rgn00_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_00_get_regr_me1_rgn00_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_04                                           0x1809B604
#define  KME_ME1_TOP5_KME_ME1_TOP5_04_reg_addr                                   "0xB809B604"
#define  KME_ME1_TOP5_KME_ME1_TOP5_04_reg                                        0xB809B604
#define  KME_ME1_TOP5_KME_ME1_TOP5_04_inst_addr                                  "0x0001"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_04_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_04_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_04_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_04_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_04_regr_me1_rgn01_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_04_regr_me1_rgn01_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_04_regr_me1_rgn01_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_04_regr_me1_rgn01_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_04_regr_me1_rgn01_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_04_regr_me1_rgn01_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_04_get_regr_me1_rgn01_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_04_get_regr_me1_rgn01_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_08                                           0x1809B608
#define  KME_ME1_TOP5_KME_ME1_TOP5_08_reg_addr                                   "0xB809B608"
#define  KME_ME1_TOP5_KME_ME1_TOP5_08_reg                                        0xB809B608
#define  KME_ME1_TOP5_KME_ME1_TOP5_08_inst_addr                                  "0x0002"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_08_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_08_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_08_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_08_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_08_regr_me1_rgn02_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_08_regr_me1_rgn02_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_08_regr_me1_rgn02_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_08_regr_me1_rgn02_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_08_regr_me1_rgn02_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_08_regr_me1_rgn02_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_08_get_regr_me1_rgn02_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_08_get_regr_me1_rgn02_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_0C                                           0x1809B60C
#define  KME_ME1_TOP5_KME_ME1_TOP5_0C_reg_addr                                   "0xB809B60C"
#define  KME_ME1_TOP5_KME_ME1_TOP5_0C_reg                                        0xB809B60C
#define  KME_ME1_TOP5_KME_ME1_TOP5_0C_inst_addr                                  "0x0003"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_0C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_0C_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_0C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_0C_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_0C_regr_me1_rgn03_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_0C_regr_me1_rgn03_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_0C_regr_me1_rgn03_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_0C_regr_me1_rgn03_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_0C_regr_me1_rgn03_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_0C_regr_me1_rgn03_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_0C_get_regr_me1_rgn03_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_0C_get_regr_me1_rgn03_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_10                                           0x1809B610
#define  KME_ME1_TOP5_KME_ME1_TOP5_10_reg_addr                                   "0xB809B610"
#define  KME_ME1_TOP5_KME_ME1_TOP5_10_reg                                        0xB809B610
#define  KME_ME1_TOP5_KME_ME1_TOP5_10_inst_addr                                  "0x0004"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_10_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_10_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_10_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_10_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_10_regr_me1_rgn04_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_10_regr_me1_rgn04_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_10_regr_me1_rgn04_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_10_regr_me1_rgn04_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_10_regr_me1_rgn04_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_10_regr_me1_rgn04_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_10_get_regr_me1_rgn04_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_10_get_regr_me1_rgn04_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_14                                           0x1809B614
#define  KME_ME1_TOP5_KME_ME1_TOP5_14_reg_addr                                   "0xB809B614"
#define  KME_ME1_TOP5_KME_ME1_TOP5_14_reg                                        0xB809B614
#define  KME_ME1_TOP5_KME_ME1_TOP5_14_inst_addr                                  "0x0005"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_14_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_14_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_14_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_14_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_14_regr_me1_rgn05_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_14_regr_me1_rgn05_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_14_regr_me1_rgn05_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_14_regr_me1_rgn05_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_14_regr_me1_rgn05_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_14_regr_me1_rgn05_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_14_get_regr_me1_rgn05_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_14_get_regr_me1_rgn05_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_18                                           0x1809B618
#define  KME_ME1_TOP5_KME_ME1_TOP5_18_reg_addr                                   "0xB809B618"
#define  KME_ME1_TOP5_KME_ME1_TOP5_18_reg                                        0xB809B618
#define  KME_ME1_TOP5_KME_ME1_TOP5_18_inst_addr                                  "0x0006"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_18_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_18_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_18_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_18_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_18_regr_me1_rgn06_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_18_regr_me1_rgn06_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_18_regr_me1_rgn06_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_18_regr_me1_rgn06_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_18_regr_me1_rgn06_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_18_regr_me1_rgn06_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_18_get_regr_me1_rgn06_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_18_get_regr_me1_rgn06_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_1C                                           0x1809B61C
#define  KME_ME1_TOP5_KME_ME1_TOP5_1C_reg_addr                                   "0xB809B61C"
#define  KME_ME1_TOP5_KME_ME1_TOP5_1C_reg                                        0xB809B61C
#define  KME_ME1_TOP5_KME_ME1_TOP5_1C_inst_addr                                  "0x0007"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_1C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_1C_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_1C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_1C_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_1C_regr_me1_rgn07_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_1C_regr_me1_rgn07_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_1C_regr_me1_rgn07_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_1C_regr_me1_rgn07_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_1C_regr_me1_rgn07_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_1C_regr_me1_rgn07_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_1C_get_regr_me1_rgn07_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_1C_get_regr_me1_rgn07_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_20                                           0x1809B620
#define  KME_ME1_TOP5_KME_ME1_TOP5_20_reg_addr                                   "0xB809B620"
#define  KME_ME1_TOP5_KME_ME1_TOP5_20_reg                                        0xB809B620
#define  KME_ME1_TOP5_KME_ME1_TOP5_20_inst_addr                                  "0x0008"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_20_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_20_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_20_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_20_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_20_regr_me1_rgn08_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_20_regr_me1_rgn08_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_20_regr_me1_rgn08_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_20_regr_me1_rgn08_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_20_regr_me1_rgn08_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_20_regr_me1_rgn08_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_20_get_regr_me1_rgn08_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_20_get_regr_me1_rgn08_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_24                                           0x1809B624
#define  KME_ME1_TOP5_KME_ME1_TOP5_24_reg_addr                                   "0xB809B624"
#define  KME_ME1_TOP5_KME_ME1_TOP5_24_reg                                        0xB809B624
#define  KME_ME1_TOP5_KME_ME1_TOP5_24_inst_addr                                  "0x0009"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_24_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_24_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_24_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_24_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_24_regr_me1_rgn09_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_24_regr_me1_rgn09_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_24_regr_me1_rgn09_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_24_regr_me1_rgn09_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_24_regr_me1_rgn09_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_24_regr_me1_rgn09_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_24_get_regr_me1_rgn09_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_24_get_regr_me1_rgn09_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_28                                           0x1809B628
#define  KME_ME1_TOP5_KME_ME1_TOP5_28_reg_addr                                   "0xB809B628"
#define  KME_ME1_TOP5_KME_ME1_TOP5_28_reg                                        0xB809B628
#define  KME_ME1_TOP5_KME_ME1_TOP5_28_inst_addr                                  "0x000A"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_28_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_28_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_28_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_28_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_28_regr_me1_rgn10_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_28_regr_me1_rgn10_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_28_regr_me1_rgn10_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_28_regr_me1_rgn10_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_28_regr_me1_rgn10_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_28_regr_me1_rgn10_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_28_get_regr_me1_rgn10_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_28_get_regr_me1_rgn10_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_2C                                           0x1809B62C
#define  KME_ME1_TOP5_KME_ME1_TOP5_2C_reg_addr                                   "0xB809B62C"
#define  KME_ME1_TOP5_KME_ME1_TOP5_2C_reg                                        0xB809B62C
#define  KME_ME1_TOP5_KME_ME1_TOP5_2C_inst_addr                                  "0x000B"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_2C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_2C_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_2C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_2C_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_2C_regr_me1_rgn11_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_2C_regr_me1_rgn11_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_2C_regr_me1_rgn11_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_2C_regr_me1_rgn11_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_2C_regr_me1_rgn11_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_2C_regr_me1_rgn11_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_2C_get_regr_me1_rgn11_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_2C_get_regr_me1_rgn11_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_30                                           0x1809B630
#define  KME_ME1_TOP5_KME_ME1_TOP5_30_reg_addr                                   "0xB809B630"
#define  KME_ME1_TOP5_KME_ME1_TOP5_30_reg                                        0xB809B630
#define  KME_ME1_TOP5_KME_ME1_TOP5_30_inst_addr                                  "0x000C"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_30_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_30_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_30_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_30_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_30_regr_me1_rgn12_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_30_regr_me1_rgn12_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_30_regr_me1_rgn12_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_30_regr_me1_rgn12_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_30_regr_me1_rgn12_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_30_regr_me1_rgn12_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_30_get_regr_me1_rgn12_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_30_get_regr_me1_rgn12_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_34                                           0x1809B634
#define  KME_ME1_TOP5_KME_ME1_TOP5_34_reg_addr                                   "0xB809B634"
#define  KME_ME1_TOP5_KME_ME1_TOP5_34_reg                                        0xB809B634
#define  KME_ME1_TOP5_KME_ME1_TOP5_34_inst_addr                                  "0x000D"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_34_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_34_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_34_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_34_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_34_regr_me1_rgn13_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_34_regr_me1_rgn13_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_34_regr_me1_rgn13_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_34_regr_me1_rgn13_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_34_regr_me1_rgn13_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_34_regr_me1_rgn13_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_34_get_regr_me1_rgn13_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_34_get_regr_me1_rgn13_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_38                                           0x1809B638
#define  KME_ME1_TOP5_KME_ME1_TOP5_38_reg_addr                                   "0xB809B638"
#define  KME_ME1_TOP5_KME_ME1_TOP5_38_reg                                        0xB809B638
#define  KME_ME1_TOP5_KME_ME1_TOP5_38_inst_addr                                  "0x000E"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_38_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_38_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_38_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_38_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_38_regr_me1_rgn14_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_38_regr_me1_rgn14_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_38_regr_me1_rgn14_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_38_regr_me1_rgn14_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_38_regr_me1_rgn14_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_38_regr_me1_rgn14_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_38_get_regr_me1_rgn14_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_38_get_regr_me1_rgn14_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_3C                                           0x1809B63C
#define  KME_ME1_TOP5_KME_ME1_TOP5_3C_reg_addr                                   "0xB809B63C"
#define  KME_ME1_TOP5_KME_ME1_TOP5_3C_reg                                        0xB809B63C
#define  KME_ME1_TOP5_KME_ME1_TOP5_3C_inst_addr                                  "0x000F"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_3C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_3C_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_3C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_3C_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_3C_regr_me1_rgn15_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_3C_regr_me1_rgn15_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_3C_regr_me1_rgn15_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_3C_regr_me1_rgn15_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_3C_regr_me1_rgn15_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_3C_regr_me1_rgn15_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_3C_get_regr_me1_rgn15_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_3C_get_regr_me1_rgn15_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_40                                           0x1809B640
#define  KME_ME1_TOP5_KME_ME1_TOP5_40_reg_addr                                   "0xB809B640"
#define  KME_ME1_TOP5_KME_ME1_TOP5_40_reg                                        0xB809B640
#define  KME_ME1_TOP5_KME_ME1_TOP5_40_inst_addr                                  "0x0010"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_40_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_40_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_40_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_40_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_40_regr_me1_rgn16_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_40_regr_me1_rgn16_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_40_regr_me1_rgn16_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_40_regr_me1_rgn16_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_40_regr_me1_rgn16_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_40_regr_me1_rgn16_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_40_get_regr_me1_rgn16_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_40_get_regr_me1_rgn16_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_44                                           0x1809B644
#define  KME_ME1_TOP5_KME_ME1_TOP5_44_reg_addr                                   "0xB809B644"
#define  KME_ME1_TOP5_KME_ME1_TOP5_44_reg                                        0xB809B644
#define  KME_ME1_TOP5_KME_ME1_TOP5_44_inst_addr                                  "0x0011"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_44_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_44_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_44_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_44_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_44_regr_me1_rgn17_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_44_regr_me1_rgn17_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_44_regr_me1_rgn17_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_44_regr_me1_rgn17_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_44_regr_me1_rgn17_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_44_regr_me1_rgn17_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_44_get_regr_me1_rgn17_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_44_get_regr_me1_rgn17_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_48                                           0x1809B648
#define  KME_ME1_TOP5_KME_ME1_TOP5_48_reg_addr                                   "0xB809B648"
#define  KME_ME1_TOP5_KME_ME1_TOP5_48_reg                                        0xB809B648
#define  KME_ME1_TOP5_KME_ME1_TOP5_48_inst_addr                                  "0x0012"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_48_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_48_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_48_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_48_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_48_regr_me1_rgn18_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_48_regr_me1_rgn18_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_48_regr_me1_rgn18_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_48_regr_me1_rgn18_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_48_regr_me1_rgn18_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_48_regr_me1_rgn18_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_48_get_regr_me1_rgn18_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_48_get_regr_me1_rgn18_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_4C                                           0x1809B64C
#define  KME_ME1_TOP5_KME_ME1_TOP5_4C_reg_addr                                   "0xB809B64C"
#define  KME_ME1_TOP5_KME_ME1_TOP5_4C_reg                                        0xB809B64C
#define  KME_ME1_TOP5_KME_ME1_TOP5_4C_inst_addr                                  "0x0013"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_4C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_4C_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_4C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_4C_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_4C_regr_me1_rgn19_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_4C_regr_me1_rgn19_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_4C_regr_me1_rgn19_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_4C_regr_me1_rgn19_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_4C_regr_me1_rgn19_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_4C_regr_me1_rgn19_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_4C_get_regr_me1_rgn19_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_4C_get_regr_me1_rgn19_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_50                                           0x1809B650
#define  KME_ME1_TOP5_KME_ME1_TOP5_50_reg_addr                                   "0xB809B650"
#define  KME_ME1_TOP5_KME_ME1_TOP5_50_reg                                        0xB809B650
#define  KME_ME1_TOP5_KME_ME1_TOP5_50_inst_addr                                  "0x0014"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_50_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_50_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_50_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_50_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_50_regr_me1_rgn20_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_50_regr_me1_rgn20_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_50_regr_me1_rgn20_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_50_regr_me1_rgn20_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_50_regr_me1_rgn20_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_50_regr_me1_rgn20_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_50_get_regr_me1_rgn20_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_50_get_regr_me1_rgn20_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_54                                           0x1809B654
#define  KME_ME1_TOP5_KME_ME1_TOP5_54_reg_addr                                   "0xB809B654"
#define  KME_ME1_TOP5_KME_ME1_TOP5_54_reg                                        0xB809B654
#define  KME_ME1_TOP5_KME_ME1_TOP5_54_inst_addr                                  "0x0015"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_54_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_54_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_54_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_54_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_54_regr_me1_rgn21_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_54_regr_me1_rgn21_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_54_regr_me1_rgn21_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_54_regr_me1_rgn21_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_54_regr_me1_rgn21_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_54_regr_me1_rgn21_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_54_get_regr_me1_rgn21_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_54_get_regr_me1_rgn21_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_58                                           0x1809B658
#define  KME_ME1_TOP5_KME_ME1_TOP5_58_reg_addr                                   "0xB809B658"
#define  KME_ME1_TOP5_KME_ME1_TOP5_58_reg                                        0xB809B658
#define  KME_ME1_TOP5_KME_ME1_TOP5_58_inst_addr                                  "0x0016"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_58_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_58_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_58_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_58_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_58_regr_me1_rgn22_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_58_regr_me1_rgn22_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_58_regr_me1_rgn22_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_58_regr_me1_rgn22_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_58_regr_me1_rgn22_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_58_regr_me1_rgn22_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_58_get_regr_me1_rgn22_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_58_get_regr_me1_rgn22_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_5C                                           0x1809B65C
#define  KME_ME1_TOP5_KME_ME1_TOP5_5C_reg_addr                                   "0xB809B65C"
#define  KME_ME1_TOP5_KME_ME1_TOP5_5C_reg                                        0xB809B65C
#define  KME_ME1_TOP5_KME_ME1_TOP5_5C_inst_addr                                  "0x0017"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_5C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_5C_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_5C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_5C_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_5C_regr_me1_rgn23_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_5C_regr_me1_rgn23_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_5C_regr_me1_rgn23_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_5C_regr_me1_rgn23_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_5C_regr_me1_rgn23_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_5C_regr_me1_rgn23_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_5C_get_regr_me1_rgn23_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_5C_get_regr_me1_rgn23_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_60                                           0x1809B660
#define  KME_ME1_TOP5_KME_ME1_TOP5_60_reg_addr                                   "0xB809B660"
#define  KME_ME1_TOP5_KME_ME1_TOP5_60_reg                                        0xB809B660
#define  KME_ME1_TOP5_KME_ME1_TOP5_60_inst_addr                                  "0x0018"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_60_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_60_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_60_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_60_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_60_regr_me1_rgn24_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_60_regr_me1_rgn24_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_60_regr_me1_rgn24_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_60_regr_me1_rgn24_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_60_regr_me1_rgn24_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_60_regr_me1_rgn24_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_60_get_regr_me1_rgn24_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_60_get_regr_me1_rgn24_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_64                                           0x1809B664
#define  KME_ME1_TOP5_KME_ME1_TOP5_64_reg_addr                                   "0xB809B664"
#define  KME_ME1_TOP5_KME_ME1_TOP5_64_reg                                        0xB809B664
#define  KME_ME1_TOP5_KME_ME1_TOP5_64_inst_addr                                  "0x0019"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_64_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_64_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_64_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_64_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_64_regr_me1_rgn25_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_64_regr_me1_rgn25_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_64_regr_me1_rgn25_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_64_regr_me1_rgn25_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_64_regr_me1_rgn25_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_64_regr_me1_rgn25_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_64_get_regr_me1_rgn25_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_64_get_regr_me1_rgn25_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_68                                           0x1809B668
#define  KME_ME1_TOP5_KME_ME1_TOP5_68_reg_addr                                   "0xB809B668"
#define  KME_ME1_TOP5_KME_ME1_TOP5_68_reg                                        0xB809B668
#define  KME_ME1_TOP5_KME_ME1_TOP5_68_inst_addr                                  "0x001A"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_68_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_68_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_68_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_68_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_68_regr_me1_rgn26_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_68_regr_me1_rgn26_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_68_regr_me1_rgn26_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_68_regr_me1_rgn26_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_68_regr_me1_rgn26_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_68_regr_me1_rgn26_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_68_get_regr_me1_rgn26_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_68_get_regr_me1_rgn26_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_6C                                           0x1809B66C
#define  KME_ME1_TOP5_KME_ME1_TOP5_6C_reg_addr                                   "0xB809B66C"
#define  KME_ME1_TOP5_KME_ME1_TOP5_6C_reg                                        0xB809B66C
#define  KME_ME1_TOP5_KME_ME1_TOP5_6C_inst_addr                                  "0x001B"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_6C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_6C_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_6C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_6C_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_6C_regr_me1_rgn27_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_6C_regr_me1_rgn27_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_6C_regr_me1_rgn27_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_6C_regr_me1_rgn27_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_6C_regr_me1_rgn27_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_6C_regr_me1_rgn27_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_6C_get_regr_me1_rgn27_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_6C_get_regr_me1_rgn27_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_70                                           0x1809B670
#define  KME_ME1_TOP5_KME_ME1_TOP5_70_reg_addr                                   "0xB809B670"
#define  KME_ME1_TOP5_KME_ME1_TOP5_70_reg                                        0xB809B670
#define  KME_ME1_TOP5_KME_ME1_TOP5_70_inst_addr                                  "0x001C"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_70_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_70_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_70_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_70_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_70_regr_me1_rgn28_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_70_regr_me1_rgn28_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_70_regr_me1_rgn28_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_70_regr_me1_rgn28_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_70_regr_me1_rgn28_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_70_regr_me1_rgn28_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_70_get_regr_me1_rgn28_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_70_get_regr_me1_rgn28_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_74                                           0x1809B674
#define  KME_ME1_TOP5_KME_ME1_TOP5_74_reg_addr                                   "0xB809B674"
#define  KME_ME1_TOP5_KME_ME1_TOP5_74_reg                                        0xB809B674
#define  KME_ME1_TOP5_KME_ME1_TOP5_74_inst_addr                                  "0x001D"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_74_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_74_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_74_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_74_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_74_regr_me1_rgn29_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_74_regr_me1_rgn29_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_74_regr_me1_rgn29_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_74_regr_me1_rgn29_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_74_regr_me1_rgn29_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_74_regr_me1_rgn29_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_74_get_regr_me1_rgn29_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_74_get_regr_me1_rgn29_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_78                                           0x1809B678
#define  KME_ME1_TOP5_KME_ME1_TOP5_78_reg_addr                                   "0xB809B678"
#define  KME_ME1_TOP5_KME_ME1_TOP5_78_reg                                        0xB809B678
#define  KME_ME1_TOP5_KME_ME1_TOP5_78_inst_addr                                  "0x001E"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_78_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_78_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_78_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_78_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_78_regr_me1_rgn30_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_78_regr_me1_rgn30_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_78_regr_me1_rgn30_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_78_regr_me1_rgn30_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_78_regr_me1_rgn30_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_78_regr_me1_rgn30_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_78_get_regr_me1_rgn30_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_78_get_regr_me1_rgn30_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_7C                                           0x1809B67C
#define  KME_ME1_TOP5_KME_ME1_TOP5_7C_reg_addr                                   "0xB809B67C"
#define  KME_ME1_TOP5_KME_ME1_TOP5_7C_reg                                        0xB809B67C
#define  KME_ME1_TOP5_KME_ME1_TOP5_7C_inst_addr                                  "0x001F"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_7C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_7C_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_7C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_7C_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_7C_regr_me1_rgn31_grp1_cnt_shift              (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_7C_regr_me1_rgn31_grp0_cnt_shift              (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_7C_regr_me1_rgn31_grp1_cnt_mask               (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_7C_regr_me1_rgn31_grp0_cnt_mask               (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_7C_regr_me1_rgn31_grp1_cnt(data)              (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_7C_regr_me1_rgn31_grp0_cnt(data)              (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_7C_get_regr_me1_rgn31_grp1_cnt(data)          ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_7C_get_regr_me1_rgn31_grp0_cnt(data)          (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_80                                           0x1809B680
#define  KME_ME1_TOP5_KME_ME1_TOP5_80_reg_addr                                   "0xB809B680"
#define  KME_ME1_TOP5_KME_ME1_TOP5_80_reg                                        0xB809B680
#define  KME_ME1_TOP5_KME_ME1_TOP5_80_inst_addr                                  "0x0020"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_80_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_80_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_80_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_80_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_80_regr_me1_rgn00_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_80_regr_me1_rgn00_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_80_regr_me1_rgn00_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_80_regr_me1_rgn00_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_80_regr_me1_rgn00_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_80_regr_me1_rgn00_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_80_get_regr_me1_rgn00_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_80_get_regr_me1_rgn00_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_84                                           0x1809B684
#define  KME_ME1_TOP5_KME_ME1_TOP5_84_reg_addr                                   "0xB809B684"
#define  KME_ME1_TOP5_KME_ME1_TOP5_84_reg                                        0xB809B684
#define  KME_ME1_TOP5_KME_ME1_TOP5_84_inst_addr                                  "0x0021"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_84_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_84_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_84_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_84_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_84_regr_me1_rgn01_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_84_regr_me1_rgn01_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_84_regr_me1_rgn01_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_84_regr_me1_rgn01_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_84_regr_me1_rgn01_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_84_regr_me1_rgn01_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_84_get_regr_me1_rgn01_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_84_get_regr_me1_rgn01_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_88                                           0x1809B688
#define  KME_ME1_TOP5_KME_ME1_TOP5_88_reg_addr                                   "0xB809B688"
#define  KME_ME1_TOP5_KME_ME1_TOP5_88_reg                                        0xB809B688
#define  KME_ME1_TOP5_KME_ME1_TOP5_88_inst_addr                                  "0x0022"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_88_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_88_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_88_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_88_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_88_regr_me1_rgn02_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_88_regr_me1_rgn02_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_88_regr_me1_rgn02_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_88_regr_me1_rgn02_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_88_regr_me1_rgn02_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_88_regr_me1_rgn02_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_88_get_regr_me1_rgn02_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_88_get_regr_me1_rgn02_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_8C                                           0x1809B68C
#define  KME_ME1_TOP5_KME_ME1_TOP5_8C_reg_addr                                   "0xB809B68C"
#define  KME_ME1_TOP5_KME_ME1_TOP5_8C_reg                                        0xB809B68C
#define  KME_ME1_TOP5_KME_ME1_TOP5_8C_inst_addr                                  "0x0023"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_8C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_8C_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_8C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_8C_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_8C_regr_me1_rgn03_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_8C_regr_me1_rgn03_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_8C_regr_me1_rgn03_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_8C_regr_me1_rgn03_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_8C_regr_me1_rgn03_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_8C_regr_me1_rgn03_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_8C_get_regr_me1_rgn03_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_8C_get_regr_me1_rgn03_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_90                                           0x1809B690
#define  KME_ME1_TOP5_KME_ME1_TOP5_90_reg_addr                                   "0xB809B690"
#define  KME_ME1_TOP5_KME_ME1_TOP5_90_reg                                        0xB809B690
#define  KME_ME1_TOP5_KME_ME1_TOP5_90_inst_addr                                  "0x0024"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_90_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_90_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_90_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_90_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_90_regr_me1_rgn04_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_90_regr_me1_rgn04_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_90_regr_me1_rgn04_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_90_regr_me1_rgn04_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_90_regr_me1_rgn04_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_90_regr_me1_rgn04_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_90_get_regr_me1_rgn04_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_90_get_regr_me1_rgn04_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_94                                           0x1809B694
#define  KME_ME1_TOP5_KME_ME1_TOP5_94_reg_addr                                   "0xB809B694"
#define  KME_ME1_TOP5_KME_ME1_TOP5_94_reg                                        0xB809B694
#define  KME_ME1_TOP5_KME_ME1_TOP5_94_inst_addr                                  "0x0025"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_94_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_94_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_94_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_94_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_94_regr_me1_rgn05_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_94_regr_me1_rgn05_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_94_regr_me1_rgn05_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_94_regr_me1_rgn05_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_94_regr_me1_rgn05_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_94_regr_me1_rgn05_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_94_get_regr_me1_rgn05_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_94_get_regr_me1_rgn05_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_98                                           0x1809B698
#define  KME_ME1_TOP5_KME_ME1_TOP5_98_reg_addr                                   "0xB809B698"
#define  KME_ME1_TOP5_KME_ME1_TOP5_98_reg                                        0xB809B698
#define  KME_ME1_TOP5_KME_ME1_TOP5_98_inst_addr                                  "0x0026"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_98_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_98_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_98_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_98_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_98_regr_me1_rgn06_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_98_regr_me1_rgn06_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_98_regr_me1_rgn06_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_98_regr_me1_rgn06_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_98_regr_me1_rgn06_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_98_regr_me1_rgn06_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_98_get_regr_me1_rgn06_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_98_get_regr_me1_rgn06_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_9C                                           0x1809B69C
#define  KME_ME1_TOP5_KME_ME1_TOP5_9C_reg_addr                                   "0xB809B69C"
#define  KME_ME1_TOP5_KME_ME1_TOP5_9C_reg                                        0xB809B69C
#define  KME_ME1_TOP5_KME_ME1_TOP5_9C_inst_addr                                  "0x0027"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_9C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_9C_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_9C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_9C_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_9C_regr_me1_rgn07_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_9C_regr_me1_rgn07_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_9C_regr_me1_rgn07_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_9C_regr_me1_rgn07_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_9C_regr_me1_rgn07_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_9C_regr_me1_rgn07_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_9C_get_regr_me1_rgn07_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_9C_get_regr_me1_rgn07_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_A0                                           0x1809B6A0
#define  KME_ME1_TOP5_KME_ME1_TOP5_A0_reg_addr                                   "0xB809B6A0"
#define  KME_ME1_TOP5_KME_ME1_TOP5_A0_reg                                        0xB809B6A0
#define  KME_ME1_TOP5_KME_ME1_TOP5_A0_inst_addr                                  "0x0028"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_A0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_A0_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_A0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_A0_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_A0_regr_me1_rgn08_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_A0_regr_me1_rgn08_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_A0_regr_me1_rgn08_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_A0_regr_me1_rgn08_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_A0_regr_me1_rgn08_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_A0_regr_me1_rgn08_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_A0_get_regr_me1_rgn08_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_A0_get_regr_me1_rgn08_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_A4                                           0x1809B6A4
#define  KME_ME1_TOP5_KME_ME1_TOP5_A4_reg_addr                                   "0xB809B6A4"
#define  KME_ME1_TOP5_KME_ME1_TOP5_A4_reg                                        0xB809B6A4
#define  KME_ME1_TOP5_KME_ME1_TOP5_A4_inst_addr                                  "0x0029"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_A4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_A4_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_A4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_A4_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_A4_regr_me1_rgn09_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_A4_regr_me1_rgn09_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_A4_regr_me1_rgn09_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_A4_regr_me1_rgn09_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_A4_regr_me1_rgn09_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_A4_regr_me1_rgn09_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_A4_get_regr_me1_rgn09_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_A4_get_regr_me1_rgn09_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_A8                                           0x1809B6A8
#define  KME_ME1_TOP5_KME_ME1_TOP5_A8_reg_addr                                   "0xB809B6A8"
#define  KME_ME1_TOP5_KME_ME1_TOP5_A8_reg                                        0xB809B6A8
#define  KME_ME1_TOP5_KME_ME1_TOP5_A8_inst_addr                                  "0x002A"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_A8_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_A8_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_A8_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_A8_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_A8_regr_me1_rgn10_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_A8_regr_me1_rgn10_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_A8_regr_me1_rgn10_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_A8_regr_me1_rgn10_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_A8_regr_me1_rgn10_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_A8_regr_me1_rgn10_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_A8_get_regr_me1_rgn10_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_A8_get_regr_me1_rgn10_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_AC                                           0x1809B6AC
#define  KME_ME1_TOP5_KME_ME1_TOP5_AC_reg_addr                                   "0xB809B6AC"
#define  KME_ME1_TOP5_KME_ME1_TOP5_AC_reg                                        0xB809B6AC
#define  KME_ME1_TOP5_KME_ME1_TOP5_AC_inst_addr                                  "0x002B"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_AC_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_AC_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_AC_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_AC_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_AC_regr_me1_rgn11_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_AC_regr_me1_rgn11_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_AC_regr_me1_rgn11_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_AC_regr_me1_rgn11_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_AC_regr_me1_rgn11_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_AC_regr_me1_rgn11_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_AC_get_regr_me1_rgn11_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_AC_get_regr_me1_rgn11_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_B0                                           0x1809B6B0
#define  KME_ME1_TOP5_KME_ME1_TOP5_B0_reg_addr                                   "0xB809B6B0"
#define  KME_ME1_TOP5_KME_ME1_TOP5_B0_reg                                        0xB809B6B0
#define  KME_ME1_TOP5_KME_ME1_TOP5_B0_inst_addr                                  "0x002C"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_B0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_B0_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_B0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_B0_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_B0_regr_me1_rgn12_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_B0_regr_me1_rgn12_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_B0_regr_me1_rgn12_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_B0_regr_me1_rgn12_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_B0_regr_me1_rgn12_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_B0_regr_me1_rgn12_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_B0_get_regr_me1_rgn12_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_B0_get_regr_me1_rgn12_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_B4                                           0x1809B6B4
#define  KME_ME1_TOP5_KME_ME1_TOP5_B4_reg_addr                                   "0xB809B6B4"
#define  KME_ME1_TOP5_KME_ME1_TOP5_B4_reg                                        0xB809B6B4
#define  KME_ME1_TOP5_KME_ME1_TOP5_B4_inst_addr                                  "0x002D"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_B4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_B4_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_B4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_B4_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_B4_regr_me1_rgn13_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_B4_regr_me1_rgn13_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_B4_regr_me1_rgn13_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_B4_regr_me1_rgn13_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_B4_regr_me1_rgn13_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_B4_regr_me1_rgn13_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_B4_get_regr_me1_rgn13_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_B4_get_regr_me1_rgn13_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_B8                                           0x1809B6B8
#define  KME_ME1_TOP5_KME_ME1_TOP5_B8_reg_addr                                   "0xB809B6B8"
#define  KME_ME1_TOP5_KME_ME1_TOP5_B8_reg                                        0xB809B6B8
#define  KME_ME1_TOP5_KME_ME1_TOP5_B8_inst_addr                                  "0x002E"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_B8_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_B8_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_B8_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_B8_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_B8_regr_me1_rgn14_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_B8_regr_me1_rgn14_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_B8_regr_me1_rgn14_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_B8_regr_me1_rgn14_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_B8_regr_me1_rgn14_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_B8_regr_me1_rgn14_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_B8_get_regr_me1_rgn14_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_B8_get_regr_me1_rgn14_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_BC                                           0x1809B6BC
#define  KME_ME1_TOP5_KME_ME1_TOP5_BC_reg_addr                                   "0xB809B6BC"
#define  KME_ME1_TOP5_KME_ME1_TOP5_BC_reg                                        0xB809B6BC
#define  KME_ME1_TOP5_KME_ME1_TOP5_BC_inst_addr                                  "0x002F"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_BC_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_BC_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_BC_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_BC_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_BC_regr_me1_rgn15_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_BC_regr_me1_rgn15_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_BC_regr_me1_rgn15_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_BC_regr_me1_rgn15_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_BC_regr_me1_rgn15_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_BC_regr_me1_rgn15_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_BC_get_regr_me1_rgn15_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_BC_get_regr_me1_rgn15_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_C0                                           0x1809B6C0
#define  KME_ME1_TOP5_KME_ME1_TOP5_C0_reg_addr                                   "0xB809B6C0"
#define  KME_ME1_TOP5_KME_ME1_TOP5_C0_reg                                        0xB809B6C0
#define  KME_ME1_TOP5_KME_ME1_TOP5_C0_inst_addr                                  "0x0030"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_C0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_C0_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_C0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_C0_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_C0_regr_me1_rgn16_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_C0_regr_me1_rgn16_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_C0_regr_me1_rgn16_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_C0_regr_me1_rgn16_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_C0_regr_me1_rgn16_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_C0_regr_me1_rgn16_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_C0_get_regr_me1_rgn16_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_C0_get_regr_me1_rgn16_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_C4                                           0x1809B6C4
#define  KME_ME1_TOP5_KME_ME1_TOP5_C4_reg_addr                                   "0xB809B6C4"
#define  KME_ME1_TOP5_KME_ME1_TOP5_C4_reg                                        0xB809B6C4
#define  KME_ME1_TOP5_KME_ME1_TOP5_C4_inst_addr                                  "0x0031"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_C4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_C4_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_C4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_C4_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_C4_regr_me1_rgn17_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_C4_regr_me1_rgn17_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_C4_regr_me1_rgn17_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_C4_regr_me1_rgn17_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_C4_regr_me1_rgn17_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_C4_regr_me1_rgn17_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_C4_get_regr_me1_rgn17_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_C4_get_regr_me1_rgn17_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_C8                                           0x1809B6C8
#define  KME_ME1_TOP5_KME_ME1_TOP5_C8_reg_addr                                   "0xB809B6C8"
#define  KME_ME1_TOP5_KME_ME1_TOP5_C8_reg                                        0xB809B6C8
#define  KME_ME1_TOP5_KME_ME1_TOP5_C8_inst_addr                                  "0x0032"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_C8_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_C8_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_C8_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_C8_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_C8_regr_me1_rgn18_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_C8_regr_me1_rgn18_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_C8_regr_me1_rgn18_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_C8_regr_me1_rgn18_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_C8_regr_me1_rgn18_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_C8_regr_me1_rgn18_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_C8_get_regr_me1_rgn18_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_C8_get_regr_me1_rgn18_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_CC                                           0x1809B6CC
#define  KME_ME1_TOP5_KME_ME1_TOP5_CC_reg_addr                                   "0xB809B6CC"
#define  KME_ME1_TOP5_KME_ME1_TOP5_CC_reg                                        0xB809B6CC
#define  KME_ME1_TOP5_KME_ME1_TOP5_CC_inst_addr                                  "0x0033"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_CC_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_CC_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_CC_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_CC_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_CC_regr_me1_rgn19_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_CC_regr_me1_rgn19_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_CC_regr_me1_rgn19_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_CC_regr_me1_rgn19_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_CC_regr_me1_rgn19_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_CC_regr_me1_rgn19_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_CC_get_regr_me1_rgn19_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_CC_get_regr_me1_rgn19_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_D0                                           0x1809B6D0
#define  KME_ME1_TOP5_KME_ME1_TOP5_D0_reg_addr                                   "0xB809B6D0"
#define  KME_ME1_TOP5_KME_ME1_TOP5_D0_reg                                        0xB809B6D0
#define  KME_ME1_TOP5_KME_ME1_TOP5_D0_inst_addr                                  "0x0034"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_D0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_D0_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_D0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_D0_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_D0_regr_me1_rgn20_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_D0_regr_me1_rgn20_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_D0_regr_me1_rgn20_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_D0_regr_me1_rgn20_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_D0_regr_me1_rgn20_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_D0_regr_me1_rgn20_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_D0_get_regr_me1_rgn20_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_D0_get_regr_me1_rgn20_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_D4                                           0x1809B6D4
#define  KME_ME1_TOP5_KME_ME1_TOP5_D4_reg_addr                                   "0xB809B6D4"
#define  KME_ME1_TOP5_KME_ME1_TOP5_D4_reg                                        0xB809B6D4
#define  KME_ME1_TOP5_KME_ME1_TOP5_D4_inst_addr                                  "0x0035"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_D4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_D4_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_D4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_D4_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_D4_regr_me1_rgn21_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_D4_regr_me1_rgn21_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_D4_regr_me1_rgn21_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_D4_regr_me1_rgn21_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_D4_regr_me1_rgn21_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_D4_regr_me1_rgn21_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_D4_get_regr_me1_rgn21_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_D4_get_regr_me1_rgn21_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_D8                                           0x1809B6D8
#define  KME_ME1_TOP5_KME_ME1_TOP5_D8_reg_addr                                   "0xB809B6D8"
#define  KME_ME1_TOP5_KME_ME1_TOP5_D8_reg                                        0xB809B6D8
#define  KME_ME1_TOP5_KME_ME1_TOP5_D8_inst_addr                                  "0x0036"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_D8_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_D8_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_D8_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_D8_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_D8_regr_me1_rgn22_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_D8_regr_me1_rgn22_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_D8_regr_me1_rgn22_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_D8_regr_me1_rgn22_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_D8_regr_me1_rgn22_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_D8_regr_me1_rgn22_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_D8_get_regr_me1_rgn22_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_D8_get_regr_me1_rgn22_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_DC                                           0x1809B6DC
#define  KME_ME1_TOP5_KME_ME1_TOP5_DC_reg_addr                                   "0xB809B6DC"
#define  KME_ME1_TOP5_KME_ME1_TOP5_DC_reg                                        0xB809B6DC
#define  KME_ME1_TOP5_KME_ME1_TOP5_DC_inst_addr                                  "0x0037"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_DC_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_DC_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_DC_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_DC_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_DC_regr_me1_rgn23_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_DC_regr_me1_rgn23_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_DC_regr_me1_rgn23_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_DC_regr_me1_rgn23_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_DC_regr_me1_rgn23_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_DC_regr_me1_rgn23_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_DC_get_regr_me1_rgn23_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_DC_get_regr_me1_rgn23_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_E0                                           0x1809B6E0
#define  KME_ME1_TOP5_KME_ME1_TOP5_E0_reg_addr                                   "0xB809B6E0"
#define  KME_ME1_TOP5_KME_ME1_TOP5_E0_reg                                        0xB809B6E0
#define  KME_ME1_TOP5_KME_ME1_TOP5_E0_inst_addr                                  "0x0038"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_E0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_E0_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_E0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_E0_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_E0_regr_me1_rgn24_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_E0_regr_me1_rgn24_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_E0_regr_me1_rgn24_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_E0_regr_me1_rgn24_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_E0_regr_me1_rgn24_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_E0_regr_me1_rgn24_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_E0_get_regr_me1_rgn24_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_E0_get_regr_me1_rgn24_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_E4                                           0x1809B6E4
#define  KME_ME1_TOP5_KME_ME1_TOP5_E4_reg_addr                                   "0xB809B6E4"
#define  KME_ME1_TOP5_KME_ME1_TOP5_E4_reg                                        0xB809B6E4
#define  KME_ME1_TOP5_KME_ME1_TOP5_E4_inst_addr                                  "0x0039"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_E4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_E4_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_E4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_E4_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_E4_regr_me1_rgn25_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_E4_regr_me1_rgn25_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_E4_regr_me1_rgn25_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_E4_regr_me1_rgn25_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_E4_regr_me1_rgn25_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_E4_regr_me1_rgn25_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_E4_get_regr_me1_rgn25_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_E4_get_regr_me1_rgn25_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_E8                                           0x1809B6E8
#define  KME_ME1_TOP5_KME_ME1_TOP5_E8_reg_addr                                   "0xB809B6E8"
#define  KME_ME1_TOP5_KME_ME1_TOP5_E8_reg                                        0xB809B6E8
#define  KME_ME1_TOP5_KME_ME1_TOP5_E8_inst_addr                                  "0x003A"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_E8_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_E8_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_E8_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_E8_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_E8_regr_me1_rgn26_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_E8_regr_me1_rgn26_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_E8_regr_me1_rgn26_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_E8_regr_me1_rgn26_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_E8_regr_me1_rgn26_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_E8_regr_me1_rgn26_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_E8_get_regr_me1_rgn26_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_E8_get_regr_me1_rgn26_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_EC                                           0x1809B6EC
#define  KME_ME1_TOP5_KME_ME1_TOP5_EC_reg_addr                                   "0xB809B6EC"
#define  KME_ME1_TOP5_KME_ME1_TOP5_EC_reg                                        0xB809B6EC
#define  KME_ME1_TOP5_KME_ME1_TOP5_EC_inst_addr                                  "0x003B"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_EC_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_EC_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_EC_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_EC_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_EC_regr_me1_rgn27_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_EC_regr_me1_rgn27_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_EC_regr_me1_rgn27_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_EC_regr_me1_rgn27_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_EC_regr_me1_rgn27_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_EC_regr_me1_rgn27_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_EC_get_regr_me1_rgn27_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_EC_get_regr_me1_rgn27_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_F0                                           0x1809B6F0
#define  KME_ME1_TOP5_KME_ME1_TOP5_F0_reg_addr                                   "0xB809B6F0"
#define  KME_ME1_TOP5_KME_ME1_TOP5_F0_reg                                        0xB809B6F0
#define  KME_ME1_TOP5_KME_ME1_TOP5_F0_inst_addr                                  "0x003C"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_F0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_F0_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_F0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_F0_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_F0_regr_me1_rgn28_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_F0_regr_me1_rgn28_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_F0_regr_me1_rgn28_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_F0_regr_me1_rgn28_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_F0_regr_me1_rgn28_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_F0_regr_me1_rgn28_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_F0_get_regr_me1_rgn28_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_F0_get_regr_me1_rgn28_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_F4                                           0x1809B6F4
#define  KME_ME1_TOP5_KME_ME1_TOP5_F4_reg_addr                                   "0xB809B6F4"
#define  KME_ME1_TOP5_KME_ME1_TOP5_F4_reg                                        0xB809B6F4
#define  KME_ME1_TOP5_KME_ME1_TOP5_F4_inst_addr                                  "0x003D"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_F4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_F4_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_F4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_F4_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_F4_regr_me1_rgn29_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_F4_regr_me1_rgn29_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_F4_regr_me1_rgn29_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_F4_regr_me1_rgn29_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_F4_regr_me1_rgn29_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_F4_regr_me1_rgn29_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_F4_get_regr_me1_rgn29_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_F4_get_regr_me1_rgn29_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_F8                                           0x1809B6F8
#define  KME_ME1_TOP5_KME_ME1_TOP5_F8_reg_addr                                   "0xB809B6F8"
#define  KME_ME1_TOP5_KME_ME1_TOP5_F8_reg                                        0xB809B6F8
#define  KME_ME1_TOP5_KME_ME1_TOP5_F8_inst_addr                                  "0x003E"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_F8_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_F8_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_F8_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_F8_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_F8_regr_me1_rgn30_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_F8_regr_me1_rgn30_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_F8_regr_me1_rgn30_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_F8_regr_me1_rgn30_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_F8_regr_me1_rgn30_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_F8_regr_me1_rgn30_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_F8_get_regr_me1_rgn30_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_F8_get_regr_me1_rgn30_grp0_unconf(data)       (0x00000FFF&(data))

#define  KME_ME1_TOP5_KME_ME1_TOP5_FC                                           0x1809B6FC
#define  KME_ME1_TOP5_KME_ME1_TOP5_FC_reg_addr                                   "0xB809B6FC"
#define  KME_ME1_TOP5_KME_ME1_TOP5_FC_reg                                        0xB809B6FC
#define  KME_ME1_TOP5_KME_ME1_TOP5_FC_inst_addr                                  "0x003F"
#define  set_KME_ME1_TOP5_KME_ME1_TOP5_FC_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_FC_reg)=data)
#define  get_KME_ME1_TOP5_KME_ME1_TOP5_FC_reg                                    (*((volatile unsigned int*)KME_ME1_TOP5_KME_ME1_TOP5_FC_reg))
#define  KME_ME1_TOP5_KME_ME1_TOP5_FC_regr_me1_rgn31_grp1_unconf_shift           (12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_FC_regr_me1_rgn31_grp0_unconf_shift           (0)
#define  KME_ME1_TOP5_KME_ME1_TOP5_FC_regr_me1_rgn31_grp1_unconf_mask            (0x00FFF000)
#define  KME_ME1_TOP5_KME_ME1_TOP5_FC_regr_me1_rgn31_grp0_unconf_mask            (0x00000FFF)
#define  KME_ME1_TOP5_KME_ME1_TOP5_FC_regr_me1_rgn31_grp1_unconf(data)           (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP5_KME_ME1_TOP5_FC_regr_me1_rgn31_grp0_unconf(data)           (0x00000FFF&(data))
#define  KME_ME1_TOP5_KME_ME1_TOP5_FC_get_regr_me1_rgn31_grp1_unconf(data)       ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP5_KME_ME1_TOP5_FC_get_regr_me1_rgn31_grp0_unconf(data)       (0x00000FFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_ME1_TOP5 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn00_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn00_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn01_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn01_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn02_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn02_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn03_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn03_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn04_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn04_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn05_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn05_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn06_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn06_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn07_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn07_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn08_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn08_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn09_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn09_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn10_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn10_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn11_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn11_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn12_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn12_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn13_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn13_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn14_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn14_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn15_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn15_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn16_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn16_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn17_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn17_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn18_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn18_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn19_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn19_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn20_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn20_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn21_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn21_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn22_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn22_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn23_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn23_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn24_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn24_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn25_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn25_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn26_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn26_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn27_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn27_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn28_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn28_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn29_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn29_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn30_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn30_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn31_grp1_cnt:12;
        RBus_UInt32  regr_me1_rgn31_grp0_cnt:12;
    };
}kme_me1_top5_kme_me1_top5_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn00_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn00_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn01_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn01_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn02_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn02_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn03_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn03_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn04_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn04_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn05_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn05_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn06_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn06_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn07_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn07_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn08_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn08_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn09_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn09_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn10_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn10_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn11_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn11_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn12_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn12_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn13_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn13_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn14_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn14_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn15_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn15_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn16_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn16_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn17_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn17_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn18_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn18_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn19_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn19_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn20_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn20_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn21_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn21_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn22_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn22_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn23_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn23_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn24_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn24_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn25_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn25_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn26_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn26_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn27_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn27_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn28_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn28_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn29_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn29_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn30_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn30_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_rgn31_grp1_unconf:12;
        RBus_UInt32  regr_me1_rgn31_grp0_unconf:12;
    };
}kme_me1_top5_kme_me1_top5_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_ME1_TOP5 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn00_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn00_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn01_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn01_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn02_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn02_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn03_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn03_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn04_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn04_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn05_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn05_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn06_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn06_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn07_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn07_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn08_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn08_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn09_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn09_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn10_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn10_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn11_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn11_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn12_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn12_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn13_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn13_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn14_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn14_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn15_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn15_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn16_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn16_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn17_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn17_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn18_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn18_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn19_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn19_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn20_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn20_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn21_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn21_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn22_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn22_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn23_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn23_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn24_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn24_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn25_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn25_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn26_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn26_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn27_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn27_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn28_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn28_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn29_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn29_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn30_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn30_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn31_grp0_cnt:12;
        RBus_UInt32  regr_me1_rgn31_grp1_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn00_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn00_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn01_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn01_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn02_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn02_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn03_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn03_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn04_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn04_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn05_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn05_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn06_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn06_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn07_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn07_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn08_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn08_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn09_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn09_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn10_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn10_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn11_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn11_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn12_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn12_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn13_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn13_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn14_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn14_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn15_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn15_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn16_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn16_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn17_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn17_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn18_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn18_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn19_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn19_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn20_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn20_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn21_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn21_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn22_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn22_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn23_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn23_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn24_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn24_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn25_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn25_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn26_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn26_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn27_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn27_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn28_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn28_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn29_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn29_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn30_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn30_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_rgn31_grp0_unconf:12;
        RBus_UInt32  regr_me1_rgn31_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top5_kme_me1_top5_fc_RBUS;




#endif 


#endif 
