/**
* @file Merlin5-DesignSpec-HDR_Composer
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_DHDR_V_COMPOSER_REG_H_
#define _RBUS_DHDR_V_COMPOSER_REG_H_

#include "rbus_types.h"



//  DHDR_V_COMPOSER Register Address
#define  DHDR_V_COMPOSER_Composer                                               0x1806B000
#define  DHDR_V_COMPOSER_Composer_reg_addr                                       "0xB806B000"
#define  DHDR_V_COMPOSER_Composer_reg                                            0xB806B000
#define  DHDR_V_COMPOSER_Composer_inst_addr                                      "0x0000"
#define  set_DHDR_V_COMPOSER_Composer_reg(data)                                  (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_reg                                        (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_reg))
#define  DHDR_V_COMPOSER_Composer_vdr_bit_depth_shift                            (16)
#define  DHDR_V_COMPOSER_Composer_bl_bit_depth_shift                             (8)
#define  DHDR_V_COMPOSER_Composer_coefficient_log2_denom_shift                   (0)
#define  DHDR_V_COMPOSER_Composer_vdr_bit_depth_mask                             (0x00070000)
#define  DHDR_V_COMPOSER_Composer_bl_bit_depth_mask                              (0x00000100)
#define  DHDR_V_COMPOSER_Composer_coefficient_log2_denom_mask                    (0x0000001F)
#define  DHDR_V_COMPOSER_Composer_vdr_bit_depth(data)                            (0x00070000&((data)<<16))
#define  DHDR_V_COMPOSER_Composer_bl_bit_depth(data)                             (0x00000100&((data)<<8))
#define  DHDR_V_COMPOSER_Composer_coefficient_log2_denom(data)                   (0x0000001F&(data))
#define  DHDR_V_COMPOSER_Composer_get_vdr_bit_depth(data)                        ((0x00070000&(data))>>16)
#define  DHDR_V_COMPOSER_Composer_get_bl_bit_depth(data)                         ((0x00000100&(data))>>8)
#define  DHDR_V_COMPOSER_Composer_get_coefficient_log2_denom(data)               (0x0000001F&(data))

#define  DHDR_V_COMPOSER_Composer_BL                                            0x1806B004
#define  DHDR_V_COMPOSER_Composer_BL_reg_addr                                    "0xB806B004"
#define  DHDR_V_COMPOSER_Composer_BL_reg                                         0xB806B004
#define  DHDR_V_COMPOSER_Composer_BL_inst_addr                                   "0x0001"
#define  set_DHDR_V_COMPOSER_Composer_BL_reg(data)                               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_reg                                     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_reg))
#define  DHDR_V_COMPOSER_Composer_BL_num_pivots_cmp2_shift                       (20)
#define  DHDR_V_COMPOSER_Composer_BL_num_pivots_cmp1_shift                       (16)
#define  DHDR_V_COMPOSER_Composer_BL_num_pivots_cmp0_shift                       (12)
#define  DHDR_V_COMPOSER_Composer_BL_mapping_idc_cmp2_shift                      (8)
#define  DHDR_V_COMPOSER_Composer_BL_mapping_idc_cmp1_shift                      (4)
#define  DHDR_V_COMPOSER_Composer_BL_num_pivots_cmp2_mask                        (0x00300000)
#define  DHDR_V_COMPOSER_Composer_BL_num_pivots_cmp1_mask                        (0x00030000)
#define  DHDR_V_COMPOSER_Composer_BL_num_pivots_cmp0_mask                        (0x00007000)
#define  DHDR_V_COMPOSER_Composer_BL_mapping_idc_cmp2_mask                       (0x00000100)
#define  DHDR_V_COMPOSER_Composer_BL_mapping_idc_cmp1_mask                       (0x00000010)
#define  DHDR_V_COMPOSER_Composer_BL_num_pivots_cmp2(data)                       (0x00300000&((data)<<20))
#define  DHDR_V_COMPOSER_Composer_BL_num_pivots_cmp1(data)                       (0x00030000&((data)<<16))
#define  DHDR_V_COMPOSER_Composer_BL_num_pivots_cmp0(data)                       (0x00007000&((data)<<12))
#define  DHDR_V_COMPOSER_Composer_BL_mapping_idc_cmp2(data)                      (0x00000100&((data)<<8))
#define  DHDR_V_COMPOSER_Composer_BL_mapping_idc_cmp1(data)                      (0x00000010&((data)<<4))
#define  DHDR_V_COMPOSER_Composer_BL_get_num_pivots_cmp2(data)                   ((0x00300000&(data))>>20)
#define  DHDR_V_COMPOSER_Composer_BL_get_num_pivots_cmp1(data)                   ((0x00030000&(data))>>16)
#define  DHDR_V_COMPOSER_Composer_BL_get_num_pivots_cmp0(data)                   ((0x00007000&(data))>>12)
#define  DHDR_V_COMPOSER_Composer_BL_get_mapping_idc_cmp2(data)                  ((0x00000100&(data))>>8)
#define  DHDR_V_COMPOSER_Composer_BL_get_mapping_idc_cmp1(data)                  ((0x00000010&(data))>>4)

#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P01                         0x1806B008
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P01_reg_addr                 "0xB806B008"
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P01_reg                      0xB806B008
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P01_inst_addr                "0x0002"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P01_reg(data)            (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P01_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P01_reg                  (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P01_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P01_pivot_value_cmp0_pivot_1_shift (16)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P01_pivot_value_cmp0_pivot_0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P01_pivot_value_cmp0_pivot_1_mask (0x03FF0000)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P01_pivot_value_cmp0_pivot_0_mask (0x000003FF)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P01_pivot_value_cmp0_pivot_1(data) (0x03FF0000&((data)<<16))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P01_pivot_value_cmp0_pivot_0(data) (0x000003FF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P01_get_pivot_value_cmp0_pivot_1(data) ((0x03FF0000&(data))>>16)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P01_get_pivot_value_cmp0_pivot_0(data) (0x000003FF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P23                         0x1806B00C
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P23_reg_addr                 "0xB806B00C"
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P23_reg                      0xB806B00C
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P23_inst_addr                "0x0003"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P23_reg(data)            (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P23_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P23_reg                  (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P23_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P23_pivot_value_cmp0_pivot_3_shift (16)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P23_pivot_value_cmp0_pivot_2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P23_pivot_value_cmp0_pivot_3_mask (0x03FF0000)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P23_pivot_value_cmp0_pivot_2_mask (0x000003FF)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P23_pivot_value_cmp0_pivot_3(data) (0x03FF0000&((data)<<16))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P23_pivot_value_cmp0_pivot_2(data) (0x000003FF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P23_get_pivot_value_cmp0_pivot_3(data) ((0x03FF0000&(data))>>16)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P23_get_pivot_value_cmp0_pivot_2(data) (0x000003FF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P45                         0x1806B010
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P45_reg_addr                 "0xB806B010"
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P45_reg                      0xB806B010
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P45_inst_addr                "0x0004"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P45_reg(data)            (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P45_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P45_reg                  (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P45_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P45_pivot_value_cmp0_pivot_5_shift (16)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P45_pivot_value_cmp0_pivot_4_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P45_pivot_value_cmp0_pivot_5_mask (0x03FF0000)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P45_pivot_value_cmp0_pivot_4_mask (0x000003FF)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P45_pivot_value_cmp0_pivot_5(data) (0x03FF0000&((data)<<16))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P45_pivot_value_cmp0_pivot_4(data) (0x000003FF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P45_get_pivot_value_cmp0_pivot_5(data) ((0x03FF0000&(data))>>16)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P45_get_pivot_value_cmp0_pivot_4(data) (0x000003FF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P67                         0x1806B014
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P67_reg_addr                 "0xB806B014"
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P67_reg                      0xB806B014
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P67_inst_addr                "0x0005"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P67_reg(data)            (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P67_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P67_reg                  (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P67_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P67_pivot_value_cmp0_pivot_7_shift (16)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P67_pivot_value_cmp0_pivot_6_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P67_pivot_value_cmp0_pivot_7_mask (0x03FF0000)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P67_pivot_value_cmp0_pivot_6_mask (0x000003FF)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P67_pivot_value_cmp0_pivot_7(data) (0x03FF0000&((data)<<16))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P67_pivot_value_cmp0_pivot_6(data) (0x000003FF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P67_get_pivot_value_cmp0_pivot_7(data) ((0x03FF0000&(data))>>16)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P67_get_pivot_value_cmp0_pivot_6(data) (0x000003FF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P8                          0x1806B018
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P8_reg_addr                  "0xB806B018"
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P8_reg                       0xB806B018
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P8_inst_addr                 "0x0006"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P8_reg(data)             (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P8_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P8_reg                   (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P8_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P8_pivot_value_cmp0_pivot_8_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P8_pivot_value_cmp0_pivot_8_mask (0x000003FF)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P8_pivot_value_cmp0_pivot_8(data) (0x000003FF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp0_P8_get_pivot_value_cmp0_pivot_8(data) (0x000003FF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P01                         0x1806B01C
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P01_reg_addr                 "0xB806B01C"
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P01_reg                      0xB806B01C
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P01_inst_addr                "0x0007"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P01_reg(data)            (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P01_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P01_reg                  (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P01_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P01_pivot_value_cmp1_pivot_1_shift (16)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P01_pivot_value_cmp1_pivot_0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P01_pivot_value_cmp1_pivot_1_mask (0x03FF0000)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P01_pivot_value_cmp1_pivot_0_mask (0x000003FF)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P01_pivot_value_cmp1_pivot_1(data) (0x03FF0000&((data)<<16))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P01_pivot_value_cmp1_pivot_0(data) (0x000003FF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P01_get_pivot_value_cmp1_pivot_1(data) ((0x03FF0000&(data))>>16)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P01_get_pivot_value_cmp1_pivot_0(data) (0x000003FF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P23                         0x1806B020
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P23_reg_addr                 "0xB806B020"
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P23_reg                      0xB806B020
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P23_inst_addr                "0x0008"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P23_reg(data)            (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P23_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P23_reg                  (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P23_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P23_pivot_value_cmp1_pivot_3_shift (16)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P23_pivot_value_cmp1_pivot_2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P23_pivot_value_cmp1_pivot_3_mask (0x03FF0000)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P23_pivot_value_cmp1_pivot_2_mask (0x000003FF)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P23_pivot_value_cmp1_pivot_3(data) (0x03FF0000&((data)<<16))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P23_pivot_value_cmp1_pivot_2(data) (0x000003FF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P23_get_pivot_value_cmp1_pivot_3(data) ((0x03FF0000&(data))>>16)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P23_get_pivot_value_cmp1_pivot_2(data) (0x000003FF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P45                         0x1806B024
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P45_reg_addr                 "0xB806B024"
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P45_reg                      0xB806B024
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P45_inst_addr                "0x0009"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P45_reg(data)            (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P45_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P45_reg                  (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P45_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P45_pivot_value_cmp1_pivot_4_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P45_pivot_value_cmp1_pivot_4_mask (0x000003FF)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P45_pivot_value_cmp1_pivot_4(data) (0x000003FF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp1_P45_get_pivot_value_cmp1_pivot_4(data) (0x000003FF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P01                         0x1806B028
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P01_reg_addr                 "0xB806B028"
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P01_reg                      0xB806B028
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P01_inst_addr                "0x000A"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P01_reg(data)            (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P01_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P01_reg                  (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P01_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P01_pivot_value_cmp2_pivot_1_shift (16)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P01_pivot_value_cmp2_pivot_0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P01_pivot_value_cmp2_pivot_1_mask (0x03FF0000)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P01_pivot_value_cmp2_pivot_0_mask (0x000003FF)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P01_pivot_value_cmp2_pivot_1(data) (0x03FF0000&((data)<<16))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P01_pivot_value_cmp2_pivot_0(data) (0x000003FF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P01_get_pivot_value_cmp2_pivot_1(data) ((0x03FF0000&(data))>>16)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P01_get_pivot_value_cmp2_pivot_0(data) (0x000003FF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P23                         0x1806B02C
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P23_reg_addr                 "0xB806B02C"
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P23_reg                      0xB806B02C
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P23_inst_addr                "0x000B"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P23_reg(data)            (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P23_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P23_reg                  (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P23_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P23_pivot_value_cmp2_pivot_3_shift (16)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P23_pivot_value_cmp2_pivot_2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P23_pivot_value_cmp2_pivot_3_mask (0x03FF0000)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P23_pivot_value_cmp2_pivot_2_mask (0x000003FF)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P23_pivot_value_cmp2_pivot_3(data) (0x03FF0000&((data)<<16))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P23_pivot_value_cmp2_pivot_2(data) (0x000003FF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P23_get_pivot_value_cmp2_pivot_3(data) ((0x03FF0000&(data))>>16)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P23_get_pivot_value_cmp2_pivot_2(data) (0x000003FF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P45                         0x1806B030
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P45_reg_addr                 "0xB806B030"
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P45_reg                      0xB806B030
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P45_inst_addr                "0x000C"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P45_reg(data)            (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P45_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P45_reg                  (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P45_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P45_pivot_value_cmp2_pivot_4_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P45_pivot_value_cmp2_pivot_4_mask (0x000003FF)
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P45_pivot_value_cmp2_pivot_4(data) (0x000003FF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pivot_Val_Cmp2_P45_get_pivot_value_cmp2_pivot_4(data) (0x000003FF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma                       0x1806B034
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_reg_addr               "0xB806B034"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_reg                    0xB806B034
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_inst_addr              "0x000D"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot7_shift (28)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot6_shift (24)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot5_shift (20)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot4_shift (16)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot3_shift (12)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot2_shift (8)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot1_shift (4)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot7_mask (0x10000000)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot6_mask (0x01000000)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot5_mask (0x00100000)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot4_mask (0x00010000)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot3_mask (0x00001000)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot2_mask (0x00000100)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot1_mask (0x00000010)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot0_mask (0x00000001)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot7(data) (0x10000000&((data)<<28))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot6(data) (0x01000000&((data)<<24))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot5(data) (0x00100000&((data)<<20))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot4(data) (0x00010000&((data)<<16))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot3(data) (0x00001000&((data)<<12))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot2(data) (0x00000100&((data)<<8))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot1(data) (0x00000010&((data)<<4))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_poly_order_cmp0_pivot0(data) (0x00000001&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_get_poly_order_cmp0_pivot7(data) ((0x10000000&(data))>>28)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_get_poly_order_cmp0_pivot6(data) ((0x01000000&(data))>>24)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_get_poly_order_cmp0_pivot5(data) ((0x00100000&(data))>>20)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_get_poly_order_cmp0_pivot4(data) ((0x00010000&(data))>>16)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_get_poly_order_cmp0_pivot3(data) ((0x00001000&(data))>>12)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_get_poly_order_cmp0_pivot2(data) ((0x00000100&(data))>>8)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_get_poly_order_cmp0_pivot1(data) ((0x00000010&(data))>>4)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Luma_get_poly_order_cmp0_pivot0(data) (0x00000001&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1                    0x1806B038
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_reg_addr            "0xB806B038"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_reg                 0xB806B038
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_inst_addr           "0x000E"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_reg(data)       (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_reg             (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_poly_order_cmp1_pivot3_shift (12)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_poly_order_cmp1_pivot2_shift (8)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_poly_order_cmp1_pivot1_shift (4)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_poly_order_cmp1_pivot0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_poly_order_cmp1_pivot3_mask (0x00001000)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_poly_order_cmp1_pivot2_mask (0x00000100)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_poly_order_cmp1_pivot1_mask (0x00000010)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_poly_order_cmp1_pivot0_mask (0x00000001)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_poly_order_cmp1_pivot3(data) (0x00001000&((data)<<12))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_poly_order_cmp1_pivot2(data) (0x00000100&((data)<<8))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_poly_order_cmp1_pivot1(data) (0x00000010&((data)<<4))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_poly_order_cmp1_pivot0(data) (0x00000001&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_get_poly_order_cmp1_pivot3(data) ((0x00001000&(data))>>12)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_get_poly_order_cmp1_pivot2(data) ((0x00000100&(data))>>8)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_get_poly_order_cmp1_pivot1(data) ((0x00000010&(data))>>4)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma1_get_poly_order_cmp1_pivot0(data) (0x00000001&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2                    0x1806B03C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_reg_addr            "0xB806B03C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_reg                 0xB806B03C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_inst_addr           "0x000F"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_reg(data)       (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_reg             (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_poly_order_cmp2_pivot3_shift (12)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_poly_order_cmp2_pivot2_shift (8)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_poly_order_cmp2_pivot1_shift (4)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_poly_order_cmp2_pivot0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_poly_order_cmp2_pivot3_mask (0x00001000)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_poly_order_cmp2_pivot2_mask (0x00000100)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_poly_order_cmp2_pivot1_mask (0x00000010)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_poly_order_cmp2_pivot0_mask (0x00000001)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_poly_order_cmp2_pivot3(data) (0x00001000&((data)<<12))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_poly_order_cmp2_pivot2(data) (0x00000100&((data)<<8))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_poly_order_cmp2_pivot1(data) (0x00000010&((data)<<4))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_poly_order_cmp2_pivot0(data) (0x00000001&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_get_poly_order_cmp2_pivot3(data) ((0x00001000&(data))>>12)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_get_poly_order_cmp2_pivot2(data) ((0x00000100&(data))>>8)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_get_poly_order_cmp2_pivot1(data) ((0x00000010&(data))>>4)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Order_Chroma2_get_poly_order_cmp2_pivot0(data) (0x00000001&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I0                  0x1806B080
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I0_reg_addr          "0xB806B080"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I0_reg               0xB806B080
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I0_inst_addr         "0x0010"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I0_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I0_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I0_poly_coef_cmp0_pivot0_i0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I0_poly_coef_cmp0_pivot0_i0_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I0_poly_coef_cmp0_pivot0_i0(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I0_get_poly_coef_cmp0_pivot0_i0(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I1                  0x1806B084
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I1_reg_addr          "0xB806B084"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I1_reg               0xB806B084
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I1_inst_addr         "0x0011"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I1_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I1_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I1_poly_coef_cmp0_pivot0_i1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I1_poly_coef_cmp0_pivot0_i1_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I1_poly_coef_cmp0_pivot0_i1(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I1_get_poly_coef_cmp0_pivot0_i1(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I2                  0x1806B088
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I2_reg_addr          "0xB806B088"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I2_reg               0xB806B088
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I2_inst_addr         "0x0012"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I2_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I2_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I2_poly_coef_cmp0_pivot0_i2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I2_poly_coef_cmp0_pivot0_i2_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I2_poly_coef_cmp0_pivot0_i2(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P0_I2_get_poly_coef_cmp0_pivot0_i2(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I0                  0x1806B08C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I0_reg_addr          "0xB806B08C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I0_reg               0xB806B08C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I0_inst_addr         "0x0013"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I0_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I0_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I0_poly_coef_cmp0_pivot1_i0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I0_poly_coef_cmp0_pivot1_i0_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I0_poly_coef_cmp0_pivot1_i0(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I0_get_poly_coef_cmp0_pivot1_i0(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I1                  0x1806B090
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I1_reg_addr          "0xB806B090"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I1_reg               0xB806B090
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I1_inst_addr         "0x0014"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I1_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I1_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I1_poly_coef_cmp0_pivot1_i1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I1_poly_coef_cmp0_pivot1_i1_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I1_poly_coef_cmp0_pivot1_i1(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I1_get_poly_coef_cmp0_pivot1_i1(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I2                  0x1806B094
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I2_reg_addr          "0xB806B094"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I2_reg               0xB806B094
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I2_inst_addr         "0x0015"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I2_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I2_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I2_poly_coef_cmp0_pivot1_i2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I2_poly_coef_cmp0_pivot1_i2_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I2_poly_coef_cmp0_pivot1_i2(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P1_I2_get_poly_coef_cmp0_pivot1_i2(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I0                  0x1806B098
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I0_reg_addr          "0xB806B098"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I0_reg               0xB806B098
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I0_inst_addr         "0x0016"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I0_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I0_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I0_poly_coef_cmp0_pivot2_i0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I0_poly_coef_cmp0_pivot2_i0_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I0_poly_coef_cmp0_pivot2_i0(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I0_get_poly_coef_cmp0_pivot2_i0(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I1                  0x1806B09C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I1_reg_addr          "0xB806B09C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I1_reg               0xB806B09C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I1_inst_addr         "0x0017"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I1_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I1_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I1_poly_coef_cmp0_pivot2_i1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I1_poly_coef_cmp0_pivot2_i1_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I1_poly_coef_cmp0_pivot2_i1(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I1_get_poly_coef_cmp0_pivot2_i1(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I2                  0x1806B0A0
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I2_reg_addr          "0xB806B0A0"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I2_reg               0xB806B0A0
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I2_inst_addr         "0x0018"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I2_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I2_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I2_poly_coef_cmp0_pivot2_i2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I2_poly_coef_cmp0_pivot2_i2_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I2_poly_coef_cmp0_pivot2_i2(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P2_I2_get_poly_coef_cmp0_pivot2_i2(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I0                  0x1806B0A4
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I0_reg_addr          "0xB806B0A4"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I0_reg               0xB806B0A4
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I0_inst_addr         "0x0019"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I0_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I0_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I0_poly_coef_cmp0_pivot3_i0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I0_poly_coef_cmp0_pivot3_i0_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I0_poly_coef_cmp0_pivot3_i0(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I0_get_poly_coef_cmp0_pivot3_i0(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I1                  0x1806B0A8
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I1_reg_addr          "0xB806B0A8"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I1_reg               0xB806B0A8
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I1_inst_addr         "0x001A"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I1_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I1_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I1_poly_coef_cmp0_pivot3_i1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I1_poly_coef_cmp0_pivot3_i1_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I1_poly_coef_cmp0_pivot3_i1(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I1_get_poly_coef_cmp0_pivot3_i1(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I2                  0x1806B0AC
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I2_reg_addr          "0xB806B0AC"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I2_reg               0xB806B0AC
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I2_inst_addr         "0x001B"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I2_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I2_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I2_poly_coef_cmp0_pivot3_i2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I2_poly_coef_cmp0_pivot3_i2_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I2_poly_coef_cmp0_pivot3_i2(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P3_I2_get_poly_coef_cmp0_pivot3_i2(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I0                  0x1806B0B0
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I0_reg_addr          "0xB806B0B0"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I0_reg               0xB806B0B0
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I0_inst_addr         "0x001C"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I0_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I0_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I0_poly_coef_cmp0_pivot4_i0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I0_poly_coef_cmp0_pivot4_i0_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I0_poly_coef_cmp0_pivot4_i0(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I0_get_poly_coef_cmp0_pivot4_i0(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I1                  0x1806B0B4
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I1_reg_addr          "0xB806B0B4"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I1_reg               0xB806B0B4
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I1_inst_addr         "0x001D"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I1_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I1_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I1_poly_coef_cmp0_pivot4_i1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I1_poly_coef_cmp0_pivot4_i1_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I1_poly_coef_cmp0_pivot4_i1(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I1_get_poly_coef_cmp0_pivot4_i1(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I2                  0x1806B0B8
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I2_reg_addr          "0xB806B0B8"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I2_reg               0xB806B0B8
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I2_inst_addr         "0x001E"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I2_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I2_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I2_poly_coef_cmp0_pivot4_i2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I2_poly_coef_cmp0_pivot4_i2_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I2_poly_coef_cmp0_pivot4_i2(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P4_I2_get_poly_coef_cmp0_pivot4_i2(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I0                  0x1806B0BC
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I0_reg_addr          "0xB806B0BC"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I0_reg               0xB806B0BC
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I0_inst_addr         "0x001F"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I0_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I0_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I0_poly_coef_cmp0_pivot5_i0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I0_poly_coef_cmp0_pivot5_i0_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I0_poly_coef_cmp0_pivot5_i0(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I0_get_poly_coef_cmp0_pivot5_i0(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I1                  0x1806B0C0
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I1_reg_addr          "0xB806B0C0"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I1_reg               0xB806B0C0
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I1_inst_addr         "0x0020"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I1_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I1_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I1_poly_coef_cmp0_pivot5_i1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I1_poly_coef_cmp0_pivot5_i1_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I1_poly_coef_cmp0_pivot5_i1(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I1_get_poly_coef_cmp0_pivot5_i1(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I2                  0x1806B0C4
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I2_reg_addr          "0xB806B0C4"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I2_reg               0xB806B0C4
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I2_inst_addr         "0x0021"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I2_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I2_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I2_poly_coef_cmp0_pivot5_i2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I2_poly_coef_cmp0_pivot5_i2_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I2_poly_coef_cmp0_pivot5_i2(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P5_I2_get_poly_coef_cmp0_pivot5_i2(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I0                  0x1806B0C8
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I0_reg_addr          "0xB806B0C8"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I0_reg               0xB806B0C8
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I0_inst_addr         "0x0022"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I0_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I0_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I0_poly_coef_cmp0_pivot6_i0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I0_poly_coef_cmp0_pivot6_i0_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I0_poly_coef_cmp0_pivot6_i0(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I0_get_poly_coef_cmp0_pivot6_i0(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I1                  0x1806B0CC
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I1_reg_addr          "0xB806B0CC"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I1_reg               0xB806B0CC
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I1_inst_addr         "0x0023"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I1_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I1_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I1_poly_coef_cmp0_pivot6_i1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I1_poly_coef_cmp0_pivot6_i1_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I1_poly_coef_cmp0_pivot6_i1(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I1_get_poly_coef_cmp0_pivot6_i1(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I2                  0x1806B0D0
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I2_reg_addr          "0xB806B0D0"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I2_reg               0xB806B0D0
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I2_inst_addr         "0x0024"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I2_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I2_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I2_poly_coef_cmp0_pivot6_i2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I2_poly_coef_cmp0_pivot6_i2_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I2_poly_coef_cmp0_pivot6_i2(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P6_I2_get_poly_coef_cmp0_pivot6_i2(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I0                  0x1806B0D4
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I0_reg_addr          "0xB806B0D4"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I0_reg               0xB806B0D4
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I0_inst_addr         "0x0025"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I0_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I0_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I0_poly_coef_cmp0_pivot7_i0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I0_poly_coef_cmp0_pivot7_i0_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I0_poly_coef_cmp0_pivot7_i0(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I0_get_poly_coef_cmp0_pivot7_i0(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I1                  0x1806B0D8
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I1_reg_addr          "0xB806B0D8"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I1_reg               0xB806B0D8
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I1_inst_addr         "0x0026"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I1_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I1_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I1_poly_coef_cmp0_pivot7_i1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I1_poly_coef_cmp0_pivot7_i1_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I1_poly_coef_cmp0_pivot7_i1(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I1_get_poly_coef_cmp0_pivot7_i1(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I2                  0x1806B0DC
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I2_reg_addr          "0xB806B0DC"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I2_reg               0xB806B0DC
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I2_inst_addr         "0x0027"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I2_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I2_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I2_poly_coef_cmp0_pivot7_i2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I2_poly_coef_cmp0_pivot7_i2_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I2_poly_coef_cmp0_pivot7_i2(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp0_P7_I2_get_poly_coef_cmp0_pivot7_i2(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I0                  0x1806B0E0
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I0_reg_addr          "0xB806B0E0"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I0_reg               0xB806B0E0
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I0_inst_addr         "0x0028"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I0_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I0_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I0_poly_coef_cmp1_pivot0_i0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I0_poly_coef_cmp1_pivot0_i0_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I0_poly_coef_cmp1_pivot0_i0(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I0_get_poly_coef_cmp1_pivot0_i0(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I1                  0x1806B0E4
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I1_reg_addr          "0xB806B0E4"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I1_reg               0xB806B0E4
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I1_inst_addr         "0x0029"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I1_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I1_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I1_poly_coef_cmp1_pivot0_i1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I1_poly_coef_cmp1_pivot0_i1_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I1_poly_coef_cmp1_pivot0_i1(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I1_get_poly_coef_cmp1_pivot0_i1(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I2                  0x1806B0E8
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I2_reg_addr          "0xB806B0E8"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I2_reg               0xB806B0E8
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I2_inst_addr         "0x002A"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I2_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I2_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I2_poly_coef_cmp1_pivot0_i2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I2_poly_coef_cmp1_pivot0_i2_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I2_poly_coef_cmp1_pivot0_i2(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P0_I2_get_poly_coef_cmp1_pivot0_i2(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I0                  0x1806B0EC
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I0_reg_addr          "0xB806B0EC"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I0_reg               0xB806B0EC
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I0_inst_addr         "0x002B"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I0_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I0_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I0_poly_coef_cmp1_pivot1_i0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I0_poly_coef_cmp1_pivot1_i0_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I0_poly_coef_cmp1_pivot1_i0(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I0_get_poly_coef_cmp1_pivot1_i0(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I1                  0x1806B0F0
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I1_reg_addr          "0xB806B0F0"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I1_reg               0xB806B0F0
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I1_inst_addr         "0x002C"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I1_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I1_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I1_poly_coef_cmp1_pivot1_i1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I1_poly_coef_cmp1_pivot1_i1_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I1_poly_coef_cmp1_pivot1_i1(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I1_get_poly_coef_cmp1_pivot1_i1(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I2                  0x1806B0F4
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I2_reg_addr          "0xB806B0F4"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I2_reg               0xB806B0F4
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I2_inst_addr         "0x002D"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I2_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I2_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I2_poly_coef_cmp1_pivot1_i2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I2_poly_coef_cmp1_pivot1_i2_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I2_poly_coef_cmp1_pivot1_i2(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P1_I2_get_poly_coef_cmp1_pivot1_i2(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I0                  0x1806B0F8
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I0_reg_addr          "0xB806B0F8"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I0_reg               0xB806B0F8
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I0_inst_addr         "0x002E"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I0_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I0_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I0_poly_coef_cmp1_pivot2_i0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I0_poly_coef_cmp1_pivot2_i0_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I0_poly_coef_cmp1_pivot2_i0(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I0_get_poly_coef_cmp1_pivot2_i0(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I1                  0x1806B0FC
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I1_reg_addr          "0xB806B0FC"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I1_reg               0xB806B0FC
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I1_inst_addr         "0x002F"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I1_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I1_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I1_poly_coef_cmp1_pivot2_i1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I1_poly_coef_cmp1_pivot2_i1_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I1_poly_coef_cmp1_pivot2_i1(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I1_get_poly_coef_cmp1_pivot2_i1(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I2                  0x1806B100
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I2_reg_addr          "0xB806B100"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I2_reg               0xB806B100
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I2_inst_addr         "0x0030"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I2_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I2_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I2_poly_coef_cmp1_pivot2_i2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I2_poly_coef_cmp1_pivot2_i2_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I2_poly_coef_cmp1_pivot2_i2(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P2_I2_get_poly_coef_cmp1_pivot2_i2(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I0                  0x1806B104
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I0_reg_addr          "0xB806B104"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I0_reg               0xB806B104
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I0_inst_addr         "0x0031"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I0_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I0_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I0_poly_coef_cmp1_pivot3_i0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I0_poly_coef_cmp1_pivot3_i0_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I0_poly_coef_cmp1_pivot3_i0(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I0_get_poly_coef_cmp1_pivot3_i0(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I1                  0x1806B108
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I1_reg_addr          "0xB806B108"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I1_reg               0xB806B108
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I1_inst_addr         "0x0032"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I1_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I1_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I1_poly_coef_cmp1_pivot3_i1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I1_poly_coef_cmp1_pivot3_i1_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I1_poly_coef_cmp1_pivot3_i1(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I1_get_poly_coef_cmp1_pivot3_i1(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I2                  0x1806B10C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I2_reg_addr          "0xB806B10C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I2_reg               0xB806B10C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I2_inst_addr         "0x0033"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I2_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I2_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I2_poly_coef_cmp1_pivot3_i2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I2_poly_coef_cmp1_pivot3_i2_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I2_poly_coef_cmp1_pivot3_i2(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp1_P3_I2_get_poly_coef_cmp1_pivot3_i2(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I0                  0x1806B110
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I0_reg_addr          "0xB806B110"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I0_reg               0xB806B110
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I0_inst_addr         "0x0034"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I0_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I0_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I0_poly_coef_cmp2_pivot0_i0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I0_poly_coef_cmp2_pivot0_i0_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I0_poly_coef_cmp2_pivot0_i0(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I0_get_poly_coef_cmp2_pivot0_i0(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I1                  0x1806B114
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I1_reg_addr          "0xB806B114"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I1_reg               0xB806B114
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I1_inst_addr         "0x0035"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I1_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I1_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I1_poly_coef_cmp2_pivot0_i1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I1_poly_coef_cmp2_pivot0_i1_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I1_poly_coef_cmp2_pivot0_i1(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I1_get_poly_coef_cmp2_pivot0_i1(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I2                  0x1806B118
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I2_reg_addr          "0xB806B118"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I2_reg               0xB806B118
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I2_inst_addr         "0x0036"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I2_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I2_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I2_poly_coef_cmp2_pivot0_i2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I2_poly_coef_cmp2_pivot0_i2_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I2_poly_coef_cmp2_pivot0_i2(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P0_I2_get_poly_coef_cmp2_pivot0_i2(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I0                  0x1806B11C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I0_reg_addr          "0xB806B11C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I0_reg               0xB806B11C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I0_inst_addr         "0x0037"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I0_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I0_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I0_poly_coef_cmp2_pivot1_i0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I0_poly_coef_cmp2_pivot1_i0_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I0_poly_coef_cmp2_pivot1_i0(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I0_get_poly_coef_cmp2_pivot1_i0(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I1                  0x1806B120
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I1_reg_addr          "0xB806B120"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I1_reg               0xB806B120
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I1_inst_addr         "0x0038"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I1_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I1_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I1_poly_coef_cmp2_pivot1_i1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I1_poly_coef_cmp2_pivot1_i1_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I1_poly_coef_cmp2_pivot1_i1(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I1_get_poly_coef_cmp2_pivot1_i1(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I2                  0x1806B124
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I2_reg_addr          "0xB806B124"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I2_reg               0xB806B124
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I2_inst_addr         "0x0039"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I2_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I2_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I2_poly_coef_cmp2_pivot1_i2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I2_poly_coef_cmp2_pivot1_i2_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I2_poly_coef_cmp2_pivot1_i2(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P1_I2_get_poly_coef_cmp2_pivot1_i2(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I0                  0x1806B128
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I0_reg_addr          "0xB806B128"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I0_reg               0xB806B128
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I0_inst_addr         "0x003A"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I0_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I0_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I0_poly_coef_cmp2_pivot2_i0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I0_poly_coef_cmp2_pivot2_i0_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I0_poly_coef_cmp2_pivot2_i0(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I0_get_poly_coef_cmp2_pivot2_i0(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I1                  0x1806B12C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I1_reg_addr          "0xB806B12C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I1_reg               0xB806B12C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I1_inst_addr         "0x003B"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I1_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I1_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I1_poly_coef_cmp2_pivot2_i1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I1_poly_coef_cmp2_pivot2_i1_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I1_poly_coef_cmp2_pivot2_i1(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I1_get_poly_coef_cmp2_pivot2_i1(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I2                  0x1806B130
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I2_reg_addr          "0xB806B130"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I2_reg               0xB806B130
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I2_inst_addr         "0x003C"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I2_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I2_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I2_poly_coef_cmp2_pivot2_i2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I2_poly_coef_cmp2_pivot2_i2_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I2_poly_coef_cmp2_pivot2_i2(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P2_I2_get_poly_coef_cmp2_pivot2_i2(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I0                  0x1806B134
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I0_reg_addr          "0xB806B134"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I0_reg               0xB806B134
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I0_inst_addr         "0x003D"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I0_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I0_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I0_poly_coef_cmp2_pivot3_i0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I0_poly_coef_cmp2_pivot3_i0_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I0_poly_coef_cmp2_pivot3_i0(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I0_get_poly_coef_cmp2_pivot3_i0(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I1                  0x1806B138
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I1_reg_addr          "0xB806B138"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I1_reg               0xB806B138
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I1_inst_addr         "0x003E"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I1_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I1_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I1_poly_coef_cmp2_pivot3_i1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I1_poly_coef_cmp2_pivot3_i1_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I1_poly_coef_cmp2_pivot3_i1(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I1_get_poly_coef_cmp2_pivot3_i1(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I2                  0x1806B13C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I2_reg_addr          "0xB806B13C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I2_reg               0xB806B13C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I2_inst_addr         "0x003F"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I2_reg(data)     (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I2_reg           (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I2_poly_coef_cmp2_pivot3_i2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I2_poly_coef_cmp2_pivot3_i2_mask (0x3FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I2_poly_coef_cmp2_pivot3_i2(data) (0x3FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_Poly_Coef_Cmp2_P3_I2_get_poly_coef_cmp2_pivot3_i2(data) (0x3FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Order                             0x1806B140
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Order_reg_addr                     "0xB806B140"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Order_reg                          0xB806B140
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Order_inst_addr                    "0x0040"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Order_reg(data)                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Order_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Order_reg                      (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Order_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Order_mmr_order_cmp2_shift         (4)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Order_mmr_order_cmp1_shift         (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Order_mmr_order_cmp2_mask          (0x00000030)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Order_mmr_order_cmp1_mask          (0x00000003)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Order_mmr_order_cmp2(data)         (0x00000030&((data)<<4))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Order_mmr_order_cmp1(data)         (0x00000003&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Order_get_mmr_order_cmp2(data)     ((0x00000030&(data))>>4)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Order_get_mmr_order_cmp1(data)     (0x00000003&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_0                       0x1806B1F4
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_0_reg_addr               "0xB806B1F4"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_0_reg                    0xB806B1F4
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_0_inst_addr              "0x0041"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_0_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_0_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_0_mmr_coef_cmp1_coef0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_0_mmr_coef_cmp1_coef0_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_0_mmr_coef_cmp1_coef0(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_0_get_mmr_coef_cmp1_coef0(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_1                       0x1806B1F8
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_1_reg_addr               "0xB806B1F8"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_1_reg                    0xB806B1F8
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_1_inst_addr              "0x0042"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_1_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_1_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_1_mmr_coef_cmp1_coef1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_1_mmr_coef_cmp1_coef1_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_1_mmr_coef_cmp1_coef1(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_1_get_mmr_coef_cmp1_coef1(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_2                       0x1806B1FC
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_2_reg_addr               "0xB806B1FC"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_2_reg                    0xB806B1FC
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_2_inst_addr              "0x0043"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_2_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_2_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_2_mmr_coef_cmp1_coef2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_2_mmr_coef_cmp1_coef2_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_2_mmr_coef_cmp1_coef2(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_2_get_mmr_coef_cmp1_coef2(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_3                       0x1806B200
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_3_reg_addr               "0xB806B200"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_3_reg                    0xB806B200
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_3_inst_addr              "0x0044"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_3_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_3_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_3_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_3_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_3_mmr_coef_cmp1_coef3_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_3_mmr_coef_cmp1_coef3_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_3_mmr_coef_cmp1_coef3(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_3_get_mmr_coef_cmp1_coef3(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_4                       0x1806B204
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_4_reg_addr               "0xB806B204"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_4_reg                    0xB806B204
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_4_inst_addr              "0x0045"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_4_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_4_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_4_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_4_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_4_mmr_coef_cmp1_coef4_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_4_mmr_coef_cmp1_coef4_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_4_mmr_coef_cmp1_coef4(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_4_get_mmr_coef_cmp1_coef4(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_5                       0x1806B208
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_5_reg_addr               "0xB806B208"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_5_reg                    0xB806B208
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_5_inst_addr              "0x0046"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_5_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_5_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_5_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_5_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_5_mmr_coef_cmp1_coef5_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_5_mmr_coef_cmp1_coef5_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_5_mmr_coef_cmp1_coef5(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_5_get_mmr_coef_cmp1_coef5(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_6                       0x1806B20C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_6_reg_addr               "0xB806B20C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_6_reg                    0xB806B20C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_6_inst_addr              "0x0047"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_6_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_6_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_6_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_6_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_6_mmr_coef_cmp1_coef6_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_6_mmr_coef_cmp1_coef6_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_6_mmr_coef_cmp1_coef6(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_6_get_mmr_coef_cmp1_coef6(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_7                       0x1806B210
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_7_reg_addr               "0xB806B210"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_7_reg                    0xB806B210
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_7_inst_addr              "0x0048"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_7_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_7_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_7_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_7_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_7_mmr_coef_cmp1_coef7_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_7_mmr_coef_cmp1_coef7_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_7_mmr_coef_cmp1_coef7(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_7_get_mmr_coef_cmp1_coef7(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_8                       0x1806B214
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_8_reg_addr               "0xB806B214"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_8_reg                    0xB806B214
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_8_inst_addr              "0x0049"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_8_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_8_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_8_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_8_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_8_mmr_coef_cmp1_coef8_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_8_mmr_coef_cmp1_coef8_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_8_mmr_coef_cmp1_coef8(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_8_get_mmr_coef_cmp1_coef8(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_9                       0x1806B218
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_9_reg_addr               "0xB806B218"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_9_reg                    0xB806B218
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_9_inst_addr              "0x004A"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_9_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_9_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_9_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_9_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_9_mmr_coef_cmp1_coef9_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_9_mmr_coef_cmp1_coef9_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_9_mmr_coef_cmp1_coef9(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_9_get_mmr_coef_cmp1_coef9(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_10                      0x1806B21C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_10_reg_addr              "0xB806B21C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_10_reg                   0xB806B21C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_10_inst_addr             "0x004B"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_10_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_10_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_10_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_10_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_10_mmr_coef_cmp1_coef10_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_10_mmr_coef_cmp1_coef10_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_10_mmr_coef_cmp1_coef10(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_10_get_mmr_coef_cmp1_coef10(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_11                      0x1806B300
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_11_reg_addr              "0xB806B300"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_11_reg                   0xB806B300
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_11_inst_addr             "0x004C"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_11_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_11_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_11_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_11_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_11_mmr_coef_cmp1_coef11_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_11_mmr_coef_cmp1_coef11_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_11_mmr_coef_cmp1_coef11(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_11_get_mmr_coef_cmp1_coef11(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_12                      0x1806B304
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_12_reg_addr              "0xB806B304"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_12_reg                   0xB806B304
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_12_inst_addr             "0x004D"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_12_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_12_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_12_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_12_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_12_mmr_coef_cmp1_coef12_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_12_mmr_coef_cmp1_coef12_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_12_mmr_coef_cmp1_coef12(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_12_get_mmr_coef_cmp1_coef12(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_13                      0x1806B308
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_13_reg_addr              "0xB806B308"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_13_reg                   0xB806B308
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_13_inst_addr             "0x004E"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_13_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_13_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_13_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_13_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_13_mmr_coef_cmp1_coef13_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_13_mmr_coef_cmp1_coef13_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_13_mmr_coef_cmp1_coef13(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_13_get_mmr_coef_cmp1_coef13(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_14                      0x1806B30C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_14_reg_addr              "0xB806B30C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_14_reg                   0xB806B30C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_14_inst_addr             "0x004F"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_14_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_14_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_14_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_14_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_14_mmr_coef_cmp1_coef14_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_14_mmr_coef_cmp1_coef14_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_14_mmr_coef_cmp1_coef14(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_14_get_mmr_coef_cmp1_coef14(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_15                      0x1806B230
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_15_reg_addr              "0xB806B230"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_15_reg                   0xB806B230
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_15_inst_addr             "0x0050"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_15_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_15_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_15_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_15_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_15_mmr_coef_cmp1_coef15_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_15_mmr_coef_cmp1_coef15_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_15_mmr_coef_cmp1_coef15(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_15_get_mmr_coef_cmp1_coef15(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_16                      0x1806B234
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_16_reg_addr              "0xB806B234"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_16_reg                   0xB806B234
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_16_inst_addr             "0x0051"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_16_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_16_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_16_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_16_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_16_mmr_coef_cmp1_coef16_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_16_mmr_coef_cmp1_coef16_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_16_mmr_coef_cmp1_coef16(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_16_get_mmr_coef_cmp1_coef16(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_17                      0x1806B238
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_17_reg_addr              "0xB806B238"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_17_reg                   0xB806B238
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_17_inst_addr             "0x0052"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_17_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_17_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_17_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_17_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_17_mmr_coef_cmp1_coef17_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_17_mmr_coef_cmp1_coef17_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_17_mmr_coef_cmp1_coef17(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_17_get_mmr_coef_cmp1_coef17(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_18                      0x1806B23C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_18_reg_addr              "0xB806B23C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_18_reg                   0xB806B23C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_18_inst_addr             "0x0053"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_18_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_18_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_18_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_18_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_18_mmr_coef_cmp1_coef18_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_18_mmr_coef_cmp1_coef18_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_18_mmr_coef_cmp1_coef18(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_18_get_mmr_coef_cmp1_coef18(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_19                      0x1806B240
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_19_reg_addr              "0xB806B240"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_19_reg                   0xB806B240
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_19_inst_addr             "0x0054"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_19_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_19_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_19_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_19_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_19_mmr_coef_cmp1_coef19_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_19_mmr_coef_cmp1_coef19_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_19_mmr_coef_cmp1_coef19(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_19_get_mmr_coef_cmp1_coef19(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_20                      0x1806B244
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_20_reg_addr              "0xB806B244"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_20_reg                   0xB806B244
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_20_inst_addr             "0x0055"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_20_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_20_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_20_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_20_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_20_mmr_coef_cmp1_coef20_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_20_mmr_coef_cmp1_coef20_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_20_mmr_coef_cmp1_coef20(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_20_get_mmr_coef_cmp1_coef20(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_21                      0x1806B248
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_21_reg_addr              "0xB806B248"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_21_reg                   0xB806B248
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_21_inst_addr             "0x0056"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_21_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_21_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_21_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_21_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_21_mmr_coef_cmp1_coef21_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_21_mmr_coef_cmp1_coef21_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_21_mmr_coef_cmp1_coef21(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp1_Coef_21_get_mmr_coef_cmp1_coef21(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_0                       0x1806B24C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_0_reg_addr               "0xB806B24C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_0_reg                    0xB806B24C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_0_inst_addr              "0x0057"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_0_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_0_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_0_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_0_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_0_mmr_coef_cmp2_coef0_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_0_mmr_coef_cmp2_coef0_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_0_mmr_coef_cmp2_coef0(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_0_get_mmr_coef_cmp2_coef0(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_1                       0x1806B250
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_1_reg_addr               "0xB806B250"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_1_reg                    0xB806B250
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_1_inst_addr              "0x0058"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_1_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_1_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_1_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_1_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_1_mmr_coef_cmp2_coef1_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_1_mmr_coef_cmp2_coef1_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_1_mmr_coef_cmp2_coef1(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_1_get_mmr_coef_cmp2_coef1(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_2                       0x1806B254
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_2_reg_addr               "0xB806B254"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_2_reg                    0xB806B254
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_2_inst_addr              "0x0059"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_2_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_2_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_2_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_2_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_2_mmr_coef_cmp2_coef2_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_2_mmr_coef_cmp2_coef2_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_2_mmr_coef_cmp2_coef2(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_2_get_mmr_coef_cmp2_coef2(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_3                       0x1806B258
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_3_reg_addr               "0xB806B258"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_3_reg                    0xB806B258
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_3_inst_addr              "0x005A"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_3_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_3_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_3_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_3_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_3_mmr_coef_cmp2_coef3_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_3_mmr_coef_cmp2_coef3_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_3_mmr_coef_cmp2_coef3(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_3_get_mmr_coef_cmp2_coef3(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_4                       0x1806B25C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_4_reg_addr               "0xB806B25C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_4_reg                    0xB806B25C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_4_inst_addr              "0x005B"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_4_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_4_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_4_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_4_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_4_mmr_coef_cmp2_coef4_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_4_mmr_coef_cmp2_coef4_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_4_mmr_coef_cmp2_coef4(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_4_get_mmr_coef_cmp2_coef4(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_5                       0x1806B260
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_5_reg_addr               "0xB806B260"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_5_reg                    0xB806B260
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_5_inst_addr              "0x005C"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_5_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_5_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_5_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_5_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_5_mmr_coef_cmp2_coef5_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_5_mmr_coef_cmp2_coef5_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_5_mmr_coef_cmp2_coef5(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_5_get_mmr_coef_cmp2_coef5(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_6                       0x1806B264
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_6_reg_addr               "0xB806B264"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_6_reg                    0xB806B264
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_6_inst_addr              "0x005D"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_6_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_6_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_6_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_6_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_6_mmr_coef_cmp2_coef6_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_6_mmr_coef_cmp2_coef6_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_6_mmr_coef_cmp2_coef6(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_6_get_mmr_coef_cmp2_coef6(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_7                       0x1806B268
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_7_reg_addr               "0xB806B268"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_7_reg                    0xB806B268
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_7_inst_addr              "0x005E"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_7_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_7_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_7_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_7_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_7_mmr_coef_cmp2_coef7_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_7_mmr_coef_cmp2_coef7_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_7_mmr_coef_cmp2_coef7(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_7_get_mmr_coef_cmp2_coef7(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_8                       0x1806B26C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_8_reg_addr               "0xB806B26C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_8_reg                    0xB806B26C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_8_inst_addr              "0x005F"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_8_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_8_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_8_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_8_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_8_mmr_coef_cmp2_coef8_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_8_mmr_coef_cmp2_coef8_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_8_mmr_coef_cmp2_coef8(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_8_get_mmr_coef_cmp2_coef8(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_9                       0x1806B270
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_9_reg_addr               "0xB806B270"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_9_reg                    0xB806B270
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_9_inst_addr              "0x0060"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_9_reg(data)          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_9_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_9_reg                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_9_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_9_mmr_coef_cmp2_coef9_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_9_mmr_coef_cmp2_coef9_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_9_mmr_coef_cmp2_coef9(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_9_get_mmr_coef_cmp2_coef9(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_10                      0x1806B274
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_10_reg_addr              "0xB806B274"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_10_reg                   0xB806B274
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_10_inst_addr             "0x0061"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_10_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_10_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_10_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_10_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_10_mmr_coef_cmp2_coef10_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_10_mmr_coef_cmp2_coef10_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_10_mmr_coef_cmp2_coef10(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_10_get_mmr_coef_cmp2_coef10(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_11                      0x1806B278
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_11_reg_addr              "0xB806B278"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_11_reg                   0xB806B278
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_11_inst_addr             "0x0062"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_11_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_11_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_11_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_11_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_11_mmr_coef_cmp2_coef11_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_11_mmr_coef_cmp2_coef11_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_11_mmr_coef_cmp2_coef11(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_11_get_mmr_coef_cmp2_coef11(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_12                      0x1806B27C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_12_reg_addr              "0xB806B27C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_12_reg                   0xB806B27C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_12_inst_addr             "0x0063"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_12_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_12_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_12_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_12_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_12_mmr_coef_cmp2_coef12_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_12_mmr_coef_cmp2_coef12_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_12_mmr_coef_cmp2_coef12(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_12_get_mmr_coef_cmp2_coef12(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_13                      0x1806B280
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_13_reg_addr              "0xB806B280"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_13_reg                   0xB806B280
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_13_inst_addr             "0x0064"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_13_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_13_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_13_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_13_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_13_mmr_coef_cmp2_coef13_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_13_mmr_coef_cmp2_coef13_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_13_mmr_coef_cmp2_coef13(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_13_get_mmr_coef_cmp2_coef13(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_14                      0x1806B284
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_14_reg_addr              "0xB806B284"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_14_reg                   0xB806B284
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_14_inst_addr             "0x0065"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_14_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_14_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_14_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_14_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_14_mmr_coef_cmp2_coef14_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_14_mmr_coef_cmp2_coef14_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_14_mmr_coef_cmp2_coef14(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_14_get_mmr_coef_cmp2_coef14(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_15                      0x1806B288
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_15_reg_addr              "0xB806B288"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_15_reg                   0xB806B288
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_15_inst_addr             "0x0066"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_15_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_15_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_15_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_15_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_15_mmr_coef_cmp2_coef15_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_15_mmr_coef_cmp2_coef15_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_15_mmr_coef_cmp2_coef15(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_15_get_mmr_coef_cmp2_coef15(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_16                      0x1806B28C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_16_reg_addr              "0xB806B28C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_16_reg                   0xB806B28C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_16_inst_addr             "0x0067"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_16_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_16_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_16_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_16_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_16_mmr_coef_cmp2_coef16_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_16_mmr_coef_cmp2_coef16_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_16_mmr_coef_cmp2_coef16(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_16_get_mmr_coef_cmp2_coef16(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_17                      0x1806B290
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_17_reg_addr              "0xB806B290"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_17_reg                   0xB806B290
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_17_inst_addr             "0x0068"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_17_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_17_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_17_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_17_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_17_mmr_coef_cmp2_coef17_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_17_mmr_coef_cmp2_coef17_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_17_mmr_coef_cmp2_coef17(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_17_get_mmr_coef_cmp2_coef17(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_18                      0x1806B294
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_18_reg_addr              "0xB806B294"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_18_reg                   0xB806B294
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_18_inst_addr             "0x0069"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_18_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_18_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_18_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_18_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_18_mmr_coef_cmp2_coef18_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_18_mmr_coef_cmp2_coef18_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_18_mmr_coef_cmp2_coef18(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_18_get_mmr_coef_cmp2_coef18(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_19                      0x1806B298
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_19_reg_addr              "0xB806B298"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_19_reg                   0xB806B298
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_19_inst_addr             "0x006A"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_19_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_19_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_19_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_19_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_19_mmr_coef_cmp2_coef19_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_19_mmr_coef_cmp2_coef19_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_19_mmr_coef_cmp2_coef19(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_19_get_mmr_coef_cmp2_coef19(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_20                      0x1806B29C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_20_reg_addr              "0xB806B29C"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_20_reg                   0xB806B29C
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_20_inst_addr             "0x006B"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_20_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_20_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_20_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_20_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_20_mmr_coef_cmp2_coef20_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_20_mmr_coef_cmp2_coef20_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_20_mmr_coef_cmp2_coef20(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_20_get_mmr_coef_cmp2_coef20(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_21                      0x1806B2A0
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_21_reg_addr              "0xB806B2A0"
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_21_reg                   0xB806B2A0
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_21_inst_addr             "0x006C"
#define  set_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_21_reg(data)         (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_21_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_21_reg               (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_21_reg))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_21_mmr_coef_cmp2_coef21_shift (0)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_21_mmr_coef_cmp2_coef21_mask (0x7FFFFFFF)
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_21_mmr_coef_cmp2_coef21(data) (0x7FFFFFFF&(data))
#define  DHDR_V_COMPOSER_Composer_BL_Pred_MMR_Cmp2_Coef_21_get_mmr_coef_cmp2_coef21(data) (0x7FFFFFFF&(data))

#define  DHDR_V_COMPOSER_Composer_db_ctrl                                       0x1806B318
#define  DHDR_V_COMPOSER_Composer_db_ctrl_reg_addr                               "0xB806B318"
#define  DHDR_V_COMPOSER_Composer_db_ctrl_reg                                    0xB806B318
#define  DHDR_V_COMPOSER_Composer_db_ctrl_inst_addr                              "0x006D"
#define  set_DHDR_V_COMPOSER_Composer_db_ctrl_reg(data)                          (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_db_ctrl_reg)=data)
#define  get_DHDR_V_COMPOSER_Composer_db_ctrl_reg                                (*((volatile unsigned int*)DHDR_V_COMPOSER_Composer_db_ctrl_reg))
#define  DHDR_V_COMPOSER_Composer_db_ctrl_composer_db_en_shift                   (2)
#define  DHDR_V_COMPOSER_Composer_db_ctrl_composer_db_apply_shift                (1)
#define  DHDR_V_COMPOSER_Composer_db_ctrl_db_read_shift                          (0)
#define  DHDR_V_COMPOSER_Composer_db_ctrl_composer_db_en_mask                    (0x00000004)
#define  DHDR_V_COMPOSER_Composer_db_ctrl_composer_db_apply_mask                 (0x00000002)
#define  DHDR_V_COMPOSER_Composer_db_ctrl_db_read_mask                           (0x00000001)
#define  DHDR_V_COMPOSER_Composer_db_ctrl_composer_db_en(data)                   (0x00000004&((data)<<2))
#define  DHDR_V_COMPOSER_Composer_db_ctrl_composer_db_apply(data)                (0x00000002&((data)<<1))
#define  DHDR_V_COMPOSER_Composer_db_ctrl_db_read(data)                          (0x00000001&(data))
#define  DHDR_V_COMPOSER_Composer_db_ctrl_get_composer_db_en(data)               ((0x00000004&(data))>>2)
#define  DHDR_V_COMPOSER_Composer_db_ctrl_get_composer_db_apply(data)            ((0x00000002&(data))>>1)
#define  DHDR_V_COMPOSER_Composer_db_ctrl_get_db_read(data)                      (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======DHDR_V_COMPOSER register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  vdr_bit_depth:3;
        RBus_UInt32  res2:7;
        RBus_UInt32  bl_bit_depth:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  coefficient_log2_denom:5;
    };
}dhdr_v_composer_composer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  num_pivots_cmp2:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  num_pivots_cmp1:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  num_pivots_cmp0:3;
        RBus_UInt32  res4:3;
        RBus_UInt32  mapping_idc_cmp2:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  mapping_idc_cmp1:1;
        RBus_UInt32  res6:4;
    };
}dhdr_v_composer_composer_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pivot_value_cmp0_pivot_1:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  pivot_value_cmp0_pivot_0:10;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp0_p01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pivot_value_cmp0_pivot_3:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  pivot_value_cmp0_pivot_2:10;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp0_p23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pivot_value_cmp0_pivot_5:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  pivot_value_cmp0_pivot_4:10;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp0_p45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pivot_value_cmp0_pivot_7:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  pivot_value_cmp0_pivot_6:10;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp0_p67_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  pivot_value_cmp0_pivot_8:10;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp0_p8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pivot_value_cmp1_pivot_1:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  pivot_value_cmp1_pivot_0:10;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp1_p01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pivot_value_cmp1_pivot_3:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  pivot_value_cmp1_pivot_2:10;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp1_p23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  pivot_value_cmp1_pivot_4:10;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp1_p45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pivot_value_cmp2_pivot_1:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  pivot_value_cmp2_pivot_0:10;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp2_p01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pivot_value_cmp2_pivot_3:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  pivot_value_cmp2_pivot_2:10;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp2_p23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  pivot_value_cmp2_pivot_4:10;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp2_p45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  poly_order_cmp0_pivot7:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  poly_order_cmp0_pivot6:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  poly_order_cmp0_pivot5:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  poly_order_cmp0_pivot4:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  poly_order_cmp0_pivot3:1;
        RBus_UInt32  res6:3;
        RBus_UInt32  poly_order_cmp0_pivot2:1;
        RBus_UInt32  res7:3;
        RBus_UInt32  poly_order_cmp0_pivot1:1;
        RBus_UInt32  res8:3;
        RBus_UInt32  poly_order_cmp0_pivot0:1;
    };
}dhdr_v_composer_composer_bl_pred_poly_order_luma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  poly_order_cmp1_pivot3:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  poly_order_cmp1_pivot2:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  poly_order_cmp1_pivot1:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  poly_order_cmp1_pivot0:1;
    };
}dhdr_v_composer_composer_bl_pred_poly_order_chroma1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  poly_order_cmp2_pivot3:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  poly_order_cmp2_pivot2:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  poly_order_cmp2_pivot1:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  poly_order_cmp2_pivot0:1;
    };
}dhdr_v_composer_composer_bl_pred_poly_order_chroma2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot0_i0:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p0_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot0_i1:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p0_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot0_i2:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p0_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot1_i0:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p1_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot1_i1:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p1_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot1_i2:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p1_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot2_i0:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p2_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot2_i1:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p2_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot2_i2:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p2_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot3_i0:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p3_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot3_i1:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p3_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot3_i2:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p3_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot4_i0:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p4_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot4_i1:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p4_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot4_i2:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p4_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot5_i0:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p5_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot5_i1:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p5_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot5_i2:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p5_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot6_i0:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p6_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot6_i1:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p6_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot6_i2:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p6_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot7_i0:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p7_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot7_i1:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p7_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp0_pivot7_i2:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p7_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp1_pivot0_i0:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p0_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp1_pivot0_i1:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p0_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp1_pivot0_i2:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p0_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp1_pivot1_i0:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p1_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp1_pivot1_i1:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p1_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp1_pivot1_i2:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p1_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp1_pivot2_i0:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p2_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp1_pivot2_i1:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p2_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp1_pivot2_i2:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p2_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp1_pivot3_i0:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p3_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp1_pivot3_i1:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p3_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp1_pivot3_i2:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p3_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp2_pivot0_i0:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p0_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp2_pivot0_i1:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p0_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp2_pivot0_i2:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p0_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp2_pivot1_i0:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p1_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp2_pivot1_i1:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p1_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp2_pivot1_i2:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p1_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp2_pivot2_i0:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p2_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp2_pivot2_i1:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p2_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp2_pivot2_i2:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p2_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp2_pivot3_i0:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p3_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp2_pivot3_i1:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p3_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  poly_coef_cmp2_pivot3_i2:30;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p3_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  mmr_order_cmp2:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  mmr_order_cmp1:2;
    };
}dhdr_v_composer_composer_bl_pred_mmr_order_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef0:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef1:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef2:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef3:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef4:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef5:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef6:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef7:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef8:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef9:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef10:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef11:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef12:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef13:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef14:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef15:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef16:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef17:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef18:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef19:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef20:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp1_coef21:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef0:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef1:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef2:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef3:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef4:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef5:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef6:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef7:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef8:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef9:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef10:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef11:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef12:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef13:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef14:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef15:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef16:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef17:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef18:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef19:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef20:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mmr_coef_cmp2_coef21:31;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  composer_db_en:1;
        RBus_UInt32  composer_db_apply:1;
        RBus_UInt32  db_read:1;
    };
}dhdr_v_composer_composer_db_ctrl_RBUS;

#else //apply LITTLE_ENDIAN

//======DHDR_V_COMPOSER register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coefficient_log2_denom:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  bl_bit_depth:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  vdr_bit_depth:3;
        RBus_UInt32  res3:13;
    };
}dhdr_v_composer_composer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mapping_idc_cmp1:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  mapping_idc_cmp2:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  num_pivots_cmp0:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  num_pivots_cmp1:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  num_pivots_cmp2:2;
        RBus_UInt32  res6:10;
    };
}dhdr_v_composer_composer_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pivot_value_cmp0_pivot_0:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  pivot_value_cmp0_pivot_1:10;
        RBus_UInt32  res2:6;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp0_p01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pivot_value_cmp0_pivot_2:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  pivot_value_cmp0_pivot_3:10;
        RBus_UInt32  res2:6;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp0_p23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pivot_value_cmp0_pivot_4:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  pivot_value_cmp0_pivot_5:10;
        RBus_UInt32  res2:6;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp0_p45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pivot_value_cmp0_pivot_6:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  pivot_value_cmp0_pivot_7:10;
        RBus_UInt32  res2:6;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp0_p67_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pivot_value_cmp0_pivot_8:10;
        RBus_UInt32  res1:22;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp0_p8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pivot_value_cmp1_pivot_0:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  pivot_value_cmp1_pivot_1:10;
        RBus_UInt32  res2:6;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp1_p01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pivot_value_cmp1_pivot_2:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  pivot_value_cmp1_pivot_3:10;
        RBus_UInt32  res2:6;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp1_p23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pivot_value_cmp1_pivot_4:10;
        RBus_UInt32  res1:22;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp1_p45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pivot_value_cmp2_pivot_0:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  pivot_value_cmp2_pivot_1:10;
        RBus_UInt32  res2:6;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp2_p01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pivot_value_cmp2_pivot_2:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  pivot_value_cmp2_pivot_3:10;
        RBus_UInt32  res2:6;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp2_p23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pivot_value_cmp2_pivot_4:10;
        RBus_UInt32  res1:22;
    };
}dhdr_v_composer_composer_bl_pivot_val_cmp2_p45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_order_cmp0_pivot0:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  poly_order_cmp0_pivot1:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  poly_order_cmp0_pivot2:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  poly_order_cmp0_pivot3:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  poly_order_cmp0_pivot4:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  poly_order_cmp0_pivot5:1;
        RBus_UInt32  res6:3;
        RBus_UInt32  poly_order_cmp0_pivot6:1;
        RBus_UInt32  res7:3;
        RBus_UInt32  poly_order_cmp0_pivot7:1;
        RBus_UInt32  res8:3;
    };
}dhdr_v_composer_composer_bl_pred_poly_order_luma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_order_cmp1_pivot0:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  poly_order_cmp1_pivot1:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  poly_order_cmp1_pivot2:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  poly_order_cmp1_pivot3:1;
        RBus_UInt32  res4:19;
    };
}dhdr_v_composer_composer_bl_pred_poly_order_chroma1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_order_cmp2_pivot0:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  poly_order_cmp2_pivot1:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  poly_order_cmp2_pivot2:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  poly_order_cmp2_pivot3:1;
        RBus_UInt32  res4:19;
    };
}dhdr_v_composer_composer_bl_pred_poly_order_chroma2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot0_i0:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p0_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot0_i1:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p0_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot0_i2:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p0_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot1_i0:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p1_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot1_i1:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p1_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot1_i2:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p1_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot2_i0:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p2_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot2_i1:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p2_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot2_i2:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p2_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot3_i0:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p3_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot3_i1:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p3_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot3_i2:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p3_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot4_i0:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p4_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot4_i1:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p4_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot4_i2:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p4_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot5_i0:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p5_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot5_i1:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p5_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot5_i2:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p5_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot6_i0:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p6_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot6_i1:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p6_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot6_i2:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p6_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot7_i0:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p7_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot7_i1:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p7_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp0_pivot7_i2:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp0_p7_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp1_pivot0_i0:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p0_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp1_pivot0_i1:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p0_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp1_pivot0_i2:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p0_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp1_pivot1_i0:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p1_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp1_pivot1_i1:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p1_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp1_pivot1_i2:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p1_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp1_pivot2_i0:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p2_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp1_pivot2_i1:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p2_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp1_pivot2_i2:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p2_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp1_pivot3_i0:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p3_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp1_pivot3_i1:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p3_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp1_pivot3_i2:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp1_p3_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp2_pivot0_i0:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p0_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp2_pivot0_i1:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p0_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp2_pivot0_i2:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p0_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp2_pivot1_i0:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p1_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp2_pivot1_i1:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p1_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp2_pivot1_i2:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p1_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp2_pivot2_i0:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p2_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp2_pivot2_i1:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p2_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp2_pivot2_i2:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p2_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp2_pivot3_i0:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p3_i0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp2_pivot3_i1:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p3_i1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poly_coef_cmp2_pivot3_i2:30;
        RBus_UInt32  res1:2;
    };
}dhdr_v_composer_composer_bl_pred_poly_coef_cmp2_p3_i2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_order_cmp1:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  mmr_order_cmp2:2;
        RBus_UInt32  res2:26;
    };
}dhdr_v_composer_composer_bl_pred_mmr_order_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef0:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef1:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef2:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef3:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef4:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef5:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef6:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef7:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef8:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef9:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef10:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef11:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef12:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef13:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef14:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef15:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef16:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef17:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef18:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef19:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef20:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp1_coef21:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp1_coef_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef0:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef1:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef2:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef3:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef4:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef5:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef6:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef7:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef8:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef9:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef10:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef11:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef12:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef13:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef14:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef15:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef16:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef17:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef18:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef19:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef20:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmr_coef_cmp2_coef21:31;
        RBus_UInt32  res1:1;
    };
}dhdr_v_composer_composer_bl_pred_mmr_cmp2_coef_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_read:1;
        RBus_UInt32  composer_db_apply:1;
        RBus_UInt32  composer_db_en:1;
        RBus_UInt32  res1:29;
    };
}dhdr_v_composer_composer_db_ctrl_RBUS;




#endif 


#endif 
