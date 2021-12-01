/**
* @file Merlin5_MEMC_KME_ME1_TOP1
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_ME1_TOP1_REG_H_
#define _RBUS_KME_ME1_TOP1_REG_H_

#include "rbus_types.h"



//  KME_ME1_TOP1 Register Address
#define  KME_ME1_TOP1_ME1_COMMON1_00                                            0x1809C500
#define  KME_ME1_TOP1_ME1_COMMON1_00_reg_addr                                    "0xB809C500"
#define  KME_ME1_TOP1_ME1_COMMON1_00_reg                                         0xB809C500
#define  KME_ME1_TOP1_ME1_COMMON1_00_inst_addr                                   "0x0000"
#define  set_KME_ME1_TOP1_ME1_COMMON1_00_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_00_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_00_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_00_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_00_me1_psad_alp_y1_shift                       (24)
#define  KME_ME1_TOP1_ME1_COMMON1_00_me1_psad_alp_x3_shift                       (16)
#define  KME_ME1_TOP1_ME1_COMMON1_00_me1_psad_alp_x2_shift                       (8)
#define  KME_ME1_TOP1_ME1_COMMON1_00_me1_psad_alp_x1_shift                       (0)
#define  KME_ME1_TOP1_ME1_COMMON1_00_me1_psad_alp_y1_mask                        (0x3F000000)
#define  KME_ME1_TOP1_ME1_COMMON1_00_me1_psad_alp_x3_mask                        (0x00FF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_00_me1_psad_alp_x2_mask                        (0x0000FF00)
#define  KME_ME1_TOP1_ME1_COMMON1_00_me1_psad_alp_x1_mask                        (0x000000FF)
#define  KME_ME1_TOP1_ME1_COMMON1_00_me1_psad_alp_y1(data)                       (0x3F000000&((data)<<24))
#define  KME_ME1_TOP1_ME1_COMMON1_00_me1_psad_alp_x3(data)                       (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_00_me1_psad_alp_x2(data)                       (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP1_ME1_COMMON1_00_me1_psad_alp_x1(data)                       (0x000000FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_00_get_me1_psad_alp_y1(data)                   ((0x3F000000&(data))>>24)
#define  KME_ME1_TOP1_ME1_COMMON1_00_get_me1_psad_alp_x3(data)                   ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_00_get_me1_psad_alp_x2(data)                   ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP1_ME1_COMMON1_00_get_me1_psad_alp_x1(data)                   (0x000000FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_01                                            0x1809C504
#define  KME_ME1_TOP1_ME1_COMMON1_01_reg_addr                                    "0xB809C504"
#define  KME_ME1_TOP1_ME1_COMMON1_01_reg                                         0xB809C504
#define  KME_ME1_TOP1_ME1_COMMON1_01_inst_addr                                   "0x0001"
#define  set_KME_ME1_TOP1_ME1_COMMON1_01_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_01_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_01_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_01_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_01_me1_psad_alp_slope2_shift                   (21)
#define  KME_ME1_TOP1_ME1_COMMON1_01_me1_psad_alp_slope1_shift                   (12)
#define  KME_ME1_TOP1_ME1_COMMON1_01_me1_psad_alp_y3_shift                       (6)
#define  KME_ME1_TOP1_ME1_COMMON1_01_me1_psad_alp_y2_shift                       (0)
#define  KME_ME1_TOP1_ME1_COMMON1_01_me1_psad_alp_slope2_mask                    (0x3FE00000)
#define  KME_ME1_TOP1_ME1_COMMON1_01_me1_psad_alp_slope1_mask                    (0x001FF000)
#define  KME_ME1_TOP1_ME1_COMMON1_01_me1_psad_alp_y3_mask                        (0x00000FC0)
#define  KME_ME1_TOP1_ME1_COMMON1_01_me1_psad_alp_y2_mask                        (0x0000003F)
#define  KME_ME1_TOP1_ME1_COMMON1_01_me1_psad_alp_slope2(data)                   (0x3FE00000&((data)<<21))
#define  KME_ME1_TOP1_ME1_COMMON1_01_me1_psad_alp_slope1(data)                   (0x001FF000&((data)<<12))
#define  KME_ME1_TOP1_ME1_COMMON1_01_me1_psad_alp_y3(data)                       (0x00000FC0&((data)<<6))
#define  KME_ME1_TOP1_ME1_COMMON1_01_me1_psad_alp_y2(data)                       (0x0000003F&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_01_get_me1_psad_alp_slope2(data)               ((0x3FE00000&(data))>>21)
#define  KME_ME1_TOP1_ME1_COMMON1_01_get_me1_psad_alp_slope1(data)               ((0x001FF000&(data))>>12)
#define  KME_ME1_TOP1_ME1_COMMON1_01_get_me1_psad_alp_y3(data)                   ((0x00000FC0&(data))>>6)
#define  KME_ME1_TOP1_ME1_COMMON1_01_get_me1_psad_alp_y2(data)                   (0x0000003F&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_02                                            0x1809C508
#define  KME_ME1_TOP1_ME1_COMMON1_02_reg_addr                                    "0xB809C508"
#define  KME_ME1_TOP1_ME1_COMMON1_02_reg                                         0xB809C508
#define  KME_ME1_TOP1_ME1_COMMON1_02_inst_addr                                   "0x0002"
#define  set_KME_ME1_TOP1_ME1_COMMON1_02_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_02_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_02_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_02_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_02_me1_mvd_alp_x4_shift                        (24)
#define  KME_ME1_TOP1_ME1_COMMON1_02_me1_mvd_alp_x3_shift                        (16)
#define  KME_ME1_TOP1_ME1_COMMON1_02_me1_mvd_alp_x2_shift                        (8)
#define  KME_ME1_TOP1_ME1_COMMON1_02_me1_mvd_alp_x1_shift                        (0)
#define  KME_ME1_TOP1_ME1_COMMON1_02_me1_mvd_alp_x4_mask                         (0xFF000000)
#define  KME_ME1_TOP1_ME1_COMMON1_02_me1_mvd_alp_x3_mask                         (0x00FF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_02_me1_mvd_alp_x2_mask                         (0x0000FF00)
#define  KME_ME1_TOP1_ME1_COMMON1_02_me1_mvd_alp_x1_mask                         (0x000000FF)
#define  KME_ME1_TOP1_ME1_COMMON1_02_me1_mvd_alp_x4(data)                        (0xFF000000&((data)<<24))
#define  KME_ME1_TOP1_ME1_COMMON1_02_me1_mvd_alp_x3(data)                        (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_02_me1_mvd_alp_x2(data)                        (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP1_ME1_COMMON1_02_me1_mvd_alp_x1(data)                        (0x000000FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_02_get_me1_mvd_alp_x4(data)                    ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP1_ME1_COMMON1_02_get_me1_mvd_alp_x3(data)                    ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_02_get_me1_mvd_alp_x2(data)                    ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP1_ME1_COMMON1_02_get_me1_mvd_alp_x1(data)                    (0x000000FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_03                                            0x1809C50C
#define  KME_ME1_TOP1_ME1_COMMON1_03_reg_addr                                    "0xB809C50C"
#define  KME_ME1_TOP1_ME1_COMMON1_03_reg                                         0xB809C50C
#define  KME_ME1_TOP1_ME1_COMMON1_03_inst_addr                                   "0x0003"
#define  set_KME_ME1_TOP1_ME1_COMMON1_03_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_03_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_03_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_03_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_03_me1_mvd_alp_y4_shift                        (26)
#define  KME_ME1_TOP1_ME1_COMMON1_03_me1_mvd_alp_y3_shift                        (20)
#define  KME_ME1_TOP1_ME1_COMMON1_03_me1_mvd_alp_y2_shift                        (14)
#define  KME_ME1_TOP1_ME1_COMMON1_03_me1_mvd_alp_y1_shift                        (8)
#define  KME_ME1_TOP1_ME1_COMMON1_03_me1_mvd_alp_x5_shift                        (0)
#define  KME_ME1_TOP1_ME1_COMMON1_03_me1_mvd_alp_y4_mask                         (0xFC000000)
#define  KME_ME1_TOP1_ME1_COMMON1_03_me1_mvd_alp_y3_mask                         (0x03F00000)
#define  KME_ME1_TOP1_ME1_COMMON1_03_me1_mvd_alp_y2_mask                         (0x000FC000)
#define  KME_ME1_TOP1_ME1_COMMON1_03_me1_mvd_alp_y1_mask                         (0x00003F00)
#define  KME_ME1_TOP1_ME1_COMMON1_03_me1_mvd_alp_x5_mask                         (0x000000FF)
#define  KME_ME1_TOP1_ME1_COMMON1_03_me1_mvd_alp_y4(data)                        (0xFC000000&((data)<<26))
#define  KME_ME1_TOP1_ME1_COMMON1_03_me1_mvd_alp_y3(data)                        (0x03F00000&((data)<<20))
#define  KME_ME1_TOP1_ME1_COMMON1_03_me1_mvd_alp_y2(data)                        (0x000FC000&((data)<<14))
#define  KME_ME1_TOP1_ME1_COMMON1_03_me1_mvd_alp_y1(data)                        (0x00003F00&((data)<<8))
#define  KME_ME1_TOP1_ME1_COMMON1_03_me1_mvd_alp_x5(data)                        (0x000000FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_03_get_me1_mvd_alp_y4(data)                    ((0xFC000000&(data))>>26)
#define  KME_ME1_TOP1_ME1_COMMON1_03_get_me1_mvd_alp_y3(data)                    ((0x03F00000&(data))>>20)
#define  KME_ME1_TOP1_ME1_COMMON1_03_get_me1_mvd_alp_y2(data)                    ((0x000FC000&(data))>>14)
#define  KME_ME1_TOP1_ME1_COMMON1_03_get_me1_mvd_alp_y1(data)                    ((0x00003F00&(data))>>8)
#define  KME_ME1_TOP1_ME1_COMMON1_03_get_me1_mvd_alp_x5(data)                    (0x000000FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_04                                            0x1809C510
#define  KME_ME1_TOP1_ME1_COMMON1_04_reg_addr                                    "0xB809C510"
#define  KME_ME1_TOP1_ME1_COMMON1_04_reg                                         0xB809C510
#define  KME_ME1_TOP1_ME1_COMMON1_04_inst_addr                                   "0x0004"
#define  set_KME_ME1_TOP1_ME1_COMMON1_04_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_04_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_04_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_04_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_04_me1_mvd_alp_slope2_shift                    (15)
#define  KME_ME1_TOP1_ME1_COMMON1_04_me1_mvd_alp_slope1_shift                    (6)
#define  KME_ME1_TOP1_ME1_COMMON1_04_me1_mvd_alp_y5_shift                        (0)
#define  KME_ME1_TOP1_ME1_COMMON1_04_me1_mvd_alp_slope2_mask                     (0x00FF8000)
#define  KME_ME1_TOP1_ME1_COMMON1_04_me1_mvd_alp_slope1_mask                     (0x00007FC0)
#define  KME_ME1_TOP1_ME1_COMMON1_04_me1_mvd_alp_y5_mask                         (0x0000003F)
#define  KME_ME1_TOP1_ME1_COMMON1_04_me1_mvd_alp_slope2(data)                    (0x00FF8000&((data)<<15))
#define  KME_ME1_TOP1_ME1_COMMON1_04_me1_mvd_alp_slope1(data)                    (0x00007FC0&((data)<<6))
#define  KME_ME1_TOP1_ME1_COMMON1_04_me1_mvd_alp_y5(data)                        (0x0000003F&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_04_get_me1_mvd_alp_slope2(data)                ((0x00FF8000&(data))>>15)
#define  KME_ME1_TOP1_ME1_COMMON1_04_get_me1_mvd_alp_slope1(data)                ((0x00007FC0&(data))>>6)
#define  KME_ME1_TOP1_ME1_COMMON1_04_get_me1_mvd_alp_y5(data)                    (0x0000003F&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_05                                            0x1809C514
#define  KME_ME1_TOP1_ME1_COMMON1_05_reg_addr                                    "0xB809C514"
#define  KME_ME1_TOP1_ME1_COMMON1_05_reg                                         0xB809C514
#define  KME_ME1_TOP1_ME1_COMMON1_05_inst_addr                                   "0x0005"
#define  set_KME_ME1_TOP1_ME1_COMMON1_05_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_05_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_05_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_05_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_05_me1_mvd_alp_slope4_shift                    (9)
#define  KME_ME1_TOP1_ME1_COMMON1_05_me1_mvd_alp_slope3_shift                    (0)
#define  KME_ME1_TOP1_ME1_COMMON1_05_me1_mvd_alp_slope4_mask                     (0x0003FE00)
#define  KME_ME1_TOP1_ME1_COMMON1_05_me1_mvd_alp_slope3_mask                     (0x000001FF)
#define  KME_ME1_TOP1_ME1_COMMON1_05_me1_mvd_alp_slope4(data)                    (0x0003FE00&((data)<<9))
#define  KME_ME1_TOP1_ME1_COMMON1_05_me1_mvd_alp_slope3(data)                    (0x000001FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_05_get_me1_mvd_alp_slope4(data)                ((0x0003FE00&(data))>>9)
#define  KME_ME1_TOP1_ME1_COMMON1_05_get_me1_mvd_alp_slope3(data)                (0x000001FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_06                                            0x1809C518
#define  KME_ME1_TOP1_ME1_COMMON1_06_reg_addr                                    "0xB809C518"
#define  KME_ME1_TOP1_ME1_COMMON1_06_reg                                         0xB809C518
#define  KME_ME1_TOP1_ME1_COMMON1_06_inst_addr                                   "0x0006"
#define  set_KME_ME1_TOP1_ME1_COMMON1_06_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_06_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_06_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_06_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_06_me1_mvd_cuv_x3_shift                        (20)
#define  KME_ME1_TOP1_ME1_COMMON1_06_me1_mvd_cuv_x2_shift                        (10)
#define  KME_ME1_TOP1_ME1_COMMON1_06_me1_mvd_cuv_x1_shift                        (0)
#define  KME_ME1_TOP1_ME1_COMMON1_06_me1_mvd_cuv_x3_mask                         (0x3FF00000)
#define  KME_ME1_TOP1_ME1_COMMON1_06_me1_mvd_cuv_x2_mask                         (0x000FFC00)
#define  KME_ME1_TOP1_ME1_COMMON1_06_me1_mvd_cuv_x1_mask                         (0x000003FF)
#define  KME_ME1_TOP1_ME1_COMMON1_06_me1_mvd_cuv_x3(data)                        (0x3FF00000&((data)<<20))
#define  KME_ME1_TOP1_ME1_COMMON1_06_me1_mvd_cuv_x2(data)                        (0x000FFC00&((data)<<10))
#define  KME_ME1_TOP1_ME1_COMMON1_06_me1_mvd_cuv_x1(data)                        (0x000003FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_06_get_me1_mvd_cuv_x3(data)                    ((0x3FF00000&(data))>>20)
#define  KME_ME1_TOP1_ME1_COMMON1_06_get_me1_mvd_cuv_x2(data)                    ((0x000FFC00&(data))>>10)
#define  KME_ME1_TOP1_ME1_COMMON1_06_get_me1_mvd_cuv_x1(data)                    (0x000003FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_07                                            0x1809C51C
#define  KME_ME1_TOP1_ME1_COMMON1_07_reg_addr                                    "0xB809C51C"
#define  KME_ME1_TOP1_ME1_COMMON1_07_reg                                         0xB809C51C
#define  KME_ME1_TOP1_ME1_COMMON1_07_inst_addr                                   "0x0007"
#define  set_KME_ME1_TOP1_ME1_COMMON1_07_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_07_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_07_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_07_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_07_me1_mvd_cuv_y3_shift                        (20)
#define  KME_ME1_TOP1_ME1_COMMON1_07_me1_mvd_cuv_y2_shift                        (10)
#define  KME_ME1_TOP1_ME1_COMMON1_07_me1_mvd_cuv_y1_shift                        (0)
#define  KME_ME1_TOP1_ME1_COMMON1_07_me1_mvd_cuv_y3_mask                         (0x3FF00000)
#define  KME_ME1_TOP1_ME1_COMMON1_07_me1_mvd_cuv_y2_mask                         (0x000FFC00)
#define  KME_ME1_TOP1_ME1_COMMON1_07_me1_mvd_cuv_y1_mask                         (0x000003FF)
#define  KME_ME1_TOP1_ME1_COMMON1_07_me1_mvd_cuv_y3(data)                        (0x3FF00000&((data)<<20))
#define  KME_ME1_TOP1_ME1_COMMON1_07_me1_mvd_cuv_y2(data)                        (0x000FFC00&((data)<<10))
#define  KME_ME1_TOP1_ME1_COMMON1_07_me1_mvd_cuv_y1(data)                        (0x000003FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_07_get_me1_mvd_cuv_y3(data)                    ((0x3FF00000&(data))>>20)
#define  KME_ME1_TOP1_ME1_COMMON1_07_get_me1_mvd_cuv_y2(data)                    ((0x000FFC00&(data))>>10)
#define  KME_ME1_TOP1_ME1_COMMON1_07_get_me1_mvd_cuv_y1(data)                    (0x000003FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_08                                            0x1809C520
#define  KME_ME1_TOP1_ME1_COMMON1_08_reg_addr                                    "0xB809C520"
#define  KME_ME1_TOP1_ME1_COMMON1_08_reg                                         0xB809C520
#define  KME_ME1_TOP1_ME1_COMMON1_08_inst_addr                                   "0x0008"
#define  set_KME_ME1_TOP1_ME1_COMMON1_08_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_08_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_08_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_08_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_08_me1_mvd_cuv_slope2_shift                    (13)
#define  KME_ME1_TOP1_ME1_COMMON1_08_me1_mvd_cuv_slope1_shift                    (0)
#define  KME_ME1_TOP1_ME1_COMMON1_08_me1_mvd_cuv_slope2_mask                     (0x03FFE000)
#define  KME_ME1_TOP1_ME1_COMMON1_08_me1_mvd_cuv_slope1_mask                     (0x00001FFF)
#define  KME_ME1_TOP1_ME1_COMMON1_08_me1_mvd_cuv_slope2(data)                    (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP1_ME1_COMMON1_08_me1_mvd_cuv_slope1(data)                    (0x00001FFF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_08_get_me1_mvd_cuv_slope2(data)                ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP1_ME1_COMMON1_08_get_me1_mvd_cuv_slope1(data)                (0x00001FFF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_09                                            0x1809C524
#define  KME_ME1_TOP1_ME1_COMMON1_09_reg_addr                                    "0xB809C524"
#define  KME_ME1_TOP1_ME1_COMMON1_09_reg                                         0xB809C524
#define  KME_ME1_TOP1_ME1_COMMON1_09_inst_addr                                   "0x0009"
#define  set_KME_ME1_TOP1_ME1_COMMON1_09_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_09_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_09_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_09_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_09_me1_mvd_dgain_x4_shift                      (24)
#define  KME_ME1_TOP1_ME1_COMMON1_09_me1_mvd_dgain_x3_shift                      (16)
#define  KME_ME1_TOP1_ME1_COMMON1_09_me1_mvd_dgain_x2_shift                      (8)
#define  KME_ME1_TOP1_ME1_COMMON1_09_me1_mvd_dgain_x1_shift                      (0)
#define  KME_ME1_TOP1_ME1_COMMON1_09_me1_mvd_dgain_x4_mask                       (0xFF000000)
#define  KME_ME1_TOP1_ME1_COMMON1_09_me1_mvd_dgain_x3_mask                       (0x00FF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_09_me1_mvd_dgain_x2_mask                       (0x0000FF00)
#define  KME_ME1_TOP1_ME1_COMMON1_09_me1_mvd_dgain_x1_mask                       (0x000000FF)
#define  KME_ME1_TOP1_ME1_COMMON1_09_me1_mvd_dgain_x4(data)                      (0xFF000000&((data)<<24))
#define  KME_ME1_TOP1_ME1_COMMON1_09_me1_mvd_dgain_x3(data)                      (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_09_me1_mvd_dgain_x2(data)                      (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP1_ME1_COMMON1_09_me1_mvd_dgain_x1(data)                      (0x000000FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_09_get_me1_mvd_dgain_x4(data)                  ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP1_ME1_COMMON1_09_get_me1_mvd_dgain_x3(data)                  ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_09_get_me1_mvd_dgain_x2(data)                  ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP1_ME1_COMMON1_09_get_me1_mvd_dgain_x1(data)                  (0x000000FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_10                                            0x1809C528
#define  KME_ME1_TOP1_ME1_COMMON1_10_reg_addr                                    "0xB809C528"
#define  KME_ME1_TOP1_ME1_COMMON1_10_reg                                         0xB809C528
#define  KME_ME1_TOP1_ME1_COMMON1_10_inst_addr                                   "0x000A"
#define  set_KME_ME1_TOP1_ME1_COMMON1_10_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_10_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_10_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_10_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_10_me1_mvd_dgain_y2_shift                      (18)
#define  KME_ME1_TOP1_ME1_COMMON1_10_me1_mvd_dgain_y1_shift                      (8)
#define  KME_ME1_TOP1_ME1_COMMON1_10_me1_mvd_dgain_x5_shift                      (0)
#define  KME_ME1_TOP1_ME1_COMMON1_10_me1_mvd_dgain_y2_mask                       (0x0FFC0000)
#define  KME_ME1_TOP1_ME1_COMMON1_10_me1_mvd_dgain_y1_mask                       (0x0003FF00)
#define  KME_ME1_TOP1_ME1_COMMON1_10_me1_mvd_dgain_x5_mask                       (0x000000FF)
#define  KME_ME1_TOP1_ME1_COMMON1_10_me1_mvd_dgain_y2(data)                      (0x0FFC0000&((data)<<18))
#define  KME_ME1_TOP1_ME1_COMMON1_10_me1_mvd_dgain_y1(data)                      (0x0003FF00&((data)<<8))
#define  KME_ME1_TOP1_ME1_COMMON1_10_me1_mvd_dgain_x5(data)                      (0x000000FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_10_get_me1_mvd_dgain_y2(data)                  ((0x0FFC0000&(data))>>18)
#define  KME_ME1_TOP1_ME1_COMMON1_10_get_me1_mvd_dgain_y1(data)                  ((0x0003FF00&(data))>>8)
#define  KME_ME1_TOP1_ME1_COMMON1_10_get_me1_mvd_dgain_x5(data)                  (0x000000FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_11                                            0x1809C52C
#define  KME_ME1_TOP1_ME1_COMMON1_11_reg_addr                                    "0xB809C52C"
#define  KME_ME1_TOP1_ME1_COMMON1_11_reg                                         0xB809C52C
#define  KME_ME1_TOP1_ME1_COMMON1_11_inst_addr                                   "0x000B"
#define  set_KME_ME1_TOP1_ME1_COMMON1_11_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_11_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_11_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_11_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_11_me1_mvd_dgain_y5_shift                      (20)
#define  KME_ME1_TOP1_ME1_COMMON1_11_me1_mvd_dgain_y4_shift                      (10)
#define  KME_ME1_TOP1_ME1_COMMON1_11_me1_mvd_dgain_y3_shift                      (0)
#define  KME_ME1_TOP1_ME1_COMMON1_11_me1_mvd_dgain_y5_mask                       (0x3FF00000)
#define  KME_ME1_TOP1_ME1_COMMON1_11_me1_mvd_dgain_y4_mask                       (0x000FFC00)
#define  KME_ME1_TOP1_ME1_COMMON1_11_me1_mvd_dgain_y3_mask                       (0x000003FF)
#define  KME_ME1_TOP1_ME1_COMMON1_11_me1_mvd_dgain_y5(data)                      (0x3FF00000&((data)<<20))
#define  KME_ME1_TOP1_ME1_COMMON1_11_me1_mvd_dgain_y4(data)                      (0x000FFC00&((data)<<10))
#define  KME_ME1_TOP1_ME1_COMMON1_11_me1_mvd_dgain_y3(data)                      (0x000003FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_11_get_me1_mvd_dgain_y5(data)                  ((0x3FF00000&(data))>>20)
#define  KME_ME1_TOP1_ME1_COMMON1_11_get_me1_mvd_dgain_y4(data)                  ((0x000FFC00&(data))>>10)
#define  KME_ME1_TOP1_ME1_COMMON1_11_get_me1_mvd_dgain_y3(data)                  (0x000003FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_12                                            0x1809C530
#define  KME_ME1_TOP1_ME1_COMMON1_12_reg_addr                                    "0xB809C530"
#define  KME_ME1_TOP1_ME1_COMMON1_12_reg                                         0xB809C530
#define  KME_ME1_TOP1_ME1_COMMON1_12_inst_addr                                   "0x000C"
#define  set_KME_ME1_TOP1_ME1_COMMON1_12_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_12_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_12_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_12_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_12_me1_mvd_dgain_slope2_shift                  (16)
#define  KME_ME1_TOP1_ME1_COMMON1_12_me1_mvd_dgain_slope1_shift                  (0)
#define  KME_ME1_TOP1_ME1_COMMON1_12_me1_mvd_dgain_slope2_mask                   (0xFFFF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_12_me1_mvd_dgain_slope1_mask                   (0x0000FFFF)
#define  KME_ME1_TOP1_ME1_COMMON1_12_me1_mvd_dgain_slope2(data)                  (0xFFFF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_12_me1_mvd_dgain_slope1(data)                  (0x0000FFFF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_12_get_me1_mvd_dgain_slope2(data)              ((0xFFFF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_12_get_me1_mvd_dgain_slope1(data)              (0x0000FFFF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_13                                            0x1809C534
#define  KME_ME1_TOP1_ME1_COMMON1_13_reg_addr                                    "0xB809C534"
#define  KME_ME1_TOP1_ME1_COMMON1_13_reg                                         0xB809C534
#define  KME_ME1_TOP1_ME1_COMMON1_13_inst_addr                                   "0x000D"
#define  set_KME_ME1_TOP1_ME1_COMMON1_13_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_13_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_13_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_13_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_13_me1_mvd_dgain_slope4_shift                  (16)
#define  KME_ME1_TOP1_ME1_COMMON1_13_me1_mvd_dgain_slope3_shift                  (0)
#define  KME_ME1_TOP1_ME1_COMMON1_13_me1_mvd_dgain_slope4_mask                   (0xFFFF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_13_me1_mvd_dgain_slope3_mask                   (0x0000FFFF)
#define  KME_ME1_TOP1_ME1_COMMON1_13_me1_mvd_dgain_slope4(data)                  (0xFFFF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_13_me1_mvd_dgain_slope3(data)                  (0x0000FFFF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_13_get_me1_mvd_dgain_slope4(data)              ((0xFFFF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_13_get_me1_mvd_dgain_slope3(data)              (0x0000FFFF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_14                                            0x1809C538
#define  KME_ME1_TOP1_ME1_COMMON1_14_reg_addr                                    "0xB809C538"
#define  KME_ME1_TOP1_ME1_COMMON1_14_reg                                         0xB809C538
#define  KME_ME1_TOP1_ME1_COMMON1_14_inst_addr                                   "0x000E"
#define  set_KME_ME1_TOP1_ME1_COMMON1_14_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_14_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_14_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_14_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_14_me1_mvd_pgain_x3_shift                      (20)
#define  KME_ME1_TOP1_ME1_COMMON1_14_me1_mvd_pgain_x2_shift                      (10)
#define  KME_ME1_TOP1_ME1_COMMON1_14_me1_mvd_pgain_x1_shift                      (0)
#define  KME_ME1_TOP1_ME1_COMMON1_14_me1_mvd_pgain_x3_mask                       (0x3FF00000)
#define  KME_ME1_TOP1_ME1_COMMON1_14_me1_mvd_pgain_x2_mask                       (0x000FFC00)
#define  KME_ME1_TOP1_ME1_COMMON1_14_me1_mvd_pgain_x1_mask                       (0x000003FF)
#define  KME_ME1_TOP1_ME1_COMMON1_14_me1_mvd_pgain_x3(data)                      (0x3FF00000&((data)<<20))
#define  KME_ME1_TOP1_ME1_COMMON1_14_me1_mvd_pgain_x2(data)                      (0x000FFC00&((data)<<10))
#define  KME_ME1_TOP1_ME1_COMMON1_14_me1_mvd_pgain_x1(data)                      (0x000003FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_14_get_me1_mvd_pgain_x3(data)                  ((0x3FF00000&(data))>>20)
#define  KME_ME1_TOP1_ME1_COMMON1_14_get_me1_mvd_pgain_x2(data)                  ((0x000FFC00&(data))>>10)
#define  KME_ME1_TOP1_ME1_COMMON1_14_get_me1_mvd_pgain_x1(data)                  (0x000003FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_15                                            0x1809C53C
#define  KME_ME1_TOP1_ME1_COMMON1_15_reg_addr                                    "0xB809C53C"
#define  KME_ME1_TOP1_ME1_COMMON1_15_reg                                         0xB809C53C
#define  KME_ME1_TOP1_ME1_COMMON1_15_inst_addr                                   "0x000F"
#define  set_KME_ME1_TOP1_ME1_COMMON1_15_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_15_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_15_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_15_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_15_me1_mvd_pgain_slope1_shift                  (18)
#define  KME_ME1_TOP1_ME1_COMMON1_15_me1_mvd_pgain_y3_shift                      (12)
#define  KME_ME1_TOP1_ME1_COMMON1_15_me1_mvd_pgain_y2_shift                      (6)
#define  KME_ME1_TOP1_ME1_COMMON1_15_me1_mvd_pgain_y1_shift                      (0)
#define  KME_ME1_TOP1_ME1_COMMON1_15_me1_mvd_pgain_slope1_mask                   (0x07FC0000)
#define  KME_ME1_TOP1_ME1_COMMON1_15_me1_mvd_pgain_y3_mask                       (0x0003F000)
#define  KME_ME1_TOP1_ME1_COMMON1_15_me1_mvd_pgain_y2_mask                       (0x00000FC0)
#define  KME_ME1_TOP1_ME1_COMMON1_15_me1_mvd_pgain_y1_mask                       (0x0000003F)
#define  KME_ME1_TOP1_ME1_COMMON1_15_me1_mvd_pgain_slope1(data)                  (0x07FC0000&((data)<<18))
#define  KME_ME1_TOP1_ME1_COMMON1_15_me1_mvd_pgain_y3(data)                      (0x0003F000&((data)<<12))
#define  KME_ME1_TOP1_ME1_COMMON1_15_me1_mvd_pgain_y2(data)                      (0x00000FC0&((data)<<6))
#define  KME_ME1_TOP1_ME1_COMMON1_15_me1_mvd_pgain_y1(data)                      (0x0000003F&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_15_get_me1_mvd_pgain_slope1(data)              ((0x07FC0000&(data))>>18)
#define  KME_ME1_TOP1_ME1_COMMON1_15_get_me1_mvd_pgain_y3(data)                  ((0x0003F000&(data))>>12)
#define  KME_ME1_TOP1_ME1_COMMON1_15_get_me1_mvd_pgain_y2(data)                  ((0x00000FC0&(data))>>6)
#define  KME_ME1_TOP1_ME1_COMMON1_15_get_me1_mvd_pgain_y1(data)                  (0x0000003F&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_16                                            0x1809C540
#define  KME_ME1_TOP1_ME1_COMMON1_16_reg_addr                                    "0xB809C540"
#define  KME_ME1_TOP1_ME1_COMMON1_16_reg                                         0xB809C540
#define  KME_ME1_TOP1_ME1_COMMON1_16_inst_addr                                   "0x0010"
#define  set_KME_ME1_TOP1_ME1_COMMON1_16_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_16_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_16_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_16_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_16_me1_gmvd_ucf_x2_shift                       (22)
#define  KME_ME1_TOP1_ME1_COMMON1_16_me1_gmvd_ucf_x1_shift                       (12)
#define  KME_ME1_TOP1_ME1_COMMON1_16_me1_mvd_pgain_slope2_shift                  (0)
#define  KME_ME1_TOP1_ME1_COMMON1_16_me1_gmvd_ucf_x2_mask                        (0xFFC00000)
#define  KME_ME1_TOP1_ME1_COMMON1_16_me1_gmvd_ucf_x1_mask                        (0x003FF000)
#define  KME_ME1_TOP1_ME1_COMMON1_16_me1_mvd_pgain_slope2_mask                   (0x000001FF)
#define  KME_ME1_TOP1_ME1_COMMON1_16_me1_gmvd_ucf_x2(data)                       (0xFFC00000&((data)<<22))
#define  KME_ME1_TOP1_ME1_COMMON1_16_me1_gmvd_ucf_x1(data)                       (0x003FF000&((data)<<12))
#define  KME_ME1_TOP1_ME1_COMMON1_16_me1_mvd_pgain_slope2(data)                  (0x000001FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_16_get_me1_gmvd_ucf_x2(data)                   ((0xFFC00000&(data))>>22)
#define  KME_ME1_TOP1_ME1_COMMON1_16_get_me1_gmvd_ucf_x1(data)                   ((0x003FF000&(data))>>12)
#define  KME_ME1_TOP1_ME1_COMMON1_16_get_me1_mvd_pgain_slope2(data)              (0x000001FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_17                                            0x1809C544
#define  KME_ME1_TOP1_ME1_COMMON1_17_reg_addr                                    "0xB809C544"
#define  KME_ME1_TOP1_ME1_COMMON1_17_reg                                         0xB809C544
#define  KME_ME1_TOP1_ME1_COMMON1_17_inst_addr                                   "0x0011"
#define  set_KME_ME1_TOP1_ME1_COMMON1_17_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_17_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_17_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_17_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_17_me1_gmvd_ucf_y2_shift                       (24)
#define  KME_ME1_TOP1_ME1_COMMON1_17_me1_gmvd_ucf_y1_shift                       (16)
#define  KME_ME1_TOP1_ME1_COMMON1_17_me1_gmvd_ucf_x3_shift                       (0)
#define  KME_ME1_TOP1_ME1_COMMON1_17_me1_gmvd_ucf_y2_mask                        (0xFF000000)
#define  KME_ME1_TOP1_ME1_COMMON1_17_me1_gmvd_ucf_y1_mask                        (0x00FF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_17_me1_gmvd_ucf_x3_mask                        (0x000003FF)
#define  KME_ME1_TOP1_ME1_COMMON1_17_me1_gmvd_ucf_y2(data)                       (0xFF000000&((data)<<24))
#define  KME_ME1_TOP1_ME1_COMMON1_17_me1_gmvd_ucf_y1(data)                       (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_17_me1_gmvd_ucf_x3(data)                       (0x000003FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_17_get_me1_gmvd_ucf_y2(data)                   ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP1_ME1_COMMON1_17_get_me1_gmvd_ucf_y1(data)                   ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_17_get_me1_gmvd_ucf_x3(data)                   (0x000003FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_18                                            0x1809C548
#define  KME_ME1_TOP1_ME1_COMMON1_18_reg_addr                                    "0xB809C548"
#define  KME_ME1_TOP1_ME1_COMMON1_18_reg                                         0xB809C548
#define  KME_ME1_TOP1_ME1_COMMON1_18_inst_addr                                   "0x0012"
#define  set_KME_ME1_TOP1_ME1_COMMON1_18_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_18_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_18_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_18_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_18_me1_gmvd_ucf_slope2_shift                   (20)
#define  KME_ME1_TOP1_ME1_COMMON1_18_me1_gmvd_ucf_slope1_shift                   (8)
#define  KME_ME1_TOP1_ME1_COMMON1_18_me1_gmvd_ucf_y3_shift                       (0)
#define  KME_ME1_TOP1_ME1_COMMON1_18_me1_gmvd_ucf_slope2_mask                    (0x7FF00000)
#define  KME_ME1_TOP1_ME1_COMMON1_18_me1_gmvd_ucf_slope1_mask                    (0x0007FF00)
#define  KME_ME1_TOP1_ME1_COMMON1_18_me1_gmvd_ucf_y3_mask                        (0x000000FF)
#define  KME_ME1_TOP1_ME1_COMMON1_18_me1_gmvd_ucf_slope2(data)                   (0x7FF00000&((data)<<20))
#define  KME_ME1_TOP1_ME1_COMMON1_18_me1_gmvd_ucf_slope1(data)                   (0x0007FF00&((data)<<8))
#define  KME_ME1_TOP1_ME1_COMMON1_18_me1_gmvd_ucf_y3(data)                       (0x000000FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_18_get_me1_gmvd_ucf_slope2(data)               ((0x7FF00000&(data))>>20)
#define  KME_ME1_TOP1_ME1_COMMON1_18_get_me1_gmvd_ucf_slope1(data)               ((0x0007FF00&(data))>>8)
#define  KME_ME1_TOP1_ME1_COMMON1_18_get_me1_gmvd_ucf_y3(data)                   (0x000000FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_19                                            0x1809C54C
#define  KME_ME1_TOP1_ME1_COMMON1_19_reg_addr                                    "0xB809C54C"
#define  KME_ME1_TOP1_ME1_COMMON1_19_reg                                         0xB809C54C
#define  KME_ME1_TOP1_ME1_COMMON1_19_inst_addr                                   "0x0013"
#define  set_KME_ME1_TOP1_ME1_COMMON1_19_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_19_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_19_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_19_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_19_me1_gmvd_cnt_x2_shift                       (12)
#define  KME_ME1_TOP1_ME1_COMMON1_19_me1_gmvd_cnt_x1_shift                       (0)
#define  KME_ME1_TOP1_ME1_COMMON1_19_me1_gmvd_cnt_x2_mask                        (0x00FFF000)
#define  KME_ME1_TOP1_ME1_COMMON1_19_me1_gmvd_cnt_x1_mask                        (0x00000FFF)
#define  KME_ME1_TOP1_ME1_COMMON1_19_me1_gmvd_cnt_x2(data)                       (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP1_ME1_COMMON1_19_me1_gmvd_cnt_x1(data)                       (0x00000FFF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_19_get_me1_gmvd_cnt_x2(data)                   ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP1_ME1_COMMON1_19_get_me1_gmvd_cnt_x1(data)                   (0x00000FFF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_20                                            0x1809C550
#define  KME_ME1_TOP1_ME1_COMMON1_20_reg_addr                                    "0xB809C550"
#define  KME_ME1_TOP1_ME1_COMMON1_20_reg                                         0xB809C550
#define  KME_ME1_TOP1_ME1_COMMON1_20_inst_addr                                   "0x0014"
#define  set_KME_ME1_TOP1_ME1_COMMON1_20_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_20_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_20_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_20_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_20_me1_gmvd_cnt_y2_shift                       (24)
#define  KME_ME1_TOP1_ME1_COMMON1_20_me1_gmvd_cnt_y1_shift                       (16)
#define  KME_ME1_TOP1_ME1_COMMON1_20_me1_gmvd_cnt_x3_shift                       (0)
#define  KME_ME1_TOP1_ME1_COMMON1_20_me1_gmvd_cnt_y2_mask                        (0xFF000000)
#define  KME_ME1_TOP1_ME1_COMMON1_20_me1_gmvd_cnt_y1_mask                        (0x00FF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_20_me1_gmvd_cnt_x3_mask                        (0x00000FFF)
#define  KME_ME1_TOP1_ME1_COMMON1_20_me1_gmvd_cnt_y2(data)                       (0xFF000000&((data)<<24))
#define  KME_ME1_TOP1_ME1_COMMON1_20_me1_gmvd_cnt_y1(data)                       (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_20_me1_gmvd_cnt_x3(data)                       (0x00000FFF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_20_get_me1_gmvd_cnt_y2(data)                   ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP1_ME1_COMMON1_20_get_me1_gmvd_cnt_y1(data)                   ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_20_get_me1_gmvd_cnt_x3(data)                   (0x00000FFF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_21                                            0x1809C554
#define  KME_ME1_TOP1_ME1_COMMON1_21_reg_addr                                    "0xB809C554"
#define  KME_ME1_TOP1_ME1_COMMON1_21_reg                                         0xB809C554
#define  KME_ME1_TOP1_ME1_COMMON1_21_inst_addr                                   "0x0015"
#define  set_KME_ME1_TOP1_ME1_COMMON1_21_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_21_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_21_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_21_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_21_me1_gmvd_cnt_slope2_shift                   (20)
#define  KME_ME1_TOP1_ME1_COMMON1_21_me1_gmvd_cnt_slope1_shift                   (8)
#define  KME_ME1_TOP1_ME1_COMMON1_21_me1_gmvd_cnt_y3_shift                       (0)
#define  KME_ME1_TOP1_ME1_COMMON1_21_me1_gmvd_cnt_slope2_mask                    (0x7FF00000)
#define  KME_ME1_TOP1_ME1_COMMON1_21_me1_gmvd_cnt_slope1_mask                    (0x0007FF00)
#define  KME_ME1_TOP1_ME1_COMMON1_21_me1_gmvd_cnt_y3_mask                        (0x000000FF)
#define  KME_ME1_TOP1_ME1_COMMON1_21_me1_gmvd_cnt_slope2(data)                   (0x7FF00000&((data)<<20))
#define  KME_ME1_TOP1_ME1_COMMON1_21_me1_gmvd_cnt_slope1(data)                   (0x0007FF00&((data)<<8))
#define  KME_ME1_TOP1_ME1_COMMON1_21_me1_gmvd_cnt_y3(data)                       (0x000000FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_21_get_me1_gmvd_cnt_slope2(data)               ((0x7FF00000&(data))>>20)
#define  KME_ME1_TOP1_ME1_COMMON1_21_get_me1_gmvd_cnt_slope1(data)               ((0x0007FF00&(data))>>8)
#define  KME_ME1_TOP1_ME1_COMMON1_21_get_me1_gmvd_cnt_y3(data)                   (0x000000FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_22                                            0x1809C558
#define  KME_ME1_TOP1_ME1_COMMON1_22_reg_addr                                    "0xB809C558"
#define  KME_ME1_TOP1_ME1_COMMON1_22_reg                                         0xB809C558
#define  KME_ME1_TOP1_ME1_COMMON1_22_inst_addr                                   "0x0016"
#define  set_KME_ME1_TOP1_ME1_COMMON1_22_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_22_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_22_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_22_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_22_me1_adptpnt_rnd_x4_shift                    (24)
#define  KME_ME1_TOP1_ME1_COMMON1_22_me1_adptpnt_rnd_x3_shift                    (16)
#define  KME_ME1_TOP1_ME1_COMMON1_22_me1_adptpnt_rnd_x2_shift                    (8)
#define  KME_ME1_TOP1_ME1_COMMON1_22_me1_adptpnt_rnd_x1_shift                    (0)
#define  KME_ME1_TOP1_ME1_COMMON1_22_me1_adptpnt_rnd_x4_mask                     (0xFF000000)
#define  KME_ME1_TOP1_ME1_COMMON1_22_me1_adptpnt_rnd_x3_mask                     (0x00FF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_22_me1_adptpnt_rnd_x2_mask                     (0x0000FF00)
#define  KME_ME1_TOP1_ME1_COMMON1_22_me1_adptpnt_rnd_x1_mask                     (0x000000FF)
#define  KME_ME1_TOP1_ME1_COMMON1_22_me1_adptpnt_rnd_x4(data)                    (0xFF000000&((data)<<24))
#define  KME_ME1_TOP1_ME1_COMMON1_22_me1_adptpnt_rnd_x3(data)                    (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_22_me1_adptpnt_rnd_x2(data)                    (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP1_ME1_COMMON1_22_me1_adptpnt_rnd_x1(data)                    (0x000000FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_22_get_me1_adptpnt_rnd_x4(data)                ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP1_ME1_COMMON1_22_get_me1_adptpnt_rnd_x3(data)                ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_22_get_me1_adptpnt_rnd_x2(data)                ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP1_ME1_COMMON1_22_get_me1_adptpnt_rnd_x1(data)                (0x000000FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_23                                            0x1809C55C
#define  KME_ME1_TOP1_ME1_COMMON1_23_reg_addr                                    "0xB809C55C"
#define  KME_ME1_TOP1_ME1_COMMON1_23_reg                                         0xB809C55C
#define  KME_ME1_TOP1_ME1_COMMON1_23_inst_addr                                   "0x0017"
#define  set_KME_ME1_TOP1_ME1_COMMON1_23_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_23_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_23_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_23_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_23_me1_adptpnt_rnd_y4_shift                    (20)
#define  KME_ME1_TOP1_ME1_COMMON1_23_me1_adptpnt_rnd_y3_shift                    (14)
#define  KME_ME1_TOP1_ME1_COMMON1_23_me1_adptpnt_rnd_y2_shift                    (8)
#define  KME_ME1_TOP1_ME1_COMMON1_23_me1_adptpnt_rnd_y1_shift                    (0)
#define  KME_ME1_TOP1_ME1_COMMON1_23_me1_adptpnt_rnd_y4_mask                     (0x03F00000)
#define  KME_ME1_TOP1_ME1_COMMON1_23_me1_adptpnt_rnd_y3_mask                     (0x000FC000)
#define  KME_ME1_TOP1_ME1_COMMON1_23_me1_adptpnt_rnd_y2_mask                     (0x00003F00)
#define  KME_ME1_TOP1_ME1_COMMON1_23_me1_adptpnt_rnd_y1_mask                     (0x0000003F)
#define  KME_ME1_TOP1_ME1_COMMON1_23_me1_adptpnt_rnd_y4(data)                    (0x03F00000&((data)<<20))
#define  KME_ME1_TOP1_ME1_COMMON1_23_me1_adptpnt_rnd_y3(data)                    (0x000FC000&((data)<<14))
#define  KME_ME1_TOP1_ME1_COMMON1_23_me1_adptpnt_rnd_y2(data)                    (0x00003F00&((data)<<8))
#define  KME_ME1_TOP1_ME1_COMMON1_23_me1_adptpnt_rnd_y1(data)                    (0x0000003F&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_23_get_me1_adptpnt_rnd_y4(data)                ((0x03F00000&(data))>>20)
#define  KME_ME1_TOP1_ME1_COMMON1_23_get_me1_adptpnt_rnd_y3(data)                ((0x000FC000&(data))>>14)
#define  KME_ME1_TOP1_ME1_COMMON1_23_get_me1_adptpnt_rnd_y2(data)                ((0x00003F00&(data))>>8)
#define  KME_ME1_TOP1_ME1_COMMON1_23_get_me1_adptpnt_rnd_y1(data)                (0x0000003F&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_24                                            0x1809C560
#define  KME_ME1_TOP1_ME1_COMMON1_24_reg_addr                                    "0xB809C560"
#define  KME_ME1_TOP1_ME1_COMMON1_24_reg                                         0xB809C560
#define  KME_ME1_TOP1_ME1_COMMON1_24_inst_addr                                   "0x0018"
#define  set_KME_ME1_TOP1_ME1_COMMON1_24_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_24_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_24_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_24_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_24_me1_adptpnt_rnd_slope3_shift                (18)
#define  KME_ME1_TOP1_ME1_COMMON1_24_me1_adptpnt_rnd_slope2_shift                (9)
#define  KME_ME1_TOP1_ME1_COMMON1_24_me1_adptpnt_rnd_slope1_shift                (0)
#define  KME_ME1_TOP1_ME1_COMMON1_24_me1_adptpnt_rnd_slope3_mask                 (0x07FC0000)
#define  KME_ME1_TOP1_ME1_COMMON1_24_me1_adptpnt_rnd_slope2_mask                 (0x0003FE00)
#define  KME_ME1_TOP1_ME1_COMMON1_24_me1_adptpnt_rnd_slope1_mask                 (0x000001FF)
#define  KME_ME1_TOP1_ME1_COMMON1_24_me1_adptpnt_rnd_slope3(data)                (0x07FC0000&((data)<<18))
#define  KME_ME1_TOP1_ME1_COMMON1_24_me1_adptpnt_rnd_slope2(data)                (0x0003FE00&((data)<<9))
#define  KME_ME1_TOP1_ME1_COMMON1_24_me1_adptpnt_rnd_slope1(data)                (0x000001FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_24_get_me1_adptpnt_rnd_slope3(data)            ((0x07FC0000&(data))>>18)
#define  KME_ME1_TOP1_ME1_COMMON1_24_get_me1_adptpnt_rnd_slope2(data)            ((0x0003FE00&(data))>>9)
#define  KME_ME1_TOP1_ME1_COMMON1_24_get_me1_adptpnt_rnd_slope1(data)            (0x000001FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_25                                            0x1809C564
#define  KME_ME1_TOP1_ME1_COMMON1_25_reg_addr                                    "0xB809C564"
#define  KME_ME1_TOP1_ME1_COMMON1_25_reg                                         0xB809C564
#define  KME_ME1_TOP1_ME1_COMMON1_25_inst_addr                                   "0x0019"
#define  set_KME_ME1_TOP1_ME1_COMMON1_25_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_25_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_25_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_25_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_25_me1_adptpnt_gmv_cnt_y1_shift                (24)
#define  KME_ME1_TOP1_ME1_COMMON1_25_me1_adptpnt_gmv_cnt_x2_shift                (12)
#define  KME_ME1_TOP1_ME1_COMMON1_25_me1_adptpnt_gmv_cnt_x1_shift                (0)
#define  KME_ME1_TOP1_ME1_COMMON1_25_me1_adptpnt_gmv_cnt_y1_mask                 (0x3F000000)
#define  KME_ME1_TOP1_ME1_COMMON1_25_me1_adptpnt_gmv_cnt_x2_mask                 (0x00FFF000)
#define  KME_ME1_TOP1_ME1_COMMON1_25_me1_adptpnt_gmv_cnt_x1_mask                 (0x00000FFF)
#define  KME_ME1_TOP1_ME1_COMMON1_25_me1_adptpnt_gmv_cnt_y1(data)                (0x3F000000&((data)<<24))
#define  KME_ME1_TOP1_ME1_COMMON1_25_me1_adptpnt_gmv_cnt_x2(data)                (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP1_ME1_COMMON1_25_me1_adptpnt_gmv_cnt_x1(data)                (0x00000FFF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_25_get_me1_adptpnt_gmv_cnt_y1(data)            ((0x3F000000&(data))>>24)
#define  KME_ME1_TOP1_ME1_COMMON1_25_get_me1_adptpnt_gmv_cnt_x2(data)            ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP1_ME1_COMMON1_25_get_me1_adptpnt_gmv_cnt_x1(data)            (0x00000FFF&(data))

#define  KME_ME1_TOP1_KME_ME1_TOP1_68                                           0x1809C568
#define  KME_ME1_TOP1_KME_ME1_TOP1_68_reg_addr                                   "0xB809C568"
#define  KME_ME1_TOP1_KME_ME1_TOP1_68_reg                                        0xB809C568
#define  KME_ME1_TOP1_KME_ME1_TOP1_68_inst_addr                                  "0x001A"
#define  set_KME_ME1_TOP1_KME_ME1_TOP1_68_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP1_KME_ME1_TOP1_68_reg)=data)
#define  get_KME_ME1_TOP1_KME_ME1_TOP1_68_reg                                    (*((volatile unsigned int*)KME_ME1_TOP1_KME_ME1_TOP1_68_reg))
#define  KME_ME1_TOP1_KME_ME1_TOP1_68_me1_adptpnt_gmv_ucf_x1_shift               (22)
#define  KME_ME1_TOP1_KME_ME1_TOP1_68_me1_adptpnt_gmv_cnt_slope1_shift           (6)
#define  KME_ME1_TOP1_KME_ME1_TOP1_68_me1_adptpnt_gmv_cnt_y2_shift               (0)
#define  KME_ME1_TOP1_KME_ME1_TOP1_68_me1_adptpnt_gmv_ucf_x1_mask                (0xFFC00000)
#define  KME_ME1_TOP1_KME_ME1_TOP1_68_me1_adptpnt_gmv_cnt_slope1_mask            (0x0001FFC0)
#define  KME_ME1_TOP1_KME_ME1_TOP1_68_me1_adptpnt_gmv_cnt_y2_mask                (0x0000003F)
#define  KME_ME1_TOP1_KME_ME1_TOP1_68_me1_adptpnt_gmv_ucf_x1(data)               (0xFFC00000&((data)<<22))
#define  KME_ME1_TOP1_KME_ME1_TOP1_68_me1_adptpnt_gmv_cnt_slope1(data)           (0x0001FFC0&((data)<<6))
#define  KME_ME1_TOP1_KME_ME1_TOP1_68_me1_adptpnt_gmv_cnt_y2(data)               (0x0000003F&(data))
#define  KME_ME1_TOP1_KME_ME1_TOP1_68_get_me1_adptpnt_gmv_ucf_x1(data)           ((0xFFC00000&(data))>>22)
#define  KME_ME1_TOP1_KME_ME1_TOP1_68_get_me1_adptpnt_gmv_cnt_slope1(data)       ((0x0001FFC0&(data))>>6)
#define  KME_ME1_TOP1_KME_ME1_TOP1_68_get_me1_adptpnt_gmv_cnt_y2(data)           (0x0000003F&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_27                                            0x1809C56C
#define  KME_ME1_TOP1_ME1_COMMON1_27_reg_addr                                    "0xB809C56C"
#define  KME_ME1_TOP1_ME1_COMMON1_27_reg                                         0xB809C56C
#define  KME_ME1_TOP1_ME1_COMMON1_27_inst_addr                                   "0x001B"
#define  set_KME_ME1_TOP1_ME1_COMMON1_27_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_27_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_27_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_27_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_27_me1_adptpnt_gmv_ucf_y2_shift                (16)
#define  KME_ME1_TOP1_ME1_COMMON1_27_me1_adptpnt_gmv_ucf_y1_shift                (10)
#define  KME_ME1_TOP1_ME1_COMMON1_27_me1_adptpnt_gmv_ucf_x2_shift                (0)
#define  KME_ME1_TOP1_ME1_COMMON1_27_me1_adptpnt_gmv_ucf_y2_mask                 (0x003F0000)
#define  KME_ME1_TOP1_ME1_COMMON1_27_me1_adptpnt_gmv_ucf_y1_mask                 (0x0000FC00)
#define  KME_ME1_TOP1_ME1_COMMON1_27_me1_adptpnt_gmv_ucf_x2_mask                 (0x000003FF)
#define  KME_ME1_TOP1_ME1_COMMON1_27_me1_adptpnt_gmv_ucf_y2(data)                (0x003F0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_27_me1_adptpnt_gmv_ucf_y1(data)                (0x0000FC00&((data)<<10))
#define  KME_ME1_TOP1_ME1_COMMON1_27_me1_adptpnt_gmv_ucf_x2(data)                (0x000003FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_27_get_me1_adptpnt_gmv_ucf_y2(data)            ((0x003F0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_27_get_me1_adptpnt_gmv_ucf_y1(data)            ((0x0000FC00&(data))>>10)
#define  KME_ME1_TOP1_ME1_COMMON1_27_get_me1_adptpnt_gmv_ucf_x2(data)            (0x000003FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_28                                            0x1809C570
#define  KME_ME1_TOP1_ME1_COMMON1_28_reg_addr                                    "0xB809C570"
#define  KME_ME1_TOP1_ME1_COMMON1_28_reg                                         0xB809C570
#define  KME_ME1_TOP1_ME1_COMMON1_28_inst_addr                                   "0x001C"
#define  set_KME_ME1_TOP1_ME1_COMMON1_28_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_28_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_28_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_28_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_28_me1_mm_psad_norm_x2_shift                   (22)
#define  KME_ME1_TOP1_ME1_COMMON1_28_me1_mm_psad_norm_x1_shift                   (12)
#define  KME_ME1_TOP1_ME1_COMMON1_28_me1_adptpnt_gmv_ucf_slope1_shift            (0)
#define  KME_ME1_TOP1_ME1_COMMON1_28_me1_mm_psad_norm_x2_mask                    (0xFFC00000)
#define  KME_ME1_TOP1_ME1_COMMON1_28_me1_mm_psad_norm_x1_mask                    (0x003FF000)
#define  KME_ME1_TOP1_ME1_COMMON1_28_me1_adptpnt_gmv_ucf_slope1_mask             (0x000007FF)
#define  KME_ME1_TOP1_ME1_COMMON1_28_me1_mm_psad_norm_x2(data)                   (0xFFC00000&((data)<<22))
#define  KME_ME1_TOP1_ME1_COMMON1_28_me1_mm_psad_norm_x1(data)                   (0x003FF000&((data)<<12))
#define  KME_ME1_TOP1_ME1_COMMON1_28_me1_adptpnt_gmv_ucf_slope1(data)            (0x000007FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_28_get_me1_mm_psad_norm_x2(data)               ((0xFFC00000&(data))>>22)
#define  KME_ME1_TOP1_ME1_COMMON1_28_get_me1_mm_psad_norm_x1(data)               ((0x003FF000&(data))>>12)
#define  KME_ME1_TOP1_ME1_COMMON1_28_get_me1_adptpnt_gmv_ucf_slope1(data)        (0x000007FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_29                                            0x1809C574
#define  KME_ME1_TOP1_ME1_COMMON1_29_reg_addr                                    "0xB809C574"
#define  KME_ME1_TOP1_ME1_COMMON1_29_reg                                         0xB809C574
#define  KME_ME1_TOP1_ME1_COMMON1_29_inst_addr                                   "0x001D"
#define  set_KME_ME1_TOP1_ME1_COMMON1_29_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_29_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_29_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_29_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_29_me1_mm_psad_norm_y1_shift                   (20)
#define  KME_ME1_TOP1_ME1_COMMON1_29_me1_mm_psad_norm_x4_shift                   (10)
#define  KME_ME1_TOP1_ME1_COMMON1_29_me1_mm_psad_norm_x3_shift                   (0)
#define  KME_ME1_TOP1_ME1_COMMON1_29_me1_mm_psad_norm_y1_mask                    (0x3FF00000)
#define  KME_ME1_TOP1_ME1_COMMON1_29_me1_mm_psad_norm_x4_mask                    (0x000FFC00)
#define  KME_ME1_TOP1_ME1_COMMON1_29_me1_mm_psad_norm_x3_mask                    (0x000003FF)
#define  KME_ME1_TOP1_ME1_COMMON1_29_me1_mm_psad_norm_y1(data)                   (0x3FF00000&((data)<<20))
#define  KME_ME1_TOP1_ME1_COMMON1_29_me1_mm_psad_norm_x4(data)                   (0x000FFC00&((data)<<10))
#define  KME_ME1_TOP1_ME1_COMMON1_29_me1_mm_psad_norm_x3(data)                   (0x000003FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_29_get_me1_mm_psad_norm_y1(data)               ((0x3FF00000&(data))>>20)
#define  KME_ME1_TOP1_ME1_COMMON1_29_get_me1_mm_psad_norm_x4(data)               ((0x000FFC00&(data))>>10)
#define  KME_ME1_TOP1_ME1_COMMON1_29_get_me1_mm_psad_norm_x3(data)               (0x000003FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_30                                            0x1809C578
#define  KME_ME1_TOP1_ME1_COMMON1_30_reg_addr                                    "0xB809C578"
#define  KME_ME1_TOP1_ME1_COMMON1_30_reg                                         0xB809C578
#define  KME_ME1_TOP1_ME1_COMMON1_30_inst_addr                                   "0x001E"
#define  set_KME_ME1_TOP1_ME1_COMMON1_30_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_30_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_30_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_30_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_30_me1_mm_psad_norm_y4_shift                   (20)
#define  KME_ME1_TOP1_ME1_COMMON1_30_me1_mm_psad_norm_y3_shift                   (10)
#define  KME_ME1_TOP1_ME1_COMMON1_30_me1_mm_psad_norm_y2_shift                   (0)
#define  KME_ME1_TOP1_ME1_COMMON1_30_me1_mm_psad_norm_y4_mask                    (0x3FF00000)
#define  KME_ME1_TOP1_ME1_COMMON1_30_me1_mm_psad_norm_y3_mask                    (0x000FFC00)
#define  KME_ME1_TOP1_ME1_COMMON1_30_me1_mm_psad_norm_y2_mask                    (0x000003FF)
#define  KME_ME1_TOP1_ME1_COMMON1_30_me1_mm_psad_norm_y4(data)                   (0x3FF00000&((data)<<20))
#define  KME_ME1_TOP1_ME1_COMMON1_30_me1_mm_psad_norm_y3(data)                   (0x000FFC00&((data)<<10))
#define  KME_ME1_TOP1_ME1_COMMON1_30_me1_mm_psad_norm_y2(data)                   (0x000003FF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_30_get_me1_mm_psad_norm_y4(data)               ((0x3FF00000&(data))>>20)
#define  KME_ME1_TOP1_ME1_COMMON1_30_get_me1_mm_psad_norm_y3(data)               ((0x000FFC00&(data))>>10)
#define  KME_ME1_TOP1_ME1_COMMON1_30_get_me1_mm_psad_norm_y2(data)               (0x000003FF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_31                                            0x1809C57C
#define  KME_ME1_TOP1_ME1_COMMON1_31_reg_addr                                    "0xB809C57C"
#define  KME_ME1_TOP1_ME1_COMMON1_31_reg                                         0xB809C57C
#define  KME_ME1_TOP1_ME1_COMMON1_31_inst_addr                                   "0x001F"
#define  set_KME_ME1_TOP1_ME1_COMMON1_31_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_31_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_31_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_31_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_31_me1_mm_psad_norm_slope2_shift               (16)
#define  KME_ME1_TOP1_ME1_COMMON1_31_me1_mm_psad_norm_slope1_shift               (0)
#define  KME_ME1_TOP1_ME1_COMMON1_31_me1_mm_psad_norm_slope2_mask                (0x7FFF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_31_me1_mm_psad_norm_slope1_mask                (0x00007FFF)
#define  KME_ME1_TOP1_ME1_COMMON1_31_me1_mm_psad_norm_slope2(data)               (0x7FFF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_31_me1_mm_psad_norm_slope1(data)               (0x00007FFF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_31_get_me1_mm_psad_norm_slope2(data)           ((0x7FFF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_31_get_me1_mm_psad_norm_slope1(data)           (0x00007FFF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_32                                            0x1809C580
#define  KME_ME1_TOP1_ME1_COMMON1_32_reg_addr                                    "0xB809C580"
#define  KME_ME1_TOP1_ME1_COMMON1_32_reg                                         0xB809C580
#define  KME_ME1_TOP1_ME1_COMMON1_32_inst_addr                                   "0x0020"
#define  set_KME_ME1_TOP1_ME1_COMMON1_32_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_32_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_32_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_32_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_32_me1_mm_psad_norm_slope3_shift               (0)
#define  KME_ME1_TOP1_ME1_COMMON1_32_me1_mm_psad_norm_slope3_mask                (0x00007FFF)
#define  KME_ME1_TOP1_ME1_COMMON1_32_me1_mm_psad_norm_slope3(data)               (0x00007FFF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_32_get_me1_mm_psad_norm_slope3(data)           (0x00007FFF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_33                                            0x1809C584
#define  KME_ME1_TOP1_ME1_COMMON1_33_reg_addr                                    "0xB809C584"
#define  KME_ME1_TOP1_ME1_COMMON1_33_reg                                         0xB809C584
#define  KME_ME1_TOP1_ME1_COMMON1_33_inst_addr                                   "0x0021"
#define  set_KME_ME1_TOP1_ME1_COMMON1_33_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_33_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_33_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_33_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_33_me1_adptpnt_gmv_sad_x2_shift                (16)
#define  KME_ME1_TOP1_ME1_COMMON1_33_me1_adptpnt_gmv_sad_x1_shift                (0)
#define  KME_ME1_TOP1_ME1_COMMON1_33_me1_adptpnt_gmv_sad_x2_mask                 (0x1FFF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_33_me1_adptpnt_gmv_sad_x1_mask                 (0x00001FFF)
#define  KME_ME1_TOP1_ME1_COMMON1_33_me1_adptpnt_gmv_sad_x2(data)                (0x1FFF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_33_me1_adptpnt_gmv_sad_x1(data)                (0x00001FFF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_33_get_me1_adptpnt_gmv_sad_x2(data)            ((0x1FFF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_33_get_me1_adptpnt_gmv_sad_x1(data)            (0x00001FFF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_34                                            0x1809C588
#define  KME_ME1_TOP1_ME1_COMMON1_34_reg_addr                                    "0xB809C588"
#define  KME_ME1_TOP1_ME1_COMMON1_34_reg                                         0xB809C588
#define  KME_ME1_TOP1_ME1_COMMON1_34_inst_addr                                   "0x0022"
#define  set_KME_ME1_TOP1_ME1_COMMON1_34_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_34_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_34_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_34_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_34_me1_adptpnt_gmv_sad_y1_shift                (16)
#define  KME_ME1_TOP1_ME1_COMMON1_34_me1_adptpnt_gmv_sad_x3_shift                (0)
#define  KME_ME1_TOP1_ME1_COMMON1_34_me1_adptpnt_gmv_sad_y1_mask                 (0x1FFF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_34_me1_adptpnt_gmv_sad_x3_mask                 (0x00001FFF)
#define  KME_ME1_TOP1_ME1_COMMON1_34_me1_adptpnt_gmv_sad_y1(data)                (0x1FFF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_34_me1_adptpnt_gmv_sad_x3(data)                (0x00001FFF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_34_get_me1_adptpnt_gmv_sad_y1(data)            ((0x1FFF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_34_get_me1_adptpnt_gmv_sad_x3(data)            (0x00001FFF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_35                                            0x1809C58C
#define  KME_ME1_TOP1_ME1_COMMON1_35_reg_addr                                    "0xB809C58C"
#define  KME_ME1_TOP1_ME1_COMMON1_35_reg                                         0xB809C58C
#define  KME_ME1_TOP1_ME1_COMMON1_35_inst_addr                                   "0x0023"
#define  set_KME_ME1_TOP1_ME1_COMMON1_35_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_35_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_35_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_35_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_35_me1_adptpnt_gmv_sad_y3_shift                (16)
#define  KME_ME1_TOP1_ME1_COMMON1_35_me1_adptpnt_gmv_sad_y2_shift                (0)
#define  KME_ME1_TOP1_ME1_COMMON1_35_me1_adptpnt_gmv_sad_y3_mask                 (0x1FFF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_35_me1_adptpnt_gmv_sad_y2_mask                 (0x00001FFF)
#define  KME_ME1_TOP1_ME1_COMMON1_35_me1_adptpnt_gmv_sad_y3(data)                (0x1FFF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_35_me1_adptpnt_gmv_sad_y2(data)                (0x00001FFF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_35_get_me1_adptpnt_gmv_sad_y3(data)            ((0x1FFF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_35_get_me1_adptpnt_gmv_sad_y2(data)            (0x00001FFF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_36                                            0x1809C590
#define  KME_ME1_TOP1_ME1_COMMON1_36_reg_addr                                    "0xB809C590"
#define  KME_ME1_TOP1_ME1_COMMON1_36_reg                                         0xB809C590
#define  KME_ME1_TOP1_ME1_COMMON1_36_inst_addr                                   "0x0024"
#define  set_KME_ME1_TOP1_ME1_COMMON1_36_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_36_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_36_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_36_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_36_me1_adptpnt_gmv_sad_slope2_shift            (16)
#define  KME_ME1_TOP1_ME1_COMMON1_36_me1_adptpnt_gmv_sad_slope1_shift            (0)
#define  KME_ME1_TOP1_ME1_COMMON1_36_me1_adptpnt_gmv_sad_slope2_mask             (0xFFFF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_36_me1_adptpnt_gmv_sad_slope1_mask             (0x0000FFFF)
#define  KME_ME1_TOP1_ME1_COMMON1_36_me1_adptpnt_gmv_sad_slope2(data)            (0xFFFF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_36_me1_adptpnt_gmv_sad_slope1(data)            (0x0000FFFF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_36_get_me1_adptpnt_gmv_sad_slope2(data)        ((0xFFFF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_36_get_me1_adptpnt_gmv_sad_slope1(data)        (0x0000FFFF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_37                                            0x1809C594
#define  KME_ME1_TOP1_ME1_COMMON1_37_reg_addr                                    "0xB809C594"
#define  KME_ME1_TOP1_ME1_COMMON1_37_reg                                         0xB809C594
#define  KME_ME1_TOP1_ME1_COMMON1_37_inst_addr                                   "0x0025"
#define  set_KME_ME1_TOP1_ME1_COMMON1_37_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_37_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_37_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_37_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_37_me1_adptpnt_zmv_sad_x2_shift                (16)
#define  KME_ME1_TOP1_ME1_COMMON1_37_me1_adptpnt_zmv_sad_x1_shift                (0)
#define  KME_ME1_TOP1_ME1_COMMON1_37_me1_adptpnt_zmv_sad_x2_mask                 (0x1FFF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_37_me1_adptpnt_zmv_sad_x1_mask                 (0x00001FFF)
#define  KME_ME1_TOP1_ME1_COMMON1_37_me1_adptpnt_zmv_sad_x2(data)                (0x1FFF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_37_me1_adptpnt_zmv_sad_x1(data)                (0x00001FFF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_37_get_me1_adptpnt_zmv_sad_x2(data)            ((0x1FFF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_37_get_me1_adptpnt_zmv_sad_x1(data)            (0x00001FFF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_38                                            0x1809C598
#define  KME_ME1_TOP1_ME1_COMMON1_38_reg_addr                                    "0xB809C598"
#define  KME_ME1_TOP1_ME1_COMMON1_38_reg                                         0xB809C598
#define  KME_ME1_TOP1_ME1_COMMON1_38_inst_addr                                   "0x0026"
#define  set_KME_ME1_TOP1_ME1_COMMON1_38_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_38_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_38_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_38_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_38_me1_adptpnt_zmv_sad_y1_shift                (16)
#define  KME_ME1_TOP1_ME1_COMMON1_38_me1_adptpnt_zmv_sad_x3_shift                (0)
#define  KME_ME1_TOP1_ME1_COMMON1_38_me1_adptpnt_zmv_sad_y1_mask                 (0x1FFF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_38_me1_adptpnt_zmv_sad_x3_mask                 (0x00001FFF)
#define  KME_ME1_TOP1_ME1_COMMON1_38_me1_adptpnt_zmv_sad_y1(data)                (0x1FFF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_38_me1_adptpnt_zmv_sad_x3(data)                (0x00001FFF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_38_get_me1_adptpnt_zmv_sad_y1(data)            ((0x1FFF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_38_get_me1_adptpnt_zmv_sad_x3(data)            (0x00001FFF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_39                                            0x1809C59C
#define  KME_ME1_TOP1_ME1_COMMON1_39_reg_addr                                    "0xB809C59C"
#define  KME_ME1_TOP1_ME1_COMMON1_39_reg                                         0xB809C59C
#define  KME_ME1_TOP1_ME1_COMMON1_39_inst_addr                                   "0x0027"
#define  set_KME_ME1_TOP1_ME1_COMMON1_39_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_39_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_39_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_39_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_39_me1_adptpnt_zmv_sad_y3_shift                (16)
#define  KME_ME1_TOP1_ME1_COMMON1_39_me1_adptpnt_zmv_sad_y2_shift                (0)
#define  KME_ME1_TOP1_ME1_COMMON1_39_me1_adptpnt_zmv_sad_y3_mask                 (0x1FFF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_39_me1_adptpnt_zmv_sad_y2_mask                 (0x00001FFF)
#define  KME_ME1_TOP1_ME1_COMMON1_39_me1_adptpnt_zmv_sad_y3(data)                (0x1FFF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_39_me1_adptpnt_zmv_sad_y2(data)                (0x00001FFF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_39_get_me1_adptpnt_zmv_sad_y3(data)            ((0x1FFF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_39_get_me1_adptpnt_zmv_sad_y2(data)            (0x00001FFF&(data))

#define  KME_ME1_TOP1_ME1_COMMON1_40                                            0x1809C5A0
#define  KME_ME1_TOP1_ME1_COMMON1_40_reg_addr                                    "0xB809C5A0"
#define  KME_ME1_TOP1_ME1_COMMON1_40_reg                                         0xB809C5A0
#define  KME_ME1_TOP1_ME1_COMMON1_40_inst_addr                                   "0x0028"
#define  set_KME_ME1_TOP1_ME1_COMMON1_40_reg(data)                               (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_40_reg)=data)
#define  get_KME_ME1_TOP1_ME1_COMMON1_40_reg                                     (*((volatile unsigned int*)KME_ME1_TOP1_ME1_COMMON1_40_reg))
#define  KME_ME1_TOP1_ME1_COMMON1_40_me1_adptpnt_zmv_sad_slope2_shift            (16)
#define  KME_ME1_TOP1_ME1_COMMON1_40_me1_adptpnt_zmv_sad_slope1_shift            (0)
#define  KME_ME1_TOP1_ME1_COMMON1_40_me1_adptpnt_zmv_sad_slope2_mask             (0xFFFF0000)
#define  KME_ME1_TOP1_ME1_COMMON1_40_me1_adptpnt_zmv_sad_slope1_mask             (0x0000FFFF)
#define  KME_ME1_TOP1_ME1_COMMON1_40_me1_adptpnt_zmv_sad_slope2(data)            (0xFFFF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_COMMON1_40_me1_adptpnt_zmv_sad_slope1(data)            (0x0000FFFF&(data))
#define  KME_ME1_TOP1_ME1_COMMON1_40_get_me1_adptpnt_zmv_sad_slope2(data)        ((0xFFFF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_COMMON1_40_get_me1_adptpnt_zmv_sad_slope1(data)        (0x0000FFFF&(data))

#define  KME_ME1_TOP1_ME1_SCENE1_00                                             0x1809C5C0
#define  KME_ME1_TOP1_ME1_SCENE1_00_reg_addr                                     "0xB809C5C0"
#define  KME_ME1_TOP1_ME1_SCENE1_00_reg                                          0xB809C5C0
#define  KME_ME1_TOP1_ME1_SCENE1_00_inst_addr                                    "0x0029"
#define  set_KME_ME1_TOP1_ME1_SCENE1_00_reg(data)                                (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_00_reg)=data)
#define  get_KME_ME1_TOP1_ME1_SCENE1_00_reg                                      (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_00_reg))
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_vs_in_sel_shift                       (15)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_hold_mask_en_shift                    (14)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_logo_en_shift                         (13)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_dh_en_shift                           (12)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_mc_en_shift                           (11)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_me2_en_shift                          (10)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_me1_en_shift                          (9)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_mot_en_shift                          (8)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_spati_css_en_shift                    (7)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_tempo_css_en_shift                    (6)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_zgmv_en_shift                         (5)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_film_switch_en_shift                  (4)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_dtl_en_shift                          (3)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_saddiff_en_shift                      (2)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_sad_en_shift                          (1)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_sw_ctrl_en_shift                      (0)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_vs_in_sel_mask                        (0x00008000)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_hold_mask_en_mask                     (0x00004000)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_logo_en_mask                          (0x00002000)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_dh_en_mask                            (0x00001000)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_mc_en_mask                            (0x00000800)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_me2_en_mask                           (0x00000400)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_me1_en_mask                           (0x00000200)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_mot_en_mask                           (0x00000100)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_spati_css_en_mask                     (0x00000080)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_tempo_css_en_mask                     (0x00000040)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_zgmv_en_mask                          (0x00000020)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_film_switch_en_mask                   (0x00000010)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_dtl_en_mask                           (0x00000008)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_saddiff_en_mask                       (0x00000004)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_sad_en_mask                           (0x00000002)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_sw_ctrl_en_mask                       (0x00000001)
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_vs_in_sel(data)                       (0x00008000&((data)<<15))
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_hold_mask_en(data)                    (0x00004000&((data)<<14))
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_logo_en(data)                         (0x00002000&((data)<<13))
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_dh_en(data)                           (0x00001000&((data)<<12))
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_mc_en(data)                           (0x00000800&((data)<<11))
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_me2_en(data)                          (0x00000400&((data)<<10))
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_me1_en(data)                          (0x00000200&((data)<<9))
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_mot_en(data)                          (0x00000100&((data)<<8))
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_spati_css_en(data)                    (0x00000080&((data)<<7))
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_tempo_css_en(data)                    (0x00000040&((data)<<6))
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_zgmv_en(data)                         (0x00000020&((data)<<5))
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_film_switch_en(data)                  (0x00000010&((data)<<4))
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_dtl_en(data)                          (0x00000008&((data)<<3))
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_saddiff_en(data)                      (0x00000004&((data)<<2))
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_sad_en(data)                          (0x00000002&((data)<<1))
#define  KME_ME1_TOP1_ME1_SCENE1_00_me1_sc_sw_ctrl_en(data)                      (0x00000001&(data))
#define  KME_ME1_TOP1_ME1_SCENE1_00_get_me1_sc_vs_in_sel(data)                   ((0x00008000&(data))>>15)
#define  KME_ME1_TOP1_ME1_SCENE1_00_get_me1_sc_hold_mask_en(data)                ((0x00004000&(data))>>14)
#define  KME_ME1_TOP1_ME1_SCENE1_00_get_me1_sc_logo_en(data)                     ((0x00002000&(data))>>13)
#define  KME_ME1_TOP1_ME1_SCENE1_00_get_me1_sc_dh_en(data)                       ((0x00001000&(data))>>12)
#define  KME_ME1_TOP1_ME1_SCENE1_00_get_me1_sc_mc_en(data)                       ((0x00000800&(data))>>11)
#define  KME_ME1_TOP1_ME1_SCENE1_00_get_me1_sc_me2_en(data)                      ((0x00000400&(data))>>10)
#define  KME_ME1_TOP1_ME1_SCENE1_00_get_me1_sc_me1_en(data)                      ((0x00000200&(data))>>9)
#define  KME_ME1_TOP1_ME1_SCENE1_00_get_me1_sc_mot_en(data)                      ((0x00000100&(data))>>8)
#define  KME_ME1_TOP1_ME1_SCENE1_00_get_me1_sc_spati_css_en(data)                ((0x00000080&(data))>>7)
#define  KME_ME1_TOP1_ME1_SCENE1_00_get_me1_sc_tempo_css_en(data)                ((0x00000040&(data))>>6)
#define  KME_ME1_TOP1_ME1_SCENE1_00_get_me1_sc_zgmv_en(data)                     ((0x00000020&(data))>>5)
#define  KME_ME1_TOP1_ME1_SCENE1_00_get_me1_sc_film_switch_en(data)              ((0x00000010&(data))>>4)
#define  KME_ME1_TOP1_ME1_SCENE1_00_get_me1_sc_dtl_en(data)                      ((0x00000008&(data))>>3)
#define  KME_ME1_TOP1_ME1_SCENE1_00_get_me1_sc_saddiff_en(data)                  ((0x00000004&(data))>>2)
#define  KME_ME1_TOP1_ME1_SCENE1_00_get_me1_sc_sad_en(data)                      ((0x00000002&(data))>>1)
#define  KME_ME1_TOP1_ME1_SCENE1_00_get_me1_sc_sw_ctrl_en(data)                  (0x00000001&(data))

#define  KME_ME1_TOP1_ME1_SCENE1_01                                             0x1809C5C4
#define  KME_ME1_TOP1_ME1_SCENE1_01_reg_addr                                     "0xB809C5C4"
#define  KME_ME1_TOP1_ME1_SCENE1_01_reg                                          0xB809C5C4
#define  KME_ME1_TOP1_ME1_SCENE1_01_inst_addr                                    "0x002A"
#define  set_KME_ME1_TOP1_ME1_SCENE1_01_reg(data)                                (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_01_reg)=data)
#define  get_KME_ME1_TOP1_ME1_SCENE1_01_reg                                      (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_01_reg))
#define  KME_ME1_TOP1_ME1_SCENE1_01_me1_sc_logo_pre_cnt_shift                    (20)
#define  KME_ME1_TOP1_ME1_SCENE1_01_me1_sc_dh_pre_cnt_shift                      (15)
#define  KME_ME1_TOP1_ME1_SCENE1_01_me1_sc_mc_pre_cnt_shift                      (10)
#define  KME_ME1_TOP1_ME1_SCENE1_01_me1_sc_me2_pre_cnt_shift                     (5)
#define  KME_ME1_TOP1_ME1_SCENE1_01_me1_sc_me1_pre_cnt_shift                     (0)
#define  KME_ME1_TOP1_ME1_SCENE1_01_me1_sc_logo_pre_cnt_mask                     (0x01F00000)
#define  KME_ME1_TOP1_ME1_SCENE1_01_me1_sc_dh_pre_cnt_mask                       (0x000F8000)
#define  KME_ME1_TOP1_ME1_SCENE1_01_me1_sc_mc_pre_cnt_mask                       (0x00007C00)
#define  KME_ME1_TOP1_ME1_SCENE1_01_me1_sc_me2_pre_cnt_mask                      (0x000003E0)
#define  KME_ME1_TOP1_ME1_SCENE1_01_me1_sc_me1_pre_cnt_mask                      (0x0000001F)
#define  KME_ME1_TOP1_ME1_SCENE1_01_me1_sc_logo_pre_cnt(data)                    (0x01F00000&((data)<<20))
#define  KME_ME1_TOP1_ME1_SCENE1_01_me1_sc_dh_pre_cnt(data)                      (0x000F8000&((data)<<15))
#define  KME_ME1_TOP1_ME1_SCENE1_01_me1_sc_mc_pre_cnt(data)                      (0x00007C00&((data)<<10))
#define  KME_ME1_TOP1_ME1_SCENE1_01_me1_sc_me2_pre_cnt(data)                     (0x000003E0&((data)<<5))
#define  KME_ME1_TOP1_ME1_SCENE1_01_me1_sc_me1_pre_cnt(data)                     (0x0000001F&(data))
#define  KME_ME1_TOP1_ME1_SCENE1_01_get_me1_sc_logo_pre_cnt(data)                ((0x01F00000&(data))>>20)
#define  KME_ME1_TOP1_ME1_SCENE1_01_get_me1_sc_dh_pre_cnt(data)                  ((0x000F8000&(data))>>15)
#define  KME_ME1_TOP1_ME1_SCENE1_01_get_me1_sc_mc_pre_cnt(data)                  ((0x00007C00&(data))>>10)
#define  KME_ME1_TOP1_ME1_SCENE1_01_get_me1_sc_me2_pre_cnt(data)                 ((0x000003E0&(data))>>5)
#define  KME_ME1_TOP1_ME1_SCENE1_01_get_me1_sc_me1_pre_cnt(data)                 (0x0000001F&(data))

#define  KME_ME1_TOP1_ME1_SCENE1_02                                             0x1809C5C8
#define  KME_ME1_TOP1_ME1_SCENE1_02_reg_addr                                     "0xB809C5C8"
#define  KME_ME1_TOP1_ME1_SCENE1_02_reg                                          0xB809C5C8
#define  KME_ME1_TOP1_ME1_SCENE1_02_inst_addr                                    "0x002B"
#define  set_KME_ME1_TOP1_ME1_SCENE1_02_reg(data)                                (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_02_reg)=data)
#define  get_KME_ME1_TOP1_ME1_SCENE1_02_reg                                      (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_02_reg))
#define  KME_ME1_TOP1_ME1_SCENE1_02_me1_sc_dh_hold_cnt_shift                     (24)
#define  KME_ME1_TOP1_ME1_SCENE1_02_me1_sc_mc_hold_cnt_shift                     (16)
#define  KME_ME1_TOP1_ME1_SCENE1_02_me1_sc_me2_hold_cnt_shift                    (8)
#define  KME_ME1_TOP1_ME1_SCENE1_02_me1_sc_me1_hold_cnt_shift                    (0)
#define  KME_ME1_TOP1_ME1_SCENE1_02_me1_sc_dh_hold_cnt_mask                      (0xFF000000)
#define  KME_ME1_TOP1_ME1_SCENE1_02_me1_sc_mc_hold_cnt_mask                      (0x00FF0000)
#define  KME_ME1_TOP1_ME1_SCENE1_02_me1_sc_me2_hold_cnt_mask                     (0x0000FF00)
#define  KME_ME1_TOP1_ME1_SCENE1_02_me1_sc_me1_hold_cnt_mask                     (0x000000FF)
#define  KME_ME1_TOP1_ME1_SCENE1_02_me1_sc_dh_hold_cnt(data)                     (0xFF000000&((data)<<24))
#define  KME_ME1_TOP1_ME1_SCENE1_02_me1_sc_mc_hold_cnt(data)                     (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP1_ME1_SCENE1_02_me1_sc_me2_hold_cnt(data)                    (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP1_ME1_SCENE1_02_me1_sc_me1_hold_cnt(data)                    (0x000000FF&(data))
#define  KME_ME1_TOP1_ME1_SCENE1_02_get_me1_sc_dh_hold_cnt(data)                 ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP1_ME1_SCENE1_02_get_me1_sc_mc_hold_cnt(data)                 ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP1_ME1_SCENE1_02_get_me1_sc_me2_hold_cnt(data)                ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP1_ME1_SCENE1_02_get_me1_sc_me1_hold_cnt(data)                (0x000000FF&(data))

#define  KME_ME1_TOP1_ME1_SCENE1_03                                             0x1809C5CC
#define  KME_ME1_TOP1_ME1_SCENE1_03_reg_addr                                     "0xB809C5CC"
#define  KME_ME1_TOP1_ME1_SCENE1_03_reg                                          0xB809C5CC
#define  KME_ME1_TOP1_ME1_SCENE1_03_inst_addr                                    "0x002C"
#define  set_KME_ME1_TOP1_ME1_SCENE1_03_reg(data)                                (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_03_reg)=data)
#define  get_KME_ME1_TOP1_ME1_SCENE1_03_reg                                      (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_03_reg))
#define  KME_ME1_TOP1_ME1_SCENE1_03_me1_sc_static_keep_th_shift                  (26)
#define  KME_ME1_TOP1_ME1_SCENE1_03_me1_sc_status_frm_shift                      (22)
#define  KME_ME1_TOP1_ME1_SCENE1_03_me1_sc_post_cnt_shift                        (8)
#define  KME_ME1_TOP1_ME1_SCENE1_03_me1_sc_logo_hold_cnt_shift                   (0)
#define  KME_ME1_TOP1_ME1_SCENE1_03_me1_sc_static_keep_th_mask                   (0xFC000000)
#define  KME_ME1_TOP1_ME1_SCENE1_03_me1_sc_status_frm_mask                       (0x03C00000)
#define  KME_ME1_TOP1_ME1_SCENE1_03_me1_sc_post_cnt_mask                         (0x0000FF00)
#define  KME_ME1_TOP1_ME1_SCENE1_03_me1_sc_logo_hold_cnt_mask                    (0x000000FF)
#define  KME_ME1_TOP1_ME1_SCENE1_03_me1_sc_static_keep_th(data)                  (0xFC000000&((data)<<26))
#define  KME_ME1_TOP1_ME1_SCENE1_03_me1_sc_status_frm(data)                      (0x03C00000&((data)<<22))
#define  KME_ME1_TOP1_ME1_SCENE1_03_me1_sc_post_cnt(data)                        (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP1_ME1_SCENE1_03_me1_sc_logo_hold_cnt(data)                   (0x000000FF&(data))
#define  KME_ME1_TOP1_ME1_SCENE1_03_get_me1_sc_static_keep_th(data)              ((0xFC000000&(data))>>26)
#define  KME_ME1_TOP1_ME1_SCENE1_03_get_me1_sc_status_frm(data)                  ((0x03C00000&(data))>>22)
#define  KME_ME1_TOP1_ME1_SCENE1_03_get_me1_sc_post_cnt(data)                    ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP1_ME1_SCENE1_03_get_me1_sc_logo_hold_cnt(data)               (0x000000FF&(data))

#define  KME_ME1_TOP1_ME1_SCENE1_04                                             0x1809C5D0
#define  KME_ME1_TOP1_ME1_SCENE1_04_reg_addr                                     "0xB809C5D0"
#define  KME_ME1_TOP1_ME1_SCENE1_04_reg                                          0xB809C5D0
#define  KME_ME1_TOP1_ME1_SCENE1_04_inst_addr                                    "0x002D"
#define  set_KME_ME1_TOP1_ME1_SCENE1_04_reg(data)                                (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_04_reg)=data)
#define  get_KME_ME1_TOP1_ME1_SCENE1_04_reg                                      (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_04_reg))
#define  KME_ME1_TOP1_ME1_SCENE1_04_me1_sc_static_dtl_th_shift                   (0)
#define  KME_ME1_TOP1_ME1_SCENE1_04_me1_sc_static_dtl_th_mask                    (0x7FFFFFFF)
#define  KME_ME1_TOP1_ME1_SCENE1_04_me1_sc_static_dtl_th(data)                   (0x7FFFFFFF&(data))
#define  KME_ME1_TOP1_ME1_SCENE1_04_get_me1_sc_static_dtl_th(data)               (0x7FFFFFFF&(data))

#define  KME_ME1_TOP1_ME1_SCENE1_05                                             0x1809C5D4
#define  KME_ME1_TOP1_ME1_SCENE1_05_reg_addr                                     "0xB809C5D4"
#define  KME_ME1_TOP1_ME1_SCENE1_05_reg                                          0xB809C5D4
#define  KME_ME1_TOP1_ME1_SCENE1_05_inst_addr                                    "0x002E"
#define  set_KME_ME1_TOP1_ME1_SCENE1_05_reg(data)                                (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_05_reg)=data)
#define  get_KME_ME1_TOP1_ME1_SCENE1_05_reg                                      (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_05_reg))
#define  KME_ME1_TOP1_ME1_SCENE1_05_me1_sc_dtl_th_shift                          (0)
#define  KME_ME1_TOP1_ME1_SCENE1_05_me1_sc_dtl_th_mask                           (0x7FFFFFFF)
#define  KME_ME1_TOP1_ME1_SCENE1_05_me1_sc_dtl_th(data)                          (0x7FFFFFFF&(data))
#define  KME_ME1_TOP1_ME1_SCENE1_05_get_me1_sc_dtl_th(data)                      (0x7FFFFFFF&(data))

#define  KME_ME1_TOP1_ME1_SCENE1_06                                             0x1809C5D8
#define  KME_ME1_TOP1_ME1_SCENE1_06_reg_addr                                     "0xB809C5D8"
#define  KME_ME1_TOP1_ME1_SCENE1_06_reg                                          0xB809C5D8
#define  KME_ME1_TOP1_ME1_SCENE1_06_inst_addr                                    "0x002F"
#define  set_KME_ME1_TOP1_ME1_SCENE1_06_reg(data)                                (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_06_reg)=data)
#define  get_KME_ME1_TOP1_ME1_SCENE1_06_reg                                      (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_06_reg))
#define  KME_ME1_TOP1_ME1_SCENE1_06_me1_sc_sad_th_shift                          (0)
#define  KME_ME1_TOP1_ME1_SCENE1_06_me1_sc_sad_th_mask                           (0x7FFFFFFF)
#define  KME_ME1_TOP1_ME1_SCENE1_06_me1_sc_sad_th(data)                          (0x7FFFFFFF&(data))
#define  KME_ME1_TOP1_ME1_SCENE1_06_get_me1_sc_sad_th(data)                      (0x7FFFFFFF&(data))

#define  KME_ME1_TOP1_ME1_SCENE1_07                                             0x1809C5DC
#define  KME_ME1_TOP1_ME1_SCENE1_07_reg_addr                                     "0xB809C5DC"
#define  KME_ME1_TOP1_ME1_SCENE1_07_reg                                          0xB809C5DC
#define  KME_ME1_TOP1_ME1_SCENE1_07_inst_addr                                    "0x0030"
#define  set_KME_ME1_TOP1_ME1_SCENE1_07_reg(data)                                (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_07_reg)=data)
#define  get_KME_ME1_TOP1_ME1_SCENE1_07_reg                                      (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_07_reg))
#define  KME_ME1_TOP1_ME1_SCENE1_07_me1_sc_saddiff_th_shift                      (0)
#define  KME_ME1_TOP1_ME1_SCENE1_07_me1_sc_saddiff_th_mask                       (0x7FFFFFFF)
#define  KME_ME1_TOP1_ME1_SCENE1_07_me1_sc_saddiff_th(data)                      (0x7FFFFFFF&(data))
#define  KME_ME1_TOP1_ME1_SCENE1_07_get_me1_sc_saddiff_th(data)                  (0x7FFFFFFF&(data))

#define  KME_ME1_TOP1_ME1_SCENE1_08                                             0x1809C5E0
#define  KME_ME1_TOP1_ME1_SCENE1_08_reg_addr                                     "0xB809C5E0"
#define  KME_ME1_TOP1_ME1_SCENE1_08_reg                                          0xB809C5E0
#define  KME_ME1_TOP1_ME1_SCENE1_08_inst_addr                                    "0x0031"
#define  set_KME_ME1_TOP1_ME1_SCENE1_08_reg(data)                                (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_08_reg)=data)
#define  get_KME_ME1_TOP1_ME1_SCENE1_08_reg                                      (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_08_reg))
#define  KME_ME1_TOP1_ME1_SCENE1_08_me1_sc_tempo_css_th_shift                    (0)
#define  KME_ME1_TOP1_ME1_SCENE1_08_me1_sc_tempo_css_th_mask                     (0x7FFFFFFF)
#define  KME_ME1_TOP1_ME1_SCENE1_08_me1_sc_tempo_css_th(data)                    (0x7FFFFFFF&(data))
#define  KME_ME1_TOP1_ME1_SCENE1_08_get_me1_sc_tempo_css_th(data)                (0x7FFFFFFF&(data))

#define  KME_ME1_TOP1_ME1_SCENE1_09                                             0x1809C5E4
#define  KME_ME1_TOP1_ME1_SCENE1_09_reg_addr                                     "0xB809C5E4"
#define  KME_ME1_TOP1_ME1_SCENE1_09_reg                                          0xB809C5E4
#define  KME_ME1_TOP1_ME1_SCENE1_09_inst_addr                                    "0x0032"
#define  set_KME_ME1_TOP1_ME1_SCENE1_09_reg(data)                                (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_09_reg)=data)
#define  get_KME_ME1_TOP1_ME1_SCENE1_09_reg                                      (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_09_reg))
#define  KME_ME1_TOP1_ME1_SCENE1_09_me1_sc_spati_css_th_shift                    (0)
#define  KME_ME1_TOP1_ME1_SCENE1_09_me1_sc_spati_css_th_mask                     (0x7FFFFFFF)
#define  KME_ME1_TOP1_ME1_SCENE1_09_me1_sc_spati_css_th(data)                    (0x7FFFFFFF&(data))
#define  KME_ME1_TOP1_ME1_SCENE1_09_get_me1_sc_spati_css_th(data)                (0x7FFFFFFF&(data))

#define  KME_ME1_TOP1_ME1_SCENE1_10                                             0x1809C5E8
#define  KME_ME1_TOP1_ME1_SCENE1_10_reg_addr                                     "0xB809C5E8"
#define  KME_ME1_TOP1_ME1_SCENE1_10_reg                                          0xB809C5E8
#define  KME_ME1_TOP1_ME1_SCENE1_10_inst_addr                                    "0x0033"
#define  set_KME_ME1_TOP1_ME1_SCENE1_10_reg(data)                                (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_10_reg)=data)
#define  get_KME_ME1_TOP1_ME1_SCENE1_10_reg                                      (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_10_reg))
#define  KME_ME1_TOP1_ME1_SCENE1_10_me1_sc_mot_th_shift                          (0)
#define  KME_ME1_TOP1_ME1_SCENE1_10_me1_sc_mot_th_mask                           (0x7FFFFFFF)
#define  KME_ME1_TOP1_ME1_SCENE1_10_me1_sc_mot_th(data)                          (0x7FFFFFFF&(data))
#define  KME_ME1_TOP1_ME1_SCENE1_10_get_me1_sc_mot_th(data)                      (0x7FFFFFFF&(data))

#define  KME_ME1_TOP1_ME1_SCENE1_11                                             0x1809C5EC
#define  KME_ME1_TOP1_ME1_SCENE1_11_reg_addr                                     "0xB809C5EC"
#define  KME_ME1_TOP1_ME1_SCENE1_11_reg                                          0xB809C5EC
#define  KME_ME1_TOP1_ME1_SCENE1_11_inst_addr                                    "0x0034"
#define  set_KME_ME1_TOP1_ME1_SCENE1_11_reg(data)                                (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_11_reg)=data)
#define  get_KME_ME1_TOP1_ME1_SCENE1_11_reg                                      (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_11_reg))
#define  KME_ME1_TOP1_ME1_SCENE1_11_me1_sc_zgmv_cnt_th_shift                     (0)
#define  KME_ME1_TOP1_ME1_SCENE1_11_me1_sc_zgmv_cnt_th_mask                      (0x000000FF)
#define  KME_ME1_TOP1_ME1_SCENE1_11_me1_sc_zgmv_cnt_th(data)                     (0x000000FF&(data))
#define  KME_ME1_TOP1_ME1_SCENE1_11_get_me1_sc_zgmv_cnt_th(data)                 (0x000000FF&(data))

#define  KME_ME1_TOP1_ME1_SCENE1_12                                             0x1809C5F0
#define  KME_ME1_TOP1_ME1_SCENE1_12_reg_addr                                     "0xB809C5F0"
#define  KME_ME1_TOP1_ME1_SCENE1_12_reg                                          0xB809C5F0
#define  KME_ME1_TOP1_ME1_SCENE1_12_inst_addr                                    "0x0035"
#define  set_KME_ME1_TOP1_ME1_SCENE1_12_reg(data)                                (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_12_reg)=data)
#define  get_KME_ME1_TOP1_ME1_SCENE1_12_reg                                      (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_12_reg))
#define  KME_ME1_TOP1_ME1_SCENE1_12_me1_sc_post_dir_shift                        (21)
#define  KME_ME1_TOP1_ME1_SCENE1_12_me1_sc_post_bvy_shift                        (11)
#define  KME_ME1_TOP1_ME1_SCENE1_12_me1_sc_post_bvx_shift                        (0)
#define  KME_ME1_TOP1_ME1_SCENE1_12_me1_sc_post_dir_mask                         (0x00600000)
#define  KME_ME1_TOP1_ME1_SCENE1_12_me1_sc_post_bvy_mask                         (0x001FF800)
#define  KME_ME1_TOP1_ME1_SCENE1_12_me1_sc_post_bvx_mask                         (0x000007FF)
#define  KME_ME1_TOP1_ME1_SCENE1_12_me1_sc_post_dir(data)                        (0x00600000&((data)<<21))
#define  KME_ME1_TOP1_ME1_SCENE1_12_me1_sc_post_bvy(data)                        (0x001FF800&((data)<<11))
#define  KME_ME1_TOP1_ME1_SCENE1_12_me1_sc_post_bvx(data)                        (0x000007FF&(data))
#define  KME_ME1_TOP1_ME1_SCENE1_12_get_me1_sc_post_dir(data)                    ((0x00600000&(data))>>21)
#define  KME_ME1_TOP1_ME1_SCENE1_12_get_me1_sc_post_bvy(data)                    ((0x001FF800&(data))>>11)
#define  KME_ME1_TOP1_ME1_SCENE1_12_get_me1_sc_post_bvx(data)                    (0x000007FF&(data))

#define  KME_ME1_TOP1_KME_ME1_TOP1_F4                                           0x1809C5F4
#define  KME_ME1_TOP1_KME_ME1_TOP1_F4_reg_addr                                   "0xB809C5F4"
#define  KME_ME1_TOP1_KME_ME1_TOP1_F4_reg                                        0xB809C5F4
#define  KME_ME1_TOP1_KME_ME1_TOP1_F4_inst_addr                                  "0x0036"
#define  set_KME_ME1_TOP1_KME_ME1_TOP1_F4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP1_KME_ME1_TOP1_F4_reg)=data)
#define  get_KME_ME1_TOP1_KME_ME1_TOP1_F4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP1_KME_ME1_TOP1_F4_reg))
#define  KME_ME1_TOP1_KME_ME1_TOP1_F4_me1_sc_mon_cond_shift                      (16)
#define  KME_ME1_TOP1_KME_ME1_TOP1_F4_me1_sc_mon_mode_shift                      (4)
#define  KME_ME1_TOP1_KME_ME1_TOP1_F4_me1_sc_mon_en_shift                        (0)
#define  KME_ME1_TOP1_KME_ME1_TOP1_F4_me1_sc_mon_cond_mask                       (0xFFFF0000)
#define  KME_ME1_TOP1_KME_ME1_TOP1_F4_me1_sc_mon_mode_mask                       (0x000000F0)
#define  KME_ME1_TOP1_KME_ME1_TOP1_F4_me1_sc_mon_en_mask                         (0x00000001)
#define  KME_ME1_TOP1_KME_ME1_TOP1_F4_me1_sc_mon_cond(data)                      (0xFFFF0000&((data)<<16))
#define  KME_ME1_TOP1_KME_ME1_TOP1_F4_me1_sc_mon_mode(data)                      (0x000000F0&((data)<<4))
#define  KME_ME1_TOP1_KME_ME1_TOP1_F4_me1_sc_mon_en(data)                        (0x00000001&(data))
#define  KME_ME1_TOP1_KME_ME1_TOP1_F4_get_me1_sc_mon_cond(data)                  ((0xFFFF0000&(data))>>16)
#define  KME_ME1_TOP1_KME_ME1_TOP1_F4_get_me1_sc_mon_mode(data)                  ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP1_KME_ME1_TOP1_F4_get_me1_sc_mon_en(data)                    (0x00000001&(data))

#define  KME_ME1_TOP1_ME1_SCENE1_14                                             0x1809C5F8
#define  KME_ME1_TOP1_ME1_SCENE1_14_reg_addr                                     "0xB809C5F8"
#define  KME_ME1_TOP1_ME1_SCENE1_14_reg                                          0xB809C5F8
#define  KME_ME1_TOP1_ME1_SCENE1_14_inst_addr                                    "0x0037"
#define  set_KME_ME1_TOP1_ME1_SCENE1_14_reg(data)                                (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_14_reg)=data)
#define  get_KME_ME1_TOP1_ME1_SCENE1_14_reg                                      (*((volatile unsigned int*)KME_ME1_TOP1_ME1_SCENE1_14_reg))
#define  KME_ME1_TOP1_ME1_SCENE1_14_regr_me1_sc_mon_data_shift                   (0)
#define  KME_ME1_TOP1_ME1_SCENE1_14_regr_me1_sc_mon_data_mask                    (0xFFFFFFFF)
#define  KME_ME1_TOP1_ME1_SCENE1_14_regr_me1_sc_mon_data(data)                   (0xFFFFFFFF&(data))
#define  KME_ME1_TOP1_ME1_SCENE1_14_get_regr_me1_sc_mon_data(data)               (0xFFFFFFFF&(data))

#define  KME_ME1_TOP1_ME1_WLC1_00                                               0x1809C5FC
#define  KME_ME1_TOP1_ME1_WLC1_00_reg_addr                                       "0xB809C5FC"
#define  KME_ME1_TOP1_ME1_WLC1_00_reg                                            0xB809C5FC
#define  KME_ME1_TOP1_ME1_WLC1_00_inst_addr                                      "0x0038"
#define  set_KME_ME1_TOP1_ME1_WLC1_00_reg(data)                                  (*((volatile unsigned int*)KME_ME1_TOP1_ME1_WLC1_00_reg)=data)
#define  get_KME_ME1_TOP1_ME1_WLC1_00_reg                                        (*((volatile unsigned int*)KME_ME1_TOP1_ME1_WLC1_00_reg))
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_updt_shift                    (5)
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_logo_shift                    (4)
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_dh_shift                      (3)
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_mc_shift                      (2)
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_me2_shift                     (1)
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_me1_shift                     (0)
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_updt_mask                     (0x00000020)
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_logo_mask                     (0x00000010)
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_dh_mask                       (0x00000008)
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_mc_mask                       (0x00000004)
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_me2_mask                      (0x00000002)
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_me1_mask                      (0x00000001)
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_updt(data)                    (0x00000020&((data)<<5))
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_logo(data)                    (0x00000010&((data)<<4))
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_dh(data)                      (0x00000008&((data)<<3))
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_mc(data)                      (0x00000004&((data)<<2))
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_me2(data)                     (0x00000002&((data)<<1))
#define  KME_ME1_TOP1_ME1_WLC1_00_regr_me1_sc_sync_me1(data)                     (0x00000001&(data))
#define  KME_ME1_TOP1_ME1_WLC1_00_get_regr_me1_sc_sync_updt(data)                ((0x00000020&(data))>>5)
#define  KME_ME1_TOP1_ME1_WLC1_00_get_regr_me1_sc_sync_logo(data)                ((0x00000010&(data))>>4)
#define  KME_ME1_TOP1_ME1_WLC1_00_get_regr_me1_sc_sync_dh(data)                  ((0x00000008&(data))>>3)
#define  KME_ME1_TOP1_ME1_WLC1_00_get_regr_me1_sc_sync_mc(data)                  ((0x00000004&(data))>>2)
#define  KME_ME1_TOP1_ME1_WLC1_00_get_regr_me1_sc_sync_me2(data)                 ((0x00000002&(data))>>1)
#define  KME_ME1_TOP1_ME1_WLC1_00_get_regr_me1_sc_sync_me1(data)                 (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_ME1_TOP1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_psad_alp_y1:6;
        RBus_UInt32  me1_psad_alp_x3:8;
        RBus_UInt32  me1_psad_alp_x2:8;
        RBus_UInt32  me1_psad_alp_x1:8;
    };
}kme_me1_top1_me1_common1_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_psad_alp_slope2:9;
        RBus_UInt32  me1_psad_alp_slope1:9;
        RBus_UInt32  me1_psad_alp_y3:6;
        RBus_UInt32  me1_psad_alp_y2:6;
    };
}kme_me1_top1_me1_common1_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_alp_x4:8;
        RBus_UInt32  me1_mvd_alp_x3:8;
        RBus_UInt32  me1_mvd_alp_x2:8;
        RBus_UInt32  me1_mvd_alp_x1:8;
    };
}kme_me1_top1_me1_common1_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_alp_y4:6;
        RBus_UInt32  me1_mvd_alp_y3:6;
        RBus_UInt32  me1_mvd_alp_y2:6;
        RBus_UInt32  me1_mvd_alp_y1:6;
        RBus_UInt32  me1_mvd_alp_x5:8;
    };
}kme_me1_top1_me1_common1_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me1_mvd_alp_slope2:9;
        RBus_UInt32  me1_mvd_alp_slope1:9;
        RBus_UInt32  me1_mvd_alp_y5:6;
    };
}kme_me1_top1_me1_common1_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  me1_mvd_alp_slope4:9;
        RBus_UInt32  me1_mvd_alp_slope3:9;
    };
}kme_me1_top1_me1_common1_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_mvd_cuv_x3:10;
        RBus_UInt32  me1_mvd_cuv_x2:10;
        RBus_UInt32  me1_mvd_cuv_x1:10;
    };
}kme_me1_top1_me1_common1_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_mvd_cuv_y3:10;
        RBus_UInt32  me1_mvd_cuv_y2:10;
        RBus_UInt32  me1_mvd_cuv_y1:10;
    };
}kme_me1_top1_me1_common1_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  me1_mvd_cuv_slope2:13;
        RBus_UInt32  me1_mvd_cuv_slope1:13;
    };
}kme_me1_top1_me1_common1_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_dgain_x4:8;
        RBus_UInt32  me1_mvd_dgain_x3:8;
        RBus_UInt32  me1_mvd_dgain_x2:8;
        RBus_UInt32  me1_mvd_dgain_x1:8;
    };
}kme_me1_top1_me1_common1_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_mvd_dgain_y2:10;
        RBus_UInt32  me1_mvd_dgain_y1:10;
        RBus_UInt32  me1_mvd_dgain_x5:8;
    };
}kme_me1_top1_me1_common1_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_mvd_dgain_y5:10;
        RBus_UInt32  me1_mvd_dgain_y4:10;
        RBus_UInt32  me1_mvd_dgain_y3:10;
    };
}kme_me1_top1_me1_common1_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_dgain_slope2:16;
        RBus_UInt32  me1_mvd_dgain_slope1:16;
    };
}kme_me1_top1_me1_common1_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_dgain_slope4:16;
        RBus_UInt32  me1_mvd_dgain_slope3:16;
    };
}kme_me1_top1_me1_common1_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_mvd_pgain_x3:10;
        RBus_UInt32  me1_mvd_pgain_x2:10;
        RBus_UInt32  me1_mvd_pgain_x1:10;
    };
}kme_me1_top1_me1_common1_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  me1_mvd_pgain_slope1:9;
        RBus_UInt32  me1_mvd_pgain_y3:6;
        RBus_UInt32  me1_mvd_pgain_y2:6;
        RBus_UInt32  me1_mvd_pgain_y1:6;
    };
}kme_me1_top1_me1_common1_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmvd_ucf_x2:10;
        RBus_UInt32  me1_gmvd_ucf_x1:10;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_mvd_pgain_slope2:9;
    };
}kme_me1_top1_me1_common1_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmvd_ucf_y2:8;
        RBus_UInt32  me1_gmvd_ucf_y1:8;
        RBus_UInt32  res1:6;
        RBus_UInt32  me1_gmvd_ucf_x3:10;
    };
}kme_me1_top1_me1_common1_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_gmvd_ucf_slope2:11;
        RBus_UInt32  res2:1;
        RBus_UInt32  me1_gmvd_ucf_slope1:11;
        RBus_UInt32  me1_gmvd_ucf_y3:8;
    };
}kme_me1_top1_me1_common1_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me1_gmvd_cnt_x2:12;
        RBus_UInt32  me1_gmvd_cnt_x1:12;
    };
}kme_me1_top1_me1_common1_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmvd_cnt_y2:8;
        RBus_UInt32  me1_gmvd_cnt_y1:8;
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_gmvd_cnt_x3:12;
    };
}kme_me1_top1_me1_common1_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_gmvd_cnt_slope2:11;
        RBus_UInt32  res2:1;
        RBus_UInt32  me1_gmvd_cnt_slope1:11;
        RBus_UInt32  me1_gmvd_cnt_y3:8;
    };
}kme_me1_top1_me1_common1_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_rnd_x4:8;
        RBus_UInt32  me1_adptpnt_rnd_x3:8;
        RBus_UInt32  me1_adptpnt_rnd_x2:8;
        RBus_UInt32  me1_adptpnt_rnd_x1:8;
    };
}kme_me1_top1_me1_common1_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  me1_adptpnt_rnd_y4:6;
        RBus_UInt32  me1_adptpnt_rnd_y3:6;
        RBus_UInt32  me1_adptpnt_rnd_y2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  me1_adptpnt_rnd_y1:6;
    };
}kme_me1_top1_me1_common1_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  me1_adptpnt_rnd_slope3:9;
        RBus_UInt32  me1_adptpnt_rnd_slope2:9;
        RBus_UInt32  me1_adptpnt_rnd_slope1:9;
    };
}kme_me1_top1_me1_common1_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_adptpnt_gmv_cnt_y1:6;
        RBus_UInt32  me1_adptpnt_gmv_cnt_x2:12;
        RBus_UInt32  me1_adptpnt_gmv_cnt_x1:12;
    };
}kme_me1_top1_me1_common1_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_gmv_ucf_x1:10;
        RBus_UInt32  res1:5;
        RBus_UInt32  me1_adptpnt_gmv_cnt_slope1:11;
        RBus_UInt32  me1_adptpnt_gmv_cnt_y2:6;
    };
}kme_me1_top1_kme_me1_top1_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  me1_adptpnt_gmv_ucf_y2:6;
        RBus_UInt32  me1_adptpnt_gmv_ucf_y1:6;
        RBus_UInt32  me1_adptpnt_gmv_ucf_x2:10;
    };
}kme_me1_top1_me1_common1_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mm_psad_norm_x2:10;
        RBus_UInt32  me1_mm_psad_norm_x1:10;
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_adptpnt_gmv_ucf_slope1:11;
    };
}kme_me1_top1_me1_common1_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_mm_psad_norm_y1:10;
        RBus_UInt32  me1_mm_psad_norm_x4:10;
        RBus_UInt32  me1_mm_psad_norm_x3:10;
    };
}kme_me1_top1_me1_common1_29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_mm_psad_norm_y4:10;
        RBus_UInt32  me1_mm_psad_norm_y3:10;
        RBus_UInt32  me1_mm_psad_norm_y2:10;
    };
}kme_me1_top1_me1_common1_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_mm_psad_norm_slope2:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  me1_mm_psad_norm_slope1:15;
    };
}kme_me1_top1_me1_common1_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  me1_mm_psad_norm_slope3:15;
    };
}kme_me1_top1_me1_common1_32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_adptpnt_gmv_sad_x2:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  me1_adptpnt_gmv_sad_x1:13;
    };
}kme_me1_top1_me1_common1_33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_adptpnt_gmv_sad_y1:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  me1_adptpnt_gmv_sad_x3:13;
    };
}kme_me1_top1_me1_common1_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_adptpnt_gmv_sad_y3:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  me1_adptpnt_gmv_sad_y2:13;
    };
}kme_me1_top1_me1_common1_35_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_gmv_sad_slope2:16;
        RBus_UInt32  me1_adptpnt_gmv_sad_slope1:16;
    };
}kme_me1_top1_me1_common1_36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_adptpnt_zmv_sad_x2:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  me1_adptpnt_zmv_sad_x1:13;
    };
}kme_me1_top1_me1_common1_37_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_adptpnt_zmv_sad_y1:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  me1_adptpnt_zmv_sad_x3:13;
    };
}kme_me1_top1_me1_common1_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_adptpnt_zmv_sad_y3:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  me1_adptpnt_zmv_sad_y2:13;
    };
}kme_me1_top1_me1_common1_39_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_zmv_sad_slope2:16;
        RBus_UInt32  me1_adptpnt_zmv_sad_slope1:16;
    };
}kme_me1_top1_me1_common1_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  me1_sc_vs_in_sel:1;
        RBus_UInt32  me1_sc_hold_mask_en:1;
        RBus_UInt32  me1_sc_logo_en:1;
        RBus_UInt32  me1_sc_dh_en:1;
        RBus_UInt32  me1_sc_mc_en:1;
        RBus_UInt32  me1_sc_me2_en:1;
        RBus_UInt32  me1_sc_me1_en:1;
        RBus_UInt32  me1_sc_mot_en:1;
        RBus_UInt32  me1_sc_spati_css_en:1;
        RBus_UInt32  me1_sc_tempo_css_en:1;
        RBus_UInt32  me1_sc_zgmv_en:1;
        RBus_UInt32  me1_sc_film_switch_en:1;
        RBus_UInt32  me1_sc_dtl_en:1;
        RBus_UInt32  me1_sc_saddiff_en:1;
        RBus_UInt32  me1_sc_sad_en:1;
        RBus_UInt32  me1_sc_sw_ctrl_en:1;
    };
}kme_me1_top1_me1_scene1_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  me1_sc_logo_pre_cnt:5;
        RBus_UInt32  me1_sc_dh_pre_cnt:5;
        RBus_UInt32  me1_sc_mc_pre_cnt:5;
        RBus_UInt32  me1_sc_me2_pre_cnt:5;
        RBus_UInt32  me1_sc_me1_pre_cnt:5;
    };
}kme_me1_top1_me1_scene1_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_dh_hold_cnt:8;
        RBus_UInt32  me1_sc_mc_hold_cnt:8;
        RBus_UInt32  me1_sc_me2_hold_cnt:8;
        RBus_UInt32  me1_sc_me1_hold_cnt:8;
    };
}kme_me1_top1_me1_scene1_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_static_keep_th:6;
        RBus_UInt32  me1_sc_status_frm:4;
        RBus_UInt32  res1:6;
        RBus_UInt32  me1_sc_post_cnt:8;
        RBus_UInt32  me1_sc_logo_hold_cnt:8;
    };
}kme_me1_top1_me1_scene1_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_sc_static_dtl_th:31;
    };
}kme_me1_top1_me1_scene1_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_sc_dtl_th:31;
    };
}kme_me1_top1_me1_scene1_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_sc_sad_th:31;
    };
}kme_me1_top1_me1_scene1_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_sc_saddiff_th:31;
    };
}kme_me1_top1_me1_scene1_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_sc_tempo_css_th:31;
    };
}kme_me1_top1_me1_scene1_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_sc_spati_css_th:31;
    };
}kme_me1_top1_me1_scene1_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_sc_mot_th:31;
    };
}kme_me1_top1_me1_scene1_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  me1_sc_zgmv_cnt_th:8;
    };
}kme_me1_top1_me1_scene1_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  me1_sc_post_dir:2;
        RBus_UInt32  me1_sc_post_bvy:10;
        RBus_UInt32  me1_sc_post_bvx:11;
    };
}kme_me1_top1_me1_scene1_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_mon_cond:16;
        RBus_UInt32  res1:8;
        RBus_UInt32  me1_sc_mon_mode:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  me1_sc_mon_en:1;
    };
}kme_me1_top1_kme_me1_top1_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_sc_mon_data:32;
    };
}kme_me1_top1_me1_scene1_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  regr_me1_sc_sync_updt:1;
        RBus_UInt32  regr_me1_sc_sync_logo:1;
        RBus_UInt32  regr_me1_sc_sync_dh:1;
        RBus_UInt32  regr_me1_sc_sync_mc:1;
        RBus_UInt32  regr_me1_sc_sync_me2:1;
        RBus_UInt32  regr_me1_sc_sync_me1:1;
    };
}kme_me1_top1_me1_wlc1_00_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_ME1_TOP1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_psad_alp_x1:8;
        RBus_UInt32  me1_psad_alp_x2:8;
        RBus_UInt32  me1_psad_alp_x3:8;
        RBus_UInt32  me1_psad_alp_y1:6;
        RBus_UInt32  res1:2;
    };
}kme_me1_top1_me1_common1_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_psad_alp_y2:6;
        RBus_UInt32  me1_psad_alp_y3:6;
        RBus_UInt32  me1_psad_alp_slope1:9;
        RBus_UInt32  me1_psad_alp_slope2:9;
        RBus_UInt32  res1:2;
    };
}kme_me1_top1_me1_common1_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_alp_x1:8;
        RBus_UInt32  me1_mvd_alp_x2:8;
        RBus_UInt32  me1_mvd_alp_x3:8;
        RBus_UInt32  me1_mvd_alp_x4:8;
    };
}kme_me1_top1_me1_common1_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_alp_x5:8;
        RBus_UInt32  me1_mvd_alp_y1:6;
        RBus_UInt32  me1_mvd_alp_y2:6;
        RBus_UInt32  me1_mvd_alp_y3:6;
        RBus_UInt32  me1_mvd_alp_y4:6;
    };
}kme_me1_top1_me1_common1_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_alp_y5:6;
        RBus_UInt32  me1_mvd_alp_slope1:9;
        RBus_UInt32  me1_mvd_alp_slope2:9;
        RBus_UInt32  res1:8;
    };
}kme_me1_top1_me1_common1_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_alp_slope3:9;
        RBus_UInt32  me1_mvd_alp_slope4:9;
        RBus_UInt32  res1:14;
    };
}kme_me1_top1_me1_common1_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_cuv_x1:10;
        RBus_UInt32  me1_mvd_cuv_x2:10;
        RBus_UInt32  me1_mvd_cuv_x3:10;
        RBus_UInt32  res1:2;
    };
}kme_me1_top1_me1_common1_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_cuv_y1:10;
        RBus_UInt32  me1_mvd_cuv_y2:10;
        RBus_UInt32  me1_mvd_cuv_y3:10;
        RBus_UInt32  res1:2;
    };
}kme_me1_top1_me1_common1_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_cuv_slope1:13;
        RBus_UInt32  me1_mvd_cuv_slope2:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top1_me1_common1_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_dgain_x1:8;
        RBus_UInt32  me1_mvd_dgain_x2:8;
        RBus_UInt32  me1_mvd_dgain_x3:8;
        RBus_UInt32  me1_mvd_dgain_x4:8;
    };
}kme_me1_top1_me1_common1_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_dgain_x5:8;
        RBus_UInt32  me1_mvd_dgain_y1:10;
        RBus_UInt32  me1_mvd_dgain_y2:10;
        RBus_UInt32  res1:4;
    };
}kme_me1_top1_me1_common1_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_dgain_y3:10;
        RBus_UInt32  me1_mvd_dgain_y4:10;
        RBus_UInt32  me1_mvd_dgain_y5:10;
        RBus_UInt32  res1:2;
    };
}kme_me1_top1_me1_common1_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_dgain_slope1:16;
        RBus_UInt32  me1_mvd_dgain_slope2:16;
    };
}kme_me1_top1_me1_common1_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_dgain_slope3:16;
        RBus_UInt32  me1_mvd_dgain_slope4:16;
    };
}kme_me1_top1_me1_common1_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_pgain_x1:10;
        RBus_UInt32  me1_mvd_pgain_x2:10;
        RBus_UInt32  me1_mvd_pgain_x3:10;
        RBus_UInt32  res1:2;
    };
}kme_me1_top1_me1_common1_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_pgain_y1:6;
        RBus_UInt32  me1_mvd_pgain_y2:6;
        RBus_UInt32  me1_mvd_pgain_y3:6;
        RBus_UInt32  me1_mvd_pgain_slope1:9;
        RBus_UInt32  res1:5;
    };
}kme_me1_top1_me1_common1_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mvd_pgain_slope2:9;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_gmvd_ucf_x1:10;
        RBus_UInt32  me1_gmvd_ucf_x2:10;
    };
}kme_me1_top1_me1_common1_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmvd_ucf_x3:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  me1_gmvd_ucf_y1:8;
        RBus_UInt32  me1_gmvd_ucf_y2:8;
    };
}kme_me1_top1_me1_common1_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmvd_ucf_y3:8;
        RBus_UInt32  me1_gmvd_ucf_slope1:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_gmvd_ucf_slope2:11;
        RBus_UInt32  res2:1;
    };
}kme_me1_top1_me1_common1_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmvd_cnt_x1:12;
        RBus_UInt32  me1_gmvd_cnt_x2:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top1_me1_common1_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmvd_cnt_x3:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_gmvd_cnt_y1:8;
        RBus_UInt32  me1_gmvd_cnt_y2:8;
    };
}kme_me1_top1_me1_common1_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmvd_cnt_y3:8;
        RBus_UInt32  me1_gmvd_cnt_slope1:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_gmvd_cnt_slope2:11;
        RBus_UInt32  res2:1;
    };
}kme_me1_top1_me1_common1_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_rnd_x1:8;
        RBus_UInt32  me1_adptpnt_rnd_x2:8;
        RBus_UInt32  me1_adptpnt_rnd_x3:8;
        RBus_UInt32  me1_adptpnt_rnd_x4:8;
    };
}kme_me1_top1_me1_common1_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_rnd_y1:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_adptpnt_rnd_y2:6;
        RBus_UInt32  me1_adptpnt_rnd_y3:6;
        RBus_UInt32  me1_adptpnt_rnd_y4:6;
        RBus_UInt32  res2:6;
    };
}kme_me1_top1_me1_common1_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_rnd_slope1:9;
        RBus_UInt32  me1_adptpnt_rnd_slope2:9;
        RBus_UInt32  me1_adptpnt_rnd_slope3:9;
        RBus_UInt32  res1:5;
    };
}kme_me1_top1_me1_common1_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_gmv_cnt_x1:12;
        RBus_UInt32  me1_adptpnt_gmv_cnt_x2:12;
        RBus_UInt32  me1_adptpnt_gmv_cnt_y1:6;
        RBus_UInt32  res1:2;
    };
}kme_me1_top1_me1_common1_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_gmv_cnt_y2:6;
        RBus_UInt32  me1_adptpnt_gmv_cnt_slope1:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  me1_adptpnt_gmv_ucf_x1:10;
    };
}kme_me1_top1_kme_me1_top1_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_gmv_ucf_x2:10;
        RBus_UInt32  me1_adptpnt_gmv_ucf_y1:6;
        RBus_UInt32  me1_adptpnt_gmv_ucf_y2:6;
        RBus_UInt32  res1:10;
    };
}kme_me1_top1_me1_common1_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_gmv_ucf_slope1:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_mm_psad_norm_x1:10;
        RBus_UInt32  me1_mm_psad_norm_x2:10;
    };
}kme_me1_top1_me1_common1_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mm_psad_norm_x3:10;
        RBus_UInt32  me1_mm_psad_norm_x4:10;
        RBus_UInt32  me1_mm_psad_norm_y1:10;
        RBus_UInt32  res1:2;
    };
}kme_me1_top1_me1_common1_29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mm_psad_norm_y2:10;
        RBus_UInt32  me1_mm_psad_norm_y3:10;
        RBus_UInt32  me1_mm_psad_norm_y4:10;
        RBus_UInt32  res1:2;
    };
}kme_me1_top1_me1_common1_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mm_psad_norm_slope1:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_mm_psad_norm_slope2:15;
        RBus_UInt32  res2:1;
    };
}kme_me1_top1_me1_common1_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mm_psad_norm_slope3:15;
        RBus_UInt32  res1:17;
    };
}kme_me1_top1_me1_common1_32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_gmv_sad_x1:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_adptpnt_gmv_sad_x2:13;
        RBus_UInt32  res2:3;
    };
}kme_me1_top1_me1_common1_33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_gmv_sad_x3:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_adptpnt_gmv_sad_y1:13;
        RBus_UInt32  res2:3;
    };
}kme_me1_top1_me1_common1_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_gmv_sad_y2:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_adptpnt_gmv_sad_y3:13;
        RBus_UInt32  res2:3;
    };
}kme_me1_top1_me1_common1_35_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_gmv_sad_slope1:16;
        RBus_UInt32  me1_adptpnt_gmv_sad_slope2:16;
    };
}kme_me1_top1_me1_common1_36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_zmv_sad_x1:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_adptpnt_zmv_sad_x2:13;
        RBus_UInt32  res2:3;
    };
}kme_me1_top1_me1_common1_37_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_zmv_sad_x3:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_adptpnt_zmv_sad_y1:13;
        RBus_UInt32  res2:3;
    };
}kme_me1_top1_me1_common1_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_zmv_sad_y2:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_adptpnt_zmv_sad_y3:13;
        RBus_UInt32  res2:3;
    };
}kme_me1_top1_me1_common1_39_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_adptpnt_zmv_sad_slope1:16;
        RBus_UInt32  me1_adptpnt_zmv_sad_slope2:16;
    };
}kme_me1_top1_me1_common1_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_sw_ctrl_en:1;
        RBus_UInt32  me1_sc_sad_en:1;
        RBus_UInt32  me1_sc_saddiff_en:1;
        RBus_UInt32  me1_sc_dtl_en:1;
        RBus_UInt32  me1_sc_film_switch_en:1;
        RBus_UInt32  me1_sc_zgmv_en:1;
        RBus_UInt32  me1_sc_tempo_css_en:1;
        RBus_UInt32  me1_sc_spati_css_en:1;
        RBus_UInt32  me1_sc_mot_en:1;
        RBus_UInt32  me1_sc_me1_en:1;
        RBus_UInt32  me1_sc_me2_en:1;
        RBus_UInt32  me1_sc_mc_en:1;
        RBus_UInt32  me1_sc_dh_en:1;
        RBus_UInt32  me1_sc_logo_en:1;
        RBus_UInt32  me1_sc_hold_mask_en:1;
        RBus_UInt32  me1_sc_vs_in_sel:1;
        RBus_UInt32  res1:16;
    };
}kme_me1_top1_me1_scene1_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_me1_pre_cnt:5;
        RBus_UInt32  me1_sc_me2_pre_cnt:5;
        RBus_UInt32  me1_sc_mc_pre_cnt:5;
        RBus_UInt32  me1_sc_dh_pre_cnt:5;
        RBus_UInt32  me1_sc_logo_pre_cnt:5;
        RBus_UInt32  res1:7;
    };
}kme_me1_top1_me1_scene1_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_me1_hold_cnt:8;
        RBus_UInt32  me1_sc_me2_hold_cnt:8;
        RBus_UInt32  me1_sc_mc_hold_cnt:8;
        RBus_UInt32  me1_sc_dh_hold_cnt:8;
    };
}kme_me1_top1_me1_scene1_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_logo_hold_cnt:8;
        RBus_UInt32  me1_sc_post_cnt:8;
        RBus_UInt32  res1:6;
        RBus_UInt32  me1_sc_status_frm:4;
        RBus_UInt32  me1_sc_static_keep_th:6;
    };
}kme_me1_top1_me1_scene1_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_static_dtl_th:31;
        RBus_UInt32  res1:1;
    };
}kme_me1_top1_me1_scene1_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_dtl_th:31;
        RBus_UInt32  res1:1;
    };
}kme_me1_top1_me1_scene1_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_sad_th:31;
        RBus_UInt32  res1:1;
    };
}kme_me1_top1_me1_scene1_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_saddiff_th:31;
        RBus_UInt32  res1:1;
    };
}kme_me1_top1_me1_scene1_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_tempo_css_th:31;
        RBus_UInt32  res1:1;
    };
}kme_me1_top1_me1_scene1_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_spati_css_th:31;
        RBus_UInt32  res1:1;
    };
}kme_me1_top1_me1_scene1_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_mot_th:31;
        RBus_UInt32  res1:1;
    };
}kme_me1_top1_me1_scene1_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_zgmv_cnt_th:8;
        RBus_UInt32  res1:24;
    };
}kme_me1_top1_me1_scene1_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_post_bvx:11;
        RBus_UInt32  me1_sc_post_bvy:10;
        RBus_UInt32  me1_sc_post_dir:2;
        RBus_UInt32  res1:9;
    };
}kme_me1_top1_me1_scene1_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sc_mon_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_sc_mon_mode:4;
        RBus_UInt32  res2:8;
        RBus_UInt32  me1_sc_mon_cond:16;
    };
}kme_me1_top1_kme_me1_top1_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_sc_mon_data:32;
    };
}kme_me1_top1_me1_scene1_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_sc_sync_me1:1;
        RBus_UInt32  regr_me1_sc_sync_me2:1;
        RBus_UInt32  regr_me1_sc_sync_mc:1;
        RBus_UInt32  regr_me1_sc_sync_dh:1;
        RBus_UInt32  regr_me1_sc_sync_logo:1;
        RBus_UInt32  regr_me1_sc_sync_updt:1;
        RBus_UInt32  res1:26;
    };
}kme_me1_top1_me1_wlc1_00_RBUS;




#endif 


#endif 
