/**
* @file Merlin5-DesignSpec-D-Domain_GDMA_osd
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_GDMA_REG_H_
#define _RBUS_GDMA_REG_H_

#include "rbus_types.h"



//  GDMA Register Address
#define  GDMA_UPDATE                                                            0x1802FF00
#define  GDMA_UPDATE_reg_addr                                                    "0xB802FF00"
#define  GDMA_UPDATE_reg                                                         0xB802FF00
#define  GDMA_UPDATE_inst_addr                                                   "0x0000"
#define  set_GDMA_UPDATE_reg(data)                                               (*((volatile unsigned int*)GDMA_UPDATE_reg)=data)
#define  get_GDMA_UPDATE_reg                                                     (*((volatile unsigned int*)GDMA_UPDATE_reg))
#define  GDMA_UPDATE_gating_enable_shift                                         (16)
#define  GDMA_UPDATE_osd3_bypass_acc_sync_fix_shift                              (11)
#define  GDMA_UPDATE_osd2_bypass_acc_sync_fix_shift                              (10)
#define  GDMA_UPDATE_osd1_bypass_acc_sync_fix_shift                              (9)
#define  GDMA_UPDATE_osd_sel_shift                                               (1)
#define  GDMA_UPDATE_write_data_shift                                            (0)
#define  GDMA_UPDATE_gating_enable_mask                                          (0x00010000)
#define  GDMA_UPDATE_osd3_bypass_acc_sync_fix_mask                               (0x00000800)
#define  GDMA_UPDATE_osd2_bypass_acc_sync_fix_mask                               (0x00000400)
#define  GDMA_UPDATE_osd1_bypass_acc_sync_fix_mask                               (0x00000200)
#define  GDMA_UPDATE_osd_sel_mask                                                (0x00000002)
#define  GDMA_UPDATE_write_data_mask                                             (0x00000001)
#define  GDMA_UPDATE_gating_enable(data)                                         (0x00010000&((data)<<16))
#define  GDMA_UPDATE_osd3_bypass_acc_sync_fix(data)                              (0x00000800&((data)<<11))
#define  GDMA_UPDATE_osd2_bypass_acc_sync_fix(data)                              (0x00000400&((data)<<10))
#define  GDMA_UPDATE_osd1_bypass_acc_sync_fix(data)                              (0x00000200&((data)<<9))
#define  GDMA_UPDATE_osd_sel(data)                                               (0x00000002&((data)<<1))
#define  GDMA_UPDATE_write_data(data)                                            (0x00000001&(data))
#define  GDMA_UPDATE_get_gating_enable(data)                                     ((0x00010000&(data))>>16)
#define  GDMA_UPDATE_get_osd3_bypass_acc_sync_fix(data)                          ((0x00000800&(data))>>11)
#define  GDMA_UPDATE_get_osd2_bypass_acc_sync_fix(data)                          ((0x00000400&(data))>>10)
#define  GDMA_UPDATE_get_osd1_bypass_acc_sync_fix(data)                          ((0x00000200&(data))>>9)
#define  GDMA_UPDATE_get_osd_sel(data)                                           ((0x00000002&(data))>>1)
#define  GDMA_UPDATE_get_write_data(data)                                        (0x00000001&(data))

#define  GDMA_CTRL                                                              0x1802FF04
#define  GDMA_CTRL_reg_addr                                                      "0xB802FF04"
#define  GDMA_CTRL_reg                                                           0xB802FF04
#define  GDMA_CTRL_inst_addr                                                     "0x0001"
#define  set_GDMA_CTRL_reg(data)                                                 (*((volatile unsigned int*)GDMA_CTRL_reg)=data)
#define  get_GDMA_CTRL_reg                                                       (*((volatile unsigned int*)GDMA_CTRL_reg))
#define  GDMA_CTRL_osd3_prog_done_shift                                          (3)
#define  GDMA_CTRL_osd2_prog_done_shift                                          (2)
#define  GDMA_CTRL_osd1_prog_done_shift                                          (1)
#define  GDMA_CTRL_write_data_shift                                              (0)
#define  GDMA_CTRL_osd3_prog_done_mask                                           (0x00000008)
#define  GDMA_CTRL_osd2_prog_done_mask                                           (0x00000004)
#define  GDMA_CTRL_osd1_prog_done_mask                                           (0x00000002)
#define  GDMA_CTRL_write_data_mask                                               (0x00000001)
#define  GDMA_CTRL_osd3_prog_done(data)                                          (0x00000008&((data)<<3))
#define  GDMA_CTRL_osd2_prog_done(data)                                          (0x00000004&((data)<<2))
#define  GDMA_CTRL_osd1_prog_done(data)                                          (0x00000002&((data)<<1))
#define  GDMA_CTRL_write_data(data)                                              (0x00000001&(data))
#define  GDMA_CTRL_get_osd3_prog_done(data)                                      ((0x00000008&(data))>>3)
#define  GDMA_CTRL_get_osd2_prog_done(data)                                      ((0x00000004&(data))>>2)
#define  GDMA_CTRL_get_osd1_prog_done(data)                                      ((0x00000002&(data))>>1)
#define  GDMA_CTRL_get_write_data(data)                                          (0x00000001&(data))

#define  GDMA_line_buffer_sta                                                   0x1802FF10
#define  GDMA_line_buffer_sta_reg_addr                                           "0xB802FF10"
#define  GDMA_line_buffer_sta_reg                                                0xB802FF10
#define  GDMA_line_buffer_sta_inst_addr                                          "0x0002"
#define  set_GDMA_line_buffer_sta_reg(data)                                      (*((volatile unsigned int*)GDMA_line_buffer_sta_reg)=data)
#define  get_GDMA_line_buffer_sta_reg                                            (*((volatile unsigned int*)GDMA_line_buffer_sta_reg))
#define  GDMA_line_buffer_sta_l5_shift                                           (16)
#define  GDMA_line_buffer_sta_l4_shift                                           (12)
#define  GDMA_line_buffer_sta_l1_shift                                           (0)
#define  GDMA_line_buffer_sta_l5_mask                                            (0x000F0000)
#define  GDMA_line_buffer_sta_l4_mask                                            (0x0000F000)
#define  GDMA_line_buffer_sta_l1_mask                                            (0x0000000F)
#define  GDMA_line_buffer_sta_l5(data)                                           (0x000F0000&((data)<<16))
#define  GDMA_line_buffer_sta_l4(data)                                           (0x0000F000&((data)<<12))
#define  GDMA_line_buffer_sta_l1(data)                                           (0x0000000F&(data))
#define  GDMA_line_buffer_sta_get_l5(data)                                       ((0x000F0000&(data))>>16)
#define  GDMA_line_buffer_sta_get_l4(data)                                       ((0x0000F000&(data))>>12)
#define  GDMA_line_buffer_sta_get_l1(data)                                       (0x0000000F&(data))

#define  GDMA_line_buffer_size                                                  0x1802FF14
#define  GDMA_line_buffer_size_reg_addr                                          "0xB802FF14"
#define  GDMA_line_buffer_size_reg                                               0xB802FF14
#define  GDMA_line_buffer_size_inst_addr                                         "0x0003"
#define  set_GDMA_line_buffer_size_reg(data)                                     (*((volatile unsigned int*)GDMA_line_buffer_size_reg)=data)
#define  get_GDMA_line_buffer_size_reg                                           (*((volatile unsigned int*)GDMA_line_buffer_size_reg))
#define  GDMA_line_buffer_size_l5_shift                                          (16)
#define  GDMA_line_buffer_size_l4_shift                                          (12)
#define  GDMA_line_buffer_size_l1_shift                                          (0)
#define  GDMA_line_buffer_size_l5_mask                                           (0x000F0000)
#define  GDMA_line_buffer_size_l4_mask                                           (0x0000F000)
#define  GDMA_line_buffer_size_l1_mask                                           (0x0000000F)
#define  GDMA_line_buffer_size_l5(data)                                          (0x000F0000&((data)<<16))
#define  GDMA_line_buffer_size_l4(data)                                          (0x0000F000&((data)<<12))
#define  GDMA_line_buffer_size_l1(data)                                          (0x0000000F&(data))
#define  GDMA_line_buffer_size_get_l5(data)                                      ((0x000F0000&(data))>>16)
#define  GDMA_line_buffer_size_get_l4(data)                                      ((0x0000F000&(data))>>12)
#define  GDMA_line_buffer_size_get_l1(data)                                      (0x0000000F&(data))

#define  GDMA_line_buffer_end                                                   0x1802FF18
#define  GDMA_line_buffer_end_reg_addr                                           "0xB802FF18"
#define  GDMA_line_buffer_end_reg                                                0xB802FF18
#define  GDMA_line_buffer_end_inst_addr                                          "0x0004"
#define  set_GDMA_line_buffer_end_reg(data)                                      (*((volatile unsigned int*)GDMA_line_buffer_end_reg)=data)
#define  get_GDMA_line_buffer_end_reg                                            (*((volatile unsigned int*)GDMA_line_buffer_end_reg))
#define  GDMA_line_buffer_end_clut_layer_sel_shift                               (10)
#define  GDMA_line_buffer_end_clut_layer_sel_mask                                (0x00000C00)
#define  GDMA_line_buffer_end_clut_layer_sel(data)                               (0x00000C00&((data)<<10))
#define  GDMA_line_buffer_end_get_clut_layer_sel(data)                           ((0x00000C00&(data))>>10)

#define  GDMA_osd_status                                                        0x1802FF20
#define  GDMA_osd_status_reg_addr                                                "0xB802FF20"
#define  GDMA_osd_status_reg                                                     0xB802FF20
#define  GDMA_osd_status_inst_addr                                               "0x0005"
#define  set_GDMA_osd_status_reg(data)                                           (*((volatile unsigned int*)GDMA_osd_status_reg)=data)
#define  get_GDMA_osd_status_reg                                                 (*((volatile unsigned int*)GDMA_osd_status_reg))
#define  GDMA_osd_status_osd1_afbc_en_shift                                      (31)
#define  GDMA_osd_status_osd3_status_shift                                       (4)
#define  GDMA_osd_status_osd2_status_shift                                       (2)
#define  GDMA_osd_status_osd1_status_shift                                       (0)
#define  GDMA_osd_status_osd1_afbc_en_mask                                       (0x80000000)
#define  GDMA_osd_status_osd3_status_mask                                        (0x00000030)
#define  GDMA_osd_status_osd2_status_mask                                        (0x0000000C)
#define  GDMA_osd_status_osd1_status_mask                                        (0x00000003)
#define  GDMA_osd_status_osd1_afbc_en(data)                                      (0x80000000&((data)<<31))
#define  GDMA_osd_status_osd3_status(data)                                       (0x00000030&((data)<<4))
#define  GDMA_osd_status_osd2_status(data)                                       (0x0000000C&((data)<<2))
#define  GDMA_osd_status_osd1_status(data)                                       (0x00000003&(data))
#define  GDMA_osd_status_get_osd1_afbc_en(data)                                  ((0x80000000&(data))>>31)
#define  GDMA_osd_status_get_osd3_status(data)                                   ((0x00000030&(data))>>4)
#define  GDMA_osd_status_get_osd2_status(data)                                   ((0x0000000C&(data))>>2)
#define  GDMA_osd_status_get_osd1_status(data)                                   (0x00000003&(data))

#define  GDMA_RTL_IMPROVE                                                       0x1802FF30
#define  GDMA_RTL_IMPROVE_reg_addr                                               "0xB802FF30"
#define  GDMA_RTL_IMPROVE_reg                                                    0xB802FF30
#define  GDMA_RTL_IMPROVE_inst_addr                                              "0x0006"
#define  set_GDMA_RTL_IMPROVE_reg(data)                                          (*((volatile unsigned int*)GDMA_RTL_IMPROVE_reg)=data)
#define  get_GDMA_RTL_IMPROVE_reg                                                (*((volatile unsigned int*)GDMA_RTL_IMPROVE_reg))
#define  GDMA_RTL_IMPROVE_rbuf_share_off_shift                                   (1)
#define  GDMA_RTL_IMPROVE_gating_off_shift                                       (0)
#define  GDMA_RTL_IMPROVE_rbuf_share_off_mask                                    (0x00000002)
#define  GDMA_RTL_IMPROVE_gating_off_mask                                        (0x00000001)
#define  GDMA_RTL_IMPROVE_rbuf_share_off(data)                                   (0x00000002&((data)<<1))
#define  GDMA_RTL_IMPROVE_gating_off(data)                                       (0x00000001&(data))
#define  GDMA_RTL_IMPROVE_get_rbuf_share_off(data)                               ((0x00000002&(data))>>1)
#define  GDMA_RTL_IMPROVE_get_gating_off(data)                                   (0x00000001&(data))

#define  GDMA_OSD1_CTRL                                                         0x1802F200
#define  GDMA_OSD1_CTRL_reg_addr                                                 "0xB802F200"
#define  GDMA_OSD1_CTRL_reg                                                      0xB802F200
#define  GDMA_OSD1_CTRL_inst_addr                                                "0x0007"
#define  set_GDMA_OSD1_CTRL_reg(data)                                            (*((volatile unsigned int*)GDMA_OSD1_CTRL_reg)=data)
#define  get_GDMA_OSD1_CTRL_reg                                                  (*((volatile unsigned int*)GDMA_OSD1_CTRL_reg))
#define  GDMA_OSD1_CTRL_d3_mode_shift                                            (9)
#define  GDMA_OSD1_CTRL_rotate_shift                                             (8)
#define  GDMA_OSD1_CTRL_osd1_en_shift                                            (1)
#define  GDMA_OSD1_CTRL_write_data_shift                                         (0)
#define  GDMA_OSD1_CTRL_d3_mode_mask                                             (0x00000200)
#define  GDMA_OSD1_CTRL_rotate_mask                                              (0x00000100)
#define  GDMA_OSD1_CTRL_osd1_en_mask                                             (0x00000002)
#define  GDMA_OSD1_CTRL_write_data_mask                                          (0x00000001)
#define  GDMA_OSD1_CTRL_d3_mode(data)                                            (0x00000200&((data)<<9))
#define  GDMA_OSD1_CTRL_rotate(data)                                             (0x00000100&((data)<<8))
#define  GDMA_OSD1_CTRL_osd1_en(data)                                            (0x00000002&((data)<<1))
#define  GDMA_OSD1_CTRL_write_data(data)                                         (0x00000001&(data))
#define  GDMA_OSD1_CTRL_get_d3_mode(data)                                        ((0x00000200&(data))>>9)
#define  GDMA_OSD1_CTRL_get_rotate(data)                                         ((0x00000100&(data))>>8)
#define  GDMA_OSD1_CTRL_get_osd1_en(data)                                        ((0x00000002&(data))>>1)
#define  GDMA_OSD1_CTRL_get_write_data(data)                                     (0x00000001&(data))

#define  GDMA_OSD1                                                              0x1802F204
#define  GDMA_OSD1_reg_addr                                                      "0xB802F204"
#define  GDMA_OSD1_reg                                                           0xB802F204
#define  GDMA_OSD1_inst_addr                                                     "0x0008"
#define  set_GDMA_OSD1_reg(data)                                                 (*((volatile unsigned int*)GDMA_OSD1_reg)=data)
#define  get_GDMA_OSD1_reg                                                       (*((volatile unsigned int*)GDMA_OSD1_reg))
#define  GDMA_OSD1_wi_endian_shift                                               (25)
#define  GDMA_OSD1_rgb_out_shift                                                 (24)
#define  GDMA_OSD1_osd_shift                                                     (16)
#define  GDMA_OSD1_clear_region_en_shift                                         (1)
#define  GDMA_OSD1_write_data_shift                                              (0)
#define  GDMA_OSD1_wi_endian_mask                                                (0x02000000)
#define  GDMA_OSD1_rgb_out_mask                                                  (0x01000000)
#define  GDMA_OSD1_osd_mask                                                      (0x00010000)
#define  GDMA_OSD1_clear_region_en_mask                                          (0x00000002)
#define  GDMA_OSD1_write_data_mask                                               (0x00000001)
#define  GDMA_OSD1_wi_endian(data)                                               (0x02000000&((data)<<25))
#define  GDMA_OSD1_rgb_out(data)                                                 (0x01000000&((data)<<24))
#define  GDMA_OSD1_osd(data)                                                     (0x00010000&((data)<<16))
#define  GDMA_OSD1_clear_region_en(data)                                         (0x00000002&((data)<<1))
#define  GDMA_OSD1_write_data(data)                                              (0x00000001&(data))
#define  GDMA_OSD1_get_wi_endian(data)                                           ((0x02000000&(data))>>25)
#define  GDMA_OSD1_get_rgb_out(data)                                             ((0x01000000&(data))>>24)
#define  GDMA_OSD1_get_osd(data)                                                 ((0x00010000&(data))>>16)
#define  GDMA_OSD1_get_clear_region_en(data)                                     ((0x00000002&(data))>>1)
#define  GDMA_OSD1_get_write_data(data)                                          (0x00000001&(data))

#define  GDMA_OSD1_START                                                        0x1802F208
#define  GDMA_OSD1_START_reg_addr                                                "0xB802F208"
#define  GDMA_OSD1_START_reg                                                     0xB802F208
#define  GDMA_OSD1_START_inst_addr                                               "0x0009"
#define  set_GDMA_OSD1_START_reg(data)                                           (*((volatile unsigned int*)GDMA_OSD1_START_reg)=data)
#define  get_GDMA_OSD1_START_reg                                                 (*((volatile unsigned int*)GDMA_OSD1_START_reg))
#define  GDMA_OSD1_START_th_shift                                                (0)
#define  GDMA_OSD1_START_th_mask                                                 (0x00001FFF)
#define  GDMA_OSD1_START_th(data)                                                (0x00001FFF&(data))
#define  GDMA_OSD1_START_get_th(data)                                            (0x00001FFF&(data))

#define  GDMA_OSD1_WI                                                           0x1802F210
#define  GDMA_OSD1_WI_reg_addr                                                   "0xB802F210"
#define  GDMA_OSD1_WI_reg                                                        0xB802F210
#define  GDMA_OSD1_WI_inst_addr                                                  "0x000A"
#define  set_GDMA_OSD1_WI_reg(data)                                              (*((volatile unsigned int*)GDMA_OSD1_WI_reg)=data)
#define  get_GDMA_OSD1_WI_reg                                                    (*((volatile unsigned int*)GDMA_OSD1_WI_reg))
#define  GDMA_OSD1_WI_addr_shift                                                 (0)
#define  GDMA_OSD1_WI_addr_mask                                                  (0xFFFFFFFF)
#define  GDMA_OSD1_WI_addr(data)                                                 (0xFFFFFFFF&(data))
#define  GDMA_OSD1_WI_get_addr(data)                                             (0xFFFFFFFF&(data))

#define  GDMA_OSD1_WI_3D                                                        0x1802F214
#define  GDMA_OSD1_WI_3D_reg_addr                                                "0xB802F214"
#define  GDMA_OSD1_WI_3D_reg                                                     0xB802F214
#define  GDMA_OSD1_WI_3D_inst_addr                                               "0x000B"
#define  set_GDMA_OSD1_WI_3D_reg(data)                                           (*((volatile unsigned int*)GDMA_OSD1_WI_3D_reg)=data)
#define  get_GDMA_OSD1_WI_3D_reg                                                 (*((volatile unsigned int*)GDMA_OSD1_WI_3D_reg))
#define  GDMA_OSD1_WI_3D_addr_shift                                              (0)
#define  GDMA_OSD1_WI_3D_addr_mask                                               (0xFFFFFFFF)
#define  GDMA_OSD1_WI_3D_addr(data)                                              (0xFFFFFFFF&(data))
#define  GDMA_OSD1_WI_3D_get_addr(data)                                          (0xFFFFFFFF&(data))

#define  GDMA_OSD1_SIZE                                                         0x1802F218
#define  GDMA_OSD1_SIZE_reg_addr                                                 "0xB802F218"
#define  GDMA_OSD1_SIZE_reg                                                      0xB802F218
#define  GDMA_OSD1_SIZE_inst_addr                                                "0x000C"
#define  set_GDMA_OSD1_SIZE_reg(data)                                            (*((volatile unsigned int*)GDMA_OSD1_SIZE_reg)=data)
#define  get_GDMA_OSD1_SIZE_reg                                                  (*((volatile unsigned int*)GDMA_OSD1_SIZE_reg))
#define  GDMA_OSD1_SIZE_w_shift                                                  (16)
#define  GDMA_OSD1_SIZE_h_shift                                                  (0)
#define  GDMA_OSD1_SIZE_w_mask                                                   (0x1FFF0000)
#define  GDMA_OSD1_SIZE_h_mask                                                   (0x00001FFF)
#define  GDMA_OSD1_SIZE_w(data)                                                  (0x1FFF0000&((data)<<16))
#define  GDMA_OSD1_SIZE_h(data)                                                  (0x00001FFF&(data))
#define  GDMA_OSD1_SIZE_get_w(data)                                              ((0x1FFF0000&(data))>>16)
#define  GDMA_OSD1_SIZE_get_h(data)                                              (0x00001FFF&(data))

#define  GDMA_OSD1_CC1                                                          0x1802F21C
#define  GDMA_OSD1_CC1_reg_addr                                                  "0xB802F21C"
#define  GDMA_OSD1_CC1_reg                                                       0xB802F21C
#define  GDMA_OSD1_CC1_inst_addr                                                 "0x000D"
#define  set_GDMA_OSD1_CC1_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD1_CC1_reg)=data)
#define  get_GDMA_OSD1_CC1_reg                                                   (*((volatile unsigned int*)GDMA_OSD1_CC1_reg))
#define  GDMA_OSD1_CC1_m01_shift                                                 (16)
#define  GDMA_OSD1_CC1_m00_shift                                                 (0)
#define  GDMA_OSD1_CC1_m01_mask                                                  (0x3FFF0000)
#define  GDMA_OSD1_CC1_m00_mask                                                  (0x00003FFF)
#define  GDMA_OSD1_CC1_m01(data)                                                 (0x3FFF0000&((data)<<16))
#define  GDMA_OSD1_CC1_m00(data)                                                 (0x00003FFF&(data))
#define  GDMA_OSD1_CC1_get_m01(data)                                             ((0x3FFF0000&(data))>>16)
#define  GDMA_OSD1_CC1_get_m00(data)                                             (0x00003FFF&(data))

#define  GDMA_OSD1_CC2                                                          0x1802F220
#define  GDMA_OSD1_CC2_reg_addr                                                  "0xB802F220"
#define  GDMA_OSD1_CC2_reg                                                       0xB802F220
#define  GDMA_OSD1_CC2_inst_addr                                                 "0x000E"
#define  set_GDMA_OSD1_CC2_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD1_CC2_reg)=data)
#define  get_GDMA_OSD1_CC2_reg                                                   (*((volatile unsigned int*)GDMA_OSD1_CC2_reg))
#define  GDMA_OSD1_CC2_m10_shift                                                 (16)
#define  GDMA_OSD1_CC2_m02_shift                                                 (0)
#define  GDMA_OSD1_CC2_m10_mask                                                  (0x3FFF0000)
#define  GDMA_OSD1_CC2_m02_mask                                                  (0x00003FFF)
#define  GDMA_OSD1_CC2_m10(data)                                                 (0x3FFF0000&((data)<<16))
#define  GDMA_OSD1_CC2_m02(data)                                                 (0x00003FFF&(data))
#define  GDMA_OSD1_CC2_get_m10(data)                                             ((0x3FFF0000&(data))>>16)
#define  GDMA_OSD1_CC2_get_m02(data)                                             (0x00003FFF&(data))

#define  GDMA_OSD1_CC3                                                          0x1802F224
#define  GDMA_OSD1_CC3_reg_addr                                                  "0xB802F224"
#define  GDMA_OSD1_CC3_reg                                                       0xB802F224
#define  GDMA_OSD1_CC3_inst_addr                                                 "0x000F"
#define  set_GDMA_OSD1_CC3_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD1_CC3_reg)=data)
#define  get_GDMA_OSD1_CC3_reg                                                   (*((volatile unsigned int*)GDMA_OSD1_CC3_reg))
#define  GDMA_OSD1_CC3_m12_shift                                                 (16)
#define  GDMA_OSD1_CC3_m11_shift                                                 (0)
#define  GDMA_OSD1_CC3_m12_mask                                                  (0x3FFF0000)
#define  GDMA_OSD1_CC3_m11_mask                                                  (0x00003FFF)
#define  GDMA_OSD1_CC3_m12(data)                                                 (0x3FFF0000&((data)<<16))
#define  GDMA_OSD1_CC3_m11(data)                                                 (0x00003FFF&(data))
#define  GDMA_OSD1_CC3_get_m12(data)                                             ((0x3FFF0000&(data))>>16)
#define  GDMA_OSD1_CC3_get_m11(data)                                             (0x00003FFF&(data))

#define  GDMA_OSD1_CC4                                                          0x1802F228
#define  GDMA_OSD1_CC4_reg_addr                                                  "0xB802F228"
#define  GDMA_OSD1_CC4_reg                                                       0xB802F228
#define  GDMA_OSD1_CC4_inst_addr                                                 "0x0010"
#define  set_GDMA_OSD1_CC4_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD1_CC4_reg)=data)
#define  get_GDMA_OSD1_CC4_reg                                                   (*((volatile unsigned int*)GDMA_OSD1_CC4_reg))
#define  GDMA_OSD1_CC4_m21_shift                                                 (16)
#define  GDMA_OSD1_CC4_m20_shift                                                 (0)
#define  GDMA_OSD1_CC4_m21_mask                                                  (0x3FFF0000)
#define  GDMA_OSD1_CC4_m20_mask                                                  (0x00003FFF)
#define  GDMA_OSD1_CC4_m21(data)                                                 (0x3FFF0000&((data)<<16))
#define  GDMA_OSD1_CC4_m20(data)                                                 (0x00003FFF&(data))
#define  GDMA_OSD1_CC4_get_m21(data)                                             ((0x3FFF0000&(data))>>16)
#define  GDMA_OSD1_CC4_get_m20(data)                                             (0x00003FFF&(data))

#define  GDMA_OSD1_CC5                                                          0x1802F22C
#define  GDMA_OSD1_CC5_reg_addr                                                  "0xB802F22C"
#define  GDMA_OSD1_CC5_reg                                                       0xB802F22C
#define  GDMA_OSD1_CC5_inst_addr                                                 "0x0011"
#define  set_GDMA_OSD1_CC5_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD1_CC5_reg)=data)
#define  get_GDMA_OSD1_CC5_reg                                                   (*((volatile unsigned int*)GDMA_OSD1_CC5_reg))
#define  GDMA_OSD1_CC5_m22_shift                                                 (0)
#define  GDMA_OSD1_CC5_m22_mask                                                  (0x00003FFF)
#define  GDMA_OSD1_CC5_m22(data)                                                 (0x00003FFF&(data))
#define  GDMA_OSD1_CC5_get_m22(data)                                             (0x00003FFF&(data))

#define  GDMA_OSD1_CC6                                                          0x1802F230
#define  GDMA_OSD1_CC6_reg_addr                                                  "0xB802F230"
#define  GDMA_OSD1_CC6_reg                                                       0xB802F230
#define  GDMA_OSD1_CC6_inst_addr                                                 "0x0012"
#define  set_GDMA_OSD1_CC6_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD1_CC6_reg)=data)
#define  get_GDMA_OSD1_CC6_reg                                                   (*((volatile unsigned int*)GDMA_OSD1_CC6_reg))
#define  GDMA_OSD1_CC6_a2_shift                                                  (18)
#define  GDMA_OSD1_CC6_a1_shift                                                  (9)
#define  GDMA_OSD1_CC6_a0_shift                                                  (0)
#define  GDMA_OSD1_CC6_a2_mask                                                   (0x07FC0000)
#define  GDMA_OSD1_CC6_a1_mask                                                   (0x0003FE00)
#define  GDMA_OSD1_CC6_a0_mask                                                   (0x000001FF)
#define  GDMA_OSD1_CC6_a2(data)                                                  (0x07FC0000&((data)<<18))
#define  GDMA_OSD1_CC6_a1(data)                                                  (0x0003FE00&((data)<<9))
#define  GDMA_OSD1_CC6_a0(data)                                                  (0x000001FF&(data))
#define  GDMA_OSD1_CC6_get_a2(data)                                              ((0x07FC0000&(data))>>18)
#define  GDMA_OSD1_CC6_get_a1(data)                                              ((0x0003FE00&(data))>>9)
#define  GDMA_OSD1_CC6_get_a0(data)                                              (0x000001FF&(data))

#define  GDMA_OSD1_CC7                                                          0x1802F234
#define  GDMA_OSD1_CC7_reg_addr                                                  "0xB802F234"
#define  GDMA_OSD1_CC7_reg                                                       0xB802F234
#define  GDMA_OSD1_CC7_inst_addr                                                 "0x0013"
#define  set_GDMA_OSD1_CC7_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD1_CC7_reg)=data)
#define  get_GDMA_OSD1_CC7_reg                                                   (*((volatile unsigned int*)GDMA_OSD1_CC7_reg))
#define  GDMA_OSD1_CC7_b2_shift                                                  (18)
#define  GDMA_OSD1_CC7_b1_shift                                                  (9)
#define  GDMA_OSD1_CC7_b0_shift                                                  (0)
#define  GDMA_OSD1_CC7_b2_mask                                                   (0x07FC0000)
#define  GDMA_OSD1_CC7_b1_mask                                                   (0x0003FE00)
#define  GDMA_OSD1_CC7_b0_mask                                                   (0x000001FF)
#define  GDMA_OSD1_CC7_b2(data)                                                  (0x07FC0000&((data)<<18))
#define  GDMA_OSD1_CC7_b1(data)                                                  (0x0003FE00&((data)<<9))
#define  GDMA_OSD1_CC7_b0(data)                                                  (0x000001FF&(data))
#define  GDMA_OSD1_CC7_get_b2(data)                                              ((0x07FC0000&(data))>>18)
#define  GDMA_OSD1_CC7_get_b1(data)                                              ((0x0003FE00&(data))>>9)
#define  GDMA_OSD1_CC7_get_b0(data)                                              (0x000001FF&(data))

#define  GDMA_OSD1_CLEAR1                                                       0x1802F280
#define  GDMA_OSD1_CLEAR1_reg_addr                                               "0xB802F280"
#define  GDMA_OSD1_CLEAR1_reg                                                    0xB802F280
#define  GDMA_OSD1_CLEAR1_inst_addr                                              "0x0014"
#define  set_GDMA_OSD1_CLEAR1_reg(data)                                          (*((volatile unsigned int*)GDMA_OSD1_CLEAR1_reg)=data)
#define  get_GDMA_OSD1_CLEAR1_reg                                                (*((volatile unsigned int*)GDMA_OSD1_CLEAR1_reg))
#define  GDMA_OSD1_CLEAR1_x_sta_shift                                            (16)
#define  GDMA_OSD1_CLEAR1_x_end_shift                                            (0)
#define  GDMA_OSD1_CLEAR1_x_sta_mask                                             (0x1FFF0000)
#define  GDMA_OSD1_CLEAR1_x_end_mask                                             (0x00001FFF)
#define  GDMA_OSD1_CLEAR1_x_sta(data)                                            (0x1FFF0000&((data)<<16))
#define  GDMA_OSD1_CLEAR1_x_end(data)                                            (0x00001FFF&(data))
#define  GDMA_OSD1_CLEAR1_get_x_sta(data)                                        ((0x1FFF0000&(data))>>16)
#define  GDMA_OSD1_CLEAR1_get_x_end(data)                                        (0x00001FFF&(data))

#define  GDMA_OSD1_CLEAR2                                                       0x1802F284
#define  GDMA_OSD1_CLEAR2_reg_addr                                               "0xB802F284"
#define  GDMA_OSD1_CLEAR2_reg                                                    0xB802F284
#define  GDMA_OSD1_CLEAR2_inst_addr                                              "0x0015"
#define  set_GDMA_OSD1_CLEAR2_reg(data)                                          (*((volatile unsigned int*)GDMA_OSD1_CLEAR2_reg)=data)
#define  get_GDMA_OSD1_CLEAR2_reg                                                (*((volatile unsigned int*)GDMA_OSD1_CLEAR2_reg))
#define  GDMA_OSD1_CLEAR2_y_sta_shift                                            (16)
#define  GDMA_OSD1_CLEAR2_y_end_shift                                            (0)
#define  GDMA_OSD1_CLEAR2_y_sta_mask                                             (0x1FFF0000)
#define  GDMA_OSD1_CLEAR2_y_end_mask                                             (0x00001FFF)
#define  GDMA_OSD1_CLEAR2_y_sta(data)                                            (0x1FFF0000&((data)<<16))
#define  GDMA_OSD1_CLEAR2_y_end(data)                                            (0x00001FFF&(data))
#define  GDMA_OSD1_CLEAR2_get_y_sta(data)                                        ((0x1FFF0000&(data))>>16)
#define  GDMA_OSD1_CLEAR2_get_y_end(data)                                        (0x00001FFF&(data))

#define  GDMA_OSD2_CTRL                                                         0x1802F300
#define  GDMA_OSD2_CTRL_reg_addr                                                 "0xB802F300"
#define  GDMA_OSD2_CTRL_reg                                                      0xB802F300
#define  GDMA_OSD2_CTRL_inst_addr                                                "0x0016"
#define  set_GDMA_OSD2_CTRL_reg(data)                                            (*((volatile unsigned int*)GDMA_OSD2_CTRL_reg)=data)
#define  get_GDMA_OSD2_CTRL_reg                                                  (*((volatile unsigned int*)GDMA_OSD2_CTRL_reg))
#define  GDMA_OSD2_CTRL_d3_mode_shift                                            (9)
#define  GDMA_OSD2_CTRL_rotate_shift                                             (8)
#define  GDMA_OSD2_CTRL_osd2_en_shift                                            (1)
#define  GDMA_OSD2_CTRL_write_data_shift                                         (0)
#define  GDMA_OSD2_CTRL_d3_mode_mask                                             (0x00000200)
#define  GDMA_OSD2_CTRL_rotate_mask                                              (0x00000100)
#define  GDMA_OSD2_CTRL_osd2_en_mask                                             (0x00000002)
#define  GDMA_OSD2_CTRL_write_data_mask                                          (0x00000001)
#define  GDMA_OSD2_CTRL_d3_mode(data)                                            (0x00000200&((data)<<9))
#define  GDMA_OSD2_CTRL_rotate(data)                                             (0x00000100&((data)<<8))
#define  GDMA_OSD2_CTRL_osd2_en(data)                                            (0x00000002&((data)<<1))
#define  GDMA_OSD2_CTRL_write_data(data)                                         (0x00000001&(data))
#define  GDMA_OSD2_CTRL_get_d3_mode(data)                                        ((0x00000200&(data))>>9)
#define  GDMA_OSD2_CTRL_get_rotate(data)                                         ((0x00000100&(data))>>8)
#define  GDMA_OSD2_CTRL_get_osd2_en(data)                                        ((0x00000002&(data))>>1)
#define  GDMA_OSD2_CTRL_get_write_data(data)                                     (0x00000001&(data))

#define  GDMA_OSD2                                                              0x1802F304
#define  GDMA_OSD2_reg_addr                                                      "0xB802F304"
#define  GDMA_OSD2_reg                                                           0xB802F304
#define  GDMA_OSD2_inst_addr                                                     "0x0017"
#define  set_GDMA_OSD2_reg(data)                                                 (*((volatile unsigned int*)GDMA_OSD2_reg)=data)
#define  get_GDMA_OSD2_reg                                                       (*((volatile unsigned int*)GDMA_OSD2_reg))
#define  GDMA_OSD2_wi_endian_shift                                               (25)
#define  GDMA_OSD2_rgb_out_shift                                                 (24)
#define  GDMA_OSD2_osd_shift                                                     (16)
#define  GDMA_OSD2_clear_region_en_shift                                         (1)
#define  GDMA_OSD2_write_data_shift                                              (0)
#define  GDMA_OSD2_wi_endian_mask                                                (0x02000000)
#define  GDMA_OSD2_rgb_out_mask                                                  (0x01000000)
#define  GDMA_OSD2_osd_mask                                                      (0x00010000)
#define  GDMA_OSD2_clear_region_en_mask                                          (0x00000002)
#define  GDMA_OSD2_write_data_mask                                               (0x00000001)
#define  GDMA_OSD2_wi_endian(data)                                               (0x02000000&((data)<<25))
#define  GDMA_OSD2_rgb_out(data)                                                 (0x01000000&((data)<<24))
#define  GDMA_OSD2_osd(data)                                                     (0x00010000&((data)<<16))
#define  GDMA_OSD2_clear_region_en(data)                                         (0x00000002&((data)<<1))
#define  GDMA_OSD2_write_data(data)                                              (0x00000001&(data))
#define  GDMA_OSD2_get_wi_endian(data)                                           ((0x02000000&(data))>>25)
#define  GDMA_OSD2_get_rgb_out(data)                                             ((0x01000000&(data))>>24)
#define  GDMA_OSD2_get_osd(data)                                                 ((0x00010000&(data))>>16)
#define  GDMA_OSD2_get_clear_region_en(data)                                     ((0x00000002&(data))>>1)
#define  GDMA_OSD2_get_write_data(data)                                          (0x00000001&(data))

#define  GDMA_OSD2_START                                                        0x1802F308
#define  GDMA_OSD2_START_reg_addr                                                "0xB802F308"
#define  GDMA_OSD2_START_reg                                                     0xB802F308
#define  GDMA_OSD2_START_inst_addr                                               "0x0018"
#define  set_GDMA_OSD2_START_reg(data)                                           (*((volatile unsigned int*)GDMA_OSD2_START_reg)=data)
#define  get_GDMA_OSD2_START_reg                                                 (*((volatile unsigned int*)GDMA_OSD2_START_reg))
#define  GDMA_OSD2_START_th_shift                                                (0)
#define  GDMA_OSD2_START_th_mask                                                 (0x00001FFF)
#define  GDMA_OSD2_START_th(data)                                                (0x00001FFF&(data))
#define  GDMA_OSD2_START_get_th(data)                                            (0x00001FFF&(data))

#define  GDMA_OSD2_WI                                                           0x1802F310
#define  GDMA_OSD2_WI_reg_addr                                                   "0xB802F310"
#define  GDMA_OSD2_WI_reg                                                        0xB802F310
#define  GDMA_OSD2_WI_inst_addr                                                  "0x0019"
#define  set_GDMA_OSD2_WI_reg(data)                                              (*((volatile unsigned int*)GDMA_OSD2_WI_reg)=data)
#define  get_GDMA_OSD2_WI_reg                                                    (*((volatile unsigned int*)GDMA_OSD2_WI_reg))
#define  GDMA_OSD2_WI_addr_shift                                                 (0)
#define  GDMA_OSD2_WI_addr_mask                                                  (0xFFFFFFFF)
#define  GDMA_OSD2_WI_addr(data)                                                 (0xFFFFFFFF&(data))
#define  GDMA_OSD2_WI_get_addr(data)                                             (0xFFFFFFFF&(data))

#define  GDMA_OSD2_WI_3D                                                        0x1802F314
#define  GDMA_OSD2_WI_3D_reg_addr                                                "0xB802F314"
#define  GDMA_OSD2_WI_3D_reg                                                     0xB802F314
#define  GDMA_OSD2_WI_3D_inst_addr                                               "0x001A"
#define  set_GDMA_OSD2_WI_3D_reg(data)                                           (*((volatile unsigned int*)GDMA_OSD2_WI_3D_reg)=data)
#define  get_GDMA_OSD2_WI_3D_reg                                                 (*((volatile unsigned int*)GDMA_OSD2_WI_3D_reg))
#define  GDMA_OSD2_WI_3D_addr_shift                                              (0)
#define  GDMA_OSD2_WI_3D_addr_mask                                               (0xFFFFFFFF)
#define  GDMA_OSD2_WI_3D_addr(data)                                              (0xFFFFFFFF&(data))
#define  GDMA_OSD2_WI_3D_get_addr(data)                                          (0xFFFFFFFF&(data))

#define  GDMA_OSD2_SIZE                                                         0x1802F318
#define  GDMA_OSD2_SIZE_reg_addr                                                 "0xB802F318"
#define  GDMA_OSD2_SIZE_reg                                                      0xB802F318
#define  GDMA_OSD2_SIZE_inst_addr                                                "0x001B"
#define  set_GDMA_OSD2_SIZE_reg(data)                                            (*((volatile unsigned int*)GDMA_OSD2_SIZE_reg)=data)
#define  get_GDMA_OSD2_SIZE_reg                                                  (*((volatile unsigned int*)GDMA_OSD2_SIZE_reg))
#define  GDMA_OSD2_SIZE_w_shift                                                  (16)
#define  GDMA_OSD2_SIZE_h_shift                                                  (0)
#define  GDMA_OSD2_SIZE_w_mask                                                   (0x1FFF0000)
#define  GDMA_OSD2_SIZE_h_mask                                                   (0x00001FFF)
#define  GDMA_OSD2_SIZE_w(data)                                                  (0x1FFF0000&((data)<<16))
#define  GDMA_OSD2_SIZE_h(data)                                                  (0x00001FFF&(data))
#define  GDMA_OSD2_SIZE_get_w(data)                                              ((0x1FFF0000&(data))>>16)
#define  GDMA_OSD2_SIZE_get_h(data)                                              (0x00001FFF&(data))

#define  GDMA_OSD2_CC1                                                          0x1802F31C
#define  GDMA_OSD2_CC1_reg_addr                                                  "0xB802F31C"
#define  GDMA_OSD2_CC1_reg                                                       0xB802F31C
#define  GDMA_OSD2_CC1_inst_addr                                                 "0x001C"
#define  set_GDMA_OSD2_CC1_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD2_CC1_reg)=data)
#define  get_GDMA_OSD2_CC1_reg                                                   (*((volatile unsigned int*)GDMA_OSD2_CC1_reg))
#define  GDMA_OSD2_CC1_m01_shift                                                 (16)
#define  GDMA_OSD2_CC1_m00_shift                                                 (0)
#define  GDMA_OSD2_CC1_m01_mask                                                  (0x3FFF0000)
#define  GDMA_OSD2_CC1_m00_mask                                                  (0x00003FFF)
#define  GDMA_OSD2_CC1_m01(data)                                                 (0x3FFF0000&((data)<<16))
#define  GDMA_OSD2_CC1_m00(data)                                                 (0x00003FFF&(data))
#define  GDMA_OSD2_CC1_get_m01(data)                                             ((0x3FFF0000&(data))>>16)
#define  GDMA_OSD2_CC1_get_m00(data)                                             (0x00003FFF&(data))

#define  GDMA_OSD2_CC2                                                          0x1802F320
#define  GDMA_OSD2_CC2_reg_addr                                                  "0xB802F320"
#define  GDMA_OSD2_CC2_reg                                                       0xB802F320
#define  GDMA_OSD2_CC2_inst_addr                                                 "0x001D"
#define  set_GDMA_OSD2_CC2_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD2_CC2_reg)=data)
#define  get_GDMA_OSD2_CC2_reg                                                   (*((volatile unsigned int*)GDMA_OSD2_CC2_reg))
#define  GDMA_OSD2_CC2_m10_shift                                                 (16)
#define  GDMA_OSD2_CC2_m02_shift                                                 (0)
#define  GDMA_OSD2_CC2_m10_mask                                                  (0x3FFF0000)
#define  GDMA_OSD2_CC2_m02_mask                                                  (0x00003FFF)
#define  GDMA_OSD2_CC2_m10(data)                                                 (0x3FFF0000&((data)<<16))
#define  GDMA_OSD2_CC2_m02(data)                                                 (0x00003FFF&(data))
#define  GDMA_OSD2_CC2_get_m10(data)                                             ((0x3FFF0000&(data))>>16)
#define  GDMA_OSD2_CC2_get_m02(data)                                             (0x00003FFF&(data))

#define  GDMA_OSD2_CC3                                                          0x1802F324
#define  GDMA_OSD2_CC3_reg_addr                                                  "0xB802F324"
#define  GDMA_OSD2_CC3_reg                                                       0xB802F324
#define  GDMA_OSD2_CC3_inst_addr                                                 "0x001E"
#define  set_GDMA_OSD2_CC3_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD2_CC3_reg)=data)
#define  get_GDMA_OSD2_CC3_reg                                                   (*((volatile unsigned int*)GDMA_OSD2_CC3_reg))
#define  GDMA_OSD2_CC3_m12_shift                                                 (16)
#define  GDMA_OSD2_CC3_m11_shift                                                 (0)
#define  GDMA_OSD2_CC3_m12_mask                                                  (0x3FFF0000)
#define  GDMA_OSD2_CC3_m11_mask                                                  (0x00003FFF)
#define  GDMA_OSD2_CC3_m12(data)                                                 (0x3FFF0000&((data)<<16))
#define  GDMA_OSD2_CC3_m11(data)                                                 (0x00003FFF&(data))
#define  GDMA_OSD2_CC3_get_m12(data)                                             ((0x3FFF0000&(data))>>16)
#define  GDMA_OSD2_CC3_get_m11(data)                                             (0x00003FFF&(data))

#define  GDMA_OSD2_CC4                                                          0x1802F328
#define  GDMA_OSD2_CC4_reg_addr                                                  "0xB802F328"
#define  GDMA_OSD2_CC4_reg                                                       0xB802F328
#define  GDMA_OSD2_CC4_inst_addr                                                 "0x001F"
#define  set_GDMA_OSD2_CC4_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD2_CC4_reg)=data)
#define  get_GDMA_OSD2_CC4_reg                                                   (*((volatile unsigned int*)GDMA_OSD2_CC4_reg))
#define  GDMA_OSD2_CC4_m21_shift                                                 (16)
#define  GDMA_OSD2_CC4_m20_shift                                                 (0)
#define  GDMA_OSD2_CC4_m21_mask                                                  (0x3FFF0000)
#define  GDMA_OSD2_CC4_m20_mask                                                  (0x00003FFF)
#define  GDMA_OSD2_CC4_m21(data)                                                 (0x3FFF0000&((data)<<16))
#define  GDMA_OSD2_CC4_m20(data)                                                 (0x00003FFF&(data))
#define  GDMA_OSD2_CC4_get_m21(data)                                             ((0x3FFF0000&(data))>>16)
#define  GDMA_OSD2_CC4_get_m20(data)                                             (0x00003FFF&(data))

#define  GDMA_OSD2_CC5                                                          0x1802F32C
#define  GDMA_OSD2_CC5_reg_addr                                                  "0xB802F32C"
#define  GDMA_OSD2_CC5_reg                                                       0xB802F32C
#define  GDMA_OSD2_CC5_inst_addr                                                 "0x0020"
#define  set_GDMA_OSD2_CC5_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD2_CC5_reg)=data)
#define  get_GDMA_OSD2_CC5_reg                                                   (*((volatile unsigned int*)GDMA_OSD2_CC5_reg))
#define  GDMA_OSD2_CC5_m22_shift                                                 (0)
#define  GDMA_OSD2_CC5_m22_mask                                                  (0x00003FFF)
#define  GDMA_OSD2_CC5_m22(data)                                                 (0x00003FFF&(data))
#define  GDMA_OSD2_CC5_get_m22(data)                                             (0x00003FFF&(data))

#define  GDMA_OSD2_CC6                                                          0x1802F330
#define  GDMA_OSD2_CC6_reg_addr                                                  "0xB802F330"
#define  GDMA_OSD2_CC6_reg                                                       0xB802F330
#define  GDMA_OSD2_CC6_inst_addr                                                 "0x0021"
#define  set_GDMA_OSD2_CC6_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD2_CC6_reg)=data)
#define  get_GDMA_OSD2_CC6_reg                                                   (*((volatile unsigned int*)GDMA_OSD2_CC6_reg))
#define  GDMA_OSD2_CC6_a2_shift                                                  (18)
#define  GDMA_OSD2_CC6_a1_shift                                                  (9)
#define  GDMA_OSD2_CC6_a0_shift                                                  (0)
#define  GDMA_OSD2_CC6_a2_mask                                                   (0x07FC0000)
#define  GDMA_OSD2_CC6_a1_mask                                                   (0x0003FE00)
#define  GDMA_OSD2_CC6_a0_mask                                                   (0x000001FF)
#define  GDMA_OSD2_CC6_a2(data)                                                  (0x07FC0000&((data)<<18))
#define  GDMA_OSD2_CC6_a1(data)                                                  (0x0003FE00&((data)<<9))
#define  GDMA_OSD2_CC6_a0(data)                                                  (0x000001FF&(data))
#define  GDMA_OSD2_CC6_get_a2(data)                                              ((0x07FC0000&(data))>>18)
#define  GDMA_OSD2_CC6_get_a1(data)                                              ((0x0003FE00&(data))>>9)
#define  GDMA_OSD2_CC6_get_a0(data)                                              (0x000001FF&(data))

#define  GDMA_OSD2_CC7                                                          0x1802F334
#define  GDMA_OSD2_CC7_reg_addr                                                  "0xB802F334"
#define  GDMA_OSD2_CC7_reg                                                       0xB802F334
#define  GDMA_OSD2_CC7_inst_addr                                                 "0x0022"
#define  set_GDMA_OSD2_CC7_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD2_CC7_reg)=data)
#define  get_GDMA_OSD2_CC7_reg                                                   (*((volatile unsigned int*)GDMA_OSD2_CC7_reg))
#define  GDMA_OSD2_CC7_b2_shift                                                  (18)
#define  GDMA_OSD2_CC7_b1_shift                                                  (9)
#define  GDMA_OSD2_CC7_b0_shift                                                  (0)
#define  GDMA_OSD2_CC7_b2_mask                                                   (0x07FC0000)
#define  GDMA_OSD2_CC7_b1_mask                                                   (0x0003FE00)
#define  GDMA_OSD2_CC7_b0_mask                                                   (0x000001FF)
#define  GDMA_OSD2_CC7_b2(data)                                                  (0x07FC0000&((data)<<18))
#define  GDMA_OSD2_CC7_b1(data)                                                  (0x0003FE00&((data)<<9))
#define  GDMA_OSD2_CC7_b0(data)                                                  (0x000001FF&(data))
#define  GDMA_OSD2_CC7_get_b2(data)                                              ((0x07FC0000&(data))>>18)
#define  GDMA_OSD2_CC7_get_b1(data)                                              ((0x0003FE00&(data))>>9)
#define  GDMA_OSD2_CC7_get_b0(data)                                              (0x000001FF&(data))

#define  GDMA_OSD2_CLEAR1                                                       0x1802F380
#define  GDMA_OSD2_CLEAR1_reg_addr                                               "0xB802F380"
#define  GDMA_OSD2_CLEAR1_reg                                                    0xB802F380
#define  GDMA_OSD2_CLEAR1_inst_addr                                              "0x0023"
#define  set_GDMA_OSD2_CLEAR1_reg(data)                                          (*((volatile unsigned int*)GDMA_OSD2_CLEAR1_reg)=data)
#define  get_GDMA_OSD2_CLEAR1_reg                                                (*((volatile unsigned int*)GDMA_OSD2_CLEAR1_reg))
#define  GDMA_OSD2_CLEAR1_x_sta_shift                                            (16)
#define  GDMA_OSD2_CLEAR1_x_end_shift                                            (0)
#define  GDMA_OSD2_CLEAR1_x_sta_mask                                             (0x1FFF0000)
#define  GDMA_OSD2_CLEAR1_x_end_mask                                             (0x00001FFF)
#define  GDMA_OSD2_CLEAR1_x_sta(data)                                            (0x1FFF0000&((data)<<16))
#define  GDMA_OSD2_CLEAR1_x_end(data)                                            (0x00001FFF&(data))
#define  GDMA_OSD2_CLEAR1_get_x_sta(data)                                        ((0x1FFF0000&(data))>>16)
#define  GDMA_OSD2_CLEAR1_get_x_end(data)                                        (0x00001FFF&(data))

#define  GDMA_OSD2_CLEAR2                                                       0x1802F384
#define  GDMA_OSD2_CLEAR2_reg_addr                                               "0xB802F384"
#define  GDMA_OSD2_CLEAR2_reg                                                    0xB802F384
#define  GDMA_OSD2_CLEAR2_inst_addr                                              "0x0024"
#define  set_GDMA_OSD2_CLEAR2_reg(data)                                          (*((volatile unsigned int*)GDMA_OSD2_CLEAR2_reg)=data)
#define  get_GDMA_OSD2_CLEAR2_reg                                                (*((volatile unsigned int*)GDMA_OSD2_CLEAR2_reg))
#define  GDMA_OSD2_CLEAR2_y_sta_shift                                            (16)
#define  GDMA_OSD2_CLEAR2_y_end_shift                                            (0)
#define  GDMA_OSD2_CLEAR2_y_sta_mask                                             (0x1FFF0000)
#define  GDMA_OSD2_CLEAR2_y_end_mask                                             (0x00001FFF)
#define  GDMA_OSD2_CLEAR2_y_sta(data)                                            (0x1FFF0000&((data)<<16))
#define  GDMA_OSD2_CLEAR2_y_end(data)                                            (0x00001FFF&(data))
#define  GDMA_OSD2_CLEAR2_get_y_sta(data)                                        ((0x1FFF0000&(data))>>16)
#define  GDMA_OSD2_CLEAR2_get_y_end(data)                                        (0x00001FFF&(data))

#define  GDMA_OSD3_CTRL                                                         0x1802F400
#define  GDMA_OSD3_CTRL_reg_addr                                                 "0xB802F400"
#define  GDMA_OSD3_CTRL_reg                                                      0xB802F400
#define  GDMA_OSD3_CTRL_inst_addr                                                "0x0025"
#define  set_GDMA_OSD3_CTRL_reg(data)                                            (*((volatile unsigned int*)GDMA_OSD3_CTRL_reg)=data)
#define  get_GDMA_OSD3_CTRL_reg                                                  (*((volatile unsigned int*)GDMA_OSD3_CTRL_reg))
#define  GDMA_OSD3_CTRL_d3_mode_shift                                            (9)
#define  GDMA_OSD3_CTRL_rotate_shift                                             (8)
#define  GDMA_OSD3_CTRL_osd3_en_shift                                            (1)
#define  GDMA_OSD3_CTRL_write_data_shift                                         (0)
#define  GDMA_OSD3_CTRL_d3_mode_mask                                             (0x00000200)
#define  GDMA_OSD3_CTRL_rotate_mask                                              (0x00000100)
#define  GDMA_OSD3_CTRL_osd3_en_mask                                             (0x00000002)
#define  GDMA_OSD3_CTRL_write_data_mask                                          (0x00000001)
#define  GDMA_OSD3_CTRL_d3_mode(data)                                            (0x00000200&((data)<<9))
#define  GDMA_OSD3_CTRL_rotate(data)                                             (0x00000100&((data)<<8))
#define  GDMA_OSD3_CTRL_osd3_en(data)                                            (0x00000002&((data)<<1))
#define  GDMA_OSD3_CTRL_write_data(data)                                         (0x00000001&(data))
#define  GDMA_OSD3_CTRL_get_d3_mode(data)                                        ((0x00000200&(data))>>9)
#define  GDMA_OSD3_CTRL_get_rotate(data)                                         ((0x00000100&(data))>>8)
#define  GDMA_OSD3_CTRL_get_osd3_en(data)                                        ((0x00000002&(data))>>1)
#define  GDMA_OSD3_CTRL_get_write_data(data)                                     (0x00000001&(data))

#define  GDMA_OSD3                                                              0x1802F404
#define  GDMA_OSD3_reg_addr                                                      "0xB802F404"
#define  GDMA_OSD3_reg                                                           0xB802F404
#define  GDMA_OSD3_inst_addr                                                     "0x0026"
#define  set_GDMA_OSD3_reg(data)                                                 (*((volatile unsigned int*)GDMA_OSD3_reg)=data)
#define  get_GDMA_OSD3_reg                                                       (*((volatile unsigned int*)GDMA_OSD3_reg))
#define  GDMA_OSD3_wi_endian_shift                                               (25)
#define  GDMA_OSD3_rgb_out_shift                                                 (24)
#define  GDMA_OSD3_osd_shift                                                     (16)
#define  GDMA_OSD3_clear_region_en_shift                                         (1)
#define  GDMA_OSD3_write_data_shift                                              (0)
#define  GDMA_OSD3_wi_endian_mask                                                (0x02000000)
#define  GDMA_OSD3_rgb_out_mask                                                  (0x01000000)
#define  GDMA_OSD3_osd_mask                                                      (0x00010000)
#define  GDMA_OSD3_clear_region_en_mask                                          (0x00000002)
#define  GDMA_OSD3_write_data_mask                                               (0x00000001)
#define  GDMA_OSD3_wi_endian(data)                                               (0x02000000&((data)<<25))
#define  GDMA_OSD3_rgb_out(data)                                                 (0x01000000&((data)<<24))
#define  GDMA_OSD3_osd(data)                                                     (0x00010000&((data)<<16))
#define  GDMA_OSD3_clear_region_en(data)                                         (0x00000002&((data)<<1))
#define  GDMA_OSD3_write_data(data)                                              (0x00000001&(data))
#define  GDMA_OSD3_get_wi_endian(data)                                           ((0x02000000&(data))>>25)
#define  GDMA_OSD3_get_rgb_out(data)                                             ((0x01000000&(data))>>24)
#define  GDMA_OSD3_get_osd(data)                                                 ((0x00010000&(data))>>16)
#define  GDMA_OSD3_get_clear_region_en(data)                                     ((0x00000002&(data))>>1)
#define  GDMA_OSD3_get_write_data(data)                                          (0x00000001&(data))

#define  GDMA_OSD3_START                                                        0x1802F408
#define  GDMA_OSD3_START_reg_addr                                                "0xB802F408"
#define  GDMA_OSD3_START_reg                                                     0xB802F408
#define  GDMA_OSD3_START_inst_addr                                               "0x0027"
#define  set_GDMA_OSD3_START_reg(data)                                           (*((volatile unsigned int*)GDMA_OSD3_START_reg)=data)
#define  get_GDMA_OSD3_START_reg                                                 (*((volatile unsigned int*)GDMA_OSD3_START_reg))
#define  GDMA_OSD3_START_th_shift                                                (0)
#define  GDMA_OSD3_START_th_mask                                                 (0x00001FFF)
#define  GDMA_OSD3_START_th(data)                                                (0x00001FFF&(data))
#define  GDMA_OSD3_START_get_th(data)                                            (0x00001FFF&(data))

#define  GDMA_OSD3_WI                                                           0x1802F410
#define  GDMA_OSD3_WI_reg_addr                                                   "0xB802F410"
#define  GDMA_OSD3_WI_reg                                                        0xB802F410
#define  GDMA_OSD3_WI_inst_addr                                                  "0x0028"
#define  set_GDMA_OSD3_WI_reg(data)                                              (*((volatile unsigned int*)GDMA_OSD3_WI_reg)=data)
#define  get_GDMA_OSD3_WI_reg                                                    (*((volatile unsigned int*)GDMA_OSD3_WI_reg))
#define  GDMA_OSD3_WI_addr_shift                                                 (0)
#define  GDMA_OSD3_WI_addr_mask                                                  (0xFFFFFFFF)
#define  GDMA_OSD3_WI_addr(data)                                                 (0xFFFFFFFF&(data))
#define  GDMA_OSD3_WI_get_addr(data)                                             (0xFFFFFFFF&(data))

#define  GDMA_OSD3_WI_3D                                                        0x1802F414
#define  GDMA_OSD3_WI_3D_reg_addr                                                "0xB802F414"
#define  GDMA_OSD3_WI_3D_reg                                                     0xB802F414
#define  GDMA_OSD3_WI_3D_inst_addr                                               "0x0029"
#define  set_GDMA_OSD3_WI_3D_reg(data)                                           (*((volatile unsigned int*)GDMA_OSD3_WI_3D_reg)=data)
#define  get_GDMA_OSD3_WI_3D_reg                                                 (*((volatile unsigned int*)GDMA_OSD3_WI_3D_reg))
#define  GDMA_OSD3_WI_3D_addr_shift                                              (0)
#define  GDMA_OSD3_WI_3D_addr_mask                                               (0xFFFFFFFF)
#define  GDMA_OSD3_WI_3D_addr(data)                                              (0xFFFFFFFF&(data))
#define  GDMA_OSD3_WI_3D_get_addr(data)                                          (0xFFFFFFFF&(data))

#define  GDMA_OSD3_SIZE                                                         0x1802F418
#define  GDMA_OSD3_SIZE_reg_addr                                                 "0xB802F418"
#define  GDMA_OSD3_SIZE_reg                                                      0xB802F418
#define  GDMA_OSD3_SIZE_inst_addr                                                "0x002A"
#define  set_GDMA_OSD3_SIZE_reg(data)                                            (*((volatile unsigned int*)GDMA_OSD3_SIZE_reg)=data)
#define  get_GDMA_OSD3_SIZE_reg                                                  (*((volatile unsigned int*)GDMA_OSD3_SIZE_reg))
#define  GDMA_OSD3_SIZE_w_shift                                                  (16)
#define  GDMA_OSD3_SIZE_h_shift                                                  (0)
#define  GDMA_OSD3_SIZE_w_mask                                                   (0x1FFF0000)
#define  GDMA_OSD3_SIZE_h_mask                                                   (0x00001FFF)
#define  GDMA_OSD3_SIZE_w(data)                                                  (0x1FFF0000&((data)<<16))
#define  GDMA_OSD3_SIZE_h(data)                                                  (0x00001FFF&(data))
#define  GDMA_OSD3_SIZE_get_w(data)                                              ((0x1FFF0000&(data))>>16)
#define  GDMA_OSD3_SIZE_get_h(data)                                              (0x00001FFF&(data))

#define  GDMA_OSD3_CC1                                                          0x1802F41C
#define  GDMA_OSD3_CC1_reg_addr                                                  "0xB802F41C"
#define  GDMA_OSD3_CC1_reg                                                       0xB802F41C
#define  GDMA_OSD3_CC1_inst_addr                                                 "0x002B"
#define  set_GDMA_OSD3_CC1_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD3_CC1_reg)=data)
#define  get_GDMA_OSD3_CC1_reg                                                   (*((volatile unsigned int*)GDMA_OSD3_CC1_reg))
#define  GDMA_OSD3_CC1_m01_shift                                                 (16)
#define  GDMA_OSD3_CC1_m00_shift                                                 (0)
#define  GDMA_OSD3_CC1_m01_mask                                                  (0x3FFF0000)
#define  GDMA_OSD3_CC1_m00_mask                                                  (0x00003FFF)
#define  GDMA_OSD3_CC1_m01(data)                                                 (0x3FFF0000&((data)<<16))
#define  GDMA_OSD3_CC1_m00(data)                                                 (0x00003FFF&(data))
#define  GDMA_OSD3_CC1_get_m01(data)                                             ((0x3FFF0000&(data))>>16)
#define  GDMA_OSD3_CC1_get_m00(data)                                             (0x00003FFF&(data))

#define  GDMA_OSD3_CC2                                                          0x1802F420
#define  GDMA_OSD3_CC2_reg_addr                                                  "0xB802F420"
#define  GDMA_OSD3_CC2_reg                                                       0xB802F420
#define  GDMA_OSD3_CC2_inst_addr                                                 "0x002C"
#define  set_GDMA_OSD3_CC2_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD3_CC2_reg)=data)
#define  get_GDMA_OSD3_CC2_reg                                                   (*((volatile unsigned int*)GDMA_OSD3_CC2_reg))
#define  GDMA_OSD3_CC2_m10_shift                                                 (16)
#define  GDMA_OSD3_CC2_m02_shift                                                 (0)
#define  GDMA_OSD3_CC2_m10_mask                                                  (0x3FFF0000)
#define  GDMA_OSD3_CC2_m02_mask                                                  (0x00003FFF)
#define  GDMA_OSD3_CC2_m10(data)                                                 (0x3FFF0000&((data)<<16))
#define  GDMA_OSD3_CC2_m02(data)                                                 (0x00003FFF&(data))
#define  GDMA_OSD3_CC2_get_m10(data)                                             ((0x3FFF0000&(data))>>16)
#define  GDMA_OSD3_CC2_get_m02(data)                                             (0x00003FFF&(data))

#define  GDMA_OSD3_CC3                                                          0x1802F424
#define  GDMA_OSD3_CC3_reg_addr                                                  "0xB802F424"
#define  GDMA_OSD3_CC3_reg                                                       0xB802F424
#define  GDMA_OSD3_CC3_inst_addr                                                 "0x002D"
#define  set_GDMA_OSD3_CC3_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD3_CC3_reg)=data)
#define  get_GDMA_OSD3_CC3_reg                                                   (*((volatile unsigned int*)GDMA_OSD3_CC3_reg))
#define  GDMA_OSD3_CC3_m12_shift                                                 (16)
#define  GDMA_OSD3_CC3_m11_shift                                                 (0)
#define  GDMA_OSD3_CC3_m12_mask                                                  (0x3FFF0000)
#define  GDMA_OSD3_CC3_m11_mask                                                  (0x00003FFF)
#define  GDMA_OSD3_CC3_m12(data)                                                 (0x3FFF0000&((data)<<16))
#define  GDMA_OSD3_CC3_m11(data)                                                 (0x00003FFF&(data))
#define  GDMA_OSD3_CC3_get_m12(data)                                             ((0x3FFF0000&(data))>>16)
#define  GDMA_OSD3_CC3_get_m11(data)                                             (0x00003FFF&(data))

#define  GDMA_OSD3_CC4                                                          0x1802F428
#define  GDMA_OSD3_CC4_reg_addr                                                  "0xB802F428"
#define  GDMA_OSD3_CC4_reg                                                       0xB802F428
#define  GDMA_OSD3_CC4_inst_addr                                                 "0x002E"
#define  set_GDMA_OSD3_CC4_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD3_CC4_reg)=data)
#define  get_GDMA_OSD3_CC4_reg                                                   (*((volatile unsigned int*)GDMA_OSD3_CC4_reg))
#define  GDMA_OSD3_CC4_m21_shift                                                 (16)
#define  GDMA_OSD3_CC4_m20_shift                                                 (0)
#define  GDMA_OSD3_CC4_m21_mask                                                  (0x3FFF0000)
#define  GDMA_OSD3_CC4_m20_mask                                                  (0x00003FFF)
#define  GDMA_OSD3_CC4_m21(data)                                                 (0x3FFF0000&((data)<<16))
#define  GDMA_OSD3_CC4_m20(data)                                                 (0x00003FFF&(data))
#define  GDMA_OSD3_CC4_get_m21(data)                                             ((0x3FFF0000&(data))>>16)
#define  GDMA_OSD3_CC4_get_m20(data)                                             (0x00003FFF&(data))

#define  GDMA_OSD3_CC5                                                          0x1802F42C
#define  GDMA_OSD3_CC5_reg_addr                                                  "0xB802F42C"
#define  GDMA_OSD3_CC5_reg                                                       0xB802F42C
#define  GDMA_OSD3_CC5_inst_addr                                                 "0x002F"
#define  set_GDMA_OSD3_CC5_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD3_CC5_reg)=data)
#define  get_GDMA_OSD3_CC5_reg                                                   (*((volatile unsigned int*)GDMA_OSD3_CC5_reg))
#define  GDMA_OSD3_CC5_m22_shift                                                 (0)
#define  GDMA_OSD3_CC5_m22_mask                                                  (0x00003FFF)
#define  GDMA_OSD3_CC5_m22(data)                                                 (0x00003FFF&(data))
#define  GDMA_OSD3_CC5_get_m22(data)                                             (0x00003FFF&(data))

#define  GDMA_OSD3_CC6                                                          0x1802F430
#define  GDMA_OSD3_CC6_reg_addr                                                  "0xB802F430"
#define  GDMA_OSD3_CC6_reg                                                       0xB802F430
#define  GDMA_OSD3_CC6_inst_addr                                                 "0x0030"
#define  set_GDMA_OSD3_CC6_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD3_CC6_reg)=data)
#define  get_GDMA_OSD3_CC6_reg                                                   (*((volatile unsigned int*)GDMA_OSD3_CC6_reg))
#define  GDMA_OSD3_CC6_a2_shift                                                  (18)
#define  GDMA_OSD3_CC6_a1_shift                                                  (9)
#define  GDMA_OSD3_CC6_a0_shift                                                  (0)
#define  GDMA_OSD3_CC6_a2_mask                                                   (0x07FC0000)
#define  GDMA_OSD3_CC6_a1_mask                                                   (0x0003FE00)
#define  GDMA_OSD3_CC6_a0_mask                                                   (0x000001FF)
#define  GDMA_OSD3_CC6_a2(data)                                                  (0x07FC0000&((data)<<18))
#define  GDMA_OSD3_CC6_a1(data)                                                  (0x0003FE00&((data)<<9))
#define  GDMA_OSD3_CC6_a0(data)                                                  (0x000001FF&(data))
#define  GDMA_OSD3_CC6_get_a2(data)                                              ((0x07FC0000&(data))>>18)
#define  GDMA_OSD3_CC6_get_a1(data)                                              ((0x0003FE00&(data))>>9)
#define  GDMA_OSD3_CC6_get_a0(data)                                              (0x000001FF&(data))

#define  GDMA_OSD3_CC7                                                          0x1802F434
#define  GDMA_OSD3_CC7_reg_addr                                                  "0xB802F434"
#define  GDMA_OSD3_CC7_reg                                                       0xB802F434
#define  GDMA_OSD3_CC7_inst_addr                                                 "0x0031"
#define  set_GDMA_OSD3_CC7_reg(data)                                             (*((volatile unsigned int*)GDMA_OSD3_CC7_reg)=data)
#define  get_GDMA_OSD3_CC7_reg                                                   (*((volatile unsigned int*)GDMA_OSD3_CC7_reg))
#define  GDMA_OSD3_CC7_b2_shift                                                  (18)
#define  GDMA_OSD3_CC7_b1_shift                                                  (9)
#define  GDMA_OSD3_CC7_b0_shift                                                  (0)
#define  GDMA_OSD3_CC7_b2_mask                                                   (0x07FC0000)
#define  GDMA_OSD3_CC7_b1_mask                                                   (0x0003FE00)
#define  GDMA_OSD3_CC7_b0_mask                                                   (0x000001FF)
#define  GDMA_OSD3_CC7_b2(data)                                                  (0x07FC0000&((data)<<18))
#define  GDMA_OSD3_CC7_b1(data)                                                  (0x0003FE00&((data)<<9))
#define  GDMA_OSD3_CC7_b0(data)                                                  (0x000001FF&(data))
#define  GDMA_OSD3_CC7_get_b2(data)                                              ((0x07FC0000&(data))>>18)
#define  GDMA_OSD3_CC7_get_b1(data)                                              ((0x0003FE00&(data))>>9)
#define  GDMA_OSD3_CC7_get_b0(data)                                              (0x000001FF&(data))

#define  GDMA_OSD3_CLEAR1                                                       0x1802F480
#define  GDMA_OSD3_CLEAR1_reg_addr                                               "0xB802F480"
#define  GDMA_OSD3_CLEAR1_reg                                                    0xB802F480
#define  GDMA_OSD3_CLEAR1_inst_addr                                              "0x0032"
#define  set_GDMA_OSD3_CLEAR1_reg(data)                                          (*((volatile unsigned int*)GDMA_OSD3_CLEAR1_reg)=data)
#define  get_GDMA_OSD3_CLEAR1_reg                                                (*((volatile unsigned int*)GDMA_OSD3_CLEAR1_reg))
#define  GDMA_OSD3_CLEAR1_x_sta_shift                                            (16)
#define  GDMA_OSD3_CLEAR1_x_end_shift                                            (0)
#define  GDMA_OSD3_CLEAR1_x_sta_mask                                             (0x1FFF0000)
#define  GDMA_OSD3_CLEAR1_x_end_mask                                             (0x00001FFF)
#define  GDMA_OSD3_CLEAR1_x_sta(data)                                            (0x1FFF0000&((data)<<16))
#define  GDMA_OSD3_CLEAR1_x_end(data)                                            (0x00001FFF&(data))
#define  GDMA_OSD3_CLEAR1_get_x_sta(data)                                        ((0x1FFF0000&(data))>>16)
#define  GDMA_OSD3_CLEAR1_get_x_end(data)                                        (0x00001FFF&(data))

#define  GDMA_OSD3_CLEAR2                                                       0x1802F484
#define  GDMA_OSD3_CLEAR2_reg_addr                                               "0xB802F484"
#define  GDMA_OSD3_CLEAR2_reg                                                    0xB802F484
#define  GDMA_OSD3_CLEAR2_inst_addr                                              "0x0033"
#define  set_GDMA_OSD3_CLEAR2_reg(data)                                          (*((volatile unsigned int*)GDMA_OSD3_CLEAR2_reg)=data)
#define  get_GDMA_OSD3_CLEAR2_reg                                                (*((volatile unsigned int*)GDMA_OSD3_CLEAR2_reg))
#define  GDMA_OSD3_CLEAR2_y_sta_shift                                            (16)
#define  GDMA_OSD3_CLEAR2_y_end_shift                                            (0)
#define  GDMA_OSD3_CLEAR2_y_sta_mask                                             (0x1FFF0000)
#define  GDMA_OSD3_CLEAR2_y_end_mask                                             (0x00001FFF)
#define  GDMA_OSD3_CLEAR2_y_sta(data)                                            (0x1FFF0000&((data)<<16))
#define  GDMA_OSD3_CLEAR2_y_end(data)                                            (0x00001FFF&(data))
#define  GDMA_OSD3_CLEAR2_get_y_sta(data)                                        ((0x1FFF0000&(data))>>16)
#define  GDMA_OSD3_CLEAR2_get_y_end(data)                                        (0x00001FFF&(data))

#define  GDMA_AFBC_IRQ_ST                                                       0x1802F810
#define  GDMA_AFBC_IRQ_ST_reg_addr                                               "0xB802F810"
#define  GDMA_AFBC_IRQ_ST_reg                                                    0xB802F810
#define  GDMA_AFBC_IRQ_ST_inst_addr                                              "0x0034"
#define  set_GDMA_AFBC_IRQ_ST_reg(data)                                          (*((volatile unsigned int*)GDMA_AFBC_IRQ_ST_reg)=data)
#define  get_GDMA_AFBC_IRQ_ST_reg                                                (*((volatile unsigned int*)GDMA_AFBC_IRQ_ST_reg))
#define  GDMA_AFBC_IRQ_ST_sel_fifo_overflow_st_shift                             (13)
#define  GDMA_AFBC_IRQ_ST_sel_fifo_underflow_st_shift                            (12)
#define  GDMA_AFBC_IRQ_ST_data_info_fifo_overflow_st_shift                       (9)
#define  GDMA_AFBC_IRQ_ST_data_info_fifo_underflow_st_shift                      (8)
#define  GDMA_AFBC_IRQ_ST_head_info_fifo_overflow_st_shift                       (5)
#define  GDMA_AFBC_IRQ_ST_head_info_fifo_underflow_st_shift                      (4)
#define  GDMA_AFBC_IRQ_ST_cmd_fifo_overflow_st_shift                             (1)
#define  GDMA_AFBC_IRQ_ST_cmd_fifo_underflow_st_shift                            (0)
#define  GDMA_AFBC_IRQ_ST_sel_fifo_overflow_st_mask                              (0x00002000)
#define  GDMA_AFBC_IRQ_ST_sel_fifo_underflow_st_mask                             (0x00001000)
#define  GDMA_AFBC_IRQ_ST_data_info_fifo_overflow_st_mask                        (0x00000200)
#define  GDMA_AFBC_IRQ_ST_data_info_fifo_underflow_st_mask                       (0x00000100)
#define  GDMA_AFBC_IRQ_ST_head_info_fifo_overflow_st_mask                        (0x00000020)
#define  GDMA_AFBC_IRQ_ST_head_info_fifo_underflow_st_mask                       (0x00000010)
#define  GDMA_AFBC_IRQ_ST_cmd_fifo_overflow_st_mask                              (0x00000002)
#define  GDMA_AFBC_IRQ_ST_cmd_fifo_underflow_st_mask                             (0x00000001)
#define  GDMA_AFBC_IRQ_ST_sel_fifo_overflow_st(data)                             (0x00002000&((data)<<13))
#define  GDMA_AFBC_IRQ_ST_sel_fifo_underflow_st(data)                            (0x00001000&((data)<<12))
#define  GDMA_AFBC_IRQ_ST_data_info_fifo_overflow_st(data)                       (0x00000200&((data)<<9))
#define  GDMA_AFBC_IRQ_ST_data_info_fifo_underflow_st(data)                      (0x00000100&((data)<<8))
#define  GDMA_AFBC_IRQ_ST_head_info_fifo_overflow_st(data)                       (0x00000020&((data)<<5))
#define  GDMA_AFBC_IRQ_ST_head_info_fifo_underflow_st(data)                      (0x00000010&((data)<<4))
#define  GDMA_AFBC_IRQ_ST_cmd_fifo_overflow_st(data)                             (0x00000002&((data)<<1))
#define  GDMA_AFBC_IRQ_ST_cmd_fifo_underflow_st(data)                            (0x00000001&(data))
#define  GDMA_AFBC_IRQ_ST_get_sel_fifo_overflow_st(data)                         ((0x00002000&(data))>>13)
#define  GDMA_AFBC_IRQ_ST_get_sel_fifo_underflow_st(data)                        ((0x00001000&(data))>>12)
#define  GDMA_AFBC_IRQ_ST_get_data_info_fifo_overflow_st(data)                   ((0x00000200&(data))>>9)
#define  GDMA_AFBC_IRQ_ST_get_data_info_fifo_underflow_st(data)                  ((0x00000100&(data))>>8)
#define  GDMA_AFBC_IRQ_ST_get_head_info_fifo_overflow_st(data)                   ((0x00000020&(data))>>5)
#define  GDMA_AFBC_IRQ_ST_get_head_info_fifo_underflow_st(data)                  ((0x00000010&(data))>>4)
#define  GDMA_AFBC_IRQ_ST_get_cmd_fifo_overflow_st(data)                         ((0x00000002&(data))>>1)
#define  GDMA_AFBC_IRQ_ST_get_cmd_fifo_underflow_st(data)                        (0x00000001&(data))

#define  GDMA_AFBC_CNT_ST                                                       0x1802F814
#define  GDMA_AFBC_CNT_ST_reg_addr                                               "0xB802F814"
#define  GDMA_AFBC_CNT_ST_reg                                                    0xB802F814
#define  GDMA_AFBC_CNT_ST_inst_addr                                              "0x0035"
#define  set_GDMA_AFBC_CNT_ST_reg(data)                                          (*((volatile unsigned int*)GDMA_AFBC_CNT_ST_reg)=data)
#define  get_GDMA_AFBC_CNT_ST_reg                                                (*((volatile unsigned int*)GDMA_AFBC_CNT_ST_reg))
#define  GDMA_AFBC_CNT_ST_osd1_line_cnt_shift                                    (16)
#define  GDMA_AFBC_CNT_ST_tile_y_cnt_shift                                       (4)
#define  GDMA_AFBC_CNT_ST_head_fsm_state_shift                                   (0)
#define  GDMA_AFBC_CNT_ST_osd1_line_cnt_mask                                     (0x1FFF0000)
#define  GDMA_AFBC_CNT_ST_tile_y_cnt_mask                                        (0x00007FF0)
#define  GDMA_AFBC_CNT_ST_head_fsm_state_mask                                    (0x0000000F)
#define  GDMA_AFBC_CNT_ST_osd1_line_cnt(data)                                    (0x1FFF0000&((data)<<16))
#define  GDMA_AFBC_CNT_ST_tile_y_cnt(data)                                       (0x00007FF0&((data)<<4))
#define  GDMA_AFBC_CNT_ST_head_fsm_state(data)                                   (0x0000000F&(data))
#define  GDMA_AFBC_CNT_ST_get_osd1_line_cnt(data)                                ((0x1FFF0000&(data))>>16)
#define  GDMA_AFBC_CNT_ST_get_tile_y_cnt(data)                                   ((0x00007FF0&(data))>>4)
#define  GDMA_AFBC_CNT_ST_get_head_fsm_state(data)                               (0x0000000F&(data))

#define  GDMA_AFBC_FIFO_WATER_ST                                                0x1802F818
#define  GDMA_AFBC_FIFO_WATER_ST_reg_addr                                        "0xB802F818"
#define  GDMA_AFBC_FIFO_WATER_ST_reg                                             0xB802F818
#define  GDMA_AFBC_FIFO_WATER_ST_inst_addr                                       "0x0036"
#define  set_GDMA_AFBC_FIFO_WATER_ST_reg(data)                                   (*((volatile unsigned int*)GDMA_AFBC_FIFO_WATER_ST_reg)=data)
#define  get_GDMA_AFBC_FIFO_WATER_ST_reg                                         (*((volatile unsigned int*)GDMA_AFBC_FIFO_WATER_ST_reg))
#define  GDMA_AFBC_FIFO_WATER_ST_data_fifo_water_shift                           (12)
#define  GDMA_AFBC_FIFO_WATER_ST_head_fifo_water_shift                           (8)
#define  GDMA_AFBC_FIFO_WATER_ST_cmd_fifo_water_shift                            (4)
#define  GDMA_AFBC_FIFO_WATER_ST_sel_fifo_water_shift                            (0)
#define  GDMA_AFBC_FIFO_WATER_ST_data_fifo_water_mask                            (0x003FF000)
#define  GDMA_AFBC_FIFO_WATER_ST_head_fifo_water_mask                            (0x00000F00)
#define  GDMA_AFBC_FIFO_WATER_ST_cmd_fifo_water_mask                             (0x000000F0)
#define  GDMA_AFBC_FIFO_WATER_ST_sel_fifo_water_mask                             (0x0000000F)
#define  GDMA_AFBC_FIFO_WATER_ST_data_fifo_water(data)                           (0x003FF000&((data)<<12))
#define  GDMA_AFBC_FIFO_WATER_ST_head_fifo_water(data)                           (0x00000F00&((data)<<8))
#define  GDMA_AFBC_FIFO_WATER_ST_cmd_fifo_water(data)                            (0x000000F0&((data)<<4))
#define  GDMA_AFBC_FIFO_WATER_ST_sel_fifo_water(data)                            (0x0000000F&(data))
#define  GDMA_AFBC_FIFO_WATER_ST_get_data_fifo_water(data)                       ((0x003FF000&(data))>>12)
#define  GDMA_AFBC_FIFO_WATER_ST_get_head_fifo_water(data)                       ((0x00000F00&(data))>>8)
#define  GDMA_AFBC_FIFO_WATER_ST_get_cmd_fifo_water(data)                        ((0x000000F0&(data))>>4)
#define  GDMA_AFBC_FIFO_WATER_ST_get_sel_fifo_water(data)                        (0x0000000F&(data))

#define  GDMA_AFBC_FIFO_ST                                                      0x1802F81C
#define  GDMA_AFBC_FIFO_ST_reg_addr                                              "0xB802F81C"
#define  GDMA_AFBC_FIFO_ST_reg                                                   0xB802F81C
#define  GDMA_AFBC_FIFO_ST_inst_addr                                             "0x0037"
#define  set_GDMA_AFBC_FIFO_ST_reg(data)                                         (*((volatile unsigned int*)GDMA_AFBC_FIFO_ST_reg)=data)
#define  get_GDMA_AFBC_FIFO_ST_reg                                               (*((volatile unsigned int*)GDMA_AFBC_FIFO_ST_reg))
#define  GDMA_AFBC_FIFO_ST_sel_fifo_empty_shift                                  (17)
#define  GDMA_AFBC_FIFO_ST_sel_fifo_full_shift                                   (16)
#define  GDMA_AFBC_FIFO_ST_data_fifo_empty_shift                                 (13)
#define  GDMA_AFBC_FIFO_ST_data_fifo_full_shift                                  (12)
#define  GDMA_AFBC_FIFO_ST_head_info_fifo_empty_shift                            (9)
#define  GDMA_AFBC_FIFO_ST_head_info_fifo_full_shift                             (8)
#define  GDMA_AFBC_FIFO_ST_cmd_fifo_empty_shift                                  (5)
#define  GDMA_AFBC_FIFO_ST_cmd_fifo_full_shift                                   (4)
#define  GDMA_AFBC_FIFO_ST_data_timing_error_shift                               (2)
#define  GDMA_AFBC_FIFO_ST_head_timing_error_shift                               (1)
#define  GDMA_AFBC_FIFO_ST_solid_timing_error_shift                              (0)
#define  GDMA_AFBC_FIFO_ST_sel_fifo_empty_mask                                   (0x00020000)
#define  GDMA_AFBC_FIFO_ST_sel_fifo_full_mask                                    (0x00010000)
#define  GDMA_AFBC_FIFO_ST_data_fifo_empty_mask                                  (0x00002000)
#define  GDMA_AFBC_FIFO_ST_data_fifo_full_mask                                   (0x00001000)
#define  GDMA_AFBC_FIFO_ST_head_info_fifo_empty_mask                             (0x00000200)
#define  GDMA_AFBC_FIFO_ST_head_info_fifo_full_mask                              (0x00000100)
#define  GDMA_AFBC_FIFO_ST_cmd_fifo_empty_mask                                   (0x00000020)
#define  GDMA_AFBC_FIFO_ST_cmd_fifo_full_mask                                    (0x00000010)
#define  GDMA_AFBC_FIFO_ST_data_timing_error_mask                                (0x00000004)
#define  GDMA_AFBC_FIFO_ST_head_timing_error_mask                                (0x00000002)
#define  GDMA_AFBC_FIFO_ST_solid_timing_error_mask                               (0x00000001)
#define  GDMA_AFBC_FIFO_ST_sel_fifo_empty(data)                                  (0x00020000&((data)<<17))
#define  GDMA_AFBC_FIFO_ST_sel_fifo_full(data)                                   (0x00010000&((data)<<16))
#define  GDMA_AFBC_FIFO_ST_data_fifo_empty(data)                                 (0x00002000&((data)<<13))
#define  GDMA_AFBC_FIFO_ST_data_fifo_full(data)                                  (0x00001000&((data)<<12))
#define  GDMA_AFBC_FIFO_ST_head_info_fifo_empty(data)                            (0x00000200&((data)<<9))
#define  GDMA_AFBC_FIFO_ST_head_info_fifo_full(data)                             (0x00000100&((data)<<8))
#define  GDMA_AFBC_FIFO_ST_cmd_fifo_empty(data)                                  (0x00000020&((data)<<5))
#define  GDMA_AFBC_FIFO_ST_cmd_fifo_full(data)                                   (0x00000010&((data)<<4))
#define  GDMA_AFBC_FIFO_ST_data_timing_error(data)                               (0x00000004&((data)<<2))
#define  GDMA_AFBC_FIFO_ST_head_timing_error(data)                               (0x00000002&((data)<<1))
#define  GDMA_AFBC_FIFO_ST_solid_timing_error(data)                              (0x00000001&(data))
#define  GDMA_AFBC_FIFO_ST_get_sel_fifo_empty(data)                              ((0x00020000&(data))>>17)
#define  GDMA_AFBC_FIFO_ST_get_sel_fifo_full(data)                               ((0x00010000&(data))>>16)
#define  GDMA_AFBC_FIFO_ST_get_data_fifo_empty(data)                             ((0x00002000&(data))>>13)
#define  GDMA_AFBC_FIFO_ST_get_data_fifo_full(data)                              ((0x00001000&(data))>>12)
#define  GDMA_AFBC_FIFO_ST_get_head_info_fifo_empty(data)                        ((0x00000200&(data))>>9)
#define  GDMA_AFBC_FIFO_ST_get_head_info_fifo_full(data)                         ((0x00000100&(data))>>8)
#define  GDMA_AFBC_FIFO_ST_get_cmd_fifo_empty(data)                              ((0x00000020&(data))>>5)
#define  GDMA_AFBC_FIFO_ST_get_cmd_fifo_full(data)                               ((0x00000010&(data))>>4)
#define  GDMA_AFBC_FIFO_ST_get_data_timing_error(data)                           ((0x00000004&(data))>>2)
#define  GDMA_AFBC_FIFO_ST_get_head_timing_error(data)                           ((0x00000002&(data))>>1)
#define  GDMA_AFBC_FIFO_ST_get_solid_timing_error(data)                          (0x00000001&(data))

#define  GDMA_AFBC_DATA_SRAM_BASE                                               0x1802F820
#define  GDMA_AFBC_DATA_SRAM_BASE_reg_addr                                       "0xB802F820"
#define  GDMA_AFBC_DATA_SRAM_BASE_reg                                            0xB802F820
#define  GDMA_AFBC_DATA_SRAM_BASE_inst_addr                                      "0x0038"
#define  set_GDMA_AFBC_DATA_SRAM_BASE_reg(data)                                  (*((volatile unsigned int*)GDMA_AFBC_DATA_SRAM_BASE_reg)=data)
#define  get_GDMA_AFBC_DATA_SRAM_BASE_reg                                        (*((volatile unsigned int*)GDMA_AFBC_DATA_SRAM_BASE_reg))
#define  GDMA_AFBC_DATA_SRAM_BASE_size_shift                                     (16)
#define  GDMA_AFBC_DATA_SRAM_BASE_addr_shift                                     (0)
#define  GDMA_AFBC_DATA_SRAM_BASE_size_mask                                      (0x01FF0000)
#define  GDMA_AFBC_DATA_SRAM_BASE_addr_mask                                      (0x000001FF)
#define  GDMA_AFBC_DATA_SRAM_BASE_size(data)                                     (0x01FF0000&((data)<<16))
#define  GDMA_AFBC_DATA_SRAM_BASE_addr(data)                                     (0x000001FF&(data))
#define  GDMA_AFBC_DATA_SRAM_BASE_get_size(data)                                 ((0x01FF0000&(data))>>16)
#define  GDMA_AFBC_DATA_SRAM_BASE_get_addr(data)                                 (0x000001FF&(data))

#define  GDMA_AFBC_MAX                                                          0x1802F824
#define  GDMA_AFBC_MAX_reg_addr                                                  "0xB802F824"
#define  GDMA_AFBC_MAX_reg                                                       0xB802F824
#define  GDMA_AFBC_MAX_inst_addr                                                 "0x0039"
#define  set_GDMA_AFBC_MAX_reg(data)                                             (*((volatile unsigned int*)GDMA_AFBC_MAX_reg)=data)
#define  get_GDMA_AFBC_MAX_reg                                                   (*((volatile unsigned int*)GDMA_AFBC_MAX_reg))
#define  GDMA_AFBC_MAX_addr_shift                                                (0)
#define  GDMA_AFBC_MAX_addr_mask                                                 (0xFFFFFFFF)
#define  GDMA_AFBC_MAX_addr(data)                                                (0xFFFFFFFF&(data))
#define  GDMA_AFBC_MAX_get_addr(data)                                            (0xFFFFFFFF&(data))

#define  GDMA_AFBC_MIN                                                          0x1802F828
#define  GDMA_AFBC_MIN_reg_addr                                                  "0xB802F828"
#define  GDMA_AFBC_MIN_reg                                                       0xB802F828
#define  GDMA_AFBC_MIN_inst_addr                                                 "0x003A"
#define  set_GDMA_AFBC_MIN_reg(data)                                             (*((volatile unsigned int*)GDMA_AFBC_MIN_reg)=data)
#define  get_GDMA_AFBC_MIN_reg                                                   (*((volatile unsigned int*)GDMA_AFBC_MIN_reg))
#define  GDMA_AFBC_MIN_addr_shift                                                (0)
#define  GDMA_AFBC_MIN_addr_mask                                                 (0xFFFFFFFF)
#define  GDMA_AFBC_MIN_addr(data)                                                (0xFFFFFFFF&(data))
#define  GDMA_AFBC_MIN_get_addr(data)                                            (0xFFFFFFFF&(data))

#define  GDMA_DMA_BL_2                                                          0x1802F924
#define  GDMA_DMA_BL_2_reg_addr                                                  "0xB802F924"
#define  GDMA_DMA_BL_2_reg                                                       0xB802F924
#define  GDMA_DMA_BL_2_inst_addr                                                 "0x003B"
#define  set_GDMA_DMA_BL_2_reg(data)                                             (*((volatile unsigned int*)GDMA_DMA_BL_2_reg)=data)
#define  get_GDMA_DMA_BL_2_reg                                                   (*((volatile unsigned int*)GDMA_DMA_BL_2_reg))
#define  GDMA_DMA_BL_2_osd3_bl_shift                                             (24)
#define  GDMA_DMA_BL_2_osd2_bl_shift                                             (16)
#define  GDMA_DMA_BL_2_osd1_bl_shift                                             (8)
#define  GDMA_DMA_BL_2_osd3_bl_mask                                              (0x7F000000)
#define  GDMA_DMA_BL_2_osd2_bl_mask                                              (0x007F0000)
#define  GDMA_DMA_BL_2_osd1_bl_mask                                              (0x00007F00)
#define  GDMA_DMA_BL_2_osd3_bl(data)                                             (0x7F000000&((data)<<24))
#define  GDMA_DMA_BL_2_osd2_bl(data)                                             (0x007F0000&((data)<<16))
#define  GDMA_DMA_BL_2_osd1_bl(data)                                             (0x00007F00&((data)<<8))
#define  GDMA_DMA_BL_2_get_osd3_bl(data)                                         ((0x7F000000&(data))>>24)
#define  GDMA_DMA_BL_2_get_osd2_bl(data)                                         ((0x007F0000&(data))>>16)
#define  GDMA_DMA_BL_2_get_osd1_bl(data)                                         ((0x00007F00&(data))>>8)

#define  GDMA_DMA                                                               0x1802F928
#define  GDMA_DMA_reg_addr                                                       "0xB802F928"
#define  GDMA_DMA_reg                                                            0xB802F928
#define  GDMA_DMA_inst_addr                                                      "0x003C"
#define  set_GDMA_DMA_reg(data)                                                  (*((volatile unsigned int*)GDMA_DMA_reg)=data)
#define  get_GDMA_DMA_reg                                                        (*((volatile unsigned int*)GDMA_DMA_reg))
#define  GDMA_DMA_afbc_mask_shift                                                (22)
#define  GDMA_DMA_osd3_mask_shift                                                (19)
#define  GDMA_DMA_osd2_mask_shift                                                (18)
#define  GDMA_DMA_osd1_mask_shift                                                (17)
#define  GDMA_DMA_afbc_req_num_shift                                             (12)
#define  GDMA_DMA_osd3_req_num_shift                                             (8)
#define  GDMA_DMA_osd2_req_num_shift                                             (4)
#define  GDMA_DMA_osd1_req_num_shift                                             (0)
#define  GDMA_DMA_afbc_mask_mask                                                 (0x00400000)
#define  GDMA_DMA_osd3_mask_mask                                                 (0x00080000)
#define  GDMA_DMA_osd2_mask_mask                                                 (0x00040000)
#define  GDMA_DMA_osd1_mask_mask                                                 (0x00020000)
#define  GDMA_DMA_afbc_req_num_mask                                              (0x0000F000)
#define  GDMA_DMA_osd3_req_num_mask                                              (0x00000F00)
#define  GDMA_DMA_osd2_req_num_mask                                              (0x000000F0)
#define  GDMA_DMA_osd1_req_num_mask                                              (0x0000000F)
#define  GDMA_DMA_afbc_mask(data)                                                (0x00400000&((data)<<22))
#define  GDMA_DMA_osd3_mask(data)                                                (0x00080000&((data)<<19))
#define  GDMA_DMA_osd2_mask(data)                                                (0x00040000&((data)<<18))
#define  GDMA_DMA_osd1_mask(data)                                                (0x00020000&((data)<<17))
#define  GDMA_DMA_afbc_req_num(data)                                             (0x0000F000&((data)<<12))
#define  GDMA_DMA_osd3_req_num(data)                                             (0x00000F00&((data)<<8))
#define  GDMA_DMA_osd2_req_num(data)                                             (0x000000F0&((data)<<4))
#define  GDMA_DMA_osd1_req_num(data)                                             (0x0000000F&(data))
#define  GDMA_DMA_get_afbc_mask(data)                                            ((0x00400000&(data))>>22)
#define  GDMA_DMA_get_osd3_mask(data)                                            ((0x00080000&(data))>>19)
#define  GDMA_DMA_get_osd2_mask(data)                                            ((0x00040000&(data))>>18)
#define  GDMA_DMA_get_osd1_mask(data)                                            ((0x00020000&(data))>>17)
#define  GDMA_DMA_get_afbc_req_num(data)                                         ((0x0000F000&(data))>>12)
#define  GDMA_DMA_get_osd3_req_num(data)                                         ((0x00000F00&(data))>>8)
#define  GDMA_DMA_get_osd2_req_num(data)                                         ((0x000000F0&(data))>>4)
#define  GDMA_DMA_get_osd1_req_num(data)                                         (0x0000000F&(data))

#define  GDMA_DMA_SWAP                                                          0x1802F92C
#define  GDMA_DMA_SWAP_reg_addr                                                  "0xB802F92C"
#define  GDMA_DMA_SWAP_reg                                                       0xB802F92C
#define  GDMA_DMA_SWAP_inst_addr                                                 "0x003D"
#define  set_GDMA_DMA_SWAP_reg(data)                                             (*((volatile unsigned int*)GDMA_DMA_SWAP_reg)=data)
#define  get_GDMA_DMA_SWAP_reg                                                   (*((volatile unsigned int*)GDMA_DMA_SWAP_reg))
#define  GDMA_DMA_SWAP_afbc_1b_shift                                             (27)
#define  GDMA_DMA_SWAP_afbc_2b_shift                                             (26)
#define  GDMA_DMA_SWAP_afbc_4b_shift                                             (25)
#define  GDMA_DMA_SWAP_afbc_8b_shift                                             (24)
#define  GDMA_DMA_SWAP_osd3_1b_shift                                             (15)
#define  GDMA_DMA_SWAP_osd3_2b_shift                                             (14)
#define  GDMA_DMA_SWAP_osd3_4b_shift                                             (13)
#define  GDMA_DMA_SWAP_osd3_8b_shift                                             (12)
#define  GDMA_DMA_SWAP_osd2_1b_shift                                             (11)
#define  GDMA_DMA_SWAP_osd2_2b_shift                                             (10)
#define  GDMA_DMA_SWAP_osd2_4b_shift                                             (9)
#define  GDMA_DMA_SWAP_osd2_8b_shift                                             (8)
#define  GDMA_DMA_SWAP_osd1_1b_shift                                             (7)
#define  GDMA_DMA_SWAP_osd1_2b_shift                                             (6)
#define  GDMA_DMA_SWAP_osd1_4b_shift                                             (5)
#define  GDMA_DMA_SWAP_osd1_8b_shift                                             (4)
#define  GDMA_DMA_SWAP_afbc_1b_mask                                              (0x08000000)
#define  GDMA_DMA_SWAP_afbc_2b_mask                                              (0x04000000)
#define  GDMA_DMA_SWAP_afbc_4b_mask                                              (0x02000000)
#define  GDMA_DMA_SWAP_afbc_8b_mask                                              (0x01000000)
#define  GDMA_DMA_SWAP_osd3_1b_mask                                              (0x00008000)
#define  GDMA_DMA_SWAP_osd3_2b_mask                                              (0x00004000)
#define  GDMA_DMA_SWAP_osd3_4b_mask                                              (0x00002000)
#define  GDMA_DMA_SWAP_osd3_8b_mask                                              (0x00001000)
#define  GDMA_DMA_SWAP_osd2_1b_mask                                              (0x00000800)
#define  GDMA_DMA_SWAP_osd2_2b_mask                                              (0x00000400)
#define  GDMA_DMA_SWAP_osd2_4b_mask                                              (0x00000200)
#define  GDMA_DMA_SWAP_osd2_8b_mask                                              (0x00000100)
#define  GDMA_DMA_SWAP_osd1_1b_mask                                              (0x00000080)
#define  GDMA_DMA_SWAP_osd1_2b_mask                                              (0x00000040)
#define  GDMA_DMA_SWAP_osd1_4b_mask                                              (0x00000020)
#define  GDMA_DMA_SWAP_osd1_8b_mask                                              (0x00000010)
#define  GDMA_DMA_SWAP_afbc_1b(data)                                             (0x08000000&((data)<<27))
#define  GDMA_DMA_SWAP_afbc_2b(data)                                             (0x04000000&((data)<<26))
#define  GDMA_DMA_SWAP_afbc_4b(data)                                             (0x02000000&((data)<<25))
#define  GDMA_DMA_SWAP_afbc_8b(data)                                             (0x01000000&((data)<<24))
#define  GDMA_DMA_SWAP_osd3_1b(data)                                             (0x00008000&((data)<<15))
#define  GDMA_DMA_SWAP_osd3_2b(data)                                             (0x00004000&((data)<<14))
#define  GDMA_DMA_SWAP_osd3_4b(data)                                             (0x00002000&((data)<<13))
#define  GDMA_DMA_SWAP_osd3_8b(data)                                             (0x00001000&((data)<<12))
#define  GDMA_DMA_SWAP_osd2_1b(data)                                             (0x00000800&((data)<<11))
#define  GDMA_DMA_SWAP_osd2_2b(data)                                             (0x00000400&((data)<<10))
#define  GDMA_DMA_SWAP_osd2_4b(data)                                             (0x00000200&((data)<<9))
#define  GDMA_DMA_SWAP_osd2_8b(data)                                             (0x00000100&((data)<<8))
#define  GDMA_DMA_SWAP_osd1_1b(data)                                             (0x00000080&((data)<<7))
#define  GDMA_DMA_SWAP_osd1_2b(data)                                             (0x00000040&((data)<<6))
#define  GDMA_DMA_SWAP_osd1_4b(data)                                             (0x00000020&((data)<<5))
#define  GDMA_DMA_SWAP_osd1_8b(data)                                             (0x00000010&((data)<<4))
#define  GDMA_DMA_SWAP_get_afbc_1b(data)                                         ((0x08000000&(data))>>27)
#define  GDMA_DMA_SWAP_get_afbc_2b(data)                                         ((0x04000000&(data))>>26)
#define  GDMA_DMA_SWAP_get_afbc_4b(data)                                         ((0x02000000&(data))>>25)
#define  GDMA_DMA_SWAP_get_afbc_8b(data)                                         ((0x01000000&(data))>>24)
#define  GDMA_DMA_SWAP_get_osd3_1b(data)                                         ((0x00008000&(data))>>15)
#define  GDMA_DMA_SWAP_get_osd3_2b(data)                                         ((0x00004000&(data))>>14)
#define  GDMA_DMA_SWAP_get_osd3_4b(data)                                         ((0x00002000&(data))>>13)
#define  GDMA_DMA_SWAP_get_osd3_8b(data)                                         ((0x00001000&(data))>>12)
#define  GDMA_DMA_SWAP_get_osd2_1b(data)                                         ((0x00000800&(data))>>11)
#define  GDMA_DMA_SWAP_get_osd2_2b(data)                                         ((0x00000400&(data))>>10)
#define  GDMA_DMA_SWAP_get_osd2_4b(data)                                         ((0x00000200&(data))>>9)
#define  GDMA_DMA_SWAP_get_osd2_8b(data)                                         ((0x00000100&(data))>>8)
#define  GDMA_DMA_SWAP_get_osd1_1b(data)                                         ((0x00000080&(data))>>7)
#define  GDMA_DMA_SWAP_get_osd1_2b(data)                                         ((0x00000040&(data))>>6)
#define  GDMA_DMA_SWAP_get_osd1_4b(data)                                         ((0x00000020&(data))>>5)
#define  GDMA_DMA_SWAP_get_osd1_8b(data)                                         ((0x00000010&(data))>>4)

#define  GDMA_DMA_OSD1_WI                                                       0x1802F930
#define  GDMA_DMA_OSD1_WI_reg_addr                                               "0xB802F930"
#define  GDMA_DMA_OSD1_WI_reg                                                    0xB802F930
#define  GDMA_DMA_OSD1_WI_inst_addr                                              "0x003E"
#define  set_GDMA_DMA_OSD1_WI_reg(data)                                          (*((volatile unsigned int*)GDMA_DMA_OSD1_WI_reg)=data)
#define  get_GDMA_DMA_OSD1_WI_reg                                                (*((volatile unsigned int*)GDMA_DMA_OSD1_WI_reg))
#define  GDMA_DMA_OSD1_WI_depth_shift                                            (12)
#define  GDMA_DMA_OSD1_WI_sa_shift                                               (0)
#define  GDMA_DMA_OSD1_WI_depth_mask                                             (0x00FFF000)
#define  GDMA_DMA_OSD1_WI_sa_mask                                                (0x00000FFF)
#define  GDMA_DMA_OSD1_WI_depth(data)                                            (0x00FFF000&((data)<<12))
#define  GDMA_DMA_OSD1_WI_sa(data)                                               (0x00000FFF&(data))
#define  GDMA_DMA_OSD1_WI_get_depth(data)                                        ((0x00FFF000&(data))>>12)
#define  GDMA_DMA_OSD1_WI_get_sa(data)                                           (0x00000FFF&(data))

#define  GDMA_DMA_OSD1_D0                                                       0x1802F934
#define  GDMA_DMA_OSD1_D0_reg_addr                                               "0xB802F934"
#define  GDMA_DMA_OSD1_D0_reg                                                    0xB802F934
#define  GDMA_DMA_OSD1_D0_inst_addr                                              "0x003F"
#define  set_GDMA_DMA_OSD1_D0_reg(data)                                          (*((volatile unsigned int*)GDMA_DMA_OSD1_D0_reg)=data)
#define  get_GDMA_DMA_OSD1_D0_reg                                                (*((volatile unsigned int*)GDMA_DMA_OSD1_D0_reg))
#define  GDMA_DMA_OSD1_D0_depth_shift                                            (12)
#define  GDMA_DMA_OSD1_D0_sa_shift                                               (0)
#define  GDMA_DMA_OSD1_D0_depth_mask                                             (0x00FFF000)
#define  GDMA_DMA_OSD1_D0_sa_mask                                                (0x00000FFF)
#define  GDMA_DMA_OSD1_D0_depth(data)                                            (0x00FFF000&((data)<<12))
#define  GDMA_DMA_OSD1_D0_sa(data)                                               (0x00000FFF&(data))
#define  GDMA_DMA_OSD1_D0_get_depth(data)                                        ((0x00FFF000&(data))>>12)
#define  GDMA_DMA_OSD1_D0_get_sa(data)                                           (0x00000FFF&(data))

#define  GDMA_DMA_OSD1_D1                                                       0x1802F938
#define  GDMA_DMA_OSD1_D1_reg_addr                                               "0xB802F938"
#define  GDMA_DMA_OSD1_D1_reg                                                    0xB802F938
#define  GDMA_DMA_OSD1_D1_inst_addr                                              "0x0040"
#define  set_GDMA_DMA_OSD1_D1_reg(data)                                          (*((volatile unsigned int*)GDMA_DMA_OSD1_D1_reg)=data)
#define  get_GDMA_DMA_OSD1_D1_reg                                                (*((volatile unsigned int*)GDMA_DMA_OSD1_D1_reg))
#define  GDMA_DMA_OSD1_D1_depth_shift                                            (12)
#define  GDMA_DMA_OSD1_D1_sa_shift                                               (0)
#define  GDMA_DMA_OSD1_D1_depth_mask                                             (0x00FFF000)
#define  GDMA_DMA_OSD1_D1_sa_mask                                                (0x00000FFF)
#define  GDMA_DMA_OSD1_D1_depth(data)                                            (0x00FFF000&((data)<<12))
#define  GDMA_DMA_OSD1_D1_sa(data)                                               (0x00000FFF&(data))
#define  GDMA_DMA_OSD1_D1_get_depth(data)                                        ((0x00FFF000&(data))>>12)
#define  GDMA_DMA_OSD1_D1_get_sa(data)                                           (0x00000FFF&(data))

#define  GDMA_DMA_OSD2_WI                                                       0x1802F93C
#define  GDMA_DMA_OSD2_WI_reg_addr                                               "0xB802F93C"
#define  GDMA_DMA_OSD2_WI_reg                                                    0xB802F93C
#define  GDMA_DMA_OSD2_WI_inst_addr                                              "0x0041"
#define  set_GDMA_DMA_OSD2_WI_reg(data)                                          (*((volatile unsigned int*)GDMA_DMA_OSD2_WI_reg)=data)
#define  get_GDMA_DMA_OSD2_WI_reg                                                (*((volatile unsigned int*)GDMA_DMA_OSD2_WI_reg))
#define  GDMA_DMA_OSD2_WI_depth_shift                                            (12)
#define  GDMA_DMA_OSD2_WI_sa_shift                                               (0)
#define  GDMA_DMA_OSD2_WI_depth_mask                                             (0x00FFF000)
#define  GDMA_DMA_OSD2_WI_sa_mask                                                (0x00000FFF)
#define  GDMA_DMA_OSD2_WI_depth(data)                                            (0x00FFF000&((data)<<12))
#define  GDMA_DMA_OSD2_WI_sa(data)                                               (0x00000FFF&(data))
#define  GDMA_DMA_OSD2_WI_get_depth(data)                                        ((0x00FFF000&(data))>>12)
#define  GDMA_DMA_OSD2_WI_get_sa(data)                                           (0x00000FFF&(data))

#define  GDMA_DMA_OSD2_D0                                                       0x1802F940
#define  GDMA_DMA_OSD2_D0_reg_addr                                               "0xB802F940"
#define  GDMA_DMA_OSD2_D0_reg                                                    0xB802F940
#define  GDMA_DMA_OSD2_D0_inst_addr                                              "0x0042"
#define  set_GDMA_DMA_OSD2_D0_reg(data)                                          (*((volatile unsigned int*)GDMA_DMA_OSD2_D0_reg)=data)
#define  get_GDMA_DMA_OSD2_D0_reg                                                (*((volatile unsigned int*)GDMA_DMA_OSD2_D0_reg))
#define  GDMA_DMA_OSD2_D0_depth_shift                                            (12)
#define  GDMA_DMA_OSD2_D0_sa_shift                                               (0)
#define  GDMA_DMA_OSD2_D0_depth_mask                                             (0x00FFF000)
#define  GDMA_DMA_OSD2_D0_sa_mask                                                (0x00000FFF)
#define  GDMA_DMA_OSD2_D0_depth(data)                                            (0x00FFF000&((data)<<12))
#define  GDMA_DMA_OSD2_D0_sa(data)                                               (0x00000FFF&(data))
#define  GDMA_DMA_OSD2_D0_get_depth(data)                                        ((0x00FFF000&(data))>>12)
#define  GDMA_DMA_OSD2_D0_get_sa(data)                                           (0x00000FFF&(data))

#define  GDMA_DMA_OSD2_D1                                                       0x1802F944
#define  GDMA_DMA_OSD2_D1_reg_addr                                               "0xB802F944"
#define  GDMA_DMA_OSD2_D1_reg                                                    0xB802F944
#define  GDMA_DMA_OSD2_D1_inst_addr                                              "0x0043"
#define  set_GDMA_DMA_OSD2_D1_reg(data)                                          (*((volatile unsigned int*)GDMA_DMA_OSD2_D1_reg)=data)
#define  get_GDMA_DMA_OSD2_D1_reg                                                (*((volatile unsigned int*)GDMA_DMA_OSD2_D1_reg))
#define  GDMA_DMA_OSD2_D1_depth_shift                                            (12)
#define  GDMA_DMA_OSD2_D1_sa_shift                                               (0)
#define  GDMA_DMA_OSD2_D1_depth_mask                                             (0x00FFF000)
#define  GDMA_DMA_OSD2_D1_sa_mask                                                (0x00000FFF)
#define  GDMA_DMA_OSD2_D1_depth(data)                                            (0x00FFF000&((data)<<12))
#define  GDMA_DMA_OSD2_D1_sa(data)                                               (0x00000FFF&(data))
#define  GDMA_DMA_OSD2_D1_get_depth(data)                                        ((0x00FFF000&(data))>>12)
#define  GDMA_DMA_OSD2_D1_get_sa(data)                                           (0x00000FFF&(data))

#define  GDMA_DMA_OSD3_WI                                                       0x1802F948
#define  GDMA_DMA_OSD3_WI_reg_addr                                               "0xB802F948"
#define  GDMA_DMA_OSD3_WI_reg                                                    0xB802F948
#define  GDMA_DMA_OSD3_WI_inst_addr                                              "0x0044"
#define  set_GDMA_DMA_OSD3_WI_reg(data)                                          (*((volatile unsigned int*)GDMA_DMA_OSD3_WI_reg)=data)
#define  get_GDMA_DMA_OSD3_WI_reg                                                (*((volatile unsigned int*)GDMA_DMA_OSD3_WI_reg))
#define  GDMA_DMA_OSD3_WI_depth_shift                                            (12)
#define  GDMA_DMA_OSD3_WI_sa_shift                                               (0)
#define  GDMA_DMA_OSD3_WI_depth_mask                                             (0x00FFF000)
#define  GDMA_DMA_OSD3_WI_sa_mask                                                (0x00000FFF)
#define  GDMA_DMA_OSD3_WI_depth(data)                                            (0x00FFF000&((data)<<12))
#define  GDMA_DMA_OSD3_WI_sa(data)                                               (0x00000FFF&(data))
#define  GDMA_DMA_OSD3_WI_get_depth(data)                                        ((0x00FFF000&(data))>>12)
#define  GDMA_DMA_OSD3_WI_get_sa(data)                                           (0x00000FFF&(data))

#define  GDMA_DMA_OSD3_D0                                                       0x1802F94C
#define  GDMA_DMA_OSD3_D0_reg_addr                                               "0xB802F94C"
#define  GDMA_DMA_OSD3_D0_reg                                                    0xB802F94C
#define  GDMA_DMA_OSD3_D0_inst_addr                                              "0x0045"
#define  set_GDMA_DMA_OSD3_D0_reg(data)                                          (*((volatile unsigned int*)GDMA_DMA_OSD3_D0_reg)=data)
#define  get_GDMA_DMA_OSD3_D0_reg                                                (*((volatile unsigned int*)GDMA_DMA_OSD3_D0_reg))
#define  GDMA_DMA_OSD3_D0_depth_shift                                            (12)
#define  GDMA_DMA_OSD3_D0_sa_shift                                               (0)
#define  GDMA_DMA_OSD3_D0_depth_mask                                             (0x00FFF000)
#define  GDMA_DMA_OSD3_D0_sa_mask                                                (0x00000FFF)
#define  GDMA_DMA_OSD3_D0_depth(data)                                            (0x00FFF000&((data)<<12))
#define  GDMA_DMA_OSD3_D0_sa(data)                                               (0x00000FFF&(data))
#define  GDMA_DMA_OSD3_D0_get_depth(data)                                        ((0x00FFF000&(data))>>12)
#define  GDMA_DMA_OSD3_D0_get_sa(data)                                           (0x00000FFF&(data))

#define  GDMA_DMA_OSD3_D1                                                       0x1802F950
#define  GDMA_DMA_OSD3_D1_reg_addr                                               "0xB802F950"
#define  GDMA_DMA_OSD3_D1_reg                                                    0xB802F950
#define  GDMA_DMA_OSD3_D1_inst_addr                                              "0x0046"
#define  set_GDMA_DMA_OSD3_D1_reg(data)                                          (*((volatile unsigned int*)GDMA_DMA_OSD3_D1_reg)=data)
#define  get_GDMA_DMA_OSD3_D1_reg                                                (*((volatile unsigned int*)GDMA_DMA_OSD3_D1_reg))
#define  GDMA_DMA_OSD3_D1_depth_shift                                            (12)
#define  GDMA_DMA_OSD3_D1_sa_shift                                               (0)
#define  GDMA_DMA_OSD3_D1_depth_mask                                             (0x00FFF000)
#define  GDMA_DMA_OSD3_D1_sa_mask                                                (0x00000FFF)
#define  GDMA_DMA_OSD3_D1_depth(data)                                            (0x00FFF000&((data)<<12))
#define  GDMA_DMA_OSD3_D1_sa(data)                                               (0x00000FFF&(data))
#define  GDMA_DMA_OSD3_D1_get_depth(data)                                        ((0x00FFF000&(data))>>12)
#define  GDMA_DMA_OSD3_D1_get_sa(data)                                           (0x00000FFF&(data))

#define  GDMA_M422_SWAP                                                         0x1802F988
#define  GDMA_M422_SWAP_reg_addr                                                 "0xB802F988"
#define  GDMA_M422_SWAP_reg                                                      0xB802F988
#define  GDMA_M422_SWAP_inst_addr                                                "0x0047"
#define  set_GDMA_M422_SWAP_reg(data)                                            (*((volatile unsigned int*)GDMA_M422_SWAP_reg)=data)
#define  get_GDMA_M422_SWAP_reg                                                  (*((volatile unsigned int*)GDMA_M422_SWAP_reg))
#define  GDMA_M422_SWAP_m422_cb_cr_swap_shift                                    (0)
#define  GDMA_M422_SWAP_m422_cb_cr_swap_mask                                     (0x00000001)
#define  GDMA_M422_SWAP_m422_cb_cr_swap(data)                                    (0x00000001&(data))
#define  GDMA_M422_SWAP_get_m422_cb_cr_swap(data)                                (0x00000001&(data))

#define  GDMA_OSD_INTEN                                                         0x1802FC00
#define  GDMA_OSD_INTEN_reg_addr                                                 "0xB802FC00"
#define  GDMA_OSD_INTEN_reg                                                      0xB802FC00
#define  GDMA_OSD_INTEN_inst_addr                                                "0x0048"
#define  set_GDMA_OSD_INTEN_reg(data)                                            (*((volatile unsigned int*)GDMA_OSD_INTEN_reg)=data)
#define  get_GDMA_OSD_INTEN_reg                                                  (*((volatile unsigned int*)GDMA_OSD_INTEN_reg))
#define  GDMA_OSD_INTEN_osd3_fin_shift                                           (19)
#define  GDMA_OSD_INTEN_osd2_fin_shift                                           (18)
#define  GDMA_OSD_INTEN_osd1_fin_shift                                           (17)
#define  GDMA_OSD_INTEN_osd3_vact_end_shift                                      (11)
#define  GDMA_OSD_INTEN_osd2_vact_end_shift                                      (10)
#define  GDMA_OSD_INTEN_osd1_vact_end_shift                                      (9)
#define  GDMA_OSD_INTEN_osd3_vsync_shift                                         (3)
#define  GDMA_OSD_INTEN_osd2_vsync_shift                                         (2)
#define  GDMA_OSD_INTEN_osd1_vsync_shift                                         (1)
#define  GDMA_OSD_INTEN_write_data_shift                                         (0)
#define  GDMA_OSD_INTEN_osd3_fin_mask                                            (0x00080000)
#define  GDMA_OSD_INTEN_osd2_fin_mask                                            (0x00040000)
#define  GDMA_OSD_INTEN_osd1_fin_mask                                            (0x00020000)
#define  GDMA_OSD_INTEN_osd3_vact_end_mask                                       (0x00000800)
#define  GDMA_OSD_INTEN_osd2_vact_end_mask                                       (0x00000400)
#define  GDMA_OSD_INTEN_osd1_vact_end_mask                                       (0x00000200)
#define  GDMA_OSD_INTEN_osd3_vsync_mask                                          (0x00000008)
#define  GDMA_OSD_INTEN_osd2_vsync_mask                                          (0x00000004)
#define  GDMA_OSD_INTEN_osd1_vsync_mask                                          (0x00000002)
#define  GDMA_OSD_INTEN_write_data_mask                                          (0x00000001)
#define  GDMA_OSD_INTEN_osd3_fin(data)                                           (0x00080000&((data)<<19))
#define  GDMA_OSD_INTEN_osd2_fin(data)                                           (0x00040000&((data)<<18))
#define  GDMA_OSD_INTEN_osd1_fin(data)                                           (0x00020000&((data)<<17))
#define  GDMA_OSD_INTEN_osd3_vact_end(data)                                      (0x00000800&((data)<<11))
#define  GDMA_OSD_INTEN_osd2_vact_end(data)                                      (0x00000400&((data)<<10))
#define  GDMA_OSD_INTEN_osd1_vact_end(data)                                      (0x00000200&((data)<<9))
#define  GDMA_OSD_INTEN_osd3_vsync(data)                                         (0x00000008&((data)<<3))
#define  GDMA_OSD_INTEN_osd2_vsync(data)                                         (0x00000004&((data)<<2))
#define  GDMA_OSD_INTEN_osd1_vsync(data)                                         (0x00000002&((data)<<1))
#define  GDMA_OSD_INTEN_write_data(data)                                         (0x00000001&(data))
#define  GDMA_OSD_INTEN_get_osd3_fin(data)                                       ((0x00080000&(data))>>19)
#define  GDMA_OSD_INTEN_get_osd2_fin(data)                                       ((0x00040000&(data))>>18)
#define  GDMA_OSD_INTEN_get_osd1_fin(data)                                       ((0x00020000&(data))>>17)
#define  GDMA_OSD_INTEN_get_osd3_vact_end(data)                                  ((0x00000800&(data))>>11)
#define  GDMA_OSD_INTEN_get_osd2_vact_end(data)                                  ((0x00000400&(data))>>10)
#define  GDMA_OSD_INTEN_get_osd1_vact_end(data)                                  ((0x00000200&(data))>>9)
#define  GDMA_OSD_INTEN_get_osd3_vsync(data)                                     ((0x00000008&(data))>>3)
#define  GDMA_OSD_INTEN_get_osd2_vsync(data)                                     ((0x00000004&(data))>>2)
#define  GDMA_OSD_INTEN_get_osd1_vsync(data)                                     ((0x00000002&(data))>>1)
#define  GDMA_OSD_INTEN_get_write_data(data)                                     (0x00000001&(data))

#define  GDMA_OSD_INTST                                                         0x1802FC04
#define  GDMA_OSD_INTST_reg_addr                                                 "0xB802FC04"
#define  GDMA_OSD_INTST_reg                                                      0xB802FC04
#define  GDMA_OSD_INTST_inst_addr                                                "0x0049"
#define  set_GDMA_OSD_INTST_reg(data)                                            (*((volatile unsigned int*)GDMA_OSD_INTST_reg)=data)
#define  get_GDMA_OSD_INTST_reg                                                  (*((volatile unsigned int*)GDMA_OSD_INTST_reg))
#define  GDMA_OSD_INTST_osd3_fin_shift                                           (19)
#define  GDMA_OSD_INTST_osd2_fin_shift                                           (18)
#define  GDMA_OSD_INTST_osd1_fin_shift                                           (17)
#define  GDMA_OSD_INTST_osd3_vact_end_shift                                      (11)
#define  GDMA_OSD_INTST_osd2_vact_end_shift                                      (10)
#define  GDMA_OSD_INTST_osd1_vact_end_shift                                      (9)
#define  GDMA_OSD_INTST_osd3_vsync_shift                                         (3)
#define  GDMA_OSD_INTST_osd2_vsync_shift                                         (2)
#define  GDMA_OSD_INTST_osd1_vsync_shift                                         (1)
#define  GDMA_OSD_INTST_write_data_shift                                         (0)
#define  GDMA_OSD_INTST_osd3_fin_mask                                            (0x00080000)
#define  GDMA_OSD_INTST_osd2_fin_mask                                            (0x00040000)
#define  GDMA_OSD_INTST_osd1_fin_mask                                            (0x00020000)
#define  GDMA_OSD_INTST_osd3_vact_end_mask                                       (0x00000800)
#define  GDMA_OSD_INTST_osd2_vact_end_mask                                       (0x00000400)
#define  GDMA_OSD_INTST_osd1_vact_end_mask                                       (0x00000200)
#define  GDMA_OSD_INTST_osd3_vsync_mask                                          (0x00000008)
#define  GDMA_OSD_INTST_osd2_vsync_mask                                          (0x00000004)
#define  GDMA_OSD_INTST_osd1_vsync_mask                                          (0x00000002)
#define  GDMA_OSD_INTST_write_data_mask                                          (0x00000001)
#define  GDMA_OSD_INTST_osd3_fin(data)                                           (0x00080000&((data)<<19))
#define  GDMA_OSD_INTST_osd2_fin(data)                                           (0x00040000&((data)<<18))
#define  GDMA_OSD_INTST_osd1_fin(data)                                           (0x00020000&((data)<<17))
#define  GDMA_OSD_INTST_osd3_vact_end(data)                                      (0x00000800&((data)<<11))
#define  GDMA_OSD_INTST_osd2_vact_end(data)                                      (0x00000400&((data)<<10))
#define  GDMA_OSD_INTST_osd1_vact_end(data)                                      (0x00000200&((data)<<9))
#define  GDMA_OSD_INTST_osd3_vsync(data)                                         (0x00000008&((data)<<3))
#define  GDMA_OSD_INTST_osd2_vsync(data)                                         (0x00000004&((data)<<2))
#define  GDMA_OSD_INTST_osd1_vsync(data)                                         (0x00000002&((data)<<1))
#define  GDMA_OSD_INTST_write_data(data)                                         (0x00000001&(data))
#define  GDMA_OSD_INTST_get_osd3_fin(data)                                       ((0x00080000&(data))>>19)
#define  GDMA_OSD_INTST_get_osd2_fin(data)                                       ((0x00040000&(data))>>18)
#define  GDMA_OSD_INTST_get_osd1_fin(data)                                       ((0x00020000&(data))>>17)
#define  GDMA_OSD_INTST_get_osd3_vact_end(data)                                  ((0x00000800&(data))>>11)
#define  GDMA_OSD_INTST_get_osd2_vact_end(data)                                  ((0x00000400&(data))>>10)
#define  GDMA_OSD_INTST_get_osd1_vact_end(data)                                  ((0x00000200&(data))>>9)
#define  GDMA_OSD_INTST_get_osd3_vsync(data)                                     ((0x00000008&(data))>>3)
#define  GDMA_OSD_INTST_get_osd2_vsync(data)                                     ((0x00000004&(data))>>2)
#define  GDMA_OSD_INTST_get_osd1_vsync(data)                                     ((0x00000002&(data))>>1)
#define  GDMA_OSD_INTST_get_write_data(data)                                     (0x00000001&(data))

#define  GDMA_OSD_INTEN_3D                                                      0x1802FC08
#define  GDMA_OSD_INTEN_3D_reg_addr                                              "0xB802FC08"
#define  GDMA_OSD_INTEN_3D_reg                                                   0xB802FC08
#define  GDMA_OSD_INTEN_3D_inst_addr                                             "0x004A"
#define  set_GDMA_OSD_INTEN_3D_reg(data)                                         (*((volatile unsigned int*)GDMA_OSD_INTEN_3D_reg)=data)
#define  get_GDMA_OSD_INTEN_3D_reg                                               (*((volatile unsigned int*)GDMA_OSD_INTEN_3D_reg))
#define  GDMA_OSD_INTEN_3D_osd3_fin_shift                                        (19)
#define  GDMA_OSD_INTEN_3D_osd2_fin_shift                                        (18)
#define  GDMA_OSD_INTEN_3D_osd1_fin_shift                                        (17)
#define  GDMA_OSD_INTEN_3D_osd3_vact_end_shift                                   (11)
#define  GDMA_OSD_INTEN_3D_osd2_vact_end_shift                                   (10)
#define  GDMA_OSD_INTEN_3D_osd1_vact_end_shift                                   (9)
#define  GDMA_OSD_INTEN_3D_osd3_vsync_shift                                      (3)
#define  GDMA_OSD_INTEN_3D_osd2_vsync_shift                                      (2)
#define  GDMA_OSD_INTEN_3D_osd1_vsync_shift                                      (1)
#define  GDMA_OSD_INTEN_3D_write_data_shift                                      (0)
#define  GDMA_OSD_INTEN_3D_osd3_fin_mask                                         (0x00080000)
#define  GDMA_OSD_INTEN_3D_osd2_fin_mask                                         (0x00040000)
#define  GDMA_OSD_INTEN_3D_osd1_fin_mask                                         (0x00020000)
#define  GDMA_OSD_INTEN_3D_osd3_vact_end_mask                                    (0x00000800)
#define  GDMA_OSD_INTEN_3D_osd2_vact_end_mask                                    (0x00000400)
#define  GDMA_OSD_INTEN_3D_osd1_vact_end_mask                                    (0x00000200)
#define  GDMA_OSD_INTEN_3D_osd3_vsync_mask                                       (0x00000008)
#define  GDMA_OSD_INTEN_3D_osd2_vsync_mask                                       (0x00000004)
#define  GDMA_OSD_INTEN_3D_osd1_vsync_mask                                       (0x00000002)
#define  GDMA_OSD_INTEN_3D_write_data_mask                                       (0x00000001)
#define  GDMA_OSD_INTEN_3D_osd3_fin(data)                                        (0x00080000&((data)<<19))
#define  GDMA_OSD_INTEN_3D_osd2_fin(data)                                        (0x00040000&((data)<<18))
#define  GDMA_OSD_INTEN_3D_osd1_fin(data)                                        (0x00020000&((data)<<17))
#define  GDMA_OSD_INTEN_3D_osd3_vact_end(data)                                   (0x00000800&((data)<<11))
#define  GDMA_OSD_INTEN_3D_osd2_vact_end(data)                                   (0x00000400&((data)<<10))
#define  GDMA_OSD_INTEN_3D_osd1_vact_end(data)                                   (0x00000200&((data)<<9))
#define  GDMA_OSD_INTEN_3D_osd3_vsync(data)                                      (0x00000008&((data)<<3))
#define  GDMA_OSD_INTEN_3D_osd2_vsync(data)                                      (0x00000004&((data)<<2))
#define  GDMA_OSD_INTEN_3D_osd1_vsync(data)                                      (0x00000002&((data)<<1))
#define  GDMA_OSD_INTEN_3D_write_data(data)                                      (0x00000001&(data))
#define  GDMA_OSD_INTEN_3D_get_osd3_fin(data)                                    ((0x00080000&(data))>>19)
#define  GDMA_OSD_INTEN_3D_get_osd2_fin(data)                                    ((0x00040000&(data))>>18)
#define  GDMA_OSD_INTEN_3D_get_osd1_fin(data)                                    ((0x00020000&(data))>>17)
#define  GDMA_OSD_INTEN_3D_get_osd3_vact_end(data)                               ((0x00000800&(data))>>11)
#define  GDMA_OSD_INTEN_3D_get_osd2_vact_end(data)                               ((0x00000400&(data))>>10)
#define  GDMA_OSD_INTEN_3D_get_osd1_vact_end(data)                               ((0x00000200&(data))>>9)
#define  GDMA_OSD_INTEN_3D_get_osd3_vsync(data)                                  ((0x00000008&(data))>>3)
#define  GDMA_OSD_INTEN_3D_get_osd2_vsync(data)                                  ((0x00000004&(data))>>2)
#define  GDMA_OSD_INTEN_3D_get_osd1_vsync(data)                                  ((0x00000002&(data))>>1)
#define  GDMA_OSD_INTEN_3D_get_write_data(data)                                  (0x00000001&(data))

#define  GDMA_OSD_INTST_3D                                                      0x1802FC0C
#define  GDMA_OSD_INTST_3D_reg_addr                                              "0xB802FC0C"
#define  GDMA_OSD_INTST_3D_reg                                                   0xB802FC0C
#define  GDMA_OSD_INTST_3D_inst_addr                                             "0x004B"
#define  set_GDMA_OSD_INTST_3D_reg(data)                                         (*((volatile unsigned int*)GDMA_OSD_INTST_3D_reg)=data)
#define  get_GDMA_OSD_INTST_3D_reg                                               (*((volatile unsigned int*)GDMA_OSD_INTST_3D_reg))
#define  GDMA_OSD_INTST_3D_osd3_fin_shift                                        (19)
#define  GDMA_OSD_INTST_3D_osd2_fin_shift                                        (18)
#define  GDMA_OSD_INTST_3D_osd1_fin_shift                                        (17)
#define  GDMA_OSD_INTST_3D_osd3_vact_end_shift                                   (11)
#define  GDMA_OSD_INTST_3D_osd2_vact_end_shift                                   (10)
#define  GDMA_OSD_INTST_3D_osd1_vact_end_shift                                   (9)
#define  GDMA_OSD_INTST_3D_osd3_vsync_shift                                      (3)
#define  GDMA_OSD_INTST_3D_osd2_vsync_shift                                      (2)
#define  GDMA_OSD_INTST_3D_osd1_vsync_shift                                      (1)
#define  GDMA_OSD_INTST_3D_write_data_shift                                      (0)
#define  GDMA_OSD_INTST_3D_osd3_fin_mask                                         (0x00080000)
#define  GDMA_OSD_INTST_3D_osd2_fin_mask                                         (0x00040000)
#define  GDMA_OSD_INTST_3D_osd1_fin_mask                                         (0x00020000)
#define  GDMA_OSD_INTST_3D_osd3_vact_end_mask                                    (0x00000800)
#define  GDMA_OSD_INTST_3D_osd2_vact_end_mask                                    (0x00000400)
#define  GDMA_OSD_INTST_3D_osd1_vact_end_mask                                    (0x00000200)
#define  GDMA_OSD_INTST_3D_osd3_vsync_mask                                       (0x00000008)
#define  GDMA_OSD_INTST_3D_osd2_vsync_mask                                       (0x00000004)
#define  GDMA_OSD_INTST_3D_osd1_vsync_mask                                       (0x00000002)
#define  GDMA_OSD_INTST_3D_write_data_mask                                       (0x00000001)
#define  GDMA_OSD_INTST_3D_osd3_fin(data)                                        (0x00080000&((data)<<19))
#define  GDMA_OSD_INTST_3D_osd2_fin(data)                                        (0x00040000&((data)<<18))
#define  GDMA_OSD_INTST_3D_osd1_fin(data)                                        (0x00020000&((data)<<17))
#define  GDMA_OSD_INTST_3D_osd3_vact_end(data)                                   (0x00000800&((data)<<11))
#define  GDMA_OSD_INTST_3D_osd2_vact_end(data)                                   (0x00000400&((data)<<10))
#define  GDMA_OSD_INTST_3D_osd1_vact_end(data)                                   (0x00000200&((data)<<9))
#define  GDMA_OSD_INTST_3D_osd3_vsync(data)                                      (0x00000008&((data)<<3))
#define  GDMA_OSD_INTST_3D_osd2_vsync(data)                                      (0x00000004&((data)<<2))
#define  GDMA_OSD_INTST_3D_osd1_vsync(data)                                      (0x00000002&((data)<<1))
#define  GDMA_OSD_INTST_3D_write_data(data)                                      (0x00000001&(data))
#define  GDMA_OSD_INTST_3D_get_osd3_fin(data)                                    ((0x00080000&(data))>>19)
#define  GDMA_OSD_INTST_3D_get_osd2_fin(data)                                    ((0x00040000&(data))>>18)
#define  GDMA_OSD_INTST_3D_get_osd1_fin(data)                                    ((0x00020000&(data))>>17)
#define  GDMA_OSD_INTST_3D_get_osd3_vact_end(data)                               ((0x00000800&(data))>>11)
#define  GDMA_OSD_INTST_3D_get_osd2_vact_end(data)                               ((0x00000400&(data))>>10)
#define  GDMA_OSD_INTST_3D_get_osd1_vact_end(data)                               ((0x00000200&(data))>>9)
#define  GDMA_OSD_INTST_3D_get_osd3_vsync(data)                                  ((0x00000008&(data))>>3)
#define  GDMA_OSD_INTST_3D_get_osd2_vsync(data)                                  ((0x00000004&(data))>>2)
#define  GDMA_OSD_INTST_3D_get_osd1_vsync(data)                                  ((0x00000002&(data))>>1)
#define  GDMA_OSD_INTST_3D_get_write_data(data)                                  (0x00000001&(data))

#define  GDMA_DMA_INTEN                                                         0x1802FC10
#define  GDMA_DMA_INTEN_reg_addr                                                 "0xB802FC10"
#define  GDMA_DMA_INTEN_reg                                                      0xB802FC10
#define  GDMA_DMA_INTEN_inst_addr                                                "0x004C"
#define  set_GDMA_DMA_INTEN_reg(data)                                            (*((volatile unsigned int*)GDMA_DMA_INTEN_reg)=data)
#define  get_GDMA_DMA_INTEN_reg                                                  (*((volatile unsigned int*)GDMA_DMA_INTEN_reg))
#define  GDMA_DMA_INTEN_afbc_acc_sync_shift                                      (20)
#define  GDMA_DMA_INTEN_osd3_acc_sync_shift                                      (11)
#define  GDMA_DMA_INTEN_osd2_acc_sync_shift                                      (10)
#define  GDMA_DMA_INTEN_osd1_acc_sync_shift                                      (9)
#define  GDMA_DMA_INTEN_osd3_udfl_shift                                          (3)
#define  GDMA_DMA_INTEN_osd2_udfl_shift                                          (2)
#define  GDMA_DMA_INTEN_osd1_udfl_shift                                          (1)
#define  GDMA_DMA_INTEN_write_data_shift                                         (0)
#define  GDMA_DMA_INTEN_afbc_acc_sync_mask                                       (0x00100000)
#define  GDMA_DMA_INTEN_osd3_acc_sync_mask                                       (0x00000800)
#define  GDMA_DMA_INTEN_osd2_acc_sync_mask                                       (0x00000400)
#define  GDMA_DMA_INTEN_osd1_acc_sync_mask                                       (0x00000200)
#define  GDMA_DMA_INTEN_osd3_udfl_mask                                           (0x00000008)
#define  GDMA_DMA_INTEN_osd2_udfl_mask                                           (0x00000004)
#define  GDMA_DMA_INTEN_osd1_udfl_mask                                           (0x00000002)
#define  GDMA_DMA_INTEN_write_data_mask                                          (0x00000001)
#define  GDMA_DMA_INTEN_afbc_acc_sync(data)                                      (0x00100000&((data)<<20))
#define  GDMA_DMA_INTEN_osd3_acc_sync(data)                                      (0x00000800&((data)<<11))
#define  GDMA_DMA_INTEN_osd2_acc_sync(data)                                      (0x00000400&((data)<<10))
#define  GDMA_DMA_INTEN_osd1_acc_sync(data)                                      (0x00000200&((data)<<9))
#define  GDMA_DMA_INTEN_osd3_udfl(data)                                          (0x00000008&((data)<<3))
#define  GDMA_DMA_INTEN_osd2_udfl(data)                                          (0x00000004&((data)<<2))
#define  GDMA_DMA_INTEN_osd1_udfl(data)                                          (0x00000002&((data)<<1))
#define  GDMA_DMA_INTEN_write_data(data)                                         (0x00000001&(data))
#define  GDMA_DMA_INTEN_get_afbc_acc_sync(data)                                  ((0x00100000&(data))>>20)
#define  GDMA_DMA_INTEN_get_osd3_acc_sync(data)                                  ((0x00000800&(data))>>11)
#define  GDMA_DMA_INTEN_get_osd2_acc_sync(data)                                  ((0x00000400&(data))>>10)
#define  GDMA_DMA_INTEN_get_osd1_acc_sync(data)                                  ((0x00000200&(data))>>9)
#define  GDMA_DMA_INTEN_get_osd3_udfl(data)                                      ((0x00000008&(data))>>3)
#define  GDMA_DMA_INTEN_get_osd2_udfl(data)                                      ((0x00000004&(data))>>2)
#define  GDMA_DMA_INTEN_get_osd1_udfl(data)                                      ((0x00000002&(data))>>1)
#define  GDMA_DMA_INTEN_get_write_data(data)                                     (0x00000001&(data))

#define  GDMA_DMA_INTST                                                         0x1802FC14
#define  GDMA_DMA_INTST_reg_addr                                                 "0xB802FC14"
#define  GDMA_DMA_INTST_reg                                                      0xB802FC14
#define  GDMA_DMA_INTST_inst_addr                                                "0x004D"
#define  set_GDMA_DMA_INTST_reg(data)                                            (*((volatile unsigned int*)GDMA_DMA_INTST_reg)=data)
#define  get_GDMA_DMA_INTST_reg                                                  (*((volatile unsigned int*)GDMA_DMA_INTST_reg))
#define  GDMA_DMA_INTST_afbc_acc_sync_shift                                      (20)
#define  GDMA_DMA_INTST_osd3_acc_sync_shift                                      (11)
#define  GDMA_DMA_INTST_osd2_acc_sync_shift                                      (10)
#define  GDMA_DMA_INTST_osd1_acc_sync_shift                                      (9)
#define  GDMA_DMA_INTST_osd3_udfl_shift                                          (3)
#define  GDMA_DMA_INTST_osd2_udfl_shift                                          (2)
#define  GDMA_DMA_INTST_osd1_udfl_shift                                          (1)
#define  GDMA_DMA_INTST_write_data_shift                                         (0)
#define  GDMA_DMA_INTST_afbc_acc_sync_mask                                       (0x00100000)
#define  GDMA_DMA_INTST_osd3_acc_sync_mask                                       (0x00000800)
#define  GDMA_DMA_INTST_osd2_acc_sync_mask                                       (0x00000400)
#define  GDMA_DMA_INTST_osd1_acc_sync_mask                                       (0x00000200)
#define  GDMA_DMA_INTST_osd3_udfl_mask                                           (0x00000008)
#define  GDMA_DMA_INTST_osd2_udfl_mask                                           (0x00000004)
#define  GDMA_DMA_INTST_osd1_udfl_mask                                           (0x00000002)
#define  GDMA_DMA_INTST_write_data_mask                                          (0x00000001)
#define  GDMA_DMA_INTST_afbc_acc_sync(data)                                      (0x00100000&((data)<<20))
#define  GDMA_DMA_INTST_osd3_acc_sync(data)                                      (0x00000800&((data)<<11))
#define  GDMA_DMA_INTST_osd2_acc_sync(data)                                      (0x00000400&((data)<<10))
#define  GDMA_DMA_INTST_osd1_acc_sync(data)                                      (0x00000200&((data)<<9))
#define  GDMA_DMA_INTST_osd3_udfl(data)                                          (0x00000008&((data)<<3))
#define  GDMA_DMA_INTST_osd2_udfl(data)                                          (0x00000004&((data)<<2))
#define  GDMA_DMA_INTST_osd1_udfl(data)                                          (0x00000002&((data)<<1))
#define  GDMA_DMA_INTST_write_data(data)                                         (0x00000001&(data))
#define  GDMA_DMA_INTST_get_afbc_acc_sync(data)                                  ((0x00100000&(data))>>20)
#define  GDMA_DMA_INTST_get_osd3_acc_sync(data)                                  ((0x00000800&(data))>>11)
#define  GDMA_DMA_INTST_get_osd2_acc_sync(data)                                  ((0x00000400&(data))>>10)
#define  GDMA_DMA_INTST_get_osd1_acc_sync(data)                                  ((0x00000200&(data))>>9)
#define  GDMA_DMA_INTST_get_osd3_udfl(data)                                      ((0x00000008&(data))>>3)
#define  GDMA_DMA_INTST_get_osd2_udfl(data)                                      ((0x00000004&(data))>>2)
#define  GDMA_DMA_INTST_get_osd1_udfl(data)                                      ((0x00000002&(data))>>1)
#define  GDMA_DMA_INTST_get_write_data(data)                                     (0x00000001&(data))

#define  GDMA_DMA_INTEN_3D                                                      0x1802FC18
#define  GDMA_DMA_INTEN_3D_reg_addr                                              "0xB802FC18"
#define  GDMA_DMA_INTEN_3D_reg                                                   0xB802FC18
#define  GDMA_DMA_INTEN_3D_inst_addr                                             "0x004E"
#define  set_GDMA_DMA_INTEN_3D_reg(data)                                         (*((volatile unsigned int*)GDMA_DMA_INTEN_3D_reg)=data)
#define  get_GDMA_DMA_INTEN_3D_reg                                               (*((volatile unsigned int*)GDMA_DMA_INTEN_3D_reg))
#define  GDMA_DMA_INTEN_3D_osd3_acc_sync_shift                                   (11)
#define  GDMA_DMA_INTEN_3D_osd2_acc_sync_shift                                   (10)
#define  GDMA_DMA_INTEN_3D_osd1_acc_sync_shift                                   (9)
#define  GDMA_DMA_INTEN_3D_osd3_udfl_shift                                       (3)
#define  GDMA_DMA_INTEN_3D_osd2_udfl_shift                                       (2)
#define  GDMA_DMA_INTEN_3D_osd1_udfl_shift                                       (1)
#define  GDMA_DMA_INTEN_3D_write_data_shift                                      (0)
#define  GDMA_DMA_INTEN_3D_osd3_acc_sync_mask                                    (0x00000800)
#define  GDMA_DMA_INTEN_3D_osd2_acc_sync_mask                                    (0x00000400)
#define  GDMA_DMA_INTEN_3D_osd1_acc_sync_mask                                    (0x00000200)
#define  GDMA_DMA_INTEN_3D_osd3_udfl_mask                                        (0x00000008)
#define  GDMA_DMA_INTEN_3D_osd2_udfl_mask                                        (0x00000004)
#define  GDMA_DMA_INTEN_3D_osd1_udfl_mask                                        (0x00000002)
#define  GDMA_DMA_INTEN_3D_write_data_mask                                       (0x00000001)
#define  GDMA_DMA_INTEN_3D_osd3_acc_sync(data)                                   (0x00000800&((data)<<11))
#define  GDMA_DMA_INTEN_3D_osd2_acc_sync(data)                                   (0x00000400&((data)<<10))
#define  GDMA_DMA_INTEN_3D_osd1_acc_sync(data)                                   (0x00000200&((data)<<9))
#define  GDMA_DMA_INTEN_3D_osd3_udfl(data)                                       (0x00000008&((data)<<3))
#define  GDMA_DMA_INTEN_3D_osd2_udfl(data)                                       (0x00000004&((data)<<2))
#define  GDMA_DMA_INTEN_3D_osd1_udfl(data)                                       (0x00000002&((data)<<1))
#define  GDMA_DMA_INTEN_3D_write_data(data)                                      (0x00000001&(data))
#define  GDMA_DMA_INTEN_3D_get_osd3_acc_sync(data)                               ((0x00000800&(data))>>11)
#define  GDMA_DMA_INTEN_3D_get_osd2_acc_sync(data)                               ((0x00000400&(data))>>10)
#define  GDMA_DMA_INTEN_3D_get_osd1_acc_sync(data)                               ((0x00000200&(data))>>9)
#define  GDMA_DMA_INTEN_3D_get_osd3_udfl(data)                                   ((0x00000008&(data))>>3)
#define  GDMA_DMA_INTEN_3D_get_osd2_udfl(data)                                   ((0x00000004&(data))>>2)
#define  GDMA_DMA_INTEN_3D_get_osd1_udfl(data)                                   ((0x00000002&(data))>>1)
#define  GDMA_DMA_INTEN_3D_get_write_data(data)                                  (0x00000001&(data))

#define  GDMA_DMA_INTST_3D                                                      0x1802FC1C
#define  GDMA_DMA_INTST_3D_reg_addr                                              "0xB802FC1C"
#define  GDMA_DMA_INTST_3D_reg                                                   0xB802FC1C
#define  GDMA_DMA_INTST_3D_inst_addr                                             "0x004F"
#define  set_GDMA_DMA_INTST_3D_reg(data)                                         (*((volatile unsigned int*)GDMA_DMA_INTST_3D_reg)=data)
#define  get_GDMA_DMA_INTST_3D_reg                                               (*((volatile unsigned int*)GDMA_DMA_INTST_3D_reg))
#define  GDMA_DMA_INTST_3D_osd3_acc_sync_shift                                   (11)
#define  GDMA_DMA_INTST_3D_osd2_acc_sync_shift                                   (10)
#define  GDMA_DMA_INTST_3D_osd1_acc_sync_shift                                   (9)
#define  GDMA_DMA_INTST_3D_osd3_udfl_shift                                       (3)
#define  GDMA_DMA_INTST_3D_osd2_udfl_shift                                       (2)
#define  GDMA_DMA_INTST_3D_osd1_udfl_shift                                       (1)
#define  GDMA_DMA_INTST_3D_write_data_shift                                      (0)
#define  GDMA_DMA_INTST_3D_osd3_acc_sync_mask                                    (0x00000800)
#define  GDMA_DMA_INTST_3D_osd2_acc_sync_mask                                    (0x00000400)
#define  GDMA_DMA_INTST_3D_osd1_acc_sync_mask                                    (0x00000200)
#define  GDMA_DMA_INTST_3D_osd3_udfl_mask                                        (0x00000008)
#define  GDMA_DMA_INTST_3D_osd2_udfl_mask                                        (0x00000004)
#define  GDMA_DMA_INTST_3D_osd1_udfl_mask                                        (0x00000002)
#define  GDMA_DMA_INTST_3D_write_data_mask                                       (0x00000001)
#define  GDMA_DMA_INTST_3D_osd3_acc_sync(data)                                   (0x00000800&((data)<<11))
#define  GDMA_DMA_INTST_3D_osd2_acc_sync(data)                                   (0x00000400&((data)<<10))
#define  GDMA_DMA_INTST_3D_osd1_acc_sync(data)                                   (0x00000200&((data)<<9))
#define  GDMA_DMA_INTST_3D_osd3_udfl(data)                                       (0x00000008&((data)<<3))
#define  GDMA_DMA_INTST_3D_osd2_udfl(data)                                       (0x00000004&((data)<<2))
#define  GDMA_DMA_INTST_3D_osd1_udfl(data)                                       (0x00000002&((data)<<1))
#define  GDMA_DMA_INTST_3D_write_data(data)                                      (0x00000001&(data))
#define  GDMA_DMA_INTST_3D_get_osd3_acc_sync(data)                               ((0x00000800&(data))>>11)
#define  GDMA_DMA_INTST_3D_get_osd2_acc_sync(data)                               ((0x00000400&(data))>>10)
#define  GDMA_DMA_INTST_3D_get_osd1_acc_sync(data)                               ((0x00000200&(data))>>9)
#define  GDMA_DMA_INTST_3D_get_osd3_udfl(data)                                   ((0x00000008&(data))>>3)
#define  GDMA_DMA_INTST_3D_get_osd2_udfl(data)                                   ((0x00000004&(data))>>2)
#define  GDMA_DMA_INTST_3D_get_osd1_udfl(data)                                   ((0x00000002&(data))>>1)
#define  GDMA_DMA_INTST_3D_get_write_data(data)                                  (0x00000001&(data))

#define  GDMA_MBIST                                                             0x1802FDC0
#define  GDMA_MBIST_reg_addr                                                     "0xB802FDC0"
#define  GDMA_MBIST_reg                                                          0xB802FDC0
#define  GDMA_MBIST_inst_addr                                                    "0x0050"
#define  set_GDMA_MBIST_reg(data)                                                (*((volatile unsigned int*)GDMA_MBIST_reg)=data)
#define  get_GDMA_MBIST_reg                                                      (*((volatile unsigned int*)GDMA_MBIST_reg))
#define  GDMA_MBIST_test_rwm_shift                                               (24)
#define  GDMA_MBIST_afbc_header_ls_shift                                         (17)
#define  GDMA_MBIST_afbc_ls_shift                                                (16)
#define  GDMA_MBIST_sr3_ls_shift                                                 (15)
#define  GDMA_MBIST_test1_shift                                                  (5)
#define  GDMA_MBIST_rme_shift                                                    (4)
#define  GDMA_MBIST_rm_shift                                                     (0)
#define  GDMA_MBIST_test_rwm_mask                                                (0x01000000)
#define  GDMA_MBIST_afbc_header_ls_mask                                          (0x00020000)
#define  GDMA_MBIST_afbc_ls_mask                                                 (0x00010000)
#define  GDMA_MBIST_sr3_ls_mask                                                  (0x00008000)
#define  GDMA_MBIST_test1_mask                                                   (0x00000020)
#define  GDMA_MBIST_rme_mask                                                     (0x00000010)
#define  GDMA_MBIST_rm_mask                                                      (0x0000000F)
#define  GDMA_MBIST_test_rwm(data)                                               (0x01000000&((data)<<24))
#define  GDMA_MBIST_afbc_header_ls(data)                                         (0x00020000&((data)<<17))
#define  GDMA_MBIST_afbc_ls(data)                                                (0x00010000&((data)<<16))
#define  GDMA_MBIST_sr3_ls(data)                                                 (0x00008000&((data)<<15))
#define  GDMA_MBIST_test1(data)                                                  (0x00000020&((data)<<5))
#define  GDMA_MBIST_rme(data)                                                    (0x00000010&((data)<<4))
#define  GDMA_MBIST_rm(data)                                                     (0x0000000F&(data))
#define  GDMA_MBIST_get_test_rwm(data)                                           ((0x01000000&(data))>>24)
#define  GDMA_MBIST_get_afbc_header_ls(data)                                     ((0x00020000&(data))>>17)
#define  GDMA_MBIST_get_afbc_ls(data)                                            ((0x00010000&(data))>>16)
#define  GDMA_MBIST_get_sr3_ls(data)                                             ((0x00008000&(data))>>15)
#define  GDMA_MBIST_get_test1(data)                                              ((0x00000020&(data))>>5)
#define  GDMA_MBIST_get_rme(data)                                                ((0x00000010&(data))>>4)
#define  GDMA_MBIST_get_rm(data)                                                 (0x0000000F&(data))

#define  GDMA_MBIST_FAIL                                                        0x1802FDC4
#define  GDMA_MBIST_FAIL_reg_addr                                                "0xB802FDC4"
#define  GDMA_MBIST_FAIL_reg                                                     0xB802FDC4
#define  GDMA_MBIST_FAIL_inst_addr                                               "0x0051"
#define  set_GDMA_MBIST_FAIL_reg(data)                                           (*((volatile unsigned int*)GDMA_MBIST_FAIL_reg)=data)
#define  get_GDMA_MBIST_FAIL_reg                                                 (*((volatile unsigned int*)GDMA_MBIST_FAIL_reg))
#define  GDMA_MBIST_FAIL_afbc_lb_shift                                           (20)
#define  GDMA_MBIST_FAIL_sr3_lb_shift                                            (16)
#define  GDMA_MBIST_FAIL_afbc_header_shift                                       (12)
#define  GDMA_MBIST_FAIL_clut_shift                                              (9)
#define  GDMA_MBIST_FAIL_dispbuf_shift                                           (6)
#define  GDMA_MBIST_FAIL_rbuf_shift                                              (2)
#define  GDMA_MBIST_FAIL_rbuf_share_shift                                        (0)
#define  GDMA_MBIST_FAIL_afbc_lb_mask                                            (0x0FF00000)
#define  GDMA_MBIST_FAIL_sr3_lb_mask                                             (0x000F0000)
#define  GDMA_MBIST_FAIL_afbc_header_mask                                        (0x00001000)
#define  GDMA_MBIST_FAIL_clut_mask                                               (0x00000200)
#define  GDMA_MBIST_FAIL_dispbuf_mask                                            (0x000001C0)
#define  GDMA_MBIST_FAIL_rbuf_mask                                               (0x0000003C)
#define  GDMA_MBIST_FAIL_rbuf_share_mask                                         (0x00000003)
#define  GDMA_MBIST_FAIL_afbc_lb(data)                                           (0x0FF00000&((data)<<20))
#define  GDMA_MBIST_FAIL_sr3_lb(data)                                            (0x000F0000&((data)<<16))
#define  GDMA_MBIST_FAIL_afbc_header(data)                                       (0x00001000&((data)<<12))
#define  GDMA_MBIST_FAIL_clut(data)                                              (0x00000200&((data)<<9))
#define  GDMA_MBIST_FAIL_dispbuf(data)                                           (0x000001C0&((data)<<6))
#define  GDMA_MBIST_FAIL_rbuf(data)                                              (0x0000003C&((data)<<2))
#define  GDMA_MBIST_FAIL_rbuf_share(data)                                        (0x00000003&(data))
#define  GDMA_MBIST_FAIL_get_afbc_lb(data)                                       ((0x0FF00000&(data))>>20)
#define  GDMA_MBIST_FAIL_get_sr3_lb(data)                                        ((0x000F0000&(data))>>16)
#define  GDMA_MBIST_FAIL_get_afbc_header(data)                                   ((0x00001000&(data))>>12)
#define  GDMA_MBIST_FAIL_get_clut(data)                                          ((0x00000200&(data))>>9)
#define  GDMA_MBIST_FAIL_get_dispbuf(data)                                       ((0x000001C0&(data))>>6)
#define  GDMA_MBIST_FAIL_get_rbuf(data)                                          ((0x0000003C&(data))>>2)
#define  GDMA_MBIST_FAIL_get_rbuf_share(data)                                    (0x00000003&(data))

#define  GDMA_MBIST_DRF_FAIL                                                    0x1802FDCC
#define  GDMA_MBIST_DRF_FAIL_reg_addr                                            "0xB802FDCC"
#define  GDMA_MBIST_DRF_FAIL_reg                                                 0xB802FDCC
#define  GDMA_MBIST_DRF_FAIL_inst_addr                                           "0x0052"
#define  set_GDMA_MBIST_DRF_FAIL_reg(data)                                       (*((volatile unsigned int*)GDMA_MBIST_DRF_FAIL_reg)=data)
#define  get_GDMA_MBIST_DRF_FAIL_reg                                             (*((volatile unsigned int*)GDMA_MBIST_DRF_FAIL_reg))
#define  GDMA_MBIST_DRF_FAIL_afbc_lb_shift                                       (20)
#define  GDMA_MBIST_DRF_FAIL_sr3_lb_shift                                        (16)
#define  GDMA_MBIST_DRF_FAIL_afbc_header_shift                                   (12)
#define  GDMA_MBIST_DRF_FAIL_clut_shift                                          (9)
#define  GDMA_MBIST_DRF_FAIL_dispbuf_shift                                       (6)
#define  GDMA_MBIST_DRF_FAIL_rbuf_shift                                          (2)
#define  GDMA_MBIST_DRF_FAIL_rbuf_share_shift                                    (0)
#define  GDMA_MBIST_DRF_FAIL_afbc_lb_mask                                        (0x0FF00000)
#define  GDMA_MBIST_DRF_FAIL_sr3_lb_mask                                         (0x000F0000)
#define  GDMA_MBIST_DRF_FAIL_afbc_header_mask                                    (0x00001000)
#define  GDMA_MBIST_DRF_FAIL_clut_mask                                           (0x00000200)
#define  GDMA_MBIST_DRF_FAIL_dispbuf_mask                                        (0x000001C0)
#define  GDMA_MBIST_DRF_FAIL_rbuf_mask                                           (0x0000003C)
#define  GDMA_MBIST_DRF_FAIL_rbuf_share_mask                                     (0x00000003)
#define  GDMA_MBIST_DRF_FAIL_afbc_lb(data)                                       (0x0FF00000&((data)<<20))
#define  GDMA_MBIST_DRF_FAIL_sr3_lb(data)                                        (0x000F0000&((data)<<16))
#define  GDMA_MBIST_DRF_FAIL_afbc_header(data)                                   (0x00001000&((data)<<12))
#define  GDMA_MBIST_DRF_FAIL_clut(data)                                          (0x00000200&((data)<<9))
#define  GDMA_MBIST_DRF_FAIL_dispbuf(data)                                       (0x000001C0&((data)<<6))
#define  GDMA_MBIST_DRF_FAIL_rbuf(data)                                          (0x0000003C&((data)<<2))
#define  GDMA_MBIST_DRF_FAIL_rbuf_share(data)                                    (0x00000003&(data))
#define  GDMA_MBIST_DRF_FAIL_get_afbc_lb(data)                                   ((0x0FF00000&(data))>>20)
#define  GDMA_MBIST_DRF_FAIL_get_sr3_lb(data)                                    ((0x000F0000&(data))>>16)
#define  GDMA_MBIST_DRF_FAIL_get_afbc_header(data)                               ((0x00001000&(data))>>12)
#define  GDMA_MBIST_DRF_FAIL_get_clut(data)                                      ((0x00000200&(data))>>9)
#define  GDMA_MBIST_DRF_FAIL_get_dispbuf(data)                                   ((0x000001C0&(data))>>6)
#define  GDMA_MBIST_DRF_FAIL_get_rbuf(data)                                      ((0x0000003C&(data))>>2)
#define  GDMA_MBIST_DRF_FAIL_get_rbuf_share(data)                                (0x00000003&(data))

#define  GDMA_DBG                                                               0x1802FD00
#define  GDMA_DBG_reg_addr                                                       "0xB802FD00"
#define  GDMA_DBG_reg                                                            0xB802FD00
#define  GDMA_DBG_inst_addr                                                      "0x0053"
#define  set_GDMA_DBG_reg(data)                                                  (*((volatile unsigned int*)GDMA_DBG_reg)=data)
#define  get_GDMA_DBG_reg                                                        (*((volatile unsigned int*)GDMA_DBG_reg))
#define  GDMA_DBG_write_en3_shift                                                (25)
#define  GDMA_DBG_sel1_shift                                                     (16)
#define  GDMA_DBG_write_en2_shift                                                (13)
#define  GDMA_DBG_sel0_shift                                                     (4)
#define  GDMA_DBG_write_en1_shift                                                (1)
#define  GDMA_DBG_en_shift                                                       (0)
#define  GDMA_DBG_write_en3_mask                                                 (0x02000000)
#define  GDMA_DBG_sel1_mask                                                      (0x01FF0000)
#define  GDMA_DBG_write_en2_mask                                                 (0x00002000)
#define  GDMA_DBG_sel0_mask                                                      (0x00001FF0)
#define  GDMA_DBG_write_en1_mask                                                 (0x00000002)
#define  GDMA_DBG_en_mask                                                        (0x00000001)
#define  GDMA_DBG_write_en3(data)                                                (0x02000000&((data)<<25))
#define  GDMA_DBG_sel1(data)                                                     (0x01FF0000&((data)<<16))
#define  GDMA_DBG_write_en2(data)                                                (0x00002000&((data)<<13))
#define  GDMA_DBG_sel0(data)                                                     (0x00001FF0&((data)<<4))
#define  GDMA_DBG_write_en1(data)                                                (0x00000002&((data)<<1))
#define  GDMA_DBG_en(data)                                                       (0x00000001&(data))
#define  GDMA_DBG_get_write_en3(data)                                            ((0x02000000&(data))>>25)
#define  GDMA_DBG_get_sel1(data)                                                 ((0x01FF0000&(data))>>16)
#define  GDMA_DBG_get_write_en2(data)                                            ((0x00002000&(data))>>13)
#define  GDMA_DBG_get_sel0(data)                                                 ((0x00001FF0&(data))>>4)
#define  GDMA_DBG_get_write_en1(data)                                            ((0x00000002&(data))>>1)
#define  GDMA_DBG_get_en(data)                                                   (0x00000001&(data))

#define  GDMA_DBG_WI_INFO                                                       0x1802FD0C
#define  GDMA_DBG_WI_INFO_reg_addr                                               "0xB802FD0C"
#define  GDMA_DBG_WI_INFO_reg                                                    0xB802FD0C
#define  GDMA_DBG_WI_INFO_inst_addr                                              "0x0054"
#define  set_GDMA_DBG_WI_INFO_reg(data)                                          (*((volatile unsigned int*)GDMA_DBG_WI_INFO_reg)=data)
#define  get_GDMA_DBG_WI_INFO_reg                                                (*((volatile unsigned int*)GDMA_DBG_WI_INFO_reg))
#define  GDMA_DBG_WI_INFO_sel_shift                                              (0)
#define  GDMA_DBG_WI_INFO_sel_mask                                               (0x00000007)
#define  GDMA_DBG_WI_INFO_sel(data)                                              (0x00000007&(data))
#define  GDMA_DBG_WI_INFO_get_sel(data)                                          (0x00000007&(data))

#define  GDMA_DBG_OSD_WI_0                                                      0x1802FD10
#define  GDMA_DBG_OSD_WI_0_reg_addr                                              "0xB802FD10"
#define  GDMA_DBG_OSD_WI_0_reg                                                   0xB802FD10
#define  GDMA_DBG_OSD_WI_0_inst_addr                                             "0x0055"
#define  set_GDMA_DBG_OSD_WI_0_reg(data)                                         (*((volatile unsigned int*)GDMA_DBG_OSD_WI_0_reg)=data)
#define  get_GDMA_DBG_OSD_WI_0_reg                                               (*((volatile unsigned int*)GDMA_DBG_OSD_WI_0_reg))
#define  GDMA_DBG_OSD_WI_0_height_shift                                          (16)
#define  GDMA_DBG_OSD_WI_0_width_shift                                           (0)
#define  GDMA_DBG_OSD_WI_0_height_mask                                           (0xFFFF0000)
#define  GDMA_DBG_OSD_WI_0_width_mask                                            (0x0000FFFF)
#define  GDMA_DBG_OSD_WI_0_height(data)                                          (0xFFFF0000&((data)<<16))
#define  GDMA_DBG_OSD_WI_0_width(data)                                           (0x0000FFFF&(data))
#define  GDMA_DBG_OSD_WI_0_get_height(data)                                      ((0xFFFF0000&(data))>>16)
#define  GDMA_DBG_OSD_WI_0_get_width(data)                                       (0x0000FFFF&(data))

#define  GDMA_DBG_OSD_WI_1                                                      0x1802FD14
#define  GDMA_DBG_OSD_WI_1_reg_addr                                              "0xB802FD14"
#define  GDMA_DBG_OSD_WI_1_reg                                                   0xB802FD14
#define  GDMA_DBG_OSD_WI_1_inst_addr                                             "0x0056"
#define  set_GDMA_DBG_OSD_WI_1_reg(data)                                         (*((volatile unsigned int*)GDMA_DBG_OSD_WI_1_reg)=data)
#define  get_GDMA_DBG_OSD_WI_1_reg                                               (*((volatile unsigned int*)GDMA_DBG_OSD_WI_1_reg))
#define  GDMA_DBG_OSD_WI_1_extension_mode_shift                                  (31)
#define  GDMA_DBG_OSD_WI_1_rgb_order_shift                                       (28)
#define  GDMA_DBG_OSD_WI_1_alpha_replace_type_shift                              (27)
#define  GDMA_DBG_OSD_WI_1_const_alpha_enable_shift                              (26)
#define  GDMA_DBG_OSD_WI_1_object_type_shift                                     (24)
#define  GDMA_DBG_OSD_WI_1_alpha_shift                                           (16)
#define  GDMA_DBG_OSD_WI_1_clut_format_shift                                     (10)
#define  GDMA_DBG_OSD_WI_1_endian_shift                                          (9)
#define  GDMA_DBG_OSD_WI_1_keep_prev_clut_shift                                  (8)
#define  GDMA_DBG_OSD_WI_1_compress_shift                                        (7)
#define  GDMA_DBG_OSD_WI_1_img_compress_shift                                    (6)
#define  GDMA_DBG_OSD_WI_1_colortype_shift                                       (0)
#define  GDMA_DBG_OSD_WI_1_extension_mode_mask                                   (0x80000000)
#define  GDMA_DBG_OSD_WI_1_rgb_order_mask                                        (0x70000000)
#define  GDMA_DBG_OSD_WI_1_alpha_replace_type_mask                               (0x08000000)
#define  GDMA_DBG_OSD_WI_1_const_alpha_enable_mask                               (0x04000000)
#define  GDMA_DBG_OSD_WI_1_object_type_mask                                      (0x01000000)
#define  GDMA_DBG_OSD_WI_1_alpha_mask                                            (0x00FF0000)
#define  GDMA_DBG_OSD_WI_1_clut_format_mask                                      (0x00000400)
#define  GDMA_DBG_OSD_WI_1_endian_mask                                           (0x00000200)
#define  GDMA_DBG_OSD_WI_1_keep_prev_clut_mask                                   (0x00000100)
#define  GDMA_DBG_OSD_WI_1_compress_mask                                         (0x00000080)
#define  GDMA_DBG_OSD_WI_1_img_compress_mask                                     (0x00000040)
#define  GDMA_DBG_OSD_WI_1_colortype_mask                                        (0x0000001F)
#define  GDMA_DBG_OSD_WI_1_extension_mode(data)                                  (0x80000000&((data)<<31))
#define  GDMA_DBG_OSD_WI_1_rgb_order(data)                                       (0x70000000&((data)<<28))
#define  GDMA_DBG_OSD_WI_1_alpha_replace_type(data)                              (0x08000000&((data)<<27))
#define  GDMA_DBG_OSD_WI_1_const_alpha_enable(data)                              (0x04000000&((data)<<26))
#define  GDMA_DBG_OSD_WI_1_object_type(data)                                     (0x01000000&((data)<<24))
#define  GDMA_DBG_OSD_WI_1_alpha(data)                                           (0x00FF0000&((data)<<16))
#define  GDMA_DBG_OSD_WI_1_clut_format(data)                                     (0x00000400&((data)<<10))
#define  GDMA_DBG_OSD_WI_1_endian(data)                                          (0x00000200&((data)<<9))
#define  GDMA_DBG_OSD_WI_1_keep_prev_clut(data)                                  (0x00000100&((data)<<8))
#define  GDMA_DBG_OSD_WI_1_compress(data)                                        (0x00000080&((data)<<7))
#define  GDMA_DBG_OSD_WI_1_img_compress(data)                                    (0x00000040&((data)<<6))
#define  GDMA_DBG_OSD_WI_1_colortype(data)                                       (0x0000001F&(data))
#define  GDMA_DBG_OSD_WI_1_get_extension_mode(data)                              ((0x80000000&(data))>>31)
#define  GDMA_DBG_OSD_WI_1_get_rgb_order(data)                                   ((0x70000000&(data))>>28)
#define  GDMA_DBG_OSD_WI_1_get_alpha_replace_type(data)                          ((0x08000000&(data))>>27)
#define  GDMA_DBG_OSD_WI_1_get_const_alpha_enable(data)                          ((0x04000000&(data))>>26)
#define  GDMA_DBG_OSD_WI_1_get_object_type(data)                                 ((0x01000000&(data))>>24)
#define  GDMA_DBG_OSD_WI_1_get_alpha(data)                                       ((0x00FF0000&(data))>>16)
#define  GDMA_DBG_OSD_WI_1_get_clut_format(data)                                 ((0x00000400&(data))>>10)
#define  GDMA_DBG_OSD_WI_1_get_endian(data)                                      ((0x00000200&(data))>>9)
#define  GDMA_DBG_OSD_WI_1_get_keep_prev_clut(data)                              ((0x00000100&(data))>>8)
#define  GDMA_DBG_OSD_WI_1_get_compress(data)                                    ((0x00000080&(data))>>7)
#define  GDMA_DBG_OSD_WI_1_get_img_compress(data)                                ((0x00000040&(data))>>6)
#define  GDMA_DBG_OSD_WI_1_get_colortype(data)                                   (0x0000001F&(data))

#define  GDMA_DBG_OSD_WI_2                                                      0x1802FD18
#define  GDMA_DBG_OSD_WI_2_reg_addr                                              "0xB802FD18"
#define  GDMA_DBG_OSD_WI_2_reg                                                   0xB802FD18
#define  GDMA_DBG_OSD_WI_2_inst_addr                                             "0x0057"
#define  set_GDMA_DBG_OSD_WI_2_reg(data)                                         (*((volatile unsigned int*)GDMA_DBG_OSD_WI_2_reg)=data)
#define  get_GDMA_DBG_OSD_WI_2_reg                                               (*((volatile unsigned int*)GDMA_DBG_OSD_WI_2_reg))
#define  GDMA_DBG_OSD_WI_2_top_addr_shift                                        (0)
#define  GDMA_DBG_OSD_WI_2_top_addr_mask                                         (0xFFFFFFFF)
#define  GDMA_DBG_OSD_WI_2_top_addr(data)                                        (0xFFFFFFFF&(data))
#define  GDMA_DBG_OSD_WI_2_get_top_addr(data)                                    (0xFFFFFFFF&(data))

#define  GDMA_DBG_OSD_WI_3                                                      0x1802FD1C
#define  GDMA_DBG_OSD_WI_3_reg_addr                                              "0xB802FD1C"
#define  GDMA_DBG_OSD_WI_3_reg                                                   0xB802FD1C
#define  GDMA_DBG_OSD_WI_3_inst_addr                                             "0x0058"
#define  set_GDMA_DBG_OSD_WI_3_reg(data)                                         (*((volatile unsigned int*)GDMA_DBG_OSD_WI_3_reg)=data)
#define  get_GDMA_DBG_OSD_WI_3_reg                                               (*((volatile unsigned int*)GDMA_DBG_OSD_WI_3_reg))
#define  GDMA_DBG_OSD_WI_3_bot_addr_shift                                        (0)
#define  GDMA_DBG_OSD_WI_3_bot_addr_mask                                         (0xFFFFFFFF)
#define  GDMA_DBG_OSD_WI_3_bot_addr(data)                                        (0xFFFFFFFF&(data))
#define  GDMA_DBG_OSD_WI_3_get_bot_addr(data)                                    (0xFFFFFFFF&(data))

#define  GDMA_DBG_OSD_WI_4                                                      0x1802FD20
#define  GDMA_DBG_OSD_WI_4_reg_addr                                              "0xB802FD20"
#define  GDMA_DBG_OSD_WI_4_reg                                                   0xB802FD20
#define  GDMA_DBG_OSD_WI_4_inst_addr                                             "0x0059"
#define  set_GDMA_DBG_OSD_WI_4_reg(data)                                         (*((volatile unsigned int*)GDMA_DBG_OSD_WI_4_reg)=data)
#define  get_GDMA_DBG_OSD_WI_4_reg                                               (*((volatile unsigned int*)GDMA_DBG_OSD_WI_4_reg))
#define  GDMA_DBG_OSD_WI_4_pitch_shift                                           (0)
#define  GDMA_DBG_OSD_WI_4_pitch_mask                                            (0xFFFFFFFF)
#define  GDMA_DBG_OSD_WI_4_pitch(data)                                           (0xFFFFFFFF&(data))
#define  GDMA_DBG_OSD_WI_4_get_pitch(data)                                       (0xFFFFFFFF&(data))

#define  GDMA_DBG_OSD_WI_5                                                      0x1802FD2C
#define  GDMA_DBG_OSD_WI_5_reg_addr                                              "0xB802FD2C"
#define  GDMA_DBG_OSD_WI_5_reg                                                   0xB802FD2C
#define  GDMA_DBG_OSD_WI_5_inst_addr                                             "0x005A"
#define  set_GDMA_DBG_OSD_WI_5_reg(data)                                         (*((volatile unsigned int*)GDMA_DBG_OSD_WI_5_reg)=data)
#define  get_GDMA_DBG_OSD_WI_5_reg                                               (*((volatile unsigned int*)GDMA_DBG_OSD_WI_5_reg))
#define  GDMA_DBG_OSD_WI_5_dbg_win_30_shift                                      (0)
#define  GDMA_DBG_OSD_WI_5_dbg_win_30_mask                                       (0xFFFFFFFF)
#define  GDMA_DBG_OSD_WI_5_dbg_win_30(data)                                      (0xFFFFFFFF&(data))
#define  GDMA_DBG_OSD_WI_5_get_dbg_win_30(data)                                  (0xFFFFFFFF&(data))

#define  GDMA_DBG_OSD_WI_6                                                      0x1802FD30
#define  GDMA_DBG_OSD_WI_6_reg_addr                                              "0xB802FD30"
#define  GDMA_DBG_OSD_WI_6_reg                                                   0xB802FD30
#define  GDMA_DBG_OSD_WI_6_inst_addr                                             "0x005B"
#define  set_GDMA_DBG_OSD_WI_6_reg(data)                                         (*((volatile unsigned int*)GDMA_DBG_OSD_WI_6_reg)=data)
#define  get_GDMA_DBG_OSD_WI_6_reg                                               (*((volatile unsigned int*)GDMA_DBG_OSD_WI_6_reg))
#define  GDMA_DBG_OSD_WI_6_dbg_win_34_shift                                      (0)
#define  GDMA_DBG_OSD_WI_6_dbg_win_34_mask                                       (0xFFFFFFFF)
#define  GDMA_DBG_OSD_WI_6_dbg_win_34(data)                                      (0xFFFFFFFF&(data))
#define  GDMA_DBG_OSD_WI_6_get_dbg_win_34(data)                                  (0xFFFFFFFF&(data))

#define  GDMA_DBG_OSD_WI_7                                                      0x1802FD34
#define  GDMA_DBG_OSD_WI_7_reg_addr                                              "0xB802FD34"
#define  GDMA_DBG_OSD_WI_7_reg                                                   0xB802FD34
#define  GDMA_DBG_OSD_WI_7_inst_addr                                             "0x005C"
#define  set_GDMA_DBG_OSD_WI_7_reg(data)                                         (*((volatile unsigned int*)GDMA_DBG_OSD_WI_7_reg)=data)
#define  get_GDMA_DBG_OSD_WI_7_reg                                               (*((volatile unsigned int*)GDMA_DBG_OSD_WI_7_reg))
#define  GDMA_DBG_OSD_WI_7_dbg_win_38_shift                                      (0)
#define  GDMA_DBG_OSD_WI_7_dbg_win_38_mask                                       (0xFFFFFFFF)
#define  GDMA_DBG_OSD_WI_7_dbg_win_38(data)                                      (0xFFFFFFFF&(data))
#define  GDMA_DBG_OSD_WI_7_get_dbg_win_38(data)                                  (0xFFFFFFFF&(data))

#define  GDMA_DBG_OSD_WI_8                                                      0x1802FD38
#define  GDMA_DBG_OSD_WI_8_reg_addr                                              "0xB802FD38"
#define  GDMA_DBG_OSD_WI_8_reg                                                   0xB802FD38
#define  GDMA_DBG_OSD_WI_8_inst_addr                                             "0x005D"
#define  set_GDMA_DBG_OSD_WI_8_reg(data)                                         (*((volatile unsigned int*)GDMA_DBG_OSD_WI_8_reg)=data)
#define  get_GDMA_DBG_OSD_WI_8_reg                                               (*((volatile unsigned int*)GDMA_DBG_OSD_WI_8_reg))
#define  GDMA_DBG_OSD_WI_8_dbg_win_3c_shift                                      (0)
#define  GDMA_DBG_OSD_WI_8_dbg_win_3c_mask                                       (0xFFFFFFFF)
#define  GDMA_DBG_OSD_WI_8_dbg_win_3c(data)                                      (0xFFFFFFFF&(data))
#define  GDMA_DBG_OSD_WI_8_get_dbg_win_3c(data)                                  (0xFFFFFFFF&(data))

#define  GDMA_DMY_0                                                             0x1802FDFC
#define  GDMA_DMY_0_reg_addr                                                     "0xB802FDFC"
#define  GDMA_DMY_0_reg                                                          0xB802FDFC
#define  GDMA_DMY_0_inst_addr                                                    "0x005E"
#define  set_GDMA_DMY_0_reg(data)                                                (*((volatile unsigned int*)GDMA_DMY_0_reg)=data)
#define  get_GDMA_DMY_0_reg                                                      (*((volatile unsigned int*)GDMA_DMY_0_reg))
#define  GDMA_DMY_0_dummy_31_2_shift                                             (2)
#define  GDMA_DMY_0_eco_afbc_xst_off_shift                                       (1)
#define  GDMA_DMY_0_eco_rbuf_off_shift                                           (0)
#define  GDMA_DMY_0_dummy_31_2_mask                                              (0xFFFFFFFC)
#define  GDMA_DMY_0_eco_afbc_xst_off_mask                                        (0x00000002)
#define  GDMA_DMY_0_eco_rbuf_off_mask                                            (0x00000001)
#define  GDMA_DMY_0_dummy_31_2(data)                                             (0xFFFFFFFC&((data)<<2))
#define  GDMA_DMY_0_eco_afbc_xst_off(data)                                       (0x00000002&((data)<<1))
#define  GDMA_DMY_0_eco_rbuf_off(data)                                           (0x00000001&(data))
#define  GDMA_DMY_0_get_dummy_31_2(data)                                         ((0xFFFFFFFC&(data))>>2)
#define  GDMA_DMY_0_get_eco_afbc_xst_off(data)                                   ((0x00000002&(data))>>1)
#define  GDMA_DMY_0_get_eco_rbuf_off(data)                                       (0x00000001&(data))

#define  GDMA_DMY_1                                                             0x1802FE00
#define  GDMA_DMY_1_reg_addr                                                     "0xB802FE00"
#define  GDMA_DMY_1_reg                                                          0xB802FE00
#define  GDMA_DMY_1_inst_addr                                                    "0x005F"
#define  set_GDMA_DMY_1_reg(data)                                                (*((volatile unsigned int*)GDMA_DMY_1_reg)=data)
#define  get_GDMA_DMY_1_reg                                                      (*((volatile unsigned int*)GDMA_DMY_1_reg))
#define  GDMA_DMY_1_dummy_31_2_shift                                             (2)
#define  GDMA_DMY_1_eco_afbc_xst_off_shift                                       (1)
#define  GDMA_DMY_1_eco_rbuf_off_shift                                           (0)
#define  GDMA_DMY_1_dummy_31_2_mask                                              (0xFFFFFFFC)
#define  GDMA_DMY_1_eco_afbc_xst_off_mask                                        (0x00000002)
#define  GDMA_DMY_1_eco_rbuf_off_mask                                            (0x00000001)
#define  GDMA_DMY_1_dummy_31_2(data)                                             (0xFFFFFFFC&((data)<<2))
#define  GDMA_DMY_1_eco_afbc_xst_off(data)                                       (0x00000002&((data)<<1))
#define  GDMA_DMY_1_eco_rbuf_off(data)                                           (0x00000001&(data))
#define  GDMA_DMY_1_get_dummy_31_2(data)                                         ((0xFFFFFFFC&(data))>>2)
#define  GDMA_DMY_1_get_eco_afbc_xst_off(data)                                   ((0x00000002&(data))>>1)
#define  GDMA_DMY_1_get_eco_rbuf_off(data)                                       (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======GDMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  gating_enable:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  osd3_bypass_acc_sync_fix:1;
        RBus_UInt32  osd2_bypass_acc_sync_fix:1;
        RBus_UInt32  osd1_bypass_acc_sync_fix:1;
        RBus_UInt32  res3:7;
        RBus_UInt32  osd_sel:1;
        RBus_UInt32  write_data:1;
    };
}gdma_update_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  osd3_prog_done:1;
        RBus_UInt32  osd2_prog_done:1;
        RBus_UInt32  osd1_prog_done:1;
        RBus_UInt32  write_data:1;
    };
}gdma_ctrl_RBUS;

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
}gdma_line_buffer_sta_RBUS;

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
}gdma_line_buffer_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  clut_layer_sel:2;
        RBus_UInt32  res2:10;
    };
}gdma_line_buffer_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd1_afbc_en:1;
        RBus_UInt32  res1:25;
        RBus_UInt32  osd3_status:2;
        RBus_UInt32  osd2_status:2;
        RBus_UInt32  osd1_status:2;
    };
}gdma_osd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  rbuf_share_off:1;
        RBus_UInt32  gating_off:1;
    };
}gdma_rtl_improve_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  d3_mode:1;
        RBus_UInt32  rotate:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  res3:2;
        RBus_UInt32  osd1_en:1;
        RBus_UInt32  write_data:1;
    };
}gdma_osd1_ctrl_RBUS;

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
}gdma_osd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  th:13;
    };
}gdma_osd1_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}gdma_osd1_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}gdma_osd1_wi_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  w:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  h:13;
    };
}gdma_osd1_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m01:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m00:14;
    };
}gdma_osd1_cc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m10:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m02:14;
    };
}gdma_osd1_cc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m12:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m11:14;
    };
}gdma_osd1_cc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m21:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m20:14;
    };
}gdma_osd1_cc4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  m22:14;
    };
}gdma_osd1_cc5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  a2:9;
        RBus_UInt32  a1:9;
        RBus_UInt32  a0:9;
    };
}gdma_osd1_cc6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  b2:9;
        RBus_UInt32  b1:9;
        RBus_UInt32  b0:9;
    };
}gdma_osd1_cc7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  x_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  x_end:13;
    };
}gdma_osd1_clear1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  y_end:13;
    };
}gdma_osd1_clear2_RBUS;

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
}gdma_osd2_ctrl_RBUS;

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
}gdma_osd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  th:13;
    };
}gdma_osd2_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}gdma_osd2_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}gdma_osd2_wi_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  w:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  h:13;
    };
}gdma_osd2_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m01:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m00:14;
    };
}gdma_osd2_cc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m10:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m02:14;
    };
}gdma_osd2_cc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m12:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m11:14;
    };
}gdma_osd2_cc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m21:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m20:14;
    };
}gdma_osd2_cc4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  m22:14;
    };
}gdma_osd2_cc5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  a2:9;
        RBus_UInt32  a1:9;
        RBus_UInt32  a0:9;
    };
}gdma_osd2_cc6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  b2:9;
        RBus_UInt32  b1:9;
        RBus_UInt32  b0:9;
    };
}gdma_osd2_cc7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  x_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  x_end:13;
    };
}gdma_osd2_clear1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  y_end:13;
    };
}gdma_osd2_clear2_RBUS;

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
}gdma_osd3_ctrl_RBUS;

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
}gdma_osd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  th:13;
    };
}gdma_osd3_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}gdma_osd3_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}gdma_osd3_wi_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  w:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  h:13;
    };
}gdma_osd3_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m01:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m00:14;
    };
}gdma_osd3_cc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m10:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m02:14;
    };
}gdma_osd3_cc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m12:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m11:14;
    };
}gdma_osd3_cc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  m21:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  m20:14;
    };
}gdma_osd3_cc4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  m22:14;
    };
}gdma_osd3_cc5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  a2:9;
        RBus_UInt32  a1:9;
        RBus_UInt32  a0:9;
    };
}gdma_osd3_cc6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  b2:9;
        RBus_UInt32  b1:9;
        RBus_UInt32  b0:9;
    };
}gdma_osd3_cc7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  x_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  x_end:13;
    };
}gdma_osd3_clear1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  y_end:13;
    };
}gdma_osd3_clear2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  sel_fifo_overflow_st:1;
        RBus_UInt32  sel_fifo_underflow_st:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  data_info_fifo_overflow_st:1;
        RBus_UInt32  data_info_fifo_underflow_st:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  head_info_fifo_overflow_st:1;
        RBus_UInt32  head_info_fifo_underflow_st:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  cmd_fifo_overflow_st:1;
        RBus_UInt32  cmd_fifo_underflow_st:1;
    };
}gdma_afbc_irq_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  osd1_line_cnt:13;
        RBus_UInt32  res2:1;
        RBus_UInt32  tile_y_cnt:11;
        RBus_UInt32  head_fsm_state:4;
    };
}gdma_afbc_cnt_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  data_fifo_water:10;
        RBus_UInt32  head_fifo_water:4;
        RBus_UInt32  cmd_fifo_water:4;
        RBus_UInt32  sel_fifo_water:4;
    };
}gdma_afbc_fifo_water_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  sel_fifo_empty:1;
        RBus_UInt32  sel_fifo_full:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  data_fifo_empty:1;
        RBus_UInt32  data_fifo_full:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  head_info_fifo_empty:1;
        RBus_UInt32  head_info_fifo_full:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  cmd_fifo_empty:1;
        RBus_UInt32  cmd_fifo_full:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  data_timing_error:1;
        RBus_UInt32  head_timing_error:1;
        RBus_UInt32  solid_timing_error:1;
    };
}gdma_afbc_fifo_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  size:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  addr:9;
    };
}gdma_afbc_data_sram_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}gdma_afbc_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}gdma_afbc_min_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  osd3_bl:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  osd2_bl:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  osd1_bl:7;
        RBus_UInt32  res4:8;
    };
}gdma_dma_bl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  afbc_mask:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  osd3_mask:1;
        RBus_UInt32  osd2_mask:1;
        RBus_UInt32  osd1_mask:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  afbc_req_num:4;
        RBus_UInt32  osd3_req_num:4;
        RBus_UInt32  osd2_req_num:4;
        RBus_UInt32  osd1_req_num:4;
    };
}gdma_dma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  afbc_1b:1;
        RBus_UInt32  afbc_2b:1;
        RBus_UInt32  afbc_4b:1;
        RBus_UInt32  afbc_8b:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  osd3_1b:1;
        RBus_UInt32  osd3_2b:1;
        RBus_UInt32  osd3_4b:1;
        RBus_UInt32  osd3_8b:1;
        RBus_UInt32  osd2_1b:1;
        RBus_UInt32  osd2_2b:1;
        RBus_UInt32  osd2_4b:1;
        RBus_UInt32  osd2_8b:1;
        RBus_UInt32  osd1_1b:1;
        RBus_UInt32  osd1_2b:1;
        RBus_UInt32  osd1_4b:1;
        RBus_UInt32  osd1_8b:1;
        RBus_UInt32  res3:4;
    };
}gdma_dma_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  depth:12;
        RBus_UInt32  sa:12;
    };
}gdma_dma_osd1_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  depth:12;
        RBus_UInt32  sa:12;
    };
}gdma_dma_osd1_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  depth:12;
        RBus_UInt32  sa:12;
    };
}gdma_dma_osd1_d1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  depth:12;
        RBus_UInt32  sa:12;
    };
}gdma_dma_osd2_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  depth:12;
        RBus_UInt32  sa:12;
    };
}gdma_dma_osd2_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  depth:12;
        RBus_UInt32  sa:12;
    };
}gdma_dma_osd2_d1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  depth:12;
        RBus_UInt32  sa:12;
    };
}gdma_dma_osd3_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  depth:12;
        RBus_UInt32  sa:12;
    };
}gdma_dma_osd3_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  depth:12;
        RBus_UInt32  sa:12;
    };
}gdma_dma_osd3_d1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  m422_cb_cr_swap:1;
    };
}gdma_m422_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  osd3_fin:1;
        RBus_UInt32  osd2_fin:1;
        RBus_UInt32  osd1_fin:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  osd3_vact_end:1;
        RBus_UInt32  osd2_vact_end:1;
        RBus_UInt32  osd1_vact_end:1;
        RBus_UInt32  res3:5;
        RBus_UInt32  osd3_vsync:1;
        RBus_UInt32  osd2_vsync:1;
        RBus_UInt32  osd1_vsync:1;
        RBus_UInt32  write_data:1;
    };
}gdma_osd_inten_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  osd3_fin:1;
        RBus_UInt32  osd2_fin:1;
        RBus_UInt32  osd1_fin:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  osd3_vact_end:1;
        RBus_UInt32  osd2_vact_end:1;
        RBus_UInt32  osd1_vact_end:1;
        RBus_UInt32  res3:5;
        RBus_UInt32  osd3_vsync:1;
        RBus_UInt32  osd2_vsync:1;
        RBus_UInt32  osd1_vsync:1;
        RBus_UInt32  write_data:1;
    };
}gdma_osd_intst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  osd3_fin:1;
        RBus_UInt32  osd2_fin:1;
        RBus_UInt32  osd1_fin:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  osd3_vact_end:1;
        RBus_UInt32  osd2_vact_end:1;
        RBus_UInt32  osd1_vact_end:1;
        RBus_UInt32  res3:5;
        RBus_UInt32  osd3_vsync:1;
        RBus_UInt32  osd2_vsync:1;
        RBus_UInt32  osd1_vsync:1;
        RBus_UInt32  write_data:1;
    };
}gdma_osd_inten_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  osd3_fin:1;
        RBus_UInt32  osd2_fin:1;
        RBus_UInt32  osd1_fin:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  osd3_vact_end:1;
        RBus_UInt32  osd2_vact_end:1;
        RBus_UInt32  osd1_vact_end:1;
        RBus_UInt32  res3:5;
        RBus_UInt32  osd3_vsync:1;
        RBus_UInt32  osd2_vsync:1;
        RBus_UInt32  osd1_vsync:1;
        RBus_UInt32  write_data:1;
    };
}gdma_osd_intst_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  afbc_acc_sync:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  osd3_acc_sync:1;
        RBus_UInt32  osd2_acc_sync:1;
        RBus_UInt32  osd1_acc_sync:1;
        RBus_UInt32  res3:5;
        RBus_UInt32  osd3_udfl:1;
        RBus_UInt32  osd2_udfl:1;
        RBus_UInt32  osd1_udfl:1;
        RBus_UInt32  write_data:1;
    };
}gdma_dma_inten_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  afbc_acc_sync:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  osd3_acc_sync:1;
        RBus_UInt32  osd2_acc_sync:1;
        RBus_UInt32  osd1_acc_sync:1;
        RBus_UInt32  res3:5;
        RBus_UInt32  osd3_udfl:1;
        RBus_UInt32  osd2_udfl:1;
        RBus_UInt32  osd1_udfl:1;
        RBus_UInt32  write_data:1;
    };
}gdma_dma_intst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  osd3_acc_sync:1;
        RBus_UInt32  osd2_acc_sync:1;
        RBus_UInt32  osd1_acc_sync:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  osd3_udfl:1;
        RBus_UInt32  osd2_udfl:1;
        RBus_UInt32  osd1_udfl:1;
        RBus_UInt32  write_data:1;
    };
}gdma_dma_inten_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  osd3_acc_sync:1;
        RBus_UInt32  osd2_acc_sync:1;
        RBus_UInt32  osd1_acc_sync:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  osd3_udfl:1;
        RBus_UInt32  osd2_udfl:1;
        RBus_UInt32  osd1_udfl:1;
        RBus_UInt32  write_data:1;
    };
}gdma_dma_intst_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  test_rwm:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  afbc_header_ls:1;
        RBus_UInt32  afbc_ls:1;
        RBus_UInt32  sr3_ls:1;
        RBus_UInt32  res3:9;
        RBus_UInt32  test1:1;
        RBus_UInt32  rme:1;
        RBus_UInt32  rm:4;
    };
}gdma_mbist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  afbc_lb:8;
        RBus_UInt32  sr3_lb:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  afbc_header:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  clut:1;
        RBus_UInt32  dispbuf:3;
        RBus_UInt32  rbuf:4;
        RBus_UInt32  rbuf_share:2;
    };
}gdma_mbist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  afbc_lb:8;
        RBus_UInt32  sr3_lb:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  afbc_header:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  clut:1;
        RBus_UInt32  dispbuf:3;
        RBus_UInt32  rbuf:4;
        RBus_UInt32  rbuf_share:2;
    };
}gdma_mbist_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  sel1:9;
        RBus_UInt32  res2:2;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  sel0:9;
        RBus_UInt32  res3:2;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  en:1;
    };
}gdma_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  sel:3;
    };
}gdma_dbg_wi_info_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  height:16;
        RBus_UInt32  width:16;
    };
}gdma_dbg_osd_wi_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  extension_mode:1;
        RBus_UInt32  rgb_order:3;
        RBus_UInt32  alpha_replace_type:1;
        RBus_UInt32  const_alpha_enable:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  object_type:1;
        RBus_UInt32  alpha:8;
        RBus_UInt32  res2:5;
        RBus_UInt32  clut_format:1;
        RBus_UInt32  endian:1;
        RBus_UInt32  keep_prev_clut:1;
        RBus_UInt32  compress:1;
        RBus_UInt32  img_compress:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  colortype:5;
    };
}gdma_dbg_osd_wi_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  top_addr:32;
    };
}gdma_dbg_osd_wi_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bot_addr:32;
    };
}gdma_dbg_osd_wi_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:32;
    };
}gdma_dbg_osd_wi_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_win_30:32;
    };
}gdma_dbg_osd_wi_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_win_34:32;
    };
}gdma_dbg_osd_wi_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_win_38:32;
    };
}gdma_dbg_osd_wi_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_win_3c:32;
    };
}gdma_dbg_osd_wi_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802fdfc_31_2:30;
        RBus_UInt32  eco_afbc_xst_off:1;
        RBus_UInt32  eco_rbuf_off:1;
    };
}gdma_dmy_RBUS;

#else //apply LITTLE_ENDIAN

//======GDMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  osd_sel:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  osd1_bypass_acc_sync_fix:1;
        RBus_UInt32  osd2_bypass_acc_sync_fix:1;
        RBus_UInt32  osd3_bypass_acc_sync_fix:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  gating_enable:1;
        RBus_UInt32  res3:15;
    };
}gdma_update_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  osd1_prog_done:1;
        RBus_UInt32  osd2_prog_done:1;
        RBus_UInt32  osd3_prog_done:1;
        RBus_UInt32  res1:28;
    };
}gdma_ctrl_RBUS;

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
}gdma_line_buffer_sta_RBUS;

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
}gdma_line_buffer_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  clut_layer_sel:2;
        RBus_UInt32  res2:20;
    };
}gdma_line_buffer_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd1_status:2;
        RBus_UInt32  osd2_status:2;
        RBus_UInt32  osd3_status:2;
        RBus_UInt32  res1:25;
        RBus_UInt32  osd1_afbc_en:1;
    };
}gdma_osd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gating_off:1;
        RBus_UInt32  rbuf_share_off:1;
        RBus_UInt32  res1:30;
    };
}gdma_rtl_improve_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  osd1_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:4;
        RBus_UInt32  rotate:1;
        RBus_UInt32  d3_mode:1;
        RBus_UInt32  res3:22;
    };
}gdma_osd1_ctrl_RBUS;

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
}gdma_osd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  th:13;
        RBus_UInt32  res1:19;
    };
}gdma_osd1_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}gdma_osd1_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}gdma_osd1_wi_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  w:13;
        RBus_UInt32  res2:3;
    };
}gdma_osd1_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m00:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m01:14;
        RBus_UInt32  res2:2;
    };
}gdma_osd1_cc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m02:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m10:14;
        RBus_UInt32  res2:2;
    };
}gdma_osd1_cc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m11:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m12:14;
        RBus_UInt32  res2:2;
    };
}gdma_osd1_cc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m20:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m21:14;
        RBus_UInt32  res2:2;
    };
}gdma_osd1_cc4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m22:14;
        RBus_UInt32  res1:18;
    };
}gdma_osd1_cc5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  a0:9;
        RBus_UInt32  a1:9;
        RBus_UInt32  a2:9;
        RBus_UInt32  res1:5;
    };
}gdma_osd1_cc6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b0:9;
        RBus_UInt32  b1:9;
        RBus_UInt32  b2:9;
        RBus_UInt32  res1:5;
    };
}gdma_osd1_cc7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  x_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  x_sta:13;
        RBus_UInt32  res2:3;
    };
}gdma_osd1_clear1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  y_sta:13;
        RBus_UInt32  res2:3;
    };
}gdma_osd1_clear2_RBUS;

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
}gdma_osd2_ctrl_RBUS;

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
}gdma_osd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  th:13;
        RBus_UInt32  res1:19;
    };
}gdma_osd2_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}gdma_osd2_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}gdma_osd2_wi_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  w:13;
        RBus_UInt32  res2:3;
    };
}gdma_osd2_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m00:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m01:14;
        RBus_UInt32  res2:2;
    };
}gdma_osd2_cc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m02:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m10:14;
        RBus_UInt32  res2:2;
    };
}gdma_osd2_cc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m11:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m12:14;
        RBus_UInt32  res2:2;
    };
}gdma_osd2_cc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m20:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m21:14;
        RBus_UInt32  res2:2;
    };
}gdma_osd2_cc4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m22:14;
        RBus_UInt32  res1:18;
    };
}gdma_osd2_cc5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  a0:9;
        RBus_UInt32  a1:9;
        RBus_UInt32  a2:9;
        RBus_UInt32  res1:5;
    };
}gdma_osd2_cc6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b0:9;
        RBus_UInt32  b1:9;
        RBus_UInt32  b2:9;
        RBus_UInt32  res1:5;
    };
}gdma_osd2_cc7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  x_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  x_sta:13;
        RBus_UInt32  res2:3;
    };
}gdma_osd2_clear1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  y_sta:13;
        RBus_UInt32  res2:3;
    };
}gdma_osd2_clear2_RBUS;

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
}gdma_osd3_ctrl_RBUS;

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
}gdma_osd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  th:13;
        RBus_UInt32  res1:19;
    };
}gdma_osd3_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}gdma_osd3_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}gdma_osd3_wi_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  w:13;
        RBus_UInt32  res2:3;
    };
}gdma_osd3_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m00:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m01:14;
        RBus_UInt32  res2:2;
    };
}gdma_osd3_cc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m02:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m10:14;
        RBus_UInt32  res2:2;
    };
}gdma_osd3_cc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m11:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m12:14;
        RBus_UInt32  res2:2;
    };
}gdma_osd3_cc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m20:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  m21:14;
        RBus_UInt32  res2:2;
    };
}gdma_osd3_cc4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m22:14;
        RBus_UInt32  res1:18;
    };
}gdma_osd3_cc5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  a0:9;
        RBus_UInt32  a1:9;
        RBus_UInt32  a2:9;
        RBus_UInt32  res1:5;
    };
}gdma_osd3_cc6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b0:9;
        RBus_UInt32  b1:9;
        RBus_UInt32  b2:9;
        RBus_UInt32  res1:5;
    };
}gdma_osd3_cc7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  x_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  x_sta:13;
        RBus_UInt32  res2:3;
    };
}gdma_osd3_clear1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_end:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  y_sta:13;
        RBus_UInt32  res2:3;
    };
}gdma_osd3_clear2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmd_fifo_underflow_st:1;
        RBus_UInt32  cmd_fifo_overflow_st:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  head_info_fifo_underflow_st:1;
        RBus_UInt32  head_info_fifo_overflow_st:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  data_info_fifo_underflow_st:1;
        RBus_UInt32  data_info_fifo_overflow_st:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  sel_fifo_underflow_st:1;
        RBus_UInt32  sel_fifo_overflow_st:1;
        RBus_UInt32  res4:18;
    };
}gdma_afbc_irq_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  head_fsm_state:4;
        RBus_UInt32  tile_y_cnt:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  osd1_line_cnt:13;
        RBus_UInt32  res2:3;
    };
}gdma_afbc_cnt_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sel_fifo_water:4;
        RBus_UInt32  cmd_fifo_water:4;
        RBus_UInt32  head_fifo_water:4;
        RBus_UInt32  data_fifo_water:10;
        RBus_UInt32  res1:10;
    };
}gdma_afbc_fifo_water_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  solid_timing_error:1;
        RBus_UInt32  head_timing_error:1;
        RBus_UInt32  data_timing_error:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  cmd_fifo_full:1;
        RBus_UInt32  cmd_fifo_empty:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  head_info_fifo_full:1;
        RBus_UInt32  head_info_fifo_empty:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  data_fifo_full:1;
        RBus_UInt32  data_fifo_empty:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  sel_fifo_full:1;
        RBus_UInt32  sel_fifo_empty:1;
        RBus_UInt32  res5:14;
    };
}gdma_afbc_fifo_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  size:9;
        RBus_UInt32  res2:7;
    };
}gdma_afbc_data_sram_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}gdma_afbc_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr:32;
    };
}gdma_afbc_min_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  osd1_bl:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  osd2_bl:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  osd3_bl:7;
        RBus_UInt32  res4:1;
    };
}gdma_dma_bl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd1_req_num:4;
        RBus_UInt32  osd2_req_num:4;
        RBus_UInt32  osd3_req_num:4;
        RBus_UInt32  afbc_req_num:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  osd1_mask:1;
        RBus_UInt32  osd2_mask:1;
        RBus_UInt32  osd3_mask:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  afbc_mask:1;
        RBus_UInt32  res3:9;
    };
}gdma_dma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  osd1_8b:1;
        RBus_UInt32  osd1_4b:1;
        RBus_UInt32  osd1_2b:1;
        RBus_UInt32  osd1_1b:1;
        RBus_UInt32  osd2_8b:1;
        RBus_UInt32  osd2_4b:1;
        RBus_UInt32  osd2_2b:1;
        RBus_UInt32  osd2_1b:1;
        RBus_UInt32  osd3_8b:1;
        RBus_UInt32  osd3_4b:1;
        RBus_UInt32  osd3_2b:1;
        RBus_UInt32  osd3_1b:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  afbc_8b:1;
        RBus_UInt32  afbc_4b:1;
        RBus_UInt32  afbc_2b:1;
        RBus_UInt32  afbc_1b:1;
        RBus_UInt32  res3:4;
    };
}gdma_dma_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sa:12;
        RBus_UInt32  depth:12;
        RBus_UInt32  res1:8;
    };
}gdma_dma_osd1_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sa:12;
        RBus_UInt32  depth:12;
        RBus_UInt32  res1:8;
    };
}gdma_dma_osd1_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sa:12;
        RBus_UInt32  depth:12;
        RBus_UInt32  res1:8;
    };
}gdma_dma_osd1_d1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sa:12;
        RBus_UInt32  depth:12;
        RBus_UInt32  res1:8;
    };
}gdma_dma_osd2_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sa:12;
        RBus_UInt32  depth:12;
        RBus_UInt32  res1:8;
    };
}gdma_dma_osd2_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sa:12;
        RBus_UInt32  depth:12;
        RBus_UInt32  res1:8;
    };
}gdma_dma_osd2_d1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sa:12;
        RBus_UInt32  depth:12;
        RBus_UInt32  res1:8;
    };
}gdma_dma_osd3_wi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sa:12;
        RBus_UInt32  depth:12;
        RBus_UInt32  res1:8;
    };
}gdma_dma_osd3_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sa:12;
        RBus_UInt32  depth:12;
        RBus_UInt32  res1:8;
    };
}gdma_dma_osd3_d1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m422_cb_cr_swap:1;
        RBus_UInt32  res1:31;
    };
}gdma_m422_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  osd1_vsync:1;
        RBus_UInt32  osd2_vsync:1;
        RBus_UInt32  osd3_vsync:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  osd1_vact_end:1;
        RBus_UInt32  osd2_vact_end:1;
        RBus_UInt32  osd3_vact_end:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  osd1_fin:1;
        RBus_UInt32  osd2_fin:1;
        RBus_UInt32  osd3_fin:1;
        RBus_UInt32  res3:12;
    };
}gdma_osd_inten_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  osd1_vsync:1;
        RBus_UInt32  osd2_vsync:1;
        RBus_UInt32  osd3_vsync:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  osd1_vact_end:1;
        RBus_UInt32  osd2_vact_end:1;
        RBus_UInt32  osd3_vact_end:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  osd1_fin:1;
        RBus_UInt32  osd2_fin:1;
        RBus_UInt32  osd3_fin:1;
        RBus_UInt32  res3:12;
    };
}gdma_osd_intst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  osd1_vsync:1;
        RBus_UInt32  osd2_vsync:1;
        RBus_UInt32  osd3_vsync:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  osd1_vact_end:1;
        RBus_UInt32  osd2_vact_end:1;
        RBus_UInt32  osd3_vact_end:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  osd1_fin:1;
        RBus_UInt32  osd2_fin:1;
        RBus_UInt32  osd3_fin:1;
        RBus_UInt32  res3:12;
    };
}gdma_osd_inten_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  osd1_vsync:1;
        RBus_UInt32  osd2_vsync:1;
        RBus_UInt32  osd3_vsync:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  osd1_vact_end:1;
        RBus_UInt32  osd2_vact_end:1;
        RBus_UInt32  osd3_vact_end:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  osd1_fin:1;
        RBus_UInt32  osd2_fin:1;
        RBus_UInt32  osd3_fin:1;
        RBus_UInt32  res3:12;
    };
}gdma_osd_intst_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  osd1_udfl:1;
        RBus_UInt32  osd2_udfl:1;
        RBus_UInt32  osd3_udfl:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  osd1_acc_sync:1;
        RBus_UInt32  osd2_acc_sync:1;
        RBus_UInt32  osd3_acc_sync:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  afbc_acc_sync:1;
        RBus_UInt32  res3:11;
    };
}gdma_dma_inten_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  osd1_udfl:1;
        RBus_UInt32  osd2_udfl:1;
        RBus_UInt32  osd3_udfl:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  osd1_acc_sync:1;
        RBus_UInt32  osd2_acc_sync:1;
        RBus_UInt32  osd3_acc_sync:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  afbc_acc_sync:1;
        RBus_UInt32  res3:11;
    };
}gdma_dma_intst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  osd1_udfl:1;
        RBus_UInt32  osd2_udfl:1;
        RBus_UInt32  osd3_udfl:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  osd1_acc_sync:1;
        RBus_UInt32  osd2_acc_sync:1;
        RBus_UInt32  osd3_acc_sync:1;
        RBus_UInt32  res2:20;
    };
}gdma_dma_inten_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  osd1_udfl:1;
        RBus_UInt32  osd2_udfl:1;
        RBus_UInt32  osd3_udfl:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  osd1_acc_sync:1;
        RBus_UInt32  osd2_acc_sync:1;
        RBus_UInt32  osd3_acc_sync:1;
        RBus_UInt32  res2:20;
    };
}gdma_dma_intst_3d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm:4;
        RBus_UInt32  rme:1;
        RBus_UInt32  test1:1;
        RBus_UInt32  res1:9;
        RBus_UInt32  sr3_ls:1;
        RBus_UInt32  afbc_ls:1;
        RBus_UInt32  afbc_header_ls:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  test_rwm:1;
        RBus_UInt32  res3:7;
    };
}gdma_mbist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rbuf_share:2;
        RBus_UInt32  rbuf:4;
        RBus_UInt32  dispbuf:3;
        RBus_UInt32  clut:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  afbc_header:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  sr3_lb:4;
        RBus_UInt32  afbc_lb:8;
        RBus_UInt32  res3:4;
    };
}gdma_mbist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rbuf_share:2;
        RBus_UInt32  rbuf:4;
        RBus_UInt32  dispbuf:3;
        RBus_UInt32  clut:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  afbc_header:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  sr3_lb:4;
        RBus_UInt32  afbc_lb:8;
        RBus_UInt32  res3:4;
    };
}gdma_mbist_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en:1;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  sel0:9;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  sel1:9;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  res3:6;
    };
}gdma_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sel:3;
        RBus_UInt32  res1:29;
    };
}gdma_dbg_wi_info_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  width:16;
        RBus_UInt32  height:16;
    };
}gdma_dbg_osd_wi_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  colortype:5;
        RBus_UInt32  res1:1;
        RBus_UInt32  img_compress:1;
        RBus_UInt32  compress:1;
        RBus_UInt32  keep_prev_clut:1;
        RBus_UInt32  endian:1;
        RBus_UInt32  clut_format:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  alpha:8;
        RBus_UInt32  object_type:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  const_alpha_enable:1;
        RBus_UInt32  alpha_replace_type:1;
        RBus_UInt32  rgb_order:3;
        RBus_UInt32  extension_mode:1;
    };
}gdma_dbg_osd_wi_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  top_addr:32;
    };
}gdma_dbg_osd_wi_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bot_addr:32;
    };
}gdma_dbg_osd_wi_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:32;
    };
}gdma_dbg_osd_wi_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_win_30:32;
    };
}gdma_dbg_osd_wi_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_win_34:32;
    };
}gdma_dbg_osd_wi_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_win_38:32;
    };
}gdma_dbg_osd_wi_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_win_3c:32;
    };
}gdma_dbg_osd_wi_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eco_rbuf_off:1;
        RBus_UInt32  eco_afbc_xst_off:1;
        RBus_UInt32  dummy1802fdfc_31_2:30;
    };
}gdma_dmy_RBUS;




#endif 


#endif 
