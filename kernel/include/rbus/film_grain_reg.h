/**
* @file Merlin5_DesignSpec-AV1_film_grain
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_FILM_GRAIN_REG_H_
#define _RBUS_FILM_GRAIN_REG_H_

#include "rbus_types.h"



//  FILM_GRAIN Register Address
#define  FILM_GRAIN_film_grain_ctrl                                             0x18005400
#define  FILM_GRAIN_film_grain_ctrl_reg_addr                                     "0xB8005400"
#define  FILM_GRAIN_film_grain_ctrl_reg                                          0xB8005400
#define  FILM_GRAIN_film_grain_ctrl_inst_addr                                    "0x0000"
#define  set_FILM_GRAIN_film_grain_ctrl_reg(data)                                (*((volatile unsigned int*)FILM_GRAIN_film_grain_ctrl_reg)=data)
#define  get_FILM_GRAIN_film_grain_ctrl_reg                                      (*((volatile unsigned int*)FILM_GRAIN_film_grain_ctrl_reg))
#define  FILM_GRAIN_film_grain_ctrl_luma_filmgrain_en_shift                      (31)
#define  FILM_GRAIN_film_grain_ctrl_chroma_filmgrain_en_shift                    (30)
#define  FILM_GRAIN_film_grain_ctrl_film_bpp_shift                               (29)
#define  FILM_GRAIN_film_grain_ctrl_film_420to422_en_shift                       (28)
#define  FILM_GRAIN_film_grain_ctrl_use_high_bit_depth_shift                     (27)
#define  FILM_GRAIN_film_grain_ctrl_film_height_shift                            (0)
#define  FILM_GRAIN_film_grain_ctrl_luma_filmgrain_en_mask                       (0x80000000)
#define  FILM_GRAIN_film_grain_ctrl_chroma_filmgrain_en_mask                     (0x40000000)
#define  FILM_GRAIN_film_grain_ctrl_film_bpp_mask                                (0x20000000)
#define  FILM_GRAIN_film_grain_ctrl_film_420to422_en_mask                        (0x10000000)
#define  FILM_GRAIN_film_grain_ctrl_use_high_bit_depth_mask                      (0x08000000)
#define  FILM_GRAIN_film_grain_ctrl_film_height_mask                             (0x00000FFF)
#define  FILM_GRAIN_film_grain_ctrl_luma_filmgrain_en(data)                      (0x80000000&((data)<<31))
#define  FILM_GRAIN_film_grain_ctrl_chroma_filmgrain_en(data)                    (0x40000000&((data)<<30))
#define  FILM_GRAIN_film_grain_ctrl_film_bpp(data)                               (0x20000000&((data)<<29))
#define  FILM_GRAIN_film_grain_ctrl_film_420to422_en(data)                       (0x10000000&((data)<<28))
#define  FILM_GRAIN_film_grain_ctrl_use_high_bit_depth(data)                     (0x08000000&((data)<<27))
#define  FILM_GRAIN_film_grain_ctrl_film_height(data)                            (0x00000FFF&(data))
#define  FILM_GRAIN_film_grain_ctrl_get_luma_filmgrain_en(data)                  ((0x80000000&(data))>>31)
#define  FILM_GRAIN_film_grain_ctrl_get_chroma_filmgrain_en(data)                ((0x40000000&(data))>>30)
#define  FILM_GRAIN_film_grain_ctrl_get_film_bpp(data)                           ((0x20000000&(data))>>29)
#define  FILM_GRAIN_film_grain_ctrl_get_film_420to422_en(data)                   ((0x10000000&(data))>>28)
#define  FILM_GRAIN_film_grain_ctrl_get_use_high_bit_depth(data)                 ((0x08000000&(data))>>27)
#define  FILM_GRAIN_film_grain_ctrl_get_film_height(data)                        (0x00000FFF&(data))

#define  FILM_GRAIN_film_random_ctrl                                            0x18005404
#define  FILM_GRAIN_film_random_ctrl_reg_addr                                    "0xB8005404"
#define  FILM_GRAIN_film_random_ctrl_reg                                         0xB8005404
#define  FILM_GRAIN_film_random_ctrl_inst_addr                                   "0x0001"
#define  set_FILM_GRAIN_film_random_ctrl_reg(data)                               (*((volatile unsigned int*)FILM_GRAIN_film_random_ctrl_reg)=data)
#define  get_FILM_GRAIN_film_random_ctrl_reg                                     (*((volatile unsigned int*)FILM_GRAIN_film_random_ctrl_reg))
#define  FILM_GRAIN_film_random_ctrl_random_seed_shift                           (16)
#define  FILM_GRAIN_film_random_ctrl_film_width_shift                            (0)
#define  FILM_GRAIN_film_random_ctrl_random_seed_mask                            (0xFFFF0000)
#define  FILM_GRAIN_film_random_ctrl_film_width_mask                             (0x00001FFF)
#define  FILM_GRAIN_film_random_ctrl_random_seed(data)                           (0xFFFF0000&((data)<<16))
#define  FILM_GRAIN_film_random_ctrl_film_width(data)                            (0x00001FFF&(data))
#define  FILM_GRAIN_film_random_ctrl_get_random_seed(data)                       ((0xFFFF0000&(data))>>16)
#define  FILM_GRAIN_film_random_ctrl_get_film_width(data)                        (0x00001FFF&(data))

#define  FILM_GRAIN_film_template_ctrl                                          0x18005408
#define  FILM_GRAIN_film_template_ctrl_reg_addr                                  "0xB8005408"
#define  FILM_GRAIN_film_template_ctrl_reg                                       0xB8005408
#define  FILM_GRAIN_film_template_ctrl_inst_addr                                 "0x0002"
#define  set_FILM_GRAIN_film_template_ctrl_reg(data)                             (*((volatile unsigned int*)FILM_GRAIN_film_template_ctrl_reg)=data)
#define  get_FILM_GRAIN_film_template_ctrl_reg                                   (*((volatile unsigned int*)FILM_GRAIN_film_template_ctrl_reg))
#define  FILM_GRAIN_film_template_ctrl_hw_gen_noise_en_shift                     (31)
#define  FILM_GRAIN_film_template_ctrl_porch_not_enough_shift                    (30)
#define  FILM_GRAIN_film_template_ctrl_porch_not_enough_clr_shift                (29)
#define  FILM_GRAIN_film_template_ctrl_ar_coeff_lag_shift                        (6)
#define  FILM_GRAIN_film_template_ctrl_ar_coeff_shift_shift                      (2)
#define  FILM_GRAIN_film_template_ctrl_grain_scale_shift_shift                   (0)
#define  FILM_GRAIN_film_template_ctrl_hw_gen_noise_en_mask                      (0x80000000)
#define  FILM_GRAIN_film_template_ctrl_porch_not_enough_mask                     (0x40000000)
#define  FILM_GRAIN_film_template_ctrl_porch_not_enough_clr_mask                 (0x20000000)
#define  FILM_GRAIN_film_template_ctrl_ar_coeff_lag_mask                         (0x000000C0)
#define  FILM_GRAIN_film_template_ctrl_ar_coeff_shift_mask                       (0x0000003C)
#define  FILM_GRAIN_film_template_ctrl_grain_scale_shift_mask                    (0x00000003)
#define  FILM_GRAIN_film_template_ctrl_hw_gen_noise_en(data)                     (0x80000000&((data)<<31))
#define  FILM_GRAIN_film_template_ctrl_porch_not_enough(data)                    (0x40000000&((data)<<30))
#define  FILM_GRAIN_film_template_ctrl_porch_not_enough_clr(data)                (0x20000000&((data)<<29))
#define  FILM_GRAIN_film_template_ctrl_ar_coeff_lag(data)                        (0x000000C0&((data)<<6))
#define  FILM_GRAIN_film_template_ctrl_ar_coeff_shift(data)                      (0x0000003C&((data)<<2))
#define  FILM_GRAIN_film_template_ctrl_grain_scale_shift(data)                   (0x00000003&(data))
#define  FILM_GRAIN_film_template_ctrl_get_hw_gen_noise_en(data)                 ((0x80000000&(data))>>31)
#define  FILM_GRAIN_film_template_ctrl_get_porch_not_enough(data)                ((0x40000000&(data))>>30)
#define  FILM_GRAIN_film_template_ctrl_get_porch_not_enough_clr(data)            ((0x20000000&(data))>>29)
#define  FILM_GRAIN_film_template_ctrl_get_ar_coeff_lag(data)                    ((0x000000C0&(data))>>6)
#define  FILM_GRAIN_film_template_ctrl_get_ar_coeff_shift(data)                  ((0x0000003C&(data))>>2)
#define  FILM_GRAIN_film_template_ctrl_get_grain_scale_shift(data)               (0x00000003&(data))

#define  FILM_GRAIN_film_template_para_y0                                       0x1800540C
#define  FILM_GRAIN_film_template_para_y0_reg_addr                               "0xB800540C"
#define  FILM_GRAIN_film_template_para_y0_reg                                    0xB800540C
#define  FILM_GRAIN_film_template_para_y0_inst_addr                              "0x0003"
#define  set_FILM_GRAIN_film_template_para_y0_reg(data)                          (*((volatile unsigned int*)FILM_GRAIN_film_template_para_y0_reg)=data)
#define  get_FILM_GRAIN_film_template_para_y0_reg                                (*((volatile unsigned int*)FILM_GRAIN_film_template_para_y0_reg))
#define  FILM_GRAIN_film_template_para_y0_ar_coeff_y0_shift                      (24)
#define  FILM_GRAIN_film_template_para_y0_ar_coeff_y1_shift                      (16)
#define  FILM_GRAIN_film_template_para_y0_ar_coeff_y2_shift                      (8)
#define  FILM_GRAIN_film_template_para_y0_ar_coeff_y3_shift                      (0)
#define  FILM_GRAIN_film_template_para_y0_ar_coeff_y0_mask                       (0xFF000000)
#define  FILM_GRAIN_film_template_para_y0_ar_coeff_y1_mask                       (0x00FF0000)
#define  FILM_GRAIN_film_template_para_y0_ar_coeff_y2_mask                       (0x0000FF00)
#define  FILM_GRAIN_film_template_para_y0_ar_coeff_y3_mask                       (0x000000FF)
#define  FILM_GRAIN_film_template_para_y0_ar_coeff_y0(data)                      (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_y0_ar_coeff_y1(data)                      (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_y0_ar_coeff_y2(data)                      (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_y0_ar_coeff_y3(data)                      (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_y0_get_ar_coeff_y0(data)                  ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_y0_get_ar_coeff_y1(data)                  ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_y0_get_ar_coeff_y2(data)                  ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_y0_get_ar_coeff_y3(data)                  (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_y1                                       0x18005410
#define  FILM_GRAIN_film_template_para_y1_reg_addr                               "0xB8005410"
#define  FILM_GRAIN_film_template_para_y1_reg                                    0xB8005410
#define  FILM_GRAIN_film_template_para_y1_inst_addr                              "0x0004"
#define  set_FILM_GRAIN_film_template_para_y1_reg(data)                          (*((volatile unsigned int*)FILM_GRAIN_film_template_para_y1_reg)=data)
#define  get_FILM_GRAIN_film_template_para_y1_reg                                (*((volatile unsigned int*)FILM_GRAIN_film_template_para_y1_reg))
#define  FILM_GRAIN_film_template_para_y1_ar_coeff_y4_shift                      (24)
#define  FILM_GRAIN_film_template_para_y1_ar_coeff_y5_shift                      (16)
#define  FILM_GRAIN_film_template_para_y1_ar_coeff_y6_shift                      (8)
#define  FILM_GRAIN_film_template_para_y1_ar_coeff_y7_shift                      (0)
#define  FILM_GRAIN_film_template_para_y1_ar_coeff_y4_mask                       (0xFF000000)
#define  FILM_GRAIN_film_template_para_y1_ar_coeff_y5_mask                       (0x00FF0000)
#define  FILM_GRAIN_film_template_para_y1_ar_coeff_y6_mask                       (0x0000FF00)
#define  FILM_GRAIN_film_template_para_y1_ar_coeff_y7_mask                       (0x000000FF)
#define  FILM_GRAIN_film_template_para_y1_ar_coeff_y4(data)                      (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_y1_ar_coeff_y5(data)                      (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_y1_ar_coeff_y6(data)                      (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_y1_ar_coeff_y7(data)                      (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_y1_get_ar_coeff_y4(data)                  ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_y1_get_ar_coeff_y5(data)                  ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_y1_get_ar_coeff_y6(data)                  ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_y1_get_ar_coeff_y7(data)                  (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_y2                                       0x18005414
#define  FILM_GRAIN_film_template_para_y2_reg_addr                               "0xB8005414"
#define  FILM_GRAIN_film_template_para_y2_reg                                    0xB8005414
#define  FILM_GRAIN_film_template_para_y2_inst_addr                              "0x0005"
#define  set_FILM_GRAIN_film_template_para_y2_reg(data)                          (*((volatile unsigned int*)FILM_GRAIN_film_template_para_y2_reg)=data)
#define  get_FILM_GRAIN_film_template_para_y2_reg                                (*((volatile unsigned int*)FILM_GRAIN_film_template_para_y2_reg))
#define  FILM_GRAIN_film_template_para_y2_ar_coeff_y8_shift                      (24)
#define  FILM_GRAIN_film_template_para_y2_ar_coeff_y9_shift                      (16)
#define  FILM_GRAIN_film_template_para_y2_ar_coeff_y10_shift                     (8)
#define  FILM_GRAIN_film_template_para_y2_ar_coeff_y11_shift                     (0)
#define  FILM_GRAIN_film_template_para_y2_ar_coeff_y8_mask                       (0xFF000000)
#define  FILM_GRAIN_film_template_para_y2_ar_coeff_y9_mask                       (0x00FF0000)
#define  FILM_GRAIN_film_template_para_y2_ar_coeff_y10_mask                      (0x0000FF00)
#define  FILM_GRAIN_film_template_para_y2_ar_coeff_y11_mask                      (0x000000FF)
#define  FILM_GRAIN_film_template_para_y2_ar_coeff_y8(data)                      (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_y2_ar_coeff_y9(data)                      (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_y2_ar_coeff_y10(data)                     (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_y2_ar_coeff_y11(data)                     (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_y2_get_ar_coeff_y8(data)                  ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_y2_get_ar_coeff_y9(data)                  ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_y2_get_ar_coeff_y10(data)                 ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_y2_get_ar_coeff_y11(data)                 (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_y3                                       0x18005418
#define  FILM_GRAIN_film_template_para_y3_reg_addr                               "0xB8005418"
#define  FILM_GRAIN_film_template_para_y3_reg                                    0xB8005418
#define  FILM_GRAIN_film_template_para_y3_inst_addr                              "0x0006"
#define  set_FILM_GRAIN_film_template_para_y3_reg(data)                          (*((volatile unsigned int*)FILM_GRAIN_film_template_para_y3_reg)=data)
#define  get_FILM_GRAIN_film_template_para_y3_reg                                (*((volatile unsigned int*)FILM_GRAIN_film_template_para_y3_reg))
#define  FILM_GRAIN_film_template_para_y3_ar_coeff_y12_shift                     (24)
#define  FILM_GRAIN_film_template_para_y3_ar_coeff_y13_shift                     (16)
#define  FILM_GRAIN_film_template_para_y3_ar_coeff_y14_shift                     (8)
#define  FILM_GRAIN_film_template_para_y3_ar_coeff_y15_shift                     (0)
#define  FILM_GRAIN_film_template_para_y3_ar_coeff_y12_mask                      (0xFF000000)
#define  FILM_GRAIN_film_template_para_y3_ar_coeff_y13_mask                      (0x00FF0000)
#define  FILM_GRAIN_film_template_para_y3_ar_coeff_y14_mask                      (0x0000FF00)
#define  FILM_GRAIN_film_template_para_y3_ar_coeff_y15_mask                      (0x000000FF)
#define  FILM_GRAIN_film_template_para_y3_ar_coeff_y12(data)                     (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_y3_ar_coeff_y13(data)                     (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_y3_ar_coeff_y14(data)                     (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_y3_ar_coeff_y15(data)                     (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_y3_get_ar_coeff_y12(data)                 ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_y3_get_ar_coeff_y13(data)                 ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_y3_get_ar_coeff_y14(data)                 ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_y3_get_ar_coeff_y15(data)                 (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_y4                                       0x1800541C
#define  FILM_GRAIN_film_template_para_y4_reg_addr                               "0xB800541C"
#define  FILM_GRAIN_film_template_para_y4_reg                                    0xB800541C
#define  FILM_GRAIN_film_template_para_y4_inst_addr                              "0x0007"
#define  set_FILM_GRAIN_film_template_para_y4_reg(data)                          (*((volatile unsigned int*)FILM_GRAIN_film_template_para_y4_reg)=data)
#define  get_FILM_GRAIN_film_template_para_y4_reg                                (*((volatile unsigned int*)FILM_GRAIN_film_template_para_y4_reg))
#define  FILM_GRAIN_film_template_para_y4_ar_coeff_y16_shift                     (24)
#define  FILM_GRAIN_film_template_para_y4_ar_coeff_y17_shift                     (16)
#define  FILM_GRAIN_film_template_para_y4_ar_coeff_y18_shift                     (8)
#define  FILM_GRAIN_film_template_para_y4_ar_coeff_y19_shift                     (0)
#define  FILM_GRAIN_film_template_para_y4_ar_coeff_y16_mask                      (0xFF000000)
#define  FILM_GRAIN_film_template_para_y4_ar_coeff_y17_mask                      (0x00FF0000)
#define  FILM_GRAIN_film_template_para_y4_ar_coeff_y18_mask                      (0x0000FF00)
#define  FILM_GRAIN_film_template_para_y4_ar_coeff_y19_mask                      (0x000000FF)
#define  FILM_GRAIN_film_template_para_y4_ar_coeff_y16(data)                     (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_y4_ar_coeff_y17(data)                     (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_y4_ar_coeff_y18(data)                     (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_y4_ar_coeff_y19(data)                     (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_y4_get_ar_coeff_y16(data)                 ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_y4_get_ar_coeff_y17(data)                 ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_y4_get_ar_coeff_y18(data)                 ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_y4_get_ar_coeff_y19(data)                 (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_y5                                       0x18005420
#define  FILM_GRAIN_film_template_para_y5_reg_addr                               "0xB8005420"
#define  FILM_GRAIN_film_template_para_y5_reg                                    0xB8005420
#define  FILM_GRAIN_film_template_para_y5_inst_addr                              "0x0008"
#define  set_FILM_GRAIN_film_template_para_y5_reg(data)                          (*((volatile unsigned int*)FILM_GRAIN_film_template_para_y5_reg)=data)
#define  get_FILM_GRAIN_film_template_para_y5_reg                                (*((volatile unsigned int*)FILM_GRAIN_film_template_para_y5_reg))
#define  FILM_GRAIN_film_template_para_y5_ar_coeff_y20_shift                     (24)
#define  FILM_GRAIN_film_template_para_y5_ar_coeff_y21_shift                     (16)
#define  FILM_GRAIN_film_template_para_y5_ar_coeff_y22_shift                     (8)
#define  FILM_GRAIN_film_template_para_y5_ar_coeff_y23_shift                     (0)
#define  FILM_GRAIN_film_template_para_y5_ar_coeff_y20_mask                      (0xFF000000)
#define  FILM_GRAIN_film_template_para_y5_ar_coeff_y21_mask                      (0x00FF0000)
#define  FILM_GRAIN_film_template_para_y5_ar_coeff_y22_mask                      (0x0000FF00)
#define  FILM_GRAIN_film_template_para_y5_ar_coeff_y23_mask                      (0x000000FF)
#define  FILM_GRAIN_film_template_para_y5_ar_coeff_y20(data)                     (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_y5_ar_coeff_y21(data)                     (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_y5_ar_coeff_y22(data)                     (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_y5_ar_coeff_y23(data)                     (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_y5_get_ar_coeff_y20(data)                 ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_y5_get_ar_coeff_y21(data)                 ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_y5_get_ar_coeff_y22(data)                 ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_y5_get_ar_coeff_y23(data)                 (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_cb0                                      0x18005424
#define  FILM_GRAIN_film_template_para_cb0_reg_addr                              "0xB8005424"
#define  FILM_GRAIN_film_template_para_cb0_reg                                   0xB8005424
#define  FILM_GRAIN_film_template_para_cb0_inst_addr                             "0x0009"
#define  set_FILM_GRAIN_film_template_para_cb0_reg(data)                         (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cb0_reg)=data)
#define  get_FILM_GRAIN_film_template_para_cb0_reg                               (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cb0_reg))
#define  FILM_GRAIN_film_template_para_cb0_ar_coeff_cb0_shift                    (24)
#define  FILM_GRAIN_film_template_para_cb0_ar_coeff_cb1_shift                    (16)
#define  FILM_GRAIN_film_template_para_cb0_ar_coeff_cb2_shift                    (8)
#define  FILM_GRAIN_film_template_para_cb0_ar_coeff_cb3_shift                    (0)
#define  FILM_GRAIN_film_template_para_cb0_ar_coeff_cb0_mask                     (0xFF000000)
#define  FILM_GRAIN_film_template_para_cb0_ar_coeff_cb1_mask                     (0x00FF0000)
#define  FILM_GRAIN_film_template_para_cb0_ar_coeff_cb2_mask                     (0x0000FF00)
#define  FILM_GRAIN_film_template_para_cb0_ar_coeff_cb3_mask                     (0x000000FF)
#define  FILM_GRAIN_film_template_para_cb0_ar_coeff_cb0(data)                    (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_cb0_ar_coeff_cb1(data)                    (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_cb0_ar_coeff_cb2(data)                    (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_cb0_ar_coeff_cb3(data)                    (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_cb0_get_ar_coeff_cb0(data)                ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_cb0_get_ar_coeff_cb1(data)                ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_cb0_get_ar_coeff_cb2(data)                ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_cb0_get_ar_coeff_cb3(data)                (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_cb1                                      0x18005428
#define  FILM_GRAIN_film_template_para_cb1_reg_addr                              "0xB8005428"
#define  FILM_GRAIN_film_template_para_cb1_reg                                   0xB8005428
#define  FILM_GRAIN_film_template_para_cb1_inst_addr                             "0x000A"
#define  set_FILM_GRAIN_film_template_para_cb1_reg(data)                         (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cb1_reg)=data)
#define  get_FILM_GRAIN_film_template_para_cb1_reg                               (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cb1_reg))
#define  FILM_GRAIN_film_template_para_cb1_ar_coeff_cb4_shift                    (24)
#define  FILM_GRAIN_film_template_para_cb1_ar_coeff_cb5_shift                    (16)
#define  FILM_GRAIN_film_template_para_cb1_ar_coeff_cb6_shift                    (8)
#define  FILM_GRAIN_film_template_para_cb1_ar_coeff_cb7_shift                    (0)
#define  FILM_GRAIN_film_template_para_cb1_ar_coeff_cb4_mask                     (0xFF000000)
#define  FILM_GRAIN_film_template_para_cb1_ar_coeff_cb5_mask                     (0x00FF0000)
#define  FILM_GRAIN_film_template_para_cb1_ar_coeff_cb6_mask                     (0x0000FF00)
#define  FILM_GRAIN_film_template_para_cb1_ar_coeff_cb7_mask                     (0x000000FF)
#define  FILM_GRAIN_film_template_para_cb1_ar_coeff_cb4(data)                    (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_cb1_ar_coeff_cb5(data)                    (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_cb1_ar_coeff_cb6(data)                    (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_cb1_ar_coeff_cb7(data)                    (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_cb1_get_ar_coeff_cb4(data)                ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_cb1_get_ar_coeff_cb5(data)                ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_cb1_get_ar_coeff_cb6(data)                ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_cb1_get_ar_coeff_cb7(data)                (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_cb2                                      0x1800542C
#define  FILM_GRAIN_film_template_para_cb2_reg_addr                              "0xB800542C"
#define  FILM_GRAIN_film_template_para_cb2_reg                                   0xB800542C
#define  FILM_GRAIN_film_template_para_cb2_inst_addr                             "0x000B"
#define  set_FILM_GRAIN_film_template_para_cb2_reg(data)                         (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cb2_reg)=data)
#define  get_FILM_GRAIN_film_template_para_cb2_reg                               (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cb2_reg))
#define  FILM_GRAIN_film_template_para_cb2_ar_coeff_cb8_shift                    (24)
#define  FILM_GRAIN_film_template_para_cb2_ar_coeff_cb9_shift                    (16)
#define  FILM_GRAIN_film_template_para_cb2_ar_coeff_cb10_shift                   (8)
#define  FILM_GRAIN_film_template_para_cb2_ar_coeff_cb11_shift                   (0)
#define  FILM_GRAIN_film_template_para_cb2_ar_coeff_cb8_mask                     (0xFF000000)
#define  FILM_GRAIN_film_template_para_cb2_ar_coeff_cb9_mask                     (0x00FF0000)
#define  FILM_GRAIN_film_template_para_cb2_ar_coeff_cb10_mask                    (0x0000FF00)
#define  FILM_GRAIN_film_template_para_cb2_ar_coeff_cb11_mask                    (0x000000FF)
#define  FILM_GRAIN_film_template_para_cb2_ar_coeff_cb8(data)                    (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_cb2_ar_coeff_cb9(data)                    (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_cb2_ar_coeff_cb10(data)                   (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_cb2_ar_coeff_cb11(data)                   (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_cb2_get_ar_coeff_cb8(data)                ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_cb2_get_ar_coeff_cb9(data)                ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_cb2_get_ar_coeff_cb10(data)               ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_cb2_get_ar_coeff_cb11(data)               (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_cb3                                      0x18005430
#define  FILM_GRAIN_film_template_para_cb3_reg_addr                              "0xB8005430"
#define  FILM_GRAIN_film_template_para_cb3_reg                                   0xB8005430
#define  FILM_GRAIN_film_template_para_cb3_inst_addr                             "0x000C"
#define  set_FILM_GRAIN_film_template_para_cb3_reg(data)                         (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cb3_reg)=data)
#define  get_FILM_GRAIN_film_template_para_cb3_reg                               (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cb3_reg))
#define  FILM_GRAIN_film_template_para_cb3_ar_coeff_cb12_shift                   (24)
#define  FILM_GRAIN_film_template_para_cb3_ar_coeff_cb13_shift                   (16)
#define  FILM_GRAIN_film_template_para_cb3_ar_coeff_cb14_shift                   (8)
#define  FILM_GRAIN_film_template_para_cb3_ar_coeff_cb15_shift                   (0)
#define  FILM_GRAIN_film_template_para_cb3_ar_coeff_cb12_mask                    (0xFF000000)
#define  FILM_GRAIN_film_template_para_cb3_ar_coeff_cb13_mask                    (0x00FF0000)
#define  FILM_GRAIN_film_template_para_cb3_ar_coeff_cb14_mask                    (0x0000FF00)
#define  FILM_GRAIN_film_template_para_cb3_ar_coeff_cb15_mask                    (0x000000FF)
#define  FILM_GRAIN_film_template_para_cb3_ar_coeff_cb12(data)                   (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_cb3_ar_coeff_cb13(data)                   (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_cb3_ar_coeff_cb14(data)                   (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_cb3_ar_coeff_cb15(data)                   (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_cb3_get_ar_coeff_cb12(data)               ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_cb3_get_ar_coeff_cb13(data)               ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_cb3_get_ar_coeff_cb14(data)               ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_cb3_get_ar_coeff_cb15(data)               (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_cb4                                      0x18005434
#define  FILM_GRAIN_film_template_para_cb4_reg_addr                              "0xB8005434"
#define  FILM_GRAIN_film_template_para_cb4_reg                                   0xB8005434
#define  FILM_GRAIN_film_template_para_cb4_inst_addr                             "0x000D"
#define  set_FILM_GRAIN_film_template_para_cb4_reg(data)                         (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cb4_reg)=data)
#define  get_FILM_GRAIN_film_template_para_cb4_reg                               (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cb4_reg))
#define  FILM_GRAIN_film_template_para_cb4_ar_coeff_cb16_shift                   (24)
#define  FILM_GRAIN_film_template_para_cb4_ar_coeff_cb17_shift                   (16)
#define  FILM_GRAIN_film_template_para_cb4_ar_coeff_cb18_shift                   (8)
#define  FILM_GRAIN_film_template_para_cb4_ar_coeff_cb19_shift                   (0)
#define  FILM_GRAIN_film_template_para_cb4_ar_coeff_cb16_mask                    (0xFF000000)
#define  FILM_GRAIN_film_template_para_cb4_ar_coeff_cb17_mask                    (0x00FF0000)
#define  FILM_GRAIN_film_template_para_cb4_ar_coeff_cb18_mask                    (0x0000FF00)
#define  FILM_GRAIN_film_template_para_cb4_ar_coeff_cb19_mask                    (0x000000FF)
#define  FILM_GRAIN_film_template_para_cb4_ar_coeff_cb16(data)                   (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_cb4_ar_coeff_cb17(data)                   (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_cb4_ar_coeff_cb18(data)                   (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_cb4_ar_coeff_cb19(data)                   (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_cb4_get_ar_coeff_cb16(data)               ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_cb4_get_ar_coeff_cb17(data)               ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_cb4_get_ar_coeff_cb18(data)               ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_cb4_get_ar_coeff_cb19(data)               (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_cb5                                      0x18005438
#define  FILM_GRAIN_film_template_para_cb5_reg_addr                              "0xB8005438"
#define  FILM_GRAIN_film_template_para_cb5_reg                                   0xB8005438
#define  FILM_GRAIN_film_template_para_cb5_inst_addr                             "0x000E"
#define  set_FILM_GRAIN_film_template_para_cb5_reg(data)                         (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cb5_reg)=data)
#define  get_FILM_GRAIN_film_template_para_cb5_reg                               (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cb5_reg))
#define  FILM_GRAIN_film_template_para_cb5_ar_coeff_cb20_shift                   (24)
#define  FILM_GRAIN_film_template_para_cb5_ar_coeff_cb21_shift                   (16)
#define  FILM_GRAIN_film_template_para_cb5_ar_coeff_cb22_shift                   (8)
#define  FILM_GRAIN_film_template_para_cb5_ar_coeff_cb23_shift                   (0)
#define  FILM_GRAIN_film_template_para_cb5_ar_coeff_cb20_mask                    (0xFF000000)
#define  FILM_GRAIN_film_template_para_cb5_ar_coeff_cb21_mask                    (0x00FF0000)
#define  FILM_GRAIN_film_template_para_cb5_ar_coeff_cb22_mask                    (0x0000FF00)
#define  FILM_GRAIN_film_template_para_cb5_ar_coeff_cb23_mask                    (0x000000FF)
#define  FILM_GRAIN_film_template_para_cb5_ar_coeff_cb20(data)                   (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_cb5_ar_coeff_cb21(data)                   (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_cb5_ar_coeff_cb22(data)                   (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_cb5_ar_coeff_cb23(data)                   (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_cb5_get_ar_coeff_cb20(data)               ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_cb5_get_ar_coeff_cb21(data)               ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_cb5_get_ar_coeff_cb22(data)               ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_cb5_get_ar_coeff_cb23(data)               (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_cb6                                      0x1800543C
#define  FILM_GRAIN_film_template_para_cb6_reg_addr                              "0xB800543C"
#define  FILM_GRAIN_film_template_para_cb6_reg                                   0xB800543C
#define  FILM_GRAIN_film_template_para_cb6_inst_addr                             "0x000F"
#define  set_FILM_GRAIN_film_template_para_cb6_reg(data)                         (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cb6_reg)=data)
#define  get_FILM_GRAIN_film_template_para_cb6_reg                               (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cb6_reg))
#define  FILM_GRAIN_film_template_para_cb6_ar_coeff_cb24_shift                   (0)
#define  FILM_GRAIN_film_template_para_cb6_ar_coeff_cb24_mask                    (0x000000FF)
#define  FILM_GRAIN_film_template_para_cb6_ar_coeff_cb24(data)                   (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_cb6_get_ar_coeff_cb24(data)               (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_cr0                                      0x18005440
#define  FILM_GRAIN_film_template_para_cr0_reg_addr                              "0xB8005440"
#define  FILM_GRAIN_film_template_para_cr0_reg                                   0xB8005440
#define  FILM_GRAIN_film_template_para_cr0_inst_addr                             "0x0010"
#define  set_FILM_GRAIN_film_template_para_cr0_reg(data)                         (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cr0_reg)=data)
#define  get_FILM_GRAIN_film_template_para_cr0_reg                               (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cr0_reg))
#define  FILM_GRAIN_film_template_para_cr0_ar_coeff_cr0_shift                    (24)
#define  FILM_GRAIN_film_template_para_cr0_ar_coeff_cr1_shift                    (16)
#define  FILM_GRAIN_film_template_para_cr0_ar_coeff_cr2_shift                    (8)
#define  FILM_GRAIN_film_template_para_cr0_ar_coeff_cr3_shift                    (0)
#define  FILM_GRAIN_film_template_para_cr0_ar_coeff_cr0_mask                     (0xFF000000)
#define  FILM_GRAIN_film_template_para_cr0_ar_coeff_cr1_mask                     (0x00FF0000)
#define  FILM_GRAIN_film_template_para_cr0_ar_coeff_cr2_mask                     (0x0000FF00)
#define  FILM_GRAIN_film_template_para_cr0_ar_coeff_cr3_mask                     (0x000000FF)
#define  FILM_GRAIN_film_template_para_cr0_ar_coeff_cr0(data)                    (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_cr0_ar_coeff_cr1(data)                    (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_cr0_ar_coeff_cr2(data)                    (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_cr0_ar_coeff_cr3(data)                    (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_cr0_get_ar_coeff_cr0(data)                ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_cr0_get_ar_coeff_cr1(data)                ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_cr0_get_ar_coeff_cr2(data)                ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_cr0_get_ar_coeff_cr3(data)                (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_cr1                                      0x18005444
#define  FILM_GRAIN_film_template_para_cr1_reg_addr                              "0xB8005444"
#define  FILM_GRAIN_film_template_para_cr1_reg                                   0xB8005444
#define  FILM_GRAIN_film_template_para_cr1_inst_addr                             "0x0011"
#define  set_FILM_GRAIN_film_template_para_cr1_reg(data)                         (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cr1_reg)=data)
#define  get_FILM_GRAIN_film_template_para_cr1_reg                               (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cr1_reg))
#define  FILM_GRAIN_film_template_para_cr1_ar_coeff_cr4_shift                    (24)
#define  FILM_GRAIN_film_template_para_cr1_ar_coeff_cr5_shift                    (16)
#define  FILM_GRAIN_film_template_para_cr1_ar_coeff_cr6_shift                    (8)
#define  FILM_GRAIN_film_template_para_cr1_ar_coeff_cr7_shift                    (0)
#define  FILM_GRAIN_film_template_para_cr1_ar_coeff_cr4_mask                     (0xFF000000)
#define  FILM_GRAIN_film_template_para_cr1_ar_coeff_cr5_mask                     (0x00FF0000)
#define  FILM_GRAIN_film_template_para_cr1_ar_coeff_cr6_mask                     (0x0000FF00)
#define  FILM_GRAIN_film_template_para_cr1_ar_coeff_cr7_mask                     (0x000000FF)
#define  FILM_GRAIN_film_template_para_cr1_ar_coeff_cr4(data)                    (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_cr1_ar_coeff_cr5(data)                    (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_cr1_ar_coeff_cr6(data)                    (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_cr1_ar_coeff_cr7(data)                    (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_cr1_get_ar_coeff_cr4(data)                ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_cr1_get_ar_coeff_cr5(data)                ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_cr1_get_ar_coeff_cr6(data)                ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_cr1_get_ar_coeff_cr7(data)                (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_cr2                                      0x18005448
#define  FILM_GRAIN_film_template_para_cr2_reg_addr                              "0xB8005448"
#define  FILM_GRAIN_film_template_para_cr2_reg                                   0xB8005448
#define  FILM_GRAIN_film_template_para_cr2_inst_addr                             "0x0012"
#define  set_FILM_GRAIN_film_template_para_cr2_reg(data)                         (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cr2_reg)=data)
#define  get_FILM_GRAIN_film_template_para_cr2_reg                               (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cr2_reg))
#define  FILM_GRAIN_film_template_para_cr2_ar_coeff_cr8_shift                    (24)
#define  FILM_GRAIN_film_template_para_cr2_ar_coeff_cr9_shift                    (16)
#define  FILM_GRAIN_film_template_para_cr2_ar_coeff_cr10_shift                   (8)
#define  FILM_GRAIN_film_template_para_cr2_ar_coeff_cr11_shift                   (0)
#define  FILM_GRAIN_film_template_para_cr2_ar_coeff_cr8_mask                     (0xFF000000)
#define  FILM_GRAIN_film_template_para_cr2_ar_coeff_cr9_mask                     (0x00FF0000)
#define  FILM_GRAIN_film_template_para_cr2_ar_coeff_cr10_mask                    (0x0000FF00)
#define  FILM_GRAIN_film_template_para_cr2_ar_coeff_cr11_mask                    (0x000000FF)
#define  FILM_GRAIN_film_template_para_cr2_ar_coeff_cr8(data)                    (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_cr2_ar_coeff_cr9(data)                    (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_cr2_ar_coeff_cr10(data)                   (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_cr2_ar_coeff_cr11(data)                   (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_cr2_get_ar_coeff_cr8(data)                ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_cr2_get_ar_coeff_cr9(data)                ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_cr2_get_ar_coeff_cr10(data)               ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_cr2_get_ar_coeff_cr11(data)               (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_cr3                                      0x1800544C
#define  FILM_GRAIN_film_template_para_cr3_reg_addr                              "0xB800544C"
#define  FILM_GRAIN_film_template_para_cr3_reg                                   0xB800544C
#define  FILM_GRAIN_film_template_para_cr3_inst_addr                             "0x0013"
#define  set_FILM_GRAIN_film_template_para_cr3_reg(data)                         (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cr3_reg)=data)
#define  get_FILM_GRAIN_film_template_para_cr3_reg                               (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cr3_reg))
#define  FILM_GRAIN_film_template_para_cr3_ar_coeff_cr12_shift                   (24)
#define  FILM_GRAIN_film_template_para_cr3_ar_coeff_cr13_shift                   (16)
#define  FILM_GRAIN_film_template_para_cr3_ar_coeff_cr14_shift                   (8)
#define  FILM_GRAIN_film_template_para_cr3_ar_coeff_cr15_shift                   (0)
#define  FILM_GRAIN_film_template_para_cr3_ar_coeff_cr12_mask                    (0xFF000000)
#define  FILM_GRAIN_film_template_para_cr3_ar_coeff_cr13_mask                    (0x00FF0000)
#define  FILM_GRAIN_film_template_para_cr3_ar_coeff_cr14_mask                    (0x0000FF00)
#define  FILM_GRAIN_film_template_para_cr3_ar_coeff_cr15_mask                    (0x000000FF)
#define  FILM_GRAIN_film_template_para_cr3_ar_coeff_cr12(data)                   (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_cr3_ar_coeff_cr13(data)                   (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_cr3_ar_coeff_cr14(data)                   (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_cr3_ar_coeff_cr15(data)                   (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_cr3_get_ar_coeff_cr12(data)               ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_cr3_get_ar_coeff_cr13(data)               ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_cr3_get_ar_coeff_cr14(data)               ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_cr3_get_ar_coeff_cr15(data)               (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_cr4                                      0x18005450
#define  FILM_GRAIN_film_template_para_cr4_reg_addr                              "0xB8005450"
#define  FILM_GRAIN_film_template_para_cr4_reg                                   0xB8005450
#define  FILM_GRAIN_film_template_para_cr4_inst_addr                             "0x0014"
#define  set_FILM_GRAIN_film_template_para_cr4_reg(data)                         (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cr4_reg)=data)
#define  get_FILM_GRAIN_film_template_para_cr4_reg                               (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cr4_reg))
#define  FILM_GRAIN_film_template_para_cr4_ar_coeff_cr16_shift                   (24)
#define  FILM_GRAIN_film_template_para_cr4_ar_coeff_cr17_shift                   (16)
#define  FILM_GRAIN_film_template_para_cr4_ar_coeff_cr18_shift                   (8)
#define  FILM_GRAIN_film_template_para_cr4_ar_coeff_cr19_shift                   (0)
#define  FILM_GRAIN_film_template_para_cr4_ar_coeff_cr16_mask                    (0xFF000000)
#define  FILM_GRAIN_film_template_para_cr4_ar_coeff_cr17_mask                    (0x00FF0000)
#define  FILM_GRAIN_film_template_para_cr4_ar_coeff_cr18_mask                    (0x0000FF00)
#define  FILM_GRAIN_film_template_para_cr4_ar_coeff_cr19_mask                    (0x000000FF)
#define  FILM_GRAIN_film_template_para_cr4_ar_coeff_cr16(data)                   (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_cr4_ar_coeff_cr17(data)                   (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_cr4_ar_coeff_cr18(data)                   (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_cr4_ar_coeff_cr19(data)                   (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_cr4_get_ar_coeff_cr16(data)               ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_cr4_get_ar_coeff_cr17(data)               ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_cr4_get_ar_coeff_cr18(data)               ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_cr4_get_ar_coeff_cr19(data)               (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_cr5                                      0x18005454
#define  FILM_GRAIN_film_template_para_cr5_reg_addr                              "0xB8005454"
#define  FILM_GRAIN_film_template_para_cr5_reg                                   0xB8005454
#define  FILM_GRAIN_film_template_para_cr5_inst_addr                             "0x0015"
#define  set_FILM_GRAIN_film_template_para_cr5_reg(data)                         (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cr5_reg)=data)
#define  get_FILM_GRAIN_film_template_para_cr5_reg                               (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cr5_reg))
#define  FILM_GRAIN_film_template_para_cr5_ar_coeff_cr20_shift                   (24)
#define  FILM_GRAIN_film_template_para_cr5_ar_coeff_cr21_shift                   (16)
#define  FILM_GRAIN_film_template_para_cr5_ar_coeff_cr22_shift                   (8)
#define  FILM_GRAIN_film_template_para_cr5_ar_coeff_cr23_shift                   (0)
#define  FILM_GRAIN_film_template_para_cr5_ar_coeff_cr20_mask                    (0xFF000000)
#define  FILM_GRAIN_film_template_para_cr5_ar_coeff_cr21_mask                    (0x00FF0000)
#define  FILM_GRAIN_film_template_para_cr5_ar_coeff_cr22_mask                    (0x0000FF00)
#define  FILM_GRAIN_film_template_para_cr5_ar_coeff_cr23_mask                    (0x000000FF)
#define  FILM_GRAIN_film_template_para_cr5_ar_coeff_cr20(data)                   (0xFF000000&((data)<<24))
#define  FILM_GRAIN_film_template_para_cr5_ar_coeff_cr21(data)                   (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_film_template_para_cr5_ar_coeff_cr22(data)                   (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_template_para_cr5_ar_coeff_cr23(data)                   (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_cr5_get_ar_coeff_cr20(data)               ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_film_template_para_cr5_get_ar_coeff_cr21(data)               ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_film_template_para_cr5_get_ar_coeff_cr22(data)               ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_template_para_cr5_get_ar_coeff_cr23(data)               (0x000000FF&(data))

#define  FILM_GRAIN_film_template_para_cr6                                      0x18005458
#define  FILM_GRAIN_film_template_para_cr6_reg_addr                              "0xB8005458"
#define  FILM_GRAIN_film_template_para_cr6_reg                                   0xB8005458
#define  FILM_GRAIN_film_template_para_cr6_inst_addr                             "0x0016"
#define  set_FILM_GRAIN_film_template_para_cr6_reg(data)                         (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cr6_reg)=data)
#define  get_FILM_GRAIN_film_template_para_cr6_reg                               (*((volatile unsigned int*)FILM_GRAIN_film_template_para_cr6_reg))
#define  FILM_GRAIN_film_template_para_cr6_ar_coeff_cr24_shift                   (0)
#define  FILM_GRAIN_film_template_para_cr6_ar_coeff_cr24_mask                    (0x000000FF)
#define  FILM_GRAIN_film_template_para_cr6_ar_coeff_cr24(data)                   (0x000000FF&(data))
#define  FILM_GRAIN_film_template_para_cr6_get_ar_coeff_cr24(data)               (0x000000FF&(data))

#define  FILM_GRAIN_film_piece_wise_point                                       0x1800545C
#define  FILM_GRAIN_film_piece_wise_point_reg_addr                               "0xB800545C"
#define  FILM_GRAIN_film_piece_wise_point_reg                                    0xB800545C
#define  FILM_GRAIN_film_piece_wise_point_inst_addr                              "0x0017"
#define  set_FILM_GRAIN_film_piece_wise_point_reg(data)                          (*((volatile unsigned int*)FILM_GRAIN_film_piece_wise_point_reg)=data)
#define  get_FILM_GRAIN_film_piece_wise_point_reg                                (*((volatile unsigned int*)FILM_GRAIN_film_piece_wise_point_reg))
#define  FILM_GRAIN_film_piece_wise_point_chroma_scaling_from_luma_shift         (31)
#define  FILM_GRAIN_film_piece_wise_point_num_y_point_shift                      (8)
#define  FILM_GRAIN_film_piece_wise_point_num_cb_point_shift                     (4)
#define  FILM_GRAIN_film_piece_wise_point_num_cr_point_shift                     (0)
#define  FILM_GRAIN_film_piece_wise_point_chroma_scaling_from_luma_mask          (0x80000000)
#define  FILM_GRAIN_film_piece_wise_point_num_y_point_mask                       (0x00000F00)
#define  FILM_GRAIN_film_piece_wise_point_num_cb_point_mask                      (0x000000F0)
#define  FILM_GRAIN_film_piece_wise_point_num_cr_point_mask                      (0x0000000F)
#define  FILM_GRAIN_film_piece_wise_point_chroma_scaling_from_luma(data)         (0x80000000&((data)<<31))
#define  FILM_GRAIN_film_piece_wise_point_num_y_point(data)                      (0x00000F00&((data)<<8))
#define  FILM_GRAIN_film_piece_wise_point_num_cb_point(data)                     (0x000000F0&((data)<<4))
#define  FILM_GRAIN_film_piece_wise_point_num_cr_point(data)                     (0x0000000F&(data))
#define  FILM_GRAIN_film_piece_wise_point_get_chroma_scaling_from_luma(data)     ((0x80000000&(data))>>31)
#define  FILM_GRAIN_film_piece_wise_point_get_num_y_point(data)                  ((0x00000F00&(data))>>8)
#define  FILM_GRAIN_film_piece_wise_point_get_num_cb_point(data)                 ((0x000000F0&(data))>>4)
#define  FILM_GRAIN_film_piece_wise_point_get_num_cr_point(data)                 (0x0000000F&(data))

#define  FILM_GRAIN_y_film_piece_wise_position_x0                               0x18005460
#define  FILM_GRAIN_y_film_piece_wise_position_x0_reg_addr                       "0xB8005460"
#define  FILM_GRAIN_y_film_piece_wise_position_x0_reg                            0xB8005460
#define  FILM_GRAIN_y_film_piece_wise_position_x0_inst_addr                      "0x0018"
#define  set_FILM_GRAIN_y_film_piece_wise_position_x0_reg(data)                  (*((volatile unsigned int*)FILM_GRAIN_y_film_piece_wise_position_x0_reg)=data)
#define  get_FILM_GRAIN_y_film_piece_wise_position_x0_reg                        (*((volatile unsigned int*)FILM_GRAIN_y_film_piece_wise_position_x0_reg))
#define  FILM_GRAIN_y_film_piece_wise_position_x0_y_scale_point_x0_shift         (24)
#define  FILM_GRAIN_y_film_piece_wise_position_x0_y_scale_point_x1_shift         (16)
#define  FILM_GRAIN_y_film_piece_wise_position_x0_y_scale_point_x2_shift         (8)
#define  FILM_GRAIN_y_film_piece_wise_position_x0_y_scale_point_x3_shift         (0)
#define  FILM_GRAIN_y_film_piece_wise_position_x0_y_scale_point_x0_mask          (0xFF000000)
#define  FILM_GRAIN_y_film_piece_wise_position_x0_y_scale_point_x1_mask          (0x00FF0000)
#define  FILM_GRAIN_y_film_piece_wise_position_x0_y_scale_point_x2_mask          (0x0000FF00)
#define  FILM_GRAIN_y_film_piece_wise_position_x0_y_scale_point_x3_mask          (0x000000FF)
#define  FILM_GRAIN_y_film_piece_wise_position_x0_y_scale_point_x0(data)         (0xFF000000&((data)<<24))
#define  FILM_GRAIN_y_film_piece_wise_position_x0_y_scale_point_x1(data)         (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_y_film_piece_wise_position_x0_y_scale_point_x2(data)         (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_y_film_piece_wise_position_x0_y_scale_point_x3(data)         (0x000000FF&(data))
#define  FILM_GRAIN_y_film_piece_wise_position_x0_get_y_scale_point_x0(data)     ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_y_film_piece_wise_position_x0_get_y_scale_point_x1(data)     ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_y_film_piece_wise_position_x0_get_y_scale_point_x2(data)     ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_y_film_piece_wise_position_x0_get_y_scale_point_x3(data)     (0x000000FF&(data))

#define  FILM_GRAIN_y_film_piece_wise_position_x1                               0x18005464
#define  FILM_GRAIN_y_film_piece_wise_position_x1_reg_addr                       "0xB8005464"
#define  FILM_GRAIN_y_film_piece_wise_position_x1_reg                            0xB8005464
#define  FILM_GRAIN_y_film_piece_wise_position_x1_inst_addr                      "0x0019"
#define  set_FILM_GRAIN_y_film_piece_wise_position_x1_reg(data)                  (*((volatile unsigned int*)FILM_GRAIN_y_film_piece_wise_position_x1_reg)=data)
#define  get_FILM_GRAIN_y_film_piece_wise_position_x1_reg                        (*((volatile unsigned int*)FILM_GRAIN_y_film_piece_wise_position_x1_reg))
#define  FILM_GRAIN_y_film_piece_wise_position_x1_y_scale_point_x4_shift         (24)
#define  FILM_GRAIN_y_film_piece_wise_position_x1_y_scale_point_x5_shift         (16)
#define  FILM_GRAIN_y_film_piece_wise_position_x1_y_scale_point_x6_shift         (8)
#define  FILM_GRAIN_y_film_piece_wise_position_x1_y_scale_point_x7_shift         (0)
#define  FILM_GRAIN_y_film_piece_wise_position_x1_y_scale_point_x4_mask          (0xFF000000)
#define  FILM_GRAIN_y_film_piece_wise_position_x1_y_scale_point_x5_mask          (0x00FF0000)
#define  FILM_GRAIN_y_film_piece_wise_position_x1_y_scale_point_x6_mask          (0x0000FF00)
#define  FILM_GRAIN_y_film_piece_wise_position_x1_y_scale_point_x7_mask          (0x000000FF)
#define  FILM_GRAIN_y_film_piece_wise_position_x1_y_scale_point_x4(data)         (0xFF000000&((data)<<24))
#define  FILM_GRAIN_y_film_piece_wise_position_x1_y_scale_point_x5(data)         (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_y_film_piece_wise_position_x1_y_scale_point_x6(data)         (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_y_film_piece_wise_position_x1_y_scale_point_x7(data)         (0x000000FF&(data))
#define  FILM_GRAIN_y_film_piece_wise_position_x1_get_y_scale_point_x4(data)     ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_y_film_piece_wise_position_x1_get_y_scale_point_x5(data)     ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_y_film_piece_wise_position_x1_get_y_scale_point_x6(data)     ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_y_film_piece_wise_position_x1_get_y_scale_point_x7(data)     (0x000000FF&(data))

#define  FILM_GRAIN_y_film_piece_wise_position_x2                               0x18005468
#define  FILM_GRAIN_y_film_piece_wise_position_x2_reg_addr                       "0xB8005468"
#define  FILM_GRAIN_y_film_piece_wise_position_x2_reg                            0xB8005468
#define  FILM_GRAIN_y_film_piece_wise_position_x2_inst_addr                      "0x001A"
#define  set_FILM_GRAIN_y_film_piece_wise_position_x2_reg(data)                  (*((volatile unsigned int*)FILM_GRAIN_y_film_piece_wise_position_x2_reg)=data)
#define  get_FILM_GRAIN_y_film_piece_wise_position_x2_reg                        (*((volatile unsigned int*)FILM_GRAIN_y_film_piece_wise_position_x2_reg))
#define  FILM_GRAIN_y_film_piece_wise_position_x2_y_scale_point_x8_shift         (24)
#define  FILM_GRAIN_y_film_piece_wise_position_x2_y_scale_point_x9_shift         (16)
#define  FILM_GRAIN_y_film_piece_wise_position_x2_y_scale_point_x10_shift        (8)
#define  FILM_GRAIN_y_film_piece_wise_position_x2_y_scale_point_x11_shift        (0)
#define  FILM_GRAIN_y_film_piece_wise_position_x2_y_scale_point_x8_mask          (0xFF000000)
#define  FILM_GRAIN_y_film_piece_wise_position_x2_y_scale_point_x9_mask          (0x00FF0000)
#define  FILM_GRAIN_y_film_piece_wise_position_x2_y_scale_point_x10_mask         (0x0000FF00)
#define  FILM_GRAIN_y_film_piece_wise_position_x2_y_scale_point_x11_mask         (0x000000FF)
#define  FILM_GRAIN_y_film_piece_wise_position_x2_y_scale_point_x8(data)         (0xFF000000&((data)<<24))
#define  FILM_GRAIN_y_film_piece_wise_position_x2_y_scale_point_x9(data)         (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_y_film_piece_wise_position_x2_y_scale_point_x10(data)        (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_y_film_piece_wise_position_x2_y_scale_point_x11(data)        (0x000000FF&(data))
#define  FILM_GRAIN_y_film_piece_wise_position_x2_get_y_scale_point_x8(data)     ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_y_film_piece_wise_position_x2_get_y_scale_point_x9(data)     ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_y_film_piece_wise_position_x2_get_y_scale_point_x10(data)    ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_y_film_piece_wise_position_x2_get_y_scale_point_x11(data)    (0x000000FF&(data))

#define  FILM_GRAIN_y_film_piece_wise_position_x3                               0x1800546C
#define  FILM_GRAIN_y_film_piece_wise_position_x3_reg_addr                       "0xB800546C"
#define  FILM_GRAIN_y_film_piece_wise_position_x3_reg                            0xB800546C
#define  FILM_GRAIN_y_film_piece_wise_position_x3_inst_addr                      "0x001B"
#define  set_FILM_GRAIN_y_film_piece_wise_position_x3_reg(data)                  (*((volatile unsigned int*)FILM_GRAIN_y_film_piece_wise_position_x3_reg)=data)
#define  get_FILM_GRAIN_y_film_piece_wise_position_x3_reg                        (*((volatile unsigned int*)FILM_GRAIN_y_film_piece_wise_position_x3_reg))
#define  FILM_GRAIN_y_film_piece_wise_position_x3_y_scale_point_x12_shift        (8)
#define  FILM_GRAIN_y_film_piece_wise_position_x3_y_scale_point_x13_shift        (0)
#define  FILM_GRAIN_y_film_piece_wise_position_x3_y_scale_point_x12_mask         (0x0000FF00)
#define  FILM_GRAIN_y_film_piece_wise_position_x3_y_scale_point_x13_mask         (0x000000FF)
#define  FILM_GRAIN_y_film_piece_wise_position_x3_y_scale_point_x12(data)        (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_y_film_piece_wise_position_x3_y_scale_point_x13(data)        (0x000000FF&(data))
#define  FILM_GRAIN_y_film_piece_wise_position_x3_get_y_scale_point_x12(data)    ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_y_film_piece_wise_position_x3_get_y_scale_point_x13(data)    (0x000000FF&(data))

#define  FILM_GRAIN_y_film_piece_wise_position_y0                               0x18005470
#define  FILM_GRAIN_y_film_piece_wise_position_y0_reg_addr                       "0xB8005470"
#define  FILM_GRAIN_y_film_piece_wise_position_y0_reg                            0xB8005470
#define  FILM_GRAIN_y_film_piece_wise_position_y0_inst_addr                      "0x001C"
#define  set_FILM_GRAIN_y_film_piece_wise_position_y0_reg(data)                  (*((volatile unsigned int*)FILM_GRAIN_y_film_piece_wise_position_y0_reg)=data)
#define  get_FILM_GRAIN_y_film_piece_wise_position_y0_reg                        (*((volatile unsigned int*)FILM_GRAIN_y_film_piece_wise_position_y0_reg))
#define  FILM_GRAIN_y_film_piece_wise_position_y0_y_scale_point_y0_shift         (24)
#define  FILM_GRAIN_y_film_piece_wise_position_y0_y_scale_point_y1_shift         (16)
#define  FILM_GRAIN_y_film_piece_wise_position_y0_y_scale_point_y2_shift         (8)
#define  FILM_GRAIN_y_film_piece_wise_position_y0_y_scale_point_y3_shift         (0)
#define  FILM_GRAIN_y_film_piece_wise_position_y0_y_scale_point_y0_mask          (0xFF000000)
#define  FILM_GRAIN_y_film_piece_wise_position_y0_y_scale_point_y1_mask          (0x00FF0000)
#define  FILM_GRAIN_y_film_piece_wise_position_y0_y_scale_point_y2_mask          (0x0000FF00)
#define  FILM_GRAIN_y_film_piece_wise_position_y0_y_scale_point_y3_mask          (0x000000FF)
#define  FILM_GRAIN_y_film_piece_wise_position_y0_y_scale_point_y0(data)         (0xFF000000&((data)<<24))
#define  FILM_GRAIN_y_film_piece_wise_position_y0_y_scale_point_y1(data)         (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_y_film_piece_wise_position_y0_y_scale_point_y2(data)         (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_y_film_piece_wise_position_y0_y_scale_point_y3(data)         (0x000000FF&(data))
#define  FILM_GRAIN_y_film_piece_wise_position_y0_get_y_scale_point_y0(data)     ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_y_film_piece_wise_position_y0_get_y_scale_point_y1(data)     ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_y_film_piece_wise_position_y0_get_y_scale_point_y2(data)     ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_y_film_piece_wise_position_y0_get_y_scale_point_y3(data)     (0x000000FF&(data))

#define  FILM_GRAIN_y_film_piece_wise_position_y1                               0x18005474
#define  FILM_GRAIN_y_film_piece_wise_position_y1_reg_addr                       "0xB8005474"
#define  FILM_GRAIN_y_film_piece_wise_position_y1_reg                            0xB8005474
#define  FILM_GRAIN_y_film_piece_wise_position_y1_inst_addr                      "0x001D"
#define  set_FILM_GRAIN_y_film_piece_wise_position_y1_reg(data)                  (*((volatile unsigned int*)FILM_GRAIN_y_film_piece_wise_position_y1_reg)=data)
#define  get_FILM_GRAIN_y_film_piece_wise_position_y1_reg                        (*((volatile unsigned int*)FILM_GRAIN_y_film_piece_wise_position_y1_reg))
#define  FILM_GRAIN_y_film_piece_wise_position_y1_y_scale_point_y4_shift         (24)
#define  FILM_GRAIN_y_film_piece_wise_position_y1_y_scale_point_y5_shift         (16)
#define  FILM_GRAIN_y_film_piece_wise_position_y1_y_scale_point_y6_shift         (8)
#define  FILM_GRAIN_y_film_piece_wise_position_y1_y_scale_point_y7_shift         (0)
#define  FILM_GRAIN_y_film_piece_wise_position_y1_y_scale_point_y4_mask          (0xFF000000)
#define  FILM_GRAIN_y_film_piece_wise_position_y1_y_scale_point_y5_mask          (0x00FF0000)
#define  FILM_GRAIN_y_film_piece_wise_position_y1_y_scale_point_y6_mask          (0x0000FF00)
#define  FILM_GRAIN_y_film_piece_wise_position_y1_y_scale_point_y7_mask          (0x000000FF)
#define  FILM_GRAIN_y_film_piece_wise_position_y1_y_scale_point_y4(data)         (0xFF000000&((data)<<24))
#define  FILM_GRAIN_y_film_piece_wise_position_y1_y_scale_point_y5(data)         (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_y_film_piece_wise_position_y1_y_scale_point_y6(data)         (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_y_film_piece_wise_position_y1_y_scale_point_y7(data)         (0x000000FF&(data))
#define  FILM_GRAIN_y_film_piece_wise_position_y1_get_y_scale_point_y4(data)     ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_y_film_piece_wise_position_y1_get_y_scale_point_y5(data)     ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_y_film_piece_wise_position_y1_get_y_scale_point_y6(data)     ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_y_film_piece_wise_position_y1_get_y_scale_point_y7(data)     (0x000000FF&(data))

#define  FILM_GRAIN_y_film_piece_wise_position_y2                               0x18005478
#define  FILM_GRAIN_y_film_piece_wise_position_y2_reg_addr                       "0xB8005478"
#define  FILM_GRAIN_y_film_piece_wise_position_y2_reg                            0xB8005478
#define  FILM_GRAIN_y_film_piece_wise_position_y2_inst_addr                      "0x001E"
#define  set_FILM_GRAIN_y_film_piece_wise_position_y2_reg(data)                  (*((volatile unsigned int*)FILM_GRAIN_y_film_piece_wise_position_y2_reg)=data)
#define  get_FILM_GRAIN_y_film_piece_wise_position_y2_reg                        (*((volatile unsigned int*)FILM_GRAIN_y_film_piece_wise_position_y2_reg))
#define  FILM_GRAIN_y_film_piece_wise_position_y2_y_scale_point_y8_shift         (24)
#define  FILM_GRAIN_y_film_piece_wise_position_y2_y_scale_point_y9_shift         (16)
#define  FILM_GRAIN_y_film_piece_wise_position_y2_y_scale_point_y10_shift        (8)
#define  FILM_GRAIN_y_film_piece_wise_position_y2_y_scale_point_y11_shift        (0)
#define  FILM_GRAIN_y_film_piece_wise_position_y2_y_scale_point_y8_mask          (0xFF000000)
#define  FILM_GRAIN_y_film_piece_wise_position_y2_y_scale_point_y9_mask          (0x00FF0000)
#define  FILM_GRAIN_y_film_piece_wise_position_y2_y_scale_point_y10_mask         (0x0000FF00)
#define  FILM_GRAIN_y_film_piece_wise_position_y2_y_scale_point_y11_mask         (0x000000FF)
#define  FILM_GRAIN_y_film_piece_wise_position_y2_y_scale_point_y8(data)         (0xFF000000&((data)<<24))
#define  FILM_GRAIN_y_film_piece_wise_position_y2_y_scale_point_y9(data)         (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_y_film_piece_wise_position_y2_y_scale_point_y10(data)        (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_y_film_piece_wise_position_y2_y_scale_point_y11(data)        (0x000000FF&(data))
#define  FILM_GRAIN_y_film_piece_wise_position_y2_get_y_scale_point_y8(data)     ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_y_film_piece_wise_position_y2_get_y_scale_point_y9(data)     ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_y_film_piece_wise_position_y2_get_y_scale_point_y10(data)    ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_y_film_piece_wise_position_y2_get_y_scale_point_y11(data)    (0x000000FF&(data))

#define  FILM_GRAIN_y_film_piece_wise_position_y3                               0x1800547C
#define  FILM_GRAIN_y_film_piece_wise_position_y3_reg_addr                       "0xB800547C"
#define  FILM_GRAIN_y_film_piece_wise_position_y3_reg                            0xB800547C
#define  FILM_GRAIN_y_film_piece_wise_position_y3_inst_addr                      "0x001F"
#define  set_FILM_GRAIN_y_film_piece_wise_position_y3_reg(data)                  (*((volatile unsigned int*)FILM_GRAIN_y_film_piece_wise_position_y3_reg)=data)
#define  get_FILM_GRAIN_y_film_piece_wise_position_y3_reg                        (*((volatile unsigned int*)FILM_GRAIN_y_film_piece_wise_position_y3_reg))
#define  FILM_GRAIN_y_film_piece_wise_position_y3_y_scale_point_y12_shift        (8)
#define  FILM_GRAIN_y_film_piece_wise_position_y3_y_scale_point_y13_shift        (0)
#define  FILM_GRAIN_y_film_piece_wise_position_y3_y_scale_point_y12_mask         (0x0000FF00)
#define  FILM_GRAIN_y_film_piece_wise_position_y3_y_scale_point_y13_mask         (0x000000FF)
#define  FILM_GRAIN_y_film_piece_wise_position_y3_y_scale_point_y12(data)        (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_y_film_piece_wise_position_y3_y_scale_point_y13(data)        (0x000000FF&(data))
#define  FILM_GRAIN_y_film_piece_wise_position_y3_get_y_scale_point_y12(data)    ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_y_film_piece_wise_position_y3_get_y_scale_point_y13(data)    (0x000000FF&(data))

#define  FILM_GRAIN_cb_film_piece_wise_position_x0                              0x18005480
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_reg_addr                      "0xB8005480"
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_reg                           0xB8005480
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_inst_addr                     "0x0020"
#define  set_FILM_GRAIN_cb_film_piece_wise_position_x0_reg(data)                 (*((volatile unsigned int*)FILM_GRAIN_cb_film_piece_wise_position_x0_reg)=data)
#define  get_FILM_GRAIN_cb_film_piece_wise_position_x0_reg                       (*((volatile unsigned int*)FILM_GRAIN_cb_film_piece_wise_position_x0_reg))
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_cb_scale_point_x0_shift       (24)
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_cb_scale_point_x1_shift       (16)
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_cb_scale_point_x2_shift       (8)
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_cb_scale_point_x3_shift       (0)
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_cb_scale_point_x0_mask        (0xFF000000)
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_cb_scale_point_x1_mask        (0x00FF0000)
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_cb_scale_point_x2_mask        (0x0000FF00)
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_cb_scale_point_x3_mask        (0x000000FF)
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_cb_scale_point_x0(data)       (0xFF000000&((data)<<24))
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_cb_scale_point_x1(data)       (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_cb_scale_point_x2(data)       (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_cb_scale_point_x3(data)       (0x000000FF&(data))
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_get_cb_scale_point_x0(data)   ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_get_cb_scale_point_x1(data)   ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_get_cb_scale_point_x2(data)   ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_cb_film_piece_wise_position_x0_get_cb_scale_point_x3(data)   (0x000000FF&(data))

#define  FILM_GRAIN_cb_film_piece_wise_position_x1                              0x18005484
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_reg_addr                      "0xB8005484"
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_reg                           0xB8005484
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_inst_addr                     "0x0021"
#define  set_FILM_GRAIN_cb_film_piece_wise_position_x1_reg(data)                 (*((volatile unsigned int*)FILM_GRAIN_cb_film_piece_wise_position_x1_reg)=data)
#define  get_FILM_GRAIN_cb_film_piece_wise_position_x1_reg                       (*((volatile unsigned int*)FILM_GRAIN_cb_film_piece_wise_position_x1_reg))
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_cb_scale_point_x4_shift       (24)
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_cb_scale_point_x5_shift       (16)
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_cb_scale_point_x6_shift       (8)
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_cb_scale_point_x7_shift       (0)
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_cb_scale_point_x4_mask        (0xFF000000)
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_cb_scale_point_x5_mask        (0x00FF0000)
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_cb_scale_point_x6_mask        (0x0000FF00)
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_cb_scale_point_x7_mask        (0x000000FF)
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_cb_scale_point_x4(data)       (0xFF000000&((data)<<24))
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_cb_scale_point_x5(data)       (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_cb_scale_point_x6(data)       (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_cb_scale_point_x7(data)       (0x000000FF&(data))
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_get_cb_scale_point_x4(data)   ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_get_cb_scale_point_x5(data)   ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_get_cb_scale_point_x6(data)   ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_cb_film_piece_wise_position_x1_get_cb_scale_point_x7(data)   (0x000000FF&(data))

#define  FILM_GRAIN_cb_film_piece_wise_position_x2                              0x18005488
#define  FILM_GRAIN_cb_film_piece_wise_position_x2_reg_addr                      "0xB8005488"
#define  FILM_GRAIN_cb_film_piece_wise_position_x2_reg                           0xB8005488
#define  FILM_GRAIN_cb_film_piece_wise_position_x2_inst_addr                     "0x0022"
#define  set_FILM_GRAIN_cb_film_piece_wise_position_x2_reg(data)                 (*((volatile unsigned int*)FILM_GRAIN_cb_film_piece_wise_position_x2_reg)=data)
#define  get_FILM_GRAIN_cb_film_piece_wise_position_x2_reg                       (*((volatile unsigned int*)FILM_GRAIN_cb_film_piece_wise_position_x2_reg))
#define  FILM_GRAIN_cb_film_piece_wise_position_x2_cb_scale_point_x8_shift       (8)
#define  FILM_GRAIN_cb_film_piece_wise_position_x2_cb_scale_point_x9_shift       (0)
#define  FILM_GRAIN_cb_film_piece_wise_position_x2_cb_scale_point_x8_mask        (0x0000FF00)
#define  FILM_GRAIN_cb_film_piece_wise_position_x2_cb_scale_point_x9_mask        (0x000000FF)
#define  FILM_GRAIN_cb_film_piece_wise_position_x2_cb_scale_point_x8(data)       (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_cb_film_piece_wise_position_x2_cb_scale_point_x9(data)       (0x000000FF&(data))
#define  FILM_GRAIN_cb_film_piece_wise_position_x2_get_cb_scale_point_x8(data)   ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_cb_film_piece_wise_position_x2_get_cb_scale_point_x9(data)   (0x000000FF&(data))

#define  FILM_GRAIN_cb_film_piece_wise_position_y0                              0x1800548C
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_reg_addr                      "0xB800548C"
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_reg                           0xB800548C
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_inst_addr                     "0x0023"
#define  set_FILM_GRAIN_cb_film_piece_wise_position_y0_reg(data)                 (*((volatile unsigned int*)FILM_GRAIN_cb_film_piece_wise_position_y0_reg)=data)
#define  get_FILM_GRAIN_cb_film_piece_wise_position_y0_reg                       (*((volatile unsigned int*)FILM_GRAIN_cb_film_piece_wise_position_y0_reg))
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_cb_scale_point_y0_shift       (24)
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_cb_scale_point_y1_shift       (16)
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_cb_scale_point_y2_shift       (8)
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_cb_scale_point_y3_shift       (0)
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_cb_scale_point_y0_mask        (0xFF000000)
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_cb_scale_point_y1_mask        (0x00FF0000)
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_cb_scale_point_y2_mask        (0x0000FF00)
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_cb_scale_point_y3_mask        (0x000000FF)
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_cb_scale_point_y0(data)       (0xFF000000&((data)<<24))
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_cb_scale_point_y1(data)       (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_cb_scale_point_y2(data)       (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_cb_scale_point_y3(data)       (0x000000FF&(data))
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_get_cb_scale_point_y0(data)   ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_get_cb_scale_point_y1(data)   ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_get_cb_scale_point_y2(data)   ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_cb_film_piece_wise_position_y0_get_cb_scale_point_y3(data)   (0x000000FF&(data))

#define  FILM_GRAIN_cb_film_piece_wise_position_y1                              0x18005490
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_reg_addr                      "0xB8005490"
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_reg                           0xB8005490
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_inst_addr                     "0x0024"
#define  set_FILM_GRAIN_cb_film_piece_wise_position_y1_reg(data)                 (*((volatile unsigned int*)FILM_GRAIN_cb_film_piece_wise_position_y1_reg)=data)
#define  get_FILM_GRAIN_cb_film_piece_wise_position_y1_reg                       (*((volatile unsigned int*)FILM_GRAIN_cb_film_piece_wise_position_y1_reg))
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_cb_scale_point_y4_shift       (24)
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_cb_scale_point_y5_shift       (16)
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_cb_scale_point_y6_shift       (8)
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_cb_scale_point_y7_shift       (0)
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_cb_scale_point_y4_mask        (0xFF000000)
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_cb_scale_point_y5_mask        (0x00FF0000)
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_cb_scale_point_y6_mask        (0x0000FF00)
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_cb_scale_point_y7_mask        (0x000000FF)
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_cb_scale_point_y4(data)       (0xFF000000&((data)<<24))
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_cb_scale_point_y5(data)       (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_cb_scale_point_y6(data)       (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_cb_scale_point_y7(data)       (0x000000FF&(data))
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_get_cb_scale_point_y4(data)   ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_get_cb_scale_point_y5(data)   ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_get_cb_scale_point_y6(data)   ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_cb_film_piece_wise_position_y1_get_cb_scale_point_y7(data)   (0x000000FF&(data))

#define  FILM_GRAIN_cb_film_piece_wise_position_y2                              0x18005494
#define  FILM_GRAIN_cb_film_piece_wise_position_y2_reg_addr                      "0xB8005494"
#define  FILM_GRAIN_cb_film_piece_wise_position_y2_reg                           0xB8005494
#define  FILM_GRAIN_cb_film_piece_wise_position_y2_inst_addr                     "0x0025"
#define  set_FILM_GRAIN_cb_film_piece_wise_position_y2_reg(data)                 (*((volatile unsigned int*)FILM_GRAIN_cb_film_piece_wise_position_y2_reg)=data)
#define  get_FILM_GRAIN_cb_film_piece_wise_position_y2_reg                       (*((volatile unsigned int*)FILM_GRAIN_cb_film_piece_wise_position_y2_reg))
#define  FILM_GRAIN_cb_film_piece_wise_position_y2_cb_scale_point_y8_shift       (8)
#define  FILM_GRAIN_cb_film_piece_wise_position_y2_cb_scale_point_y9_shift       (0)
#define  FILM_GRAIN_cb_film_piece_wise_position_y2_cb_scale_point_y8_mask        (0x0000FF00)
#define  FILM_GRAIN_cb_film_piece_wise_position_y2_cb_scale_point_y9_mask        (0x000000FF)
#define  FILM_GRAIN_cb_film_piece_wise_position_y2_cb_scale_point_y8(data)       (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_cb_film_piece_wise_position_y2_cb_scale_point_y9(data)       (0x000000FF&(data))
#define  FILM_GRAIN_cb_film_piece_wise_position_y2_get_cb_scale_point_y8(data)   ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_cb_film_piece_wise_position_y2_get_cb_scale_point_y9(data)   (0x000000FF&(data))

#define  FILM_GRAIN_cr_film_piece_wise_position_x0                              0x18005498
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_reg_addr                      "0xB8005498"
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_reg                           0xB8005498
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_inst_addr                     "0x0026"
#define  set_FILM_GRAIN_cr_film_piece_wise_position_x0_reg(data)                 (*((volatile unsigned int*)FILM_GRAIN_cr_film_piece_wise_position_x0_reg)=data)
#define  get_FILM_GRAIN_cr_film_piece_wise_position_x0_reg                       (*((volatile unsigned int*)FILM_GRAIN_cr_film_piece_wise_position_x0_reg))
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_cr_scale_point_x0_shift       (24)
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_cr_scale_point_x1_shift       (16)
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_cr_scale_point_x2_shift       (8)
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_cr_scale_point_x3_shift       (0)
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_cr_scale_point_x0_mask        (0xFF000000)
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_cr_scale_point_x1_mask        (0x00FF0000)
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_cr_scale_point_x2_mask        (0x0000FF00)
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_cr_scale_point_x3_mask        (0x000000FF)
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_cr_scale_point_x0(data)       (0xFF000000&((data)<<24))
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_cr_scale_point_x1(data)       (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_cr_scale_point_x2(data)       (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_cr_scale_point_x3(data)       (0x000000FF&(data))
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_get_cr_scale_point_x0(data)   ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_get_cr_scale_point_x1(data)   ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_get_cr_scale_point_x2(data)   ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_cr_film_piece_wise_position_x0_get_cr_scale_point_x3(data)   (0x000000FF&(data))

#define  FILM_GRAIN_cr_film_piece_wise_position_x1                              0x1800549C
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_reg_addr                      "0xB800549C"
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_reg                           0xB800549C
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_inst_addr                     "0x0027"
#define  set_FILM_GRAIN_cr_film_piece_wise_position_x1_reg(data)                 (*((volatile unsigned int*)FILM_GRAIN_cr_film_piece_wise_position_x1_reg)=data)
#define  get_FILM_GRAIN_cr_film_piece_wise_position_x1_reg                       (*((volatile unsigned int*)FILM_GRAIN_cr_film_piece_wise_position_x1_reg))
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_cr_scale_point_x4_shift       (24)
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_cr_scale_point_x5_shift       (16)
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_cr_scale_point_x6_shift       (8)
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_cr_scale_point_x7_shift       (0)
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_cr_scale_point_x4_mask        (0xFF000000)
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_cr_scale_point_x5_mask        (0x00FF0000)
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_cr_scale_point_x6_mask        (0x0000FF00)
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_cr_scale_point_x7_mask        (0x000000FF)
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_cr_scale_point_x4(data)       (0xFF000000&((data)<<24))
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_cr_scale_point_x5(data)       (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_cr_scale_point_x6(data)       (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_cr_scale_point_x7(data)       (0x000000FF&(data))
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_get_cr_scale_point_x4(data)   ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_get_cr_scale_point_x5(data)   ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_get_cr_scale_point_x6(data)   ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_cr_film_piece_wise_position_x1_get_cr_scale_point_x7(data)   (0x000000FF&(data))

#define  FILM_GRAIN_cr_film_piece_wise_position_x2                              0x180054A0
#define  FILM_GRAIN_cr_film_piece_wise_position_x2_reg_addr                      "0xB80054A0"
#define  FILM_GRAIN_cr_film_piece_wise_position_x2_reg                           0xB80054A0
#define  FILM_GRAIN_cr_film_piece_wise_position_x2_inst_addr                     "0x0028"
#define  set_FILM_GRAIN_cr_film_piece_wise_position_x2_reg(data)                 (*((volatile unsigned int*)FILM_GRAIN_cr_film_piece_wise_position_x2_reg)=data)
#define  get_FILM_GRAIN_cr_film_piece_wise_position_x2_reg                       (*((volatile unsigned int*)FILM_GRAIN_cr_film_piece_wise_position_x2_reg))
#define  FILM_GRAIN_cr_film_piece_wise_position_x2_cr_scale_point_x8_shift       (8)
#define  FILM_GRAIN_cr_film_piece_wise_position_x2_cr_scale_point_x9_shift       (0)
#define  FILM_GRAIN_cr_film_piece_wise_position_x2_cr_scale_point_x8_mask        (0x0000FF00)
#define  FILM_GRAIN_cr_film_piece_wise_position_x2_cr_scale_point_x9_mask        (0x000000FF)
#define  FILM_GRAIN_cr_film_piece_wise_position_x2_cr_scale_point_x8(data)       (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_cr_film_piece_wise_position_x2_cr_scale_point_x9(data)       (0x000000FF&(data))
#define  FILM_GRAIN_cr_film_piece_wise_position_x2_get_cr_scale_point_x8(data)   ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_cr_film_piece_wise_position_x2_get_cr_scale_point_x9(data)   (0x000000FF&(data))

#define  FILM_GRAIN_cr_film_piece_wise_position_y0                              0x180054A4
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_reg_addr                      "0xB80054A4"
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_reg                           0xB80054A4
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_inst_addr                     "0x0029"
#define  set_FILM_GRAIN_cr_film_piece_wise_position_y0_reg(data)                 (*((volatile unsigned int*)FILM_GRAIN_cr_film_piece_wise_position_y0_reg)=data)
#define  get_FILM_GRAIN_cr_film_piece_wise_position_y0_reg                       (*((volatile unsigned int*)FILM_GRAIN_cr_film_piece_wise_position_y0_reg))
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_cr_scale_point_y0_shift       (24)
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_cr_scale_point_y1_shift       (16)
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_cr_scale_point_y2_shift       (8)
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_cr_scale_point_y3_shift       (0)
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_cr_scale_point_y0_mask        (0xFF000000)
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_cr_scale_point_y1_mask        (0x00FF0000)
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_cr_scale_point_y2_mask        (0x0000FF00)
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_cr_scale_point_y3_mask        (0x000000FF)
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_cr_scale_point_y0(data)       (0xFF000000&((data)<<24))
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_cr_scale_point_y1(data)       (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_cr_scale_point_y2(data)       (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_cr_scale_point_y3(data)       (0x000000FF&(data))
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_get_cr_scale_point_y0(data)   ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_get_cr_scale_point_y1(data)   ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_get_cr_scale_point_y2(data)   ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_cr_film_piece_wise_position_y0_get_cr_scale_point_y3(data)   (0x000000FF&(data))

#define  FILM_GRAIN_cr_film_piece_wise_position_y1                              0x180054A8
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_reg_addr                      "0xB80054A8"
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_reg                           0xB80054A8
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_inst_addr                     "0x002A"
#define  set_FILM_GRAIN_cr_film_piece_wise_position_y1_reg(data)                 (*((volatile unsigned int*)FILM_GRAIN_cr_film_piece_wise_position_y1_reg)=data)
#define  get_FILM_GRAIN_cr_film_piece_wise_position_y1_reg                       (*((volatile unsigned int*)FILM_GRAIN_cr_film_piece_wise_position_y1_reg))
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_cr_scale_point_y4_shift       (24)
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_cr_scale_point_y5_shift       (16)
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_cr_scale_point_y6_shift       (8)
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_cr_scale_point_y7_shift       (0)
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_cr_scale_point_y4_mask        (0xFF000000)
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_cr_scale_point_y5_mask        (0x00FF0000)
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_cr_scale_point_y6_mask        (0x0000FF00)
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_cr_scale_point_y7_mask        (0x000000FF)
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_cr_scale_point_y4(data)       (0xFF000000&((data)<<24))
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_cr_scale_point_y5(data)       (0x00FF0000&((data)<<16))
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_cr_scale_point_y6(data)       (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_cr_scale_point_y7(data)       (0x000000FF&(data))
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_get_cr_scale_point_y4(data)   ((0xFF000000&(data))>>24)
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_get_cr_scale_point_y5(data)   ((0x00FF0000&(data))>>16)
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_get_cr_scale_point_y6(data)   ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_cr_film_piece_wise_position_y1_get_cr_scale_point_y7(data)   (0x000000FF&(data))

#define  FILM_GRAIN_cr_film_piece_wise_position_y2                              0x180054AC
#define  FILM_GRAIN_cr_film_piece_wise_position_y2_reg_addr                      "0xB80054AC"
#define  FILM_GRAIN_cr_film_piece_wise_position_y2_reg                           0xB80054AC
#define  FILM_GRAIN_cr_film_piece_wise_position_y2_inst_addr                     "0x002B"
#define  set_FILM_GRAIN_cr_film_piece_wise_position_y2_reg(data)                 (*((volatile unsigned int*)FILM_GRAIN_cr_film_piece_wise_position_y2_reg)=data)
#define  get_FILM_GRAIN_cr_film_piece_wise_position_y2_reg                       (*((volatile unsigned int*)FILM_GRAIN_cr_film_piece_wise_position_y2_reg))
#define  FILM_GRAIN_cr_film_piece_wise_position_y2_cr_scale_point_y8_shift       (8)
#define  FILM_GRAIN_cr_film_piece_wise_position_y2_cr_scale_point_y9_shift       (0)
#define  FILM_GRAIN_cr_film_piece_wise_position_y2_cr_scale_point_y8_mask        (0x0000FF00)
#define  FILM_GRAIN_cr_film_piece_wise_position_y2_cr_scale_point_y9_mask        (0x000000FF)
#define  FILM_GRAIN_cr_film_piece_wise_position_y2_cr_scale_point_y8(data)       (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_cr_film_piece_wise_position_y2_cr_scale_point_y9(data)       (0x000000FF&(data))
#define  FILM_GRAIN_cr_film_piece_wise_position_y2_get_cr_scale_point_y8(data)   ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_cr_film_piece_wise_position_y2_get_cr_scale_point_y9(data)   (0x000000FF&(data))

#define  FILM_GRAIN_film_noise_apply_ctrl                                       0x180054B0
#define  FILM_GRAIN_film_noise_apply_ctrl_reg_addr                               "0xB80054B0"
#define  FILM_GRAIN_film_noise_apply_ctrl_reg                                    0xB80054B0
#define  FILM_GRAIN_film_noise_apply_ctrl_inst_addr                              "0x002C"
#define  set_FILM_GRAIN_film_noise_apply_ctrl_reg(data)                          (*((volatile unsigned int*)FILM_GRAIN_film_noise_apply_ctrl_reg)=data)
#define  get_FILM_GRAIN_film_noise_apply_ctrl_reg                                (*((volatile unsigned int*)FILM_GRAIN_film_noise_apply_ctrl_reg))
#define  FILM_GRAIN_film_noise_apply_ctrl_mc_identity_shift                      (6)
#define  FILM_GRAIN_film_noise_apply_ctrl_scaling_shift_shift                    (2)
#define  FILM_GRAIN_film_noise_apply_ctrl_clip_to_restricted_range_shift         (1)
#define  FILM_GRAIN_film_noise_apply_ctrl_overlap_flag_shift                     (0)
#define  FILM_GRAIN_film_noise_apply_ctrl_mc_identity_mask                       (0x00000040)
#define  FILM_GRAIN_film_noise_apply_ctrl_scaling_shift_mask                     (0x0000003C)
#define  FILM_GRAIN_film_noise_apply_ctrl_clip_to_restricted_range_mask          (0x00000002)
#define  FILM_GRAIN_film_noise_apply_ctrl_overlap_flag_mask                      (0x00000001)
#define  FILM_GRAIN_film_noise_apply_ctrl_mc_identity(data)                      (0x00000040&((data)<<6))
#define  FILM_GRAIN_film_noise_apply_ctrl_scaling_shift(data)                    (0x0000003C&((data)<<2))
#define  FILM_GRAIN_film_noise_apply_ctrl_clip_to_restricted_range(data)         (0x00000002&((data)<<1))
#define  FILM_GRAIN_film_noise_apply_ctrl_overlap_flag(data)                     (0x00000001&(data))
#define  FILM_GRAIN_film_noise_apply_ctrl_get_mc_identity(data)                  ((0x00000040&(data))>>6)
#define  FILM_GRAIN_film_noise_apply_ctrl_get_scaling_shift(data)                ((0x0000003C&(data))>>2)
#define  FILM_GRAIN_film_noise_apply_ctrl_get_clip_to_restricted_range(data)     ((0x00000002&(data))>>1)
#define  FILM_GRAIN_film_noise_apply_ctrl_get_overlap_flag(data)                 (0x00000001&(data))

#define  FILM_GRAIN_film_noise_apply_para_cb                                    0x180054B4
#define  FILM_GRAIN_film_noise_apply_para_cb_reg_addr                            "0xB80054B4"
#define  FILM_GRAIN_film_noise_apply_para_cb_reg                                 0xB80054B4
#define  FILM_GRAIN_film_noise_apply_para_cb_inst_addr                           "0x002D"
#define  set_FILM_GRAIN_film_noise_apply_para_cb_reg(data)                       (*((volatile unsigned int*)FILM_GRAIN_film_noise_apply_para_cb_reg)=data)
#define  get_FILM_GRAIN_film_noise_apply_para_cb_reg                             (*((volatile unsigned int*)FILM_GRAIN_film_noise_apply_para_cb_reg))
#define  FILM_GRAIN_film_noise_apply_para_cb_cb_offset_shift                     (16)
#define  FILM_GRAIN_film_noise_apply_para_cb_cb_luma_mult_shift                  (8)
#define  FILM_GRAIN_film_noise_apply_para_cb_cb_mult_shift                       (0)
#define  FILM_GRAIN_film_noise_apply_para_cb_cb_offset_mask                      (0x01FF0000)
#define  FILM_GRAIN_film_noise_apply_para_cb_cb_luma_mult_mask                   (0x0000FF00)
#define  FILM_GRAIN_film_noise_apply_para_cb_cb_mult_mask                        (0x000000FF)
#define  FILM_GRAIN_film_noise_apply_para_cb_cb_offset(data)                     (0x01FF0000&((data)<<16))
#define  FILM_GRAIN_film_noise_apply_para_cb_cb_luma_mult(data)                  (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_noise_apply_para_cb_cb_mult(data)                       (0x000000FF&(data))
#define  FILM_GRAIN_film_noise_apply_para_cb_get_cb_offset(data)                 ((0x01FF0000&(data))>>16)
#define  FILM_GRAIN_film_noise_apply_para_cb_get_cb_luma_mult(data)              ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_noise_apply_para_cb_get_cb_mult(data)                   (0x000000FF&(data))

#define  FILM_GRAIN_film_noise_apply_para_cr                                    0x180054B8
#define  FILM_GRAIN_film_noise_apply_para_cr_reg_addr                            "0xB80054B8"
#define  FILM_GRAIN_film_noise_apply_para_cr_reg                                 0xB80054B8
#define  FILM_GRAIN_film_noise_apply_para_cr_inst_addr                           "0x002E"
#define  set_FILM_GRAIN_film_noise_apply_para_cr_reg(data)                       (*((volatile unsigned int*)FILM_GRAIN_film_noise_apply_para_cr_reg)=data)
#define  get_FILM_GRAIN_film_noise_apply_para_cr_reg                             (*((volatile unsigned int*)FILM_GRAIN_film_noise_apply_para_cr_reg))
#define  FILM_GRAIN_film_noise_apply_para_cr_cr_offset_shift                     (16)
#define  FILM_GRAIN_film_noise_apply_para_cr_cr_luma_mult_shift                  (8)
#define  FILM_GRAIN_film_noise_apply_para_cr_cr_mult_shift                       (0)
#define  FILM_GRAIN_film_noise_apply_para_cr_cr_offset_mask                      (0x01FF0000)
#define  FILM_GRAIN_film_noise_apply_para_cr_cr_luma_mult_mask                   (0x0000FF00)
#define  FILM_GRAIN_film_noise_apply_para_cr_cr_mult_mask                        (0x000000FF)
#define  FILM_GRAIN_film_noise_apply_para_cr_cr_offset(data)                     (0x01FF0000&((data)<<16))
#define  FILM_GRAIN_film_noise_apply_para_cr_cr_luma_mult(data)                  (0x0000FF00&((data)<<8))
#define  FILM_GRAIN_film_noise_apply_para_cr_cr_mult(data)                       (0x000000FF&(data))
#define  FILM_GRAIN_film_noise_apply_para_cr_get_cr_offset(data)                 ((0x01FF0000&(data))>>16)
#define  FILM_GRAIN_film_noise_apply_para_cr_get_cr_luma_mult(data)              ((0x0000FF00&(data))>>8)
#define  FILM_GRAIN_film_noise_apply_para_cr_get_cr_mult(data)                   (0x000000FF&(data))

#define  FILM_GRAIN_film_rw_tab_ctrl                                            0x180054BC
#define  FILM_GRAIN_film_rw_tab_ctrl_reg_addr                                    "0xB80054BC"
#define  FILM_GRAIN_film_rw_tab_ctrl_reg                                         0xB80054BC
#define  FILM_GRAIN_film_rw_tab_ctrl_inst_addr                                   "0x002F"
#define  set_FILM_GRAIN_film_rw_tab_ctrl_reg(data)                               (*((volatile unsigned int*)FILM_GRAIN_film_rw_tab_ctrl_reg)=data)
#define  get_FILM_GRAIN_film_rw_tab_ctrl_reg                                     (*((volatile unsigned int*)FILM_GRAIN_film_rw_tab_ctrl_reg))
#define  FILM_GRAIN_film_rw_tab_ctrl_hw_fw_priority_shift                        (31)
#define  FILM_GRAIN_film_rw_tab_ctrl_wr_tab_en_shift                             (17)
#define  FILM_GRAIN_film_rw_tab_ctrl_rd_tab_en_shift                             (16)
#define  FILM_GRAIN_film_rw_tab_ctrl_table_id_shift                              (12)
#define  FILM_GRAIN_film_rw_tab_ctrl_rw_tab_addr_shift                           (0)
#define  FILM_GRAIN_film_rw_tab_ctrl_hw_fw_priority_mask                         (0x80000000)
#define  FILM_GRAIN_film_rw_tab_ctrl_wr_tab_en_mask                              (0x00020000)
#define  FILM_GRAIN_film_rw_tab_ctrl_rd_tab_en_mask                              (0x00010000)
#define  FILM_GRAIN_film_rw_tab_ctrl_table_id_mask                               (0x00003000)
#define  FILM_GRAIN_film_rw_tab_ctrl_rw_tab_addr_mask                            (0x00000FFF)
#define  FILM_GRAIN_film_rw_tab_ctrl_hw_fw_priority(data)                        (0x80000000&((data)<<31))
#define  FILM_GRAIN_film_rw_tab_ctrl_wr_tab_en(data)                             (0x00020000&((data)<<17))
#define  FILM_GRAIN_film_rw_tab_ctrl_rd_tab_en(data)                             (0x00010000&((data)<<16))
#define  FILM_GRAIN_film_rw_tab_ctrl_table_id(data)                              (0x00003000&((data)<<12))
#define  FILM_GRAIN_film_rw_tab_ctrl_rw_tab_addr(data)                           (0x00000FFF&(data))
#define  FILM_GRAIN_film_rw_tab_ctrl_get_hw_fw_priority(data)                    ((0x80000000&(data))>>31)
#define  FILM_GRAIN_film_rw_tab_ctrl_get_wr_tab_en(data)                         ((0x00020000&(data))>>17)
#define  FILM_GRAIN_film_rw_tab_ctrl_get_rd_tab_en(data)                         ((0x00010000&(data))>>16)
#define  FILM_GRAIN_film_rw_tab_ctrl_get_table_id(data)                          ((0x00003000&(data))>>12)
#define  FILM_GRAIN_film_rw_tab_ctrl_get_rw_tab_addr(data)                       (0x00000FFF&(data))

#define  FILM_GRAIN_film_tab_wr_data0                                           0x180054C4
#define  FILM_GRAIN_film_tab_wr_data0_reg_addr                                   "0xB80054C4"
#define  FILM_GRAIN_film_tab_wr_data0_reg                                        0xB80054C4
#define  FILM_GRAIN_film_tab_wr_data0_inst_addr                                  "0x0030"
#define  set_FILM_GRAIN_film_tab_wr_data0_reg(data)                              (*((volatile unsigned int*)FILM_GRAIN_film_tab_wr_data0_reg)=data)
#define  get_FILM_GRAIN_film_tab_wr_data0_reg                                    (*((volatile unsigned int*)FILM_GRAIN_film_tab_wr_data0_reg))
#define  FILM_GRAIN_film_tab_wr_data0_wr_tab_data_shift                          (0)
#define  FILM_GRAIN_film_tab_wr_data0_wr_tab_data_mask                           (0x000003FF)
#define  FILM_GRAIN_film_tab_wr_data0_wr_tab_data(data)                          (0x000003FF&(data))
#define  FILM_GRAIN_film_tab_wr_data0_get_wr_tab_data(data)                      (0x000003FF&(data))

#define  FILM_GRAIN_film_tab_rd_data1                                           0x180054CC
#define  FILM_GRAIN_film_tab_rd_data1_reg_addr                                   "0xB80054CC"
#define  FILM_GRAIN_film_tab_rd_data1_reg                                        0xB80054CC
#define  FILM_GRAIN_film_tab_rd_data1_inst_addr                                  "0x0031"
#define  set_FILM_GRAIN_film_tab_rd_data1_reg(data)                              (*((volatile unsigned int*)FILM_GRAIN_film_tab_rd_data1_reg)=data)
#define  get_FILM_GRAIN_film_tab_rd_data1_reg                                    (*((volatile unsigned int*)FILM_GRAIN_film_tab_rd_data1_reg))
#define  FILM_GRAIN_film_tab_rd_data1_rd_tab_data_shift                          (0)
#define  FILM_GRAIN_film_tab_rd_data1_rd_tab_data_mask                           (0x000003FF)
#define  FILM_GRAIN_film_tab_rd_data1_rd_tab_data(data)                          (0x000003FF&(data))
#define  FILM_GRAIN_film_tab_rd_data1_get_rd_tab_data(data)                      (0x000003FF&(data))

#define  FILM_GRAIN_FILM_GRAIN_DB_CTRL_0                                        0x180054D0
#define  FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_reg_addr                                "0xB80054D0"
#define  FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_reg                                     0xB80054D0
#define  FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_inst_addr                               "0x0032"
#define  set_FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_reg(data)                           (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_reg)=data)
#define  get_FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_reg                                 (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_reg))
#define  FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_db_read_0_shift                         (2)
#define  FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_db_en_0_shift                           (1)
#define  FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_db_apply_0_shift                        (0)
#define  FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_db_read_0_mask                          (0x00000004)
#define  FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_db_en_0_mask                            (0x00000002)
#define  FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_db_apply_0_mask                         (0x00000001)
#define  FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_db_read_0(data)                         (0x00000004&((data)<<2))
#define  FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_db_en_0(data)                           (0x00000002&((data)<<1))
#define  FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_db_apply_0(data)                        (0x00000001&(data))
#define  FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_get_db_read_0(data)                     ((0x00000004&(data))>>2)
#define  FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_get_db_en_0(data)                       ((0x00000002&(data))>>1)
#define  FILM_GRAIN_FILM_GRAIN_DB_CTRL_0_get_db_apply_0(data)                    (0x00000001&(data))

#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS                                         0x180054D4
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_reg_addr                                 "0xB80054D4"
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_reg                                      0xB80054D4
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_inst_addr                                "0x0033"
#define  set_FILM_GRAIN_FILM_GRAIN_MBIST_LS_reg(data)                            (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_LS_reg)=data)
#define  get_FILM_GRAIN_FILM_GRAIN_MBIST_LS_reg                                  (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_LS_reg))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_film_noise_y_ls_shift                    (4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_film_noise_cb_ls_shift                   (3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_film_noise_cr_ls_shift                   (2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_film_linbuf_ls_shift                     (1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_film_offset_ls_shift                     (0)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_film_noise_y_ls_mask                     (0x00000010)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_film_noise_cb_ls_mask                    (0x00000008)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_film_noise_cr_ls_mask                    (0x00000004)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_film_linbuf_ls_mask                      (0x00000002)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_film_offset_ls_mask                      (0x00000001)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_film_noise_y_ls(data)                    (0x00000010&((data)<<4))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_film_noise_cb_ls(data)                   (0x00000008&((data)<<3))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_film_noise_cr_ls(data)                   (0x00000004&((data)<<2))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_film_linbuf_ls(data)                     (0x00000002&((data)<<1))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_film_offset_ls(data)                     (0x00000001&(data))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_get_film_noise_y_ls(data)                ((0x00000010&(data))>>4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_get_film_noise_cb_ls(data)               ((0x00000008&(data))>>3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_get_film_noise_cr_ls(data)               ((0x00000004&(data))>>2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_get_film_linbuf_ls(data)                 ((0x00000002&(data))>>1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_LS_get_film_offset_ls(data)                 (0x00000001&(data))

#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM                                         0x180054D8
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_reg_addr                                 "0xB80054D8"
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_reg                                      0xB80054D8
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_inst_addr                                "0x0034"
#define  set_FILM_GRAIN_FILM_GRAIN_MBIST_RM_reg(data)                            (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_RM_reg)=data)
#define  get_FILM_GRAIN_FILM_GRAIN_MBIST_RM_reg                                  (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_RM_reg))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_film_noise_y_rm_shift                    (16)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_film_noise_cb_rm_shift                   (12)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_film_noise_cr_rm_shift                   (8)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_film_linbuf_rm_shift                     (4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_film_offset_rm_shift                     (0)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_film_noise_y_rm_mask                     (0x000F0000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_film_noise_cb_rm_mask                    (0x0000F000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_film_noise_cr_rm_mask                    (0x00000F00)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_film_linbuf_rm_mask                      (0x000000F0)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_film_offset_rm_mask                      (0x0000000F)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_film_noise_y_rm(data)                    (0x000F0000&((data)<<16))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_film_noise_cb_rm(data)                   (0x0000F000&((data)<<12))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_film_noise_cr_rm(data)                   (0x00000F00&((data)<<8))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_film_linbuf_rm(data)                     (0x000000F0&((data)<<4))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_film_offset_rm(data)                     (0x0000000F&(data))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_get_film_noise_y_rm(data)                ((0x000F0000&(data))>>16)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_get_film_noise_cb_rm(data)               ((0x0000F000&(data))>>12)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_get_film_noise_cr_rm(data)               ((0x00000F00&(data))>>8)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_get_film_linbuf_rm(data)                 ((0x000000F0&(data))>>4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RM_get_film_offset_rm(data)                 (0x0000000F&(data))

#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME                                        0x180054DC
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_reg_addr                                "0xB80054DC"
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_reg                                     0xB80054DC
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_inst_addr                               "0x0035"
#define  set_FILM_GRAIN_FILM_GRAIN_MBIST_RME_reg(data)                           (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_RME_reg)=data)
#define  get_FILM_GRAIN_FILM_GRAIN_MBIST_RME_reg                                 (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_RME_reg))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_film_noise_y_rme_shift                  (4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_film_noise_cb_rme_shift                 (3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_film_noise_cr_rme_shift                 (2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_film_linbuf_rme_shift                   (1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_film_offset_rme_shift                   (0)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_film_noise_y_rme_mask                   (0x00000010)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_film_noise_cb_rme_mask                  (0x00000008)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_film_noise_cr_rme_mask                  (0x00000004)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_film_linbuf_rme_mask                    (0x00000002)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_film_offset_rme_mask                    (0x00000001)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_film_noise_y_rme(data)                  (0x00000010&((data)<<4))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_film_noise_cb_rme(data)                 (0x00000008&((data)<<3))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_film_noise_cr_rme(data)                 (0x00000004&((data)<<2))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_film_linbuf_rme(data)                   (0x00000002&((data)<<1))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_film_offset_rme(data)                   (0x00000001&(data))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_get_film_noise_y_rme(data)              ((0x00000010&(data))>>4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_get_film_noise_cb_rme(data)             ((0x00000008&(data))>>3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_get_film_noise_cr_rme(data)             ((0x00000004&(data))>>2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_get_film_linbuf_rme(data)               ((0x00000002&(data))>>1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_RME_get_film_offset_rme(data)               (0x00000001&(data))

#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE                                  0x180054E0
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_reg_addr                          "0xB80054E0"
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_reg                               0xB80054E0
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_inst_addr                         "0x0036"
#define  set_FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_reg(data)                     (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_reg)=data)
#define  get_FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_reg                           (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_reg))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_film_noise_y_bist_mode_shift      (4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_film_noise_cb_bist_mode_shift     (3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_film_noise_cr_bist_mode_shift     (2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_film_linbuf_bist_mode_shift       (1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_film_offset_bist_mode_shift       (0)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_film_noise_y_bist_mode_mask       (0x00000010)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_film_noise_cb_bist_mode_mask      (0x00000008)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_film_noise_cr_bist_mode_mask      (0x00000004)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_film_linbuf_bist_mode_mask        (0x00000002)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_film_offset_bist_mode_mask        (0x00000001)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_film_noise_y_bist_mode(data)      (0x00000010&((data)<<4))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_film_noise_cb_bist_mode(data)     (0x00000008&((data)<<3))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_film_noise_cr_bist_mode(data)     (0x00000004&((data)<<2))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_film_linbuf_bist_mode(data)       (0x00000002&((data)<<1))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_film_offset_bist_mode(data)       (0x00000001&(data))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_get_film_noise_y_bist_mode(data)  ((0x00000010&(data))>>4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_get_film_noise_cb_bist_mode(data) ((0x00000008&(data))>>3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_get_film_noise_cr_bist_mode(data) ((0x00000004&(data))>>2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_get_film_linbuf_bist_mode(data)   ((0x00000002&(data))>>1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_MODE_get_film_offset_bist_mode(data)   (0x00000001&(data))

#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE                                   0x180054E4
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_reg_addr                           "0xB80054E4"
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_reg                                0xB80054E4
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_inst_addr                          "0x0037"
#define  set_FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_reg(data)                      (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_reg)=data)
#define  get_FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_reg                            (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_reg))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_film_noise_y_drf_bist_mode_shift   (4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_film_noise_cb_drf_bist_mode_shift  (3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_film_noise_cr_drf_bist_mode_shift  (2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_film_linbuf_drf_bist_mode_shift    (1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_film_offset_drf_bist_mode_shift    (0)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_film_noise_y_drf_bist_mode_mask    (0x00000010)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_film_noise_cb_drf_bist_mode_mask   (0x00000008)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_film_noise_cr_drf_bist_mode_mask   (0x00000004)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_film_linbuf_drf_bist_mode_mask     (0x00000002)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_film_offset_drf_bist_mode_mask     (0x00000001)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_film_noise_y_drf_bist_mode(data)   (0x00000010&((data)<<4))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_film_noise_cb_drf_bist_mode(data)  (0x00000008&((data)<<3))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_film_noise_cr_drf_bist_mode(data)  (0x00000004&((data)<<2))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_film_linbuf_drf_bist_mode(data)    (0x00000002&((data)<<1))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_film_offset_drf_bist_mode(data)    (0x00000001&(data))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_get_film_noise_y_drf_bist_mode(data) ((0x00000010&(data))>>4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_get_film_noise_cb_drf_bist_mode(data) ((0x00000008&(data))>>3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_get_film_noise_cr_drf_bist_mode(data) ((0x00000004&(data))>>2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_get_film_linbuf_drf_bist_mode(data) ((0x00000002&(data))>>1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_MODE_get_film_offset_drf_bist_mode(data) (0x00000001&(data))

#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME                                 0x180054E8
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_reg_addr                         "0xB80054E8"
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_reg                              0xB80054E8
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_inst_addr                        "0x0038"
#define  set_FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_reg(data)                    (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_reg)=data)
#define  get_FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_reg                          (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_reg))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_film_noise_y_drf_test_resume_shift (4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_film_noise_cb_drf_test_resume_shift (3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_film_noise_cr_drf_test_resume_shift (2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_film_linbuf_drf_test_resume_shift (1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_film_offset_drf_test_resume_shift (0)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_film_noise_y_drf_test_resume_mask (0x00000010)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_film_noise_cb_drf_test_resume_mask (0x00000008)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_film_noise_cr_drf_test_resume_mask (0x00000004)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_film_linbuf_drf_test_resume_mask (0x00000002)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_film_offset_drf_test_resume_mask (0x00000001)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_film_noise_y_drf_test_resume(data) (0x00000010&((data)<<4))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_film_noise_cb_drf_test_resume(data) (0x00000008&((data)<<3))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_film_noise_cr_drf_test_resume(data) (0x00000004&((data)<<2))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_film_linbuf_drf_test_resume(data) (0x00000002&((data)<<1))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_film_offset_drf_test_resume(data) (0x00000001&(data))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_get_film_noise_y_drf_test_resume(data) ((0x00000010&(data))>>4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_get_film_noise_cb_drf_test_resume(data) ((0x00000008&(data))>>3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_get_film_noise_cr_drf_test_resume(data) ((0x00000004&(data))>>2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_get_film_linbuf_drf_test_resume(data) ((0x00000002&(data))>>1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_RESUME_get_film_offset_drf_test_resume(data) (0x00000001&(data))

#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL                                  0x180054EC
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_reg_addr                          "0xB80054EC"
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_reg                               0xB80054EC
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_inst_addr                         "0x0039"
#define  set_FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_reg(data)                     (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_reg)=data)
#define  get_FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_reg                           (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_reg))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_y_bist_fail_3_shift    (23)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_y_bist_fail_2_shift    (22)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_y_bist_fail_1_shift    (21)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_y_bist_fail_0_shift    (20)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cb_bist_fail_3_shift   (15)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cb_bist_fail_2_shift   (14)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cb_bist_fail_1_shift   (13)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cb_bist_fail_0_shift   (12)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cr_bist_fail_3_shift   (7)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cr_bist_fail_2_shift   (6)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cr_bist_fail_1_shift   (5)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cr_bist_fail_0_shift   (4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_linbuf_bist_fail_1_shift     (3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_linbuf_bist_fail_0_shift     (2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_offset_bist_fail_1_shift     (1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_offset_bist_fail_0_shift     (0)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_y_bist_fail_3_mask     (0x00800000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_y_bist_fail_2_mask     (0x00400000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_y_bist_fail_1_mask     (0x00200000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_y_bist_fail_0_mask     (0x00100000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cb_bist_fail_3_mask    (0x00008000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cb_bist_fail_2_mask    (0x00004000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cb_bist_fail_1_mask    (0x00002000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cb_bist_fail_0_mask    (0x00001000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cr_bist_fail_3_mask    (0x00000080)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cr_bist_fail_2_mask    (0x00000040)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cr_bist_fail_1_mask    (0x00000020)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cr_bist_fail_0_mask    (0x00000010)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_linbuf_bist_fail_1_mask      (0x00000008)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_linbuf_bist_fail_0_mask      (0x00000004)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_offset_bist_fail_1_mask      (0x00000002)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_offset_bist_fail_0_mask      (0x00000001)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_y_bist_fail_3(data)    (0x00800000&((data)<<23))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_y_bist_fail_2(data)    (0x00400000&((data)<<22))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_y_bist_fail_1(data)    (0x00200000&((data)<<21))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_y_bist_fail_0(data)    (0x00100000&((data)<<20))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cb_bist_fail_3(data)   (0x00008000&((data)<<15))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cb_bist_fail_2(data)   (0x00004000&((data)<<14))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cb_bist_fail_1(data)   (0x00002000&((data)<<13))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cb_bist_fail_0(data)   (0x00001000&((data)<<12))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cr_bist_fail_3(data)   (0x00000080&((data)<<7))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cr_bist_fail_2(data)   (0x00000040&((data)<<6))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cr_bist_fail_1(data)   (0x00000020&((data)<<5))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_noise_cr_bist_fail_0(data)   (0x00000010&((data)<<4))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_linbuf_bist_fail_1(data)     (0x00000008&((data)<<3))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_linbuf_bist_fail_0(data)     (0x00000004&((data)<<2))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_offset_bist_fail_1(data)     (0x00000002&((data)<<1))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_film_offset_bist_fail_0(data)     (0x00000001&(data))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_get_film_noise_y_bist_fail_3(data) ((0x00800000&(data))>>23)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_get_film_noise_y_bist_fail_2(data) ((0x00400000&(data))>>22)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_get_film_noise_y_bist_fail_1(data) ((0x00200000&(data))>>21)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_get_film_noise_y_bist_fail_0(data) ((0x00100000&(data))>>20)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_get_film_noise_cb_bist_fail_3(data) ((0x00008000&(data))>>15)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_get_film_noise_cb_bist_fail_2(data) ((0x00004000&(data))>>14)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_get_film_noise_cb_bist_fail_1(data) ((0x00002000&(data))>>13)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_get_film_noise_cb_bist_fail_0(data) ((0x00001000&(data))>>12)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_get_film_noise_cr_bist_fail_3(data) ((0x00000080&(data))>>7)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_get_film_noise_cr_bist_fail_2(data) ((0x00000040&(data))>>6)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_get_film_noise_cr_bist_fail_1(data) ((0x00000020&(data))>>5)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_get_film_noise_cr_bist_fail_0(data) ((0x00000010&(data))>>4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_get_film_linbuf_bist_fail_1(data) ((0x00000008&(data))>>3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_get_film_linbuf_bist_fail_0(data) ((0x00000004&(data))>>2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_get_film_offset_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_get_film_offset_bist_fail_0(data) (0x00000001&(data))

#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL                                   0x180054F0
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_reg_addr                           "0xB80054F0"
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_reg                                0xB80054F0
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_inst_addr                          "0x003A"
#define  set_FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_reg(data)                      (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_reg)=data)
#define  get_FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_reg                            (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_reg))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_y_drf_bist_fail_3_shift (23)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_y_drf_bist_fail_2_shift (22)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_y_drf_bist_fail_1_shift (21)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_y_drf_bist_fail_0_shift (20)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cb_drf_bist_fail_3_shift (15)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cb_drf_bist_fail_2_shift (14)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cb_drf_bist_fail_1_shift (13)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cb_drf_bist_fail_0_shift (12)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cr_drf_bist_fail_3_shift (7)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cr_drf_bist_fail_2_shift (6)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cr_drf_bist_fail_1_shift (5)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cr_drf_bist_fail_0_shift (4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_linbuf_drf_bist_fail_1_shift  (3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_linbuf_drf_bist_fail_0_shift  (2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_offset_drf_bist_fail_1_shift  (1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_offset_drf_bist_fail_0_shift  (0)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_y_drf_bist_fail_3_mask  (0x00800000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_y_drf_bist_fail_2_mask  (0x00400000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_y_drf_bist_fail_1_mask  (0x00200000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_y_drf_bist_fail_0_mask  (0x00100000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cb_drf_bist_fail_3_mask (0x00008000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cb_drf_bist_fail_2_mask (0x00004000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cb_drf_bist_fail_1_mask (0x00002000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cb_drf_bist_fail_0_mask (0x00001000)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cr_drf_bist_fail_3_mask (0x00000080)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cr_drf_bist_fail_2_mask (0x00000040)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cr_drf_bist_fail_1_mask (0x00000020)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cr_drf_bist_fail_0_mask (0x00000010)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_linbuf_drf_bist_fail_1_mask   (0x00000008)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_linbuf_drf_bist_fail_0_mask   (0x00000004)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_offset_drf_bist_fail_1_mask   (0x00000002)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_offset_drf_bist_fail_0_mask   (0x00000001)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_y_drf_bist_fail_3(data) (0x00800000&((data)<<23))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_y_drf_bist_fail_2(data) (0x00400000&((data)<<22))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_y_drf_bist_fail_1(data) (0x00200000&((data)<<21))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_y_drf_bist_fail_0(data) (0x00100000&((data)<<20))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cb_drf_bist_fail_3(data) (0x00008000&((data)<<15))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cb_drf_bist_fail_2(data) (0x00004000&((data)<<14))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cb_drf_bist_fail_1(data) (0x00002000&((data)<<13))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cb_drf_bist_fail_0(data) (0x00001000&((data)<<12))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cr_drf_bist_fail_3(data) (0x00000080&((data)<<7))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cr_drf_bist_fail_2(data) (0x00000040&((data)<<6))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cr_drf_bist_fail_1(data) (0x00000020&((data)<<5))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_noise_cr_drf_bist_fail_0(data) (0x00000010&((data)<<4))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_linbuf_drf_bist_fail_1(data)  (0x00000008&((data)<<3))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_linbuf_drf_bist_fail_0(data)  (0x00000004&((data)<<2))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_offset_drf_bist_fail_1(data)  (0x00000002&((data)<<1))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_film_offset_drf_bist_fail_0(data)  (0x00000001&(data))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_get_film_noise_y_drf_bist_fail_3(data) ((0x00800000&(data))>>23)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_get_film_noise_y_drf_bist_fail_2(data) ((0x00400000&(data))>>22)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_get_film_noise_y_drf_bist_fail_1(data) ((0x00200000&(data))>>21)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_get_film_noise_y_drf_bist_fail_0(data) ((0x00100000&(data))>>20)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_get_film_noise_cb_drf_bist_fail_3(data) ((0x00008000&(data))>>15)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_get_film_noise_cb_drf_bist_fail_2(data) ((0x00004000&(data))>>14)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_get_film_noise_cb_drf_bist_fail_1(data) ((0x00002000&(data))>>13)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_get_film_noise_cb_drf_bist_fail_0(data) ((0x00001000&(data))>>12)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_get_film_noise_cr_drf_bist_fail_3(data) ((0x00000080&(data))>>7)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_get_film_noise_cr_drf_bist_fail_2(data) ((0x00000040&(data))>>6)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_get_film_noise_cr_drf_bist_fail_1(data) ((0x00000020&(data))>>5)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_get_film_noise_cr_drf_bist_fail_0(data) ((0x00000010&(data))>>4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_get_film_linbuf_drf_bist_fail_1(data) ((0x00000008&(data))>>3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_get_film_linbuf_drf_bist_fail_0(data) ((0x00000004&(data))>>2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_get_film_offset_drf_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_get_film_offset_drf_bist_fail_0(data) (0x00000001&(data))

#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP                            0x180054F4
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_reg_addr                    "0xB80054F4"
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_reg                         0xB80054F4
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_inst_addr                   "0x003B"
#define  set_FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_reg(data)               (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_reg)=data)
#define  get_FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_reg                     (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_reg))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_film_noise_y_bist_fail_group_shift (4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_film_noise_cb_bist_fail_group_shift (3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_film_noise_cr_bist_fail_group_shift (2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_film_linbuf_bist_fail_group_shift (1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_film_offset_bist_fail_group_shift (0)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_film_noise_y_bist_fail_group_mask (0x00000010)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_film_noise_cb_bist_fail_group_mask (0x00000008)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_film_noise_cr_bist_fail_group_mask (0x00000004)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_film_linbuf_bist_fail_group_mask (0x00000002)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_film_offset_bist_fail_group_mask (0x00000001)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_film_noise_y_bist_fail_group(data) (0x00000010&((data)<<4))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_film_noise_cb_bist_fail_group(data) (0x00000008&((data)<<3))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_film_noise_cr_bist_fail_group(data) (0x00000004&((data)<<2))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_film_linbuf_bist_fail_group(data) (0x00000002&((data)<<1))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_film_offset_bist_fail_group(data) (0x00000001&(data))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_get_film_noise_y_bist_fail_group(data) ((0x00000010&(data))>>4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_get_film_noise_cb_bist_fail_group(data) ((0x00000008&(data))>>3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_get_film_noise_cr_bist_fail_group(data) ((0x00000004&(data))>>2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_get_film_linbuf_bist_fail_group(data) ((0x00000002&(data))>>1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_FAIL_GROUP_get_film_offset_bist_fail_group(data) (0x00000001&(data))

#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP                             0x180054F8
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_reg_addr                     "0xB80054F8"
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_reg                          0xB80054F8
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_inst_addr                    "0x003C"
#define  set_FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_reg(data)                (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_reg)=data)
#define  get_FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_reg                      (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_reg))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_film_noise_y_drf_bist_fail_group_shift (4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_film_noise_cb_drf_bist_fail_group_shift (3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_film_noise_cr_drf_bist_fail_group_shift (2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_film_linbuf_drf_bist_fail_group_shift (1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_film_offset_drf_bist_fail_group_shift (0)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_film_noise_y_drf_bist_fail_group_mask (0x00000010)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_film_noise_cb_drf_bist_fail_group_mask (0x00000008)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_film_noise_cr_drf_bist_fail_group_mask (0x00000004)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_film_linbuf_drf_bist_fail_group_mask (0x00000002)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_film_offset_drf_bist_fail_group_mask (0x00000001)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_film_noise_y_drf_bist_fail_group(data) (0x00000010&((data)<<4))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_film_noise_cb_drf_bist_fail_group(data) (0x00000008&((data)<<3))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_film_noise_cr_drf_bist_fail_group(data) (0x00000004&((data)<<2))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_film_linbuf_drf_bist_fail_group(data) (0x00000002&((data)<<1))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_film_offset_drf_bist_fail_group(data) (0x00000001&(data))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_get_film_noise_y_drf_bist_fail_group(data) ((0x00000010&(data))>>4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_get_film_noise_cb_drf_bist_fail_group(data) ((0x00000008&(data))>>3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_get_film_noise_cr_drf_bist_fail_group(data) ((0x00000004&(data))>>2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_get_film_linbuf_drf_bist_fail_group(data) ((0x00000002&(data))>>1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_FAIL_GROUP_get_film_offset_drf_bist_fail_group(data) (0x00000001&(data))

#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE                                  0x180054FC
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_reg_addr                          "0xB80054FC"
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_reg                               0xB80054FC
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_inst_addr                         "0x003D"
#define  set_FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_reg(data)                     (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_reg)=data)
#define  get_FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_reg                           (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_reg))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_film_noise_y_bist_done_shift      (4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_film_noise_cb_bist_done_shift     (3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_film_noise_cr_bist_done_shift     (2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_film_linbuf_bist_done_shift       (1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_film_offset_bist_done_shift       (0)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_film_noise_y_bist_done_mask       (0x00000010)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_film_noise_cb_bist_done_mask      (0x00000008)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_film_noise_cr_bist_done_mask      (0x00000004)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_film_linbuf_bist_done_mask        (0x00000002)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_film_offset_bist_done_mask        (0x00000001)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_film_noise_y_bist_done(data)      (0x00000010&((data)<<4))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_film_noise_cb_bist_done(data)     (0x00000008&((data)<<3))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_film_noise_cr_bist_done(data)     (0x00000004&((data)<<2))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_film_linbuf_bist_done(data)       (0x00000002&((data)<<1))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_film_offset_bist_done(data)       (0x00000001&(data))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_get_film_noise_y_bist_done(data)  ((0x00000010&(data))>>4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_get_film_noise_cb_bist_done(data) ((0x00000008&(data))>>3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_get_film_noise_cr_bist_done(data) ((0x00000004&(data))>>2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_get_film_linbuf_bist_done(data)   ((0x00000002&(data))>>1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_BIST_DONE_get_film_offset_bist_done(data)   (0x00000001&(data))

#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE                                   0x18005500
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_reg_addr                           "0xB8005500"
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_reg                                0xB8005500
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_inst_addr                          "0x003E"
#define  set_FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_reg(data)                      (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_reg)=data)
#define  get_FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_reg                            (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_reg))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_film_noise_y_drf_bist_done_shift   (4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_film_noise_cb_drf_bist_done_shift  (3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_film_noise_cr_drf_bist_done_shift  (2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_film_linbuf_drf_bist_done_shift    (1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_film_offset_drf_bist_done_shift    (0)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_film_noise_y_drf_bist_done_mask    (0x00000010)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_film_noise_cb_drf_bist_done_mask   (0x00000008)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_film_noise_cr_drf_bist_done_mask   (0x00000004)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_film_linbuf_drf_bist_done_mask     (0x00000002)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_film_offset_drf_bist_done_mask     (0x00000001)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_film_noise_y_drf_bist_done(data)   (0x00000010&((data)<<4))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_film_noise_cb_drf_bist_done(data)  (0x00000008&((data)<<3))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_film_noise_cr_drf_bist_done(data)  (0x00000004&((data)<<2))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_film_linbuf_drf_bist_done(data)    (0x00000002&((data)<<1))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_film_offset_drf_bist_done(data)    (0x00000001&(data))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_get_film_noise_y_drf_bist_done(data) ((0x00000010&(data))>>4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_get_film_noise_cb_drf_bist_done(data) ((0x00000008&(data))>>3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_get_film_noise_cr_drf_bist_done(data) ((0x00000004&(data))>>2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_get_film_linbuf_drf_bist_done(data) ((0x00000002&(data))>>1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_DONE_get_film_offset_drf_bist_done(data) (0x00000001&(data))

#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE                            0x18005504
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_reg_addr                    "0xB8005504"
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_reg                         0xB8005504
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_inst_addr                   "0x003F"
#define  set_FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_reg(data)               (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_reg)=data)
#define  get_FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_reg                     (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_reg))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_film_noise_y_drf_start_pause_shift (4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_film_noise_cb_drf_start_pause_shift (3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_film_noise_cr_drf_start_pause_shift (2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_film_linbuf_drf_start_pause_shift (1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_film_offset_drf_start_pause_shift (0)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_film_noise_y_drf_start_pause_mask (0x00000010)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_film_noise_cb_drf_start_pause_mask (0x00000008)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_film_noise_cr_drf_start_pause_mask (0x00000004)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_film_linbuf_drf_start_pause_mask (0x00000002)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_film_offset_drf_start_pause_mask (0x00000001)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_film_noise_y_drf_start_pause(data) (0x00000010&((data)<<4))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_film_noise_cb_drf_start_pause(data) (0x00000008&((data)<<3))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_film_noise_cr_drf_start_pause(data) (0x00000004&((data)<<2))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_film_linbuf_drf_start_pause(data) (0x00000002&((data)<<1))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_film_offset_drf_start_pause(data) (0x00000001&(data))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_get_film_noise_y_drf_start_pause(data) ((0x00000010&(data))>>4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_get_film_noise_cb_drf_start_pause(data) ((0x00000008&(data))>>3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_get_film_noise_cr_drf_start_pause(data) ((0x00000004&(data))>>2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_get_film_linbuf_drf_start_pause(data) ((0x00000002&(data))>>1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_DRF_START_PAUSE_get_film_offset_drf_start_pause(data) (0x00000001&(data))

#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST                                       0x18005508
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_reg_addr                               "0xB8005508"
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_reg                                    0xB8005508
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_inst_addr                              "0x0040"
#define  set_FILM_GRAIN_FILM_GRAIN_MBIST_TEST_reg(data)                          (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_TEST_reg)=data)
#define  get_FILM_GRAIN_FILM_GRAIN_MBIST_TEST_reg                                (*((volatile unsigned int*)FILM_GRAIN_FILM_GRAIN_MBIST_TEST_reg))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_film_noise_y_test_shift                (4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_film_noise_cb_test_shift               (3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_film_noise_cr_test_shift               (2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_film_linbuf_test_shift                 (1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_film_offset_test_shift                 (0)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_film_noise_y_test_mask                 (0x00000010)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_film_noise_cb_test_mask                (0x00000008)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_film_noise_cr_test_mask                (0x00000004)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_film_linbuf_test_mask                  (0x00000002)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_film_offset_test_mask                  (0x00000001)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_film_noise_y_test(data)                (0x00000010&((data)<<4))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_film_noise_cb_test(data)               (0x00000008&((data)<<3))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_film_noise_cr_test(data)               (0x00000004&((data)<<2))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_film_linbuf_test(data)                 (0x00000002&((data)<<1))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_film_offset_test(data)                 (0x00000001&(data))
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_get_film_noise_y_test(data)            ((0x00000010&(data))>>4)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_get_film_noise_cb_test(data)           ((0x00000008&(data))>>3)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_get_film_noise_cr_test(data)           ((0x00000004&(data))>>2)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_get_film_linbuf_test(data)             ((0x00000002&(data))>>1)
#define  FILM_GRAIN_FILM_GRAIN_MBIST_TEST_get_film_offset_test(data)             (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======FILM_GRAIN register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  luma_filmgrain_en:1;
        RBus_UInt32  chroma_filmgrain_en:1;
        RBus_UInt32  film_bpp:1;
        RBus_UInt32  film_420to422_en:1;
        RBus_UInt32  use_high_bit_depth:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  film_height:12;
    };
}film_grain_film_grain_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  random_seed:16;
        RBus_UInt32  res1:3;
        RBus_UInt32  film_width:13;
    };
}film_grain_film_random_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hw_gen_noise_en:1;
        RBus_UInt32  porch_not_enough:1;
        RBus_UInt32  porch_not_enough_clr:1;
        RBus_UInt32  res1:21;
        RBus_UInt32  ar_coeff_lag:2;
        RBus_UInt32  ar_coeff_shift:4;
        RBus_UInt32  grain_scale_shift:2;
    };
}film_grain_film_template_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_y0:8;
        RBus_UInt32  ar_coeff_y1:8;
        RBus_UInt32  ar_coeff_y2:8;
        RBus_UInt32  ar_coeff_y3:8;
    };
}film_grain_film_template_para_y0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_y4:8;
        RBus_UInt32  ar_coeff_y5:8;
        RBus_UInt32  ar_coeff_y6:8;
        RBus_UInt32  ar_coeff_y7:8;
    };
}film_grain_film_template_para_y1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_y8:8;
        RBus_UInt32  ar_coeff_y9:8;
        RBus_UInt32  ar_coeff_y10:8;
        RBus_UInt32  ar_coeff_y11:8;
    };
}film_grain_film_template_para_y2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_y12:8;
        RBus_UInt32  ar_coeff_y13:8;
        RBus_UInt32  ar_coeff_y14:8;
        RBus_UInt32  ar_coeff_y15:8;
    };
}film_grain_film_template_para_y3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_y16:8;
        RBus_UInt32  ar_coeff_y17:8;
        RBus_UInt32  ar_coeff_y18:8;
        RBus_UInt32  ar_coeff_y19:8;
    };
}film_grain_film_template_para_y4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_y20:8;
        RBus_UInt32  ar_coeff_y21:8;
        RBus_UInt32  ar_coeff_y22:8;
        RBus_UInt32  ar_coeff_y23:8;
    };
}film_grain_film_template_para_y5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cb0:8;
        RBus_UInt32  ar_coeff_cb1:8;
        RBus_UInt32  ar_coeff_cb2:8;
        RBus_UInt32  ar_coeff_cb3:8;
    };
}film_grain_film_template_para_cb0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cb4:8;
        RBus_UInt32  ar_coeff_cb5:8;
        RBus_UInt32  ar_coeff_cb6:8;
        RBus_UInt32  ar_coeff_cb7:8;
    };
}film_grain_film_template_para_cb1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cb8:8;
        RBus_UInt32  ar_coeff_cb9:8;
        RBus_UInt32  ar_coeff_cb10:8;
        RBus_UInt32  ar_coeff_cb11:8;
    };
}film_grain_film_template_para_cb2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cb12:8;
        RBus_UInt32  ar_coeff_cb13:8;
        RBus_UInt32  ar_coeff_cb14:8;
        RBus_UInt32  ar_coeff_cb15:8;
    };
}film_grain_film_template_para_cb3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cb16:8;
        RBus_UInt32  ar_coeff_cb17:8;
        RBus_UInt32  ar_coeff_cb18:8;
        RBus_UInt32  ar_coeff_cb19:8;
    };
}film_grain_film_template_para_cb4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cb20:8;
        RBus_UInt32  ar_coeff_cb21:8;
        RBus_UInt32  ar_coeff_cb22:8;
        RBus_UInt32  ar_coeff_cb23:8;
    };
}film_grain_film_template_para_cb5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ar_coeff_cb24:8;
    };
}film_grain_film_template_para_cb6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cr0:8;
        RBus_UInt32  ar_coeff_cr1:8;
        RBus_UInt32  ar_coeff_cr2:8;
        RBus_UInt32  ar_coeff_cr3:8;
    };
}film_grain_film_template_para_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cr4:8;
        RBus_UInt32  ar_coeff_cr5:8;
        RBus_UInt32  ar_coeff_cr6:8;
        RBus_UInt32  ar_coeff_cr7:8;
    };
}film_grain_film_template_para_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cr8:8;
        RBus_UInt32  ar_coeff_cr9:8;
        RBus_UInt32  ar_coeff_cr10:8;
        RBus_UInt32  ar_coeff_cr11:8;
    };
}film_grain_film_template_para_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cr12:8;
        RBus_UInt32  ar_coeff_cr13:8;
        RBus_UInt32  ar_coeff_cr14:8;
        RBus_UInt32  ar_coeff_cr15:8;
    };
}film_grain_film_template_para_cr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cr16:8;
        RBus_UInt32  ar_coeff_cr17:8;
        RBus_UInt32  ar_coeff_cr18:8;
        RBus_UInt32  ar_coeff_cr19:8;
    };
}film_grain_film_template_para_cr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cr20:8;
        RBus_UInt32  ar_coeff_cr21:8;
        RBus_UInt32  ar_coeff_cr22:8;
        RBus_UInt32  ar_coeff_cr23:8;
    };
}film_grain_film_template_para_cr5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ar_coeff_cr24:8;
    };
}film_grain_film_template_para_cr6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chroma_scaling_from_luma:1;
        RBus_UInt32  res1:19;
        RBus_UInt32  num_y_point:4;
        RBus_UInt32  num_cb_point:4;
        RBus_UInt32  num_cr_point:4;
    };
}film_grain_film_piece_wise_point_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_scale_point_x0:8;
        RBus_UInt32  y_scale_point_x1:8;
        RBus_UInt32  y_scale_point_x2:8;
        RBus_UInt32  y_scale_point_x3:8;
    };
}film_grain_y_film_piece_wise_position_x0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_scale_point_x4:8;
        RBus_UInt32  y_scale_point_x5:8;
        RBus_UInt32  y_scale_point_x6:8;
        RBus_UInt32  y_scale_point_x7:8;
    };
}film_grain_y_film_piece_wise_position_x1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_scale_point_x8:8;
        RBus_UInt32  y_scale_point_x9:8;
        RBus_UInt32  y_scale_point_x10:8;
        RBus_UInt32  y_scale_point_x11:8;
    };
}film_grain_y_film_piece_wise_position_x2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  y_scale_point_x12:8;
        RBus_UInt32  y_scale_point_x13:8;
    };
}film_grain_y_film_piece_wise_position_x3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_scale_point_y0:8;
        RBus_UInt32  y_scale_point_y1:8;
        RBus_UInt32  y_scale_point_y2:8;
        RBus_UInt32  y_scale_point_y3:8;
    };
}film_grain_y_film_piece_wise_position_y0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_scale_point_y4:8;
        RBus_UInt32  y_scale_point_y5:8;
        RBus_UInt32  y_scale_point_y6:8;
        RBus_UInt32  y_scale_point_y7:8;
    };
}film_grain_y_film_piece_wise_position_y1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_scale_point_y8:8;
        RBus_UInt32  y_scale_point_y9:8;
        RBus_UInt32  y_scale_point_y10:8;
        RBus_UInt32  y_scale_point_y11:8;
    };
}film_grain_y_film_piece_wise_position_y2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  y_scale_point_y12:8;
        RBus_UInt32  y_scale_point_y13:8;
    };
}film_grain_y_film_piece_wise_position_y3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cb_scale_point_x0:8;
        RBus_UInt32  cb_scale_point_x1:8;
        RBus_UInt32  cb_scale_point_x2:8;
        RBus_UInt32  cb_scale_point_x3:8;
    };
}film_grain_cb_film_piece_wise_position_x0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cb_scale_point_x4:8;
        RBus_UInt32  cb_scale_point_x5:8;
        RBus_UInt32  cb_scale_point_x6:8;
        RBus_UInt32  cb_scale_point_x7:8;
    };
}film_grain_cb_film_piece_wise_position_x1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cb_scale_point_x8:8;
        RBus_UInt32  cb_scale_point_x9:8;
    };
}film_grain_cb_film_piece_wise_position_x2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cb_scale_point_y0:8;
        RBus_UInt32  cb_scale_point_y1:8;
        RBus_UInt32  cb_scale_point_y2:8;
        RBus_UInt32  cb_scale_point_y3:8;
    };
}film_grain_cb_film_piece_wise_position_y0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cb_scale_point_y4:8;
        RBus_UInt32  cb_scale_point_y5:8;
        RBus_UInt32  cb_scale_point_y6:8;
        RBus_UInt32  cb_scale_point_y7:8;
    };
}film_grain_cb_film_piece_wise_position_y1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cb_scale_point_y8:8;
        RBus_UInt32  cb_scale_point_y9:8;
    };
}film_grain_cb_film_piece_wise_position_y2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cr_scale_point_x0:8;
        RBus_UInt32  cr_scale_point_x1:8;
        RBus_UInt32  cr_scale_point_x2:8;
        RBus_UInt32  cr_scale_point_x3:8;
    };
}film_grain_cr_film_piece_wise_position_x0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cr_scale_point_x4:8;
        RBus_UInt32  cr_scale_point_x5:8;
        RBus_UInt32  cr_scale_point_x6:8;
        RBus_UInt32  cr_scale_point_x7:8;
    };
}film_grain_cr_film_piece_wise_position_x1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cr_scale_point_x8:8;
        RBus_UInt32  cr_scale_point_x9:8;
    };
}film_grain_cr_film_piece_wise_position_x2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cr_scale_point_y0:8;
        RBus_UInt32  cr_scale_point_y1:8;
        RBus_UInt32  cr_scale_point_y2:8;
        RBus_UInt32  cr_scale_point_y3:8;
    };
}film_grain_cr_film_piece_wise_position_y0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cr_scale_point_y4:8;
        RBus_UInt32  cr_scale_point_y5:8;
        RBus_UInt32  cr_scale_point_y6:8;
        RBus_UInt32  cr_scale_point_y7:8;
    };
}film_grain_cr_film_piece_wise_position_y1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cr_scale_point_y8:8;
        RBus_UInt32  cr_scale_point_y9:8;
    };
}film_grain_cr_film_piece_wise_position_y2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  mc_identity:1;
        RBus_UInt32  scaling_shift:4;
        RBus_UInt32  clip_to_restricted_range:1;
        RBus_UInt32  overlap_flag:1;
    };
}film_grain_film_noise_apply_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  cb_offset:9;
        RBus_UInt32  cb_luma_mult:8;
        RBus_UInt32  cb_mult:8;
    };
}film_grain_film_noise_apply_para_cb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  cr_offset:9;
        RBus_UInt32  cr_luma_mult:8;
        RBus_UInt32  cr_mult:8;
    };
}film_grain_film_noise_apply_para_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hw_fw_priority:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  wr_tab_en:1;
        RBus_UInt32  rd_tab_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  table_id:2;
        RBus_UInt32  rw_tab_addr:12;
    };
}film_grain_film_rw_tab_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  wr_tab_data:10;
    };
}film_grain_film_tab_wr_data0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  rd_tab_data:10;
    };
}film_grain_film_tab_rd_data1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  db_read_0:1;
        RBus_UInt32  db_en_0:1;
        RBus_UInt32  db_apply_0:1;
    };
}film_grain_film_grain_db_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  film_noise_y_ls:1;
        RBus_UInt32  film_noise_cb_ls:1;
        RBus_UInt32  film_noise_cr_ls:1;
        RBus_UInt32  film_linbuf_ls:1;
        RBus_UInt32  film_offset_ls:1;
    };
}film_grain_film_grain_mbist_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  film_noise_y_rm:4;
        RBus_UInt32  film_noise_cb_rm:4;
        RBus_UInt32  film_noise_cr_rm:4;
        RBus_UInt32  film_linbuf_rm:4;
        RBus_UInt32  film_offset_rm:4;
    };
}film_grain_film_grain_mbist_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  film_noise_y_rme:1;
        RBus_UInt32  film_noise_cb_rme:1;
        RBus_UInt32  film_noise_cr_rme:1;
        RBus_UInt32  film_linbuf_rme:1;
        RBus_UInt32  film_offset_rme:1;
    };
}film_grain_film_grain_mbist_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  film_noise_y_bist_mode:1;
        RBus_UInt32  film_noise_cb_bist_mode:1;
        RBus_UInt32  film_noise_cr_bist_mode:1;
        RBus_UInt32  film_linbuf_bist_mode:1;
        RBus_UInt32  film_offset_bist_mode:1;
    };
}film_grain_film_grain_mbist_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  film_noise_y_drf_bist_mode:1;
        RBus_UInt32  film_noise_cb_drf_bist_mode:1;
        RBus_UInt32  film_noise_cr_drf_bist_mode:1;
        RBus_UInt32  film_linbuf_drf_bist_mode:1;
        RBus_UInt32  film_offset_drf_bist_mode:1;
    };
}film_grain_film_grain_mbist_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  film_noise_y_drf_test_resume:1;
        RBus_UInt32  film_noise_cb_drf_test_resume:1;
        RBus_UInt32  film_noise_cr_drf_test_resume:1;
        RBus_UInt32  film_linbuf_drf_test_resume:1;
        RBus_UInt32  film_offset_drf_test_resume:1;
    };
}film_grain_film_grain_mbist_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  film_noise_y_bist_fail_3:1;
        RBus_UInt32  film_noise_y_bist_fail_2:1;
        RBus_UInt32  film_noise_y_bist_fail_1:1;
        RBus_UInt32  film_noise_y_bist_fail_0:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  film_noise_cb_bist_fail_3:1;
        RBus_UInt32  film_noise_cb_bist_fail_2:1;
        RBus_UInt32  film_noise_cb_bist_fail_1:1;
        RBus_UInt32  film_noise_cb_bist_fail_0:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  film_noise_cr_bist_fail_3:1;
        RBus_UInt32  film_noise_cr_bist_fail_2:1;
        RBus_UInt32  film_noise_cr_bist_fail_1:1;
        RBus_UInt32  film_noise_cr_bist_fail_0:1;
        RBus_UInt32  film_linbuf_bist_fail_1:1;
        RBus_UInt32  film_linbuf_bist_fail_0:1;
        RBus_UInt32  film_offset_bist_fail_1:1;
        RBus_UInt32  film_offset_bist_fail_0:1;
    };
}film_grain_film_grain_mbist_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  film_noise_y_drf_bist_fail_3:1;
        RBus_UInt32  film_noise_y_drf_bist_fail_2:1;
        RBus_UInt32  film_noise_y_drf_bist_fail_1:1;
        RBus_UInt32  film_noise_y_drf_bist_fail_0:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  film_noise_cb_drf_bist_fail_3:1;
        RBus_UInt32  film_noise_cb_drf_bist_fail_2:1;
        RBus_UInt32  film_noise_cb_drf_bist_fail_1:1;
        RBus_UInt32  film_noise_cb_drf_bist_fail_0:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  film_noise_cr_drf_bist_fail_3:1;
        RBus_UInt32  film_noise_cr_drf_bist_fail_2:1;
        RBus_UInt32  film_noise_cr_drf_bist_fail_1:1;
        RBus_UInt32  film_noise_cr_drf_bist_fail_0:1;
        RBus_UInt32  film_linbuf_drf_bist_fail_1:1;
        RBus_UInt32  film_linbuf_drf_bist_fail_0:1;
        RBus_UInt32  film_offset_drf_bist_fail_1:1;
        RBus_UInt32  film_offset_drf_bist_fail_0:1;
    };
}film_grain_film_grain_mbist_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  film_noise_y_bist_fail_group:1;
        RBus_UInt32  film_noise_cb_bist_fail_group:1;
        RBus_UInt32  film_noise_cr_bist_fail_group:1;
        RBus_UInt32  film_linbuf_bist_fail_group:1;
        RBus_UInt32  film_offset_bist_fail_group:1;
    };
}film_grain_film_grain_mbist_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  film_noise_y_drf_bist_fail_group:1;
        RBus_UInt32  film_noise_cb_drf_bist_fail_group:1;
        RBus_UInt32  film_noise_cr_drf_bist_fail_group:1;
        RBus_UInt32  film_linbuf_drf_bist_fail_group:1;
        RBus_UInt32  film_offset_drf_bist_fail_group:1;
    };
}film_grain_film_grain_mbist_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  film_noise_y_bist_done:1;
        RBus_UInt32  film_noise_cb_bist_done:1;
        RBus_UInt32  film_noise_cr_bist_done:1;
        RBus_UInt32  film_linbuf_bist_done:1;
        RBus_UInt32  film_offset_bist_done:1;
    };
}film_grain_film_grain_mbist_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  film_noise_y_drf_bist_done:1;
        RBus_UInt32  film_noise_cb_drf_bist_done:1;
        RBus_UInt32  film_noise_cr_drf_bist_done:1;
        RBus_UInt32  film_linbuf_drf_bist_done:1;
        RBus_UInt32  film_offset_drf_bist_done:1;
    };
}film_grain_film_grain_mbist_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  film_noise_y_drf_start_pause:1;
        RBus_UInt32  film_noise_cb_drf_start_pause:1;
        RBus_UInt32  film_noise_cr_drf_start_pause:1;
        RBus_UInt32  film_linbuf_drf_start_pause:1;
        RBus_UInt32  film_offset_drf_start_pause:1;
    };
}film_grain_film_grain_mbist_drf_start_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  film_noise_y_test:1;
        RBus_UInt32  film_noise_cb_test:1;
        RBus_UInt32  film_noise_cr_test:1;
        RBus_UInt32  film_linbuf_test:1;
        RBus_UInt32  film_offset_test:1;
    };
}film_grain_film_grain_mbist_test_RBUS;

#else //apply LITTLE_ENDIAN

//======FILM_GRAIN register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  film_height:12;
        RBus_UInt32  res1:15;
        RBus_UInt32  use_high_bit_depth:1;
        RBus_UInt32  film_420to422_en:1;
        RBus_UInt32  film_bpp:1;
        RBus_UInt32  chroma_filmgrain_en:1;
        RBus_UInt32  luma_filmgrain_en:1;
    };
}film_grain_film_grain_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  film_width:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  random_seed:16;
    };
}film_grain_film_random_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  grain_scale_shift:2;
        RBus_UInt32  ar_coeff_shift:4;
        RBus_UInt32  ar_coeff_lag:2;
        RBus_UInt32  res1:21;
        RBus_UInt32  porch_not_enough_clr:1;
        RBus_UInt32  porch_not_enough:1;
        RBus_UInt32  hw_gen_noise_en:1;
    };
}film_grain_film_template_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_y3:8;
        RBus_UInt32  ar_coeff_y2:8;
        RBus_UInt32  ar_coeff_y1:8;
        RBus_UInt32  ar_coeff_y0:8;
    };
}film_grain_film_template_para_y0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_y7:8;
        RBus_UInt32  ar_coeff_y6:8;
        RBus_UInt32  ar_coeff_y5:8;
        RBus_UInt32  ar_coeff_y4:8;
    };
}film_grain_film_template_para_y1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_y11:8;
        RBus_UInt32  ar_coeff_y10:8;
        RBus_UInt32  ar_coeff_y9:8;
        RBus_UInt32  ar_coeff_y8:8;
    };
}film_grain_film_template_para_y2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_y15:8;
        RBus_UInt32  ar_coeff_y14:8;
        RBus_UInt32  ar_coeff_y13:8;
        RBus_UInt32  ar_coeff_y12:8;
    };
}film_grain_film_template_para_y3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_y19:8;
        RBus_UInt32  ar_coeff_y18:8;
        RBus_UInt32  ar_coeff_y17:8;
        RBus_UInt32  ar_coeff_y16:8;
    };
}film_grain_film_template_para_y4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_y23:8;
        RBus_UInt32  ar_coeff_y22:8;
        RBus_UInt32  ar_coeff_y21:8;
        RBus_UInt32  ar_coeff_y20:8;
    };
}film_grain_film_template_para_y5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cb3:8;
        RBus_UInt32  ar_coeff_cb2:8;
        RBus_UInt32  ar_coeff_cb1:8;
        RBus_UInt32  ar_coeff_cb0:8;
    };
}film_grain_film_template_para_cb0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cb7:8;
        RBus_UInt32  ar_coeff_cb6:8;
        RBus_UInt32  ar_coeff_cb5:8;
        RBus_UInt32  ar_coeff_cb4:8;
    };
}film_grain_film_template_para_cb1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cb11:8;
        RBus_UInt32  ar_coeff_cb10:8;
        RBus_UInt32  ar_coeff_cb9:8;
        RBus_UInt32  ar_coeff_cb8:8;
    };
}film_grain_film_template_para_cb2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cb15:8;
        RBus_UInt32  ar_coeff_cb14:8;
        RBus_UInt32  ar_coeff_cb13:8;
        RBus_UInt32  ar_coeff_cb12:8;
    };
}film_grain_film_template_para_cb3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cb19:8;
        RBus_UInt32  ar_coeff_cb18:8;
        RBus_UInt32  ar_coeff_cb17:8;
        RBus_UInt32  ar_coeff_cb16:8;
    };
}film_grain_film_template_para_cb4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cb23:8;
        RBus_UInt32  ar_coeff_cb22:8;
        RBus_UInt32  ar_coeff_cb21:8;
        RBus_UInt32  ar_coeff_cb20:8;
    };
}film_grain_film_template_para_cb5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cb24:8;
        RBus_UInt32  res1:24;
    };
}film_grain_film_template_para_cb6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cr3:8;
        RBus_UInt32  ar_coeff_cr2:8;
        RBus_UInt32  ar_coeff_cr1:8;
        RBus_UInt32  ar_coeff_cr0:8;
    };
}film_grain_film_template_para_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cr7:8;
        RBus_UInt32  ar_coeff_cr6:8;
        RBus_UInt32  ar_coeff_cr5:8;
        RBus_UInt32  ar_coeff_cr4:8;
    };
}film_grain_film_template_para_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cr11:8;
        RBus_UInt32  ar_coeff_cr10:8;
        RBus_UInt32  ar_coeff_cr9:8;
        RBus_UInt32  ar_coeff_cr8:8;
    };
}film_grain_film_template_para_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cr15:8;
        RBus_UInt32  ar_coeff_cr14:8;
        RBus_UInt32  ar_coeff_cr13:8;
        RBus_UInt32  ar_coeff_cr12:8;
    };
}film_grain_film_template_para_cr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cr19:8;
        RBus_UInt32  ar_coeff_cr18:8;
        RBus_UInt32  ar_coeff_cr17:8;
        RBus_UInt32  ar_coeff_cr16:8;
    };
}film_grain_film_template_para_cr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cr23:8;
        RBus_UInt32  ar_coeff_cr22:8;
        RBus_UInt32  ar_coeff_cr21:8;
        RBus_UInt32  ar_coeff_cr20:8;
    };
}film_grain_film_template_para_cr5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ar_coeff_cr24:8;
        RBus_UInt32  res1:24;
    };
}film_grain_film_template_para_cr6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  num_cr_point:4;
        RBus_UInt32  num_cb_point:4;
        RBus_UInt32  num_y_point:4;
        RBus_UInt32  res1:19;
        RBus_UInt32  chroma_scaling_from_luma:1;
    };
}film_grain_film_piece_wise_point_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_scale_point_x3:8;
        RBus_UInt32  y_scale_point_x2:8;
        RBus_UInt32  y_scale_point_x1:8;
        RBus_UInt32  y_scale_point_x0:8;
    };
}film_grain_y_film_piece_wise_position_x0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_scale_point_x7:8;
        RBus_UInt32  y_scale_point_x6:8;
        RBus_UInt32  y_scale_point_x5:8;
        RBus_UInt32  y_scale_point_x4:8;
    };
}film_grain_y_film_piece_wise_position_x1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_scale_point_x11:8;
        RBus_UInt32  y_scale_point_x10:8;
        RBus_UInt32  y_scale_point_x9:8;
        RBus_UInt32  y_scale_point_x8:8;
    };
}film_grain_y_film_piece_wise_position_x2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_scale_point_x13:8;
        RBus_UInt32  y_scale_point_x12:8;
        RBus_UInt32  res1:16;
    };
}film_grain_y_film_piece_wise_position_x3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_scale_point_y3:8;
        RBus_UInt32  y_scale_point_y2:8;
        RBus_UInt32  y_scale_point_y1:8;
        RBus_UInt32  y_scale_point_y0:8;
    };
}film_grain_y_film_piece_wise_position_y0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_scale_point_y7:8;
        RBus_UInt32  y_scale_point_y6:8;
        RBus_UInt32  y_scale_point_y5:8;
        RBus_UInt32  y_scale_point_y4:8;
    };
}film_grain_y_film_piece_wise_position_y1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_scale_point_y11:8;
        RBus_UInt32  y_scale_point_y10:8;
        RBus_UInt32  y_scale_point_y9:8;
        RBus_UInt32  y_scale_point_y8:8;
    };
}film_grain_y_film_piece_wise_position_y2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_scale_point_y13:8;
        RBus_UInt32  y_scale_point_y12:8;
        RBus_UInt32  res1:16;
    };
}film_grain_y_film_piece_wise_position_y3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cb_scale_point_x3:8;
        RBus_UInt32  cb_scale_point_x2:8;
        RBus_UInt32  cb_scale_point_x1:8;
        RBus_UInt32  cb_scale_point_x0:8;
    };
}film_grain_cb_film_piece_wise_position_x0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cb_scale_point_x7:8;
        RBus_UInt32  cb_scale_point_x6:8;
        RBus_UInt32  cb_scale_point_x5:8;
        RBus_UInt32  cb_scale_point_x4:8;
    };
}film_grain_cb_film_piece_wise_position_x1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cb_scale_point_x9:8;
        RBus_UInt32  cb_scale_point_x8:8;
        RBus_UInt32  res1:16;
    };
}film_grain_cb_film_piece_wise_position_x2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cb_scale_point_y3:8;
        RBus_UInt32  cb_scale_point_y2:8;
        RBus_UInt32  cb_scale_point_y1:8;
        RBus_UInt32  cb_scale_point_y0:8;
    };
}film_grain_cb_film_piece_wise_position_y0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cb_scale_point_y7:8;
        RBus_UInt32  cb_scale_point_y6:8;
        RBus_UInt32  cb_scale_point_y5:8;
        RBus_UInt32  cb_scale_point_y4:8;
    };
}film_grain_cb_film_piece_wise_position_y1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cb_scale_point_y9:8;
        RBus_UInt32  cb_scale_point_y8:8;
        RBus_UInt32  res1:16;
    };
}film_grain_cb_film_piece_wise_position_y2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cr_scale_point_x3:8;
        RBus_UInt32  cr_scale_point_x2:8;
        RBus_UInt32  cr_scale_point_x1:8;
        RBus_UInt32  cr_scale_point_x0:8;
    };
}film_grain_cr_film_piece_wise_position_x0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cr_scale_point_x7:8;
        RBus_UInt32  cr_scale_point_x6:8;
        RBus_UInt32  cr_scale_point_x5:8;
        RBus_UInt32  cr_scale_point_x4:8;
    };
}film_grain_cr_film_piece_wise_position_x1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cr_scale_point_x9:8;
        RBus_UInt32  cr_scale_point_x8:8;
        RBus_UInt32  res1:16;
    };
}film_grain_cr_film_piece_wise_position_x2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cr_scale_point_y3:8;
        RBus_UInt32  cr_scale_point_y2:8;
        RBus_UInt32  cr_scale_point_y1:8;
        RBus_UInt32  cr_scale_point_y0:8;
    };
}film_grain_cr_film_piece_wise_position_y0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cr_scale_point_y7:8;
        RBus_UInt32  cr_scale_point_y6:8;
        RBus_UInt32  cr_scale_point_y5:8;
        RBus_UInt32  cr_scale_point_y4:8;
    };
}film_grain_cr_film_piece_wise_position_y1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cr_scale_point_y9:8;
        RBus_UInt32  cr_scale_point_y8:8;
        RBus_UInt32  res1:16;
    };
}film_grain_cr_film_piece_wise_position_y2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  overlap_flag:1;
        RBus_UInt32  clip_to_restricted_range:1;
        RBus_UInt32  scaling_shift:4;
        RBus_UInt32  mc_identity:1;
        RBus_UInt32  res1:25;
    };
}film_grain_film_noise_apply_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cb_mult:8;
        RBus_UInt32  cb_luma_mult:8;
        RBus_UInt32  cb_offset:9;
        RBus_UInt32  res1:7;
    };
}film_grain_film_noise_apply_para_cb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cr_mult:8;
        RBus_UInt32  cr_luma_mult:8;
        RBus_UInt32  cr_offset:9;
        RBus_UInt32  res1:7;
    };
}film_grain_film_noise_apply_para_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rw_tab_addr:12;
        RBus_UInt32  table_id:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  rd_tab_en:1;
        RBus_UInt32  wr_tab_en:1;
        RBus_UInt32  res2:13;
        RBus_UInt32  hw_fw_priority:1;
    };
}film_grain_film_rw_tab_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_tab_data:10;
        RBus_UInt32  res1:22;
    };
}film_grain_film_tab_wr_data0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_tab_data:10;
        RBus_UInt32  res1:22;
    };
}film_grain_film_tab_rd_data1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  db_apply_0:1;
        RBus_UInt32  db_en_0:1;
        RBus_UInt32  db_read_0:1;
        RBus_UInt32  res1:29;
    };
}film_grain_film_grain_db_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  film_offset_ls:1;
        RBus_UInt32  film_linbuf_ls:1;
        RBus_UInt32  film_noise_cr_ls:1;
        RBus_UInt32  film_noise_cb_ls:1;
        RBus_UInt32  film_noise_y_ls:1;
        RBus_UInt32  res1:27;
    };
}film_grain_film_grain_mbist_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  film_offset_rm:4;
        RBus_UInt32  film_linbuf_rm:4;
        RBus_UInt32  film_noise_cr_rm:4;
        RBus_UInt32  film_noise_cb_rm:4;
        RBus_UInt32  film_noise_y_rm:4;
        RBus_UInt32  res1:12;
    };
}film_grain_film_grain_mbist_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  film_offset_rme:1;
        RBus_UInt32  film_linbuf_rme:1;
        RBus_UInt32  film_noise_cr_rme:1;
        RBus_UInt32  film_noise_cb_rme:1;
        RBus_UInt32  film_noise_y_rme:1;
        RBus_UInt32  res1:27;
    };
}film_grain_film_grain_mbist_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  film_offset_bist_mode:1;
        RBus_UInt32  film_linbuf_bist_mode:1;
        RBus_UInt32  film_noise_cr_bist_mode:1;
        RBus_UInt32  film_noise_cb_bist_mode:1;
        RBus_UInt32  film_noise_y_bist_mode:1;
        RBus_UInt32  res1:27;
    };
}film_grain_film_grain_mbist_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  film_offset_drf_bist_mode:1;
        RBus_UInt32  film_linbuf_drf_bist_mode:1;
        RBus_UInt32  film_noise_cr_drf_bist_mode:1;
        RBus_UInt32  film_noise_cb_drf_bist_mode:1;
        RBus_UInt32  film_noise_y_drf_bist_mode:1;
        RBus_UInt32  res1:27;
    };
}film_grain_film_grain_mbist_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  film_offset_drf_test_resume:1;
        RBus_UInt32  film_linbuf_drf_test_resume:1;
        RBus_UInt32  film_noise_cr_drf_test_resume:1;
        RBus_UInt32  film_noise_cb_drf_test_resume:1;
        RBus_UInt32  film_noise_y_drf_test_resume:1;
        RBus_UInt32  res1:27;
    };
}film_grain_film_grain_mbist_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  film_offset_bist_fail_0:1;
        RBus_UInt32  film_offset_bist_fail_1:1;
        RBus_UInt32  film_linbuf_bist_fail_0:1;
        RBus_UInt32  film_linbuf_bist_fail_1:1;
        RBus_UInt32  film_noise_cr_bist_fail_0:1;
        RBus_UInt32  film_noise_cr_bist_fail_1:1;
        RBus_UInt32  film_noise_cr_bist_fail_2:1;
        RBus_UInt32  film_noise_cr_bist_fail_3:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  film_noise_cb_bist_fail_0:1;
        RBus_UInt32  film_noise_cb_bist_fail_1:1;
        RBus_UInt32  film_noise_cb_bist_fail_2:1;
        RBus_UInt32  film_noise_cb_bist_fail_3:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  film_noise_y_bist_fail_0:1;
        RBus_UInt32  film_noise_y_bist_fail_1:1;
        RBus_UInt32  film_noise_y_bist_fail_2:1;
        RBus_UInt32  film_noise_y_bist_fail_3:1;
        RBus_UInt32  res3:8;
    };
}film_grain_film_grain_mbist_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  film_offset_drf_bist_fail_0:1;
        RBus_UInt32  film_offset_drf_bist_fail_1:1;
        RBus_UInt32  film_linbuf_drf_bist_fail_0:1;
        RBus_UInt32  film_linbuf_drf_bist_fail_1:1;
        RBus_UInt32  film_noise_cr_drf_bist_fail_0:1;
        RBus_UInt32  film_noise_cr_drf_bist_fail_1:1;
        RBus_UInt32  film_noise_cr_drf_bist_fail_2:1;
        RBus_UInt32  film_noise_cr_drf_bist_fail_3:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  film_noise_cb_drf_bist_fail_0:1;
        RBus_UInt32  film_noise_cb_drf_bist_fail_1:1;
        RBus_UInt32  film_noise_cb_drf_bist_fail_2:1;
        RBus_UInt32  film_noise_cb_drf_bist_fail_3:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  film_noise_y_drf_bist_fail_0:1;
        RBus_UInt32  film_noise_y_drf_bist_fail_1:1;
        RBus_UInt32  film_noise_y_drf_bist_fail_2:1;
        RBus_UInt32  film_noise_y_drf_bist_fail_3:1;
        RBus_UInt32  res3:8;
    };
}film_grain_film_grain_mbist_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  film_offset_bist_fail_group:1;
        RBus_UInt32  film_linbuf_bist_fail_group:1;
        RBus_UInt32  film_noise_cr_bist_fail_group:1;
        RBus_UInt32  film_noise_cb_bist_fail_group:1;
        RBus_UInt32  film_noise_y_bist_fail_group:1;
        RBus_UInt32  res1:27;
    };
}film_grain_film_grain_mbist_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  film_offset_drf_bist_fail_group:1;
        RBus_UInt32  film_linbuf_drf_bist_fail_group:1;
        RBus_UInt32  film_noise_cr_drf_bist_fail_group:1;
        RBus_UInt32  film_noise_cb_drf_bist_fail_group:1;
        RBus_UInt32  film_noise_y_drf_bist_fail_group:1;
        RBus_UInt32  res1:27;
    };
}film_grain_film_grain_mbist_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  film_offset_bist_done:1;
        RBus_UInt32  film_linbuf_bist_done:1;
        RBus_UInt32  film_noise_cr_bist_done:1;
        RBus_UInt32  film_noise_cb_bist_done:1;
        RBus_UInt32  film_noise_y_bist_done:1;
        RBus_UInt32  res1:27;
    };
}film_grain_film_grain_mbist_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  film_offset_drf_bist_done:1;
        RBus_UInt32  film_linbuf_drf_bist_done:1;
        RBus_UInt32  film_noise_cr_drf_bist_done:1;
        RBus_UInt32  film_noise_cb_drf_bist_done:1;
        RBus_UInt32  film_noise_y_drf_bist_done:1;
        RBus_UInt32  res1:27;
    };
}film_grain_film_grain_mbist_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  film_offset_drf_start_pause:1;
        RBus_UInt32  film_linbuf_drf_start_pause:1;
        RBus_UInt32  film_noise_cr_drf_start_pause:1;
        RBus_UInt32  film_noise_cb_drf_start_pause:1;
        RBus_UInt32  film_noise_y_drf_start_pause:1;
        RBus_UInt32  res1:27;
    };
}film_grain_film_grain_mbist_drf_start_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  film_offset_test:1;
        RBus_UInt32  film_linbuf_test:1;
        RBus_UInt32  film_noise_cr_test:1;
        RBus_UInt32  film_noise_cb_test:1;
        RBus_UInt32  film_noise_y_test:1;
        RBus_UInt32  res1:27;
    };
}film_grain_film_grain_mbist_test_RBUS;




#endif 


#endif 
