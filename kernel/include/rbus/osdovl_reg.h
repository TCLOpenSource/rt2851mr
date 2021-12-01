/**
* @file Merlin5-DesignSpec-D-Domain_Mixer
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_OSDOVL_REG_H_
#define _RBUS_OSDOVL_REG_H_

#include "rbus_types.h"



//  OSDOVL Register Address
#define  OSDOVL_Mixer_CTRL2                                                     0x1802B000
#define  OSDOVL_Mixer_CTRL2_reg_addr                                             "0xB802B000"
#define  OSDOVL_Mixer_CTRL2_reg                                                  0xB802B000
#define  OSDOVL_Mixer_CTRL2_inst_addr                                            "0x0000"
#define  set_OSDOVL_Mixer_CTRL2_reg(data)                                        (*((volatile unsigned int*)OSDOVL_Mixer_CTRL2_reg)=data)
#define  get_OSDOVL_Mixer_CTRL2_reg                                              (*((volatile unsigned int*)OSDOVL_Mixer_CTRL2_reg))
#define  OSDOVL_Mixer_CTRL2_measure_osd_zone_en_shift                            (31)
#define  OSDOVL_Mixer_CTRL2_measure_osd_zone_type_shift                          (30)
#define  OSDOVL_Mixer_CTRL2_video_src_sel_shift                                  (24)
#define  OSDOVL_Mixer_CTRL2_video_alpha_shift                                    (16)
#define  OSDOVL_Mixer_CTRL2_mixero3_en_shift                                     (3)
#define  OSDOVL_Mixer_CTRL2_mixero2_en_shift                                     (2)
#define  OSDOVL_Mixer_CTRL2_mixero1_en_shift                                     (1)
#define  OSDOVL_Mixer_CTRL2_mixer_en_shift                                       (0)
#define  OSDOVL_Mixer_CTRL2_measure_osd_zone_en_mask                             (0x80000000)
#define  OSDOVL_Mixer_CTRL2_measure_osd_zone_type_mask                           (0x40000000)
#define  OSDOVL_Mixer_CTRL2_video_src_sel_mask                                   (0x01000000)
#define  OSDOVL_Mixer_CTRL2_video_alpha_mask                                     (0x00FF0000)
#define  OSDOVL_Mixer_CTRL2_mixero3_en_mask                                      (0x00000008)
#define  OSDOVL_Mixer_CTRL2_mixero2_en_mask                                      (0x00000004)
#define  OSDOVL_Mixer_CTRL2_mixero1_en_mask                                      (0x00000002)
#define  OSDOVL_Mixer_CTRL2_mixer_en_mask                                        (0x00000001)
#define  OSDOVL_Mixer_CTRL2_measure_osd_zone_en(data)                            (0x80000000&((data)<<31))
#define  OSDOVL_Mixer_CTRL2_measure_osd_zone_type(data)                          (0x40000000&((data)<<30))
#define  OSDOVL_Mixer_CTRL2_video_src_sel(data)                                  (0x01000000&((data)<<24))
#define  OSDOVL_Mixer_CTRL2_video_alpha(data)                                    (0x00FF0000&((data)<<16))
#define  OSDOVL_Mixer_CTRL2_mixero3_en(data)                                     (0x00000008&((data)<<3))
#define  OSDOVL_Mixer_CTRL2_mixero2_en(data)                                     (0x00000004&((data)<<2))
#define  OSDOVL_Mixer_CTRL2_mixero1_en(data)                                     (0x00000002&((data)<<1))
#define  OSDOVL_Mixer_CTRL2_mixer_en(data)                                       (0x00000001&(data))
#define  OSDOVL_Mixer_CTRL2_get_measure_osd_zone_en(data)                        ((0x80000000&(data))>>31)
#define  OSDOVL_Mixer_CTRL2_get_measure_osd_zone_type(data)                      ((0x40000000&(data))>>30)
#define  OSDOVL_Mixer_CTRL2_get_video_src_sel(data)                              ((0x01000000&(data))>>24)
#define  OSDOVL_Mixer_CTRL2_get_video_alpha(data)                                ((0x00FF0000&(data))>>16)
#define  OSDOVL_Mixer_CTRL2_get_mixero3_en(data)                                 ((0x00000008&(data))>>3)
#define  OSDOVL_Mixer_CTRL2_get_mixero2_en(data)                                 ((0x00000004&(data))>>2)
#define  OSDOVL_Mixer_CTRL2_get_mixero1_en(data)                                 ((0x00000002&(data))>>1)
#define  OSDOVL_Mixer_CTRL2_get_mixer_en(data)                                   (0x00000001&(data))

#define  OSDOVL_Mixer_layer_sel                                                 0x1802B004
#define  OSDOVL_Mixer_layer_sel_reg_addr                                         "0xB802B004"
#define  OSDOVL_Mixer_layer_sel_reg                                              0xB802B004
#define  OSDOVL_Mixer_layer_sel_inst_addr                                        "0x0001"
#define  set_OSDOVL_Mixer_layer_sel_reg(data)                                    (*((volatile unsigned int*)OSDOVL_Mixer_layer_sel_reg)=data)
#define  get_OSDOVL_Mixer_layer_sel_reg                                          (*((volatile unsigned int*)OSDOVL_Mixer_layer_sel_reg))
#define  OSDOVL_Mixer_layer_sel_c3_plane_alpha_en_shift                          (27)
#define  OSDOVL_Mixer_layer_sel_c2_plane_alpha_en_shift                          (26)
#define  OSDOVL_Mixer_layer_sel_c1_plane_alpha_en_shift                          (25)
#define  OSDOVL_Mixer_layer_sel_c0_plane_alpha_en_shift                          (24)
#define  OSDOVL_Mixer_layer_sel_alpha_detect_sel_shift                           (16)
#define  OSDOVL_Mixer_layer_sel_c3_sel_shift                                     (12)
#define  OSDOVL_Mixer_layer_sel_c2_sel_shift                                     (8)
#define  OSDOVL_Mixer_layer_sel_c1_sel_shift                                     (4)
#define  OSDOVL_Mixer_layer_sel_c0_sel_shift                                     (0)
#define  OSDOVL_Mixer_layer_sel_c3_plane_alpha_en_mask                           (0x08000000)
#define  OSDOVL_Mixer_layer_sel_c2_plane_alpha_en_mask                           (0x04000000)
#define  OSDOVL_Mixer_layer_sel_c1_plane_alpha_en_mask                           (0x02000000)
#define  OSDOVL_Mixer_layer_sel_c0_plane_alpha_en_mask                           (0x01000000)
#define  OSDOVL_Mixer_layer_sel_alpha_detect_sel_mask                            (0x00030000)
#define  OSDOVL_Mixer_layer_sel_c3_sel_mask                                      (0x00003000)
#define  OSDOVL_Mixer_layer_sel_c2_sel_mask                                      (0x00000300)
#define  OSDOVL_Mixer_layer_sel_c1_sel_mask                                      (0x00000030)
#define  OSDOVL_Mixer_layer_sel_c0_sel_mask                                      (0x00000003)
#define  OSDOVL_Mixer_layer_sel_c3_plane_alpha_en(data)                          (0x08000000&((data)<<27))
#define  OSDOVL_Mixer_layer_sel_c2_plane_alpha_en(data)                          (0x04000000&((data)<<26))
#define  OSDOVL_Mixer_layer_sel_c1_plane_alpha_en(data)                          (0x02000000&((data)<<25))
#define  OSDOVL_Mixer_layer_sel_c0_plane_alpha_en(data)                          (0x01000000&((data)<<24))
#define  OSDOVL_Mixer_layer_sel_alpha_detect_sel(data)                           (0x00030000&((data)<<16))
#define  OSDOVL_Mixer_layer_sel_c3_sel(data)                                     (0x00003000&((data)<<12))
#define  OSDOVL_Mixer_layer_sel_c2_sel(data)                                     (0x00000300&((data)<<8))
#define  OSDOVL_Mixer_layer_sel_c1_sel(data)                                     (0x00000030&((data)<<4))
#define  OSDOVL_Mixer_layer_sel_c0_sel(data)                                     (0x00000003&(data))
#define  OSDOVL_Mixer_layer_sel_get_c3_plane_alpha_en(data)                      ((0x08000000&(data))>>27)
#define  OSDOVL_Mixer_layer_sel_get_c2_plane_alpha_en(data)                      ((0x04000000&(data))>>26)
#define  OSDOVL_Mixer_layer_sel_get_c1_plane_alpha_en(data)                      ((0x02000000&(data))>>25)
#define  OSDOVL_Mixer_layer_sel_get_c0_plane_alpha_en(data)                      ((0x01000000&(data))>>24)
#define  OSDOVL_Mixer_layer_sel_get_alpha_detect_sel(data)                       ((0x00030000&(data))>>16)
#define  OSDOVL_Mixer_layer_sel_get_c3_sel(data)                                 ((0x00003000&(data))>>12)
#define  OSDOVL_Mixer_layer_sel_get_c2_sel(data)                                 ((0x00000300&(data))>>8)
#define  OSDOVL_Mixer_layer_sel_get_c1_sel(data)                                 ((0x00000030&(data))>>4)
#define  OSDOVL_Mixer_layer_sel_get_c0_sel(data)                                 (0x00000003&(data))

#define  OSDOVL_Mixer_c0_plane_alpha1                                           0x1802B008
#define  OSDOVL_Mixer_c0_plane_alpha1_reg_addr                                   "0xB802B008"
#define  OSDOVL_Mixer_c0_plane_alpha1_reg                                        0xB802B008
#define  OSDOVL_Mixer_c0_plane_alpha1_inst_addr                                  "0x0002"
#define  set_OSDOVL_Mixer_c0_plane_alpha1_reg(data)                              (*((volatile unsigned int*)OSDOVL_Mixer_c0_plane_alpha1_reg)=data)
#define  get_OSDOVL_Mixer_c0_plane_alpha1_reg                                    (*((volatile unsigned int*)OSDOVL_Mixer_c0_plane_alpha1_reg))
#define  OSDOVL_Mixer_c0_plane_alpha1_plane_alpha_a_shift                        (16)
#define  OSDOVL_Mixer_c0_plane_alpha1_plane_alpha_r_shift                        (0)
#define  OSDOVL_Mixer_c0_plane_alpha1_plane_alpha_a_mask                         (0x01FF0000)
#define  OSDOVL_Mixer_c0_plane_alpha1_plane_alpha_r_mask                         (0x000001FF)
#define  OSDOVL_Mixer_c0_plane_alpha1_plane_alpha_a(data)                        (0x01FF0000&((data)<<16))
#define  OSDOVL_Mixer_c0_plane_alpha1_plane_alpha_r(data)                        (0x000001FF&(data))
#define  OSDOVL_Mixer_c0_plane_alpha1_get_plane_alpha_a(data)                    ((0x01FF0000&(data))>>16)
#define  OSDOVL_Mixer_c0_plane_alpha1_get_plane_alpha_r(data)                    (0x000001FF&(data))

#define  OSDOVL_Mixer_c0_plane_alpha2                                           0x1802B00C
#define  OSDOVL_Mixer_c0_plane_alpha2_reg_addr                                   "0xB802B00C"
#define  OSDOVL_Mixer_c0_plane_alpha2_reg                                        0xB802B00C
#define  OSDOVL_Mixer_c0_plane_alpha2_inst_addr                                  "0x0003"
#define  set_OSDOVL_Mixer_c0_plane_alpha2_reg(data)                              (*((volatile unsigned int*)OSDOVL_Mixer_c0_plane_alpha2_reg)=data)
#define  get_OSDOVL_Mixer_c0_plane_alpha2_reg                                    (*((volatile unsigned int*)OSDOVL_Mixer_c0_plane_alpha2_reg))
#define  OSDOVL_Mixer_c0_plane_alpha2_plane_alpha_g_shift                        (16)
#define  OSDOVL_Mixer_c0_plane_alpha2_plane_alpha_b_shift                        (0)
#define  OSDOVL_Mixer_c0_plane_alpha2_plane_alpha_g_mask                         (0x01FF0000)
#define  OSDOVL_Mixer_c0_plane_alpha2_plane_alpha_b_mask                         (0x000001FF)
#define  OSDOVL_Mixer_c0_plane_alpha2_plane_alpha_g(data)                        (0x01FF0000&((data)<<16))
#define  OSDOVL_Mixer_c0_plane_alpha2_plane_alpha_b(data)                        (0x000001FF&(data))
#define  OSDOVL_Mixer_c0_plane_alpha2_get_plane_alpha_g(data)                    ((0x01FF0000&(data))>>16)
#define  OSDOVL_Mixer_c0_plane_alpha2_get_plane_alpha_b(data)                    (0x000001FF&(data))

#define  OSDOVL_Mixer_c0_plane_offset                                           0x1802B010
#define  OSDOVL_Mixer_c0_plane_offset_reg_addr                                   "0xB802B010"
#define  OSDOVL_Mixer_c0_plane_offset_reg                                        0xB802B010
#define  OSDOVL_Mixer_c0_plane_offset_inst_addr                                  "0x0004"
#define  set_OSDOVL_Mixer_c0_plane_offset_reg(data)                              (*((volatile unsigned int*)OSDOVL_Mixer_c0_plane_offset_reg)=data)
#define  get_OSDOVL_Mixer_c0_plane_offset_reg                                    (*((volatile unsigned int*)OSDOVL_Mixer_c0_plane_offset_reg))
#define  OSDOVL_Mixer_c0_plane_offset_plane_offset_a_shift                       (24)
#define  OSDOVL_Mixer_c0_plane_offset_plane_offset_r_shift                       (16)
#define  OSDOVL_Mixer_c0_plane_offset_plane_offset_g_shift                       (8)
#define  OSDOVL_Mixer_c0_plane_offset_plane_offset_b_shift                       (0)
#define  OSDOVL_Mixer_c0_plane_offset_plane_offset_a_mask                        (0xFF000000)
#define  OSDOVL_Mixer_c0_plane_offset_plane_offset_r_mask                        (0x00FF0000)
#define  OSDOVL_Mixer_c0_plane_offset_plane_offset_g_mask                        (0x0000FF00)
#define  OSDOVL_Mixer_c0_plane_offset_plane_offset_b_mask                        (0x000000FF)
#define  OSDOVL_Mixer_c0_plane_offset_plane_offset_a(data)                       (0xFF000000&((data)<<24))
#define  OSDOVL_Mixer_c0_plane_offset_plane_offset_r(data)                       (0x00FF0000&((data)<<16))
#define  OSDOVL_Mixer_c0_plane_offset_plane_offset_g(data)                       (0x0000FF00&((data)<<8))
#define  OSDOVL_Mixer_c0_plane_offset_plane_offset_b(data)                       (0x000000FF&(data))
#define  OSDOVL_Mixer_c0_plane_offset_get_plane_offset_a(data)                   ((0xFF000000&(data))>>24)
#define  OSDOVL_Mixer_c0_plane_offset_get_plane_offset_r(data)                   ((0x00FF0000&(data))>>16)
#define  OSDOVL_Mixer_c0_plane_offset_get_plane_offset_g(data)                   ((0x0000FF00&(data))>>8)
#define  OSDOVL_Mixer_c0_plane_offset_get_plane_offset_b(data)                   (0x000000FF&(data))

#define  OSDOVL_Mixer_c1_plane_alpha1                                           0x1802B014
#define  OSDOVL_Mixer_c1_plane_alpha1_reg_addr                                   "0xB802B014"
#define  OSDOVL_Mixer_c1_plane_alpha1_reg                                        0xB802B014
#define  OSDOVL_Mixer_c1_plane_alpha1_inst_addr                                  "0x0005"
#define  set_OSDOVL_Mixer_c1_plane_alpha1_reg(data)                              (*((volatile unsigned int*)OSDOVL_Mixer_c1_plane_alpha1_reg)=data)
#define  get_OSDOVL_Mixer_c1_plane_alpha1_reg                                    (*((volatile unsigned int*)OSDOVL_Mixer_c1_plane_alpha1_reg))
#define  OSDOVL_Mixer_c1_plane_alpha1_plane_alpha_a_shift                        (16)
#define  OSDOVL_Mixer_c1_plane_alpha1_plane_alpha_r_shift                        (0)
#define  OSDOVL_Mixer_c1_plane_alpha1_plane_alpha_a_mask                         (0x01FF0000)
#define  OSDOVL_Mixer_c1_plane_alpha1_plane_alpha_r_mask                         (0x000001FF)
#define  OSDOVL_Mixer_c1_plane_alpha1_plane_alpha_a(data)                        (0x01FF0000&((data)<<16))
#define  OSDOVL_Mixer_c1_plane_alpha1_plane_alpha_r(data)                        (0x000001FF&(data))
#define  OSDOVL_Mixer_c1_plane_alpha1_get_plane_alpha_a(data)                    ((0x01FF0000&(data))>>16)
#define  OSDOVL_Mixer_c1_plane_alpha1_get_plane_alpha_r(data)                    (0x000001FF&(data))

#define  OSDOVL_Mixer_c1_plane_alpha2                                           0x1802B018
#define  OSDOVL_Mixer_c1_plane_alpha2_reg_addr                                   "0xB802B018"
#define  OSDOVL_Mixer_c1_plane_alpha2_reg                                        0xB802B018
#define  OSDOVL_Mixer_c1_plane_alpha2_inst_addr                                  "0x0006"
#define  set_OSDOVL_Mixer_c1_plane_alpha2_reg(data)                              (*((volatile unsigned int*)OSDOVL_Mixer_c1_plane_alpha2_reg)=data)
#define  get_OSDOVL_Mixer_c1_plane_alpha2_reg                                    (*((volatile unsigned int*)OSDOVL_Mixer_c1_plane_alpha2_reg))
#define  OSDOVL_Mixer_c1_plane_alpha2_plane_alpha_g_shift                        (16)
#define  OSDOVL_Mixer_c1_plane_alpha2_plane_alpha_b_shift                        (0)
#define  OSDOVL_Mixer_c1_plane_alpha2_plane_alpha_g_mask                         (0x01FF0000)
#define  OSDOVL_Mixer_c1_plane_alpha2_plane_alpha_b_mask                         (0x000001FF)
#define  OSDOVL_Mixer_c1_plane_alpha2_plane_alpha_g(data)                        (0x01FF0000&((data)<<16))
#define  OSDOVL_Mixer_c1_plane_alpha2_plane_alpha_b(data)                        (0x000001FF&(data))
#define  OSDOVL_Mixer_c1_plane_alpha2_get_plane_alpha_g(data)                    ((0x01FF0000&(data))>>16)
#define  OSDOVL_Mixer_c1_plane_alpha2_get_plane_alpha_b(data)                    (0x000001FF&(data))

#define  OSDOVL_Mixer_c1_plane_offset                                           0x1802B01C
#define  OSDOVL_Mixer_c1_plane_offset_reg_addr                                   "0xB802B01C"
#define  OSDOVL_Mixer_c1_plane_offset_reg                                        0xB802B01C
#define  OSDOVL_Mixer_c1_plane_offset_inst_addr                                  "0x0007"
#define  set_OSDOVL_Mixer_c1_plane_offset_reg(data)                              (*((volatile unsigned int*)OSDOVL_Mixer_c1_plane_offset_reg)=data)
#define  get_OSDOVL_Mixer_c1_plane_offset_reg                                    (*((volatile unsigned int*)OSDOVL_Mixer_c1_plane_offset_reg))
#define  OSDOVL_Mixer_c1_plane_offset_plane_offset_a_shift                       (24)
#define  OSDOVL_Mixer_c1_plane_offset_plane_offset_r_shift                       (16)
#define  OSDOVL_Mixer_c1_plane_offset_plane_offset_g_shift                       (8)
#define  OSDOVL_Mixer_c1_plane_offset_plane_offset_b_shift                       (0)
#define  OSDOVL_Mixer_c1_plane_offset_plane_offset_a_mask                        (0xFF000000)
#define  OSDOVL_Mixer_c1_plane_offset_plane_offset_r_mask                        (0x00FF0000)
#define  OSDOVL_Mixer_c1_plane_offset_plane_offset_g_mask                        (0x0000FF00)
#define  OSDOVL_Mixer_c1_plane_offset_plane_offset_b_mask                        (0x000000FF)
#define  OSDOVL_Mixer_c1_plane_offset_plane_offset_a(data)                       (0xFF000000&((data)<<24))
#define  OSDOVL_Mixer_c1_plane_offset_plane_offset_r(data)                       (0x00FF0000&((data)<<16))
#define  OSDOVL_Mixer_c1_plane_offset_plane_offset_g(data)                       (0x0000FF00&((data)<<8))
#define  OSDOVL_Mixer_c1_plane_offset_plane_offset_b(data)                       (0x000000FF&(data))
#define  OSDOVL_Mixer_c1_plane_offset_get_plane_offset_a(data)                   ((0xFF000000&(data))>>24)
#define  OSDOVL_Mixer_c1_plane_offset_get_plane_offset_r(data)                   ((0x00FF0000&(data))>>16)
#define  OSDOVL_Mixer_c1_plane_offset_get_plane_offset_g(data)                   ((0x0000FF00&(data))>>8)
#define  OSDOVL_Mixer_c1_plane_offset_get_plane_offset_b(data)                   (0x000000FF&(data))

#define  OSDOVL_Mixer_c2_plane_alpha1                                           0x1802B020
#define  OSDOVL_Mixer_c2_plane_alpha1_reg_addr                                   "0xB802B020"
#define  OSDOVL_Mixer_c2_plane_alpha1_reg                                        0xB802B020
#define  OSDOVL_Mixer_c2_plane_alpha1_inst_addr                                  "0x0008"
#define  set_OSDOVL_Mixer_c2_plane_alpha1_reg(data)                              (*((volatile unsigned int*)OSDOVL_Mixer_c2_plane_alpha1_reg)=data)
#define  get_OSDOVL_Mixer_c2_plane_alpha1_reg                                    (*((volatile unsigned int*)OSDOVL_Mixer_c2_plane_alpha1_reg))
#define  OSDOVL_Mixer_c2_plane_alpha1_plane_alpha_a_shift                        (16)
#define  OSDOVL_Mixer_c2_plane_alpha1_plane_alpha_r_shift                        (0)
#define  OSDOVL_Mixer_c2_plane_alpha1_plane_alpha_a_mask                         (0x01FF0000)
#define  OSDOVL_Mixer_c2_plane_alpha1_plane_alpha_r_mask                         (0x000001FF)
#define  OSDOVL_Mixer_c2_plane_alpha1_plane_alpha_a(data)                        (0x01FF0000&((data)<<16))
#define  OSDOVL_Mixer_c2_plane_alpha1_plane_alpha_r(data)                        (0x000001FF&(data))
#define  OSDOVL_Mixer_c2_plane_alpha1_get_plane_alpha_a(data)                    ((0x01FF0000&(data))>>16)
#define  OSDOVL_Mixer_c2_plane_alpha1_get_plane_alpha_r(data)                    (0x000001FF&(data))

#define  OSDOVL_Mixer_c2_plane_alpha2                                           0x1802B024
#define  OSDOVL_Mixer_c2_plane_alpha2_reg_addr                                   "0xB802B024"
#define  OSDOVL_Mixer_c2_plane_alpha2_reg                                        0xB802B024
#define  OSDOVL_Mixer_c2_plane_alpha2_inst_addr                                  "0x0009"
#define  set_OSDOVL_Mixer_c2_plane_alpha2_reg(data)                              (*((volatile unsigned int*)OSDOVL_Mixer_c2_plane_alpha2_reg)=data)
#define  get_OSDOVL_Mixer_c2_plane_alpha2_reg                                    (*((volatile unsigned int*)OSDOVL_Mixer_c2_plane_alpha2_reg))
#define  OSDOVL_Mixer_c2_plane_alpha2_plane_alpha_g_shift                        (16)
#define  OSDOVL_Mixer_c2_plane_alpha2_plane_alpha_b_shift                        (0)
#define  OSDOVL_Mixer_c2_plane_alpha2_plane_alpha_g_mask                         (0x01FF0000)
#define  OSDOVL_Mixer_c2_plane_alpha2_plane_alpha_b_mask                         (0x000001FF)
#define  OSDOVL_Mixer_c2_plane_alpha2_plane_alpha_g(data)                        (0x01FF0000&((data)<<16))
#define  OSDOVL_Mixer_c2_plane_alpha2_plane_alpha_b(data)                        (0x000001FF&(data))
#define  OSDOVL_Mixer_c2_plane_alpha2_get_plane_alpha_g(data)                    ((0x01FF0000&(data))>>16)
#define  OSDOVL_Mixer_c2_plane_alpha2_get_plane_alpha_b(data)                    (0x000001FF&(data))

#define  OSDOVL_Mixer_c2_plane_offset                                           0x1802B028
#define  OSDOVL_Mixer_c2_plane_offset_reg_addr                                   "0xB802B028"
#define  OSDOVL_Mixer_c2_plane_offset_reg                                        0xB802B028
#define  OSDOVL_Mixer_c2_plane_offset_inst_addr                                  "0x000A"
#define  set_OSDOVL_Mixer_c2_plane_offset_reg(data)                              (*((volatile unsigned int*)OSDOVL_Mixer_c2_plane_offset_reg)=data)
#define  get_OSDOVL_Mixer_c2_plane_offset_reg                                    (*((volatile unsigned int*)OSDOVL_Mixer_c2_plane_offset_reg))
#define  OSDOVL_Mixer_c2_plane_offset_plane_offset_a_shift                       (24)
#define  OSDOVL_Mixer_c2_plane_offset_plane_offset_r_shift                       (16)
#define  OSDOVL_Mixer_c2_plane_offset_plane_offset_g_shift                       (8)
#define  OSDOVL_Mixer_c2_plane_offset_plane_offset_b_shift                       (0)
#define  OSDOVL_Mixer_c2_plane_offset_plane_offset_a_mask                        (0xFF000000)
#define  OSDOVL_Mixer_c2_plane_offset_plane_offset_r_mask                        (0x00FF0000)
#define  OSDOVL_Mixer_c2_plane_offset_plane_offset_g_mask                        (0x0000FF00)
#define  OSDOVL_Mixer_c2_plane_offset_plane_offset_b_mask                        (0x000000FF)
#define  OSDOVL_Mixer_c2_plane_offset_plane_offset_a(data)                       (0xFF000000&((data)<<24))
#define  OSDOVL_Mixer_c2_plane_offset_plane_offset_r(data)                       (0x00FF0000&((data)<<16))
#define  OSDOVL_Mixer_c2_plane_offset_plane_offset_g(data)                       (0x0000FF00&((data)<<8))
#define  OSDOVL_Mixer_c2_plane_offset_plane_offset_b(data)                       (0x000000FF&(data))
#define  OSDOVL_Mixer_c2_plane_offset_get_plane_offset_a(data)                   ((0xFF000000&(data))>>24)
#define  OSDOVL_Mixer_c2_plane_offset_get_plane_offset_r(data)                   ((0x00FF0000&(data))>>16)
#define  OSDOVL_Mixer_c2_plane_offset_get_plane_offset_g(data)                   ((0x0000FF00&(data))>>8)
#define  OSDOVL_Mixer_c2_plane_offset_get_plane_offset_b(data)                   (0x000000FF&(data))

#define  OSDOVL_Mixer_c3_plane_alpha1                                           0x1802B02C
#define  OSDOVL_Mixer_c3_plane_alpha1_reg_addr                                   "0xB802B02C"
#define  OSDOVL_Mixer_c3_plane_alpha1_reg                                        0xB802B02C
#define  OSDOVL_Mixer_c3_plane_alpha1_inst_addr                                  "0x000B"
#define  set_OSDOVL_Mixer_c3_plane_alpha1_reg(data)                              (*((volatile unsigned int*)OSDOVL_Mixer_c3_plane_alpha1_reg)=data)
#define  get_OSDOVL_Mixer_c3_plane_alpha1_reg                                    (*((volatile unsigned int*)OSDOVL_Mixer_c3_plane_alpha1_reg))
#define  OSDOVL_Mixer_c3_plane_alpha1_plane_alpha_a_shift                        (16)
#define  OSDOVL_Mixer_c3_plane_alpha1_plane_alpha_r_shift                        (0)
#define  OSDOVL_Mixer_c3_plane_alpha1_plane_alpha_a_mask                         (0x01FF0000)
#define  OSDOVL_Mixer_c3_plane_alpha1_plane_alpha_r_mask                         (0x000001FF)
#define  OSDOVL_Mixer_c3_plane_alpha1_plane_alpha_a(data)                        (0x01FF0000&((data)<<16))
#define  OSDOVL_Mixer_c3_plane_alpha1_plane_alpha_r(data)                        (0x000001FF&(data))
#define  OSDOVL_Mixer_c3_plane_alpha1_get_plane_alpha_a(data)                    ((0x01FF0000&(data))>>16)
#define  OSDOVL_Mixer_c3_plane_alpha1_get_plane_alpha_r(data)                    (0x000001FF&(data))

#define  OSDOVL_Mixer_c3_plane_alpha2                                           0x1802B030
#define  OSDOVL_Mixer_c3_plane_alpha2_reg_addr                                   "0xB802B030"
#define  OSDOVL_Mixer_c3_plane_alpha2_reg                                        0xB802B030
#define  OSDOVL_Mixer_c3_plane_alpha2_inst_addr                                  "0x000C"
#define  set_OSDOVL_Mixer_c3_plane_alpha2_reg(data)                              (*((volatile unsigned int*)OSDOVL_Mixer_c3_plane_alpha2_reg)=data)
#define  get_OSDOVL_Mixer_c3_plane_alpha2_reg                                    (*((volatile unsigned int*)OSDOVL_Mixer_c3_plane_alpha2_reg))
#define  OSDOVL_Mixer_c3_plane_alpha2_plane_alpha_g_shift                        (16)
#define  OSDOVL_Mixer_c3_plane_alpha2_plane_alpha_b_shift                        (0)
#define  OSDOVL_Mixer_c3_plane_alpha2_plane_alpha_g_mask                         (0x01FF0000)
#define  OSDOVL_Mixer_c3_plane_alpha2_plane_alpha_b_mask                         (0x000001FF)
#define  OSDOVL_Mixer_c3_plane_alpha2_plane_alpha_g(data)                        (0x01FF0000&((data)<<16))
#define  OSDOVL_Mixer_c3_plane_alpha2_plane_alpha_b(data)                        (0x000001FF&(data))
#define  OSDOVL_Mixer_c3_plane_alpha2_get_plane_alpha_g(data)                    ((0x01FF0000&(data))>>16)
#define  OSDOVL_Mixer_c3_plane_alpha2_get_plane_alpha_b(data)                    (0x000001FF&(data))

#define  OSDOVL_Mixer_c3_plane_offset                                           0x1802B034
#define  OSDOVL_Mixer_c3_plane_offset_reg_addr                                   "0xB802B034"
#define  OSDOVL_Mixer_c3_plane_offset_reg                                        0xB802B034
#define  OSDOVL_Mixer_c3_plane_offset_inst_addr                                  "0x000D"
#define  set_OSDOVL_Mixer_c3_plane_offset_reg(data)                              (*((volatile unsigned int*)OSDOVL_Mixer_c3_plane_offset_reg)=data)
#define  get_OSDOVL_Mixer_c3_plane_offset_reg                                    (*((volatile unsigned int*)OSDOVL_Mixer_c3_plane_offset_reg))
#define  OSDOVL_Mixer_c3_plane_offset_plane_offset_a_shift                       (24)
#define  OSDOVL_Mixer_c3_plane_offset_plane_offset_r_shift                       (16)
#define  OSDOVL_Mixer_c3_plane_offset_plane_offset_g_shift                       (8)
#define  OSDOVL_Mixer_c3_plane_offset_plane_offset_b_shift                       (0)
#define  OSDOVL_Mixer_c3_plane_offset_plane_offset_a_mask                        (0xFF000000)
#define  OSDOVL_Mixer_c3_plane_offset_plane_offset_r_mask                        (0x00FF0000)
#define  OSDOVL_Mixer_c3_plane_offset_plane_offset_g_mask                        (0x0000FF00)
#define  OSDOVL_Mixer_c3_plane_offset_plane_offset_b_mask                        (0x000000FF)
#define  OSDOVL_Mixer_c3_plane_offset_plane_offset_a(data)                       (0xFF000000&((data)<<24))
#define  OSDOVL_Mixer_c3_plane_offset_plane_offset_r(data)                       (0x00FF0000&((data)<<16))
#define  OSDOVL_Mixer_c3_plane_offset_plane_offset_g(data)                       (0x0000FF00&((data)<<8))
#define  OSDOVL_Mixer_c3_plane_offset_plane_offset_b(data)                       (0x000000FF&(data))
#define  OSDOVL_Mixer_c3_plane_offset_get_plane_offset_a(data)                   ((0xFF000000&(data))>>24)
#define  OSDOVL_Mixer_c3_plane_offset_get_plane_offset_r(data)                   ((0x00FF0000&(data))>>16)
#define  OSDOVL_Mixer_c3_plane_offset_get_plane_offset_g(data)                   ((0x0000FF00&(data))>>8)
#define  OSDOVL_Mixer_c3_plane_offset_get_plane_offset_b(data)                   (0x000000FF&(data))

#define  OSDOVL_Mixer_OSD_GAMMA_CTRL                                            0x1802B038
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_reg_addr                                    "0xB802B038"
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_reg                                         0xB802B038
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_inst_addr                                   "0x000E"
#define  set_OSDOVL_Mixer_OSD_GAMMA_CTRL_reg(data)                               (*((volatile unsigned int*)OSDOVL_Mixer_OSD_GAMMA_CTRL_reg)=data)
#define  get_OSDOVL_Mixer_OSD_GAMMA_CTRL_reg                                     (*((volatile unsigned int*)OSDOVL_Mixer_OSD_GAMMA_CTRL_reg))
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_d1_m3_shift                                 (28)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_d1_m2_shift                                 (24)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_d1_m1_shift                                 (20)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_d1_m0_shift                                 (16)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_osd3_gamma_zone_type_shift                  (12)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_osd2_gamma_zone_type_shift                  (10)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_osd1_gamma_zone_type_shift                  (8)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_osd_gamma_position_shift                    (4)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_dynamic_region_en_shift                     (3)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_mixer_gamma2_en_shift                       (2)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_mixer_osd3x3_en_shift                       (1)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_mixer_gamma1_en_shift                       (0)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_d1_m3_mask                                  (0x70000000)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_d1_m2_mask                                  (0x07000000)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_d1_m1_mask                                  (0x00700000)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_d1_m0_mask                                  (0x00070000)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_osd3_gamma_zone_type_mask                   (0x00003000)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_osd2_gamma_zone_type_mask                   (0x00000C00)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_osd1_gamma_zone_type_mask                   (0x00000300)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_osd_gamma_position_mask                     (0x00000070)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_dynamic_region_en_mask                      (0x00000008)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_mixer_gamma2_en_mask                        (0x00000004)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_mixer_osd3x3_en_mask                        (0x00000002)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_mixer_gamma1_en_mask                        (0x00000001)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_d1_m3(data)                                 (0x70000000&((data)<<28))
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_d1_m2(data)                                 (0x07000000&((data)<<24))
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_d1_m1(data)                                 (0x00700000&((data)<<20))
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_d1_m0(data)                                 (0x00070000&((data)<<16))
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_osd3_gamma_zone_type(data)                  (0x00003000&((data)<<12))
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_osd2_gamma_zone_type(data)                  (0x00000C00&((data)<<10))
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_osd1_gamma_zone_type(data)                  (0x00000300&((data)<<8))
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_osd_gamma_position(data)                    (0x00000070&((data)<<4))
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_dynamic_region_en(data)                     (0x00000008&((data)<<3))
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_mixer_gamma2_en(data)                       (0x00000004&((data)<<2))
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_mixer_osd3x3_en(data)                       (0x00000002&((data)<<1))
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_mixer_gamma1_en(data)                       (0x00000001&(data))
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_get_d1_m3(data)                             ((0x70000000&(data))>>28)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_get_d1_m2(data)                             ((0x07000000&(data))>>24)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_get_d1_m1(data)                             ((0x00700000&(data))>>20)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_get_d1_m0(data)                             ((0x00070000&(data))>>16)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_get_osd3_gamma_zone_type(data)              ((0x00003000&(data))>>12)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_get_osd2_gamma_zone_type(data)              ((0x00000C00&(data))>>10)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_get_osd1_gamma_zone_type(data)              ((0x00000300&(data))>>8)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_get_osd_gamma_position(data)                ((0x00000070&(data))>>4)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_get_dynamic_region_en(data)                 ((0x00000008&(data))>>3)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_get_mixer_gamma2_en(data)                   ((0x00000004&(data))>>2)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_get_mixer_osd3x3_en(data)                   ((0x00000002&(data))>>1)
#define  OSDOVL_Mixer_OSD_GAMMA_CTRL_get_mixer_gamma1_en(data)                   (0x00000001&(data))

#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2                            0x1802B03C
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_reg_addr                    "0xB802B03C"
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_reg                         0xB802B03C
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_inst_addr                   "0x000F"
#define  set_OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_reg(data)               (*((volatile unsigned int*)OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_reg)=data)
#define  get_OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_reg                     (*((volatile unsigned int*)OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_reg))
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m3_shift                 (28)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m2_shift                 (24)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m1_shift                 (20)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m0_shift                 (16)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m3_shift                 (12)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m2_shift                 (8)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m1_shift                 (4)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m0_shift                 (0)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m3_mask                  (0x70000000)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m2_mask                  (0x07000000)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m1_mask                  (0x00700000)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m0_mask                  (0x00070000)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m3_mask                  (0x00007000)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m2_mask                  (0x00000700)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m1_mask                  (0x00000070)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m0_mask                  (0x00000007)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m3(data)                 (0x70000000&((data)<<28))
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m2(data)                 (0x07000000&((data)<<24))
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m1(data)                 (0x00700000&((data)<<20))
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d3_m0(data)                 (0x00070000&((data)<<16))
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m3(data)                 (0x00007000&((data)<<12))
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m2(data)                 (0x00000700&((data)<<8))
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m1(data)                 (0x00000070&((data)<<4))
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_d2_m0(data)                 (0x00000007&(data))
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_get_d3_m3(data)             ((0x70000000&(data))>>28)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_get_d3_m2(data)             ((0x07000000&(data))>>24)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_get_d3_m1(data)             ((0x00700000&(data))>>20)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_get_d3_m0(data)             ((0x00070000&(data))>>16)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_get_d2_m3(data)             ((0x00007000&(data))>>12)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_get_d2_m2(data)             ((0x00000700&(data))>>8)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_get_d2_m1(data)             ((0x00000070&(data))>>4)
#define  OSDOVL_Mixer_OSD_GAMMA_dynamic_region_D3_D2_get_d2_m0(data)             (0x00000007&(data))

#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_0                                   0x1802B040
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_0_reg_addr                           "0xB802B040"
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_0_reg                                0xB802B040
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_0_inst_addr                          "0x0010"
#define  set_OSDOVL_Mixer_Osd3x3_Data_In_Offset_0_reg(data)                      (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Data_In_Offset_0_reg)=data)
#define  get_OSDOVL_Mixer_Osd3x3_Data_In_Offset_0_reg                            (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Data_In_Offset_0_reg))
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_0_y_offset_shift                     (16)
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_0_x_offset_shift                     (0)
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_0_y_offset_mask                      (0x1FFF0000)
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_0_x_offset_mask                      (0x00001FFF)
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_0_y_offset(data)                     (0x1FFF0000&((data)<<16))
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_0_x_offset(data)                     (0x00001FFF&(data))
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_0_get_y_offset(data)                 ((0x1FFF0000&(data))>>16)
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_0_get_x_offset(data)                 (0x00001FFF&(data))

#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_1                                   0x1802B044
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_1_reg_addr                           "0xB802B044"
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_1_reg                                0xB802B044
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_1_inst_addr                          "0x0011"
#define  set_OSDOVL_Mixer_Osd3x3_Data_In_Offset_1_reg(data)                      (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Data_In_Offset_1_reg)=data)
#define  get_OSDOVL_Mixer_Osd3x3_Data_In_Offset_1_reg                            (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Data_In_Offset_1_reg))
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_1_z_offset_shift                     (0)
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_1_z_offset_mask                      (0x00001FFF)
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_1_z_offset(data)                     (0x00001FFF&(data))
#define  OSDOVL_Mixer_Osd3x3_Data_In_Offset_1_get_z_offset(data)                 (0x00001FFF&(data))

#define  OSDOVL_Mixer_Osd3x3_Data_0                                             0x1802B048
#define  OSDOVL_Mixer_Osd3x3_Data_0_reg_addr                                     "0xB802B048"
#define  OSDOVL_Mixer_Osd3x3_Data_0_reg                                          0xB802B048
#define  OSDOVL_Mixer_Osd3x3_Data_0_inst_addr                                    "0x0012"
#define  set_OSDOVL_Mixer_Osd3x3_Data_0_reg(data)                                (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Data_0_reg)=data)
#define  get_OSDOVL_Mixer_Osd3x3_Data_0_reg                                      (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Data_0_reg))
#define  OSDOVL_Mixer_Osd3x3_Data_0_k12_shift                                    (16)
#define  OSDOVL_Mixer_Osd3x3_Data_0_k11_shift                                    (0)
#define  OSDOVL_Mixer_Osd3x3_Data_0_k12_mask                                     (0x3FFF0000)
#define  OSDOVL_Mixer_Osd3x3_Data_0_k11_mask                                     (0x00003FFF)
#define  OSDOVL_Mixer_Osd3x3_Data_0_k12(data)                                    (0x3FFF0000&((data)<<16))
#define  OSDOVL_Mixer_Osd3x3_Data_0_k11(data)                                    (0x00003FFF&(data))
#define  OSDOVL_Mixer_Osd3x3_Data_0_get_k12(data)                                ((0x3FFF0000&(data))>>16)
#define  OSDOVL_Mixer_Osd3x3_Data_0_get_k11(data)                                (0x00003FFF&(data))

#define  OSDOVL_Mixer_Osd3x3_Data_1                                             0x1802B04C
#define  OSDOVL_Mixer_Osd3x3_Data_1_reg_addr                                     "0xB802B04C"
#define  OSDOVL_Mixer_Osd3x3_Data_1_reg                                          0xB802B04C
#define  OSDOVL_Mixer_Osd3x3_Data_1_inst_addr                                    "0x0013"
#define  set_OSDOVL_Mixer_Osd3x3_Data_1_reg(data)                                (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Data_1_reg)=data)
#define  get_OSDOVL_Mixer_Osd3x3_Data_1_reg                                      (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Data_1_reg))
#define  OSDOVL_Mixer_Osd3x3_Data_1_k21_shift                                    (16)
#define  OSDOVL_Mixer_Osd3x3_Data_1_k13_shift                                    (0)
#define  OSDOVL_Mixer_Osd3x3_Data_1_k21_mask                                     (0x3FFF0000)
#define  OSDOVL_Mixer_Osd3x3_Data_1_k13_mask                                     (0x00003FFF)
#define  OSDOVL_Mixer_Osd3x3_Data_1_k21(data)                                    (0x3FFF0000&((data)<<16))
#define  OSDOVL_Mixer_Osd3x3_Data_1_k13(data)                                    (0x00003FFF&(data))
#define  OSDOVL_Mixer_Osd3x3_Data_1_get_k21(data)                                ((0x3FFF0000&(data))>>16)
#define  OSDOVL_Mixer_Osd3x3_Data_1_get_k13(data)                                (0x00003FFF&(data))

#define  OSDOVL_Mixer_Osd3x3_Data_2                                             0x1802B050
#define  OSDOVL_Mixer_Osd3x3_Data_2_reg_addr                                     "0xB802B050"
#define  OSDOVL_Mixer_Osd3x3_Data_2_reg                                          0xB802B050
#define  OSDOVL_Mixer_Osd3x3_Data_2_inst_addr                                    "0x0014"
#define  set_OSDOVL_Mixer_Osd3x3_Data_2_reg(data)                                (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Data_2_reg)=data)
#define  get_OSDOVL_Mixer_Osd3x3_Data_2_reg                                      (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Data_2_reg))
#define  OSDOVL_Mixer_Osd3x3_Data_2_k23_shift                                    (16)
#define  OSDOVL_Mixer_Osd3x3_Data_2_k22_shift                                    (0)
#define  OSDOVL_Mixer_Osd3x3_Data_2_k23_mask                                     (0x3FFF0000)
#define  OSDOVL_Mixer_Osd3x3_Data_2_k22_mask                                     (0x00003FFF)
#define  OSDOVL_Mixer_Osd3x3_Data_2_k23(data)                                    (0x3FFF0000&((data)<<16))
#define  OSDOVL_Mixer_Osd3x3_Data_2_k22(data)                                    (0x00003FFF&(data))
#define  OSDOVL_Mixer_Osd3x3_Data_2_get_k23(data)                                ((0x3FFF0000&(data))>>16)
#define  OSDOVL_Mixer_Osd3x3_Data_2_get_k22(data)                                (0x00003FFF&(data))

#define  OSDOVL_Mixer_Osd3x3_Data_3                                             0x1802B054
#define  OSDOVL_Mixer_Osd3x3_Data_3_reg_addr                                     "0xB802B054"
#define  OSDOVL_Mixer_Osd3x3_Data_3_reg                                          0xB802B054
#define  OSDOVL_Mixer_Osd3x3_Data_3_inst_addr                                    "0x0015"
#define  set_OSDOVL_Mixer_Osd3x3_Data_3_reg(data)                                (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Data_3_reg)=data)
#define  get_OSDOVL_Mixer_Osd3x3_Data_3_reg                                      (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Data_3_reg))
#define  OSDOVL_Mixer_Osd3x3_Data_3_k32_shift                                    (16)
#define  OSDOVL_Mixer_Osd3x3_Data_3_k31_shift                                    (0)
#define  OSDOVL_Mixer_Osd3x3_Data_3_k32_mask                                     (0x3FFF0000)
#define  OSDOVL_Mixer_Osd3x3_Data_3_k31_mask                                     (0x00003FFF)
#define  OSDOVL_Mixer_Osd3x3_Data_3_k32(data)                                    (0x3FFF0000&((data)<<16))
#define  OSDOVL_Mixer_Osd3x3_Data_3_k31(data)                                    (0x00003FFF&(data))
#define  OSDOVL_Mixer_Osd3x3_Data_3_get_k32(data)                                ((0x3FFF0000&(data))>>16)
#define  OSDOVL_Mixer_Osd3x3_Data_3_get_k31(data)                                (0x00003FFF&(data))

#define  OSDOVL_Mixer_Osd3x3_Data_4                                             0x1802B058
#define  OSDOVL_Mixer_Osd3x3_Data_4_reg_addr                                     "0xB802B058"
#define  OSDOVL_Mixer_Osd3x3_Data_4_reg                                          0xB802B058
#define  OSDOVL_Mixer_Osd3x3_Data_4_inst_addr                                    "0x0016"
#define  set_OSDOVL_Mixer_Osd3x3_Data_4_reg(data)                                (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Data_4_reg)=data)
#define  get_OSDOVL_Mixer_Osd3x3_Data_4_reg                                      (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Data_4_reg))
#define  OSDOVL_Mixer_Osd3x3_Data_4_k33_shift                                    (0)
#define  OSDOVL_Mixer_Osd3x3_Data_4_k33_mask                                     (0x00003FFF)
#define  OSDOVL_Mixer_Osd3x3_Data_4_k33(data)                                    (0x00003FFF&(data))
#define  OSDOVL_Mixer_Osd3x3_Data_4_get_k33(data)                                (0x00003FFF&(data))

#define  OSDOVL_Mixer_Osd3x3_Out_offset_0                                       0x1802B05C
#define  OSDOVL_Mixer_Osd3x3_Out_offset_0_reg_addr                               "0xB802B05C"
#define  OSDOVL_Mixer_Osd3x3_Out_offset_0_reg                                    0xB802B05C
#define  OSDOVL_Mixer_Osd3x3_Out_offset_0_inst_addr                              "0x0017"
#define  set_OSDOVL_Mixer_Osd3x3_Out_offset_0_reg(data)                          (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Out_offset_0_reg)=data)
#define  get_OSDOVL_Mixer_Osd3x3_Out_offset_0_reg                                (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Out_offset_0_reg))
#define  OSDOVL_Mixer_Osd3x3_Out_offset_0_goffset_shift                          (16)
#define  OSDOVL_Mixer_Osd3x3_Out_offset_0_roffset_shift                          (0)
#define  OSDOVL_Mixer_Osd3x3_Out_offset_0_goffset_mask                           (0x1FFF0000)
#define  OSDOVL_Mixer_Osd3x3_Out_offset_0_roffset_mask                           (0x00001FFF)
#define  OSDOVL_Mixer_Osd3x3_Out_offset_0_goffset(data)                          (0x1FFF0000&((data)<<16))
#define  OSDOVL_Mixer_Osd3x3_Out_offset_0_roffset(data)                          (0x00001FFF&(data))
#define  OSDOVL_Mixer_Osd3x3_Out_offset_0_get_goffset(data)                      ((0x1FFF0000&(data))>>16)
#define  OSDOVL_Mixer_Osd3x3_Out_offset_0_get_roffset(data)                      (0x00001FFF&(data))

#define  OSDOVL_Mixer_Osd3x3_Out_offset_1                                       0x1802B060
#define  OSDOVL_Mixer_Osd3x3_Out_offset_1_reg_addr                               "0xB802B060"
#define  OSDOVL_Mixer_Osd3x3_Out_offset_1_reg                                    0xB802B060
#define  OSDOVL_Mixer_Osd3x3_Out_offset_1_inst_addr                              "0x0018"
#define  set_OSDOVL_Mixer_Osd3x3_Out_offset_1_reg(data)                          (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Out_offset_1_reg)=data)
#define  get_OSDOVL_Mixer_Osd3x3_Out_offset_1_reg                                (*((volatile unsigned int*)OSDOVL_Mixer_Osd3x3_Out_offset_1_reg))
#define  OSDOVL_Mixer_Osd3x3_Out_offset_1_boffset_shift                          (0)
#define  OSDOVL_Mixer_Osd3x3_Out_offset_1_boffset_mask                           (0x00001FFF)
#define  OSDOVL_Mixer_Osd3x3_Out_offset_1_boffset(data)                          (0x00001FFF&(data))
#define  OSDOVL_Mixer_Osd3x3_Out_offset_1_get_boffset(data)                      (0x00001FFF&(data))

#define  OSDOVL_Mixer_b1                                                        0x1802B064
#define  OSDOVL_Mixer_b1_reg_addr                                                "0xB802B064"
#define  OSDOVL_Mixer_b1_reg                                                     0xB802B064
#define  OSDOVL_Mixer_b1_inst_addr                                               "0x0019"
#define  set_OSDOVL_Mixer_b1_reg(data)                                           (*((volatile unsigned int*)OSDOVL_Mixer_b1_reg)=data)
#define  get_OSDOVL_Mixer_b1_reg                                                 (*((volatile unsigned int*)OSDOVL_Mixer_b1_reg))
#define  OSDOVL_Mixer_b1_k1_shift                                                (24)
#define  OSDOVL_Mixer_b1_k2_shift                                                (16)
#define  OSDOVL_Mixer_b1_k3_shift                                                (8)
#define  OSDOVL_Mixer_b1_k4_shift                                                (0)
#define  OSDOVL_Mixer_b1_k1_mask                                                 (0x3F000000)
#define  OSDOVL_Mixer_b1_k2_mask                                                 (0x003F0000)
#define  OSDOVL_Mixer_b1_k3_mask                                                 (0x00003F00)
#define  OSDOVL_Mixer_b1_k4_mask                                                 (0x0000003F)
#define  OSDOVL_Mixer_b1_k1(data)                                                (0x3F000000&((data)<<24))
#define  OSDOVL_Mixer_b1_k2(data)                                                (0x003F0000&((data)<<16))
#define  OSDOVL_Mixer_b1_k3(data)                                                (0x00003F00&((data)<<8))
#define  OSDOVL_Mixer_b1_k4(data)                                                (0x0000003F&(data))
#define  OSDOVL_Mixer_b1_get_k1(data)                                            ((0x3F000000&(data))>>24)
#define  OSDOVL_Mixer_b1_get_k2(data)                                            ((0x003F0000&(data))>>16)
#define  OSDOVL_Mixer_b1_get_k3(data)                                            ((0x00003F00&(data))>>8)
#define  OSDOVL_Mixer_b1_get_k4(data)                                            (0x0000003F&(data))

#define  OSDOVL_Mixer_b2                                                        0x1802B068
#define  OSDOVL_Mixer_b2_reg_addr                                                "0xB802B068"
#define  OSDOVL_Mixer_b2_reg                                                     0xB802B068
#define  OSDOVL_Mixer_b2_inst_addr                                               "0x001A"
#define  set_OSDOVL_Mixer_b2_reg(data)                                           (*((volatile unsigned int*)OSDOVL_Mixer_b2_reg)=data)
#define  get_OSDOVL_Mixer_b2_reg                                                 (*((volatile unsigned int*)OSDOVL_Mixer_b2_reg))
#define  OSDOVL_Mixer_b2_k1_shift                                                (24)
#define  OSDOVL_Mixer_b2_k2_shift                                                (16)
#define  OSDOVL_Mixer_b2_k3_shift                                                (8)
#define  OSDOVL_Mixer_b2_k4_shift                                                (0)
#define  OSDOVL_Mixer_b2_k1_mask                                                 (0x3F000000)
#define  OSDOVL_Mixer_b2_k2_mask                                                 (0x003F0000)
#define  OSDOVL_Mixer_b2_k3_mask                                                 (0x00003F00)
#define  OSDOVL_Mixer_b2_k4_mask                                                 (0x0000003F)
#define  OSDOVL_Mixer_b2_k1(data)                                                (0x3F000000&((data)<<24))
#define  OSDOVL_Mixer_b2_k2(data)                                                (0x003F0000&((data)<<16))
#define  OSDOVL_Mixer_b2_k3(data)                                                (0x00003F00&((data)<<8))
#define  OSDOVL_Mixer_b2_k4(data)                                                (0x0000003F&(data))
#define  OSDOVL_Mixer_b2_get_k1(data)                                            ((0x3F000000&(data))>>24)
#define  OSDOVL_Mixer_b2_get_k2(data)                                            ((0x003F0000&(data))>>16)
#define  OSDOVL_Mixer_b2_get_k3(data)                                            ((0x00003F00&(data))>>8)
#define  OSDOVL_Mixer_b2_get_k4(data)                                            (0x0000003F&(data))

#define  OSDOVL_Mixer_b3                                                        0x1802B06C
#define  OSDOVL_Mixer_b3_reg_addr                                                "0xB802B06C"
#define  OSDOVL_Mixer_b3_reg                                                     0xB802B06C
#define  OSDOVL_Mixer_b3_inst_addr                                               "0x001B"
#define  set_OSDOVL_Mixer_b3_reg(data)                                           (*((volatile unsigned int*)OSDOVL_Mixer_b3_reg)=data)
#define  get_OSDOVL_Mixer_b3_reg                                                 (*((volatile unsigned int*)OSDOVL_Mixer_b3_reg))
#define  OSDOVL_Mixer_b3_k1_shift                                                (24)
#define  OSDOVL_Mixer_b3_k2_shift                                                (16)
#define  OSDOVL_Mixer_b3_k3_shift                                                (8)
#define  OSDOVL_Mixer_b3_k4_shift                                                (0)
#define  OSDOVL_Mixer_b3_k1_mask                                                 (0x3F000000)
#define  OSDOVL_Mixer_b3_k2_mask                                                 (0x003F0000)
#define  OSDOVL_Mixer_b3_k3_mask                                                 (0x00003F00)
#define  OSDOVL_Mixer_b3_k4_mask                                                 (0x0000003F)
#define  OSDOVL_Mixer_b3_k1(data)                                                (0x3F000000&((data)<<24))
#define  OSDOVL_Mixer_b3_k2(data)                                                (0x003F0000&((data)<<16))
#define  OSDOVL_Mixer_b3_k3(data)                                                (0x00003F00&((data)<<8))
#define  OSDOVL_Mixer_b3_k4(data)                                                (0x0000003F&(data))
#define  OSDOVL_Mixer_b3_get_k1(data)                                            ((0x3F000000&(data))>>24)
#define  OSDOVL_Mixer_b3_get_k2(data)                                            ((0x003F0000&(data))>>16)
#define  OSDOVL_Mixer_b3_get_k3(data)                                            ((0x00003F00&(data))>>8)
#define  OSDOVL_Mixer_b3_get_k4(data)                                            (0x0000003F&(data))

#define  OSDOVL_Mixer_gamma1_port                                               0x1802B070
#define  OSDOVL_Mixer_gamma1_port_reg_addr                                       "0xB802B070"
#define  OSDOVL_Mixer_gamma1_port_reg                                            0xB802B070
#define  OSDOVL_Mixer_gamma1_port_inst_addr                                      "0x001C"
#define  set_OSDOVL_Mixer_gamma1_port_reg(data)                                  (*((volatile unsigned int*)OSDOVL_Mixer_gamma1_port_reg)=data)
#define  get_OSDOVL_Mixer_gamma1_port_reg                                        (*((volatile unsigned int*)OSDOVL_Mixer_gamma1_port_reg))
#define  OSDOVL_Mixer_gamma1_port_gamma1_tab_index_shift                         (16)
#define  OSDOVL_Mixer_gamma1_port_gamma1_tab_d0_shift                            (8)
#define  OSDOVL_Mixer_gamma1_port_gamma1_tab_d1_shift                            (0)
#define  OSDOVL_Mixer_gamma1_port_gamma1_tab_index_mask                          (0x0FFF0000)
#define  OSDOVL_Mixer_gamma1_port_gamma1_tab_d0_mask                             (0x00007F00)
#define  OSDOVL_Mixer_gamma1_port_gamma1_tab_d1_mask                             (0x0000007F)
#define  OSDOVL_Mixer_gamma1_port_gamma1_tab_index(data)                         (0x0FFF0000&((data)<<16))
#define  OSDOVL_Mixer_gamma1_port_gamma1_tab_d0(data)                            (0x00007F00&((data)<<8))
#define  OSDOVL_Mixer_gamma1_port_gamma1_tab_d1(data)                            (0x0000007F&(data))
#define  OSDOVL_Mixer_gamma1_port_get_gamma1_tab_index(data)                     ((0x0FFF0000&(data))>>16)
#define  OSDOVL_Mixer_gamma1_port_get_gamma1_tab_d0(data)                        ((0x00007F00&(data))>>8)
#define  OSDOVL_Mixer_gamma1_port_get_gamma1_tab_d1(data)                        (0x0000007F&(data))

#define  OSDOVL_Mixer_GAMMA1_CTRL_1                                             0x1802B074
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_reg_addr                                     "0xB802B074"
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_reg                                          0xB802B074
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_inst_addr                                    "0x001D"
#define  set_OSDOVL_Mixer_GAMMA1_CTRL_1_reg(data)                                (*((volatile unsigned int*)OSDOVL_Mixer_GAMMA1_CTRL_1_reg)=data)
#define  get_OSDOVL_Mixer_GAMMA1_CTRL_1_reg                                      (*((volatile unsigned int*)OSDOVL_Mixer_GAMMA1_CTRL_1_reg))
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_tab_addr_shift                        (16)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_ax_rw_sel_shift                       (8)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_ax_ch_sel_shift                       (5)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_fifo_empty_shift                      (4)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_fifo_full_shift                       (3)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_wr_error_shift                        (2)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_dummy_1_shift                                (1)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_tab_addr_mask                         (0x007F0000)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_ax_rw_sel_mask                        (0x00000300)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_ax_ch_sel_mask                        (0x00000060)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_fifo_empty_mask                       (0x00000010)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_fifo_full_mask                        (0x00000008)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_wr_error_mask                         (0x00000004)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_dummy_1_mask                                 (0x00000002)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_tab_addr(data)                        (0x007F0000&((data)<<16))
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_ax_rw_sel(data)                       (0x00000300&((data)<<8))
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_ax_ch_sel(data)                       (0x00000060&((data)<<5))
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_fifo_empty(data)                      (0x00000010&((data)<<4))
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_fifo_full(data)                       (0x00000008&((data)<<3))
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_gamma1_wr_error(data)                        (0x00000004&((data)<<2))
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_dummy_1(data)                                (0x00000002&((data)<<1))
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_get_gamma1_tab_addr(data)                    ((0x007F0000&(data))>>16)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_get_gamma1_ax_rw_sel(data)                   ((0x00000300&(data))>>8)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_get_gamma1_ax_ch_sel(data)                   ((0x00000060&(data))>>5)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_get_gamma1_fifo_empty(data)                  ((0x00000010&(data))>>4)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_get_gamma1_fifo_full(data)                   ((0x00000008&(data))>>3)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_get_gamma1_wr_error(data)                    ((0x00000004&(data))>>2)
#define  OSDOVL_Mixer_GAMMA1_CTRL_1_get_dummy_1(data)                            ((0x00000002&(data))>>1)

#define  OSDOVL_Mixer_gamma2_port                                               0x1802B078
#define  OSDOVL_Mixer_gamma2_port_reg_addr                                       "0xB802B078"
#define  OSDOVL_Mixer_gamma2_port_reg                                            0xB802B078
#define  OSDOVL_Mixer_gamma2_port_inst_addr                                      "0x001E"
#define  set_OSDOVL_Mixer_gamma2_port_reg(data)                                  (*((volatile unsigned int*)OSDOVL_Mixer_gamma2_port_reg)=data)
#define  get_OSDOVL_Mixer_gamma2_port_reg                                        (*((volatile unsigned int*)OSDOVL_Mixer_gamma2_port_reg))
#define  OSDOVL_Mixer_gamma2_port_gamma2_tab_index_shift                         (16)
#define  OSDOVL_Mixer_gamma2_port_gamma2_tab_d0_shift                            (8)
#define  OSDOVL_Mixer_gamma2_port_gamma2_tab_d1_shift                            (0)
#define  OSDOVL_Mixer_gamma2_port_gamma2_tab_index_mask                          (0x0FFF0000)
#define  OSDOVL_Mixer_gamma2_port_gamma2_tab_d0_mask                             (0x00007F00)
#define  OSDOVL_Mixer_gamma2_port_gamma2_tab_d1_mask                             (0x0000007F)
#define  OSDOVL_Mixer_gamma2_port_gamma2_tab_index(data)                         (0x0FFF0000&((data)<<16))
#define  OSDOVL_Mixer_gamma2_port_gamma2_tab_d0(data)                            (0x00007F00&((data)<<8))
#define  OSDOVL_Mixer_gamma2_port_gamma2_tab_d1(data)                            (0x0000007F&(data))
#define  OSDOVL_Mixer_gamma2_port_get_gamma2_tab_index(data)                     ((0x0FFF0000&(data))>>16)
#define  OSDOVL_Mixer_gamma2_port_get_gamma2_tab_d0(data)                        ((0x00007F00&(data))>>8)
#define  OSDOVL_Mixer_gamma2_port_get_gamma2_tab_d1(data)                        (0x0000007F&(data))

#define  OSDOVL_Mixer_GAMMA2_CTRL_1                                             0x1802B07C
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_reg_addr                                     "0xB802B07C"
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_reg                                          0xB802B07C
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_inst_addr                                    "0x001F"
#define  set_OSDOVL_Mixer_GAMMA2_CTRL_1_reg(data)                                (*((volatile unsigned int*)OSDOVL_Mixer_GAMMA2_CTRL_1_reg)=data)
#define  get_OSDOVL_Mixer_GAMMA2_CTRL_1_reg                                      (*((volatile unsigned int*)OSDOVL_Mixer_GAMMA2_CTRL_1_reg))
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_tab_addr_shift                        (16)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_ax_rw_sel_shift                       (8)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_ax_ch_sel_shift                       (5)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_fifo_empty_shift                      (4)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_fifo_full_shift                       (3)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_wr_error_shift                        (2)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_dummy_1_shift                                (1)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_tab_addr_mask                         (0x007F0000)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_ax_rw_sel_mask                        (0x00000300)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_ax_ch_sel_mask                        (0x00000060)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_fifo_empty_mask                       (0x00000010)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_fifo_full_mask                        (0x00000008)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_wr_error_mask                         (0x00000004)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_dummy_1_mask                                 (0x00000002)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_tab_addr(data)                        (0x007F0000&((data)<<16))
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_ax_rw_sel(data)                       (0x00000300&((data)<<8))
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_ax_ch_sel(data)                       (0x00000060&((data)<<5))
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_fifo_empty(data)                      (0x00000010&((data)<<4))
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_fifo_full(data)                       (0x00000008&((data)<<3))
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_gamma2_wr_error(data)                        (0x00000004&((data)<<2))
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_dummy_1(data)                                (0x00000002&((data)<<1))
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_get_gamma2_tab_addr(data)                    ((0x007F0000&(data))>>16)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_get_gamma2_ax_rw_sel(data)                   ((0x00000300&(data))>>8)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_get_gamma2_ax_ch_sel(data)                   ((0x00000060&(data))>>5)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_get_gamma2_fifo_empty(data)                  ((0x00000010&(data))>>4)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_get_gamma2_fifo_full(data)                   ((0x00000008&(data))>>3)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_get_gamma2_wr_error(data)                    ((0x00000004&(data))>>2)
#define  OSDOVL_Mixer_GAMMA2_CTRL_1_get_dummy_1(data)                            ((0x00000002&(data))>>1)

#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1                                         0x1802B080
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_reg_addr                                 "0xB802B080"
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_reg                                      0xB802B080
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_inst_addr                                "0x0020"
#define  set_OSDOVL_Mixer_GAMMA_BIST_CTRL_1_reg(data)                            (*((volatile unsigned int*)OSDOVL_Mixer_GAMMA_BIST_CTRL_1_reg)=data)
#define  get_OSDOVL_Mixer_GAMMA_BIST_CTRL_1_reg                                  (*((volatile unsigned int*)OSDOVL_Mixer_GAMMA_BIST_CTRL_1_reg))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma2_test1_shift                       (13)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma1_test1_shift                       (12)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma2_ls_shift                          (11)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma1_ls_shift                          (10)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma2_rme_shift                         (9)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma1_rme_shift                         (8)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma2_rm_shift                          (4)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma1_rm_shift                          (0)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma2_test1_mask                        (0x00002000)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma1_test1_mask                        (0x00001000)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma2_ls_mask                           (0x00000800)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma1_ls_mask                           (0x00000400)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma2_rme_mask                          (0x00000200)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma1_rme_mask                          (0x00000100)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma2_rm_mask                           (0x000000F0)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma1_rm_mask                           (0x0000000F)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma2_test1(data)                       (0x00002000&((data)<<13))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma1_test1(data)                       (0x00001000&((data)<<12))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma2_ls(data)                          (0x00000800&((data)<<11))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma1_ls(data)                          (0x00000400&((data)<<10))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma2_rme(data)                         (0x00000200&((data)<<9))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma1_rme(data)                         (0x00000100&((data)<<8))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma2_rm(data)                          (0x000000F0&((data)<<4))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_gamma1_rm(data)                          (0x0000000F&(data))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_get_gamma2_test1(data)                   ((0x00002000&(data))>>13)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_get_gamma1_test1(data)                   ((0x00001000&(data))>>12)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_get_gamma2_ls(data)                      ((0x00000800&(data))>>11)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_get_gamma1_ls(data)                      ((0x00000400&(data))>>10)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_get_gamma2_rme(data)                     ((0x00000200&(data))>>9)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_get_gamma1_rme(data)                     ((0x00000100&(data))>>8)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_get_gamma2_rm(data)                      ((0x000000F0&(data))>>4)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_1_get_gamma1_rm(data)                      (0x0000000F&(data))

#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2                                         0x1802B084
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_reg_addr                                 "0xB802B084"
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_reg                                      0xB802B084
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_inst_addr                                "0x0021"
#define  set_OSDOVL_Mixer_GAMMA_BIST_CTRL_2_reg(data)                            (*((volatile unsigned int*)OSDOVL_Mixer_GAMMA_BIST_CTRL_2_reg)=data)
#define  get_OSDOVL_Mixer_GAMMA_BIST_CTRL_2_reg                                  (*((volatile unsigned int*)OSDOVL_Mixer_GAMMA_BIST_CTRL_2_reg))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_r_drf_bist_fail_shift             (14)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_g_drf_bist_fail_shift             (13)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_b_drf_bist_fail_shift             (12)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_r_drf_bist_fail_shift             (10)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_g_drf_bist_fail_shift             (9)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_b_drf_bist_fail_shift             (8)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_r_bist_fail_shift                 (6)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_g_bist_fail_shift                 (5)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_b_bist_fail_shift                 (4)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_r_bist_fail_shift                 (2)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_g_bist_fail_shift                 (1)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_b_bist_fail_shift                 (0)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_r_drf_bist_fail_mask              (0x00004000)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_g_drf_bist_fail_mask              (0x00002000)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_b_drf_bist_fail_mask              (0x00001000)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_r_drf_bist_fail_mask              (0x00000400)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_g_drf_bist_fail_mask              (0x00000200)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_b_drf_bist_fail_mask              (0x00000100)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_r_bist_fail_mask                  (0x00000040)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_g_bist_fail_mask                  (0x00000020)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_b_bist_fail_mask                  (0x00000010)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_r_bist_fail_mask                  (0x00000004)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_g_bist_fail_mask                  (0x00000002)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_b_bist_fail_mask                  (0x00000001)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_r_drf_bist_fail(data)             (0x00004000&((data)<<14))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_g_drf_bist_fail(data)             (0x00002000&((data)<<13))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_b_drf_bist_fail(data)             (0x00001000&((data)<<12))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_r_drf_bist_fail(data)             (0x00000400&((data)<<10))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_g_drf_bist_fail(data)             (0x00000200&((data)<<9))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_b_drf_bist_fail(data)             (0x00000100&((data)<<8))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_r_bist_fail(data)                 (0x00000040&((data)<<6))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_g_bist_fail(data)                 (0x00000020&((data)<<5))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma2_b_bist_fail(data)                 (0x00000010&((data)<<4))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_r_bist_fail(data)                 (0x00000004&((data)<<2))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_g_bist_fail(data)                 (0x00000002&((data)<<1))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_gamma1_b_bist_fail(data)                 (0x00000001&(data))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_get_gamma2_r_drf_bist_fail(data)         ((0x00004000&(data))>>14)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_get_gamma2_g_drf_bist_fail(data)         ((0x00002000&(data))>>13)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_get_gamma2_b_drf_bist_fail(data)         ((0x00001000&(data))>>12)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_get_gamma1_r_drf_bist_fail(data)         ((0x00000400&(data))>>10)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_get_gamma1_g_drf_bist_fail(data)         ((0x00000200&(data))>>9)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_get_gamma1_b_drf_bist_fail(data)         ((0x00000100&(data))>>8)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_get_gamma2_r_bist_fail(data)             ((0x00000040&(data))>>6)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_get_gamma2_g_bist_fail(data)             ((0x00000020&(data))>>5)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_get_gamma2_b_bist_fail(data)             ((0x00000010&(data))>>4)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_get_gamma1_r_bist_fail(data)             ((0x00000004&(data))>>2)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_get_gamma1_g_bist_fail(data)             ((0x00000002&(data))>>1)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_2_get_gamma1_b_bist_fail(data)             (0x00000001&(data))

#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3                                         0x1802B088
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_reg_addr                                 "0xB802B088"
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_reg                                      0xB802B088
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_inst_addr                                "0x0022"
#define  set_OSDOVL_Mixer_GAMMA_BIST_CTRL_3_reg(data)                            (*((volatile unsigned int*)OSDOVL_Mixer_GAMMA_BIST_CTRL_3_reg)=data)
#define  get_OSDOVL_Mixer_GAMMA_BIST_CTRL_3_reg                                  (*((volatile unsigned int*)OSDOVL_Mixer_GAMMA_BIST_CTRL_3_reg))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_r1_drf_bist_fail_shift            (14)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_g1_drf_bist_fail_shift            (13)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_b1_drf_bist_fail_shift            (12)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_r1_drf_bist_fail_shift            (10)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_g1_drf_bist_fail_shift            (9)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_b1_drf_bist_fail_shift            (8)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_r1_bist_fail_shift                (6)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_g1_bist_fail_shift                (5)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_b1_bist_fail_shift                (4)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_r1_bist_fail_shift                (2)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_g1_bist_fail_shift                (1)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_b1_bist_fail_shift                (0)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_r1_drf_bist_fail_mask             (0x00004000)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_g1_drf_bist_fail_mask             (0x00002000)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_b1_drf_bist_fail_mask             (0x00001000)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_r1_drf_bist_fail_mask             (0x00000400)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_g1_drf_bist_fail_mask             (0x00000200)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_b1_drf_bist_fail_mask             (0x00000100)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_r1_bist_fail_mask                 (0x00000040)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_g1_bist_fail_mask                 (0x00000020)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_b1_bist_fail_mask                 (0x00000010)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_r1_bist_fail_mask                 (0x00000004)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_g1_bist_fail_mask                 (0x00000002)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_b1_bist_fail_mask                 (0x00000001)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_r1_drf_bist_fail(data)            (0x00004000&((data)<<14))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_g1_drf_bist_fail(data)            (0x00002000&((data)<<13))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_b1_drf_bist_fail(data)            (0x00001000&((data)<<12))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_r1_drf_bist_fail(data)            (0x00000400&((data)<<10))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_g1_drf_bist_fail(data)            (0x00000200&((data)<<9))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_b1_drf_bist_fail(data)            (0x00000100&((data)<<8))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_r1_bist_fail(data)                (0x00000040&((data)<<6))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_g1_bist_fail(data)                (0x00000020&((data)<<5))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma2_b1_bist_fail(data)                (0x00000010&((data)<<4))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_r1_bist_fail(data)                (0x00000004&((data)<<2))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_g1_bist_fail(data)                (0x00000002&((data)<<1))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_gamma1_b1_bist_fail(data)                (0x00000001&(data))
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_get_gamma2_r1_drf_bist_fail(data)        ((0x00004000&(data))>>14)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_get_gamma2_g1_drf_bist_fail(data)        ((0x00002000&(data))>>13)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_get_gamma2_b1_drf_bist_fail(data)        ((0x00001000&(data))>>12)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_get_gamma1_r1_drf_bist_fail(data)        ((0x00000400&(data))>>10)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_get_gamma1_g1_drf_bist_fail(data)        ((0x00000200&(data))>>9)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_get_gamma1_b1_drf_bist_fail(data)        ((0x00000100&(data))>>8)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_get_gamma2_r1_bist_fail(data)            ((0x00000040&(data))>>6)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_get_gamma2_g1_bist_fail(data)            ((0x00000020&(data))>>5)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_get_gamma2_b1_bist_fail(data)            ((0x00000010&(data))>>4)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_get_gamma1_r1_bist_fail(data)            ((0x00000004&(data))>>2)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_get_gamma1_g1_bist_fail(data)            ((0x00000002&(data))>>1)
#define  OSDOVL_Mixer_GAMMA_BIST_CTRL_3_get_gamma1_b1_bist_fail(data)            (0x00000001&(data))

#define  OSDOVL_Mixer_osd_split_empty_pixel                                     0x1802B08C
#define  OSDOVL_Mixer_osd_split_empty_pixel_reg_addr                             "0xB802B08C"
#define  OSDOVL_Mixer_osd_split_empty_pixel_reg                                  0xB802B08C
#define  OSDOVL_Mixer_osd_split_empty_pixel_inst_addr                            "0x0023"
#define  set_OSDOVL_Mixer_osd_split_empty_pixel_reg(data)                        (*((volatile unsigned int*)OSDOVL_Mixer_osd_split_empty_pixel_reg)=data)
#define  get_OSDOVL_Mixer_osd_split_empty_pixel_reg                              (*((volatile unsigned int*)OSDOVL_Mixer_osd_split_empty_pixel_reg))
#define  OSDOVL_Mixer_osd_split_empty_pixel_data_empty_a_shift                   (24)
#define  OSDOVL_Mixer_osd_split_empty_pixel_data_empty_r_shift                   (16)
#define  OSDOVL_Mixer_osd_split_empty_pixel_data_empty_g_shift                   (8)
#define  OSDOVL_Mixer_osd_split_empty_pixel_data_empty_b_shift                   (0)
#define  OSDOVL_Mixer_osd_split_empty_pixel_data_empty_a_mask                    (0xFF000000)
#define  OSDOVL_Mixer_osd_split_empty_pixel_data_empty_r_mask                    (0x00FF0000)
#define  OSDOVL_Mixer_osd_split_empty_pixel_data_empty_g_mask                    (0x0000FF00)
#define  OSDOVL_Mixer_osd_split_empty_pixel_data_empty_b_mask                    (0x000000FF)
#define  OSDOVL_Mixer_osd_split_empty_pixel_data_empty_a(data)                   (0xFF000000&((data)<<24))
#define  OSDOVL_Mixer_osd_split_empty_pixel_data_empty_r(data)                   (0x00FF0000&((data)<<16))
#define  OSDOVL_Mixer_osd_split_empty_pixel_data_empty_g(data)                   (0x0000FF00&((data)<<8))
#define  OSDOVL_Mixer_osd_split_empty_pixel_data_empty_b(data)                   (0x000000FF&(data))
#define  OSDOVL_Mixer_osd_split_empty_pixel_get_data_empty_a(data)               ((0xFF000000&(data))>>24)
#define  OSDOVL_Mixer_osd_split_empty_pixel_get_data_empty_r(data)               ((0x00FF0000&(data))>>16)
#define  OSDOVL_Mixer_osd_split_empty_pixel_get_data_empty_g(data)               ((0x0000FF00&(data))>>8)
#define  OSDOVL_Mixer_osd_split_empty_pixel_get_data_empty_b(data)               (0x000000FF&(data))

#define  OSDOVL_Mixer_CRC_Ctrl                                                  0x1802B090
#define  OSDOVL_Mixer_CRC_Ctrl_reg_addr                                          "0xB802B090"
#define  OSDOVL_Mixer_CRC_Ctrl_reg                                               0xB802B090
#define  OSDOVL_Mixer_CRC_Ctrl_inst_addr                                         "0x0024"
#define  set_OSDOVL_Mixer_CRC_Ctrl_reg(data)                                     (*((volatile unsigned int*)OSDOVL_Mixer_CRC_Ctrl_reg)=data)
#define  get_OSDOVL_Mixer_CRC_Ctrl_reg                                           (*((volatile unsigned int*)OSDOVL_Mixer_CRC_Ctrl_reg))
#define  OSDOVL_Mixer_CRC_Ctrl_mixer_crc_sel_shift                               (8)
#define  OSDOVL_Mixer_CRC_Ctrl_crc_res_sel_shift                                 (4)
#define  OSDOVL_Mixer_CRC_Ctrl_crc_auto_cmp_en_shift                             (2)
#define  OSDOVL_Mixer_CRC_Ctrl_crc_conti_shift                                   (1)
#define  OSDOVL_Mixer_CRC_Ctrl_crc_start_shift                                   (0)
#define  OSDOVL_Mixer_CRC_Ctrl_mixer_crc_sel_mask                                (0x00000700)
#define  OSDOVL_Mixer_CRC_Ctrl_crc_res_sel_mask                                  (0x00000070)
#define  OSDOVL_Mixer_CRC_Ctrl_crc_auto_cmp_en_mask                              (0x00000004)
#define  OSDOVL_Mixer_CRC_Ctrl_crc_conti_mask                                    (0x00000002)
#define  OSDOVL_Mixer_CRC_Ctrl_crc_start_mask                                    (0x00000001)
#define  OSDOVL_Mixer_CRC_Ctrl_mixer_crc_sel(data)                               (0x00000700&((data)<<8))
#define  OSDOVL_Mixer_CRC_Ctrl_crc_res_sel(data)                                 (0x00000070&((data)<<4))
#define  OSDOVL_Mixer_CRC_Ctrl_crc_auto_cmp_en(data)                             (0x00000004&((data)<<2))
#define  OSDOVL_Mixer_CRC_Ctrl_crc_conti(data)                                   (0x00000002&((data)<<1))
#define  OSDOVL_Mixer_CRC_Ctrl_crc_start(data)                                   (0x00000001&(data))
#define  OSDOVL_Mixer_CRC_Ctrl_get_mixer_crc_sel(data)                           ((0x00000700&(data))>>8)
#define  OSDOVL_Mixer_CRC_Ctrl_get_crc_res_sel(data)                             ((0x00000070&(data))>>4)
#define  OSDOVL_Mixer_CRC_Ctrl_get_crc_auto_cmp_en(data)                         ((0x00000004&(data))>>2)
#define  OSDOVL_Mixer_CRC_Ctrl_get_crc_conti(data)                               ((0x00000002&(data))>>1)
#define  OSDOVL_Mixer_CRC_Ctrl_get_crc_start(data)                               (0x00000001&(data))

#define  OSDOVL_Mixer_CRC_Result                                                0x1802B094
#define  OSDOVL_Mixer_CRC_Result_reg_addr                                        "0xB802B094"
#define  OSDOVL_Mixer_CRC_Result_reg                                             0xB802B094
#define  OSDOVL_Mixer_CRC_Result_inst_addr                                       "0x0025"
#define  set_OSDOVL_Mixer_CRC_Result_reg(data)                                   (*((volatile unsigned int*)OSDOVL_Mixer_CRC_Result_reg)=data)
#define  get_OSDOVL_Mixer_CRC_Result_reg                                         (*((volatile unsigned int*)OSDOVL_Mixer_CRC_Result_reg))
#define  OSDOVL_Mixer_CRC_Result_mixer_crc_result_shift                          (0)
#define  OSDOVL_Mixer_CRC_Result_mixer_crc_result_mask                           (0xFFFFFFFF)
#define  OSDOVL_Mixer_CRC_Result_mixer_crc_result(data)                          (0xFFFFFFFF&(data))
#define  OSDOVL_Mixer_CRC_Result_get_mixer_crc_result(data)                      (0xFFFFFFFF&(data))

#define  OSDOVL_Mixer_DES_CRC                                                   0x1802B098
#define  OSDOVL_Mixer_DES_CRC_reg_addr                                           "0xB802B098"
#define  OSDOVL_Mixer_DES_CRC_reg                                                0xB802B098
#define  OSDOVL_Mixer_DES_CRC_inst_addr                                          "0x0026"
#define  set_OSDOVL_Mixer_DES_CRC_reg(data)                                      (*((volatile unsigned int*)OSDOVL_Mixer_DES_CRC_reg)=data)
#define  get_OSDOVL_Mixer_DES_CRC_reg                                            (*((volatile unsigned int*)OSDOVL_Mixer_DES_CRC_reg))
#define  OSDOVL_Mixer_DES_CRC_mixer_crc_des_shift                                (0)
#define  OSDOVL_Mixer_DES_CRC_mixer_crc_des_mask                                 (0xFFFFFFFF)
#define  OSDOVL_Mixer_DES_CRC_mixer_crc_des(data)                                (0xFFFFFFFF&(data))
#define  OSDOVL_Mixer_DES_CRC_get_mixer_crc_des(data)                            (0xFFFFFFFF&(data))

#define  OSDOVL_Mixer_CRC_ERR_CNT                                               0x1802B09C
#define  OSDOVL_Mixer_CRC_ERR_CNT_reg_addr                                       "0xB802B09C"
#define  OSDOVL_Mixer_CRC_ERR_CNT_reg                                            0xB802B09C
#define  OSDOVL_Mixer_CRC_ERR_CNT_inst_addr                                      "0x0027"
#define  set_OSDOVL_Mixer_CRC_ERR_CNT_reg(data)                                  (*((volatile unsigned int*)OSDOVL_Mixer_CRC_ERR_CNT_reg)=data)
#define  get_OSDOVL_Mixer_CRC_ERR_CNT_reg                                        (*((volatile unsigned int*)OSDOVL_Mixer_CRC_ERR_CNT_reg))
#define  OSDOVL_Mixer_CRC_ERR_CNT_mixer_crc_err_cnt_shift                        (0)
#define  OSDOVL_Mixer_CRC_ERR_CNT_mixer_crc_err_cnt_mask                         (0x0000FFFF)
#define  OSDOVL_Mixer_CRC_ERR_CNT_mixer_crc_err_cnt(data)                        (0x0000FFFF&(data))
#define  OSDOVL_Mixer_CRC_ERR_CNT_get_mixer_crc_err_cnt(data)                    (0x0000FFFF&(data))

#define  OSDOVL_OSD_Db_Ctrl                                                     0x1802B0A0
#define  OSDOVL_OSD_Db_Ctrl_reg_addr                                             "0xB802B0A0"
#define  OSDOVL_OSD_Db_Ctrl_reg                                                  0xB802B0A0
#define  OSDOVL_OSD_Db_Ctrl_inst_addr                                            "0x0028"
#define  set_OSDOVL_OSD_Db_Ctrl_reg(data)                                        (*((volatile unsigned int*)OSDOVL_OSD_Db_Ctrl_reg)=data)
#define  get_OSDOVL_OSD_Db_Ctrl_reg                                              (*((volatile unsigned int*)OSDOVL_OSD_Db_Ctrl_reg))
#define  OSDOVL_OSD_Db_Ctrl_db_read_shift                                        (2)
#define  OSDOVL_OSD_Db_Ctrl_db_en_shift                                          (1)
#define  OSDOVL_OSD_Db_Ctrl_db_load_shift                                        (0)
#define  OSDOVL_OSD_Db_Ctrl_db_read_mask                                         (0x00000004)
#define  OSDOVL_OSD_Db_Ctrl_db_en_mask                                           (0x00000002)
#define  OSDOVL_OSD_Db_Ctrl_db_load_mask                                         (0x00000001)
#define  OSDOVL_OSD_Db_Ctrl_db_read(data)                                        (0x00000004&((data)<<2))
#define  OSDOVL_OSD_Db_Ctrl_db_en(data)                                          (0x00000002&((data)<<1))
#define  OSDOVL_OSD_Db_Ctrl_db_load(data)                                        (0x00000001&(data))
#define  OSDOVL_OSD_Db_Ctrl_get_db_read(data)                                    ((0x00000004&(data))>>2)
#define  OSDOVL_OSD_Db_Ctrl_get_db_en(data)                                      ((0x00000002&(data))>>1)
#define  OSDOVL_OSD_Db_Ctrl_get_db_load(data)                                    (0x00000001&(data))

#define  OSDOVL_Mixer_osd_split_db_ctrl                                         0x1802B0A4
#define  OSDOVL_Mixer_osd_split_db_ctrl_reg_addr                                 "0xB802B0A4"
#define  OSDOVL_Mixer_osd_split_db_ctrl_reg                                      0xB802B0A4
#define  OSDOVL_Mixer_osd_split_db_ctrl_inst_addr                                "0x0029"
#define  set_OSDOVL_Mixer_osd_split_db_ctrl_reg(data)                            (*((volatile unsigned int*)OSDOVL_Mixer_osd_split_db_ctrl_reg)=data)
#define  get_OSDOVL_Mixer_osd_split_db_ctrl_reg                                  (*((volatile unsigned int*)OSDOVL_Mixer_osd_split_db_ctrl_reg))
#define  OSDOVL_Mixer_osd_split_db_ctrl_db_read_shift                            (2)
#define  OSDOVL_Mixer_osd_split_db_ctrl_db_en_shift                              (1)
#define  OSDOVL_Mixer_osd_split_db_ctrl_db_load_shift                            (0)
#define  OSDOVL_Mixer_osd_split_db_ctrl_db_read_mask                             (0x00000004)
#define  OSDOVL_Mixer_osd_split_db_ctrl_db_en_mask                               (0x00000002)
#define  OSDOVL_Mixer_osd_split_db_ctrl_db_load_mask                             (0x00000001)
#define  OSDOVL_Mixer_osd_split_db_ctrl_db_read(data)                            (0x00000004&((data)<<2))
#define  OSDOVL_Mixer_osd_split_db_ctrl_db_en(data)                              (0x00000002&((data)<<1))
#define  OSDOVL_Mixer_osd_split_db_ctrl_db_load(data)                            (0x00000001&(data))
#define  OSDOVL_Mixer_osd_split_db_ctrl_get_db_read(data)                        ((0x00000004&(data))>>2)
#define  OSDOVL_Mixer_osd_split_db_ctrl_get_db_en(data)                          ((0x00000002&(data))>>1)
#define  OSDOVL_Mixer_osd_split_db_ctrl_get_db_load(data)                        (0x00000001&(data))

#define  OSDOVL_Mixer_setting_error                                             0x1802B0AC
#define  OSDOVL_Mixer_setting_error_reg_addr                                     "0xB802B0AC"
#define  OSDOVL_Mixer_setting_error_reg                                          0xB802B0AC
#define  OSDOVL_Mixer_setting_error_inst_addr                                    "0x002A"
#define  set_OSDOVL_Mixer_setting_error_reg(data)                                (*((volatile unsigned int*)OSDOVL_Mixer_setting_error_reg)=data)
#define  get_OSDOVL_Mixer_setting_error_reg                                      (*((volatile unsigned int*)OSDOVL_Mixer_setting_error_reg))
#define  OSDOVL_Mixer_setting_error_one_layer_setting_conflict_shift             (14)
#define  OSDOVL_Mixer_setting_error_c3_src_conflict_shift                        (11)
#define  OSDOVL_Mixer_setting_error_c2_src_conflict_shift                        (10)
#define  OSDOVL_Mixer_setting_error_c1_src_conflict_shift                        (9)
#define  OSDOVL_Mixer_setting_error_c0_src_conflict_shift                        (8)
#define  OSDOVL_Mixer_setting_error_one_layer_setting_conflict_mask              (0x00004000)
#define  OSDOVL_Mixer_setting_error_c3_src_conflict_mask                         (0x00000800)
#define  OSDOVL_Mixer_setting_error_c2_src_conflict_mask                         (0x00000400)
#define  OSDOVL_Mixer_setting_error_c1_src_conflict_mask                         (0x00000200)
#define  OSDOVL_Mixer_setting_error_c0_src_conflict_mask                         (0x00000100)
#define  OSDOVL_Mixer_setting_error_one_layer_setting_conflict(data)             (0x00004000&((data)<<14))
#define  OSDOVL_Mixer_setting_error_c3_src_conflict(data)                        (0x00000800&((data)<<11))
#define  OSDOVL_Mixer_setting_error_c2_src_conflict(data)                        (0x00000400&((data)<<10))
#define  OSDOVL_Mixer_setting_error_c1_src_conflict(data)                        (0x00000200&((data)<<9))
#define  OSDOVL_Mixer_setting_error_c0_src_conflict(data)                        (0x00000100&((data)<<8))
#define  OSDOVL_Mixer_setting_error_get_one_layer_setting_conflict(data)         ((0x00004000&(data))>>14)
#define  OSDOVL_Mixer_setting_error_get_c3_src_conflict(data)                    ((0x00000800&(data))>>11)
#define  OSDOVL_Mixer_setting_error_get_c2_src_conflict(data)                    ((0x00000400&(data))>>10)
#define  OSDOVL_Mixer_setting_error_get_c1_src_conflict(data)                    ((0x00000200&(data))>>9)
#define  OSDOVL_Mixer_setting_error_get_c0_src_conflict(data)                    ((0x00000100&(data))>>8)

#define  OSDOVL_alpha_osd_detect_0_ro                                           0x1802B0B0
#define  OSDOVL_alpha_osd_detect_0_ro_reg_addr                                   "0xB802B0B0"
#define  OSDOVL_alpha_osd_detect_0_ro_reg                                        0xB802B0B0
#define  OSDOVL_alpha_osd_detect_0_ro_inst_addr                                  "0x002B"
#define  set_OSDOVL_alpha_osd_detect_0_ro_reg(data)                              (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_0_ro_reg)=data)
#define  get_OSDOVL_alpha_osd_detect_0_ro_reg                                    (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_0_ro_reg))
#define  OSDOVL_alpha_osd_detect_0_ro_thd_cnt_shift                              (0)
#define  OSDOVL_alpha_osd_detect_0_ro_thd_cnt_mask                               (0x00FFFFFF)
#define  OSDOVL_alpha_osd_detect_0_ro_thd_cnt(data)                              (0x00FFFFFF&(data))
#define  OSDOVL_alpha_osd_detect_0_ro_get_thd_cnt(data)                          (0x00FFFFFF&(data))

#define  OSDOVL_alpha_osd_detect_1_ro                                           0x1802B0B4
#define  OSDOVL_alpha_osd_detect_1_ro_reg_addr                                   "0xB802B0B4"
#define  OSDOVL_alpha_osd_detect_1_ro_reg                                        0xB802B0B4
#define  OSDOVL_alpha_osd_detect_1_ro_inst_addr                                  "0x002C"
#define  set_OSDOVL_alpha_osd_detect_1_ro_reg(data)                              (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_1_ro_reg)=data)
#define  get_OSDOVL_alpha_osd_detect_1_ro_reg                                    (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_1_ro_reg))
#define  OSDOVL_alpha_osd_detect_1_ro_thd_cnt_shift                              (0)
#define  OSDOVL_alpha_osd_detect_1_ro_thd_cnt_mask                               (0x00FFFFFF)
#define  OSDOVL_alpha_osd_detect_1_ro_thd_cnt(data)                              (0x00FFFFFF&(data))
#define  OSDOVL_alpha_osd_detect_1_ro_get_thd_cnt(data)                          (0x00FFFFFF&(data))

#define  OSDOVL_alpha_osd_detect_2_ro                                           0x1802B0B8
#define  OSDOVL_alpha_osd_detect_2_ro_reg_addr                                   "0xB802B0B8"
#define  OSDOVL_alpha_osd_detect_2_ro_reg                                        0xB802B0B8
#define  OSDOVL_alpha_osd_detect_2_ro_inst_addr                                  "0x002D"
#define  set_OSDOVL_alpha_osd_detect_2_ro_reg(data)                              (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_2_ro_reg)=data)
#define  get_OSDOVL_alpha_osd_detect_2_ro_reg                                    (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_2_ro_reg))
#define  OSDOVL_alpha_osd_detect_2_ro_thd_cnt_shift                              (0)
#define  OSDOVL_alpha_osd_detect_2_ro_thd_cnt_mask                               (0x00FFFFFF)
#define  OSDOVL_alpha_osd_detect_2_ro_thd_cnt(data)                              (0x00FFFFFF&(data))
#define  OSDOVL_alpha_osd_detect_2_ro_get_thd_cnt(data)                          (0x00FFFFFF&(data))

#define  OSDOVL_alpha_osd_detect_3_ro                                           0x1802B0BC
#define  OSDOVL_alpha_osd_detect_3_ro_reg_addr                                   "0xB802B0BC"
#define  OSDOVL_alpha_osd_detect_3_ro_reg                                        0xB802B0BC
#define  OSDOVL_alpha_osd_detect_3_ro_inst_addr                                  "0x002E"
#define  set_OSDOVL_alpha_osd_detect_3_ro_reg(data)                              (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_3_ro_reg)=data)
#define  get_OSDOVL_alpha_osd_detect_3_ro_reg                                    (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_3_ro_reg))
#define  OSDOVL_alpha_osd_detect_3_ro_thd_cnt_shift                              (0)
#define  OSDOVL_alpha_osd_detect_3_ro_thd_cnt_mask                               (0x00FFFFFF)
#define  OSDOVL_alpha_osd_detect_3_ro_thd_cnt(data)                              (0x00FFFFFF&(data))
#define  OSDOVL_alpha_osd_detect_3_ro_get_thd_cnt(data)                          (0x00FFFFFF&(data))

#define  OSDOVL_alpha_osd_detect_4_ro                                           0x1802B0C0
#define  OSDOVL_alpha_osd_detect_4_ro_reg_addr                                   "0xB802B0C0"
#define  OSDOVL_alpha_osd_detect_4_ro_reg                                        0xB802B0C0
#define  OSDOVL_alpha_osd_detect_4_ro_inst_addr                                  "0x002F"
#define  set_OSDOVL_alpha_osd_detect_4_ro_reg(data)                              (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_4_ro_reg)=data)
#define  get_OSDOVL_alpha_osd_detect_4_ro_reg                                    (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_4_ro_reg))
#define  OSDOVL_alpha_osd_detect_4_ro_thd_cnt_shift                              (0)
#define  OSDOVL_alpha_osd_detect_4_ro_thd_cnt_mask                               (0x00FFFFFF)
#define  OSDOVL_alpha_osd_detect_4_ro_thd_cnt(data)                              (0x00FFFFFF&(data))
#define  OSDOVL_alpha_osd_detect_4_ro_get_thd_cnt(data)                          (0x00FFFFFF&(data))

#define  OSDOVL_alpha_osd_detect_5_ro                                           0x1802B0C4
#define  OSDOVL_alpha_osd_detect_5_ro_reg_addr                                   "0xB802B0C4"
#define  OSDOVL_alpha_osd_detect_5_ro_reg                                        0xB802B0C4
#define  OSDOVL_alpha_osd_detect_5_ro_inst_addr                                  "0x0030"
#define  set_OSDOVL_alpha_osd_detect_5_ro_reg(data)                              (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_5_ro_reg)=data)
#define  get_OSDOVL_alpha_osd_detect_5_ro_reg                                    (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_5_ro_reg))
#define  OSDOVL_alpha_osd_detect_5_ro_thd_cnt_shift                              (0)
#define  OSDOVL_alpha_osd_detect_5_ro_thd_cnt_mask                               (0x00FFFFFF)
#define  OSDOVL_alpha_osd_detect_5_ro_thd_cnt(data)                              (0x00FFFFFF&(data))
#define  OSDOVL_alpha_osd_detect_5_ro_get_thd_cnt(data)                          (0x00FFFFFF&(data))

#define  OSDOVL_alpha_osd_detect_6_ro                                           0x1802B0C8
#define  OSDOVL_alpha_osd_detect_6_ro_reg_addr                                   "0xB802B0C8"
#define  OSDOVL_alpha_osd_detect_6_ro_reg                                        0xB802B0C8
#define  OSDOVL_alpha_osd_detect_6_ro_inst_addr                                  "0x0031"
#define  set_OSDOVL_alpha_osd_detect_6_ro_reg(data)                              (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_6_ro_reg)=data)
#define  get_OSDOVL_alpha_osd_detect_6_ro_reg                                    (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_6_ro_reg))
#define  OSDOVL_alpha_osd_detect_6_ro_thd_cnt_shift                              (0)
#define  OSDOVL_alpha_osd_detect_6_ro_thd_cnt_mask                               (0x00FFFFFF)
#define  OSDOVL_alpha_osd_detect_6_ro_thd_cnt(data)                              (0x00FFFFFF&(data))
#define  OSDOVL_alpha_osd_detect_6_ro_get_thd_cnt(data)                          (0x00FFFFFF&(data))

#define  OSDOVL_alpha_osd_detect_7_ro                                           0x1802B0CC
#define  OSDOVL_alpha_osd_detect_7_ro_reg_addr                                   "0xB802B0CC"
#define  OSDOVL_alpha_osd_detect_7_ro_reg                                        0xB802B0CC
#define  OSDOVL_alpha_osd_detect_7_ro_inst_addr                                  "0x0032"
#define  set_OSDOVL_alpha_osd_detect_7_ro_reg(data)                              (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_7_ro_reg)=data)
#define  get_OSDOVL_alpha_osd_detect_7_ro_reg                                    (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_7_ro_reg))
#define  OSDOVL_alpha_osd_detect_7_ro_thd_cnt_shift                              (0)
#define  OSDOVL_alpha_osd_detect_7_ro_thd_cnt_mask                               (0x00FFFFFF)
#define  OSDOVL_alpha_osd_detect_7_ro_thd_cnt(data)                              (0x00FFFFFF&(data))
#define  OSDOVL_alpha_osd_detect_7_ro_get_thd_cnt(data)                          (0x00FFFFFF&(data))

#define  OSDOVL_measure_osd1_sta                                                0x1802B0D0
#define  OSDOVL_measure_osd1_sta_reg_addr                                        "0xB802B0D0"
#define  OSDOVL_measure_osd1_sta_reg                                             0xB802B0D0
#define  OSDOVL_measure_osd1_sta_inst_addr                                       "0x0033"
#define  set_OSDOVL_measure_osd1_sta_reg(data)                                   (*((volatile unsigned int*)OSDOVL_measure_osd1_sta_reg)=data)
#define  get_OSDOVL_measure_osd1_sta_reg                                         (*((volatile unsigned int*)OSDOVL_measure_osd1_sta_reg))
#define  OSDOVL_measure_osd1_sta_x_shift                                         (16)
#define  OSDOVL_measure_osd1_sta_y_shift                                         (0)
#define  OSDOVL_measure_osd1_sta_x_mask                                          (0x1FFF0000)
#define  OSDOVL_measure_osd1_sta_y_mask                                          (0x00001FFF)
#define  OSDOVL_measure_osd1_sta_x(data)                                         (0x1FFF0000&((data)<<16))
#define  OSDOVL_measure_osd1_sta_y(data)                                         (0x00001FFF&(data))
#define  OSDOVL_measure_osd1_sta_get_x(data)                                     ((0x1FFF0000&(data))>>16)
#define  OSDOVL_measure_osd1_sta_get_y(data)                                     (0x00001FFF&(data))

#define  OSDOVL_measure_osd1_end                                                0x1802B0D4
#define  OSDOVL_measure_osd1_end_reg_addr                                        "0xB802B0D4"
#define  OSDOVL_measure_osd1_end_reg                                             0xB802B0D4
#define  OSDOVL_measure_osd1_end_inst_addr                                       "0x0034"
#define  set_OSDOVL_measure_osd1_end_reg(data)                                   (*((volatile unsigned int*)OSDOVL_measure_osd1_end_reg)=data)
#define  get_OSDOVL_measure_osd1_end_reg                                         (*((volatile unsigned int*)OSDOVL_measure_osd1_end_reg))
#define  OSDOVL_measure_osd1_end_x_shift                                         (16)
#define  OSDOVL_measure_osd1_end_y_shift                                         (0)
#define  OSDOVL_measure_osd1_end_x_mask                                          (0x1FFF0000)
#define  OSDOVL_measure_osd1_end_y_mask                                          (0x00001FFF)
#define  OSDOVL_measure_osd1_end_x(data)                                         (0x1FFF0000&((data)<<16))
#define  OSDOVL_measure_osd1_end_y(data)                                         (0x00001FFF&(data))
#define  OSDOVL_measure_osd1_end_get_x(data)                                     ((0x1FFF0000&(data))>>16)
#define  OSDOVL_measure_osd1_end_get_y(data)                                     (0x00001FFF&(data))

#define  OSDOVL_measure_osd2_sta                                                0x1802B0D8
#define  OSDOVL_measure_osd2_sta_reg_addr                                        "0xB802B0D8"
#define  OSDOVL_measure_osd2_sta_reg                                             0xB802B0D8
#define  OSDOVL_measure_osd2_sta_inst_addr                                       "0x0035"
#define  set_OSDOVL_measure_osd2_sta_reg(data)                                   (*((volatile unsigned int*)OSDOVL_measure_osd2_sta_reg)=data)
#define  get_OSDOVL_measure_osd2_sta_reg                                         (*((volatile unsigned int*)OSDOVL_measure_osd2_sta_reg))
#define  OSDOVL_measure_osd2_sta_x_shift                                         (16)
#define  OSDOVL_measure_osd2_sta_y_shift                                         (0)
#define  OSDOVL_measure_osd2_sta_x_mask                                          (0x1FFF0000)
#define  OSDOVL_measure_osd2_sta_y_mask                                          (0x00001FFF)
#define  OSDOVL_measure_osd2_sta_x(data)                                         (0x1FFF0000&((data)<<16))
#define  OSDOVL_measure_osd2_sta_y(data)                                         (0x00001FFF&(data))
#define  OSDOVL_measure_osd2_sta_get_x(data)                                     ((0x1FFF0000&(data))>>16)
#define  OSDOVL_measure_osd2_sta_get_y(data)                                     (0x00001FFF&(data))

#define  OSDOVL_measure_osd2_end                                                0x1802B0DC
#define  OSDOVL_measure_osd2_end_reg_addr                                        "0xB802B0DC"
#define  OSDOVL_measure_osd2_end_reg                                             0xB802B0DC
#define  OSDOVL_measure_osd2_end_inst_addr                                       "0x0036"
#define  set_OSDOVL_measure_osd2_end_reg(data)                                   (*((volatile unsigned int*)OSDOVL_measure_osd2_end_reg)=data)
#define  get_OSDOVL_measure_osd2_end_reg                                         (*((volatile unsigned int*)OSDOVL_measure_osd2_end_reg))
#define  OSDOVL_measure_osd2_end_x_shift                                         (16)
#define  OSDOVL_measure_osd2_end_y_shift                                         (0)
#define  OSDOVL_measure_osd2_end_x_mask                                          (0x1FFF0000)
#define  OSDOVL_measure_osd2_end_y_mask                                          (0x00001FFF)
#define  OSDOVL_measure_osd2_end_x(data)                                         (0x1FFF0000&((data)<<16))
#define  OSDOVL_measure_osd2_end_y(data)                                         (0x00001FFF&(data))
#define  OSDOVL_measure_osd2_end_get_x(data)                                     ((0x1FFF0000&(data))>>16)
#define  OSDOVL_measure_osd2_end_get_y(data)                                     (0x00001FFF&(data))

#define  OSDOVL_measure_osd3_sta                                                0x1802B0E0
#define  OSDOVL_measure_osd3_sta_reg_addr                                        "0xB802B0E0"
#define  OSDOVL_measure_osd3_sta_reg                                             0xB802B0E0
#define  OSDOVL_measure_osd3_sta_inst_addr                                       "0x0037"
#define  set_OSDOVL_measure_osd3_sta_reg(data)                                   (*((volatile unsigned int*)OSDOVL_measure_osd3_sta_reg)=data)
#define  get_OSDOVL_measure_osd3_sta_reg                                         (*((volatile unsigned int*)OSDOVL_measure_osd3_sta_reg))
#define  OSDOVL_measure_osd3_sta_x_shift                                         (16)
#define  OSDOVL_measure_osd3_sta_y_shift                                         (0)
#define  OSDOVL_measure_osd3_sta_x_mask                                          (0x1FFF0000)
#define  OSDOVL_measure_osd3_sta_y_mask                                          (0x00001FFF)
#define  OSDOVL_measure_osd3_sta_x(data)                                         (0x1FFF0000&((data)<<16))
#define  OSDOVL_measure_osd3_sta_y(data)                                         (0x00001FFF&(data))
#define  OSDOVL_measure_osd3_sta_get_x(data)                                     ((0x1FFF0000&(data))>>16)
#define  OSDOVL_measure_osd3_sta_get_y(data)                                     (0x00001FFF&(data))

#define  OSDOVL_measure_osd3_end                                                0x1802B0E4
#define  OSDOVL_measure_osd3_end_reg_addr                                        "0xB802B0E4"
#define  OSDOVL_measure_osd3_end_reg                                             0xB802B0E4
#define  OSDOVL_measure_osd3_end_inst_addr                                       "0x0038"
#define  set_OSDOVL_measure_osd3_end_reg(data)                                   (*((volatile unsigned int*)OSDOVL_measure_osd3_end_reg)=data)
#define  get_OSDOVL_measure_osd3_end_reg                                         (*((volatile unsigned int*)OSDOVL_measure_osd3_end_reg))
#define  OSDOVL_measure_osd3_end_x_shift                                         (16)
#define  OSDOVL_measure_osd3_end_y_shift                                         (0)
#define  OSDOVL_measure_osd3_end_x_mask                                          (0x1FFF0000)
#define  OSDOVL_measure_osd3_end_y_mask                                          (0x00001FFF)
#define  OSDOVL_measure_osd3_end_x(data)                                         (0x1FFF0000&((data)<<16))
#define  OSDOVL_measure_osd3_end_y(data)                                         (0x00001FFF&(data))
#define  OSDOVL_measure_osd3_end_get_x(data)                                     ((0x1FFF0000&(data))>>16)
#define  OSDOVL_measure_osd3_end_get_y(data)                                     (0x00001FFF&(data))

#define  OSDOVL_alpha_osd_detect_0                                              0x1802B0E8
#define  OSDOVL_alpha_osd_detect_0_reg_addr                                      "0xB802B0E8"
#define  OSDOVL_alpha_osd_detect_0_reg                                           0xB802B0E8
#define  OSDOVL_alpha_osd_detect_0_inst_addr                                     "0x0039"
#define  set_OSDOVL_alpha_osd_detect_0_reg(data)                                 (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_0_reg)=data)
#define  get_OSDOVL_alpha_osd_detect_0_reg                                       (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_0_reg))
#define  OSDOVL_alpha_osd_detect_0_thd3_shift                                    (24)
#define  OSDOVL_alpha_osd_detect_0_thd2_shift                                    (16)
#define  OSDOVL_alpha_osd_detect_0_thd1_shift                                    (8)
#define  OSDOVL_alpha_osd_detect_0_thd0_shift                                    (0)
#define  OSDOVL_alpha_osd_detect_0_thd3_mask                                     (0xFF000000)
#define  OSDOVL_alpha_osd_detect_0_thd2_mask                                     (0x00FF0000)
#define  OSDOVL_alpha_osd_detect_0_thd1_mask                                     (0x0000FF00)
#define  OSDOVL_alpha_osd_detect_0_thd0_mask                                     (0x000000FF)
#define  OSDOVL_alpha_osd_detect_0_thd3(data)                                    (0xFF000000&((data)<<24))
#define  OSDOVL_alpha_osd_detect_0_thd2(data)                                    (0x00FF0000&((data)<<16))
#define  OSDOVL_alpha_osd_detect_0_thd1(data)                                    (0x0000FF00&((data)<<8))
#define  OSDOVL_alpha_osd_detect_0_thd0(data)                                    (0x000000FF&(data))
#define  OSDOVL_alpha_osd_detect_0_get_thd3(data)                                ((0xFF000000&(data))>>24)
#define  OSDOVL_alpha_osd_detect_0_get_thd2(data)                                ((0x00FF0000&(data))>>16)
#define  OSDOVL_alpha_osd_detect_0_get_thd1(data)                                ((0x0000FF00&(data))>>8)
#define  OSDOVL_alpha_osd_detect_0_get_thd0(data)                                (0x000000FF&(data))

#define  OSDOVL_alpha_osd_detect_1                                              0x1802B0EC
#define  OSDOVL_alpha_osd_detect_1_reg_addr                                      "0xB802B0EC"
#define  OSDOVL_alpha_osd_detect_1_reg                                           0xB802B0EC
#define  OSDOVL_alpha_osd_detect_1_inst_addr                                     "0x003A"
#define  set_OSDOVL_alpha_osd_detect_1_reg(data)                                 (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_1_reg)=data)
#define  get_OSDOVL_alpha_osd_detect_1_reg                                       (*((volatile unsigned int*)OSDOVL_alpha_osd_detect_1_reg))
#define  OSDOVL_alpha_osd_detect_1_thd7_shift                                    (24)
#define  OSDOVL_alpha_osd_detect_1_thd6_shift                                    (16)
#define  OSDOVL_alpha_osd_detect_1_thd5_shift                                    (8)
#define  OSDOVL_alpha_osd_detect_1_thd4_shift                                    (0)
#define  OSDOVL_alpha_osd_detect_1_thd7_mask                                     (0xFF000000)
#define  OSDOVL_alpha_osd_detect_1_thd6_mask                                     (0x00FF0000)
#define  OSDOVL_alpha_osd_detect_1_thd5_mask                                     (0x0000FF00)
#define  OSDOVL_alpha_osd_detect_1_thd4_mask                                     (0x000000FF)
#define  OSDOVL_alpha_osd_detect_1_thd7(data)                                    (0xFF000000&((data)<<24))
#define  OSDOVL_alpha_osd_detect_1_thd6(data)                                    (0x00FF0000&((data)<<16))
#define  OSDOVL_alpha_osd_detect_1_thd5(data)                                    (0x0000FF00&((data)<<8))
#define  OSDOVL_alpha_osd_detect_1_thd4(data)                                    (0x000000FF&(data))
#define  OSDOVL_alpha_osd_detect_1_get_thd7(data)                                ((0xFF000000&(data))>>24)
#define  OSDOVL_alpha_osd_detect_1_get_thd6(data)                                ((0x00FF0000&(data))>>16)
#define  OSDOVL_alpha_osd_detect_1_get_thd5(data)                                ((0x0000FF00&(data))>>8)
#define  OSDOVL_alpha_osd_detect_1_get_thd4(data)                                (0x000000FF&(data))

#define  OSDOVL_Mixer_line_mask                                                 0x1802B0F0
#define  OSDOVL_Mixer_line_mask_reg_addr                                         "0xB802B0F0"
#define  OSDOVL_Mixer_line_mask_reg                                              0xB802B0F0
#define  OSDOVL_Mixer_line_mask_inst_addr                                        "0x003B"
#define  set_OSDOVL_Mixer_line_mask_reg(data)                                    (*((volatile unsigned int*)OSDOVL_Mixer_line_mask_reg)=data)
#define  get_OSDOVL_Mixer_line_mask_reg                                          (*((volatile unsigned int*)OSDOVL_Mixer_line_mask_reg))
#define  OSDOVL_Mixer_line_mask_osd3_line_mask_shift                             (6)
#define  OSDOVL_Mixer_line_mask_osd2_line_mask_shift                             (4)
#define  OSDOVL_Mixer_line_mask_osd1_line_mask_shift                             (2)
#define  OSDOVL_Mixer_line_mask_video_line_mask_shift                            (0)
#define  OSDOVL_Mixer_line_mask_osd3_line_mask_mask                              (0x000000C0)
#define  OSDOVL_Mixer_line_mask_osd2_line_mask_mask                              (0x00000030)
#define  OSDOVL_Mixer_line_mask_osd1_line_mask_mask                              (0x0000000C)
#define  OSDOVL_Mixer_line_mask_video_line_mask_mask                             (0x00000003)
#define  OSDOVL_Mixer_line_mask_osd3_line_mask(data)                             (0x000000C0&((data)<<6))
#define  OSDOVL_Mixer_line_mask_osd2_line_mask(data)                             (0x00000030&((data)<<4))
#define  OSDOVL_Mixer_line_mask_osd1_line_mask(data)                             (0x0000000C&((data)<<2))
#define  OSDOVL_Mixer_line_mask_video_line_mask(data)                            (0x00000003&(data))
#define  OSDOVL_Mixer_line_mask_get_osd3_line_mask(data)                         ((0x000000C0&(data))>>6)
#define  OSDOVL_Mixer_line_mask_get_osd2_line_mask(data)                         ((0x00000030&(data))>>4)
#define  OSDOVL_Mixer_line_mask_get_osd1_line_mask(data)                         ((0x0000000C&(data))>>2)
#define  OSDOVL_Mixer_line_mask_get_video_line_mask(data)                        (0x00000003&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======OSDOVL register structure define==========

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
}osdovl_mixer_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  c3_plane_alpha_en:1;
        RBus_UInt32  c2_plane_alpha_en:1;
        RBus_UInt32  c1_plane_alpha_en:1;
        RBus_UInt32  c0_plane_alpha_en:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  alpha_detect_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  c3_sel:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  c2_sel:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  c1_sel:2;
        RBus_UInt32  res6:2;
        RBus_UInt32  c0_sel:2;
    };
}osdovl_mixer_layer_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_a:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  plane_alpha_r:9;
    };
}osdovl_mixer_c0_plane_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_g:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  plane_alpha_b:9;
    };
}osdovl_mixer_c0_plane_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_offset_a:8;
        RBus_UInt32  plane_offset_r:8;
        RBus_UInt32  plane_offset_g:8;
        RBus_UInt32  plane_offset_b:8;
    };
}osdovl_mixer_c0_plane_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_a:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  plane_alpha_r:9;
    };
}osdovl_mixer_c1_plane_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_g:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  plane_alpha_b:9;
    };
}osdovl_mixer_c1_plane_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_offset_a:8;
        RBus_UInt32  plane_offset_r:8;
        RBus_UInt32  plane_offset_g:8;
        RBus_UInt32  plane_offset_b:8;
    };
}osdovl_mixer_c1_plane_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_a:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  plane_alpha_r:9;
    };
}osdovl_mixer_c2_plane_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_g:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  plane_alpha_b:9;
    };
}osdovl_mixer_c2_plane_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_offset_a:8;
        RBus_UInt32  plane_offset_r:8;
        RBus_UInt32  plane_offset_g:8;
        RBus_UInt32  plane_offset_b:8;
    };
}osdovl_mixer_c2_plane_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_a:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  plane_alpha_r:9;
    };
}osdovl_mixer_c3_plane_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_g:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  plane_alpha_b:9;
    };
}osdovl_mixer_c3_plane_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_offset_a:8;
        RBus_UInt32  plane_offset_r:8;
        RBus_UInt32  plane_offset_g:8;
        RBus_UInt32  plane_offset_b:8;
    };
}osdovl_mixer_c3_plane_offset_RBUS;

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
}osdovl_mixer_osd_gamma_ctrl_RBUS;

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
}osdovl_mixer_osd_gamma_dynamic_region_d3_d2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_offset:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  x_offset:13;
    };
}osdovl_mixer_osd3x3_data_in_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  z_offset:13;
    };
}osdovl_mixer_osd3x3_data_in_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  k12:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  k11:14;
    };
}osdovl_mixer_osd3x3_data_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  k21:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  k13:14;
    };
}osdovl_mixer_osd3x3_data_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  k23:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  k22:14;
    };
}osdovl_mixer_osd3x3_data_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  k32:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  k31:14;
    };
}osdovl_mixer_osd3x3_data_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  k33:14;
    };
}osdovl_mixer_osd3x3_data_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  goffset:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  roffset:13;
    };
}osdovl_mixer_osd3x3_out_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  boffset:13;
    };
}osdovl_mixer_osd3x3_out_offset_1_RBUS;

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
}osdovl_mixer_b1_RBUS;

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
}osdovl_mixer_b2_RBUS;

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
}osdovl_mixer_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  gamma1_tab_index:12;
        RBus_UInt32  res2:1;
        RBus_UInt32  gamma1_tab_d0:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  gamma1_tab_d1:7;
    };
}osdovl_mixer_gamma1_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  gamma1_tab_addr:7;
        RBus_UInt32  res2:6;
        RBus_UInt32  gamma1_ax_rw_sel:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  gamma1_ax_ch_sel:2;
        RBus_UInt32  gamma1_fifo_empty:1;
        RBus_UInt32  gamma1_fifo_full:1;
        RBus_UInt32  gamma1_wr_error:1;
        RBus_UInt32  dummy1802b074_1:1;
        RBus_UInt32  res4:1;
    };
}osdovl_mixer_gamma1_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  gamma2_tab_index:12;
        RBus_UInt32  res2:1;
        RBus_UInt32  gamma2_tab_d0:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  gamma2_tab_d1:7;
    };
}osdovl_mixer_gamma2_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  gamma2_tab_addr:7;
        RBus_UInt32  res2:6;
        RBus_UInt32  gamma2_ax_rw_sel:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  gamma2_ax_ch_sel:2;
        RBus_UInt32  gamma2_fifo_empty:1;
        RBus_UInt32  gamma2_fifo_full:1;
        RBus_UInt32  gamma2_wr_error:1;
        RBus_UInt32  dummy1802b07c_1:1;
        RBus_UInt32  res4:1;
    };
}osdovl_mixer_gamma2_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  gamma2_test1:1;
        RBus_UInt32  gamma1_test1:1;
        RBus_UInt32  gamma2_ls:1;
        RBus_UInt32  gamma1_ls:1;
        RBus_UInt32  gamma2_rme:1;
        RBus_UInt32  gamma1_rme:1;
        RBus_UInt32  gamma2_rm:4;
        RBus_UInt32  gamma1_rm:4;
    };
}osdovl_mixer_gamma_bist_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  gamma2_r_drf_bist_fail:1;
        RBus_UInt32  gamma2_g_drf_bist_fail:1;
        RBus_UInt32  gamma2_b_drf_bist_fail:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gamma1_r_drf_bist_fail:1;
        RBus_UInt32  gamma1_g_drf_bist_fail:1;
        RBus_UInt32  gamma1_b_drf_bist_fail:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  gamma2_r_bist_fail:1;
        RBus_UInt32  gamma2_g_bist_fail:1;
        RBus_UInt32  gamma2_b_bist_fail:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  gamma1_r_bist_fail:1;
        RBus_UInt32  gamma1_g_bist_fail:1;
        RBus_UInt32  gamma1_b_bist_fail:1;
    };
}osdovl_mixer_gamma_bist_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  gamma2_r1_drf_bist_fail:1;
        RBus_UInt32  gamma2_g1_drf_bist_fail:1;
        RBus_UInt32  gamma2_b1_drf_bist_fail:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gamma1_r1_drf_bist_fail:1;
        RBus_UInt32  gamma1_g1_drf_bist_fail:1;
        RBus_UInt32  gamma1_b1_drf_bist_fail:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  gamma2_r1_bist_fail:1;
        RBus_UInt32  gamma2_g1_bist_fail:1;
        RBus_UInt32  gamma2_b1_bist_fail:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  gamma1_r1_bist_fail:1;
        RBus_UInt32  gamma1_g1_bist_fail:1;
        RBus_UInt32  gamma1_b1_bist_fail:1;
    };
}osdovl_mixer_gamma_bist_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_empty_a:8;
        RBus_UInt32  data_empty_r:8;
        RBus_UInt32  data_empty_g:8;
        RBus_UInt32  data_empty_b:8;
    };
}osdovl_mixer_osd_split_empty_pixel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  mixer_crc_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  crc_res_sel:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  crc_auto_cmp_en:1;
        RBus_UInt32  crc_conti:1;
        RBus_UInt32  crc_start:1;
    };
}osdovl_mixer_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mixer_crc_result:32;
    };
}osdovl_mixer_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mixer_crc_des:32;
    };
}osdovl_mixer_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  mixer_crc_err_cnt:16;
    };
}osdovl_mixer_crc_err_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  db_read:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_load:1;
    };
}osdovl_osd_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  db_read:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_load:1;
    };
}osdovl_mixer_osd_split_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  one_layer_setting_conflict:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  c3_src_conflict:1;
        RBus_UInt32  c2_src_conflict:1;
        RBus_UInt32  c1_src_conflict:1;
        RBus_UInt32  c0_src_conflict:1;
        RBus_UInt32  res3:8;
    };
}osdovl_mixer_setting_error_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  thd_cnt:24;
    };
}osdovl_alpha_osd_detect_0_ro_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  thd_cnt:24;
    };
}osdovl_alpha_osd_detect_1_ro_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  thd_cnt:24;
    };
}osdovl_alpha_osd_detect_2_ro_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  thd_cnt:24;
    };
}osdovl_alpha_osd_detect_3_ro_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  thd_cnt:24;
    };
}osdovl_alpha_osd_detect_4_ro_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  thd_cnt:24;
    };
}osdovl_alpha_osd_detect_5_ro_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  thd_cnt:24;
    };
}osdovl_alpha_osd_detect_6_ro_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  thd_cnt:24;
    };
}osdovl_alpha_osd_detect_7_ro_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  x:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  y:13;
    };
}osdovl_measure_osd1_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  x:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  y:13;
    };
}osdovl_measure_osd1_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  x:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  y:13;
    };
}osdovl_measure_osd2_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  x:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  y:13;
    };
}osdovl_measure_osd2_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  x:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  y:13;
    };
}osdovl_measure_osd3_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  x:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  y:13;
    };
}osdovl_measure_osd3_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  thd3:8;
        RBus_UInt32  thd2:8;
        RBus_UInt32  thd1:8;
        RBus_UInt32  thd0:8;
    };
}osdovl_alpha_osd_detect_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  thd7:8;
        RBus_UInt32  thd6:8;
        RBus_UInt32  thd5:8;
        RBus_UInt32  thd4:8;
    };
}osdovl_alpha_osd_detect_1_RBUS;

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
}osdovl_mixer_line_mask_RBUS;

#else //apply LITTLE_ENDIAN

//======OSDOVL register structure define==========

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
}osdovl_mixer_ctrl2_RBUS;

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
        RBus_UInt32  res4:2;
        RBus_UInt32  alpha_detect_sel:2;
        RBus_UInt32  res5:6;
        RBus_UInt32  c0_plane_alpha_en:1;
        RBus_UInt32  c1_plane_alpha_en:1;
        RBus_UInt32  c2_plane_alpha_en:1;
        RBus_UInt32  c3_plane_alpha_en:1;
        RBus_UInt32  res6:4;
    };
}osdovl_mixer_layer_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_alpha_r:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_a:9;
        RBus_UInt32  res2:7;
    };
}osdovl_mixer_c0_plane_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_alpha_b:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_g:9;
        RBus_UInt32  res2:7;
    };
}osdovl_mixer_c0_plane_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_offset_b:8;
        RBus_UInt32  plane_offset_g:8;
        RBus_UInt32  plane_offset_r:8;
        RBus_UInt32  plane_offset_a:8;
    };
}osdovl_mixer_c0_plane_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_alpha_r:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_a:9;
        RBus_UInt32  res2:7;
    };
}osdovl_mixer_c1_plane_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_alpha_b:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_g:9;
        RBus_UInt32  res2:7;
    };
}osdovl_mixer_c1_plane_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_offset_b:8;
        RBus_UInt32  plane_offset_g:8;
        RBus_UInt32  plane_offset_r:8;
        RBus_UInt32  plane_offset_a:8;
    };
}osdovl_mixer_c1_plane_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_alpha_r:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_a:9;
        RBus_UInt32  res2:7;
    };
}osdovl_mixer_c2_plane_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_alpha_b:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_g:9;
        RBus_UInt32  res2:7;
    };
}osdovl_mixer_c2_plane_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_offset_b:8;
        RBus_UInt32  plane_offset_g:8;
        RBus_UInt32  plane_offset_r:8;
        RBus_UInt32  plane_offset_a:8;
    };
}osdovl_mixer_c2_plane_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_alpha_r:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_a:9;
        RBus_UInt32  res2:7;
    };
}osdovl_mixer_c3_plane_alpha1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_alpha_b:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  plane_alpha_g:9;
        RBus_UInt32  res2:7;
    };
}osdovl_mixer_c3_plane_alpha2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plane_offset_b:8;
        RBus_UInt32  plane_offset_g:8;
        RBus_UInt32  plane_offset_r:8;
        RBus_UInt32  plane_offset_a:8;
    };
}osdovl_mixer_c3_plane_offset_RBUS;

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
}osdovl_mixer_osd_gamma_ctrl_RBUS;

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
}osdovl_mixer_osd_gamma_dynamic_region_d3_d2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  x_offset:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  y_offset:13;
        RBus_UInt32  res2:3;
    };
}osdovl_mixer_osd3x3_data_in_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  z_offset:13;
        RBus_UInt32  res1:19;
    };
}osdovl_mixer_osd3x3_data_in_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k11:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  k12:14;
        RBus_UInt32  res2:2;
    };
}osdovl_mixer_osd3x3_data_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k13:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  k21:14;
        RBus_UInt32  res2:2;
    };
}osdovl_mixer_osd3x3_data_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k22:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  k23:14;
        RBus_UInt32  res2:2;
    };
}osdovl_mixer_osd3x3_data_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k31:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  k32:14;
        RBus_UInt32  res2:2;
    };
}osdovl_mixer_osd3x3_data_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  k33:14;
        RBus_UInt32  res1:18;
    };
}osdovl_mixer_osd3x3_data_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  roffset:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  goffset:13;
        RBus_UInt32  res2:3;
    };
}osdovl_mixer_osd3x3_out_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  boffset:13;
        RBus_UInt32  res1:19;
    };
}osdovl_mixer_osd3x3_out_offset_1_RBUS;

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
}osdovl_mixer_b1_RBUS;

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
}osdovl_mixer_b2_RBUS;

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
}osdovl_mixer_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gamma1_tab_d1:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  gamma1_tab_d0:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  gamma1_tab_index:12;
        RBus_UInt32  res3:4;
    };
}osdovl_mixer_gamma1_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dummy1802b074_1:1;
        RBus_UInt32  gamma1_wr_error:1;
        RBus_UInt32  gamma1_fifo_full:1;
        RBus_UInt32  gamma1_fifo_empty:1;
        RBus_UInt32  gamma1_ax_ch_sel:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  gamma1_ax_rw_sel:2;
        RBus_UInt32  res3:6;
        RBus_UInt32  gamma1_tab_addr:7;
        RBus_UInt32  res4:9;
    };
}osdovl_mixer_gamma1_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gamma2_tab_d1:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  gamma2_tab_d0:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  gamma2_tab_index:12;
        RBus_UInt32  res3:4;
    };
}osdovl_mixer_gamma2_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dummy1802b07c_1:1;
        RBus_UInt32  gamma2_wr_error:1;
        RBus_UInt32  gamma2_fifo_full:1;
        RBus_UInt32  gamma2_fifo_empty:1;
        RBus_UInt32  gamma2_ax_ch_sel:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  gamma2_ax_rw_sel:2;
        RBus_UInt32  res3:6;
        RBus_UInt32  gamma2_tab_addr:7;
        RBus_UInt32  res4:9;
    };
}osdovl_mixer_gamma2_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gamma1_rm:4;
        RBus_UInt32  gamma2_rm:4;
        RBus_UInt32  gamma1_rme:1;
        RBus_UInt32  gamma2_rme:1;
        RBus_UInt32  gamma1_ls:1;
        RBus_UInt32  gamma2_ls:1;
        RBus_UInt32  gamma1_test1:1;
        RBus_UInt32  gamma2_test1:1;
        RBus_UInt32  res1:18;
    };
}osdovl_mixer_gamma_bist_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gamma1_b_bist_fail:1;
        RBus_UInt32  gamma1_g_bist_fail:1;
        RBus_UInt32  gamma1_r_bist_fail:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  gamma2_b_bist_fail:1;
        RBus_UInt32  gamma2_g_bist_fail:1;
        RBus_UInt32  gamma2_r_bist_fail:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gamma1_b_drf_bist_fail:1;
        RBus_UInt32  gamma1_g_drf_bist_fail:1;
        RBus_UInt32  gamma1_r_drf_bist_fail:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  gamma2_b_drf_bist_fail:1;
        RBus_UInt32  gamma2_g_drf_bist_fail:1;
        RBus_UInt32  gamma2_r_drf_bist_fail:1;
        RBus_UInt32  res4:17;
    };
}osdovl_mixer_gamma_bist_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gamma1_b1_bist_fail:1;
        RBus_UInt32  gamma1_g1_bist_fail:1;
        RBus_UInt32  gamma1_r1_bist_fail:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  gamma2_b1_bist_fail:1;
        RBus_UInt32  gamma2_g1_bist_fail:1;
        RBus_UInt32  gamma2_r1_bist_fail:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  gamma1_b1_drf_bist_fail:1;
        RBus_UInt32  gamma1_g1_drf_bist_fail:1;
        RBus_UInt32  gamma1_r1_drf_bist_fail:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  gamma2_b1_drf_bist_fail:1;
        RBus_UInt32  gamma2_g1_drf_bist_fail:1;
        RBus_UInt32  gamma2_r1_drf_bist_fail:1;
        RBus_UInt32  res4:17;
    };
}osdovl_mixer_gamma_bist_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_empty_b:8;
        RBus_UInt32  data_empty_g:8;
        RBus_UInt32  data_empty_r:8;
        RBus_UInt32  data_empty_a:8;
    };
}osdovl_mixer_osd_split_empty_pixel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_start:1;
        RBus_UInt32  crc_conti:1;
        RBus_UInt32  crc_auto_cmp_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  crc_res_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  mixer_crc_sel:3;
        RBus_UInt32  res3:21;
    };
}osdovl_mixer_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mixer_crc_result:32;
    };
}osdovl_mixer_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mixer_crc_des:32;
    };
}osdovl_mixer_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mixer_crc_err_cnt:16;
        RBus_UInt32  res1:16;
    };
}osdovl_mixer_crc_err_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_load:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_read:1;
        RBus_UInt32  res1:29;
    };
}osdovl_osd_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_load:1;
        RBus_UInt32  db_en:1;
        RBus_UInt32  db_read:1;
        RBus_UInt32  res1:29;
    };
}osdovl_mixer_osd_split_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  c0_src_conflict:1;
        RBus_UInt32  c1_src_conflict:1;
        RBus_UInt32  c2_src_conflict:1;
        RBus_UInt32  c3_src_conflict:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  one_layer_setting_conflict:1;
        RBus_UInt32  res3:17;
    };
}osdovl_mixer_setting_error_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  thd_cnt:24;
        RBus_UInt32  res1:8;
    };
}osdovl_alpha_osd_detect_0_ro_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  thd_cnt:24;
        RBus_UInt32  res1:8;
    };
}osdovl_alpha_osd_detect_1_ro_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  thd_cnt:24;
        RBus_UInt32  res1:8;
    };
}osdovl_alpha_osd_detect_2_ro_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  thd_cnt:24;
        RBus_UInt32  res1:8;
    };
}osdovl_alpha_osd_detect_3_ro_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  thd_cnt:24;
        RBus_UInt32  res1:8;
    };
}osdovl_alpha_osd_detect_4_ro_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  thd_cnt:24;
        RBus_UInt32  res1:8;
    };
}osdovl_alpha_osd_detect_5_ro_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  thd_cnt:24;
        RBus_UInt32  res1:8;
    };
}osdovl_alpha_osd_detect_6_ro_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  thd_cnt:24;
        RBus_UInt32  res1:8;
    };
}osdovl_alpha_osd_detect_7_ro_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  x:13;
        RBus_UInt32  res2:3;
    };
}osdovl_measure_osd1_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  x:13;
        RBus_UInt32  res2:3;
    };
}osdovl_measure_osd1_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  x:13;
        RBus_UInt32  res2:3;
    };
}osdovl_measure_osd2_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  x:13;
        RBus_UInt32  res2:3;
    };
}osdovl_measure_osd2_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  x:13;
        RBus_UInt32  res2:3;
    };
}osdovl_measure_osd3_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  x:13;
        RBus_UInt32  res2:3;
    };
}osdovl_measure_osd3_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  thd0:8;
        RBus_UInt32  thd1:8;
        RBus_UInt32  thd2:8;
        RBus_UInt32  thd3:8;
    };
}osdovl_alpha_osd_detect_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  thd4:8;
        RBus_UInt32  thd5:8;
        RBus_UInt32  thd6:8;
        RBus_UInt32  thd7:8;
    };
}osdovl_alpha_osd_detect_1_RBUS;

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
}osdovl_mixer_line_mask_RBUS;




#endif 


#endif 
