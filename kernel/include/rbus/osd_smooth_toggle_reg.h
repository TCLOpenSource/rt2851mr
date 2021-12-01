/**
* @file Merlin5-DesignSpec-osd_smooth_toggle_double_buffer_detail_register
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_OSD_SMOOTH_TOGGLE_REG_H_
#define _RBUS_OSD_SMOOTH_TOGGLE_REG_H_

#include "rbus_types.h"



//  OSD_SMOOTH_TOGGLE Register Address
#define  OSD_SMOOTH_TOGGLE_line_buffer_sta                                      0x1802FF10
#define  OSD_SMOOTH_TOGGLE_line_buffer_sta_reg_addr                              "0xB802FF10"
#define  OSD_SMOOTH_TOGGLE_line_buffer_sta_reg                                   0xB802FF10
#define  OSD_SMOOTH_TOGGLE_line_buffer_sta_inst_addr                             "0x0000"
#define  set_OSD_SMOOTH_TOGGLE_line_buffer_sta_reg(data)                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_line_buffer_sta_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_line_buffer_sta_reg                               (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_line_buffer_sta_reg))
#define  OSD_SMOOTH_TOGGLE_line_buffer_sta_l5_shift                              (16)
#define  OSD_SMOOTH_TOGGLE_line_buffer_sta_l4_shift                              (12)
#define  OSD_SMOOTH_TOGGLE_line_buffer_sta_l1_shift                              (0)
#define  OSD_SMOOTH_TOGGLE_line_buffer_sta_l5_mask                               (0x000F0000)
#define  OSD_SMOOTH_TOGGLE_line_buffer_sta_l4_mask                               (0x0000F000)
#define  OSD_SMOOTH_TOGGLE_line_buffer_sta_l1_mask                               (0x0000000F)
#define  OSD_SMOOTH_TOGGLE_line_buffer_sta_l5(data)                              (0x000F0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_line_buffer_sta_l4(data)                              (0x0000F000&((data)<<12))
#define  OSD_SMOOTH_TOGGLE_line_buffer_sta_l1(data)                              (0x0000000F&(data))
#define  OSD_SMOOTH_TOGGLE_line_buffer_sta_get_l5(data)                          ((0x000F0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_line_buffer_sta_get_l4(data)                          ((0x0000F000&(data))>>12)
#define  OSD_SMOOTH_TOGGLE_line_buffer_sta_get_l1(data)                          (0x0000000F&(data))

#define  OSD_SMOOTH_TOGGLE_line_buffer_size                                     0x1802FF14
#define  OSD_SMOOTH_TOGGLE_line_buffer_size_reg_addr                             "0xB802FF14"
#define  OSD_SMOOTH_TOGGLE_line_buffer_size_reg                                  0xB802FF14
#define  OSD_SMOOTH_TOGGLE_line_buffer_size_inst_addr                            "0x0001"
#define  set_OSD_SMOOTH_TOGGLE_line_buffer_size_reg(data)                        (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_line_buffer_size_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_line_buffer_size_reg                              (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_line_buffer_size_reg))
#define  OSD_SMOOTH_TOGGLE_line_buffer_size_l5_shift                             (16)
#define  OSD_SMOOTH_TOGGLE_line_buffer_size_l4_shift                             (12)
#define  OSD_SMOOTH_TOGGLE_line_buffer_size_l1_shift                             (0)
#define  OSD_SMOOTH_TOGGLE_line_buffer_size_l5_mask                              (0x000F0000)
#define  OSD_SMOOTH_TOGGLE_line_buffer_size_l4_mask                              (0x0000F000)
#define  OSD_SMOOTH_TOGGLE_line_buffer_size_l1_mask                              (0x0000000F)
#define  OSD_SMOOTH_TOGGLE_line_buffer_size_l5(data)                             (0x000F0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_line_buffer_size_l4(data)                             (0x0000F000&((data)<<12))
#define  OSD_SMOOTH_TOGGLE_line_buffer_size_l1(data)                             (0x0000000F&(data))
#define  OSD_SMOOTH_TOGGLE_line_buffer_size_get_l5(data)                         ((0x000F0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_line_buffer_size_get_l4(data)                         ((0x0000F000&(data))>>12)
#define  OSD_SMOOTH_TOGGLE_line_buffer_size_get_l1(data)                         (0x0000000F&(data))

#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL                                            0x1802F200
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_reg_addr                                    "0xB802F200"
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_reg                                         0xB802F200
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_inst_addr                                   "0x0002"
#define  set_OSD_SMOOTH_TOGGLE_OSD1_CTRL_reg(data)                               (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CTRL_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD1_CTRL_reg                                     (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CTRL_reg))
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_d3_mode_shift                               (9)
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_rotate_shift                                (8)
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_osd1_en_shift                               (1)
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_write_data_shift                            (0)
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_d3_mode_mask                                (0x00000200)
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_rotate_mask                                 (0x00000100)
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_osd1_en_mask                                (0x00000002)
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_write_data_mask                             (0x00000001)
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_d3_mode(data)                               (0x00000200&((data)<<9))
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_rotate(data)                                (0x00000100&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_osd1_en(data)                               (0x00000002&((data)<<1))
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_write_data(data)                            (0x00000001&(data))
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_get_d3_mode(data)                           ((0x00000200&(data))>>9)
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_get_rotate(data)                            ((0x00000100&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_get_osd1_en(data)                           ((0x00000002&(data))>>1)
#define  OSD_SMOOTH_TOGGLE_OSD1_CTRL_get_write_data(data)                        (0x00000001&(data))

#define  OSD_SMOOTH_TOGGLE_OSD1                                                 0x1802F204
#define  OSD_SMOOTH_TOGGLE_OSD1_reg_addr                                         "0xB802F204"
#define  OSD_SMOOTH_TOGGLE_OSD1_reg                                              0xB802F204
#define  OSD_SMOOTH_TOGGLE_OSD1_inst_addr                                        "0x0003"
#define  set_OSD_SMOOTH_TOGGLE_OSD1_reg(data)                                    (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD1_reg                                          (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_reg))
#define  OSD_SMOOTH_TOGGLE_OSD1_wi_endian_shift                                  (25)
#define  OSD_SMOOTH_TOGGLE_OSD1_rgb_out_shift                                    (24)
#define  OSD_SMOOTH_TOGGLE_OSD1_osd_shift                                        (16)
#define  OSD_SMOOTH_TOGGLE_OSD1_clear_region_en_shift                            (1)
#define  OSD_SMOOTH_TOGGLE_OSD1_write_data_shift                                 (0)
#define  OSD_SMOOTH_TOGGLE_OSD1_wi_endian_mask                                   (0x02000000)
#define  OSD_SMOOTH_TOGGLE_OSD1_rgb_out_mask                                     (0x01000000)
#define  OSD_SMOOTH_TOGGLE_OSD1_osd_mask                                         (0x00010000)
#define  OSD_SMOOTH_TOGGLE_OSD1_clear_region_en_mask                             (0x00000002)
#define  OSD_SMOOTH_TOGGLE_OSD1_write_data_mask                                  (0x00000001)
#define  OSD_SMOOTH_TOGGLE_OSD1_wi_endian(data)                                  (0x02000000&((data)<<25))
#define  OSD_SMOOTH_TOGGLE_OSD1_rgb_out(data)                                    (0x01000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_OSD1_osd(data)                                        (0x00010000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD1_clear_region_en(data)                            (0x00000002&((data)<<1))
#define  OSD_SMOOTH_TOGGLE_OSD1_write_data(data)                                 (0x00000001&(data))
#define  OSD_SMOOTH_TOGGLE_OSD1_get_wi_endian(data)                              ((0x02000000&(data))>>25)
#define  OSD_SMOOTH_TOGGLE_OSD1_get_rgb_out(data)                                ((0x01000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_OSD1_get_osd(data)                                    ((0x00010000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD1_get_clear_region_en(data)                        ((0x00000002&(data))>>1)
#define  OSD_SMOOTH_TOGGLE_OSD1_get_write_data(data)                             (0x00000001&(data))

#define  OSD_SMOOTH_TOGGLE_OSD1_START                                           0x1802F208
#define  OSD_SMOOTH_TOGGLE_OSD1_START_reg_addr                                   "0xB802F208"
#define  OSD_SMOOTH_TOGGLE_OSD1_START_reg                                        0xB802F208
#define  OSD_SMOOTH_TOGGLE_OSD1_START_inst_addr                                  "0x0004"
#define  set_OSD_SMOOTH_TOGGLE_OSD1_START_reg(data)                              (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_START_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD1_START_reg                                    (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_START_reg))
#define  OSD_SMOOTH_TOGGLE_OSD1_START_th_shift                                   (0)
#define  OSD_SMOOTH_TOGGLE_OSD1_START_th_mask                                    (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD1_START_th(data)                                   (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD1_START_get_th(data)                               (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD1_WI                                              0x1802F210
#define  OSD_SMOOTH_TOGGLE_OSD1_WI_reg_addr                                      "0xB802F210"
#define  OSD_SMOOTH_TOGGLE_OSD1_WI_reg                                           0xB802F210
#define  OSD_SMOOTH_TOGGLE_OSD1_WI_inst_addr                                     "0x0005"
#define  set_OSD_SMOOTH_TOGGLE_OSD1_WI_reg(data)                                 (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_WI_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD1_WI_reg                                       (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_WI_reg))
#define  OSD_SMOOTH_TOGGLE_OSD1_WI_addr_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD1_WI_addr_mask                                     (0xFFFFFFFF)
#define  OSD_SMOOTH_TOGGLE_OSD1_WI_addr(data)                                    (0xFFFFFFFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD1_WI_get_addr(data)                                (0xFFFFFFFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD1_WI_3D                                           0x1802F214
#define  OSD_SMOOTH_TOGGLE_OSD1_WI_3D_reg_addr                                   "0xB802F214"
#define  OSD_SMOOTH_TOGGLE_OSD1_WI_3D_reg                                        0xB802F214
#define  OSD_SMOOTH_TOGGLE_OSD1_WI_3D_inst_addr                                  "0x0006"
#define  set_OSD_SMOOTH_TOGGLE_OSD1_WI_3D_reg(data)                              (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_WI_3D_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD1_WI_3D_reg                                    (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_WI_3D_reg))
#define  OSD_SMOOTH_TOGGLE_OSD1_WI_3D_addr_shift                                 (0)
#define  OSD_SMOOTH_TOGGLE_OSD1_WI_3D_addr_mask                                  (0xFFFFFFFF)
#define  OSD_SMOOTH_TOGGLE_OSD1_WI_3D_addr(data)                                 (0xFFFFFFFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD1_WI_3D_get_addr(data)                             (0xFFFFFFFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD1_SIZE                                            0x1802F218
#define  OSD_SMOOTH_TOGGLE_OSD1_SIZE_reg_addr                                    "0xB802F218"
#define  OSD_SMOOTH_TOGGLE_OSD1_SIZE_reg                                         0xB802F218
#define  OSD_SMOOTH_TOGGLE_OSD1_SIZE_inst_addr                                   "0x0007"
#define  set_OSD_SMOOTH_TOGGLE_OSD1_SIZE_reg(data)                               (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_SIZE_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD1_SIZE_reg                                     (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_SIZE_reg))
#define  OSD_SMOOTH_TOGGLE_OSD1_SIZE_w_shift                                     (16)
#define  OSD_SMOOTH_TOGGLE_OSD1_SIZE_h_shift                                     (0)
#define  OSD_SMOOTH_TOGGLE_OSD1_SIZE_w_mask                                      (0x1FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD1_SIZE_h_mask                                      (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD1_SIZE_w(data)                                     (0x1FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD1_SIZE_h(data)                                     (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD1_SIZE_get_w(data)                                 ((0x1FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD1_SIZE_get_h(data)                                 (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD1_CC1                                             0x1802F21C
#define  OSD_SMOOTH_TOGGLE_OSD1_CC1_reg_addr                                     "0xB802F21C"
#define  OSD_SMOOTH_TOGGLE_OSD1_CC1_reg                                          0xB802F21C
#define  OSD_SMOOTH_TOGGLE_OSD1_CC1_inst_addr                                    "0x0008"
#define  set_OSD_SMOOTH_TOGGLE_OSD1_CC1_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CC1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD1_CC1_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CC1_reg))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC1_m01_shift                                    (16)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC1_m00_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC1_m01_mask                                     (0x3FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC1_m00_mask                                     (0x00003FFF)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC1_m01(data)                                    (0x3FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC1_m00(data)                                    (0x00003FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC1_get_m01(data)                                ((0x3FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC1_get_m00(data)                                (0x00003FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD1_CC2                                             0x1802F220
#define  OSD_SMOOTH_TOGGLE_OSD1_CC2_reg_addr                                     "0xB802F220"
#define  OSD_SMOOTH_TOGGLE_OSD1_CC2_reg                                          0xB802F220
#define  OSD_SMOOTH_TOGGLE_OSD1_CC2_inst_addr                                    "0x0009"
#define  set_OSD_SMOOTH_TOGGLE_OSD1_CC2_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CC2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD1_CC2_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CC2_reg))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC2_m10_shift                                    (16)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC2_m02_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC2_m10_mask                                     (0x3FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC2_m02_mask                                     (0x00003FFF)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC2_m10(data)                                    (0x3FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC2_m02(data)                                    (0x00003FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC2_get_m10(data)                                ((0x3FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC2_get_m02(data)                                (0x00003FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD1_CC3                                             0x1802F224
#define  OSD_SMOOTH_TOGGLE_OSD1_CC3_reg_addr                                     "0xB802F224"
#define  OSD_SMOOTH_TOGGLE_OSD1_CC3_reg                                          0xB802F224
#define  OSD_SMOOTH_TOGGLE_OSD1_CC3_inst_addr                                    "0x000A"
#define  set_OSD_SMOOTH_TOGGLE_OSD1_CC3_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CC3_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD1_CC3_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CC3_reg))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC3_m12_shift                                    (16)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC3_m11_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC3_m12_mask                                     (0x3FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC3_m11_mask                                     (0x00003FFF)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC3_m12(data)                                    (0x3FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC3_m11(data)                                    (0x00003FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC3_get_m12(data)                                ((0x3FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC3_get_m11(data)                                (0x00003FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD1_CC4                                             0x1802F228
#define  OSD_SMOOTH_TOGGLE_OSD1_CC4_reg_addr                                     "0xB802F228"
#define  OSD_SMOOTH_TOGGLE_OSD1_CC4_reg                                          0xB802F228
#define  OSD_SMOOTH_TOGGLE_OSD1_CC4_inst_addr                                    "0x000B"
#define  set_OSD_SMOOTH_TOGGLE_OSD1_CC4_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CC4_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD1_CC4_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CC4_reg))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC4_m21_shift                                    (16)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC4_m20_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC4_m21_mask                                     (0x3FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC4_m20_mask                                     (0x00003FFF)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC4_m21(data)                                    (0x3FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC4_m20(data)                                    (0x00003FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC4_get_m21(data)                                ((0x3FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC4_get_m20(data)                                (0x00003FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD1_CC5                                             0x1802F22C
#define  OSD_SMOOTH_TOGGLE_OSD1_CC5_reg_addr                                     "0xB802F22C"
#define  OSD_SMOOTH_TOGGLE_OSD1_CC5_reg                                          0xB802F22C
#define  OSD_SMOOTH_TOGGLE_OSD1_CC5_inst_addr                                    "0x000C"
#define  set_OSD_SMOOTH_TOGGLE_OSD1_CC5_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CC5_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD1_CC5_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CC5_reg))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC5_m22_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC5_m22_mask                                     (0x00003FFF)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC5_m22(data)                                    (0x00003FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC5_get_m22(data)                                (0x00003FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD1_CC6                                             0x1802F230
#define  OSD_SMOOTH_TOGGLE_OSD1_CC6_reg_addr                                     "0xB802F230"
#define  OSD_SMOOTH_TOGGLE_OSD1_CC6_reg                                          0xB802F230
#define  OSD_SMOOTH_TOGGLE_OSD1_CC6_inst_addr                                    "0x000D"
#define  set_OSD_SMOOTH_TOGGLE_OSD1_CC6_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CC6_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD1_CC6_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CC6_reg))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC6_a2_shift                                     (18)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC6_a1_shift                                     (9)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC6_a0_shift                                     (0)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC6_a2_mask                                      (0x07FC0000)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC6_a1_mask                                      (0x0003FE00)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC6_a0_mask                                      (0x000001FF)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC6_a2(data)                                     (0x07FC0000&((data)<<18))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC6_a1(data)                                     (0x0003FE00&((data)<<9))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC6_a0(data)                                     (0x000001FF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC6_get_a2(data)                                 ((0x07FC0000&(data))>>18)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC6_get_a1(data)                                 ((0x0003FE00&(data))>>9)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC6_get_a0(data)                                 (0x000001FF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD1_CC7                                             0x1802F234
#define  OSD_SMOOTH_TOGGLE_OSD1_CC7_reg_addr                                     "0xB802F234"
#define  OSD_SMOOTH_TOGGLE_OSD1_CC7_reg                                          0xB802F234
#define  OSD_SMOOTH_TOGGLE_OSD1_CC7_inst_addr                                    "0x000E"
#define  set_OSD_SMOOTH_TOGGLE_OSD1_CC7_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CC7_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD1_CC7_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CC7_reg))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC7_b2_shift                                     (18)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC7_b1_shift                                     (9)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC7_b0_shift                                     (0)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC7_b2_mask                                      (0x07FC0000)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC7_b1_mask                                      (0x0003FE00)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC7_b0_mask                                      (0x000001FF)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC7_b2(data)                                     (0x07FC0000&((data)<<18))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC7_b1(data)                                     (0x0003FE00&((data)<<9))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC7_b0(data)                                     (0x000001FF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD1_CC7_get_b2(data)                                 ((0x07FC0000&(data))>>18)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC7_get_b1(data)                                 ((0x0003FE00&(data))>>9)
#define  OSD_SMOOTH_TOGGLE_OSD1_CC7_get_b0(data)                                 (0x000001FF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR1                                          0x1802F280
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR1_reg_addr                                  "0xB802F280"
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR1_reg                                       0xB802F280
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR1_inst_addr                                 "0x000F"
#define  set_OSD_SMOOTH_TOGGLE_OSD1_CLEAR1_reg(data)                             (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CLEAR1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD1_CLEAR1_reg                                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CLEAR1_reg))
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR1_x_sta_shift                               (16)
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR1_x_end_shift                               (0)
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR1_x_sta_mask                                (0x1FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR1_x_end_mask                                (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR1_x_sta(data)                               (0x1FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR1_x_end(data)                               (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR1_get_x_sta(data)                           ((0x1FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR1_get_x_end(data)                           (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR2                                          0x1802F284
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR2_reg_addr                                  "0xB802F284"
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR2_reg                                       0xB802F284
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR2_inst_addr                                 "0x0010"
#define  set_OSD_SMOOTH_TOGGLE_OSD1_CLEAR2_reg(data)                             (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CLEAR2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD1_CLEAR2_reg                                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD1_CLEAR2_reg))
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR2_y_sta_shift                               (16)
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR2_y_end_shift                               (0)
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR2_y_sta_mask                                (0x1FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR2_y_end_mask                                (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR2_y_sta(data)                               (0x1FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR2_y_end(data)                               (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR2_get_y_sta(data)                           ((0x1FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD1_CLEAR2_get_y_end(data)                           (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL                                            0x1802F300
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_reg_addr                                    "0xB802F300"
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_reg                                         0xB802F300
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_inst_addr                                   "0x0011"
#define  set_OSD_SMOOTH_TOGGLE_OSD2_CTRL_reg(data)                               (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CTRL_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD2_CTRL_reg                                     (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CTRL_reg))
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_d3_mode_shift                               (9)
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_rotate_shift                                (8)
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_osd2_en_shift                               (1)
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_write_data_shift                            (0)
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_d3_mode_mask                                (0x00000200)
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_rotate_mask                                 (0x00000100)
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_osd2_en_mask                                (0x00000002)
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_write_data_mask                             (0x00000001)
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_d3_mode(data)                               (0x00000200&((data)<<9))
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_rotate(data)                                (0x00000100&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_osd2_en(data)                               (0x00000002&((data)<<1))
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_write_data(data)                            (0x00000001&(data))
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_get_d3_mode(data)                           ((0x00000200&(data))>>9)
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_get_rotate(data)                            ((0x00000100&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_get_osd2_en(data)                           ((0x00000002&(data))>>1)
#define  OSD_SMOOTH_TOGGLE_OSD2_CTRL_get_write_data(data)                        (0x00000001&(data))

#define  OSD_SMOOTH_TOGGLE_OSD2                                                 0x1802F304
#define  OSD_SMOOTH_TOGGLE_OSD2_reg_addr                                         "0xB802F304"
#define  OSD_SMOOTH_TOGGLE_OSD2_reg                                              0xB802F304
#define  OSD_SMOOTH_TOGGLE_OSD2_inst_addr                                        "0x0012"
#define  set_OSD_SMOOTH_TOGGLE_OSD2_reg(data)                                    (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD2_reg                                          (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_reg))
#define  OSD_SMOOTH_TOGGLE_OSD2_wi_endian_shift                                  (25)
#define  OSD_SMOOTH_TOGGLE_OSD2_rgb_out_shift                                    (24)
#define  OSD_SMOOTH_TOGGLE_OSD2_osd_shift                                        (16)
#define  OSD_SMOOTH_TOGGLE_OSD2_clear_region_en_shift                            (1)
#define  OSD_SMOOTH_TOGGLE_OSD2_write_data_shift                                 (0)
#define  OSD_SMOOTH_TOGGLE_OSD2_wi_endian_mask                                   (0x02000000)
#define  OSD_SMOOTH_TOGGLE_OSD2_rgb_out_mask                                     (0x01000000)
#define  OSD_SMOOTH_TOGGLE_OSD2_osd_mask                                         (0x00010000)
#define  OSD_SMOOTH_TOGGLE_OSD2_clear_region_en_mask                             (0x00000002)
#define  OSD_SMOOTH_TOGGLE_OSD2_write_data_mask                                  (0x00000001)
#define  OSD_SMOOTH_TOGGLE_OSD2_wi_endian(data)                                  (0x02000000&((data)<<25))
#define  OSD_SMOOTH_TOGGLE_OSD2_rgb_out(data)                                    (0x01000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_OSD2_osd(data)                                        (0x00010000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD2_clear_region_en(data)                            (0x00000002&((data)<<1))
#define  OSD_SMOOTH_TOGGLE_OSD2_write_data(data)                                 (0x00000001&(data))
#define  OSD_SMOOTH_TOGGLE_OSD2_get_wi_endian(data)                              ((0x02000000&(data))>>25)
#define  OSD_SMOOTH_TOGGLE_OSD2_get_rgb_out(data)                                ((0x01000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_OSD2_get_osd(data)                                    ((0x00010000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD2_get_clear_region_en(data)                        ((0x00000002&(data))>>1)
#define  OSD_SMOOTH_TOGGLE_OSD2_get_write_data(data)                             (0x00000001&(data))

#define  OSD_SMOOTH_TOGGLE_OSD2_START                                           0x1802F308
#define  OSD_SMOOTH_TOGGLE_OSD2_START_reg_addr                                   "0xB802F308"
#define  OSD_SMOOTH_TOGGLE_OSD2_START_reg                                        0xB802F308
#define  OSD_SMOOTH_TOGGLE_OSD2_START_inst_addr                                  "0x0013"
#define  set_OSD_SMOOTH_TOGGLE_OSD2_START_reg(data)                              (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_START_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD2_START_reg                                    (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_START_reg))
#define  OSD_SMOOTH_TOGGLE_OSD2_START_th_shift                                   (0)
#define  OSD_SMOOTH_TOGGLE_OSD2_START_th_mask                                    (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD2_START_th(data)                                   (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD2_START_get_th(data)                               (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD2_WI                                              0x1802F310
#define  OSD_SMOOTH_TOGGLE_OSD2_WI_reg_addr                                      "0xB802F310"
#define  OSD_SMOOTH_TOGGLE_OSD2_WI_reg                                           0xB802F310
#define  OSD_SMOOTH_TOGGLE_OSD2_WI_inst_addr                                     "0x0014"
#define  set_OSD_SMOOTH_TOGGLE_OSD2_WI_reg(data)                                 (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_WI_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD2_WI_reg                                       (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_WI_reg))
#define  OSD_SMOOTH_TOGGLE_OSD2_WI_addr_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD2_WI_addr_mask                                     (0xFFFFFFFF)
#define  OSD_SMOOTH_TOGGLE_OSD2_WI_addr(data)                                    (0xFFFFFFFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD2_WI_get_addr(data)                                (0xFFFFFFFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD2_WI_3D                                           0x1802F314
#define  OSD_SMOOTH_TOGGLE_OSD2_WI_3D_reg_addr                                   "0xB802F314"
#define  OSD_SMOOTH_TOGGLE_OSD2_WI_3D_reg                                        0xB802F314
#define  OSD_SMOOTH_TOGGLE_OSD2_WI_3D_inst_addr                                  "0x0015"
#define  set_OSD_SMOOTH_TOGGLE_OSD2_WI_3D_reg(data)                              (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_WI_3D_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD2_WI_3D_reg                                    (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_WI_3D_reg))
#define  OSD_SMOOTH_TOGGLE_OSD2_WI_3D_addr_shift                                 (0)
#define  OSD_SMOOTH_TOGGLE_OSD2_WI_3D_addr_mask                                  (0xFFFFFFFF)
#define  OSD_SMOOTH_TOGGLE_OSD2_WI_3D_addr(data)                                 (0xFFFFFFFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD2_WI_3D_get_addr(data)                             (0xFFFFFFFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD2_SIZE                                            0x1802F318
#define  OSD_SMOOTH_TOGGLE_OSD2_SIZE_reg_addr                                    "0xB802F318"
#define  OSD_SMOOTH_TOGGLE_OSD2_SIZE_reg                                         0xB802F318
#define  OSD_SMOOTH_TOGGLE_OSD2_SIZE_inst_addr                                   "0x0016"
#define  set_OSD_SMOOTH_TOGGLE_OSD2_SIZE_reg(data)                               (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_SIZE_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD2_SIZE_reg                                     (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_SIZE_reg))
#define  OSD_SMOOTH_TOGGLE_OSD2_SIZE_w_shift                                     (16)
#define  OSD_SMOOTH_TOGGLE_OSD2_SIZE_h_shift                                     (0)
#define  OSD_SMOOTH_TOGGLE_OSD2_SIZE_w_mask                                      (0x1FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD2_SIZE_h_mask                                      (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD2_SIZE_w(data)                                     (0x1FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD2_SIZE_h(data)                                     (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD2_SIZE_get_w(data)                                 ((0x1FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD2_SIZE_get_h(data)                                 (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD2_CC1                                             0x1802F31C
#define  OSD_SMOOTH_TOGGLE_OSD2_CC1_reg_addr                                     "0xB802F31C"
#define  OSD_SMOOTH_TOGGLE_OSD2_CC1_reg                                          0xB802F31C
#define  OSD_SMOOTH_TOGGLE_OSD2_CC1_inst_addr                                    "0x0017"
#define  set_OSD_SMOOTH_TOGGLE_OSD2_CC1_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CC1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD2_CC1_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CC1_reg))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC1_m01_shift                                    (16)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC1_m00_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC1_m01_mask                                     (0x3FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC1_m00_mask                                     (0x00003FFF)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC1_m01(data)                                    (0x3FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC1_m00(data)                                    (0x00003FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC1_get_m01(data)                                ((0x3FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC1_get_m00(data)                                (0x00003FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD2_CC2                                             0x1802F320
#define  OSD_SMOOTH_TOGGLE_OSD2_CC2_reg_addr                                     "0xB802F320"
#define  OSD_SMOOTH_TOGGLE_OSD2_CC2_reg                                          0xB802F320
#define  OSD_SMOOTH_TOGGLE_OSD2_CC2_inst_addr                                    "0x0018"
#define  set_OSD_SMOOTH_TOGGLE_OSD2_CC2_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CC2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD2_CC2_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CC2_reg))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC2_m10_shift                                    (16)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC2_m02_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC2_m10_mask                                     (0x3FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC2_m02_mask                                     (0x00003FFF)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC2_m10(data)                                    (0x3FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC2_m02(data)                                    (0x00003FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC2_get_m10(data)                                ((0x3FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC2_get_m02(data)                                (0x00003FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD2_CC3                                             0x1802F324
#define  OSD_SMOOTH_TOGGLE_OSD2_CC3_reg_addr                                     "0xB802F324"
#define  OSD_SMOOTH_TOGGLE_OSD2_CC3_reg                                          0xB802F324
#define  OSD_SMOOTH_TOGGLE_OSD2_CC3_inst_addr                                    "0x0019"
#define  set_OSD_SMOOTH_TOGGLE_OSD2_CC3_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CC3_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD2_CC3_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CC3_reg))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC3_m12_shift                                    (16)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC3_m11_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC3_m12_mask                                     (0x3FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC3_m11_mask                                     (0x00003FFF)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC3_m12(data)                                    (0x3FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC3_m11(data)                                    (0x00003FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC3_get_m12(data)                                ((0x3FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC3_get_m11(data)                                (0x00003FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD2_CC4                                             0x1802F328
#define  OSD_SMOOTH_TOGGLE_OSD2_CC4_reg_addr                                     "0xB802F328"
#define  OSD_SMOOTH_TOGGLE_OSD2_CC4_reg                                          0xB802F328
#define  OSD_SMOOTH_TOGGLE_OSD2_CC4_inst_addr                                    "0x001A"
#define  set_OSD_SMOOTH_TOGGLE_OSD2_CC4_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CC4_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD2_CC4_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CC4_reg))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC4_m21_shift                                    (16)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC4_m20_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC4_m21_mask                                     (0x3FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC4_m20_mask                                     (0x00003FFF)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC4_m21(data)                                    (0x3FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC4_m20(data)                                    (0x00003FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC4_get_m21(data)                                ((0x3FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC4_get_m20(data)                                (0x00003FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD2_CC5                                             0x1802F32C
#define  OSD_SMOOTH_TOGGLE_OSD2_CC5_reg_addr                                     "0xB802F32C"
#define  OSD_SMOOTH_TOGGLE_OSD2_CC5_reg                                          0xB802F32C
#define  OSD_SMOOTH_TOGGLE_OSD2_CC5_inst_addr                                    "0x001B"
#define  set_OSD_SMOOTH_TOGGLE_OSD2_CC5_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CC5_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD2_CC5_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CC5_reg))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC5_m22_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC5_m22_mask                                     (0x00003FFF)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC5_m22(data)                                    (0x00003FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC5_get_m22(data)                                (0x00003FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD2_CC6                                             0x1802F330
#define  OSD_SMOOTH_TOGGLE_OSD2_CC6_reg_addr                                     "0xB802F330"
#define  OSD_SMOOTH_TOGGLE_OSD2_CC6_reg                                          0xB802F330
#define  OSD_SMOOTH_TOGGLE_OSD2_CC6_inst_addr                                    "0x001C"
#define  set_OSD_SMOOTH_TOGGLE_OSD2_CC6_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CC6_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD2_CC6_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CC6_reg))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC6_a2_shift                                     (18)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC6_a1_shift                                     (9)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC6_a0_shift                                     (0)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC6_a2_mask                                      (0x07FC0000)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC6_a1_mask                                      (0x0003FE00)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC6_a0_mask                                      (0x000001FF)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC6_a2(data)                                     (0x07FC0000&((data)<<18))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC6_a1(data)                                     (0x0003FE00&((data)<<9))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC6_a0(data)                                     (0x000001FF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC6_get_a2(data)                                 ((0x07FC0000&(data))>>18)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC6_get_a1(data)                                 ((0x0003FE00&(data))>>9)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC6_get_a0(data)                                 (0x000001FF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD2_CC7                                             0x1802F334
#define  OSD_SMOOTH_TOGGLE_OSD2_CC7_reg_addr                                     "0xB802F334"
#define  OSD_SMOOTH_TOGGLE_OSD2_CC7_reg                                          0xB802F334
#define  OSD_SMOOTH_TOGGLE_OSD2_CC7_inst_addr                                    "0x001D"
#define  set_OSD_SMOOTH_TOGGLE_OSD2_CC7_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CC7_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD2_CC7_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CC7_reg))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC7_b2_shift                                     (18)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC7_b1_shift                                     (9)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC7_b0_shift                                     (0)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC7_b2_mask                                      (0x07FC0000)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC7_b1_mask                                      (0x0003FE00)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC7_b0_mask                                      (0x000001FF)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC7_b2(data)                                     (0x07FC0000&((data)<<18))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC7_b1(data)                                     (0x0003FE00&((data)<<9))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC7_b0(data)                                     (0x000001FF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD2_CC7_get_b2(data)                                 ((0x07FC0000&(data))>>18)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC7_get_b1(data)                                 ((0x0003FE00&(data))>>9)
#define  OSD_SMOOTH_TOGGLE_OSD2_CC7_get_b0(data)                                 (0x000001FF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR1                                          0x1802F380
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR1_reg_addr                                  "0xB802F380"
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR1_reg                                       0xB802F380
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR1_inst_addr                                 "0x001E"
#define  set_OSD_SMOOTH_TOGGLE_OSD2_CLEAR1_reg(data)                             (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CLEAR1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD2_CLEAR1_reg                                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CLEAR1_reg))
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR1_x_sta_shift                               (16)
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR1_x_end_shift                               (0)
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR1_x_sta_mask                                (0x1FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR1_x_end_mask                                (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR1_x_sta(data)                               (0x1FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR1_x_end(data)                               (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR1_get_x_sta(data)                           ((0x1FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR1_get_x_end(data)                           (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR2                                          0x1802F384
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR2_reg_addr                                  "0xB802F384"
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR2_reg                                       0xB802F384
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR2_inst_addr                                 "0x001F"
#define  set_OSD_SMOOTH_TOGGLE_OSD2_CLEAR2_reg(data)                             (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CLEAR2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD2_CLEAR2_reg                                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD2_CLEAR2_reg))
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR2_y_sta_shift                               (16)
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR2_y_end_shift                               (0)
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR2_y_sta_mask                                (0x1FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR2_y_end_mask                                (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR2_y_sta(data)                               (0x1FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR2_y_end(data)                               (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR2_get_y_sta(data)                           ((0x1FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD2_CLEAR2_get_y_end(data)                           (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL                                            0x1802F400
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_reg_addr                                    "0xB802F400"
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_reg                                         0xB802F400
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_inst_addr                                   "0x0020"
#define  set_OSD_SMOOTH_TOGGLE_OSD3_CTRL_reg(data)                               (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CTRL_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD3_CTRL_reg                                     (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CTRL_reg))
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_d3_mode_shift                               (9)
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_rotate_shift                                (8)
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_osd3_en_shift                               (1)
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_write_data_shift                            (0)
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_d3_mode_mask                                (0x00000200)
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_rotate_mask                                 (0x00000100)
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_osd3_en_mask                                (0x00000002)
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_write_data_mask                             (0x00000001)
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_d3_mode(data)                               (0x00000200&((data)<<9))
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_rotate(data)                                (0x00000100&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_osd3_en(data)                               (0x00000002&((data)<<1))
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_write_data(data)                            (0x00000001&(data))
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_get_d3_mode(data)                           ((0x00000200&(data))>>9)
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_get_rotate(data)                            ((0x00000100&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_get_osd3_en(data)                           ((0x00000002&(data))>>1)
#define  OSD_SMOOTH_TOGGLE_OSD3_CTRL_get_write_data(data)                        (0x00000001&(data))

#define  OSD_SMOOTH_TOGGLE_OSD3                                                 0x1802F404
#define  OSD_SMOOTH_TOGGLE_OSD3_reg_addr                                         "0xB802F404"
#define  OSD_SMOOTH_TOGGLE_OSD3_reg                                              0xB802F404
#define  OSD_SMOOTH_TOGGLE_OSD3_inst_addr                                        "0x0021"
#define  set_OSD_SMOOTH_TOGGLE_OSD3_reg(data)                                    (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD3_reg                                          (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_reg))
#define  OSD_SMOOTH_TOGGLE_OSD3_wi_endian_shift                                  (25)
#define  OSD_SMOOTH_TOGGLE_OSD3_rgb_out_shift                                    (24)
#define  OSD_SMOOTH_TOGGLE_OSD3_osd_shift                                        (16)
#define  OSD_SMOOTH_TOGGLE_OSD3_clear_region_en_shift                            (1)
#define  OSD_SMOOTH_TOGGLE_OSD3_write_data_shift                                 (0)
#define  OSD_SMOOTH_TOGGLE_OSD3_wi_endian_mask                                   (0x02000000)
#define  OSD_SMOOTH_TOGGLE_OSD3_rgb_out_mask                                     (0x01000000)
#define  OSD_SMOOTH_TOGGLE_OSD3_osd_mask                                         (0x00010000)
#define  OSD_SMOOTH_TOGGLE_OSD3_clear_region_en_mask                             (0x00000002)
#define  OSD_SMOOTH_TOGGLE_OSD3_write_data_mask                                  (0x00000001)
#define  OSD_SMOOTH_TOGGLE_OSD3_wi_endian(data)                                  (0x02000000&((data)<<25))
#define  OSD_SMOOTH_TOGGLE_OSD3_rgb_out(data)                                    (0x01000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_OSD3_osd(data)                                        (0x00010000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD3_clear_region_en(data)                            (0x00000002&((data)<<1))
#define  OSD_SMOOTH_TOGGLE_OSD3_write_data(data)                                 (0x00000001&(data))
#define  OSD_SMOOTH_TOGGLE_OSD3_get_wi_endian(data)                              ((0x02000000&(data))>>25)
#define  OSD_SMOOTH_TOGGLE_OSD3_get_rgb_out(data)                                ((0x01000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_OSD3_get_osd(data)                                    ((0x00010000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD3_get_clear_region_en(data)                        ((0x00000002&(data))>>1)
#define  OSD_SMOOTH_TOGGLE_OSD3_get_write_data(data)                             (0x00000001&(data))

#define  OSD_SMOOTH_TOGGLE_OSD3_START                                           0x1802F408
#define  OSD_SMOOTH_TOGGLE_OSD3_START_reg_addr                                   "0xB802F408"
#define  OSD_SMOOTH_TOGGLE_OSD3_START_reg                                        0xB802F408
#define  OSD_SMOOTH_TOGGLE_OSD3_START_inst_addr                                  "0x0022"
#define  set_OSD_SMOOTH_TOGGLE_OSD3_START_reg(data)                              (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_START_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD3_START_reg                                    (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_START_reg))
#define  OSD_SMOOTH_TOGGLE_OSD3_START_th_shift                                   (0)
#define  OSD_SMOOTH_TOGGLE_OSD3_START_th_mask                                    (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD3_START_th(data)                                   (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD3_START_get_th(data)                               (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD3_WI                                              0x1802F410
#define  OSD_SMOOTH_TOGGLE_OSD3_WI_reg_addr                                      "0xB802F410"
#define  OSD_SMOOTH_TOGGLE_OSD3_WI_reg                                           0xB802F410
#define  OSD_SMOOTH_TOGGLE_OSD3_WI_inst_addr                                     "0x0023"
#define  set_OSD_SMOOTH_TOGGLE_OSD3_WI_reg(data)                                 (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_WI_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD3_WI_reg                                       (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_WI_reg))
#define  OSD_SMOOTH_TOGGLE_OSD3_WI_addr_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD3_WI_addr_mask                                     (0xFFFFFFFF)
#define  OSD_SMOOTH_TOGGLE_OSD3_WI_addr(data)                                    (0xFFFFFFFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD3_WI_get_addr(data)                                (0xFFFFFFFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD3_WI_3D                                           0x1802F414
#define  OSD_SMOOTH_TOGGLE_OSD3_WI_3D_reg_addr                                   "0xB802F414"
#define  OSD_SMOOTH_TOGGLE_OSD3_WI_3D_reg                                        0xB802F414
#define  OSD_SMOOTH_TOGGLE_OSD3_WI_3D_inst_addr                                  "0x0024"
#define  set_OSD_SMOOTH_TOGGLE_OSD3_WI_3D_reg(data)                              (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_WI_3D_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD3_WI_3D_reg                                    (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_WI_3D_reg))
#define  OSD_SMOOTH_TOGGLE_OSD3_WI_3D_addr_shift                                 (0)
#define  OSD_SMOOTH_TOGGLE_OSD3_WI_3D_addr_mask                                  (0xFFFFFFFF)
#define  OSD_SMOOTH_TOGGLE_OSD3_WI_3D_addr(data)                                 (0xFFFFFFFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD3_WI_3D_get_addr(data)                             (0xFFFFFFFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD3_SIZE                                            0x1802F418
#define  OSD_SMOOTH_TOGGLE_OSD3_SIZE_reg_addr                                    "0xB802F418"
#define  OSD_SMOOTH_TOGGLE_OSD3_SIZE_reg                                         0xB802F418
#define  OSD_SMOOTH_TOGGLE_OSD3_SIZE_inst_addr                                   "0x0025"
#define  set_OSD_SMOOTH_TOGGLE_OSD3_SIZE_reg(data)                               (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_SIZE_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD3_SIZE_reg                                     (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_SIZE_reg))
#define  OSD_SMOOTH_TOGGLE_OSD3_SIZE_w_shift                                     (16)
#define  OSD_SMOOTH_TOGGLE_OSD3_SIZE_h_shift                                     (0)
#define  OSD_SMOOTH_TOGGLE_OSD3_SIZE_w_mask                                      (0x1FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD3_SIZE_h_mask                                      (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD3_SIZE_w(data)                                     (0x1FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD3_SIZE_h(data)                                     (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD3_SIZE_get_w(data)                                 ((0x1FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD3_SIZE_get_h(data)                                 (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD3_CC1                                             0x1802F41C
#define  OSD_SMOOTH_TOGGLE_OSD3_CC1_reg_addr                                     "0xB802F41C"
#define  OSD_SMOOTH_TOGGLE_OSD3_CC1_reg                                          0xB802F41C
#define  OSD_SMOOTH_TOGGLE_OSD3_CC1_inst_addr                                    "0x0026"
#define  set_OSD_SMOOTH_TOGGLE_OSD3_CC1_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CC1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD3_CC1_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CC1_reg))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC1_m01_shift                                    (16)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC1_m00_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC1_m01_mask                                     (0x3FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC1_m00_mask                                     (0x00003FFF)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC1_m01(data)                                    (0x3FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC1_m00(data)                                    (0x00003FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC1_get_m01(data)                                ((0x3FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC1_get_m00(data)                                (0x00003FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD3_CC2                                             0x1802F420
#define  OSD_SMOOTH_TOGGLE_OSD3_CC2_reg_addr                                     "0xB802F420"
#define  OSD_SMOOTH_TOGGLE_OSD3_CC2_reg                                          0xB802F420
#define  OSD_SMOOTH_TOGGLE_OSD3_CC2_inst_addr                                    "0x0027"
#define  set_OSD_SMOOTH_TOGGLE_OSD3_CC2_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CC2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD3_CC2_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CC2_reg))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC2_m10_shift                                    (16)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC2_m02_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC2_m10_mask                                     (0x3FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC2_m02_mask                                     (0x00003FFF)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC2_m10(data)                                    (0x3FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC2_m02(data)                                    (0x00003FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC2_get_m10(data)                                ((0x3FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC2_get_m02(data)                                (0x00003FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD3_CC3                                             0x1802F424
#define  OSD_SMOOTH_TOGGLE_OSD3_CC3_reg_addr                                     "0xB802F424"
#define  OSD_SMOOTH_TOGGLE_OSD3_CC3_reg                                          0xB802F424
#define  OSD_SMOOTH_TOGGLE_OSD3_CC3_inst_addr                                    "0x0028"
#define  set_OSD_SMOOTH_TOGGLE_OSD3_CC3_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CC3_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD3_CC3_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CC3_reg))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC3_m12_shift                                    (16)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC3_m11_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC3_m12_mask                                     (0x3FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC3_m11_mask                                     (0x00003FFF)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC3_m12(data)                                    (0x3FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC3_m11(data)                                    (0x00003FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC3_get_m12(data)                                ((0x3FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC3_get_m11(data)                                (0x00003FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD3_CC4                                             0x1802F428
#define  OSD_SMOOTH_TOGGLE_OSD3_CC4_reg_addr                                     "0xB802F428"
#define  OSD_SMOOTH_TOGGLE_OSD3_CC4_reg                                          0xB802F428
#define  OSD_SMOOTH_TOGGLE_OSD3_CC4_inst_addr                                    "0x0029"
#define  set_OSD_SMOOTH_TOGGLE_OSD3_CC4_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CC4_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD3_CC4_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CC4_reg))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC4_m21_shift                                    (16)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC4_m20_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC4_m21_mask                                     (0x3FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC4_m20_mask                                     (0x00003FFF)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC4_m21(data)                                    (0x3FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC4_m20(data)                                    (0x00003FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC4_get_m21(data)                                ((0x3FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC4_get_m20(data)                                (0x00003FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD3_CC5                                             0x1802F42C
#define  OSD_SMOOTH_TOGGLE_OSD3_CC5_reg_addr                                     "0xB802F42C"
#define  OSD_SMOOTH_TOGGLE_OSD3_CC5_reg                                          0xB802F42C
#define  OSD_SMOOTH_TOGGLE_OSD3_CC5_inst_addr                                    "0x002A"
#define  set_OSD_SMOOTH_TOGGLE_OSD3_CC5_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CC5_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD3_CC5_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CC5_reg))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC5_m22_shift                                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC5_m22_mask                                     (0x00003FFF)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC5_m22(data)                                    (0x00003FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC5_get_m22(data)                                (0x00003FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD3_CC6                                             0x1802F430
#define  OSD_SMOOTH_TOGGLE_OSD3_CC6_reg_addr                                     "0xB802F430"
#define  OSD_SMOOTH_TOGGLE_OSD3_CC6_reg                                          0xB802F430
#define  OSD_SMOOTH_TOGGLE_OSD3_CC6_inst_addr                                    "0x002B"
#define  set_OSD_SMOOTH_TOGGLE_OSD3_CC6_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CC6_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD3_CC6_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CC6_reg))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC6_a2_shift                                     (18)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC6_a1_shift                                     (9)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC6_a0_shift                                     (0)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC6_a2_mask                                      (0x07FC0000)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC6_a1_mask                                      (0x0003FE00)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC6_a0_mask                                      (0x000001FF)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC6_a2(data)                                     (0x07FC0000&((data)<<18))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC6_a1(data)                                     (0x0003FE00&((data)<<9))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC6_a0(data)                                     (0x000001FF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC6_get_a2(data)                                 ((0x07FC0000&(data))>>18)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC6_get_a1(data)                                 ((0x0003FE00&(data))>>9)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC6_get_a0(data)                                 (0x000001FF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD3_CC7                                             0x1802F434
#define  OSD_SMOOTH_TOGGLE_OSD3_CC7_reg_addr                                     "0xB802F434"
#define  OSD_SMOOTH_TOGGLE_OSD3_CC7_reg                                          0xB802F434
#define  OSD_SMOOTH_TOGGLE_OSD3_CC7_inst_addr                                    "0x002C"
#define  set_OSD_SMOOTH_TOGGLE_OSD3_CC7_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CC7_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD3_CC7_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CC7_reg))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC7_b2_shift                                     (18)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC7_b1_shift                                     (9)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC7_b0_shift                                     (0)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC7_b2_mask                                      (0x07FC0000)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC7_b1_mask                                      (0x0003FE00)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC7_b0_mask                                      (0x000001FF)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC7_b2(data)                                     (0x07FC0000&((data)<<18))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC7_b1(data)                                     (0x0003FE00&((data)<<9))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC7_b0(data)                                     (0x000001FF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD3_CC7_get_b2(data)                                 ((0x07FC0000&(data))>>18)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC7_get_b1(data)                                 ((0x0003FE00&(data))>>9)
#define  OSD_SMOOTH_TOGGLE_OSD3_CC7_get_b0(data)                                 (0x000001FF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR1                                          0x1802F480
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR1_reg_addr                                  "0xB802F480"
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR1_reg                                       0xB802F480
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR1_inst_addr                                 "0x002D"
#define  set_OSD_SMOOTH_TOGGLE_OSD3_CLEAR1_reg(data)                             (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CLEAR1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD3_CLEAR1_reg                                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CLEAR1_reg))
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR1_x_sta_shift                               (16)
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR1_x_end_shift                               (0)
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR1_x_sta_mask                                (0x1FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR1_x_end_mask                                (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR1_x_sta(data)                               (0x1FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR1_x_end(data)                               (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR1_get_x_sta(data)                           ((0x1FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR1_get_x_end(data)                           (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR2                                          0x1802F484
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR2_reg_addr                                  "0xB802F484"
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR2_reg                                       0xB802F484
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR2_inst_addr                                 "0x002E"
#define  set_OSD_SMOOTH_TOGGLE_OSD3_CLEAR2_reg(data)                             (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CLEAR2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD3_CLEAR2_reg                                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD3_CLEAR2_reg))
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR2_y_sta_shift                               (16)
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR2_y_end_shift                               (0)
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR2_y_sta_mask                                (0x1FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR2_y_end_mask                                (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR2_y_sta(data)                               (0x1FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR2_y_end(data)                               (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR2_get_y_sta(data)                           ((0x1FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD3_CLEAR2_get_y_end(data)                           (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0                               0x18029400
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_reg_addr                       "0xB8029400"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_reg                            0xB8029400
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_inst_addr                      "0x002F"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_reg(data)                  (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_reg                        (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_v_zoom_en_shift                (31)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_ver_ini_shift                  (22)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_ver_tap_num_shift              (20)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_ver_factor_shift               (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_v_zoom_en_mask                 (0x80000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_ver_ini_mask                   (0x3FC00000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_ver_tap_num_mask               (0x00300000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_ver_factor_mask                (0x000FFFFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_v_zoom_en(data)                (0x80000000&((data)<<31))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_ver_ini(data)                  (0x3FC00000&((data)<<22))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_ver_tap_num(data)              (0x00300000&((data)<<20))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_ver_factor(data)               (0x000FFFFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_get_v_zoom_en(data)            ((0x80000000&(data))>>31)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_get_ver_ini(data)              ((0x3FC00000&(data))>>22)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_get_ver_tap_num(data)          ((0x00300000&(data))>>20)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl0_get_ver_factor(data)           (0x000FFFFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1                               0x18029404
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_reg_addr                       "0xB8029404"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_reg                            0xB8029404
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_inst_addr                      "0x0030"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_reg(data)                  (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_reg                        (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_h_zoom_en_shift                (31)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_hor_ini_shift                  (22)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_hor_factor_shift               (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_h_zoom_en_mask                 (0x80000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_hor_ini_mask                   (0x3FC00000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_hor_factor_mask                (0x000FFFFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_h_zoom_en(data)                (0x80000000&((data)<<31))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_hor_ini(data)                  (0x3FC00000&((data)<<22))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_hor_factor(data)               (0x000FFFFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_get_h_zoom_en(data)            ((0x80000000&(data))>>31)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_get_hor_ini(data)              ((0x3FC00000&(data))>>22)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Scaleup_Ctrl1_get_hor_factor(data)           (0x000FFFFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_H_Location_Ctrl                             0x18029408
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_H_Location_Ctrl_reg_addr                     "0xB8029408"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_H_Location_Ctrl_reg                          0xB8029408
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_H_Location_Ctrl_inst_addr                    "0x0031"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_1_H_Location_Ctrl_reg(data)                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_1_H_Location_Ctrl_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_1_H_Location_Ctrl_reg                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_1_H_Location_Ctrl_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_H_Location_Ctrl_osd_h_sta_shift              (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_H_Location_Ctrl_osd_width_shift              (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_H_Location_Ctrl_osd_h_sta_mask               (0x1FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_H_Location_Ctrl_osd_width_mask               (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_H_Location_Ctrl_osd_h_sta(data)              (0x1FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_H_Location_Ctrl_osd_width(data)              (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_H_Location_Ctrl_get_osd_h_sta(data)          ((0x1FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_H_Location_Ctrl_get_osd_width(data)          (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_V_Location_Ctrl                             0x1802940C
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_V_Location_Ctrl_reg_addr                     "0xB802940C"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_V_Location_Ctrl_reg                          0xB802940C
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_V_Location_Ctrl_inst_addr                    "0x0032"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_1_V_Location_Ctrl_reg(data)                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_1_V_Location_Ctrl_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_1_V_Location_Ctrl_reg                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_1_V_Location_Ctrl_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_V_Location_Ctrl_osd_v_sta_shift              (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_V_Location_Ctrl_osd_height_shift             (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_V_Location_Ctrl_osd_v_sta_mask               (0x0FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_V_Location_Ctrl_osd_height_mask              (0x00000FFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_V_Location_Ctrl_osd_v_sta(data)              (0x0FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_V_Location_Ctrl_osd_height(data)             (0x00000FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_V_Location_Ctrl_get_osd_v_sta(data)          ((0x0FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_V_Location_Ctrl_get_osd_height(data)         (0x00000FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl                                        0x18029410
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_reg_addr                                "0xB8029410"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_reg                                     0xB8029410
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_inst_addr                               "0x0033"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_reg(data)                           (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_reg                                 (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_sr_maxmin_shift_shift                   (24)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_sr_var_thd_shift                        (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_sr_maxmin_limit_en_shift                (8)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_yuv_data_shift                          (1)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_irq_udf_en_shift                        (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_sr_maxmin_shift_mask                    (0xFF000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_sr_var_thd_mask                         (0x00FF0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_sr_maxmin_limit_en_mask                 (0x00000100)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_yuv_data_mask                           (0x00000002)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_irq_udf_en_mask                         (0x00000001)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_sr_maxmin_shift(data)                   (0xFF000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_sr_var_thd(data)                        (0x00FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_sr_maxmin_limit_en(data)                (0x00000100&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_yuv_data(data)                          (0x00000002&((data)<<1))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_irq_udf_en(data)                        (0x00000001&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_get_sr_maxmin_shift(data)               ((0xFF000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_get_sr_var_thd(data)                    ((0x00FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_get_sr_maxmin_limit_en(data)            ((0x00000100&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_get_yuv_data(data)                      ((0x00000002&(data))>>1)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_Ctrl_get_irq_udf_en(data)                    (0x00000001&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0                                 0x18029420
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_reg_addr                         "0xB8029420"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_reg                              0xB8029420
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_inst_addr                        "0x0034"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_reg(data)                    (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_reg                          (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_sr_by_pgain0_shift               (24)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_sr_by_ngain0_shift               (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_sr_lpf_gain_shift                (10)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_sr_by_gain_en_shift              (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_sr_by_pgain0_mask                (0xFF000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_sr_by_ngain0_mask                (0x00FF0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_sr_lpf_gain_mask                 (0x0000FC00)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_sr_by_gain_en_mask               (0x00000003)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_sr_by_pgain0(data)               (0xFF000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_sr_by_ngain0(data)               (0x00FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_sr_lpf_gain(data)                (0x0000FC00&((data)<<10))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_sr_by_gain_en(data)              (0x00000003&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_get_sr_by_pgain0(data)           ((0xFF000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_get_sr_by_ngain0(data)           ((0x00FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_get_sr_lpf_gain(data)            ((0x0000FC00&(data))>>10)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_1_GainY_Ctrl0_get_sr_by_gain_en(data)          (0x00000003&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0                               0x18029480
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_reg_addr                       "0xB8029480"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_reg                            0xB8029480
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_inst_addr                      "0x0035"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_reg(data)                  (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_reg                        (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_v_zoom_en_shift                (31)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_ver_ini_shift                  (22)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_ver_tap_num_shift              (20)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_ver_factor_shift               (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_v_zoom_en_mask                 (0x80000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_ver_ini_mask                   (0x3FC00000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_ver_tap_num_mask               (0x00300000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_ver_factor_mask                (0x000FFFFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_v_zoom_en(data)                (0x80000000&((data)<<31))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_ver_ini(data)                  (0x3FC00000&((data)<<22))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_ver_tap_num(data)              (0x00300000&((data)<<20))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_ver_factor(data)               (0x000FFFFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_get_v_zoom_en(data)            ((0x80000000&(data))>>31)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_get_ver_ini(data)              ((0x3FC00000&(data))>>22)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_get_ver_tap_num(data)          ((0x00300000&(data))>>20)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl0_get_ver_factor(data)           (0x000FFFFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1                               0x18029484
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_reg_addr                       "0xB8029484"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_reg                            0xB8029484
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_inst_addr                      "0x0036"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_reg(data)                  (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_reg                        (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_h_zoom_en_shift                (31)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_hor_ini_shift                  (22)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_hor_factor_shift               (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_h_zoom_en_mask                 (0x80000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_hor_ini_mask                   (0x3FC00000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_hor_factor_mask                (0x000FFFFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_h_zoom_en(data)                (0x80000000&((data)<<31))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_hor_ini(data)                  (0x3FC00000&((data)<<22))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_hor_factor(data)               (0x000FFFFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_get_h_zoom_en(data)            ((0x80000000&(data))>>31)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_get_hor_ini(data)              ((0x3FC00000&(data))>>22)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Scaleup_Ctrl1_get_hor_factor(data)           (0x000FFFFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_H_Location_Ctrl                             0x18029488
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_H_Location_Ctrl_reg_addr                     "0xB8029488"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_H_Location_Ctrl_reg                          0xB8029488
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_H_Location_Ctrl_inst_addr                    "0x0037"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_2_H_Location_Ctrl_reg(data)                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_2_H_Location_Ctrl_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_2_H_Location_Ctrl_reg                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_2_H_Location_Ctrl_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_H_Location_Ctrl_osd_h_sta_shift              (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_H_Location_Ctrl_osd_width_shift              (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_H_Location_Ctrl_osd_h_sta_mask               (0x1FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_H_Location_Ctrl_osd_width_mask               (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_H_Location_Ctrl_osd_h_sta(data)              (0x1FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_H_Location_Ctrl_osd_width(data)              (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_H_Location_Ctrl_get_osd_h_sta(data)          ((0x1FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_H_Location_Ctrl_get_osd_width(data)          (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_V_Location_Ctrl                             0x1802948C
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_V_Location_Ctrl_reg_addr                     "0xB802948C"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_V_Location_Ctrl_reg                          0xB802948C
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_V_Location_Ctrl_inst_addr                    "0x0038"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_2_V_Location_Ctrl_reg(data)                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_2_V_Location_Ctrl_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_2_V_Location_Ctrl_reg                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_2_V_Location_Ctrl_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_V_Location_Ctrl_osd_v_sta_shift              (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_V_Location_Ctrl_osd_height_shift             (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_V_Location_Ctrl_osd_v_sta_mask               (0x0FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_V_Location_Ctrl_osd_height_mask              (0x00000FFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_V_Location_Ctrl_osd_v_sta(data)              (0x0FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_V_Location_Ctrl_osd_height(data)             (0x00000FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_V_Location_Ctrl_get_osd_v_sta(data)          ((0x0FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_V_Location_Ctrl_get_osd_height(data)         (0x00000FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl                                        0x18029490
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_reg_addr                                "0xB8029490"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_reg                                     0xB8029490
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_inst_addr                               "0x0039"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_reg(data)                           (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_reg                                 (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_sr_maxmin_shift_shift                   (24)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_sr_var_thd_shift                        (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_sr_maxmin_limit_en_shift                (8)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_yuv_data_shift                          (1)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_irq_udf_en_shift                        (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_sr_maxmin_shift_mask                    (0xFF000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_sr_var_thd_mask                         (0x00FF0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_sr_maxmin_limit_en_mask                 (0x00000100)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_yuv_data_mask                           (0x00000002)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_irq_udf_en_mask                         (0x00000001)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_sr_maxmin_shift(data)                   (0xFF000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_sr_var_thd(data)                        (0x00FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_sr_maxmin_limit_en(data)                (0x00000100&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_yuv_data(data)                          (0x00000002&((data)<<1))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_irq_udf_en(data)                        (0x00000001&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_get_sr_maxmin_shift(data)               ((0xFF000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_get_sr_var_thd(data)                    ((0x00FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_get_sr_maxmin_limit_en(data)            ((0x00000100&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_get_yuv_data(data)                      ((0x00000002&(data))>>1)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_Ctrl_get_irq_udf_en(data)                    (0x00000001&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0                                 0x180294A0
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_reg_addr                         "0xB80294A0"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_reg                              0xB80294A0
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_inst_addr                        "0x003A"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_reg(data)                    (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_reg                          (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_sr_by_pgain0_shift               (24)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_sr_by_ngain0_shift               (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_sr_lpf_gain_shift                (10)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_sr_by_gain_en_shift              (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_sr_by_pgain0_mask                (0xFF000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_sr_by_ngain0_mask                (0x00FF0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_sr_lpf_gain_mask                 (0x0000FC00)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_sr_by_gain_en_mask               (0x00000003)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_sr_by_pgain0(data)               (0xFF000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_sr_by_ngain0(data)               (0x00FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_sr_lpf_gain(data)                (0x0000FC00&((data)<<10))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_sr_by_gain_en(data)              (0x00000003&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_get_sr_by_pgain0(data)           ((0xFF000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_get_sr_by_ngain0(data)           ((0x00FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_get_sr_lpf_gain(data)            ((0x0000FC00&(data))>>10)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_2_GainY_Ctrl0_get_sr_by_gain_en(data)          (0x00000003&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0                               0x18029500
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_reg_addr                       "0xB8029500"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_reg                            0xB8029500
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_inst_addr                      "0x003B"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_reg(data)                  (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_reg                        (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_v_zoom_en_shift                (31)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_ver_ini_shift                  (22)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_ver_tap_num_shift              (20)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_ver_factor_shift               (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_v_zoom_en_mask                 (0x80000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_ver_ini_mask                   (0x3FC00000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_ver_tap_num_mask               (0x00300000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_ver_factor_mask                (0x000FFFFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_v_zoom_en(data)                (0x80000000&((data)<<31))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_ver_ini(data)                  (0x3FC00000&((data)<<22))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_ver_tap_num(data)              (0x00300000&((data)<<20))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_ver_factor(data)               (0x000FFFFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_get_v_zoom_en(data)            ((0x80000000&(data))>>31)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_get_ver_ini(data)              ((0x3FC00000&(data))>>22)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_get_ver_tap_num(data)          ((0x00300000&(data))>>20)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl0_get_ver_factor(data)           (0x000FFFFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1                               0x18029504
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_reg_addr                       "0xB8029504"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_reg                            0xB8029504
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_inst_addr                      "0x003C"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_reg(data)                  (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_reg                        (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_h_zoom_en_shift                (31)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_hor_ini_shift                  (22)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_hor_factor_shift               (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_h_zoom_en_mask                 (0x80000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_hor_ini_mask                   (0x3FC00000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_hor_factor_mask                (0x000FFFFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_h_zoom_en(data)                (0x80000000&((data)<<31))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_hor_ini(data)                  (0x3FC00000&((data)<<22))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_hor_factor(data)               (0x000FFFFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_get_h_zoom_en(data)            ((0x80000000&(data))>>31)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_get_hor_ini(data)              ((0x3FC00000&(data))>>22)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Scaleup_Ctrl1_get_hor_factor(data)           (0x000FFFFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_H_Location_Ctrl                             0x18029508
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_H_Location_Ctrl_reg_addr                     "0xB8029508"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_H_Location_Ctrl_reg                          0xB8029508
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_H_Location_Ctrl_inst_addr                    "0x003D"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_3_H_Location_Ctrl_reg(data)                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_3_H_Location_Ctrl_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_3_H_Location_Ctrl_reg                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_3_H_Location_Ctrl_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_H_Location_Ctrl_osd_h_sta_shift              (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_H_Location_Ctrl_osd_width_shift              (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_H_Location_Ctrl_osd_h_sta_mask               (0x1FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_H_Location_Ctrl_osd_width_mask               (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_H_Location_Ctrl_osd_h_sta(data)              (0x1FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_H_Location_Ctrl_osd_width(data)              (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_H_Location_Ctrl_get_osd_h_sta(data)          ((0x1FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_H_Location_Ctrl_get_osd_width(data)          (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_V_Location_Ctrl                             0x1802950C
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_V_Location_Ctrl_reg_addr                     "0xB802950C"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_V_Location_Ctrl_reg                          0xB802950C
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_V_Location_Ctrl_inst_addr                    "0x003E"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_3_V_Location_Ctrl_reg(data)                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_3_V_Location_Ctrl_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_3_V_Location_Ctrl_reg                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_3_V_Location_Ctrl_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_V_Location_Ctrl_osd_v_sta_shift              (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_V_Location_Ctrl_osd_height_shift             (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_V_Location_Ctrl_osd_v_sta_mask               (0x0FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_V_Location_Ctrl_osd_height_mask              (0x00000FFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_V_Location_Ctrl_osd_v_sta(data)              (0x0FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_V_Location_Ctrl_osd_height(data)             (0x00000FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_V_Location_Ctrl_get_osd_v_sta(data)          ((0x0FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_V_Location_Ctrl_get_osd_height(data)         (0x00000FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl                                        0x18029510
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_reg_addr                                "0xB8029510"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_reg                                     0xB8029510
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_inst_addr                               "0x003F"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_reg(data)                           (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_reg                                 (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_sr_maxmin_shift_shift                   (24)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_sr_var_thd_shift                        (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_sr_maxmin_limit_en_shift                (8)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_yuv_data_shift                          (1)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_irq_udf_en_shift                        (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_sr_maxmin_shift_mask                    (0xFF000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_sr_var_thd_mask                         (0x00FF0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_sr_maxmin_limit_en_mask                 (0x00000100)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_yuv_data_mask                           (0x00000002)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_irq_udf_en_mask                         (0x00000001)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_sr_maxmin_shift(data)                   (0xFF000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_sr_var_thd(data)                        (0x00FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_sr_maxmin_limit_en(data)                (0x00000100&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_yuv_data(data)                          (0x00000002&((data)<<1))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_irq_udf_en(data)                        (0x00000001&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_get_sr_maxmin_shift(data)               ((0xFF000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_get_sr_var_thd(data)                    ((0x00FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_get_sr_maxmin_limit_en(data)            ((0x00000100&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_get_yuv_data(data)                      ((0x00000002&(data))>>1)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_Ctrl_get_irq_udf_en(data)                    (0x00000001&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0                                 0x18029520
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_reg_addr                         "0xB8029520"
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_reg                              0xB8029520
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_inst_addr                        "0x0040"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_reg(data)                    (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_reg                          (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_sr_by_pgain0_shift               (24)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_sr_by_ngain0_shift               (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_sr_lpf_gain_shift                (10)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_sr_by_gain_en_shift              (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_sr_by_pgain0_mask                (0xFF000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_sr_by_ngain0_mask                (0x00FF0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_sr_lpf_gain_mask                 (0x0000FC00)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_sr_by_gain_en_mask               (0x00000001)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_sr_by_pgain0(data)               (0xFF000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_sr_by_ngain0(data)               (0x00FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_sr_lpf_gain(data)                (0x0000FC00&((data)<<10))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_sr_by_gain_en(data)              (0x00000001&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_get_sr_by_pgain0(data)           ((0xFF000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_get_sr_by_ngain0(data)           ((0x00FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_get_sr_lpf_gain(data)            ((0x0000FC00&(data))>>10)
#define  OSD_SMOOTH_TOGGLE_OSD_SR_3_GainY_Ctrl0_get_sr_by_gain_en(data)          (0x00000001&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2                                          0x1802B000
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_reg_addr                                  "0xB802B000"
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_reg                                       0xB802B000
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_inst_addr                                 "0x0041"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_CTRL2_reg(data)                             (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_CTRL2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_CTRL2_reg                                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_CTRL2_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_measure_osd_zone_en_shift                 (31)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_measure_osd_zone_type_shift               (30)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_video_src_sel_shift                       (24)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_video_alpha_shift                         (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_mixero3_en_shift                          (3)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_mixero2_en_shift                          (2)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_mixero1_en_shift                          (1)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_mixer_en_shift                            (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_measure_osd_zone_en_mask                  (0x80000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_measure_osd_zone_type_mask                (0x40000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_video_src_sel_mask                        (0x01000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_video_alpha_mask                          (0x00FF0000)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_mixero3_en_mask                           (0x00000008)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_mixero2_en_mask                           (0x00000004)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_mixero1_en_mask                           (0x00000002)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_mixer_en_mask                             (0x00000001)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_measure_osd_zone_en(data)                 (0x80000000&((data)<<31))
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_measure_osd_zone_type(data)               (0x40000000&((data)<<30))
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_video_src_sel(data)                       (0x01000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_video_alpha(data)                         (0x00FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_mixero3_en(data)                          (0x00000008&((data)<<3))
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_mixero2_en(data)                          (0x00000004&((data)<<2))
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_mixero1_en(data)                          (0x00000002&((data)<<1))
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_mixer_en(data)                            (0x00000001&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_get_measure_osd_zone_en(data)             ((0x80000000&(data))>>31)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_get_measure_osd_zone_type(data)           ((0x40000000&(data))>>30)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_get_video_src_sel(data)                   ((0x01000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_get_video_alpha(data)                     ((0x00FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_get_mixero3_en(data)                      ((0x00000008&(data))>>3)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_get_mixero2_en(data)                      ((0x00000004&(data))>>2)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_get_mixero1_en(data)                      ((0x00000002&(data))>>1)
#define  OSD_SMOOTH_TOGGLE_Mixer_CTRL2_get_mixer_en(data)                        (0x00000001&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel                                      0x1802B004
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_reg_addr                              "0xB802B004"
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_reg                                   0xB802B004
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_inst_addr                             "0x0042"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_layer_sel_reg(data)                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_layer_sel_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_layer_sel_reg                               (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_layer_sel_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c3_plane_alpha_en_shift               (27)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c2_plane_alpha_en_shift               (26)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c1_plane_alpha_en_shift               (25)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c0_plane_alpha_en_shift               (24)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c3_sel_shift                          (12)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c2_sel_shift                          (8)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c1_sel_shift                          (4)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c0_sel_shift                          (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c3_plane_alpha_en_mask                (0x08000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c2_plane_alpha_en_mask                (0x04000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c1_plane_alpha_en_mask                (0x02000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c0_plane_alpha_en_mask                (0x01000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c3_sel_mask                           (0x00003000)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c2_sel_mask                           (0x00000300)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c1_sel_mask                           (0x00000030)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c0_sel_mask                           (0x00000003)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c3_plane_alpha_en(data)               (0x08000000&((data)<<27))
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c2_plane_alpha_en(data)               (0x04000000&((data)<<26))
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c1_plane_alpha_en(data)               (0x02000000&((data)<<25))
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c0_plane_alpha_en(data)               (0x01000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c3_sel(data)                          (0x00003000&((data)<<12))
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c2_sel(data)                          (0x00000300&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c1_sel(data)                          (0x00000030&((data)<<4))
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_c0_sel(data)                          (0x00000003&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_get_c3_plane_alpha_en(data)           ((0x08000000&(data))>>27)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_get_c2_plane_alpha_en(data)           ((0x04000000&(data))>>26)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_get_c1_plane_alpha_en(data)           ((0x02000000&(data))>>25)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_get_c0_plane_alpha_en(data)           ((0x01000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_get_c3_sel(data)                      ((0x00003000&(data))>>12)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_get_c2_sel(data)                      ((0x00000300&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_get_c1_sel(data)                      ((0x00000030&(data))>>4)
#define  OSD_SMOOTH_TOGGLE_Mixer_layer_sel_get_c0_sel(data)                      (0x00000003&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha1                                0x1802B008
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha1_reg_addr                        "0xB802B008"
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha1_reg                             0xB802B008
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha1_inst_addr                       "0x0043"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha1_reg(data)                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha1_reg                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha1_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha1_plane_alpha_a_shift             (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha1_plane_alpha_r_shift             (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha1_plane_alpha_a_mask              (0x01FF0000)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha1_plane_alpha_r_mask              (0x000001FF)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha1_plane_alpha_a(data)             (0x01FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha1_plane_alpha_r(data)             (0x000001FF&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha1_get_plane_alpha_a(data)         ((0x01FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha1_get_plane_alpha_r(data)         (0x000001FF&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha2                                0x1802B00C
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha2_reg_addr                        "0xB802B00C"
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha2_reg                             0xB802B00C
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha2_inst_addr                       "0x0044"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha2_reg(data)                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha2_reg                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha2_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha2_plane_alpha_g_shift             (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha2_plane_alpha_b_shift             (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha2_plane_alpha_g_mask              (0x01FF0000)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha2_plane_alpha_b_mask              (0x000001FF)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha2_plane_alpha_g(data)             (0x01FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha2_plane_alpha_b(data)             (0x000001FF&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha2_get_plane_alpha_g(data)         ((0x01FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_alpha2_get_plane_alpha_b(data)         (0x000001FF&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset                                0x1802B010
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_reg_addr                        "0xB802B010"
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_reg                             0xB802B010
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_inst_addr                       "0x0045"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_reg(data)                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_reg                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_plane_offset_a_shift            (24)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_plane_offset_r_shift            (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_plane_offset_g_shift            (8)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_plane_offset_b_shift            (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_plane_offset_a_mask             (0xFF000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_plane_offset_r_mask             (0x00FF0000)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_plane_offset_g_mask             (0x0000FF00)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_plane_offset_b_mask             (0x000000FF)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_plane_offset_a(data)            (0xFF000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_plane_offset_r(data)            (0x00FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_plane_offset_g(data)            (0x0000FF00&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_plane_offset_b(data)            (0x000000FF&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_get_plane_offset_a(data)        ((0xFF000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_get_plane_offset_r(data)        ((0x00FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_get_plane_offset_g(data)        ((0x0000FF00&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_Mixer_c0_plane_offset_get_plane_offset_b(data)        (0x000000FF&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha1                                0x1802B014
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha1_reg_addr                        "0xB802B014"
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha1_reg                             0xB802B014
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha1_inst_addr                       "0x0046"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha1_reg(data)                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha1_reg                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha1_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha1_plane_alpha_a_shift             (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha1_plane_alpha_r_shift             (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha1_plane_alpha_a_mask              (0x01FF0000)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha1_plane_alpha_r_mask              (0x000001FF)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha1_plane_alpha_a(data)             (0x01FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha1_plane_alpha_r(data)             (0x000001FF&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha1_get_plane_alpha_a(data)         ((0x01FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha1_get_plane_alpha_r(data)         (0x000001FF&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha2                                0x1802B018
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha2_reg_addr                        "0xB802B018"
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha2_reg                             0xB802B018
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha2_inst_addr                       "0x0047"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha2_reg(data)                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha2_reg                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha2_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha2_plane_alpha_g_shift             (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha2_plane_alpha_b_shift             (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha2_plane_alpha_g_mask              (0x01FF0000)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha2_plane_alpha_b_mask              (0x000001FF)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha2_plane_alpha_g(data)             (0x01FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha2_plane_alpha_b(data)             (0x000001FF&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha2_get_plane_alpha_g(data)         ((0x01FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_alpha2_get_plane_alpha_b(data)         (0x000001FF&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset                                0x1802B01C
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_reg_addr                        "0xB802B01C"
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_reg                             0xB802B01C
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_inst_addr                       "0x0048"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_reg(data)                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_reg                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_plane_offset_a_shift            (24)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_plane_offset_r_shift            (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_plane_offset_g_shift            (8)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_plane_offset_b_shift            (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_plane_offset_a_mask             (0xFF000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_plane_offset_r_mask             (0x00FF0000)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_plane_offset_g_mask             (0x0000FF00)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_plane_offset_b_mask             (0x000000FF)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_plane_offset_a(data)            (0xFF000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_plane_offset_r(data)            (0x00FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_plane_offset_g(data)            (0x0000FF00&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_plane_offset_b(data)            (0x000000FF&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_get_plane_offset_a(data)        ((0xFF000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_get_plane_offset_r(data)        ((0x00FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_get_plane_offset_g(data)        ((0x0000FF00&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_Mixer_c1_plane_offset_get_plane_offset_b(data)        (0x000000FF&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha1                                0x1802B020
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha1_reg_addr                        "0xB802B020"
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha1_reg                             0xB802B020
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha1_inst_addr                       "0x0049"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha1_reg(data)                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha1_reg                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha1_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha1_plane_alpha_a_shift             (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha1_plane_alpha_r_shift             (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha1_plane_alpha_a_mask              (0x01FF0000)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha1_plane_alpha_r_mask              (0x000001FF)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha1_plane_alpha_a(data)             (0x01FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha1_plane_alpha_r(data)             (0x000001FF&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha1_get_plane_alpha_a(data)         ((0x01FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha1_get_plane_alpha_r(data)         (0x000001FF&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha2                                0x1802B024
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha2_reg_addr                        "0xB802B024"
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha2_reg                             0xB802B024
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha2_inst_addr                       "0x004A"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha2_reg(data)                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha2_reg                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha2_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha2_plane_alpha_g_shift             (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha2_plane_alpha_b_shift             (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha2_plane_alpha_g_mask              (0x01FF0000)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha2_plane_alpha_b_mask              (0x000001FF)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha2_plane_alpha_g(data)             (0x01FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha2_plane_alpha_b(data)             (0x000001FF&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha2_get_plane_alpha_g(data)         ((0x01FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_alpha2_get_plane_alpha_b(data)         (0x000001FF&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset                                0x1802B028
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_reg_addr                        "0xB802B028"
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_reg                             0xB802B028
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_inst_addr                       "0x004B"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_reg(data)                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_reg                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_plane_offset_a_shift            (24)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_plane_offset_r_shift            (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_plane_offset_g_shift            (8)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_plane_offset_b_shift            (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_plane_offset_a_mask             (0xFF000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_plane_offset_r_mask             (0x00FF0000)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_plane_offset_g_mask             (0x0000FF00)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_plane_offset_b_mask             (0x000000FF)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_plane_offset_a(data)            (0xFF000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_plane_offset_r(data)            (0x00FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_plane_offset_g(data)            (0x0000FF00&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_plane_offset_b(data)            (0x000000FF&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_get_plane_offset_a(data)        ((0xFF000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_get_plane_offset_r(data)        ((0x00FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_get_plane_offset_g(data)        ((0x0000FF00&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_Mixer_c2_plane_offset_get_plane_offset_b(data)        (0x000000FF&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha1                                0x1802B02C
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha1_reg_addr                        "0xB802B02C"
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha1_reg                             0xB802B02C
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha1_inst_addr                       "0x004C"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha1_reg(data)                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha1_reg                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha1_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha1_plane_alpha_a_shift             (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha1_plane_alpha_r_shift             (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha1_plane_alpha_a_mask              (0x01FF0000)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha1_plane_alpha_r_mask              (0x000001FF)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha1_plane_alpha_a(data)             (0x01FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha1_plane_alpha_r(data)             (0x000001FF&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha1_get_plane_alpha_a(data)         ((0x01FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha1_get_plane_alpha_r(data)         (0x000001FF&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha2                                0x1802B030
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha2_reg_addr                        "0xB802B030"
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha2_reg                             0xB802B030
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha2_inst_addr                       "0x004D"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha2_reg(data)                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha2_reg                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha2_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha2_plane_alpha_g_shift             (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha2_plane_alpha_b_shift             (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha2_plane_alpha_g_mask              (0x01FF0000)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha2_plane_alpha_b_mask              (0x000001FF)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha2_plane_alpha_g(data)             (0x01FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha2_plane_alpha_b(data)             (0x000001FF&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha2_get_plane_alpha_g(data)         ((0x01FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_alpha2_get_plane_alpha_b(data)         (0x000001FF&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset                                0x1802B034
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_reg_addr                        "0xB802B034"
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_reg                             0xB802B034
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_inst_addr                       "0x004E"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_reg(data)                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_reg                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_plane_offset_a_shift            (24)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_plane_offset_r_shift            (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_plane_offset_g_shift            (8)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_plane_offset_b_shift            (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_plane_offset_a_mask             (0xFF000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_plane_offset_r_mask             (0x00FF0000)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_plane_offset_g_mask             (0x0000FF00)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_plane_offset_b_mask             (0x000000FF)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_plane_offset_a(data)            (0xFF000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_plane_offset_r(data)            (0x00FF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_plane_offset_g(data)            (0x0000FF00&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_plane_offset_b(data)            (0x000000FF&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_get_plane_offset_a(data)        ((0xFF000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_get_plane_offset_r(data)        ((0x00FF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_get_plane_offset_g(data)        ((0x0000FF00&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_Mixer_c3_plane_offset_get_plane_offset_b(data)        (0x000000FF&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL                                 0x1802B038
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_reg_addr                         "0xB802B038"
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_reg                              0xB802B038
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_inst_addr                        "0x004F"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_reg(data)                    (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_reg                          (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_d1_m3_shift                      (28)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_d1_m2_shift                      (24)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_d1_m1_shift                      (20)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_d1_m0_shift                      (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_osd3_gamma_zone_type_shift       (12)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_osd2_gamma_zone_type_shift       (10)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_osd1_gamma_zone_type_shift       (8)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_osd_gamma_position_shift         (4)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_dynamic_region_en_shift          (3)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_mixer_gamma2_en_shift            (2)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_mixer_osd3x3_en_shift            (1)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_mixer_gamma1_en_shift            (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_d1_m3_mask                       (0x70000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_d1_m2_mask                       (0x07000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_d1_m1_mask                       (0x00700000)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_d1_m0_mask                       (0x00070000)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_osd3_gamma_zone_type_mask        (0x00003000)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_osd2_gamma_zone_type_mask        (0x00000C00)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_osd1_gamma_zone_type_mask        (0x00000300)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_osd_gamma_position_mask          (0x00000070)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_dynamic_region_en_mask           (0x00000008)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_mixer_gamma2_en_mask             (0x00000004)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_mixer_osd3x3_en_mask             (0x00000002)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_mixer_gamma1_en_mask             (0x00000001)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_d1_m3(data)                      (0x70000000&((data)<<28))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_d1_m2(data)                      (0x07000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_d1_m1(data)                      (0x00700000&((data)<<20))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_d1_m0(data)                      (0x00070000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_osd3_gamma_zone_type(data)       (0x00003000&((data)<<12))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_osd2_gamma_zone_type(data)       (0x00000C00&((data)<<10))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_osd1_gamma_zone_type(data)       (0x00000300&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_osd_gamma_position(data)         (0x00000070&((data)<<4))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_dynamic_region_en(data)          (0x00000008&((data)<<3))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_mixer_gamma2_en(data)            (0x00000004&((data)<<2))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_mixer_osd3x3_en(data)            (0x00000002&((data)<<1))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_mixer_gamma1_en(data)            (0x00000001&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_get_d1_m3(data)                  ((0x70000000&(data))>>28)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_get_d1_m2(data)                  ((0x07000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_get_d1_m1(data)                  ((0x00700000&(data))>>20)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_get_d1_m0(data)                  ((0x00070000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_get_osd3_gamma_zone_type(data)   ((0x00003000&(data))>>12)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_get_osd2_gamma_zone_type(data)   ((0x00000C00&(data))>>10)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_get_osd1_gamma_zone_type(data)   ((0x00000300&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_get_osd_gamma_position(data)     ((0x00000070&(data))>>4)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_get_dynamic_region_en(data)      ((0x00000008&(data))>>3)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_get_mixer_gamma2_en(data)        ((0x00000004&(data))>>2)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_get_mixer_osd3x3_en(data)        ((0x00000002&(data))>>1)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_CTRL_get_mixer_gamma1_en(data)        (0x00000001&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2                 0x1802B03C
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_reg_addr         "0xB802B03C"
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_reg              0xB802B03C
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_inst_addr        "0x0050"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_reg(data)    (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_reg          (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m3_shift      (28)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m2_shift      (24)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m1_shift      (20)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m0_shift      (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m3_shift      (12)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m2_shift      (8)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m1_shift      (4)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m0_shift      (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m3_mask       (0x70000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m2_mask       (0x07000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m1_mask       (0x00700000)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m0_mask       (0x00070000)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m3_mask       (0x00007000)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m2_mask       (0x00000700)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m1_mask       (0x00000070)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m0_mask       (0x00000007)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m3(data)      (0x70000000&((data)<<28))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m2(data)      (0x07000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m1(data)      (0x00700000&((data)<<20))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m0(data)      (0x00070000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m3(data)      (0x00007000&((data)<<12))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m2(data)      (0x00000700&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m1(data)      (0x00000070&((data)<<4))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m0(data)      (0x00000007&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_get_d3_m3(data)  ((0x70000000&(data))>>28)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_get_d3_m2(data)  ((0x07000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_get_d3_m1(data)  ((0x00700000&(data))>>20)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_get_d3_m0(data)  ((0x00070000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_get_d2_m3(data)  ((0x00007000&(data))>>12)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_get_d2_m2(data)  ((0x00000700&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_get_d2_m1(data)  ((0x00000070&(data))>>4)
#define  OSD_SMOOTH_TOGGLE_Mixer_OSD_GAMMA_dynamic_region_D3_D2_get_d2_m0(data)  (0x00000007&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_b1                                             0x1802B060
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_reg_addr                                     "0xB802B060"
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_reg                                          0xB802B060
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_inst_addr                                    "0x0051"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_b1_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_b1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_b1_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_b1_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_k1_shift                                     (24)
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_k2_shift                                     (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_k3_shift                                     (8)
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_k4_shift                                     (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_k1_mask                                      (0x3F000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_k2_mask                                      (0x003F0000)
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_k3_mask                                      (0x00003F00)
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_k4_mask                                      (0x0000003F)
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_k1(data)                                     (0x3F000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_k2(data)                                     (0x003F0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_k3(data)                                     (0x00003F00&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_k4(data)                                     (0x0000003F&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_get_k1(data)                                 ((0x3F000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_get_k2(data)                                 ((0x003F0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_get_k3(data)                                 ((0x00003F00&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_Mixer_b1_get_k4(data)                                 (0x0000003F&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_b2                                             0x1802B064
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_reg_addr                                     "0xB802B064"
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_reg                                          0xB802B064
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_inst_addr                                    "0x0052"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_b2_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_b2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_b2_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_b2_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_k1_shift                                     (24)
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_k2_shift                                     (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_k3_shift                                     (8)
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_k4_shift                                     (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_k1_mask                                      (0x3F000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_k2_mask                                      (0x003F0000)
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_k3_mask                                      (0x00003F00)
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_k4_mask                                      (0x0000003F)
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_k1(data)                                     (0x3F000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_k2(data)                                     (0x003F0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_k3(data)                                     (0x00003F00&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_k4(data)                                     (0x0000003F&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_get_k1(data)                                 ((0x3F000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_get_k2(data)                                 ((0x003F0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_get_k3(data)                                 ((0x00003F00&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_Mixer_b2_get_k4(data)                                 (0x0000003F&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_b3                                             0x1802B068
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_reg_addr                                     "0xB802B068"
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_reg                                          0xB802B068
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_inst_addr                                    "0x0053"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_b3_reg(data)                                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_b3_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_b3_reg                                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_b3_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_k1_shift                                     (24)
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_k2_shift                                     (16)
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_k3_shift                                     (8)
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_k4_shift                                     (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_k1_mask                                      (0x3F000000)
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_k2_mask                                      (0x003F0000)
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_k3_mask                                      (0x00003F00)
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_k4_mask                                      (0x0000003F)
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_k1(data)                                     (0x3F000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_k2(data)                                     (0x003F0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_k3(data)                                     (0x00003F00&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_k4(data)                                     (0x0000003F&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_get_k1(data)                                 ((0x3F000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_get_k2(data)                                 ((0x003F0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_get_k3(data)                                 ((0x00003F00&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_Mixer_b3_get_k4(data)                                 (0x0000003F&(data))

#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask                                      0x1802B0C0
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_reg_addr                              "0xB802B0C0"
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_reg                                   0xB802B0C0
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_inst_addr                             "0x0054"
#define  set_OSD_SMOOTH_TOGGLE_Mixer_line_mask_reg(data)                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_line_mask_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_Mixer_line_mask_reg                               (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_Mixer_line_mask_reg))
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_osd3_line_mask_shift                  (6)
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_osd2_line_mask_shift                  (4)
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_osd1_line_mask_shift                  (2)
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_video_line_mask_shift                 (0)
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_osd3_line_mask_mask                   (0x000000C0)
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_osd2_line_mask_mask                   (0x00000030)
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_osd1_line_mask_mask                   (0x0000000C)
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_video_line_mask_mask                  (0x00000003)
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_osd3_line_mask(data)                  (0x000000C0&((data)<<6))
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_osd2_line_mask(data)                  (0x00000030&((data)<<4))
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_osd1_line_mask(data)                  (0x0000000C&((data)<<2))
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_video_line_mask(data)                 (0x00000003&(data))
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_get_osd3_line_mask(data)              ((0x000000C0&(data))>>6)
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_get_osd2_line_mask(data)              ((0x00000030&(data))>>4)
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_get_osd1_line_mask(data)              ((0x0000000C&(data))>>2)
#define  OSD_SMOOTH_TOGGLE_Mixer_line_mask_get_video_line_mask(data)             (0x00000003&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl                                 0x1802E630
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_reg_addr                         "0xB802E630"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_reg                              0xB802E630
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_inst_addr                        "0x0055"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_reg(data)                    (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_reg                          (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_link_with_smooth_toggle_shift    (31)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_db_read_shift                    (2)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_db_en_shift                      (1)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_db_load_shift                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_link_with_smooth_toggle_mask     (0x80000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_db_read_mask                     (0x00000004)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_db_en_mask                       (0x00000002)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_db_load_mask                     (0x00000001)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_link_with_smooth_toggle(data)    (0x80000000&((data)<<31))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_db_read(data)                    (0x00000004&((data)<<2))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_db_en(data)                      (0x00000002&((data)<<1))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_db_load(data)                    (0x00000001&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_get_link_with_smooth_toggle(data) ((0x80000000&(data))>>31)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_get_db_read(data)                ((0x00000004&(data))>>2)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_get_db_en(data)                  ((0x00000002&(data))>>1)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_db_ctrl_get_db_load(data)                (0x00000001&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY                                         0x1802E600
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_reg_addr                                 "0xB802E600"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_reg                                      0xB802E600
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_inst_addr                                "0x0056"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_reg(data)                            (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_reg                                  (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_c3_security_en_shift                     (27)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_c2_security_en_shift                     (26)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_c1_security_en_shift                     (25)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_c0_security_en_shift                     (24)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_osd_security_en_shift                    (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_c3_security_en_mask                      (0x08000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_c2_security_en_mask                      (0x04000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_c1_security_en_mask                      (0x02000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_c0_security_en_mask                      (0x01000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_osd_security_en_mask                     (0x00000001)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_c3_security_en(data)                     (0x08000000&((data)<<27))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_c2_security_en(data)                     (0x04000000&((data)<<26))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_c1_security_en(data)                     (0x02000000&((data)<<25))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_c0_security_en(data)                     (0x01000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_osd_security_en(data)                    (0x00000001&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_get_c3_security_en(data)                 ((0x08000000&(data))>>27)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_get_c2_security_en(data)                 ((0x04000000&(data))>>26)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_get_c1_security_en(data)                 ((0x02000000&(data))>>25)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_get_c0_security_en(data)                 ((0x01000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_get_osd_security_en(data)                (0x00000001&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2                             0x1802E604
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_reg_addr                     "0xB802E604"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_reg                          0xB802E604
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_inst_addr                    "0x0057"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_reg(data)                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_reg                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_dummy_31_28_shift            (28)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_d1_m3_shift                  (25)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_d1_m2_shift                  (22)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_d1_m1_shift                  (19)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_d1_m0_shift                  (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_osd1_gamma_zone_type_shift   (12)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_osd_gamma_position_shift     (8)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_dynamic_region_en_shift      (7)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_mixer_gamma2_en_shift        (6)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_mixer_osd3x3_en_shift        (5)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_mixer_gamma1_en_shift        (4)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_mixero1_en_shift             (1)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_mixer_en_shift               (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_dummy_31_28_mask             (0xF0000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_d1_m3_mask                   (0x0E000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_d1_m2_mask                   (0x01C00000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_d1_m1_mask                   (0x00380000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_d1_m0_mask                   (0x00070000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_osd1_gamma_zone_type_mask    (0x00003000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_osd_gamma_position_mask      (0x00000700)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_dynamic_region_en_mask       (0x00000080)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_mixer_gamma2_en_mask         (0x00000040)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_mixer_osd3x3_en_mask         (0x00000020)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_mixer_gamma1_en_mask         (0x00000010)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_mixero1_en_mask              (0x00000002)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_mixer_en_mask                (0x00000001)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_dummy_31_28(data)            (0xF0000000&((data)<<28))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_d1_m3(data)                  (0x0E000000&((data)<<25))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_d1_m2(data)                  (0x01C00000&((data)<<22))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_d1_m1(data)                  (0x00380000&((data)<<19))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_d1_m0(data)                  (0x00070000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_osd1_gamma_zone_type(data)   (0x00003000&((data)<<12))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_osd_gamma_position(data)     (0x00000700&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_dynamic_region_en(data)      (0x00000080&((data)<<7))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_mixer_gamma2_en(data)        (0x00000040&((data)<<6))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_mixer_osd3x3_en(data)        (0x00000020&((data)<<5))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_mixer_gamma1_en(data)        (0x00000010&((data)<<4))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_mixero1_en(data)             (0x00000002&((data)<<1))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_mixer_en(data)               (0x00000001&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_get_dummy_31_28(data)        ((0xF0000000&(data))>>28)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_get_d1_m3(data)              ((0x0E000000&(data))>>25)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_get_d1_m2(data)              ((0x01C00000&(data))>>22)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_get_d1_m1(data)              ((0x00380000&(data))>>19)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_get_d1_m0(data)              ((0x00070000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_get_osd1_gamma_zone_type(data) ((0x00003000&(data))>>12)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_get_osd_gamma_position(data) ((0x00000700&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_get_dynamic_region_en(data)  ((0x00000080&(data))>>7)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_get_mixer_gamma2_en(data)    ((0x00000040&(data))>>6)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_get_mixer_osd3x3_en(data)    ((0x00000020&(data))>>5)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_get_mixer_gamma1_en(data)    ((0x00000010&(data))>>4)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_get_mixero1_en(data)         ((0x00000002&(data))>>1)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_CTRL2_get_mixer_en(data)           (0x00000001&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL                               0x1802E608
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_reg_addr                       "0xB802E608"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_reg                            0xB802E608
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_inst_addr                      "0x0058"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_reg(data)                  (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_reg                        (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c3_plane_alpha_en_shift        (27)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c2_plane_alpha_en_shift        (26)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c1_plane_alpha_en_shift        (25)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c0_plane_alpha_en_shift        (24)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c3_sel_shift                   (12)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c2_sel_shift                   (8)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c1_sel_shift                   (4)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c0_sel_shift                   (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c3_plane_alpha_en_mask         (0x08000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c2_plane_alpha_en_mask         (0x04000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c1_plane_alpha_en_mask         (0x02000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c0_plane_alpha_en_mask         (0x01000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c3_sel_mask                    (0x00003000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c2_sel_mask                    (0x00000300)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c1_sel_mask                    (0x00000030)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c0_sel_mask                    (0x00000003)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c3_plane_alpha_en(data)        (0x08000000&((data)<<27))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c2_plane_alpha_en(data)        (0x04000000&((data)<<26))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c1_plane_alpha_en(data)        (0x02000000&((data)<<25))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c0_plane_alpha_en(data)        (0x01000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c3_sel(data)                   (0x00003000&((data)<<12))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c2_sel(data)                   (0x00000300&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c1_sel(data)                   (0x00000030&((data)<<4))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_c0_sel(data)                   (0x00000003&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_get_c3_plane_alpha_en(data)    ((0x08000000&(data))>>27)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_get_c2_plane_alpha_en(data)    ((0x04000000&(data))>>26)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_get_c1_plane_alpha_en(data)    ((0x02000000&(data))>>25)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_get_c0_plane_alpha_en(data)    ((0x01000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_get_c3_sel(data)               ((0x00003000&(data))>>12)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_get_c2_sel(data)               ((0x00000300&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_get_c1_sel(data)               ((0x00000030&(data))>>4)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_SEL_get_c0_sel(data)               (0x00000003&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_STA                         0x1802E618
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_STA_reg_addr                 "0xB802E618"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_STA_reg                      0xB802E618
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_STA_inst_addr                "0x0059"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_STA_reg(data)            (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_STA_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_STA_reg                  (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_STA_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_STA_sta_l4_shift             (12)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_STA_sta_l4_mask              (0x0000F000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_STA_sta_l4(data)             (0x0000F000&((data)<<12))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_STA_get_sta_l4(data)         ((0x0000F000&(data))>>12)

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_SIZE                        0x1802E61C
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_SIZE_reg_addr                "0xB802E61C"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_SIZE_reg                     0xB802E61C
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_SIZE_inst_addr               "0x005A"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_SIZE_reg(data)           (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_SIZE_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_SIZE_reg                 (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_SIZE_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_SIZE_size_l4_shift           (12)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_SIZE_size_l4_mask            (0x0000F000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_SIZE_size_l4(data)           (0x0000F000&((data)<<12))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_LINE_BUFFER_SIZE_get_size_l4(data)       ((0x0000F000&(data))>>12)

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SWITCH                             0x1802E620
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SWITCH_reg_addr                     "0xB802E620"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SWITCH_reg                          0xB802E620
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SWITCH_inst_addr                    "0x005B"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SWITCH_reg(data)                (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SWITCH_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SWITCH_reg                      (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SWITCH_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SWITCH_osdsr3_switch_to_shift       (8)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SWITCH_osdsr2_switch_to_shift       (4)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SWITCH_osdsr3_switch_to_mask        (0x00000300)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SWITCH_osdsr2_switch_to_mask        (0x00000030)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SWITCH_osdsr3_switch_to(data)       (0x00000300&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SWITCH_osdsr2_switch_to(data)       (0x00000030&((data)<<4))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SWITCH_get_osdsr3_switch_to(data)   ((0x00000300&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SWITCH_get_osdsr2_switch_to(data)   ((0x00000030&(data))>>4)

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA                                    0x1802E624
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_reg_addr                            "0xB802E624"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_reg                                 0xB802E624
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_inst_addr                           "0x005C"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_reg(data)                       (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_reg                             (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_1b_shift                       (7)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_2b_shift                       (6)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_4b_shift                       (5)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_8b_shift                       (4)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_wi_endian_shift                (3)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_rgb_out_shift                  (2)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_rotate_shift                   (1)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_en_shift                       (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_1b_mask                        (0x00000080)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_2b_mask                        (0x00000040)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_4b_mask                        (0x00000020)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_8b_mask                        (0x00000010)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_wi_endian_mask                 (0x00000008)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_rgb_out_mask                   (0x00000004)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_rotate_mask                    (0x00000002)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_en_mask                        (0x00000001)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_1b(data)                       (0x00000080&((data)<<7))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_2b(data)                       (0x00000040&((data)<<6))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_4b(data)                       (0x00000020&((data)<<5))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_8b(data)                       (0x00000010&((data)<<4))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_wi_endian(data)                (0x00000008&((data)<<3))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_rgb_out(data)                  (0x00000004&((data)<<2))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_rotate(data)                   (0x00000002&((data)<<1))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_osd1_en(data)                       (0x00000001&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_get_osd1_1b(data)                   ((0x00000080&(data))>>7)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_get_osd1_2b(data)                   ((0x00000040&(data))>>6)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_get_osd1_4b(data)                   ((0x00000020&(data))>>5)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_get_osd1_8b(data)                   ((0x00000010&(data))>>4)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_get_osd1_wi_endian(data)            ((0x00000008&(data))>>3)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_get_osd1_rgb_out(data)              ((0x00000004&(data))>>2)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_get_osd1_rotate(data)               ((0x00000002&(data))>>1)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_get_osd1_en(data)                   (0x00000001&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_ADDR                               0x1802E628
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_ADDR_reg_addr                       "0xB802E628"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_ADDR_reg                            0xB802E628
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_ADDR_inst_addr                      "0x005D"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_ADDR_reg(data)                  (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_ADDR_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_ADDR_reg                        (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_ADDR_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_ADDR_osd1_wi_addr_shift             (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_ADDR_osd1_wi_addr_mask              (0xFFFFFFFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_ADDR_osd1_wi_addr(data)             (0xFFFFFFFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_ADDR_get_osd1_wi_addr(data)         (0xFFFFFFFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SIZE                               0x1802E62C
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SIZE_reg_addr                       "0xB802E62C"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SIZE_reg                            0xB802E62C
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SIZE_inst_addr                      "0x005E"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SIZE_reg(data)                  (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SIZE_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SIZE_reg                        (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SIZE_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SIZE_osd1_w_shift                   (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SIZE_osd1_h_shift                   (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SIZE_osd1_w_mask                    (0x1FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SIZE_osd1_h_mask                    (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SIZE_osd1_w(data)                   (0x1FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SIZE_osd1_h(data)                   (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SIZE_get_osd1_w(data)               ((0x1FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_GDMA_SIZE_get_osd1_h(data)               (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0                      0x1802E640
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_reg_addr              "0xB802E640"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_reg                   0xB802E640
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_inst_addr             "0x005F"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_reg(data)         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_reg               (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_v_zoom_en_shift       (31)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_ver_ini_shift         (22)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_ver_tap_num_shift     (20)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_ver_factor_shift      (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_v_zoom_en_mask        (0x80000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_ver_ini_mask          (0x3FC00000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_ver_tap_num_mask      (0x00300000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_ver_factor_mask       (0x000FFFFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_v_zoom_en(data)       (0x80000000&((data)<<31))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_ver_ini(data)         (0x3FC00000&((data)<<22))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_ver_tap_num(data)     (0x00300000&((data)<<20))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_ver_factor(data)      (0x000FFFFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_get_v_zoom_en(data)   ((0x80000000&(data))>>31)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_get_ver_ini(data)     ((0x3FC00000&(data))>>22)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_get_ver_tap_num(data) ((0x00300000&(data))>>20)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl0_get_ver_factor(data)  (0x000FFFFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1                      0x1802E644
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_reg_addr              "0xB802E644"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_reg                   0xB802E644
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_inst_addr             "0x0060"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_reg(data)         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_reg               (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_h_zoom_en_shift       (31)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_hor_ini_shift         (22)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_hor_factor_shift      (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_h_zoom_en_mask        (0x80000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_hor_ini_mask          (0x3FC00000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_hor_factor_mask       (0x000FFFFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_h_zoom_en(data)       (0x80000000&((data)<<31))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_hor_ini(data)         (0x3FC00000&((data)<<22))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_hor_factor(data)      (0x000FFFFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_get_h_zoom_en(data)   ((0x80000000&(data))>>31)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_get_hor_ini(data)     ((0x3FC00000&(data))>>22)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_Scaleup_Ctrl1_get_hor_factor(data)  (0x000FFFFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_H_Location_Ctrl                    0x1802E648
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_H_Location_Ctrl_reg_addr            "0xB802E648"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_H_Location_Ctrl_reg                 0xB802E648
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_H_Location_Ctrl_inst_addr           "0x0061"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_H_Location_Ctrl_reg(data)       (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_H_Location_Ctrl_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_H_Location_Ctrl_reg             (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_H_Location_Ctrl_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_H_Location_Ctrl_osd_h_sta_shift     (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_H_Location_Ctrl_osd_width_shift     (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_H_Location_Ctrl_osd_h_sta_mask      (0x1FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_H_Location_Ctrl_osd_width_mask      (0x00001FFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_H_Location_Ctrl_osd_h_sta(data)     (0x1FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_H_Location_Ctrl_osd_width(data)     (0x00001FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_H_Location_Ctrl_get_osd_h_sta(data) ((0x1FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_H_Location_Ctrl_get_osd_width(data) (0x00001FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_V_Location_Ctrl                    0x1802E64C
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_V_Location_Ctrl_reg_addr            "0xB802E64C"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_V_Location_Ctrl_reg                 0xB802E64C
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_V_Location_Ctrl_inst_addr           "0x0062"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_V_Location_Ctrl_reg(data)       (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_V_Location_Ctrl_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_V_Location_Ctrl_reg             (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_V_Location_Ctrl_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_V_Location_Ctrl_osd_v_sta_shift     (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_V_Location_Ctrl_osd_height_shift    (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_V_Location_Ctrl_osd_v_sta_mask      (0x0FFF0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_V_Location_Ctrl_osd_height_mask     (0x00000FFF)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_V_Location_Ctrl_osd_v_sta(data)     (0x0FFF0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_V_Location_Ctrl_osd_height(data)    (0x00000FFF&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_V_Location_Ctrl_get_osd_v_sta(data) ((0x0FFF0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_SR_1_V_Location_Ctrl_get_osd_height(data) (0x00000FFF&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1                                0x1802E670
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_reg_addr                        "0xB802E670"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_reg                             0xB802E670
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_inst_addr                       "0x0063"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_reg(data)                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_reg                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_b1_k1_shift                     (24)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_b1_k2_shift                     (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_b1_k3_shift                     (8)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_b1_k4_shift                     (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_b1_k1_mask                      (0x3F000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_b1_k2_mask                      (0x003F0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_b1_k3_mask                      (0x00003F00)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_b1_k4_mask                      (0x0000003F)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_b1_k1(data)                     (0x3F000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_b1_k2(data)                     (0x003F0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_b1_k3(data)                     (0x00003F00&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_b1_k4(data)                     (0x0000003F&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_get_b1_k1(data)                 ((0x3F000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_get_b1_k2(data)                 ((0x003F0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_get_b1_k3(data)                 ((0x00003F00&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b1_get_b1_k4(data)                 (0x0000003F&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2                                0x1802E674
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_reg_addr                        "0xB802E674"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_reg                             0xB802E674
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_inst_addr                       "0x0064"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_reg(data)                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_reg                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_b2_k1_shift                     (24)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_b2_k2_shift                     (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_b2_k3_shift                     (8)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_b2_k4_shift                     (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_b2_k1_mask                      (0x3F000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_b2_k2_mask                      (0x003F0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_b2_k3_mask                      (0x00003F00)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_b2_k4_mask                      (0x0000003F)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_b2_k1(data)                     (0x3F000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_b2_k2(data)                     (0x003F0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_b2_k3(data)                     (0x00003F00&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_b2_k4(data)                     (0x0000003F&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_get_b2_k1(data)                 ((0x3F000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_get_b2_k2(data)                 ((0x003F0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_get_b2_k3(data)                 ((0x00003F00&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b2_get_b2_k4(data)                 (0x0000003F&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3                                0x1802E678
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_reg_addr                        "0xB802E678"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_reg                             0xB802E678
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_inst_addr                       "0x0065"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_reg(data)                   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_reg                         (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_b3_k1_shift                     (24)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_b3_k2_shift                     (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_b3_k3_shift                     (8)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_b3_k4_shift                     (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_b3_k1_mask                      (0x3F000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_b3_k2_mask                      (0x003F0000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_b3_k3_mask                      (0x00003F00)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_b3_k4_mask                      (0x0000003F)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_b3_k1(data)                     (0x3F000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_b3_k2(data)                     (0x003F0000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_b3_k3(data)                     (0x00003F00&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_b3_k4(data)                     (0x0000003F&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_get_b3_k1(data)                 ((0x3F000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_get_b3_k2(data)                 ((0x003F0000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_get_b3_k3(data)                 ((0x00003F00&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_MIXER_b3_get_b3_k4(data)                 (0x0000003F&(data))

#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2          0x1802E67C
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_reg_addr  "0xB802E67C"
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_reg       0xB802E67C
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_inst_addr "0x0066"
#define  set_OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_reg(data) (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_reg)=data)
#define  get_OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_reg   (*((volatile unsigned int*)OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_reg))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d3_m3_shift (28)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d3_m2_shift (24)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d3_m1_shift (20)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d3_m0_shift (16)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d2_m3_shift (12)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d2_m2_shift (8)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d2_m1_shift (4)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d2_m0_shift (0)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d3_m3_mask (0x70000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d3_m2_mask (0x07000000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d3_m1_mask (0x00700000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d3_m0_mask (0x00070000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d2_m3_mask (0x00007000)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d2_m2_mask (0x00000700)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d2_m1_mask (0x00000070)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d2_m0_mask (0x00000007)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d3_m3(data) (0x70000000&((data)<<28))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d3_m2(data) (0x07000000&((data)<<24))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d3_m1(data) (0x00700000&((data)<<20))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d3_m0(data) (0x00070000&((data)<<16))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d2_m3(data) (0x00007000&((data)<<12))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d2_m2(data) (0x00000700&((data)<<8))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d2_m1(data) (0x00000070&((data)<<4))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_d2_m0(data) (0x00000007&(data))
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_get_d3_m3(data) ((0x70000000&(data))>>28)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_get_d3_m2(data) ((0x07000000&(data))>>24)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_get_d3_m1(data) ((0x00700000&(data))>>20)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_get_d3_m0(data) ((0x00070000&(data))>>16)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_get_d2_m3(data) ((0x00007000&(data))>>12)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_get_d2_m2(data) ((0x00000700&(data))>>8)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_get_d2_m1(data) ((0x00000070&(data))>>4)
#define  OSD_SMOOTH_TOGGLE_OSD_SECURITY_OSD_GAMMA_dynamic_region_D3_D2_get_d2_m0(data) (0x00000007&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======OSD_SMOOTH_TOGGLE register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  l5:4;
        RBus_UInt32  l4:4;
        RBus_UInt32  res2:8;
        RBus_UInt32  l1:4;
    };
}osd_smooth_toggle_line_buffer_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  l5:4;
        RBus_UInt32  l4:4;
        RBus_UInt32  res2:8;
        RBus_UInt32  l1:4;
    };
}osd_smooth_toggle_line_buffer_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  d3_mode:1;
        RBus_UInt32  rotate:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  osd1_en:1;
        RBus_UInt32  write_data:1;
    };
}osd_smooth_toggle_osd1_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  wi_endian:1;
        RBus_UInt32  rgb_out:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  osd:1;
        RBus_UInt32  res3:14;
        RBus_UInt32  clear_region_en:1;
        RBus_UInt32  write_data:1;
    };
}osd_smooth_toggle_osd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  th:13;
    };
}osd_smooth_toggle_osd1_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}osd_smooth_toggle_osd1_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}osd_smooth_toggle_osd1_wi_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  w:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  h:13;
    };
}osd_smooth_toggle_osd1_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m01:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m00:14;
    };
}osd_smooth_toggle_osd1_cc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m10:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m02:14;
    };
}osd_smooth_toggle_osd1_cc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m12:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m11:14;
    };
}osd_smooth_toggle_osd1_cc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m21:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m20:14;
    };
}osd_smooth_toggle_osd1_cc4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  m22:14;
    };
}osd_smooth_toggle_osd1_cc5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  a2:9;
        RBus_UInt32  a1:9;
        RBus_UInt32  a0:9;
    };
}osd_smooth_toggle_osd1_cc6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  b2:9;
        RBus_UInt32  b1:9;
        RBus_UInt32  b0:9;
    };
}osd_smooth_toggle_osd1_cc7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  x_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  x_end:13;
    };
}osd_smooth_toggle_osd1_clear1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  y_end:13;
    };
}osd_smooth_toggle_osd1_clear2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  d3_mode:1;
        RBus_UInt32  rotate:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  res3:2;
        RBus_UInt32  osd2_en:1;
        RBus_UInt32  write_data:1;
    };
}osd_smooth_toggle_osd2_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  wi_endian:1;
        RBus_UInt32  rgb_out:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  osd:1;
        RBus_UInt32  res3:14;
        RBus_UInt32  clear_region_en:1;
        RBus_UInt32  write_data:1;
    };
}osd_smooth_toggle_osd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  th:13;
    };
}osd_smooth_toggle_osd2_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}osd_smooth_toggle_osd2_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}osd_smooth_toggle_osd2_wi_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  w:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  h:13;
    };
}osd_smooth_toggle_osd2_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m01:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m00:14;
    };
}osd_smooth_toggle_osd2_cc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m10:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m02:14;
    };
}osd_smooth_toggle_osd2_cc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m12:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m11:14;
    };
}osd_smooth_toggle_osd2_cc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m21:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m20:14;
    };
}osd_smooth_toggle_osd2_cc4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  m22:14;
    };
}osd_smooth_toggle_osd2_cc5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  a2:9;
        RBus_UInt32  a1:9;
        RBus_UInt32  a0:9;
    };
}osd_smooth_toggle_osd2_cc6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  b2:9;
        RBus_UInt32  b1:9;
        RBus_UInt32  b0:9;
    };
}osd_smooth_toggle_osd2_cc7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  x_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  x_end:13;
    };
}osd_smooth_toggle_osd2_clear1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  y_end:13;
    };
}osd_smooth_toggle_osd2_clear2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  d3_mode:1;
        RBus_UInt32  rotate:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  res3:2;
        RBus_UInt32  osd3_en:1;
        RBus_UInt32  write_data:1;
    };
}osd_smooth_toggle_osd3_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  wi_endian:1;
        RBus_UInt32  rgb_out:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  osd:1;
        RBus_UInt32  res3:14;
        RBus_UInt32  clear_region_en:1;
        RBus_UInt32  write_data:1;
    };
}osd_smooth_toggle_osd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  th:13;
    };
}osd_smooth_toggle_osd3_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}osd_smooth_toggle_osd3_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}osd_smooth_toggle_osd3_wi_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  w:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  h:13;
    };
}osd_smooth_toggle_osd3_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m01:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m00:14;
    };
}osd_smooth_toggle_osd3_cc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m10:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m02:14;
    };
}osd_smooth_toggle_osd3_cc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m12:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m11:14;
    };
}osd_smooth_toggle_osd3_cc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m21:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m20:14;
    };
}osd_smooth_toggle_osd3_cc4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  m22:14;
    };
}osd_smooth_toggle_osd3_cc5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  a2:9;
        RBus_UInt32  a1:9;
        RBus_UInt32  a0:9;
    };
}osd_smooth_toggle_osd3_cc6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  b2:9;
        RBus_UInt32  b1:9;
        RBus_UInt32  b0:9;
    };
}osd_smooth_toggle_osd3_cc7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  x_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  x_end:13;
    };
}osd_smooth_toggle_osd3_clear1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  y_end:13;
    };
}osd_smooth_toggle_osd3_clear2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_zoom_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  ver_ini:8;
        RBus_UInt32  ver_tap_num:2;
        RBus_UInt32  ver_factor:20;
    };
}osd_smooth_toggle_osd_sr_1_scaleup_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_zoom_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  hor_factor:20;
    };
}osd_smooth_toggle_osd_sr_1_scaleup_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_h_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  osd_width:13;
    };
}osd_smooth_toggle_osd_sr_1_h_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  osd_v_sta:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  osd_height:12;
    };
}osd_smooth_toggle_osd_sr_1_v_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_maxmin_shift:8;
        RBus_UInt32  sr_var_thd:8;
        RBus_UInt32  res1:7;
        RBus_UInt32  sr_maxmin_limit_en:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  yuv_data:1;
        RBus_UInt32  irq_udf_en:1;
    };
}osd_smooth_toggle_osd_sr_1_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_by_pgain0:8;
        RBus_UInt32  sr_by_ngain0:8;
        RBus_UInt32  sr_lpf_gain:6;
        RBus_UInt32  res1:8;
        RBus_UInt32  sr_by_gain_en:2;
    };
}osd_smooth_toggle_osd_sr_1_gainy_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_zoom_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  ver_ini:8;
        RBus_UInt32  ver_tap_num:2;
        RBus_UInt32  ver_factor:20;
    };
}osd_smooth_toggle_osd_sr_2_scaleup_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_zoom_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  hor_factor:20;
    };
}osd_smooth_toggle_osd_sr_2_scaleup_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_h_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  osd_width:13;
    };
}osd_smooth_toggle_osd_sr_2_h_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  osd_v_sta:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  osd_height:12;
    };
}osd_smooth_toggle_osd_sr_2_v_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_maxmin_shift:8;
        RBus_UInt32  sr_var_thd:8;
        RBus_UInt32  res1:7;
        RBus_UInt32  sr_maxmin_limit_en:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  yuv_data:1;
        RBus_UInt32  irq_udf_en:1;
    };
}osd_smooth_toggle_osd_sr_2_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_by_pgain0:8;
        RBus_UInt32  sr_by_ngain0:8;
        RBus_UInt32  sr_lpf_gain:6;
        RBus_UInt32  res1:8;
        RBus_UInt32  sr_by_gain_en:2;
    };
}osd_smooth_toggle_osd_sr_2_gainy_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_zoom_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  ver_ini:8;
        RBus_UInt32  ver_tap_num:2;
        RBus_UInt32  ver_factor:20;
    };
}osd_smooth_toggle_osd_sr_3_scaleup_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_zoom_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  hor_factor:20;
    };
}osd_smooth_toggle_osd_sr_3_scaleup_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_h_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  osd_width:13;
    };
}osd_smooth_toggle_osd_sr_3_h_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  osd_v_sta:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  osd_height:12;
    };
}osd_smooth_toggle_osd_sr_3_v_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_maxmin_shift:8;
        RBus_UInt32  sr_var_thd:8;
        RBus_UInt32  res1:7;
        RBus_UInt32  sr_maxmin_limit_en:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  yuv_data:1;
        RBus_UInt32  irq_udf_en:1;
    };
}osd_smooth_toggle_osd_sr_3_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_by_pgain0:8;
        RBus_UInt32  sr_by_ngain0:8;
        RBus_UInt32  sr_lpf_gain:6;
        RBus_UInt32  res1:9;
        RBus_UInt32  sr_by_gain_en:1;
    };
}osd_smooth_toggle_osd_sr_3_gainy_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  measure_osd_zone_en:1;
        RBus_UInt32  measure_osd_zone_type:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  video_src_sel:1;
        RBus_UInt32  video_alpha:8;
        RBus_UInt32  res2:12;
        RBus_UInt32  mixero3_en:1;
        RBus_UInt32  mixero2_en:1;
        RBus_UInt32  mixero1_en:1;
        RBus_UInt32  mixer_en:1;
    };
}osd_smooth_toggle_mixer_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  c3_plane_alpha_en:1;
        RBus_UInt32  c2_plane_alpha_en:1;
        RBus_UInt32  c1_plane_alpha_en:1;
        RBus_UInt32  c0_plane_alpha_en:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  c3_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  c2_sel:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  c1_sel:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  c0_sel:2;
    };
}osd_smooth_toggle_mixer_layer_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_a:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  plane_alpha_r:9;
    };
}osd_smooth_toggle_mixer_c0_plane_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_g:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  plane_alpha_b:9;
    };
}osd_smooth_toggle_mixer_c0_plane_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_offset_a:8;
        RBus_UInt32  plane_offset_r:8;
        RBus_UInt32  plane_offset_g:8;
        RBus_UInt32  plane_offset_b:8;
    };
}osd_smooth_toggle_mixer_c0_plane_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_a:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  plane_alpha_r:9;
    };
}osd_smooth_toggle_mixer_c1_plane_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_g:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  plane_alpha_b:9;
    };
}osd_smooth_toggle_mixer_c1_plane_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_offset_a:8;
        RBus_UInt32  plane_offset_r:8;
        RBus_UInt32  plane_offset_g:8;
        RBus_UInt32  plane_offset_b:8;
    };
}osd_smooth_toggle_mixer_c1_plane_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_a:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  plane_alpha_r:9;
    };
}osd_smooth_toggle_mixer_c2_plane_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_g:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  plane_alpha_b:9;
    };
}osd_smooth_toggle_mixer_c2_plane_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_offset_a:8;
        RBus_UInt32  plane_offset_r:8;
        RBus_UInt32  plane_offset_g:8;
        RBus_UInt32  plane_offset_b:8;
    };
}osd_smooth_toggle_mixer_c2_plane_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_a:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  plane_alpha_r:9;
    };
}osd_smooth_toggle_mixer_c3_plane_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_g:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  plane_alpha_b:9;
    };
}osd_smooth_toggle_mixer_c3_plane_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_offset_a:8;
        RBus_UInt32  plane_offset_r:8;
        RBus_UInt32  plane_offset_g:8;
        RBus_UInt32  plane_offset_b:8;
    };
}osd_smooth_toggle_mixer_c3_plane_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  d1_m3:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  d1_m2:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  d1_m1:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  d1_m0:3;
        RBus_UInt32  res5:2;
        RBus_UInt32  osd3_gamma_zone_type:2;
        RBus_UInt32  osd2_gamma_zone_type:2;
        RBus_UInt32  osd1_gamma_zone_type:2;
        RBus_UInt32  res6:1;
        RBus_UInt32  osd_gamma_position:3;
        RBus_UInt32  dynamic_region_en:1;
        RBus_UInt32  mixer_gamma2_en:1;
        RBus_UInt32  mixer_osd3x3_en:1;
        RBus_UInt32  mixer_gamma1_en:1;
    };
}osd_smooth_toggle_mixer_osd_gamma_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  d3_m3:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  d3_m2:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  d3_m1:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  d3_m0:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  d2_m3:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  d2_m2:3;
        RBus_UInt32  res7:1;
        RBus_UInt32  d2_m1:3;
        RBus_UInt32  res8:1;
        RBus_UInt32  d2_m0:3;
    };
}osd_smooth_toggle_mixer_osd_gamma_dynamic_region_d3_d2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  k1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  k2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  k3:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  k4:6;
    };
}osd_smooth_toggle_mixer_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  k1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  k2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  k3:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  k4:6;
    };
}osd_smooth_toggle_mixer_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  k1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  k2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  k3:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  k4:6;
    };
}osd_smooth_toggle_mixer_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  osd3_line_mask:2;
        RBus_UInt32  osd2_line_mask:2;
        RBus_UInt32  osd1_line_mask:2;
        RBus_UInt32  video_line_mask:2;
    };
}osd_smooth_toggle_mixer_line_mask_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  link_with_smooth_toggle:1;
        RBus_UInt32  res1:28;
        RBus_UInt32  db_read:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_load:1;
    };
}osd_smooth_toggle_osd_security_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  c3_security_en:1;
        RBus_UInt32  c2_security_en:1;
        RBus_UInt32  c1_security_en:1;
        RBus_UInt32  c0_security_en:1;
        RBus_UInt32  res2:23;
        RBus_UInt32  osd_security_en:1;
    };
}osd_smooth_toggle_osd_security_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802e604_31_28:4;
        RBus_UInt32  d1_m3:3;
        RBus_UInt32  d1_m2:3;
        RBus_UInt32  d1_m1:3;
        RBus_UInt32  d1_m0:3;
        RBus_UInt32  res1:2;
        RBus_UInt32  osd1_gamma_zone_type:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  osd_gamma_position:3;
        RBus_UInt32  dynamic_region_en:1;
        RBus_UInt32  mixer_gamma2_en:1;
        RBus_UInt32  mixer_osd3x3_en:1;
        RBus_UInt32  mixer_gamma1_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  mixero1_en:1;
        RBus_UInt32  mixer_en:1;
    };
}osd_smooth_toggle_osd_security_mixer_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  c3_plane_alpha_en:1;
        RBus_UInt32  c2_plane_alpha_en:1;
        RBus_UInt32  c1_plane_alpha_en:1;
        RBus_UInt32  c0_plane_alpha_en:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  c3_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  c2_sel:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  c1_sel:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  c0_sel:2;
    };
}osd_smooth_toggle_osd_security_mixer_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  sta_l4:4;
        RBus_UInt32  res2:12;
    };
}osd_smooth_toggle_osd_security_line_buffer_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  size_l4:4;
        RBus_UInt32  res2:12;
    };
}osd_smooth_toggle_osd_security_line_buffer_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  osdsr3_switch_to:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  osdsr2_switch_to:2;
        RBus_UInt32  res3:4;
    };
}osd_smooth_toggle_osd_security_gdma_switch_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  osd1_1b:1;
        RBus_UInt32  osd1_2b:1;
        RBus_UInt32  osd1_4b:1;
        RBus_UInt32  osd1_8b:1;
        RBus_UInt32  osd1_wi_endian:1;
        RBus_UInt32  osd1_rgb_out:1;
        RBus_UInt32  osd1_rotate:1;
        RBus_UInt32  osd1_en:1;
    };
}osd_smooth_toggle_osd_security_gdma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd1_wi_addr:32;
    };
}osd_smooth_toggle_osd_security_gdma_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  osd1_w:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  osd1_h:13;
    };
}osd_smooth_toggle_osd_security_gdma_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_zoom_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  ver_ini:8;
        RBus_UInt32  ver_tap_num:2;
        RBus_UInt32  ver_factor:20;
    };
}osd_smooth_toggle_osd_security_sr_1_scaleup_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_zoom_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  hor_factor:20;
    };
}osd_smooth_toggle_osd_security_sr_1_scaleup_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_h_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  osd_width:13;
    };
}osd_smooth_toggle_osd_security_sr_1_h_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  osd_v_sta:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  osd_height:12;
    };
}osd_smooth_toggle_osd_security_sr_1_v_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  b1_k1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  b1_k2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  b1_k3:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  b1_k4:6;
    };
}osd_smooth_toggle_osd_security_mixer_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  b2_k1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  b2_k2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  b2_k3:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  b2_k4:6;
    };
}osd_smooth_toggle_osd_security_mixer_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  b3_k1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  b3_k2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  b3_k3:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  b3_k4:6;
    };
}osd_smooth_toggle_osd_security_mixer_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  d3_m3:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  d3_m2:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  d3_m1:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  d3_m0:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  d2_m3:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  d2_m2:3;
        RBus_UInt32  res7:1;
        RBus_UInt32  d2_m1:3;
        RBus_UInt32  res8:1;
        RBus_UInt32  d2_m0:3;
    };
}osd_smooth_toggle_osd_security_osd_gamma_dynamic_region_d3_d2_RBUS;

#else //apply LITTLE_ENDIAN

//======OSD_SMOOTH_TOGGLE register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  l1:4;
        RBus_UInt32  res1:8;
        RBus_UInt32  l4:4;
        RBus_UInt32  l5:4;
        RBus_UInt32  res2:12;
    };
}osd_smooth_toggle_line_buffer_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  l1:4;
        RBus_UInt32  res1:8;
        RBus_UInt32  l4:4;
        RBus_UInt32  l5:4;
        RBus_UInt32  res2:12;
    };
}osd_smooth_toggle_line_buffer_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  osd1_en:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  rotate:1;
        RBus_UInt32  d3_mode:1;
        RBus_UInt32  res2:22;
    };
}osd_smooth_toggle_osd1_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  clear_region_en:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  osd:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  rgb_out:1;
        RBus_UInt32  wi_endian:1;
        RBus_UInt32  res3:6;
    };
}osd_smooth_toggle_osd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  th:13;
        RBus_UInt32  res1:19;
    };
}osd_smooth_toggle_osd1_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}osd_smooth_toggle_osd1_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}osd_smooth_toggle_osd1_wi_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  w:13;
        RBus_UInt32  res2:3;
    };
}osd_smooth_toggle_osd1_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m00:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m01:14;
        RBus_UInt32  res2:2;
    };
}osd_smooth_toggle_osd1_cc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m02:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m10:14;
        RBus_UInt32  res2:2;
    };
}osd_smooth_toggle_osd1_cc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m11:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m12:14;
        RBus_UInt32  res2:2;
    };
}osd_smooth_toggle_osd1_cc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m20:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m21:14;
        RBus_UInt32  res2:2;
    };
}osd_smooth_toggle_osd1_cc4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m22:14;
        RBus_UInt32  res1:18;
    };
}osd_smooth_toggle_osd1_cc5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  a0:9;
        RBus_UInt32  a1:9;
        RBus_UInt32  a2:9;
        RBus_UInt32  res1:5;
    };
}osd_smooth_toggle_osd1_cc6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b0:9;
        RBus_UInt32  b1:9;
        RBus_UInt32  b2:9;
        RBus_UInt32  res1:5;
    };
}osd_smooth_toggle_osd1_cc7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  x_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  x_sta:13;
        RBus_UInt32  res2:3;
    };
}osd_smooth_toggle_osd1_clear1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  y_sta:13;
        RBus_UInt32  res2:3;
    };
}osd_smooth_toggle_osd1_clear2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  osd2_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:4;
        RBus_UInt32  rotate:1;
        RBus_UInt32  d3_mode:1;
        RBus_UInt32  res3:22;
    };
}osd_smooth_toggle_osd2_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  clear_region_en:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  osd:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  rgb_out:1;
        RBus_UInt32  wi_endian:1;
        RBus_UInt32  res3:6;
    };
}osd_smooth_toggle_osd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  th:13;
        RBus_UInt32  res1:19;
    };
}osd_smooth_toggle_osd2_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}osd_smooth_toggle_osd2_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}osd_smooth_toggle_osd2_wi_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  w:13;
        RBus_UInt32  res2:3;
    };
}osd_smooth_toggle_osd2_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m00:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m01:14;
        RBus_UInt32  res2:2;
    };
}osd_smooth_toggle_osd2_cc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m02:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m10:14;
        RBus_UInt32  res2:2;
    };
}osd_smooth_toggle_osd2_cc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m11:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m12:14;
        RBus_UInt32  res2:2;
    };
}osd_smooth_toggle_osd2_cc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m20:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m21:14;
        RBus_UInt32  res2:2;
    };
}osd_smooth_toggle_osd2_cc4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m22:14;
        RBus_UInt32  res1:18;
    };
}osd_smooth_toggle_osd2_cc5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  a0:9;
        RBus_UInt32  a1:9;
        RBus_UInt32  a2:9;
        RBus_UInt32  res1:5;
    };
}osd_smooth_toggle_osd2_cc6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b0:9;
        RBus_UInt32  b1:9;
        RBus_UInt32  b2:9;
        RBus_UInt32  res1:5;
    };
}osd_smooth_toggle_osd2_cc7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  x_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  x_sta:13;
        RBus_UInt32  res2:3;
    };
}osd_smooth_toggle_osd2_clear1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  y_sta:13;
        RBus_UInt32  res2:3;
    };
}osd_smooth_toggle_osd2_clear2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  osd3_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:4;
        RBus_UInt32  rotate:1;
        RBus_UInt32  d3_mode:1;
        RBus_UInt32  res3:22;
    };
}osd_smooth_toggle_osd3_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  clear_region_en:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  osd:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  rgb_out:1;
        RBus_UInt32  wi_endian:1;
        RBus_UInt32  res3:6;
    };
}osd_smooth_toggle_osd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  th:13;
        RBus_UInt32  res1:19;
    };
}osd_smooth_toggle_osd3_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}osd_smooth_toggle_osd3_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}osd_smooth_toggle_osd3_wi_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  w:13;
        RBus_UInt32  res2:3;
    };
}osd_smooth_toggle_osd3_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m00:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m01:14;
        RBus_UInt32  res2:2;
    };
}osd_smooth_toggle_osd3_cc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m02:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m10:14;
        RBus_UInt32  res2:2;
    };
}osd_smooth_toggle_osd3_cc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m11:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m12:14;
        RBus_UInt32  res2:2;
    };
}osd_smooth_toggle_osd3_cc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m20:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m21:14;
        RBus_UInt32  res2:2;
    };
}osd_smooth_toggle_osd3_cc4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m22:14;
        RBus_UInt32  res1:18;
    };
}osd_smooth_toggle_osd3_cc5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  a0:9;
        RBus_UInt32  a1:9;
        RBus_UInt32  a2:9;
        RBus_UInt32  res1:5;
    };
}osd_smooth_toggle_osd3_cc6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b0:9;
        RBus_UInt32  b1:9;
        RBus_UInt32  b2:9;
        RBus_UInt32  res1:5;
    };
}osd_smooth_toggle_osd3_cc7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  x_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  x_sta:13;
        RBus_UInt32  res2:3;
    };
}osd_smooth_toggle_osd3_clear1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  y_sta:13;
        RBus_UInt32  res2:3;
    };
}osd_smooth_toggle_osd3_clear2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_factor:20;
        RBus_UInt32  ver_tap_num:2;
        RBus_UInt32  ver_ini:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  v_zoom_en:1;
    };
}osd_smooth_toggle_osd_sr_1_scaleup_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_factor:20;
        RBus_UInt32  res1:2;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  h_zoom_en:1;
    };
}osd_smooth_toggle_osd_sr_1_scaleup_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_width:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_h_sta:13;
        RBus_UInt32  res2:3;
    };
}osd_smooth_toggle_osd_sr_1_h_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_height:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  osd_v_sta:12;
        RBus_UInt32  res2:4;
    };
}osd_smooth_toggle_osd_sr_1_v_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irq_udf_en:1;
        RBus_UInt32  yuv_data:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  sr_maxmin_limit_en:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  sr_var_thd:8;
        RBus_UInt32  sr_maxmin_shift:8;
    };
}osd_smooth_toggle_osd_sr_1_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_by_gain_en:2;
        RBus_UInt32  res1:8;
        RBus_UInt32  sr_lpf_gain:6;
        RBus_UInt32  sr_by_ngain0:8;
        RBus_UInt32  sr_by_pgain0:8;
    };
}osd_smooth_toggle_osd_sr_1_gainy_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_factor:20;
        RBus_UInt32  ver_tap_num:2;
        RBus_UInt32  ver_ini:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  v_zoom_en:1;
    };
}osd_smooth_toggle_osd_sr_2_scaleup_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_factor:20;
        RBus_UInt32  res1:2;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  h_zoom_en:1;
    };
}osd_smooth_toggle_osd_sr_2_scaleup_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_width:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_h_sta:13;
        RBus_UInt32  res2:3;
    };
}osd_smooth_toggle_osd_sr_2_h_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_height:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  osd_v_sta:12;
        RBus_UInt32  res2:4;
    };
}osd_smooth_toggle_osd_sr_2_v_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irq_udf_en:1;
        RBus_UInt32  yuv_data:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  sr_maxmin_limit_en:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  sr_var_thd:8;
        RBus_UInt32  sr_maxmin_shift:8;
    };
}osd_smooth_toggle_osd_sr_2_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_by_gain_en:2;
        RBus_UInt32  res1:8;
        RBus_UInt32  sr_lpf_gain:6;
        RBus_UInt32  sr_by_ngain0:8;
        RBus_UInt32  sr_by_pgain0:8;
    };
}osd_smooth_toggle_osd_sr_2_gainy_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_factor:20;
        RBus_UInt32  ver_tap_num:2;
        RBus_UInt32  ver_ini:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  v_zoom_en:1;
    };
}osd_smooth_toggle_osd_sr_3_scaleup_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_factor:20;
        RBus_UInt32  res1:2;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  h_zoom_en:1;
    };
}osd_smooth_toggle_osd_sr_3_scaleup_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_width:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_h_sta:13;
        RBus_UInt32  res2:3;
    };
}osd_smooth_toggle_osd_sr_3_h_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_height:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  osd_v_sta:12;
        RBus_UInt32  res2:4;
    };
}osd_smooth_toggle_osd_sr_3_v_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irq_udf_en:1;
        RBus_UInt32  yuv_data:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  sr_maxmin_limit_en:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  sr_var_thd:8;
        RBus_UInt32  sr_maxmin_shift:8;
    };
}osd_smooth_toggle_osd_sr_3_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_by_gain_en:1;
        RBus_UInt32  res1:9;
        RBus_UInt32  sr_lpf_gain:6;
        RBus_UInt32  sr_by_ngain0:8;
        RBus_UInt32  sr_by_pgain0:8;
    };
}osd_smooth_toggle_osd_sr_3_gainy_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mixer_en:1;
        RBus_UInt32  mixero1_en:1;
        RBus_UInt32  mixero2_en:1;
        RBus_UInt32  mixero3_en:1;
        RBus_UInt32  res1:12;
        RBus_UInt32  video_alpha:8;
        RBus_UInt32  video_src_sel:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  measure_osd_zone_type:1;
        RBus_UInt32  measure_osd_zone_en:1;
    };
}osd_smooth_toggle_mixer_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c0_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  c1_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  c2_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  c3_sel:2;
        RBus_UInt32  res4:10;
        RBus_UInt32  c0_plane_alpha_en:1;
        RBus_UInt32  c1_plane_alpha_en:1;
        RBus_UInt32  c2_plane_alpha_en:1;
        RBus_UInt32  c3_plane_alpha_en:1;
        RBus_UInt32  res5:4;
    };
}osd_smooth_toggle_mixer_layer_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_alpha_r:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_a:9;
        RBus_UInt32  res2:7;
    };
}osd_smooth_toggle_mixer_c0_plane_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_alpha_b:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_g:9;
        RBus_UInt32  res2:7;
    };
}osd_smooth_toggle_mixer_c0_plane_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_offset_b:8;
        RBus_UInt32  plane_offset_g:8;
        RBus_UInt32  plane_offset_r:8;
        RBus_UInt32  plane_offset_a:8;
    };
}osd_smooth_toggle_mixer_c0_plane_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_alpha_r:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_a:9;
        RBus_UInt32  res2:7;
    };
}osd_smooth_toggle_mixer_c1_plane_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_alpha_b:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_g:9;
        RBus_UInt32  res2:7;
    };
}osd_smooth_toggle_mixer_c1_plane_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_offset_b:8;
        RBus_UInt32  plane_offset_g:8;
        RBus_UInt32  plane_offset_r:8;
        RBus_UInt32  plane_offset_a:8;
    };
}osd_smooth_toggle_mixer_c1_plane_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_alpha_r:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_a:9;
        RBus_UInt32  res2:7;
    };
}osd_smooth_toggle_mixer_c2_plane_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_alpha_b:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_g:9;
        RBus_UInt32  res2:7;
    };
}osd_smooth_toggle_mixer_c2_plane_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_offset_b:8;
        RBus_UInt32  plane_offset_g:8;
        RBus_UInt32  plane_offset_r:8;
        RBus_UInt32  plane_offset_a:8;
    };
}osd_smooth_toggle_mixer_c2_plane_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_alpha_r:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_a:9;
        RBus_UInt32  res2:7;
    };
}osd_smooth_toggle_mixer_c3_plane_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_alpha_b:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_g:9;
        RBus_UInt32  res2:7;
    };
}osd_smooth_toggle_mixer_c3_plane_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_offset_b:8;
        RBus_UInt32  plane_offset_g:8;
        RBus_UInt32  plane_offset_r:8;
        RBus_UInt32  plane_offset_a:8;
    };
}osd_smooth_toggle_mixer_c3_plane_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mixer_gamma1_en:1;
        RBus_UInt32  mixer_osd3x3_en:1;
        RBus_UInt32  mixer_gamma2_en:1;
        RBus_UInt32  dynamic_region_en:1;
        RBus_UInt32  osd_gamma_position:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  osd1_gamma_zone_type:2;
        RBus_UInt32  osd2_gamma_zone_type:2;
        RBus_UInt32  osd3_gamma_zone_type:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  d1_m0:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  d1_m1:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  d1_m2:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  d1_m3:3;
        RBus_UInt32  res6:1;
    };
}osd_smooth_toggle_mixer_osd_gamma_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  d2_m0:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  d2_m1:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  d2_m2:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  d2_m3:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  d3_m0:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  d3_m1:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  d3_m2:3;
        RBus_UInt32  res7:1;
        RBus_UInt32  d3_m3:3;
        RBus_UInt32  res8:1;
    };
}osd_smooth_toggle_mixer_osd_gamma_dynamic_region_d3_d2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k4:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  k3:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  k2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  k1:6;
        RBus_UInt32  res4:2;
    };
}osd_smooth_toggle_mixer_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k4:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  k3:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  k2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  k1:6;
        RBus_UInt32  res4:2;
    };
}osd_smooth_toggle_mixer_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k4:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  k3:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  k2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  k1:6;
        RBus_UInt32  res4:2;
    };
}osd_smooth_toggle_mixer_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  video_line_mask:2;
        RBus_UInt32  osd1_line_mask:2;
        RBus_UInt32  osd2_line_mask:2;
        RBus_UInt32  osd3_line_mask:2;
        RBus_UInt32  res1:24;
    };
}osd_smooth_toggle_mixer_line_mask_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_load:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_read:1;
        RBus_UInt32  res1:28;
        RBus_UInt32  link_with_smooth_toggle:1;
    };
}osd_smooth_toggle_osd_security_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_security_en:1;
        RBus_UInt32  res1:23;
        RBus_UInt32  c0_security_en:1;
        RBus_UInt32  c1_security_en:1;
        RBus_UInt32  c2_security_en:1;
        RBus_UInt32  c3_security_en:1;
        RBus_UInt32  res2:4;
    };
}osd_smooth_toggle_osd_security_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mixer_en:1;
        RBus_UInt32  mixero1_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  mixer_gamma1_en:1;
        RBus_UInt32  mixer_osd3x3_en:1;
        RBus_UInt32  mixer_gamma2_en:1;
        RBus_UInt32  dynamic_region_en:1;
        RBus_UInt32  osd_gamma_position:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  osd1_gamma_zone_type:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  d1_m0:3;
        RBus_UInt32  d1_m1:3;
        RBus_UInt32  d1_m2:3;
        RBus_UInt32  d1_m3:3;
        RBus_UInt32  dummy1802e604_31_28:4;
    };
}osd_smooth_toggle_osd_security_mixer_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c0_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  c1_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  c2_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  c3_sel:2;
        RBus_UInt32  res4:10;
        RBus_UInt32  c0_plane_alpha_en:1;
        RBus_UInt32  c1_plane_alpha_en:1;
        RBus_UInt32  c2_plane_alpha_en:1;
        RBus_UInt32  c3_plane_alpha_en:1;
        RBus_UInt32  res5:4;
    };
}osd_smooth_toggle_osd_security_mixer_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  sta_l4:4;
        RBus_UInt32  res2:16;
    };
}osd_smooth_toggle_osd_security_line_buffer_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  size_l4:4;
        RBus_UInt32  res2:16;
    };
}osd_smooth_toggle_osd_security_line_buffer_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  osdsr2_switch_to:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  osdsr3_switch_to:2;
        RBus_UInt32  res3:22;
    };
}osd_smooth_toggle_osd_security_gdma_switch_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd1_en:1;
        RBus_UInt32  osd1_rotate:1;
        RBus_UInt32  osd1_rgb_out:1;
        RBus_UInt32  osd1_wi_endian:1;
        RBus_UInt32  osd1_8b:1;
        RBus_UInt32  osd1_4b:1;
        RBus_UInt32  osd1_2b:1;
        RBus_UInt32  osd1_1b:1;
        RBus_UInt32  res1:24;
    };
}osd_smooth_toggle_osd_security_gdma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd1_wi_addr:32;
    };
}osd_smooth_toggle_osd_security_gdma_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd1_h:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  osd1_w:13;
        RBus_UInt32  res2:3;
    };
}osd_smooth_toggle_osd_security_gdma_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ver_factor:20;
        RBus_UInt32  ver_tap_num:2;
        RBus_UInt32  ver_ini:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  v_zoom_en:1;
    };
}osd_smooth_toggle_osd_security_sr_1_scaleup_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hor_factor:20;
        RBus_UInt32  res1:2;
        RBus_UInt32  hor_ini:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  h_zoom_en:1;
    };
}osd_smooth_toggle_osd_security_sr_1_scaleup_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_width:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_h_sta:13;
        RBus_UInt32  res2:3;
    };
}osd_smooth_toggle_osd_security_sr_1_h_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_height:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  osd_v_sta:12;
        RBus_UInt32  res2:4;
    };
}osd_smooth_toggle_osd_security_sr_1_v_location_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b1_k4:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  b1_k3:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  b1_k2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  b1_k1:6;
        RBus_UInt32  res4:2;
    };
}osd_smooth_toggle_osd_security_mixer_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b2_k4:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  b2_k3:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  b2_k2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  b2_k1:6;
        RBus_UInt32  res4:2;
    };
}osd_smooth_toggle_osd_security_mixer_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b3_k4:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  b3_k3:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  b3_k2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  b3_k1:6;
        RBus_UInt32  res4:2;
    };
}osd_smooth_toggle_osd_security_mixer_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  d2_m0:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  d2_m1:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  d2_m2:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  d2_m3:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  d3_m0:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  d3_m1:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  d3_m2:3;
        RBus_UInt32  res7:1;
        RBus_UInt32  d3_m3:3;
        RBus_UInt32  res8:1;
    };
}osd_smooth_toggle_osd_security_osd_gamma_dynamic_region_d3_d2_RBUS;




#endif 


#endif 
