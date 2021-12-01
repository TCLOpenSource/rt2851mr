/**
* @file Merlin5-DesignSpec-OFFMS
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_OFFMS_REG_H_
#define _RBUS_OFFMS_REG_H_

#include "rbus_types.h"



//  OFFMS Register Address
#define  OFFMS_SP_MS3Ctrl                                                       0x18021100
#define  OFFMS_SP_MS3Ctrl_reg_addr                                               "0xB8021100"
#define  OFFMS_SP_MS3Ctrl_reg                                                    0xB8021100
#define  OFFMS_SP_MS3Ctrl_inst_addr                                              "0x0000"
#define  set_OFFMS_SP_MS3Ctrl_reg(data)                                          (*((volatile unsigned int*)OFFMS_SP_MS3Ctrl_reg)=data)
#define  get_OFFMS_SP_MS3Ctrl_reg                                                (*((volatile unsigned int*)OFFMS_SP_MS3Ctrl_reg))
#define  OFFMS_SP_MS3Ctrl_dummy_31_shift                                         (31)
#define  OFFMS_SP_MS3Ctrl_xtal_sel_shift                                         (29)
#define  OFFMS_SP_MS3Ctrl_off_continuous_popup_shift                             (28)
#define  OFFMS_SP_MS3Ctrl_off_denms_inv_shift                                    (27)
#define  OFFMS_SP_MS3Ctrl_off_blk_2frame_en_shift                                (26)
#define  OFFMS_SP_MS3Ctrl_off_meas_vs_of_sel_shift                               (24)
#define  OFFMS_SP_MS3Ctrl_dummy_23_shift                                         (23)
#define  OFFMS_SP_MS3Ctrl_off_meas_to_sel_shift                                  (22)
#define  OFFMS_SP_MS3Ctrl_off_clk_sel_shift                                      (21)
#define  OFFMS_SP_MS3Ctrl_off_timeclk_test_mode_shift                            (20)
#define  OFFMS_SP_MS3Ctrl_off_meas_source_shift                                  (16)
#define  OFFMS_SP_MS3Ctrl_off_vs_meas_inv_shift                                  (15)
#define  OFFMS_SP_MS3Ctrl_off_vsms_inv_shift                                     (14)
#define  OFFMS_SP_MS3Ctrl_off_sycms_mode_shift                                   (13)
#define  OFFMS_SP_MS3Ctrl_off_popup_meas_shift                                   (12)
#define  OFFMS_SP_MS3Ctrl_off_hsms_inv_shift                                     (11)
#define  OFFMS_SP_MS3Ctrl_off_online_en_shift                                    (10)
#define  OFFMS_SP_MS3Ctrl_off_start_ms_shift                                     (9)
#define  OFFMS_SP_MS3Ctrl_off_hs_max_delta_shift                                 (4)
#define  OFFMS_SP_MS3Ctrl_off_vs_max_delta_shift                                 (0)
#define  OFFMS_SP_MS3Ctrl_dummy_31_mask                                          (0x80000000)
#define  OFFMS_SP_MS3Ctrl_xtal_sel_mask                                          (0x20000000)
#define  OFFMS_SP_MS3Ctrl_off_continuous_popup_mask                              (0x10000000)
#define  OFFMS_SP_MS3Ctrl_off_denms_inv_mask                                     (0x08000000)
#define  OFFMS_SP_MS3Ctrl_off_blk_2frame_en_mask                                 (0x04000000)
#define  OFFMS_SP_MS3Ctrl_off_meas_vs_of_sel_mask                                (0x03000000)
#define  OFFMS_SP_MS3Ctrl_dummy_23_mask                                          (0x00800000)
#define  OFFMS_SP_MS3Ctrl_off_meas_to_sel_mask                                   (0x00400000)
#define  OFFMS_SP_MS3Ctrl_off_clk_sel_mask                                       (0x00200000)
#define  OFFMS_SP_MS3Ctrl_off_timeclk_test_mode_mask                             (0x00100000)
#define  OFFMS_SP_MS3Ctrl_off_meas_source_mask                                   (0x000F0000)
#define  OFFMS_SP_MS3Ctrl_off_vs_meas_inv_mask                                   (0x00008000)
#define  OFFMS_SP_MS3Ctrl_off_vsms_inv_mask                                      (0x00004000)
#define  OFFMS_SP_MS3Ctrl_off_sycms_mode_mask                                    (0x00002000)
#define  OFFMS_SP_MS3Ctrl_off_popup_meas_mask                                    (0x00001000)
#define  OFFMS_SP_MS3Ctrl_off_hsms_inv_mask                                      (0x00000800)
#define  OFFMS_SP_MS3Ctrl_off_online_en_mask                                     (0x00000400)
#define  OFFMS_SP_MS3Ctrl_off_start_ms_mask                                      (0x00000200)
#define  OFFMS_SP_MS3Ctrl_off_hs_max_delta_mask                                  (0x000001F0)
#define  OFFMS_SP_MS3Ctrl_off_vs_max_delta_mask                                  (0x0000000F)
#define  OFFMS_SP_MS3Ctrl_dummy_31(data)                                         (0x80000000&((data)<<31))
#define  OFFMS_SP_MS3Ctrl_xtal_sel(data)                                         (0x20000000&((data)<<29))
#define  OFFMS_SP_MS3Ctrl_off_continuous_popup(data)                             (0x10000000&((data)<<28))
#define  OFFMS_SP_MS3Ctrl_off_denms_inv(data)                                    (0x08000000&((data)<<27))
#define  OFFMS_SP_MS3Ctrl_off_blk_2frame_en(data)                                (0x04000000&((data)<<26))
#define  OFFMS_SP_MS3Ctrl_off_meas_vs_of_sel(data)                               (0x03000000&((data)<<24))
#define  OFFMS_SP_MS3Ctrl_dummy_23(data)                                         (0x00800000&((data)<<23))
#define  OFFMS_SP_MS3Ctrl_off_meas_to_sel(data)                                  (0x00400000&((data)<<22))
#define  OFFMS_SP_MS3Ctrl_off_clk_sel(data)                                      (0x00200000&((data)<<21))
#define  OFFMS_SP_MS3Ctrl_off_timeclk_test_mode(data)                            (0x00100000&((data)<<20))
#define  OFFMS_SP_MS3Ctrl_off_meas_source(data)                                  (0x000F0000&((data)<<16))
#define  OFFMS_SP_MS3Ctrl_off_vs_meas_inv(data)                                  (0x00008000&((data)<<15))
#define  OFFMS_SP_MS3Ctrl_off_vsms_inv(data)                                     (0x00004000&((data)<<14))
#define  OFFMS_SP_MS3Ctrl_off_sycms_mode(data)                                   (0x00002000&((data)<<13))
#define  OFFMS_SP_MS3Ctrl_off_popup_meas(data)                                   (0x00001000&((data)<<12))
#define  OFFMS_SP_MS3Ctrl_off_hsms_inv(data)                                     (0x00000800&((data)<<11))
#define  OFFMS_SP_MS3Ctrl_off_online_en(data)                                    (0x00000400&((data)<<10))
#define  OFFMS_SP_MS3Ctrl_off_start_ms(data)                                     (0x00000200&((data)<<9))
#define  OFFMS_SP_MS3Ctrl_off_hs_max_delta(data)                                 (0x000001F0&((data)<<4))
#define  OFFMS_SP_MS3Ctrl_off_vs_max_delta(data)                                 (0x0000000F&(data))
#define  OFFMS_SP_MS3Ctrl_get_dummy_31(data)                                     ((0x80000000&(data))>>31)
#define  OFFMS_SP_MS3Ctrl_get_xtal_sel(data)                                     ((0x20000000&(data))>>29)
#define  OFFMS_SP_MS3Ctrl_get_off_continuous_popup(data)                         ((0x10000000&(data))>>28)
#define  OFFMS_SP_MS3Ctrl_get_off_denms_inv(data)                                ((0x08000000&(data))>>27)
#define  OFFMS_SP_MS3Ctrl_get_off_blk_2frame_en(data)                            ((0x04000000&(data))>>26)
#define  OFFMS_SP_MS3Ctrl_get_off_meas_vs_of_sel(data)                           ((0x03000000&(data))>>24)
#define  OFFMS_SP_MS3Ctrl_get_dummy_23(data)                                     ((0x00800000&(data))>>23)
#define  OFFMS_SP_MS3Ctrl_get_off_meas_to_sel(data)                              ((0x00400000&(data))>>22)
#define  OFFMS_SP_MS3Ctrl_get_off_clk_sel(data)                                  ((0x00200000&(data))>>21)
#define  OFFMS_SP_MS3Ctrl_get_off_timeclk_test_mode(data)                        ((0x00100000&(data))>>20)
#define  OFFMS_SP_MS3Ctrl_get_off_meas_source(data)                              ((0x000F0000&(data))>>16)
#define  OFFMS_SP_MS3Ctrl_get_off_vs_meas_inv(data)                              ((0x00008000&(data))>>15)
#define  OFFMS_SP_MS3Ctrl_get_off_vsms_inv(data)                                 ((0x00004000&(data))>>14)
#define  OFFMS_SP_MS3Ctrl_get_off_sycms_mode(data)                               ((0x00002000&(data))>>13)
#define  OFFMS_SP_MS3Ctrl_get_off_popup_meas(data)                               ((0x00001000&(data))>>12)
#define  OFFMS_SP_MS3Ctrl_get_off_hsms_inv(data)                                 ((0x00000800&(data))>>11)
#define  OFFMS_SP_MS3Ctrl_get_off_online_en(data)                                ((0x00000400&(data))>>10)
#define  OFFMS_SP_MS3Ctrl_get_off_start_ms(data)                                 ((0x00000200&(data))>>9)
#define  OFFMS_SP_MS3Ctrl_get_off_hs_max_delta(data)                             ((0x000001F0&(data))>>4)
#define  OFFMS_SP_MS3Ctrl_get_off_vs_max_delta(data)                             (0x0000000F&(data))

#define  OFFMS_SP_MS3Rst0                                                       0x18021104
#define  OFFMS_SP_MS3Rst0_reg_addr                                               "0xB8021104"
#define  OFFMS_SP_MS3Rst0_reg                                                    0xB8021104
#define  OFFMS_SP_MS3Rst0_inst_addr                                              "0x0001"
#define  set_OFFMS_SP_MS3Rst0_reg(data)                                          (*((volatile unsigned int*)OFFMS_SP_MS3Rst0_reg)=data)
#define  get_OFFMS_SP_MS3Rst0_reg                                                (*((volatile unsigned int*)OFFMS_SP_MS3Rst0_reg))
#define  OFFMS_SP_MS3Rst0_off_vs_period_out_shift                                (0)
#define  OFFMS_SP_MS3Rst0_off_vs_period_out_mask                                 (0x00007FFF)
#define  OFFMS_SP_MS3Rst0_off_vs_period_out(data)                                (0x00007FFF&(data))
#define  OFFMS_SP_MS3Rst0_get_off_vs_period_out(data)                            (0x00007FFF&(data))

#define  OFFMS_SP_MS3Rst1                                                       0x18021108
#define  OFFMS_SP_MS3Rst1_reg_addr                                               "0xB8021108"
#define  OFFMS_SP_MS3Rst1_reg                                                    0xB8021108
#define  OFFMS_SP_MS3Rst1_inst_addr                                              "0x0002"
#define  set_OFFMS_SP_MS3Rst1_reg(data)                                          (*((volatile unsigned int*)OFFMS_SP_MS3Rst1_reg)=data)
#define  get_OFFMS_SP_MS3Rst1_reg                                                (*((volatile unsigned int*)OFFMS_SP_MS3Rst1_reg))
#define  OFFMS_SP_MS3Rst1_off_hs_period_out_h12b_shift                           (4)
#define  OFFMS_SP_MS3Rst1_off_hs_period_out_f4b_shift                            (0)
#define  OFFMS_SP_MS3Rst1_off_hs_period_out_h12b_mask                            (0x0003FFF0)
#define  OFFMS_SP_MS3Rst1_off_hs_period_out_f4b_mask                             (0x0000000F)
#define  OFFMS_SP_MS3Rst1_off_hs_period_out_h12b(data)                           (0x0003FFF0&((data)<<4))
#define  OFFMS_SP_MS3Rst1_off_hs_period_out_f4b(data)                            (0x0000000F&(data))
#define  OFFMS_SP_MS3Rst1_get_off_hs_period_out_h12b(data)                       ((0x0003FFF0&(data))>>4)
#define  OFFMS_SP_MS3Rst1_get_off_hs_period_out_f4b(data)                        (0x0000000F&(data))

#define  OFFMS_SP_MS3Rst2                                                       0x1802110C
#define  OFFMS_SP_MS3Rst2_reg_addr                                               "0xB802110C"
#define  OFFMS_SP_MS3Rst2_reg                                                    0xB802110C
#define  OFFMS_SP_MS3Rst2_inst_addr                                              "0x0003"
#define  set_OFFMS_SP_MS3Rst2_reg(data)                                          (*((volatile unsigned int*)OFFMS_SP_MS3Rst2_reg)=data)
#define  get_OFFMS_SP_MS3Rst2_reg                                                (*((volatile unsigned int*)OFFMS_SP_MS3Rst2_reg))
#define  OFFMS_SP_MS3Rst2_dummy_31_shift                                         (31)
#define  OFFMS_SP_MS3Rst2_off_vs_high_out_shift                                  (16)
#define  OFFMS_SP_MS3Rst2_dummy_15_14_shift                                      (14)
#define  OFFMS_SP_MS3Rst2_off_hs_high_out_shift                                  (0)
#define  OFFMS_SP_MS3Rst2_dummy_31_mask                                          (0x80000000)
#define  OFFMS_SP_MS3Rst2_off_vs_high_out_mask                                   (0x7FFF0000)
#define  OFFMS_SP_MS3Rst2_dummy_15_14_mask                                       (0x0000C000)
#define  OFFMS_SP_MS3Rst2_off_hs_high_out_mask                                   (0x00003FFF)
#define  OFFMS_SP_MS3Rst2_dummy_31(data)                                         (0x80000000&((data)<<31))
#define  OFFMS_SP_MS3Rst2_off_vs_high_out(data)                                  (0x7FFF0000&((data)<<16))
#define  OFFMS_SP_MS3Rst2_dummy_15_14(data)                                      (0x0000C000&((data)<<14))
#define  OFFMS_SP_MS3Rst2_off_hs_high_out(data)                                  (0x00003FFF&(data))
#define  OFFMS_SP_MS3Rst2_get_dummy_31(data)                                     ((0x80000000&(data))>>31)
#define  OFFMS_SP_MS3Rst2_get_off_vs_high_out(data)                              ((0x7FFF0000&(data))>>16)
#define  OFFMS_SP_MS3Rst2_get_dummy_15_14(data)                                  ((0x0000C000&(data))>>14)
#define  OFFMS_SP_MS3Rst2_get_off_hs_high_out(data)                              (0x00003FFF&(data))

#define  OFFMS_MES_RESULT_VSTA_END                                              0x18021110
#define  OFFMS_MES_RESULT_VSTA_END_reg_addr                                      "0xB8021110"
#define  OFFMS_MES_RESULT_VSTA_END_reg                                           0xB8021110
#define  OFFMS_MES_RESULT_VSTA_END_inst_addr                                     "0x0004"
#define  set_OFFMS_MES_RESULT_VSTA_END_reg(data)                                 (*((volatile unsigned int*)OFFMS_MES_RESULT_VSTA_END_reg)=data)
#define  get_OFFMS_MES_RESULT_VSTA_END_reg                                       (*((volatile unsigned int*)OFFMS_MES_RESULT_VSTA_END_reg))
#define  OFFMS_MES_RESULT_VSTA_END_off_vx_sta_shift                              (16)
#define  OFFMS_MES_RESULT_VSTA_END_off_vx_end_shift                              (0)
#define  OFFMS_MES_RESULT_VSTA_END_off_vx_sta_mask                               (0x7FFF0000)
#define  OFFMS_MES_RESULT_VSTA_END_off_vx_end_mask                               (0x00007FFF)
#define  OFFMS_MES_RESULT_VSTA_END_off_vx_sta(data)                              (0x7FFF0000&((data)<<16))
#define  OFFMS_MES_RESULT_VSTA_END_off_vx_end(data)                              (0x00007FFF&(data))
#define  OFFMS_MES_RESULT_VSTA_END_get_off_vx_sta(data)                          ((0x7FFF0000&(data))>>16)
#define  OFFMS_MES_RESULT_VSTA_END_get_off_vx_end(data)                          (0x00007FFF&(data))

#define  OFFMS_MES_RESULT_HSTA_END                                              0x18021114
#define  OFFMS_MES_RESULT_HSTA_END_reg_addr                                      "0xB8021114"
#define  OFFMS_MES_RESULT_HSTA_END_reg                                           0xB8021114
#define  OFFMS_MES_RESULT_HSTA_END_inst_addr                                     "0x0005"
#define  set_OFFMS_MES_RESULT_HSTA_END_reg(data)                                 (*((volatile unsigned int*)OFFMS_MES_RESULT_HSTA_END_reg)=data)
#define  get_OFFMS_MES_RESULT_HSTA_END_reg                                       (*((volatile unsigned int*)OFFMS_MES_RESULT_HSTA_END_reg))
#define  OFFMS_MES_RESULT_HSTA_END_off_hx_sta_shift                              (16)
#define  OFFMS_MES_RESULT_HSTA_END_off_hx_end_shift                              (0)
#define  OFFMS_MES_RESULT_HSTA_END_off_hx_sta_mask                               (0x3FFF0000)
#define  OFFMS_MES_RESULT_HSTA_END_off_hx_end_mask                               (0x00003FFF)
#define  OFFMS_MES_RESULT_HSTA_END_off_hx_sta(data)                              (0x3FFF0000&((data)<<16))
#define  OFFMS_MES_RESULT_HSTA_END_off_hx_end(data)                              (0x00003FFF&(data))
#define  OFFMS_MES_RESULT_HSTA_END_get_off_hx_sta(data)                          ((0x3FFF0000&(data))>>16)
#define  OFFMS_MES_RESULT_HSTA_END_get_off_hx_end(data)                          (0x00003FFF&(data))

#define  OFFMS_SP_MS3Stus                                                       0x18021118
#define  OFFMS_SP_MS3Stus_reg_addr                                               "0xB8021118"
#define  OFFMS_SP_MS3Stus_reg                                                    0xB8021118
#define  OFFMS_SP_MS3Stus_inst_addr                                              "0x0006"
#define  set_OFFMS_SP_MS3Stus_reg(data)                                          (*((volatile unsigned int*)OFFMS_SP_MS3Stus_reg)=data)
#define  get_OFFMS_SP_MS3Stus_reg                                                (*((volatile unsigned int*)OFFMS_SP_MS3Stus_reg))
#define  OFFMS_SP_MS3Stus_off_ms_now_shift                                       (21)
#define  OFFMS_SP_MS3Stus_off_vs_per_to_long_shift                               (10)
#define  OFFMS_SP_MS3Stus_off_vs_pol_out_shift                                   (9)
#define  OFFMS_SP_MS3Stus_off_hs_pol_out_shift                                   (8)
#define  OFFMS_SP_MS3Stus_off_vs_per_to_shift                                    (7)
#define  OFFMS_SP_MS3Stus_off_vs_high_to_shift                                   (6)
#define  OFFMS_SP_MS3Stus_off_vs_per_of_shift                                    (5)
#define  OFFMS_SP_MS3Stus_off_vs_over_range_shift                                (4)
#define  OFFMS_SP_MS3Stus_off_vs_pol_chg_shift                                   (3)
#define  OFFMS_SP_MS3Stus_off_hs_per_of_shift                                    (2)
#define  OFFMS_SP_MS3Stus_off_hs_over_range_shift                                (1)
#define  OFFMS_SP_MS3Stus_off_hs_pol_chg_shift                                   (0)
#define  OFFMS_SP_MS3Stus_off_ms_now_mask                                        (0x00200000)
#define  OFFMS_SP_MS3Stus_off_vs_per_to_long_mask                                (0x00000400)
#define  OFFMS_SP_MS3Stus_off_vs_pol_out_mask                                    (0x00000200)
#define  OFFMS_SP_MS3Stus_off_hs_pol_out_mask                                    (0x00000100)
#define  OFFMS_SP_MS3Stus_off_vs_per_to_mask                                     (0x00000080)
#define  OFFMS_SP_MS3Stus_off_vs_high_to_mask                                    (0x00000040)
#define  OFFMS_SP_MS3Stus_off_vs_per_of_mask                                     (0x00000020)
#define  OFFMS_SP_MS3Stus_off_vs_over_range_mask                                 (0x00000010)
#define  OFFMS_SP_MS3Stus_off_vs_pol_chg_mask                                    (0x00000008)
#define  OFFMS_SP_MS3Stus_off_hs_per_of_mask                                     (0x00000004)
#define  OFFMS_SP_MS3Stus_off_hs_over_range_mask                                 (0x00000002)
#define  OFFMS_SP_MS3Stus_off_hs_pol_chg_mask                                    (0x00000001)
#define  OFFMS_SP_MS3Stus_off_ms_now(data)                                       (0x00200000&((data)<<21))
#define  OFFMS_SP_MS3Stus_off_vs_per_to_long(data)                               (0x00000400&((data)<<10))
#define  OFFMS_SP_MS3Stus_off_vs_pol_out(data)                                   (0x00000200&((data)<<9))
#define  OFFMS_SP_MS3Stus_off_hs_pol_out(data)                                   (0x00000100&((data)<<8))
#define  OFFMS_SP_MS3Stus_off_vs_per_to(data)                                    (0x00000080&((data)<<7))
#define  OFFMS_SP_MS3Stus_off_vs_high_to(data)                                   (0x00000040&((data)<<6))
#define  OFFMS_SP_MS3Stus_off_vs_per_of(data)                                    (0x00000020&((data)<<5))
#define  OFFMS_SP_MS3Stus_off_vs_over_range(data)                                (0x00000010&((data)<<4))
#define  OFFMS_SP_MS3Stus_off_vs_pol_chg(data)                                   (0x00000008&((data)<<3))
#define  OFFMS_SP_MS3Stus_off_hs_per_of(data)                                    (0x00000004&((data)<<2))
#define  OFFMS_SP_MS3Stus_off_hs_over_range(data)                                (0x00000002&((data)<<1))
#define  OFFMS_SP_MS3Stus_off_hs_pol_chg(data)                                   (0x00000001&(data))
#define  OFFMS_SP_MS3Stus_get_off_ms_now(data)                                   ((0x00200000&(data))>>21)
#define  OFFMS_SP_MS3Stus_get_off_vs_per_to_long(data)                           ((0x00000400&(data))>>10)
#define  OFFMS_SP_MS3Stus_get_off_vs_pol_out(data)                               ((0x00000200&(data))>>9)
#define  OFFMS_SP_MS3Stus_get_off_hs_pol_out(data)                               ((0x00000100&(data))>>8)
#define  OFFMS_SP_MS3Stus_get_off_vs_per_to(data)                                ((0x00000080&(data))>>7)
#define  OFFMS_SP_MS3Stus_get_off_vs_high_to(data)                               ((0x00000040&(data))>>6)
#define  OFFMS_SP_MS3Stus_get_off_vs_per_of(data)                                ((0x00000020&(data))>>5)
#define  OFFMS_SP_MS3Stus_get_off_vs_over_range(data)                            ((0x00000010&(data))>>4)
#define  OFFMS_SP_MS3Stus_get_off_vs_pol_chg(data)                               ((0x00000008&(data))>>3)
#define  OFFMS_SP_MS3Stus_get_off_hs_per_of(data)                                ((0x00000004&(data))>>2)
#define  OFFMS_SP_MS3Stus_get_off_hs_over_range(data)                            ((0x00000002&(data))>>1)
#define  OFFMS_SP_MS3Stus_get_off_hs_pol_chg(data)                               (0x00000001&(data))

#define  OFFMS_SP_MS3IE                                                         0x1802111C
#define  OFFMS_SP_MS3IE_reg_addr                                                 "0xB802111C"
#define  OFFMS_SP_MS3IE_reg                                                      0xB802111C
#define  OFFMS_SP_MS3IE_inst_addr                                                "0x0007"
#define  set_OFFMS_SP_MS3IE_reg(data)                                            (*((volatile unsigned int*)OFFMS_SP_MS3IE_reg)=data)
#define  get_OFFMS_SP_MS3IE_reg                                                  (*((volatile unsigned int*)OFFMS_SP_MS3IE_reg))
#define  OFFMS_SP_MS3IE_ie_off_msdone_shift                                      (31)
#define  OFFMS_SP_MS3IE_dummy_11_8_shift                                         (8)
#define  OFFMS_SP_MS3IE_ie_off_vs_per_to_shift                                   (7)
#define  OFFMS_SP_MS3IE_ie_off_vs_high_to_shift                                  (6)
#define  OFFMS_SP_MS3IE_ie_off_vs_per_of_shift                                   (5)
#define  OFFMS_SP_MS3IE_ie_off_vs_over_range_shift                               (4)
#define  OFFMS_SP_MS3IE_ie_off_vs_pol_chg_shift                                  (3)
#define  OFFMS_SP_MS3IE_ie_off_hs_per_of_shift                                   (2)
#define  OFFMS_SP_MS3IE_ie_off_hs_over_range_shift                               (1)
#define  OFFMS_SP_MS3IE_ie_off_hs_pol_chg_shift                                  (0)
#define  OFFMS_SP_MS3IE_ie_off_msdone_mask                                       (0x80000000)
#define  OFFMS_SP_MS3IE_dummy_11_8_mask                                          (0x00000F00)
#define  OFFMS_SP_MS3IE_ie_off_vs_per_to_mask                                    (0x00000080)
#define  OFFMS_SP_MS3IE_ie_off_vs_high_to_mask                                   (0x00000040)
#define  OFFMS_SP_MS3IE_ie_off_vs_per_of_mask                                    (0x00000020)
#define  OFFMS_SP_MS3IE_ie_off_vs_over_range_mask                                (0x00000010)
#define  OFFMS_SP_MS3IE_ie_off_vs_pol_chg_mask                                   (0x00000008)
#define  OFFMS_SP_MS3IE_ie_off_hs_per_of_mask                                    (0x00000004)
#define  OFFMS_SP_MS3IE_ie_off_hs_over_range_mask                                (0x00000002)
#define  OFFMS_SP_MS3IE_ie_off_hs_pol_chg_mask                                   (0x00000001)
#define  OFFMS_SP_MS3IE_ie_off_msdone(data)                                      (0x80000000&((data)<<31))
#define  OFFMS_SP_MS3IE_dummy_11_8(data)                                         (0x00000F00&((data)<<8))
#define  OFFMS_SP_MS3IE_ie_off_vs_per_to(data)                                   (0x00000080&((data)<<7))
#define  OFFMS_SP_MS3IE_ie_off_vs_high_to(data)                                  (0x00000040&((data)<<6))
#define  OFFMS_SP_MS3IE_ie_off_vs_per_of(data)                                   (0x00000020&((data)<<5))
#define  OFFMS_SP_MS3IE_ie_off_vs_over_range(data)                               (0x00000010&((data)<<4))
#define  OFFMS_SP_MS3IE_ie_off_vs_pol_chg(data)                                  (0x00000008&((data)<<3))
#define  OFFMS_SP_MS3IE_ie_off_hs_per_of(data)                                   (0x00000004&((data)<<2))
#define  OFFMS_SP_MS3IE_ie_off_hs_over_range(data)                               (0x00000002&((data)<<1))
#define  OFFMS_SP_MS3IE_ie_off_hs_pol_chg(data)                                  (0x00000001&(data))
#define  OFFMS_SP_MS3IE_get_ie_off_msdone(data)                                  ((0x80000000&(data))>>31)
#define  OFFMS_SP_MS3IE_get_dummy_11_8(data)                                     ((0x00000F00&(data))>>8)
#define  OFFMS_SP_MS3IE_get_ie_off_vs_per_to(data)                               ((0x00000080&(data))>>7)
#define  OFFMS_SP_MS3IE_get_ie_off_vs_high_to(data)                              ((0x00000040&(data))>>6)
#define  OFFMS_SP_MS3IE_get_ie_off_vs_per_of(data)                               ((0x00000020&(data))>>5)
#define  OFFMS_SP_MS3IE_get_ie_off_vs_over_range(data)                           ((0x00000010&(data))>>4)
#define  OFFMS_SP_MS3IE_get_ie_off_vs_pol_chg(data)                              ((0x00000008&(data))>>3)
#define  OFFMS_SP_MS3IE_get_ie_off_hs_per_of(data)                               ((0x00000004&(data))>>2)
#define  OFFMS_SP_MS3IE_get_ie_off_hs_over_range(data)                           ((0x00000002&(data))>>1)
#define  OFFMS_SP_MS3IE_get_ie_off_hs_pol_chg(data)                              (0x00000001&(data))

#define  OFFMS_SP_MS3EnAtvCtrl                                                  0x18021120
#define  OFFMS_SP_MS3EnAtvCtrl_reg_addr                                          "0xB8021120"
#define  OFFMS_SP_MS3EnAtvCtrl_reg                                               0xB8021120
#define  OFFMS_SP_MS3EnAtvCtrl_inst_addr                                         "0x0008"
#define  set_OFFMS_SP_MS3EnAtvCtrl_reg(data)                                     (*((volatile unsigned int*)OFFMS_SP_MS3EnAtvCtrl_reg)=data)
#define  get_OFFMS_SP_MS3EnAtvCtrl_reg                                           (*((volatile unsigned int*)OFFMS_SP_MS3EnAtvCtrl_reg))
#define  OFFMS_SP_MS3EnAtvCtrl_off_meas_source_vgip_sel_shift                    (24)
#define  OFFMS_SP_MS3EnAtvCtrl_off_ena_source_shift                              (7)
#define  OFFMS_SP_MS3EnAtvCtrl_off_ms_act_en_shift                               (6)
#define  OFFMS_SP_MS3EnAtvCtrl_dummy_5_0_shift                                   (0)
#define  OFFMS_SP_MS3EnAtvCtrl_off_meas_source_vgip_sel_mask                     (0x03000000)
#define  OFFMS_SP_MS3EnAtvCtrl_off_ena_source_mask                               (0x00000080)
#define  OFFMS_SP_MS3EnAtvCtrl_off_ms_act_en_mask                                (0x00000040)
#define  OFFMS_SP_MS3EnAtvCtrl_dummy_5_0_mask                                    (0x0000003F)
#define  OFFMS_SP_MS3EnAtvCtrl_off_meas_source_vgip_sel(data)                    (0x03000000&((data)<<24))
#define  OFFMS_SP_MS3EnAtvCtrl_off_ena_source(data)                              (0x00000080&((data)<<7))
#define  OFFMS_SP_MS3EnAtvCtrl_off_ms_act_en(data)                               (0x00000040&((data)<<6))
#define  OFFMS_SP_MS3EnAtvCtrl_dummy_5_0(data)                                   (0x0000003F&(data))
#define  OFFMS_SP_MS3EnAtvCtrl_get_off_meas_source_vgip_sel(data)                ((0x03000000&(data))>>24)
#define  OFFMS_SP_MS3EnAtvCtrl_get_off_ena_source(data)                          ((0x00000080&(data))>>7)
#define  OFFMS_SP_MS3EnAtvCtrl_get_off_ms_act_en(data)                           ((0x00000040&(data))>>6)
#define  OFFMS_SP_MS3EnAtvCtrl_get_dummy_5_0(data)                               (0x0000003F&(data))

#define  OFFMS_SP_MS3EnAtv                                                      0x18021124
#define  OFFMS_SP_MS3EnAtv_reg_addr                                              "0xB8021124"
#define  OFFMS_SP_MS3EnAtv_reg                                                   0xB8021124
#define  OFFMS_SP_MS3EnAtv_inst_addr                                             "0x0009"
#define  set_OFFMS_SP_MS3EnAtv_reg(data)                                         (*((volatile unsigned int*)OFFMS_SP_MS3EnAtv_reg)=data)
#define  get_OFFMS_SP_MS3EnAtv_reg                                               (*((volatile unsigned int*)OFFMS_SP_MS3EnAtv_reg))
#define  OFFMS_SP_MS3EnAtv_off_ena_region_out_shift                              (0)
#define  OFFMS_SP_MS3EnAtv_off_ena_region_out_mask                               (0x00FFFFFF)
#define  OFFMS_SP_MS3EnAtv_off_ena_region_out(data)                              (0x00FFFFFF&(data))
#define  OFFMS_SP_MS3EnAtv_get_off_ena_region_out(data)                          (0x00FFFFFF&(data))

#define  OFFMS_Demode_VsHs_Ctrl                                                 0x18021128
#define  OFFMS_Demode_VsHs_Ctrl_reg_addr                                         "0xB8021128"
#define  OFFMS_Demode_VsHs_Ctrl_reg                                              0xB8021128
#define  OFFMS_Demode_VsHs_Ctrl_inst_addr                                        "0x000A"
#define  set_OFFMS_Demode_VsHs_Ctrl_reg(data)                                    (*((volatile unsigned int*)OFFMS_Demode_VsHs_Ctrl_reg)=data)
#define  get_OFFMS_Demode_VsHs_Ctrl_reg                                          (*((volatile unsigned int*)OFFMS_Demode_VsHs_Ctrl_reg))
#define  OFFMS_Demode_VsHs_Ctrl_demode_en_shift                                  (4)
#define  OFFMS_Demode_VsHs_Ctrl_demode_flag_shift                                (0)
#define  OFFMS_Demode_VsHs_Ctrl_demode_en_mask                                   (0x00000010)
#define  OFFMS_Demode_VsHs_Ctrl_demode_flag_mask                                 (0x00000001)
#define  OFFMS_Demode_VsHs_Ctrl_demode_en(data)                                  (0x00000010&((data)<<4))
#define  OFFMS_Demode_VsHs_Ctrl_demode_flag(data)                                (0x00000001&(data))
#define  OFFMS_Demode_VsHs_Ctrl_get_demode_en(data)                              ((0x00000010&(data))>>4)
#define  OFFMS_Demode_VsHs_Ctrl_get_demode_flag(data)                            (0x00000001&(data))

#define  OFFMS_Demode_VsHs_Act                                                  0x1802112C
#define  OFFMS_Demode_VsHs_Act_reg_addr                                          "0xB802112C"
#define  OFFMS_Demode_VsHs_Act_reg                                               0xB802112C
#define  OFFMS_Demode_VsHs_Act_inst_addr                                         "0x000B"
#define  set_OFFMS_Demode_VsHs_Act_reg(data)                                     (*((volatile unsigned int*)OFFMS_Demode_VsHs_Act_reg)=data)
#define  get_OFFMS_Demode_VsHs_Act_reg                                           (*((volatile unsigned int*)OFFMS_Demode_VsHs_Act_reg))
#define  OFFMS_Demode_VsHs_Act_de_hs_act_shift                                   (18)
#define  OFFMS_Demode_VsHs_Act_de_hs_act_fraction_shift                          (14)
#define  OFFMS_Demode_VsHs_Act_de_vs_act_shift                                   (0)
#define  OFFMS_Demode_VsHs_Act_de_hs_act_mask                                    (0xFFFC0000)
#define  OFFMS_Demode_VsHs_Act_de_hs_act_fraction_mask                           (0x0003C000)
#define  OFFMS_Demode_VsHs_Act_de_vs_act_mask                                    (0x00003FFF)
#define  OFFMS_Demode_VsHs_Act_de_hs_act(data)                                   (0xFFFC0000&((data)<<18))
#define  OFFMS_Demode_VsHs_Act_de_hs_act_fraction(data)                          (0x0003C000&((data)<<14))
#define  OFFMS_Demode_VsHs_Act_de_vs_act(data)                                   (0x00003FFF&(data))
#define  OFFMS_Demode_VsHs_Act_get_de_hs_act(data)                               ((0xFFFC0000&(data))>>18)
#define  OFFMS_Demode_VsHs_Act_get_de_hs_act_fraction(data)                      ((0x0003C000&(data))>>14)
#define  OFFMS_Demode_VsHs_Act_get_de_vs_act(data)                               (0x00003FFF&(data))

#define  OFFMS_Demode_Vs_period                                                 0x18021130
#define  OFFMS_Demode_Vs_period_reg_addr                                         "0xB8021130"
#define  OFFMS_Demode_Vs_period_reg                                              0xB8021130
#define  OFFMS_Demode_Vs_period_inst_addr                                        "0x000C"
#define  set_OFFMS_Demode_Vs_period_reg(data)                                    (*((volatile unsigned int*)OFFMS_Demode_Vs_period_reg)=data)
#define  get_OFFMS_Demode_Vs_period_reg                                          (*((volatile unsigned int*)OFFMS_Demode_Vs_period_reg))
#define  OFFMS_Demode_Vs_period_de_vs_period_shift                               (0)
#define  OFFMS_Demode_Vs_period_de_vs_period_mask                                (0x003FFFFF)
#define  OFFMS_Demode_Vs_period_de_vs_period(data)                               (0x003FFFFF&(data))
#define  OFFMS_Demode_Vs_period_get_de_vs_period(data)                           (0x003FFFFF&(data))

#define  OFFMS_Demode_Hs_period                                                 0x18021134
#define  OFFMS_Demode_Hs_period_reg_addr                                         "0xB8021134"
#define  OFFMS_Demode_Hs_period_reg                                              0xB8021134
#define  OFFMS_Demode_Hs_period_inst_addr                                        "0x000D"
#define  set_OFFMS_Demode_Hs_period_reg(data)                                    (*((volatile unsigned int*)OFFMS_Demode_Hs_period_reg)=data)
#define  get_OFFMS_Demode_Hs_period_reg                                          (*((volatile unsigned int*)OFFMS_Demode_Hs_period_reg))
#define  OFFMS_Demode_Hs_period_de_hs_period_shift                               (4)
#define  OFFMS_Demode_Hs_period_de_hs_period_fraction_shift                      (0)
#define  OFFMS_Demode_Hs_period_de_hs_period_mask                                (0x0003FFF0)
#define  OFFMS_Demode_Hs_period_de_hs_period_fraction_mask                       (0x0000000F)
#define  OFFMS_Demode_Hs_period_de_hs_period(data)                               (0x0003FFF0&((data)<<4))
#define  OFFMS_Demode_Hs_period_de_hs_period_fraction(data)                      (0x0000000F&(data))
#define  OFFMS_Demode_Hs_period_get_de_hs_period(data)                           ((0x0003FFF0&(data))>>4)
#define  OFFMS_Demode_Hs_period_get_de_hs_period_fraction(data)                  (0x0000000F&(data))

#define  OFFMS_Demode_Vs_STA                                                    0x18021138
#define  OFFMS_Demode_Vs_STA_reg_addr                                            "0xB8021138"
#define  OFFMS_Demode_Vs_STA_reg                                                 0xB8021138
#define  OFFMS_Demode_Vs_STA_inst_addr                                           "0x000E"
#define  set_OFFMS_Demode_Vs_STA_reg(data)                                       (*((volatile unsigned int*)OFFMS_Demode_Vs_STA_reg)=data)
#define  get_OFFMS_Demode_Vs_STA_reg                                             (*((volatile unsigned int*)OFFMS_Demode_Vs_STA_reg))
#define  OFFMS_Demode_Vs_STA_de_vs_sta_shift                                     (0)
#define  OFFMS_Demode_Vs_STA_de_vs_sta_mask                                      (0x003FFFFF)
#define  OFFMS_Demode_Vs_STA_de_vs_sta(data)                                     (0x003FFFFF&(data))
#define  OFFMS_Demode_Vs_STA_get_de_vs_sta(data)                                 (0x003FFFFF&(data))

#define  OFFMS_Demode_Vs_END                                                    0x1802113C
#define  OFFMS_Demode_Vs_END_reg_addr                                            "0xB802113C"
#define  OFFMS_Demode_Vs_END_reg                                                 0xB802113C
#define  OFFMS_Demode_Vs_END_inst_addr                                           "0x000F"
#define  set_OFFMS_Demode_Vs_END_reg(data)                                       (*((volatile unsigned int*)OFFMS_Demode_Vs_END_reg)=data)
#define  get_OFFMS_Demode_Vs_END_reg                                             (*((volatile unsigned int*)OFFMS_Demode_Vs_END_reg))
#define  OFFMS_Demode_Vs_END_de_vs_end_shift                                     (0)
#define  OFFMS_Demode_Vs_END_de_vs_end_mask                                      (0x003FFFFF)
#define  OFFMS_Demode_Vs_END_de_vs_end(data)                                     (0x003FFFFF&(data))
#define  OFFMS_Demode_Vs_END_get_de_vs_end(data)                                 (0x003FFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======OFFMS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18021100_31:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  xtal_sel:1;
        RBus_UInt32  off_continuous_popup:1;
        RBus_UInt32  off_denms_inv:1;
        RBus_UInt32  off_blk_2frame_en:1;
        RBus_UInt32  off_meas_vs_of_sel:2;
        RBus_UInt32  dummy18021100_23:1;
        RBus_UInt32  off_meas_to_sel:1;
        RBus_UInt32  off_clk_sel:1;
        RBus_UInt32  off_timeclk_test_mode:1;
        RBus_UInt32  off_meas_source:4;
        RBus_UInt32  off_vs_meas_inv:1;
        RBus_UInt32  off_vsms_inv:1;
        RBus_UInt32  off_sycms_mode:1;
        RBus_UInt32  off_popup_meas:1;
        RBus_UInt32  off_hsms_inv:1;
        RBus_UInt32  off_online_en:1;
        RBus_UInt32  off_start_ms:1;
        RBus_UInt32  off_hs_max_delta:5;
        RBus_UInt32  off_vs_max_delta:4;
    };
}offms_sp_ms3ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  off_vs_period_out:15;
    };
}offms_sp_ms3rst0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  off_hs_period_out_h12b:14;
        RBus_UInt32  off_hs_period_out_f4b:4;
    };
}offms_sp_ms3rst1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802110c_31:1;
        RBus_UInt32  off_vs_high_out:15;
        RBus_UInt32  dummy1802110c_15_14:2;
        RBus_UInt32  off_hs_high_out:14;
    };
}offms_sp_ms3rst2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  off_vx_sta:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  off_vx_end:15;
    };
}offms_mes_result_vsta_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  off_hx_sta:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  off_hx_end:14;
    };
}offms_mes_result_hsta_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  off_ms_now:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  off_vs_per_to_long:1;
        RBus_UInt32  off_vs_pol_out:1;
        RBus_UInt32  off_hs_pol_out:1;
        RBus_UInt32  off_vs_per_to:1;
        RBus_UInt32  off_vs_high_to:1;
        RBus_UInt32  off_vs_per_of:1;
        RBus_UInt32  off_vs_over_range:1;
        RBus_UInt32  off_vs_pol_chg:1;
        RBus_UInt32  off_hs_per_of:1;
        RBus_UInt32  off_hs_over_range:1;
        RBus_UInt32  off_hs_pol_chg:1;
    };
}offms_sp_ms3stus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ie_off_msdone:1;
        RBus_UInt32  res1:19;
        RBus_UInt32  dummy1802111c_11_8:4;
        RBus_UInt32  ie_off_vs_per_to:1;
        RBus_UInt32  ie_off_vs_high_to:1;
        RBus_UInt32  ie_off_vs_per_of:1;
        RBus_UInt32  ie_off_vs_over_range:1;
        RBus_UInt32  ie_off_vs_pol_chg:1;
        RBus_UInt32  ie_off_hs_per_of:1;
        RBus_UInt32  ie_off_hs_over_range:1;
        RBus_UInt32  ie_off_hs_pol_chg:1;
    };
}offms_sp_ms3ie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  off_meas_source_vgip_sel:2;
        RBus_UInt32  res2:16;
        RBus_UInt32  off_ena_source:1;
        RBus_UInt32  off_ms_act_en:1;
        RBus_UInt32  dummy18021120_5_0:6;
    };
}offms_sp_ms3enatvctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  off_ena_region_out:24;
    };
}offms_sp_ms3enatv_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  demode_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  demode_flag:1;
    };
}offms_demode_vshs_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  de_hs_act:14;
        RBus_UInt32  de_hs_act_fraction:4;
        RBus_UInt32  de_vs_act:14;
    };
}offms_demode_vshs_act_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  de_vs_period:22;
    };
}offms_demode_vs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  de_hs_period:14;
        RBus_UInt32  de_hs_period_fraction:4;
    };
}offms_demode_hs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  de_vs_sta:22;
    };
}offms_demode_vs_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  de_vs_end:22;
    };
}offms_demode_vs_end_RBUS;

#else //apply LITTLE_ENDIAN

//======OFFMS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  off_vs_max_delta:4;
        RBus_UInt32  off_hs_max_delta:5;
        RBus_UInt32  off_start_ms:1;
        RBus_UInt32  off_online_en:1;
        RBus_UInt32  off_hsms_inv:1;
        RBus_UInt32  off_popup_meas:1;
        RBus_UInt32  off_sycms_mode:1;
        RBus_UInt32  off_vsms_inv:1;
        RBus_UInt32  off_vs_meas_inv:1;
        RBus_UInt32  off_meas_source:4;
        RBus_UInt32  off_timeclk_test_mode:1;
        RBus_UInt32  off_clk_sel:1;
        RBus_UInt32  off_meas_to_sel:1;
        RBus_UInt32  dummy18021100_23:1;
        RBus_UInt32  off_meas_vs_of_sel:2;
        RBus_UInt32  off_blk_2frame_en:1;
        RBus_UInt32  off_denms_inv:1;
        RBus_UInt32  off_continuous_popup:1;
        RBus_UInt32  xtal_sel:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dummy18021100_31:1;
    };
}offms_sp_ms3ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  off_vs_period_out:15;
        RBus_UInt32  res1:17;
    };
}offms_sp_ms3rst0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  off_hs_period_out_f4b:4;
        RBus_UInt32  off_hs_period_out_h12b:14;
        RBus_UInt32  res1:14;
    };
}offms_sp_ms3rst1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  off_hs_high_out:14;
        RBus_UInt32  dummy1802110c_15_14:2;
        RBus_UInt32  off_vs_high_out:15;
        RBus_UInt32  dummy1802110c_31:1;
    };
}offms_sp_ms3rst2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  off_vx_end:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  off_vx_sta:15;
        RBus_UInt32  res2:1;
    };
}offms_mes_result_vsta_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  off_hx_end:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  off_hx_sta:14;
        RBus_UInt32  res2:2;
    };
}offms_mes_result_hsta_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  off_hs_pol_chg:1;
        RBus_UInt32  off_hs_over_range:1;
        RBus_UInt32  off_hs_per_of:1;
        RBus_UInt32  off_vs_pol_chg:1;
        RBus_UInt32  off_vs_over_range:1;
        RBus_UInt32  off_vs_per_of:1;
        RBus_UInt32  off_vs_high_to:1;
        RBus_UInt32  off_vs_per_to:1;
        RBus_UInt32  off_hs_pol_out:1;
        RBus_UInt32  off_vs_pol_out:1;
        RBus_UInt32  off_vs_per_to_long:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  off_ms_now:1;
        RBus_UInt32  res2:10;
    };
}offms_sp_ms3stus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ie_off_hs_pol_chg:1;
        RBus_UInt32  ie_off_hs_over_range:1;
        RBus_UInt32  ie_off_hs_per_of:1;
        RBus_UInt32  ie_off_vs_pol_chg:1;
        RBus_UInt32  ie_off_vs_over_range:1;
        RBus_UInt32  ie_off_vs_per_of:1;
        RBus_UInt32  ie_off_vs_high_to:1;
        RBus_UInt32  ie_off_vs_per_to:1;
        RBus_UInt32  dummy1802111c_11_8:4;
        RBus_UInt32  res1:19;
        RBus_UInt32  ie_off_msdone:1;
    };
}offms_sp_ms3ie_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18021120_5_0:6;
        RBus_UInt32  off_ms_act_en:1;
        RBus_UInt32  off_ena_source:1;
        RBus_UInt32  res1:16;
        RBus_UInt32  off_meas_source_vgip_sel:2;
        RBus_UInt32  res2:6;
    };
}offms_sp_ms3enatvctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  off_ena_region_out:24;
        RBus_UInt32  res1:8;
    };
}offms_sp_ms3enatv_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demode_flag:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  demode_en:1;
        RBus_UInt32  res2:27;
    };
}offms_demode_vshs_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  de_vs_act:14;
        RBus_UInt32  de_hs_act_fraction:4;
        RBus_UInt32  de_hs_act:14;
    };
}offms_demode_vshs_act_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  de_vs_period:22;
        RBus_UInt32  res1:10;
    };
}offms_demode_vs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  de_hs_period_fraction:4;
        RBus_UInt32  de_hs_period:14;
        RBus_UInt32  res1:14;
    };
}offms_demode_hs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  de_vs_sta:22;
        RBus_UInt32  res1:10;
    };
}offms_demode_vs_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  de_vs_end:22;
        RBus_UInt32  res1:10;
    };
}offms_demode_vs_end_RBUS;




#endif 


#endif 
