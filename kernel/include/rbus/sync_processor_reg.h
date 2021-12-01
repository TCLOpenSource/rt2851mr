/**
* @file Merlin5-DesignSpec-I-Domain_SyncProcessor
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_SYNC_PROCESSOR_REG_H_
#define _RBUS_SYNC_PROCESSOR_REG_H_

#include "rbus_types.h"



//  SYNC_PROCESSOR Register Address
#define  SYNC_PROCESSOR_SP1_CTRL                                                0x18021000
#define  SYNC_PROCESSOR_SP1_CTRL_reg_addr                                        "0xB8021000"
#define  SYNC_PROCESSOR_SP1_CTRL_reg                                             0xB8021000
#define  SYNC_PROCESSOR_SP1_CTRL_inst_addr                                       "0x0000"
#define  set_SYNC_PROCESSOR_SP1_CTRL_reg(data)                                   (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_CTRL_reg)=data)
#define  get_SYNC_PROCESSOR_SP1_CTRL_reg                                         (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_CTRL_reg))
#define  SYNC_PROCESSOR_SP1_CTRL_s1_dehs_out_en_shift                            (31)
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_30_shift                                  (30)
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_29_shift                                  (29)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_hsraw_inv_shift                              (28)
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_27_shift                                  (27)
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_26_24_shift                               (24)
#define  SYNC_PROCESSOR_SP1_CTRL_hrecovery_en_shift                              (23)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_adc_vsout_testmd_shift                       (22)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_devs_out_en_shift                            (21)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_sel_clpmsk_as_devs_shift                     (20)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_hsout_inv_shift                              (19)
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_18_shift                                  (18)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_hs_sync_source_shift                         (17)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_hsout_en_shift                               (16)
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_15_13_shift                               (13)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_seperate_testmode_shift                      (12)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_auto_run_done_ie_shift                       (11)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_auto_run_shift                               (10)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_coast_en_shift                               (9)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_decmp_en_shift                               (8)
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_7_shift                                   (7)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_hs_fb_plswid_md_shift                        (5)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_coast_inv_shift                              (4)
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_3_shift                                   (3)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_vhs_source_sel_shift                         (0)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_dehs_out_en_mask                             (0x80000000)
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_30_mask                                   (0x40000000)
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_29_mask                                   (0x20000000)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_hsraw_inv_mask                               (0x10000000)
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_27_mask                                   (0x08000000)
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_26_24_mask                                (0x07000000)
#define  SYNC_PROCESSOR_SP1_CTRL_hrecovery_en_mask                               (0x00800000)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_adc_vsout_testmd_mask                        (0x00400000)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_devs_out_en_mask                             (0x00200000)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_sel_clpmsk_as_devs_mask                      (0x00100000)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_hsout_inv_mask                               (0x00080000)
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_18_mask                                   (0x00040000)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_hs_sync_source_mask                          (0x00020000)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_hsout_en_mask                                (0x00010000)
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_15_13_mask                                (0x0000E000)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_seperate_testmode_mask                       (0x00001000)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_auto_run_done_ie_mask                        (0x00000800)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_auto_run_mask                                (0x00000400)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_coast_en_mask                                (0x00000200)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_decmp_en_mask                                (0x00000100)
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_7_mask                                    (0x00000080)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_hs_fb_plswid_md_mask                         (0x00000060)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_coast_inv_mask                               (0x00000010)
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_3_mask                                    (0x00000008)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_vhs_source_sel_mask                          (0x00000007)
#define  SYNC_PROCESSOR_SP1_CTRL_s1_dehs_out_en(data)                            (0x80000000&((data)<<31))
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_30(data)                                  (0x40000000&((data)<<30))
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_29(data)                                  (0x20000000&((data)<<29))
#define  SYNC_PROCESSOR_SP1_CTRL_s1_hsraw_inv(data)                              (0x10000000&((data)<<28))
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_27(data)                                  (0x08000000&((data)<<27))
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_26_24(data)                               (0x07000000&((data)<<24))
#define  SYNC_PROCESSOR_SP1_CTRL_hrecovery_en(data)                              (0x00800000&((data)<<23))
#define  SYNC_PROCESSOR_SP1_CTRL_s1_adc_vsout_testmd(data)                       (0x00400000&((data)<<22))
#define  SYNC_PROCESSOR_SP1_CTRL_s1_devs_out_en(data)                            (0x00200000&((data)<<21))
#define  SYNC_PROCESSOR_SP1_CTRL_s1_sel_clpmsk_as_devs(data)                     (0x00100000&((data)<<20))
#define  SYNC_PROCESSOR_SP1_CTRL_s1_hsout_inv(data)                              (0x00080000&((data)<<19))
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_18(data)                                  (0x00040000&((data)<<18))
#define  SYNC_PROCESSOR_SP1_CTRL_s1_hs_sync_source(data)                         (0x00020000&((data)<<17))
#define  SYNC_PROCESSOR_SP1_CTRL_s1_hsout_en(data)                               (0x00010000&((data)<<16))
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_15_13(data)                               (0x0000E000&((data)<<13))
#define  SYNC_PROCESSOR_SP1_CTRL_s1_seperate_testmode(data)                      (0x00001000&((data)<<12))
#define  SYNC_PROCESSOR_SP1_CTRL_s1_auto_run_done_ie(data)                       (0x00000800&((data)<<11))
#define  SYNC_PROCESSOR_SP1_CTRL_s1_auto_run(data)                               (0x00000400&((data)<<10))
#define  SYNC_PROCESSOR_SP1_CTRL_s1_coast_en(data)                               (0x00000200&((data)<<9))
#define  SYNC_PROCESSOR_SP1_CTRL_s1_decmp_en(data)                               (0x00000100&((data)<<8))
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_7(data)                                   (0x00000080&((data)<<7))
#define  SYNC_PROCESSOR_SP1_CTRL_s1_hs_fb_plswid_md(data)                        (0x00000060&((data)<<5))
#define  SYNC_PROCESSOR_SP1_CTRL_s1_coast_inv(data)                              (0x00000010&((data)<<4))
#define  SYNC_PROCESSOR_SP1_CTRL_dummy_3(data)                                   (0x00000008&((data)<<3))
#define  SYNC_PROCESSOR_SP1_CTRL_s1_vhs_source_sel(data)                         (0x00000007&(data))
#define  SYNC_PROCESSOR_SP1_CTRL_get_s1_dehs_out_en(data)                        ((0x80000000&(data))>>31)
#define  SYNC_PROCESSOR_SP1_CTRL_get_dummy_30(data)                              ((0x40000000&(data))>>30)
#define  SYNC_PROCESSOR_SP1_CTRL_get_dummy_29(data)                              ((0x20000000&(data))>>29)
#define  SYNC_PROCESSOR_SP1_CTRL_get_s1_hsraw_inv(data)                          ((0x10000000&(data))>>28)
#define  SYNC_PROCESSOR_SP1_CTRL_get_dummy_27(data)                              ((0x08000000&(data))>>27)
#define  SYNC_PROCESSOR_SP1_CTRL_get_dummy_26_24(data)                           ((0x07000000&(data))>>24)
#define  SYNC_PROCESSOR_SP1_CTRL_get_hrecovery_en(data)                          ((0x00800000&(data))>>23)
#define  SYNC_PROCESSOR_SP1_CTRL_get_s1_adc_vsout_testmd(data)                   ((0x00400000&(data))>>22)
#define  SYNC_PROCESSOR_SP1_CTRL_get_s1_devs_out_en(data)                        ((0x00200000&(data))>>21)
#define  SYNC_PROCESSOR_SP1_CTRL_get_s1_sel_clpmsk_as_devs(data)                 ((0x00100000&(data))>>20)
#define  SYNC_PROCESSOR_SP1_CTRL_get_s1_hsout_inv(data)                          ((0x00080000&(data))>>19)
#define  SYNC_PROCESSOR_SP1_CTRL_get_dummy_18(data)                              ((0x00040000&(data))>>18)
#define  SYNC_PROCESSOR_SP1_CTRL_get_s1_hs_sync_source(data)                     ((0x00020000&(data))>>17)
#define  SYNC_PROCESSOR_SP1_CTRL_get_s1_hsout_en(data)                           ((0x00010000&(data))>>16)
#define  SYNC_PROCESSOR_SP1_CTRL_get_dummy_15_13(data)                           ((0x0000E000&(data))>>13)
#define  SYNC_PROCESSOR_SP1_CTRL_get_s1_seperate_testmode(data)                  ((0x00001000&(data))>>12)
#define  SYNC_PROCESSOR_SP1_CTRL_get_s1_auto_run_done_ie(data)                   ((0x00000800&(data))>>11)
#define  SYNC_PROCESSOR_SP1_CTRL_get_s1_auto_run(data)                           ((0x00000400&(data))>>10)
#define  SYNC_PROCESSOR_SP1_CTRL_get_s1_coast_en(data)                           ((0x00000200&(data))>>9)
#define  SYNC_PROCESSOR_SP1_CTRL_get_s1_decmp_en(data)                           ((0x00000100&(data))>>8)
#define  SYNC_PROCESSOR_SP1_CTRL_get_dummy_7(data)                               ((0x00000080&(data))>>7)
#define  SYNC_PROCESSOR_SP1_CTRL_get_s1_hs_fb_plswid_md(data)                    ((0x00000060&(data))>>5)
#define  SYNC_PROCESSOR_SP1_CTRL_get_s1_coast_inv(data)                          ((0x00000010&(data))>>4)
#define  SYNC_PROCESSOR_SP1_CTRL_get_dummy_3(data)                               ((0x00000008&(data))>>3)
#define  SYNC_PROCESSOR_SP1_CTRL_get_s1_vhs_source_sel(data)                     (0x00000007&(data))

#define  SYNC_PROCESSOR_SP1_AutoRst                                             0x18021004
#define  SYNC_PROCESSOR_SP1_AutoRst_reg_addr                                     "0xB8021004"
#define  SYNC_PROCESSOR_SP1_AutoRst_reg                                          0xB8021004
#define  SYNC_PROCESSOR_SP1_AutoRst_inst_addr                                    "0x0001"
#define  set_SYNC_PROCESSOR_SP1_AutoRst_reg(data)                                (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_AutoRst_reg)=data)
#define  get_SYNC_PROCESSOR_SP1_AutoRst_reg                                      (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_AutoRst_reg))
#define  SYNC_PROCESSOR_SP1_AutoRst_s1_auto_result_rdy_shift                     (31)
#define  SYNC_PROCESSOR_SP1_AutoRst_dummy_30_shift                               (30)
#define  SYNC_PROCESSOR_SP1_AutoRst_s1_unlock_no_vs_str_shift                    (24)
#define  SYNC_PROCESSOR_SP1_AutoRst_s1_unlock_no_vs_end_shift                    (12)
#define  SYNC_PROCESSOR_SP1_AutoRst_s1_auto_result_shift                         (4)
#define  SYNC_PROCESSOR_SP1_AutoRst_s1_input_signal_be_inverted_shift            (0)
#define  SYNC_PROCESSOR_SP1_AutoRst_s1_auto_result_rdy_mask                      (0x80000000)
#define  SYNC_PROCESSOR_SP1_AutoRst_dummy_30_mask                                (0x40000000)
#define  SYNC_PROCESSOR_SP1_AutoRst_s1_unlock_no_vs_str_mask                     (0x3F000000)
#define  SYNC_PROCESSOR_SP1_AutoRst_s1_unlock_no_vs_end_mask                     (0x00FFF000)
#define  SYNC_PROCESSOR_SP1_AutoRst_s1_auto_result_mask                          (0x00000070)
#define  SYNC_PROCESSOR_SP1_AutoRst_s1_input_signal_be_inverted_mask             (0x00000001)
#define  SYNC_PROCESSOR_SP1_AutoRst_s1_auto_result_rdy(data)                     (0x80000000&((data)<<31))
#define  SYNC_PROCESSOR_SP1_AutoRst_dummy_30(data)                               (0x40000000&((data)<<30))
#define  SYNC_PROCESSOR_SP1_AutoRst_s1_unlock_no_vs_str(data)                    (0x3F000000&((data)<<24))
#define  SYNC_PROCESSOR_SP1_AutoRst_s1_unlock_no_vs_end(data)                    (0x00FFF000&((data)<<12))
#define  SYNC_PROCESSOR_SP1_AutoRst_s1_auto_result(data)                         (0x00000070&((data)<<4))
#define  SYNC_PROCESSOR_SP1_AutoRst_s1_input_signal_be_inverted(data)            (0x00000001&(data))
#define  SYNC_PROCESSOR_SP1_AutoRst_get_s1_auto_result_rdy(data)                 ((0x80000000&(data))>>31)
#define  SYNC_PROCESSOR_SP1_AutoRst_get_dummy_30(data)                           ((0x40000000&(data))>>30)
#define  SYNC_PROCESSOR_SP1_AutoRst_get_s1_unlock_no_vs_str(data)                ((0x3F000000&(data))>>24)
#define  SYNC_PROCESSOR_SP1_AutoRst_get_s1_unlock_no_vs_end(data)                ((0x00FFF000&(data))>>12)
#define  SYNC_PROCESSOR_SP1_AutoRst_get_s1_auto_result(data)                     ((0x00000070&(data))>>4)
#define  SYNC_PROCESSOR_SP1_AutoRst_get_s1_input_signal_be_inverted(data)        (0x00000001&(data))

#define  SYNC_PROCESSOR_SP1_StbCtrl                                             0x18021010
#define  SYNC_PROCESSOR_SP1_StbCtrl_reg_addr                                     "0xB8021010"
#define  SYNC_PROCESSOR_SP1_StbCtrl_reg                                          0xB8021010
#define  SYNC_PROCESSOR_SP1_StbCtrl_inst_addr                                    "0x0002"
#define  set_SYNC_PROCESSOR_SP1_StbCtrl_reg(data)                                (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_StbCtrl_reg)=data)
#define  get_SYNC_PROCESSOR_SP1_StbCtrl_reg                                      (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_StbCtrl_reg))
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_cap_win_range_lsb_shift                   (20)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_hsper_realtime_stbline_shift              (18)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_hsper_realtime_en_shift                   (17)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_cap_win_range_shift                       (11)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_per_range_shift                           (8)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_popup_stable_per_shift                    (7)
#define  SYNC_PROCESSOR_SP1_StbCtrl_dummy_6_4_shift                              (4)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_cap_win_step_shift                        (3)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_miss_lock_limit_shift                     (2)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_dds_cap_win_h2l_enable_shift              (1)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_stable_en_shift                           (0)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_cap_win_range_lsb_mask                    (0x00300000)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_hsper_realtime_stbline_mask               (0x000C0000)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_hsper_realtime_en_mask                    (0x00020000)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_cap_win_range_mask                        (0x0000F800)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_per_range_mask                            (0x00000700)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_popup_stable_per_mask                     (0x00000080)
#define  SYNC_PROCESSOR_SP1_StbCtrl_dummy_6_4_mask                               (0x00000070)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_cap_win_step_mask                         (0x00000008)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_miss_lock_limit_mask                      (0x00000004)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_dds_cap_win_h2l_enable_mask               (0x00000002)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_stable_en_mask                            (0x00000001)
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_cap_win_range_lsb(data)                   (0x00300000&((data)<<20))
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_hsper_realtime_stbline(data)              (0x000C0000&((data)<<18))
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_hsper_realtime_en(data)                   (0x00020000&((data)<<17))
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_cap_win_range(data)                       (0x0000F800&((data)<<11))
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_per_range(data)                           (0x00000700&((data)<<8))
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_popup_stable_per(data)                    (0x00000080&((data)<<7))
#define  SYNC_PROCESSOR_SP1_StbCtrl_dummy_6_4(data)                              (0x00000070&((data)<<4))
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_cap_win_step(data)                        (0x00000008&((data)<<3))
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_miss_lock_limit(data)                     (0x00000004&((data)<<2))
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_dds_cap_win_h2l_enable(data)              (0x00000002&((data)<<1))
#define  SYNC_PROCESSOR_SP1_StbCtrl_s1_stable_en(data)                           (0x00000001&(data))
#define  SYNC_PROCESSOR_SP1_StbCtrl_get_s1_cap_win_range_lsb(data)               ((0x00300000&(data))>>20)
#define  SYNC_PROCESSOR_SP1_StbCtrl_get_s1_hsper_realtime_stbline(data)          ((0x000C0000&(data))>>18)
#define  SYNC_PROCESSOR_SP1_StbCtrl_get_s1_hsper_realtime_en(data)               ((0x00020000&(data))>>17)
#define  SYNC_PROCESSOR_SP1_StbCtrl_get_s1_cap_win_range(data)                   ((0x0000F800&(data))>>11)
#define  SYNC_PROCESSOR_SP1_StbCtrl_get_s1_per_range(data)                       ((0x00000700&(data))>>8)
#define  SYNC_PROCESSOR_SP1_StbCtrl_get_s1_popup_stable_per(data)                ((0x00000080&(data))>>7)
#define  SYNC_PROCESSOR_SP1_StbCtrl_get_dummy_6_4(data)                          ((0x00000070&(data))>>4)
#define  SYNC_PROCESSOR_SP1_StbCtrl_get_s1_cap_win_step(data)                    ((0x00000008&(data))>>3)
#define  SYNC_PROCESSOR_SP1_StbCtrl_get_s1_miss_lock_limit(data)                 ((0x00000004&(data))>>2)
#define  SYNC_PROCESSOR_SP1_StbCtrl_get_s1_dds_cap_win_h2l_enable(data)          ((0x00000002&(data))>>1)
#define  SYNC_PROCESSOR_SP1_StbCtrl_get_s1_stable_en(data)                       (0x00000001&(data))

#define  SYNC_PROCESSOR_SP1_StbRst0                                             0x18021014
#define  SYNC_PROCESSOR_SP1_StbRst0_reg_addr                                     "0xB8021014"
#define  SYNC_PROCESSOR_SP1_StbRst0_reg                                          0xB8021014
#define  SYNC_PROCESSOR_SP1_StbRst0_inst_addr                                    "0x0003"
#define  set_SYNC_PROCESSOR_SP1_StbRst0_reg(data)                                (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_StbRst0_reg)=data)
#define  get_SYNC_PROCESSOR_SP1_StbRst0_reg                                      (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_StbRst0_reg))
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_mode_det_of_shift                         (31)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_stb_per_chg_shift                         (30)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_stb_pol_chg_shift                         (29)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_vs_raw_vld_shift                          (28)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_cap_32unlock_shift                        (27)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_eq_occur_shift                            (26)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_hs_pol_chg_shift                          (25)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_cap_unlock_shift                          (24)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_mode_det_stable_shift                     (23)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_stable_pol_out_shift                      (22)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_cap_unlock_no_vs_shift                    (21)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_giltch_in_win_shift                       (20)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_giltch_in_win_int_shift                   (19)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_stb_per_chg_wde_shift                     (18)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_stb_pol_chg_wde_shift                     (17)
#define  SYNC_PROCESSOR_SP1_StbRst0_sync_wd_to_main_shift                        (16)
#define  SYNC_PROCESSOR_SP1_StbRst0_sync_wd_to_sub_shift                         (15)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_mode_det_of_mask                          (0x80000000)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_stb_per_chg_mask                          (0x40000000)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_stb_pol_chg_mask                          (0x20000000)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_vs_raw_vld_mask                           (0x10000000)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_cap_32unlock_mask                         (0x08000000)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_eq_occur_mask                             (0x04000000)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_hs_pol_chg_mask                           (0x02000000)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_cap_unlock_mask                           (0x01000000)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_mode_det_stable_mask                      (0x00800000)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_stable_pol_out_mask                       (0x00400000)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_cap_unlock_no_vs_mask                     (0x00200000)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_giltch_in_win_mask                        (0x00100000)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_giltch_in_win_int_mask                    (0x00080000)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_stb_per_chg_wde_mask                      (0x00040000)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_stb_pol_chg_wde_mask                      (0x00020000)
#define  SYNC_PROCESSOR_SP1_StbRst0_sync_wd_to_main_mask                         (0x00010000)
#define  SYNC_PROCESSOR_SP1_StbRst0_sync_wd_to_sub_mask                          (0x00008000)
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_mode_det_of(data)                         (0x80000000&((data)<<31))
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_stb_per_chg(data)                         (0x40000000&((data)<<30))
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_stb_pol_chg(data)                         (0x20000000&((data)<<29))
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_vs_raw_vld(data)                          (0x10000000&((data)<<28))
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_cap_32unlock(data)                        (0x08000000&((data)<<27))
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_eq_occur(data)                            (0x04000000&((data)<<26))
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_hs_pol_chg(data)                          (0x02000000&((data)<<25))
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_cap_unlock(data)                          (0x01000000&((data)<<24))
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_mode_det_stable(data)                     (0x00800000&((data)<<23))
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_stable_pol_out(data)                      (0x00400000&((data)<<22))
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_cap_unlock_no_vs(data)                    (0x00200000&((data)<<21))
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_giltch_in_win(data)                       (0x00100000&((data)<<20))
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_giltch_in_win_int(data)                   (0x00080000&((data)<<19))
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_stb_per_chg_wde(data)                     (0x00040000&((data)<<18))
#define  SYNC_PROCESSOR_SP1_StbRst0_s1_stb_pol_chg_wde(data)                     (0x00020000&((data)<<17))
#define  SYNC_PROCESSOR_SP1_StbRst0_sync_wd_to_main(data)                        (0x00010000&((data)<<16))
#define  SYNC_PROCESSOR_SP1_StbRst0_sync_wd_to_sub(data)                         (0x00008000&((data)<<15))
#define  SYNC_PROCESSOR_SP1_StbRst0_get_s1_mode_det_of(data)                     ((0x80000000&(data))>>31)
#define  SYNC_PROCESSOR_SP1_StbRst0_get_s1_stb_per_chg(data)                     ((0x40000000&(data))>>30)
#define  SYNC_PROCESSOR_SP1_StbRst0_get_s1_stb_pol_chg(data)                     ((0x20000000&(data))>>29)
#define  SYNC_PROCESSOR_SP1_StbRst0_get_s1_vs_raw_vld(data)                      ((0x10000000&(data))>>28)
#define  SYNC_PROCESSOR_SP1_StbRst0_get_s1_cap_32unlock(data)                    ((0x08000000&(data))>>27)
#define  SYNC_PROCESSOR_SP1_StbRst0_get_s1_eq_occur(data)                        ((0x04000000&(data))>>26)
#define  SYNC_PROCESSOR_SP1_StbRst0_get_s1_hs_pol_chg(data)                      ((0x02000000&(data))>>25)
#define  SYNC_PROCESSOR_SP1_StbRst0_get_s1_cap_unlock(data)                      ((0x01000000&(data))>>24)
#define  SYNC_PROCESSOR_SP1_StbRst0_get_s1_mode_det_stable(data)                 ((0x00800000&(data))>>23)
#define  SYNC_PROCESSOR_SP1_StbRst0_get_s1_stable_pol_out(data)                  ((0x00400000&(data))>>22)
#define  SYNC_PROCESSOR_SP1_StbRst0_get_s1_cap_unlock_no_vs(data)                ((0x00200000&(data))>>21)
#define  SYNC_PROCESSOR_SP1_StbRst0_get_s1_giltch_in_win(data)                   ((0x00100000&(data))>>20)
#define  SYNC_PROCESSOR_SP1_StbRst0_get_s1_giltch_in_win_int(data)               ((0x00080000&(data))>>19)
#define  SYNC_PROCESSOR_SP1_StbRst0_get_s1_stb_per_chg_wde(data)                 ((0x00040000&(data))>>18)
#define  SYNC_PROCESSOR_SP1_StbRst0_get_s1_stb_pol_chg_wde(data)                 ((0x00020000&(data))>>17)
#define  SYNC_PROCESSOR_SP1_StbRst0_get_sync_wd_to_main(data)                    ((0x00010000&(data))>>16)
#define  SYNC_PROCESSOR_SP1_StbRst0_get_sync_wd_to_sub(data)                     ((0x00008000&(data))>>15)

#define  SYNC_PROCESSOR_SP1_StbRst1                                             0x18021018
#define  SYNC_PROCESSOR_SP1_StbRst1_reg_addr                                     "0xB8021018"
#define  SYNC_PROCESSOR_SP1_StbRst1_reg                                          0xB8021018
#define  SYNC_PROCESSOR_SP1_StbRst1_inst_addr                                    "0x0004"
#define  set_SYNC_PROCESSOR_SP1_StbRst1_reg(data)                                (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_StbRst1_reg)=data)
#define  get_SYNC_PROCESSOR_SP1_StbRst1_reg                                      (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_StbRst1_reg))
#define  SYNC_PROCESSOR_SP1_StbRst1_s1_stable_period_out_shift                   (16)
#define  SYNC_PROCESSOR_SP1_StbRst1_s1_stable_plswid_out_shift                   (0)
#define  SYNC_PROCESSOR_SP1_StbRst1_s1_stable_period_out_mask                    (0x07FF0000)
#define  SYNC_PROCESSOR_SP1_StbRst1_s1_stable_plswid_out_mask                    (0x000007FF)
#define  SYNC_PROCESSOR_SP1_StbRst1_s1_stable_period_out(data)                   (0x07FF0000&((data)<<16))
#define  SYNC_PROCESSOR_SP1_StbRst1_s1_stable_plswid_out(data)                   (0x000007FF&(data))
#define  SYNC_PROCESSOR_SP1_StbRst1_get_s1_stable_period_out(data)               ((0x07FF0000&(data))>>16)
#define  SYNC_PROCESSOR_SP1_StbRst1_get_s1_stable_plswid_out(data)               (0x000007FF&(data))

#define  SYNC_PROCESSOR_SP1_dcnt                                                0x18021028
#define  SYNC_PROCESSOR_SP1_dcnt_reg_addr                                        "0xB8021028"
#define  SYNC_PROCESSOR_SP1_dcnt_reg                                             0xB8021028
#define  SYNC_PROCESSOR_SP1_dcnt_inst_addr                                       "0x0005"
#define  set_SYNC_PROCESSOR_SP1_dcnt_reg(data)                                   (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_dcnt_reg)=data)
#define  get_SYNC_PROCESSOR_SP1_dcnt_reg                                         (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_dcnt_reg))
#define  SYNC_PROCESSOR_SP1_dcnt_s1_deb_num_shift                                (11)
#define  SYNC_PROCESSOR_SP1_dcnt_s1_dcnt_level_shift                             (0)
#define  SYNC_PROCESSOR_SP1_dcnt_s1_deb_num_mask                                 (0x0000F800)
#define  SYNC_PROCESSOR_SP1_dcnt_s1_dcnt_level_mask                              (0x000007FF)
#define  SYNC_PROCESSOR_SP1_dcnt_s1_deb_num(data)                                (0x0000F800&((data)<<11))
#define  SYNC_PROCESSOR_SP1_dcnt_s1_dcnt_level(data)                             (0x000007FF&(data))
#define  SYNC_PROCESSOR_SP1_dcnt_get_s1_deb_num(data)                            ((0x0000F800&(data))>>11)
#define  SYNC_PROCESSOR_SP1_dcnt_get_s1_dcnt_level(data)                         (0x000007FF&(data))

#define  SYNC_PROCESSOR_SP1_Field                                               0x18021030
#define  SYNC_PROCESSOR_SP1_Field_reg_addr                                       "0xB8021030"
#define  SYNC_PROCESSOR_SP1_Field_reg                                            0xB8021030
#define  SYNC_PROCESSOR_SP1_Field_inst_addr                                      "0x0006"
#define  set_SYNC_PROCESSOR_SP1_Field_reg(data)                                  (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_Field_reg)=data)
#define  get_SYNC_PROCESSOR_SP1_Field_reg                                        (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_Field_reg))
#define  SYNC_PROCESSOR_SP1_Field_s1_field_det_vs_sel_shift                      (8)
#define  SYNC_PROCESSOR_SP1_Field_s1_field_det_mode_shift                        (7)
#define  SYNC_PROCESSOR_SP1_Field_s1_f_pos_field_shift                           (6)
#define  SYNC_PROCESSOR_SP1_Field_s1_f_pos_field_tgle_shift                      (5)
#define  SYNC_PROCESSOR_SP1_Field_s1_f_count_field_shift                         (4)
#define  SYNC_PROCESSOR_SP1_Field_s1_f_count_field_tgle_shift                    (3)
#define  SYNC_PROCESSOR_SP1_Field_s1_l_cnt_lsb1_shift                            (0)
#define  SYNC_PROCESSOR_SP1_Field_s1_field_det_vs_sel_mask                       (0x00000100)
#define  SYNC_PROCESSOR_SP1_Field_s1_field_det_mode_mask                         (0x00000080)
#define  SYNC_PROCESSOR_SP1_Field_s1_f_pos_field_mask                            (0x00000040)
#define  SYNC_PROCESSOR_SP1_Field_s1_f_pos_field_tgle_mask                       (0x00000020)
#define  SYNC_PROCESSOR_SP1_Field_s1_f_count_field_mask                          (0x00000010)
#define  SYNC_PROCESSOR_SP1_Field_s1_f_count_field_tgle_mask                     (0x00000008)
#define  SYNC_PROCESSOR_SP1_Field_s1_l_cnt_lsb1_mask                             (0x00000007)
#define  SYNC_PROCESSOR_SP1_Field_s1_field_det_vs_sel(data)                      (0x00000100&((data)<<8))
#define  SYNC_PROCESSOR_SP1_Field_s1_field_det_mode(data)                        (0x00000080&((data)<<7))
#define  SYNC_PROCESSOR_SP1_Field_s1_f_pos_field(data)                           (0x00000040&((data)<<6))
#define  SYNC_PROCESSOR_SP1_Field_s1_f_pos_field_tgle(data)                      (0x00000020&((data)<<5))
#define  SYNC_PROCESSOR_SP1_Field_s1_f_count_field(data)                         (0x00000010&((data)<<4))
#define  SYNC_PROCESSOR_SP1_Field_s1_f_count_field_tgle(data)                    (0x00000008&((data)<<3))
#define  SYNC_PROCESSOR_SP1_Field_s1_l_cnt_lsb1(data)                            (0x00000007&(data))
#define  SYNC_PROCESSOR_SP1_Field_get_s1_field_det_vs_sel(data)                  ((0x00000100&(data))>>8)
#define  SYNC_PROCESSOR_SP1_Field_get_s1_field_det_mode(data)                    ((0x00000080&(data))>>7)
#define  SYNC_PROCESSOR_SP1_Field_get_s1_f_pos_field(data)                       ((0x00000040&(data))>>6)
#define  SYNC_PROCESSOR_SP1_Field_get_s1_f_pos_field_tgle(data)                  ((0x00000020&(data))>>5)
#define  SYNC_PROCESSOR_SP1_Field_get_s1_f_count_field(data)                     ((0x00000010&(data))>>4)
#define  SYNC_PROCESSOR_SP1_Field_get_s1_f_count_field_tgle(data)                ((0x00000008&(data))>>3)
#define  SYNC_PROCESSOR_SP1_Field_get_s1_l_cnt_lsb1(data)                        (0x00000007&(data))

#define  SYNC_PROCESSOR_SP1_CLMPCTRL                                            0x18021038
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_reg_addr                                    "0xB8021038"
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_reg                                         0xB8021038
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_inst_addr                                   "0x0007"
#define  set_SYNC_PROCESSOR_SP1_CLMPCTRL_reg(data)                               (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_CLMPCTRL_reg)=data)
#define  get_SYNC_PROCESSOR_SP1_CLMPCTRL_reg                                     (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_CLMPCTRL_reg))
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_dummy_13_8_shift                            (8)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_clamp_dben_shift                         (7)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_clamp_cnt_unit_shift                     (6)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_clamp_clksrc_shift                       (5)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_clamp_en_shift                           (4)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_yclamp_hs_inv_shift                      (3)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_nyclamp_hs_inv_shift                     (2)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_clamp_test_en_shift                      (1)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_adc_hs_syncedge_shift                    (0)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_dummy_13_8_mask                             (0x00003F00)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_clamp_dben_mask                          (0x00000080)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_clamp_cnt_unit_mask                      (0x00000040)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_clamp_clksrc_mask                        (0x00000020)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_clamp_en_mask                            (0x00000010)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_yclamp_hs_inv_mask                       (0x00000008)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_nyclamp_hs_inv_mask                      (0x00000004)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_clamp_test_en_mask                       (0x00000002)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_adc_hs_syncedge_mask                     (0x00000001)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_dummy_13_8(data)                            (0x00003F00&((data)<<8))
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_clamp_dben(data)                         (0x00000080&((data)<<7))
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_clamp_cnt_unit(data)                     (0x00000040&((data)<<6))
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_clamp_clksrc(data)                       (0x00000020&((data)<<5))
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_clamp_en(data)                           (0x00000010&((data)<<4))
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_yclamp_hs_inv(data)                      (0x00000008&((data)<<3))
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_nyclamp_hs_inv(data)                     (0x00000004&((data)<<2))
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_clamp_test_en(data)                      (0x00000002&((data)<<1))
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_s1_adc_hs_syncedge(data)                    (0x00000001&(data))
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_get_dummy_13_8(data)                        ((0x00003F00&(data))>>8)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_get_s1_clamp_dben(data)                     ((0x00000080&(data))>>7)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_get_s1_clamp_cnt_unit(data)                 ((0x00000040&(data))>>6)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_get_s1_clamp_clksrc(data)                   ((0x00000020&(data))>>5)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_get_s1_clamp_en(data)                       ((0x00000010&(data))>>4)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_get_s1_yclamp_hs_inv(data)                  ((0x00000008&(data))>>3)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_get_s1_nyclamp_hs_inv(data)                 ((0x00000004&(data))>>2)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_get_s1_clamp_test_en(data)                  ((0x00000002&(data))>>1)
#define  SYNC_PROCESSOR_SP1_CLMPCTRL_get_s1_adc_hs_syncedge(data)                (0x00000001&(data))

#define  SYNC_PROCESSOR_SP1_CLMP                                                0x1802103C
#define  SYNC_PROCESSOR_SP1_CLMP_reg_addr                                        "0xB802103C"
#define  SYNC_PROCESSOR_SP1_CLMP_reg                                             0xB802103C
#define  SYNC_PROCESSOR_SP1_CLMP_inst_addr                                       "0x0008"
#define  set_SYNC_PROCESSOR_SP1_CLMP_reg(data)                                   (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_CLMP_reg)=data)
#define  get_SYNC_PROCESSOR_SP1_CLMP_reg                                         (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_CLMP_reg))
#define  SYNC_PROCESSOR_SP1_CLMP_s1_yclamp_sta_shift                             (24)
#define  SYNC_PROCESSOR_SP1_CLMP_s1_yclamp_end_shift                             (16)
#define  SYNC_PROCESSOR_SP1_CLMP_s1_nyclamp_sta_shift                            (8)
#define  SYNC_PROCESSOR_SP1_CLMP_s1_nyclamp_end_shift                            (0)
#define  SYNC_PROCESSOR_SP1_CLMP_s1_yclamp_sta_mask                              (0xFF000000)
#define  SYNC_PROCESSOR_SP1_CLMP_s1_yclamp_end_mask                              (0x00FF0000)
#define  SYNC_PROCESSOR_SP1_CLMP_s1_nyclamp_sta_mask                             (0x0000FF00)
#define  SYNC_PROCESSOR_SP1_CLMP_s1_nyclamp_end_mask                             (0x000000FF)
#define  SYNC_PROCESSOR_SP1_CLMP_s1_yclamp_sta(data)                             (0xFF000000&((data)<<24))
#define  SYNC_PROCESSOR_SP1_CLMP_s1_yclamp_end(data)                             (0x00FF0000&((data)<<16))
#define  SYNC_PROCESSOR_SP1_CLMP_s1_nyclamp_sta(data)                            (0x0000FF00&((data)<<8))
#define  SYNC_PROCESSOR_SP1_CLMP_s1_nyclamp_end(data)                            (0x000000FF&(data))
#define  SYNC_PROCESSOR_SP1_CLMP_get_s1_yclamp_sta(data)                         ((0xFF000000&(data))>>24)
#define  SYNC_PROCESSOR_SP1_CLMP_get_s1_yclamp_end(data)                         ((0x00FF0000&(data))>>16)
#define  SYNC_PROCESSOR_SP1_CLMP_get_s1_nyclamp_sta(data)                        ((0x0000FF00&(data))>>8)
#define  SYNC_PROCESSOR_SP1_CLMP_get_s1_nyclamp_end(data)                        (0x000000FF&(data))

#define  SYNC_PROCESSOR_SP1_CLMPMSK                                             0x18021040
#define  SYNC_PROCESSOR_SP1_CLMPMSK_reg_addr                                     "0xB8021040"
#define  SYNC_PROCESSOR_SP1_CLMPMSK_reg                                          0xB8021040
#define  SYNC_PROCESSOR_SP1_CLMPMSK_inst_addr                                    "0x0009"
#define  set_SYNC_PROCESSOR_SP1_CLMPMSK_reg(data)                                (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_CLMPMSK_reg)=data)
#define  get_SYNC_PROCESSOR_SP1_CLMPMSK_reg                                      (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_CLMPMSK_reg))
#define  SYNC_PROCESSOR_SP1_CLMPMSK_s1_mask_clamp_en_shift                       (15)
#define  SYNC_PROCESSOR_SP1_CLMPMSK_s1_cap_miss_flag2hswin_enable_shift          (14)
#define  SYNC_PROCESSOR_SP1_CLMPMSK_s1_mask_front_shift                          (8)
#define  SYNC_PROCESSOR_SP1_CLMPMSK_dummy_7_6_shift                              (6)
#define  SYNC_PROCESSOR_SP1_CLMPMSK_s1_mask_back_shift                           (0)
#define  SYNC_PROCESSOR_SP1_CLMPMSK_s1_mask_clamp_en_mask                        (0x00008000)
#define  SYNC_PROCESSOR_SP1_CLMPMSK_s1_cap_miss_flag2hswin_enable_mask           (0x00004000)
#define  SYNC_PROCESSOR_SP1_CLMPMSK_s1_mask_front_mask                           (0x00003F00)
#define  SYNC_PROCESSOR_SP1_CLMPMSK_dummy_7_6_mask                               (0x000000C0)
#define  SYNC_PROCESSOR_SP1_CLMPMSK_s1_mask_back_mask                            (0x0000003F)
#define  SYNC_PROCESSOR_SP1_CLMPMSK_s1_mask_clamp_en(data)                       (0x00008000&((data)<<15))
#define  SYNC_PROCESSOR_SP1_CLMPMSK_s1_cap_miss_flag2hswin_enable(data)          (0x00004000&((data)<<14))
#define  SYNC_PROCESSOR_SP1_CLMPMSK_s1_mask_front(data)                          (0x00003F00&((data)<<8))
#define  SYNC_PROCESSOR_SP1_CLMPMSK_dummy_7_6(data)                              (0x000000C0&((data)<<6))
#define  SYNC_PROCESSOR_SP1_CLMPMSK_s1_mask_back(data)                           (0x0000003F&(data))
#define  SYNC_PROCESSOR_SP1_CLMPMSK_get_s1_mask_clamp_en(data)                   ((0x00008000&(data))>>15)
#define  SYNC_PROCESSOR_SP1_CLMPMSK_get_s1_cap_miss_flag2hswin_enable(data)      ((0x00004000&(data))>>14)
#define  SYNC_PROCESSOR_SP1_CLMPMSK_get_s1_mask_front(data)                      ((0x00003F00&(data))>>8)
#define  SYNC_PROCESSOR_SP1_CLMPMSK_get_dummy_7_6(data)                          ((0x000000C0&(data))>>6)
#define  SYNC_PROCESSOR_SP1_CLMPMSK_get_s1_mask_back(data)                       (0x0000003F&(data))

#define  SYNC_PROCESSOR_SP1_CoastFtBk                                           0x18021044
#define  SYNC_PROCESSOR_SP1_CoastFtBk_reg_addr                                   "0xB8021044"
#define  SYNC_PROCESSOR_SP1_CoastFtBk_reg                                        0xB8021044
#define  SYNC_PROCESSOR_SP1_CoastFtBk_inst_addr                                  "0x000A"
#define  set_SYNC_PROCESSOR_SP1_CoastFtBk_reg(data)                              (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_CoastFtBk_reg)=data)
#define  get_SYNC_PROCESSOR_SP1_CoastFtBk_reg                                    (*((volatile unsigned int*)SYNC_PROCESSOR_SP1_CoastFtBk_reg))
#define  SYNC_PROCESSOR_SP1_CoastFtBk_s1_coast_win2_sta_shift                    (21)
#define  SYNC_PROCESSOR_SP1_CoastFtBk_s1_coast_win2_end_shift                    (10)
#define  SYNC_PROCESSOR_SP1_CoastFtBk_dummy_9_8_shift                            (8)
#define  SYNC_PROCESSOR_SP1_CoastFtBk_s1_coast_front_shift                       (4)
#define  SYNC_PROCESSOR_SP1_CoastFtBk_s1_coast_back_shift                        (0)
#define  SYNC_PROCESSOR_SP1_CoastFtBk_s1_coast_win2_sta_mask                     (0xFFE00000)
#define  SYNC_PROCESSOR_SP1_CoastFtBk_s1_coast_win2_end_mask                     (0x001FFC00)
#define  SYNC_PROCESSOR_SP1_CoastFtBk_dummy_9_8_mask                             (0x00000300)
#define  SYNC_PROCESSOR_SP1_CoastFtBk_s1_coast_front_mask                        (0x000000F0)
#define  SYNC_PROCESSOR_SP1_CoastFtBk_s1_coast_back_mask                         (0x0000000F)
#define  SYNC_PROCESSOR_SP1_CoastFtBk_s1_coast_win2_sta(data)                    (0xFFE00000&((data)<<21))
#define  SYNC_PROCESSOR_SP1_CoastFtBk_s1_coast_win2_end(data)                    (0x001FFC00&((data)<<10))
#define  SYNC_PROCESSOR_SP1_CoastFtBk_dummy_9_8(data)                            (0x00000300&((data)<<8))
#define  SYNC_PROCESSOR_SP1_CoastFtBk_s1_coast_front(data)                       (0x000000F0&((data)<<4))
#define  SYNC_PROCESSOR_SP1_CoastFtBk_s1_coast_back(data)                        (0x0000000F&(data))
#define  SYNC_PROCESSOR_SP1_CoastFtBk_get_s1_coast_win2_sta(data)                ((0xFFE00000&(data))>>21)
#define  SYNC_PROCESSOR_SP1_CoastFtBk_get_s1_coast_win2_end(data)                ((0x001FFC00&(data))>>10)
#define  SYNC_PROCESSOR_SP1_CoastFtBk_get_dummy_9_8(data)                        ((0x00000300&(data))>>8)
#define  SYNC_PROCESSOR_SP1_CoastFtBk_get_s1_coast_front(data)                   ((0x000000F0&(data))>>4)
#define  SYNC_PROCESSOR_SP1_CoastFtBk_get_s1_coast_back(data)                    (0x0000000F&(data))

#define  SYNC_PROCESSOR_Ef_CTRL                                                 0x18021058
#define  SYNC_PROCESSOR_Ef_CTRL_reg_addr                                         "0xB8021058"
#define  SYNC_PROCESSOR_Ef_CTRL_reg                                              0xB8021058
#define  SYNC_PROCESSOR_Ef_CTRL_inst_addr                                        "0x000B"
#define  set_SYNC_PROCESSOR_Ef_CTRL_reg(data)                                    (*((volatile unsigned int*)SYNC_PROCESSOR_Ef_CTRL_reg)=data)
#define  get_SYNC_PROCESSOR_Ef_CTRL_reg                                          (*((volatile unsigned int*)SYNC_PROCESSOR_Ef_CTRL_reg))
#define  SYNC_PROCESSOR_Ef_CTRL_dummy_15_13_shift                                (13)
#define  SYNC_PROCESSOR_Ef_CTRL_s1_deb_num_efhs_shift                            (8)
#define  SYNC_PROCESSOR_Ef_CTRL_s1_skip_line_len_shift                           (4)
#define  SYNC_PROCESSOR_Ef_CTRL_dummy_3_2_shift                                  (2)
#define  SYNC_PROCESSOR_Ef_CTRL_s1_ef_occur_shift                                (1)
#define  SYNC_PROCESSOR_Ef_CTRL_s1_ef_enable_shift                               (0)
#define  SYNC_PROCESSOR_Ef_CTRL_dummy_15_13_mask                                 (0x0000E000)
#define  SYNC_PROCESSOR_Ef_CTRL_s1_deb_num_efhs_mask                             (0x00001F00)
#define  SYNC_PROCESSOR_Ef_CTRL_s1_skip_line_len_mask                            (0x000000F0)
#define  SYNC_PROCESSOR_Ef_CTRL_dummy_3_2_mask                                   (0x0000000C)
#define  SYNC_PROCESSOR_Ef_CTRL_s1_ef_occur_mask                                 (0x00000002)
#define  SYNC_PROCESSOR_Ef_CTRL_s1_ef_enable_mask                                (0x00000001)
#define  SYNC_PROCESSOR_Ef_CTRL_dummy_15_13(data)                                (0x0000E000&((data)<<13))
#define  SYNC_PROCESSOR_Ef_CTRL_s1_deb_num_efhs(data)                            (0x00001F00&((data)<<8))
#define  SYNC_PROCESSOR_Ef_CTRL_s1_skip_line_len(data)                           (0x000000F0&((data)<<4))
#define  SYNC_PROCESSOR_Ef_CTRL_dummy_3_2(data)                                  (0x0000000C&((data)<<2))
#define  SYNC_PROCESSOR_Ef_CTRL_s1_ef_occur(data)                                (0x00000002&((data)<<1))
#define  SYNC_PROCESSOR_Ef_CTRL_s1_ef_enable(data)                               (0x00000001&(data))
#define  SYNC_PROCESSOR_Ef_CTRL_get_dummy_15_13(data)                            ((0x0000E000&(data))>>13)
#define  SYNC_PROCESSOR_Ef_CTRL_get_s1_deb_num_efhs(data)                        ((0x00001F00&(data))>>8)
#define  SYNC_PROCESSOR_Ef_CTRL_get_s1_skip_line_len(data)                       ((0x000000F0&(data))>>4)
#define  SYNC_PROCESSOR_Ef_CTRL_get_dummy_3_2(data)                              ((0x0000000C&(data))>>2)
#define  SYNC_PROCESSOR_Ef_CTRL_get_s1_ef_occur(data)                            ((0x00000002&(data))>>1)
#define  SYNC_PROCESSOR_Ef_CTRL_get_s1_ef_enable(data)                           (0x00000001&(data))

#define  SYNC_PROCESSOR_Ef_fld_Pos                                              0x1802105C
#define  SYNC_PROCESSOR_Ef_fld_Pos_reg_addr                                      "0xB802105C"
#define  SYNC_PROCESSOR_Ef_fld_Pos_reg                                           0xB802105C
#define  SYNC_PROCESSOR_Ef_fld_Pos_inst_addr                                     "0x000C"
#define  set_SYNC_PROCESSOR_Ef_fld_Pos_reg(data)                                 (*((volatile unsigned int*)SYNC_PROCESSOR_Ef_fld_Pos_reg)=data)
#define  get_SYNC_PROCESSOR_Ef_fld_Pos_reg                                       (*((volatile unsigned int*)SYNC_PROCESSOR_Ef_fld_Pos_reg))
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_miss_flag2dds_enable_shift                 (31)
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_o_ef_str_shift                             (24)
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_o_ef_rdy_shift                             (23)
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_o_ef_end_shift                             (16)
#define  SYNC_PROCESSOR_Ef_fld_Pos_dummy_15_shift                                (15)
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_e_ef_str_shift                             (8)
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_e_ef_rdy_shift                             (7)
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_e_ef_end_shift                             (0)
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_miss_flag2dds_enable_mask                  (0x80000000)
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_o_ef_str_mask                              (0x7F000000)
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_o_ef_rdy_mask                              (0x00800000)
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_o_ef_end_mask                              (0x007F0000)
#define  SYNC_PROCESSOR_Ef_fld_Pos_dummy_15_mask                                 (0x00008000)
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_e_ef_str_mask                              (0x00007F00)
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_e_ef_rdy_mask                              (0x00000080)
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_e_ef_end_mask                              (0x0000007F)
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_miss_flag2dds_enable(data)                 (0x80000000&((data)<<31))
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_o_ef_str(data)                             (0x7F000000&((data)<<24))
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_o_ef_rdy(data)                             (0x00800000&((data)<<23))
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_o_ef_end(data)                             (0x007F0000&((data)<<16))
#define  SYNC_PROCESSOR_Ef_fld_Pos_dummy_15(data)                                (0x00008000&((data)<<15))
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_e_ef_str(data)                             (0x00007F00&((data)<<8))
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_e_ef_rdy(data)                             (0x00000080&((data)<<7))
#define  SYNC_PROCESSOR_Ef_fld_Pos_s1_e_ef_end(data)                             (0x0000007F&(data))
#define  SYNC_PROCESSOR_Ef_fld_Pos_get_s1_miss_flag2dds_enable(data)             ((0x80000000&(data))>>31)
#define  SYNC_PROCESSOR_Ef_fld_Pos_get_s1_o_ef_str(data)                         ((0x7F000000&(data))>>24)
#define  SYNC_PROCESSOR_Ef_fld_Pos_get_s1_o_ef_rdy(data)                         ((0x00800000&(data))>>23)
#define  SYNC_PROCESSOR_Ef_fld_Pos_get_s1_o_ef_end(data)                         ((0x007F0000&(data))>>16)
#define  SYNC_PROCESSOR_Ef_fld_Pos_get_dummy_15(data)                            ((0x00008000&(data))>>15)
#define  SYNC_PROCESSOR_Ef_fld_Pos_get_s1_e_ef_str(data)                         ((0x00007F00&(data))>>8)
#define  SYNC_PROCESSOR_Ef_fld_Pos_get_s1_e_ef_rdy(data)                         ((0x00000080&(data))>>7)
#define  SYNC_PROCESSOR_Ef_fld_Pos_get_s1_e_ef_end(data)                         (0x0000007F&(data))

#define  SYNC_PROCESSOR_SP_ADCClampSel0                                         0x18021064
#define  SYNC_PROCESSOR_SP_ADCClampSel0_reg_addr                                 "0xB8021064"
#define  SYNC_PROCESSOR_SP_ADCClampSel0_reg                                      0xB8021064
#define  SYNC_PROCESSOR_SP_ADCClampSel0_inst_addr                                "0x000D"
#define  set_SYNC_PROCESSOR_SP_ADCClampSel0_reg(data)                            (*((volatile unsigned int*)SYNC_PROCESSOR_SP_ADCClampSel0_reg)=data)
#define  get_SYNC_PROCESSOR_SP_ADCClampSel0_reg                                  (*((volatile unsigned int*)SYNC_PROCESSOR_SP_ADCClampSel0_reg))
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin32_clamp_sel_shift                (22)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin31_clamp_sel_shift                (20)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin30_clamp_sel_shift                (18)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin22_clamp_sel_shift                (16)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin21_clamp_sel_shift                (14)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin20_clamp_sel_shift                (12)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin12_clamp_sel_shift                (10)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin11_clamp_sel_shift                (8)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin10_clamp_sel_shift                (6)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin02_clamp_sel_shift                (4)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin01_clamp_sel_shift                (2)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin00_clamp_sel_shift                (0)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin32_clamp_sel_mask                 (0x00C00000)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin31_clamp_sel_mask                 (0x00300000)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin30_clamp_sel_mask                 (0x000C0000)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin22_clamp_sel_mask                 (0x00030000)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin21_clamp_sel_mask                 (0x0000C000)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin20_clamp_sel_mask                 (0x00003000)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin12_clamp_sel_mask                 (0x00000C00)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin11_clamp_sel_mask                 (0x00000300)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin10_clamp_sel_mask                 (0x000000C0)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin02_clamp_sel_mask                 (0x00000030)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin01_clamp_sel_mask                 (0x0000000C)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin00_clamp_sel_mask                 (0x00000003)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin32_clamp_sel(data)                (0x00C00000&((data)<<22))
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin31_clamp_sel(data)                (0x00300000&((data)<<20))
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin30_clamp_sel(data)                (0x000C0000&((data)<<18))
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin22_clamp_sel(data)                (0x00030000&((data)<<16))
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin21_clamp_sel(data)                (0x0000C000&((data)<<14))
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin20_clamp_sel(data)                (0x00003000&((data)<<12))
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin12_clamp_sel(data)                (0x00000C00&((data)<<10))
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin11_clamp_sel(data)                (0x00000300&((data)<<8))
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin10_clamp_sel(data)                (0x000000C0&((data)<<6))
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin02_clamp_sel(data)                (0x00000030&((data)<<4))
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin01_clamp_sel(data)                (0x0000000C&((data)<<2))
#define  SYNC_PROCESSOR_SP_ADCClampSel0_adc_vin00_clamp_sel(data)                (0x00000003&(data))
#define  SYNC_PROCESSOR_SP_ADCClampSel0_get_adc_vin32_clamp_sel(data)            ((0x00C00000&(data))>>22)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_get_adc_vin31_clamp_sel(data)            ((0x00300000&(data))>>20)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_get_adc_vin30_clamp_sel(data)            ((0x000C0000&(data))>>18)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_get_adc_vin22_clamp_sel(data)            ((0x00030000&(data))>>16)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_get_adc_vin21_clamp_sel(data)            ((0x0000C000&(data))>>14)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_get_adc_vin20_clamp_sel(data)            ((0x00003000&(data))>>12)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_get_adc_vin12_clamp_sel(data)            ((0x00000C00&(data))>>10)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_get_adc_vin11_clamp_sel(data)            ((0x00000300&(data))>>8)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_get_adc_vin10_clamp_sel(data)            ((0x000000C0&(data))>>6)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_get_adc_vin02_clamp_sel(data)            ((0x00000030&(data))>>4)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_get_adc_vin01_clamp_sel(data)            ((0x0000000C&(data))>>2)
#define  SYNC_PROCESSOR_SP_ADCClampSel0_get_adc_vin00_clamp_sel(data)            (0x00000003&(data))

#define  SYNC_PROCESSOR_SP_ADCClampSel1                                         0x18021068
#define  SYNC_PROCESSOR_SP_ADCClampSel1_reg_addr                                 "0xB8021068"
#define  SYNC_PROCESSOR_SP_ADCClampSel1_reg                                      0xB8021068
#define  SYNC_PROCESSOR_SP_ADCClampSel1_inst_addr                                "0x000E"
#define  set_SYNC_PROCESSOR_SP_ADCClampSel1_reg(data)                            (*((volatile unsigned int*)SYNC_PROCESSOR_SP_ADCClampSel1_reg)=data)
#define  get_SYNC_PROCESSOR_SP_ADCClampSel1_reg                                  (*((volatile unsigned int*)SYNC_PROCESSOR_SP_ADCClampSel1_reg))
#define  SYNC_PROCESSOR_SP_ADCClampSel1_dummy_4_shift                            (4)
#define  SYNC_PROCESSOR_SP_ADCClampSel1_sync_test_sel_shift                      (0)
#define  SYNC_PROCESSOR_SP_ADCClampSel1_dummy_4_mask                             (0x00000010)
#define  SYNC_PROCESSOR_SP_ADCClampSel1_sync_test_sel_mask                       (0x0000000F)
#define  SYNC_PROCESSOR_SP_ADCClampSel1_dummy_4(data)                            (0x00000010&((data)<<4))
#define  SYNC_PROCESSOR_SP_ADCClampSel1_sync_test_sel(data)                      (0x0000000F&(data))
#define  SYNC_PROCESSOR_SP_ADCClampSel1_get_dummy_4(data)                        ((0x00000010&(data))>>4)
#define  SYNC_PROCESSOR_SP_ADCClampSel1_get_sync_test_sel(data)                  (0x0000000F&(data))

#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL                                          0x1802106C
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_reg_addr                                  "0xB802106C"
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_reg                                       0xB802106C
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_inst_addr                                 "0x000F"
#define  set_SYNC_PROCESSOR_SP_ADC_OUT_SEL_reg(data)                             (*((volatile unsigned int*)SYNC_PROCESSOR_SP_ADC_OUT_SEL_reg)=data)
#define  get_SYNC_PROCESSOR_SP_ADC_OUT_SEL_reg                                   (*((volatile unsigned int*)SYNC_PROCESSOR_SP_ADC_OUT_SEL_reg))
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_force_rgb_from_adc_shift                  (9)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_syncedge_rgb_shift                        (8)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_syncedge_hs_shift                         (7)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_syncedge_vs_shift                         (6)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_test_sel_rgb_shift                        (4)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_test_sel_hs_shift                         (3)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_test_sel_vs_shift                         (2)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_sync_out_source_shift                     (0)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_force_rgb_from_adc_mask                   (0x00000200)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_syncedge_rgb_mask                         (0x00000100)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_syncedge_hs_mask                          (0x00000080)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_syncedge_vs_mask                          (0x00000040)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_test_sel_rgb_mask                         (0x00000030)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_test_sel_hs_mask                          (0x00000008)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_test_sel_vs_mask                          (0x00000004)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_sync_out_source_mask                      (0x00000003)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_force_rgb_from_adc(data)                  (0x00000200&((data)<<9))
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_syncedge_rgb(data)                        (0x00000100&((data)<<8))
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_syncedge_hs(data)                         (0x00000080&((data)<<7))
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_syncedge_vs(data)                         (0x00000040&((data)<<6))
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_test_sel_rgb(data)                        (0x00000030&((data)<<4))
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_test_sel_hs(data)                         (0x00000008&((data)<<3))
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_test_sel_vs(data)                         (0x00000004&((data)<<2))
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_sync_out_source(data)                     (0x00000003&(data))
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_get_force_rgb_from_adc(data)              ((0x00000200&(data))>>9)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_get_syncedge_rgb(data)                    ((0x00000100&(data))>>8)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_get_syncedge_hs(data)                     ((0x00000080&(data))>>7)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_get_syncedge_vs(data)                     ((0x00000040&(data))>>6)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_get_test_sel_rgb(data)                    ((0x00000030&(data))>>4)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_get_test_sel_hs(data)                     ((0x00000008&(data))>>3)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_get_test_sel_vs(data)                     ((0x00000004&(data))>>2)
#define  SYNC_PROCESSOR_SP_ADC_OUT_SEL_get_sync_out_source(data)                 (0x00000003&(data))

#define  SYNC_PROCESSOR_SP_PAD_STATUS                                           0x18021070
#define  SYNC_PROCESSOR_SP_PAD_STATUS_reg_addr                                   "0xB8021070"
#define  SYNC_PROCESSOR_SP_PAD_STATUS_reg                                        0xB8021070
#define  SYNC_PROCESSOR_SP_PAD_STATUS_inst_addr                                  "0x0010"
#define  set_SYNC_PROCESSOR_SP_PAD_STATUS_reg(data)                              (*((volatile unsigned int*)SYNC_PROCESSOR_SP_PAD_STATUS_reg)=data)
#define  get_SYNC_PROCESSOR_SP_PAD_STATUS_reg                                    (*((volatile unsigned int*)SYNC_PROCESSOR_SP_PAD_STATUS_reg))
#define  SYNC_PROCESSOR_SP_PAD_STATUS_dummy_7_6_shift                            (6)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_tog_adc_sog0_shift                         (5)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_tog_adc_sog1_shift                         (4)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_tog_soy_vd_shift                           (3)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_tog_pad_avs1_shift                         (1)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_tog_pad_ahs1_shift                         (0)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_dummy_7_6_mask                             (0x000000C0)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_tog_adc_sog0_mask                          (0x00000020)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_tog_adc_sog1_mask                          (0x00000010)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_tog_soy_vd_mask                            (0x00000008)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_tog_pad_avs1_mask                          (0x00000002)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_tog_pad_ahs1_mask                          (0x00000001)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_dummy_7_6(data)                            (0x000000C0&((data)<<6))
#define  SYNC_PROCESSOR_SP_PAD_STATUS_tog_adc_sog0(data)                         (0x00000020&((data)<<5))
#define  SYNC_PROCESSOR_SP_PAD_STATUS_tog_adc_sog1(data)                         (0x00000010&((data)<<4))
#define  SYNC_PROCESSOR_SP_PAD_STATUS_tog_soy_vd(data)                           (0x00000008&((data)<<3))
#define  SYNC_PROCESSOR_SP_PAD_STATUS_tog_pad_avs1(data)                         (0x00000002&((data)<<1))
#define  SYNC_PROCESSOR_SP_PAD_STATUS_tog_pad_ahs1(data)                         (0x00000001&(data))
#define  SYNC_PROCESSOR_SP_PAD_STATUS_get_dummy_7_6(data)                        ((0x000000C0&(data))>>6)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_get_tog_adc_sog0(data)                     ((0x00000020&(data))>>5)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_get_tog_adc_sog1(data)                     ((0x00000010&(data))>>4)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_get_tog_soy_vd(data)                       ((0x00000008&(data))>>3)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_get_tog_pad_avs1(data)                     ((0x00000002&(data))>>1)
#define  SYNC_PROCESSOR_SP_PAD_STATUS_get_tog_pad_ahs1(data)                     (0x00000001&(data))

#define  SYNC_PROCESSOR_DEGLITCH                                                0x18021074
#define  SYNC_PROCESSOR_DEGLITCH_reg_addr                                        "0xB8021074"
#define  SYNC_PROCESSOR_DEGLITCH_reg                                             0xB8021074
#define  SYNC_PROCESSOR_DEGLITCH_inst_addr                                       "0x0011"
#define  set_SYNC_PROCESSOR_DEGLITCH_reg(data)                                   (*((volatile unsigned int*)SYNC_PROCESSOR_DEGLITCH_reg)=data)
#define  get_SYNC_PROCESSOR_DEGLITCH_reg                                         (*((volatile unsigned int*)SYNC_PROCESSOR_DEGLITCH_reg))
#define  SYNC_PROCESSOR_DEGLITCH_glitch_det_rst_shift                            (25)
#define  SYNC_PROCESSOR_DEGLITCH_glitch_det_shift                                (24)
#define  SYNC_PROCESSOR_DEGLITCH_pe_delay_no_shift                               (16)
#define  SYNC_PROCESSOR_DEGLITCH_pe_delay_auto_shift                             (9)
#define  SYNC_PROCESSOR_DEGLITCH_hs_deglitch_en_shift                            (8)
#define  SYNC_PROCESSOR_DEGLITCH_hs_deglitch_num_shift                           (0)
#define  SYNC_PROCESSOR_DEGLITCH_glitch_det_rst_mask                             (0x02000000)
#define  SYNC_PROCESSOR_DEGLITCH_glitch_det_mask                                 (0x01000000)
#define  SYNC_PROCESSOR_DEGLITCH_pe_delay_no_mask                                (0x000F0000)
#define  SYNC_PROCESSOR_DEGLITCH_pe_delay_auto_mask                              (0x00000200)
#define  SYNC_PROCESSOR_DEGLITCH_hs_deglitch_en_mask                             (0x00000100)
#define  SYNC_PROCESSOR_DEGLITCH_hs_deglitch_num_mask                            (0x000000FF)
#define  SYNC_PROCESSOR_DEGLITCH_glitch_det_rst(data)                            (0x02000000&((data)<<25))
#define  SYNC_PROCESSOR_DEGLITCH_glitch_det(data)                                (0x01000000&((data)<<24))
#define  SYNC_PROCESSOR_DEGLITCH_pe_delay_no(data)                               (0x000F0000&((data)<<16))
#define  SYNC_PROCESSOR_DEGLITCH_pe_delay_auto(data)                             (0x00000200&((data)<<9))
#define  SYNC_PROCESSOR_DEGLITCH_hs_deglitch_en(data)                            (0x00000100&((data)<<8))
#define  SYNC_PROCESSOR_DEGLITCH_hs_deglitch_num(data)                           (0x000000FF&(data))
#define  SYNC_PROCESSOR_DEGLITCH_get_glitch_det_rst(data)                        ((0x02000000&(data))>>25)
#define  SYNC_PROCESSOR_DEGLITCH_get_glitch_det(data)                            ((0x01000000&(data))>>24)
#define  SYNC_PROCESSOR_DEGLITCH_get_pe_delay_no(data)                           ((0x000F0000&(data))>>16)
#define  SYNC_PROCESSOR_DEGLITCH_get_pe_delay_auto(data)                         ((0x00000200&(data))>>9)
#define  SYNC_PROCESSOR_DEGLITCH_get_hs_deglitch_en(data)                        ((0x00000100&(data))>>8)
#define  SYNC_PROCESSOR_DEGLITCH_get_hs_deglitch_num(data)                       (0x000000FF&(data))

#define  SYNC_PROCESSOR_CTS_CTRL                                                0x18021078
#define  SYNC_PROCESSOR_CTS_CTRL_reg_addr                                        "0xB8021078"
#define  SYNC_PROCESSOR_CTS_CTRL_reg                                             0xB8021078
#define  SYNC_PROCESSOR_CTS_CTRL_inst_addr                                       "0x0012"
#define  set_SYNC_PROCESSOR_CTS_CTRL_reg(data)                                   (*((volatile unsigned int*)SYNC_PROCESSOR_CTS_CTRL_reg)=data)
#define  get_SYNC_PROCESSOR_CTS_CTRL_reg                                         (*((volatile unsigned int*)SYNC_PROCESSOR_CTS_CTRL_reg))
#define  SYNC_PROCESSOR_CTS_CTRL_force_ctsfifo_rstn_shift                        (2)
#define  SYNC_PROCESSOR_CTS_CTRL_en_ctsfifo_vsrst_shift                          (1)
#define  SYNC_PROCESSOR_CTS_CTRL_en_ctsfifo_bypass_shift                         (0)
#define  SYNC_PROCESSOR_CTS_CTRL_force_ctsfifo_rstn_mask                         (0x00000004)
#define  SYNC_PROCESSOR_CTS_CTRL_en_ctsfifo_vsrst_mask                           (0x00000002)
#define  SYNC_PROCESSOR_CTS_CTRL_en_ctsfifo_bypass_mask                          (0x00000001)
#define  SYNC_PROCESSOR_CTS_CTRL_force_ctsfifo_rstn(data)                        (0x00000004&((data)<<2))
#define  SYNC_PROCESSOR_CTS_CTRL_en_ctsfifo_vsrst(data)                          (0x00000002&((data)<<1))
#define  SYNC_PROCESSOR_CTS_CTRL_en_ctsfifo_bypass(data)                         (0x00000001&(data))
#define  SYNC_PROCESSOR_CTS_CTRL_get_force_ctsfifo_rstn(data)                    ((0x00000004&(data))>>2)
#define  SYNC_PROCESSOR_CTS_CTRL_get_en_ctsfifo_vsrst(data)                      ((0x00000002&(data))>>1)
#define  SYNC_PROCESSOR_CTS_CTRL_get_en_ctsfifo_bypass(data)                     (0x00000001&(data))

#define  SYNC_PROCESSOR_updw_global_CTRL1                                       0x1802107C
#define  SYNC_PROCESSOR_updw_global_CTRL1_reg_addr                               "0xB802107C"
#define  SYNC_PROCESSOR_updw_global_CTRL1_reg                                    0xB802107C
#define  SYNC_PROCESSOR_updw_global_CTRL1_inst_addr                              "0x0013"
#define  set_SYNC_PROCESSOR_updw_global_CTRL1_reg(data)                          (*((volatile unsigned int*)SYNC_PROCESSOR_updw_global_CTRL1_reg)=data)
#define  get_SYNC_PROCESSOR_updw_global_CTRL1_reg                                (*((volatile unsigned int*)SYNC_PROCESSOR_updw_global_CTRL1_reg))
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_clamp_en_shift                    (31)
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_en_r_shift                        (30)
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_en_g_shift                        (29)
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_en_b_shift                        (28)
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_ny_mode_r_shift                   (27)
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_ny_mode_g_shift                   (26)
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_ny_mode_b_shift                   (25)
#define  SYNC_PROCESSOR_updw_global_CTRL1_hs_sync_edge_sel_shift                 (24)
#define  SYNC_PROCESSOR_updw_global_CTRL1_lock_range_y_shift                     (21)
#define  SYNC_PROCESSOR_updw_global_CTRL1_soy_stable_condition_shift             (17)
#define  SYNC_PROCESSOR_updw_global_CTRL1_dummy_16_shift                         (16)
#define  SYNC_PROCESSOR_updw_global_CTRL1_meas_point_num_shift                   (14)
#define  SYNC_PROCESSOR_updw_global_CTRL1_dummy_0_shift                          (0)
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_clamp_en_mask                     (0x80000000)
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_en_r_mask                         (0x40000000)
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_en_g_mask                         (0x20000000)
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_en_b_mask                         (0x10000000)
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_ny_mode_r_mask                    (0x08000000)
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_ny_mode_g_mask                    (0x04000000)
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_ny_mode_b_mask                    (0x02000000)
#define  SYNC_PROCESSOR_updw_global_CTRL1_hs_sync_edge_sel_mask                  (0x01000000)
#define  SYNC_PROCESSOR_updw_global_CTRL1_lock_range_y_mask                      (0x00E00000)
#define  SYNC_PROCESSOR_updw_global_CTRL1_soy_stable_condition_mask              (0x001E0000)
#define  SYNC_PROCESSOR_updw_global_CTRL1_dummy_16_mask                          (0x00010000)
#define  SYNC_PROCESSOR_updw_global_CTRL1_meas_point_num_mask                    (0x0000C000)
#define  SYNC_PROCESSOR_updw_global_CTRL1_dummy_0_mask                           (0x00000001)
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_clamp_en(data)                    (0x80000000&((data)<<31))
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_en_r(data)                        (0x40000000&((data)<<30))
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_en_g(data)                        (0x20000000&((data)<<29))
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_en_b(data)                        (0x10000000&((data)<<28))
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_ny_mode_r(data)                   (0x08000000&((data)<<27))
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_ny_mode_g(data)                   (0x04000000&((data)<<26))
#define  SYNC_PROCESSOR_updw_global_CTRL1_updw_ny_mode_b(data)                   (0x02000000&((data)<<25))
#define  SYNC_PROCESSOR_updw_global_CTRL1_hs_sync_edge_sel(data)                 (0x01000000&((data)<<24))
#define  SYNC_PROCESSOR_updw_global_CTRL1_lock_range_y(data)                     (0x00E00000&((data)<<21))
#define  SYNC_PROCESSOR_updw_global_CTRL1_soy_stable_condition(data)             (0x001E0000&((data)<<17))
#define  SYNC_PROCESSOR_updw_global_CTRL1_dummy_16(data)                         (0x00010000&((data)<<16))
#define  SYNC_PROCESSOR_updw_global_CTRL1_meas_point_num(data)                   (0x0000C000&((data)<<14))
#define  SYNC_PROCESSOR_updw_global_CTRL1_dummy_0(data)                          (0x00000001&(data))
#define  SYNC_PROCESSOR_updw_global_CTRL1_get_updw_clamp_en(data)                ((0x80000000&(data))>>31)
#define  SYNC_PROCESSOR_updw_global_CTRL1_get_updw_en_r(data)                    ((0x40000000&(data))>>30)
#define  SYNC_PROCESSOR_updw_global_CTRL1_get_updw_en_g(data)                    ((0x20000000&(data))>>29)
#define  SYNC_PROCESSOR_updw_global_CTRL1_get_updw_en_b(data)                    ((0x10000000&(data))>>28)
#define  SYNC_PROCESSOR_updw_global_CTRL1_get_updw_ny_mode_r(data)               ((0x08000000&(data))>>27)
#define  SYNC_PROCESSOR_updw_global_CTRL1_get_updw_ny_mode_g(data)               ((0x04000000&(data))>>26)
#define  SYNC_PROCESSOR_updw_global_CTRL1_get_updw_ny_mode_b(data)               ((0x02000000&(data))>>25)
#define  SYNC_PROCESSOR_updw_global_CTRL1_get_hs_sync_edge_sel(data)             ((0x01000000&(data))>>24)
#define  SYNC_PROCESSOR_updw_global_CTRL1_get_lock_range_y(data)                 ((0x00E00000&(data))>>21)
#define  SYNC_PROCESSOR_updw_global_CTRL1_get_soy_stable_condition(data)         ((0x001E0000&(data))>>17)
#define  SYNC_PROCESSOR_updw_global_CTRL1_get_dummy_16(data)                     ((0x00010000&(data))>>16)
#define  SYNC_PROCESSOR_updw_global_CTRL1_get_meas_point_num(data)               ((0x0000C000&(data))>>14)
#define  SYNC_PROCESSOR_updw_global_CTRL1_get_dummy_0(data)                      (0x00000001&(data))

#define  SYNC_PROCESSOR_updw_global_CTRL2                                       0x18021080
#define  SYNC_PROCESSOR_updw_global_CTRL2_reg_addr                               "0xB8021080"
#define  SYNC_PROCESSOR_updw_global_CTRL2_reg                                    0xB8021080
#define  SYNC_PROCESSOR_updw_global_CTRL2_inst_addr                              "0x0014"
#define  set_SYNC_PROCESSOR_updw_global_CTRL2_reg(data)                          (*((volatile unsigned int*)SYNC_PROCESSOR_updw_global_CTRL2_reg)=data)
#define  get_SYNC_PROCESSOR_updw_global_CTRL2_reg                                (*((volatile unsigned int*)SYNC_PROCESSOR_updw_global_CTRL2_reg))
#define  SYNC_PROCESSOR_updw_global_CTRL2_measure_sta_shift                      (23)
#define  SYNC_PROCESSOR_updw_global_CTRL2_updw_sta_shift                         (14)
#define  SYNC_PROCESSOR_updw_global_CTRL2_updw_end_shift                         (5)
#define  SYNC_PROCESSOR_updw_global_CTRL2_measure_sta_mask                       (0xFF800000)
#define  SYNC_PROCESSOR_updw_global_CTRL2_updw_sta_mask                          (0x007FC000)
#define  SYNC_PROCESSOR_updw_global_CTRL2_updw_end_mask                          (0x00003FE0)
#define  SYNC_PROCESSOR_updw_global_CTRL2_measure_sta(data)                      (0xFF800000&((data)<<23))
#define  SYNC_PROCESSOR_updw_global_CTRL2_updw_sta(data)                         (0x007FC000&((data)<<14))
#define  SYNC_PROCESSOR_updw_global_CTRL2_updw_end(data)                         (0x00003FE0&((data)<<5))
#define  SYNC_PROCESSOR_updw_global_CTRL2_get_measure_sta(data)                  ((0xFF800000&(data))>>23)
#define  SYNC_PROCESSOR_updw_global_CTRL2_get_updw_sta(data)                     ((0x007FC000&(data))>>14)
#define  SYNC_PROCESSOR_updw_global_CTRL2_get_updw_end(data)                     ((0x00003FE0&(data))>>5)

#define  SYNC_PROCESSOR_updw_CTRL1_R                                            0x18021084
#define  SYNC_PROCESSOR_updw_CTRL1_R_reg_addr                                    "0xB8021084"
#define  SYNC_PROCESSOR_updw_CTRL1_R_reg                                         0xB8021084
#define  SYNC_PROCESSOR_updw_CTRL1_R_inst_addr                                   "0x0015"
#define  set_SYNC_PROCESSOR_updw_CTRL1_R_reg(data)                               (*((volatile unsigned int*)SYNC_PROCESSOR_updw_CTRL1_R_reg)=data)
#define  get_SYNC_PROCESSOR_updw_CTRL1_R_reg                                     (*((volatile unsigned int*)SYNC_PROCESSOR_updw_CTRL1_R_reg))
#define  SYNC_PROCESSOR_updw_CTRL1_R_target1_r_shift                             (26)
#define  SYNC_PROCESSOR_updw_CTRL1_R_target2_r_shift                             (16)
#define  SYNC_PROCESSOR_updw_CTRL1_R_charge_mode_sel_r_shift                     (14)
#define  SYNC_PROCESSOR_updw_CTRL1_R_target1_r_mask                              (0xFC000000)
#define  SYNC_PROCESSOR_updw_CTRL1_R_target2_r_mask                              (0x03FF0000)
#define  SYNC_PROCESSOR_updw_CTRL1_R_charge_mode_sel_r_mask                      (0x0000C000)
#define  SYNC_PROCESSOR_updw_CTRL1_R_target1_r(data)                             (0xFC000000&((data)<<26))
#define  SYNC_PROCESSOR_updw_CTRL1_R_target2_r(data)                             (0x03FF0000&((data)<<16))
#define  SYNC_PROCESSOR_updw_CTRL1_R_charge_mode_sel_r(data)                     (0x0000C000&((data)<<14))
#define  SYNC_PROCESSOR_updw_CTRL1_R_get_target1_r(data)                         ((0xFC000000&(data))>>26)
#define  SYNC_PROCESSOR_updw_CTRL1_R_get_target2_r(data)                         ((0x03FF0000&(data))>>16)
#define  SYNC_PROCESSOR_updw_CTRL1_R_get_charge_mode_sel_r(data)                 ((0x0000C000&(data))>>14)

#define  SYNC_PROCESSOR_updw_St1_CTRL_R                                         0x18021088
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_reg_addr                                 "0xB8021088"
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_reg                                      0xB8021088
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_inst_addr                                "0x0016"
#define  set_SYNC_PROCESSOR_updw_St1_CTRL_R_reg(data)                            (*((volatile unsigned int*)SYNC_PROCESSOR_updw_St1_CTRL_R_reg)=data)
#define  get_SYNC_PROCESSOR_updw_St1_CTRL_R_reg                                  (*((volatile unsigned int*)SYNC_PROCESSOR_updw_St1_CTRL_R_reg))
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_sta1_boundary_high_r_shift               (27)
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_sta1_boundary_low_r_shift                (22)
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_sta1_p1_value_r_shift                    (16)
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_sta1_p2_value_r_shift                    (10)
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_sta1_boundary_high_r_mask                (0xF8000000)
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_sta1_boundary_low_r_mask                 (0x07C00000)
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_sta1_p1_value_r_mask                     (0x003F0000)
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_sta1_p2_value_r_mask                     (0x0000FC00)
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_sta1_boundary_high_r(data)               (0xF8000000&((data)<<27))
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_sta1_boundary_low_r(data)                (0x07C00000&((data)<<22))
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_sta1_p1_value_r(data)                    (0x003F0000&((data)<<16))
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_sta1_p2_value_r(data)                    (0x0000FC00&((data)<<10))
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_get_sta1_boundary_high_r(data)           ((0xF8000000&(data))>>27)
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_get_sta1_boundary_low_r(data)            ((0x07C00000&(data))>>22)
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_get_sta1_p1_value_r(data)                ((0x003F0000&(data))>>16)
#define  SYNC_PROCESSOR_updw_St1_CTRL_R_get_sta1_p2_value_r(data)                ((0x0000FC00&(data))>>10)

#define  SYNC_PROCESSOR_updw_St2_CTRL_R                                         0x1802108C
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_reg_addr                                 "0xB802108C"
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_reg                                      0xB802108C
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_inst_addr                                "0x0017"
#define  set_SYNC_PROCESSOR_updw_St2_CTRL_R_reg(data)                            (*((volatile unsigned int*)SYNC_PROCESSOR_updw_St2_CTRL_R_reg)=data)
#define  get_SYNC_PROCESSOR_updw_St2_CTRL_R_reg                                  (*((volatile unsigned int*)SYNC_PROCESSOR_updw_St2_CTRL_R_reg))
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_sta2_boundary_high_r_shift               (26)
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_sta2_boundary_low_r_shift                (20)
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_sta2_p1_value_r_shift                    (16)
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_sta2_p2_value_r_shift                    (11)
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_lock_range_r_shift                       (7)
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_sta2_boundary_high_r_mask                (0xFC000000)
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_sta2_boundary_low_r_mask                 (0x03F00000)
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_sta2_p1_value_r_mask                     (0x000F0000)
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_sta2_p2_value_r_mask                     (0x0000F800)
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_lock_range_r_mask                        (0x00000780)
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_sta2_boundary_high_r(data)               (0xFC000000&((data)<<26))
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_sta2_boundary_low_r(data)                (0x03F00000&((data)<<20))
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_sta2_p1_value_r(data)                    (0x000F0000&((data)<<16))
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_sta2_p2_value_r(data)                    (0x0000F800&((data)<<11))
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_lock_range_r(data)                       (0x00000780&((data)<<7))
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_get_sta2_boundary_high_r(data)           ((0xFC000000&(data))>>26)
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_get_sta2_boundary_low_r(data)            ((0x03F00000&(data))>>20)
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_get_sta2_p1_value_r(data)                ((0x000F0000&(data))>>16)
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_get_sta2_p2_value_r(data)                ((0x0000F800&(data))>>11)
#define  SYNC_PROCESSOR_updw_St2_CTRL_R_get_lock_range_r(data)                   ((0x00000780&(data))>>7)

#define  SYNC_PROCESSOR_updw_Stage_Flag_R                                       0x18021090
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_reg_addr                               "0xB8021090"
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_reg                                    0xB8021090
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_inst_addr                              "0x0018"
#define  set_SYNC_PROCESSOR_updw_Stage_Flag_R_reg(data)                          (*((volatile unsigned int*)SYNC_PROCESSOR_updw_Stage_Flag_R_reg)=data)
#define  get_SYNC_PROCESSOR_updw_Stage_Flag_R_reg                                (*((volatile unsigned int*)SYNC_PROCESSOR_updw_Stage_Flag_R_reg))
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_charge_mode_r_shift                    (31)
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_charge_stage_r_shift                   (30)
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_target_diff_r_shift                    (20)
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_lock_flag_r_shift                      (19)
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_avg_bg_code_r_shift                    (0)
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_charge_mode_r_mask                     (0x80000000)
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_charge_stage_r_mask                    (0x40000000)
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_target_diff_r_mask                     (0x3FF00000)
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_lock_flag_r_mask                       (0x00080000)
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_avg_bg_code_r_mask                     (0x000003FF)
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_charge_mode_r(data)                    (0x80000000&((data)<<31))
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_charge_stage_r(data)                   (0x40000000&((data)<<30))
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_target_diff_r(data)                    (0x3FF00000&((data)<<20))
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_lock_flag_r(data)                      (0x00080000&((data)<<19))
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_avg_bg_code_r(data)                    (0x000003FF&(data))
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_get_charge_mode_r(data)                ((0x80000000&(data))>>31)
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_get_charge_stage_r(data)               ((0x40000000&(data))>>30)
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_get_target_diff_r(data)                ((0x3FF00000&(data))>>20)
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_get_lock_flag_r(data)                  ((0x00080000&(data))>>19)
#define  SYNC_PROCESSOR_updw_Stage_Flag_R_get_avg_bg_code_r(data)                (0x000003FF&(data))

#define  SYNC_PROCESSOR_updw_CTRL1_G                                            0x18021094
#define  SYNC_PROCESSOR_updw_CTRL1_G_reg_addr                                    "0xB8021094"
#define  SYNC_PROCESSOR_updw_CTRL1_G_reg                                         0xB8021094
#define  SYNC_PROCESSOR_updw_CTRL1_G_inst_addr                                   "0x0019"
#define  set_SYNC_PROCESSOR_updw_CTRL1_G_reg(data)                               (*((volatile unsigned int*)SYNC_PROCESSOR_updw_CTRL1_G_reg)=data)
#define  get_SYNC_PROCESSOR_updw_CTRL1_G_reg                                     (*((volatile unsigned int*)SYNC_PROCESSOR_updw_CTRL1_G_reg))
#define  SYNC_PROCESSOR_updw_CTRL1_G_target1_g_shift                             (26)
#define  SYNC_PROCESSOR_updw_CTRL1_G_target2_g_shift                             (16)
#define  SYNC_PROCESSOR_updw_CTRL1_G_charge_mode_sel_g_shift                     (14)
#define  SYNC_PROCESSOR_updw_CTRL1_G_target1_g_mask                              (0xFC000000)
#define  SYNC_PROCESSOR_updw_CTRL1_G_target2_g_mask                              (0x03FF0000)
#define  SYNC_PROCESSOR_updw_CTRL1_G_charge_mode_sel_g_mask                      (0x0000C000)
#define  SYNC_PROCESSOR_updw_CTRL1_G_target1_g(data)                             (0xFC000000&((data)<<26))
#define  SYNC_PROCESSOR_updw_CTRL1_G_target2_g(data)                             (0x03FF0000&((data)<<16))
#define  SYNC_PROCESSOR_updw_CTRL1_G_charge_mode_sel_g(data)                     (0x0000C000&((data)<<14))
#define  SYNC_PROCESSOR_updw_CTRL1_G_get_target1_g(data)                         ((0xFC000000&(data))>>26)
#define  SYNC_PROCESSOR_updw_CTRL1_G_get_target2_g(data)                         ((0x03FF0000&(data))>>16)
#define  SYNC_PROCESSOR_updw_CTRL1_G_get_charge_mode_sel_g(data)                 ((0x0000C000&(data))>>14)

#define  SYNC_PROCESSOR_updw_St1_CTRL_G                                         0x18021098
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_reg_addr                                 "0xB8021098"
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_reg                                      0xB8021098
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_inst_addr                                "0x001A"
#define  set_SYNC_PROCESSOR_updw_St1_CTRL_G_reg(data)                            (*((volatile unsigned int*)SYNC_PROCESSOR_updw_St1_CTRL_G_reg)=data)
#define  get_SYNC_PROCESSOR_updw_St1_CTRL_G_reg                                  (*((volatile unsigned int*)SYNC_PROCESSOR_updw_St1_CTRL_G_reg))
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_sta1_boundary_high_g_shift               (27)
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_sta1_boundary_low_g_shift                (22)
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_sta1_p1_value_g_shift                    (16)
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_sta1_p2_value_g_shift                    (10)
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_sta1_boundary_high_g_mask                (0xF8000000)
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_sta1_boundary_low_g_mask                 (0x07C00000)
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_sta1_p1_value_g_mask                     (0x003F0000)
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_sta1_p2_value_g_mask                     (0x0000FC00)
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_sta1_boundary_high_g(data)               (0xF8000000&((data)<<27))
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_sta1_boundary_low_g(data)                (0x07C00000&((data)<<22))
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_sta1_p1_value_g(data)                    (0x003F0000&((data)<<16))
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_sta1_p2_value_g(data)                    (0x0000FC00&((data)<<10))
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_get_sta1_boundary_high_g(data)           ((0xF8000000&(data))>>27)
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_get_sta1_boundary_low_g(data)            ((0x07C00000&(data))>>22)
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_get_sta1_p1_value_g(data)                ((0x003F0000&(data))>>16)
#define  SYNC_PROCESSOR_updw_St1_CTRL_G_get_sta1_p2_value_g(data)                ((0x0000FC00&(data))>>10)

#define  SYNC_PROCESSOR_updw_St2_CTRL_G                                         0x1802109C
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_reg_addr                                 "0xB802109C"
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_reg                                      0xB802109C
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_inst_addr                                "0x001B"
#define  set_SYNC_PROCESSOR_updw_St2_CTRL_G_reg(data)                            (*((volatile unsigned int*)SYNC_PROCESSOR_updw_St2_CTRL_G_reg)=data)
#define  get_SYNC_PROCESSOR_updw_St2_CTRL_G_reg                                  (*((volatile unsigned int*)SYNC_PROCESSOR_updw_St2_CTRL_G_reg))
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_sta2_boundary_high_g_shift               (26)
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_sta2_boundary_low_g_shift                (20)
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_sta2_p1_value_g_shift                    (16)
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_sta2_p2_value_g_shift                    (11)
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_lock_range_g_shift                       (7)
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_sta2_boundary_high_g_mask                (0xFC000000)
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_sta2_boundary_low_g_mask                 (0x03F00000)
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_sta2_p1_value_g_mask                     (0x000F0000)
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_sta2_p2_value_g_mask                     (0x0000F800)
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_lock_range_g_mask                        (0x00000780)
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_sta2_boundary_high_g(data)               (0xFC000000&((data)<<26))
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_sta2_boundary_low_g(data)                (0x03F00000&((data)<<20))
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_sta2_p1_value_g(data)                    (0x000F0000&((data)<<16))
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_sta2_p2_value_g(data)                    (0x0000F800&((data)<<11))
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_lock_range_g(data)                       (0x00000780&((data)<<7))
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_get_sta2_boundary_high_g(data)           ((0xFC000000&(data))>>26)
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_get_sta2_boundary_low_g(data)            ((0x03F00000&(data))>>20)
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_get_sta2_p1_value_g(data)                ((0x000F0000&(data))>>16)
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_get_sta2_p2_value_g(data)                ((0x0000F800&(data))>>11)
#define  SYNC_PROCESSOR_updw_St2_CTRL_G_get_lock_range_g(data)                   ((0x00000780&(data))>>7)

#define  SYNC_PROCESSOR_updw_Stage_Flag_G                                       0x180210A0
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_reg_addr                               "0xB80210A0"
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_reg                                    0xB80210A0
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_inst_addr                              "0x001C"
#define  set_SYNC_PROCESSOR_updw_Stage_Flag_G_reg(data)                          (*((volatile unsigned int*)SYNC_PROCESSOR_updw_Stage_Flag_G_reg)=data)
#define  get_SYNC_PROCESSOR_updw_Stage_Flag_G_reg                                (*((volatile unsigned int*)SYNC_PROCESSOR_updw_Stage_Flag_G_reg))
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_charge_mode_g_shift                    (31)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_charge_stage_g_shift                   (30)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_target_diff_g_shift                    (20)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_lock_flag_g_shift                      (19)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_clamp_in_tip_shift                     (10)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_avg_bg_code_g_shift                    (0)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_charge_mode_g_mask                     (0x80000000)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_charge_stage_g_mask                    (0x40000000)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_target_diff_g_mask                     (0x3FF00000)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_lock_flag_g_mask                       (0x00080000)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_clamp_in_tip_mask                      (0x00000400)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_avg_bg_code_g_mask                     (0x000003FF)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_charge_mode_g(data)                    (0x80000000&((data)<<31))
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_charge_stage_g(data)                   (0x40000000&((data)<<30))
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_target_diff_g(data)                    (0x3FF00000&((data)<<20))
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_lock_flag_g(data)                      (0x00080000&((data)<<19))
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_clamp_in_tip(data)                     (0x00000400&((data)<<10))
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_avg_bg_code_g(data)                    (0x000003FF&(data))
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_get_charge_mode_g(data)                ((0x80000000&(data))>>31)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_get_charge_stage_g(data)               ((0x40000000&(data))>>30)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_get_target_diff_g(data)                ((0x3FF00000&(data))>>20)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_get_lock_flag_g(data)                  ((0x00080000&(data))>>19)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_get_clamp_in_tip(data)                 ((0x00000400&(data))>>10)
#define  SYNC_PROCESSOR_updw_Stage_Flag_G_get_avg_bg_code_g(data)                (0x000003FF&(data))

#define  SYNC_PROCESSOR_updw_CTRL1_B                                            0x180210A4
#define  SYNC_PROCESSOR_updw_CTRL1_B_reg_addr                                    "0xB80210A4"
#define  SYNC_PROCESSOR_updw_CTRL1_B_reg                                         0xB80210A4
#define  SYNC_PROCESSOR_updw_CTRL1_B_inst_addr                                   "0x001D"
#define  set_SYNC_PROCESSOR_updw_CTRL1_B_reg(data)                               (*((volatile unsigned int*)SYNC_PROCESSOR_updw_CTRL1_B_reg)=data)
#define  get_SYNC_PROCESSOR_updw_CTRL1_B_reg                                     (*((volatile unsigned int*)SYNC_PROCESSOR_updw_CTRL1_B_reg))
#define  SYNC_PROCESSOR_updw_CTRL1_B_target1_b_shift                             (26)
#define  SYNC_PROCESSOR_updw_CTRL1_B_target2_b_shift                             (16)
#define  SYNC_PROCESSOR_updw_CTRL1_B_charge_mode_sel_b_shift                     (14)
#define  SYNC_PROCESSOR_updw_CTRL1_B_target1_b_mask                              (0xFC000000)
#define  SYNC_PROCESSOR_updw_CTRL1_B_target2_b_mask                              (0x03FF0000)
#define  SYNC_PROCESSOR_updw_CTRL1_B_charge_mode_sel_b_mask                      (0x0000C000)
#define  SYNC_PROCESSOR_updw_CTRL1_B_target1_b(data)                             (0xFC000000&((data)<<26))
#define  SYNC_PROCESSOR_updw_CTRL1_B_target2_b(data)                             (0x03FF0000&((data)<<16))
#define  SYNC_PROCESSOR_updw_CTRL1_B_charge_mode_sel_b(data)                     (0x0000C000&((data)<<14))
#define  SYNC_PROCESSOR_updw_CTRL1_B_get_target1_b(data)                         ((0xFC000000&(data))>>26)
#define  SYNC_PROCESSOR_updw_CTRL1_B_get_target2_b(data)                         ((0x03FF0000&(data))>>16)
#define  SYNC_PROCESSOR_updw_CTRL1_B_get_charge_mode_sel_b(data)                 ((0x0000C000&(data))>>14)

#define  SYNC_PROCESSOR_updw_St1_CTRL_B                                         0x180210A8
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_reg_addr                                 "0xB80210A8"
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_reg                                      0xB80210A8
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_inst_addr                                "0x001E"
#define  set_SYNC_PROCESSOR_updw_St1_CTRL_B_reg(data)                            (*((volatile unsigned int*)SYNC_PROCESSOR_updw_St1_CTRL_B_reg)=data)
#define  get_SYNC_PROCESSOR_updw_St1_CTRL_B_reg                                  (*((volatile unsigned int*)SYNC_PROCESSOR_updw_St1_CTRL_B_reg))
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_sta1_boundary_high_b_shift               (27)
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_sta1_boundary_low_b_shift                (22)
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_sta1_p1_value_b_shift                    (16)
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_sta1_p2_value_b_shift                    (10)
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_sta1_boundary_high_b_mask                (0xF8000000)
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_sta1_boundary_low_b_mask                 (0x07C00000)
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_sta1_p1_value_b_mask                     (0x003F0000)
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_sta1_p2_value_b_mask                     (0x0000FC00)
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_sta1_boundary_high_b(data)               (0xF8000000&((data)<<27))
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_sta1_boundary_low_b(data)                (0x07C00000&((data)<<22))
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_sta1_p1_value_b(data)                    (0x003F0000&((data)<<16))
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_sta1_p2_value_b(data)                    (0x0000FC00&((data)<<10))
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_get_sta1_boundary_high_b(data)           ((0xF8000000&(data))>>27)
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_get_sta1_boundary_low_b(data)            ((0x07C00000&(data))>>22)
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_get_sta1_p1_value_b(data)                ((0x003F0000&(data))>>16)
#define  SYNC_PROCESSOR_updw_St1_CTRL_B_get_sta1_p2_value_b(data)                ((0x0000FC00&(data))>>10)

#define  SYNC_PROCESSOR_updw_St2_CTRL_B                                         0x180210AC
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_reg_addr                                 "0xB80210AC"
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_reg                                      0xB80210AC
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_inst_addr                                "0x001F"
#define  set_SYNC_PROCESSOR_updw_St2_CTRL_B_reg(data)                            (*((volatile unsigned int*)SYNC_PROCESSOR_updw_St2_CTRL_B_reg)=data)
#define  get_SYNC_PROCESSOR_updw_St2_CTRL_B_reg                                  (*((volatile unsigned int*)SYNC_PROCESSOR_updw_St2_CTRL_B_reg))
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_sta2_boundary_high_b_shift               (26)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_sta2_boundary_low_b_shift                (20)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_sta2_p1_value_b_shift                    (16)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_sta2_p2_value_b_shift                    (11)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_lock_range_b_shift                       (7)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_syncp_wd_debug_mode_shift                (1)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_syncp_wd_debug_target_shift              (0)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_sta2_boundary_high_b_mask                (0xFC000000)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_sta2_boundary_low_b_mask                 (0x03F00000)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_sta2_p1_value_b_mask                     (0x000F0000)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_sta2_p2_value_b_mask                     (0x0000F800)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_lock_range_b_mask                        (0x00000780)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_syncp_wd_debug_mode_mask                 (0x00000002)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_syncp_wd_debug_target_mask               (0x00000001)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_sta2_boundary_high_b(data)               (0xFC000000&((data)<<26))
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_sta2_boundary_low_b(data)                (0x03F00000&((data)<<20))
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_sta2_p1_value_b(data)                    (0x000F0000&((data)<<16))
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_sta2_p2_value_b(data)                    (0x0000F800&((data)<<11))
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_lock_range_b(data)                       (0x00000780&((data)<<7))
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_syncp_wd_debug_mode(data)                (0x00000002&((data)<<1))
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_syncp_wd_debug_target(data)              (0x00000001&(data))
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_get_sta2_boundary_high_b(data)           ((0xFC000000&(data))>>26)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_get_sta2_boundary_low_b(data)            ((0x03F00000&(data))>>20)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_get_sta2_p1_value_b(data)                ((0x000F0000&(data))>>16)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_get_sta2_p2_value_b(data)                ((0x0000F800&(data))>>11)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_get_lock_range_b(data)                   ((0x00000780&(data))>>7)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_get_syncp_wd_debug_mode(data)            ((0x00000002&(data))>>1)
#define  SYNC_PROCESSOR_updw_St2_CTRL_B_get_syncp_wd_debug_target(data)          (0x00000001&(data))

#define  SYNC_PROCESSOR_updw_Stage_Flag_B                                       0x180210B0
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_reg_addr                               "0xB80210B0"
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_reg                                    0xB80210B0
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_inst_addr                              "0x0020"
#define  set_SYNC_PROCESSOR_updw_Stage_Flag_B_reg(data)                          (*((volatile unsigned int*)SYNC_PROCESSOR_updw_Stage_Flag_B_reg)=data)
#define  get_SYNC_PROCESSOR_updw_Stage_Flag_B_reg                                (*((volatile unsigned int*)SYNC_PROCESSOR_updw_Stage_Flag_B_reg))
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_charge_mode_b_shift                    (31)
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_charge_stage_b_shift                   (30)
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_target_diff_b_shift                    (20)
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_lock_flag_b_shift                      (19)
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_avg_bg_code_b_shift                    (0)
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_charge_mode_b_mask                     (0x80000000)
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_charge_stage_b_mask                    (0x40000000)
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_target_diff_b_mask                     (0x3FF00000)
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_lock_flag_b_mask                       (0x00080000)
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_avg_bg_code_b_mask                     (0x000003FF)
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_charge_mode_b(data)                    (0x80000000&((data)<<31))
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_charge_stage_b(data)                   (0x40000000&((data)<<30))
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_target_diff_b(data)                    (0x3FF00000&((data)<<20))
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_lock_flag_b(data)                      (0x00080000&((data)<<19))
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_avg_bg_code_b(data)                    (0x000003FF&(data))
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_get_charge_mode_b(data)                ((0x80000000&(data))>>31)
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_get_charge_stage_b(data)               ((0x40000000&(data))>>30)
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_get_target_diff_b(data)                ((0x3FF00000&(data))>>20)
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_get_lock_flag_b(data)                  ((0x00080000&(data))>>19)
#define  SYNC_PROCESSOR_updw_Stage_Flag_B_get_avg_bg_code_b(data)                (0x000003FF&(data))

#define  SYNC_PROCESSOR_updw_debug_function                                     0x180210B4
#define  SYNC_PROCESSOR_updw_debug_function_reg_addr                             "0xB80210B4"
#define  SYNC_PROCESSOR_updw_debug_function_reg                                  0xB80210B4
#define  SYNC_PROCESSOR_updw_debug_function_inst_addr                            "0x0021"
#define  set_SYNC_PROCESSOR_updw_debug_function_reg(data)                        (*((volatile unsigned int*)SYNC_PROCESSOR_updw_debug_function_reg)=data)
#define  get_SYNC_PROCESSOR_updw_debug_function_reg                              (*((volatile unsigned int*)SYNC_PROCESSOR_updw_debug_function_reg))
#define  SYNC_PROCESSOR_updw_debug_function_xtal_sel_shift                       (31)
#define  SYNC_PROCESSOR_updw_debug_function_xtal_sel_mask                        (0x80000000)
#define  SYNC_PROCESSOR_updw_debug_function_xtal_sel(data)                       (0x80000000&((data)<<31))
#define  SYNC_PROCESSOR_updw_debug_function_get_xtal_sel(data)                   ((0x80000000&(data))>>31)

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======SYNC_PROCESSOR register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_dehs_out_en:1;
        RBus_UInt32  dummy18021000_30:1;
        RBus_UInt32  dummy18021000_29:1;
        RBus_UInt32  s1_hsraw_inv:1;
        RBus_UInt32  dummy18021000_27:1;
        RBus_UInt32  dummy18021000_26_24:3;
        RBus_UInt32  hrecovery_en:1;
        RBus_UInt32  s1_adc_vsout_testmd:1;
        RBus_UInt32  s1_devs_out_en:1;
        RBus_UInt32  s1_sel_clpmsk_as_devs:1;
        RBus_UInt32  s1_hsout_inv:1;
        RBus_UInt32  dummy18021000_18:1;
        RBus_UInt32  s1_hs_sync_source:1;
        RBus_UInt32  s1_hsout_en:1;
        RBus_UInt32  dummy18021000_15_13:3;
        RBus_UInt32  s1_seperate_testmode:1;
        RBus_UInt32  s1_auto_run_done_ie:1;
        RBus_UInt32  s1_auto_run:1;
        RBus_UInt32  s1_coast_en:1;
        RBus_UInt32  s1_decmp_en:1;
        RBus_UInt32  dummy18021000_7:1;
        RBus_UInt32  s1_hs_fb_plswid_md:2;
        RBus_UInt32  s1_coast_inv:1;
        RBus_UInt32  dummy18021000_3:1;
        RBus_UInt32  s1_vhs_source_sel:3;
    };
}sync_processor_sp1_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_auto_result_rdy:1;
        RBus_UInt32  dummy18021004_30:1;
        RBus_UInt32  s1_unlock_no_vs_str:6;
        RBus_UInt32  s1_unlock_no_vs_end:12;
        RBus_UInt32  res1:5;
        RBus_UInt32  s1_auto_result:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  s1_input_signal_be_inverted:1;
    };
}sync_processor_sp1_autorst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  s1_cap_win_range_lsb:2;
        RBus_UInt32  s1_hsper_realtime_stbline:2;
        RBus_UInt32  s1_hsper_realtime_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  s1_cap_win_range:5;
        RBus_UInt32  s1_per_range:3;
        RBus_UInt32  s1_popup_stable_per:1;
        RBus_UInt32  dummy18021010_6_4:3;
        RBus_UInt32  s1_cap_win_step:1;
        RBus_UInt32  s1_miss_lock_limit:1;
        RBus_UInt32  s1_dds_cap_win_h2l_enable:1;
        RBus_UInt32  s1_stable_en:1;
    };
}sync_processor_sp1_stbctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_mode_det_of:1;
        RBus_UInt32  s1_stb_per_chg:1;
        RBus_UInt32  s1_stb_pol_chg:1;
        RBus_UInt32  s1_vs_raw_vld:1;
        RBus_UInt32  s1_cap_32unlock:1;
        RBus_UInt32  s1_eq_occur:1;
        RBus_UInt32  s1_hs_pol_chg:1;
        RBus_UInt32  s1_cap_unlock:1;
        RBus_UInt32  s1_mode_det_stable:1;
        RBus_UInt32  s1_stable_pol_out:1;
        RBus_UInt32  s1_cap_unlock_no_vs:1;
        RBus_UInt32  s1_giltch_in_win:1;
        RBus_UInt32  s1_giltch_in_win_int:1;
        RBus_UInt32  s1_stb_per_chg_wde:1;
        RBus_UInt32  s1_stb_pol_chg_wde:1;
        RBus_UInt32  sync_wd_to_main:1;
        RBus_UInt32  sync_wd_to_sub:1;
        RBus_UInt32  res1:15;
    };
}sync_processor_sp1_stbrst0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  s1_stable_period_out:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  s1_stable_plswid_out:11;
    };
}sync_processor_sp1_stbrst1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  s1_deb_num:5;
        RBus_UInt32  s1_dcnt_level:11;
    };
}sync_processor_sp1_dcnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  s1_field_det_vs_sel:1;
        RBus_UInt32  s1_field_det_mode:1;
        RBus_UInt32  s1_f_pos_field:1;
        RBus_UInt32  s1_f_pos_field_tgle:1;
        RBus_UInt32  s1_f_count_field:1;
        RBus_UInt32  s1_f_count_field_tgle:1;
        RBus_UInt32  s1_l_cnt_lsb1:3;
    };
}sync_processor_sp1_field_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  dummy18021038_13_8:6;
        RBus_UInt32  s1_clamp_dben:1;
        RBus_UInt32  s1_clamp_cnt_unit:1;
        RBus_UInt32  s1_clamp_clksrc:1;
        RBus_UInt32  s1_clamp_en:1;
        RBus_UInt32  s1_yclamp_hs_inv:1;
        RBus_UInt32  s1_nyclamp_hs_inv:1;
        RBus_UInt32  s1_clamp_test_en:1;
        RBus_UInt32  s1_adc_hs_syncedge:1;
    };
}sync_processor_sp1_clmpctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_yclamp_sta:8;
        RBus_UInt32  s1_yclamp_end:8;
        RBus_UInt32  s1_nyclamp_sta:8;
        RBus_UInt32  s1_nyclamp_end:8;
    };
}sync_processor_sp1_clmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  s1_mask_clamp_en:1;
        RBus_UInt32  s1_cap_miss_flag2hswin_enable:1;
        RBus_UInt32  s1_mask_front:6;
        RBus_UInt32  dummy18021040_7_6:2;
        RBus_UInt32  s1_mask_back:6;
    };
}sync_processor_sp1_clmpmsk_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_coast_win2_sta:11;
        RBus_UInt32  s1_coast_win2_end:11;
        RBus_UInt32  dummy18021044_9_8:2;
        RBus_UInt32  s1_coast_front:4;
        RBus_UInt32  s1_coast_back:4;
    };
}sync_processor_sp1_coastftbk_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  dummy18021058_15_13:3;
        RBus_UInt32  s1_deb_num_efhs:5;
        RBus_UInt32  s1_skip_line_len:4;
        RBus_UInt32  dummy18021058_3_2:2;
        RBus_UInt32  s1_ef_occur:1;
        RBus_UInt32  s1_ef_enable:1;
    };
}sync_processor_ef_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_miss_flag2dds_enable:1;
        RBus_UInt32  s1_o_ef_str:7;
        RBus_UInt32  s1_o_ef_rdy:1;
        RBus_UInt32  s1_o_ef_end:7;
        RBus_UInt32  dummy1802105c_15:1;
        RBus_UInt32  s1_e_ef_str:7;
        RBus_UInt32  s1_e_ef_rdy:1;
        RBus_UInt32  s1_e_ef_end:7;
    };
}sync_processor_ef_fld_pos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  adc_vin32_clamp_sel:2;
        RBus_UInt32  adc_vin31_clamp_sel:2;
        RBus_UInt32  adc_vin30_clamp_sel:2;
        RBus_UInt32  adc_vin22_clamp_sel:2;
        RBus_UInt32  adc_vin21_clamp_sel:2;
        RBus_UInt32  adc_vin20_clamp_sel:2;
        RBus_UInt32  adc_vin12_clamp_sel:2;
        RBus_UInt32  adc_vin11_clamp_sel:2;
        RBus_UInt32  adc_vin10_clamp_sel:2;
        RBus_UInt32  adc_vin02_clamp_sel:2;
        RBus_UInt32  adc_vin01_clamp_sel:2;
        RBus_UInt32  adc_vin00_clamp_sel:2;
    };
}sync_processor_sp_adcclampsel0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  dummy18021068_4:1;
        RBus_UInt32  sync_test_sel:4;
    };
}sync_processor_sp_adcclampsel1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  force_rgb_from_adc:1;
        RBus_UInt32  syncedge_rgb:1;
        RBus_UInt32  syncedge_hs:1;
        RBus_UInt32  syncedge_vs:1;
        RBus_UInt32  test_sel_rgb:2;
        RBus_UInt32  test_sel_hs:1;
        RBus_UInt32  test_sel_vs:1;
        RBus_UInt32  sync_out_source:2;
    };
}sync_processor_sp_adc_out_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dummy18021070_7_6:2;
        RBus_UInt32  tog_adc_sog0:1;
        RBus_UInt32  tog_adc_sog1:1;
        RBus_UInt32  tog_soy_vd:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tog_pad_avs1:1;
        RBus_UInt32  tog_pad_ahs1:1;
    };
}sync_processor_sp_pad_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  glitch_det_rst:1;
        RBus_UInt32  glitch_det:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  pe_delay_no:4;
        RBus_UInt32  res3:6;
        RBus_UInt32  pe_delay_auto:1;
        RBus_UInt32  hs_deglitch_en:1;
        RBus_UInt32  hs_deglitch_num:8;
    };
}sync_processor_deglitch_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  force_ctsfifo_rstn:1;
        RBus_UInt32  en_ctsfifo_vsrst:1;
        RBus_UInt32  en_ctsfifo_bypass:1;
    };
}sync_processor_cts_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  updw_clamp_en:1;
        RBus_UInt32  updw_en_r:1;
        RBus_UInt32  updw_en_g:1;
        RBus_UInt32  updw_en_b:1;
        RBus_UInt32  updw_ny_mode_r:1;
        RBus_UInt32  updw_ny_mode_g:1;
        RBus_UInt32  updw_ny_mode_b:1;
        RBus_UInt32  hs_sync_edge_sel:1;
        RBus_UInt32  lock_range_y:3;
        RBus_UInt32  soy_stable_condition:4;
        RBus_UInt32  dummy1802107c_16:1;
        RBus_UInt32  meas_point_num:2;
        RBus_UInt32  res1:13;
        RBus_UInt32  dummy1802107c_0:1;
    };
}sync_processor_updw_global_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  measure_sta:9;
        RBus_UInt32  updw_sta:9;
        RBus_UInt32  updw_end:9;
        RBus_UInt32  res1:5;
    };
}sync_processor_updw_global_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  target1_r:6;
        RBus_UInt32  target2_r:10;
        RBus_UInt32  charge_mode_sel_r:2;
        RBus_UInt32  res1:14;
    };
}sync_processor_updw_ctrl1_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sta1_boundary_high_r:5;
        RBus_UInt32  sta1_boundary_low_r:5;
        RBus_UInt32  sta1_p1_value_r:6;
        RBus_UInt32  sta1_p2_value_r:6;
        RBus_UInt32  res1:10;
    };
}sync_processor_updw_st1_ctrl_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sta2_boundary_high_r:6;
        RBus_UInt32  sta2_boundary_low_r:6;
        RBus_UInt32  sta2_p1_value_r:4;
        RBus_UInt32  sta2_p2_value_r:5;
        RBus_UInt32  lock_range_r:4;
        RBus_UInt32  res1:7;
    };
}sync_processor_updw_st2_ctrl_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  charge_mode_r:1;
        RBus_UInt32  charge_stage_r:1;
        RBus_UInt32  target_diff_r:10;
        RBus_UInt32  lock_flag_r:1;
        RBus_UInt32  res1:9;
        RBus_UInt32  avg_bg_code_r:10;
    };
}sync_processor_updw_stage_flag_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  target1_g:6;
        RBus_UInt32  target2_g:10;
        RBus_UInt32  charge_mode_sel_g:2;
        RBus_UInt32  res1:14;
    };
}sync_processor_updw_ctrl1_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sta1_boundary_high_g:5;
        RBus_UInt32  sta1_boundary_low_g:5;
        RBus_UInt32  sta1_p1_value_g:6;
        RBus_UInt32  sta1_p2_value_g:6;
        RBus_UInt32  res1:10;
    };
}sync_processor_updw_st1_ctrl_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sta2_boundary_high_g:6;
        RBus_UInt32  sta2_boundary_low_g:6;
        RBus_UInt32  sta2_p1_value_g:4;
        RBus_UInt32  sta2_p2_value_g:5;
        RBus_UInt32  lock_range_g:4;
        RBus_UInt32  res1:7;
    };
}sync_processor_updw_st2_ctrl_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  charge_mode_g:1;
        RBus_UInt32  charge_stage_g:1;
        RBus_UInt32  target_diff_g:10;
        RBus_UInt32  lock_flag_g:1;
        RBus_UInt32  res1:8;
        RBus_UInt32  clamp_in_tip:1;
        RBus_UInt32  avg_bg_code_g:10;
    };
}sync_processor_updw_stage_flag_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  target1_b:6;
        RBus_UInt32  target2_b:10;
        RBus_UInt32  charge_mode_sel_b:2;
        RBus_UInt32  res1:14;
    };
}sync_processor_updw_ctrl1_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sta1_boundary_high_b:5;
        RBus_UInt32  sta1_boundary_low_b:5;
        RBus_UInt32  sta1_p1_value_b:6;
        RBus_UInt32  sta1_p2_value_b:6;
        RBus_UInt32  res1:10;
    };
}sync_processor_updw_st1_ctrl_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sta2_boundary_high_b:6;
        RBus_UInt32  sta2_boundary_low_b:6;
        RBus_UInt32  sta2_p1_value_b:4;
        RBus_UInt32  sta2_p2_value_b:5;
        RBus_UInt32  lock_range_b:4;
        RBus_UInt32  res1:5;
        RBus_UInt32  syncp_wd_debug_mode:1;
        RBus_UInt32  syncp_wd_debug_target:1;
    };
}sync_processor_updw_st2_ctrl_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  charge_mode_b:1;
        RBus_UInt32  charge_stage_b:1;
        RBus_UInt32  target_diff_b:10;
        RBus_UInt32  lock_flag_b:1;
        RBus_UInt32  res1:9;
        RBus_UInt32  avg_bg_code_b:10;
    };
}sync_processor_updw_stage_flag_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xtal_sel:1;
        RBus_UInt32  res1:31;
    };
}sync_processor_updw_debug_function_RBUS;

#else //apply LITTLE_ENDIAN

//======SYNC_PROCESSOR register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_vhs_source_sel:3;
        RBus_UInt32  dummy18021000_3:1;
        RBus_UInt32  s1_coast_inv:1;
        RBus_UInt32  s1_hs_fb_plswid_md:2;
        RBus_UInt32  dummy18021000_7:1;
        RBus_UInt32  s1_decmp_en:1;
        RBus_UInt32  s1_coast_en:1;
        RBus_UInt32  s1_auto_run:1;
        RBus_UInt32  s1_auto_run_done_ie:1;
        RBus_UInt32  s1_seperate_testmode:1;
        RBus_UInt32  dummy18021000_15_13:3;
        RBus_UInt32  s1_hsout_en:1;
        RBus_UInt32  s1_hs_sync_source:1;
        RBus_UInt32  dummy18021000_18:1;
        RBus_UInt32  s1_hsout_inv:1;
        RBus_UInt32  s1_sel_clpmsk_as_devs:1;
        RBus_UInt32  s1_devs_out_en:1;
        RBus_UInt32  s1_adc_vsout_testmd:1;
        RBus_UInt32  hrecovery_en:1;
        RBus_UInt32  dummy18021000_26_24:3;
        RBus_UInt32  dummy18021000_27:1;
        RBus_UInt32  s1_hsraw_inv:1;
        RBus_UInt32  dummy18021000_29:1;
        RBus_UInt32  dummy18021000_30:1;
        RBus_UInt32  s1_dehs_out_en:1;
    };
}sync_processor_sp1_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_input_signal_be_inverted:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  s1_auto_result:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  s1_unlock_no_vs_end:12;
        RBus_UInt32  s1_unlock_no_vs_str:6;
        RBus_UInt32  dummy18021004_30:1;
        RBus_UInt32  s1_auto_result_rdy:1;
    };
}sync_processor_sp1_autorst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_stable_en:1;
        RBus_UInt32  s1_dds_cap_win_h2l_enable:1;
        RBus_UInt32  s1_miss_lock_limit:1;
        RBus_UInt32  s1_cap_win_step:1;
        RBus_UInt32  dummy18021010_6_4:3;
        RBus_UInt32  s1_popup_stable_per:1;
        RBus_UInt32  s1_per_range:3;
        RBus_UInt32  s1_cap_win_range:5;
        RBus_UInt32  res1:1;
        RBus_UInt32  s1_hsper_realtime_en:1;
        RBus_UInt32  s1_hsper_realtime_stbline:2;
        RBus_UInt32  s1_cap_win_range_lsb:2;
        RBus_UInt32  res2:10;
    };
}sync_processor_sp1_stbctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  sync_wd_to_sub:1;
        RBus_UInt32  sync_wd_to_main:1;
        RBus_UInt32  s1_stb_pol_chg_wde:1;
        RBus_UInt32  s1_stb_per_chg_wde:1;
        RBus_UInt32  s1_giltch_in_win_int:1;
        RBus_UInt32  s1_giltch_in_win:1;
        RBus_UInt32  s1_cap_unlock_no_vs:1;
        RBus_UInt32  s1_stable_pol_out:1;
        RBus_UInt32  s1_mode_det_stable:1;
        RBus_UInt32  s1_cap_unlock:1;
        RBus_UInt32  s1_hs_pol_chg:1;
        RBus_UInt32  s1_eq_occur:1;
        RBus_UInt32  s1_cap_32unlock:1;
        RBus_UInt32  s1_vs_raw_vld:1;
        RBus_UInt32  s1_stb_pol_chg:1;
        RBus_UInt32  s1_stb_per_chg:1;
        RBus_UInt32  s1_mode_det_of:1;
    };
}sync_processor_sp1_stbrst0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_stable_plswid_out:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  s1_stable_period_out:11;
        RBus_UInt32  res2:5;
    };
}sync_processor_sp1_stbrst1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_dcnt_level:11;
        RBus_UInt32  s1_deb_num:5;
        RBus_UInt32  res1:16;
    };
}sync_processor_sp1_dcnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_l_cnt_lsb1:3;
        RBus_UInt32  s1_f_count_field_tgle:1;
        RBus_UInt32  s1_f_count_field:1;
        RBus_UInt32  s1_f_pos_field_tgle:1;
        RBus_UInt32  s1_f_pos_field:1;
        RBus_UInt32  s1_field_det_mode:1;
        RBus_UInt32  s1_field_det_vs_sel:1;
        RBus_UInt32  res1:23;
    };
}sync_processor_sp1_field_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_adc_hs_syncedge:1;
        RBus_UInt32  s1_clamp_test_en:1;
        RBus_UInt32  s1_nyclamp_hs_inv:1;
        RBus_UInt32  s1_yclamp_hs_inv:1;
        RBus_UInt32  s1_clamp_en:1;
        RBus_UInt32  s1_clamp_clksrc:1;
        RBus_UInt32  s1_clamp_cnt_unit:1;
        RBus_UInt32  s1_clamp_dben:1;
        RBus_UInt32  dummy18021038_13_8:6;
        RBus_UInt32  res1:18;
    };
}sync_processor_sp1_clmpctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_nyclamp_end:8;
        RBus_UInt32  s1_nyclamp_sta:8;
        RBus_UInt32  s1_yclamp_end:8;
        RBus_UInt32  s1_yclamp_sta:8;
    };
}sync_processor_sp1_clmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_mask_back:6;
        RBus_UInt32  dummy18021040_7_6:2;
        RBus_UInt32  s1_mask_front:6;
        RBus_UInt32  s1_cap_miss_flag2hswin_enable:1;
        RBus_UInt32  s1_mask_clamp_en:1;
        RBus_UInt32  res1:16;
    };
}sync_processor_sp1_clmpmsk_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_coast_back:4;
        RBus_UInt32  s1_coast_front:4;
        RBus_UInt32  dummy18021044_9_8:2;
        RBus_UInt32  s1_coast_win2_end:11;
        RBus_UInt32  s1_coast_win2_sta:11;
    };
}sync_processor_sp1_coastftbk_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_ef_enable:1;
        RBus_UInt32  s1_ef_occur:1;
        RBus_UInt32  dummy18021058_3_2:2;
        RBus_UInt32  s1_skip_line_len:4;
        RBus_UInt32  s1_deb_num_efhs:5;
        RBus_UInt32  dummy18021058_15_13:3;
        RBus_UInt32  res1:16;
    };
}sync_processor_ef_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s1_e_ef_end:7;
        RBus_UInt32  s1_e_ef_rdy:1;
        RBus_UInt32  s1_e_ef_str:7;
        RBus_UInt32  dummy1802105c_15:1;
        RBus_UInt32  s1_o_ef_end:7;
        RBus_UInt32  s1_o_ef_rdy:1;
        RBus_UInt32  s1_o_ef_str:7;
        RBus_UInt32  s1_miss_flag2dds_enable:1;
    };
}sync_processor_ef_fld_pos_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adc_vin00_clamp_sel:2;
        RBus_UInt32  adc_vin01_clamp_sel:2;
        RBus_UInt32  adc_vin02_clamp_sel:2;
        RBus_UInt32  adc_vin10_clamp_sel:2;
        RBus_UInt32  adc_vin11_clamp_sel:2;
        RBus_UInt32  adc_vin12_clamp_sel:2;
        RBus_UInt32  adc_vin20_clamp_sel:2;
        RBus_UInt32  adc_vin21_clamp_sel:2;
        RBus_UInt32  adc_vin22_clamp_sel:2;
        RBus_UInt32  adc_vin30_clamp_sel:2;
        RBus_UInt32  adc_vin31_clamp_sel:2;
        RBus_UInt32  adc_vin32_clamp_sel:2;
        RBus_UInt32  res1:8;
    };
}sync_processor_sp_adcclampsel0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sync_test_sel:4;
        RBus_UInt32  dummy18021068_4:1;
        RBus_UInt32  res1:27;
    };
}sync_processor_sp_adcclampsel1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sync_out_source:2;
        RBus_UInt32  test_sel_vs:1;
        RBus_UInt32  test_sel_hs:1;
        RBus_UInt32  test_sel_rgb:2;
        RBus_UInt32  syncedge_vs:1;
        RBus_UInt32  syncedge_hs:1;
        RBus_UInt32  syncedge_rgb:1;
        RBus_UInt32  force_rgb_from_adc:1;
        RBus_UInt32  res1:22;
    };
}sync_processor_sp_adc_out_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tog_pad_ahs1:1;
        RBus_UInt32  tog_pad_avs1:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tog_soy_vd:1;
        RBus_UInt32  tog_adc_sog1:1;
        RBus_UInt32  tog_adc_sog0:1;
        RBus_UInt32  dummy18021070_7_6:2;
        RBus_UInt32  res2:24;
    };
}sync_processor_sp_pad_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hs_deglitch_num:8;
        RBus_UInt32  hs_deglitch_en:1;
        RBus_UInt32  pe_delay_auto:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  pe_delay_no:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  glitch_det:1;
        RBus_UInt32  glitch_det_rst:1;
        RBus_UInt32  res3:6;
    };
}sync_processor_deglitch_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en_ctsfifo_bypass:1;
        RBus_UInt32  en_ctsfifo_vsrst:1;
        RBus_UInt32  force_ctsfifo_rstn:1;
        RBus_UInt32  res1:29;
    };
}sync_processor_cts_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802107c_0:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  meas_point_num:2;
        RBus_UInt32  dummy1802107c_16:1;
        RBus_UInt32  soy_stable_condition:4;
        RBus_UInt32  lock_range_y:3;
        RBus_UInt32  hs_sync_edge_sel:1;
        RBus_UInt32  updw_ny_mode_b:1;
        RBus_UInt32  updw_ny_mode_g:1;
        RBus_UInt32  updw_ny_mode_r:1;
        RBus_UInt32  updw_en_b:1;
        RBus_UInt32  updw_en_g:1;
        RBus_UInt32  updw_en_r:1;
        RBus_UInt32  updw_clamp_en:1;
    };
}sync_processor_updw_global_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  updw_end:9;
        RBus_UInt32  updw_sta:9;
        RBus_UInt32  measure_sta:9;
    };
}sync_processor_updw_global_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  charge_mode_sel_r:2;
        RBus_UInt32  target2_r:10;
        RBus_UInt32  target1_r:6;
    };
}sync_processor_updw_ctrl1_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  sta1_p2_value_r:6;
        RBus_UInt32  sta1_p1_value_r:6;
        RBus_UInt32  sta1_boundary_low_r:5;
        RBus_UInt32  sta1_boundary_high_r:5;
    };
}sync_processor_updw_st1_ctrl_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  lock_range_r:4;
        RBus_UInt32  sta2_p2_value_r:5;
        RBus_UInt32  sta2_p1_value_r:4;
        RBus_UInt32  sta2_boundary_low_r:6;
        RBus_UInt32  sta2_boundary_high_r:6;
    };
}sync_processor_updw_st2_ctrl_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  avg_bg_code_r:10;
        RBus_UInt32  res1:9;
        RBus_UInt32  lock_flag_r:1;
        RBus_UInt32  target_diff_r:10;
        RBus_UInt32  charge_stage_r:1;
        RBus_UInt32  charge_mode_r:1;
    };
}sync_processor_updw_stage_flag_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  charge_mode_sel_g:2;
        RBus_UInt32  target2_g:10;
        RBus_UInt32  target1_g:6;
    };
}sync_processor_updw_ctrl1_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  sta1_p2_value_g:6;
        RBus_UInt32  sta1_p1_value_g:6;
        RBus_UInt32  sta1_boundary_low_g:5;
        RBus_UInt32  sta1_boundary_high_g:5;
    };
}sync_processor_updw_st1_ctrl_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  lock_range_g:4;
        RBus_UInt32  sta2_p2_value_g:5;
        RBus_UInt32  sta2_p1_value_g:4;
        RBus_UInt32  sta2_boundary_low_g:6;
        RBus_UInt32  sta2_boundary_high_g:6;
    };
}sync_processor_updw_st2_ctrl_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  avg_bg_code_g:10;
        RBus_UInt32  clamp_in_tip:1;
        RBus_UInt32  res1:8;
        RBus_UInt32  lock_flag_g:1;
        RBus_UInt32  target_diff_g:10;
        RBus_UInt32  charge_stage_g:1;
        RBus_UInt32  charge_mode_g:1;
    };
}sync_processor_updw_stage_flag_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  charge_mode_sel_b:2;
        RBus_UInt32  target2_b:10;
        RBus_UInt32  target1_b:6;
    };
}sync_processor_updw_ctrl1_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  sta1_p2_value_b:6;
        RBus_UInt32  sta1_p1_value_b:6;
        RBus_UInt32  sta1_boundary_low_b:5;
        RBus_UInt32  sta1_boundary_high_b:5;
    };
}sync_processor_updw_st1_ctrl_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  syncp_wd_debug_target:1;
        RBus_UInt32  syncp_wd_debug_mode:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  lock_range_b:4;
        RBus_UInt32  sta2_p2_value_b:5;
        RBus_UInt32  sta2_p1_value_b:4;
        RBus_UInt32  sta2_boundary_low_b:6;
        RBus_UInt32  sta2_boundary_high_b:6;
    };
}sync_processor_updw_st2_ctrl_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  avg_bg_code_b:10;
        RBus_UInt32  res1:9;
        RBus_UInt32  lock_flag_b:1;
        RBus_UInt32  target_diff_b:10;
        RBus_UInt32  charge_stage_b:1;
        RBus_UInt32  charge_mode_b:1;
    };
}sync_processor_updw_stage_flag_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  xtal_sel:1;
    };
}sync_processor_updw_debug_function_RBUS;




#endif 


#endif 
