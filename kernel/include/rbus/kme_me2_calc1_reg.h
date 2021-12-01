/**
* @file Merlin5_MEMC_KME_ME2_CALC1
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_ME2_CALC1_REG_H_
#define _RBUS_KME_ME2_CALC1_REG_H_

#include "rbus_types.h"



//  KME_ME2_CALC1 Register Address
#define  KME_ME2_CALC1_KME_ME2_CALC1_00                                         0x1809BA00
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_reg_addr                                 "0xB809BA00"
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_reg                                      0xB809BA00
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_inst_addr                                "0x0000"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_00_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_00_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_00_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_00_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_rnd_y2_shift                 (23)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_rnd_y1_shift                 (17)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_zmv_gain_shift               (7)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_rnd_en_shift                 (6)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_gmv_en_shift                 (5)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_zmv_en_shift                 (4)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_rnd_mode_shift               (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_rnd_y2_mask                  (0x1F800000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_rnd_y1_mask                  (0x007E0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_zmv_gain_mask                (0x0001FF80)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_rnd_en_mask                  (0x00000040)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_gmv_en_mask                  (0x00000020)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_zmv_en_mask                  (0x00000010)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_rnd_mode_mask                (0x0000000F)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_rnd_y2(data)                 (0x1F800000&((data)<<23))
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_rnd_y1(data)                 (0x007E0000&((data)<<17))
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_zmv_gain(data)               (0x0001FF80&((data)<<7))
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_rnd_en(data)                 (0x00000040&((data)<<6))
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_gmv_en(data)                 (0x00000020&((data)<<5))
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_zmv_en(data)                 (0x00000010&((data)<<4))
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_me2_adptpnt_rnd_mode(data)               (0x0000000F&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_get_me2_adptpnt_rnd_y2(data)             ((0x1F800000&(data))>>23)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_get_me2_adptpnt_rnd_y1(data)             ((0x007E0000&(data))>>17)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_get_me2_adptpnt_zmv_gain(data)           ((0x0001FF80&(data))>>7)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_get_me2_adptpnt_rnd_en(data)             ((0x00000040&(data))>>6)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_get_me2_adptpnt_gmv_en(data)             ((0x00000020&(data))>>5)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_get_me2_adptpnt_zmv_en(data)             ((0x00000010&(data))>>4)
#define  KME_ME2_CALC1_KME_ME2_CALC1_00_get_me2_adptpnt_rnd_mode(data)           (0x0000000F&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_04                                         0x1809BA04
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_reg_addr                                 "0xB809BA04"
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_reg                                      0xB809BA04
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_inst_addr                                "0x0001"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_04_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_04_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_04_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_04_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_me2_adptpnt_rnd_x4_shift                 (24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_me2_adptpnt_rnd_x3_shift                 (16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_me2_adptpnt_rnd_x2_shift                 (8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_me2_adptpnt_rnd_x1_shift                 (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_me2_adptpnt_rnd_x4_mask                  (0xFF000000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_me2_adptpnt_rnd_x3_mask                  (0x00FF0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_me2_adptpnt_rnd_x2_mask                  (0x0000FF00)
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_me2_adptpnt_rnd_x1_mask                  (0x000000FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_me2_adptpnt_rnd_x4(data)                 (0xFF000000&((data)<<24))
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_me2_adptpnt_rnd_x3(data)                 (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_me2_adptpnt_rnd_x2(data)                 (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_me2_adptpnt_rnd_x1(data)                 (0x000000FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_get_me2_adptpnt_rnd_x4(data)             ((0xFF000000&(data))>>24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_get_me2_adptpnt_rnd_x3(data)             ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_get_me2_adptpnt_rnd_x2(data)             ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_04_get_me2_adptpnt_rnd_x1(data)             (0x000000FF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_08                                         0x1809BA08
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_reg_addr                                 "0xB809BA08"
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_reg                                      0xB809BA08
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_inst_addr                                "0x0002"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_08_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_08_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_08_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_08_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_me2_adptpnt_rnd_slope2_shift             (21)
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_me2_adptpnt_rnd_slope1_shift             (12)
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_me2_adptpnt_rnd_y4_shift                 (6)
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_me2_adptpnt_rnd_y3_shift                 (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_me2_adptpnt_rnd_slope2_mask              (0x3FE00000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_me2_adptpnt_rnd_slope1_mask              (0x001FF000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_me2_adptpnt_rnd_y4_mask                  (0x00000FC0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_me2_adptpnt_rnd_y3_mask                  (0x0000003F)
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_me2_adptpnt_rnd_slope2(data)             (0x3FE00000&((data)<<21))
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_me2_adptpnt_rnd_slope1(data)             (0x001FF000&((data)<<12))
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_me2_adptpnt_rnd_y4(data)                 (0x00000FC0&((data)<<6))
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_me2_adptpnt_rnd_y3(data)                 (0x0000003F&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_get_me2_adptpnt_rnd_slope2(data)         ((0x3FE00000&(data))>>21)
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_get_me2_adptpnt_rnd_slope1(data)         ((0x001FF000&(data))>>12)
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_get_me2_adptpnt_rnd_y4(data)             ((0x00000FC0&(data))>>6)
#define  KME_ME2_CALC1_KME_ME2_CALC1_08_get_me2_adptpnt_rnd_y3(data)             (0x0000003F&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_0C                                         0x1809BA0C
#define  KME_ME2_CALC1_KME_ME2_CALC1_0C_reg_addr                                 "0xB809BA0C"
#define  KME_ME2_CALC1_KME_ME2_CALC1_0C_reg                                      0xB809BA0C
#define  KME_ME2_CALC1_KME_ME2_CALC1_0C_inst_addr                                "0x0003"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_0C_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_0C_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_0C_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_0C_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_0C_me2_adptpnt_gmv_cnt_x1_shift             (9)
#define  KME_ME2_CALC1_KME_ME2_CALC1_0C_me2_adptpnt_rnd_slope3_shift             (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_0C_me2_adptpnt_gmv_cnt_x1_mask              (0x001FFE00)
#define  KME_ME2_CALC1_KME_ME2_CALC1_0C_me2_adptpnt_rnd_slope3_mask              (0x000001FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_0C_me2_adptpnt_gmv_cnt_x1(data)             (0x001FFE00&((data)<<9))
#define  KME_ME2_CALC1_KME_ME2_CALC1_0C_me2_adptpnt_rnd_slope3(data)             (0x000001FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_0C_get_me2_adptpnt_gmv_cnt_x1(data)         ((0x001FFE00&(data))>>9)
#define  KME_ME2_CALC1_KME_ME2_CALC1_0C_get_me2_adptpnt_rnd_slope3(data)         (0x000001FF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_10                                         0x1809BA10
#define  KME_ME2_CALC1_KME_ME2_CALC1_10_reg_addr                                 "0xB809BA10"
#define  KME_ME2_CALC1_KME_ME2_CALC1_10_reg                                      0xB809BA10
#define  KME_ME2_CALC1_KME_ME2_CALC1_10_inst_addr                                "0x0004"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_10_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_10_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_10_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_10_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_10_me2_adptpnt_gmv_cnt_y2_shift             (18)
#define  KME_ME2_CALC1_KME_ME2_CALC1_10_me2_adptpnt_gmv_cnt_y1_shift             (12)
#define  KME_ME2_CALC1_KME_ME2_CALC1_10_me2_adptpnt_gmv_cnt_x2_shift             (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_10_me2_adptpnt_gmv_cnt_y2_mask              (0x00FC0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_10_me2_adptpnt_gmv_cnt_y1_mask              (0x0003F000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_10_me2_adptpnt_gmv_cnt_x2_mask              (0x00000FFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_10_me2_adptpnt_gmv_cnt_y2(data)             (0x00FC0000&((data)<<18))
#define  KME_ME2_CALC1_KME_ME2_CALC1_10_me2_adptpnt_gmv_cnt_y1(data)             (0x0003F000&((data)<<12))
#define  KME_ME2_CALC1_KME_ME2_CALC1_10_me2_adptpnt_gmv_cnt_x2(data)             (0x00000FFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_10_get_me2_adptpnt_gmv_cnt_y2(data)         ((0x00FC0000&(data))>>18)
#define  KME_ME2_CALC1_KME_ME2_CALC1_10_get_me2_adptpnt_gmv_cnt_y1(data)         ((0x0003F000&(data))>>12)
#define  KME_ME2_CALC1_KME_ME2_CALC1_10_get_me2_adptpnt_gmv_cnt_x2(data)         (0x00000FFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_14                                         0x1809BA14
#define  KME_ME2_CALC1_KME_ME2_CALC1_14_reg_addr                                 "0xB809BA14"
#define  KME_ME2_CALC1_KME_ME2_CALC1_14_reg                                      0xB809BA14
#define  KME_ME2_CALC1_KME_ME2_CALC1_14_inst_addr                                "0x0005"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_14_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_14_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_14_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_14_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_14_me2_adptpnt_gmv_ucf_slope1_shift         (11)
#define  KME_ME2_CALC1_KME_ME2_CALC1_14_me2_adptpnt_gmv_cnt_slope1_shift         (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_14_me2_adptpnt_gmv_ucf_slope1_mask          (0x003FF800)
#define  KME_ME2_CALC1_KME_ME2_CALC1_14_me2_adptpnt_gmv_cnt_slope1_mask          (0x000007FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_14_me2_adptpnt_gmv_ucf_slope1(data)         (0x003FF800&((data)<<11))
#define  KME_ME2_CALC1_KME_ME2_CALC1_14_me2_adptpnt_gmv_cnt_slope1(data)         (0x000007FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_14_get_me2_adptpnt_gmv_ucf_slope1(data)     ((0x003FF800&(data))>>11)
#define  KME_ME2_CALC1_KME_ME2_CALC1_14_get_me2_adptpnt_gmv_cnt_slope1(data)     (0x000007FF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_18                                         0x1809BA18
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_reg_addr                                 "0xB809BA18"
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_reg                                      0xB809BA18
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_inst_addr                                "0x0006"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_18_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_18_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_18_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_18_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_me2_adptpnt_gmv_ucf_y2_shift             (26)
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_me2_adptpnt_gmv_ucf_y1_shift             (20)
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_me2_adptpnt_gmv_ucf_x2_shift             (10)
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_me2_adptpnt_gmv_ucf_x1_shift             (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_me2_adptpnt_gmv_ucf_y2_mask              (0xFC000000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_me2_adptpnt_gmv_ucf_y1_mask              (0x03F00000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_me2_adptpnt_gmv_ucf_x2_mask              (0x000FFC00)
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_me2_adptpnt_gmv_ucf_x1_mask              (0x000003FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_me2_adptpnt_gmv_ucf_y2(data)             (0xFC000000&((data)<<26))
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_me2_adptpnt_gmv_ucf_y1(data)             (0x03F00000&((data)<<20))
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_me2_adptpnt_gmv_ucf_x2(data)             (0x000FFC00&((data)<<10))
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_me2_adptpnt_gmv_ucf_x1(data)             (0x000003FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_get_me2_adptpnt_gmv_ucf_y2(data)         ((0xFC000000&(data))>>26)
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_get_me2_adptpnt_gmv_ucf_y1(data)         ((0x03F00000&(data))>>20)
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_get_me2_adptpnt_gmv_ucf_x2(data)         ((0x000FFC00&(data))>>10)
#define  KME_ME2_CALC1_KME_ME2_CALC1_18_get_me2_adptpnt_gmv_ucf_x1(data)         (0x000003FF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_1C                                         0x1809BA1C
#define  KME_ME2_CALC1_KME_ME2_CALC1_1C_reg_addr                                 "0xB809BA1C"
#define  KME_ME2_CALC1_KME_ME2_CALC1_1C_reg                                      0xB809BA1C
#define  KME_ME2_CALC1_KME_ME2_CALC1_1C_inst_addr                                "0x0007"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_1C_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_1C_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_1C_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_1C_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_1C_me2_sad_th_slope_ac_shift                (26)
#define  KME_ME2_CALC1_KME_ME2_CALC1_1C_me2_adptpnt_gmv_sad_x2_shift             (13)
#define  KME_ME2_CALC1_KME_ME2_CALC1_1C_me2_adptpnt_gmv_sad_x1_shift             (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_1C_me2_sad_th_slope_ac_mask                 (0xFC000000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_1C_me2_adptpnt_gmv_sad_x2_mask              (0x03FFE000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_1C_me2_adptpnt_gmv_sad_x1_mask              (0x00001FFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_1C_me2_sad_th_slope_ac(data)                (0xFC000000&((data)<<26))
#define  KME_ME2_CALC1_KME_ME2_CALC1_1C_me2_adptpnt_gmv_sad_x2(data)             (0x03FFE000&((data)<<13))
#define  KME_ME2_CALC1_KME_ME2_CALC1_1C_me2_adptpnt_gmv_sad_x1(data)             (0x00001FFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_1C_get_me2_sad_th_slope_ac(data)            ((0xFC000000&(data))>>26)
#define  KME_ME2_CALC1_KME_ME2_CALC1_1C_get_me2_adptpnt_gmv_sad_x2(data)         ((0x03FFE000&(data))>>13)
#define  KME_ME2_CALC1_KME_ME2_CALC1_1C_get_me2_adptpnt_gmv_sad_x1(data)         (0x00001FFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_20                                         0x1809BA20
#define  KME_ME2_CALC1_KME_ME2_CALC1_20_reg_addr                                 "0xB809BA20"
#define  KME_ME2_CALC1_KME_ME2_CALC1_20_reg                                      0xB809BA20
#define  KME_ME2_CALC1_KME_ME2_CALC1_20_inst_addr                                "0x0008"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_20_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_20_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_20_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_20_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_20_me2_adptpnt_gmv_sad_y1_shift             (13)
#define  KME_ME2_CALC1_KME_ME2_CALC1_20_me2_adptpnt_gmv_sad_x3_shift             (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_20_me2_adptpnt_gmv_sad_y1_mask              (0x03FFE000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_20_me2_adptpnt_gmv_sad_x3_mask              (0x00001FFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_20_me2_adptpnt_gmv_sad_y1(data)             (0x03FFE000&((data)<<13))
#define  KME_ME2_CALC1_KME_ME2_CALC1_20_me2_adptpnt_gmv_sad_x3(data)             (0x00001FFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_20_get_me2_adptpnt_gmv_sad_y1(data)         ((0x03FFE000&(data))>>13)
#define  KME_ME2_CALC1_KME_ME2_CALC1_20_get_me2_adptpnt_gmv_sad_x3(data)         (0x00001FFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_24                                         0x1809BA24
#define  KME_ME2_CALC1_KME_ME2_CALC1_24_reg_addr                                 "0xB809BA24"
#define  KME_ME2_CALC1_KME_ME2_CALC1_24_reg                                      0xB809BA24
#define  KME_ME2_CALC1_KME_ME2_CALC1_24_inst_addr                                "0x0009"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_24_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_24_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_24_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_24_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_24_me2_adptpnt_gmv_sad_y3_shift             (13)
#define  KME_ME2_CALC1_KME_ME2_CALC1_24_me2_adptpnt_gmv_sad_y2_shift             (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_24_me2_adptpnt_gmv_sad_y3_mask              (0x03FFE000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_24_me2_adptpnt_gmv_sad_y2_mask              (0x00001FFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_24_me2_adptpnt_gmv_sad_y3(data)             (0x03FFE000&((data)<<13))
#define  KME_ME2_CALC1_KME_ME2_CALC1_24_me2_adptpnt_gmv_sad_y2(data)             (0x00001FFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_24_get_me2_adptpnt_gmv_sad_y3(data)         ((0x03FFE000&(data))>>13)
#define  KME_ME2_CALC1_KME_ME2_CALC1_24_get_me2_adptpnt_gmv_sad_y2(data)         (0x00001FFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_28                                         0x1809BA28
#define  KME_ME2_CALC1_KME_ME2_CALC1_28_reg_addr                                 "0xB809BA28"
#define  KME_ME2_CALC1_KME_ME2_CALC1_28_reg                                      0xB809BA28
#define  KME_ME2_CALC1_KME_ME2_CALC1_28_inst_addr                                "0x000A"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_28_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_28_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_28_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_28_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_28_me2_adptpnt_gmv_sad_slope2_shift         (16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_28_me2_adptpnt_gmv_sad_slope1_shift         (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_28_me2_adptpnt_gmv_sad_slope2_mask          (0xFFFF0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_28_me2_adptpnt_gmv_sad_slope1_mask          (0x0000FFFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_28_me2_adptpnt_gmv_sad_slope2(data)         (0xFFFF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_CALC1_28_me2_adptpnt_gmv_sad_slope1(data)         (0x0000FFFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_28_get_me2_adptpnt_gmv_sad_slope2(data)     ((0xFFFF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_28_get_me2_adptpnt_gmv_sad_slope1(data)     (0x0000FFFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_2C                                         0x1809BA2C
#define  KME_ME2_CALC1_KME_ME2_CALC1_2C_reg_addr                                 "0xB809BA2C"
#define  KME_ME2_CALC1_KME_ME2_CALC1_2C_reg                                      0xB809BA2C
#define  KME_ME2_CALC1_KME_ME2_CALC1_2C_inst_addr                                "0x000B"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_2C_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_2C_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_2C_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_2C_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_2C_me2_adptpnt_zmv_sad_x2_shift             (13)
#define  KME_ME2_CALC1_KME_ME2_CALC1_2C_me2_adptpnt_zmv_sad_x1_shift             (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_2C_me2_adptpnt_zmv_sad_x2_mask              (0x03FFE000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_2C_me2_adptpnt_zmv_sad_x1_mask              (0x00001FFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_2C_me2_adptpnt_zmv_sad_x2(data)             (0x03FFE000&((data)<<13))
#define  KME_ME2_CALC1_KME_ME2_CALC1_2C_me2_adptpnt_zmv_sad_x1(data)             (0x00001FFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_2C_get_me2_adptpnt_zmv_sad_x2(data)         ((0x03FFE000&(data))>>13)
#define  KME_ME2_CALC1_KME_ME2_CALC1_2C_get_me2_adptpnt_zmv_sad_x1(data)         (0x00001FFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_30                                         0x1809BA30
#define  KME_ME2_CALC1_KME_ME2_CALC1_30_reg_addr                                 "0xB809BA30"
#define  KME_ME2_CALC1_KME_ME2_CALC1_30_reg                                      0xB809BA30
#define  KME_ME2_CALC1_KME_ME2_CALC1_30_inst_addr                                "0x000C"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_30_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_30_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_30_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_30_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_30_me2_adptpnt_zmv_sad_y1_shift             (13)
#define  KME_ME2_CALC1_KME_ME2_CALC1_30_me2_adptpnt_zmv_sad_x3_shift             (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_30_me2_adptpnt_zmv_sad_y1_mask              (0x03FFE000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_30_me2_adptpnt_zmv_sad_x3_mask              (0x00001FFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_30_me2_adptpnt_zmv_sad_y1(data)             (0x03FFE000&((data)<<13))
#define  KME_ME2_CALC1_KME_ME2_CALC1_30_me2_adptpnt_zmv_sad_x3(data)             (0x00001FFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_30_get_me2_adptpnt_zmv_sad_y1(data)         ((0x03FFE000&(data))>>13)
#define  KME_ME2_CALC1_KME_ME2_CALC1_30_get_me2_adptpnt_zmv_sad_x3(data)         (0x00001FFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_34                                         0x1809BA34
#define  KME_ME2_CALC1_KME_ME2_CALC1_34_reg_addr                                 "0xB809BA34"
#define  KME_ME2_CALC1_KME_ME2_CALC1_34_reg                                      0xB809BA34
#define  KME_ME2_CALC1_KME_ME2_CALC1_34_inst_addr                                "0x000D"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_34_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_34_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_34_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_34_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_34_me2_adptpnt_zmv_sad_y3_shift             (13)
#define  KME_ME2_CALC1_KME_ME2_CALC1_34_me2_adptpnt_zmv_sad_y2_shift             (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_34_me2_adptpnt_zmv_sad_y3_mask              (0x03FFE000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_34_me2_adptpnt_zmv_sad_y2_mask              (0x00001FFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_34_me2_adptpnt_zmv_sad_y3(data)             (0x03FFE000&((data)<<13))
#define  KME_ME2_CALC1_KME_ME2_CALC1_34_me2_adptpnt_zmv_sad_y2(data)             (0x00001FFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_34_get_me2_adptpnt_zmv_sad_y3(data)         ((0x03FFE000&(data))>>13)
#define  KME_ME2_CALC1_KME_ME2_CALC1_34_get_me2_adptpnt_zmv_sad_y2(data)         (0x00001FFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_38                                         0x1809BA38
#define  KME_ME2_CALC1_KME_ME2_CALC1_38_reg_addr                                 "0xB809BA38"
#define  KME_ME2_CALC1_KME_ME2_CALC1_38_reg                                      0xB809BA38
#define  KME_ME2_CALC1_KME_ME2_CALC1_38_inst_addr                                "0x000E"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_38_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_38_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_38_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_38_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_38_me2_adptpnt_zmv_sad_slope2_shift         (16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_38_me2_adptpnt_zmv_sad_slope1_shift         (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_38_me2_adptpnt_zmv_sad_slope2_mask          (0xFFFF0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_38_me2_adptpnt_zmv_sad_slope1_mask          (0x0000FFFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_38_me2_adptpnt_zmv_sad_slope2(data)         (0xFFFF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_CALC1_38_me2_adptpnt_zmv_sad_slope1(data)         (0x0000FFFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_38_get_me2_adptpnt_zmv_sad_slope2(data)     ((0xFFFF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_38_get_me2_adptpnt_zmv_sad_slope1(data)     (0x0000FFFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_3C                                         0x1809BA3C
#define  KME_ME2_CALC1_KME_ME2_CALC1_3C_reg_addr                                 "0xB809BA3C"
#define  KME_ME2_CALC1_KME_ME2_CALC1_3C_reg                                      0xB809BA3C
#define  KME_ME2_CALC1_KME_ME2_CALC1_3C_inst_addr                                "0x000F"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_3C_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_3C_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_3C_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_3C_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_3C_me2_hact_shift                           (21)
#define  KME_ME2_CALC1_KME_ME2_CALC1_3C_me2_fast_mvy_th_shift                    (11)
#define  KME_ME2_CALC1_KME_ME2_CALC1_3C_me2_fast_mvx_th_shift                    (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_3C_me2_hact_mask                            (0x3FE00000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_3C_me2_fast_mvy_th_mask                     (0x001FF800)
#define  KME_ME2_CALC1_KME_ME2_CALC1_3C_me2_fast_mvx_th_mask                     (0x000007FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_3C_me2_hact(data)                           (0x3FE00000&((data)<<21))
#define  KME_ME2_CALC1_KME_ME2_CALC1_3C_me2_fast_mvy_th(data)                    (0x001FF800&((data)<<11))
#define  KME_ME2_CALC1_KME_ME2_CALC1_3C_me2_fast_mvx_th(data)                    (0x000007FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_3C_get_me2_hact(data)                       ((0x3FE00000&(data))>>21)
#define  KME_ME2_CALC1_KME_ME2_CALC1_3C_get_me2_fast_mvy_th(data)                ((0x001FF800&(data))>>11)
#define  KME_ME2_CALC1_KME_ME2_CALC1_3C_get_me2_fast_mvx_th(data)                (0x000007FF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_40                                         0x1809BA40
#define  KME_ME2_CALC1_KME_ME2_CALC1_40_reg_addr                                 "0xB809BA40"
#define  KME_ME2_CALC1_KME_ME2_CALC1_40_reg                                      0xB809BA40
#define  KME_ME2_CALC1_KME_ME2_CALC1_40_inst_addr                                "0x0010"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_40_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_40_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_40_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_40_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_40_me2_sad_th_base_ac_shift                 (9)
#define  KME_ME2_CALC1_KME_ME2_CALC1_40_me2_vact_shift                           (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_40_me2_sad_th_base_ac_mask                  (0x003FFE00)
#define  KME_ME2_CALC1_KME_ME2_CALC1_40_me2_vact_mask                            (0x000001FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_40_me2_sad_th_base_ac(data)                 (0x003FFE00&((data)<<9))
#define  KME_ME2_CALC1_KME_ME2_CALC1_40_me2_vact(data)                           (0x000001FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_40_get_me2_sad_th_base_ac(data)             ((0x003FFE00&(data))>>9)
#define  KME_ME2_CALC1_KME_ME2_CALC1_40_get_me2_vact(data)                       (0x000001FF&(data))

#define  KME_ME2_CALC1_KME_ME2_GMVCOST_0                                        0x1809BA50
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_0_reg_addr                                "0xB809BA50"
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_0_reg                                     0xB809BA50
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_0_inst_addr                               "0x0011"
#define  set_KME_ME2_CALC1_KME_ME2_GMVCOST_0_reg(data)                           (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_GMVCOST_0_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_GMVCOST_0_reg                                 (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_GMVCOST_0_reg))
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_0_me2_gmvcost_sel_shift                   (0)
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_0_me2_gmvcost_sel_mask                    (0xFFFFFFFF)
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_0_me2_gmvcost_sel(data)                   (0xFFFFFFFF&(data))
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_0_get_me2_gmvcost_sel(data)               (0xFFFFFFFF&(data))

#define  KME_ME2_CALC1_KME_ME2_GMVCOST_1                                        0x1809BA54
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_1_reg_addr                                "0xB809BA54"
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_1_reg                                     0xB809BA54
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_1_inst_addr                               "0x0012"
#define  set_KME_ME2_CALC1_KME_ME2_GMVCOST_1_reg(data)                           (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_GMVCOST_1_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_GMVCOST_1_reg                                 (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_GMVCOST_1_reg))
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_1_me2_gmvcost_psad_min_shift              (8)
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_1_me2_gmvd_gain_shift                     (0)
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_1_me2_gmvcost_psad_min_mask               (0x00007F00)
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_1_me2_gmvd_gain_mask                      (0x0000003F)
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_1_me2_gmvcost_psad_min(data)              (0x00007F00&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_1_me2_gmvd_gain(data)                     (0x0000003F&(data))
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_1_get_me2_gmvcost_psad_min(data)          ((0x00007F00&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_GMVCOST_1_get_me2_gmvd_gain(data)                 (0x0000003F&(data))

#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0                                        0x1809BA58
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_reg_addr                                "0xB809BA58"
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_reg                                     0xB809BA58
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_inst_addr                               "0x0013"
#define  set_KME_ME2_CALC1_KME_ME2_TOP_SHM_0_reg(data)                           (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_TOP_SHM_0_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_TOP_SHM_0_reg                                 (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_TOP_SHM_0_reg))
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_min_sad_th_shift       (24)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_avg_ac0_shift          (16)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_dtl_h_shift            (8)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_dtl_l_shift            (2)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_force_en_shift         (1)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_en_shift               (0)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_min_sad_th_mask        (0xFF000000)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_avg_ac0_mask           (0x003F0000)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_dtl_h_mask             (0x0000FF00)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_dtl_l_mask             (0x000000FC)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_force_en_mask          (0x00000002)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_en_mask                (0x00000001)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_min_sad_th(data)       (0xFF000000&((data)<<24))
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_avg_ac0(data)          (0x003F0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_dtl_h(data)            (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_dtl_l(data)            (0x000000FC&((data)<<2))
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_force_en(data)         (0x00000002&((data)<<1))
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_kme_me2_vbuf_shm_en(data)               (0x00000001&(data))
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_get_kme_me2_vbuf_shm_min_sad_th(data)   ((0xFF000000&(data))>>24)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_get_kme_me2_vbuf_shm_avg_ac0(data)      ((0x003F0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_get_kme_me2_vbuf_shm_dtl_h(data)        ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_get_kme_me2_vbuf_shm_dtl_l(data)        ((0x000000FC&(data))>>2)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_get_kme_me2_vbuf_shm_force_en(data)     ((0x00000002&(data))>>1)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_0_get_kme_me2_vbuf_shm_en(data)           (0x00000001&(data))

#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_1                                        0x1809BA5C
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_1_reg_addr                                "0xB809BA5C"
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_1_reg                                     0xB809BA5C
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_1_inst_addr                               "0x0014"
#define  set_KME_ME2_CALC1_KME_ME2_TOP_SHM_1_reg(data)                           (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_TOP_SHM_1_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_TOP_SHM_1_reg                                 (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_TOP_SHM_1_reg))
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_1_kme_me2_vbuf_shm_ac_alpha_shift         (26)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_1_kme_me2_vbuf_shm_dyn_sad_th1_shift      (16)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_1_kme_me2_vbuf_shm_dyn_sad_th0_shift      (0)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_1_kme_me2_vbuf_shm_ac_alpha_mask          (0xFC000000)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_1_kme_me2_vbuf_shm_dyn_sad_th1_mask       (0x03FF0000)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_1_kme_me2_vbuf_shm_dyn_sad_th0_mask       (0x000003FF)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_1_kme_me2_vbuf_shm_ac_alpha(data)         (0xFC000000&((data)<<26))
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_1_kme_me2_vbuf_shm_dyn_sad_th1(data)      (0x03FF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_1_kme_me2_vbuf_shm_dyn_sad_th0(data)      (0x000003FF&(data))
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_1_get_kme_me2_vbuf_shm_ac_alpha(data)     ((0xFC000000&(data))>>26)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_1_get_kme_me2_vbuf_shm_dyn_sad_th1(data)  ((0x03FF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_TOP_SHM_1_get_kme_me2_vbuf_shm_dyn_sad_th0(data)  (0x000003FF&(data))

#define  KME_ME2_CALC1_KME_ME2_FLT_PROT                                         0x1809BA60
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_reg_addr                                 "0xB809BA60"
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_reg                                      0xB809BA60
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_inst_addr                                "0x0015"
#define  set_KME_ME2_CALC1_KME_ME2_FLT_PROT_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_FLT_PROT_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_FLT_PROT_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_FLT_PROT_reg))
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_me2_zmv_th_shift                         (28)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_me2_sad_th_gain_shift                    (26)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_me2_flt_gain_mode_shift                  (24)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_me2_mv_th_shift                          (16)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_me2_zsad_th_gain_shift                   (8)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_me2_zmv_th_mask                          (0xF0000000)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_me2_sad_th_gain_mask                     (0x0C000000)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_me2_flt_gain_mode_mask                   (0x03000000)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_me2_mv_th_mask                           (0x00FF0000)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_me2_zsad_th_gain_mask                    (0x00000300)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_me2_zmv_th(data)                         (0xF0000000&((data)<<28))
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_me2_sad_th_gain(data)                    (0x0C000000&((data)<<26))
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_me2_flt_gain_mode(data)                  (0x03000000&((data)<<24))
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_me2_mv_th(data)                          (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_me2_zsad_th_gain(data)                   (0x00000300&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_get_me2_zmv_th(data)                     ((0xF0000000&(data))>>28)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_get_me2_sad_th_gain(data)                ((0x0C000000&(data))>>26)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_get_me2_flt_gain_mode(data)              ((0x03000000&(data))>>24)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_get_me2_mv_th(data)                      ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_get_me2_zsad_th_gain(data)               ((0x00000300&(data))>>8)

#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_SAD                                     0x1809BA64
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_SAD_reg_addr                             "0xB809BA64"
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_SAD_reg                                  0xB809BA64
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_SAD_inst_addr                            "0x0016"
#define  set_KME_ME2_CALC1_KME_ME2_FLT_PROT_SAD_reg(data)                        (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_FLT_PROT_SAD_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_FLT_PROT_SAD_reg                              (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_FLT_PROT_SAD_reg))
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_SAD_me2_zsad_th_l_shift                  (16)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_SAD_me2_sad_th_l_shift                   (0)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_SAD_me2_zsad_th_l_mask                   (0x1FFF0000)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_SAD_me2_sad_th_l_mask                    (0x00001FFF)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_SAD_me2_zsad_th_l(data)                  (0x1FFF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_SAD_me2_sad_th_l(data)                   (0x00001FFF&(data))
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_SAD_get_me2_zsad_th_l(data)              ((0x1FFF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_FLT_PROT_SAD_get_me2_sad_th_l(data)               (0x00001FFF&(data))

#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET                                    0x1809BA68
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_reg_addr                            "0xB809BA68"
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_reg                                 0xB809BA68
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_inst_addr                           "0x0017"
#define  set_KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_reg(data)                       (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_reg                             (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_reg))
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bld_type_shift         (25)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bv_replace_mv_shift    (21)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bv_replace_type_shift  (20)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bv_limit_shift         (16)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bv_th_shift            (13)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bv_en_shift            (12)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_zmv_cddpnt_half_shift  (11)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_zmv_th_shift           (8)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_zmv_en_shift           (7)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_updt_mask_shift        (4)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_updt_th_shift          (1)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_updt_en_shift          (0)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bld_type_mask          (0x06000000)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bv_replace_mv_mask     (0x01E00000)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bv_replace_type_mask   (0x00100000)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bv_limit_mask          (0x000F0000)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bv_th_mask             (0x0000E000)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bv_en_mask             (0x00001000)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_zmv_cddpnt_half_mask   (0x00000800)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_zmv_th_mask            (0x00000700)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_zmv_en_mask            (0x00000080)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_updt_mask_mask         (0x00000070)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_updt_th_mask           (0x0000000E)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_updt_en_mask           (0x00000001)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bld_type(data)         (0x06000000&((data)<<25))
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bv_replace_mv(data)    (0x01E00000&((data)<<21))
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bv_replace_type(data)  (0x00100000&((data)<<20))
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bv_limit(data)         (0x000F0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bv_th(data)            (0x0000E000&((data)<<13))
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_bv_en(data)            (0x00001000&((data)<<12))
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_zmv_cddpnt_half(data)  (0x00000800&((data)<<11))
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_zmv_th(data)           (0x00000700&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_zmv_en(data)           (0x00000080&((data)<<7))
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_updt_mask(data)        (0x00000070&((data)<<4))
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_updt_th(data)          (0x0000000E&((data)<<1))
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_me2_high_det_updt_en(data)          (0x00000001&(data))
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_get_me2_high_det_bld_type(data)     ((0x06000000&(data))>>25)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_get_me2_high_det_bv_replace_mv(data) ((0x01E00000&(data))>>21)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_get_me2_high_det_bv_replace_type(data) ((0x00100000&(data))>>20)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_get_me2_high_det_bv_limit(data)     ((0x000F0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_get_me2_high_det_bv_th(data)        ((0x0000E000&(data))>>13)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_get_me2_high_det_bv_en(data)        ((0x00001000&(data))>>12)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_get_me2_high_det_zmv_cddpnt_half(data) ((0x00000800&(data))>>11)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_get_me2_high_det_zmv_th(data)       ((0x00000700&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_get_me2_high_det_zmv_en(data)       ((0x00000080&(data))>>7)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_get_me2_high_det_updt_mask(data)    ((0x00000070&(data))>>4)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_get_me2_high_det_updt_th(data)      ((0x0000000E&(data))>>1)
#define  KME_ME2_CALC1_KME_ME2_TOP0_HIGH_DET_get_me2_high_det_updt_en(data)      (0x00000001&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0                                 0x1809BA6C
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg_addr                         "0xB809BA6C"
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg                              0xB809BA6C
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_inst_addr                        "0x0018"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg(data)                    (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg                          (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg_me2_vst_enable_shift         (31)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg_me2_vst_mvdiff_shift         (24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg_me2_vst_penalty_shift        (16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg_me2_vst_targety_shift        (8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg_me2_vst_targetx_shift        (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg_me2_vst_enable_mask          (0x80000000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg_me2_vst_mvdiff_mask          (0x07000000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg_me2_vst_penalty_mask         (0x00FF0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg_me2_vst_targety_mask         (0x00003F00)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg_me2_vst_targetx_mask         (0x0000003F)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg_me2_vst_enable(data)         (0x80000000&((data)<<31))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg_me2_vst_mvdiff(data)         (0x07000000&((data)<<24))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg_me2_vst_penalty(data)        (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg_me2_vst_targety(data)        (0x00003F00&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_reg_me2_vst_targetx(data)        (0x0000003F&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_get_reg_me2_vst_enable(data)     ((0x80000000&(data))>>31)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_get_reg_me2_vst_mvdiff(data)     ((0x07000000&(data))>>24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_get_reg_me2_vst_penalty(data)    ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_get_reg_me2_vst_targety(data)    ((0x00003F00&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_0_get_reg_me2_vst_targetx(data)    (0x0000003F&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1                                 0x1809BA70
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg_addr                         "0xB809BA70"
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg                              0xB809BA70
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_inst_addr                        "0x0019"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg(data)                    (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg                          (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg_me2_vst_apply_maxmindiff_shift (24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg_me2_vst_apply_coreapl_shift  (16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg_me2_vst_apply_maxvalue_shift (8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg_me2_vst_apply_boundary_offset_shift (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg_me2_vst_apply_maxmindiff_mask (0xFF000000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg_me2_vst_apply_coreapl_mask   (0x00FF0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg_me2_vst_apply_maxvalue_mask  (0x0000FF00)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg_me2_vst_apply_boundary_offset_mask (0x000000FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg_me2_vst_apply_maxmindiff(data) (0xFF000000&((data)<<24))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg_me2_vst_apply_coreapl(data)  (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg_me2_vst_apply_maxvalue(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_reg_me2_vst_apply_boundary_offset(data) (0x000000FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_get_reg_me2_vst_apply_maxmindiff(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_get_reg_me2_vst_apply_coreapl(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_get_reg_me2_vst_apply_maxvalue(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_1_get_reg_me2_vst_apply_boundary_offset(data) (0x000000FF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2                                 0x1809BA74
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg_addr                         "0xB809BA74"
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg                              0xB809BA74
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_inst_addr                        "0x001A"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg(data)                    (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg                          (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg_me2_vst_apply_boundary_xend_shift (24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg_me2_vst_apply_boundary_xsta_shift (16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg_me2_vst_gaincurve_slope2_shift (8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg_me2_vst_gaincurve_slope1_shift (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg_me2_vst_apply_boundary_xend_mask (0xFF000000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg_me2_vst_apply_boundary_xsta_mask (0x00FF0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg_me2_vst_gaincurve_slope2_mask (0x0000FF00)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg_me2_vst_gaincurve_slope1_mask (0x000000FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg_me2_vst_apply_boundary_xend(data) (0xFF000000&((data)<<24))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg_me2_vst_apply_boundary_xsta(data) (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg_me2_vst_gaincurve_slope2(data) (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_reg_me2_vst_gaincurve_slope1(data) (0x000000FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_get_reg_me2_vst_apply_boundary_xend(data) ((0xFF000000&(data))>>24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_get_reg_me2_vst_apply_boundary_xsta(data) ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_get_reg_me2_vst_gaincurve_slope2(data) ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_2_get_reg_me2_vst_gaincurve_slope1(data) (0x000000FF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3                                 0x1809BA78
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg_addr                         "0xB809BA78"
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg                              0xB809BA78
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_inst_addr                        "0x001B"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg(data)                    (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg                          (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg_me2_vst_apply_apl2maxvalue_ratio_shift (24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg_me2_vst_apply_apl2maxmindiff_ratio_shift (16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg_me2_vst_acdcpk_spatial_mvd_shiftbit_shift (8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg_me2_vst_acdcpk_mvd_shiftbit_shift (4)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg_me2_vst_acdcpk_sad_shiftbit_shift (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg_me2_vst_apply_apl2maxvalue_ratio_mask (0x3F000000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg_me2_vst_apply_apl2maxmindiff_ratio_mask (0x003F0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg_me2_vst_acdcpk_spatial_mvd_shiftbit_mask (0x00000300)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg_me2_vst_acdcpk_mvd_shiftbit_mask (0x00000030)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg_me2_vst_acdcpk_sad_shiftbit_mask (0x00000003)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg_me2_vst_apply_apl2maxvalue_ratio(data) (0x3F000000&((data)<<24))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg_me2_vst_apply_apl2maxmindiff_ratio(data) (0x003F0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg_me2_vst_acdcpk_spatial_mvd_shiftbit(data) (0x00000300&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg_me2_vst_acdcpk_mvd_shiftbit(data) (0x00000030&((data)<<4))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_reg_me2_vst_acdcpk_sad_shiftbit(data) (0x00000003&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_get_reg_me2_vst_apply_apl2maxvalue_ratio(data) ((0x3F000000&(data))>>24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_get_reg_me2_vst_apply_apl2maxmindiff_ratio(data) ((0x003F0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_get_reg_me2_vst_acdcpk_spatial_mvd_shiftbit(data) ((0x00000300&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_get_reg_me2_vst_acdcpk_mvd_shiftbit(data) ((0x00000030&(data))>>4)
#define  KME_ME2_CALC1_KME_ME2_CALC1_VST_CTRL_3_get_reg_me2_vst_acdcpk_sad_shiftbit(data) (0x00000003&(data))

#define  KME_ME2_CALC1_SATD0                                                    0x1809BA7C
#define  KME_ME2_CALC1_SATD0_reg_addr                                            "0xB809BA7C"
#define  KME_ME2_CALC1_SATD0_reg                                                 0xB809BA7C
#define  KME_ME2_CALC1_SATD0_inst_addr                                           "0x001C"
#define  set_KME_ME2_CALC1_SATD0_reg(data)                                       (*((volatile unsigned int*)KME_ME2_CALC1_SATD0_reg)=data)
#define  get_KME_ME2_CALC1_SATD0_reg                                             (*((volatile unsigned int*)KME_ME2_CALC1_SATD0_reg))
#define  KME_ME2_CALC1_SATD0_reg_me2_dctype_sel_shift                            (31)
#define  KME_ME2_CALC1_SATD0_reg_me2_satd_dc_bld_en_shift                        (27)
#define  KME_ME2_CALC1_SATD0_reg_me2_satd_dc_bld_mode_sel_shift                  (26)
#define  KME_ME2_CALC1_SATD0_reg_me2_satd_dcn_bldapl_x3_shift                    (16)
#define  KME_ME2_CALC1_SATD0_reg_me2_satd_dcn_bldapl_x2_shift                    (8)
#define  KME_ME2_CALC1_SATD0_reg_me2_satd_dcn_bldapl_x1_shift                    (0)
#define  KME_ME2_CALC1_SATD0_reg_me2_dctype_sel_mask                             (0x80000000)
#define  KME_ME2_CALC1_SATD0_reg_me2_satd_dc_bld_en_mask                         (0x08000000)
#define  KME_ME2_CALC1_SATD0_reg_me2_satd_dc_bld_mode_sel_mask                   (0x04000000)
#define  KME_ME2_CALC1_SATD0_reg_me2_satd_dcn_bldapl_x3_mask                     (0x00FF0000)
#define  KME_ME2_CALC1_SATD0_reg_me2_satd_dcn_bldapl_x2_mask                     (0x0000FF00)
#define  KME_ME2_CALC1_SATD0_reg_me2_satd_dcn_bldapl_x1_mask                     (0x000000FF)
#define  KME_ME2_CALC1_SATD0_reg_me2_dctype_sel(data)                            (0x80000000&((data)<<31))
#define  KME_ME2_CALC1_SATD0_reg_me2_satd_dc_bld_en(data)                        (0x08000000&((data)<<27))
#define  KME_ME2_CALC1_SATD0_reg_me2_satd_dc_bld_mode_sel(data)                  (0x04000000&((data)<<26))
#define  KME_ME2_CALC1_SATD0_reg_me2_satd_dcn_bldapl_x3(data)                    (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC1_SATD0_reg_me2_satd_dcn_bldapl_x2(data)                    (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC1_SATD0_reg_me2_satd_dcn_bldapl_x1(data)                    (0x000000FF&(data))
#define  KME_ME2_CALC1_SATD0_get_reg_me2_dctype_sel(data)                        ((0x80000000&(data))>>31)
#define  KME_ME2_CALC1_SATD0_get_reg_me2_satd_dc_bld_en(data)                    ((0x08000000&(data))>>27)
#define  KME_ME2_CALC1_SATD0_get_reg_me2_satd_dc_bld_mode_sel(data)              ((0x04000000&(data))>>26)
#define  KME_ME2_CALC1_SATD0_get_reg_me2_satd_dcn_bldapl_x3(data)                ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC1_SATD0_get_reg_me2_satd_dcn_bldapl_x2(data)                ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC1_SATD0_get_reg_me2_satd_dcn_bldapl_x1(data)                (0x000000FF&(data))

#define  KME_ME2_CALC1_SATD1                                                    0x1809BA80
#define  KME_ME2_CALC1_SATD1_reg_addr                                            "0xB809BA80"
#define  KME_ME2_CALC1_SATD1_reg                                                 0xB809BA80
#define  KME_ME2_CALC1_SATD1_inst_addr                                           "0x001D"
#define  set_KME_ME2_CALC1_SATD1_reg(data)                                       (*((volatile unsigned int*)KME_ME2_CALC1_SATD1_reg)=data)
#define  get_KME_ME2_CALC1_SATD1_reg                                             (*((volatile unsigned int*)KME_ME2_CALC1_SATD1_reg))
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_coef_4x4_shift                         (24)
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_dcn_bldapl_slope2_shift                (16)
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_dcn_bldapl_slope1_shift                (12)
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_dcn_bldapl_y3_shift                    (8)
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_dcn_bldapl_y2_shift                    (4)
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_dcn_bldapl_y1_shift                    (0)
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_coef_4x4_mask                          (0x3F000000)
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_dcn_bldapl_slope2_mask                 (0x000F0000)
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_dcn_bldapl_slope1_mask                 (0x0000F000)
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_dcn_bldapl_y3_mask                     (0x00000F00)
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_dcn_bldapl_y2_mask                     (0x000000F0)
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_dcn_bldapl_y1_mask                     (0x0000000F)
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_coef_4x4(data)                         (0x3F000000&((data)<<24))
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_dcn_bldapl_slope2(data)                (0x000F0000&((data)<<16))
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_dcn_bldapl_slope1(data)                (0x0000F000&((data)<<12))
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_dcn_bldapl_y3(data)                    (0x00000F00&((data)<<8))
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_dcn_bldapl_y2(data)                    (0x000000F0&((data)<<4))
#define  KME_ME2_CALC1_SATD1_reg_me2_satd_dcn_bldapl_y1(data)                    (0x0000000F&(data))
#define  KME_ME2_CALC1_SATD1_get_reg_me2_satd_coef_4x4(data)                     ((0x3F000000&(data))>>24)
#define  KME_ME2_CALC1_SATD1_get_reg_me2_satd_dcn_bldapl_slope2(data)            ((0x000F0000&(data))>>16)
#define  KME_ME2_CALC1_SATD1_get_reg_me2_satd_dcn_bldapl_slope1(data)            ((0x0000F000&(data))>>12)
#define  KME_ME2_CALC1_SATD1_get_reg_me2_satd_dcn_bldapl_y3(data)                ((0x00000F00&(data))>>8)
#define  KME_ME2_CALC1_SATD1_get_reg_me2_satd_dcn_bldapl_y2(data)                ((0x000000F0&(data))>>4)
#define  KME_ME2_CALC1_SATD1_get_reg_me2_satd_dcn_bldapl_y1(data)                (0x0000000F&(data))

#define  KME_ME2_CALC1_SATD2                                                    0x1809BA84
#define  KME_ME2_CALC1_SATD2_reg_addr                                            "0xB809BA84"
#define  KME_ME2_CALC1_SATD2_reg                                                 0xB809BA84
#define  KME_ME2_CALC1_SATD2_inst_addr                                           "0x001E"
#define  set_KME_ME2_CALC1_SATD2_reg(data)                                       (*((volatile unsigned int*)KME_ME2_CALC1_SATD2_reg)=data)
#define  get_KME_ME2_CALC1_SATD2_reg                                             (*((volatile unsigned int*)KME_ME2_CALC1_SATD2_reg))
#define  KME_ME2_CALC1_SATD2_reg_me2_satd_dcn_blddtl_mode_shift                  (24)
#define  KME_ME2_CALC1_SATD2_reg_me2_satd_dcn_blddtl_x3_shift                    (16)
#define  KME_ME2_CALC1_SATD2_reg_me2_satd_dcn_blddtl_x2_shift                    (8)
#define  KME_ME2_CALC1_SATD2_reg_me2_satd_dcn_blddtl_x1_shift                    (0)
#define  KME_ME2_CALC1_SATD2_reg_me2_satd_dcn_blddtl_mode_mask                   (0x07000000)
#define  KME_ME2_CALC1_SATD2_reg_me2_satd_dcn_blddtl_x3_mask                     (0x00FF0000)
#define  KME_ME2_CALC1_SATD2_reg_me2_satd_dcn_blddtl_x2_mask                     (0x0000FF00)
#define  KME_ME2_CALC1_SATD2_reg_me2_satd_dcn_blddtl_x1_mask                     (0x000000FF)
#define  KME_ME2_CALC1_SATD2_reg_me2_satd_dcn_blddtl_mode(data)                  (0x07000000&((data)<<24))
#define  KME_ME2_CALC1_SATD2_reg_me2_satd_dcn_blddtl_x3(data)                    (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC1_SATD2_reg_me2_satd_dcn_blddtl_x2(data)                    (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC1_SATD2_reg_me2_satd_dcn_blddtl_x1(data)                    (0x000000FF&(data))
#define  KME_ME2_CALC1_SATD2_get_reg_me2_satd_dcn_blddtl_mode(data)              ((0x07000000&(data))>>24)
#define  KME_ME2_CALC1_SATD2_get_reg_me2_satd_dcn_blddtl_x3(data)                ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC1_SATD2_get_reg_me2_satd_dcn_blddtl_x2(data)                ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC1_SATD2_get_reg_me2_satd_dcn_blddtl_x1(data)                (0x000000FF&(data))

#define  KME_ME2_CALC1_SATD3                                                    0x1809BA88
#define  KME_ME2_CALC1_SATD3_reg_addr                                            "0xB809BA88"
#define  KME_ME2_CALC1_SATD3_reg                                                 0xB809BA88
#define  KME_ME2_CALC1_SATD3_inst_addr                                           "0x001F"
#define  set_KME_ME2_CALC1_SATD3_reg(data)                                       (*((volatile unsigned int*)KME_ME2_CALC1_SATD3_reg)=data)
#define  get_KME_ME2_CALC1_SATD3_reg                                             (*((volatile unsigned int*)KME_ME2_CALC1_SATD3_reg))
#define  KME_ME2_CALC1_SATD3_reg_me2_satd_dcn_blddtl_slope2_shift                (16)
#define  KME_ME2_CALC1_SATD3_reg_me2_satd_dcn_blddtl_slope1_shift                (12)
#define  KME_ME2_CALC1_SATD3_reg_me2_satd_dcn_blddtl_y3_shift                    (8)
#define  KME_ME2_CALC1_SATD3_reg_me2_satd_dcn_blddtl_y2_shift                    (4)
#define  KME_ME2_CALC1_SATD3_reg_me2_satd_dcn_blddtl_y1_shift                    (0)
#define  KME_ME2_CALC1_SATD3_reg_me2_satd_dcn_blddtl_slope2_mask                 (0x000F0000)
#define  KME_ME2_CALC1_SATD3_reg_me2_satd_dcn_blddtl_slope1_mask                 (0x0000F000)
#define  KME_ME2_CALC1_SATD3_reg_me2_satd_dcn_blddtl_y3_mask                     (0x00000F00)
#define  KME_ME2_CALC1_SATD3_reg_me2_satd_dcn_blddtl_y2_mask                     (0x000000F0)
#define  KME_ME2_CALC1_SATD3_reg_me2_satd_dcn_blddtl_y1_mask                     (0x0000000F)
#define  KME_ME2_CALC1_SATD3_reg_me2_satd_dcn_blddtl_slope2(data)                (0x000F0000&((data)<<16))
#define  KME_ME2_CALC1_SATD3_reg_me2_satd_dcn_blddtl_slope1(data)                (0x0000F000&((data)<<12))
#define  KME_ME2_CALC1_SATD3_reg_me2_satd_dcn_blddtl_y3(data)                    (0x00000F00&((data)<<8))
#define  KME_ME2_CALC1_SATD3_reg_me2_satd_dcn_blddtl_y2(data)                    (0x000000F0&((data)<<4))
#define  KME_ME2_CALC1_SATD3_reg_me2_satd_dcn_blddtl_y1(data)                    (0x0000000F&(data))
#define  KME_ME2_CALC1_SATD3_get_reg_me2_satd_dcn_blddtl_slope2(data)            ((0x000F0000&(data))>>16)
#define  KME_ME2_CALC1_SATD3_get_reg_me2_satd_dcn_blddtl_slope1(data)            ((0x0000F000&(data))>>12)
#define  KME_ME2_CALC1_SATD3_get_reg_me2_satd_dcn_blddtl_y3(data)                ((0x00000F00&(data))>>8)
#define  KME_ME2_CALC1_SATD3_get_reg_me2_satd_dcn_blddtl_y2(data)                ((0x000000F0&(data))>>4)
#define  KME_ME2_CALC1_SATD3_get_reg_me2_satd_dcn_blddtl_y1(data)                (0x0000000F&(data))

#define  KME_ME2_CALC1_SATD4                                                    0x1809BA8C
#define  KME_ME2_CALC1_SATD4_reg_addr                                            "0xB809BA8C"
#define  KME_ME2_CALC1_SATD4_reg                                                 0xB809BA8C
#define  KME_ME2_CALC1_SATD4_inst_addr                                           "0x0020"
#define  set_KME_ME2_CALC1_SATD4_reg(data)                                       (*((volatile unsigned int*)KME_ME2_CALC1_SATD4_reg)=data)
#define  get_KME_ME2_CALC1_SATD4_reg                                             (*((volatile unsigned int*)KME_ME2_CALC1_SATD4_reg))
#define  KME_ME2_CALC1_SATD4_reg_me2_bvlogoprotecten_shift                       (31)
#define  KME_ME2_CALC1_SATD4_reg_me2_bvlogoprotecten_mask                        (0x80000000)
#define  KME_ME2_CALC1_SATD4_reg_me2_bvlogoprotecten(data)                       (0x80000000&((data)<<31))
#define  KME_ME2_CALC1_SATD4_get_reg_me2_bvlogoprotecten(data)                   ((0x80000000&(data))>>31)

#define  KME_ME2_CALC1_EDGE_DET                                                 0x1809BA90
#define  KME_ME2_CALC1_EDGE_DET_reg_addr                                         "0xB809BA90"
#define  KME_ME2_CALC1_EDGE_DET_reg                                              0xB809BA90
#define  KME_ME2_CALC1_EDGE_DET_inst_addr                                        "0x0021"
#define  set_KME_ME2_CALC1_EDGE_DET_reg(data)                                    (*((volatile unsigned int*)KME_ME2_CALC1_EDGE_DET_reg)=data)
#define  get_KME_ME2_CALC1_EDGE_DET_reg                                          (*((volatile unsigned int*)KME_ME2_CALC1_EDGE_DET_reg))
#define  KME_ME2_CALC1_EDGE_DET_reg_me2_edge_eng_thr_shift                       (24)
#define  KME_ME2_CALC1_EDGE_DET_reg_me2_edge_eng_aplratio_shift                  (16)
#define  KME_ME2_CALC1_EDGE_DET_reg_me2_edge_eng_ratio_shift                     (8)
#define  KME_ME2_CALC1_EDGE_DET_reg_me2_edge_hv_ratio_shift                      (4)
#define  KME_ME2_CALC1_EDGE_DET_reg_me2_edge_eng_adpthr_modesel_shift            (0)
#define  KME_ME2_CALC1_EDGE_DET_reg_me2_edge_eng_thr_mask                        (0xFF000000)
#define  KME_ME2_CALC1_EDGE_DET_reg_me2_edge_eng_aplratio_mask                   (0x001F0000)
#define  KME_ME2_CALC1_EDGE_DET_reg_me2_edge_eng_ratio_mask                      (0x00000F00)
#define  KME_ME2_CALC1_EDGE_DET_reg_me2_edge_hv_ratio_mask                       (0x00000030)
#define  KME_ME2_CALC1_EDGE_DET_reg_me2_edge_eng_adpthr_modesel_mask             (0x00000001)
#define  KME_ME2_CALC1_EDGE_DET_reg_me2_edge_eng_thr(data)                       (0xFF000000&((data)<<24))
#define  KME_ME2_CALC1_EDGE_DET_reg_me2_edge_eng_aplratio(data)                  (0x001F0000&((data)<<16))
#define  KME_ME2_CALC1_EDGE_DET_reg_me2_edge_eng_ratio(data)                     (0x00000F00&((data)<<8))
#define  KME_ME2_CALC1_EDGE_DET_reg_me2_edge_hv_ratio(data)                      (0x00000030&((data)<<4))
#define  KME_ME2_CALC1_EDGE_DET_reg_me2_edge_eng_adpthr_modesel(data)            (0x00000001&(data))
#define  KME_ME2_CALC1_EDGE_DET_get_reg_me2_edge_eng_thr(data)                   ((0xFF000000&(data))>>24)
#define  KME_ME2_CALC1_EDGE_DET_get_reg_me2_edge_eng_aplratio(data)              ((0x001F0000&(data))>>16)
#define  KME_ME2_CALC1_EDGE_DET_get_reg_me2_edge_eng_ratio(data)                 ((0x00000F00&(data))>>8)
#define  KME_ME2_CALC1_EDGE_DET_get_reg_me2_edge_hv_ratio(data)                  ((0x00000030&(data))>>4)
#define  KME_ME2_CALC1_EDGE_DET_get_reg_me2_edge_eng_adpthr_modesel(data)        (0x00000001&(data))

#define  KME_ME2_CALC1_EDGE_RETIMER                                             0x1809BA94
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_addr                                     "0xB809BA94"
#define  KME_ME2_CALC1_EDGE_RETIMER_reg                                          0xB809BA94
#define  KME_ME2_CALC1_EDGE_RETIMER_inst_addr                                    "0x0022"
#define  set_KME_ME2_CALC1_EDGE_RETIMER_reg(data)                                (*((volatile unsigned int*)KME_ME2_CALC1_EDGE_RETIMER_reg)=data)
#define  get_KME_ME2_CALC1_EDGE_RETIMER_reg                                      (*((volatile unsigned int*)KME_ME2_CALC1_EDGE_RETIMER_reg))
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgefromppfv_enable_shift            (31)
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgefrompfv_enable_shift             (30)
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgepostproc_enable_shift            (29)
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgeretimer_yrange_shift             (24)
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edge_type_debug_sel_shift            (22)
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edge_type_debug_en_shift             (21)
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgefromppfv_modifypos_shift         (12)
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgefrompfv_modifypos_shift          (0)
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgefromppfv_enable_mask             (0x80000000)
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgefrompfv_enable_mask              (0x40000000)
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgepostproc_enable_mask             (0x20000000)
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgeretimer_yrange_mask              (0x0F000000)
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edge_type_debug_sel_mask             (0x00C00000)
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edge_type_debug_en_mask              (0x00200000)
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgefromppfv_modifypos_mask          (0x001FF000)
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgefrompfv_modifypos_mask           (0x000001FF)
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgefromppfv_enable(data)            (0x80000000&((data)<<31))
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgefrompfv_enable(data)             (0x40000000&((data)<<30))
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgepostproc_enable(data)            (0x20000000&((data)<<29))
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgeretimer_yrange(data)             (0x0F000000&((data)<<24))
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edge_type_debug_sel(data)            (0x00C00000&((data)<<22))
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edge_type_debug_en(data)             (0x00200000&((data)<<21))
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgefromppfv_modifypos(data)         (0x001FF000&((data)<<12))
#define  KME_ME2_CALC1_EDGE_RETIMER_reg_me2_edgefrompfv_modifypos(data)          (0x000001FF&(data))
#define  KME_ME2_CALC1_EDGE_RETIMER_get_reg_me2_edgefromppfv_enable(data)        ((0x80000000&(data))>>31)
#define  KME_ME2_CALC1_EDGE_RETIMER_get_reg_me2_edgefrompfv_enable(data)         ((0x40000000&(data))>>30)
#define  KME_ME2_CALC1_EDGE_RETIMER_get_reg_me2_edgepostproc_enable(data)        ((0x20000000&(data))>>29)
#define  KME_ME2_CALC1_EDGE_RETIMER_get_reg_me2_edgeretimer_yrange(data)         ((0x0F000000&(data))>>24)
#define  KME_ME2_CALC1_EDGE_RETIMER_get_reg_me2_edge_type_debug_sel(data)        ((0x00C00000&(data))>>22)
#define  KME_ME2_CALC1_EDGE_RETIMER_get_reg_me2_edge_type_debug_en(data)         ((0x00200000&(data))>>21)
#define  KME_ME2_CALC1_EDGE_RETIMER_get_reg_me2_edgefromppfv_modifypos(data)     ((0x001FF000&(data))>>12)
#define  KME_ME2_CALC1_EDGE_RETIMER_get_reg_me2_edgefrompfv_modifypos(data)      (0x000001FF&(data))

#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE                                     0x1809BA98
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE_reg_addr                             "0xB809BA98"
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE_reg                                  0xB809BA98
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE_inst_addr                            "0x0023"
#define  set_KME_ME2_CALC1_KME_ME2_ME12_COMPARE_reg(data)                        (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_ME12_COMPARE_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_ME12_COMPARE_reg                              (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_ME12_COMPARE_reg))
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE_reg_me2_me12_pfv_diff_th_shift       (8)
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE_reg_me2_me1_pfv_sad_th_shift         (0)
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE_reg_me2_me12_pfv_diff_th_mask        (0x000FFF00)
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE_reg_me2_me1_pfv_sad_th_mask          (0x000000FF)
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE_reg_me2_me12_pfv_diff_th(data)       (0x000FFF00&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE_reg_me2_me1_pfv_sad_th(data)         (0x000000FF&(data))
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE_get_reg_me2_me12_pfv_diff_th(data)   ((0x000FFF00&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE_get_reg_me2_me1_pfv_sad_th(data)     (0x000000FF&(data))

#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE2                                    0x1809BA9C
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE2_reg_addr                            "0xB809BA9C"
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE2_reg                                 0xB809BA9C
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE2_inst_addr                           "0x0024"
#define  set_KME_ME2_CALC1_KME_ME2_ME12_COMPARE2_reg(data)                       (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_ME12_COMPARE2_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_ME12_COMPARE2_reg                             (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_ME12_COMPARE2_reg))
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE2_reg_me2_me12_ppfv_diff_th_shift     (8)
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE2_reg_me2_me1_ppfv_sad_th_shift       (0)
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE2_reg_me2_me12_ppfv_diff_th_mask      (0x000FFF00)
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE2_reg_me2_me1_ppfv_sad_th_mask        (0x000000FF)
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE2_reg_me2_me12_ppfv_diff_th(data)     (0x000FFF00&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE2_reg_me2_me1_ppfv_sad_th(data)       (0x000000FF&(data))
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE2_get_reg_me2_me12_ppfv_diff_th(data) ((0x000FFF00&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_ME12_COMPARE2_get_reg_me2_me1_ppfv_sad_th(data)   (0x000000FF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_BC                                         0x1809BABC
#define  KME_ME2_CALC1_KME_ME2_CALC1_BC_reg_addr                                 "0xB809BABC"
#define  KME_ME2_CALC1_KME_ME2_CALC1_BC_reg                                      0xB809BABC
#define  KME_ME2_CALC1_KME_ME2_CALC1_BC_inst_addr                                "0x0025"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_BC_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_BC_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_BC_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_BC_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_BC_regr_me2_rgn0_cnt_fast_mvy_shift         (14)
#define  KME_ME2_CALC1_KME_ME2_CALC1_BC_regr_me2_rgn0_cnt_fast_mvx_shift         (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_BC_regr_me2_rgn0_cnt_fast_mvy_mask          (0x0FFFC000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_BC_regr_me2_rgn0_cnt_fast_mvx_mask          (0x00003FFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_BC_regr_me2_rgn0_cnt_fast_mvy(data)         (0x0FFFC000&((data)<<14))
#define  KME_ME2_CALC1_KME_ME2_CALC1_BC_regr_me2_rgn0_cnt_fast_mvx(data)         (0x00003FFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_BC_get_regr_me2_rgn0_cnt_fast_mvy(data)     ((0x0FFFC000&(data))>>14)
#define  KME_ME2_CALC1_KME_ME2_CALC1_BC_get_regr_me2_rgn0_cnt_fast_mvx(data)     (0x00003FFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_C0                                         0x1809BAC0
#define  KME_ME2_CALC1_KME_ME2_CALC1_C0_reg_addr                                 "0xB809BAC0"
#define  KME_ME2_CALC1_KME_ME2_CALC1_C0_reg                                      0xB809BAC0
#define  KME_ME2_CALC1_KME_ME2_CALC1_C0_inst_addr                                "0x0026"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_C0_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_C0_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_C0_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_C0_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_C0_regr_me2_rgn1_cnt_fast_mvy_shift         (14)
#define  KME_ME2_CALC1_KME_ME2_CALC1_C0_regr_me2_rgn1_cnt_fast_mvx_shift         (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_C0_regr_me2_rgn1_cnt_fast_mvy_mask          (0x0FFFC000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_C0_regr_me2_rgn1_cnt_fast_mvx_mask          (0x00003FFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_C0_regr_me2_rgn1_cnt_fast_mvy(data)         (0x0FFFC000&((data)<<14))
#define  KME_ME2_CALC1_KME_ME2_CALC1_C0_regr_me2_rgn1_cnt_fast_mvx(data)         (0x00003FFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_C0_get_regr_me2_rgn1_cnt_fast_mvy(data)     ((0x0FFFC000&(data))>>14)
#define  KME_ME2_CALC1_KME_ME2_CALC1_C0_get_regr_me2_rgn1_cnt_fast_mvx(data)     (0x00003FFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_C4                                         0x1809BAC4
#define  KME_ME2_CALC1_KME_ME2_CALC1_C4_reg_addr                                 "0xB809BAC4"
#define  KME_ME2_CALC1_KME_ME2_CALC1_C4_reg                                      0xB809BAC4
#define  KME_ME2_CALC1_KME_ME2_CALC1_C4_inst_addr                                "0x0027"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_C4_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_C4_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_C4_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_C4_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_C4_regr_me2_rgn2_cnt_fast_mvy_shift         (14)
#define  KME_ME2_CALC1_KME_ME2_CALC1_C4_regr_me2_rgn2_cnt_fast_mvx_shift         (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_C4_regr_me2_rgn2_cnt_fast_mvy_mask          (0x0FFFC000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_C4_regr_me2_rgn2_cnt_fast_mvx_mask          (0x00003FFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_C4_regr_me2_rgn2_cnt_fast_mvy(data)         (0x0FFFC000&((data)<<14))
#define  KME_ME2_CALC1_KME_ME2_CALC1_C4_regr_me2_rgn2_cnt_fast_mvx(data)         (0x00003FFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_C4_get_regr_me2_rgn2_cnt_fast_mvy(data)     ((0x0FFFC000&(data))>>14)
#define  KME_ME2_CALC1_KME_ME2_CALC1_C4_get_regr_me2_rgn2_cnt_fast_mvx(data)     (0x00003FFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_C8                                         0x1809BAC8
#define  KME_ME2_CALC1_KME_ME2_CALC1_C8_reg_addr                                 "0xB809BAC8"
#define  KME_ME2_CALC1_KME_ME2_CALC1_C8_reg                                      0xB809BAC8
#define  KME_ME2_CALC1_KME_ME2_CALC1_C8_inst_addr                                "0x0028"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_C8_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_C8_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_C8_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_C8_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_C8_regr_me2_rgn3_cnt_fast_mvy_shift         (14)
#define  KME_ME2_CALC1_KME_ME2_CALC1_C8_regr_me2_rgn3_cnt_fast_mvx_shift         (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_C8_regr_me2_rgn3_cnt_fast_mvy_mask          (0x0FFFC000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_C8_regr_me2_rgn3_cnt_fast_mvx_mask          (0x00003FFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_C8_regr_me2_rgn3_cnt_fast_mvy(data)         (0x0FFFC000&((data)<<14))
#define  KME_ME2_CALC1_KME_ME2_CALC1_C8_regr_me2_rgn3_cnt_fast_mvx(data)         (0x00003FFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_C8_get_regr_me2_rgn3_cnt_fast_mvy(data)     ((0x0FFFC000&(data))>>14)
#define  KME_ME2_CALC1_KME_ME2_CALC1_C8_get_regr_me2_rgn3_cnt_fast_mvx(data)     (0x00003FFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_CC                                         0x1809BACC
#define  KME_ME2_CALC1_KME_ME2_CALC1_CC_reg_addr                                 "0xB809BACC"
#define  KME_ME2_CALC1_KME_ME2_CALC1_CC_reg                                      0xB809BACC
#define  KME_ME2_CALC1_KME_ME2_CALC1_CC_inst_addr                                "0x0029"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_CC_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_CC_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_CC_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_CC_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_CC_regr_me2_rgn4_cnt_fast_mvy_shift         (14)
#define  KME_ME2_CALC1_KME_ME2_CALC1_CC_regr_me2_rgn4_cnt_fast_mvx_shift         (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_CC_regr_me2_rgn4_cnt_fast_mvy_mask          (0x0FFFC000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_CC_regr_me2_rgn4_cnt_fast_mvx_mask          (0x00003FFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_CC_regr_me2_rgn4_cnt_fast_mvy(data)         (0x0FFFC000&((data)<<14))
#define  KME_ME2_CALC1_KME_ME2_CALC1_CC_regr_me2_rgn4_cnt_fast_mvx(data)         (0x00003FFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_CC_get_regr_me2_rgn4_cnt_fast_mvy(data)     ((0x0FFFC000&(data))>>14)
#define  KME_ME2_CALC1_KME_ME2_CALC1_CC_get_regr_me2_rgn4_cnt_fast_mvx(data)     (0x00003FFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_D0                                         0x1809BAD0
#define  KME_ME2_CALC1_KME_ME2_CALC1_D0_reg_addr                                 "0xB809BAD0"
#define  KME_ME2_CALC1_KME_ME2_CALC1_D0_reg                                      0xB809BAD0
#define  KME_ME2_CALC1_KME_ME2_CALC1_D0_inst_addr                                "0x002A"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_D0_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_D0_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_D0_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_D0_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_D0_regr_me2_rgn5_cnt_fast_mvy_shift         (14)
#define  KME_ME2_CALC1_KME_ME2_CALC1_D0_regr_me2_rgn5_cnt_fast_mvx_shift         (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_D0_regr_me2_rgn5_cnt_fast_mvy_mask          (0x0FFFC000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_D0_regr_me2_rgn5_cnt_fast_mvx_mask          (0x00003FFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_D0_regr_me2_rgn5_cnt_fast_mvy(data)         (0x0FFFC000&((data)<<14))
#define  KME_ME2_CALC1_KME_ME2_CALC1_D0_regr_me2_rgn5_cnt_fast_mvx(data)         (0x00003FFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_D0_get_regr_me2_rgn5_cnt_fast_mvy(data)     ((0x0FFFC000&(data))>>14)
#define  KME_ME2_CALC1_KME_ME2_CALC1_D0_get_regr_me2_rgn5_cnt_fast_mvx(data)     (0x00003FFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_D4                                         0x1809BAD4
#define  KME_ME2_CALC1_KME_ME2_CALC1_D4_reg_addr                                 "0xB809BAD4"
#define  KME_ME2_CALC1_KME_ME2_CALC1_D4_reg                                      0xB809BAD4
#define  KME_ME2_CALC1_KME_ME2_CALC1_D4_inst_addr                                "0x002B"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_D4_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_D4_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_D4_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_D4_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_D4_regr_me2_rgn6_cnt_fast_mvy_shift         (14)
#define  KME_ME2_CALC1_KME_ME2_CALC1_D4_regr_me2_rgn6_cnt_fast_mvx_shift         (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_D4_regr_me2_rgn6_cnt_fast_mvy_mask          (0x0FFFC000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_D4_regr_me2_rgn6_cnt_fast_mvx_mask          (0x00003FFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_D4_regr_me2_rgn6_cnt_fast_mvy(data)         (0x0FFFC000&((data)<<14))
#define  KME_ME2_CALC1_KME_ME2_CALC1_D4_regr_me2_rgn6_cnt_fast_mvx(data)         (0x00003FFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_D4_get_regr_me2_rgn6_cnt_fast_mvy(data)     ((0x0FFFC000&(data))>>14)
#define  KME_ME2_CALC1_KME_ME2_CALC1_D4_get_regr_me2_rgn6_cnt_fast_mvx(data)     (0x00003FFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_D8                                         0x1809BAD8
#define  KME_ME2_CALC1_KME_ME2_CALC1_D8_reg_addr                                 "0xB809BAD8"
#define  KME_ME2_CALC1_KME_ME2_CALC1_D8_reg                                      0xB809BAD8
#define  KME_ME2_CALC1_KME_ME2_CALC1_D8_inst_addr                                "0x002C"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_D8_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_D8_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_D8_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_D8_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_D8_regr_me2_rgn7_cnt_fast_mvy_shift         (14)
#define  KME_ME2_CALC1_KME_ME2_CALC1_D8_regr_me2_rgn7_cnt_fast_mvx_shift         (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_D8_regr_me2_rgn7_cnt_fast_mvy_mask          (0x0FFFC000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_D8_regr_me2_rgn7_cnt_fast_mvx_mask          (0x00003FFF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_D8_regr_me2_rgn7_cnt_fast_mvy(data)         (0x0FFFC000&((data)<<14))
#define  KME_ME2_CALC1_KME_ME2_CALC1_D8_regr_me2_rgn7_cnt_fast_mvx(data)         (0x00003FFF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_D8_get_regr_me2_rgn7_cnt_fast_mvy(data)     ((0x0FFFC000&(data))>>14)
#define  KME_ME2_CALC1_KME_ME2_CALC1_D8_get_regr_me2_rgn7_cnt_fast_mvx(data)     (0x00003FFF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_DC                                         0x1809BADC
#define  KME_ME2_CALC1_KME_ME2_CALC1_DC_reg_addr                                 "0xB809BADC"
#define  KME_ME2_CALC1_KME_ME2_CALC1_DC_reg                                      0xB809BADC
#define  KME_ME2_CALC1_KME_ME2_CALC1_DC_inst_addr                                "0x002D"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_DC_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_DC_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_DC_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_DC_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_DC_regr_me2_gmv_cnt_shift                   (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_DC_regr_me2_gmv_cnt_mask                    (0x000000FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_DC_regr_me2_gmv_cnt(data)                   (0x000000FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_DC_get_regr_me2_gmv_cnt(data)               (0x000000FF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_E0                                         0x1809BAE0
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_reg_addr                                 "0xB809BAE0"
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_reg                                      0xB809BAE0
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_inst_addr                                "0x002E"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_E0_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_E0_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_E0_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_E0_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_regr_me2_rmv_cnt3_shift                  (24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_regr_me2_rmv_cnt2_shift                  (16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_regr_me2_rmv_cnt1_shift                  (8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_regr_me2_rmv_cnt0_shift                  (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_regr_me2_rmv_cnt3_mask                   (0xFF000000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_regr_me2_rmv_cnt2_mask                   (0x00FF0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_regr_me2_rmv_cnt1_mask                   (0x0000FF00)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_regr_me2_rmv_cnt0_mask                   (0x000000FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_regr_me2_rmv_cnt3(data)                  (0xFF000000&((data)<<24))
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_regr_me2_rmv_cnt2(data)                  (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_regr_me2_rmv_cnt1(data)                  (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_regr_me2_rmv_cnt0(data)                  (0x000000FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_get_regr_me2_rmv_cnt3(data)              ((0xFF000000&(data))>>24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_get_regr_me2_rmv_cnt2(data)              ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_get_regr_me2_rmv_cnt1(data)              ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E0_get_regr_me2_rmv_cnt0(data)              (0x000000FF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_E4                                         0x1809BAE4
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_reg_addr                                 "0xB809BAE4"
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_reg                                      0xB809BAE4
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_inst_addr                                "0x002F"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_E4_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_E4_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_E4_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_E4_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_regr_me2_rmv_cnt7_shift                  (24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_regr_me2_rmv_cnt6_shift                  (16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_regr_me2_rmv_cnt5_shift                  (8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_regr_me2_rmv_cnt4_shift                  (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_regr_me2_rmv_cnt7_mask                   (0xFF000000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_regr_me2_rmv_cnt6_mask                   (0x00FF0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_regr_me2_rmv_cnt5_mask                   (0x0000FF00)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_regr_me2_rmv_cnt4_mask                   (0x000000FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_regr_me2_rmv_cnt7(data)                  (0xFF000000&((data)<<24))
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_regr_me2_rmv_cnt6(data)                  (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_regr_me2_rmv_cnt5(data)                  (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_regr_me2_rmv_cnt4(data)                  (0x000000FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_get_regr_me2_rmv_cnt7(data)              ((0xFF000000&(data))>>24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_get_regr_me2_rmv_cnt6(data)              ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_get_regr_me2_rmv_cnt5(data)              ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E4_get_regr_me2_rmv_cnt4(data)              (0x000000FF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_E8                                         0x1809BAE8
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_reg_addr                                 "0xB809BAE8"
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_reg                                      0xB809BAE8
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_inst_addr                                "0x0030"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_E8_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_E8_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_E8_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_E8_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_regr_me2_rmv_cnt11_shift                 (24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_regr_me2_rmv_cnt10_shift                 (16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_regr_me2_rmv_cnt9_shift                  (8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_regr_me2_rmv_cnt8_shift                  (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_regr_me2_rmv_cnt11_mask                  (0xFF000000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_regr_me2_rmv_cnt10_mask                  (0x00FF0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_regr_me2_rmv_cnt9_mask                   (0x0000FF00)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_regr_me2_rmv_cnt8_mask                   (0x000000FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_regr_me2_rmv_cnt11(data)                 (0xFF000000&((data)<<24))
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_regr_me2_rmv_cnt10(data)                 (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_regr_me2_rmv_cnt9(data)                  (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_regr_me2_rmv_cnt8(data)                  (0x000000FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_get_regr_me2_rmv_cnt11(data)             ((0xFF000000&(data))>>24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_get_regr_me2_rmv_cnt10(data)             ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_get_regr_me2_rmv_cnt9(data)              ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_E8_get_regr_me2_rmv_cnt8(data)              (0x000000FF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_EC                                         0x1809BAEC
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_reg_addr                                 "0xB809BAEC"
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_reg                                      0xB809BAEC
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_inst_addr                                "0x0031"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_EC_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_EC_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_EC_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_EC_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_regr_me2_rmv_cnt15_shift                 (24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_regr_me2_rmv_cnt14_shift                 (16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_regr_me2_rmv_cnt13_shift                 (8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_regr_me2_rmv_cnt12_shift                 (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_regr_me2_rmv_cnt15_mask                  (0xFF000000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_regr_me2_rmv_cnt14_mask                  (0x00FF0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_regr_me2_rmv_cnt13_mask                  (0x0000FF00)
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_regr_me2_rmv_cnt12_mask                  (0x000000FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_regr_me2_rmv_cnt15(data)                 (0xFF000000&((data)<<24))
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_regr_me2_rmv_cnt14(data)                 (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_regr_me2_rmv_cnt13(data)                 (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_regr_me2_rmv_cnt12(data)                 (0x000000FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_get_regr_me2_rmv_cnt15(data)             ((0xFF000000&(data))>>24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_get_regr_me2_rmv_cnt14(data)             ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_get_regr_me2_rmv_cnt13(data)             ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_EC_get_regr_me2_rmv_cnt12(data)             (0x000000FF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_F0                                         0x1809BAF0
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_reg_addr                                 "0xB809BAF0"
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_reg                                      0xB809BAF0
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_inst_addr                                "0x0032"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_F0_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_F0_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_F0_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_F0_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_regr_me2_rmv_cnt19_shift                 (24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_regr_me2_rmv_cnt18_shift                 (16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_regr_me2_rmv_cnt17_shift                 (8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_regr_me2_rmv_cnt16_shift                 (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_regr_me2_rmv_cnt19_mask                  (0xFF000000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_regr_me2_rmv_cnt18_mask                  (0x00FF0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_regr_me2_rmv_cnt17_mask                  (0x0000FF00)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_regr_me2_rmv_cnt16_mask                  (0x000000FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_regr_me2_rmv_cnt19(data)                 (0xFF000000&((data)<<24))
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_regr_me2_rmv_cnt18(data)                 (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_regr_me2_rmv_cnt17(data)                 (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_regr_me2_rmv_cnt16(data)                 (0x000000FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_get_regr_me2_rmv_cnt19(data)             ((0xFF000000&(data))>>24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_get_regr_me2_rmv_cnt18(data)             ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_get_regr_me2_rmv_cnt17(data)             ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F0_get_regr_me2_rmv_cnt16(data)             (0x000000FF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_F4                                         0x1809BAF4
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_reg_addr                                 "0xB809BAF4"
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_reg                                      0xB809BAF4
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_inst_addr                                "0x0033"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_F4_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_F4_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_F4_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_F4_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_regr_me2_rmv_cnt23_shift                 (24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_regr_me2_rmv_cnt22_shift                 (16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_regr_me2_rmv_cnt21_shift                 (8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_regr_me2_rmv_cnt20_shift                 (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_regr_me2_rmv_cnt23_mask                  (0xFF000000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_regr_me2_rmv_cnt22_mask                  (0x00FF0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_regr_me2_rmv_cnt21_mask                  (0x0000FF00)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_regr_me2_rmv_cnt20_mask                  (0x000000FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_regr_me2_rmv_cnt23(data)                 (0xFF000000&((data)<<24))
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_regr_me2_rmv_cnt22(data)                 (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_regr_me2_rmv_cnt21(data)                 (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_regr_me2_rmv_cnt20(data)                 (0x000000FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_get_regr_me2_rmv_cnt23(data)             ((0xFF000000&(data))>>24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_get_regr_me2_rmv_cnt22(data)             ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_get_regr_me2_rmv_cnt21(data)             ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F4_get_regr_me2_rmv_cnt20(data)             (0x000000FF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_F8                                         0x1809BAF8
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_reg_addr                                 "0xB809BAF8"
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_reg                                      0xB809BAF8
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_inst_addr                                "0x0034"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_F8_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_F8_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_F8_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_F8_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_regr_me2_rmv_cnt27_shift                 (24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_regr_me2_rmv_cnt26_shift                 (16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_regr_me2_rmv_cnt25_shift                 (8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_regr_me2_rmv_cnt24_shift                 (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_regr_me2_rmv_cnt27_mask                  (0xFF000000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_regr_me2_rmv_cnt26_mask                  (0x00FF0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_regr_me2_rmv_cnt25_mask                  (0x0000FF00)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_regr_me2_rmv_cnt24_mask                  (0x000000FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_regr_me2_rmv_cnt27(data)                 (0xFF000000&((data)<<24))
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_regr_me2_rmv_cnt26(data)                 (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_regr_me2_rmv_cnt25(data)                 (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_regr_me2_rmv_cnt24(data)                 (0x000000FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_get_regr_me2_rmv_cnt27(data)             ((0xFF000000&(data))>>24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_get_regr_me2_rmv_cnt26(data)             ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_get_regr_me2_rmv_cnt25(data)             ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_F8_get_regr_me2_rmv_cnt24(data)             (0x000000FF&(data))

#define  KME_ME2_CALC1_KME_ME2_CALC1_FC                                         0x1809BAFC
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_reg_addr                                 "0xB809BAFC"
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_reg                                      0xB809BAFC
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_inst_addr                                "0x0035"
#define  set_KME_ME2_CALC1_KME_ME2_CALC1_FC_reg(data)                            (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_FC_reg)=data)
#define  get_KME_ME2_CALC1_KME_ME2_CALC1_FC_reg                                  (*((volatile unsigned int*)KME_ME2_CALC1_KME_ME2_CALC1_FC_reg))
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_regr_me2_rmv_cnt31_shift                 (24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_regr_me2_rmv_cnt30_shift                 (16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_regr_me2_rmv_cnt29_shift                 (8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_regr_me2_rmv_cnt28_shift                 (0)
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_regr_me2_rmv_cnt31_mask                  (0xFF000000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_regr_me2_rmv_cnt30_mask                  (0x00FF0000)
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_regr_me2_rmv_cnt29_mask                  (0x0000FF00)
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_regr_me2_rmv_cnt28_mask                  (0x000000FF)
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_regr_me2_rmv_cnt31(data)                 (0xFF000000&((data)<<24))
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_regr_me2_rmv_cnt30(data)                 (0x00FF0000&((data)<<16))
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_regr_me2_rmv_cnt29(data)                 (0x0000FF00&((data)<<8))
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_regr_me2_rmv_cnt28(data)                 (0x000000FF&(data))
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_get_regr_me2_rmv_cnt31(data)             ((0xFF000000&(data))>>24)
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_get_regr_me2_rmv_cnt30(data)             ((0x00FF0000&(data))>>16)
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_get_regr_me2_rmv_cnt29(data)             ((0x0000FF00&(data))>>8)
#define  KME_ME2_CALC1_KME_ME2_CALC1_FC_get_regr_me2_rmv_cnt28(data)             (0x000000FF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_ME2_CALC1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me2_adptpnt_rnd_y2:6;
        RBus_UInt32  me2_adptpnt_rnd_y1:6;
        RBus_UInt32  me2_adptpnt_zmv_gain:10;
        RBus_UInt32  me2_adptpnt_rnd_en:1;
        RBus_UInt32  me2_adptpnt_gmv_en:1;
        RBus_UInt32  me2_adptpnt_zmv_en:1;
        RBus_UInt32  me2_adptpnt_rnd_mode:4;
    };
}kme_me2_calc1_kme_me2_calc1_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_rnd_x4:8;
        RBus_UInt32  me2_adptpnt_rnd_x3:8;
        RBus_UInt32  me2_adptpnt_rnd_x2:8;
        RBus_UInt32  me2_adptpnt_rnd_x1:8;
    };
}kme_me2_calc1_kme_me2_calc1_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me2_adptpnt_rnd_slope2:9;
        RBus_UInt32  me2_adptpnt_rnd_slope1:9;
        RBus_UInt32  me2_adptpnt_rnd_y4:6;
        RBus_UInt32  me2_adptpnt_rnd_y3:6;
    };
}kme_me2_calc1_kme_me2_calc1_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  me2_adptpnt_gmv_cnt_x1:12;
        RBus_UInt32  me2_adptpnt_rnd_slope3:9;
    };
}kme_me2_calc1_kme_me2_calc1_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me2_adptpnt_gmv_cnt_y2:6;
        RBus_UInt32  me2_adptpnt_gmv_cnt_y1:6;
        RBus_UInt32  me2_adptpnt_gmv_cnt_x2:12;
    };
}kme_me2_calc1_kme_me2_calc1_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  me2_adptpnt_gmv_ucf_slope1:11;
        RBus_UInt32  me2_adptpnt_gmv_cnt_slope1:11;
    };
}kme_me2_calc1_kme_me2_calc1_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_gmv_ucf_y2:6;
        RBus_UInt32  me2_adptpnt_gmv_ucf_y1:6;
        RBus_UInt32  me2_adptpnt_gmv_ucf_x2:10;
        RBus_UInt32  me2_adptpnt_gmv_ucf_x1:10;
    };
}kme_me2_calc1_kme_me2_calc1_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_sad_th_slope_ac:6;
        RBus_UInt32  me2_adptpnt_gmv_sad_x2:13;
        RBus_UInt32  me2_adptpnt_gmv_sad_x1:13;
    };
}kme_me2_calc1_kme_me2_calc1_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  me2_adptpnt_gmv_sad_y1:13;
        RBus_UInt32  me2_adptpnt_gmv_sad_x3:13;
    };
}kme_me2_calc1_kme_me2_calc1_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  me2_adptpnt_gmv_sad_y3:13;
        RBus_UInt32  me2_adptpnt_gmv_sad_y2:13;
    };
}kme_me2_calc1_kme_me2_calc1_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_gmv_sad_slope2:16;
        RBus_UInt32  me2_adptpnt_gmv_sad_slope1:16;
    };
}kme_me2_calc1_kme_me2_calc1_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  me2_adptpnt_zmv_sad_x2:13;
        RBus_UInt32  me2_adptpnt_zmv_sad_x1:13;
    };
}kme_me2_calc1_kme_me2_calc1_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  me2_adptpnt_zmv_sad_y1:13;
        RBus_UInt32  me2_adptpnt_zmv_sad_x3:13;
    };
}kme_me2_calc1_kme_me2_calc1_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  me2_adptpnt_zmv_sad_y3:13;
        RBus_UInt32  me2_adptpnt_zmv_sad_y2:13;
    };
}kme_me2_calc1_kme_me2_calc1_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_zmv_sad_slope2:16;
        RBus_UInt32  me2_adptpnt_zmv_sad_slope1:16;
    };
}kme_me2_calc1_kme_me2_calc1_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me2_hact:9;
        RBus_UInt32  me2_fast_mvy_th:10;
        RBus_UInt32  me2_fast_mvx_th:11;
    };
}kme_me2_calc1_kme_me2_calc1_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  me2_sad_th_base_ac:13;
        RBus_UInt32  me2_vact:9;
    };
}kme_me2_calc1_kme_me2_calc1_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_gmvcost_sel:32;
    };
}kme_me2_calc1_kme_me2_gmvcost_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  me2_gmvcost_psad_min:7;
        RBus_UInt32  res2:2;
        RBus_UInt32  me2_gmvd_gain:6;
    };
}kme_me2_calc1_kme_me2_gmvcost_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_shm_min_sad_th:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_me2_vbuf_shm_avg_ac0:6;
        RBus_UInt32  kme_me2_vbuf_shm_dtl_h:8;
        RBus_UInt32  kme_me2_vbuf_shm_dtl_l:6;
        RBus_UInt32  kme_me2_vbuf_shm_force_en:1;
        RBus_UInt32  kme_me2_vbuf_shm_en:1;
    };
}kme_me2_calc1_kme_me2_top_shm_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_shm_ac_alpha:6;
        RBus_UInt32  kme_me2_vbuf_shm_dyn_sad_th1:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  kme_me2_vbuf_shm_dyn_sad_th0:10;
    };
}kme_me2_calc1_kme_me2_top_shm_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_zmv_th:4;
        RBus_UInt32  me2_sad_th_gain:2;
        RBus_UInt32  me2_flt_gain_mode:2;
        RBus_UInt32  me2_mv_th:8;
        RBus_UInt32  res1:6;
        RBus_UInt32  me2_zsad_th_gain:2;
        RBus_UInt32  res2:8;
    };
}kme_me2_calc1_kme_me2_flt_prot_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me2_zsad_th_l:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  me2_sad_th_l:13;
    };
}kme_me2_calc1_kme_me2_flt_prot_sad_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  me2_high_det_bld_type:2;
        RBus_UInt32  me2_high_det_bv_replace_mv:4;
        RBus_UInt32  me2_high_det_bv_replace_type:1;
        RBus_UInt32  me2_high_det_bv_limit:4;
        RBus_UInt32  me2_high_det_bv_th:3;
        RBus_UInt32  me2_high_det_bv_en:1;
        RBus_UInt32  me2_high_det_zmv_cddpnt_half:1;
        RBus_UInt32  me2_high_det_zmv_th:3;
        RBus_UInt32  me2_high_det_zmv_en:1;
        RBus_UInt32  me2_high_det_updt_mask:3;
        RBus_UInt32  me2_high_det_updt_th:3;
        RBus_UInt32  me2_high_det_updt_en:1;
    };
}kme_me2_calc1_kme_me2_top0_high_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_vst_enable:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_me2_vst_mvdiff:3;
        RBus_UInt32  reg_me2_vst_penalty:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_me2_vst_targety:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  reg_me2_vst_targetx:6;
    };
}kme_me2_calc1_kme_me2_calc1_vst_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_vst_apply_maxmindiff:8;
        RBus_UInt32  reg_me2_vst_apply_coreapl:8;
        RBus_UInt32  reg_me2_vst_apply_maxvalue:8;
        RBus_UInt32  reg_me2_vst_apply_boundary_offset:8;
    };
}kme_me2_calc1_kme_me2_calc1_vst_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_vst_apply_boundary_xend:8;
        RBus_UInt32  reg_me2_vst_apply_boundary_xsta:8;
        RBus_UInt32  reg_me2_vst_gaincurve_slope2:8;
        RBus_UInt32  reg_me2_vst_gaincurve_slope1:8;
    };
}kme_me2_calc1_kme_me2_calc1_vst_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_me2_vst_apply_apl2maxvalue_ratio:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_me2_vst_apply_apl2maxmindiff_ratio:6;
        RBus_UInt32  res3:6;
        RBus_UInt32  reg_me2_vst_acdcpk_spatial_mvd_shiftbit:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  reg_me2_vst_acdcpk_mvd_shiftbit:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  reg_me2_vst_acdcpk_sad_shiftbit:2;
    };
}kme_me2_calc1_kme_me2_calc1_vst_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_dctype_sel:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_me2_satd_dc_bld_en:1;
        RBus_UInt32  reg_me2_satd_dc_bld_mode_sel:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_me2_satd_dcn_bldapl_x3:8;
        RBus_UInt32  reg_me2_satd_dcn_bldapl_x2:8;
        RBus_UInt32  reg_me2_satd_dcn_bldapl_x1:8;
    };
}kme_me2_calc1_satd0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_me2_satd_coef_4x4:6;
        RBus_UInt32  res2:4;
        RBus_UInt32  reg_me2_satd_dcn_bldapl_slope2:4;
        RBus_UInt32  reg_me2_satd_dcn_bldapl_slope1:4;
        RBus_UInt32  reg_me2_satd_dcn_bldapl_y3:4;
        RBus_UInt32  reg_me2_satd_dcn_bldapl_y2:4;
        RBus_UInt32  reg_me2_satd_dcn_bldapl_y1:4;
    };
}kme_me2_calc1_satd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  reg_me2_satd_dcn_blddtl_mode:3;
        RBus_UInt32  reg_me2_satd_dcn_blddtl_x3:8;
        RBus_UInt32  reg_me2_satd_dcn_blddtl_x2:8;
        RBus_UInt32  reg_me2_satd_dcn_blddtl_x1:8;
    };
}kme_me2_calc1_satd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  reg_me2_satd_dcn_blddtl_slope2:4;
        RBus_UInt32  reg_me2_satd_dcn_blddtl_slope1:4;
        RBus_UInt32  reg_me2_satd_dcn_blddtl_y3:4;
        RBus_UInt32  reg_me2_satd_dcn_blddtl_y2:4;
        RBus_UInt32  reg_me2_satd_dcn_blddtl_y1:4;
    };
}kme_me2_calc1_satd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_bvlogoprotecten:1;
        RBus_UInt32  res1:31;
    };
}kme_me2_calc1_satd4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_edge_eng_thr:8;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_me2_edge_eng_aplratio:5;
        RBus_UInt32  res2:4;
        RBus_UInt32  reg_me2_edge_eng_ratio:4;
        RBus_UInt32  res3:2;
        RBus_UInt32  reg_me2_edge_hv_ratio:2;
        RBus_UInt32  res4:3;
        RBus_UInt32  reg_me2_edge_eng_adpthr_modesel:1;
    };
}kme_me2_calc1_edge_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_edgefromppfv_enable:1;
        RBus_UInt32  reg_me2_edgefrompfv_enable:1;
        RBus_UInt32  reg_me2_edgepostproc_enable:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_me2_edgeretimer_yrange:4;
        RBus_UInt32  reg_me2_edge_type_debug_sel:2;
        RBus_UInt32  reg_me2_edge_type_debug_en:1;
        RBus_UInt32  reg_me2_edgefromppfv_modifypos:9;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_me2_edgefrompfv_modifypos:9;
    };
}kme_me2_calc1_edge_retimer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  reg_me2_me12_pfv_diff_th:12;
        RBus_UInt32  reg_me2_me1_pfv_sad_th:8;
    };
}kme_me2_calc1_kme_me2_me12_compare_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  reg_me2_me12_ppfv_diff_th:12;
        RBus_UInt32  reg_me2_me1_ppfv_sad_th:8;
    };
}kme_me2_calc1_kme_me2_me12_compare2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_me2_rgn0_cnt_fast_mvy:14;
        RBus_UInt32  regr_me2_rgn0_cnt_fast_mvx:14;
    };
}kme_me2_calc1_kme_me2_calc1_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_me2_rgn1_cnt_fast_mvy:14;
        RBus_UInt32  regr_me2_rgn1_cnt_fast_mvx:14;
    };
}kme_me2_calc1_kme_me2_calc1_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_me2_rgn2_cnt_fast_mvy:14;
        RBus_UInt32  regr_me2_rgn2_cnt_fast_mvx:14;
    };
}kme_me2_calc1_kme_me2_calc1_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_me2_rgn3_cnt_fast_mvy:14;
        RBus_UInt32  regr_me2_rgn3_cnt_fast_mvx:14;
    };
}kme_me2_calc1_kme_me2_calc1_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_me2_rgn4_cnt_fast_mvy:14;
        RBus_UInt32  regr_me2_rgn4_cnt_fast_mvx:14;
    };
}kme_me2_calc1_kme_me2_calc1_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_me2_rgn5_cnt_fast_mvy:14;
        RBus_UInt32  regr_me2_rgn5_cnt_fast_mvx:14;
    };
}kme_me2_calc1_kme_me2_calc1_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_me2_rgn6_cnt_fast_mvy:14;
        RBus_UInt32  regr_me2_rgn6_cnt_fast_mvx:14;
    };
}kme_me2_calc1_kme_me2_calc1_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_me2_rgn7_cnt_fast_mvy:14;
        RBus_UInt32  regr_me2_rgn7_cnt_fast_mvx:14;
    };
}kme_me2_calc1_kme_me2_calc1_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  regr_me2_gmv_cnt:8;
    };
}kme_me2_calc1_kme_me2_calc1_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rmv_cnt3:8;
        RBus_UInt32  regr_me2_rmv_cnt2:8;
        RBus_UInt32  regr_me2_rmv_cnt1:8;
        RBus_UInt32  regr_me2_rmv_cnt0:8;
    };
}kme_me2_calc1_kme_me2_calc1_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rmv_cnt7:8;
        RBus_UInt32  regr_me2_rmv_cnt6:8;
        RBus_UInt32  regr_me2_rmv_cnt5:8;
        RBus_UInt32  regr_me2_rmv_cnt4:8;
    };
}kme_me2_calc1_kme_me2_calc1_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rmv_cnt11:8;
        RBus_UInt32  regr_me2_rmv_cnt10:8;
        RBus_UInt32  regr_me2_rmv_cnt9:8;
        RBus_UInt32  regr_me2_rmv_cnt8:8;
    };
}kme_me2_calc1_kme_me2_calc1_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rmv_cnt15:8;
        RBus_UInt32  regr_me2_rmv_cnt14:8;
        RBus_UInt32  regr_me2_rmv_cnt13:8;
        RBus_UInt32  regr_me2_rmv_cnt12:8;
    };
}kme_me2_calc1_kme_me2_calc1_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rmv_cnt19:8;
        RBus_UInt32  regr_me2_rmv_cnt18:8;
        RBus_UInt32  regr_me2_rmv_cnt17:8;
        RBus_UInt32  regr_me2_rmv_cnt16:8;
    };
}kme_me2_calc1_kme_me2_calc1_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rmv_cnt23:8;
        RBus_UInt32  regr_me2_rmv_cnt22:8;
        RBus_UInt32  regr_me2_rmv_cnt21:8;
        RBus_UInt32  regr_me2_rmv_cnt20:8;
    };
}kme_me2_calc1_kme_me2_calc1_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rmv_cnt27:8;
        RBus_UInt32  regr_me2_rmv_cnt26:8;
        RBus_UInt32  regr_me2_rmv_cnt25:8;
        RBus_UInt32  regr_me2_rmv_cnt24:8;
    };
}kme_me2_calc1_kme_me2_calc1_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rmv_cnt31:8;
        RBus_UInt32  regr_me2_rmv_cnt30:8;
        RBus_UInt32  regr_me2_rmv_cnt29:8;
        RBus_UInt32  regr_me2_rmv_cnt28:8;
    };
}kme_me2_calc1_kme_me2_calc1_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_ME2_CALC1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_rnd_mode:4;
        RBus_UInt32  me2_adptpnt_zmv_en:1;
        RBus_UInt32  me2_adptpnt_gmv_en:1;
        RBus_UInt32  me2_adptpnt_rnd_en:1;
        RBus_UInt32  me2_adptpnt_zmv_gain:10;
        RBus_UInt32  me2_adptpnt_rnd_y1:6;
        RBus_UInt32  me2_adptpnt_rnd_y2:6;
        RBus_UInt32  res1:3;
    };
}kme_me2_calc1_kme_me2_calc1_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_rnd_x1:8;
        RBus_UInt32  me2_adptpnt_rnd_x2:8;
        RBus_UInt32  me2_adptpnt_rnd_x3:8;
        RBus_UInt32  me2_adptpnt_rnd_x4:8;
    };
}kme_me2_calc1_kme_me2_calc1_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_rnd_y3:6;
        RBus_UInt32  me2_adptpnt_rnd_y4:6;
        RBus_UInt32  me2_adptpnt_rnd_slope1:9;
        RBus_UInt32  me2_adptpnt_rnd_slope2:9;
        RBus_UInt32  res1:2;
    };
}kme_me2_calc1_kme_me2_calc1_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_rnd_slope3:9;
        RBus_UInt32  me2_adptpnt_gmv_cnt_x1:12;
        RBus_UInt32  res1:11;
    };
}kme_me2_calc1_kme_me2_calc1_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_gmv_cnt_x2:12;
        RBus_UInt32  me2_adptpnt_gmv_cnt_y1:6;
        RBus_UInt32  me2_adptpnt_gmv_cnt_y2:6;
        RBus_UInt32  res1:8;
    };
}kme_me2_calc1_kme_me2_calc1_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_gmv_cnt_slope1:11;
        RBus_UInt32  me2_adptpnt_gmv_ucf_slope1:11;
        RBus_UInt32  res1:10;
    };
}kme_me2_calc1_kme_me2_calc1_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_gmv_ucf_x1:10;
        RBus_UInt32  me2_adptpnt_gmv_ucf_x2:10;
        RBus_UInt32  me2_adptpnt_gmv_ucf_y1:6;
        RBus_UInt32  me2_adptpnt_gmv_ucf_y2:6;
    };
}kme_me2_calc1_kme_me2_calc1_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_gmv_sad_x1:13;
        RBus_UInt32  me2_adptpnt_gmv_sad_x2:13;
        RBus_UInt32  me2_sad_th_slope_ac:6;
    };
}kme_me2_calc1_kme_me2_calc1_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_gmv_sad_x3:13;
        RBus_UInt32  me2_adptpnt_gmv_sad_y1:13;
        RBus_UInt32  res1:6;
    };
}kme_me2_calc1_kme_me2_calc1_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_gmv_sad_y2:13;
        RBus_UInt32  me2_adptpnt_gmv_sad_y3:13;
        RBus_UInt32  res1:6;
    };
}kme_me2_calc1_kme_me2_calc1_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_gmv_sad_slope1:16;
        RBus_UInt32  me2_adptpnt_gmv_sad_slope2:16;
    };
}kme_me2_calc1_kme_me2_calc1_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_zmv_sad_x1:13;
        RBus_UInt32  me2_adptpnt_zmv_sad_x2:13;
        RBus_UInt32  res1:6;
    };
}kme_me2_calc1_kme_me2_calc1_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_zmv_sad_x3:13;
        RBus_UInt32  me2_adptpnt_zmv_sad_y1:13;
        RBus_UInt32  res1:6;
    };
}kme_me2_calc1_kme_me2_calc1_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_zmv_sad_y2:13;
        RBus_UInt32  me2_adptpnt_zmv_sad_y3:13;
        RBus_UInt32  res1:6;
    };
}kme_me2_calc1_kme_me2_calc1_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_adptpnt_zmv_sad_slope1:16;
        RBus_UInt32  me2_adptpnt_zmv_sad_slope2:16;
    };
}kme_me2_calc1_kme_me2_calc1_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_fast_mvx_th:11;
        RBus_UInt32  me2_fast_mvy_th:10;
        RBus_UInt32  me2_hact:9;
        RBus_UInt32  res1:2;
    };
}kme_me2_calc1_kme_me2_calc1_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_vact:9;
        RBus_UInt32  me2_sad_th_base_ac:13;
        RBus_UInt32  res1:10;
    };
}kme_me2_calc1_kme_me2_calc1_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_gmvcost_sel:32;
    };
}kme_me2_calc1_kme_me2_gmvcost_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_gmvd_gain:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  me2_gmvcost_psad_min:7;
        RBus_UInt32  res2:17;
    };
}kme_me2_calc1_kme_me2_gmvcost_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_shm_en:1;
        RBus_UInt32  kme_me2_vbuf_shm_force_en:1;
        RBus_UInt32  kme_me2_vbuf_shm_dtl_l:6;
        RBus_UInt32  kme_me2_vbuf_shm_dtl_h:8;
        RBus_UInt32  kme_me2_vbuf_shm_avg_ac0:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_me2_vbuf_shm_min_sad_th:8;
    };
}kme_me2_calc1_kme_me2_top_shm_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_me2_vbuf_shm_dyn_sad_th0:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  kme_me2_vbuf_shm_dyn_sad_th1:10;
        RBus_UInt32  kme_me2_vbuf_shm_ac_alpha:6;
    };
}kme_me2_calc1_kme_me2_top_shm_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me2_zsad_th_gain:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  me2_mv_th:8;
        RBus_UInt32  me2_flt_gain_mode:2;
        RBus_UInt32  me2_sad_th_gain:2;
        RBus_UInt32  me2_zmv_th:4;
    };
}kme_me2_calc1_kme_me2_flt_prot_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_sad_th_l:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  me2_zsad_th_l:13;
        RBus_UInt32  res2:3;
    };
}kme_me2_calc1_kme_me2_flt_prot_sad_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me2_high_det_updt_en:1;
        RBus_UInt32  me2_high_det_updt_th:3;
        RBus_UInt32  me2_high_det_updt_mask:3;
        RBus_UInt32  me2_high_det_zmv_en:1;
        RBus_UInt32  me2_high_det_zmv_th:3;
        RBus_UInt32  me2_high_det_zmv_cddpnt_half:1;
        RBus_UInt32  me2_high_det_bv_en:1;
        RBus_UInt32  me2_high_det_bv_th:3;
        RBus_UInt32  me2_high_det_bv_limit:4;
        RBus_UInt32  me2_high_det_bv_replace_type:1;
        RBus_UInt32  me2_high_det_bv_replace_mv:4;
        RBus_UInt32  me2_high_det_bld_type:2;
        RBus_UInt32  res1:5;
    };
}kme_me2_calc1_kme_me2_top0_high_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_vst_targetx:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_me2_vst_targety:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_me2_vst_penalty:8;
        RBus_UInt32  reg_me2_vst_mvdiff:3;
        RBus_UInt32  res3:4;
        RBus_UInt32  reg_me2_vst_enable:1;
    };
}kme_me2_calc1_kme_me2_calc1_vst_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_vst_apply_boundary_offset:8;
        RBus_UInt32  reg_me2_vst_apply_maxvalue:8;
        RBus_UInt32  reg_me2_vst_apply_coreapl:8;
        RBus_UInt32  reg_me2_vst_apply_maxmindiff:8;
    };
}kme_me2_calc1_kme_me2_calc1_vst_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_vst_gaincurve_slope1:8;
        RBus_UInt32  reg_me2_vst_gaincurve_slope2:8;
        RBus_UInt32  reg_me2_vst_apply_boundary_xsta:8;
        RBus_UInt32  reg_me2_vst_apply_boundary_xend:8;
    };
}kme_me2_calc1_kme_me2_calc1_vst_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_vst_acdcpk_sad_shiftbit:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_me2_vst_acdcpk_mvd_shiftbit:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_me2_vst_acdcpk_spatial_mvd_shiftbit:2;
        RBus_UInt32  res3:6;
        RBus_UInt32  reg_me2_vst_apply_apl2maxmindiff_ratio:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  reg_me2_vst_apply_apl2maxvalue_ratio:6;
        RBus_UInt32  res5:2;
    };
}kme_me2_calc1_kme_me2_calc1_vst_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_satd_dcn_bldapl_x1:8;
        RBus_UInt32  reg_me2_satd_dcn_bldapl_x2:8;
        RBus_UInt32  reg_me2_satd_dcn_bldapl_x3:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_me2_satd_dc_bld_mode_sel:1;
        RBus_UInt32  reg_me2_satd_dc_bld_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_me2_dctype_sel:1;
    };
}kme_me2_calc1_satd0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_satd_dcn_bldapl_y1:4;
        RBus_UInt32  reg_me2_satd_dcn_bldapl_y2:4;
        RBus_UInt32  reg_me2_satd_dcn_bldapl_y3:4;
        RBus_UInt32  reg_me2_satd_dcn_bldapl_slope1:4;
        RBus_UInt32  reg_me2_satd_dcn_bldapl_slope2:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_me2_satd_coef_4x4:6;
        RBus_UInt32  res2:2;
    };
}kme_me2_calc1_satd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_satd_dcn_blddtl_x1:8;
        RBus_UInt32  reg_me2_satd_dcn_blddtl_x2:8;
        RBus_UInt32  reg_me2_satd_dcn_blddtl_x3:8;
        RBus_UInt32  reg_me2_satd_dcn_blddtl_mode:3;
        RBus_UInt32  res1:5;
    };
}kme_me2_calc1_satd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_satd_dcn_blddtl_y1:4;
        RBus_UInt32  reg_me2_satd_dcn_blddtl_y2:4;
        RBus_UInt32  reg_me2_satd_dcn_blddtl_y3:4;
        RBus_UInt32  reg_me2_satd_dcn_blddtl_slope1:4;
        RBus_UInt32  reg_me2_satd_dcn_blddtl_slope2:4;
        RBus_UInt32  res1:12;
    };
}kme_me2_calc1_satd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  reg_me2_bvlogoprotecten:1;
    };
}kme_me2_calc1_satd4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_edge_eng_adpthr_modesel:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_me2_edge_hv_ratio:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_me2_edge_eng_ratio:4;
        RBus_UInt32  res3:4;
        RBus_UInt32  reg_me2_edge_eng_aplratio:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  reg_me2_edge_eng_thr:8;
    };
}kme_me2_calc1_edge_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_edgefrompfv_modifypos:9;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_me2_edgefromppfv_modifypos:9;
        RBus_UInt32  reg_me2_edge_type_debug_en:1;
        RBus_UInt32  reg_me2_edge_type_debug_sel:2;
        RBus_UInt32  reg_me2_edgeretimer_yrange:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  reg_me2_edgepostproc_enable:1;
        RBus_UInt32  reg_me2_edgefrompfv_enable:1;
        RBus_UInt32  reg_me2_edgefromppfv_enable:1;
    };
}kme_me2_calc1_edge_retimer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_me1_pfv_sad_th:8;
        RBus_UInt32  reg_me2_me12_pfv_diff_th:12;
        RBus_UInt32  res1:12;
    };
}kme_me2_calc1_kme_me2_me12_compare_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_me2_me1_ppfv_sad_th:8;
        RBus_UInt32  reg_me2_me12_ppfv_diff_th:12;
        RBus_UInt32  res1:12;
    };
}kme_me2_calc1_kme_me2_me12_compare2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rgn0_cnt_fast_mvx:14;
        RBus_UInt32  regr_me2_rgn0_cnt_fast_mvy:14;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc1_kme_me2_calc1_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rgn1_cnt_fast_mvx:14;
        RBus_UInt32  regr_me2_rgn1_cnt_fast_mvy:14;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc1_kme_me2_calc1_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rgn2_cnt_fast_mvx:14;
        RBus_UInt32  regr_me2_rgn2_cnt_fast_mvy:14;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc1_kme_me2_calc1_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rgn3_cnt_fast_mvx:14;
        RBus_UInt32  regr_me2_rgn3_cnt_fast_mvy:14;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc1_kme_me2_calc1_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rgn4_cnt_fast_mvx:14;
        RBus_UInt32  regr_me2_rgn4_cnt_fast_mvy:14;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc1_kme_me2_calc1_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rgn5_cnt_fast_mvx:14;
        RBus_UInt32  regr_me2_rgn5_cnt_fast_mvy:14;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc1_kme_me2_calc1_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rgn6_cnt_fast_mvx:14;
        RBus_UInt32  regr_me2_rgn6_cnt_fast_mvy:14;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc1_kme_me2_calc1_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rgn7_cnt_fast_mvx:14;
        RBus_UInt32  regr_me2_rgn7_cnt_fast_mvy:14;
        RBus_UInt32  res1:4;
    };
}kme_me2_calc1_kme_me2_calc1_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_gmv_cnt:8;
        RBus_UInt32  res1:24;
    };
}kme_me2_calc1_kme_me2_calc1_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rmv_cnt0:8;
        RBus_UInt32  regr_me2_rmv_cnt1:8;
        RBus_UInt32  regr_me2_rmv_cnt2:8;
        RBus_UInt32  regr_me2_rmv_cnt3:8;
    };
}kme_me2_calc1_kme_me2_calc1_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rmv_cnt4:8;
        RBus_UInt32  regr_me2_rmv_cnt5:8;
        RBus_UInt32  regr_me2_rmv_cnt6:8;
        RBus_UInt32  regr_me2_rmv_cnt7:8;
    };
}kme_me2_calc1_kme_me2_calc1_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rmv_cnt8:8;
        RBus_UInt32  regr_me2_rmv_cnt9:8;
        RBus_UInt32  regr_me2_rmv_cnt10:8;
        RBus_UInt32  regr_me2_rmv_cnt11:8;
    };
}kme_me2_calc1_kme_me2_calc1_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rmv_cnt12:8;
        RBus_UInt32  regr_me2_rmv_cnt13:8;
        RBus_UInt32  regr_me2_rmv_cnt14:8;
        RBus_UInt32  regr_me2_rmv_cnt15:8;
    };
}kme_me2_calc1_kme_me2_calc1_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rmv_cnt16:8;
        RBus_UInt32  regr_me2_rmv_cnt17:8;
        RBus_UInt32  regr_me2_rmv_cnt18:8;
        RBus_UInt32  regr_me2_rmv_cnt19:8;
    };
}kme_me2_calc1_kme_me2_calc1_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rmv_cnt20:8;
        RBus_UInt32  regr_me2_rmv_cnt21:8;
        RBus_UInt32  regr_me2_rmv_cnt22:8;
        RBus_UInt32  regr_me2_rmv_cnt23:8;
    };
}kme_me2_calc1_kme_me2_calc1_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rmv_cnt24:8;
        RBus_UInt32  regr_me2_rmv_cnt25:8;
        RBus_UInt32  regr_me2_rmv_cnt26:8;
        RBus_UInt32  regr_me2_rmv_cnt27:8;
    };
}kme_me2_calc1_kme_me2_calc1_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me2_rmv_cnt28:8;
        RBus_UInt32  regr_me2_rmv_cnt29:8;
        RBus_UInt32  regr_me2_rmv_cnt30:8;
        RBus_UInt32  regr_me2_rmv_cnt31:8;
    };
}kme_me2_calc1_kme_me2_calc1_fc_RBUS;




#endif 


#endif 
