/**
* @file Merlin5_MEMC_KME_DEHALO3
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_DEHALO3_REG_H_
#define _RBUS_KME_DEHALO3_REG_H_

#include "rbus_types.h"



//  KME_DEHALO3 Register Address
#define  KME_DEHALO3_KME_DEHALO3_0C                                             0x1809C30C
#define  KME_DEHALO3_KME_DEHALO3_0C_reg_addr                                     "0xB809C30C"
#define  KME_DEHALO3_KME_DEHALO3_0C_reg                                          0xB809C30C
#define  KME_DEHALO3_KME_DEHALO3_0C_inst_addr                                    "0x0000"
#define  set_KME_DEHALO3_KME_DEHALO3_0C_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_0C_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_0C_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_0C_reg))
#define  KME_DEHALO3_KME_DEHALO3_0C_dh_sta_fb_lvl_thr_shift                      (2)
#define  KME_DEHALO3_KME_DEHALO3_0C_dh_sta_fb_lvl_sta_en_shift                   (1)
#define  KME_DEHALO3_KME_DEHALO3_0C_dh_pfvconf_statis_en_shift                   (0)
#define  KME_DEHALO3_KME_DEHALO3_0C_dh_sta_fb_lvl_thr_mask                       (0x000003FC)
#define  KME_DEHALO3_KME_DEHALO3_0C_dh_sta_fb_lvl_sta_en_mask                    (0x00000002)
#define  KME_DEHALO3_KME_DEHALO3_0C_dh_pfvconf_statis_en_mask                    (0x00000001)
#define  KME_DEHALO3_KME_DEHALO3_0C_dh_sta_fb_lvl_thr(data)                      (0x000003FC&((data)<<2))
#define  KME_DEHALO3_KME_DEHALO3_0C_dh_sta_fb_lvl_sta_en(data)                   (0x00000002&((data)<<1))
#define  KME_DEHALO3_KME_DEHALO3_0C_dh_pfvconf_statis_en(data)                   (0x00000001&(data))
#define  KME_DEHALO3_KME_DEHALO3_0C_get_dh_sta_fb_lvl_thr(data)                  ((0x000003FC&(data))>>2)
#define  KME_DEHALO3_KME_DEHALO3_0C_get_dh_sta_fb_lvl_sta_en(data)               ((0x00000002&(data))>>1)
#define  KME_DEHALO3_KME_DEHALO3_0C_get_dh_pfvconf_statis_en(data)               (0x00000001&(data))

#define  KME_DEHALO3_KME_DEHALO3_10                                             0x1809C310
#define  KME_DEHALO3_KME_DEHALO3_10_reg_addr                                     "0xB809C310"
#define  KME_DEHALO3_KME_DEHALO3_10_reg                                          0xB809C310
#define  KME_DEHALO3_KME_DEHALO3_10_inst_addr                                    "0x0001"
#define  set_KME_DEHALO3_KME_DEHALO3_10_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_10_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_10_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_10_reg))
#define  KME_DEHALO3_KME_DEHALO3_10_regr_dh_fb_cnt_00_shift                      (20)
#define  KME_DEHALO3_KME_DEHALO3_10_regr_dh_pfvconf_00_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_10_regr_dh_fb_cnt_00_mask                       (0xFFF00000)
#define  KME_DEHALO3_KME_DEHALO3_10_regr_dh_pfvconf_00_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_10_regr_dh_fb_cnt_00(data)                      (0xFFF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_10_regr_dh_pfvconf_00(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_10_get_regr_dh_fb_cnt_00(data)                  ((0xFFF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_10_get_regr_dh_pfvconf_00(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_14                                             0x1809C314
#define  KME_DEHALO3_KME_DEHALO3_14_reg_addr                                     "0xB809C314"
#define  KME_DEHALO3_KME_DEHALO3_14_reg                                          0xB809C314
#define  KME_DEHALO3_KME_DEHALO3_14_inst_addr                                    "0x0002"
#define  set_KME_DEHALO3_KME_DEHALO3_14_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_14_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_14_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_14_reg))
#define  KME_DEHALO3_KME_DEHALO3_14_regr_dh_fb_cnt_01_shift                      (20)
#define  KME_DEHALO3_KME_DEHALO3_14_regr_dh_pfvconf_01_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_14_regr_dh_fb_cnt_01_mask                       (0xFFF00000)
#define  KME_DEHALO3_KME_DEHALO3_14_regr_dh_pfvconf_01_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_14_regr_dh_fb_cnt_01(data)                      (0xFFF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_14_regr_dh_pfvconf_01(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_14_get_regr_dh_fb_cnt_01(data)                  ((0xFFF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_14_get_regr_dh_pfvconf_01(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_18                                             0x1809C318
#define  KME_DEHALO3_KME_DEHALO3_18_reg_addr                                     "0xB809C318"
#define  KME_DEHALO3_KME_DEHALO3_18_reg                                          0xB809C318
#define  KME_DEHALO3_KME_DEHALO3_18_inst_addr                                    "0x0003"
#define  set_KME_DEHALO3_KME_DEHALO3_18_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_18_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_18_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_18_reg))
#define  KME_DEHALO3_KME_DEHALO3_18_regr_dh_fb_cnt_02_shift                      (20)
#define  KME_DEHALO3_KME_DEHALO3_18_regr_dh_pfvconf_02_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_18_regr_dh_fb_cnt_02_mask                       (0xFFF00000)
#define  KME_DEHALO3_KME_DEHALO3_18_regr_dh_pfvconf_02_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_18_regr_dh_fb_cnt_02(data)                      (0xFFF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_18_regr_dh_pfvconf_02(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_18_get_regr_dh_fb_cnt_02(data)                  ((0xFFF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_18_get_regr_dh_pfvconf_02(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_1C                                             0x1809C31C
#define  KME_DEHALO3_KME_DEHALO3_1C_reg_addr                                     "0xB809C31C"
#define  KME_DEHALO3_KME_DEHALO3_1C_reg                                          0xB809C31C
#define  KME_DEHALO3_KME_DEHALO3_1C_inst_addr                                    "0x0004"
#define  set_KME_DEHALO3_KME_DEHALO3_1C_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_1C_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_1C_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_1C_reg))
#define  KME_DEHALO3_KME_DEHALO3_1C_regr_dh_fb_cnt_03_shift                      (20)
#define  KME_DEHALO3_KME_DEHALO3_1C_regr_dh_pfvconf_03_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_1C_regr_dh_fb_cnt_03_mask                       (0xFFF00000)
#define  KME_DEHALO3_KME_DEHALO3_1C_regr_dh_pfvconf_03_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_1C_regr_dh_fb_cnt_03(data)                      (0xFFF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_1C_regr_dh_pfvconf_03(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_1C_get_regr_dh_fb_cnt_03(data)                  ((0xFFF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_1C_get_regr_dh_pfvconf_03(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_20                                             0x1809C320
#define  KME_DEHALO3_KME_DEHALO3_20_reg_addr                                     "0xB809C320"
#define  KME_DEHALO3_KME_DEHALO3_20_reg                                          0xB809C320
#define  KME_DEHALO3_KME_DEHALO3_20_inst_addr                                    "0x0005"
#define  set_KME_DEHALO3_KME_DEHALO3_20_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_20_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_20_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_20_reg))
#define  KME_DEHALO3_KME_DEHALO3_20_regr_dh_fb_cnt_04_shift                      (20)
#define  KME_DEHALO3_KME_DEHALO3_20_regr_dh_pfvconf_04_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_20_regr_dh_fb_cnt_04_mask                       (0xFFF00000)
#define  KME_DEHALO3_KME_DEHALO3_20_regr_dh_pfvconf_04_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_20_regr_dh_fb_cnt_04(data)                      (0xFFF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_20_regr_dh_pfvconf_04(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_20_get_regr_dh_fb_cnt_04(data)                  ((0xFFF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_20_get_regr_dh_pfvconf_04(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_24                                             0x1809C324
#define  KME_DEHALO3_KME_DEHALO3_24_reg_addr                                     "0xB809C324"
#define  KME_DEHALO3_KME_DEHALO3_24_reg                                          0xB809C324
#define  KME_DEHALO3_KME_DEHALO3_24_inst_addr                                    "0x0006"
#define  set_KME_DEHALO3_KME_DEHALO3_24_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_24_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_24_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_24_reg))
#define  KME_DEHALO3_KME_DEHALO3_24_regr_dh_fb_cnt_05_shift                      (20)
#define  KME_DEHALO3_KME_DEHALO3_24_regr_dh_pfvconf_05_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_24_regr_dh_fb_cnt_05_mask                       (0xFFF00000)
#define  KME_DEHALO3_KME_DEHALO3_24_regr_dh_pfvconf_05_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_24_regr_dh_fb_cnt_05(data)                      (0xFFF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_24_regr_dh_pfvconf_05(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_24_get_regr_dh_fb_cnt_05(data)                  ((0xFFF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_24_get_regr_dh_pfvconf_05(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_28                                             0x1809C328
#define  KME_DEHALO3_KME_DEHALO3_28_reg_addr                                     "0xB809C328"
#define  KME_DEHALO3_KME_DEHALO3_28_reg                                          0xB809C328
#define  KME_DEHALO3_KME_DEHALO3_28_inst_addr                                    "0x0007"
#define  set_KME_DEHALO3_KME_DEHALO3_28_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_28_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_28_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_28_reg))
#define  KME_DEHALO3_KME_DEHALO3_28_regr_dh_fb_cnt_06_shift                      (20)
#define  KME_DEHALO3_KME_DEHALO3_28_regr_dh_pfvconf_06_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_28_regr_dh_fb_cnt_06_mask                       (0xFFF00000)
#define  KME_DEHALO3_KME_DEHALO3_28_regr_dh_pfvconf_06_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_28_regr_dh_fb_cnt_06(data)                      (0xFFF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_28_regr_dh_pfvconf_06(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_28_get_regr_dh_fb_cnt_06(data)                  ((0xFFF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_28_get_regr_dh_pfvconf_06(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_2C                                             0x1809C32C
#define  KME_DEHALO3_KME_DEHALO3_2C_reg_addr                                     "0xB809C32C"
#define  KME_DEHALO3_KME_DEHALO3_2C_reg                                          0xB809C32C
#define  KME_DEHALO3_KME_DEHALO3_2C_inst_addr                                    "0x0008"
#define  set_KME_DEHALO3_KME_DEHALO3_2C_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_2C_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_2C_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_2C_reg))
#define  KME_DEHALO3_KME_DEHALO3_2C_regr_dh_fb_cnt_07_shift                      (20)
#define  KME_DEHALO3_KME_DEHALO3_2C_regr_dh_pfvconf_07_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_2C_regr_dh_fb_cnt_07_mask                       (0xFFF00000)
#define  KME_DEHALO3_KME_DEHALO3_2C_regr_dh_pfvconf_07_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_2C_regr_dh_fb_cnt_07(data)                      (0xFFF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_2C_regr_dh_pfvconf_07(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_2C_get_regr_dh_fb_cnt_07(data)                  ((0xFFF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_2C_get_regr_dh_pfvconf_07(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_30                                             0x1809C330
#define  KME_DEHALO3_KME_DEHALO3_30_reg_addr                                     "0xB809C330"
#define  KME_DEHALO3_KME_DEHALO3_30_reg                                          0xB809C330
#define  KME_DEHALO3_KME_DEHALO3_30_inst_addr                                    "0x0009"
#define  set_KME_DEHALO3_KME_DEHALO3_30_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_30_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_30_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_30_reg))
#define  KME_DEHALO3_KME_DEHALO3_30_regr_dh_fb_cnt_10_shift                      (20)
#define  KME_DEHALO3_KME_DEHALO3_30_regr_dh_pfvconf_10_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_30_regr_dh_fb_cnt_10_mask                       (0xFFF00000)
#define  KME_DEHALO3_KME_DEHALO3_30_regr_dh_pfvconf_10_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_30_regr_dh_fb_cnt_10(data)                      (0xFFF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_30_regr_dh_pfvconf_10(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_30_get_regr_dh_fb_cnt_10(data)                  ((0xFFF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_30_get_regr_dh_pfvconf_10(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_34                                             0x1809C334
#define  KME_DEHALO3_KME_DEHALO3_34_reg_addr                                     "0xB809C334"
#define  KME_DEHALO3_KME_DEHALO3_34_reg                                          0xB809C334
#define  KME_DEHALO3_KME_DEHALO3_34_inst_addr                                    "0x000A"
#define  set_KME_DEHALO3_KME_DEHALO3_34_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_34_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_34_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_34_reg))
#define  KME_DEHALO3_KME_DEHALO3_34_regr_dh_fb_cnt_11_shift                      (20)
#define  KME_DEHALO3_KME_DEHALO3_34_regr_dh_pfvconf_11_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_34_regr_dh_fb_cnt_11_mask                       (0xFFF00000)
#define  KME_DEHALO3_KME_DEHALO3_34_regr_dh_pfvconf_11_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_34_regr_dh_fb_cnt_11(data)                      (0xFFF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_34_regr_dh_pfvconf_11(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_34_get_regr_dh_fb_cnt_11(data)                  ((0xFFF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_34_get_regr_dh_pfvconf_11(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_38                                             0x1809C338
#define  KME_DEHALO3_KME_DEHALO3_38_reg_addr                                     "0xB809C338"
#define  KME_DEHALO3_KME_DEHALO3_38_reg                                          0xB809C338
#define  KME_DEHALO3_KME_DEHALO3_38_inst_addr                                    "0x000B"
#define  set_KME_DEHALO3_KME_DEHALO3_38_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_38_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_38_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_38_reg))
#define  KME_DEHALO3_KME_DEHALO3_38_regr_dh_fb_cnt_12_shift                      (20)
#define  KME_DEHALO3_KME_DEHALO3_38_regr_dh_pfvconf_12_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_38_regr_dh_fb_cnt_12_mask                       (0xFFF00000)
#define  KME_DEHALO3_KME_DEHALO3_38_regr_dh_pfvconf_12_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_38_regr_dh_fb_cnt_12(data)                      (0xFFF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_38_regr_dh_pfvconf_12(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_38_get_regr_dh_fb_cnt_12(data)                  ((0xFFF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_38_get_regr_dh_pfvconf_12(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_3C                                             0x1809C33C
#define  KME_DEHALO3_KME_DEHALO3_3C_reg_addr                                     "0xB809C33C"
#define  KME_DEHALO3_KME_DEHALO3_3C_reg                                          0xB809C33C
#define  KME_DEHALO3_KME_DEHALO3_3C_inst_addr                                    "0x000C"
#define  set_KME_DEHALO3_KME_DEHALO3_3C_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_3C_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_3C_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_3C_reg))
#define  KME_DEHALO3_KME_DEHALO3_3C_regr_dh_fb_cnt_13_shift                      (20)
#define  KME_DEHALO3_KME_DEHALO3_3C_regr_dh_pfvconf_13_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_3C_regr_dh_fb_cnt_13_mask                       (0xFFF00000)
#define  KME_DEHALO3_KME_DEHALO3_3C_regr_dh_pfvconf_13_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_3C_regr_dh_fb_cnt_13(data)                      (0xFFF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_3C_regr_dh_pfvconf_13(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_3C_get_regr_dh_fb_cnt_13(data)                  ((0xFFF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_3C_get_regr_dh_pfvconf_13(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_40                                             0x1809C340
#define  KME_DEHALO3_KME_DEHALO3_40_reg_addr                                     "0xB809C340"
#define  KME_DEHALO3_KME_DEHALO3_40_reg                                          0xB809C340
#define  KME_DEHALO3_KME_DEHALO3_40_inst_addr                                    "0x000D"
#define  set_KME_DEHALO3_KME_DEHALO3_40_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_40_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_40_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_40_reg))
#define  KME_DEHALO3_KME_DEHALO3_40_regr_dh_fb_cnt_14_shift                      (20)
#define  KME_DEHALO3_KME_DEHALO3_40_regr_dh_pfvconf_14_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_40_regr_dh_fb_cnt_14_mask                       (0xFFF00000)
#define  KME_DEHALO3_KME_DEHALO3_40_regr_dh_pfvconf_14_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_40_regr_dh_fb_cnt_14(data)                      (0xFFF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_40_regr_dh_pfvconf_14(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_40_get_regr_dh_fb_cnt_14(data)                  ((0xFFF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_40_get_regr_dh_pfvconf_14(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_44                                             0x1809C344
#define  KME_DEHALO3_KME_DEHALO3_44_reg_addr                                     "0xB809C344"
#define  KME_DEHALO3_KME_DEHALO3_44_reg                                          0xB809C344
#define  KME_DEHALO3_KME_DEHALO3_44_inst_addr                                    "0x000E"
#define  set_KME_DEHALO3_KME_DEHALO3_44_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_44_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_44_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_44_reg))
#define  KME_DEHALO3_KME_DEHALO3_44_regr_dh_fb_cnt_15_shift                      (20)
#define  KME_DEHALO3_KME_DEHALO3_44_regr_dh_pfvconf_15_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_44_regr_dh_fb_cnt_15_mask                       (0xFFF00000)
#define  KME_DEHALO3_KME_DEHALO3_44_regr_dh_pfvconf_15_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_44_regr_dh_fb_cnt_15(data)                      (0xFFF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_44_regr_dh_pfvconf_15(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_44_get_regr_dh_fb_cnt_15(data)                  ((0xFFF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_44_get_regr_dh_pfvconf_15(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_48                                             0x1809C348
#define  KME_DEHALO3_KME_DEHALO3_48_reg_addr                                     "0xB809C348"
#define  KME_DEHALO3_KME_DEHALO3_48_reg                                          0xB809C348
#define  KME_DEHALO3_KME_DEHALO3_48_inst_addr                                    "0x000F"
#define  set_KME_DEHALO3_KME_DEHALO3_48_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_48_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_48_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_48_reg))
#define  KME_DEHALO3_KME_DEHALO3_48_regr_dh_fb_cnt_16_shift                      (20)
#define  KME_DEHALO3_KME_DEHALO3_48_regr_dh_pfvconf_16_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_48_regr_dh_fb_cnt_16_mask                       (0xFFF00000)
#define  KME_DEHALO3_KME_DEHALO3_48_regr_dh_pfvconf_16_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_48_regr_dh_fb_cnt_16(data)                      (0xFFF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_48_regr_dh_pfvconf_16(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_48_get_regr_dh_fb_cnt_16(data)                  ((0xFFF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_48_get_regr_dh_pfvconf_16(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_4C                                             0x1809C34C
#define  KME_DEHALO3_KME_DEHALO3_4C_reg_addr                                     "0xB809C34C"
#define  KME_DEHALO3_KME_DEHALO3_4C_reg                                          0xB809C34C
#define  KME_DEHALO3_KME_DEHALO3_4C_inst_addr                                    "0x0010"
#define  set_KME_DEHALO3_KME_DEHALO3_4C_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_4C_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_4C_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_4C_reg))
#define  KME_DEHALO3_KME_DEHALO3_4C_regr_dh_fb_cnt_17_shift                      (20)
#define  KME_DEHALO3_KME_DEHALO3_4C_regr_dh_pfvconf_17_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_4C_regr_dh_fb_cnt_17_mask                       (0xFFF00000)
#define  KME_DEHALO3_KME_DEHALO3_4C_regr_dh_pfvconf_17_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_4C_regr_dh_fb_cnt_17(data)                      (0xFFF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_4C_regr_dh_pfvconf_17(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_4C_get_regr_dh_fb_cnt_17(data)                  ((0xFFF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_4C_get_regr_dh_pfvconf_17(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_50                                             0x1809C350
#define  KME_DEHALO3_KME_DEHALO3_50_reg_addr                                     "0xB809C350"
#define  KME_DEHALO3_KME_DEHALO3_50_reg                                          0xB809C350
#define  KME_DEHALO3_KME_DEHALO3_50_inst_addr                                    "0x0011"
#define  set_KME_DEHALO3_KME_DEHALO3_50_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_50_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_50_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_50_reg))
#define  KME_DEHALO3_KME_DEHALO3_50_regr_dh_logo_o_row_cnt_shift                 (20)
#define  KME_DEHALO3_KME_DEHALO3_50_regr_dh_pfvconf_20_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_50_regr_dh_logo_o_row_cnt_mask                  (0x3FF00000)
#define  KME_DEHALO3_KME_DEHALO3_50_regr_dh_pfvconf_20_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_50_regr_dh_logo_o_row_cnt(data)                 (0x3FF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_50_regr_dh_pfvconf_20(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_50_get_regr_dh_logo_o_row_cnt(data)             ((0x3FF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_50_get_regr_dh_pfvconf_20(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_54                                             0x1809C354
#define  KME_DEHALO3_KME_DEHALO3_54_reg_addr                                     "0xB809C354"
#define  KME_DEHALO3_KME_DEHALO3_54_reg                                          0xB809C354
#define  KME_DEHALO3_KME_DEHALO3_54_inst_addr                                    "0x0012"
#define  set_KME_DEHALO3_KME_DEHALO3_54_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_54_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_54_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_54_reg))
#define  KME_DEHALO3_KME_DEHALO3_54_regr_dh_logo_o_blk_cnt_shift                 (20)
#define  KME_DEHALO3_KME_DEHALO3_54_regr_dh_pfvconf_21_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_54_regr_dh_logo_o_blk_cnt_mask                  (0x3FF00000)
#define  KME_DEHALO3_KME_DEHALO3_54_regr_dh_pfvconf_21_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_54_regr_dh_logo_o_blk_cnt(data)                 (0x3FF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_54_regr_dh_pfvconf_21(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_54_get_regr_dh_logo_o_blk_cnt(data)             ((0x3FF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_54_get_regr_dh_pfvconf_21(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_58                                             0x1809C358
#define  KME_DEHALO3_KME_DEHALO3_58_reg_addr                                     "0xB809C358"
#define  KME_DEHALO3_KME_DEHALO3_58_reg                                          0xB809C358
#define  KME_DEHALO3_KME_DEHALO3_58_inst_addr                                    "0x0013"
#define  set_KME_DEHALO3_KME_DEHALO3_58_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_58_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_58_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_58_reg))
#define  KME_DEHALO3_KME_DEHALO3_58_regr_dh_out_in_row_cnt_shift                 (20)
#define  KME_DEHALO3_KME_DEHALO3_58_regr_dh_pfvconf_22_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_58_regr_dh_out_in_row_cnt_mask                  (0x3FF00000)
#define  KME_DEHALO3_KME_DEHALO3_58_regr_dh_pfvconf_22_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_58_regr_dh_out_in_row_cnt(data)                 (0x3FF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_58_regr_dh_pfvconf_22(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_58_get_regr_dh_out_in_row_cnt(data)             ((0x3FF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_58_get_regr_dh_pfvconf_22(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_5C                                             0x1809C35C
#define  KME_DEHALO3_KME_DEHALO3_5C_reg_addr                                     "0xB809C35C"
#define  KME_DEHALO3_KME_DEHALO3_5C_reg                                          0xB809C35C
#define  KME_DEHALO3_KME_DEHALO3_5C_inst_addr                                    "0x0014"
#define  set_KME_DEHALO3_KME_DEHALO3_5C_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_5C_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_5C_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_5C_reg))
#define  KME_DEHALO3_KME_DEHALO3_5C_regr_dh_out_in_blk_cnt_shift                 (20)
#define  KME_DEHALO3_KME_DEHALO3_5C_regr_dh_pfvconf_23_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_5C_regr_dh_out_in_blk_cnt_mask                  (0x3FF00000)
#define  KME_DEHALO3_KME_DEHALO3_5C_regr_dh_pfvconf_23_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_5C_regr_dh_out_in_blk_cnt(data)                 (0x3FF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_5C_regr_dh_pfvconf_23(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_5C_get_regr_dh_out_in_blk_cnt(data)             ((0x3FF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_5C_get_regr_dh_pfvconf_23(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_60                                             0x1809C360
#define  KME_DEHALO3_KME_DEHALO3_60_reg_addr                                     "0xB809C360"
#define  KME_DEHALO3_KME_DEHALO3_60_reg                                          0xB809C360
#define  KME_DEHALO3_KME_DEHALO3_60_inst_addr                                    "0x0015"
#define  set_KME_DEHALO3_KME_DEHALO3_60_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_60_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_60_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_60_reg))
#define  KME_DEHALO3_KME_DEHALO3_60_regr_dh_pstflt_out_row_cnt_shift             (20)
#define  KME_DEHALO3_KME_DEHALO3_60_regr_dh_pfvconf_24_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_60_regr_dh_pstflt_out_row_cnt_mask              (0x3FF00000)
#define  KME_DEHALO3_KME_DEHALO3_60_regr_dh_pfvconf_24_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_60_regr_dh_pstflt_out_row_cnt(data)             (0x3FF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_60_regr_dh_pfvconf_24(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_60_get_regr_dh_pstflt_out_row_cnt(data)         ((0x3FF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_60_get_regr_dh_pfvconf_24(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_64                                             0x1809C364
#define  KME_DEHALO3_KME_DEHALO3_64_reg_addr                                     "0xB809C364"
#define  KME_DEHALO3_KME_DEHALO3_64_reg                                          0xB809C364
#define  KME_DEHALO3_KME_DEHALO3_64_inst_addr                                    "0x0016"
#define  set_KME_DEHALO3_KME_DEHALO3_64_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_64_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_64_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_64_reg))
#define  KME_DEHALO3_KME_DEHALO3_64_regr_dh_pstflt_out_blk_cnt_shift             (20)
#define  KME_DEHALO3_KME_DEHALO3_64_regr_dh_pfvconf_25_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_64_regr_dh_pstflt_out_blk_cnt_mask              (0x3FF00000)
#define  KME_DEHALO3_KME_DEHALO3_64_regr_dh_pfvconf_25_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_64_regr_dh_pstflt_out_blk_cnt(data)             (0x3FF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_64_regr_dh_pfvconf_25(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_64_get_regr_dh_pstflt_out_blk_cnt(data)         ((0x3FF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_64_get_regr_dh_pfvconf_25(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_68                                             0x1809C368
#define  KME_DEHALO3_KME_DEHALO3_68_reg_addr                                     "0xB809C368"
#define  KME_DEHALO3_KME_DEHALO3_68_reg                                          0xB809C368
#define  KME_DEHALO3_KME_DEHALO3_68_inst_addr                                    "0x0017"
#define  set_KME_DEHALO3_KME_DEHALO3_68_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_68_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_68_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_68_reg))
#define  KME_DEHALO3_KME_DEHALO3_68_regr_dh_pstflt_in_row_cnt_shift              (20)
#define  KME_DEHALO3_KME_DEHALO3_68_regr_dh_pfvconf_26_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_68_regr_dh_pstflt_in_row_cnt_mask               (0x3FF00000)
#define  KME_DEHALO3_KME_DEHALO3_68_regr_dh_pfvconf_26_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_68_regr_dh_pstflt_in_row_cnt(data)              (0x3FF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_68_regr_dh_pfvconf_26(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_68_get_regr_dh_pstflt_in_row_cnt(data)          ((0x3FF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_68_get_regr_dh_pfvconf_26(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_6C                                             0x1809C36C
#define  KME_DEHALO3_KME_DEHALO3_6C_reg_addr                                     "0xB809C36C"
#define  KME_DEHALO3_KME_DEHALO3_6C_reg                                          0xB809C36C
#define  KME_DEHALO3_KME_DEHALO3_6C_inst_addr                                    "0x0018"
#define  set_KME_DEHALO3_KME_DEHALO3_6C_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_6C_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_6C_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_6C_reg))
#define  KME_DEHALO3_KME_DEHALO3_6C_regr_dh_pstflt_in_blk_cnt_shift              (20)
#define  KME_DEHALO3_KME_DEHALO3_6C_regr_dh_pfvconf_27_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_6C_regr_dh_pstflt_in_blk_cnt_mask               (0x3FF00000)
#define  KME_DEHALO3_KME_DEHALO3_6C_regr_dh_pfvconf_27_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_6C_regr_dh_pstflt_in_blk_cnt(data)              (0x3FF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_6C_regr_dh_pfvconf_27(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_6C_get_regr_dh_pstflt_in_blk_cnt(data)          ((0x3FF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_6C_get_regr_dh_pfvconf_27(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_70                                             0x1809C370
#define  KME_DEHALO3_KME_DEHALO3_70_reg_addr                                     "0xB809C370"
#define  KME_DEHALO3_KME_DEHALO3_70_reg                                          0xB809C370
#define  KME_DEHALO3_KME_DEHALO3_70_inst_addr                                    "0x0019"
#define  set_KME_DEHALO3_KME_DEHALO3_70_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_70_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_70_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_70_reg))
#define  KME_DEHALO3_KME_DEHALO3_70_regr_dh_rt2_in_row_cnt_shift                 (20)
#define  KME_DEHALO3_KME_DEHALO3_70_regr_dh_pfvconf_30_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_70_regr_dh_rt2_in_row_cnt_mask                  (0x3FF00000)
#define  KME_DEHALO3_KME_DEHALO3_70_regr_dh_pfvconf_30_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_70_regr_dh_rt2_in_row_cnt(data)                 (0x3FF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_70_regr_dh_pfvconf_30(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_70_get_regr_dh_rt2_in_row_cnt(data)             ((0x3FF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_70_get_regr_dh_pfvconf_30(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_74                                             0x1809C374
#define  KME_DEHALO3_KME_DEHALO3_74_reg_addr                                     "0xB809C374"
#define  KME_DEHALO3_KME_DEHALO3_74_reg                                          0xB809C374
#define  KME_DEHALO3_KME_DEHALO3_74_inst_addr                                    "0x001A"
#define  set_KME_DEHALO3_KME_DEHALO3_74_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_74_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_74_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_74_reg))
#define  KME_DEHALO3_KME_DEHALO3_74_regr_dh_rt2_in_blk_cnt_shift                 (20)
#define  KME_DEHALO3_KME_DEHALO3_74_regr_dh_pfvconf_31_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_74_regr_dh_rt2_in_blk_cnt_mask                  (0x3FF00000)
#define  KME_DEHALO3_KME_DEHALO3_74_regr_dh_pfvconf_31_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_74_regr_dh_rt2_in_blk_cnt(data)                 (0x3FF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_74_regr_dh_pfvconf_31(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_74_get_regr_dh_rt2_in_blk_cnt(data)             ((0x3FF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_74_get_regr_dh_pfvconf_31(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_78                                             0x1809C378
#define  KME_DEHALO3_KME_DEHALO3_78_reg_addr                                     "0xB809C378"
#define  KME_DEHALO3_KME_DEHALO3_78_reg                                          0xB809C378
#define  KME_DEHALO3_KME_DEHALO3_78_inst_addr                                    "0x001B"
#define  set_KME_DEHALO3_KME_DEHALO3_78_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_78_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_78_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_78_reg))
#define  KME_DEHALO3_KME_DEHALO3_78_regr_dh_pcp_out_row_cnt_shift                (20)
#define  KME_DEHALO3_KME_DEHALO3_78_regr_dh_pfvconf_32_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_78_regr_dh_pcp_out_row_cnt_mask                 (0x3FF00000)
#define  KME_DEHALO3_KME_DEHALO3_78_regr_dh_pfvconf_32_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_78_regr_dh_pcp_out_row_cnt(data)                (0x3FF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_78_regr_dh_pfvconf_32(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_78_get_regr_dh_pcp_out_row_cnt(data)            ((0x3FF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_78_get_regr_dh_pfvconf_32(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_7C                                             0x1809C37C
#define  KME_DEHALO3_KME_DEHALO3_7C_reg_addr                                     "0xB809C37C"
#define  KME_DEHALO3_KME_DEHALO3_7C_reg                                          0xB809C37C
#define  KME_DEHALO3_KME_DEHALO3_7C_inst_addr                                    "0x001C"
#define  set_KME_DEHALO3_KME_DEHALO3_7C_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_7C_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_7C_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_7C_reg))
#define  KME_DEHALO3_KME_DEHALO3_7C_regr_dh_pfvconf_33_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_7C_regr_dh_pfvconf_33_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_7C_regr_dh_pfvconf_33(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_7C_get_regr_dh_pfvconf_33(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_80                                             0x1809C380
#define  KME_DEHALO3_KME_DEHALO3_80_reg_addr                                     "0xB809C380"
#define  KME_DEHALO3_KME_DEHALO3_80_reg                                          0xB809C380
#define  KME_DEHALO3_KME_DEHALO3_80_inst_addr                                    "0x001D"
#define  set_KME_DEHALO3_KME_DEHALO3_80_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_80_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_80_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_80_reg))
#define  KME_DEHALO3_KME_DEHALO3_80_regr_dh_pcp_in_blk_cnt_shift                 (20)
#define  KME_DEHALO3_KME_DEHALO3_80_regr_dh_pfvconf_34_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_80_regr_dh_pcp_in_blk_cnt_mask                  (0x3FF00000)
#define  KME_DEHALO3_KME_DEHALO3_80_regr_dh_pfvconf_34_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_80_regr_dh_pcp_in_blk_cnt(data)                 (0x3FF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_80_regr_dh_pfvconf_34(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_80_get_regr_dh_pcp_in_blk_cnt(data)             ((0x3FF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_80_get_regr_dh_pfvconf_34(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_84                                             0x1809C384
#define  KME_DEHALO3_KME_DEHALO3_84_reg_addr                                     "0xB809C384"
#define  KME_DEHALO3_KME_DEHALO3_84_reg                                          0xB809C384
#define  KME_DEHALO3_KME_DEHALO3_84_inst_addr                                    "0x001E"
#define  set_KME_DEHALO3_KME_DEHALO3_84_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_84_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_84_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_84_reg))
#define  KME_DEHALO3_KME_DEHALO3_84_regr_dh_pcp_in_row_cnt_shift                 (20)
#define  KME_DEHALO3_KME_DEHALO3_84_regr_dh_pfvconf_35_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_84_regr_dh_pcp_in_row_cnt_mask                  (0x3FF00000)
#define  KME_DEHALO3_KME_DEHALO3_84_regr_dh_pfvconf_35_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_84_regr_dh_pcp_in_row_cnt(data)                 (0x3FF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_84_regr_dh_pfvconf_35(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_84_get_regr_dh_pcp_in_row_cnt(data)             ((0x3FF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_84_get_regr_dh_pfvconf_35(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_88                                             0x1809C388
#define  KME_DEHALO3_KME_DEHALO3_88_reg_addr                                     "0xB809C388"
#define  KME_DEHALO3_KME_DEHALO3_88_reg                                          0xB809C388
#define  KME_DEHALO3_KME_DEHALO3_88_inst_addr                                    "0x001F"
#define  set_KME_DEHALO3_KME_DEHALO3_88_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_88_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_88_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_88_reg))
#define  KME_DEHALO3_KME_DEHALO3_88_regr_dh_prepatt_info_blk_cnt_shift           (20)
#define  KME_DEHALO3_KME_DEHALO3_88_regr_dh_pfvconf_36_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_88_regr_dh_prepatt_info_blk_cnt_mask            (0x1FF00000)
#define  KME_DEHALO3_KME_DEHALO3_88_regr_dh_pfvconf_36_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_88_regr_dh_prepatt_info_blk_cnt(data)           (0x1FF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_88_regr_dh_pfvconf_36(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_88_get_regr_dh_prepatt_info_blk_cnt(data)       ((0x1FF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_88_get_regr_dh_pfvconf_36(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_8C                                             0x1809C38C
#define  KME_DEHALO3_KME_DEHALO3_8C_reg_addr                                     "0xB809C38C"
#define  KME_DEHALO3_KME_DEHALO3_8C_reg                                          0xB809C38C
#define  KME_DEHALO3_KME_DEHALO3_8C_inst_addr                                    "0x0020"
#define  set_KME_DEHALO3_KME_DEHALO3_8C_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_8C_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_8C_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_8C_reg))
#define  KME_DEHALO3_KME_DEHALO3_8C_regr_dh_prepatt_info_row_cnt_shift           (20)
#define  KME_DEHALO3_KME_DEHALO3_8C_regr_dh_pfvconf_37_shift                     (0)
#define  KME_DEHALO3_KME_DEHALO3_8C_regr_dh_prepatt_info_row_cnt_mask            (0x1FF00000)
#define  KME_DEHALO3_KME_DEHALO3_8C_regr_dh_pfvconf_37_mask                      (0x000FFFFF)
#define  KME_DEHALO3_KME_DEHALO3_8C_regr_dh_prepatt_info_row_cnt(data)           (0x1FF00000&((data)<<20))
#define  KME_DEHALO3_KME_DEHALO3_8C_regr_dh_pfvconf_37(data)                     (0x000FFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_8C_get_regr_dh_prepatt_info_row_cnt(data)       ((0x1FF00000&(data))>>20)
#define  KME_DEHALO3_KME_DEHALO3_8C_get_regr_dh_pfvconf_37(data)                 (0x000FFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_90                                             0x1809C390
#define  KME_DEHALO3_KME_DEHALO3_90_reg_addr                                     "0xB809C390"
#define  KME_DEHALO3_KME_DEHALO3_90_reg                                          0xB809C390
#define  KME_DEHALO3_KME_DEHALO3_90_inst_addr                                    "0x0021"
#define  set_KME_DEHALO3_KME_DEHALO3_90_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_90_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_90_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_90_reg))
#define  KME_DEHALO3_KME_DEHALO3_90_regr_dh_out_crc_result_shift                 (16)
#define  KME_DEHALO3_KME_DEHALO3_90_regr_dh_in_crc_result_shift                  (0)
#define  KME_DEHALO3_KME_DEHALO3_90_regr_dh_out_crc_result_mask                  (0xFFFF0000)
#define  KME_DEHALO3_KME_DEHALO3_90_regr_dh_in_crc_result_mask                   (0x0000FFFF)
#define  KME_DEHALO3_KME_DEHALO3_90_regr_dh_out_crc_result(data)                 (0xFFFF0000&((data)<<16))
#define  KME_DEHALO3_KME_DEHALO3_90_regr_dh_in_crc_result(data)                  (0x0000FFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_90_get_regr_dh_out_crc_result(data)             ((0xFFFF0000&(data))>>16)
#define  KME_DEHALO3_KME_DEHALO3_90_get_regr_dh_in_crc_result(data)              (0x0000FFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_98                                             0x1809C398
#define  KME_DEHALO3_KME_DEHALO3_98_reg_addr                                     "0xB809C398"
#define  KME_DEHALO3_KME_DEHALO3_98_reg                                          0xB809C398
#define  KME_DEHALO3_KME_DEHALO3_98_inst_addr                                    "0x0022"
#define  set_KME_DEHALO3_KME_DEHALO3_98_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_98_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_98_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_98_reg))
#define  KME_DEHALO3_KME_DEHALO3_98_regr_dh_pcp_out_blk_cnt_shift                (0)
#define  KME_DEHALO3_KME_DEHALO3_98_regr_dh_pcp_out_blk_cnt_mask                 (0x000003FF)
#define  KME_DEHALO3_KME_DEHALO3_98_regr_dh_pcp_out_blk_cnt(data)                (0x000003FF&(data))
#define  KME_DEHALO3_KME_DEHALO3_98_get_regr_dh_pcp_out_blk_cnt(data)            (0x000003FF&(data))

#define  KME_DEHALO3_KME_DEHALO3_A0                                             0x1809C3A0
#define  KME_DEHALO3_KME_DEHALO3_A0_reg_addr                                     "0xB809C3A0"
#define  KME_DEHALO3_KME_DEHALO3_A0_reg                                          0xB809C3A0
#define  KME_DEHALO3_KME_DEHALO3_A0_inst_addr                                    "0x0023"
#define  set_KME_DEHALO3_KME_DEHALO3_A0_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_A0_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_A0_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_A0_reg))
#define  KME_DEHALO3_KME_DEHALO3_A0_regr_dh_readback_dummy0_shift                (0)
#define  KME_DEHALO3_KME_DEHALO3_A0_regr_dh_readback_dummy0_mask                 (0xFFFFFFFF)
#define  KME_DEHALO3_KME_DEHALO3_A0_regr_dh_readback_dummy0(data)                (0xFFFFFFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_A0_get_regr_dh_readback_dummy0(data)            (0xFFFFFFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_A4                                             0x1809C3A4
#define  KME_DEHALO3_KME_DEHALO3_A4_reg_addr                                     "0xB809C3A4"
#define  KME_DEHALO3_KME_DEHALO3_A4_reg                                          0xB809C3A4
#define  KME_DEHALO3_KME_DEHALO3_A4_inst_addr                                    "0x0024"
#define  set_KME_DEHALO3_KME_DEHALO3_A4_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_A4_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_A4_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_A4_reg))
#define  KME_DEHALO3_KME_DEHALO3_A4_regr_dh_out_out_blk_cnt_shift                (10)
#define  KME_DEHALO3_KME_DEHALO3_A4_regr_dh_out_out_row_cnt_shift                (0)
#define  KME_DEHALO3_KME_DEHALO3_A4_regr_dh_out_out_blk_cnt_mask                 (0x000FFC00)
#define  KME_DEHALO3_KME_DEHALO3_A4_regr_dh_out_out_row_cnt_mask                 (0x000003FF)
#define  KME_DEHALO3_KME_DEHALO3_A4_regr_dh_out_out_blk_cnt(data)                (0x000FFC00&((data)<<10))
#define  KME_DEHALO3_KME_DEHALO3_A4_regr_dh_out_out_row_cnt(data)                (0x000003FF&(data))
#define  KME_DEHALO3_KME_DEHALO3_A4_get_regr_dh_out_out_blk_cnt(data)            ((0x000FFC00&(data))>>10)
#define  KME_DEHALO3_KME_DEHALO3_A4_get_regr_dh_out_out_row_cnt(data)            (0x000003FF&(data))

#define  KME_DEHALO3_KME_DEHALO3_B0                                             0x1809C3B0
#define  KME_DEHALO3_KME_DEHALO3_B0_reg_addr                                     "0xB809C3B0"
#define  KME_DEHALO3_KME_DEHALO3_B0_reg                                          0xB809C3B0
#define  KME_DEHALO3_KME_DEHALO3_B0_inst_addr                                    "0x0025"
#define  set_KME_DEHALO3_KME_DEHALO3_B0_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_B0_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_B0_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_B0_reg))
#define  KME_DEHALO3_KME_DEHALO3_B0_regr_dh_logo_rdbk_01_shift                   (16)
#define  KME_DEHALO3_KME_DEHALO3_B0_regr_dh_logo_rdbk_00_shift                   (0)
#define  KME_DEHALO3_KME_DEHALO3_B0_regr_dh_logo_rdbk_01_mask                    (0xFFFF0000)
#define  KME_DEHALO3_KME_DEHALO3_B0_regr_dh_logo_rdbk_00_mask                    (0x0000FFFF)
#define  KME_DEHALO3_KME_DEHALO3_B0_regr_dh_logo_rdbk_01(data)                   (0xFFFF0000&((data)<<16))
#define  KME_DEHALO3_KME_DEHALO3_B0_regr_dh_logo_rdbk_00(data)                   (0x0000FFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_B0_get_regr_dh_logo_rdbk_01(data)               ((0xFFFF0000&(data))>>16)
#define  KME_DEHALO3_KME_DEHALO3_B0_get_regr_dh_logo_rdbk_00(data)               (0x0000FFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_B4                                             0x1809C3B4
#define  KME_DEHALO3_KME_DEHALO3_B4_reg_addr                                     "0xB809C3B4"
#define  KME_DEHALO3_KME_DEHALO3_B4_reg                                          0xB809C3B4
#define  KME_DEHALO3_KME_DEHALO3_B4_inst_addr                                    "0x0026"
#define  set_KME_DEHALO3_KME_DEHALO3_B4_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_B4_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_B4_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_B4_reg))
#define  KME_DEHALO3_KME_DEHALO3_B4_regr_dh_logo_rdbk_03_shift                   (16)
#define  KME_DEHALO3_KME_DEHALO3_B4_regr_dh_logo_rdbk_02_shift                   (0)
#define  KME_DEHALO3_KME_DEHALO3_B4_regr_dh_logo_rdbk_03_mask                    (0xFFFF0000)
#define  KME_DEHALO3_KME_DEHALO3_B4_regr_dh_logo_rdbk_02_mask                    (0x0000FFFF)
#define  KME_DEHALO3_KME_DEHALO3_B4_regr_dh_logo_rdbk_03(data)                   (0xFFFF0000&((data)<<16))
#define  KME_DEHALO3_KME_DEHALO3_B4_regr_dh_logo_rdbk_02(data)                   (0x0000FFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_B4_get_regr_dh_logo_rdbk_03(data)               ((0xFFFF0000&(data))>>16)
#define  KME_DEHALO3_KME_DEHALO3_B4_get_regr_dh_logo_rdbk_02(data)               (0x0000FFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_B8                                             0x1809C3B8
#define  KME_DEHALO3_KME_DEHALO3_B8_reg_addr                                     "0xB809C3B8"
#define  KME_DEHALO3_KME_DEHALO3_B8_reg                                          0xB809C3B8
#define  KME_DEHALO3_KME_DEHALO3_B8_inst_addr                                    "0x0027"
#define  set_KME_DEHALO3_KME_DEHALO3_B8_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_B8_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_B8_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_B8_reg))
#define  KME_DEHALO3_KME_DEHALO3_B8_regr_dh_logo_rdbk_10_shift                   (16)
#define  KME_DEHALO3_KME_DEHALO3_B8_regr_dh_logo_rdbk_04_shift                   (0)
#define  KME_DEHALO3_KME_DEHALO3_B8_regr_dh_logo_rdbk_10_mask                    (0xFFFF0000)
#define  KME_DEHALO3_KME_DEHALO3_B8_regr_dh_logo_rdbk_04_mask                    (0x0000FFFF)
#define  KME_DEHALO3_KME_DEHALO3_B8_regr_dh_logo_rdbk_10(data)                   (0xFFFF0000&((data)<<16))
#define  KME_DEHALO3_KME_DEHALO3_B8_regr_dh_logo_rdbk_04(data)                   (0x0000FFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_B8_get_regr_dh_logo_rdbk_10(data)               ((0xFFFF0000&(data))>>16)
#define  KME_DEHALO3_KME_DEHALO3_B8_get_regr_dh_logo_rdbk_04(data)               (0x0000FFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_BC                                             0x1809C3BC
#define  KME_DEHALO3_KME_DEHALO3_BC_reg_addr                                     "0xB809C3BC"
#define  KME_DEHALO3_KME_DEHALO3_BC_reg                                          0xB809C3BC
#define  KME_DEHALO3_KME_DEHALO3_BC_inst_addr                                    "0x0028"
#define  set_KME_DEHALO3_KME_DEHALO3_BC_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_BC_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_BC_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_BC_reg))
#define  KME_DEHALO3_KME_DEHALO3_BC_regr_dh_logo_rdbk_12_shift                   (16)
#define  KME_DEHALO3_KME_DEHALO3_BC_regr_dh_logo_rdbk_11_shift                   (0)
#define  KME_DEHALO3_KME_DEHALO3_BC_regr_dh_logo_rdbk_12_mask                    (0xFFFF0000)
#define  KME_DEHALO3_KME_DEHALO3_BC_regr_dh_logo_rdbk_11_mask                    (0x0000FFFF)
#define  KME_DEHALO3_KME_DEHALO3_BC_regr_dh_logo_rdbk_12(data)                   (0xFFFF0000&((data)<<16))
#define  KME_DEHALO3_KME_DEHALO3_BC_regr_dh_logo_rdbk_11(data)                   (0x0000FFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_BC_get_regr_dh_logo_rdbk_12(data)               ((0xFFFF0000&(data))>>16)
#define  KME_DEHALO3_KME_DEHALO3_BC_get_regr_dh_logo_rdbk_11(data)               (0x0000FFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_C0                                             0x1809C3C0
#define  KME_DEHALO3_KME_DEHALO3_C0_reg_addr                                     "0xB809C3C0"
#define  KME_DEHALO3_KME_DEHALO3_C0_reg                                          0xB809C3C0
#define  KME_DEHALO3_KME_DEHALO3_C0_inst_addr                                    "0x0029"
#define  set_KME_DEHALO3_KME_DEHALO3_C0_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_C0_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_C0_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_C0_reg))
#define  KME_DEHALO3_KME_DEHALO3_C0_regr_dh_logo_rdbk_14_shift                   (16)
#define  KME_DEHALO3_KME_DEHALO3_C0_regr_dh_logo_rdbk_13_shift                   (0)
#define  KME_DEHALO3_KME_DEHALO3_C0_regr_dh_logo_rdbk_14_mask                    (0xFFFF0000)
#define  KME_DEHALO3_KME_DEHALO3_C0_regr_dh_logo_rdbk_13_mask                    (0x0000FFFF)
#define  KME_DEHALO3_KME_DEHALO3_C0_regr_dh_logo_rdbk_14(data)                   (0xFFFF0000&((data)<<16))
#define  KME_DEHALO3_KME_DEHALO3_C0_regr_dh_logo_rdbk_13(data)                   (0x0000FFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_C0_get_regr_dh_logo_rdbk_14(data)               ((0xFFFF0000&(data))>>16)
#define  KME_DEHALO3_KME_DEHALO3_C0_get_regr_dh_logo_rdbk_13(data)               (0x0000FFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_C4                                             0x1809C3C4
#define  KME_DEHALO3_KME_DEHALO3_C4_reg_addr                                     "0xB809C3C4"
#define  KME_DEHALO3_KME_DEHALO3_C4_reg                                          0xB809C3C4
#define  KME_DEHALO3_KME_DEHALO3_C4_inst_addr                                    "0x002A"
#define  set_KME_DEHALO3_KME_DEHALO3_C4_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_C4_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_C4_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_C4_reg))
#define  KME_DEHALO3_KME_DEHALO3_C4_regr_dh_logo_rdbk_21_shift                   (16)
#define  KME_DEHALO3_KME_DEHALO3_C4_regr_dh_logo_rdbk_20_shift                   (0)
#define  KME_DEHALO3_KME_DEHALO3_C4_regr_dh_logo_rdbk_21_mask                    (0xFFFF0000)
#define  KME_DEHALO3_KME_DEHALO3_C4_regr_dh_logo_rdbk_20_mask                    (0x0000FFFF)
#define  KME_DEHALO3_KME_DEHALO3_C4_regr_dh_logo_rdbk_21(data)                   (0xFFFF0000&((data)<<16))
#define  KME_DEHALO3_KME_DEHALO3_C4_regr_dh_logo_rdbk_20(data)                   (0x0000FFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_C4_get_regr_dh_logo_rdbk_21(data)               ((0xFFFF0000&(data))>>16)
#define  KME_DEHALO3_KME_DEHALO3_C4_get_regr_dh_logo_rdbk_20(data)               (0x0000FFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_C8                                             0x1809C3C8
#define  KME_DEHALO3_KME_DEHALO3_C8_reg_addr                                     "0xB809C3C8"
#define  KME_DEHALO3_KME_DEHALO3_C8_reg                                          0xB809C3C8
#define  KME_DEHALO3_KME_DEHALO3_C8_inst_addr                                    "0x002B"
#define  set_KME_DEHALO3_KME_DEHALO3_C8_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_C8_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_C8_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_C8_reg))
#define  KME_DEHALO3_KME_DEHALO3_C8_regr_dh_logo_rdbk_23_shift                   (16)
#define  KME_DEHALO3_KME_DEHALO3_C8_regr_dh_logo_rdbk_22_shift                   (0)
#define  KME_DEHALO3_KME_DEHALO3_C8_regr_dh_logo_rdbk_23_mask                    (0xFFFF0000)
#define  KME_DEHALO3_KME_DEHALO3_C8_regr_dh_logo_rdbk_22_mask                    (0x0000FFFF)
#define  KME_DEHALO3_KME_DEHALO3_C8_regr_dh_logo_rdbk_23(data)                   (0xFFFF0000&((data)<<16))
#define  KME_DEHALO3_KME_DEHALO3_C8_regr_dh_logo_rdbk_22(data)                   (0x0000FFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_C8_get_regr_dh_logo_rdbk_23(data)               ((0xFFFF0000&(data))>>16)
#define  KME_DEHALO3_KME_DEHALO3_C8_get_regr_dh_logo_rdbk_22(data)               (0x0000FFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_CC                                             0x1809C3CC
#define  KME_DEHALO3_KME_DEHALO3_CC_reg_addr                                     "0xB809C3CC"
#define  KME_DEHALO3_KME_DEHALO3_CC_reg                                          0xB809C3CC
#define  KME_DEHALO3_KME_DEHALO3_CC_inst_addr                                    "0x002C"
#define  set_KME_DEHALO3_KME_DEHALO3_CC_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_CC_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_CC_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_CC_reg))
#define  KME_DEHALO3_KME_DEHALO3_CC_regr_dh_logo_rdbk_24_shift                   (0)
#define  KME_DEHALO3_KME_DEHALO3_CC_regr_dh_logo_rdbk_24_mask                    (0x0000FFFF)
#define  KME_DEHALO3_KME_DEHALO3_CC_regr_dh_logo_rdbk_24(data)                   (0x0000FFFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_CC_get_regr_dh_logo_rdbk_24(data)               (0x0000FFFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_D0                                             0x1809C3D0
#define  KME_DEHALO3_KME_DEHALO3_D0_reg_addr                                     "0xB809C3D0"
#define  KME_DEHALO3_KME_DEHALO3_D0_reg                                          0xB809C3D0
#define  KME_DEHALO3_KME_DEHALO3_D0_inst_addr                                    "0x002D"
#define  set_KME_DEHALO3_KME_DEHALO3_D0_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_D0_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_D0_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_D0_reg))
#define  KME_DEHALO3_KME_DEHALO3_D0_regr_dh_rt1_row_num_rdbk_shift               (9)
#define  KME_DEHALO3_KME_DEHALO3_D0_regr_dh_rt1_blk_num_rdbk_shift               (0)
#define  KME_DEHALO3_KME_DEHALO3_D0_regr_dh_rt1_row_num_rdbk_mask                (0x0003FE00)
#define  KME_DEHALO3_KME_DEHALO3_D0_regr_dh_rt1_blk_num_rdbk_mask                (0x000001FF)
#define  KME_DEHALO3_KME_DEHALO3_D0_regr_dh_rt1_row_num_rdbk(data)               (0x0003FE00&((data)<<9))
#define  KME_DEHALO3_KME_DEHALO3_D0_regr_dh_rt1_blk_num_rdbk(data)               (0x000001FF&(data))
#define  KME_DEHALO3_KME_DEHALO3_D0_get_regr_dh_rt1_row_num_rdbk(data)           ((0x0003FE00&(data))>>9)
#define  KME_DEHALO3_KME_DEHALO3_D0_get_regr_dh_rt1_blk_num_rdbk(data)           (0x000001FF&(data))

#define  KME_DEHALO3_KME_DEHALO3_D4                                             0x1809C3D4
#define  KME_DEHALO3_KME_DEHALO3_D4_reg_addr                                     "0xB809C3D4"
#define  KME_DEHALO3_KME_DEHALO3_D4_reg                                          0xB809C3D4
#define  KME_DEHALO3_KME_DEHALO3_D4_inst_addr                                    "0x002E"
#define  set_KME_DEHALO3_KME_DEHALO3_D4_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_D4_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_D4_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_D4_reg))
#define  KME_DEHALO3_KME_DEHALO3_D4_regr_dh_input_blk_cnt_shift                  (10)
#define  KME_DEHALO3_KME_DEHALO3_D4_regr_dh_input_row_cnt_shift                  (0)
#define  KME_DEHALO3_KME_DEHALO3_D4_regr_dh_input_blk_cnt_mask                   (0x000FFC00)
#define  KME_DEHALO3_KME_DEHALO3_D4_regr_dh_input_row_cnt_mask                   (0x000003FF)
#define  KME_DEHALO3_KME_DEHALO3_D4_regr_dh_input_blk_cnt(data)                  (0x000FFC00&((data)<<10))
#define  KME_DEHALO3_KME_DEHALO3_D4_regr_dh_input_row_cnt(data)                  (0x000003FF&(data))
#define  KME_DEHALO3_KME_DEHALO3_D4_get_regr_dh_input_blk_cnt(data)              ((0x000FFC00&(data))>>10)
#define  KME_DEHALO3_KME_DEHALO3_D4_get_regr_dh_input_row_cnt(data)              (0x000003FF&(data))

#define  KME_DEHALO3_KME_DEHALO3_D8                                             0x1809C3D8
#define  KME_DEHALO3_KME_DEHALO3_D8_reg_addr                                     "0xB809C3D8"
#define  KME_DEHALO3_KME_DEHALO3_D8_reg                                          0xB809C3D8
#define  KME_DEHALO3_KME_DEHALO3_D8_inst_addr                                    "0x002F"
#define  set_KME_DEHALO3_KME_DEHALO3_D8_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_D8_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_D8_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_D8_reg))
#define  KME_DEHALO3_KME_DEHALO3_D8_regr_dh_fb_cnt_21_shift                      (12)
#define  KME_DEHALO3_KME_DEHALO3_D8_regr_dh_fb_cnt_20_shift                      (0)
#define  KME_DEHALO3_KME_DEHALO3_D8_regr_dh_fb_cnt_21_mask                       (0x00FFF000)
#define  KME_DEHALO3_KME_DEHALO3_D8_regr_dh_fb_cnt_20_mask                       (0x00000FFF)
#define  KME_DEHALO3_KME_DEHALO3_D8_regr_dh_fb_cnt_21(data)                      (0x00FFF000&((data)<<12))
#define  KME_DEHALO3_KME_DEHALO3_D8_regr_dh_fb_cnt_20(data)                      (0x00000FFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_D8_get_regr_dh_fb_cnt_21(data)                  ((0x00FFF000&(data))>>12)
#define  KME_DEHALO3_KME_DEHALO3_D8_get_regr_dh_fb_cnt_20(data)                  (0x00000FFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_DC                                             0x1809C3DC
#define  KME_DEHALO3_KME_DEHALO3_DC_reg_addr                                     "0xB809C3DC"
#define  KME_DEHALO3_KME_DEHALO3_DC_reg                                          0xB809C3DC
#define  KME_DEHALO3_KME_DEHALO3_DC_inst_addr                                    "0x0030"
#define  set_KME_DEHALO3_KME_DEHALO3_DC_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_DC_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_DC_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_DC_reg))
#define  KME_DEHALO3_KME_DEHALO3_DC_regr_dh_fb_cnt_23_shift                      (12)
#define  KME_DEHALO3_KME_DEHALO3_DC_regr_dh_fb_cnt_22_shift                      (0)
#define  KME_DEHALO3_KME_DEHALO3_DC_regr_dh_fb_cnt_23_mask                       (0x00FFF000)
#define  KME_DEHALO3_KME_DEHALO3_DC_regr_dh_fb_cnt_22_mask                       (0x00000FFF)
#define  KME_DEHALO3_KME_DEHALO3_DC_regr_dh_fb_cnt_23(data)                      (0x00FFF000&((data)<<12))
#define  KME_DEHALO3_KME_DEHALO3_DC_regr_dh_fb_cnt_22(data)                      (0x00000FFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_DC_get_regr_dh_fb_cnt_23(data)                  ((0x00FFF000&(data))>>12)
#define  KME_DEHALO3_KME_DEHALO3_DC_get_regr_dh_fb_cnt_22(data)                  (0x00000FFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_E0                                             0x1809C3E0
#define  KME_DEHALO3_KME_DEHALO3_E0_reg_addr                                     "0xB809C3E0"
#define  KME_DEHALO3_KME_DEHALO3_E0_reg                                          0xB809C3E0
#define  KME_DEHALO3_KME_DEHALO3_E0_inst_addr                                    "0x0031"
#define  set_KME_DEHALO3_KME_DEHALO3_E0_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_E0_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_E0_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_E0_reg))
#define  KME_DEHALO3_KME_DEHALO3_E0_regr_dh_fb_cnt_25_shift                      (12)
#define  KME_DEHALO3_KME_DEHALO3_E0_regr_dh_fb_cnt_24_shift                      (0)
#define  KME_DEHALO3_KME_DEHALO3_E0_regr_dh_fb_cnt_25_mask                       (0x00FFF000)
#define  KME_DEHALO3_KME_DEHALO3_E0_regr_dh_fb_cnt_24_mask                       (0x00000FFF)
#define  KME_DEHALO3_KME_DEHALO3_E0_regr_dh_fb_cnt_25(data)                      (0x00FFF000&((data)<<12))
#define  KME_DEHALO3_KME_DEHALO3_E0_regr_dh_fb_cnt_24(data)                      (0x00000FFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_E0_get_regr_dh_fb_cnt_25(data)                  ((0x00FFF000&(data))>>12)
#define  KME_DEHALO3_KME_DEHALO3_E0_get_regr_dh_fb_cnt_24(data)                  (0x00000FFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_E4                                             0x1809C3E4
#define  KME_DEHALO3_KME_DEHALO3_E4_reg_addr                                     "0xB809C3E4"
#define  KME_DEHALO3_KME_DEHALO3_E4_reg                                          0xB809C3E4
#define  KME_DEHALO3_KME_DEHALO3_E4_inst_addr                                    "0x0032"
#define  set_KME_DEHALO3_KME_DEHALO3_E4_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_E4_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_E4_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_E4_reg))
#define  KME_DEHALO3_KME_DEHALO3_E4_regr_dh_fb_cnt_27_shift                      (12)
#define  KME_DEHALO3_KME_DEHALO3_E4_regr_dh_fb_cnt_26_shift                      (0)
#define  KME_DEHALO3_KME_DEHALO3_E4_regr_dh_fb_cnt_27_mask                       (0x00FFF000)
#define  KME_DEHALO3_KME_DEHALO3_E4_regr_dh_fb_cnt_26_mask                       (0x00000FFF)
#define  KME_DEHALO3_KME_DEHALO3_E4_regr_dh_fb_cnt_27(data)                      (0x00FFF000&((data)<<12))
#define  KME_DEHALO3_KME_DEHALO3_E4_regr_dh_fb_cnt_26(data)                      (0x00000FFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_E4_get_regr_dh_fb_cnt_27(data)                  ((0x00FFF000&(data))>>12)
#define  KME_DEHALO3_KME_DEHALO3_E4_get_regr_dh_fb_cnt_26(data)                  (0x00000FFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_E8                                             0x1809C3E8
#define  KME_DEHALO3_KME_DEHALO3_E8_reg_addr                                     "0xB809C3E8"
#define  KME_DEHALO3_KME_DEHALO3_E8_reg                                          0xB809C3E8
#define  KME_DEHALO3_KME_DEHALO3_E8_inst_addr                                    "0x0033"
#define  set_KME_DEHALO3_KME_DEHALO3_E8_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_E8_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_E8_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_E8_reg))
#define  KME_DEHALO3_KME_DEHALO3_E8_regr_dh_fb_cnt_31_shift                      (12)
#define  KME_DEHALO3_KME_DEHALO3_E8_regr_dh_fb_cnt_30_shift                      (0)
#define  KME_DEHALO3_KME_DEHALO3_E8_regr_dh_fb_cnt_31_mask                       (0x00FFF000)
#define  KME_DEHALO3_KME_DEHALO3_E8_regr_dh_fb_cnt_30_mask                       (0x00000FFF)
#define  KME_DEHALO3_KME_DEHALO3_E8_regr_dh_fb_cnt_31(data)                      (0x00FFF000&((data)<<12))
#define  KME_DEHALO3_KME_DEHALO3_E8_regr_dh_fb_cnt_30(data)                      (0x00000FFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_E8_get_regr_dh_fb_cnt_31(data)                  ((0x00FFF000&(data))>>12)
#define  KME_DEHALO3_KME_DEHALO3_E8_get_regr_dh_fb_cnt_30(data)                  (0x00000FFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_EC                                             0x1809C3EC
#define  KME_DEHALO3_KME_DEHALO3_EC_reg_addr                                     "0xB809C3EC"
#define  KME_DEHALO3_KME_DEHALO3_EC_reg                                          0xB809C3EC
#define  KME_DEHALO3_KME_DEHALO3_EC_inst_addr                                    "0x0034"
#define  set_KME_DEHALO3_KME_DEHALO3_EC_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_EC_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_EC_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_EC_reg))
#define  KME_DEHALO3_KME_DEHALO3_EC_regr_dh_fb_cnt_33_shift                      (12)
#define  KME_DEHALO3_KME_DEHALO3_EC_regr_dh_fb_cnt_32_shift                      (0)
#define  KME_DEHALO3_KME_DEHALO3_EC_regr_dh_fb_cnt_33_mask                       (0x00FFF000)
#define  KME_DEHALO3_KME_DEHALO3_EC_regr_dh_fb_cnt_32_mask                       (0x00000FFF)
#define  KME_DEHALO3_KME_DEHALO3_EC_regr_dh_fb_cnt_33(data)                      (0x00FFF000&((data)<<12))
#define  KME_DEHALO3_KME_DEHALO3_EC_regr_dh_fb_cnt_32(data)                      (0x00000FFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_EC_get_regr_dh_fb_cnt_33(data)                  ((0x00FFF000&(data))>>12)
#define  KME_DEHALO3_KME_DEHALO3_EC_get_regr_dh_fb_cnt_32(data)                  (0x00000FFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_F0                                             0x1809C3F0
#define  KME_DEHALO3_KME_DEHALO3_F0_reg_addr                                     "0xB809C3F0"
#define  KME_DEHALO3_KME_DEHALO3_F0_reg                                          0xB809C3F0
#define  KME_DEHALO3_KME_DEHALO3_F0_inst_addr                                    "0x0035"
#define  set_KME_DEHALO3_KME_DEHALO3_F0_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_F0_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_F0_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_F0_reg))
#define  KME_DEHALO3_KME_DEHALO3_F0_regr_dh_fb_cnt_35_shift                      (12)
#define  KME_DEHALO3_KME_DEHALO3_F0_regr_dh_fb_cnt_34_shift                      (0)
#define  KME_DEHALO3_KME_DEHALO3_F0_regr_dh_fb_cnt_35_mask                       (0x00FFF000)
#define  KME_DEHALO3_KME_DEHALO3_F0_regr_dh_fb_cnt_34_mask                       (0x00000FFF)
#define  KME_DEHALO3_KME_DEHALO3_F0_regr_dh_fb_cnt_35(data)                      (0x00FFF000&((data)<<12))
#define  KME_DEHALO3_KME_DEHALO3_F0_regr_dh_fb_cnt_34(data)                      (0x00000FFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_F0_get_regr_dh_fb_cnt_35(data)                  ((0x00FFF000&(data))>>12)
#define  KME_DEHALO3_KME_DEHALO3_F0_get_regr_dh_fb_cnt_34(data)                  (0x00000FFF&(data))

#define  KME_DEHALO3_KME_DEHALO3_F4                                             0x1809C3F4
#define  KME_DEHALO3_KME_DEHALO3_F4_reg_addr                                     "0xB809C3F4"
#define  KME_DEHALO3_KME_DEHALO3_F4_reg                                          0xB809C3F4
#define  KME_DEHALO3_KME_DEHALO3_F4_inst_addr                                    "0x0036"
#define  set_KME_DEHALO3_KME_DEHALO3_F4_reg(data)                                (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_F4_reg)=data)
#define  get_KME_DEHALO3_KME_DEHALO3_F4_reg                                      (*((volatile unsigned int*)KME_DEHALO3_KME_DEHALO3_F4_reg))
#define  KME_DEHALO3_KME_DEHALO3_F4_regr_dh_fb_cnt_37_shift                      (12)
#define  KME_DEHALO3_KME_DEHALO3_F4_regr_dh_fb_cnt_36_shift                      (0)
#define  KME_DEHALO3_KME_DEHALO3_F4_regr_dh_fb_cnt_37_mask                       (0x00FFF000)
#define  KME_DEHALO3_KME_DEHALO3_F4_regr_dh_fb_cnt_36_mask                       (0x00000FFF)
#define  KME_DEHALO3_KME_DEHALO3_F4_regr_dh_fb_cnt_37(data)                      (0x00FFF000&((data)<<12))
#define  KME_DEHALO3_KME_DEHALO3_F4_regr_dh_fb_cnt_36(data)                      (0x00000FFF&(data))
#define  KME_DEHALO3_KME_DEHALO3_F4_get_regr_dh_fb_cnt_37(data)                  ((0x00FFF000&(data))>>12)
#define  KME_DEHALO3_KME_DEHALO3_F4_get_regr_dh_fb_cnt_36(data)                  (0x00000FFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_DEHALO3 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  dh_sta_fb_lvl_thr:8;
        RBus_UInt32  dh_sta_fb_lvl_sta_en:1;
        RBus_UInt32  dh_pfvconf_statis_en:1;
    };
}kme_dehalo3_kme_dehalo3_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_00:12;
        RBus_UInt32  regr_dh_pfvconf_00:20;
    };
}kme_dehalo3_kme_dehalo3_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_01:12;
        RBus_UInt32  regr_dh_pfvconf_01:20;
    };
}kme_dehalo3_kme_dehalo3_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_02:12;
        RBus_UInt32  regr_dh_pfvconf_02:20;
    };
}kme_dehalo3_kme_dehalo3_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_03:12;
        RBus_UInt32  regr_dh_pfvconf_03:20;
    };
}kme_dehalo3_kme_dehalo3_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_04:12;
        RBus_UInt32  regr_dh_pfvconf_04:20;
    };
}kme_dehalo3_kme_dehalo3_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_05:12;
        RBus_UInt32  regr_dh_pfvconf_05:20;
    };
}kme_dehalo3_kme_dehalo3_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_06:12;
        RBus_UInt32  regr_dh_pfvconf_06:20;
    };
}kme_dehalo3_kme_dehalo3_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_07:12;
        RBus_UInt32  regr_dh_pfvconf_07:20;
    };
}kme_dehalo3_kme_dehalo3_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_10:12;
        RBus_UInt32  regr_dh_pfvconf_10:20;
    };
}kme_dehalo3_kme_dehalo3_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_11:12;
        RBus_UInt32  regr_dh_pfvconf_11:20;
    };
}kme_dehalo3_kme_dehalo3_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_12:12;
        RBus_UInt32  regr_dh_pfvconf_12:20;
    };
}kme_dehalo3_kme_dehalo3_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_13:12;
        RBus_UInt32  regr_dh_pfvconf_13:20;
    };
}kme_dehalo3_kme_dehalo3_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_14:12;
        RBus_UInt32  regr_dh_pfvconf_14:20;
    };
}kme_dehalo3_kme_dehalo3_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_15:12;
        RBus_UInt32  regr_dh_pfvconf_15:20;
    };
}kme_dehalo3_kme_dehalo3_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_16:12;
        RBus_UInt32  regr_dh_pfvconf_16:20;
    };
}kme_dehalo3_kme_dehalo3_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_17:12;
        RBus_UInt32  regr_dh_pfvconf_17:20;
    };
}kme_dehalo3_kme_dehalo3_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_dh_logo_o_row_cnt:10;
        RBus_UInt32  regr_dh_pfvconf_20:20;
    };
}kme_dehalo3_kme_dehalo3_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_dh_logo_o_blk_cnt:10;
        RBus_UInt32  regr_dh_pfvconf_21:20;
    };
}kme_dehalo3_kme_dehalo3_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_dh_out_in_row_cnt:10;
        RBus_UInt32  regr_dh_pfvconf_22:20;
    };
}kme_dehalo3_kme_dehalo3_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_dh_out_in_blk_cnt:10;
        RBus_UInt32  regr_dh_pfvconf_23:20;
    };
}kme_dehalo3_kme_dehalo3_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_dh_pstflt_out_row_cnt:10;
        RBus_UInt32  regr_dh_pfvconf_24:20;
    };
}kme_dehalo3_kme_dehalo3_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_dh_pstflt_out_blk_cnt:10;
        RBus_UInt32  regr_dh_pfvconf_25:20;
    };
}kme_dehalo3_kme_dehalo3_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_dh_pstflt_in_row_cnt:10;
        RBus_UInt32  regr_dh_pfvconf_26:20;
    };
}kme_dehalo3_kme_dehalo3_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_dh_pstflt_in_blk_cnt:10;
        RBus_UInt32  regr_dh_pfvconf_27:20;
    };
}kme_dehalo3_kme_dehalo3_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_dh_rt2_in_row_cnt:10;
        RBus_UInt32  regr_dh_pfvconf_30:20;
    };
}kme_dehalo3_kme_dehalo3_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_dh_rt2_in_blk_cnt:10;
        RBus_UInt32  regr_dh_pfvconf_31:20;
    };
}kme_dehalo3_kme_dehalo3_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_dh_pcp_out_row_cnt:10;
        RBus_UInt32  regr_dh_pfvconf_32:20;
    };
}kme_dehalo3_kme_dehalo3_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_dh_pfvconf_33:20;
    };
}kme_dehalo3_kme_dehalo3_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_dh_pcp_in_blk_cnt:10;
        RBus_UInt32  regr_dh_pfvconf_34:20;
    };
}kme_dehalo3_kme_dehalo3_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_dh_pcp_in_row_cnt:10;
        RBus_UInt32  regr_dh_pfvconf_35:20;
    };
}kme_dehalo3_kme_dehalo3_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  regr_dh_prepatt_info_blk_cnt:9;
        RBus_UInt32  regr_dh_pfvconf_36:20;
    };
}kme_dehalo3_kme_dehalo3_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  regr_dh_prepatt_info_row_cnt:9;
        RBus_UInt32  regr_dh_pfvconf_37:20;
    };
}kme_dehalo3_kme_dehalo3_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_out_crc_result:16;
        RBus_UInt32  regr_dh_in_crc_result:16;
    };
}kme_dehalo3_kme_dehalo3_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  regr_dh_pcp_out_blk_cnt:10;
    };
}kme_dehalo3_kme_dehalo3_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_readback_dummy0:32;
    };
}kme_dehalo3_kme_dehalo3_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_dh_out_out_blk_cnt:10;
        RBus_UInt32  regr_dh_out_out_row_cnt:10;
    };
}kme_dehalo3_kme_dehalo3_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_logo_rdbk_01:16;
        RBus_UInt32  regr_dh_logo_rdbk_00:16;
    };
}kme_dehalo3_kme_dehalo3_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_logo_rdbk_03:16;
        RBus_UInt32  regr_dh_logo_rdbk_02:16;
    };
}kme_dehalo3_kme_dehalo3_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_logo_rdbk_10:16;
        RBus_UInt32  regr_dh_logo_rdbk_04:16;
    };
}kme_dehalo3_kme_dehalo3_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_logo_rdbk_12:16;
        RBus_UInt32  regr_dh_logo_rdbk_11:16;
    };
}kme_dehalo3_kme_dehalo3_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_logo_rdbk_14:16;
        RBus_UInt32  regr_dh_logo_rdbk_13:16;
    };
}kme_dehalo3_kme_dehalo3_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_logo_rdbk_21:16;
        RBus_UInt32  regr_dh_logo_rdbk_20:16;
    };
}kme_dehalo3_kme_dehalo3_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_logo_rdbk_23:16;
        RBus_UInt32  regr_dh_logo_rdbk_22:16;
    };
}kme_dehalo3_kme_dehalo3_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  regr_dh_logo_rdbk_24:16;
    };
}kme_dehalo3_kme_dehalo3_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  regr_dh_rt1_row_num_rdbk:9;
        RBus_UInt32  regr_dh_rt1_blk_num_rdbk:9;
    };
}kme_dehalo3_kme_dehalo3_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_dh_input_blk_cnt:10;
        RBus_UInt32  regr_dh_input_row_cnt:10;
    };
}kme_dehalo3_kme_dehalo3_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_dh_fb_cnt_21:12;
        RBus_UInt32  regr_dh_fb_cnt_20:12;
    };
}kme_dehalo3_kme_dehalo3_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_dh_fb_cnt_23:12;
        RBus_UInt32  regr_dh_fb_cnt_22:12;
    };
}kme_dehalo3_kme_dehalo3_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_dh_fb_cnt_25:12;
        RBus_UInt32  regr_dh_fb_cnt_24:12;
    };
}kme_dehalo3_kme_dehalo3_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_dh_fb_cnt_27:12;
        RBus_UInt32  regr_dh_fb_cnt_26:12;
    };
}kme_dehalo3_kme_dehalo3_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_dh_fb_cnt_31:12;
        RBus_UInt32  regr_dh_fb_cnt_30:12;
    };
}kme_dehalo3_kme_dehalo3_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_dh_fb_cnt_33:12;
        RBus_UInt32  regr_dh_fb_cnt_32:12;
    };
}kme_dehalo3_kme_dehalo3_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_dh_fb_cnt_35:12;
        RBus_UInt32  regr_dh_fb_cnt_34:12;
    };
}kme_dehalo3_kme_dehalo3_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_dh_fb_cnt_37:12;
        RBus_UInt32  regr_dh_fb_cnt_36:12;
    };
}kme_dehalo3_kme_dehalo3_f4_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_DEHALO3 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_pfvconf_statis_en:1;
        RBus_UInt32  dh_sta_fb_lvl_sta_en:1;
        RBus_UInt32  dh_sta_fb_lvl_thr:8;
        RBus_UInt32  res1:22;
    };
}kme_dehalo3_kme_dehalo3_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_00:20;
        RBus_UInt32  regr_dh_fb_cnt_00:12;
    };
}kme_dehalo3_kme_dehalo3_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_01:20;
        RBus_UInt32  regr_dh_fb_cnt_01:12;
    };
}kme_dehalo3_kme_dehalo3_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_02:20;
        RBus_UInt32  regr_dh_fb_cnt_02:12;
    };
}kme_dehalo3_kme_dehalo3_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_03:20;
        RBus_UInt32  regr_dh_fb_cnt_03:12;
    };
}kme_dehalo3_kme_dehalo3_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_04:20;
        RBus_UInt32  regr_dh_fb_cnt_04:12;
    };
}kme_dehalo3_kme_dehalo3_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_05:20;
        RBus_UInt32  regr_dh_fb_cnt_05:12;
    };
}kme_dehalo3_kme_dehalo3_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_06:20;
        RBus_UInt32  regr_dh_fb_cnt_06:12;
    };
}kme_dehalo3_kme_dehalo3_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_07:20;
        RBus_UInt32  regr_dh_fb_cnt_07:12;
    };
}kme_dehalo3_kme_dehalo3_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_10:20;
        RBus_UInt32  regr_dh_fb_cnt_10:12;
    };
}kme_dehalo3_kme_dehalo3_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_11:20;
        RBus_UInt32  regr_dh_fb_cnt_11:12;
    };
}kme_dehalo3_kme_dehalo3_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_12:20;
        RBus_UInt32  regr_dh_fb_cnt_12:12;
    };
}kme_dehalo3_kme_dehalo3_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_13:20;
        RBus_UInt32  regr_dh_fb_cnt_13:12;
    };
}kme_dehalo3_kme_dehalo3_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_14:20;
        RBus_UInt32  regr_dh_fb_cnt_14:12;
    };
}kme_dehalo3_kme_dehalo3_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_15:20;
        RBus_UInt32  regr_dh_fb_cnt_15:12;
    };
}kme_dehalo3_kme_dehalo3_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_16:20;
        RBus_UInt32  regr_dh_fb_cnt_16:12;
    };
}kme_dehalo3_kme_dehalo3_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_17:20;
        RBus_UInt32  regr_dh_fb_cnt_17:12;
    };
}kme_dehalo3_kme_dehalo3_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_20:20;
        RBus_UInt32  regr_dh_logo_o_row_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo3_kme_dehalo3_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_21:20;
        RBus_UInt32  regr_dh_logo_o_blk_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo3_kme_dehalo3_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_22:20;
        RBus_UInt32  regr_dh_out_in_row_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo3_kme_dehalo3_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_23:20;
        RBus_UInt32  regr_dh_out_in_blk_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo3_kme_dehalo3_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_24:20;
        RBus_UInt32  regr_dh_pstflt_out_row_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo3_kme_dehalo3_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_25:20;
        RBus_UInt32  regr_dh_pstflt_out_blk_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo3_kme_dehalo3_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_26:20;
        RBus_UInt32  regr_dh_pstflt_in_row_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo3_kme_dehalo3_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_27:20;
        RBus_UInt32  regr_dh_pstflt_in_blk_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo3_kme_dehalo3_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_30:20;
        RBus_UInt32  regr_dh_rt2_in_row_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo3_kme_dehalo3_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_31:20;
        RBus_UInt32  regr_dh_rt2_in_blk_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo3_kme_dehalo3_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_32:20;
        RBus_UInt32  regr_dh_pcp_out_row_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo3_kme_dehalo3_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_33:20;
        RBus_UInt32  res1:12;
    };
}kme_dehalo3_kme_dehalo3_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_34:20;
        RBus_UInt32  regr_dh_pcp_in_blk_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo3_kme_dehalo3_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_35:20;
        RBus_UInt32  regr_dh_pcp_in_row_cnt:10;
        RBus_UInt32  res1:2;
    };
}kme_dehalo3_kme_dehalo3_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_36:20;
        RBus_UInt32  regr_dh_prepatt_info_blk_cnt:9;
        RBus_UInt32  res1:3;
    };
}kme_dehalo3_kme_dehalo3_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pfvconf_37:20;
        RBus_UInt32  regr_dh_prepatt_info_row_cnt:9;
        RBus_UInt32  res1:3;
    };
}kme_dehalo3_kme_dehalo3_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_in_crc_result:16;
        RBus_UInt32  regr_dh_out_crc_result:16;
    };
}kme_dehalo3_kme_dehalo3_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_pcp_out_blk_cnt:10;
        RBus_UInt32  res1:22;
    };
}kme_dehalo3_kme_dehalo3_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_readback_dummy0:32;
    };
}kme_dehalo3_kme_dehalo3_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_out_out_row_cnt:10;
        RBus_UInt32  regr_dh_out_out_blk_cnt:10;
        RBus_UInt32  res1:12;
    };
}kme_dehalo3_kme_dehalo3_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_logo_rdbk_00:16;
        RBus_UInt32  regr_dh_logo_rdbk_01:16;
    };
}kme_dehalo3_kme_dehalo3_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_logo_rdbk_02:16;
        RBus_UInt32  regr_dh_logo_rdbk_03:16;
    };
}kme_dehalo3_kme_dehalo3_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_logo_rdbk_04:16;
        RBus_UInt32  regr_dh_logo_rdbk_10:16;
    };
}kme_dehalo3_kme_dehalo3_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_logo_rdbk_11:16;
        RBus_UInt32  regr_dh_logo_rdbk_12:16;
    };
}kme_dehalo3_kme_dehalo3_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_logo_rdbk_13:16;
        RBus_UInt32  regr_dh_logo_rdbk_14:16;
    };
}kme_dehalo3_kme_dehalo3_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_logo_rdbk_20:16;
        RBus_UInt32  regr_dh_logo_rdbk_21:16;
    };
}kme_dehalo3_kme_dehalo3_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_logo_rdbk_22:16;
        RBus_UInt32  regr_dh_logo_rdbk_23:16;
    };
}kme_dehalo3_kme_dehalo3_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_logo_rdbk_24:16;
        RBus_UInt32  res1:16;
    };
}kme_dehalo3_kme_dehalo3_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_rt1_blk_num_rdbk:9;
        RBus_UInt32  regr_dh_rt1_row_num_rdbk:9;
        RBus_UInt32  res1:14;
    };
}kme_dehalo3_kme_dehalo3_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_input_row_cnt:10;
        RBus_UInt32  regr_dh_input_blk_cnt:10;
        RBus_UInt32  res1:12;
    };
}kme_dehalo3_kme_dehalo3_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_20:12;
        RBus_UInt32  regr_dh_fb_cnt_21:12;
        RBus_UInt32  res1:8;
    };
}kme_dehalo3_kme_dehalo3_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_22:12;
        RBus_UInt32  regr_dh_fb_cnt_23:12;
        RBus_UInt32  res1:8;
    };
}kme_dehalo3_kme_dehalo3_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_24:12;
        RBus_UInt32  regr_dh_fb_cnt_25:12;
        RBus_UInt32  res1:8;
    };
}kme_dehalo3_kme_dehalo3_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_26:12;
        RBus_UInt32  regr_dh_fb_cnt_27:12;
        RBus_UInt32  res1:8;
    };
}kme_dehalo3_kme_dehalo3_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_30:12;
        RBus_UInt32  regr_dh_fb_cnt_31:12;
        RBus_UInt32  res1:8;
    };
}kme_dehalo3_kme_dehalo3_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_32:12;
        RBus_UInt32  regr_dh_fb_cnt_33:12;
        RBus_UInt32  res1:8;
    };
}kme_dehalo3_kme_dehalo3_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_34:12;
        RBus_UInt32  regr_dh_fb_cnt_35:12;
        RBus_UInt32  res1:8;
    };
}kme_dehalo3_kme_dehalo3_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_dh_fb_cnt_36:12;
        RBus_UInt32  regr_dh_fb_cnt_37:12;
        RBus_UInt32  res1:8;
    };
}kme_dehalo3_kme_dehalo3_f4_RBUS;




#endif 


#endif 
