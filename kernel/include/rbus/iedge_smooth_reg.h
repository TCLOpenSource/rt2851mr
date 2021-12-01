/**
* @file Merlin5-DesignSpec-I-Domain_Edge_Smooth
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_IEDGE_SMOOTH_REG_H_
#define _RBUS_IEDGE_SMOOTH_REG_H_

#include "rbus_types.h"



//  IEDGE_SMOOTH Register Address
#define  IEDGE_SMOOTH_EdgeSmooth_EX_CTRL                                        0x18025100
#define  IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_reg_addr                                "0xB8025100"
#define  IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_reg                                     0xB8025100
#define  IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_inst_addr                               "0x0000"
#define  set_IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_reg(data)                           (*((volatile unsigned int*)IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_reg)=data)
#define  get_IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_reg                                 (*((volatile unsigned int*)IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_reg))
#define  IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_tst_en_shift                            (19)
#define  IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_lbuf_c_bypass_shift                     (17)
#define  IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_lbuf_linemode_shift                     (9)
#define  IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_tst_en_mask                             (0x00080000)
#define  IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_lbuf_c_bypass_mask                      (0x00020000)
#define  IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_lbuf_linemode_mask                      (0x00000600)
#define  IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_tst_en(data)                            (0x00080000&((data)<<19))
#define  IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_lbuf_c_bypass(data)                     (0x00020000&((data)<<17))
#define  IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_lbuf_linemode(data)                     (0x00000600&((data)<<9))
#define  IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_get_tst_en(data)                        ((0x00080000&(data))>>19)
#define  IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_get_lbuf_c_bypass(data)                 ((0x00020000&(data))>>17)
#define  IEDGE_SMOOTH_EdgeSmooth_EX_CTRL_get_lbuf_linemode(data)                 ((0x00000600&(data))>>9)

#define  IEDGE_SMOOTH_MIXer_ctrl                                                0x1802510C
#define  IEDGE_SMOOTH_MIXer_ctrl_reg_addr                                        "0xB802510C"
#define  IEDGE_SMOOTH_MIXer_ctrl_reg                                             0xB802510C
#define  IEDGE_SMOOTH_MIXer_ctrl_inst_addr                                       "0x0001"
#define  set_IEDGE_SMOOTH_MIXer_ctrl_reg(data)                                   (*((volatile unsigned int*)IEDGE_SMOOTH_MIXer_ctrl_reg)=data)
#define  get_IEDGE_SMOOTH_MIXer_ctrl_reg                                         (*((volatile unsigned int*)IEDGE_SMOOTH_MIXer_ctrl_reg))
#define  IEDGE_SMOOTH_MIXer_ctrl_dummy_8_shift                                   (8)
#define  IEDGE_SMOOTH_MIXer_ctrl_iedge_mixer_weight_shift                        (4)
#define  IEDGE_SMOOTH_MIXer_ctrl_dummy_8_mask                                    (0x00000100)
#define  IEDGE_SMOOTH_MIXer_ctrl_iedge_mixer_weight_mask                         (0x000000F0)
#define  IEDGE_SMOOTH_MIXer_ctrl_dummy_8(data)                                   (0x00000100&((data)<<8))
#define  IEDGE_SMOOTH_MIXer_ctrl_iedge_mixer_weight(data)                        (0x000000F0&((data)<<4))
#define  IEDGE_SMOOTH_MIXer_ctrl_get_dummy_8(data)                               ((0x00000100&(data))>>8)
#define  IEDGE_SMOOTH_MIXer_ctrl_get_iedge_mixer_weight(data)                    ((0x000000F0&(data))>>4)

#define  IEDGE_SMOOTH_dejagging_ctrl0                                           0x18025120
#define  IEDGE_SMOOTH_dejagging_ctrl0_reg_addr                                   "0xB8025120"
#define  IEDGE_SMOOTH_dejagging_ctrl0_reg                                        0xB8025120
#define  IEDGE_SMOOTH_dejagging_ctrl0_inst_addr                                  "0x0002"
#define  set_IEDGE_SMOOTH_dejagging_ctrl0_reg(data)                              (*((volatile unsigned int*)IEDGE_SMOOTH_dejagging_ctrl0_reg)=data)
#define  get_IEDGE_SMOOTH_dejagging_ctrl0_reg                                    (*((volatile unsigned int*)IEDGE_SMOOTH_dejagging_ctrl0_reg))
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_delta_gain5_shift                  (24)
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_delta_gain3_shift                  (16)
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_nondir_weight_shift                (12)
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_skip_hlh_shift                     (11)
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_what_the_rock_shift                (10)
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_level_shift                        (1)
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_en_shift                           (0)
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_delta_gain5_mask                   (0x7F000000)
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_delta_gain3_mask                   (0x007F0000)
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_nondir_weight_mask                 (0x00001000)
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_skip_hlh_mask                      (0x00000800)
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_what_the_rock_mask                 (0x00000400)
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_level_mask                         (0x00000006)
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_en_mask                            (0x00000001)
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_delta_gain5(data)                  (0x7F000000&((data)<<24))
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_delta_gain3(data)                  (0x007F0000&((data)<<16))
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_nondir_weight(data)                (0x00001000&((data)<<12))
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_skip_hlh(data)                     (0x00000800&((data)<<11))
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_what_the_rock(data)                (0x00000400&((data)<<10))
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_level(data)                        (0x00000006&((data)<<1))
#define  IEDGE_SMOOTH_dejagging_ctrl0_i_dejag_en(data)                           (0x00000001&(data))
#define  IEDGE_SMOOTH_dejagging_ctrl0_get_i_dejag_delta_gain5(data)              ((0x7F000000&(data))>>24)
#define  IEDGE_SMOOTH_dejagging_ctrl0_get_i_dejag_delta_gain3(data)              ((0x007F0000&(data))>>16)
#define  IEDGE_SMOOTH_dejagging_ctrl0_get_i_dejag_nondir_weight(data)            ((0x00001000&(data))>>12)
#define  IEDGE_SMOOTH_dejagging_ctrl0_get_i_dejag_skip_hlh(data)                 ((0x00000800&(data))>>11)
#define  IEDGE_SMOOTH_dejagging_ctrl0_get_i_dejag_what_the_rock(data)            ((0x00000400&(data))>>10)
#define  IEDGE_SMOOTH_dejagging_ctrl0_get_i_dejag_level(data)                    ((0x00000006&(data))>>1)
#define  IEDGE_SMOOTH_dejagging_ctrl0_get_i_dejag_en(data)                       (0x00000001&(data))

#define  IEDGE_SMOOTH_dejagging_motion_support                                  0x18025124
#define  IEDGE_SMOOTH_dejagging_motion_support_reg_addr                          "0xB8025124"
#define  IEDGE_SMOOTH_dejagging_motion_support_reg                               0xB8025124
#define  IEDGE_SMOOTH_dejagging_motion_support_inst_addr                         "0x0003"
#define  set_IEDGE_SMOOTH_dejagging_motion_support_reg(data)                     (*((volatile unsigned int*)IEDGE_SMOOTH_dejagging_motion_support_reg)=data)
#define  get_IEDGE_SMOOTH_dejagging_motion_support_reg                           (*((volatile unsigned int*)IEDGE_SMOOTH_dejagging_motion_support_reg))
#define  IEDGE_SMOOTH_dejagging_motion_support_i_dejag_delta_motion_gain_shift   (12)
#define  IEDGE_SMOOTH_dejagging_motion_support_i_dejag_delta_limit_shift         (0)
#define  IEDGE_SMOOTH_dejagging_motion_support_i_dejag_delta_motion_gain_mask    (0x0001F000)
#define  IEDGE_SMOOTH_dejagging_motion_support_i_dejag_delta_limit_mask          (0x000000FF)
#define  IEDGE_SMOOTH_dejagging_motion_support_i_dejag_delta_motion_gain(data)   (0x0001F000&((data)<<12))
#define  IEDGE_SMOOTH_dejagging_motion_support_i_dejag_delta_limit(data)         (0x000000FF&(data))
#define  IEDGE_SMOOTH_dejagging_motion_support_get_i_dejag_delta_motion_gain(data) ((0x0001F000&(data))>>12)
#define  IEDGE_SMOOTH_dejagging_motion_support_get_i_dejag_delta_limit(data)     (0x000000FF&(data))

#define  IEDGE_SMOOTH_prelpf_ctrl                                               0x18025128
#define  IEDGE_SMOOTH_prelpf_ctrl_reg_addr                                       "0xB8025128"
#define  IEDGE_SMOOTH_prelpf_ctrl_reg                                            0xB8025128
#define  IEDGE_SMOOTH_prelpf_ctrl_inst_addr                                      "0x0004"
#define  set_IEDGE_SMOOTH_prelpf_ctrl_reg(data)                                  (*((volatile unsigned int*)IEDGE_SMOOTH_prelpf_ctrl_reg)=data)
#define  get_IEDGE_SMOOTH_prelpf_ctrl_reg                                        (*((volatile unsigned int*)IEDGE_SMOOTH_prelpf_ctrl_reg))
#define  IEDGE_SMOOTH_prelpf_ctrl_prelpf_snr_sel_shift                           (0)
#define  IEDGE_SMOOTH_prelpf_ctrl_prelpf_snr_sel_mask                            (0x0000000F)
#define  IEDGE_SMOOTH_prelpf_ctrl_prelpf_snr_sel(data)                           (0x0000000F&(data))
#define  IEDGE_SMOOTH_prelpf_ctrl_get_prelpf_snr_sel(data)                       (0x0000000F&(data))

#define  IEDGE_SMOOTH_SPNR_PORCH_MEAS                                           0x18025144
#define  IEDGE_SMOOTH_SPNR_PORCH_MEAS_reg_addr                                   "0xB8025144"
#define  IEDGE_SMOOTH_SPNR_PORCH_MEAS_reg                                        0xB8025144
#define  IEDGE_SMOOTH_SPNR_PORCH_MEAS_inst_addr                                  "0x0005"
#define  set_IEDGE_SMOOTH_SPNR_PORCH_MEAS_reg(data)                              (*((volatile unsigned int*)IEDGE_SMOOTH_SPNR_PORCH_MEAS_reg)=data)
#define  get_IEDGE_SMOOTH_SPNR_PORCH_MEAS_reg                                    (*((volatile unsigned int*)IEDGE_SMOOTH_SPNR_PORCH_MEAS_reg))
#define  IEDGE_SMOOTH_SPNR_PORCH_MEAS_vsync_line_delay_shift                     (24)
#define  IEDGE_SMOOTH_SPNR_PORCH_MEAS_back_porch_meas_shift                      (8)
#define  IEDGE_SMOOTH_SPNR_PORCH_MEAS_front_porch_meas_shift                     (0)
#define  IEDGE_SMOOTH_SPNR_PORCH_MEAS_vsync_line_delay_mask                      (0x3F000000)
#define  IEDGE_SMOOTH_SPNR_PORCH_MEAS_back_porch_meas_mask                       (0x0000FF00)
#define  IEDGE_SMOOTH_SPNR_PORCH_MEAS_front_porch_meas_mask                      (0x000000FF)
#define  IEDGE_SMOOTH_SPNR_PORCH_MEAS_vsync_line_delay(data)                     (0x3F000000&((data)<<24))
#define  IEDGE_SMOOTH_SPNR_PORCH_MEAS_back_porch_meas(data)                      (0x0000FF00&((data)<<8))
#define  IEDGE_SMOOTH_SPNR_PORCH_MEAS_front_porch_meas(data)                     (0x000000FF&(data))
#define  IEDGE_SMOOTH_SPNR_PORCH_MEAS_get_vsync_line_delay(data)                 ((0x3F000000&(data))>>24)
#define  IEDGE_SMOOTH_SPNR_PORCH_MEAS_get_back_porch_meas(data)                  ((0x0000FF00&(data))>>8)
#define  IEDGE_SMOOTH_SPNR_PORCH_MEAS_get_front_porch_meas(data)                 (0x000000FF&(data))

#define  IEDGE_SMOOTH_SPNR_BISR_STATUS                                          0x18025148
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_reg_addr                                  "0xB8025148"
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_reg                                       0xB8025148
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_inst_addr                                 "0x0006"
#define  set_IEDGE_SMOOTH_SPNR_BISR_STATUS_reg(data)                             (*((volatile unsigned int*)IEDGE_SMOOTH_SPNR_BISR_STATUS_reg)=data)
#define  get_IEDGE_SMOOTH_SPNR_BISR_STATUS_reg                                   (*((volatile unsigned int*)IEDGE_SMOOTH_SPNR_BISR_STATUS_reg))
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_bisr_spnr_repaired_shift                  (31)
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_bisr_spnr_fail_3_shift                    (3)
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_bisr_spnr_fail_2_shift                    (2)
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_bisr_spnr_fail_1_shift                    (1)
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_bisr_spnr_fail_0_shift                    (0)
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_bisr_spnr_repaired_mask                   (0x80000000)
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_bisr_spnr_fail_3_mask                     (0x00000008)
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_bisr_spnr_fail_2_mask                     (0x00000004)
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_bisr_spnr_fail_1_mask                     (0x00000002)
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_bisr_spnr_fail_0_mask                     (0x00000001)
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_bisr_spnr_repaired(data)                  (0x80000000&((data)<<31))
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_bisr_spnr_fail_3(data)                    (0x00000008&((data)<<3))
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_bisr_spnr_fail_2(data)                    (0x00000004&((data)<<2))
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_bisr_spnr_fail_1(data)                    (0x00000002&((data)<<1))
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_bisr_spnr_fail_0(data)                    (0x00000001&(data))
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_get_bisr_spnr_repaired(data)              ((0x80000000&(data))>>31)
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_get_bisr_spnr_fail_3(data)                ((0x00000008&(data))>>3)
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_get_bisr_spnr_fail_2(data)                ((0x00000004&(data))>>2)
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_get_bisr_spnr_fail_1(data)                ((0x00000002&(data))>>1)
#define  IEDGE_SMOOTH_SPNR_BISR_STATUS_get_bisr_spnr_fail_0(data)                (0x00000001&(data))

#define  IEDGE_SMOOTH_SPNR_DRF_FAIL                                             0x1802514C
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_reg_addr                                     "0xB802514C"
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_reg                                          0xB802514C
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_inst_addr                                    "0x0007"
#define  set_IEDGE_SMOOTH_SPNR_DRF_FAIL_reg(data)                                (*((volatile unsigned int*)IEDGE_SMOOTH_SPNR_DRF_FAIL_reg)=data)
#define  get_IEDGE_SMOOTH_SPNR_DRF_FAIL_reg                                      (*((volatile unsigned int*)IEDGE_SMOOTH_SPNR_DRF_FAIL_reg))
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_spnr_drf_fail_3_shift                        (3)
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_spnr_drf_fail_2_shift                        (2)
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_spnr_drf_fail_1_shift                        (1)
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_spnr_drf_fail_0_shift                        (0)
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_spnr_drf_fail_3_mask                         (0x00000008)
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_spnr_drf_fail_2_mask                         (0x00000004)
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_spnr_drf_fail_1_mask                         (0x00000002)
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_spnr_drf_fail_0_mask                         (0x00000001)
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_spnr_drf_fail_3(data)                        (0x00000008&((data)<<3))
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_spnr_drf_fail_2(data)                        (0x00000004&((data)<<2))
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_spnr_drf_fail_1(data)                        (0x00000002&((data)<<1))
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_spnr_drf_fail_0(data)                        (0x00000001&(data))
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_get_spnr_drf_fail_3(data)                    ((0x00000008&(data))>>3)
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_get_spnr_drf_fail_2(data)                    ((0x00000004&(data))>>2)
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_get_spnr_drf_fail_1(data)                    ((0x00000002&(data))>>1)
#define  IEDGE_SMOOTH_SPNR_DRF_FAIL_get_spnr_drf_fail_0(data)                    (0x00000001&(data))

#define  IEDGE_SMOOTH_SPNR_DVS0                                                 0x18025150
#define  IEDGE_SMOOTH_SPNR_DVS0_reg_addr                                         "0xB8025150"
#define  IEDGE_SMOOTH_SPNR_DVS0_reg                                              0xB8025150
#define  IEDGE_SMOOTH_SPNR_DVS0_inst_addr                                        "0x0008"
#define  set_IEDGE_SMOOTH_SPNR_DVS0_reg(data)                                    (*((volatile unsigned int*)IEDGE_SMOOTH_SPNR_DVS0_reg)=data)
#define  get_IEDGE_SMOOTH_SPNR_DVS0_reg                                          (*((volatile unsigned int*)IEDGE_SMOOTH_SPNR_DVS0_reg))
#define  IEDGE_SMOOTH_SPNR_DVS0_spnr_ls_en_shift                                 (5)
#define  IEDGE_SMOOTH_SPNR_DVS0_spnr_dvse0_shift                                 (4)
#define  IEDGE_SMOOTH_SPNR_DVS0_spnr_dvs0_shift                                  (0)
#define  IEDGE_SMOOTH_SPNR_DVS0_spnr_ls_en_mask                                  (0x00000020)
#define  IEDGE_SMOOTH_SPNR_DVS0_spnr_dvse0_mask                                  (0x00000010)
#define  IEDGE_SMOOTH_SPNR_DVS0_spnr_dvs0_mask                                   (0x0000000F)
#define  IEDGE_SMOOTH_SPNR_DVS0_spnr_ls_en(data)                                 (0x00000020&((data)<<5))
#define  IEDGE_SMOOTH_SPNR_DVS0_spnr_dvse0(data)                                 (0x00000010&((data)<<4))
#define  IEDGE_SMOOTH_SPNR_DVS0_spnr_dvs0(data)                                  (0x0000000F&(data))
#define  IEDGE_SMOOTH_SPNR_DVS0_get_spnr_ls_en(data)                             ((0x00000020&(data))>>5)
#define  IEDGE_SMOOTH_SPNR_DVS0_get_spnr_dvse0(data)                             ((0x00000010&(data))>>4)
#define  IEDGE_SMOOTH_SPNR_DVS0_get_spnr_dvs0(data)                              (0x0000000F&(data))

#define  IEDGE_SMOOTH_VFILTER_0                                                 0x18025154
#define  IEDGE_SMOOTH_VFILTER_0_reg_addr                                         "0xB8025154"
#define  IEDGE_SMOOTH_VFILTER_0_reg                                              0xB8025154
#define  IEDGE_SMOOTH_VFILTER_0_inst_addr                                        "0x0009"
#define  set_IEDGE_SMOOTH_VFILTER_0_reg(data)                                    (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_0_reg)=data)
#define  get_IEDGE_SMOOTH_VFILTER_0_reg                                          (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_0_reg))
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_tap_sel_shift                              (30)
#define  IEDGE_SMOOTH_VFILTER_0_vfir_weight_shift                                (24)
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_mindiff_th_start_shift                     (20)
#define  IEDGE_SMOOTH_VFILTER_0_egsm_avlpf_ignorehlh_shift                       (19)
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_mindiff_curve_rate_start_shift             (16)
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_mindiff_th_finish_shift                    (8)
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_mindiff_curve_rate_finish_shift            (4)
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_en_shift                                   (2)
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_correct_en_shift                           (1)
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_bw_pattern_en_shift                        (0)
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_tap_sel_mask                               (0xC0000000)
#define  IEDGE_SMOOTH_VFILTER_0_vfir_weight_mask                                 (0x3F000000)
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_mindiff_th_start_mask                      (0x00F00000)
#define  IEDGE_SMOOTH_VFILTER_0_egsm_avlpf_ignorehlh_mask                        (0x00080000)
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_mindiff_curve_rate_start_mask              (0x00070000)
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_mindiff_th_finish_mask                     (0x0000FF00)
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_mindiff_curve_rate_finish_mask             (0x00000070)
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_en_mask                                    (0x00000004)
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_correct_en_mask                            (0x00000002)
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_bw_pattern_en_mask                         (0x00000001)
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_tap_sel(data)                              (0xC0000000&((data)<<30))
#define  IEDGE_SMOOTH_VFILTER_0_vfir_weight(data)                                (0x3F000000&((data)<<24))
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_mindiff_th_start(data)                     (0x00F00000&((data)<<20))
#define  IEDGE_SMOOTH_VFILTER_0_egsm_avlpf_ignorehlh(data)                       (0x00080000&((data)<<19))
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_mindiff_curve_rate_start(data)             (0x00070000&((data)<<16))
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_mindiff_th_finish(data)                    (0x0000FF00&((data)<<8))
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_mindiff_curve_rate_finish(data)            (0x00000070&((data)<<4))
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_en(data)                                   (0x00000004&((data)<<2))
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_correct_en(data)                           (0x00000002&((data)<<1))
#define  IEDGE_SMOOTH_VFILTER_0_avlpf_bw_pattern_en(data)                        (0x00000001&(data))
#define  IEDGE_SMOOTH_VFILTER_0_get_avlpf_tap_sel(data)                          ((0xC0000000&(data))>>30)
#define  IEDGE_SMOOTH_VFILTER_0_get_vfir_weight(data)                            ((0x3F000000&(data))>>24)
#define  IEDGE_SMOOTH_VFILTER_0_get_avlpf_mindiff_th_start(data)                 ((0x00F00000&(data))>>20)
#define  IEDGE_SMOOTH_VFILTER_0_get_egsm_avlpf_ignorehlh(data)                   ((0x00080000&(data))>>19)
#define  IEDGE_SMOOTH_VFILTER_0_get_avlpf_mindiff_curve_rate_start(data)         ((0x00070000&(data))>>16)
#define  IEDGE_SMOOTH_VFILTER_0_get_avlpf_mindiff_th_finish(data)                ((0x0000FF00&(data))>>8)
#define  IEDGE_SMOOTH_VFILTER_0_get_avlpf_mindiff_curve_rate_finish(data)        ((0x00000070&(data))>>4)
#define  IEDGE_SMOOTH_VFILTER_0_get_avlpf_en(data)                               ((0x00000004&(data))>>2)
#define  IEDGE_SMOOTH_VFILTER_0_get_avlpf_correct_en(data)                       ((0x00000002&(data))>>1)
#define  IEDGE_SMOOTH_VFILTER_0_get_avlpf_bw_pattern_en(data)                    (0x00000001&(data))

#define  IEDGE_SMOOTH_VFILTER_DI_INFO                                           0x18025140
#define  IEDGE_SMOOTH_VFILTER_DI_INFO_reg_addr                                   "0xB8025140"
#define  IEDGE_SMOOTH_VFILTER_DI_INFO_reg                                        0xB8025140
#define  IEDGE_SMOOTH_VFILTER_DI_INFO_inst_addr                                  "0x000A"
#define  set_IEDGE_SMOOTH_VFILTER_DI_INFO_reg(data)                              (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_DI_INFO_reg)=data)
#define  get_IEDGE_SMOOTH_VFILTER_DI_INFO_reg                                    (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_DI_INFO_reg))
#define  IEDGE_SMOOTH_VFILTER_DI_INFO_egsm_avlpf_clampth_tth_di_shift            (8)
#define  IEDGE_SMOOTH_VFILTER_DI_INFO_avlpf_weight_teeth_th_shift                (4)
#define  IEDGE_SMOOTH_VFILTER_DI_INFO_avlpf_di_teeth_vlpf_en_shift               (0)
#define  IEDGE_SMOOTH_VFILTER_DI_INFO_egsm_avlpf_clampth_tth_di_mask             (0x0000FF00)
#define  IEDGE_SMOOTH_VFILTER_DI_INFO_avlpf_weight_teeth_th_mask                 (0x000000F0)
#define  IEDGE_SMOOTH_VFILTER_DI_INFO_avlpf_di_teeth_vlpf_en_mask                (0x00000001)
#define  IEDGE_SMOOTH_VFILTER_DI_INFO_egsm_avlpf_clampth_tth_di(data)            (0x0000FF00&((data)<<8))
#define  IEDGE_SMOOTH_VFILTER_DI_INFO_avlpf_weight_teeth_th(data)                (0x000000F0&((data)<<4))
#define  IEDGE_SMOOTH_VFILTER_DI_INFO_avlpf_di_teeth_vlpf_en(data)               (0x00000001&(data))
#define  IEDGE_SMOOTH_VFILTER_DI_INFO_get_egsm_avlpf_clampth_tth_di(data)        ((0x0000FF00&(data))>>8)
#define  IEDGE_SMOOTH_VFILTER_DI_INFO_get_avlpf_weight_teeth_th(data)            ((0x000000F0&(data))>>4)
#define  IEDGE_SMOOTH_VFILTER_DI_INFO_get_avlpf_di_teeth_vlpf_en(data)           (0x00000001&(data))

#define  IEDGE_SMOOTH_VFILTER_1                                                 0x18025158
#define  IEDGE_SMOOTH_VFILTER_1_reg_addr                                         "0xB8025158"
#define  IEDGE_SMOOTH_VFILTER_1_reg                                              0xB8025158
#define  IEDGE_SMOOTH_VFILTER_1_inst_addr                                        "0x000B"
#define  set_IEDGE_SMOOTH_VFILTER_1_reg(data)                                    (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_1_reg)=data)
#define  get_IEDGE_SMOOTH_VFILTER_1_reg                                          (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_1_reg))
#define  IEDGE_SMOOTH_VFILTER_1_avlpf_maxmindiff_th_shift                        (24)
#define  IEDGE_SMOOTH_VFILTER_1_avlpf_maxmindiff_curve_rate_shift                (16)
#define  IEDGE_SMOOTH_VFILTER_1_avlpf_max_weight_shift                           (8)
#define  IEDGE_SMOOTH_VFILTER_1_avlpf_min_weight_shift                           (0)
#define  IEDGE_SMOOTH_VFILTER_1_avlpf_maxmindiff_th_mask                         (0xFF000000)
#define  IEDGE_SMOOTH_VFILTER_1_avlpf_maxmindiff_curve_rate_mask                 (0x00070000)
#define  IEDGE_SMOOTH_VFILTER_1_avlpf_max_weight_mask                            (0x00003F00)
#define  IEDGE_SMOOTH_VFILTER_1_avlpf_min_weight_mask                            (0x0000003F)
#define  IEDGE_SMOOTH_VFILTER_1_avlpf_maxmindiff_th(data)                        (0xFF000000&((data)<<24))
#define  IEDGE_SMOOTH_VFILTER_1_avlpf_maxmindiff_curve_rate(data)                (0x00070000&((data)<<16))
#define  IEDGE_SMOOTH_VFILTER_1_avlpf_max_weight(data)                           (0x00003F00&((data)<<8))
#define  IEDGE_SMOOTH_VFILTER_1_avlpf_min_weight(data)                           (0x0000003F&(data))
#define  IEDGE_SMOOTH_VFILTER_1_get_avlpf_maxmindiff_th(data)                    ((0xFF000000&(data))>>24)
#define  IEDGE_SMOOTH_VFILTER_1_get_avlpf_maxmindiff_curve_rate(data)            ((0x00070000&(data))>>16)
#define  IEDGE_SMOOTH_VFILTER_1_get_avlpf_max_weight(data)                       ((0x00003F00&(data))>>8)
#define  IEDGE_SMOOTH_VFILTER_1_get_avlpf_min_weight(data)                       (0x0000003F&(data))

#define  IEDGE_SMOOTH_VFILTER_2                                                 0x1802515C
#define  IEDGE_SMOOTH_VFILTER_2_reg_addr                                         "0xB802515C"
#define  IEDGE_SMOOTH_VFILTER_2_reg                                              0xB802515C
#define  IEDGE_SMOOTH_VFILTER_2_inst_addr                                        "0x000C"
#define  set_IEDGE_SMOOTH_VFILTER_2_reg(data)                                    (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_2_reg)=data)
#define  get_IEDGE_SMOOTH_VFILTER_2_reg                                          (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_2_reg))
#define  IEDGE_SMOOTH_VFILTER_2_avlpf_bw_th_shift                                (24)
#define  IEDGE_SMOOTH_VFILTER_2_avlpf_bw_margin_shift                            (16)
#define  IEDGE_SMOOTH_VFILTER_2_avlpf_bw_curve_rate_shift                        (12)
#define  IEDGE_SMOOTH_VFILTER_2_avlpf_c_en_shift                                 (8)
#define  IEDGE_SMOOTH_VFILTER_2_vfir_c_weight_shift                              (0)
#define  IEDGE_SMOOTH_VFILTER_2_avlpf_bw_th_mask                                 (0xFF000000)
#define  IEDGE_SMOOTH_VFILTER_2_avlpf_bw_margin_mask                             (0x007F0000)
#define  IEDGE_SMOOTH_VFILTER_2_avlpf_bw_curve_rate_mask                         (0x00007000)
#define  IEDGE_SMOOTH_VFILTER_2_avlpf_c_en_mask                                  (0x00000100)
#define  IEDGE_SMOOTH_VFILTER_2_vfir_c_weight_mask                               (0x0000003F)
#define  IEDGE_SMOOTH_VFILTER_2_avlpf_bw_th(data)                                (0xFF000000&((data)<<24))
#define  IEDGE_SMOOTH_VFILTER_2_avlpf_bw_margin(data)                            (0x007F0000&((data)<<16))
#define  IEDGE_SMOOTH_VFILTER_2_avlpf_bw_curve_rate(data)                        (0x00007000&((data)<<12))
#define  IEDGE_SMOOTH_VFILTER_2_avlpf_c_en(data)                                 (0x00000100&((data)<<8))
#define  IEDGE_SMOOTH_VFILTER_2_vfir_c_weight(data)                              (0x0000003F&(data))
#define  IEDGE_SMOOTH_VFILTER_2_get_avlpf_bw_th(data)                            ((0xFF000000&(data))>>24)
#define  IEDGE_SMOOTH_VFILTER_2_get_avlpf_bw_margin(data)                        ((0x007F0000&(data))>>16)
#define  IEDGE_SMOOTH_VFILTER_2_get_avlpf_bw_curve_rate(data)                    ((0x00007000&(data))>>12)
#define  IEDGE_SMOOTH_VFILTER_2_get_avlpf_c_en(data)                             ((0x00000100&(data))>>8)
#define  IEDGE_SMOOTH_VFILTER_2_get_vfir_c_weight(data)                          (0x0000003F&(data))

#define  IEDGE_SMOOTH_VFILTER_3                                                 0x18025160
#define  IEDGE_SMOOTH_VFILTER_3_reg_addr                                         "0xB8025160"
#define  IEDGE_SMOOTH_VFILTER_3_reg                                              0xB8025160
#define  IEDGE_SMOOTH_VFILTER_3_inst_addr                                        "0x000D"
#define  set_IEDGE_SMOOTH_VFILTER_3_reg(data)                                    (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_3_reg)=data)
#define  get_IEDGE_SMOOTH_VFILTER_3_reg                                          (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_3_reg))
#define  IEDGE_SMOOTH_VFILTER_3_egsm_avlpf_motionweight11_shift                  (25)
#define  IEDGE_SMOOTH_VFILTER_3_egsm_avlpf_motionweight10_shift                  (20)
#define  IEDGE_SMOOTH_VFILTER_3_egsm_avlpf_motionweight9_shift                   (15)
#define  IEDGE_SMOOTH_VFILTER_3_egsm_avlpf_motionweight8_shift                   (10)
#define  IEDGE_SMOOTH_VFILTER_3_egsm_avlpf_motionweight7_shift                   (4)
#define  IEDGE_SMOOTH_VFILTER_3_vfir_debug_shift                                 (0)
#define  IEDGE_SMOOTH_VFILTER_3_egsm_avlpf_motionweight11_mask                   (0x3E000000)
#define  IEDGE_SMOOTH_VFILTER_3_egsm_avlpf_motionweight10_mask                   (0x01F00000)
#define  IEDGE_SMOOTH_VFILTER_3_egsm_avlpf_motionweight9_mask                    (0x000F8000)
#define  IEDGE_SMOOTH_VFILTER_3_egsm_avlpf_motionweight8_mask                    (0x00007C00)
#define  IEDGE_SMOOTH_VFILTER_3_egsm_avlpf_motionweight7_mask                    (0x000001F0)
#define  IEDGE_SMOOTH_VFILTER_3_vfir_debug_mask                                  (0x0000000F)
#define  IEDGE_SMOOTH_VFILTER_3_egsm_avlpf_motionweight11(data)                  (0x3E000000&((data)<<25))
#define  IEDGE_SMOOTH_VFILTER_3_egsm_avlpf_motionweight10(data)                  (0x01F00000&((data)<<20))
#define  IEDGE_SMOOTH_VFILTER_3_egsm_avlpf_motionweight9(data)                   (0x000F8000&((data)<<15))
#define  IEDGE_SMOOTH_VFILTER_3_egsm_avlpf_motionweight8(data)                   (0x00007C00&((data)<<10))
#define  IEDGE_SMOOTH_VFILTER_3_egsm_avlpf_motionweight7(data)                   (0x000001F0&((data)<<4))
#define  IEDGE_SMOOTH_VFILTER_3_vfir_debug(data)                                 (0x0000000F&(data))
#define  IEDGE_SMOOTH_VFILTER_3_get_egsm_avlpf_motionweight11(data)              ((0x3E000000&(data))>>25)
#define  IEDGE_SMOOTH_VFILTER_3_get_egsm_avlpf_motionweight10(data)              ((0x01F00000&(data))>>20)
#define  IEDGE_SMOOTH_VFILTER_3_get_egsm_avlpf_motionweight9(data)               ((0x000F8000&(data))>>15)
#define  IEDGE_SMOOTH_VFILTER_3_get_egsm_avlpf_motionweight8(data)               ((0x00007C00&(data))>>10)
#define  IEDGE_SMOOTH_VFILTER_3_get_egsm_avlpf_motionweight7(data)               ((0x000001F0&(data))>>4)
#define  IEDGE_SMOOTH_VFILTER_3_get_vfir_debug(data)                             (0x0000000F&(data))

#define  IEDGE_SMOOTH_VFILTER_4                                                 0x18025164
#define  IEDGE_SMOOTH_VFILTER_4_reg_addr                                         "0xB8025164"
#define  IEDGE_SMOOTH_VFILTER_4_reg                                              0xB8025164
#define  IEDGE_SMOOTH_VFILTER_4_inst_addr                                        "0x000E"
#define  set_IEDGE_SMOOTH_VFILTER_4_reg(data)                                    (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_4_reg)=data)
#define  get_IEDGE_SMOOTH_VFILTER_4_reg                                          (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_4_reg))
#define  IEDGE_SMOOTH_VFILTER_4_esmex_iedge_vfir_enable_shift                    (30)
#define  IEDGE_SMOOTH_VFILTER_4_egsm_avlpf_clamp_en_shift                        (29)
#define  IEDGE_SMOOTH_VFILTER_4_egsm_avlpf_clampth_shift                         (4)
#define  IEDGE_SMOOTH_VFILTER_4_egsm_avlpf_mindiff_th2_start_shift               (0)
#define  IEDGE_SMOOTH_VFILTER_4_esmex_iedge_vfir_enable_mask                     (0x40000000)
#define  IEDGE_SMOOTH_VFILTER_4_egsm_avlpf_clamp_en_mask                         (0x20000000)
#define  IEDGE_SMOOTH_VFILTER_4_egsm_avlpf_clampth_mask                          (0x00000FF0)
#define  IEDGE_SMOOTH_VFILTER_4_egsm_avlpf_mindiff_th2_start_mask                (0x0000000F)
#define  IEDGE_SMOOTH_VFILTER_4_esmex_iedge_vfir_enable(data)                    (0x40000000&((data)<<30))
#define  IEDGE_SMOOTH_VFILTER_4_egsm_avlpf_clamp_en(data)                        (0x20000000&((data)<<29))
#define  IEDGE_SMOOTH_VFILTER_4_egsm_avlpf_clampth(data)                         (0x00000FF0&((data)<<4))
#define  IEDGE_SMOOTH_VFILTER_4_egsm_avlpf_mindiff_th2_start(data)               (0x0000000F&(data))
#define  IEDGE_SMOOTH_VFILTER_4_get_esmex_iedge_vfir_enable(data)                ((0x40000000&(data))>>30)
#define  IEDGE_SMOOTH_VFILTER_4_get_egsm_avlpf_clamp_en(data)                    ((0x20000000&(data))>>29)
#define  IEDGE_SMOOTH_VFILTER_4_get_egsm_avlpf_clampth(data)                     ((0x00000FF0&(data))>>4)
#define  IEDGE_SMOOTH_VFILTER_4_get_egsm_avlpf_mindiff_th2_start(data)           (0x0000000F&(data))

#define  IEDGE_SMOOTH_VFILTER_5                                                 0x18025168
#define  IEDGE_SMOOTH_VFILTER_5_reg_addr                                         "0xB8025168"
#define  IEDGE_SMOOTH_VFILTER_5_reg                                              0xB8025168
#define  IEDGE_SMOOTH_VFILTER_5_inst_addr                                        "0x000F"
#define  set_IEDGE_SMOOTH_VFILTER_5_reg(data)                                    (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_5_reg)=data)
#define  get_IEDGE_SMOOTH_VFILTER_5_reg                                          (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_5_reg))
#define  IEDGE_SMOOTH_VFILTER_5_egsm_avlpf_motionweight4_shift                   (20)
#define  IEDGE_SMOOTH_VFILTER_5_egsm_avlpf_motionweight3_shift                   (15)
#define  IEDGE_SMOOTH_VFILTER_5_egsm_avlpf_motionweight2_shift                   (10)
#define  IEDGE_SMOOTH_VFILTER_5_egsm_avlpf_motionweight1_shift                   (5)
#define  IEDGE_SMOOTH_VFILTER_5_egsm_avlpf_motionweight0_shift                   (0)
#define  IEDGE_SMOOTH_VFILTER_5_egsm_avlpf_motionweight4_mask                    (0x01F00000)
#define  IEDGE_SMOOTH_VFILTER_5_egsm_avlpf_motionweight3_mask                    (0x000F8000)
#define  IEDGE_SMOOTH_VFILTER_5_egsm_avlpf_motionweight2_mask                    (0x00007C00)
#define  IEDGE_SMOOTH_VFILTER_5_egsm_avlpf_motionweight1_mask                    (0x000003E0)
#define  IEDGE_SMOOTH_VFILTER_5_egsm_avlpf_motionweight0_mask                    (0x0000001F)
#define  IEDGE_SMOOTH_VFILTER_5_egsm_avlpf_motionweight4(data)                   (0x01F00000&((data)<<20))
#define  IEDGE_SMOOTH_VFILTER_5_egsm_avlpf_motionweight3(data)                   (0x000F8000&((data)<<15))
#define  IEDGE_SMOOTH_VFILTER_5_egsm_avlpf_motionweight2(data)                   (0x00007C00&((data)<<10))
#define  IEDGE_SMOOTH_VFILTER_5_egsm_avlpf_motionweight1(data)                   (0x000003E0&((data)<<5))
#define  IEDGE_SMOOTH_VFILTER_5_egsm_avlpf_motionweight0(data)                   (0x0000001F&(data))
#define  IEDGE_SMOOTH_VFILTER_5_get_egsm_avlpf_motionweight4(data)               ((0x01F00000&(data))>>20)
#define  IEDGE_SMOOTH_VFILTER_5_get_egsm_avlpf_motionweight3(data)               ((0x000F8000&(data))>>15)
#define  IEDGE_SMOOTH_VFILTER_5_get_egsm_avlpf_motionweight2(data)               ((0x00007C00&(data))>>10)
#define  IEDGE_SMOOTH_VFILTER_5_get_egsm_avlpf_motionweight1(data)               ((0x000003E0&(data))>>5)
#define  IEDGE_SMOOTH_VFILTER_5_get_egsm_avlpf_motionweight0(data)               (0x0000001F&(data))

#define  IEDGE_SMOOTH_VFILTER_6                                                 0x1802516C
#define  IEDGE_SMOOTH_VFILTER_6_reg_addr                                         "0xB802516C"
#define  IEDGE_SMOOTH_VFILTER_6_reg                                              0xB802516C
#define  IEDGE_SMOOTH_VFILTER_6_inst_addr                                        "0x0010"
#define  set_IEDGE_SMOOTH_VFILTER_6_reg(data)                                    (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_6_reg)=data)
#define  get_IEDGE_SMOOTH_VFILTER_6_reg                                          (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_6_reg))
#define  IEDGE_SMOOTH_VFILTER_6_egsm_avlpf_motion_en_shift                       (28)
#define  IEDGE_SMOOTH_VFILTER_6_egsm_avlpf_clampth_tth_shift                     (12)
#define  IEDGE_SMOOTH_VFILTER_6_egsm_motion_i2p_blendmode_shift                  (10)
#define  IEDGE_SMOOTH_VFILTER_6_egsm_avlpf_motion_en_mask                        (0x10000000)
#define  IEDGE_SMOOTH_VFILTER_6_egsm_avlpf_clampth_tth_mask                      (0x000FF000)
#define  IEDGE_SMOOTH_VFILTER_6_egsm_motion_i2p_blendmode_mask                   (0x00000C00)
#define  IEDGE_SMOOTH_VFILTER_6_egsm_avlpf_motion_en(data)                       (0x10000000&((data)<<28))
#define  IEDGE_SMOOTH_VFILTER_6_egsm_avlpf_clampth_tth(data)                     (0x000FF000&((data)<<12))
#define  IEDGE_SMOOTH_VFILTER_6_egsm_motion_i2p_blendmode(data)                  (0x00000C00&((data)<<10))
#define  IEDGE_SMOOTH_VFILTER_6_get_egsm_avlpf_motion_en(data)                   ((0x10000000&(data))>>28)
#define  IEDGE_SMOOTH_VFILTER_6_get_egsm_avlpf_clampth_tth(data)                 ((0x000FF000&(data))>>12)
#define  IEDGE_SMOOTH_VFILTER_6_get_egsm_motion_i2p_blendmode(data)              ((0x00000C00&(data))>>10)

#define  IEDGE_SMOOTH_EDSM_DB_CTRL                                              0x18025170
#define  IEDGE_SMOOTH_EDSM_DB_CTRL_reg_addr                                      "0xB8025170"
#define  IEDGE_SMOOTH_EDSM_DB_CTRL_reg                                           0xB8025170
#define  IEDGE_SMOOTH_EDSM_DB_CTRL_inst_addr                                     "0x0011"
#define  set_IEDGE_SMOOTH_EDSM_DB_CTRL_reg(data)                                 (*((volatile unsigned int*)IEDGE_SMOOTH_EDSM_DB_CTRL_reg)=data)
#define  get_IEDGE_SMOOTH_EDSM_DB_CTRL_reg                                       (*((volatile unsigned int*)IEDGE_SMOOTH_EDSM_DB_CTRL_reg))
#define  IEDGE_SMOOTH_EDSM_DB_CTRL_edsm_db_apply_shift                           (2)
#define  IEDGE_SMOOTH_EDSM_DB_CTRL_edsm_db_rd_sel_shift                          (1)
#define  IEDGE_SMOOTH_EDSM_DB_CTRL_edsm_db_en_shift                              (0)
#define  IEDGE_SMOOTH_EDSM_DB_CTRL_edsm_db_apply_mask                            (0x00000004)
#define  IEDGE_SMOOTH_EDSM_DB_CTRL_edsm_db_rd_sel_mask                           (0x00000002)
#define  IEDGE_SMOOTH_EDSM_DB_CTRL_edsm_db_en_mask                               (0x00000001)
#define  IEDGE_SMOOTH_EDSM_DB_CTRL_edsm_db_apply(data)                           (0x00000004&((data)<<2))
#define  IEDGE_SMOOTH_EDSM_DB_CTRL_edsm_db_rd_sel(data)                          (0x00000002&((data)<<1))
#define  IEDGE_SMOOTH_EDSM_DB_CTRL_edsm_db_en(data)                              (0x00000001&(data))
#define  IEDGE_SMOOTH_EDSM_DB_CTRL_get_edsm_db_apply(data)                       ((0x00000004&(data))>>2)
#define  IEDGE_SMOOTH_EDSM_DB_CTRL_get_edsm_db_rd_sel(data)                      ((0x00000002&(data))>>1)
#define  IEDGE_SMOOTH_EDSM_DB_CTRL_get_edsm_db_en(data)                          (0x00000001&(data))

#define  IEDGE_SMOOTH_VFILTER_7                                                 0x18025174
#define  IEDGE_SMOOTH_VFILTER_7_reg_addr                                         "0xB8025174"
#define  IEDGE_SMOOTH_VFILTER_7_reg                                              0xB8025174
#define  IEDGE_SMOOTH_VFILTER_7_inst_addr                                        "0x0012"
#define  set_IEDGE_SMOOTH_VFILTER_7_reg(data)                                    (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_7_reg)=data)
#define  get_IEDGE_SMOOTH_VFILTER_7_reg                                          (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_7_reg))
#define  IEDGE_SMOOTH_VFILTER_7_egsm_avlpf_motionweight13_shift                  (15)
#define  IEDGE_SMOOTH_VFILTER_7_egsm_avlpf_motionweight12_shift                  (10)
#define  IEDGE_SMOOTH_VFILTER_7_egsm_avlpf_motionweight31_shift                  (5)
#define  IEDGE_SMOOTH_VFILTER_7_egsm_avlpf_motionweight30_shift                  (0)
#define  IEDGE_SMOOTH_VFILTER_7_egsm_avlpf_motionweight13_mask                   (0x000F8000)
#define  IEDGE_SMOOTH_VFILTER_7_egsm_avlpf_motionweight12_mask                   (0x00007C00)
#define  IEDGE_SMOOTH_VFILTER_7_egsm_avlpf_motionweight31_mask                   (0x000003E0)
#define  IEDGE_SMOOTH_VFILTER_7_egsm_avlpf_motionweight30_mask                   (0x0000001F)
#define  IEDGE_SMOOTH_VFILTER_7_egsm_avlpf_motionweight13(data)                  (0x000F8000&((data)<<15))
#define  IEDGE_SMOOTH_VFILTER_7_egsm_avlpf_motionweight12(data)                  (0x00007C00&((data)<<10))
#define  IEDGE_SMOOTH_VFILTER_7_egsm_avlpf_motionweight31(data)                  (0x000003E0&((data)<<5))
#define  IEDGE_SMOOTH_VFILTER_7_egsm_avlpf_motionweight30(data)                  (0x0000001F&(data))
#define  IEDGE_SMOOTH_VFILTER_7_get_egsm_avlpf_motionweight13(data)              ((0x000F8000&(data))>>15)
#define  IEDGE_SMOOTH_VFILTER_7_get_egsm_avlpf_motionweight12(data)              ((0x00007C00&(data))>>10)
#define  IEDGE_SMOOTH_VFILTER_7_get_egsm_avlpf_motionweight31(data)              ((0x000003E0&(data))>>5)
#define  IEDGE_SMOOTH_VFILTER_7_get_egsm_avlpf_motionweight30(data)              (0x0000001F&(data))

#define  IEDGE_SMOOTH_VFILTER_8                                                 0x18025178
#define  IEDGE_SMOOTH_VFILTER_8_reg_addr                                         "0xB8025178"
#define  IEDGE_SMOOTH_VFILTER_8_reg                                              0xB8025178
#define  IEDGE_SMOOTH_VFILTER_8_inst_addr                                        "0x0013"
#define  set_IEDGE_SMOOTH_VFILTER_8_reg(data)                                    (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_8_reg)=data)
#define  get_IEDGE_SMOOTH_VFILTER_8_reg                                          (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_8_reg))
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight27_shift                  (25)
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight26_shift                  (20)
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight25_shift                  (15)
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight24_shift                  (10)
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight23_shift                  (5)
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight22_shift                  (0)
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight27_mask                   (0x3E000000)
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight26_mask                   (0x01F00000)
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight25_mask                   (0x000F8000)
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight24_mask                   (0x00007C00)
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight23_mask                   (0x000003E0)
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight22_mask                   (0x0000001F)
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight27(data)                  (0x3E000000&((data)<<25))
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight26(data)                  (0x01F00000&((data)<<20))
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight25(data)                  (0x000F8000&((data)<<15))
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight24(data)                  (0x00007C00&((data)<<10))
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight23(data)                  (0x000003E0&((data)<<5))
#define  IEDGE_SMOOTH_VFILTER_8_egsm_avlpf_motionweight22(data)                  (0x0000001F&(data))
#define  IEDGE_SMOOTH_VFILTER_8_get_egsm_avlpf_motionweight27(data)              ((0x3E000000&(data))>>25)
#define  IEDGE_SMOOTH_VFILTER_8_get_egsm_avlpf_motionweight26(data)              ((0x01F00000&(data))>>20)
#define  IEDGE_SMOOTH_VFILTER_8_get_egsm_avlpf_motionweight25(data)              ((0x000F8000&(data))>>15)
#define  IEDGE_SMOOTH_VFILTER_8_get_egsm_avlpf_motionweight24(data)              ((0x00007C00&(data))>>10)
#define  IEDGE_SMOOTH_VFILTER_8_get_egsm_avlpf_motionweight23(data)              ((0x000003E0&(data))>>5)
#define  IEDGE_SMOOTH_VFILTER_8_get_egsm_avlpf_motionweight22(data)              (0x0000001F&(data))

#define  IEDGE_SMOOTH_VFILTER_9                                                 0x1802517C
#define  IEDGE_SMOOTH_VFILTER_9_reg_addr                                         "0xB802517C"
#define  IEDGE_SMOOTH_VFILTER_9_reg                                              0xB802517C
#define  IEDGE_SMOOTH_VFILTER_9_inst_addr                                        "0x0014"
#define  set_IEDGE_SMOOTH_VFILTER_9_reg(data)                                    (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_9_reg)=data)
#define  get_IEDGE_SMOOTH_VFILTER_9_reg                                          (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_9_reg))
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight19_shift                  (25)
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight18_shift                  (20)
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight17_shift                  (15)
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight16_shift                  (10)
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight15_shift                  (5)
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight14_shift                  (0)
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight19_mask                   (0x3E000000)
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight18_mask                   (0x01F00000)
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight17_mask                   (0x000F8000)
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight16_mask                   (0x00007C00)
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight15_mask                   (0x000003E0)
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight14_mask                   (0x0000001F)
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight19(data)                  (0x3E000000&((data)<<25))
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight18(data)                  (0x01F00000&((data)<<20))
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight17(data)                  (0x000F8000&((data)<<15))
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight16(data)                  (0x00007C00&((data)<<10))
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight15(data)                  (0x000003E0&((data)<<5))
#define  IEDGE_SMOOTH_VFILTER_9_egsm_avlpf_motionweight14(data)                  (0x0000001F&(data))
#define  IEDGE_SMOOTH_VFILTER_9_get_egsm_avlpf_motionweight19(data)              ((0x3E000000&(data))>>25)
#define  IEDGE_SMOOTH_VFILTER_9_get_egsm_avlpf_motionweight18(data)              ((0x01F00000&(data))>>20)
#define  IEDGE_SMOOTH_VFILTER_9_get_egsm_avlpf_motionweight17(data)              ((0x000F8000&(data))>>15)
#define  IEDGE_SMOOTH_VFILTER_9_get_egsm_avlpf_motionweight16(data)              ((0x00007C00&(data))>>10)
#define  IEDGE_SMOOTH_VFILTER_9_get_egsm_avlpf_motionweight15(data)              ((0x000003E0&(data))>>5)
#define  IEDGE_SMOOTH_VFILTER_9_get_egsm_avlpf_motionweight14(data)              (0x0000001F&(data))

#define  IEDGE_SMOOTH_VFILTER_10                                                0x180251F4
#define  IEDGE_SMOOTH_VFILTER_10_reg_addr                                        "0xB80251F4"
#define  IEDGE_SMOOTH_VFILTER_10_reg                                             0xB80251F4
#define  IEDGE_SMOOTH_VFILTER_10_inst_addr                                       "0x0015"
#define  set_IEDGE_SMOOTH_VFILTER_10_reg(data)                                   (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_10_reg)=data)
#define  get_IEDGE_SMOOTH_VFILTER_10_reg                                         (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_10_reg))
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight21_shift                 (25)
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight20_shift                 (20)
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight29_shift                 (15)
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight28_shift                 (10)
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight6_shift                  (5)
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight5_shift                  (0)
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight21_mask                  (0x3E000000)
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight20_mask                  (0x01F00000)
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight29_mask                  (0x000F8000)
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight28_mask                  (0x00007C00)
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight6_mask                   (0x000003E0)
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight5_mask                   (0x0000001F)
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight21(data)                 (0x3E000000&((data)<<25))
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight20(data)                 (0x01F00000&((data)<<20))
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight29(data)                 (0x000F8000&((data)<<15))
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight28(data)                 (0x00007C00&((data)<<10))
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight6(data)                  (0x000003E0&((data)<<5))
#define  IEDGE_SMOOTH_VFILTER_10_egsm_avlpf_motionweight5(data)                  (0x0000001F&(data))
#define  IEDGE_SMOOTH_VFILTER_10_get_egsm_avlpf_motionweight21(data)             ((0x3E000000&(data))>>25)
#define  IEDGE_SMOOTH_VFILTER_10_get_egsm_avlpf_motionweight20(data)             ((0x01F00000&(data))>>20)
#define  IEDGE_SMOOTH_VFILTER_10_get_egsm_avlpf_motionweight29(data)             ((0x000F8000&(data))>>15)
#define  IEDGE_SMOOTH_VFILTER_10_get_egsm_avlpf_motionweight28(data)             ((0x00007C00&(data))>>10)
#define  IEDGE_SMOOTH_VFILTER_10_get_egsm_avlpf_motionweight6(data)              ((0x000003E0&(data))>>5)
#define  IEDGE_SMOOTH_VFILTER_10_get_egsm_avlpf_motionweight5(data)              (0x0000001F&(data))

#define  IEDGE_SMOOTH_VFILTER_MBIST                                             0x180251F8
#define  IEDGE_SMOOTH_VFILTER_MBIST_reg_addr                                     "0xB80251F8"
#define  IEDGE_SMOOTH_VFILTER_MBIST_reg                                          0xB80251F8
#define  IEDGE_SMOOTH_VFILTER_MBIST_inst_addr                                    "0x0016"
#define  set_IEDGE_SMOOTH_VFILTER_MBIST_reg(data)                                (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_MBIST_reg)=data)
#define  get_IEDGE_SMOOTH_VFILTER_MBIST_reg                                      (*((volatile unsigned int*)IEDGE_SMOOTH_VFILTER_MBIST_reg))
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_test0_shift                   (9)
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_testrwm_shift                 (8)
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_ls_shift                      (7)
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_rm_shift                      (3)
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_rme_shift                     (2)
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_drf_fail_shift                (1)
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_bist_fail_shift               (0)
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_test0_mask                    (0x00000200)
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_testrwm_mask                  (0x00000100)
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_ls_mask                       (0x00000080)
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_rm_mask                       (0x00000078)
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_rme_mask                      (0x00000004)
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_drf_fail_mask                 (0x00000002)
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_bist_fail_mask                (0x00000001)
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_test0(data)                   (0x00000200&((data)<<9))
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_testrwm(data)                 (0x00000100&((data)<<8))
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_ls(data)                      (0x00000080&((data)<<7))
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_rm(data)                      (0x00000078&((data)<<3))
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_rme(data)                     (0x00000004&((data)<<2))
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_drf_fail(data)                (0x00000002&((data)<<1))
#define  IEDGE_SMOOTH_VFILTER_MBIST_i_vlpf_di_info_bist_fail(data)               (0x00000001&(data))
#define  IEDGE_SMOOTH_VFILTER_MBIST_get_i_vlpf_di_info_test0(data)               ((0x00000200&(data))>>9)
#define  IEDGE_SMOOTH_VFILTER_MBIST_get_i_vlpf_di_info_testrwm(data)             ((0x00000100&(data))>>8)
#define  IEDGE_SMOOTH_VFILTER_MBIST_get_i_vlpf_di_info_ls(data)                  ((0x00000080&(data))>>7)
#define  IEDGE_SMOOTH_VFILTER_MBIST_get_i_vlpf_di_info_rm(data)                  ((0x00000078&(data))>>3)
#define  IEDGE_SMOOTH_VFILTER_MBIST_get_i_vlpf_di_info_rme(data)                 ((0x00000004&(data))>>2)
#define  IEDGE_SMOOTH_VFILTER_MBIST_get_i_vlpf_di_info_drf_fail(data)            ((0x00000002&(data))>>1)
#define  IEDGE_SMOOTH_VFILTER_MBIST_get_i_vlpf_di_info_bist_fail(data)           (0x00000001&(data))

#define  IEDGE_SMOOTH_FORMAT_CONVERT                                            0x18025180
#define  IEDGE_SMOOTH_FORMAT_CONVERT_reg_addr                                    "0xB8025180"
#define  IEDGE_SMOOTH_FORMAT_CONVERT_reg                                         0xB8025180
#define  IEDGE_SMOOTH_FORMAT_CONVERT_inst_addr                                   "0x0017"
#define  set_IEDGE_SMOOTH_FORMAT_CONVERT_reg(data)                               (*((volatile unsigned int*)IEDGE_SMOOTH_FORMAT_CONVERT_reg)=data)
#define  get_IEDGE_SMOOTH_FORMAT_CONVERT_reg                                     (*((volatile unsigned int*)IEDGE_SMOOTH_FORMAT_CONVERT_reg))
#define  IEDGE_SMOOTH_FORMAT_CONVERT_main_422_to_444_en_shift                    (31)
#define  IEDGE_SMOOTH_FORMAT_CONVERT_main_422_to_444_dup_shift                   (29)
#define  IEDGE_SMOOTH_FORMAT_CONVERT_sub_422_to_444_en_shift                     (15)
#define  IEDGE_SMOOTH_FORMAT_CONVERT_sub_422_to_444_dup_shift                    (13)
#define  IEDGE_SMOOTH_FORMAT_CONVERT_main_444_to_422_en_shift                    (0)
#define  IEDGE_SMOOTH_FORMAT_CONVERT_main_422_to_444_en_mask                     (0x80000000)
#define  IEDGE_SMOOTH_FORMAT_CONVERT_main_422_to_444_dup_mask                    (0x20000000)
#define  IEDGE_SMOOTH_FORMAT_CONVERT_sub_422_to_444_en_mask                      (0x00008000)
#define  IEDGE_SMOOTH_FORMAT_CONVERT_sub_422_to_444_dup_mask                     (0x00002000)
#define  IEDGE_SMOOTH_FORMAT_CONVERT_main_444_to_422_en_mask                     (0x00000001)
#define  IEDGE_SMOOTH_FORMAT_CONVERT_main_422_to_444_en(data)                    (0x80000000&((data)<<31))
#define  IEDGE_SMOOTH_FORMAT_CONVERT_main_422_to_444_dup(data)                   (0x20000000&((data)<<29))
#define  IEDGE_SMOOTH_FORMAT_CONVERT_sub_422_to_444_en(data)                     (0x00008000&((data)<<15))
#define  IEDGE_SMOOTH_FORMAT_CONVERT_sub_422_to_444_dup(data)                    (0x00002000&((data)<<13))
#define  IEDGE_SMOOTH_FORMAT_CONVERT_main_444_to_422_en(data)                    (0x00000001&(data))
#define  IEDGE_SMOOTH_FORMAT_CONVERT_get_main_422_to_444_en(data)                ((0x80000000&(data))>>31)
#define  IEDGE_SMOOTH_FORMAT_CONVERT_get_main_422_to_444_dup(data)               ((0x20000000&(data))>>29)
#define  IEDGE_SMOOTH_FORMAT_CONVERT_get_sub_422_to_444_en(data)                 ((0x00008000&(data))>>15)
#define  IEDGE_SMOOTH_FORMAT_CONVERT_get_sub_422_to_444_dup(data)                ((0x00002000&(data))>>13)
#define  IEDGE_SMOOTH_FORMAT_CONVERT_get_main_444_to_422_en(data)                (0x00000001&(data))

#define  IEDGE_SMOOTH_MOTION_WEIGHT_1                                           0x18025188
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_reg_addr                                   "0xB8025188"
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_reg                                        0xB8025188
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_inst_addr                                  "0x0018"
#define  set_IEDGE_SMOOTH_MOTION_WEIGHT_1_reg(data)                              (*((volatile unsigned int*)IEDGE_SMOOTH_MOTION_WEIGHT_1_reg)=data)
#define  get_IEDGE_SMOOTH_MOTION_WEIGHT_1_reg                                    (*((volatile unsigned int*)IEDGE_SMOOTH_MOTION_WEIGHT_1_reg))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_0_shift                 (28)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_1_shift                 (24)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_2_shift                 (20)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_3_shift                 (16)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_4_shift                 (12)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_5_shift                 (8)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_6_shift                 (4)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_7_shift                 (0)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_0_mask                  (0xF0000000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_1_mask                  (0x0F000000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_2_mask                  (0x00F00000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_3_mask                  (0x000F0000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_4_mask                  (0x0000F000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_5_mask                  (0x00000F00)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_6_mask                  (0x000000F0)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_7_mask                  (0x0000000F)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_0(data)                 (0xF0000000&((data)<<28))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_1(data)                 (0x0F000000&((data)<<24))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_2(data)                 (0x00F00000&((data)<<20))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_3(data)                 (0x000F0000&((data)<<16))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_4(data)                 (0x0000F000&((data)<<12))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_5(data)                 (0x00000F00&((data)<<8))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_6(data)                 (0x000000F0&((data)<<4))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_edsm_motion_weight_7(data)                 (0x0000000F&(data))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_get_edsm_motion_weight_0(data)             ((0xF0000000&(data))>>28)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_get_edsm_motion_weight_1(data)             ((0x0F000000&(data))>>24)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_get_edsm_motion_weight_2(data)             ((0x00F00000&(data))>>20)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_get_edsm_motion_weight_3(data)             ((0x000F0000&(data))>>16)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_get_edsm_motion_weight_4(data)             ((0x0000F000&(data))>>12)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_get_edsm_motion_weight_5(data)             ((0x00000F00&(data))>>8)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_get_edsm_motion_weight_6(data)             ((0x000000F0&(data))>>4)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_1_get_edsm_motion_weight_7(data)             (0x0000000F&(data))

#define  IEDGE_SMOOTH_MOTION_WEIGHT_2                                           0x1802518C
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_reg_addr                                   "0xB802518C"
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_reg                                        0xB802518C
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_inst_addr                                  "0x0019"
#define  set_IEDGE_SMOOTH_MOTION_WEIGHT_2_reg(data)                              (*((volatile unsigned int*)IEDGE_SMOOTH_MOTION_WEIGHT_2_reg)=data)
#define  get_IEDGE_SMOOTH_MOTION_WEIGHT_2_reg                                    (*((volatile unsigned int*)IEDGE_SMOOTH_MOTION_WEIGHT_2_reg))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_8_shift                 (28)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_9_shift                 (24)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_10_shift                (20)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_11_shift                (16)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_12_shift                (12)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_13_shift                (8)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_14_shift                (4)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_15_shift                (0)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_8_mask                  (0xF0000000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_9_mask                  (0x0F000000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_10_mask                 (0x00F00000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_11_mask                 (0x000F0000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_12_mask                 (0x0000F000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_13_mask                 (0x00000F00)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_14_mask                 (0x000000F0)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_15_mask                 (0x0000000F)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_8(data)                 (0xF0000000&((data)<<28))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_9(data)                 (0x0F000000&((data)<<24))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_10(data)                (0x00F00000&((data)<<20))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_11(data)                (0x000F0000&((data)<<16))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_12(data)                (0x0000F000&((data)<<12))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_13(data)                (0x00000F00&((data)<<8))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_14(data)                (0x000000F0&((data)<<4))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_edsm_motion_weight_15(data)                (0x0000000F&(data))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_get_edsm_motion_weight_8(data)             ((0xF0000000&(data))>>28)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_get_edsm_motion_weight_9(data)             ((0x0F000000&(data))>>24)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_get_edsm_motion_weight_10(data)            ((0x00F00000&(data))>>20)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_get_edsm_motion_weight_11(data)            ((0x000F0000&(data))>>16)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_get_edsm_motion_weight_12(data)            ((0x0000F000&(data))>>12)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_get_edsm_motion_weight_13(data)            ((0x00000F00&(data))>>8)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_get_edsm_motion_weight_14(data)            ((0x000000F0&(data))>>4)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_2_get_edsm_motion_weight_15(data)            (0x0000000F&(data))

#define  IEDGE_SMOOTH_MOTION_WEIGHT_3                                           0x18025190
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_reg_addr                                   "0xB8025190"
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_reg                                        0xB8025190
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_inst_addr                                  "0x001A"
#define  set_IEDGE_SMOOTH_MOTION_WEIGHT_3_reg(data)                              (*((volatile unsigned int*)IEDGE_SMOOTH_MOTION_WEIGHT_3_reg)=data)
#define  get_IEDGE_SMOOTH_MOTION_WEIGHT_3_reg                                    (*((volatile unsigned int*)IEDGE_SMOOTH_MOTION_WEIGHT_3_reg))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_16_shift                (28)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_17_shift                (24)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_18_shift                (20)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_19_shift                (16)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_20_shift                (12)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_21_shift                (8)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_22_shift                (4)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_23_shift                (0)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_16_mask                 (0xF0000000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_17_mask                 (0x0F000000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_18_mask                 (0x00F00000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_19_mask                 (0x000F0000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_20_mask                 (0x0000F000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_21_mask                 (0x00000F00)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_22_mask                 (0x000000F0)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_23_mask                 (0x0000000F)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_16(data)                (0xF0000000&((data)<<28))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_17(data)                (0x0F000000&((data)<<24))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_18(data)                (0x00F00000&((data)<<20))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_19(data)                (0x000F0000&((data)<<16))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_20(data)                (0x0000F000&((data)<<12))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_21(data)                (0x00000F00&((data)<<8))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_22(data)                (0x000000F0&((data)<<4))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_edsm_motion_weight_23(data)                (0x0000000F&(data))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_get_edsm_motion_weight_16(data)            ((0xF0000000&(data))>>28)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_get_edsm_motion_weight_17(data)            ((0x0F000000&(data))>>24)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_get_edsm_motion_weight_18(data)            ((0x00F00000&(data))>>20)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_get_edsm_motion_weight_19(data)            ((0x000F0000&(data))>>16)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_get_edsm_motion_weight_20(data)            ((0x0000F000&(data))>>12)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_get_edsm_motion_weight_21(data)            ((0x00000F00&(data))>>8)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_get_edsm_motion_weight_22(data)            ((0x000000F0&(data))>>4)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_3_get_edsm_motion_weight_23(data)            (0x0000000F&(data))

#define  IEDGE_SMOOTH_MOTION_WEIGHT_4                                           0x18025194
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_reg_addr                                   "0xB8025194"
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_reg                                        0xB8025194
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_inst_addr                                  "0x001B"
#define  set_IEDGE_SMOOTH_MOTION_WEIGHT_4_reg(data)                              (*((volatile unsigned int*)IEDGE_SMOOTH_MOTION_WEIGHT_4_reg)=data)
#define  get_IEDGE_SMOOTH_MOTION_WEIGHT_4_reg                                    (*((volatile unsigned int*)IEDGE_SMOOTH_MOTION_WEIGHT_4_reg))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_24_shift                (28)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_25_shift                (24)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_26_shift                (20)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_27_shift                (16)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_28_shift                (12)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_29_shift                (8)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_30_shift                (4)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_31_shift                (0)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_24_mask                 (0xF0000000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_25_mask                 (0x0F000000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_26_mask                 (0x00F00000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_27_mask                 (0x000F0000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_28_mask                 (0x0000F000)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_29_mask                 (0x00000F00)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_30_mask                 (0x000000F0)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_31_mask                 (0x0000000F)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_24(data)                (0xF0000000&((data)<<28))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_25(data)                (0x0F000000&((data)<<24))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_26(data)                (0x00F00000&((data)<<20))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_27(data)                (0x000F0000&((data)<<16))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_28(data)                (0x0000F000&((data)<<12))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_29(data)                (0x00000F00&((data)<<8))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_30(data)                (0x000000F0&((data)<<4))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_edsm_motion_weight_31(data)                (0x0000000F&(data))
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_get_edsm_motion_weight_24(data)            ((0xF0000000&(data))>>28)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_get_edsm_motion_weight_25(data)            ((0x0F000000&(data))>>24)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_get_edsm_motion_weight_26(data)            ((0x00F00000&(data))>>20)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_get_edsm_motion_weight_27(data)            ((0x000F0000&(data))>>16)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_get_edsm_motion_weight_28(data)            ((0x0000F000&(data))>>12)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_get_edsm_motion_weight_29(data)            ((0x00000F00&(data))>>8)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_get_edsm_motion_weight_30(data)            ((0x000000F0&(data))>>4)
#define  IEDGE_SMOOTH_MOTION_WEIGHT_4_get_edsm_motion_weight_31(data)            (0x0000000F&(data))

#define  IEDGE_SMOOTH_ENG_CLAMP                                                 0x1802519C
#define  IEDGE_SMOOTH_ENG_CLAMP_reg_addr                                         "0xB802519C"
#define  IEDGE_SMOOTH_ENG_CLAMP_reg                                              0xB802519C
#define  IEDGE_SMOOTH_ENG_CLAMP_inst_addr                                        "0x001C"
#define  set_IEDGE_SMOOTH_ENG_CLAMP_reg(data)                                    (*((volatile unsigned int*)IEDGE_SMOOTH_ENG_CLAMP_reg)=data)
#define  get_IEDGE_SMOOTH_ENG_CLAMP_reg                                          (*((volatile unsigned int*)IEDGE_SMOOTH_ENG_CLAMP_reg))
#define  IEDGE_SMOOTH_ENG_CLAMP_iedsm_motion_en_shift                            (31)
#define  IEDGE_SMOOTH_ENG_CLAMP_iedsm_motion_en_mask                             (0x80000000)
#define  IEDGE_SMOOTH_ENG_CLAMP_iedsm_motion_en(data)                            (0x80000000&((data)<<31))
#define  IEDGE_SMOOTH_ENG_CLAMP_get_iedsm_motion_en(data)                        ((0x80000000&(data))>>31)

#define  IEDGE_SMOOTH_MVF_DMA_Dat_format                                        0x180251A4
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_reg_addr                                "0xB80251A4"
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_reg                                     0xB80251A4
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_inst_addr                               "0x001D"
#define  set_IEDGE_SMOOTH_MVF_DMA_Dat_format_reg(data)                           (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DMA_Dat_format_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_DMA_Dat_format_reg                                 (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DMA_Dat_format_reg))
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_mvf_progressive_shift                   (31)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_delay_frame_num_shift                   (29)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_motion_invalidcnt_shift                 (26)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_store_mode_shift                        (25)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_mvf_height_shift                        (13)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_mvf_width_shift                         (0)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_mvf_progressive_mask                    (0x80000000)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_delay_frame_num_mask                    (0x60000000)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_motion_invalidcnt_mask                  (0x1C000000)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_store_mode_mask                         (0x02000000)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_mvf_height_mask                         (0x01FFE000)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_mvf_width_mask                          (0x00001FFF)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_mvf_progressive(data)                   (0x80000000&((data)<<31))
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_delay_frame_num(data)                   (0x60000000&((data)<<29))
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_motion_invalidcnt(data)                 (0x1C000000&((data)<<26))
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_store_mode(data)                        (0x02000000&((data)<<25))
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_mvf_height(data)                        (0x01FFE000&((data)<<13))
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_mvf_width(data)                         (0x00001FFF&(data))
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_get_mvf_progressive(data)               ((0x80000000&(data))>>31)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_get_delay_frame_num(data)               ((0x60000000&(data))>>29)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_get_motion_invalidcnt(data)             ((0x1C000000&(data))>>26)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_get_store_mode(data)                    ((0x02000000&(data))>>25)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_get_mvf_height(data)                    ((0x01FFE000&(data))>>13)
#define  IEDGE_SMOOTH_MVF_DMA_Dat_format_get_mvf_width(data)                     (0x00001FFF&(data))

#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add0                                0x180251A8
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add0_reg_addr                        "0xB80251A8"
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add0_reg                             0xB80251A8
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add0_inst_addr                       "0x001E"
#define  set_IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add0_reg(data)                   (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add0_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add0_reg                         (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add0_reg))
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add0_s0_mstart_115_87_shift          (3)
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add0_s0_mstart_115_87_mask           (0xFFFFFFF8)
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add0_s0_mstart_115_87(data)          (0xFFFFFFF8&((data)<<3))
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add0_get_s0_mstart_115_87(data)      ((0xFFFFFFF8&(data))>>3)

#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add1                                0x180251AC
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add1_reg_addr                        "0xB80251AC"
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add1_reg                             0xB80251AC
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add1_inst_addr                       "0x001F"
#define  set_IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add1_reg(data)                   (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add1_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add1_reg                         (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add1_reg))
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add1_s0_mstart_86_58_shift           (3)
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add1_s0_mstart_86_58_mask            (0xFFFFFFF8)
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add1_s0_mstart_86_58(data)           (0xFFFFFFF8&((data)<<3))
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add1_get_s0_mstart_86_58(data)       ((0xFFFFFFF8&(data))>>3)

#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add2                                0x180251B0
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add2_reg_addr                        "0xB80251B0"
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add2_reg                             0xB80251B0
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add2_inst_addr                       "0x0020"
#define  set_IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add2_reg(data)                   (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add2_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add2_reg                         (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add2_reg))
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add2_s0_mstart_57_29_shift           (3)
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add2_s0_mstart_57_29_mask            (0xFFFFFFF8)
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add2_s0_mstart_57_29(data)           (0xFFFFFFF8&((data)<<3))
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add2_get_s0_mstart_57_29(data)       ((0xFFFFFFF8&(data))>>3)

#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add3                                0x18025130
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add3_reg_addr                        "0xB8025130"
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add3_reg                             0xB8025130
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add3_inst_addr                       "0x0021"
#define  set_IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add3_reg(data)                   (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add3_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add3_reg                         (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add3_reg))
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add3_s0_mstart_28_0_shift            (3)
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add3_s0_mstart_28_0_mask             (0xFFFFFFF8)
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add3_s0_mstart_28_0(data)            (0xFFFFFFF8&((data)<<3))
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S0_Add3_get_s0_mstart_28_0(data)        ((0xFFFFFFF8&(data))>>3)

#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1Add0                                 0x180251B4
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1Add0_reg_addr                         "0xB80251B4"
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1Add0_reg                              0xB80251B4
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1Add0_inst_addr                        "0x0022"
#define  set_IEDGE_SMOOTH_MVF_DATMemoryStart_S1Add0_reg(data)                    (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DATMemoryStart_S1Add0_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_DATMemoryStart_S1Add0_reg                          (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DATMemoryStart_S1Add0_reg))
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1Add0_s1_mstart_115_87_shift           (3)
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1Add0_s1_mstart_115_87_mask            (0xFFFFFFF8)
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1Add0_s1_mstart_115_87(data)           (0xFFFFFFF8&((data)<<3))
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1Add0_get_s1_mstart_115_87(data)       ((0xFFFFFFF8&(data))>>3)

#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add1                                0x180251B8
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add1_reg_addr                        "0xB80251B8"
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add1_reg                             0xB80251B8
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add1_inst_addr                       "0x0023"
#define  set_IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add1_reg(data)                   (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add1_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add1_reg                         (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add1_reg))
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add1_s1_mstart_86_58_shift           (3)
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add1_s1_mstart_86_58_mask            (0xFFFFFFF8)
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add1_s1_mstart_86_58(data)           (0xFFFFFFF8&((data)<<3))
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add1_get_s1_mstart_86_58(data)       ((0xFFFFFFF8&(data))>>3)

#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add2                                0x180251BC
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add2_reg_addr                        "0xB80251BC"
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add2_reg                             0xB80251BC
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add2_inst_addr                       "0x0024"
#define  set_IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add2_reg(data)                   (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add2_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add2_reg                         (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add2_reg))
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add2_s1_mstart_57_29_shift           (3)
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add2_s1_mstart_57_29_mask            (0xFFFFFFF8)
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add2_s1_mstart_57_29(data)           (0xFFFFFFF8&((data)<<3))
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add2_get_s1_mstart_57_29(data)       ((0xFFFFFFF8&(data))>>3)

#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add3                                0x18025134
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add3_reg_addr                        "0xB8025134"
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add3_reg                             0xB8025134
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add3_inst_addr                       "0x0025"
#define  set_IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add3_reg(data)                   (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add3_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add3_reg                         (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add3_reg))
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add3_s1_mstart_28_0_shift            (3)
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add3_s1_mstart_28_0_mask             (0xFFFFFFF8)
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add3_s1_mstart_28_0(data)            (0xFFFFFFF8&((data)<<3))
#define  IEDGE_SMOOTH_MVF_DATMemoryStart_S1_Add3_get_s1_mstart_28_0(data)        ((0xFFFFFFF8&(data))>>3)

#define  IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM                                      0x180251C0
#define  IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_reg_addr                              "0xB80251C0"
#define  IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_reg                                   0xB80251C0
#define  IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_inst_addr                             "0x0026"
#define  set_IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_reg(data)                         (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_reg                               (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_reg))
#define  IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_dat_water_shift                       (24)
#define  IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_dat_len_shift                         (16)
#define  IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_dat_num_shift                         (0)
#define  IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_dat_water_mask                        (0xFF000000)
#define  IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_dat_len_mask                          (0x007F0000)
#define  IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_dat_num_mask                          (0x0000FFFF)
#define  IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_dat_water(data)                       (0xFF000000&((data)<<24))
#define  IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_dat_len(data)                         (0x007F0000&((data)<<16))
#define  IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_dat_num(data)                         (0x0000FFFF&(data))
#define  IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_get_dat_water(data)                   ((0xFF000000&(data))>>24)
#define  IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_get_dat_len(data)                     ((0x007F0000&(data))>>16)
#define  IEDGE_SMOOTH_MVF_DDR_DMA_WTLENNUM_get_dat_num(data)                     (0x0000FFFF&(data))

#define  IEDGE_SMOOTH_MVF_DDR_DATDMA_RM                                         0x180251C4
#define  IEDGE_SMOOTH_MVF_DDR_DATDMA_RM_reg_addr                                 "0xB80251C4"
#define  IEDGE_SMOOTH_MVF_DDR_DATDMA_RM_reg                                      0xB80251C4
#define  IEDGE_SMOOTH_MVF_DDR_DATDMA_RM_inst_addr                                "0x0027"
#define  set_IEDGE_SMOOTH_MVF_DDR_DATDMA_RM_reg(data)                            (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DDR_DATDMA_RM_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_DDR_DATDMA_RM_reg                                  (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DDR_DATDMA_RM_reg))
#define  IEDGE_SMOOTH_MVF_DDR_DATDMA_RM_dma_remain_en_shift                      (7)
#define  IEDGE_SMOOTH_MVF_DDR_DATDMA_RM_dat_remain_shift                         (0)
#define  IEDGE_SMOOTH_MVF_DDR_DATDMA_RM_dma_remain_en_mask                       (0x00000080)
#define  IEDGE_SMOOTH_MVF_DDR_DATDMA_RM_dat_remain_mask                          (0x0000007F)
#define  IEDGE_SMOOTH_MVF_DDR_DATDMA_RM_dma_remain_en(data)                      (0x00000080&((data)<<7))
#define  IEDGE_SMOOTH_MVF_DDR_DATDMA_RM_dat_remain(data)                         (0x0000007F&(data))
#define  IEDGE_SMOOTH_MVF_DDR_DATDMA_RM_get_dma_remain_en(data)                  ((0x00000080&(data))>>7)
#define  IEDGE_SMOOTH_MVF_DDR_DATDMA_RM_get_dat_remain(data)                     (0x0000007F&(data))

#define  IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr1                                    0x180251C8
#define  IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr1_reg_addr                            "0xB80251C8"
#define  IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr1_reg                                 0xB80251C8
#define  IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr1_inst_addr                           "0x0028"
#define  set_IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr1_reg(data)                       (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr1_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr1_reg                             (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr1_reg))
#define  IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr1_wrrd_downlimit_adr_shift            (3)
#define  IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr1_wrrd_downlimit_adr_mask             (0xFFFFFFF8)
#define  IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr1_wrrd_downlimit_adr(data)            (0xFFFFFFF8&((data)<<3))
#define  IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr1_get_wrrd_downlimit_adr(data)        ((0xFFFFFFF8&(data))>>3)

#define  IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr2                                    0x180251CC
#define  IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr2_reg_addr                            "0xB80251CC"
#define  IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr2_reg                                 0xB80251CC
#define  IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr2_inst_addr                           "0x0029"
#define  set_IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr2_reg(data)                       (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr2_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr2_reg                             (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr2_reg))
#define  IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr2_wrrd_uplimit_adr_shift              (3)
#define  IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr2_wrrd_uplimit_adr_mask               (0xFFFFFFF8)
#define  IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr2_wrrd_uplimit_adr(data)              (0xFFFFFFF8&((data)<<3))
#define  IEDGE_SMOOTH_MVF_WRRD_BoundaryAddr2_get_wrrd_uplimit_adr(data)          ((0xFFFFFFF8&(data))>>3)

#define  IEDGE_SMOOTH_MVF_DMA_Err_Status                                        0x180251D0
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_reg_addr                                "0xB80251D0"
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_reg                                     0xB80251D0
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_inst_addr                               "0x002A"
#define  set_IEDGE_SMOOTH_MVF_DMA_Err_Status_reg(data)                           (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DMA_Err_Status_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_DMA_Err_Status_reg                                 (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DMA_Err_Status_reg))
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_dma_fifo_err_ie_shift                   (14)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_dma_fifo_err_flag_clr_shift             (13)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_dma_fifo_unfl_shift                     (12)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_addr_downup_limit_ov_err_en_shift       (8)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_downup_limit_ov_err_clear_shift         (4)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_addr_downlimit_ov_shift                 (1)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_addr_uplimit_ov_shift                   (0)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_dma_fifo_err_ie_mask                    (0x00004000)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_dma_fifo_err_flag_clr_mask              (0x00002000)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_dma_fifo_unfl_mask                      (0x00001000)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_addr_downup_limit_ov_err_en_mask        (0x00000300)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_downup_limit_ov_err_clear_mask          (0x00000030)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_addr_downlimit_ov_mask                  (0x00000002)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_addr_uplimit_ov_mask                    (0x00000001)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_dma_fifo_err_ie(data)                   (0x00004000&((data)<<14))
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_dma_fifo_err_flag_clr(data)             (0x00002000&((data)<<13))
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_dma_fifo_unfl(data)                     (0x00001000&((data)<<12))
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_addr_downup_limit_ov_err_en(data)       (0x00000300&((data)<<8))
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_downup_limit_ov_err_clear(data)         (0x00000030&((data)<<4))
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_addr_downlimit_ov(data)                 (0x00000002&((data)<<1))
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_addr_uplimit_ov(data)                   (0x00000001&(data))
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_get_dma_fifo_err_ie(data)               ((0x00004000&(data))>>14)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_get_dma_fifo_err_flag_clr(data)         ((0x00002000&(data))>>13)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_get_dma_fifo_unfl(data)                 ((0x00001000&(data))>>12)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_get_addr_downup_limit_ov_err_en(data)   ((0x00000300&(data))>>8)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_get_downup_limit_ov_err_clear(data)     ((0x00000030&(data))>>4)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_get_addr_downlimit_ov(data)             ((0x00000002&(data))>>1)
#define  IEDGE_SMOOTH_MVF_DMA_Err_Status_get_addr_uplimit_ov(data)               (0x00000001&(data))

#define  IEDGE_SMOOTH_MVF_DMA_Work_Status                                       0x180251D4
#define  IEDGE_SMOOTH_MVF_DMA_Work_Status_reg_addr                               "0xB80251D4"
#define  IEDGE_SMOOTH_MVF_DMA_Work_Status_reg                                    0xB80251D4
#define  IEDGE_SMOOTH_MVF_DMA_Work_Status_inst_addr                              "0x002B"
#define  set_IEDGE_SMOOTH_MVF_DMA_Work_Status_reg(data)                          (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DMA_Work_Status_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_DMA_Work_Status_reg                                (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DMA_Work_Status_reg))
#define  IEDGE_SMOOTH_MVF_DMA_Work_Status_rdma_src_flag_shift                    (4)
#define  IEDGE_SMOOTH_MVF_DMA_Work_Status_rdma_s1_frame_cnt_shift                (2)
#define  IEDGE_SMOOTH_MVF_DMA_Work_Status_rdma_s0_frame_cnt_shift                (0)
#define  IEDGE_SMOOTH_MVF_DMA_Work_Status_rdma_src_flag_mask                     (0x00000010)
#define  IEDGE_SMOOTH_MVF_DMA_Work_Status_rdma_s1_frame_cnt_mask                 (0x0000000C)
#define  IEDGE_SMOOTH_MVF_DMA_Work_Status_rdma_s0_frame_cnt_mask                 (0x00000003)
#define  IEDGE_SMOOTH_MVF_DMA_Work_Status_rdma_src_flag(data)                    (0x00000010&((data)<<4))
#define  IEDGE_SMOOTH_MVF_DMA_Work_Status_rdma_s1_frame_cnt(data)                (0x0000000C&((data)<<2))
#define  IEDGE_SMOOTH_MVF_DMA_Work_Status_rdma_s0_frame_cnt(data)                (0x00000003&(data))
#define  IEDGE_SMOOTH_MVF_DMA_Work_Status_get_rdma_src_flag(data)                ((0x00000010&(data))>>4)
#define  IEDGE_SMOOTH_MVF_DMA_Work_Status_get_rdma_s1_frame_cnt(data)            ((0x0000000C&(data))>>2)
#define  IEDGE_SMOOTH_MVF_DMA_Work_Status_get_rdma_s0_frame_cnt(data)            (0x00000003&(data))

#define  IEDGE_SMOOTH_MVF_BIST_FAIL                                             0x180251D8
#define  IEDGE_SMOOTH_MVF_BIST_FAIL_reg_addr                                     "0xB80251D8"
#define  IEDGE_SMOOTH_MVF_BIST_FAIL_reg                                          0xB80251D8
#define  IEDGE_SMOOTH_MVF_BIST_FAIL_inst_addr                                    "0x002C"
#define  set_IEDGE_SMOOTH_MVF_BIST_FAIL_reg(data)                                (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_BIST_FAIL_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_BIST_FAIL_reg                                      (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_BIST_FAIL_reg))
#define  IEDGE_SMOOTH_MVF_BIST_FAIL_mvf_rinfo_bist_fail_shift                    (3)
#define  IEDGE_SMOOTH_MVF_BIST_FAIL_mvf_rdat_bist_fail_shift                     (0)
#define  IEDGE_SMOOTH_MVF_BIST_FAIL_mvf_rinfo_bist_fail_mask                     (0x00000008)
#define  IEDGE_SMOOTH_MVF_BIST_FAIL_mvf_rdat_bist_fail_mask                      (0x00000007)
#define  IEDGE_SMOOTH_MVF_BIST_FAIL_mvf_rinfo_bist_fail(data)                    (0x00000008&((data)<<3))
#define  IEDGE_SMOOTH_MVF_BIST_FAIL_mvf_rdat_bist_fail(data)                     (0x00000007&(data))
#define  IEDGE_SMOOTH_MVF_BIST_FAIL_get_mvf_rinfo_bist_fail(data)                ((0x00000008&(data))>>3)
#define  IEDGE_SMOOTH_MVF_BIST_FAIL_get_mvf_rdat_bist_fail(data)                 (0x00000007&(data))

#define  IEDGE_SMOOTH_MVF_DRF_FAIL                                              0x180251DC
#define  IEDGE_SMOOTH_MVF_DRF_FAIL_reg_addr                                      "0xB80251DC"
#define  IEDGE_SMOOTH_MVF_DRF_FAIL_reg                                           0xB80251DC
#define  IEDGE_SMOOTH_MVF_DRF_FAIL_inst_addr                                     "0x002D"
#define  set_IEDGE_SMOOTH_MVF_DRF_FAIL_reg(data)                                 (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DRF_FAIL_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_DRF_FAIL_reg                                       (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_DRF_FAIL_reg))
#define  IEDGE_SMOOTH_MVF_DRF_FAIL_mvf_rinfo_drf_fail_shift                      (3)
#define  IEDGE_SMOOTH_MVF_DRF_FAIL_mvf_rdat_drf_fail_shift                       (0)
#define  IEDGE_SMOOTH_MVF_DRF_FAIL_mvf_rinfo_drf_fail_mask                       (0x00000008)
#define  IEDGE_SMOOTH_MVF_DRF_FAIL_mvf_rdat_drf_fail_mask                        (0x00000007)
#define  IEDGE_SMOOTH_MVF_DRF_FAIL_mvf_rinfo_drf_fail(data)                      (0x00000008&((data)<<3))
#define  IEDGE_SMOOTH_MVF_DRF_FAIL_mvf_rdat_drf_fail(data)                       (0x00000007&(data))
#define  IEDGE_SMOOTH_MVF_DRF_FAIL_get_mvf_rinfo_drf_fail(data)                  ((0x00000008&(data))>>3)
#define  IEDGE_SMOOTH_MVF_DRF_FAIL_get_mvf_rdat_drf_fail(data)                   (0x00000007&(data))

#define  IEDGE_SMOOTH_MVF_BIST_RME                                              0x180251E0
#define  IEDGE_SMOOTH_MVF_BIST_RME_reg_addr                                      "0xB80251E0"
#define  IEDGE_SMOOTH_MVF_BIST_RME_reg                                           0xB80251E0
#define  IEDGE_SMOOTH_MVF_BIST_RME_inst_addr                                     "0x002E"
#define  set_IEDGE_SMOOTH_MVF_BIST_RME_reg(data)                                 (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_BIST_RME_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_BIST_RME_reg                                       (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_BIST_RME_reg))
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rinfo_testa_shift                     (18)
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rinfo_testb_shift                     (17)
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rdat_test_shift                       (16)
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rinfo_rmea_shift                      (4)
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rinfo_rmeb_shift                      (3)
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rdat_rme_shift                        (0)
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rinfo_testa_mask                      (0x00040000)
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rinfo_testb_mask                      (0x00020000)
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rdat_test_mask                        (0x00010000)
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rinfo_rmea_mask                       (0x00000010)
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rinfo_rmeb_mask                       (0x00000008)
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rdat_rme_mask                         (0x00000007)
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rinfo_testa(data)                     (0x00040000&((data)<<18))
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rinfo_testb(data)                     (0x00020000&((data)<<17))
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rdat_test(data)                       (0x00010000&((data)<<16))
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rinfo_rmea(data)                      (0x00000010&((data)<<4))
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rinfo_rmeb(data)                      (0x00000008&((data)<<3))
#define  IEDGE_SMOOTH_MVF_BIST_RME_mvf_dma_rdat_rme(data)                        (0x00000007&(data))
#define  IEDGE_SMOOTH_MVF_BIST_RME_get_mvf_dma_rinfo_testa(data)                 ((0x00040000&(data))>>18)
#define  IEDGE_SMOOTH_MVF_BIST_RME_get_mvf_dma_rinfo_testb(data)                 ((0x00020000&(data))>>17)
#define  IEDGE_SMOOTH_MVF_BIST_RME_get_mvf_dma_rdat_test(data)                   ((0x00010000&(data))>>16)
#define  IEDGE_SMOOTH_MVF_BIST_RME_get_mvf_dma_rinfo_rmea(data)                  ((0x00000010&(data))>>4)
#define  IEDGE_SMOOTH_MVF_BIST_RME_get_mvf_dma_rinfo_rmeb(data)                  ((0x00000008&(data))>>3)
#define  IEDGE_SMOOTH_MVF_BIST_RME_get_mvf_dma_rdat_rme(data)                    (0x00000007&(data))

#define  IEDGE_SMOOTH_MVF_BIST_RM                                               0x180251E4
#define  IEDGE_SMOOTH_MVF_BIST_RM_reg_addr                                       "0xB80251E4"
#define  IEDGE_SMOOTH_MVF_BIST_RM_reg                                            0xB80251E4
#define  IEDGE_SMOOTH_MVF_BIST_RM_inst_addr                                      "0x002F"
#define  set_IEDGE_SMOOTH_MVF_BIST_RM_reg(data)                                  (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_BIST_RM_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_BIST_RM_reg                                        (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_BIST_RM_reg))
#define  IEDGE_SMOOTH_MVF_BIST_RM_mvf_dma_rinfo_rma_shift                        (16)
#define  IEDGE_SMOOTH_MVF_BIST_RM_mvf_dma_rinfo_rmb_shift                        (12)
#define  IEDGE_SMOOTH_MVF_BIST_RM_mvf_dma_rdat_rm_shift                          (0)
#define  IEDGE_SMOOTH_MVF_BIST_RM_mvf_dma_rinfo_rma_mask                         (0x000F0000)
#define  IEDGE_SMOOTH_MVF_BIST_RM_mvf_dma_rinfo_rmb_mask                         (0x0000F000)
#define  IEDGE_SMOOTH_MVF_BIST_RM_mvf_dma_rdat_rm_mask                           (0x00000FFF)
#define  IEDGE_SMOOTH_MVF_BIST_RM_mvf_dma_rinfo_rma(data)                        (0x000F0000&((data)<<16))
#define  IEDGE_SMOOTH_MVF_BIST_RM_mvf_dma_rinfo_rmb(data)                        (0x0000F000&((data)<<12))
#define  IEDGE_SMOOTH_MVF_BIST_RM_mvf_dma_rdat_rm(data)                          (0x00000FFF&(data))
#define  IEDGE_SMOOTH_MVF_BIST_RM_get_mvf_dma_rinfo_rma(data)                    ((0x000F0000&(data))>>16)
#define  IEDGE_SMOOTH_MVF_BIST_RM_get_mvf_dma_rinfo_rmb(data)                    ((0x0000F000&(data))>>12)
#define  IEDGE_SMOOTH_MVF_BIST_RM_get_mvf_dma_rdat_rm(data)                      (0x00000FFF&(data))

#define  IEDGE_SMOOTH_MVF_RDMA_NUM                                              0x180251E8
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_reg_addr                                      "0xB80251E8"
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_reg                                           0xB80251E8
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_inst_addr                                     "0x0030"
#define  set_IEDGE_SMOOTH_MVF_RDMA_NUM_reg(data)                                 (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_RDMA_NUM_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_RDMA_NUM_reg                                       (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_RDMA_NUM_reg))
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_rdma_req_num_shift                            (16)
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_rdma_dat_num_shift                            (0)
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_rdma_req_num_mask                             (0xFFFF0000)
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_rdma_dat_num_mask                             (0x0000FFFF)
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_rdma_req_num(data)                            (0xFFFF0000&((data)<<16))
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_rdma_dat_num(data)                            (0x0000FFFF&(data))
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_get_rdma_req_num(data)                        ((0xFFFF0000&(data))>>16)
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_get_rdma_dat_num(data)                        (0x0000FFFF&(data))

#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR                                          0x180251EC
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_reg_addr                                  "0xB80251EC"
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_reg                                       0xB80251EC
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_inst_addr                                 "0x0031"
#define  set_IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_reg(data)                             (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_reg)=data)
#define  get_IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_reg                                   (*((volatile unsigned int*)IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_reg))
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_rdma_req_num_err_clr_shift                (3)
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_rdma_dat_num_err_clr_shift                (2)
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_rdma_req_num_err_en_shift                 (1)
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_rdma_dat_num_err_en_shift                 (0)
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_rdma_req_num_err_clr_mask                 (0x00000008)
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_rdma_dat_num_err_clr_mask                 (0x00000004)
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_rdma_req_num_err_en_mask                  (0x00000002)
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_rdma_dat_num_err_en_mask                  (0x00000001)
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_rdma_req_num_err_clr(data)                (0x00000008&((data)<<3))
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_rdma_dat_num_err_clr(data)                (0x00000004&((data)<<2))
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_rdma_req_num_err_en(data)                 (0x00000002&((data)<<1))
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_rdma_dat_num_err_en(data)                 (0x00000001&(data))
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_get_rdma_req_num_err_clr(data)            ((0x00000008&(data))>>3)
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_get_rdma_dat_num_err_clr(data)            ((0x00000004&(data))>>2)
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_get_rdma_req_num_err_en(data)             ((0x00000002&(data))>>1)
#define  IEDGE_SMOOTH_MVF_RDMA_NUM_ERR_get_rdma_dat_num_err_en(data)             (0x00000001&(data))

#define  IEDGE_SMOOTH_EdgeSmooth_DUMMY                                          0x180251F0
#define  IEDGE_SMOOTH_EdgeSmooth_DUMMY_reg_addr                                  "0xB80251F0"
#define  IEDGE_SMOOTH_EdgeSmooth_DUMMY_reg                                       0xB80251F0
#define  IEDGE_SMOOTH_EdgeSmooth_DUMMY_inst_addr                                 "0x0032"
#define  set_IEDGE_SMOOTH_EdgeSmooth_DUMMY_reg(data)                             (*((volatile unsigned int*)IEDGE_SMOOTH_EdgeSmooth_DUMMY_reg)=data)
#define  get_IEDGE_SMOOTH_EdgeSmooth_DUMMY_reg                                   (*((volatile unsigned int*)IEDGE_SMOOTH_EdgeSmooth_DUMMY_reg))
#define  IEDGE_SMOOTH_EdgeSmooth_DUMMY_dummy_31_16_shift                         (16)
#define  IEDGE_SMOOTH_EdgeSmooth_DUMMY_dummy_d0_shift                            (0)
#define  IEDGE_SMOOTH_EdgeSmooth_DUMMY_dummy_31_16_mask                          (0xFFFF0000)
#define  IEDGE_SMOOTH_EdgeSmooth_DUMMY_dummy_d0_mask                             (0x0000FFFF)
#define  IEDGE_SMOOTH_EdgeSmooth_DUMMY_dummy_31_16(data)                         (0xFFFF0000&((data)<<16))
#define  IEDGE_SMOOTH_EdgeSmooth_DUMMY_dummy_d0(data)                            (0x0000FFFF&(data))
#define  IEDGE_SMOOTH_EdgeSmooth_DUMMY_get_dummy_31_16(data)                     ((0xFFFF0000&(data))>>16)
#define  IEDGE_SMOOTH_EdgeSmooth_DUMMY_get_dummy_d0(data)                        (0x0000FFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======IEDGE_SMOOTH register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  tst_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  lbuf_c_bypass:1;
        RBus_UInt32  res3:6;
        RBus_UInt32  lbuf_linemode:2;
        RBus_UInt32  res4:9;
    };
}iedge_smooth_edgesmooth_ex_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  dummy1802510c_8:1;
        RBus_UInt32  iedge_mixer_weight:4;
        RBus_UInt32  res2:4;
    };
}iedge_smooth_mixer_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  i_dejag_delta_gain5:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  i_dejag_delta_gain3:7;
        RBus_UInt32  res3:3;
        RBus_UInt32  i_dejag_nondir_weight:1;
        RBus_UInt32  i_dejag_skip_hlh:1;
        RBus_UInt32  i_dejag_what_the_rock:1;
        RBus_UInt32  res4:7;
        RBus_UInt32  i_dejag_level:2;
        RBus_UInt32  i_dejag_en:1;
    };
}iedge_smooth_dejagging_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  i_dejag_delta_motion_gain:5;
        RBus_UInt32  res2:4;
        RBus_UInt32  i_dejag_delta_limit:8;
    };
}iedge_smooth_dejagging_motion_support_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  prelpf_snr_sel:4;
    };
}iedge_smooth_prelpf_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  vsync_line_delay:6;
        RBus_UInt32  res2:8;
        RBus_UInt32  back_porch_meas:8;
        RBus_UInt32  front_porch_meas:8;
    };
}iedge_smooth_spnr_porch_meas_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bisr_spnr_repaired:1;
        RBus_UInt32  res1:27;
        RBus_UInt32  bisr_spnr_fail_3:1;
        RBus_UInt32  bisr_spnr_fail_2:1;
        RBus_UInt32  bisr_spnr_fail_1:1;
        RBus_UInt32  bisr_spnr_fail_0:1;
    };
}iedge_smooth_spnr_bisr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  spnr_drf_fail_3:1;
        RBus_UInt32  spnr_drf_fail_2:1;
        RBus_UInt32  spnr_drf_fail_1:1;
        RBus_UInt32  spnr_drf_fail_0:1;
    };
}iedge_smooth_spnr_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  spnr_ls_en:1;
        RBus_UInt32  spnr_dvse0:1;
        RBus_UInt32  spnr_dvs0:4;
    };
}iedge_smooth_spnr_dvs0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  avlpf_tap_sel:2;
        RBus_UInt32  vfir_weight:6;
        RBus_UInt32  avlpf_mindiff_th_start:4;
        RBus_UInt32  egsm_avlpf_ignorehlh:1;
        RBus_UInt32  avlpf_mindiff_curve_rate_start:3;
        RBus_UInt32  avlpf_mindiff_th_finish:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  avlpf_mindiff_curve_rate_finish:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  avlpf_en:1;
        RBus_UInt32  avlpf_correct_en:1;
        RBus_UInt32  avlpf_bw_pattern_en:1;
    };
}iedge_smooth_vfilter_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  egsm_avlpf_clampth_tth_di:8;
        RBus_UInt32  avlpf_weight_teeth_th:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  avlpf_di_teeth_vlpf_en:1;
    };
}iedge_smooth_vfilter_di_info_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  avlpf_maxmindiff_th:8;
        RBus_UInt32  res1:5;
        RBus_UInt32  avlpf_maxmindiff_curve_rate:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  avlpf_max_weight:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  avlpf_min_weight:6;
    };
}iedge_smooth_vfilter_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  avlpf_bw_th:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  avlpf_bw_margin:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  avlpf_bw_curve_rate:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  avlpf_c_en:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  vfir_c_weight:6;
    };
}iedge_smooth_vfilter_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  egsm_avlpf_motionweight11:5;
        RBus_UInt32  egsm_avlpf_motionweight10:5;
        RBus_UInt32  egsm_avlpf_motionweight9:5;
        RBus_UInt32  egsm_avlpf_motionweight8:5;
        RBus_UInt32  res2:1;
        RBus_UInt32  egsm_avlpf_motionweight7:5;
        RBus_UInt32  vfir_debug:4;
    };
}iedge_smooth_vfilter_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  esmex_iedge_vfir_enable:1;
        RBus_UInt32  egsm_avlpf_clamp_en:1;
        RBus_UInt32  res2:17;
        RBus_UInt32  egsm_avlpf_clampth:8;
        RBus_UInt32  egsm_avlpf_mindiff_th2_start:4;
    };
}iedge_smooth_vfilter_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  egsm_avlpf_motionweight4:5;
        RBus_UInt32  egsm_avlpf_motionweight3:5;
        RBus_UInt32  egsm_avlpf_motionweight2:5;
        RBus_UInt32  egsm_avlpf_motionweight1:5;
        RBus_UInt32  egsm_avlpf_motionweight0:5;
    };
}iedge_smooth_vfilter_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  egsm_avlpf_motion_en:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  egsm_avlpf_clampth_tth:8;
        RBus_UInt32  egsm_motion_i2p_blendmode:2;
        RBus_UInt32  res3:10;
    };
}iedge_smooth_vfilter_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  edsm_db_apply:1;
        RBus_UInt32  edsm_db_rd_sel:1;
        RBus_UInt32  edsm_db_en:1;
    };
}iedge_smooth_edsm_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  egsm_avlpf_motionweight13:5;
        RBus_UInt32  egsm_avlpf_motionweight12:5;
        RBus_UInt32  egsm_avlpf_motionweight31:5;
        RBus_UInt32  egsm_avlpf_motionweight30:5;
    };
}iedge_smooth_vfilter_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  egsm_avlpf_motionweight27:5;
        RBus_UInt32  egsm_avlpf_motionweight26:5;
        RBus_UInt32  egsm_avlpf_motionweight25:5;
        RBus_UInt32  egsm_avlpf_motionweight24:5;
        RBus_UInt32  egsm_avlpf_motionweight23:5;
        RBus_UInt32  egsm_avlpf_motionweight22:5;
    };
}iedge_smooth_vfilter_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  egsm_avlpf_motionweight19:5;
        RBus_UInt32  egsm_avlpf_motionweight18:5;
        RBus_UInt32  egsm_avlpf_motionweight17:5;
        RBus_UInt32  egsm_avlpf_motionweight16:5;
        RBus_UInt32  egsm_avlpf_motionweight15:5;
        RBus_UInt32  egsm_avlpf_motionweight14:5;
    };
}iedge_smooth_vfilter_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  egsm_avlpf_motionweight21:5;
        RBus_UInt32  egsm_avlpf_motionweight20:5;
        RBus_UInt32  egsm_avlpf_motionweight29:5;
        RBus_UInt32  egsm_avlpf_motionweight28:5;
        RBus_UInt32  egsm_avlpf_motionweight6:5;
        RBus_UInt32  egsm_avlpf_motionweight5:5;
    };
}iedge_smooth_vfilter_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  i_vlpf_di_info_test0:1;
        RBus_UInt32  i_vlpf_di_info_testrwm:1;
        RBus_UInt32  i_vlpf_di_info_ls:1;
        RBus_UInt32  i_vlpf_di_info_rm:4;
        RBus_UInt32  i_vlpf_di_info_rme:1;
        RBus_UInt32  i_vlpf_di_info_drf_fail:1;
        RBus_UInt32  i_vlpf_di_info_bist_fail:1;
    };
}iedge_smooth_vfilter_mbist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_422_to_444_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  main_422_to_444_dup:1;
        RBus_UInt32  res2:13;
        RBus_UInt32  sub_422_to_444_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  sub_422_to_444_dup:1;
        RBus_UInt32  res4:12;
        RBus_UInt32  main_444_to_422_en:1;
    };
}iedge_smooth_format_convert_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edsm_motion_weight_0:4;
        RBus_UInt32  edsm_motion_weight_1:4;
        RBus_UInt32  edsm_motion_weight_2:4;
        RBus_UInt32  edsm_motion_weight_3:4;
        RBus_UInt32  edsm_motion_weight_4:4;
        RBus_UInt32  edsm_motion_weight_5:4;
        RBus_UInt32  edsm_motion_weight_6:4;
        RBus_UInt32  edsm_motion_weight_7:4;
    };
}iedge_smooth_motion_weight_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edsm_motion_weight_8:4;
        RBus_UInt32  edsm_motion_weight_9:4;
        RBus_UInt32  edsm_motion_weight_10:4;
        RBus_UInt32  edsm_motion_weight_11:4;
        RBus_UInt32  edsm_motion_weight_12:4;
        RBus_UInt32  edsm_motion_weight_13:4;
        RBus_UInt32  edsm_motion_weight_14:4;
        RBus_UInt32  edsm_motion_weight_15:4;
    };
}iedge_smooth_motion_weight_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edsm_motion_weight_16:4;
        RBus_UInt32  edsm_motion_weight_17:4;
        RBus_UInt32  edsm_motion_weight_18:4;
        RBus_UInt32  edsm_motion_weight_19:4;
        RBus_UInt32  edsm_motion_weight_20:4;
        RBus_UInt32  edsm_motion_weight_21:4;
        RBus_UInt32  edsm_motion_weight_22:4;
        RBus_UInt32  edsm_motion_weight_23:4;
    };
}iedge_smooth_motion_weight_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edsm_motion_weight_24:4;
        RBus_UInt32  edsm_motion_weight_25:4;
        RBus_UInt32  edsm_motion_weight_26:4;
        RBus_UInt32  edsm_motion_weight_27:4;
        RBus_UInt32  edsm_motion_weight_28:4;
        RBus_UInt32  edsm_motion_weight_29:4;
        RBus_UInt32  edsm_motion_weight_30:4;
        RBus_UInt32  edsm_motion_weight_31:4;
    };
}iedge_smooth_motion_weight_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}iedge_smooth_weight_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iedsm_motion_en:1;
        RBus_UInt32  res1:31;
    };
}iedge_smooth_eng_clamp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvf_progressive:1;
        RBus_UInt32  delay_frame_num:2;
        RBus_UInt32  motion_invalidcnt:3;
        RBus_UInt32  store_mode:1;
        RBus_UInt32  mvf_height:12;
        RBus_UInt32  mvf_width:13;
    };
}iedge_smooth_mvf_dma_dat_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s0_mstart_115_87:29;
        RBus_UInt32  res1:3;
    };
}iedge_smooth_mvf_datmemorystart_s0_add0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s0_mstart_86_58:29;
        RBus_UInt32  res1:3;
    };
}iedge_smooth_mvf_datmemorystart_s0_add1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s0_mstart_57_29:29;
        RBus_UInt32  res1:3;
    };
}iedge_smooth_mvf_datmemorystart_s0_add2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s0_mstart_28_0:29;
        RBus_UInt32  res1:3;
    };
}iedge_smooth_mvf_datmemorystart_s0_add3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_mstart_115_87:29;
        RBus_UInt32  res1:3;
    };
}iedge_smooth_mvf_datmemorystart_s1add0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_mstart_86_58:29;
        RBus_UInt32  res1:3;
    };
}iedge_smooth_mvf_datmemorystart_s1_add1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_mstart_57_29:29;
        RBus_UInt32  res1:3;
    };
}iedge_smooth_mvf_datmemorystart_s1_add2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_mstart_28_0:29;
        RBus_UInt32  res1:3;
    };
}iedge_smooth_mvf_datmemorystart_s1_add3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat_water:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  dat_len:7;
        RBus_UInt32  dat_num:16;
    };
}iedge_smooth_mvf_ddr_dma_wtlennum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dma_remain_en:1;
        RBus_UInt32  dat_remain:7;
    };
}iedge_smooth_mvf_ddr_datdma_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wrrd_downlimit_adr:29;
        RBus_UInt32  res1:3;
    };
}iedge_smooth_mvf_wrrd_boundaryaddr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wrrd_uplimit_adr:29;
        RBus_UInt32  res1:3;
    };
}iedge_smooth_mvf_wrrd_boundaryaddr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  dma_fifo_err_ie:1;
        RBus_UInt32  dma_fifo_err_flag_clr:1;
        RBus_UInt32  dma_fifo_unfl:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  addr_downup_limit_ov_err_en:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  downup_limit_ov_err_clear:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  addr_downlimit_ov:1;
        RBus_UInt32  addr_uplimit_ov:1;
    };
}iedge_smooth_mvf_dma_err_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  rdma_src_flag:1;
        RBus_UInt32  rdma_s1_frame_cnt:2;
        RBus_UInt32  rdma_s0_frame_cnt:2;
    };
}iedge_smooth_mvf_dma_work_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  mvf_rinfo_bist_fail:1;
        RBus_UInt32  mvf_rdat_bist_fail:3;
    };
}iedge_smooth_mvf_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  mvf_rinfo_drf_fail:1;
        RBus_UInt32  mvf_rdat_drf_fail:3;
    };
}iedge_smooth_mvf_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  mvf_dma_rinfo_testa:1;
        RBus_UInt32  mvf_dma_rinfo_testb:1;
        RBus_UInt32  mvf_dma_rdat_test:1;
        RBus_UInt32  res2:11;
        RBus_UInt32  mvf_dma_rinfo_rmea:1;
        RBus_UInt32  mvf_dma_rinfo_rmeb:1;
        RBus_UInt32  mvf_dma_rdat_rme:3;
    };
}iedge_smooth_mvf_bist_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  mvf_dma_rinfo_rma:4;
        RBus_UInt32  mvf_dma_rinfo_rmb:4;
        RBus_UInt32  mvf_dma_rdat_rm:12;
    };
}iedge_smooth_mvf_bist_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rdma_req_num:16;
        RBus_UInt32  rdma_dat_num:16;
    };
}iedge_smooth_mvf_rdma_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  rdma_req_num_err_clr:1;
        RBus_UInt32  rdma_dat_num_err_clr:1;
        RBus_UInt32  rdma_req_num_err_en:1;
        RBus_UInt32  rdma_dat_num_err_en:1;
    };
}iedge_smooth_mvf_rdma_num_err_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180251f0_31_16:16;
        RBus_UInt32  dummy_d0:16;
    };
}iedge_smooth_edgesmooth_dummy_RBUS;

#else //apply LITTLE_ENDIAN

//======IEDGE_SMOOTH register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  lbuf_linemode:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  lbuf_c_bypass:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  tst_en:1;
        RBus_UInt32  res4:12;
    };
}iedge_smooth_edgesmooth_ex_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  iedge_mixer_weight:4;
        RBus_UInt32  dummy1802510c_8:1;
        RBus_UInt32  res2:23;
    };
}iedge_smooth_mixer_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i_dejag_en:1;
        RBus_UInt32  i_dejag_level:2;
        RBus_UInt32  res1:7;
        RBus_UInt32  i_dejag_what_the_rock:1;
        RBus_UInt32  i_dejag_skip_hlh:1;
        RBus_UInt32  i_dejag_nondir_weight:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  i_dejag_delta_gain3:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  i_dejag_delta_gain5:7;
        RBus_UInt32  res4:1;
    };
}iedge_smooth_dejagging_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i_dejag_delta_limit:8;
        RBus_UInt32  res1:4;
        RBus_UInt32  i_dejag_delta_motion_gain:5;
        RBus_UInt32  res2:15;
    };
}iedge_smooth_dejagging_motion_support_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prelpf_snr_sel:4;
        RBus_UInt32  res1:28;
    };
}iedge_smooth_prelpf_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  front_porch_meas:8;
        RBus_UInt32  back_porch_meas:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  vsync_line_delay:6;
        RBus_UInt32  res2:2;
    };
}iedge_smooth_spnr_porch_meas_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bisr_spnr_fail_0:1;
        RBus_UInt32  bisr_spnr_fail_1:1;
        RBus_UInt32  bisr_spnr_fail_2:1;
        RBus_UInt32  bisr_spnr_fail_3:1;
        RBus_UInt32  res1:27;
        RBus_UInt32  bisr_spnr_repaired:1;
    };
}iedge_smooth_spnr_bisr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  spnr_drf_fail_0:1;
        RBus_UInt32  spnr_drf_fail_1:1;
        RBus_UInt32  spnr_drf_fail_2:1;
        RBus_UInt32  spnr_drf_fail_3:1;
        RBus_UInt32  res1:28;
    };
}iedge_smooth_spnr_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  spnr_dvs0:4;
        RBus_UInt32  spnr_dvse0:1;
        RBus_UInt32  spnr_ls_en:1;
        RBus_UInt32  res1:26;
    };
}iedge_smooth_spnr_dvs0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  avlpf_bw_pattern_en:1;
        RBus_UInt32  avlpf_correct_en:1;
        RBus_UInt32  avlpf_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  avlpf_mindiff_curve_rate_finish:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  avlpf_mindiff_th_finish:8;
        RBus_UInt32  avlpf_mindiff_curve_rate_start:3;
        RBus_UInt32  egsm_avlpf_ignorehlh:1;
        RBus_UInt32  avlpf_mindiff_th_start:4;
        RBus_UInt32  vfir_weight:6;
        RBus_UInt32  avlpf_tap_sel:2;
    };
}iedge_smooth_vfilter_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  avlpf_di_teeth_vlpf_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  avlpf_weight_teeth_th:4;
        RBus_UInt32  egsm_avlpf_clampth_tth_di:8;
        RBus_UInt32  res2:16;
    };
}iedge_smooth_vfilter_di_info_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  avlpf_min_weight:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  avlpf_max_weight:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  avlpf_maxmindiff_curve_rate:3;
        RBus_UInt32  res3:5;
        RBus_UInt32  avlpf_maxmindiff_th:8;
    };
}iedge_smooth_vfilter_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vfir_c_weight:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  avlpf_c_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  avlpf_bw_curve_rate:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  avlpf_bw_margin:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  avlpf_bw_th:8;
    };
}iedge_smooth_vfilter_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vfir_debug:4;
        RBus_UInt32  egsm_avlpf_motionweight7:5;
        RBus_UInt32  res1:1;
        RBus_UInt32  egsm_avlpf_motionweight8:5;
        RBus_UInt32  egsm_avlpf_motionweight9:5;
        RBus_UInt32  egsm_avlpf_motionweight10:5;
        RBus_UInt32  egsm_avlpf_motionweight11:5;
        RBus_UInt32  res2:2;
    };
}iedge_smooth_vfilter_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  egsm_avlpf_mindiff_th2_start:4;
        RBus_UInt32  egsm_avlpf_clampth:8;
        RBus_UInt32  res1:17;
        RBus_UInt32  egsm_avlpf_clamp_en:1;
        RBus_UInt32  esmex_iedge_vfir_enable:1;
        RBus_UInt32  res2:1;
    };
}iedge_smooth_vfilter_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  egsm_avlpf_motionweight0:5;
        RBus_UInt32  egsm_avlpf_motionweight1:5;
        RBus_UInt32  egsm_avlpf_motionweight2:5;
        RBus_UInt32  egsm_avlpf_motionweight3:5;
        RBus_UInt32  egsm_avlpf_motionweight4:5;
        RBus_UInt32  res1:7;
    };
}iedge_smooth_vfilter_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  egsm_motion_i2p_blendmode:2;
        RBus_UInt32  egsm_avlpf_clampth_tth:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  egsm_avlpf_motion_en:1;
        RBus_UInt32  res3:3;
    };
}iedge_smooth_vfilter_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edsm_db_en:1;
        RBus_UInt32  edsm_db_rd_sel:1;
        RBus_UInt32  edsm_db_apply:1;
        RBus_UInt32  res1:29;
    };
}iedge_smooth_edsm_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  egsm_avlpf_motionweight30:5;
        RBus_UInt32  egsm_avlpf_motionweight31:5;
        RBus_UInt32  egsm_avlpf_motionweight12:5;
        RBus_UInt32  egsm_avlpf_motionweight13:5;
        RBus_UInt32  res1:12;
    };
}iedge_smooth_vfilter_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  egsm_avlpf_motionweight22:5;
        RBus_UInt32  egsm_avlpf_motionweight23:5;
        RBus_UInt32  egsm_avlpf_motionweight24:5;
        RBus_UInt32  egsm_avlpf_motionweight25:5;
        RBus_UInt32  egsm_avlpf_motionweight26:5;
        RBus_UInt32  egsm_avlpf_motionweight27:5;
        RBus_UInt32  res1:2;
    };
}iedge_smooth_vfilter_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  egsm_avlpf_motionweight14:5;
        RBus_UInt32  egsm_avlpf_motionweight15:5;
        RBus_UInt32  egsm_avlpf_motionweight16:5;
        RBus_UInt32  egsm_avlpf_motionweight17:5;
        RBus_UInt32  egsm_avlpf_motionweight18:5;
        RBus_UInt32  egsm_avlpf_motionweight19:5;
        RBus_UInt32  res1:2;
    };
}iedge_smooth_vfilter_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  egsm_avlpf_motionweight5:5;
        RBus_UInt32  egsm_avlpf_motionweight6:5;
        RBus_UInt32  egsm_avlpf_motionweight28:5;
        RBus_UInt32  egsm_avlpf_motionweight29:5;
        RBus_UInt32  egsm_avlpf_motionweight20:5;
        RBus_UInt32  egsm_avlpf_motionweight21:5;
        RBus_UInt32  res1:2;
    };
}iedge_smooth_vfilter_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i_vlpf_di_info_bist_fail:1;
        RBus_UInt32  i_vlpf_di_info_drf_fail:1;
        RBus_UInt32  i_vlpf_di_info_rme:1;
        RBus_UInt32  i_vlpf_di_info_rm:4;
        RBus_UInt32  i_vlpf_di_info_ls:1;
        RBus_UInt32  i_vlpf_di_info_testrwm:1;
        RBus_UInt32  i_vlpf_di_info_test0:1;
        RBus_UInt32  res1:22;
    };
}iedge_smooth_vfilter_mbist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_444_to_422_en:1;
        RBus_UInt32  res1:12;
        RBus_UInt32  sub_422_to_444_dup:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  sub_422_to_444_en:1;
        RBus_UInt32  res3:13;
        RBus_UInt32  main_422_to_444_dup:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  main_422_to_444_en:1;
    };
}iedge_smooth_format_convert_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edsm_motion_weight_7:4;
        RBus_UInt32  edsm_motion_weight_6:4;
        RBus_UInt32  edsm_motion_weight_5:4;
        RBus_UInt32  edsm_motion_weight_4:4;
        RBus_UInt32  edsm_motion_weight_3:4;
        RBus_UInt32  edsm_motion_weight_2:4;
        RBus_UInt32  edsm_motion_weight_1:4;
        RBus_UInt32  edsm_motion_weight_0:4;
    };
}iedge_smooth_motion_weight_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edsm_motion_weight_15:4;
        RBus_UInt32  edsm_motion_weight_14:4;
        RBus_UInt32  edsm_motion_weight_13:4;
        RBus_UInt32  edsm_motion_weight_12:4;
        RBus_UInt32  edsm_motion_weight_11:4;
        RBus_UInt32  edsm_motion_weight_10:4;
        RBus_UInt32  edsm_motion_weight_9:4;
        RBus_UInt32  edsm_motion_weight_8:4;
    };
}iedge_smooth_motion_weight_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edsm_motion_weight_23:4;
        RBus_UInt32  edsm_motion_weight_22:4;
        RBus_UInt32  edsm_motion_weight_21:4;
        RBus_UInt32  edsm_motion_weight_20:4;
        RBus_UInt32  edsm_motion_weight_19:4;
        RBus_UInt32  edsm_motion_weight_18:4;
        RBus_UInt32  edsm_motion_weight_17:4;
        RBus_UInt32  edsm_motion_weight_16:4;
    };
}iedge_smooth_motion_weight_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  edsm_motion_weight_31:4;
        RBus_UInt32  edsm_motion_weight_30:4;
        RBus_UInt32  edsm_motion_weight_29:4;
        RBus_UInt32  edsm_motion_weight_28:4;
        RBus_UInt32  edsm_motion_weight_27:4;
        RBus_UInt32  edsm_motion_weight_26:4;
        RBus_UInt32  edsm_motion_weight_25:4;
        RBus_UInt32  edsm_motion_weight_24:4;
    };
}iedge_smooth_motion_weight_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}iedge_smooth_weight_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  iedsm_motion_en:1;
    };
}iedge_smooth_eng_clamp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvf_width:13;
        RBus_UInt32  mvf_height:12;
        RBus_UInt32  store_mode:1;
        RBus_UInt32  motion_invalidcnt:3;
        RBus_UInt32  delay_frame_num:2;
        RBus_UInt32  mvf_progressive:1;
    };
}iedge_smooth_mvf_dma_dat_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s0_mstart_115_87:29;
    };
}iedge_smooth_mvf_datmemorystart_s0_add0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s0_mstart_86_58:29;
    };
}iedge_smooth_mvf_datmemorystart_s0_add1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s0_mstart_57_29:29;
    };
}iedge_smooth_mvf_datmemorystart_s0_add2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s0_mstart_28_0:29;
    };
}iedge_smooth_mvf_datmemorystart_s0_add3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s1_mstart_115_87:29;
    };
}iedge_smooth_mvf_datmemorystart_s1add0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s1_mstart_86_58:29;
    };
}iedge_smooth_mvf_datmemorystart_s1_add1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s1_mstart_57_29:29;
    };
}iedge_smooth_mvf_datmemorystart_s1_add2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s1_mstart_28_0:29;
    };
}iedge_smooth_mvf_datmemorystart_s1_add3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat_num:16;
        RBus_UInt32  dat_len:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  dat_water:8;
    };
}iedge_smooth_mvf_ddr_dma_wtlennum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat_remain:7;
        RBus_UInt32  dma_remain_en:1;
        RBus_UInt32  res1:24;
    };
}iedge_smooth_mvf_ddr_datdma_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  wrrd_downlimit_adr:29;
    };
}iedge_smooth_mvf_wrrd_boundaryaddr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  wrrd_uplimit_adr:29;
    };
}iedge_smooth_mvf_wrrd_boundaryaddr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_uplimit_ov:1;
        RBus_UInt32  addr_downlimit_ov:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  downup_limit_ov_err_clear:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  addr_downup_limit_ov_err_en:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  dma_fifo_unfl:1;
        RBus_UInt32  dma_fifo_err_flag_clr:1;
        RBus_UInt32  dma_fifo_err_ie:1;
        RBus_UInt32  res4:17;
    };
}iedge_smooth_mvf_dma_err_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rdma_s0_frame_cnt:2;
        RBus_UInt32  rdma_s1_frame_cnt:2;
        RBus_UInt32  rdma_src_flag:1;
        RBus_UInt32  res1:27;
    };
}iedge_smooth_mvf_dma_work_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvf_rdat_bist_fail:3;
        RBus_UInt32  mvf_rinfo_bist_fail:1;
        RBus_UInt32  res1:28;
    };
}iedge_smooth_mvf_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvf_rdat_drf_fail:3;
        RBus_UInt32  mvf_rinfo_drf_fail:1;
        RBus_UInt32  res1:28;
    };
}iedge_smooth_mvf_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvf_dma_rdat_rme:3;
        RBus_UInt32  mvf_dma_rinfo_rmeb:1;
        RBus_UInt32  mvf_dma_rinfo_rmea:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  mvf_dma_rdat_test:1;
        RBus_UInt32  mvf_dma_rinfo_testb:1;
        RBus_UInt32  mvf_dma_rinfo_testa:1;
        RBus_UInt32  res2:13;
    };
}iedge_smooth_mvf_bist_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvf_dma_rdat_rm:12;
        RBus_UInt32  mvf_dma_rinfo_rmb:4;
        RBus_UInt32  mvf_dma_rinfo_rma:4;
        RBus_UInt32  res1:12;
    };
}iedge_smooth_mvf_bist_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rdma_dat_num:16;
        RBus_UInt32  rdma_req_num:16;
    };
}iedge_smooth_mvf_rdma_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rdma_dat_num_err_en:1;
        RBus_UInt32  rdma_req_num_err_en:1;
        RBus_UInt32  rdma_dat_num_err_clr:1;
        RBus_UInt32  rdma_req_num_err_clr:1;
        RBus_UInt32  res1:28;
    };
}iedge_smooth_mvf_rdma_num_err_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_d0:16;
        RBus_UInt32  dummy180251f0_31_16:16;
    };
}iedge_smooth_edgesmooth_dummy_RBUS;




#endif 


#endif 
