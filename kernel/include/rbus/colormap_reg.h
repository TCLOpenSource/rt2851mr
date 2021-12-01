/**
* @file Merlin5-DesignSpec-D-Domain_Panel_Compensation
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_COLORMAP_REG_H_
#define _RBUS_COLORMAP_REG_H_

#include "rbus_types.h"



//  COLORMAP Register Address
#define  COLORMAP_D_CMRGB2RGB_Control                                           0x1802C300
#define  COLORMAP_D_CMRGB2RGB_Control_reg_addr                                   "0xB802C300"
#define  COLORMAP_D_CMRGB2RGB_Control_reg                                        0xB802C300
#define  COLORMAP_D_CMRGB2RGB_Control_inst_addr                                  "0x0000"
#define  set_COLORMAP_D_CMRGB2RGB_Control_reg(data)                              (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Control_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Control_reg                                    (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Control_reg))
#define  COLORMAP_D_CMRGB2RGB_Control_cmrgb2rgb_overlay_shift                    (4)
#define  COLORMAP_D_CMRGB2RGB_Control_cmrgb2rgb_sub_tab_sel_shift                (3)
#define  COLORMAP_D_CMRGB2RGB_Control_cmrgb2rgb_main_tab_sel_shift               (2)
#define  COLORMAP_D_CMRGB2RGB_Control_cmrgb2rgb_sub_en_shift                     (1)
#define  COLORMAP_D_CMRGB2RGB_Control_cmrgb2rgb_main_en_shift                    (0)
#define  COLORMAP_D_CMRGB2RGB_Control_cmrgb2rgb_overlay_mask                     (0x00000010)
#define  COLORMAP_D_CMRGB2RGB_Control_cmrgb2rgb_sub_tab_sel_mask                 (0x00000008)
#define  COLORMAP_D_CMRGB2RGB_Control_cmrgb2rgb_main_tab_sel_mask                (0x00000004)
#define  COLORMAP_D_CMRGB2RGB_Control_cmrgb2rgb_sub_en_mask                      (0x00000002)
#define  COLORMAP_D_CMRGB2RGB_Control_cmrgb2rgb_main_en_mask                     (0x00000001)
#define  COLORMAP_D_CMRGB2RGB_Control_cmrgb2rgb_overlay(data)                    (0x00000010&((data)<<4))
#define  COLORMAP_D_CMRGB2RGB_Control_cmrgb2rgb_sub_tab_sel(data)                (0x00000008&((data)<<3))
#define  COLORMAP_D_CMRGB2RGB_Control_cmrgb2rgb_main_tab_sel(data)               (0x00000004&((data)<<2))
#define  COLORMAP_D_CMRGB2RGB_Control_cmrgb2rgb_sub_en(data)                     (0x00000002&((data)<<1))
#define  COLORMAP_D_CMRGB2RGB_Control_cmrgb2rgb_main_en(data)                    (0x00000001&(data))
#define  COLORMAP_D_CMRGB2RGB_Control_get_cmrgb2rgb_overlay(data)                ((0x00000010&(data))>>4)
#define  COLORMAP_D_CMRGB2RGB_Control_get_cmrgb2rgb_sub_tab_sel(data)            ((0x00000008&(data))>>3)
#define  COLORMAP_D_CMRGB2RGB_Control_get_cmrgb2rgb_main_tab_sel(data)           ((0x00000004&(data))>>2)
#define  COLORMAP_D_CMRGB2RGB_Control_get_cmrgb2rgb_sub_en(data)                 ((0x00000002&(data))>>1)
#define  COLORMAP_D_CMRGB2RGB_Control_get_cmrgb2rgb_main_en(data)                (0x00000001&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_0                             0x1802C304
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_0_reg_addr                     "0xB802C304"
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_0_reg                          0xB802C304
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_0_inst_addr                    "0x0001"
#define  set_COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_0_reg(data)                (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_0_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_0_reg                      (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_0_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_0_y_offset_shift               (16)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_0_x_offset_shift               (0)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_0_y_offset_mask                (0x7FFF0000)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_0_x_offset_mask                (0x00007FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_0_y_offset(data)               (0x7FFF0000&((data)<<16))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_0_x_offset(data)               (0x00007FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_0_get_y_offset(data)           ((0x7FFF0000&(data))>>16)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_0_get_x_offset(data)           (0x00007FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_1                             0x1802C308
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_1_reg_addr                     "0xB802C308"
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_1_reg                          0xB802C308
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_1_inst_addr                    "0x0002"
#define  set_COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_1_reg(data)                (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_1_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_1_reg                      (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_1_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_1_z_offset_shift               (0)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_1_z_offset_mask                (0x00007FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_1_z_offset(data)               (0x00007FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_In_Offset_1_get_z_offset(data)           (0x00007FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_0                                       0x1802C30C
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_0_reg_addr                               "0xB802C30C"
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_0_reg                                    0xB802C30C
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_0_inst_addr                              "0x0003"
#define  set_COLORMAP_D_CMRGB2RGB_Tab1_Data_0_reg(data)                          (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Data_0_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab1_Data_0_reg                                (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Data_0_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_0_k12_shift                              (16)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_0_k11_shift                              (0)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_0_k12_mask                               (0x3FFF0000)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_0_k11_mask                               (0x00003FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_0_k12(data)                              (0x3FFF0000&((data)<<16))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_0_k11(data)                              (0x00003FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_0_get_k12(data)                          ((0x3FFF0000&(data))>>16)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_0_get_k11(data)                          (0x00003FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_1                                       0x1802C310
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_1_reg_addr                               "0xB802C310"
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_1_reg                                    0xB802C310
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_1_inst_addr                              "0x0004"
#define  set_COLORMAP_D_CMRGB2RGB_Tab1_Data_1_reg(data)                          (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Data_1_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab1_Data_1_reg                                (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Data_1_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_1_k21_shift                              (16)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_1_k13_shift                              (0)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_1_k21_mask                               (0x3FFF0000)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_1_k13_mask                               (0x00003FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_1_k21(data)                              (0x3FFF0000&((data)<<16))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_1_k13(data)                              (0x00003FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_1_get_k21(data)                          ((0x3FFF0000&(data))>>16)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_1_get_k13(data)                          (0x00003FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_2                                       0x1802C314
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_2_reg_addr                               "0xB802C314"
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_2_reg                                    0xB802C314
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_2_inst_addr                              "0x0005"
#define  set_COLORMAP_D_CMRGB2RGB_Tab1_Data_2_reg(data)                          (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Data_2_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab1_Data_2_reg                                (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Data_2_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_2_k23_shift                              (16)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_2_k22_shift                              (0)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_2_k23_mask                               (0x3FFF0000)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_2_k22_mask                               (0x00003FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_2_k23(data)                              (0x3FFF0000&((data)<<16))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_2_k22(data)                              (0x00003FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_2_get_k23(data)                          ((0x3FFF0000&(data))>>16)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_2_get_k22(data)                          (0x00003FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_3                                       0x1802C318
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_3_reg_addr                               "0xB802C318"
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_3_reg                                    0xB802C318
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_3_inst_addr                              "0x0006"
#define  set_COLORMAP_D_CMRGB2RGB_Tab1_Data_3_reg(data)                          (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Data_3_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab1_Data_3_reg                                (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Data_3_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_3_k32_shift                              (16)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_3_k31_shift                              (0)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_3_k32_mask                               (0x3FFF0000)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_3_k31_mask                               (0x00003FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_3_k32(data)                              (0x3FFF0000&((data)<<16))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_3_k31(data)                              (0x00003FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_3_get_k32(data)                          ((0x3FFF0000&(data))>>16)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_3_get_k31(data)                          (0x00003FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_4                                       0x1802C31C
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_4_reg_addr                               "0xB802C31C"
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_4_reg                                    0xB802C31C
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_4_inst_addr                              "0x0007"
#define  set_COLORMAP_D_CMRGB2RGB_Tab1_Data_4_reg(data)                          (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Data_4_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab1_Data_4_reg                                (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Data_4_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_4_k33_shift                              (0)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_4_k33_mask                               (0x00003FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_4_k33(data)                              (0x00003FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Data_4_get_k33(data)                          (0x00003FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_0                                 0x1802C320
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_0_reg_addr                         "0xB802C320"
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_0_reg                              0xB802C320
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_0_inst_addr                        "0x0008"
#define  set_COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_0_reg(data)                    (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_0_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_0_reg                          (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_0_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_0_goffset_shift                    (16)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_0_roffset_shift                    (0)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_0_goffset_mask                     (0x7FFF0000)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_0_roffset_mask                     (0x00007FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_0_goffset(data)                    (0x7FFF0000&((data)<<16))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_0_roffset(data)                    (0x00007FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_0_get_goffset(data)                ((0x7FFF0000&(data))>>16)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_0_get_roffset(data)                (0x00007FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_1                                 0x1802C324
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_1_reg_addr                         "0xB802C324"
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_1_reg                              0xB802C324
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_1_inst_addr                        "0x0009"
#define  set_COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_1_reg(data)                    (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_1_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_1_reg                          (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_1_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_1_boffset_shift                    (0)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_1_boffset_mask                     (0x00007FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_1_boffset(data)                    (0x00007FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab1_Out_offset_1_get_boffset(data)                (0x00007FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_0                             0x1802C328
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_0_reg_addr                     "0xB802C328"
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_0_reg                          0xB802C328
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_0_inst_addr                    "0x000A"
#define  set_COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_0_reg(data)                (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_0_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_0_reg                      (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_0_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_0_y_offset_shift               (16)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_0_x_offset_shift               (0)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_0_y_offset_mask                (0x7FFF0000)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_0_x_offset_mask                (0x00007FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_0_y_offset(data)               (0x7FFF0000&((data)<<16))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_0_x_offset(data)               (0x00007FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_0_get_y_offset(data)           ((0x7FFF0000&(data))>>16)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_0_get_x_offset(data)           (0x00007FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_1                             0x1802C32C
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_1_reg_addr                     "0xB802C32C"
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_1_reg                          0xB802C32C
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_1_inst_addr                    "0x000B"
#define  set_COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_1_reg(data)                (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_1_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_1_reg                      (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_1_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_1_z_offset_shift               (0)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_1_z_offset_mask                (0x00007FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_1_z_offset(data)               (0x00007FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_In_Offset_1_get_z_offset(data)           (0x00007FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_0                                       0x1802C330
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_0_reg_addr                               "0xB802C330"
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_0_reg                                    0xB802C330
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_0_inst_addr                              "0x000C"
#define  set_COLORMAP_D_CMRGB2RGB_Tab2_Data_0_reg(data)                          (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Data_0_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab2_Data_0_reg                                (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Data_0_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_0_k12_shift                              (16)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_0_k11_shift                              (0)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_0_k12_mask                               (0x3FFF0000)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_0_k11_mask                               (0x00003FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_0_k12(data)                              (0x3FFF0000&((data)<<16))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_0_k11(data)                              (0x00003FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_0_get_k12(data)                          ((0x3FFF0000&(data))>>16)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_0_get_k11(data)                          (0x00003FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_1                                       0x1802C334
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_1_reg_addr                               "0xB802C334"
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_1_reg                                    0xB802C334
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_1_inst_addr                              "0x000D"
#define  set_COLORMAP_D_CMRGB2RGB_Tab2_Data_1_reg(data)                          (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Data_1_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab2_Data_1_reg                                (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Data_1_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_1_k21_shift                              (16)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_1_k13_shift                              (0)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_1_k21_mask                               (0x3FFF0000)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_1_k13_mask                               (0x00003FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_1_k21(data)                              (0x3FFF0000&((data)<<16))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_1_k13(data)                              (0x00003FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_1_get_k21(data)                          ((0x3FFF0000&(data))>>16)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_1_get_k13(data)                          (0x00003FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_2                                       0x1802C338
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_2_reg_addr                               "0xB802C338"
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_2_reg                                    0xB802C338
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_2_inst_addr                              "0x000E"
#define  set_COLORMAP_D_CMRGB2RGB_Tab2_Data_2_reg(data)                          (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Data_2_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab2_Data_2_reg                                (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Data_2_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_2_k23_shift                              (16)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_2_k22_shift                              (0)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_2_k23_mask                               (0x3FFF0000)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_2_k22_mask                               (0x00003FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_2_k23(data)                              (0x3FFF0000&((data)<<16))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_2_k22(data)                              (0x00003FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_2_get_k23(data)                          ((0x3FFF0000&(data))>>16)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_2_get_k22(data)                          (0x00003FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_3                                       0x1802C33C
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_3_reg_addr                               "0xB802C33C"
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_3_reg                                    0xB802C33C
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_3_inst_addr                              "0x000F"
#define  set_COLORMAP_D_CMRGB2RGB_Tab2_Data_3_reg(data)                          (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Data_3_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab2_Data_3_reg                                (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Data_3_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_3_k32_shift                              (16)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_3_k31_shift                              (0)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_3_k32_mask                               (0x3FFF0000)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_3_k31_mask                               (0x00003FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_3_k32(data)                              (0x3FFF0000&((data)<<16))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_3_k31(data)                              (0x00003FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_3_get_k32(data)                          ((0x3FFF0000&(data))>>16)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_3_get_k31(data)                          (0x00003FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_4                                       0x1802C340
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_4_reg_addr                               "0xB802C340"
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_4_reg                                    0xB802C340
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_4_inst_addr                              "0x0010"
#define  set_COLORMAP_D_CMRGB2RGB_Tab2_Data_4_reg(data)                          (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Data_4_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab2_Data_4_reg                                (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Data_4_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_4_k33_shift                              (0)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_4_k33_mask                               (0x00003FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_4_k33(data)                              (0x00003FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Data_4_get_k33(data)                          (0x00003FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_0                                 0x1802C344
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_0_reg_addr                         "0xB802C344"
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_0_reg                              0xB802C344
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_0_inst_addr                        "0x0011"
#define  set_COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_0_reg(data)                    (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_0_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_0_reg                          (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_0_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_0_goffset_shift                    (16)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_0_roffset_shift                    (0)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_0_goffset_mask                     (0x7FFF0000)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_0_roffset_mask                     (0x00007FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_0_goffset(data)                    (0x7FFF0000&((data)<<16))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_0_roffset(data)                    (0x00007FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_0_get_goffset(data)                ((0x7FFF0000&(data))>>16)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_0_get_roffset(data)                (0x00007FFF&(data))

#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_1                                 0x1802C348
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_1_reg_addr                         "0xB802C348"
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_1_reg                              0xB802C348
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_1_inst_addr                        "0x0012"
#define  set_COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_1_reg(data)                    (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_1_reg)=data)
#define  get_COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_1_reg                          (*((volatile unsigned int*)COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_1_reg))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_1_boffset_shift                    (0)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_1_boffset_mask                     (0x00007FFF)
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_1_boffset(data)                    (0x00007FFF&(data))
#define  COLORMAP_D_CMRGB2RGB_Tab2_Out_offset_1_get_boffset(data)                (0x00007FFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======COLORMAP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  cmrgb2rgb_overlay:1;
        RBus_UInt32  cmrgb2rgb_sub_tab_sel:1;
        RBus_UInt32  cmrgb2rgb_main_tab_sel:1;
        RBus_UInt32  cmrgb2rgb_sub_en:1;
        RBus_UInt32  cmrgb2rgb_main_en:1;
    };
}colormap_d_cmrgb2rgb_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  y_offset:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  x_offset:15;
    };
}colormap_d_cmrgb2rgb_tab1_data_in_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  z_offset:15;
    };
}colormap_d_cmrgb2rgb_tab1_data_in_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  k12:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  k11:14;
    };
}colormap_d_cmrgb2rgb_tab1_data_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  k21:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  k13:14;
    };
}colormap_d_cmrgb2rgb_tab1_data_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  k23:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  k22:14;
    };
}colormap_d_cmrgb2rgb_tab1_data_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  k32:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  k31:14;
    };
}colormap_d_cmrgb2rgb_tab1_data_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  k33:14;
    };
}colormap_d_cmrgb2rgb_tab1_data_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  goffset:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  roffset:15;
    };
}colormap_d_cmrgb2rgb_tab1_out_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  boffset:15;
    };
}colormap_d_cmrgb2rgb_tab1_out_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  y_offset:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  x_offset:15;
    };
}colormap_d_cmrgb2rgb_tab2_data_in_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  z_offset:15;
    };
}colormap_d_cmrgb2rgb_tab2_data_in_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  k12:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  k11:14;
    };
}colormap_d_cmrgb2rgb_tab2_data_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  k21:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  k13:14;
    };
}colormap_d_cmrgb2rgb_tab2_data_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  k23:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  k22:14;
    };
}colormap_d_cmrgb2rgb_tab2_data_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  k32:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  k31:14;
    };
}colormap_d_cmrgb2rgb_tab2_data_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  k33:14;
    };
}colormap_d_cmrgb2rgb_tab2_data_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  goffset:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  roffset:15;
    };
}colormap_d_cmrgb2rgb_tab2_out_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  boffset:15;
    };
}colormap_d_cmrgb2rgb_tab2_out_offset_1_RBUS;

#else //apply LITTLE_ENDIAN

//======COLORMAP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmrgb2rgb_main_en:1;
        RBus_UInt32  cmrgb2rgb_sub_en:1;
        RBus_UInt32  cmrgb2rgb_main_tab_sel:1;
        RBus_UInt32  cmrgb2rgb_sub_tab_sel:1;
        RBus_UInt32  cmrgb2rgb_overlay:1;
        RBus_UInt32  res1:27;
    };
}colormap_d_cmrgb2rgb_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  x_offset:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  y_offset:15;
        RBus_UInt32  res2:1;
    };
}colormap_d_cmrgb2rgb_tab1_data_in_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  z_offset:15;
        RBus_UInt32  res1:17;
    };
}colormap_d_cmrgb2rgb_tab1_data_in_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k11:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  k12:14;
        RBus_UInt32  res2:2;
    };
}colormap_d_cmrgb2rgb_tab1_data_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k13:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  k21:14;
        RBus_UInt32  res2:2;
    };
}colormap_d_cmrgb2rgb_tab1_data_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k22:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  k23:14;
        RBus_UInt32  res2:2;
    };
}colormap_d_cmrgb2rgb_tab1_data_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k31:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  k32:14;
        RBus_UInt32  res2:2;
    };
}colormap_d_cmrgb2rgb_tab1_data_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k33:14;
        RBus_UInt32  res1:18;
    };
}colormap_d_cmrgb2rgb_tab1_data_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  roffset:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  goffset:15;
        RBus_UInt32  res2:1;
    };
}colormap_d_cmrgb2rgb_tab1_out_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  boffset:15;
        RBus_UInt32  res1:17;
    };
}colormap_d_cmrgb2rgb_tab1_out_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  x_offset:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  y_offset:15;
        RBus_UInt32  res2:1;
    };
}colormap_d_cmrgb2rgb_tab2_data_in_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  z_offset:15;
        RBus_UInt32  res1:17;
    };
}colormap_d_cmrgb2rgb_tab2_data_in_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k11:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  k12:14;
        RBus_UInt32  res2:2;
    };
}colormap_d_cmrgb2rgb_tab2_data_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k13:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  k21:14;
        RBus_UInt32  res2:2;
    };
}colormap_d_cmrgb2rgb_tab2_data_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k22:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  k23:14;
        RBus_UInt32  res2:2;
    };
}colormap_d_cmrgb2rgb_tab2_data_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k31:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  k32:14;
        RBus_UInt32  res2:2;
    };
}colormap_d_cmrgb2rgb_tab2_data_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k33:14;
        RBus_UInt32  res1:18;
    };
}colormap_d_cmrgb2rgb_tab2_data_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  roffset:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  goffset:15;
        RBus_UInt32  res2:1;
    };
}colormap_d_cmrgb2rgb_tab2_out_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  boffset:15;
        RBus_UInt32  res1:17;
    };
}colormap_d_cmrgb2rgb_tab2_out_offset_1_RBUS;




#endif 


#endif 
