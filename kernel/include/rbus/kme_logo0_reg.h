/**
* @file Merlin5_MEMC_KME_LOGO0
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_LOGO0_REG_H_
#define _RBUS_KME_LOGO0_REG_H_

#include "rbus_types.h"



//  KME_LOGO0 Register Address
#define  KME_LOGO0_KME_LOGO0_00                                                 0x1809BE00
#define  KME_LOGO0_KME_LOGO0_00_reg_addr                                         "0xB809BE00"
#define  KME_LOGO0_KME_LOGO0_00_reg                                              0xB809BE00
#define  KME_LOGO0_KME_LOGO0_00_inst_addr                                        "0x0000"
#define  set_KME_LOGO0_KME_LOGO0_00_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_00_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_00_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_00_reg))
#define  KME_LOGO0_KME_LOGO0_00_km_logo_pscaler_v_active_shift                   (20)
#define  KME_LOGO0_KME_LOGO0_00_km_logo_h1_ration_shift                          (12)
#define  KME_LOGO0_KME_LOGO0_00_km_logo_h0_ration_shift                          (4)
#define  KME_LOGO0_KME_LOGO0_00_km_logo_v_fetch_mode_shift                       (2)
#define  KME_LOGO0_KME_LOGO0_00_km_logo_h_fetch_mode_shift                       (0)
#define  KME_LOGO0_KME_LOGO0_00_km_logo_pscaler_v_active_mask                    (0xFFF00000)
#define  KME_LOGO0_KME_LOGO0_00_km_logo_h1_ration_mask                           (0x000FF000)
#define  KME_LOGO0_KME_LOGO0_00_km_logo_h0_ration_mask                           (0x00000FF0)
#define  KME_LOGO0_KME_LOGO0_00_km_logo_v_fetch_mode_mask                        (0x0000000C)
#define  KME_LOGO0_KME_LOGO0_00_km_logo_h_fetch_mode_mask                        (0x00000003)
#define  KME_LOGO0_KME_LOGO0_00_km_logo_pscaler_v_active(data)                   (0xFFF00000&((data)<<20))
#define  KME_LOGO0_KME_LOGO0_00_km_logo_h1_ration(data)                          (0x000FF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_00_km_logo_h0_ration(data)                          (0x00000FF0&((data)<<4))
#define  KME_LOGO0_KME_LOGO0_00_km_logo_v_fetch_mode(data)                       (0x0000000C&((data)<<2))
#define  KME_LOGO0_KME_LOGO0_00_km_logo_h_fetch_mode(data)                       (0x00000003&(data))
#define  KME_LOGO0_KME_LOGO0_00_get_km_logo_pscaler_v_active(data)               ((0xFFF00000&(data))>>20)
#define  KME_LOGO0_KME_LOGO0_00_get_km_logo_h1_ration(data)                      ((0x000FF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_00_get_km_logo_h0_ration(data)                      ((0x00000FF0&(data))>>4)
#define  KME_LOGO0_KME_LOGO0_00_get_km_logo_v_fetch_mode(data)                   ((0x0000000C&(data))>>2)
#define  KME_LOGO0_KME_LOGO0_00_get_km_logo_h_fetch_mode(data)                   (0x00000003&(data))

#define  KME_LOGO0_KME_LOGO0_04                                                 0x1809BE04
#define  KME_LOGO0_KME_LOGO0_04_reg_addr                                         "0xB809BE04"
#define  KME_LOGO0_KME_LOGO0_04_reg                                              0xB809BE04
#define  KME_LOGO0_KME_LOGO0_04_inst_addr                                        "0x0001"
#define  set_KME_LOGO0_KME_LOGO0_04_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_04_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_04_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_04_reg))
#define  KME_LOGO0_KME_LOGO0_04_km_logo_h3_ration_shift                          (8)
#define  KME_LOGO0_KME_LOGO0_04_km_logo_h2_ration_shift                          (0)
#define  KME_LOGO0_KME_LOGO0_04_km_logo_h3_ration_mask                           (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_04_km_logo_h2_ration_mask                           (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_04_km_logo_h3_ration(data)                          (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_04_km_logo_h2_ration(data)                          (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_04_get_km_logo_h3_ration(data)                      ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_04_get_km_logo_h2_ration(data)                      (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_08                                                 0x1809BE08
#define  KME_LOGO0_KME_LOGO0_08_reg_addr                                         "0xB809BE08"
#define  KME_LOGO0_KME_LOGO0_08_reg                                              0xB809BE08
#define  KME_LOGO0_KME_LOGO0_08_inst_addr                                        "0x0002"
#define  set_KME_LOGO0_KME_LOGO0_08_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_08_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_08_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_08_reg))
#define  KME_LOGO0_KME_LOGO0_08_km_logo_v1_ration_shift                          (8)
#define  KME_LOGO0_KME_LOGO0_08_km_logo_v0_ration_shift                          (0)
#define  KME_LOGO0_KME_LOGO0_08_km_logo_v1_ration_mask                           (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_08_km_logo_v0_ration_mask                           (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_08_km_logo_v1_ration(data)                          (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_08_km_logo_v0_ration(data)                          (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_08_get_km_logo_v1_ration(data)                      ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_08_get_km_logo_v0_ration(data)                      (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_0C                                                 0x1809BE0C
#define  KME_LOGO0_KME_LOGO0_0C_reg_addr                                         "0xB809BE0C"
#define  KME_LOGO0_KME_LOGO0_0C_reg                                              0xB809BE0C
#define  KME_LOGO0_KME_LOGO0_0C_inst_addr                                        "0x0003"
#define  set_KME_LOGO0_KME_LOGO0_0C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_0C_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_0C_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_0C_reg))
#define  KME_LOGO0_KME_LOGO0_0C_km_logo_v3_ration_shift                          (8)
#define  KME_LOGO0_KME_LOGO0_0C_km_logo_v2_ration_shift                          (0)
#define  KME_LOGO0_KME_LOGO0_0C_km_logo_v3_ration_mask                           (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_0C_km_logo_v2_ration_mask                           (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_0C_km_logo_v3_ration(data)                          (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_0C_km_logo_v2_ration(data)                          (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_0C_get_km_logo_v3_ration(data)                      ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_0C_get_km_logo_v2_ration(data)                      (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_10                                                 0x1809BE10
#define  KME_LOGO0_KME_LOGO0_10_reg_addr                                         "0xB809BE10"
#define  KME_LOGO0_KME_LOGO0_10_reg                                              0xB809BE10
#define  KME_LOGO0_KME_LOGO0_10_inst_addr                                        "0x0004"
#define  set_KME_LOGO0_KME_LOGO0_10_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_10_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_10_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_10_reg))
#define  KME_LOGO0_KME_LOGO0_10_km_logo_iir_alpha_shift                          (0)
#define  KME_LOGO0_KME_LOGO0_10_km_logo_iir_alpha_mask                           (0x0000001F)
#define  KME_LOGO0_KME_LOGO0_10_km_logo_iir_alpha(data)                          (0x0000001F&(data))
#define  KME_LOGO0_KME_LOGO0_10_get_km_logo_iir_alpha(data)                      (0x0000001F&(data))

#define  KME_LOGO0_KME_LOGO0_14                                                 0x1809BE14
#define  KME_LOGO0_KME_LOGO0_14_reg_addr                                         "0xB809BE14"
#define  KME_LOGO0_KME_LOGO0_14_reg                                              0xB809BE14
#define  KME_LOGO0_KME_LOGO0_14_inst_addr                                        "0x0005"
#define  set_KME_LOGO0_KME_LOGO0_14_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_14_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_14_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_14_reg))
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region7_en_shift                     (28)
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region6_en_shift                     (24)
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region5_en_shift                     (20)
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region4_en_shift                     (16)
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region3_en_shift                     (12)
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region2_en_shift                     (8)
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region1_en_shift                     (4)
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region0_en_shift                     (0)
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region7_en_mask                      (0xF0000000)
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region6_en_mask                      (0x0F000000)
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region5_en_mask                      (0x00F00000)
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region4_en_mask                      (0x000F0000)
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region3_en_mask                      (0x0000F000)
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region2_en_mask                      (0x00000F00)
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region1_en_mask                      (0x000000F0)
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region0_en_mask                      (0x0000000F)
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region7_en(data)                     (0xF0000000&((data)<<28))
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region6_en(data)                     (0x0F000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region5_en(data)                     (0x00F00000&((data)<<20))
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region4_en(data)                     (0x000F0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region3_en(data)                     (0x0000F000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region2_en(data)                     (0x00000F00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region1_en(data)                     (0x000000F0&((data)<<4))
#define  KME_LOGO0_KME_LOGO0_14_km_logo_blk_region0_en(data)                     (0x0000000F&(data))
#define  KME_LOGO0_KME_LOGO0_14_get_km_logo_blk_region7_en(data)                 ((0xF0000000&(data))>>28)
#define  KME_LOGO0_KME_LOGO0_14_get_km_logo_blk_region6_en(data)                 ((0x0F000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_14_get_km_logo_blk_region5_en(data)                 ((0x00F00000&(data))>>20)
#define  KME_LOGO0_KME_LOGO0_14_get_km_logo_blk_region4_en(data)                 ((0x000F0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_14_get_km_logo_blk_region3_en(data)                 ((0x0000F000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_14_get_km_logo_blk_region2_en(data)                 ((0x00000F00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_14_get_km_logo_blk_region1_en(data)                 ((0x000000F0&(data))>>4)
#define  KME_LOGO0_KME_LOGO0_14_get_km_logo_blk_region0_en(data)                 (0x0000000F&(data))

#define  KME_LOGO0_KME_LOGO0_18                                                 0x1809BE18
#define  KME_LOGO0_KME_LOGO0_18_reg_addr                                         "0xB809BE18"
#define  KME_LOGO0_KME_LOGO0_18_reg                                              0xB809BE18
#define  KME_LOGO0_KME_LOGO0_18_inst_addr                                        "0x0006"
#define  set_KME_LOGO0_KME_LOGO0_18_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_18_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_18_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_18_reg))
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region15_en_shift                    (28)
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region14_en_shift                    (24)
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region13_en_shift                    (20)
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region12_en_shift                    (16)
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region11_en_shift                    (12)
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region10_en_shift                    (8)
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region9_en_shift                     (4)
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region8_en_shift                     (0)
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region15_en_mask                     (0xF0000000)
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region14_en_mask                     (0x0F000000)
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region13_en_mask                     (0x00F00000)
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region12_en_mask                     (0x000F0000)
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region11_en_mask                     (0x0000F000)
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region10_en_mask                     (0x00000F00)
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region9_en_mask                      (0x000000F0)
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region8_en_mask                      (0x0000000F)
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region15_en(data)                    (0xF0000000&((data)<<28))
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region14_en(data)                    (0x0F000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region13_en(data)                    (0x00F00000&((data)<<20))
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region12_en(data)                    (0x000F0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region11_en(data)                    (0x0000F000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region10_en(data)                    (0x00000F00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region9_en(data)                     (0x000000F0&((data)<<4))
#define  KME_LOGO0_KME_LOGO0_18_km_logo_blk_region8_en(data)                     (0x0000000F&(data))
#define  KME_LOGO0_KME_LOGO0_18_get_km_logo_blk_region15_en(data)                ((0xF0000000&(data))>>28)
#define  KME_LOGO0_KME_LOGO0_18_get_km_logo_blk_region14_en(data)                ((0x0F000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_18_get_km_logo_blk_region13_en(data)                ((0x00F00000&(data))>>20)
#define  KME_LOGO0_KME_LOGO0_18_get_km_logo_blk_region12_en(data)                ((0x000F0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_18_get_km_logo_blk_region11_en(data)                ((0x0000F000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_18_get_km_logo_blk_region10_en(data)                ((0x00000F00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_18_get_km_logo_blk_region9_en(data)                 ((0x000000F0&(data))>>4)
#define  KME_LOGO0_KME_LOGO0_18_get_km_logo_blk_region8_en(data)                 (0x0000000F&(data))

#define  KME_LOGO0_KME_LOGO0_1C                                                 0x1809BE1C
#define  KME_LOGO0_KME_LOGO0_1C_reg_addr                                         "0xB809BE1C"
#define  KME_LOGO0_KME_LOGO0_1C_reg                                              0xB809BE1C
#define  KME_LOGO0_KME_LOGO0_1C_inst_addr                                        "0x0007"
#define  set_KME_LOGO0_KME_LOGO0_1C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_1C_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_1C_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_1C_reg))
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region23_en_shift                    (28)
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region22_en_shift                    (24)
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region21_en_shift                    (20)
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region20_en_shift                    (16)
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region19_en_shift                    (12)
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region18_en_shift                    (8)
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region17_en_shift                    (4)
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region16_en_shift                    (0)
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region23_en_mask                     (0xF0000000)
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region22_en_mask                     (0x0F000000)
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region21_en_mask                     (0x00F00000)
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region20_en_mask                     (0x000F0000)
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region19_en_mask                     (0x0000F000)
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region18_en_mask                     (0x00000F00)
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region17_en_mask                     (0x000000F0)
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region16_en_mask                     (0x0000000F)
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region23_en(data)                    (0xF0000000&((data)<<28))
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region22_en(data)                    (0x0F000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region21_en(data)                    (0x00F00000&((data)<<20))
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region20_en(data)                    (0x000F0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region19_en(data)                    (0x0000F000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region18_en(data)                    (0x00000F00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region17_en(data)                    (0x000000F0&((data)<<4))
#define  KME_LOGO0_KME_LOGO0_1C_km_logo_blk_region16_en(data)                    (0x0000000F&(data))
#define  KME_LOGO0_KME_LOGO0_1C_get_km_logo_blk_region23_en(data)                ((0xF0000000&(data))>>28)
#define  KME_LOGO0_KME_LOGO0_1C_get_km_logo_blk_region22_en(data)                ((0x0F000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_1C_get_km_logo_blk_region21_en(data)                ((0x00F00000&(data))>>20)
#define  KME_LOGO0_KME_LOGO0_1C_get_km_logo_blk_region20_en(data)                ((0x000F0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_1C_get_km_logo_blk_region19_en(data)                ((0x0000F000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_1C_get_km_logo_blk_region18_en(data)                ((0x00000F00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_1C_get_km_logo_blk_region17_en(data)                ((0x000000F0&(data))>>4)
#define  KME_LOGO0_KME_LOGO0_1C_get_km_logo_blk_region16_en(data)                (0x0000000F&(data))

#define  KME_LOGO0_KME_LOGO0_20                                                 0x1809BE20
#define  KME_LOGO0_KME_LOGO0_20_reg_addr                                         "0xB809BE20"
#define  KME_LOGO0_KME_LOGO0_20_reg                                              0xB809BE20
#define  KME_LOGO0_KME_LOGO0_20_inst_addr                                        "0x0008"
#define  set_KME_LOGO0_KME_LOGO0_20_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_20_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_20_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_20_reg))
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region31_en_shift                    (28)
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region30_en_shift                    (24)
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region29_en_shift                    (20)
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region28_en_shift                    (16)
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region27_en_shift                    (12)
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region26_en_shift                    (8)
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region25_en_shift                    (4)
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region24_en_shift                    (0)
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region31_en_mask                     (0xF0000000)
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region30_en_mask                     (0x0F000000)
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region29_en_mask                     (0x00F00000)
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region28_en_mask                     (0x000F0000)
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region27_en_mask                     (0x0000F000)
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region26_en_mask                     (0x00000F00)
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region25_en_mask                     (0x000000F0)
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region24_en_mask                     (0x0000000F)
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region31_en(data)                    (0xF0000000&((data)<<28))
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region30_en(data)                    (0x0F000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region29_en(data)                    (0x00F00000&((data)<<20))
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region28_en(data)                    (0x000F0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region27_en(data)                    (0x0000F000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region26_en(data)                    (0x00000F00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region25_en(data)                    (0x000000F0&((data)<<4))
#define  KME_LOGO0_KME_LOGO0_20_km_logo_blk_region24_en(data)                    (0x0000000F&(data))
#define  KME_LOGO0_KME_LOGO0_20_get_km_logo_blk_region31_en(data)                ((0xF0000000&(data))>>28)
#define  KME_LOGO0_KME_LOGO0_20_get_km_logo_blk_region30_en(data)                ((0x0F000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_20_get_km_logo_blk_region29_en(data)                ((0x00F00000&(data))>>20)
#define  KME_LOGO0_KME_LOGO0_20_get_km_logo_blk_region28_en(data)                ((0x000F0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_20_get_km_logo_blk_region27_en(data)                ((0x0000F000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_20_get_km_logo_blk_region26_en(data)                ((0x00000F00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_20_get_km_logo_blk_region25_en(data)                ((0x000000F0&(data))>>4)
#define  KME_LOGO0_KME_LOGO0_20_get_km_logo_blk_region24_en(data)                (0x0000000F&(data))

#define  KME_LOGO0_KME_LOGO0_24                                                 0x1809BE24
#define  KME_LOGO0_KME_LOGO0_24_reg_addr                                         "0xB809BE24"
#define  KME_LOGO0_KME_LOGO0_24_reg                                              0xB809BE24
#define  KME_LOGO0_KME_LOGO0_24_inst_addr                                        "0x0009"
#define  set_KME_LOGO0_KME_LOGO0_24_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_24_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_24_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_24_reg))
#define  KME_LOGO0_KME_LOGO0_24_km_logo_blk_region1_gain_shift                   (12)
#define  KME_LOGO0_KME_LOGO0_24_km_logo_blk_region0_gain_shift                   (0)
#define  KME_LOGO0_KME_LOGO0_24_km_logo_blk_region1_gain_mask                    (0x00FFF000)
#define  KME_LOGO0_KME_LOGO0_24_km_logo_blk_region0_gain_mask                    (0x00000FFF)
#define  KME_LOGO0_KME_LOGO0_24_km_logo_blk_region1_gain(data)                   (0x00FFF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_24_km_logo_blk_region0_gain(data)                   (0x00000FFF&(data))
#define  KME_LOGO0_KME_LOGO0_24_get_km_logo_blk_region1_gain(data)               ((0x00FFF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_24_get_km_logo_blk_region0_gain(data)               (0x00000FFF&(data))

#define  KME_LOGO0_KME_LOGO0_28                                                 0x1809BE28
#define  KME_LOGO0_KME_LOGO0_28_reg_addr                                         "0xB809BE28"
#define  KME_LOGO0_KME_LOGO0_28_reg                                              0xB809BE28
#define  KME_LOGO0_KME_LOGO0_28_inst_addr                                        "0x000A"
#define  set_KME_LOGO0_KME_LOGO0_28_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_28_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_28_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_28_reg))
#define  KME_LOGO0_KME_LOGO0_28_km_logo_blk_region3_gain_shift                   (12)
#define  KME_LOGO0_KME_LOGO0_28_km_logo_blk_region2_gain_shift                   (0)
#define  KME_LOGO0_KME_LOGO0_28_km_logo_blk_region3_gain_mask                    (0x00FFF000)
#define  KME_LOGO0_KME_LOGO0_28_km_logo_blk_region2_gain_mask                    (0x00000FFF)
#define  KME_LOGO0_KME_LOGO0_28_km_logo_blk_region3_gain(data)                   (0x00FFF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_28_km_logo_blk_region2_gain(data)                   (0x00000FFF&(data))
#define  KME_LOGO0_KME_LOGO0_28_get_km_logo_blk_region3_gain(data)               ((0x00FFF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_28_get_km_logo_blk_region2_gain(data)               (0x00000FFF&(data))

#define  KME_LOGO0_KME_LOGO0_2C                                                 0x1809BE2C
#define  KME_LOGO0_KME_LOGO0_2C_reg_addr                                         "0xB809BE2C"
#define  KME_LOGO0_KME_LOGO0_2C_reg                                              0xB809BE2C
#define  KME_LOGO0_KME_LOGO0_2C_inst_addr                                        "0x000B"
#define  set_KME_LOGO0_KME_LOGO0_2C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_2C_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_2C_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_2C_reg))
#define  KME_LOGO0_KME_LOGO0_2C_km_logo_blk_region5_gain_shift                   (12)
#define  KME_LOGO0_KME_LOGO0_2C_km_logo_blk_region4_gain_shift                   (0)
#define  KME_LOGO0_KME_LOGO0_2C_km_logo_blk_region5_gain_mask                    (0x00FFF000)
#define  KME_LOGO0_KME_LOGO0_2C_km_logo_blk_region4_gain_mask                    (0x00000FFF)
#define  KME_LOGO0_KME_LOGO0_2C_km_logo_blk_region5_gain(data)                   (0x00FFF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_2C_km_logo_blk_region4_gain(data)                   (0x00000FFF&(data))
#define  KME_LOGO0_KME_LOGO0_2C_get_km_logo_blk_region5_gain(data)               ((0x00FFF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_2C_get_km_logo_blk_region4_gain(data)               (0x00000FFF&(data))

#define  KME_LOGO0_KME_LOGO0_30                                                 0x1809BE30
#define  KME_LOGO0_KME_LOGO0_30_reg_addr                                         "0xB809BE30"
#define  KME_LOGO0_KME_LOGO0_30_reg                                              0xB809BE30
#define  KME_LOGO0_KME_LOGO0_30_inst_addr                                        "0x000C"
#define  set_KME_LOGO0_KME_LOGO0_30_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_30_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_30_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_30_reg))
#define  KME_LOGO0_KME_LOGO0_30_km_logo_blk_region7_gain_shift                   (12)
#define  KME_LOGO0_KME_LOGO0_30_km_logo_blk_region6_gain_shift                   (0)
#define  KME_LOGO0_KME_LOGO0_30_km_logo_blk_region7_gain_mask                    (0x00FFF000)
#define  KME_LOGO0_KME_LOGO0_30_km_logo_blk_region6_gain_mask                    (0x00000FFF)
#define  KME_LOGO0_KME_LOGO0_30_km_logo_blk_region7_gain(data)                   (0x00FFF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_30_km_logo_blk_region6_gain(data)                   (0x00000FFF&(data))
#define  KME_LOGO0_KME_LOGO0_30_get_km_logo_blk_region7_gain(data)               ((0x00FFF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_30_get_km_logo_blk_region6_gain(data)               (0x00000FFF&(data))

#define  KME_LOGO0_KME_LOGO0_34                                                 0x1809BE34
#define  KME_LOGO0_KME_LOGO0_34_reg_addr                                         "0xB809BE34"
#define  KME_LOGO0_KME_LOGO0_34_reg                                              0xB809BE34
#define  KME_LOGO0_KME_LOGO0_34_inst_addr                                        "0x000D"
#define  set_KME_LOGO0_KME_LOGO0_34_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_34_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_34_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_34_reg))
#define  KME_LOGO0_KME_LOGO0_34_km_logo_blk_region9_gain_shift                   (12)
#define  KME_LOGO0_KME_LOGO0_34_km_logo_blk_region8_gain_shift                   (0)
#define  KME_LOGO0_KME_LOGO0_34_km_logo_blk_region9_gain_mask                    (0x00FFF000)
#define  KME_LOGO0_KME_LOGO0_34_km_logo_blk_region8_gain_mask                    (0x00000FFF)
#define  KME_LOGO0_KME_LOGO0_34_km_logo_blk_region9_gain(data)                   (0x00FFF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_34_km_logo_blk_region8_gain(data)                   (0x00000FFF&(data))
#define  KME_LOGO0_KME_LOGO0_34_get_km_logo_blk_region9_gain(data)               ((0x00FFF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_34_get_km_logo_blk_region8_gain(data)               (0x00000FFF&(data))

#define  KME_LOGO0_KME_LOGO0_38                                                 0x1809BE38
#define  KME_LOGO0_KME_LOGO0_38_reg_addr                                         "0xB809BE38"
#define  KME_LOGO0_KME_LOGO0_38_reg                                              0xB809BE38
#define  KME_LOGO0_KME_LOGO0_38_inst_addr                                        "0x000E"
#define  set_KME_LOGO0_KME_LOGO0_38_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_38_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_38_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_38_reg))
#define  KME_LOGO0_KME_LOGO0_38_km_logo_blk_region11_gain_shift                  (12)
#define  KME_LOGO0_KME_LOGO0_38_km_logo_blk_region10_gain_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_38_km_logo_blk_region11_gain_mask                   (0x00FFF000)
#define  KME_LOGO0_KME_LOGO0_38_km_logo_blk_region10_gain_mask                   (0x00000FFF)
#define  KME_LOGO0_KME_LOGO0_38_km_logo_blk_region11_gain(data)                  (0x00FFF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_38_km_logo_blk_region10_gain(data)                  (0x00000FFF&(data))
#define  KME_LOGO0_KME_LOGO0_38_get_km_logo_blk_region11_gain(data)              ((0x00FFF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_38_get_km_logo_blk_region10_gain(data)              (0x00000FFF&(data))

#define  KME_LOGO0_KME_LOGO0_3C                                                 0x1809BE3C
#define  KME_LOGO0_KME_LOGO0_3C_reg_addr                                         "0xB809BE3C"
#define  KME_LOGO0_KME_LOGO0_3C_reg                                              0xB809BE3C
#define  KME_LOGO0_KME_LOGO0_3C_inst_addr                                        "0x000F"
#define  set_KME_LOGO0_KME_LOGO0_3C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_3C_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_3C_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_3C_reg))
#define  KME_LOGO0_KME_LOGO0_3C_km_logo_blk_region13_gain_shift                  (12)
#define  KME_LOGO0_KME_LOGO0_3C_km_logo_blk_region12_gain_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_3C_km_logo_blk_region13_gain_mask                   (0x00FFF000)
#define  KME_LOGO0_KME_LOGO0_3C_km_logo_blk_region12_gain_mask                   (0x00000FFF)
#define  KME_LOGO0_KME_LOGO0_3C_km_logo_blk_region13_gain(data)                  (0x00FFF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_3C_km_logo_blk_region12_gain(data)                  (0x00000FFF&(data))
#define  KME_LOGO0_KME_LOGO0_3C_get_km_logo_blk_region13_gain(data)              ((0x00FFF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_3C_get_km_logo_blk_region12_gain(data)              (0x00000FFF&(data))

#define  KME_LOGO0_KME_LOGO0_40                                                 0x1809BE40
#define  KME_LOGO0_KME_LOGO0_40_reg_addr                                         "0xB809BE40"
#define  KME_LOGO0_KME_LOGO0_40_reg                                              0xB809BE40
#define  KME_LOGO0_KME_LOGO0_40_inst_addr                                        "0x0010"
#define  set_KME_LOGO0_KME_LOGO0_40_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_40_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_40_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_40_reg))
#define  KME_LOGO0_KME_LOGO0_40_km_logo_blk_region15_gain_shift                  (12)
#define  KME_LOGO0_KME_LOGO0_40_km_logo_blk_region14_gain_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_40_km_logo_blk_region15_gain_mask                   (0x00FFF000)
#define  KME_LOGO0_KME_LOGO0_40_km_logo_blk_region14_gain_mask                   (0x00000FFF)
#define  KME_LOGO0_KME_LOGO0_40_km_logo_blk_region15_gain(data)                  (0x00FFF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_40_km_logo_blk_region14_gain(data)                  (0x00000FFF&(data))
#define  KME_LOGO0_KME_LOGO0_40_get_km_logo_blk_region15_gain(data)              ((0x00FFF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_40_get_km_logo_blk_region14_gain(data)              (0x00000FFF&(data))

#define  KME_LOGO0_KME_LOGO0_44                                                 0x1809BE44
#define  KME_LOGO0_KME_LOGO0_44_reg_addr                                         "0xB809BE44"
#define  KME_LOGO0_KME_LOGO0_44_reg                                              0xB809BE44
#define  KME_LOGO0_KME_LOGO0_44_inst_addr                                        "0x0011"
#define  set_KME_LOGO0_KME_LOGO0_44_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_44_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_44_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_44_reg))
#define  KME_LOGO0_KME_LOGO0_44_km_logo_blk_region17_gain_shift                  (12)
#define  KME_LOGO0_KME_LOGO0_44_km_logo_blk_region16_gain_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_44_km_logo_blk_region17_gain_mask                   (0x00FFF000)
#define  KME_LOGO0_KME_LOGO0_44_km_logo_blk_region16_gain_mask                   (0x00000FFF)
#define  KME_LOGO0_KME_LOGO0_44_km_logo_blk_region17_gain(data)                  (0x00FFF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_44_km_logo_blk_region16_gain(data)                  (0x00000FFF&(data))
#define  KME_LOGO0_KME_LOGO0_44_get_km_logo_blk_region17_gain(data)              ((0x00FFF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_44_get_km_logo_blk_region16_gain(data)              (0x00000FFF&(data))

#define  KME_LOGO0_KME_LOGO0_48                                                 0x1809BE48
#define  KME_LOGO0_KME_LOGO0_48_reg_addr                                         "0xB809BE48"
#define  KME_LOGO0_KME_LOGO0_48_reg                                              0xB809BE48
#define  KME_LOGO0_KME_LOGO0_48_inst_addr                                        "0x0012"
#define  set_KME_LOGO0_KME_LOGO0_48_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_48_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_48_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_48_reg))
#define  KME_LOGO0_KME_LOGO0_48_km_logo_blk_region19_gain_shift                  (12)
#define  KME_LOGO0_KME_LOGO0_48_km_logo_blk_region18_gain_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_48_km_logo_blk_region19_gain_mask                   (0x00FFF000)
#define  KME_LOGO0_KME_LOGO0_48_km_logo_blk_region18_gain_mask                   (0x00000FFF)
#define  KME_LOGO0_KME_LOGO0_48_km_logo_blk_region19_gain(data)                  (0x00FFF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_48_km_logo_blk_region18_gain(data)                  (0x00000FFF&(data))
#define  KME_LOGO0_KME_LOGO0_48_get_km_logo_blk_region19_gain(data)              ((0x00FFF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_48_get_km_logo_blk_region18_gain(data)              (0x00000FFF&(data))

#define  KME_LOGO0_KME_LOGO0_4C                                                 0x1809BE4C
#define  KME_LOGO0_KME_LOGO0_4C_reg_addr                                         "0xB809BE4C"
#define  KME_LOGO0_KME_LOGO0_4C_reg                                              0xB809BE4C
#define  KME_LOGO0_KME_LOGO0_4C_inst_addr                                        "0x0013"
#define  set_KME_LOGO0_KME_LOGO0_4C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_4C_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_4C_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_4C_reg))
#define  KME_LOGO0_KME_LOGO0_4C_km_logo_blk_region21_gain_shift                  (12)
#define  KME_LOGO0_KME_LOGO0_4C_km_logo_blk_region20_gain_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_4C_km_logo_blk_region21_gain_mask                   (0x00FFF000)
#define  KME_LOGO0_KME_LOGO0_4C_km_logo_blk_region20_gain_mask                   (0x00000FFF)
#define  KME_LOGO0_KME_LOGO0_4C_km_logo_blk_region21_gain(data)                  (0x00FFF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_4C_km_logo_blk_region20_gain(data)                  (0x00000FFF&(data))
#define  KME_LOGO0_KME_LOGO0_4C_get_km_logo_blk_region21_gain(data)              ((0x00FFF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_4C_get_km_logo_blk_region20_gain(data)              (0x00000FFF&(data))

#define  KME_LOGO0_KME_LOGO0_50                                                 0x1809BE50
#define  KME_LOGO0_KME_LOGO0_50_reg_addr                                         "0xB809BE50"
#define  KME_LOGO0_KME_LOGO0_50_reg                                              0xB809BE50
#define  KME_LOGO0_KME_LOGO0_50_inst_addr                                        "0x0014"
#define  set_KME_LOGO0_KME_LOGO0_50_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_50_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_50_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_50_reg))
#define  KME_LOGO0_KME_LOGO0_50_km_logo_blk_region23_gain_shift                  (12)
#define  KME_LOGO0_KME_LOGO0_50_km_logo_blk_region22_gain_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_50_km_logo_blk_region23_gain_mask                   (0x00FFF000)
#define  KME_LOGO0_KME_LOGO0_50_km_logo_blk_region22_gain_mask                   (0x00000FFF)
#define  KME_LOGO0_KME_LOGO0_50_km_logo_blk_region23_gain(data)                  (0x00FFF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_50_km_logo_blk_region22_gain(data)                  (0x00000FFF&(data))
#define  KME_LOGO0_KME_LOGO0_50_get_km_logo_blk_region23_gain(data)              ((0x00FFF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_50_get_km_logo_blk_region22_gain(data)              (0x00000FFF&(data))

#define  KME_LOGO0_KME_LOGO0_54                                                 0x1809BE54
#define  KME_LOGO0_KME_LOGO0_54_reg_addr                                         "0xB809BE54"
#define  KME_LOGO0_KME_LOGO0_54_reg                                              0xB809BE54
#define  KME_LOGO0_KME_LOGO0_54_inst_addr                                        "0x0015"
#define  set_KME_LOGO0_KME_LOGO0_54_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_54_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_54_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_54_reg))
#define  KME_LOGO0_KME_LOGO0_54_km_logo_blk_region25_gain_shift                  (12)
#define  KME_LOGO0_KME_LOGO0_54_km_logo_blk_region24_gain_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_54_km_logo_blk_region25_gain_mask                   (0x00FFF000)
#define  KME_LOGO0_KME_LOGO0_54_km_logo_blk_region24_gain_mask                   (0x00000FFF)
#define  KME_LOGO0_KME_LOGO0_54_km_logo_blk_region25_gain(data)                  (0x00FFF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_54_km_logo_blk_region24_gain(data)                  (0x00000FFF&(data))
#define  KME_LOGO0_KME_LOGO0_54_get_km_logo_blk_region25_gain(data)              ((0x00FFF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_54_get_km_logo_blk_region24_gain(data)              (0x00000FFF&(data))

#define  KME_LOGO0_KME_LOGO0_58                                                 0x1809BE58
#define  KME_LOGO0_KME_LOGO0_58_reg_addr                                         "0xB809BE58"
#define  KME_LOGO0_KME_LOGO0_58_reg                                              0xB809BE58
#define  KME_LOGO0_KME_LOGO0_58_inst_addr                                        "0x0016"
#define  set_KME_LOGO0_KME_LOGO0_58_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_58_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_58_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_58_reg))
#define  KME_LOGO0_KME_LOGO0_58_km_logo_blk_region27_gain_shift                  (12)
#define  KME_LOGO0_KME_LOGO0_58_km_logo_blk_region26_gain_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_58_km_logo_blk_region27_gain_mask                   (0x00FFF000)
#define  KME_LOGO0_KME_LOGO0_58_km_logo_blk_region26_gain_mask                   (0x00000FFF)
#define  KME_LOGO0_KME_LOGO0_58_km_logo_blk_region27_gain(data)                  (0x00FFF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_58_km_logo_blk_region26_gain(data)                  (0x00000FFF&(data))
#define  KME_LOGO0_KME_LOGO0_58_get_km_logo_blk_region27_gain(data)              ((0x00FFF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_58_get_km_logo_blk_region26_gain(data)              (0x00000FFF&(data))

#define  KME_LOGO0_KME_LOGO0_5C                                                 0x1809BE5C
#define  KME_LOGO0_KME_LOGO0_5C_reg_addr                                         "0xB809BE5C"
#define  KME_LOGO0_KME_LOGO0_5C_reg                                              0xB809BE5C
#define  KME_LOGO0_KME_LOGO0_5C_inst_addr                                        "0x0017"
#define  set_KME_LOGO0_KME_LOGO0_5C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_5C_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_5C_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_5C_reg))
#define  KME_LOGO0_KME_LOGO0_5C_km_logo_blk_region29_gain_shift                  (12)
#define  KME_LOGO0_KME_LOGO0_5C_km_logo_blk_region28_gain_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_5C_km_logo_blk_region29_gain_mask                   (0x00FFF000)
#define  KME_LOGO0_KME_LOGO0_5C_km_logo_blk_region28_gain_mask                   (0x00000FFF)
#define  KME_LOGO0_KME_LOGO0_5C_km_logo_blk_region29_gain(data)                  (0x00FFF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_5C_km_logo_blk_region28_gain(data)                  (0x00000FFF&(data))
#define  KME_LOGO0_KME_LOGO0_5C_get_km_logo_blk_region29_gain(data)              ((0x00FFF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_5C_get_km_logo_blk_region28_gain(data)              (0x00000FFF&(data))

#define  KME_LOGO0_KME_LOGO0_60                                                 0x1809BE60
#define  KME_LOGO0_KME_LOGO0_60_reg_addr                                         "0xB809BE60"
#define  KME_LOGO0_KME_LOGO0_60_reg                                              0xB809BE60
#define  KME_LOGO0_KME_LOGO0_60_inst_addr                                        "0x0018"
#define  set_KME_LOGO0_KME_LOGO0_60_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_60_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_60_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_60_reg))
#define  KME_LOGO0_KME_LOGO0_60_km_logo_blk_region31_gain_shift                  (12)
#define  KME_LOGO0_KME_LOGO0_60_km_logo_blk_region30_gain_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_60_km_logo_blk_region31_gain_mask                   (0x00FFF000)
#define  KME_LOGO0_KME_LOGO0_60_km_logo_blk_region30_gain_mask                   (0x00000FFF)
#define  KME_LOGO0_KME_LOGO0_60_km_logo_blk_region31_gain(data)                  (0x00FFF000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_60_km_logo_blk_region30_gain(data)                  (0x00000FFF&(data))
#define  KME_LOGO0_KME_LOGO0_60_get_km_logo_blk_region31_gain(data)              ((0x00FFF000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_60_get_km_logo_blk_region30_gain(data)              (0x00000FFF&(data))

#define  KME_LOGO0_KME_LOGO0_64                                                 0x1809BE64
#define  KME_LOGO0_KME_LOGO0_64_reg_addr                                         "0xB809BE64"
#define  KME_LOGO0_KME_LOGO0_64_reg                                              0xB809BE64
#define  KME_LOGO0_KME_LOGO0_64_inst_addr                                        "0x0019"
#define  set_KME_LOGO0_KME_LOGO0_64_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_64_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_64_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_64_reg))
#define  KME_LOGO0_KME_LOGO0_64_km_logo_blkgrdn45_th_shift                       (24)
#define  KME_LOGO0_KME_LOGO0_64_km_logo_blkgrdver_th_shift                       (16)
#define  KME_LOGO0_KME_LOGO0_64_km_logo_blkgrdp45_th_shift                       (8)
#define  KME_LOGO0_KME_LOGO0_64_km_logo_blkgrdhor_th_shift                       (0)
#define  KME_LOGO0_KME_LOGO0_64_km_logo_blkgrdn45_th_mask                        (0xFF000000)
#define  KME_LOGO0_KME_LOGO0_64_km_logo_blkgrdver_th_mask                        (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_64_km_logo_blkgrdp45_th_mask                        (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_64_km_logo_blkgrdhor_th_mask                        (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_64_km_logo_blkgrdn45_th(data)                       (0xFF000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_64_km_logo_blkgrdver_th(data)                       (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_64_km_logo_blkgrdp45_th(data)                       (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_64_km_logo_blkgrdhor_th(data)                       (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_64_get_km_logo_blkgrdn45_th(data)                   ((0xFF000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_64_get_km_logo_blkgrdver_th(data)                   ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_64_get_km_logo_blkgrdp45_th(data)                   ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_64_get_km_logo_blkgrdhor_th(data)                   (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_68                                                 0x1809BE68
#define  KME_LOGO0_KME_LOGO0_68_reg_addr                                         "0xB809BE68"
#define  KME_LOGO0_KME_LOGO0_68_reg                                              0xB809BE68
#define  KME_LOGO0_KME_LOGO0_68_inst_addr                                        "0x001A"
#define  set_KME_LOGO0_KME_LOGO0_68_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_68_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_68_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_68_reg))
#define  KME_LOGO0_KME_LOGO0_68_km_logo_blkgrdsum_pth_shift                      (11)
#define  KME_LOGO0_KME_LOGO0_68_km_logo_blkgrdsum2_th_shift                      (0)
#define  KME_LOGO0_KME_LOGO0_68_km_logo_blkgrdsum_pth_mask                       (0x001FF800)
#define  KME_LOGO0_KME_LOGO0_68_km_logo_blkgrdsum2_th_mask                       (0x000007FF)
#define  KME_LOGO0_KME_LOGO0_68_km_logo_blkgrdsum_pth(data)                      (0x001FF800&((data)<<11))
#define  KME_LOGO0_KME_LOGO0_68_km_logo_blkgrdsum2_th(data)                      (0x000007FF&(data))
#define  KME_LOGO0_KME_LOGO0_68_get_km_logo_blkgrdsum_pth(data)                  ((0x001FF800&(data))>>11)
#define  KME_LOGO0_KME_LOGO0_68_get_km_logo_blkgrdsum2_th(data)                  (0x000007FF&(data))

#define  KME_LOGO0_KME_LOGO0_6C                                                 0x1809BE6C
#define  KME_LOGO0_KME_LOGO0_6C_reg_addr                                         "0xB809BE6C"
#define  KME_LOGO0_KME_LOGO0_6C_reg                                              0xB809BE6C
#define  KME_LOGO0_KME_LOGO0_6C_inst_addr                                        "0x001B"
#define  set_KME_LOGO0_KME_LOGO0_6C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_6C_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_6C_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_6C_reg))
#define  KME_LOGO0_KME_LOGO0_6C_km_logo_grddiffrs_bit_shift                      (20)
#define  KME_LOGO0_KME_LOGO0_6C_km_logo_blkgrdsum_diffth_shift                   (10)
#define  KME_LOGO0_KME_LOGO0_6C_km_logo_blkgrdsum_cth_shift                      (0)
#define  KME_LOGO0_KME_LOGO0_6C_km_logo_grddiffrs_bit_mask                       (0x00300000)
#define  KME_LOGO0_KME_LOGO0_6C_km_logo_blkgrdsum_diffth_mask                    (0x000FFC00)
#define  KME_LOGO0_KME_LOGO0_6C_km_logo_blkgrdsum_cth_mask                       (0x000003FF)
#define  KME_LOGO0_KME_LOGO0_6C_km_logo_grddiffrs_bit(data)                      (0x00300000&((data)<<20))
#define  KME_LOGO0_KME_LOGO0_6C_km_logo_blkgrdsum_diffth(data)                   (0x000FFC00&((data)<<10))
#define  KME_LOGO0_KME_LOGO0_6C_km_logo_blkgrdsum_cth(data)                      (0x000003FF&(data))
#define  KME_LOGO0_KME_LOGO0_6C_get_km_logo_grddiffrs_bit(data)                  ((0x00300000&(data))>>20)
#define  KME_LOGO0_KME_LOGO0_6C_get_km_logo_blkgrdsum_diffth(data)               ((0x000FFC00&(data))>>10)
#define  KME_LOGO0_KME_LOGO0_6C_get_km_logo_blkgrdsum_cth(data)                  (0x000003FF&(data))

#define  KME_LOGO0_KME_LOGO0_70                                                 0x1809BE70
#define  KME_LOGO0_KME_LOGO0_70_reg_addr                                         "0xB809BE70"
#define  KME_LOGO0_KME_LOGO0_70_reg                                              0xB809BE70
#define  KME_LOGO0_KME_LOGO0_70_inst_addr                                        "0x001C"
#define  set_KME_LOGO0_KME_LOGO0_70_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_70_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_70_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_70_reg))
#define  KME_LOGO0_KME_LOGO0_70_km_logo_blksameth_hstylut_s4_shift               (24)
#define  KME_LOGO0_KME_LOGO0_70_km_logo_blksameth_hstylut_s3_shift               (18)
#define  KME_LOGO0_KME_LOGO0_70_km_logo_blksameth_hstylut_s2_shift               (12)
#define  KME_LOGO0_KME_LOGO0_70_km_logo_blksameth_hstylut_s1_shift               (6)
#define  KME_LOGO0_KME_LOGO0_70_km_logo_blksameth_hstylut_s0_shift               (0)
#define  KME_LOGO0_KME_LOGO0_70_km_logo_blksameth_hstylut_s4_mask                (0x3F000000)
#define  KME_LOGO0_KME_LOGO0_70_km_logo_blksameth_hstylut_s3_mask                (0x00FC0000)
#define  KME_LOGO0_KME_LOGO0_70_km_logo_blksameth_hstylut_s2_mask                (0x0003F000)
#define  KME_LOGO0_KME_LOGO0_70_km_logo_blksameth_hstylut_s1_mask                (0x00000FC0)
#define  KME_LOGO0_KME_LOGO0_70_km_logo_blksameth_hstylut_s0_mask                (0x0000003F)
#define  KME_LOGO0_KME_LOGO0_70_km_logo_blksameth_hstylut_s4(data)               (0x3F000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_70_km_logo_blksameth_hstylut_s3(data)               (0x00FC0000&((data)<<18))
#define  KME_LOGO0_KME_LOGO0_70_km_logo_blksameth_hstylut_s2(data)               (0x0003F000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_70_km_logo_blksameth_hstylut_s1(data)               (0x00000FC0&((data)<<6))
#define  KME_LOGO0_KME_LOGO0_70_km_logo_blksameth_hstylut_s0(data)               (0x0000003F&(data))
#define  KME_LOGO0_KME_LOGO0_70_get_km_logo_blksameth_hstylut_s4(data)           ((0x3F000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_70_get_km_logo_blksameth_hstylut_s3(data)           ((0x00FC0000&(data))>>18)
#define  KME_LOGO0_KME_LOGO0_70_get_km_logo_blksameth_hstylut_s2(data)           ((0x0003F000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_70_get_km_logo_blksameth_hstylut_s1(data)           ((0x00000FC0&(data))>>6)
#define  KME_LOGO0_KME_LOGO0_70_get_km_logo_blksameth_hstylut_s0(data)           (0x0000003F&(data))

#define  KME_LOGO0_KME_LOGO0_74                                                 0x1809BE74
#define  KME_LOGO0_KME_LOGO0_74_reg_addr                                         "0xB809BE74"
#define  KME_LOGO0_KME_LOGO0_74_reg                                              0xB809BE74
#define  KME_LOGO0_KME_LOGO0_74_inst_addr                                        "0x001D"
#define  set_KME_LOGO0_KME_LOGO0_74_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_74_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_74_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_74_reg))
#define  KME_LOGO0_KME_LOGO0_74_km_logo_blksameth_hstylut_s9_shift               (24)
#define  KME_LOGO0_KME_LOGO0_74_km_logo_blksameth_hstylut_s8_shift               (18)
#define  KME_LOGO0_KME_LOGO0_74_km_logo_blksameth_hstylut_s7_shift               (12)
#define  KME_LOGO0_KME_LOGO0_74_km_logo_blksameth_hstylut_s6_shift               (6)
#define  KME_LOGO0_KME_LOGO0_74_km_logo_blksameth_hstylut_s5_shift               (0)
#define  KME_LOGO0_KME_LOGO0_74_km_logo_blksameth_hstylut_s9_mask                (0x3F000000)
#define  KME_LOGO0_KME_LOGO0_74_km_logo_blksameth_hstylut_s8_mask                (0x00FC0000)
#define  KME_LOGO0_KME_LOGO0_74_km_logo_blksameth_hstylut_s7_mask                (0x0003F000)
#define  KME_LOGO0_KME_LOGO0_74_km_logo_blksameth_hstylut_s6_mask                (0x00000FC0)
#define  KME_LOGO0_KME_LOGO0_74_km_logo_blksameth_hstylut_s5_mask                (0x0000003F)
#define  KME_LOGO0_KME_LOGO0_74_km_logo_blksameth_hstylut_s9(data)               (0x3F000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_74_km_logo_blksameth_hstylut_s8(data)               (0x00FC0000&((data)<<18))
#define  KME_LOGO0_KME_LOGO0_74_km_logo_blksameth_hstylut_s7(data)               (0x0003F000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_74_km_logo_blksameth_hstylut_s6(data)               (0x00000FC0&((data)<<6))
#define  KME_LOGO0_KME_LOGO0_74_km_logo_blksameth_hstylut_s5(data)               (0x0000003F&(data))
#define  KME_LOGO0_KME_LOGO0_74_get_km_logo_blksameth_hstylut_s9(data)           ((0x3F000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_74_get_km_logo_blksameth_hstylut_s8(data)           ((0x00FC0000&(data))>>18)
#define  KME_LOGO0_KME_LOGO0_74_get_km_logo_blksameth_hstylut_s7(data)           ((0x0003F000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_74_get_km_logo_blksameth_hstylut_s6(data)           ((0x00000FC0&(data))>>6)
#define  KME_LOGO0_KME_LOGO0_74_get_km_logo_blksameth_hstylut_s5(data)           (0x0000003F&(data))

#define  KME_LOGO0_KME_LOGO0_78                                                 0x1809BE78
#define  KME_LOGO0_KME_LOGO0_78_reg_addr                                         "0xB809BE78"
#define  KME_LOGO0_KME_LOGO0_78_reg                                              0xB809BE78
#define  KME_LOGO0_KME_LOGO0_78_inst_addr                                        "0x001E"
#define  set_KME_LOGO0_KME_LOGO0_78_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_78_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_78_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_78_reg))
#define  KME_LOGO0_KME_LOGO0_78_km_logo_blksameth_hstylut_s14_shift              (24)
#define  KME_LOGO0_KME_LOGO0_78_km_logo_blksameth_hstylut_s13_shift              (18)
#define  KME_LOGO0_KME_LOGO0_78_km_logo_blksameth_hstylut_s12_shift              (12)
#define  KME_LOGO0_KME_LOGO0_78_km_logo_blksameth_hstylut_s11_shift              (6)
#define  KME_LOGO0_KME_LOGO0_78_km_logo_blksameth_hstylut_s10_shift              (0)
#define  KME_LOGO0_KME_LOGO0_78_km_logo_blksameth_hstylut_s14_mask               (0x3F000000)
#define  KME_LOGO0_KME_LOGO0_78_km_logo_blksameth_hstylut_s13_mask               (0x00FC0000)
#define  KME_LOGO0_KME_LOGO0_78_km_logo_blksameth_hstylut_s12_mask               (0x0003F000)
#define  KME_LOGO0_KME_LOGO0_78_km_logo_blksameth_hstylut_s11_mask               (0x00000FC0)
#define  KME_LOGO0_KME_LOGO0_78_km_logo_blksameth_hstylut_s10_mask               (0x0000003F)
#define  KME_LOGO0_KME_LOGO0_78_km_logo_blksameth_hstylut_s14(data)              (0x3F000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_78_km_logo_blksameth_hstylut_s13(data)              (0x00FC0000&((data)<<18))
#define  KME_LOGO0_KME_LOGO0_78_km_logo_blksameth_hstylut_s12(data)              (0x0003F000&((data)<<12))
#define  KME_LOGO0_KME_LOGO0_78_km_logo_blksameth_hstylut_s11(data)              (0x00000FC0&((data)<<6))
#define  KME_LOGO0_KME_LOGO0_78_km_logo_blksameth_hstylut_s10(data)              (0x0000003F&(data))
#define  KME_LOGO0_KME_LOGO0_78_get_km_logo_blksameth_hstylut_s14(data)          ((0x3F000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_78_get_km_logo_blksameth_hstylut_s13(data)          ((0x00FC0000&(data))>>18)
#define  KME_LOGO0_KME_LOGO0_78_get_km_logo_blksameth_hstylut_s12(data)          ((0x0003F000&(data))>>12)
#define  KME_LOGO0_KME_LOGO0_78_get_km_logo_blksameth_hstylut_s11(data)          ((0x00000FC0&(data))>>6)
#define  KME_LOGO0_KME_LOGO0_78_get_km_logo_blksameth_hstylut_s10(data)          (0x0000003F&(data))

#define  KME_LOGO0_KME_LOGO0_7C                                                 0x1809BE7C
#define  KME_LOGO0_KME_LOGO0_7C_reg_addr                                         "0xB809BE7C"
#define  KME_LOGO0_KME_LOGO0_7C_reg                                              0xB809BE7C
#define  KME_LOGO0_KME_LOGO0_7C_inst_addr                                        "0x001F"
#define  set_KME_LOGO0_KME_LOGO0_7C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_7C_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_7C_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_7C_reg))
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_t4_shift               (26)
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_t3_shift               (21)
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_t2_shift               (16)
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_t1_shift               (11)
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_t0_shift               (6)
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_s15_shift              (0)
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_t4_mask                (0x7C000000)
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_t3_mask                (0x03E00000)
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_t2_mask                (0x001F0000)
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_t1_mask                (0x0000F800)
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_t0_mask                (0x000007C0)
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_s15_mask               (0x0000003F)
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_t4(data)               (0x7C000000&((data)<<26))
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_t3(data)               (0x03E00000&((data)<<21))
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_t2(data)               (0x001F0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_t1(data)               (0x0000F800&((data)<<11))
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_t0(data)               (0x000007C0&((data)<<6))
#define  KME_LOGO0_KME_LOGO0_7C_km_logo_blksameth_hstylut_s15(data)              (0x0000003F&(data))
#define  KME_LOGO0_KME_LOGO0_7C_get_km_logo_blksameth_hstylut_t4(data)           ((0x7C000000&(data))>>26)
#define  KME_LOGO0_KME_LOGO0_7C_get_km_logo_blksameth_hstylut_t3(data)           ((0x03E00000&(data))>>21)
#define  KME_LOGO0_KME_LOGO0_7C_get_km_logo_blksameth_hstylut_t2(data)           ((0x001F0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_7C_get_km_logo_blksameth_hstylut_t1(data)           ((0x0000F800&(data))>>11)
#define  KME_LOGO0_KME_LOGO0_7C_get_km_logo_blksameth_hstylut_t0(data)           ((0x000007C0&(data))>>6)
#define  KME_LOGO0_KME_LOGO0_7C_get_km_logo_blksameth_hstylut_s15(data)          (0x0000003F&(data))

#define  KME_LOGO0_KME_LOGO0_80                                                 0x1809BE80
#define  KME_LOGO0_KME_LOGO0_80_reg_addr                                         "0xB809BE80"
#define  KME_LOGO0_KME_LOGO0_80_reg                                              0xB809BE80
#define  KME_LOGO0_KME_LOGO0_80_inst_addr                                        "0x0020"
#define  set_KME_LOGO0_KME_LOGO0_80_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_80_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_80_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_80_reg))
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t10_shift              (25)
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t9_shift               (20)
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t8_shift               (15)
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t7_shift               (10)
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t6_shift               (5)
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t5_shift               (0)
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t10_mask               (0x3E000000)
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t9_mask                (0x01F00000)
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t8_mask                (0x000F8000)
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t7_mask                (0x00007C00)
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t6_mask                (0x000003E0)
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t5_mask                (0x0000001F)
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t10(data)              (0x3E000000&((data)<<25))
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t9(data)               (0x01F00000&((data)<<20))
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t8(data)               (0x000F8000&((data)<<15))
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t7(data)               (0x00007C00&((data)<<10))
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t6(data)               (0x000003E0&((data)<<5))
#define  KME_LOGO0_KME_LOGO0_80_km_logo_blksameth_hstylut_t5(data)               (0x0000001F&(data))
#define  KME_LOGO0_KME_LOGO0_80_get_km_logo_blksameth_hstylut_t10(data)          ((0x3E000000&(data))>>25)
#define  KME_LOGO0_KME_LOGO0_80_get_km_logo_blksameth_hstylut_t9(data)           ((0x01F00000&(data))>>20)
#define  KME_LOGO0_KME_LOGO0_80_get_km_logo_blksameth_hstylut_t8(data)           ((0x000F8000&(data))>>15)
#define  KME_LOGO0_KME_LOGO0_80_get_km_logo_blksameth_hstylut_t7(data)           ((0x00007C00&(data))>>10)
#define  KME_LOGO0_KME_LOGO0_80_get_km_logo_blksameth_hstylut_t6(data)           ((0x000003E0&(data))>>5)
#define  KME_LOGO0_KME_LOGO0_80_get_km_logo_blksameth_hstylut_t5(data)           (0x0000001F&(data))

#define  KME_LOGO0_KME_LOGO0_84                                                 0x1809BE84
#define  KME_LOGO0_KME_LOGO0_84_reg_addr                                         "0xB809BE84"
#define  KME_LOGO0_KME_LOGO0_84_reg                                              0xB809BE84
#define  KME_LOGO0_KME_LOGO0_84_inst_addr                                        "0x0021"
#define  set_KME_LOGO0_KME_LOGO0_84_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_84_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_84_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_84_reg))
#define  KME_LOGO0_KME_LOGO0_84_km_logo_adpblksameth_en_shift                    (25)
#define  KME_LOGO0_KME_LOGO0_84_km_logo_blksameth_hstylut_t15_shift              (20)
#define  KME_LOGO0_KME_LOGO0_84_km_logo_blksameth_hstylut_t14_shift              (15)
#define  KME_LOGO0_KME_LOGO0_84_km_logo_blksameth_hstylut_t13_shift              (10)
#define  KME_LOGO0_KME_LOGO0_84_km_logo_blksameth_hstylut_t12_shift              (5)
#define  KME_LOGO0_KME_LOGO0_84_km_logo_blksameth_hstylut_t11_shift              (0)
#define  KME_LOGO0_KME_LOGO0_84_km_logo_adpblksameth_en_mask                     (0x02000000)
#define  KME_LOGO0_KME_LOGO0_84_km_logo_blksameth_hstylut_t15_mask               (0x01F00000)
#define  KME_LOGO0_KME_LOGO0_84_km_logo_blksameth_hstylut_t14_mask               (0x000F8000)
#define  KME_LOGO0_KME_LOGO0_84_km_logo_blksameth_hstylut_t13_mask               (0x00007C00)
#define  KME_LOGO0_KME_LOGO0_84_km_logo_blksameth_hstylut_t12_mask               (0x000003E0)
#define  KME_LOGO0_KME_LOGO0_84_km_logo_blksameth_hstylut_t11_mask               (0x0000001F)
#define  KME_LOGO0_KME_LOGO0_84_km_logo_adpblksameth_en(data)                    (0x02000000&((data)<<25))
#define  KME_LOGO0_KME_LOGO0_84_km_logo_blksameth_hstylut_t15(data)              (0x01F00000&((data)<<20))
#define  KME_LOGO0_KME_LOGO0_84_km_logo_blksameth_hstylut_t14(data)              (0x000F8000&((data)<<15))
#define  KME_LOGO0_KME_LOGO0_84_km_logo_blksameth_hstylut_t13(data)              (0x00007C00&((data)<<10))
#define  KME_LOGO0_KME_LOGO0_84_km_logo_blksameth_hstylut_t12(data)              (0x000003E0&((data)<<5))
#define  KME_LOGO0_KME_LOGO0_84_km_logo_blksameth_hstylut_t11(data)              (0x0000001F&(data))
#define  KME_LOGO0_KME_LOGO0_84_get_km_logo_adpblksameth_en(data)                ((0x02000000&(data))>>25)
#define  KME_LOGO0_KME_LOGO0_84_get_km_logo_blksameth_hstylut_t15(data)          ((0x01F00000&(data))>>20)
#define  KME_LOGO0_KME_LOGO0_84_get_km_logo_blksameth_hstylut_t14(data)          ((0x000F8000&(data))>>15)
#define  KME_LOGO0_KME_LOGO0_84_get_km_logo_blksameth_hstylut_t13(data)          ((0x00007C00&(data))>>10)
#define  KME_LOGO0_KME_LOGO0_84_get_km_logo_blksameth_hstylut_t12(data)          ((0x000003E0&(data))>>5)
#define  KME_LOGO0_KME_LOGO0_84_get_km_logo_blksameth_hstylut_t11(data)          (0x0000001F&(data))

#define  KME_LOGO0_KME_LOGO0_88                                                 0x1809BE88
#define  KME_LOGO0_KME_LOGO0_88_reg_addr                                         "0xB809BE88"
#define  KME_LOGO0_KME_LOGO0_88_reg                                              0xB809BE88
#define  KME_LOGO0_KME_LOGO0_88_inst_addr                                        "0x0022"
#define  set_KME_LOGO0_KME_LOGO0_88_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_88_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_88_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_88_reg))
#define  KME_LOGO0_KME_LOGO0_88_km_logo_blksameth_hsty_sbase_shift               (16)
#define  KME_LOGO0_KME_LOGO0_88_km_logo_blksameth_hsty_tbase_shift               (8)
#define  KME_LOGO0_KME_LOGO0_88_km_logo_blksameth_m_shift                        (0)
#define  KME_LOGO0_KME_LOGO0_88_km_logo_blksameth_hsty_sbase_mask                (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_88_km_logo_blksameth_hsty_tbase_mask                (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_88_km_logo_blksameth_m_mask                         (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_88_km_logo_blksameth_hsty_sbase(data)               (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_88_km_logo_blksameth_hsty_tbase(data)               (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_88_km_logo_blksameth_m(data)                        (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_88_get_km_logo_blksameth_hsty_sbase(data)           ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_88_get_km_logo_blksameth_hsty_tbase(data)           ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_88_get_km_logo_blksameth_m(data)                    (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_8C                                                 0x1809BE8C
#define  KME_LOGO0_KME_LOGO0_8C_reg_addr                                         "0xB809BE8C"
#define  KME_LOGO0_KME_LOGO0_8C_reg                                              0xB809BE8C
#define  KME_LOGO0_KME_LOGO0_8C_inst_addr                                        "0x0023"
#define  set_KME_LOGO0_KME_LOGO0_8C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_8C_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_8C_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_8C_reg))
#define  KME_LOGO0_KME_LOGO0_8C_km_logo_blksameth_posw_x2_shift                  (18)
#define  KME_LOGO0_KME_LOGO0_8C_km_logo_blksameth_posw_x1_shift                  (9)
#define  KME_LOGO0_KME_LOGO0_8C_km_logo_blksameth_posw_x0_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_8C_km_logo_blksameth_posw_x2_mask                   (0x07FC0000)
#define  KME_LOGO0_KME_LOGO0_8C_km_logo_blksameth_posw_x1_mask                   (0x0003FE00)
#define  KME_LOGO0_KME_LOGO0_8C_km_logo_blksameth_posw_x0_mask                   (0x000001FF)
#define  KME_LOGO0_KME_LOGO0_8C_km_logo_blksameth_posw_x2(data)                  (0x07FC0000&((data)<<18))
#define  KME_LOGO0_KME_LOGO0_8C_km_logo_blksameth_posw_x1(data)                  (0x0003FE00&((data)<<9))
#define  KME_LOGO0_KME_LOGO0_8C_km_logo_blksameth_posw_x0(data)                  (0x000001FF&(data))
#define  KME_LOGO0_KME_LOGO0_8C_get_km_logo_blksameth_posw_x2(data)              ((0x07FC0000&(data))>>18)
#define  KME_LOGO0_KME_LOGO0_8C_get_km_logo_blksameth_posw_x1(data)              ((0x0003FE00&(data))>>9)
#define  KME_LOGO0_KME_LOGO0_8C_get_km_logo_blksameth_posw_x0(data)              (0x000001FF&(data))

#define  KME_LOGO0_KME_LOGO0_90                                                 0x1809BE90
#define  KME_LOGO0_KME_LOGO0_90_reg_addr                                         "0xB809BE90"
#define  KME_LOGO0_KME_LOGO0_90_reg                                              0xB809BE90
#define  KME_LOGO0_KME_LOGO0_90_inst_addr                                        "0x0024"
#define  set_KME_LOGO0_KME_LOGO0_90_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_90_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_90_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_90_reg))
#define  KME_LOGO0_KME_LOGO0_90_km_logo_blksameth_posw_y2_shift                  (16)
#define  KME_LOGO0_KME_LOGO0_90_km_logo_blksameth_posw_y1_shift                  (8)
#define  KME_LOGO0_KME_LOGO0_90_km_logo_blksameth_posw_y0_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_90_km_logo_blksameth_posw_y2_mask                   (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_90_km_logo_blksameth_posw_y1_mask                   (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_90_km_logo_blksameth_posw_y0_mask                   (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_90_km_logo_blksameth_posw_y2(data)                  (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_90_km_logo_blksameth_posw_y1(data)                  (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_90_km_logo_blksameth_posw_y0(data)                  (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_90_get_km_logo_blksameth_posw_y2(data)              ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_90_get_km_logo_blksameth_posw_y1(data)              ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_90_get_km_logo_blksameth_posw_y0(data)              (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_94                                                 0x1809BE94
#define  KME_LOGO0_KME_LOGO0_94_reg_addr                                         "0xB809BE94"
#define  KME_LOGO0_KME_LOGO0_94_reg                                              0xB809BE94
#define  KME_LOGO0_KME_LOGO0_94_inst_addr                                        "0x0025"
#define  set_KME_LOGO0_KME_LOGO0_94_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_94_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_94_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_94_reg))
#define  KME_LOGO0_KME_LOGO0_94_km_logo_blksameth_posw_slp1_shift                (5)
#define  KME_LOGO0_KME_LOGO0_94_km_logo_blksameth_posw_slp0_shift                (0)
#define  KME_LOGO0_KME_LOGO0_94_km_logo_blksameth_posw_slp1_mask                 (0x000003E0)
#define  KME_LOGO0_KME_LOGO0_94_km_logo_blksameth_posw_slp0_mask                 (0x0000001F)
#define  KME_LOGO0_KME_LOGO0_94_km_logo_blksameth_posw_slp1(data)                (0x000003E0&((data)<<5))
#define  KME_LOGO0_KME_LOGO0_94_km_logo_blksameth_posw_slp0(data)                (0x0000001F&(data))
#define  KME_LOGO0_KME_LOGO0_94_get_km_logo_blksameth_posw_slp1(data)            ((0x000003E0&(data))>>5)
#define  KME_LOGO0_KME_LOGO0_94_get_km_logo_blksameth_posw_slp0(data)            (0x0000001F&(data))

#define  KME_LOGO0_KME_LOGO0_98                                                 0x1809BE98
#define  KME_LOGO0_KME_LOGO0_98_reg_addr                                         "0xB809BE98"
#define  KME_LOGO0_KME_LOGO0_98_reg                                              0xB809BE98
#define  KME_LOGO0_KME_LOGO0_98_inst_addr                                        "0x0026"
#define  set_KME_LOGO0_KME_LOGO0_98_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_98_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_98_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_98_reg))
#define  KME_LOGO0_KME_LOGO0_98_km_logo_blksameth_negw_x2_shift                  (18)
#define  KME_LOGO0_KME_LOGO0_98_km_logo_blksameth_negw_x1_shift                  (9)
#define  KME_LOGO0_KME_LOGO0_98_km_logo_blksameth_negw_x0_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_98_km_logo_blksameth_negw_x2_mask                   (0x07FC0000)
#define  KME_LOGO0_KME_LOGO0_98_km_logo_blksameth_negw_x1_mask                   (0x0003FE00)
#define  KME_LOGO0_KME_LOGO0_98_km_logo_blksameth_negw_x0_mask                   (0x000001FF)
#define  KME_LOGO0_KME_LOGO0_98_km_logo_blksameth_negw_x2(data)                  (0x07FC0000&((data)<<18))
#define  KME_LOGO0_KME_LOGO0_98_km_logo_blksameth_negw_x1(data)                  (0x0003FE00&((data)<<9))
#define  KME_LOGO0_KME_LOGO0_98_km_logo_blksameth_negw_x0(data)                  (0x000001FF&(data))
#define  KME_LOGO0_KME_LOGO0_98_get_km_logo_blksameth_negw_x2(data)              ((0x07FC0000&(data))>>18)
#define  KME_LOGO0_KME_LOGO0_98_get_km_logo_blksameth_negw_x1(data)              ((0x0003FE00&(data))>>9)
#define  KME_LOGO0_KME_LOGO0_98_get_km_logo_blksameth_negw_x0(data)              (0x000001FF&(data))

#define  KME_LOGO0_KME_LOGO0_9C                                                 0x1809BE9C
#define  KME_LOGO0_KME_LOGO0_9C_reg_addr                                         "0xB809BE9C"
#define  KME_LOGO0_KME_LOGO0_9C_reg                                              0xB809BE9C
#define  KME_LOGO0_KME_LOGO0_9C_inst_addr                                        "0x0027"
#define  set_KME_LOGO0_KME_LOGO0_9C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_9C_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_9C_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_9C_reg))
#define  KME_LOGO0_KME_LOGO0_9C_km_logo_blksameth_negw_y2_shift                  (16)
#define  KME_LOGO0_KME_LOGO0_9C_km_logo_blksameth_negw_y1_shift                  (8)
#define  KME_LOGO0_KME_LOGO0_9C_km_logo_blksameth_negw_y0_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_9C_km_logo_blksameth_negw_y2_mask                   (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_9C_km_logo_blksameth_negw_y1_mask                   (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_9C_km_logo_blksameth_negw_y0_mask                   (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_9C_km_logo_blksameth_negw_y2(data)                  (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_9C_km_logo_blksameth_negw_y1(data)                  (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_9C_km_logo_blksameth_negw_y0(data)                  (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_9C_get_km_logo_blksameth_negw_y2(data)              ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_9C_get_km_logo_blksameth_negw_y1(data)              ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_9C_get_km_logo_blksameth_negw_y0(data)              (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_A0                                                 0x1809BEA0
#define  KME_LOGO0_KME_LOGO0_A0_reg_addr                                         "0xB809BEA0"
#define  KME_LOGO0_KME_LOGO0_A0_reg                                              0xB809BEA0
#define  KME_LOGO0_KME_LOGO0_A0_inst_addr                                        "0x0028"
#define  set_KME_LOGO0_KME_LOGO0_A0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_A0_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_A0_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_A0_reg))
#define  KME_LOGO0_KME_LOGO0_A0_km_logo_blksameth_negw_slp1_shift                (5)
#define  KME_LOGO0_KME_LOGO0_A0_km_logo_blksameth_negw_slp0_shift                (0)
#define  KME_LOGO0_KME_LOGO0_A0_km_logo_blksameth_negw_slp1_mask                 (0x000003E0)
#define  KME_LOGO0_KME_LOGO0_A0_km_logo_blksameth_negw_slp0_mask                 (0x0000001F)
#define  KME_LOGO0_KME_LOGO0_A0_km_logo_blksameth_negw_slp1(data)                (0x000003E0&((data)<<5))
#define  KME_LOGO0_KME_LOGO0_A0_km_logo_blksameth_negw_slp0(data)                (0x0000001F&(data))
#define  KME_LOGO0_KME_LOGO0_A0_get_km_logo_blksameth_negw_slp1(data)            ((0x000003E0&(data))>>5)
#define  KME_LOGO0_KME_LOGO0_A0_get_km_logo_blksameth_negw_slp0(data)            (0x0000001F&(data))

#define  KME_LOGO0_KME_LOGO0_A4                                                 0x1809BEA4
#define  KME_LOGO0_KME_LOGO0_A4_reg_addr                                         "0xB809BEA4"
#define  KME_LOGO0_KME_LOGO0_A4_reg                                              0xB809BEA4
#define  KME_LOGO0_KME_LOGO0_A4_inst_addr                                        "0x0029"
#define  set_KME_LOGO0_KME_LOGO0_A4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_A4_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_A4_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_A4_reg))
#define  KME_LOGO0_KME_LOGO0_A4_km_logo_blksameth_l_bidx3_shift                  (24)
#define  KME_LOGO0_KME_LOGO0_A4_km_logo_blksameth_l_bidx2_shift                  (16)
#define  KME_LOGO0_KME_LOGO0_A4_km_logo_blksameth_l_bidx1_shift                  (8)
#define  KME_LOGO0_KME_LOGO0_A4_km_logo_blksameth_l_bidx0_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_A4_km_logo_blksameth_l_bidx3_mask                   (0xFF000000)
#define  KME_LOGO0_KME_LOGO0_A4_km_logo_blksameth_l_bidx2_mask                   (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_A4_km_logo_blksameth_l_bidx1_mask                   (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_A4_km_logo_blksameth_l_bidx0_mask                   (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_A4_km_logo_blksameth_l_bidx3(data)                  (0xFF000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_A4_km_logo_blksameth_l_bidx2(data)                  (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_A4_km_logo_blksameth_l_bidx1(data)                  (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_A4_km_logo_blksameth_l_bidx0(data)                  (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_A4_get_km_logo_blksameth_l_bidx3(data)              ((0xFF000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_A4_get_km_logo_blksameth_l_bidx2(data)              ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_A4_get_km_logo_blksameth_l_bidx1(data)              ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_A4_get_km_logo_blksameth_l_bidx0(data)              (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_A8                                                 0x1809BEA8
#define  KME_LOGO0_KME_LOGO0_A8_reg_addr                                         "0xB809BEA8"
#define  KME_LOGO0_KME_LOGO0_A8_reg                                              0xB809BEA8
#define  KME_LOGO0_KME_LOGO0_A8_inst_addr                                        "0x002A"
#define  set_KME_LOGO0_KME_LOGO0_A8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_A8_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_A8_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_A8_reg))
#define  KME_LOGO0_KME_LOGO0_A8_km_logo_blksameth_l_bidx7_shift                  (24)
#define  KME_LOGO0_KME_LOGO0_A8_km_logo_blksameth_l_bidx6_shift                  (16)
#define  KME_LOGO0_KME_LOGO0_A8_km_logo_blksameth_l_bidx5_shift                  (8)
#define  KME_LOGO0_KME_LOGO0_A8_km_logo_blksameth_l_bidx4_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_A8_km_logo_blksameth_l_bidx7_mask                   (0xFF000000)
#define  KME_LOGO0_KME_LOGO0_A8_km_logo_blksameth_l_bidx6_mask                   (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_A8_km_logo_blksameth_l_bidx5_mask                   (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_A8_km_logo_blksameth_l_bidx4_mask                   (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_A8_km_logo_blksameth_l_bidx7(data)                  (0xFF000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_A8_km_logo_blksameth_l_bidx6(data)                  (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_A8_km_logo_blksameth_l_bidx5(data)                  (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_A8_km_logo_blksameth_l_bidx4(data)                  (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_A8_get_km_logo_blksameth_l_bidx7(data)              ((0xFF000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_A8_get_km_logo_blksameth_l_bidx6(data)              ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_A8_get_km_logo_blksameth_l_bidx5(data)              ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_A8_get_km_logo_blksameth_l_bidx4(data)              (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_AC                                                 0x1809BEAC
#define  KME_LOGO0_KME_LOGO0_AC_reg_addr                                         "0xB809BEAC"
#define  KME_LOGO0_KME_LOGO0_AC_reg                                              0xB809BEAC
#define  KME_LOGO0_KME_LOGO0_AC_inst_addr                                        "0x002B"
#define  set_KME_LOGO0_KME_LOGO0_AC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_AC_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_AC_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_AC_reg))
#define  KME_LOGO0_KME_LOGO0_AC_km_logo_blksameth_l_bidx11_shift                 (24)
#define  KME_LOGO0_KME_LOGO0_AC_km_logo_blksameth_l_bidx10_shift                 (16)
#define  KME_LOGO0_KME_LOGO0_AC_km_logo_blksameth_l_bidx9_shift                  (8)
#define  KME_LOGO0_KME_LOGO0_AC_km_logo_blksameth_l_bidx8_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_AC_km_logo_blksameth_l_bidx11_mask                  (0xFF000000)
#define  KME_LOGO0_KME_LOGO0_AC_km_logo_blksameth_l_bidx10_mask                  (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_AC_km_logo_blksameth_l_bidx9_mask                   (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_AC_km_logo_blksameth_l_bidx8_mask                   (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_AC_km_logo_blksameth_l_bidx11(data)                 (0xFF000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_AC_km_logo_blksameth_l_bidx10(data)                 (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_AC_km_logo_blksameth_l_bidx9(data)                  (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_AC_km_logo_blksameth_l_bidx8(data)                  (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_AC_get_km_logo_blksameth_l_bidx11(data)             ((0xFF000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_AC_get_km_logo_blksameth_l_bidx10(data)             ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_AC_get_km_logo_blksameth_l_bidx9(data)              ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_AC_get_km_logo_blksameth_l_bidx8(data)              (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_B0                                                 0x1809BEB0
#define  KME_LOGO0_KME_LOGO0_B0_reg_addr                                         "0xB809BEB0"
#define  KME_LOGO0_KME_LOGO0_B0_reg                                              0xB809BEB0
#define  KME_LOGO0_KME_LOGO0_B0_inst_addr                                        "0x002C"
#define  set_KME_LOGO0_KME_LOGO0_B0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_B0_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_B0_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_B0_reg))
#define  KME_LOGO0_KME_LOGO0_B0_km_logo_blksameth_l_bidx14_shift                 (16)
#define  KME_LOGO0_KME_LOGO0_B0_km_logo_blksameth_l_bidx13_shift                 (8)
#define  KME_LOGO0_KME_LOGO0_B0_km_logo_blksameth_l_bidx12_shift                 (0)
#define  KME_LOGO0_KME_LOGO0_B0_km_logo_blksameth_l_bidx14_mask                  (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_B0_km_logo_blksameth_l_bidx13_mask                  (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_B0_km_logo_blksameth_l_bidx12_mask                  (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_B0_km_logo_blksameth_l_bidx14(data)                 (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_B0_km_logo_blksameth_l_bidx13(data)                 (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_B0_km_logo_blksameth_l_bidx12(data)                 (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_B0_get_km_logo_blksameth_l_bidx14(data)             ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_B0_get_km_logo_blksameth_l_bidx13(data)             ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_B0_get_km_logo_blksameth_l_bidx12(data)             (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_B4                                                 0x1809BEB4
#define  KME_LOGO0_KME_LOGO0_B4_reg_addr                                         "0xB809BEB4"
#define  KME_LOGO0_KME_LOGO0_B4_reg                                              0xB809BEB4
#define  KME_LOGO0_KME_LOGO0_B4_inst_addr                                        "0x002D"
#define  set_KME_LOGO0_KME_LOGO0_B4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_B4_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_B4_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_B4_reg))
#define  KME_LOGO0_KME_LOGO0_B4_km_logo_blksameth_h_bidx3_shift                  (24)
#define  KME_LOGO0_KME_LOGO0_B4_km_logo_blksameth_h_bidx2_shift                  (16)
#define  KME_LOGO0_KME_LOGO0_B4_km_logo_blksameth_h_bidx1_shift                  (8)
#define  KME_LOGO0_KME_LOGO0_B4_km_logo_blksameth_h_bidx0_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_B4_km_logo_blksameth_h_bidx3_mask                   (0xFF000000)
#define  KME_LOGO0_KME_LOGO0_B4_km_logo_blksameth_h_bidx2_mask                   (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_B4_km_logo_blksameth_h_bidx1_mask                   (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_B4_km_logo_blksameth_h_bidx0_mask                   (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_B4_km_logo_blksameth_h_bidx3(data)                  (0xFF000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_B4_km_logo_blksameth_h_bidx2(data)                  (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_B4_km_logo_blksameth_h_bidx1(data)                  (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_B4_km_logo_blksameth_h_bidx0(data)                  (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_B4_get_km_logo_blksameth_h_bidx3(data)              ((0xFF000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_B4_get_km_logo_blksameth_h_bidx2(data)              ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_B4_get_km_logo_blksameth_h_bidx1(data)              ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_B4_get_km_logo_blksameth_h_bidx0(data)              (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_B8                                                 0x1809BEB8
#define  KME_LOGO0_KME_LOGO0_B8_reg_addr                                         "0xB809BEB8"
#define  KME_LOGO0_KME_LOGO0_B8_reg                                              0xB809BEB8
#define  KME_LOGO0_KME_LOGO0_B8_inst_addr                                        "0x002E"
#define  set_KME_LOGO0_KME_LOGO0_B8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_B8_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_B8_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_B8_reg))
#define  KME_LOGO0_KME_LOGO0_B8_km_logo_blksameth_h_bidx7_shift                  (24)
#define  KME_LOGO0_KME_LOGO0_B8_km_logo_blksameth_h_bidx6_shift                  (16)
#define  KME_LOGO0_KME_LOGO0_B8_km_logo_blksameth_h_bidx5_shift                  (8)
#define  KME_LOGO0_KME_LOGO0_B8_km_logo_blksameth_h_bidx4_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_B8_km_logo_blksameth_h_bidx7_mask                   (0xFF000000)
#define  KME_LOGO0_KME_LOGO0_B8_km_logo_blksameth_h_bidx6_mask                   (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_B8_km_logo_blksameth_h_bidx5_mask                   (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_B8_km_logo_blksameth_h_bidx4_mask                   (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_B8_km_logo_blksameth_h_bidx7(data)                  (0xFF000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_B8_km_logo_blksameth_h_bidx6(data)                  (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_B8_km_logo_blksameth_h_bidx5(data)                  (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_B8_km_logo_blksameth_h_bidx4(data)                  (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_B8_get_km_logo_blksameth_h_bidx7(data)              ((0xFF000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_B8_get_km_logo_blksameth_h_bidx6(data)              ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_B8_get_km_logo_blksameth_h_bidx5(data)              ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_B8_get_km_logo_blksameth_h_bidx4(data)              (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_BC                                                 0x1809BEBC
#define  KME_LOGO0_KME_LOGO0_BC_reg_addr                                         "0xB809BEBC"
#define  KME_LOGO0_KME_LOGO0_BC_reg                                              0xB809BEBC
#define  KME_LOGO0_KME_LOGO0_BC_inst_addr                                        "0x002F"
#define  set_KME_LOGO0_KME_LOGO0_BC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_BC_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_BC_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_BC_reg))
#define  KME_LOGO0_KME_LOGO0_BC_km_logo_blksameth_h_bidx11_shift                 (24)
#define  KME_LOGO0_KME_LOGO0_BC_km_logo_blksameth_h_bidx10_shift                 (16)
#define  KME_LOGO0_KME_LOGO0_BC_km_logo_blksameth_h_bidx9_shift                  (8)
#define  KME_LOGO0_KME_LOGO0_BC_km_logo_blksameth_h_bidx8_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_BC_km_logo_blksameth_h_bidx11_mask                  (0xFF000000)
#define  KME_LOGO0_KME_LOGO0_BC_km_logo_blksameth_h_bidx10_mask                  (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_BC_km_logo_blksameth_h_bidx9_mask                   (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_BC_km_logo_blksameth_h_bidx8_mask                   (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_BC_km_logo_blksameth_h_bidx11(data)                 (0xFF000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_BC_km_logo_blksameth_h_bidx10(data)                 (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_BC_km_logo_blksameth_h_bidx9(data)                  (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_BC_km_logo_blksameth_h_bidx8(data)                  (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_BC_get_km_logo_blksameth_h_bidx11(data)             ((0xFF000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_BC_get_km_logo_blksameth_h_bidx10(data)             ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_BC_get_km_logo_blksameth_h_bidx9(data)              ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_BC_get_km_logo_blksameth_h_bidx8(data)              (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_C0                                                 0x1809BEC0
#define  KME_LOGO0_KME_LOGO0_C0_reg_addr                                         "0xB809BEC0"
#define  KME_LOGO0_KME_LOGO0_C0_reg                                              0xB809BEC0
#define  KME_LOGO0_KME_LOGO0_C0_inst_addr                                        "0x0030"
#define  set_KME_LOGO0_KME_LOGO0_C0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_C0_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_C0_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_C0_reg))
#define  KME_LOGO0_KME_LOGO0_C0_km_logo_blksameth_h_bidx14_shift                 (16)
#define  KME_LOGO0_KME_LOGO0_C0_km_logo_blksameth_h_bidx13_shift                 (8)
#define  KME_LOGO0_KME_LOGO0_C0_km_logo_blksameth_h_bidx12_shift                 (0)
#define  KME_LOGO0_KME_LOGO0_C0_km_logo_blksameth_h_bidx14_mask                  (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_C0_km_logo_blksameth_h_bidx13_mask                  (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_C0_km_logo_blksameth_h_bidx12_mask                  (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_C0_km_logo_blksameth_h_bidx14(data)                 (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_C0_km_logo_blksameth_h_bidx13(data)                 (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_C0_km_logo_blksameth_h_bidx12(data)                 (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_C0_get_km_logo_blksameth_h_bidx14(data)             ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_C0_get_km_logo_blksameth_h_bidx13(data)             ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_C0_get_km_logo_blksameth_h_bidx12(data)             (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_C4                                                 0x1809BEC4
#define  KME_LOGO0_KME_LOGO0_C4_reg_addr                                         "0xB809BEC4"
#define  KME_LOGO0_KME_LOGO0_C4_reg                                              0xB809BEC4
#define  KME_LOGO0_KME_LOGO0_C4_inst_addr                                        "0x0031"
#define  set_KME_LOGO0_KME_LOGO0_C4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_C4_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_C4_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_C4_reg))
#define  KME_LOGO0_KME_LOGO0_C4_km_logo_blksameth_a_bidx3_shift                  (24)
#define  KME_LOGO0_KME_LOGO0_C4_km_logo_blksameth_a_bidx2_shift                  (16)
#define  KME_LOGO0_KME_LOGO0_C4_km_logo_blksameth_a_bidx1_shift                  (8)
#define  KME_LOGO0_KME_LOGO0_C4_km_logo_blksameth_a_bidx0_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_C4_km_logo_blksameth_a_bidx3_mask                   (0xFF000000)
#define  KME_LOGO0_KME_LOGO0_C4_km_logo_blksameth_a_bidx2_mask                   (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_C4_km_logo_blksameth_a_bidx1_mask                   (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_C4_km_logo_blksameth_a_bidx0_mask                   (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_C4_km_logo_blksameth_a_bidx3(data)                  (0xFF000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_C4_km_logo_blksameth_a_bidx2(data)                  (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_C4_km_logo_blksameth_a_bidx1(data)                  (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_C4_km_logo_blksameth_a_bidx0(data)                  (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_C4_get_km_logo_blksameth_a_bidx3(data)              ((0xFF000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_C4_get_km_logo_blksameth_a_bidx2(data)              ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_C4_get_km_logo_blksameth_a_bidx1(data)              ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_C4_get_km_logo_blksameth_a_bidx0(data)              (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_C8                                                 0x1809BEC8
#define  KME_LOGO0_KME_LOGO0_C8_reg_addr                                         "0xB809BEC8"
#define  KME_LOGO0_KME_LOGO0_C8_reg                                              0xB809BEC8
#define  KME_LOGO0_KME_LOGO0_C8_inst_addr                                        "0x0032"
#define  set_KME_LOGO0_KME_LOGO0_C8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_C8_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_C8_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_C8_reg))
#define  KME_LOGO0_KME_LOGO0_C8_km_logo_blksameth_a_bidx7_shift                  (24)
#define  KME_LOGO0_KME_LOGO0_C8_km_logo_blksameth_a_bidx6_shift                  (16)
#define  KME_LOGO0_KME_LOGO0_C8_km_logo_blksameth_a_bidx5_shift                  (8)
#define  KME_LOGO0_KME_LOGO0_C8_km_logo_blksameth_a_bidx4_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_C8_km_logo_blksameth_a_bidx7_mask                   (0xFF000000)
#define  KME_LOGO0_KME_LOGO0_C8_km_logo_blksameth_a_bidx6_mask                   (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_C8_km_logo_blksameth_a_bidx5_mask                   (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_C8_km_logo_blksameth_a_bidx4_mask                   (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_C8_km_logo_blksameth_a_bidx7(data)                  (0xFF000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_C8_km_logo_blksameth_a_bidx6(data)                  (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_C8_km_logo_blksameth_a_bidx5(data)                  (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_C8_km_logo_blksameth_a_bidx4(data)                  (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_C8_get_km_logo_blksameth_a_bidx7(data)              ((0xFF000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_C8_get_km_logo_blksameth_a_bidx6(data)              ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_C8_get_km_logo_blksameth_a_bidx5(data)              ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_C8_get_km_logo_blksameth_a_bidx4(data)              (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_CC                                                 0x1809BECC
#define  KME_LOGO0_KME_LOGO0_CC_reg_addr                                         "0xB809BECC"
#define  KME_LOGO0_KME_LOGO0_CC_reg                                              0xB809BECC
#define  KME_LOGO0_KME_LOGO0_CC_inst_addr                                        "0x0033"
#define  set_KME_LOGO0_KME_LOGO0_CC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_CC_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_CC_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_CC_reg))
#define  KME_LOGO0_KME_LOGO0_CC_km_logo_blksameth_a_bidx11_shift                 (24)
#define  KME_LOGO0_KME_LOGO0_CC_km_logo_blksameth_a_bidx10_shift                 (16)
#define  KME_LOGO0_KME_LOGO0_CC_km_logo_blksameth_a_bidx9_shift                  (8)
#define  KME_LOGO0_KME_LOGO0_CC_km_logo_blksameth_a_bidx8_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_CC_km_logo_blksameth_a_bidx11_mask                  (0xFF000000)
#define  KME_LOGO0_KME_LOGO0_CC_km_logo_blksameth_a_bidx10_mask                  (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_CC_km_logo_blksameth_a_bidx9_mask                   (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_CC_km_logo_blksameth_a_bidx8_mask                   (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_CC_km_logo_blksameth_a_bidx11(data)                 (0xFF000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_CC_km_logo_blksameth_a_bidx10(data)                 (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_CC_km_logo_blksameth_a_bidx9(data)                  (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_CC_km_logo_blksameth_a_bidx8(data)                  (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_CC_get_km_logo_blksameth_a_bidx11(data)             ((0xFF000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_CC_get_km_logo_blksameth_a_bidx10(data)             ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_CC_get_km_logo_blksameth_a_bidx9(data)              ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_CC_get_km_logo_blksameth_a_bidx8(data)              (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_D0                                                 0x1809BED0
#define  KME_LOGO0_KME_LOGO0_D0_reg_addr                                         "0xB809BED0"
#define  KME_LOGO0_KME_LOGO0_D0_reg                                              0xB809BED0
#define  KME_LOGO0_KME_LOGO0_D0_inst_addr                                        "0x0034"
#define  set_KME_LOGO0_KME_LOGO0_D0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_D0_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_D0_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_D0_reg))
#define  KME_LOGO0_KME_LOGO0_D0_km_logo_blksameth_a_bidx14_shift                 (16)
#define  KME_LOGO0_KME_LOGO0_D0_km_logo_blksameth_a_bidx13_shift                 (8)
#define  KME_LOGO0_KME_LOGO0_D0_km_logo_blksameth_a_bidx12_shift                 (0)
#define  KME_LOGO0_KME_LOGO0_D0_km_logo_blksameth_a_bidx14_mask                  (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_D0_km_logo_blksameth_a_bidx13_mask                  (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_D0_km_logo_blksameth_a_bidx12_mask                  (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_D0_km_logo_blksameth_a_bidx14(data)                 (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_D0_km_logo_blksameth_a_bidx13(data)                 (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_D0_km_logo_blksameth_a_bidx12(data)                 (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_D0_get_km_logo_blksameth_a_bidx14(data)             ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_D0_get_km_logo_blksameth_a_bidx13(data)             ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_D0_get_km_logo_blksameth_a_bidx12(data)             (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_D4                                                 0x1809BED4
#define  KME_LOGO0_KME_LOGO0_D4_reg_addr                                         "0xB809BED4"
#define  KME_LOGO0_KME_LOGO0_D4_reg                                              0xB809BED4
#define  KME_LOGO0_KME_LOGO0_D4_inst_addr                                        "0x0035"
#define  set_KME_LOGO0_KME_LOGO0_D4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_D4_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_D4_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_D4_reg))
#define  KME_LOGO0_KME_LOGO0_D4_km_logo_blkhsty_nstep_x2_shift                   (16)
#define  KME_LOGO0_KME_LOGO0_D4_km_logo_blkhsty_nstep_x1_shift                   (8)
#define  KME_LOGO0_KME_LOGO0_D4_km_logo_blkhsty_nstep_x0_shift                   (0)
#define  KME_LOGO0_KME_LOGO0_D4_km_logo_blkhsty_nstep_x2_mask                    (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_D4_km_logo_blkhsty_nstep_x1_mask                    (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_D4_km_logo_blkhsty_nstep_x0_mask                    (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_D4_km_logo_blkhsty_nstep_x2(data)                   (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_D4_km_logo_blkhsty_nstep_x1(data)                   (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_D4_km_logo_blkhsty_nstep_x0(data)                   (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_D4_get_km_logo_blkhsty_nstep_x2(data)               ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_D4_get_km_logo_blkhsty_nstep_x1(data)               ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_D4_get_km_logo_blkhsty_nstep_x0(data)               (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_D8                                                 0x1809BED8
#define  KME_LOGO0_KME_LOGO0_D8_reg_addr                                         "0xB809BED8"
#define  KME_LOGO0_KME_LOGO0_D8_reg                                              0xB809BED8
#define  KME_LOGO0_KME_LOGO0_D8_inst_addr                                        "0x0036"
#define  set_KME_LOGO0_KME_LOGO0_D8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_D8_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_D8_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_D8_reg))
#define  KME_LOGO0_KME_LOGO0_D8_km_logo_blkhsty_nstep_y2_shift                   (8)
#define  KME_LOGO0_KME_LOGO0_D8_km_logo_blkhsty_nstep_y1_shift                   (4)
#define  KME_LOGO0_KME_LOGO0_D8_km_logo_blkhsty_nstep_y0_shift                   (0)
#define  KME_LOGO0_KME_LOGO0_D8_km_logo_blkhsty_nstep_y2_mask                    (0x00000F00)
#define  KME_LOGO0_KME_LOGO0_D8_km_logo_blkhsty_nstep_y1_mask                    (0x000000F0)
#define  KME_LOGO0_KME_LOGO0_D8_km_logo_blkhsty_nstep_y0_mask                    (0x0000000F)
#define  KME_LOGO0_KME_LOGO0_D8_km_logo_blkhsty_nstep_y2(data)                   (0x00000F00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_D8_km_logo_blkhsty_nstep_y1(data)                   (0x000000F0&((data)<<4))
#define  KME_LOGO0_KME_LOGO0_D8_km_logo_blkhsty_nstep_y0(data)                   (0x0000000F&(data))
#define  KME_LOGO0_KME_LOGO0_D8_get_km_logo_blkhsty_nstep_y2(data)               ((0x00000F00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_D8_get_km_logo_blkhsty_nstep_y1(data)               ((0x000000F0&(data))>>4)
#define  KME_LOGO0_KME_LOGO0_D8_get_km_logo_blkhsty_nstep_y0(data)               (0x0000000F&(data))

#define  KME_LOGO0_KME_LOGO0_DC                                                 0x1809BEDC
#define  KME_LOGO0_KME_LOGO0_DC_reg_addr                                         "0xB809BEDC"
#define  KME_LOGO0_KME_LOGO0_DC_reg                                              0xB809BEDC
#define  KME_LOGO0_KME_LOGO0_DC_inst_addr                                        "0x0037"
#define  set_KME_LOGO0_KME_LOGO0_DC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_DC_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_DC_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_DC_reg))
#define  KME_LOGO0_KME_LOGO0_DC_km_logo_blkhsty_nstep_slp1_shift                 (6)
#define  KME_LOGO0_KME_LOGO0_DC_km_logo_blkhsty_nstep_slp0_shift                 (0)
#define  KME_LOGO0_KME_LOGO0_DC_km_logo_blkhsty_nstep_slp1_mask                  (0x00000FC0)
#define  KME_LOGO0_KME_LOGO0_DC_km_logo_blkhsty_nstep_slp0_mask                  (0x0000003F)
#define  KME_LOGO0_KME_LOGO0_DC_km_logo_blkhsty_nstep_slp1(data)                 (0x00000FC0&((data)<<6))
#define  KME_LOGO0_KME_LOGO0_DC_km_logo_blkhsty_nstep_slp0(data)                 (0x0000003F&(data))
#define  KME_LOGO0_KME_LOGO0_DC_get_km_logo_blkhsty_nstep_slp1(data)             ((0x00000FC0&(data))>>6)
#define  KME_LOGO0_KME_LOGO0_DC_get_km_logo_blkhsty_nstep_slp0(data)             (0x0000003F&(data))

#define  KME_LOGO0_KME_LOGO0_E0                                                 0x1809BEE0
#define  KME_LOGO0_KME_LOGO0_E0_reg_addr                                         "0xB809BEE0"
#define  KME_LOGO0_KME_LOGO0_E0_reg                                              0xB809BEE0
#define  KME_LOGO0_KME_LOGO0_E0_inst_addr                                        "0x0038"
#define  set_KME_LOGO0_KME_LOGO0_E0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_E0_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_E0_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_E0_reg))
#define  KME_LOGO0_KME_LOGO0_E0_km_logo_blkhsty_pstep_x2_shift                   (16)
#define  KME_LOGO0_KME_LOGO0_E0_km_logo_blkhsty_pstep_x1_shift                   (8)
#define  KME_LOGO0_KME_LOGO0_E0_km_logo_blkhsty_pstep_x0_shift                   (0)
#define  KME_LOGO0_KME_LOGO0_E0_km_logo_blkhsty_pstep_x2_mask                    (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_E0_km_logo_blkhsty_pstep_x1_mask                    (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_E0_km_logo_blkhsty_pstep_x0_mask                    (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_E0_km_logo_blkhsty_pstep_x2(data)                   (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_E0_km_logo_blkhsty_pstep_x1(data)                   (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_E0_km_logo_blkhsty_pstep_x0(data)                   (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_E0_get_km_logo_blkhsty_pstep_x2(data)               ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_E0_get_km_logo_blkhsty_pstep_x1(data)               ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_E0_get_km_logo_blkhsty_pstep_x0(data)               (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_E4                                                 0x1809BEE4
#define  KME_LOGO0_KME_LOGO0_E4_reg_addr                                         "0xB809BEE4"
#define  KME_LOGO0_KME_LOGO0_E4_reg                                              0xB809BEE4
#define  KME_LOGO0_KME_LOGO0_E4_inst_addr                                        "0x0039"
#define  set_KME_LOGO0_KME_LOGO0_E4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_E4_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_E4_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_E4_reg))
#define  KME_LOGO0_KME_LOGO0_E4_km_logo_blkhsty_pstep_y2_shift                   (8)
#define  KME_LOGO0_KME_LOGO0_E4_km_logo_blkhsty_pstep_y1_shift                   (4)
#define  KME_LOGO0_KME_LOGO0_E4_km_logo_blkhsty_pstep_y0_shift                   (0)
#define  KME_LOGO0_KME_LOGO0_E4_km_logo_blkhsty_pstep_y2_mask                    (0x00000F00)
#define  KME_LOGO0_KME_LOGO0_E4_km_logo_blkhsty_pstep_y1_mask                    (0x000000F0)
#define  KME_LOGO0_KME_LOGO0_E4_km_logo_blkhsty_pstep_y0_mask                    (0x0000000F)
#define  KME_LOGO0_KME_LOGO0_E4_km_logo_blkhsty_pstep_y2(data)                   (0x00000F00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_E4_km_logo_blkhsty_pstep_y1(data)                   (0x000000F0&((data)<<4))
#define  KME_LOGO0_KME_LOGO0_E4_km_logo_blkhsty_pstep_y0(data)                   (0x0000000F&(data))
#define  KME_LOGO0_KME_LOGO0_E4_get_km_logo_blkhsty_pstep_y2(data)               ((0x00000F00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_E4_get_km_logo_blkhsty_pstep_y1(data)               ((0x000000F0&(data))>>4)
#define  KME_LOGO0_KME_LOGO0_E4_get_km_logo_blkhsty_pstep_y0(data)               (0x0000000F&(data))

#define  KME_LOGO0_KME_LOGO0_E8                                                 0x1809BEE8
#define  KME_LOGO0_KME_LOGO0_E8_reg_addr                                         "0xB809BEE8"
#define  KME_LOGO0_KME_LOGO0_E8_reg                                              0xB809BEE8
#define  KME_LOGO0_KME_LOGO0_E8_inst_addr                                        "0x003A"
#define  set_KME_LOGO0_KME_LOGO0_E8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_E8_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_E8_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_E8_reg))
#define  KME_LOGO0_KME_LOGO0_E8_km_logo_blkhsty_pstep_slp1_shift                 (6)
#define  KME_LOGO0_KME_LOGO0_E8_km_logo_blkhsty_pstep_slp0_shift                 (0)
#define  KME_LOGO0_KME_LOGO0_E8_km_logo_blkhsty_pstep_slp1_mask                  (0x00000FC0)
#define  KME_LOGO0_KME_LOGO0_E8_km_logo_blkhsty_pstep_slp0_mask                  (0x0000003F)
#define  KME_LOGO0_KME_LOGO0_E8_km_logo_blkhsty_pstep_slp1(data)                 (0x00000FC0&((data)<<6))
#define  KME_LOGO0_KME_LOGO0_E8_km_logo_blkhsty_pstep_slp0(data)                 (0x0000003F&(data))
#define  KME_LOGO0_KME_LOGO0_E8_get_km_logo_blkhsty_pstep_slp1(data)             ((0x00000FC0&(data))>>6)
#define  KME_LOGO0_KME_LOGO0_E8_get_km_logo_blkhsty_pstep_slp0(data)             (0x0000003F&(data))

#define  KME_LOGO0_KME_LOGO0_EC                                                 0x1809BEEC
#define  KME_LOGO0_KME_LOGO0_EC_reg_addr                                         "0xB809BEEC"
#define  KME_LOGO0_KME_LOGO0_EC_reg                                              0xB809BEEC
#define  KME_LOGO0_KME_LOGO0_EC_inst_addr                                        "0x003B"
#define  set_KME_LOGO0_KME_LOGO0_EC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_EC_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_EC_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_EC_reg))
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogocurdlt_eroen_shift                (21)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogohstydlt_eroen_shift               (20)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogocurdlt_en_shift                   (19)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogohstydlt_en_shift                  (18)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogodltcur_th_shift                   (14)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogodlthsty_th_shift                  (10)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blkhsty_upmet_shift                      (9)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blkadphstystep_en_shift                  (8)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blkhsty_pstep_shift                      (4)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blkhsty_nstep_shift                      (0)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogocurdlt_eroen_mask                 (0x00200000)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogohstydlt_eroen_mask                (0x00100000)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogocurdlt_en_mask                    (0x00080000)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogohstydlt_en_mask                   (0x00040000)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogodltcur_th_mask                    (0x0003C000)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogodlthsty_th_mask                   (0x00003C00)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blkhsty_upmet_mask                       (0x00000200)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blkadphstystep_en_mask                   (0x00000100)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blkhsty_pstep_mask                       (0x000000F0)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blkhsty_nstep_mask                       (0x0000000F)
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogocurdlt_eroen(data)                (0x00200000&((data)<<21))
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogohstydlt_eroen(data)               (0x00100000&((data)<<20))
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogocurdlt_en(data)                   (0x00080000&((data)<<19))
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogohstydlt_en(data)                  (0x00040000&((data)<<18))
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogodltcur_th(data)                   (0x0003C000&((data)<<14))
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blklogodlthsty_th(data)                  (0x00003C00&((data)<<10))
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blkhsty_upmet(data)                      (0x00000200&((data)<<9))
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blkadphstystep_en(data)                  (0x00000100&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blkhsty_pstep(data)                      (0x000000F0&((data)<<4))
#define  KME_LOGO0_KME_LOGO0_EC_km_logo_blkhsty_nstep(data)                      (0x0000000F&(data))
#define  KME_LOGO0_KME_LOGO0_EC_get_km_logo_blklogocurdlt_eroen(data)            ((0x00200000&(data))>>21)
#define  KME_LOGO0_KME_LOGO0_EC_get_km_logo_blklogohstydlt_eroen(data)           ((0x00100000&(data))>>20)
#define  KME_LOGO0_KME_LOGO0_EC_get_km_logo_blklogocurdlt_en(data)               ((0x00080000&(data))>>19)
#define  KME_LOGO0_KME_LOGO0_EC_get_km_logo_blklogohstydlt_en(data)              ((0x00040000&(data))>>18)
#define  KME_LOGO0_KME_LOGO0_EC_get_km_logo_blklogodltcur_th(data)               ((0x0003C000&(data))>>14)
#define  KME_LOGO0_KME_LOGO0_EC_get_km_logo_blklogodlthsty_th(data)              ((0x00003C00&(data))>>10)
#define  KME_LOGO0_KME_LOGO0_EC_get_km_logo_blkhsty_upmet(data)                  ((0x00000200&(data))>>9)
#define  KME_LOGO0_KME_LOGO0_EC_get_km_logo_blkadphstystep_en(data)              ((0x00000100&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_EC_get_km_logo_blkhsty_pstep(data)                  ((0x000000F0&(data))>>4)
#define  KME_LOGO0_KME_LOGO0_EC_get_km_logo_blkhsty_nstep(data)                  (0x0000000F&(data))

#define  KME_LOGO0_KME_LOGO0_F0                                                 0x1809BEF0
#define  KME_LOGO0_KME_LOGO0_F0_reg_addr                                         "0xB809BEF0"
#define  KME_LOGO0_KME_LOGO0_F0_reg                                              0xB809BEF0
#define  KME_LOGO0_KME_LOGO0_F0_inst_addr                                        "0x003C"
#define  set_KME_LOGO0_KME_LOGO0_F0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_F0_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_F0_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_F0_reg))
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_pxlhsty_force_shift                      (23)
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_pxlhsty_force_en_shift                   (22)
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_blkhsty_force_shift                      (18)
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_blkhsty_force_en_shift                   (17)
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_vflip_en_shift                           (16)
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_blk_v_active_shift                       (8)
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_blk_h_active_shift                       (0)
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_pxlhsty_force_mask                       (0x07800000)
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_pxlhsty_force_en_mask                    (0x00400000)
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_blkhsty_force_mask                       (0x003C0000)
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_blkhsty_force_en_mask                    (0x00020000)
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_vflip_en_mask                            (0x00010000)
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_blk_v_active_mask                        (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_blk_h_active_mask                        (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_pxlhsty_force(data)                      (0x07800000&((data)<<23))
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_pxlhsty_force_en(data)                   (0x00400000&((data)<<22))
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_blkhsty_force(data)                      (0x003C0000&((data)<<18))
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_blkhsty_force_en(data)                   (0x00020000&((data)<<17))
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_vflip_en(data)                           (0x00010000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_blk_v_active(data)                       (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_F0_km_logo_blk_h_active(data)                       (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_F0_get_km_logo_pxlhsty_force(data)                  ((0x07800000&(data))>>23)
#define  KME_LOGO0_KME_LOGO0_F0_get_km_logo_pxlhsty_force_en(data)               ((0x00400000&(data))>>22)
#define  KME_LOGO0_KME_LOGO0_F0_get_km_logo_blkhsty_force(data)                  ((0x003C0000&(data))>>18)
#define  KME_LOGO0_KME_LOGO0_F0_get_km_logo_blkhsty_force_en(data)               ((0x00020000&(data))>>17)
#define  KME_LOGO0_KME_LOGO0_F0_get_km_logo_vflip_en(data)                       ((0x00010000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_F0_get_km_logo_blk_v_active(data)                   ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_F0_get_km_logo_blk_h_active(data)                   (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_F4                                                 0x1809BEF4
#define  KME_LOGO0_KME_LOGO0_F4_reg_addr                                         "0xB809BEF4"
#define  KME_LOGO0_KME_LOGO0_F4_reg                                              0xB809BEF4
#define  KME_LOGO0_KME_LOGO0_F4_inst_addr                                        "0x003D"
#define  set_KME_LOGO0_KME_LOGO0_F4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_F4_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_F4_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_F4_reg))
#define  KME_LOGO0_KME_LOGO0_F4_km_logo_dummy_regs3_shift                        (24)
#define  KME_LOGO0_KME_LOGO0_F4_km_logo_dummy_regs2_shift                        (14)
#define  KME_LOGO0_KME_LOGO0_F4_km_logo_dummy_regs1_shift                        (7)
#define  KME_LOGO0_KME_LOGO0_F4_km_logo_dummy_regs0_shift                        (0)
#define  KME_LOGO0_KME_LOGO0_F4_km_logo_dummy_regs3_mask                         (0xFF000000)
#define  KME_LOGO0_KME_LOGO0_F4_km_logo_dummy_regs2_mask                         (0x00FFC000)
#define  KME_LOGO0_KME_LOGO0_F4_km_logo_dummy_regs1_mask                         (0x00003F80)
#define  KME_LOGO0_KME_LOGO0_F4_km_logo_dummy_regs0_mask                         (0x0000007F)
#define  KME_LOGO0_KME_LOGO0_F4_km_logo_dummy_regs3(data)                        (0xFF000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_F4_km_logo_dummy_regs2(data)                        (0x00FFC000&((data)<<14))
#define  KME_LOGO0_KME_LOGO0_F4_km_logo_dummy_regs1(data)                        (0x00003F80&((data)<<7))
#define  KME_LOGO0_KME_LOGO0_F4_km_logo_dummy_regs0(data)                        (0x0000007F&(data))
#define  KME_LOGO0_KME_LOGO0_F4_get_km_logo_dummy_regs3(data)                    ((0xFF000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_F4_get_km_logo_dummy_regs2(data)                    ((0x00FFC000&(data))>>14)
#define  KME_LOGO0_KME_LOGO0_F4_get_km_logo_dummy_regs1(data)                    ((0x00003F80&(data))>>7)
#define  KME_LOGO0_KME_LOGO0_F4_get_km_logo_dummy_regs0(data)                    (0x0000007F&(data))

#define  KME_LOGO0_KME_LOGO0_F8                                                 0x1809BEF8
#define  KME_LOGO0_KME_LOGO0_F8_reg_addr                                         "0xB809BEF8"
#define  KME_LOGO0_KME_LOGO0_F8_reg                                              0xB809BEF8
#define  KME_LOGO0_KME_LOGO0_F8_inst_addr                                        "0x003E"
#define  set_KME_LOGO0_KME_LOGO0_F8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_F8_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_F8_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_F8_reg))
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_debug2_en_shift                         (26)
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_debug1_en_shift                         (25)
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_debug0_en_shift                         (24)
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_position2_shift                         (16)
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_position1_shift                         (8)
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_position0_shift                         (0)
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_debug2_en_mask                          (0x04000000)
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_debug1_en_mask                          (0x02000000)
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_debug0_en_mask                          (0x01000000)
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_position2_mask                          (0x00FF0000)
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_position1_mask                          (0x0000FF00)
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_position0_mask                          (0x000000FF)
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_debug2_en(data)                         (0x04000000&((data)<<26))
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_debug1_en(data)                         (0x02000000&((data)<<25))
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_debug0_en(data)                         (0x01000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_position2(data)                         (0x00FF0000&((data)<<16))
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_position1(data)                         (0x0000FF00&((data)<<8))
#define  KME_LOGO0_KME_LOGO0_F8_blk_logo_position0(data)                         (0x000000FF&(data))
#define  KME_LOGO0_KME_LOGO0_F8_get_blk_logo_debug2_en(data)                     ((0x04000000&(data))>>26)
#define  KME_LOGO0_KME_LOGO0_F8_get_blk_logo_debug1_en(data)                     ((0x02000000&(data))>>25)
#define  KME_LOGO0_KME_LOGO0_F8_get_blk_logo_debug0_en(data)                     ((0x01000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_F8_get_blk_logo_position2(data)                     ((0x00FF0000&(data))>>16)
#define  KME_LOGO0_KME_LOGO0_F8_get_blk_logo_position1(data)                     ((0x0000FF00&(data))>>8)
#define  KME_LOGO0_KME_LOGO0_F8_get_blk_logo_position0(data)                     (0x000000FF&(data))

#define  KME_LOGO0_KME_LOGO0_FC                                                 0x1809BEFC
#define  KME_LOGO0_KME_LOGO0_FC_reg_addr                                         "0xB809BEFC"
#define  KME_LOGO0_KME_LOGO0_FC_reg                                              0xB809BEFC
#define  KME_LOGO0_KME_LOGO0_FC_inst_addr                                        "0x003F"
#define  set_KME_LOGO0_KME_LOGO0_FC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_FC_reg)=data)
#define  get_KME_LOGO0_KME_LOGO0_FC_reg                                          (*((volatile unsigned int*)KME_LOGO0_KME_LOGO0_FC_reg))
#define  KME_LOGO0_KME_LOGO0_FC_km_logo_pxlhsty_cmp_en_shift                     (25)
#define  KME_LOGO0_KME_LOGO0_FC_km_logo_blkhsty_cmp_en_shift                     (24)
#define  KME_LOGO0_KME_LOGO0_FC_pxl_logo_position1_shift                         (14)
#define  KME_LOGO0_KME_LOGO0_FC_pxl_logo_debug1_en_shift                         (13)
#define  KME_LOGO0_KME_LOGO0_FC_pxl_logo_position0_shift                         (3)
#define  KME_LOGO0_KME_LOGO0_FC_pxl_logo_debug0_en_shift                         (2)
#define  KME_LOGO0_KME_LOGO0_FC_km_logo_pxlogopostdlt_en_shift                   (1)
#define  KME_LOGO0_KME_LOGO0_FC_km_logo_blklogopostdlt_en_shift                  (0)
#define  KME_LOGO0_KME_LOGO0_FC_km_logo_pxlhsty_cmp_en_mask                      (0x02000000)
#define  KME_LOGO0_KME_LOGO0_FC_km_logo_blkhsty_cmp_en_mask                      (0x01000000)
#define  KME_LOGO0_KME_LOGO0_FC_pxl_logo_position1_mask                          (0x00FFC000)
#define  KME_LOGO0_KME_LOGO0_FC_pxl_logo_debug1_en_mask                          (0x00002000)
#define  KME_LOGO0_KME_LOGO0_FC_pxl_logo_position0_mask                          (0x00001FF8)
#define  KME_LOGO0_KME_LOGO0_FC_pxl_logo_debug0_en_mask                          (0x00000004)
#define  KME_LOGO0_KME_LOGO0_FC_km_logo_pxlogopostdlt_en_mask                    (0x00000002)
#define  KME_LOGO0_KME_LOGO0_FC_km_logo_blklogopostdlt_en_mask                   (0x00000001)
#define  KME_LOGO0_KME_LOGO0_FC_km_logo_pxlhsty_cmp_en(data)                     (0x02000000&((data)<<25))
#define  KME_LOGO0_KME_LOGO0_FC_km_logo_blkhsty_cmp_en(data)                     (0x01000000&((data)<<24))
#define  KME_LOGO0_KME_LOGO0_FC_pxl_logo_position1(data)                         (0x00FFC000&((data)<<14))
#define  KME_LOGO0_KME_LOGO0_FC_pxl_logo_debug1_en(data)                         (0x00002000&((data)<<13))
#define  KME_LOGO0_KME_LOGO0_FC_pxl_logo_position0(data)                         (0x00001FF8&((data)<<3))
#define  KME_LOGO0_KME_LOGO0_FC_pxl_logo_debug0_en(data)                         (0x00000004&((data)<<2))
#define  KME_LOGO0_KME_LOGO0_FC_km_logo_pxlogopostdlt_en(data)                   (0x00000002&((data)<<1))
#define  KME_LOGO0_KME_LOGO0_FC_km_logo_blklogopostdlt_en(data)                  (0x00000001&(data))
#define  KME_LOGO0_KME_LOGO0_FC_get_km_logo_pxlhsty_cmp_en(data)                 ((0x02000000&(data))>>25)
#define  KME_LOGO0_KME_LOGO0_FC_get_km_logo_blkhsty_cmp_en(data)                 ((0x01000000&(data))>>24)
#define  KME_LOGO0_KME_LOGO0_FC_get_pxl_logo_position1(data)                     ((0x00FFC000&(data))>>14)
#define  KME_LOGO0_KME_LOGO0_FC_get_pxl_logo_debug1_en(data)                     ((0x00002000&(data))>>13)
#define  KME_LOGO0_KME_LOGO0_FC_get_pxl_logo_position0(data)                     ((0x00001FF8&(data))>>3)
#define  KME_LOGO0_KME_LOGO0_FC_get_pxl_logo_debug0_en(data)                     ((0x00000004&(data))>>2)
#define  KME_LOGO0_KME_LOGO0_FC_get_km_logo_pxlogopostdlt_en(data)               ((0x00000002&(data))>>1)
#define  KME_LOGO0_KME_LOGO0_FC_get_km_logo_blklogopostdlt_en(data)              (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_LOGO0 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pscaler_v_active:12;
        RBus_UInt32  km_logo_h1_ration:8;
        RBus_UInt32  km_logo_h0_ration:8;
        RBus_UInt32  km_logo_v_fetch_mode:2;
        RBus_UInt32  km_logo_h_fetch_mode:2;
    };
}kme_logo0_kme_logo0_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  km_logo_h3_ration:8;
        RBus_UInt32  km_logo_h2_ration:8;
    };
}kme_logo0_kme_logo0_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  km_logo_v1_ration:8;
        RBus_UInt32  km_logo_v0_ration:8;
    };
}kme_logo0_kme_logo0_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  km_logo_v3_ration:8;
        RBus_UInt32  km_logo_v2_ration:8;
    };
}kme_logo0_kme_logo0_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  km_logo_iir_alpha:5;
    };
}kme_logo0_kme_logo0_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region7_en:4;
        RBus_UInt32  km_logo_blk_region6_en:4;
        RBus_UInt32  km_logo_blk_region5_en:4;
        RBus_UInt32  km_logo_blk_region4_en:4;
        RBus_UInt32  km_logo_blk_region3_en:4;
        RBus_UInt32  km_logo_blk_region2_en:4;
        RBus_UInt32  km_logo_blk_region1_en:4;
        RBus_UInt32  km_logo_blk_region0_en:4;
    };
}kme_logo0_kme_logo0_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region15_en:4;
        RBus_UInt32  km_logo_blk_region14_en:4;
        RBus_UInt32  km_logo_blk_region13_en:4;
        RBus_UInt32  km_logo_blk_region12_en:4;
        RBus_UInt32  km_logo_blk_region11_en:4;
        RBus_UInt32  km_logo_blk_region10_en:4;
        RBus_UInt32  km_logo_blk_region9_en:4;
        RBus_UInt32  km_logo_blk_region8_en:4;
    };
}kme_logo0_kme_logo0_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region23_en:4;
        RBus_UInt32  km_logo_blk_region22_en:4;
        RBus_UInt32  km_logo_blk_region21_en:4;
        RBus_UInt32  km_logo_blk_region20_en:4;
        RBus_UInt32  km_logo_blk_region19_en:4;
        RBus_UInt32  km_logo_blk_region18_en:4;
        RBus_UInt32  km_logo_blk_region17_en:4;
        RBus_UInt32  km_logo_blk_region16_en:4;
    };
}kme_logo0_kme_logo0_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region31_en:4;
        RBus_UInt32  km_logo_blk_region30_en:4;
        RBus_UInt32  km_logo_blk_region29_en:4;
        RBus_UInt32  km_logo_blk_region28_en:4;
        RBus_UInt32  km_logo_blk_region27_en:4;
        RBus_UInt32  km_logo_blk_region26_en:4;
        RBus_UInt32  km_logo_blk_region25_en:4;
        RBus_UInt32  km_logo_blk_region24_en:4;
    };
}kme_logo0_kme_logo0_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blk_region1_gain:12;
        RBus_UInt32  km_logo_blk_region0_gain:12;
    };
}kme_logo0_kme_logo0_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blk_region3_gain:12;
        RBus_UInt32  km_logo_blk_region2_gain:12;
    };
}kme_logo0_kme_logo0_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blk_region5_gain:12;
        RBus_UInt32  km_logo_blk_region4_gain:12;
    };
}kme_logo0_kme_logo0_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blk_region7_gain:12;
        RBus_UInt32  km_logo_blk_region6_gain:12;
    };
}kme_logo0_kme_logo0_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blk_region9_gain:12;
        RBus_UInt32  km_logo_blk_region8_gain:12;
    };
}kme_logo0_kme_logo0_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blk_region11_gain:12;
        RBus_UInt32  km_logo_blk_region10_gain:12;
    };
}kme_logo0_kme_logo0_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blk_region13_gain:12;
        RBus_UInt32  km_logo_blk_region12_gain:12;
    };
}kme_logo0_kme_logo0_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blk_region15_gain:12;
        RBus_UInt32  km_logo_blk_region14_gain:12;
    };
}kme_logo0_kme_logo0_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blk_region17_gain:12;
        RBus_UInt32  km_logo_blk_region16_gain:12;
    };
}kme_logo0_kme_logo0_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blk_region19_gain:12;
        RBus_UInt32  km_logo_blk_region18_gain:12;
    };
}kme_logo0_kme_logo0_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blk_region21_gain:12;
        RBus_UInt32  km_logo_blk_region20_gain:12;
    };
}kme_logo0_kme_logo0_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blk_region23_gain:12;
        RBus_UInt32  km_logo_blk_region22_gain:12;
    };
}kme_logo0_kme_logo0_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blk_region25_gain:12;
        RBus_UInt32  km_logo_blk_region24_gain:12;
    };
}kme_logo0_kme_logo0_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blk_region27_gain:12;
        RBus_UInt32  km_logo_blk_region26_gain:12;
    };
}kme_logo0_kme_logo0_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blk_region29_gain:12;
        RBus_UInt32  km_logo_blk_region28_gain:12;
    };
}kme_logo0_kme_logo0_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blk_region31_gain:12;
        RBus_UInt32  km_logo_blk_region30_gain:12;
    };
}kme_logo0_kme_logo0_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkgrdn45_th:8;
        RBus_UInt32  km_logo_blkgrdver_th:8;
        RBus_UInt32  km_logo_blkgrdp45_th:8;
        RBus_UInt32  km_logo_blkgrdhor_th:8;
    };
}kme_logo0_kme_logo0_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  km_logo_blkgrdsum_pth:10;
        RBus_UInt32  km_logo_blkgrdsum2_th:11;
    };
}kme_logo0_kme_logo0_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  km_logo_grddiffrs_bit:2;
        RBus_UInt32  km_logo_blkgrdsum_diffth:10;
        RBus_UInt32  km_logo_blkgrdsum_cth:10;
    };
}kme_logo0_kme_logo0_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  km_logo_blksameth_hstylut_s4:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s3:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s2:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s1:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s0:6;
    };
}kme_logo0_kme_logo0_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  km_logo_blksameth_hstylut_s9:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s8:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s7:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s6:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s5:6;
    };
}kme_logo0_kme_logo0_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  km_logo_blksameth_hstylut_s14:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s13:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s12:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s11:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s10:6;
    };
}kme_logo0_kme_logo0_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  km_logo_blksameth_hstylut_t4:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t3:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t2:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t1:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t0:5;
        RBus_UInt32  km_logo_blksameth_hstylut_s15:6;
    };
}kme_logo0_kme_logo0_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  km_logo_blksameth_hstylut_t10:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t9:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t8:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t7:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t6:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t5:5;
    };
}kme_logo0_kme_logo0_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  km_logo_adpblksameth_en:1;
        RBus_UInt32  km_logo_blksameth_hstylut_t15:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t14:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t13:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t12:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t11:5;
    };
}kme_logo0_kme_logo0_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blksameth_hsty_sbase:8;
        RBus_UInt32  km_logo_blksameth_hsty_tbase:8;
        RBus_UInt32  km_logo_blksameth_m:8;
    };
}kme_logo0_kme_logo0_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  km_logo_blksameth_posw_x2:9;
        RBus_UInt32  km_logo_blksameth_posw_x1:9;
        RBus_UInt32  km_logo_blksameth_posw_x0:9;
    };
}kme_logo0_kme_logo0_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blksameth_posw_y2:8;
        RBus_UInt32  km_logo_blksameth_posw_y1:8;
        RBus_UInt32  km_logo_blksameth_posw_y0:8;
    };
}kme_logo0_kme_logo0_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  km_logo_blksameth_posw_slp1:5;
        RBus_UInt32  km_logo_blksameth_posw_slp0:5;
    };
}kme_logo0_kme_logo0_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  km_logo_blksameth_negw_x2:9;
        RBus_UInt32  km_logo_blksameth_negw_x1:9;
        RBus_UInt32  km_logo_blksameth_negw_x0:9;
    };
}kme_logo0_kme_logo0_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blksameth_negw_y2:8;
        RBus_UInt32  km_logo_blksameth_negw_y1:8;
        RBus_UInt32  km_logo_blksameth_negw_y0:8;
    };
}kme_logo0_kme_logo0_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  km_logo_blksameth_negw_slp1:5;
        RBus_UInt32  km_logo_blksameth_negw_slp0:5;
    };
}kme_logo0_kme_logo0_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_l_bidx3:8;
        RBus_UInt32  km_logo_blksameth_l_bidx2:8;
        RBus_UInt32  km_logo_blksameth_l_bidx1:8;
        RBus_UInt32  km_logo_blksameth_l_bidx0:8;
    };
}kme_logo0_kme_logo0_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_l_bidx7:8;
        RBus_UInt32  km_logo_blksameth_l_bidx6:8;
        RBus_UInt32  km_logo_blksameth_l_bidx5:8;
        RBus_UInt32  km_logo_blksameth_l_bidx4:8;
    };
}kme_logo0_kme_logo0_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_l_bidx11:8;
        RBus_UInt32  km_logo_blksameth_l_bidx10:8;
        RBus_UInt32  km_logo_blksameth_l_bidx9:8;
        RBus_UInt32  km_logo_blksameth_l_bidx8:8;
    };
}kme_logo0_kme_logo0_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blksameth_l_bidx14:8;
        RBus_UInt32  km_logo_blksameth_l_bidx13:8;
        RBus_UInt32  km_logo_blksameth_l_bidx12:8;
    };
}kme_logo0_kme_logo0_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_h_bidx3:8;
        RBus_UInt32  km_logo_blksameth_h_bidx2:8;
        RBus_UInt32  km_logo_blksameth_h_bidx1:8;
        RBus_UInt32  km_logo_blksameth_h_bidx0:8;
    };
}kme_logo0_kme_logo0_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_h_bidx7:8;
        RBus_UInt32  km_logo_blksameth_h_bidx6:8;
        RBus_UInt32  km_logo_blksameth_h_bidx5:8;
        RBus_UInt32  km_logo_blksameth_h_bidx4:8;
    };
}kme_logo0_kme_logo0_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_h_bidx11:8;
        RBus_UInt32  km_logo_blksameth_h_bidx10:8;
        RBus_UInt32  km_logo_blksameth_h_bidx9:8;
        RBus_UInt32  km_logo_blksameth_h_bidx8:8;
    };
}kme_logo0_kme_logo0_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blksameth_h_bidx14:8;
        RBus_UInt32  km_logo_blksameth_h_bidx13:8;
        RBus_UInt32  km_logo_blksameth_h_bidx12:8;
    };
}kme_logo0_kme_logo0_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_a_bidx3:8;
        RBus_UInt32  km_logo_blksameth_a_bidx2:8;
        RBus_UInt32  km_logo_blksameth_a_bidx1:8;
        RBus_UInt32  km_logo_blksameth_a_bidx0:8;
    };
}kme_logo0_kme_logo0_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_a_bidx7:8;
        RBus_UInt32  km_logo_blksameth_a_bidx6:8;
        RBus_UInt32  km_logo_blksameth_a_bidx5:8;
        RBus_UInt32  km_logo_blksameth_a_bidx4:8;
    };
}kme_logo0_kme_logo0_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_a_bidx11:8;
        RBus_UInt32  km_logo_blksameth_a_bidx10:8;
        RBus_UInt32  km_logo_blksameth_a_bidx9:8;
        RBus_UInt32  km_logo_blksameth_a_bidx8:8;
    };
}kme_logo0_kme_logo0_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blksameth_a_bidx14:8;
        RBus_UInt32  km_logo_blksameth_a_bidx13:8;
        RBus_UInt32  km_logo_blksameth_a_bidx12:8;
    };
}kme_logo0_kme_logo0_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blkhsty_nstep_x2:8;
        RBus_UInt32  km_logo_blkhsty_nstep_x1:8;
        RBus_UInt32  km_logo_blkhsty_nstep_x0:8;
    };
}kme_logo0_kme_logo0_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  km_logo_blkhsty_nstep_y2:4;
        RBus_UInt32  km_logo_blkhsty_nstep_y1:4;
        RBus_UInt32  km_logo_blkhsty_nstep_y0:4;
    };
}kme_logo0_kme_logo0_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  km_logo_blkhsty_nstep_slp1:6;
        RBus_UInt32  km_logo_blkhsty_nstep_slp0:6;
    };
}kme_logo0_kme_logo0_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blkhsty_pstep_x2:8;
        RBus_UInt32  km_logo_blkhsty_pstep_x1:8;
        RBus_UInt32  km_logo_blkhsty_pstep_x0:8;
    };
}kme_logo0_kme_logo0_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  km_logo_blkhsty_pstep_y2:4;
        RBus_UInt32  km_logo_blkhsty_pstep_y1:4;
        RBus_UInt32  km_logo_blkhsty_pstep_y0:4;
    };
}kme_logo0_kme_logo0_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  km_logo_blkhsty_pstep_slp1:6;
        RBus_UInt32  km_logo_blkhsty_pstep_slp0:6;
    };
}kme_logo0_kme_logo0_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  km_logo_blklogocurdlt_eroen:1;
        RBus_UInt32  km_logo_blklogohstydlt_eroen:1;
        RBus_UInt32  km_logo_blklogocurdlt_en:1;
        RBus_UInt32  km_logo_blklogohstydlt_en:1;
        RBus_UInt32  km_logo_blklogodltcur_th:4;
        RBus_UInt32  km_logo_blklogodlthsty_th:4;
        RBus_UInt32  km_logo_blkhsty_upmet:1;
        RBus_UInt32  km_logo_blkadphstystep_en:1;
        RBus_UInt32  km_logo_blkhsty_pstep:4;
        RBus_UInt32  km_logo_blkhsty_nstep:4;
    };
}kme_logo0_kme_logo0_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  km_logo_pxlhsty_force:4;
        RBus_UInt32  km_logo_pxlhsty_force_en:1;
        RBus_UInt32  km_logo_blkhsty_force:4;
        RBus_UInt32  km_logo_blkhsty_force_en:1;
        RBus_UInt32  km_logo_vflip_en:1;
        RBus_UInt32  km_logo_blk_v_active:8;
        RBus_UInt32  km_logo_blk_h_active:8;
    };
}kme_logo0_kme_logo0_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_dummy_regs3:8;
        RBus_UInt32  km_logo_dummy_regs2:10;
        RBus_UInt32  km_logo_dummy_regs1:7;
        RBus_UInt32  km_logo_dummy_regs0:7;
    };
}kme_logo0_kme_logo0_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  blk_logo_debug2_en:1;
        RBus_UInt32  blk_logo_debug1_en:1;
        RBus_UInt32  blk_logo_debug0_en:1;
        RBus_UInt32  blk_logo_position2:8;
        RBus_UInt32  blk_logo_position1:8;
        RBus_UInt32  blk_logo_position0:8;
    };
}kme_logo0_kme_logo0_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  km_logo_pxlhsty_cmp_en:1;
        RBus_UInt32  km_logo_blkhsty_cmp_en:1;
        RBus_UInt32  pxl_logo_position1:10;
        RBus_UInt32  pxl_logo_debug1_en:1;
        RBus_UInt32  pxl_logo_position0:10;
        RBus_UInt32  pxl_logo_debug0_en:1;
        RBus_UInt32  km_logo_pxlogopostdlt_en:1;
        RBus_UInt32  km_logo_blklogopostdlt_en:1;
    };
}kme_logo0_kme_logo0_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_LOGO0 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_h_fetch_mode:2;
        RBus_UInt32  km_logo_v_fetch_mode:2;
        RBus_UInt32  km_logo_h0_ration:8;
        RBus_UInt32  km_logo_h1_ration:8;
        RBus_UInt32  km_logo_pscaler_v_active:12;
    };
}kme_logo0_kme_logo0_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_h2_ration:8;
        RBus_UInt32  km_logo_h3_ration:8;
        RBus_UInt32  res1:16;
    };
}kme_logo0_kme_logo0_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_v0_ration:8;
        RBus_UInt32  km_logo_v1_ration:8;
        RBus_UInt32  res1:16;
    };
}kme_logo0_kme_logo0_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_v2_ration:8;
        RBus_UInt32  km_logo_v3_ration:8;
        RBus_UInt32  res1:16;
    };
}kme_logo0_kme_logo0_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_iir_alpha:5;
        RBus_UInt32  res1:27;
    };
}kme_logo0_kme_logo0_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region0_en:4;
        RBus_UInt32  km_logo_blk_region1_en:4;
        RBus_UInt32  km_logo_blk_region2_en:4;
        RBus_UInt32  km_logo_blk_region3_en:4;
        RBus_UInt32  km_logo_blk_region4_en:4;
        RBus_UInt32  km_logo_blk_region5_en:4;
        RBus_UInt32  km_logo_blk_region6_en:4;
        RBus_UInt32  km_logo_blk_region7_en:4;
    };
}kme_logo0_kme_logo0_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region8_en:4;
        RBus_UInt32  km_logo_blk_region9_en:4;
        RBus_UInt32  km_logo_blk_region10_en:4;
        RBus_UInt32  km_logo_blk_region11_en:4;
        RBus_UInt32  km_logo_blk_region12_en:4;
        RBus_UInt32  km_logo_blk_region13_en:4;
        RBus_UInt32  km_logo_blk_region14_en:4;
        RBus_UInt32  km_logo_blk_region15_en:4;
    };
}kme_logo0_kme_logo0_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region16_en:4;
        RBus_UInt32  km_logo_blk_region17_en:4;
        RBus_UInt32  km_logo_blk_region18_en:4;
        RBus_UInt32  km_logo_blk_region19_en:4;
        RBus_UInt32  km_logo_blk_region20_en:4;
        RBus_UInt32  km_logo_blk_region21_en:4;
        RBus_UInt32  km_logo_blk_region22_en:4;
        RBus_UInt32  km_logo_blk_region23_en:4;
    };
}kme_logo0_kme_logo0_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region24_en:4;
        RBus_UInt32  km_logo_blk_region25_en:4;
        RBus_UInt32  km_logo_blk_region26_en:4;
        RBus_UInt32  km_logo_blk_region27_en:4;
        RBus_UInt32  km_logo_blk_region28_en:4;
        RBus_UInt32  km_logo_blk_region29_en:4;
        RBus_UInt32  km_logo_blk_region30_en:4;
        RBus_UInt32  km_logo_blk_region31_en:4;
    };
}kme_logo0_kme_logo0_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region0_gain:12;
        RBus_UInt32  km_logo_blk_region1_gain:12;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region2_gain:12;
        RBus_UInt32  km_logo_blk_region3_gain:12;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region4_gain:12;
        RBus_UInt32  km_logo_blk_region5_gain:12;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region6_gain:12;
        RBus_UInt32  km_logo_blk_region7_gain:12;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region8_gain:12;
        RBus_UInt32  km_logo_blk_region9_gain:12;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region10_gain:12;
        RBus_UInt32  km_logo_blk_region11_gain:12;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region12_gain:12;
        RBus_UInt32  km_logo_blk_region13_gain:12;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region14_gain:12;
        RBus_UInt32  km_logo_blk_region15_gain:12;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region16_gain:12;
        RBus_UInt32  km_logo_blk_region17_gain:12;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region18_gain:12;
        RBus_UInt32  km_logo_blk_region19_gain:12;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region20_gain:12;
        RBus_UInt32  km_logo_blk_region21_gain:12;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region22_gain:12;
        RBus_UInt32  km_logo_blk_region23_gain:12;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region24_gain:12;
        RBus_UInt32  km_logo_blk_region25_gain:12;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region26_gain:12;
        RBus_UInt32  km_logo_blk_region27_gain:12;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region28_gain:12;
        RBus_UInt32  km_logo_blk_region29_gain:12;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_region30_gain:12;
        RBus_UInt32  km_logo_blk_region31_gain:12;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkgrdhor_th:8;
        RBus_UInt32  km_logo_blkgrdp45_th:8;
        RBus_UInt32  km_logo_blkgrdver_th:8;
        RBus_UInt32  km_logo_blkgrdn45_th:8;
    };
}kme_logo0_kme_logo0_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkgrdsum2_th:11;
        RBus_UInt32  km_logo_blkgrdsum_pth:10;
        RBus_UInt32  res1:11;
    };
}kme_logo0_kme_logo0_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkgrdsum_cth:10;
        RBus_UInt32  km_logo_blkgrdsum_diffth:10;
        RBus_UInt32  km_logo_grddiffrs_bit:2;
        RBus_UInt32  res1:10;
    };
}kme_logo0_kme_logo0_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_hstylut_s0:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s1:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s2:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s3:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s4:6;
        RBus_UInt32  res1:2;
    };
}kme_logo0_kme_logo0_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_hstylut_s5:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s6:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s7:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s8:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s9:6;
        RBus_UInt32  res1:2;
    };
}kme_logo0_kme_logo0_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_hstylut_s10:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s11:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s12:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s13:6;
        RBus_UInt32  km_logo_blksameth_hstylut_s14:6;
        RBus_UInt32  res1:2;
    };
}kme_logo0_kme_logo0_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_hstylut_s15:6;
        RBus_UInt32  km_logo_blksameth_hstylut_t0:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t1:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t2:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t3:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t4:5;
        RBus_UInt32  res1:1;
    };
}kme_logo0_kme_logo0_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_hstylut_t5:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t6:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t7:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t8:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t9:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t10:5;
        RBus_UInt32  res1:2;
    };
}kme_logo0_kme_logo0_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_hstylut_t11:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t12:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t13:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t14:5;
        RBus_UInt32  km_logo_blksameth_hstylut_t15:5;
        RBus_UInt32  km_logo_adpblksameth_en:1;
        RBus_UInt32  res1:6;
    };
}kme_logo0_kme_logo0_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_m:8;
        RBus_UInt32  km_logo_blksameth_hsty_tbase:8;
        RBus_UInt32  km_logo_blksameth_hsty_sbase:8;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_posw_x0:9;
        RBus_UInt32  km_logo_blksameth_posw_x1:9;
        RBus_UInt32  km_logo_blksameth_posw_x2:9;
        RBus_UInt32  res1:5;
    };
}kme_logo0_kme_logo0_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_posw_y0:8;
        RBus_UInt32  km_logo_blksameth_posw_y1:8;
        RBus_UInt32  km_logo_blksameth_posw_y2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_posw_slp0:5;
        RBus_UInt32  km_logo_blksameth_posw_slp1:5;
        RBus_UInt32  res1:22;
    };
}kme_logo0_kme_logo0_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_negw_x0:9;
        RBus_UInt32  km_logo_blksameth_negw_x1:9;
        RBus_UInt32  km_logo_blksameth_negw_x2:9;
        RBus_UInt32  res1:5;
    };
}kme_logo0_kme_logo0_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_negw_y0:8;
        RBus_UInt32  km_logo_blksameth_negw_y1:8;
        RBus_UInt32  km_logo_blksameth_negw_y2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_negw_slp0:5;
        RBus_UInt32  km_logo_blksameth_negw_slp1:5;
        RBus_UInt32  res1:22;
    };
}kme_logo0_kme_logo0_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_l_bidx0:8;
        RBus_UInt32  km_logo_blksameth_l_bidx1:8;
        RBus_UInt32  km_logo_blksameth_l_bidx2:8;
        RBus_UInt32  km_logo_blksameth_l_bidx3:8;
    };
}kme_logo0_kme_logo0_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_l_bidx4:8;
        RBus_UInt32  km_logo_blksameth_l_bidx5:8;
        RBus_UInt32  km_logo_blksameth_l_bidx6:8;
        RBus_UInt32  km_logo_blksameth_l_bidx7:8;
    };
}kme_logo0_kme_logo0_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_l_bidx8:8;
        RBus_UInt32  km_logo_blksameth_l_bidx9:8;
        RBus_UInt32  km_logo_blksameth_l_bidx10:8;
        RBus_UInt32  km_logo_blksameth_l_bidx11:8;
    };
}kme_logo0_kme_logo0_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_l_bidx12:8;
        RBus_UInt32  km_logo_blksameth_l_bidx13:8;
        RBus_UInt32  km_logo_blksameth_l_bidx14:8;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_h_bidx0:8;
        RBus_UInt32  km_logo_blksameth_h_bidx1:8;
        RBus_UInt32  km_logo_blksameth_h_bidx2:8;
        RBus_UInt32  km_logo_blksameth_h_bidx3:8;
    };
}kme_logo0_kme_logo0_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_h_bidx4:8;
        RBus_UInt32  km_logo_blksameth_h_bidx5:8;
        RBus_UInt32  km_logo_blksameth_h_bidx6:8;
        RBus_UInt32  km_logo_blksameth_h_bidx7:8;
    };
}kme_logo0_kme_logo0_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_h_bidx8:8;
        RBus_UInt32  km_logo_blksameth_h_bidx9:8;
        RBus_UInt32  km_logo_blksameth_h_bidx10:8;
        RBus_UInt32  km_logo_blksameth_h_bidx11:8;
    };
}kme_logo0_kme_logo0_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_h_bidx12:8;
        RBus_UInt32  km_logo_blksameth_h_bidx13:8;
        RBus_UInt32  km_logo_blksameth_h_bidx14:8;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_a_bidx0:8;
        RBus_UInt32  km_logo_blksameth_a_bidx1:8;
        RBus_UInt32  km_logo_blksameth_a_bidx2:8;
        RBus_UInt32  km_logo_blksameth_a_bidx3:8;
    };
}kme_logo0_kme_logo0_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_a_bidx4:8;
        RBus_UInt32  km_logo_blksameth_a_bidx5:8;
        RBus_UInt32  km_logo_blksameth_a_bidx6:8;
        RBus_UInt32  km_logo_blksameth_a_bidx7:8;
    };
}kme_logo0_kme_logo0_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_a_bidx8:8;
        RBus_UInt32  km_logo_blksameth_a_bidx9:8;
        RBus_UInt32  km_logo_blksameth_a_bidx10:8;
        RBus_UInt32  km_logo_blksameth_a_bidx11:8;
    };
}kme_logo0_kme_logo0_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blksameth_a_bidx12:8;
        RBus_UInt32  km_logo_blksameth_a_bidx13:8;
        RBus_UInt32  km_logo_blksameth_a_bidx14:8;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkhsty_nstep_x0:8;
        RBus_UInt32  km_logo_blkhsty_nstep_x1:8;
        RBus_UInt32  km_logo_blkhsty_nstep_x2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkhsty_nstep_y0:4;
        RBus_UInt32  km_logo_blkhsty_nstep_y1:4;
        RBus_UInt32  km_logo_blkhsty_nstep_y2:4;
        RBus_UInt32  res1:20;
    };
}kme_logo0_kme_logo0_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkhsty_nstep_slp0:6;
        RBus_UInt32  km_logo_blkhsty_nstep_slp1:6;
        RBus_UInt32  res1:20;
    };
}kme_logo0_kme_logo0_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkhsty_pstep_x0:8;
        RBus_UInt32  km_logo_blkhsty_pstep_x1:8;
        RBus_UInt32  km_logo_blkhsty_pstep_x2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo0_kme_logo0_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkhsty_pstep_y0:4;
        RBus_UInt32  km_logo_blkhsty_pstep_y1:4;
        RBus_UInt32  km_logo_blkhsty_pstep_y2:4;
        RBus_UInt32  res1:20;
    };
}kme_logo0_kme_logo0_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkhsty_pstep_slp0:6;
        RBus_UInt32  km_logo_blkhsty_pstep_slp1:6;
        RBus_UInt32  res1:20;
    };
}kme_logo0_kme_logo0_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkhsty_nstep:4;
        RBus_UInt32  km_logo_blkhsty_pstep:4;
        RBus_UInt32  km_logo_blkadphstystep_en:1;
        RBus_UInt32  km_logo_blkhsty_upmet:1;
        RBus_UInt32  km_logo_blklogodlthsty_th:4;
        RBus_UInt32  km_logo_blklogodltcur_th:4;
        RBus_UInt32  km_logo_blklogohstydlt_en:1;
        RBus_UInt32  km_logo_blklogocurdlt_en:1;
        RBus_UInt32  km_logo_blklogohstydlt_eroen:1;
        RBus_UInt32  km_logo_blklogocurdlt_eroen:1;
        RBus_UInt32  res1:10;
    };
}kme_logo0_kme_logo0_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_h_active:8;
        RBus_UInt32  km_logo_blk_v_active:8;
        RBus_UInt32  km_logo_vflip_en:1;
        RBus_UInt32  km_logo_blkhsty_force_en:1;
        RBus_UInt32  km_logo_blkhsty_force:4;
        RBus_UInt32  km_logo_pxlhsty_force_en:1;
        RBus_UInt32  km_logo_pxlhsty_force:4;
        RBus_UInt32  res1:5;
    };
}kme_logo0_kme_logo0_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_dummy_regs0:7;
        RBus_UInt32  km_logo_dummy_regs1:7;
        RBus_UInt32  km_logo_dummy_regs2:10;
        RBus_UInt32  km_logo_dummy_regs3:8;
    };
}kme_logo0_kme_logo0_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blk_logo_position0:8;
        RBus_UInt32  blk_logo_position1:8;
        RBus_UInt32  blk_logo_position2:8;
        RBus_UInt32  blk_logo_debug0_en:1;
        RBus_UInt32  blk_logo_debug1_en:1;
        RBus_UInt32  blk_logo_debug2_en:1;
        RBus_UInt32  res1:5;
    };
}kme_logo0_kme_logo0_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blklogopostdlt_en:1;
        RBus_UInt32  km_logo_pxlogopostdlt_en:1;
        RBus_UInt32  pxl_logo_debug0_en:1;
        RBus_UInt32  pxl_logo_position0:10;
        RBus_UInt32  pxl_logo_debug1_en:1;
        RBus_UInt32  pxl_logo_position1:10;
        RBus_UInt32  km_logo_blkhsty_cmp_en:1;
        RBus_UInt32  km_logo_pxlhsty_cmp_en:1;
        RBus_UInt32  res1:6;
    };
}kme_logo0_kme_logo0_fc_RBUS;




#endif 


#endif 
