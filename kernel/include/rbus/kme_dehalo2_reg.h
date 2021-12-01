/**
* @file Merlin5_MEMC_KME_DEHALO2
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_DEHALO2_REG_H_
#define _RBUS_KME_DEHALO2_REG_H_

#include "rbus_types.h"



//  KME_DEHALO2 Register Address
#define  KME_DEHALO2_KME_DEHALO2_08                                             0x1809CE08
#define  KME_DEHALO2_KME_DEHALO2_08_reg_addr                                     "0xB809CE08"
#define  KME_DEHALO2_KME_DEHALO2_08_reg                                          0xB809CE08
#define  KME_DEHALO2_KME_DEHALO2_08_inst_addr                                    "0x0000"
#define  set_KME_DEHALO2_KME_DEHALO2_08_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_08_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_08_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_08_reg))
#define  KME_DEHALO2_KME_DEHALO2_08_mv_t_th_rg2_shift                            (10)
#define  KME_DEHALO2_KME_DEHALO2_08_sad_d_th_rg2_shift                           (0)
#define  KME_DEHALO2_KME_DEHALO2_08_mv_t_th_rg2_mask                             (0x0003FC00)
#define  KME_DEHALO2_KME_DEHALO2_08_sad_d_th_rg2_mask                            (0x000003FF)
#define  KME_DEHALO2_KME_DEHALO2_08_mv_t_th_rg2(data)                            (0x0003FC00&((data)<<10))
#define  KME_DEHALO2_KME_DEHALO2_08_sad_d_th_rg2(data)                           (0x000003FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_08_get_mv_t_th_rg2(data)                        ((0x0003FC00&(data))>>10)
#define  KME_DEHALO2_KME_DEHALO2_08_get_sad_d_th_rg2(data)                       (0x000003FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_10                                             0x1809CE10
#define  KME_DEHALO2_KME_DEHALO2_10_reg_addr                                     "0xB809CE10"
#define  KME_DEHALO2_KME_DEHALO2_10_reg                                          0xB809CE10
#define  KME_DEHALO2_KME_DEHALO2_10_inst_addr                                    "0x0001"
#define  set_KME_DEHALO2_KME_DEHALO2_10_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_10_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_10_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_10_reg))
#define  KME_DEHALO2_KME_DEHALO2_10_sad_t_th_rg2_shift                           (8)
#define  KME_DEHALO2_KME_DEHALO2_10_tmv_num_rg2_shift                            (0)
#define  KME_DEHALO2_KME_DEHALO2_10_sad_t_th_rg2_mask                            (0x0003FF00)
#define  KME_DEHALO2_KME_DEHALO2_10_tmv_num_rg2_mask                             (0x000000FF)
#define  KME_DEHALO2_KME_DEHALO2_10_sad_t_th_rg2(data)                           (0x0003FF00&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO2_10_tmv_num_rg2(data)                            (0x000000FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_10_get_sad_t_th_rg2(data)                       ((0x0003FF00&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO2_10_get_tmv_num_rg2(data)                        (0x000000FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_14                                             0x1809CE14
#define  KME_DEHALO2_KME_DEHALO2_14_reg_addr                                     "0xB809CE14"
#define  KME_DEHALO2_KME_DEHALO2_14_reg                                          0xB809CE14
#define  KME_DEHALO2_KME_DEHALO2_14_inst_addr                                    "0x0002"
#define  set_KME_DEHALO2_KME_DEHALO2_14_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_14_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_14_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_14_reg))
#define  KME_DEHALO2_KME_DEHALO2_14_tmv_bypass_rg4_shift                         (28)
#define  KME_DEHALO2_KME_DEHALO2_14_smv_bypass_rg4_shift                         (25)
#define  KME_DEHALO2_KME_DEHALO2_14_mvd_bypass_rg4_shift                         (22)
#define  KME_DEHALO2_KME_DEHALO2_14_ver_bypass_rg4_shift                         (19)
#define  KME_DEHALO2_KME_DEHALO2_14_hor_bypass_rg4_shift                         (16)
#define  KME_DEHALO2_KME_DEHALO2_14_tmv_bypass_rg3_shift                         (12)
#define  KME_DEHALO2_KME_DEHALO2_14_smv_bypass_rg3_shift                         (9)
#define  KME_DEHALO2_KME_DEHALO2_14_mvd_bypass_rg3_shift                         (6)
#define  KME_DEHALO2_KME_DEHALO2_14_ver_bypass_rg3_shift                         (3)
#define  KME_DEHALO2_KME_DEHALO2_14_hor_bypass_rg3_shift                         (0)
#define  KME_DEHALO2_KME_DEHALO2_14_tmv_bypass_rg4_mask                          (0x10000000)
#define  KME_DEHALO2_KME_DEHALO2_14_smv_bypass_rg4_mask                          (0x0E000000)
#define  KME_DEHALO2_KME_DEHALO2_14_mvd_bypass_rg4_mask                          (0x01C00000)
#define  KME_DEHALO2_KME_DEHALO2_14_ver_bypass_rg4_mask                          (0x00380000)
#define  KME_DEHALO2_KME_DEHALO2_14_hor_bypass_rg4_mask                          (0x00070000)
#define  KME_DEHALO2_KME_DEHALO2_14_tmv_bypass_rg3_mask                          (0x00001000)
#define  KME_DEHALO2_KME_DEHALO2_14_smv_bypass_rg3_mask                          (0x00000E00)
#define  KME_DEHALO2_KME_DEHALO2_14_mvd_bypass_rg3_mask                          (0x000001C0)
#define  KME_DEHALO2_KME_DEHALO2_14_ver_bypass_rg3_mask                          (0x00000038)
#define  KME_DEHALO2_KME_DEHALO2_14_hor_bypass_rg3_mask                          (0x00000007)
#define  KME_DEHALO2_KME_DEHALO2_14_tmv_bypass_rg4(data)                         (0x10000000&((data)<<28))
#define  KME_DEHALO2_KME_DEHALO2_14_smv_bypass_rg4(data)                         (0x0E000000&((data)<<25))
#define  KME_DEHALO2_KME_DEHALO2_14_mvd_bypass_rg4(data)                         (0x01C00000&((data)<<22))
#define  KME_DEHALO2_KME_DEHALO2_14_ver_bypass_rg4(data)                         (0x00380000&((data)<<19))
#define  KME_DEHALO2_KME_DEHALO2_14_hor_bypass_rg4(data)                         (0x00070000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_14_tmv_bypass_rg3(data)                         (0x00001000&((data)<<12))
#define  KME_DEHALO2_KME_DEHALO2_14_smv_bypass_rg3(data)                         (0x00000E00&((data)<<9))
#define  KME_DEHALO2_KME_DEHALO2_14_mvd_bypass_rg3(data)                         (0x000001C0&((data)<<6))
#define  KME_DEHALO2_KME_DEHALO2_14_ver_bypass_rg3(data)                         (0x00000038&((data)<<3))
#define  KME_DEHALO2_KME_DEHALO2_14_hor_bypass_rg3(data)                         (0x00000007&(data))
#define  KME_DEHALO2_KME_DEHALO2_14_get_tmv_bypass_rg4(data)                     ((0x10000000&(data))>>28)
#define  KME_DEHALO2_KME_DEHALO2_14_get_smv_bypass_rg4(data)                     ((0x0E000000&(data))>>25)
#define  KME_DEHALO2_KME_DEHALO2_14_get_mvd_bypass_rg4(data)                     ((0x01C00000&(data))>>22)
#define  KME_DEHALO2_KME_DEHALO2_14_get_ver_bypass_rg4(data)                     ((0x00380000&(data))>>19)
#define  KME_DEHALO2_KME_DEHALO2_14_get_hor_bypass_rg4(data)                     ((0x00070000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_14_get_tmv_bypass_rg3(data)                     ((0x00001000&(data))>>12)
#define  KME_DEHALO2_KME_DEHALO2_14_get_smv_bypass_rg3(data)                     ((0x00000E00&(data))>>9)
#define  KME_DEHALO2_KME_DEHALO2_14_get_mvd_bypass_rg3(data)                     ((0x000001C0&(data))>>6)
#define  KME_DEHALO2_KME_DEHALO2_14_get_ver_bypass_rg3(data)                     ((0x00000038&(data))>>3)
#define  KME_DEHALO2_KME_DEHALO2_14_get_hor_bypass_rg3(data)                     (0x00000007&(data))

#define  KME_DEHALO2_KME_DEHALO2_18                                             0x1809CE18
#define  KME_DEHALO2_KME_DEHALO2_18_reg_addr                                     "0xB809CE18"
#define  KME_DEHALO2_KME_DEHALO2_18_reg                                          0xB809CE18
#define  KME_DEHALO2_KME_DEHALO2_18_inst_addr                                    "0x0003"
#define  set_KME_DEHALO2_KME_DEHALO2_18_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_18_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_18_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_18_reg))
#define  KME_DEHALO2_KME_DEHALO2_18_tmv_bypass_rg6_shift                         (28)
#define  KME_DEHALO2_KME_DEHALO2_18_smv_bypass_rg6_shift                         (25)
#define  KME_DEHALO2_KME_DEHALO2_18_mvd_bypass_rg6_shift                         (22)
#define  KME_DEHALO2_KME_DEHALO2_18_ver_bypass_rg6_shift                         (19)
#define  KME_DEHALO2_KME_DEHALO2_18_hor_bypass_rg6_shift                         (16)
#define  KME_DEHALO2_KME_DEHALO2_18_tmv_bypass_rg5_shift                         (12)
#define  KME_DEHALO2_KME_DEHALO2_18_smv_bypass_rg5_shift                         (9)
#define  KME_DEHALO2_KME_DEHALO2_18_mvd_bypass_rg5_shift                         (6)
#define  KME_DEHALO2_KME_DEHALO2_18_ver_bypass_rg5_shift                         (3)
#define  KME_DEHALO2_KME_DEHALO2_18_hor_bypass_rg5_shift                         (0)
#define  KME_DEHALO2_KME_DEHALO2_18_tmv_bypass_rg6_mask                          (0x10000000)
#define  KME_DEHALO2_KME_DEHALO2_18_smv_bypass_rg6_mask                          (0x0E000000)
#define  KME_DEHALO2_KME_DEHALO2_18_mvd_bypass_rg6_mask                          (0x01C00000)
#define  KME_DEHALO2_KME_DEHALO2_18_ver_bypass_rg6_mask                          (0x00380000)
#define  KME_DEHALO2_KME_DEHALO2_18_hor_bypass_rg6_mask                          (0x00070000)
#define  KME_DEHALO2_KME_DEHALO2_18_tmv_bypass_rg5_mask                          (0x00001000)
#define  KME_DEHALO2_KME_DEHALO2_18_smv_bypass_rg5_mask                          (0x00000E00)
#define  KME_DEHALO2_KME_DEHALO2_18_mvd_bypass_rg5_mask                          (0x000001C0)
#define  KME_DEHALO2_KME_DEHALO2_18_ver_bypass_rg5_mask                          (0x00000038)
#define  KME_DEHALO2_KME_DEHALO2_18_hor_bypass_rg5_mask                          (0x00000007)
#define  KME_DEHALO2_KME_DEHALO2_18_tmv_bypass_rg6(data)                         (0x10000000&((data)<<28))
#define  KME_DEHALO2_KME_DEHALO2_18_smv_bypass_rg6(data)                         (0x0E000000&((data)<<25))
#define  KME_DEHALO2_KME_DEHALO2_18_mvd_bypass_rg6(data)                         (0x01C00000&((data)<<22))
#define  KME_DEHALO2_KME_DEHALO2_18_ver_bypass_rg6(data)                         (0x00380000&((data)<<19))
#define  KME_DEHALO2_KME_DEHALO2_18_hor_bypass_rg6(data)                         (0x00070000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_18_tmv_bypass_rg5(data)                         (0x00001000&((data)<<12))
#define  KME_DEHALO2_KME_DEHALO2_18_smv_bypass_rg5(data)                         (0x00000E00&((data)<<9))
#define  KME_DEHALO2_KME_DEHALO2_18_mvd_bypass_rg5(data)                         (0x000001C0&((data)<<6))
#define  KME_DEHALO2_KME_DEHALO2_18_ver_bypass_rg5(data)                         (0x00000038&((data)<<3))
#define  KME_DEHALO2_KME_DEHALO2_18_hor_bypass_rg5(data)                         (0x00000007&(data))
#define  KME_DEHALO2_KME_DEHALO2_18_get_tmv_bypass_rg6(data)                     ((0x10000000&(data))>>28)
#define  KME_DEHALO2_KME_DEHALO2_18_get_smv_bypass_rg6(data)                     ((0x0E000000&(data))>>25)
#define  KME_DEHALO2_KME_DEHALO2_18_get_mvd_bypass_rg6(data)                     ((0x01C00000&(data))>>22)
#define  KME_DEHALO2_KME_DEHALO2_18_get_ver_bypass_rg6(data)                     ((0x00380000&(data))>>19)
#define  KME_DEHALO2_KME_DEHALO2_18_get_hor_bypass_rg6(data)                     ((0x00070000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_18_get_tmv_bypass_rg5(data)                     ((0x00001000&(data))>>12)
#define  KME_DEHALO2_KME_DEHALO2_18_get_smv_bypass_rg5(data)                     ((0x00000E00&(data))>>9)
#define  KME_DEHALO2_KME_DEHALO2_18_get_mvd_bypass_rg5(data)                     ((0x000001C0&(data))>>6)
#define  KME_DEHALO2_KME_DEHALO2_18_get_ver_bypass_rg5(data)                     ((0x00000038&(data))>>3)
#define  KME_DEHALO2_KME_DEHALO2_18_get_hor_bypass_rg5(data)                     (0x00000007&(data))

#define  KME_DEHALO2_KME_DEHALO2_1C                                             0x1809CE1C
#define  KME_DEHALO2_KME_DEHALO2_1C_reg_addr                                     "0xB809CE1C"
#define  KME_DEHALO2_KME_DEHALO2_1C_reg                                          0xB809CE1C
#define  KME_DEHALO2_KME_DEHALO2_1C_inst_addr                                    "0x0004"
#define  set_KME_DEHALO2_KME_DEHALO2_1C_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_1C_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_1C_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_1C_reg))
#define  KME_DEHALO2_KME_DEHALO2_1C_tmv_bypass_rg8_shift                         (28)
#define  KME_DEHALO2_KME_DEHALO2_1C_smv_bypass_rg8_shift                         (25)
#define  KME_DEHALO2_KME_DEHALO2_1C_mvd_bypass_rg8_shift                         (22)
#define  KME_DEHALO2_KME_DEHALO2_1C_ver_bypass_rg8_shift                         (19)
#define  KME_DEHALO2_KME_DEHALO2_1C_hor_bypass_rg8_shift                         (16)
#define  KME_DEHALO2_KME_DEHALO2_1C_tmv_bypass_rg7_shift                         (12)
#define  KME_DEHALO2_KME_DEHALO2_1C_smv_bypass_rg7_shift                         (9)
#define  KME_DEHALO2_KME_DEHALO2_1C_mvd_bypass_rg7_shift                         (6)
#define  KME_DEHALO2_KME_DEHALO2_1C_ver_bypass_rg7_shift                         (3)
#define  KME_DEHALO2_KME_DEHALO2_1C_hor_bypass_rg7_shift                         (0)
#define  KME_DEHALO2_KME_DEHALO2_1C_tmv_bypass_rg8_mask                          (0x10000000)
#define  KME_DEHALO2_KME_DEHALO2_1C_smv_bypass_rg8_mask                          (0x0E000000)
#define  KME_DEHALO2_KME_DEHALO2_1C_mvd_bypass_rg8_mask                          (0x01C00000)
#define  KME_DEHALO2_KME_DEHALO2_1C_ver_bypass_rg8_mask                          (0x00380000)
#define  KME_DEHALO2_KME_DEHALO2_1C_hor_bypass_rg8_mask                          (0x00070000)
#define  KME_DEHALO2_KME_DEHALO2_1C_tmv_bypass_rg7_mask                          (0x00001000)
#define  KME_DEHALO2_KME_DEHALO2_1C_smv_bypass_rg7_mask                          (0x00000E00)
#define  KME_DEHALO2_KME_DEHALO2_1C_mvd_bypass_rg7_mask                          (0x000001C0)
#define  KME_DEHALO2_KME_DEHALO2_1C_ver_bypass_rg7_mask                          (0x00000038)
#define  KME_DEHALO2_KME_DEHALO2_1C_hor_bypass_rg7_mask                          (0x00000007)
#define  KME_DEHALO2_KME_DEHALO2_1C_tmv_bypass_rg8(data)                         (0x10000000&((data)<<28))
#define  KME_DEHALO2_KME_DEHALO2_1C_smv_bypass_rg8(data)                         (0x0E000000&((data)<<25))
#define  KME_DEHALO2_KME_DEHALO2_1C_mvd_bypass_rg8(data)                         (0x01C00000&((data)<<22))
#define  KME_DEHALO2_KME_DEHALO2_1C_ver_bypass_rg8(data)                         (0x00380000&((data)<<19))
#define  KME_DEHALO2_KME_DEHALO2_1C_hor_bypass_rg8(data)                         (0x00070000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_1C_tmv_bypass_rg7(data)                         (0x00001000&((data)<<12))
#define  KME_DEHALO2_KME_DEHALO2_1C_smv_bypass_rg7(data)                         (0x00000E00&((data)<<9))
#define  KME_DEHALO2_KME_DEHALO2_1C_mvd_bypass_rg7(data)                         (0x000001C0&((data)<<6))
#define  KME_DEHALO2_KME_DEHALO2_1C_ver_bypass_rg7(data)                         (0x00000038&((data)<<3))
#define  KME_DEHALO2_KME_DEHALO2_1C_hor_bypass_rg7(data)                         (0x00000007&(data))
#define  KME_DEHALO2_KME_DEHALO2_1C_get_tmv_bypass_rg8(data)                     ((0x10000000&(data))>>28)
#define  KME_DEHALO2_KME_DEHALO2_1C_get_smv_bypass_rg8(data)                     ((0x0E000000&(data))>>25)
#define  KME_DEHALO2_KME_DEHALO2_1C_get_mvd_bypass_rg8(data)                     ((0x01C00000&(data))>>22)
#define  KME_DEHALO2_KME_DEHALO2_1C_get_ver_bypass_rg8(data)                     ((0x00380000&(data))>>19)
#define  KME_DEHALO2_KME_DEHALO2_1C_get_hor_bypass_rg8(data)                     ((0x00070000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_1C_get_tmv_bypass_rg7(data)                     ((0x00001000&(data))>>12)
#define  KME_DEHALO2_KME_DEHALO2_1C_get_smv_bypass_rg7(data)                     ((0x00000E00&(data))>>9)
#define  KME_DEHALO2_KME_DEHALO2_1C_get_mvd_bypass_rg7(data)                     ((0x000001C0&(data))>>6)
#define  KME_DEHALO2_KME_DEHALO2_1C_get_ver_bypass_rg7(data)                     ((0x00000038&(data))>>3)
#define  KME_DEHALO2_KME_DEHALO2_1C_get_hor_bypass_rg7(data)                     (0x00000007&(data))

#define  KME_DEHALO2_KME_DEHALO2_20                                             0x1809CE20
#define  KME_DEHALO2_KME_DEHALO2_20_reg_addr                                     "0xB809CE20"
#define  KME_DEHALO2_KME_DEHALO2_20_reg                                          0xB809CE20
#define  KME_DEHALO2_KME_DEHALO2_20_inst_addr                                    "0x0005"
#define  set_KME_DEHALO2_KME_DEHALO2_20_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_20_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_20_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_20_reg))
#define  KME_DEHALO2_KME_DEHALO2_20_tmv_bypass_rga_shift                         (28)
#define  KME_DEHALO2_KME_DEHALO2_20_smv_bypass_rga_shift                         (25)
#define  KME_DEHALO2_KME_DEHALO2_20_mvd_bypass_rga_shift                         (22)
#define  KME_DEHALO2_KME_DEHALO2_20_ver_bypass_rga_shift                         (19)
#define  KME_DEHALO2_KME_DEHALO2_20_hor_bypass_rga_shift                         (16)
#define  KME_DEHALO2_KME_DEHALO2_20_tmv_bypass_rg9_shift                         (12)
#define  KME_DEHALO2_KME_DEHALO2_20_smv_bypass_rg9_shift                         (9)
#define  KME_DEHALO2_KME_DEHALO2_20_mvd_bypass_rg9_shift                         (6)
#define  KME_DEHALO2_KME_DEHALO2_20_ver_bypass_rg9_shift                         (3)
#define  KME_DEHALO2_KME_DEHALO2_20_hor_bypass_rg9_shift                         (0)
#define  KME_DEHALO2_KME_DEHALO2_20_tmv_bypass_rga_mask                          (0x10000000)
#define  KME_DEHALO2_KME_DEHALO2_20_smv_bypass_rga_mask                          (0x0E000000)
#define  KME_DEHALO2_KME_DEHALO2_20_mvd_bypass_rga_mask                          (0x01C00000)
#define  KME_DEHALO2_KME_DEHALO2_20_ver_bypass_rga_mask                          (0x00380000)
#define  KME_DEHALO2_KME_DEHALO2_20_hor_bypass_rga_mask                          (0x00070000)
#define  KME_DEHALO2_KME_DEHALO2_20_tmv_bypass_rg9_mask                          (0x00001000)
#define  KME_DEHALO2_KME_DEHALO2_20_smv_bypass_rg9_mask                          (0x00000E00)
#define  KME_DEHALO2_KME_DEHALO2_20_mvd_bypass_rg9_mask                          (0x000001C0)
#define  KME_DEHALO2_KME_DEHALO2_20_ver_bypass_rg9_mask                          (0x00000038)
#define  KME_DEHALO2_KME_DEHALO2_20_hor_bypass_rg9_mask                          (0x00000007)
#define  KME_DEHALO2_KME_DEHALO2_20_tmv_bypass_rga(data)                         (0x10000000&((data)<<28))
#define  KME_DEHALO2_KME_DEHALO2_20_smv_bypass_rga(data)                         (0x0E000000&((data)<<25))
#define  KME_DEHALO2_KME_DEHALO2_20_mvd_bypass_rga(data)                         (0x01C00000&((data)<<22))
#define  KME_DEHALO2_KME_DEHALO2_20_ver_bypass_rga(data)                         (0x00380000&((data)<<19))
#define  KME_DEHALO2_KME_DEHALO2_20_hor_bypass_rga(data)                         (0x00070000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_20_tmv_bypass_rg9(data)                         (0x00001000&((data)<<12))
#define  KME_DEHALO2_KME_DEHALO2_20_smv_bypass_rg9(data)                         (0x00000E00&((data)<<9))
#define  KME_DEHALO2_KME_DEHALO2_20_mvd_bypass_rg9(data)                         (0x000001C0&((data)<<6))
#define  KME_DEHALO2_KME_DEHALO2_20_ver_bypass_rg9(data)                         (0x00000038&((data)<<3))
#define  KME_DEHALO2_KME_DEHALO2_20_hor_bypass_rg9(data)                         (0x00000007&(data))
#define  KME_DEHALO2_KME_DEHALO2_20_get_tmv_bypass_rga(data)                     ((0x10000000&(data))>>28)
#define  KME_DEHALO2_KME_DEHALO2_20_get_smv_bypass_rga(data)                     ((0x0E000000&(data))>>25)
#define  KME_DEHALO2_KME_DEHALO2_20_get_mvd_bypass_rga(data)                     ((0x01C00000&(data))>>22)
#define  KME_DEHALO2_KME_DEHALO2_20_get_ver_bypass_rga(data)                     ((0x00380000&(data))>>19)
#define  KME_DEHALO2_KME_DEHALO2_20_get_hor_bypass_rga(data)                     ((0x00070000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_20_get_tmv_bypass_rg9(data)                     ((0x00001000&(data))>>12)
#define  KME_DEHALO2_KME_DEHALO2_20_get_smv_bypass_rg9(data)                     ((0x00000E00&(data))>>9)
#define  KME_DEHALO2_KME_DEHALO2_20_get_mvd_bypass_rg9(data)                     ((0x000001C0&(data))>>6)
#define  KME_DEHALO2_KME_DEHALO2_20_get_ver_bypass_rg9(data)                     ((0x00000038&(data))>>3)
#define  KME_DEHALO2_KME_DEHALO2_20_get_hor_bypass_rg9(data)                     (0x00000007&(data))

#define  KME_DEHALO2_KME_DEHALO2_24                                             0x1809CE24
#define  KME_DEHALO2_KME_DEHALO2_24_reg_addr                                     "0xB809CE24"
#define  KME_DEHALO2_KME_DEHALO2_24_reg                                          0xB809CE24
#define  KME_DEHALO2_KME_DEHALO2_24_inst_addr                                    "0x0006"
#define  set_KME_DEHALO2_KME_DEHALO2_24_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_24_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_24_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_24_reg))
#define  KME_DEHALO2_KME_DEHALO2_24_tmv_bypass_rgc_shift                         (28)
#define  KME_DEHALO2_KME_DEHALO2_24_smv_bypass_rgc_shift                         (25)
#define  KME_DEHALO2_KME_DEHALO2_24_mvd_bypass_rgc_shift                         (22)
#define  KME_DEHALO2_KME_DEHALO2_24_ver_bypass_rgc_shift                         (19)
#define  KME_DEHALO2_KME_DEHALO2_24_hor_bypass_rgc_shift                         (16)
#define  KME_DEHALO2_KME_DEHALO2_24_tmv_bypass_rgb_shift                         (12)
#define  KME_DEHALO2_KME_DEHALO2_24_smv_bypass_rgb_shift                         (9)
#define  KME_DEHALO2_KME_DEHALO2_24_mvd_bypass_rgb_shift                         (6)
#define  KME_DEHALO2_KME_DEHALO2_24_ver_bypass_rgb_shift                         (3)
#define  KME_DEHALO2_KME_DEHALO2_24_hor_bypass_rgb_shift                         (0)
#define  KME_DEHALO2_KME_DEHALO2_24_tmv_bypass_rgc_mask                          (0x10000000)
#define  KME_DEHALO2_KME_DEHALO2_24_smv_bypass_rgc_mask                          (0x0E000000)
#define  KME_DEHALO2_KME_DEHALO2_24_mvd_bypass_rgc_mask                          (0x01C00000)
#define  KME_DEHALO2_KME_DEHALO2_24_ver_bypass_rgc_mask                          (0x00380000)
#define  KME_DEHALO2_KME_DEHALO2_24_hor_bypass_rgc_mask                          (0x00070000)
#define  KME_DEHALO2_KME_DEHALO2_24_tmv_bypass_rgb_mask                          (0x00001000)
#define  KME_DEHALO2_KME_DEHALO2_24_smv_bypass_rgb_mask                          (0x00000E00)
#define  KME_DEHALO2_KME_DEHALO2_24_mvd_bypass_rgb_mask                          (0x000001C0)
#define  KME_DEHALO2_KME_DEHALO2_24_ver_bypass_rgb_mask                          (0x00000038)
#define  KME_DEHALO2_KME_DEHALO2_24_hor_bypass_rgb_mask                          (0x00000007)
#define  KME_DEHALO2_KME_DEHALO2_24_tmv_bypass_rgc(data)                         (0x10000000&((data)<<28))
#define  KME_DEHALO2_KME_DEHALO2_24_smv_bypass_rgc(data)                         (0x0E000000&((data)<<25))
#define  KME_DEHALO2_KME_DEHALO2_24_mvd_bypass_rgc(data)                         (0x01C00000&((data)<<22))
#define  KME_DEHALO2_KME_DEHALO2_24_ver_bypass_rgc(data)                         (0x00380000&((data)<<19))
#define  KME_DEHALO2_KME_DEHALO2_24_hor_bypass_rgc(data)                         (0x00070000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_24_tmv_bypass_rgb(data)                         (0x00001000&((data)<<12))
#define  KME_DEHALO2_KME_DEHALO2_24_smv_bypass_rgb(data)                         (0x00000E00&((data)<<9))
#define  KME_DEHALO2_KME_DEHALO2_24_mvd_bypass_rgb(data)                         (0x000001C0&((data)<<6))
#define  KME_DEHALO2_KME_DEHALO2_24_ver_bypass_rgb(data)                         (0x00000038&((data)<<3))
#define  KME_DEHALO2_KME_DEHALO2_24_hor_bypass_rgb(data)                         (0x00000007&(data))
#define  KME_DEHALO2_KME_DEHALO2_24_get_tmv_bypass_rgc(data)                     ((0x10000000&(data))>>28)
#define  KME_DEHALO2_KME_DEHALO2_24_get_smv_bypass_rgc(data)                     ((0x0E000000&(data))>>25)
#define  KME_DEHALO2_KME_DEHALO2_24_get_mvd_bypass_rgc(data)                     ((0x01C00000&(data))>>22)
#define  KME_DEHALO2_KME_DEHALO2_24_get_ver_bypass_rgc(data)                     ((0x00380000&(data))>>19)
#define  KME_DEHALO2_KME_DEHALO2_24_get_hor_bypass_rgc(data)                     ((0x00070000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_24_get_tmv_bypass_rgb(data)                     ((0x00001000&(data))>>12)
#define  KME_DEHALO2_KME_DEHALO2_24_get_smv_bypass_rgb(data)                     ((0x00000E00&(data))>>9)
#define  KME_DEHALO2_KME_DEHALO2_24_get_mvd_bypass_rgb(data)                     ((0x000001C0&(data))>>6)
#define  KME_DEHALO2_KME_DEHALO2_24_get_ver_bypass_rgb(data)                     ((0x00000038&(data))>>3)
#define  KME_DEHALO2_KME_DEHALO2_24_get_hor_bypass_rgb(data)                     (0x00000007&(data))

#define  KME_DEHALO2_KME_DEHALO2_28                                             0x1809CE28
#define  KME_DEHALO2_KME_DEHALO2_28_reg_addr                                     "0xB809CE28"
#define  KME_DEHALO2_KME_DEHALO2_28_reg                                          0xB809CE28
#define  KME_DEHALO2_KME_DEHALO2_28_inst_addr                                    "0x0007"
#define  set_KME_DEHALO2_KME_DEHALO2_28_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_28_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_28_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_28_reg))
#define  KME_DEHALO2_KME_DEHALO2_28_tmv_bypass_rge_shift                         (28)
#define  KME_DEHALO2_KME_DEHALO2_28_smv_bypass_rge_shift                         (25)
#define  KME_DEHALO2_KME_DEHALO2_28_mvd_bypass_rge_shift                         (22)
#define  KME_DEHALO2_KME_DEHALO2_28_ver_bypass_rge_shift                         (19)
#define  KME_DEHALO2_KME_DEHALO2_28_hor_bypass_rge_shift                         (16)
#define  KME_DEHALO2_KME_DEHALO2_28_tmv_bypass_rgd_shift                         (12)
#define  KME_DEHALO2_KME_DEHALO2_28_smv_bypass_rgd_shift                         (9)
#define  KME_DEHALO2_KME_DEHALO2_28_mvd_bypass_rgd_shift                         (6)
#define  KME_DEHALO2_KME_DEHALO2_28_ver_bypass_rgd_shift                         (3)
#define  KME_DEHALO2_KME_DEHALO2_28_hor_bypass_rgd_shift                         (0)
#define  KME_DEHALO2_KME_DEHALO2_28_tmv_bypass_rge_mask                          (0x10000000)
#define  KME_DEHALO2_KME_DEHALO2_28_smv_bypass_rge_mask                          (0x0E000000)
#define  KME_DEHALO2_KME_DEHALO2_28_mvd_bypass_rge_mask                          (0x01C00000)
#define  KME_DEHALO2_KME_DEHALO2_28_ver_bypass_rge_mask                          (0x00380000)
#define  KME_DEHALO2_KME_DEHALO2_28_hor_bypass_rge_mask                          (0x00070000)
#define  KME_DEHALO2_KME_DEHALO2_28_tmv_bypass_rgd_mask                          (0x00001000)
#define  KME_DEHALO2_KME_DEHALO2_28_smv_bypass_rgd_mask                          (0x00000E00)
#define  KME_DEHALO2_KME_DEHALO2_28_mvd_bypass_rgd_mask                          (0x000001C0)
#define  KME_DEHALO2_KME_DEHALO2_28_ver_bypass_rgd_mask                          (0x00000038)
#define  KME_DEHALO2_KME_DEHALO2_28_hor_bypass_rgd_mask                          (0x00000007)
#define  KME_DEHALO2_KME_DEHALO2_28_tmv_bypass_rge(data)                         (0x10000000&((data)<<28))
#define  KME_DEHALO2_KME_DEHALO2_28_smv_bypass_rge(data)                         (0x0E000000&((data)<<25))
#define  KME_DEHALO2_KME_DEHALO2_28_mvd_bypass_rge(data)                         (0x01C00000&((data)<<22))
#define  KME_DEHALO2_KME_DEHALO2_28_ver_bypass_rge(data)                         (0x00380000&((data)<<19))
#define  KME_DEHALO2_KME_DEHALO2_28_hor_bypass_rge(data)                         (0x00070000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_28_tmv_bypass_rgd(data)                         (0x00001000&((data)<<12))
#define  KME_DEHALO2_KME_DEHALO2_28_smv_bypass_rgd(data)                         (0x00000E00&((data)<<9))
#define  KME_DEHALO2_KME_DEHALO2_28_mvd_bypass_rgd(data)                         (0x000001C0&((data)<<6))
#define  KME_DEHALO2_KME_DEHALO2_28_ver_bypass_rgd(data)                         (0x00000038&((data)<<3))
#define  KME_DEHALO2_KME_DEHALO2_28_hor_bypass_rgd(data)                         (0x00000007&(data))
#define  KME_DEHALO2_KME_DEHALO2_28_get_tmv_bypass_rge(data)                     ((0x10000000&(data))>>28)
#define  KME_DEHALO2_KME_DEHALO2_28_get_smv_bypass_rge(data)                     ((0x0E000000&(data))>>25)
#define  KME_DEHALO2_KME_DEHALO2_28_get_mvd_bypass_rge(data)                     ((0x01C00000&(data))>>22)
#define  KME_DEHALO2_KME_DEHALO2_28_get_ver_bypass_rge(data)                     ((0x00380000&(data))>>19)
#define  KME_DEHALO2_KME_DEHALO2_28_get_hor_bypass_rge(data)                     ((0x00070000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_28_get_tmv_bypass_rgd(data)                     ((0x00001000&(data))>>12)
#define  KME_DEHALO2_KME_DEHALO2_28_get_smv_bypass_rgd(data)                     ((0x00000E00&(data))>>9)
#define  KME_DEHALO2_KME_DEHALO2_28_get_mvd_bypass_rgd(data)                     ((0x000001C0&(data))>>6)
#define  KME_DEHALO2_KME_DEHALO2_28_get_ver_bypass_rgd(data)                     ((0x00000038&(data))>>3)
#define  KME_DEHALO2_KME_DEHALO2_28_get_hor_bypass_rgd(data)                     (0x00000007&(data))

#define  KME_DEHALO2_KME_DEHALO2_2C                                             0x1809CE2C
#define  KME_DEHALO2_KME_DEHALO2_2C_reg_addr                                     "0xB809CE2C"
#define  KME_DEHALO2_KME_DEHALO2_2C_reg                                          0xB809CE2C
#define  KME_DEHALO2_KME_DEHALO2_2C_inst_addr                                    "0x0008"
#define  set_KME_DEHALO2_KME_DEHALO2_2C_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_2C_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_2C_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_2C_reg))
#define  KME_DEHALO2_KME_DEHALO2_2C_dh_show_me2_cal_ph_infk_shift                (4)
#define  KME_DEHALO2_KME_DEHALO2_2C_dh_show_me2_cal_ph_info_shift                (0)
#define  KME_DEHALO2_KME_DEHALO2_2C_dh_show_me2_cal_ph_infk_mask                 (0x000000F0)
#define  KME_DEHALO2_KME_DEHALO2_2C_dh_show_me2_cal_ph_info_mask                 (0x0000000F)
#define  KME_DEHALO2_KME_DEHALO2_2C_dh_show_me2_cal_ph_infk(data)                (0x000000F0&((data)<<4))
#define  KME_DEHALO2_KME_DEHALO2_2C_dh_show_me2_cal_ph_info(data)                (0x0000000F&(data))
#define  KME_DEHALO2_KME_DEHALO2_2C_get_dh_show_me2_cal_ph_infk(data)            ((0x000000F0&(data))>>4)
#define  KME_DEHALO2_KME_DEHALO2_2C_get_dh_show_me2_cal_ph_info(data)            (0x0000000F&(data))

#define  KME_DEHALO2_KME_DEHALO2_30                                             0x1809CE30
#define  KME_DEHALO2_KME_DEHALO2_30_reg_addr                                     "0xB809CE30"
#define  KME_DEHALO2_KME_DEHALO2_30_reg                                          0xB809CE30
#define  KME_DEHALO2_KME_DEHALO2_30_inst_addr                                    "0x0009"
#define  set_KME_DEHALO2_KME_DEHALO2_30_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_30_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_30_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_30_reg))
#define  KME_DEHALO2_KME_DEHALO2_30_dh_glb_gain_blk_x_intv_shift                 (25)
#define  KME_DEHALO2_KME_DEHALO2_30_dh_glb_glb_gain_switch_shift                 (18)
#define  KME_DEHALO2_KME_DEHALO2_30_dh_glb_gain_switch_en_shift                  (17)
#define  KME_DEHALO2_KME_DEHALO2_30_dh_bv0_bv1_blk_y_intv_shift                  (9)
#define  KME_DEHALO2_KME_DEHALO2_30_dh_bv0_bv1_blk_x_intv_shift                  (2)
#define  KME_DEHALO2_KME_DEHALO2_30_dh_glb_bv0_bv1_switch_shift                  (1)
#define  KME_DEHALO2_KME_DEHALO2_30_dh_bv0_bv1_switch_en_shift                   (0)
#define  KME_DEHALO2_KME_DEHALO2_30_dh_glb_gain_blk_x_intv_mask                  (0xFE000000)
#define  KME_DEHALO2_KME_DEHALO2_30_dh_glb_glb_gain_switch_mask                  (0x01FC0000)
#define  KME_DEHALO2_KME_DEHALO2_30_dh_glb_gain_switch_en_mask                   (0x00020000)
#define  KME_DEHALO2_KME_DEHALO2_30_dh_bv0_bv1_blk_y_intv_mask                   (0x0001FE00)
#define  KME_DEHALO2_KME_DEHALO2_30_dh_bv0_bv1_blk_x_intv_mask                   (0x000001FC)
#define  KME_DEHALO2_KME_DEHALO2_30_dh_glb_bv0_bv1_switch_mask                   (0x00000002)
#define  KME_DEHALO2_KME_DEHALO2_30_dh_bv0_bv1_switch_en_mask                    (0x00000001)
#define  KME_DEHALO2_KME_DEHALO2_30_dh_glb_gain_blk_x_intv(data)                 (0xFE000000&((data)<<25))
#define  KME_DEHALO2_KME_DEHALO2_30_dh_glb_glb_gain_switch(data)                 (0x01FC0000&((data)<<18))
#define  KME_DEHALO2_KME_DEHALO2_30_dh_glb_gain_switch_en(data)                  (0x00020000&((data)<<17))
#define  KME_DEHALO2_KME_DEHALO2_30_dh_bv0_bv1_blk_y_intv(data)                  (0x0001FE00&((data)<<9))
#define  KME_DEHALO2_KME_DEHALO2_30_dh_bv0_bv1_blk_x_intv(data)                  (0x000001FC&((data)<<2))
#define  KME_DEHALO2_KME_DEHALO2_30_dh_glb_bv0_bv1_switch(data)                  (0x00000002&((data)<<1))
#define  KME_DEHALO2_KME_DEHALO2_30_dh_bv0_bv1_switch_en(data)                   (0x00000001&(data))
#define  KME_DEHALO2_KME_DEHALO2_30_get_dh_glb_gain_blk_x_intv(data)             ((0xFE000000&(data))>>25)
#define  KME_DEHALO2_KME_DEHALO2_30_get_dh_glb_glb_gain_switch(data)             ((0x01FC0000&(data))>>18)
#define  KME_DEHALO2_KME_DEHALO2_30_get_dh_glb_gain_switch_en(data)              ((0x00020000&(data))>>17)
#define  KME_DEHALO2_KME_DEHALO2_30_get_dh_bv0_bv1_blk_y_intv(data)              ((0x0001FE00&(data))>>9)
#define  KME_DEHALO2_KME_DEHALO2_30_get_dh_bv0_bv1_blk_x_intv(data)              ((0x000001FC&(data))>>2)
#define  KME_DEHALO2_KME_DEHALO2_30_get_dh_glb_bv0_bv1_switch(data)              ((0x00000002&(data))>>1)
#define  KME_DEHALO2_KME_DEHALO2_30_get_dh_bv0_bv1_switch_en(data)               (0x00000001&(data))

#define  KME_DEHALO2_KME_DEHALO2_34                                             0x1809CE34
#define  KME_DEHALO2_KME_DEHALO2_34_reg_addr                                     "0xB809CE34"
#define  KME_DEHALO2_KME_DEHALO2_34_reg                                          0xB809CE34
#define  KME_DEHALO2_KME_DEHALO2_34_inst_addr                                    "0x000A"
#define  set_KME_DEHALO2_KME_DEHALO2_34_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_34_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_34_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_34_reg))
#define  KME_DEHALO2_KME_DEHALO2_34_dh_glb_gain_blk_y_intv_shift                 (0)
#define  KME_DEHALO2_KME_DEHALO2_34_dh_glb_gain_blk_y_intv_mask                  (0x000000FF)
#define  KME_DEHALO2_KME_DEHALO2_34_dh_glb_gain_blk_y_intv(data)                 (0x000000FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_34_get_dh_glb_gain_blk_y_intv(data)             (0x000000FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_38                                             0x1809CE38
#define  KME_DEHALO2_KME_DEHALO2_38_reg_addr                                     "0xB809CE38"
#define  KME_DEHALO2_KME_DEHALO2_38_reg                                          0xB809CE38
#define  KME_DEHALO2_KME_DEHALO2_38_inst_addr                                    "0x000B"
#define  set_KME_DEHALO2_KME_DEHALO2_38_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_38_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_38_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_38_reg))
#define  KME_DEHALO2_KME_DEHALO2_38_dh_32blk_glb_gain_switch03_shift             (21)
#define  KME_DEHALO2_KME_DEHALO2_38_dh_32blk_glb_gain_switch02_shift             (14)
#define  KME_DEHALO2_KME_DEHALO2_38_dh_32blk_glb_gain_switch01_shift             (7)
#define  KME_DEHALO2_KME_DEHALO2_38_dh_32blk_glb_gain_switch00_shift             (0)
#define  KME_DEHALO2_KME_DEHALO2_38_dh_32blk_glb_gain_switch03_mask              (0x0FE00000)
#define  KME_DEHALO2_KME_DEHALO2_38_dh_32blk_glb_gain_switch02_mask              (0x001FC000)
#define  KME_DEHALO2_KME_DEHALO2_38_dh_32blk_glb_gain_switch01_mask              (0x00003F80)
#define  KME_DEHALO2_KME_DEHALO2_38_dh_32blk_glb_gain_switch00_mask              (0x0000007F)
#define  KME_DEHALO2_KME_DEHALO2_38_dh_32blk_glb_gain_switch03(data)             (0x0FE00000&((data)<<21))
#define  KME_DEHALO2_KME_DEHALO2_38_dh_32blk_glb_gain_switch02(data)             (0x001FC000&((data)<<14))
#define  KME_DEHALO2_KME_DEHALO2_38_dh_32blk_glb_gain_switch01(data)             (0x00003F80&((data)<<7))
#define  KME_DEHALO2_KME_DEHALO2_38_dh_32blk_glb_gain_switch00(data)             (0x0000007F&(data))
#define  KME_DEHALO2_KME_DEHALO2_38_get_dh_32blk_glb_gain_switch03(data)         ((0x0FE00000&(data))>>21)
#define  KME_DEHALO2_KME_DEHALO2_38_get_dh_32blk_glb_gain_switch02(data)         ((0x001FC000&(data))>>14)
#define  KME_DEHALO2_KME_DEHALO2_38_get_dh_32blk_glb_gain_switch01(data)         ((0x00003F80&(data))>>7)
#define  KME_DEHALO2_KME_DEHALO2_38_get_dh_32blk_glb_gain_switch00(data)         (0x0000007F&(data))

#define  KME_DEHALO2_KME_DEHALO2_3C                                             0x1809CE3C
#define  KME_DEHALO2_KME_DEHALO2_3C_reg_addr                                     "0xB809CE3C"
#define  KME_DEHALO2_KME_DEHALO2_3C_reg                                          0xB809CE3C
#define  KME_DEHALO2_KME_DEHALO2_3C_inst_addr                                    "0x000C"
#define  set_KME_DEHALO2_KME_DEHALO2_3C_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_3C_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_3C_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_3C_reg))
#define  KME_DEHALO2_KME_DEHALO2_3C_dh_32blk_glb_gain_switch07_shift             (21)
#define  KME_DEHALO2_KME_DEHALO2_3C_dh_32blk_glb_gain_switch06_shift             (14)
#define  KME_DEHALO2_KME_DEHALO2_3C_dh_32blk_glb_gain_switch05_shift             (7)
#define  KME_DEHALO2_KME_DEHALO2_3C_dh_32blk_glb_gain_switch04_shift             (0)
#define  KME_DEHALO2_KME_DEHALO2_3C_dh_32blk_glb_gain_switch07_mask              (0x0FE00000)
#define  KME_DEHALO2_KME_DEHALO2_3C_dh_32blk_glb_gain_switch06_mask              (0x001FC000)
#define  KME_DEHALO2_KME_DEHALO2_3C_dh_32blk_glb_gain_switch05_mask              (0x00003F80)
#define  KME_DEHALO2_KME_DEHALO2_3C_dh_32blk_glb_gain_switch04_mask              (0x0000007F)
#define  KME_DEHALO2_KME_DEHALO2_3C_dh_32blk_glb_gain_switch07(data)             (0x0FE00000&((data)<<21))
#define  KME_DEHALO2_KME_DEHALO2_3C_dh_32blk_glb_gain_switch06(data)             (0x001FC000&((data)<<14))
#define  KME_DEHALO2_KME_DEHALO2_3C_dh_32blk_glb_gain_switch05(data)             (0x00003F80&((data)<<7))
#define  KME_DEHALO2_KME_DEHALO2_3C_dh_32blk_glb_gain_switch04(data)             (0x0000007F&(data))
#define  KME_DEHALO2_KME_DEHALO2_3C_get_dh_32blk_glb_gain_switch07(data)         ((0x0FE00000&(data))>>21)
#define  KME_DEHALO2_KME_DEHALO2_3C_get_dh_32blk_glb_gain_switch06(data)         ((0x001FC000&(data))>>14)
#define  KME_DEHALO2_KME_DEHALO2_3C_get_dh_32blk_glb_gain_switch05(data)         ((0x00003F80&(data))>>7)
#define  KME_DEHALO2_KME_DEHALO2_3C_get_dh_32blk_glb_gain_switch04(data)         (0x0000007F&(data))

#define  KME_DEHALO2_KME_DEHALO2_40                                             0x1809CE40
#define  KME_DEHALO2_KME_DEHALO2_40_reg_addr                                     "0xB809CE40"
#define  KME_DEHALO2_KME_DEHALO2_40_reg                                          0xB809CE40
#define  KME_DEHALO2_KME_DEHALO2_40_inst_addr                                    "0x000D"
#define  set_KME_DEHALO2_KME_DEHALO2_40_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_40_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_40_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_40_reg))
#define  KME_DEHALO2_KME_DEHALO2_40_dh_32blk_glb_gain_switch13_shift             (21)
#define  KME_DEHALO2_KME_DEHALO2_40_dh_32blk_glb_gain_switch12_shift             (14)
#define  KME_DEHALO2_KME_DEHALO2_40_dh_32blk_glb_gain_switch11_shift             (7)
#define  KME_DEHALO2_KME_DEHALO2_40_dh_32blk_glb_gain_switch10_shift             (0)
#define  KME_DEHALO2_KME_DEHALO2_40_dh_32blk_glb_gain_switch13_mask              (0x0FE00000)
#define  KME_DEHALO2_KME_DEHALO2_40_dh_32blk_glb_gain_switch12_mask              (0x001FC000)
#define  KME_DEHALO2_KME_DEHALO2_40_dh_32blk_glb_gain_switch11_mask              (0x00003F80)
#define  KME_DEHALO2_KME_DEHALO2_40_dh_32blk_glb_gain_switch10_mask              (0x0000007F)
#define  KME_DEHALO2_KME_DEHALO2_40_dh_32blk_glb_gain_switch13(data)             (0x0FE00000&((data)<<21))
#define  KME_DEHALO2_KME_DEHALO2_40_dh_32blk_glb_gain_switch12(data)             (0x001FC000&((data)<<14))
#define  KME_DEHALO2_KME_DEHALO2_40_dh_32blk_glb_gain_switch11(data)             (0x00003F80&((data)<<7))
#define  KME_DEHALO2_KME_DEHALO2_40_dh_32blk_glb_gain_switch10(data)             (0x0000007F&(data))
#define  KME_DEHALO2_KME_DEHALO2_40_get_dh_32blk_glb_gain_switch13(data)         ((0x0FE00000&(data))>>21)
#define  KME_DEHALO2_KME_DEHALO2_40_get_dh_32blk_glb_gain_switch12(data)         ((0x001FC000&(data))>>14)
#define  KME_DEHALO2_KME_DEHALO2_40_get_dh_32blk_glb_gain_switch11(data)         ((0x00003F80&(data))>>7)
#define  KME_DEHALO2_KME_DEHALO2_40_get_dh_32blk_glb_gain_switch10(data)         (0x0000007F&(data))

#define  KME_DEHALO2_KME_DEHALO2_44                                             0x1809CE44
#define  KME_DEHALO2_KME_DEHALO2_44_reg_addr                                     "0xB809CE44"
#define  KME_DEHALO2_KME_DEHALO2_44_reg                                          0xB809CE44
#define  KME_DEHALO2_KME_DEHALO2_44_inst_addr                                    "0x000E"
#define  set_KME_DEHALO2_KME_DEHALO2_44_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_44_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_44_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_44_reg))
#define  KME_DEHALO2_KME_DEHALO2_44_dh_32blk_glb_gain_switch17_shift             (21)
#define  KME_DEHALO2_KME_DEHALO2_44_dh_32blk_glb_gain_switch16_shift             (14)
#define  KME_DEHALO2_KME_DEHALO2_44_dh_32blk_glb_gain_switch15_shift             (7)
#define  KME_DEHALO2_KME_DEHALO2_44_dh_32blk_glb_gain_switch14_shift             (0)
#define  KME_DEHALO2_KME_DEHALO2_44_dh_32blk_glb_gain_switch17_mask              (0x0FE00000)
#define  KME_DEHALO2_KME_DEHALO2_44_dh_32blk_glb_gain_switch16_mask              (0x001FC000)
#define  KME_DEHALO2_KME_DEHALO2_44_dh_32blk_glb_gain_switch15_mask              (0x00003F80)
#define  KME_DEHALO2_KME_DEHALO2_44_dh_32blk_glb_gain_switch14_mask              (0x0000007F)
#define  KME_DEHALO2_KME_DEHALO2_44_dh_32blk_glb_gain_switch17(data)             (0x0FE00000&((data)<<21))
#define  KME_DEHALO2_KME_DEHALO2_44_dh_32blk_glb_gain_switch16(data)             (0x001FC000&((data)<<14))
#define  KME_DEHALO2_KME_DEHALO2_44_dh_32blk_glb_gain_switch15(data)             (0x00003F80&((data)<<7))
#define  KME_DEHALO2_KME_DEHALO2_44_dh_32blk_glb_gain_switch14(data)             (0x0000007F&(data))
#define  KME_DEHALO2_KME_DEHALO2_44_get_dh_32blk_glb_gain_switch17(data)         ((0x0FE00000&(data))>>21)
#define  KME_DEHALO2_KME_DEHALO2_44_get_dh_32blk_glb_gain_switch16(data)         ((0x001FC000&(data))>>14)
#define  KME_DEHALO2_KME_DEHALO2_44_get_dh_32blk_glb_gain_switch15(data)         ((0x00003F80&(data))>>7)
#define  KME_DEHALO2_KME_DEHALO2_44_get_dh_32blk_glb_gain_switch14(data)         (0x0000007F&(data))

#define  KME_DEHALO2_KME_DEHALO2_48                                             0x1809CE48
#define  KME_DEHALO2_KME_DEHALO2_48_reg_addr                                     "0xB809CE48"
#define  KME_DEHALO2_KME_DEHALO2_48_reg                                          0xB809CE48
#define  KME_DEHALO2_KME_DEHALO2_48_inst_addr                                    "0x000F"
#define  set_KME_DEHALO2_KME_DEHALO2_48_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_48_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_48_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_48_reg))
#define  KME_DEHALO2_KME_DEHALO2_48_dh_32blk_glb_gain_switch23_shift             (21)
#define  KME_DEHALO2_KME_DEHALO2_48_dh_32blk_glb_gain_switch22_shift             (14)
#define  KME_DEHALO2_KME_DEHALO2_48_dh_32blk_glb_gain_switch21_shift             (7)
#define  KME_DEHALO2_KME_DEHALO2_48_dh_32blk_glb_gain_switch20_shift             (0)
#define  KME_DEHALO2_KME_DEHALO2_48_dh_32blk_glb_gain_switch23_mask              (0x0FE00000)
#define  KME_DEHALO2_KME_DEHALO2_48_dh_32blk_glb_gain_switch22_mask              (0x001FC000)
#define  KME_DEHALO2_KME_DEHALO2_48_dh_32blk_glb_gain_switch21_mask              (0x00003F80)
#define  KME_DEHALO2_KME_DEHALO2_48_dh_32blk_glb_gain_switch20_mask              (0x0000007F)
#define  KME_DEHALO2_KME_DEHALO2_48_dh_32blk_glb_gain_switch23(data)             (0x0FE00000&((data)<<21))
#define  KME_DEHALO2_KME_DEHALO2_48_dh_32blk_glb_gain_switch22(data)             (0x001FC000&((data)<<14))
#define  KME_DEHALO2_KME_DEHALO2_48_dh_32blk_glb_gain_switch21(data)             (0x00003F80&((data)<<7))
#define  KME_DEHALO2_KME_DEHALO2_48_dh_32blk_glb_gain_switch20(data)             (0x0000007F&(data))
#define  KME_DEHALO2_KME_DEHALO2_48_get_dh_32blk_glb_gain_switch23(data)         ((0x0FE00000&(data))>>21)
#define  KME_DEHALO2_KME_DEHALO2_48_get_dh_32blk_glb_gain_switch22(data)         ((0x001FC000&(data))>>14)
#define  KME_DEHALO2_KME_DEHALO2_48_get_dh_32blk_glb_gain_switch21(data)         ((0x00003F80&(data))>>7)
#define  KME_DEHALO2_KME_DEHALO2_48_get_dh_32blk_glb_gain_switch20(data)         (0x0000007F&(data))

#define  KME_DEHALO2_KME_DEHALO2_4C                                             0x1809CE4C
#define  KME_DEHALO2_KME_DEHALO2_4C_reg_addr                                     "0xB809CE4C"
#define  KME_DEHALO2_KME_DEHALO2_4C_reg                                          0xB809CE4C
#define  KME_DEHALO2_KME_DEHALO2_4C_inst_addr                                    "0x0010"
#define  set_KME_DEHALO2_KME_DEHALO2_4C_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_4C_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_4C_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_4C_reg))
#define  KME_DEHALO2_KME_DEHALO2_4C_dh_32blk_glb_gain_switch27_shift             (21)
#define  KME_DEHALO2_KME_DEHALO2_4C_dh_32blk_glb_gain_switch26_shift             (14)
#define  KME_DEHALO2_KME_DEHALO2_4C_dh_32blk_glb_gain_switch25_shift             (7)
#define  KME_DEHALO2_KME_DEHALO2_4C_dh_32blk_glb_gain_switch24_shift             (0)
#define  KME_DEHALO2_KME_DEHALO2_4C_dh_32blk_glb_gain_switch27_mask              (0x0FE00000)
#define  KME_DEHALO2_KME_DEHALO2_4C_dh_32blk_glb_gain_switch26_mask              (0x001FC000)
#define  KME_DEHALO2_KME_DEHALO2_4C_dh_32blk_glb_gain_switch25_mask              (0x00003F80)
#define  KME_DEHALO2_KME_DEHALO2_4C_dh_32blk_glb_gain_switch24_mask              (0x0000007F)
#define  KME_DEHALO2_KME_DEHALO2_4C_dh_32blk_glb_gain_switch27(data)             (0x0FE00000&((data)<<21))
#define  KME_DEHALO2_KME_DEHALO2_4C_dh_32blk_glb_gain_switch26(data)             (0x001FC000&((data)<<14))
#define  KME_DEHALO2_KME_DEHALO2_4C_dh_32blk_glb_gain_switch25(data)             (0x00003F80&((data)<<7))
#define  KME_DEHALO2_KME_DEHALO2_4C_dh_32blk_glb_gain_switch24(data)             (0x0000007F&(data))
#define  KME_DEHALO2_KME_DEHALO2_4C_get_dh_32blk_glb_gain_switch27(data)         ((0x0FE00000&(data))>>21)
#define  KME_DEHALO2_KME_DEHALO2_4C_get_dh_32blk_glb_gain_switch26(data)         ((0x001FC000&(data))>>14)
#define  KME_DEHALO2_KME_DEHALO2_4C_get_dh_32blk_glb_gain_switch25(data)         ((0x00003F80&(data))>>7)
#define  KME_DEHALO2_KME_DEHALO2_4C_get_dh_32blk_glb_gain_switch24(data)         (0x0000007F&(data))

#define  KME_DEHALO2_KME_DEHALO2_50                                             0x1809CE50
#define  KME_DEHALO2_KME_DEHALO2_50_reg_addr                                     "0xB809CE50"
#define  KME_DEHALO2_KME_DEHALO2_50_reg                                          0xB809CE50
#define  KME_DEHALO2_KME_DEHALO2_50_inst_addr                                    "0x0011"
#define  set_KME_DEHALO2_KME_DEHALO2_50_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_50_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_50_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_50_reg))
#define  KME_DEHALO2_KME_DEHALO2_50_dh_32blk_glb_gain_switch33_shift             (21)
#define  KME_DEHALO2_KME_DEHALO2_50_dh_32blk_glb_gain_switch32_shift             (14)
#define  KME_DEHALO2_KME_DEHALO2_50_dh_32blk_glb_gain_switch31_shift             (7)
#define  KME_DEHALO2_KME_DEHALO2_50_dh_32blk_glb_gain_switch30_shift             (0)
#define  KME_DEHALO2_KME_DEHALO2_50_dh_32blk_glb_gain_switch33_mask              (0x0FE00000)
#define  KME_DEHALO2_KME_DEHALO2_50_dh_32blk_glb_gain_switch32_mask              (0x001FC000)
#define  KME_DEHALO2_KME_DEHALO2_50_dh_32blk_glb_gain_switch31_mask              (0x00003F80)
#define  KME_DEHALO2_KME_DEHALO2_50_dh_32blk_glb_gain_switch30_mask              (0x0000007F)
#define  KME_DEHALO2_KME_DEHALO2_50_dh_32blk_glb_gain_switch33(data)             (0x0FE00000&((data)<<21))
#define  KME_DEHALO2_KME_DEHALO2_50_dh_32blk_glb_gain_switch32(data)             (0x001FC000&((data)<<14))
#define  KME_DEHALO2_KME_DEHALO2_50_dh_32blk_glb_gain_switch31(data)             (0x00003F80&((data)<<7))
#define  KME_DEHALO2_KME_DEHALO2_50_dh_32blk_glb_gain_switch30(data)             (0x0000007F&(data))
#define  KME_DEHALO2_KME_DEHALO2_50_get_dh_32blk_glb_gain_switch33(data)         ((0x0FE00000&(data))>>21)
#define  KME_DEHALO2_KME_DEHALO2_50_get_dh_32blk_glb_gain_switch32(data)         ((0x001FC000&(data))>>14)
#define  KME_DEHALO2_KME_DEHALO2_50_get_dh_32blk_glb_gain_switch31(data)         ((0x00003F80&(data))>>7)
#define  KME_DEHALO2_KME_DEHALO2_50_get_dh_32blk_glb_gain_switch30(data)         (0x0000007F&(data))

#define  KME_DEHALO2_KME_DEHALO2_54                                             0x1809CE54
#define  KME_DEHALO2_KME_DEHALO2_54_reg_addr                                     "0xB809CE54"
#define  KME_DEHALO2_KME_DEHALO2_54_reg                                          0xB809CE54
#define  KME_DEHALO2_KME_DEHALO2_54_inst_addr                                    "0x0012"
#define  set_KME_DEHALO2_KME_DEHALO2_54_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_54_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_54_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_54_reg))
#define  KME_DEHALO2_KME_DEHALO2_54_dh_32blk_glb_gain_switch37_shift             (21)
#define  KME_DEHALO2_KME_DEHALO2_54_dh_32blk_glb_gain_switch36_shift             (14)
#define  KME_DEHALO2_KME_DEHALO2_54_dh_32blk_glb_gain_switch35_shift             (7)
#define  KME_DEHALO2_KME_DEHALO2_54_dh_32blk_glb_gain_switch34_shift             (0)
#define  KME_DEHALO2_KME_DEHALO2_54_dh_32blk_glb_gain_switch37_mask              (0x0FE00000)
#define  KME_DEHALO2_KME_DEHALO2_54_dh_32blk_glb_gain_switch36_mask              (0x001FC000)
#define  KME_DEHALO2_KME_DEHALO2_54_dh_32blk_glb_gain_switch35_mask              (0x00003F80)
#define  KME_DEHALO2_KME_DEHALO2_54_dh_32blk_glb_gain_switch34_mask              (0x0000007F)
#define  KME_DEHALO2_KME_DEHALO2_54_dh_32blk_glb_gain_switch37(data)             (0x0FE00000&((data)<<21))
#define  KME_DEHALO2_KME_DEHALO2_54_dh_32blk_glb_gain_switch36(data)             (0x001FC000&((data)<<14))
#define  KME_DEHALO2_KME_DEHALO2_54_dh_32blk_glb_gain_switch35(data)             (0x00003F80&((data)<<7))
#define  KME_DEHALO2_KME_DEHALO2_54_dh_32blk_glb_gain_switch34(data)             (0x0000007F&(data))
#define  KME_DEHALO2_KME_DEHALO2_54_get_dh_32blk_glb_gain_switch37(data)         ((0x0FE00000&(data))>>21)
#define  KME_DEHALO2_KME_DEHALO2_54_get_dh_32blk_glb_gain_switch36(data)         ((0x001FC000&(data))>>14)
#define  KME_DEHALO2_KME_DEHALO2_54_get_dh_32blk_glb_gain_switch35(data)         ((0x00003F80&(data))>>7)
#define  KME_DEHALO2_KME_DEHALO2_54_get_dh_32blk_glb_gain_switch34(data)         (0x0000007F&(data))

#define  KME_DEHALO2_KME_DEHALO2_58                                             0x1809CE58
#define  KME_DEHALO2_KME_DEHALO2_58_reg_addr                                     "0xB809CE58"
#define  KME_DEHALO2_KME_DEHALO2_58_reg                                          0xB809CE58
#define  KME_DEHALO2_KME_DEHALO2_58_inst_addr                                    "0x0013"
#define  set_KME_DEHALO2_KME_DEHALO2_58_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_58_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_58_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_58_reg))
#define  KME_DEHALO2_KME_DEHALO2_58_dh_32blk_bv0_bv1_switch_shift                (0)
#define  KME_DEHALO2_KME_DEHALO2_58_dh_32blk_bv0_bv1_switch_mask                 (0xFFFFFFFF)
#define  KME_DEHALO2_KME_DEHALO2_58_dh_32blk_bv0_bv1_switch(data)                (0xFFFFFFFF&(data))
#define  KME_DEHALO2_KME_DEHALO2_58_get_dh_32blk_bv0_bv1_switch(data)            (0xFFFFFFFF&(data))

#define  KME_DEHALO2_KME_DEHALO2_74                                             0x1809CE74
#define  KME_DEHALO2_KME_DEHALO2_74_reg_addr                                     "0xB809CE74"
#define  KME_DEHALO2_KME_DEHALO2_74_reg                                          0xB809CE74
#define  KME_DEHALO2_KME_DEHALO2_74_inst_addr                                    "0x0014"
#define  set_KME_DEHALO2_KME_DEHALO2_74_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_74_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_74_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_74_reg))
#define  KME_DEHALO2_KME_DEHALO2_74_dh_dlogo_logo_sour_shift                     (31)
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_ip_pi_logo_switch_shift              (30)
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_shift_shift                          (26)
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_sad_x_th_shift                       (16)
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_mv_x_th_shift                        (10)
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_mv_x_ratio_shift                     (6)
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_mv_x_diff_th_shift                   (0)
#define  KME_DEHALO2_KME_DEHALO2_74_dh_dlogo_logo_sour_mask                      (0x80000000)
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_ip_pi_logo_switch_mask               (0x40000000)
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_shift_mask                           (0x3C000000)
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_sad_x_th_mask                        (0x03FF0000)
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_mv_x_th_mask                         (0x0000FC00)
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_mv_x_ratio_mask                      (0x000003C0)
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_mv_x_diff_th_mask                    (0x0000003F)
#define  KME_DEHALO2_KME_DEHALO2_74_dh_dlogo_logo_sour(data)                     (0x80000000&((data)<<31))
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_ip_pi_logo_switch(data)              (0x40000000&((data)<<30))
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_shift(data)                          (0x3C000000&((data)<<26))
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_sad_x_th(data)                       (0x03FF0000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_mv_x_th(data)                        (0x0000FC00&((data)<<10))
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_mv_x_ratio(data)                     (0x000003C0&((data)<<6))
#define  KME_DEHALO2_KME_DEHALO2_74_dh_logo_mv_x_diff_th(data)                   (0x0000003F&(data))
#define  KME_DEHALO2_KME_DEHALO2_74_get_dh_dlogo_logo_sour(data)                 ((0x80000000&(data))>>31)
#define  KME_DEHALO2_KME_DEHALO2_74_get_dh_logo_ip_pi_logo_switch(data)          ((0x40000000&(data))>>30)
#define  KME_DEHALO2_KME_DEHALO2_74_get_dh_logo_shift(data)                      ((0x3C000000&(data))>>26)
#define  KME_DEHALO2_KME_DEHALO2_74_get_dh_logo_sad_x_th(data)                   ((0x03FF0000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_74_get_dh_logo_mv_x_th(data)                    ((0x0000FC00&(data))>>10)
#define  KME_DEHALO2_KME_DEHALO2_74_get_dh_logo_mv_x_ratio(data)                 ((0x000003C0&(data))>>6)
#define  KME_DEHALO2_KME_DEHALO2_74_get_dh_logo_mv_x_diff_th(data)               (0x0000003F&(data))

#define  KME_DEHALO2_KME_DEHALO2_78                                             0x1809CE78
#define  KME_DEHALO2_KME_DEHALO2_78_reg_addr                                     "0xB809CE78"
#define  KME_DEHALO2_KME_DEHALO2_78_reg                                          0xB809CE78
#define  KME_DEHALO2_KME_DEHALO2_78_inst_addr                                    "0x0015"
#define  set_KME_DEHALO2_KME_DEHALO2_78_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_78_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_78_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_78_reg))
#define  KME_DEHALO2_KME_DEHALO2_78_dh_logo_logo_x_th_shift                      (9)
#define  KME_DEHALO2_KME_DEHALO2_78_dh_logo_mv_x_num_th_shift                    (0)
#define  KME_DEHALO2_KME_DEHALO2_78_dh_logo_logo_x_th_mask                       (0x0003FE00)
#define  KME_DEHALO2_KME_DEHALO2_78_dh_logo_mv_x_num_th_mask                     (0x000001FF)
#define  KME_DEHALO2_KME_DEHALO2_78_dh_logo_logo_x_th(data)                      (0x0003FE00&((data)<<9))
#define  KME_DEHALO2_KME_DEHALO2_78_dh_logo_mv_x_num_th(data)                    (0x000001FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_78_get_dh_logo_logo_x_th(data)                  ((0x0003FE00&(data))>>9)
#define  KME_DEHALO2_KME_DEHALO2_78_get_dh_logo_mv_x_num_th(data)                (0x000001FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_7C                                             0x1809CE7C
#define  KME_DEHALO2_KME_DEHALO2_7C_reg_addr                                     "0xB809CE7C"
#define  KME_DEHALO2_KME_DEHALO2_7C_reg                                          0xB809CE7C
#define  KME_DEHALO2_KME_DEHALO2_7C_inst_addr                                    "0x0016"
#define  set_KME_DEHALO2_KME_DEHALO2_7C_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_7C_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_7C_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_7C_reg))
#define  KME_DEHALO2_KME_DEHALO2_7C_dh_logo_sad_y_th_shift                       (16)
#define  KME_DEHALO2_KME_DEHALO2_7C_dh_logo_mv_y_th_shift                        (10)
#define  KME_DEHALO2_KME_DEHALO2_7C_dh_logo_mv_y_ratio_shift                     (6)
#define  KME_DEHALO2_KME_DEHALO2_7C_dh_logo_mv_y_diff_th_shift                   (0)
#define  KME_DEHALO2_KME_DEHALO2_7C_dh_logo_sad_y_th_mask                        (0x03FF0000)
#define  KME_DEHALO2_KME_DEHALO2_7C_dh_logo_mv_y_th_mask                         (0x0000FC00)
#define  KME_DEHALO2_KME_DEHALO2_7C_dh_logo_mv_y_ratio_mask                      (0x000003C0)
#define  KME_DEHALO2_KME_DEHALO2_7C_dh_logo_mv_y_diff_th_mask                    (0x0000003F)
#define  KME_DEHALO2_KME_DEHALO2_7C_dh_logo_sad_y_th(data)                       (0x03FF0000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_7C_dh_logo_mv_y_th(data)                        (0x0000FC00&((data)<<10))
#define  KME_DEHALO2_KME_DEHALO2_7C_dh_logo_mv_y_ratio(data)                     (0x000003C0&((data)<<6))
#define  KME_DEHALO2_KME_DEHALO2_7C_dh_logo_mv_y_diff_th(data)                   (0x0000003F&(data))
#define  KME_DEHALO2_KME_DEHALO2_7C_get_dh_logo_sad_y_th(data)                   ((0x03FF0000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_7C_get_dh_logo_mv_y_th(data)                    ((0x0000FC00&(data))>>10)
#define  KME_DEHALO2_KME_DEHALO2_7C_get_dh_logo_mv_y_ratio(data)                 ((0x000003C0&(data))>>6)
#define  KME_DEHALO2_KME_DEHALO2_7C_get_dh_logo_mv_y_diff_th(data)               (0x0000003F&(data))

#define  KME_DEHALO2_KME_DEHALO2_80                                             0x1809CE80
#define  KME_DEHALO2_KME_DEHALO2_80_reg_addr                                     "0xB809CE80"
#define  KME_DEHALO2_KME_DEHALO2_80_reg                                          0xB809CE80
#define  KME_DEHALO2_KME_DEHALO2_80_inst_addr                                    "0x0017"
#define  set_KME_DEHALO2_KME_DEHALO2_80_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_80_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_80_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_80_reg))
#define  KME_DEHALO2_KME_DEHALO2_80_dh_logo_logo_y_th_shift                      (9)
#define  KME_DEHALO2_KME_DEHALO2_80_dh_logo_mv_y_num_th_shift                    (0)
#define  KME_DEHALO2_KME_DEHALO2_80_dh_logo_logo_y_th_mask                       (0x0003FE00)
#define  KME_DEHALO2_KME_DEHALO2_80_dh_logo_mv_y_num_th_mask                     (0x000001FF)
#define  KME_DEHALO2_KME_DEHALO2_80_dh_logo_logo_y_th(data)                      (0x0003FE00&((data)<<9))
#define  KME_DEHALO2_KME_DEHALO2_80_dh_logo_mv_y_num_th(data)                    (0x000001FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_80_get_dh_logo_logo_y_th(data)                  ((0x0003FE00&(data))>>9)
#define  KME_DEHALO2_KME_DEHALO2_80_get_dh_logo_mv_y_num_th(data)                (0x000001FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_84                                             0x1809CE84
#define  KME_DEHALO2_KME_DEHALO2_84_reg_addr                                     "0xB809CE84"
#define  KME_DEHALO2_KME_DEHALO2_84_reg                                          0xB809CE84
#define  KME_DEHALO2_KME_DEHALO2_84_inst_addr                                    "0x0018"
#define  set_KME_DEHALO2_KME_DEHALO2_84_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_84_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_84_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_84_reg))
#define  KME_DEHALO2_KME_DEHALO2_84_dh_logo_sad_d_th_rg0_shift                   (12)
#define  KME_DEHALO2_KME_DEHALO2_84_dh_logo_mv_d_th_rg0_shift                    (6)
#define  KME_DEHALO2_KME_DEHALO2_84_dh_logo_mv_d_diff_th_rg0_shift               (0)
#define  KME_DEHALO2_KME_DEHALO2_84_dh_logo_sad_d_th_rg0_mask                    (0x003FF000)
#define  KME_DEHALO2_KME_DEHALO2_84_dh_logo_mv_d_th_rg0_mask                     (0x00000FC0)
#define  KME_DEHALO2_KME_DEHALO2_84_dh_logo_mv_d_diff_th_rg0_mask                (0x0000003F)
#define  KME_DEHALO2_KME_DEHALO2_84_dh_logo_sad_d_th_rg0(data)                   (0x003FF000&((data)<<12))
#define  KME_DEHALO2_KME_DEHALO2_84_dh_logo_mv_d_th_rg0(data)                    (0x00000FC0&((data)<<6))
#define  KME_DEHALO2_KME_DEHALO2_84_dh_logo_mv_d_diff_th_rg0(data)               (0x0000003F&(data))
#define  KME_DEHALO2_KME_DEHALO2_84_get_dh_logo_sad_d_th_rg0(data)               ((0x003FF000&(data))>>12)
#define  KME_DEHALO2_KME_DEHALO2_84_get_dh_logo_mv_d_th_rg0(data)                ((0x00000FC0&(data))>>6)
#define  KME_DEHALO2_KME_DEHALO2_84_get_dh_logo_mv_d_diff_th_rg0(data)           (0x0000003F&(data))

#define  KME_DEHALO2_KME_DEHALO2_88                                             0x1809CE88
#define  KME_DEHALO2_KME_DEHALO2_88_reg_addr                                     "0xB809CE88"
#define  KME_DEHALO2_KME_DEHALO2_88_reg                                          0xB809CE88
#define  KME_DEHALO2_KME_DEHALO2_88_inst_addr                                    "0x0019"
#define  set_KME_DEHALO2_KME_DEHALO2_88_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_88_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_88_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_88_reg))
#define  KME_DEHALO2_KME_DEHALO2_88_dh_logo_smv_sad_th_shift                     (12)
#define  KME_DEHALO2_KME_DEHALO2_88_dh_logo_smv_mv_x_th_shift                    (6)
#define  KME_DEHALO2_KME_DEHALO2_88_dh_logo_smv_mv_y_th_shift                    (0)
#define  KME_DEHALO2_KME_DEHALO2_88_dh_logo_smv_sad_th_mask                      (0x003FF000)
#define  KME_DEHALO2_KME_DEHALO2_88_dh_logo_smv_mv_x_th_mask                     (0x00000FC0)
#define  KME_DEHALO2_KME_DEHALO2_88_dh_logo_smv_mv_y_th_mask                     (0x0000003F)
#define  KME_DEHALO2_KME_DEHALO2_88_dh_logo_smv_sad_th(data)                     (0x003FF000&((data)<<12))
#define  KME_DEHALO2_KME_DEHALO2_88_dh_logo_smv_mv_x_th(data)                    (0x00000FC0&((data)<<6))
#define  KME_DEHALO2_KME_DEHALO2_88_dh_logo_smv_mv_y_th(data)                    (0x0000003F&(data))
#define  KME_DEHALO2_KME_DEHALO2_88_get_dh_logo_smv_sad_th(data)                 ((0x003FF000&(data))>>12)
#define  KME_DEHALO2_KME_DEHALO2_88_get_dh_logo_smv_mv_x_th(data)                ((0x00000FC0&(data))>>6)
#define  KME_DEHALO2_KME_DEHALO2_88_get_dh_logo_smv_mv_y_th(data)                (0x0000003F&(data))

#define  KME_DEHALO2_KME_DEHALO2_8C                                             0x1809CE8C
#define  KME_DEHALO2_KME_DEHALO2_8C_reg_addr                                     "0xB809CE8C"
#define  KME_DEHALO2_KME_DEHALO2_8C_reg                                          0xB809CE8C
#define  KME_DEHALO2_KME_DEHALO2_8C_inst_addr                                    "0x001A"
#define  set_KME_DEHALO2_KME_DEHALO2_8C_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_8C_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_8C_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_8C_reg))
#define  KME_DEHALO2_KME_DEHALO2_8C_dh_logo_smv_num_shift                        (0)
#define  KME_DEHALO2_KME_DEHALO2_8C_dh_logo_smv_num_mask                         (0x0003FFFF)
#define  KME_DEHALO2_KME_DEHALO2_8C_dh_logo_smv_num(data)                        (0x0003FFFF&(data))
#define  KME_DEHALO2_KME_DEHALO2_8C_get_dh_logo_smv_num(data)                    (0x0003FFFF&(data))

#define  KME_DEHALO2_KME_DEHALO2_90                                             0x1809CE90
#define  KME_DEHALO2_KME_DEHALO2_90_reg_addr                                     "0xB809CE90"
#define  KME_DEHALO2_KME_DEHALO2_90_reg                                          0xB809CE90
#define  KME_DEHALO2_KME_DEHALO2_90_inst_addr                                    "0x001B"
#define  set_KME_DEHALO2_KME_DEHALO2_90_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_90_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_90_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_90_reg))
#define  KME_DEHALO2_KME_DEHALO2_90_dh_dlogo_repeat_mod_shift                    (20)
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_pat_en_shift                         (16)
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_tmv_bypass_rg0_shift                 (15)
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_smv_bypass_rg0_shift                 (12)
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_mvd_bypass_rg0_shift                 (8)
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_ver_bypass_rg0_shift                 (4)
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_hor_bypass_rg0_shift                 (0)
#define  KME_DEHALO2_KME_DEHALO2_90_dh_dlogo_repeat_mod_mask                     (0x00100000)
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_pat_en_mask                          (0x000F0000)
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_tmv_bypass_rg0_mask                  (0x00008000)
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_smv_bypass_rg0_mask                  (0x00007000)
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_mvd_bypass_rg0_mask                  (0x00000700)
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_ver_bypass_rg0_mask                  (0x00000070)
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_hor_bypass_rg0_mask                  (0x00000007)
#define  KME_DEHALO2_KME_DEHALO2_90_dh_dlogo_repeat_mod(data)                    (0x00100000&((data)<<20))
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_pat_en(data)                         (0x000F0000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_tmv_bypass_rg0(data)                 (0x00008000&((data)<<15))
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_smv_bypass_rg0(data)                 (0x00007000&((data)<<12))
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_mvd_bypass_rg0(data)                 (0x00000700&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_ver_bypass_rg0(data)                 (0x00000070&((data)<<4))
#define  KME_DEHALO2_KME_DEHALO2_90_dh_logo_hor_bypass_rg0(data)                 (0x00000007&(data))
#define  KME_DEHALO2_KME_DEHALO2_90_get_dh_dlogo_repeat_mod(data)                ((0x00100000&(data))>>20)
#define  KME_DEHALO2_KME_DEHALO2_90_get_dh_logo_pat_en(data)                     ((0x000F0000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_90_get_dh_logo_tmv_bypass_rg0(data)             ((0x00008000&(data))>>15)
#define  KME_DEHALO2_KME_DEHALO2_90_get_dh_logo_smv_bypass_rg0(data)             ((0x00007000&(data))>>12)
#define  KME_DEHALO2_KME_DEHALO2_90_get_dh_logo_mvd_bypass_rg0(data)             ((0x00000700&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO2_90_get_dh_logo_ver_bypass_rg0(data)             ((0x00000070&(data))>>4)
#define  KME_DEHALO2_KME_DEHALO2_90_get_dh_logo_hor_bypass_rg0(data)             (0x00000007&(data))

#define  KME_DEHALO2_KME_DEHALO2_94                                             0x1809CE94
#define  KME_DEHALO2_KME_DEHALO2_94_reg_addr                                     "0xB809CE94"
#define  KME_DEHALO2_KME_DEHALO2_94_reg                                          0xB809CE94
#define  KME_DEHALO2_KME_DEHALO2_94_inst_addr                                    "0x001C"
#define  set_KME_DEHALO2_KME_DEHALO2_94_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_94_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_94_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_94_reg))
#define  KME_DEHALO2_KME_DEHALO2_94_dh_logo_rgn_v3_shift                         (24)
#define  KME_DEHALO2_KME_DEHALO2_94_dh_logo_rgn_v2_shift                         (16)
#define  KME_DEHALO2_KME_DEHALO2_94_dh_logo_rgn_v1_shift                         (8)
#define  KME_DEHALO2_KME_DEHALO2_94_dh_logo_rgn_v0_shift                         (0)
#define  KME_DEHALO2_KME_DEHALO2_94_dh_logo_rgn_v3_mask                          (0xFF000000)
#define  KME_DEHALO2_KME_DEHALO2_94_dh_logo_rgn_v2_mask                          (0x00FF0000)
#define  KME_DEHALO2_KME_DEHALO2_94_dh_logo_rgn_v1_mask                          (0x0000FF00)
#define  KME_DEHALO2_KME_DEHALO2_94_dh_logo_rgn_v0_mask                          (0x000000FF)
#define  KME_DEHALO2_KME_DEHALO2_94_dh_logo_rgn_v3(data)                         (0xFF000000&((data)<<24))
#define  KME_DEHALO2_KME_DEHALO2_94_dh_logo_rgn_v2(data)                         (0x00FF0000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_94_dh_logo_rgn_v1(data)                         (0x0000FF00&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO2_94_dh_logo_rgn_v0(data)                         (0x000000FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_94_get_dh_logo_rgn_v3(data)                     ((0xFF000000&(data))>>24)
#define  KME_DEHALO2_KME_DEHALO2_94_get_dh_logo_rgn_v2(data)                     ((0x00FF0000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_94_get_dh_logo_rgn_v1(data)                     ((0x0000FF00&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO2_94_get_dh_logo_rgn_v0(data)                     (0x000000FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_98                                             0x1809CE98
#define  KME_DEHALO2_KME_DEHALO2_98_reg_addr                                     "0xB809CE98"
#define  KME_DEHALO2_KME_DEHALO2_98_reg                                          0xB809CE98
#define  KME_DEHALO2_KME_DEHALO2_98_inst_addr                                    "0x001D"
#define  set_KME_DEHALO2_KME_DEHALO2_98_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_98_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_98_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_98_reg))
#define  KME_DEHALO2_KME_DEHALO2_98_dh_logo_rgn_h3_shift                         (24)
#define  KME_DEHALO2_KME_DEHALO2_98_dh_logo_rgn_h2_shift                         (16)
#define  KME_DEHALO2_KME_DEHALO2_98_dh_logo_rgn_h1_shift                         (8)
#define  KME_DEHALO2_KME_DEHALO2_98_dh_logo_rgn_h0_shift                         (0)
#define  KME_DEHALO2_KME_DEHALO2_98_dh_logo_rgn_h3_mask                          (0xFF000000)
#define  KME_DEHALO2_KME_DEHALO2_98_dh_logo_rgn_h2_mask                          (0x00FF0000)
#define  KME_DEHALO2_KME_DEHALO2_98_dh_logo_rgn_h1_mask                          (0x0000FF00)
#define  KME_DEHALO2_KME_DEHALO2_98_dh_logo_rgn_h0_mask                          (0x000000FF)
#define  KME_DEHALO2_KME_DEHALO2_98_dh_logo_rgn_h3(data)                         (0xFF000000&((data)<<24))
#define  KME_DEHALO2_KME_DEHALO2_98_dh_logo_rgn_h2(data)                         (0x00FF0000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_98_dh_logo_rgn_h1(data)                         (0x0000FF00&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO2_98_dh_logo_rgn_h0(data)                         (0x000000FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_98_get_dh_logo_rgn_h3(data)                     ((0xFF000000&(data))>>24)
#define  KME_DEHALO2_KME_DEHALO2_98_get_dh_logo_rgn_h2(data)                     ((0x00FF0000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_98_get_dh_logo_rgn_h1(data)                     ((0x0000FF00&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO2_98_get_dh_logo_rgn_h0(data)                     (0x000000FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_9C                                             0x1809CE9C
#define  KME_DEHALO2_KME_DEHALO2_9C_reg_addr                                     "0xB809CE9C"
#define  KME_DEHALO2_KME_DEHALO2_9C_reg                                          0xB809CE9C
#define  KME_DEHALO2_KME_DEHALO2_9C_inst_addr                                    "0x001E"
#define  set_KME_DEHALO2_KME_DEHALO2_9C_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_9C_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_9C_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_9C_reg))
#define  KME_DEHALO2_KME_DEHALO2_9C_dh_logo_rdbk_en_shift                        (16)
#define  KME_DEHALO2_KME_DEHALO2_9C_dh_logo_rgn_h5_shift                         (8)
#define  KME_DEHALO2_KME_DEHALO2_9C_dh_logo_rgn_h4_shift                         (0)
#define  KME_DEHALO2_KME_DEHALO2_9C_dh_logo_rdbk_en_mask                         (0x00010000)
#define  KME_DEHALO2_KME_DEHALO2_9C_dh_logo_rgn_h5_mask                          (0x0000FF00)
#define  KME_DEHALO2_KME_DEHALO2_9C_dh_logo_rgn_h4_mask                          (0x000000FF)
#define  KME_DEHALO2_KME_DEHALO2_9C_dh_logo_rdbk_en(data)                        (0x00010000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_9C_dh_logo_rgn_h5(data)                         (0x0000FF00&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO2_9C_dh_logo_rgn_h4(data)                         (0x000000FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_9C_get_dh_logo_rdbk_en(data)                    ((0x00010000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_9C_get_dh_logo_rgn_h5(data)                     ((0x0000FF00&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO2_9C_get_dh_logo_rgn_h4(data)                     (0x000000FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_A0                                             0x1809CEA0
#define  KME_DEHALO2_KME_DEHALO2_A0_reg_addr                                     "0xB809CEA0"
#define  KME_DEHALO2_KME_DEHALO2_A0_reg                                          0xB809CEA0
#define  KME_DEHALO2_KME_DEHALO2_A0_inst_addr                                    "0x001F"
#define  set_KME_DEHALO2_KME_DEHALO2_A0_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_A0_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_A0_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_A0_reg))
#define  KME_DEHALO2_KME_DEHALO2_A0_dh_logo_tmv_mode_rg0_shift                   (26)
#define  KME_DEHALO2_KME_DEHALO2_A0_dh_logo_sad_t_th_rg0_shift                   (16)
#define  KME_DEHALO2_KME_DEHALO2_A0_dh_logo_tmv_num_rg0_shift                    (8)
#define  KME_DEHALO2_KME_DEHALO2_A0_dh_logo_mv_t_th_rg0_shift                    (0)
#define  KME_DEHALO2_KME_DEHALO2_A0_dh_logo_tmv_mode_rg0_mask                    (0x0C000000)
#define  KME_DEHALO2_KME_DEHALO2_A0_dh_logo_sad_t_th_rg0_mask                    (0x03FF0000)
#define  KME_DEHALO2_KME_DEHALO2_A0_dh_logo_tmv_num_rg0_mask                     (0x0000FF00)
#define  KME_DEHALO2_KME_DEHALO2_A0_dh_logo_mv_t_th_rg0_mask                     (0x000000FF)
#define  KME_DEHALO2_KME_DEHALO2_A0_dh_logo_tmv_mode_rg0(data)                   (0x0C000000&((data)<<26))
#define  KME_DEHALO2_KME_DEHALO2_A0_dh_logo_sad_t_th_rg0(data)                   (0x03FF0000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_A0_dh_logo_tmv_num_rg0(data)                    (0x0000FF00&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO2_A0_dh_logo_mv_t_th_rg0(data)                    (0x000000FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_A0_get_dh_logo_tmv_mode_rg0(data)               ((0x0C000000&(data))>>26)
#define  KME_DEHALO2_KME_DEHALO2_A0_get_dh_logo_sad_t_th_rg0(data)               ((0x03FF0000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_A0_get_dh_logo_tmv_num_rg0(data)                ((0x0000FF00&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO2_A0_get_dh_logo_mv_t_th_rg0(data)                (0x000000FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_A4                                             0x1809CEA4
#define  KME_DEHALO2_KME_DEHALO2_A4_reg_addr                                     "0xB809CEA4"
#define  KME_DEHALO2_KME_DEHALO2_A4_reg                                          0xB809CEA4
#define  KME_DEHALO2_KME_DEHALO2_A4_inst_addr                                    "0x0020"
#define  set_KME_DEHALO2_KME_DEHALO2_A4_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_A4_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_A4_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_A4_reg))
#define  KME_DEHALO2_KME_DEHALO2_A4_dh_logo_tmv_mode_rg1_shift                   (26)
#define  KME_DEHALO2_KME_DEHALO2_A4_dh_logo_sad_t_th_rg1_shift                   (16)
#define  KME_DEHALO2_KME_DEHALO2_A4_dh_logo_tmv_num_rg1_shift                    (8)
#define  KME_DEHALO2_KME_DEHALO2_A4_dh_logo_mv_t_th_rg1_shift                    (0)
#define  KME_DEHALO2_KME_DEHALO2_A4_dh_logo_tmv_mode_rg1_mask                    (0x0C000000)
#define  KME_DEHALO2_KME_DEHALO2_A4_dh_logo_sad_t_th_rg1_mask                    (0x03FF0000)
#define  KME_DEHALO2_KME_DEHALO2_A4_dh_logo_tmv_num_rg1_mask                     (0x0000FF00)
#define  KME_DEHALO2_KME_DEHALO2_A4_dh_logo_mv_t_th_rg1_mask                     (0x000000FF)
#define  KME_DEHALO2_KME_DEHALO2_A4_dh_logo_tmv_mode_rg1(data)                   (0x0C000000&((data)<<26))
#define  KME_DEHALO2_KME_DEHALO2_A4_dh_logo_sad_t_th_rg1(data)                   (0x03FF0000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_A4_dh_logo_tmv_num_rg1(data)                    (0x0000FF00&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO2_A4_dh_logo_mv_t_th_rg1(data)                    (0x000000FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_A4_get_dh_logo_tmv_mode_rg1(data)               ((0x0C000000&(data))>>26)
#define  KME_DEHALO2_KME_DEHALO2_A4_get_dh_logo_sad_t_th_rg1(data)               ((0x03FF0000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_A4_get_dh_logo_tmv_num_rg1(data)                ((0x0000FF00&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO2_A4_get_dh_logo_mv_t_th_rg1(data)                (0x000000FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_A8                                             0x1809CEA8
#define  KME_DEHALO2_KME_DEHALO2_A8_reg_addr                                     "0xB809CEA8"
#define  KME_DEHALO2_KME_DEHALO2_A8_reg                                          0xB809CEA8
#define  KME_DEHALO2_KME_DEHALO2_A8_inst_addr                                    "0x0021"
#define  set_KME_DEHALO2_KME_DEHALO2_A8_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_A8_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_A8_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_A8_reg))
#define  KME_DEHALO2_KME_DEHALO2_A8_dh_logo_smv_bypass_rg1_shift                 (10)
#define  KME_DEHALO2_KME_DEHALO2_A8_dh_logo_mvd_bypass_rg1_shift                 (7)
#define  KME_DEHALO2_KME_DEHALO2_A8_dh_logo_ver_bypass_rg1_shift                 (4)
#define  KME_DEHALO2_KME_DEHALO2_A8_dh_logo_hor_bypass_rg1_shift                 (1)
#define  KME_DEHALO2_KME_DEHALO2_A8_dh_logo_tmv_bypass_rg1_shift                 (0)
#define  KME_DEHALO2_KME_DEHALO2_A8_dh_logo_smv_bypass_rg1_mask                  (0x00001C00)
#define  KME_DEHALO2_KME_DEHALO2_A8_dh_logo_mvd_bypass_rg1_mask                  (0x00000380)
#define  KME_DEHALO2_KME_DEHALO2_A8_dh_logo_ver_bypass_rg1_mask                  (0x00000070)
#define  KME_DEHALO2_KME_DEHALO2_A8_dh_logo_hor_bypass_rg1_mask                  (0x0000000E)
#define  KME_DEHALO2_KME_DEHALO2_A8_dh_logo_tmv_bypass_rg1_mask                  (0x00000001)
#define  KME_DEHALO2_KME_DEHALO2_A8_dh_logo_smv_bypass_rg1(data)                 (0x00001C00&((data)<<10))
#define  KME_DEHALO2_KME_DEHALO2_A8_dh_logo_mvd_bypass_rg1(data)                 (0x00000380&((data)<<7))
#define  KME_DEHALO2_KME_DEHALO2_A8_dh_logo_ver_bypass_rg1(data)                 (0x00000070&((data)<<4))
#define  KME_DEHALO2_KME_DEHALO2_A8_dh_logo_hor_bypass_rg1(data)                 (0x0000000E&((data)<<1))
#define  KME_DEHALO2_KME_DEHALO2_A8_dh_logo_tmv_bypass_rg1(data)                 (0x00000001&(data))
#define  KME_DEHALO2_KME_DEHALO2_A8_get_dh_logo_smv_bypass_rg1(data)             ((0x00001C00&(data))>>10)
#define  KME_DEHALO2_KME_DEHALO2_A8_get_dh_logo_mvd_bypass_rg1(data)             ((0x00000380&(data))>>7)
#define  KME_DEHALO2_KME_DEHALO2_A8_get_dh_logo_ver_bypass_rg1(data)             ((0x00000070&(data))>>4)
#define  KME_DEHALO2_KME_DEHALO2_A8_get_dh_logo_hor_bypass_rg1(data)             ((0x0000000E&(data))>>1)
#define  KME_DEHALO2_KME_DEHALO2_A8_get_dh_logo_tmv_bypass_rg1(data)             (0x00000001&(data))

#define  KME_DEHALO2_KME_DEHALO2_AC                                             0x1809CEAC
#define  KME_DEHALO2_KME_DEHALO2_AC_reg_addr                                     "0xB809CEAC"
#define  KME_DEHALO2_KME_DEHALO2_AC_reg                                          0xB809CEAC
#define  KME_DEHALO2_KME_DEHALO2_AC_inst_addr                                    "0x0022"
#define  set_KME_DEHALO2_KME_DEHALO2_AC_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_AC_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_AC_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_AC_reg))
#define  KME_DEHALO2_KME_DEHALO2_AC_dh_logo_sad_d_th_rg1_shift                   (12)
#define  KME_DEHALO2_KME_DEHALO2_AC_dh_logo_mv_d_th_rg1_shift                    (6)
#define  KME_DEHALO2_KME_DEHALO2_AC_dh_logo_mv_d_diff_th_rg1_shift               (0)
#define  KME_DEHALO2_KME_DEHALO2_AC_dh_logo_sad_d_th_rg1_mask                    (0x003FF000)
#define  KME_DEHALO2_KME_DEHALO2_AC_dh_logo_mv_d_th_rg1_mask                     (0x00000FC0)
#define  KME_DEHALO2_KME_DEHALO2_AC_dh_logo_mv_d_diff_th_rg1_mask                (0x0000003F)
#define  KME_DEHALO2_KME_DEHALO2_AC_dh_logo_sad_d_th_rg1(data)                   (0x003FF000&((data)<<12))
#define  KME_DEHALO2_KME_DEHALO2_AC_dh_logo_mv_d_th_rg1(data)                    (0x00000FC0&((data)<<6))
#define  KME_DEHALO2_KME_DEHALO2_AC_dh_logo_mv_d_diff_th_rg1(data)               (0x0000003F&(data))
#define  KME_DEHALO2_KME_DEHALO2_AC_get_dh_logo_sad_d_th_rg1(data)               ((0x003FF000&(data))>>12)
#define  KME_DEHALO2_KME_DEHALO2_AC_get_dh_logo_mv_d_th_rg1(data)                ((0x00000FC0&(data))>>6)
#define  KME_DEHALO2_KME_DEHALO2_AC_get_dh_logo_mv_d_diff_th_rg1(data)           (0x0000003F&(data))

#define  KME_DEHALO2_KME_DEHALO2_B0                                             0x1809CEB0
#define  KME_DEHALO2_KME_DEHALO2_B0_reg_addr                                     "0xB809CEB0"
#define  KME_DEHALO2_KME_DEHALO2_B0_reg                                          0xB809CEB0
#define  KME_DEHALO2_KME_DEHALO2_B0_inst_addr                                    "0x0023"
#define  set_KME_DEHALO2_KME_DEHALO2_B0_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_B0_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_B0_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_B0_reg))
#define  KME_DEHALO2_KME_DEHALO2_B0_dh_rt1_mvxfb_y1_shift                        (20)
#define  KME_DEHALO2_KME_DEHALO2_B0_dh_rt1_mvxfb_x2_shift                        (10)
#define  KME_DEHALO2_KME_DEHALO2_B0_dh_rt1_mvxfb_x1_shift                        (0)
#define  KME_DEHALO2_KME_DEHALO2_B0_dh_rt1_mvxfb_y1_mask                         (0x3FF00000)
#define  KME_DEHALO2_KME_DEHALO2_B0_dh_rt1_mvxfb_x2_mask                         (0x000FFC00)
#define  KME_DEHALO2_KME_DEHALO2_B0_dh_rt1_mvxfb_x1_mask                         (0x000003FF)
#define  KME_DEHALO2_KME_DEHALO2_B0_dh_rt1_mvxfb_y1(data)                        (0x3FF00000&((data)<<20))
#define  KME_DEHALO2_KME_DEHALO2_B0_dh_rt1_mvxfb_x2(data)                        (0x000FFC00&((data)<<10))
#define  KME_DEHALO2_KME_DEHALO2_B0_dh_rt1_mvxfb_x1(data)                        (0x000003FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_B0_get_dh_rt1_mvxfb_y1(data)                    ((0x3FF00000&(data))>>20)
#define  KME_DEHALO2_KME_DEHALO2_B0_get_dh_rt1_mvxfb_x2(data)                    ((0x000FFC00&(data))>>10)
#define  KME_DEHALO2_KME_DEHALO2_B0_get_dh_rt1_mvxfb_x1(data)                    (0x000003FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_B4                                             0x1809CEB4
#define  KME_DEHALO2_KME_DEHALO2_B4_reg_addr                                     "0xB809CEB4"
#define  KME_DEHALO2_KME_DEHALO2_B4_reg                                          0xB809CEB4
#define  KME_DEHALO2_KME_DEHALO2_B4_inst_addr                                    "0x0024"
#define  set_KME_DEHALO2_KME_DEHALO2_B4_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_B4_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_B4_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_B4_reg))
#define  KME_DEHALO2_KME_DEHALO2_B4_dh_rt1_mvxfb_y2_shift                        (0)
#define  KME_DEHALO2_KME_DEHALO2_B4_dh_rt1_mvxfb_y2_mask                         (0x000003FF)
#define  KME_DEHALO2_KME_DEHALO2_B4_dh_rt1_mvxfb_y2(data)                        (0x000003FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_B4_get_dh_rt1_mvxfb_y2(data)                    (0x000003FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_B8                                             0x1809CEB8
#define  KME_DEHALO2_KME_DEHALO2_B8_reg_addr                                     "0xB809CEB8"
#define  KME_DEHALO2_KME_DEHALO2_B8_reg                                          0xB809CEB8
#define  KME_DEHALO2_KME_DEHALO2_B8_inst_addr                                    "0x0025"
#define  set_KME_DEHALO2_KME_DEHALO2_B8_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_B8_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_B8_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_B8_reg))
#define  KME_DEHALO2_KME_DEHALO2_B8_dh_rt1_mvxfb_s3_shift                        (16)
#define  KME_DEHALO2_KME_DEHALO2_B8_dh_rt1_mvxfb_s2_shift                        (8)
#define  KME_DEHALO2_KME_DEHALO2_B8_dh_rt1_mvxfb_s1_shift                        (0)
#define  KME_DEHALO2_KME_DEHALO2_B8_dh_rt1_mvxfb_s3_mask                         (0x00FF0000)
#define  KME_DEHALO2_KME_DEHALO2_B8_dh_rt1_mvxfb_s2_mask                         (0x0000FF00)
#define  KME_DEHALO2_KME_DEHALO2_B8_dh_rt1_mvxfb_s1_mask                         (0x000000FF)
#define  KME_DEHALO2_KME_DEHALO2_B8_dh_rt1_mvxfb_s3(data)                        (0x00FF0000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_B8_dh_rt1_mvxfb_s2(data)                        (0x0000FF00&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO2_B8_dh_rt1_mvxfb_s1(data)                        (0x000000FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_B8_get_dh_rt1_mvxfb_s3(data)                    ((0x00FF0000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_B8_get_dh_rt1_mvxfb_s2(data)                    ((0x0000FF00&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO2_B8_get_dh_rt1_mvxfb_s1(data)                    (0x000000FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_BC                                             0x1809CEBC
#define  KME_DEHALO2_KME_DEHALO2_BC_reg_addr                                     "0xB809CEBC"
#define  KME_DEHALO2_KME_DEHALO2_BC_reg                                          0xB809CEBC
#define  KME_DEHALO2_KME_DEHALO2_BC_inst_addr                                    "0x0026"
#define  set_KME_DEHALO2_KME_DEHALO2_BC_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_BC_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_BC_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_BC_reg))
#define  KME_DEHALO2_KME_DEHALO2_BC_dh_rt1_mvyfb_y1_shift                        (18)
#define  KME_DEHALO2_KME_DEHALO2_BC_dh_rt1_mvyfb_x2_shift                        (9)
#define  KME_DEHALO2_KME_DEHALO2_BC_dh_rt1_mvyfb_x1_shift                        (0)
#define  KME_DEHALO2_KME_DEHALO2_BC_dh_rt1_mvyfb_y1_mask                         (0x07FC0000)
#define  KME_DEHALO2_KME_DEHALO2_BC_dh_rt1_mvyfb_x2_mask                         (0x0003FE00)
#define  KME_DEHALO2_KME_DEHALO2_BC_dh_rt1_mvyfb_x1_mask                         (0x000001FF)
#define  KME_DEHALO2_KME_DEHALO2_BC_dh_rt1_mvyfb_y1(data)                        (0x07FC0000&((data)<<18))
#define  KME_DEHALO2_KME_DEHALO2_BC_dh_rt1_mvyfb_x2(data)                        (0x0003FE00&((data)<<9))
#define  KME_DEHALO2_KME_DEHALO2_BC_dh_rt1_mvyfb_x1(data)                        (0x000001FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_BC_get_dh_rt1_mvyfb_y1(data)                    ((0x07FC0000&(data))>>18)
#define  KME_DEHALO2_KME_DEHALO2_BC_get_dh_rt1_mvyfb_x2(data)                    ((0x0003FE00&(data))>>9)
#define  KME_DEHALO2_KME_DEHALO2_BC_get_dh_rt1_mvyfb_x1(data)                    (0x000001FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_C0                                             0x1809CEC0
#define  KME_DEHALO2_KME_DEHALO2_C0_reg_addr                                     "0xB809CEC0"
#define  KME_DEHALO2_KME_DEHALO2_C0_reg                                          0xB809CEC0
#define  KME_DEHALO2_KME_DEHALO2_C0_inst_addr                                    "0x0027"
#define  set_KME_DEHALO2_KME_DEHALO2_C0_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_C0_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_C0_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_C0_reg))
#define  KME_DEHALO2_KME_DEHALO2_C0_dh_rt1_mvyfb_y2_shift                        (0)
#define  KME_DEHALO2_KME_DEHALO2_C0_dh_rt1_mvyfb_y2_mask                         (0x000001FF)
#define  KME_DEHALO2_KME_DEHALO2_C0_dh_rt1_mvyfb_y2(data)                        (0x000001FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_C0_get_dh_rt1_mvyfb_y2(data)                    (0x000001FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_C4                                             0x1809CEC4
#define  KME_DEHALO2_KME_DEHALO2_C4_reg_addr                                     "0xB809CEC4"
#define  KME_DEHALO2_KME_DEHALO2_C4_reg                                          0xB809CEC4
#define  KME_DEHALO2_KME_DEHALO2_C4_inst_addr                                    "0x0028"
#define  set_KME_DEHALO2_KME_DEHALO2_C4_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_C4_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_C4_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_C4_reg))
#define  KME_DEHALO2_KME_DEHALO2_C4_dh_rt1_mvxfb_cut_thr_shift                   (24)
#define  KME_DEHALO2_KME_DEHALO2_C4_dh_rt1_mvyfb_s3_shift                        (16)
#define  KME_DEHALO2_KME_DEHALO2_C4_dh_rt1_mvyfb_s2_shift                        (8)
#define  KME_DEHALO2_KME_DEHALO2_C4_dh_rt1_mvyfb_s1_shift                        (0)
#define  KME_DEHALO2_KME_DEHALO2_C4_dh_rt1_mvxfb_cut_thr_mask                    (0xFF000000)
#define  KME_DEHALO2_KME_DEHALO2_C4_dh_rt1_mvyfb_s3_mask                         (0x00FF0000)
#define  KME_DEHALO2_KME_DEHALO2_C4_dh_rt1_mvyfb_s2_mask                         (0x0000FF00)
#define  KME_DEHALO2_KME_DEHALO2_C4_dh_rt1_mvyfb_s1_mask                         (0x000000FF)
#define  KME_DEHALO2_KME_DEHALO2_C4_dh_rt1_mvxfb_cut_thr(data)                   (0xFF000000&((data)<<24))
#define  KME_DEHALO2_KME_DEHALO2_C4_dh_rt1_mvyfb_s3(data)                        (0x00FF0000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_C4_dh_rt1_mvyfb_s2(data)                        (0x0000FF00&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO2_C4_dh_rt1_mvyfb_s1(data)                        (0x000000FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_C4_get_dh_rt1_mvxfb_cut_thr(data)               ((0xFF000000&(data))>>24)
#define  KME_DEHALO2_KME_DEHALO2_C4_get_dh_rt1_mvyfb_s3(data)                    ((0x00FF0000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_C4_get_dh_rt1_mvyfb_s2(data)                    ((0x0000FF00&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO2_C4_get_dh_rt1_mvyfb_s1(data)                    (0x000000FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_C8                                             0x1809CEC8
#define  KME_DEHALO2_KME_DEHALO2_C8_reg_addr                                     "0xB809CEC8"
#define  KME_DEHALO2_KME_DEHALO2_C8_reg                                          0xB809CEC8
#define  KME_DEHALO2_KME_DEHALO2_C8_inst_addr                                    "0x0029"
#define  set_KME_DEHALO2_KME_DEHALO2_C8_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_C8_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_C8_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_C8_reg))
#define  KME_DEHALO2_KME_DEHALO2_C8_dh_rt1_sadmv_bld_coef_shift                  (16)
#define  KME_DEHALO2_KME_DEHALO2_C8_dh_rt1_mv_bld_coef_shift                     (8)
#define  KME_DEHALO2_KME_DEHALO2_C8_dh_rt1_mvyfb_cut_thr_shift                   (0)
#define  KME_DEHALO2_KME_DEHALO2_C8_dh_rt1_sadmv_bld_coef_mask                   (0x00FF0000)
#define  KME_DEHALO2_KME_DEHALO2_C8_dh_rt1_mv_bld_coef_mask                      (0x0000FF00)
#define  KME_DEHALO2_KME_DEHALO2_C8_dh_rt1_mvyfb_cut_thr_mask                    (0x000000FF)
#define  KME_DEHALO2_KME_DEHALO2_C8_dh_rt1_sadmv_bld_coef(data)                  (0x00FF0000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_C8_dh_rt1_mv_bld_coef(data)                     (0x0000FF00&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO2_C8_dh_rt1_mvyfb_cut_thr(data)                   (0x000000FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_C8_get_dh_rt1_sadmv_bld_coef(data)              ((0x00FF0000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_C8_get_dh_rt1_mv_bld_coef(data)                 ((0x0000FF00&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO2_C8_get_dh_rt1_mvyfb_cut_thr(data)               (0x000000FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_CC                                             0x1809CECC
#define  KME_DEHALO2_KME_DEHALO2_CC_reg_addr                                     "0xB809CECC"
#define  KME_DEHALO2_KME_DEHALO2_CC_reg                                          0xB809CECC
#define  KME_DEHALO2_KME_DEHALO2_CC_inst_addr                                    "0x002A"
#define  set_KME_DEHALO2_KME_DEHALO2_CC_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_CC_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_CC_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_CC_reg))
#define  KME_DEHALO2_KME_DEHALO2_CC_dh_phflt_mvxfb_y1_shift                      (20)
#define  KME_DEHALO2_KME_DEHALO2_CC_dh_phflt_mvxfb_x2_shift                      (10)
#define  KME_DEHALO2_KME_DEHALO2_CC_dh_phflt_mvxfb_x1_shift                      (0)
#define  KME_DEHALO2_KME_DEHALO2_CC_dh_phflt_mvxfb_y1_mask                       (0x3FF00000)
#define  KME_DEHALO2_KME_DEHALO2_CC_dh_phflt_mvxfb_x2_mask                       (0x000FFC00)
#define  KME_DEHALO2_KME_DEHALO2_CC_dh_phflt_mvxfb_x1_mask                       (0x000003FF)
#define  KME_DEHALO2_KME_DEHALO2_CC_dh_phflt_mvxfb_y1(data)                      (0x3FF00000&((data)<<20))
#define  KME_DEHALO2_KME_DEHALO2_CC_dh_phflt_mvxfb_x2(data)                      (0x000FFC00&((data)<<10))
#define  KME_DEHALO2_KME_DEHALO2_CC_dh_phflt_mvxfb_x1(data)                      (0x000003FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_CC_get_dh_phflt_mvxfb_y1(data)                  ((0x3FF00000&(data))>>20)
#define  KME_DEHALO2_KME_DEHALO2_CC_get_dh_phflt_mvxfb_x2(data)                  ((0x000FFC00&(data))>>10)
#define  KME_DEHALO2_KME_DEHALO2_CC_get_dh_phflt_mvxfb_x1(data)                  (0x000003FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_D0                                             0x1809CED0
#define  KME_DEHALO2_KME_DEHALO2_D0_reg_addr                                     "0xB809CED0"
#define  KME_DEHALO2_KME_DEHALO2_D0_reg                                          0xB809CED0
#define  KME_DEHALO2_KME_DEHALO2_D0_inst_addr                                    "0x002B"
#define  set_KME_DEHALO2_KME_DEHALO2_D0_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_D0_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_D0_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_D0_reg))
#define  KME_DEHALO2_KME_DEHALO2_D0_dh_phflt_mvxfb_y2_shift                      (0)
#define  KME_DEHALO2_KME_DEHALO2_D0_dh_phflt_mvxfb_y2_mask                       (0x000003FF)
#define  KME_DEHALO2_KME_DEHALO2_D0_dh_phflt_mvxfb_y2(data)                      (0x000003FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_D0_get_dh_phflt_mvxfb_y2(data)                  (0x000003FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_D4                                             0x1809CED4
#define  KME_DEHALO2_KME_DEHALO2_D4_reg_addr                                     "0xB809CED4"
#define  KME_DEHALO2_KME_DEHALO2_D4_reg                                          0xB809CED4
#define  KME_DEHALO2_KME_DEHALO2_D4_inst_addr                                    "0x002C"
#define  set_KME_DEHALO2_KME_DEHALO2_D4_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_D4_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_D4_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_D4_reg))
#define  KME_DEHALO2_KME_DEHALO2_D4_dh_phflt_mvxfb_s3_shift                      (16)
#define  KME_DEHALO2_KME_DEHALO2_D4_dh_phflt_mvxfb_s2_shift                      (8)
#define  KME_DEHALO2_KME_DEHALO2_D4_dh_phflt_mvxfb_s1_shift                      (0)
#define  KME_DEHALO2_KME_DEHALO2_D4_dh_phflt_mvxfb_s3_mask                       (0x00FF0000)
#define  KME_DEHALO2_KME_DEHALO2_D4_dh_phflt_mvxfb_s2_mask                       (0x0000FF00)
#define  KME_DEHALO2_KME_DEHALO2_D4_dh_phflt_mvxfb_s1_mask                       (0x000000FF)
#define  KME_DEHALO2_KME_DEHALO2_D4_dh_phflt_mvxfb_s3(data)                      (0x00FF0000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_D4_dh_phflt_mvxfb_s2(data)                      (0x0000FF00&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO2_D4_dh_phflt_mvxfb_s1(data)                      (0x000000FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_D4_get_dh_phflt_mvxfb_s3(data)                  ((0x00FF0000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_D4_get_dh_phflt_mvxfb_s2(data)                  ((0x0000FF00&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO2_D4_get_dh_phflt_mvxfb_s1(data)                  (0x000000FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_D8                                             0x1809CED8
#define  KME_DEHALO2_KME_DEHALO2_D8_reg_addr                                     "0xB809CED8"
#define  KME_DEHALO2_KME_DEHALO2_D8_reg                                          0xB809CED8
#define  KME_DEHALO2_KME_DEHALO2_D8_inst_addr                                    "0x002D"
#define  set_KME_DEHALO2_KME_DEHALO2_D8_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_D8_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_D8_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_D8_reg))
#define  KME_DEHALO2_KME_DEHALO2_D8_dh_phflt_mvyfb_y1_shift                      (18)
#define  KME_DEHALO2_KME_DEHALO2_D8_dh_phflt_mvyfb_x2_shift                      (9)
#define  KME_DEHALO2_KME_DEHALO2_D8_dh_phflt_mvyfb_x1_shift                      (0)
#define  KME_DEHALO2_KME_DEHALO2_D8_dh_phflt_mvyfb_y1_mask                       (0x07FC0000)
#define  KME_DEHALO2_KME_DEHALO2_D8_dh_phflt_mvyfb_x2_mask                       (0x0003FE00)
#define  KME_DEHALO2_KME_DEHALO2_D8_dh_phflt_mvyfb_x1_mask                       (0x000001FF)
#define  KME_DEHALO2_KME_DEHALO2_D8_dh_phflt_mvyfb_y1(data)                      (0x07FC0000&((data)<<18))
#define  KME_DEHALO2_KME_DEHALO2_D8_dh_phflt_mvyfb_x2(data)                      (0x0003FE00&((data)<<9))
#define  KME_DEHALO2_KME_DEHALO2_D8_dh_phflt_mvyfb_x1(data)                      (0x000001FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_D8_get_dh_phflt_mvyfb_y1(data)                  ((0x07FC0000&(data))>>18)
#define  KME_DEHALO2_KME_DEHALO2_D8_get_dh_phflt_mvyfb_x2(data)                  ((0x0003FE00&(data))>>9)
#define  KME_DEHALO2_KME_DEHALO2_D8_get_dh_phflt_mvyfb_x1(data)                  (0x000001FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_DC                                             0x1809CEDC
#define  KME_DEHALO2_KME_DEHALO2_DC_reg_addr                                     "0xB809CEDC"
#define  KME_DEHALO2_KME_DEHALO2_DC_reg                                          0xB809CEDC
#define  KME_DEHALO2_KME_DEHALO2_DC_inst_addr                                    "0x002E"
#define  set_KME_DEHALO2_KME_DEHALO2_DC_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_DC_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_DC_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_DC_reg))
#define  KME_DEHALO2_KME_DEHALO2_DC_dh_phflt_mvyfb_y2_shift                      (0)
#define  KME_DEHALO2_KME_DEHALO2_DC_dh_phflt_mvyfb_y2_mask                       (0x000001FF)
#define  KME_DEHALO2_KME_DEHALO2_DC_dh_phflt_mvyfb_y2(data)                      (0x000001FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_DC_get_dh_phflt_mvyfb_y2(data)                  (0x000001FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_E0                                             0x1809CEE0
#define  KME_DEHALO2_KME_DEHALO2_E0_reg_addr                                     "0xB809CEE0"
#define  KME_DEHALO2_KME_DEHALO2_E0_reg                                          0xB809CEE0
#define  KME_DEHALO2_KME_DEHALO2_E0_inst_addr                                    "0x002F"
#define  set_KME_DEHALO2_KME_DEHALO2_E0_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_E0_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_E0_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_E0_reg))
#define  KME_DEHALO2_KME_DEHALO2_E0_dh_phflt_mvxfb_cut_thr_shift                 (24)
#define  KME_DEHALO2_KME_DEHALO2_E0_dh_phflt_mvyfb_s3_shift                      (16)
#define  KME_DEHALO2_KME_DEHALO2_E0_dh_phflt_mvyfb_s2_shift                      (8)
#define  KME_DEHALO2_KME_DEHALO2_E0_dh_phflt_mvyfb_s1_shift                      (0)
#define  KME_DEHALO2_KME_DEHALO2_E0_dh_phflt_mvxfb_cut_thr_mask                  (0xFF000000)
#define  KME_DEHALO2_KME_DEHALO2_E0_dh_phflt_mvyfb_s3_mask                       (0x00FF0000)
#define  KME_DEHALO2_KME_DEHALO2_E0_dh_phflt_mvyfb_s2_mask                       (0x0000FF00)
#define  KME_DEHALO2_KME_DEHALO2_E0_dh_phflt_mvyfb_s1_mask                       (0x000000FF)
#define  KME_DEHALO2_KME_DEHALO2_E0_dh_phflt_mvxfb_cut_thr(data)                 (0xFF000000&((data)<<24))
#define  KME_DEHALO2_KME_DEHALO2_E0_dh_phflt_mvyfb_s3(data)                      (0x00FF0000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_E0_dh_phflt_mvyfb_s2(data)                      (0x0000FF00&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO2_E0_dh_phflt_mvyfb_s1(data)                      (0x000000FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_E0_get_dh_phflt_mvxfb_cut_thr(data)             ((0xFF000000&(data))>>24)
#define  KME_DEHALO2_KME_DEHALO2_E0_get_dh_phflt_mvyfb_s3(data)                  ((0x00FF0000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_E0_get_dh_phflt_mvyfb_s2(data)                  ((0x0000FF00&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO2_E0_get_dh_phflt_mvyfb_s1(data)                  (0x000000FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_E4                                             0x1809CEE4
#define  KME_DEHALO2_KME_DEHALO2_E4_reg_addr                                     "0xB809CEE4"
#define  KME_DEHALO2_KME_DEHALO2_E4_reg                                          0xB809CEE4
#define  KME_DEHALO2_KME_DEHALO2_E4_inst_addr                                    "0x0030"
#define  set_KME_DEHALO2_KME_DEHALO2_E4_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_E4_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_E4_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_E4_reg))
#define  KME_DEHALO2_KME_DEHALO2_E4_dh_phflt_sadmv_bld_coef_shift                (16)
#define  KME_DEHALO2_KME_DEHALO2_E4_dh_phflt_mv_bld_coef_shift                   (8)
#define  KME_DEHALO2_KME_DEHALO2_E4_dh_phflt_mvyfb_cut_thr_shift                 (0)
#define  KME_DEHALO2_KME_DEHALO2_E4_dh_phflt_sadmv_bld_coef_mask                 (0x00FF0000)
#define  KME_DEHALO2_KME_DEHALO2_E4_dh_phflt_mv_bld_coef_mask                    (0x0000FF00)
#define  KME_DEHALO2_KME_DEHALO2_E4_dh_phflt_mvyfb_cut_thr_mask                  (0x000000FF)
#define  KME_DEHALO2_KME_DEHALO2_E4_dh_phflt_sadmv_bld_coef(data)                (0x00FF0000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_E4_dh_phflt_mv_bld_coef(data)                   (0x0000FF00&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO2_E4_dh_phflt_mvyfb_cut_thr(data)                 (0x000000FF&(data))
#define  KME_DEHALO2_KME_DEHALO2_E4_get_dh_phflt_sadmv_bld_coef(data)            ((0x00FF0000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_E4_get_dh_phflt_mv_bld_coef(data)               ((0x0000FF00&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO2_E4_get_dh_phflt_mvyfb_cut_thr(data)             (0x000000FF&(data))

#define  KME_DEHALO2_KME_DEHALO2_E8                                             0x1809CEE8
#define  KME_DEHALO2_KME_DEHALO2_E8_reg_addr                                     "0xB809CEE8"
#define  KME_DEHALO2_KME_DEHALO2_E8_reg                                          0xB809CEE8
#define  KME_DEHALO2_KME_DEHALO2_E8_inst_addr                                    "0x0031"
#define  set_KME_DEHALO2_KME_DEHALO2_E8_reg(data)                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_E8_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_E8_reg                                      (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_E8_reg))
#define  KME_DEHALO2_KME_DEHALO2_E8_tmv_mode_rg2_shift                           (25)
#define  KME_DEHALO2_KME_DEHALO2_E8_mv_d_th_rg2_shift                            (19)
#define  KME_DEHALO2_KME_DEHALO2_E8_mv_d_diff_th_rg2_shift                       (13)
#define  KME_DEHALO2_KME_DEHALO2_E8_tmv_bypass_rg2_shift                         (12)
#define  KME_DEHALO2_KME_DEHALO2_E8_smv_bypass_rg2_shift                         (9)
#define  KME_DEHALO2_KME_DEHALO2_E8_mvd_bypass_rg2_shift                         (6)
#define  KME_DEHALO2_KME_DEHALO2_E8_ver_bypass_rg2_shift                         (3)
#define  KME_DEHALO2_KME_DEHALO2_E8_hor_bypass_rg2_shift                         (0)
#define  KME_DEHALO2_KME_DEHALO2_E8_tmv_mode_rg2_mask                            (0x06000000)
#define  KME_DEHALO2_KME_DEHALO2_E8_mv_d_th_rg2_mask                             (0x01F80000)
#define  KME_DEHALO2_KME_DEHALO2_E8_mv_d_diff_th_rg2_mask                        (0x0007E000)
#define  KME_DEHALO2_KME_DEHALO2_E8_tmv_bypass_rg2_mask                          (0x00001000)
#define  KME_DEHALO2_KME_DEHALO2_E8_smv_bypass_rg2_mask                          (0x00000E00)
#define  KME_DEHALO2_KME_DEHALO2_E8_mvd_bypass_rg2_mask                          (0x000001C0)
#define  KME_DEHALO2_KME_DEHALO2_E8_ver_bypass_rg2_mask                          (0x00000038)
#define  KME_DEHALO2_KME_DEHALO2_E8_hor_bypass_rg2_mask                          (0x00000007)
#define  KME_DEHALO2_KME_DEHALO2_E8_tmv_mode_rg2(data)                           (0x06000000&((data)<<25))
#define  KME_DEHALO2_KME_DEHALO2_E8_mv_d_th_rg2(data)                            (0x01F80000&((data)<<19))
#define  KME_DEHALO2_KME_DEHALO2_E8_mv_d_diff_th_rg2(data)                       (0x0007E000&((data)<<13))
#define  KME_DEHALO2_KME_DEHALO2_E8_tmv_bypass_rg2(data)                         (0x00001000&((data)<<12))
#define  KME_DEHALO2_KME_DEHALO2_E8_smv_bypass_rg2(data)                         (0x00000E00&((data)<<9))
#define  KME_DEHALO2_KME_DEHALO2_E8_mvd_bypass_rg2(data)                         (0x000001C0&((data)<<6))
#define  KME_DEHALO2_KME_DEHALO2_E8_ver_bypass_rg2(data)                         (0x00000038&((data)<<3))
#define  KME_DEHALO2_KME_DEHALO2_E8_hor_bypass_rg2(data)                         (0x00000007&(data))
#define  KME_DEHALO2_KME_DEHALO2_E8_get_tmv_mode_rg2(data)                       ((0x06000000&(data))>>25)
#define  KME_DEHALO2_KME_DEHALO2_E8_get_mv_d_th_rg2(data)                        ((0x01F80000&(data))>>19)
#define  KME_DEHALO2_KME_DEHALO2_E8_get_mv_d_diff_th_rg2(data)                   ((0x0007E000&(data))>>13)
#define  KME_DEHALO2_KME_DEHALO2_E8_get_tmv_bypass_rg2(data)                     ((0x00001000&(data))>>12)
#define  KME_DEHALO2_KME_DEHALO2_E8_get_smv_bypass_rg2(data)                     ((0x00000E00&(data))>>9)
#define  KME_DEHALO2_KME_DEHALO2_E8_get_mvd_bypass_rg2(data)                     ((0x000001C0&(data))>>6)
#define  KME_DEHALO2_KME_DEHALO2_E8_get_ver_bypass_rg2(data)                     ((0x00000038&(data))>>3)
#define  KME_DEHALO2_KME_DEHALO2_E8_get_hor_bypass_rg2(data)                     (0x00000007&(data))

#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0                                 0x1809CEEC
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_reg_addr                         "0xB809CEEC"
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_reg                              0xB809CEEC
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_inst_addr                        "0x0032"
#define  set_KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_reg(data)                    (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_reg                          (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_reg))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_dh_mv_edge_mvd_th_limit_shift    (27)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_pfv_cent_pos_shift_shift    (24)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_pfv_edge_apl_diff_th_shift  (18)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_dh_mv_edge_unorder_en_shift      (17)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_pfv_edge_prot_en_shift      (16)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_pfv_edge_max_min_apl_gain_shift (13)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_dh_post_proc_pfv_en_shift        (12)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_rt1_gmv_near_gain_shift     (9)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_pfv_cond_mvd_bypass_shift   (8)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_rt1_gmv_near_th_max_shift   (3)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_rt1_mv_nearbg_mode_shift    (1)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_rt1_pfv_diff_bypass_shift   (0)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_dh_mv_edge_mvd_th_limit_mask     (0xF8000000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_pfv_cent_pos_shift_mask     (0x07000000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_pfv_edge_apl_diff_th_mask   (0x00FC0000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_dh_mv_edge_unorder_en_mask       (0x00020000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_pfv_edge_prot_en_mask       (0x00010000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_pfv_edge_max_min_apl_gain_mask (0x0000E000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_dh_post_proc_pfv_en_mask         (0x00001000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_rt1_gmv_near_gain_mask      (0x00000E00)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_pfv_cond_mvd_bypass_mask    (0x00000100)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_rt1_gmv_near_th_max_mask    (0x000000F8)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_rt1_mv_nearbg_mode_mask     (0x00000006)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_rt1_pfv_diff_bypass_mask    (0x00000001)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_dh_mv_edge_mvd_th_limit(data)    (0xF8000000&((data)<<27))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_pfv_cent_pos_shift(data)    (0x07000000&((data)<<24))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_pfv_edge_apl_diff_th(data)  (0x00FC0000&((data)<<18))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_dh_mv_edge_unorder_en(data)      (0x00020000&((data)<<17))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_pfv_edge_prot_en(data)      (0x00010000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_pfv_edge_max_min_apl_gain(data) (0x0000E000&((data)<<13))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_dh_post_proc_pfv_en(data)        (0x00001000&((data)<<12))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_rt1_gmv_near_gain(data)     (0x00000E00&((data)<<9))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_pfv_cond_mvd_bypass(data)   (0x00000100&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_rt1_gmv_near_th_max(data)   (0x000000F8&((data)<<3))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_rt1_mv_nearbg_mode(data)    (0x00000006&((data)<<1))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_post_rt1_pfv_diff_bypass(data)   (0x00000001&(data))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_get_dh_mv_edge_mvd_th_limit(data) ((0xF8000000&(data))>>27)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_get_post_pfv_cent_pos_shift(data) ((0x07000000&(data))>>24)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_get_post_pfv_edge_apl_diff_th(data) ((0x00FC0000&(data))>>18)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_get_dh_mv_edge_unorder_en(data)  ((0x00020000&(data))>>17)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_get_post_pfv_edge_prot_en(data)  ((0x00010000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_get_post_pfv_edge_max_min_apl_gain(data) ((0x0000E000&(data))>>13)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_get_dh_post_proc_pfv_en(data)    ((0x00001000&(data))>>12)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_get_post_rt1_gmv_near_gain(data) ((0x00000E00&(data))>>9)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_get_post_pfv_cond_mvd_bypass(data) ((0x00000100&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_get_post_rt1_gmv_near_th_max(data) ((0x000000F8&(data))>>3)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_get_post_rt1_mv_nearbg_mode(data) ((0x00000006&(data))>>1)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_0_get_post_rt1_pfv_diff_bypass(data) (0x00000001&(data))

#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1                                 0x1809CEF0
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_reg_addr                         "0xB809CEF0"
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_reg                              0xB809CEF0
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_inst_addr                        "0x0033"
#define  set_KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_reg(data)                    (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_reg                          (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_reg))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_bg_move_mvth_shift      (27)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_edge_max_min_apl_gain_shift (24)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_mvab_range_shift        (19)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_mv_nearbg_bypass_shift  (18)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_cond_mvd_bypass_shift   (17)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_rt_sr_shift             (13)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_mvab_diff_range_shift   (8)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_edge_apl_diff_th_shift  (2)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_dh_rt1_edge_prot_en_shift        (1)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_dh_post_proc_rt1_en_shift        (0)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_bg_move_mvth_mask       (0xF8000000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_edge_max_min_apl_gain_mask (0x07000000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_mvab_range_mask         (0x00F80000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_mv_nearbg_bypass_mask   (0x00040000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_cond_mvd_bypass_mask    (0x00020000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_rt_sr_mask              (0x0001E000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_mvab_diff_range_mask    (0x00001F00)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_edge_apl_diff_th_mask   (0x000000FC)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_dh_rt1_edge_prot_en_mask         (0x00000002)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_dh_post_proc_rt1_en_mask         (0x00000001)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_bg_move_mvth(data)      (0xF8000000&((data)<<27))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_edge_max_min_apl_gain(data) (0x07000000&((data)<<24))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_mvab_range(data)        (0x00F80000&((data)<<19))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_mv_nearbg_bypass(data)  (0x00040000&((data)<<18))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_cond_mvd_bypass(data)   (0x00020000&((data)<<17))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_rt_sr(data)             (0x0001E000&((data)<<13))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_mvab_diff_range(data)   (0x00001F00&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_post_rt1_edge_apl_diff_th(data)  (0x000000FC&((data)<<2))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_dh_rt1_edge_prot_en(data)        (0x00000002&((data)<<1))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_dh_post_proc_rt1_en(data)        (0x00000001&(data))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_get_post_rt1_bg_move_mvth(data)  ((0xF8000000&(data))>>27)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_get_post_rt1_edge_max_min_apl_gain(data) ((0x07000000&(data))>>24)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_get_post_rt1_mvab_range(data)    ((0x00F80000&(data))>>19)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_get_post_rt1_mv_nearbg_bypass(data) ((0x00040000&(data))>>18)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_get_post_rt1_cond_mvd_bypass(data) ((0x00020000&(data))>>17)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_get_post_rt1_rt_sr(data)         ((0x0001E000&(data))>>13)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_get_post_rt1_mvab_diff_range(data) ((0x00001F00&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_get_post_rt1_edge_apl_diff_th(data) ((0x000000FC&(data))>>2)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_get_dh_rt1_edge_prot_en(data)    ((0x00000002&(data))>>1)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_1_get_dh_post_proc_rt1_en(data)    (0x00000001&(data))

#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2                                 0x1809CEF4
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_reg_addr                         "0xB809CEF4"
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_reg                              0xB809CEF4
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_inst_addr                        "0x0034"
#define  set_KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_reg(data)                    (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_reg                          (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_reg))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_post_rt1_blk_haloext_shift       (29)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_post_rt1_mvab_onegmv_th_shift    (24)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_mv_edge_mvd_sum_th_gain_shift (21)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_mv_edge_mvd_avg_cnt_shift     (18)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_mv_edge_mvd_ab_sel_shift      (17)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_pfv_cor_by_bgapl_shift        (16)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_occpred_diff_th_shift_shift   (12)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_occpred_diff_th_min_shift     (8)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_occpred_range_shift           (4)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_post_rt1_mvab_onegmv_bypass_shift (3)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_occpred_diff_th_gain_shift    (1)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_occpred_en_shift              (0)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_post_rt1_blk_haloext_mask        (0xE0000000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_post_rt1_mvab_onegmv_th_mask     (0x1F000000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_mv_edge_mvd_sum_th_gain_mask  (0x00E00000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_mv_edge_mvd_avg_cnt_mask      (0x001C0000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_mv_edge_mvd_ab_sel_mask       (0x00020000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_pfv_cor_by_bgapl_mask         (0x00010000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_occpred_diff_th_shift_mask    (0x0000F000)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_occpred_diff_th_min_mask      (0x00000F00)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_occpred_range_mask            (0x000000F0)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_post_rt1_mvab_onegmv_bypass_mask (0x00000008)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_occpred_diff_th_gain_mask     (0x00000006)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_occpred_en_mask               (0x00000001)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_post_rt1_blk_haloext(data)       (0xE0000000&((data)<<29))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_post_rt1_mvab_onegmv_th(data)    (0x1F000000&((data)<<24))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_mv_edge_mvd_sum_th_gain(data) (0x00E00000&((data)<<21))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_mv_edge_mvd_avg_cnt(data)     (0x001C0000&((data)<<18))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_mv_edge_mvd_ab_sel(data)      (0x00020000&((data)<<17))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_pfv_cor_by_bgapl(data)        (0x00010000&((data)<<16))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_occpred_diff_th_shift(data)   (0x0000F000&((data)<<12))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_occpred_diff_th_min(data)     (0x00000F00&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_occpred_range(data)           (0x000000F0&((data)<<4))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_post_rt1_mvab_onegmv_bypass(data) (0x00000008&((data)<<3))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_occpred_diff_th_gain(data)    (0x00000006&((data)<<1))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_dh_occpred_en(data)              (0x00000001&(data))
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_get_post_rt1_blk_haloext(data)   ((0xE0000000&(data))>>29)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_get_post_rt1_mvab_onegmv_th(data) ((0x1F000000&(data))>>24)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_get_dh_mv_edge_mvd_sum_th_gain(data) ((0x00E00000&(data))>>21)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_get_dh_mv_edge_mvd_avg_cnt(data) ((0x001C0000&(data))>>18)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_get_dh_mv_edge_mvd_ab_sel(data)  ((0x00020000&(data))>>17)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_get_dh_pfv_cor_by_bgapl(data)    ((0x00010000&(data))>>16)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_get_dh_occpred_diff_th_shift(data) ((0x0000F000&(data))>>12)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_get_dh_occpred_diff_th_min(data) ((0x00000F00&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_get_dh_occpred_range(data)       ((0x000000F0&(data))>>4)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_get_post_rt1_mvab_onegmv_bypass(data) ((0x00000008&(data))>>3)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_get_dh_occpred_diff_th_gain(data) ((0x00000006&(data))>>1)
#define  KME_DEHALO2_KME_DEHALO2_POST_PFV_RT1_2_get_dh_occpred_en(data)          (0x00000001&(data))

#define  KME_DEHALO2_KME_DEHALO2_HIGH_DET                                       0x1809CE5C
#define  KME_DEHALO2_KME_DEHALO2_HIGH_DET_reg_addr                               "0xB809CE5C"
#define  KME_DEHALO2_KME_DEHALO2_HIGH_DET_reg                                    0xB809CE5C
#define  KME_DEHALO2_KME_DEHALO2_HIGH_DET_inst_addr                              "0x0035"
#define  set_KME_DEHALO2_KME_DEHALO2_HIGH_DET_reg(data)                          (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_HIGH_DET_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO2_HIGH_DET_reg                                (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO2_HIGH_DET_reg))
#define  KME_DEHALO2_KME_DEHALO2_HIGH_DET_dh_high_det_en_shift                   (0)
#define  KME_DEHALO2_KME_DEHALO2_HIGH_DET_dh_high_det_en_mask                    (0x00000001)
#define  KME_DEHALO2_KME_DEHALO2_HIGH_DET_dh_high_det_en(data)                   (0x00000001&(data))
#define  KME_DEHALO2_KME_DEHALO2_HIGH_DET_get_dh_high_det_en(data)               (0x00000001&(data))

#define  KME_DEHALO2_DH_OCCL_EXTEND_0                                           0x1809CE60
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_reg_addr                                   "0xB809CE60"
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_reg                                        0xB809CE60
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_inst_addr                                  "0x0036"
#define  set_KME_DEHALO2_DH_OCCL_EXTEND_0_reg(data)                              (*((volatile unsigned int*)KME_DEHALO2_DH_OCCL_EXTEND_0_reg)=data)
#define  get_KME_DEHALO2_DH_OCCL_EXTEND_0_reg                                    (*((volatile unsigned int*)KME_DEHALO2_DH_OCCL_EXTEND_0_reg))
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_fg_ucov_y_range_shift          (27)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_fg_ucov_x_range_shift          (24)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_fg_cov_y_range_shift           (19)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_fg_cov_x_range_shift           (16)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_bg_ucov_y_range_shift          (12)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_bg_ucov_x_range_shift          (9)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_mv_sync_en_shift               (8)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_bg_cov_y_range_shift           (5)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_bg_cov_x_range_shift           (2)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_mode_shift                     (0)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_fg_ucov_y_range_mask           (0x38000000)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_fg_ucov_x_range_mask           (0x07000000)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_fg_cov_y_range_mask            (0x00380000)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_fg_cov_x_range_mask            (0x00070000)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_bg_ucov_y_range_mask           (0x00007000)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_bg_ucov_x_range_mask           (0x00000E00)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_mv_sync_en_mask                (0x00000100)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_bg_cov_y_range_mask            (0x000000E0)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_bg_cov_x_range_mask            (0x0000001C)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_mode_mask                      (0x00000003)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_fg_ucov_y_range(data)          (0x38000000&((data)<<27))
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_fg_ucov_x_range(data)          (0x07000000&((data)<<24))
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_fg_cov_y_range(data)           (0x00380000&((data)<<19))
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_fg_cov_x_range(data)           (0x00070000&((data)<<16))
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_bg_ucov_y_range(data)          (0x00007000&((data)<<12))
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_bg_ucov_x_range(data)          (0x00000E00&((data)<<9))
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_mv_sync_en(data)               (0x00000100&((data)<<8))
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_bg_cov_y_range(data)           (0x000000E0&((data)<<5))
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_bg_cov_x_range(data)           (0x0000001C&((data)<<2))
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_occl_extend_mode(data)                     (0x00000003&(data))
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_get_occl_extend_fg_ucov_y_range(data)      ((0x38000000&(data))>>27)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_get_occl_extend_fg_ucov_x_range(data)      ((0x07000000&(data))>>24)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_get_occl_extend_fg_cov_y_range(data)       ((0x00380000&(data))>>19)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_get_occl_extend_fg_cov_x_range(data)       ((0x00070000&(data))>>16)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_get_occl_extend_bg_ucov_y_range(data)      ((0x00007000&(data))>>12)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_get_occl_extend_bg_ucov_x_range(data)      ((0x00000E00&(data))>>9)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_get_occl_extend_mv_sync_en(data)           ((0x00000100&(data))>>8)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_get_occl_extend_bg_cov_y_range(data)       ((0x000000E0&(data))>>5)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_get_occl_extend_bg_cov_x_range(data)       ((0x0000001C&(data))>>2)
#define  KME_DEHALO2_DH_OCCL_EXTEND_0_get_occl_extend_mode(data)                 (0x00000003&(data))

#define  KME_DEHALO2_DH_OCCL_EXTEND_1                                           0x1809CE64
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_reg_addr                                   "0xB809CE64"
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_reg                                        0xB809CE64
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_inst_addr                                  "0x0037"
#define  set_KME_DEHALO2_DH_OCCL_EXTEND_1_reg(data)                              (*((volatile unsigned int*)KME_DEHALO2_DH_OCCL_EXTEND_1_reg)=data)
#define  get_KME_DEHALO2_DH_OCCL_EXTEND_1_reg                                    (*((volatile unsigned int*)KME_DEHALO2_DH_OCCL_EXTEND_1_reg))
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_smallaplthr_shift                 (24)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_smalldtlthr_shift                 (16)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_mvab_ratio_shift                  (13)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_occlcntthr_shift                  (4)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_mvabdiff_enable_shift             (3)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_smalldtl_enable_shift             (2)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_smallapl_enable_shift             (1)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_neioccl_enable_shift              (0)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_smallaplthr_mask                  (0xFF000000)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_smalldtlthr_mask                  (0x00FF0000)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_mvab_ratio_mask                   (0x00002000)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_occlcntthr_mask                   (0x000001F0)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_mvabdiff_enable_mask              (0x00000008)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_smalldtl_enable_mask              (0x00000004)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_smallapl_enable_mask              (0x00000002)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_neioccl_enable_mask               (0x00000001)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_smallaplthr(data)                 (0xFF000000&((data)<<24))
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_smalldtlthr(data)                 (0x00FF0000&((data)<<16))
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_mvab_ratio(data)                  (0x00002000&((data)<<13))
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_occlcntthr(data)                  (0x000001F0&((data)<<4))
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_mvabdiff_enable(data)             (0x00000008&((data)<<3))
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_smalldtl_enable(data)             (0x00000004&((data)<<2))
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_smallapl_enable(data)             (0x00000002&((data)<<1))
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_postcorr_neioccl_enable(data)              (0x00000001&(data))
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_get_postcorr_smallaplthr(data)             ((0xFF000000&(data))>>24)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_get_postcorr_smalldtlthr(data)             ((0x00FF0000&(data))>>16)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_get_postcorr_mvab_ratio(data)              ((0x00002000&(data))>>13)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_get_postcorr_occlcntthr(data)              ((0x000001F0&(data))>>4)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_get_postcorr_mvabdiff_enable(data)         ((0x00000008&(data))>>3)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_get_postcorr_smalldtl_enable(data)         ((0x00000004&(data))>>2)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_get_postcorr_smallapl_enable(data)         ((0x00000002&(data))>>1)
#define  KME_DEHALO2_DH_OCCL_EXTEND_1_get_postcorr_neioccl_enable(data)          (0x00000001&(data))

#define  KME_DEHALO2_DH_OCCL_EXTEND_2                                           0x1809CE68
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_reg_addr                                   "0xB809CE68"
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_reg                                        0xB809CE68
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_inst_addr                                  "0x0038"
#define  set_KME_DEHALO2_DH_OCCL_EXTEND_2_reg(data)                              (*((volatile unsigned int*)KME_DEHALO2_DH_OCCL_EXTEND_2_reg)=data)
#define  get_KME_DEHALO2_DH_OCCL_EXTEND_2_reg                                    (*((volatile unsigned int*)KME_DEHALO2_DH_OCCL_EXTEND_2_reg))
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_curbgmv_ratio_shift        (12)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_mvabisgmv_ratio_shift      (8)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_mvabdiff_ratio_shift       (4)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_gmvsel_shift               (3)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_curbgmv_enable_shift       (2)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_mvabisgmv_enable_shift     (1)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_mvabdiff_enable_shift      (0)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_curbgmv_ratio_mask         (0x00007000)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_mvabisgmv_ratio_mask       (0x00000300)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_mvabdiff_ratio_mask        (0x00000030)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_gmvsel_mask                (0x00000008)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_curbgmv_enable_mask        (0x00000004)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_mvabisgmv_enable_mask      (0x00000002)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_mvabdiff_enable_mask       (0x00000001)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_curbgmv_ratio(data)        (0x00007000&((data)<<12))
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_mvabisgmv_ratio(data)      (0x00000300&((data)<<8))
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_mvabdiff_ratio(data)       (0x00000030&((data)<<4))
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_gmvsel(data)               (0x00000008&((data)<<3))
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_curbgmv_enable(data)       (0x00000004&((data)<<2))
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_mvabisgmv_enable(data)     (0x00000002&((data)<<1))
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_occlext_erroccl_mvabdiff_enable(data)      (0x00000001&(data))
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_get_occlext_erroccl_curbgmv_ratio(data)    ((0x00007000&(data))>>12)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_get_occlext_erroccl_mvabisgmv_ratio(data)  ((0x00000300&(data))>>8)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_get_occlext_erroccl_mvabdiff_ratio(data)   ((0x00000030&(data))>>4)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_get_occlext_erroccl_gmvsel(data)           ((0x00000008&(data))>>3)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_get_occlext_erroccl_curbgmv_enable(data)   ((0x00000004&(data))>>2)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_get_occlext_erroccl_mvabisgmv_enable(data) ((0x00000002&(data))>>1)
#define  KME_DEHALO2_DH_OCCL_EXTEND_2_get_occlext_erroccl_mvabdiff_enable(data)  (0x00000001&(data))

#define  KME_DEHALO2_DH_OCCL_EXTEND_3                                           0x1809CE6C
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_reg_addr                                   "0xB809CE6C"
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_reg                                        0xB809CE6C
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_inst_addr                                  "0x0039"
#define  set_KME_DEHALO2_DH_OCCL_EXTEND_3_reg(data)                              (*((volatile unsigned int*)KME_DEHALO2_DH_OCCL_EXTEND_3_reg)=data)
#define  get_KME_DEHALO2_DH_OCCL_EXTEND_3_reg                                    (*((volatile unsigned int*)KME_DEHALO2_DH_OCCL_EXTEND_3_reg))
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_apllargethr_shift                  (24)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_sadsmallthr_shift                  (8)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_extmvsel_shift                     (4)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_aplprot_enable_shift               (3)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_occlprot_enable_shift              (2)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_sadprot_enable_shift               (1)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_edgprot_enable_shift               (0)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_apllargethr_mask                   (0xFF000000)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_sadsmallthr_mask                   (0x0000FF00)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_extmvsel_mask                      (0x00000010)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_aplprot_enable_mask                (0x00000008)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_occlprot_enable_mask               (0x00000004)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_sadprot_enable_mask                (0x00000002)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_edgprot_enable_mask                (0x00000001)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_apllargethr(data)                  (0xFF000000&((data)<<24))
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_sadsmallthr(data)                  (0x0000FF00&((data)<<8))
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_extmvsel(data)                     (0x00000010&((data)<<4))
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_aplprot_enable(data)               (0x00000008&((data)<<3))
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_occlprot_enable(data)              (0x00000004&((data)<<2))
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_sadprot_enable(data)               (0x00000002&((data)<<1))
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_occlext_edgprot_enable(data)               (0x00000001&(data))
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_get_occlext_apllargethr(data)              ((0xFF000000&(data))>>24)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_get_occlext_sadsmallthr(data)              ((0x0000FF00&(data))>>8)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_get_occlext_extmvsel(data)                 ((0x00000010&(data))>>4)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_get_occlext_aplprot_enable(data)           ((0x00000008&(data))>>3)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_get_occlext_occlprot_enable(data)          ((0x00000004&(data))>>2)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_get_occlext_sadprot_enable(data)           ((0x00000002&(data))>>1)
#define  KME_DEHALO2_DH_OCCL_EXTEND_3_get_occlext_edgprot_enable(data)           (0x00000001&(data))

#define  KME_DEHALO2_KME_DEHALO_POSTCORR                                        0x1809CE70
#define  KME_DEHALO2_KME_DEHALO_POSTCORR_reg_addr                                "0xB809CE70"
#define  KME_DEHALO2_KME_DEHALO_POSTCORR_reg                                     0xB809CE70
#define  KME_DEHALO2_KME_DEHALO_POSTCORR_inst_addr                               "0x003A"
#define  set_KME_DEHALO2_KME_DEHALO_POSTCORR_reg(data)                           (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO_POSTCORR_reg)=data)
#define  get_KME_DEHALO2_KME_DEHALO_POSTCORR_reg                                 (*((volatile unsigned int*)KME_DEHALO2_KME_DEHALO_POSTCORR_reg))
#define  KME_DEHALO2_KME_DEHALO_POSTCORR_dh_postcorr_saddiff_enable_shift        (8)
#define  KME_DEHALO2_KME_DEHALO_POSTCORR_dh_postcorr_saddiff_cov_cnt_shift       (4)
#define  KME_DEHALO2_KME_DEHALO_POSTCORR_dh_postcorr_saddiff_ucov_cnt_shift      (0)
#define  KME_DEHALO2_KME_DEHALO_POSTCORR_dh_postcorr_saddiff_enable_mask         (0x00000100)
#define  KME_DEHALO2_KME_DEHALO_POSTCORR_dh_postcorr_saddiff_cov_cnt_mask        (0x000000F0)
#define  KME_DEHALO2_KME_DEHALO_POSTCORR_dh_postcorr_saddiff_ucov_cnt_mask       (0x0000000F)
#define  KME_DEHALO2_KME_DEHALO_POSTCORR_dh_postcorr_saddiff_enable(data)        (0x00000100&((data)<<8))
#define  KME_DEHALO2_KME_DEHALO_POSTCORR_dh_postcorr_saddiff_cov_cnt(data)       (0x000000F0&((data)<<4))
#define  KME_DEHALO2_KME_DEHALO_POSTCORR_dh_postcorr_saddiff_ucov_cnt(data)      (0x0000000F&(data))
#define  KME_DEHALO2_KME_DEHALO_POSTCORR_get_dh_postcorr_saddiff_enable(data)    ((0x00000100&(data))>>8)
#define  KME_DEHALO2_KME_DEHALO_POSTCORR_get_dh_postcorr_saddiff_cov_cnt(data)   ((0x000000F0&(data))>>4)
#define  KME_DEHALO2_KME_DEHALO_POSTCORR_get_dh_postcorr_saddiff_ucov_cnt(data)  (0x0000000F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_DEHALO2 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  mv_t_th_rg2:8;
        RBus_UInt32  sad_d_th_rg2:10;
    };
}kme_dehalo2_kme_dehalo2_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  sad_t_th_rg2:10;
        RBus_UInt32  tmv_num_rg2:8;
    };
}kme_dehalo2_kme_dehalo2_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tmv_bypass_rg4:1;
        RBus_UInt32  smv_bypass_rg4:3;
        RBus_UInt32  mvd_bypass_rg4:3;
        RBus_UInt32  ver_bypass_rg4:3;
        RBus_UInt32  hor_bypass_rg4:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  tmv_bypass_rg3:1;
        RBus_UInt32  smv_bypass_rg3:3;
        RBus_UInt32  mvd_bypass_rg3:3;
        RBus_UInt32  ver_bypass_rg3:3;
        RBus_UInt32  hor_bypass_rg3:3;
    };
}kme_dehalo2_kme_dehalo2_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tmv_bypass_rg6:1;
        RBus_UInt32  smv_bypass_rg6:3;
        RBus_UInt32  mvd_bypass_rg6:3;
        RBus_UInt32  ver_bypass_rg6:3;
        RBus_UInt32  hor_bypass_rg6:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  tmv_bypass_rg5:1;
        RBus_UInt32  smv_bypass_rg5:3;
        RBus_UInt32  mvd_bypass_rg5:3;
        RBus_UInt32  ver_bypass_rg5:3;
        RBus_UInt32  hor_bypass_rg5:3;
    };
}kme_dehalo2_kme_dehalo2_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tmv_bypass_rg8:1;
        RBus_UInt32  smv_bypass_rg8:3;
        RBus_UInt32  mvd_bypass_rg8:3;
        RBus_UInt32  ver_bypass_rg8:3;
        RBus_UInt32  hor_bypass_rg8:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  tmv_bypass_rg7:1;
        RBus_UInt32  smv_bypass_rg7:3;
        RBus_UInt32  mvd_bypass_rg7:3;
        RBus_UInt32  ver_bypass_rg7:3;
        RBus_UInt32  hor_bypass_rg7:3;
    };
}kme_dehalo2_kme_dehalo2_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tmv_bypass_rga:1;
        RBus_UInt32  smv_bypass_rga:3;
        RBus_UInt32  mvd_bypass_rga:3;
        RBus_UInt32  ver_bypass_rga:3;
        RBus_UInt32  hor_bypass_rga:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  tmv_bypass_rg9:1;
        RBus_UInt32  smv_bypass_rg9:3;
        RBus_UInt32  mvd_bypass_rg9:3;
        RBus_UInt32  ver_bypass_rg9:3;
        RBus_UInt32  hor_bypass_rg9:3;
    };
}kme_dehalo2_kme_dehalo2_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tmv_bypass_rgc:1;
        RBus_UInt32  smv_bypass_rgc:3;
        RBus_UInt32  mvd_bypass_rgc:3;
        RBus_UInt32  ver_bypass_rgc:3;
        RBus_UInt32  hor_bypass_rgc:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  tmv_bypass_rgb:1;
        RBus_UInt32  smv_bypass_rgb:3;
        RBus_UInt32  mvd_bypass_rgb:3;
        RBus_UInt32  ver_bypass_rgb:3;
        RBus_UInt32  hor_bypass_rgb:3;
    };
}kme_dehalo2_kme_dehalo2_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tmv_bypass_rge:1;
        RBus_UInt32  smv_bypass_rge:3;
        RBus_UInt32  mvd_bypass_rge:3;
        RBus_UInt32  ver_bypass_rge:3;
        RBus_UInt32  hor_bypass_rge:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  tmv_bypass_rgd:1;
        RBus_UInt32  smv_bypass_rgd:3;
        RBus_UInt32  mvd_bypass_rgd:3;
        RBus_UInt32  ver_bypass_rgd:3;
        RBus_UInt32  hor_bypass_rgd:3;
    };
}kme_dehalo2_kme_dehalo2_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dh_show_me2_cal_ph_infk:4;
        RBus_UInt32  dh_show_me2_cal_ph_info:4;
    };
}kme_dehalo2_kme_dehalo2_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_glb_gain_blk_x_intv:7;
        RBus_UInt32  dh_glb_glb_gain_switch:7;
        RBus_UInt32  dh_glb_gain_switch_en:1;
        RBus_UInt32  dh_bv0_bv1_blk_y_intv:8;
        RBus_UInt32  dh_bv0_bv1_blk_x_intv:7;
        RBus_UInt32  dh_glb_bv0_bv1_switch:1;
        RBus_UInt32  dh_bv0_bv1_switch_en:1;
    };
}kme_dehalo2_kme_dehalo2_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dh_glb_gain_blk_y_intv:8;
    };
}kme_dehalo2_kme_dehalo2_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dh_32blk_glb_gain_switch03:7;
        RBus_UInt32  dh_32blk_glb_gain_switch02:7;
        RBus_UInt32  dh_32blk_glb_gain_switch01:7;
        RBus_UInt32  dh_32blk_glb_gain_switch00:7;
    };
}kme_dehalo2_kme_dehalo2_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dh_32blk_glb_gain_switch07:7;
        RBus_UInt32  dh_32blk_glb_gain_switch06:7;
        RBus_UInt32  dh_32blk_glb_gain_switch05:7;
        RBus_UInt32  dh_32blk_glb_gain_switch04:7;
    };
}kme_dehalo2_kme_dehalo2_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dh_32blk_glb_gain_switch13:7;
        RBus_UInt32  dh_32blk_glb_gain_switch12:7;
        RBus_UInt32  dh_32blk_glb_gain_switch11:7;
        RBus_UInt32  dh_32blk_glb_gain_switch10:7;
    };
}kme_dehalo2_kme_dehalo2_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dh_32blk_glb_gain_switch17:7;
        RBus_UInt32  dh_32blk_glb_gain_switch16:7;
        RBus_UInt32  dh_32blk_glb_gain_switch15:7;
        RBus_UInt32  dh_32blk_glb_gain_switch14:7;
    };
}kme_dehalo2_kme_dehalo2_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dh_32blk_glb_gain_switch23:7;
        RBus_UInt32  dh_32blk_glb_gain_switch22:7;
        RBus_UInt32  dh_32blk_glb_gain_switch21:7;
        RBus_UInt32  dh_32blk_glb_gain_switch20:7;
    };
}kme_dehalo2_kme_dehalo2_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dh_32blk_glb_gain_switch27:7;
        RBus_UInt32  dh_32blk_glb_gain_switch26:7;
        RBus_UInt32  dh_32blk_glb_gain_switch25:7;
        RBus_UInt32  dh_32blk_glb_gain_switch24:7;
    };
}kme_dehalo2_kme_dehalo2_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dh_32blk_glb_gain_switch33:7;
        RBus_UInt32  dh_32blk_glb_gain_switch32:7;
        RBus_UInt32  dh_32blk_glb_gain_switch31:7;
        RBus_UInt32  dh_32blk_glb_gain_switch30:7;
    };
}kme_dehalo2_kme_dehalo2_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dh_32blk_glb_gain_switch37:7;
        RBus_UInt32  dh_32blk_glb_gain_switch36:7;
        RBus_UInt32  dh_32blk_glb_gain_switch35:7;
        RBus_UInt32  dh_32blk_glb_gain_switch34:7;
    };
}kme_dehalo2_kme_dehalo2_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_32blk_bv0_bv1_switch:32;
    };
}kme_dehalo2_kme_dehalo2_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_dlogo_logo_sour:1;
        RBus_UInt32  dh_logo_ip_pi_logo_switch:1;
        RBus_UInt32  dh_logo_shift:4;
        RBus_UInt32  dh_logo_sad_x_th:10;
        RBus_UInt32  dh_logo_mv_x_th:6;
        RBus_UInt32  dh_logo_mv_x_ratio:4;
        RBus_UInt32  dh_logo_mv_x_diff_th:6;
    };
}kme_dehalo2_kme_dehalo2_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  dh_logo_logo_x_th:9;
        RBus_UInt32  dh_logo_mv_x_num_th:9;
    };
}kme_dehalo2_kme_dehalo2_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dh_logo_sad_y_th:10;
        RBus_UInt32  dh_logo_mv_y_th:6;
        RBus_UInt32  dh_logo_mv_y_ratio:4;
        RBus_UInt32  dh_logo_mv_y_diff_th:6;
    };
}kme_dehalo2_kme_dehalo2_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  dh_logo_logo_y_th:9;
        RBus_UInt32  dh_logo_mv_y_num_th:9;
    };
}kme_dehalo2_kme_dehalo2_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  dh_logo_sad_d_th_rg0:10;
        RBus_UInt32  dh_logo_mv_d_th_rg0:6;
        RBus_UInt32  dh_logo_mv_d_diff_th_rg0:6;
    };
}kme_dehalo2_kme_dehalo2_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  dh_logo_smv_sad_th:10;
        RBus_UInt32  dh_logo_smv_mv_x_th:6;
        RBus_UInt32  dh_logo_smv_mv_y_th:6;
    };
}kme_dehalo2_kme_dehalo2_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  dh_logo_smv_num:18;
    };
}kme_dehalo2_kme_dehalo2_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  dh_dlogo_repeat_mod:1;
        RBus_UInt32  dh_logo_pat_en:4;
        RBus_UInt32  dh_logo_tmv_bypass_rg0:1;
        RBus_UInt32  dh_logo_smv_bypass_rg0:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  dh_logo_mvd_bypass_rg0:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  dh_logo_ver_bypass_rg0:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  dh_logo_hor_bypass_rg0:3;
    };
}kme_dehalo2_kme_dehalo2_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_rgn_v3:8;
        RBus_UInt32  dh_logo_rgn_v2:8;
        RBus_UInt32  dh_logo_rgn_v1:8;
        RBus_UInt32  dh_logo_rgn_v0:8;
    };
}kme_dehalo2_kme_dehalo2_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_rgn_h3:8;
        RBus_UInt32  dh_logo_rgn_h2:8;
        RBus_UInt32  dh_logo_rgn_h1:8;
        RBus_UInt32  dh_logo_rgn_h0:8;
    };
}kme_dehalo2_kme_dehalo2_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  dh_logo_rdbk_en:1;
        RBus_UInt32  dh_logo_rgn_h5:8;
        RBus_UInt32  dh_logo_rgn_h4:8;
    };
}kme_dehalo2_kme_dehalo2_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dh_logo_tmv_mode_rg0:2;
        RBus_UInt32  dh_logo_sad_t_th_rg0:10;
        RBus_UInt32  dh_logo_tmv_num_rg0:8;
        RBus_UInt32  dh_logo_mv_t_th_rg0:8;
    };
}kme_dehalo2_kme_dehalo2_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dh_logo_tmv_mode_rg1:2;
        RBus_UInt32  dh_logo_sad_t_th_rg1:10;
        RBus_UInt32  dh_logo_tmv_num_rg1:8;
        RBus_UInt32  dh_logo_mv_t_th_rg1:8;
    };
}kme_dehalo2_kme_dehalo2_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  dh_logo_smv_bypass_rg1:3;
        RBus_UInt32  dh_logo_mvd_bypass_rg1:3;
        RBus_UInt32  dh_logo_ver_bypass_rg1:3;
        RBus_UInt32  dh_logo_hor_bypass_rg1:3;
        RBus_UInt32  dh_logo_tmv_bypass_rg1:1;
    };
}kme_dehalo2_kme_dehalo2_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  dh_logo_sad_d_th_rg1:10;
        RBus_UInt32  dh_logo_mv_d_th_rg1:6;
        RBus_UInt32  dh_logo_mv_d_diff_th_rg1:6;
    };
}kme_dehalo2_kme_dehalo2_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dh_rt1_mvxfb_y1:10;
        RBus_UInt32  dh_rt1_mvxfb_x2:10;
        RBus_UInt32  dh_rt1_mvxfb_x1:10;
    };
}kme_dehalo2_kme_dehalo2_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  dh_rt1_mvxfb_y2:10;
    };
}kme_dehalo2_kme_dehalo2_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dh_rt1_mvxfb_s3:8;
        RBus_UInt32  dh_rt1_mvxfb_s2:8;
        RBus_UInt32  dh_rt1_mvxfb_s1:8;
    };
}kme_dehalo2_kme_dehalo2_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  dh_rt1_mvyfb_y1:9;
        RBus_UInt32  dh_rt1_mvyfb_x2:9;
        RBus_UInt32  dh_rt1_mvyfb_x1:9;
    };
}kme_dehalo2_kme_dehalo2_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  dh_rt1_mvyfb_y2:9;
    };
}kme_dehalo2_kme_dehalo2_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_mvxfb_cut_thr:8;
        RBus_UInt32  dh_rt1_mvyfb_s3:8;
        RBus_UInt32  dh_rt1_mvyfb_s2:8;
        RBus_UInt32  dh_rt1_mvyfb_s1:8;
    };
}kme_dehalo2_kme_dehalo2_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dh_rt1_sadmv_bld_coef:8;
        RBus_UInt32  dh_rt1_mv_bld_coef:8;
        RBus_UInt32  dh_rt1_mvyfb_cut_thr:8;
    };
}kme_dehalo2_kme_dehalo2_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dh_phflt_mvxfb_y1:10;
        RBus_UInt32  dh_phflt_mvxfb_x2:10;
        RBus_UInt32  dh_phflt_mvxfb_x1:10;
    };
}kme_dehalo2_kme_dehalo2_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  dh_phflt_mvxfb_y2:10;
    };
}kme_dehalo2_kme_dehalo2_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dh_phflt_mvxfb_s3:8;
        RBus_UInt32  dh_phflt_mvxfb_s2:8;
        RBus_UInt32  dh_phflt_mvxfb_s1:8;
    };
}kme_dehalo2_kme_dehalo2_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  dh_phflt_mvyfb_y1:9;
        RBus_UInt32  dh_phflt_mvyfb_x2:9;
        RBus_UInt32  dh_phflt_mvyfb_x1:9;
    };
}kme_dehalo2_kme_dehalo2_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  dh_phflt_mvyfb_y2:9;
    };
}kme_dehalo2_kme_dehalo2_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_phflt_mvxfb_cut_thr:8;
        RBus_UInt32  dh_phflt_mvyfb_s3:8;
        RBus_UInt32  dh_phflt_mvyfb_s2:8;
        RBus_UInt32  dh_phflt_mvyfb_s1:8;
    };
}kme_dehalo2_kme_dehalo2_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dh_phflt_sadmv_bld_coef:8;
        RBus_UInt32  dh_phflt_mv_bld_coef:8;
        RBus_UInt32  dh_phflt_mvyfb_cut_thr:8;
    };
}kme_dehalo2_kme_dehalo2_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  tmv_mode_rg2:2;
        RBus_UInt32  mv_d_th_rg2:6;
        RBus_UInt32  mv_d_diff_th_rg2:6;
        RBus_UInt32  tmv_bypass_rg2:1;
        RBus_UInt32  smv_bypass_rg2:3;
        RBus_UInt32  mvd_bypass_rg2:3;
        RBus_UInt32  ver_bypass_rg2:3;
        RBus_UInt32  hor_bypass_rg2:3;
    };
}kme_dehalo2_kme_dehalo2_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_mv_edge_mvd_th_limit:5;
        RBus_UInt32  post_pfv_cent_pos_shift:3;
        RBus_UInt32  post_pfv_edge_apl_diff_th:6;
        RBus_UInt32  dh_mv_edge_unorder_en:1;
        RBus_UInt32  post_pfv_edge_prot_en:1;
        RBus_UInt32  post_pfv_edge_max_min_apl_gain:3;
        RBus_UInt32  dh_post_proc_pfv_en:1;
        RBus_UInt32  post_rt1_gmv_near_gain:3;
        RBus_UInt32  post_pfv_cond_mvd_bypass:1;
        RBus_UInt32  post_rt1_gmv_near_th_max:5;
        RBus_UInt32  post_rt1_mv_nearbg_mode:2;
        RBus_UInt32  post_rt1_pfv_diff_bypass:1;
    };
}kme_dehalo2_kme_dehalo2_post_pfv_rt1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_rt1_bg_move_mvth:5;
        RBus_UInt32  post_rt1_edge_max_min_apl_gain:3;
        RBus_UInt32  post_rt1_mvab_range:5;
        RBus_UInt32  post_rt1_mv_nearbg_bypass:1;
        RBus_UInt32  post_rt1_cond_mvd_bypass:1;
        RBus_UInt32  post_rt1_rt_sr:4;
        RBus_UInt32  post_rt1_mvab_diff_range:5;
        RBus_UInt32  post_rt1_edge_apl_diff_th:6;
        RBus_UInt32  dh_rt1_edge_prot_en:1;
        RBus_UInt32  dh_post_proc_rt1_en:1;
    };
}kme_dehalo2_kme_dehalo2_post_pfv_rt1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_rt1_blk_haloext:3;
        RBus_UInt32  post_rt1_mvab_onegmv_th:5;
        RBus_UInt32  dh_mv_edge_mvd_sum_th_gain:3;
        RBus_UInt32  dh_mv_edge_mvd_avg_cnt:3;
        RBus_UInt32  dh_mv_edge_mvd_ab_sel:1;
        RBus_UInt32  dh_pfv_cor_by_bgapl:1;
        RBus_UInt32  dh_occpred_diff_th_shift:4;
        RBus_UInt32  dh_occpred_diff_th_min:4;
        RBus_UInt32  dh_occpred_range:4;
        RBus_UInt32  post_rt1_mvab_onegmv_bypass:1;
        RBus_UInt32  dh_occpred_diff_th_gain:2;
        RBus_UInt32  dh_occpred_en:1;
    };
}kme_dehalo2_kme_dehalo2_post_pfv_rt1_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  dh_high_det_en:1;
    };
}kme_dehalo2_kme_dehalo2_high_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  occl_extend_fg_ucov_y_range:3;
        RBus_UInt32  occl_extend_fg_ucov_x_range:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  occl_extend_fg_cov_y_range:3;
        RBus_UInt32  occl_extend_fg_cov_x_range:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  occl_extend_bg_ucov_y_range:3;
        RBus_UInt32  occl_extend_bg_ucov_x_range:3;
        RBus_UInt32  occl_extend_mv_sync_en:1;
        RBus_UInt32  occl_extend_bg_cov_y_range:3;
        RBus_UInt32  occl_extend_bg_cov_x_range:3;
        RBus_UInt32  occl_extend_mode:2;
    };
}kme_dehalo2_dh_occl_extend_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  postcorr_smallaplthr:8;
        RBus_UInt32  postcorr_smalldtlthr:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  postcorr_mvab_ratio:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  postcorr_occlcntthr:5;
        RBus_UInt32  postcorr_mvabdiff_enable:1;
        RBus_UInt32  postcorr_smalldtl_enable:1;
        RBus_UInt32  postcorr_smallapl_enable:1;
        RBus_UInt32  postcorr_neioccl_enable:1;
    };
}kme_dehalo2_dh_occl_extend_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  occlext_erroccl_curbgmv_ratio:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  occlext_erroccl_mvabisgmv_ratio:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  occlext_erroccl_mvabdiff_ratio:2;
        RBus_UInt32  occlext_erroccl_gmvsel:1;
        RBus_UInt32  occlext_erroccl_curbgmv_enable:1;
        RBus_UInt32  occlext_erroccl_mvabisgmv_enable:1;
        RBus_UInt32  occlext_erroccl_mvabdiff_enable:1;
    };
}kme_dehalo2_dh_occl_extend_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  occlext_apllargethr:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  occlext_sadsmallthr:8;
        RBus_UInt32  res2:3;
        RBus_UInt32  occlext_extmvsel:1;
        RBus_UInt32  occlext_aplprot_enable:1;
        RBus_UInt32  occlext_occlprot_enable:1;
        RBus_UInt32  occlext_sadprot_enable:1;
        RBus_UInt32  occlext_edgprot_enable:1;
    };
}kme_dehalo2_dh_occl_extend_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  dh_postcorr_saddiff_enable:1;
        RBus_UInt32  dh_postcorr_saddiff_cov_cnt:4;
        RBus_UInt32  dh_postcorr_saddiff_ucov_cnt:4;
    };
}kme_dehalo2_kme_dehalo_postcorr_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_DEHALO2 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sad_d_th_rg2:10;
        RBus_UInt32  mv_t_th_rg2:8;
        RBus_UInt32  res1:14;
    };
}kme_dehalo2_kme_dehalo2_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmv_num_rg2:8;
        RBus_UInt32  sad_t_th_rg2:10;
        RBus_UInt32  res1:14;
    };
}kme_dehalo2_kme_dehalo2_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_bypass_rg3:3;
        RBus_UInt32  ver_bypass_rg3:3;
        RBus_UInt32  mvd_bypass_rg3:3;
        RBus_UInt32  smv_bypass_rg3:3;
        RBus_UInt32  tmv_bypass_rg3:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  hor_bypass_rg4:3;
        RBus_UInt32  ver_bypass_rg4:3;
        RBus_UInt32  mvd_bypass_rg4:3;
        RBus_UInt32  smv_bypass_rg4:3;
        RBus_UInt32  tmv_bypass_rg4:1;
        RBus_UInt32  res2:3;
    };
}kme_dehalo2_kme_dehalo2_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_bypass_rg5:3;
        RBus_UInt32  ver_bypass_rg5:3;
        RBus_UInt32  mvd_bypass_rg5:3;
        RBus_UInt32  smv_bypass_rg5:3;
        RBus_UInt32  tmv_bypass_rg5:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  hor_bypass_rg6:3;
        RBus_UInt32  ver_bypass_rg6:3;
        RBus_UInt32  mvd_bypass_rg6:3;
        RBus_UInt32  smv_bypass_rg6:3;
        RBus_UInt32  tmv_bypass_rg6:1;
        RBus_UInt32  res2:3;
    };
}kme_dehalo2_kme_dehalo2_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_bypass_rg7:3;
        RBus_UInt32  ver_bypass_rg7:3;
        RBus_UInt32  mvd_bypass_rg7:3;
        RBus_UInt32  smv_bypass_rg7:3;
        RBus_UInt32  tmv_bypass_rg7:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  hor_bypass_rg8:3;
        RBus_UInt32  ver_bypass_rg8:3;
        RBus_UInt32  mvd_bypass_rg8:3;
        RBus_UInt32  smv_bypass_rg8:3;
        RBus_UInt32  tmv_bypass_rg8:1;
        RBus_UInt32  res2:3;
    };
}kme_dehalo2_kme_dehalo2_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_bypass_rg9:3;
        RBus_UInt32  ver_bypass_rg9:3;
        RBus_UInt32  mvd_bypass_rg9:3;
        RBus_UInt32  smv_bypass_rg9:3;
        RBus_UInt32  tmv_bypass_rg9:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  hor_bypass_rga:3;
        RBus_UInt32  ver_bypass_rga:3;
        RBus_UInt32  mvd_bypass_rga:3;
        RBus_UInt32  smv_bypass_rga:3;
        RBus_UInt32  tmv_bypass_rga:1;
        RBus_UInt32  res2:3;
    };
}kme_dehalo2_kme_dehalo2_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_bypass_rgb:3;
        RBus_UInt32  ver_bypass_rgb:3;
        RBus_UInt32  mvd_bypass_rgb:3;
        RBus_UInt32  smv_bypass_rgb:3;
        RBus_UInt32  tmv_bypass_rgb:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  hor_bypass_rgc:3;
        RBus_UInt32  ver_bypass_rgc:3;
        RBus_UInt32  mvd_bypass_rgc:3;
        RBus_UInt32  smv_bypass_rgc:3;
        RBus_UInt32  tmv_bypass_rgc:1;
        RBus_UInt32  res2:3;
    };
}kme_dehalo2_kme_dehalo2_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_bypass_rgd:3;
        RBus_UInt32  ver_bypass_rgd:3;
        RBus_UInt32  mvd_bypass_rgd:3;
        RBus_UInt32  smv_bypass_rgd:3;
        RBus_UInt32  tmv_bypass_rgd:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  hor_bypass_rge:3;
        RBus_UInt32  ver_bypass_rge:3;
        RBus_UInt32  mvd_bypass_rge:3;
        RBus_UInt32  smv_bypass_rge:3;
        RBus_UInt32  tmv_bypass_rge:1;
        RBus_UInt32  res2:3;
    };
}kme_dehalo2_kme_dehalo2_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_show_me2_cal_ph_info:4;
        RBus_UInt32  dh_show_me2_cal_ph_infk:4;
        RBus_UInt32  res1:24;
    };
}kme_dehalo2_kme_dehalo2_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_bv0_bv1_switch_en:1;
        RBus_UInt32  dh_glb_bv0_bv1_switch:1;
        RBus_UInt32  dh_bv0_bv1_blk_x_intv:7;
        RBus_UInt32  dh_bv0_bv1_blk_y_intv:8;
        RBus_UInt32  dh_glb_gain_switch_en:1;
        RBus_UInt32  dh_glb_glb_gain_switch:7;
        RBus_UInt32  dh_glb_gain_blk_x_intv:7;
    };
}kme_dehalo2_kme_dehalo2_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_glb_gain_blk_y_intv:8;
        RBus_UInt32  res1:24;
    };
}kme_dehalo2_kme_dehalo2_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_32blk_glb_gain_switch00:7;
        RBus_UInt32  dh_32blk_glb_gain_switch01:7;
        RBus_UInt32  dh_32blk_glb_gain_switch02:7;
        RBus_UInt32  dh_32blk_glb_gain_switch03:7;
        RBus_UInt32  res1:4;
    };
}kme_dehalo2_kme_dehalo2_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_32blk_glb_gain_switch04:7;
        RBus_UInt32  dh_32blk_glb_gain_switch05:7;
        RBus_UInt32  dh_32blk_glb_gain_switch06:7;
        RBus_UInt32  dh_32blk_glb_gain_switch07:7;
        RBus_UInt32  res1:4;
    };
}kme_dehalo2_kme_dehalo2_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_32blk_glb_gain_switch10:7;
        RBus_UInt32  dh_32blk_glb_gain_switch11:7;
        RBus_UInt32  dh_32blk_glb_gain_switch12:7;
        RBus_UInt32  dh_32blk_glb_gain_switch13:7;
        RBus_UInt32  res1:4;
    };
}kme_dehalo2_kme_dehalo2_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_32blk_glb_gain_switch14:7;
        RBus_UInt32  dh_32blk_glb_gain_switch15:7;
        RBus_UInt32  dh_32blk_glb_gain_switch16:7;
        RBus_UInt32  dh_32blk_glb_gain_switch17:7;
        RBus_UInt32  res1:4;
    };
}kme_dehalo2_kme_dehalo2_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_32blk_glb_gain_switch20:7;
        RBus_UInt32  dh_32blk_glb_gain_switch21:7;
        RBus_UInt32  dh_32blk_glb_gain_switch22:7;
        RBus_UInt32  dh_32blk_glb_gain_switch23:7;
        RBus_UInt32  res1:4;
    };
}kme_dehalo2_kme_dehalo2_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_32blk_glb_gain_switch24:7;
        RBus_UInt32  dh_32blk_glb_gain_switch25:7;
        RBus_UInt32  dh_32blk_glb_gain_switch26:7;
        RBus_UInt32  dh_32blk_glb_gain_switch27:7;
        RBus_UInt32  res1:4;
    };
}kme_dehalo2_kme_dehalo2_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_32blk_glb_gain_switch30:7;
        RBus_UInt32  dh_32blk_glb_gain_switch31:7;
        RBus_UInt32  dh_32blk_glb_gain_switch32:7;
        RBus_UInt32  dh_32blk_glb_gain_switch33:7;
        RBus_UInt32  res1:4;
    };
}kme_dehalo2_kme_dehalo2_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_32blk_glb_gain_switch34:7;
        RBus_UInt32  dh_32blk_glb_gain_switch35:7;
        RBus_UInt32  dh_32blk_glb_gain_switch36:7;
        RBus_UInt32  dh_32blk_glb_gain_switch37:7;
        RBus_UInt32  res1:4;
    };
}kme_dehalo2_kme_dehalo2_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_32blk_bv0_bv1_switch:32;
    };
}kme_dehalo2_kme_dehalo2_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_mv_x_diff_th:6;
        RBus_UInt32  dh_logo_mv_x_ratio:4;
        RBus_UInt32  dh_logo_mv_x_th:6;
        RBus_UInt32  dh_logo_sad_x_th:10;
        RBus_UInt32  dh_logo_shift:4;
        RBus_UInt32  dh_logo_ip_pi_logo_switch:1;
        RBus_UInt32  dh_dlogo_logo_sour:1;
    };
}kme_dehalo2_kme_dehalo2_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_mv_x_num_th:9;
        RBus_UInt32  dh_logo_logo_x_th:9;
        RBus_UInt32  res1:14;
    };
}kme_dehalo2_kme_dehalo2_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_mv_y_diff_th:6;
        RBus_UInt32  dh_logo_mv_y_ratio:4;
        RBus_UInt32  dh_logo_mv_y_th:6;
        RBus_UInt32  dh_logo_sad_y_th:10;
        RBus_UInt32  res1:6;
    };
}kme_dehalo2_kme_dehalo2_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_mv_y_num_th:9;
        RBus_UInt32  dh_logo_logo_y_th:9;
        RBus_UInt32  res1:14;
    };
}kme_dehalo2_kme_dehalo2_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_mv_d_diff_th_rg0:6;
        RBus_UInt32  dh_logo_mv_d_th_rg0:6;
        RBus_UInt32  dh_logo_sad_d_th_rg0:10;
        RBus_UInt32  res1:10;
    };
}kme_dehalo2_kme_dehalo2_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_smv_mv_y_th:6;
        RBus_UInt32  dh_logo_smv_mv_x_th:6;
        RBus_UInt32  dh_logo_smv_sad_th:10;
        RBus_UInt32  res1:10;
    };
}kme_dehalo2_kme_dehalo2_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_smv_num:18;
        RBus_UInt32  res1:14;
    };
}kme_dehalo2_kme_dehalo2_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_hor_bypass_rg0:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  dh_logo_ver_bypass_rg0:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  dh_logo_mvd_bypass_rg0:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  dh_logo_smv_bypass_rg0:3;
        RBus_UInt32  dh_logo_tmv_bypass_rg0:1;
        RBus_UInt32  dh_logo_pat_en:4;
        RBus_UInt32  dh_dlogo_repeat_mod:1;
        RBus_UInt32  res4:11;
    };
}kme_dehalo2_kme_dehalo2_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_rgn_v0:8;
        RBus_UInt32  dh_logo_rgn_v1:8;
        RBus_UInt32  dh_logo_rgn_v2:8;
        RBus_UInt32  dh_logo_rgn_v3:8;
    };
}kme_dehalo2_kme_dehalo2_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_rgn_h0:8;
        RBus_UInt32  dh_logo_rgn_h1:8;
        RBus_UInt32  dh_logo_rgn_h2:8;
        RBus_UInt32  dh_logo_rgn_h3:8;
    };
}kme_dehalo2_kme_dehalo2_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_rgn_h4:8;
        RBus_UInt32  dh_logo_rgn_h5:8;
        RBus_UInt32  dh_logo_rdbk_en:1;
        RBus_UInt32  res1:15;
    };
}kme_dehalo2_kme_dehalo2_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_mv_t_th_rg0:8;
        RBus_UInt32  dh_logo_tmv_num_rg0:8;
        RBus_UInt32  dh_logo_sad_t_th_rg0:10;
        RBus_UInt32  dh_logo_tmv_mode_rg0:2;
        RBus_UInt32  res1:4;
    };
}kme_dehalo2_kme_dehalo2_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_mv_t_th_rg1:8;
        RBus_UInt32  dh_logo_tmv_num_rg1:8;
        RBus_UInt32  dh_logo_sad_t_th_rg1:10;
        RBus_UInt32  dh_logo_tmv_mode_rg1:2;
        RBus_UInt32  res1:4;
    };
}kme_dehalo2_kme_dehalo2_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_tmv_bypass_rg1:1;
        RBus_UInt32  dh_logo_hor_bypass_rg1:3;
        RBus_UInt32  dh_logo_ver_bypass_rg1:3;
        RBus_UInt32  dh_logo_mvd_bypass_rg1:3;
        RBus_UInt32  dh_logo_smv_bypass_rg1:3;
        RBus_UInt32  res1:19;
    };
}kme_dehalo2_kme_dehalo2_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_logo_mv_d_diff_th_rg1:6;
        RBus_UInt32  dh_logo_mv_d_th_rg1:6;
        RBus_UInt32  dh_logo_sad_d_th_rg1:10;
        RBus_UInt32  res1:10;
    };
}kme_dehalo2_kme_dehalo2_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_mvxfb_x1:10;
        RBus_UInt32  dh_rt1_mvxfb_x2:10;
        RBus_UInt32  dh_rt1_mvxfb_y1:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo2_kme_dehalo2_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_mvxfb_y2:10;
        RBus_UInt32  res1:22;
    };
}kme_dehalo2_kme_dehalo2_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_mvxfb_s1:8;
        RBus_UInt32  dh_rt1_mvxfb_s2:8;
        RBus_UInt32  dh_rt1_mvxfb_s3:8;
        RBus_UInt32  res1:8;
    };
}kme_dehalo2_kme_dehalo2_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_mvyfb_x1:9;
        RBus_UInt32  dh_rt1_mvyfb_x2:9;
        RBus_UInt32  dh_rt1_mvyfb_y1:9;
        RBus_UInt32  res1:5;
    };
}kme_dehalo2_kme_dehalo2_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_mvyfb_y2:9;
        RBus_UInt32  res1:23;
    };
}kme_dehalo2_kme_dehalo2_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_mvyfb_s1:8;
        RBus_UInt32  dh_rt1_mvyfb_s2:8;
        RBus_UInt32  dh_rt1_mvyfb_s3:8;
        RBus_UInt32  dh_rt1_mvxfb_cut_thr:8;
    };
}kme_dehalo2_kme_dehalo2_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_rt1_mvyfb_cut_thr:8;
        RBus_UInt32  dh_rt1_mv_bld_coef:8;
        RBus_UInt32  dh_rt1_sadmv_bld_coef:8;
        RBus_UInt32  res1:8;
    };
}kme_dehalo2_kme_dehalo2_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_phflt_mvxfb_x1:10;
        RBus_UInt32  dh_phflt_mvxfb_x2:10;
        RBus_UInt32  dh_phflt_mvxfb_y1:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo2_kme_dehalo2_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_phflt_mvxfb_y2:10;
        RBus_UInt32  res1:22;
    };
}kme_dehalo2_kme_dehalo2_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_phflt_mvxfb_s1:8;
        RBus_UInt32  dh_phflt_mvxfb_s2:8;
        RBus_UInt32  dh_phflt_mvxfb_s3:8;
        RBus_UInt32  res1:8;
    };
}kme_dehalo2_kme_dehalo2_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_phflt_mvyfb_x1:9;
        RBus_UInt32  dh_phflt_mvyfb_x2:9;
        RBus_UInt32  dh_phflt_mvyfb_y1:9;
        RBus_UInt32  res1:5;
    };
}kme_dehalo2_kme_dehalo2_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_phflt_mvyfb_y2:9;
        RBus_UInt32  res1:23;
    };
}kme_dehalo2_kme_dehalo2_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_phflt_mvyfb_s1:8;
        RBus_UInt32  dh_phflt_mvyfb_s2:8;
        RBus_UInt32  dh_phflt_mvyfb_s3:8;
        RBus_UInt32  dh_phflt_mvxfb_cut_thr:8;
    };
}kme_dehalo2_kme_dehalo2_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_phflt_mvyfb_cut_thr:8;
        RBus_UInt32  dh_phflt_mv_bld_coef:8;
        RBus_UInt32  dh_phflt_sadmv_bld_coef:8;
        RBus_UInt32  res1:8;
    };
}kme_dehalo2_kme_dehalo2_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_bypass_rg2:3;
        RBus_UInt32  ver_bypass_rg2:3;
        RBus_UInt32  mvd_bypass_rg2:3;
        RBus_UInt32  smv_bypass_rg2:3;
        RBus_UInt32  tmv_bypass_rg2:1;
        RBus_UInt32  mv_d_diff_th_rg2:6;
        RBus_UInt32  mv_d_th_rg2:6;
        RBus_UInt32  tmv_mode_rg2:2;
        RBus_UInt32  res1:5;
    };
}kme_dehalo2_kme_dehalo2_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_rt1_pfv_diff_bypass:1;
        RBus_UInt32  post_rt1_mv_nearbg_mode:2;
        RBus_UInt32  post_rt1_gmv_near_th_max:5;
        RBus_UInt32  post_pfv_cond_mvd_bypass:1;
        RBus_UInt32  post_rt1_gmv_near_gain:3;
        RBus_UInt32  dh_post_proc_pfv_en:1;
        RBus_UInt32  post_pfv_edge_max_min_apl_gain:3;
        RBus_UInt32  post_pfv_edge_prot_en:1;
        RBus_UInt32  dh_mv_edge_unorder_en:1;
        RBus_UInt32  post_pfv_edge_apl_diff_th:6;
        RBus_UInt32  post_pfv_cent_pos_shift:3;
        RBus_UInt32  dh_mv_edge_mvd_th_limit:5;
    };
}kme_dehalo2_kme_dehalo2_post_pfv_rt1_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_post_proc_rt1_en:1;
        RBus_UInt32  dh_rt1_edge_prot_en:1;
        RBus_UInt32  post_rt1_edge_apl_diff_th:6;
        RBus_UInt32  post_rt1_mvab_diff_range:5;
        RBus_UInt32  post_rt1_rt_sr:4;
        RBus_UInt32  post_rt1_cond_mvd_bypass:1;
        RBus_UInt32  post_rt1_mv_nearbg_bypass:1;
        RBus_UInt32  post_rt1_mvab_range:5;
        RBus_UInt32  post_rt1_edge_max_min_apl_gain:3;
        RBus_UInt32  post_rt1_bg_move_mvth:5;
    };
}kme_dehalo2_kme_dehalo2_post_pfv_rt1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_occpred_en:1;
        RBus_UInt32  dh_occpred_diff_th_gain:2;
        RBus_UInt32  post_rt1_mvab_onegmv_bypass:1;
        RBus_UInt32  dh_occpred_range:4;
        RBus_UInt32  dh_occpred_diff_th_min:4;
        RBus_UInt32  dh_occpred_diff_th_shift:4;
        RBus_UInt32  dh_pfv_cor_by_bgapl:1;
        RBus_UInt32  dh_mv_edge_mvd_ab_sel:1;
        RBus_UInt32  dh_mv_edge_mvd_avg_cnt:3;
        RBus_UInt32  dh_mv_edge_mvd_sum_th_gain:3;
        RBus_UInt32  post_rt1_mvab_onegmv_th:5;
        RBus_UInt32  post_rt1_blk_haloext:3;
    };
}kme_dehalo2_kme_dehalo2_post_pfv_rt1_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_high_det_en:1;
        RBus_UInt32  res1:31;
    };
}kme_dehalo2_kme_dehalo2_high_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  occl_extend_mode:2;
        RBus_UInt32  occl_extend_bg_cov_x_range:3;
        RBus_UInt32  occl_extend_bg_cov_y_range:3;
        RBus_UInt32  occl_extend_mv_sync_en:1;
        RBus_UInt32  occl_extend_bg_ucov_x_range:3;
        RBus_UInt32  occl_extend_bg_ucov_y_range:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  occl_extend_fg_cov_x_range:3;
        RBus_UInt32  occl_extend_fg_cov_y_range:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  occl_extend_fg_ucov_x_range:3;
        RBus_UInt32  occl_extend_fg_ucov_y_range:3;
        RBus_UInt32  res3:2;
    };
}kme_dehalo2_dh_occl_extend_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  postcorr_neioccl_enable:1;
        RBus_UInt32  postcorr_smallapl_enable:1;
        RBus_UInt32  postcorr_smalldtl_enable:1;
        RBus_UInt32  postcorr_mvabdiff_enable:1;
        RBus_UInt32  postcorr_occlcntthr:5;
        RBus_UInt32  res1:4;
        RBus_UInt32  postcorr_mvab_ratio:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  postcorr_smalldtlthr:8;
        RBus_UInt32  postcorr_smallaplthr:8;
    };
}kme_dehalo2_dh_occl_extend_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  occlext_erroccl_mvabdiff_enable:1;
        RBus_UInt32  occlext_erroccl_mvabisgmv_enable:1;
        RBus_UInt32  occlext_erroccl_curbgmv_enable:1;
        RBus_UInt32  occlext_erroccl_gmvsel:1;
        RBus_UInt32  occlext_erroccl_mvabdiff_ratio:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  occlext_erroccl_mvabisgmv_ratio:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  occlext_erroccl_curbgmv_ratio:3;
        RBus_UInt32  res3:17;
    };
}kme_dehalo2_dh_occl_extend_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  occlext_edgprot_enable:1;
        RBus_UInt32  occlext_sadprot_enable:1;
        RBus_UInt32  occlext_occlprot_enable:1;
        RBus_UInt32  occlext_aplprot_enable:1;
        RBus_UInt32  occlext_extmvsel:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  occlext_sadsmallthr:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  occlext_apllargethr:8;
    };
}kme_dehalo2_dh_occl_extend_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_postcorr_saddiff_ucov_cnt:4;
        RBus_UInt32  dh_postcorr_saddiff_cov_cnt:4;
        RBus_UInt32  dh_postcorr_saddiff_enable:1;
        RBus_UInt32  res1:23;
    };
}kme_dehalo2_kme_dehalo_postcorr_RBUS;




#endif 


#endif 
