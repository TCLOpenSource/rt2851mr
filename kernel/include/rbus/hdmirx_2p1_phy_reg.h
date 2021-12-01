/**
* @file RL6617-DesignSpec-HDMI_RX_PHY_2P1_p0p1
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_HDMIRX_2P1_PHY_REG_H_
#define _RBUS_HDMIRX_2P1_PHY_REG_H_

#include "rbus_types.h"



//  HDMIRX_2P1_PHY Register Address
#define  HDMIRX_2P1_PHY_Z0K                                                     0x1800DA04
#define  HDMIRX_2P1_PHY_Z0K_reg_addr                                             "0xB800DA04"
#define  HDMIRX_2P1_PHY_Z0K_reg                                                  0xB800DA04
#define  HDMIRX_2P1_PHY_Z0K_inst_addr                                            "0x0000"
#define  set_HDMIRX_2P1_PHY_Z0K_reg(data)                                        (*((volatile unsigned int*)HDMIRX_2P1_PHY_Z0K_reg)=data)
#define  get_HDMIRX_2P1_PHY_Z0K_reg                                              (*((volatile unsigned int*)HDMIRX_2P1_PHY_Z0K_reg))
#define  HDMIRX_2P1_PHY_Z0K_reg_z0_adjr_1_shift                                  (8)
#define  HDMIRX_2P1_PHY_Z0K_reg_z0_adjr_0_shift                                  (0)
#define  HDMIRX_2P1_PHY_Z0K_reg_z0_adjr_1_mask                                   (0x00001F00)
#define  HDMIRX_2P1_PHY_Z0K_reg_z0_adjr_0_mask                                   (0x0000001F)
#define  HDMIRX_2P1_PHY_Z0K_reg_z0_adjr_1(data)                                  (0x00001F00&((data)<<8))
#define  HDMIRX_2P1_PHY_Z0K_reg_z0_adjr_0(data)                                  (0x0000001F&(data))
#define  HDMIRX_2P1_PHY_Z0K_get_reg_z0_adjr_1(data)                              ((0x00001F00&(data))>>8)
#define  HDMIRX_2P1_PHY_Z0K_get_reg_z0_adjr_0(data)                              (0x0000001F&(data))

#define  HDMIRX_2P1_PHY_Z0POW                                                   0x1800DA08
#define  HDMIRX_2P1_PHY_Z0POW_reg_addr                                           "0xB800DA08"
#define  HDMIRX_2P1_PHY_Z0POW_reg                                                0xB800DA08
#define  HDMIRX_2P1_PHY_Z0POW_inst_addr                                          "0x0001"
#define  set_HDMIRX_2P1_PHY_Z0POW_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_Z0POW_reg)=data)
#define  get_HDMIRX_2P1_PHY_Z0POW_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_Z0POW_reg))
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z300_sel_shift                              (24)
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z300pow_shift                               (20)
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z0pow_r_shift                               (12)
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z0pow_g_shift                               (8)
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z0pow_ck_shift                              (4)
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z0pow_b_shift                               (0)
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z300_sel_mask                               (0x03000000)
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z300pow_mask                                (0x00300000)
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z0pow_r_mask                                (0x00003000)
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z0pow_g_mask                                (0x00000300)
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z0pow_ck_mask                               (0x00000030)
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z0pow_b_mask                                (0x00000003)
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z300_sel(data)                              (0x03000000&((data)<<24))
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z300pow(data)                               (0x00300000&((data)<<20))
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z0pow_r(data)                               (0x00003000&((data)<<12))
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z0pow_g(data)                               (0x00000300&((data)<<8))
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z0pow_ck(data)                              (0x00000030&((data)<<4))
#define  HDMIRX_2P1_PHY_Z0POW_reg_z0_z0pow_b(data)                               (0x00000003&(data))
#define  HDMIRX_2P1_PHY_Z0POW_get_reg_z0_z300_sel(data)                          ((0x03000000&(data))>>24)
#define  HDMIRX_2P1_PHY_Z0POW_get_reg_z0_z300pow(data)                           ((0x00300000&(data))>>20)
#define  HDMIRX_2P1_PHY_Z0POW_get_reg_z0_z0pow_r(data)                           ((0x00003000&(data))>>12)
#define  HDMIRX_2P1_PHY_Z0POW_get_reg_z0_z0pow_g(data)                           ((0x00000300&(data))>>8)
#define  HDMIRX_2P1_PHY_Z0POW_get_reg_z0_z0pow_ck(data)                          ((0x00000030&(data))>>4)
#define  HDMIRX_2P1_PHY_Z0POW_get_reg_z0_z0pow_b(data)                           (0x00000003&(data))

#define  HDMIRX_2P1_PHY_TOP_IN_0                                                0x1800DA10
#define  HDMIRX_2P1_PHY_TOP_IN_0_reg_addr                                        "0xB800DA10"
#define  HDMIRX_2P1_PHY_TOP_IN_0_reg                                             0xB800DA10
#define  HDMIRX_2P1_PHY_TOP_IN_0_inst_addr                                       "0x0002"
#define  set_HDMIRX_2P1_PHY_TOP_IN_0_reg(data)                                   (*((volatile unsigned int*)HDMIRX_2P1_PHY_TOP_IN_0_reg)=data)
#define  get_HDMIRX_2P1_PHY_TOP_IN_0_reg                                         (*((volatile unsigned int*)HDMIRX_2P1_PHY_TOP_IN_0_reg))
#define  HDMIRX_2P1_PHY_TOP_IN_0_reg_top_in_4_shift                              (24)
#define  HDMIRX_2P1_PHY_TOP_IN_0_reg_top_in_3_shift                              (16)
#define  HDMIRX_2P1_PHY_TOP_IN_0_reg_top_in_2_shift                              (8)
#define  HDMIRX_2P1_PHY_TOP_IN_0_reg_top_in_1_shift                              (0)
#define  HDMIRX_2P1_PHY_TOP_IN_0_reg_top_in_4_mask                               (0xFF000000)
#define  HDMIRX_2P1_PHY_TOP_IN_0_reg_top_in_3_mask                               (0x00FF0000)
#define  HDMIRX_2P1_PHY_TOP_IN_0_reg_top_in_2_mask                               (0x0000FF00)
#define  HDMIRX_2P1_PHY_TOP_IN_0_reg_top_in_1_mask                               (0x000000FF)
#define  HDMIRX_2P1_PHY_TOP_IN_0_reg_top_in_4(data)                              (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_TOP_IN_0_reg_top_in_3(data)                              (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_TOP_IN_0_reg_top_in_2(data)                              (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_TOP_IN_0_reg_top_in_1(data)                              (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_TOP_IN_0_get_reg_top_in_4(data)                          ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_TOP_IN_0_get_reg_top_in_3(data)                          ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_TOP_IN_0_get_reg_top_in_2(data)                          ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_TOP_IN_0_get_reg_top_in_1(data)                          (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_TOP_IN_1                                                0x1800DA14
#define  HDMIRX_2P1_PHY_TOP_IN_1_reg_addr                                        "0xB800DA14"
#define  HDMIRX_2P1_PHY_TOP_IN_1_reg                                             0xB800DA14
#define  HDMIRX_2P1_PHY_TOP_IN_1_inst_addr                                       "0x0003"
#define  set_HDMIRX_2P1_PHY_TOP_IN_1_reg(data)                                   (*((volatile unsigned int*)HDMIRX_2P1_PHY_TOP_IN_1_reg)=data)
#define  get_HDMIRX_2P1_PHY_TOP_IN_1_reg                                         (*((volatile unsigned int*)HDMIRX_2P1_PHY_TOP_IN_1_reg))
#define  HDMIRX_2P1_PHY_TOP_IN_1_reg_top_in_8_shift                              (24)
#define  HDMIRX_2P1_PHY_TOP_IN_1_reg_top_in_7_shift                              (16)
#define  HDMIRX_2P1_PHY_TOP_IN_1_reg_top_in_6_shift                              (8)
#define  HDMIRX_2P1_PHY_TOP_IN_1_reg_top_in_5_shift                              (0)
#define  HDMIRX_2P1_PHY_TOP_IN_1_reg_top_in_8_mask                               (0xFF000000)
#define  HDMIRX_2P1_PHY_TOP_IN_1_reg_top_in_7_mask                               (0x00FF0000)
#define  HDMIRX_2P1_PHY_TOP_IN_1_reg_top_in_6_mask                               (0x0000FF00)
#define  HDMIRX_2P1_PHY_TOP_IN_1_reg_top_in_5_mask                               (0x000000FF)
#define  HDMIRX_2P1_PHY_TOP_IN_1_reg_top_in_8(data)                              (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_TOP_IN_1_reg_top_in_7(data)                              (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_TOP_IN_1_reg_top_in_6(data)                              (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_TOP_IN_1_reg_top_in_5(data)                              (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_TOP_IN_1_get_reg_top_in_8(data)                          ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_TOP_IN_1_get_reg_top_in_7(data)                          ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_TOP_IN_1_get_reg_top_in_6(data)                          ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_TOP_IN_1_get_reg_top_in_5(data)                          (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_TOP_IN_2                                                0x1800DA18
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_addr                                        "0xB800DA18"
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg                                             0xB800DA18
#define  HDMIRX_2P1_PHY_TOP_IN_2_inst_addr                                       "0x0004"
#define  set_HDMIRX_2P1_PHY_TOP_IN_2_reg(data)                                   (*((volatile unsigned int*)HDMIRX_2P1_PHY_TOP_IN_2_reg)=data)
#define  get_HDMIRX_2P1_PHY_TOP_IN_2_reg                                         (*((volatile unsigned int*)HDMIRX_2P1_PHY_TOP_IN_2_reg))
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_bg_envbgup_shift                            (17)
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_bg_pow_shift                                (16)
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_bg_rbg2_shift                               (14)
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_bg_rbg_shift                                (11)
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_bg_rbgloop2_shift                           (8)
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_ck_latch_shift                              (1)
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_hdmirx_bias_en_shift                        (0)
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_bg_envbgup_mask                             (0x00020000)
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_bg_pow_mask                                 (0x00010000)
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_bg_rbg2_mask                                (0x0000C000)
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_bg_rbg_mask                                 (0x00003800)
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_bg_rbgloop2_mask                            (0x00000700)
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_ck_latch_mask                               (0x00000002)
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_hdmirx_bias_en_mask                         (0x00000001)
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_bg_envbgup(data)                            (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_bg_pow(data)                                (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_bg_rbg2(data)                               (0x0000C000&((data)<<14))
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_bg_rbg(data)                                (0x00003800&((data)<<11))
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_bg_rbgloop2(data)                           (0x00000700&((data)<<8))
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_ck_latch(data)                              (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_TOP_IN_2_reg_hdmirx_bias_en(data)                        (0x00000001&(data))
#define  HDMIRX_2P1_PHY_TOP_IN_2_get_reg_bg_envbgup(data)                        ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_TOP_IN_2_get_reg_bg_pow(data)                            ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_TOP_IN_2_get_reg_bg_rbg2(data)                           ((0x0000C000&(data))>>14)
#define  HDMIRX_2P1_PHY_TOP_IN_2_get_reg_bg_rbg(data)                            ((0x00003800&(data))>>11)
#define  HDMIRX_2P1_PHY_TOP_IN_2_get_reg_bg_rbgloop2(data)                       ((0x00000700&(data))>>8)
#define  HDMIRX_2P1_PHY_TOP_IN_2_get_reg_ck_latch(data)                          ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_TOP_IN_2_get_reg_hdmirx_bias_en(data)                    (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0                                            0x1800DA20
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg_addr                                    "0xB800DA20"
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg                                         0xB800DA20
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_inst_addr                                   "0x0005"
#define  set_HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg(data)                               (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg                                     (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg))
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg_p0_b_out_2_shift                        (24)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg_p0_b_out_1_shift                        (16)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg_p0_ck_out_2_shift                       (8)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg_p0_ck_out_1_shift                       (0)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg_p0_b_out_2_mask                         (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg_p0_b_out_1_mask                         (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg_p0_ck_out_2_mask                        (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg_p0_ck_out_1_mask                        (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg_p0_b_out_2(data)                        (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg_p0_b_out_1(data)                        (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg_p0_ck_out_2(data)                       (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_reg_p0_ck_out_1(data)                       (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_get_reg_p0_b_out_2(data)                    ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_get_reg_p0_b_out_1(data)                    ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_get_reg_p0_ck_out_2(data)                   ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_0_get_reg_p0_ck_out_1(data)                   (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1                                            0x1800DA24
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg_addr                                    "0xB800DA24"
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg                                         0xB800DA24
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_inst_addr                                   "0x0006"
#define  set_HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg(data)                               (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg                                     (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg))
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg_p0_r_out_2_shift                        (24)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg_p0_r_out_1_shift                        (16)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg_p0_g_out_2_shift                        (8)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg_p0_g_out_1_shift                        (0)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg_p0_r_out_2_mask                         (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg_p0_r_out_1_mask                         (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg_p0_g_out_2_mask                         (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg_p0_g_out_1_mask                         (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg_p0_r_out_2(data)                        (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg_p0_r_out_1(data)                        (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg_p0_g_out_2(data)                        (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_reg_p0_g_out_1(data)                        (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_get_reg_p0_r_out_2(data)                    ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_get_reg_p0_r_out_1(data)                    ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_get_reg_p0_g_out_2(data)                    ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_TOP_OUT_1_get_reg_p0_g_out_1(data)                    (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_KOFFSET                                              0x1800DA28
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_addr                                      "0xB800DA28"
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg                                           0xB800DA28
#define  HDMIRX_2P1_PHY_P0_KOFFSET_inst_addr                                     "0x0007"
#define  set_HDMIRX_2P1_PHY_P0_KOFFSET_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_KOFFSET_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_KOFFSET_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_KOFFSET_reg))
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_ok_r_shift                    (30)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_bound_r_shift                 (29)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_tst_r_shift                   (24)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_ok_g_shift                    (22)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_bound_g_shift                 (21)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_tst_g_shift                   (16)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_ok_ck_shift                   (14)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_bound_ck_shift                (13)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_tst_ck_shift                  (8)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_ok_b_shift                    (6)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_bound_b_shift                 (5)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_tst_b_shift                   (0)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_ok_r_mask                     (0x40000000)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_bound_r_mask                  (0x20000000)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_tst_r_mask                    (0x1F000000)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_ok_g_mask                     (0x00400000)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_bound_g_mask                  (0x00200000)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_tst_g_mask                    (0x001F0000)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_ok_ck_mask                    (0x00004000)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_bound_ck_mask                 (0x00002000)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_tst_ck_mask                   (0x00001F00)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_ok_b_mask                     (0x00000040)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_bound_b_mask                  (0x00000020)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_tst_b_mask                    (0x0000001F)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_ok_r(data)                    (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_bound_r(data)                 (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_tst_r(data)                   (0x1F000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_ok_g(data)                    (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_bound_g(data)                 (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_tst_g(data)                   (0x001F0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_ok_ck(data)                   (0x00004000&((data)<<14))
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_bound_ck(data)                (0x00002000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_tst_ck(data)                  (0x00001F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_ok_b(data)                    (0x00000040&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_bound_b(data)                 (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_KOFFSET_reg_p0_fore_off_tst_b(data)                   (0x0000001F&(data))
#define  HDMIRX_2P1_PHY_P0_KOFFSET_get_reg_p0_fore_off_ok_r(data)                ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_get_reg_p0_fore_off_bound_r(data)             ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_get_reg_p0_fore_off_tst_r(data)               ((0x1F000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_get_reg_p0_fore_off_ok_g(data)                ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_get_reg_p0_fore_off_bound_g(data)             ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_get_reg_p0_fore_off_tst_g(data)               ((0x001F0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_get_reg_p0_fore_off_ok_ck(data)               ((0x00004000&(data))>>14)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_get_reg_p0_fore_off_bound_ck(data)            ((0x00002000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_get_reg_p0_fore_off_tst_ck(data)              ((0x00001F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_get_reg_p0_fore_off_ok_b(data)                ((0x00000040&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_get_reg_p0_fore_off_bound_b(data)             ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_KOFFSET_get_reg_p0_fore_off_tst_b(data)               (0x0000001F&(data))

#define  HDMIRX_2P1_PHY_P0_CK_CMU                                               0x1800DA2C
#define  HDMIRX_2P1_PHY_P0_CK_CMU_reg_addr                                       "0xB800DA2C"
#define  HDMIRX_2P1_PHY_P0_CK_CMU_reg                                            0xB800DA2C
#define  HDMIRX_2P1_PHY_P0_CK_CMU_inst_addr                                      "0x0008"
#define  set_HDMIRX_2P1_PHY_P0_CK_CMU_reg(data)                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_CK_CMU_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_CK_CMU_reg                                        (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_CK_CMU_reg))
#define  HDMIRX_2P1_PHY_P0_CK_CMU_reg_p0_cmu_ck_3_shift                          (16)
#define  HDMIRX_2P1_PHY_P0_CK_CMU_reg_p0_cmu_ck_2_shift                          (8)
#define  HDMIRX_2P1_PHY_P0_CK_CMU_reg_p0_cmu_ck_1_shift                          (0)
#define  HDMIRX_2P1_PHY_P0_CK_CMU_reg_p0_cmu_ck_3_mask                           (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_CK_CMU_reg_p0_cmu_ck_2_mask                           (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_CK_CMU_reg_p0_cmu_ck_1_mask                           (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_CK_CMU_reg_p0_cmu_ck_3(data)                          (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_CK_CMU_reg_p0_cmu_ck_2(data)                          (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_CK_CMU_reg_p0_cmu_ck_1(data)                          (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_CK_CMU_get_reg_p0_cmu_ck_3(data)                      ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_CK_CMU_get_reg_p0_cmu_ck_2(data)                      ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_CK_CMU_get_reg_p0_cmu_ck_1(data)                      (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_CK0                                                  0x1800DA30
#define  HDMIRX_2P1_PHY_P0_CK0_reg_addr                                          "0xB800DA30"
#define  HDMIRX_2P1_PHY_P0_CK0_reg                                               0xB800DA30
#define  HDMIRX_2P1_PHY_P0_CK0_inst_addr                                         "0x0009"
#define  set_HDMIRX_2P1_PHY_P0_CK0_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_CK0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_CK0_reg                                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_CK0_reg))
#define  HDMIRX_2P1_PHY_P0_CK0_reg_p0_ck_4_shift                                 (24)
#define  HDMIRX_2P1_PHY_P0_CK0_reg_p0_ck_3_shift                                 (16)
#define  HDMIRX_2P1_PHY_P0_CK0_reg_p0_ck_2_shift                                 (8)
#define  HDMIRX_2P1_PHY_P0_CK0_reg_p0_ck_1_shift                                 (0)
#define  HDMIRX_2P1_PHY_P0_CK0_reg_p0_ck_4_mask                                  (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_CK0_reg_p0_ck_3_mask                                  (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_CK0_reg_p0_ck_2_mask                                  (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_CK0_reg_p0_ck_1_mask                                  (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_CK0_reg_p0_ck_4(data)                                 (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_CK0_reg_p0_ck_3(data)                                 (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_CK0_reg_p0_ck_2(data)                                 (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_CK0_reg_p0_ck_1(data)                                 (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_CK0_get_reg_p0_ck_4(data)                             ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_CK0_get_reg_p0_ck_3(data)                             ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_CK0_get_reg_p0_ck_2(data)                             ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_CK0_get_reg_p0_ck_1(data)                             (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_CK1                                                  0x1800DA34
#define  HDMIRX_2P1_PHY_P0_CK1_reg_addr                                          "0xB800DA34"
#define  HDMIRX_2P1_PHY_P0_CK1_reg                                               0xB800DA34
#define  HDMIRX_2P1_PHY_P0_CK1_inst_addr                                         "0x000A"
#define  set_HDMIRX_2P1_PHY_P0_CK1_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_CK1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_CK1_reg                                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_CK1_reg))
#define  HDMIRX_2P1_PHY_P0_CK1_reg_p0_ck_8_shift                                 (24)
#define  HDMIRX_2P1_PHY_P0_CK1_reg_p0_ck_7_shift                                 (16)
#define  HDMIRX_2P1_PHY_P0_CK1_reg_p0_ck_6_shift                                 (8)
#define  HDMIRX_2P1_PHY_P0_CK1_reg_p0_ck_5_shift                                 (0)
#define  HDMIRX_2P1_PHY_P0_CK1_reg_p0_ck_8_mask                                  (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_CK1_reg_p0_ck_7_mask                                  (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_CK1_reg_p0_ck_6_mask                                  (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_CK1_reg_p0_ck_5_mask                                  (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_CK1_reg_p0_ck_8(data)                                 (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_CK1_reg_p0_ck_7(data)                                 (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_CK1_reg_p0_ck_6(data)                                 (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_CK1_reg_p0_ck_5(data)                                 (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_CK1_get_reg_p0_ck_8(data)                             ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_CK1_get_reg_p0_ck_7(data)                             ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_CK1_get_reg_p0_ck_6(data)                             ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_CK1_get_reg_p0_ck_5(data)                             (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_CK2                                                  0x1800DA38
#define  HDMIRX_2P1_PHY_P0_CK2_reg_addr                                          "0xB800DA38"
#define  HDMIRX_2P1_PHY_P0_CK2_reg                                               0xB800DA38
#define  HDMIRX_2P1_PHY_P0_CK2_inst_addr                                         "0x000B"
#define  set_HDMIRX_2P1_PHY_P0_CK2_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_CK2_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_CK2_reg                                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_CK2_reg))
#define  HDMIRX_2P1_PHY_P0_CK2_reg_p0_ck_12_shift                                (24)
#define  HDMIRX_2P1_PHY_P0_CK2_reg_p0_ck_11_shift                                (16)
#define  HDMIRX_2P1_PHY_P0_CK2_reg_p0_ck_10_shift                                (8)
#define  HDMIRX_2P1_PHY_P0_CK2_reg_p0_ck_9_shift                                 (0)
#define  HDMIRX_2P1_PHY_P0_CK2_reg_p0_ck_12_mask                                 (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_CK2_reg_p0_ck_11_mask                                 (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_CK2_reg_p0_ck_10_mask                                 (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_CK2_reg_p0_ck_9_mask                                  (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_CK2_reg_p0_ck_12(data)                                (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_CK2_reg_p0_ck_11(data)                                (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_CK2_reg_p0_ck_10(data)                                (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_CK2_reg_p0_ck_9(data)                                 (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_CK2_get_reg_p0_ck_12(data)                            ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_CK2_get_reg_p0_ck_11(data)                            ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_CK2_get_reg_p0_ck_10(data)                            ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_CK2_get_reg_p0_ck_9(data)                             (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_CK3                                                  0x1800DA3C
#define  HDMIRX_2P1_PHY_P0_CK3_reg_addr                                          "0xB800DA3C"
#define  HDMIRX_2P1_PHY_P0_CK3_reg                                               0xB800DA3C
#define  HDMIRX_2P1_PHY_P0_CK3_inst_addr                                         "0x000C"
#define  set_HDMIRX_2P1_PHY_P0_CK3_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_CK3_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_CK3_reg                                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_CK3_reg))
#define  HDMIRX_2P1_PHY_P0_CK3_reg_p0_ck_16_shift                                (24)
#define  HDMIRX_2P1_PHY_P0_CK3_reg_p0_ck_15_shift                                (16)
#define  HDMIRX_2P1_PHY_P0_CK3_reg_p0_ck_14_shift                                (8)
#define  HDMIRX_2P1_PHY_P0_CK3_reg_p0_ck_13_shift                                (0)
#define  HDMIRX_2P1_PHY_P0_CK3_reg_p0_ck_16_mask                                 (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_CK3_reg_p0_ck_15_mask                                 (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_CK3_reg_p0_ck_14_mask                                 (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_CK3_reg_p0_ck_13_mask                                 (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_CK3_reg_p0_ck_16(data)                                (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_CK3_reg_p0_ck_15(data)                                (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_CK3_reg_p0_ck_14(data)                                (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_CK3_reg_p0_ck_13(data)                                (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_CK3_get_reg_p0_ck_16(data)                            ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_CK3_get_reg_p0_ck_15(data)                            ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_CK3_get_reg_p0_ck_14(data)                            ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_CK3_get_reg_p0_ck_13(data)                            (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_CK4                                                  0x1800DA40
#define  HDMIRX_2P1_PHY_P0_CK4_reg_addr                                          "0xB800DA40"
#define  HDMIRX_2P1_PHY_P0_CK4_reg                                               0xB800DA40
#define  HDMIRX_2P1_PHY_P0_CK4_inst_addr                                         "0x000D"
#define  set_HDMIRX_2P1_PHY_P0_CK4_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_CK4_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_CK4_reg                                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_CK4_reg))
#define  HDMIRX_2P1_PHY_P0_CK4_reg_p0_ck_20_shift                                (24)
#define  HDMIRX_2P1_PHY_P0_CK4_reg_p0_ck_19_shift                                (16)
#define  HDMIRX_2P1_PHY_P0_CK4_reg_p0_ck_18_shift                                (8)
#define  HDMIRX_2P1_PHY_P0_CK4_reg_p0_ck_17_shift                                (0)
#define  HDMIRX_2P1_PHY_P0_CK4_reg_p0_ck_20_mask                                 (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_CK4_reg_p0_ck_19_mask                                 (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_CK4_reg_p0_ck_18_mask                                 (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_CK4_reg_p0_ck_17_mask                                 (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_CK4_reg_p0_ck_20(data)                                (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_CK4_reg_p0_ck_19(data)                                (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_CK4_reg_p0_ck_18(data)                                (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_CK4_reg_p0_ck_17(data)                                (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_CK4_get_reg_p0_ck_20(data)                            ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_CK4_get_reg_p0_ck_19(data)                            ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_CK4_get_reg_p0_ck_18(data)                            ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_CK4_get_reg_p0_ck_17(data)                            (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_CK0                                             0x1800DA44
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_reg_addr                                     "0xB800DA44"
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_reg                                          0xB800DA44
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_inst_addr                                    "0x000E"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_CK0_reg(data)                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_CK0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_CK0_reg                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_CK0_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_reg_p0_acdr_ck_4_shift                       (24)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_reg_p0_acdr_ck_3_shift                       (16)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_reg_p0_acdr_ck_2_shift                       (8)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_reg_p0_acdr_ck_1_shift                       (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_reg_p0_acdr_ck_4_mask                        (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_reg_p0_acdr_ck_3_mask                        (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_reg_p0_acdr_ck_2_mask                        (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_reg_p0_acdr_ck_1_mask                        (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_reg_p0_acdr_ck_4(data)                       (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_reg_p0_acdr_ck_3(data)                       (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_reg_p0_acdr_ck_2(data)                       (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_reg_p0_acdr_ck_1(data)                       (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_get_reg_p0_acdr_ck_4(data)                   ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_get_reg_p0_acdr_ck_3(data)                   ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_get_reg_p0_acdr_ck_2(data)                   ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK0_get_reg_p0_acdr_ck_1(data)                   (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_CK1                                             0x1800DA48
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_reg_addr                                     "0xB800DA48"
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_reg                                          0xB800DA48
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_inst_addr                                    "0x000F"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_CK1_reg(data)                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_CK1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_CK1_reg                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_CK1_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_reg_p0_acdr_ck_8_shift                       (24)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_reg_p0_acdr_ck_7_shift                       (16)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_reg_p0_acdr_ck_6_shift                       (8)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_reg_p0_acdr_ck_5_shift                       (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_reg_p0_acdr_ck_8_mask                        (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_reg_p0_acdr_ck_7_mask                        (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_reg_p0_acdr_ck_6_mask                        (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_reg_p0_acdr_ck_5_mask                        (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_reg_p0_acdr_ck_8(data)                       (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_reg_p0_acdr_ck_7(data)                       (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_reg_p0_acdr_ck_6(data)                       (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_reg_p0_acdr_ck_5(data)                       (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_get_reg_p0_acdr_ck_8(data)                   ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_get_reg_p0_acdr_ck_7(data)                   ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_get_reg_p0_acdr_ck_6(data)                   ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK1_get_reg_p0_acdr_ck_5(data)                   (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_CK2                                             0x1800DA4C
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_reg_addr                                     "0xB800DA4C"
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_reg                                          0xB800DA4C
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_inst_addr                                    "0x0010"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_CK2_reg(data)                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_CK2_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_CK2_reg                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_CK2_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_reg_p0_acdr_ck_12_shift                      (24)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_reg_p0_acdr_ck_11_shift                      (16)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_reg_p0_acdr_ck_10_shift                      (8)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_reg_p0_acdr_ck_9_shift                       (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_reg_p0_acdr_ck_12_mask                       (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_reg_p0_acdr_ck_11_mask                       (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_reg_p0_acdr_ck_10_mask                       (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_reg_p0_acdr_ck_9_mask                        (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_reg_p0_acdr_ck_12(data)                      (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_reg_p0_acdr_ck_11(data)                      (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_reg_p0_acdr_ck_10(data)                      (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_reg_p0_acdr_ck_9(data)                       (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_get_reg_p0_acdr_ck_12(data)                  ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_get_reg_p0_acdr_ck_11(data)                  ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_get_reg_p0_acdr_ck_10(data)                  ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK2_get_reg_p0_acdr_ck_9(data)                   (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_B0                                                   0x1800DA50
#define  HDMIRX_2P1_PHY_P0_B0_reg_addr                                           "0xB800DA50"
#define  HDMIRX_2P1_PHY_P0_B0_reg                                                0xB800DA50
#define  HDMIRX_2P1_PHY_P0_B0_inst_addr                                          "0x0011"
#define  set_HDMIRX_2P1_PHY_P0_B0_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_B0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_B0_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_B0_reg))
#define  HDMIRX_2P1_PHY_P0_B0_reg_p0_b_4_shift                                   (24)
#define  HDMIRX_2P1_PHY_P0_B0_reg_p0_b_3_shift                                   (16)
#define  HDMIRX_2P1_PHY_P0_B0_reg_p0_b_2_shift                                   (8)
#define  HDMIRX_2P1_PHY_P0_B0_reg_p0_b_1_shift                                   (0)
#define  HDMIRX_2P1_PHY_P0_B0_reg_p0_b_4_mask                                    (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_B0_reg_p0_b_3_mask                                    (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_B0_reg_p0_b_2_mask                                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_B0_reg_p0_b_1_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_B0_reg_p0_b_4(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_B0_reg_p0_b_3(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_B0_reg_p0_b_2(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_B0_reg_p0_b_1(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_B0_get_reg_p0_b_4(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_B0_get_reg_p0_b_3(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_B0_get_reg_p0_b_2(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_B0_get_reg_p0_b_1(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_B1                                                   0x1800DA54
#define  HDMIRX_2P1_PHY_P0_B1_reg_addr                                           "0xB800DA54"
#define  HDMIRX_2P1_PHY_P0_B1_reg                                                0xB800DA54
#define  HDMIRX_2P1_PHY_P0_B1_inst_addr                                          "0x0012"
#define  set_HDMIRX_2P1_PHY_P0_B1_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_B1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_B1_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_B1_reg))
#define  HDMIRX_2P1_PHY_P0_B1_reg_p0_b_8_shift                                   (24)
#define  HDMIRX_2P1_PHY_P0_B1_reg_p0_b_7_shift                                   (16)
#define  HDMIRX_2P1_PHY_P0_B1_reg_p0_b_6_shift                                   (8)
#define  HDMIRX_2P1_PHY_P0_B1_reg_p0_b_5_shift                                   (0)
#define  HDMIRX_2P1_PHY_P0_B1_reg_p0_b_8_mask                                    (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_B1_reg_p0_b_7_mask                                    (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_B1_reg_p0_b_6_mask                                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_B1_reg_p0_b_5_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_B1_reg_p0_b_8(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_B1_reg_p0_b_7(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_B1_reg_p0_b_6(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_B1_reg_p0_b_5(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_B1_get_reg_p0_b_8(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_B1_get_reg_p0_b_7(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_B1_get_reg_p0_b_6(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_B1_get_reg_p0_b_5(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_B2                                                   0x1800DA58
#define  HDMIRX_2P1_PHY_P0_B2_reg_addr                                           "0xB800DA58"
#define  HDMIRX_2P1_PHY_P0_B2_reg                                                0xB800DA58
#define  HDMIRX_2P1_PHY_P0_B2_inst_addr                                          "0x0013"
#define  set_HDMIRX_2P1_PHY_P0_B2_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_B2_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_B2_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_B2_reg))
#define  HDMIRX_2P1_PHY_P0_B2_reg_p0_b_12_shift                                  (24)
#define  HDMIRX_2P1_PHY_P0_B2_reg_p0_b_11_shift                                  (16)
#define  HDMIRX_2P1_PHY_P0_B2_reg_p0_b_10_shift                                  (8)
#define  HDMIRX_2P1_PHY_P0_B2_reg_p0_b_9_shift                                   (0)
#define  HDMIRX_2P1_PHY_P0_B2_reg_p0_b_12_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_B2_reg_p0_b_11_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_B2_reg_p0_b_10_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_B2_reg_p0_b_9_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_B2_reg_p0_b_12(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_B2_reg_p0_b_11(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_B2_reg_p0_b_10(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_B2_reg_p0_b_9(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_B2_get_reg_p0_b_12(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_B2_get_reg_p0_b_11(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_B2_get_reg_p0_b_10(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_B2_get_reg_p0_b_9(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_B3                                                   0x1800DA5C
#define  HDMIRX_2P1_PHY_P0_B3_reg_addr                                           "0xB800DA5C"
#define  HDMIRX_2P1_PHY_P0_B3_reg                                                0xB800DA5C
#define  HDMIRX_2P1_PHY_P0_B3_inst_addr                                          "0x0014"
#define  set_HDMIRX_2P1_PHY_P0_B3_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_B3_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_B3_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_B3_reg))
#define  HDMIRX_2P1_PHY_P0_B3_reg_p0_b_16_shift                                  (24)
#define  HDMIRX_2P1_PHY_P0_B3_reg_p0_b_15_shift                                  (16)
#define  HDMIRX_2P1_PHY_P0_B3_reg_p0_b_14_shift                                  (8)
#define  HDMIRX_2P1_PHY_P0_B3_reg_p0_b_13_shift                                  (0)
#define  HDMIRX_2P1_PHY_P0_B3_reg_p0_b_16_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_B3_reg_p0_b_15_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_B3_reg_p0_b_14_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_B3_reg_p0_b_13_mask                                   (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_B3_reg_p0_b_16(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_B3_reg_p0_b_15(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_B3_reg_p0_b_14(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_B3_reg_p0_b_13(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_B3_get_reg_p0_b_16(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_B3_get_reg_p0_b_15(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_B3_get_reg_p0_b_14(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_B3_get_reg_p0_b_13(data)                              (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_B4                                                   0x1800DA60
#define  HDMIRX_2P1_PHY_P0_B4_reg_addr                                           "0xB800DA60"
#define  HDMIRX_2P1_PHY_P0_B4_reg                                                0xB800DA60
#define  HDMIRX_2P1_PHY_P0_B4_inst_addr                                          "0x0015"
#define  set_HDMIRX_2P1_PHY_P0_B4_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_B4_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_B4_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_B4_reg))
#define  HDMIRX_2P1_PHY_P0_B4_reg_p0_b_20_shift                                  (24)
#define  HDMIRX_2P1_PHY_P0_B4_reg_p0_b_19_shift                                  (16)
#define  HDMIRX_2P1_PHY_P0_B4_reg_p0_b_18_shift                                  (8)
#define  HDMIRX_2P1_PHY_P0_B4_reg_p0_b_17_shift                                  (0)
#define  HDMIRX_2P1_PHY_P0_B4_reg_p0_b_20_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_B4_reg_p0_b_19_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_B4_reg_p0_b_18_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_B4_reg_p0_b_17_mask                                   (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_B4_reg_p0_b_20(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_B4_reg_p0_b_19(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_B4_reg_p0_b_18(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_B4_reg_p0_b_17(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_B4_get_reg_p0_b_20(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_B4_get_reg_p0_b_19(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_B4_get_reg_p0_b_18(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_B4_get_reg_p0_b_17(data)                              (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_B0                                              0x1800DA64
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_reg_addr                                      "0xB800DA64"
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_reg                                           0xB800DA64
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_inst_addr                                     "0x0016"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_B0_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_B0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_B0_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_B0_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_reg_p0_acdr_b_4_shift                         (24)
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_reg_p0_acdr_b_3_shift                         (16)
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_reg_p0_acdr_b_2_shift                         (8)
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_reg_p0_acdr_b_1_shift                         (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_reg_p0_acdr_b_4_mask                          (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_reg_p0_acdr_b_3_mask                          (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_reg_p0_acdr_b_2_mask                          (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_reg_p0_acdr_b_1_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_reg_p0_acdr_b_4(data)                         (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_reg_p0_acdr_b_3(data)                         (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_reg_p0_acdr_b_2(data)                         (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_reg_p0_acdr_b_1(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_get_reg_p0_acdr_b_4(data)                     ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_get_reg_p0_acdr_b_3(data)                     ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_get_reg_p0_acdr_b_2(data)                     ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_ACDR_B0_get_reg_p0_acdr_b_1(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_B1                                              0x1800DA68
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_reg_addr                                      "0xB800DA68"
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_reg                                           0xB800DA68
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_inst_addr                                     "0x0017"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_B1_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_B1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_B1_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_B1_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_reg_p0_acdr_b_8_shift                         (24)
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_reg_p0_acdr_b_7_shift                         (16)
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_reg_p0_acdr_b_6_shift                         (8)
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_reg_p0_acdr_b_5_shift                         (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_reg_p0_acdr_b_8_mask                          (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_reg_p0_acdr_b_7_mask                          (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_reg_p0_acdr_b_6_mask                          (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_reg_p0_acdr_b_5_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_reg_p0_acdr_b_8(data)                         (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_reg_p0_acdr_b_7(data)                         (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_reg_p0_acdr_b_6(data)                         (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_reg_p0_acdr_b_5(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_get_reg_p0_acdr_b_8(data)                     ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_get_reg_p0_acdr_b_7(data)                     ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_get_reg_p0_acdr_b_6(data)                     ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_ACDR_B1_get_reg_p0_acdr_b_5(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_B2                                              0x1800DA6C
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_reg_addr                                      "0xB800DA6C"
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_reg                                           0xB800DA6C
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_inst_addr                                     "0x0018"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_B2_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_B2_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_B2_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_B2_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_reg_p0_acdr_b_12_shift                        (24)
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_reg_p0_acdr_b_11_shift                        (16)
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_reg_p0_acdr_b_10_shift                        (8)
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_reg_p0_acdr_b_9_shift                         (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_reg_p0_acdr_b_12_mask                         (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_reg_p0_acdr_b_11_mask                         (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_reg_p0_acdr_b_10_mask                         (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_reg_p0_acdr_b_9_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_reg_p0_acdr_b_12(data)                        (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_reg_p0_acdr_b_11(data)                        (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_reg_p0_acdr_b_10(data)                        (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_reg_p0_acdr_b_9(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_get_reg_p0_acdr_b_12(data)                    ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_get_reg_p0_acdr_b_11(data)                    ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_get_reg_p0_acdr_b_10(data)                    ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_ACDR_B2_get_reg_p0_acdr_b_9(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_G0                                                   0x1800DA70
#define  HDMIRX_2P1_PHY_P0_G0_reg_addr                                           "0xB800DA70"
#define  HDMIRX_2P1_PHY_P0_G0_reg                                                0xB800DA70
#define  HDMIRX_2P1_PHY_P0_G0_inst_addr                                          "0x0019"
#define  set_HDMIRX_2P1_PHY_P0_G0_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_G0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_G0_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_G0_reg))
#define  HDMIRX_2P1_PHY_P0_G0_reg_p0_g_4_shift                                   (24)
#define  HDMIRX_2P1_PHY_P0_G0_reg_p0_g_3_shift                                   (16)
#define  HDMIRX_2P1_PHY_P0_G0_reg_p0_g_2_shift                                   (8)
#define  HDMIRX_2P1_PHY_P0_G0_reg_p0_g_1_shift                                   (0)
#define  HDMIRX_2P1_PHY_P0_G0_reg_p0_g_4_mask                                    (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_G0_reg_p0_g_3_mask                                    (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_G0_reg_p0_g_2_mask                                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_G0_reg_p0_g_1_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_G0_reg_p0_g_4(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_G0_reg_p0_g_3(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_G0_reg_p0_g_2(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_G0_reg_p0_g_1(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_G0_get_reg_p0_g_4(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_G0_get_reg_p0_g_3(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_G0_get_reg_p0_g_2(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_G0_get_reg_p0_g_1(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_G1                                                   0x1800DA74
#define  HDMIRX_2P1_PHY_P0_G1_reg_addr                                           "0xB800DA74"
#define  HDMIRX_2P1_PHY_P0_G1_reg                                                0xB800DA74
#define  HDMIRX_2P1_PHY_P0_G1_inst_addr                                          "0x001A"
#define  set_HDMIRX_2P1_PHY_P0_G1_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_G1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_G1_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_G1_reg))
#define  HDMIRX_2P1_PHY_P0_G1_reg_p0_g_8_shift                                   (24)
#define  HDMIRX_2P1_PHY_P0_G1_reg_p0_g_7_shift                                   (16)
#define  HDMIRX_2P1_PHY_P0_G1_reg_p0_g_6_shift                                   (8)
#define  HDMIRX_2P1_PHY_P0_G1_reg_p0_g_5_shift                                   (0)
#define  HDMIRX_2P1_PHY_P0_G1_reg_p0_g_8_mask                                    (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_G1_reg_p0_g_7_mask                                    (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_G1_reg_p0_g_6_mask                                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_G1_reg_p0_g_5_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_G1_reg_p0_g_8(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_G1_reg_p0_g_7(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_G1_reg_p0_g_6(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_G1_reg_p0_g_5(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_G1_get_reg_p0_g_8(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_G1_get_reg_p0_g_7(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_G1_get_reg_p0_g_6(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_G1_get_reg_p0_g_5(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_G2                                                   0x1800DA78
#define  HDMIRX_2P1_PHY_P0_G2_reg_addr                                           "0xB800DA78"
#define  HDMIRX_2P1_PHY_P0_G2_reg                                                0xB800DA78
#define  HDMIRX_2P1_PHY_P0_G2_inst_addr                                          "0x001B"
#define  set_HDMIRX_2P1_PHY_P0_G2_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_G2_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_G2_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_G2_reg))
#define  HDMIRX_2P1_PHY_P0_G2_reg_p0_g_12_shift                                  (24)
#define  HDMIRX_2P1_PHY_P0_G2_reg_p0_g_11_shift                                  (16)
#define  HDMIRX_2P1_PHY_P0_G2_reg_p0_g_10_shift                                  (8)
#define  HDMIRX_2P1_PHY_P0_G2_reg_p0_g_9_shift                                   (0)
#define  HDMIRX_2P1_PHY_P0_G2_reg_p0_g_12_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_G2_reg_p0_g_11_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_G2_reg_p0_g_10_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_G2_reg_p0_g_9_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_G2_reg_p0_g_12(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_G2_reg_p0_g_11(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_G2_reg_p0_g_10(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_G2_reg_p0_g_9(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_G2_get_reg_p0_g_12(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_G2_get_reg_p0_g_11(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_G2_get_reg_p0_g_10(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_G2_get_reg_p0_g_9(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_G3                                                   0x1800DA7C
#define  HDMIRX_2P1_PHY_P0_G3_reg_addr                                           "0xB800DA7C"
#define  HDMIRX_2P1_PHY_P0_G3_reg                                                0xB800DA7C
#define  HDMIRX_2P1_PHY_P0_G3_inst_addr                                          "0x001C"
#define  set_HDMIRX_2P1_PHY_P0_G3_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_G3_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_G3_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_G3_reg))
#define  HDMIRX_2P1_PHY_P0_G3_reg_p0_g_16_shift                                  (24)
#define  HDMIRX_2P1_PHY_P0_G3_reg_p0_g_15_shift                                  (16)
#define  HDMIRX_2P1_PHY_P0_G3_reg_p0_g_14_shift                                  (8)
#define  HDMIRX_2P1_PHY_P0_G3_reg_p0_g_13_shift                                  (0)
#define  HDMIRX_2P1_PHY_P0_G3_reg_p0_g_16_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_G3_reg_p0_g_15_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_G3_reg_p0_g_14_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_G3_reg_p0_g_13_mask                                   (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_G3_reg_p0_g_16(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_G3_reg_p0_g_15(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_G3_reg_p0_g_14(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_G3_reg_p0_g_13(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_G3_get_reg_p0_g_16(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_G3_get_reg_p0_g_15(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_G3_get_reg_p0_g_14(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_G3_get_reg_p0_g_13(data)                              (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_G4                                                   0x1800DA80
#define  HDMIRX_2P1_PHY_P0_G4_reg_addr                                           "0xB800DA80"
#define  HDMIRX_2P1_PHY_P0_G4_reg                                                0xB800DA80
#define  HDMIRX_2P1_PHY_P0_G4_inst_addr                                          "0x001D"
#define  set_HDMIRX_2P1_PHY_P0_G4_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_G4_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_G4_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_G4_reg))
#define  HDMIRX_2P1_PHY_P0_G4_reg_p0_g_20_shift                                  (24)
#define  HDMIRX_2P1_PHY_P0_G4_reg_p0_g_19_shift                                  (16)
#define  HDMIRX_2P1_PHY_P0_G4_reg_p0_g_18_shift                                  (8)
#define  HDMIRX_2P1_PHY_P0_G4_reg_p0_g_17_shift                                  (0)
#define  HDMIRX_2P1_PHY_P0_G4_reg_p0_g_20_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_G4_reg_p0_g_19_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_G4_reg_p0_g_18_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_G4_reg_p0_g_17_mask                                   (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_G4_reg_p0_g_20(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_G4_reg_p0_g_19(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_G4_reg_p0_g_18(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_G4_reg_p0_g_17(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_G4_get_reg_p0_g_20(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_G4_get_reg_p0_g_19(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_G4_get_reg_p0_g_18(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_G4_get_reg_p0_g_17(data)                              (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_G0                                              0x1800DA84
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_reg_addr                                      "0xB800DA84"
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_reg                                           0xB800DA84
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_inst_addr                                     "0x001E"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_G0_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_G0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_G0_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_G0_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_reg_p0_acdr_g_4_shift                         (24)
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_reg_p0_acdr_g_3_shift                         (16)
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_reg_p0_acdr_g_2_shift                         (8)
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_reg_p0_acdr_g_1_shift                         (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_reg_p0_acdr_g_4_mask                          (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_reg_p0_acdr_g_3_mask                          (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_reg_p0_acdr_g_2_mask                          (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_reg_p0_acdr_g_1_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_reg_p0_acdr_g_4(data)                         (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_reg_p0_acdr_g_3(data)                         (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_reg_p0_acdr_g_2(data)                         (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_reg_p0_acdr_g_1(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_get_reg_p0_acdr_g_4(data)                     ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_get_reg_p0_acdr_g_3(data)                     ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_get_reg_p0_acdr_g_2(data)                     ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_ACDR_G0_get_reg_p0_acdr_g_1(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_G1                                              0x1800DA88
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_reg_addr                                      "0xB800DA88"
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_reg                                           0xB800DA88
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_inst_addr                                     "0x001F"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_G1_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_G1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_G1_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_G1_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_reg_p0_acdr_g_8_shift                         (24)
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_reg_p0_acdr_g_7_shift                         (16)
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_reg_p0_acdr_g_6_shift                         (8)
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_reg_p0_acdr_g_5_shift                         (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_reg_p0_acdr_g_8_mask                          (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_reg_p0_acdr_g_7_mask                          (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_reg_p0_acdr_g_6_mask                          (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_reg_p0_acdr_g_5_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_reg_p0_acdr_g_8(data)                         (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_reg_p0_acdr_g_7(data)                         (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_reg_p0_acdr_g_6(data)                         (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_reg_p0_acdr_g_5(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_get_reg_p0_acdr_g_8(data)                     ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_get_reg_p0_acdr_g_7(data)                     ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_get_reg_p0_acdr_g_6(data)                     ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_ACDR_G1_get_reg_p0_acdr_g_5(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_G2                                              0x1800DA8C
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_reg_addr                                      "0xB800DA8C"
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_reg                                           0xB800DA8C
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_inst_addr                                     "0x0020"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_G2_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_G2_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_G2_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_G2_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_reg_p0_acdr_g_12_shift                        (24)
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_reg_p0_acdr_g_11_shift                        (16)
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_reg_p0_acdr_g_10_shift                        (8)
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_reg_p0_acdr_g_9_shift                         (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_reg_p0_acdr_g_12_mask                         (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_reg_p0_acdr_g_11_mask                         (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_reg_p0_acdr_g_10_mask                         (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_reg_p0_acdr_g_9_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_reg_p0_acdr_g_12(data)                        (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_reg_p0_acdr_g_11(data)                        (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_reg_p0_acdr_g_10(data)                        (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_reg_p0_acdr_g_9(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_get_reg_p0_acdr_g_12(data)                    ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_get_reg_p0_acdr_g_11(data)                    ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_get_reg_p0_acdr_g_10(data)                    ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_ACDR_G2_get_reg_p0_acdr_g_9(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_R0                                                   0x1800DA90
#define  HDMIRX_2P1_PHY_P0_R0_reg_addr                                           "0xB800DA90"
#define  HDMIRX_2P1_PHY_P0_R0_reg                                                0xB800DA90
#define  HDMIRX_2P1_PHY_P0_R0_inst_addr                                          "0x0021"
#define  set_HDMIRX_2P1_PHY_P0_R0_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_R0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_R0_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_R0_reg))
#define  HDMIRX_2P1_PHY_P0_R0_reg_p0_r_4_shift                                   (24)
#define  HDMIRX_2P1_PHY_P0_R0_reg_p0_r_3_shift                                   (16)
#define  HDMIRX_2P1_PHY_P0_R0_reg_p0_r_2_shift                                   (8)
#define  HDMIRX_2P1_PHY_P0_R0_reg_p0_r_1_shift                                   (0)
#define  HDMIRX_2P1_PHY_P0_R0_reg_p0_r_4_mask                                    (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_R0_reg_p0_r_3_mask                                    (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_R0_reg_p0_r_2_mask                                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_R0_reg_p0_r_1_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_R0_reg_p0_r_4(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_R0_reg_p0_r_3(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_R0_reg_p0_r_2(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_R0_reg_p0_r_1(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_R0_get_reg_p0_r_4(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_R0_get_reg_p0_r_3(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_R0_get_reg_p0_r_2(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_R0_get_reg_p0_r_1(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_R1                                                   0x1800DA94
#define  HDMIRX_2P1_PHY_P0_R1_reg_addr                                           "0xB800DA94"
#define  HDMIRX_2P1_PHY_P0_R1_reg                                                0xB800DA94
#define  HDMIRX_2P1_PHY_P0_R1_inst_addr                                          "0x0022"
#define  set_HDMIRX_2P1_PHY_P0_R1_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_R1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_R1_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_R1_reg))
#define  HDMIRX_2P1_PHY_P0_R1_reg_p0_r_8_shift                                   (24)
#define  HDMIRX_2P1_PHY_P0_R1_reg_p0_r_7_shift                                   (16)
#define  HDMIRX_2P1_PHY_P0_R1_reg_p0_r_6_shift                                   (8)
#define  HDMIRX_2P1_PHY_P0_R1_reg_p0_r_5_shift                                   (0)
#define  HDMIRX_2P1_PHY_P0_R1_reg_p0_r_8_mask                                    (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_R1_reg_p0_r_7_mask                                    (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_R1_reg_p0_r_6_mask                                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_R1_reg_p0_r_5_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_R1_reg_p0_r_8(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_R1_reg_p0_r_7(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_R1_reg_p0_r_6(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_R1_reg_p0_r_5(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_R1_get_reg_p0_r_8(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_R1_get_reg_p0_r_7(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_R1_get_reg_p0_r_6(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_R1_get_reg_p0_r_5(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_R2                                                   0x1800DA98
#define  HDMIRX_2P1_PHY_P0_R2_reg_addr                                           "0xB800DA98"
#define  HDMIRX_2P1_PHY_P0_R2_reg                                                0xB800DA98
#define  HDMIRX_2P1_PHY_P0_R2_inst_addr                                          "0x0023"
#define  set_HDMIRX_2P1_PHY_P0_R2_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_R2_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_R2_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_R2_reg))
#define  HDMIRX_2P1_PHY_P0_R2_reg_p0_r_12_shift                                  (24)
#define  HDMIRX_2P1_PHY_P0_R2_reg_p0_r_11_shift                                  (16)
#define  HDMIRX_2P1_PHY_P0_R2_reg_p0_r_10_shift                                  (8)
#define  HDMIRX_2P1_PHY_P0_R2_reg_p0_r_9_shift                                   (0)
#define  HDMIRX_2P1_PHY_P0_R2_reg_p0_r_12_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_R2_reg_p0_r_11_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_R2_reg_p0_r_10_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_R2_reg_p0_r_9_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_R2_reg_p0_r_12(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_R2_reg_p0_r_11(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_R2_reg_p0_r_10(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_R2_reg_p0_r_9(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_R2_get_reg_p0_r_12(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_R2_get_reg_p0_r_11(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_R2_get_reg_p0_r_10(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_R2_get_reg_p0_r_9(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_R3                                                   0x1800DA9C
#define  HDMIRX_2P1_PHY_P0_R3_reg_addr                                           "0xB800DA9C"
#define  HDMIRX_2P1_PHY_P0_R3_reg                                                0xB800DA9C
#define  HDMIRX_2P1_PHY_P0_R3_inst_addr                                          "0x0024"
#define  set_HDMIRX_2P1_PHY_P0_R3_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_R3_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_R3_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_R3_reg))
#define  HDMIRX_2P1_PHY_P0_R3_reg_p0_r_16_shift                                  (24)
#define  HDMIRX_2P1_PHY_P0_R3_reg_p0_r_15_shift                                  (16)
#define  HDMIRX_2P1_PHY_P0_R3_reg_p0_r_14_shift                                  (8)
#define  HDMIRX_2P1_PHY_P0_R3_reg_p0_r_13_shift                                  (0)
#define  HDMIRX_2P1_PHY_P0_R3_reg_p0_r_16_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_R3_reg_p0_r_15_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_R3_reg_p0_r_14_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_R3_reg_p0_r_13_mask                                   (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_R3_reg_p0_r_16(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_R3_reg_p0_r_15(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_R3_reg_p0_r_14(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_R3_reg_p0_r_13(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_R3_get_reg_p0_r_16(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_R3_get_reg_p0_r_15(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_R3_get_reg_p0_r_14(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_R3_get_reg_p0_r_13(data)                              (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_R4                                                   0x1800DAA0
#define  HDMIRX_2P1_PHY_P0_R4_reg_addr                                           "0xB800DAA0"
#define  HDMIRX_2P1_PHY_P0_R4_reg                                                0xB800DAA0
#define  HDMIRX_2P1_PHY_P0_R4_inst_addr                                          "0x0025"
#define  set_HDMIRX_2P1_PHY_P0_R4_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_R4_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_R4_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_R4_reg))
#define  HDMIRX_2P1_PHY_P0_R4_reg_p0_r_20_shift                                  (24)
#define  HDMIRX_2P1_PHY_P0_R4_reg_p0_r_19_shift                                  (16)
#define  HDMIRX_2P1_PHY_P0_R4_reg_p0_r_18_shift                                  (8)
#define  HDMIRX_2P1_PHY_P0_R4_reg_p0_r_17_shift                                  (0)
#define  HDMIRX_2P1_PHY_P0_R4_reg_p0_r_20_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_R4_reg_p0_r_19_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_R4_reg_p0_r_18_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_R4_reg_p0_r_17_mask                                   (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_R4_reg_p0_r_20(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_R4_reg_p0_r_19(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_R4_reg_p0_r_18(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_R4_reg_p0_r_17(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_R4_get_reg_p0_r_20(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_R4_get_reg_p0_r_19(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_R4_get_reg_p0_r_18(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_R4_get_reg_p0_r_17(data)                              (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_R0                                              0x1800DAA4
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_reg_addr                                      "0xB800DAA4"
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_reg                                           0xB800DAA4
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_inst_addr                                     "0x0026"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_R0_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_R0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_R0_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_R0_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_reg_p0_acdr_r_4_shift                         (24)
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_reg_p0_acdr_r_3_shift                         (16)
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_reg_p0_acdr_r_2_shift                         (8)
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_reg_p0_acdr_r_1_shift                         (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_reg_p0_acdr_r_4_mask                          (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_reg_p0_acdr_r_3_mask                          (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_reg_p0_acdr_r_2_mask                          (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_reg_p0_acdr_r_1_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_reg_p0_acdr_r_4(data)                         (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_reg_p0_acdr_r_3(data)                         (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_reg_p0_acdr_r_2(data)                         (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_reg_p0_acdr_r_1(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_get_reg_p0_acdr_r_4(data)                     ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_get_reg_p0_acdr_r_3(data)                     ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_get_reg_p0_acdr_r_2(data)                     ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_ACDR_R0_get_reg_p0_acdr_r_1(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_R1                                              0x1800DAA8
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_reg_addr                                      "0xB800DAA8"
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_reg                                           0xB800DAA8
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_inst_addr                                     "0x0027"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_R1_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_R1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_R1_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_R1_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_reg_p0_acdr_r_8_shift                         (24)
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_reg_p0_acdr_r_7_shift                         (16)
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_reg_p0_acdr_r_6_shift                         (8)
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_reg_p0_acdr_r_5_shift                         (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_reg_p0_acdr_r_8_mask                          (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_reg_p0_acdr_r_7_mask                          (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_reg_p0_acdr_r_6_mask                          (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_reg_p0_acdr_r_5_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_reg_p0_acdr_r_8(data)                         (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_reg_p0_acdr_r_7(data)                         (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_reg_p0_acdr_r_6(data)                         (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_reg_p0_acdr_r_5(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_get_reg_p0_acdr_r_8(data)                     ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_get_reg_p0_acdr_r_7(data)                     ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_get_reg_p0_acdr_r_6(data)                     ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_ACDR_R1_get_reg_p0_acdr_r_5(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_R2                                              0x1800DAAC
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_reg_addr                                      "0xB800DAAC"
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_reg                                           0xB800DAAC
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_inst_addr                                     "0x0028"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_R2_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_R2_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_R2_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_R2_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_reg_p0_acdr_r_12_shift                        (24)
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_reg_p0_acdr_r_11_shift                        (16)
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_reg_p0_acdr_r_10_shift                        (8)
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_reg_p0_acdr_r_9_shift                         (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_reg_p0_acdr_r_12_mask                         (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_reg_p0_acdr_r_11_mask                         (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_reg_p0_acdr_r_10_mask                         (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_reg_p0_acdr_r_9_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_reg_p0_acdr_r_12(data)                        (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_reg_p0_acdr_r_11(data)                        (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_reg_p0_acdr_r_10(data)                        (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_reg_p0_acdr_r_9(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_get_reg_p0_acdr_r_12(data)                    ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_get_reg_p0_acdr_r_11(data)                    ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_get_reg_p0_acdr_r_10(data)                    ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_ACDR_R2_get_reg_p0_acdr_r_9(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST                                          0x1800DAB0
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_reg_addr                                  "0xB800DAB0"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_reg                                       0xB800DAB0
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_inst_addr                                 "0x0029"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_RST_reg(data)                             (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_RST_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_RST_reg                                   (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_RST_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_p0_ck_demux_rstb_shift                    (3)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_p0_r_demux_rstb_shift                     (2)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_p0_g_demux_rstb_shift                     (1)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_p0_b_demux_rstb_shift                     (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_p0_ck_demux_rstb_mask                     (0x00000008)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_p0_r_demux_rstb_mask                      (0x00000004)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_p0_g_demux_rstb_mask                      (0x00000002)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_p0_b_demux_rstb_mask                      (0x00000001)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_p0_ck_demux_rstb(data)                    (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_p0_r_demux_rstb(data)                     (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_p0_g_demux_rstb(data)                     (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_p0_b_demux_rstb(data)                     (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_get_p0_ck_demux_rstb(data)                ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_get_p0_r_demux_rstb(data)                 ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_get_p0_g_demux_rstb(data)                 ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_RST_get_p0_b_demux_rstb(data)                 (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG                                    0x1800DAC0
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_addr                            "0xB800DAC0"
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg                                 0xB800DAC0
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_inst_addr                           "0x002A"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg(data)                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg                             (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_icp_sel_shift     (28)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_lfrs_sel_shift    (25)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_cs_cap_sel_shift  (23)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_cp_cap_sel_shift  (21)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_vco_fine_i_shift  (17)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_en_lpf_r_shift    (12)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_en_lpf_c_shift    (11)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_en_idn_shift      (10)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_sel_idn_shift     (6)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reserved_pll_p0_acdr_r_shift        (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_icp_sel_mask      (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_lfrs_sel_mask     (0x0E000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_cs_cap_sel_mask   (0x01800000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_cp_cap_sel_mask   (0x00600000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_vco_fine_i_mask   (0x001E0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_en_lpf_r_mask     (0x00001000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_en_lpf_c_mask     (0x00000800)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_en_idn_mask       (0x00000400)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_sel_idn_mask      (0x000003C0)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reserved_pll_p0_acdr_r_mask         (0x0000003F)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_icp_sel(data)     (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_lfrs_sel(data)    (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_cs_cap_sel(data)  (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_cp_cap_sel(data)  (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_vco_fine_i(data)  (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_en_lpf_r(data)    (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_en_lpf_c(data)    (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_en_idn(data)      (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reg_pll_p0_acdr_r_sel_idn(data)     (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_reserved_pll_p0_acdr_r(data)        (0x0000003F&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_get_reg_pll_p0_acdr_r_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_get_reg_pll_p0_acdr_r_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_get_reg_pll_p0_acdr_r_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_get_reg_pll_p0_acdr_r_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_get_reg_pll_p0_acdr_r_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_get_reg_pll_p0_acdr_r_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_get_reg_pll_p0_acdr_r_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_get_reg_pll_p0_acdr_r_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_get_reg_pll_p0_acdr_r_en_idn(data)  ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_get_reg_pll_p0_acdr_r_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_PLL_CONFIG_get_reserved_pll_p0_acdr_r(data)    (0x0000003F&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG                                    0x1800DAC4
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_addr                            "0xB800DAC4"
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg                                 0xB800DAC4
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_inst_addr                           "0x002B"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg(data)                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg                             (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_icp_sel_shift     (28)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_lfrs_sel_shift    (25)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_cs_cap_sel_shift  (23)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_cp_cap_sel_shift  (21)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_vco_fine_i_shift  (17)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_en_lpf_r_shift    (12)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_en_lpf_c_shift    (11)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_en_idn_shift      (10)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_sel_idn_shift     (6)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reserved_pll_p0_acdr_g_shift        (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_icp_sel_mask      (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_lfrs_sel_mask     (0x0E000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_cs_cap_sel_mask   (0x01800000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_cp_cap_sel_mask   (0x00600000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_vco_fine_i_mask   (0x001E0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_en_lpf_r_mask     (0x00001000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_en_lpf_c_mask     (0x00000800)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_en_idn_mask       (0x00000400)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_sel_idn_mask      (0x000003C0)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reserved_pll_p0_acdr_g_mask         (0x0000003F)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_icp_sel(data)     (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_lfrs_sel(data)    (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_cs_cap_sel(data)  (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_cp_cap_sel(data)  (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_vco_fine_i(data)  (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_en_lpf_r(data)    (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_en_lpf_c(data)    (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_en_idn(data)      (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reg_pll_p0_acdr_g_sel_idn(data)     (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_reserved_pll_p0_acdr_g(data)        (0x0000003F&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_get_reg_pll_p0_acdr_g_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_get_reg_pll_p0_acdr_g_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_get_reg_pll_p0_acdr_g_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_get_reg_pll_p0_acdr_g_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_get_reg_pll_p0_acdr_g_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_get_reg_pll_p0_acdr_g_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_get_reg_pll_p0_acdr_g_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_get_reg_pll_p0_acdr_g_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_get_reg_pll_p0_acdr_g_en_idn(data)  ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_get_reg_pll_p0_acdr_g_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_PLL_CONFIG_get_reserved_pll_p0_acdr_g(data)    (0x0000003F&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG                                    0x1800DAC8
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_addr                            "0xB800DAC8"
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg                                 0xB800DAC8
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_inst_addr                           "0x002C"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg(data)                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg                             (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_icp_sel_shift     (28)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_lfrs_sel_shift    (25)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_cs_cap_sel_shift  (23)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_cp_cap_sel_shift  (21)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_vco_fine_i_shift  (17)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_en_lpf_r_shift    (12)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_en_lpf_c_shift    (11)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_en_idn_shift      (10)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_sel_idn_shift     (6)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reserved_pll_p0_acdr_b_shift        (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_icp_sel_mask      (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_lfrs_sel_mask     (0x0E000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_cs_cap_sel_mask   (0x01800000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_cp_cap_sel_mask   (0x00600000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_vco_fine_i_mask   (0x001E0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_en_lpf_r_mask     (0x00001000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_en_lpf_c_mask     (0x00000800)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_en_idn_mask       (0x00000400)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_sel_idn_mask      (0x000003C0)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reserved_pll_p0_acdr_b_mask         (0x0000003F)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_icp_sel(data)     (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_lfrs_sel(data)    (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_cs_cap_sel(data)  (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_cp_cap_sel(data)  (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_vco_fine_i(data)  (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_en_lpf_r(data)    (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_en_lpf_c(data)    (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_en_idn(data)      (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reg_pll_p0_acdr_b_sel_idn(data)     (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_reserved_pll_p0_acdr_b(data)        (0x0000003F&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_get_reg_pll_p0_acdr_b_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_get_reg_pll_p0_acdr_b_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_get_reg_pll_p0_acdr_b_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_get_reg_pll_p0_acdr_b_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_get_reg_pll_p0_acdr_b_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_get_reg_pll_p0_acdr_b_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_get_reg_pll_p0_acdr_b_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_get_reg_pll_p0_acdr_b_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_get_reg_pll_p0_acdr_b_en_idn(data)  ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_get_reg_pll_p0_acdr_b_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_PLL_CONFIG_get_reserved_pll_p0_acdr_b(data)    (0x0000003F&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG                                   0x1800DACC
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_addr                           "0xB800DACC"
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg                                0xB800DACC
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_inst_addr                          "0x002D"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg(data)                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_icp_sel_shift   (28)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_lfrs_sel_shift  (25)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_cs_cap_sel_shift (23)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_cp_cap_sel_shift (21)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_vco_fine_i_shift (17)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_en_lpf_r_shift  (12)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_en_lpf_c_shift  (11)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_en_idn_shift    (10)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_sel_idn_shift   (6)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reserved_pll_p0_acdr_ck_shift      (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_icp_sel_mask    (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_lfrs_sel_mask   (0x0E000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_cs_cap_sel_mask (0x01800000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_cp_cap_sel_mask (0x00600000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_vco_fine_i_mask (0x001E0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_en_lpf_r_mask   (0x00001000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_en_lpf_c_mask   (0x00000800)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_en_idn_mask     (0x00000400)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_sel_idn_mask    (0x000003C0)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reserved_pll_p0_acdr_ck_mask       (0x0000003F)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_icp_sel(data)   (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_lfrs_sel(data)  (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_cs_cap_sel(data) (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_cp_cap_sel(data) (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_vco_fine_i(data) (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_en_lpf_r(data)  (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_en_lpf_c(data)  (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_en_idn(data)    (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reg_pll_p0_acdr_ck_sel_idn(data)   (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_reserved_pll_p0_acdr_ck(data)      (0x0000003F&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_get_reg_pll_p0_acdr_ck_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_get_reg_pll_p0_acdr_ck_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_get_reg_pll_p0_acdr_ck_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_get_reg_pll_p0_acdr_ck_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_get_reg_pll_p0_acdr_ck_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_get_reg_pll_p0_acdr_ck_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_get_reg_pll_p0_acdr_ck_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_get_reg_pll_p0_acdr_ck_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_get_reg_pll_p0_acdr_ck_en_idn(data) ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_get_reg_pll_p0_acdr_ck_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_PLL_CONFIG_get_reserved_pll_p0_acdr_ck(data)  (0x0000003F&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG                                    0x1800DAD0
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_addr                            "0xB800DAD0"
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg                                 0xB800DAD0
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_inst_addr                           "0x002E"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg(data)                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg                             (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_icp_sel_shift     (28)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_lfrs_sel_shift    (25)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_cs_cap_sel_shift  (23)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_cp_cap_sel_shift  (21)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_vco_fine_i_shift  (17)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_en_lpf_r_shift    (12)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_en_lpf_c_shift    (11)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_en_idn_shift      (10)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_sel_idn_shift     (6)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reserved_cdr_p0_acdr_r_shift        (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_icp_sel_mask      (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_lfrs_sel_mask     (0x0E000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_cs_cap_sel_mask   (0x01800000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_cp_cap_sel_mask   (0x00600000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_vco_fine_i_mask   (0x001E0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_en_lpf_r_mask     (0x00001000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_en_lpf_c_mask     (0x00000800)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_en_idn_mask       (0x00000400)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_sel_idn_mask      (0x000003C0)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reserved_cdr_p0_acdr_r_mask         (0x0000003F)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_icp_sel(data)     (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_lfrs_sel(data)    (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_cs_cap_sel(data)  (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_cp_cap_sel(data)  (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_vco_fine_i(data)  (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_en_lpf_r(data)    (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_en_lpf_c(data)    (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_en_idn(data)      (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reg_cdr_p0_acdr_r_sel_idn(data)     (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_reserved_cdr_p0_acdr_r(data)        (0x0000003F&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_get_reg_cdr_p0_acdr_r_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_get_reg_cdr_p0_acdr_r_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_get_reg_cdr_p0_acdr_r_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_get_reg_cdr_p0_acdr_r_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_get_reg_cdr_p0_acdr_r_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_get_reg_cdr_p0_acdr_r_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_get_reg_cdr_p0_acdr_r_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_get_reg_cdr_p0_acdr_r_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_get_reg_cdr_p0_acdr_r_en_idn(data)  ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_get_reg_cdr_p0_acdr_r_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_CDR_CONFIG_get_reserved_cdr_p0_acdr_r(data)    (0x0000003F&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG                                    0x1800DAD4
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_addr                            "0xB800DAD4"
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg                                 0xB800DAD4
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_inst_addr                           "0x002F"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg(data)                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg                             (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_icp_sel_shift     (28)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_lfrs_sel_shift    (25)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_cs_cap_sel_shift  (23)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_cp_cap_sel_shift  (21)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_vco_fine_i_shift  (17)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_en_lpf_r_shift    (12)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_en_lpf_c_shift    (11)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_en_idn_shift      (10)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_sel_idn_shift     (6)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reserved_cdr_p0_acdr_g_shift        (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_icp_sel_mask      (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_lfrs_sel_mask     (0x0E000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_cs_cap_sel_mask   (0x01800000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_cp_cap_sel_mask   (0x00600000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_vco_fine_i_mask   (0x001E0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_en_lpf_r_mask     (0x00001000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_en_lpf_c_mask     (0x00000800)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_en_idn_mask       (0x00000400)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_sel_idn_mask      (0x000003C0)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reserved_cdr_p0_acdr_g_mask         (0x0000003F)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_icp_sel(data)     (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_lfrs_sel(data)    (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_cs_cap_sel(data)  (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_cp_cap_sel(data)  (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_vco_fine_i(data)  (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_en_lpf_r(data)    (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_en_lpf_c(data)    (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_en_idn(data)      (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reg_cdr_p0_acdr_g_sel_idn(data)     (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_reserved_cdr_p0_acdr_g(data)        (0x0000003F&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_get_reg_cdr_p0_acdr_g_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_get_reg_cdr_p0_acdr_g_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_get_reg_cdr_p0_acdr_g_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_get_reg_cdr_p0_acdr_g_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_get_reg_cdr_p0_acdr_g_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_get_reg_cdr_p0_acdr_g_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_get_reg_cdr_p0_acdr_g_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_get_reg_cdr_p0_acdr_g_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_get_reg_cdr_p0_acdr_g_en_idn(data)  ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_get_reg_cdr_p0_acdr_g_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_CDR_CONFIG_get_reserved_cdr_p0_acdr_g(data)    (0x0000003F&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG                                    0x1800DAD8
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_addr                            "0xB800DAD8"
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg                                 0xB800DAD8
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_inst_addr                           "0x0030"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg(data)                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg                             (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_icp_sel_shift     (28)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_lfrs_sel_shift    (25)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_cs_cap_sel_shift  (23)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_cp_cap_sel_shift  (21)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_vco_fine_i_shift  (17)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_en_lpf_r_shift    (12)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_en_lpf_c_shift    (11)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_en_idn_shift      (10)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_sel_idn_shift     (6)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reserved_cdr_p0_acdr_b_shift        (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_icp_sel_mask      (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_lfrs_sel_mask     (0x0E000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_cs_cap_sel_mask   (0x01800000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_cp_cap_sel_mask   (0x00600000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_vco_fine_i_mask   (0x001E0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_en_lpf_r_mask     (0x00001000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_en_lpf_c_mask     (0x00000800)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_en_idn_mask       (0x00000400)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_sel_idn_mask      (0x000003C0)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reserved_cdr_p0_acdr_b_mask         (0x0000003F)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_icp_sel(data)     (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_lfrs_sel(data)    (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_cs_cap_sel(data)  (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_cp_cap_sel(data)  (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_vco_fine_i(data)  (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_en_lpf_r(data)    (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_en_lpf_c(data)    (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_en_idn(data)      (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reg_cdr_p0_acdr_b_sel_idn(data)     (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_reserved_cdr_p0_acdr_b(data)        (0x0000003F&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_get_reg_cdr_p0_acdr_b_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_get_reg_cdr_p0_acdr_b_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_get_reg_cdr_p0_acdr_b_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_get_reg_cdr_p0_acdr_b_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_get_reg_cdr_p0_acdr_b_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_get_reg_cdr_p0_acdr_b_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_get_reg_cdr_p0_acdr_b_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_get_reg_cdr_p0_acdr_b_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_get_reg_cdr_p0_acdr_b_en_idn(data)  ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_get_reg_cdr_p0_acdr_b_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_CDR_CONFIG_get_reserved_cdr_p0_acdr_b(data)    (0x0000003F&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG                                   0x1800DADC
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_addr                           "0xB800DADC"
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg                                0xB800DADC
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_inst_addr                          "0x0031"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg(data)                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_icp_sel_shift   (28)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_lfrs_sel_shift  (25)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_cs_cap_sel_shift (23)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_cp_cap_sel_shift (21)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_vco_fine_i_shift (17)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_en_lpf_r_shift  (12)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_en_lpf_c_shift  (11)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_en_idn_shift    (10)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_sel_idn_shift   (6)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reserved_cdr_p0_acdr_ck_shift      (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_icp_sel_mask    (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_lfrs_sel_mask   (0x0E000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_cs_cap_sel_mask (0x01800000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_cp_cap_sel_mask (0x00600000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_vco_fine_i_mask (0x001E0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_en_lpf_r_mask   (0x00001000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_en_lpf_c_mask   (0x00000800)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_en_idn_mask     (0x00000400)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_sel_idn_mask    (0x000003C0)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reserved_cdr_p0_acdr_ck_mask       (0x0000003F)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_icp_sel(data)   (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_lfrs_sel(data)  (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_cs_cap_sel(data) (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_cp_cap_sel(data) (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_vco_fine_i(data) (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_en_lpf_r(data)  (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_en_lpf_c(data)  (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_en_idn(data)    (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reg_cdr_p0_acdr_ck_sel_idn(data)   (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_reserved_cdr_p0_acdr_ck(data)      (0x0000003F&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_get_reg_cdr_p0_acdr_ck_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_get_reg_cdr_p0_acdr_ck_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_get_reg_cdr_p0_acdr_ck_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_get_reg_cdr_p0_acdr_ck_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_get_reg_cdr_p0_acdr_ck_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_get_reg_cdr_p0_acdr_ck_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_get_reg_cdr_p0_acdr_ck_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_get_reg_cdr_p0_acdr_ck_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_get_reg_cdr_p0_acdr_ck_en_idn(data) ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_get_reg_cdr_p0_acdr_ck_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_CDR_CONFIG_get_reserved_cdr_p0_acdr_ck(data)  (0x0000003F&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG                                 0x1800DAE0
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_addr                         "0xB800DAE0"
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg                              0xB800DAE0
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_inst_addr                        "0x0032"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg(data)                    (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_icp_sel_shift (28)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_lfrs_sel_shift (25)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_cs_cap_sel_shift (23)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_cp_cap_sel_shift (21)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_vco_fine_i_shift (17)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_en_lpf_r_shift (12)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_en_lpf_c_shift (11)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_en_idn_shift (10)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_sel_idn_shift (6)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_p0_r_pll_to_acdr_manual_en_shift (5)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_p0_r_pll_to_acdr_rdy_manual_shift (4)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reserved_manual_p0_acdr_r_shift  (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_icp_sel_mask (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_lfrs_sel_mask (0x0E000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_cs_cap_sel_mask (0x01800000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_cp_cap_sel_mask (0x00600000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_vco_fine_i_mask (0x001E0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_en_lpf_r_mask (0x00001000)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_en_lpf_c_mask (0x00000800)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_en_idn_mask (0x00000400)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_sel_idn_mask (0x000003C0)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_p0_r_pll_to_acdr_manual_en_mask (0x00000020)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_p0_r_pll_to_acdr_rdy_manual_mask (0x00000010)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reserved_manual_p0_acdr_r_mask   (0x0000000F)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_icp_sel(data) (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_lfrs_sel(data) (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_cs_cap_sel(data) (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_cp_cap_sel(data) (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_vco_fine_i(data) (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_en_lpf_r(data) (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_en_lpf_c(data) (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_en_idn(data) (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_manual_p0_acdr_r_sel_idn(data) (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_p0_r_pll_to_acdr_manual_en(data) (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reg_p0_r_pll_to_acdr_rdy_manual(data) (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_reserved_manual_p0_acdr_r(data)  (0x0000000F&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_get_reg_manual_p0_acdr_r_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_get_reg_manual_p0_acdr_r_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_get_reg_manual_p0_acdr_r_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_get_reg_manual_p0_acdr_r_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_get_reg_manual_p0_acdr_r_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_get_reg_manual_p0_acdr_r_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_get_reg_manual_p0_acdr_r_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_get_reg_manual_p0_acdr_r_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_get_reg_manual_p0_acdr_r_en_idn(data) ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_get_reg_manual_p0_acdr_r_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_get_reg_p0_r_pll_to_acdr_manual_en(data) ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_get_reg_p0_r_pll_to_acdr_rdy_manual(data) ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_ACDR_R_MANUAL_CONFIG_get_reserved_manual_p0_acdr_r(data) (0x0000000F&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG                                 0x1800DAE4
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_addr                         "0xB800DAE4"
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg                              0xB800DAE4
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_inst_addr                        "0x0033"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg(data)                    (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_icp_sel_shift (28)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_lfrs_sel_shift (25)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_cs_cap_sel_shift (23)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_cp_cap_sel_shift (21)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_vco_fine_i_shift (17)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_en_lpf_r_shift (12)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_en_lpf_c_shift (11)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_en_idn_shift (10)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_sel_idn_shift (6)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_p0_g_pll_to_acdr_manual_en_shift (5)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_p0_g_pll_to_acdr_rdy_manual_shift (4)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reserved_manual_p0_acdr_g_shift  (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_icp_sel_mask (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_lfrs_sel_mask (0x0E000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_cs_cap_sel_mask (0x01800000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_cp_cap_sel_mask (0x00600000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_vco_fine_i_mask (0x001E0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_en_lpf_r_mask (0x00001000)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_en_lpf_c_mask (0x00000800)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_en_idn_mask (0x00000400)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_sel_idn_mask (0x000003C0)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_p0_g_pll_to_acdr_manual_en_mask (0x00000020)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_p0_g_pll_to_acdr_rdy_manual_mask (0x00000010)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reserved_manual_p0_acdr_g_mask   (0x0000000F)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_icp_sel(data) (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_lfrs_sel(data) (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_cs_cap_sel(data) (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_cp_cap_sel(data) (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_vco_fine_i(data) (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_en_lpf_r(data) (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_en_lpf_c(data) (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_en_idn(data) (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_manual_p0_acdr_g_sel_idn(data) (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_p0_g_pll_to_acdr_manual_en(data) (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reg_p0_g_pll_to_acdr_rdy_manual(data) (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_reserved_manual_p0_acdr_g(data)  (0x0000000F&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_get_reg_manual_p0_acdr_g_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_get_reg_manual_p0_acdr_g_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_get_reg_manual_p0_acdr_g_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_get_reg_manual_p0_acdr_g_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_get_reg_manual_p0_acdr_g_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_get_reg_manual_p0_acdr_g_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_get_reg_manual_p0_acdr_g_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_get_reg_manual_p0_acdr_g_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_get_reg_manual_p0_acdr_g_en_idn(data) ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_get_reg_manual_p0_acdr_g_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_get_reg_p0_g_pll_to_acdr_manual_en(data) ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_get_reg_p0_g_pll_to_acdr_rdy_manual(data) ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_ACDR_G_MANUAL_CONFIG_get_reserved_manual_p0_acdr_g(data) (0x0000000F&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG                                 0x1800DAE8
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_addr                         "0xB800DAE8"
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg                              0xB800DAE8
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_inst_addr                        "0x0034"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg(data)                    (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_icp_sel_shift (28)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_lfrs_sel_shift (25)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_cs_cap_sel_shift (23)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_cp_cap_sel_shift (21)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_vco_fine_i_shift (17)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_en_lpf_r_shift (12)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_en_lpf_c_shift (11)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_en_idn_shift (10)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_sel_idn_shift (6)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_p0_b_pll_to_acdr_manual_en_shift (5)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_p0_b_pll_to_acdr_rdy_manual_shift (4)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reserved_manual_p0_acdr_b_shift  (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_icp_sel_mask (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_lfrs_sel_mask (0x0E000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_cs_cap_sel_mask (0x01800000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_cp_cap_sel_mask (0x00600000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_vco_fine_i_mask (0x001E0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_en_lpf_r_mask (0x00001000)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_en_lpf_c_mask (0x00000800)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_en_idn_mask (0x00000400)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_sel_idn_mask (0x000003C0)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_p0_b_pll_to_acdr_manual_en_mask (0x00000020)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_p0_b_pll_to_acdr_rdy_manual_mask (0x00000010)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reserved_manual_p0_acdr_b_mask   (0x0000000F)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_icp_sel(data) (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_lfrs_sel(data) (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_cs_cap_sel(data) (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_cp_cap_sel(data) (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_vco_fine_i(data) (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_en_lpf_r(data) (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_en_lpf_c(data) (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_en_idn(data) (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_manual_p0_acdr_b_sel_idn(data) (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_p0_b_pll_to_acdr_manual_en(data) (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reg_p0_b_pll_to_acdr_rdy_manual(data) (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_reserved_manual_p0_acdr_b(data)  (0x0000000F&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_get_reg_manual_p0_acdr_b_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_get_reg_manual_p0_acdr_b_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_get_reg_manual_p0_acdr_b_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_get_reg_manual_p0_acdr_b_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_get_reg_manual_p0_acdr_b_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_get_reg_manual_p0_acdr_b_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_get_reg_manual_p0_acdr_b_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_get_reg_manual_p0_acdr_b_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_get_reg_manual_p0_acdr_b_en_idn(data) ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_get_reg_manual_p0_acdr_b_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_get_reg_p0_b_pll_to_acdr_manual_en(data) ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_get_reg_p0_b_pll_to_acdr_rdy_manual(data) ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_ACDR_B_MANUAL_CONFIG_get_reserved_manual_p0_acdr_b(data) (0x0000000F&(data))

#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG                                0x1800DAEC
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_addr                        "0xB800DAEC"
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg                             0xB800DAEC
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_inst_addr                       "0x0035"
#define  set_HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg(data)                   (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg                         (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_icp_sel_shift (28)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_lfrs_sel_shift (25)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_cs_cap_sel_shift (23)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_cp_cap_sel_shift (21)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_vco_fine_i_shift (17)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_en_lpf_r_shift (12)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_en_lpf_c_shift (11)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_en_idn_shift (10)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_sel_idn_shift (6)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_p0_ck_pll_to_acdr_manual_en_shift (5)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_p0_ck_pll_to_acdr_rdy_manual_shift (4)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reserved_manual_p0_acdr_ck_shift (0)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_icp_sel_mask (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_lfrs_sel_mask (0x0E000000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_cs_cap_sel_mask (0x01800000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_cp_cap_sel_mask (0x00600000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_vco_fine_i_mask (0x001E0000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_en_lpf_r_mask (0x00001000)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_en_lpf_c_mask (0x00000800)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_en_idn_mask (0x00000400)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_sel_idn_mask (0x000003C0)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_p0_ck_pll_to_acdr_manual_en_mask (0x00000020)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_p0_ck_pll_to_acdr_rdy_manual_mask (0x00000010)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reserved_manual_p0_acdr_ck_mask (0x0000000F)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_icp_sel(data) (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_lfrs_sel(data) (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_cs_cap_sel(data) (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_cp_cap_sel(data) (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_vco_fine_i(data) (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_en_lpf_r(data) (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_en_lpf_c(data) (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_en_idn(data) (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_manual_p0_acdr_ck_sel_idn(data) (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_p0_ck_pll_to_acdr_manual_en(data) (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reg_p0_ck_pll_to_acdr_rdy_manual(data) (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_reserved_manual_p0_acdr_ck(data) (0x0000000F&(data))
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p0_acdr_ck_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p0_acdr_ck_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p0_acdr_ck_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p0_acdr_ck_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p0_acdr_ck_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p0_acdr_ck_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p0_acdr_ck_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p0_acdr_ck_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p0_acdr_ck_en_idn(data) ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p0_acdr_ck_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_get_reg_p0_ck_pll_to_acdr_manual_en(data) ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_get_reg_p0_ck_pll_to_acdr_rdy_manual(data) ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_ACDR_CK_MANUAL_CONFIG_get_reserved_manual_p0_acdr_ck(data) (0x0000000F&(data))

#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0                                            0x1800DB20
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg_addr                                    "0xB800DB20"
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg                                         0xB800DB20
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_inst_addr                                   "0x0036"
#define  set_HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg(data)                               (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg                                     (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg))
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg_p1_b_out_2_shift                        (24)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg_p1_b_out_1_shift                        (16)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg_p1_ck_out_2_shift                       (8)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg_p1_ck_out_1_shift                       (0)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg_p1_b_out_2_mask                         (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg_p1_b_out_1_mask                         (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg_p1_ck_out_2_mask                        (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg_p1_ck_out_1_mask                        (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg_p1_b_out_2(data)                        (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg_p1_b_out_1(data)                        (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg_p1_ck_out_2(data)                       (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_reg_p1_ck_out_1(data)                       (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_get_reg_p1_b_out_2(data)                    ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_get_reg_p1_b_out_1(data)                    ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_get_reg_p1_ck_out_2(data)                   ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_0_get_reg_p1_ck_out_1(data)                   (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1                                            0x1800DB24
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg_addr                                    "0xB800DB24"
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg                                         0xB800DB24
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_inst_addr                                   "0x0037"
#define  set_HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg(data)                               (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg                                     (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg))
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg_p1_r_out_2_shift                        (24)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg_p1_r_out_1_shift                        (16)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg_p1_g_out_2_shift                        (8)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg_p1_g_out_1_shift                        (0)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg_p1_r_out_2_mask                         (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg_p1_r_out_1_mask                         (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg_p1_g_out_2_mask                         (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg_p1_g_out_1_mask                         (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg_p1_r_out_2(data)                        (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg_p1_r_out_1(data)                        (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg_p1_g_out_2(data)                        (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_reg_p1_g_out_1(data)                        (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_get_reg_p1_r_out_2(data)                    ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_get_reg_p1_r_out_1(data)                    ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_get_reg_p1_g_out_2(data)                    ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_TOP_OUT_1_get_reg_p1_g_out_1(data)                    (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_KOFFSET                                              0x1800DB28
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_addr                                      "0xB800DB28"
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg                                           0xB800DB28
#define  HDMIRX_2P1_PHY_P1_KOFFSET_inst_addr                                     "0x0038"
#define  set_HDMIRX_2P1_PHY_P1_KOFFSET_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_KOFFSET_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_KOFFSET_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_KOFFSET_reg))
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_ok_r_shift                    (30)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_bound_r_shift                 (29)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_tst_r_shift                   (24)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_ok_g_shift                    (22)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_bound_g_shift                 (21)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_tst_g_shift                   (16)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_ok_ck_shift                   (14)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_bound_ck_shift                (13)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_tst_ck_shift                  (8)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_ok_b_shift                    (6)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_bound_b_shift                 (5)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_tst_b_shift                   (0)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_ok_r_mask                     (0x40000000)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_bound_r_mask                  (0x20000000)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_tst_r_mask                    (0x1F000000)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_ok_g_mask                     (0x00400000)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_bound_g_mask                  (0x00200000)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_tst_g_mask                    (0x001F0000)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_ok_ck_mask                    (0x00004000)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_bound_ck_mask                 (0x00002000)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_tst_ck_mask                   (0x00001F00)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_ok_b_mask                     (0x00000040)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_bound_b_mask                  (0x00000020)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_tst_b_mask                    (0x0000001F)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_ok_r(data)                    (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_bound_r(data)                 (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_tst_r(data)                   (0x1F000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_ok_g(data)                    (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_bound_g(data)                 (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_tst_g(data)                   (0x001F0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_ok_ck(data)                   (0x00004000&((data)<<14))
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_bound_ck(data)                (0x00002000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_tst_ck(data)                  (0x00001F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_ok_b(data)                    (0x00000040&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_bound_b(data)                 (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_KOFFSET_reg_p1_fore_off_tst_b(data)                   (0x0000001F&(data))
#define  HDMIRX_2P1_PHY_P1_KOFFSET_get_reg_p1_fore_off_ok_r(data)                ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_get_reg_p1_fore_off_bound_r(data)             ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_get_reg_p1_fore_off_tst_r(data)               ((0x1F000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_get_reg_p1_fore_off_ok_g(data)                ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_get_reg_p1_fore_off_bound_g(data)             ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_get_reg_p1_fore_off_tst_g(data)               ((0x001F0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_get_reg_p1_fore_off_ok_ck(data)               ((0x00004000&(data))>>14)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_get_reg_p1_fore_off_bound_ck(data)            ((0x00002000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_get_reg_p1_fore_off_tst_ck(data)              ((0x00001F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_get_reg_p1_fore_off_ok_b(data)                ((0x00000040&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_get_reg_p1_fore_off_bound_b(data)             ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_KOFFSET_get_reg_p1_fore_off_tst_b(data)               (0x0000001F&(data))

#define  HDMIRX_2P1_PHY_P1_CK_CMU                                               0x1800DB2C
#define  HDMIRX_2P1_PHY_P1_CK_CMU_reg_addr                                       "0xB800DB2C"
#define  HDMIRX_2P1_PHY_P1_CK_CMU_reg                                            0xB800DB2C
#define  HDMIRX_2P1_PHY_P1_CK_CMU_inst_addr                                      "0x0039"
#define  set_HDMIRX_2P1_PHY_P1_CK_CMU_reg(data)                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_CK_CMU_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_CK_CMU_reg                                        (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_CK_CMU_reg))
#define  HDMIRX_2P1_PHY_P1_CK_CMU_reg_p1_cmu_ck_3_shift                          (16)
#define  HDMIRX_2P1_PHY_P1_CK_CMU_reg_p1_cmu_ck_2_shift                          (8)
#define  HDMIRX_2P1_PHY_P1_CK_CMU_reg_p1_cmu_ck_1_shift                          (0)
#define  HDMIRX_2P1_PHY_P1_CK_CMU_reg_p1_cmu_ck_3_mask                           (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_CK_CMU_reg_p1_cmu_ck_2_mask                           (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_CK_CMU_reg_p1_cmu_ck_1_mask                           (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_CK_CMU_reg_p1_cmu_ck_3(data)                          (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_CK_CMU_reg_p1_cmu_ck_2(data)                          (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_CK_CMU_reg_p1_cmu_ck_1(data)                          (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_CK_CMU_get_reg_p1_cmu_ck_3(data)                      ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_CK_CMU_get_reg_p1_cmu_ck_2(data)                      ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_CK_CMU_get_reg_p1_cmu_ck_1(data)                      (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_CK0                                                  0x1800DB30
#define  HDMIRX_2P1_PHY_P1_CK0_reg_addr                                          "0xB800DB30"
#define  HDMIRX_2P1_PHY_P1_CK0_reg                                               0xB800DB30
#define  HDMIRX_2P1_PHY_P1_CK0_inst_addr                                         "0x003A"
#define  set_HDMIRX_2P1_PHY_P1_CK0_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_CK0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_CK0_reg                                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_CK0_reg))
#define  HDMIRX_2P1_PHY_P1_CK0_reg_p1_ck_4_shift                                 (24)
#define  HDMIRX_2P1_PHY_P1_CK0_reg_p1_ck_3_shift                                 (16)
#define  HDMIRX_2P1_PHY_P1_CK0_reg_p1_ck_2_shift                                 (8)
#define  HDMIRX_2P1_PHY_P1_CK0_reg_p1_ck_1_shift                                 (0)
#define  HDMIRX_2P1_PHY_P1_CK0_reg_p1_ck_4_mask                                  (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_CK0_reg_p1_ck_3_mask                                  (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_CK0_reg_p1_ck_2_mask                                  (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_CK0_reg_p1_ck_1_mask                                  (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_CK0_reg_p1_ck_4(data)                                 (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_CK0_reg_p1_ck_3(data)                                 (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_CK0_reg_p1_ck_2(data)                                 (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_CK0_reg_p1_ck_1(data)                                 (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_CK0_get_reg_p1_ck_4(data)                             ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_CK0_get_reg_p1_ck_3(data)                             ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_CK0_get_reg_p1_ck_2(data)                             ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_CK0_get_reg_p1_ck_1(data)                             (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_CK1                                                  0x1800DB34
#define  HDMIRX_2P1_PHY_P1_CK1_reg_addr                                          "0xB800DB34"
#define  HDMIRX_2P1_PHY_P1_CK1_reg                                               0xB800DB34
#define  HDMIRX_2P1_PHY_P1_CK1_inst_addr                                         "0x003B"
#define  set_HDMIRX_2P1_PHY_P1_CK1_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_CK1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_CK1_reg                                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_CK1_reg))
#define  HDMIRX_2P1_PHY_P1_CK1_reg_p1_ck_8_shift                                 (24)
#define  HDMIRX_2P1_PHY_P1_CK1_reg_p1_ck_7_shift                                 (16)
#define  HDMIRX_2P1_PHY_P1_CK1_reg_p1_ck_6_shift                                 (8)
#define  HDMIRX_2P1_PHY_P1_CK1_reg_p1_ck_5_shift                                 (0)
#define  HDMIRX_2P1_PHY_P1_CK1_reg_p1_ck_8_mask                                  (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_CK1_reg_p1_ck_7_mask                                  (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_CK1_reg_p1_ck_6_mask                                  (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_CK1_reg_p1_ck_5_mask                                  (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_CK1_reg_p1_ck_8(data)                                 (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_CK1_reg_p1_ck_7(data)                                 (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_CK1_reg_p1_ck_6(data)                                 (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_CK1_reg_p1_ck_5(data)                                 (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_CK1_get_reg_p1_ck_8(data)                             ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_CK1_get_reg_p1_ck_7(data)                             ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_CK1_get_reg_p1_ck_6(data)                             ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_CK1_get_reg_p1_ck_5(data)                             (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_CK2                                                  0x1800DB38
#define  HDMIRX_2P1_PHY_P1_CK2_reg_addr                                          "0xB800DB38"
#define  HDMIRX_2P1_PHY_P1_CK2_reg                                               0xB800DB38
#define  HDMIRX_2P1_PHY_P1_CK2_inst_addr                                         "0x003C"
#define  set_HDMIRX_2P1_PHY_P1_CK2_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_CK2_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_CK2_reg                                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_CK2_reg))
#define  HDMIRX_2P1_PHY_P1_CK2_reg_p1_ck_12_shift                                (24)
#define  HDMIRX_2P1_PHY_P1_CK2_reg_p1_ck_11_shift                                (16)
#define  HDMIRX_2P1_PHY_P1_CK2_reg_p1_ck_10_shift                                (8)
#define  HDMIRX_2P1_PHY_P1_CK2_reg_p1_ck_9_shift                                 (0)
#define  HDMIRX_2P1_PHY_P1_CK2_reg_p1_ck_12_mask                                 (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_CK2_reg_p1_ck_11_mask                                 (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_CK2_reg_p1_ck_10_mask                                 (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_CK2_reg_p1_ck_9_mask                                  (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_CK2_reg_p1_ck_12(data)                                (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_CK2_reg_p1_ck_11(data)                                (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_CK2_reg_p1_ck_10(data)                                (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_CK2_reg_p1_ck_9(data)                                 (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_CK2_get_reg_p1_ck_12(data)                            ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_CK2_get_reg_p1_ck_11(data)                            ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_CK2_get_reg_p1_ck_10(data)                            ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_CK2_get_reg_p1_ck_9(data)                             (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_CK3                                                  0x1800DB3C
#define  HDMIRX_2P1_PHY_P1_CK3_reg_addr                                          "0xB800DB3C"
#define  HDMIRX_2P1_PHY_P1_CK3_reg                                               0xB800DB3C
#define  HDMIRX_2P1_PHY_P1_CK3_inst_addr                                         "0x003D"
#define  set_HDMIRX_2P1_PHY_P1_CK3_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_CK3_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_CK3_reg                                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_CK3_reg))
#define  HDMIRX_2P1_PHY_P1_CK3_reg_p1_ck_16_shift                                (24)
#define  HDMIRX_2P1_PHY_P1_CK3_reg_p1_ck_15_shift                                (16)
#define  HDMIRX_2P1_PHY_P1_CK3_reg_p1_ck_14_shift                                (8)
#define  HDMIRX_2P1_PHY_P1_CK3_reg_p1_ck_13_shift                                (0)
#define  HDMIRX_2P1_PHY_P1_CK3_reg_p1_ck_16_mask                                 (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_CK3_reg_p1_ck_15_mask                                 (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_CK3_reg_p1_ck_14_mask                                 (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_CK3_reg_p1_ck_13_mask                                 (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_CK3_reg_p1_ck_16(data)                                (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_CK3_reg_p1_ck_15(data)                                (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_CK3_reg_p1_ck_14(data)                                (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_CK3_reg_p1_ck_13(data)                                (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_CK3_get_reg_p1_ck_16(data)                            ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_CK3_get_reg_p1_ck_15(data)                            ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_CK3_get_reg_p1_ck_14(data)                            ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_CK3_get_reg_p1_ck_13(data)                            (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_CK4                                                  0x1800DB40
#define  HDMIRX_2P1_PHY_P1_CK4_reg_addr                                          "0xB800DB40"
#define  HDMIRX_2P1_PHY_P1_CK4_reg                                               0xB800DB40
#define  HDMIRX_2P1_PHY_P1_CK4_inst_addr                                         "0x003E"
#define  set_HDMIRX_2P1_PHY_P1_CK4_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_CK4_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_CK4_reg                                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_CK4_reg))
#define  HDMIRX_2P1_PHY_P1_CK4_reg_p1_ck_20_shift                                (24)
#define  HDMIRX_2P1_PHY_P1_CK4_reg_p1_ck_19_shift                                (16)
#define  HDMIRX_2P1_PHY_P1_CK4_reg_p1_ck_18_shift                                (8)
#define  HDMIRX_2P1_PHY_P1_CK4_reg_p1_ck_17_shift                                (0)
#define  HDMIRX_2P1_PHY_P1_CK4_reg_p1_ck_20_mask                                 (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_CK4_reg_p1_ck_19_mask                                 (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_CK4_reg_p1_ck_18_mask                                 (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_CK4_reg_p1_ck_17_mask                                 (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_CK4_reg_p1_ck_20(data)                                (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_CK4_reg_p1_ck_19(data)                                (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_CK4_reg_p1_ck_18(data)                                (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_CK4_reg_p1_ck_17(data)                                (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_CK4_get_reg_p1_ck_20(data)                            ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_CK4_get_reg_p1_ck_19(data)                            ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_CK4_get_reg_p1_ck_18(data)                            ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_CK4_get_reg_p1_ck_17(data)                            (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_CK0                                             0x1800DB44
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_reg_addr                                     "0xB800DB44"
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_reg                                          0xB800DB44
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_inst_addr                                    "0x003F"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_CK0_reg(data)                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_CK0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_CK0_reg                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_CK0_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_reg_p1_acdr_ck_4_shift                       (24)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_reg_p1_acdr_ck_3_shift                       (16)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_reg_p1_acdr_ck_2_shift                       (8)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_reg_p1_acdr_ck_1_shift                       (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_reg_p1_acdr_ck_4_mask                        (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_reg_p1_acdr_ck_3_mask                        (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_reg_p1_acdr_ck_2_mask                        (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_reg_p1_acdr_ck_1_mask                        (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_reg_p1_acdr_ck_4(data)                       (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_reg_p1_acdr_ck_3(data)                       (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_reg_p1_acdr_ck_2(data)                       (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_reg_p1_acdr_ck_1(data)                       (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_get_reg_p1_acdr_ck_4(data)                   ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_get_reg_p1_acdr_ck_3(data)                   ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_get_reg_p1_acdr_ck_2(data)                   ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK0_get_reg_p1_acdr_ck_1(data)                   (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_CK1                                             0x1800DB48
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_reg_addr                                     "0xB800DB48"
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_reg                                          0xB800DB48
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_inst_addr                                    "0x0040"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_CK1_reg(data)                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_CK1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_CK1_reg                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_CK1_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_reg_p1_acdr_ck_8_shift                       (24)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_reg_p1_acdr_ck_7_shift                       (16)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_reg_p1_acdr_ck_6_shift                       (8)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_reg_p1_acdr_ck_5_shift                       (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_reg_p1_acdr_ck_8_mask                        (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_reg_p1_acdr_ck_7_mask                        (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_reg_p1_acdr_ck_6_mask                        (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_reg_p1_acdr_ck_5_mask                        (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_reg_p1_acdr_ck_8(data)                       (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_reg_p1_acdr_ck_7(data)                       (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_reg_p1_acdr_ck_6(data)                       (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_reg_p1_acdr_ck_5(data)                       (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_get_reg_p1_acdr_ck_8(data)                   ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_get_reg_p1_acdr_ck_7(data)                   ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_get_reg_p1_acdr_ck_6(data)                   ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK1_get_reg_p1_acdr_ck_5(data)                   (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_CK2                                             0x1800DB4C
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_reg_addr                                     "0xB800DB4C"
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_reg                                          0xB800DB4C
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_inst_addr                                    "0x0041"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_CK2_reg(data)                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_CK2_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_CK2_reg                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_CK2_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_reg_p1_acdr_ck_12_shift                      (24)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_reg_p1_acdr_ck_11_shift                      (16)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_reg_p1_acdr_ck_10_shift                      (8)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_reg_p1_acdr_ck_9_shift                       (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_reg_p1_acdr_ck_12_mask                       (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_reg_p1_acdr_ck_11_mask                       (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_reg_p1_acdr_ck_10_mask                       (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_reg_p1_acdr_ck_9_mask                        (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_reg_p1_acdr_ck_12(data)                      (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_reg_p1_acdr_ck_11(data)                      (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_reg_p1_acdr_ck_10(data)                      (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_reg_p1_acdr_ck_9(data)                       (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_get_reg_p1_acdr_ck_12(data)                  ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_get_reg_p1_acdr_ck_11(data)                  ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_get_reg_p1_acdr_ck_10(data)                  ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK2_get_reg_p1_acdr_ck_9(data)                   (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_B0                                                   0x1800DB50
#define  HDMIRX_2P1_PHY_P1_B0_reg_addr                                           "0xB800DB50"
#define  HDMIRX_2P1_PHY_P1_B0_reg                                                0xB800DB50
#define  HDMIRX_2P1_PHY_P1_B0_inst_addr                                          "0x0042"
#define  set_HDMIRX_2P1_PHY_P1_B0_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_B0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_B0_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_B0_reg))
#define  HDMIRX_2P1_PHY_P1_B0_reg_p1_b_4_shift                                   (24)
#define  HDMIRX_2P1_PHY_P1_B0_reg_p1_b_3_shift                                   (16)
#define  HDMIRX_2P1_PHY_P1_B0_reg_p1_b_2_shift                                   (8)
#define  HDMIRX_2P1_PHY_P1_B0_reg_p1_b_1_shift                                   (0)
#define  HDMIRX_2P1_PHY_P1_B0_reg_p1_b_4_mask                                    (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_B0_reg_p1_b_3_mask                                    (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_B0_reg_p1_b_2_mask                                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_B0_reg_p1_b_1_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_B0_reg_p1_b_4(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_B0_reg_p1_b_3(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_B0_reg_p1_b_2(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_B0_reg_p1_b_1(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_B0_get_reg_p1_b_4(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_B0_get_reg_p1_b_3(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_B0_get_reg_p1_b_2(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_B0_get_reg_p1_b_1(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_B1                                                   0x1800DB54
#define  HDMIRX_2P1_PHY_P1_B1_reg_addr                                           "0xB800DB54"
#define  HDMIRX_2P1_PHY_P1_B1_reg                                                0xB800DB54
#define  HDMIRX_2P1_PHY_P1_B1_inst_addr                                          "0x0043"
#define  set_HDMIRX_2P1_PHY_P1_B1_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_B1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_B1_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_B1_reg))
#define  HDMIRX_2P1_PHY_P1_B1_reg_p1_b_8_shift                                   (24)
#define  HDMIRX_2P1_PHY_P1_B1_reg_p1_b_7_shift                                   (16)
#define  HDMIRX_2P1_PHY_P1_B1_reg_p1_b_6_shift                                   (8)
#define  HDMIRX_2P1_PHY_P1_B1_reg_p1_b_5_shift                                   (0)
#define  HDMIRX_2P1_PHY_P1_B1_reg_p1_b_8_mask                                    (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_B1_reg_p1_b_7_mask                                    (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_B1_reg_p1_b_6_mask                                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_B1_reg_p1_b_5_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_B1_reg_p1_b_8(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_B1_reg_p1_b_7(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_B1_reg_p1_b_6(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_B1_reg_p1_b_5(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_B1_get_reg_p1_b_8(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_B1_get_reg_p1_b_7(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_B1_get_reg_p1_b_6(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_B1_get_reg_p1_b_5(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_B2                                                   0x1800DB58
#define  HDMIRX_2P1_PHY_P1_B2_reg_addr                                           "0xB800DB58"
#define  HDMIRX_2P1_PHY_P1_B2_reg                                                0xB800DB58
#define  HDMIRX_2P1_PHY_P1_B2_inst_addr                                          "0x0044"
#define  set_HDMIRX_2P1_PHY_P1_B2_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_B2_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_B2_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_B2_reg))
#define  HDMIRX_2P1_PHY_P1_B2_reg_p1_b_12_shift                                  (24)
#define  HDMIRX_2P1_PHY_P1_B2_reg_p1_b_11_shift                                  (16)
#define  HDMIRX_2P1_PHY_P1_B2_reg_p1_b_10_shift                                  (8)
#define  HDMIRX_2P1_PHY_P1_B2_reg_p1_b_9_shift                                   (0)
#define  HDMIRX_2P1_PHY_P1_B2_reg_p1_b_12_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_B2_reg_p1_b_11_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_B2_reg_p1_b_10_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_B2_reg_p1_b_9_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_B2_reg_p1_b_12(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_B2_reg_p1_b_11(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_B2_reg_p1_b_10(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_B2_reg_p1_b_9(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_B2_get_reg_p1_b_12(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_B2_get_reg_p1_b_11(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_B2_get_reg_p1_b_10(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_B2_get_reg_p1_b_9(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_B3                                                   0x1800DB5C
#define  HDMIRX_2P1_PHY_P1_B3_reg_addr                                           "0xB800DB5C"
#define  HDMIRX_2P1_PHY_P1_B3_reg                                                0xB800DB5C
#define  HDMIRX_2P1_PHY_P1_B3_inst_addr                                          "0x0045"
#define  set_HDMIRX_2P1_PHY_P1_B3_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_B3_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_B3_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_B3_reg))
#define  HDMIRX_2P1_PHY_P1_B3_reg_p1_b_16_shift                                  (24)
#define  HDMIRX_2P1_PHY_P1_B3_reg_p1_b_15_shift                                  (16)
#define  HDMIRX_2P1_PHY_P1_B3_reg_p1_b_14_shift                                  (8)
#define  HDMIRX_2P1_PHY_P1_B3_reg_p1_b_13_shift                                  (0)
#define  HDMIRX_2P1_PHY_P1_B3_reg_p1_b_16_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_B3_reg_p1_b_15_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_B3_reg_p1_b_14_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_B3_reg_p1_b_13_mask                                   (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_B3_reg_p1_b_16(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_B3_reg_p1_b_15(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_B3_reg_p1_b_14(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_B3_reg_p1_b_13(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_B3_get_reg_p1_b_16(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_B3_get_reg_p1_b_15(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_B3_get_reg_p1_b_14(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_B3_get_reg_p1_b_13(data)                              (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_B4                                                   0x1800DB60
#define  HDMIRX_2P1_PHY_P1_B4_reg_addr                                           "0xB800DB60"
#define  HDMIRX_2P1_PHY_P1_B4_reg                                                0xB800DB60
#define  HDMIRX_2P1_PHY_P1_B4_inst_addr                                          "0x0046"
#define  set_HDMIRX_2P1_PHY_P1_B4_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_B4_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_B4_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_B4_reg))
#define  HDMIRX_2P1_PHY_P1_B4_reg_p1_b_20_shift                                  (24)
#define  HDMIRX_2P1_PHY_P1_B4_reg_p1_b_19_shift                                  (16)
#define  HDMIRX_2P1_PHY_P1_B4_reg_p1_b_18_shift                                  (8)
#define  HDMIRX_2P1_PHY_P1_B4_reg_p1_b_17_shift                                  (0)
#define  HDMIRX_2P1_PHY_P1_B4_reg_p1_b_20_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_B4_reg_p1_b_19_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_B4_reg_p1_b_18_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_B4_reg_p1_b_17_mask                                   (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_B4_reg_p1_b_20(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_B4_reg_p1_b_19(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_B4_reg_p1_b_18(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_B4_reg_p1_b_17(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_B4_get_reg_p1_b_20(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_B4_get_reg_p1_b_19(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_B4_get_reg_p1_b_18(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_B4_get_reg_p1_b_17(data)                              (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_B0                                              0x1800DB64
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_reg_addr                                      "0xB800DB64"
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_reg                                           0xB800DB64
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_inst_addr                                     "0x0047"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_B0_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_B0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_B0_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_B0_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_reg_p1_acdr_b_4_shift                         (24)
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_reg_p1_acdr_b_3_shift                         (16)
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_reg_p1_acdr_b_2_shift                         (8)
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_reg_p1_acdr_b_1_shift                         (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_reg_p1_acdr_b_4_mask                          (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_reg_p1_acdr_b_3_mask                          (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_reg_p1_acdr_b_2_mask                          (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_reg_p1_acdr_b_1_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_reg_p1_acdr_b_4(data)                         (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_reg_p1_acdr_b_3(data)                         (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_reg_p1_acdr_b_2(data)                         (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_reg_p1_acdr_b_1(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_get_reg_p1_acdr_b_4(data)                     ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_get_reg_p1_acdr_b_3(data)                     ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_get_reg_p1_acdr_b_2(data)                     ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_ACDR_B0_get_reg_p1_acdr_b_1(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_B1                                              0x1800DB68
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_reg_addr                                      "0xB800DB68"
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_reg                                           0xB800DB68
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_inst_addr                                     "0x0048"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_B1_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_B1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_B1_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_B1_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_reg_p1_acdr_b_8_shift                         (24)
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_reg_p1_acdr_b_7_shift                         (16)
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_reg_p1_acdr_b_6_shift                         (8)
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_reg_p1_acdr_b_5_shift                         (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_reg_p1_acdr_b_8_mask                          (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_reg_p1_acdr_b_7_mask                          (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_reg_p1_acdr_b_6_mask                          (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_reg_p1_acdr_b_5_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_reg_p1_acdr_b_8(data)                         (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_reg_p1_acdr_b_7(data)                         (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_reg_p1_acdr_b_6(data)                         (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_reg_p1_acdr_b_5(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_get_reg_p1_acdr_b_8(data)                     ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_get_reg_p1_acdr_b_7(data)                     ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_get_reg_p1_acdr_b_6(data)                     ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_ACDR_B1_get_reg_p1_acdr_b_5(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_B2                                              0x1800DB6C
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_reg_addr                                      "0xB800DB6C"
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_reg                                           0xB800DB6C
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_inst_addr                                     "0x0049"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_B2_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_B2_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_B2_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_B2_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_reg_p1_acdr_b_12_shift                        (24)
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_reg_p1_acdr_b_11_shift                        (16)
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_reg_p1_acdr_b_10_shift                        (8)
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_reg_p1_acdr_b_9_shift                         (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_reg_p1_acdr_b_12_mask                         (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_reg_p1_acdr_b_11_mask                         (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_reg_p1_acdr_b_10_mask                         (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_reg_p1_acdr_b_9_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_reg_p1_acdr_b_12(data)                        (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_reg_p1_acdr_b_11(data)                        (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_reg_p1_acdr_b_10(data)                        (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_reg_p1_acdr_b_9(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_get_reg_p1_acdr_b_12(data)                    ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_get_reg_p1_acdr_b_11(data)                    ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_get_reg_p1_acdr_b_10(data)                    ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_ACDR_B2_get_reg_p1_acdr_b_9(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_G0                                                   0x1800DB70
#define  HDMIRX_2P1_PHY_P1_G0_reg_addr                                           "0xB800DB70"
#define  HDMIRX_2P1_PHY_P1_G0_reg                                                0xB800DB70
#define  HDMIRX_2P1_PHY_P1_G0_inst_addr                                          "0x004A"
#define  set_HDMIRX_2P1_PHY_P1_G0_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_G0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_G0_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_G0_reg))
#define  HDMIRX_2P1_PHY_P1_G0_reg_p1_g_4_shift                                   (24)
#define  HDMIRX_2P1_PHY_P1_G0_reg_p1_g_3_shift                                   (16)
#define  HDMIRX_2P1_PHY_P1_G0_reg_p1_g_2_shift                                   (8)
#define  HDMIRX_2P1_PHY_P1_G0_reg_p1_g_1_shift                                   (0)
#define  HDMIRX_2P1_PHY_P1_G0_reg_p1_g_4_mask                                    (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_G0_reg_p1_g_3_mask                                    (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_G0_reg_p1_g_2_mask                                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_G0_reg_p1_g_1_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_G0_reg_p1_g_4(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_G0_reg_p1_g_3(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_G0_reg_p1_g_2(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_G0_reg_p1_g_1(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_G0_get_reg_p1_g_4(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_G0_get_reg_p1_g_3(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_G0_get_reg_p1_g_2(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_G0_get_reg_p1_g_1(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_G1                                                   0x1800DB74
#define  HDMIRX_2P1_PHY_P1_G1_reg_addr                                           "0xB800DB74"
#define  HDMIRX_2P1_PHY_P1_G1_reg                                                0xB800DB74
#define  HDMIRX_2P1_PHY_P1_G1_inst_addr                                          "0x004B"
#define  set_HDMIRX_2P1_PHY_P1_G1_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_G1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_G1_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_G1_reg))
#define  HDMIRX_2P1_PHY_P1_G1_reg_p1_g_8_shift                                   (24)
#define  HDMIRX_2P1_PHY_P1_G1_reg_p1_g_7_shift                                   (16)
#define  HDMIRX_2P1_PHY_P1_G1_reg_p1_g_6_shift                                   (8)
#define  HDMIRX_2P1_PHY_P1_G1_reg_p1_g_5_shift                                   (0)
#define  HDMIRX_2P1_PHY_P1_G1_reg_p1_g_8_mask                                    (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_G1_reg_p1_g_7_mask                                    (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_G1_reg_p1_g_6_mask                                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_G1_reg_p1_g_5_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_G1_reg_p1_g_8(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_G1_reg_p1_g_7(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_G1_reg_p1_g_6(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_G1_reg_p1_g_5(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_G1_get_reg_p1_g_8(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_G1_get_reg_p1_g_7(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_G1_get_reg_p1_g_6(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_G1_get_reg_p1_g_5(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_G2                                                   0x1800DB78
#define  HDMIRX_2P1_PHY_P1_G2_reg_addr                                           "0xB800DB78"
#define  HDMIRX_2P1_PHY_P1_G2_reg                                                0xB800DB78
#define  HDMIRX_2P1_PHY_P1_G2_inst_addr                                          "0x004C"
#define  set_HDMIRX_2P1_PHY_P1_G2_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_G2_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_G2_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_G2_reg))
#define  HDMIRX_2P1_PHY_P1_G2_reg_p1_g_12_shift                                  (24)
#define  HDMIRX_2P1_PHY_P1_G2_reg_p1_g_11_shift                                  (16)
#define  HDMIRX_2P1_PHY_P1_G2_reg_p1_g_10_shift                                  (8)
#define  HDMIRX_2P1_PHY_P1_G2_reg_p1_g_9_shift                                   (0)
#define  HDMIRX_2P1_PHY_P1_G2_reg_p1_g_12_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_G2_reg_p1_g_11_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_G2_reg_p1_g_10_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_G2_reg_p1_g_9_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_G2_reg_p1_g_12(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_G2_reg_p1_g_11(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_G2_reg_p1_g_10(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_G2_reg_p1_g_9(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_G2_get_reg_p1_g_12(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_G2_get_reg_p1_g_11(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_G2_get_reg_p1_g_10(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_G2_get_reg_p1_g_9(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_G3                                                   0x1800DB7C
#define  HDMIRX_2P1_PHY_P1_G3_reg_addr                                           "0xB800DB7C"
#define  HDMIRX_2P1_PHY_P1_G3_reg                                                0xB800DB7C
#define  HDMIRX_2P1_PHY_P1_G3_inst_addr                                          "0x004D"
#define  set_HDMIRX_2P1_PHY_P1_G3_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_G3_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_G3_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_G3_reg))
#define  HDMIRX_2P1_PHY_P1_G3_reg_p1_g_16_shift                                  (24)
#define  HDMIRX_2P1_PHY_P1_G3_reg_p1_g_15_shift                                  (16)
#define  HDMIRX_2P1_PHY_P1_G3_reg_p1_g_14_shift                                  (8)
#define  HDMIRX_2P1_PHY_P1_G3_reg_p1_g_13_shift                                  (0)
#define  HDMIRX_2P1_PHY_P1_G3_reg_p1_g_16_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_G3_reg_p1_g_15_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_G3_reg_p1_g_14_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_G3_reg_p1_g_13_mask                                   (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_G3_reg_p1_g_16(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_G3_reg_p1_g_15(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_G3_reg_p1_g_14(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_G3_reg_p1_g_13(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_G3_get_reg_p1_g_16(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_G3_get_reg_p1_g_15(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_G3_get_reg_p1_g_14(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_G3_get_reg_p1_g_13(data)                              (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_G4                                                   0x1800DB80
#define  HDMIRX_2P1_PHY_P1_G4_reg_addr                                           "0xB800DB80"
#define  HDMIRX_2P1_PHY_P1_G4_reg                                                0xB800DB80
#define  HDMIRX_2P1_PHY_P1_G4_inst_addr                                          "0x004E"
#define  set_HDMIRX_2P1_PHY_P1_G4_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_G4_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_G4_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_G4_reg))
#define  HDMIRX_2P1_PHY_P1_G4_reg_p1_g_20_shift                                  (24)
#define  HDMIRX_2P1_PHY_P1_G4_reg_p1_g_19_shift                                  (16)
#define  HDMIRX_2P1_PHY_P1_G4_reg_p1_g_18_shift                                  (8)
#define  HDMIRX_2P1_PHY_P1_G4_reg_p1_g_17_shift                                  (0)
#define  HDMIRX_2P1_PHY_P1_G4_reg_p1_g_20_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_G4_reg_p1_g_19_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_G4_reg_p1_g_18_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_G4_reg_p1_g_17_mask                                   (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_G4_reg_p1_g_20(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_G4_reg_p1_g_19(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_G4_reg_p1_g_18(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_G4_reg_p1_g_17(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_G4_get_reg_p1_g_20(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_G4_get_reg_p1_g_19(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_G4_get_reg_p1_g_18(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_G4_get_reg_p1_g_17(data)                              (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_G0                                              0x1800DB84
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_reg_addr                                      "0xB800DB84"
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_reg                                           0xB800DB84
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_inst_addr                                     "0x004F"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_G0_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_G0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_G0_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_G0_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_reg_p1_acdr_g_4_shift                         (24)
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_reg_p1_acdr_g_3_shift                         (16)
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_reg_p1_acdr_g_2_shift                         (8)
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_reg_p1_acdr_g_1_shift                         (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_reg_p1_acdr_g_4_mask                          (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_reg_p1_acdr_g_3_mask                          (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_reg_p1_acdr_g_2_mask                          (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_reg_p1_acdr_g_1_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_reg_p1_acdr_g_4(data)                         (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_reg_p1_acdr_g_3(data)                         (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_reg_p1_acdr_g_2(data)                         (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_reg_p1_acdr_g_1(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_get_reg_p1_acdr_g_4(data)                     ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_get_reg_p1_acdr_g_3(data)                     ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_get_reg_p1_acdr_g_2(data)                     ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_ACDR_G0_get_reg_p1_acdr_g_1(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_G1                                              0x1800DB88
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_reg_addr                                      "0xB800DB88"
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_reg                                           0xB800DB88
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_inst_addr                                     "0x0050"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_G1_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_G1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_G1_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_G1_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_reg_p1_acdr_g_8_shift                         (24)
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_reg_p1_acdr_g_7_shift                         (16)
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_reg_p1_acdr_g_6_shift                         (8)
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_reg_p1_acdr_g_5_shift                         (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_reg_p1_acdr_g_8_mask                          (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_reg_p1_acdr_g_7_mask                          (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_reg_p1_acdr_g_6_mask                          (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_reg_p1_acdr_g_5_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_reg_p1_acdr_g_8(data)                         (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_reg_p1_acdr_g_7(data)                         (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_reg_p1_acdr_g_6(data)                         (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_reg_p1_acdr_g_5(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_get_reg_p1_acdr_g_8(data)                     ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_get_reg_p1_acdr_g_7(data)                     ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_get_reg_p1_acdr_g_6(data)                     ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_ACDR_G1_get_reg_p1_acdr_g_5(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_G2                                              0x1800DB8C
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_reg_addr                                      "0xB800DB8C"
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_reg                                           0xB800DB8C
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_inst_addr                                     "0x0051"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_G2_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_G2_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_G2_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_G2_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_reg_p1_acdr_g_12_shift                        (24)
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_reg_p1_acdr_g_11_shift                        (16)
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_reg_p1_acdr_g_10_shift                        (8)
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_reg_p1_acdr_g_9_shift                         (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_reg_p1_acdr_g_12_mask                         (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_reg_p1_acdr_g_11_mask                         (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_reg_p1_acdr_g_10_mask                         (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_reg_p1_acdr_g_9_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_reg_p1_acdr_g_12(data)                        (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_reg_p1_acdr_g_11(data)                        (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_reg_p1_acdr_g_10(data)                        (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_reg_p1_acdr_g_9(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_get_reg_p1_acdr_g_12(data)                    ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_get_reg_p1_acdr_g_11(data)                    ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_get_reg_p1_acdr_g_10(data)                    ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_ACDR_G2_get_reg_p1_acdr_g_9(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_R0                                                   0x1800DB90
#define  HDMIRX_2P1_PHY_P1_R0_reg_addr                                           "0xB800DB90"
#define  HDMIRX_2P1_PHY_P1_R0_reg                                                0xB800DB90
#define  HDMIRX_2P1_PHY_P1_R0_inst_addr                                          "0x0052"
#define  set_HDMIRX_2P1_PHY_P1_R0_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_R0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_R0_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_R0_reg))
#define  HDMIRX_2P1_PHY_P1_R0_reg_p1_r_4_shift                                   (24)
#define  HDMIRX_2P1_PHY_P1_R0_reg_p1_r_3_shift                                   (16)
#define  HDMIRX_2P1_PHY_P1_R0_reg_p1_r_2_shift                                   (8)
#define  HDMIRX_2P1_PHY_P1_R0_reg_p1_r_1_shift                                   (0)
#define  HDMIRX_2P1_PHY_P1_R0_reg_p1_r_4_mask                                    (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_R0_reg_p1_r_3_mask                                    (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_R0_reg_p1_r_2_mask                                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_R0_reg_p1_r_1_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_R0_reg_p1_r_4(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_R0_reg_p1_r_3(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_R0_reg_p1_r_2(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_R0_reg_p1_r_1(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_R0_get_reg_p1_r_4(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_R0_get_reg_p1_r_3(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_R0_get_reg_p1_r_2(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_R0_get_reg_p1_r_1(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_R1                                                   0x1800DB94
#define  HDMIRX_2P1_PHY_P1_R1_reg_addr                                           "0xB800DB94"
#define  HDMIRX_2P1_PHY_P1_R1_reg                                                0xB800DB94
#define  HDMIRX_2P1_PHY_P1_R1_inst_addr                                          "0x0053"
#define  set_HDMIRX_2P1_PHY_P1_R1_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_R1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_R1_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_R1_reg))
#define  HDMIRX_2P1_PHY_P1_R1_reg_p1_r_8_shift                                   (24)
#define  HDMIRX_2P1_PHY_P1_R1_reg_p1_r_7_shift                                   (16)
#define  HDMIRX_2P1_PHY_P1_R1_reg_p1_r_6_shift                                   (8)
#define  HDMIRX_2P1_PHY_P1_R1_reg_p1_r_5_shift                                   (0)
#define  HDMIRX_2P1_PHY_P1_R1_reg_p1_r_8_mask                                    (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_R1_reg_p1_r_7_mask                                    (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_R1_reg_p1_r_6_mask                                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_R1_reg_p1_r_5_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_R1_reg_p1_r_8(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_R1_reg_p1_r_7(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_R1_reg_p1_r_6(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_R1_reg_p1_r_5(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_R1_get_reg_p1_r_8(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_R1_get_reg_p1_r_7(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_R1_get_reg_p1_r_6(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_R1_get_reg_p1_r_5(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_R2                                                   0x1800DB98
#define  HDMIRX_2P1_PHY_P1_R2_reg_addr                                           "0xB800DB98"
#define  HDMIRX_2P1_PHY_P1_R2_reg                                                0xB800DB98
#define  HDMIRX_2P1_PHY_P1_R2_inst_addr                                          "0x0054"
#define  set_HDMIRX_2P1_PHY_P1_R2_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_R2_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_R2_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_R2_reg))
#define  HDMIRX_2P1_PHY_P1_R2_reg_p1_r_12_shift                                  (24)
#define  HDMIRX_2P1_PHY_P1_R2_reg_p1_r_11_shift                                  (16)
#define  HDMIRX_2P1_PHY_P1_R2_reg_p1_r_10_shift                                  (8)
#define  HDMIRX_2P1_PHY_P1_R2_reg_p1_r_9_shift                                   (0)
#define  HDMIRX_2P1_PHY_P1_R2_reg_p1_r_12_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_R2_reg_p1_r_11_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_R2_reg_p1_r_10_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_R2_reg_p1_r_9_mask                                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_R2_reg_p1_r_12(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_R2_reg_p1_r_11(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_R2_reg_p1_r_10(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_R2_reg_p1_r_9(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_R2_get_reg_p1_r_12(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_R2_get_reg_p1_r_11(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_R2_get_reg_p1_r_10(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_R2_get_reg_p1_r_9(data)                               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_R3                                                   0x1800DB9C
#define  HDMIRX_2P1_PHY_P1_R3_reg_addr                                           "0xB800DB9C"
#define  HDMIRX_2P1_PHY_P1_R3_reg                                                0xB800DB9C
#define  HDMIRX_2P1_PHY_P1_R3_inst_addr                                          "0x0055"
#define  set_HDMIRX_2P1_PHY_P1_R3_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_R3_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_R3_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_R3_reg))
#define  HDMIRX_2P1_PHY_P1_R3_reg_p1_r_16_shift                                  (24)
#define  HDMIRX_2P1_PHY_P1_R3_reg_p1_r_15_shift                                  (16)
#define  HDMIRX_2P1_PHY_P1_R3_reg_p1_r_14_shift                                  (8)
#define  HDMIRX_2P1_PHY_P1_R3_reg_p1_r_13_shift                                  (0)
#define  HDMIRX_2P1_PHY_P1_R3_reg_p1_r_16_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_R3_reg_p1_r_15_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_R3_reg_p1_r_14_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_R3_reg_p1_r_13_mask                                   (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_R3_reg_p1_r_16(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_R3_reg_p1_r_15(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_R3_reg_p1_r_14(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_R3_reg_p1_r_13(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_R3_get_reg_p1_r_16(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_R3_get_reg_p1_r_15(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_R3_get_reg_p1_r_14(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_R3_get_reg_p1_r_13(data)                              (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_R4                                                   0x1800DBA0
#define  HDMIRX_2P1_PHY_P1_R4_reg_addr                                           "0xB800DBA0"
#define  HDMIRX_2P1_PHY_P1_R4_reg                                                0xB800DBA0
#define  HDMIRX_2P1_PHY_P1_R4_inst_addr                                          "0x0056"
#define  set_HDMIRX_2P1_PHY_P1_R4_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_R4_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_R4_reg                                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_R4_reg))
#define  HDMIRX_2P1_PHY_P1_R4_reg_p1_r_20_shift                                  (24)
#define  HDMIRX_2P1_PHY_P1_R4_reg_p1_r_19_shift                                  (16)
#define  HDMIRX_2P1_PHY_P1_R4_reg_p1_r_18_shift                                  (8)
#define  HDMIRX_2P1_PHY_P1_R4_reg_p1_r_17_shift                                  (0)
#define  HDMIRX_2P1_PHY_P1_R4_reg_p1_r_20_mask                                   (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_R4_reg_p1_r_19_mask                                   (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_R4_reg_p1_r_18_mask                                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_R4_reg_p1_r_17_mask                                   (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_R4_reg_p1_r_20(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_R4_reg_p1_r_19(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_R4_reg_p1_r_18(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_R4_reg_p1_r_17(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_R4_get_reg_p1_r_20(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_R4_get_reg_p1_r_19(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_R4_get_reg_p1_r_18(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_R4_get_reg_p1_r_17(data)                              (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_R0                                              0x1800DBA4
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_reg_addr                                      "0xB800DBA4"
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_reg                                           0xB800DBA4
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_inst_addr                                     "0x0057"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_R0_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_R0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_R0_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_R0_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_reg_p1_acdr_r_4_shift                         (24)
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_reg_p1_acdr_r_3_shift                         (16)
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_reg_p1_acdr_r_2_shift                         (8)
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_reg_p1_acdr_r_1_shift                         (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_reg_p1_acdr_r_4_mask                          (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_reg_p1_acdr_r_3_mask                          (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_reg_p1_acdr_r_2_mask                          (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_reg_p1_acdr_r_1_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_reg_p1_acdr_r_4(data)                         (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_reg_p1_acdr_r_3(data)                         (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_reg_p1_acdr_r_2(data)                         (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_reg_p1_acdr_r_1(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_get_reg_p1_acdr_r_4(data)                     ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_get_reg_p1_acdr_r_3(data)                     ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_get_reg_p1_acdr_r_2(data)                     ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_ACDR_R0_get_reg_p1_acdr_r_1(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_R1                                              0x1800DBA8
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_reg_addr                                      "0xB800DBA8"
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_reg                                           0xB800DBA8
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_inst_addr                                     "0x0058"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_R1_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_R1_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_R1_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_R1_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_reg_p1_acdr_r_8_shift                         (24)
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_reg_p1_acdr_r_7_shift                         (16)
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_reg_p1_acdr_r_6_shift                         (8)
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_reg_p1_acdr_r_5_shift                         (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_reg_p1_acdr_r_8_mask                          (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_reg_p1_acdr_r_7_mask                          (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_reg_p1_acdr_r_6_mask                          (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_reg_p1_acdr_r_5_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_reg_p1_acdr_r_8(data)                         (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_reg_p1_acdr_r_7(data)                         (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_reg_p1_acdr_r_6(data)                         (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_reg_p1_acdr_r_5(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_get_reg_p1_acdr_r_8(data)                     ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_get_reg_p1_acdr_r_7(data)                     ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_get_reg_p1_acdr_r_6(data)                     ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_ACDR_R1_get_reg_p1_acdr_r_5(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_R2                                              0x1800DBAC
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_reg_addr                                      "0xB800DBAC"
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_reg                                           0xB800DBAC
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_inst_addr                                     "0x0059"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_R2_reg(data)                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_R2_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_R2_reg                                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_R2_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_reg_p1_acdr_r_12_shift                        (24)
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_reg_p1_acdr_r_11_shift                        (16)
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_reg_p1_acdr_r_10_shift                        (8)
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_reg_p1_acdr_r_9_shift                         (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_reg_p1_acdr_r_12_mask                         (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_reg_p1_acdr_r_11_mask                         (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_reg_p1_acdr_r_10_mask                         (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_reg_p1_acdr_r_9_mask                          (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_reg_p1_acdr_r_12(data)                        (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_reg_p1_acdr_r_11(data)                        (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_reg_p1_acdr_r_10(data)                        (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_reg_p1_acdr_r_9(data)                         (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_get_reg_p1_acdr_r_12(data)                    ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_get_reg_p1_acdr_r_11(data)                    ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_get_reg_p1_acdr_r_10(data)                    ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_ACDR_R2_get_reg_p1_acdr_r_9(data)                     (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST                                          0x1800DBB0
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_reg_addr                                  "0xB800DBB0"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_reg                                       0xB800DBB0
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_inst_addr                                 "0x005A"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_RST_reg(data)                             (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_RST_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_RST_reg                                   (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_RST_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_p1_ck_demux_rstb_shift                    (3)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_p1_r_demux_rstb_shift                     (2)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_p1_g_demux_rstb_shift                     (1)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_p1_b_demux_rstb_shift                     (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_p1_ck_demux_rstb_mask                     (0x00000008)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_p1_r_demux_rstb_mask                      (0x00000004)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_p1_g_demux_rstb_mask                      (0x00000002)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_p1_b_demux_rstb_mask                      (0x00000001)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_p1_ck_demux_rstb(data)                    (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_p1_r_demux_rstb(data)                     (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_p1_g_demux_rstb(data)                     (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_p1_b_demux_rstb(data)                     (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_get_p1_ck_demux_rstb(data)                ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_get_p1_r_demux_rstb(data)                 ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_get_p1_g_demux_rstb(data)                 ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_RST_get_p1_b_demux_rstb(data)                 (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG                                    0x1800DBC0
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_addr                            "0xB800DBC0"
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg                                 0xB800DBC0
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_inst_addr                           "0x005B"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg(data)                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg                             (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_icp_sel_shift     (28)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_lfrs_sel_shift    (25)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_cs_cap_sel_shift  (23)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_cp_cap_sel_shift  (21)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_vco_fine_i_shift  (17)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_en_lpf_r_shift    (12)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_en_lpf_c_shift    (11)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_en_idn_shift      (10)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_sel_idn_shift     (6)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reserved_pll_p1_acdr_r_shift        (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_icp_sel_mask      (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_lfrs_sel_mask     (0x0E000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_cs_cap_sel_mask   (0x01800000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_cp_cap_sel_mask   (0x00600000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_vco_fine_i_mask   (0x001E0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_en_lpf_r_mask     (0x00001000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_en_lpf_c_mask     (0x00000800)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_en_idn_mask       (0x00000400)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_sel_idn_mask      (0x000003C0)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reserved_pll_p1_acdr_r_mask         (0x0000003F)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_icp_sel(data)     (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_lfrs_sel(data)    (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_cs_cap_sel(data)  (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_cp_cap_sel(data)  (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_vco_fine_i(data)  (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_en_lpf_r(data)    (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_en_lpf_c(data)    (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_en_idn(data)      (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reg_pll_p1_acdr_r_sel_idn(data)     (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_reserved_pll_p1_acdr_r(data)        (0x0000003F&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_get_reg_pll_p1_acdr_r_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_get_reg_pll_p1_acdr_r_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_get_reg_pll_p1_acdr_r_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_get_reg_pll_p1_acdr_r_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_get_reg_pll_p1_acdr_r_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_get_reg_pll_p1_acdr_r_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_get_reg_pll_p1_acdr_r_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_get_reg_pll_p1_acdr_r_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_get_reg_pll_p1_acdr_r_en_idn(data)  ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_get_reg_pll_p1_acdr_r_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_PLL_CONFIG_get_reserved_pll_p1_acdr_r(data)    (0x0000003F&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG                                    0x1800DBC4
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_addr                            "0xB800DBC4"
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg                                 0xB800DBC4
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_inst_addr                           "0x005C"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg(data)                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg                             (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_icp_sel_shift     (28)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_lfrs_sel_shift    (25)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_cs_cap_sel_shift  (23)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_cp_cap_sel_shift  (21)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_vco_fine_i_shift  (17)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_en_lpf_r_shift    (12)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_en_lpf_c_shift    (11)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_en_idn_shift      (10)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_sel_idn_shift     (6)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reserved_pll_p1_acdr_g_shift        (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_icp_sel_mask      (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_lfrs_sel_mask     (0x0E000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_cs_cap_sel_mask   (0x01800000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_cp_cap_sel_mask   (0x00600000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_vco_fine_i_mask   (0x001E0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_en_lpf_r_mask     (0x00001000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_en_lpf_c_mask     (0x00000800)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_en_idn_mask       (0x00000400)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_sel_idn_mask      (0x000003C0)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reserved_pll_p1_acdr_g_mask         (0x0000003F)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_icp_sel(data)     (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_lfrs_sel(data)    (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_cs_cap_sel(data)  (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_cp_cap_sel(data)  (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_vco_fine_i(data)  (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_en_lpf_r(data)    (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_en_lpf_c(data)    (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_en_idn(data)      (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reg_pll_p1_acdr_g_sel_idn(data)     (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_reserved_pll_p1_acdr_g(data)        (0x0000003F&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_get_reg_pll_p1_acdr_g_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_get_reg_pll_p1_acdr_g_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_get_reg_pll_p1_acdr_g_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_get_reg_pll_p1_acdr_g_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_get_reg_pll_p1_acdr_g_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_get_reg_pll_p1_acdr_g_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_get_reg_pll_p1_acdr_g_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_get_reg_pll_p1_acdr_g_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_get_reg_pll_p1_acdr_g_en_idn(data)  ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_get_reg_pll_p1_acdr_g_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_PLL_CONFIG_get_reserved_pll_p1_acdr_g(data)    (0x0000003F&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG                                    0x1800DBC8
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_addr                            "0xB800DBC8"
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg                                 0xB800DBC8
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_inst_addr                           "0x005D"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg(data)                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg                             (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_icp_sel_shift     (28)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_lfrs_sel_shift    (25)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_cs_cap_sel_shift  (23)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_cp_cap_sel_shift  (21)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_vco_fine_i_shift  (17)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_en_lpf_r_shift    (12)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_en_lpf_c_shift    (11)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_en_idn_shift      (10)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_sel_idn_shift     (6)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reserved_pll_p1_acdr_b_shift        (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_icp_sel_mask      (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_lfrs_sel_mask     (0x0E000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_cs_cap_sel_mask   (0x01800000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_cp_cap_sel_mask   (0x00600000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_vco_fine_i_mask   (0x001E0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_en_lpf_r_mask     (0x00001000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_en_lpf_c_mask     (0x00000800)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_en_idn_mask       (0x00000400)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_sel_idn_mask      (0x000003C0)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reserved_pll_p1_acdr_b_mask         (0x0000003F)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_icp_sel(data)     (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_lfrs_sel(data)    (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_cs_cap_sel(data)  (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_cp_cap_sel(data)  (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_vco_fine_i(data)  (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_en_lpf_r(data)    (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_en_lpf_c(data)    (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_en_idn(data)      (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reg_pll_p1_acdr_b_sel_idn(data)     (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_reserved_pll_p1_acdr_b(data)        (0x0000003F&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_get_reg_pll_p1_acdr_b_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_get_reg_pll_p1_acdr_b_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_get_reg_pll_p1_acdr_b_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_get_reg_pll_p1_acdr_b_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_get_reg_pll_p1_acdr_b_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_get_reg_pll_p1_acdr_b_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_get_reg_pll_p1_acdr_b_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_get_reg_pll_p1_acdr_b_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_get_reg_pll_p1_acdr_b_en_idn(data)  ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_get_reg_pll_p1_acdr_b_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_PLL_CONFIG_get_reserved_pll_p1_acdr_b(data)    (0x0000003F&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG                                   0x1800DBCC
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_addr                           "0xB800DBCC"
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg                                0xB800DBCC
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_inst_addr                          "0x005E"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg(data)                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_icp_sel_shift   (28)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_lfrs_sel_shift  (25)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_cs_cap_sel_shift (23)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_cp_cap_sel_shift (21)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_vco_fine_i_shift (17)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_en_lpf_r_shift  (12)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_en_lpf_c_shift  (11)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_en_idn_shift    (10)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_sel_idn_shift   (6)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reserved_pll_p1_acdr_ck_shift      (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_icp_sel_mask    (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_lfrs_sel_mask   (0x0E000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_cs_cap_sel_mask (0x01800000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_cp_cap_sel_mask (0x00600000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_vco_fine_i_mask (0x001E0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_en_lpf_r_mask   (0x00001000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_en_lpf_c_mask   (0x00000800)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_en_idn_mask     (0x00000400)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_sel_idn_mask    (0x000003C0)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reserved_pll_p1_acdr_ck_mask       (0x0000003F)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_icp_sel(data)   (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_lfrs_sel(data)  (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_cs_cap_sel(data) (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_cp_cap_sel(data) (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_vco_fine_i(data) (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_en_lpf_r(data)  (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_en_lpf_c(data)  (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_en_idn(data)    (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reg_pll_p1_acdr_ck_sel_idn(data)   (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_reserved_pll_p1_acdr_ck(data)      (0x0000003F&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_get_reg_pll_p1_acdr_ck_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_get_reg_pll_p1_acdr_ck_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_get_reg_pll_p1_acdr_ck_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_get_reg_pll_p1_acdr_ck_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_get_reg_pll_p1_acdr_ck_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_get_reg_pll_p1_acdr_ck_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_get_reg_pll_p1_acdr_ck_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_get_reg_pll_p1_acdr_ck_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_get_reg_pll_p1_acdr_ck_en_idn(data) ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_get_reg_pll_p1_acdr_ck_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_PLL_CONFIG_get_reserved_pll_p1_acdr_ck(data)  (0x0000003F&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG                                    0x1800DBD0
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_addr                            "0xB800DBD0"
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg                                 0xB800DBD0
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_inst_addr                           "0x005F"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg(data)                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg                             (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_icp_sel_shift     (28)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_lfrs_sel_shift    (25)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_cs_cap_sel_shift  (23)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_cp_cap_sel_shift  (21)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_vco_fine_i_shift  (17)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_en_lpf_r_shift    (12)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_en_lpf_c_shift    (11)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_en_idn_shift      (10)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_sel_idn_shift     (6)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reserved_cdr_p1_acdr_r_shift        (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_icp_sel_mask      (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_lfrs_sel_mask     (0x0E000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_cs_cap_sel_mask   (0x01800000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_cp_cap_sel_mask   (0x00600000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_vco_fine_i_mask   (0x001E0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_en_lpf_r_mask     (0x00001000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_en_lpf_c_mask     (0x00000800)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_en_idn_mask       (0x00000400)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_sel_idn_mask      (0x000003C0)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reserved_cdr_p1_acdr_r_mask         (0x0000003F)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_icp_sel(data)     (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_lfrs_sel(data)    (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_cs_cap_sel(data)  (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_cp_cap_sel(data)  (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_vco_fine_i(data)  (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_en_lpf_r(data)    (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_en_lpf_c(data)    (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_en_idn(data)      (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reg_cdr_p1_acdr_r_sel_idn(data)     (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_reserved_cdr_p1_acdr_r(data)        (0x0000003F&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_get_reg_cdr_p1_acdr_r_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_get_reg_cdr_p1_acdr_r_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_get_reg_cdr_p1_acdr_r_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_get_reg_cdr_p1_acdr_r_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_get_reg_cdr_p1_acdr_r_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_get_reg_cdr_p1_acdr_r_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_get_reg_cdr_p1_acdr_r_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_get_reg_cdr_p1_acdr_r_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_get_reg_cdr_p1_acdr_r_en_idn(data)  ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_get_reg_cdr_p1_acdr_r_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_CDR_CONFIG_get_reserved_cdr_p1_acdr_r(data)    (0x0000003F&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG                                    0x1800DBD4
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_addr                            "0xB800DBD4"
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg                                 0xB800DBD4
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_inst_addr                           "0x0060"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg(data)                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg                             (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_icp_sel_shift     (28)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_lfrs_sel_shift    (25)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_cs_cap_sel_shift  (23)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_cp_cap_sel_shift  (21)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_vco_fine_i_shift  (17)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_en_lpf_r_shift    (12)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_en_lpf_c_shift    (11)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_en_idn_shift      (10)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_sel_idn_shift     (6)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reserved_cdr_p1_acdr_g_shift        (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_icp_sel_mask      (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_lfrs_sel_mask     (0x0E000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_cs_cap_sel_mask   (0x01800000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_cp_cap_sel_mask   (0x00600000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_vco_fine_i_mask   (0x001E0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_en_lpf_r_mask     (0x00001000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_en_lpf_c_mask     (0x00000800)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_en_idn_mask       (0x00000400)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_sel_idn_mask      (0x000003C0)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reserved_cdr_p1_acdr_g_mask         (0x0000003F)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_icp_sel(data)     (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_lfrs_sel(data)    (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_cs_cap_sel(data)  (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_cp_cap_sel(data)  (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_vco_fine_i(data)  (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_en_lpf_r(data)    (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_en_lpf_c(data)    (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_en_idn(data)      (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reg_cdr_p1_acdr_g_sel_idn(data)     (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_reserved_cdr_p1_acdr_g(data)        (0x0000003F&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_get_reg_cdr_p1_acdr_g_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_get_reg_cdr_p1_acdr_g_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_get_reg_cdr_p1_acdr_g_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_get_reg_cdr_p1_acdr_g_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_get_reg_cdr_p1_acdr_g_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_get_reg_cdr_p1_acdr_g_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_get_reg_cdr_p1_acdr_g_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_get_reg_cdr_p1_acdr_g_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_get_reg_cdr_p1_acdr_g_en_idn(data)  ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_get_reg_cdr_p1_acdr_g_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_CDR_CONFIG_get_reserved_cdr_p1_acdr_g(data)    (0x0000003F&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG                                    0x1800DBD8
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_addr                            "0xB800DBD8"
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg                                 0xB800DBD8
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_inst_addr                           "0x0061"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg(data)                       (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg                             (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_icp_sel_shift     (28)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_lfrs_sel_shift    (25)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_cs_cap_sel_shift  (23)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_cp_cap_sel_shift  (21)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_vco_fine_i_shift  (17)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_en_lpf_r_shift    (12)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_en_lpf_c_shift    (11)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_en_idn_shift      (10)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_sel_idn_shift     (6)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reserved_cdr_p1_acdr_b_shift        (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_icp_sel_mask      (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_lfrs_sel_mask     (0x0E000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_cs_cap_sel_mask   (0x01800000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_cp_cap_sel_mask   (0x00600000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_vco_fine_i_mask   (0x001E0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_en_lpf_r_mask     (0x00001000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_en_lpf_c_mask     (0x00000800)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_en_idn_mask       (0x00000400)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_sel_idn_mask      (0x000003C0)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reserved_cdr_p1_acdr_b_mask         (0x0000003F)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_icp_sel(data)     (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_lfrs_sel(data)    (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_cs_cap_sel(data)  (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_cp_cap_sel(data)  (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_vco_fine_i(data)  (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_en_lpf_r(data)    (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_en_lpf_c(data)    (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_en_idn(data)      (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reg_cdr_p1_acdr_b_sel_idn(data)     (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_reserved_cdr_p1_acdr_b(data)        (0x0000003F&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_get_reg_cdr_p1_acdr_b_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_get_reg_cdr_p1_acdr_b_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_get_reg_cdr_p1_acdr_b_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_get_reg_cdr_p1_acdr_b_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_get_reg_cdr_p1_acdr_b_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_get_reg_cdr_p1_acdr_b_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_get_reg_cdr_p1_acdr_b_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_get_reg_cdr_p1_acdr_b_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_get_reg_cdr_p1_acdr_b_en_idn(data)  ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_get_reg_cdr_p1_acdr_b_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_CDR_CONFIG_get_reserved_cdr_p1_acdr_b(data)    (0x0000003F&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG                                   0x1800DBDC
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_addr                           "0xB800DBDC"
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg                                0xB800DBDC
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_inst_addr                          "0x0062"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg(data)                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_icp_sel_shift   (28)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_lfrs_sel_shift  (25)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_cs_cap_sel_shift (23)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_cp_cap_sel_shift (21)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_vco_fine_i_shift (17)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_en_lpf_r_shift  (12)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_en_lpf_c_shift  (11)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_en_idn_shift    (10)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_sel_idn_shift   (6)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reserved_cdr_p1_acdr_ck_shift      (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_icp_sel_mask    (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_lfrs_sel_mask   (0x0E000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_cs_cap_sel_mask (0x01800000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_cp_cap_sel_mask (0x00600000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_vco_fine_i_mask (0x001E0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_en_lpf_r_mask   (0x00001000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_en_lpf_c_mask   (0x00000800)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_en_idn_mask     (0x00000400)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_sel_idn_mask    (0x000003C0)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reserved_cdr_p1_acdr_ck_mask       (0x0000003F)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_icp_sel(data)   (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_lfrs_sel(data)  (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_cs_cap_sel(data) (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_cp_cap_sel(data) (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_vco_fine_i(data) (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_en_lpf_r(data)  (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_en_lpf_c(data)  (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_en_idn(data)    (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reg_cdr_p1_acdr_ck_sel_idn(data)   (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_reserved_cdr_p1_acdr_ck(data)      (0x0000003F&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_get_reg_cdr_p1_acdr_ck_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_get_reg_cdr_p1_acdr_ck_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_get_reg_cdr_p1_acdr_ck_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_get_reg_cdr_p1_acdr_ck_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_get_reg_cdr_p1_acdr_ck_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_get_reg_cdr_p1_acdr_ck_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_get_reg_cdr_p1_acdr_ck_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_get_reg_cdr_p1_acdr_ck_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_get_reg_cdr_p1_acdr_ck_en_idn(data) ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_get_reg_cdr_p1_acdr_ck_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_CDR_CONFIG_get_reserved_cdr_p1_acdr_ck(data)  (0x0000003F&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG                                 0x1800DBE0
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_addr                         "0xB800DBE0"
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg                              0xB800DBE0
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_inst_addr                        "0x0063"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg(data)                    (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_icp_sel_shift (28)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_lfrs_sel_shift (25)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_cs_cap_sel_shift (23)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_cp_cap_sel_shift (21)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_vco_fine_i_shift (17)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_en_lpf_r_shift (12)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_en_lpf_c_shift (11)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_en_idn_shift (10)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_sel_idn_shift (6)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_p1_r_pll_to_acdr_manual_en_shift (5)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_p1_r_pll_to_acdr_rdy_manual_shift (4)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reserved_manual_p1_acdr_r_shift  (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_icp_sel_mask (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_lfrs_sel_mask (0x0E000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_cs_cap_sel_mask (0x01800000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_cp_cap_sel_mask (0x00600000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_vco_fine_i_mask (0x001E0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_en_lpf_r_mask (0x00001000)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_en_lpf_c_mask (0x00000800)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_en_idn_mask (0x00000400)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_sel_idn_mask (0x000003C0)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_p1_r_pll_to_acdr_manual_en_mask (0x00000020)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_p1_r_pll_to_acdr_rdy_manual_mask (0x00000010)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reserved_manual_p1_acdr_r_mask   (0x0000000F)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_icp_sel(data) (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_lfrs_sel(data) (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_cs_cap_sel(data) (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_cp_cap_sel(data) (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_vco_fine_i(data) (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_en_lpf_r(data) (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_en_lpf_c(data) (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_en_idn(data) (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_manual_p1_acdr_r_sel_idn(data) (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_p1_r_pll_to_acdr_manual_en(data) (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reg_p1_r_pll_to_acdr_rdy_manual(data) (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_reserved_manual_p1_acdr_r(data)  (0x0000000F&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_get_reg_manual_p1_acdr_r_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_get_reg_manual_p1_acdr_r_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_get_reg_manual_p1_acdr_r_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_get_reg_manual_p1_acdr_r_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_get_reg_manual_p1_acdr_r_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_get_reg_manual_p1_acdr_r_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_get_reg_manual_p1_acdr_r_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_get_reg_manual_p1_acdr_r_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_get_reg_manual_p1_acdr_r_en_idn(data) ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_get_reg_manual_p1_acdr_r_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_get_reg_p1_r_pll_to_acdr_manual_en(data) ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_get_reg_p1_r_pll_to_acdr_rdy_manual(data) ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_ACDR_R_MANUAL_CONFIG_get_reserved_manual_p1_acdr_r(data) (0x0000000F&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG                                 0x1800DBE4
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_addr                         "0xB800DBE4"
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg                              0xB800DBE4
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_inst_addr                        "0x0064"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg(data)                    (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_icp_sel_shift (28)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_lfrs_sel_shift (25)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_cs_cap_sel_shift (23)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_cp_cap_sel_shift (21)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_vco_fine_i_shift (17)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_en_lpf_r_shift (12)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_en_lpf_c_shift (11)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_en_idn_shift (10)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_sel_idn_shift (6)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_p1_g_pll_to_acdr_manual_en_shift (5)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_p1_g_pll_to_acdr_rdy_manual_shift (4)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reserved_manual_p1_acdr_g_shift  (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_icp_sel_mask (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_lfrs_sel_mask (0x0E000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_cs_cap_sel_mask (0x01800000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_cp_cap_sel_mask (0x00600000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_vco_fine_i_mask (0x001E0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_en_lpf_r_mask (0x00001000)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_en_lpf_c_mask (0x00000800)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_en_idn_mask (0x00000400)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_sel_idn_mask (0x000003C0)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_p1_g_pll_to_acdr_manual_en_mask (0x00000020)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_p1_g_pll_to_acdr_rdy_manual_mask (0x00000010)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reserved_manual_p1_acdr_g_mask   (0x0000000F)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_icp_sel(data) (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_lfrs_sel(data) (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_cs_cap_sel(data) (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_cp_cap_sel(data) (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_vco_fine_i(data) (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_en_lpf_r(data) (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_en_lpf_c(data) (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_en_idn(data) (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_manual_p1_acdr_g_sel_idn(data) (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_p1_g_pll_to_acdr_manual_en(data) (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reg_p1_g_pll_to_acdr_rdy_manual(data) (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_reserved_manual_p1_acdr_g(data)  (0x0000000F&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_get_reg_manual_p1_acdr_g_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_get_reg_manual_p1_acdr_g_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_get_reg_manual_p1_acdr_g_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_get_reg_manual_p1_acdr_g_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_get_reg_manual_p1_acdr_g_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_get_reg_manual_p1_acdr_g_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_get_reg_manual_p1_acdr_g_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_get_reg_manual_p1_acdr_g_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_get_reg_manual_p1_acdr_g_en_idn(data) ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_get_reg_manual_p1_acdr_g_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_get_reg_p1_g_pll_to_acdr_manual_en(data) ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_get_reg_p1_g_pll_to_acdr_rdy_manual(data) ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_ACDR_G_MANUAL_CONFIG_get_reserved_manual_p1_acdr_g(data) (0x0000000F&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG                                 0x1800DBE8
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_addr                         "0xB800DBE8"
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg                              0xB800DBE8
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_inst_addr                        "0x0065"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg(data)                    (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_icp_sel_shift (28)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_lfrs_sel_shift (25)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_cs_cap_sel_shift (23)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_cp_cap_sel_shift (21)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_vco_fine_i_shift (17)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_en_lpf_r_shift (12)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_en_lpf_c_shift (11)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_en_idn_shift (10)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_sel_idn_shift (6)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_p1_b_pll_to_acdr_manual_en_shift (5)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_p1_b_pll_to_acdr_rdy_manual_shift (4)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reserved_manual_p1_acdr_b_shift  (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_icp_sel_mask (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_lfrs_sel_mask (0x0E000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_cs_cap_sel_mask (0x01800000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_cp_cap_sel_mask (0x00600000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_vco_fine_i_mask (0x001E0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_en_lpf_r_mask (0x00001000)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_en_lpf_c_mask (0x00000800)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_en_idn_mask (0x00000400)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_sel_idn_mask (0x000003C0)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_p1_b_pll_to_acdr_manual_en_mask (0x00000020)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_p1_b_pll_to_acdr_rdy_manual_mask (0x00000010)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reserved_manual_p1_acdr_b_mask   (0x0000000F)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_icp_sel(data) (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_lfrs_sel(data) (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_cs_cap_sel(data) (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_cp_cap_sel(data) (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_vco_fine_i(data) (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_en_lpf_r(data) (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_en_lpf_c(data) (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_en_idn(data) (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_manual_p1_acdr_b_sel_idn(data) (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_p1_b_pll_to_acdr_manual_en(data) (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reg_p1_b_pll_to_acdr_rdy_manual(data) (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_reserved_manual_p1_acdr_b(data)  (0x0000000F&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_get_reg_manual_p1_acdr_b_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_get_reg_manual_p1_acdr_b_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_get_reg_manual_p1_acdr_b_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_get_reg_manual_p1_acdr_b_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_get_reg_manual_p1_acdr_b_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_get_reg_manual_p1_acdr_b_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_get_reg_manual_p1_acdr_b_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_get_reg_manual_p1_acdr_b_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_get_reg_manual_p1_acdr_b_en_idn(data) ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_get_reg_manual_p1_acdr_b_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_get_reg_p1_b_pll_to_acdr_manual_en(data) ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_get_reg_p1_b_pll_to_acdr_rdy_manual(data) ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_ACDR_B_MANUAL_CONFIG_get_reserved_manual_p1_acdr_b(data) (0x0000000F&(data))

#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG                                0x1800DBEC
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_addr                        "0xB800DBEC"
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg                             0xB800DBEC
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_inst_addr                       "0x0066"
#define  set_HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg(data)                   (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg                         (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_icp_sel_shift (28)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_lfrs_sel_shift (25)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_cs_cap_sel_shift (23)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_cp_cap_sel_shift (21)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_vco_fine_i_shift (17)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_vco_coarse_i_shift (13)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_en_lpf_r_shift (12)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_en_lpf_c_shift (11)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_en_idn_shift (10)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_sel_idn_shift (6)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_p1_ck_pll_to_acdr_manual_en_shift (5)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_p1_ck_pll_to_acdr_rdy_manual_shift (4)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reserved_manual_p1_acdr_ck_shift (0)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_icp_sel_mask (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_lfrs_sel_mask (0x0E000000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_cs_cap_sel_mask (0x01800000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_cp_cap_sel_mask (0x00600000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_vco_fine_i_mask (0x001E0000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_vco_coarse_i_mask (0x0001E000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_en_lpf_r_mask (0x00001000)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_en_lpf_c_mask (0x00000800)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_en_idn_mask (0x00000400)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_sel_idn_mask (0x000003C0)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_p1_ck_pll_to_acdr_manual_en_mask (0x00000020)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_p1_ck_pll_to_acdr_rdy_manual_mask (0x00000010)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reserved_manual_p1_acdr_ck_mask (0x0000000F)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_icp_sel(data) (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_lfrs_sel(data) (0x0E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_cs_cap_sel(data) (0x01800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_cp_cap_sel(data) (0x00600000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_vco_fine_i(data) (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_vco_coarse_i(data) (0x0001E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_en_lpf_r(data) (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_en_lpf_c(data) (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_en_idn(data) (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_manual_p1_acdr_ck_sel_idn(data) (0x000003C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_p1_ck_pll_to_acdr_manual_en(data) (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reg_p1_ck_pll_to_acdr_rdy_manual(data) (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_reserved_manual_p1_acdr_ck(data) (0x0000000F&(data))
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p1_acdr_ck_icp_sel(data) ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p1_acdr_ck_lfrs_sel(data) ((0x0E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p1_acdr_ck_cs_cap_sel(data) ((0x01800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p1_acdr_ck_cp_cap_sel(data) ((0x00600000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p1_acdr_ck_vco_fine_i(data) ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p1_acdr_ck_vco_coarse_i(data) ((0x0001E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p1_acdr_ck_en_lpf_r(data) ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p1_acdr_ck_en_lpf_c(data) ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p1_acdr_ck_en_idn(data) ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_get_reg_manual_p1_acdr_ck_sel_idn(data) ((0x000003C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_get_reg_p1_ck_pll_to_acdr_manual_en(data) ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_get_reg_p1_ck_pll_to_acdr_rdy_manual(data) ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_ACDR_CK_MANUAL_CONFIG_get_reserved_manual_p1_acdr_ck(data) (0x0000000F&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00                                       0x1800DC00
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_addr                               "0xB800DC00"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg                                    0xB800DC00
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_inst_addr                              "0x0067"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_r_dig_rst_n_shift                   (31)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_g_dig_rst_n_shift                   (30)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_b_dig_rst_n_shift                   (29)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_r_cdr_rst_n_shift                   (28)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_g_cdr_rst_n_shift                   (27)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_b_cdr_rst_n_shift                   (26)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_cdr_ckinv_r_shift               (25)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_cdr_ckinv_g_shift               (24)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_cdr_ckinv_b_shift               (23)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_shift_inv_r_shift               (22)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_shift_inv_g_shift               (21)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_shift_inv_b_shift               (20)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_rate_sel_shift                  (17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_kd_shift                        (16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_kp_shift                        (8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_ki_shift                        (5)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_bypass_sdm_int_shift            (4)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_data_order_shift                (3)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_infifo_cnt_shift                (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_r_dig_rst_n_mask                    (0x80000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_g_dig_rst_n_mask                    (0x40000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_b_dig_rst_n_mask                    (0x20000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_r_cdr_rst_n_mask                    (0x10000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_g_cdr_rst_n_mask                    (0x08000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_b_cdr_rst_n_mask                    (0x04000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_cdr_ckinv_r_mask                (0x02000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_cdr_ckinv_g_mask                (0x01000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_cdr_ckinv_b_mask                (0x00800000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_shift_inv_r_mask                (0x00400000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_shift_inv_g_mask                (0x00200000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_shift_inv_b_mask                (0x00100000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_rate_sel_mask                   (0x000E0000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_kd_mask                         (0x00010000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_kp_mask                         (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_ki_mask                         (0x000000E0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_bypass_sdm_int_mask             (0x00000010)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_data_order_mask                 (0x00000008)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_infifo_cnt_mask                 (0x00000007)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_r_dig_rst_n(data)                   (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_g_dig_rst_n(data)                   (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_b_dig_rst_n(data)                   (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_r_cdr_rst_n(data)                   (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_g_cdr_rst_n(data)                   (0x08000000&((data)<<27))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_p0_b_cdr_rst_n(data)                   (0x04000000&((data)<<26))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_cdr_ckinv_r(data)               (0x02000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_cdr_ckinv_g(data)               (0x01000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_cdr_ckinv_b(data)               (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_shift_inv_r(data)               (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_shift_inv_g(data)               (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_shift_inv_b(data)               (0x00100000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_rate_sel(data)                  (0x000E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_kd(data)                        (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_kp(data)                        (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_ki(data)                        (0x000000E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_bypass_sdm_int(data)            (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_data_order(data)                (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_reg_p0_infifo_cnt(data)                (0x00000007&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_p0_r_dig_rst_n(data)               ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_p0_g_dig_rst_n(data)               ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_p0_b_dig_rst_n(data)               ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_p0_r_cdr_rst_n(data)               ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_p0_g_cdr_rst_n(data)               ((0x08000000&(data))>>27)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_p0_b_cdr_rst_n(data)               ((0x04000000&(data))>>26)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_reg_p0_cdr_ckinv_r(data)           ((0x02000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_reg_p0_cdr_ckinv_g(data)           ((0x01000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_reg_p0_cdr_ckinv_b(data)           ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_reg_p0_shift_inv_r(data)           ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_reg_p0_shift_inv_g(data)           ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_reg_p0_shift_inv_b(data)           ((0x00100000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_reg_p0_rate_sel(data)              ((0x000E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_reg_p0_kd(data)                    ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_reg_p0_kp(data)                    ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_reg_p0_ki(data)                    ((0x000000E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_reg_p0_bypass_sdm_int(data)        ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_reg_p0_data_order(data)            ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD00_get_reg_p0_infifo_cnt(data)            (0x00000007&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01                                       0x1800DC04
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_addr                               "0xB800DC04"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg                                    0xB800DC04
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_inst_addr                              "0x0068"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_int_init_shift                  (18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_acc2_period_shift               (8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_squ_tri_shift                   (7)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_acc2_manual_shift               (6)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_testout_sel_shift               (4)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_ercnt_en_shift                  (3)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_edge_out_shift                  (2)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_pi_m_mode_r_shift               (1)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_dyn_kp_en_shift                 (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_int_init_mask                   (0xFFFC0000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_acc2_period_mask                (0x0003FF00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_squ_tri_mask                    (0x00000080)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_acc2_manual_mask                (0x00000040)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_testout_sel_mask                (0x00000030)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_ercnt_en_mask                   (0x00000008)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_edge_out_mask                   (0x00000004)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_pi_m_mode_r_mask                (0x00000002)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_dyn_kp_en_mask                  (0x00000001)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_int_init(data)                  (0xFFFC0000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_acc2_period(data)               (0x0003FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_squ_tri(data)                   (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_acc2_manual(data)               (0x00000040&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_testout_sel(data)               (0x00000030&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_ercnt_en(data)                  (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_edge_out(data)                  (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_pi_m_mode_r(data)               (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_reg_p0_dyn_kp_en(data)                 (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_get_reg_p0_int_init(data)              ((0xFFFC0000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_get_reg_p0_acc2_period(data)           ((0x0003FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_get_reg_p0_squ_tri(data)               ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_get_reg_p0_acc2_manual(data)           ((0x00000040&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_get_reg_p0_testout_sel(data)           ((0x00000030&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_get_reg_p0_ercnt_en(data)              ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_get_reg_p0_edge_out(data)              ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_get_reg_p0_pi_m_mode_r(data)           ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD01_get_reg_p0_dyn_kp_en(data)             (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02                                       0x1800DC08
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg_addr                               "0xB800DC08"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg                                    0xB800DC08
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_inst_addr                              "0x0069"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg_p0_en_m_value_shift                (28)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg_p0_st_mode_shift                   (27)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg_p0_timer_lpf_shift                 (18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg_p0_timer_eq_shift                  (13)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg_p0_timer_ber_shift                 (8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg_p0_en_m_value_mask                 (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg_p0_st_mode_mask                    (0x08000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg_p0_timer_lpf_mask                  (0x007C0000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg_p0_timer_eq_mask                   (0x0003E000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg_p0_timer_ber_mask                  (0x00001F00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg_p0_en_m_value(data)                (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg_p0_st_mode(data)                   (0x08000000&((data)<<27))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg_p0_timer_lpf(data)                 (0x007C0000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg_p0_timer_eq(data)                  (0x0003E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_reg_p0_timer_ber(data)                 (0x00001F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_get_reg_p0_en_m_value(data)            ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_get_reg_p0_st_mode(data)               ((0x08000000&(data))>>27)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_get_reg_p0_timer_lpf(data)             ((0x007C0000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_get_reg_p0_timer_eq(data)              ((0x0003E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD02_get_reg_p0_timer_ber(data)             ((0x00001F00&(data))>>8)

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03                                       0x1800DC0C
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg_addr                               "0xB800DC0C"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg                                    0xB800DC0C
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_inst_addr                              "0x006A"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_p0_ck_dig_rst_n_shift                  (31)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_p0_ck_cdr_rst_n_shift                  (30)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg_p0_cdr_ckinv_ck_shift              (29)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg_p0_shift_inv_ck_shift              (28)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg_p0_pi_m_mode_g_shift               (27)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg_p0_pi_m_mode_b_shift               (26)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg_p0_pi_m_mode_ck_shift              (25)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_p0_ck_dig_rst_n_mask                   (0x80000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_p0_ck_cdr_rst_n_mask                   (0x40000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg_p0_cdr_ckinv_ck_mask               (0x20000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg_p0_shift_inv_ck_mask               (0x10000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg_p0_pi_m_mode_g_mask                (0x08000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg_p0_pi_m_mode_b_mask                (0x04000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg_p0_pi_m_mode_ck_mask               (0x02000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_p0_ck_dig_rst_n(data)                  (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_p0_ck_cdr_rst_n(data)                  (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg_p0_cdr_ckinv_ck(data)              (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg_p0_shift_inv_ck(data)              (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg_p0_pi_m_mode_g(data)               (0x08000000&((data)<<27))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg_p0_pi_m_mode_b(data)               (0x04000000&((data)<<26))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_reg_p0_pi_m_mode_ck(data)              (0x02000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_get_p0_ck_dig_rst_n(data)              ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_get_p0_ck_cdr_rst_n(data)              ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_get_reg_p0_cdr_ckinv_ck(data)          ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_get_reg_p0_shift_inv_ck(data)          ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_get_reg_p0_pi_m_mode_g(data)           ((0x08000000&(data))>>27)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_get_reg_p0_pi_m_mode_b(data)           ((0x04000000&(data))>>26)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD03_get_reg_p0_pi_m_mode_ck(data)          ((0x02000000&(data))>>25)

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04                                       0x1800DC10
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_reg_addr                               "0xB800DC10"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_reg                                    0xB800DC10
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_inst_addr                              "0x006B"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_st_ro_r_shift                       (24)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_en_ro_r_shift                       (20)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_st_ro_g_shift                       (14)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_en_ro_g_shift                       (10)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_st_ro_b_shift                       (4)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_en_ro_b_shift                       (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_st_ro_r_mask                        (0x1F000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_en_ro_r_mask                        (0x00F00000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_st_ro_g_mask                        (0x0007C000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_en_ro_g_mask                        (0x00003C00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_st_ro_b_mask                        (0x000001F0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_en_ro_b_mask                        (0x0000000F)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_st_ro_r(data)                       (0x1F000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_en_ro_r(data)                       (0x00F00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_st_ro_g(data)                       (0x0007C000&((data)<<14))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_en_ro_g(data)                       (0x00003C00&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_st_ro_b(data)                       (0x000001F0&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_p0_en_ro_b(data)                       (0x0000000F&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_get_p0_st_ro_r(data)                   ((0x1F000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_get_p0_en_ro_r(data)                   ((0x00F00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_get_p0_st_ro_g(data)                   ((0x0007C000&(data))>>14)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_get_p0_en_ro_g(data)                   ((0x00003C00&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_get_p0_st_ro_b(data)                   ((0x000001F0&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD04_get_p0_en_ro_b(data)                   (0x0000000F&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05                                       0x1800DC14
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_reg_addr                               "0xB800DC14"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_reg                                    0xB800DC14
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_inst_addr                              "0x006C"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_p0_er_count_r_shift                    (20)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_p0_er_count_g_shift                    (10)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_p0_er_count_b_shift                    (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_p0_er_count_r_mask                     (0x3FF00000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_p0_er_count_g_mask                     (0x000FFC00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_p0_er_count_b_mask                     (0x000003FF)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_p0_er_count_r(data)                    (0x3FF00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_p0_er_count_g(data)                    (0x000FFC00&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_p0_er_count_b(data)                    (0x000003FF&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_get_p0_er_count_r(data)                ((0x3FF00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_get_p0_er_count_g(data)                ((0x000FFC00&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD05_get_p0_er_count_b(data)                (0x000003FF&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06                                       0x1800DC18
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_reg_addr                               "0xB800DC18"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_reg                                    0xB800DC18
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_inst_addr                              "0x006D"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_p0_st_ro_ck_shift                      (14)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_p0_en_ro_ck_shift                      (10)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_p0_er_count_ck_shift                   (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_p0_st_ro_ck_mask                       (0x0007C000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_p0_en_ro_ck_mask                       (0x00003C00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_p0_er_count_ck_mask                    (0x000003FF)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_p0_st_ro_ck(data)                      (0x0007C000&((data)<<14))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_p0_en_ro_ck(data)                      (0x00003C00&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_p0_er_count_ck(data)                   (0x000003FF&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_get_p0_st_ro_ck(data)                  ((0x0007C000&(data))>>14)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_get_p0_en_ro_ck(data)                  ((0x00003C00&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD06_get_p0_er_count_ck(data)               (0x000003FF&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07                                       0x1800DC1C
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_addr                               "0xB800DC1C"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg                                    0xB800DC1C
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_inst_addr                              "0x006E"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_clk_rdy_shift            (31)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_eqen_rdy_shift           (30)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_data_rdy_shift           (29)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_pi_shift                 (28)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_data_rdy_time_shift             (24)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_en_clkout_manual_shift          (23)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_en_eqen_manual_shift            (22)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_en_data_manual_shift            (21)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_eqen_rdy_time_shift             (17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_order_shift                     (16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_pll_wd_base_time_shift          (13)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_pll_wd_en_shift                 (12)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_pll_wd_rst_wid_shift            (10)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_pll_wd_time_rdy_shift           (8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_acdr_l0_en_shift                (7)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_eqen_rdy_l0_shift        (6)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_data_rdy_l0_shift        (5)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_en_eqen_manual_l0_shift         (4)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_en_data_manual_l0_shift         (3)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_p0_pll_wd_ckrdy_ro_shift               (2)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_p0_pll_wd_rst_wc_shift                 (1)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_p0_wdog_rst_n_shift                    (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_clk_rdy_mask             (0x80000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_eqen_rdy_mask            (0x40000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_data_rdy_mask            (0x20000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_pi_mask                  (0x10000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_data_rdy_time_mask              (0x0F000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_en_clkout_manual_mask           (0x00800000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_en_eqen_manual_mask             (0x00400000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_en_data_manual_mask             (0x00200000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_eqen_rdy_time_mask              (0x001E0000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_order_mask                      (0x00010000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_pll_wd_base_time_mask           (0x0000E000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_pll_wd_en_mask                  (0x00001000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_pll_wd_rst_wid_mask             (0x00000C00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_pll_wd_time_rdy_mask            (0x00000300)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_acdr_l0_en_mask                 (0x00000080)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_eqen_rdy_l0_mask         (0x00000040)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_data_rdy_l0_mask         (0x00000020)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_en_eqen_manual_l0_mask          (0x00000010)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_en_data_manual_l0_mask          (0x00000008)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_p0_pll_wd_ckrdy_ro_mask                (0x00000004)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_p0_pll_wd_rst_wc_mask                  (0x00000002)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_p0_wdog_rst_n_mask                     (0x00000001)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_clk_rdy(data)            (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_eqen_rdy(data)           (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_data_rdy(data)           (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_pi(data)                 (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_data_rdy_time(data)             (0x0F000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_en_clkout_manual(data)          (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_en_eqen_manual(data)            (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_en_data_manual(data)            (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_eqen_rdy_time(data)             (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_order(data)                     (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_pll_wd_base_time(data)          (0x0000E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_pll_wd_en(data)                 (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_pll_wd_rst_wid(data)            (0x00000C00&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_pll_wd_time_rdy(data)           (0x00000300&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_acdr_l0_en(data)                (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_eqen_rdy_l0(data)        (0x00000040&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_bypass_data_rdy_l0(data)        (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_en_eqen_manual_l0(data)         (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_reg_p0_en_data_manual_l0(data)         (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_p0_pll_wd_ckrdy_ro(data)               (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_p0_pll_wd_rst_wc(data)                 (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_p0_wdog_rst_n(data)                    (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_bypass_clk_rdy(data)        ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_bypass_eqen_rdy(data)       ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_bypass_data_rdy(data)       ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_bypass_pi(data)             ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_data_rdy_time(data)         ((0x0F000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_en_clkout_manual(data)      ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_en_eqen_manual(data)        ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_en_data_manual(data)        ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_eqen_rdy_time(data)         ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_order(data)                 ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_pll_wd_base_time(data)      ((0x0000E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_pll_wd_en(data)             ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_pll_wd_rst_wid(data)        ((0x00000C00&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_pll_wd_time_rdy(data)       ((0x00000300&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_acdr_l0_en(data)            ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_bypass_eqen_rdy_l0(data)    ((0x00000040&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_bypass_data_rdy_l0(data)    ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_en_eqen_manual_l0(data)     ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_reg_p0_en_data_manual_l0(data)     ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_p0_pll_wd_ckrdy_ro(data)           ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_p0_pll_wd_rst_wc(data)             ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD07_get_p0_wdog_rst_n(data)                (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08                                       0x1800DC20
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_reg_addr                               "0xB800DC20"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_reg                                    0xB800DC20
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_inst_addr                              "0x006F"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_reg_p0_wd_sdm_en_shift                 (31)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_reg_p0_f_code_shift                    (16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_reg_p0_n_code_shift                    (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_reg_p0_wd_sdm_en_mask                  (0x80000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_reg_p0_f_code_mask                     (0x0FFF0000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_reg_p0_n_code_mask                     (0x000001FF)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_reg_p0_wd_sdm_en(data)                 (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_reg_p0_f_code(data)                    (0x0FFF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_reg_p0_n_code(data)                    (0x000001FF&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_get_reg_p0_wd_sdm_en(data)             ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_get_reg_p0_f_code(data)                ((0x0FFF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD08_get_reg_p0_n_code(data)                (0x000001FF&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09                                       0x1800DC24
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_addr                               "0xB800DC24"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg                                    0xB800DC24
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_inst_addr                              "0x0070"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_acdr_l3_en_shift                (14)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_eqen_rdy_l3_shift        (13)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_data_rdy_l3_shift        (12)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_eqen_manual_l3_shift         (11)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_data_manual_l3_shift         (10)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_acdr_l2_en_shift                (9)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_eqen_rdy_l2_shift        (8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_data_rdy_l2_shift        (7)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_eqen_manual_l2_shift         (6)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_data_manual_l2_shift         (5)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_acdr_l1_en_shift                (4)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_eqen_rdy_l1_shift        (3)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_data_rdy_l1_shift        (2)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_eqen_manual_l1_shift         (1)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_data_manual_l1_shift         (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_acdr_l3_en_mask                 (0x00004000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_eqen_rdy_l3_mask         (0x00002000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_data_rdy_l3_mask         (0x00001000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_eqen_manual_l3_mask          (0x00000800)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_data_manual_l3_mask          (0x00000400)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_acdr_l2_en_mask                 (0x00000200)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_eqen_rdy_l2_mask         (0x00000100)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_data_rdy_l2_mask         (0x00000080)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_eqen_manual_l2_mask          (0x00000040)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_data_manual_l2_mask          (0x00000020)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_acdr_l1_en_mask                 (0x00000010)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_eqen_rdy_l1_mask         (0x00000008)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_data_rdy_l1_mask         (0x00000004)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_eqen_manual_l1_mask          (0x00000002)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_data_manual_l1_mask          (0x00000001)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_acdr_l3_en(data)                (0x00004000&((data)<<14))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_eqen_rdy_l3(data)        (0x00002000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_data_rdy_l3(data)        (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_eqen_manual_l3(data)         (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_data_manual_l3(data)         (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_acdr_l2_en(data)                (0x00000200&((data)<<9))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_eqen_rdy_l2(data)        (0x00000100&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_data_rdy_l2(data)        (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_eqen_manual_l2(data)         (0x00000040&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_data_manual_l2(data)         (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_acdr_l1_en(data)                (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_eqen_rdy_l1(data)        (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_bypass_data_rdy_l1(data)        (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_eqen_manual_l1(data)         (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_reg_p0_en_data_manual_l1(data)         (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_get_reg_p0_acdr_l3_en(data)            ((0x00004000&(data))>>14)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_get_reg_p0_bypass_eqen_rdy_l3(data)    ((0x00002000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_get_reg_p0_bypass_data_rdy_l3(data)    ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_get_reg_p0_en_eqen_manual_l3(data)     ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_get_reg_p0_en_data_manual_l3(data)     ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_get_reg_p0_acdr_l2_en(data)            ((0x00000200&(data))>>9)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_get_reg_p0_bypass_eqen_rdy_l2(data)    ((0x00000100&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_get_reg_p0_bypass_data_rdy_l2(data)    ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_get_reg_p0_en_eqen_manual_l2(data)     ((0x00000040&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_get_reg_p0_en_data_manual_l2(data)     ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_get_reg_p0_acdr_l1_en(data)            ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_get_reg_p0_bypass_eqen_rdy_l1(data)    ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_get_reg_p0_bypass_data_rdy_l1(data)    ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_get_reg_p0_en_eqen_manual_l1(data)     ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD09_get_reg_p0_en_data_manual_l1(data)     (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00                                         0x1800DC28
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_addr                                 "0xB800DC28"
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg                                      0xB800DC28
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_inst_addr                                "0x0071"
#define  set_HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_auto_mode_shift                 (31)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_adp_en_manual_shift             (30)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_cp_en_manual_shift              (29)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_adap_eq_off_shift               (28)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_adp_time_shift                  (23)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_calib_time_shift                (20)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_calib_manual_shift              (19)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_calib_late_shift                (18)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_vco_coarse_shift                (11)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_divide_num_shift                (3)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_bypass_k_band_mode_shift        (2)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_stable_time_mode_shift          (1)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_cp2adp_en_shift                 (0)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_auto_mode_mask                  (0x80000000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_adp_en_manual_mask              (0x40000000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_cp_en_manual_mask               (0x20000000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_adap_eq_off_mask                (0x10000000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_adp_time_mask                   (0x0F800000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_calib_time_mask                 (0x00700000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_calib_manual_mask               (0x00080000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_calib_late_mask                 (0x00040000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_vco_coarse_mask                 (0x0003F800)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_divide_num_mask                 (0x000007F8)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_bypass_k_band_mode_mask         (0x00000004)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_stable_time_mode_mask           (0x00000002)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_cp2adp_en_mask                  (0x00000001)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_auto_mode(data)                 (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_adp_en_manual(data)             (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_cp_en_manual(data)              (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_adap_eq_off(data)               (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_adp_time(data)                  (0x0F800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_calib_time(data)                (0x00700000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_calib_manual(data)              (0x00080000&((data)<<19))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_calib_late(data)                (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_vco_coarse(data)                (0x0003F800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_divide_num(data)                (0x000007F8&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_bypass_k_band_mode(data)        (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_stable_time_mode(data)          (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_reg_p0_r_cp2adp_en(data)                 (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_get_reg_p0_r_auto_mode(data)             ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_get_reg_p0_r_adp_en_manual(data)         ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_get_reg_p0_r_cp_en_manual(data)          ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_get_reg_p0_r_adap_eq_off(data)           ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_get_reg_p0_r_adp_time(data)              ((0x0F800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_get_reg_p0_r_calib_time(data)            ((0x00700000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_get_reg_p0_r_calib_manual(data)          ((0x00080000&(data))>>19)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_get_reg_p0_r_calib_late(data)            ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_get_reg_p0_r_vco_coarse(data)            ((0x0003F800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_get_reg_p0_r_divide_num(data)            ((0x000007F8&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_get_reg_p0_r_bypass_k_band_mode(data)    ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_get_reg_p0_r_stable_time_mode(data)      ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD00_get_reg_p0_r_cp2adp_en(data)             (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD01                                         0x1800DC2C
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD01_reg_addr                                 "0xB800DC2C"
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD01_reg                                      0xB800DC2C
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD01_inst_addr                                "0x0072"
#define  set_HDMIRX_2P1_PHY_P0_FLD_R_REGD01_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_R_REGD01_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_R_REGD01_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_R_REGD01_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD01_reg_p0_r_cp2adp_time_shift               (28)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD01_reg_p0_r_lock_up_limit_shift             (16)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD01_reg_p0_r_lock_dn_limit_shift             (0)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD01_reg_p0_r_cp2adp_time_mask                (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD01_reg_p0_r_lock_up_limit_mask              (0x0FFF0000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD01_reg_p0_r_lock_dn_limit_mask              (0x00000FFF)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD01_reg_p0_r_cp2adp_time(data)               (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD01_reg_p0_r_lock_up_limit(data)             (0x0FFF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD01_reg_p0_r_lock_dn_limit(data)             (0x00000FFF&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD01_get_reg_p0_r_cp2adp_time(data)           ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD01_get_reg_p0_r_lock_up_limit(data)         ((0x0FFF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD01_get_reg_p0_r_lock_dn_limit(data)         (0x00000FFF&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02                                         0x1800DC30
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_addr                                 "0xB800DC30"
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg                                      0xB800DC30
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_inst_addr                                "0x0073"
#define  set_HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_cdr_cp_shift                    (12)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_cdr_r_shift                     (6)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_cdr_c_shift                     (4)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_vc_sel_shift                    (2)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_calib_reset_sel_shift           (1)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_unstable_flg_shift              (0)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_cdr_cp_mask                     (0xFFFFF000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_cdr_r_mask                      (0x00000FC0)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_cdr_c_mask                      (0x00000030)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_vc_sel_mask                     (0x0000000C)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_calib_reset_sel_mask            (0x00000002)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_unstable_flg_mask               (0x00000001)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_cdr_cp(data)                    (0xFFFFF000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_cdr_r(data)                     (0x00000FC0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_cdr_c(data)                     (0x00000030&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_vc_sel(data)                    (0x0000000C&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_calib_reset_sel(data)           (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_reg_p0_r_unstable_flg(data)              (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_get_reg_p0_r_cdr_cp(data)                ((0xFFFFF000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_get_reg_p0_r_cdr_r(data)                 ((0x00000FC0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_get_reg_p0_r_cdr_c(data)                 ((0x00000030&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_get_reg_p0_r_vc_sel(data)                ((0x0000000C&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_get_reg_p0_r_calib_reset_sel(data)       ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD02_get_reg_p0_r_unstable_flg(data)          (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03                                         0x1800DC34
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg_addr                                 "0xB800DC34"
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg                                      0xB800DC34
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_inst_addr                                "0x0074"
#define  set_HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg_p0_r_coarse_lock_up_limit_shift      (20)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg_p0_r_coarse_lock_dn_limit_shift      (8)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg_p0_r_cp_time_shift                   (3)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg_p0_r_init_time_shift                 (0)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg_p0_r_coarse_lock_up_limit_mask       (0xFFF00000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg_p0_r_coarse_lock_dn_limit_mask       (0x000FFF00)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg_p0_r_cp_time_mask                    (0x000000F8)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg_p0_r_init_time_mask                  (0x00000007)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg_p0_r_coarse_lock_up_limit(data)      (0xFFF00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg_p0_r_coarse_lock_dn_limit(data)      (0x000FFF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg_p0_r_cp_time(data)                   (0x000000F8&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_reg_p0_r_init_time(data)                 (0x00000007&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_get_reg_p0_r_coarse_lock_up_limit(data)  ((0xFFF00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_get_reg_p0_r_coarse_lock_dn_limit(data)  ((0x000FFF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_get_reg_p0_r_cp_time(data)               ((0x000000F8&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD03_get_reg_p0_r_init_time(data)             (0x00000007&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04                                         0x1800DC38
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_addr                                 "0xB800DC38"
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg                                      0xB800DC38
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_inst_addr                                "0x0075"
#define  set_HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_coarse_calib_manual_shift       (28)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_vco_coarse_manual_shift         (24)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_vco_fine_manual_shift           (20)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_xtal_24m_en_shift               (19)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_vco_fine_time_sel_shift         (17)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_bypass_coarse_k_mode_shift      (16)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_vco_coarse_init_shift           (12)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_vco_fine_init_shift             (8)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_timer_5_shift                   (7)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_timer_6_shift                   (2)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_p0_r_fld_rstb_shift                      (1)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_p0_r_acdr_fine_tune_start_shift          (0)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_coarse_calib_manual_mask        (0x10000000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_vco_coarse_manual_mask          (0x0F000000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_vco_fine_manual_mask            (0x00F00000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_xtal_24m_en_mask                (0x00080000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_vco_fine_time_sel_mask          (0x00060000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_bypass_coarse_k_mode_mask       (0x00010000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_vco_coarse_init_mask            (0x0000F000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_vco_fine_init_mask              (0x00000F00)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_timer_5_mask                    (0x00000080)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_timer_6_mask                    (0x0000007C)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_p0_r_fld_rstb_mask                       (0x00000002)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_p0_r_acdr_fine_tune_start_mask           (0x00000001)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_coarse_calib_manual(data)       (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_vco_coarse_manual(data)         (0x0F000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_vco_fine_manual(data)           (0x00F00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_xtal_24m_en(data)               (0x00080000&((data)<<19))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_vco_fine_time_sel(data)         (0x00060000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_bypass_coarse_k_mode(data)      (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_vco_coarse_init(data)           (0x0000F000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_vco_fine_init(data)             (0x00000F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_timer_5(data)                   (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_reg_p0_r_timer_6(data)                   (0x0000007C&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_p0_r_fld_rstb(data)                      (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_p0_r_acdr_fine_tune_start(data)          (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_get_reg_p0_r_coarse_calib_manual(data)   ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_get_reg_p0_r_vco_coarse_manual(data)     ((0x0F000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_get_reg_p0_r_vco_fine_manual(data)       ((0x00F00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_get_reg_p0_r_xtal_24m_en(data)           ((0x00080000&(data))>>19)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_get_reg_p0_r_vco_fine_time_sel(data)     ((0x00060000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_get_reg_p0_r_bypass_coarse_k_mode(data)  ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_get_reg_p0_r_vco_coarse_init(data)       ((0x0000F000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_get_reg_p0_r_vco_fine_init(data)         ((0x00000F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_get_reg_p0_r_timer_5(data)               ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_get_reg_p0_r_timer_6(data)               ((0x0000007C&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_get_p0_r_fld_rstb(data)                  ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD04_get_p0_r_acdr_fine_tune_start(data)      (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05                                         0x1800DC3C
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_addr                                 "0xB800DC3C"
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg                                      0xB800DC3C
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_inst_addr                                "0x0076"
#define  set_HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_start_en_manual_shift           (31)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_pfd_en_manual_shift             (30)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_pfd_time_shift                  (25)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_pfd_bypass_shift                (24)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_rxidle_bypass_shift             (23)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_slope_manual_shift              (22)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_slope_band_shift                (17)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_old_mode_shift                  (16)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_coarse_init_shift               (8)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_vc_chg_time_shift               (5)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_timer_4_shift                   (0)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_start_en_manual_mask            (0x80000000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_pfd_en_manual_mask              (0x40000000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_pfd_time_mask                   (0x3E000000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_pfd_bypass_mask                 (0x01000000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_rxidle_bypass_mask              (0x00800000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_slope_manual_mask               (0x00400000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_slope_band_mask                 (0x003E0000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_old_mode_mask                   (0x00010000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_coarse_init_mask                (0x00003F00)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_vc_chg_time_mask                (0x000000E0)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_timer_4_mask                    (0x0000001F)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_start_en_manual(data)           (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_pfd_en_manual(data)             (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_pfd_time(data)                  (0x3E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_pfd_bypass(data)                (0x01000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_rxidle_bypass(data)             (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_slope_manual(data)              (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_slope_band(data)                (0x003E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_old_mode(data)                  (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_coarse_init(data)               (0x00003F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_vc_chg_time(data)               (0x000000E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_reg_p0_r_timer_4(data)                   (0x0000001F&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_get_reg_p0_r_start_en_manual(data)       ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_get_reg_p0_r_pfd_en_manual(data)         ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_get_reg_p0_r_pfd_time(data)              ((0x3E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_get_reg_p0_r_pfd_bypass(data)            ((0x01000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_get_reg_p0_r_rxidle_bypass(data)         ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_get_reg_p0_r_slope_manual(data)          ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_get_reg_p0_r_slope_band(data)            ((0x003E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_get_reg_p0_r_old_mode(data)              ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_get_reg_p0_r_coarse_init(data)           ((0x00003F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_get_reg_p0_r_vc_chg_time(data)           ((0x000000E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD05_get_reg_p0_r_timer_4(data)               (0x0000001F&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06                                         0x1800DC40
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_reg_addr                                 "0xB800DC40"
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_reg                                      0xB800DC40
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_inst_addr                                "0x0077"
#define  set_HDMIRX_2P1_PHY_P0_FLD_R_REGD06_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_R_REGD06_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_R_REGD06_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_R_REGD06_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_fld_st_reg_shift                    (27)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_adp_en_fsm_reg_shift                (26)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_cp_en_fsm_reg_shift                 (25)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_coarse_fsm_reg_shift                (18)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_pfd_en_fsm_reg_shift                (17)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_fine_fsm_reg_shift                  (10)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_reg_p0_r_cp_time_2_shift                 (5)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_coarse_too_fast_reg_shift           (4)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_coarse_too_slow_reg_shift           (3)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_coarse_calib_ok_shift               (2)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_calib_ok_shift                      (1)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_start_en_shift                      (0)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_fld_st_reg_mask                     (0xF8000000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_adp_en_fsm_reg_mask                 (0x04000000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_cp_en_fsm_reg_mask                  (0x02000000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_coarse_fsm_reg_mask                 (0x01FC0000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_pfd_en_fsm_reg_mask                 (0x00020000)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_fine_fsm_reg_mask                   (0x0001FC00)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_reg_p0_r_cp_time_2_mask                  (0x000003E0)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_coarse_too_fast_reg_mask            (0x00000010)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_coarse_too_slow_reg_mask            (0x00000008)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_coarse_calib_ok_mask                (0x00000004)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_calib_ok_mask                       (0x00000002)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_start_en_mask                       (0x00000001)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_fld_st_reg(data)                    (0xF8000000&((data)<<27))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_adp_en_fsm_reg(data)                (0x04000000&((data)<<26))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_cp_en_fsm_reg(data)                 (0x02000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_coarse_fsm_reg(data)                (0x01FC0000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_pfd_en_fsm_reg(data)                (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_fine_fsm_reg(data)                  (0x0001FC00&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_reg_p0_r_cp_time_2(data)                 (0x000003E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_coarse_too_fast_reg(data)           (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_coarse_too_slow_reg(data)           (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_coarse_calib_ok(data)               (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_calib_ok(data)                      (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_p0_r_start_en(data)                      (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_get_p0_r_fld_st_reg(data)                ((0xF8000000&(data))>>27)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_get_p0_r_adp_en_fsm_reg(data)            ((0x04000000&(data))>>26)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_get_p0_r_cp_en_fsm_reg(data)             ((0x02000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_get_p0_r_coarse_fsm_reg(data)            ((0x01FC0000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_get_p0_r_pfd_en_fsm_reg(data)            ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_get_p0_r_fine_fsm_reg(data)              ((0x0001FC00&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_get_reg_p0_r_cp_time_2(data)             ((0x000003E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_get_p0_r_coarse_too_fast_reg(data)       ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_get_p0_r_coarse_too_slow_reg(data)       ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_get_p0_r_coarse_calib_ok(data)           ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_get_p0_r_calib_ok(data)                  ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_FLD_R_REGD06_get_p0_r_start_en(data)                  (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00                                         0x1800DC44
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_addr                                 "0xB800DC44"
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg                                      0xB800DC44
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_inst_addr                                "0x0078"
#define  set_HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_auto_mode_shift                 (31)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_adp_en_manual_shift             (30)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_cp_en_manual_shift              (29)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_adap_eq_off_shift               (28)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_adp_time_shift                  (23)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_calib_time_shift                (20)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_calib_manual_shift              (19)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_calib_late_shift                (18)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_vco_coarse_shift                (11)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_divide_num_shift                (3)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_bypass_k_band_mode_shift        (2)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_stable_time_mode_shift          (1)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_cp2adp_en_shift                 (0)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_auto_mode_mask                  (0x80000000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_adp_en_manual_mask              (0x40000000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_cp_en_manual_mask               (0x20000000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_adap_eq_off_mask                (0x10000000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_adp_time_mask                   (0x0F800000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_calib_time_mask                 (0x00700000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_calib_manual_mask               (0x00080000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_calib_late_mask                 (0x00040000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_vco_coarse_mask                 (0x0003F800)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_divide_num_mask                 (0x000007F8)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_bypass_k_band_mode_mask         (0x00000004)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_stable_time_mode_mask           (0x00000002)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_cp2adp_en_mask                  (0x00000001)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_auto_mode(data)                 (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_adp_en_manual(data)             (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_cp_en_manual(data)              (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_adap_eq_off(data)               (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_adp_time(data)                  (0x0F800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_calib_time(data)                (0x00700000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_calib_manual(data)              (0x00080000&((data)<<19))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_calib_late(data)                (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_vco_coarse(data)                (0x0003F800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_divide_num(data)                (0x000007F8&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_bypass_k_band_mode(data)        (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_stable_time_mode(data)          (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_reg_p0_g_cp2adp_en(data)                 (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_get_reg_p0_g_auto_mode(data)             ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_get_reg_p0_g_adp_en_manual(data)         ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_get_reg_p0_g_cp_en_manual(data)          ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_get_reg_p0_g_adap_eq_off(data)           ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_get_reg_p0_g_adp_time(data)              ((0x0F800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_get_reg_p0_g_calib_time(data)            ((0x00700000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_get_reg_p0_g_calib_manual(data)          ((0x00080000&(data))>>19)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_get_reg_p0_g_calib_late(data)            ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_get_reg_p0_g_vco_coarse(data)            ((0x0003F800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_get_reg_p0_g_divide_num(data)            ((0x000007F8&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_get_reg_p0_g_bypass_k_band_mode(data)    ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_get_reg_p0_g_stable_time_mode(data)      ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD00_get_reg_p0_g_cp2adp_en(data)             (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD01                                         0x1800DC48
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD01_reg_addr                                 "0xB800DC48"
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD01_reg                                      0xB800DC48
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD01_inst_addr                                "0x0079"
#define  set_HDMIRX_2P1_PHY_P0_FLD_G_REGD01_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_G_REGD01_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_G_REGD01_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_G_REGD01_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD01_reg_p0_g_cp2adp_time_shift               (28)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD01_reg_p0_g_lock_up_limit_shift             (16)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD01_reg_p0_g_lock_dn_limit_shift             (0)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD01_reg_p0_g_cp2adp_time_mask                (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD01_reg_p0_g_lock_up_limit_mask              (0x0FFF0000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD01_reg_p0_g_lock_dn_limit_mask              (0x00000FFF)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD01_reg_p0_g_cp2adp_time(data)               (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD01_reg_p0_g_lock_up_limit(data)             (0x0FFF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD01_reg_p0_g_lock_dn_limit(data)             (0x00000FFF&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD01_get_reg_p0_g_cp2adp_time(data)           ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD01_get_reg_p0_g_lock_up_limit(data)         ((0x0FFF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD01_get_reg_p0_g_lock_dn_limit(data)         (0x00000FFF&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02                                         0x1800DC4C
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_addr                                 "0xB800DC4C"
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg                                      0xB800DC4C
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_inst_addr                                "0x007A"
#define  set_HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_cdr_cp_shift                    (12)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_cdr_r_shift                     (6)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_cdr_c_shift                     (4)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_vc_sel_shift                    (2)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_calib_reset_sel_shift           (1)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_unstable_flg_shift              (0)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_cdr_cp_mask                     (0xFFFFF000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_cdr_r_mask                      (0x00000FC0)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_cdr_c_mask                      (0x00000030)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_vc_sel_mask                     (0x0000000C)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_calib_reset_sel_mask            (0x00000002)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_unstable_flg_mask               (0x00000001)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_cdr_cp(data)                    (0xFFFFF000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_cdr_r(data)                     (0x00000FC0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_cdr_c(data)                     (0x00000030&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_vc_sel(data)                    (0x0000000C&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_calib_reset_sel(data)           (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_reg_p0_g_unstable_flg(data)              (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_get_reg_p0_g_cdr_cp(data)                ((0xFFFFF000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_get_reg_p0_g_cdr_r(data)                 ((0x00000FC0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_get_reg_p0_g_cdr_c(data)                 ((0x00000030&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_get_reg_p0_g_vc_sel(data)                ((0x0000000C&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_get_reg_p0_g_calib_reset_sel(data)       ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD02_get_reg_p0_g_unstable_flg(data)          (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03                                         0x1800DC50
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg_addr                                 "0xB800DC50"
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg                                      0xB800DC50
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_inst_addr                                "0x007B"
#define  set_HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg_p0_g_coarse_lock_up_limit_shift      (20)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg_p0_g_coarse_lock_dn_limit_shift      (8)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg_p0_g_cp_time_shift                   (3)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg_p0_g_init_time_shift                 (0)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg_p0_g_coarse_lock_up_limit_mask       (0xFFF00000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg_p0_g_coarse_lock_dn_limit_mask       (0x000FFF00)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg_p0_g_cp_time_mask                    (0x000000F8)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg_p0_g_init_time_mask                  (0x00000007)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg_p0_g_coarse_lock_up_limit(data)      (0xFFF00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg_p0_g_coarse_lock_dn_limit(data)      (0x000FFF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg_p0_g_cp_time(data)                   (0x000000F8&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_reg_p0_g_init_time(data)                 (0x00000007&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_get_reg_p0_g_coarse_lock_up_limit(data)  ((0xFFF00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_get_reg_p0_g_coarse_lock_dn_limit(data)  ((0x000FFF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_get_reg_p0_g_cp_time(data)               ((0x000000F8&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD03_get_reg_p0_g_init_time(data)             (0x00000007&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04                                         0x1800DC54
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_addr                                 "0xB800DC54"
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg                                      0xB800DC54
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_inst_addr                                "0x007C"
#define  set_HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_coarse_calib_manual_shift       (28)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_vco_coarse_manual_shift         (24)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_vco_fine_manual_shift           (20)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_xtal_24m_en_shift               (19)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_vco_fine_time_sel_shift         (17)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_bypass_coarse_k_mode_shift      (16)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_vco_coarse_init_shift           (12)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_vco_fine_init_shift             (8)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_timer_5_shift                   (7)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_timer_6_shift                   (2)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_p0_g_fld_rstb_shift                      (1)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_p0_g_acdr_fine_tune_start_shift          (0)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_coarse_calib_manual_mask        (0x10000000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_vco_coarse_manual_mask          (0x0F000000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_vco_fine_manual_mask            (0x00F00000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_xtal_24m_en_mask                (0x00080000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_vco_fine_time_sel_mask          (0x00060000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_bypass_coarse_k_mode_mask       (0x00010000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_vco_coarse_init_mask            (0x0000F000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_vco_fine_init_mask              (0x00000F00)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_timer_5_mask                    (0x00000080)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_timer_6_mask                    (0x0000007C)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_p0_g_fld_rstb_mask                       (0x00000002)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_p0_g_acdr_fine_tune_start_mask           (0x00000001)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_coarse_calib_manual(data)       (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_vco_coarse_manual(data)         (0x0F000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_vco_fine_manual(data)           (0x00F00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_xtal_24m_en(data)               (0x00080000&((data)<<19))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_vco_fine_time_sel(data)         (0x00060000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_bypass_coarse_k_mode(data)      (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_vco_coarse_init(data)           (0x0000F000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_vco_fine_init(data)             (0x00000F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_timer_5(data)                   (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_reg_p0_g_timer_6(data)                   (0x0000007C&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_p0_g_fld_rstb(data)                      (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_p0_g_acdr_fine_tune_start(data)          (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_get_reg_p0_g_coarse_calib_manual(data)   ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_get_reg_p0_g_vco_coarse_manual(data)     ((0x0F000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_get_reg_p0_g_vco_fine_manual(data)       ((0x00F00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_get_reg_p0_g_xtal_24m_en(data)           ((0x00080000&(data))>>19)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_get_reg_p0_g_vco_fine_time_sel(data)     ((0x00060000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_get_reg_p0_g_bypass_coarse_k_mode(data)  ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_get_reg_p0_g_vco_coarse_init(data)       ((0x0000F000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_get_reg_p0_g_vco_fine_init(data)         ((0x00000F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_get_reg_p0_g_timer_5(data)               ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_get_reg_p0_g_timer_6(data)               ((0x0000007C&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_get_p0_g_fld_rstb(data)                  ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD04_get_p0_g_acdr_fine_tune_start(data)      (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05                                         0x1800DC58
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_addr                                 "0xB800DC58"
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg                                      0xB800DC58
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_inst_addr                                "0x007D"
#define  set_HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_start_en_manual_shift           (31)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_pfd_en_manual_shift             (30)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_pfd_time_shift                  (25)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_pfd_bypass_shift                (24)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_rxidle_bypass_shift             (23)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_slope_manual_shift              (22)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_slope_band_shift                (17)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_old_mode_shift                  (16)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_coarse_init_shift               (8)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_vc_chg_time_shift               (5)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_timer_4_shift                   (0)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_start_en_manual_mask            (0x80000000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_pfd_en_manual_mask              (0x40000000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_pfd_time_mask                   (0x3E000000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_pfd_bypass_mask                 (0x01000000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_rxidle_bypass_mask              (0x00800000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_slope_manual_mask               (0x00400000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_slope_band_mask                 (0x003E0000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_old_mode_mask                   (0x00010000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_coarse_init_mask                (0x00003F00)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_vc_chg_time_mask                (0x000000E0)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_timer_4_mask                    (0x0000001F)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_start_en_manual(data)           (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_pfd_en_manual(data)             (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_pfd_time(data)                  (0x3E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_pfd_bypass(data)                (0x01000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_rxidle_bypass(data)             (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_slope_manual(data)              (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_slope_band(data)                (0x003E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_old_mode(data)                  (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_coarse_init(data)               (0x00003F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_vc_chg_time(data)               (0x000000E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_reg_p0_g_timer_4(data)                   (0x0000001F&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_get_reg_p0_g_start_en_manual(data)       ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_get_reg_p0_g_pfd_en_manual(data)         ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_get_reg_p0_g_pfd_time(data)              ((0x3E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_get_reg_p0_g_pfd_bypass(data)            ((0x01000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_get_reg_p0_g_rxidle_bypass(data)         ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_get_reg_p0_g_slope_manual(data)          ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_get_reg_p0_g_slope_band(data)            ((0x003E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_get_reg_p0_g_old_mode(data)              ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_get_reg_p0_g_coarse_init(data)           ((0x00003F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_get_reg_p0_g_vc_chg_time(data)           ((0x000000E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD05_get_reg_p0_g_timer_4(data)               (0x0000001F&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06                                         0x1800DC5C
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_reg_addr                                 "0xB800DC5C"
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_reg                                      0xB800DC5C
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_inst_addr                                "0x007E"
#define  set_HDMIRX_2P1_PHY_P0_FLD_G_REGD06_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_G_REGD06_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_G_REGD06_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_G_REGD06_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_fld_st_reg_shift                    (27)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_adp_en_fsm_reg_shift                (26)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_cp_en_fsm_reg_shift                 (25)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_coarse_fsm_reg_shift                (18)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_pfd_en_fsm_reg_shift                (17)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_fine_fsm_reg_shift                  (10)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_reg_p0_g_cp_time_2_shift                 (5)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_coarse_too_fast_reg_shift           (4)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_coarse_too_slow_reg_shift           (3)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_coarse_calib_ok_shift               (2)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_calib_ok_shift                      (1)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_start_en_shift                      (0)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_fld_st_reg_mask                     (0xF8000000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_adp_en_fsm_reg_mask                 (0x04000000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_cp_en_fsm_reg_mask                  (0x02000000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_coarse_fsm_reg_mask                 (0x01FC0000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_pfd_en_fsm_reg_mask                 (0x00020000)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_fine_fsm_reg_mask                   (0x0001FC00)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_reg_p0_g_cp_time_2_mask                  (0x000003E0)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_coarse_too_fast_reg_mask            (0x00000010)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_coarse_too_slow_reg_mask            (0x00000008)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_coarse_calib_ok_mask                (0x00000004)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_calib_ok_mask                       (0x00000002)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_start_en_mask                       (0x00000001)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_fld_st_reg(data)                    (0xF8000000&((data)<<27))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_adp_en_fsm_reg(data)                (0x04000000&((data)<<26))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_cp_en_fsm_reg(data)                 (0x02000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_coarse_fsm_reg(data)                (0x01FC0000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_pfd_en_fsm_reg(data)                (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_fine_fsm_reg(data)                  (0x0001FC00&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_reg_p0_g_cp_time_2(data)                 (0x000003E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_coarse_too_fast_reg(data)           (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_coarse_too_slow_reg(data)           (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_coarse_calib_ok(data)               (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_calib_ok(data)                      (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_p0_g_start_en(data)                      (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_get_p0_g_fld_st_reg(data)                ((0xF8000000&(data))>>27)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_get_p0_g_adp_en_fsm_reg(data)            ((0x04000000&(data))>>26)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_get_p0_g_cp_en_fsm_reg(data)             ((0x02000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_get_p0_g_coarse_fsm_reg(data)            ((0x01FC0000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_get_p0_g_pfd_en_fsm_reg(data)            ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_get_p0_g_fine_fsm_reg(data)              ((0x0001FC00&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_get_reg_p0_g_cp_time_2(data)             ((0x000003E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_get_p0_g_coarse_too_fast_reg(data)       ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_get_p0_g_coarse_too_slow_reg(data)       ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_get_p0_g_coarse_calib_ok(data)           ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_get_p0_g_calib_ok(data)                  ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_FLD_G_REGD06_get_p0_g_start_en(data)                  (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00                                         0x1800DC60
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_addr                                 "0xB800DC60"
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg                                      0xB800DC60
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_inst_addr                                "0x007F"
#define  set_HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_auto_mode_shift                 (31)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_adp_en_manual_shift             (30)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_cp_en_manual_shift              (29)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_adap_eq_off_shift               (28)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_adp_time_shift                  (23)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_calib_time_shift                (20)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_calib_manual_shift              (19)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_calib_late_shift                (18)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_vco_coarse_shift                (11)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_divide_num_shift                (3)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_bypass_k_band_mode_shift        (2)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_stable_time_mode_shift          (1)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_cp2adp_en_shift                 (0)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_auto_mode_mask                  (0x80000000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_adp_en_manual_mask              (0x40000000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_cp_en_manual_mask               (0x20000000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_adap_eq_off_mask                (0x10000000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_adp_time_mask                   (0x0F800000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_calib_time_mask                 (0x00700000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_calib_manual_mask               (0x00080000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_calib_late_mask                 (0x00040000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_vco_coarse_mask                 (0x0003F800)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_divide_num_mask                 (0x000007F8)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_bypass_k_band_mode_mask         (0x00000004)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_stable_time_mode_mask           (0x00000002)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_cp2adp_en_mask                  (0x00000001)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_auto_mode(data)                 (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_adp_en_manual(data)             (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_cp_en_manual(data)              (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_adap_eq_off(data)               (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_adp_time(data)                  (0x0F800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_calib_time(data)                (0x00700000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_calib_manual(data)              (0x00080000&((data)<<19))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_calib_late(data)                (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_vco_coarse(data)                (0x0003F800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_divide_num(data)                (0x000007F8&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_bypass_k_band_mode(data)        (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_stable_time_mode(data)          (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_reg_p0_b_cp2adp_en(data)                 (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_get_reg_p0_b_auto_mode(data)             ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_get_reg_p0_b_adp_en_manual(data)         ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_get_reg_p0_b_cp_en_manual(data)          ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_get_reg_p0_b_adap_eq_off(data)           ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_get_reg_p0_b_adp_time(data)              ((0x0F800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_get_reg_p0_b_calib_time(data)            ((0x00700000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_get_reg_p0_b_calib_manual(data)          ((0x00080000&(data))>>19)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_get_reg_p0_b_calib_late(data)            ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_get_reg_p0_b_vco_coarse(data)            ((0x0003F800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_get_reg_p0_b_divide_num(data)            ((0x000007F8&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_get_reg_p0_b_bypass_k_band_mode(data)    ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_get_reg_p0_b_stable_time_mode(data)      ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD00_get_reg_p0_b_cp2adp_en(data)             (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD01                                         0x1800DC64
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD01_reg_addr                                 "0xB800DC64"
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD01_reg                                      0xB800DC64
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD01_inst_addr                                "0x0080"
#define  set_HDMIRX_2P1_PHY_P0_FLD_B_REGD01_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_B_REGD01_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_B_REGD01_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_B_REGD01_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD01_reg_p0_b_cp2adp_time_shift               (28)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD01_reg_p0_b_lock_up_limit_shift             (16)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD01_reg_p0_b_lock_dn_limit_shift             (0)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD01_reg_p0_b_cp2adp_time_mask                (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD01_reg_p0_b_lock_up_limit_mask              (0x0FFF0000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD01_reg_p0_b_lock_dn_limit_mask              (0x00000FFF)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD01_reg_p0_b_cp2adp_time(data)               (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD01_reg_p0_b_lock_up_limit(data)             (0x0FFF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD01_reg_p0_b_lock_dn_limit(data)             (0x00000FFF&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD01_get_reg_p0_b_cp2adp_time(data)           ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD01_get_reg_p0_b_lock_up_limit(data)         ((0x0FFF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD01_get_reg_p0_b_lock_dn_limit(data)         (0x00000FFF&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02                                         0x1800DC68
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_addr                                 "0xB800DC68"
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg                                      0xB800DC68
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_inst_addr                                "0x0081"
#define  set_HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_cdr_cp_shift                    (12)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_cdr_r_shift                     (6)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_cdr_c_shift                     (4)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_vc_sel_shift                    (2)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_calib_reset_sel_shift           (1)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_unstable_flg_shift              (0)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_cdr_cp_mask                     (0xFFFFF000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_cdr_r_mask                      (0x00000FC0)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_cdr_c_mask                      (0x00000030)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_vc_sel_mask                     (0x0000000C)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_calib_reset_sel_mask            (0x00000002)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_unstable_flg_mask               (0x00000001)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_cdr_cp(data)                    (0xFFFFF000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_cdr_r(data)                     (0x00000FC0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_cdr_c(data)                     (0x00000030&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_vc_sel(data)                    (0x0000000C&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_calib_reset_sel(data)           (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_reg_p0_b_unstable_flg(data)              (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_get_reg_p0_b_cdr_cp(data)                ((0xFFFFF000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_get_reg_p0_b_cdr_r(data)                 ((0x00000FC0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_get_reg_p0_b_cdr_c(data)                 ((0x00000030&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_get_reg_p0_b_vc_sel(data)                ((0x0000000C&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_get_reg_p0_b_calib_reset_sel(data)       ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD02_get_reg_p0_b_unstable_flg(data)          (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03                                         0x1800DC6C
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg_addr                                 "0xB800DC6C"
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg                                      0xB800DC6C
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_inst_addr                                "0x0082"
#define  set_HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg_p0_b_coarse_lock_up_limit_shift      (20)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg_p0_b_coarse_lock_dn_limit_shift      (8)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg_p0_b_cp_time_shift                   (3)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg_p0_b_init_time_shift                 (0)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg_p0_b_coarse_lock_up_limit_mask       (0xFFF00000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg_p0_b_coarse_lock_dn_limit_mask       (0x000FFF00)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg_p0_b_cp_time_mask                    (0x000000F8)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg_p0_b_init_time_mask                  (0x00000007)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg_p0_b_coarse_lock_up_limit(data)      (0xFFF00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg_p0_b_coarse_lock_dn_limit(data)      (0x000FFF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg_p0_b_cp_time(data)                   (0x000000F8&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_reg_p0_b_init_time(data)                 (0x00000007&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_get_reg_p0_b_coarse_lock_up_limit(data)  ((0xFFF00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_get_reg_p0_b_coarse_lock_dn_limit(data)  ((0x000FFF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_get_reg_p0_b_cp_time(data)               ((0x000000F8&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD03_get_reg_p0_b_init_time(data)             (0x00000007&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04                                         0x1800DC70
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_addr                                 "0xB800DC70"
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg                                      0xB800DC70
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_inst_addr                                "0x0083"
#define  set_HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_coarse_calib_manual_shift       (28)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_vco_coarse_manual_shift         (24)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_vco_fine_manual_shift           (20)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_xtal_24m_en_shift               (19)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_vco_fine_time_sel_shift         (17)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_bypass_coarse_k_mode_shift      (16)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_vco_coarse_init_shift           (12)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_vco_fine_init_shift             (8)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_timer_5_shift                   (7)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_timer_6_shift                   (2)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_p0_b_fld_rstb_shift                      (1)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_p0_b_acdr_fine_tune_start_shift          (0)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_coarse_calib_manual_mask        (0x10000000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_vco_coarse_manual_mask          (0x0F000000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_vco_fine_manual_mask            (0x00F00000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_xtal_24m_en_mask                (0x00080000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_vco_fine_time_sel_mask          (0x00060000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_bypass_coarse_k_mode_mask       (0x00010000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_vco_coarse_init_mask            (0x0000F000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_vco_fine_init_mask              (0x00000F00)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_timer_5_mask                    (0x00000080)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_timer_6_mask                    (0x0000007C)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_p0_b_fld_rstb_mask                       (0x00000002)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_p0_b_acdr_fine_tune_start_mask           (0x00000001)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_coarse_calib_manual(data)       (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_vco_coarse_manual(data)         (0x0F000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_vco_fine_manual(data)           (0x00F00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_xtal_24m_en(data)               (0x00080000&((data)<<19))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_vco_fine_time_sel(data)         (0x00060000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_bypass_coarse_k_mode(data)      (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_vco_coarse_init(data)           (0x0000F000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_vco_fine_init(data)             (0x00000F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_timer_5(data)                   (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_reg_p0_b_timer_6(data)                   (0x0000007C&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_p0_b_fld_rstb(data)                      (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_p0_b_acdr_fine_tune_start(data)          (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_get_reg_p0_b_coarse_calib_manual(data)   ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_get_reg_p0_b_vco_coarse_manual(data)     ((0x0F000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_get_reg_p0_b_vco_fine_manual(data)       ((0x00F00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_get_reg_p0_b_xtal_24m_en(data)           ((0x00080000&(data))>>19)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_get_reg_p0_b_vco_fine_time_sel(data)     ((0x00060000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_get_reg_p0_b_bypass_coarse_k_mode(data)  ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_get_reg_p0_b_vco_coarse_init(data)       ((0x0000F000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_get_reg_p0_b_vco_fine_init(data)         ((0x00000F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_get_reg_p0_b_timer_5(data)               ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_get_reg_p0_b_timer_6(data)               ((0x0000007C&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_get_p0_b_fld_rstb(data)                  ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD04_get_p0_b_acdr_fine_tune_start(data)      (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05                                         0x1800DC74
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_addr                                 "0xB800DC74"
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg                                      0xB800DC74
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_inst_addr                                "0x0084"
#define  set_HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_start_en_manual_shift           (31)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_pfd_en_manual_shift             (30)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_pfd_time_shift                  (25)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_pfd_bypass_shift                (24)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_rxidle_bypass_shift             (23)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_slope_manual_shift              (22)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_slope_band_shift                (17)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_old_mode_shift                  (16)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_coarse_init_shift               (8)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_vc_chg_time_shift               (5)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_timer_4_shift                   (0)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_start_en_manual_mask            (0x80000000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_pfd_en_manual_mask              (0x40000000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_pfd_time_mask                   (0x3E000000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_pfd_bypass_mask                 (0x01000000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_rxidle_bypass_mask              (0x00800000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_slope_manual_mask               (0x00400000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_slope_band_mask                 (0x003E0000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_old_mode_mask                   (0x00010000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_coarse_init_mask                (0x00003F00)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_vc_chg_time_mask                (0x000000E0)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_timer_4_mask                    (0x0000001F)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_start_en_manual(data)           (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_pfd_en_manual(data)             (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_pfd_time(data)                  (0x3E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_pfd_bypass(data)                (0x01000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_rxidle_bypass(data)             (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_slope_manual(data)              (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_slope_band(data)                (0x003E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_old_mode(data)                  (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_coarse_init(data)               (0x00003F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_vc_chg_time(data)               (0x000000E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_reg_p0_b_timer_4(data)                   (0x0000001F&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_get_reg_p0_b_start_en_manual(data)       ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_get_reg_p0_b_pfd_en_manual(data)         ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_get_reg_p0_b_pfd_time(data)              ((0x3E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_get_reg_p0_b_pfd_bypass(data)            ((0x01000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_get_reg_p0_b_rxidle_bypass(data)         ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_get_reg_p0_b_slope_manual(data)          ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_get_reg_p0_b_slope_band(data)            ((0x003E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_get_reg_p0_b_old_mode(data)              ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_get_reg_p0_b_coarse_init(data)           ((0x00003F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_get_reg_p0_b_vc_chg_time(data)           ((0x000000E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD05_get_reg_p0_b_timer_4(data)               (0x0000001F&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06                                         0x1800DC78
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_reg_addr                                 "0xB800DC78"
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_reg                                      0xB800DC78
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_inst_addr                                "0x0085"
#define  set_HDMIRX_2P1_PHY_P0_FLD_B_REGD06_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_B_REGD06_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_B_REGD06_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_B_REGD06_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_fld_st_reg_shift                    (27)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_adp_en_fsm_reg_shift                (26)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_cp_en_fsm_reg_shift                 (25)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_coarse_fsm_reg_shift                (18)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_pfd_en_fsm_reg_shift                (17)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_fine_fsm_reg_shift                  (10)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_reg_p0_b_cp_time_2_shift                 (5)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_coarse_too_fast_reg_shift           (4)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_coarse_too_slow_reg_shift           (3)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_coarse_calib_ok_shift               (2)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_calib_ok_shift                      (1)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_start_en_shift                      (0)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_fld_st_reg_mask                     (0xF8000000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_adp_en_fsm_reg_mask                 (0x04000000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_cp_en_fsm_reg_mask                  (0x02000000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_coarse_fsm_reg_mask                 (0x01FC0000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_pfd_en_fsm_reg_mask                 (0x00020000)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_fine_fsm_reg_mask                   (0x0001FC00)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_reg_p0_b_cp_time_2_mask                  (0x000003E0)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_coarse_too_fast_reg_mask            (0x00000010)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_coarse_too_slow_reg_mask            (0x00000008)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_coarse_calib_ok_mask                (0x00000004)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_calib_ok_mask                       (0x00000002)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_start_en_mask                       (0x00000001)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_fld_st_reg(data)                    (0xF8000000&((data)<<27))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_adp_en_fsm_reg(data)                (0x04000000&((data)<<26))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_cp_en_fsm_reg(data)                 (0x02000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_coarse_fsm_reg(data)                (0x01FC0000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_pfd_en_fsm_reg(data)                (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_fine_fsm_reg(data)                  (0x0001FC00&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_reg_p0_b_cp_time_2(data)                 (0x000003E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_coarse_too_fast_reg(data)           (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_coarse_too_slow_reg(data)           (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_coarse_calib_ok(data)               (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_calib_ok(data)                      (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_p0_b_start_en(data)                      (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_get_p0_b_fld_st_reg(data)                ((0xF8000000&(data))>>27)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_get_p0_b_adp_en_fsm_reg(data)            ((0x04000000&(data))>>26)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_get_p0_b_cp_en_fsm_reg(data)             ((0x02000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_get_p0_b_coarse_fsm_reg(data)            ((0x01FC0000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_get_p0_b_pfd_en_fsm_reg(data)            ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_get_p0_b_fine_fsm_reg(data)              ((0x0001FC00&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_get_reg_p0_b_cp_time_2(data)             ((0x000003E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_get_p0_b_coarse_too_fast_reg(data)       ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_get_p0_b_coarse_too_slow_reg(data)       ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_get_p0_b_coarse_calib_ok(data)           ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_get_p0_b_calib_ok(data)                  ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_FLD_B_REGD06_get_p0_b_start_en(data)                  (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00                                        0x1800DC7C
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_addr                                "0xB800DC7C"
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg                                     0xB800DC7C
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_inst_addr                               "0x0086"
#define  set_HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg(data)                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_auto_mode_shift               (31)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_adp_en_manual_shift           (30)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_cp_en_manual_shift            (29)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_adap_eq_off_shift             (28)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_adp_time_shift                (23)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_calib_time_shift              (20)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_calib_manual_shift            (19)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_calib_late_shift              (18)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_vco_coarse_shift              (11)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_divide_num_shift              (3)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_bypass_k_band_mode_shift      (2)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_stable_time_mode_shift        (1)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_cp2adp_en_shift               (0)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_auto_mode_mask                (0x80000000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_adp_en_manual_mask            (0x40000000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_cp_en_manual_mask             (0x20000000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_adap_eq_off_mask              (0x10000000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_adp_time_mask                 (0x0F800000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_calib_time_mask               (0x00700000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_calib_manual_mask             (0x00080000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_calib_late_mask               (0x00040000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_vco_coarse_mask               (0x0003F800)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_divide_num_mask               (0x000007F8)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_bypass_k_band_mode_mask       (0x00000004)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_stable_time_mode_mask         (0x00000002)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_cp2adp_en_mask                (0x00000001)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_auto_mode(data)               (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_adp_en_manual(data)           (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_cp_en_manual(data)            (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_adap_eq_off(data)             (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_adp_time(data)                (0x0F800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_calib_time(data)              (0x00700000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_calib_manual(data)            (0x00080000&((data)<<19))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_calib_late(data)              (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_vco_coarse(data)              (0x0003F800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_divide_num(data)              (0x000007F8&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_bypass_k_band_mode(data)      (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_stable_time_mode(data)        (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_reg_p0_ck_cp2adp_en(data)               (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_get_reg_p0_ck_auto_mode(data)           ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_get_reg_p0_ck_adp_en_manual(data)       ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_get_reg_p0_ck_cp_en_manual(data)        ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_get_reg_p0_ck_adap_eq_off(data)         ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_get_reg_p0_ck_adp_time(data)            ((0x0F800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_get_reg_p0_ck_calib_time(data)          ((0x00700000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_get_reg_p0_ck_calib_manual(data)        ((0x00080000&(data))>>19)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_get_reg_p0_ck_calib_late(data)          ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_get_reg_p0_ck_vco_coarse(data)          ((0x0003F800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_get_reg_p0_ck_divide_num(data)          ((0x000007F8&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_get_reg_p0_ck_bypass_k_band_mode(data)  ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_get_reg_p0_ck_stable_time_mode(data)    ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD00_get_reg_p0_ck_cp2adp_en(data)           (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD01                                        0x1800DC80
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_reg_addr                                "0xB800DC80"
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_reg                                     0xB800DC80
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_inst_addr                               "0x0087"
#define  set_HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_reg(data)                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_reg                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_reg_p0_ck_cp2adp_time_shift             (28)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_reg_p0_ck_lock_up_limit_shift           (16)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_reg_p0_ck_lock_dn_limit_shift           (0)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_reg_p0_ck_cp2adp_time_mask              (0xF0000000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_reg_p0_ck_lock_up_limit_mask            (0x0FFF0000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_reg_p0_ck_lock_dn_limit_mask            (0x00000FFF)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_reg_p0_ck_cp2adp_time(data)             (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_reg_p0_ck_lock_up_limit(data)           (0x0FFF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_reg_p0_ck_lock_dn_limit(data)           (0x00000FFF&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_get_reg_p0_ck_cp2adp_time(data)         ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_get_reg_p0_ck_lock_up_limit(data)       ((0x0FFF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD01_get_reg_p0_ck_lock_dn_limit(data)       (0x00000FFF&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02                                        0x1800DC84
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_addr                                "0xB800DC84"
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg                                     0xB800DC84
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_inst_addr                               "0x0088"
#define  set_HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg(data)                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_cdr_cp_shift                  (12)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_cdr_r_shift                   (6)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_cdr_c_shift                   (4)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_vc_sel_shift                  (2)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_calib_reset_sel_shift         (1)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_unstable_flg_shift            (0)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_cdr_cp_mask                   (0xFFFFF000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_cdr_r_mask                    (0x00000FC0)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_cdr_c_mask                    (0x00000030)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_vc_sel_mask                   (0x0000000C)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_calib_reset_sel_mask          (0x00000002)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_unstable_flg_mask             (0x00000001)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_cdr_cp(data)                  (0xFFFFF000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_cdr_r(data)                   (0x00000FC0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_cdr_c(data)                   (0x00000030&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_vc_sel(data)                  (0x0000000C&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_calib_reset_sel(data)         (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_reg_p0_ck_unstable_flg(data)            (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_get_reg_p0_ck_cdr_cp(data)              ((0xFFFFF000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_get_reg_p0_ck_cdr_r(data)               ((0x00000FC0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_get_reg_p0_ck_cdr_c(data)               ((0x00000030&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_get_reg_p0_ck_vc_sel(data)              ((0x0000000C&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_get_reg_p0_ck_calib_reset_sel(data)     ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD02_get_reg_p0_ck_unstable_flg(data)        (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03                                        0x1800DC88
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg_addr                                "0xB800DC88"
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg                                     0xB800DC88
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_inst_addr                               "0x0089"
#define  set_HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg(data)                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg_p0_ck_coarse_lock_up_limit_shift    (20)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg_p0_ck_coarse_lock_dn_limit_shift    (8)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg_p0_ck_cp_time_shift                 (3)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg_p0_ck_init_time_shift               (0)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg_p0_ck_coarse_lock_up_limit_mask     (0xFFF00000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg_p0_ck_coarse_lock_dn_limit_mask     (0x000FFF00)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg_p0_ck_cp_time_mask                  (0x000000F8)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg_p0_ck_init_time_mask                (0x00000007)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg_p0_ck_coarse_lock_up_limit(data)    (0xFFF00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg_p0_ck_coarse_lock_dn_limit(data)    (0x000FFF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg_p0_ck_cp_time(data)                 (0x000000F8&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_reg_p0_ck_init_time(data)               (0x00000007&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_get_reg_p0_ck_coarse_lock_up_limit(data) ((0xFFF00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_get_reg_p0_ck_coarse_lock_dn_limit(data) ((0x000FFF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_get_reg_p0_ck_cp_time(data)             ((0x000000F8&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD03_get_reg_p0_ck_init_time(data)           (0x00000007&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04                                        0x1800DC8C
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_addr                                "0xB800DC8C"
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg                                     0xB800DC8C
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_inst_addr                               "0x008A"
#define  set_HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg(data)                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_coarse_calib_manual_shift     (28)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_vco_coarse_manual_shift       (24)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_vco_fine_manual_shift         (20)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_xtal_24m_en_shift             (19)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_vco_fine_time_sel_shift       (17)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_bypass_coarse_k_mode_shift    (16)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_vco_coarse_init_shift         (12)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_vco_fine_init_shift           (8)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_timer_5_shift                 (7)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_timer_6_shift                 (2)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_p0_ck_fld_rstb_shift                    (1)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_p0_ck_acdr_fine_tune_start_shift        (0)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_coarse_calib_manual_mask      (0x10000000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_vco_coarse_manual_mask        (0x0F000000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_vco_fine_manual_mask          (0x00F00000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_xtal_24m_en_mask              (0x00080000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_vco_fine_time_sel_mask        (0x00060000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_bypass_coarse_k_mode_mask     (0x00010000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_vco_coarse_init_mask          (0x0000F000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_vco_fine_init_mask            (0x00000F00)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_timer_5_mask                  (0x00000080)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_timer_6_mask                  (0x0000007C)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_p0_ck_fld_rstb_mask                     (0x00000002)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_p0_ck_acdr_fine_tune_start_mask         (0x00000001)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_coarse_calib_manual(data)     (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_vco_coarse_manual(data)       (0x0F000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_vco_fine_manual(data)         (0x00F00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_xtal_24m_en(data)             (0x00080000&((data)<<19))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_vco_fine_time_sel(data)       (0x00060000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_bypass_coarse_k_mode(data)    (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_vco_coarse_init(data)         (0x0000F000&((data)<<12))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_vco_fine_init(data)           (0x00000F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_timer_5(data)                 (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_reg_p0_ck_timer_6(data)                 (0x0000007C&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_p0_ck_fld_rstb(data)                    (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_p0_ck_acdr_fine_tune_start(data)        (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_get_reg_p0_ck_coarse_calib_manual(data) ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_get_reg_p0_ck_vco_coarse_manual(data)   ((0x0F000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_get_reg_p0_ck_vco_fine_manual(data)     ((0x00F00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_get_reg_p0_ck_xtal_24m_en(data)         ((0x00080000&(data))>>19)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_get_reg_p0_ck_vco_fine_time_sel(data)   ((0x00060000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_get_reg_p0_ck_bypass_coarse_k_mode(data) ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_get_reg_p0_ck_vco_coarse_init(data)     ((0x0000F000&(data))>>12)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_get_reg_p0_ck_vco_fine_init(data)       ((0x00000F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_get_reg_p0_ck_timer_5(data)             ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_get_reg_p0_ck_timer_6(data)             ((0x0000007C&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_get_p0_ck_fld_rstb(data)                ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD04_get_p0_ck_acdr_fine_tune_start(data)    (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05                                        0x1800DC90
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_addr                                "0xB800DC90"
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg                                     0xB800DC90
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_inst_addr                               "0x008B"
#define  set_HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg(data)                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_start_en_manual_shift         (31)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_pfd_en_manual_shift           (30)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_pfd_time_shift                (25)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_pfd_bypass_shift              (24)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_rxidle_bypass_shift           (23)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_slope_manual_shift            (22)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_slope_band_shift              (17)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_old_mode_shift                (16)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_coarse_init_shift             (8)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_vc_chg_time_shift             (5)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_timer_4_shift                 (0)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_start_en_manual_mask          (0x80000000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_pfd_en_manual_mask            (0x40000000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_pfd_time_mask                 (0x3E000000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_pfd_bypass_mask               (0x01000000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_rxidle_bypass_mask            (0x00800000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_slope_manual_mask             (0x00400000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_slope_band_mask               (0x003E0000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_old_mode_mask                 (0x00010000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_coarse_init_mask              (0x00003F00)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_vc_chg_time_mask              (0x000000E0)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_timer_4_mask                  (0x0000001F)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_start_en_manual(data)         (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_pfd_en_manual(data)           (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_pfd_time(data)                (0x3E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_pfd_bypass(data)              (0x01000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_rxidle_bypass(data)           (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_slope_manual(data)            (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_slope_band(data)              (0x003E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_old_mode(data)                (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_coarse_init(data)             (0x00003F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_vc_chg_time(data)             (0x000000E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_reg_p0_ck_timer_4(data)                 (0x0000001F&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_get_reg_p0_ck_start_en_manual(data)     ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_get_reg_p0_ck_pfd_en_manual(data)       ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_get_reg_p0_ck_pfd_time(data)            ((0x3E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_get_reg_p0_ck_pfd_bypass(data)          ((0x01000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_get_reg_p0_ck_rxidle_bypass(data)       ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_get_reg_p0_ck_slope_manual(data)        ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_get_reg_p0_ck_slope_band(data)          ((0x003E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_get_reg_p0_ck_old_mode(data)            ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_get_reg_p0_ck_coarse_init(data)         ((0x00003F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_get_reg_p0_ck_vc_chg_time(data)         ((0x000000E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD05_get_reg_p0_ck_timer_4(data)             (0x0000001F&(data))

#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06                                        0x1800DC94
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_reg_addr                                "0xB800DC94"
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_reg                                     0xB800DC94
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_inst_addr                               "0x008C"
#define  set_HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_reg(data)                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_reg                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_reg))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_fld_st_reg_shift                  (27)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_adp_en_fsm_reg_shift              (26)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_cp_en_fsm_reg_shift               (25)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_coarse_fsm_reg_shift              (18)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_pfd_en_fsm_reg_shift              (17)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_fine_fsm_reg_shift                (10)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_reg_p0_ck_cp_time_2_shift               (5)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_coarse_too_fast_reg_shift         (4)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_coarse_too_slow_reg_shift         (3)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_coarse_calib_ok_shift             (2)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_calib_ok_shift                    (1)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_start_en_shift                    (0)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_fld_st_reg_mask                   (0xF8000000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_adp_en_fsm_reg_mask               (0x04000000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_cp_en_fsm_reg_mask                (0x02000000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_coarse_fsm_reg_mask               (0x01FC0000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_pfd_en_fsm_reg_mask               (0x00020000)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_fine_fsm_reg_mask                 (0x0001FC00)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_reg_p0_ck_cp_time_2_mask                (0x000003E0)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_coarse_too_fast_reg_mask          (0x00000010)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_coarse_too_slow_reg_mask          (0x00000008)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_coarse_calib_ok_mask              (0x00000004)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_calib_ok_mask                     (0x00000002)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_start_en_mask                     (0x00000001)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_fld_st_reg(data)                  (0xF8000000&((data)<<27))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_adp_en_fsm_reg(data)              (0x04000000&((data)<<26))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_cp_en_fsm_reg(data)               (0x02000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_coarse_fsm_reg(data)              (0x01FC0000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_pfd_en_fsm_reg(data)              (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_fine_fsm_reg(data)                (0x0001FC00&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_reg_p0_ck_cp_time_2(data)               (0x000003E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_coarse_too_fast_reg(data)         (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_coarse_too_slow_reg(data)         (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_coarse_calib_ok(data)             (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_calib_ok(data)                    (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_p0_ck_start_en(data)                    (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_get_p0_ck_fld_st_reg(data)              ((0xF8000000&(data))>>27)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_get_p0_ck_adp_en_fsm_reg(data)          ((0x04000000&(data))>>26)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_get_p0_ck_cp_en_fsm_reg(data)           ((0x02000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_get_p0_ck_coarse_fsm_reg(data)          ((0x01FC0000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_get_p0_ck_pfd_en_fsm_reg(data)          ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_get_p0_ck_fine_fsm_reg(data)            ((0x0001FC00&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_get_reg_p0_ck_cp_time_2(data)           ((0x000003E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_get_p0_ck_coarse_too_fast_reg(data)     ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_get_p0_ck_coarse_too_slow_reg(data)     ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_get_p0_ck_coarse_calib_ok(data)         ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_get_p0_ck_calib_ok(data)                ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_FLD_CK_REGD06_get_p0_ck_start_en(data)                (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_MISC_0                                               0x1800DC98
#define  HDMIRX_2P1_PHY_P0_MISC_0_reg_addr                                       "0xB800DC98"
#define  HDMIRX_2P1_PHY_P0_MISC_0_reg                                            0xB800DC98
#define  HDMIRX_2P1_PHY_P0_MISC_0_inst_addr                                      "0x008D"
#define  set_HDMIRX_2P1_PHY_P0_MISC_0_reg(data)                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_MISC_0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_MISC_0_reg                                        (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_MISC_0_reg))
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_r_vco_encap_shift                      (30)
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_r_acdr_en_afn_shift                    (29)
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_g_vco_encap_shift                      (22)
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_g_acdr_en_afn_shift                    (21)
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_b_vco_encap_shift                      (14)
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_b_acdr_en_afn_shift                    (13)
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_ck_vco_encap_shift                     (6)
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_ck_acdr_en_afn_shift                   (5)
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_r_vco_encap_mask                       (0xC0000000)
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_r_acdr_en_afn_mask                     (0x20000000)
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_g_vco_encap_mask                       (0x00C00000)
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_g_acdr_en_afn_mask                     (0x00200000)
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_b_vco_encap_mask                       (0x0000C000)
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_b_acdr_en_afn_mask                     (0x00002000)
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_ck_vco_encap_mask                      (0x000000C0)
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_ck_acdr_en_afn_mask                    (0x00000020)
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_r_vco_encap(data)                      (0xC0000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_r_acdr_en_afn(data)                    (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_g_vco_encap(data)                      (0x00C00000&((data)<<22))
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_g_acdr_en_afn(data)                    (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_b_vco_encap(data)                      (0x0000C000&((data)<<14))
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_b_acdr_en_afn(data)                    (0x00002000&((data)<<13))
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_ck_vco_encap(data)                     (0x000000C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_MISC_0_p0_acdr_ck_acdr_en_afn(data)                   (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_MISC_0_get_p0_acdr_r_vco_encap(data)                  ((0xC0000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P0_MISC_0_get_p0_acdr_r_acdr_en_afn(data)                ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P0_MISC_0_get_p0_acdr_g_vco_encap(data)                  ((0x00C00000&(data))>>22)
#define  HDMIRX_2P1_PHY_P0_MISC_0_get_p0_acdr_g_acdr_en_afn(data)                ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_MISC_0_get_p0_acdr_b_vco_encap(data)                  ((0x0000C000&(data))>>14)
#define  HDMIRX_2P1_PHY_P0_MISC_0_get_p0_acdr_b_acdr_en_afn(data)                ((0x00002000&(data))>>13)
#define  HDMIRX_2P1_PHY_P0_MISC_0_get_p0_acdr_ck_vco_encap(data)                 ((0x000000C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_MISC_0_get_p0_acdr_ck_acdr_en_afn(data)               ((0x00000020&(data))>>5)

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10                                       0x1800DC9C
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_addr                               "0xB800DC9C"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg                                    0xB800DC9C
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_inst_addr                              "0x008E"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_p0_ck_md_rstb_shift                    (31)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_threshold_shift           (25)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_debounce_shift            (18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_sel_shift                 (16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_auto_shift                (15)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_adj_shift                 (11)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_error_limit_shift            (6)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_reserved_shift            (2)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_p0_ck_md_rstb_mask                     (0x80000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_threshold_mask            (0x7E000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_debounce_mask             (0x01FC0000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_sel_mask                  (0x00030000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_auto_mask                 (0x00008000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_adj_mask                  (0x00007800)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_error_limit_mask             (0x000007C0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_reserved_mask             (0x0000003C)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_p0_ck_md_rstb(data)                    (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_threshold(data)           (0x7E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_debounce(data)            (0x01FC0000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_sel(data)                 (0x00030000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_auto(data)                (0x00008000&((data)<<15))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_adj(data)                 (0x00007800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_error_limit(data)            (0x000007C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_reg_p0_ck_md_reserved(data)            (0x0000003C&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_get_p0_ck_md_rstb(data)                ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_get_reg_p0_ck_md_threshold(data)       ((0x7E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_get_reg_p0_ck_md_debounce(data)        ((0x01FC0000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_get_reg_p0_ck_md_sel(data)             ((0x00030000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_get_reg_p0_ck_md_auto(data)            ((0x00008000&(data))>>15)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_get_reg_p0_ck_md_adj(data)             ((0x00007800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_get_reg_p0_ck_error_limit(data)        ((0x000007C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD10_get_reg_p0_ck_md_reserved(data)        ((0x0000003C&(data))>>2)

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11                                       0x1800DCA0
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_reg_addr                               "0xB800DCA0"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_reg                                    0xB800DCA0
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_inst_addr                              "0x008F"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_p0_ck_md_count_shift                   (19)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_p0_ck_rate_shift                       (15)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_p0_unstable_count_shift                (10)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_p0_ck_md_ok_shift                      (9)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_p0_clock_unstable_flag_shift           (8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_reg_p0_dig_debug_sel_shift             (4)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_p0_ck_md_count_mask                    (0xFFF80000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_p0_ck_rate_mask                        (0x00078000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_p0_unstable_count_mask                 (0x00007C00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_p0_ck_md_ok_mask                       (0x00000200)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_p0_clock_unstable_flag_mask            (0x00000100)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_reg_p0_dig_debug_sel_mask              (0x000000F0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_p0_ck_md_count(data)                   (0xFFF80000&((data)<<19))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_p0_ck_rate(data)                       (0x00078000&((data)<<15))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_p0_unstable_count(data)                (0x00007C00&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_p0_ck_md_ok(data)                      (0x00000200&((data)<<9))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_p0_clock_unstable_flag(data)           (0x00000100&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_reg_p0_dig_debug_sel(data)             (0x000000F0&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_get_p0_ck_md_count(data)               ((0xFFF80000&(data))>>19)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_get_p0_ck_rate(data)                   ((0x00078000&(data))>>15)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_get_p0_unstable_count(data)            ((0x00007C00&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_get_p0_ck_md_ok(data)                  ((0x00000200&(data))>>9)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_get_p0_clock_unstable_flag(data)       ((0x00000100&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD11_get_reg_p0_dig_debug_sel(data)         ((0x000000F0&(data))>>4)

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12                                       0x1800DCA4
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg_addr                               "0xB800DCA4"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg                                    0xB800DCA4
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_inst_addr                              "0x0090"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg_p0_dig_reserved_0_shift            (24)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg_p0_dig_reserved_1_shift            (16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg_p0_dig_reserved_2_shift            (8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg_p0_dig_reserved_3_shift            (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg_p0_dig_reserved_0_mask             (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg_p0_dig_reserved_1_mask             (0x00FF0000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg_p0_dig_reserved_2_mask             (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg_p0_dig_reserved_3_mask             (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg_p0_dig_reserved_0(data)            (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg_p0_dig_reserved_1(data)            (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg_p0_dig_reserved_2(data)            (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_reg_p0_dig_reserved_3(data)            (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_get_reg_p0_dig_reserved_0(data)        ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_get_reg_p0_dig_reserved_1(data)        ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_get_reg_p0_dig_reserved_2(data)        ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD12_get_reg_p0_dig_reserved_3(data)        (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD13                                       0x1800DCA8
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD13_reg_addr                               "0xB800DCA8"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD13_reg                                    0xB800DCA8
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD13_inst_addr                              "0x0091"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD13_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD13_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD13_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD13_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD13_reg_p0_st_m_value_r_shift              (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD13_reg_p0_st_m_value_r_mask               (0xFFFFFFFF)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD13_reg_p0_st_m_value_r(data)              (0xFFFFFFFF&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD13_get_reg_p0_st_m_value_r(data)          (0xFFFFFFFF&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD14                                       0x1800DCAC
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD14_reg_addr                               "0xB800DCAC"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD14_reg                                    0xB800DCAC
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD14_inst_addr                              "0x0092"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD14_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD14_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD14_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD14_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD14_reg_p0_st_m_value_g_shift              (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD14_reg_p0_st_m_value_g_mask               (0xFFFFFFFF)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD14_reg_p0_st_m_value_g(data)              (0xFFFFFFFF&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD14_get_reg_p0_st_m_value_g(data)          (0xFFFFFFFF&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD15                                       0x1800DCB0
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD15_reg_addr                               "0xB800DCB0"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD15_reg                                    0xB800DCB0
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD15_inst_addr                              "0x0093"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD15_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD15_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD15_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD15_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD15_reg_p0_st_m_value_b_shift              (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD15_reg_p0_st_m_value_b_mask               (0xFFFFFFFF)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD15_reg_p0_st_m_value_b(data)              (0xFFFFFFFF&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD15_get_reg_p0_st_m_value_b(data)          (0xFFFFFFFF&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD16                                       0x1800DCB4
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD16_reg_addr                               "0xB800DCB4"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD16_reg                                    0xB800DCB4
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD16_inst_addr                              "0x0094"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD16_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD16_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD16_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD16_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD16_reg_p0_st_m_value_ck_shift             (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD16_reg_p0_st_m_value_ck_mask              (0xFFFFFFFF)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD16_reg_p0_st_m_value_ck(data)             (0xFFFFFFFF&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD16_get_reg_p0_st_m_value_ck(data)         (0xFFFFFFFF&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17                                       0x1800DCB8
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_reg_addr                               "0xB800DCB8"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_reg                                    0xB800DCB8
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_inst_addr                              "0x0095"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_reg_p0_enable_one_zero_r_shift         (18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_reg_p0_prbs_invs_r_shift               (17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_reg_p0_pattern_sel_r_shift             (16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_p0_pkt_count_r_shift                   (8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_p0_err_count_r_shift                   (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_reg_p0_enable_one_zero_r_mask          (0x00040000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_reg_p0_prbs_invs_r_mask                (0x00020000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_reg_p0_pattern_sel_r_mask              (0x00010000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_p0_pkt_count_r_mask                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_p0_err_count_r_mask                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_reg_p0_enable_one_zero_r(data)         (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_reg_p0_prbs_invs_r(data)               (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_reg_p0_pattern_sel_r(data)             (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_p0_pkt_count_r(data)                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_p0_err_count_r(data)                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_get_reg_p0_enable_one_zero_r(data)     ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_get_reg_p0_prbs_invs_r(data)           ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_get_reg_p0_pattern_sel_r(data)         ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_get_p0_pkt_count_r(data)               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD17_get_p0_err_count_r(data)               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18                                       0x1800DCBC
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_reg_addr                               "0xB800DCBC"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_reg                                    0xB800DCBC
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_inst_addr                              "0x0096"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_reg_p0_enable_one_zero_g_shift         (18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_reg_p0_prbs_invs_g_shift               (17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_reg_p0_pattern_sel_g_shift             (16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_p0_pkt_count_g_shift                   (8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_p0_err_count_g_shift                   (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_reg_p0_enable_one_zero_g_mask          (0x00040000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_reg_p0_prbs_invs_g_mask                (0x00020000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_reg_p0_pattern_sel_g_mask              (0x00010000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_p0_pkt_count_g_mask                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_p0_err_count_g_mask                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_reg_p0_enable_one_zero_g(data)         (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_reg_p0_prbs_invs_g(data)               (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_reg_p0_pattern_sel_g(data)             (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_p0_pkt_count_g(data)                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_p0_err_count_g(data)                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_get_reg_p0_enable_one_zero_g(data)     ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_get_reg_p0_prbs_invs_g(data)           ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_get_reg_p0_pattern_sel_g(data)         ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_get_p0_pkt_count_g(data)               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD18_get_p0_err_count_g(data)               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19                                       0x1800DCC0
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_reg_addr                               "0xB800DCC0"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_reg                                    0xB800DCC0
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_inst_addr                              "0x0097"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_reg_p0_enable_one_zero_b_shift         (18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_reg_p0_prbs_invs_b_shift               (17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_reg_p0_pattern_sel_b_shift             (16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_p0_pkt_count_b_shift                   (8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_p0_err_count_b_shift                   (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_reg_p0_enable_one_zero_b_mask          (0x00040000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_reg_p0_prbs_invs_b_mask                (0x00020000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_reg_p0_pattern_sel_b_mask              (0x00010000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_p0_pkt_count_b_mask                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_p0_err_count_b_mask                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_reg_p0_enable_one_zero_b(data)         (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_reg_p0_prbs_invs_b(data)               (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_reg_p0_pattern_sel_b(data)             (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_p0_pkt_count_b(data)                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_p0_err_count_b(data)                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_get_reg_p0_enable_one_zero_b(data)     ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_get_reg_p0_prbs_invs_b(data)           ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_get_reg_p0_pattern_sel_b(data)         ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_get_p0_pkt_count_b(data)               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD19_get_p0_err_count_b(data)               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20                                       0x1800DCC4
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_reg_addr                               "0xB800DCC4"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_reg                                    0xB800DCC4
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_inst_addr                              "0x0098"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_reg_p0_enable_one_zero_ck_shift        (18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_reg_p0_prbs_invs_ck_shift              (17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_reg_p0_pattern_sel_ck_shift            (16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_p0_pkt_count_ck_shift                  (8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_p0_err_count_ck_shift                  (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_reg_p0_enable_one_zero_ck_mask         (0x00040000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_reg_p0_prbs_invs_ck_mask               (0x00020000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_reg_p0_pattern_sel_ck_mask             (0x00010000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_p0_pkt_count_ck_mask                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_p0_err_count_ck_mask                   (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_reg_p0_enable_one_zero_ck(data)        (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_reg_p0_prbs_invs_ck(data)              (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_reg_p0_pattern_sel_ck(data)            (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_p0_pkt_count_ck(data)                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_p0_err_count_ck(data)                  (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_get_reg_p0_enable_one_zero_ck(data)    ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_get_reg_p0_prbs_invs_ck(data)          ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_get_reg_p0_pattern_sel_ck(data)        ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_get_p0_pkt_count_ck(data)              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD20_get_p0_err_count_ck(data)              (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21                                       0x1800DCC8
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_addr                               "0xB800DCC8"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg                                    0xB800DCC8
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_inst_addr                              "0x0099"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_dphy_debug_sel_p0_shift            (14)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_infifo2_cnt_shift               (11)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_4b18b_mode_shift                (10)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_4b18b_data_order_shift          (9)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_fifo_ckinv_r_shift              (8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_fifo_ckinv_g_shift              (7)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_fifo_ckinv_b_shift              (6)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_fifo_ckinv_ck_shift             (5)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_p0_r_fifo_rst_n_shift                  (4)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_p0_g_fifo_rst_n_shift                  (3)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_p0_b_fifo_rst_n_shift                  (2)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_p0_ck_fifo_rst_n_shift                 (1)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_hdmi21_shift                    (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_dphy_debug_sel_p0_mask             (0x00004000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_infifo2_cnt_mask                (0x00003800)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_4b18b_mode_mask                 (0x00000400)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_4b18b_data_order_mask           (0x00000200)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_fifo_ckinv_r_mask               (0x00000100)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_fifo_ckinv_g_mask               (0x00000080)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_fifo_ckinv_b_mask               (0x00000040)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_fifo_ckinv_ck_mask              (0x00000020)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_p0_r_fifo_rst_n_mask                   (0x00000010)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_p0_g_fifo_rst_n_mask                   (0x00000008)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_p0_b_fifo_rst_n_mask                   (0x00000004)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_p0_ck_fifo_rst_n_mask                  (0x00000002)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_hdmi21_mask                     (0x00000001)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_dphy_debug_sel_p0(data)            (0x00004000&((data)<<14))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_infifo2_cnt(data)               (0x00003800&((data)<<11))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_4b18b_mode(data)                (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_4b18b_data_order(data)          (0x00000200&((data)<<9))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_fifo_ckinv_r(data)              (0x00000100&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_fifo_ckinv_g(data)              (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_fifo_ckinv_b(data)              (0x00000040&((data)<<6))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_fifo_ckinv_ck(data)             (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_p0_r_fifo_rst_n(data)                  (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_p0_g_fifo_rst_n(data)                  (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_p0_b_fifo_rst_n(data)                  (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_p0_ck_fifo_rst_n(data)                 (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_reg_p0_hdmi21(data)                    (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_get_reg_dphy_debug_sel_p0(data)        ((0x00004000&(data))>>14)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_get_reg_p0_infifo2_cnt(data)           ((0x00003800&(data))>>11)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_get_reg_p0_4b18b_mode(data)            ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_get_reg_p0_4b18b_data_order(data)      ((0x00000200&(data))>>9)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_get_reg_p0_fifo_ckinv_r(data)          ((0x00000100&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_get_reg_p0_fifo_ckinv_g(data)          ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_get_reg_p0_fifo_ckinv_b(data)          ((0x00000040&(data))>>6)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_get_reg_p0_fifo_ckinv_ck(data)         ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_get_p0_r_fifo_rst_n(data)              ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_get_p0_g_fifo_rst_n(data)              ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_get_p0_b_fifo_rst_n(data)              ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_get_p0_ck_fifo_rst_n(data)             ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD21_get_reg_p0_hdmi21(data)                (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22                                       0x1800DCCC
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_addr                               "0xB800DCCC"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg                                    0xB800DCCC
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_inst_addr                              "0x009A"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_p0_acc_read_out_r_shift                (24)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_001_enable_r_shift              (23)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_101_enable_r_shift              (22)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_en_bec_acc_r_shift              (21)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_en_bec_read_r_shift             (20)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_enable_one_zero_r_hdmi21_shift  (18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_prbs_invs_r_hdmi21_shift        (17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_pattern_sel_r_hdmi21_shift      (16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_p0_pkt_count_r_hdmi21_shift            (8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_p0_err_count_r_hdmi21_shift            (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_p0_acc_read_out_r_mask                 (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_001_enable_r_mask               (0x00800000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_101_enable_r_mask               (0x00400000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_en_bec_acc_r_mask               (0x00200000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_en_bec_read_r_mask              (0x00100000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_enable_one_zero_r_hdmi21_mask   (0x00040000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_prbs_invs_r_hdmi21_mask         (0x00020000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_pattern_sel_r_hdmi21_mask       (0x00010000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_p0_pkt_count_r_hdmi21_mask             (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_p0_err_count_r_hdmi21_mask             (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_p0_acc_read_out_r(data)                (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_001_enable_r(data)              (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_101_enable_r(data)              (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_en_bec_acc_r(data)              (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_en_bec_read_r(data)             (0x00100000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_enable_one_zero_r_hdmi21(data)  (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_prbs_invs_r_hdmi21(data)        (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_reg_p0_pattern_sel_r_hdmi21(data)      (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_p0_pkt_count_r_hdmi21(data)            (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_p0_err_count_r_hdmi21(data)            (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_get_p0_acc_read_out_r(data)            ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_get_reg_p0_001_enable_r(data)          ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_get_reg_p0_101_enable_r(data)          ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_get_reg_p0_en_bec_acc_r(data)          ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_get_reg_p0_en_bec_read_r(data)         ((0x00100000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_get_reg_p0_enable_one_zero_r_hdmi21(data) ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_get_reg_p0_prbs_invs_r_hdmi21(data)    ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_get_reg_p0_pattern_sel_r_hdmi21(data)  ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_get_p0_pkt_count_r_hdmi21(data)        ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD22_get_p0_err_count_r_hdmi21(data)        (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23                                       0x1800DCD0
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_addr                               "0xB800DCD0"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg                                    0xB800DCD0
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_inst_addr                              "0x009B"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_p0_acc_read_out_g_shift                (24)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_001_enable_g_shift              (23)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_101_enable_g_shift              (22)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_en_bec_acc_g_shift              (21)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_en_bec_read_g_shift             (20)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_enable_one_zero_g_hdmi21_shift  (18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_prbs_invs_g_hdmi21_shift        (17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_pattern_sel_g_hdmi21_shift      (16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_p0_pkt_count_g_hdmi21_shift            (8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_p0_err_count_g_hdmi21_shift            (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_p0_acc_read_out_g_mask                 (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_001_enable_g_mask               (0x00800000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_101_enable_g_mask               (0x00400000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_en_bec_acc_g_mask               (0x00200000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_en_bec_read_g_mask              (0x00100000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_enable_one_zero_g_hdmi21_mask   (0x00040000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_prbs_invs_g_hdmi21_mask         (0x00020000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_pattern_sel_g_hdmi21_mask       (0x00010000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_p0_pkt_count_g_hdmi21_mask             (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_p0_err_count_g_hdmi21_mask             (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_p0_acc_read_out_g(data)                (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_001_enable_g(data)              (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_101_enable_g(data)              (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_en_bec_acc_g(data)              (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_en_bec_read_g(data)             (0x00100000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_enable_one_zero_g_hdmi21(data)  (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_prbs_invs_g_hdmi21(data)        (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_reg_p0_pattern_sel_g_hdmi21(data)      (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_p0_pkt_count_g_hdmi21(data)            (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_p0_err_count_g_hdmi21(data)            (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_get_p0_acc_read_out_g(data)            ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_get_reg_p0_001_enable_g(data)          ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_get_reg_p0_101_enable_g(data)          ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_get_reg_p0_en_bec_acc_g(data)          ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_get_reg_p0_en_bec_read_g(data)         ((0x00100000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_get_reg_p0_enable_one_zero_g_hdmi21(data) ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_get_reg_p0_prbs_invs_g_hdmi21(data)    ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_get_reg_p0_pattern_sel_g_hdmi21(data)  ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_get_p0_pkt_count_g_hdmi21(data)        ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD23_get_p0_err_count_g_hdmi21(data)        (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24                                       0x1800DCD4
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_addr                               "0xB800DCD4"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg                                    0xB800DCD4
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_inst_addr                              "0x009C"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_p0_acc_read_out_b_shift                (24)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_001_enable_b_shift              (23)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_101_enable_b_shift              (22)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_en_bec_acc_b_shift              (21)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_en_bec_read_b_shift             (20)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_enable_one_zero_b_hdmi21_shift  (18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_prbs_invs_b_hdmi21_shift        (17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_pattern_sel_b_hdmi21_shift      (16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_p0_pkt_count_b_hdmi21_shift            (8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_p0_err_count_b_hdmi21_shift            (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_p0_acc_read_out_b_mask                 (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_001_enable_b_mask               (0x00800000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_101_enable_b_mask               (0x00400000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_en_bec_acc_b_mask               (0x00200000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_en_bec_read_b_mask              (0x00100000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_enable_one_zero_b_hdmi21_mask   (0x00040000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_prbs_invs_b_hdmi21_mask         (0x00020000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_pattern_sel_b_hdmi21_mask       (0x00010000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_p0_pkt_count_b_hdmi21_mask             (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_p0_err_count_b_hdmi21_mask             (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_p0_acc_read_out_b(data)                (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_001_enable_b(data)              (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_101_enable_b(data)              (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_en_bec_acc_b(data)              (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_en_bec_read_b(data)             (0x00100000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_enable_one_zero_b_hdmi21(data)  (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_prbs_invs_b_hdmi21(data)        (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_reg_p0_pattern_sel_b_hdmi21(data)      (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_p0_pkt_count_b_hdmi21(data)            (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_p0_err_count_b_hdmi21(data)            (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_get_p0_acc_read_out_b(data)            ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_get_reg_p0_001_enable_b(data)          ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_get_reg_p0_101_enable_b(data)          ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_get_reg_p0_en_bec_acc_b(data)          ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_get_reg_p0_en_bec_read_b(data)         ((0x00100000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_get_reg_p0_enable_one_zero_b_hdmi21(data) ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_get_reg_p0_prbs_invs_b_hdmi21(data)    ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_get_reg_p0_pattern_sel_b_hdmi21(data)  ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_get_p0_pkt_count_b_hdmi21(data)        ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD24_get_p0_err_count_b_hdmi21(data)        (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25                                       0x1800DCD8
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_addr                               "0xB800DCD8"
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg                                    0xB800DCD8
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_inst_addr                              "0x009D"
#define  set_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg)=data)
#define  get_HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_p0_acc_read_out_ck_shift               (24)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_001_enable_ck_shift             (23)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_101_enable_ck_shift             (22)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_en_bec_acc_ck_shift             (21)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_en_bec_read_ck_shift            (20)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_enable_one_zero_ck_hdmi21_shift (18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_prbs_invs_ck_hdmi21_shift       (17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_pattern_sel_ck_hdmi21_shift     (16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_p0_pkt_count_ck_hdmi21_shift           (8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_p0_err_count_ck_hdmi21_shift           (0)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_p0_acc_read_out_ck_mask                (0xFF000000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_001_enable_ck_mask              (0x00800000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_101_enable_ck_mask              (0x00400000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_en_bec_acc_ck_mask              (0x00200000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_en_bec_read_ck_mask             (0x00100000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_enable_one_zero_ck_hdmi21_mask  (0x00040000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_prbs_invs_ck_hdmi21_mask        (0x00020000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_pattern_sel_ck_hdmi21_mask      (0x00010000)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_p0_pkt_count_ck_hdmi21_mask            (0x0000FF00)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_p0_err_count_ck_hdmi21_mask            (0x000000FF)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_p0_acc_read_out_ck(data)               (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_001_enable_ck(data)             (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_101_enable_ck(data)             (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_en_bec_acc_ck(data)             (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_en_bec_read_ck(data)            (0x00100000&((data)<<20))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_enable_one_zero_ck_hdmi21(data) (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_prbs_invs_ck_hdmi21(data)       (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_reg_p0_pattern_sel_ck_hdmi21(data)     (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_p0_pkt_count_ck_hdmi21(data)           (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_p0_err_count_ck_hdmi21(data)           (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_get_p0_acc_read_out_ck(data)           ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_get_reg_p0_001_enable_ck(data)         ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_get_reg_p0_101_enable_ck(data)         ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_get_reg_p0_en_bec_acc_ck(data)         ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_get_reg_p0_en_bec_read_ck(data)        ((0x00100000&(data))>>20)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_get_reg_p0_enable_one_zero_ck_hdmi21(data) ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_get_reg_p0_prbs_invs_ck_hdmi21(data)   ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_get_reg_p0_pattern_sel_ck_hdmi21(data) ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_get_p0_pkt_count_ck_hdmi21(data)       ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P0_HD21_Y1_REGD25_get_p0_err_count_ck_hdmi21(data)       (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00                                       0x1800DD00
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_addr                               "0xB800DD00"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg                                    0xB800DD00
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_inst_addr                              "0x009E"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_r_dig_rst_n_shift                   (31)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_g_dig_rst_n_shift                   (30)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_b_dig_rst_n_shift                   (29)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_r_cdr_rst_n_shift                   (28)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_g_cdr_rst_n_shift                   (27)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_b_cdr_rst_n_shift                   (26)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_cdr_ckinv_r_shift               (25)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_cdr_ckinv_g_shift               (24)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_cdr_ckinv_b_shift               (23)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_shift_inv_r_shift               (22)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_shift_inv_g_shift               (21)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_shift_inv_b_shift               (20)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_rate_sel_shift                  (17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_kd_shift                        (16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_kp_shift                        (8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_ki_shift                        (5)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_bypass_sdm_int_shift            (4)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_data_order_shift                (3)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_infifo_cnt_shift                (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_r_dig_rst_n_mask                    (0x80000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_g_dig_rst_n_mask                    (0x40000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_b_dig_rst_n_mask                    (0x20000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_r_cdr_rst_n_mask                    (0x10000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_g_cdr_rst_n_mask                    (0x08000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_b_cdr_rst_n_mask                    (0x04000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_cdr_ckinv_r_mask                (0x02000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_cdr_ckinv_g_mask                (0x01000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_cdr_ckinv_b_mask                (0x00800000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_shift_inv_r_mask                (0x00400000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_shift_inv_g_mask                (0x00200000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_shift_inv_b_mask                (0x00100000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_rate_sel_mask                   (0x000E0000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_kd_mask                         (0x00010000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_kp_mask                         (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_ki_mask                         (0x000000E0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_bypass_sdm_int_mask             (0x00000010)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_data_order_mask                 (0x00000008)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_infifo_cnt_mask                 (0x00000007)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_r_dig_rst_n(data)                   (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_g_dig_rst_n(data)                   (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_b_dig_rst_n(data)                   (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_r_cdr_rst_n(data)                   (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_g_cdr_rst_n(data)                   (0x08000000&((data)<<27))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_p1_b_cdr_rst_n(data)                   (0x04000000&((data)<<26))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_cdr_ckinv_r(data)               (0x02000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_cdr_ckinv_g(data)               (0x01000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_cdr_ckinv_b(data)               (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_shift_inv_r(data)               (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_shift_inv_g(data)               (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_shift_inv_b(data)               (0x00100000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_rate_sel(data)                  (0x000E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_kd(data)                        (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_kp(data)                        (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_ki(data)                        (0x000000E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_bypass_sdm_int(data)            (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_data_order(data)                (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_reg_p1_infifo_cnt(data)                (0x00000007&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_p1_r_dig_rst_n(data)               ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_p1_g_dig_rst_n(data)               ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_p1_b_dig_rst_n(data)               ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_p1_r_cdr_rst_n(data)               ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_p1_g_cdr_rst_n(data)               ((0x08000000&(data))>>27)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_p1_b_cdr_rst_n(data)               ((0x04000000&(data))>>26)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_reg_p1_cdr_ckinv_r(data)           ((0x02000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_reg_p1_cdr_ckinv_g(data)           ((0x01000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_reg_p1_cdr_ckinv_b(data)           ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_reg_p1_shift_inv_r(data)           ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_reg_p1_shift_inv_g(data)           ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_reg_p1_shift_inv_b(data)           ((0x00100000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_reg_p1_rate_sel(data)              ((0x000E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_reg_p1_kd(data)                    ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_reg_p1_kp(data)                    ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_reg_p1_ki(data)                    ((0x000000E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_reg_p1_bypass_sdm_int(data)        ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_reg_p1_data_order(data)            ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD00_get_reg_p1_infifo_cnt(data)            (0x00000007&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01                                       0x1800DD04
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_addr                               "0xB800DD04"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg                                    0xB800DD04
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_inst_addr                              "0x009F"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_int_init_shift                  (18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_acc2_period_shift               (8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_squ_tri_shift                   (7)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_acc2_manual_shift               (6)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_testout_sel_shift               (4)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_ercnt_en_shift                  (3)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_edge_out_shift                  (2)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_pi_m_mode_r_shift               (1)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_dyn_kp_en_shift                 (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_int_init_mask                   (0xFFFC0000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_acc2_period_mask                (0x0003FF00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_squ_tri_mask                    (0x00000080)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_acc2_manual_mask                (0x00000040)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_testout_sel_mask                (0x00000030)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_ercnt_en_mask                   (0x00000008)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_edge_out_mask                   (0x00000004)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_pi_m_mode_r_mask                (0x00000002)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_dyn_kp_en_mask                  (0x00000001)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_int_init(data)                  (0xFFFC0000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_acc2_period(data)               (0x0003FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_squ_tri(data)                   (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_acc2_manual(data)               (0x00000040&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_testout_sel(data)               (0x00000030&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_ercnt_en(data)                  (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_edge_out(data)                  (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_pi_m_mode_r(data)               (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_reg_p1_dyn_kp_en(data)                 (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_get_reg_p1_int_init(data)              ((0xFFFC0000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_get_reg_p1_acc2_period(data)           ((0x0003FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_get_reg_p1_squ_tri(data)               ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_get_reg_p1_acc2_manual(data)           ((0x00000040&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_get_reg_p1_testout_sel(data)           ((0x00000030&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_get_reg_p1_ercnt_en(data)              ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_get_reg_p1_edge_out(data)              ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_get_reg_p1_pi_m_mode_r(data)           ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD01_get_reg_p1_dyn_kp_en(data)             (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02                                       0x1800DD08
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg_addr                               "0xB800DD08"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg                                    0xB800DD08
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_inst_addr                              "0x00A0"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg_p1_en_m_value_shift                (28)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg_p1_st_mode_shift                   (27)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg_p1_timer_lpf_shift                 (18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg_p1_timer_eq_shift                  (13)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg_p1_timer_ber_shift                 (8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg_p1_en_m_value_mask                 (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg_p1_st_mode_mask                    (0x08000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg_p1_timer_lpf_mask                  (0x007C0000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg_p1_timer_eq_mask                   (0x0003E000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg_p1_timer_ber_mask                  (0x00001F00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg_p1_en_m_value(data)                (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg_p1_st_mode(data)                   (0x08000000&((data)<<27))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg_p1_timer_lpf(data)                 (0x007C0000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg_p1_timer_eq(data)                  (0x0003E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_reg_p1_timer_ber(data)                 (0x00001F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_get_reg_p1_en_m_value(data)            ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_get_reg_p1_st_mode(data)               ((0x08000000&(data))>>27)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_get_reg_p1_timer_lpf(data)             ((0x007C0000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_get_reg_p1_timer_eq(data)              ((0x0003E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD02_get_reg_p1_timer_ber(data)             ((0x00001F00&(data))>>8)

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03                                       0x1800DD0C
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg_addr                               "0xB800DD0C"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg                                    0xB800DD0C
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_inst_addr                              "0x00A1"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_p1_ck_dig_rst_n_shift                  (31)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_p1_ck_cdr_rst_n_shift                  (30)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg_p1_cdr_ckinv_ck_shift              (29)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg_p1_shift_inv_ck_shift              (28)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg_p1_pi_m_mode_g_shift               (27)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg_p1_pi_m_mode_b_shift               (26)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg_p1_pi_m_mode_ck_shift              (25)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_p1_ck_dig_rst_n_mask                   (0x80000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_p1_ck_cdr_rst_n_mask                   (0x40000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg_p1_cdr_ckinv_ck_mask               (0x20000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg_p1_shift_inv_ck_mask               (0x10000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg_p1_pi_m_mode_g_mask                (0x08000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg_p1_pi_m_mode_b_mask                (0x04000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg_p1_pi_m_mode_ck_mask               (0x02000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_p1_ck_dig_rst_n(data)                  (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_p1_ck_cdr_rst_n(data)                  (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg_p1_cdr_ckinv_ck(data)              (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg_p1_shift_inv_ck(data)              (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg_p1_pi_m_mode_g(data)               (0x08000000&((data)<<27))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg_p1_pi_m_mode_b(data)               (0x04000000&((data)<<26))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_reg_p1_pi_m_mode_ck(data)              (0x02000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_get_p1_ck_dig_rst_n(data)              ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_get_p1_ck_cdr_rst_n(data)              ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_get_reg_p1_cdr_ckinv_ck(data)          ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_get_reg_p1_shift_inv_ck(data)          ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_get_reg_p1_pi_m_mode_g(data)           ((0x08000000&(data))>>27)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_get_reg_p1_pi_m_mode_b(data)           ((0x04000000&(data))>>26)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD03_get_reg_p1_pi_m_mode_ck(data)          ((0x02000000&(data))>>25)

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04                                       0x1800DD10
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_reg_addr                               "0xB800DD10"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_reg                                    0xB800DD10
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_inst_addr                              "0x00A2"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_st_ro_r_shift                       (24)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_en_ro_r_shift                       (20)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_st_ro_g_shift                       (14)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_en_ro_g_shift                       (10)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_st_ro_b_shift                       (4)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_en_ro_b_shift                       (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_st_ro_r_mask                        (0x1F000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_en_ro_r_mask                        (0x00F00000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_st_ro_g_mask                        (0x0007C000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_en_ro_g_mask                        (0x00003C00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_st_ro_b_mask                        (0x000001F0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_en_ro_b_mask                        (0x0000000F)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_st_ro_r(data)                       (0x1F000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_en_ro_r(data)                       (0x00F00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_st_ro_g(data)                       (0x0007C000&((data)<<14))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_en_ro_g(data)                       (0x00003C00&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_st_ro_b(data)                       (0x000001F0&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_p1_en_ro_b(data)                       (0x0000000F&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_get_p1_st_ro_r(data)                   ((0x1F000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_get_p1_en_ro_r(data)                   ((0x00F00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_get_p1_st_ro_g(data)                   ((0x0007C000&(data))>>14)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_get_p1_en_ro_g(data)                   ((0x00003C00&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_get_p1_st_ro_b(data)                   ((0x000001F0&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD04_get_p1_en_ro_b(data)                   (0x0000000F&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05                                       0x1800DD14
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_reg_addr                               "0xB800DD14"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_reg                                    0xB800DD14
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_inst_addr                              "0x00A3"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_p1_er_count_r_shift                    (20)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_p1_er_count_g_shift                    (10)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_p1_er_count_b_shift                    (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_p1_er_count_r_mask                     (0x3FF00000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_p1_er_count_g_mask                     (0x000FFC00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_p1_er_count_b_mask                     (0x000003FF)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_p1_er_count_r(data)                    (0x3FF00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_p1_er_count_g(data)                    (0x000FFC00&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_p1_er_count_b(data)                    (0x000003FF&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_get_p1_er_count_r(data)                ((0x3FF00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_get_p1_er_count_g(data)                ((0x000FFC00&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD05_get_p1_er_count_b(data)                (0x000003FF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06                                       0x1800DD18
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_reg_addr                               "0xB800DD18"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_reg                                    0xB800DD18
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_inst_addr                              "0x00A4"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_p1_st_ro_ck_shift                      (14)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_p1_en_ro_ck_shift                      (10)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_p1_er_count_ck_shift                   (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_p1_st_ro_ck_mask                       (0x0007C000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_p1_en_ro_ck_mask                       (0x00003C00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_p1_er_count_ck_mask                    (0x000003FF)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_p1_st_ro_ck(data)                      (0x0007C000&((data)<<14))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_p1_en_ro_ck(data)                      (0x00003C00&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_p1_er_count_ck(data)                   (0x000003FF&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_get_p1_st_ro_ck(data)                  ((0x0007C000&(data))>>14)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_get_p1_en_ro_ck(data)                  ((0x00003C00&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD06_get_p1_er_count_ck(data)               (0x000003FF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07                                       0x1800DD1C
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_addr                               "0xB800DD1C"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg                                    0xB800DD1C
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_inst_addr                              "0x00A5"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_clk_rdy_shift            (31)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_eqen_rdy_shift           (30)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_data_rdy_shift           (29)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_pi_shift                 (28)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_data_rdy_time_shift             (24)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_en_clkout_manual_shift          (23)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_en_eqen_manual_shift            (22)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_en_data_manual_shift            (21)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_eqen_rdy_time_shift             (17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_order_shift                     (16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_pll_wd_base_time_shift          (13)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_pll_wd_en_shift                 (12)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_pll_wd_rst_wid_shift            (10)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_pll_wd_time_rdy_shift           (8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_acdr_l0_en_shift                (7)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_eqen_rdy_l0_shift        (6)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_data_rdy_l0_shift        (5)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_en_eqen_manual_l0_shift         (4)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_en_data_manual_l0_shift         (3)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_p1_pll_wd_ckrdy_ro_shift               (2)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_p1_pll_wd_rst_wc_shift                 (1)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_p1_wdog_rst_n_shift                    (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_clk_rdy_mask             (0x80000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_eqen_rdy_mask            (0x40000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_data_rdy_mask            (0x20000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_pi_mask                  (0x10000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_data_rdy_time_mask              (0x0F000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_en_clkout_manual_mask           (0x00800000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_en_eqen_manual_mask             (0x00400000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_en_data_manual_mask             (0x00200000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_eqen_rdy_time_mask              (0x001E0000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_order_mask                      (0x00010000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_pll_wd_base_time_mask           (0x0000E000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_pll_wd_en_mask                  (0x00001000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_pll_wd_rst_wid_mask             (0x00000C00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_pll_wd_time_rdy_mask            (0x00000300)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_acdr_l0_en_mask                 (0x00000080)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_eqen_rdy_l0_mask         (0x00000040)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_data_rdy_l0_mask         (0x00000020)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_en_eqen_manual_l0_mask          (0x00000010)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_en_data_manual_l0_mask          (0x00000008)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_p1_pll_wd_ckrdy_ro_mask                (0x00000004)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_p1_pll_wd_rst_wc_mask                  (0x00000002)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_p1_wdog_rst_n_mask                     (0x00000001)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_clk_rdy(data)            (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_eqen_rdy(data)           (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_data_rdy(data)           (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_pi(data)                 (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_data_rdy_time(data)             (0x0F000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_en_clkout_manual(data)          (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_en_eqen_manual(data)            (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_en_data_manual(data)            (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_eqen_rdy_time(data)             (0x001E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_order(data)                     (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_pll_wd_base_time(data)          (0x0000E000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_pll_wd_en(data)                 (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_pll_wd_rst_wid(data)            (0x00000C00&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_pll_wd_time_rdy(data)           (0x00000300&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_acdr_l0_en(data)                (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_eqen_rdy_l0(data)        (0x00000040&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_bypass_data_rdy_l0(data)        (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_en_eqen_manual_l0(data)         (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_reg_p1_en_data_manual_l0(data)         (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_p1_pll_wd_ckrdy_ro(data)               (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_p1_pll_wd_rst_wc(data)                 (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_p1_wdog_rst_n(data)                    (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_bypass_clk_rdy(data)        ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_bypass_eqen_rdy(data)       ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_bypass_data_rdy(data)       ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_bypass_pi(data)             ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_data_rdy_time(data)         ((0x0F000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_en_clkout_manual(data)      ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_en_eqen_manual(data)        ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_en_data_manual(data)        ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_eqen_rdy_time(data)         ((0x001E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_order(data)                 ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_pll_wd_base_time(data)      ((0x0000E000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_pll_wd_en(data)             ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_pll_wd_rst_wid(data)        ((0x00000C00&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_pll_wd_time_rdy(data)       ((0x00000300&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_acdr_l0_en(data)            ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_bypass_eqen_rdy_l0(data)    ((0x00000040&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_bypass_data_rdy_l0(data)    ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_en_eqen_manual_l0(data)     ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_reg_p1_en_data_manual_l0(data)     ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_p1_pll_wd_ckrdy_ro(data)           ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_p1_pll_wd_rst_wc(data)             ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD07_get_p1_wdog_rst_n(data)                (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08                                       0x1800DD20
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_reg_addr                               "0xB800DD20"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_reg                                    0xB800DD20
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_inst_addr                              "0x00A6"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_reg_p1_wd_sdm_en_shift                 (31)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_reg_p1_f_code_shift                    (16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_reg_p1_n_code_shift                    (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_reg_p1_wd_sdm_en_mask                  (0x80000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_reg_p1_f_code_mask                     (0x0FFF0000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_reg_p1_n_code_mask                     (0x000001FF)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_reg_p1_wd_sdm_en(data)                 (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_reg_p1_f_code(data)                    (0x0FFF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_reg_p1_n_code(data)                    (0x000001FF&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_get_reg_p1_wd_sdm_en(data)             ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_get_reg_p1_f_code(data)                ((0x0FFF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD08_get_reg_p1_n_code(data)                (0x000001FF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09                                       0x1800DD24
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_addr                               "0xB800DD24"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg                                    0xB800DD24
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_inst_addr                              "0x00A7"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_acdr_l3_en_shift                (14)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_eqen_rdy_l3_shift        (13)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_data_rdy_l3_shift        (12)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_eqen_manual_l3_shift         (11)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_data_manual_l3_shift         (10)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_acdr_l2_en_shift                (9)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_eqen_rdy_l2_shift        (8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_data_rdy_l2_shift        (7)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_eqen_manual_l2_shift         (6)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_data_manual_l2_shift         (5)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_acdr_l1_en_shift                (4)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_eqen_rdy_l1_shift        (3)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_data_rdy_l1_shift        (2)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_eqen_manual_l1_shift         (1)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_data_manual_l1_shift         (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_acdr_l3_en_mask                 (0x00004000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_eqen_rdy_l3_mask         (0x00002000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_data_rdy_l3_mask         (0x00001000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_eqen_manual_l3_mask          (0x00000800)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_data_manual_l3_mask          (0x00000400)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_acdr_l2_en_mask                 (0x00000200)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_eqen_rdy_l2_mask         (0x00000100)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_data_rdy_l2_mask         (0x00000080)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_eqen_manual_l2_mask          (0x00000040)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_data_manual_l2_mask          (0x00000020)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_acdr_l1_en_mask                 (0x00000010)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_eqen_rdy_l1_mask         (0x00000008)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_data_rdy_l1_mask         (0x00000004)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_eqen_manual_l1_mask          (0x00000002)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_data_manual_l1_mask          (0x00000001)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_acdr_l3_en(data)                (0x00004000&((data)<<14))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_eqen_rdy_l3(data)        (0x00002000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_data_rdy_l3(data)        (0x00001000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_eqen_manual_l3(data)         (0x00000800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_data_manual_l3(data)         (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_acdr_l2_en(data)                (0x00000200&((data)<<9))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_eqen_rdy_l2(data)        (0x00000100&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_data_rdy_l2(data)        (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_eqen_manual_l2(data)         (0x00000040&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_data_manual_l2(data)         (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_acdr_l1_en(data)                (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_eqen_rdy_l1(data)        (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_bypass_data_rdy_l1(data)        (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_eqen_manual_l1(data)         (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_reg_p1_en_data_manual_l1(data)         (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_get_reg_p1_acdr_l3_en(data)            ((0x00004000&(data))>>14)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_get_reg_p1_bypass_eqen_rdy_l3(data)    ((0x00002000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_get_reg_p1_bypass_data_rdy_l3(data)    ((0x00001000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_get_reg_p1_en_eqen_manual_l3(data)     ((0x00000800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_get_reg_p1_en_data_manual_l3(data)     ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_get_reg_p1_acdr_l2_en(data)            ((0x00000200&(data))>>9)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_get_reg_p1_bypass_eqen_rdy_l2(data)    ((0x00000100&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_get_reg_p1_bypass_data_rdy_l2(data)    ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_get_reg_p1_en_eqen_manual_l2(data)     ((0x00000040&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_get_reg_p1_en_data_manual_l2(data)     ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_get_reg_p1_acdr_l1_en(data)            ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_get_reg_p1_bypass_eqen_rdy_l1(data)    ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_get_reg_p1_bypass_data_rdy_l1(data)    ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_get_reg_p1_en_eqen_manual_l1(data)     ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD09_get_reg_p1_en_data_manual_l1(data)     (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00                                         0x1800DD28
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_addr                                 "0xB800DD28"
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg                                      0xB800DD28
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_inst_addr                                "0x00A8"
#define  set_HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_auto_mode_shift                 (31)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_adp_en_manual_shift             (30)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_cp_en_manual_shift              (29)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_adap_eq_off_shift               (28)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_adp_time_shift                  (23)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_calib_time_shift                (20)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_calib_manual_shift              (19)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_calib_late_shift                (18)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_vco_coarse_shift                (11)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_divide_num_shift                (3)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_bypass_k_band_mode_shift        (2)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_stable_time_mode_shift          (1)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_cp2adp_en_shift                 (0)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_auto_mode_mask                  (0x80000000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_adp_en_manual_mask              (0x40000000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_cp_en_manual_mask               (0x20000000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_adap_eq_off_mask                (0x10000000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_adp_time_mask                   (0x0F800000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_calib_time_mask                 (0x00700000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_calib_manual_mask               (0x00080000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_calib_late_mask                 (0x00040000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_vco_coarse_mask                 (0x0003F800)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_divide_num_mask                 (0x000007F8)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_bypass_k_band_mode_mask         (0x00000004)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_stable_time_mode_mask           (0x00000002)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_cp2adp_en_mask                  (0x00000001)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_auto_mode(data)                 (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_adp_en_manual(data)             (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_cp_en_manual(data)              (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_adap_eq_off(data)               (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_adp_time(data)                  (0x0F800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_calib_time(data)                (0x00700000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_calib_manual(data)              (0x00080000&((data)<<19))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_calib_late(data)                (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_vco_coarse(data)                (0x0003F800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_divide_num(data)                (0x000007F8&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_bypass_k_band_mode(data)        (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_stable_time_mode(data)          (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_reg_p1_r_cp2adp_en(data)                 (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_get_reg_p1_r_auto_mode(data)             ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_get_reg_p1_r_adp_en_manual(data)         ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_get_reg_p1_r_cp_en_manual(data)          ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_get_reg_p1_r_adap_eq_off(data)           ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_get_reg_p1_r_adp_time(data)              ((0x0F800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_get_reg_p1_r_calib_time(data)            ((0x00700000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_get_reg_p1_r_calib_manual(data)          ((0x00080000&(data))>>19)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_get_reg_p1_r_calib_late(data)            ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_get_reg_p1_r_vco_coarse(data)            ((0x0003F800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_get_reg_p1_r_divide_num(data)            ((0x000007F8&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_get_reg_p1_r_bypass_k_band_mode(data)    ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_get_reg_p1_r_stable_time_mode(data)      ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD00_get_reg_p1_r_cp2adp_en(data)             (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD01                                         0x1800DD2C
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD01_reg_addr                                 "0xB800DD2C"
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD01_reg                                      0xB800DD2C
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD01_inst_addr                                "0x00A9"
#define  set_HDMIRX_2P1_PHY_P1_FLD_R_REGD01_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_R_REGD01_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_R_REGD01_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_R_REGD01_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD01_reg_p1_r_cp2adp_time_shift               (28)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD01_reg_p1_r_lock_up_limit_shift             (16)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD01_reg_p1_r_lock_dn_limit_shift             (0)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD01_reg_p1_r_cp2adp_time_mask                (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD01_reg_p1_r_lock_up_limit_mask              (0x0FFF0000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD01_reg_p1_r_lock_dn_limit_mask              (0x00000FFF)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD01_reg_p1_r_cp2adp_time(data)               (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD01_reg_p1_r_lock_up_limit(data)             (0x0FFF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD01_reg_p1_r_lock_dn_limit(data)             (0x00000FFF&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD01_get_reg_p1_r_cp2adp_time(data)           ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD01_get_reg_p1_r_lock_up_limit(data)         ((0x0FFF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD01_get_reg_p1_r_lock_dn_limit(data)         (0x00000FFF&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02                                         0x1800DD30
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_addr                                 "0xB800DD30"
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg                                      0xB800DD30
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_inst_addr                                "0x00AA"
#define  set_HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_cdr_cp_shift                    (12)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_cdr_r_shift                     (6)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_cdr_c_shift                     (4)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_vc_sel_shift                    (2)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_calib_reset_sel_shift           (1)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_unstable_flg_shift              (0)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_cdr_cp_mask                     (0xFFFFF000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_cdr_r_mask                      (0x00000FC0)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_cdr_c_mask                      (0x00000030)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_vc_sel_mask                     (0x0000000C)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_calib_reset_sel_mask            (0x00000002)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_unstable_flg_mask               (0x00000001)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_cdr_cp(data)                    (0xFFFFF000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_cdr_r(data)                     (0x00000FC0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_cdr_c(data)                     (0x00000030&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_vc_sel(data)                    (0x0000000C&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_calib_reset_sel(data)           (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_reg_p1_r_unstable_flg(data)              (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_get_reg_p1_r_cdr_cp(data)                ((0xFFFFF000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_get_reg_p1_r_cdr_r(data)                 ((0x00000FC0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_get_reg_p1_r_cdr_c(data)                 ((0x00000030&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_get_reg_p1_r_vc_sel(data)                ((0x0000000C&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_get_reg_p1_r_calib_reset_sel(data)       ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD02_get_reg_p1_r_unstable_flg(data)          (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03                                         0x1800DD34
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg_addr                                 "0xB800DD34"
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg                                      0xB800DD34
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_inst_addr                                "0x00AB"
#define  set_HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg_p1_r_coarse_lock_up_limit_shift      (20)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg_p1_r_coarse_lock_dn_limit_shift      (8)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg_p1_r_cp_time_shift                   (3)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg_p1_r_init_time_shift                 (0)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg_p1_r_coarse_lock_up_limit_mask       (0xFFF00000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg_p1_r_coarse_lock_dn_limit_mask       (0x000FFF00)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg_p1_r_cp_time_mask                    (0x000000F8)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg_p1_r_init_time_mask                  (0x00000007)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg_p1_r_coarse_lock_up_limit(data)      (0xFFF00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg_p1_r_coarse_lock_dn_limit(data)      (0x000FFF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg_p1_r_cp_time(data)                   (0x000000F8&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_reg_p1_r_init_time(data)                 (0x00000007&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_get_reg_p1_r_coarse_lock_up_limit(data)  ((0xFFF00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_get_reg_p1_r_coarse_lock_dn_limit(data)  ((0x000FFF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_get_reg_p1_r_cp_time(data)               ((0x000000F8&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD03_get_reg_p1_r_init_time(data)             (0x00000007&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04                                         0x1800DD38
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_addr                                 "0xB800DD38"
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg                                      0xB800DD38
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_inst_addr                                "0x00AC"
#define  set_HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_coarse_calib_manual_shift       (28)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_vco_coarse_manual_shift         (24)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_vco_fine_manual_shift           (20)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_xtal_24m_en_shift               (19)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_vco_fine_time_sel_shift         (17)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_bypass_coarse_k_mode_shift      (16)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_vco_coarse_init_shift           (12)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_vco_fine_init_shift             (8)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_timer_5_shift                   (7)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_timer_6_shift                   (2)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_p1_r_fld_rstb_shift                      (1)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_p1_r_acdr_fine_tune_start_shift          (0)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_coarse_calib_manual_mask        (0x10000000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_vco_coarse_manual_mask          (0x0F000000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_vco_fine_manual_mask            (0x00F00000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_xtal_24m_en_mask                (0x00080000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_vco_fine_time_sel_mask          (0x00060000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_bypass_coarse_k_mode_mask       (0x00010000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_vco_coarse_init_mask            (0x0000F000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_vco_fine_init_mask              (0x00000F00)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_timer_5_mask                    (0x00000080)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_timer_6_mask                    (0x0000007C)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_p1_r_fld_rstb_mask                       (0x00000002)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_p1_r_acdr_fine_tune_start_mask           (0x00000001)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_coarse_calib_manual(data)       (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_vco_coarse_manual(data)         (0x0F000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_vco_fine_manual(data)           (0x00F00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_xtal_24m_en(data)               (0x00080000&((data)<<19))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_vco_fine_time_sel(data)         (0x00060000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_bypass_coarse_k_mode(data)      (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_vco_coarse_init(data)           (0x0000F000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_vco_fine_init(data)             (0x00000F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_timer_5(data)                   (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_reg_p1_r_timer_6(data)                   (0x0000007C&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_p1_r_fld_rstb(data)                      (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_p1_r_acdr_fine_tune_start(data)          (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_get_reg_p1_r_coarse_calib_manual(data)   ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_get_reg_p1_r_vco_coarse_manual(data)     ((0x0F000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_get_reg_p1_r_vco_fine_manual(data)       ((0x00F00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_get_reg_p1_r_xtal_24m_en(data)           ((0x00080000&(data))>>19)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_get_reg_p1_r_vco_fine_time_sel(data)     ((0x00060000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_get_reg_p1_r_bypass_coarse_k_mode(data)  ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_get_reg_p1_r_vco_coarse_init(data)       ((0x0000F000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_get_reg_p1_r_vco_fine_init(data)         ((0x00000F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_get_reg_p1_r_timer_5(data)               ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_get_reg_p1_r_timer_6(data)               ((0x0000007C&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_get_p1_r_fld_rstb(data)                  ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD04_get_p1_r_acdr_fine_tune_start(data)      (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05                                         0x1800DD3C
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_addr                                 "0xB800DD3C"
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg                                      0xB800DD3C
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_inst_addr                                "0x00AD"
#define  set_HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_start_en_manual_shift           (31)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_pfd_en_manual_shift             (30)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_pfd_time_shift                  (25)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_pfd_bypass_shift                (24)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_rxidle_bypass_shift             (23)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_slope_manual_shift              (22)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_slope_band_shift                (17)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_old_mode_shift                  (16)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_coarse_init_shift               (8)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_vc_chg_time_shift               (5)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_timer_4_shift                   (0)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_start_en_manual_mask            (0x80000000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_pfd_en_manual_mask              (0x40000000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_pfd_time_mask                   (0x3E000000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_pfd_bypass_mask                 (0x01000000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_rxidle_bypass_mask              (0x00800000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_slope_manual_mask               (0x00400000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_slope_band_mask                 (0x003E0000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_old_mode_mask                   (0x00010000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_coarse_init_mask                (0x00003F00)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_vc_chg_time_mask                (0x000000E0)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_timer_4_mask                    (0x0000001F)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_start_en_manual(data)           (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_pfd_en_manual(data)             (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_pfd_time(data)                  (0x3E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_pfd_bypass(data)                (0x01000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_rxidle_bypass(data)             (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_slope_manual(data)              (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_slope_band(data)                (0x003E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_old_mode(data)                  (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_coarse_init(data)               (0x00003F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_vc_chg_time(data)               (0x000000E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_reg_p1_r_timer_4(data)                   (0x0000001F&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_get_reg_p1_r_start_en_manual(data)       ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_get_reg_p1_r_pfd_en_manual(data)         ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_get_reg_p1_r_pfd_time(data)              ((0x3E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_get_reg_p1_r_pfd_bypass(data)            ((0x01000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_get_reg_p1_r_rxidle_bypass(data)         ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_get_reg_p1_r_slope_manual(data)          ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_get_reg_p1_r_slope_band(data)            ((0x003E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_get_reg_p1_r_old_mode(data)              ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_get_reg_p1_r_coarse_init(data)           ((0x00003F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_get_reg_p1_r_vc_chg_time(data)           ((0x000000E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD05_get_reg_p1_r_timer_4(data)               (0x0000001F&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06                                         0x1800DD40
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_reg_addr                                 "0xB800DD40"
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_reg                                      0xB800DD40
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_inst_addr                                "0x00AE"
#define  set_HDMIRX_2P1_PHY_P1_FLD_R_REGD06_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_R_REGD06_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_R_REGD06_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_R_REGD06_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_fld_st_reg_shift                    (27)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_adp_en_fsm_reg_shift                (26)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_cp_en_fsm_reg_shift                 (25)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_coarse_fsm_reg_shift                (18)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_pfd_en_fsm_reg_shift                (17)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_fine_fsm_reg_shift                  (10)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_reg_p1_r_cp_time_2_shift                 (5)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_coarse_too_fast_reg_shift           (4)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_coarse_too_slow_reg_shift           (3)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_coarse_calib_ok_shift               (2)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_calib_ok_shift                      (1)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_start_en_shift                      (0)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_fld_st_reg_mask                     (0xF8000000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_adp_en_fsm_reg_mask                 (0x04000000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_cp_en_fsm_reg_mask                  (0x02000000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_coarse_fsm_reg_mask                 (0x01FC0000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_pfd_en_fsm_reg_mask                 (0x00020000)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_fine_fsm_reg_mask                   (0x0001FC00)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_reg_p1_r_cp_time_2_mask                  (0x000003E0)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_coarse_too_fast_reg_mask            (0x00000010)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_coarse_too_slow_reg_mask            (0x00000008)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_coarse_calib_ok_mask                (0x00000004)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_calib_ok_mask                       (0x00000002)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_start_en_mask                       (0x00000001)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_fld_st_reg(data)                    (0xF8000000&((data)<<27))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_adp_en_fsm_reg(data)                (0x04000000&((data)<<26))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_cp_en_fsm_reg(data)                 (0x02000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_coarse_fsm_reg(data)                (0x01FC0000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_pfd_en_fsm_reg(data)                (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_fine_fsm_reg(data)                  (0x0001FC00&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_reg_p1_r_cp_time_2(data)                 (0x000003E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_coarse_too_fast_reg(data)           (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_coarse_too_slow_reg(data)           (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_coarse_calib_ok(data)               (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_calib_ok(data)                      (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_p1_r_start_en(data)                      (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_get_p1_r_fld_st_reg(data)                ((0xF8000000&(data))>>27)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_get_p1_r_adp_en_fsm_reg(data)            ((0x04000000&(data))>>26)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_get_p1_r_cp_en_fsm_reg(data)             ((0x02000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_get_p1_r_coarse_fsm_reg(data)            ((0x01FC0000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_get_p1_r_pfd_en_fsm_reg(data)            ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_get_p1_r_fine_fsm_reg(data)              ((0x0001FC00&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_get_reg_p1_r_cp_time_2(data)             ((0x000003E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_get_p1_r_coarse_too_fast_reg(data)       ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_get_p1_r_coarse_too_slow_reg(data)       ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_get_p1_r_coarse_calib_ok(data)           ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_get_p1_r_calib_ok(data)                  ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_FLD_R_REGD06_get_p1_r_start_en(data)                  (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00                                         0x1800DD44
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_addr                                 "0xB800DD44"
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg                                      0xB800DD44
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_inst_addr                                "0x00AF"
#define  set_HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_auto_mode_shift                 (31)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_adp_en_manual_shift             (30)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_cp_en_manual_shift              (29)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_adap_eq_off_shift               (28)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_adp_time_shift                  (23)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_calib_time_shift                (20)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_calib_manual_shift              (19)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_calib_late_shift                (18)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_vco_coarse_shift                (11)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_divide_num_shift                (3)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_bypass_k_band_mode_shift        (2)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_stable_time_mode_shift          (1)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_cp2adp_en_shift                 (0)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_auto_mode_mask                  (0x80000000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_adp_en_manual_mask              (0x40000000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_cp_en_manual_mask               (0x20000000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_adap_eq_off_mask                (0x10000000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_adp_time_mask                   (0x0F800000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_calib_time_mask                 (0x00700000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_calib_manual_mask               (0x00080000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_calib_late_mask                 (0x00040000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_vco_coarse_mask                 (0x0003F800)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_divide_num_mask                 (0x000007F8)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_bypass_k_band_mode_mask         (0x00000004)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_stable_time_mode_mask           (0x00000002)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_cp2adp_en_mask                  (0x00000001)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_auto_mode(data)                 (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_adp_en_manual(data)             (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_cp_en_manual(data)              (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_adap_eq_off(data)               (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_adp_time(data)                  (0x0F800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_calib_time(data)                (0x00700000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_calib_manual(data)              (0x00080000&((data)<<19))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_calib_late(data)                (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_vco_coarse(data)                (0x0003F800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_divide_num(data)                (0x000007F8&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_bypass_k_band_mode(data)        (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_stable_time_mode(data)          (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_reg_p1_g_cp2adp_en(data)                 (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_get_reg_p1_g_auto_mode(data)             ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_get_reg_p1_g_adp_en_manual(data)         ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_get_reg_p1_g_cp_en_manual(data)          ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_get_reg_p1_g_adap_eq_off(data)           ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_get_reg_p1_g_adp_time(data)              ((0x0F800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_get_reg_p1_g_calib_time(data)            ((0x00700000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_get_reg_p1_g_calib_manual(data)          ((0x00080000&(data))>>19)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_get_reg_p1_g_calib_late(data)            ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_get_reg_p1_g_vco_coarse(data)            ((0x0003F800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_get_reg_p1_g_divide_num(data)            ((0x000007F8&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_get_reg_p1_g_bypass_k_band_mode(data)    ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_get_reg_p1_g_stable_time_mode(data)      ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD00_get_reg_p1_g_cp2adp_en(data)             (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD01                                         0x1800DD48
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD01_reg_addr                                 "0xB800DD48"
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD01_reg                                      0xB800DD48
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD01_inst_addr                                "0x00B0"
#define  set_HDMIRX_2P1_PHY_P1_FLD_G_REGD01_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_G_REGD01_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_G_REGD01_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_G_REGD01_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD01_reg_p1_g_cp2adp_time_shift               (28)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD01_reg_p1_g_lock_up_limit_shift             (16)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD01_reg_p1_g_lock_dn_limit_shift             (0)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD01_reg_p1_g_cp2adp_time_mask                (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD01_reg_p1_g_lock_up_limit_mask              (0x0FFF0000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD01_reg_p1_g_lock_dn_limit_mask              (0x00000FFF)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD01_reg_p1_g_cp2adp_time(data)               (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD01_reg_p1_g_lock_up_limit(data)             (0x0FFF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD01_reg_p1_g_lock_dn_limit(data)             (0x00000FFF&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD01_get_reg_p1_g_cp2adp_time(data)           ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD01_get_reg_p1_g_lock_up_limit(data)         ((0x0FFF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD01_get_reg_p1_g_lock_dn_limit(data)         (0x00000FFF&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02                                         0x1800DD4C
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_addr                                 "0xB800DD4C"
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg                                      0xB800DD4C
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_inst_addr                                "0x00B1"
#define  set_HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_cdr_cp_shift                    (12)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_cdr_r_shift                     (6)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_cdr_c_shift                     (4)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_vc_sel_shift                    (2)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_calib_reset_sel_shift           (1)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_unstable_flg_shift              (0)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_cdr_cp_mask                     (0xFFFFF000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_cdr_r_mask                      (0x00000FC0)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_cdr_c_mask                      (0x00000030)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_vc_sel_mask                     (0x0000000C)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_calib_reset_sel_mask            (0x00000002)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_unstable_flg_mask               (0x00000001)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_cdr_cp(data)                    (0xFFFFF000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_cdr_r(data)                     (0x00000FC0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_cdr_c(data)                     (0x00000030&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_vc_sel(data)                    (0x0000000C&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_calib_reset_sel(data)           (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_reg_p1_g_unstable_flg(data)              (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_get_reg_p1_g_cdr_cp(data)                ((0xFFFFF000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_get_reg_p1_g_cdr_r(data)                 ((0x00000FC0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_get_reg_p1_g_cdr_c(data)                 ((0x00000030&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_get_reg_p1_g_vc_sel(data)                ((0x0000000C&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_get_reg_p1_g_calib_reset_sel(data)       ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD02_get_reg_p1_g_unstable_flg(data)          (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03                                         0x1800DD50
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg_addr                                 "0xB800DD50"
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg                                      0xB800DD50
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_inst_addr                                "0x00B2"
#define  set_HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg_p1_g_coarse_lock_up_limit_shift      (20)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg_p1_g_coarse_lock_dn_limit_shift      (8)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg_p1_g_cp_time_shift                   (3)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg_p1_g_init_time_shift                 (0)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg_p1_g_coarse_lock_up_limit_mask       (0xFFF00000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg_p1_g_coarse_lock_dn_limit_mask       (0x000FFF00)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg_p1_g_cp_time_mask                    (0x000000F8)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg_p1_g_init_time_mask                  (0x00000007)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg_p1_g_coarse_lock_up_limit(data)      (0xFFF00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg_p1_g_coarse_lock_dn_limit(data)      (0x000FFF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg_p1_g_cp_time(data)                   (0x000000F8&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_reg_p1_g_init_time(data)                 (0x00000007&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_get_reg_p1_g_coarse_lock_up_limit(data)  ((0xFFF00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_get_reg_p1_g_coarse_lock_dn_limit(data)  ((0x000FFF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_get_reg_p1_g_cp_time(data)               ((0x000000F8&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD03_get_reg_p1_g_init_time(data)             (0x00000007&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04                                         0x1800DD54
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_addr                                 "0xB800DD54"
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg                                      0xB800DD54
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_inst_addr                                "0x00B3"
#define  set_HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_coarse_calib_manual_shift       (28)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_vco_coarse_manual_shift         (24)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_vco_fine_manual_shift           (20)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_xtal_24m_en_shift               (19)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_vco_fine_time_sel_shift         (17)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_bypass_coarse_k_mode_shift      (16)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_vco_coarse_init_shift           (12)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_vco_fine_init_shift             (8)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_timer_5_shift                   (7)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_timer_6_shift                   (2)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_p1_g_fld_rstb_shift                      (1)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_p1_g_acdr_fine_tune_start_shift          (0)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_coarse_calib_manual_mask        (0x10000000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_vco_coarse_manual_mask          (0x0F000000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_vco_fine_manual_mask            (0x00F00000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_xtal_24m_en_mask                (0x00080000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_vco_fine_time_sel_mask          (0x00060000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_bypass_coarse_k_mode_mask       (0x00010000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_vco_coarse_init_mask            (0x0000F000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_vco_fine_init_mask              (0x00000F00)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_timer_5_mask                    (0x00000080)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_timer_6_mask                    (0x0000007C)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_p1_g_fld_rstb_mask                       (0x00000002)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_p1_g_acdr_fine_tune_start_mask           (0x00000001)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_coarse_calib_manual(data)       (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_vco_coarse_manual(data)         (0x0F000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_vco_fine_manual(data)           (0x00F00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_xtal_24m_en(data)               (0x00080000&((data)<<19))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_vco_fine_time_sel(data)         (0x00060000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_bypass_coarse_k_mode(data)      (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_vco_coarse_init(data)           (0x0000F000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_vco_fine_init(data)             (0x00000F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_timer_5(data)                   (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_reg_p1_g_timer_6(data)                   (0x0000007C&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_p1_g_fld_rstb(data)                      (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_p1_g_acdr_fine_tune_start(data)          (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_get_reg_p1_g_coarse_calib_manual(data)   ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_get_reg_p1_g_vco_coarse_manual(data)     ((0x0F000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_get_reg_p1_g_vco_fine_manual(data)       ((0x00F00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_get_reg_p1_g_xtal_24m_en(data)           ((0x00080000&(data))>>19)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_get_reg_p1_g_vco_fine_time_sel(data)     ((0x00060000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_get_reg_p1_g_bypass_coarse_k_mode(data)  ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_get_reg_p1_g_vco_coarse_init(data)       ((0x0000F000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_get_reg_p1_g_vco_fine_init(data)         ((0x00000F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_get_reg_p1_g_timer_5(data)               ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_get_reg_p1_g_timer_6(data)               ((0x0000007C&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_get_p1_g_fld_rstb(data)                  ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD04_get_p1_g_acdr_fine_tune_start(data)      (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05                                         0x1800DD58
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_addr                                 "0xB800DD58"
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg                                      0xB800DD58
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_inst_addr                                "0x00B4"
#define  set_HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_start_en_manual_shift           (31)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_pfd_en_manual_shift             (30)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_pfd_time_shift                  (25)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_pfd_bypass_shift                (24)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_rxidle_bypass_shift             (23)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_slope_manual_shift              (22)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_slope_band_shift                (17)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_old_mode_shift                  (16)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_coarse_init_shift               (8)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_vc_chg_time_shift               (5)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_timer_4_shift                   (0)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_start_en_manual_mask            (0x80000000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_pfd_en_manual_mask              (0x40000000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_pfd_time_mask                   (0x3E000000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_pfd_bypass_mask                 (0x01000000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_rxidle_bypass_mask              (0x00800000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_slope_manual_mask               (0x00400000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_slope_band_mask                 (0x003E0000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_old_mode_mask                   (0x00010000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_coarse_init_mask                (0x00003F00)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_vc_chg_time_mask                (0x000000E0)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_timer_4_mask                    (0x0000001F)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_start_en_manual(data)           (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_pfd_en_manual(data)             (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_pfd_time(data)                  (0x3E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_pfd_bypass(data)                (0x01000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_rxidle_bypass(data)             (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_slope_manual(data)              (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_slope_band(data)                (0x003E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_old_mode(data)                  (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_coarse_init(data)               (0x00003F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_vc_chg_time(data)               (0x000000E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_reg_p1_g_timer_4(data)                   (0x0000001F&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_get_reg_p1_g_start_en_manual(data)       ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_get_reg_p1_g_pfd_en_manual(data)         ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_get_reg_p1_g_pfd_time(data)              ((0x3E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_get_reg_p1_g_pfd_bypass(data)            ((0x01000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_get_reg_p1_g_rxidle_bypass(data)         ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_get_reg_p1_g_slope_manual(data)          ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_get_reg_p1_g_slope_band(data)            ((0x003E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_get_reg_p1_g_old_mode(data)              ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_get_reg_p1_g_coarse_init(data)           ((0x00003F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_get_reg_p1_g_vc_chg_time(data)           ((0x000000E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD05_get_reg_p1_g_timer_4(data)               (0x0000001F&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06                                         0x1800DD5C
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_reg_addr                                 "0xB800DD5C"
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_reg                                      0xB800DD5C
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_inst_addr                                "0x00B5"
#define  set_HDMIRX_2P1_PHY_P1_FLD_G_REGD06_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_G_REGD06_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_G_REGD06_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_G_REGD06_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_fld_st_reg_shift                    (27)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_adp_en_fsm_reg_shift                (26)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_cp_en_fsm_reg_shift                 (25)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_coarse_fsm_reg_shift                (18)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_pfd_en_fsm_reg_shift                (17)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_fine_fsm_reg_shift                  (10)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_reg_p1_g_cp_time_2_shift                 (5)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_coarse_too_fast_reg_shift           (4)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_coarse_too_slow_reg_shift           (3)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_coarse_calib_ok_shift               (2)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_calib_ok_shift                      (1)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_start_en_shift                      (0)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_fld_st_reg_mask                     (0xF8000000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_adp_en_fsm_reg_mask                 (0x04000000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_cp_en_fsm_reg_mask                  (0x02000000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_coarse_fsm_reg_mask                 (0x01FC0000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_pfd_en_fsm_reg_mask                 (0x00020000)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_fine_fsm_reg_mask                   (0x0001FC00)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_reg_p1_g_cp_time_2_mask                  (0x000003E0)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_coarse_too_fast_reg_mask            (0x00000010)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_coarse_too_slow_reg_mask            (0x00000008)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_coarse_calib_ok_mask                (0x00000004)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_calib_ok_mask                       (0x00000002)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_start_en_mask                       (0x00000001)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_fld_st_reg(data)                    (0xF8000000&((data)<<27))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_adp_en_fsm_reg(data)                (0x04000000&((data)<<26))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_cp_en_fsm_reg(data)                 (0x02000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_coarse_fsm_reg(data)                (0x01FC0000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_pfd_en_fsm_reg(data)                (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_fine_fsm_reg(data)                  (0x0001FC00&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_reg_p1_g_cp_time_2(data)                 (0x000003E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_coarse_too_fast_reg(data)           (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_coarse_too_slow_reg(data)           (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_coarse_calib_ok(data)               (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_calib_ok(data)                      (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_p1_g_start_en(data)                      (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_get_p1_g_fld_st_reg(data)                ((0xF8000000&(data))>>27)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_get_p1_g_adp_en_fsm_reg(data)            ((0x04000000&(data))>>26)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_get_p1_g_cp_en_fsm_reg(data)             ((0x02000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_get_p1_g_coarse_fsm_reg(data)            ((0x01FC0000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_get_p1_g_pfd_en_fsm_reg(data)            ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_get_p1_g_fine_fsm_reg(data)              ((0x0001FC00&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_get_reg_p1_g_cp_time_2(data)             ((0x000003E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_get_p1_g_coarse_too_fast_reg(data)       ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_get_p1_g_coarse_too_slow_reg(data)       ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_get_p1_g_coarse_calib_ok(data)           ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_get_p1_g_calib_ok(data)                  ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_FLD_G_REGD06_get_p1_g_start_en(data)                  (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00                                         0x1800DD60
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_addr                                 "0xB800DD60"
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg                                      0xB800DD60
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_inst_addr                                "0x00B6"
#define  set_HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_auto_mode_shift                 (31)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_adp_en_manual_shift             (30)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_cp_en_manual_shift              (29)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_adap_eq_off_shift               (28)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_adp_time_shift                  (23)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_calib_time_shift                (20)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_calib_manual_shift              (19)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_calib_late_shift                (18)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_vco_coarse_shift                (11)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_divide_num_shift                (3)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_bypass_k_band_mode_shift        (2)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_stable_time_mode_shift          (1)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_cp2adp_en_shift                 (0)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_auto_mode_mask                  (0x80000000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_adp_en_manual_mask              (0x40000000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_cp_en_manual_mask               (0x20000000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_adap_eq_off_mask                (0x10000000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_adp_time_mask                   (0x0F800000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_calib_time_mask                 (0x00700000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_calib_manual_mask               (0x00080000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_calib_late_mask                 (0x00040000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_vco_coarse_mask                 (0x0003F800)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_divide_num_mask                 (0x000007F8)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_bypass_k_band_mode_mask         (0x00000004)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_stable_time_mode_mask           (0x00000002)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_cp2adp_en_mask                  (0x00000001)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_auto_mode(data)                 (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_adp_en_manual(data)             (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_cp_en_manual(data)              (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_adap_eq_off(data)               (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_adp_time(data)                  (0x0F800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_calib_time(data)                (0x00700000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_calib_manual(data)              (0x00080000&((data)<<19))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_calib_late(data)                (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_vco_coarse(data)                (0x0003F800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_divide_num(data)                (0x000007F8&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_bypass_k_band_mode(data)        (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_stable_time_mode(data)          (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_reg_p1_b_cp2adp_en(data)                 (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_get_reg_p1_b_auto_mode(data)             ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_get_reg_p1_b_adp_en_manual(data)         ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_get_reg_p1_b_cp_en_manual(data)          ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_get_reg_p1_b_adap_eq_off(data)           ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_get_reg_p1_b_adp_time(data)              ((0x0F800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_get_reg_p1_b_calib_time(data)            ((0x00700000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_get_reg_p1_b_calib_manual(data)          ((0x00080000&(data))>>19)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_get_reg_p1_b_calib_late(data)            ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_get_reg_p1_b_vco_coarse(data)            ((0x0003F800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_get_reg_p1_b_divide_num(data)            ((0x000007F8&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_get_reg_p1_b_bypass_k_band_mode(data)    ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_get_reg_p1_b_stable_time_mode(data)      ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD00_get_reg_p1_b_cp2adp_en(data)             (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD01                                         0x1800DD64
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD01_reg_addr                                 "0xB800DD64"
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD01_reg                                      0xB800DD64
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD01_inst_addr                                "0x00B7"
#define  set_HDMIRX_2P1_PHY_P1_FLD_B_REGD01_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_B_REGD01_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_B_REGD01_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_B_REGD01_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD01_reg_p1_b_cp2adp_time_shift               (28)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD01_reg_p1_b_lock_up_limit_shift             (16)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD01_reg_p1_b_lock_dn_limit_shift             (0)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD01_reg_p1_b_cp2adp_time_mask                (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD01_reg_p1_b_lock_up_limit_mask              (0x0FFF0000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD01_reg_p1_b_lock_dn_limit_mask              (0x00000FFF)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD01_reg_p1_b_cp2adp_time(data)               (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD01_reg_p1_b_lock_up_limit(data)             (0x0FFF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD01_reg_p1_b_lock_dn_limit(data)             (0x00000FFF&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD01_get_reg_p1_b_cp2adp_time(data)           ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD01_get_reg_p1_b_lock_up_limit(data)         ((0x0FFF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD01_get_reg_p1_b_lock_dn_limit(data)         (0x00000FFF&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02                                         0x1800DD68
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_addr                                 "0xB800DD68"
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg                                      0xB800DD68
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_inst_addr                                "0x00B8"
#define  set_HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_cdr_cp_shift                    (12)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_cdr_r_shift                     (6)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_cdr_c_shift                     (4)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_vc_sel_shift                    (2)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_calib_reset_sel_shift           (1)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_unstable_flg_shift              (0)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_cdr_cp_mask                     (0xFFFFF000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_cdr_r_mask                      (0x00000FC0)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_cdr_c_mask                      (0x00000030)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_vc_sel_mask                     (0x0000000C)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_calib_reset_sel_mask            (0x00000002)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_unstable_flg_mask               (0x00000001)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_cdr_cp(data)                    (0xFFFFF000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_cdr_r(data)                     (0x00000FC0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_cdr_c(data)                     (0x00000030&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_vc_sel(data)                    (0x0000000C&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_calib_reset_sel(data)           (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_reg_p1_b_unstable_flg(data)              (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_get_reg_p1_b_cdr_cp(data)                ((0xFFFFF000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_get_reg_p1_b_cdr_r(data)                 ((0x00000FC0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_get_reg_p1_b_cdr_c(data)                 ((0x00000030&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_get_reg_p1_b_vc_sel(data)                ((0x0000000C&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_get_reg_p1_b_calib_reset_sel(data)       ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD02_get_reg_p1_b_unstable_flg(data)          (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03                                         0x1800DD6C
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg_addr                                 "0xB800DD6C"
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg                                      0xB800DD6C
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_inst_addr                                "0x00B9"
#define  set_HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg_p1_b_coarse_lock_up_limit_shift      (20)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg_p1_b_coarse_lock_dn_limit_shift      (8)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg_p1_b_cp_time_shift                   (3)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg_p1_b_init_time_shift                 (0)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg_p1_b_coarse_lock_up_limit_mask       (0xFFF00000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg_p1_b_coarse_lock_dn_limit_mask       (0x000FFF00)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg_p1_b_cp_time_mask                    (0x000000F8)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg_p1_b_init_time_mask                  (0x00000007)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg_p1_b_coarse_lock_up_limit(data)      (0xFFF00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg_p1_b_coarse_lock_dn_limit(data)      (0x000FFF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg_p1_b_cp_time(data)                   (0x000000F8&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_reg_p1_b_init_time(data)                 (0x00000007&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_get_reg_p1_b_coarse_lock_up_limit(data)  ((0xFFF00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_get_reg_p1_b_coarse_lock_dn_limit(data)  ((0x000FFF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_get_reg_p1_b_cp_time(data)               ((0x000000F8&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD03_get_reg_p1_b_init_time(data)             (0x00000007&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04                                         0x1800DD70
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_addr                                 "0xB800DD70"
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg                                      0xB800DD70
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_inst_addr                                "0x00BA"
#define  set_HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_coarse_calib_manual_shift       (28)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_vco_coarse_manual_shift         (24)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_vco_fine_manual_shift           (20)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_xtal_24m_en_shift               (19)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_vco_fine_time_sel_shift         (17)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_bypass_coarse_k_mode_shift      (16)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_vco_coarse_init_shift           (12)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_vco_fine_init_shift             (8)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_timer_5_shift                   (7)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_timer_6_shift                   (2)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_p1_b_fld_rstb_shift                      (1)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_p1_b_acdr_fine_tune_start_shift          (0)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_coarse_calib_manual_mask        (0x10000000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_vco_coarse_manual_mask          (0x0F000000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_vco_fine_manual_mask            (0x00F00000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_xtal_24m_en_mask                (0x00080000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_vco_fine_time_sel_mask          (0x00060000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_bypass_coarse_k_mode_mask       (0x00010000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_vco_coarse_init_mask            (0x0000F000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_vco_fine_init_mask              (0x00000F00)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_timer_5_mask                    (0x00000080)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_timer_6_mask                    (0x0000007C)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_p1_b_fld_rstb_mask                       (0x00000002)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_p1_b_acdr_fine_tune_start_mask           (0x00000001)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_coarse_calib_manual(data)       (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_vco_coarse_manual(data)         (0x0F000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_vco_fine_manual(data)           (0x00F00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_xtal_24m_en(data)               (0x00080000&((data)<<19))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_vco_fine_time_sel(data)         (0x00060000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_bypass_coarse_k_mode(data)      (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_vco_coarse_init(data)           (0x0000F000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_vco_fine_init(data)             (0x00000F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_timer_5(data)                   (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_reg_p1_b_timer_6(data)                   (0x0000007C&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_p1_b_fld_rstb(data)                      (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_p1_b_acdr_fine_tune_start(data)          (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_get_reg_p1_b_coarse_calib_manual(data)   ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_get_reg_p1_b_vco_coarse_manual(data)     ((0x0F000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_get_reg_p1_b_vco_fine_manual(data)       ((0x00F00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_get_reg_p1_b_xtal_24m_en(data)           ((0x00080000&(data))>>19)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_get_reg_p1_b_vco_fine_time_sel(data)     ((0x00060000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_get_reg_p1_b_bypass_coarse_k_mode(data)  ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_get_reg_p1_b_vco_coarse_init(data)       ((0x0000F000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_get_reg_p1_b_vco_fine_init(data)         ((0x00000F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_get_reg_p1_b_timer_5(data)               ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_get_reg_p1_b_timer_6(data)               ((0x0000007C&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_get_p1_b_fld_rstb(data)                  ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD04_get_p1_b_acdr_fine_tune_start(data)      (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05                                         0x1800DD74
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_addr                                 "0xB800DD74"
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg                                      0xB800DD74
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_inst_addr                                "0x00BB"
#define  set_HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_start_en_manual_shift           (31)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_pfd_en_manual_shift             (30)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_pfd_time_shift                  (25)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_pfd_bypass_shift                (24)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_rxidle_bypass_shift             (23)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_slope_manual_shift              (22)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_slope_band_shift                (17)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_old_mode_shift                  (16)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_coarse_init_shift               (8)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_vc_chg_time_shift               (5)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_timer_4_shift                   (0)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_start_en_manual_mask            (0x80000000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_pfd_en_manual_mask              (0x40000000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_pfd_time_mask                   (0x3E000000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_pfd_bypass_mask                 (0x01000000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_rxidle_bypass_mask              (0x00800000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_slope_manual_mask               (0x00400000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_slope_band_mask                 (0x003E0000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_old_mode_mask                   (0x00010000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_coarse_init_mask                (0x00003F00)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_vc_chg_time_mask                (0x000000E0)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_timer_4_mask                    (0x0000001F)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_start_en_manual(data)           (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_pfd_en_manual(data)             (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_pfd_time(data)                  (0x3E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_pfd_bypass(data)                (0x01000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_rxidle_bypass(data)             (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_slope_manual(data)              (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_slope_band(data)                (0x003E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_old_mode(data)                  (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_coarse_init(data)               (0x00003F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_vc_chg_time(data)               (0x000000E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_reg_p1_b_timer_4(data)                   (0x0000001F&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_get_reg_p1_b_start_en_manual(data)       ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_get_reg_p1_b_pfd_en_manual(data)         ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_get_reg_p1_b_pfd_time(data)              ((0x3E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_get_reg_p1_b_pfd_bypass(data)            ((0x01000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_get_reg_p1_b_rxidle_bypass(data)         ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_get_reg_p1_b_slope_manual(data)          ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_get_reg_p1_b_slope_band(data)            ((0x003E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_get_reg_p1_b_old_mode(data)              ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_get_reg_p1_b_coarse_init(data)           ((0x00003F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_get_reg_p1_b_vc_chg_time(data)           ((0x000000E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD05_get_reg_p1_b_timer_4(data)               (0x0000001F&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06                                         0x1800DD78
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_reg_addr                                 "0xB800DD78"
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_reg                                      0xB800DD78
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_inst_addr                                "0x00BC"
#define  set_HDMIRX_2P1_PHY_P1_FLD_B_REGD06_reg(data)                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_B_REGD06_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_B_REGD06_reg                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_B_REGD06_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_fld_st_reg_shift                    (27)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_adp_en_fsm_reg_shift                (26)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_cp_en_fsm_reg_shift                 (25)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_coarse_fsm_reg_shift                (18)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_pfd_en_fsm_reg_shift                (17)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_fine_fsm_reg_shift                  (10)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_reg_p1_b_cp_time_2_shift                 (5)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_coarse_too_fast_reg_shift           (4)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_coarse_too_slow_reg_shift           (3)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_coarse_calib_ok_shift               (2)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_calib_ok_shift                      (1)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_start_en_shift                      (0)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_fld_st_reg_mask                     (0xF8000000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_adp_en_fsm_reg_mask                 (0x04000000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_cp_en_fsm_reg_mask                  (0x02000000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_coarse_fsm_reg_mask                 (0x01FC0000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_pfd_en_fsm_reg_mask                 (0x00020000)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_fine_fsm_reg_mask                   (0x0001FC00)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_reg_p1_b_cp_time_2_mask                  (0x000003E0)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_coarse_too_fast_reg_mask            (0x00000010)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_coarse_too_slow_reg_mask            (0x00000008)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_coarse_calib_ok_mask                (0x00000004)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_calib_ok_mask                       (0x00000002)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_start_en_mask                       (0x00000001)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_fld_st_reg(data)                    (0xF8000000&((data)<<27))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_adp_en_fsm_reg(data)                (0x04000000&((data)<<26))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_cp_en_fsm_reg(data)                 (0x02000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_coarse_fsm_reg(data)                (0x01FC0000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_pfd_en_fsm_reg(data)                (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_fine_fsm_reg(data)                  (0x0001FC00&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_reg_p1_b_cp_time_2(data)                 (0x000003E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_coarse_too_fast_reg(data)           (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_coarse_too_slow_reg(data)           (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_coarse_calib_ok(data)               (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_calib_ok(data)                      (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_p1_b_start_en(data)                      (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_get_p1_b_fld_st_reg(data)                ((0xF8000000&(data))>>27)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_get_p1_b_adp_en_fsm_reg(data)            ((0x04000000&(data))>>26)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_get_p1_b_cp_en_fsm_reg(data)             ((0x02000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_get_p1_b_coarse_fsm_reg(data)            ((0x01FC0000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_get_p1_b_pfd_en_fsm_reg(data)            ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_get_p1_b_fine_fsm_reg(data)              ((0x0001FC00&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_get_reg_p1_b_cp_time_2(data)             ((0x000003E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_get_p1_b_coarse_too_fast_reg(data)       ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_get_p1_b_coarse_too_slow_reg(data)       ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_get_p1_b_coarse_calib_ok(data)           ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_get_p1_b_calib_ok(data)                  ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_FLD_B_REGD06_get_p1_b_start_en(data)                  (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00                                        0x1800DD7C
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_addr                                "0xB800DD7C"
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg                                     0xB800DD7C
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_inst_addr                               "0x00BD"
#define  set_HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg(data)                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_auto_mode_shift               (31)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_adp_en_manual_shift           (30)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_cp_en_manual_shift            (29)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_adap_eq_off_shift             (28)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_adp_time_shift                (23)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_calib_time_shift              (20)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_calib_manual_shift            (19)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_calib_late_shift              (18)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_vco_coarse_shift              (11)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_divide_num_shift              (3)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_bypass_k_band_mode_shift      (2)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_stable_time_mode_shift        (1)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_cp2adp_en_shift               (0)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_auto_mode_mask                (0x80000000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_adp_en_manual_mask            (0x40000000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_cp_en_manual_mask             (0x20000000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_adap_eq_off_mask              (0x10000000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_adp_time_mask                 (0x0F800000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_calib_time_mask               (0x00700000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_calib_manual_mask             (0x00080000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_calib_late_mask               (0x00040000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_vco_coarse_mask               (0x0003F800)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_divide_num_mask               (0x000007F8)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_bypass_k_band_mode_mask       (0x00000004)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_stable_time_mode_mask         (0x00000002)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_cp2adp_en_mask                (0x00000001)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_auto_mode(data)               (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_adp_en_manual(data)           (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_cp_en_manual(data)            (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_adap_eq_off(data)             (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_adp_time(data)                (0x0F800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_calib_time(data)              (0x00700000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_calib_manual(data)            (0x00080000&((data)<<19))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_calib_late(data)              (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_vco_coarse(data)              (0x0003F800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_divide_num(data)              (0x000007F8&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_bypass_k_band_mode(data)      (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_stable_time_mode(data)        (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_reg_p1_ck_cp2adp_en(data)               (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_get_reg_p1_ck_auto_mode(data)           ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_get_reg_p1_ck_adp_en_manual(data)       ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_get_reg_p1_ck_cp_en_manual(data)        ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_get_reg_p1_ck_adap_eq_off(data)         ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_get_reg_p1_ck_adp_time(data)            ((0x0F800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_get_reg_p1_ck_calib_time(data)          ((0x00700000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_get_reg_p1_ck_calib_manual(data)        ((0x00080000&(data))>>19)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_get_reg_p1_ck_calib_late(data)          ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_get_reg_p1_ck_vco_coarse(data)          ((0x0003F800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_get_reg_p1_ck_divide_num(data)          ((0x000007F8&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_get_reg_p1_ck_bypass_k_band_mode(data)  ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_get_reg_p1_ck_stable_time_mode(data)    ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD00_get_reg_p1_ck_cp2adp_en(data)           (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD01                                        0x1800DD80
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_reg_addr                                "0xB800DD80"
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_reg                                     0xB800DD80
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_inst_addr                               "0x00BE"
#define  set_HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_reg(data)                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_reg                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_reg_p1_ck_cp2adp_time_shift             (28)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_reg_p1_ck_lock_up_limit_shift           (16)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_reg_p1_ck_lock_dn_limit_shift           (0)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_reg_p1_ck_cp2adp_time_mask              (0xF0000000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_reg_p1_ck_lock_up_limit_mask            (0x0FFF0000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_reg_p1_ck_lock_dn_limit_mask            (0x00000FFF)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_reg_p1_ck_cp2adp_time(data)             (0xF0000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_reg_p1_ck_lock_up_limit(data)           (0x0FFF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_reg_p1_ck_lock_dn_limit(data)           (0x00000FFF&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_get_reg_p1_ck_cp2adp_time(data)         ((0xF0000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_get_reg_p1_ck_lock_up_limit(data)       ((0x0FFF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD01_get_reg_p1_ck_lock_dn_limit(data)       (0x00000FFF&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02                                        0x1800DD84
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_addr                                "0xB800DD84"
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg                                     0xB800DD84
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_inst_addr                               "0x00BF"
#define  set_HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg(data)                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_cdr_cp_shift                  (12)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_cdr_r_shift                   (6)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_cdr_c_shift                   (4)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_vc_sel_shift                  (2)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_calib_reset_sel_shift         (1)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_unstable_flg_shift            (0)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_cdr_cp_mask                   (0xFFFFF000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_cdr_r_mask                    (0x00000FC0)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_cdr_c_mask                    (0x00000030)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_vc_sel_mask                   (0x0000000C)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_calib_reset_sel_mask          (0x00000002)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_unstable_flg_mask             (0x00000001)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_cdr_cp(data)                  (0xFFFFF000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_cdr_r(data)                   (0x00000FC0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_cdr_c(data)                   (0x00000030&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_vc_sel(data)                  (0x0000000C&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_calib_reset_sel(data)         (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_reg_p1_ck_unstable_flg(data)            (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_get_reg_p1_ck_cdr_cp(data)              ((0xFFFFF000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_get_reg_p1_ck_cdr_r(data)               ((0x00000FC0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_get_reg_p1_ck_cdr_c(data)               ((0x00000030&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_get_reg_p1_ck_vc_sel(data)              ((0x0000000C&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_get_reg_p1_ck_calib_reset_sel(data)     ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD02_get_reg_p1_ck_unstable_flg(data)        (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03                                        0x1800DD88
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg_addr                                "0xB800DD88"
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg                                     0xB800DD88
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_inst_addr                               "0x00C0"
#define  set_HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg(data)                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg_p1_ck_coarse_lock_up_limit_shift    (20)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg_p1_ck_coarse_lock_dn_limit_shift    (8)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg_p1_ck_cp_time_shift                 (3)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg_p1_ck_init_time_shift               (0)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg_p1_ck_coarse_lock_up_limit_mask     (0xFFF00000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg_p1_ck_coarse_lock_dn_limit_mask     (0x000FFF00)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg_p1_ck_cp_time_mask                  (0x000000F8)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg_p1_ck_init_time_mask                (0x00000007)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg_p1_ck_coarse_lock_up_limit(data)    (0xFFF00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg_p1_ck_coarse_lock_dn_limit(data)    (0x000FFF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg_p1_ck_cp_time(data)                 (0x000000F8&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_reg_p1_ck_init_time(data)               (0x00000007&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_get_reg_p1_ck_coarse_lock_up_limit(data) ((0xFFF00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_get_reg_p1_ck_coarse_lock_dn_limit(data) ((0x000FFF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_get_reg_p1_ck_cp_time(data)             ((0x000000F8&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD03_get_reg_p1_ck_init_time(data)           (0x00000007&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04                                        0x1800DD8C
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_addr                                "0xB800DD8C"
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg                                     0xB800DD8C
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_inst_addr                               "0x00C1"
#define  set_HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg(data)                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_coarse_calib_manual_shift     (28)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_vco_coarse_manual_shift       (24)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_vco_fine_manual_shift         (20)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_xtal_24m_en_shift             (19)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_vco_fine_time_sel_shift       (17)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_bypass_coarse_k_mode_shift    (16)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_vco_coarse_init_shift         (12)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_vco_fine_init_shift           (8)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_timer_5_shift                 (7)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_timer_6_shift                 (2)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_p1_ck_fld_rstb_shift                    (1)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_p1_ck_acdr_fine_tune_start_shift        (0)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_coarse_calib_manual_mask      (0x10000000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_vco_coarse_manual_mask        (0x0F000000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_vco_fine_manual_mask          (0x00F00000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_xtal_24m_en_mask              (0x00080000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_vco_fine_time_sel_mask        (0x00060000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_bypass_coarse_k_mode_mask     (0x00010000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_vco_coarse_init_mask          (0x0000F000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_vco_fine_init_mask            (0x00000F00)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_timer_5_mask                  (0x00000080)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_timer_6_mask                  (0x0000007C)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_p1_ck_fld_rstb_mask                     (0x00000002)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_p1_ck_acdr_fine_tune_start_mask         (0x00000001)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_coarse_calib_manual(data)     (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_vco_coarse_manual(data)       (0x0F000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_vco_fine_manual(data)         (0x00F00000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_xtal_24m_en(data)             (0x00080000&((data)<<19))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_vco_fine_time_sel(data)       (0x00060000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_bypass_coarse_k_mode(data)    (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_vco_coarse_init(data)         (0x0000F000&((data)<<12))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_vco_fine_init(data)           (0x00000F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_timer_5(data)                 (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_reg_p1_ck_timer_6(data)                 (0x0000007C&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_p1_ck_fld_rstb(data)                    (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_p1_ck_acdr_fine_tune_start(data)        (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_get_reg_p1_ck_coarse_calib_manual(data) ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_get_reg_p1_ck_vco_coarse_manual(data)   ((0x0F000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_get_reg_p1_ck_vco_fine_manual(data)     ((0x00F00000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_get_reg_p1_ck_xtal_24m_en(data)         ((0x00080000&(data))>>19)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_get_reg_p1_ck_vco_fine_time_sel(data)   ((0x00060000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_get_reg_p1_ck_bypass_coarse_k_mode(data) ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_get_reg_p1_ck_vco_coarse_init(data)     ((0x0000F000&(data))>>12)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_get_reg_p1_ck_vco_fine_init(data)       ((0x00000F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_get_reg_p1_ck_timer_5(data)             ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_get_reg_p1_ck_timer_6(data)             ((0x0000007C&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_get_p1_ck_fld_rstb(data)                ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD04_get_p1_ck_acdr_fine_tune_start(data)    (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05                                        0x1800DD90
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_addr                                "0xB800DD90"
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg                                     0xB800DD90
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_inst_addr                               "0x00C2"
#define  set_HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg(data)                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_start_en_manual_shift         (31)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_pfd_en_manual_shift           (30)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_pfd_time_shift                (25)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_pfd_bypass_shift              (24)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_rxidle_bypass_shift           (23)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_slope_manual_shift            (22)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_slope_band_shift              (17)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_old_mode_shift                (16)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_coarse_init_shift             (8)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_vc_chg_time_shift             (5)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_timer_4_shift                 (0)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_start_en_manual_mask          (0x80000000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_pfd_en_manual_mask            (0x40000000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_pfd_time_mask                 (0x3E000000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_pfd_bypass_mask               (0x01000000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_rxidle_bypass_mask            (0x00800000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_slope_manual_mask             (0x00400000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_slope_band_mask               (0x003E0000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_old_mode_mask                 (0x00010000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_coarse_init_mask              (0x00003F00)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_vc_chg_time_mask              (0x000000E0)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_timer_4_mask                  (0x0000001F)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_start_en_manual(data)         (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_pfd_en_manual(data)           (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_pfd_time(data)                (0x3E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_pfd_bypass(data)              (0x01000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_rxidle_bypass(data)           (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_slope_manual(data)            (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_slope_band(data)              (0x003E0000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_old_mode(data)                (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_coarse_init(data)             (0x00003F00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_vc_chg_time(data)             (0x000000E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_reg_p1_ck_timer_4(data)                 (0x0000001F&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_get_reg_p1_ck_start_en_manual(data)     ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_get_reg_p1_ck_pfd_en_manual(data)       ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_get_reg_p1_ck_pfd_time(data)            ((0x3E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_get_reg_p1_ck_pfd_bypass(data)          ((0x01000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_get_reg_p1_ck_rxidle_bypass(data)       ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_get_reg_p1_ck_slope_manual(data)        ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_get_reg_p1_ck_slope_band(data)          ((0x003E0000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_get_reg_p1_ck_old_mode(data)            ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_get_reg_p1_ck_coarse_init(data)         ((0x00003F00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_get_reg_p1_ck_vc_chg_time(data)         ((0x000000E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD05_get_reg_p1_ck_timer_4(data)             (0x0000001F&(data))

#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06                                        0x1800DD94
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_reg_addr                                "0xB800DD94"
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_reg                                     0xB800DD94
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_inst_addr                               "0x00C3"
#define  set_HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_reg(data)                           (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_reg                                 (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_reg))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_fld_st_reg_shift                  (27)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_adp_en_fsm_reg_shift              (26)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_cp_en_fsm_reg_shift               (25)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_coarse_fsm_reg_shift              (18)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_pfd_en_fsm_reg_shift              (17)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_fine_fsm_reg_shift                (10)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_reg_p1_ck_cp_time_2_shift               (5)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_coarse_too_fast_reg_shift         (4)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_coarse_too_slow_reg_shift         (3)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_coarse_calib_ok_shift             (2)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_calib_ok_shift                    (1)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_start_en_shift                    (0)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_fld_st_reg_mask                   (0xF8000000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_adp_en_fsm_reg_mask               (0x04000000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_cp_en_fsm_reg_mask                (0x02000000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_coarse_fsm_reg_mask               (0x01FC0000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_pfd_en_fsm_reg_mask               (0x00020000)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_fine_fsm_reg_mask                 (0x0001FC00)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_reg_p1_ck_cp_time_2_mask                (0x000003E0)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_coarse_too_fast_reg_mask          (0x00000010)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_coarse_too_slow_reg_mask          (0x00000008)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_coarse_calib_ok_mask              (0x00000004)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_calib_ok_mask                     (0x00000002)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_start_en_mask                     (0x00000001)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_fld_st_reg(data)                  (0xF8000000&((data)<<27))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_adp_en_fsm_reg(data)              (0x04000000&((data)<<26))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_cp_en_fsm_reg(data)               (0x02000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_coarse_fsm_reg(data)              (0x01FC0000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_pfd_en_fsm_reg(data)              (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_fine_fsm_reg(data)                (0x0001FC00&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_reg_p1_ck_cp_time_2(data)               (0x000003E0&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_coarse_too_fast_reg(data)         (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_coarse_too_slow_reg(data)         (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_coarse_calib_ok(data)             (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_calib_ok(data)                    (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_p1_ck_start_en(data)                    (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_get_p1_ck_fld_st_reg(data)              ((0xF8000000&(data))>>27)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_get_p1_ck_adp_en_fsm_reg(data)          ((0x04000000&(data))>>26)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_get_p1_ck_cp_en_fsm_reg(data)           ((0x02000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_get_p1_ck_coarse_fsm_reg(data)          ((0x01FC0000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_get_p1_ck_pfd_en_fsm_reg(data)          ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_get_p1_ck_fine_fsm_reg(data)            ((0x0001FC00&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_get_reg_p1_ck_cp_time_2(data)           ((0x000003E0&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_get_p1_ck_coarse_too_fast_reg(data)     ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_get_p1_ck_coarse_too_slow_reg(data)     ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_get_p1_ck_coarse_calib_ok(data)         ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_get_p1_ck_calib_ok(data)                ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_FLD_CK_REGD06_get_p1_ck_start_en(data)                (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_MISC_0                                               0x1800DD98
#define  HDMIRX_2P1_PHY_P1_MISC_0_reg_addr                                       "0xB800DD98"
#define  HDMIRX_2P1_PHY_P1_MISC_0_reg                                            0xB800DD98
#define  HDMIRX_2P1_PHY_P1_MISC_0_inst_addr                                      "0x00C4"
#define  set_HDMIRX_2P1_PHY_P1_MISC_0_reg(data)                                  (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_MISC_0_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_MISC_0_reg                                        (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_MISC_0_reg))
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_r_vco_encap_shift                      (30)
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_r_acdr_en_afn_shift                    (29)
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_g_vco_encap_shift                      (22)
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_g_acdr_en_afn_shift                    (21)
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_b_vco_encap_shift                      (14)
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_b_acdr_en_afn_shift                    (13)
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_ck_vco_encap_shift                     (6)
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_ck_acdr_en_afn_shift                   (5)
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_r_vco_encap_mask                       (0xC0000000)
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_r_acdr_en_afn_mask                     (0x20000000)
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_g_vco_encap_mask                       (0x00C00000)
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_g_acdr_en_afn_mask                     (0x00200000)
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_b_vco_encap_mask                       (0x0000C000)
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_b_acdr_en_afn_mask                     (0x00002000)
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_ck_vco_encap_mask                      (0x000000C0)
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_ck_acdr_en_afn_mask                    (0x00000020)
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_r_vco_encap(data)                      (0xC0000000&((data)<<30))
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_r_acdr_en_afn(data)                    (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_g_vco_encap(data)                      (0x00C00000&((data)<<22))
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_g_acdr_en_afn(data)                    (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_b_vco_encap(data)                      (0x0000C000&((data)<<14))
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_b_acdr_en_afn(data)                    (0x00002000&((data)<<13))
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_ck_vco_encap(data)                     (0x000000C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_MISC_0_p1_acdr_ck_acdr_en_afn(data)                   (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_MISC_0_get_p1_acdr_r_vco_encap(data)                  ((0xC0000000&(data))>>30)
#define  HDMIRX_2P1_PHY_P1_MISC_0_get_p1_acdr_r_acdr_en_afn(data)                ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_P1_MISC_0_get_p1_acdr_g_vco_encap(data)                  ((0x00C00000&(data))>>22)
#define  HDMIRX_2P1_PHY_P1_MISC_0_get_p1_acdr_g_acdr_en_afn(data)                ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_MISC_0_get_p1_acdr_b_vco_encap(data)                  ((0x0000C000&(data))>>14)
#define  HDMIRX_2P1_PHY_P1_MISC_0_get_p1_acdr_b_acdr_en_afn(data)                ((0x00002000&(data))>>13)
#define  HDMIRX_2P1_PHY_P1_MISC_0_get_p1_acdr_ck_vco_encap(data)                 ((0x000000C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_MISC_0_get_p1_acdr_ck_acdr_en_afn(data)               ((0x00000020&(data))>>5)

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10                                       0x1800DD9C
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_addr                               "0xB800DD9C"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg                                    0xB800DD9C
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_inst_addr                              "0x00C5"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_p1_ck_md_rstb_shift                    (31)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_threshold_shift           (25)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_debounce_shift            (18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_sel_shift                 (16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_auto_shift                (15)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_adj_shift                 (11)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_error_limit_shift            (6)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_reserved_shift            (2)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_p1_ck_md_rstb_mask                     (0x80000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_threshold_mask            (0x7E000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_debounce_mask             (0x01FC0000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_sel_mask                  (0x00030000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_auto_mask                 (0x00008000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_adj_mask                  (0x00007800)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_error_limit_mask             (0x000007C0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_reserved_mask             (0x0000003C)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_p1_ck_md_rstb(data)                    (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_threshold(data)           (0x7E000000&((data)<<25))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_debounce(data)            (0x01FC0000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_sel(data)                 (0x00030000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_auto(data)                (0x00008000&((data)<<15))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_adj(data)                 (0x00007800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_error_limit(data)            (0x000007C0&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_reg_p1_ck_md_reserved(data)            (0x0000003C&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_get_p1_ck_md_rstb(data)                ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_get_reg_p1_ck_md_threshold(data)       ((0x7E000000&(data))>>25)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_get_reg_p1_ck_md_debounce(data)        ((0x01FC0000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_get_reg_p1_ck_md_sel(data)             ((0x00030000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_get_reg_p1_ck_md_auto(data)            ((0x00008000&(data))>>15)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_get_reg_p1_ck_md_adj(data)             ((0x00007800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_get_reg_p1_ck_error_limit(data)        ((0x000007C0&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD10_get_reg_p1_ck_md_reserved(data)        ((0x0000003C&(data))>>2)

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11                                       0x1800DDA0
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_reg_addr                               "0xB800DDA0"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_reg                                    0xB800DDA0
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_inst_addr                              "0x00C6"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_p1_ck_md_count_shift                   (19)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_p1_ck_rate_shift                       (15)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_p1_unstable_count_shift                (10)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_p1_ck_md_ok_shift                      (9)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_p1_clock_unstable_flag_shift           (8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_reg_p1_dig_debug_sel_shift             (4)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_p1_ck_md_count_mask                    (0xFFF80000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_p1_ck_rate_mask                        (0x00078000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_p1_unstable_count_mask                 (0x00007C00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_p1_ck_md_ok_mask                       (0x00000200)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_p1_clock_unstable_flag_mask            (0x00000100)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_reg_p1_dig_debug_sel_mask              (0x000000F0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_p1_ck_md_count(data)                   (0xFFF80000&((data)<<19))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_p1_ck_rate(data)                       (0x00078000&((data)<<15))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_p1_unstable_count(data)                (0x00007C00&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_p1_ck_md_ok(data)                      (0x00000200&((data)<<9))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_p1_clock_unstable_flag(data)           (0x00000100&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_reg_p1_dig_debug_sel(data)             (0x000000F0&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_get_p1_ck_md_count(data)               ((0xFFF80000&(data))>>19)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_get_p1_ck_rate(data)                   ((0x00078000&(data))>>15)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_get_p1_unstable_count(data)            ((0x00007C00&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_get_p1_ck_md_ok(data)                  ((0x00000200&(data))>>9)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_get_p1_clock_unstable_flag(data)       ((0x00000100&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD11_get_reg_p1_dig_debug_sel(data)         ((0x000000F0&(data))>>4)

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12                                       0x1800DDA4
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg_addr                               "0xB800DDA4"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg                                    0xB800DDA4
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_inst_addr                              "0x00C7"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg_p1_dig_reserved_0_shift            (24)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg_p1_dig_reserved_1_shift            (16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg_p1_dig_reserved_2_shift            (8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg_p1_dig_reserved_3_shift            (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg_p1_dig_reserved_0_mask             (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg_p1_dig_reserved_1_mask             (0x00FF0000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg_p1_dig_reserved_2_mask             (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg_p1_dig_reserved_3_mask             (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg_p1_dig_reserved_0(data)            (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg_p1_dig_reserved_1(data)            (0x00FF0000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg_p1_dig_reserved_2(data)            (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_reg_p1_dig_reserved_3(data)            (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_get_reg_p1_dig_reserved_0(data)        ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_get_reg_p1_dig_reserved_1(data)        ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_get_reg_p1_dig_reserved_2(data)        ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD12_get_reg_p1_dig_reserved_3(data)        (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD13                                       0x1800DDA8
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD13_reg_addr                               "0xB800DDA8"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD13_reg                                    0xB800DDA8
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD13_inst_addr                              "0x00C8"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD13_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD13_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD13_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD13_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD13_reg_p1_st_m_value_r_shift              (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD13_reg_p1_st_m_value_r_mask               (0xFFFFFFFF)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD13_reg_p1_st_m_value_r(data)              (0xFFFFFFFF&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD13_get_reg_p1_st_m_value_r(data)          (0xFFFFFFFF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD14                                       0x1800DDAC
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD14_reg_addr                               "0xB800DDAC"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD14_reg                                    0xB800DDAC
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD14_inst_addr                              "0x00C9"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD14_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD14_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD14_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD14_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD14_reg_p1_st_m_value_g_shift              (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD14_reg_p1_st_m_value_g_mask               (0xFFFFFFFF)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD14_reg_p1_st_m_value_g(data)              (0xFFFFFFFF&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD14_get_reg_p1_st_m_value_g(data)          (0xFFFFFFFF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD15                                       0x1800DDB0
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD15_reg_addr                               "0xB800DDB0"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD15_reg                                    0xB800DDB0
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD15_inst_addr                              "0x00CA"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD15_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD15_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD15_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD15_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD15_reg_p1_st_m_value_b_shift              (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD15_reg_p1_st_m_value_b_mask               (0xFFFFFFFF)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD15_reg_p1_st_m_value_b(data)              (0xFFFFFFFF&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD15_get_reg_p1_st_m_value_b(data)          (0xFFFFFFFF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD16                                       0x1800DDB4
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD16_reg_addr                               "0xB800DDB4"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD16_reg                                    0xB800DDB4
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD16_inst_addr                              "0x00CB"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD16_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD16_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD16_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD16_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD16_reg_p1_st_m_value_ck_shift             (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD16_reg_p1_st_m_value_ck_mask              (0xFFFFFFFF)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD16_reg_p1_st_m_value_ck(data)             (0xFFFFFFFF&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD16_get_reg_p1_st_m_value_ck(data)         (0xFFFFFFFF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17                                       0x1800DDB8
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_reg_addr                               "0xB800DDB8"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_reg                                    0xB800DDB8
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_inst_addr                              "0x00CC"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_reg_p1_enable_one_zero_r_shift         (18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_reg_p1_prbs_invs_r_shift               (17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_reg_p1_pattern_sel_r_shift             (16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_p1_pkt_count_r_shift                   (8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_p1_err_count_r_shift                   (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_reg_p1_enable_one_zero_r_mask          (0x00040000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_reg_p1_prbs_invs_r_mask                (0x00020000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_reg_p1_pattern_sel_r_mask              (0x00010000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_p1_pkt_count_r_mask                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_p1_err_count_r_mask                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_reg_p1_enable_one_zero_r(data)         (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_reg_p1_prbs_invs_r(data)               (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_reg_p1_pattern_sel_r(data)             (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_p1_pkt_count_r(data)                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_p1_err_count_r(data)                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_get_reg_p1_enable_one_zero_r(data)     ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_get_reg_p1_prbs_invs_r(data)           ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_get_reg_p1_pattern_sel_r(data)         ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_get_p1_pkt_count_r(data)               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD17_get_p1_err_count_r(data)               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18                                       0x1800DDBC
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_reg_addr                               "0xB800DDBC"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_reg                                    0xB800DDBC
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_inst_addr                              "0x00CD"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_reg_p1_enable_one_zero_g_shift         (18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_reg_p1_prbs_invs_g_shift               (17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_reg_p1_pattern_sel_g_shift             (16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_p1_pkt_count_g_shift                   (8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_p1_err_count_g_shift                   (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_reg_p1_enable_one_zero_g_mask          (0x00040000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_reg_p1_prbs_invs_g_mask                (0x00020000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_reg_p1_pattern_sel_g_mask              (0x00010000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_p1_pkt_count_g_mask                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_p1_err_count_g_mask                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_reg_p1_enable_one_zero_g(data)         (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_reg_p1_prbs_invs_g(data)               (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_reg_p1_pattern_sel_g(data)             (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_p1_pkt_count_g(data)                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_p1_err_count_g(data)                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_get_reg_p1_enable_one_zero_g(data)     ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_get_reg_p1_prbs_invs_g(data)           ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_get_reg_p1_pattern_sel_g(data)         ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_get_p1_pkt_count_g(data)               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD18_get_p1_err_count_g(data)               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19                                       0x1800DDC0
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_reg_addr                               "0xB800DDC0"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_reg                                    0xB800DDC0
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_inst_addr                              "0x00CE"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_reg_p1_enable_one_zero_b_shift         (18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_reg_p1_prbs_invs_b_shift               (17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_reg_p1_pattern_sel_b_shift             (16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_p1_pkt_count_b_shift                   (8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_p1_err_count_b_shift                   (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_reg_p1_enable_one_zero_b_mask          (0x00040000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_reg_p1_prbs_invs_b_mask                (0x00020000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_reg_p1_pattern_sel_b_mask              (0x00010000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_p1_pkt_count_b_mask                    (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_p1_err_count_b_mask                    (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_reg_p1_enable_one_zero_b(data)         (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_reg_p1_prbs_invs_b(data)               (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_reg_p1_pattern_sel_b(data)             (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_p1_pkt_count_b(data)                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_p1_err_count_b(data)                   (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_get_reg_p1_enable_one_zero_b(data)     ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_get_reg_p1_prbs_invs_b(data)           ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_get_reg_p1_pattern_sel_b(data)         ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_get_p1_pkt_count_b(data)               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD19_get_p1_err_count_b(data)               (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20                                       0x1800DDC4
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_reg_addr                               "0xB800DDC4"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_reg                                    0xB800DDC4
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_inst_addr                              "0x00CF"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_reg_p1_enable_one_zero_ck_shift        (18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_reg_p1_prbs_invs_ck_shift              (17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_reg_p1_pattern_sel_ck_shift            (16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_p1_pkt_count_ck_shift                  (8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_p1_err_count_ck_shift                  (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_reg_p1_enable_one_zero_ck_mask         (0x00040000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_reg_p1_prbs_invs_ck_mask               (0x00020000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_reg_p1_pattern_sel_ck_mask             (0x00010000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_p1_pkt_count_ck_mask                   (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_p1_err_count_ck_mask                   (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_reg_p1_enable_one_zero_ck(data)        (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_reg_p1_prbs_invs_ck(data)              (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_reg_p1_pattern_sel_ck(data)            (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_p1_pkt_count_ck(data)                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_p1_err_count_ck(data)                  (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_get_reg_p1_enable_one_zero_ck(data)    ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_get_reg_p1_prbs_invs_ck(data)          ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_get_reg_p1_pattern_sel_ck(data)        ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_get_p1_pkt_count_ck(data)              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD20_get_p1_err_count_ck(data)              (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21                                       0x1800DDC8
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_addr                               "0xB800DDC8"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg                                    0xB800DDC8
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_inst_addr                              "0x00D0"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_dphy_debug_sel_p1_shift            (14)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_infifo2_cnt_shift               (11)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_4b18b_mode_shift                (10)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_4b18b_data_order_shift          (9)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_fifo_ckinv_r_shift              (8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_fifo_ckinv_g_shift              (7)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_fifo_ckinv_b_shift              (6)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_fifo_ckinv_ck_shift             (5)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_p1_r_fifo_rst_n_shift                  (4)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_p1_g_fifo_rst_n_shift                  (3)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_p1_b_fifo_rst_n_shift                  (2)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_p1_ck_fifo_rst_n_shift                 (1)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_hdmi21_shift                    (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_dphy_debug_sel_p1_mask             (0x00004000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_infifo2_cnt_mask                (0x00003800)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_4b18b_mode_mask                 (0x00000400)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_4b18b_data_order_mask           (0x00000200)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_fifo_ckinv_r_mask               (0x00000100)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_fifo_ckinv_g_mask               (0x00000080)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_fifo_ckinv_b_mask               (0x00000040)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_fifo_ckinv_ck_mask              (0x00000020)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_p1_r_fifo_rst_n_mask                   (0x00000010)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_p1_g_fifo_rst_n_mask                   (0x00000008)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_p1_b_fifo_rst_n_mask                   (0x00000004)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_p1_ck_fifo_rst_n_mask                  (0x00000002)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_hdmi21_mask                     (0x00000001)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_dphy_debug_sel_p1(data)            (0x00004000&((data)<<14))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_infifo2_cnt(data)               (0x00003800&((data)<<11))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_4b18b_mode(data)                (0x00000400&((data)<<10))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_4b18b_data_order(data)          (0x00000200&((data)<<9))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_fifo_ckinv_r(data)              (0x00000100&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_fifo_ckinv_g(data)              (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_fifo_ckinv_b(data)              (0x00000040&((data)<<6))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_fifo_ckinv_ck(data)             (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_p1_r_fifo_rst_n(data)                  (0x00000010&((data)<<4))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_p1_g_fifo_rst_n(data)                  (0x00000008&((data)<<3))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_p1_b_fifo_rst_n(data)                  (0x00000004&((data)<<2))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_p1_ck_fifo_rst_n(data)                 (0x00000002&((data)<<1))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_reg_p1_hdmi21(data)                    (0x00000001&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_get_reg_dphy_debug_sel_p1(data)        ((0x00004000&(data))>>14)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_get_reg_p1_infifo2_cnt(data)           ((0x00003800&(data))>>11)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_get_reg_p1_4b18b_mode(data)            ((0x00000400&(data))>>10)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_get_reg_p1_4b18b_data_order(data)      ((0x00000200&(data))>>9)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_get_reg_p1_fifo_ckinv_r(data)          ((0x00000100&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_get_reg_p1_fifo_ckinv_g(data)          ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_get_reg_p1_fifo_ckinv_b(data)          ((0x00000040&(data))>>6)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_get_reg_p1_fifo_ckinv_ck(data)         ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_get_p1_r_fifo_rst_n(data)              ((0x00000010&(data))>>4)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_get_p1_g_fifo_rst_n(data)              ((0x00000008&(data))>>3)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_get_p1_b_fifo_rst_n(data)              ((0x00000004&(data))>>2)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_get_p1_ck_fifo_rst_n(data)             ((0x00000002&(data))>>1)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD21_get_reg_p1_hdmi21(data)                (0x00000001&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22                                       0x1800DDCC
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_addr                               "0xB800DDCC"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg                                    0xB800DDCC
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_inst_addr                              "0x00D1"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_p1_acc_read_out_r_shift                (24)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_001_enable_r_shift              (23)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_101_enable_r_shift              (22)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_en_bec_acc_r_shift              (21)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_en_bec_read_r_shift             (20)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_enable_one_zero_r_hdmi21_shift  (18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_prbs_invs_r_hdmi21_shift        (17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_pattern_sel_r_hdmi21_shift      (16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_p1_pkt_count_r_hdmi21_shift            (8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_p1_err_count_r_hdmi21_shift            (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_p1_acc_read_out_r_mask                 (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_001_enable_r_mask               (0x00800000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_101_enable_r_mask               (0x00400000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_en_bec_acc_r_mask               (0x00200000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_en_bec_read_r_mask              (0x00100000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_enable_one_zero_r_hdmi21_mask   (0x00040000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_prbs_invs_r_hdmi21_mask         (0x00020000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_pattern_sel_r_hdmi21_mask       (0x00010000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_p1_pkt_count_r_hdmi21_mask             (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_p1_err_count_r_hdmi21_mask             (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_p1_acc_read_out_r(data)                (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_001_enable_r(data)              (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_101_enable_r(data)              (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_en_bec_acc_r(data)              (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_en_bec_read_r(data)             (0x00100000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_enable_one_zero_r_hdmi21(data)  (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_prbs_invs_r_hdmi21(data)        (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_reg_p1_pattern_sel_r_hdmi21(data)      (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_p1_pkt_count_r_hdmi21(data)            (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_p1_err_count_r_hdmi21(data)            (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_get_p1_acc_read_out_r(data)            ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_get_reg_p1_001_enable_r(data)          ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_get_reg_p1_101_enable_r(data)          ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_get_reg_p1_en_bec_acc_r(data)          ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_get_reg_p1_en_bec_read_r(data)         ((0x00100000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_get_reg_p1_enable_one_zero_r_hdmi21(data) ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_get_reg_p1_prbs_invs_r_hdmi21(data)    ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_get_reg_p1_pattern_sel_r_hdmi21(data)  ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_get_p1_pkt_count_r_hdmi21(data)        ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD22_get_p1_err_count_r_hdmi21(data)        (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23                                       0x1800DDD0
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_addr                               "0xB800DDD0"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg                                    0xB800DDD0
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_inst_addr                              "0x00D2"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_p1_acc_read_out_g_shift                (24)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_001_enable_g_shift              (23)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_101_enable_g_shift              (22)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_en_bec_acc_g_shift              (21)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_en_bec_read_g_shift             (20)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_enable_one_zero_g_hdmi21_shift  (18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_prbs_invs_g_hdmi21_shift        (17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_pattern_sel_g_hdmi21_shift      (16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_p1_pkt_count_g_hdmi21_shift            (8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_p1_err_count_g_hdmi21_shift            (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_p1_acc_read_out_g_mask                 (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_001_enable_g_mask               (0x00800000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_101_enable_g_mask               (0x00400000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_en_bec_acc_g_mask               (0x00200000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_en_bec_read_g_mask              (0x00100000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_enable_one_zero_g_hdmi21_mask   (0x00040000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_prbs_invs_g_hdmi21_mask         (0x00020000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_pattern_sel_g_hdmi21_mask       (0x00010000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_p1_pkt_count_g_hdmi21_mask             (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_p1_err_count_g_hdmi21_mask             (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_p1_acc_read_out_g(data)                (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_001_enable_g(data)              (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_101_enable_g(data)              (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_en_bec_acc_g(data)              (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_en_bec_read_g(data)             (0x00100000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_enable_one_zero_g_hdmi21(data)  (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_prbs_invs_g_hdmi21(data)        (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_reg_p1_pattern_sel_g_hdmi21(data)      (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_p1_pkt_count_g_hdmi21(data)            (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_p1_err_count_g_hdmi21(data)            (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_get_p1_acc_read_out_g(data)            ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_get_reg_p1_001_enable_g(data)          ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_get_reg_p1_101_enable_g(data)          ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_get_reg_p1_en_bec_acc_g(data)          ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_get_reg_p1_en_bec_read_g(data)         ((0x00100000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_get_reg_p1_enable_one_zero_g_hdmi21(data) ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_get_reg_p1_prbs_invs_g_hdmi21(data)    ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_get_reg_p1_pattern_sel_g_hdmi21(data)  ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_get_p1_pkt_count_g_hdmi21(data)        ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD23_get_p1_err_count_g_hdmi21(data)        (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24                                       0x1800DDD4
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_addr                               "0xB800DDD4"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg                                    0xB800DDD4
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_inst_addr                              "0x00D3"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_p1_acc_read_out_b_shift                (24)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_001_enable_b_shift              (23)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_101_enable_b_shift              (22)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_en_bec_acc_b_shift              (21)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_en_bec_read_b_shift             (20)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_enable_one_zero_b_hdmi21_shift  (18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_prbs_invs_b_hdmi21_shift        (17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_pattern_sel_b_hdmi21_shift      (16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_p1_pkt_count_b_hdmi21_shift            (8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_p1_err_count_b_hdmi21_shift            (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_p1_acc_read_out_b_mask                 (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_001_enable_b_mask               (0x00800000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_101_enable_b_mask               (0x00400000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_en_bec_acc_b_mask               (0x00200000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_en_bec_read_b_mask              (0x00100000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_enable_one_zero_b_hdmi21_mask   (0x00040000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_prbs_invs_b_hdmi21_mask         (0x00020000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_pattern_sel_b_hdmi21_mask       (0x00010000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_p1_pkt_count_b_hdmi21_mask             (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_p1_err_count_b_hdmi21_mask             (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_p1_acc_read_out_b(data)                (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_001_enable_b(data)              (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_101_enable_b(data)              (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_en_bec_acc_b(data)              (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_en_bec_read_b(data)             (0x00100000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_enable_one_zero_b_hdmi21(data)  (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_prbs_invs_b_hdmi21(data)        (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_reg_p1_pattern_sel_b_hdmi21(data)      (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_p1_pkt_count_b_hdmi21(data)            (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_p1_err_count_b_hdmi21(data)            (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_get_p1_acc_read_out_b(data)            ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_get_reg_p1_001_enable_b(data)          ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_get_reg_p1_101_enable_b(data)          ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_get_reg_p1_en_bec_acc_b(data)          ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_get_reg_p1_en_bec_read_b(data)         ((0x00100000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_get_reg_p1_enable_one_zero_b_hdmi21(data) ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_get_reg_p1_prbs_invs_b_hdmi21(data)    ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_get_reg_p1_pattern_sel_b_hdmi21(data)  ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_get_p1_pkt_count_b_hdmi21(data)        ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD24_get_p1_err_count_b_hdmi21(data)        (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25                                       0x1800DDD8
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_addr                               "0xB800DDD8"
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg                                    0xB800DDD8
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_inst_addr                              "0x00D4"
#define  set_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg(data)                          (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg)=data)
#define  get_HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg                                (*((volatile unsigned int*)HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_p1_acc_read_out_ck_shift               (24)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_001_enable_ck_shift             (23)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_101_enable_ck_shift             (22)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_en_bec_acc_ck_shift             (21)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_en_bec_read_ck_shift            (20)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_enable_one_zero_ck_hdmi21_shift (18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_prbs_invs_ck_hdmi21_shift       (17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_pattern_sel_ck_hdmi21_shift     (16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_p1_pkt_count_ck_hdmi21_shift           (8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_p1_err_count_ck_hdmi21_shift           (0)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_p1_acc_read_out_ck_mask                (0xFF000000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_001_enable_ck_mask              (0x00800000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_101_enable_ck_mask              (0x00400000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_en_bec_acc_ck_mask              (0x00200000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_en_bec_read_ck_mask             (0x00100000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_enable_one_zero_ck_hdmi21_mask  (0x00040000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_prbs_invs_ck_hdmi21_mask        (0x00020000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_pattern_sel_ck_hdmi21_mask      (0x00010000)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_p1_pkt_count_ck_hdmi21_mask            (0x0000FF00)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_p1_err_count_ck_hdmi21_mask            (0x000000FF)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_p1_acc_read_out_ck(data)               (0xFF000000&((data)<<24))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_001_enable_ck(data)             (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_101_enable_ck(data)             (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_en_bec_acc_ck(data)             (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_en_bec_read_ck(data)            (0x00100000&((data)<<20))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_enable_one_zero_ck_hdmi21(data) (0x00040000&((data)<<18))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_prbs_invs_ck_hdmi21(data)       (0x00020000&((data)<<17))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_reg_p1_pattern_sel_ck_hdmi21(data)     (0x00010000&((data)<<16))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_p1_pkt_count_ck_hdmi21(data)           (0x0000FF00&((data)<<8))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_p1_err_count_ck_hdmi21(data)           (0x000000FF&(data))
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_get_p1_acc_read_out_ck(data)           ((0xFF000000&(data))>>24)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_get_reg_p1_001_enable_ck(data)         ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_get_reg_p1_101_enable_ck(data)         ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_get_reg_p1_en_bec_acc_ck(data)         ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_get_reg_p1_en_bec_read_ck(data)        ((0x00100000&(data))>>20)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_get_reg_p1_enable_one_zero_ck_hdmi21(data) ((0x00040000&(data))>>18)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_get_reg_p1_prbs_invs_ck_hdmi21(data)   ((0x00020000&(data))>>17)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_get_reg_p1_pattern_sel_ck_hdmi21(data) ((0x00010000&(data))>>16)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_get_p1_pkt_count_ck_hdmi21(data)       ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P1_PHY_P1_HD21_Y1_REGD25_get_p1_err_count_ck_hdmi21(data)       (0x000000FF&(data))

#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30                                   0x1800DDF0
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_addr                           "0xB800DDF0"
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg                                0xB800DDF0
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_inst_addr                          "0x00D5"
#define  set_HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg(data)                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg)=data)
#define  get_HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_port_out_sel_shift             (31)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p0_r_pllcdr_manual_enable_shift (30)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p0_g_pllcdr_manual_enable_shift (29)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p0_b_pllcdr_manual_enable_shift (28)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p0_ck_pllcdr_manual_enable_shift (27)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p1_r_pllcdr_manual_enable_shift (26)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p1_g_pllcdr_manual_enable_shift (25)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p1_b_pllcdr_manual_enable_shift (24)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p1_ck_pllcdr_manual_enable_shift (23)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_global_reserved_shift          (0)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_port_out_sel_mask              (0x80000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p0_r_pllcdr_manual_enable_mask (0x40000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p0_g_pllcdr_manual_enable_mask (0x20000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p0_b_pllcdr_manual_enable_mask (0x10000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p0_ck_pllcdr_manual_enable_mask (0x08000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p1_r_pllcdr_manual_enable_mask (0x04000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p1_g_pllcdr_manual_enable_mask (0x02000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p1_b_pllcdr_manual_enable_mask (0x01000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p1_ck_pllcdr_manual_enable_mask (0x00800000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_global_reserved_mask           (0x007FFFFF)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_port_out_sel(data)             (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p0_r_pllcdr_manual_enable(data) (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p0_g_pllcdr_manual_enable(data) (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p0_b_pllcdr_manual_enable(data) (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p0_ck_pllcdr_manual_enable(data) (0x08000000&((data)<<27))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p1_r_pllcdr_manual_enable(data) (0x04000000&((data)<<26))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p1_g_pllcdr_manual_enable(data) (0x02000000&((data)<<25))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p1_b_pllcdr_manual_enable(data) (0x01000000&((data)<<24))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_p1_ck_pllcdr_manual_enable(data) (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_reg_global_reserved(data)          (0x007FFFFF&(data))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_get_reg_port_out_sel(data)         ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_get_reg_p0_r_pllcdr_manual_enable(data) ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_get_reg_p0_g_pllcdr_manual_enable(data) ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_get_reg_p0_b_pllcdr_manual_enable(data) ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_get_reg_p0_ck_pllcdr_manual_enable(data) ((0x08000000&(data))>>27)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_get_reg_p1_r_pllcdr_manual_enable(data) ((0x04000000&(data))>>26)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_get_reg_p1_g_pllcdr_manual_enable(data) ((0x02000000&(data))>>25)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_get_reg_p1_b_pllcdr_manual_enable(data) ((0x01000000&(data))>>24)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_get_reg_p1_ck_pllcdr_manual_enable(data) ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD30_get_reg_global_reserved(data)      (0x007FFFFF&(data))

#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD31                                   0x1800DDF4
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD31_reg_addr                           "0xB800DDF4"
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD31_reg                                0xB800DDF4
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD31_inst_addr                          "0x00D6"
#define  set_HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD31_reg(data)                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD31_reg)=data)
#define  get_HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD31_reg                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD31_reg))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD31_debug_out_shift                    (0)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD31_debug_out_mask                     (0xFFFFFFFF)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD31_debug_out(data)                    (0xFFFFFFFF&(data))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD31_get_debug_out(data)                (0xFFFFFFFF&(data))

#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32                                   0x1800DDF8
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_addr                           "0xB800DDF8"
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg                                0xB800DDF8
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_inst_addr                          "0x00D7"
#define  set_HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg(data)                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg)=data)
#define  get_HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_pow_save_bypass_shift       (31)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_pow_on_manual_en_shift      (30)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_pow_on_manual_shift         (29)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_pow_save_fifo_rst_dly_sel_shift (27)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_pow_save_bypass_shift       (23)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_pow_on_manual_en_shift      (22)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_pow_on_manual_shift         (21)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_pow_save_fifo_rst_dly_sel_shift (19)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_hd14_pow_save_bypass_shift  (15)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_hd14_pow_on_manual_en_shift (14)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_hd14_pow_on_manual_shift    (13)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_hd14_pow_save_fifo_rst_dly_sel_shift (11)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_hd14_pow_save_bypass_shift  (7)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_hd14_pow_on_manual_en_shift (6)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_hd14_pow_on_manual_shift    (5)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_hd14_pow_save_fifo_rst_dly_sel_shift (3)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_pow_save_xtal_24m_enable_shift (0)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_pow_save_bypass_mask        (0x80000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_pow_on_manual_en_mask       (0x40000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_pow_on_manual_mask          (0x20000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_pow_save_fifo_rst_dly_sel_mask (0x18000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_pow_save_bypass_mask        (0x00800000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_pow_on_manual_en_mask       (0x00400000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_pow_on_manual_mask          (0x00200000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_pow_save_fifo_rst_dly_sel_mask (0x00180000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_hd14_pow_save_bypass_mask   (0x00008000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_hd14_pow_on_manual_en_mask  (0x00004000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_hd14_pow_on_manual_mask     (0x00002000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_hd14_pow_save_fifo_rst_dly_sel_mask (0x00001800)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_hd14_pow_save_bypass_mask   (0x00000080)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_hd14_pow_on_manual_en_mask  (0x00000040)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_hd14_pow_on_manual_mask     (0x00000020)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_hd14_pow_save_fifo_rst_dly_sel_mask (0x00000018)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_pow_save_xtal_24m_enable_mask  (0x00000001)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_pow_save_bypass(data)       (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_pow_on_manual_en(data)      (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_pow_on_manual(data)         (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_pow_save_fifo_rst_dly_sel(data) (0x18000000&((data)<<27))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_pow_save_bypass(data)       (0x00800000&((data)<<23))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_pow_on_manual_en(data)      (0x00400000&((data)<<22))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_pow_on_manual(data)         (0x00200000&((data)<<21))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_pow_save_fifo_rst_dly_sel(data) (0x00180000&((data)<<19))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_hd14_pow_save_bypass(data)  (0x00008000&((data)<<15))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_hd14_pow_on_manual_en(data) (0x00004000&((data)<<14))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_hd14_pow_on_manual(data)    (0x00002000&((data)<<13))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p0_hd14_pow_save_fifo_rst_dly_sel(data) (0x00001800&((data)<<11))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_hd14_pow_save_bypass(data)  (0x00000080&((data)<<7))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_hd14_pow_on_manual_en(data) (0x00000040&((data)<<6))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_hd14_pow_on_manual(data)    (0x00000020&((data)<<5))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_p1_hd14_pow_save_fifo_rst_dly_sel(data) (0x00000018&((data)<<3))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_reg_pow_save_xtal_24m_enable(data) (0x00000001&(data))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_p0_pow_save_bypass(data)   ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_p0_pow_on_manual_en(data)  ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_p0_pow_on_manual(data)     ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_p0_pow_save_fifo_rst_dly_sel(data) ((0x18000000&(data))>>27)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_p1_pow_save_bypass(data)   ((0x00800000&(data))>>23)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_p1_pow_on_manual_en(data)  ((0x00400000&(data))>>22)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_p1_pow_on_manual(data)     ((0x00200000&(data))>>21)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_p1_pow_save_fifo_rst_dly_sel(data) ((0x00180000&(data))>>19)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_p0_hd14_pow_save_bypass(data) ((0x00008000&(data))>>15)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_p0_hd14_pow_on_manual_en(data) ((0x00004000&(data))>>14)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_p0_hd14_pow_on_manual(data) ((0x00002000&(data))>>13)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_p0_hd14_pow_save_fifo_rst_dly_sel(data) ((0x00001800&(data))>>11)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_p1_hd14_pow_save_bypass(data) ((0x00000080&(data))>>7)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_p1_hd14_pow_on_manual_en(data) ((0x00000040&(data))>>6)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_p1_hd14_pow_on_manual(data) ((0x00000020&(data))>>5)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_p1_hd14_pow_save_fifo_rst_dly_sel(data) ((0x00000018&(data))>>3)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD32_get_reg_pow_save_xtal_24m_enable(data) (0x00000001&(data))

#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33                                   0x1800DDFC
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_addr                           "0xB800DDFC"
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg                                0xB800DDFC
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_inst_addr                          "0x00D8"
#define  set_HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg(data)                      (*((volatile unsigned int*)HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg)=data)
#define  get_HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg                            (*((volatile unsigned int*)HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p0_r_pn_swap_shift             (31)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p0_g_pn_swap_shift             (30)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p0_b_pn_swap_shift             (29)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p0_ck_pn_swap_shift            (28)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p1_r_pn_swap_shift             (27)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p1_g_pn_swap_shift             (26)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p1_b_pn_swap_shift             (25)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p1_ck_pn_swap_shift            (24)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p0_r_pn_swap_mask              (0x80000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p0_g_pn_swap_mask              (0x40000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p0_b_pn_swap_mask              (0x20000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p0_ck_pn_swap_mask             (0x10000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p1_r_pn_swap_mask              (0x08000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p1_g_pn_swap_mask              (0x04000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p1_b_pn_swap_mask              (0x02000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p1_ck_pn_swap_mask             (0x01000000)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p0_r_pn_swap(data)             (0x80000000&((data)<<31))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p0_g_pn_swap(data)             (0x40000000&((data)<<30))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p0_b_pn_swap(data)             (0x20000000&((data)<<29))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p0_ck_pn_swap(data)            (0x10000000&((data)<<28))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p1_r_pn_swap(data)             (0x08000000&((data)<<27))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p1_g_pn_swap(data)             (0x04000000&((data)<<26))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p1_b_pn_swap(data)             (0x02000000&((data)<<25))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_reg_p1_ck_pn_swap(data)            (0x01000000&((data)<<24))
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_get_reg_p0_r_pn_swap(data)         ((0x80000000&(data))>>31)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_get_reg_p0_g_pn_swap(data)         ((0x40000000&(data))>>30)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_get_reg_p0_b_pn_swap(data)         ((0x20000000&(data))>>29)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_get_reg_p0_ck_pn_swap(data)        ((0x10000000&(data))>>28)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_get_reg_p1_r_pn_swap(data)         ((0x08000000&(data))>>27)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_get_reg_p1_g_pn_swap(data)         ((0x04000000&(data))>>26)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_get_reg_p1_b_pn_swap(data)         ((0x02000000&(data))>>25)
#define  HDMIRX_2P1_PHY_GLOBAL_HD21_Y1_REGD33_get_reg_p1_ck_pn_swap(data)        ((0x01000000&(data))>>24)

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======HDMIRX_2P1_PHY register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  reg_z0_adjr_1:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_z0_adjr_0:5;
    };
}hdmirx_2p1_phy_z0k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  reg_z0_z300_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_z0_z300pow:2;
        RBus_UInt32  res3:6;
        RBus_UInt32  reg_z0_z0pow_r:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  reg_z0_z0pow_g:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  reg_z0_z0pow_ck:2;
        RBus_UInt32  res6:2;
        RBus_UInt32  reg_z0_z0pow_b:2;
    };
}hdmirx_2p1_phy_z0pow_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_top_in_4:8;
        RBus_UInt32  reg_top_in_3:8;
        RBus_UInt32  reg_top_in_2:8;
        RBus_UInt32  reg_top_in_1:8;
    };
}hdmirx_2p1_phy_top_in_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_top_in_8:8;
        RBus_UInt32  reg_top_in_7:8;
        RBus_UInt32  reg_top_in_6:8;
        RBus_UInt32  reg_top_in_5:8;
    };
}hdmirx_2p1_phy_top_in_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  reg_bg_envbgup:1;
        RBus_UInt32  reg_bg_pow:1;
        RBus_UInt32  reg_bg_rbg2:2;
        RBus_UInt32  reg_bg_rbg:3;
        RBus_UInt32  reg_bg_rbgloop2:3;
        RBus_UInt32  res2:6;
        RBus_UInt32  reg_ck_latch:1;
        RBus_UInt32  reg_hdmirx_bias_en:1;
    };
}hdmirx_2p1_phy_top_in_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_out_2:8;
        RBus_UInt32  reg_p0_b_out_1:8;
        RBus_UInt32  reg_p0_ck_out_2:8;
        RBus_UInt32  reg_p0_ck_out_1:8;
    };
}hdmirx_2p1_phy_p0_top_out_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_out_2:8;
        RBus_UInt32  reg_p0_r_out_1:8;
        RBus_UInt32  reg_p0_g_out_2:8;
        RBus_UInt32  reg_p0_g_out_1:8;
    };
}hdmirx_2p1_phy_p0_top_out_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p0_fore_off_ok_r:1;
        RBus_UInt32  reg_p0_fore_off_bound_r:1;
        RBus_UInt32  reg_p0_fore_off_tst_r:5;
        RBus_UInt32  res2:1;
        RBus_UInt32  reg_p0_fore_off_ok_g:1;
        RBus_UInt32  reg_p0_fore_off_bound_g:1;
        RBus_UInt32  reg_p0_fore_off_tst_g:5;
        RBus_UInt32  res3:1;
        RBus_UInt32  reg_p0_fore_off_ok_ck:1;
        RBus_UInt32  reg_p0_fore_off_bound_ck:1;
        RBus_UInt32  reg_p0_fore_off_tst_ck:5;
        RBus_UInt32  res4:1;
        RBus_UInt32  reg_p0_fore_off_ok_b:1;
        RBus_UInt32  reg_p0_fore_off_bound_b:1;
        RBus_UInt32  reg_p0_fore_off_tst_b:5;
    };
}hdmirx_2p1_phy_p0_koffset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  reg_p0_cmu_ck_3:8;
        RBus_UInt32  reg_p0_cmu_ck_2:8;
        RBus_UInt32  reg_p0_cmu_ck_1:8;
    };
}hdmirx_2p1_phy_p0_ck_cmu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_4:8;
        RBus_UInt32  reg_p0_ck_3:8;
        RBus_UInt32  reg_p0_ck_2:8;
        RBus_UInt32  reg_p0_ck_1:8;
    };
}hdmirx_2p1_phy_p0_ck0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_8:8;
        RBus_UInt32  reg_p0_ck_7:8;
        RBus_UInt32  reg_p0_ck_6:8;
        RBus_UInt32  reg_p0_ck_5:8;
    };
}hdmirx_2p1_phy_p0_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_12:8;
        RBus_UInt32  reg_p0_ck_11:8;
        RBus_UInt32  reg_p0_ck_10:8;
        RBus_UInt32  reg_p0_ck_9:8;
    };
}hdmirx_2p1_phy_p0_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_16:8;
        RBus_UInt32  reg_p0_ck_15:8;
        RBus_UInt32  reg_p0_ck_14:8;
        RBus_UInt32  reg_p0_ck_13:8;
    };
}hdmirx_2p1_phy_p0_ck3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_20:8;
        RBus_UInt32  reg_p0_ck_19:8;
        RBus_UInt32  reg_p0_ck_18:8;
        RBus_UInt32  reg_p0_ck_17:8;
    };
}hdmirx_2p1_phy_p0_ck4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_ck_4:8;
        RBus_UInt32  reg_p0_acdr_ck_3:8;
        RBus_UInt32  reg_p0_acdr_ck_2:8;
        RBus_UInt32  reg_p0_acdr_ck_1:8;
    };
}hdmirx_2p1_phy_p0_acdr_ck0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_ck_8:8;
        RBus_UInt32  reg_p0_acdr_ck_7:8;
        RBus_UInt32  reg_p0_acdr_ck_6:8;
        RBus_UInt32  reg_p0_acdr_ck_5:8;
    };
}hdmirx_2p1_phy_p0_acdr_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_ck_12:8;
        RBus_UInt32  reg_p0_acdr_ck_11:8;
        RBus_UInt32  reg_p0_acdr_ck_10:8;
        RBus_UInt32  reg_p0_acdr_ck_9:8;
    };
}hdmirx_2p1_phy_p0_acdr_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_4:8;
        RBus_UInt32  reg_p0_b_3:8;
        RBus_UInt32  reg_p0_b_2:8;
        RBus_UInt32  reg_p0_b_1:8;
    };
}hdmirx_2p1_phy_p0_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_8:8;
        RBus_UInt32  reg_p0_b_7:8;
        RBus_UInt32  reg_p0_b_6:8;
        RBus_UInt32  reg_p0_b_5:8;
    };
}hdmirx_2p1_phy_p0_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_12:8;
        RBus_UInt32  reg_p0_b_11:8;
        RBus_UInt32  reg_p0_b_10:8;
        RBus_UInt32  reg_p0_b_9:8;
    };
}hdmirx_2p1_phy_p0_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_16:8;
        RBus_UInt32  reg_p0_b_15:8;
        RBus_UInt32  reg_p0_b_14:8;
        RBus_UInt32  reg_p0_b_13:8;
    };
}hdmirx_2p1_phy_p0_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_20:8;
        RBus_UInt32  reg_p0_b_19:8;
        RBus_UInt32  reg_p0_b_18:8;
        RBus_UInt32  reg_p0_b_17:8;
    };
}hdmirx_2p1_phy_p0_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_b_4:8;
        RBus_UInt32  reg_p0_acdr_b_3:8;
        RBus_UInt32  reg_p0_acdr_b_2:8;
        RBus_UInt32  reg_p0_acdr_b_1:8;
    };
}hdmirx_2p1_phy_p0_acdr_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_b_8:8;
        RBus_UInt32  reg_p0_acdr_b_7:8;
        RBus_UInt32  reg_p0_acdr_b_6:8;
        RBus_UInt32  reg_p0_acdr_b_5:8;
    };
}hdmirx_2p1_phy_p0_acdr_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_b_12:8;
        RBus_UInt32  reg_p0_acdr_b_11:8;
        RBus_UInt32  reg_p0_acdr_b_10:8;
        RBus_UInt32  reg_p0_acdr_b_9:8;
    };
}hdmirx_2p1_phy_p0_acdr_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_4:8;
        RBus_UInt32  reg_p0_g_3:8;
        RBus_UInt32  reg_p0_g_2:8;
        RBus_UInt32  reg_p0_g_1:8;
    };
}hdmirx_2p1_phy_p0_g0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_8:8;
        RBus_UInt32  reg_p0_g_7:8;
        RBus_UInt32  reg_p0_g_6:8;
        RBus_UInt32  reg_p0_g_5:8;
    };
}hdmirx_2p1_phy_p0_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_12:8;
        RBus_UInt32  reg_p0_g_11:8;
        RBus_UInt32  reg_p0_g_10:8;
        RBus_UInt32  reg_p0_g_9:8;
    };
}hdmirx_2p1_phy_p0_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_16:8;
        RBus_UInt32  reg_p0_g_15:8;
        RBus_UInt32  reg_p0_g_14:8;
        RBus_UInt32  reg_p0_g_13:8;
    };
}hdmirx_2p1_phy_p0_g3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_20:8;
        RBus_UInt32  reg_p0_g_19:8;
        RBus_UInt32  reg_p0_g_18:8;
        RBus_UInt32  reg_p0_g_17:8;
    };
}hdmirx_2p1_phy_p0_g4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_g_4:8;
        RBus_UInt32  reg_p0_acdr_g_3:8;
        RBus_UInt32  reg_p0_acdr_g_2:8;
        RBus_UInt32  reg_p0_acdr_g_1:8;
    };
}hdmirx_2p1_phy_p0_acdr_g0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_g_8:8;
        RBus_UInt32  reg_p0_acdr_g_7:8;
        RBus_UInt32  reg_p0_acdr_g_6:8;
        RBus_UInt32  reg_p0_acdr_g_5:8;
    };
}hdmirx_2p1_phy_p0_acdr_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_g_12:8;
        RBus_UInt32  reg_p0_acdr_g_11:8;
        RBus_UInt32  reg_p0_acdr_g_10:8;
        RBus_UInt32  reg_p0_acdr_g_9:8;
    };
}hdmirx_2p1_phy_p0_acdr_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_4:8;
        RBus_UInt32  reg_p0_r_3:8;
        RBus_UInt32  reg_p0_r_2:8;
        RBus_UInt32  reg_p0_r_1:8;
    };
}hdmirx_2p1_phy_p0_r0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_8:8;
        RBus_UInt32  reg_p0_r_7:8;
        RBus_UInt32  reg_p0_r_6:8;
        RBus_UInt32  reg_p0_r_5:8;
    };
}hdmirx_2p1_phy_p0_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_12:8;
        RBus_UInt32  reg_p0_r_11:8;
        RBus_UInt32  reg_p0_r_10:8;
        RBus_UInt32  reg_p0_r_9:8;
    };
}hdmirx_2p1_phy_p0_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_16:8;
        RBus_UInt32  reg_p0_r_15:8;
        RBus_UInt32  reg_p0_r_14:8;
        RBus_UInt32  reg_p0_r_13:8;
    };
}hdmirx_2p1_phy_p0_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_20:8;
        RBus_UInt32  reg_p0_r_19:8;
        RBus_UInt32  reg_p0_r_18:8;
        RBus_UInt32  reg_p0_r_17:8;
    };
}hdmirx_2p1_phy_p0_r4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_r_4:8;
        RBus_UInt32  reg_p0_acdr_r_3:8;
        RBus_UInt32  reg_p0_acdr_r_2:8;
        RBus_UInt32  reg_p0_acdr_r_1:8;
    };
}hdmirx_2p1_phy_p0_acdr_r0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_r_8:8;
        RBus_UInt32  reg_p0_acdr_r_7:8;
        RBus_UInt32  reg_p0_acdr_r_6:8;
        RBus_UInt32  reg_p0_acdr_r_5:8;
    };
}hdmirx_2p1_phy_p0_acdr_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_r_12:8;
        RBus_UInt32  reg_p0_acdr_r_11:8;
        RBus_UInt32  reg_p0_acdr_r_10:8;
        RBus_UInt32  reg_p0_acdr_r_9:8;
    };
}hdmirx_2p1_phy_p0_acdr_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  p0_ck_demux_rstb:1;
        RBus_UInt32  p0_r_demux_rstb:1;
        RBus_UInt32  p0_g_demux_rstb:1;
        RBus_UInt32  p0_b_demux_rstb:1;
    };
}hdmirx_2p1_phy_p0_hd21_y1_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_pll_p0_acdr_r_icp_sel:4;
        RBus_UInt32  reg_pll_p0_acdr_r_lfrs_sel:3;
        RBus_UInt32  reg_pll_p0_acdr_r_cs_cap_sel:2;
        RBus_UInt32  reg_pll_p0_acdr_r_cp_cap_sel:2;
        RBus_UInt32  reg_pll_p0_acdr_r_vco_fine_i:4;
        RBus_UInt32  reg_pll_p0_acdr_r_vco_coarse_i:4;
        RBus_UInt32  reg_pll_p0_acdr_r_en_lpf_r:1;
        RBus_UInt32  reg_pll_p0_acdr_r_en_lpf_c:1;
        RBus_UInt32  reg_pll_p0_acdr_r_en_idn:1;
        RBus_UInt32  reg_pll_p0_acdr_r_sel_idn:4;
        RBus_UInt32  reserved_pll_p0_acdr_r:6;
    };
}hdmirx_2p1_phy_p0_acdr_r_pll_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_pll_p0_acdr_g_icp_sel:4;
        RBus_UInt32  reg_pll_p0_acdr_g_lfrs_sel:3;
        RBus_UInt32  reg_pll_p0_acdr_g_cs_cap_sel:2;
        RBus_UInt32  reg_pll_p0_acdr_g_cp_cap_sel:2;
        RBus_UInt32  reg_pll_p0_acdr_g_vco_fine_i:4;
        RBus_UInt32  reg_pll_p0_acdr_g_vco_coarse_i:4;
        RBus_UInt32  reg_pll_p0_acdr_g_en_lpf_r:1;
        RBus_UInt32  reg_pll_p0_acdr_g_en_lpf_c:1;
        RBus_UInt32  reg_pll_p0_acdr_g_en_idn:1;
        RBus_UInt32  reg_pll_p0_acdr_g_sel_idn:4;
        RBus_UInt32  reserved_pll_p0_acdr_g:6;
    };
}hdmirx_2p1_phy_p0_acdr_g_pll_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_pll_p0_acdr_b_icp_sel:4;
        RBus_UInt32  reg_pll_p0_acdr_b_lfrs_sel:3;
        RBus_UInt32  reg_pll_p0_acdr_b_cs_cap_sel:2;
        RBus_UInt32  reg_pll_p0_acdr_b_cp_cap_sel:2;
        RBus_UInt32  reg_pll_p0_acdr_b_vco_fine_i:4;
        RBus_UInt32  reg_pll_p0_acdr_b_vco_coarse_i:4;
        RBus_UInt32  reg_pll_p0_acdr_b_en_lpf_r:1;
        RBus_UInt32  reg_pll_p0_acdr_b_en_lpf_c:1;
        RBus_UInt32  reg_pll_p0_acdr_b_en_idn:1;
        RBus_UInt32  reg_pll_p0_acdr_b_sel_idn:4;
        RBus_UInt32  reserved_pll_p0_acdr_b:6;
    };
}hdmirx_2p1_phy_p0_acdr_b_pll_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_pll_p0_acdr_ck_icp_sel:4;
        RBus_UInt32  reg_pll_p0_acdr_ck_lfrs_sel:3;
        RBus_UInt32  reg_pll_p0_acdr_ck_cs_cap_sel:2;
        RBus_UInt32  reg_pll_p0_acdr_ck_cp_cap_sel:2;
        RBus_UInt32  reg_pll_p0_acdr_ck_vco_fine_i:4;
        RBus_UInt32  reg_pll_p0_acdr_ck_vco_coarse_i:4;
        RBus_UInt32  reg_pll_p0_acdr_ck_en_lpf_r:1;
        RBus_UInt32  reg_pll_p0_acdr_ck_en_lpf_c:1;
        RBus_UInt32  reg_pll_p0_acdr_ck_en_idn:1;
        RBus_UInt32  reg_pll_p0_acdr_ck_sel_idn:4;
        RBus_UInt32  reserved_pll_p0_acdr_ck:6;
    };
}hdmirx_2p1_phy_p0_acdr_ck_pll_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_cdr_p0_acdr_r_icp_sel:4;
        RBus_UInt32  reg_cdr_p0_acdr_r_lfrs_sel:3;
        RBus_UInt32  reg_cdr_p0_acdr_r_cs_cap_sel:2;
        RBus_UInt32  reg_cdr_p0_acdr_r_cp_cap_sel:2;
        RBus_UInt32  reg_cdr_p0_acdr_r_vco_fine_i:4;
        RBus_UInt32  reg_cdr_p0_acdr_r_vco_coarse_i:4;
        RBus_UInt32  reg_cdr_p0_acdr_r_en_lpf_r:1;
        RBus_UInt32  reg_cdr_p0_acdr_r_en_lpf_c:1;
        RBus_UInt32  reg_cdr_p0_acdr_r_en_idn:1;
        RBus_UInt32  reg_cdr_p0_acdr_r_sel_idn:4;
        RBus_UInt32  reserved_cdr_p0_acdr_r:6;
    };
}hdmirx_2p1_phy_p0_acdr_r_cdr_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_cdr_p0_acdr_g_icp_sel:4;
        RBus_UInt32  reg_cdr_p0_acdr_g_lfrs_sel:3;
        RBus_UInt32  reg_cdr_p0_acdr_g_cs_cap_sel:2;
        RBus_UInt32  reg_cdr_p0_acdr_g_cp_cap_sel:2;
        RBus_UInt32  reg_cdr_p0_acdr_g_vco_fine_i:4;
        RBus_UInt32  reg_cdr_p0_acdr_g_vco_coarse_i:4;
        RBus_UInt32  reg_cdr_p0_acdr_g_en_lpf_r:1;
        RBus_UInt32  reg_cdr_p0_acdr_g_en_lpf_c:1;
        RBus_UInt32  reg_cdr_p0_acdr_g_en_idn:1;
        RBus_UInt32  reg_cdr_p0_acdr_g_sel_idn:4;
        RBus_UInt32  reserved_cdr_p0_acdr_g:6;
    };
}hdmirx_2p1_phy_p0_acdr_g_cdr_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_cdr_p0_acdr_b_icp_sel:4;
        RBus_UInt32  reg_cdr_p0_acdr_b_lfrs_sel:3;
        RBus_UInt32  reg_cdr_p0_acdr_b_cs_cap_sel:2;
        RBus_UInt32  reg_cdr_p0_acdr_b_cp_cap_sel:2;
        RBus_UInt32  reg_cdr_p0_acdr_b_vco_fine_i:4;
        RBus_UInt32  reg_cdr_p0_acdr_b_vco_coarse_i:4;
        RBus_UInt32  reg_cdr_p0_acdr_b_en_lpf_r:1;
        RBus_UInt32  reg_cdr_p0_acdr_b_en_lpf_c:1;
        RBus_UInt32  reg_cdr_p0_acdr_b_en_idn:1;
        RBus_UInt32  reg_cdr_p0_acdr_b_sel_idn:4;
        RBus_UInt32  reserved_cdr_p0_acdr_b:6;
    };
}hdmirx_2p1_phy_p0_acdr_b_cdr_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_cdr_p0_acdr_ck_icp_sel:4;
        RBus_UInt32  reg_cdr_p0_acdr_ck_lfrs_sel:3;
        RBus_UInt32  reg_cdr_p0_acdr_ck_cs_cap_sel:2;
        RBus_UInt32  reg_cdr_p0_acdr_ck_cp_cap_sel:2;
        RBus_UInt32  reg_cdr_p0_acdr_ck_vco_fine_i:4;
        RBus_UInt32  reg_cdr_p0_acdr_ck_vco_coarse_i:4;
        RBus_UInt32  reg_cdr_p0_acdr_ck_en_lpf_r:1;
        RBus_UInt32  reg_cdr_p0_acdr_ck_en_lpf_c:1;
        RBus_UInt32  reg_cdr_p0_acdr_ck_en_idn:1;
        RBus_UInt32  reg_cdr_p0_acdr_ck_sel_idn:4;
        RBus_UInt32  reserved_cdr_p0_acdr_ck:6;
    };
}hdmirx_2p1_phy_p0_acdr_ck_cdr_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_manual_p0_acdr_r_icp_sel:4;
        RBus_UInt32  reg_manual_p0_acdr_r_lfrs_sel:3;
        RBus_UInt32  reg_manual_p0_acdr_r_cs_cap_sel:2;
        RBus_UInt32  reg_manual_p0_acdr_r_cp_cap_sel:2;
        RBus_UInt32  reg_manual_p0_acdr_r_vco_fine_i:4;
        RBus_UInt32  reg_manual_p0_acdr_r_vco_coarse_i:4;
        RBus_UInt32  reg_manual_p0_acdr_r_en_lpf_r:1;
        RBus_UInt32  reg_manual_p0_acdr_r_en_lpf_c:1;
        RBus_UInt32  reg_manual_p0_acdr_r_en_idn:1;
        RBus_UInt32  reg_manual_p0_acdr_r_sel_idn:4;
        RBus_UInt32  reg_p0_r_pll_to_acdr_manual_en:1;
        RBus_UInt32  reg_p0_r_pll_to_acdr_rdy_manual:1;
        RBus_UInt32  reserved_manual_p0_acdr_r:4;
    };
}hdmirx_2p1_phy_p0_acdr_r_manual_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_manual_p0_acdr_g_icp_sel:4;
        RBus_UInt32  reg_manual_p0_acdr_g_lfrs_sel:3;
        RBus_UInt32  reg_manual_p0_acdr_g_cs_cap_sel:2;
        RBus_UInt32  reg_manual_p0_acdr_g_cp_cap_sel:2;
        RBus_UInt32  reg_manual_p0_acdr_g_vco_fine_i:4;
        RBus_UInt32  reg_manual_p0_acdr_g_vco_coarse_i:4;
        RBus_UInt32  reg_manual_p0_acdr_g_en_lpf_r:1;
        RBus_UInt32  reg_manual_p0_acdr_g_en_lpf_c:1;
        RBus_UInt32  reg_manual_p0_acdr_g_en_idn:1;
        RBus_UInt32  reg_manual_p0_acdr_g_sel_idn:4;
        RBus_UInt32  reg_p0_g_pll_to_acdr_manual_en:1;
        RBus_UInt32  reg_p0_g_pll_to_acdr_rdy_manual:1;
        RBus_UInt32  reserved_manual_p0_acdr_g:4;
    };
}hdmirx_2p1_phy_p0_acdr_g_manual_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_manual_p0_acdr_b_icp_sel:4;
        RBus_UInt32  reg_manual_p0_acdr_b_lfrs_sel:3;
        RBus_UInt32  reg_manual_p0_acdr_b_cs_cap_sel:2;
        RBus_UInt32  reg_manual_p0_acdr_b_cp_cap_sel:2;
        RBus_UInt32  reg_manual_p0_acdr_b_vco_fine_i:4;
        RBus_UInt32  reg_manual_p0_acdr_b_vco_coarse_i:4;
        RBus_UInt32  reg_manual_p0_acdr_b_en_lpf_r:1;
        RBus_UInt32  reg_manual_p0_acdr_b_en_lpf_c:1;
        RBus_UInt32  reg_manual_p0_acdr_b_en_idn:1;
        RBus_UInt32  reg_manual_p0_acdr_b_sel_idn:4;
        RBus_UInt32  reg_p0_b_pll_to_acdr_manual_en:1;
        RBus_UInt32  reg_p0_b_pll_to_acdr_rdy_manual:1;
        RBus_UInt32  reserved_manual_p0_acdr_b:4;
    };
}hdmirx_2p1_phy_p0_acdr_b_manual_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_manual_p0_acdr_ck_icp_sel:4;
        RBus_UInt32  reg_manual_p0_acdr_ck_lfrs_sel:3;
        RBus_UInt32  reg_manual_p0_acdr_ck_cs_cap_sel:2;
        RBus_UInt32  reg_manual_p0_acdr_ck_cp_cap_sel:2;
        RBus_UInt32  reg_manual_p0_acdr_ck_vco_fine_i:4;
        RBus_UInt32  reg_manual_p0_acdr_ck_vco_coarse_i:4;
        RBus_UInt32  reg_manual_p0_acdr_ck_en_lpf_r:1;
        RBus_UInt32  reg_manual_p0_acdr_ck_en_lpf_c:1;
        RBus_UInt32  reg_manual_p0_acdr_ck_en_idn:1;
        RBus_UInt32  reg_manual_p0_acdr_ck_sel_idn:4;
        RBus_UInt32  reg_p0_ck_pll_to_acdr_manual_en:1;
        RBus_UInt32  reg_p0_ck_pll_to_acdr_rdy_manual:1;
        RBus_UInt32  reserved_manual_p0_acdr_ck:4;
    };
}hdmirx_2p1_phy_p0_acdr_ck_manual_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_out_2:8;
        RBus_UInt32  reg_p1_b_out_1:8;
        RBus_UInt32  reg_p1_ck_out_2:8;
        RBus_UInt32  reg_p1_ck_out_1:8;
    };
}hdmirx_2p1_phy_p1_top_out_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_out_2:8;
        RBus_UInt32  reg_p1_r_out_1:8;
        RBus_UInt32  reg_p1_g_out_2:8;
        RBus_UInt32  reg_p1_g_out_1:8;
    };
}hdmirx_2p1_phy_p1_top_out_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p1_fore_off_ok_r:1;
        RBus_UInt32  reg_p1_fore_off_bound_r:1;
        RBus_UInt32  reg_p1_fore_off_tst_r:5;
        RBus_UInt32  res2:1;
        RBus_UInt32  reg_p1_fore_off_ok_g:1;
        RBus_UInt32  reg_p1_fore_off_bound_g:1;
        RBus_UInt32  reg_p1_fore_off_tst_g:5;
        RBus_UInt32  res3:1;
        RBus_UInt32  reg_p1_fore_off_ok_ck:1;
        RBus_UInt32  reg_p1_fore_off_bound_ck:1;
        RBus_UInt32  reg_p1_fore_off_tst_ck:5;
        RBus_UInt32  res4:1;
        RBus_UInt32  reg_p1_fore_off_ok_b:1;
        RBus_UInt32  reg_p1_fore_off_bound_b:1;
        RBus_UInt32  reg_p1_fore_off_tst_b:5;
    };
}hdmirx_2p1_phy_p1_koffset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  reg_p1_cmu_ck_3:8;
        RBus_UInt32  reg_p1_cmu_ck_2:8;
        RBus_UInt32  reg_p1_cmu_ck_1:8;
    };
}hdmirx_2p1_phy_p1_ck_cmu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_4:8;
        RBus_UInt32  reg_p1_ck_3:8;
        RBus_UInt32  reg_p1_ck_2:8;
        RBus_UInt32  reg_p1_ck_1:8;
    };
}hdmirx_2p1_phy_p1_ck0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_8:8;
        RBus_UInt32  reg_p1_ck_7:8;
        RBus_UInt32  reg_p1_ck_6:8;
        RBus_UInt32  reg_p1_ck_5:8;
    };
}hdmirx_2p1_phy_p1_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_12:8;
        RBus_UInt32  reg_p1_ck_11:8;
        RBus_UInt32  reg_p1_ck_10:8;
        RBus_UInt32  reg_p1_ck_9:8;
    };
}hdmirx_2p1_phy_p1_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_16:8;
        RBus_UInt32  reg_p1_ck_15:8;
        RBus_UInt32  reg_p1_ck_14:8;
        RBus_UInt32  reg_p1_ck_13:8;
    };
}hdmirx_2p1_phy_p1_ck3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_20:8;
        RBus_UInt32  reg_p1_ck_19:8;
        RBus_UInt32  reg_p1_ck_18:8;
        RBus_UInt32  reg_p1_ck_17:8;
    };
}hdmirx_2p1_phy_p1_ck4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_ck_4:8;
        RBus_UInt32  reg_p1_acdr_ck_3:8;
        RBus_UInt32  reg_p1_acdr_ck_2:8;
        RBus_UInt32  reg_p1_acdr_ck_1:8;
    };
}hdmirx_2p1_phy_p1_acdr_ck0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_ck_8:8;
        RBus_UInt32  reg_p1_acdr_ck_7:8;
        RBus_UInt32  reg_p1_acdr_ck_6:8;
        RBus_UInt32  reg_p1_acdr_ck_5:8;
    };
}hdmirx_2p1_phy_p1_acdr_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_ck_12:8;
        RBus_UInt32  reg_p1_acdr_ck_11:8;
        RBus_UInt32  reg_p1_acdr_ck_10:8;
        RBus_UInt32  reg_p1_acdr_ck_9:8;
    };
}hdmirx_2p1_phy_p1_acdr_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_4:8;
        RBus_UInt32  reg_p1_b_3:8;
        RBus_UInt32  reg_p1_b_2:8;
        RBus_UInt32  reg_p1_b_1:8;
    };
}hdmirx_2p1_phy_p1_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_8:8;
        RBus_UInt32  reg_p1_b_7:8;
        RBus_UInt32  reg_p1_b_6:8;
        RBus_UInt32  reg_p1_b_5:8;
    };
}hdmirx_2p1_phy_p1_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_12:8;
        RBus_UInt32  reg_p1_b_11:8;
        RBus_UInt32  reg_p1_b_10:8;
        RBus_UInt32  reg_p1_b_9:8;
    };
}hdmirx_2p1_phy_p1_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_16:8;
        RBus_UInt32  reg_p1_b_15:8;
        RBus_UInt32  reg_p1_b_14:8;
        RBus_UInt32  reg_p1_b_13:8;
    };
}hdmirx_2p1_phy_p1_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_20:8;
        RBus_UInt32  reg_p1_b_19:8;
        RBus_UInt32  reg_p1_b_18:8;
        RBus_UInt32  reg_p1_b_17:8;
    };
}hdmirx_2p1_phy_p1_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_b_4:8;
        RBus_UInt32  reg_p1_acdr_b_3:8;
        RBus_UInt32  reg_p1_acdr_b_2:8;
        RBus_UInt32  reg_p1_acdr_b_1:8;
    };
}hdmirx_2p1_phy_p1_acdr_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_b_8:8;
        RBus_UInt32  reg_p1_acdr_b_7:8;
        RBus_UInt32  reg_p1_acdr_b_6:8;
        RBus_UInt32  reg_p1_acdr_b_5:8;
    };
}hdmirx_2p1_phy_p1_acdr_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_b_12:8;
        RBus_UInt32  reg_p1_acdr_b_11:8;
        RBus_UInt32  reg_p1_acdr_b_10:8;
        RBus_UInt32  reg_p1_acdr_b_9:8;
    };
}hdmirx_2p1_phy_p1_acdr_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_4:8;
        RBus_UInt32  reg_p1_g_3:8;
        RBus_UInt32  reg_p1_g_2:8;
        RBus_UInt32  reg_p1_g_1:8;
    };
}hdmirx_2p1_phy_p1_g0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_8:8;
        RBus_UInt32  reg_p1_g_7:8;
        RBus_UInt32  reg_p1_g_6:8;
        RBus_UInt32  reg_p1_g_5:8;
    };
}hdmirx_2p1_phy_p1_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_12:8;
        RBus_UInt32  reg_p1_g_11:8;
        RBus_UInt32  reg_p1_g_10:8;
        RBus_UInt32  reg_p1_g_9:8;
    };
}hdmirx_2p1_phy_p1_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_16:8;
        RBus_UInt32  reg_p1_g_15:8;
        RBus_UInt32  reg_p1_g_14:8;
        RBus_UInt32  reg_p1_g_13:8;
    };
}hdmirx_2p1_phy_p1_g3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_20:8;
        RBus_UInt32  reg_p1_g_19:8;
        RBus_UInt32  reg_p1_g_18:8;
        RBus_UInt32  reg_p1_g_17:8;
    };
}hdmirx_2p1_phy_p1_g4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_g_4:8;
        RBus_UInt32  reg_p1_acdr_g_3:8;
        RBus_UInt32  reg_p1_acdr_g_2:8;
        RBus_UInt32  reg_p1_acdr_g_1:8;
    };
}hdmirx_2p1_phy_p1_acdr_g0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_g_8:8;
        RBus_UInt32  reg_p1_acdr_g_7:8;
        RBus_UInt32  reg_p1_acdr_g_6:8;
        RBus_UInt32  reg_p1_acdr_g_5:8;
    };
}hdmirx_2p1_phy_p1_acdr_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_g_12:8;
        RBus_UInt32  reg_p1_acdr_g_11:8;
        RBus_UInt32  reg_p1_acdr_g_10:8;
        RBus_UInt32  reg_p1_acdr_g_9:8;
    };
}hdmirx_2p1_phy_p1_acdr_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_4:8;
        RBus_UInt32  reg_p1_r_3:8;
        RBus_UInt32  reg_p1_r_2:8;
        RBus_UInt32  reg_p1_r_1:8;
    };
}hdmirx_2p1_phy_p1_r0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_8:8;
        RBus_UInt32  reg_p1_r_7:8;
        RBus_UInt32  reg_p1_r_6:8;
        RBus_UInt32  reg_p1_r_5:8;
    };
}hdmirx_2p1_phy_p1_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_12:8;
        RBus_UInt32  reg_p1_r_11:8;
        RBus_UInt32  reg_p1_r_10:8;
        RBus_UInt32  reg_p1_r_9:8;
    };
}hdmirx_2p1_phy_p1_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_16:8;
        RBus_UInt32  reg_p1_r_15:8;
        RBus_UInt32  reg_p1_r_14:8;
        RBus_UInt32  reg_p1_r_13:8;
    };
}hdmirx_2p1_phy_p1_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_20:8;
        RBus_UInt32  reg_p1_r_19:8;
        RBus_UInt32  reg_p1_r_18:8;
        RBus_UInt32  reg_p1_r_17:8;
    };
}hdmirx_2p1_phy_p1_r4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_r_4:8;
        RBus_UInt32  reg_p1_acdr_r_3:8;
        RBus_UInt32  reg_p1_acdr_r_2:8;
        RBus_UInt32  reg_p1_acdr_r_1:8;
    };
}hdmirx_2p1_phy_p1_acdr_r0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_r_8:8;
        RBus_UInt32  reg_p1_acdr_r_7:8;
        RBus_UInt32  reg_p1_acdr_r_6:8;
        RBus_UInt32  reg_p1_acdr_r_5:8;
    };
}hdmirx_2p1_phy_p1_acdr_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_r_12:8;
        RBus_UInt32  reg_p1_acdr_r_11:8;
        RBus_UInt32  reg_p1_acdr_r_10:8;
        RBus_UInt32  reg_p1_acdr_r_9:8;
    };
}hdmirx_2p1_phy_p1_acdr_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  p1_ck_demux_rstb:1;
        RBus_UInt32  p1_r_demux_rstb:1;
        RBus_UInt32  p1_g_demux_rstb:1;
        RBus_UInt32  p1_b_demux_rstb:1;
    };
}hdmirx_2p1_phy_p1_hd21_y1_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_pll_p1_acdr_r_icp_sel:4;
        RBus_UInt32  reg_pll_p1_acdr_r_lfrs_sel:3;
        RBus_UInt32  reg_pll_p1_acdr_r_cs_cap_sel:2;
        RBus_UInt32  reg_pll_p1_acdr_r_cp_cap_sel:2;
        RBus_UInt32  reg_pll_p1_acdr_r_vco_fine_i:4;
        RBus_UInt32  reg_pll_p1_acdr_r_vco_coarse_i:4;
        RBus_UInt32  reg_pll_p1_acdr_r_en_lpf_r:1;
        RBus_UInt32  reg_pll_p1_acdr_r_en_lpf_c:1;
        RBus_UInt32  reg_pll_p1_acdr_r_en_idn:1;
        RBus_UInt32  reg_pll_p1_acdr_r_sel_idn:4;
        RBus_UInt32  reserved_pll_p1_acdr_r:6;
    };
}hdmirx_2p1_phy_p1_acdr_r_pll_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_pll_p1_acdr_g_icp_sel:4;
        RBus_UInt32  reg_pll_p1_acdr_g_lfrs_sel:3;
        RBus_UInt32  reg_pll_p1_acdr_g_cs_cap_sel:2;
        RBus_UInt32  reg_pll_p1_acdr_g_cp_cap_sel:2;
        RBus_UInt32  reg_pll_p1_acdr_g_vco_fine_i:4;
        RBus_UInt32  reg_pll_p1_acdr_g_vco_coarse_i:4;
        RBus_UInt32  reg_pll_p1_acdr_g_en_lpf_r:1;
        RBus_UInt32  reg_pll_p1_acdr_g_en_lpf_c:1;
        RBus_UInt32  reg_pll_p1_acdr_g_en_idn:1;
        RBus_UInt32  reg_pll_p1_acdr_g_sel_idn:4;
        RBus_UInt32  reserved_pll_p1_acdr_g:6;
    };
}hdmirx_2p1_phy_p1_acdr_g_pll_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_pll_p1_acdr_b_icp_sel:4;
        RBus_UInt32  reg_pll_p1_acdr_b_lfrs_sel:3;
        RBus_UInt32  reg_pll_p1_acdr_b_cs_cap_sel:2;
        RBus_UInt32  reg_pll_p1_acdr_b_cp_cap_sel:2;
        RBus_UInt32  reg_pll_p1_acdr_b_vco_fine_i:4;
        RBus_UInt32  reg_pll_p1_acdr_b_vco_coarse_i:4;
        RBus_UInt32  reg_pll_p1_acdr_b_en_lpf_r:1;
        RBus_UInt32  reg_pll_p1_acdr_b_en_lpf_c:1;
        RBus_UInt32  reg_pll_p1_acdr_b_en_idn:1;
        RBus_UInt32  reg_pll_p1_acdr_b_sel_idn:4;
        RBus_UInt32  reserved_pll_p1_acdr_b:6;
    };
}hdmirx_2p1_phy_p1_acdr_b_pll_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_pll_p1_acdr_ck_icp_sel:4;
        RBus_UInt32  reg_pll_p1_acdr_ck_lfrs_sel:3;
        RBus_UInt32  reg_pll_p1_acdr_ck_cs_cap_sel:2;
        RBus_UInt32  reg_pll_p1_acdr_ck_cp_cap_sel:2;
        RBus_UInt32  reg_pll_p1_acdr_ck_vco_fine_i:4;
        RBus_UInt32  reg_pll_p1_acdr_ck_vco_coarse_i:4;
        RBus_UInt32  reg_pll_p1_acdr_ck_en_lpf_r:1;
        RBus_UInt32  reg_pll_p1_acdr_ck_en_lpf_c:1;
        RBus_UInt32  reg_pll_p1_acdr_ck_en_idn:1;
        RBus_UInt32  reg_pll_p1_acdr_ck_sel_idn:4;
        RBus_UInt32  reserved_pll_p1_acdr_ck:6;
    };
}hdmirx_2p1_phy_p1_acdr_ck_pll_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_cdr_p1_acdr_r_icp_sel:4;
        RBus_UInt32  reg_cdr_p1_acdr_r_lfrs_sel:3;
        RBus_UInt32  reg_cdr_p1_acdr_r_cs_cap_sel:2;
        RBus_UInt32  reg_cdr_p1_acdr_r_cp_cap_sel:2;
        RBus_UInt32  reg_cdr_p1_acdr_r_vco_fine_i:4;
        RBus_UInt32  reg_cdr_p1_acdr_r_vco_coarse_i:4;
        RBus_UInt32  reg_cdr_p1_acdr_r_en_lpf_r:1;
        RBus_UInt32  reg_cdr_p1_acdr_r_en_lpf_c:1;
        RBus_UInt32  reg_cdr_p1_acdr_r_en_idn:1;
        RBus_UInt32  reg_cdr_p1_acdr_r_sel_idn:4;
        RBus_UInt32  reserved_cdr_p1_acdr_r:6;
    };
}hdmirx_2p1_phy_p1_acdr_r_cdr_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_cdr_p1_acdr_g_icp_sel:4;
        RBus_UInt32  reg_cdr_p1_acdr_g_lfrs_sel:3;
        RBus_UInt32  reg_cdr_p1_acdr_g_cs_cap_sel:2;
        RBus_UInt32  reg_cdr_p1_acdr_g_cp_cap_sel:2;
        RBus_UInt32  reg_cdr_p1_acdr_g_vco_fine_i:4;
        RBus_UInt32  reg_cdr_p1_acdr_g_vco_coarse_i:4;
        RBus_UInt32  reg_cdr_p1_acdr_g_en_lpf_r:1;
        RBus_UInt32  reg_cdr_p1_acdr_g_en_lpf_c:1;
        RBus_UInt32  reg_cdr_p1_acdr_g_en_idn:1;
        RBus_UInt32  reg_cdr_p1_acdr_g_sel_idn:4;
        RBus_UInt32  reserved_cdr_p1_acdr_g:6;
    };
}hdmirx_2p1_phy_p1_acdr_g_cdr_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_cdr_p1_acdr_b_icp_sel:4;
        RBus_UInt32  reg_cdr_p1_acdr_b_lfrs_sel:3;
        RBus_UInt32  reg_cdr_p1_acdr_b_cs_cap_sel:2;
        RBus_UInt32  reg_cdr_p1_acdr_b_cp_cap_sel:2;
        RBus_UInt32  reg_cdr_p1_acdr_b_vco_fine_i:4;
        RBus_UInt32  reg_cdr_p1_acdr_b_vco_coarse_i:4;
        RBus_UInt32  reg_cdr_p1_acdr_b_en_lpf_r:1;
        RBus_UInt32  reg_cdr_p1_acdr_b_en_lpf_c:1;
        RBus_UInt32  reg_cdr_p1_acdr_b_en_idn:1;
        RBus_UInt32  reg_cdr_p1_acdr_b_sel_idn:4;
        RBus_UInt32  reserved_cdr_p1_acdr_b:6;
    };
}hdmirx_2p1_phy_p1_acdr_b_cdr_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_cdr_p1_acdr_ck_icp_sel:4;
        RBus_UInt32  reg_cdr_p1_acdr_ck_lfrs_sel:3;
        RBus_UInt32  reg_cdr_p1_acdr_ck_cs_cap_sel:2;
        RBus_UInt32  reg_cdr_p1_acdr_ck_cp_cap_sel:2;
        RBus_UInt32  reg_cdr_p1_acdr_ck_vco_fine_i:4;
        RBus_UInt32  reg_cdr_p1_acdr_ck_vco_coarse_i:4;
        RBus_UInt32  reg_cdr_p1_acdr_ck_en_lpf_r:1;
        RBus_UInt32  reg_cdr_p1_acdr_ck_en_lpf_c:1;
        RBus_UInt32  reg_cdr_p1_acdr_ck_en_idn:1;
        RBus_UInt32  reg_cdr_p1_acdr_ck_sel_idn:4;
        RBus_UInt32  reserved_cdr_p1_acdr_ck:6;
    };
}hdmirx_2p1_phy_p1_acdr_ck_cdr_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_manual_p1_acdr_r_icp_sel:4;
        RBus_UInt32  reg_manual_p1_acdr_r_lfrs_sel:3;
        RBus_UInt32  reg_manual_p1_acdr_r_cs_cap_sel:2;
        RBus_UInt32  reg_manual_p1_acdr_r_cp_cap_sel:2;
        RBus_UInt32  reg_manual_p1_acdr_r_vco_fine_i:4;
        RBus_UInt32  reg_manual_p1_acdr_r_vco_coarse_i:4;
        RBus_UInt32  reg_manual_p1_acdr_r_en_lpf_r:1;
        RBus_UInt32  reg_manual_p1_acdr_r_en_lpf_c:1;
        RBus_UInt32  reg_manual_p1_acdr_r_en_idn:1;
        RBus_UInt32  reg_manual_p1_acdr_r_sel_idn:4;
        RBus_UInt32  reg_p1_r_pll_to_acdr_manual_en:1;
        RBus_UInt32  reg_p1_r_pll_to_acdr_rdy_manual:1;
        RBus_UInt32  reserved_manual_p1_acdr_r:4;
    };
}hdmirx_2p1_phy_p1_acdr_r_manual_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_manual_p1_acdr_g_icp_sel:4;
        RBus_UInt32  reg_manual_p1_acdr_g_lfrs_sel:3;
        RBus_UInt32  reg_manual_p1_acdr_g_cs_cap_sel:2;
        RBus_UInt32  reg_manual_p1_acdr_g_cp_cap_sel:2;
        RBus_UInt32  reg_manual_p1_acdr_g_vco_fine_i:4;
        RBus_UInt32  reg_manual_p1_acdr_g_vco_coarse_i:4;
        RBus_UInt32  reg_manual_p1_acdr_g_en_lpf_r:1;
        RBus_UInt32  reg_manual_p1_acdr_g_en_lpf_c:1;
        RBus_UInt32  reg_manual_p1_acdr_g_en_idn:1;
        RBus_UInt32  reg_manual_p1_acdr_g_sel_idn:4;
        RBus_UInt32  reg_p1_g_pll_to_acdr_manual_en:1;
        RBus_UInt32  reg_p1_g_pll_to_acdr_rdy_manual:1;
        RBus_UInt32  reserved_manual_p1_acdr_g:4;
    };
}hdmirx_2p1_phy_p1_acdr_g_manual_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_manual_p1_acdr_b_icp_sel:4;
        RBus_UInt32  reg_manual_p1_acdr_b_lfrs_sel:3;
        RBus_UInt32  reg_manual_p1_acdr_b_cs_cap_sel:2;
        RBus_UInt32  reg_manual_p1_acdr_b_cp_cap_sel:2;
        RBus_UInt32  reg_manual_p1_acdr_b_vco_fine_i:4;
        RBus_UInt32  reg_manual_p1_acdr_b_vco_coarse_i:4;
        RBus_UInt32  reg_manual_p1_acdr_b_en_lpf_r:1;
        RBus_UInt32  reg_manual_p1_acdr_b_en_lpf_c:1;
        RBus_UInt32  reg_manual_p1_acdr_b_en_idn:1;
        RBus_UInt32  reg_manual_p1_acdr_b_sel_idn:4;
        RBus_UInt32  reg_p1_b_pll_to_acdr_manual_en:1;
        RBus_UInt32  reg_p1_b_pll_to_acdr_rdy_manual:1;
        RBus_UInt32  reserved_manual_p1_acdr_b:4;
    };
}hdmirx_2p1_phy_p1_acdr_b_manual_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_manual_p1_acdr_ck_icp_sel:4;
        RBus_UInt32  reg_manual_p1_acdr_ck_lfrs_sel:3;
        RBus_UInt32  reg_manual_p1_acdr_ck_cs_cap_sel:2;
        RBus_UInt32  reg_manual_p1_acdr_ck_cp_cap_sel:2;
        RBus_UInt32  reg_manual_p1_acdr_ck_vco_fine_i:4;
        RBus_UInt32  reg_manual_p1_acdr_ck_vco_coarse_i:4;
        RBus_UInt32  reg_manual_p1_acdr_ck_en_lpf_r:1;
        RBus_UInt32  reg_manual_p1_acdr_ck_en_lpf_c:1;
        RBus_UInt32  reg_manual_p1_acdr_ck_en_idn:1;
        RBus_UInt32  reg_manual_p1_acdr_ck_sel_idn:4;
        RBus_UInt32  reg_p1_ck_pll_to_acdr_manual_en:1;
        RBus_UInt32  reg_p1_ck_pll_to_acdr_rdy_manual:1;
        RBus_UInt32  reserved_manual_p1_acdr_ck:4;
    };
}hdmirx_2p1_phy_p1_acdr_ck_manual_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_r_dig_rst_n:1;
        RBus_UInt32  p0_g_dig_rst_n:1;
        RBus_UInt32  p0_b_dig_rst_n:1;
        RBus_UInt32  p0_r_cdr_rst_n:1;
        RBus_UInt32  p0_g_cdr_rst_n:1;
        RBus_UInt32  p0_b_cdr_rst_n:1;
        RBus_UInt32  reg_p0_cdr_ckinv_r:1;
        RBus_UInt32  reg_p0_cdr_ckinv_g:1;
        RBus_UInt32  reg_p0_cdr_ckinv_b:1;
        RBus_UInt32  reg_p0_shift_inv_r:1;
        RBus_UInt32  reg_p0_shift_inv_g:1;
        RBus_UInt32  reg_p0_shift_inv_b:1;
        RBus_UInt32  reg_p0_rate_sel:3;
        RBus_UInt32  reg_p0_kd:1;
        RBus_UInt32  reg_p0_kp:8;
        RBus_UInt32  reg_p0_ki:3;
        RBus_UInt32  reg_p0_bypass_sdm_int:1;
        RBus_UInt32  reg_p0_data_order:1;
        RBus_UInt32  reg_p0_infifo_cnt:3;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_int_init:14;
        RBus_UInt32  reg_p0_acc2_period:10;
        RBus_UInt32  reg_p0_squ_tri:1;
        RBus_UInt32  reg_p0_acc2_manual:1;
        RBus_UInt32  reg_p0_testout_sel:2;
        RBus_UInt32  reg_p0_ercnt_en:1;
        RBus_UInt32  reg_p0_edge_out:1;
        RBus_UInt32  reg_p0_pi_m_mode_r:1;
        RBus_UInt32  reg_p0_dyn_kp_en:1;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_en_m_value:4;
        RBus_UInt32  reg_p0_st_mode:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p0_timer_lpf:5;
        RBus_UInt32  reg_p0_timer_eq:5;
        RBus_UInt32  reg_p0_timer_ber:5;
        RBus_UInt32  res2:8;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_ck_dig_rst_n:1;
        RBus_UInt32  p0_ck_cdr_rst_n:1;
        RBus_UInt32  reg_p0_cdr_ckinv_ck:1;
        RBus_UInt32  reg_p0_shift_inv_ck:1;
        RBus_UInt32  reg_p0_pi_m_mode_g:1;
        RBus_UInt32  reg_p0_pi_m_mode_b:1;
        RBus_UInt32  reg_p0_pi_m_mode_ck:1;
        RBus_UInt32  res1:25;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  p0_st_ro_r:5;
        RBus_UInt32  p0_en_ro_r:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  p0_st_ro_g:5;
        RBus_UInt32  p0_en_ro_g:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  p0_st_ro_b:5;
        RBus_UInt32  p0_en_ro_b:4;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  p0_er_count_r:10;
        RBus_UInt32  p0_er_count_g:10;
        RBus_UInt32  p0_er_count_b:10;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  p0_st_ro_ck:5;
        RBus_UInt32  p0_en_ro_ck:4;
        RBus_UInt32  p0_er_count_ck:10;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_bypass_clk_rdy:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy:1;
        RBus_UInt32  reg_p0_bypass_data_rdy:1;
        RBus_UInt32  reg_p0_bypass_pi:1;
        RBus_UInt32  reg_p0_data_rdy_time:4;
        RBus_UInt32  reg_p0_en_clkout_manual:1;
        RBus_UInt32  reg_p0_en_eqen_manual:1;
        RBus_UInt32  reg_p0_en_data_manual:1;
        RBus_UInt32  reg_p0_eqen_rdy_time:4;
        RBus_UInt32  reg_p0_order:1;
        RBus_UInt32  reg_p0_pll_wd_base_time:3;
        RBus_UInt32  reg_p0_pll_wd_en:1;
        RBus_UInt32  reg_p0_pll_wd_rst_wid:2;
        RBus_UInt32  reg_p0_pll_wd_time_rdy:2;
        RBus_UInt32  reg_p0_acdr_l0_en:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy_l0:1;
        RBus_UInt32  reg_p0_bypass_data_rdy_l0:1;
        RBus_UInt32  reg_p0_en_eqen_manual_l0:1;
        RBus_UInt32  reg_p0_en_data_manual_l0:1;
        RBus_UInt32  p0_pll_wd_ckrdy_ro:1;
        RBus_UInt32  p0_pll_wd_rst_wc:1;
        RBus_UInt32  p0_wdog_rst_n:1;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_wd_sdm_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p0_f_code:12;
        RBus_UInt32  res2:7;
        RBus_UInt32  reg_p0_n_code:9;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p0_acdr_l3_en:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy_l3:1;
        RBus_UInt32  reg_p0_bypass_data_rdy_l3:1;
        RBus_UInt32  reg_p0_en_eqen_manual_l3:1;
        RBus_UInt32  reg_p0_en_data_manual_l3:1;
        RBus_UInt32  reg_p0_acdr_l2_en:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy_l2:1;
        RBus_UInt32  reg_p0_bypass_data_rdy_l2:1;
        RBus_UInt32  reg_p0_en_eqen_manual_l2:1;
        RBus_UInt32  reg_p0_en_data_manual_l2:1;
        RBus_UInt32  reg_p0_acdr_l1_en:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy_l1:1;
        RBus_UInt32  reg_p0_bypass_data_rdy_l1:1;
        RBus_UInt32  reg_p0_en_eqen_manual_l1:1;
        RBus_UInt32  reg_p0_en_data_manual_l1:1;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_auto_mode:1;
        RBus_UInt32  reg_p0_r_adp_en_manual:1;
        RBus_UInt32  reg_p0_r_cp_en_manual:1;
        RBus_UInt32  reg_p0_r_adap_eq_off:1;
        RBus_UInt32  reg_p0_r_adp_time:5;
        RBus_UInt32  reg_p0_r_calib_time:3;
        RBus_UInt32  reg_p0_r_calib_manual:1;
        RBus_UInt32  reg_p0_r_calib_late:1;
        RBus_UInt32  reg_p0_r_vco_coarse:7;
        RBus_UInt32  reg_p0_r_divide_num:8;
        RBus_UInt32  reg_p0_r_bypass_k_band_mode:1;
        RBus_UInt32  reg_p0_r_stable_time_mode:1;
        RBus_UInt32  reg_p0_r_cp2adp_en:1;
    };
}hdmirx_2p1_phy_p0_fld_r_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_cp2adp_time:4;
        RBus_UInt32  reg_p0_r_lock_up_limit:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p0_r_lock_dn_limit:12;
    };
}hdmirx_2p1_phy_p0_fld_r_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_cdr_cp:20;
        RBus_UInt32  reg_p0_r_cdr_r:6;
        RBus_UInt32  reg_p0_r_cdr_c:2;
        RBus_UInt32  reg_p0_r_vc_sel:2;
        RBus_UInt32  reg_p0_r_calib_reset_sel:1;
        RBus_UInt32  reg_p0_r_unstable_flg:1;
    };
}hdmirx_2p1_phy_p0_fld_r_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_coarse_lock_up_limit:12;
        RBus_UInt32  reg_p0_r_coarse_lock_dn_limit:12;
        RBus_UInt32  reg_p0_r_cp_time:5;
        RBus_UInt32  reg_p0_r_init_time:3;
    };
}hdmirx_2p1_phy_p0_fld_r_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p0_r_coarse_calib_manual:1;
        RBus_UInt32  reg_p0_r_vco_coarse_manual:4;
        RBus_UInt32  reg_p0_r_vco_fine_manual:4;
        RBus_UInt32  reg_p0_r_xtal_24m_en:1;
        RBus_UInt32  reg_p0_r_vco_fine_time_sel:2;
        RBus_UInt32  reg_p0_r_bypass_coarse_k_mode:1;
        RBus_UInt32  reg_p0_r_vco_coarse_init:4;
        RBus_UInt32  reg_p0_r_vco_fine_init:4;
        RBus_UInt32  reg_p0_r_timer_5:1;
        RBus_UInt32  reg_p0_r_timer_6:5;
        RBus_UInt32  p0_r_fld_rstb:1;
        RBus_UInt32  p0_r_acdr_fine_tune_start:1;
    };
}hdmirx_2p1_phy_p0_fld_r_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_start_en_manual:1;
        RBus_UInt32  reg_p0_r_pfd_en_manual:1;
        RBus_UInt32  reg_p0_r_pfd_time:5;
        RBus_UInt32  reg_p0_r_pfd_bypass:1;
        RBus_UInt32  reg_p0_r_rxidle_bypass:1;
        RBus_UInt32  reg_p0_r_slope_manual:1;
        RBus_UInt32  reg_p0_r_slope_band:5;
        RBus_UInt32  reg_p0_r_old_mode:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p0_r_coarse_init:6;
        RBus_UInt32  reg_p0_r_vc_chg_time:3;
        RBus_UInt32  reg_p0_r_timer_4:5;
    };
}hdmirx_2p1_phy_p0_fld_r_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_r_fld_st_reg:5;
        RBus_UInt32  p0_r_adp_en_fsm_reg:1;
        RBus_UInt32  p0_r_cp_en_fsm_reg:1;
        RBus_UInt32  p0_r_coarse_fsm_reg:7;
        RBus_UInt32  p0_r_pfd_en_fsm_reg:1;
        RBus_UInt32  p0_r_fine_fsm_reg:7;
        RBus_UInt32  reg_p0_r_cp_time_2:5;
        RBus_UInt32  p0_r_coarse_too_fast_reg:1;
        RBus_UInt32  p0_r_coarse_too_slow_reg:1;
        RBus_UInt32  p0_r_coarse_calib_ok:1;
        RBus_UInt32  p0_r_calib_ok:1;
        RBus_UInt32  p0_r_start_en:1;
    };
}hdmirx_2p1_phy_p0_fld_r_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_auto_mode:1;
        RBus_UInt32  reg_p0_g_adp_en_manual:1;
        RBus_UInt32  reg_p0_g_cp_en_manual:1;
        RBus_UInt32  reg_p0_g_adap_eq_off:1;
        RBus_UInt32  reg_p0_g_adp_time:5;
        RBus_UInt32  reg_p0_g_calib_time:3;
        RBus_UInt32  reg_p0_g_calib_manual:1;
        RBus_UInt32  reg_p0_g_calib_late:1;
        RBus_UInt32  reg_p0_g_vco_coarse:7;
        RBus_UInt32  reg_p0_g_divide_num:8;
        RBus_UInt32  reg_p0_g_bypass_k_band_mode:1;
        RBus_UInt32  reg_p0_g_stable_time_mode:1;
        RBus_UInt32  reg_p0_g_cp2adp_en:1;
    };
}hdmirx_2p1_phy_p0_fld_g_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_cp2adp_time:4;
        RBus_UInt32  reg_p0_g_lock_up_limit:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p0_g_lock_dn_limit:12;
    };
}hdmirx_2p1_phy_p0_fld_g_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_cdr_cp:20;
        RBus_UInt32  reg_p0_g_cdr_r:6;
        RBus_UInt32  reg_p0_g_cdr_c:2;
        RBus_UInt32  reg_p0_g_vc_sel:2;
        RBus_UInt32  reg_p0_g_calib_reset_sel:1;
        RBus_UInt32  reg_p0_g_unstable_flg:1;
    };
}hdmirx_2p1_phy_p0_fld_g_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_coarse_lock_up_limit:12;
        RBus_UInt32  reg_p0_g_coarse_lock_dn_limit:12;
        RBus_UInt32  reg_p0_g_cp_time:5;
        RBus_UInt32  reg_p0_g_init_time:3;
    };
}hdmirx_2p1_phy_p0_fld_g_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p0_g_coarse_calib_manual:1;
        RBus_UInt32  reg_p0_g_vco_coarse_manual:4;
        RBus_UInt32  reg_p0_g_vco_fine_manual:4;
        RBus_UInt32  reg_p0_g_xtal_24m_en:1;
        RBus_UInt32  reg_p0_g_vco_fine_time_sel:2;
        RBus_UInt32  reg_p0_g_bypass_coarse_k_mode:1;
        RBus_UInt32  reg_p0_g_vco_coarse_init:4;
        RBus_UInt32  reg_p0_g_vco_fine_init:4;
        RBus_UInt32  reg_p0_g_timer_5:1;
        RBus_UInt32  reg_p0_g_timer_6:5;
        RBus_UInt32  p0_g_fld_rstb:1;
        RBus_UInt32  p0_g_acdr_fine_tune_start:1;
    };
}hdmirx_2p1_phy_p0_fld_g_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_start_en_manual:1;
        RBus_UInt32  reg_p0_g_pfd_en_manual:1;
        RBus_UInt32  reg_p0_g_pfd_time:5;
        RBus_UInt32  reg_p0_g_pfd_bypass:1;
        RBus_UInt32  reg_p0_g_rxidle_bypass:1;
        RBus_UInt32  reg_p0_g_slope_manual:1;
        RBus_UInt32  reg_p0_g_slope_band:5;
        RBus_UInt32  reg_p0_g_old_mode:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p0_g_coarse_init:6;
        RBus_UInt32  reg_p0_g_vc_chg_time:3;
        RBus_UInt32  reg_p0_g_timer_4:5;
    };
}hdmirx_2p1_phy_p0_fld_g_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_g_fld_st_reg:5;
        RBus_UInt32  p0_g_adp_en_fsm_reg:1;
        RBus_UInt32  p0_g_cp_en_fsm_reg:1;
        RBus_UInt32  p0_g_coarse_fsm_reg:7;
        RBus_UInt32  p0_g_pfd_en_fsm_reg:1;
        RBus_UInt32  p0_g_fine_fsm_reg:7;
        RBus_UInt32  reg_p0_g_cp_time_2:5;
        RBus_UInt32  p0_g_coarse_too_fast_reg:1;
        RBus_UInt32  p0_g_coarse_too_slow_reg:1;
        RBus_UInt32  p0_g_coarse_calib_ok:1;
        RBus_UInt32  p0_g_calib_ok:1;
        RBus_UInt32  p0_g_start_en:1;
    };
}hdmirx_2p1_phy_p0_fld_g_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_auto_mode:1;
        RBus_UInt32  reg_p0_b_adp_en_manual:1;
        RBus_UInt32  reg_p0_b_cp_en_manual:1;
        RBus_UInt32  reg_p0_b_adap_eq_off:1;
        RBus_UInt32  reg_p0_b_adp_time:5;
        RBus_UInt32  reg_p0_b_calib_time:3;
        RBus_UInt32  reg_p0_b_calib_manual:1;
        RBus_UInt32  reg_p0_b_calib_late:1;
        RBus_UInt32  reg_p0_b_vco_coarse:7;
        RBus_UInt32  reg_p0_b_divide_num:8;
        RBus_UInt32  reg_p0_b_bypass_k_band_mode:1;
        RBus_UInt32  reg_p0_b_stable_time_mode:1;
        RBus_UInt32  reg_p0_b_cp2adp_en:1;
    };
}hdmirx_2p1_phy_p0_fld_b_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_cp2adp_time:4;
        RBus_UInt32  reg_p0_b_lock_up_limit:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p0_b_lock_dn_limit:12;
    };
}hdmirx_2p1_phy_p0_fld_b_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_cdr_cp:20;
        RBus_UInt32  reg_p0_b_cdr_r:6;
        RBus_UInt32  reg_p0_b_cdr_c:2;
        RBus_UInt32  reg_p0_b_vc_sel:2;
        RBus_UInt32  reg_p0_b_calib_reset_sel:1;
        RBus_UInt32  reg_p0_b_unstable_flg:1;
    };
}hdmirx_2p1_phy_p0_fld_b_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_coarse_lock_up_limit:12;
        RBus_UInt32  reg_p0_b_coarse_lock_dn_limit:12;
        RBus_UInt32  reg_p0_b_cp_time:5;
        RBus_UInt32  reg_p0_b_init_time:3;
    };
}hdmirx_2p1_phy_p0_fld_b_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p0_b_coarse_calib_manual:1;
        RBus_UInt32  reg_p0_b_vco_coarse_manual:4;
        RBus_UInt32  reg_p0_b_vco_fine_manual:4;
        RBus_UInt32  reg_p0_b_xtal_24m_en:1;
        RBus_UInt32  reg_p0_b_vco_fine_time_sel:2;
        RBus_UInt32  reg_p0_b_bypass_coarse_k_mode:1;
        RBus_UInt32  reg_p0_b_vco_coarse_init:4;
        RBus_UInt32  reg_p0_b_vco_fine_init:4;
        RBus_UInt32  reg_p0_b_timer_5:1;
        RBus_UInt32  reg_p0_b_timer_6:5;
        RBus_UInt32  p0_b_fld_rstb:1;
        RBus_UInt32  p0_b_acdr_fine_tune_start:1;
    };
}hdmirx_2p1_phy_p0_fld_b_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_start_en_manual:1;
        RBus_UInt32  reg_p0_b_pfd_en_manual:1;
        RBus_UInt32  reg_p0_b_pfd_time:5;
        RBus_UInt32  reg_p0_b_pfd_bypass:1;
        RBus_UInt32  reg_p0_b_rxidle_bypass:1;
        RBus_UInt32  reg_p0_b_slope_manual:1;
        RBus_UInt32  reg_p0_b_slope_band:5;
        RBus_UInt32  reg_p0_b_old_mode:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p0_b_coarse_init:6;
        RBus_UInt32  reg_p0_b_vc_chg_time:3;
        RBus_UInt32  reg_p0_b_timer_4:5;
    };
}hdmirx_2p1_phy_p0_fld_b_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_b_fld_st_reg:5;
        RBus_UInt32  p0_b_adp_en_fsm_reg:1;
        RBus_UInt32  p0_b_cp_en_fsm_reg:1;
        RBus_UInt32  p0_b_coarse_fsm_reg:7;
        RBus_UInt32  p0_b_pfd_en_fsm_reg:1;
        RBus_UInt32  p0_b_fine_fsm_reg:7;
        RBus_UInt32  reg_p0_b_cp_time_2:5;
        RBus_UInt32  p0_b_coarse_too_fast_reg:1;
        RBus_UInt32  p0_b_coarse_too_slow_reg:1;
        RBus_UInt32  p0_b_coarse_calib_ok:1;
        RBus_UInt32  p0_b_calib_ok:1;
        RBus_UInt32  p0_b_start_en:1;
    };
}hdmirx_2p1_phy_p0_fld_b_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_auto_mode:1;
        RBus_UInt32  reg_p0_ck_adp_en_manual:1;
        RBus_UInt32  reg_p0_ck_cp_en_manual:1;
        RBus_UInt32  reg_p0_ck_adap_eq_off:1;
        RBus_UInt32  reg_p0_ck_adp_time:5;
        RBus_UInt32  reg_p0_ck_calib_time:3;
        RBus_UInt32  reg_p0_ck_calib_manual:1;
        RBus_UInt32  reg_p0_ck_calib_late:1;
        RBus_UInt32  reg_p0_ck_vco_coarse:7;
        RBus_UInt32  reg_p0_ck_divide_num:8;
        RBus_UInt32  reg_p0_ck_bypass_k_band_mode:1;
        RBus_UInt32  reg_p0_ck_stable_time_mode:1;
        RBus_UInt32  reg_p0_ck_cp2adp_en:1;
    };
}hdmirx_2p1_phy_p0_fld_ck_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_cp2adp_time:4;
        RBus_UInt32  reg_p0_ck_lock_up_limit:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p0_ck_lock_dn_limit:12;
    };
}hdmirx_2p1_phy_p0_fld_ck_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_cdr_cp:20;
        RBus_UInt32  reg_p0_ck_cdr_r:6;
        RBus_UInt32  reg_p0_ck_cdr_c:2;
        RBus_UInt32  reg_p0_ck_vc_sel:2;
        RBus_UInt32  reg_p0_ck_calib_reset_sel:1;
        RBus_UInt32  reg_p0_ck_unstable_flg:1;
    };
}hdmirx_2p1_phy_p0_fld_ck_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_coarse_lock_up_limit:12;
        RBus_UInt32  reg_p0_ck_coarse_lock_dn_limit:12;
        RBus_UInt32  reg_p0_ck_cp_time:5;
        RBus_UInt32  reg_p0_ck_init_time:3;
    };
}hdmirx_2p1_phy_p0_fld_ck_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p0_ck_coarse_calib_manual:1;
        RBus_UInt32  reg_p0_ck_vco_coarse_manual:4;
        RBus_UInt32  reg_p0_ck_vco_fine_manual:4;
        RBus_UInt32  reg_p0_ck_xtal_24m_en:1;
        RBus_UInt32  reg_p0_ck_vco_fine_time_sel:2;
        RBus_UInt32  reg_p0_ck_bypass_coarse_k_mode:1;
        RBus_UInt32  reg_p0_ck_vco_coarse_init:4;
        RBus_UInt32  reg_p0_ck_vco_fine_init:4;
        RBus_UInt32  reg_p0_ck_timer_5:1;
        RBus_UInt32  reg_p0_ck_timer_6:5;
        RBus_UInt32  p0_ck_fld_rstb:1;
        RBus_UInt32  p0_ck_acdr_fine_tune_start:1;
    };
}hdmirx_2p1_phy_p0_fld_ck_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_start_en_manual:1;
        RBus_UInt32  reg_p0_ck_pfd_en_manual:1;
        RBus_UInt32  reg_p0_ck_pfd_time:5;
        RBus_UInt32  reg_p0_ck_pfd_bypass:1;
        RBus_UInt32  reg_p0_ck_rxidle_bypass:1;
        RBus_UInt32  reg_p0_ck_slope_manual:1;
        RBus_UInt32  reg_p0_ck_slope_band:5;
        RBus_UInt32  reg_p0_ck_old_mode:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p0_ck_coarse_init:6;
        RBus_UInt32  reg_p0_ck_vc_chg_time:3;
        RBus_UInt32  reg_p0_ck_timer_4:5;
    };
}hdmirx_2p1_phy_p0_fld_ck_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_ck_fld_st_reg:5;
        RBus_UInt32  p0_ck_adp_en_fsm_reg:1;
        RBus_UInt32  p0_ck_cp_en_fsm_reg:1;
        RBus_UInt32  p0_ck_coarse_fsm_reg:7;
        RBus_UInt32  p0_ck_pfd_en_fsm_reg:1;
        RBus_UInt32  p0_ck_fine_fsm_reg:7;
        RBus_UInt32  reg_p0_ck_cp_time_2:5;
        RBus_UInt32  p0_ck_coarse_too_fast_reg:1;
        RBus_UInt32  p0_ck_coarse_too_slow_reg:1;
        RBus_UInt32  p0_ck_coarse_calib_ok:1;
        RBus_UInt32  p0_ck_calib_ok:1;
        RBus_UInt32  p0_ck_start_en:1;
    };
}hdmirx_2p1_phy_p0_fld_ck_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_acdr_r_vco_encap:2;
        RBus_UInt32  p0_acdr_r_acdr_en_afn:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  p0_acdr_g_vco_encap:2;
        RBus_UInt32  p0_acdr_g_acdr_en_afn:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  p0_acdr_b_vco_encap:2;
        RBus_UInt32  p0_acdr_b_acdr_en_afn:1;
        RBus_UInt32  res3:5;
        RBus_UInt32  p0_acdr_ck_vco_encap:2;
        RBus_UInt32  p0_acdr_ck_acdr_en_afn:1;
        RBus_UInt32  res4:5;
    };
}hdmirx_2p1_phy_p0_misc_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_ck_md_rstb:1;
        RBus_UInt32  reg_p0_ck_md_threshold:6;
        RBus_UInt32  reg_p0_ck_md_debounce:7;
        RBus_UInt32  reg_p0_ck_md_sel:2;
        RBus_UInt32  reg_p0_ck_md_auto:1;
        RBus_UInt32  reg_p0_ck_md_adj:4;
        RBus_UInt32  reg_p0_ck_error_limit:5;
        RBus_UInt32  reg_p0_ck_md_reserved:4;
        RBus_UInt32  res1:2;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_ck_md_count:13;
        RBus_UInt32  p0_ck_rate:4;
        RBus_UInt32  p0_unstable_count:5;
        RBus_UInt32  p0_ck_md_ok:1;
        RBus_UInt32  p0_clock_unstable_flag:1;
        RBus_UInt32  reg_p0_dig_debug_sel:4;
        RBus_UInt32  res1:4;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_dig_reserved_0:8;
        RBus_UInt32  reg_p0_dig_reserved_1:8;
        RBus_UInt32  reg_p0_dig_reserved_2:8;
        RBus_UInt32  reg_p0_dig_reserved_3:8;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_r:32;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_g:32;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_b:32;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_ck:32;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  reg_p0_enable_one_zero_r:1;
        RBus_UInt32  reg_p0_prbs_invs_r:1;
        RBus_UInt32  reg_p0_pattern_sel_r:1;
        RBus_UInt32  p0_pkt_count_r:8;
        RBus_UInt32  p0_err_count_r:8;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  reg_p0_enable_one_zero_g:1;
        RBus_UInt32  reg_p0_prbs_invs_g:1;
        RBus_UInt32  reg_p0_pattern_sel_g:1;
        RBus_UInt32  p0_pkt_count_g:8;
        RBus_UInt32  p0_err_count_g:8;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  reg_p0_enable_one_zero_b:1;
        RBus_UInt32  reg_p0_prbs_invs_b:1;
        RBus_UInt32  reg_p0_pattern_sel_b:1;
        RBus_UInt32  p0_pkt_count_b:8;
        RBus_UInt32  p0_err_count_b:8;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  reg_p0_enable_one_zero_ck:1;
        RBus_UInt32  reg_p0_prbs_invs_ck:1;
        RBus_UInt32  reg_p0_pattern_sel_ck:1;
        RBus_UInt32  p0_pkt_count_ck:8;
        RBus_UInt32  p0_err_count_ck:8;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_dphy_debug_sel_p0:1;
        RBus_UInt32  reg_p0_infifo2_cnt:3;
        RBus_UInt32  reg_p0_4b18b_mode:1;
        RBus_UInt32  reg_p0_4b18b_data_order:1;
        RBus_UInt32  reg_p0_fifo_ckinv_r:1;
        RBus_UInt32  reg_p0_fifo_ckinv_g:1;
        RBus_UInt32  reg_p0_fifo_ckinv_b:1;
        RBus_UInt32  reg_p0_fifo_ckinv_ck:1;
        RBus_UInt32  p0_r_fifo_rst_n:1;
        RBus_UInt32  p0_g_fifo_rst_n:1;
        RBus_UInt32  p0_b_fifo_rst_n:1;
        RBus_UInt32  p0_ck_fifo_rst_n:1;
        RBus_UInt32  reg_p0_hdmi21:1;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_acc_read_out_r:8;
        RBus_UInt32  reg_p0_001_enable_r:1;
        RBus_UInt32  reg_p0_101_enable_r:1;
        RBus_UInt32  reg_p0_en_bec_acc_r:1;
        RBus_UInt32  reg_p0_en_bec_read_r:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p0_enable_one_zero_r_hdmi21:1;
        RBus_UInt32  reg_p0_prbs_invs_r_hdmi21:1;
        RBus_UInt32  reg_p0_pattern_sel_r_hdmi21:1;
        RBus_UInt32  p0_pkt_count_r_hdmi21:8;
        RBus_UInt32  p0_err_count_r_hdmi21:8;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_acc_read_out_g:8;
        RBus_UInt32  reg_p0_001_enable_g:1;
        RBus_UInt32  reg_p0_101_enable_g:1;
        RBus_UInt32  reg_p0_en_bec_acc_g:1;
        RBus_UInt32  reg_p0_en_bec_read_g:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p0_enable_one_zero_g_hdmi21:1;
        RBus_UInt32  reg_p0_prbs_invs_g_hdmi21:1;
        RBus_UInt32  reg_p0_pattern_sel_g_hdmi21:1;
        RBus_UInt32  p0_pkt_count_g_hdmi21:8;
        RBus_UInt32  p0_err_count_g_hdmi21:8;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_acc_read_out_b:8;
        RBus_UInt32  reg_p0_001_enable_b:1;
        RBus_UInt32  reg_p0_101_enable_b:1;
        RBus_UInt32  reg_p0_en_bec_acc_b:1;
        RBus_UInt32  reg_p0_en_bec_read_b:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p0_enable_one_zero_b_hdmi21:1;
        RBus_UInt32  reg_p0_prbs_invs_b_hdmi21:1;
        RBus_UInt32  reg_p0_pattern_sel_b_hdmi21:1;
        RBus_UInt32  p0_pkt_count_b_hdmi21:8;
        RBus_UInt32  p0_err_count_b_hdmi21:8;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_acc_read_out_ck:8;
        RBus_UInt32  reg_p0_001_enable_ck:1;
        RBus_UInt32  reg_p0_101_enable_ck:1;
        RBus_UInt32  reg_p0_en_bec_acc_ck:1;
        RBus_UInt32  reg_p0_en_bec_read_ck:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p0_enable_one_zero_ck_hdmi21:1;
        RBus_UInt32  reg_p0_prbs_invs_ck_hdmi21:1;
        RBus_UInt32  reg_p0_pattern_sel_ck_hdmi21:1;
        RBus_UInt32  p0_pkt_count_ck_hdmi21:8;
        RBus_UInt32  p0_err_count_ck_hdmi21:8;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_r_dig_rst_n:1;
        RBus_UInt32  p1_g_dig_rst_n:1;
        RBus_UInt32  p1_b_dig_rst_n:1;
        RBus_UInt32  p1_r_cdr_rst_n:1;
        RBus_UInt32  p1_g_cdr_rst_n:1;
        RBus_UInt32  p1_b_cdr_rst_n:1;
        RBus_UInt32  reg_p1_cdr_ckinv_r:1;
        RBus_UInt32  reg_p1_cdr_ckinv_g:1;
        RBus_UInt32  reg_p1_cdr_ckinv_b:1;
        RBus_UInt32  reg_p1_shift_inv_r:1;
        RBus_UInt32  reg_p1_shift_inv_g:1;
        RBus_UInt32  reg_p1_shift_inv_b:1;
        RBus_UInt32  reg_p1_rate_sel:3;
        RBus_UInt32  reg_p1_kd:1;
        RBus_UInt32  reg_p1_kp:8;
        RBus_UInt32  reg_p1_ki:3;
        RBus_UInt32  reg_p1_bypass_sdm_int:1;
        RBus_UInt32  reg_p1_data_order:1;
        RBus_UInt32  reg_p1_infifo_cnt:3;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_int_init:14;
        RBus_UInt32  reg_p1_acc2_period:10;
        RBus_UInt32  reg_p1_squ_tri:1;
        RBus_UInt32  reg_p1_acc2_manual:1;
        RBus_UInt32  reg_p1_testout_sel:2;
        RBus_UInt32  reg_p1_ercnt_en:1;
        RBus_UInt32  reg_p1_edge_out:1;
        RBus_UInt32  reg_p1_pi_m_mode_r:1;
        RBus_UInt32  reg_p1_dyn_kp_en:1;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_en_m_value:4;
        RBus_UInt32  reg_p1_st_mode:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p1_timer_lpf:5;
        RBus_UInt32  reg_p1_timer_eq:5;
        RBus_UInt32  reg_p1_timer_ber:5;
        RBus_UInt32  res2:8;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_ck_dig_rst_n:1;
        RBus_UInt32  p1_ck_cdr_rst_n:1;
        RBus_UInt32  reg_p1_cdr_ckinv_ck:1;
        RBus_UInt32  reg_p1_shift_inv_ck:1;
        RBus_UInt32  reg_p1_pi_m_mode_g:1;
        RBus_UInt32  reg_p1_pi_m_mode_b:1;
        RBus_UInt32  reg_p1_pi_m_mode_ck:1;
        RBus_UInt32  res1:25;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  p1_st_ro_r:5;
        RBus_UInt32  p1_en_ro_r:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  p1_st_ro_g:5;
        RBus_UInt32  p1_en_ro_g:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  p1_st_ro_b:5;
        RBus_UInt32  p1_en_ro_b:4;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  p1_er_count_r:10;
        RBus_UInt32  p1_er_count_g:10;
        RBus_UInt32  p1_er_count_b:10;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  p1_st_ro_ck:5;
        RBus_UInt32  p1_en_ro_ck:4;
        RBus_UInt32  p1_er_count_ck:10;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_bypass_clk_rdy:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy:1;
        RBus_UInt32  reg_p1_bypass_data_rdy:1;
        RBus_UInt32  reg_p1_bypass_pi:1;
        RBus_UInt32  reg_p1_data_rdy_time:4;
        RBus_UInt32  reg_p1_en_clkout_manual:1;
        RBus_UInt32  reg_p1_en_eqen_manual:1;
        RBus_UInt32  reg_p1_en_data_manual:1;
        RBus_UInt32  reg_p1_eqen_rdy_time:4;
        RBus_UInt32  reg_p1_order:1;
        RBus_UInt32  reg_p1_pll_wd_base_time:3;
        RBus_UInt32  reg_p1_pll_wd_en:1;
        RBus_UInt32  reg_p1_pll_wd_rst_wid:2;
        RBus_UInt32  reg_p1_pll_wd_time_rdy:2;
        RBus_UInt32  reg_p1_acdr_l0_en:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy_l0:1;
        RBus_UInt32  reg_p1_bypass_data_rdy_l0:1;
        RBus_UInt32  reg_p1_en_eqen_manual_l0:1;
        RBus_UInt32  reg_p1_en_data_manual_l0:1;
        RBus_UInt32  p1_pll_wd_ckrdy_ro:1;
        RBus_UInt32  p1_pll_wd_rst_wc:1;
        RBus_UInt32  p1_wdog_rst_n:1;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_wd_sdm_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p1_f_code:12;
        RBus_UInt32  res2:7;
        RBus_UInt32  reg_p1_n_code:9;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p1_acdr_l3_en:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy_l3:1;
        RBus_UInt32  reg_p1_bypass_data_rdy_l3:1;
        RBus_UInt32  reg_p1_en_eqen_manual_l3:1;
        RBus_UInt32  reg_p1_en_data_manual_l3:1;
        RBus_UInt32  reg_p1_acdr_l2_en:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy_l2:1;
        RBus_UInt32  reg_p1_bypass_data_rdy_l2:1;
        RBus_UInt32  reg_p1_en_eqen_manual_l2:1;
        RBus_UInt32  reg_p1_en_data_manual_l2:1;
        RBus_UInt32  reg_p1_acdr_l1_en:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy_l1:1;
        RBus_UInt32  reg_p1_bypass_data_rdy_l1:1;
        RBus_UInt32  reg_p1_en_eqen_manual_l1:1;
        RBus_UInt32  reg_p1_en_data_manual_l1:1;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_auto_mode:1;
        RBus_UInt32  reg_p1_r_adp_en_manual:1;
        RBus_UInt32  reg_p1_r_cp_en_manual:1;
        RBus_UInt32  reg_p1_r_adap_eq_off:1;
        RBus_UInt32  reg_p1_r_adp_time:5;
        RBus_UInt32  reg_p1_r_calib_time:3;
        RBus_UInt32  reg_p1_r_calib_manual:1;
        RBus_UInt32  reg_p1_r_calib_late:1;
        RBus_UInt32  reg_p1_r_vco_coarse:7;
        RBus_UInt32  reg_p1_r_divide_num:8;
        RBus_UInt32  reg_p1_r_bypass_k_band_mode:1;
        RBus_UInt32  reg_p1_r_stable_time_mode:1;
        RBus_UInt32  reg_p1_r_cp2adp_en:1;
    };
}hdmirx_2p1_phy_p1_fld_r_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_cp2adp_time:4;
        RBus_UInt32  reg_p1_r_lock_up_limit:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p1_r_lock_dn_limit:12;
    };
}hdmirx_2p1_phy_p1_fld_r_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_cdr_cp:20;
        RBus_UInt32  reg_p1_r_cdr_r:6;
        RBus_UInt32  reg_p1_r_cdr_c:2;
        RBus_UInt32  reg_p1_r_vc_sel:2;
        RBus_UInt32  reg_p1_r_calib_reset_sel:1;
        RBus_UInt32  reg_p1_r_unstable_flg:1;
    };
}hdmirx_2p1_phy_p1_fld_r_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_coarse_lock_up_limit:12;
        RBus_UInt32  reg_p1_r_coarse_lock_dn_limit:12;
        RBus_UInt32  reg_p1_r_cp_time:5;
        RBus_UInt32  reg_p1_r_init_time:3;
    };
}hdmirx_2p1_phy_p1_fld_r_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p1_r_coarse_calib_manual:1;
        RBus_UInt32  reg_p1_r_vco_coarse_manual:4;
        RBus_UInt32  reg_p1_r_vco_fine_manual:4;
        RBus_UInt32  reg_p1_r_xtal_24m_en:1;
        RBus_UInt32  reg_p1_r_vco_fine_time_sel:2;
        RBus_UInt32  reg_p1_r_bypass_coarse_k_mode:1;
        RBus_UInt32  reg_p1_r_vco_coarse_init:4;
        RBus_UInt32  reg_p1_r_vco_fine_init:4;
        RBus_UInt32  reg_p1_r_timer_5:1;
        RBus_UInt32  reg_p1_r_timer_6:5;
        RBus_UInt32  p1_r_fld_rstb:1;
        RBus_UInt32  p1_r_acdr_fine_tune_start:1;
    };
}hdmirx_2p1_phy_p1_fld_r_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_start_en_manual:1;
        RBus_UInt32  reg_p1_r_pfd_en_manual:1;
        RBus_UInt32  reg_p1_r_pfd_time:5;
        RBus_UInt32  reg_p1_r_pfd_bypass:1;
        RBus_UInt32  reg_p1_r_rxidle_bypass:1;
        RBus_UInt32  reg_p1_r_slope_manual:1;
        RBus_UInt32  reg_p1_r_slope_band:5;
        RBus_UInt32  reg_p1_r_old_mode:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p1_r_coarse_init:6;
        RBus_UInt32  reg_p1_r_vc_chg_time:3;
        RBus_UInt32  reg_p1_r_timer_4:5;
    };
}hdmirx_2p1_phy_p1_fld_r_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_r_fld_st_reg:5;
        RBus_UInt32  p1_r_adp_en_fsm_reg:1;
        RBus_UInt32  p1_r_cp_en_fsm_reg:1;
        RBus_UInt32  p1_r_coarse_fsm_reg:7;
        RBus_UInt32  p1_r_pfd_en_fsm_reg:1;
        RBus_UInt32  p1_r_fine_fsm_reg:7;
        RBus_UInt32  reg_p1_r_cp_time_2:5;
        RBus_UInt32  p1_r_coarse_too_fast_reg:1;
        RBus_UInt32  p1_r_coarse_too_slow_reg:1;
        RBus_UInt32  p1_r_coarse_calib_ok:1;
        RBus_UInt32  p1_r_calib_ok:1;
        RBus_UInt32  p1_r_start_en:1;
    };
}hdmirx_2p1_phy_p1_fld_r_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_auto_mode:1;
        RBus_UInt32  reg_p1_g_adp_en_manual:1;
        RBus_UInt32  reg_p1_g_cp_en_manual:1;
        RBus_UInt32  reg_p1_g_adap_eq_off:1;
        RBus_UInt32  reg_p1_g_adp_time:5;
        RBus_UInt32  reg_p1_g_calib_time:3;
        RBus_UInt32  reg_p1_g_calib_manual:1;
        RBus_UInt32  reg_p1_g_calib_late:1;
        RBus_UInt32  reg_p1_g_vco_coarse:7;
        RBus_UInt32  reg_p1_g_divide_num:8;
        RBus_UInt32  reg_p1_g_bypass_k_band_mode:1;
        RBus_UInt32  reg_p1_g_stable_time_mode:1;
        RBus_UInt32  reg_p1_g_cp2adp_en:1;
    };
}hdmirx_2p1_phy_p1_fld_g_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_cp2adp_time:4;
        RBus_UInt32  reg_p1_g_lock_up_limit:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p1_g_lock_dn_limit:12;
    };
}hdmirx_2p1_phy_p1_fld_g_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_cdr_cp:20;
        RBus_UInt32  reg_p1_g_cdr_r:6;
        RBus_UInt32  reg_p1_g_cdr_c:2;
        RBus_UInt32  reg_p1_g_vc_sel:2;
        RBus_UInt32  reg_p1_g_calib_reset_sel:1;
        RBus_UInt32  reg_p1_g_unstable_flg:1;
    };
}hdmirx_2p1_phy_p1_fld_g_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_coarse_lock_up_limit:12;
        RBus_UInt32  reg_p1_g_coarse_lock_dn_limit:12;
        RBus_UInt32  reg_p1_g_cp_time:5;
        RBus_UInt32  reg_p1_g_init_time:3;
    };
}hdmirx_2p1_phy_p1_fld_g_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p1_g_coarse_calib_manual:1;
        RBus_UInt32  reg_p1_g_vco_coarse_manual:4;
        RBus_UInt32  reg_p1_g_vco_fine_manual:4;
        RBus_UInt32  reg_p1_g_xtal_24m_en:1;
        RBus_UInt32  reg_p1_g_vco_fine_time_sel:2;
        RBus_UInt32  reg_p1_g_bypass_coarse_k_mode:1;
        RBus_UInt32  reg_p1_g_vco_coarse_init:4;
        RBus_UInt32  reg_p1_g_vco_fine_init:4;
        RBus_UInt32  reg_p1_g_timer_5:1;
        RBus_UInt32  reg_p1_g_timer_6:5;
        RBus_UInt32  p1_g_fld_rstb:1;
        RBus_UInt32  p1_g_acdr_fine_tune_start:1;
    };
}hdmirx_2p1_phy_p1_fld_g_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_start_en_manual:1;
        RBus_UInt32  reg_p1_g_pfd_en_manual:1;
        RBus_UInt32  reg_p1_g_pfd_time:5;
        RBus_UInt32  reg_p1_g_pfd_bypass:1;
        RBus_UInt32  reg_p1_g_rxidle_bypass:1;
        RBus_UInt32  reg_p1_g_slope_manual:1;
        RBus_UInt32  reg_p1_g_slope_band:5;
        RBus_UInt32  reg_p1_g_old_mode:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p1_g_coarse_init:6;
        RBus_UInt32  reg_p1_g_vc_chg_time:3;
        RBus_UInt32  reg_p1_g_timer_4:5;
    };
}hdmirx_2p1_phy_p1_fld_g_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_g_fld_st_reg:5;
        RBus_UInt32  p1_g_adp_en_fsm_reg:1;
        RBus_UInt32  p1_g_cp_en_fsm_reg:1;
        RBus_UInt32  p1_g_coarse_fsm_reg:7;
        RBus_UInt32  p1_g_pfd_en_fsm_reg:1;
        RBus_UInt32  p1_g_fine_fsm_reg:7;
        RBus_UInt32  reg_p1_g_cp_time_2:5;
        RBus_UInt32  p1_g_coarse_too_fast_reg:1;
        RBus_UInt32  p1_g_coarse_too_slow_reg:1;
        RBus_UInt32  p1_g_coarse_calib_ok:1;
        RBus_UInt32  p1_g_calib_ok:1;
        RBus_UInt32  p1_g_start_en:1;
    };
}hdmirx_2p1_phy_p1_fld_g_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_auto_mode:1;
        RBus_UInt32  reg_p1_b_adp_en_manual:1;
        RBus_UInt32  reg_p1_b_cp_en_manual:1;
        RBus_UInt32  reg_p1_b_adap_eq_off:1;
        RBus_UInt32  reg_p1_b_adp_time:5;
        RBus_UInt32  reg_p1_b_calib_time:3;
        RBus_UInt32  reg_p1_b_calib_manual:1;
        RBus_UInt32  reg_p1_b_calib_late:1;
        RBus_UInt32  reg_p1_b_vco_coarse:7;
        RBus_UInt32  reg_p1_b_divide_num:8;
        RBus_UInt32  reg_p1_b_bypass_k_band_mode:1;
        RBus_UInt32  reg_p1_b_stable_time_mode:1;
        RBus_UInt32  reg_p1_b_cp2adp_en:1;
    };
}hdmirx_2p1_phy_p1_fld_b_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_cp2adp_time:4;
        RBus_UInt32  reg_p1_b_lock_up_limit:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p1_b_lock_dn_limit:12;
    };
}hdmirx_2p1_phy_p1_fld_b_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_cdr_cp:20;
        RBus_UInt32  reg_p1_b_cdr_r:6;
        RBus_UInt32  reg_p1_b_cdr_c:2;
        RBus_UInt32  reg_p1_b_vc_sel:2;
        RBus_UInt32  reg_p1_b_calib_reset_sel:1;
        RBus_UInt32  reg_p1_b_unstable_flg:1;
    };
}hdmirx_2p1_phy_p1_fld_b_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_coarse_lock_up_limit:12;
        RBus_UInt32  reg_p1_b_coarse_lock_dn_limit:12;
        RBus_UInt32  reg_p1_b_cp_time:5;
        RBus_UInt32  reg_p1_b_init_time:3;
    };
}hdmirx_2p1_phy_p1_fld_b_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p1_b_coarse_calib_manual:1;
        RBus_UInt32  reg_p1_b_vco_coarse_manual:4;
        RBus_UInt32  reg_p1_b_vco_fine_manual:4;
        RBus_UInt32  reg_p1_b_xtal_24m_en:1;
        RBus_UInt32  reg_p1_b_vco_fine_time_sel:2;
        RBus_UInt32  reg_p1_b_bypass_coarse_k_mode:1;
        RBus_UInt32  reg_p1_b_vco_coarse_init:4;
        RBus_UInt32  reg_p1_b_vco_fine_init:4;
        RBus_UInt32  reg_p1_b_timer_5:1;
        RBus_UInt32  reg_p1_b_timer_6:5;
        RBus_UInt32  p1_b_fld_rstb:1;
        RBus_UInt32  p1_b_acdr_fine_tune_start:1;
    };
}hdmirx_2p1_phy_p1_fld_b_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_start_en_manual:1;
        RBus_UInt32  reg_p1_b_pfd_en_manual:1;
        RBus_UInt32  reg_p1_b_pfd_time:5;
        RBus_UInt32  reg_p1_b_pfd_bypass:1;
        RBus_UInt32  reg_p1_b_rxidle_bypass:1;
        RBus_UInt32  reg_p1_b_slope_manual:1;
        RBus_UInt32  reg_p1_b_slope_band:5;
        RBus_UInt32  reg_p1_b_old_mode:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p1_b_coarse_init:6;
        RBus_UInt32  reg_p1_b_vc_chg_time:3;
        RBus_UInt32  reg_p1_b_timer_4:5;
    };
}hdmirx_2p1_phy_p1_fld_b_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_b_fld_st_reg:5;
        RBus_UInt32  p1_b_adp_en_fsm_reg:1;
        RBus_UInt32  p1_b_cp_en_fsm_reg:1;
        RBus_UInt32  p1_b_coarse_fsm_reg:7;
        RBus_UInt32  p1_b_pfd_en_fsm_reg:1;
        RBus_UInt32  p1_b_fine_fsm_reg:7;
        RBus_UInt32  reg_p1_b_cp_time_2:5;
        RBus_UInt32  p1_b_coarse_too_fast_reg:1;
        RBus_UInt32  p1_b_coarse_too_slow_reg:1;
        RBus_UInt32  p1_b_coarse_calib_ok:1;
        RBus_UInt32  p1_b_calib_ok:1;
        RBus_UInt32  p1_b_start_en:1;
    };
}hdmirx_2p1_phy_p1_fld_b_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_auto_mode:1;
        RBus_UInt32  reg_p1_ck_adp_en_manual:1;
        RBus_UInt32  reg_p1_ck_cp_en_manual:1;
        RBus_UInt32  reg_p1_ck_adap_eq_off:1;
        RBus_UInt32  reg_p1_ck_adp_time:5;
        RBus_UInt32  reg_p1_ck_calib_time:3;
        RBus_UInt32  reg_p1_ck_calib_manual:1;
        RBus_UInt32  reg_p1_ck_calib_late:1;
        RBus_UInt32  reg_p1_ck_vco_coarse:7;
        RBus_UInt32  reg_p1_ck_divide_num:8;
        RBus_UInt32  reg_p1_ck_bypass_k_band_mode:1;
        RBus_UInt32  reg_p1_ck_stable_time_mode:1;
        RBus_UInt32  reg_p1_ck_cp2adp_en:1;
    };
}hdmirx_2p1_phy_p1_fld_ck_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_cp2adp_time:4;
        RBus_UInt32  reg_p1_ck_lock_up_limit:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p1_ck_lock_dn_limit:12;
    };
}hdmirx_2p1_phy_p1_fld_ck_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_cdr_cp:20;
        RBus_UInt32  reg_p1_ck_cdr_r:6;
        RBus_UInt32  reg_p1_ck_cdr_c:2;
        RBus_UInt32  reg_p1_ck_vc_sel:2;
        RBus_UInt32  reg_p1_ck_calib_reset_sel:1;
        RBus_UInt32  reg_p1_ck_unstable_flg:1;
    };
}hdmirx_2p1_phy_p1_fld_ck_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_coarse_lock_up_limit:12;
        RBus_UInt32  reg_p1_ck_coarse_lock_dn_limit:12;
        RBus_UInt32  reg_p1_ck_cp_time:5;
        RBus_UInt32  reg_p1_ck_init_time:3;
    };
}hdmirx_2p1_phy_p1_fld_ck_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p1_ck_coarse_calib_manual:1;
        RBus_UInt32  reg_p1_ck_vco_coarse_manual:4;
        RBus_UInt32  reg_p1_ck_vco_fine_manual:4;
        RBus_UInt32  reg_p1_ck_xtal_24m_en:1;
        RBus_UInt32  reg_p1_ck_vco_fine_time_sel:2;
        RBus_UInt32  reg_p1_ck_bypass_coarse_k_mode:1;
        RBus_UInt32  reg_p1_ck_vco_coarse_init:4;
        RBus_UInt32  reg_p1_ck_vco_fine_init:4;
        RBus_UInt32  reg_p1_ck_timer_5:1;
        RBus_UInt32  reg_p1_ck_timer_6:5;
        RBus_UInt32  p1_ck_fld_rstb:1;
        RBus_UInt32  p1_ck_acdr_fine_tune_start:1;
    };
}hdmirx_2p1_phy_p1_fld_ck_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_start_en_manual:1;
        RBus_UInt32  reg_p1_ck_pfd_en_manual:1;
        RBus_UInt32  reg_p1_ck_pfd_time:5;
        RBus_UInt32  reg_p1_ck_pfd_bypass:1;
        RBus_UInt32  reg_p1_ck_rxidle_bypass:1;
        RBus_UInt32  reg_p1_ck_slope_manual:1;
        RBus_UInt32  reg_p1_ck_slope_band:5;
        RBus_UInt32  reg_p1_ck_old_mode:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p1_ck_coarse_init:6;
        RBus_UInt32  reg_p1_ck_vc_chg_time:3;
        RBus_UInt32  reg_p1_ck_timer_4:5;
    };
}hdmirx_2p1_phy_p1_fld_ck_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_ck_fld_st_reg:5;
        RBus_UInt32  p1_ck_adp_en_fsm_reg:1;
        RBus_UInt32  p1_ck_cp_en_fsm_reg:1;
        RBus_UInt32  p1_ck_coarse_fsm_reg:7;
        RBus_UInt32  p1_ck_pfd_en_fsm_reg:1;
        RBus_UInt32  p1_ck_fine_fsm_reg:7;
        RBus_UInt32  reg_p1_ck_cp_time_2:5;
        RBus_UInt32  p1_ck_coarse_too_fast_reg:1;
        RBus_UInt32  p1_ck_coarse_too_slow_reg:1;
        RBus_UInt32  p1_ck_coarse_calib_ok:1;
        RBus_UInt32  p1_ck_calib_ok:1;
        RBus_UInt32  p1_ck_start_en:1;
    };
}hdmirx_2p1_phy_p1_fld_ck_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_acdr_r_vco_encap:2;
        RBus_UInt32  p1_acdr_r_acdr_en_afn:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  p1_acdr_g_vco_encap:2;
        RBus_UInt32  p1_acdr_g_acdr_en_afn:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  p1_acdr_b_vco_encap:2;
        RBus_UInt32  p1_acdr_b_acdr_en_afn:1;
        RBus_UInt32  res3:5;
        RBus_UInt32  p1_acdr_ck_vco_encap:2;
        RBus_UInt32  p1_acdr_ck_acdr_en_afn:1;
        RBus_UInt32  res4:5;
    };
}hdmirx_2p1_phy_p1_misc_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_ck_md_rstb:1;
        RBus_UInt32  reg_p1_ck_md_threshold:6;
        RBus_UInt32  reg_p1_ck_md_debounce:7;
        RBus_UInt32  reg_p1_ck_md_sel:2;
        RBus_UInt32  reg_p1_ck_md_auto:1;
        RBus_UInt32  reg_p1_ck_md_adj:4;
        RBus_UInt32  reg_p1_ck_error_limit:5;
        RBus_UInt32  reg_p1_ck_md_reserved:4;
        RBus_UInt32  res1:2;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_ck_md_count:13;
        RBus_UInt32  p1_ck_rate:4;
        RBus_UInt32  p1_unstable_count:5;
        RBus_UInt32  p1_ck_md_ok:1;
        RBus_UInt32  p1_clock_unstable_flag:1;
        RBus_UInt32  reg_p1_dig_debug_sel:4;
        RBus_UInt32  res1:4;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_dig_reserved_0:8;
        RBus_UInt32  reg_p1_dig_reserved_1:8;
        RBus_UInt32  reg_p1_dig_reserved_2:8;
        RBus_UInt32  reg_p1_dig_reserved_3:8;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_r:32;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_g:32;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_b:32;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_ck:32;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  reg_p1_enable_one_zero_r:1;
        RBus_UInt32  reg_p1_prbs_invs_r:1;
        RBus_UInt32  reg_p1_pattern_sel_r:1;
        RBus_UInt32  p1_pkt_count_r:8;
        RBus_UInt32  p1_err_count_r:8;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  reg_p1_enable_one_zero_g:1;
        RBus_UInt32  reg_p1_prbs_invs_g:1;
        RBus_UInt32  reg_p1_pattern_sel_g:1;
        RBus_UInt32  p1_pkt_count_g:8;
        RBus_UInt32  p1_err_count_g:8;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  reg_p1_enable_one_zero_b:1;
        RBus_UInt32  reg_p1_prbs_invs_b:1;
        RBus_UInt32  reg_p1_pattern_sel_b:1;
        RBus_UInt32  p1_pkt_count_b:8;
        RBus_UInt32  p1_err_count_b:8;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  reg_p1_enable_one_zero_ck:1;
        RBus_UInt32  reg_p1_prbs_invs_ck:1;
        RBus_UInt32  reg_p1_pattern_sel_ck:1;
        RBus_UInt32  p1_pkt_count_ck:8;
        RBus_UInt32  p1_err_count_ck:8;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_dphy_debug_sel_p1:1;
        RBus_UInt32  reg_p1_infifo2_cnt:3;
        RBus_UInt32  reg_p1_4b18b_mode:1;
        RBus_UInt32  reg_p1_4b18b_data_order:1;
        RBus_UInt32  reg_p1_fifo_ckinv_r:1;
        RBus_UInt32  reg_p1_fifo_ckinv_g:1;
        RBus_UInt32  reg_p1_fifo_ckinv_b:1;
        RBus_UInt32  reg_p1_fifo_ckinv_ck:1;
        RBus_UInt32  p1_r_fifo_rst_n:1;
        RBus_UInt32  p1_g_fifo_rst_n:1;
        RBus_UInt32  p1_b_fifo_rst_n:1;
        RBus_UInt32  p1_ck_fifo_rst_n:1;
        RBus_UInt32  reg_p1_hdmi21:1;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_acc_read_out_r:8;
        RBus_UInt32  reg_p1_001_enable_r:1;
        RBus_UInt32  reg_p1_101_enable_r:1;
        RBus_UInt32  reg_p1_en_bec_acc_r:1;
        RBus_UInt32  reg_p1_en_bec_read_r:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p1_enable_one_zero_r_hdmi21:1;
        RBus_UInt32  reg_p1_prbs_invs_r_hdmi21:1;
        RBus_UInt32  reg_p1_pattern_sel_r_hdmi21:1;
        RBus_UInt32  p1_pkt_count_r_hdmi21:8;
        RBus_UInt32  p1_err_count_r_hdmi21:8;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_acc_read_out_g:8;
        RBus_UInt32  reg_p1_001_enable_g:1;
        RBus_UInt32  reg_p1_101_enable_g:1;
        RBus_UInt32  reg_p1_en_bec_acc_g:1;
        RBus_UInt32  reg_p1_en_bec_read_g:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p1_enable_one_zero_g_hdmi21:1;
        RBus_UInt32  reg_p1_prbs_invs_g_hdmi21:1;
        RBus_UInt32  reg_p1_pattern_sel_g_hdmi21:1;
        RBus_UInt32  p1_pkt_count_g_hdmi21:8;
        RBus_UInt32  p1_err_count_g_hdmi21:8;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_acc_read_out_b:8;
        RBus_UInt32  reg_p1_001_enable_b:1;
        RBus_UInt32  reg_p1_101_enable_b:1;
        RBus_UInt32  reg_p1_en_bec_acc_b:1;
        RBus_UInt32  reg_p1_en_bec_read_b:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p1_enable_one_zero_b_hdmi21:1;
        RBus_UInt32  reg_p1_prbs_invs_b_hdmi21:1;
        RBus_UInt32  reg_p1_pattern_sel_b_hdmi21:1;
        RBus_UInt32  p1_pkt_count_b_hdmi21:8;
        RBus_UInt32  p1_err_count_b_hdmi21:8;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_acc_read_out_ck:8;
        RBus_UInt32  reg_p1_001_enable_ck:1;
        RBus_UInt32  reg_p1_101_enable_ck:1;
        RBus_UInt32  reg_p1_en_bec_acc_ck:1;
        RBus_UInt32  reg_p1_en_bec_read_ck:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p1_enable_one_zero_ck_hdmi21:1;
        RBus_UInt32  reg_p1_prbs_invs_ck_hdmi21:1;
        RBus_UInt32  reg_p1_pattern_sel_ck_hdmi21:1;
        RBus_UInt32  p1_pkt_count_ck_hdmi21:8;
        RBus_UInt32  p1_err_count_ck_hdmi21:8;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_port_out_sel:1;
        RBus_UInt32  reg_p0_r_pllcdr_manual_enable:1;
        RBus_UInt32  reg_p0_g_pllcdr_manual_enable:1;
        RBus_UInt32  reg_p0_b_pllcdr_manual_enable:1;
        RBus_UInt32  reg_p0_ck_pllcdr_manual_enable:1;
        RBus_UInt32  reg_p1_r_pllcdr_manual_enable:1;
        RBus_UInt32  reg_p1_g_pllcdr_manual_enable:1;
        RBus_UInt32  reg_p1_b_pllcdr_manual_enable:1;
        RBus_UInt32  reg_p1_ck_pllcdr_manual_enable:1;
        RBus_UInt32  reg_global_reserved:23;
    };
}hdmirx_2p1_phy_global_hd21_y1_regd30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debug_out:32;
    };
}hdmirx_2p1_phy_global_hd21_y1_regd31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_pow_save_bypass:1;
        RBus_UInt32  reg_p0_pow_on_manual_en:1;
        RBus_UInt32  reg_p0_pow_on_manual:1;
        RBus_UInt32  reg_p0_pow_save_fifo_rst_dly_sel:2;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p1_pow_save_bypass:1;
        RBus_UInt32  reg_p1_pow_on_manual_en:1;
        RBus_UInt32  reg_p1_pow_on_manual:1;
        RBus_UInt32  reg_p1_pow_save_fifo_rst_dly_sel:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_p0_hd14_pow_save_bypass:1;
        RBus_UInt32  reg_p0_hd14_pow_on_manual_en:1;
        RBus_UInt32  reg_p0_hd14_pow_on_manual:1;
        RBus_UInt32  reg_p0_hd14_pow_save_fifo_rst_dly_sel:2;
        RBus_UInt32  res3:3;
        RBus_UInt32  reg_p1_hd14_pow_save_bypass:1;
        RBus_UInt32  reg_p1_hd14_pow_on_manual_en:1;
        RBus_UInt32  reg_p1_hd14_pow_on_manual:1;
        RBus_UInt32  reg_p1_hd14_pow_save_fifo_rst_dly_sel:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  reg_pow_save_xtal_24m_enable:1;
    };
}hdmirx_2p1_phy_global_hd21_y1_regd32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_pn_swap:1;
        RBus_UInt32  reg_p0_g_pn_swap:1;
        RBus_UInt32  reg_p0_b_pn_swap:1;
        RBus_UInt32  reg_p0_ck_pn_swap:1;
        RBus_UInt32  reg_p1_r_pn_swap:1;
        RBus_UInt32  reg_p1_g_pn_swap:1;
        RBus_UInt32  reg_p1_b_pn_swap:1;
        RBus_UInt32  reg_p1_ck_pn_swap:1;
        RBus_UInt32  res1:24;
    };
}hdmirx_2p1_phy_global_hd21_y1_regd33_RBUS;

#else //apply LITTLE_ENDIAN

//======HDMIRX_2P1_PHY register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_z0_adjr_0:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_z0_adjr_1:5;
        RBus_UInt32  res2:19;
    };
}hdmirx_2p1_phy_z0k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_z0_z0pow_b:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_z0_z0pow_ck:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_z0_z0pow_g:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  reg_z0_z0pow_r:2;
        RBus_UInt32  res4:6;
        RBus_UInt32  reg_z0_z300pow:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  reg_z0_z300_sel:2;
        RBus_UInt32  res6:6;
    };
}hdmirx_2p1_phy_z0pow_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_top_in_1:8;
        RBus_UInt32  reg_top_in_2:8;
        RBus_UInt32  reg_top_in_3:8;
        RBus_UInt32  reg_top_in_4:8;
    };
}hdmirx_2p1_phy_top_in_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_top_in_5:8;
        RBus_UInt32  reg_top_in_6:8;
        RBus_UInt32  reg_top_in_7:8;
        RBus_UInt32  reg_top_in_8:8;
    };
}hdmirx_2p1_phy_top_in_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_hdmirx_bias_en:1;
        RBus_UInt32  reg_ck_latch:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  reg_bg_rbgloop2:3;
        RBus_UInt32  reg_bg_rbg:3;
        RBus_UInt32  reg_bg_rbg2:2;
        RBus_UInt32  reg_bg_pow:1;
        RBus_UInt32  reg_bg_envbgup:1;
        RBus_UInt32  res2:14;
    };
}hdmirx_2p1_phy_top_in_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_out_1:8;
        RBus_UInt32  reg_p0_ck_out_2:8;
        RBus_UInt32  reg_p0_b_out_1:8;
        RBus_UInt32  reg_p0_b_out_2:8;
    };
}hdmirx_2p1_phy_p0_top_out_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_out_1:8;
        RBus_UInt32  reg_p0_g_out_2:8;
        RBus_UInt32  reg_p0_r_out_1:8;
        RBus_UInt32  reg_p0_r_out_2:8;
    };
}hdmirx_2p1_phy_p0_top_out_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_fore_off_tst_b:5;
        RBus_UInt32  reg_p0_fore_off_bound_b:1;
        RBus_UInt32  reg_p0_fore_off_ok_b:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p0_fore_off_tst_ck:5;
        RBus_UInt32  reg_p0_fore_off_bound_ck:1;
        RBus_UInt32  reg_p0_fore_off_ok_ck:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  reg_p0_fore_off_tst_g:5;
        RBus_UInt32  reg_p0_fore_off_bound_g:1;
        RBus_UInt32  reg_p0_fore_off_ok_g:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  reg_p0_fore_off_tst_r:5;
        RBus_UInt32  reg_p0_fore_off_bound_r:1;
        RBus_UInt32  reg_p0_fore_off_ok_r:1;
        RBus_UInt32  res4:1;
    };
}hdmirx_2p1_phy_p0_koffset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_cmu_ck_1:8;
        RBus_UInt32  reg_p0_cmu_ck_2:8;
        RBus_UInt32  reg_p0_cmu_ck_3:8;
        RBus_UInt32  res1:8;
    };
}hdmirx_2p1_phy_p0_ck_cmu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_1:8;
        RBus_UInt32  reg_p0_ck_2:8;
        RBus_UInt32  reg_p0_ck_3:8;
        RBus_UInt32  reg_p0_ck_4:8;
    };
}hdmirx_2p1_phy_p0_ck0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_5:8;
        RBus_UInt32  reg_p0_ck_6:8;
        RBus_UInt32  reg_p0_ck_7:8;
        RBus_UInt32  reg_p0_ck_8:8;
    };
}hdmirx_2p1_phy_p0_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_9:8;
        RBus_UInt32  reg_p0_ck_10:8;
        RBus_UInt32  reg_p0_ck_11:8;
        RBus_UInt32  reg_p0_ck_12:8;
    };
}hdmirx_2p1_phy_p0_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_13:8;
        RBus_UInt32  reg_p0_ck_14:8;
        RBus_UInt32  reg_p0_ck_15:8;
        RBus_UInt32  reg_p0_ck_16:8;
    };
}hdmirx_2p1_phy_p0_ck3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_17:8;
        RBus_UInt32  reg_p0_ck_18:8;
        RBus_UInt32  reg_p0_ck_19:8;
        RBus_UInt32  reg_p0_ck_20:8;
    };
}hdmirx_2p1_phy_p0_ck4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_ck_1:8;
        RBus_UInt32  reg_p0_acdr_ck_2:8;
        RBus_UInt32  reg_p0_acdr_ck_3:8;
        RBus_UInt32  reg_p0_acdr_ck_4:8;
    };
}hdmirx_2p1_phy_p0_acdr_ck0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_ck_5:8;
        RBus_UInt32  reg_p0_acdr_ck_6:8;
        RBus_UInt32  reg_p0_acdr_ck_7:8;
        RBus_UInt32  reg_p0_acdr_ck_8:8;
    };
}hdmirx_2p1_phy_p0_acdr_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_ck_9:8;
        RBus_UInt32  reg_p0_acdr_ck_10:8;
        RBus_UInt32  reg_p0_acdr_ck_11:8;
        RBus_UInt32  reg_p0_acdr_ck_12:8;
    };
}hdmirx_2p1_phy_p0_acdr_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_1:8;
        RBus_UInt32  reg_p0_b_2:8;
        RBus_UInt32  reg_p0_b_3:8;
        RBus_UInt32  reg_p0_b_4:8;
    };
}hdmirx_2p1_phy_p0_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_5:8;
        RBus_UInt32  reg_p0_b_6:8;
        RBus_UInt32  reg_p0_b_7:8;
        RBus_UInt32  reg_p0_b_8:8;
    };
}hdmirx_2p1_phy_p0_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_9:8;
        RBus_UInt32  reg_p0_b_10:8;
        RBus_UInt32  reg_p0_b_11:8;
        RBus_UInt32  reg_p0_b_12:8;
    };
}hdmirx_2p1_phy_p0_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_13:8;
        RBus_UInt32  reg_p0_b_14:8;
        RBus_UInt32  reg_p0_b_15:8;
        RBus_UInt32  reg_p0_b_16:8;
    };
}hdmirx_2p1_phy_p0_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_17:8;
        RBus_UInt32  reg_p0_b_18:8;
        RBus_UInt32  reg_p0_b_19:8;
        RBus_UInt32  reg_p0_b_20:8;
    };
}hdmirx_2p1_phy_p0_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_b_1:8;
        RBus_UInt32  reg_p0_acdr_b_2:8;
        RBus_UInt32  reg_p0_acdr_b_3:8;
        RBus_UInt32  reg_p0_acdr_b_4:8;
    };
}hdmirx_2p1_phy_p0_acdr_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_b_5:8;
        RBus_UInt32  reg_p0_acdr_b_6:8;
        RBus_UInt32  reg_p0_acdr_b_7:8;
        RBus_UInt32  reg_p0_acdr_b_8:8;
    };
}hdmirx_2p1_phy_p0_acdr_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_b_9:8;
        RBus_UInt32  reg_p0_acdr_b_10:8;
        RBus_UInt32  reg_p0_acdr_b_11:8;
        RBus_UInt32  reg_p0_acdr_b_12:8;
    };
}hdmirx_2p1_phy_p0_acdr_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_1:8;
        RBus_UInt32  reg_p0_g_2:8;
        RBus_UInt32  reg_p0_g_3:8;
        RBus_UInt32  reg_p0_g_4:8;
    };
}hdmirx_2p1_phy_p0_g0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_5:8;
        RBus_UInt32  reg_p0_g_6:8;
        RBus_UInt32  reg_p0_g_7:8;
        RBus_UInt32  reg_p0_g_8:8;
    };
}hdmirx_2p1_phy_p0_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_9:8;
        RBus_UInt32  reg_p0_g_10:8;
        RBus_UInt32  reg_p0_g_11:8;
        RBus_UInt32  reg_p0_g_12:8;
    };
}hdmirx_2p1_phy_p0_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_13:8;
        RBus_UInt32  reg_p0_g_14:8;
        RBus_UInt32  reg_p0_g_15:8;
        RBus_UInt32  reg_p0_g_16:8;
    };
}hdmirx_2p1_phy_p0_g3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_17:8;
        RBus_UInt32  reg_p0_g_18:8;
        RBus_UInt32  reg_p0_g_19:8;
        RBus_UInt32  reg_p0_g_20:8;
    };
}hdmirx_2p1_phy_p0_g4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_g_1:8;
        RBus_UInt32  reg_p0_acdr_g_2:8;
        RBus_UInt32  reg_p0_acdr_g_3:8;
        RBus_UInt32  reg_p0_acdr_g_4:8;
    };
}hdmirx_2p1_phy_p0_acdr_g0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_g_5:8;
        RBus_UInt32  reg_p0_acdr_g_6:8;
        RBus_UInt32  reg_p0_acdr_g_7:8;
        RBus_UInt32  reg_p0_acdr_g_8:8;
    };
}hdmirx_2p1_phy_p0_acdr_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_g_9:8;
        RBus_UInt32  reg_p0_acdr_g_10:8;
        RBus_UInt32  reg_p0_acdr_g_11:8;
        RBus_UInt32  reg_p0_acdr_g_12:8;
    };
}hdmirx_2p1_phy_p0_acdr_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_1:8;
        RBus_UInt32  reg_p0_r_2:8;
        RBus_UInt32  reg_p0_r_3:8;
        RBus_UInt32  reg_p0_r_4:8;
    };
}hdmirx_2p1_phy_p0_r0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_5:8;
        RBus_UInt32  reg_p0_r_6:8;
        RBus_UInt32  reg_p0_r_7:8;
        RBus_UInt32  reg_p0_r_8:8;
    };
}hdmirx_2p1_phy_p0_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_9:8;
        RBus_UInt32  reg_p0_r_10:8;
        RBus_UInt32  reg_p0_r_11:8;
        RBus_UInt32  reg_p0_r_12:8;
    };
}hdmirx_2p1_phy_p0_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_13:8;
        RBus_UInt32  reg_p0_r_14:8;
        RBus_UInt32  reg_p0_r_15:8;
        RBus_UInt32  reg_p0_r_16:8;
    };
}hdmirx_2p1_phy_p0_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_17:8;
        RBus_UInt32  reg_p0_r_18:8;
        RBus_UInt32  reg_p0_r_19:8;
        RBus_UInt32  reg_p0_r_20:8;
    };
}hdmirx_2p1_phy_p0_r4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_r_1:8;
        RBus_UInt32  reg_p0_acdr_r_2:8;
        RBus_UInt32  reg_p0_acdr_r_3:8;
        RBus_UInt32  reg_p0_acdr_r_4:8;
    };
}hdmirx_2p1_phy_p0_acdr_r0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_r_5:8;
        RBus_UInt32  reg_p0_acdr_r_6:8;
        RBus_UInt32  reg_p0_acdr_r_7:8;
        RBus_UInt32  reg_p0_acdr_r_8:8;
    };
}hdmirx_2p1_phy_p0_acdr_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_acdr_r_9:8;
        RBus_UInt32  reg_p0_acdr_r_10:8;
        RBus_UInt32  reg_p0_acdr_r_11:8;
        RBus_UInt32  reg_p0_acdr_r_12:8;
    };
}hdmirx_2p1_phy_p0_acdr_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_b_demux_rstb:1;
        RBus_UInt32  p0_g_demux_rstb:1;
        RBus_UInt32  p0_r_demux_rstb:1;
        RBus_UInt32  p0_ck_demux_rstb:1;
        RBus_UInt32  res1:28;
    };
}hdmirx_2p1_phy_p0_hd21_y1_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_pll_p0_acdr_r:6;
        RBus_UInt32  reg_pll_p0_acdr_r_sel_idn:4;
        RBus_UInt32  reg_pll_p0_acdr_r_en_idn:1;
        RBus_UInt32  reg_pll_p0_acdr_r_en_lpf_c:1;
        RBus_UInt32  reg_pll_p0_acdr_r_en_lpf_r:1;
        RBus_UInt32  reg_pll_p0_acdr_r_vco_coarse_i:4;
        RBus_UInt32  reg_pll_p0_acdr_r_vco_fine_i:4;
        RBus_UInt32  reg_pll_p0_acdr_r_cp_cap_sel:2;
        RBus_UInt32  reg_pll_p0_acdr_r_cs_cap_sel:2;
        RBus_UInt32  reg_pll_p0_acdr_r_lfrs_sel:3;
        RBus_UInt32  reg_pll_p0_acdr_r_icp_sel:4;
    };
}hdmirx_2p1_phy_p0_acdr_r_pll_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_pll_p0_acdr_g:6;
        RBus_UInt32  reg_pll_p0_acdr_g_sel_idn:4;
        RBus_UInt32  reg_pll_p0_acdr_g_en_idn:1;
        RBus_UInt32  reg_pll_p0_acdr_g_en_lpf_c:1;
        RBus_UInt32  reg_pll_p0_acdr_g_en_lpf_r:1;
        RBus_UInt32  reg_pll_p0_acdr_g_vco_coarse_i:4;
        RBus_UInt32  reg_pll_p0_acdr_g_vco_fine_i:4;
        RBus_UInt32  reg_pll_p0_acdr_g_cp_cap_sel:2;
        RBus_UInt32  reg_pll_p0_acdr_g_cs_cap_sel:2;
        RBus_UInt32  reg_pll_p0_acdr_g_lfrs_sel:3;
        RBus_UInt32  reg_pll_p0_acdr_g_icp_sel:4;
    };
}hdmirx_2p1_phy_p0_acdr_g_pll_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_pll_p0_acdr_b:6;
        RBus_UInt32  reg_pll_p0_acdr_b_sel_idn:4;
        RBus_UInt32  reg_pll_p0_acdr_b_en_idn:1;
        RBus_UInt32  reg_pll_p0_acdr_b_en_lpf_c:1;
        RBus_UInt32  reg_pll_p0_acdr_b_en_lpf_r:1;
        RBus_UInt32  reg_pll_p0_acdr_b_vco_coarse_i:4;
        RBus_UInt32  reg_pll_p0_acdr_b_vco_fine_i:4;
        RBus_UInt32  reg_pll_p0_acdr_b_cp_cap_sel:2;
        RBus_UInt32  reg_pll_p0_acdr_b_cs_cap_sel:2;
        RBus_UInt32  reg_pll_p0_acdr_b_lfrs_sel:3;
        RBus_UInt32  reg_pll_p0_acdr_b_icp_sel:4;
    };
}hdmirx_2p1_phy_p0_acdr_b_pll_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_pll_p0_acdr_ck:6;
        RBus_UInt32  reg_pll_p0_acdr_ck_sel_idn:4;
        RBus_UInt32  reg_pll_p0_acdr_ck_en_idn:1;
        RBus_UInt32  reg_pll_p0_acdr_ck_en_lpf_c:1;
        RBus_UInt32  reg_pll_p0_acdr_ck_en_lpf_r:1;
        RBus_UInt32  reg_pll_p0_acdr_ck_vco_coarse_i:4;
        RBus_UInt32  reg_pll_p0_acdr_ck_vco_fine_i:4;
        RBus_UInt32  reg_pll_p0_acdr_ck_cp_cap_sel:2;
        RBus_UInt32  reg_pll_p0_acdr_ck_cs_cap_sel:2;
        RBus_UInt32  reg_pll_p0_acdr_ck_lfrs_sel:3;
        RBus_UInt32  reg_pll_p0_acdr_ck_icp_sel:4;
    };
}hdmirx_2p1_phy_p0_acdr_ck_pll_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_cdr_p0_acdr_r:6;
        RBus_UInt32  reg_cdr_p0_acdr_r_sel_idn:4;
        RBus_UInt32  reg_cdr_p0_acdr_r_en_idn:1;
        RBus_UInt32  reg_cdr_p0_acdr_r_en_lpf_c:1;
        RBus_UInt32  reg_cdr_p0_acdr_r_en_lpf_r:1;
        RBus_UInt32  reg_cdr_p0_acdr_r_vco_coarse_i:4;
        RBus_UInt32  reg_cdr_p0_acdr_r_vco_fine_i:4;
        RBus_UInt32  reg_cdr_p0_acdr_r_cp_cap_sel:2;
        RBus_UInt32  reg_cdr_p0_acdr_r_cs_cap_sel:2;
        RBus_UInt32  reg_cdr_p0_acdr_r_lfrs_sel:3;
        RBus_UInt32  reg_cdr_p0_acdr_r_icp_sel:4;
    };
}hdmirx_2p1_phy_p0_acdr_r_cdr_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_cdr_p0_acdr_g:6;
        RBus_UInt32  reg_cdr_p0_acdr_g_sel_idn:4;
        RBus_UInt32  reg_cdr_p0_acdr_g_en_idn:1;
        RBus_UInt32  reg_cdr_p0_acdr_g_en_lpf_c:1;
        RBus_UInt32  reg_cdr_p0_acdr_g_en_lpf_r:1;
        RBus_UInt32  reg_cdr_p0_acdr_g_vco_coarse_i:4;
        RBus_UInt32  reg_cdr_p0_acdr_g_vco_fine_i:4;
        RBus_UInt32  reg_cdr_p0_acdr_g_cp_cap_sel:2;
        RBus_UInt32  reg_cdr_p0_acdr_g_cs_cap_sel:2;
        RBus_UInt32  reg_cdr_p0_acdr_g_lfrs_sel:3;
        RBus_UInt32  reg_cdr_p0_acdr_g_icp_sel:4;
    };
}hdmirx_2p1_phy_p0_acdr_g_cdr_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_cdr_p0_acdr_b:6;
        RBus_UInt32  reg_cdr_p0_acdr_b_sel_idn:4;
        RBus_UInt32  reg_cdr_p0_acdr_b_en_idn:1;
        RBus_UInt32  reg_cdr_p0_acdr_b_en_lpf_c:1;
        RBus_UInt32  reg_cdr_p0_acdr_b_en_lpf_r:1;
        RBus_UInt32  reg_cdr_p0_acdr_b_vco_coarse_i:4;
        RBus_UInt32  reg_cdr_p0_acdr_b_vco_fine_i:4;
        RBus_UInt32  reg_cdr_p0_acdr_b_cp_cap_sel:2;
        RBus_UInt32  reg_cdr_p0_acdr_b_cs_cap_sel:2;
        RBus_UInt32  reg_cdr_p0_acdr_b_lfrs_sel:3;
        RBus_UInt32  reg_cdr_p0_acdr_b_icp_sel:4;
    };
}hdmirx_2p1_phy_p0_acdr_b_cdr_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_cdr_p0_acdr_ck:6;
        RBus_UInt32  reg_cdr_p0_acdr_ck_sel_idn:4;
        RBus_UInt32  reg_cdr_p0_acdr_ck_en_idn:1;
        RBus_UInt32  reg_cdr_p0_acdr_ck_en_lpf_c:1;
        RBus_UInt32  reg_cdr_p0_acdr_ck_en_lpf_r:1;
        RBus_UInt32  reg_cdr_p0_acdr_ck_vco_coarse_i:4;
        RBus_UInt32  reg_cdr_p0_acdr_ck_vco_fine_i:4;
        RBus_UInt32  reg_cdr_p0_acdr_ck_cp_cap_sel:2;
        RBus_UInt32  reg_cdr_p0_acdr_ck_cs_cap_sel:2;
        RBus_UInt32  reg_cdr_p0_acdr_ck_lfrs_sel:3;
        RBus_UInt32  reg_cdr_p0_acdr_ck_icp_sel:4;
    };
}hdmirx_2p1_phy_p0_acdr_ck_cdr_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_manual_p0_acdr_r:4;
        RBus_UInt32  reg_p0_r_pll_to_acdr_rdy_manual:1;
        RBus_UInt32  reg_p0_r_pll_to_acdr_manual_en:1;
        RBus_UInt32  reg_manual_p0_acdr_r_sel_idn:4;
        RBus_UInt32  reg_manual_p0_acdr_r_en_idn:1;
        RBus_UInt32  reg_manual_p0_acdr_r_en_lpf_c:1;
        RBus_UInt32  reg_manual_p0_acdr_r_en_lpf_r:1;
        RBus_UInt32  reg_manual_p0_acdr_r_vco_coarse_i:4;
        RBus_UInt32  reg_manual_p0_acdr_r_vco_fine_i:4;
        RBus_UInt32  reg_manual_p0_acdr_r_cp_cap_sel:2;
        RBus_UInt32  reg_manual_p0_acdr_r_cs_cap_sel:2;
        RBus_UInt32  reg_manual_p0_acdr_r_lfrs_sel:3;
        RBus_UInt32  reg_manual_p0_acdr_r_icp_sel:4;
    };
}hdmirx_2p1_phy_p0_acdr_r_manual_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_manual_p0_acdr_g:4;
        RBus_UInt32  reg_p0_g_pll_to_acdr_rdy_manual:1;
        RBus_UInt32  reg_p0_g_pll_to_acdr_manual_en:1;
        RBus_UInt32  reg_manual_p0_acdr_g_sel_idn:4;
        RBus_UInt32  reg_manual_p0_acdr_g_en_idn:1;
        RBus_UInt32  reg_manual_p0_acdr_g_en_lpf_c:1;
        RBus_UInt32  reg_manual_p0_acdr_g_en_lpf_r:1;
        RBus_UInt32  reg_manual_p0_acdr_g_vco_coarse_i:4;
        RBus_UInt32  reg_manual_p0_acdr_g_vco_fine_i:4;
        RBus_UInt32  reg_manual_p0_acdr_g_cp_cap_sel:2;
        RBus_UInt32  reg_manual_p0_acdr_g_cs_cap_sel:2;
        RBus_UInt32  reg_manual_p0_acdr_g_lfrs_sel:3;
        RBus_UInt32  reg_manual_p0_acdr_g_icp_sel:4;
    };
}hdmirx_2p1_phy_p0_acdr_g_manual_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_manual_p0_acdr_b:4;
        RBus_UInt32  reg_p0_b_pll_to_acdr_rdy_manual:1;
        RBus_UInt32  reg_p0_b_pll_to_acdr_manual_en:1;
        RBus_UInt32  reg_manual_p0_acdr_b_sel_idn:4;
        RBus_UInt32  reg_manual_p0_acdr_b_en_idn:1;
        RBus_UInt32  reg_manual_p0_acdr_b_en_lpf_c:1;
        RBus_UInt32  reg_manual_p0_acdr_b_en_lpf_r:1;
        RBus_UInt32  reg_manual_p0_acdr_b_vco_coarse_i:4;
        RBus_UInt32  reg_manual_p0_acdr_b_vco_fine_i:4;
        RBus_UInt32  reg_manual_p0_acdr_b_cp_cap_sel:2;
        RBus_UInt32  reg_manual_p0_acdr_b_cs_cap_sel:2;
        RBus_UInt32  reg_manual_p0_acdr_b_lfrs_sel:3;
        RBus_UInt32  reg_manual_p0_acdr_b_icp_sel:4;
    };
}hdmirx_2p1_phy_p0_acdr_b_manual_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_manual_p0_acdr_ck:4;
        RBus_UInt32  reg_p0_ck_pll_to_acdr_rdy_manual:1;
        RBus_UInt32  reg_p0_ck_pll_to_acdr_manual_en:1;
        RBus_UInt32  reg_manual_p0_acdr_ck_sel_idn:4;
        RBus_UInt32  reg_manual_p0_acdr_ck_en_idn:1;
        RBus_UInt32  reg_manual_p0_acdr_ck_en_lpf_c:1;
        RBus_UInt32  reg_manual_p0_acdr_ck_en_lpf_r:1;
        RBus_UInt32  reg_manual_p0_acdr_ck_vco_coarse_i:4;
        RBus_UInt32  reg_manual_p0_acdr_ck_vco_fine_i:4;
        RBus_UInt32  reg_manual_p0_acdr_ck_cp_cap_sel:2;
        RBus_UInt32  reg_manual_p0_acdr_ck_cs_cap_sel:2;
        RBus_UInt32  reg_manual_p0_acdr_ck_lfrs_sel:3;
        RBus_UInt32  reg_manual_p0_acdr_ck_icp_sel:4;
    };
}hdmirx_2p1_phy_p0_acdr_ck_manual_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_out_1:8;
        RBus_UInt32  reg_p1_ck_out_2:8;
        RBus_UInt32  reg_p1_b_out_1:8;
        RBus_UInt32  reg_p1_b_out_2:8;
    };
}hdmirx_2p1_phy_p1_top_out_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_out_1:8;
        RBus_UInt32  reg_p1_g_out_2:8;
        RBus_UInt32  reg_p1_r_out_1:8;
        RBus_UInt32  reg_p1_r_out_2:8;
    };
}hdmirx_2p1_phy_p1_top_out_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_fore_off_tst_b:5;
        RBus_UInt32  reg_p1_fore_off_bound_b:1;
        RBus_UInt32  reg_p1_fore_off_ok_b:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p1_fore_off_tst_ck:5;
        RBus_UInt32  reg_p1_fore_off_bound_ck:1;
        RBus_UInt32  reg_p1_fore_off_ok_ck:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  reg_p1_fore_off_tst_g:5;
        RBus_UInt32  reg_p1_fore_off_bound_g:1;
        RBus_UInt32  reg_p1_fore_off_ok_g:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  reg_p1_fore_off_tst_r:5;
        RBus_UInt32  reg_p1_fore_off_bound_r:1;
        RBus_UInt32  reg_p1_fore_off_ok_r:1;
        RBus_UInt32  res4:1;
    };
}hdmirx_2p1_phy_p1_koffset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_cmu_ck_1:8;
        RBus_UInt32  reg_p1_cmu_ck_2:8;
        RBus_UInt32  reg_p1_cmu_ck_3:8;
        RBus_UInt32  res1:8;
    };
}hdmirx_2p1_phy_p1_ck_cmu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_1:8;
        RBus_UInt32  reg_p1_ck_2:8;
        RBus_UInt32  reg_p1_ck_3:8;
        RBus_UInt32  reg_p1_ck_4:8;
    };
}hdmirx_2p1_phy_p1_ck0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_5:8;
        RBus_UInt32  reg_p1_ck_6:8;
        RBus_UInt32  reg_p1_ck_7:8;
        RBus_UInt32  reg_p1_ck_8:8;
    };
}hdmirx_2p1_phy_p1_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_9:8;
        RBus_UInt32  reg_p1_ck_10:8;
        RBus_UInt32  reg_p1_ck_11:8;
        RBus_UInt32  reg_p1_ck_12:8;
    };
}hdmirx_2p1_phy_p1_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_13:8;
        RBus_UInt32  reg_p1_ck_14:8;
        RBus_UInt32  reg_p1_ck_15:8;
        RBus_UInt32  reg_p1_ck_16:8;
    };
}hdmirx_2p1_phy_p1_ck3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_17:8;
        RBus_UInt32  reg_p1_ck_18:8;
        RBus_UInt32  reg_p1_ck_19:8;
        RBus_UInt32  reg_p1_ck_20:8;
    };
}hdmirx_2p1_phy_p1_ck4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_ck_1:8;
        RBus_UInt32  reg_p1_acdr_ck_2:8;
        RBus_UInt32  reg_p1_acdr_ck_3:8;
        RBus_UInt32  reg_p1_acdr_ck_4:8;
    };
}hdmirx_2p1_phy_p1_acdr_ck0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_ck_5:8;
        RBus_UInt32  reg_p1_acdr_ck_6:8;
        RBus_UInt32  reg_p1_acdr_ck_7:8;
        RBus_UInt32  reg_p1_acdr_ck_8:8;
    };
}hdmirx_2p1_phy_p1_acdr_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_ck_9:8;
        RBus_UInt32  reg_p1_acdr_ck_10:8;
        RBus_UInt32  reg_p1_acdr_ck_11:8;
        RBus_UInt32  reg_p1_acdr_ck_12:8;
    };
}hdmirx_2p1_phy_p1_acdr_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_1:8;
        RBus_UInt32  reg_p1_b_2:8;
        RBus_UInt32  reg_p1_b_3:8;
        RBus_UInt32  reg_p1_b_4:8;
    };
}hdmirx_2p1_phy_p1_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_5:8;
        RBus_UInt32  reg_p1_b_6:8;
        RBus_UInt32  reg_p1_b_7:8;
        RBus_UInt32  reg_p1_b_8:8;
    };
}hdmirx_2p1_phy_p1_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_9:8;
        RBus_UInt32  reg_p1_b_10:8;
        RBus_UInt32  reg_p1_b_11:8;
        RBus_UInt32  reg_p1_b_12:8;
    };
}hdmirx_2p1_phy_p1_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_13:8;
        RBus_UInt32  reg_p1_b_14:8;
        RBus_UInt32  reg_p1_b_15:8;
        RBus_UInt32  reg_p1_b_16:8;
    };
}hdmirx_2p1_phy_p1_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_17:8;
        RBus_UInt32  reg_p1_b_18:8;
        RBus_UInt32  reg_p1_b_19:8;
        RBus_UInt32  reg_p1_b_20:8;
    };
}hdmirx_2p1_phy_p1_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_b_1:8;
        RBus_UInt32  reg_p1_acdr_b_2:8;
        RBus_UInt32  reg_p1_acdr_b_3:8;
        RBus_UInt32  reg_p1_acdr_b_4:8;
    };
}hdmirx_2p1_phy_p1_acdr_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_b_5:8;
        RBus_UInt32  reg_p1_acdr_b_6:8;
        RBus_UInt32  reg_p1_acdr_b_7:8;
        RBus_UInt32  reg_p1_acdr_b_8:8;
    };
}hdmirx_2p1_phy_p1_acdr_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_b_9:8;
        RBus_UInt32  reg_p1_acdr_b_10:8;
        RBus_UInt32  reg_p1_acdr_b_11:8;
        RBus_UInt32  reg_p1_acdr_b_12:8;
    };
}hdmirx_2p1_phy_p1_acdr_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_1:8;
        RBus_UInt32  reg_p1_g_2:8;
        RBus_UInt32  reg_p1_g_3:8;
        RBus_UInt32  reg_p1_g_4:8;
    };
}hdmirx_2p1_phy_p1_g0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_5:8;
        RBus_UInt32  reg_p1_g_6:8;
        RBus_UInt32  reg_p1_g_7:8;
        RBus_UInt32  reg_p1_g_8:8;
    };
}hdmirx_2p1_phy_p1_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_9:8;
        RBus_UInt32  reg_p1_g_10:8;
        RBus_UInt32  reg_p1_g_11:8;
        RBus_UInt32  reg_p1_g_12:8;
    };
}hdmirx_2p1_phy_p1_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_13:8;
        RBus_UInt32  reg_p1_g_14:8;
        RBus_UInt32  reg_p1_g_15:8;
        RBus_UInt32  reg_p1_g_16:8;
    };
}hdmirx_2p1_phy_p1_g3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_17:8;
        RBus_UInt32  reg_p1_g_18:8;
        RBus_UInt32  reg_p1_g_19:8;
        RBus_UInt32  reg_p1_g_20:8;
    };
}hdmirx_2p1_phy_p1_g4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_g_1:8;
        RBus_UInt32  reg_p1_acdr_g_2:8;
        RBus_UInt32  reg_p1_acdr_g_3:8;
        RBus_UInt32  reg_p1_acdr_g_4:8;
    };
}hdmirx_2p1_phy_p1_acdr_g0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_g_5:8;
        RBus_UInt32  reg_p1_acdr_g_6:8;
        RBus_UInt32  reg_p1_acdr_g_7:8;
        RBus_UInt32  reg_p1_acdr_g_8:8;
    };
}hdmirx_2p1_phy_p1_acdr_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_g_9:8;
        RBus_UInt32  reg_p1_acdr_g_10:8;
        RBus_UInt32  reg_p1_acdr_g_11:8;
        RBus_UInt32  reg_p1_acdr_g_12:8;
    };
}hdmirx_2p1_phy_p1_acdr_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_1:8;
        RBus_UInt32  reg_p1_r_2:8;
        RBus_UInt32  reg_p1_r_3:8;
        RBus_UInt32  reg_p1_r_4:8;
    };
}hdmirx_2p1_phy_p1_r0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_5:8;
        RBus_UInt32  reg_p1_r_6:8;
        RBus_UInt32  reg_p1_r_7:8;
        RBus_UInt32  reg_p1_r_8:8;
    };
}hdmirx_2p1_phy_p1_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_9:8;
        RBus_UInt32  reg_p1_r_10:8;
        RBus_UInt32  reg_p1_r_11:8;
        RBus_UInt32  reg_p1_r_12:8;
    };
}hdmirx_2p1_phy_p1_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_13:8;
        RBus_UInt32  reg_p1_r_14:8;
        RBus_UInt32  reg_p1_r_15:8;
        RBus_UInt32  reg_p1_r_16:8;
    };
}hdmirx_2p1_phy_p1_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_17:8;
        RBus_UInt32  reg_p1_r_18:8;
        RBus_UInt32  reg_p1_r_19:8;
        RBus_UInt32  reg_p1_r_20:8;
    };
}hdmirx_2p1_phy_p1_r4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_r_1:8;
        RBus_UInt32  reg_p1_acdr_r_2:8;
        RBus_UInt32  reg_p1_acdr_r_3:8;
        RBus_UInt32  reg_p1_acdr_r_4:8;
    };
}hdmirx_2p1_phy_p1_acdr_r0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_r_5:8;
        RBus_UInt32  reg_p1_acdr_r_6:8;
        RBus_UInt32  reg_p1_acdr_r_7:8;
        RBus_UInt32  reg_p1_acdr_r_8:8;
    };
}hdmirx_2p1_phy_p1_acdr_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_acdr_r_9:8;
        RBus_UInt32  reg_p1_acdr_r_10:8;
        RBus_UInt32  reg_p1_acdr_r_11:8;
        RBus_UInt32  reg_p1_acdr_r_12:8;
    };
}hdmirx_2p1_phy_p1_acdr_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_b_demux_rstb:1;
        RBus_UInt32  p1_g_demux_rstb:1;
        RBus_UInt32  p1_r_demux_rstb:1;
        RBus_UInt32  p1_ck_demux_rstb:1;
        RBus_UInt32  res1:28;
    };
}hdmirx_2p1_phy_p1_hd21_y1_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_pll_p1_acdr_r:6;
        RBus_UInt32  reg_pll_p1_acdr_r_sel_idn:4;
        RBus_UInt32  reg_pll_p1_acdr_r_en_idn:1;
        RBus_UInt32  reg_pll_p1_acdr_r_en_lpf_c:1;
        RBus_UInt32  reg_pll_p1_acdr_r_en_lpf_r:1;
        RBus_UInt32  reg_pll_p1_acdr_r_vco_coarse_i:4;
        RBus_UInt32  reg_pll_p1_acdr_r_vco_fine_i:4;
        RBus_UInt32  reg_pll_p1_acdr_r_cp_cap_sel:2;
        RBus_UInt32  reg_pll_p1_acdr_r_cs_cap_sel:2;
        RBus_UInt32  reg_pll_p1_acdr_r_lfrs_sel:3;
        RBus_UInt32  reg_pll_p1_acdr_r_icp_sel:4;
    };
}hdmirx_2p1_phy_p1_acdr_r_pll_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_pll_p1_acdr_g:6;
        RBus_UInt32  reg_pll_p1_acdr_g_sel_idn:4;
        RBus_UInt32  reg_pll_p1_acdr_g_en_idn:1;
        RBus_UInt32  reg_pll_p1_acdr_g_en_lpf_c:1;
        RBus_UInt32  reg_pll_p1_acdr_g_en_lpf_r:1;
        RBus_UInt32  reg_pll_p1_acdr_g_vco_coarse_i:4;
        RBus_UInt32  reg_pll_p1_acdr_g_vco_fine_i:4;
        RBus_UInt32  reg_pll_p1_acdr_g_cp_cap_sel:2;
        RBus_UInt32  reg_pll_p1_acdr_g_cs_cap_sel:2;
        RBus_UInt32  reg_pll_p1_acdr_g_lfrs_sel:3;
        RBus_UInt32  reg_pll_p1_acdr_g_icp_sel:4;
    };
}hdmirx_2p1_phy_p1_acdr_g_pll_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_pll_p1_acdr_b:6;
        RBus_UInt32  reg_pll_p1_acdr_b_sel_idn:4;
        RBus_UInt32  reg_pll_p1_acdr_b_en_idn:1;
        RBus_UInt32  reg_pll_p1_acdr_b_en_lpf_c:1;
        RBus_UInt32  reg_pll_p1_acdr_b_en_lpf_r:1;
        RBus_UInt32  reg_pll_p1_acdr_b_vco_coarse_i:4;
        RBus_UInt32  reg_pll_p1_acdr_b_vco_fine_i:4;
        RBus_UInt32  reg_pll_p1_acdr_b_cp_cap_sel:2;
        RBus_UInt32  reg_pll_p1_acdr_b_cs_cap_sel:2;
        RBus_UInt32  reg_pll_p1_acdr_b_lfrs_sel:3;
        RBus_UInt32  reg_pll_p1_acdr_b_icp_sel:4;
    };
}hdmirx_2p1_phy_p1_acdr_b_pll_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_pll_p1_acdr_ck:6;
        RBus_UInt32  reg_pll_p1_acdr_ck_sel_idn:4;
        RBus_UInt32  reg_pll_p1_acdr_ck_en_idn:1;
        RBus_UInt32  reg_pll_p1_acdr_ck_en_lpf_c:1;
        RBus_UInt32  reg_pll_p1_acdr_ck_en_lpf_r:1;
        RBus_UInt32  reg_pll_p1_acdr_ck_vco_coarse_i:4;
        RBus_UInt32  reg_pll_p1_acdr_ck_vco_fine_i:4;
        RBus_UInt32  reg_pll_p1_acdr_ck_cp_cap_sel:2;
        RBus_UInt32  reg_pll_p1_acdr_ck_cs_cap_sel:2;
        RBus_UInt32  reg_pll_p1_acdr_ck_lfrs_sel:3;
        RBus_UInt32  reg_pll_p1_acdr_ck_icp_sel:4;
    };
}hdmirx_2p1_phy_p1_acdr_ck_pll_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_cdr_p1_acdr_r:6;
        RBus_UInt32  reg_cdr_p1_acdr_r_sel_idn:4;
        RBus_UInt32  reg_cdr_p1_acdr_r_en_idn:1;
        RBus_UInt32  reg_cdr_p1_acdr_r_en_lpf_c:1;
        RBus_UInt32  reg_cdr_p1_acdr_r_en_lpf_r:1;
        RBus_UInt32  reg_cdr_p1_acdr_r_vco_coarse_i:4;
        RBus_UInt32  reg_cdr_p1_acdr_r_vco_fine_i:4;
        RBus_UInt32  reg_cdr_p1_acdr_r_cp_cap_sel:2;
        RBus_UInt32  reg_cdr_p1_acdr_r_cs_cap_sel:2;
        RBus_UInt32  reg_cdr_p1_acdr_r_lfrs_sel:3;
        RBus_UInt32  reg_cdr_p1_acdr_r_icp_sel:4;
    };
}hdmirx_2p1_phy_p1_acdr_r_cdr_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_cdr_p1_acdr_g:6;
        RBus_UInt32  reg_cdr_p1_acdr_g_sel_idn:4;
        RBus_UInt32  reg_cdr_p1_acdr_g_en_idn:1;
        RBus_UInt32  reg_cdr_p1_acdr_g_en_lpf_c:1;
        RBus_UInt32  reg_cdr_p1_acdr_g_en_lpf_r:1;
        RBus_UInt32  reg_cdr_p1_acdr_g_vco_coarse_i:4;
        RBus_UInt32  reg_cdr_p1_acdr_g_vco_fine_i:4;
        RBus_UInt32  reg_cdr_p1_acdr_g_cp_cap_sel:2;
        RBus_UInt32  reg_cdr_p1_acdr_g_cs_cap_sel:2;
        RBus_UInt32  reg_cdr_p1_acdr_g_lfrs_sel:3;
        RBus_UInt32  reg_cdr_p1_acdr_g_icp_sel:4;
    };
}hdmirx_2p1_phy_p1_acdr_g_cdr_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_cdr_p1_acdr_b:6;
        RBus_UInt32  reg_cdr_p1_acdr_b_sel_idn:4;
        RBus_UInt32  reg_cdr_p1_acdr_b_en_idn:1;
        RBus_UInt32  reg_cdr_p1_acdr_b_en_lpf_c:1;
        RBus_UInt32  reg_cdr_p1_acdr_b_en_lpf_r:1;
        RBus_UInt32  reg_cdr_p1_acdr_b_vco_coarse_i:4;
        RBus_UInt32  reg_cdr_p1_acdr_b_vco_fine_i:4;
        RBus_UInt32  reg_cdr_p1_acdr_b_cp_cap_sel:2;
        RBus_UInt32  reg_cdr_p1_acdr_b_cs_cap_sel:2;
        RBus_UInt32  reg_cdr_p1_acdr_b_lfrs_sel:3;
        RBus_UInt32  reg_cdr_p1_acdr_b_icp_sel:4;
    };
}hdmirx_2p1_phy_p1_acdr_b_cdr_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_cdr_p1_acdr_ck:6;
        RBus_UInt32  reg_cdr_p1_acdr_ck_sel_idn:4;
        RBus_UInt32  reg_cdr_p1_acdr_ck_en_idn:1;
        RBus_UInt32  reg_cdr_p1_acdr_ck_en_lpf_c:1;
        RBus_UInt32  reg_cdr_p1_acdr_ck_en_lpf_r:1;
        RBus_UInt32  reg_cdr_p1_acdr_ck_vco_coarse_i:4;
        RBus_UInt32  reg_cdr_p1_acdr_ck_vco_fine_i:4;
        RBus_UInt32  reg_cdr_p1_acdr_ck_cp_cap_sel:2;
        RBus_UInt32  reg_cdr_p1_acdr_ck_cs_cap_sel:2;
        RBus_UInt32  reg_cdr_p1_acdr_ck_lfrs_sel:3;
        RBus_UInt32  reg_cdr_p1_acdr_ck_icp_sel:4;
    };
}hdmirx_2p1_phy_p1_acdr_ck_cdr_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_manual_p1_acdr_r:4;
        RBus_UInt32  reg_p1_r_pll_to_acdr_rdy_manual:1;
        RBus_UInt32  reg_p1_r_pll_to_acdr_manual_en:1;
        RBus_UInt32  reg_manual_p1_acdr_r_sel_idn:4;
        RBus_UInt32  reg_manual_p1_acdr_r_en_idn:1;
        RBus_UInt32  reg_manual_p1_acdr_r_en_lpf_c:1;
        RBus_UInt32  reg_manual_p1_acdr_r_en_lpf_r:1;
        RBus_UInt32  reg_manual_p1_acdr_r_vco_coarse_i:4;
        RBus_UInt32  reg_manual_p1_acdr_r_vco_fine_i:4;
        RBus_UInt32  reg_manual_p1_acdr_r_cp_cap_sel:2;
        RBus_UInt32  reg_manual_p1_acdr_r_cs_cap_sel:2;
        RBus_UInt32  reg_manual_p1_acdr_r_lfrs_sel:3;
        RBus_UInt32  reg_manual_p1_acdr_r_icp_sel:4;
    };
}hdmirx_2p1_phy_p1_acdr_r_manual_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_manual_p1_acdr_g:4;
        RBus_UInt32  reg_p1_g_pll_to_acdr_rdy_manual:1;
        RBus_UInt32  reg_p1_g_pll_to_acdr_manual_en:1;
        RBus_UInt32  reg_manual_p1_acdr_g_sel_idn:4;
        RBus_UInt32  reg_manual_p1_acdr_g_en_idn:1;
        RBus_UInt32  reg_manual_p1_acdr_g_en_lpf_c:1;
        RBus_UInt32  reg_manual_p1_acdr_g_en_lpf_r:1;
        RBus_UInt32  reg_manual_p1_acdr_g_vco_coarse_i:4;
        RBus_UInt32  reg_manual_p1_acdr_g_vco_fine_i:4;
        RBus_UInt32  reg_manual_p1_acdr_g_cp_cap_sel:2;
        RBus_UInt32  reg_manual_p1_acdr_g_cs_cap_sel:2;
        RBus_UInt32  reg_manual_p1_acdr_g_lfrs_sel:3;
        RBus_UInt32  reg_manual_p1_acdr_g_icp_sel:4;
    };
}hdmirx_2p1_phy_p1_acdr_g_manual_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_manual_p1_acdr_b:4;
        RBus_UInt32  reg_p1_b_pll_to_acdr_rdy_manual:1;
        RBus_UInt32  reg_p1_b_pll_to_acdr_manual_en:1;
        RBus_UInt32  reg_manual_p1_acdr_b_sel_idn:4;
        RBus_UInt32  reg_manual_p1_acdr_b_en_idn:1;
        RBus_UInt32  reg_manual_p1_acdr_b_en_lpf_c:1;
        RBus_UInt32  reg_manual_p1_acdr_b_en_lpf_r:1;
        RBus_UInt32  reg_manual_p1_acdr_b_vco_coarse_i:4;
        RBus_UInt32  reg_manual_p1_acdr_b_vco_fine_i:4;
        RBus_UInt32  reg_manual_p1_acdr_b_cp_cap_sel:2;
        RBus_UInt32  reg_manual_p1_acdr_b_cs_cap_sel:2;
        RBus_UInt32  reg_manual_p1_acdr_b_lfrs_sel:3;
        RBus_UInt32  reg_manual_p1_acdr_b_icp_sel:4;
    };
}hdmirx_2p1_phy_p1_acdr_b_manual_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reserved_manual_p1_acdr_ck:4;
        RBus_UInt32  reg_p1_ck_pll_to_acdr_rdy_manual:1;
        RBus_UInt32  reg_p1_ck_pll_to_acdr_manual_en:1;
        RBus_UInt32  reg_manual_p1_acdr_ck_sel_idn:4;
        RBus_UInt32  reg_manual_p1_acdr_ck_en_idn:1;
        RBus_UInt32  reg_manual_p1_acdr_ck_en_lpf_c:1;
        RBus_UInt32  reg_manual_p1_acdr_ck_en_lpf_r:1;
        RBus_UInt32  reg_manual_p1_acdr_ck_vco_coarse_i:4;
        RBus_UInt32  reg_manual_p1_acdr_ck_vco_fine_i:4;
        RBus_UInt32  reg_manual_p1_acdr_ck_cp_cap_sel:2;
        RBus_UInt32  reg_manual_p1_acdr_ck_cs_cap_sel:2;
        RBus_UInt32  reg_manual_p1_acdr_ck_lfrs_sel:3;
        RBus_UInt32  reg_manual_p1_acdr_ck_icp_sel:4;
    };
}hdmirx_2p1_phy_p1_acdr_ck_manual_config_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_infifo_cnt:3;
        RBus_UInt32  reg_p0_data_order:1;
        RBus_UInt32  reg_p0_bypass_sdm_int:1;
        RBus_UInt32  reg_p0_ki:3;
        RBus_UInt32  reg_p0_kp:8;
        RBus_UInt32  reg_p0_kd:1;
        RBus_UInt32  reg_p0_rate_sel:3;
        RBus_UInt32  reg_p0_shift_inv_b:1;
        RBus_UInt32  reg_p0_shift_inv_g:1;
        RBus_UInt32  reg_p0_shift_inv_r:1;
        RBus_UInt32  reg_p0_cdr_ckinv_b:1;
        RBus_UInt32  reg_p0_cdr_ckinv_g:1;
        RBus_UInt32  reg_p0_cdr_ckinv_r:1;
        RBus_UInt32  p0_b_cdr_rst_n:1;
        RBus_UInt32  p0_g_cdr_rst_n:1;
        RBus_UInt32  p0_r_cdr_rst_n:1;
        RBus_UInt32  p0_b_dig_rst_n:1;
        RBus_UInt32  p0_g_dig_rst_n:1;
        RBus_UInt32  p0_r_dig_rst_n:1;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_dyn_kp_en:1;
        RBus_UInt32  reg_p0_pi_m_mode_r:1;
        RBus_UInt32  reg_p0_edge_out:1;
        RBus_UInt32  reg_p0_ercnt_en:1;
        RBus_UInt32  reg_p0_testout_sel:2;
        RBus_UInt32  reg_p0_acc2_manual:1;
        RBus_UInt32  reg_p0_squ_tri:1;
        RBus_UInt32  reg_p0_acc2_period:10;
        RBus_UInt32  reg_p0_int_init:14;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  reg_p0_timer_ber:5;
        RBus_UInt32  reg_p0_timer_eq:5;
        RBus_UInt32  reg_p0_timer_lpf:5;
        RBus_UInt32  res2:4;
        RBus_UInt32  reg_p0_st_mode:1;
        RBus_UInt32  reg_p0_en_m_value:4;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  reg_p0_pi_m_mode_ck:1;
        RBus_UInt32  reg_p0_pi_m_mode_b:1;
        RBus_UInt32  reg_p0_pi_m_mode_g:1;
        RBus_UInt32  reg_p0_shift_inv_ck:1;
        RBus_UInt32  reg_p0_cdr_ckinv_ck:1;
        RBus_UInt32  p0_ck_cdr_rst_n:1;
        RBus_UInt32  p0_ck_dig_rst_n:1;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_en_ro_b:4;
        RBus_UInt32  p0_st_ro_b:5;
        RBus_UInt32  res1:1;
        RBus_UInt32  p0_en_ro_g:4;
        RBus_UInt32  p0_st_ro_g:5;
        RBus_UInt32  res2:1;
        RBus_UInt32  p0_en_ro_r:4;
        RBus_UInt32  p0_st_ro_r:5;
        RBus_UInt32  res3:3;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_er_count_b:10;
        RBus_UInt32  p0_er_count_g:10;
        RBus_UInt32  p0_er_count_r:10;
        RBus_UInt32  res1:2;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_er_count_ck:10;
        RBus_UInt32  p0_en_ro_ck:4;
        RBus_UInt32  p0_st_ro_ck:5;
        RBus_UInt32  res1:13;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_wdog_rst_n:1;
        RBus_UInt32  p0_pll_wd_rst_wc:1;
        RBus_UInt32  p0_pll_wd_ckrdy_ro:1;
        RBus_UInt32  reg_p0_en_data_manual_l0:1;
        RBus_UInt32  reg_p0_en_eqen_manual_l0:1;
        RBus_UInt32  reg_p0_bypass_data_rdy_l0:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy_l0:1;
        RBus_UInt32  reg_p0_acdr_l0_en:1;
        RBus_UInt32  reg_p0_pll_wd_time_rdy:2;
        RBus_UInt32  reg_p0_pll_wd_rst_wid:2;
        RBus_UInt32  reg_p0_pll_wd_en:1;
        RBus_UInt32  reg_p0_pll_wd_base_time:3;
        RBus_UInt32  reg_p0_order:1;
        RBus_UInt32  reg_p0_eqen_rdy_time:4;
        RBus_UInt32  reg_p0_en_data_manual:1;
        RBus_UInt32  reg_p0_en_eqen_manual:1;
        RBus_UInt32  reg_p0_en_clkout_manual:1;
        RBus_UInt32  reg_p0_data_rdy_time:4;
        RBus_UInt32  reg_p0_bypass_pi:1;
        RBus_UInt32  reg_p0_bypass_data_rdy:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy:1;
        RBus_UInt32  reg_p0_bypass_clk_rdy:1;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_n_code:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  reg_p0_f_code:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_p0_wd_sdm_en:1;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_en_data_manual_l1:1;
        RBus_UInt32  reg_p0_en_eqen_manual_l1:1;
        RBus_UInt32  reg_p0_bypass_data_rdy_l1:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy_l1:1;
        RBus_UInt32  reg_p0_acdr_l1_en:1;
        RBus_UInt32  reg_p0_en_data_manual_l2:1;
        RBus_UInt32  reg_p0_en_eqen_manual_l2:1;
        RBus_UInt32  reg_p0_bypass_data_rdy_l2:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy_l2:1;
        RBus_UInt32  reg_p0_acdr_l2_en:1;
        RBus_UInt32  reg_p0_en_data_manual_l3:1;
        RBus_UInt32  reg_p0_en_eqen_manual_l3:1;
        RBus_UInt32  reg_p0_bypass_data_rdy_l3:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy_l3:1;
        RBus_UInt32  reg_p0_acdr_l3_en:1;
        RBus_UInt32  res1:17;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_cp2adp_en:1;
        RBus_UInt32  reg_p0_r_stable_time_mode:1;
        RBus_UInt32  reg_p0_r_bypass_k_band_mode:1;
        RBus_UInt32  reg_p0_r_divide_num:8;
        RBus_UInt32  reg_p0_r_vco_coarse:7;
        RBus_UInt32  reg_p0_r_calib_late:1;
        RBus_UInt32  reg_p0_r_calib_manual:1;
        RBus_UInt32  reg_p0_r_calib_time:3;
        RBus_UInt32  reg_p0_r_adp_time:5;
        RBus_UInt32  reg_p0_r_adap_eq_off:1;
        RBus_UInt32  reg_p0_r_cp_en_manual:1;
        RBus_UInt32  reg_p0_r_adp_en_manual:1;
        RBus_UInt32  reg_p0_r_auto_mode:1;
    };
}hdmirx_2p1_phy_p0_fld_r_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_lock_dn_limit:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p0_r_lock_up_limit:12;
        RBus_UInt32  reg_p0_r_cp2adp_time:4;
    };
}hdmirx_2p1_phy_p0_fld_r_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_unstable_flg:1;
        RBus_UInt32  reg_p0_r_calib_reset_sel:1;
        RBus_UInt32  reg_p0_r_vc_sel:2;
        RBus_UInt32  reg_p0_r_cdr_c:2;
        RBus_UInt32  reg_p0_r_cdr_r:6;
        RBus_UInt32  reg_p0_r_cdr_cp:20;
    };
}hdmirx_2p1_phy_p0_fld_r_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_init_time:3;
        RBus_UInt32  reg_p0_r_cp_time:5;
        RBus_UInt32  reg_p0_r_coarse_lock_dn_limit:12;
        RBus_UInt32  reg_p0_r_coarse_lock_up_limit:12;
    };
}hdmirx_2p1_phy_p0_fld_r_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_r_acdr_fine_tune_start:1;
        RBus_UInt32  p0_r_fld_rstb:1;
        RBus_UInt32  reg_p0_r_timer_6:5;
        RBus_UInt32  reg_p0_r_timer_5:1;
        RBus_UInt32  reg_p0_r_vco_fine_init:4;
        RBus_UInt32  reg_p0_r_vco_coarse_init:4;
        RBus_UInt32  reg_p0_r_bypass_coarse_k_mode:1;
        RBus_UInt32  reg_p0_r_vco_fine_time_sel:2;
        RBus_UInt32  reg_p0_r_xtal_24m_en:1;
        RBus_UInt32  reg_p0_r_vco_fine_manual:4;
        RBus_UInt32  reg_p0_r_vco_coarse_manual:4;
        RBus_UInt32  reg_p0_r_coarse_calib_manual:1;
        RBus_UInt32  res1:3;
    };
}hdmirx_2p1_phy_p0_fld_r_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_timer_4:5;
        RBus_UInt32  reg_p0_r_vc_chg_time:3;
        RBus_UInt32  reg_p0_r_coarse_init:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p0_r_old_mode:1;
        RBus_UInt32  reg_p0_r_slope_band:5;
        RBus_UInt32  reg_p0_r_slope_manual:1;
        RBus_UInt32  reg_p0_r_rxidle_bypass:1;
        RBus_UInt32  reg_p0_r_pfd_bypass:1;
        RBus_UInt32  reg_p0_r_pfd_time:5;
        RBus_UInt32  reg_p0_r_pfd_en_manual:1;
        RBus_UInt32  reg_p0_r_start_en_manual:1;
    };
}hdmirx_2p1_phy_p0_fld_r_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_r_start_en:1;
        RBus_UInt32  p0_r_calib_ok:1;
        RBus_UInt32  p0_r_coarse_calib_ok:1;
        RBus_UInt32  p0_r_coarse_too_slow_reg:1;
        RBus_UInt32  p0_r_coarse_too_fast_reg:1;
        RBus_UInt32  reg_p0_r_cp_time_2:5;
        RBus_UInt32  p0_r_fine_fsm_reg:7;
        RBus_UInt32  p0_r_pfd_en_fsm_reg:1;
        RBus_UInt32  p0_r_coarse_fsm_reg:7;
        RBus_UInt32  p0_r_cp_en_fsm_reg:1;
        RBus_UInt32  p0_r_adp_en_fsm_reg:1;
        RBus_UInt32  p0_r_fld_st_reg:5;
    };
}hdmirx_2p1_phy_p0_fld_r_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_cp2adp_en:1;
        RBus_UInt32  reg_p0_g_stable_time_mode:1;
        RBus_UInt32  reg_p0_g_bypass_k_band_mode:1;
        RBus_UInt32  reg_p0_g_divide_num:8;
        RBus_UInt32  reg_p0_g_vco_coarse:7;
        RBus_UInt32  reg_p0_g_calib_late:1;
        RBus_UInt32  reg_p0_g_calib_manual:1;
        RBus_UInt32  reg_p0_g_calib_time:3;
        RBus_UInt32  reg_p0_g_adp_time:5;
        RBus_UInt32  reg_p0_g_adap_eq_off:1;
        RBus_UInt32  reg_p0_g_cp_en_manual:1;
        RBus_UInt32  reg_p0_g_adp_en_manual:1;
        RBus_UInt32  reg_p0_g_auto_mode:1;
    };
}hdmirx_2p1_phy_p0_fld_g_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_lock_dn_limit:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p0_g_lock_up_limit:12;
        RBus_UInt32  reg_p0_g_cp2adp_time:4;
    };
}hdmirx_2p1_phy_p0_fld_g_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_unstable_flg:1;
        RBus_UInt32  reg_p0_g_calib_reset_sel:1;
        RBus_UInt32  reg_p0_g_vc_sel:2;
        RBus_UInt32  reg_p0_g_cdr_c:2;
        RBus_UInt32  reg_p0_g_cdr_r:6;
        RBus_UInt32  reg_p0_g_cdr_cp:20;
    };
}hdmirx_2p1_phy_p0_fld_g_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_init_time:3;
        RBus_UInt32  reg_p0_g_cp_time:5;
        RBus_UInt32  reg_p0_g_coarse_lock_dn_limit:12;
        RBus_UInt32  reg_p0_g_coarse_lock_up_limit:12;
    };
}hdmirx_2p1_phy_p0_fld_g_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_g_acdr_fine_tune_start:1;
        RBus_UInt32  p0_g_fld_rstb:1;
        RBus_UInt32  reg_p0_g_timer_6:5;
        RBus_UInt32  reg_p0_g_timer_5:1;
        RBus_UInt32  reg_p0_g_vco_fine_init:4;
        RBus_UInt32  reg_p0_g_vco_coarse_init:4;
        RBus_UInt32  reg_p0_g_bypass_coarse_k_mode:1;
        RBus_UInt32  reg_p0_g_vco_fine_time_sel:2;
        RBus_UInt32  reg_p0_g_xtal_24m_en:1;
        RBus_UInt32  reg_p0_g_vco_fine_manual:4;
        RBus_UInt32  reg_p0_g_vco_coarse_manual:4;
        RBus_UInt32  reg_p0_g_coarse_calib_manual:1;
        RBus_UInt32  res1:3;
    };
}hdmirx_2p1_phy_p0_fld_g_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_timer_4:5;
        RBus_UInt32  reg_p0_g_vc_chg_time:3;
        RBus_UInt32  reg_p0_g_coarse_init:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p0_g_old_mode:1;
        RBus_UInt32  reg_p0_g_slope_band:5;
        RBus_UInt32  reg_p0_g_slope_manual:1;
        RBus_UInt32  reg_p0_g_rxidle_bypass:1;
        RBus_UInt32  reg_p0_g_pfd_bypass:1;
        RBus_UInt32  reg_p0_g_pfd_time:5;
        RBus_UInt32  reg_p0_g_pfd_en_manual:1;
        RBus_UInt32  reg_p0_g_start_en_manual:1;
    };
}hdmirx_2p1_phy_p0_fld_g_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_g_start_en:1;
        RBus_UInt32  p0_g_calib_ok:1;
        RBus_UInt32  p0_g_coarse_calib_ok:1;
        RBus_UInt32  p0_g_coarse_too_slow_reg:1;
        RBus_UInt32  p0_g_coarse_too_fast_reg:1;
        RBus_UInt32  reg_p0_g_cp_time_2:5;
        RBus_UInt32  p0_g_fine_fsm_reg:7;
        RBus_UInt32  p0_g_pfd_en_fsm_reg:1;
        RBus_UInt32  p0_g_coarse_fsm_reg:7;
        RBus_UInt32  p0_g_cp_en_fsm_reg:1;
        RBus_UInt32  p0_g_adp_en_fsm_reg:1;
        RBus_UInt32  p0_g_fld_st_reg:5;
    };
}hdmirx_2p1_phy_p0_fld_g_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_cp2adp_en:1;
        RBus_UInt32  reg_p0_b_stable_time_mode:1;
        RBus_UInt32  reg_p0_b_bypass_k_band_mode:1;
        RBus_UInt32  reg_p0_b_divide_num:8;
        RBus_UInt32  reg_p0_b_vco_coarse:7;
        RBus_UInt32  reg_p0_b_calib_late:1;
        RBus_UInt32  reg_p0_b_calib_manual:1;
        RBus_UInt32  reg_p0_b_calib_time:3;
        RBus_UInt32  reg_p0_b_adp_time:5;
        RBus_UInt32  reg_p0_b_adap_eq_off:1;
        RBus_UInt32  reg_p0_b_cp_en_manual:1;
        RBus_UInt32  reg_p0_b_adp_en_manual:1;
        RBus_UInt32  reg_p0_b_auto_mode:1;
    };
}hdmirx_2p1_phy_p0_fld_b_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_lock_dn_limit:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p0_b_lock_up_limit:12;
        RBus_UInt32  reg_p0_b_cp2adp_time:4;
    };
}hdmirx_2p1_phy_p0_fld_b_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_unstable_flg:1;
        RBus_UInt32  reg_p0_b_calib_reset_sel:1;
        RBus_UInt32  reg_p0_b_vc_sel:2;
        RBus_UInt32  reg_p0_b_cdr_c:2;
        RBus_UInt32  reg_p0_b_cdr_r:6;
        RBus_UInt32  reg_p0_b_cdr_cp:20;
    };
}hdmirx_2p1_phy_p0_fld_b_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_init_time:3;
        RBus_UInt32  reg_p0_b_cp_time:5;
        RBus_UInt32  reg_p0_b_coarse_lock_dn_limit:12;
        RBus_UInt32  reg_p0_b_coarse_lock_up_limit:12;
    };
}hdmirx_2p1_phy_p0_fld_b_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_b_acdr_fine_tune_start:1;
        RBus_UInt32  p0_b_fld_rstb:1;
        RBus_UInt32  reg_p0_b_timer_6:5;
        RBus_UInt32  reg_p0_b_timer_5:1;
        RBus_UInt32  reg_p0_b_vco_fine_init:4;
        RBus_UInt32  reg_p0_b_vco_coarse_init:4;
        RBus_UInt32  reg_p0_b_bypass_coarse_k_mode:1;
        RBus_UInt32  reg_p0_b_vco_fine_time_sel:2;
        RBus_UInt32  reg_p0_b_xtal_24m_en:1;
        RBus_UInt32  reg_p0_b_vco_fine_manual:4;
        RBus_UInt32  reg_p0_b_vco_coarse_manual:4;
        RBus_UInt32  reg_p0_b_coarse_calib_manual:1;
        RBus_UInt32  res1:3;
    };
}hdmirx_2p1_phy_p0_fld_b_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_timer_4:5;
        RBus_UInt32  reg_p0_b_vc_chg_time:3;
        RBus_UInt32  reg_p0_b_coarse_init:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p0_b_old_mode:1;
        RBus_UInt32  reg_p0_b_slope_band:5;
        RBus_UInt32  reg_p0_b_slope_manual:1;
        RBus_UInt32  reg_p0_b_rxidle_bypass:1;
        RBus_UInt32  reg_p0_b_pfd_bypass:1;
        RBus_UInt32  reg_p0_b_pfd_time:5;
        RBus_UInt32  reg_p0_b_pfd_en_manual:1;
        RBus_UInt32  reg_p0_b_start_en_manual:1;
    };
}hdmirx_2p1_phy_p0_fld_b_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_b_start_en:1;
        RBus_UInt32  p0_b_calib_ok:1;
        RBus_UInt32  p0_b_coarse_calib_ok:1;
        RBus_UInt32  p0_b_coarse_too_slow_reg:1;
        RBus_UInt32  p0_b_coarse_too_fast_reg:1;
        RBus_UInt32  reg_p0_b_cp_time_2:5;
        RBus_UInt32  p0_b_fine_fsm_reg:7;
        RBus_UInt32  p0_b_pfd_en_fsm_reg:1;
        RBus_UInt32  p0_b_coarse_fsm_reg:7;
        RBus_UInt32  p0_b_cp_en_fsm_reg:1;
        RBus_UInt32  p0_b_adp_en_fsm_reg:1;
        RBus_UInt32  p0_b_fld_st_reg:5;
    };
}hdmirx_2p1_phy_p0_fld_b_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_cp2adp_en:1;
        RBus_UInt32  reg_p0_ck_stable_time_mode:1;
        RBus_UInt32  reg_p0_ck_bypass_k_band_mode:1;
        RBus_UInt32  reg_p0_ck_divide_num:8;
        RBus_UInt32  reg_p0_ck_vco_coarse:7;
        RBus_UInt32  reg_p0_ck_calib_late:1;
        RBus_UInt32  reg_p0_ck_calib_manual:1;
        RBus_UInt32  reg_p0_ck_calib_time:3;
        RBus_UInt32  reg_p0_ck_adp_time:5;
        RBus_UInt32  reg_p0_ck_adap_eq_off:1;
        RBus_UInt32  reg_p0_ck_cp_en_manual:1;
        RBus_UInt32  reg_p0_ck_adp_en_manual:1;
        RBus_UInt32  reg_p0_ck_auto_mode:1;
    };
}hdmirx_2p1_phy_p0_fld_ck_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_lock_dn_limit:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p0_ck_lock_up_limit:12;
        RBus_UInt32  reg_p0_ck_cp2adp_time:4;
    };
}hdmirx_2p1_phy_p0_fld_ck_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_unstable_flg:1;
        RBus_UInt32  reg_p0_ck_calib_reset_sel:1;
        RBus_UInt32  reg_p0_ck_vc_sel:2;
        RBus_UInt32  reg_p0_ck_cdr_c:2;
        RBus_UInt32  reg_p0_ck_cdr_r:6;
        RBus_UInt32  reg_p0_ck_cdr_cp:20;
    };
}hdmirx_2p1_phy_p0_fld_ck_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_init_time:3;
        RBus_UInt32  reg_p0_ck_cp_time:5;
        RBus_UInt32  reg_p0_ck_coarse_lock_dn_limit:12;
        RBus_UInt32  reg_p0_ck_coarse_lock_up_limit:12;
    };
}hdmirx_2p1_phy_p0_fld_ck_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_ck_acdr_fine_tune_start:1;
        RBus_UInt32  p0_ck_fld_rstb:1;
        RBus_UInt32  reg_p0_ck_timer_6:5;
        RBus_UInt32  reg_p0_ck_timer_5:1;
        RBus_UInt32  reg_p0_ck_vco_fine_init:4;
        RBus_UInt32  reg_p0_ck_vco_coarse_init:4;
        RBus_UInt32  reg_p0_ck_bypass_coarse_k_mode:1;
        RBus_UInt32  reg_p0_ck_vco_fine_time_sel:2;
        RBus_UInt32  reg_p0_ck_xtal_24m_en:1;
        RBus_UInt32  reg_p0_ck_vco_fine_manual:4;
        RBus_UInt32  reg_p0_ck_vco_coarse_manual:4;
        RBus_UInt32  reg_p0_ck_coarse_calib_manual:1;
        RBus_UInt32  res1:3;
    };
}hdmirx_2p1_phy_p0_fld_ck_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_timer_4:5;
        RBus_UInt32  reg_p0_ck_vc_chg_time:3;
        RBus_UInt32  reg_p0_ck_coarse_init:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p0_ck_old_mode:1;
        RBus_UInt32  reg_p0_ck_slope_band:5;
        RBus_UInt32  reg_p0_ck_slope_manual:1;
        RBus_UInt32  reg_p0_ck_rxidle_bypass:1;
        RBus_UInt32  reg_p0_ck_pfd_bypass:1;
        RBus_UInt32  reg_p0_ck_pfd_time:5;
        RBus_UInt32  reg_p0_ck_pfd_en_manual:1;
        RBus_UInt32  reg_p0_ck_start_en_manual:1;
    };
}hdmirx_2p1_phy_p0_fld_ck_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_ck_start_en:1;
        RBus_UInt32  p0_ck_calib_ok:1;
        RBus_UInt32  p0_ck_coarse_calib_ok:1;
        RBus_UInt32  p0_ck_coarse_too_slow_reg:1;
        RBus_UInt32  p0_ck_coarse_too_fast_reg:1;
        RBus_UInt32  reg_p0_ck_cp_time_2:5;
        RBus_UInt32  p0_ck_fine_fsm_reg:7;
        RBus_UInt32  p0_ck_pfd_en_fsm_reg:1;
        RBus_UInt32  p0_ck_coarse_fsm_reg:7;
        RBus_UInt32  p0_ck_cp_en_fsm_reg:1;
        RBus_UInt32  p0_ck_adp_en_fsm_reg:1;
        RBus_UInt32  p0_ck_fld_st_reg:5;
    };
}hdmirx_2p1_phy_p0_fld_ck_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  p0_acdr_ck_acdr_en_afn:1;
        RBus_UInt32  p0_acdr_ck_vco_encap:2;
        RBus_UInt32  res2:5;
        RBus_UInt32  p0_acdr_b_acdr_en_afn:1;
        RBus_UInt32  p0_acdr_b_vco_encap:2;
        RBus_UInt32  res3:5;
        RBus_UInt32  p0_acdr_g_acdr_en_afn:1;
        RBus_UInt32  p0_acdr_g_vco_encap:2;
        RBus_UInt32  res4:5;
        RBus_UInt32  p0_acdr_r_acdr_en_afn:1;
        RBus_UInt32  p0_acdr_r_vco_encap:2;
    };
}hdmirx_2p1_phy_p0_misc_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p0_ck_md_reserved:4;
        RBus_UInt32  reg_p0_ck_error_limit:5;
        RBus_UInt32  reg_p0_ck_md_adj:4;
        RBus_UInt32  reg_p0_ck_md_auto:1;
        RBus_UInt32  reg_p0_ck_md_sel:2;
        RBus_UInt32  reg_p0_ck_md_debounce:7;
        RBus_UInt32  reg_p0_ck_md_threshold:6;
        RBus_UInt32  p0_ck_md_rstb:1;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p0_dig_debug_sel:4;
        RBus_UInt32  p0_clock_unstable_flag:1;
        RBus_UInt32  p0_ck_md_ok:1;
        RBus_UInt32  p0_unstable_count:5;
        RBus_UInt32  p0_ck_rate:4;
        RBus_UInt32  p0_ck_md_count:13;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_dig_reserved_3:8;
        RBus_UInt32  reg_p0_dig_reserved_2:8;
        RBus_UInt32  reg_p0_dig_reserved_1:8;
        RBus_UInt32  reg_p0_dig_reserved_0:8;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_r:32;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_g:32;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_b:32;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_ck:32;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_err_count_r:8;
        RBus_UInt32  p0_pkt_count_r:8;
        RBus_UInt32  reg_p0_pattern_sel_r:1;
        RBus_UInt32  reg_p0_prbs_invs_r:1;
        RBus_UInt32  reg_p0_enable_one_zero_r:1;
        RBus_UInt32  res1:13;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_err_count_g:8;
        RBus_UInt32  p0_pkt_count_g:8;
        RBus_UInt32  reg_p0_pattern_sel_g:1;
        RBus_UInt32  reg_p0_prbs_invs_g:1;
        RBus_UInt32  reg_p0_enable_one_zero_g:1;
        RBus_UInt32  res1:13;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_err_count_b:8;
        RBus_UInt32  p0_pkt_count_b:8;
        RBus_UInt32  reg_p0_pattern_sel_b:1;
        RBus_UInt32  reg_p0_prbs_invs_b:1;
        RBus_UInt32  reg_p0_enable_one_zero_b:1;
        RBus_UInt32  res1:13;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_err_count_ck:8;
        RBus_UInt32  p0_pkt_count_ck:8;
        RBus_UInt32  reg_p0_pattern_sel_ck:1;
        RBus_UInt32  reg_p0_prbs_invs_ck:1;
        RBus_UInt32  reg_p0_enable_one_zero_ck:1;
        RBus_UInt32  res1:13;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_hdmi21:1;
        RBus_UInt32  p0_ck_fifo_rst_n:1;
        RBus_UInt32  p0_b_fifo_rst_n:1;
        RBus_UInt32  p0_g_fifo_rst_n:1;
        RBus_UInt32  p0_r_fifo_rst_n:1;
        RBus_UInt32  reg_p0_fifo_ckinv_ck:1;
        RBus_UInt32  reg_p0_fifo_ckinv_b:1;
        RBus_UInt32  reg_p0_fifo_ckinv_g:1;
        RBus_UInt32  reg_p0_fifo_ckinv_r:1;
        RBus_UInt32  reg_p0_4b18b_data_order:1;
        RBus_UInt32  reg_p0_4b18b_mode:1;
        RBus_UInt32  reg_p0_infifo2_cnt:3;
        RBus_UInt32  reg_dphy_debug_sel_p0:1;
        RBus_UInt32  res1:17;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_err_count_r_hdmi21:8;
        RBus_UInt32  p0_pkt_count_r_hdmi21:8;
        RBus_UInt32  reg_p0_pattern_sel_r_hdmi21:1;
        RBus_UInt32  reg_p0_prbs_invs_r_hdmi21:1;
        RBus_UInt32  reg_p0_enable_one_zero_r_hdmi21:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p0_en_bec_read_r:1;
        RBus_UInt32  reg_p0_en_bec_acc_r:1;
        RBus_UInt32  reg_p0_101_enable_r:1;
        RBus_UInt32  reg_p0_001_enable_r:1;
        RBus_UInt32  p0_acc_read_out_r:8;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_err_count_g_hdmi21:8;
        RBus_UInt32  p0_pkt_count_g_hdmi21:8;
        RBus_UInt32  reg_p0_pattern_sel_g_hdmi21:1;
        RBus_UInt32  reg_p0_prbs_invs_g_hdmi21:1;
        RBus_UInt32  reg_p0_enable_one_zero_g_hdmi21:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p0_en_bec_read_g:1;
        RBus_UInt32  reg_p0_en_bec_acc_g:1;
        RBus_UInt32  reg_p0_101_enable_g:1;
        RBus_UInt32  reg_p0_001_enable_g:1;
        RBus_UInt32  p0_acc_read_out_g:8;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_err_count_b_hdmi21:8;
        RBus_UInt32  p0_pkt_count_b_hdmi21:8;
        RBus_UInt32  reg_p0_pattern_sel_b_hdmi21:1;
        RBus_UInt32  reg_p0_prbs_invs_b_hdmi21:1;
        RBus_UInt32  reg_p0_enable_one_zero_b_hdmi21:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p0_en_bec_read_b:1;
        RBus_UInt32  reg_p0_en_bec_acc_b:1;
        RBus_UInt32  reg_p0_101_enable_b:1;
        RBus_UInt32  reg_p0_001_enable_b:1;
        RBus_UInt32  p0_acc_read_out_b:8;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_err_count_ck_hdmi21:8;
        RBus_UInt32  p0_pkt_count_ck_hdmi21:8;
        RBus_UInt32  reg_p0_pattern_sel_ck_hdmi21:1;
        RBus_UInt32  reg_p0_prbs_invs_ck_hdmi21:1;
        RBus_UInt32  reg_p0_enable_one_zero_ck_hdmi21:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p0_en_bec_read_ck:1;
        RBus_UInt32  reg_p0_en_bec_acc_ck:1;
        RBus_UInt32  reg_p0_101_enable_ck:1;
        RBus_UInt32  reg_p0_001_enable_ck:1;
        RBus_UInt32  p0_acc_read_out_ck:8;
    };
}hdmirx_2p1_phy_p0_hd21_y1_regd25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_infifo_cnt:3;
        RBus_UInt32  reg_p1_data_order:1;
        RBus_UInt32  reg_p1_bypass_sdm_int:1;
        RBus_UInt32  reg_p1_ki:3;
        RBus_UInt32  reg_p1_kp:8;
        RBus_UInt32  reg_p1_kd:1;
        RBus_UInt32  reg_p1_rate_sel:3;
        RBus_UInt32  reg_p1_shift_inv_b:1;
        RBus_UInt32  reg_p1_shift_inv_g:1;
        RBus_UInt32  reg_p1_shift_inv_r:1;
        RBus_UInt32  reg_p1_cdr_ckinv_b:1;
        RBus_UInt32  reg_p1_cdr_ckinv_g:1;
        RBus_UInt32  reg_p1_cdr_ckinv_r:1;
        RBus_UInt32  p1_b_cdr_rst_n:1;
        RBus_UInt32  p1_g_cdr_rst_n:1;
        RBus_UInt32  p1_r_cdr_rst_n:1;
        RBus_UInt32  p1_b_dig_rst_n:1;
        RBus_UInt32  p1_g_dig_rst_n:1;
        RBus_UInt32  p1_r_dig_rst_n:1;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_dyn_kp_en:1;
        RBus_UInt32  reg_p1_pi_m_mode_r:1;
        RBus_UInt32  reg_p1_edge_out:1;
        RBus_UInt32  reg_p1_ercnt_en:1;
        RBus_UInt32  reg_p1_testout_sel:2;
        RBus_UInt32  reg_p1_acc2_manual:1;
        RBus_UInt32  reg_p1_squ_tri:1;
        RBus_UInt32  reg_p1_acc2_period:10;
        RBus_UInt32  reg_p1_int_init:14;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  reg_p1_timer_ber:5;
        RBus_UInt32  reg_p1_timer_eq:5;
        RBus_UInt32  reg_p1_timer_lpf:5;
        RBus_UInt32  res2:4;
        RBus_UInt32  reg_p1_st_mode:1;
        RBus_UInt32  reg_p1_en_m_value:4;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  reg_p1_pi_m_mode_ck:1;
        RBus_UInt32  reg_p1_pi_m_mode_b:1;
        RBus_UInt32  reg_p1_pi_m_mode_g:1;
        RBus_UInt32  reg_p1_shift_inv_ck:1;
        RBus_UInt32  reg_p1_cdr_ckinv_ck:1;
        RBus_UInt32  p1_ck_cdr_rst_n:1;
        RBus_UInt32  p1_ck_dig_rst_n:1;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_en_ro_b:4;
        RBus_UInt32  p1_st_ro_b:5;
        RBus_UInt32  res1:1;
        RBus_UInt32  p1_en_ro_g:4;
        RBus_UInt32  p1_st_ro_g:5;
        RBus_UInt32  res2:1;
        RBus_UInt32  p1_en_ro_r:4;
        RBus_UInt32  p1_st_ro_r:5;
        RBus_UInt32  res3:3;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_er_count_b:10;
        RBus_UInt32  p1_er_count_g:10;
        RBus_UInt32  p1_er_count_r:10;
        RBus_UInt32  res1:2;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_er_count_ck:10;
        RBus_UInt32  p1_en_ro_ck:4;
        RBus_UInt32  p1_st_ro_ck:5;
        RBus_UInt32  res1:13;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_wdog_rst_n:1;
        RBus_UInt32  p1_pll_wd_rst_wc:1;
        RBus_UInt32  p1_pll_wd_ckrdy_ro:1;
        RBus_UInt32  reg_p1_en_data_manual_l0:1;
        RBus_UInt32  reg_p1_en_eqen_manual_l0:1;
        RBus_UInt32  reg_p1_bypass_data_rdy_l0:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy_l0:1;
        RBus_UInt32  reg_p1_acdr_l0_en:1;
        RBus_UInt32  reg_p1_pll_wd_time_rdy:2;
        RBus_UInt32  reg_p1_pll_wd_rst_wid:2;
        RBus_UInt32  reg_p1_pll_wd_en:1;
        RBus_UInt32  reg_p1_pll_wd_base_time:3;
        RBus_UInt32  reg_p1_order:1;
        RBus_UInt32  reg_p1_eqen_rdy_time:4;
        RBus_UInt32  reg_p1_en_data_manual:1;
        RBus_UInt32  reg_p1_en_eqen_manual:1;
        RBus_UInt32  reg_p1_en_clkout_manual:1;
        RBus_UInt32  reg_p1_data_rdy_time:4;
        RBus_UInt32  reg_p1_bypass_pi:1;
        RBus_UInt32  reg_p1_bypass_data_rdy:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy:1;
        RBus_UInt32  reg_p1_bypass_clk_rdy:1;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_n_code:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  reg_p1_f_code:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_p1_wd_sdm_en:1;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_en_data_manual_l1:1;
        RBus_UInt32  reg_p1_en_eqen_manual_l1:1;
        RBus_UInt32  reg_p1_bypass_data_rdy_l1:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy_l1:1;
        RBus_UInt32  reg_p1_acdr_l1_en:1;
        RBus_UInt32  reg_p1_en_data_manual_l2:1;
        RBus_UInt32  reg_p1_en_eqen_manual_l2:1;
        RBus_UInt32  reg_p1_bypass_data_rdy_l2:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy_l2:1;
        RBus_UInt32  reg_p1_acdr_l2_en:1;
        RBus_UInt32  reg_p1_en_data_manual_l3:1;
        RBus_UInt32  reg_p1_en_eqen_manual_l3:1;
        RBus_UInt32  reg_p1_bypass_data_rdy_l3:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy_l3:1;
        RBus_UInt32  reg_p1_acdr_l3_en:1;
        RBus_UInt32  res1:17;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_cp2adp_en:1;
        RBus_UInt32  reg_p1_r_stable_time_mode:1;
        RBus_UInt32  reg_p1_r_bypass_k_band_mode:1;
        RBus_UInt32  reg_p1_r_divide_num:8;
        RBus_UInt32  reg_p1_r_vco_coarse:7;
        RBus_UInt32  reg_p1_r_calib_late:1;
        RBus_UInt32  reg_p1_r_calib_manual:1;
        RBus_UInt32  reg_p1_r_calib_time:3;
        RBus_UInt32  reg_p1_r_adp_time:5;
        RBus_UInt32  reg_p1_r_adap_eq_off:1;
        RBus_UInt32  reg_p1_r_cp_en_manual:1;
        RBus_UInt32  reg_p1_r_adp_en_manual:1;
        RBus_UInt32  reg_p1_r_auto_mode:1;
    };
}hdmirx_2p1_phy_p1_fld_r_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_lock_dn_limit:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p1_r_lock_up_limit:12;
        RBus_UInt32  reg_p1_r_cp2adp_time:4;
    };
}hdmirx_2p1_phy_p1_fld_r_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_unstable_flg:1;
        RBus_UInt32  reg_p1_r_calib_reset_sel:1;
        RBus_UInt32  reg_p1_r_vc_sel:2;
        RBus_UInt32  reg_p1_r_cdr_c:2;
        RBus_UInt32  reg_p1_r_cdr_r:6;
        RBus_UInt32  reg_p1_r_cdr_cp:20;
    };
}hdmirx_2p1_phy_p1_fld_r_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_init_time:3;
        RBus_UInt32  reg_p1_r_cp_time:5;
        RBus_UInt32  reg_p1_r_coarse_lock_dn_limit:12;
        RBus_UInt32  reg_p1_r_coarse_lock_up_limit:12;
    };
}hdmirx_2p1_phy_p1_fld_r_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_r_acdr_fine_tune_start:1;
        RBus_UInt32  p1_r_fld_rstb:1;
        RBus_UInt32  reg_p1_r_timer_6:5;
        RBus_UInt32  reg_p1_r_timer_5:1;
        RBus_UInt32  reg_p1_r_vco_fine_init:4;
        RBus_UInt32  reg_p1_r_vco_coarse_init:4;
        RBus_UInt32  reg_p1_r_bypass_coarse_k_mode:1;
        RBus_UInt32  reg_p1_r_vco_fine_time_sel:2;
        RBus_UInt32  reg_p1_r_xtal_24m_en:1;
        RBus_UInt32  reg_p1_r_vco_fine_manual:4;
        RBus_UInt32  reg_p1_r_vco_coarse_manual:4;
        RBus_UInt32  reg_p1_r_coarse_calib_manual:1;
        RBus_UInt32  res1:3;
    };
}hdmirx_2p1_phy_p1_fld_r_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_timer_4:5;
        RBus_UInt32  reg_p1_r_vc_chg_time:3;
        RBus_UInt32  reg_p1_r_coarse_init:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p1_r_old_mode:1;
        RBus_UInt32  reg_p1_r_slope_band:5;
        RBus_UInt32  reg_p1_r_slope_manual:1;
        RBus_UInt32  reg_p1_r_rxidle_bypass:1;
        RBus_UInt32  reg_p1_r_pfd_bypass:1;
        RBus_UInt32  reg_p1_r_pfd_time:5;
        RBus_UInt32  reg_p1_r_pfd_en_manual:1;
        RBus_UInt32  reg_p1_r_start_en_manual:1;
    };
}hdmirx_2p1_phy_p1_fld_r_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_r_start_en:1;
        RBus_UInt32  p1_r_calib_ok:1;
        RBus_UInt32  p1_r_coarse_calib_ok:1;
        RBus_UInt32  p1_r_coarse_too_slow_reg:1;
        RBus_UInt32  p1_r_coarse_too_fast_reg:1;
        RBus_UInt32  reg_p1_r_cp_time_2:5;
        RBus_UInt32  p1_r_fine_fsm_reg:7;
        RBus_UInt32  p1_r_pfd_en_fsm_reg:1;
        RBus_UInt32  p1_r_coarse_fsm_reg:7;
        RBus_UInt32  p1_r_cp_en_fsm_reg:1;
        RBus_UInt32  p1_r_adp_en_fsm_reg:1;
        RBus_UInt32  p1_r_fld_st_reg:5;
    };
}hdmirx_2p1_phy_p1_fld_r_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_cp2adp_en:1;
        RBus_UInt32  reg_p1_g_stable_time_mode:1;
        RBus_UInt32  reg_p1_g_bypass_k_band_mode:1;
        RBus_UInt32  reg_p1_g_divide_num:8;
        RBus_UInt32  reg_p1_g_vco_coarse:7;
        RBus_UInt32  reg_p1_g_calib_late:1;
        RBus_UInt32  reg_p1_g_calib_manual:1;
        RBus_UInt32  reg_p1_g_calib_time:3;
        RBus_UInt32  reg_p1_g_adp_time:5;
        RBus_UInt32  reg_p1_g_adap_eq_off:1;
        RBus_UInt32  reg_p1_g_cp_en_manual:1;
        RBus_UInt32  reg_p1_g_adp_en_manual:1;
        RBus_UInt32  reg_p1_g_auto_mode:1;
    };
}hdmirx_2p1_phy_p1_fld_g_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_lock_dn_limit:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p1_g_lock_up_limit:12;
        RBus_UInt32  reg_p1_g_cp2adp_time:4;
    };
}hdmirx_2p1_phy_p1_fld_g_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_unstable_flg:1;
        RBus_UInt32  reg_p1_g_calib_reset_sel:1;
        RBus_UInt32  reg_p1_g_vc_sel:2;
        RBus_UInt32  reg_p1_g_cdr_c:2;
        RBus_UInt32  reg_p1_g_cdr_r:6;
        RBus_UInt32  reg_p1_g_cdr_cp:20;
    };
}hdmirx_2p1_phy_p1_fld_g_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_init_time:3;
        RBus_UInt32  reg_p1_g_cp_time:5;
        RBus_UInt32  reg_p1_g_coarse_lock_dn_limit:12;
        RBus_UInt32  reg_p1_g_coarse_lock_up_limit:12;
    };
}hdmirx_2p1_phy_p1_fld_g_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_g_acdr_fine_tune_start:1;
        RBus_UInt32  p1_g_fld_rstb:1;
        RBus_UInt32  reg_p1_g_timer_6:5;
        RBus_UInt32  reg_p1_g_timer_5:1;
        RBus_UInt32  reg_p1_g_vco_fine_init:4;
        RBus_UInt32  reg_p1_g_vco_coarse_init:4;
        RBus_UInt32  reg_p1_g_bypass_coarse_k_mode:1;
        RBus_UInt32  reg_p1_g_vco_fine_time_sel:2;
        RBus_UInt32  reg_p1_g_xtal_24m_en:1;
        RBus_UInt32  reg_p1_g_vco_fine_manual:4;
        RBus_UInt32  reg_p1_g_vco_coarse_manual:4;
        RBus_UInt32  reg_p1_g_coarse_calib_manual:1;
        RBus_UInt32  res1:3;
    };
}hdmirx_2p1_phy_p1_fld_g_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_timer_4:5;
        RBus_UInt32  reg_p1_g_vc_chg_time:3;
        RBus_UInt32  reg_p1_g_coarse_init:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p1_g_old_mode:1;
        RBus_UInt32  reg_p1_g_slope_band:5;
        RBus_UInt32  reg_p1_g_slope_manual:1;
        RBus_UInt32  reg_p1_g_rxidle_bypass:1;
        RBus_UInt32  reg_p1_g_pfd_bypass:1;
        RBus_UInt32  reg_p1_g_pfd_time:5;
        RBus_UInt32  reg_p1_g_pfd_en_manual:1;
        RBus_UInt32  reg_p1_g_start_en_manual:1;
    };
}hdmirx_2p1_phy_p1_fld_g_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_g_start_en:1;
        RBus_UInt32  p1_g_calib_ok:1;
        RBus_UInt32  p1_g_coarse_calib_ok:1;
        RBus_UInt32  p1_g_coarse_too_slow_reg:1;
        RBus_UInt32  p1_g_coarse_too_fast_reg:1;
        RBus_UInt32  reg_p1_g_cp_time_2:5;
        RBus_UInt32  p1_g_fine_fsm_reg:7;
        RBus_UInt32  p1_g_pfd_en_fsm_reg:1;
        RBus_UInt32  p1_g_coarse_fsm_reg:7;
        RBus_UInt32  p1_g_cp_en_fsm_reg:1;
        RBus_UInt32  p1_g_adp_en_fsm_reg:1;
        RBus_UInt32  p1_g_fld_st_reg:5;
    };
}hdmirx_2p1_phy_p1_fld_g_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_cp2adp_en:1;
        RBus_UInt32  reg_p1_b_stable_time_mode:1;
        RBus_UInt32  reg_p1_b_bypass_k_band_mode:1;
        RBus_UInt32  reg_p1_b_divide_num:8;
        RBus_UInt32  reg_p1_b_vco_coarse:7;
        RBus_UInt32  reg_p1_b_calib_late:1;
        RBus_UInt32  reg_p1_b_calib_manual:1;
        RBus_UInt32  reg_p1_b_calib_time:3;
        RBus_UInt32  reg_p1_b_adp_time:5;
        RBus_UInt32  reg_p1_b_adap_eq_off:1;
        RBus_UInt32  reg_p1_b_cp_en_manual:1;
        RBus_UInt32  reg_p1_b_adp_en_manual:1;
        RBus_UInt32  reg_p1_b_auto_mode:1;
    };
}hdmirx_2p1_phy_p1_fld_b_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_lock_dn_limit:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p1_b_lock_up_limit:12;
        RBus_UInt32  reg_p1_b_cp2adp_time:4;
    };
}hdmirx_2p1_phy_p1_fld_b_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_unstable_flg:1;
        RBus_UInt32  reg_p1_b_calib_reset_sel:1;
        RBus_UInt32  reg_p1_b_vc_sel:2;
        RBus_UInt32  reg_p1_b_cdr_c:2;
        RBus_UInt32  reg_p1_b_cdr_r:6;
        RBus_UInt32  reg_p1_b_cdr_cp:20;
    };
}hdmirx_2p1_phy_p1_fld_b_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_init_time:3;
        RBus_UInt32  reg_p1_b_cp_time:5;
        RBus_UInt32  reg_p1_b_coarse_lock_dn_limit:12;
        RBus_UInt32  reg_p1_b_coarse_lock_up_limit:12;
    };
}hdmirx_2p1_phy_p1_fld_b_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_b_acdr_fine_tune_start:1;
        RBus_UInt32  p1_b_fld_rstb:1;
        RBus_UInt32  reg_p1_b_timer_6:5;
        RBus_UInt32  reg_p1_b_timer_5:1;
        RBus_UInt32  reg_p1_b_vco_fine_init:4;
        RBus_UInt32  reg_p1_b_vco_coarse_init:4;
        RBus_UInt32  reg_p1_b_bypass_coarse_k_mode:1;
        RBus_UInt32  reg_p1_b_vco_fine_time_sel:2;
        RBus_UInt32  reg_p1_b_xtal_24m_en:1;
        RBus_UInt32  reg_p1_b_vco_fine_manual:4;
        RBus_UInt32  reg_p1_b_vco_coarse_manual:4;
        RBus_UInt32  reg_p1_b_coarse_calib_manual:1;
        RBus_UInt32  res1:3;
    };
}hdmirx_2p1_phy_p1_fld_b_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_timer_4:5;
        RBus_UInt32  reg_p1_b_vc_chg_time:3;
        RBus_UInt32  reg_p1_b_coarse_init:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p1_b_old_mode:1;
        RBus_UInt32  reg_p1_b_slope_band:5;
        RBus_UInt32  reg_p1_b_slope_manual:1;
        RBus_UInt32  reg_p1_b_rxidle_bypass:1;
        RBus_UInt32  reg_p1_b_pfd_bypass:1;
        RBus_UInt32  reg_p1_b_pfd_time:5;
        RBus_UInt32  reg_p1_b_pfd_en_manual:1;
        RBus_UInt32  reg_p1_b_start_en_manual:1;
    };
}hdmirx_2p1_phy_p1_fld_b_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_b_start_en:1;
        RBus_UInt32  p1_b_calib_ok:1;
        RBus_UInt32  p1_b_coarse_calib_ok:1;
        RBus_UInt32  p1_b_coarse_too_slow_reg:1;
        RBus_UInt32  p1_b_coarse_too_fast_reg:1;
        RBus_UInt32  reg_p1_b_cp_time_2:5;
        RBus_UInt32  p1_b_fine_fsm_reg:7;
        RBus_UInt32  p1_b_pfd_en_fsm_reg:1;
        RBus_UInt32  p1_b_coarse_fsm_reg:7;
        RBus_UInt32  p1_b_cp_en_fsm_reg:1;
        RBus_UInt32  p1_b_adp_en_fsm_reg:1;
        RBus_UInt32  p1_b_fld_st_reg:5;
    };
}hdmirx_2p1_phy_p1_fld_b_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_cp2adp_en:1;
        RBus_UInt32  reg_p1_ck_stable_time_mode:1;
        RBus_UInt32  reg_p1_ck_bypass_k_band_mode:1;
        RBus_UInt32  reg_p1_ck_divide_num:8;
        RBus_UInt32  reg_p1_ck_vco_coarse:7;
        RBus_UInt32  reg_p1_ck_calib_late:1;
        RBus_UInt32  reg_p1_ck_calib_manual:1;
        RBus_UInt32  reg_p1_ck_calib_time:3;
        RBus_UInt32  reg_p1_ck_adp_time:5;
        RBus_UInt32  reg_p1_ck_adap_eq_off:1;
        RBus_UInt32  reg_p1_ck_cp_en_manual:1;
        RBus_UInt32  reg_p1_ck_adp_en_manual:1;
        RBus_UInt32  reg_p1_ck_auto_mode:1;
    };
}hdmirx_2p1_phy_p1_fld_ck_regd00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_lock_dn_limit:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p1_ck_lock_up_limit:12;
        RBus_UInt32  reg_p1_ck_cp2adp_time:4;
    };
}hdmirx_2p1_phy_p1_fld_ck_regd01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_unstable_flg:1;
        RBus_UInt32  reg_p1_ck_calib_reset_sel:1;
        RBus_UInt32  reg_p1_ck_vc_sel:2;
        RBus_UInt32  reg_p1_ck_cdr_c:2;
        RBus_UInt32  reg_p1_ck_cdr_r:6;
        RBus_UInt32  reg_p1_ck_cdr_cp:20;
    };
}hdmirx_2p1_phy_p1_fld_ck_regd02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_init_time:3;
        RBus_UInt32  reg_p1_ck_cp_time:5;
        RBus_UInt32  reg_p1_ck_coarse_lock_dn_limit:12;
        RBus_UInt32  reg_p1_ck_coarse_lock_up_limit:12;
    };
}hdmirx_2p1_phy_p1_fld_ck_regd03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_ck_acdr_fine_tune_start:1;
        RBus_UInt32  p1_ck_fld_rstb:1;
        RBus_UInt32  reg_p1_ck_timer_6:5;
        RBus_UInt32  reg_p1_ck_timer_5:1;
        RBus_UInt32  reg_p1_ck_vco_fine_init:4;
        RBus_UInt32  reg_p1_ck_vco_coarse_init:4;
        RBus_UInt32  reg_p1_ck_bypass_coarse_k_mode:1;
        RBus_UInt32  reg_p1_ck_vco_fine_time_sel:2;
        RBus_UInt32  reg_p1_ck_xtal_24m_en:1;
        RBus_UInt32  reg_p1_ck_vco_fine_manual:4;
        RBus_UInt32  reg_p1_ck_vco_coarse_manual:4;
        RBus_UInt32  reg_p1_ck_coarse_calib_manual:1;
        RBus_UInt32  res1:3;
    };
}hdmirx_2p1_phy_p1_fld_ck_regd04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_timer_4:5;
        RBus_UInt32  reg_p1_ck_vc_chg_time:3;
        RBus_UInt32  reg_p1_ck_coarse_init:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p1_ck_old_mode:1;
        RBus_UInt32  reg_p1_ck_slope_band:5;
        RBus_UInt32  reg_p1_ck_slope_manual:1;
        RBus_UInt32  reg_p1_ck_rxidle_bypass:1;
        RBus_UInt32  reg_p1_ck_pfd_bypass:1;
        RBus_UInt32  reg_p1_ck_pfd_time:5;
        RBus_UInt32  reg_p1_ck_pfd_en_manual:1;
        RBus_UInt32  reg_p1_ck_start_en_manual:1;
    };
}hdmirx_2p1_phy_p1_fld_ck_regd05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_ck_start_en:1;
        RBus_UInt32  p1_ck_calib_ok:1;
        RBus_UInt32  p1_ck_coarse_calib_ok:1;
        RBus_UInt32  p1_ck_coarse_too_slow_reg:1;
        RBus_UInt32  p1_ck_coarse_too_fast_reg:1;
        RBus_UInt32  reg_p1_ck_cp_time_2:5;
        RBus_UInt32  p1_ck_fine_fsm_reg:7;
        RBus_UInt32  p1_ck_pfd_en_fsm_reg:1;
        RBus_UInt32  p1_ck_coarse_fsm_reg:7;
        RBus_UInt32  p1_ck_cp_en_fsm_reg:1;
        RBus_UInt32  p1_ck_adp_en_fsm_reg:1;
        RBus_UInt32  p1_ck_fld_st_reg:5;
    };
}hdmirx_2p1_phy_p1_fld_ck_regd06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  p1_acdr_ck_acdr_en_afn:1;
        RBus_UInt32  p1_acdr_ck_vco_encap:2;
        RBus_UInt32  res2:5;
        RBus_UInt32  p1_acdr_b_acdr_en_afn:1;
        RBus_UInt32  p1_acdr_b_vco_encap:2;
        RBus_UInt32  res3:5;
        RBus_UInt32  p1_acdr_g_acdr_en_afn:1;
        RBus_UInt32  p1_acdr_g_vco_encap:2;
        RBus_UInt32  res4:5;
        RBus_UInt32  p1_acdr_r_acdr_en_afn:1;
        RBus_UInt32  p1_acdr_r_vco_encap:2;
    };
}hdmirx_2p1_phy_p1_misc_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p1_ck_md_reserved:4;
        RBus_UInt32  reg_p1_ck_error_limit:5;
        RBus_UInt32  reg_p1_ck_md_adj:4;
        RBus_UInt32  reg_p1_ck_md_auto:1;
        RBus_UInt32  reg_p1_ck_md_sel:2;
        RBus_UInt32  reg_p1_ck_md_debounce:7;
        RBus_UInt32  reg_p1_ck_md_threshold:6;
        RBus_UInt32  p1_ck_md_rstb:1;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p1_dig_debug_sel:4;
        RBus_UInt32  p1_clock_unstable_flag:1;
        RBus_UInt32  p1_ck_md_ok:1;
        RBus_UInt32  p1_unstable_count:5;
        RBus_UInt32  p1_ck_rate:4;
        RBus_UInt32  p1_ck_md_count:13;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_dig_reserved_3:8;
        RBus_UInt32  reg_p1_dig_reserved_2:8;
        RBus_UInt32  reg_p1_dig_reserved_1:8;
        RBus_UInt32  reg_p1_dig_reserved_0:8;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_r:32;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_g:32;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_b:32;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_ck:32;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_err_count_r:8;
        RBus_UInt32  p1_pkt_count_r:8;
        RBus_UInt32  reg_p1_pattern_sel_r:1;
        RBus_UInt32  reg_p1_prbs_invs_r:1;
        RBus_UInt32  reg_p1_enable_one_zero_r:1;
        RBus_UInt32  res1:13;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_err_count_g:8;
        RBus_UInt32  p1_pkt_count_g:8;
        RBus_UInt32  reg_p1_pattern_sel_g:1;
        RBus_UInt32  reg_p1_prbs_invs_g:1;
        RBus_UInt32  reg_p1_enable_one_zero_g:1;
        RBus_UInt32  res1:13;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_err_count_b:8;
        RBus_UInt32  p1_pkt_count_b:8;
        RBus_UInt32  reg_p1_pattern_sel_b:1;
        RBus_UInt32  reg_p1_prbs_invs_b:1;
        RBus_UInt32  reg_p1_enable_one_zero_b:1;
        RBus_UInt32  res1:13;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_err_count_ck:8;
        RBus_UInt32  p1_pkt_count_ck:8;
        RBus_UInt32  reg_p1_pattern_sel_ck:1;
        RBus_UInt32  reg_p1_prbs_invs_ck:1;
        RBus_UInt32  reg_p1_enable_one_zero_ck:1;
        RBus_UInt32  res1:13;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_hdmi21:1;
        RBus_UInt32  p1_ck_fifo_rst_n:1;
        RBus_UInt32  p1_b_fifo_rst_n:1;
        RBus_UInt32  p1_g_fifo_rst_n:1;
        RBus_UInt32  p1_r_fifo_rst_n:1;
        RBus_UInt32  reg_p1_fifo_ckinv_ck:1;
        RBus_UInt32  reg_p1_fifo_ckinv_b:1;
        RBus_UInt32  reg_p1_fifo_ckinv_g:1;
        RBus_UInt32  reg_p1_fifo_ckinv_r:1;
        RBus_UInt32  reg_p1_4b18b_data_order:1;
        RBus_UInt32  reg_p1_4b18b_mode:1;
        RBus_UInt32  reg_p1_infifo2_cnt:3;
        RBus_UInt32  reg_dphy_debug_sel_p1:1;
        RBus_UInt32  res1:17;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_err_count_r_hdmi21:8;
        RBus_UInt32  p1_pkt_count_r_hdmi21:8;
        RBus_UInt32  reg_p1_pattern_sel_r_hdmi21:1;
        RBus_UInt32  reg_p1_prbs_invs_r_hdmi21:1;
        RBus_UInt32  reg_p1_enable_one_zero_r_hdmi21:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p1_en_bec_read_r:1;
        RBus_UInt32  reg_p1_en_bec_acc_r:1;
        RBus_UInt32  reg_p1_101_enable_r:1;
        RBus_UInt32  reg_p1_001_enable_r:1;
        RBus_UInt32  p1_acc_read_out_r:8;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_err_count_g_hdmi21:8;
        RBus_UInt32  p1_pkt_count_g_hdmi21:8;
        RBus_UInt32  reg_p1_pattern_sel_g_hdmi21:1;
        RBus_UInt32  reg_p1_prbs_invs_g_hdmi21:1;
        RBus_UInt32  reg_p1_enable_one_zero_g_hdmi21:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p1_en_bec_read_g:1;
        RBus_UInt32  reg_p1_en_bec_acc_g:1;
        RBus_UInt32  reg_p1_101_enable_g:1;
        RBus_UInt32  reg_p1_001_enable_g:1;
        RBus_UInt32  p1_acc_read_out_g:8;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_err_count_b_hdmi21:8;
        RBus_UInt32  p1_pkt_count_b_hdmi21:8;
        RBus_UInt32  reg_p1_pattern_sel_b_hdmi21:1;
        RBus_UInt32  reg_p1_prbs_invs_b_hdmi21:1;
        RBus_UInt32  reg_p1_enable_one_zero_b_hdmi21:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p1_en_bec_read_b:1;
        RBus_UInt32  reg_p1_en_bec_acc_b:1;
        RBus_UInt32  reg_p1_101_enable_b:1;
        RBus_UInt32  reg_p1_001_enable_b:1;
        RBus_UInt32  p1_acc_read_out_b:8;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_err_count_ck_hdmi21:8;
        RBus_UInt32  p1_pkt_count_ck_hdmi21:8;
        RBus_UInt32  reg_p1_pattern_sel_ck_hdmi21:1;
        RBus_UInt32  reg_p1_prbs_invs_ck_hdmi21:1;
        RBus_UInt32  reg_p1_enable_one_zero_ck_hdmi21:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_p1_en_bec_read_ck:1;
        RBus_UInt32  reg_p1_en_bec_acc_ck:1;
        RBus_UInt32  reg_p1_101_enable_ck:1;
        RBus_UInt32  reg_p1_001_enable_ck:1;
        RBus_UInt32  p1_acc_read_out_ck:8;
    };
}hdmirx_2p1_phy_p1_hd21_y1_regd25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_global_reserved:23;
        RBus_UInt32  reg_p1_ck_pllcdr_manual_enable:1;
        RBus_UInt32  reg_p1_b_pllcdr_manual_enable:1;
        RBus_UInt32  reg_p1_g_pllcdr_manual_enable:1;
        RBus_UInt32  reg_p1_r_pllcdr_manual_enable:1;
        RBus_UInt32  reg_p0_ck_pllcdr_manual_enable:1;
        RBus_UInt32  reg_p0_b_pllcdr_manual_enable:1;
        RBus_UInt32  reg_p0_g_pllcdr_manual_enable:1;
        RBus_UInt32  reg_p0_r_pllcdr_manual_enable:1;
        RBus_UInt32  reg_port_out_sel:1;
    };
}hdmirx_2p1_phy_global_hd21_y1_regd30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debug_out:32;
    };
}hdmirx_2p1_phy_global_hd21_y1_regd31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_pow_save_xtal_24m_enable:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p1_hd14_pow_save_fifo_rst_dly_sel:2;
        RBus_UInt32  reg_p1_hd14_pow_on_manual:1;
        RBus_UInt32  reg_p1_hd14_pow_on_manual_en:1;
        RBus_UInt32  reg_p1_hd14_pow_save_bypass:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_p0_hd14_pow_save_fifo_rst_dly_sel:2;
        RBus_UInt32  reg_p0_hd14_pow_on_manual:1;
        RBus_UInt32  reg_p0_hd14_pow_on_manual_en:1;
        RBus_UInt32  reg_p0_hd14_pow_save_bypass:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  reg_p1_pow_save_fifo_rst_dly_sel:2;
        RBus_UInt32  reg_p1_pow_on_manual:1;
        RBus_UInt32  reg_p1_pow_on_manual_en:1;
        RBus_UInt32  reg_p1_pow_save_bypass:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  reg_p0_pow_save_fifo_rst_dly_sel:2;
        RBus_UInt32  reg_p0_pow_on_manual:1;
        RBus_UInt32  reg_p0_pow_on_manual_en:1;
        RBus_UInt32  reg_p0_pow_save_bypass:1;
    };
}hdmirx_2p1_phy_global_hd21_y1_regd32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reg_p1_ck_pn_swap:1;
        RBus_UInt32  reg_p1_b_pn_swap:1;
        RBus_UInt32  reg_p1_g_pn_swap:1;
        RBus_UInt32  reg_p1_r_pn_swap:1;
        RBus_UInt32  reg_p0_ck_pn_swap:1;
        RBus_UInt32  reg_p0_b_pn_swap:1;
        RBus_UInt32  reg_p0_g_pn_swap:1;
        RBus_UInt32  reg_p0_r_pn_swap:1;
    };
}hdmirx_2p1_phy_global_hd21_y1_regd33_RBUS;




#endif 


#endif 
