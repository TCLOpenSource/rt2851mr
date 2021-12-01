/**
* @file Merlin5-DesignSpec-I-Domain_ONMS
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_ONMS_REG_H_
#define _RBUS_ONMS_REG_H_

#include "rbus_types.h"



//  ONMS Register Address
#define  ONMS_onms1_ctrl                                                        0x18021200
#define  ONMS_onms1_ctrl_reg_addr                                                "0xB8021200"
#define  ONMS_onms1_ctrl_reg                                                     0xB8021200
#define  ONMS_onms1_ctrl_inst_addr                                               "0x0000"
#define  set_ONMS_onms1_ctrl_reg(data)                                           (*((volatile unsigned int*)ONMS_onms1_ctrl_reg)=data)
#define  get_ONMS_onms1_ctrl_reg                                                 (*((volatile unsigned int*)ONMS_onms1_ctrl_reg))
#define  ONMS_onms1_ctrl_on1_continuous_popup_shift                              (31)
#define  ONMS_onms1_ctrl_on1_hd21_ms_en_shift                                    (30)
#define  ONMS_onms1_ctrl_on1_ms_src_sel_shift                                    (29)
#define  ONMS_onms1_ctrl_on1_blk_2frame_en_shift                                 (28)
#define  ONMS_onms1_ctrl_on1_vtotal_max_delta_shift                              (20)
#define  ONMS_onms1_ctrl_on1_htotal_max_delta_shift                              (16)
#define  ONMS_onms1_ctrl_on1_htotal_of_th_shift                                  (14)
#define  ONMS_onms1_ctrl_on1_input_align_shift                                   (13)
#define  ONMS_onms1_ctrl_on1_meas_to_sel_shift                                   (6)
#define  ONMS_onms1_ctrl_on1_sycms_clk_shift                                     (5)
#define  ONMS_onms1_ctrl_on1_vs_meas_inv_shift                                   (4)
#define  ONMS_onms1_ctrl_on1_hs_meas_inv_shift                                   (3)
#define  ONMS_onms1_ctrl_on1_popup_meas_shift                                    (2)
#define  ONMS_onms1_ctrl_on1_ms_conti_shift                                      (1)
#define  ONMS_onms1_ctrl_on1_start_ms_shift                                      (0)
#define  ONMS_onms1_ctrl_on1_continuous_popup_mask                               (0x80000000)
#define  ONMS_onms1_ctrl_on1_hd21_ms_en_mask                                     (0x40000000)
#define  ONMS_onms1_ctrl_on1_ms_src_sel_mask                                     (0x20000000)
#define  ONMS_onms1_ctrl_on1_blk_2frame_en_mask                                  (0x10000000)
#define  ONMS_onms1_ctrl_on1_vtotal_max_delta_mask                               (0x00F00000)
#define  ONMS_onms1_ctrl_on1_htotal_max_delta_mask                               (0x000F0000)
#define  ONMS_onms1_ctrl_on1_htotal_of_th_mask                                   (0x0000C000)
#define  ONMS_onms1_ctrl_on1_input_align_mask                                    (0x00002000)
#define  ONMS_onms1_ctrl_on1_meas_to_sel_mask                                    (0x00000040)
#define  ONMS_onms1_ctrl_on1_sycms_clk_mask                                      (0x00000020)
#define  ONMS_onms1_ctrl_on1_vs_meas_inv_mask                                    (0x00000010)
#define  ONMS_onms1_ctrl_on1_hs_meas_inv_mask                                    (0x00000008)
#define  ONMS_onms1_ctrl_on1_popup_meas_mask                                     (0x00000004)
#define  ONMS_onms1_ctrl_on1_ms_conti_mask                                       (0x00000002)
#define  ONMS_onms1_ctrl_on1_start_ms_mask                                       (0x00000001)
#define  ONMS_onms1_ctrl_on1_continuous_popup(data)                              (0x80000000&((data)<<31))
#define  ONMS_onms1_ctrl_on1_hd21_ms_en(data)                                    (0x40000000&((data)<<30))
#define  ONMS_onms1_ctrl_on1_ms_src_sel(data)                                    (0x20000000&((data)<<29))
#define  ONMS_onms1_ctrl_on1_blk_2frame_en(data)                                 (0x10000000&((data)<<28))
#define  ONMS_onms1_ctrl_on1_vtotal_max_delta(data)                              (0x00F00000&((data)<<20))
#define  ONMS_onms1_ctrl_on1_htotal_max_delta(data)                              (0x000F0000&((data)<<16))
#define  ONMS_onms1_ctrl_on1_htotal_of_th(data)                                  (0x0000C000&((data)<<14))
#define  ONMS_onms1_ctrl_on1_input_align(data)                                   (0x00002000&((data)<<13))
#define  ONMS_onms1_ctrl_on1_meas_to_sel(data)                                   (0x00000040&((data)<<6))
#define  ONMS_onms1_ctrl_on1_sycms_clk(data)                                     (0x00000020&((data)<<5))
#define  ONMS_onms1_ctrl_on1_vs_meas_inv(data)                                   (0x00000010&((data)<<4))
#define  ONMS_onms1_ctrl_on1_hs_meas_inv(data)                                   (0x00000008&((data)<<3))
#define  ONMS_onms1_ctrl_on1_popup_meas(data)                                    (0x00000004&((data)<<2))
#define  ONMS_onms1_ctrl_on1_ms_conti(data)                                      (0x00000002&((data)<<1))
#define  ONMS_onms1_ctrl_on1_start_ms(data)                                      (0x00000001&(data))
#define  ONMS_onms1_ctrl_get_on1_continuous_popup(data)                          ((0x80000000&(data))>>31)
#define  ONMS_onms1_ctrl_get_on1_hd21_ms_en(data)                                ((0x40000000&(data))>>30)
#define  ONMS_onms1_ctrl_get_on1_ms_src_sel(data)                                ((0x20000000&(data))>>29)
#define  ONMS_onms1_ctrl_get_on1_blk_2frame_en(data)                             ((0x10000000&(data))>>28)
#define  ONMS_onms1_ctrl_get_on1_vtotal_max_delta(data)                          ((0x00F00000&(data))>>20)
#define  ONMS_onms1_ctrl_get_on1_htotal_max_delta(data)                          ((0x000F0000&(data))>>16)
#define  ONMS_onms1_ctrl_get_on1_htotal_of_th(data)                              ((0x0000C000&(data))>>14)
#define  ONMS_onms1_ctrl_get_on1_input_align(data)                               ((0x00002000&(data))>>13)
#define  ONMS_onms1_ctrl_get_on1_meas_to_sel(data)                               ((0x00000040&(data))>>6)
#define  ONMS_onms1_ctrl_get_on1_sycms_clk(data)                                 ((0x00000020&(data))>>5)
#define  ONMS_onms1_ctrl_get_on1_vs_meas_inv(data)                               ((0x00000010&(data))>>4)
#define  ONMS_onms1_ctrl_get_on1_hs_meas_inv(data)                               ((0x00000008&(data))>>3)
#define  ONMS_onms1_ctrl_get_on1_popup_meas(data)                                ((0x00000004&(data))>>2)
#define  ONMS_onms1_ctrl_get_on1_ms_conti(data)                                  ((0x00000002&(data))>>1)
#define  ONMS_onms1_ctrl_get_on1_start_ms(data)                                  (0x00000001&(data))

#define  ONMS_onms1_vs_period                                                   0x18021230
#define  ONMS_onms1_vs_period_reg_addr                                           "0xB8021230"
#define  ONMS_onms1_vs_period_reg                                                0xB8021230
#define  ONMS_onms1_vs_period_inst_addr                                          "0x0001"
#define  set_ONMS_onms1_vs_period_reg(data)                                      (*((volatile unsigned int*)ONMS_onms1_vs_period_reg)=data)
#define  get_ONMS_onms1_vs_period_reg                                            (*((volatile unsigned int*)ONMS_onms1_vs_period_reg))
#define  ONMS_onms1_vs_period_on1_vtotalde_shift                                 (16)
#define  ONMS_onms1_vs_period_on1_vtotal_shift                                   (0)
#define  ONMS_onms1_vs_period_on1_vtotalde_mask                                  (0x1FFF0000)
#define  ONMS_onms1_vs_period_on1_vtotal_mask                                    (0x00007FFF)
#define  ONMS_onms1_vs_period_on1_vtotalde(data)                                 (0x1FFF0000&((data)<<16))
#define  ONMS_onms1_vs_period_on1_vtotal(data)                                   (0x00007FFF&(data))
#define  ONMS_onms1_vs_period_get_on1_vtotalde(data)                             ((0x1FFF0000&(data))>>16)
#define  ONMS_onms1_vs_period_get_on1_vtotal(data)                               (0x00007FFF&(data))

#define  ONMS_onms1_vshs_high_period                                            0x18021234
#define  ONMS_onms1_vshs_high_period_reg_addr                                    "0xB8021234"
#define  ONMS_onms1_vshs_high_period_reg                                         0xB8021234
#define  ONMS_onms1_vshs_high_period_inst_addr                                   "0x0002"
#define  set_ONMS_onms1_vshs_high_period_reg(data)                               (*((volatile unsigned int*)ONMS_onms1_vshs_high_period_reg)=data)
#define  get_ONMS_onms1_vshs_high_period_reg                                     (*((volatile unsigned int*)ONMS_onms1_vshs_high_period_reg))
#define  ONMS_onms1_vshs_high_period_on1_vs_high_period_shift                    (16)
#define  ONMS_onms1_vshs_high_period_on1_hs_high_period_shift                    (0)
#define  ONMS_onms1_vshs_high_period_on1_vs_high_period_mask                     (0x7FFF0000)
#define  ONMS_onms1_vshs_high_period_on1_hs_high_period_mask                     (0x00003FFF)
#define  ONMS_onms1_vshs_high_period_on1_vs_high_period(data)                    (0x7FFF0000&((data)<<16))
#define  ONMS_onms1_vshs_high_period_on1_hs_high_period(data)                    (0x00003FFF&(data))
#define  ONMS_onms1_vshs_high_period_get_on1_vs_high_period(data)                ((0x7FFF0000&(data))>>16)
#define  ONMS_onms1_vshs_high_period_get_on1_hs_high_period(data)                (0x00003FFF&(data))

#define  ONMS_onms1_hs_period                                                   0x18021238
#define  ONMS_onms1_hs_period_reg_addr                                           "0xB8021238"
#define  ONMS_onms1_hs_period_reg                                                0xB8021238
#define  ONMS_onms1_hs_period_inst_addr                                          "0x0003"
#define  set_ONMS_onms1_hs_period_reg(data)                                      (*((volatile unsigned int*)ONMS_onms1_hs_period_reg)=data)
#define  get_ONMS_onms1_hs_period_reg                                            (*((volatile unsigned int*)ONMS_onms1_hs_period_reg))
#define  ONMS_onms1_hs_period_on1_htotal_h12b_shift                              (4)
#define  ONMS_onms1_hs_period_on1_htotal_f4b_shift                               (0)
#define  ONMS_onms1_hs_period_on1_htotal_h12b_mask                               (0x0003FFF0)
#define  ONMS_onms1_hs_period_on1_htotal_f4b_mask                                (0x0000000F)
#define  ONMS_onms1_hs_period_on1_htotal_h12b(data)                              (0x0003FFF0&((data)<<4))
#define  ONMS_onms1_hs_period_on1_htotal_f4b(data)                               (0x0000000F&(data))
#define  ONMS_onms1_hs_period_get_on1_htotal_h12b(data)                          ((0x0003FFF0&(data))>>4)
#define  ONMS_onms1_hs_period_get_on1_htotal_f4b(data)                           (0x0000000F&(data))

#define  ONMS_onms1_vact_sta                                                    0x1802123C
#define  ONMS_onms1_vact_sta_reg_addr                                            "0xB802123C"
#define  ONMS_onms1_vact_sta_reg                                                 0xB802123C
#define  ONMS_onms1_vact_sta_inst_addr                                           "0x0004"
#define  set_ONMS_onms1_vact_sta_reg(data)                                       (*((volatile unsigned int*)ONMS_onms1_vact_sta_reg)=data)
#define  get_ONMS_onms1_vact_sta_reg                                             (*((volatile unsigned int*)ONMS_onms1_vact_sta_reg))
#define  ONMS_onms1_vact_sta_on1_vblank_len_shift                                (16)
#define  ONMS_onms1_vact_sta_on1_vact_start_shift                                (0)
#define  ONMS_onms1_vact_sta_on1_vblank_len_mask                                 (0x00FF0000)
#define  ONMS_onms1_vact_sta_on1_vact_start_mask                                 (0x00000FFF)
#define  ONMS_onms1_vact_sta_on1_vblank_len(data)                                (0x00FF0000&((data)<<16))
#define  ONMS_onms1_vact_sta_on1_vact_start(data)                                (0x00000FFF&(data))
#define  ONMS_onms1_vact_sta_get_on1_vblank_len(data)                            ((0x00FF0000&(data))>>16)
#define  ONMS_onms1_vact_sta_get_on1_vact_start(data)                            (0x00000FFF&(data))

#define  ONMS_onms1_hact_sta                                                    0x18021240
#define  ONMS_onms1_hact_sta_reg_addr                                            "0xB8021240"
#define  ONMS_onms1_hact_sta_reg                                                 0xB8021240
#define  ONMS_onms1_hact_sta_inst_addr                                           "0x0005"
#define  set_ONMS_onms1_hact_sta_reg(data)                                       (*((volatile unsigned int*)ONMS_onms1_hact_sta_reg)=data)
#define  get_ONMS_onms1_hact_sta_reg                                             (*((volatile unsigned int*)ONMS_onms1_hact_sta_reg))
#define  ONMS_onms1_hact_sta_on1_hact_start_shift                                (0)
#define  ONMS_onms1_hact_sta_on1_hact_start_mask                                 (0x00003FFF)
#define  ONMS_onms1_hact_sta_on1_hact_start(data)                                (0x00003FFF&(data))
#define  ONMS_onms1_hact_sta_get_on1_hact_start(data)                            (0x00003FFF&(data))

#define  ONMS_onms1_hact                                                        0x18021244
#define  ONMS_onms1_hact_reg_addr                                                "0xB8021244"
#define  ONMS_onms1_hact_reg                                                     0xB8021244
#define  ONMS_onms1_hact_inst_addr                                               "0x0006"
#define  set_ONMS_onms1_hact_reg(data)                                           (*((volatile unsigned int*)ONMS_onms1_hact_reg)=data)
#define  get_ONMS_onms1_hact_reg                                                 (*((volatile unsigned int*)ONMS_onms1_hact_reg))
#define  ONMS_onms1_hact_on1_hact_shift                                          (4)
#define  ONMS_onms1_hact_on1_hact_fract_shift                                    (0)
#define  ONMS_onms1_hact_on1_hact_mask                                           (0x0003FFF0)
#define  ONMS_onms1_hact_on1_hact_fract_mask                                     (0x0000000F)
#define  ONMS_onms1_hact_on1_hact(data)                                          (0x0003FFF0&((data)<<4))
#define  ONMS_onms1_hact_on1_hact_fract(data)                                    (0x0000000F&(data))
#define  ONMS_onms1_hact_get_on1_hact(data)                                      ((0x0003FFF0&(data))>>4)
#define  ONMS_onms1_hact_get_on1_hact_fract(data)                                (0x0000000F&(data))

#define  ONMS_onms1_ctrl_1                                                      0x18021248
#define  ONMS_onms1_ctrl_1_reg_addr                                              "0xB8021248"
#define  ONMS_onms1_ctrl_1_reg                                                   0xB8021248
#define  ONMS_onms1_ctrl_1_inst_addr                                             "0x0007"
#define  set_ONMS_onms1_ctrl_1_reg(data)                                         (*((volatile unsigned int*)ONMS_onms1_ctrl_1_reg)=data)
#define  get_ONMS_onms1_ctrl_1_reg                                               (*((volatile unsigned int*)ONMS_onms1_ctrl_1_reg))
#define  ONMS_onms1_ctrl_1_on1_vtotal_uf_th_shift                                (16)
#define  ONMS_onms1_ctrl_1_on1_vtotal_of_th_shift                                (0)
#define  ONMS_onms1_ctrl_1_on1_vtotal_uf_th_mask                                 (0x7FFF0000)
#define  ONMS_onms1_ctrl_1_on1_vtotal_of_th_mask                                 (0x00007FFF)
#define  ONMS_onms1_ctrl_1_on1_vtotal_uf_th(data)                                (0x7FFF0000&((data)<<16))
#define  ONMS_onms1_ctrl_1_on1_vtotal_of_th(data)                                (0x00007FFF&(data))
#define  ONMS_onms1_ctrl_1_get_on1_vtotal_uf_th(data)                            ((0x7FFF0000&(data))>>16)
#define  ONMS_onms1_ctrl_1_get_on1_vtotal_of_th(data)                            (0x00007FFF&(data))

#define  ONMS_onms1_ctrl_2                                                      0x1802124C
#define  ONMS_onms1_ctrl_2_reg_addr                                              "0xB802124C"
#define  ONMS_onms1_ctrl_2_reg                                                   0xB802124C
#define  ONMS_onms1_ctrl_2_inst_addr                                             "0x0008"
#define  set_ONMS_onms1_ctrl_2_reg(data)                                         (*((volatile unsigned int*)ONMS_onms1_ctrl_2_reg)=data)
#define  get_ONMS_onms1_ctrl_2_reg                                               (*((volatile unsigned int*)ONMS_onms1_ctrl_2_reg))
#define  ONMS_onms1_ctrl_2_on1_hgclk_gate_th_shift                               (0)
#define  ONMS_onms1_ctrl_2_on1_hgclk_gate_th_mask                                (0x00003FFF)
#define  ONMS_onms1_ctrl_2_on1_hgclk_gate_th(data)                               (0x00003FFF&(data))
#define  ONMS_onms1_ctrl_2_get_on1_hgclk_gate_th(data)                           (0x00003FFF&(data))

#define  ONMS_onms1_hsync_meas_ctrl                                             0x1802125C
#define  ONMS_onms1_hsync_meas_ctrl_reg_addr                                     "0xB802125C"
#define  ONMS_onms1_hsync_meas_ctrl_reg                                          0xB802125C
#define  ONMS_onms1_hsync_meas_ctrl_inst_addr                                    "0x0009"
#define  set_ONMS_onms1_hsync_meas_ctrl_reg(data)                                (*((volatile unsigned int*)ONMS_onms1_hsync_meas_ctrl_reg)=data)
#define  get_ONMS_onms1_hsync_meas_ctrl_reg                                      (*((volatile unsigned int*)ONMS_onms1_hsync_meas_ctrl_reg))
#define  ONMS_onms1_hsync_meas_ctrl_on1_htotal_max_delta_new_shift               (24)
#define  ONMS_onms1_hsync_meas_ctrl_on1_average_line_shift                       (16)
#define  ONMS_onms1_hsync_meas_ctrl_on1_target_measure_shift                     (0)
#define  ONMS_onms1_hsync_meas_ctrl_on1_htotal_max_delta_new_mask                (0x7F000000)
#define  ONMS_onms1_hsync_meas_ctrl_on1_average_line_mask                        (0x000F0000)
#define  ONMS_onms1_hsync_meas_ctrl_on1_target_measure_mask                      (0x00003FFF)
#define  ONMS_onms1_hsync_meas_ctrl_on1_htotal_max_delta_new(data)               (0x7F000000&((data)<<24))
#define  ONMS_onms1_hsync_meas_ctrl_on1_average_line(data)                       (0x000F0000&((data)<<16))
#define  ONMS_onms1_hsync_meas_ctrl_on1_target_measure(data)                     (0x00003FFF&(data))
#define  ONMS_onms1_hsync_meas_ctrl_get_on1_htotal_max_delta_new(data)           ((0x7F000000&(data))>>24)
#define  ONMS_onms1_hsync_meas_ctrl_get_on1_average_line(data)                   ((0x000F0000&(data))>>16)
#define  ONMS_onms1_hsync_meas_ctrl_get_on1_target_measure(data)                 (0x00003FFF&(data))

#define  ONMS_onms1_hsync_meas_ctrl_2                                           0x18021260
#define  ONMS_onms1_hsync_meas_ctrl_2_reg_addr                                   "0xB8021260"
#define  ONMS_onms1_hsync_meas_ctrl_2_reg                                        0xB8021260
#define  ONMS_onms1_hsync_meas_ctrl_2_inst_addr                                  "0x000A"
#define  set_ONMS_onms1_hsync_meas_ctrl_2_reg(data)                              (*((volatile unsigned int*)ONMS_onms1_hsync_meas_ctrl_2_reg)=data)
#define  get_ONMS_onms1_hsync_meas_ctrl_2_reg                                    (*((volatile unsigned int*)ONMS_onms1_hsync_meas_ctrl_2_reg))
#define  ONMS_onms1_hsync_meas_ctrl_2_on1_vmeas_end_shift                        (16)
#define  ONMS_onms1_hsync_meas_ctrl_2_on1_vmeas_start_shift                      (0)
#define  ONMS_onms1_hsync_meas_ctrl_2_on1_vmeas_end_mask                         (0x7FFF0000)
#define  ONMS_onms1_hsync_meas_ctrl_2_on1_vmeas_start_mask                       (0x00007FFF)
#define  ONMS_onms1_hsync_meas_ctrl_2_on1_vmeas_end(data)                        (0x7FFF0000&((data)<<16))
#define  ONMS_onms1_hsync_meas_ctrl_2_on1_vmeas_start(data)                      (0x00007FFF&(data))
#define  ONMS_onms1_hsync_meas_ctrl_2_get_on1_vmeas_end(data)                    ((0x7FFF0000&(data))>>16)
#define  ONMS_onms1_hsync_meas_ctrl_2_get_on1_vmeas_start(data)                  (0x00007FFF&(data))

#define  ONMS_onms1_hsync_meas_result                                           0x18021264
#define  ONMS_onms1_hsync_meas_result_reg_addr                                   "0xB8021264"
#define  ONMS_onms1_hsync_meas_result_reg                                        0xB8021264
#define  ONMS_onms1_hsync_meas_result_inst_addr                                  "0x000B"
#define  set_ONMS_onms1_hsync_meas_result_reg(data)                              (*((volatile unsigned int*)ONMS_onms1_hsync_meas_result_reg)=data)
#define  get_ONMS_onms1_hsync_meas_result_reg                                    (*((volatile unsigned int*)ONMS_onms1_hsync_meas_result_reg))
#define  ONMS_onms1_hsync_meas_result_on1_hmax_delta_total_shift                 (0)
#define  ONMS_onms1_hsync_meas_result_on1_hmax_delta_total_mask                  (0x00003FFF)
#define  ONMS_onms1_hsync_meas_result_on1_hmax_delta_total(data)                 (0x00003FFF&(data))
#define  ONMS_onms1_hsync_meas_result_get_on1_hmax_delta_total(data)             (0x00003FFF&(data))

#define  ONMS_onms1_status                                                      0x18021268
#define  ONMS_onms1_status_reg_addr                                              "0xB8021268"
#define  ONMS_onms1_status_reg                                                   0xB8021268
#define  ONMS_onms1_status_inst_addr                                             "0x000C"
#define  set_ONMS_onms1_status_reg(data)                                         (*((volatile unsigned int*)ONMS_onms1_status_reg)=data)
#define  get_ONMS_onms1_status_reg                                               (*((volatile unsigned int*)ONMS_onms1_status_reg))
#define  ONMS_onms1_status_on1_hgclk_gate_over_range_shift                       (22)
#define  ONMS_onms1_status_on1_hs_meas_over_range_shift                          (21)
#define  ONMS_onms1_status_on1_vs_per_to_long_shift                              (20)
#define  ONMS_onms1_status_on1_vs_pol_out_shift                                  (17)
#define  ONMS_onms1_status_on1_hs_pol_out_shift                                  (16)
#define  ONMS_onms1_status_on1_vs_per_over_range_shift                           (15)
#define  ONMS_onms1_status_on1_hs_per_over_range_shift                           (14)
#define  ONMS_onms1_status_on1_vs_per_timeout_shift                              (13)
#define  ONMS_onms1_status_on1_vs_high_timeout_shift                             (12)
#define  ONMS_onms1_status_on1_vs_per_overflow_shift                             (11)
#define  ONMS_onms1_status_on1_hs_per_overflow_shift                             (10)
#define  ONMS_onms1_status_on1_vs_pol_chg_shift                                  (9)
#define  ONMS_onms1_status_on1_hs_pol_chg_shift                                  (8)
#define  ONMS_onms1_status_on1_vtotalde_chg_shift                                (7)
#define  ONMS_onms1_status_on1_vtotal_chg_shift                                  (6)
#define  ONMS_onms1_status_on1_hact_chg_shift                                    (5)
#define  ONMS_onms1_status_on1_htotal_chg_shift                                  (4)
#define  ONMS_onms1_status_on1_hs_active_pixel_var_shift                         (3)
#define  ONMS_onms1_status_on1_vs_per_underflow_shift                            (2)
#define  ONMS_onms1_status_on1_hgclk_gate_over_range_mask                        (0x00400000)
#define  ONMS_onms1_status_on1_hs_meas_over_range_mask                           (0x00200000)
#define  ONMS_onms1_status_on1_vs_per_to_long_mask                               (0x00100000)
#define  ONMS_onms1_status_on1_vs_pol_out_mask                                   (0x00020000)
#define  ONMS_onms1_status_on1_hs_pol_out_mask                                   (0x00010000)
#define  ONMS_onms1_status_on1_vs_per_over_range_mask                            (0x00008000)
#define  ONMS_onms1_status_on1_hs_per_over_range_mask                            (0x00004000)
#define  ONMS_onms1_status_on1_vs_per_timeout_mask                               (0x00002000)
#define  ONMS_onms1_status_on1_vs_high_timeout_mask                              (0x00001000)
#define  ONMS_onms1_status_on1_vs_per_overflow_mask                              (0x00000800)
#define  ONMS_onms1_status_on1_hs_per_overflow_mask                              (0x00000400)
#define  ONMS_onms1_status_on1_vs_pol_chg_mask                                   (0x00000200)
#define  ONMS_onms1_status_on1_hs_pol_chg_mask                                   (0x00000100)
#define  ONMS_onms1_status_on1_vtotalde_chg_mask                                 (0x00000080)
#define  ONMS_onms1_status_on1_vtotal_chg_mask                                   (0x00000040)
#define  ONMS_onms1_status_on1_hact_chg_mask                                     (0x00000020)
#define  ONMS_onms1_status_on1_htotal_chg_mask                                   (0x00000010)
#define  ONMS_onms1_status_on1_hs_active_pixel_var_mask                          (0x00000008)
#define  ONMS_onms1_status_on1_vs_per_underflow_mask                             (0x00000004)
#define  ONMS_onms1_status_on1_hgclk_gate_over_range(data)                       (0x00400000&((data)<<22))
#define  ONMS_onms1_status_on1_hs_meas_over_range(data)                          (0x00200000&((data)<<21))
#define  ONMS_onms1_status_on1_vs_per_to_long(data)                              (0x00100000&((data)<<20))
#define  ONMS_onms1_status_on1_vs_pol_out(data)                                  (0x00020000&((data)<<17))
#define  ONMS_onms1_status_on1_hs_pol_out(data)                                  (0x00010000&((data)<<16))
#define  ONMS_onms1_status_on1_vs_per_over_range(data)                           (0x00008000&((data)<<15))
#define  ONMS_onms1_status_on1_hs_per_over_range(data)                           (0x00004000&((data)<<14))
#define  ONMS_onms1_status_on1_vs_per_timeout(data)                              (0x00002000&((data)<<13))
#define  ONMS_onms1_status_on1_vs_high_timeout(data)                             (0x00001000&((data)<<12))
#define  ONMS_onms1_status_on1_vs_per_overflow(data)                             (0x00000800&((data)<<11))
#define  ONMS_onms1_status_on1_hs_per_overflow(data)                             (0x00000400&((data)<<10))
#define  ONMS_onms1_status_on1_vs_pol_chg(data)                                  (0x00000200&((data)<<9))
#define  ONMS_onms1_status_on1_hs_pol_chg(data)                                  (0x00000100&((data)<<8))
#define  ONMS_onms1_status_on1_vtotalde_chg(data)                                (0x00000080&((data)<<7))
#define  ONMS_onms1_status_on1_vtotal_chg(data)                                  (0x00000040&((data)<<6))
#define  ONMS_onms1_status_on1_hact_chg(data)                                    (0x00000020&((data)<<5))
#define  ONMS_onms1_status_on1_htotal_chg(data)                                  (0x00000010&((data)<<4))
#define  ONMS_onms1_status_on1_hs_active_pixel_var(data)                         (0x00000008&((data)<<3))
#define  ONMS_onms1_status_on1_vs_per_underflow(data)                            (0x00000004&((data)<<2))
#define  ONMS_onms1_status_get_on1_hgclk_gate_over_range(data)                   ((0x00400000&(data))>>22)
#define  ONMS_onms1_status_get_on1_hs_meas_over_range(data)                      ((0x00200000&(data))>>21)
#define  ONMS_onms1_status_get_on1_vs_per_to_long(data)                          ((0x00100000&(data))>>20)
#define  ONMS_onms1_status_get_on1_vs_pol_out(data)                              ((0x00020000&(data))>>17)
#define  ONMS_onms1_status_get_on1_hs_pol_out(data)                              ((0x00010000&(data))>>16)
#define  ONMS_onms1_status_get_on1_vs_per_over_range(data)                       ((0x00008000&(data))>>15)
#define  ONMS_onms1_status_get_on1_hs_per_over_range(data)                       ((0x00004000&(data))>>14)
#define  ONMS_onms1_status_get_on1_vs_per_timeout(data)                          ((0x00002000&(data))>>13)
#define  ONMS_onms1_status_get_on1_vs_high_timeout(data)                         ((0x00001000&(data))>>12)
#define  ONMS_onms1_status_get_on1_vs_per_overflow(data)                         ((0x00000800&(data))>>11)
#define  ONMS_onms1_status_get_on1_hs_per_overflow(data)                         ((0x00000400&(data))>>10)
#define  ONMS_onms1_status_get_on1_vs_pol_chg(data)                              ((0x00000200&(data))>>9)
#define  ONMS_onms1_status_get_on1_hs_pol_chg(data)                              ((0x00000100&(data))>>8)
#define  ONMS_onms1_status_get_on1_vtotalde_chg(data)                            ((0x00000080&(data))>>7)
#define  ONMS_onms1_status_get_on1_vtotal_chg(data)                              ((0x00000040&(data))>>6)
#define  ONMS_onms1_status_get_on1_hact_chg(data)                                ((0x00000020&(data))>>5)
#define  ONMS_onms1_status_get_on1_htotal_chg(data)                              ((0x00000010&(data))>>4)
#define  ONMS_onms1_status_get_on1_hs_active_pixel_var(data)                     ((0x00000008&(data))>>3)
#define  ONMS_onms1_status_get_on1_vs_per_underflow(data)                        ((0x00000004&(data))>>2)

#define  ONMS_onms1_watchdog_en                                                 0x1802126C
#define  ONMS_onms1_watchdog_en_reg_addr                                         "0xB802126C"
#define  ONMS_onms1_watchdog_en_reg                                              0xB802126C
#define  ONMS_onms1_watchdog_en_inst_addr                                        "0x000D"
#define  set_ONMS_onms1_watchdog_en_reg(data)                                    (*((volatile unsigned int*)ONMS_onms1_watchdog_en_reg)=data)
#define  get_ONMS_onms1_watchdog_en_reg                                          (*((volatile unsigned int*)ONMS_onms1_watchdog_en_reg))
#define  ONMS_onms1_watchdog_en_on1_wd_to_main_shift                             (31)
#define  ONMS_onms1_watchdog_en_on1_wd_to_sub_shift                              (30)
#define  ONMS_onms1_watchdog_en_on1_wd_debug_mode_m_shift                        (29)
#define  ONMS_onms1_watchdog_en_on1_wd_debug_target_m_shift                      (28)
#define  ONMS_onms1_watchdog_en_on1_wd_hgclk_gate_over_range_shift               (22)
#define  ONMS_onms1_watchdog_en_on1_wd_hs_meas_over_range_shift                  (21)
#define  ONMS_onms1_watchdog_en_on1_wd_vs_per_over_range_shift                   (15)
#define  ONMS_onms1_watchdog_en_on1_wd_hs_per_over_range_shift                   (14)
#define  ONMS_onms1_watchdog_en_on1_wd_vs_per_timeout_shift                      (13)
#define  ONMS_onms1_watchdog_en_on1_wd_vs_high_timeout_shift                     (12)
#define  ONMS_onms1_watchdog_en_on1_wd_vs_per_overflow_shift                     (11)
#define  ONMS_onms1_watchdog_en_on1_wd_hs_per_overflow_shift                     (10)
#define  ONMS_onms1_watchdog_en_on1_wd_vs_pol_chg_shift                          (9)
#define  ONMS_onms1_watchdog_en_on1_wd_hs_pol_chg_shift                          (8)
#define  ONMS_onms1_watchdog_en_on1_wd_vtotalde_chg_shift                        (7)
#define  ONMS_onms1_watchdog_en_on1_wd_vtotal_chg_shift                          (6)
#define  ONMS_onms1_watchdog_en_on1_wd_hact_chg_shift                            (5)
#define  ONMS_onms1_watchdog_en_on1_wd_htotal_chg_shift                          (4)
#define  ONMS_onms1_watchdog_en_on1_wd_hs_active_pixel_var_shift                 (3)
#define  ONMS_onms1_watchdog_en_on1_wd_vs_per_underflow_shift                    (2)
#define  ONMS_onms1_watchdog_en_on1_wd_to_main_mask                              (0x80000000)
#define  ONMS_onms1_watchdog_en_on1_wd_to_sub_mask                               (0x40000000)
#define  ONMS_onms1_watchdog_en_on1_wd_debug_mode_m_mask                         (0x20000000)
#define  ONMS_onms1_watchdog_en_on1_wd_debug_target_m_mask                       (0x10000000)
#define  ONMS_onms1_watchdog_en_on1_wd_hgclk_gate_over_range_mask                (0x00400000)
#define  ONMS_onms1_watchdog_en_on1_wd_hs_meas_over_range_mask                   (0x00200000)
#define  ONMS_onms1_watchdog_en_on1_wd_vs_per_over_range_mask                    (0x00008000)
#define  ONMS_onms1_watchdog_en_on1_wd_hs_per_over_range_mask                    (0x00004000)
#define  ONMS_onms1_watchdog_en_on1_wd_vs_per_timeout_mask                       (0x00002000)
#define  ONMS_onms1_watchdog_en_on1_wd_vs_high_timeout_mask                      (0x00001000)
#define  ONMS_onms1_watchdog_en_on1_wd_vs_per_overflow_mask                      (0x00000800)
#define  ONMS_onms1_watchdog_en_on1_wd_hs_per_overflow_mask                      (0x00000400)
#define  ONMS_onms1_watchdog_en_on1_wd_vs_pol_chg_mask                           (0x00000200)
#define  ONMS_onms1_watchdog_en_on1_wd_hs_pol_chg_mask                           (0x00000100)
#define  ONMS_onms1_watchdog_en_on1_wd_vtotalde_chg_mask                         (0x00000080)
#define  ONMS_onms1_watchdog_en_on1_wd_vtotal_chg_mask                           (0x00000040)
#define  ONMS_onms1_watchdog_en_on1_wd_hact_chg_mask                             (0x00000020)
#define  ONMS_onms1_watchdog_en_on1_wd_htotal_chg_mask                           (0x00000010)
#define  ONMS_onms1_watchdog_en_on1_wd_hs_active_pixel_var_mask                  (0x00000008)
#define  ONMS_onms1_watchdog_en_on1_wd_vs_per_underflow_mask                     (0x00000004)
#define  ONMS_onms1_watchdog_en_on1_wd_to_main(data)                             (0x80000000&((data)<<31))
#define  ONMS_onms1_watchdog_en_on1_wd_to_sub(data)                              (0x40000000&((data)<<30))
#define  ONMS_onms1_watchdog_en_on1_wd_debug_mode_m(data)                        (0x20000000&((data)<<29))
#define  ONMS_onms1_watchdog_en_on1_wd_debug_target_m(data)                      (0x10000000&((data)<<28))
#define  ONMS_onms1_watchdog_en_on1_wd_hgclk_gate_over_range(data)               (0x00400000&((data)<<22))
#define  ONMS_onms1_watchdog_en_on1_wd_hs_meas_over_range(data)                  (0x00200000&((data)<<21))
#define  ONMS_onms1_watchdog_en_on1_wd_vs_per_over_range(data)                   (0x00008000&((data)<<15))
#define  ONMS_onms1_watchdog_en_on1_wd_hs_per_over_range(data)                   (0x00004000&((data)<<14))
#define  ONMS_onms1_watchdog_en_on1_wd_vs_per_timeout(data)                      (0x00002000&((data)<<13))
#define  ONMS_onms1_watchdog_en_on1_wd_vs_high_timeout(data)                     (0x00001000&((data)<<12))
#define  ONMS_onms1_watchdog_en_on1_wd_vs_per_overflow(data)                     (0x00000800&((data)<<11))
#define  ONMS_onms1_watchdog_en_on1_wd_hs_per_overflow(data)                     (0x00000400&((data)<<10))
#define  ONMS_onms1_watchdog_en_on1_wd_vs_pol_chg(data)                          (0x00000200&((data)<<9))
#define  ONMS_onms1_watchdog_en_on1_wd_hs_pol_chg(data)                          (0x00000100&((data)<<8))
#define  ONMS_onms1_watchdog_en_on1_wd_vtotalde_chg(data)                        (0x00000080&((data)<<7))
#define  ONMS_onms1_watchdog_en_on1_wd_vtotal_chg(data)                          (0x00000040&((data)<<6))
#define  ONMS_onms1_watchdog_en_on1_wd_hact_chg(data)                            (0x00000020&((data)<<5))
#define  ONMS_onms1_watchdog_en_on1_wd_htotal_chg(data)                          (0x00000010&((data)<<4))
#define  ONMS_onms1_watchdog_en_on1_wd_hs_active_pixel_var(data)                 (0x00000008&((data)<<3))
#define  ONMS_onms1_watchdog_en_on1_wd_vs_per_underflow(data)                    (0x00000004&((data)<<2))
#define  ONMS_onms1_watchdog_en_get_on1_wd_to_main(data)                         ((0x80000000&(data))>>31)
#define  ONMS_onms1_watchdog_en_get_on1_wd_to_sub(data)                          ((0x40000000&(data))>>30)
#define  ONMS_onms1_watchdog_en_get_on1_wd_debug_mode_m(data)                    ((0x20000000&(data))>>29)
#define  ONMS_onms1_watchdog_en_get_on1_wd_debug_target_m(data)                  ((0x10000000&(data))>>28)
#define  ONMS_onms1_watchdog_en_get_on1_wd_hgclk_gate_over_range(data)           ((0x00400000&(data))>>22)
#define  ONMS_onms1_watchdog_en_get_on1_wd_hs_meas_over_range(data)              ((0x00200000&(data))>>21)
#define  ONMS_onms1_watchdog_en_get_on1_wd_vs_per_over_range(data)               ((0x00008000&(data))>>15)
#define  ONMS_onms1_watchdog_en_get_on1_wd_hs_per_over_range(data)               ((0x00004000&(data))>>14)
#define  ONMS_onms1_watchdog_en_get_on1_wd_vs_per_timeout(data)                  ((0x00002000&(data))>>13)
#define  ONMS_onms1_watchdog_en_get_on1_wd_vs_high_timeout(data)                 ((0x00001000&(data))>>12)
#define  ONMS_onms1_watchdog_en_get_on1_wd_vs_per_overflow(data)                 ((0x00000800&(data))>>11)
#define  ONMS_onms1_watchdog_en_get_on1_wd_hs_per_overflow(data)                 ((0x00000400&(data))>>10)
#define  ONMS_onms1_watchdog_en_get_on1_wd_vs_pol_chg(data)                      ((0x00000200&(data))>>9)
#define  ONMS_onms1_watchdog_en_get_on1_wd_hs_pol_chg(data)                      ((0x00000100&(data))>>8)
#define  ONMS_onms1_watchdog_en_get_on1_wd_vtotalde_chg(data)                    ((0x00000080&(data))>>7)
#define  ONMS_onms1_watchdog_en_get_on1_wd_vtotal_chg(data)                      ((0x00000040&(data))>>6)
#define  ONMS_onms1_watchdog_en_get_on1_wd_hact_chg(data)                        ((0x00000020&(data))>>5)
#define  ONMS_onms1_watchdog_en_get_on1_wd_htotal_chg(data)                      ((0x00000010&(data))>>4)
#define  ONMS_onms1_watchdog_en_get_on1_wd_hs_active_pixel_var(data)             ((0x00000008&(data))>>3)
#define  ONMS_onms1_watchdog_en_get_on1_wd_vs_per_underflow(data)                ((0x00000004&(data))>>2)

#define  ONMS_onms1_interrupt_en                                                0x18021270
#define  ONMS_onms1_interrupt_en_reg_addr                                        "0xB8021270"
#define  ONMS_onms1_interrupt_en_reg                                             0xB8021270
#define  ONMS_onms1_interrupt_en_inst_addr                                       "0x000E"
#define  set_ONMS_onms1_interrupt_en_reg(data)                                   (*((volatile unsigned int*)ONMS_onms1_interrupt_en_reg)=data)
#define  get_ONMS_onms1_interrupt_en_reg                                         (*((volatile unsigned int*)ONMS_onms1_interrupt_en_reg))
#define  ONMS_onms1_interrupt_en_on1_ie_to_main_shift                            (31)
#define  ONMS_onms1_interrupt_en_on1_ie_hgclk_gate_over_range_shift              (22)
#define  ONMS_onms1_interrupt_en_on1_ie_hs_meas_over_range_shift                 (21)
#define  ONMS_onms1_interrupt_en_on1_ie_vs_per_over_range_shift                  (15)
#define  ONMS_onms1_interrupt_en_on1_ie_hs_per_over_range_shift                  (14)
#define  ONMS_onms1_interrupt_en_on1_ie_vs_per_timeout_shift                     (13)
#define  ONMS_onms1_interrupt_en_on1_ie_vs_high_timeout_shift                    (12)
#define  ONMS_onms1_interrupt_en_on1_ie_vs_per_overflow_shift                    (11)
#define  ONMS_onms1_interrupt_en_on1_ie_hs_per_overflow_shift                    (10)
#define  ONMS_onms1_interrupt_en_on1_ie_vs_pol_chg_shift                         (9)
#define  ONMS_onms1_interrupt_en_on1_ie_hs_pol_chg_shift                         (8)
#define  ONMS_onms1_interrupt_en_on1_ie_vtotalde_chg_shift                       (7)
#define  ONMS_onms1_interrupt_en_on1_ie_vtotal_chg_shift                         (6)
#define  ONMS_onms1_interrupt_en_on1_ie_hact_chg_shift                           (5)
#define  ONMS_onms1_interrupt_en_on1_ie_htotal_chg_shift                         (4)
#define  ONMS_onms1_interrupt_en_on1_ie_hs_active_pixel_var_shift                (3)
#define  ONMS_onms1_interrupt_en_on1_ie_vs_per_underflow_shift                   (2)
#define  ONMS_onms1_interrupt_en_on1_ie_to_main_mask                             (0x80000000)
#define  ONMS_onms1_interrupt_en_on1_ie_hgclk_gate_over_range_mask               (0x00400000)
#define  ONMS_onms1_interrupt_en_on1_ie_hs_meas_over_range_mask                  (0x00200000)
#define  ONMS_onms1_interrupt_en_on1_ie_vs_per_over_range_mask                   (0x00008000)
#define  ONMS_onms1_interrupt_en_on1_ie_hs_per_over_range_mask                   (0x00004000)
#define  ONMS_onms1_interrupt_en_on1_ie_vs_per_timeout_mask                      (0x00002000)
#define  ONMS_onms1_interrupt_en_on1_ie_vs_high_timeout_mask                     (0x00001000)
#define  ONMS_onms1_interrupt_en_on1_ie_vs_per_overflow_mask                     (0x00000800)
#define  ONMS_onms1_interrupt_en_on1_ie_hs_per_overflow_mask                     (0x00000400)
#define  ONMS_onms1_interrupt_en_on1_ie_vs_pol_chg_mask                          (0x00000200)
#define  ONMS_onms1_interrupt_en_on1_ie_hs_pol_chg_mask                          (0x00000100)
#define  ONMS_onms1_interrupt_en_on1_ie_vtotalde_chg_mask                        (0x00000080)
#define  ONMS_onms1_interrupt_en_on1_ie_vtotal_chg_mask                          (0x00000040)
#define  ONMS_onms1_interrupt_en_on1_ie_hact_chg_mask                            (0x00000020)
#define  ONMS_onms1_interrupt_en_on1_ie_htotal_chg_mask                          (0x00000010)
#define  ONMS_onms1_interrupt_en_on1_ie_hs_active_pixel_var_mask                 (0x00000008)
#define  ONMS_onms1_interrupt_en_on1_ie_vs_per_underflow_mask                    (0x00000004)
#define  ONMS_onms1_interrupt_en_on1_ie_to_main(data)                            (0x80000000&((data)<<31))
#define  ONMS_onms1_interrupt_en_on1_ie_hgclk_gate_over_range(data)              (0x00400000&((data)<<22))
#define  ONMS_onms1_interrupt_en_on1_ie_hs_meas_over_range(data)                 (0x00200000&((data)<<21))
#define  ONMS_onms1_interrupt_en_on1_ie_vs_per_over_range(data)                  (0x00008000&((data)<<15))
#define  ONMS_onms1_interrupt_en_on1_ie_hs_per_over_range(data)                  (0x00004000&((data)<<14))
#define  ONMS_onms1_interrupt_en_on1_ie_vs_per_timeout(data)                     (0x00002000&((data)<<13))
#define  ONMS_onms1_interrupt_en_on1_ie_vs_high_timeout(data)                    (0x00001000&((data)<<12))
#define  ONMS_onms1_interrupt_en_on1_ie_vs_per_overflow(data)                    (0x00000800&((data)<<11))
#define  ONMS_onms1_interrupt_en_on1_ie_hs_per_overflow(data)                    (0x00000400&((data)<<10))
#define  ONMS_onms1_interrupt_en_on1_ie_vs_pol_chg(data)                         (0x00000200&((data)<<9))
#define  ONMS_onms1_interrupt_en_on1_ie_hs_pol_chg(data)                         (0x00000100&((data)<<8))
#define  ONMS_onms1_interrupt_en_on1_ie_vtotalde_chg(data)                       (0x00000080&((data)<<7))
#define  ONMS_onms1_interrupt_en_on1_ie_vtotal_chg(data)                         (0x00000040&((data)<<6))
#define  ONMS_onms1_interrupt_en_on1_ie_hact_chg(data)                           (0x00000020&((data)<<5))
#define  ONMS_onms1_interrupt_en_on1_ie_htotal_chg(data)                         (0x00000010&((data)<<4))
#define  ONMS_onms1_interrupt_en_on1_ie_hs_active_pixel_var(data)                (0x00000008&((data)<<3))
#define  ONMS_onms1_interrupt_en_on1_ie_vs_per_underflow(data)                   (0x00000004&((data)<<2))
#define  ONMS_onms1_interrupt_en_get_on1_ie_to_main(data)                        ((0x80000000&(data))>>31)
#define  ONMS_onms1_interrupt_en_get_on1_ie_hgclk_gate_over_range(data)          ((0x00400000&(data))>>22)
#define  ONMS_onms1_interrupt_en_get_on1_ie_hs_meas_over_range(data)             ((0x00200000&(data))>>21)
#define  ONMS_onms1_interrupt_en_get_on1_ie_vs_per_over_range(data)              ((0x00008000&(data))>>15)
#define  ONMS_onms1_interrupt_en_get_on1_ie_hs_per_over_range(data)              ((0x00004000&(data))>>14)
#define  ONMS_onms1_interrupt_en_get_on1_ie_vs_per_timeout(data)                 ((0x00002000&(data))>>13)
#define  ONMS_onms1_interrupt_en_get_on1_ie_vs_high_timeout(data)                ((0x00001000&(data))>>12)
#define  ONMS_onms1_interrupt_en_get_on1_ie_vs_per_overflow(data)                ((0x00000800&(data))>>11)
#define  ONMS_onms1_interrupt_en_get_on1_ie_hs_per_overflow(data)                ((0x00000400&(data))>>10)
#define  ONMS_onms1_interrupt_en_get_on1_ie_vs_pol_chg(data)                     ((0x00000200&(data))>>9)
#define  ONMS_onms1_interrupt_en_get_on1_ie_hs_pol_chg(data)                     ((0x00000100&(data))>>8)
#define  ONMS_onms1_interrupt_en_get_on1_ie_vtotalde_chg(data)                   ((0x00000080&(data))>>7)
#define  ONMS_onms1_interrupt_en_get_on1_ie_vtotal_chg(data)                     ((0x00000040&(data))>>6)
#define  ONMS_onms1_interrupt_en_get_on1_ie_hact_chg(data)                       ((0x00000020&(data))>>5)
#define  ONMS_onms1_interrupt_en_get_on1_ie_htotal_chg(data)                     ((0x00000010&(data))>>4)
#define  ONMS_onms1_interrupt_en_get_on1_ie_hs_active_pixel_var(data)            ((0x00000008&(data))>>3)
#define  ONMS_onms1_interrupt_en_get_on1_ie_vs_per_underflow(data)               ((0x00000004&(data))>>2)

#define  ONMS_Vs_Timing_monitor_ctrl_1                                          0x1802127C
#define  ONMS_Vs_Timing_monitor_ctrl_1_reg_addr                                  "0xB802127C"
#define  ONMS_Vs_Timing_monitor_ctrl_1_reg                                       0xB802127C
#define  ONMS_Vs_Timing_monitor_ctrl_1_inst_addr                                 "0x000F"
#define  set_ONMS_Vs_Timing_monitor_ctrl_1_reg(data)                             (*((volatile unsigned int*)ONMS_Vs_Timing_monitor_ctrl_1_reg)=data)
#define  get_ONMS_Vs_Timing_monitor_ctrl_1_reg                                   (*((volatile unsigned int*)ONMS_Vs_Timing_monitor_ctrl_1_reg))
#define  ONMS_Vs_Timing_monitor_ctrl_1_vs_period_ms_shift                        (0)
#define  ONMS_Vs_Timing_monitor_ctrl_1_vs_period_ms_mask                         (0x00000001)
#define  ONMS_Vs_Timing_monitor_ctrl_1_vs_period_ms(data)                        (0x00000001&(data))
#define  ONMS_Vs_Timing_monitor_ctrl_1_get_vs_period_ms(data)                    (0x00000001&(data))

#define  ONMS_Vs_Timing_monitor_result_1                                        0x18021280
#define  ONMS_Vs_Timing_monitor_result_1_reg_addr                                "0xB8021280"
#define  ONMS_Vs_Timing_monitor_result_1_reg                                     0xB8021280
#define  ONMS_Vs_Timing_monitor_result_1_inst_addr                               "0x0010"
#define  set_ONMS_Vs_Timing_monitor_result_1_reg(data)                           (*((volatile unsigned int*)ONMS_Vs_Timing_monitor_result_1_reg)=data)
#define  get_ONMS_Vs_Timing_monitor_result_1_reg                                 (*((volatile unsigned int*)ONMS_Vs_Timing_monitor_result_1_reg))
#define  ONMS_Vs_Timing_monitor_result_1_vs_period_s0_shift                      (0)
#define  ONMS_Vs_Timing_monitor_result_1_vs_period_s0_mask                       (0xFFFFFFFF)
#define  ONMS_Vs_Timing_monitor_result_1_vs_period_s0(data)                      (0xFFFFFFFF&(data))
#define  ONMS_Vs_Timing_monitor_result_1_get_vs_period_s0(data)                  (0xFFFFFFFF&(data))

#define  ONMS_Vs_Timing_monitor_result_2                                        0x18021284
#define  ONMS_Vs_Timing_monitor_result_2_reg_addr                                "0xB8021284"
#define  ONMS_Vs_Timing_monitor_result_2_reg                                     0xB8021284
#define  ONMS_Vs_Timing_monitor_result_2_inst_addr                               "0x0011"
#define  set_ONMS_Vs_Timing_monitor_result_2_reg(data)                           (*((volatile unsigned int*)ONMS_Vs_Timing_monitor_result_2_reg)=data)
#define  get_ONMS_Vs_Timing_monitor_result_2_reg                                 (*((volatile unsigned int*)ONMS_Vs_Timing_monitor_result_2_reg))
#define  ONMS_Vs_Timing_monitor_result_2_vs_period_s1_shift                      (0)
#define  ONMS_Vs_Timing_monitor_result_2_vs_period_s1_mask                       (0xFFFFFFFF)
#define  ONMS_Vs_Timing_monitor_result_2_vs_period_s1(data)                      (0xFFFFFFFF&(data))
#define  ONMS_Vs_Timing_monitor_result_2_get_vs_period_s1(data)                  (0xFFFFFFFF&(data))

#define  ONMS_Onms1_Demode_ctrl                                                 0x18021288
#define  ONMS_Onms1_Demode_ctrl_reg_addr                                         "0xB8021288"
#define  ONMS_Onms1_Demode_ctrl_reg                                              0xB8021288
#define  ONMS_Onms1_Demode_ctrl_inst_addr                                        "0x0012"
#define  set_ONMS_Onms1_Demode_ctrl_reg(data)                                    (*((volatile unsigned int*)ONMS_Onms1_Demode_ctrl_reg)=data)
#define  get_ONMS_Onms1_Demode_ctrl_reg                                          (*((volatile unsigned int*)ONMS_Onms1_Demode_ctrl_reg))
#define  ONMS_Onms1_Demode_ctrl_on1_xtal_sel_shift                               (31)
#define  ONMS_Onms1_Demode_ctrl_on1_demode_vtotal_delta_shift                    (4)
#define  ONMS_Onms1_Demode_ctrl_on1_demode_en_shift                              (0)
#define  ONMS_Onms1_Demode_ctrl_on1_xtal_sel_mask                                (0x80000000)
#define  ONMS_Onms1_Demode_ctrl_on1_demode_vtotal_delta_mask                     (0x0000FFF0)
#define  ONMS_Onms1_Demode_ctrl_on1_demode_en_mask                               (0x00000001)
#define  ONMS_Onms1_Demode_ctrl_on1_xtal_sel(data)                               (0x80000000&((data)<<31))
#define  ONMS_Onms1_Demode_ctrl_on1_demode_vtotal_delta(data)                    (0x0000FFF0&((data)<<4))
#define  ONMS_Onms1_Demode_ctrl_on1_demode_en(data)                              (0x00000001&(data))
#define  ONMS_Onms1_Demode_ctrl_get_on1_xtal_sel(data)                           ((0x80000000&(data))>>31)
#define  ONMS_Onms1_Demode_ctrl_get_on1_demode_vtotal_delta(data)                ((0x0000FFF0&(data))>>4)
#define  ONMS_Onms1_Demode_ctrl_get_on1_demode_en(data)                          (0x00000001&(data))

#define  ONMS_Onms1_Demode_Act                                                  0x1802128C
#define  ONMS_Onms1_Demode_Act_reg_addr                                          "0xB802128C"
#define  ONMS_Onms1_Demode_Act_reg                                               0xB802128C
#define  ONMS_Onms1_Demode_Act_inst_addr                                         "0x0013"
#define  set_ONMS_Onms1_Demode_Act_reg(data)                                     (*((volatile unsigned int*)ONMS_Onms1_Demode_Act_reg)=data)
#define  get_ONMS_Onms1_Demode_Act_reg                                           (*((volatile unsigned int*)ONMS_Onms1_Demode_Act_reg))
#define  ONMS_Onms1_Demode_Act_on1_de_hact_shift                                 (18)
#define  ONMS_Onms1_Demode_Act_on1_de_hact_fract_shift                           (14)
#define  ONMS_Onms1_Demode_Act_on1_de_vact_shift                                 (0)
#define  ONMS_Onms1_Demode_Act_on1_de_hact_mask                                  (0xFFFC0000)
#define  ONMS_Onms1_Demode_Act_on1_de_hact_fract_mask                            (0x0003C000)
#define  ONMS_Onms1_Demode_Act_on1_de_vact_mask                                  (0x00003FFF)
#define  ONMS_Onms1_Demode_Act_on1_de_hact(data)                                 (0xFFFC0000&((data)<<18))
#define  ONMS_Onms1_Demode_Act_on1_de_hact_fract(data)                           (0x0003C000&((data)<<14))
#define  ONMS_Onms1_Demode_Act_on1_de_vact(data)                                 (0x00003FFF&(data))
#define  ONMS_Onms1_Demode_Act_get_on1_de_hact(data)                             ((0xFFFC0000&(data))>>18)
#define  ONMS_Onms1_Demode_Act_get_on1_de_hact_fract(data)                       ((0x0003C000&(data))>>14)
#define  ONMS_Onms1_Demode_Act_get_on1_de_vact(data)                             (0x00003FFF&(data))

#define  ONMS_Onms1_Demode_Vs_period                                            0x18021290
#define  ONMS_Onms1_Demode_Vs_period_reg_addr                                    "0xB8021290"
#define  ONMS_Onms1_Demode_Vs_period_reg                                         0xB8021290
#define  ONMS_Onms1_Demode_Vs_period_inst_addr                                   "0x0014"
#define  set_ONMS_Onms1_Demode_Vs_period_reg(data)                               (*((volatile unsigned int*)ONMS_Onms1_Demode_Vs_period_reg)=data)
#define  get_ONMS_Onms1_Demode_Vs_period_reg                                     (*((volatile unsigned int*)ONMS_Onms1_Demode_Vs_period_reg))
#define  ONMS_Onms1_Demode_Vs_period_on1_de_vs_period_shift                      (0)
#define  ONMS_Onms1_Demode_Vs_period_on1_de_vs_period_mask                       (0x003FFFFF)
#define  ONMS_Onms1_Demode_Vs_period_on1_de_vs_period(data)                      (0x003FFFFF&(data))
#define  ONMS_Onms1_Demode_Vs_period_get_on1_de_vs_period(data)                  (0x003FFFFF&(data))

#define  ONMS_Onms1_Demode_Hs_period                                            0x18021294
#define  ONMS_Onms1_Demode_Hs_period_reg_addr                                    "0xB8021294"
#define  ONMS_Onms1_Demode_Hs_period_reg                                         0xB8021294
#define  ONMS_Onms1_Demode_Hs_period_inst_addr                                   "0x0015"
#define  set_ONMS_Onms1_Demode_Hs_period_reg(data)                               (*((volatile unsigned int*)ONMS_Onms1_Demode_Hs_period_reg)=data)
#define  get_ONMS_Onms1_Demode_Hs_period_reg                                     (*((volatile unsigned int*)ONMS_Onms1_Demode_Hs_period_reg))
#define  ONMS_Onms1_Demode_Hs_period_on1_de_hs_period_shift                      (4)
#define  ONMS_Onms1_Demode_Hs_period_on1_de_hs_period_fract_shift                (0)
#define  ONMS_Onms1_Demode_Hs_period_on1_de_hs_period_mask                       (0x0003FFF0)
#define  ONMS_Onms1_Demode_Hs_period_on1_de_hs_period_fract_mask                 (0x0000000F)
#define  ONMS_Onms1_Demode_Hs_period_on1_de_hs_period(data)                      (0x0003FFF0&((data)<<4))
#define  ONMS_Onms1_Demode_Hs_period_on1_de_hs_period_fract(data)                (0x0000000F&(data))
#define  ONMS_Onms1_Demode_Hs_period_get_on1_de_hs_period(data)                  ((0x0003FFF0&(data))>>4)
#define  ONMS_Onms1_Demode_Hs_period_get_on1_de_hs_period_fract(data)            (0x0000000F&(data))

#define  ONMS_Onms1_Demode_Vs_STA                                               0x18021298
#define  ONMS_Onms1_Demode_Vs_STA_reg_addr                                       "0xB8021298"
#define  ONMS_Onms1_Demode_Vs_STA_reg                                            0xB8021298
#define  ONMS_Onms1_Demode_Vs_STA_inst_addr                                      "0x0016"
#define  set_ONMS_Onms1_Demode_Vs_STA_reg(data)                                  (*((volatile unsigned int*)ONMS_Onms1_Demode_Vs_STA_reg)=data)
#define  get_ONMS_Onms1_Demode_Vs_STA_reg                                        (*((volatile unsigned int*)ONMS_Onms1_Demode_Vs_STA_reg))
#define  ONMS_Onms1_Demode_Vs_STA_on1_de_vs_sta_shift                            (0)
#define  ONMS_Onms1_Demode_Vs_STA_on1_de_vs_sta_mask                             (0x003FFFFF)
#define  ONMS_Onms1_Demode_Vs_STA_on1_de_vs_sta(data)                            (0x003FFFFF&(data))
#define  ONMS_Onms1_Demode_Vs_STA_get_on1_de_vs_sta(data)                        (0x003FFFFF&(data))

#define  ONMS_Onms1_Demode_Vs_END                                               0x1802129C
#define  ONMS_Onms1_Demode_Vs_END_reg_addr                                       "0xB802129C"
#define  ONMS_Onms1_Demode_Vs_END_reg                                            0xB802129C
#define  ONMS_Onms1_Demode_Vs_END_inst_addr                                      "0x0017"
#define  set_ONMS_Onms1_Demode_Vs_END_reg(data)                                  (*((volatile unsigned int*)ONMS_Onms1_Demode_Vs_END_reg)=data)
#define  get_ONMS_Onms1_Demode_Vs_END_reg                                        (*((volatile unsigned int*)ONMS_Onms1_Demode_Vs_END_reg))
#define  ONMS_Onms1_Demode_Vs_END_on1_de_vs_end_shift                            (0)
#define  ONMS_Onms1_Demode_Vs_END_on1_de_vs_end_mask                             (0x003FFFFF)
#define  ONMS_Onms1_Demode_Vs_END_on1_de_vs_end(data)                            (0x003FFFFF&(data))
#define  ONMS_Onms1_Demode_Vs_END_get_on1_de_vs_end(data)                        (0x003FFFFF&(data))

#define  ONMS_Onms1_Demode_Vs_UF                                                0x180212A0
#define  ONMS_Onms1_Demode_Vs_UF_reg_addr                                        "0xB80212A0"
#define  ONMS_Onms1_Demode_Vs_UF_reg                                             0xB80212A0
#define  ONMS_Onms1_Demode_Vs_UF_inst_addr                                       "0x0018"
#define  set_ONMS_Onms1_Demode_Vs_UF_reg(data)                                   (*((volatile unsigned int*)ONMS_Onms1_Demode_Vs_UF_reg)=data)
#define  get_ONMS_Onms1_Demode_Vs_UF_reg                                         (*((volatile unsigned int*)ONMS_Onms1_Demode_Vs_UF_reg))
#define  ONMS_Onms1_Demode_Vs_UF_on1_de_vsper_uf_th_shift                        (0)
#define  ONMS_Onms1_Demode_Vs_UF_on1_de_vsper_uf_th_mask                         (0x003FFFFF)
#define  ONMS_Onms1_Demode_Vs_UF_on1_de_vsper_uf_th(data)                        (0x003FFFFF&(data))
#define  ONMS_Onms1_Demode_Vs_UF_get_on1_de_vsper_uf_th(data)                    (0x003FFFFF&(data))

#define  ONMS_Onms1_Demode_Vs_OF                                                0x180212A4
#define  ONMS_Onms1_Demode_Vs_OF_reg_addr                                        "0xB80212A4"
#define  ONMS_Onms1_Demode_Vs_OF_reg                                             0xB80212A4
#define  ONMS_Onms1_Demode_Vs_OF_inst_addr                                       "0x0019"
#define  set_ONMS_Onms1_Demode_Vs_OF_reg(data)                                   (*((volatile unsigned int*)ONMS_Onms1_Demode_Vs_OF_reg)=data)
#define  get_ONMS_Onms1_Demode_Vs_OF_reg                                         (*((volatile unsigned int*)ONMS_Onms1_Demode_Vs_OF_reg))
#define  ONMS_Onms1_Demode_Vs_OF_on1_de_vsper_of_th_shift                        (0)
#define  ONMS_Onms1_Demode_Vs_OF_on1_de_vsper_of_th_mask                         (0x003FFFFF)
#define  ONMS_Onms1_Demode_Vs_OF_on1_de_vsper_of_th(data)                        (0x003FFFFF&(data))
#define  ONMS_Onms1_Demode_Vs_OF_get_on1_de_vsper_of_th(data)                    (0x003FFFFF&(data))

#define  ONMS_onms2_ctrl                                                        0x18021300
#define  ONMS_onms2_ctrl_reg_addr                                                "0xB8021300"
#define  ONMS_onms2_ctrl_reg                                                     0xB8021300
#define  ONMS_onms2_ctrl_inst_addr                                               "0x001A"
#define  set_ONMS_onms2_ctrl_reg(data)                                           (*((volatile unsigned int*)ONMS_onms2_ctrl_reg)=data)
#define  get_ONMS_onms2_ctrl_reg                                                 (*((volatile unsigned int*)ONMS_onms2_ctrl_reg))
#define  ONMS_onms2_ctrl_on2_continuous_popup_shift                              (31)
#define  ONMS_onms2_ctrl_on2_hd21_ms_en_shift                                    (30)
#define  ONMS_onms2_ctrl_on2_ms_src_sel_shift                                    (29)
#define  ONMS_onms2_ctrl_on2_blk_2frame_en_shift                                 (28)
#define  ONMS_onms2_ctrl_on2_vtotal_max_delta_shift                              (20)
#define  ONMS_onms2_ctrl_on2_htotal_max_delta_shift                              (16)
#define  ONMS_onms2_ctrl_on2_htotal_of_th_shift                                  (14)
#define  ONMS_onms2_ctrl_on2_input_align_shift                                   (13)
#define  ONMS_onms2_ctrl_on2_meas_to_sel_shift                                   (6)
#define  ONMS_onms2_ctrl_on2_sycms_clk_shift                                     (5)
#define  ONMS_onms2_ctrl_on2_vs_meas_inv_shift                                   (4)
#define  ONMS_onms2_ctrl_on2_hs_meas_inv_shift                                   (3)
#define  ONMS_onms2_ctrl_on2_popup_meas_shift                                    (2)
#define  ONMS_onms2_ctrl_on2_ms_conti_shift                                      (1)
#define  ONMS_onms2_ctrl_on2_start_ms_shift                                      (0)
#define  ONMS_onms2_ctrl_on2_continuous_popup_mask                               (0x80000000)
#define  ONMS_onms2_ctrl_on2_hd21_ms_en_mask                                     (0x40000000)
#define  ONMS_onms2_ctrl_on2_ms_src_sel_mask                                     (0x20000000)
#define  ONMS_onms2_ctrl_on2_blk_2frame_en_mask                                  (0x10000000)
#define  ONMS_onms2_ctrl_on2_vtotal_max_delta_mask                               (0x00F00000)
#define  ONMS_onms2_ctrl_on2_htotal_max_delta_mask                               (0x000F0000)
#define  ONMS_onms2_ctrl_on2_htotal_of_th_mask                                   (0x0000C000)
#define  ONMS_onms2_ctrl_on2_input_align_mask                                    (0x00002000)
#define  ONMS_onms2_ctrl_on2_meas_to_sel_mask                                    (0x00000040)
#define  ONMS_onms2_ctrl_on2_sycms_clk_mask                                      (0x00000020)
#define  ONMS_onms2_ctrl_on2_vs_meas_inv_mask                                    (0x00000010)
#define  ONMS_onms2_ctrl_on2_hs_meas_inv_mask                                    (0x00000008)
#define  ONMS_onms2_ctrl_on2_popup_meas_mask                                     (0x00000004)
#define  ONMS_onms2_ctrl_on2_ms_conti_mask                                       (0x00000002)
#define  ONMS_onms2_ctrl_on2_start_ms_mask                                       (0x00000001)
#define  ONMS_onms2_ctrl_on2_continuous_popup(data)                              (0x80000000&((data)<<31))
#define  ONMS_onms2_ctrl_on2_hd21_ms_en(data)                                    (0x40000000&((data)<<30))
#define  ONMS_onms2_ctrl_on2_ms_src_sel(data)                                    (0x20000000&((data)<<29))
#define  ONMS_onms2_ctrl_on2_blk_2frame_en(data)                                 (0x10000000&((data)<<28))
#define  ONMS_onms2_ctrl_on2_vtotal_max_delta(data)                              (0x00F00000&((data)<<20))
#define  ONMS_onms2_ctrl_on2_htotal_max_delta(data)                              (0x000F0000&((data)<<16))
#define  ONMS_onms2_ctrl_on2_htotal_of_th(data)                                  (0x0000C000&((data)<<14))
#define  ONMS_onms2_ctrl_on2_input_align(data)                                   (0x00002000&((data)<<13))
#define  ONMS_onms2_ctrl_on2_meas_to_sel(data)                                   (0x00000040&((data)<<6))
#define  ONMS_onms2_ctrl_on2_sycms_clk(data)                                     (0x00000020&((data)<<5))
#define  ONMS_onms2_ctrl_on2_vs_meas_inv(data)                                   (0x00000010&((data)<<4))
#define  ONMS_onms2_ctrl_on2_hs_meas_inv(data)                                   (0x00000008&((data)<<3))
#define  ONMS_onms2_ctrl_on2_popup_meas(data)                                    (0x00000004&((data)<<2))
#define  ONMS_onms2_ctrl_on2_ms_conti(data)                                      (0x00000002&((data)<<1))
#define  ONMS_onms2_ctrl_on2_start_ms(data)                                      (0x00000001&(data))
#define  ONMS_onms2_ctrl_get_on2_continuous_popup(data)                          ((0x80000000&(data))>>31)
#define  ONMS_onms2_ctrl_get_on2_hd21_ms_en(data)                                ((0x40000000&(data))>>30)
#define  ONMS_onms2_ctrl_get_on2_ms_src_sel(data)                                ((0x20000000&(data))>>29)
#define  ONMS_onms2_ctrl_get_on2_blk_2frame_en(data)                             ((0x10000000&(data))>>28)
#define  ONMS_onms2_ctrl_get_on2_vtotal_max_delta(data)                          ((0x00F00000&(data))>>20)
#define  ONMS_onms2_ctrl_get_on2_htotal_max_delta(data)                          ((0x000F0000&(data))>>16)
#define  ONMS_onms2_ctrl_get_on2_htotal_of_th(data)                              ((0x0000C000&(data))>>14)
#define  ONMS_onms2_ctrl_get_on2_input_align(data)                               ((0x00002000&(data))>>13)
#define  ONMS_onms2_ctrl_get_on2_meas_to_sel(data)                               ((0x00000040&(data))>>6)
#define  ONMS_onms2_ctrl_get_on2_sycms_clk(data)                                 ((0x00000020&(data))>>5)
#define  ONMS_onms2_ctrl_get_on2_vs_meas_inv(data)                               ((0x00000010&(data))>>4)
#define  ONMS_onms2_ctrl_get_on2_hs_meas_inv(data)                               ((0x00000008&(data))>>3)
#define  ONMS_onms2_ctrl_get_on2_popup_meas(data)                                ((0x00000004&(data))>>2)
#define  ONMS_onms2_ctrl_get_on2_ms_conti(data)                                  ((0x00000002&(data))>>1)
#define  ONMS_onms2_ctrl_get_on2_start_ms(data)                                  (0x00000001&(data))

#define  ONMS_onms2_vs_period                                                   0x18021330
#define  ONMS_onms2_vs_period_reg_addr                                           "0xB8021330"
#define  ONMS_onms2_vs_period_reg                                                0xB8021330
#define  ONMS_onms2_vs_period_inst_addr                                          "0x001B"
#define  set_ONMS_onms2_vs_period_reg(data)                                      (*((volatile unsigned int*)ONMS_onms2_vs_period_reg)=data)
#define  get_ONMS_onms2_vs_period_reg                                            (*((volatile unsigned int*)ONMS_onms2_vs_period_reg))
#define  ONMS_onms2_vs_period_on2_vtotalde_shift                                 (16)
#define  ONMS_onms2_vs_period_on2_vtotal_shift                                   (0)
#define  ONMS_onms2_vs_period_on2_vtotalde_mask                                  (0x1FFF0000)
#define  ONMS_onms2_vs_period_on2_vtotal_mask                                    (0x00007FFF)
#define  ONMS_onms2_vs_period_on2_vtotalde(data)                                 (0x1FFF0000&((data)<<16))
#define  ONMS_onms2_vs_period_on2_vtotal(data)                                   (0x00007FFF&(data))
#define  ONMS_onms2_vs_period_get_on2_vtotalde(data)                             ((0x1FFF0000&(data))>>16)
#define  ONMS_onms2_vs_period_get_on2_vtotal(data)                               (0x00007FFF&(data))

#define  ONMS_onms2_vshs_high_period                                            0x18021334
#define  ONMS_onms2_vshs_high_period_reg_addr                                    "0xB8021334"
#define  ONMS_onms2_vshs_high_period_reg                                         0xB8021334
#define  ONMS_onms2_vshs_high_period_inst_addr                                   "0x001C"
#define  set_ONMS_onms2_vshs_high_period_reg(data)                               (*((volatile unsigned int*)ONMS_onms2_vshs_high_period_reg)=data)
#define  get_ONMS_onms2_vshs_high_period_reg                                     (*((volatile unsigned int*)ONMS_onms2_vshs_high_period_reg))
#define  ONMS_onms2_vshs_high_period_on2_vs_high_period_shift                    (16)
#define  ONMS_onms2_vshs_high_period_on2_hs_high_period_shift                    (0)
#define  ONMS_onms2_vshs_high_period_on2_vs_high_period_mask                     (0x7FFF0000)
#define  ONMS_onms2_vshs_high_period_on2_hs_high_period_mask                     (0x00003FFF)
#define  ONMS_onms2_vshs_high_period_on2_vs_high_period(data)                    (0x7FFF0000&((data)<<16))
#define  ONMS_onms2_vshs_high_period_on2_hs_high_period(data)                    (0x00003FFF&(data))
#define  ONMS_onms2_vshs_high_period_get_on2_vs_high_period(data)                ((0x7FFF0000&(data))>>16)
#define  ONMS_onms2_vshs_high_period_get_on2_hs_high_period(data)                (0x00003FFF&(data))

#define  ONMS_onms2_hs_period                                                   0x18021338
#define  ONMS_onms2_hs_period_reg_addr                                           "0xB8021338"
#define  ONMS_onms2_hs_period_reg                                                0xB8021338
#define  ONMS_onms2_hs_period_inst_addr                                          "0x001D"
#define  set_ONMS_onms2_hs_period_reg(data)                                      (*((volatile unsigned int*)ONMS_onms2_hs_period_reg)=data)
#define  get_ONMS_onms2_hs_period_reg                                            (*((volatile unsigned int*)ONMS_onms2_hs_period_reg))
#define  ONMS_onms2_hs_period_on2_htotal_h12b_shift                              (4)
#define  ONMS_onms2_hs_period_on2_htotal_f4b_shift                               (0)
#define  ONMS_onms2_hs_period_on2_htotal_h12b_mask                               (0x0003FFF0)
#define  ONMS_onms2_hs_period_on2_htotal_f4b_mask                                (0x0000000F)
#define  ONMS_onms2_hs_period_on2_htotal_h12b(data)                              (0x0003FFF0&((data)<<4))
#define  ONMS_onms2_hs_period_on2_htotal_f4b(data)                               (0x0000000F&(data))
#define  ONMS_onms2_hs_period_get_on2_htotal_h12b(data)                          ((0x0003FFF0&(data))>>4)
#define  ONMS_onms2_hs_period_get_on2_htotal_f4b(data)                           (0x0000000F&(data))

#define  ONMS_onms2_vact_sta                                                    0x1802133C
#define  ONMS_onms2_vact_sta_reg_addr                                            "0xB802133C"
#define  ONMS_onms2_vact_sta_reg                                                 0xB802133C
#define  ONMS_onms2_vact_sta_inst_addr                                           "0x001E"
#define  set_ONMS_onms2_vact_sta_reg(data)                                       (*((volatile unsigned int*)ONMS_onms2_vact_sta_reg)=data)
#define  get_ONMS_onms2_vact_sta_reg                                             (*((volatile unsigned int*)ONMS_onms2_vact_sta_reg))
#define  ONMS_onms2_vact_sta_on2_vblank_len_shift                                (16)
#define  ONMS_onms2_vact_sta_on2_vact_start_shift                                (0)
#define  ONMS_onms2_vact_sta_on2_vblank_len_mask                                 (0x00FF0000)
#define  ONMS_onms2_vact_sta_on2_vact_start_mask                                 (0x00000FFF)
#define  ONMS_onms2_vact_sta_on2_vblank_len(data)                                (0x00FF0000&((data)<<16))
#define  ONMS_onms2_vact_sta_on2_vact_start(data)                                (0x00000FFF&(data))
#define  ONMS_onms2_vact_sta_get_on2_vblank_len(data)                            ((0x00FF0000&(data))>>16)
#define  ONMS_onms2_vact_sta_get_on2_vact_start(data)                            (0x00000FFF&(data))

#define  ONMS_onms2_hact_sta                                                    0x18021340
#define  ONMS_onms2_hact_sta_reg_addr                                            "0xB8021340"
#define  ONMS_onms2_hact_sta_reg                                                 0xB8021340
#define  ONMS_onms2_hact_sta_inst_addr                                           "0x001F"
#define  set_ONMS_onms2_hact_sta_reg(data)                                       (*((volatile unsigned int*)ONMS_onms2_hact_sta_reg)=data)
#define  get_ONMS_onms2_hact_sta_reg                                             (*((volatile unsigned int*)ONMS_onms2_hact_sta_reg))
#define  ONMS_onms2_hact_sta_on2_hact_start_shift                                (0)
#define  ONMS_onms2_hact_sta_on2_hact_start_mask                                 (0x00003FFF)
#define  ONMS_onms2_hact_sta_on2_hact_start(data)                                (0x00003FFF&(data))
#define  ONMS_onms2_hact_sta_get_on2_hact_start(data)                            (0x00003FFF&(data))

#define  ONMS_onms2_hact                                                        0x18021344
#define  ONMS_onms2_hact_reg_addr                                                "0xB8021344"
#define  ONMS_onms2_hact_reg                                                     0xB8021344
#define  ONMS_onms2_hact_inst_addr                                               "0x0020"
#define  set_ONMS_onms2_hact_reg(data)                                           (*((volatile unsigned int*)ONMS_onms2_hact_reg)=data)
#define  get_ONMS_onms2_hact_reg                                                 (*((volatile unsigned int*)ONMS_onms2_hact_reg))
#define  ONMS_onms2_hact_on2_hact_shift                                          (4)
#define  ONMS_onms2_hact_on2_hact_fract_shift                                    (0)
#define  ONMS_onms2_hact_on2_hact_mask                                           (0x0003FFF0)
#define  ONMS_onms2_hact_on2_hact_fract_mask                                     (0x0000000F)
#define  ONMS_onms2_hact_on2_hact(data)                                          (0x0003FFF0&((data)<<4))
#define  ONMS_onms2_hact_on2_hact_fract(data)                                    (0x0000000F&(data))
#define  ONMS_onms2_hact_get_on2_hact(data)                                      ((0x0003FFF0&(data))>>4)
#define  ONMS_onms2_hact_get_on2_hact_fract(data)                                (0x0000000F&(data))

#define  ONMS_onms2_ctrl_1                                                      0x18021348
#define  ONMS_onms2_ctrl_1_reg_addr                                              "0xB8021348"
#define  ONMS_onms2_ctrl_1_reg                                                   0xB8021348
#define  ONMS_onms2_ctrl_1_inst_addr                                             "0x0021"
#define  set_ONMS_onms2_ctrl_1_reg(data)                                         (*((volatile unsigned int*)ONMS_onms2_ctrl_1_reg)=data)
#define  get_ONMS_onms2_ctrl_1_reg                                               (*((volatile unsigned int*)ONMS_onms2_ctrl_1_reg))
#define  ONMS_onms2_ctrl_1_on2_vtotal_uf_th_shift                                (16)
#define  ONMS_onms2_ctrl_1_on2_vtotal_of_th_shift                                (0)
#define  ONMS_onms2_ctrl_1_on2_vtotal_uf_th_mask                                 (0x7FFF0000)
#define  ONMS_onms2_ctrl_1_on2_vtotal_of_th_mask                                 (0x00007FFF)
#define  ONMS_onms2_ctrl_1_on2_vtotal_uf_th(data)                                (0x7FFF0000&((data)<<16))
#define  ONMS_onms2_ctrl_1_on2_vtotal_of_th(data)                                (0x00007FFF&(data))
#define  ONMS_onms2_ctrl_1_get_on2_vtotal_uf_th(data)                            ((0x7FFF0000&(data))>>16)
#define  ONMS_onms2_ctrl_1_get_on2_vtotal_of_th(data)                            (0x00007FFF&(data))

#define  ONMS_onms2_ctrl_2                                                      0x1802134C
#define  ONMS_onms2_ctrl_2_reg_addr                                              "0xB802134C"
#define  ONMS_onms2_ctrl_2_reg                                                   0xB802134C
#define  ONMS_onms2_ctrl_2_inst_addr                                             "0x0022"
#define  set_ONMS_onms2_ctrl_2_reg(data)                                         (*((volatile unsigned int*)ONMS_onms2_ctrl_2_reg)=data)
#define  get_ONMS_onms2_ctrl_2_reg                                               (*((volatile unsigned int*)ONMS_onms2_ctrl_2_reg))
#define  ONMS_onms2_ctrl_2_on2_hgclk_gate_th_shift                               (0)
#define  ONMS_onms2_ctrl_2_on2_hgclk_gate_th_mask                                (0x00003FFF)
#define  ONMS_onms2_ctrl_2_on2_hgclk_gate_th(data)                               (0x00003FFF&(data))
#define  ONMS_onms2_ctrl_2_get_on2_hgclk_gate_th(data)                           (0x00003FFF&(data))

#define  ONMS_onms2_hsync_meas_ctrl                                             0x1802135C
#define  ONMS_onms2_hsync_meas_ctrl_reg_addr                                     "0xB802135C"
#define  ONMS_onms2_hsync_meas_ctrl_reg                                          0xB802135C
#define  ONMS_onms2_hsync_meas_ctrl_inst_addr                                    "0x0023"
#define  set_ONMS_onms2_hsync_meas_ctrl_reg(data)                                (*((volatile unsigned int*)ONMS_onms2_hsync_meas_ctrl_reg)=data)
#define  get_ONMS_onms2_hsync_meas_ctrl_reg                                      (*((volatile unsigned int*)ONMS_onms2_hsync_meas_ctrl_reg))
#define  ONMS_onms2_hsync_meas_ctrl_on2_htotal_max_delta_new_shift               (24)
#define  ONMS_onms2_hsync_meas_ctrl_on2_average_line_shift                       (16)
#define  ONMS_onms2_hsync_meas_ctrl_on2_target_measure_shift                     (0)
#define  ONMS_onms2_hsync_meas_ctrl_on2_htotal_max_delta_new_mask                (0x7F000000)
#define  ONMS_onms2_hsync_meas_ctrl_on2_average_line_mask                        (0x000F0000)
#define  ONMS_onms2_hsync_meas_ctrl_on2_target_measure_mask                      (0x00003FFF)
#define  ONMS_onms2_hsync_meas_ctrl_on2_htotal_max_delta_new(data)               (0x7F000000&((data)<<24))
#define  ONMS_onms2_hsync_meas_ctrl_on2_average_line(data)                       (0x000F0000&((data)<<16))
#define  ONMS_onms2_hsync_meas_ctrl_on2_target_measure(data)                     (0x00003FFF&(data))
#define  ONMS_onms2_hsync_meas_ctrl_get_on2_htotal_max_delta_new(data)           ((0x7F000000&(data))>>24)
#define  ONMS_onms2_hsync_meas_ctrl_get_on2_average_line(data)                   ((0x000F0000&(data))>>16)
#define  ONMS_onms2_hsync_meas_ctrl_get_on2_target_measure(data)                 (0x00003FFF&(data))

#define  ONMS_onms2_hsync_meas_ctrl_2                                           0x18021360
#define  ONMS_onms2_hsync_meas_ctrl_2_reg_addr                                   "0xB8021360"
#define  ONMS_onms2_hsync_meas_ctrl_2_reg                                        0xB8021360
#define  ONMS_onms2_hsync_meas_ctrl_2_inst_addr                                  "0x0024"
#define  set_ONMS_onms2_hsync_meas_ctrl_2_reg(data)                              (*((volatile unsigned int*)ONMS_onms2_hsync_meas_ctrl_2_reg)=data)
#define  get_ONMS_onms2_hsync_meas_ctrl_2_reg                                    (*((volatile unsigned int*)ONMS_onms2_hsync_meas_ctrl_2_reg))
#define  ONMS_onms2_hsync_meas_ctrl_2_on2_vmeas_end_shift                        (16)
#define  ONMS_onms2_hsync_meas_ctrl_2_on2_vmeas_start_shift                      (0)
#define  ONMS_onms2_hsync_meas_ctrl_2_on2_vmeas_end_mask                         (0x7FFF0000)
#define  ONMS_onms2_hsync_meas_ctrl_2_on2_vmeas_start_mask                       (0x00007FFF)
#define  ONMS_onms2_hsync_meas_ctrl_2_on2_vmeas_end(data)                        (0x7FFF0000&((data)<<16))
#define  ONMS_onms2_hsync_meas_ctrl_2_on2_vmeas_start(data)                      (0x00007FFF&(data))
#define  ONMS_onms2_hsync_meas_ctrl_2_get_on2_vmeas_end(data)                    ((0x7FFF0000&(data))>>16)
#define  ONMS_onms2_hsync_meas_ctrl_2_get_on2_vmeas_start(data)                  (0x00007FFF&(data))

#define  ONMS_onms2_hsync_meas_result                                           0x18021364
#define  ONMS_onms2_hsync_meas_result_reg_addr                                   "0xB8021364"
#define  ONMS_onms2_hsync_meas_result_reg                                        0xB8021364
#define  ONMS_onms2_hsync_meas_result_inst_addr                                  "0x0025"
#define  set_ONMS_onms2_hsync_meas_result_reg(data)                              (*((volatile unsigned int*)ONMS_onms2_hsync_meas_result_reg)=data)
#define  get_ONMS_onms2_hsync_meas_result_reg                                    (*((volatile unsigned int*)ONMS_onms2_hsync_meas_result_reg))
#define  ONMS_onms2_hsync_meas_result_on2_hmax_delta_total_shift                 (0)
#define  ONMS_onms2_hsync_meas_result_on2_hmax_delta_total_mask                  (0x00003FFF)
#define  ONMS_onms2_hsync_meas_result_on2_hmax_delta_total(data)                 (0x00003FFF&(data))
#define  ONMS_onms2_hsync_meas_result_get_on2_hmax_delta_total(data)             (0x00003FFF&(data))

#define  ONMS_onms2_status                                                      0x18021368
#define  ONMS_onms2_status_reg_addr                                              "0xB8021368"
#define  ONMS_onms2_status_reg                                                   0xB8021368
#define  ONMS_onms2_status_inst_addr                                             "0x0026"
#define  set_ONMS_onms2_status_reg(data)                                         (*((volatile unsigned int*)ONMS_onms2_status_reg)=data)
#define  get_ONMS_onms2_status_reg                                               (*((volatile unsigned int*)ONMS_onms2_status_reg))
#define  ONMS_onms2_status_on2_hgclk_gate_over_range_shift                       (22)
#define  ONMS_onms2_status_on2_hs_meas_over_range_shift                          (21)
#define  ONMS_onms2_status_on2_vs_per_to_long_shift                              (20)
#define  ONMS_onms2_status_on2_vs_pol_out_shift                                  (17)
#define  ONMS_onms2_status_on2_hs_pol_out_shift                                  (16)
#define  ONMS_onms2_status_on2_vs_per_over_range_shift                           (15)
#define  ONMS_onms2_status_on2_hs_per_over_range_shift                           (14)
#define  ONMS_onms2_status_on2_vs_per_timeout_shift                              (13)
#define  ONMS_onms2_status_on2_vs_high_timeout_shift                             (12)
#define  ONMS_onms2_status_on2_vs_per_overflow_shift                             (11)
#define  ONMS_onms2_status_on2_hs_per_overflow_shift                             (10)
#define  ONMS_onms2_status_on2_vs_pol_chg_shift                                  (9)
#define  ONMS_onms2_status_on2_hs_pol_chg_shift                                  (8)
#define  ONMS_onms2_status_on2_vtotalde_chg_shift                                (7)
#define  ONMS_onms2_status_on2_vtotal_chg_shift                                  (6)
#define  ONMS_onms2_status_on2_hact_chg_shift                                    (5)
#define  ONMS_onms2_status_on2_htotal_chg_shift                                  (4)
#define  ONMS_onms2_status_on2_hs_active_pixel_var_shift                         (3)
#define  ONMS_onms2_status_on2_vs_per_underflow_shift                            (2)
#define  ONMS_onms2_status_on2_hgclk_gate_over_range_mask                        (0x00400000)
#define  ONMS_onms2_status_on2_hs_meas_over_range_mask                           (0x00200000)
#define  ONMS_onms2_status_on2_vs_per_to_long_mask                               (0x00100000)
#define  ONMS_onms2_status_on2_vs_pol_out_mask                                   (0x00020000)
#define  ONMS_onms2_status_on2_hs_pol_out_mask                                   (0x00010000)
#define  ONMS_onms2_status_on2_vs_per_over_range_mask                            (0x00008000)
#define  ONMS_onms2_status_on2_hs_per_over_range_mask                            (0x00004000)
#define  ONMS_onms2_status_on2_vs_per_timeout_mask                               (0x00002000)
#define  ONMS_onms2_status_on2_vs_high_timeout_mask                              (0x00001000)
#define  ONMS_onms2_status_on2_vs_per_overflow_mask                              (0x00000800)
#define  ONMS_onms2_status_on2_hs_per_overflow_mask                              (0x00000400)
#define  ONMS_onms2_status_on2_vs_pol_chg_mask                                   (0x00000200)
#define  ONMS_onms2_status_on2_hs_pol_chg_mask                                   (0x00000100)
#define  ONMS_onms2_status_on2_vtotalde_chg_mask                                 (0x00000080)
#define  ONMS_onms2_status_on2_vtotal_chg_mask                                   (0x00000040)
#define  ONMS_onms2_status_on2_hact_chg_mask                                     (0x00000020)
#define  ONMS_onms2_status_on2_htotal_chg_mask                                   (0x00000010)
#define  ONMS_onms2_status_on2_hs_active_pixel_var_mask                          (0x00000008)
#define  ONMS_onms2_status_on2_vs_per_underflow_mask                             (0x00000004)
#define  ONMS_onms2_status_on2_hgclk_gate_over_range(data)                       (0x00400000&((data)<<22))
#define  ONMS_onms2_status_on2_hs_meas_over_range(data)                          (0x00200000&((data)<<21))
#define  ONMS_onms2_status_on2_vs_per_to_long(data)                              (0x00100000&((data)<<20))
#define  ONMS_onms2_status_on2_vs_pol_out(data)                                  (0x00020000&((data)<<17))
#define  ONMS_onms2_status_on2_hs_pol_out(data)                                  (0x00010000&((data)<<16))
#define  ONMS_onms2_status_on2_vs_per_over_range(data)                           (0x00008000&((data)<<15))
#define  ONMS_onms2_status_on2_hs_per_over_range(data)                           (0x00004000&((data)<<14))
#define  ONMS_onms2_status_on2_vs_per_timeout(data)                              (0x00002000&((data)<<13))
#define  ONMS_onms2_status_on2_vs_high_timeout(data)                             (0x00001000&((data)<<12))
#define  ONMS_onms2_status_on2_vs_per_overflow(data)                             (0x00000800&((data)<<11))
#define  ONMS_onms2_status_on2_hs_per_overflow(data)                             (0x00000400&((data)<<10))
#define  ONMS_onms2_status_on2_vs_pol_chg(data)                                  (0x00000200&((data)<<9))
#define  ONMS_onms2_status_on2_hs_pol_chg(data)                                  (0x00000100&((data)<<8))
#define  ONMS_onms2_status_on2_vtotalde_chg(data)                                (0x00000080&((data)<<7))
#define  ONMS_onms2_status_on2_vtotal_chg(data)                                  (0x00000040&((data)<<6))
#define  ONMS_onms2_status_on2_hact_chg(data)                                    (0x00000020&((data)<<5))
#define  ONMS_onms2_status_on2_htotal_chg(data)                                  (0x00000010&((data)<<4))
#define  ONMS_onms2_status_on2_hs_active_pixel_var(data)                         (0x00000008&((data)<<3))
#define  ONMS_onms2_status_on2_vs_per_underflow(data)                            (0x00000004&((data)<<2))
#define  ONMS_onms2_status_get_on2_hgclk_gate_over_range(data)                   ((0x00400000&(data))>>22)
#define  ONMS_onms2_status_get_on2_hs_meas_over_range(data)                      ((0x00200000&(data))>>21)
#define  ONMS_onms2_status_get_on2_vs_per_to_long(data)                          ((0x00100000&(data))>>20)
#define  ONMS_onms2_status_get_on2_vs_pol_out(data)                              ((0x00020000&(data))>>17)
#define  ONMS_onms2_status_get_on2_hs_pol_out(data)                              ((0x00010000&(data))>>16)
#define  ONMS_onms2_status_get_on2_vs_per_over_range(data)                       ((0x00008000&(data))>>15)
#define  ONMS_onms2_status_get_on2_hs_per_over_range(data)                       ((0x00004000&(data))>>14)
#define  ONMS_onms2_status_get_on2_vs_per_timeout(data)                          ((0x00002000&(data))>>13)
#define  ONMS_onms2_status_get_on2_vs_high_timeout(data)                         ((0x00001000&(data))>>12)
#define  ONMS_onms2_status_get_on2_vs_per_overflow(data)                         ((0x00000800&(data))>>11)
#define  ONMS_onms2_status_get_on2_hs_per_overflow(data)                         ((0x00000400&(data))>>10)
#define  ONMS_onms2_status_get_on2_vs_pol_chg(data)                              ((0x00000200&(data))>>9)
#define  ONMS_onms2_status_get_on2_hs_pol_chg(data)                              ((0x00000100&(data))>>8)
#define  ONMS_onms2_status_get_on2_vtotalde_chg(data)                            ((0x00000080&(data))>>7)
#define  ONMS_onms2_status_get_on2_vtotal_chg(data)                              ((0x00000040&(data))>>6)
#define  ONMS_onms2_status_get_on2_hact_chg(data)                                ((0x00000020&(data))>>5)
#define  ONMS_onms2_status_get_on2_htotal_chg(data)                              ((0x00000010&(data))>>4)
#define  ONMS_onms2_status_get_on2_hs_active_pixel_var(data)                     ((0x00000008&(data))>>3)
#define  ONMS_onms2_status_get_on2_vs_per_underflow(data)                        ((0x00000004&(data))>>2)

#define  ONMS_onms2_watchdog_en                                                 0x1802136C
#define  ONMS_onms2_watchdog_en_reg_addr                                         "0xB802136C"
#define  ONMS_onms2_watchdog_en_reg                                              0xB802136C
#define  ONMS_onms2_watchdog_en_inst_addr                                        "0x0027"
#define  set_ONMS_onms2_watchdog_en_reg(data)                                    (*((volatile unsigned int*)ONMS_onms2_watchdog_en_reg)=data)
#define  get_ONMS_onms2_watchdog_en_reg                                          (*((volatile unsigned int*)ONMS_onms2_watchdog_en_reg))
#define  ONMS_onms2_watchdog_en_on2_wd_to_main_shift                             (31)
#define  ONMS_onms2_watchdog_en_on2_wd_to_sub_shift                              (30)
#define  ONMS_onms2_watchdog_en_on2_wd_debug_mode_s_shift                        (29)
#define  ONMS_onms2_watchdog_en_on2_wd_debug_target_s_shift                      (28)
#define  ONMS_onms2_watchdog_en_on2_wd_hgclk_gate_over_range_shift               (22)
#define  ONMS_onms2_watchdog_en_on2_wd_hs_meas_over_range_shift                  (21)
#define  ONMS_onms2_watchdog_en_on2_wd_vs_per_over_range_shift                   (15)
#define  ONMS_onms2_watchdog_en_on2_wd_hs_per_over_range_shift                   (14)
#define  ONMS_onms2_watchdog_en_on2_wd_vs_per_timeout_shift                      (13)
#define  ONMS_onms2_watchdog_en_on2_wd_vs_high_timeout_shift                     (12)
#define  ONMS_onms2_watchdog_en_on2_wd_vs_per_overflow_shift                     (11)
#define  ONMS_onms2_watchdog_en_on2_wd_hs_per_overflow_shift                     (10)
#define  ONMS_onms2_watchdog_en_on2_wd_vs_pol_chg_shift                          (9)
#define  ONMS_onms2_watchdog_en_on2_wd_hs_pol_chg_shift                          (8)
#define  ONMS_onms2_watchdog_en_on2_wd_vtotalde_chg_shift                        (7)
#define  ONMS_onms2_watchdog_en_on2_wd_vtotal_chg_shift                          (6)
#define  ONMS_onms2_watchdog_en_on2_wd_hact_chg_shift                            (5)
#define  ONMS_onms2_watchdog_en_on2_wd_htotal_chg_shift                          (4)
#define  ONMS_onms2_watchdog_en_on2_wd_hs_active_pixel_var_shift                 (3)
#define  ONMS_onms2_watchdog_en_on2_wd_vs_per_underflow_shift                    (2)
#define  ONMS_onms2_watchdog_en_on2_wd_to_main_mask                              (0x80000000)
#define  ONMS_onms2_watchdog_en_on2_wd_to_sub_mask                               (0x40000000)
#define  ONMS_onms2_watchdog_en_on2_wd_debug_mode_s_mask                         (0x20000000)
#define  ONMS_onms2_watchdog_en_on2_wd_debug_target_s_mask                       (0x10000000)
#define  ONMS_onms2_watchdog_en_on2_wd_hgclk_gate_over_range_mask                (0x00400000)
#define  ONMS_onms2_watchdog_en_on2_wd_hs_meas_over_range_mask                   (0x00200000)
#define  ONMS_onms2_watchdog_en_on2_wd_vs_per_over_range_mask                    (0x00008000)
#define  ONMS_onms2_watchdog_en_on2_wd_hs_per_over_range_mask                    (0x00004000)
#define  ONMS_onms2_watchdog_en_on2_wd_vs_per_timeout_mask                       (0x00002000)
#define  ONMS_onms2_watchdog_en_on2_wd_vs_high_timeout_mask                      (0x00001000)
#define  ONMS_onms2_watchdog_en_on2_wd_vs_per_overflow_mask                      (0x00000800)
#define  ONMS_onms2_watchdog_en_on2_wd_hs_per_overflow_mask                      (0x00000400)
#define  ONMS_onms2_watchdog_en_on2_wd_vs_pol_chg_mask                           (0x00000200)
#define  ONMS_onms2_watchdog_en_on2_wd_hs_pol_chg_mask                           (0x00000100)
#define  ONMS_onms2_watchdog_en_on2_wd_vtotalde_chg_mask                         (0x00000080)
#define  ONMS_onms2_watchdog_en_on2_wd_vtotal_chg_mask                           (0x00000040)
#define  ONMS_onms2_watchdog_en_on2_wd_hact_chg_mask                             (0x00000020)
#define  ONMS_onms2_watchdog_en_on2_wd_htotal_chg_mask                           (0x00000010)
#define  ONMS_onms2_watchdog_en_on2_wd_hs_active_pixel_var_mask                  (0x00000008)
#define  ONMS_onms2_watchdog_en_on2_wd_vs_per_underflow_mask                     (0x00000004)
#define  ONMS_onms2_watchdog_en_on2_wd_to_main(data)                             (0x80000000&((data)<<31))
#define  ONMS_onms2_watchdog_en_on2_wd_to_sub(data)                              (0x40000000&((data)<<30))
#define  ONMS_onms2_watchdog_en_on2_wd_debug_mode_s(data)                        (0x20000000&((data)<<29))
#define  ONMS_onms2_watchdog_en_on2_wd_debug_target_s(data)                      (0x10000000&((data)<<28))
#define  ONMS_onms2_watchdog_en_on2_wd_hgclk_gate_over_range(data)               (0x00400000&((data)<<22))
#define  ONMS_onms2_watchdog_en_on2_wd_hs_meas_over_range(data)                  (0x00200000&((data)<<21))
#define  ONMS_onms2_watchdog_en_on2_wd_vs_per_over_range(data)                   (0x00008000&((data)<<15))
#define  ONMS_onms2_watchdog_en_on2_wd_hs_per_over_range(data)                   (0x00004000&((data)<<14))
#define  ONMS_onms2_watchdog_en_on2_wd_vs_per_timeout(data)                      (0x00002000&((data)<<13))
#define  ONMS_onms2_watchdog_en_on2_wd_vs_high_timeout(data)                     (0x00001000&((data)<<12))
#define  ONMS_onms2_watchdog_en_on2_wd_vs_per_overflow(data)                     (0x00000800&((data)<<11))
#define  ONMS_onms2_watchdog_en_on2_wd_hs_per_overflow(data)                     (0x00000400&((data)<<10))
#define  ONMS_onms2_watchdog_en_on2_wd_vs_pol_chg(data)                          (0x00000200&((data)<<9))
#define  ONMS_onms2_watchdog_en_on2_wd_hs_pol_chg(data)                          (0x00000100&((data)<<8))
#define  ONMS_onms2_watchdog_en_on2_wd_vtotalde_chg(data)                        (0x00000080&((data)<<7))
#define  ONMS_onms2_watchdog_en_on2_wd_vtotal_chg(data)                          (0x00000040&((data)<<6))
#define  ONMS_onms2_watchdog_en_on2_wd_hact_chg(data)                            (0x00000020&((data)<<5))
#define  ONMS_onms2_watchdog_en_on2_wd_htotal_chg(data)                          (0x00000010&((data)<<4))
#define  ONMS_onms2_watchdog_en_on2_wd_hs_active_pixel_var(data)                 (0x00000008&((data)<<3))
#define  ONMS_onms2_watchdog_en_on2_wd_vs_per_underflow(data)                    (0x00000004&((data)<<2))
#define  ONMS_onms2_watchdog_en_get_on2_wd_to_main(data)                         ((0x80000000&(data))>>31)
#define  ONMS_onms2_watchdog_en_get_on2_wd_to_sub(data)                          ((0x40000000&(data))>>30)
#define  ONMS_onms2_watchdog_en_get_on2_wd_debug_mode_s(data)                    ((0x20000000&(data))>>29)
#define  ONMS_onms2_watchdog_en_get_on2_wd_debug_target_s(data)                  ((0x10000000&(data))>>28)
#define  ONMS_onms2_watchdog_en_get_on2_wd_hgclk_gate_over_range(data)           ((0x00400000&(data))>>22)
#define  ONMS_onms2_watchdog_en_get_on2_wd_hs_meas_over_range(data)              ((0x00200000&(data))>>21)
#define  ONMS_onms2_watchdog_en_get_on2_wd_vs_per_over_range(data)               ((0x00008000&(data))>>15)
#define  ONMS_onms2_watchdog_en_get_on2_wd_hs_per_over_range(data)               ((0x00004000&(data))>>14)
#define  ONMS_onms2_watchdog_en_get_on2_wd_vs_per_timeout(data)                  ((0x00002000&(data))>>13)
#define  ONMS_onms2_watchdog_en_get_on2_wd_vs_high_timeout(data)                 ((0x00001000&(data))>>12)
#define  ONMS_onms2_watchdog_en_get_on2_wd_vs_per_overflow(data)                 ((0x00000800&(data))>>11)
#define  ONMS_onms2_watchdog_en_get_on2_wd_hs_per_overflow(data)                 ((0x00000400&(data))>>10)
#define  ONMS_onms2_watchdog_en_get_on2_wd_vs_pol_chg(data)                      ((0x00000200&(data))>>9)
#define  ONMS_onms2_watchdog_en_get_on2_wd_hs_pol_chg(data)                      ((0x00000100&(data))>>8)
#define  ONMS_onms2_watchdog_en_get_on2_wd_vtotalde_chg(data)                    ((0x00000080&(data))>>7)
#define  ONMS_onms2_watchdog_en_get_on2_wd_vtotal_chg(data)                      ((0x00000040&(data))>>6)
#define  ONMS_onms2_watchdog_en_get_on2_wd_hact_chg(data)                        ((0x00000020&(data))>>5)
#define  ONMS_onms2_watchdog_en_get_on2_wd_htotal_chg(data)                      ((0x00000010&(data))>>4)
#define  ONMS_onms2_watchdog_en_get_on2_wd_hs_active_pixel_var(data)             ((0x00000008&(data))>>3)
#define  ONMS_onms2_watchdog_en_get_on2_wd_vs_per_underflow(data)                ((0x00000004&(data))>>2)

#define  ONMS_onms2_interrupt_en                                                0x18021370
#define  ONMS_onms2_interrupt_en_reg_addr                                        "0xB8021370"
#define  ONMS_onms2_interrupt_en_reg                                             0xB8021370
#define  ONMS_onms2_interrupt_en_inst_addr                                       "0x0028"
#define  set_ONMS_onms2_interrupt_en_reg(data)                                   (*((volatile unsigned int*)ONMS_onms2_interrupt_en_reg)=data)
#define  get_ONMS_onms2_interrupt_en_reg                                         (*((volatile unsigned int*)ONMS_onms2_interrupt_en_reg))
#define  ONMS_onms2_interrupt_en_on2_ie_to_main_shift                            (31)
#define  ONMS_onms2_interrupt_en_on2_ie_hgclk_gate_over_range_shift              (22)
#define  ONMS_onms2_interrupt_en_on2_ie_hs_meas_over_range_shift                 (21)
#define  ONMS_onms2_interrupt_en_on2_ie_vs_per_over_range_shift                  (15)
#define  ONMS_onms2_interrupt_en_on2_ie_hs_per_over_range_shift                  (14)
#define  ONMS_onms2_interrupt_en_on2_ie_vs_per_timeout_shift                     (13)
#define  ONMS_onms2_interrupt_en_on2_ie_vs_high_timeout_shift                    (12)
#define  ONMS_onms2_interrupt_en_on2_ie_vs_per_overflow_shift                    (11)
#define  ONMS_onms2_interrupt_en_on2_ie_hs_per_overflow_shift                    (10)
#define  ONMS_onms2_interrupt_en_on2_ie_vs_pol_chg_shift                         (9)
#define  ONMS_onms2_interrupt_en_on2_ie_hs_pol_chg_shift                         (8)
#define  ONMS_onms2_interrupt_en_on2_ie_vtotalde_chg_shift                       (7)
#define  ONMS_onms2_interrupt_en_on2_ie_vtotal_chg_shift                         (6)
#define  ONMS_onms2_interrupt_en_on2_ie_hact_chg_shift                           (5)
#define  ONMS_onms2_interrupt_en_on2_ie_htotal_chg_shift                         (4)
#define  ONMS_onms2_interrupt_en_on2_ie_hs_active_pixel_var_shift                (3)
#define  ONMS_onms2_interrupt_en_on2_ie_vs_per_underflow_shift                   (2)
#define  ONMS_onms2_interrupt_en_on2_ie_to_main_mask                             (0x80000000)
#define  ONMS_onms2_interrupt_en_on2_ie_hgclk_gate_over_range_mask               (0x00400000)
#define  ONMS_onms2_interrupt_en_on2_ie_hs_meas_over_range_mask                  (0x00200000)
#define  ONMS_onms2_interrupt_en_on2_ie_vs_per_over_range_mask                   (0x00008000)
#define  ONMS_onms2_interrupt_en_on2_ie_hs_per_over_range_mask                   (0x00004000)
#define  ONMS_onms2_interrupt_en_on2_ie_vs_per_timeout_mask                      (0x00002000)
#define  ONMS_onms2_interrupt_en_on2_ie_vs_high_timeout_mask                     (0x00001000)
#define  ONMS_onms2_interrupt_en_on2_ie_vs_per_overflow_mask                     (0x00000800)
#define  ONMS_onms2_interrupt_en_on2_ie_hs_per_overflow_mask                     (0x00000400)
#define  ONMS_onms2_interrupt_en_on2_ie_vs_pol_chg_mask                          (0x00000200)
#define  ONMS_onms2_interrupt_en_on2_ie_hs_pol_chg_mask                          (0x00000100)
#define  ONMS_onms2_interrupt_en_on2_ie_vtotalde_chg_mask                        (0x00000080)
#define  ONMS_onms2_interrupt_en_on2_ie_vtotal_chg_mask                          (0x00000040)
#define  ONMS_onms2_interrupt_en_on2_ie_hact_chg_mask                            (0x00000020)
#define  ONMS_onms2_interrupt_en_on2_ie_htotal_chg_mask                          (0x00000010)
#define  ONMS_onms2_interrupt_en_on2_ie_hs_active_pixel_var_mask                 (0x00000008)
#define  ONMS_onms2_interrupt_en_on2_ie_vs_per_underflow_mask                    (0x00000004)
#define  ONMS_onms2_interrupt_en_on2_ie_to_main(data)                            (0x80000000&((data)<<31))
#define  ONMS_onms2_interrupt_en_on2_ie_hgclk_gate_over_range(data)              (0x00400000&((data)<<22))
#define  ONMS_onms2_interrupt_en_on2_ie_hs_meas_over_range(data)                 (0x00200000&((data)<<21))
#define  ONMS_onms2_interrupt_en_on2_ie_vs_per_over_range(data)                  (0x00008000&((data)<<15))
#define  ONMS_onms2_interrupt_en_on2_ie_hs_per_over_range(data)                  (0x00004000&((data)<<14))
#define  ONMS_onms2_interrupt_en_on2_ie_vs_per_timeout(data)                     (0x00002000&((data)<<13))
#define  ONMS_onms2_interrupt_en_on2_ie_vs_high_timeout(data)                    (0x00001000&((data)<<12))
#define  ONMS_onms2_interrupt_en_on2_ie_vs_per_overflow(data)                    (0x00000800&((data)<<11))
#define  ONMS_onms2_interrupt_en_on2_ie_hs_per_overflow(data)                    (0x00000400&((data)<<10))
#define  ONMS_onms2_interrupt_en_on2_ie_vs_pol_chg(data)                         (0x00000200&((data)<<9))
#define  ONMS_onms2_interrupt_en_on2_ie_hs_pol_chg(data)                         (0x00000100&((data)<<8))
#define  ONMS_onms2_interrupt_en_on2_ie_vtotalde_chg(data)                       (0x00000080&((data)<<7))
#define  ONMS_onms2_interrupt_en_on2_ie_vtotal_chg(data)                         (0x00000040&((data)<<6))
#define  ONMS_onms2_interrupt_en_on2_ie_hact_chg(data)                           (0x00000020&((data)<<5))
#define  ONMS_onms2_interrupt_en_on2_ie_htotal_chg(data)                         (0x00000010&((data)<<4))
#define  ONMS_onms2_interrupt_en_on2_ie_hs_active_pixel_var(data)                (0x00000008&((data)<<3))
#define  ONMS_onms2_interrupt_en_on2_ie_vs_per_underflow(data)                   (0x00000004&((data)<<2))
#define  ONMS_onms2_interrupt_en_get_on2_ie_to_main(data)                        ((0x80000000&(data))>>31)
#define  ONMS_onms2_interrupt_en_get_on2_ie_hgclk_gate_over_range(data)          ((0x00400000&(data))>>22)
#define  ONMS_onms2_interrupt_en_get_on2_ie_hs_meas_over_range(data)             ((0x00200000&(data))>>21)
#define  ONMS_onms2_interrupt_en_get_on2_ie_vs_per_over_range(data)              ((0x00008000&(data))>>15)
#define  ONMS_onms2_interrupt_en_get_on2_ie_hs_per_over_range(data)              ((0x00004000&(data))>>14)
#define  ONMS_onms2_interrupt_en_get_on2_ie_vs_per_timeout(data)                 ((0x00002000&(data))>>13)
#define  ONMS_onms2_interrupt_en_get_on2_ie_vs_high_timeout(data)                ((0x00001000&(data))>>12)
#define  ONMS_onms2_interrupt_en_get_on2_ie_vs_per_overflow(data)                ((0x00000800&(data))>>11)
#define  ONMS_onms2_interrupt_en_get_on2_ie_hs_per_overflow(data)                ((0x00000400&(data))>>10)
#define  ONMS_onms2_interrupt_en_get_on2_ie_vs_pol_chg(data)                     ((0x00000200&(data))>>9)
#define  ONMS_onms2_interrupt_en_get_on2_ie_hs_pol_chg(data)                     ((0x00000100&(data))>>8)
#define  ONMS_onms2_interrupt_en_get_on2_ie_vtotalde_chg(data)                   ((0x00000080&(data))>>7)
#define  ONMS_onms2_interrupt_en_get_on2_ie_vtotal_chg(data)                     ((0x00000040&(data))>>6)
#define  ONMS_onms2_interrupt_en_get_on2_ie_hact_chg(data)                       ((0x00000020&(data))>>5)
#define  ONMS_onms2_interrupt_en_get_on2_ie_htotal_chg(data)                     ((0x00000010&(data))>>4)
#define  ONMS_onms2_interrupt_en_get_on2_ie_hs_active_pixel_var(data)            ((0x00000008&(data))>>3)
#define  ONMS_onms2_interrupt_en_get_on2_ie_vs_per_underflow(data)               ((0x00000004&(data))>>2)

#define  ONMS_Onms2_Demode_ctrl                                                 0x18021374
#define  ONMS_Onms2_Demode_ctrl_reg_addr                                         "0xB8021374"
#define  ONMS_Onms2_Demode_ctrl_reg                                              0xB8021374
#define  ONMS_Onms2_Demode_ctrl_inst_addr                                        "0x0029"
#define  set_ONMS_Onms2_Demode_ctrl_reg(data)                                    (*((volatile unsigned int*)ONMS_Onms2_Demode_ctrl_reg)=data)
#define  get_ONMS_Onms2_Demode_ctrl_reg                                          (*((volatile unsigned int*)ONMS_Onms2_Demode_ctrl_reg))
#define  ONMS_Onms2_Demode_ctrl_on2_xtal_sel_shift                               (31)
#define  ONMS_Onms2_Demode_ctrl_on2_demode_vtotal_delta_shift                    (4)
#define  ONMS_Onms2_Demode_ctrl_on2_demode_en_shift                              (0)
#define  ONMS_Onms2_Demode_ctrl_on2_xtal_sel_mask                                (0x80000000)
#define  ONMS_Onms2_Demode_ctrl_on2_demode_vtotal_delta_mask                     (0x0000FFF0)
#define  ONMS_Onms2_Demode_ctrl_on2_demode_en_mask                               (0x00000001)
#define  ONMS_Onms2_Demode_ctrl_on2_xtal_sel(data)                               (0x80000000&((data)<<31))
#define  ONMS_Onms2_Demode_ctrl_on2_demode_vtotal_delta(data)                    (0x0000FFF0&((data)<<4))
#define  ONMS_Onms2_Demode_ctrl_on2_demode_en(data)                              (0x00000001&(data))
#define  ONMS_Onms2_Demode_ctrl_get_on2_xtal_sel(data)                           ((0x80000000&(data))>>31)
#define  ONMS_Onms2_Demode_ctrl_get_on2_demode_vtotal_delta(data)                ((0x0000FFF0&(data))>>4)
#define  ONMS_Onms2_Demode_ctrl_get_on2_demode_en(data)                          (0x00000001&(data))

#define  ONMS_Onms2_Demode_Act                                                  0x18021378
#define  ONMS_Onms2_Demode_Act_reg_addr                                          "0xB8021378"
#define  ONMS_Onms2_Demode_Act_reg                                               0xB8021378
#define  ONMS_Onms2_Demode_Act_inst_addr                                         "0x002A"
#define  set_ONMS_Onms2_Demode_Act_reg(data)                                     (*((volatile unsigned int*)ONMS_Onms2_Demode_Act_reg)=data)
#define  get_ONMS_Onms2_Demode_Act_reg                                           (*((volatile unsigned int*)ONMS_Onms2_Demode_Act_reg))
#define  ONMS_Onms2_Demode_Act_on2_de_hact_shift                                 (18)
#define  ONMS_Onms2_Demode_Act_on2_de_hact_fract_shift                           (14)
#define  ONMS_Onms2_Demode_Act_on2_de_vact_shift                                 (0)
#define  ONMS_Onms2_Demode_Act_on2_de_hact_mask                                  (0xFFFC0000)
#define  ONMS_Onms2_Demode_Act_on2_de_hact_fract_mask                            (0x0003C000)
#define  ONMS_Onms2_Demode_Act_on2_de_vact_mask                                  (0x00003FFF)
#define  ONMS_Onms2_Demode_Act_on2_de_hact(data)                                 (0xFFFC0000&((data)<<18))
#define  ONMS_Onms2_Demode_Act_on2_de_hact_fract(data)                           (0x0003C000&((data)<<14))
#define  ONMS_Onms2_Demode_Act_on2_de_vact(data)                                 (0x00003FFF&(data))
#define  ONMS_Onms2_Demode_Act_get_on2_de_hact(data)                             ((0xFFFC0000&(data))>>18)
#define  ONMS_Onms2_Demode_Act_get_on2_de_hact_fract(data)                       ((0x0003C000&(data))>>14)
#define  ONMS_Onms2_Demode_Act_get_on2_de_vact(data)                             (0x00003FFF&(data))

#define  ONMS_Onms2_Demode_Vs_period                                            0x1802137C
#define  ONMS_Onms2_Demode_Vs_period_reg_addr                                    "0xB802137C"
#define  ONMS_Onms2_Demode_Vs_period_reg                                         0xB802137C
#define  ONMS_Onms2_Demode_Vs_period_inst_addr                                   "0x002B"
#define  set_ONMS_Onms2_Demode_Vs_period_reg(data)                               (*((volatile unsigned int*)ONMS_Onms2_Demode_Vs_period_reg)=data)
#define  get_ONMS_Onms2_Demode_Vs_period_reg                                     (*((volatile unsigned int*)ONMS_Onms2_Demode_Vs_period_reg))
#define  ONMS_Onms2_Demode_Vs_period_on2_de_vs_period_shift                      (0)
#define  ONMS_Onms2_Demode_Vs_period_on2_de_vs_period_mask                       (0x003FFFFF)
#define  ONMS_Onms2_Demode_Vs_period_on2_de_vs_period(data)                      (0x003FFFFF&(data))
#define  ONMS_Onms2_Demode_Vs_period_get_on2_de_vs_period(data)                  (0x003FFFFF&(data))

#define  ONMS_Onms2_Demode_Hs_period                                            0x18021380
#define  ONMS_Onms2_Demode_Hs_period_reg_addr                                    "0xB8021380"
#define  ONMS_Onms2_Demode_Hs_period_reg                                         0xB8021380
#define  ONMS_Onms2_Demode_Hs_period_inst_addr                                   "0x002C"
#define  set_ONMS_Onms2_Demode_Hs_period_reg(data)                               (*((volatile unsigned int*)ONMS_Onms2_Demode_Hs_period_reg)=data)
#define  get_ONMS_Onms2_Demode_Hs_period_reg                                     (*((volatile unsigned int*)ONMS_Onms2_Demode_Hs_period_reg))
#define  ONMS_Onms2_Demode_Hs_period_on2_de_hs_period_shift                      (4)
#define  ONMS_Onms2_Demode_Hs_period_on2_de_hs_period_fract_shift                (0)
#define  ONMS_Onms2_Demode_Hs_period_on2_de_hs_period_mask                       (0x0003FFF0)
#define  ONMS_Onms2_Demode_Hs_period_on2_de_hs_period_fract_mask                 (0x0000000F)
#define  ONMS_Onms2_Demode_Hs_period_on2_de_hs_period(data)                      (0x0003FFF0&((data)<<4))
#define  ONMS_Onms2_Demode_Hs_period_on2_de_hs_period_fract(data)                (0x0000000F&(data))
#define  ONMS_Onms2_Demode_Hs_period_get_on2_de_hs_period(data)                  ((0x0003FFF0&(data))>>4)
#define  ONMS_Onms2_Demode_Hs_period_get_on2_de_hs_period_fract(data)            (0x0000000F&(data))

#define  ONMS_Onms2_Demode_Vs_STA                                               0x18021384
#define  ONMS_Onms2_Demode_Vs_STA_reg_addr                                       "0xB8021384"
#define  ONMS_Onms2_Demode_Vs_STA_reg                                            0xB8021384
#define  ONMS_Onms2_Demode_Vs_STA_inst_addr                                      "0x002D"
#define  set_ONMS_Onms2_Demode_Vs_STA_reg(data)                                  (*((volatile unsigned int*)ONMS_Onms2_Demode_Vs_STA_reg)=data)
#define  get_ONMS_Onms2_Demode_Vs_STA_reg                                        (*((volatile unsigned int*)ONMS_Onms2_Demode_Vs_STA_reg))
#define  ONMS_Onms2_Demode_Vs_STA_on2_de_vs_sta_shift                            (0)
#define  ONMS_Onms2_Demode_Vs_STA_on2_de_vs_sta_mask                             (0x003FFFFF)
#define  ONMS_Onms2_Demode_Vs_STA_on2_de_vs_sta(data)                            (0x003FFFFF&(data))
#define  ONMS_Onms2_Demode_Vs_STA_get_on2_de_vs_sta(data)                        (0x003FFFFF&(data))

#define  ONMS_Onms2_Demode_Vs_END                                               0x18021388
#define  ONMS_Onms2_Demode_Vs_END_reg_addr                                       "0xB8021388"
#define  ONMS_Onms2_Demode_Vs_END_reg                                            0xB8021388
#define  ONMS_Onms2_Demode_Vs_END_inst_addr                                      "0x002E"
#define  set_ONMS_Onms2_Demode_Vs_END_reg(data)                                  (*((volatile unsigned int*)ONMS_Onms2_Demode_Vs_END_reg)=data)
#define  get_ONMS_Onms2_Demode_Vs_END_reg                                        (*((volatile unsigned int*)ONMS_Onms2_Demode_Vs_END_reg))
#define  ONMS_Onms2_Demode_Vs_END_on2_de_vs_end_shift                            (0)
#define  ONMS_Onms2_Demode_Vs_END_on2_de_vs_end_mask                             (0x003FFFFF)
#define  ONMS_Onms2_Demode_Vs_END_on2_de_vs_end(data)                            (0x003FFFFF&(data))
#define  ONMS_Onms2_Demode_Vs_END_get_on2_de_vs_end(data)                        (0x003FFFFF&(data))

#define  ONMS_Onms2_Demode_Vs_UF                                                0x1802138C
#define  ONMS_Onms2_Demode_Vs_UF_reg_addr                                        "0xB802138C"
#define  ONMS_Onms2_Demode_Vs_UF_reg                                             0xB802138C
#define  ONMS_Onms2_Demode_Vs_UF_inst_addr                                       "0x002F"
#define  set_ONMS_Onms2_Demode_Vs_UF_reg(data)                                   (*((volatile unsigned int*)ONMS_Onms2_Demode_Vs_UF_reg)=data)
#define  get_ONMS_Onms2_Demode_Vs_UF_reg                                         (*((volatile unsigned int*)ONMS_Onms2_Demode_Vs_UF_reg))
#define  ONMS_Onms2_Demode_Vs_UF_on2_de_vsper_uf_th_shift                        (0)
#define  ONMS_Onms2_Demode_Vs_UF_on2_de_vsper_uf_th_mask                         (0x003FFFFF)
#define  ONMS_Onms2_Demode_Vs_UF_on2_de_vsper_uf_th(data)                        (0x003FFFFF&(data))
#define  ONMS_Onms2_Demode_Vs_UF_get_on2_de_vsper_uf_th(data)                    (0x003FFFFF&(data))

#define  ONMS_Onms2_Demode_Vs_OF                                                0x18021390
#define  ONMS_Onms2_Demode_Vs_OF_reg_addr                                        "0xB8021390"
#define  ONMS_Onms2_Demode_Vs_OF_reg                                             0xB8021390
#define  ONMS_Onms2_Demode_Vs_OF_inst_addr                                       "0x0030"
#define  set_ONMS_Onms2_Demode_Vs_OF_reg(data)                                   (*((volatile unsigned int*)ONMS_Onms2_Demode_Vs_OF_reg)=data)
#define  get_ONMS_Onms2_Demode_Vs_OF_reg                                         (*((volatile unsigned int*)ONMS_Onms2_Demode_Vs_OF_reg))
#define  ONMS_Onms2_Demode_Vs_OF_on2_de_vsper_of_th_shift                        (0)
#define  ONMS_Onms2_Demode_Vs_OF_on2_de_vsper_of_th_mask                         (0x003FFFFF)
#define  ONMS_Onms2_Demode_Vs_OF_on2_de_vsper_of_th(data)                        (0x003FFFFF&(data))
#define  ONMS_Onms2_Demode_Vs_OF_get_on2_de_vsper_of_th(data)                    (0x003FFFFF&(data))

#define  ONMS_onms3_ctrl                                                        0x18021400
#define  ONMS_onms3_ctrl_reg_addr                                                "0xB8021400"
#define  ONMS_onms3_ctrl_reg                                                     0xB8021400
#define  ONMS_onms3_ctrl_inst_addr                                               "0x0031"
#define  set_ONMS_onms3_ctrl_reg(data)                                           (*((volatile unsigned int*)ONMS_onms3_ctrl_reg)=data)
#define  get_ONMS_onms3_ctrl_reg                                                 (*((volatile unsigned int*)ONMS_onms3_ctrl_reg))
#define  ONMS_onms3_ctrl_on3_continuous_popup_shift                              (31)
#define  ONMS_onms3_ctrl_on3_hd21_ms_en_shift                                    (30)
#define  ONMS_onms3_ctrl_on3_ms_src_sel_shift                                    (29)
#define  ONMS_onms3_ctrl_on3_blk_2frame_en_shift                                 (28)
#define  ONMS_onms3_ctrl_on3_vtotal_max_delta_shift                              (20)
#define  ONMS_onms3_ctrl_on3_htotal_max_delta_shift                              (16)
#define  ONMS_onms3_ctrl_on3_htotal_of_th_shift                                  (14)
#define  ONMS_onms3_ctrl_on3_input_align_shift                                   (13)
#define  ONMS_onms3_ctrl_on3_meas_to_sel_shift                                   (6)
#define  ONMS_onms3_ctrl_on3_sycms_clk_shift                                     (5)
#define  ONMS_onms3_ctrl_on3_vs_meas_inv_shift                                   (4)
#define  ONMS_onms3_ctrl_on3_hs_meas_inv_shift                                   (3)
#define  ONMS_onms3_ctrl_on3_popup_meas_shift                                    (2)
#define  ONMS_onms3_ctrl_on3_ms_conti_shift                                      (1)
#define  ONMS_onms3_ctrl_on3_start_ms_shift                                      (0)
#define  ONMS_onms3_ctrl_on3_continuous_popup_mask                               (0x80000000)
#define  ONMS_onms3_ctrl_on3_hd21_ms_en_mask                                     (0x40000000)
#define  ONMS_onms3_ctrl_on3_ms_src_sel_mask                                     (0x20000000)
#define  ONMS_onms3_ctrl_on3_blk_2frame_en_mask                                  (0x10000000)
#define  ONMS_onms3_ctrl_on3_vtotal_max_delta_mask                               (0x00F00000)
#define  ONMS_onms3_ctrl_on3_htotal_max_delta_mask                               (0x000F0000)
#define  ONMS_onms3_ctrl_on3_htotal_of_th_mask                                   (0x0000C000)
#define  ONMS_onms3_ctrl_on3_input_align_mask                                    (0x00002000)
#define  ONMS_onms3_ctrl_on3_meas_to_sel_mask                                    (0x00000040)
#define  ONMS_onms3_ctrl_on3_sycms_clk_mask                                      (0x00000020)
#define  ONMS_onms3_ctrl_on3_vs_meas_inv_mask                                    (0x00000010)
#define  ONMS_onms3_ctrl_on3_hs_meas_inv_mask                                    (0x00000008)
#define  ONMS_onms3_ctrl_on3_popup_meas_mask                                     (0x00000004)
#define  ONMS_onms3_ctrl_on3_ms_conti_mask                                       (0x00000002)
#define  ONMS_onms3_ctrl_on3_start_ms_mask                                       (0x00000001)
#define  ONMS_onms3_ctrl_on3_continuous_popup(data)                              (0x80000000&((data)<<31))
#define  ONMS_onms3_ctrl_on3_hd21_ms_en(data)                                    (0x40000000&((data)<<30))
#define  ONMS_onms3_ctrl_on3_ms_src_sel(data)                                    (0x20000000&((data)<<29))
#define  ONMS_onms3_ctrl_on3_blk_2frame_en(data)                                 (0x10000000&((data)<<28))
#define  ONMS_onms3_ctrl_on3_vtotal_max_delta(data)                              (0x00F00000&((data)<<20))
#define  ONMS_onms3_ctrl_on3_htotal_max_delta(data)                              (0x000F0000&((data)<<16))
#define  ONMS_onms3_ctrl_on3_htotal_of_th(data)                                  (0x0000C000&((data)<<14))
#define  ONMS_onms3_ctrl_on3_input_align(data)                                   (0x00002000&((data)<<13))
#define  ONMS_onms3_ctrl_on3_meas_to_sel(data)                                   (0x00000040&((data)<<6))
#define  ONMS_onms3_ctrl_on3_sycms_clk(data)                                     (0x00000020&((data)<<5))
#define  ONMS_onms3_ctrl_on3_vs_meas_inv(data)                                   (0x00000010&((data)<<4))
#define  ONMS_onms3_ctrl_on3_hs_meas_inv(data)                                   (0x00000008&((data)<<3))
#define  ONMS_onms3_ctrl_on3_popup_meas(data)                                    (0x00000004&((data)<<2))
#define  ONMS_onms3_ctrl_on3_ms_conti(data)                                      (0x00000002&((data)<<1))
#define  ONMS_onms3_ctrl_on3_start_ms(data)                                      (0x00000001&(data))
#define  ONMS_onms3_ctrl_get_on3_continuous_popup(data)                          ((0x80000000&(data))>>31)
#define  ONMS_onms3_ctrl_get_on3_hd21_ms_en(data)                                ((0x40000000&(data))>>30)
#define  ONMS_onms3_ctrl_get_on3_ms_src_sel(data)                                ((0x20000000&(data))>>29)
#define  ONMS_onms3_ctrl_get_on3_blk_2frame_en(data)                             ((0x10000000&(data))>>28)
#define  ONMS_onms3_ctrl_get_on3_vtotal_max_delta(data)                          ((0x00F00000&(data))>>20)
#define  ONMS_onms3_ctrl_get_on3_htotal_max_delta(data)                          ((0x000F0000&(data))>>16)
#define  ONMS_onms3_ctrl_get_on3_htotal_of_th(data)                              ((0x0000C000&(data))>>14)
#define  ONMS_onms3_ctrl_get_on3_input_align(data)                               ((0x00002000&(data))>>13)
#define  ONMS_onms3_ctrl_get_on3_meas_to_sel(data)                               ((0x00000040&(data))>>6)
#define  ONMS_onms3_ctrl_get_on3_sycms_clk(data)                                 ((0x00000020&(data))>>5)
#define  ONMS_onms3_ctrl_get_on3_vs_meas_inv(data)                               ((0x00000010&(data))>>4)
#define  ONMS_onms3_ctrl_get_on3_hs_meas_inv(data)                               ((0x00000008&(data))>>3)
#define  ONMS_onms3_ctrl_get_on3_popup_meas(data)                                ((0x00000004&(data))>>2)
#define  ONMS_onms3_ctrl_get_on3_ms_conti(data)                                  ((0x00000002&(data))>>1)
#define  ONMS_onms3_ctrl_get_on3_start_ms(data)                                  (0x00000001&(data))

#define  ONMS_onms3_vs_period                                                   0x18021430
#define  ONMS_onms3_vs_period_reg_addr                                           "0xB8021430"
#define  ONMS_onms3_vs_period_reg                                                0xB8021430
#define  ONMS_onms3_vs_period_inst_addr                                          "0x0032"
#define  set_ONMS_onms3_vs_period_reg(data)                                      (*((volatile unsigned int*)ONMS_onms3_vs_period_reg)=data)
#define  get_ONMS_onms3_vs_period_reg                                            (*((volatile unsigned int*)ONMS_onms3_vs_period_reg))
#define  ONMS_onms3_vs_period_on3_vtotalde_shift                                 (16)
#define  ONMS_onms3_vs_period_on3_vtotal_shift                                   (0)
#define  ONMS_onms3_vs_period_on3_vtotalde_mask                                  (0x1FFF0000)
#define  ONMS_onms3_vs_period_on3_vtotal_mask                                    (0x00007FFF)
#define  ONMS_onms3_vs_period_on3_vtotalde(data)                                 (0x1FFF0000&((data)<<16))
#define  ONMS_onms3_vs_period_on3_vtotal(data)                                   (0x00007FFF&(data))
#define  ONMS_onms3_vs_period_get_on3_vtotalde(data)                             ((0x1FFF0000&(data))>>16)
#define  ONMS_onms3_vs_period_get_on3_vtotal(data)                               (0x00007FFF&(data))

#define  ONMS_onms3_vshs_high_period                                            0x18021434
#define  ONMS_onms3_vshs_high_period_reg_addr                                    "0xB8021434"
#define  ONMS_onms3_vshs_high_period_reg                                         0xB8021434
#define  ONMS_onms3_vshs_high_period_inst_addr                                   "0x0033"
#define  set_ONMS_onms3_vshs_high_period_reg(data)                               (*((volatile unsigned int*)ONMS_onms3_vshs_high_period_reg)=data)
#define  get_ONMS_onms3_vshs_high_period_reg                                     (*((volatile unsigned int*)ONMS_onms3_vshs_high_period_reg))
#define  ONMS_onms3_vshs_high_period_on3_vs_high_period_shift                    (16)
#define  ONMS_onms3_vshs_high_period_on3_hs_high_period_shift                    (0)
#define  ONMS_onms3_vshs_high_period_on3_vs_high_period_mask                     (0x7FFF0000)
#define  ONMS_onms3_vshs_high_period_on3_hs_high_period_mask                     (0x00003FFF)
#define  ONMS_onms3_vshs_high_period_on3_vs_high_period(data)                    (0x7FFF0000&((data)<<16))
#define  ONMS_onms3_vshs_high_period_on3_hs_high_period(data)                    (0x00003FFF&(data))
#define  ONMS_onms3_vshs_high_period_get_on3_vs_high_period(data)                ((0x7FFF0000&(data))>>16)
#define  ONMS_onms3_vshs_high_period_get_on3_hs_high_period(data)                (0x00003FFF&(data))

#define  ONMS_onms3_hs_period                                                   0x18021438
#define  ONMS_onms3_hs_period_reg_addr                                           "0xB8021438"
#define  ONMS_onms3_hs_period_reg                                                0xB8021438
#define  ONMS_onms3_hs_period_inst_addr                                          "0x0034"
#define  set_ONMS_onms3_hs_period_reg(data)                                      (*((volatile unsigned int*)ONMS_onms3_hs_period_reg)=data)
#define  get_ONMS_onms3_hs_period_reg                                            (*((volatile unsigned int*)ONMS_onms3_hs_period_reg))
#define  ONMS_onms3_hs_period_on3_htotal_h12b_shift                              (4)
#define  ONMS_onms3_hs_period_on3_htotal_f4b_shift                               (0)
#define  ONMS_onms3_hs_period_on3_htotal_h12b_mask                               (0x0003FFF0)
#define  ONMS_onms3_hs_period_on3_htotal_f4b_mask                                (0x0000000F)
#define  ONMS_onms3_hs_period_on3_htotal_h12b(data)                              (0x0003FFF0&((data)<<4))
#define  ONMS_onms3_hs_period_on3_htotal_f4b(data)                               (0x0000000F&(data))
#define  ONMS_onms3_hs_period_get_on3_htotal_h12b(data)                          ((0x0003FFF0&(data))>>4)
#define  ONMS_onms3_hs_period_get_on3_htotal_f4b(data)                           (0x0000000F&(data))

#define  ONMS_onms3_vact_sta                                                    0x1802143C
#define  ONMS_onms3_vact_sta_reg_addr                                            "0xB802143C"
#define  ONMS_onms3_vact_sta_reg                                                 0xB802143C
#define  ONMS_onms3_vact_sta_inst_addr                                           "0x0035"
#define  set_ONMS_onms3_vact_sta_reg(data)                                       (*((volatile unsigned int*)ONMS_onms3_vact_sta_reg)=data)
#define  get_ONMS_onms3_vact_sta_reg                                             (*((volatile unsigned int*)ONMS_onms3_vact_sta_reg))
#define  ONMS_onms3_vact_sta_on3_vblank_len_shift                                (16)
#define  ONMS_onms3_vact_sta_on3_vact_start_shift                                (0)
#define  ONMS_onms3_vact_sta_on3_vblank_len_mask                                 (0x00FF0000)
#define  ONMS_onms3_vact_sta_on3_vact_start_mask                                 (0x00000FFF)
#define  ONMS_onms3_vact_sta_on3_vblank_len(data)                                (0x00FF0000&((data)<<16))
#define  ONMS_onms3_vact_sta_on3_vact_start(data)                                (0x00000FFF&(data))
#define  ONMS_onms3_vact_sta_get_on3_vblank_len(data)                            ((0x00FF0000&(data))>>16)
#define  ONMS_onms3_vact_sta_get_on3_vact_start(data)                            (0x00000FFF&(data))

#define  ONMS_onms3_hact_sta                                                    0x18021440
#define  ONMS_onms3_hact_sta_reg_addr                                            "0xB8021440"
#define  ONMS_onms3_hact_sta_reg                                                 0xB8021440
#define  ONMS_onms3_hact_sta_inst_addr                                           "0x0036"
#define  set_ONMS_onms3_hact_sta_reg(data)                                       (*((volatile unsigned int*)ONMS_onms3_hact_sta_reg)=data)
#define  get_ONMS_onms3_hact_sta_reg                                             (*((volatile unsigned int*)ONMS_onms3_hact_sta_reg))
#define  ONMS_onms3_hact_sta_on3_hact_start_shift                                (0)
#define  ONMS_onms3_hact_sta_on3_hact_start_mask                                 (0x00003FFF)
#define  ONMS_onms3_hact_sta_on3_hact_start(data)                                (0x00003FFF&(data))
#define  ONMS_onms3_hact_sta_get_on3_hact_start(data)                            (0x00003FFF&(data))

#define  ONMS_onms3_hact                                                        0x18021444
#define  ONMS_onms3_hact_reg_addr                                                "0xB8021444"
#define  ONMS_onms3_hact_reg                                                     0xB8021444
#define  ONMS_onms3_hact_inst_addr                                               "0x0037"
#define  set_ONMS_onms3_hact_reg(data)                                           (*((volatile unsigned int*)ONMS_onms3_hact_reg)=data)
#define  get_ONMS_onms3_hact_reg                                                 (*((volatile unsigned int*)ONMS_onms3_hact_reg))
#define  ONMS_onms3_hact_on3_hact_shift                                          (4)
#define  ONMS_onms3_hact_on3_hact_fract_shift                                    (0)
#define  ONMS_onms3_hact_on3_hact_mask                                           (0x0003FFF0)
#define  ONMS_onms3_hact_on3_hact_fract_mask                                     (0x0000000F)
#define  ONMS_onms3_hact_on3_hact(data)                                          (0x0003FFF0&((data)<<4))
#define  ONMS_onms3_hact_on3_hact_fract(data)                                    (0x0000000F&(data))
#define  ONMS_onms3_hact_get_on3_hact(data)                                      ((0x0003FFF0&(data))>>4)
#define  ONMS_onms3_hact_get_on3_hact_fract(data)                                (0x0000000F&(data))

#define  ONMS_onms3_ctrl_1                                                      0x18021448
#define  ONMS_onms3_ctrl_1_reg_addr                                              "0xB8021448"
#define  ONMS_onms3_ctrl_1_reg                                                   0xB8021448
#define  ONMS_onms3_ctrl_1_inst_addr                                             "0x0038"
#define  set_ONMS_onms3_ctrl_1_reg(data)                                         (*((volatile unsigned int*)ONMS_onms3_ctrl_1_reg)=data)
#define  get_ONMS_onms3_ctrl_1_reg                                               (*((volatile unsigned int*)ONMS_onms3_ctrl_1_reg))
#define  ONMS_onms3_ctrl_1_on3_vtotal_uf_th_shift                                (16)
#define  ONMS_onms3_ctrl_1_on3_vtotal_of_th_shift                                (0)
#define  ONMS_onms3_ctrl_1_on3_vtotal_uf_th_mask                                 (0x7FFF0000)
#define  ONMS_onms3_ctrl_1_on3_vtotal_of_th_mask                                 (0x00007FFF)
#define  ONMS_onms3_ctrl_1_on3_vtotal_uf_th(data)                                (0x7FFF0000&((data)<<16))
#define  ONMS_onms3_ctrl_1_on3_vtotal_of_th(data)                                (0x00007FFF&(data))
#define  ONMS_onms3_ctrl_1_get_on3_vtotal_uf_th(data)                            ((0x7FFF0000&(data))>>16)
#define  ONMS_onms3_ctrl_1_get_on3_vtotal_of_th(data)                            (0x00007FFF&(data))

#define  ONMS_onms3_ctrl_2                                                      0x1802144C
#define  ONMS_onms3_ctrl_2_reg_addr                                              "0xB802144C"
#define  ONMS_onms3_ctrl_2_reg                                                   0xB802144C
#define  ONMS_onms3_ctrl_2_inst_addr                                             "0x0039"
#define  set_ONMS_onms3_ctrl_2_reg(data)                                         (*((volatile unsigned int*)ONMS_onms3_ctrl_2_reg)=data)
#define  get_ONMS_onms3_ctrl_2_reg                                               (*((volatile unsigned int*)ONMS_onms3_ctrl_2_reg))
#define  ONMS_onms3_ctrl_2_on3_hgclk_gate_th_shift                               (0)
#define  ONMS_onms3_ctrl_2_on3_hgclk_gate_th_mask                                (0x00003FFF)
#define  ONMS_onms3_ctrl_2_on3_hgclk_gate_th(data)                               (0x00003FFF&(data))
#define  ONMS_onms3_ctrl_2_get_on3_hgclk_gate_th(data)                           (0x00003FFF&(data))

#define  ONMS_onms3_hsync_meas_ctrl                                             0x1802145C
#define  ONMS_onms3_hsync_meas_ctrl_reg_addr                                     "0xB802145C"
#define  ONMS_onms3_hsync_meas_ctrl_reg                                          0xB802145C
#define  ONMS_onms3_hsync_meas_ctrl_inst_addr                                    "0x003A"
#define  set_ONMS_onms3_hsync_meas_ctrl_reg(data)                                (*((volatile unsigned int*)ONMS_onms3_hsync_meas_ctrl_reg)=data)
#define  get_ONMS_onms3_hsync_meas_ctrl_reg                                      (*((volatile unsigned int*)ONMS_onms3_hsync_meas_ctrl_reg))
#define  ONMS_onms3_hsync_meas_ctrl_on3_htotal_max_delta_new_shift               (24)
#define  ONMS_onms3_hsync_meas_ctrl_on3_average_line_shift                       (16)
#define  ONMS_onms3_hsync_meas_ctrl_on3_target_measure_shift                     (0)
#define  ONMS_onms3_hsync_meas_ctrl_on3_htotal_max_delta_new_mask                (0x7F000000)
#define  ONMS_onms3_hsync_meas_ctrl_on3_average_line_mask                        (0x000F0000)
#define  ONMS_onms3_hsync_meas_ctrl_on3_target_measure_mask                      (0x00003FFF)
#define  ONMS_onms3_hsync_meas_ctrl_on3_htotal_max_delta_new(data)               (0x7F000000&((data)<<24))
#define  ONMS_onms3_hsync_meas_ctrl_on3_average_line(data)                       (0x000F0000&((data)<<16))
#define  ONMS_onms3_hsync_meas_ctrl_on3_target_measure(data)                     (0x00003FFF&(data))
#define  ONMS_onms3_hsync_meas_ctrl_get_on3_htotal_max_delta_new(data)           ((0x7F000000&(data))>>24)
#define  ONMS_onms3_hsync_meas_ctrl_get_on3_average_line(data)                   ((0x000F0000&(data))>>16)
#define  ONMS_onms3_hsync_meas_ctrl_get_on3_target_measure(data)                 (0x00003FFF&(data))

#define  ONMS_onms3_hsync_meas_ctrl_2                                           0x18021460
#define  ONMS_onms3_hsync_meas_ctrl_2_reg_addr                                   "0xB8021460"
#define  ONMS_onms3_hsync_meas_ctrl_2_reg                                        0xB8021460
#define  ONMS_onms3_hsync_meas_ctrl_2_inst_addr                                  "0x003B"
#define  set_ONMS_onms3_hsync_meas_ctrl_2_reg(data)                              (*((volatile unsigned int*)ONMS_onms3_hsync_meas_ctrl_2_reg)=data)
#define  get_ONMS_onms3_hsync_meas_ctrl_2_reg                                    (*((volatile unsigned int*)ONMS_onms3_hsync_meas_ctrl_2_reg))
#define  ONMS_onms3_hsync_meas_ctrl_2_on3_vmeas_end_shift                        (16)
#define  ONMS_onms3_hsync_meas_ctrl_2_on3_vmeas_start_shift                      (0)
#define  ONMS_onms3_hsync_meas_ctrl_2_on3_vmeas_end_mask                         (0x7FFF0000)
#define  ONMS_onms3_hsync_meas_ctrl_2_on3_vmeas_start_mask                       (0x00007FFF)
#define  ONMS_onms3_hsync_meas_ctrl_2_on3_vmeas_end(data)                        (0x7FFF0000&((data)<<16))
#define  ONMS_onms3_hsync_meas_ctrl_2_on3_vmeas_start(data)                      (0x00007FFF&(data))
#define  ONMS_onms3_hsync_meas_ctrl_2_get_on3_vmeas_end(data)                    ((0x7FFF0000&(data))>>16)
#define  ONMS_onms3_hsync_meas_ctrl_2_get_on3_vmeas_start(data)                  (0x00007FFF&(data))

#define  ONMS_onms3_hsync_meas_result                                           0x18021464
#define  ONMS_onms3_hsync_meas_result_reg_addr                                   "0xB8021464"
#define  ONMS_onms3_hsync_meas_result_reg                                        0xB8021464
#define  ONMS_onms3_hsync_meas_result_inst_addr                                  "0x003C"
#define  set_ONMS_onms3_hsync_meas_result_reg(data)                              (*((volatile unsigned int*)ONMS_onms3_hsync_meas_result_reg)=data)
#define  get_ONMS_onms3_hsync_meas_result_reg                                    (*((volatile unsigned int*)ONMS_onms3_hsync_meas_result_reg))
#define  ONMS_onms3_hsync_meas_result_on3_hmax_delta_total_shift                 (0)
#define  ONMS_onms3_hsync_meas_result_on3_hmax_delta_total_mask                  (0x00003FFF)
#define  ONMS_onms3_hsync_meas_result_on3_hmax_delta_total(data)                 (0x00003FFF&(data))
#define  ONMS_onms3_hsync_meas_result_get_on3_hmax_delta_total(data)             (0x00003FFF&(data))

#define  ONMS_onms3_status                                                      0x18021468
#define  ONMS_onms3_status_reg_addr                                              "0xB8021468"
#define  ONMS_onms3_status_reg                                                   0xB8021468
#define  ONMS_onms3_status_inst_addr                                             "0x003D"
#define  set_ONMS_onms3_status_reg(data)                                         (*((volatile unsigned int*)ONMS_onms3_status_reg)=data)
#define  get_ONMS_onms3_status_reg                                               (*((volatile unsigned int*)ONMS_onms3_status_reg))
#define  ONMS_onms3_status_on3_hgclk_gate_over_range_shift                       (22)
#define  ONMS_onms3_status_on3_hs_meas_over_range_shift                          (21)
#define  ONMS_onms3_status_on3_vs_per_to_long_shift                              (20)
#define  ONMS_onms3_status_on3_vs_pol_out_shift                                  (17)
#define  ONMS_onms3_status_on3_hs_pol_out_shift                                  (16)
#define  ONMS_onms3_status_on3_vs_per_over_range_shift                           (15)
#define  ONMS_onms3_status_on3_hs_per_over_range_shift                           (14)
#define  ONMS_onms3_status_on3_vs_per_timeout_shift                              (13)
#define  ONMS_onms3_status_on3_vs_high_timeout_shift                             (12)
#define  ONMS_onms3_status_on3_vs_per_overflow_shift                             (11)
#define  ONMS_onms3_status_on3_hs_per_overflow_shift                             (10)
#define  ONMS_onms3_status_on3_vs_pol_chg_shift                                  (9)
#define  ONMS_onms3_status_on3_hs_pol_chg_shift                                  (8)
#define  ONMS_onms3_status_on3_vtotalde_chg_shift                                (7)
#define  ONMS_onms3_status_on3_vtotal_chg_shift                                  (6)
#define  ONMS_onms3_status_on3_hact_chg_shift                                    (5)
#define  ONMS_onms3_status_on3_htotal_chg_shift                                  (4)
#define  ONMS_onms3_status_on3_hs_active_pixel_var_shift                         (3)
#define  ONMS_onms3_status_on3_vs_per_underflow_shift                            (2)
#define  ONMS_onms3_status_on3_hgclk_gate_over_range_mask                        (0x00400000)
#define  ONMS_onms3_status_on3_hs_meas_over_range_mask                           (0x00200000)
#define  ONMS_onms3_status_on3_vs_per_to_long_mask                               (0x00100000)
#define  ONMS_onms3_status_on3_vs_pol_out_mask                                   (0x00020000)
#define  ONMS_onms3_status_on3_hs_pol_out_mask                                   (0x00010000)
#define  ONMS_onms3_status_on3_vs_per_over_range_mask                            (0x00008000)
#define  ONMS_onms3_status_on3_hs_per_over_range_mask                            (0x00004000)
#define  ONMS_onms3_status_on3_vs_per_timeout_mask                               (0x00002000)
#define  ONMS_onms3_status_on3_vs_high_timeout_mask                              (0x00001000)
#define  ONMS_onms3_status_on3_vs_per_overflow_mask                              (0x00000800)
#define  ONMS_onms3_status_on3_hs_per_overflow_mask                              (0x00000400)
#define  ONMS_onms3_status_on3_vs_pol_chg_mask                                   (0x00000200)
#define  ONMS_onms3_status_on3_hs_pol_chg_mask                                   (0x00000100)
#define  ONMS_onms3_status_on3_vtotalde_chg_mask                                 (0x00000080)
#define  ONMS_onms3_status_on3_vtotal_chg_mask                                   (0x00000040)
#define  ONMS_onms3_status_on3_hact_chg_mask                                     (0x00000020)
#define  ONMS_onms3_status_on3_htotal_chg_mask                                   (0x00000010)
#define  ONMS_onms3_status_on3_hs_active_pixel_var_mask                          (0x00000008)
#define  ONMS_onms3_status_on3_vs_per_underflow_mask                             (0x00000004)
#define  ONMS_onms3_status_on3_hgclk_gate_over_range(data)                       (0x00400000&((data)<<22))
#define  ONMS_onms3_status_on3_hs_meas_over_range(data)                          (0x00200000&((data)<<21))
#define  ONMS_onms3_status_on3_vs_per_to_long(data)                              (0x00100000&((data)<<20))
#define  ONMS_onms3_status_on3_vs_pol_out(data)                                  (0x00020000&((data)<<17))
#define  ONMS_onms3_status_on3_hs_pol_out(data)                                  (0x00010000&((data)<<16))
#define  ONMS_onms3_status_on3_vs_per_over_range(data)                           (0x00008000&((data)<<15))
#define  ONMS_onms3_status_on3_hs_per_over_range(data)                           (0x00004000&((data)<<14))
#define  ONMS_onms3_status_on3_vs_per_timeout(data)                              (0x00002000&((data)<<13))
#define  ONMS_onms3_status_on3_vs_high_timeout(data)                             (0x00001000&((data)<<12))
#define  ONMS_onms3_status_on3_vs_per_overflow(data)                             (0x00000800&((data)<<11))
#define  ONMS_onms3_status_on3_hs_per_overflow(data)                             (0x00000400&((data)<<10))
#define  ONMS_onms3_status_on3_vs_pol_chg(data)                                  (0x00000200&((data)<<9))
#define  ONMS_onms3_status_on3_hs_pol_chg(data)                                  (0x00000100&((data)<<8))
#define  ONMS_onms3_status_on3_vtotalde_chg(data)                                (0x00000080&((data)<<7))
#define  ONMS_onms3_status_on3_vtotal_chg(data)                                  (0x00000040&((data)<<6))
#define  ONMS_onms3_status_on3_hact_chg(data)                                    (0x00000020&((data)<<5))
#define  ONMS_onms3_status_on3_htotal_chg(data)                                  (0x00000010&((data)<<4))
#define  ONMS_onms3_status_on3_hs_active_pixel_var(data)                         (0x00000008&((data)<<3))
#define  ONMS_onms3_status_on3_vs_per_underflow(data)                            (0x00000004&((data)<<2))
#define  ONMS_onms3_status_get_on3_hgclk_gate_over_range(data)                   ((0x00400000&(data))>>22)
#define  ONMS_onms3_status_get_on3_hs_meas_over_range(data)                      ((0x00200000&(data))>>21)
#define  ONMS_onms3_status_get_on3_vs_per_to_long(data)                          ((0x00100000&(data))>>20)
#define  ONMS_onms3_status_get_on3_vs_pol_out(data)                              ((0x00020000&(data))>>17)
#define  ONMS_onms3_status_get_on3_hs_pol_out(data)                              ((0x00010000&(data))>>16)
#define  ONMS_onms3_status_get_on3_vs_per_over_range(data)                       ((0x00008000&(data))>>15)
#define  ONMS_onms3_status_get_on3_hs_per_over_range(data)                       ((0x00004000&(data))>>14)
#define  ONMS_onms3_status_get_on3_vs_per_timeout(data)                          ((0x00002000&(data))>>13)
#define  ONMS_onms3_status_get_on3_vs_high_timeout(data)                         ((0x00001000&(data))>>12)
#define  ONMS_onms3_status_get_on3_vs_per_overflow(data)                         ((0x00000800&(data))>>11)
#define  ONMS_onms3_status_get_on3_hs_per_overflow(data)                         ((0x00000400&(data))>>10)
#define  ONMS_onms3_status_get_on3_vs_pol_chg(data)                              ((0x00000200&(data))>>9)
#define  ONMS_onms3_status_get_on3_hs_pol_chg(data)                              ((0x00000100&(data))>>8)
#define  ONMS_onms3_status_get_on3_vtotalde_chg(data)                            ((0x00000080&(data))>>7)
#define  ONMS_onms3_status_get_on3_vtotal_chg(data)                              ((0x00000040&(data))>>6)
#define  ONMS_onms3_status_get_on3_hact_chg(data)                                ((0x00000020&(data))>>5)
#define  ONMS_onms3_status_get_on3_htotal_chg(data)                              ((0x00000010&(data))>>4)
#define  ONMS_onms3_status_get_on3_hs_active_pixel_var(data)                     ((0x00000008&(data))>>3)
#define  ONMS_onms3_status_get_on3_vs_per_underflow(data)                        ((0x00000004&(data))>>2)

#define  ONMS_onms3_watchdog_en                                                 0x1802146C
#define  ONMS_onms3_watchdog_en_reg_addr                                         "0xB802146C"
#define  ONMS_onms3_watchdog_en_reg                                              0xB802146C
#define  ONMS_onms3_watchdog_en_inst_addr                                        "0x003E"
#define  set_ONMS_onms3_watchdog_en_reg(data)                                    (*((volatile unsigned int*)ONMS_onms3_watchdog_en_reg)=data)
#define  get_ONMS_onms3_watchdog_en_reg                                          (*((volatile unsigned int*)ONMS_onms3_watchdog_en_reg))
#define  ONMS_onms3_watchdog_en_on3_wd_to_main_shift                             (31)
#define  ONMS_onms3_watchdog_en_on3_wd_to_sub_shift                              (30)
#define  ONMS_onms3_watchdog_en_on3_wd_hgclk_gate_over_range_shift               (22)
#define  ONMS_onms3_watchdog_en_on3_wd_hs_meas_over_range_shift                  (21)
#define  ONMS_onms3_watchdog_en_on3_wd_vs_per_over_range_shift                   (15)
#define  ONMS_onms3_watchdog_en_on3_wd_hs_per_over_range_shift                   (14)
#define  ONMS_onms3_watchdog_en_on3_wd_vs_per_timeout_shift                      (13)
#define  ONMS_onms3_watchdog_en_on3_wd_vs_high_timeout_shift                     (12)
#define  ONMS_onms3_watchdog_en_on3_wd_vs_per_overflow_shift                     (11)
#define  ONMS_onms3_watchdog_en_on3_wd_hs_per_overflow_shift                     (10)
#define  ONMS_onms3_watchdog_en_on3_wd_vs_pol_chg_shift                          (9)
#define  ONMS_onms3_watchdog_en_on3_wd_hs_pol_chg_shift                          (8)
#define  ONMS_onms3_watchdog_en_on3_wd_vtotalde_chg_shift                        (7)
#define  ONMS_onms3_watchdog_en_on3_wd_vtotal_chg_shift                          (6)
#define  ONMS_onms3_watchdog_en_on3_wd_hact_chg_shift                            (5)
#define  ONMS_onms3_watchdog_en_on3_wd_htotal_chg_shift                          (4)
#define  ONMS_onms3_watchdog_en_on3_wd_hs_active_pixel_var_shift                 (3)
#define  ONMS_onms3_watchdog_en_on3_wd_vs_per_underflow_shift                    (2)
#define  ONMS_onms3_watchdog_en_on3_wd_to_main_mask                              (0x80000000)
#define  ONMS_onms3_watchdog_en_on3_wd_to_sub_mask                               (0x40000000)
#define  ONMS_onms3_watchdog_en_on3_wd_hgclk_gate_over_range_mask                (0x00400000)
#define  ONMS_onms3_watchdog_en_on3_wd_hs_meas_over_range_mask                   (0x00200000)
#define  ONMS_onms3_watchdog_en_on3_wd_vs_per_over_range_mask                    (0x00008000)
#define  ONMS_onms3_watchdog_en_on3_wd_hs_per_over_range_mask                    (0x00004000)
#define  ONMS_onms3_watchdog_en_on3_wd_vs_per_timeout_mask                       (0x00002000)
#define  ONMS_onms3_watchdog_en_on3_wd_vs_high_timeout_mask                      (0x00001000)
#define  ONMS_onms3_watchdog_en_on3_wd_vs_per_overflow_mask                      (0x00000800)
#define  ONMS_onms3_watchdog_en_on3_wd_hs_per_overflow_mask                      (0x00000400)
#define  ONMS_onms3_watchdog_en_on3_wd_vs_pol_chg_mask                           (0x00000200)
#define  ONMS_onms3_watchdog_en_on3_wd_hs_pol_chg_mask                           (0x00000100)
#define  ONMS_onms3_watchdog_en_on3_wd_vtotalde_chg_mask                         (0x00000080)
#define  ONMS_onms3_watchdog_en_on3_wd_vtotal_chg_mask                           (0x00000040)
#define  ONMS_onms3_watchdog_en_on3_wd_hact_chg_mask                             (0x00000020)
#define  ONMS_onms3_watchdog_en_on3_wd_htotal_chg_mask                           (0x00000010)
#define  ONMS_onms3_watchdog_en_on3_wd_hs_active_pixel_var_mask                  (0x00000008)
#define  ONMS_onms3_watchdog_en_on3_wd_vs_per_underflow_mask                     (0x00000004)
#define  ONMS_onms3_watchdog_en_on3_wd_to_main(data)                             (0x80000000&((data)<<31))
#define  ONMS_onms3_watchdog_en_on3_wd_to_sub(data)                              (0x40000000&((data)<<30))
#define  ONMS_onms3_watchdog_en_on3_wd_hgclk_gate_over_range(data)               (0x00400000&((data)<<22))
#define  ONMS_onms3_watchdog_en_on3_wd_hs_meas_over_range(data)                  (0x00200000&((data)<<21))
#define  ONMS_onms3_watchdog_en_on3_wd_vs_per_over_range(data)                   (0x00008000&((data)<<15))
#define  ONMS_onms3_watchdog_en_on3_wd_hs_per_over_range(data)                   (0x00004000&((data)<<14))
#define  ONMS_onms3_watchdog_en_on3_wd_vs_per_timeout(data)                      (0x00002000&((data)<<13))
#define  ONMS_onms3_watchdog_en_on3_wd_vs_high_timeout(data)                     (0x00001000&((data)<<12))
#define  ONMS_onms3_watchdog_en_on3_wd_vs_per_overflow(data)                     (0x00000800&((data)<<11))
#define  ONMS_onms3_watchdog_en_on3_wd_hs_per_overflow(data)                     (0x00000400&((data)<<10))
#define  ONMS_onms3_watchdog_en_on3_wd_vs_pol_chg(data)                          (0x00000200&((data)<<9))
#define  ONMS_onms3_watchdog_en_on3_wd_hs_pol_chg(data)                          (0x00000100&((data)<<8))
#define  ONMS_onms3_watchdog_en_on3_wd_vtotalde_chg(data)                        (0x00000080&((data)<<7))
#define  ONMS_onms3_watchdog_en_on3_wd_vtotal_chg(data)                          (0x00000040&((data)<<6))
#define  ONMS_onms3_watchdog_en_on3_wd_hact_chg(data)                            (0x00000020&((data)<<5))
#define  ONMS_onms3_watchdog_en_on3_wd_htotal_chg(data)                          (0x00000010&((data)<<4))
#define  ONMS_onms3_watchdog_en_on3_wd_hs_active_pixel_var(data)                 (0x00000008&((data)<<3))
#define  ONMS_onms3_watchdog_en_on3_wd_vs_per_underflow(data)                    (0x00000004&((data)<<2))
#define  ONMS_onms3_watchdog_en_get_on3_wd_to_main(data)                         ((0x80000000&(data))>>31)
#define  ONMS_onms3_watchdog_en_get_on3_wd_to_sub(data)                          ((0x40000000&(data))>>30)
#define  ONMS_onms3_watchdog_en_get_on3_wd_hgclk_gate_over_range(data)           ((0x00400000&(data))>>22)
#define  ONMS_onms3_watchdog_en_get_on3_wd_hs_meas_over_range(data)              ((0x00200000&(data))>>21)
#define  ONMS_onms3_watchdog_en_get_on3_wd_vs_per_over_range(data)               ((0x00008000&(data))>>15)
#define  ONMS_onms3_watchdog_en_get_on3_wd_hs_per_over_range(data)               ((0x00004000&(data))>>14)
#define  ONMS_onms3_watchdog_en_get_on3_wd_vs_per_timeout(data)                  ((0x00002000&(data))>>13)
#define  ONMS_onms3_watchdog_en_get_on3_wd_vs_high_timeout(data)                 ((0x00001000&(data))>>12)
#define  ONMS_onms3_watchdog_en_get_on3_wd_vs_per_overflow(data)                 ((0x00000800&(data))>>11)
#define  ONMS_onms3_watchdog_en_get_on3_wd_hs_per_overflow(data)                 ((0x00000400&(data))>>10)
#define  ONMS_onms3_watchdog_en_get_on3_wd_vs_pol_chg(data)                      ((0x00000200&(data))>>9)
#define  ONMS_onms3_watchdog_en_get_on3_wd_hs_pol_chg(data)                      ((0x00000100&(data))>>8)
#define  ONMS_onms3_watchdog_en_get_on3_wd_vtotalde_chg(data)                    ((0x00000080&(data))>>7)
#define  ONMS_onms3_watchdog_en_get_on3_wd_vtotal_chg(data)                      ((0x00000040&(data))>>6)
#define  ONMS_onms3_watchdog_en_get_on3_wd_hact_chg(data)                        ((0x00000020&(data))>>5)
#define  ONMS_onms3_watchdog_en_get_on3_wd_htotal_chg(data)                      ((0x00000010&(data))>>4)
#define  ONMS_onms3_watchdog_en_get_on3_wd_hs_active_pixel_var(data)             ((0x00000008&(data))>>3)
#define  ONMS_onms3_watchdog_en_get_on3_wd_vs_per_underflow(data)                ((0x00000004&(data))>>2)

#define  ONMS_onms3_interrupt_en                                                0x18021470
#define  ONMS_onms3_interrupt_en_reg_addr                                        "0xB8021470"
#define  ONMS_onms3_interrupt_en_reg                                             0xB8021470
#define  ONMS_onms3_interrupt_en_inst_addr                                       "0x003F"
#define  set_ONMS_onms3_interrupt_en_reg(data)                                   (*((volatile unsigned int*)ONMS_onms3_interrupt_en_reg)=data)
#define  get_ONMS_onms3_interrupt_en_reg                                         (*((volatile unsigned int*)ONMS_onms3_interrupt_en_reg))
#define  ONMS_onms3_interrupt_en_on3_ie_to_main_shift                            (31)
#define  ONMS_onms3_interrupt_en_on3_ie_hgclk_gate_over_range_shift              (22)
#define  ONMS_onms3_interrupt_en_on3_ie_hs_meas_over_range_shift                 (21)
#define  ONMS_onms3_interrupt_en_on3_ie_vs_per_over_range_shift                  (15)
#define  ONMS_onms3_interrupt_en_on3_ie_hs_per_over_range_shift                  (14)
#define  ONMS_onms3_interrupt_en_on3_ie_vs_per_timeout_shift                     (13)
#define  ONMS_onms3_interrupt_en_on3_ie_vs_high_timeout_shift                    (12)
#define  ONMS_onms3_interrupt_en_on3_ie_vs_per_overflow_shift                    (11)
#define  ONMS_onms3_interrupt_en_on3_ie_hs_per_overflow_shift                    (10)
#define  ONMS_onms3_interrupt_en_on3_ie_vs_pol_chg_shift                         (9)
#define  ONMS_onms3_interrupt_en_on3_ie_hs_pol_chg_shift                         (8)
#define  ONMS_onms3_interrupt_en_on3_ie_vtotalde_chg_shift                       (7)
#define  ONMS_onms3_interrupt_en_on3_ie_vtotal_chg_shift                         (6)
#define  ONMS_onms3_interrupt_en_on3_ie_hact_chg_shift                           (5)
#define  ONMS_onms3_interrupt_en_on3_ie_htotal_chg_shift                         (4)
#define  ONMS_onms3_interrupt_en_on3_ie_hs_active_pixel_var_shift                (3)
#define  ONMS_onms3_interrupt_en_on3_ie_vs_per_underflow_shift                   (2)
#define  ONMS_onms3_interrupt_en_on3_ie_to_main_mask                             (0x80000000)
#define  ONMS_onms3_interrupt_en_on3_ie_hgclk_gate_over_range_mask               (0x00400000)
#define  ONMS_onms3_interrupt_en_on3_ie_hs_meas_over_range_mask                  (0x00200000)
#define  ONMS_onms3_interrupt_en_on3_ie_vs_per_over_range_mask                   (0x00008000)
#define  ONMS_onms3_interrupt_en_on3_ie_hs_per_over_range_mask                   (0x00004000)
#define  ONMS_onms3_interrupt_en_on3_ie_vs_per_timeout_mask                      (0x00002000)
#define  ONMS_onms3_interrupt_en_on3_ie_vs_high_timeout_mask                     (0x00001000)
#define  ONMS_onms3_interrupt_en_on3_ie_vs_per_overflow_mask                     (0x00000800)
#define  ONMS_onms3_interrupt_en_on3_ie_hs_per_overflow_mask                     (0x00000400)
#define  ONMS_onms3_interrupt_en_on3_ie_vs_pol_chg_mask                          (0x00000200)
#define  ONMS_onms3_interrupt_en_on3_ie_hs_pol_chg_mask                          (0x00000100)
#define  ONMS_onms3_interrupt_en_on3_ie_vtotalde_chg_mask                        (0x00000080)
#define  ONMS_onms3_interrupt_en_on3_ie_vtotal_chg_mask                          (0x00000040)
#define  ONMS_onms3_interrupt_en_on3_ie_hact_chg_mask                            (0x00000020)
#define  ONMS_onms3_interrupt_en_on3_ie_htotal_chg_mask                          (0x00000010)
#define  ONMS_onms3_interrupt_en_on3_ie_hs_active_pixel_var_mask                 (0x00000008)
#define  ONMS_onms3_interrupt_en_on3_ie_vs_per_underflow_mask                    (0x00000004)
#define  ONMS_onms3_interrupt_en_on3_ie_to_main(data)                            (0x80000000&((data)<<31))
#define  ONMS_onms3_interrupt_en_on3_ie_hgclk_gate_over_range(data)              (0x00400000&((data)<<22))
#define  ONMS_onms3_interrupt_en_on3_ie_hs_meas_over_range(data)                 (0x00200000&((data)<<21))
#define  ONMS_onms3_interrupt_en_on3_ie_vs_per_over_range(data)                  (0x00008000&((data)<<15))
#define  ONMS_onms3_interrupt_en_on3_ie_hs_per_over_range(data)                  (0x00004000&((data)<<14))
#define  ONMS_onms3_interrupt_en_on3_ie_vs_per_timeout(data)                     (0x00002000&((data)<<13))
#define  ONMS_onms3_interrupt_en_on3_ie_vs_high_timeout(data)                    (0x00001000&((data)<<12))
#define  ONMS_onms3_interrupt_en_on3_ie_vs_per_overflow(data)                    (0x00000800&((data)<<11))
#define  ONMS_onms3_interrupt_en_on3_ie_hs_per_overflow(data)                    (0x00000400&((data)<<10))
#define  ONMS_onms3_interrupt_en_on3_ie_vs_pol_chg(data)                         (0x00000200&((data)<<9))
#define  ONMS_onms3_interrupt_en_on3_ie_hs_pol_chg(data)                         (0x00000100&((data)<<8))
#define  ONMS_onms3_interrupt_en_on3_ie_vtotalde_chg(data)                       (0x00000080&((data)<<7))
#define  ONMS_onms3_interrupt_en_on3_ie_vtotal_chg(data)                         (0x00000040&((data)<<6))
#define  ONMS_onms3_interrupt_en_on3_ie_hact_chg(data)                           (0x00000020&((data)<<5))
#define  ONMS_onms3_interrupt_en_on3_ie_htotal_chg(data)                         (0x00000010&((data)<<4))
#define  ONMS_onms3_interrupt_en_on3_ie_hs_active_pixel_var(data)                (0x00000008&((data)<<3))
#define  ONMS_onms3_interrupt_en_on3_ie_vs_per_underflow(data)                   (0x00000004&((data)<<2))
#define  ONMS_onms3_interrupt_en_get_on3_ie_to_main(data)                        ((0x80000000&(data))>>31)
#define  ONMS_onms3_interrupt_en_get_on3_ie_hgclk_gate_over_range(data)          ((0x00400000&(data))>>22)
#define  ONMS_onms3_interrupt_en_get_on3_ie_hs_meas_over_range(data)             ((0x00200000&(data))>>21)
#define  ONMS_onms3_interrupt_en_get_on3_ie_vs_per_over_range(data)              ((0x00008000&(data))>>15)
#define  ONMS_onms3_interrupt_en_get_on3_ie_hs_per_over_range(data)              ((0x00004000&(data))>>14)
#define  ONMS_onms3_interrupt_en_get_on3_ie_vs_per_timeout(data)                 ((0x00002000&(data))>>13)
#define  ONMS_onms3_interrupt_en_get_on3_ie_vs_high_timeout(data)                ((0x00001000&(data))>>12)
#define  ONMS_onms3_interrupt_en_get_on3_ie_vs_per_overflow(data)                ((0x00000800&(data))>>11)
#define  ONMS_onms3_interrupt_en_get_on3_ie_hs_per_overflow(data)                ((0x00000400&(data))>>10)
#define  ONMS_onms3_interrupt_en_get_on3_ie_vs_pol_chg(data)                     ((0x00000200&(data))>>9)
#define  ONMS_onms3_interrupt_en_get_on3_ie_hs_pol_chg(data)                     ((0x00000100&(data))>>8)
#define  ONMS_onms3_interrupt_en_get_on3_ie_vtotalde_chg(data)                   ((0x00000080&(data))>>7)
#define  ONMS_onms3_interrupt_en_get_on3_ie_vtotal_chg(data)                     ((0x00000040&(data))>>6)
#define  ONMS_onms3_interrupt_en_get_on3_ie_hact_chg(data)                       ((0x00000020&(data))>>5)
#define  ONMS_onms3_interrupt_en_get_on3_ie_htotal_chg(data)                     ((0x00000010&(data))>>4)
#define  ONMS_onms3_interrupt_en_get_on3_ie_hs_active_pixel_var(data)            ((0x00000008&(data))>>3)
#define  ONMS_onms3_interrupt_en_get_on3_ie_vs_per_underflow(data)               ((0x00000004&(data))>>2)

#define  ONMS_Onms3_Demode_ctrl                                                 0x18021474
#define  ONMS_Onms3_Demode_ctrl_reg_addr                                         "0xB8021474"
#define  ONMS_Onms3_Demode_ctrl_reg                                              0xB8021474
#define  ONMS_Onms3_Demode_ctrl_inst_addr                                        "0x0040"
#define  set_ONMS_Onms3_Demode_ctrl_reg(data)                                    (*((volatile unsigned int*)ONMS_Onms3_Demode_ctrl_reg)=data)
#define  get_ONMS_Onms3_Demode_ctrl_reg                                          (*((volatile unsigned int*)ONMS_Onms3_Demode_ctrl_reg))
#define  ONMS_Onms3_Demode_ctrl_on3_xtal_sel_shift                               (31)
#define  ONMS_Onms3_Demode_ctrl_on3_demode_vtotal_delta_shift                    (4)
#define  ONMS_Onms3_Demode_ctrl_on3_demode_en_shift                              (0)
#define  ONMS_Onms3_Demode_ctrl_on3_xtal_sel_mask                                (0x80000000)
#define  ONMS_Onms3_Demode_ctrl_on3_demode_vtotal_delta_mask                     (0x0000FFF0)
#define  ONMS_Onms3_Demode_ctrl_on3_demode_en_mask                               (0x00000001)
#define  ONMS_Onms3_Demode_ctrl_on3_xtal_sel(data)                               (0x80000000&((data)<<31))
#define  ONMS_Onms3_Demode_ctrl_on3_demode_vtotal_delta(data)                    (0x0000FFF0&((data)<<4))
#define  ONMS_Onms3_Demode_ctrl_on3_demode_en(data)                              (0x00000001&(data))
#define  ONMS_Onms3_Demode_ctrl_get_on3_xtal_sel(data)                           ((0x80000000&(data))>>31)
#define  ONMS_Onms3_Demode_ctrl_get_on3_demode_vtotal_delta(data)                ((0x0000FFF0&(data))>>4)
#define  ONMS_Onms3_Demode_ctrl_get_on3_demode_en(data)                          (0x00000001&(data))

#define  ONMS_Onms3_Demode_Act                                                  0x18021478
#define  ONMS_Onms3_Demode_Act_reg_addr                                          "0xB8021478"
#define  ONMS_Onms3_Demode_Act_reg                                               0xB8021478
#define  ONMS_Onms3_Demode_Act_inst_addr                                         "0x0041"
#define  set_ONMS_Onms3_Demode_Act_reg(data)                                     (*((volatile unsigned int*)ONMS_Onms3_Demode_Act_reg)=data)
#define  get_ONMS_Onms3_Demode_Act_reg                                           (*((volatile unsigned int*)ONMS_Onms3_Demode_Act_reg))
#define  ONMS_Onms3_Demode_Act_on3_de_hact_shift                                 (18)
#define  ONMS_Onms3_Demode_Act_on3_de_hact_fract_shift                           (14)
#define  ONMS_Onms3_Demode_Act_on3_de_vact_shift                                 (0)
#define  ONMS_Onms3_Demode_Act_on3_de_hact_mask                                  (0xFFFC0000)
#define  ONMS_Onms3_Demode_Act_on3_de_hact_fract_mask                            (0x0003C000)
#define  ONMS_Onms3_Demode_Act_on3_de_vact_mask                                  (0x00003FFF)
#define  ONMS_Onms3_Demode_Act_on3_de_hact(data)                                 (0xFFFC0000&((data)<<18))
#define  ONMS_Onms3_Demode_Act_on3_de_hact_fract(data)                           (0x0003C000&((data)<<14))
#define  ONMS_Onms3_Demode_Act_on3_de_vact(data)                                 (0x00003FFF&(data))
#define  ONMS_Onms3_Demode_Act_get_on3_de_hact(data)                             ((0xFFFC0000&(data))>>18)
#define  ONMS_Onms3_Demode_Act_get_on3_de_hact_fract(data)                       ((0x0003C000&(data))>>14)
#define  ONMS_Onms3_Demode_Act_get_on3_de_vact(data)                             (0x00003FFF&(data))

#define  ONMS_Onms3_Demode_Vs_period                                            0x1802147C
#define  ONMS_Onms3_Demode_Vs_period_reg_addr                                    "0xB802147C"
#define  ONMS_Onms3_Demode_Vs_period_reg                                         0xB802147C
#define  ONMS_Onms3_Demode_Vs_period_inst_addr                                   "0x0042"
#define  set_ONMS_Onms3_Demode_Vs_period_reg(data)                               (*((volatile unsigned int*)ONMS_Onms3_Demode_Vs_period_reg)=data)
#define  get_ONMS_Onms3_Demode_Vs_period_reg                                     (*((volatile unsigned int*)ONMS_Onms3_Demode_Vs_period_reg))
#define  ONMS_Onms3_Demode_Vs_period_on3_de_vs_period_shift                      (0)
#define  ONMS_Onms3_Demode_Vs_period_on3_de_vs_period_mask                       (0x003FFFFF)
#define  ONMS_Onms3_Demode_Vs_period_on3_de_vs_period(data)                      (0x003FFFFF&(data))
#define  ONMS_Onms3_Demode_Vs_period_get_on3_de_vs_period(data)                  (0x003FFFFF&(data))

#define  ONMS_Onms3_Demode_Hs_period                                            0x18021480
#define  ONMS_Onms3_Demode_Hs_period_reg_addr                                    "0xB8021480"
#define  ONMS_Onms3_Demode_Hs_period_reg                                         0xB8021480
#define  ONMS_Onms3_Demode_Hs_period_inst_addr                                   "0x0043"
#define  set_ONMS_Onms3_Demode_Hs_period_reg(data)                               (*((volatile unsigned int*)ONMS_Onms3_Demode_Hs_period_reg)=data)
#define  get_ONMS_Onms3_Demode_Hs_period_reg                                     (*((volatile unsigned int*)ONMS_Onms3_Demode_Hs_period_reg))
#define  ONMS_Onms3_Demode_Hs_period_on3_de_hs_period_shift                      (4)
#define  ONMS_Onms3_Demode_Hs_period_on3_de_hs_period_fract_shift                (0)
#define  ONMS_Onms3_Demode_Hs_period_on3_de_hs_period_mask                       (0x0003FFF0)
#define  ONMS_Onms3_Demode_Hs_period_on3_de_hs_period_fract_mask                 (0x0000000F)
#define  ONMS_Onms3_Demode_Hs_period_on3_de_hs_period(data)                      (0x0003FFF0&((data)<<4))
#define  ONMS_Onms3_Demode_Hs_period_on3_de_hs_period_fract(data)                (0x0000000F&(data))
#define  ONMS_Onms3_Demode_Hs_period_get_on3_de_hs_period(data)                  ((0x0003FFF0&(data))>>4)
#define  ONMS_Onms3_Demode_Hs_period_get_on3_de_hs_period_fract(data)            (0x0000000F&(data))

#define  ONMS_Onms3_Demode_Vs_STA                                               0x18021484
#define  ONMS_Onms3_Demode_Vs_STA_reg_addr                                       "0xB8021484"
#define  ONMS_Onms3_Demode_Vs_STA_reg                                            0xB8021484
#define  ONMS_Onms3_Demode_Vs_STA_inst_addr                                      "0x0044"
#define  set_ONMS_Onms3_Demode_Vs_STA_reg(data)                                  (*((volatile unsigned int*)ONMS_Onms3_Demode_Vs_STA_reg)=data)
#define  get_ONMS_Onms3_Demode_Vs_STA_reg                                        (*((volatile unsigned int*)ONMS_Onms3_Demode_Vs_STA_reg))
#define  ONMS_Onms3_Demode_Vs_STA_on3_de_vs_sta_shift                            (0)
#define  ONMS_Onms3_Demode_Vs_STA_on3_de_vs_sta_mask                             (0x003FFFFF)
#define  ONMS_Onms3_Demode_Vs_STA_on3_de_vs_sta(data)                            (0x003FFFFF&(data))
#define  ONMS_Onms3_Demode_Vs_STA_get_on3_de_vs_sta(data)                        (0x003FFFFF&(data))

#define  ONMS_Onms3_Demode_Vs_END                                               0x18021488
#define  ONMS_Onms3_Demode_Vs_END_reg_addr                                       "0xB8021488"
#define  ONMS_Onms3_Demode_Vs_END_reg                                            0xB8021488
#define  ONMS_Onms3_Demode_Vs_END_inst_addr                                      "0x0045"
#define  set_ONMS_Onms3_Demode_Vs_END_reg(data)                                  (*((volatile unsigned int*)ONMS_Onms3_Demode_Vs_END_reg)=data)
#define  get_ONMS_Onms3_Demode_Vs_END_reg                                        (*((volatile unsigned int*)ONMS_Onms3_Demode_Vs_END_reg))
#define  ONMS_Onms3_Demode_Vs_END_on3_de_vs_end_shift                            (0)
#define  ONMS_Onms3_Demode_Vs_END_on3_de_vs_end_mask                             (0x003FFFFF)
#define  ONMS_Onms3_Demode_Vs_END_on3_de_vs_end(data)                            (0x003FFFFF&(data))
#define  ONMS_Onms3_Demode_Vs_END_get_on3_de_vs_end(data)                        (0x003FFFFF&(data))

#define  ONMS_Onms3_Demode_Vs_UF                                                0x1802148C
#define  ONMS_Onms3_Demode_Vs_UF_reg_addr                                        "0xB802148C"
#define  ONMS_Onms3_Demode_Vs_UF_reg                                             0xB802148C
#define  ONMS_Onms3_Demode_Vs_UF_inst_addr                                       "0x0046"
#define  set_ONMS_Onms3_Demode_Vs_UF_reg(data)                                   (*((volatile unsigned int*)ONMS_Onms3_Demode_Vs_UF_reg)=data)
#define  get_ONMS_Onms3_Demode_Vs_UF_reg                                         (*((volatile unsigned int*)ONMS_Onms3_Demode_Vs_UF_reg))
#define  ONMS_Onms3_Demode_Vs_UF_on3_de_vsper_uf_th_shift                        (0)
#define  ONMS_Onms3_Demode_Vs_UF_on3_de_vsper_uf_th_mask                         (0x003FFFFF)
#define  ONMS_Onms3_Demode_Vs_UF_on3_de_vsper_uf_th(data)                        (0x003FFFFF&(data))
#define  ONMS_Onms3_Demode_Vs_UF_get_on3_de_vsper_uf_th(data)                    (0x003FFFFF&(data))

#define  ONMS_Onms3_Demode_Vs_OF                                                0x18021490
#define  ONMS_Onms3_Demode_Vs_OF_reg_addr                                        "0xB8021490"
#define  ONMS_Onms3_Demode_Vs_OF_reg                                             0xB8021490
#define  ONMS_Onms3_Demode_Vs_OF_inst_addr                                       "0x0047"
#define  set_ONMS_Onms3_Demode_Vs_OF_reg(data)                                   (*((volatile unsigned int*)ONMS_Onms3_Demode_Vs_OF_reg)=data)
#define  get_ONMS_Onms3_Demode_Vs_OF_reg                                         (*((volatile unsigned int*)ONMS_Onms3_Demode_Vs_OF_reg))
#define  ONMS_Onms3_Demode_Vs_OF_on3_de_vsper_of_th_shift                        (0)
#define  ONMS_Onms3_Demode_Vs_OF_on3_de_vsper_of_th_mask                         (0x003FFFFF)
#define  ONMS_Onms3_Demode_Vs_OF_on3_de_vsper_of_th(data)                        (0x003FFFFF&(data))
#define  ONMS_Onms3_Demode_Vs_OF_get_on3_de_vsper_of_th(data)                    (0x003FFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======ONMS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_continuous_popup:1;
        RBus_UInt32  on1_hd21_ms_en:1;
        RBus_UInt32  on1_ms_src_sel:1;
        RBus_UInt32  on1_blk_2frame_en:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  on1_vtotal_max_delta:4;
        RBus_UInt32  on1_htotal_max_delta:4;
        RBus_UInt32  on1_htotal_of_th:2;
        RBus_UInt32  on1_input_align:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  on1_meas_to_sel:1;
        RBus_UInt32  on1_sycms_clk:1;
        RBus_UInt32  on1_vs_meas_inv:1;
        RBus_UInt32  on1_hs_meas_inv:1;
        RBus_UInt32  on1_popup_meas:1;
        RBus_UInt32  on1_ms_conti:1;
        RBus_UInt32  on1_start_ms:1;
    };
}onms_onms1_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  on1_vtotalde:13;
        RBus_UInt32  res2:1;
        RBus_UInt32  on1_vtotal:15;
    };
}onms_onms1_vs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  on1_vs_high_period:15;
        RBus_UInt32  res2:2;
        RBus_UInt32  on1_hs_high_period:14;
    };
}onms_onms1_vshs_high_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  on1_htotal_h12b:14;
        RBus_UInt32  on1_htotal_f4b:4;
    };
}onms_onms1_hs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  on1_vblank_len:8;
        RBus_UInt32  res2:4;
        RBus_UInt32  on1_vact_start:12;
    };
}onms_onms1_vact_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  on1_hact_start:14;
    };
}onms_onms1_hact_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  on1_hact:14;
        RBus_UInt32  on1_hact_fract:4;
    };
}onms_onms1_hact_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  on1_vtotal_uf_th:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  on1_vtotal_of_th:15;
    };
}onms_onms1_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  on1_hgclk_gate_th:14;
    };
}onms_onms1_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  on1_htotal_max_delta_new:7;
        RBus_UInt32  res2:4;
        RBus_UInt32  on1_average_line:4;
        RBus_UInt32  res3:2;
        RBus_UInt32  on1_target_measure:14;
    };
}onms_onms1_hsync_meas_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  on1_vmeas_end:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  on1_vmeas_start:15;
    };
}onms_onms1_hsync_meas_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  on1_hmax_delta_total:14;
    };
}onms_onms1_hsync_meas_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  on1_hgclk_gate_over_range:1;
        RBus_UInt32  on1_hs_meas_over_range:1;
        RBus_UInt32  on1_vs_per_to_long:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  on1_vs_pol_out:1;
        RBus_UInt32  on1_hs_pol_out:1;
        RBus_UInt32  on1_vs_per_over_range:1;
        RBus_UInt32  on1_hs_per_over_range:1;
        RBus_UInt32  on1_vs_per_timeout:1;
        RBus_UInt32  on1_vs_high_timeout:1;
        RBus_UInt32  on1_vs_per_overflow:1;
        RBus_UInt32  on1_hs_per_overflow:1;
        RBus_UInt32  on1_vs_pol_chg:1;
        RBus_UInt32  on1_hs_pol_chg:1;
        RBus_UInt32  on1_vtotalde_chg:1;
        RBus_UInt32  on1_vtotal_chg:1;
        RBus_UInt32  on1_hact_chg:1;
        RBus_UInt32  on1_htotal_chg:1;
        RBus_UInt32  on1_hs_active_pixel_var:1;
        RBus_UInt32  on1_vs_per_underflow:1;
        RBus_UInt32  res3:2;
    };
}onms_onms1_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_wd_to_main:1;
        RBus_UInt32  on1_wd_to_sub:1;
        RBus_UInt32  on1_wd_debug_mode_m:1;
        RBus_UInt32  on1_wd_debug_target_m:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  on1_wd_hgclk_gate_over_range:1;
        RBus_UInt32  on1_wd_hs_meas_over_range:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  on1_wd_vs_per_over_range:1;
        RBus_UInt32  on1_wd_hs_per_over_range:1;
        RBus_UInt32  on1_wd_vs_per_timeout:1;
        RBus_UInt32  on1_wd_vs_high_timeout:1;
        RBus_UInt32  on1_wd_vs_per_overflow:1;
        RBus_UInt32  on1_wd_hs_per_overflow:1;
        RBus_UInt32  on1_wd_vs_pol_chg:1;
        RBus_UInt32  on1_wd_hs_pol_chg:1;
        RBus_UInt32  on1_wd_vtotalde_chg:1;
        RBus_UInt32  on1_wd_vtotal_chg:1;
        RBus_UInt32  on1_wd_hact_chg:1;
        RBus_UInt32  on1_wd_htotal_chg:1;
        RBus_UInt32  on1_wd_hs_active_pixel_var:1;
        RBus_UInt32  on1_wd_vs_per_underflow:1;
        RBus_UInt32  res3:2;
    };
}onms_onms1_watchdog_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_ie_to_main:1;
        RBus_UInt32  res1:8;
        RBus_UInt32  on1_ie_hgclk_gate_over_range:1;
        RBus_UInt32  on1_ie_hs_meas_over_range:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  on1_ie_vs_per_over_range:1;
        RBus_UInt32  on1_ie_hs_per_over_range:1;
        RBus_UInt32  on1_ie_vs_per_timeout:1;
        RBus_UInt32  on1_ie_vs_high_timeout:1;
        RBus_UInt32  on1_ie_vs_per_overflow:1;
        RBus_UInt32  on1_ie_hs_per_overflow:1;
        RBus_UInt32  on1_ie_vs_pol_chg:1;
        RBus_UInt32  on1_ie_hs_pol_chg:1;
        RBus_UInt32  on1_ie_vtotalde_chg:1;
        RBus_UInt32  on1_ie_vtotal_chg:1;
        RBus_UInt32  on1_ie_hact_chg:1;
        RBus_UInt32  on1_ie_htotal_chg:1;
        RBus_UInt32  on1_ie_hs_active_pixel_var:1;
        RBus_UInt32  on1_ie_vs_per_underflow:1;
        RBus_UInt32  res3:2;
    };
}onms_onms1_interrupt_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  vs_period_ms:1;
    };
}onms_vs_timing_monitor_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs_period_s0:32;
    };
}onms_vs_timing_monitor_result_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs_period_s1:32;
    };
}onms_vs_timing_monitor_result_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_xtal_sel:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  on1_demode_vtotal_delta:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  on1_demode_en:1;
    };
}onms_onms1_demode_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_de_hact:14;
        RBus_UInt32  on1_de_hact_fract:4;
        RBus_UInt32  on1_de_vact:14;
    };
}onms_onms1_demode_act_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  on1_de_vs_period:22;
    };
}onms_onms1_demode_vs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  on1_de_hs_period:14;
        RBus_UInt32  on1_de_hs_period_fract:4;
    };
}onms_onms1_demode_hs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  on1_de_vs_sta:22;
    };
}onms_onms1_demode_vs_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  on1_de_vs_end:22;
    };
}onms_onms1_demode_vs_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  on1_de_vsper_uf_th:22;
    };
}onms_onms1_demode_vs_uf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  on1_de_vsper_of_th:22;
    };
}onms_onms1_demode_vs_of_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_continuous_popup:1;
        RBus_UInt32  on2_hd21_ms_en:1;
        RBus_UInt32  on2_ms_src_sel:1;
        RBus_UInt32  on2_blk_2frame_en:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  on2_vtotal_max_delta:4;
        RBus_UInt32  on2_htotal_max_delta:4;
        RBus_UInt32  on2_htotal_of_th:2;
        RBus_UInt32  on2_input_align:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  on2_meas_to_sel:1;
        RBus_UInt32  on2_sycms_clk:1;
        RBus_UInt32  on2_vs_meas_inv:1;
        RBus_UInt32  on2_hs_meas_inv:1;
        RBus_UInt32  on2_popup_meas:1;
        RBus_UInt32  on2_ms_conti:1;
        RBus_UInt32  on2_start_ms:1;
    };
}onms_onms2_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  on2_vtotalde:13;
        RBus_UInt32  res2:1;
        RBus_UInt32  on2_vtotal:15;
    };
}onms_onms2_vs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  on2_vs_high_period:15;
        RBus_UInt32  res2:2;
        RBus_UInt32  on2_hs_high_period:14;
    };
}onms_onms2_vshs_high_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  on2_htotal_h12b:14;
        RBus_UInt32  on2_htotal_f4b:4;
    };
}onms_onms2_hs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  on2_vblank_len:8;
        RBus_UInt32  res2:4;
        RBus_UInt32  on2_vact_start:12;
    };
}onms_onms2_vact_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  on2_hact_start:14;
    };
}onms_onms2_hact_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  on2_hact:14;
        RBus_UInt32  on2_hact_fract:4;
    };
}onms_onms2_hact_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  on2_vtotal_uf_th:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  on2_vtotal_of_th:15;
    };
}onms_onms2_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  on2_hgclk_gate_th:14;
    };
}onms_onms2_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  on2_htotal_max_delta_new:7;
        RBus_UInt32  res2:4;
        RBus_UInt32  on2_average_line:4;
        RBus_UInt32  res3:2;
        RBus_UInt32  on2_target_measure:14;
    };
}onms_onms2_hsync_meas_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  on2_vmeas_end:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  on2_vmeas_start:15;
    };
}onms_onms2_hsync_meas_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  on2_hmax_delta_total:14;
    };
}onms_onms2_hsync_meas_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  on2_hgclk_gate_over_range:1;
        RBus_UInt32  on2_hs_meas_over_range:1;
        RBus_UInt32  on2_vs_per_to_long:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  on2_vs_pol_out:1;
        RBus_UInt32  on2_hs_pol_out:1;
        RBus_UInt32  on2_vs_per_over_range:1;
        RBus_UInt32  on2_hs_per_over_range:1;
        RBus_UInt32  on2_vs_per_timeout:1;
        RBus_UInt32  on2_vs_high_timeout:1;
        RBus_UInt32  on2_vs_per_overflow:1;
        RBus_UInt32  on2_hs_per_overflow:1;
        RBus_UInt32  on2_vs_pol_chg:1;
        RBus_UInt32  on2_hs_pol_chg:1;
        RBus_UInt32  on2_vtotalde_chg:1;
        RBus_UInt32  on2_vtotal_chg:1;
        RBus_UInt32  on2_hact_chg:1;
        RBus_UInt32  on2_htotal_chg:1;
        RBus_UInt32  on2_hs_active_pixel_var:1;
        RBus_UInt32  on2_vs_per_underflow:1;
        RBus_UInt32  res3:2;
    };
}onms_onms2_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_wd_to_main:1;
        RBus_UInt32  on2_wd_to_sub:1;
        RBus_UInt32  on2_wd_debug_mode_s:1;
        RBus_UInt32  on2_wd_debug_target_s:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  on2_wd_hgclk_gate_over_range:1;
        RBus_UInt32  on2_wd_hs_meas_over_range:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  on2_wd_vs_per_over_range:1;
        RBus_UInt32  on2_wd_hs_per_over_range:1;
        RBus_UInt32  on2_wd_vs_per_timeout:1;
        RBus_UInt32  on2_wd_vs_high_timeout:1;
        RBus_UInt32  on2_wd_vs_per_overflow:1;
        RBus_UInt32  on2_wd_hs_per_overflow:1;
        RBus_UInt32  on2_wd_vs_pol_chg:1;
        RBus_UInt32  on2_wd_hs_pol_chg:1;
        RBus_UInt32  on2_wd_vtotalde_chg:1;
        RBus_UInt32  on2_wd_vtotal_chg:1;
        RBus_UInt32  on2_wd_hact_chg:1;
        RBus_UInt32  on2_wd_htotal_chg:1;
        RBus_UInt32  on2_wd_hs_active_pixel_var:1;
        RBus_UInt32  on2_wd_vs_per_underflow:1;
        RBus_UInt32  res3:2;
    };
}onms_onms2_watchdog_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_ie_to_main:1;
        RBus_UInt32  res1:8;
        RBus_UInt32  on2_ie_hgclk_gate_over_range:1;
        RBus_UInt32  on2_ie_hs_meas_over_range:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  on2_ie_vs_per_over_range:1;
        RBus_UInt32  on2_ie_hs_per_over_range:1;
        RBus_UInt32  on2_ie_vs_per_timeout:1;
        RBus_UInt32  on2_ie_vs_high_timeout:1;
        RBus_UInt32  on2_ie_vs_per_overflow:1;
        RBus_UInt32  on2_ie_hs_per_overflow:1;
        RBus_UInt32  on2_ie_vs_pol_chg:1;
        RBus_UInt32  on2_ie_hs_pol_chg:1;
        RBus_UInt32  on2_ie_vtotalde_chg:1;
        RBus_UInt32  on2_ie_vtotal_chg:1;
        RBus_UInt32  on2_ie_hact_chg:1;
        RBus_UInt32  on2_ie_htotal_chg:1;
        RBus_UInt32  on2_ie_hs_active_pixel_var:1;
        RBus_UInt32  on2_ie_vs_per_underflow:1;
        RBus_UInt32  res3:2;
    };
}onms_onms2_interrupt_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_xtal_sel:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  on2_demode_vtotal_delta:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  on2_demode_en:1;
    };
}onms_onms2_demode_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_de_hact:14;
        RBus_UInt32  on2_de_hact_fract:4;
        RBus_UInt32  on2_de_vact:14;
    };
}onms_onms2_demode_act_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  on2_de_vs_period:22;
    };
}onms_onms2_demode_vs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  on2_de_hs_period:14;
        RBus_UInt32  on2_de_hs_period_fract:4;
    };
}onms_onms2_demode_hs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  on2_de_vs_sta:22;
    };
}onms_onms2_demode_vs_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  on2_de_vs_end:22;
    };
}onms_onms2_demode_vs_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  on2_de_vsper_uf_th:22;
    };
}onms_onms2_demode_vs_uf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  on2_de_vsper_of_th:22;
    };
}onms_onms2_demode_vs_of_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_continuous_popup:1;
        RBus_UInt32  on3_hd21_ms_en:1;
        RBus_UInt32  on3_ms_src_sel:1;
        RBus_UInt32  on3_blk_2frame_en:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  on3_vtotal_max_delta:4;
        RBus_UInt32  on3_htotal_max_delta:4;
        RBus_UInt32  on3_htotal_of_th:2;
        RBus_UInt32  on3_input_align:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  on3_meas_to_sel:1;
        RBus_UInt32  on3_sycms_clk:1;
        RBus_UInt32  on3_vs_meas_inv:1;
        RBus_UInt32  on3_hs_meas_inv:1;
        RBus_UInt32  on3_popup_meas:1;
        RBus_UInt32  on3_ms_conti:1;
        RBus_UInt32  on3_start_ms:1;
    };
}onms_onms3_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  on3_vtotalde:13;
        RBus_UInt32  res2:1;
        RBus_UInt32  on3_vtotal:15;
    };
}onms_onms3_vs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  on3_vs_high_period:15;
        RBus_UInt32  res2:2;
        RBus_UInt32  on3_hs_high_period:14;
    };
}onms_onms3_vshs_high_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  on3_htotal_h12b:14;
        RBus_UInt32  on3_htotal_f4b:4;
    };
}onms_onms3_hs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  on3_vblank_len:8;
        RBus_UInt32  res2:4;
        RBus_UInt32  on3_vact_start:12;
    };
}onms_onms3_vact_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  on3_hact_start:14;
    };
}onms_onms3_hact_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  on3_hact:14;
        RBus_UInt32  on3_hact_fract:4;
    };
}onms_onms3_hact_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  on3_vtotal_uf_th:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  on3_vtotal_of_th:15;
    };
}onms_onms3_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  on3_hgclk_gate_th:14;
    };
}onms_onms3_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  on3_htotal_max_delta_new:7;
        RBus_UInt32  res2:4;
        RBus_UInt32  on3_average_line:4;
        RBus_UInt32  res3:2;
        RBus_UInt32  on3_target_measure:14;
    };
}onms_onms3_hsync_meas_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  on3_vmeas_end:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  on3_vmeas_start:15;
    };
}onms_onms3_hsync_meas_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  on3_hmax_delta_total:14;
    };
}onms_onms3_hsync_meas_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  on3_hgclk_gate_over_range:1;
        RBus_UInt32  on3_hs_meas_over_range:1;
        RBus_UInt32  on3_vs_per_to_long:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  on3_vs_pol_out:1;
        RBus_UInt32  on3_hs_pol_out:1;
        RBus_UInt32  on3_vs_per_over_range:1;
        RBus_UInt32  on3_hs_per_over_range:1;
        RBus_UInt32  on3_vs_per_timeout:1;
        RBus_UInt32  on3_vs_high_timeout:1;
        RBus_UInt32  on3_vs_per_overflow:1;
        RBus_UInt32  on3_hs_per_overflow:1;
        RBus_UInt32  on3_vs_pol_chg:1;
        RBus_UInt32  on3_hs_pol_chg:1;
        RBus_UInt32  on3_vtotalde_chg:1;
        RBus_UInt32  on3_vtotal_chg:1;
        RBus_UInt32  on3_hact_chg:1;
        RBus_UInt32  on3_htotal_chg:1;
        RBus_UInt32  on3_hs_active_pixel_var:1;
        RBus_UInt32  on3_vs_per_underflow:1;
        RBus_UInt32  res3:2;
    };
}onms_onms3_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_wd_to_main:1;
        RBus_UInt32  on3_wd_to_sub:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  on3_wd_hgclk_gate_over_range:1;
        RBus_UInt32  on3_wd_hs_meas_over_range:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  on3_wd_vs_per_over_range:1;
        RBus_UInt32  on3_wd_hs_per_over_range:1;
        RBus_UInt32  on3_wd_vs_per_timeout:1;
        RBus_UInt32  on3_wd_vs_high_timeout:1;
        RBus_UInt32  on3_wd_vs_per_overflow:1;
        RBus_UInt32  on3_wd_hs_per_overflow:1;
        RBus_UInt32  on3_wd_vs_pol_chg:1;
        RBus_UInt32  on3_wd_hs_pol_chg:1;
        RBus_UInt32  on3_wd_vtotalde_chg:1;
        RBus_UInt32  on3_wd_vtotal_chg:1;
        RBus_UInt32  on3_wd_hact_chg:1;
        RBus_UInt32  on3_wd_htotal_chg:1;
        RBus_UInt32  on3_wd_hs_active_pixel_var:1;
        RBus_UInt32  on3_wd_vs_per_underflow:1;
        RBus_UInt32  res3:2;
    };
}onms_onms3_watchdog_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_ie_to_main:1;
        RBus_UInt32  res1:8;
        RBus_UInt32  on3_ie_hgclk_gate_over_range:1;
        RBus_UInt32  on3_ie_hs_meas_over_range:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  on3_ie_vs_per_over_range:1;
        RBus_UInt32  on3_ie_hs_per_over_range:1;
        RBus_UInt32  on3_ie_vs_per_timeout:1;
        RBus_UInt32  on3_ie_vs_high_timeout:1;
        RBus_UInt32  on3_ie_vs_per_overflow:1;
        RBus_UInt32  on3_ie_hs_per_overflow:1;
        RBus_UInt32  on3_ie_vs_pol_chg:1;
        RBus_UInt32  on3_ie_hs_pol_chg:1;
        RBus_UInt32  on3_ie_vtotalde_chg:1;
        RBus_UInt32  on3_ie_vtotal_chg:1;
        RBus_UInt32  on3_ie_hact_chg:1;
        RBus_UInt32  on3_ie_htotal_chg:1;
        RBus_UInt32  on3_ie_hs_active_pixel_var:1;
        RBus_UInt32  on3_ie_vs_per_underflow:1;
        RBus_UInt32  res3:2;
    };
}onms_onms3_interrupt_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_xtal_sel:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  on3_demode_vtotal_delta:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  on3_demode_en:1;
    };
}onms_onms3_demode_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_de_hact:14;
        RBus_UInt32  on3_de_hact_fract:4;
        RBus_UInt32  on3_de_vact:14;
    };
}onms_onms3_demode_act_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  on3_de_vs_period:22;
    };
}onms_onms3_demode_vs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  on3_de_hs_period:14;
        RBus_UInt32  on3_de_hs_period_fract:4;
    };
}onms_onms3_demode_hs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  on3_de_vs_sta:22;
    };
}onms_onms3_demode_vs_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  on3_de_vs_end:22;
    };
}onms_onms3_demode_vs_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  on3_de_vsper_uf_th:22;
    };
}onms_onms3_demode_vs_uf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  on3_de_vsper_of_th:22;
    };
}onms_onms3_demode_vs_of_RBUS;

#else //apply LITTLE_ENDIAN

//======ONMS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_start_ms:1;
        RBus_UInt32  on1_ms_conti:1;
        RBus_UInt32  on1_popup_meas:1;
        RBus_UInt32  on1_hs_meas_inv:1;
        RBus_UInt32  on1_vs_meas_inv:1;
        RBus_UInt32  on1_sycms_clk:1;
        RBus_UInt32  on1_meas_to_sel:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  on1_input_align:1;
        RBus_UInt32  on1_htotal_of_th:2;
        RBus_UInt32  on1_htotal_max_delta:4;
        RBus_UInt32  on1_vtotal_max_delta:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  on1_blk_2frame_en:1;
        RBus_UInt32  on1_ms_src_sel:1;
        RBus_UInt32  on1_hd21_ms_en:1;
        RBus_UInt32  on1_continuous_popup:1;
    };
}onms_onms1_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_vtotal:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  on1_vtotalde:13;
        RBus_UInt32  res2:3;
    };
}onms_onms1_vs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_hs_high_period:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  on1_vs_high_period:15;
        RBus_UInt32  res2:1;
    };
}onms_onms1_vshs_high_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_htotal_f4b:4;
        RBus_UInt32  on1_htotal_h12b:14;
        RBus_UInt32  res1:14;
    };
}onms_onms1_hs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_vact_start:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  on1_vblank_len:8;
        RBus_UInt32  res2:8;
    };
}onms_onms1_vact_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_hact_start:14;
        RBus_UInt32  res1:18;
    };
}onms_onms1_hact_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_hact_fract:4;
        RBus_UInt32  on1_hact:14;
        RBus_UInt32  res1:14;
    };
}onms_onms1_hact_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_vtotal_of_th:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  on1_vtotal_uf_th:15;
        RBus_UInt32  res2:1;
    };
}onms_onms1_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_hgclk_gate_th:14;
        RBus_UInt32  res1:18;
    };
}onms_onms1_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_target_measure:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  on1_average_line:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  on1_htotal_max_delta_new:7;
        RBus_UInt32  res3:1;
    };
}onms_onms1_hsync_meas_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_vmeas_start:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  on1_vmeas_end:15;
        RBus_UInt32  res2:1;
    };
}onms_onms1_hsync_meas_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_hmax_delta_total:14;
        RBus_UInt32  res1:18;
    };
}onms_onms1_hsync_meas_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  on1_vs_per_underflow:1;
        RBus_UInt32  on1_hs_active_pixel_var:1;
        RBus_UInt32  on1_htotal_chg:1;
        RBus_UInt32  on1_hact_chg:1;
        RBus_UInt32  on1_vtotal_chg:1;
        RBus_UInt32  on1_vtotalde_chg:1;
        RBus_UInt32  on1_hs_pol_chg:1;
        RBus_UInt32  on1_vs_pol_chg:1;
        RBus_UInt32  on1_hs_per_overflow:1;
        RBus_UInt32  on1_vs_per_overflow:1;
        RBus_UInt32  on1_vs_high_timeout:1;
        RBus_UInt32  on1_vs_per_timeout:1;
        RBus_UInt32  on1_hs_per_over_range:1;
        RBus_UInt32  on1_vs_per_over_range:1;
        RBus_UInt32  on1_hs_pol_out:1;
        RBus_UInt32  on1_vs_pol_out:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  on1_vs_per_to_long:1;
        RBus_UInt32  on1_hs_meas_over_range:1;
        RBus_UInt32  on1_hgclk_gate_over_range:1;
        RBus_UInt32  res3:9;
    };
}onms_onms1_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  on1_wd_vs_per_underflow:1;
        RBus_UInt32  on1_wd_hs_active_pixel_var:1;
        RBus_UInt32  on1_wd_htotal_chg:1;
        RBus_UInt32  on1_wd_hact_chg:1;
        RBus_UInt32  on1_wd_vtotal_chg:1;
        RBus_UInt32  on1_wd_vtotalde_chg:1;
        RBus_UInt32  on1_wd_hs_pol_chg:1;
        RBus_UInt32  on1_wd_vs_pol_chg:1;
        RBus_UInt32  on1_wd_hs_per_overflow:1;
        RBus_UInt32  on1_wd_vs_per_overflow:1;
        RBus_UInt32  on1_wd_vs_high_timeout:1;
        RBus_UInt32  on1_wd_vs_per_timeout:1;
        RBus_UInt32  on1_wd_hs_per_over_range:1;
        RBus_UInt32  on1_wd_vs_per_over_range:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  on1_wd_hs_meas_over_range:1;
        RBus_UInt32  on1_wd_hgclk_gate_over_range:1;
        RBus_UInt32  res3:5;
        RBus_UInt32  on1_wd_debug_target_m:1;
        RBus_UInt32  on1_wd_debug_mode_m:1;
        RBus_UInt32  on1_wd_to_sub:1;
        RBus_UInt32  on1_wd_to_main:1;
    };
}onms_onms1_watchdog_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  on1_ie_vs_per_underflow:1;
        RBus_UInt32  on1_ie_hs_active_pixel_var:1;
        RBus_UInt32  on1_ie_htotal_chg:1;
        RBus_UInt32  on1_ie_hact_chg:1;
        RBus_UInt32  on1_ie_vtotal_chg:1;
        RBus_UInt32  on1_ie_vtotalde_chg:1;
        RBus_UInt32  on1_ie_hs_pol_chg:1;
        RBus_UInt32  on1_ie_vs_pol_chg:1;
        RBus_UInt32  on1_ie_hs_per_overflow:1;
        RBus_UInt32  on1_ie_vs_per_overflow:1;
        RBus_UInt32  on1_ie_vs_high_timeout:1;
        RBus_UInt32  on1_ie_vs_per_timeout:1;
        RBus_UInt32  on1_ie_hs_per_over_range:1;
        RBus_UInt32  on1_ie_vs_per_over_range:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  on1_ie_hs_meas_over_range:1;
        RBus_UInt32  on1_ie_hgclk_gate_over_range:1;
        RBus_UInt32  res3:8;
        RBus_UInt32  on1_ie_to_main:1;
    };
}onms_onms1_interrupt_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs_period_ms:1;
        RBus_UInt32  res1:31;
    };
}onms_vs_timing_monitor_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs_period_s0:32;
    };
}onms_vs_timing_monitor_result_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs_period_s1:32;
    };
}onms_vs_timing_monitor_result_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_demode_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  on1_demode_vtotal_delta:12;
        RBus_UInt32  res2:15;
        RBus_UInt32  on1_xtal_sel:1;
    };
}onms_onms1_demode_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_de_vact:14;
        RBus_UInt32  on1_de_hact_fract:4;
        RBus_UInt32  on1_de_hact:14;
    };
}onms_onms1_demode_act_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_de_vs_period:22;
        RBus_UInt32  res1:10;
    };
}onms_onms1_demode_vs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_de_hs_period_fract:4;
        RBus_UInt32  on1_de_hs_period:14;
        RBus_UInt32  res1:14;
    };
}onms_onms1_demode_hs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_de_vs_sta:22;
        RBus_UInt32  res1:10;
    };
}onms_onms1_demode_vs_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_de_vs_end:22;
        RBus_UInt32  res1:10;
    };
}onms_onms1_demode_vs_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_de_vsper_uf_th:22;
        RBus_UInt32  res1:10;
    };
}onms_onms1_demode_vs_uf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on1_de_vsper_of_th:22;
        RBus_UInt32  res1:10;
    };
}onms_onms1_demode_vs_of_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_start_ms:1;
        RBus_UInt32  on2_ms_conti:1;
        RBus_UInt32  on2_popup_meas:1;
        RBus_UInt32  on2_hs_meas_inv:1;
        RBus_UInt32  on2_vs_meas_inv:1;
        RBus_UInt32  on2_sycms_clk:1;
        RBus_UInt32  on2_meas_to_sel:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  on2_input_align:1;
        RBus_UInt32  on2_htotal_of_th:2;
        RBus_UInt32  on2_htotal_max_delta:4;
        RBus_UInt32  on2_vtotal_max_delta:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  on2_blk_2frame_en:1;
        RBus_UInt32  on2_ms_src_sel:1;
        RBus_UInt32  on2_hd21_ms_en:1;
        RBus_UInt32  on2_continuous_popup:1;
    };
}onms_onms2_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_vtotal:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  on2_vtotalde:13;
        RBus_UInt32  res2:3;
    };
}onms_onms2_vs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_hs_high_period:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  on2_vs_high_period:15;
        RBus_UInt32  res2:1;
    };
}onms_onms2_vshs_high_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_htotal_f4b:4;
        RBus_UInt32  on2_htotal_h12b:14;
        RBus_UInt32  res1:14;
    };
}onms_onms2_hs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_vact_start:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  on2_vblank_len:8;
        RBus_UInt32  res2:8;
    };
}onms_onms2_vact_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_hact_start:14;
        RBus_UInt32  res1:18;
    };
}onms_onms2_hact_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_hact_fract:4;
        RBus_UInt32  on2_hact:14;
        RBus_UInt32  res1:14;
    };
}onms_onms2_hact_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_vtotal_of_th:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  on2_vtotal_uf_th:15;
        RBus_UInt32  res2:1;
    };
}onms_onms2_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_hgclk_gate_th:14;
        RBus_UInt32  res1:18;
    };
}onms_onms2_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_target_measure:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  on2_average_line:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  on2_htotal_max_delta_new:7;
        RBus_UInt32  res3:1;
    };
}onms_onms2_hsync_meas_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_vmeas_start:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  on2_vmeas_end:15;
        RBus_UInt32  res2:1;
    };
}onms_onms2_hsync_meas_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_hmax_delta_total:14;
        RBus_UInt32  res1:18;
    };
}onms_onms2_hsync_meas_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  on2_vs_per_underflow:1;
        RBus_UInt32  on2_hs_active_pixel_var:1;
        RBus_UInt32  on2_htotal_chg:1;
        RBus_UInt32  on2_hact_chg:1;
        RBus_UInt32  on2_vtotal_chg:1;
        RBus_UInt32  on2_vtotalde_chg:1;
        RBus_UInt32  on2_hs_pol_chg:1;
        RBus_UInt32  on2_vs_pol_chg:1;
        RBus_UInt32  on2_hs_per_overflow:1;
        RBus_UInt32  on2_vs_per_overflow:1;
        RBus_UInt32  on2_vs_high_timeout:1;
        RBus_UInt32  on2_vs_per_timeout:1;
        RBus_UInt32  on2_hs_per_over_range:1;
        RBus_UInt32  on2_vs_per_over_range:1;
        RBus_UInt32  on2_hs_pol_out:1;
        RBus_UInt32  on2_vs_pol_out:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  on2_vs_per_to_long:1;
        RBus_UInt32  on2_hs_meas_over_range:1;
        RBus_UInt32  on2_hgclk_gate_over_range:1;
        RBus_UInt32  res3:9;
    };
}onms_onms2_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  on2_wd_vs_per_underflow:1;
        RBus_UInt32  on2_wd_hs_active_pixel_var:1;
        RBus_UInt32  on2_wd_htotal_chg:1;
        RBus_UInt32  on2_wd_hact_chg:1;
        RBus_UInt32  on2_wd_vtotal_chg:1;
        RBus_UInt32  on2_wd_vtotalde_chg:1;
        RBus_UInt32  on2_wd_hs_pol_chg:1;
        RBus_UInt32  on2_wd_vs_pol_chg:1;
        RBus_UInt32  on2_wd_hs_per_overflow:1;
        RBus_UInt32  on2_wd_vs_per_overflow:1;
        RBus_UInt32  on2_wd_vs_high_timeout:1;
        RBus_UInt32  on2_wd_vs_per_timeout:1;
        RBus_UInt32  on2_wd_hs_per_over_range:1;
        RBus_UInt32  on2_wd_vs_per_over_range:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  on2_wd_hs_meas_over_range:1;
        RBus_UInt32  on2_wd_hgclk_gate_over_range:1;
        RBus_UInt32  res3:5;
        RBus_UInt32  on2_wd_debug_target_s:1;
        RBus_UInt32  on2_wd_debug_mode_s:1;
        RBus_UInt32  on2_wd_to_sub:1;
        RBus_UInt32  on2_wd_to_main:1;
    };
}onms_onms2_watchdog_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  on2_ie_vs_per_underflow:1;
        RBus_UInt32  on2_ie_hs_active_pixel_var:1;
        RBus_UInt32  on2_ie_htotal_chg:1;
        RBus_UInt32  on2_ie_hact_chg:1;
        RBus_UInt32  on2_ie_vtotal_chg:1;
        RBus_UInt32  on2_ie_vtotalde_chg:1;
        RBus_UInt32  on2_ie_hs_pol_chg:1;
        RBus_UInt32  on2_ie_vs_pol_chg:1;
        RBus_UInt32  on2_ie_hs_per_overflow:1;
        RBus_UInt32  on2_ie_vs_per_overflow:1;
        RBus_UInt32  on2_ie_vs_high_timeout:1;
        RBus_UInt32  on2_ie_vs_per_timeout:1;
        RBus_UInt32  on2_ie_hs_per_over_range:1;
        RBus_UInt32  on2_ie_vs_per_over_range:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  on2_ie_hs_meas_over_range:1;
        RBus_UInt32  on2_ie_hgclk_gate_over_range:1;
        RBus_UInt32  res3:8;
        RBus_UInt32  on2_ie_to_main:1;
    };
}onms_onms2_interrupt_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_demode_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  on2_demode_vtotal_delta:12;
        RBus_UInt32  res2:15;
        RBus_UInt32  on2_xtal_sel:1;
    };
}onms_onms2_demode_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_de_vact:14;
        RBus_UInt32  on2_de_hact_fract:4;
        RBus_UInt32  on2_de_hact:14;
    };
}onms_onms2_demode_act_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_de_vs_period:22;
        RBus_UInt32  res1:10;
    };
}onms_onms2_demode_vs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_de_hs_period_fract:4;
        RBus_UInt32  on2_de_hs_period:14;
        RBus_UInt32  res1:14;
    };
}onms_onms2_demode_hs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_de_vs_sta:22;
        RBus_UInt32  res1:10;
    };
}onms_onms2_demode_vs_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_de_vs_end:22;
        RBus_UInt32  res1:10;
    };
}onms_onms2_demode_vs_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_de_vsper_uf_th:22;
        RBus_UInt32  res1:10;
    };
}onms_onms2_demode_vs_uf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on2_de_vsper_of_th:22;
        RBus_UInt32  res1:10;
    };
}onms_onms2_demode_vs_of_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_start_ms:1;
        RBus_UInt32  on3_ms_conti:1;
        RBus_UInt32  on3_popup_meas:1;
        RBus_UInt32  on3_hs_meas_inv:1;
        RBus_UInt32  on3_vs_meas_inv:1;
        RBus_UInt32  on3_sycms_clk:1;
        RBus_UInt32  on3_meas_to_sel:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  on3_input_align:1;
        RBus_UInt32  on3_htotal_of_th:2;
        RBus_UInt32  on3_htotal_max_delta:4;
        RBus_UInt32  on3_vtotal_max_delta:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  on3_blk_2frame_en:1;
        RBus_UInt32  on3_ms_src_sel:1;
        RBus_UInt32  on3_hd21_ms_en:1;
        RBus_UInt32  on3_continuous_popup:1;
    };
}onms_onms3_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_vtotal:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  on3_vtotalde:13;
        RBus_UInt32  res2:3;
    };
}onms_onms3_vs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_hs_high_period:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  on3_vs_high_period:15;
        RBus_UInt32  res2:1;
    };
}onms_onms3_vshs_high_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_htotal_f4b:4;
        RBus_UInt32  on3_htotal_h12b:14;
        RBus_UInt32  res1:14;
    };
}onms_onms3_hs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_vact_start:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  on3_vblank_len:8;
        RBus_UInt32  res2:8;
    };
}onms_onms3_vact_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_hact_start:14;
        RBus_UInt32  res1:18;
    };
}onms_onms3_hact_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_hact_fract:4;
        RBus_UInt32  on3_hact:14;
        RBus_UInt32  res1:14;
    };
}onms_onms3_hact_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_vtotal_of_th:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  on3_vtotal_uf_th:15;
        RBus_UInt32  res2:1;
    };
}onms_onms3_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_hgclk_gate_th:14;
        RBus_UInt32  res1:18;
    };
}onms_onms3_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_target_measure:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  on3_average_line:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  on3_htotal_max_delta_new:7;
        RBus_UInt32  res3:1;
    };
}onms_onms3_hsync_meas_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_vmeas_start:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  on3_vmeas_end:15;
        RBus_UInt32  res2:1;
    };
}onms_onms3_hsync_meas_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_hmax_delta_total:14;
        RBus_UInt32  res1:18;
    };
}onms_onms3_hsync_meas_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  on3_vs_per_underflow:1;
        RBus_UInt32  on3_hs_active_pixel_var:1;
        RBus_UInt32  on3_htotal_chg:1;
        RBus_UInt32  on3_hact_chg:1;
        RBus_UInt32  on3_vtotal_chg:1;
        RBus_UInt32  on3_vtotalde_chg:1;
        RBus_UInt32  on3_hs_pol_chg:1;
        RBus_UInt32  on3_vs_pol_chg:1;
        RBus_UInt32  on3_hs_per_overflow:1;
        RBus_UInt32  on3_vs_per_overflow:1;
        RBus_UInt32  on3_vs_high_timeout:1;
        RBus_UInt32  on3_vs_per_timeout:1;
        RBus_UInt32  on3_hs_per_over_range:1;
        RBus_UInt32  on3_vs_per_over_range:1;
        RBus_UInt32  on3_hs_pol_out:1;
        RBus_UInt32  on3_vs_pol_out:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  on3_vs_per_to_long:1;
        RBus_UInt32  on3_hs_meas_over_range:1;
        RBus_UInt32  on3_hgclk_gate_over_range:1;
        RBus_UInt32  res3:9;
    };
}onms_onms3_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  on3_wd_vs_per_underflow:1;
        RBus_UInt32  on3_wd_hs_active_pixel_var:1;
        RBus_UInt32  on3_wd_htotal_chg:1;
        RBus_UInt32  on3_wd_hact_chg:1;
        RBus_UInt32  on3_wd_vtotal_chg:1;
        RBus_UInt32  on3_wd_vtotalde_chg:1;
        RBus_UInt32  on3_wd_hs_pol_chg:1;
        RBus_UInt32  on3_wd_vs_pol_chg:1;
        RBus_UInt32  on3_wd_hs_per_overflow:1;
        RBus_UInt32  on3_wd_vs_per_overflow:1;
        RBus_UInt32  on3_wd_vs_high_timeout:1;
        RBus_UInt32  on3_wd_vs_per_timeout:1;
        RBus_UInt32  on3_wd_hs_per_over_range:1;
        RBus_UInt32  on3_wd_vs_per_over_range:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  on3_wd_hs_meas_over_range:1;
        RBus_UInt32  on3_wd_hgclk_gate_over_range:1;
        RBus_UInt32  res3:7;
        RBus_UInt32  on3_wd_to_sub:1;
        RBus_UInt32  on3_wd_to_main:1;
    };
}onms_onms3_watchdog_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  on3_ie_vs_per_underflow:1;
        RBus_UInt32  on3_ie_hs_active_pixel_var:1;
        RBus_UInt32  on3_ie_htotal_chg:1;
        RBus_UInt32  on3_ie_hact_chg:1;
        RBus_UInt32  on3_ie_vtotal_chg:1;
        RBus_UInt32  on3_ie_vtotalde_chg:1;
        RBus_UInt32  on3_ie_hs_pol_chg:1;
        RBus_UInt32  on3_ie_vs_pol_chg:1;
        RBus_UInt32  on3_ie_hs_per_overflow:1;
        RBus_UInt32  on3_ie_vs_per_overflow:1;
        RBus_UInt32  on3_ie_vs_high_timeout:1;
        RBus_UInt32  on3_ie_vs_per_timeout:1;
        RBus_UInt32  on3_ie_hs_per_over_range:1;
        RBus_UInt32  on3_ie_vs_per_over_range:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  on3_ie_hs_meas_over_range:1;
        RBus_UInt32  on3_ie_hgclk_gate_over_range:1;
        RBus_UInt32  res3:8;
        RBus_UInt32  on3_ie_to_main:1;
    };
}onms_onms3_interrupt_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_demode_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  on3_demode_vtotal_delta:12;
        RBus_UInt32  res2:15;
        RBus_UInt32  on3_xtal_sel:1;
    };
}onms_onms3_demode_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_de_vact:14;
        RBus_UInt32  on3_de_hact_fract:4;
        RBus_UInt32  on3_de_hact:14;
    };
}onms_onms3_demode_act_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_de_vs_period:22;
        RBus_UInt32  res1:10;
    };
}onms_onms3_demode_vs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_de_hs_period_fract:4;
        RBus_UInt32  on3_de_hs_period:14;
        RBus_UInt32  res1:14;
    };
}onms_onms3_demode_hs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_de_vs_sta:22;
        RBus_UInt32  res1:10;
    };
}onms_onms3_demode_vs_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_de_vs_end:22;
        RBus_UInt32  res1:10;
    };
}onms_onms3_demode_vs_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_de_vsper_uf_th:22;
        RBus_UInt32  res1:10;
    };
}onms_onms3_demode_vs_uf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  on3_de_vsper_of_th:22;
        RBus_UInt32  res1:10;
    };
}onms_onms3_demode_vs_of_RBUS;




#endif 


#endif 
