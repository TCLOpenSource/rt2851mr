/**
* @file Merlin5_MEMC_KMC_METER_TOP
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KMC_METER_TOP_REG_H_
#define _RBUS_KMC_METER_TOP_REG_H_

#include "rbus_types.h"



//  KMC_METER_TOP Register Address
#define  KMC_METER_TOP_KMC_METER_TOP_00                                         0x18099B00
#define  KMC_METER_TOP_KMC_METER_TOP_00_reg_addr                                 "0xB8099B00"
#define  KMC_METER_TOP_KMC_METER_TOP_00_reg                                      0xB8099B00
#define  KMC_METER_TOP_KMC_METER_TOP_00_inst_addr                                "0x0000"
#define  set_KMC_METER_TOP_KMC_METER_TOP_00_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_00_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_00_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_00_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_00_kmc_meter_end_x_yuv_shift                (14)
#define  KMC_METER_TOP_KMC_METER_TOP_00_kmc_meter_start_x_yuv_shift              (2)
#define  KMC_METER_TOP_KMC_METER_TOP_00_kmc_meter_yuv_sel_shift                  (0)
#define  KMC_METER_TOP_KMC_METER_TOP_00_kmc_meter_end_x_yuv_mask                 (0x03FFC000)
#define  KMC_METER_TOP_KMC_METER_TOP_00_kmc_meter_start_x_yuv_mask               (0x00003FFC)
#define  KMC_METER_TOP_KMC_METER_TOP_00_kmc_meter_yuv_sel_mask                   (0x00000003)
#define  KMC_METER_TOP_KMC_METER_TOP_00_kmc_meter_end_x_yuv(data)                (0x03FFC000&((data)<<14))
#define  KMC_METER_TOP_KMC_METER_TOP_00_kmc_meter_start_x_yuv(data)              (0x00003FFC&((data)<<2))
#define  KMC_METER_TOP_KMC_METER_TOP_00_kmc_meter_yuv_sel(data)                  (0x00000003&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_00_get_kmc_meter_end_x_yuv(data)            ((0x03FFC000&(data))>>14)
#define  KMC_METER_TOP_KMC_METER_TOP_00_get_kmc_meter_start_x_yuv(data)          ((0x00003FFC&(data))>>2)
#define  KMC_METER_TOP_KMC_METER_TOP_00_get_kmc_meter_yuv_sel(data)              (0x00000003&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_04                                         0x18099B04
#define  KMC_METER_TOP_KMC_METER_TOP_04_reg_addr                                 "0xB8099B04"
#define  KMC_METER_TOP_KMC_METER_TOP_04_reg                                      0xB8099B04
#define  KMC_METER_TOP_KMC_METER_TOP_04_inst_addr                                "0x0001"
#define  set_KMC_METER_TOP_KMC_METER_TOP_04_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_04_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_04_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_04_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_04_kmc_meter_end_y_yuv_shift                (12)
#define  KMC_METER_TOP_KMC_METER_TOP_04_kmc_meter_start_y_yuv_shift              (0)
#define  KMC_METER_TOP_KMC_METER_TOP_04_kmc_meter_end_y_yuv_mask                 (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_04_kmc_meter_start_y_yuv_mask               (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_04_kmc_meter_end_y_yuv(data)                (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_04_kmc_meter_start_y_yuv(data)              (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_04_get_kmc_meter_end_y_yuv(data)            ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_04_get_kmc_meter_start_y_yuv(data)          (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_08                                         0x18099B08
#define  KMC_METER_TOP_KMC_METER_TOP_08_reg_addr                                 "0xB8099B08"
#define  KMC_METER_TOP_KMC_METER_TOP_08_reg                                      0xB8099B08
#define  KMC_METER_TOP_KMC_METER_TOP_08_inst_addr                                "0x0002"
#define  set_KMC_METER_TOP_KMC_METER_TOP_08_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_08_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_08_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_08_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_08_kmc_meter_bw_end_x_shift                 (12)
#define  KMC_METER_TOP_KMC_METER_TOP_08_kmc_meter_bw_start_x_shift               (0)
#define  KMC_METER_TOP_KMC_METER_TOP_08_kmc_meter_bw_end_x_mask                  (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_08_kmc_meter_bw_start_x_mask                (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_08_kmc_meter_bw_end_x(data)                 (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_08_kmc_meter_bw_start_x(data)               (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_08_get_kmc_meter_bw_end_x(data)             ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_08_get_kmc_meter_bw_start_x(data)           (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_0C                                         0x18099B0C
#define  KMC_METER_TOP_KMC_METER_TOP_0C_reg_addr                                 "0xB8099B0C"
#define  KMC_METER_TOP_KMC_METER_TOP_0C_reg                                      0xB8099B0C
#define  KMC_METER_TOP_KMC_METER_TOP_0C_inst_addr                                "0x0003"
#define  set_KMC_METER_TOP_KMC_METER_TOP_0C_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_0C_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_0C_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_0C_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_0C_kmc_meter_bw_end_y_shift                 (12)
#define  KMC_METER_TOP_KMC_METER_TOP_0C_kmc_meter_bw_start_y_shift               (0)
#define  KMC_METER_TOP_KMC_METER_TOP_0C_kmc_meter_bw_end_y_mask                  (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_0C_kmc_meter_bw_start_y_mask                (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_0C_kmc_meter_bw_end_y(data)                 (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_0C_kmc_meter_bw_start_y(data)               (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_0C_get_kmc_meter_bw_end_y(data)             ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_0C_get_kmc_meter_bw_start_y(data)           (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_10                                         0x18099B10
#define  KMC_METER_TOP_KMC_METER_TOP_10_reg_addr                                 "0xB8099B10"
#define  KMC_METER_TOP_KMC_METER_TOP_10_reg                                      0xB8099B10
#define  KMC_METER_TOP_KMC_METER_TOP_10_inst_addr                                "0x0004"
#define  set_KMC_METER_TOP_KMC_METER_TOP_10_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_10_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_10_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_10_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_10_kmc_meter_bw_diff_shift_shift            (24)
#define  KMC_METER_TOP_KMC_METER_TOP_10_kmc_meter_bw_cr_factor_shift             (16)
#define  KMC_METER_TOP_KMC_METER_TOP_10_kmc_meter_bw_cb_factor_shift             (8)
#define  KMC_METER_TOP_KMC_METER_TOP_10_kmc_meter_bw_y_factor_shift              (0)
#define  KMC_METER_TOP_KMC_METER_TOP_10_kmc_meter_bw_diff_shift_mask             (0x07000000)
#define  KMC_METER_TOP_KMC_METER_TOP_10_kmc_meter_bw_cr_factor_mask              (0x00FF0000)
#define  KMC_METER_TOP_KMC_METER_TOP_10_kmc_meter_bw_cb_factor_mask              (0x0000FF00)
#define  KMC_METER_TOP_KMC_METER_TOP_10_kmc_meter_bw_y_factor_mask               (0x000000FF)
#define  KMC_METER_TOP_KMC_METER_TOP_10_kmc_meter_bw_diff_shift(data)            (0x07000000&((data)<<24))
#define  KMC_METER_TOP_KMC_METER_TOP_10_kmc_meter_bw_cr_factor(data)             (0x00FF0000&((data)<<16))
#define  KMC_METER_TOP_KMC_METER_TOP_10_kmc_meter_bw_cb_factor(data)             (0x0000FF00&((data)<<8))
#define  KMC_METER_TOP_KMC_METER_TOP_10_kmc_meter_bw_y_factor(data)              (0x000000FF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_10_get_kmc_meter_bw_diff_shift(data)        ((0x07000000&(data))>>24)
#define  KMC_METER_TOP_KMC_METER_TOP_10_get_kmc_meter_bw_cr_factor(data)         ((0x00FF0000&(data))>>16)
#define  KMC_METER_TOP_KMC_METER_TOP_10_get_kmc_meter_bw_cb_factor(data)         ((0x0000FF00&(data))>>8)
#define  KMC_METER_TOP_KMC_METER_TOP_10_get_kmc_meter_bw_y_factor(data)          (0x000000FF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_14                                         0x18099B14
#define  KMC_METER_TOP_KMC_METER_TOP_14_reg_addr                                 "0xB8099B14"
#define  KMC_METER_TOP_KMC_METER_TOP_14_reg                                      0xB8099B14
#define  KMC_METER_TOP_KMC_METER_TOP_14_inst_addr                                "0x0005"
#define  set_KMC_METER_TOP_KMC_METER_TOP_14_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_14_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_14_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_14_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_14_kmc_meter_bw_filter_h_01_shift           (12)
#define  KMC_METER_TOP_KMC_METER_TOP_14_kmc_meter_bw_filter_h_00_shift           (0)
#define  KMC_METER_TOP_KMC_METER_TOP_14_kmc_meter_bw_filter_h_01_mask            (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_14_kmc_meter_bw_filter_h_00_mask            (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_14_kmc_meter_bw_filter_h_01(data)           (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_14_kmc_meter_bw_filter_h_00(data)           (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_14_get_kmc_meter_bw_filter_h_01(data)       ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_14_get_kmc_meter_bw_filter_h_00(data)       (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_18                                         0x18099B18
#define  KMC_METER_TOP_KMC_METER_TOP_18_reg_addr                                 "0xB8099B18"
#define  KMC_METER_TOP_KMC_METER_TOP_18_reg                                      0xB8099B18
#define  KMC_METER_TOP_KMC_METER_TOP_18_inst_addr                                "0x0006"
#define  set_KMC_METER_TOP_KMC_METER_TOP_18_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_18_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_18_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_18_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_18_kmc_meter_bw_filter_h_03_shift           (12)
#define  KMC_METER_TOP_KMC_METER_TOP_18_kmc_meter_bw_filter_h_02_shift           (0)
#define  KMC_METER_TOP_KMC_METER_TOP_18_kmc_meter_bw_filter_h_03_mask            (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_18_kmc_meter_bw_filter_h_02_mask            (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_18_kmc_meter_bw_filter_h_03(data)           (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_18_kmc_meter_bw_filter_h_02(data)           (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_18_get_kmc_meter_bw_filter_h_03(data)       ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_18_get_kmc_meter_bw_filter_h_02(data)       (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_1C                                         0x18099B1C
#define  KMC_METER_TOP_KMC_METER_TOP_1C_reg_addr                                 "0xB8099B1C"
#define  KMC_METER_TOP_KMC_METER_TOP_1C_reg                                      0xB8099B1C
#define  KMC_METER_TOP_KMC_METER_TOP_1C_inst_addr                                "0x0007"
#define  set_KMC_METER_TOP_KMC_METER_TOP_1C_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_1C_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_1C_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_1C_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_1C_kmc_meter_bw_filter_h_05_shift           (12)
#define  KMC_METER_TOP_KMC_METER_TOP_1C_kmc_meter_bw_filter_h_04_shift           (0)
#define  KMC_METER_TOP_KMC_METER_TOP_1C_kmc_meter_bw_filter_h_05_mask            (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_1C_kmc_meter_bw_filter_h_04_mask            (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_1C_kmc_meter_bw_filter_h_05(data)           (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_1C_kmc_meter_bw_filter_h_04(data)           (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_1C_get_kmc_meter_bw_filter_h_05(data)       ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_1C_get_kmc_meter_bw_filter_h_04(data)       (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_20                                         0x18099B20
#define  KMC_METER_TOP_KMC_METER_TOP_20_reg_addr                                 "0xB8099B20"
#define  KMC_METER_TOP_KMC_METER_TOP_20_reg                                      0xB8099B20
#define  KMC_METER_TOP_KMC_METER_TOP_20_inst_addr                                "0x0008"
#define  set_KMC_METER_TOP_KMC_METER_TOP_20_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_20_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_20_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_20_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_20_kmc_meter_bw_filter_h_07_shift           (12)
#define  KMC_METER_TOP_KMC_METER_TOP_20_kmc_meter_bw_filter_h_06_shift           (0)
#define  KMC_METER_TOP_KMC_METER_TOP_20_kmc_meter_bw_filter_h_07_mask            (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_20_kmc_meter_bw_filter_h_06_mask            (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_20_kmc_meter_bw_filter_h_07(data)           (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_20_kmc_meter_bw_filter_h_06(data)           (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_20_get_kmc_meter_bw_filter_h_07(data)       ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_20_get_kmc_meter_bw_filter_h_06(data)       (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_24                                         0x18099B24
#define  KMC_METER_TOP_KMC_METER_TOP_24_reg_addr                                 "0xB8099B24"
#define  KMC_METER_TOP_KMC_METER_TOP_24_reg                                      0xB8099B24
#define  KMC_METER_TOP_KMC_METER_TOP_24_inst_addr                                "0x0009"
#define  set_KMC_METER_TOP_KMC_METER_TOP_24_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_24_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_24_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_24_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_24_kmc_meter_bw_filter_h_09_shift           (12)
#define  KMC_METER_TOP_KMC_METER_TOP_24_kmc_meter_bw_filter_h_08_shift           (0)
#define  KMC_METER_TOP_KMC_METER_TOP_24_kmc_meter_bw_filter_h_09_mask            (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_24_kmc_meter_bw_filter_h_08_mask            (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_24_kmc_meter_bw_filter_h_09(data)           (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_24_kmc_meter_bw_filter_h_08(data)           (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_24_get_kmc_meter_bw_filter_h_09(data)       ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_24_get_kmc_meter_bw_filter_h_08(data)       (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_28                                         0x18099B28
#define  KMC_METER_TOP_KMC_METER_TOP_28_reg_addr                                 "0xB8099B28"
#define  KMC_METER_TOP_KMC_METER_TOP_28_reg                                      0xB8099B28
#define  KMC_METER_TOP_KMC_METER_TOP_28_inst_addr                                "0x000A"
#define  set_KMC_METER_TOP_KMC_METER_TOP_28_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_28_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_28_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_28_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_28_kmc_meter_bw_filter_h_0b_shift           (12)
#define  KMC_METER_TOP_KMC_METER_TOP_28_kmc_meter_bw_filter_h_0a_shift           (0)
#define  KMC_METER_TOP_KMC_METER_TOP_28_kmc_meter_bw_filter_h_0b_mask            (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_28_kmc_meter_bw_filter_h_0a_mask            (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_28_kmc_meter_bw_filter_h_0b(data)           (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_28_kmc_meter_bw_filter_h_0a(data)           (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_28_get_kmc_meter_bw_filter_h_0b(data)       ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_28_get_kmc_meter_bw_filter_h_0a(data)       (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_2C                                         0x18099B2C
#define  KMC_METER_TOP_KMC_METER_TOP_2C_reg_addr                                 "0xB8099B2C"
#define  KMC_METER_TOP_KMC_METER_TOP_2C_reg                                      0xB8099B2C
#define  KMC_METER_TOP_KMC_METER_TOP_2C_inst_addr                                "0x000B"
#define  set_KMC_METER_TOP_KMC_METER_TOP_2C_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_2C_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_2C_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_2C_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_2C_kmc_meter_bw_filter_h_10_shift           (12)
#define  KMC_METER_TOP_KMC_METER_TOP_2C_kmc_meter_bw_filter_h_0c_shift           (0)
#define  KMC_METER_TOP_KMC_METER_TOP_2C_kmc_meter_bw_filter_h_10_mask            (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_2C_kmc_meter_bw_filter_h_0c_mask            (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_2C_kmc_meter_bw_filter_h_10(data)           (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_2C_kmc_meter_bw_filter_h_0c(data)           (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_2C_get_kmc_meter_bw_filter_h_10(data)       ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_2C_get_kmc_meter_bw_filter_h_0c(data)       (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_30                                         0x18099B30
#define  KMC_METER_TOP_KMC_METER_TOP_30_reg_addr                                 "0xB8099B30"
#define  KMC_METER_TOP_KMC_METER_TOP_30_reg                                      0xB8099B30
#define  KMC_METER_TOP_KMC_METER_TOP_30_inst_addr                                "0x000C"
#define  set_KMC_METER_TOP_KMC_METER_TOP_30_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_30_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_30_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_30_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_30_kmc_meter_bw_filter_h_12_shift           (12)
#define  KMC_METER_TOP_KMC_METER_TOP_30_kmc_meter_bw_filter_h_11_shift           (0)
#define  KMC_METER_TOP_KMC_METER_TOP_30_kmc_meter_bw_filter_h_12_mask            (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_30_kmc_meter_bw_filter_h_11_mask            (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_30_kmc_meter_bw_filter_h_12(data)           (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_30_kmc_meter_bw_filter_h_11(data)           (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_30_get_kmc_meter_bw_filter_h_12(data)       ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_30_get_kmc_meter_bw_filter_h_11(data)       (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_34                                         0x18099B34
#define  KMC_METER_TOP_KMC_METER_TOP_34_reg_addr                                 "0xB8099B34"
#define  KMC_METER_TOP_KMC_METER_TOP_34_reg                                      0xB8099B34
#define  KMC_METER_TOP_KMC_METER_TOP_34_inst_addr                                "0x000D"
#define  set_KMC_METER_TOP_KMC_METER_TOP_34_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_34_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_34_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_34_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_34_kmc_meter_bw_filter_h_14_shift           (12)
#define  KMC_METER_TOP_KMC_METER_TOP_34_kmc_meter_bw_filter_h_13_shift           (0)
#define  KMC_METER_TOP_KMC_METER_TOP_34_kmc_meter_bw_filter_h_14_mask            (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_34_kmc_meter_bw_filter_h_13_mask            (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_34_kmc_meter_bw_filter_h_14(data)           (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_34_kmc_meter_bw_filter_h_13(data)           (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_34_get_kmc_meter_bw_filter_h_14(data)       ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_34_get_kmc_meter_bw_filter_h_13(data)       (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_38                                         0x18099B38
#define  KMC_METER_TOP_KMC_METER_TOP_38_reg_addr                                 "0xB8099B38"
#define  KMC_METER_TOP_KMC_METER_TOP_38_reg                                      0xB8099B38
#define  KMC_METER_TOP_KMC_METER_TOP_38_inst_addr                                "0x000E"
#define  set_KMC_METER_TOP_KMC_METER_TOP_38_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_38_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_38_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_38_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_38_kmc_meter_bw_filter_h_16_shift           (12)
#define  KMC_METER_TOP_KMC_METER_TOP_38_kmc_meter_bw_filter_h_15_shift           (0)
#define  KMC_METER_TOP_KMC_METER_TOP_38_kmc_meter_bw_filter_h_16_mask            (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_38_kmc_meter_bw_filter_h_15_mask            (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_38_kmc_meter_bw_filter_h_16(data)           (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_38_kmc_meter_bw_filter_h_15(data)           (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_38_get_kmc_meter_bw_filter_h_16(data)       ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_38_get_kmc_meter_bw_filter_h_15(data)       (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_3C                                         0x18099B3C
#define  KMC_METER_TOP_KMC_METER_TOP_3C_reg_addr                                 "0xB8099B3C"
#define  KMC_METER_TOP_KMC_METER_TOP_3C_reg                                      0xB8099B3C
#define  KMC_METER_TOP_KMC_METER_TOP_3C_inst_addr                                "0x000F"
#define  set_KMC_METER_TOP_KMC_METER_TOP_3C_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_3C_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_3C_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_3C_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_3C_kmc_meter_bw_filter_h_18_shift           (12)
#define  KMC_METER_TOP_KMC_METER_TOP_3C_kmc_meter_bw_filter_h_17_shift           (0)
#define  KMC_METER_TOP_KMC_METER_TOP_3C_kmc_meter_bw_filter_h_18_mask            (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_3C_kmc_meter_bw_filter_h_17_mask            (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_3C_kmc_meter_bw_filter_h_18(data)           (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_3C_kmc_meter_bw_filter_h_17(data)           (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_3C_get_kmc_meter_bw_filter_h_18(data)       ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_3C_get_kmc_meter_bw_filter_h_17(data)       (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_40                                         0x18099B40
#define  KMC_METER_TOP_KMC_METER_TOP_40_reg_addr                                 "0xB8099B40"
#define  KMC_METER_TOP_KMC_METER_TOP_40_reg                                      0xB8099B40
#define  KMC_METER_TOP_KMC_METER_TOP_40_inst_addr                                "0x0010"
#define  set_KMC_METER_TOP_KMC_METER_TOP_40_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_40_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_40_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_40_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_40_kmc_meter_bw_filter_h_1a_shift           (12)
#define  KMC_METER_TOP_KMC_METER_TOP_40_kmc_meter_bw_filter_h_19_shift           (0)
#define  KMC_METER_TOP_KMC_METER_TOP_40_kmc_meter_bw_filter_h_1a_mask            (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_40_kmc_meter_bw_filter_h_19_mask            (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_40_kmc_meter_bw_filter_h_1a(data)           (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_40_kmc_meter_bw_filter_h_19(data)           (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_40_get_kmc_meter_bw_filter_h_1a(data)       ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_40_get_kmc_meter_bw_filter_h_19(data)       (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_44                                         0x18099B44
#define  KMC_METER_TOP_KMC_METER_TOP_44_reg_addr                                 "0xB8099B44"
#define  KMC_METER_TOP_KMC_METER_TOP_44_reg                                      0xB8099B44
#define  KMC_METER_TOP_KMC_METER_TOP_44_inst_addr                                "0x0011"
#define  set_KMC_METER_TOP_KMC_METER_TOP_44_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_44_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_44_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_44_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_44_kmc_meter_bw_filter_h_1c_shift           (12)
#define  KMC_METER_TOP_KMC_METER_TOP_44_kmc_meter_bw_filter_h_1b_shift           (0)
#define  KMC_METER_TOP_KMC_METER_TOP_44_kmc_meter_bw_filter_h_1c_mask            (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_44_kmc_meter_bw_filter_h_1b_mask            (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_44_kmc_meter_bw_filter_h_1c(data)           (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_44_kmc_meter_bw_filter_h_1b(data)           (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_44_get_kmc_meter_bw_filter_h_1c(data)       ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_44_get_kmc_meter_bw_filter_h_1b(data)       (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_48                                         0x18099B48
#define  KMC_METER_TOP_KMC_METER_TOP_48_reg_addr                                 "0xB8099B48"
#define  KMC_METER_TOP_KMC_METER_TOP_48_reg                                      0xB8099B48
#define  KMC_METER_TOP_KMC_METER_TOP_48_inst_addr                                "0x0012"
#define  set_KMC_METER_TOP_KMC_METER_TOP_48_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_48_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_48_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_48_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_48_kmc_meter_dr2_1_shift                    (20)
#define  KMC_METER_TOP_KMC_METER_TOP_48_kmc_meter_dr1_1_shift                    (10)
#define  KMC_METER_TOP_KMC_METER_TOP_48_kmc_meter_dr0_1_shift                    (0)
#define  KMC_METER_TOP_KMC_METER_TOP_48_kmc_meter_dr2_1_mask                     (0x3FF00000)
#define  KMC_METER_TOP_KMC_METER_TOP_48_kmc_meter_dr1_1_mask                     (0x000FFC00)
#define  KMC_METER_TOP_KMC_METER_TOP_48_kmc_meter_dr0_1_mask                     (0x000003FF)
#define  KMC_METER_TOP_KMC_METER_TOP_48_kmc_meter_dr2_1(data)                    (0x3FF00000&((data)<<20))
#define  KMC_METER_TOP_KMC_METER_TOP_48_kmc_meter_dr1_1(data)                    (0x000FFC00&((data)<<10))
#define  KMC_METER_TOP_KMC_METER_TOP_48_kmc_meter_dr0_1(data)                    (0x000003FF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_48_get_kmc_meter_dr2_1(data)                ((0x3FF00000&(data))>>20)
#define  KMC_METER_TOP_KMC_METER_TOP_48_get_kmc_meter_dr1_1(data)                ((0x000FFC00&(data))>>10)
#define  KMC_METER_TOP_KMC_METER_TOP_48_get_kmc_meter_dr0_1(data)                (0x000003FF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_4C                                         0x18099B4C
#define  KMC_METER_TOP_KMC_METER_TOP_4C_reg_addr                                 "0xB8099B4C"
#define  KMC_METER_TOP_KMC_METER_TOP_4C_reg                                      0xB8099B4C
#define  KMC_METER_TOP_KMC_METER_TOP_4C_inst_addr                                "0x0013"
#define  set_KMC_METER_TOP_KMC_METER_TOP_4C_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_4C_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_4C_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_4C_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_4C_kmc_meter_bw_h_thr0_1_shift              (0)
#define  KMC_METER_TOP_KMC_METER_TOP_4C_kmc_meter_bw_h_thr0_1_mask               (0x01FFFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_4C_kmc_meter_bw_h_thr0_1(data)              (0x01FFFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_4C_get_kmc_meter_bw_h_thr0_1(data)          (0x01FFFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_50                                         0x18099B50
#define  KMC_METER_TOP_KMC_METER_TOP_50_reg_addr                                 "0xB8099B50"
#define  KMC_METER_TOP_KMC_METER_TOP_50_reg                                      0xB8099B50
#define  KMC_METER_TOP_KMC_METER_TOP_50_inst_addr                                "0x0014"
#define  set_KMC_METER_TOP_KMC_METER_TOP_50_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_50_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_50_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_50_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_50_kmc_meter_bw_h_thr1_1_shift              (0)
#define  KMC_METER_TOP_KMC_METER_TOP_50_kmc_meter_bw_h_thr1_1_mask               (0x01FFFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_50_kmc_meter_bw_h_thr1_1(data)              (0x01FFFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_50_get_kmc_meter_bw_h_thr1_1(data)          (0x01FFFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_54                                         0x18099B54
#define  KMC_METER_TOP_KMC_METER_TOP_54_reg_addr                                 "0xB8099B54"
#define  KMC_METER_TOP_KMC_METER_TOP_54_reg                                      0xB8099B54
#define  KMC_METER_TOP_KMC_METER_TOP_54_inst_addr                                "0x0015"
#define  set_KMC_METER_TOP_KMC_METER_TOP_54_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_54_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_54_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_54_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_54_kmc_meter_bw_h_thr2_1_shift              (0)
#define  KMC_METER_TOP_KMC_METER_TOP_54_kmc_meter_bw_h_thr2_1_mask               (0x01FFFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_54_kmc_meter_bw_h_thr2_1(data)              (0x01FFFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_54_get_kmc_meter_bw_h_thr2_1(data)          (0x01FFFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_58                                         0x18099B58
#define  KMC_METER_TOP_KMC_METER_TOP_58_reg_addr                                 "0xB8099B58"
#define  KMC_METER_TOP_KMC_METER_TOP_58_reg                                      0xB8099B58
#define  KMC_METER_TOP_KMC_METER_TOP_58_inst_addr                                "0x0016"
#define  set_KMC_METER_TOP_KMC_METER_TOP_58_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_58_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_58_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_58_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_58_kmc_meter_bw_h_slp1_1_shift              (12)
#define  KMC_METER_TOP_KMC_METER_TOP_58_kmc_meter_bw_h_slp0_1_shift              (0)
#define  KMC_METER_TOP_KMC_METER_TOP_58_kmc_meter_bw_h_slp1_1_mask               (0x00FFF000)
#define  KMC_METER_TOP_KMC_METER_TOP_58_kmc_meter_bw_h_slp0_1_mask               (0x00000FFF)
#define  KMC_METER_TOP_KMC_METER_TOP_58_kmc_meter_bw_h_slp1_1(data)              (0x00FFF000&((data)<<12))
#define  KMC_METER_TOP_KMC_METER_TOP_58_kmc_meter_bw_h_slp0_1(data)              (0x00000FFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_58_get_kmc_meter_bw_h_slp1_1(data)          ((0x00FFF000&(data))>>12)
#define  KMC_METER_TOP_KMC_METER_TOP_58_get_kmc_meter_bw_h_slp0_1(data)          (0x00000FFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_5C                                         0x18099B5C
#define  KMC_METER_TOP_KMC_METER_TOP_5C_reg_addr                                 "0xB8099B5C"
#define  KMC_METER_TOP_KMC_METER_TOP_5C_reg                                      0xB8099B5C
#define  KMC_METER_TOP_KMC_METER_TOP_5C_inst_addr                                "0x0017"
#define  set_KMC_METER_TOP_KMC_METER_TOP_5C_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_5C_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_5C_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_5C_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_5C_kmc_meter_detail_diff_shift_shift        (11)
#define  KMC_METER_TOP_KMC_METER_TOP_5C_kmc_meter_detail_dr_thr_shift            (1)
#define  KMC_METER_TOP_KMC_METER_TOP_5C_kmc_meter_dr_filter_en_shift             (0)
#define  KMC_METER_TOP_KMC_METER_TOP_5C_kmc_meter_detail_diff_shift_mask         (0x00003800)
#define  KMC_METER_TOP_KMC_METER_TOP_5C_kmc_meter_detail_dr_thr_mask             (0x000007FE)
#define  KMC_METER_TOP_KMC_METER_TOP_5C_kmc_meter_dr_filter_en_mask              (0x00000001)
#define  KMC_METER_TOP_KMC_METER_TOP_5C_kmc_meter_detail_diff_shift(data)        (0x00003800&((data)<<11))
#define  KMC_METER_TOP_KMC_METER_TOP_5C_kmc_meter_detail_dr_thr(data)            (0x000007FE&((data)<<1))
#define  KMC_METER_TOP_KMC_METER_TOP_5C_kmc_meter_dr_filter_en(data)             (0x00000001&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_5C_get_kmc_meter_detail_diff_shift(data)    ((0x00003800&(data))>>11)
#define  KMC_METER_TOP_KMC_METER_TOP_5C_get_kmc_meter_detail_dr_thr(data)        ((0x000007FE&(data))>>1)
#define  KMC_METER_TOP_KMC_METER_TOP_5C_get_kmc_meter_dr_filter_en(data)         (0x00000001&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_60                                         0x18099B60
#define  KMC_METER_TOP_KMC_METER_TOP_60_reg_addr                                 "0xB8099B60"
#define  KMC_METER_TOP_KMC_METER_TOP_60_reg                                      0xB8099B60
#define  KMC_METER_TOP_KMC_METER_TOP_60_inst_addr                                "0x0018"
#define  set_KMC_METER_TOP_KMC_METER_TOP_60_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_60_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_60_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_60_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_60_kmc_meter_detail_thr0_shift              (0)
#define  KMC_METER_TOP_KMC_METER_TOP_60_kmc_meter_detail_thr0_mask               (0x01FFFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_60_kmc_meter_detail_thr0(data)              (0x01FFFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_60_get_kmc_meter_detail_thr0(data)          (0x01FFFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_64                                         0x18099B64
#define  KMC_METER_TOP_KMC_METER_TOP_64_reg_addr                                 "0xB8099B64"
#define  KMC_METER_TOP_KMC_METER_TOP_64_reg                                      0xB8099B64
#define  KMC_METER_TOP_KMC_METER_TOP_64_inst_addr                                "0x0019"
#define  set_KMC_METER_TOP_KMC_METER_TOP_64_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_64_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_64_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_64_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_64_kmc_meter_detail_thr1_shift              (0)
#define  KMC_METER_TOP_KMC_METER_TOP_64_kmc_meter_detail_thr1_mask               (0x01FFFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_64_kmc_meter_detail_thr1(data)              (0x01FFFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_64_get_kmc_meter_detail_thr1(data)          (0x01FFFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_68                                         0x18099B68
#define  KMC_METER_TOP_KMC_METER_TOP_68_reg_addr                                 "0xB8099B68"
#define  KMC_METER_TOP_KMC_METER_TOP_68_reg                                      0xB8099B68
#define  KMC_METER_TOP_KMC_METER_TOP_68_inst_addr                                "0x001A"
#define  set_KMC_METER_TOP_KMC_METER_TOP_68_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_68_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_68_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_68_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_68_kmc_meter_detail_thr2_shift              (0)
#define  KMC_METER_TOP_KMC_METER_TOP_68_kmc_meter_detail_thr2_mask               (0x01FFFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_68_kmc_meter_detail_thr2(data)              (0x01FFFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_68_get_kmc_meter_detail_thr2(data)          (0x01FFFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_6C                                         0x18099B6C
#define  KMC_METER_TOP_KMC_METER_TOP_6C_reg_addr                                 "0xB8099B6C"
#define  KMC_METER_TOP_KMC_METER_TOP_6C_reg                                      0xB8099B6C
#define  KMC_METER_TOP_KMC_METER_TOP_6C_inst_addr                                "0x001B"
#define  set_KMC_METER_TOP_KMC_METER_TOP_6C_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_6C_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_6C_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_6C_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_6C_kmc_meter_bw_coring1_shift               (0)
#define  KMC_METER_TOP_KMC_METER_TOP_6C_kmc_meter_bw_coring1_mask                (0x01FFFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_6C_kmc_meter_bw_coring1(data)               (0x01FFFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_6C_get_kmc_meter_bw_coring1(data)           (0x01FFFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_70                                         0x18099B70
#define  KMC_METER_TOP_KMC_METER_TOP_70_reg_addr                                 "0xB8099B70"
#define  KMC_METER_TOP_KMC_METER_TOP_70_reg                                      0xB8099B70
#define  KMC_METER_TOP_KMC_METER_TOP_70_inst_addr                                "0x001C"
#define  set_KMC_METER_TOP_KMC_METER_TOP_70_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_70_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_70_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_70_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_70_regr_kmc_meter_detail_bin0_shift         (0)
#define  KMC_METER_TOP_KMC_METER_TOP_70_regr_kmc_meter_detail_bin0_mask          (0x00FFFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_70_regr_kmc_meter_detail_bin0(data)         (0x00FFFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_70_get_regr_kmc_meter_detail_bin0(data)     (0x00FFFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_74                                         0x18099B74
#define  KMC_METER_TOP_KMC_METER_TOP_74_reg_addr                                 "0xB8099B74"
#define  KMC_METER_TOP_KMC_METER_TOP_74_reg                                      0xB8099B74
#define  KMC_METER_TOP_KMC_METER_TOP_74_inst_addr                                "0x001D"
#define  set_KMC_METER_TOP_KMC_METER_TOP_74_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_74_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_74_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_74_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_74_regr_kmc_meter_detail_bin1_shift         (0)
#define  KMC_METER_TOP_KMC_METER_TOP_74_regr_kmc_meter_detail_bin1_mask          (0x00FFFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_74_regr_kmc_meter_detail_bin1(data)         (0x00FFFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_74_get_regr_kmc_meter_detail_bin1(data)     (0x00FFFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_78                                         0x18099B78
#define  KMC_METER_TOP_KMC_METER_TOP_78_reg_addr                                 "0xB8099B78"
#define  KMC_METER_TOP_KMC_METER_TOP_78_reg                                      0xB8099B78
#define  KMC_METER_TOP_KMC_METER_TOP_78_inst_addr                                "0x001E"
#define  set_KMC_METER_TOP_KMC_METER_TOP_78_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_78_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_78_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_78_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_78_regr_kmc_meter_detail_bin2_shift         (0)
#define  KMC_METER_TOP_KMC_METER_TOP_78_regr_kmc_meter_detail_bin2_mask          (0x00FFFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_78_regr_kmc_meter_detail_bin2(data)         (0x00FFFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_78_get_regr_kmc_meter_detail_bin2(data)     (0x00FFFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_7C                                         0x18099B7C
#define  KMC_METER_TOP_KMC_METER_TOP_7C_reg_addr                                 "0xB8099B7C"
#define  KMC_METER_TOP_KMC_METER_TOP_7C_reg                                      0xB8099B7C
#define  KMC_METER_TOP_KMC_METER_TOP_7C_inst_addr                                "0x001F"
#define  set_KMC_METER_TOP_KMC_METER_TOP_7C_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_7C_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_7C_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_7C_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_7C_regr_kmc_meter_bw_h_type1_shift          (0)
#define  KMC_METER_TOP_KMC_METER_TOP_7C_regr_kmc_meter_bw_h_type1_mask           (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_7C_regr_kmc_meter_bw_h_type1(data)          (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_7C_get_regr_kmc_meter_bw_h_type1(data)      (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_80                                         0x18099B80
#define  KMC_METER_TOP_KMC_METER_TOP_80_reg_addr                                 "0xB8099B80"
#define  KMC_METER_TOP_KMC_METER_TOP_80_reg                                      0xB8099B80
#define  KMC_METER_TOP_KMC_METER_TOP_80_inst_addr                                "0x0020"
#define  set_KMC_METER_TOP_KMC_METER_TOP_80_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_80_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_80_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_80_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_80_regr_kmc_meter_rdbk_histo00_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_80_regr_kmc_meter_rdbk_histo00_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_80_regr_kmc_meter_rdbk_histo00(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_80_get_regr_kmc_meter_rdbk_histo00(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_84                                         0x18099B84
#define  KMC_METER_TOP_KMC_METER_TOP_84_reg_addr                                 "0xB8099B84"
#define  KMC_METER_TOP_KMC_METER_TOP_84_reg                                      0xB8099B84
#define  KMC_METER_TOP_KMC_METER_TOP_84_inst_addr                                "0x0021"
#define  set_KMC_METER_TOP_KMC_METER_TOP_84_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_84_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_84_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_84_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_84_regr_kmc_meter_rdbk_histo01_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_84_regr_kmc_meter_rdbk_histo01_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_84_regr_kmc_meter_rdbk_histo01(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_84_get_regr_kmc_meter_rdbk_histo01(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_88                                         0x18099B88
#define  KMC_METER_TOP_KMC_METER_TOP_88_reg_addr                                 "0xB8099B88"
#define  KMC_METER_TOP_KMC_METER_TOP_88_reg                                      0xB8099B88
#define  KMC_METER_TOP_KMC_METER_TOP_88_inst_addr                                "0x0022"
#define  set_KMC_METER_TOP_KMC_METER_TOP_88_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_88_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_88_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_88_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_88_regr_kmc_meter_rdbk_histo02_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_88_regr_kmc_meter_rdbk_histo02_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_88_regr_kmc_meter_rdbk_histo02(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_88_get_regr_kmc_meter_rdbk_histo02(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_8C                                         0x18099B8C
#define  KMC_METER_TOP_KMC_METER_TOP_8C_reg_addr                                 "0xB8099B8C"
#define  KMC_METER_TOP_KMC_METER_TOP_8C_reg                                      0xB8099B8C
#define  KMC_METER_TOP_KMC_METER_TOP_8C_inst_addr                                "0x0023"
#define  set_KMC_METER_TOP_KMC_METER_TOP_8C_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_8C_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_8C_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_8C_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_8C_regr_kmc_meter_rdbk_histo03_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_8C_regr_kmc_meter_rdbk_histo03_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_8C_regr_kmc_meter_rdbk_histo03(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_8C_get_regr_kmc_meter_rdbk_histo03(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_90                                         0x18099B90
#define  KMC_METER_TOP_KMC_METER_TOP_90_reg_addr                                 "0xB8099B90"
#define  KMC_METER_TOP_KMC_METER_TOP_90_reg                                      0xB8099B90
#define  KMC_METER_TOP_KMC_METER_TOP_90_inst_addr                                "0x0024"
#define  set_KMC_METER_TOP_KMC_METER_TOP_90_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_90_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_90_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_90_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_90_regr_kmc_meter_rdbk_histo04_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_90_regr_kmc_meter_rdbk_histo04_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_90_regr_kmc_meter_rdbk_histo04(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_90_get_regr_kmc_meter_rdbk_histo04(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_94                                         0x18099B94
#define  KMC_METER_TOP_KMC_METER_TOP_94_reg_addr                                 "0xB8099B94"
#define  KMC_METER_TOP_KMC_METER_TOP_94_reg                                      0xB8099B94
#define  KMC_METER_TOP_KMC_METER_TOP_94_inst_addr                                "0x0025"
#define  set_KMC_METER_TOP_KMC_METER_TOP_94_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_94_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_94_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_94_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_94_regr_kmc_meter_rdbk_histo05_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_94_regr_kmc_meter_rdbk_histo05_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_94_regr_kmc_meter_rdbk_histo05(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_94_get_regr_kmc_meter_rdbk_histo05(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_98                                         0x18099B98
#define  KMC_METER_TOP_KMC_METER_TOP_98_reg_addr                                 "0xB8099B98"
#define  KMC_METER_TOP_KMC_METER_TOP_98_reg                                      0xB8099B98
#define  KMC_METER_TOP_KMC_METER_TOP_98_inst_addr                                "0x0026"
#define  set_KMC_METER_TOP_KMC_METER_TOP_98_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_98_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_98_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_98_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_98_regr_kmc_meter_rdbk_histo06_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_98_regr_kmc_meter_rdbk_histo06_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_98_regr_kmc_meter_rdbk_histo06(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_98_get_regr_kmc_meter_rdbk_histo06(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_9C                                         0x18099B9C
#define  KMC_METER_TOP_KMC_METER_TOP_9C_reg_addr                                 "0xB8099B9C"
#define  KMC_METER_TOP_KMC_METER_TOP_9C_reg                                      0xB8099B9C
#define  KMC_METER_TOP_KMC_METER_TOP_9C_inst_addr                                "0x0027"
#define  set_KMC_METER_TOP_KMC_METER_TOP_9C_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_9C_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_9C_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_9C_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_9C_regr_kmc_meter_rdbk_histo07_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_9C_regr_kmc_meter_rdbk_histo07_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_9C_regr_kmc_meter_rdbk_histo07(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_9C_get_regr_kmc_meter_rdbk_histo07(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_A0                                         0x18099BA0
#define  KMC_METER_TOP_KMC_METER_TOP_A0_reg_addr                                 "0xB8099BA0"
#define  KMC_METER_TOP_KMC_METER_TOP_A0_reg                                      0xB8099BA0
#define  KMC_METER_TOP_KMC_METER_TOP_A0_inst_addr                                "0x0028"
#define  set_KMC_METER_TOP_KMC_METER_TOP_A0_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_A0_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_A0_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_A0_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_A0_regr_kmc_meter_rdbk_histo08_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_A0_regr_kmc_meter_rdbk_histo08_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_A0_regr_kmc_meter_rdbk_histo08(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_A0_get_regr_kmc_meter_rdbk_histo08(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_A4                                         0x18099BA4
#define  KMC_METER_TOP_KMC_METER_TOP_A4_reg_addr                                 "0xB8099BA4"
#define  KMC_METER_TOP_KMC_METER_TOP_A4_reg                                      0xB8099BA4
#define  KMC_METER_TOP_KMC_METER_TOP_A4_inst_addr                                "0x0029"
#define  set_KMC_METER_TOP_KMC_METER_TOP_A4_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_A4_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_A4_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_A4_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_A4_regr_kmc_meter_rdbk_histo09_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_A4_regr_kmc_meter_rdbk_histo09_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_A4_regr_kmc_meter_rdbk_histo09(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_A4_get_regr_kmc_meter_rdbk_histo09(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_A8                                         0x18099BA8
#define  KMC_METER_TOP_KMC_METER_TOP_A8_reg_addr                                 "0xB8099BA8"
#define  KMC_METER_TOP_KMC_METER_TOP_A8_reg                                      0xB8099BA8
#define  KMC_METER_TOP_KMC_METER_TOP_A8_inst_addr                                "0x002A"
#define  set_KMC_METER_TOP_KMC_METER_TOP_A8_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_A8_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_A8_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_A8_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_A8_regr_kmc_meter_rdbk_histo10_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_A8_regr_kmc_meter_rdbk_histo10_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_A8_regr_kmc_meter_rdbk_histo10(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_A8_get_regr_kmc_meter_rdbk_histo10(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_AC                                         0x18099BAC
#define  KMC_METER_TOP_KMC_METER_TOP_AC_reg_addr                                 "0xB8099BAC"
#define  KMC_METER_TOP_KMC_METER_TOP_AC_reg                                      0xB8099BAC
#define  KMC_METER_TOP_KMC_METER_TOP_AC_inst_addr                                "0x002B"
#define  set_KMC_METER_TOP_KMC_METER_TOP_AC_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_AC_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_AC_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_AC_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_AC_regr_kmc_meter_rdbk_histo11_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_AC_regr_kmc_meter_rdbk_histo11_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_AC_regr_kmc_meter_rdbk_histo11(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_AC_get_regr_kmc_meter_rdbk_histo11(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_B0                                         0x18099BB0
#define  KMC_METER_TOP_KMC_METER_TOP_B0_reg_addr                                 "0xB8099BB0"
#define  KMC_METER_TOP_KMC_METER_TOP_B0_reg                                      0xB8099BB0
#define  KMC_METER_TOP_KMC_METER_TOP_B0_inst_addr                                "0x002C"
#define  set_KMC_METER_TOP_KMC_METER_TOP_B0_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_B0_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_B0_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_B0_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_B0_regr_kmc_meter_rdbk_histo12_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_B0_regr_kmc_meter_rdbk_histo12_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_B0_regr_kmc_meter_rdbk_histo12(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_B0_get_regr_kmc_meter_rdbk_histo12(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_B4                                         0x18099BB4
#define  KMC_METER_TOP_KMC_METER_TOP_B4_reg_addr                                 "0xB8099BB4"
#define  KMC_METER_TOP_KMC_METER_TOP_B4_reg                                      0xB8099BB4
#define  KMC_METER_TOP_KMC_METER_TOP_B4_inst_addr                                "0x002D"
#define  set_KMC_METER_TOP_KMC_METER_TOP_B4_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_B4_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_B4_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_B4_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_B4_regr_kmc_meter_rdbk_histo13_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_B4_regr_kmc_meter_rdbk_histo13_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_B4_regr_kmc_meter_rdbk_histo13(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_B4_get_regr_kmc_meter_rdbk_histo13(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_B8                                         0x18099BB8
#define  KMC_METER_TOP_KMC_METER_TOP_B8_reg_addr                                 "0xB8099BB8"
#define  KMC_METER_TOP_KMC_METER_TOP_B8_reg                                      0xB8099BB8
#define  KMC_METER_TOP_KMC_METER_TOP_B8_inst_addr                                "0x002E"
#define  set_KMC_METER_TOP_KMC_METER_TOP_B8_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_B8_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_B8_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_B8_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_B8_regr_kmc_meter_rdbk_histo14_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_B8_regr_kmc_meter_rdbk_histo14_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_B8_regr_kmc_meter_rdbk_histo14(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_B8_get_regr_kmc_meter_rdbk_histo14(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_BC                                         0x18099BBC
#define  KMC_METER_TOP_KMC_METER_TOP_BC_reg_addr                                 "0xB8099BBC"
#define  KMC_METER_TOP_KMC_METER_TOP_BC_reg                                      0xB8099BBC
#define  KMC_METER_TOP_KMC_METER_TOP_BC_inst_addr                                "0x002F"
#define  set_KMC_METER_TOP_KMC_METER_TOP_BC_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_BC_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_BC_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_BC_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_BC_regr_kmc_meter_rdbk_histo15_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_BC_regr_kmc_meter_rdbk_histo15_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_BC_regr_kmc_meter_rdbk_histo15(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_BC_get_regr_kmc_meter_rdbk_histo15(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_C0                                         0x18099BC0
#define  KMC_METER_TOP_KMC_METER_TOP_C0_reg_addr                                 "0xB8099BC0"
#define  KMC_METER_TOP_KMC_METER_TOP_C0_reg                                      0xB8099BC0
#define  KMC_METER_TOP_KMC_METER_TOP_C0_inst_addr                                "0x0030"
#define  set_KMC_METER_TOP_KMC_METER_TOP_C0_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_C0_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_C0_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_C0_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_C0_regr_kmc_meter_rdbk_histo16_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_C0_regr_kmc_meter_rdbk_histo16_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_C0_regr_kmc_meter_rdbk_histo16(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_C0_get_regr_kmc_meter_rdbk_histo16(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_C4                                         0x18099BC4
#define  KMC_METER_TOP_KMC_METER_TOP_C4_reg_addr                                 "0xB8099BC4"
#define  KMC_METER_TOP_KMC_METER_TOP_C4_reg                                      0xB8099BC4
#define  KMC_METER_TOP_KMC_METER_TOP_C4_inst_addr                                "0x0031"
#define  set_KMC_METER_TOP_KMC_METER_TOP_C4_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_C4_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_C4_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_C4_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_C4_regr_kmc_meter_rdbk_histo17_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_C4_regr_kmc_meter_rdbk_histo17_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_C4_regr_kmc_meter_rdbk_histo17(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_C4_get_regr_kmc_meter_rdbk_histo17(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_C8                                         0x18099BC8
#define  KMC_METER_TOP_KMC_METER_TOP_C8_reg_addr                                 "0xB8099BC8"
#define  KMC_METER_TOP_KMC_METER_TOP_C8_reg                                      0xB8099BC8
#define  KMC_METER_TOP_KMC_METER_TOP_C8_inst_addr                                "0x0032"
#define  set_KMC_METER_TOP_KMC_METER_TOP_C8_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_C8_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_C8_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_C8_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_C8_regr_kmc_meter_rdbk_histo18_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_C8_regr_kmc_meter_rdbk_histo18_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_C8_regr_kmc_meter_rdbk_histo18(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_C8_get_regr_kmc_meter_rdbk_histo18(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_CC                                         0x18099BCC
#define  KMC_METER_TOP_KMC_METER_TOP_CC_reg_addr                                 "0xB8099BCC"
#define  KMC_METER_TOP_KMC_METER_TOP_CC_reg                                      0xB8099BCC
#define  KMC_METER_TOP_KMC_METER_TOP_CC_inst_addr                                "0x0033"
#define  set_KMC_METER_TOP_KMC_METER_TOP_CC_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_CC_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_CC_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_CC_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_CC_regr_kmc_meter_rdbk_histo19_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_CC_regr_kmc_meter_rdbk_histo19_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_CC_regr_kmc_meter_rdbk_histo19(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_CC_get_regr_kmc_meter_rdbk_histo19(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_D0                                         0x18099BD0
#define  KMC_METER_TOP_KMC_METER_TOP_D0_reg_addr                                 "0xB8099BD0"
#define  KMC_METER_TOP_KMC_METER_TOP_D0_reg                                      0xB8099BD0
#define  KMC_METER_TOP_KMC_METER_TOP_D0_inst_addr                                "0x0034"
#define  set_KMC_METER_TOP_KMC_METER_TOP_D0_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_D0_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_D0_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_D0_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_D0_regr_kmc_meter_rdbk_histo20_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_D0_regr_kmc_meter_rdbk_histo20_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_D0_regr_kmc_meter_rdbk_histo20(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_D0_get_regr_kmc_meter_rdbk_histo20(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_D4                                         0x18099BD4
#define  KMC_METER_TOP_KMC_METER_TOP_D4_reg_addr                                 "0xB8099BD4"
#define  KMC_METER_TOP_KMC_METER_TOP_D4_reg                                      0xB8099BD4
#define  KMC_METER_TOP_KMC_METER_TOP_D4_inst_addr                                "0x0035"
#define  set_KMC_METER_TOP_KMC_METER_TOP_D4_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_D4_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_D4_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_D4_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_D4_regr_kmc_meter_rdbk_histo21_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_D4_regr_kmc_meter_rdbk_histo21_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_D4_regr_kmc_meter_rdbk_histo21(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_D4_get_regr_kmc_meter_rdbk_histo21(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_D8                                         0x18099BD8
#define  KMC_METER_TOP_KMC_METER_TOP_D8_reg_addr                                 "0xB8099BD8"
#define  KMC_METER_TOP_KMC_METER_TOP_D8_reg                                      0xB8099BD8
#define  KMC_METER_TOP_KMC_METER_TOP_D8_inst_addr                                "0x0036"
#define  set_KMC_METER_TOP_KMC_METER_TOP_D8_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_D8_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_D8_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_D8_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_D8_regr_kmc_meter_rdbk_histo22_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_D8_regr_kmc_meter_rdbk_histo22_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_D8_regr_kmc_meter_rdbk_histo22(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_D8_get_regr_kmc_meter_rdbk_histo22(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_DC                                         0x18099BDC
#define  KMC_METER_TOP_KMC_METER_TOP_DC_reg_addr                                 "0xB8099BDC"
#define  KMC_METER_TOP_KMC_METER_TOP_DC_reg                                      0xB8099BDC
#define  KMC_METER_TOP_KMC_METER_TOP_DC_inst_addr                                "0x0037"
#define  set_KMC_METER_TOP_KMC_METER_TOP_DC_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_DC_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_DC_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_DC_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_DC_regr_kmc_meter_rdbk_histo23_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_DC_regr_kmc_meter_rdbk_histo23_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_DC_regr_kmc_meter_rdbk_histo23(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_DC_get_regr_kmc_meter_rdbk_histo23(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_E0                                         0x18099BE0
#define  KMC_METER_TOP_KMC_METER_TOP_E0_reg_addr                                 "0xB8099BE0"
#define  KMC_METER_TOP_KMC_METER_TOP_E0_reg                                      0xB8099BE0
#define  KMC_METER_TOP_KMC_METER_TOP_E0_inst_addr                                "0x0038"
#define  set_KMC_METER_TOP_KMC_METER_TOP_E0_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_E0_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_E0_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_E0_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_E0_regr_kmc_meter_rdbk_histo24_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_E0_regr_kmc_meter_rdbk_histo24_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_E0_regr_kmc_meter_rdbk_histo24(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_E0_get_regr_kmc_meter_rdbk_histo24(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_E4                                         0x18099BE4
#define  KMC_METER_TOP_KMC_METER_TOP_E4_reg_addr                                 "0xB8099BE4"
#define  KMC_METER_TOP_KMC_METER_TOP_E4_reg                                      0xB8099BE4
#define  KMC_METER_TOP_KMC_METER_TOP_E4_inst_addr                                "0x0039"
#define  set_KMC_METER_TOP_KMC_METER_TOP_E4_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_E4_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_E4_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_E4_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_E4_regr_kmc_meter_rdbk_histo25_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_E4_regr_kmc_meter_rdbk_histo25_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_E4_regr_kmc_meter_rdbk_histo25(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_E4_get_regr_kmc_meter_rdbk_histo25(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_E8                                         0x18099BE8
#define  KMC_METER_TOP_KMC_METER_TOP_E8_reg_addr                                 "0xB8099BE8"
#define  KMC_METER_TOP_KMC_METER_TOP_E8_reg                                      0xB8099BE8
#define  KMC_METER_TOP_KMC_METER_TOP_E8_inst_addr                                "0x003A"
#define  set_KMC_METER_TOP_KMC_METER_TOP_E8_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_E8_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_E8_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_E8_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_E8_regr_kmc_meter_rdbk_histo26_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_E8_regr_kmc_meter_rdbk_histo26_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_E8_regr_kmc_meter_rdbk_histo26(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_E8_get_regr_kmc_meter_rdbk_histo26(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_EC                                         0x18099BEC
#define  KMC_METER_TOP_KMC_METER_TOP_EC_reg_addr                                 "0xB8099BEC"
#define  KMC_METER_TOP_KMC_METER_TOP_EC_reg                                      0xB8099BEC
#define  KMC_METER_TOP_KMC_METER_TOP_EC_inst_addr                                "0x003B"
#define  set_KMC_METER_TOP_KMC_METER_TOP_EC_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_EC_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_EC_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_EC_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_EC_regr_kmc_meter_rdbk_histo27_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_EC_regr_kmc_meter_rdbk_histo27_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_EC_regr_kmc_meter_rdbk_histo27(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_EC_get_regr_kmc_meter_rdbk_histo27(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_F0                                         0x18099BF0
#define  KMC_METER_TOP_KMC_METER_TOP_F0_reg_addr                                 "0xB8099BF0"
#define  KMC_METER_TOP_KMC_METER_TOP_F0_reg                                      0xB8099BF0
#define  KMC_METER_TOP_KMC_METER_TOP_F0_inst_addr                                "0x003C"
#define  set_KMC_METER_TOP_KMC_METER_TOP_F0_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_F0_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_F0_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_F0_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_F0_regr_kmc_meter_rdbk_histo28_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_F0_regr_kmc_meter_rdbk_histo28_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_F0_regr_kmc_meter_rdbk_histo28(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_F0_get_regr_kmc_meter_rdbk_histo28(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_F4                                         0x18099BF4
#define  KMC_METER_TOP_KMC_METER_TOP_F4_reg_addr                                 "0xB8099BF4"
#define  KMC_METER_TOP_KMC_METER_TOP_F4_reg                                      0xB8099BF4
#define  KMC_METER_TOP_KMC_METER_TOP_F4_inst_addr                                "0x003D"
#define  set_KMC_METER_TOP_KMC_METER_TOP_F4_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_F4_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_F4_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_F4_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_F4_regr_kmc_meter_rdbk_histo29_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_F4_regr_kmc_meter_rdbk_histo29_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_F4_regr_kmc_meter_rdbk_histo29(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_F4_get_regr_kmc_meter_rdbk_histo29(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_F8                                         0x18099BF8
#define  KMC_METER_TOP_KMC_METER_TOP_F8_reg_addr                                 "0xB8099BF8"
#define  KMC_METER_TOP_KMC_METER_TOP_F8_reg                                      0xB8099BF8
#define  KMC_METER_TOP_KMC_METER_TOP_F8_inst_addr                                "0x003E"
#define  set_KMC_METER_TOP_KMC_METER_TOP_F8_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_F8_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_F8_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_F8_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_F8_regr_kmc_meter_rdbk_histo30_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_F8_regr_kmc_meter_rdbk_histo30_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_F8_regr_kmc_meter_rdbk_histo30(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_F8_get_regr_kmc_meter_rdbk_histo30(data)    (0x007FFFFF&(data))

#define  KMC_METER_TOP_KMC_METER_TOP_FC                                         0x18099BFC
#define  KMC_METER_TOP_KMC_METER_TOP_FC_reg_addr                                 "0xB8099BFC"
#define  KMC_METER_TOP_KMC_METER_TOP_FC_reg                                      0xB8099BFC
#define  KMC_METER_TOP_KMC_METER_TOP_FC_inst_addr                                "0x003F"
#define  set_KMC_METER_TOP_KMC_METER_TOP_FC_reg(data)                            (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_FC_reg)=data)
#define  get_KMC_METER_TOP_KMC_METER_TOP_FC_reg                                  (*((volatile unsigned int*)KMC_METER_TOP_KMC_METER_TOP_FC_reg))
#define  KMC_METER_TOP_KMC_METER_TOP_FC_regr_kmc_meter_rdbk_histo31_shift        (0)
#define  KMC_METER_TOP_KMC_METER_TOP_FC_regr_kmc_meter_rdbk_histo31_mask         (0x007FFFFF)
#define  KMC_METER_TOP_KMC_METER_TOP_FC_regr_kmc_meter_rdbk_histo31(data)        (0x007FFFFF&(data))
#define  KMC_METER_TOP_KMC_METER_TOP_FC_get_regr_kmc_meter_rdbk_histo31(data)    (0x007FFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KMC_METER_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  kmc_meter_end_x_yuv:12;
        RBus_UInt32  kmc_meter_start_x_yuv:12;
        RBus_UInt32  kmc_meter_yuv_sel:2;
    };
}kmc_meter_top_kmc_meter_top_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_end_y_yuv:12;
        RBus_UInt32  kmc_meter_start_y_yuv:12;
    };
}kmc_meter_top_kmc_meter_top_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_bw_end_x:12;
        RBus_UInt32  kmc_meter_bw_start_x:12;
    };
}kmc_meter_top_kmc_meter_top_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_bw_end_y:12;
        RBus_UInt32  kmc_meter_bw_start_y:12;
    };
}kmc_meter_top_kmc_meter_top_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  kmc_meter_bw_diff_shift:3;
        RBus_UInt32  kmc_meter_bw_cr_factor:8;
        RBus_UInt32  kmc_meter_bw_cb_factor:8;
        RBus_UInt32  kmc_meter_bw_y_factor:8;
    };
}kmc_meter_top_kmc_meter_top_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_bw_filter_h_01:12;
        RBus_UInt32  kmc_meter_bw_filter_h_00:12;
    };
}kmc_meter_top_kmc_meter_top_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_bw_filter_h_03:12;
        RBus_UInt32  kmc_meter_bw_filter_h_02:12;
    };
}kmc_meter_top_kmc_meter_top_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_bw_filter_h_05:12;
        RBus_UInt32  kmc_meter_bw_filter_h_04:12;
    };
}kmc_meter_top_kmc_meter_top_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_bw_filter_h_07:12;
        RBus_UInt32  kmc_meter_bw_filter_h_06:12;
    };
}kmc_meter_top_kmc_meter_top_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_bw_filter_h_09:12;
        RBus_UInt32  kmc_meter_bw_filter_h_08:12;
    };
}kmc_meter_top_kmc_meter_top_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_bw_filter_h_0b:12;
        RBus_UInt32  kmc_meter_bw_filter_h_0a:12;
    };
}kmc_meter_top_kmc_meter_top_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_bw_filter_h_10:12;
        RBus_UInt32  kmc_meter_bw_filter_h_0c:12;
    };
}kmc_meter_top_kmc_meter_top_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_bw_filter_h_12:12;
        RBus_UInt32  kmc_meter_bw_filter_h_11:12;
    };
}kmc_meter_top_kmc_meter_top_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_bw_filter_h_14:12;
        RBus_UInt32  kmc_meter_bw_filter_h_13:12;
    };
}kmc_meter_top_kmc_meter_top_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_bw_filter_h_16:12;
        RBus_UInt32  kmc_meter_bw_filter_h_15:12;
    };
}kmc_meter_top_kmc_meter_top_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_bw_filter_h_18:12;
        RBus_UInt32  kmc_meter_bw_filter_h_17:12;
    };
}kmc_meter_top_kmc_meter_top_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_bw_filter_h_1a:12;
        RBus_UInt32  kmc_meter_bw_filter_h_19:12;
    };
}kmc_meter_top_kmc_meter_top_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_bw_filter_h_1c:12;
        RBus_UInt32  kmc_meter_bw_filter_h_1b:12;
    };
}kmc_meter_top_kmc_meter_top_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  kmc_meter_dr2_1:10;
        RBus_UInt32  kmc_meter_dr1_1:10;
        RBus_UInt32  kmc_meter_dr0_1:10;
    };
}kmc_meter_top_kmc_meter_top_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  kmc_meter_bw_h_thr0_1:25;
    };
}kmc_meter_top_kmc_meter_top_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  kmc_meter_bw_h_thr1_1:25;
    };
}kmc_meter_top_kmc_meter_top_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  kmc_meter_bw_h_thr2_1:25;
    };
}kmc_meter_top_kmc_meter_top_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kmc_meter_bw_h_slp1_1:12;
        RBus_UInt32  kmc_meter_bw_h_slp0_1:12;
    };
}kmc_meter_top_kmc_meter_top_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  kmc_meter_detail_diff_shift:3;
        RBus_UInt32  kmc_meter_detail_dr_thr:10;
        RBus_UInt32  kmc_meter_dr_filter_en:1;
    };
}kmc_meter_top_kmc_meter_top_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  kmc_meter_detail_thr0:25;
    };
}kmc_meter_top_kmc_meter_top_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  kmc_meter_detail_thr1:25;
    };
}kmc_meter_top_kmc_meter_top_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  kmc_meter_detail_thr2:25;
    };
}kmc_meter_top_kmc_meter_top_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  kmc_meter_bw_coring1:25;
    };
}kmc_meter_top_kmc_meter_top_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_kmc_meter_detail_bin0:24;
    };
}kmc_meter_top_kmc_meter_top_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_kmc_meter_detail_bin1:24;
    };
}kmc_meter_top_kmc_meter_top_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_kmc_meter_detail_bin2:24;
    };
}kmc_meter_top_kmc_meter_top_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_bw_h_type1:23;
    };
}kmc_meter_top_kmc_meter_top_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo00:23;
    };
}kmc_meter_top_kmc_meter_top_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo01:23;
    };
}kmc_meter_top_kmc_meter_top_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo02:23;
    };
}kmc_meter_top_kmc_meter_top_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo03:23;
    };
}kmc_meter_top_kmc_meter_top_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo04:23;
    };
}kmc_meter_top_kmc_meter_top_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo05:23;
    };
}kmc_meter_top_kmc_meter_top_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo06:23;
    };
}kmc_meter_top_kmc_meter_top_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo07:23;
    };
}kmc_meter_top_kmc_meter_top_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo08:23;
    };
}kmc_meter_top_kmc_meter_top_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo09:23;
    };
}kmc_meter_top_kmc_meter_top_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo10:23;
    };
}kmc_meter_top_kmc_meter_top_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo11:23;
    };
}kmc_meter_top_kmc_meter_top_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo12:23;
    };
}kmc_meter_top_kmc_meter_top_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo13:23;
    };
}kmc_meter_top_kmc_meter_top_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo14:23;
    };
}kmc_meter_top_kmc_meter_top_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo15:23;
    };
}kmc_meter_top_kmc_meter_top_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo16:23;
    };
}kmc_meter_top_kmc_meter_top_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo17:23;
    };
}kmc_meter_top_kmc_meter_top_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo18:23;
    };
}kmc_meter_top_kmc_meter_top_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo19:23;
    };
}kmc_meter_top_kmc_meter_top_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo20:23;
    };
}kmc_meter_top_kmc_meter_top_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo21:23;
    };
}kmc_meter_top_kmc_meter_top_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo22:23;
    };
}kmc_meter_top_kmc_meter_top_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo23:23;
    };
}kmc_meter_top_kmc_meter_top_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo24:23;
    };
}kmc_meter_top_kmc_meter_top_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo25:23;
    };
}kmc_meter_top_kmc_meter_top_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo26:23;
    };
}kmc_meter_top_kmc_meter_top_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo27:23;
    };
}kmc_meter_top_kmc_meter_top_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo28:23;
    };
}kmc_meter_top_kmc_meter_top_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo29:23;
    };
}kmc_meter_top_kmc_meter_top_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo30:23;
    };
}kmc_meter_top_kmc_meter_top_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  regr_kmc_meter_rdbk_histo31:23;
    };
}kmc_meter_top_kmc_meter_top_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======KMC_METER_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_yuv_sel:2;
        RBus_UInt32  kmc_meter_start_x_yuv:12;
        RBus_UInt32  kmc_meter_end_x_yuv:12;
        RBus_UInt32  res1:6;
    };
}kmc_meter_top_kmc_meter_top_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_start_y_yuv:12;
        RBus_UInt32  kmc_meter_end_y_yuv:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_start_x:12;
        RBus_UInt32  kmc_meter_bw_end_x:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_start_y:12;
        RBus_UInt32  kmc_meter_bw_end_y:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_y_factor:8;
        RBus_UInt32  kmc_meter_bw_cb_factor:8;
        RBus_UInt32  kmc_meter_bw_cr_factor:8;
        RBus_UInt32  kmc_meter_bw_diff_shift:3;
        RBus_UInt32  res1:5;
    };
}kmc_meter_top_kmc_meter_top_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_filter_h_00:12;
        RBus_UInt32  kmc_meter_bw_filter_h_01:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_filter_h_02:12;
        RBus_UInt32  kmc_meter_bw_filter_h_03:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_filter_h_04:12;
        RBus_UInt32  kmc_meter_bw_filter_h_05:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_filter_h_06:12;
        RBus_UInt32  kmc_meter_bw_filter_h_07:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_filter_h_08:12;
        RBus_UInt32  kmc_meter_bw_filter_h_09:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_filter_h_0a:12;
        RBus_UInt32  kmc_meter_bw_filter_h_0b:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_filter_h_0c:12;
        RBus_UInt32  kmc_meter_bw_filter_h_10:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_filter_h_11:12;
        RBus_UInt32  kmc_meter_bw_filter_h_12:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_filter_h_13:12;
        RBus_UInt32  kmc_meter_bw_filter_h_14:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_filter_h_15:12;
        RBus_UInt32  kmc_meter_bw_filter_h_16:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_filter_h_17:12;
        RBus_UInt32  kmc_meter_bw_filter_h_18:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_filter_h_19:12;
        RBus_UInt32  kmc_meter_bw_filter_h_1a:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_filter_h_1b:12;
        RBus_UInt32  kmc_meter_bw_filter_h_1c:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_dr0_1:10;
        RBus_UInt32  kmc_meter_dr1_1:10;
        RBus_UInt32  kmc_meter_dr2_1:10;
        RBus_UInt32  res1:2;
    };
}kmc_meter_top_kmc_meter_top_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_h_thr0_1:25;
        RBus_UInt32  res1:7;
    };
}kmc_meter_top_kmc_meter_top_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_h_thr1_1:25;
        RBus_UInt32  res1:7;
    };
}kmc_meter_top_kmc_meter_top_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_h_thr2_1:25;
        RBus_UInt32  res1:7;
    };
}kmc_meter_top_kmc_meter_top_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_h_slp0_1:12;
        RBus_UInt32  kmc_meter_bw_h_slp1_1:12;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_dr_filter_en:1;
        RBus_UInt32  kmc_meter_detail_dr_thr:10;
        RBus_UInt32  kmc_meter_detail_diff_shift:3;
        RBus_UInt32  res1:18;
    };
}kmc_meter_top_kmc_meter_top_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_detail_thr0:25;
        RBus_UInt32  res1:7;
    };
}kmc_meter_top_kmc_meter_top_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_detail_thr1:25;
        RBus_UInt32  res1:7;
    };
}kmc_meter_top_kmc_meter_top_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_detail_thr2:25;
        RBus_UInt32  res1:7;
    };
}kmc_meter_top_kmc_meter_top_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_meter_bw_coring1:25;
        RBus_UInt32  res1:7;
    };
}kmc_meter_top_kmc_meter_top_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_detail_bin0:24;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_detail_bin1:24;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_detail_bin2:24;
        RBus_UInt32  res1:8;
    };
}kmc_meter_top_kmc_meter_top_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_bw_h_type1:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo00:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo01:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo02:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo03:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo04:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo05:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo06:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo07:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo08:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo09:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo10:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo11:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo12:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo13:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo14:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo15:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo16:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo17:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo18:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo19:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo20:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo21:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo22:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo23:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo24:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo25:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo26:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo27:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo28:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo29:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo30:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kmc_meter_rdbk_histo31:23;
        RBus_UInt32  res1:9;
    };
}kmc_meter_top_kmc_meter_top_fc_RBUS;




#endif 


#endif 
