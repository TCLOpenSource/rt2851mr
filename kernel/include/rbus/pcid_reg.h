/**
* @file Merlin5-DesignSpec-D-Domain_LineOD
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_PCID_REG_H_
#define _RBUS_PCID_REG_H_

#include "rbus_types.h"



//  PCID Register Address
#define  PCID_PCID_CTRL                                                         0x1802EF00
#define  PCID_PCID_CTRL_reg_addr                                                 "0xB802EF00"
#define  PCID_PCID_CTRL_reg                                                      0xB802EF00
#define  PCID_PCID_CTRL_inst_addr                                                "0x0000"
#define  set_PCID_PCID_CTRL_reg(data)                                            (*((volatile unsigned int*)PCID_PCID_CTRL_reg)=data)
#define  get_PCID_PCID_CTRL_reg                                                  (*((volatile unsigned int*)PCID_PCID_CTRL_reg))
#define  PCID_PCID_CTRL_dummy_31_1_shift                                         (1)
#define  PCID_PCID_CTRL_boundary_mode_shift                                      (0)
#define  PCID_PCID_CTRL_dummy_31_1_mask                                          (0xFFFFFFFE)
#define  PCID_PCID_CTRL_boundary_mode_mask                                       (0x00000001)
#define  PCID_PCID_CTRL_dummy_31_1(data)                                         (0xFFFFFFFE&((data)<<1))
#define  PCID_PCID_CTRL_boundary_mode(data)                                      (0x00000001&(data))
#define  PCID_PCID_CTRL_get_dummy_31_1(data)                                     ((0xFFFFFFFE&(data))>>1)
#define  PCID_PCID_CTRL_get_boundary_mode(data)                                  (0x00000001&(data))

#define  PCID_PCID_CTRL_2                                                       0x1802EF04
#define  PCID_PCID_CTRL_2_reg_addr                                               "0xB802EF04"
#define  PCID_PCID_CTRL_2_reg                                                    0xB802EF04
#define  PCID_PCID_CTRL_2_inst_addr                                              "0x0001"
#define  set_PCID_PCID_CTRL_2_reg(data)                                          (*((volatile unsigned int*)PCID_PCID_CTRL_2_reg)=data)
#define  get_PCID_PCID_CTRL_2_reg                                                (*((volatile unsigned int*)PCID_PCID_CTRL_2_reg))
#define  PCID_PCID_CTRL_2_pcid_tab1_xtr_en_shift                                 (30)
#define  PCID_PCID_CTRL_2_pcid_thd_mode_shift                                    (29)
#define  PCID_PCID_CTRL_2_pcid_thd_en_shift                                      (28)
#define  PCID_PCID_CTRL_2_pcid_tab1_b_thd_shift                                  (16)
#define  PCID_PCID_CTRL_2_pcid_tab1_g_thd_shift                                  (8)
#define  PCID_PCID_CTRL_2_pcid_tab1_r_thd_shift                                  (0)
#define  PCID_PCID_CTRL_2_pcid_tab1_xtr_en_mask                                  (0x40000000)
#define  PCID_PCID_CTRL_2_pcid_thd_mode_mask                                     (0x20000000)
#define  PCID_PCID_CTRL_2_pcid_thd_en_mask                                       (0x10000000)
#define  PCID_PCID_CTRL_2_pcid_tab1_b_thd_mask                                   (0x00FF0000)
#define  PCID_PCID_CTRL_2_pcid_tab1_g_thd_mask                                   (0x0000FF00)
#define  PCID_PCID_CTRL_2_pcid_tab1_r_thd_mask                                   (0x000000FF)
#define  PCID_PCID_CTRL_2_pcid_tab1_xtr_en(data)                                 (0x40000000&((data)<<30))
#define  PCID_PCID_CTRL_2_pcid_thd_mode(data)                                    (0x20000000&((data)<<29))
#define  PCID_PCID_CTRL_2_pcid_thd_en(data)                                      (0x10000000&((data)<<28))
#define  PCID_PCID_CTRL_2_pcid_tab1_b_thd(data)                                  (0x00FF0000&((data)<<16))
#define  PCID_PCID_CTRL_2_pcid_tab1_g_thd(data)                                  (0x0000FF00&((data)<<8))
#define  PCID_PCID_CTRL_2_pcid_tab1_r_thd(data)                                  (0x000000FF&(data))
#define  PCID_PCID_CTRL_2_get_pcid_tab1_xtr_en(data)                             ((0x40000000&(data))>>30)
#define  PCID_PCID_CTRL_2_get_pcid_thd_mode(data)                                ((0x20000000&(data))>>29)
#define  PCID_PCID_CTRL_2_get_pcid_thd_en(data)                                  ((0x10000000&(data))>>28)
#define  PCID_PCID_CTRL_2_get_pcid_tab1_b_thd(data)                              ((0x00FF0000&(data))>>16)
#define  PCID_PCID_CTRL_2_get_pcid_tab1_g_thd(data)                              ((0x0000FF00&(data))>>8)
#define  PCID_PCID_CTRL_2_get_pcid_tab1_r_thd(data)                              (0x000000FF&(data))

#define  PCID_PCID_CTRL_3                                                       0x1802EF08
#define  PCID_PCID_CTRL_3_reg_addr                                               "0xB802EF08"
#define  PCID_PCID_CTRL_3_reg                                                    0xB802EF08
#define  PCID_PCID_CTRL_3_inst_addr                                              "0x0002"
#define  set_PCID_PCID_CTRL_3_reg(data)                                          (*((volatile unsigned int*)PCID_PCID_CTRL_3_reg)=data)
#define  get_PCID_PCID_CTRL_3_reg                                                (*((volatile unsigned int*)PCID_PCID_CTRL_3_reg))
#define  PCID_PCID_CTRL_3_dummy_31_0_shift                                       (0)
#define  PCID_PCID_CTRL_3_dummy_31_0_mask                                        (0xFFFFFFFF)
#define  PCID_PCID_CTRL_3_dummy_31_0(data)                                       (0xFFFFFFFF&(data))
#define  PCID_PCID_CTRL_3_get_dummy_31_0(data)                                   (0xFFFFFFFF&(data))

#define  PCID_PCID_LINE_1                                                       0x1802EF10
#define  PCID_PCID_LINE_1_reg_addr                                               "0xB802EF10"
#define  PCID_PCID_LINE_1_reg                                                    0xB802EF10
#define  PCID_PCID_LINE_1_inst_addr                                              "0x0003"
#define  set_PCID_PCID_LINE_1_reg(data)                                          (*((volatile unsigned int*)PCID_PCID_LINE_1_reg)=data)
#define  get_PCID_PCID_LINE_1_reg                                                (*((volatile unsigned int*)PCID_PCID_LINE_1_reg))
#define  PCID_PCID_LINE_1_line1_odd_b_color_select_shift                         (30)
#define  PCID_PCID_LINE_1_line1_odd_g_color_select_shift                         (28)
#define  PCID_PCID_LINE_1_line1_odd_r_color_select_shift                         (26)
#define  PCID_PCID_LINE_1_line1_odd_b_point_select_shift                         (24)
#define  PCID_PCID_LINE_1_line1_odd_g_point_select_shift                         (22)
#define  PCID_PCID_LINE_1_line1_odd_r_point_select_shift                         (20)
#define  PCID_PCID_LINE_1_line1_odd_b_line_select_shift                          (18)
#define  PCID_PCID_LINE_1_line1_odd_g_line_select_shift                          (17)
#define  PCID_PCID_LINE_1_line1_odd_r_line_select_shift                          (16)
#define  PCID_PCID_LINE_1_line1_even_b_color_select_shift                        (14)
#define  PCID_PCID_LINE_1_line1_even_g_color_select_shift                        (12)
#define  PCID_PCID_LINE_1_line1_even_r_color_select_shift                        (10)
#define  PCID_PCID_LINE_1_line1_even_b_point_select_shift                        (8)
#define  PCID_PCID_LINE_1_line1_even_g_point_select_shift                        (6)
#define  PCID_PCID_LINE_1_line1_even_r_point_select_shift                        (4)
#define  PCID_PCID_LINE_1_line1_even_b_line_select_shift                         (2)
#define  PCID_PCID_LINE_1_line1_even_g_line_select_shift                         (1)
#define  PCID_PCID_LINE_1_line1_even_r_line_select_shift                         (0)
#define  PCID_PCID_LINE_1_line1_odd_b_color_select_mask                          (0xC0000000)
#define  PCID_PCID_LINE_1_line1_odd_g_color_select_mask                          (0x30000000)
#define  PCID_PCID_LINE_1_line1_odd_r_color_select_mask                          (0x0C000000)
#define  PCID_PCID_LINE_1_line1_odd_b_point_select_mask                          (0x03000000)
#define  PCID_PCID_LINE_1_line1_odd_g_point_select_mask                          (0x00C00000)
#define  PCID_PCID_LINE_1_line1_odd_r_point_select_mask                          (0x00300000)
#define  PCID_PCID_LINE_1_line1_odd_b_line_select_mask                           (0x00040000)
#define  PCID_PCID_LINE_1_line1_odd_g_line_select_mask                           (0x00020000)
#define  PCID_PCID_LINE_1_line1_odd_r_line_select_mask                           (0x00010000)
#define  PCID_PCID_LINE_1_line1_even_b_color_select_mask                         (0x0000C000)
#define  PCID_PCID_LINE_1_line1_even_g_color_select_mask                         (0x00003000)
#define  PCID_PCID_LINE_1_line1_even_r_color_select_mask                         (0x00000C00)
#define  PCID_PCID_LINE_1_line1_even_b_point_select_mask                         (0x00000300)
#define  PCID_PCID_LINE_1_line1_even_g_point_select_mask                         (0x000000C0)
#define  PCID_PCID_LINE_1_line1_even_r_point_select_mask                         (0x00000030)
#define  PCID_PCID_LINE_1_line1_even_b_line_select_mask                          (0x00000004)
#define  PCID_PCID_LINE_1_line1_even_g_line_select_mask                          (0x00000002)
#define  PCID_PCID_LINE_1_line1_even_r_line_select_mask                          (0x00000001)
#define  PCID_PCID_LINE_1_line1_odd_b_color_select(data)                         (0xC0000000&((data)<<30))
#define  PCID_PCID_LINE_1_line1_odd_g_color_select(data)                         (0x30000000&((data)<<28))
#define  PCID_PCID_LINE_1_line1_odd_r_color_select(data)                         (0x0C000000&((data)<<26))
#define  PCID_PCID_LINE_1_line1_odd_b_point_select(data)                         (0x03000000&((data)<<24))
#define  PCID_PCID_LINE_1_line1_odd_g_point_select(data)                         (0x00C00000&((data)<<22))
#define  PCID_PCID_LINE_1_line1_odd_r_point_select(data)                         (0x00300000&((data)<<20))
#define  PCID_PCID_LINE_1_line1_odd_b_line_select(data)                          (0x00040000&((data)<<18))
#define  PCID_PCID_LINE_1_line1_odd_g_line_select(data)                          (0x00020000&((data)<<17))
#define  PCID_PCID_LINE_1_line1_odd_r_line_select(data)                          (0x00010000&((data)<<16))
#define  PCID_PCID_LINE_1_line1_even_b_color_select(data)                        (0x0000C000&((data)<<14))
#define  PCID_PCID_LINE_1_line1_even_g_color_select(data)                        (0x00003000&((data)<<12))
#define  PCID_PCID_LINE_1_line1_even_r_color_select(data)                        (0x00000C00&((data)<<10))
#define  PCID_PCID_LINE_1_line1_even_b_point_select(data)                        (0x00000300&((data)<<8))
#define  PCID_PCID_LINE_1_line1_even_g_point_select(data)                        (0x000000C0&((data)<<6))
#define  PCID_PCID_LINE_1_line1_even_r_point_select(data)                        (0x00000030&((data)<<4))
#define  PCID_PCID_LINE_1_line1_even_b_line_select(data)                         (0x00000004&((data)<<2))
#define  PCID_PCID_LINE_1_line1_even_g_line_select(data)                         (0x00000002&((data)<<1))
#define  PCID_PCID_LINE_1_line1_even_r_line_select(data)                         (0x00000001&(data))
#define  PCID_PCID_LINE_1_get_line1_odd_b_color_select(data)                     ((0xC0000000&(data))>>30)
#define  PCID_PCID_LINE_1_get_line1_odd_g_color_select(data)                     ((0x30000000&(data))>>28)
#define  PCID_PCID_LINE_1_get_line1_odd_r_color_select(data)                     ((0x0C000000&(data))>>26)
#define  PCID_PCID_LINE_1_get_line1_odd_b_point_select(data)                     ((0x03000000&(data))>>24)
#define  PCID_PCID_LINE_1_get_line1_odd_g_point_select(data)                     ((0x00C00000&(data))>>22)
#define  PCID_PCID_LINE_1_get_line1_odd_r_point_select(data)                     ((0x00300000&(data))>>20)
#define  PCID_PCID_LINE_1_get_line1_odd_b_line_select(data)                      ((0x00040000&(data))>>18)
#define  PCID_PCID_LINE_1_get_line1_odd_g_line_select(data)                      ((0x00020000&(data))>>17)
#define  PCID_PCID_LINE_1_get_line1_odd_r_line_select(data)                      ((0x00010000&(data))>>16)
#define  PCID_PCID_LINE_1_get_line1_even_b_color_select(data)                    ((0x0000C000&(data))>>14)
#define  PCID_PCID_LINE_1_get_line1_even_g_color_select(data)                    ((0x00003000&(data))>>12)
#define  PCID_PCID_LINE_1_get_line1_even_r_color_select(data)                    ((0x00000C00&(data))>>10)
#define  PCID_PCID_LINE_1_get_line1_even_b_point_select(data)                    ((0x00000300&(data))>>8)
#define  PCID_PCID_LINE_1_get_line1_even_g_point_select(data)                    ((0x000000C0&(data))>>6)
#define  PCID_PCID_LINE_1_get_line1_even_r_point_select(data)                    ((0x00000030&(data))>>4)
#define  PCID_PCID_LINE_1_get_line1_even_b_line_select(data)                     ((0x00000004&(data))>>2)
#define  PCID_PCID_LINE_1_get_line1_even_g_line_select(data)                     ((0x00000002&(data))>>1)
#define  PCID_PCID_LINE_1_get_line1_even_r_line_select(data)                     (0x00000001&(data))

#define  PCID_PCID_LINE_2                                                       0x1802EF14
#define  PCID_PCID_LINE_2_reg_addr                                               "0xB802EF14"
#define  PCID_PCID_LINE_2_reg                                                    0xB802EF14
#define  PCID_PCID_LINE_2_inst_addr                                              "0x0004"
#define  set_PCID_PCID_LINE_2_reg(data)                                          (*((volatile unsigned int*)PCID_PCID_LINE_2_reg)=data)
#define  get_PCID_PCID_LINE_2_reg                                                (*((volatile unsigned int*)PCID_PCID_LINE_2_reg))
#define  PCID_PCID_LINE_2_line2_odd_b_color_select_shift                         (30)
#define  PCID_PCID_LINE_2_line2_odd_g_color_select_shift                         (28)
#define  PCID_PCID_LINE_2_line2_odd_r_color_select_shift                         (26)
#define  PCID_PCID_LINE_2_line2_odd_b_point_select_shift                         (24)
#define  PCID_PCID_LINE_2_line2_odd_g_point_select_shift                         (22)
#define  PCID_PCID_LINE_2_line2_odd_r_point_select_shift                         (20)
#define  PCID_PCID_LINE_2_line2_odd_b_line_select_shift                          (18)
#define  PCID_PCID_LINE_2_line2_odd_g_line_select_shift                          (17)
#define  PCID_PCID_LINE_2_line2_odd_r_line_select_shift                          (16)
#define  PCID_PCID_LINE_2_line2_even_b_color_select_shift                        (14)
#define  PCID_PCID_LINE_2_line2_even_g_color_select_shift                        (12)
#define  PCID_PCID_LINE_2_line2_even_r_color_select_shift                        (10)
#define  PCID_PCID_LINE_2_line2_even_b_point_select_shift                        (8)
#define  PCID_PCID_LINE_2_line2_even_g_point_select_shift                        (6)
#define  PCID_PCID_LINE_2_line2_even_r_point_select_shift                        (4)
#define  PCID_PCID_LINE_2_line2_even_b_line_select_shift                         (2)
#define  PCID_PCID_LINE_2_line2_even_g_line_select_shift                         (1)
#define  PCID_PCID_LINE_2_line2_even_r_line_select_shift                         (0)
#define  PCID_PCID_LINE_2_line2_odd_b_color_select_mask                          (0xC0000000)
#define  PCID_PCID_LINE_2_line2_odd_g_color_select_mask                          (0x30000000)
#define  PCID_PCID_LINE_2_line2_odd_r_color_select_mask                          (0x0C000000)
#define  PCID_PCID_LINE_2_line2_odd_b_point_select_mask                          (0x03000000)
#define  PCID_PCID_LINE_2_line2_odd_g_point_select_mask                          (0x00C00000)
#define  PCID_PCID_LINE_2_line2_odd_r_point_select_mask                          (0x00300000)
#define  PCID_PCID_LINE_2_line2_odd_b_line_select_mask                           (0x00040000)
#define  PCID_PCID_LINE_2_line2_odd_g_line_select_mask                           (0x00020000)
#define  PCID_PCID_LINE_2_line2_odd_r_line_select_mask                           (0x00010000)
#define  PCID_PCID_LINE_2_line2_even_b_color_select_mask                         (0x0000C000)
#define  PCID_PCID_LINE_2_line2_even_g_color_select_mask                         (0x00003000)
#define  PCID_PCID_LINE_2_line2_even_r_color_select_mask                         (0x00000C00)
#define  PCID_PCID_LINE_2_line2_even_b_point_select_mask                         (0x00000300)
#define  PCID_PCID_LINE_2_line2_even_g_point_select_mask                         (0x000000C0)
#define  PCID_PCID_LINE_2_line2_even_r_point_select_mask                         (0x00000030)
#define  PCID_PCID_LINE_2_line2_even_b_line_select_mask                          (0x00000004)
#define  PCID_PCID_LINE_2_line2_even_g_line_select_mask                          (0x00000002)
#define  PCID_PCID_LINE_2_line2_even_r_line_select_mask                          (0x00000001)
#define  PCID_PCID_LINE_2_line2_odd_b_color_select(data)                         (0xC0000000&((data)<<30))
#define  PCID_PCID_LINE_2_line2_odd_g_color_select(data)                         (0x30000000&((data)<<28))
#define  PCID_PCID_LINE_2_line2_odd_r_color_select(data)                         (0x0C000000&((data)<<26))
#define  PCID_PCID_LINE_2_line2_odd_b_point_select(data)                         (0x03000000&((data)<<24))
#define  PCID_PCID_LINE_2_line2_odd_g_point_select(data)                         (0x00C00000&((data)<<22))
#define  PCID_PCID_LINE_2_line2_odd_r_point_select(data)                         (0x00300000&((data)<<20))
#define  PCID_PCID_LINE_2_line2_odd_b_line_select(data)                          (0x00040000&((data)<<18))
#define  PCID_PCID_LINE_2_line2_odd_g_line_select(data)                          (0x00020000&((data)<<17))
#define  PCID_PCID_LINE_2_line2_odd_r_line_select(data)                          (0x00010000&((data)<<16))
#define  PCID_PCID_LINE_2_line2_even_b_color_select(data)                        (0x0000C000&((data)<<14))
#define  PCID_PCID_LINE_2_line2_even_g_color_select(data)                        (0x00003000&((data)<<12))
#define  PCID_PCID_LINE_2_line2_even_r_color_select(data)                        (0x00000C00&((data)<<10))
#define  PCID_PCID_LINE_2_line2_even_b_point_select(data)                        (0x00000300&((data)<<8))
#define  PCID_PCID_LINE_2_line2_even_g_point_select(data)                        (0x000000C0&((data)<<6))
#define  PCID_PCID_LINE_2_line2_even_r_point_select(data)                        (0x00000030&((data)<<4))
#define  PCID_PCID_LINE_2_line2_even_b_line_select(data)                         (0x00000004&((data)<<2))
#define  PCID_PCID_LINE_2_line2_even_g_line_select(data)                         (0x00000002&((data)<<1))
#define  PCID_PCID_LINE_2_line2_even_r_line_select(data)                         (0x00000001&(data))
#define  PCID_PCID_LINE_2_get_line2_odd_b_color_select(data)                     ((0xC0000000&(data))>>30)
#define  PCID_PCID_LINE_2_get_line2_odd_g_color_select(data)                     ((0x30000000&(data))>>28)
#define  PCID_PCID_LINE_2_get_line2_odd_r_color_select(data)                     ((0x0C000000&(data))>>26)
#define  PCID_PCID_LINE_2_get_line2_odd_b_point_select(data)                     ((0x03000000&(data))>>24)
#define  PCID_PCID_LINE_2_get_line2_odd_g_point_select(data)                     ((0x00C00000&(data))>>22)
#define  PCID_PCID_LINE_2_get_line2_odd_r_point_select(data)                     ((0x00300000&(data))>>20)
#define  PCID_PCID_LINE_2_get_line2_odd_b_line_select(data)                      ((0x00040000&(data))>>18)
#define  PCID_PCID_LINE_2_get_line2_odd_g_line_select(data)                      ((0x00020000&(data))>>17)
#define  PCID_PCID_LINE_2_get_line2_odd_r_line_select(data)                      ((0x00010000&(data))>>16)
#define  PCID_PCID_LINE_2_get_line2_even_b_color_select(data)                    ((0x0000C000&(data))>>14)
#define  PCID_PCID_LINE_2_get_line2_even_g_color_select(data)                    ((0x00003000&(data))>>12)
#define  PCID_PCID_LINE_2_get_line2_even_r_color_select(data)                    ((0x00000C00&(data))>>10)
#define  PCID_PCID_LINE_2_get_line2_even_b_point_select(data)                    ((0x00000300&(data))>>8)
#define  PCID_PCID_LINE_2_get_line2_even_g_point_select(data)                    ((0x000000C0&(data))>>6)
#define  PCID_PCID_LINE_2_get_line2_even_r_point_select(data)                    ((0x00000030&(data))>>4)
#define  PCID_PCID_LINE_2_get_line2_even_b_line_select(data)                     ((0x00000004&(data))>>2)
#define  PCID_PCID_LINE_2_get_line2_even_g_line_select(data)                     ((0x00000002&(data))>>1)
#define  PCID_PCID_LINE_2_get_line2_even_r_line_select(data)                     (0x00000001&(data))

#define  PCID_PCID_LINE_3                                                       0x1802EF18
#define  PCID_PCID_LINE_3_reg_addr                                               "0xB802EF18"
#define  PCID_PCID_LINE_3_reg                                                    0xB802EF18
#define  PCID_PCID_LINE_3_inst_addr                                              "0x0005"
#define  set_PCID_PCID_LINE_3_reg(data)                                          (*((volatile unsigned int*)PCID_PCID_LINE_3_reg)=data)
#define  get_PCID_PCID_LINE_3_reg                                                (*((volatile unsigned int*)PCID_PCID_LINE_3_reg))
#define  PCID_PCID_LINE_3_line3_odd_b_color_select_shift                         (30)
#define  PCID_PCID_LINE_3_line3_odd_g_color_select_shift                         (28)
#define  PCID_PCID_LINE_3_line3_odd_r_color_select_shift                         (26)
#define  PCID_PCID_LINE_3_line3_odd_b_point_select_shift                         (24)
#define  PCID_PCID_LINE_3_line3_odd_g_point_select_shift                         (22)
#define  PCID_PCID_LINE_3_line3_odd_r_point_select_shift                         (20)
#define  PCID_PCID_LINE_3_line3_odd_b_line_select_shift                          (18)
#define  PCID_PCID_LINE_3_line3_odd_g_line_select_shift                          (17)
#define  PCID_PCID_LINE_3_line3_odd_r_line_select_shift                          (16)
#define  PCID_PCID_LINE_3_line3_even_b_color_select_shift                        (14)
#define  PCID_PCID_LINE_3_line3_even_g_color_select_shift                        (12)
#define  PCID_PCID_LINE_3_line3_even_r_color_select_shift                        (10)
#define  PCID_PCID_LINE_3_line3_even_b_point_select_shift                        (8)
#define  PCID_PCID_LINE_3_line3_even_g_point_select_shift                        (6)
#define  PCID_PCID_LINE_3_line3_even_r_point_select_shift                        (4)
#define  PCID_PCID_LINE_3_line3_even_b_line_select_shift                         (2)
#define  PCID_PCID_LINE_3_line3_even_g_line_select_shift                         (1)
#define  PCID_PCID_LINE_3_line3_even_r_line_select_shift                         (0)
#define  PCID_PCID_LINE_3_line3_odd_b_color_select_mask                          (0xC0000000)
#define  PCID_PCID_LINE_3_line3_odd_g_color_select_mask                          (0x30000000)
#define  PCID_PCID_LINE_3_line3_odd_r_color_select_mask                          (0x0C000000)
#define  PCID_PCID_LINE_3_line3_odd_b_point_select_mask                          (0x03000000)
#define  PCID_PCID_LINE_3_line3_odd_g_point_select_mask                          (0x00C00000)
#define  PCID_PCID_LINE_3_line3_odd_r_point_select_mask                          (0x00300000)
#define  PCID_PCID_LINE_3_line3_odd_b_line_select_mask                           (0x00040000)
#define  PCID_PCID_LINE_3_line3_odd_g_line_select_mask                           (0x00020000)
#define  PCID_PCID_LINE_3_line3_odd_r_line_select_mask                           (0x00010000)
#define  PCID_PCID_LINE_3_line3_even_b_color_select_mask                         (0x0000C000)
#define  PCID_PCID_LINE_3_line3_even_g_color_select_mask                         (0x00003000)
#define  PCID_PCID_LINE_3_line3_even_r_color_select_mask                         (0x00000C00)
#define  PCID_PCID_LINE_3_line3_even_b_point_select_mask                         (0x00000300)
#define  PCID_PCID_LINE_3_line3_even_g_point_select_mask                         (0x000000C0)
#define  PCID_PCID_LINE_3_line3_even_r_point_select_mask                         (0x00000030)
#define  PCID_PCID_LINE_3_line3_even_b_line_select_mask                          (0x00000004)
#define  PCID_PCID_LINE_3_line3_even_g_line_select_mask                          (0x00000002)
#define  PCID_PCID_LINE_3_line3_even_r_line_select_mask                          (0x00000001)
#define  PCID_PCID_LINE_3_line3_odd_b_color_select(data)                         (0xC0000000&((data)<<30))
#define  PCID_PCID_LINE_3_line3_odd_g_color_select(data)                         (0x30000000&((data)<<28))
#define  PCID_PCID_LINE_3_line3_odd_r_color_select(data)                         (0x0C000000&((data)<<26))
#define  PCID_PCID_LINE_3_line3_odd_b_point_select(data)                         (0x03000000&((data)<<24))
#define  PCID_PCID_LINE_3_line3_odd_g_point_select(data)                         (0x00C00000&((data)<<22))
#define  PCID_PCID_LINE_3_line3_odd_r_point_select(data)                         (0x00300000&((data)<<20))
#define  PCID_PCID_LINE_3_line3_odd_b_line_select(data)                          (0x00040000&((data)<<18))
#define  PCID_PCID_LINE_3_line3_odd_g_line_select(data)                          (0x00020000&((data)<<17))
#define  PCID_PCID_LINE_3_line3_odd_r_line_select(data)                          (0x00010000&((data)<<16))
#define  PCID_PCID_LINE_3_line3_even_b_color_select(data)                        (0x0000C000&((data)<<14))
#define  PCID_PCID_LINE_3_line3_even_g_color_select(data)                        (0x00003000&((data)<<12))
#define  PCID_PCID_LINE_3_line3_even_r_color_select(data)                        (0x00000C00&((data)<<10))
#define  PCID_PCID_LINE_3_line3_even_b_point_select(data)                        (0x00000300&((data)<<8))
#define  PCID_PCID_LINE_3_line3_even_g_point_select(data)                        (0x000000C0&((data)<<6))
#define  PCID_PCID_LINE_3_line3_even_r_point_select(data)                        (0x00000030&((data)<<4))
#define  PCID_PCID_LINE_3_line3_even_b_line_select(data)                         (0x00000004&((data)<<2))
#define  PCID_PCID_LINE_3_line3_even_g_line_select(data)                         (0x00000002&((data)<<1))
#define  PCID_PCID_LINE_3_line3_even_r_line_select(data)                         (0x00000001&(data))
#define  PCID_PCID_LINE_3_get_line3_odd_b_color_select(data)                     ((0xC0000000&(data))>>30)
#define  PCID_PCID_LINE_3_get_line3_odd_g_color_select(data)                     ((0x30000000&(data))>>28)
#define  PCID_PCID_LINE_3_get_line3_odd_r_color_select(data)                     ((0x0C000000&(data))>>26)
#define  PCID_PCID_LINE_3_get_line3_odd_b_point_select(data)                     ((0x03000000&(data))>>24)
#define  PCID_PCID_LINE_3_get_line3_odd_g_point_select(data)                     ((0x00C00000&(data))>>22)
#define  PCID_PCID_LINE_3_get_line3_odd_r_point_select(data)                     ((0x00300000&(data))>>20)
#define  PCID_PCID_LINE_3_get_line3_odd_b_line_select(data)                      ((0x00040000&(data))>>18)
#define  PCID_PCID_LINE_3_get_line3_odd_g_line_select(data)                      ((0x00020000&(data))>>17)
#define  PCID_PCID_LINE_3_get_line3_odd_r_line_select(data)                      ((0x00010000&(data))>>16)
#define  PCID_PCID_LINE_3_get_line3_even_b_color_select(data)                    ((0x0000C000&(data))>>14)
#define  PCID_PCID_LINE_3_get_line3_even_g_color_select(data)                    ((0x00003000&(data))>>12)
#define  PCID_PCID_LINE_3_get_line3_even_r_color_select(data)                    ((0x00000C00&(data))>>10)
#define  PCID_PCID_LINE_3_get_line3_even_b_point_select(data)                    ((0x00000300&(data))>>8)
#define  PCID_PCID_LINE_3_get_line3_even_g_point_select(data)                    ((0x000000C0&(data))>>6)
#define  PCID_PCID_LINE_3_get_line3_even_r_point_select(data)                    ((0x00000030&(data))>>4)
#define  PCID_PCID_LINE_3_get_line3_even_b_line_select(data)                     ((0x00000004&(data))>>2)
#define  PCID_PCID_LINE_3_get_line3_even_g_line_select(data)                     ((0x00000002&(data))>>1)
#define  PCID_PCID_LINE_3_get_line3_even_r_line_select(data)                     (0x00000001&(data))

#define  PCID_PCID_LINE_4                                                       0x1802EF1C
#define  PCID_PCID_LINE_4_reg_addr                                               "0xB802EF1C"
#define  PCID_PCID_LINE_4_reg                                                    0xB802EF1C
#define  PCID_PCID_LINE_4_inst_addr                                              "0x0006"
#define  set_PCID_PCID_LINE_4_reg(data)                                          (*((volatile unsigned int*)PCID_PCID_LINE_4_reg)=data)
#define  get_PCID_PCID_LINE_4_reg                                                (*((volatile unsigned int*)PCID_PCID_LINE_4_reg))
#define  PCID_PCID_LINE_4_line4_odd_b_color_select_shift                         (30)
#define  PCID_PCID_LINE_4_line4_odd_g_color_select_shift                         (28)
#define  PCID_PCID_LINE_4_line4_odd_r_color_select_shift                         (26)
#define  PCID_PCID_LINE_4_line4_odd_b_point_select_shift                         (24)
#define  PCID_PCID_LINE_4_line4_odd_g_point_select_shift                         (22)
#define  PCID_PCID_LINE_4_line4_odd_r_point_select_shift                         (20)
#define  PCID_PCID_LINE_4_line4_odd_b_line_select_shift                          (18)
#define  PCID_PCID_LINE_4_line4_odd_g_line_select_shift                          (17)
#define  PCID_PCID_LINE_4_line4_odd_r_line_select_shift                          (16)
#define  PCID_PCID_LINE_4_line4_even_b_color_select_shift                        (14)
#define  PCID_PCID_LINE_4_line4_even_g_color_select_shift                        (12)
#define  PCID_PCID_LINE_4_line4_even_r_color_select_shift                        (10)
#define  PCID_PCID_LINE_4_line4_even_b_point_select_shift                        (8)
#define  PCID_PCID_LINE_4_line4_even_g_point_select_shift                        (6)
#define  PCID_PCID_LINE_4_line4_even_r_point_select_shift                        (4)
#define  PCID_PCID_LINE_4_line4_even_b_line_select_shift                         (2)
#define  PCID_PCID_LINE_4_line4_even_g_line_select_shift                         (1)
#define  PCID_PCID_LINE_4_line4_even_r_line_select_shift                         (0)
#define  PCID_PCID_LINE_4_line4_odd_b_color_select_mask                          (0xC0000000)
#define  PCID_PCID_LINE_4_line4_odd_g_color_select_mask                          (0x30000000)
#define  PCID_PCID_LINE_4_line4_odd_r_color_select_mask                          (0x0C000000)
#define  PCID_PCID_LINE_4_line4_odd_b_point_select_mask                          (0x03000000)
#define  PCID_PCID_LINE_4_line4_odd_g_point_select_mask                          (0x00C00000)
#define  PCID_PCID_LINE_4_line4_odd_r_point_select_mask                          (0x00300000)
#define  PCID_PCID_LINE_4_line4_odd_b_line_select_mask                           (0x00040000)
#define  PCID_PCID_LINE_4_line4_odd_g_line_select_mask                           (0x00020000)
#define  PCID_PCID_LINE_4_line4_odd_r_line_select_mask                           (0x00010000)
#define  PCID_PCID_LINE_4_line4_even_b_color_select_mask                         (0x0000C000)
#define  PCID_PCID_LINE_4_line4_even_g_color_select_mask                         (0x00003000)
#define  PCID_PCID_LINE_4_line4_even_r_color_select_mask                         (0x00000C00)
#define  PCID_PCID_LINE_4_line4_even_b_point_select_mask                         (0x00000300)
#define  PCID_PCID_LINE_4_line4_even_g_point_select_mask                         (0x000000C0)
#define  PCID_PCID_LINE_4_line4_even_r_point_select_mask                         (0x00000030)
#define  PCID_PCID_LINE_4_line4_even_b_line_select_mask                          (0x00000004)
#define  PCID_PCID_LINE_4_line4_even_g_line_select_mask                          (0x00000002)
#define  PCID_PCID_LINE_4_line4_even_r_line_select_mask                          (0x00000001)
#define  PCID_PCID_LINE_4_line4_odd_b_color_select(data)                         (0xC0000000&((data)<<30))
#define  PCID_PCID_LINE_4_line4_odd_g_color_select(data)                         (0x30000000&((data)<<28))
#define  PCID_PCID_LINE_4_line4_odd_r_color_select(data)                         (0x0C000000&((data)<<26))
#define  PCID_PCID_LINE_4_line4_odd_b_point_select(data)                         (0x03000000&((data)<<24))
#define  PCID_PCID_LINE_4_line4_odd_g_point_select(data)                         (0x00C00000&((data)<<22))
#define  PCID_PCID_LINE_4_line4_odd_r_point_select(data)                         (0x00300000&((data)<<20))
#define  PCID_PCID_LINE_4_line4_odd_b_line_select(data)                          (0x00040000&((data)<<18))
#define  PCID_PCID_LINE_4_line4_odd_g_line_select(data)                          (0x00020000&((data)<<17))
#define  PCID_PCID_LINE_4_line4_odd_r_line_select(data)                          (0x00010000&((data)<<16))
#define  PCID_PCID_LINE_4_line4_even_b_color_select(data)                        (0x0000C000&((data)<<14))
#define  PCID_PCID_LINE_4_line4_even_g_color_select(data)                        (0x00003000&((data)<<12))
#define  PCID_PCID_LINE_4_line4_even_r_color_select(data)                        (0x00000C00&((data)<<10))
#define  PCID_PCID_LINE_4_line4_even_b_point_select(data)                        (0x00000300&((data)<<8))
#define  PCID_PCID_LINE_4_line4_even_g_point_select(data)                        (0x000000C0&((data)<<6))
#define  PCID_PCID_LINE_4_line4_even_r_point_select(data)                        (0x00000030&((data)<<4))
#define  PCID_PCID_LINE_4_line4_even_b_line_select(data)                         (0x00000004&((data)<<2))
#define  PCID_PCID_LINE_4_line4_even_g_line_select(data)                         (0x00000002&((data)<<1))
#define  PCID_PCID_LINE_4_line4_even_r_line_select(data)                         (0x00000001&(data))
#define  PCID_PCID_LINE_4_get_line4_odd_b_color_select(data)                     ((0xC0000000&(data))>>30)
#define  PCID_PCID_LINE_4_get_line4_odd_g_color_select(data)                     ((0x30000000&(data))>>28)
#define  PCID_PCID_LINE_4_get_line4_odd_r_color_select(data)                     ((0x0C000000&(data))>>26)
#define  PCID_PCID_LINE_4_get_line4_odd_b_point_select(data)                     ((0x03000000&(data))>>24)
#define  PCID_PCID_LINE_4_get_line4_odd_g_point_select(data)                     ((0x00C00000&(data))>>22)
#define  PCID_PCID_LINE_4_get_line4_odd_r_point_select(data)                     ((0x00300000&(data))>>20)
#define  PCID_PCID_LINE_4_get_line4_odd_b_line_select(data)                      ((0x00040000&(data))>>18)
#define  PCID_PCID_LINE_4_get_line4_odd_g_line_select(data)                      ((0x00020000&(data))>>17)
#define  PCID_PCID_LINE_4_get_line4_odd_r_line_select(data)                      ((0x00010000&(data))>>16)
#define  PCID_PCID_LINE_4_get_line4_even_b_color_select(data)                    ((0x0000C000&(data))>>14)
#define  PCID_PCID_LINE_4_get_line4_even_g_color_select(data)                    ((0x00003000&(data))>>12)
#define  PCID_PCID_LINE_4_get_line4_even_r_color_select(data)                    ((0x00000C00&(data))>>10)
#define  PCID_PCID_LINE_4_get_line4_even_b_point_select(data)                    ((0x00000300&(data))>>8)
#define  PCID_PCID_LINE_4_get_line4_even_g_point_select(data)                    ((0x000000C0&(data))>>6)
#define  PCID_PCID_LINE_4_get_line4_even_r_point_select(data)                    ((0x00000030&(data))>>4)
#define  PCID_PCID_LINE_4_get_line4_even_b_line_select(data)                     ((0x00000004&(data))>>2)
#define  PCID_PCID_LINE_4_get_line4_even_g_line_select(data)                     ((0x00000002&(data))>>1)
#define  PCID_PCID_LINE_4_get_line4_even_r_line_select(data)                     (0x00000001&(data))

#define  PCID_PCID_RM                                                           0x1802EFA0
#define  PCID_PCID_RM_reg_addr                                                   "0xB802EFA0"
#define  PCID_PCID_RM_reg                                                        0xB802EFA0
#define  PCID_PCID_RM_inst_addr                                                  "0x0007"
#define  set_PCID_PCID_RM_reg(data)                                              (*((volatile unsigned int*)PCID_PCID_RM_reg)=data)
#define  get_PCID_PCID_RM_reg                                                    (*((volatile unsigned int*)PCID_PCID_RM_reg))
#define  PCID_PCID_RM_pcid_lb_rm_1_shift                                         (4)
#define  PCID_PCID_RM_pcid_lb_rm_0_shift                                         (0)
#define  PCID_PCID_RM_pcid_lb_rm_1_mask                                          (0x000000F0)
#define  PCID_PCID_RM_pcid_lb_rm_0_mask                                          (0x0000000F)
#define  PCID_PCID_RM_pcid_lb_rm_1(data)                                         (0x000000F0&((data)<<4))
#define  PCID_PCID_RM_pcid_lb_rm_0(data)                                         (0x0000000F&(data))
#define  PCID_PCID_RM_get_pcid_lb_rm_1(data)                                     ((0x000000F0&(data))>>4)
#define  PCID_PCID_RM_get_pcid_lb_rm_0(data)                                     (0x0000000F&(data))

#define  PCID_PCID_RME_LS                                                       0x1802EFA4
#define  PCID_PCID_RME_LS_reg_addr                                               "0xB802EFA4"
#define  PCID_PCID_RME_LS_reg                                                    0xB802EFA4
#define  PCID_PCID_RME_LS_inst_addr                                              "0x0008"
#define  set_PCID_PCID_RME_LS_reg(data)                                          (*((volatile unsigned int*)PCID_PCID_RME_LS_reg)=data)
#define  get_PCID_PCID_RME_LS_reg                                                (*((volatile unsigned int*)PCID_PCID_RME_LS_reg))
#define  PCID_PCID_RME_LS_pcid_lb_ls_1_shift                                     (17)
#define  PCID_PCID_RME_LS_pcid_lb_ls_0_shift                                     (16)
#define  PCID_PCID_RME_LS_pcid_lb_rme_1_shift                                    (1)
#define  PCID_PCID_RME_LS_pcid_lb_rme_0_shift                                    (0)
#define  PCID_PCID_RME_LS_pcid_lb_ls_1_mask                                      (0x00020000)
#define  PCID_PCID_RME_LS_pcid_lb_ls_0_mask                                      (0x00010000)
#define  PCID_PCID_RME_LS_pcid_lb_rme_1_mask                                     (0x00000002)
#define  PCID_PCID_RME_LS_pcid_lb_rme_0_mask                                     (0x00000001)
#define  PCID_PCID_RME_LS_pcid_lb_ls_1(data)                                     (0x00020000&((data)<<17))
#define  PCID_PCID_RME_LS_pcid_lb_ls_0(data)                                     (0x00010000&((data)<<16))
#define  PCID_PCID_RME_LS_pcid_lb_rme_1(data)                                    (0x00000002&((data)<<1))
#define  PCID_PCID_RME_LS_pcid_lb_rme_0(data)                                    (0x00000001&(data))
#define  PCID_PCID_RME_LS_get_pcid_lb_ls_1(data)                                 ((0x00020000&(data))>>17)
#define  PCID_PCID_RME_LS_get_pcid_lb_ls_0(data)                                 ((0x00010000&(data))>>16)
#define  PCID_PCID_RME_LS_get_pcid_lb_rme_1(data)                                ((0x00000002&(data))>>1)
#define  PCID_PCID_RME_LS_get_pcid_lb_rme_0(data)                                (0x00000001&(data))

#define  PCID_PCID_FAIL                                                         0x1802EFA8
#define  PCID_PCID_FAIL_reg_addr                                                 "0xB802EFA8"
#define  PCID_PCID_FAIL_reg                                                      0xB802EFA8
#define  PCID_PCID_FAIL_inst_addr                                                "0x0009"
#define  set_PCID_PCID_FAIL_reg(data)                                            (*((volatile unsigned int*)PCID_PCID_FAIL_reg)=data)
#define  get_PCID_PCID_FAIL_reg                                                  (*((volatile unsigned int*)PCID_PCID_FAIL_reg))
#define  PCID_PCID_FAIL_pcid_lb_drf_fail_1_shift                                 (17)
#define  PCID_PCID_FAIL_pcid_lb_drf_fail_0_shift                                 (16)
#define  PCID_PCID_FAIL_pcid_lb_bist_fail_1_shift                                (1)
#define  PCID_PCID_FAIL_pcid_lb_bist_fail_0_shift                                (0)
#define  PCID_PCID_FAIL_pcid_lb_drf_fail_1_mask                                  (0x00020000)
#define  PCID_PCID_FAIL_pcid_lb_drf_fail_0_mask                                  (0x00010000)
#define  PCID_PCID_FAIL_pcid_lb_bist_fail_1_mask                                 (0x00000002)
#define  PCID_PCID_FAIL_pcid_lb_bist_fail_0_mask                                 (0x00000001)
#define  PCID_PCID_FAIL_pcid_lb_drf_fail_1(data)                                 (0x00020000&((data)<<17))
#define  PCID_PCID_FAIL_pcid_lb_drf_fail_0(data)                                 (0x00010000&((data)<<16))
#define  PCID_PCID_FAIL_pcid_lb_bist_fail_1(data)                                (0x00000002&((data)<<1))
#define  PCID_PCID_FAIL_pcid_lb_bist_fail_0(data)                                (0x00000001&(data))
#define  PCID_PCID_FAIL_get_pcid_lb_drf_fail_1(data)                             ((0x00020000&(data))>>17)
#define  PCID_PCID_FAIL_get_pcid_lb_drf_fail_0(data)                             ((0x00010000&(data))>>16)
#define  PCID_PCID_FAIL_get_pcid_lb_bist_fail_1(data)                            ((0x00000002&(data))>>1)
#define  PCID_PCID_FAIL_get_pcid_lb_bist_fail_0(data)                            (0x00000001&(data))

#define  PCID_PCID_TESTRWM                                                      0x1802EFAC
#define  PCID_PCID_TESTRWM_reg_addr                                              "0xB802EFAC"
#define  PCID_PCID_TESTRWM_reg                                                   0xB802EFAC
#define  PCID_PCID_TESTRWM_inst_addr                                             "0x000A"
#define  set_PCID_PCID_TESTRWM_reg(data)                                         (*((volatile unsigned int*)PCID_PCID_TESTRWM_reg)=data)
#define  get_PCID_PCID_TESTRWM_reg                                               (*((volatile unsigned int*)PCID_PCID_TESTRWM_reg))
#define  PCID_PCID_TESTRWM_pcid_lb_testrwm_1_shift                               (1)
#define  PCID_PCID_TESTRWM_pcid_lb_testrwm_0_shift                               (0)
#define  PCID_PCID_TESTRWM_pcid_lb_testrwm_1_mask                                (0x00000002)
#define  PCID_PCID_TESTRWM_pcid_lb_testrwm_0_mask                                (0x00000001)
#define  PCID_PCID_TESTRWM_pcid_lb_testrwm_1(data)                               (0x00000002&((data)<<1))
#define  PCID_PCID_TESTRWM_pcid_lb_testrwm_0(data)                               (0x00000001&(data))
#define  PCID_PCID_TESTRWM_get_pcid_lb_testrwm_1(data)                           ((0x00000002&(data))>>1)
#define  PCID_PCID_TESTRWM_get_pcid_lb_testrwm_0(data)                           (0x00000001&(data))

#define  PCID_PCID_LUT_ADDR                                                     0x1802EF20
#define  PCID_PCID_LUT_ADDR_reg_addr                                             "0xB802EF20"
#define  PCID_PCID_LUT_ADDR_reg                                                  0xB802EF20
#define  PCID_PCID_LUT_ADDR_inst_addr                                            "0x000B"
#define  set_PCID_PCID_LUT_ADDR_reg(data)                                        (*((volatile unsigned int*)PCID_PCID_LUT_ADDR_reg)=data)
#define  get_PCID_PCID_LUT_ADDR_reg                                              (*((volatile unsigned int*)PCID_PCID_LUT_ADDR_reg))
#define  PCID_PCID_LUT_ADDR_pcid_regional_lut_ax_en_shift                        (21)
#define  PCID_PCID_LUT_ADDR_pcid_regional_lut_sel_shift                          (17)
#define  PCID_PCID_LUT_ADDR_pcid_lut_sel_shift                                   (12)
#define  PCID_PCID_LUT_ADDR_pcid_regional_lut_ax_en_mask                         (0x00200000)
#define  PCID_PCID_LUT_ADDR_pcid_regional_lut_sel_mask                           (0x001E0000)
#define  PCID_PCID_LUT_ADDR_pcid_lut_sel_mask                                    (0x00003000)
#define  PCID_PCID_LUT_ADDR_pcid_regional_lut_ax_en(data)                        (0x00200000&((data)<<21))
#define  PCID_PCID_LUT_ADDR_pcid_regional_lut_sel(data)                          (0x001E0000&((data)<<17))
#define  PCID_PCID_LUT_ADDR_pcid_lut_sel(data)                                   (0x00003000&((data)<<12))
#define  PCID_PCID_LUT_ADDR_get_pcid_regional_lut_ax_en(data)                    ((0x00200000&(data))>>21)
#define  PCID_PCID_LUT_ADDR_get_pcid_regional_lut_sel(data)                      ((0x001E0000&(data))>>17)
#define  PCID_PCID_LUT_ADDR_get_pcid_lut_sel(data)                               ((0x00003000&(data))>>12)

#define  PCID_PCID_LUT_DATA                                                     0x1802EF24
#define  PCID_PCID_LUT_DATA_reg_addr                                             "0xB802EF24"
#define  PCID_PCID_LUT_DATA_reg                                                  0xB802EF24
#define  PCID_PCID_LUT_DATA_inst_addr                                            "0x000C"
#define  set_PCID_PCID_LUT_DATA_reg(data)                                        (*((volatile unsigned int*)PCID_PCID_LUT_DATA_reg)=data)
#define  get_PCID_PCID_LUT_DATA_reg                                              (*((volatile unsigned int*)PCID_PCID_LUT_DATA_reg))
#define  PCID_PCID_LUT_DATA_pcid_lut_data_shift                                  (0)
#define  PCID_PCID_LUT_DATA_pcid_lut_data_mask                                   (0xFFFFFFFF)
#define  PCID_PCID_LUT_DATA_pcid_lut_data(data)                                  (0xFFFFFFFF&(data))
#define  PCID_PCID_LUT_DATA_get_pcid_lut_data(data)                              (0xFFFFFFFF&(data))

#define  PCID_PCID_AccessData_CTRL                                              0x1802EFE0
#define  PCID_PCID_AccessData_CTRL_reg_addr                                      "0xB802EFE0"
#define  PCID_PCID_AccessData_CTRL_reg                                           0xB802EFE0
#define  PCID_PCID_AccessData_CTRL_inst_addr                                     "0x000D"
#define  set_PCID_PCID_AccessData_CTRL_reg(data)                                 (*((volatile unsigned int*)PCID_PCID_AccessData_CTRL_reg)=data)
#define  get_PCID_PCID_AccessData_CTRL_reg                                       (*((volatile unsigned int*)PCID_PCID_AccessData_CTRL_reg))
#define  PCID_PCID_AccessData_CTRL_access_location_sel_shift                     (3)
#define  PCID_PCID_AccessData_CTRL_access_cross_bar_en_shift                     (2)
#define  PCID_PCID_AccessData_CTRL_access_write_en_shift                         (1)
#define  PCID_PCID_AccessData_CTRL_access_read_en_shift                          (0)
#define  PCID_PCID_AccessData_CTRL_access_location_sel_mask                      (0x00000008)
#define  PCID_PCID_AccessData_CTRL_access_cross_bar_en_mask                      (0x00000004)
#define  PCID_PCID_AccessData_CTRL_access_write_en_mask                          (0x00000002)
#define  PCID_PCID_AccessData_CTRL_access_read_en_mask                           (0x00000001)
#define  PCID_PCID_AccessData_CTRL_access_location_sel(data)                     (0x00000008&((data)<<3))
#define  PCID_PCID_AccessData_CTRL_access_cross_bar_en(data)                     (0x00000004&((data)<<2))
#define  PCID_PCID_AccessData_CTRL_access_write_en(data)                         (0x00000002&((data)<<1))
#define  PCID_PCID_AccessData_CTRL_access_read_en(data)                          (0x00000001&(data))
#define  PCID_PCID_AccessData_CTRL_get_access_location_sel(data)                 ((0x00000008&(data))>>3)
#define  PCID_PCID_AccessData_CTRL_get_access_cross_bar_en(data)                 ((0x00000004&(data))>>2)
#define  PCID_PCID_AccessData_CTRL_get_access_write_en(data)                     ((0x00000002&(data))>>1)
#define  PCID_PCID_AccessData_CTRL_get_access_read_en(data)                      (0x00000001&(data))

#define  PCID_PCID_AccessData_PosCtrl                                           0x1802EFE4
#define  PCID_PCID_AccessData_PosCtrl_reg_addr                                   "0xB802EFE4"
#define  PCID_PCID_AccessData_PosCtrl_reg                                        0xB802EFE4
#define  PCID_PCID_AccessData_PosCtrl_inst_addr                                  "0x000E"
#define  set_PCID_PCID_AccessData_PosCtrl_reg(data)                              (*((volatile unsigned int*)PCID_PCID_AccessData_PosCtrl_reg)=data)
#define  get_PCID_PCID_AccessData_PosCtrl_reg                                    (*((volatile unsigned int*)PCID_PCID_AccessData_PosCtrl_reg))
#define  PCID_PCID_AccessData_PosCtrl_access_starty_shift                        (16)
#define  PCID_PCID_AccessData_PosCtrl_access_startx_shift                        (0)
#define  PCID_PCID_AccessData_PosCtrl_access_starty_mask                         (0x0FFF0000)
#define  PCID_PCID_AccessData_PosCtrl_access_startx_mask                         (0x00000FFF)
#define  PCID_PCID_AccessData_PosCtrl_access_starty(data)                        (0x0FFF0000&((data)<<16))
#define  PCID_PCID_AccessData_PosCtrl_access_startx(data)                        (0x00000FFF&(data))
#define  PCID_PCID_AccessData_PosCtrl_get_access_starty(data)                    ((0x0FFF0000&(data))>>16)
#define  PCID_PCID_AccessData_PosCtrl_get_access_startx(data)                    (0x00000FFF&(data))

#define  PCID_PCID_AccessData_R                                                 0x1802EFE8
#define  PCID_PCID_AccessData_R_reg_addr                                         "0xB802EFE8"
#define  PCID_PCID_AccessData_R_reg                                              0xB802EFE8
#define  PCID_PCID_AccessData_R_inst_addr                                        "0x000F"
#define  set_PCID_PCID_AccessData_R_reg(data)                                    (*((volatile unsigned int*)PCID_PCID_AccessData_R_reg)=data)
#define  get_PCID_PCID_AccessData_R_reg                                          (*((volatile unsigned int*)PCID_PCID_AccessData_R_reg))
#define  PCID_PCID_AccessData_R_access_read_r_shift                              (16)
#define  PCID_PCID_AccessData_R_access_write_r_shift                             (0)
#define  PCID_PCID_AccessData_R_access_read_r_mask                               (0x0FFF0000)
#define  PCID_PCID_AccessData_R_access_write_r_mask                              (0x00000FFF)
#define  PCID_PCID_AccessData_R_access_read_r(data)                              (0x0FFF0000&((data)<<16))
#define  PCID_PCID_AccessData_R_access_write_r(data)                             (0x00000FFF&(data))
#define  PCID_PCID_AccessData_R_get_access_read_r(data)                          ((0x0FFF0000&(data))>>16)
#define  PCID_PCID_AccessData_R_get_access_write_r(data)                         (0x00000FFF&(data))

#define  PCID_PCID_AccessData_G                                                 0x1802EFEC
#define  PCID_PCID_AccessData_G_reg_addr                                         "0xB802EFEC"
#define  PCID_PCID_AccessData_G_reg                                              0xB802EFEC
#define  PCID_PCID_AccessData_G_inst_addr                                        "0x0010"
#define  set_PCID_PCID_AccessData_G_reg(data)                                    (*((volatile unsigned int*)PCID_PCID_AccessData_G_reg)=data)
#define  get_PCID_PCID_AccessData_G_reg                                          (*((volatile unsigned int*)PCID_PCID_AccessData_G_reg))
#define  PCID_PCID_AccessData_G_access_read_g_shift                              (16)
#define  PCID_PCID_AccessData_G_access_write_g_shift                             (0)
#define  PCID_PCID_AccessData_G_access_read_g_mask                               (0x0FFF0000)
#define  PCID_PCID_AccessData_G_access_write_g_mask                              (0x00000FFF)
#define  PCID_PCID_AccessData_G_access_read_g(data)                              (0x0FFF0000&((data)<<16))
#define  PCID_PCID_AccessData_G_access_write_g(data)                             (0x00000FFF&(data))
#define  PCID_PCID_AccessData_G_get_access_read_g(data)                          ((0x0FFF0000&(data))>>16)
#define  PCID_PCID_AccessData_G_get_access_write_g(data)                         (0x00000FFF&(data))

#define  PCID_PCID_AccessData_B                                                 0x1802EFF0
#define  PCID_PCID_AccessData_B_reg_addr                                         "0xB802EFF0"
#define  PCID_PCID_AccessData_B_reg                                              0xB802EFF0
#define  PCID_PCID_AccessData_B_inst_addr                                        "0x0011"
#define  set_PCID_PCID_AccessData_B_reg(data)                                    (*((volatile unsigned int*)PCID_PCID_AccessData_B_reg)=data)
#define  get_PCID_PCID_AccessData_B_reg                                          (*((volatile unsigned int*)PCID_PCID_AccessData_B_reg))
#define  PCID_PCID_AccessData_B_access_read_b_shift                              (16)
#define  PCID_PCID_AccessData_B_access_write_b_shift                             (0)
#define  PCID_PCID_AccessData_B_access_read_b_mask                               (0x0FFF0000)
#define  PCID_PCID_AccessData_B_access_write_b_mask                              (0x00000FFF)
#define  PCID_PCID_AccessData_B_access_read_b(data)                              (0x0FFF0000&((data)<<16))
#define  PCID_PCID_AccessData_B_access_write_b(data)                             (0x00000FFF&(data))
#define  PCID_PCID_AccessData_B_get_access_read_b(data)                          ((0x0FFF0000&(data))>>16)
#define  PCID_PCID_AccessData_B_get_access_write_b(data)                         (0x00000FFF&(data))

#define  PCID_PCID_RegionalTable_Ctrl                                           0x1802EF30
#define  PCID_PCID_RegionalTable_Ctrl_reg_addr                                   "0xB802EF30"
#define  PCID_PCID_RegionalTable_Ctrl_reg                                        0xB802EF30
#define  PCID_PCID_RegionalTable_Ctrl_inst_addr                                  "0x0012"
#define  set_PCID_PCID_RegionalTable_Ctrl_reg(data)                              (*((volatile unsigned int*)PCID_PCID_RegionalTable_Ctrl_reg)=data)
#define  get_PCID_PCID_RegionalTable_Ctrl_reg                                    (*((volatile unsigned int*)PCID_PCID_RegionalTable_Ctrl_reg))
#define  PCID_PCID_RegionalTable_Ctrl_regional_table_en_shift                    (0)
#define  PCID_PCID_RegionalTable_Ctrl_regional_table_en_mask                     (0x00000001)
#define  PCID_PCID_RegionalTable_Ctrl_regional_table_en(data)                    (0x00000001&(data))
#define  PCID_PCID_RegionalTable_Ctrl_get_regional_table_en(data)                (0x00000001&(data))

#define  PCID_PCID_RegionalTable_Index_H                                        0x1802EF34
#define  PCID_PCID_RegionalTable_Index_H_reg_addr                                "0xB802EF34"
#define  PCID_PCID_RegionalTable_Index_H_reg                                     0xB802EF34
#define  PCID_PCID_RegionalTable_Index_H_inst_addr                               "0x0013"
#define  set_PCID_PCID_RegionalTable_Index_H_reg(data)                           (*((volatile unsigned int*)PCID_PCID_RegionalTable_Index_H_reg)=data)
#define  get_PCID_PCID_RegionalTable_Index_H_reg                                 (*((volatile unsigned int*)PCID_PCID_RegionalTable_Index_H_reg))
#define  PCID_PCID_RegionalTable_Index_H_rt_hor_index2_shift                     (20)
#define  PCID_PCID_RegionalTable_Index_H_rt_hor_index1_shift                     (10)
#define  PCID_PCID_RegionalTable_Index_H_rt_hor_index0_shift                     (0)
#define  PCID_PCID_RegionalTable_Index_H_rt_hor_index2_mask                      (0x3FF00000)
#define  PCID_PCID_RegionalTable_Index_H_rt_hor_index1_mask                      (0x000FFC00)
#define  PCID_PCID_RegionalTable_Index_H_rt_hor_index0_mask                      (0x000003FF)
#define  PCID_PCID_RegionalTable_Index_H_rt_hor_index2(data)                     (0x3FF00000&((data)<<20))
#define  PCID_PCID_RegionalTable_Index_H_rt_hor_index1(data)                     (0x000FFC00&((data)<<10))
#define  PCID_PCID_RegionalTable_Index_H_rt_hor_index0(data)                     (0x000003FF&(data))
#define  PCID_PCID_RegionalTable_Index_H_get_rt_hor_index2(data)                 ((0x3FF00000&(data))>>20)
#define  PCID_PCID_RegionalTable_Index_H_get_rt_hor_index1(data)                 ((0x000FFC00&(data))>>10)
#define  PCID_PCID_RegionalTable_Index_H_get_rt_hor_index0(data)                 (0x000003FF&(data))

#define  PCID_PCID_RegionalTable_Index_V                                        0x1802EF38
#define  PCID_PCID_RegionalTable_Index_V_reg_addr                                "0xB802EF38"
#define  PCID_PCID_RegionalTable_Index_V_reg                                     0xB802EF38
#define  PCID_PCID_RegionalTable_Index_V_inst_addr                               "0x0014"
#define  set_PCID_PCID_RegionalTable_Index_V_reg(data)                           (*((volatile unsigned int*)PCID_PCID_RegionalTable_Index_V_reg)=data)
#define  get_PCID_PCID_RegionalTable_Index_V_reg                                 (*((volatile unsigned int*)PCID_PCID_RegionalTable_Index_V_reg))
#define  PCID_PCID_RegionalTable_Index_V_rt_ver_index2_shift                     (20)
#define  PCID_PCID_RegionalTable_Index_V_rt_ver_index1_shift                     (10)
#define  PCID_PCID_RegionalTable_Index_V_rt_ver_index0_shift                     (0)
#define  PCID_PCID_RegionalTable_Index_V_rt_ver_index2_mask                      (0x3FF00000)
#define  PCID_PCID_RegionalTable_Index_V_rt_ver_index1_mask                      (0x000FFC00)
#define  PCID_PCID_RegionalTable_Index_V_rt_ver_index0_mask                      (0x000003FF)
#define  PCID_PCID_RegionalTable_Index_V_rt_ver_index2(data)                     (0x3FF00000&((data)<<20))
#define  PCID_PCID_RegionalTable_Index_V_rt_ver_index1(data)                     (0x000FFC00&((data)<<10))
#define  PCID_PCID_RegionalTable_Index_V_rt_ver_index0(data)                     (0x000003FF&(data))
#define  PCID_PCID_RegionalTable_Index_V_get_rt_ver_index2(data)                 ((0x3FF00000&(data))>>20)
#define  PCID_PCID_RegionalTable_Index_V_get_rt_ver_index1(data)                 ((0x000FFC00&(data))>>10)
#define  PCID_PCID_RegionalTable_Index_V_get_rt_ver_index0(data)                 (0x000003FF&(data))

#define  PCID_PCID_RegionalTable_Step                                           0x1802EF3C
#define  PCID_PCID_RegionalTable_Step_reg_addr                                   "0xB802EF3C"
#define  PCID_PCID_RegionalTable_Step_reg                                        0xB802EF3C
#define  PCID_PCID_RegionalTable_Step_inst_addr                                  "0x0015"
#define  set_PCID_PCID_RegionalTable_Step_reg(data)                              (*((volatile unsigned int*)PCID_PCID_RegionalTable_Step_reg)=data)
#define  get_PCID_PCID_RegionalTable_Step_reg                                    (*((volatile unsigned int*)PCID_PCID_RegionalTable_Step_reg))
#define  PCID_PCID_RegionalTable_Step_rt_hor_step2_shift                         (12)
#define  PCID_PCID_RegionalTable_Step_rt_hor_step1_shift                         (10)
#define  PCID_PCID_RegionalTable_Step_rt_hor_step0_shift                         (8)
#define  PCID_PCID_RegionalTable_Step_rt_ver_step2_shift                         (4)
#define  PCID_PCID_RegionalTable_Step_rt_ver_step1_shift                         (2)
#define  PCID_PCID_RegionalTable_Step_rt_ver_step0_shift                         (0)
#define  PCID_PCID_RegionalTable_Step_rt_hor_step2_mask                          (0x00003000)
#define  PCID_PCID_RegionalTable_Step_rt_hor_step1_mask                          (0x00000C00)
#define  PCID_PCID_RegionalTable_Step_rt_hor_step0_mask                          (0x00000300)
#define  PCID_PCID_RegionalTable_Step_rt_ver_step2_mask                          (0x00000030)
#define  PCID_PCID_RegionalTable_Step_rt_ver_step1_mask                          (0x0000000C)
#define  PCID_PCID_RegionalTable_Step_rt_ver_step0_mask                          (0x00000003)
#define  PCID_PCID_RegionalTable_Step_rt_hor_step2(data)                         (0x00003000&((data)<<12))
#define  PCID_PCID_RegionalTable_Step_rt_hor_step1(data)                         (0x00000C00&((data)<<10))
#define  PCID_PCID_RegionalTable_Step_rt_hor_step0(data)                         (0x00000300&((data)<<8))
#define  PCID_PCID_RegionalTable_Step_rt_ver_step2(data)                         (0x00000030&((data)<<4))
#define  PCID_PCID_RegionalTable_Step_rt_ver_step1(data)                         (0x0000000C&((data)<<2))
#define  PCID_PCID_RegionalTable_Step_rt_ver_step0(data)                         (0x00000003&(data))
#define  PCID_PCID_RegionalTable_Step_get_rt_hor_step2(data)                     ((0x00003000&(data))>>12)
#define  PCID_PCID_RegionalTable_Step_get_rt_hor_step1(data)                     ((0x00000C00&(data))>>10)
#define  PCID_PCID_RegionalTable_Step_get_rt_hor_step0(data)                     ((0x00000300&(data))>>8)
#define  PCID_PCID_RegionalTable_Step_get_rt_ver_step2(data)                     ((0x00000030&(data))>>4)
#define  PCID_PCID_RegionalTable_Step_get_rt_ver_step1(data)                     ((0x0000000C&(data))>>2)
#define  PCID_PCID_RegionalTable_Step_get_rt_ver_step0(data)                     (0x00000003&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======PCID register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802ef00_31_1:31;
        RBus_UInt32  boundary_mode:1;
    };
}pcid_pcid_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pcid_tab1_xtr_en:1;
        RBus_UInt32  pcid_thd_mode:1;
        RBus_UInt32  pcid_thd_en:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  pcid_tab1_b_thd:8;
        RBus_UInt32  pcid_tab1_g_thd:8;
        RBus_UInt32  pcid_tab1_r_thd:8;
    };
}pcid_pcid_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802ef08_31_0:32;
    };
}pcid_pcid_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line1_odd_b_color_select:2;
        RBus_UInt32  line1_odd_g_color_select:2;
        RBus_UInt32  line1_odd_r_color_select:2;
        RBus_UInt32  line1_odd_b_point_select:2;
        RBus_UInt32  line1_odd_g_point_select:2;
        RBus_UInt32  line1_odd_r_point_select:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  line1_odd_b_line_select:1;
        RBus_UInt32  line1_odd_g_line_select:1;
        RBus_UInt32  line1_odd_r_line_select:1;
        RBus_UInt32  line1_even_b_color_select:2;
        RBus_UInt32  line1_even_g_color_select:2;
        RBus_UInt32  line1_even_r_color_select:2;
        RBus_UInt32  line1_even_b_point_select:2;
        RBus_UInt32  line1_even_g_point_select:2;
        RBus_UInt32  line1_even_r_point_select:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  line1_even_b_line_select:1;
        RBus_UInt32  line1_even_g_line_select:1;
        RBus_UInt32  line1_even_r_line_select:1;
    };
}pcid_pcid_line_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line2_odd_b_color_select:2;
        RBus_UInt32  line2_odd_g_color_select:2;
        RBus_UInt32  line2_odd_r_color_select:2;
        RBus_UInt32  line2_odd_b_point_select:2;
        RBus_UInt32  line2_odd_g_point_select:2;
        RBus_UInt32  line2_odd_r_point_select:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  line2_odd_b_line_select:1;
        RBus_UInt32  line2_odd_g_line_select:1;
        RBus_UInt32  line2_odd_r_line_select:1;
        RBus_UInt32  line2_even_b_color_select:2;
        RBus_UInt32  line2_even_g_color_select:2;
        RBus_UInt32  line2_even_r_color_select:2;
        RBus_UInt32  line2_even_b_point_select:2;
        RBus_UInt32  line2_even_g_point_select:2;
        RBus_UInt32  line2_even_r_point_select:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  line2_even_b_line_select:1;
        RBus_UInt32  line2_even_g_line_select:1;
        RBus_UInt32  line2_even_r_line_select:1;
    };
}pcid_pcid_line_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line3_odd_b_color_select:2;
        RBus_UInt32  line3_odd_g_color_select:2;
        RBus_UInt32  line3_odd_r_color_select:2;
        RBus_UInt32  line3_odd_b_point_select:2;
        RBus_UInt32  line3_odd_g_point_select:2;
        RBus_UInt32  line3_odd_r_point_select:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  line3_odd_b_line_select:1;
        RBus_UInt32  line3_odd_g_line_select:1;
        RBus_UInt32  line3_odd_r_line_select:1;
        RBus_UInt32  line3_even_b_color_select:2;
        RBus_UInt32  line3_even_g_color_select:2;
        RBus_UInt32  line3_even_r_color_select:2;
        RBus_UInt32  line3_even_b_point_select:2;
        RBus_UInt32  line3_even_g_point_select:2;
        RBus_UInt32  line3_even_r_point_select:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  line3_even_b_line_select:1;
        RBus_UInt32  line3_even_g_line_select:1;
        RBus_UInt32  line3_even_r_line_select:1;
    };
}pcid_pcid_line_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line4_odd_b_color_select:2;
        RBus_UInt32  line4_odd_g_color_select:2;
        RBus_UInt32  line4_odd_r_color_select:2;
        RBus_UInt32  line4_odd_b_point_select:2;
        RBus_UInt32  line4_odd_g_point_select:2;
        RBus_UInt32  line4_odd_r_point_select:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  line4_odd_b_line_select:1;
        RBus_UInt32  line4_odd_g_line_select:1;
        RBus_UInt32  line4_odd_r_line_select:1;
        RBus_UInt32  line4_even_b_color_select:2;
        RBus_UInt32  line4_even_g_color_select:2;
        RBus_UInt32  line4_even_r_color_select:2;
        RBus_UInt32  line4_even_b_point_select:2;
        RBus_UInt32  line4_even_g_point_select:2;
        RBus_UInt32  line4_even_r_point_select:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  line4_even_b_line_select:1;
        RBus_UInt32  line4_even_g_line_select:1;
        RBus_UInt32  line4_even_r_line_select:1;
    };
}pcid_pcid_line_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  pcid_lb_rm_1:4;
        RBus_UInt32  pcid_lb_rm_0:4;
    };
}pcid_pcid_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  pcid_lb_ls_1:1;
        RBus_UInt32  pcid_lb_ls_0:1;
        RBus_UInt32  res2:14;
        RBus_UInt32  pcid_lb_rme_1:1;
        RBus_UInt32  pcid_lb_rme_0:1;
    };
}pcid_pcid_rme_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  pcid_lb_drf_fail_1:1;
        RBus_UInt32  pcid_lb_drf_fail_0:1;
        RBus_UInt32  res2:14;
        RBus_UInt32  pcid_lb_bist_fail_1:1;
        RBus_UInt32  pcid_lb_bist_fail_0:1;
    };
}pcid_pcid_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  pcid_lb_testrwm_1:1;
        RBus_UInt32  pcid_lb_testrwm_0:1;
    };
}pcid_pcid_testrwm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  pcid_regional_lut_ax_en:1;
        RBus_UInt32  pcid_regional_lut_sel:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  pcid_lut_sel:2;
        RBus_UInt32  res3:12;
    };
}pcid_pcid_lut_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcid_lut_data:32;
    };
}pcid_pcid_lut_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  access_location_sel:1;
        RBus_UInt32  access_cross_bar_en:1;
        RBus_UInt32  access_write_en:1;
        RBus_UInt32  access_read_en:1;
    };
}pcid_pcid_accessdata_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  access_starty:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  access_startx:12;
    };
}pcid_pcid_accessdata_posctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_r:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  access_write_r:12;
    };
}pcid_pcid_accessdata_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_g:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  access_write_g:12;
    };
}pcid_pcid_accessdata_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_b:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  access_write_b:12;
    };
}pcid_pcid_accessdata_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  regional_table_en:1;
    };
}pcid_pcid_regionaltable_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  rt_hor_index2:10;
        RBus_UInt32  rt_hor_index1:10;
        RBus_UInt32  rt_hor_index0:10;
    };
}pcid_pcid_regionaltable_index_h_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  rt_ver_index2:10;
        RBus_UInt32  rt_ver_index1:10;
        RBus_UInt32  rt_ver_index0:10;
    };
}pcid_pcid_regionaltable_index_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  rt_hor_step2:2;
        RBus_UInt32  rt_hor_step1:2;
        RBus_UInt32  rt_hor_step0:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  rt_ver_step2:2;
        RBus_UInt32  rt_ver_step1:2;
        RBus_UInt32  rt_ver_step0:2;
    };
}pcid_pcid_regionaltable_step_RBUS;

#else //apply LITTLE_ENDIAN

//======PCID register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  boundary_mode:1;
        RBus_UInt32  dummy1802ef00_31_1:31;
    };
}pcid_pcid_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcid_tab1_r_thd:8;
        RBus_UInt32  pcid_tab1_g_thd:8;
        RBus_UInt32  pcid_tab1_b_thd:8;
        RBus_UInt32  res1:4;
        RBus_UInt32  pcid_thd_en:1;
        RBus_UInt32  pcid_thd_mode:1;
        RBus_UInt32  pcid_tab1_xtr_en:1;
        RBus_UInt32  res2:1;
    };
}pcid_pcid_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802ef08_31_0:32;
    };
}pcid_pcid_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line1_even_r_line_select:1;
        RBus_UInt32  line1_even_g_line_select:1;
        RBus_UInt32  line1_even_b_line_select:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  line1_even_r_point_select:2;
        RBus_UInt32  line1_even_g_point_select:2;
        RBus_UInt32  line1_even_b_point_select:2;
        RBus_UInt32  line1_even_r_color_select:2;
        RBus_UInt32  line1_even_g_color_select:2;
        RBus_UInt32  line1_even_b_color_select:2;
        RBus_UInt32  line1_odd_r_line_select:1;
        RBus_UInt32  line1_odd_g_line_select:1;
        RBus_UInt32  line1_odd_b_line_select:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  line1_odd_r_point_select:2;
        RBus_UInt32  line1_odd_g_point_select:2;
        RBus_UInt32  line1_odd_b_point_select:2;
        RBus_UInt32  line1_odd_r_color_select:2;
        RBus_UInt32  line1_odd_g_color_select:2;
        RBus_UInt32  line1_odd_b_color_select:2;
    };
}pcid_pcid_line_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line2_even_r_line_select:1;
        RBus_UInt32  line2_even_g_line_select:1;
        RBus_UInt32  line2_even_b_line_select:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  line2_even_r_point_select:2;
        RBus_UInt32  line2_even_g_point_select:2;
        RBus_UInt32  line2_even_b_point_select:2;
        RBus_UInt32  line2_even_r_color_select:2;
        RBus_UInt32  line2_even_g_color_select:2;
        RBus_UInt32  line2_even_b_color_select:2;
        RBus_UInt32  line2_odd_r_line_select:1;
        RBus_UInt32  line2_odd_g_line_select:1;
        RBus_UInt32  line2_odd_b_line_select:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  line2_odd_r_point_select:2;
        RBus_UInt32  line2_odd_g_point_select:2;
        RBus_UInt32  line2_odd_b_point_select:2;
        RBus_UInt32  line2_odd_r_color_select:2;
        RBus_UInt32  line2_odd_g_color_select:2;
        RBus_UInt32  line2_odd_b_color_select:2;
    };
}pcid_pcid_line_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line3_even_r_line_select:1;
        RBus_UInt32  line3_even_g_line_select:1;
        RBus_UInt32  line3_even_b_line_select:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  line3_even_r_point_select:2;
        RBus_UInt32  line3_even_g_point_select:2;
        RBus_UInt32  line3_even_b_point_select:2;
        RBus_UInt32  line3_even_r_color_select:2;
        RBus_UInt32  line3_even_g_color_select:2;
        RBus_UInt32  line3_even_b_color_select:2;
        RBus_UInt32  line3_odd_r_line_select:1;
        RBus_UInt32  line3_odd_g_line_select:1;
        RBus_UInt32  line3_odd_b_line_select:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  line3_odd_r_point_select:2;
        RBus_UInt32  line3_odd_g_point_select:2;
        RBus_UInt32  line3_odd_b_point_select:2;
        RBus_UInt32  line3_odd_r_color_select:2;
        RBus_UInt32  line3_odd_g_color_select:2;
        RBus_UInt32  line3_odd_b_color_select:2;
    };
}pcid_pcid_line_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line4_even_r_line_select:1;
        RBus_UInt32  line4_even_g_line_select:1;
        RBus_UInt32  line4_even_b_line_select:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  line4_even_r_point_select:2;
        RBus_UInt32  line4_even_g_point_select:2;
        RBus_UInt32  line4_even_b_point_select:2;
        RBus_UInt32  line4_even_r_color_select:2;
        RBus_UInt32  line4_even_g_color_select:2;
        RBus_UInt32  line4_even_b_color_select:2;
        RBus_UInt32  line4_odd_r_line_select:1;
        RBus_UInt32  line4_odd_g_line_select:1;
        RBus_UInt32  line4_odd_b_line_select:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  line4_odd_r_point_select:2;
        RBus_UInt32  line4_odd_g_point_select:2;
        RBus_UInt32  line4_odd_b_point_select:2;
        RBus_UInt32  line4_odd_r_color_select:2;
        RBus_UInt32  line4_odd_g_color_select:2;
        RBus_UInt32  line4_odd_b_color_select:2;
    };
}pcid_pcid_line_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcid_lb_rm_0:4;
        RBus_UInt32  pcid_lb_rm_1:4;
        RBus_UInt32  res1:24;
    };
}pcid_pcid_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcid_lb_rme_0:1;
        RBus_UInt32  pcid_lb_rme_1:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  pcid_lb_ls_0:1;
        RBus_UInt32  pcid_lb_ls_1:1;
        RBus_UInt32  res2:14;
    };
}pcid_pcid_rme_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcid_lb_bist_fail_0:1;
        RBus_UInt32  pcid_lb_bist_fail_1:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  pcid_lb_drf_fail_0:1;
        RBus_UInt32  pcid_lb_drf_fail_1:1;
        RBus_UInt32  res2:14;
    };
}pcid_pcid_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcid_lb_testrwm_0:1;
        RBus_UInt32  pcid_lb_testrwm_1:1;
        RBus_UInt32  res1:30;
    };
}pcid_pcid_testrwm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  pcid_lut_sel:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  pcid_regional_lut_sel:4;
        RBus_UInt32  pcid_regional_lut_ax_en:1;
        RBus_UInt32  res3:10;
    };
}pcid_pcid_lut_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pcid_lut_data:32;
    };
}pcid_pcid_lut_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_read_en:1;
        RBus_UInt32  access_write_en:1;
        RBus_UInt32  access_cross_bar_en:1;
        RBus_UInt32  access_location_sel:1;
        RBus_UInt32  res1:28;
    };
}pcid_pcid_accessdata_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_startx:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  access_starty:12;
        RBus_UInt32  res2:4;
    };
}pcid_pcid_accessdata_posctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_write_r:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_r:12;
        RBus_UInt32  res2:4;
    };
}pcid_pcid_accessdata_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_write_g:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_g:12;
        RBus_UInt32  res2:4;
    };
}pcid_pcid_accessdata_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_write_b:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  access_read_b:12;
        RBus_UInt32  res2:4;
    };
}pcid_pcid_accessdata_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regional_table_en:1;
        RBus_UInt32  res1:31;
    };
}pcid_pcid_regionaltable_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rt_hor_index0:10;
        RBus_UInt32  rt_hor_index1:10;
        RBus_UInt32  rt_hor_index2:10;
        RBus_UInt32  res1:2;
    };
}pcid_pcid_regionaltable_index_h_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rt_ver_index0:10;
        RBus_UInt32  rt_ver_index1:10;
        RBus_UInt32  rt_ver_index2:10;
        RBus_UInt32  res1:2;
    };
}pcid_pcid_regionaltable_index_v_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rt_ver_step0:2;
        RBus_UInt32  rt_ver_step1:2;
        RBus_UInt32  rt_ver_step2:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  rt_hor_step0:2;
        RBus_UInt32  rt_hor_step1:2;
        RBus_UInt32  rt_hor_step2:2;
        RBus_UInt32  res2:18;
    };
}pcid_pcid_regionaltable_step_RBUS;




#endif 


#endif 
