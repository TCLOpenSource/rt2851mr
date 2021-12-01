/**
* @file Merlin5_MEMC_KME_LOGO2
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_LOGO2_REG_H_
#define _RBUS_KME_LOGO2_REG_H_

#include "rbus_types.h"



//  KME_LOGO2 Register Address
#define  KME_LOGO2_KME_LOGO2_00                                                 0x1809BB00
#define  KME_LOGO2_KME_LOGO2_00_reg_addr                                         "0xB809BB00"
#define  KME_LOGO2_KME_LOGO2_00_reg                                              0xB809BB00
#define  KME_LOGO2_KME_LOGO2_00_inst_addr                                        "0x0000"
#define  set_KME_LOGO2_KME_LOGO2_00_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_00_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_00_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_00_reg))
#define  KME_LOGO2_KME_LOGO2_00_km_logo_pxlrgdfy_idx3_shift                      (24)
#define  KME_LOGO2_KME_LOGO2_00_km_logo_pxlrgdfy_idx2_shift                      (16)
#define  KME_LOGO2_KME_LOGO2_00_km_logo_pxlrgdfy_idx1_shift                      (8)
#define  KME_LOGO2_KME_LOGO2_00_km_logo_pxlrgdfy_idx0_shift                      (0)
#define  KME_LOGO2_KME_LOGO2_00_km_logo_pxlrgdfy_idx3_mask                       (0xFF000000)
#define  KME_LOGO2_KME_LOGO2_00_km_logo_pxlrgdfy_idx2_mask                       (0x00FF0000)
#define  KME_LOGO2_KME_LOGO2_00_km_logo_pxlrgdfy_idx1_mask                       (0x0000FF00)
#define  KME_LOGO2_KME_LOGO2_00_km_logo_pxlrgdfy_idx0_mask                       (0x000000FF)
#define  KME_LOGO2_KME_LOGO2_00_km_logo_pxlrgdfy_idx3(data)                      (0xFF000000&((data)<<24))
#define  KME_LOGO2_KME_LOGO2_00_km_logo_pxlrgdfy_idx2(data)                      (0x00FF0000&((data)<<16))
#define  KME_LOGO2_KME_LOGO2_00_km_logo_pxlrgdfy_idx1(data)                      (0x0000FF00&((data)<<8))
#define  KME_LOGO2_KME_LOGO2_00_km_logo_pxlrgdfy_idx0(data)                      (0x000000FF&(data))
#define  KME_LOGO2_KME_LOGO2_00_get_km_logo_pxlrgdfy_idx3(data)                  ((0xFF000000&(data))>>24)
#define  KME_LOGO2_KME_LOGO2_00_get_km_logo_pxlrgdfy_idx2(data)                  ((0x00FF0000&(data))>>16)
#define  KME_LOGO2_KME_LOGO2_00_get_km_logo_pxlrgdfy_idx1(data)                  ((0x0000FF00&(data))>>8)
#define  KME_LOGO2_KME_LOGO2_00_get_km_logo_pxlrgdfy_idx0(data)                  (0x000000FF&(data))

#define  KME_LOGO2_KME_LOGO2_04                                                 0x1809BB04
#define  KME_LOGO2_KME_LOGO2_04_reg_addr                                         "0xB809BB04"
#define  KME_LOGO2_KME_LOGO2_04_reg                                              0xB809BB04
#define  KME_LOGO2_KME_LOGO2_04_inst_addr                                        "0x0001"
#define  set_KME_LOGO2_KME_LOGO2_04_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_04_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_04_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_04_reg))
#define  KME_LOGO2_KME_LOGO2_04_km_logo_pxlrgdfy_idx7_shift                      (24)
#define  KME_LOGO2_KME_LOGO2_04_km_logo_pxlrgdfy_idx6_shift                      (16)
#define  KME_LOGO2_KME_LOGO2_04_km_logo_pxlrgdfy_idx5_shift                      (8)
#define  KME_LOGO2_KME_LOGO2_04_km_logo_pxlrgdfy_idx4_shift                      (0)
#define  KME_LOGO2_KME_LOGO2_04_km_logo_pxlrgdfy_idx7_mask                       (0xFF000000)
#define  KME_LOGO2_KME_LOGO2_04_km_logo_pxlrgdfy_idx6_mask                       (0x00FF0000)
#define  KME_LOGO2_KME_LOGO2_04_km_logo_pxlrgdfy_idx5_mask                       (0x0000FF00)
#define  KME_LOGO2_KME_LOGO2_04_km_logo_pxlrgdfy_idx4_mask                       (0x000000FF)
#define  KME_LOGO2_KME_LOGO2_04_km_logo_pxlrgdfy_idx7(data)                      (0xFF000000&((data)<<24))
#define  KME_LOGO2_KME_LOGO2_04_km_logo_pxlrgdfy_idx6(data)                      (0x00FF0000&((data)<<16))
#define  KME_LOGO2_KME_LOGO2_04_km_logo_pxlrgdfy_idx5(data)                      (0x0000FF00&((data)<<8))
#define  KME_LOGO2_KME_LOGO2_04_km_logo_pxlrgdfy_idx4(data)                      (0x000000FF&(data))
#define  KME_LOGO2_KME_LOGO2_04_get_km_logo_pxlrgdfy_idx7(data)                  ((0xFF000000&(data))>>24)
#define  KME_LOGO2_KME_LOGO2_04_get_km_logo_pxlrgdfy_idx6(data)                  ((0x00FF0000&(data))>>16)
#define  KME_LOGO2_KME_LOGO2_04_get_km_logo_pxlrgdfy_idx5(data)                  ((0x0000FF00&(data))>>8)
#define  KME_LOGO2_KME_LOGO2_04_get_km_logo_pxlrgdfy_idx4(data)                  (0x000000FF&(data))

#define  KME_LOGO2_KME_LOGO2_08                                                 0x1809BB08
#define  KME_LOGO2_KME_LOGO2_08_reg_addr                                         "0xB809BB08"
#define  KME_LOGO2_KME_LOGO2_08_reg                                              0xB809BB08
#define  KME_LOGO2_KME_LOGO2_08_inst_addr                                        "0x0002"
#define  set_KME_LOGO2_KME_LOGO2_08_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_08_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_08_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_08_reg))
#define  KME_LOGO2_KME_LOGO2_08_km_logo_pxlrgdfy_idx11_shift                     (24)
#define  KME_LOGO2_KME_LOGO2_08_km_logo_pxlrgdfy_idx10_shift                     (16)
#define  KME_LOGO2_KME_LOGO2_08_km_logo_pxlrgdfy_idx9_shift                      (8)
#define  KME_LOGO2_KME_LOGO2_08_km_logo_pxlrgdfy_idx8_shift                      (0)
#define  KME_LOGO2_KME_LOGO2_08_km_logo_pxlrgdfy_idx11_mask                      (0xFF000000)
#define  KME_LOGO2_KME_LOGO2_08_km_logo_pxlrgdfy_idx10_mask                      (0x00FF0000)
#define  KME_LOGO2_KME_LOGO2_08_km_logo_pxlrgdfy_idx9_mask                       (0x0000FF00)
#define  KME_LOGO2_KME_LOGO2_08_km_logo_pxlrgdfy_idx8_mask                       (0x000000FF)
#define  KME_LOGO2_KME_LOGO2_08_km_logo_pxlrgdfy_idx11(data)                     (0xFF000000&((data)<<24))
#define  KME_LOGO2_KME_LOGO2_08_km_logo_pxlrgdfy_idx10(data)                     (0x00FF0000&((data)<<16))
#define  KME_LOGO2_KME_LOGO2_08_km_logo_pxlrgdfy_idx9(data)                      (0x0000FF00&((data)<<8))
#define  KME_LOGO2_KME_LOGO2_08_km_logo_pxlrgdfy_idx8(data)                      (0x000000FF&(data))
#define  KME_LOGO2_KME_LOGO2_08_get_km_logo_pxlrgdfy_idx11(data)                 ((0xFF000000&(data))>>24)
#define  KME_LOGO2_KME_LOGO2_08_get_km_logo_pxlrgdfy_idx10(data)                 ((0x00FF0000&(data))>>16)
#define  KME_LOGO2_KME_LOGO2_08_get_km_logo_pxlrgdfy_idx9(data)                  ((0x0000FF00&(data))>>8)
#define  KME_LOGO2_KME_LOGO2_08_get_km_logo_pxlrgdfy_idx8(data)                  (0x000000FF&(data))

#define  KME_LOGO2_KME_LOGO2_0C                                                 0x1809BB0C
#define  KME_LOGO2_KME_LOGO2_0C_reg_addr                                         "0xB809BB0C"
#define  KME_LOGO2_KME_LOGO2_0C_reg                                              0xB809BB0C
#define  KME_LOGO2_KME_LOGO2_0C_inst_addr                                        "0x0003"
#define  set_KME_LOGO2_KME_LOGO2_0C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_0C_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_0C_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_0C_reg))
#define  KME_LOGO2_KME_LOGO2_0C_km_logo_pxlrgdfy_idx15_shift                     (24)
#define  KME_LOGO2_KME_LOGO2_0C_km_logo_pxlrgdfy_idx14_shift                     (16)
#define  KME_LOGO2_KME_LOGO2_0C_km_logo_pxlrgdfy_idx13_shift                     (8)
#define  KME_LOGO2_KME_LOGO2_0C_km_logo_pxlrgdfy_idx12_shift                     (0)
#define  KME_LOGO2_KME_LOGO2_0C_km_logo_pxlrgdfy_idx15_mask                      (0xFF000000)
#define  KME_LOGO2_KME_LOGO2_0C_km_logo_pxlrgdfy_idx14_mask                      (0x00FF0000)
#define  KME_LOGO2_KME_LOGO2_0C_km_logo_pxlrgdfy_idx13_mask                      (0x0000FF00)
#define  KME_LOGO2_KME_LOGO2_0C_km_logo_pxlrgdfy_idx12_mask                      (0x000000FF)
#define  KME_LOGO2_KME_LOGO2_0C_km_logo_pxlrgdfy_idx15(data)                     (0xFF000000&((data)<<24))
#define  KME_LOGO2_KME_LOGO2_0C_km_logo_pxlrgdfy_idx14(data)                     (0x00FF0000&((data)<<16))
#define  KME_LOGO2_KME_LOGO2_0C_km_logo_pxlrgdfy_idx13(data)                     (0x0000FF00&((data)<<8))
#define  KME_LOGO2_KME_LOGO2_0C_km_logo_pxlrgdfy_idx12(data)                     (0x000000FF&(data))
#define  KME_LOGO2_KME_LOGO2_0C_get_km_logo_pxlrgdfy_idx15(data)                 ((0xFF000000&(data))>>24)
#define  KME_LOGO2_KME_LOGO2_0C_get_km_logo_pxlrgdfy_idx14(data)                 ((0x00FF0000&(data))>>16)
#define  KME_LOGO2_KME_LOGO2_0C_get_km_logo_pxlrgdfy_idx13(data)                 ((0x0000FF00&(data))>>8)
#define  KME_LOGO2_KME_LOGO2_0C_get_km_logo_pxlrgdfy_idx12(data)                 (0x000000FF&(data))

#define  KME_LOGO2_KME_LOGO2_10                                                 0x1809BB10
#define  KME_LOGO2_KME_LOGO2_10_reg_addr                                         "0xB809BB10"
#define  KME_LOGO2_KME_LOGO2_10_reg                                              0xB809BB10
#define  KME_LOGO2_KME_LOGO2_10_inst_addr                                        "0x0004"
#define  set_KME_LOGO2_KME_LOGO2_10_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_10_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_10_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_10_reg))
#define  KME_LOGO2_KME_LOGO2_10_km_logo_pxlrgdfy_idx19_shift                     (24)
#define  KME_LOGO2_KME_LOGO2_10_km_logo_pxlrgdfy_idx18_shift                     (16)
#define  KME_LOGO2_KME_LOGO2_10_km_logo_pxlrgdfy_idx17_shift                     (8)
#define  KME_LOGO2_KME_LOGO2_10_km_logo_pxlrgdfy_idx16_shift                     (0)
#define  KME_LOGO2_KME_LOGO2_10_km_logo_pxlrgdfy_idx19_mask                      (0xFF000000)
#define  KME_LOGO2_KME_LOGO2_10_km_logo_pxlrgdfy_idx18_mask                      (0x00FF0000)
#define  KME_LOGO2_KME_LOGO2_10_km_logo_pxlrgdfy_idx17_mask                      (0x0000FF00)
#define  KME_LOGO2_KME_LOGO2_10_km_logo_pxlrgdfy_idx16_mask                      (0x000000FF)
#define  KME_LOGO2_KME_LOGO2_10_km_logo_pxlrgdfy_idx19(data)                     (0xFF000000&((data)<<24))
#define  KME_LOGO2_KME_LOGO2_10_km_logo_pxlrgdfy_idx18(data)                     (0x00FF0000&((data)<<16))
#define  KME_LOGO2_KME_LOGO2_10_km_logo_pxlrgdfy_idx17(data)                     (0x0000FF00&((data)<<8))
#define  KME_LOGO2_KME_LOGO2_10_km_logo_pxlrgdfy_idx16(data)                     (0x000000FF&(data))
#define  KME_LOGO2_KME_LOGO2_10_get_km_logo_pxlrgdfy_idx19(data)                 ((0xFF000000&(data))>>24)
#define  KME_LOGO2_KME_LOGO2_10_get_km_logo_pxlrgdfy_idx18(data)                 ((0x00FF0000&(data))>>16)
#define  KME_LOGO2_KME_LOGO2_10_get_km_logo_pxlrgdfy_idx17(data)                 ((0x0000FF00&(data))>>8)
#define  KME_LOGO2_KME_LOGO2_10_get_km_logo_pxlrgdfy_idx16(data)                 (0x000000FF&(data))

#define  KME_LOGO2_KME_LOGO2_14                                                 0x1809BB14
#define  KME_LOGO2_KME_LOGO2_14_reg_addr                                         "0xB809BB14"
#define  KME_LOGO2_KME_LOGO2_14_reg                                              0xB809BB14
#define  KME_LOGO2_KME_LOGO2_14_inst_addr                                        "0x0005"
#define  set_KME_LOGO2_KME_LOGO2_14_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_14_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_14_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_14_reg))
#define  KME_LOGO2_KME_LOGO2_14_km_logo_pxlrgdfy_idx23_shift                     (24)
#define  KME_LOGO2_KME_LOGO2_14_km_logo_pxlrgdfy_idx22_shift                     (16)
#define  KME_LOGO2_KME_LOGO2_14_km_logo_pxlrgdfy_idx21_shift                     (8)
#define  KME_LOGO2_KME_LOGO2_14_km_logo_pxlrgdfy_idx20_shift                     (0)
#define  KME_LOGO2_KME_LOGO2_14_km_logo_pxlrgdfy_idx23_mask                      (0xFF000000)
#define  KME_LOGO2_KME_LOGO2_14_km_logo_pxlrgdfy_idx22_mask                      (0x00FF0000)
#define  KME_LOGO2_KME_LOGO2_14_km_logo_pxlrgdfy_idx21_mask                      (0x0000FF00)
#define  KME_LOGO2_KME_LOGO2_14_km_logo_pxlrgdfy_idx20_mask                      (0x000000FF)
#define  KME_LOGO2_KME_LOGO2_14_km_logo_pxlrgdfy_idx23(data)                     (0xFF000000&((data)<<24))
#define  KME_LOGO2_KME_LOGO2_14_km_logo_pxlrgdfy_idx22(data)                     (0x00FF0000&((data)<<16))
#define  KME_LOGO2_KME_LOGO2_14_km_logo_pxlrgdfy_idx21(data)                     (0x0000FF00&((data)<<8))
#define  KME_LOGO2_KME_LOGO2_14_km_logo_pxlrgdfy_idx20(data)                     (0x000000FF&(data))
#define  KME_LOGO2_KME_LOGO2_14_get_km_logo_pxlrgdfy_idx23(data)                 ((0xFF000000&(data))>>24)
#define  KME_LOGO2_KME_LOGO2_14_get_km_logo_pxlrgdfy_idx22(data)                 ((0x00FF0000&(data))>>16)
#define  KME_LOGO2_KME_LOGO2_14_get_km_logo_pxlrgdfy_idx21(data)                 ((0x0000FF00&(data))>>8)
#define  KME_LOGO2_KME_LOGO2_14_get_km_logo_pxlrgdfy_idx20(data)                 (0x000000FF&(data))

#define  KME_LOGO2_KME_LOGO2_18                                                 0x1809BB18
#define  KME_LOGO2_KME_LOGO2_18_reg_addr                                         "0xB809BB18"
#define  KME_LOGO2_KME_LOGO2_18_reg                                              0xB809BB18
#define  KME_LOGO2_KME_LOGO2_18_inst_addr                                        "0x0006"
#define  set_KME_LOGO2_KME_LOGO2_18_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_18_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_18_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_18_reg))
#define  KME_LOGO2_KME_LOGO2_18_km_logo_pxlrgdfy_idx27_shift                     (24)
#define  KME_LOGO2_KME_LOGO2_18_km_logo_pxlrgdfy_idx26_shift                     (16)
#define  KME_LOGO2_KME_LOGO2_18_km_logo_pxlrgdfy_idx25_shift                     (8)
#define  KME_LOGO2_KME_LOGO2_18_km_logo_pxlrgdfy_idx24_shift                     (0)
#define  KME_LOGO2_KME_LOGO2_18_km_logo_pxlrgdfy_idx27_mask                      (0xFF000000)
#define  KME_LOGO2_KME_LOGO2_18_km_logo_pxlrgdfy_idx26_mask                      (0x00FF0000)
#define  KME_LOGO2_KME_LOGO2_18_km_logo_pxlrgdfy_idx25_mask                      (0x0000FF00)
#define  KME_LOGO2_KME_LOGO2_18_km_logo_pxlrgdfy_idx24_mask                      (0x000000FF)
#define  KME_LOGO2_KME_LOGO2_18_km_logo_pxlrgdfy_idx27(data)                     (0xFF000000&((data)<<24))
#define  KME_LOGO2_KME_LOGO2_18_km_logo_pxlrgdfy_idx26(data)                     (0x00FF0000&((data)<<16))
#define  KME_LOGO2_KME_LOGO2_18_km_logo_pxlrgdfy_idx25(data)                     (0x0000FF00&((data)<<8))
#define  KME_LOGO2_KME_LOGO2_18_km_logo_pxlrgdfy_idx24(data)                     (0x000000FF&(data))
#define  KME_LOGO2_KME_LOGO2_18_get_km_logo_pxlrgdfy_idx27(data)                 ((0xFF000000&(data))>>24)
#define  KME_LOGO2_KME_LOGO2_18_get_km_logo_pxlrgdfy_idx26(data)                 ((0x00FF0000&(data))>>16)
#define  KME_LOGO2_KME_LOGO2_18_get_km_logo_pxlrgdfy_idx25(data)                 ((0x0000FF00&(data))>>8)
#define  KME_LOGO2_KME_LOGO2_18_get_km_logo_pxlrgdfy_idx24(data)                 (0x000000FF&(data))

#define  KME_LOGO2_KME_LOGO2_1C                                                 0x1809BB1C
#define  KME_LOGO2_KME_LOGO2_1C_reg_addr                                         "0xB809BB1C"
#define  KME_LOGO2_KME_LOGO2_1C_reg                                              0xB809BB1C
#define  KME_LOGO2_KME_LOGO2_1C_inst_addr                                        "0x0007"
#define  set_KME_LOGO2_KME_LOGO2_1C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_1C_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_1C_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_1C_reg))
#define  KME_LOGO2_KME_LOGO2_1C_km_logo_pxlrgdfy_idx31_shift                     (24)
#define  KME_LOGO2_KME_LOGO2_1C_km_logo_pxlrgdfy_idx30_shift                     (16)
#define  KME_LOGO2_KME_LOGO2_1C_km_logo_pxlrgdfy_idx29_shift                     (8)
#define  KME_LOGO2_KME_LOGO2_1C_km_logo_pxlrgdfy_idx28_shift                     (0)
#define  KME_LOGO2_KME_LOGO2_1C_km_logo_pxlrgdfy_idx31_mask                      (0xFF000000)
#define  KME_LOGO2_KME_LOGO2_1C_km_logo_pxlrgdfy_idx30_mask                      (0x00FF0000)
#define  KME_LOGO2_KME_LOGO2_1C_km_logo_pxlrgdfy_idx29_mask                      (0x0000FF00)
#define  KME_LOGO2_KME_LOGO2_1C_km_logo_pxlrgdfy_idx28_mask                      (0x000000FF)
#define  KME_LOGO2_KME_LOGO2_1C_km_logo_pxlrgdfy_idx31(data)                     (0xFF000000&((data)<<24))
#define  KME_LOGO2_KME_LOGO2_1C_km_logo_pxlrgdfy_idx30(data)                     (0x00FF0000&((data)<<16))
#define  KME_LOGO2_KME_LOGO2_1C_km_logo_pxlrgdfy_idx29(data)                     (0x0000FF00&((data)<<8))
#define  KME_LOGO2_KME_LOGO2_1C_km_logo_pxlrgdfy_idx28(data)                     (0x000000FF&(data))
#define  KME_LOGO2_KME_LOGO2_1C_get_km_logo_pxlrgdfy_idx31(data)                 ((0xFF000000&(data))>>24)
#define  KME_LOGO2_KME_LOGO2_1C_get_km_logo_pxlrgdfy_idx30(data)                 ((0x00FF0000&(data))>>16)
#define  KME_LOGO2_KME_LOGO2_1C_get_km_logo_pxlrgdfy_idx29(data)                 ((0x0000FF00&(data))>>8)
#define  KME_LOGO2_KME_LOGO2_1C_get_km_logo_pxlrgdfy_idx28(data)                 (0x000000FF&(data))

#define  KME_LOGO2_KME_LOGO2_20                                                 0x1809BB20
#define  KME_LOGO2_KME_LOGO2_20_reg_addr                                         "0xB809BB20"
#define  KME_LOGO2_KME_LOGO2_20_reg                                              0xB809BB20
#define  KME_LOGO2_KME_LOGO2_20_inst_addr                                        "0x0008"
#define  set_KME_LOGO2_KME_LOGO2_20_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_20_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_20_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_20_reg))
#define  KME_LOGO2_KME_LOGO2_20_km_logo_pxlrgydf_th_shift                        (0)
#define  KME_LOGO2_KME_LOGO2_20_km_logo_pxlrgydf_th_mask                         (0x000000FF)
#define  KME_LOGO2_KME_LOGO2_20_km_logo_pxlrgydf_th(data)                        (0x000000FF&(data))
#define  KME_LOGO2_KME_LOGO2_20_get_km_logo_pxlrgydf_th(data)                    (0x000000FF&(data))

#define  KME_LOGO2_KME_LOGO2_24                                                 0x1809BB24
#define  KME_LOGO2_KME_LOGO2_24_reg_addr                                         "0xB809BB24"
#define  KME_LOGO2_KME_LOGO2_24_reg                                              0xB809BB24
#define  KME_LOGO2_KME_LOGO2_24_inst_addr                                        "0x0009"
#define  set_KME_LOGO2_KME_LOGO2_24_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_24_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_24_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_24_reg))
#define  KME_LOGO2_KME_LOGO2_24_km_logo_pxlrgydf_bypass0_31_shift                (0)
#define  KME_LOGO2_KME_LOGO2_24_km_logo_pxlrgydf_bypass0_31_mask                 (0xFFFFFFFF)
#define  KME_LOGO2_KME_LOGO2_24_km_logo_pxlrgydf_bypass0_31(data)                (0xFFFFFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_24_get_km_logo_pxlrgydf_bypass0_31(data)            (0xFFFFFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_28                                                 0x1809BB28
#define  KME_LOGO2_KME_LOGO2_28_reg_addr                                         "0xB809BB28"
#define  KME_LOGO2_KME_LOGO2_28_reg                                              0xB809BB28
#define  KME_LOGO2_KME_LOGO2_28_inst_addr                                        "0x000A"
#define  set_KME_LOGO2_KME_LOGO2_28_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_28_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_28_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_28_reg))
#define  KME_LOGO2_KME_LOGO2_28_km_logo_static_rb_blklogo_after_clr_en_shift     (31)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blklogo_clr_en_shift                     (30)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_pxllogopost_ero_th_shift                 (22)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blklogopost_ero_th_shift                 (16)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blklogopost_eroen_shift                  (15)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blklogopostdlt_th_shift                  (9)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blkdltmsk2_shift                         (6)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blkdltmsk1_shift                         (3)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blkdltmsk0_shift                         (0)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_static_rb_blklogo_after_clr_en_mask      (0x80000000)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blklogo_clr_en_mask                      (0x40000000)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_pxllogopost_ero_th_mask                  (0x3FC00000)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blklogopost_ero_th_mask                  (0x003F0000)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blklogopost_eroen_mask                   (0x00008000)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blklogopostdlt_th_mask                   (0x00007E00)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blkdltmsk2_mask                          (0x000001C0)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blkdltmsk1_mask                          (0x00000038)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blkdltmsk0_mask                          (0x00000007)
#define  KME_LOGO2_KME_LOGO2_28_km_logo_static_rb_blklogo_after_clr_en(data)     (0x80000000&((data)<<31))
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blklogo_clr_en(data)                     (0x40000000&((data)<<30))
#define  KME_LOGO2_KME_LOGO2_28_km_logo_pxllogopost_ero_th(data)                 (0x3FC00000&((data)<<22))
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blklogopost_ero_th(data)                 (0x003F0000&((data)<<16))
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blklogopost_eroen(data)                  (0x00008000&((data)<<15))
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blklogopostdlt_th(data)                  (0x00007E00&((data)<<9))
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blkdltmsk2(data)                         (0x000001C0&((data)<<6))
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blkdltmsk1(data)                         (0x00000038&((data)<<3))
#define  KME_LOGO2_KME_LOGO2_28_km_logo_blkdltmsk0(data)                         (0x00000007&(data))
#define  KME_LOGO2_KME_LOGO2_28_get_km_logo_static_rb_blklogo_after_clr_en(data) ((0x80000000&(data))>>31)
#define  KME_LOGO2_KME_LOGO2_28_get_km_logo_blklogo_clr_en(data)                 ((0x40000000&(data))>>30)
#define  KME_LOGO2_KME_LOGO2_28_get_km_logo_pxllogopost_ero_th(data)             ((0x3FC00000&(data))>>22)
#define  KME_LOGO2_KME_LOGO2_28_get_km_logo_blklogopost_ero_th(data)             ((0x003F0000&(data))>>16)
#define  KME_LOGO2_KME_LOGO2_28_get_km_logo_blklogopost_eroen(data)              ((0x00008000&(data))>>15)
#define  KME_LOGO2_KME_LOGO2_28_get_km_logo_blklogopostdlt_th(data)              ((0x00007E00&(data))>>9)
#define  KME_LOGO2_KME_LOGO2_28_get_km_logo_blkdltmsk2(data)                     ((0x000001C0&(data))>>6)
#define  KME_LOGO2_KME_LOGO2_28_get_km_logo_blkdltmsk1(data)                     ((0x00000038&(data))>>3)
#define  KME_LOGO2_KME_LOGO2_28_get_km_logo_blkdltmsk0(data)                     (0x00000007&(data))

#define  KME_LOGO2_KME_LOGO2_2C                                                 0x1809BB2C
#define  KME_LOGO2_KME_LOGO2_2C_reg_addr                                         "0xB809BB2C"
#define  KME_LOGO2_KME_LOGO2_2C_reg                                              0xB809BB2C
#define  KME_LOGO2_KME_LOGO2_2C_inst_addr                                        "0x000B"
#define  set_KME_LOGO2_KME_LOGO2_2C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_2C_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_2C_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_2C_reg))
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxllogo_o_debug_force_shift              (27)
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxllogo_o_debug_postion_shift            (19)
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxllogo_o_debug_en_shift                 (18)
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxllogopost_eroen_shift                  (17)
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxllogopostdlt_th_shift                  (9)
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxldltmsk2_shift                         (6)
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxldltmsk1_shift                         (3)
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxldltmsk0_shift                         (0)
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxllogo_o_debug_force_mask               (0x78000000)
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxllogo_o_debug_postion_mask             (0x07F80000)
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxllogo_o_debug_en_mask                  (0x00040000)
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxllogopost_eroen_mask                   (0x00020000)
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxllogopostdlt_th_mask                   (0x0001FE00)
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxldltmsk2_mask                          (0x000001C0)
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxldltmsk1_mask                          (0x00000038)
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxldltmsk0_mask                          (0x00000007)
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxllogo_o_debug_force(data)              (0x78000000&((data)<<27))
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxllogo_o_debug_postion(data)            (0x07F80000&((data)<<19))
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxllogo_o_debug_en(data)                 (0x00040000&((data)<<18))
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxllogopost_eroen(data)                  (0x00020000&((data)<<17))
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxllogopostdlt_th(data)                  (0x0001FE00&((data)<<9))
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxldltmsk2(data)                         (0x000001C0&((data)<<6))
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxldltmsk1(data)                         (0x00000038&((data)<<3))
#define  KME_LOGO2_KME_LOGO2_2C_km_logo_pxldltmsk0(data)                         (0x00000007&(data))
#define  KME_LOGO2_KME_LOGO2_2C_get_km_logo_pxllogo_o_debug_force(data)          ((0x78000000&(data))>>27)
#define  KME_LOGO2_KME_LOGO2_2C_get_km_logo_pxllogo_o_debug_postion(data)        ((0x07F80000&(data))>>19)
#define  KME_LOGO2_KME_LOGO2_2C_get_km_logo_pxllogo_o_debug_en(data)             ((0x00040000&(data))>>18)
#define  KME_LOGO2_KME_LOGO2_2C_get_km_logo_pxllogopost_eroen(data)              ((0x00020000&(data))>>17)
#define  KME_LOGO2_KME_LOGO2_2C_get_km_logo_pxllogopostdlt_th(data)              ((0x0001FE00&(data))>>9)
#define  KME_LOGO2_KME_LOGO2_2C_get_km_logo_pxldltmsk2(data)                     ((0x000001C0&(data))>>6)
#define  KME_LOGO2_KME_LOGO2_2C_get_km_logo_pxldltmsk1(data)                     ((0x00000038&(data))>>3)
#define  KME_LOGO2_KME_LOGO2_2C_get_km_logo_pxldltmsk0(data)                     (0x00000007&(data))

#define  KME_LOGO2_KME_LOGO2_30                                                 0x1809BB30
#define  KME_LOGO2_KME_LOGO2_30_reg_addr                                         "0xB809BB30"
#define  KME_LOGO2_KME_LOGO2_30_reg                                              0xB809BB30
#define  KME_LOGO2_KME_LOGO2_30_inst_addr                                        "0x000C"
#define  set_KME_LOGO2_KME_LOGO2_30_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_30_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_30_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_30_reg))
#define  KME_LOGO2_KME_LOGO2_30_km_logo_debug_sel_shift                          (25)
#define  KME_LOGO2_KME_LOGO2_30_km_logo_blk_logo_force_shift                     (21)
#define  KME_LOGO2_KME_LOGO2_30_km_logo_blk_force_logo_postion_shift             (17)
#define  KME_LOGO2_KME_LOGO2_30_km_logo_blk_out_to_me_debug_en_shift             (16)
#define  KME_LOGO2_KME_LOGO2_30_plogo_req_gap_shift                              (8)
#define  KME_LOGO2_KME_LOGO2_30_plogo_row_num_shift                              (0)
#define  KME_LOGO2_KME_LOGO2_30_km_logo_debug_sel_mask                           (0x1E000000)
#define  KME_LOGO2_KME_LOGO2_30_km_logo_blk_logo_force_mask                      (0x01E00000)
#define  KME_LOGO2_KME_LOGO2_30_km_logo_blk_force_logo_postion_mask              (0x001E0000)
#define  KME_LOGO2_KME_LOGO2_30_km_logo_blk_out_to_me_debug_en_mask              (0x00010000)
#define  KME_LOGO2_KME_LOGO2_30_plogo_req_gap_mask                               (0x0000FF00)
#define  KME_LOGO2_KME_LOGO2_30_plogo_row_num_mask                               (0x000000FF)
#define  KME_LOGO2_KME_LOGO2_30_km_logo_debug_sel(data)                          (0x1E000000&((data)<<25))
#define  KME_LOGO2_KME_LOGO2_30_km_logo_blk_logo_force(data)                     (0x01E00000&((data)<<21))
#define  KME_LOGO2_KME_LOGO2_30_km_logo_blk_force_logo_postion(data)             (0x001E0000&((data)<<17))
#define  KME_LOGO2_KME_LOGO2_30_km_logo_blk_out_to_me_debug_en(data)             (0x00010000&((data)<<16))
#define  KME_LOGO2_KME_LOGO2_30_plogo_req_gap(data)                              (0x0000FF00&((data)<<8))
#define  KME_LOGO2_KME_LOGO2_30_plogo_row_num(data)                              (0x000000FF&(data))
#define  KME_LOGO2_KME_LOGO2_30_get_km_logo_debug_sel(data)                      ((0x1E000000&(data))>>25)
#define  KME_LOGO2_KME_LOGO2_30_get_km_logo_blk_logo_force(data)                 ((0x01E00000&(data))>>21)
#define  KME_LOGO2_KME_LOGO2_30_get_km_logo_blk_force_logo_postion(data)         ((0x001E0000&(data))>>17)
#define  KME_LOGO2_KME_LOGO2_30_get_km_logo_blk_out_to_me_debug_en(data)         ((0x00010000&(data))>>16)
#define  KME_LOGO2_KME_LOGO2_30_get_plogo_req_gap(data)                          ((0x0000FF00&(data))>>8)
#define  KME_LOGO2_KME_LOGO2_30_get_plogo_row_num(data)                          (0x000000FF&(data))

#define  KME_LOGO2_KME_LOGO2_34                                                 0x1809BB34
#define  KME_LOGO2_KME_LOGO2_34_reg_addr                                         "0xB809BB34"
#define  KME_LOGO2_KME_LOGO2_34_reg                                              0xB809BB34
#define  KME_LOGO2_KME_LOGO2_34_inst_addr                                        "0x000D"
#define  set_KME_LOGO2_KME_LOGO2_34_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_34_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_34_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_34_reg))
#define  KME_LOGO2_KME_LOGO2_34_kme_logo_sram_ls_value_shift                     (23)
#define  KME_LOGO2_KME_LOGO2_34_kme_logo_sram_ls_en_shift                        (22)
#define  KME_LOGO2_KME_LOGO2_34_plogo_use_last_shift                             (21)
#define  KME_LOGO2_KME_LOGO2_34_plogo_cursor_y_shift                             (11)
#define  KME_LOGO2_KME_LOGO2_34_plogo_cursor_x_shift                             (1)
#define  KME_LOGO2_KME_LOGO2_34_plogo_cursor_en_shift                            (0)
#define  KME_LOGO2_KME_LOGO2_34_kme_logo_sram_ls_value_mask                      (0x00800000)
#define  KME_LOGO2_KME_LOGO2_34_kme_logo_sram_ls_en_mask                         (0x00400000)
#define  KME_LOGO2_KME_LOGO2_34_plogo_use_last_mask                              (0x00200000)
#define  KME_LOGO2_KME_LOGO2_34_plogo_cursor_y_mask                              (0x001FF800)
#define  KME_LOGO2_KME_LOGO2_34_plogo_cursor_x_mask                              (0x000007FE)
#define  KME_LOGO2_KME_LOGO2_34_plogo_cursor_en_mask                             (0x00000001)
#define  KME_LOGO2_KME_LOGO2_34_kme_logo_sram_ls_value(data)                     (0x00800000&((data)<<23))
#define  KME_LOGO2_KME_LOGO2_34_kme_logo_sram_ls_en(data)                        (0x00400000&((data)<<22))
#define  KME_LOGO2_KME_LOGO2_34_plogo_use_last(data)                             (0x00200000&((data)<<21))
#define  KME_LOGO2_KME_LOGO2_34_plogo_cursor_y(data)                             (0x001FF800&((data)<<11))
#define  KME_LOGO2_KME_LOGO2_34_plogo_cursor_x(data)                             (0x000007FE&((data)<<1))
#define  KME_LOGO2_KME_LOGO2_34_plogo_cursor_en(data)                            (0x00000001&(data))
#define  KME_LOGO2_KME_LOGO2_34_get_kme_logo_sram_ls_value(data)                 ((0x00800000&(data))>>23)
#define  KME_LOGO2_KME_LOGO2_34_get_kme_logo_sram_ls_en(data)                    ((0x00400000&(data))>>22)
#define  KME_LOGO2_KME_LOGO2_34_get_plogo_use_last(data)                         ((0x00200000&(data))>>21)
#define  KME_LOGO2_KME_LOGO2_34_get_plogo_cursor_y(data)                         ((0x001FF800&(data))>>11)
#define  KME_LOGO2_KME_LOGO2_34_get_plogo_cursor_x(data)                         ((0x000007FE&(data))>>1)
#define  KME_LOGO2_KME_LOGO2_34_get_plogo_cursor_en(data)                        (0x00000001&(data))

#define  KME_LOGO2_KME_LOGO2_38                                                 0x1809BB38
#define  KME_LOGO2_KME_LOGO2_38_reg_addr                                         "0xB809BB38"
#define  KME_LOGO2_KME_LOGO2_38_reg                                              0xB809BB38
#define  KME_LOGO2_KME_LOGO2_38_inst_addr                                        "0x000E"
#define  set_KME_LOGO2_KME_LOGO2_38_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_38_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_38_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_38_reg))
#define  KME_LOGO2_KME_LOGO2_38_regr_km_logo_debug_data_shift                    (0)
#define  KME_LOGO2_KME_LOGO2_38_regr_km_logo_debug_data_mask                     (0xFFFFFFFF)
#define  KME_LOGO2_KME_LOGO2_38_regr_km_logo_debug_data(data)                    (0xFFFFFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_38_get_regr_km_logo_debug_data(data)                (0xFFFFFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_3C                                                 0x1809BB3C
#define  KME_LOGO2_KME_LOGO2_3C_reg_addr                                         "0xB809BB3C"
#define  KME_LOGO2_KME_LOGO2_3C_reg                                              0xB809BB3C
#define  KME_LOGO2_KME_LOGO2_3C_inst_addr                                        "0x000F"
#define  set_KME_LOGO2_KME_LOGO2_3C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_3C_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_3C_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_3C_reg))
#define  KME_LOGO2_KME_LOGO2_3C_regr_km_logo_frame_total_logobit_shift           (0)
#define  KME_LOGO2_KME_LOGO2_3C_regr_km_logo_frame_total_logobit_mask            (0x00007FFF)
#define  KME_LOGO2_KME_LOGO2_3C_regr_km_logo_frame_total_logobit(data)           (0x00007FFF&(data))
#define  KME_LOGO2_KME_LOGO2_3C_get_regr_km_logo_frame_total_logobit(data)       (0x00007FFF&(data))

#define  KME_LOGO2_KME_LOGO2_40                                                 0x1809BB40
#define  KME_LOGO2_KME_LOGO2_40_reg_addr                                         "0xB809BB40"
#define  KME_LOGO2_KME_LOGO2_40_reg                                              0xB809BB40
#define  KME_LOGO2_KME_LOGO2_40_inst_addr                                        "0x0010"
#define  set_KME_LOGO2_KME_LOGO2_40_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_40_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_40_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_40_reg))
#define  KME_LOGO2_KME_LOGO2_40_regr_km_logo_pxlrg_idx1_cnt_shift                (14)
#define  KME_LOGO2_KME_LOGO2_40_regr_km_logo_pxlrg_idx0_cnt_shift                (0)
#define  KME_LOGO2_KME_LOGO2_40_regr_km_logo_pxlrg_idx1_cnt_mask                 (0x0FFFC000)
#define  KME_LOGO2_KME_LOGO2_40_regr_km_logo_pxlrg_idx0_cnt_mask                 (0x00003FFF)
#define  KME_LOGO2_KME_LOGO2_40_regr_km_logo_pxlrg_idx1_cnt(data)                (0x0FFFC000&((data)<<14))
#define  KME_LOGO2_KME_LOGO2_40_regr_km_logo_pxlrg_idx0_cnt(data)                (0x00003FFF&(data))
#define  KME_LOGO2_KME_LOGO2_40_get_regr_km_logo_pxlrg_idx1_cnt(data)            ((0x0FFFC000&(data))>>14)
#define  KME_LOGO2_KME_LOGO2_40_get_regr_km_logo_pxlrg_idx0_cnt(data)            (0x00003FFF&(data))

#define  KME_LOGO2_KME_LOGO2_44                                                 0x1809BB44
#define  KME_LOGO2_KME_LOGO2_44_reg_addr                                         "0xB809BB44"
#define  KME_LOGO2_KME_LOGO2_44_reg                                              0xB809BB44
#define  KME_LOGO2_KME_LOGO2_44_inst_addr                                        "0x0011"
#define  set_KME_LOGO2_KME_LOGO2_44_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_44_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_44_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_44_reg))
#define  KME_LOGO2_KME_LOGO2_44_regr_km_logo_pxlrg_idx3_cnt_shift                (14)
#define  KME_LOGO2_KME_LOGO2_44_regr_km_logo_pxlrg_idx2_cnt_shift                (0)
#define  KME_LOGO2_KME_LOGO2_44_regr_km_logo_pxlrg_idx3_cnt_mask                 (0x0FFFC000)
#define  KME_LOGO2_KME_LOGO2_44_regr_km_logo_pxlrg_idx2_cnt_mask                 (0x00003FFF)
#define  KME_LOGO2_KME_LOGO2_44_regr_km_logo_pxlrg_idx3_cnt(data)                (0x0FFFC000&((data)<<14))
#define  KME_LOGO2_KME_LOGO2_44_regr_km_logo_pxlrg_idx2_cnt(data)                (0x00003FFF&(data))
#define  KME_LOGO2_KME_LOGO2_44_get_regr_km_logo_pxlrg_idx3_cnt(data)            ((0x0FFFC000&(data))>>14)
#define  KME_LOGO2_KME_LOGO2_44_get_regr_km_logo_pxlrg_idx2_cnt(data)            (0x00003FFF&(data))

#define  KME_LOGO2_KME_LOGO2_48                                                 0x1809BB48
#define  KME_LOGO2_KME_LOGO2_48_reg_addr                                         "0xB809BB48"
#define  KME_LOGO2_KME_LOGO2_48_reg                                              0xB809BB48
#define  KME_LOGO2_KME_LOGO2_48_inst_addr                                        "0x0012"
#define  set_KME_LOGO2_KME_LOGO2_48_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_48_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_48_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_48_reg))
#define  KME_LOGO2_KME_LOGO2_48_regr_km_logo_pxlrg_idx5_cnt_shift                (14)
#define  KME_LOGO2_KME_LOGO2_48_regr_km_logo_pxlrg_idx4_cnt_shift                (0)
#define  KME_LOGO2_KME_LOGO2_48_regr_km_logo_pxlrg_idx5_cnt_mask                 (0x0FFFC000)
#define  KME_LOGO2_KME_LOGO2_48_regr_km_logo_pxlrg_idx4_cnt_mask                 (0x00003FFF)
#define  KME_LOGO2_KME_LOGO2_48_regr_km_logo_pxlrg_idx5_cnt(data)                (0x0FFFC000&((data)<<14))
#define  KME_LOGO2_KME_LOGO2_48_regr_km_logo_pxlrg_idx4_cnt(data)                (0x00003FFF&(data))
#define  KME_LOGO2_KME_LOGO2_48_get_regr_km_logo_pxlrg_idx5_cnt(data)            ((0x0FFFC000&(data))>>14)
#define  KME_LOGO2_KME_LOGO2_48_get_regr_km_logo_pxlrg_idx4_cnt(data)            (0x00003FFF&(data))

#define  KME_LOGO2_KME_LOGO2_4C                                                 0x1809BB4C
#define  KME_LOGO2_KME_LOGO2_4C_reg_addr                                         "0xB809BB4C"
#define  KME_LOGO2_KME_LOGO2_4C_reg                                              0xB809BB4C
#define  KME_LOGO2_KME_LOGO2_4C_inst_addr                                        "0x0013"
#define  set_KME_LOGO2_KME_LOGO2_4C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_4C_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_4C_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_4C_reg))
#define  KME_LOGO2_KME_LOGO2_4C_regr_km_logo_pxlrg_idx7_cnt_shift                (14)
#define  KME_LOGO2_KME_LOGO2_4C_regr_km_logo_pxlrg_idx6_cnt_shift                (0)
#define  KME_LOGO2_KME_LOGO2_4C_regr_km_logo_pxlrg_idx7_cnt_mask                 (0x0FFFC000)
#define  KME_LOGO2_KME_LOGO2_4C_regr_km_logo_pxlrg_idx6_cnt_mask                 (0x00003FFF)
#define  KME_LOGO2_KME_LOGO2_4C_regr_km_logo_pxlrg_idx7_cnt(data)                (0x0FFFC000&((data)<<14))
#define  KME_LOGO2_KME_LOGO2_4C_regr_km_logo_pxlrg_idx6_cnt(data)                (0x00003FFF&(data))
#define  KME_LOGO2_KME_LOGO2_4C_get_regr_km_logo_pxlrg_idx7_cnt(data)            ((0x0FFFC000&(data))>>14)
#define  KME_LOGO2_KME_LOGO2_4C_get_regr_km_logo_pxlrg_idx6_cnt(data)            (0x00003FFF&(data))

#define  KME_LOGO2_KME_LOGO2_50                                                 0x1809BB50
#define  KME_LOGO2_KME_LOGO2_50_reg_addr                                         "0xB809BB50"
#define  KME_LOGO2_KME_LOGO2_50_reg                                              0xB809BB50
#define  KME_LOGO2_KME_LOGO2_50_inst_addr                                        "0x0014"
#define  set_KME_LOGO2_KME_LOGO2_50_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_50_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_50_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_50_reg))
#define  KME_LOGO2_KME_LOGO2_50_regr_km_logo_pxlrg_idx9_cnt_shift                (14)
#define  KME_LOGO2_KME_LOGO2_50_regr_km_logo_pxlrg_idx8_cnt_shift                (0)
#define  KME_LOGO2_KME_LOGO2_50_regr_km_logo_pxlrg_idx9_cnt_mask                 (0x0FFFC000)
#define  KME_LOGO2_KME_LOGO2_50_regr_km_logo_pxlrg_idx8_cnt_mask                 (0x00003FFF)
#define  KME_LOGO2_KME_LOGO2_50_regr_km_logo_pxlrg_idx9_cnt(data)                (0x0FFFC000&((data)<<14))
#define  KME_LOGO2_KME_LOGO2_50_regr_km_logo_pxlrg_idx8_cnt(data)                (0x00003FFF&(data))
#define  KME_LOGO2_KME_LOGO2_50_get_regr_km_logo_pxlrg_idx9_cnt(data)            ((0x0FFFC000&(data))>>14)
#define  KME_LOGO2_KME_LOGO2_50_get_regr_km_logo_pxlrg_idx8_cnt(data)            (0x00003FFF&(data))

#define  KME_LOGO2_KME_LOGO2_54                                                 0x1809BB54
#define  KME_LOGO2_KME_LOGO2_54_reg_addr                                         "0xB809BB54"
#define  KME_LOGO2_KME_LOGO2_54_reg                                              0xB809BB54
#define  KME_LOGO2_KME_LOGO2_54_inst_addr                                        "0x0015"
#define  set_KME_LOGO2_KME_LOGO2_54_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_54_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_54_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_54_reg))
#define  KME_LOGO2_KME_LOGO2_54_regr_km_logo_pxlrg_idx11_cnt_shift               (14)
#define  KME_LOGO2_KME_LOGO2_54_regr_km_logo_pxlrg_idx10_cnt_shift               (0)
#define  KME_LOGO2_KME_LOGO2_54_regr_km_logo_pxlrg_idx11_cnt_mask                (0x0FFFC000)
#define  KME_LOGO2_KME_LOGO2_54_regr_km_logo_pxlrg_idx10_cnt_mask                (0x00003FFF)
#define  KME_LOGO2_KME_LOGO2_54_regr_km_logo_pxlrg_idx11_cnt(data)               (0x0FFFC000&((data)<<14))
#define  KME_LOGO2_KME_LOGO2_54_regr_km_logo_pxlrg_idx10_cnt(data)               (0x00003FFF&(data))
#define  KME_LOGO2_KME_LOGO2_54_get_regr_km_logo_pxlrg_idx11_cnt(data)           ((0x0FFFC000&(data))>>14)
#define  KME_LOGO2_KME_LOGO2_54_get_regr_km_logo_pxlrg_idx10_cnt(data)           (0x00003FFF&(data))

#define  KME_LOGO2_KME_LOGO2_58                                                 0x1809BB58
#define  KME_LOGO2_KME_LOGO2_58_reg_addr                                         "0xB809BB58"
#define  KME_LOGO2_KME_LOGO2_58_reg                                              0xB809BB58
#define  KME_LOGO2_KME_LOGO2_58_inst_addr                                        "0x0016"
#define  set_KME_LOGO2_KME_LOGO2_58_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_58_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_58_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_58_reg))
#define  KME_LOGO2_KME_LOGO2_58_regr_km_logo_pxlrg_idx13_cnt_shift               (14)
#define  KME_LOGO2_KME_LOGO2_58_regr_km_logo_pxlrg_idx12_cnt_shift               (0)
#define  KME_LOGO2_KME_LOGO2_58_regr_km_logo_pxlrg_idx13_cnt_mask                (0x0FFFC000)
#define  KME_LOGO2_KME_LOGO2_58_regr_km_logo_pxlrg_idx12_cnt_mask                (0x00003FFF)
#define  KME_LOGO2_KME_LOGO2_58_regr_km_logo_pxlrg_idx13_cnt(data)               (0x0FFFC000&((data)<<14))
#define  KME_LOGO2_KME_LOGO2_58_regr_km_logo_pxlrg_idx12_cnt(data)               (0x00003FFF&(data))
#define  KME_LOGO2_KME_LOGO2_58_get_regr_km_logo_pxlrg_idx13_cnt(data)           ((0x0FFFC000&(data))>>14)
#define  KME_LOGO2_KME_LOGO2_58_get_regr_km_logo_pxlrg_idx12_cnt(data)           (0x00003FFF&(data))

#define  KME_LOGO2_KME_LOGO2_5C                                                 0x1809BB5C
#define  KME_LOGO2_KME_LOGO2_5C_reg_addr                                         "0xB809BB5C"
#define  KME_LOGO2_KME_LOGO2_5C_reg                                              0xB809BB5C
#define  KME_LOGO2_KME_LOGO2_5C_inst_addr                                        "0x0017"
#define  set_KME_LOGO2_KME_LOGO2_5C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_5C_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_5C_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_5C_reg))
#define  KME_LOGO2_KME_LOGO2_5C_regr_km_logo_pxlrg_idx15_cnt_shift               (14)
#define  KME_LOGO2_KME_LOGO2_5C_regr_km_logo_pxlrg_idx14_cnt_shift               (0)
#define  KME_LOGO2_KME_LOGO2_5C_regr_km_logo_pxlrg_idx15_cnt_mask                (0x0FFFC000)
#define  KME_LOGO2_KME_LOGO2_5C_regr_km_logo_pxlrg_idx14_cnt_mask                (0x00003FFF)
#define  KME_LOGO2_KME_LOGO2_5C_regr_km_logo_pxlrg_idx15_cnt(data)               (0x0FFFC000&((data)<<14))
#define  KME_LOGO2_KME_LOGO2_5C_regr_km_logo_pxlrg_idx14_cnt(data)               (0x00003FFF&(data))
#define  KME_LOGO2_KME_LOGO2_5C_get_regr_km_logo_pxlrg_idx15_cnt(data)           ((0x0FFFC000&(data))>>14)
#define  KME_LOGO2_KME_LOGO2_5C_get_regr_km_logo_pxlrg_idx14_cnt(data)           (0x00003FFF&(data))

#define  KME_LOGO2_KME_LOGO2_60                                                 0x1809BB60
#define  KME_LOGO2_KME_LOGO2_60_reg_addr                                         "0xB809BB60"
#define  KME_LOGO2_KME_LOGO2_60_reg                                              0xB809BB60
#define  KME_LOGO2_KME_LOGO2_60_inst_addr                                        "0x0018"
#define  set_KME_LOGO2_KME_LOGO2_60_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_60_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_60_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_60_reg))
#define  KME_LOGO2_KME_LOGO2_60_regr_km_logo_pxlrg_idx17_cnt_shift               (14)
#define  KME_LOGO2_KME_LOGO2_60_regr_km_logo_pxlrg_idx16_cnt_shift               (0)
#define  KME_LOGO2_KME_LOGO2_60_regr_km_logo_pxlrg_idx17_cnt_mask                (0x0FFFC000)
#define  KME_LOGO2_KME_LOGO2_60_regr_km_logo_pxlrg_idx16_cnt_mask                (0x00003FFF)
#define  KME_LOGO2_KME_LOGO2_60_regr_km_logo_pxlrg_idx17_cnt(data)               (0x0FFFC000&((data)<<14))
#define  KME_LOGO2_KME_LOGO2_60_regr_km_logo_pxlrg_idx16_cnt(data)               (0x00003FFF&(data))
#define  KME_LOGO2_KME_LOGO2_60_get_regr_km_logo_pxlrg_idx17_cnt(data)           ((0x0FFFC000&(data))>>14)
#define  KME_LOGO2_KME_LOGO2_60_get_regr_km_logo_pxlrg_idx16_cnt(data)           (0x00003FFF&(data))

#define  KME_LOGO2_KME_LOGO2_64                                                 0x1809BB64
#define  KME_LOGO2_KME_LOGO2_64_reg_addr                                         "0xB809BB64"
#define  KME_LOGO2_KME_LOGO2_64_reg                                              0xB809BB64
#define  KME_LOGO2_KME_LOGO2_64_inst_addr                                        "0x0019"
#define  set_KME_LOGO2_KME_LOGO2_64_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_64_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_64_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_64_reg))
#define  KME_LOGO2_KME_LOGO2_64_regr_km_logo_pxlrg_idx19_cnt_shift               (14)
#define  KME_LOGO2_KME_LOGO2_64_regr_km_logo_pxlrg_idx18_cnt_shift               (0)
#define  KME_LOGO2_KME_LOGO2_64_regr_km_logo_pxlrg_idx19_cnt_mask                (0x0FFFC000)
#define  KME_LOGO2_KME_LOGO2_64_regr_km_logo_pxlrg_idx18_cnt_mask                (0x00003FFF)
#define  KME_LOGO2_KME_LOGO2_64_regr_km_logo_pxlrg_idx19_cnt(data)               (0x0FFFC000&((data)<<14))
#define  KME_LOGO2_KME_LOGO2_64_regr_km_logo_pxlrg_idx18_cnt(data)               (0x00003FFF&(data))
#define  KME_LOGO2_KME_LOGO2_64_get_regr_km_logo_pxlrg_idx19_cnt(data)           ((0x0FFFC000&(data))>>14)
#define  KME_LOGO2_KME_LOGO2_64_get_regr_km_logo_pxlrg_idx18_cnt(data)           (0x00003FFF&(data))

#define  KME_LOGO2_KME_LOGO2_68                                                 0x1809BB68
#define  KME_LOGO2_KME_LOGO2_68_reg_addr                                         "0xB809BB68"
#define  KME_LOGO2_KME_LOGO2_68_reg                                              0xB809BB68
#define  KME_LOGO2_KME_LOGO2_68_inst_addr                                        "0x001A"
#define  set_KME_LOGO2_KME_LOGO2_68_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_68_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_68_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_68_reg))
#define  KME_LOGO2_KME_LOGO2_68_regr_km_logo_pxlrg_idx21_cnt_shift               (14)
#define  KME_LOGO2_KME_LOGO2_68_regr_km_logo_pxlrg_idx20_cnt_shift               (0)
#define  KME_LOGO2_KME_LOGO2_68_regr_km_logo_pxlrg_idx21_cnt_mask                (0x0FFFC000)
#define  KME_LOGO2_KME_LOGO2_68_regr_km_logo_pxlrg_idx20_cnt_mask                (0x00003FFF)
#define  KME_LOGO2_KME_LOGO2_68_regr_km_logo_pxlrg_idx21_cnt(data)               (0x0FFFC000&((data)<<14))
#define  KME_LOGO2_KME_LOGO2_68_regr_km_logo_pxlrg_idx20_cnt(data)               (0x00003FFF&(data))
#define  KME_LOGO2_KME_LOGO2_68_get_regr_km_logo_pxlrg_idx21_cnt(data)           ((0x0FFFC000&(data))>>14)
#define  KME_LOGO2_KME_LOGO2_68_get_regr_km_logo_pxlrg_idx20_cnt(data)           (0x00003FFF&(data))

#define  KME_LOGO2_KME_LOGO2_6C                                                 0x1809BB6C
#define  KME_LOGO2_KME_LOGO2_6C_reg_addr                                         "0xB809BB6C"
#define  KME_LOGO2_KME_LOGO2_6C_reg                                              0xB809BB6C
#define  KME_LOGO2_KME_LOGO2_6C_inst_addr                                        "0x001B"
#define  set_KME_LOGO2_KME_LOGO2_6C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_6C_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_6C_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_6C_reg))
#define  KME_LOGO2_KME_LOGO2_6C_regr_km_logo_pxlrg_idx23_cnt_shift               (14)
#define  KME_LOGO2_KME_LOGO2_6C_regr_km_logo_pxlrg_idx22_cnt_shift               (0)
#define  KME_LOGO2_KME_LOGO2_6C_regr_km_logo_pxlrg_idx23_cnt_mask                (0x0FFFC000)
#define  KME_LOGO2_KME_LOGO2_6C_regr_km_logo_pxlrg_idx22_cnt_mask                (0x00003FFF)
#define  KME_LOGO2_KME_LOGO2_6C_regr_km_logo_pxlrg_idx23_cnt(data)               (0x0FFFC000&((data)<<14))
#define  KME_LOGO2_KME_LOGO2_6C_regr_km_logo_pxlrg_idx22_cnt(data)               (0x00003FFF&(data))
#define  KME_LOGO2_KME_LOGO2_6C_get_regr_km_logo_pxlrg_idx23_cnt(data)           ((0x0FFFC000&(data))>>14)
#define  KME_LOGO2_KME_LOGO2_6C_get_regr_km_logo_pxlrg_idx22_cnt(data)           (0x00003FFF&(data))

#define  KME_LOGO2_KME_LOGO2_70                                                 0x1809BB70
#define  KME_LOGO2_KME_LOGO2_70_reg_addr                                         "0xB809BB70"
#define  KME_LOGO2_KME_LOGO2_70_reg                                              0xB809BB70
#define  KME_LOGO2_KME_LOGO2_70_inst_addr                                        "0x001C"
#define  set_KME_LOGO2_KME_LOGO2_70_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_70_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_70_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_70_reg))
#define  KME_LOGO2_KME_LOGO2_70_regr_km_logo_pxlrg_idx25_cnt_shift               (14)
#define  KME_LOGO2_KME_LOGO2_70_regr_km_logo_pxlrg_idx24_cnt_shift               (0)
#define  KME_LOGO2_KME_LOGO2_70_regr_km_logo_pxlrg_idx25_cnt_mask                (0x0FFFC000)
#define  KME_LOGO2_KME_LOGO2_70_regr_km_logo_pxlrg_idx24_cnt_mask                (0x00003FFF)
#define  KME_LOGO2_KME_LOGO2_70_regr_km_logo_pxlrg_idx25_cnt(data)               (0x0FFFC000&((data)<<14))
#define  KME_LOGO2_KME_LOGO2_70_regr_km_logo_pxlrg_idx24_cnt(data)               (0x00003FFF&(data))
#define  KME_LOGO2_KME_LOGO2_70_get_regr_km_logo_pxlrg_idx25_cnt(data)           ((0x0FFFC000&(data))>>14)
#define  KME_LOGO2_KME_LOGO2_70_get_regr_km_logo_pxlrg_idx24_cnt(data)           (0x00003FFF&(data))

#define  KME_LOGO2_KME_LOGO2_74                                                 0x1809BB74
#define  KME_LOGO2_KME_LOGO2_74_reg_addr                                         "0xB809BB74"
#define  KME_LOGO2_KME_LOGO2_74_reg                                              0xB809BB74
#define  KME_LOGO2_KME_LOGO2_74_inst_addr                                        "0x001D"
#define  set_KME_LOGO2_KME_LOGO2_74_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_74_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_74_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_74_reg))
#define  KME_LOGO2_KME_LOGO2_74_regr_km_logo_pxlrg_idx27_cnt_shift               (14)
#define  KME_LOGO2_KME_LOGO2_74_regr_km_logo_pxlrg_idx26_cnt_shift               (0)
#define  KME_LOGO2_KME_LOGO2_74_regr_km_logo_pxlrg_idx27_cnt_mask                (0x0FFFC000)
#define  KME_LOGO2_KME_LOGO2_74_regr_km_logo_pxlrg_idx26_cnt_mask                (0x00003FFF)
#define  KME_LOGO2_KME_LOGO2_74_regr_km_logo_pxlrg_idx27_cnt(data)               (0x0FFFC000&((data)<<14))
#define  KME_LOGO2_KME_LOGO2_74_regr_km_logo_pxlrg_idx26_cnt(data)               (0x00003FFF&(data))
#define  KME_LOGO2_KME_LOGO2_74_get_regr_km_logo_pxlrg_idx27_cnt(data)           ((0x0FFFC000&(data))>>14)
#define  KME_LOGO2_KME_LOGO2_74_get_regr_km_logo_pxlrg_idx26_cnt(data)           (0x00003FFF&(data))

#define  KME_LOGO2_KME_LOGO2_78                                                 0x1809BB78
#define  KME_LOGO2_KME_LOGO2_78_reg_addr                                         "0xB809BB78"
#define  KME_LOGO2_KME_LOGO2_78_reg                                              0xB809BB78
#define  KME_LOGO2_KME_LOGO2_78_inst_addr                                        "0x001E"
#define  set_KME_LOGO2_KME_LOGO2_78_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_78_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_78_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_78_reg))
#define  KME_LOGO2_KME_LOGO2_78_regr_km_logo_pxlrg_idx29_cnt_shift               (14)
#define  KME_LOGO2_KME_LOGO2_78_regr_km_logo_pxlrg_idx28_cnt_shift               (0)
#define  KME_LOGO2_KME_LOGO2_78_regr_km_logo_pxlrg_idx29_cnt_mask                (0x0FFFC000)
#define  KME_LOGO2_KME_LOGO2_78_regr_km_logo_pxlrg_idx28_cnt_mask                (0x00003FFF)
#define  KME_LOGO2_KME_LOGO2_78_regr_km_logo_pxlrg_idx29_cnt(data)               (0x0FFFC000&((data)<<14))
#define  KME_LOGO2_KME_LOGO2_78_regr_km_logo_pxlrg_idx28_cnt(data)               (0x00003FFF&(data))
#define  KME_LOGO2_KME_LOGO2_78_get_regr_km_logo_pxlrg_idx29_cnt(data)           ((0x0FFFC000&(data))>>14)
#define  KME_LOGO2_KME_LOGO2_78_get_regr_km_logo_pxlrg_idx28_cnt(data)           (0x00003FFF&(data))

#define  KME_LOGO2_KME_LOGO2_7C                                                 0x1809BB7C
#define  KME_LOGO2_KME_LOGO2_7C_reg_addr                                         "0xB809BB7C"
#define  KME_LOGO2_KME_LOGO2_7C_reg                                              0xB809BB7C
#define  KME_LOGO2_KME_LOGO2_7C_inst_addr                                        "0x001F"
#define  set_KME_LOGO2_KME_LOGO2_7C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_7C_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_7C_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_7C_reg))
#define  KME_LOGO2_KME_LOGO2_7C_regr_km_logo_pxlrg_idx31_cnt_shift               (14)
#define  KME_LOGO2_KME_LOGO2_7C_regr_km_logo_pxlrg_idx30_cnt_shift               (0)
#define  KME_LOGO2_KME_LOGO2_7C_regr_km_logo_pxlrg_idx31_cnt_mask                (0x0FFFC000)
#define  KME_LOGO2_KME_LOGO2_7C_regr_km_logo_pxlrg_idx30_cnt_mask                (0x00003FFF)
#define  KME_LOGO2_KME_LOGO2_7C_regr_km_logo_pxlrg_idx31_cnt(data)               (0x0FFFC000&((data)<<14))
#define  KME_LOGO2_KME_LOGO2_7C_regr_km_logo_pxlrg_idx30_cnt(data)               (0x00003FFF&(data))
#define  KME_LOGO2_KME_LOGO2_7C_get_regr_km_logo_pxlrg_idx31_cnt(data)           ((0x0FFFC000&(data))>>14)
#define  KME_LOGO2_KME_LOGO2_7C_get_regr_km_logo_pxlrg_idx30_cnt(data)           (0x00003FFF&(data))

#define  KME_LOGO2_KME_LOGO2_80                                                 0x1809BB80
#define  KME_LOGO2_KME_LOGO2_80_reg_addr                                         "0xB809BB80"
#define  KME_LOGO2_KME_LOGO2_80_reg                                              0xB809BB80
#define  KME_LOGO2_KME_LOGO2_80_inst_addr                                        "0x0020"
#define  set_KME_LOGO2_KME_LOGO2_80_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_80_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_80_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_80_reg))
#define  KME_LOGO2_KME_LOGO2_80_regr_km_logo_blkrg_idx0_cnt_shift                (20)
#define  KME_LOGO2_KME_LOGO2_80_regr_km_logo_pxlrg_idx0_y_shift                  (0)
#define  KME_LOGO2_KME_LOGO2_80_regr_km_logo_blkrg_idx0_cnt_mask                 (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_80_regr_km_logo_pxlrg_idx0_y_mask                   (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_80_regr_km_logo_blkrg_idx0_cnt(data)                (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_80_regr_km_logo_pxlrg_idx0_y(data)                  (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_80_get_regr_km_logo_blkrg_idx0_cnt(data)            ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_80_get_regr_km_logo_pxlrg_idx0_y(data)              (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_84                                                 0x1809BB84
#define  KME_LOGO2_KME_LOGO2_84_reg_addr                                         "0xB809BB84"
#define  KME_LOGO2_KME_LOGO2_84_reg                                              0xB809BB84
#define  KME_LOGO2_KME_LOGO2_84_inst_addr                                        "0x0021"
#define  set_KME_LOGO2_KME_LOGO2_84_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_84_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_84_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_84_reg))
#define  KME_LOGO2_KME_LOGO2_84_regr_km_logo_blkrg_idx1_cnt_shift                (20)
#define  KME_LOGO2_KME_LOGO2_84_regr_km_logo_pxlrg_idx1_y_shift                  (0)
#define  KME_LOGO2_KME_LOGO2_84_regr_km_logo_blkrg_idx1_cnt_mask                 (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_84_regr_km_logo_pxlrg_idx1_y_mask                   (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_84_regr_km_logo_blkrg_idx1_cnt(data)                (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_84_regr_km_logo_pxlrg_idx1_y(data)                  (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_84_get_regr_km_logo_blkrg_idx1_cnt(data)            ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_84_get_regr_km_logo_pxlrg_idx1_y(data)              (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_88                                                 0x1809BB88
#define  KME_LOGO2_KME_LOGO2_88_reg_addr                                         "0xB809BB88"
#define  KME_LOGO2_KME_LOGO2_88_reg                                              0xB809BB88
#define  KME_LOGO2_KME_LOGO2_88_inst_addr                                        "0x0022"
#define  set_KME_LOGO2_KME_LOGO2_88_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_88_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_88_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_88_reg))
#define  KME_LOGO2_KME_LOGO2_88_regr_km_logo_blkrg_idx2_cnt_shift                (20)
#define  KME_LOGO2_KME_LOGO2_88_regr_km_logo_pxlrg_idx2_y_shift                  (0)
#define  KME_LOGO2_KME_LOGO2_88_regr_km_logo_blkrg_idx2_cnt_mask                 (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_88_regr_km_logo_pxlrg_idx2_y_mask                   (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_88_regr_km_logo_blkrg_idx2_cnt(data)                (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_88_regr_km_logo_pxlrg_idx2_y(data)                  (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_88_get_regr_km_logo_blkrg_idx2_cnt(data)            ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_88_get_regr_km_logo_pxlrg_idx2_y(data)              (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_8C                                                 0x1809BB8C
#define  KME_LOGO2_KME_LOGO2_8C_reg_addr                                         "0xB809BB8C"
#define  KME_LOGO2_KME_LOGO2_8C_reg                                              0xB809BB8C
#define  KME_LOGO2_KME_LOGO2_8C_inst_addr                                        "0x0023"
#define  set_KME_LOGO2_KME_LOGO2_8C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_8C_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_8C_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_8C_reg))
#define  KME_LOGO2_KME_LOGO2_8C_regr_km_logo_blkrg_idx3_cnt_shift                (20)
#define  KME_LOGO2_KME_LOGO2_8C_regr_km_logo_pxlrg_idx3_y_shift                  (0)
#define  KME_LOGO2_KME_LOGO2_8C_regr_km_logo_blkrg_idx3_cnt_mask                 (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_8C_regr_km_logo_pxlrg_idx3_y_mask                   (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_8C_regr_km_logo_blkrg_idx3_cnt(data)                (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_8C_regr_km_logo_pxlrg_idx3_y(data)                  (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_8C_get_regr_km_logo_blkrg_idx3_cnt(data)            ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_8C_get_regr_km_logo_pxlrg_idx3_y(data)              (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_90                                                 0x1809BB90
#define  KME_LOGO2_KME_LOGO2_90_reg_addr                                         "0xB809BB90"
#define  KME_LOGO2_KME_LOGO2_90_reg                                              0xB809BB90
#define  KME_LOGO2_KME_LOGO2_90_inst_addr                                        "0x0024"
#define  set_KME_LOGO2_KME_LOGO2_90_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_90_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_90_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_90_reg))
#define  KME_LOGO2_KME_LOGO2_90_regr_km_logo_blkrg_idx4_cnt_shift                (20)
#define  KME_LOGO2_KME_LOGO2_90_regr_km_logo_pxlrg_idx4_y_shift                  (0)
#define  KME_LOGO2_KME_LOGO2_90_regr_km_logo_blkrg_idx4_cnt_mask                 (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_90_regr_km_logo_pxlrg_idx4_y_mask                   (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_90_regr_km_logo_blkrg_idx4_cnt(data)                (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_90_regr_km_logo_pxlrg_idx4_y(data)                  (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_90_get_regr_km_logo_blkrg_idx4_cnt(data)            ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_90_get_regr_km_logo_pxlrg_idx4_y(data)              (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_94                                                 0x1809BB94
#define  KME_LOGO2_KME_LOGO2_94_reg_addr                                         "0xB809BB94"
#define  KME_LOGO2_KME_LOGO2_94_reg                                              0xB809BB94
#define  KME_LOGO2_KME_LOGO2_94_inst_addr                                        "0x0025"
#define  set_KME_LOGO2_KME_LOGO2_94_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_94_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_94_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_94_reg))
#define  KME_LOGO2_KME_LOGO2_94_regr_km_logo_blkrg_idx5_cnt_shift                (20)
#define  KME_LOGO2_KME_LOGO2_94_regr_km_logo_pxlrg_idx5_y_shift                  (0)
#define  KME_LOGO2_KME_LOGO2_94_regr_km_logo_blkrg_idx5_cnt_mask                 (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_94_regr_km_logo_pxlrg_idx5_y_mask                   (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_94_regr_km_logo_blkrg_idx5_cnt(data)                (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_94_regr_km_logo_pxlrg_idx5_y(data)                  (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_94_get_regr_km_logo_blkrg_idx5_cnt(data)            ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_94_get_regr_km_logo_pxlrg_idx5_y(data)              (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_98                                                 0x1809BB98
#define  KME_LOGO2_KME_LOGO2_98_reg_addr                                         "0xB809BB98"
#define  KME_LOGO2_KME_LOGO2_98_reg                                              0xB809BB98
#define  KME_LOGO2_KME_LOGO2_98_inst_addr                                        "0x0026"
#define  set_KME_LOGO2_KME_LOGO2_98_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_98_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_98_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_98_reg))
#define  KME_LOGO2_KME_LOGO2_98_regr_km_logo_blkrg_idx6_cnt_shift                (20)
#define  KME_LOGO2_KME_LOGO2_98_regr_km_logo_pxlrg_idx6_y_shift                  (0)
#define  KME_LOGO2_KME_LOGO2_98_regr_km_logo_blkrg_idx6_cnt_mask                 (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_98_regr_km_logo_pxlrg_idx6_y_mask                   (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_98_regr_km_logo_blkrg_idx6_cnt(data)                (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_98_regr_km_logo_pxlrg_idx6_y(data)                  (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_98_get_regr_km_logo_blkrg_idx6_cnt(data)            ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_98_get_regr_km_logo_pxlrg_idx6_y(data)              (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_9C                                                 0x1809BB9C
#define  KME_LOGO2_KME_LOGO2_9C_reg_addr                                         "0xB809BB9C"
#define  KME_LOGO2_KME_LOGO2_9C_reg                                              0xB809BB9C
#define  KME_LOGO2_KME_LOGO2_9C_inst_addr                                        "0x0027"
#define  set_KME_LOGO2_KME_LOGO2_9C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_9C_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_9C_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_9C_reg))
#define  KME_LOGO2_KME_LOGO2_9C_regr_km_logo_blkrg_idx7_cnt_shift                (20)
#define  KME_LOGO2_KME_LOGO2_9C_regr_km_logo_pxlrg_idx7_y_shift                  (0)
#define  KME_LOGO2_KME_LOGO2_9C_regr_km_logo_blkrg_idx7_cnt_mask                 (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_9C_regr_km_logo_pxlrg_idx7_y_mask                   (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_9C_regr_km_logo_blkrg_idx7_cnt(data)                (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_9C_regr_km_logo_pxlrg_idx7_y(data)                  (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_9C_get_regr_km_logo_blkrg_idx7_cnt(data)            ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_9C_get_regr_km_logo_pxlrg_idx7_y(data)              (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_A0                                                 0x1809BBA0
#define  KME_LOGO2_KME_LOGO2_A0_reg_addr                                         "0xB809BBA0"
#define  KME_LOGO2_KME_LOGO2_A0_reg                                              0xB809BBA0
#define  KME_LOGO2_KME_LOGO2_A0_inst_addr                                        "0x0028"
#define  set_KME_LOGO2_KME_LOGO2_A0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_A0_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_A0_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_A0_reg))
#define  KME_LOGO2_KME_LOGO2_A0_regr_km_logo_blkrg_idx8_cnt_shift                (20)
#define  KME_LOGO2_KME_LOGO2_A0_regr_km_logo_pxlrg_idx8_y_shift                  (0)
#define  KME_LOGO2_KME_LOGO2_A0_regr_km_logo_blkrg_idx8_cnt_mask                 (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_A0_regr_km_logo_pxlrg_idx8_y_mask                   (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_A0_regr_km_logo_blkrg_idx8_cnt(data)                (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_A0_regr_km_logo_pxlrg_idx8_y(data)                  (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_A0_get_regr_km_logo_blkrg_idx8_cnt(data)            ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_A0_get_regr_km_logo_pxlrg_idx8_y(data)              (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_A4                                                 0x1809BBA4
#define  KME_LOGO2_KME_LOGO2_A4_reg_addr                                         "0xB809BBA4"
#define  KME_LOGO2_KME_LOGO2_A4_reg                                              0xB809BBA4
#define  KME_LOGO2_KME_LOGO2_A4_inst_addr                                        "0x0029"
#define  set_KME_LOGO2_KME_LOGO2_A4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_A4_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_A4_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_A4_reg))
#define  KME_LOGO2_KME_LOGO2_A4_regr_km_logo_blkrg_idx9_cnt_shift                (20)
#define  KME_LOGO2_KME_LOGO2_A4_regr_km_logo_pxlrg_idx9_y_shift                  (0)
#define  KME_LOGO2_KME_LOGO2_A4_regr_km_logo_blkrg_idx9_cnt_mask                 (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_A4_regr_km_logo_pxlrg_idx9_y_mask                   (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_A4_regr_km_logo_blkrg_idx9_cnt(data)                (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_A4_regr_km_logo_pxlrg_idx9_y(data)                  (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_A4_get_regr_km_logo_blkrg_idx9_cnt(data)            ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_A4_get_regr_km_logo_pxlrg_idx9_y(data)              (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_A8                                                 0x1809BBA8
#define  KME_LOGO2_KME_LOGO2_A8_reg_addr                                         "0xB809BBA8"
#define  KME_LOGO2_KME_LOGO2_A8_reg                                              0xB809BBA8
#define  KME_LOGO2_KME_LOGO2_A8_inst_addr                                        "0x002A"
#define  set_KME_LOGO2_KME_LOGO2_A8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_A8_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_A8_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_A8_reg))
#define  KME_LOGO2_KME_LOGO2_A8_regr_km_logo_blkrg_idx10_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_A8_regr_km_logo_pxlrg_idx10_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_A8_regr_km_logo_blkrg_idx10_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_A8_regr_km_logo_pxlrg_idx10_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_A8_regr_km_logo_blkrg_idx10_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_A8_regr_km_logo_pxlrg_idx10_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_A8_get_regr_km_logo_blkrg_idx10_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_A8_get_regr_km_logo_pxlrg_idx10_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_AC                                                 0x1809BBAC
#define  KME_LOGO2_KME_LOGO2_AC_reg_addr                                         "0xB809BBAC"
#define  KME_LOGO2_KME_LOGO2_AC_reg                                              0xB809BBAC
#define  KME_LOGO2_KME_LOGO2_AC_inst_addr                                        "0x002B"
#define  set_KME_LOGO2_KME_LOGO2_AC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_AC_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_AC_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_AC_reg))
#define  KME_LOGO2_KME_LOGO2_AC_regr_km_logo_blkrg_idx11_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_AC_regr_km_logo_pxlrg_idx11_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_AC_regr_km_logo_blkrg_idx11_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_AC_regr_km_logo_pxlrg_idx11_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_AC_regr_km_logo_blkrg_idx11_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_AC_regr_km_logo_pxlrg_idx11_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_AC_get_regr_km_logo_blkrg_idx11_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_AC_get_regr_km_logo_pxlrg_idx11_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_B0                                                 0x1809BBB0
#define  KME_LOGO2_KME_LOGO2_B0_reg_addr                                         "0xB809BBB0"
#define  KME_LOGO2_KME_LOGO2_B0_reg                                              0xB809BBB0
#define  KME_LOGO2_KME_LOGO2_B0_inst_addr                                        "0x002C"
#define  set_KME_LOGO2_KME_LOGO2_B0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_B0_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_B0_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_B0_reg))
#define  KME_LOGO2_KME_LOGO2_B0_regr_km_logo_blkrg_idx12_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_B0_regr_km_logo_pxlrg_idx12_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_B0_regr_km_logo_blkrg_idx12_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_B0_regr_km_logo_pxlrg_idx12_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_B0_regr_km_logo_blkrg_idx12_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_B0_regr_km_logo_pxlrg_idx12_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_B0_get_regr_km_logo_blkrg_idx12_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_B0_get_regr_km_logo_pxlrg_idx12_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_B4                                                 0x1809BBB4
#define  KME_LOGO2_KME_LOGO2_B4_reg_addr                                         "0xB809BBB4"
#define  KME_LOGO2_KME_LOGO2_B4_reg                                              0xB809BBB4
#define  KME_LOGO2_KME_LOGO2_B4_inst_addr                                        "0x002D"
#define  set_KME_LOGO2_KME_LOGO2_B4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_B4_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_B4_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_B4_reg))
#define  KME_LOGO2_KME_LOGO2_B4_regr_km_logo_blkrg_idx13_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_B4_regr_km_logo_pxlrg_idx13_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_B4_regr_km_logo_blkrg_idx13_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_B4_regr_km_logo_pxlrg_idx13_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_B4_regr_km_logo_blkrg_idx13_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_B4_regr_km_logo_pxlrg_idx13_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_B4_get_regr_km_logo_blkrg_idx13_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_B4_get_regr_km_logo_pxlrg_idx13_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_B8                                                 0x1809BBB8
#define  KME_LOGO2_KME_LOGO2_B8_reg_addr                                         "0xB809BBB8"
#define  KME_LOGO2_KME_LOGO2_B8_reg                                              0xB809BBB8
#define  KME_LOGO2_KME_LOGO2_B8_inst_addr                                        "0x002E"
#define  set_KME_LOGO2_KME_LOGO2_B8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_B8_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_B8_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_B8_reg))
#define  KME_LOGO2_KME_LOGO2_B8_regr_km_logo_blkrg_idx14_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_B8_regr_km_logo_pxlrg_idx14_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_B8_regr_km_logo_blkrg_idx14_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_B8_regr_km_logo_pxlrg_idx14_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_B8_regr_km_logo_blkrg_idx14_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_B8_regr_km_logo_pxlrg_idx14_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_B8_get_regr_km_logo_blkrg_idx14_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_B8_get_regr_km_logo_pxlrg_idx14_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_BC                                                 0x1809BBBC
#define  KME_LOGO2_KME_LOGO2_BC_reg_addr                                         "0xB809BBBC"
#define  KME_LOGO2_KME_LOGO2_BC_reg                                              0xB809BBBC
#define  KME_LOGO2_KME_LOGO2_BC_inst_addr                                        "0x002F"
#define  set_KME_LOGO2_KME_LOGO2_BC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_BC_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_BC_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_BC_reg))
#define  KME_LOGO2_KME_LOGO2_BC_regr_km_logo_blkrg_idx15_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_BC_regr_km_logo_pxlrg_idx15_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_BC_regr_km_logo_blkrg_idx15_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_BC_regr_km_logo_pxlrg_idx15_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_BC_regr_km_logo_blkrg_idx15_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_BC_regr_km_logo_pxlrg_idx15_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_BC_get_regr_km_logo_blkrg_idx15_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_BC_get_regr_km_logo_pxlrg_idx15_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_C0                                                 0x1809BBC0
#define  KME_LOGO2_KME_LOGO2_C0_reg_addr                                         "0xB809BBC0"
#define  KME_LOGO2_KME_LOGO2_C0_reg                                              0xB809BBC0
#define  KME_LOGO2_KME_LOGO2_C0_inst_addr                                        "0x0030"
#define  set_KME_LOGO2_KME_LOGO2_C0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_C0_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_C0_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_C0_reg))
#define  KME_LOGO2_KME_LOGO2_C0_regr_km_logo_blkrg_idx16_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_C0_regr_km_logo_pxlrg_idx16_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_C0_regr_km_logo_blkrg_idx16_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_C0_regr_km_logo_pxlrg_idx16_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_C0_regr_km_logo_blkrg_idx16_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_C0_regr_km_logo_pxlrg_idx16_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_C0_get_regr_km_logo_blkrg_idx16_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_C0_get_regr_km_logo_pxlrg_idx16_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_C4                                                 0x1809BBC4
#define  KME_LOGO2_KME_LOGO2_C4_reg_addr                                         "0xB809BBC4"
#define  KME_LOGO2_KME_LOGO2_C4_reg                                              0xB809BBC4
#define  KME_LOGO2_KME_LOGO2_C4_inst_addr                                        "0x0031"
#define  set_KME_LOGO2_KME_LOGO2_C4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_C4_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_C4_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_C4_reg))
#define  KME_LOGO2_KME_LOGO2_C4_regr_km_logo_blkrg_idx17_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_C4_regr_km_logo_pxlrg_idx17_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_C4_regr_km_logo_blkrg_idx17_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_C4_regr_km_logo_pxlrg_idx17_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_C4_regr_km_logo_blkrg_idx17_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_C4_regr_km_logo_pxlrg_idx17_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_C4_get_regr_km_logo_blkrg_idx17_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_C4_get_regr_km_logo_pxlrg_idx17_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_C8                                                 0x1809BBC8
#define  KME_LOGO2_KME_LOGO2_C8_reg_addr                                         "0xB809BBC8"
#define  KME_LOGO2_KME_LOGO2_C8_reg                                              0xB809BBC8
#define  KME_LOGO2_KME_LOGO2_C8_inst_addr                                        "0x0032"
#define  set_KME_LOGO2_KME_LOGO2_C8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_C8_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_C8_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_C8_reg))
#define  KME_LOGO2_KME_LOGO2_C8_regr_km_logo_blkrg_idx18_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_C8_regr_km_logo_pxlrg_idx18_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_C8_regr_km_logo_blkrg_idx18_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_C8_regr_km_logo_pxlrg_idx18_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_C8_regr_km_logo_blkrg_idx18_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_C8_regr_km_logo_pxlrg_idx18_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_C8_get_regr_km_logo_blkrg_idx18_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_C8_get_regr_km_logo_pxlrg_idx18_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_CC                                                 0x1809BBCC
#define  KME_LOGO2_KME_LOGO2_CC_reg_addr                                         "0xB809BBCC"
#define  KME_LOGO2_KME_LOGO2_CC_reg                                              0xB809BBCC
#define  KME_LOGO2_KME_LOGO2_CC_inst_addr                                        "0x0033"
#define  set_KME_LOGO2_KME_LOGO2_CC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_CC_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_CC_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_CC_reg))
#define  KME_LOGO2_KME_LOGO2_CC_regr_km_logo_blkrg_idx19_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_CC_regr_km_logo_pxlrg_idx19_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_CC_regr_km_logo_blkrg_idx19_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_CC_regr_km_logo_pxlrg_idx19_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_CC_regr_km_logo_blkrg_idx19_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_CC_regr_km_logo_pxlrg_idx19_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_CC_get_regr_km_logo_blkrg_idx19_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_CC_get_regr_km_logo_pxlrg_idx19_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_D0                                                 0x1809BBD0
#define  KME_LOGO2_KME_LOGO2_D0_reg_addr                                         "0xB809BBD0"
#define  KME_LOGO2_KME_LOGO2_D0_reg                                              0xB809BBD0
#define  KME_LOGO2_KME_LOGO2_D0_inst_addr                                        "0x0034"
#define  set_KME_LOGO2_KME_LOGO2_D0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_D0_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_D0_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_D0_reg))
#define  KME_LOGO2_KME_LOGO2_D0_regr_km_logo_blkrg_idx20_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_D0_regr_km_logo_pxlrg_idx20_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_D0_regr_km_logo_blkrg_idx20_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_D0_regr_km_logo_pxlrg_idx20_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_D0_regr_km_logo_blkrg_idx20_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_D0_regr_km_logo_pxlrg_idx20_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_D0_get_regr_km_logo_blkrg_idx20_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_D0_get_regr_km_logo_pxlrg_idx20_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_D4                                                 0x1809BBD4
#define  KME_LOGO2_KME_LOGO2_D4_reg_addr                                         "0xB809BBD4"
#define  KME_LOGO2_KME_LOGO2_D4_reg                                              0xB809BBD4
#define  KME_LOGO2_KME_LOGO2_D4_inst_addr                                        "0x0035"
#define  set_KME_LOGO2_KME_LOGO2_D4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_D4_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_D4_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_D4_reg))
#define  KME_LOGO2_KME_LOGO2_D4_regr_km_logo_blkrg_idx21_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_D4_regr_km_logo_pxlrg_idx21_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_D4_regr_km_logo_blkrg_idx21_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_D4_regr_km_logo_pxlrg_idx21_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_D4_regr_km_logo_blkrg_idx21_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_D4_regr_km_logo_pxlrg_idx21_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_D4_get_regr_km_logo_blkrg_idx21_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_D4_get_regr_km_logo_pxlrg_idx21_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_D8                                                 0x1809BBD8
#define  KME_LOGO2_KME_LOGO2_D8_reg_addr                                         "0xB809BBD8"
#define  KME_LOGO2_KME_LOGO2_D8_reg                                              0xB809BBD8
#define  KME_LOGO2_KME_LOGO2_D8_inst_addr                                        "0x0036"
#define  set_KME_LOGO2_KME_LOGO2_D8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_D8_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_D8_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_D8_reg))
#define  KME_LOGO2_KME_LOGO2_D8_regr_km_logo_blkrg_idx22_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_D8_regr_km_logo_pxlrg_idx22_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_D8_regr_km_logo_blkrg_idx22_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_D8_regr_km_logo_pxlrg_idx22_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_D8_regr_km_logo_blkrg_idx22_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_D8_regr_km_logo_pxlrg_idx22_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_D8_get_regr_km_logo_blkrg_idx22_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_D8_get_regr_km_logo_pxlrg_idx22_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_DC                                                 0x1809BBDC
#define  KME_LOGO2_KME_LOGO2_DC_reg_addr                                         "0xB809BBDC"
#define  KME_LOGO2_KME_LOGO2_DC_reg                                              0xB809BBDC
#define  KME_LOGO2_KME_LOGO2_DC_inst_addr                                        "0x0037"
#define  set_KME_LOGO2_KME_LOGO2_DC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_DC_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_DC_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_DC_reg))
#define  KME_LOGO2_KME_LOGO2_DC_regr_km_logo_blkrg_idx23_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_DC_regr_km_logo_pxlrg_idx23_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_DC_regr_km_logo_blkrg_idx23_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_DC_regr_km_logo_pxlrg_idx23_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_DC_regr_km_logo_blkrg_idx23_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_DC_regr_km_logo_pxlrg_idx23_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_DC_get_regr_km_logo_blkrg_idx23_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_DC_get_regr_km_logo_pxlrg_idx23_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_E0                                                 0x1809BBE0
#define  KME_LOGO2_KME_LOGO2_E0_reg_addr                                         "0xB809BBE0"
#define  KME_LOGO2_KME_LOGO2_E0_reg                                              0xB809BBE0
#define  KME_LOGO2_KME_LOGO2_E0_inst_addr                                        "0x0038"
#define  set_KME_LOGO2_KME_LOGO2_E0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_E0_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_E0_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_E0_reg))
#define  KME_LOGO2_KME_LOGO2_E0_regr_km_logo_blkrg_idx24_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_E0_regr_km_logo_pxlrg_idx24_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_E0_regr_km_logo_blkrg_idx24_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_E0_regr_km_logo_pxlrg_idx24_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_E0_regr_km_logo_blkrg_idx24_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_E0_regr_km_logo_pxlrg_idx24_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_E0_get_regr_km_logo_blkrg_idx24_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_E0_get_regr_km_logo_pxlrg_idx24_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_E4                                                 0x1809BBE4
#define  KME_LOGO2_KME_LOGO2_E4_reg_addr                                         "0xB809BBE4"
#define  KME_LOGO2_KME_LOGO2_E4_reg                                              0xB809BBE4
#define  KME_LOGO2_KME_LOGO2_E4_inst_addr                                        "0x0039"
#define  set_KME_LOGO2_KME_LOGO2_E4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_E4_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_E4_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_E4_reg))
#define  KME_LOGO2_KME_LOGO2_E4_regr_km_logo_blkrg_idx25_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_E4_regr_km_logo_pxlrg_idx25_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_E4_regr_km_logo_blkrg_idx25_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_E4_regr_km_logo_pxlrg_idx25_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_E4_regr_km_logo_blkrg_idx25_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_E4_regr_km_logo_pxlrg_idx25_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_E4_get_regr_km_logo_blkrg_idx25_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_E4_get_regr_km_logo_pxlrg_idx25_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_E8                                                 0x1809BBE8
#define  KME_LOGO2_KME_LOGO2_E8_reg_addr                                         "0xB809BBE8"
#define  KME_LOGO2_KME_LOGO2_E8_reg                                              0xB809BBE8
#define  KME_LOGO2_KME_LOGO2_E8_inst_addr                                        "0x003A"
#define  set_KME_LOGO2_KME_LOGO2_E8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_E8_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_E8_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_E8_reg))
#define  KME_LOGO2_KME_LOGO2_E8_regr_km_logo_blkrg_idx26_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_E8_regr_km_logo_pxlrg_idx26_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_E8_regr_km_logo_blkrg_idx26_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_E8_regr_km_logo_pxlrg_idx26_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_E8_regr_km_logo_blkrg_idx26_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_E8_regr_km_logo_pxlrg_idx26_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_E8_get_regr_km_logo_blkrg_idx26_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_E8_get_regr_km_logo_pxlrg_idx26_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_EC                                                 0x1809BBEC
#define  KME_LOGO2_KME_LOGO2_EC_reg_addr                                         "0xB809BBEC"
#define  KME_LOGO2_KME_LOGO2_EC_reg                                              0xB809BBEC
#define  KME_LOGO2_KME_LOGO2_EC_inst_addr                                        "0x003B"
#define  set_KME_LOGO2_KME_LOGO2_EC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_EC_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_EC_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_EC_reg))
#define  KME_LOGO2_KME_LOGO2_EC_regr_km_logo_blkrg_idx27_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_EC_regr_km_logo_pxlrg_idx27_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_EC_regr_km_logo_blkrg_idx27_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_EC_regr_km_logo_pxlrg_idx27_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_EC_regr_km_logo_blkrg_idx27_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_EC_regr_km_logo_pxlrg_idx27_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_EC_get_regr_km_logo_blkrg_idx27_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_EC_get_regr_km_logo_pxlrg_idx27_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_F0                                                 0x1809BBF0
#define  KME_LOGO2_KME_LOGO2_F0_reg_addr                                         "0xB809BBF0"
#define  KME_LOGO2_KME_LOGO2_F0_reg                                              0xB809BBF0
#define  KME_LOGO2_KME_LOGO2_F0_inst_addr                                        "0x003C"
#define  set_KME_LOGO2_KME_LOGO2_F0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_F0_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_F0_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_F0_reg))
#define  KME_LOGO2_KME_LOGO2_F0_regr_km_logo_blkrg_idx28_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_F0_regr_km_logo_pxlrg_idx28_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_F0_regr_km_logo_blkrg_idx28_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_F0_regr_km_logo_pxlrg_idx28_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_F0_regr_km_logo_blkrg_idx28_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_F0_regr_km_logo_pxlrg_idx28_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_F0_get_regr_km_logo_blkrg_idx28_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_F0_get_regr_km_logo_pxlrg_idx28_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_F4                                                 0x1809BBF4
#define  KME_LOGO2_KME_LOGO2_F4_reg_addr                                         "0xB809BBF4"
#define  KME_LOGO2_KME_LOGO2_F4_reg                                              0xB809BBF4
#define  KME_LOGO2_KME_LOGO2_F4_inst_addr                                        "0x003D"
#define  set_KME_LOGO2_KME_LOGO2_F4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_F4_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_F4_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_F4_reg))
#define  KME_LOGO2_KME_LOGO2_F4_regr_km_logo_blkrg_idx29_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_F4_regr_km_logo_pxlrg_idx29_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_F4_regr_km_logo_blkrg_idx29_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_F4_regr_km_logo_pxlrg_idx29_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_F4_regr_km_logo_blkrg_idx29_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_F4_regr_km_logo_pxlrg_idx29_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_F4_get_regr_km_logo_blkrg_idx29_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_F4_get_regr_km_logo_pxlrg_idx29_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_F8                                                 0x1809BBF8
#define  KME_LOGO2_KME_LOGO2_F8_reg_addr                                         "0xB809BBF8"
#define  KME_LOGO2_KME_LOGO2_F8_reg                                              0xB809BBF8
#define  KME_LOGO2_KME_LOGO2_F8_inst_addr                                        "0x003E"
#define  set_KME_LOGO2_KME_LOGO2_F8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_F8_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_F8_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_F8_reg))
#define  KME_LOGO2_KME_LOGO2_F8_regr_km_logo_blkrg_idx30_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_F8_regr_km_logo_pxlrg_idx30_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_F8_regr_km_logo_blkrg_idx30_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_F8_regr_km_logo_pxlrg_idx30_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_F8_regr_km_logo_blkrg_idx30_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_F8_regr_km_logo_pxlrg_idx30_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_F8_get_regr_km_logo_blkrg_idx30_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_F8_get_regr_km_logo_pxlrg_idx30_y(data)             (0x000FFFFF&(data))

#define  KME_LOGO2_KME_LOGO2_FC                                                 0x1809BBFC
#define  KME_LOGO2_KME_LOGO2_FC_reg_addr                                         "0xB809BBFC"
#define  KME_LOGO2_KME_LOGO2_FC_reg                                              0xB809BBFC
#define  KME_LOGO2_KME_LOGO2_FC_inst_addr                                        "0x003F"
#define  set_KME_LOGO2_KME_LOGO2_FC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_FC_reg)=data)
#define  get_KME_LOGO2_KME_LOGO2_FC_reg                                          (*((volatile unsigned int*)KME_LOGO2_KME_LOGO2_FC_reg))
#define  KME_LOGO2_KME_LOGO2_FC_regr_km_logo_blkrg_idx31_cnt_shift               (20)
#define  KME_LOGO2_KME_LOGO2_FC_regr_km_logo_pxlrg_idx31_y_shift                 (0)
#define  KME_LOGO2_KME_LOGO2_FC_regr_km_logo_blkrg_idx31_cnt_mask                (0x3FF00000)
#define  KME_LOGO2_KME_LOGO2_FC_regr_km_logo_pxlrg_idx31_y_mask                  (0x000FFFFF)
#define  KME_LOGO2_KME_LOGO2_FC_regr_km_logo_blkrg_idx31_cnt(data)               (0x3FF00000&((data)<<20))
#define  KME_LOGO2_KME_LOGO2_FC_regr_km_logo_pxlrg_idx31_y(data)                 (0x000FFFFF&(data))
#define  KME_LOGO2_KME_LOGO2_FC_get_regr_km_logo_blkrg_idx31_cnt(data)           ((0x3FF00000&(data))>>20)
#define  KME_LOGO2_KME_LOGO2_FC_get_regr_km_logo_pxlrg_idx31_y(data)             (0x000FFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_LOGO2 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgdfy_idx3:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx2:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx1:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx0:8;
    };
}kme_logo2_kme_logo2_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgdfy_idx7:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx6:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx5:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx4:8;
    };
}kme_logo2_kme_logo2_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgdfy_idx11:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx10:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx9:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx8:8;
    };
}kme_logo2_kme_logo2_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgdfy_idx15:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx14:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx13:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx12:8;
    };
}kme_logo2_kme_logo2_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgdfy_idx19:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx18:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx17:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx16:8;
    };
}kme_logo2_kme_logo2_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgdfy_idx23:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx22:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx21:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx20:8;
    };
}kme_logo2_kme_logo2_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgdfy_idx27:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx26:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx25:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx24:8;
    };
}kme_logo2_kme_logo2_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgdfy_idx31:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx30:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx29:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx28:8;
    };
}kme_logo2_kme_logo2_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  km_logo_pxlrgydf_th:8;
    };
}kme_logo2_kme_logo2_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgydf_bypass0_31:32;
    };
}kme_logo2_kme_logo2_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_static_rb_blklogo_after_clr_en:1;
        RBus_UInt32  km_logo_blklogo_clr_en:1;
        RBus_UInt32  km_logo_pxllogopost_ero_th:8;
        RBus_UInt32  km_logo_blklogopost_ero_th:6;
        RBus_UInt32  km_logo_blklogopost_eroen:1;
        RBus_UInt32  km_logo_blklogopostdlt_th:6;
        RBus_UInt32  km_logo_blkdltmsk2:3;
        RBus_UInt32  km_logo_blkdltmsk1:3;
        RBus_UInt32  km_logo_blkdltmsk0:3;
    };
}kme_logo2_kme_logo2_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  km_logo_pxllogo_o_debug_force:4;
        RBus_UInt32  km_logo_pxllogo_o_debug_postion:8;
        RBus_UInt32  km_logo_pxllogo_o_debug_en:1;
        RBus_UInt32  km_logo_pxllogopost_eroen:1;
        RBus_UInt32  km_logo_pxllogopostdlt_th:8;
        RBus_UInt32  km_logo_pxldltmsk2:3;
        RBus_UInt32  km_logo_pxldltmsk1:3;
        RBus_UInt32  km_logo_pxldltmsk0:3;
    };
}kme_logo2_kme_logo2_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  km_logo_debug_sel:4;
        RBus_UInt32  km_logo_blk_logo_force:4;
        RBus_UInt32  km_logo_blk_force_logo_postion:4;
        RBus_UInt32  km_logo_blk_out_to_me_debug_en:1;
        RBus_UInt32  plogo_req_gap:8;
        RBus_UInt32  plogo_row_num:8;
    };
}kme_logo2_kme_logo2_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kme_logo_sram_ls_value:1;
        RBus_UInt32  kme_logo_sram_ls_en:1;
        RBus_UInt32  plogo_use_last:1;
        RBus_UInt32  plogo_cursor_y:10;
        RBus_UInt32  plogo_cursor_x:10;
        RBus_UInt32  plogo_cursor_en:1;
    };
}kme_logo2_kme_logo2_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_debug_data:32;
    };
}kme_logo2_kme_logo2_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  regr_km_logo_frame_total_logobit:15;
    };
}kme_logo2_kme_logo2_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_km_logo_pxlrg_idx1_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx0_cnt:14;
    };
}kme_logo2_kme_logo2_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_km_logo_pxlrg_idx3_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx2_cnt:14;
    };
}kme_logo2_kme_logo2_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_km_logo_pxlrg_idx5_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx4_cnt:14;
    };
}kme_logo2_kme_logo2_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_km_logo_pxlrg_idx7_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx6_cnt:14;
    };
}kme_logo2_kme_logo2_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_km_logo_pxlrg_idx9_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx8_cnt:14;
    };
}kme_logo2_kme_logo2_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_km_logo_pxlrg_idx11_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx10_cnt:14;
    };
}kme_logo2_kme_logo2_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_km_logo_pxlrg_idx13_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx12_cnt:14;
    };
}kme_logo2_kme_logo2_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_km_logo_pxlrg_idx15_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx14_cnt:14;
    };
}kme_logo2_kme_logo2_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_km_logo_pxlrg_idx17_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx16_cnt:14;
    };
}kme_logo2_kme_logo2_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_km_logo_pxlrg_idx19_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx18_cnt:14;
    };
}kme_logo2_kme_logo2_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_km_logo_pxlrg_idx21_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx20_cnt:14;
    };
}kme_logo2_kme_logo2_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_km_logo_pxlrg_idx23_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx22_cnt:14;
    };
}kme_logo2_kme_logo2_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_km_logo_pxlrg_idx25_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx24_cnt:14;
    };
}kme_logo2_kme_logo2_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_km_logo_pxlrg_idx27_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx26_cnt:14;
    };
}kme_logo2_kme_logo2_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_km_logo_pxlrg_idx29_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx28_cnt:14;
    };
}kme_logo2_kme_logo2_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_km_logo_pxlrg_idx31_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx30_cnt:14;
    };
}kme_logo2_kme_logo2_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx0_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx0_y:20;
    };
}kme_logo2_kme_logo2_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx1_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx1_y:20;
    };
}kme_logo2_kme_logo2_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx2_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx2_y:20;
    };
}kme_logo2_kme_logo2_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx3_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx3_y:20;
    };
}kme_logo2_kme_logo2_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx4_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx4_y:20;
    };
}kme_logo2_kme_logo2_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx5_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx5_y:20;
    };
}kme_logo2_kme_logo2_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx6_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx6_y:20;
    };
}kme_logo2_kme_logo2_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx7_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx7_y:20;
    };
}kme_logo2_kme_logo2_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx8_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx8_y:20;
    };
}kme_logo2_kme_logo2_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx9_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx9_y:20;
    };
}kme_logo2_kme_logo2_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx10_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx10_y:20;
    };
}kme_logo2_kme_logo2_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx11_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx11_y:20;
    };
}kme_logo2_kme_logo2_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx12_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx12_y:20;
    };
}kme_logo2_kme_logo2_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx13_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx13_y:20;
    };
}kme_logo2_kme_logo2_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx14_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx14_y:20;
    };
}kme_logo2_kme_logo2_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx15_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx15_y:20;
    };
}kme_logo2_kme_logo2_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx16_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx16_y:20;
    };
}kme_logo2_kme_logo2_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx17_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx17_y:20;
    };
}kme_logo2_kme_logo2_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx18_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx18_y:20;
    };
}kme_logo2_kme_logo2_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx19_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx19_y:20;
    };
}kme_logo2_kme_logo2_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx20_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx20_y:20;
    };
}kme_logo2_kme_logo2_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx21_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx21_y:20;
    };
}kme_logo2_kme_logo2_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx22_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx22_y:20;
    };
}kme_logo2_kme_logo2_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx23_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx23_y:20;
    };
}kme_logo2_kme_logo2_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx24_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx24_y:20;
    };
}kme_logo2_kme_logo2_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx25_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx25_y:20;
    };
}kme_logo2_kme_logo2_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx26_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx26_y:20;
    };
}kme_logo2_kme_logo2_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx27_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx27_y:20;
    };
}kme_logo2_kme_logo2_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx28_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx28_y:20;
    };
}kme_logo2_kme_logo2_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx29_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx29_y:20;
    };
}kme_logo2_kme_logo2_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx30_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx30_y:20;
    };
}kme_logo2_kme_logo2_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_km_logo_blkrg_idx31_cnt:10;
        RBus_UInt32  regr_km_logo_pxlrg_idx31_y:20;
    };
}kme_logo2_kme_logo2_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_LOGO2 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgdfy_idx0:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx1:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx2:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx3:8;
    };
}kme_logo2_kme_logo2_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgdfy_idx4:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx5:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx6:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx7:8;
    };
}kme_logo2_kme_logo2_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgdfy_idx8:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx9:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx10:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx11:8;
    };
}kme_logo2_kme_logo2_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgdfy_idx12:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx13:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx14:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx15:8;
    };
}kme_logo2_kme_logo2_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgdfy_idx16:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx17:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx18:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx19:8;
    };
}kme_logo2_kme_logo2_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgdfy_idx20:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx21:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx22:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx23:8;
    };
}kme_logo2_kme_logo2_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgdfy_idx24:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx25:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx26:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx27:8;
    };
}kme_logo2_kme_logo2_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgdfy_idx28:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx29:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx30:8;
        RBus_UInt32  km_logo_pxlrgdfy_idx31:8;
    };
}kme_logo2_kme_logo2_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgydf_th:8;
        RBus_UInt32  res1:24;
    };
}kme_logo2_kme_logo2_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgydf_bypass0_31:32;
    };
}kme_logo2_kme_logo2_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkdltmsk0:3;
        RBus_UInt32  km_logo_blkdltmsk1:3;
        RBus_UInt32  km_logo_blkdltmsk2:3;
        RBus_UInt32  km_logo_blklogopostdlt_th:6;
        RBus_UInt32  km_logo_blklogopost_eroen:1;
        RBus_UInt32  km_logo_blklogopost_ero_th:6;
        RBus_UInt32  km_logo_pxllogopost_ero_th:8;
        RBus_UInt32  km_logo_blklogo_clr_en:1;
        RBus_UInt32  km_logo_static_rb_blklogo_after_clr_en:1;
    };
}kme_logo2_kme_logo2_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldltmsk0:3;
        RBus_UInt32  km_logo_pxldltmsk1:3;
        RBus_UInt32  km_logo_pxldltmsk2:3;
        RBus_UInt32  km_logo_pxllogopostdlt_th:8;
        RBus_UInt32  km_logo_pxllogopost_eroen:1;
        RBus_UInt32  km_logo_pxllogo_o_debug_en:1;
        RBus_UInt32  km_logo_pxllogo_o_debug_postion:8;
        RBus_UInt32  km_logo_pxllogo_o_debug_force:4;
        RBus_UInt32  res1:1;
    };
}kme_logo2_kme_logo2_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plogo_row_num:8;
        RBus_UInt32  plogo_req_gap:8;
        RBus_UInt32  km_logo_blk_out_to_me_debug_en:1;
        RBus_UInt32  km_logo_blk_force_logo_postion:4;
        RBus_UInt32  km_logo_blk_logo_force:4;
        RBus_UInt32  km_logo_debug_sel:4;
        RBus_UInt32  res1:3;
    };
}kme_logo2_kme_logo2_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plogo_cursor_en:1;
        RBus_UInt32  plogo_cursor_x:10;
        RBus_UInt32  plogo_cursor_y:10;
        RBus_UInt32  plogo_use_last:1;
        RBus_UInt32  kme_logo_sram_ls_en:1;
        RBus_UInt32  kme_logo_sram_ls_value:1;
        RBus_UInt32  res1:8;
    };
}kme_logo2_kme_logo2_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_debug_data:32;
    };
}kme_logo2_kme_logo2_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_frame_total_logobit:15;
        RBus_UInt32  res1:17;
    };
}kme_logo2_kme_logo2_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx0_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx1_cnt:14;
        RBus_UInt32  res1:4;
    };
}kme_logo2_kme_logo2_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx2_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx3_cnt:14;
        RBus_UInt32  res1:4;
    };
}kme_logo2_kme_logo2_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx4_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx5_cnt:14;
        RBus_UInt32  res1:4;
    };
}kme_logo2_kme_logo2_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx6_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx7_cnt:14;
        RBus_UInt32  res1:4;
    };
}kme_logo2_kme_logo2_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx8_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx9_cnt:14;
        RBus_UInt32  res1:4;
    };
}kme_logo2_kme_logo2_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx10_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx11_cnt:14;
        RBus_UInt32  res1:4;
    };
}kme_logo2_kme_logo2_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx12_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx13_cnt:14;
        RBus_UInt32  res1:4;
    };
}kme_logo2_kme_logo2_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx14_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx15_cnt:14;
        RBus_UInt32  res1:4;
    };
}kme_logo2_kme_logo2_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx16_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx17_cnt:14;
        RBus_UInt32  res1:4;
    };
}kme_logo2_kme_logo2_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx18_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx19_cnt:14;
        RBus_UInt32  res1:4;
    };
}kme_logo2_kme_logo2_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx20_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx21_cnt:14;
        RBus_UInt32  res1:4;
    };
}kme_logo2_kme_logo2_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx22_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx23_cnt:14;
        RBus_UInt32  res1:4;
    };
}kme_logo2_kme_logo2_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx24_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx25_cnt:14;
        RBus_UInt32  res1:4;
    };
}kme_logo2_kme_logo2_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx26_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx27_cnt:14;
        RBus_UInt32  res1:4;
    };
}kme_logo2_kme_logo2_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx28_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx29_cnt:14;
        RBus_UInt32  res1:4;
    };
}kme_logo2_kme_logo2_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx30_cnt:14;
        RBus_UInt32  regr_km_logo_pxlrg_idx31_cnt:14;
        RBus_UInt32  res1:4;
    };
}kme_logo2_kme_logo2_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx0_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx0_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx1_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx1_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx2_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx2_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx3_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx3_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx4_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx4_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx5_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx5_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx6_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx6_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx7_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx7_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx8_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx8_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx9_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx9_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx10_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx10_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx11_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx11_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx12_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx12_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx13_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx13_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx14_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx14_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx15_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx15_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx16_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx16_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx17_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx17_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx18_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx18_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx19_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx19_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx20_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx20_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx21_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx21_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx22_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx22_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx23_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx23_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx24_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx24_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx25_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx25_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx26_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx26_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx27_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx27_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx28_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx28_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx29_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx29_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx30_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx30_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_km_logo_pxlrg_idx31_y:20;
        RBus_UInt32  regr_km_logo_blkrg_idx31_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_logo2_kme_logo2_fc_RBUS;




#endif 


#endif 
