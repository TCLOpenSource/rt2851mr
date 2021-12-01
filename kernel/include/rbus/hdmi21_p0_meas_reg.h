/**
* @file Merlin5-DesignSpec-P0_HD21_MEAS
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_HDMI21_P0_MEAS_REG_H_
#define _RBUS_HDMI21_P0_MEAS_REG_H_

#include "rbus_types.h"



//  HDMI21_P0_MEAS Register Address
#define  HDMI21_P0_MEAS_FRL_MEASURE_0                                           0x180B7600
#define  HDMI21_P0_MEAS_FRL_MEASURE_0_reg_addr                                   "0xB80B7600"
#define  HDMI21_P0_MEAS_FRL_MEASURE_0_reg                                        0xB80B7600
#define  HDMI21_P0_MEAS_FRL_MEASURE_0_inst_addr                                  "0x0000"
#define  set_HDMI21_P0_MEAS_FRL_MEASURE_0_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_0_reg)=data)
#define  get_HDMI21_P0_MEAS_FRL_MEASURE_0_reg                                    (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_0_reg))
#define  HDMI21_P0_MEAS_FRL_MEASURE_0_measure_en_shift                           (7)
#define  HDMI21_P0_MEAS_FRL_MEASURE_0_dummy_6_0_shift                            (0)
#define  HDMI21_P0_MEAS_FRL_MEASURE_0_measure_en_mask                            (0x00000080)
#define  HDMI21_P0_MEAS_FRL_MEASURE_0_dummy_6_0_mask                             (0x0000007F)
#define  HDMI21_P0_MEAS_FRL_MEASURE_0_measure_en(data)                           (0x00000080&((data)<<7))
#define  HDMI21_P0_MEAS_FRL_MEASURE_0_dummy_6_0(data)                            (0x0000007F&(data))
#define  HDMI21_P0_MEAS_FRL_MEASURE_0_get_measure_en(data)                       ((0x00000080&(data))>>7)
#define  HDMI21_P0_MEAS_FRL_MEASURE_0_get_dummy_6_0(data)                        (0x0000007F&(data))

#define  HDMI21_P0_MEAS_FRL_MEASURE_1                                           0x180B7604
#define  HDMI21_P0_MEAS_FRL_MEASURE_1_reg_addr                                   "0xB80B7604"
#define  HDMI21_P0_MEAS_FRL_MEASURE_1_reg                                        0xB80B7604
#define  HDMI21_P0_MEAS_FRL_MEASURE_1_inst_addr                                  "0x0001"
#define  set_HDMI21_P0_MEAS_FRL_MEASURE_1_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_1_reg)=data)
#define  get_HDMI21_P0_MEAS_FRL_MEASURE_1_reg                                    (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_1_reg))
#define  HDMI21_P0_MEAS_FRL_MEASURE_1_ht_clk_cnt_shift                           (0)
#define  HDMI21_P0_MEAS_FRL_MEASURE_1_ht_clk_cnt_mask                            (0x0001FFFF)
#define  HDMI21_P0_MEAS_FRL_MEASURE_1_ht_clk_cnt(data)                           (0x0001FFFF&(data))
#define  HDMI21_P0_MEAS_FRL_MEASURE_1_get_ht_clk_cnt(data)                       (0x0001FFFF&(data))

#define  HDMI21_P0_MEAS_FRL_MEASURE_3                                           0x180B760C
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_reg_addr                                   "0xB80B760C"
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_reg                                        0xB80B760C
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_inst_addr                                  "0x0002"
#define  set_HDMI21_P0_MEAS_FRL_MEASURE_3_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_3_reg)=data)
#define  get_HDMI21_P0_MEAS_FRL_MEASURE_3_reg                                    (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_3_reg))
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_hs_sel_shift                               (7)
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_ht_meas_sel_shift                          (6)
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_meas_skip_line_shift                       (3)
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_avg_line_num_shift                         (1)
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_dummy_0_shift                              (0)
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_hs_sel_mask                                (0x00000080)
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_ht_meas_sel_mask                           (0x00000040)
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_meas_skip_line_mask                        (0x00000038)
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_avg_line_num_mask                          (0x00000006)
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_dummy_0_mask                               (0x00000001)
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_hs_sel(data)                               (0x00000080&((data)<<7))
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_ht_meas_sel(data)                          (0x00000040&((data)<<6))
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_meas_skip_line(data)                       (0x00000038&((data)<<3))
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_avg_line_num(data)                         (0x00000006&((data)<<1))
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_dummy_0(data)                              (0x00000001&(data))
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_get_hs_sel(data)                           ((0x00000080&(data))>>7)
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_get_ht_meas_sel(data)                      ((0x00000040&(data))>>6)
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_get_meas_skip_line(data)                   ((0x00000038&(data))>>3)
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_get_avg_line_num(data)                     ((0x00000006&(data))>>1)
#define  HDMI21_P0_MEAS_FRL_MEASURE_3_get_dummy_0(data)                          (0x00000001&(data))

#define  HDMI21_P0_MEAS_FRL_MEASURE_4                                           0x180B7610
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_reg_addr                                   "0xB80B7610"
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_reg                                        0xB80B7610
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_inst_addr                                  "0x0003"
#define  set_HDMI21_P0_MEAS_FRL_MEASURE_4_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_4_reg)=data)
#define  get_HDMI21_P0_MEAS_FRL_MEASURE_4_reg                                    (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_4_reg))
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_line_bd_sel_shift                          (6)
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_vt_meas_sel_shift                          (5)
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_vact_meas_sel_shift                        (4)
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_dummy_3_0_shift                            (0)
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_line_bd_sel_mask                           (0x000000C0)
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_vt_meas_sel_mask                           (0x00000020)
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_vact_meas_sel_mask                         (0x00000010)
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_dummy_3_0_mask                             (0x0000000F)
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_line_bd_sel(data)                          (0x000000C0&((data)<<6))
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_vt_meas_sel(data)                          (0x00000020&((data)<<5))
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_vact_meas_sel(data)                        (0x00000010&((data)<<4))
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_dummy_3_0(data)                            (0x0000000F&(data))
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_get_line_bd_sel(data)                      ((0x000000C0&(data))>>6)
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_get_vt_meas_sel(data)                      ((0x00000020&(data))>>5)
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_get_vact_meas_sel(data)                    ((0x00000010&(data))>>4)
#define  HDMI21_P0_MEAS_FRL_MEASURE_4_get_dummy_3_0(data)                        (0x0000000F&(data))

#define  HDMI21_P0_MEAS_FRL_MEASURE_5                                           0x180B7614
#define  HDMI21_P0_MEAS_FRL_MEASURE_5_reg_addr                                   "0xB80B7614"
#define  HDMI21_P0_MEAS_FRL_MEASURE_5_reg                                        0xB80B7614
#define  HDMI21_P0_MEAS_FRL_MEASURE_5_inst_addr                                  "0x0004"
#define  set_HDMI21_P0_MEAS_FRL_MEASURE_5_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_5_reg)=data)
#define  get_HDMI21_P0_MEAS_FRL_MEASURE_5_reg                                    (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_5_reg))
#define  HDMI21_P0_MEAS_FRL_MEASURE_5_vt_line_cnt1_shift                         (0)
#define  HDMI21_P0_MEAS_FRL_MEASURE_5_vt_line_cnt1_mask                          (0x0000FFFF)
#define  HDMI21_P0_MEAS_FRL_MEASURE_5_vt_line_cnt1(data)                         (0x0000FFFF&(data))
#define  HDMI21_P0_MEAS_FRL_MEASURE_5_get_vt_line_cnt1(data)                     (0x0000FFFF&(data))

#define  HDMI21_P0_MEAS_FRL_MEASURE_7                                           0x180B761C
#define  HDMI21_P0_MEAS_FRL_MEASURE_7_reg_addr                                   "0xB80B761C"
#define  HDMI21_P0_MEAS_FRL_MEASURE_7_reg                                        0xB80B761C
#define  HDMI21_P0_MEAS_FRL_MEASURE_7_inst_addr                                  "0x0005"
#define  set_HDMI21_P0_MEAS_FRL_MEASURE_7_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_7_reg)=data)
#define  get_HDMI21_P0_MEAS_FRL_MEASURE_7_reg                                    (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_7_reg))
#define  HDMI21_P0_MEAS_FRL_MEASURE_7_vt_line_cnt2_shift                         (0)
#define  HDMI21_P0_MEAS_FRL_MEASURE_7_vt_line_cnt2_mask                          (0x0000FFFF)
#define  HDMI21_P0_MEAS_FRL_MEASURE_7_vt_line_cnt2(data)                         (0x0000FFFF&(data))
#define  HDMI21_P0_MEAS_FRL_MEASURE_7_get_vt_line_cnt2(data)                     (0x0000FFFF&(data))

#define  HDMI21_P0_MEAS_FRL_MEASURE_9                                           0x180B7624
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_reg_addr                                   "0xB80B7624"
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_reg                                        0xB80B7624
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_inst_addr                                  "0x0006"
#define  set_HDMI21_P0_MEAS_FRL_MEASURE_9_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_9_reg)=data)
#define  get_HDMI21_P0_MEAS_FRL_MEASURE_9_reg                                    (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_9_reg))
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_pol_det_mode_shift                         (7)
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_hs_polarity_shift                          (6)
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_vs_polarity_shift                          (5)
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_dummy_4_0_shift                            (0)
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_pol_det_mode_mask                          (0x00000080)
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_hs_polarity_mask                           (0x00000040)
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_vs_polarity_mask                           (0x00000020)
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_dummy_4_0_mask                             (0x0000001F)
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_pol_det_mode(data)                         (0x00000080&((data)<<7))
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_hs_polarity(data)                          (0x00000040&((data)<<6))
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_vs_polarity(data)                          (0x00000020&((data)<<5))
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_dummy_4_0(data)                            (0x0000001F&(data))
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_get_pol_det_mode(data)                     ((0x00000080&(data))>>7)
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_get_hs_polarity(data)                      ((0x00000040&(data))>>6)
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_get_vs_polarity(data)                      ((0x00000020&(data))>>5)
#define  HDMI21_P0_MEAS_FRL_MEASURE_9_get_dummy_4_0(data)                        (0x0000001F&(data))

#define  HDMI21_P0_MEAS_FRL_MEASURE_A                                           0x180B7628
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_reg_addr                                   "0xB80B7628"
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_reg                                        0xB80B7628
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_inst_addr                                  "0x0007"
#define  set_HDMI21_P0_MEAS_FRL_MEASURE_A_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_A_reg)=data)
#define  get_HDMI21_P0_MEAS_FRL_MEASURE_A_reg                                    (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_A_reg))
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_interlaced_vtotal_shift                    (7)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_vtotal_diff_shift                          (5)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_field_tog_shift                            (4)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_interlaced_field_shift                     (3)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_interlaced_err_shift                       (2)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_dummy_1_0_shift                            (0)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_interlaced_vtotal_mask                     (0x00000080)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_vtotal_diff_mask                           (0x00000060)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_field_tog_mask                             (0x00000010)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_interlaced_field_mask                      (0x00000008)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_interlaced_err_mask                        (0x00000004)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_dummy_1_0_mask                             (0x00000003)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_interlaced_vtotal(data)                    (0x00000080&((data)<<7))
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_vtotal_diff(data)                          (0x00000060&((data)<<5))
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_field_tog(data)                            (0x00000010&((data)<<4))
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_interlaced_field(data)                     (0x00000008&((data)<<3))
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_interlaced_err(data)                       (0x00000004&((data)<<2))
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_dummy_1_0(data)                            (0x00000003&(data))
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_get_interlaced_vtotal(data)                ((0x00000080&(data))>>7)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_get_vtotal_diff(data)                      ((0x00000060&(data))>>5)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_get_field_tog(data)                        ((0x00000010&(data))>>4)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_get_interlaced_field(data)                 ((0x00000008&(data))>>3)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_get_interlaced_err(data)                   ((0x00000004&(data))>>2)
#define  HDMI21_P0_MEAS_FRL_MEASURE_A_get_dummy_1_0(data)                        (0x00000003&(data))

#define  HDMI21_P0_MEAS_FRL_MEASURE_B                                           0x180B762C
#define  HDMI21_P0_MEAS_FRL_MEASURE_B_reg_addr                                   "0xB80B762C"
#define  HDMI21_P0_MEAS_FRL_MEASURE_B_reg                                        0xB80B762C
#define  HDMI21_P0_MEAS_FRL_MEASURE_B_inst_addr                                  "0x0008"
#define  set_HDMI21_P0_MEAS_FRL_MEASURE_B_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_B_reg)=data)
#define  get_HDMI21_P0_MEAS_FRL_MEASURE_B_reg                                    (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_B_reg))
#define  HDMI21_P0_MEAS_FRL_MEASURE_B_hs_width_shift                             (0)
#define  HDMI21_P0_MEAS_FRL_MEASURE_B_hs_width_mask                              (0x000001FF)
#define  HDMI21_P0_MEAS_FRL_MEASURE_B_hs_width(data)                             (0x000001FF&(data))
#define  HDMI21_P0_MEAS_FRL_MEASURE_B_get_hs_width(data)                         (0x000001FF&(data))

#define  HDMI21_P0_MEAS_FRL_MEASURE_D                                           0x180B7634
#define  HDMI21_P0_MEAS_FRL_MEASURE_D_reg_addr                                   "0xB80B7634"
#define  HDMI21_P0_MEAS_FRL_MEASURE_D_reg                                        0xB80B7634
#define  HDMI21_P0_MEAS_FRL_MEASURE_D_inst_addr                                  "0x0009"
#define  set_HDMI21_P0_MEAS_FRL_MEASURE_D_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_D_reg)=data)
#define  get_HDMI21_P0_MEAS_FRL_MEASURE_D_reg                                    (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_D_reg))
#define  HDMI21_P0_MEAS_FRL_MEASURE_D_hback_cnt_shift                            (0)
#define  HDMI21_P0_MEAS_FRL_MEASURE_D_hback_cnt_mask                             (0x000007FF)
#define  HDMI21_P0_MEAS_FRL_MEASURE_D_hback_cnt(data)                            (0x000007FF&(data))
#define  HDMI21_P0_MEAS_FRL_MEASURE_D_get_hback_cnt(data)                        (0x000007FF&(data))

#define  HDMI21_P0_MEAS_FRL_MEASURE_F                                           0x180B763C
#define  HDMI21_P0_MEAS_FRL_MEASURE_F_reg_addr                                   "0xB80B763C"
#define  HDMI21_P0_MEAS_FRL_MEASURE_F_reg                                        0xB80B763C
#define  HDMI21_P0_MEAS_FRL_MEASURE_F_inst_addr                                  "0x000A"
#define  set_HDMI21_P0_MEAS_FRL_MEASURE_F_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_F_reg)=data)
#define  get_HDMI21_P0_MEAS_FRL_MEASURE_F_reg                                    (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_F_reg))
#define  HDMI21_P0_MEAS_FRL_MEASURE_F_hact_cnt_shift                             (0)
#define  HDMI21_P0_MEAS_FRL_MEASURE_F_hact_cnt_mask                              (0x0000FFFF)
#define  HDMI21_P0_MEAS_FRL_MEASURE_F_hact_cnt(data)                             (0x0000FFFF&(data))
#define  HDMI21_P0_MEAS_FRL_MEASURE_F_get_hact_cnt(data)                         (0x0000FFFF&(data))

#define  HDMI21_P0_MEAS_FRL_MEASURE_11                                          0x180B7644
#define  HDMI21_P0_MEAS_FRL_MEASURE_11_reg_addr                                  "0xB80B7644"
#define  HDMI21_P0_MEAS_FRL_MEASURE_11_reg                                       0xB80B7644
#define  HDMI21_P0_MEAS_FRL_MEASURE_11_inst_addr                                 "0x000B"
#define  set_HDMI21_P0_MEAS_FRL_MEASURE_11_reg(data)                             (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_11_reg)=data)
#define  get_HDMI21_P0_MEAS_FRL_MEASURE_11_reg                                   (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_11_reg))
#define  HDMI21_P0_MEAS_FRL_MEASURE_11_htotal_cnt_shift                          (0)
#define  HDMI21_P0_MEAS_FRL_MEASURE_11_htotal_cnt_mask                           (0x0000FFFF)
#define  HDMI21_P0_MEAS_FRL_MEASURE_11_htotal_cnt(data)                          (0x0000FFFF&(data))
#define  HDMI21_P0_MEAS_FRL_MEASURE_11_get_htotal_cnt(data)                      (0x0000FFFF&(data))

#define  HDMI21_P0_MEAS_FRL_MEASURE_13                                          0x180B764C
#define  HDMI21_P0_MEAS_FRL_MEASURE_13_reg_addr                                  "0xB80B764C"
#define  HDMI21_P0_MEAS_FRL_MEASURE_13_reg                                       0xB80B764C
#define  HDMI21_P0_MEAS_FRL_MEASURE_13_inst_addr                                 "0x000C"
#define  set_HDMI21_P0_MEAS_FRL_MEASURE_13_reg(data)                             (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_13_reg)=data)
#define  get_HDMI21_P0_MEAS_FRL_MEASURE_13_reg                                   (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_13_reg))
#define  HDMI21_P0_MEAS_FRL_MEASURE_13_vs_width_shift                            (0)
#define  HDMI21_P0_MEAS_FRL_MEASURE_13_vs_width_mask                             (0x000000FF)
#define  HDMI21_P0_MEAS_FRL_MEASURE_13_vs_width(data)                            (0x000000FF&(data))
#define  HDMI21_P0_MEAS_FRL_MEASURE_13_get_vs_width(data)                        (0x000000FF&(data))

#define  HDMI21_P0_MEAS_FRL_MEASURE_14                                          0x180B7650
#define  HDMI21_P0_MEAS_FRL_MEASURE_14_reg_addr                                  "0xB80B7650"
#define  HDMI21_P0_MEAS_FRL_MEASURE_14_reg                                       0xB80B7650
#define  HDMI21_P0_MEAS_FRL_MEASURE_14_inst_addr                                 "0x000D"
#define  set_HDMI21_P0_MEAS_FRL_MEASURE_14_reg(data)                             (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_14_reg)=data)
#define  get_HDMI21_P0_MEAS_FRL_MEASURE_14_reg                                   (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_14_reg))
#define  HDMI21_P0_MEAS_FRL_MEASURE_14_vback_cnt_shift                           (0)
#define  HDMI21_P0_MEAS_FRL_MEASURE_14_vback_cnt_mask                            (0x000007FF)
#define  HDMI21_P0_MEAS_FRL_MEASURE_14_vback_cnt(data)                           (0x000007FF&(data))
#define  HDMI21_P0_MEAS_FRL_MEASURE_14_get_vback_cnt(data)                       (0x000007FF&(data))

#define  HDMI21_P0_MEAS_FRL_MEASURE_16                                          0x180B7658
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_reg_addr                                  "0xB80B7658"
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_reg                                       0xB80B7658
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_inst_addr                                 "0x000E"
#define  set_HDMI21_P0_MEAS_FRL_MEASURE_16_reg(data)                             (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_16_reg)=data)
#define  get_HDMI21_P0_MEAS_FRL_MEASURE_16_reg                                   (*((volatile unsigned int*)HDMI21_P0_MEAS_FRL_MEASURE_16_reg))
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_vs_hs_rp_align_shift                      (18)
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_vs_hs_fp_align_shift                      (17)
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_last_line_ov_thd_shift                    (16)
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_vact_cnt_shift                            (0)
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_vs_hs_rp_align_mask                       (0x00040000)
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_vs_hs_fp_align_mask                       (0x00020000)
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_last_line_ov_thd_mask                     (0x00010000)
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_vact_cnt_mask                             (0x0000FFFF)
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_vs_hs_rp_align(data)                      (0x00040000&((data)<<18))
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_vs_hs_fp_align(data)                      (0x00020000&((data)<<17))
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_last_line_ov_thd(data)                    (0x00010000&((data)<<16))
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_vact_cnt(data)                            (0x0000FFFF&(data))
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_get_vs_hs_rp_align(data)                  ((0x00040000&(data))>>18)
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_get_vs_hs_fp_align(data)                  ((0x00020000&(data))>>17)
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_get_last_line_ov_thd(data)                ((0x00010000&(data))>>16)
#define  HDMI21_P0_MEAS_FRL_MEASURE_16_get_vact_cnt(data)                        (0x0000FFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======HDMI21_P0_MEAS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  measure_en:1;
        RBus_UInt32  dummy180b7600_6_0:7;
    };
}hdmi21_p0_meas_frl_measure_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  ht_clk_cnt:17;
    };
}hdmi21_p0_meas_frl_measure_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  hs_sel:1;
        RBus_UInt32  ht_meas_sel:1;
        RBus_UInt32  meas_skip_line:3;
        RBus_UInt32  avg_line_num:2;
        RBus_UInt32  dummy180b760c_0:1;
    };
}hdmi21_p0_meas_frl_measure_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  line_bd_sel:2;
        RBus_UInt32  vt_meas_sel:1;
        RBus_UInt32  vact_meas_sel:1;
        RBus_UInt32  dummy180b7610_3_0:4;
    };
}hdmi21_p0_meas_frl_measure_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  vt_line_cnt1:16;
    };
}hdmi21_p0_meas_frl_measure_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  vt_line_cnt2:16;
    };
}hdmi21_p0_meas_frl_measure_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  pol_det_mode:1;
        RBus_UInt32  hs_polarity:1;
        RBus_UInt32  vs_polarity:1;
        RBus_UInt32  dummy180b7624_4_0:5;
    };
}hdmi21_p0_meas_frl_measure_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  interlaced_vtotal:1;
        RBus_UInt32  vtotal_diff:2;
        RBus_UInt32  field_tog:1;
        RBus_UInt32  interlaced_field:1;
        RBus_UInt32  interlaced_err:1;
        RBus_UInt32  dummy180b7628_1_0:2;
    };
}hdmi21_p0_meas_frl_measure_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  hs_width:9;
    };
}hdmi21_p0_meas_frl_measure_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  hback_cnt:11;
    };
}hdmi21_p0_meas_frl_measure_d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  hact_cnt:16;
    };
}hdmi21_p0_meas_frl_measure_f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  htotal_cnt:16;
    };
}hdmi21_p0_meas_frl_measure_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  vs_width:8;
    };
}hdmi21_p0_meas_frl_measure_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  vback_cnt:11;
    };
}hdmi21_p0_meas_frl_measure_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  vs_hs_rp_align:1;
        RBus_UInt32  vs_hs_fp_align:1;
        RBus_UInt32  last_line_ov_thd:1;
        RBus_UInt32  vact_cnt:16;
    };
}hdmi21_p0_meas_frl_measure_16_RBUS;

#else //apply LITTLE_ENDIAN

//======HDMI21_P0_MEAS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b7600_6_0:7;
        RBus_UInt32  measure_en:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p0_meas_frl_measure_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ht_clk_cnt:17;
        RBus_UInt32  res1:15;
    };
}hdmi21_p0_meas_frl_measure_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b760c_0:1;
        RBus_UInt32  avg_line_num:2;
        RBus_UInt32  meas_skip_line:3;
        RBus_UInt32  ht_meas_sel:1;
        RBus_UInt32  hs_sel:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p0_meas_frl_measure_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b7610_3_0:4;
        RBus_UInt32  vact_meas_sel:1;
        RBus_UInt32  vt_meas_sel:1;
        RBus_UInt32  line_bd_sel:2;
        RBus_UInt32  res1:24;
    };
}hdmi21_p0_meas_frl_measure_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vt_line_cnt1:16;
        RBus_UInt32  res1:16;
    };
}hdmi21_p0_meas_frl_measure_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vt_line_cnt2:16;
        RBus_UInt32  res1:16;
    };
}hdmi21_p0_meas_frl_measure_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b7624_4_0:5;
        RBus_UInt32  vs_polarity:1;
        RBus_UInt32  hs_polarity:1;
        RBus_UInt32  pol_det_mode:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p0_meas_frl_measure_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b7628_1_0:2;
        RBus_UInt32  interlaced_err:1;
        RBus_UInt32  interlaced_field:1;
        RBus_UInt32  field_tog:1;
        RBus_UInt32  vtotal_diff:2;
        RBus_UInt32  interlaced_vtotal:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p0_meas_frl_measure_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hs_width:9;
        RBus_UInt32  res1:23;
    };
}hdmi21_p0_meas_frl_measure_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hback_cnt:11;
        RBus_UInt32  res1:21;
    };
}hdmi21_p0_meas_frl_measure_d_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hact_cnt:16;
        RBus_UInt32  res1:16;
    };
}hdmi21_p0_meas_frl_measure_f_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  htotal_cnt:16;
        RBus_UInt32  res1:16;
    };
}hdmi21_p0_meas_frl_measure_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs_width:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p0_meas_frl_measure_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vback_cnt:11;
        RBus_UInt32  res1:21;
    };
}hdmi21_p0_meas_frl_measure_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vact_cnt:16;
        RBus_UInt32  last_line_ov_thd:1;
        RBus_UInt32  vs_hs_fp_align:1;
        RBus_UInt32  vs_hs_rp_align:1;
        RBus_UInt32  res1:13;
    };
}hdmi21_p0_meas_frl_measure_16_RBUS;




#endif 


#endif 
