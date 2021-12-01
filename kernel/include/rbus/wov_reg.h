/**
* @file Merlin5-DesignSpec-WOV
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_WOV_REG_H_
#define _RBUS_WOV_REG_H_

#include "rbus_types.h"



//  WOV Register Address
#define  WOV_stby_tcon_1                                                        0x18060600
#define  WOV_stby_tcon_1_reg_addr                                                "0xB8060600"
#define  WOV_stby_tcon_1_reg                                                     0xB8060600
#define  WOV_stby_tcon_1_inst_addr                                               "0x0000"
#define  set_WOV_stby_tcon_1_reg(data)                                           (*((volatile unsigned int*)WOV_stby_tcon_1_reg)=data)
#define  get_WOV_stby_tcon_1_reg                                                 (*((volatile unsigned int*)WOV_stby_tcon_1_reg))
#define  WOV_stby_tcon_1_adc_0_en_shift                                          (31)
#define  WOV_stby_tcon_1_adc_1_en_shift                                          (30)
#define  WOV_stby_tcon_1_adc_0_sample_rate_shift                                 (26)
#define  WOV_stby_tcon_1_adc_1_sample_rate_shift                                 (22)
#define  WOV_stby_tcon_1_dmic_0_clk_sel_shift                                    (18)
#define  WOV_stby_tcon_1_dmic_0_en_shift                                         (17)
#define  WOV_stby_tcon_1_gen_src_16k128_en_shift                                 (16)
#define  WOV_stby_tcon_1_gen_src_32k128_en_shift                                 (15)
#define  WOV_stby_tcon_1_gen_src_48k128_en_shift                                 (14)
#define  WOV_stby_tcon_1_gen_src_8k128_en_shift                                  (13)
#define  WOV_stby_tcon_1_pitch_det_en_shift                                      (12)
#define  WOV_stby_tcon_1_audio_ip_merlin5_standby_clk_sel_shift                  (11)
#define  WOV_stby_tcon_1_pitch_det_clk_sel_shift                                 (10)
#define  WOV_stby_tcon_1_adc0_ad_src_en_shift                                    (9)
#define  WOV_stby_tcon_1_adc1_ad_src_en_shift                                    (8)
#define  WOV_stby_tcon_1_vad_dbg_sel_shift                                       (0)
#define  WOV_stby_tcon_1_adc_0_en_mask                                           (0x80000000)
#define  WOV_stby_tcon_1_adc_1_en_mask                                           (0x40000000)
#define  WOV_stby_tcon_1_adc_0_sample_rate_mask                                  (0x3C000000)
#define  WOV_stby_tcon_1_adc_1_sample_rate_mask                                  (0x03C00000)
#define  WOV_stby_tcon_1_dmic_0_clk_sel_mask                                     (0x003C0000)
#define  WOV_stby_tcon_1_dmic_0_en_mask                                          (0x00020000)
#define  WOV_stby_tcon_1_gen_src_16k128_en_mask                                  (0x00010000)
#define  WOV_stby_tcon_1_gen_src_32k128_en_mask                                  (0x00008000)
#define  WOV_stby_tcon_1_gen_src_48k128_en_mask                                  (0x00004000)
#define  WOV_stby_tcon_1_gen_src_8k128_en_mask                                   (0x00002000)
#define  WOV_stby_tcon_1_pitch_det_en_mask                                       (0x00001000)
#define  WOV_stby_tcon_1_audio_ip_merlin5_standby_clk_sel_mask                   (0x00000800)
#define  WOV_stby_tcon_1_pitch_det_clk_sel_mask                                  (0x00000400)
#define  WOV_stby_tcon_1_adc0_ad_src_en_mask                                     (0x00000200)
#define  WOV_stby_tcon_1_adc1_ad_src_en_mask                                     (0x00000100)
#define  WOV_stby_tcon_1_vad_dbg_sel_mask                                        (0x0000000F)
#define  WOV_stby_tcon_1_adc_0_en(data)                                          (0x80000000&((data)<<31))
#define  WOV_stby_tcon_1_adc_1_en(data)                                          (0x40000000&((data)<<30))
#define  WOV_stby_tcon_1_adc_0_sample_rate(data)                                 (0x3C000000&((data)<<26))
#define  WOV_stby_tcon_1_adc_1_sample_rate(data)                                 (0x03C00000&((data)<<22))
#define  WOV_stby_tcon_1_dmic_0_clk_sel(data)                                    (0x003C0000&((data)<<18))
#define  WOV_stby_tcon_1_dmic_0_en(data)                                         (0x00020000&((data)<<17))
#define  WOV_stby_tcon_1_gen_src_16k128_en(data)                                 (0x00010000&((data)<<16))
#define  WOV_stby_tcon_1_gen_src_32k128_en(data)                                 (0x00008000&((data)<<15))
#define  WOV_stby_tcon_1_gen_src_48k128_en(data)                                 (0x00004000&((data)<<14))
#define  WOV_stby_tcon_1_gen_src_8k128_en(data)                                  (0x00002000&((data)<<13))
#define  WOV_stby_tcon_1_pitch_det_en(data)                                      (0x00001000&((data)<<12))
#define  WOV_stby_tcon_1_audio_ip_merlin5_standby_clk_sel(data)                  (0x00000800&((data)<<11))
#define  WOV_stby_tcon_1_pitch_det_clk_sel(data)                                 (0x00000400&((data)<<10))
#define  WOV_stby_tcon_1_adc0_ad_src_en(data)                                    (0x00000200&((data)<<9))
#define  WOV_stby_tcon_1_adc1_ad_src_en(data)                                    (0x00000100&((data)<<8))
#define  WOV_stby_tcon_1_vad_dbg_sel(data)                                       (0x0000000F&(data))
#define  WOV_stby_tcon_1_get_adc_0_en(data)                                      ((0x80000000&(data))>>31)
#define  WOV_stby_tcon_1_get_adc_1_en(data)                                      ((0x40000000&(data))>>30)
#define  WOV_stby_tcon_1_get_adc_0_sample_rate(data)                             ((0x3C000000&(data))>>26)
#define  WOV_stby_tcon_1_get_adc_1_sample_rate(data)                             ((0x03C00000&(data))>>22)
#define  WOV_stby_tcon_1_get_dmic_0_clk_sel(data)                                ((0x003C0000&(data))>>18)
#define  WOV_stby_tcon_1_get_dmic_0_en(data)                                     ((0x00020000&(data))>>17)
#define  WOV_stby_tcon_1_get_gen_src_16k128_en(data)                             ((0x00010000&(data))>>16)
#define  WOV_stby_tcon_1_get_gen_src_32k128_en(data)                             ((0x00008000&(data))>>15)
#define  WOV_stby_tcon_1_get_gen_src_48k128_en(data)                             ((0x00004000&(data))>>14)
#define  WOV_stby_tcon_1_get_gen_src_8k128_en(data)                              ((0x00002000&(data))>>13)
#define  WOV_stby_tcon_1_get_pitch_det_en(data)                                  ((0x00001000&(data))>>12)
#define  WOV_stby_tcon_1_get_audio_ip_merlin5_standby_clk_sel(data)              ((0x00000800&(data))>>11)
#define  WOV_stby_tcon_1_get_pitch_det_clk_sel(data)                             ((0x00000400&(data))>>10)
#define  WOV_stby_tcon_1_get_adc0_ad_src_en(data)                                ((0x00000200&(data))>>9)
#define  WOV_stby_tcon_1_get_adc1_ad_src_en(data)                                ((0x00000100&(data))>>8)
#define  WOV_stby_tcon_1_get_vad_dbg_sel(data)                                   (0x0000000F&(data))

#define  WOV_stby_ad0_1                                                         0x18060604
#define  WOV_stby_ad0_1_reg_addr                                                 "0xB8060604"
#define  WOV_stby_ad0_1_reg                                                      0xB8060604
#define  WOV_stby_ad0_1_inst_addr                                                "0x0001"
#define  set_WOV_stby_ad0_1_reg(data)                                            (*((volatile unsigned int*)WOV_stby_ad0_1_reg)=data)
#define  get_WOV_stby_ad0_1_reg                                                  (*((volatile unsigned int*)WOV_stby_ad0_1_reg))
#define  WOV_stby_ad0_1_adc0_ad_gain_l_shift                                     (8)
#define  WOV_stby_ad0_1_adc0_ad_gain_r_shift                                     (0)
#define  WOV_stby_ad0_1_adc0_ad_gain_l_mask                                      (0x00007F00)
#define  WOV_stby_ad0_1_adc0_ad_gain_r_mask                                      (0x0000007F)
#define  WOV_stby_ad0_1_adc0_ad_gain_l(data)                                     (0x00007F00&((data)<<8))
#define  WOV_stby_ad0_1_adc0_ad_gain_r(data)                                     (0x0000007F&(data))
#define  WOV_stby_ad0_1_get_adc0_ad_gain_l(data)                                 ((0x00007F00&(data))>>8)
#define  WOV_stby_ad0_1_get_adc0_ad_gain_r(data)                                 (0x0000007F&(data))

#define  WOV_stby_ad0_2                                                         0x18060608
#define  WOV_stby_ad0_2_reg_addr                                                 "0xB8060608"
#define  WOV_stby_ad0_2_reg                                                      0xB8060608
#define  WOV_stby_ad0_2_inst_addr                                                "0x0002"
#define  set_WOV_stby_ad0_2_reg(data)                                            (*((volatile unsigned int*)WOV_stby_ad0_2_reg)=data)
#define  get_WOV_stby_ad0_2_reg                                                  (*((volatile unsigned int*)WOV_stby_ad0_2_reg))
#define  WOV_stby_ad0_2_adc0_dmicl_ri_fa_sel_shift                               (31)
#define  WOV_stby_ad0_2_adc0_dmicr_ri_fa_sel_shift                               (30)
#define  WOV_stby_ad0_2_adc0_dmic_lpf1st_fc_sel_shift                            (27)
#define  WOV_stby_ad0_2_adc0_dmic_lpf2nd_fc_sel_shift                            (26)
#define  WOV_stby_ad0_2_adc0_ad_hpf_en_shift                                     (25)
#define  WOV_stby_ad0_2_adc0_ad_comp_gain_shift                                  (23)
#define  WOV_stby_ad0_2_adc0_ad_mute_l_shift                                     (22)
#define  WOV_stby_ad0_2_adc0_ad_mute_r_shift                                     (21)
#define  WOV_stby_ad0_2_adc0_ad_zdet_tout_shift                                  (19)
#define  WOV_stby_ad0_2_adc0_ad_zdet_func_shift                                  (17)
#define  WOV_stby_ad0_2_adc0_dmic_boost_gain_l_shift                             (15)
#define  WOV_stby_ad0_2_adc0_dmic_boost_gain_r_shift                             (13)
#define  WOV_stby_ad0_2_adc0_dmic_lpf1st_en_shift                                (12)
#define  WOV_stby_ad0_2_adc0_dmicl_ri_fa_sel_mask                                (0x80000000)
#define  WOV_stby_ad0_2_adc0_dmicr_ri_fa_sel_mask                                (0x40000000)
#define  WOV_stby_ad0_2_adc0_dmic_lpf1st_fc_sel_mask                             (0x38000000)
#define  WOV_stby_ad0_2_adc0_dmic_lpf2nd_fc_sel_mask                             (0x04000000)
#define  WOV_stby_ad0_2_adc0_ad_hpf_en_mask                                      (0x02000000)
#define  WOV_stby_ad0_2_adc0_ad_comp_gain_mask                                   (0x01800000)
#define  WOV_stby_ad0_2_adc0_ad_mute_l_mask                                      (0x00400000)
#define  WOV_stby_ad0_2_adc0_ad_mute_r_mask                                      (0x00200000)
#define  WOV_stby_ad0_2_adc0_ad_zdet_tout_mask                                   (0x00180000)
#define  WOV_stby_ad0_2_adc0_ad_zdet_func_mask                                   (0x00060000)
#define  WOV_stby_ad0_2_adc0_dmic_boost_gain_l_mask                              (0x00018000)
#define  WOV_stby_ad0_2_adc0_dmic_boost_gain_r_mask                              (0x00006000)
#define  WOV_stby_ad0_2_adc0_dmic_lpf1st_en_mask                                 (0x00001000)
#define  WOV_stby_ad0_2_adc0_dmicl_ri_fa_sel(data)                               (0x80000000&((data)<<31))
#define  WOV_stby_ad0_2_adc0_dmicr_ri_fa_sel(data)                               (0x40000000&((data)<<30))
#define  WOV_stby_ad0_2_adc0_dmic_lpf1st_fc_sel(data)                            (0x38000000&((data)<<27))
#define  WOV_stby_ad0_2_adc0_dmic_lpf2nd_fc_sel(data)                            (0x04000000&((data)<<26))
#define  WOV_stby_ad0_2_adc0_ad_hpf_en(data)                                     (0x02000000&((data)<<25))
#define  WOV_stby_ad0_2_adc0_ad_comp_gain(data)                                  (0x01800000&((data)<<23))
#define  WOV_stby_ad0_2_adc0_ad_mute_l(data)                                     (0x00400000&((data)<<22))
#define  WOV_stby_ad0_2_adc0_ad_mute_r(data)                                     (0x00200000&((data)<<21))
#define  WOV_stby_ad0_2_adc0_ad_zdet_tout(data)                                  (0x00180000&((data)<<19))
#define  WOV_stby_ad0_2_adc0_ad_zdet_func(data)                                  (0x00060000&((data)<<17))
#define  WOV_stby_ad0_2_adc0_dmic_boost_gain_l(data)                             (0x00018000&((data)<<15))
#define  WOV_stby_ad0_2_adc0_dmic_boost_gain_r(data)                             (0x00006000&((data)<<13))
#define  WOV_stby_ad0_2_adc0_dmic_lpf1st_en(data)                                (0x00001000&((data)<<12))
#define  WOV_stby_ad0_2_get_adc0_dmicl_ri_fa_sel(data)                           ((0x80000000&(data))>>31)
#define  WOV_stby_ad0_2_get_adc0_dmicr_ri_fa_sel(data)                           ((0x40000000&(data))>>30)
#define  WOV_stby_ad0_2_get_adc0_dmic_lpf1st_fc_sel(data)                        ((0x38000000&(data))>>27)
#define  WOV_stby_ad0_2_get_adc0_dmic_lpf2nd_fc_sel(data)                        ((0x04000000&(data))>>26)
#define  WOV_stby_ad0_2_get_adc0_ad_hpf_en(data)                                 ((0x02000000&(data))>>25)
#define  WOV_stby_ad0_2_get_adc0_ad_comp_gain(data)                              ((0x01800000&(data))>>23)
#define  WOV_stby_ad0_2_get_adc0_ad_mute_l(data)                                 ((0x00400000&(data))>>22)
#define  WOV_stby_ad0_2_get_adc0_ad_mute_r(data)                                 ((0x00200000&(data))>>21)
#define  WOV_stby_ad0_2_get_adc0_ad_zdet_tout(data)                              ((0x00180000&(data))>>19)
#define  WOV_stby_ad0_2_get_adc0_ad_zdet_func(data)                              ((0x00060000&(data))>>17)
#define  WOV_stby_ad0_2_get_adc0_dmic_boost_gain_l(data)                         ((0x00018000&(data))>>15)
#define  WOV_stby_ad0_2_get_adc0_dmic_boost_gain_r(data)                         ((0x00006000&(data))>>13)
#define  WOV_stby_ad0_2_get_adc0_dmic_lpf1st_en(data)                            ((0x00001000&(data))>>12)

#define  WOV_stby_ad1_1                                                         0x1806060C
#define  WOV_stby_ad1_1_reg_addr                                                 "0xB806060C"
#define  WOV_stby_ad1_1_reg                                                      0xB806060C
#define  WOV_stby_ad1_1_inst_addr                                                "0x0003"
#define  set_WOV_stby_ad1_1_reg(data)                                            (*((volatile unsigned int*)WOV_stby_ad1_1_reg)=data)
#define  get_WOV_stby_ad1_1_reg                                                  (*((volatile unsigned int*)WOV_stby_ad1_1_reg))
#define  WOV_stby_ad1_1_adc1_ad_gain_l_shift                                     (8)
#define  WOV_stby_ad1_1_adc1_ad_gain_r_shift                                     (0)
#define  WOV_stby_ad1_1_adc1_ad_gain_l_mask                                      (0x00007F00)
#define  WOV_stby_ad1_1_adc1_ad_gain_r_mask                                      (0x0000007F)
#define  WOV_stby_ad1_1_adc1_ad_gain_l(data)                                     (0x00007F00&((data)<<8))
#define  WOV_stby_ad1_1_adc1_ad_gain_r(data)                                     (0x0000007F&(data))
#define  WOV_stby_ad1_1_get_adc1_ad_gain_l(data)                                 ((0x00007F00&(data))>>8)
#define  WOV_stby_ad1_1_get_adc1_ad_gain_r(data)                                 (0x0000007F&(data))

#define  WOV_stby_ad1_2                                                         0x18060610
#define  WOV_stby_ad1_2_reg_addr                                                 "0xB8060610"
#define  WOV_stby_ad1_2_reg                                                      0xB8060610
#define  WOV_stby_ad1_2_inst_addr                                                "0x0004"
#define  set_WOV_stby_ad1_2_reg(data)                                            (*((volatile unsigned int*)WOV_stby_ad1_2_reg)=data)
#define  get_WOV_stby_ad1_2_reg                                                  (*((volatile unsigned int*)WOV_stby_ad1_2_reg))
#define  WOV_stby_ad1_2_adc1_dmicl_ri_fa_sel_shift                               (31)
#define  WOV_stby_ad1_2_adc1_dmicr_ri_fa_sel_shift                               (30)
#define  WOV_stby_ad1_2_adc1_dmic_lpf1st_fc_sel_shift                            (27)
#define  WOV_stby_ad1_2_adc1_dmic_lpf2nd_fc_sel_shift                            (26)
#define  WOV_stby_ad1_2_adc1_ad_hpf_en_shift                                     (25)
#define  WOV_stby_ad1_2_adc1_ad_comp_gain_shift                                  (23)
#define  WOV_stby_ad1_2_adc1_ad_mute_l_shift                                     (22)
#define  WOV_stby_ad1_2_adc1_ad_mute_r_shift                                     (21)
#define  WOV_stby_ad1_2_adc1_ad_zdet_tout_shift                                  (19)
#define  WOV_stby_ad1_2_adc1_ad_zdet_func_shift                                  (17)
#define  WOV_stby_ad1_2_adc1_dmic_boost_gain_l_shift                             (15)
#define  WOV_stby_ad1_2_adc1_dmic_boost_gain_r_shift                             (13)
#define  WOV_stby_ad1_2_adc1_dmic_lpf1st_en_shift                                (12)
#define  WOV_stby_ad1_2_adc1_dmicl_ri_fa_sel_mask                                (0x80000000)
#define  WOV_stby_ad1_2_adc1_dmicr_ri_fa_sel_mask                                (0x40000000)
#define  WOV_stby_ad1_2_adc1_dmic_lpf1st_fc_sel_mask                             (0x38000000)
#define  WOV_stby_ad1_2_adc1_dmic_lpf2nd_fc_sel_mask                             (0x04000000)
#define  WOV_stby_ad1_2_adc1_ad_hpf_en_mask                                      (0x02000000)
#define  WOV_stby_ad1_2_adc1_ad_comp_gain_mask                                   (0x01800000)
#define  WOV_stby_ad1_2_adc1_ad_mute_l_mask                                      (0x00400000)
#define  WOV_stby_ad1_2_adc1_ad_mute_r_mask                                      (0x00200000)
#define  WOV_stby_ad1_2_adc1_ad_zdet_tout_mask                                   (0x00180000)
#define  WOV_stby_ad1_2_adc1_ad_zdet_func_mask                                   (0x00060000)
#define  WOV_stby_ad1_2_adc1_dmic_boost_gain_l_mask                              (0x00018000)
#define  WOV_stby_ad1_2_adc1_dmic_boost_gain_r_mask                              (0x00006000)
#define  WOV_stby_ad1_2_adc1_dmic_lpf1st_en_mask                                 (0x00001000)
#define  WOV_stby_ad1_2_adc1_dmicl_ri_fa_sel(data)                               (0x80000000&((data)<<31))
#define  WOV_stby_ad1_2_adc1_dmicr_ri_fa_sel(data)                               (0x40000000&((data)<<30))
#define  WOV_stby_ad1_2_adc1_dmic_lpf1st_fc_sel(data)                            (0x38000000&((data)<<27))
#define  WOV_stby_ad1_2_adc1_dmic_lpf2nd_fc_sel(data)                            (0x04000000&((data)<<26))
#define  WOV_stby_ad1_2_adc1_ad_hpf_en(data)                                     (0x02000000&((data)<<25))
#define  WOV_stby_ad1_2_adc1_ad_comp_gain(data)                                  (0x01800000&((data)<<23))
#define  WOV_stby_ad1_2_adc1_ad_mute_l(data)                                     (0x00400000&((data)<<22))
#define  WOV_stby_ad1_2_adc1_ad_mute_r(data)                                     (0x00200000&((data)<<21))
#define  WOV_stby_ad1_2_adc1_ad_zdet_tout(data)                                  (0x00180000&((data)<<19))
#define  WOV_stby_ad1_2_adc1_ad_zdet_func(data)                                  (0x00060000&((data)<<17))
#define  WOV_stby_ad1_2_adc1_dmic_boost_gain_l(data)                             (0x00018000&((data)<<15))
#define  WOV_stby_ad1_2_adc1_dmic_boost_gain_r(data)                             (0x00006000&((data)<<13))
#define  WOV_stby_ad1_2_adc1_dmic_lpf1st_en(data)                                (0x00001000&((data)<<12))
#define  WOV_stby_ad1_2_get_adc1_dmicl_ri_fa_sel(data)                           ((0x80000000&(data))>>31)
#define  WOV_stby_ad1_2_get_adc1_dmicr_ri_fa_sel(data)                           ((0x40000000&(data))>>30)
#define  WOV_stby_ad1_2_get_adc1_dmic_lpf1st_fc_sel(data)                        ((0x38000000&(data))>>27)
#define  WOV_stby_ad1_2_get_adc1_dmic_lpf2nd_fc_sel(data)                        ((0x04000000&(data))>>26)
#define  WOV_stby_ad1_2_get_adc1_ad_hpf_en(data)                                 ((0x02000000&(data))>>25)
#define  WOV_stby_ad1_2_get_adc1_ad_comp_gain(data)                              ((0x01800000&(data))>>23)
#define  WOV_stby_ad1_2_get_adc1_ad_mute_l(data)                                 ((0x00400000&(data))>>22)
#define  WOV_stby_ad1_2_get_adc1_ad_mute_r(data)                                 ((0x00200000&(data))>>21)
#define  WOV_stby_ad1_2_get_adc1_ad_zdet_tout(data)                              ((0x00180000&(data))>>19)
#define  WOV_stby_ad1_2_get_adc1_ad_zdet_func(data)                              ((0x00060000&(data))>>17)
#define  WOV_stby_ad1_2_get_adc1_dmic_boost_gain_l(data)                         ((0x00018000&(data))>>15)
#define  WOV_stby_ad1_2_get_adc1_dmic_boost_gain_r(data)                         ((0x00006000&(data))>>13)
#define  WOV_stby_ad1_2_get_adc1_dmic_lpf1st_en(data)                            ((0x00001000&(data))>>12)

#define  WOV_wov_ctrl_1                                                         0x1806064C
#define  WOV_wov_ctrl_1_reg_addr                                                 "0xB806064C"
#define  WOV_wov_ctrl_1_reg                                                      0xB806064C
#define  WOV_wov_ctrl_1_inst_addr                                                "0x0005"
#define  set_WOV_wov_ctrl_1_reg(data)                                            (*((volatile unsigned int*)WOV_wov_ctrl_1_reg)=data)
#define  get_WOV_wov_ctrl_1_reg                                                  (*((volatile unsigned int*)WOV_wov_ctrl_1_reg))
#define  WOV_wov_ctrl_1_reg_dmic_clk_src_shift                                   (31)
#define  WOV_wov_ctrl_1_pitch_det_irq_en_shift                                   (30)
#define  WOV_wov_ctrl_1_hello_det_irq_en_shift                                   (29)
#define  WOV_wov_ctrl_1_reg_force_ls_en_shift                                    (23)
#define  WOV_wov_ctrl_1_reg_force_ls_val_shift                                   (22)
#define  WOV_wov_ctrl_1_reg_wov_sram_rd_ptr_shift                                (8)
#define  WOV_wov_ctrl_1_reg_wov_bit_mode_shift                                   (7)
#define  WOV_wov_ctrl_1_reg_wov_ch_sel_shift                                     (5)
#define  WOV_wov_ctrl_1_reg_wov_ch_mode_shift                                    (3)
#define  WOV_wov_ctrl_1_reg_wov_sram_wr_en_shift                                 (2)
#define  WOV_wov_ctrl_1_reg_wov_sram_rd_en_shift                                 (1)
#define  WOV_wov_ctrl_1_reg_wov_func_en_shift                                    (0)
#define  WOV_wov_ctrl_1_reg_dmic_clk_src_mask                                    (0x80000000)
#define  WOV_wov_ctrl_1_pitch_det_irq_en_mask                                    (0x40000000)
#define  WOV_wov_ctrl_1_hello_det_irq_en_mask                                    (0x20000000)
#define  WOV_wov_ctrl_1_reg_force_ls_en_mask                                     (0x00800000)
#define  WOV_wov_ctrl_1_reg_force_ls_val_mask                                    (0x00400000)
#define  WOV_wov_ctrl_1_reg_wov_sram_rd_ptr_mask                                 (0x003FFF00)
#define  WOV_wov_ctrl_1_reg_wov_bit_mode_mask                                    (0x00000080)
#define  WOV_wov_ctrl_1_reg_wov_ch_sel_mask                                      (0x00000060)
#define  WOV_wov_ctrl_1_reg_wov_ch_mode_mask                                     (0x00000018)
#define  WOV_wov_ctrl_1_reg_wov_sram_wr_en_mask                                  (0x00000004)
#define  WOV_wov_ctrl_1_reg_wov_sram_rd_en_mask                                  (0x00000002)
#define  WOV_wov_ctrl_1_reg_wov_func_en_mask                                     (0x00000001)
#define  WOV_wov_ctrl_1_reg_dmic_clk_src(data)                                   (0x80000000&((data)<<31))
#define  WOV_wov_ctrl_1_pitch_det_irq_en(data)                                   (0x40000000&((data)<<30))
#define  WOV_wov_ctrl_1_hello_det_irq_en(data)                                   (0x20000000&((data)<<29))
#define  WOV_wov_ctrl_1_reg_force_ls_en(data)                                    (0x00800000&((data)<<23))
#define  WOV_wov_ctrl_1_reg_force_ls_val(data)                                   (0x00400000&((data)<<22))
#define  WOV_wov_ctrl_1_reg_wov_sram_rd_ptr(data)                                (0x003FFF00&((data)<<8))
#define  WOV_wov_ctrl_1_reg_wov_bit_mode(data)                                   (0x00000080&((data)<<7))
#define  WOV_wov_ctrl_1_reg_wov_ch_sel(data)                                     (0x00000060&((data)<<5))
#define  WOV_wov_ctrl_1_reg_wov_ch_mode(data)                                    (0x00000018&((data)<<3))
#define  WOV_wov_ctrl_1_reg_wov_sram_wr_en(data)                                 (0x00000004&((data)<<2))
#define  WOV_wov_ctrl_1_reg_wov_sram_rd_en(data)                                 (0x00000002&((data)<<1))
#define  WOV_wov_ctrl_1_reg_wov_func_en(data)                                    (0x00000001&(data))
#define  WOV_wov_ctrl_1_get_reg_dmic_clk_src(data)                               ((0x80000000&(data))>>31)
#define  WOV_wov_ctrl_1_get_pitch_det_irq_en(data)                               ((0x40000000&(data))>>30)
#define  WOV_wov_ctrl_1_get_hello_det_irq_en(data)                               ((0x20000000&(data))>>29)
#define  WOV_wov_ctrl_1_get_reg_force_ls_en(data)                                ((0x00800000&(data))>>23)
#define  WOV_wov_ctrl_1_get_reg_force_ls_val(data)                               ((0x00400000&(data))>>22)
#define  WOV_wov_ctrl_1_get_reg_wov_sram_rd_ptr(data)                            ((0x003FFF00&(data))>>8)
#define  WOV_wov_ctrl_1_get_reg_wov_bit_mode(data)                               ((0x00000080&(data))>>7)
#define  WOV_wov_ctrl_1_get_reg_wov_ch_sel(data)                                 ((0x00000060&(data))>>5)
#define  WOV_wov_ctrl_1_get_reg_wov_ch_mode(data)                                ((0x00000018&(data))>>3)
#define  WOV_wov_ctrl_1_get_reg_wov_sram_wr_en(data)                             ((0x00000004&(data))>>2)
#define  WOV_wov_ctrl_1_get_reg_wov_sram_rd_en(data)                             ((0x00000002&(data))>>1)
#define  WOV_wov_ctrl_1_get_reg_wov_func_en(data)                                (0x00000001&(data))

#define  WOV_wov_ctrl_2                                                         0x18060650
#define  WOV_wov_ctrl_2_reg_addr                                                 "0xB8060650"
#define  WOV_wov_ctrl_2_reg                                                      0xB8060650
#define  WOV_wov_ctrl_2_inst_addr                                                "0x0006"
#define  set_WOV_wov_ctrl_2_reg(data)                                            (*((volatile unsigned int*)WOV_wov_ctrl_2_reg)=data)
#define  get_WOV_wov_ctrl_2_reg                                                  (*((volatile unsigned int*)WOV_wov_ctrl_2_reg))
#define  WOV_wov_ctrl_2_wov_sram_irq_wr_ptr_shift                                (16)
#define  WOV_wov_ctrl_2_wov_sram_wr_ptr_shift                                    (0)
#define  WOV_wov_ctrl_2_wov_sram_irq_wr_ptr_mask                                 (0x3FFF0000)
#define  WOV_wov_ctrl_2_wov_sram_wr_ptr_mask                                     (0x00003FFF)
#define  WOV_wov_ctrl_2_wov_sram_irq_wr_ptr(data)                                (0x3FFF0000&((data)<<16))
#define  WOV_wov_ctrl_2_wov_sram_wr_ptr(data)                                    (0x00003FFF&(data))
#define  WOV_wov_ctrl_2_get_wov_sram_irq_wr_ptr(data)                            ((0x3FFF0000&(data))>>16)
#define  WOV_wov_ctrl_2_get_wov_sram_wr_ptr(data)                                (0x00003FFF&(data))

#define  WOV_wov_ctrl_3                                                         0x18060654
#define  WOV_wov_ctrl_3_reg_addr                                                 "0xB8060654"
#define  WOV_wov_ctrl_3_reg                                                      0xB8060654
#define  WOV_wov_ctrl_3_inst_addr                                                "0x0007"
#define  set_WOV_wov_ctrl_3_reg(data)                                            (*((volatile unsigned int*)WOV_wov_ctrl_3_reg)=data)
#define  get_WOV_wov_ctrl_3_reg                                                  (*((volatile unsigned int*)WOV_wov_ctrl_3_reg))
#define  WOV_wov_ctrl_3_wov_sram_rd_ptr_shift                                    (0)
#define  WOV_wov_ctrl_3_wov_sram_rd_ptr_mask                                     (0x00003FFF)
#define  WOV_wov_ctrl_3_wov_sram_rd_ptr(data)                                    (0x00003FFF&(data))
#define  WOV_wov_ctrl_3_get_wov_sram_rd_ptr(data)                                (0x00003FFF&(data))

#define  WOV_wov_ctrl_4                                                         0x18060658
#define  WOV_wov_ctrl_4_reg_addr                                                 "0xB8060658"
#define  WOV_wov_ctrl_4_reg                                                      0xB8060658
#define  WOV_wov_ctrl_4_inst_addr                                                "0x0008"
#define  set_WOV_wov_ctrl_4_reg(data)                                            (*((volatile unsigned int*)WOV_wov_ctrl_4_reg)=data)
#define  get_WOV_wov_ctrl_4_reg                                                  (*((volatile unsigned int*)WOV_wov_ctrl_4_reg))
#define  WOV_wov_ctrl_4_reg_wov_ddr_start_addr_shift                             (0)
#define  WOV_wov_ctrl_4_reg_wov_ddr_start_addr_mask                              (0xFFFFFFFF)
#define  WOV_wov_ctrl_4_reg_wov_ddr_start_addr(data)                             (0xFFFFFFFF&(data))
#define  WOV_wov_ctrl_4_get_reg_wov_ddr_start_addr(data)                         (0xFFFFFFFF&(data))

#define  WOV_wov_ctrl_5                                                         0x1806065C
#define  WOV_wov_ctrl_5_reg_addr                                                 "0xB806065C"
#define  WOV_wov_ctrl_5_reg                                                      0xB806065C
#define  WOV_wov_ctrl_5_inst_addr                                                "0x0009"
#define  set_WOV_wov_ctrl_5_reg(data)                                            (*((volatile unsigned int*)WOV_wov_ctrl_5_reg)=data)
#define  get_WOV_wov_ctrl_5_reg                                                  (*((volatile unsigned int*)WOV_wov_ctrl_5_reg))
#define  WOV_wov_ctrl_5_reg_wov_ddr_ring_shift                                   (31)
#define  WOV_wov_ctrl_5_wov_ddr_ov_shift                                         (30)
#define  WOV_wov_ctrl_5_reg_wov_ddr_lenth_limt_shift                             (5)
#define  WOV_wov_ctrl_5_reg_wov_ddr_ring_mask                                    (0x80000000)
#define  WOV_wov_ctrl_5_wov_ddr_ov_mask                                          (0x40000000)
#define  WOV_wov_ctrl_5_reg_wov_ddr_lenth_limt_mask                              (0x3FFFFFE0)
#define  WOV_wov_ctrl_5_reg_wov_ddr_ring(data)                                   (0x80000000&((data)<<31))
#define  WOV_wov_ctrl_5_wov_ddr_ov(data)                                         (0x40000000&((data)<<30))
#define  WOV_wov_ctrl_5_reg_wov_ddr_lenth_limt(data)                             (0x3FFFFFE0&((data)<<5))
#define  WOV_wov_ctrl_5_get_reg_wov_ddr_ring(data)                               ((0x80000000&(data))>>31)
#define  WOV_wov_ctrl_5_get_wov_ddr_ov(data)                                     ((0x40000000&(data))>>30)
#define  WOV_wov_ctrl_5_get_reg_wov_ddr_lenth_limt(data)                         ((0x3FFFFFE0&(data))>>5)

#define  WOV_wov_ctrl_6                                                         0x18060660
#define  WOV_wov_ctrl_6_reg_addr                                                 "0xB8060660"
#define  WOV_wov_ctrl_6_reg                                                      0xB8060660
#define  WOV_wov_ctrl_6_inst_addr                                                "0x000A"
#define  set_WOV_wov_ctrl_6_reg(data)                                            (*((volatile unsigned int*)WOV_wov_ctrl_6_reg)=data)
#define  get_WOV_wov_ctrl_6_reg                                                  (*((volatile unsigned int*)WOV_wov_ctrl_6_reg))
#define  WOV_wov_ctrl_6_wov_ddr_wr_ptr_shift                                     (5)
#define  WOV_wov_ctrl_6_wov_ddr_wr_ptr_mask                                      (0xFFFFFFE0)
#define  WOV_wov_ctrl_6_wov_ddr_wr_ptr(data)                                     (0xFFFFFFE0&((data)<<5))
#define  WOV_wov_ctrl_6_get_wov_ddr_wr_ptr(data)                                 ((0xFFFFFFE0&(data))>>5)

#define  WOV_wov_ctrl_7                                                         0x18060664
#define  WOV_wov_ctrl_7_reg_addr                                                 "0xB8060664"
#define  WOV_wov_ctrl_7_reg                                                      0xB8060664
#define  WOV_wov_ctrl_7_inst_addr                                                "0x000B"
#define  set_WOV_wov_ctrl_7_reg(data)                                            (*((volatile unsigned int*)WOV_wov_ctrl_7_reg)=data)
#define  get_WOV_wov_ctrl_7_reg                                                  (*((volatile unsigned int*)WOV_wov_ctrl_7_reg))
#define  WOV_wov_ctrl_7_wov_bist_done_shift                                      (31)
#define  WOV_wov_ctrl_7_wov_bist_fail_0_shift                                    (30)
#define  WOV_wov_ctrl_7_wov_bist_fail_1_shift                                    (29)
#define  WOV_wov_ctrl_7_wov_drf_bist_done_shift                                  (28)
#define  WOV_wov_ctrl_7_wov_drf_bist_fail_0_shift                                (27)
#define  WOV_wov_ctrl_7_wov_drf_bist_fail_1_shift                                (26)
#define  WOV_wov_ctrl_7_wov_drf_start_pause_shift                                (25)
#define  WOV_wov_ctrl_7_wov_bist_fail_group_shift                                (24)
#define  WOV_wov_ctrl_7_wov_drf_fail_group_shift                                 (23)
#define  WOV_wov_ctrl_7_reg_wov_bist_clk_sel_shift                               (13)
#define  WOV_wov_ctrl_7_reg_wov_rm_1_shift                                       (9)
#define  WOV_wov_ctrl_7_reg_wov_rme_1_shift                                      (8)
#define  WOV_wov_ctrl_7_reg_wov_rm_0_shift                                       (4)
#define  WOV_wov_ctrl_7_reg_wov_rme_0_shift                                      (3)
#define  WOV_wov_ctrl_7_reg_wov_drf_test_resume_shift                            (2)
#define  WOV_wov_ctrl_7_reg_wov_drf_bist_mode_shift                              (1)
#define  WOV_wov_ctrl_7_reg_wov_bist_mode_shift                                  (0)
#define  WOV_wov_ctrl_7_wov_bist_done_mask                                       (0x80000000)
#define  WOV_wov_ctrl_7_wov_bist_fail_0_mask                                     (0x40000000)
#define  WOV_wov_ctrl_7_wov_bist_fail_1_mask                                     (0x20000000)
#define  WOV_wov_ctrl_7_wov_drf_bist_done_mask                                   (0x10000000)
#define  WOV_wov_ctrl_7_wov_drf_bist_fail_0_mask                                 (0x08000000)
#define  WOV_wov_ctrl_7_wov_drf_bist_fail_1_mask                                 (0x04000000)
#define  WOV_wov_ctrl_7_wov_drf_start_pause_mask                                 (0x02000000)
#define  WOV_wov_ctrl_7_wov_bist_fail_group_mask                                 (0x01000000)
#define  WOV_wov_ctrl_7_wov_drf_fail_group_mask                                  (0x00800000)
#define  WOV_wov_ctrl_7_reg_wov_bist_clk_sel_mask                                (0x00002000)
#define  WOV_wov_ctrl_7_reg_wov_rm_1_mask                                        (0x00001E00)
#define  WOV_wov_ctrl_7_reg_wov_rme_1_mask                                       (0x00000100)
#define  WOV_wov_ctrl_7_reg_wov_rm_0_mask                                        (0x000000F0)
#define  WOV_wov_ctrl_7_reg_wov_rme_0_mask                                       (0x00000008)
#define  WOV_wov_ctrl_7_reg_wov_drf_test_resume_mask                             (0x00000004)
#define  WOV_wov_ctrl_7_reg_wov_drf_bist_mode_mask                               (0x00000002)
#define  WOV_wov_ctrl_7_reg_wov_bist_mode_mask                                   (0x00000001)
#define  WOV_wov_ctrl_7_wov_bist_done(data)                                      (0x80000000&((data)<<31))
#define  WOV_wov_ctrl_7_wov_bist_fail_0(data)                                    (0x40000000&((data)<<30))
#define  WOV_wov_ctrl_7_wov_bist_fail_1(data)                                    (0x20000000&((data)<<29))
#define  WOV_wov_ctrl_7_wov_drf_bist_done(data)                                  (0x10000000&((data)<<28))
#define  WOV_wov_ctrl_7_wov_drf_bist_fail_0(data)                                (0x08000000&((data)<<27))
#define  WOV_wov_ctrl_7_wov_drf_bist_fail_1(data)                                (0x04000000&((data)<<26))
#define  WOV_wov_ctrl_7_wov_drf_start_pause(data)                                (0x02000000&((data)<<25))
#define  WOV_wov_ctrl_7_wov_bist_fail_group(data)                                (0x01000000&((data)<<24))
#define  WOV_wov_ctrl_7_wov_drf_fail_group(data)                                 (0x00800000&((data)<<23))
#define  WOV_wov_ctrl_7_reg_wov_bist_clk_sel(data)                               (0x00002000&((data)<<13))
#define  WOV_wov_ctrl_7_reg_wov_rm_1(data)                                       (0x00001E00&((data)<<9))
#define  WOV_wov_ctrl_7_reg_wov_rme_1(data)                                      (0x00000100&((data)<<8))
#define  WOV_wov_ctrl_7_reg_wov_rm_0(data)                                       (0x000000F0&((data)<<4))
#define  WOV_wov_ctrl_7_reg_wov_rme_0(data)                                      (0x00000008&((data)<<3))
#define  WOV_wov_ctrl_7_reg_wov_drf_test_resume(data)                            (0x00000004&((data)<<2))
#define  WOV_wov_ctrl_7_reg_wov_drf_bist_mode(data)                              (0x00000002&((data)<<1))
#define  WOV_wov_ctrl_7_reg_wov_bist_mode(data)                                  (0x00000001&(data))
#define  WOV_wov_ctrl_7_get_wov_bist_done(data)                                  ((0x80000000&(data))>>31)
#define  WOV_wov_ctrl_7_get_wov_bist_fail_0(data)                                ((0x40000000&(data))>>30)
#define  WOV_wov_ctrl_7_get_wov_bist_fail_1(data)                                ((0x20000000&(data))>>29)
#define  WOV_wov_ctrl_7_get_wov_drf_bist_done(data)                              ((0x10000000&(data))>>28)
#define  WOV_wov_ctrl_7_get_wov_drf_bist_fail_0(data)                            ((0x08000000&(data))>>27)
#define  WOV_wov_ctrl_7_get_wov_drf_bist_fail_1(data)                            ((0x04000000&(data))>>26)
#define  WOV_wov_ctrl_7_get_wov_drf_start_pause(data)                            ((0x02000000&(data))>>25)
#define  WOV_wov_ctrl_7_get_wov_bist_fail_group(data)                            ((0x01000000&(data))>>24)
#define  WOV_wov_ctrl_7_get_wov_drf_fail_group(data)                             ((0x00800000&(data))>>23)
#define  WOV_wov_ctrl_7_get_reg_wov_bist_clk_sel(data)                           ((0x00002000&(data))>>13)
#define  WOV_wov_ctrl_7_get_reg_wov_rm_1(data)                                   ((0x00001E00&(data))>>9)
#define  WOV_wov_ctrl_7_get_reg_wov_rme_1(data)                                  ((0x00000100&(data))>>8)
#define  WOV_wov_ctrl_7_get_reg_wov_rm_0(data)                                   ((0x000000F0&(data))>>4)
#define  WOV_wov_ctrl_7_get_reg_wov_rme_0(data)                                  ((0x00000008&(data))>>3)
#define  WOV_wov_ctrl_7_get_reg_wov_drf_test_resume(data)                        ((0x00000004&(data))>>2)
#define  WOV_wov_ctrl_7_get_reg_wov_drf_bist_mode(data)                          ((0x00000002&(data))>>1)
#define  WOV_wov_ctrl_7_get_reg_wov_bist_mode(data)                              (0x00000001&(data))

#define  WOV_wov_vad_1                                                          0x18060668
#define  WOV_wov_vad_1_reg_addr                                                  "0xB8060668"
#define  WOV_wov_vad_1_reg                                                       0xB8060668
#define  WOV_wov_vad_1_inst_addr                                                 "0x000C"
#define  set_WOV_wov_vad_1_reg(data)                                             (*((volatile unsigned int*)WOV_wov_vad_1_reg)=data)
#define  get_WOV_wov_vad_1_reg                                                   (*((volatile unsigned int*)WOV_wov_vad_1_reg))
#define  WOV_wov_vad_1_clk_vad_test_shift                                        (31)
#define  WOV_wov_vad_1_test_wreq_shift                                           (30)
#define  WOV_wov_vad_1_vad_in_sel_shift                                          (17)
#define  WOV_wov_vad_1_vad_debug_en_shift                                        (16)
#define  WOV_wov_vad_1_test_data_in_shift                                        (0)
#define  WOV_wov_vad_1_clk_vad_test_mask                                         (0x80000000)
#define  WOV_wov_vad_1_test_wreq_mask                                            (0x40000000)
#define  WOV_wov_vad_1_vad_in_sel_mask                                           (0x000E0000)
#define  WOV_wov_vad_1_vad_debug_en_mask                                         (0x00010000)
#define  WOV_wov_vad_1_test_data_in_mask                                         (0x0000FFFF)
#define  WOV_wov_vad_1_clk_vad_test(data)                                        (0x80000000&((data)<<31))
#define  WOV_wov_vad_1_test_wreq(data)                                           (0x40000000&((data)<<30))
#define  WOV_wov_vad_1_vad_in_sel(data)                                          (0x000E0000&((data)<<17))
#define  WOV_wov_vad_1_vad_debug_en(data)                                        (0x00010000&((data)<<16))
#define  WOV_wov_vad_1_test_data_in(data)                                        (0x0000FFFF&(data))
#define  WOV_wov_vad_1_get_clk_vad_test(data)                                    ((0x80000000&(data))>>31)
#define  WOV_wov_vad_1_get_test_wreq(data)                                       ((0x40000000&(data))>>30)
#define  WOV_wov_vad_1_get_vad_in_sel(data)                                      ((0x000E0000&(data))>>17)
#define  WOV_wov_vad_1_get_vad_debug_en(data)                                    ((0x00010000&(data))>>16)
#define  WOV_wov_vad_1_get_test_data_in(data)                                    (0x0000FFFF&(data))

#define  WOV_mm_vad_energy4                                                     0x18060688
#define  WOV_mm_vad_energy4_reg_addr                                             "0xB8060688"
#define  WOV_mm_vad_energy4_reg                                                  0xB8060688
#define  WOV_mm_vad_energy4_inst_addr                                            "0x000D"
#define  set_WOV_mm_vad_energy4_reg(data)                                        (*((volatile unsigned int*)WOV_mm_vad_energy4_reg)=data)
#define  get_WOV_mm_vad_energy4_reg                                              (*((volatile unsigned int*)WOV_mm_vad_energy4_reg))
#define  WOV_mm_vad_energy4_pitch_det_flag_shift                                 (31)
#define  WOV_mm_vad_energy4_pitch_det_flag_hold_shift                            (30)
#define  WOV_mm_vad_energy4_hello_flag_shift                                     (29)
#define  WOV_mm_vad_energy4_hello_flag_hold_shift                                (28)
#define  WOV_mm_vad_energy4_pitch_det_initial_time_shift                         (22)
#define  WOV_mm_vad_energy4_pitch_det_lt_param_a_sel_shift                       (20)
#define  WOV_mm_vad_energy4_pitch_det_lt_update_counter_thr_shift                (16)
#define  WOV_mm_vad_energy4_pitch_det_lt_update_mode_shift                       (14)
#define  WOV_mm_vad_energy4_pitch_det_mv_thr_shift                               (10)
#define  WOV_mm_vad_energy4_pitch_det_no_speech_counter_thr_shift                (1)
#define  WOV_mm_vad_energy4_pitch_det_onset_high_sel_en_shift                    (0)
#define  WOV_mm_vad_energy4_pitch_det_flag_mask                                  (0x80000000)
#define  WOV_mm_vad_energy4_pitch_det_flag_hold_mask                             (0x40000000)
#define  WOV_mm_vad_energy4_hello_flag_mask                                      (0x20000000)
#define  WOV_mm_vad_energy4_hello_flag_hold_mask                                 (0x10000000)
#define  WOV_mm_vad_energy4_pitch_det_initial_time_mask                          (0x0FC00000)
#define  WOV_mm_vad_energy4_pitch_det_lt_param_a_sel_mask                        (0x00300000)
#define  WOV_mm_vad_energy4_pitch_det_lt_update_counter_thr_mask                 (0x000F0000)
#define  WOV_mm_vad_energy4_pitch_det_lt_update_mode_mask                        (0x0000C000)
#define  WOV_mm_vad_energy4_pitch_det_mv_thr_mask                                (0x00003C00)
#define  WOV_mm_vad_energy4_pitch_det_no_speech_counter_thr_mask                 (0x000003FE)
#define  WOV_mm_vad_energy4_pitch_det_onset_high_sel_en_mask                     (0x00000001)
#define  WOV_mm_vad_energy4_pitch_det_flag(data)                                 (0x80000000&((data)<<31))
#define  WOV_mm_vad_energy4_pitch_det_flag_hold(data)                            (0x40000000&((data)<<30))
#define  WOV_mm_vad_energy4_hello_flag(data)                                     (0x20000000&((data)<<29))
#define  WOV_mm_vad_energy4_hello_flag_hold(data)                                (0x10000000&((data)<<28))
#define  WOV_mm_vad_energy4_pitch_det_initial_time(data)                         (0x0FC00000&((data)<<22))
#define  WOV_mm_vad_energy4_pitch_det_lt_param_a_sel(data)                       (0x00300000&((data)<<20))
#define  WOV_mm_vad_energy4_pitch_det_lt_update_counter_thr(data)                (0x000F0000&((data)<<16))
#define  WOV_mm_vad_energy4_pitch_det_lt_update_mode(data)                       (0x0000C000&((data)<<14))
#define  WOV_mm_vad_energy4_pitch_det_mv_thr(data)                               (0x00003C00&((data)<<10))
#define  WOV_mm_vad_energy4_pitch_det_no_speech_counter_thr(data)                (0x000003FE&((data)<<1))
#define  WOV_mm_vad_energy4_pitch_det_onset_high_sel_en(data)                    (0x00000001&(data))
#define  WOV_mm_vad_energy4_get_pitch_det_flag(data)                             ((0x80000000&(data))>>31)
#define  WOV_mm_vad_energy4_get_pitch_det_flag_hold(data)                        ((0x40000000&(data))>>30)
#define  WOV_mm_vad_energy4_get_hello_flag(data)                                 ((0x20000000&(data))>>29)
#define  WOV_mm_vad_energy4_get_hello_flag_hold(data)                            ((0x10000000&(data))>>28)
#define  WOV_mm_vad_energy4_get_pitch_det_initial_time(data)                     ((0x0FC00000&(data))>>22)
#define  WOV_mm_vad_energy4_get_pitch_det_lt_param_a_sel(data)                   ((0x00300000&(data))>>20)
#define  WOV_mm_vad_energy4_get_pitch_det_lt_update_counter_thr(data)            ((0x000F0000&(data))>>16)
#define  WOV_mm_vad_energy4_get_pitch_det_lt_update_mode(data)                   ((0x0000C000&(data))>>14)
#define  WOV_mm_vad_energy4_get_pitch_det_mv_thr(data)                           ((0x00003C00&(data))>>10)
#define  WOV_mm_vad_energy4_get_pitch_det_no_speech_counter_thr(data)            ((0x000003FE&(data))>>1)
#define  WOV_mm_vad_energy4_get_pitch_det_onset_high_sel_en(data)                (0x00000001&(data))

#define  WOV_mm_vad_energy5                                                     0x1806068C
#define  WOV_mm_vad_energy5_reg_addr                                             "0xB806068C"
#define  WOV_mm_vad_energy5_reg                                                  0xB806068C
#define  WOV_mm_vad_energy5_inst_addr                                            "0x000E"
#define  set_WOV_mm_vad_energy5_reg(data)                                        (*((volatile unsigned int*)WOV_mm_vad_energy5_reg)=data)
#define  get_WOV_mm_vad_energy5_reg                                              (*((volatile unsigned int*)WOV_mm_vad_energy5_reg))
#define  WOV_mm_vad_energy5_pitch_det_peak_search_thr_shift                      (19)
#define  WOV_mm_vad_energy5_pitch_det_peak_search_thr2_shift                     (9)
#define  WOV_mm_vad_energy5_pitch_det_quasi_speech_thr_shift                     (5)
#define  WOV_mm_vad_energy5_pitch_det_od_thr_default_shift                       (0)
#define  WOV_mm_vad_energy5_pitch_det_peak_search_thr_mask                       (0x1FF80000)
#define  WOV_mm_vad_energy5_pitch_det_peak_search_thr2_mask                      (0x0007FE00)
#define  WOV_mm_vad_energy5_pitch_det_quasi_speech_thr_mask                      (0x000001E0)
#define  WOV_mm_vad_energy5_pitch_det_od_thr_default_mask                        (0x0000001F)
#define  WOV_mm_vad_energy5_pitch_det_peak_search_thr(data)                      (0x1FF80000&((data)<<19))
#define  WOV_mm_vad_energy5_pitch_det_peak_search_thr2(data)                     (0x0007FE00&((data)<<9))
#define  WOV_mm_vad_energy5_pitch_det_quasi_speech_thr(data)                     (0x000001E0&((data)<<5))
#define  WOV_mm_vad_energy5_pitch_det_od_thr_default(data)                       (0x0000001F&(data))
#define  WOV_mm_vad_energy5_get_pitch_det_peak_search_thr(data)                  ((0x1FF80000&(data))>>19)
#define  WOV_mm_vad_energy5_get_pitch_det_peak_search_thr2(data)                 ((0x0007FE00&(data))>>9)
#define  WOV_mm_vad_energy5_get_pitch_det_quasi_speech_thr(data)                 ((0x000001E0&(data))>>5)
#define  WOV_mm_vad_energy5_get_pitch_det_od_thr_default(data)                   (0x0000001F&(data))

#define  WOV_mm_vad_energy6                                                     0x18060690
#define  WOV_mm_vad_energy6_reg_addr                                             "0xB8060690"
#define  WOV_mm_vad_energy6_reg                                                  0xB8060690
#define  WOV_mm_vad_energy6_inst_addr                                            "0x000F"
#define  set_WOV_mm_vad_energy6_reg(data)                                        (*((volatile unsigned int*)WOV_mm_vad_energy6_reg)=data)
#define  get_WOV_mm_vad_energy6_reg                                              (*((volatile unsigned int*)WOV_mm_vad_energy6_reg))
#define  WOV_mm_vad_energy6_pitch_det_od_thr_lowerbound_shift                    (27)
#define  WOV_mm_vad_energy6_pitch_det_thr_lt_updatech_thr_shift                  (23)
#define  WOV_mm_vad_energy6_pitch_det_thr_st_valid_shift                         (10)
#define  WOV_mm_vad_energy6_pitch_det_od_thr_step_shift                          (5)
#define  WOV_mm_vad_energy6_pitch_det_od_thr_upperbound_shift                    (0)
#define  WOV_mm_vad_energy6_pitch_det_od_thr_lowerbound_mask                     (0xF8000000)
#define  WOV_mm_vad_energy6_pitch_det_thr_lt_updatech_thr_mask                   (0x07800000)
#define  WOV_mm_vad_energy6_pitch_det_thr_st_valid_mask                          (0x007FFC00)
#define  WOV_mm_vad_energy6_pitch_det_od_thr_step_mask                           (0x000003E0)
#define  WOV_mm_vad_energy6_pitch_det_od_thr_upperbound_mask                     (0x0000001F)
#define  WOV_mm_vad_energy6_pitch_det_od_thr_lowerbound(data)                    (0xF8000000&((data)<<27))
#define  WOV_mm_vad_energy6_pitch_det_thr_lt_updatech_thr(data)                  (0x07800000&((data)<<23))
#define  WOV_mm_vad_energy6_pitch_det_thr_st_valid(data)                         (0x007FFC00&((data)<<10))
#define  WOV_mm_vad_energy6_pitch_det_od_thr_step(data)                          (0x000003E0&((data)<<5))
#define  WOV_mm_vad_energy6_pitch_det_od_thr_upperbound(data)                    (0x0000001F&(data))
#define  WOV_mm_vad_energy6_get_pitch_det_od_thr_lowerbound(data)                ((0xF8000000&(data))>>27)
#define  WOV_mm_vad_energy6_get_pitch_det_thr_lt_updatech_thr(data)              ((0x07800000&(data))>>23)
#define  WOV_mm_vad_energy6_get_pitch_det_thr_st_valid(data)                     ((0x007FFC00&(data))>>10)
#define  WOV_mm_vad_energy6_get_pitch_det_od_thr_step(data)                      ((0x000003E0&(data))>>5)
#define  WOV_mm_vad_energy6_get_pitch_det_od_thr_upperbound(data)                (0x0000001F&(data))

#define  WOV_mm_vad_energy7                                                     0x18060694
#define  WOV_mm_vad_energy7_reg_addr                                             "0xB8060694"
#define  WOV_mm_vad_energy7_reg                                                  0xB8060694
#define  WOV_mm_vad_energy7_inst_addr                                            "0x0010"
#define  set_WOV_mm_vad_energy7_reg(data)                                        (*((volatile unsigned int*)WOV_mm_vad_energy7_reg)=data)
#define  get_WOV_mm_vad_energy7_reg                                              (*((volatile unsigned int*)WOV_mm_vad_energy7_reg))
#define  WOV_mm_vad_energy7_pitch_det_clr_shift                                  (31)
#define  WOV_mm_vad_energy7_pitch_det_onset_mask_shift                           (25)
#define  WOV_mm_vad_energy7_pitch_det_thr_onset_adapt_en_shift                   (24)
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_1_shift                       (23)
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_2_shift                       (22)
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_3_shift                       (21)
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_4_shift                       (20)
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_5_shift                       (19)
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_6_shift                       (18)
#define  WOV_mm_vad_energy7_pitch_det_lt_thr_low_shift                           (13)
#define  WOV_mm_vad_energy7_pitch_det_lt_thr_high_shift                          (8)
#define  WOV_mm_vad_energy7_pitch_det_clr_mask                                   (0x80000000)
#define  WOV_mm_vad_energy7_pitch_det_onset_mask_mask                            (0x7E000000)
#define  WOV_mm_vad_energy7_pitch_det_thr_onset_adapt_en_mask                    (0x01000000)
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_1_mask                        (0x00800000)
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_2_mask                        (0x00400000)
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_3_mask                        (0x00200000)
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_4_mask                        (0x00100000)
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_5_mask                        (0x00080000)
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_6_mask                        (0x00040000)
#define  WOV_mm_vad_energy7_pitch_det_lt_thr_low_mask                            (0x0003E000)
#define  WOV_mm_vad_energy7_pitch_det_lt_thr_high_mask                           (0x00001F00)
#define  WOV_mm_vad_energy7_pitch_det_clr(data)                                  (0x80000000&((data)<<31))
#define  WOV_mm_vad_energy7_pitch_det_onset_mask(data)                           (0x7E000000&((data)<<25))
#define  WOV_mm_vad_energy7_pitch_det_thr_onset_adapt_en(data)                   (0x01000000&((data)<<24))
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_1(data)                       (0x00800000&((data)<<23))
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_2(data)                       (0x00400000&((data)<<22))
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_3(data)                       (0x00200000&((data)<<21))
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_4(data)                       (0x00100000&((data)<<20))
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_5(data)                       (0x00080000&((data)<<19))
#define  WOV_mm_vad_energy7_pitch_det_mute_subband_6(data)                       (0x00040000&((data)<<18))
#define  WOV_mm_vad_energy7_pitch_det_lt_thr_low(data)                           (0x0003E000&((data)<<13))
#define  WOV_mm_vad_energy7_pitch_det_lt_thr_high(data)                          (0x00001F00&((data)<<8))
#define  WOV_mm_vad_energy7_get_pitch_det_clr(data)                              ((0x80000000&(data))>>31)
#define  WOV_mm_vad_energy7_get_pitch_det_onset_mask(data)                       ((0x7E000000&(data))>>25)
#define  WOV_mm_vad_energy7_get_pitch_det_thr_onset_adapt_en(data)               ((0x01000000&(data))>>24)
#define  WOV_mm_vad_energy7_get_pitch_det_mute_subband_1(data)                   ((0x00800000&(data))>>23)
#define  WOV_mm_vad_energy7_get_pitch_det_mute_subband_2(data)                   ((0x00400000&(data))>>22)
#define  WOV_mm_vad_energy7_get_pitch_det_mute_subband_3(data)                   ((0x00200000&(data))>>21)
#define  WOV_mm_vad_energy7_get_pitch_det_mute_subband_4(data)                   ((0x00100000&(data))>>20)
#define  WOV_mm_vad_energy7_get_pitch_det_mute_subband_5(data)                   ((0x00080000&(data))>>19)
#define  WOV_mm_vad_energy7_get_pitch_det_mute_subband_6(data)                   ((0x00040000&(data))>>18)
#define  WOV_mm_vad_energy7_get_pitch_det_lt_thr_low(data)                       ((0x0003E000&(data))>>13)
#define  WOV_mm_vad_energy7_get_pitch_det_lt_thr_high(data)                      ((0x00001F00&(data))>>8)

#define  WOV_mm_vad_energy8                                                     0x18060698
#define  WOV_mm_vad_energy8_reg_addr                                             "0xB8060698"
#define  WOV_mm_vad_energy8_reg                                                  0xB8060698
#define  WOV_mm_vad_energy8_inst_addr                                            "0x0011"
#define  set_WOV_mm_vad_energy8_reg(data)                                        (*((volatile unsigned int*)WOV_mm_vad_energy8_reg)=data)
#define  get_WOV_mm_vad_energy8_reg                                              (*((volatile unsigned int*)WOV_mm_vad_energy8_reg))
#define  WOV_mm_vad_energy8_pitch_det_st_valid_thr_low_shift                     (18)
#define  WOV_mm_vad_energy8_pitch_det_st_valid_thr_high_shift                    (5)
#define  WOV_mm_vad_energy8_pitch_det_high_cnt_thr_1_shift                       (0)
#define  WOV_mm_vad_energy8_pitch_det_st_valid_thr_low_mask                      (0x7FFC0000)
#define  WOV_mm_vad_energy8_pitch_det_st_valid_thr_high_mask                     (0x0003FFE0)
#define  WOV_mm_vad_energy8_pitch_det_high_cnt_thr_1_mask                        (0x0000001F)
#define  WOV_mm_vad_energy8_pitch_det_st_valid_thr_low(data)                     (0x7FFC0000&((data)<<18))
#define  WOV_mm_vad_energy8_pitch_det_st_valid_thr_high(data)                    (0x0003FFE0&((data)<<5))
#define  WOV_mm_vad_energy8_pitch_det_high_cnt_thr_1(data)                       (0x0000001F&(data))
#define  WOV_mm_vad_energy8_get_pitch_det_st_valid_thr_low(data)                 ((0x7FFC0000&(data))>>18)
#define  WOV_mm_vad_energy8_get_pitch_det_st_valid_thr_high(data)                ((0x0003FFE0&(data))>>5)
#define  WOV_mm_vad_energy8_get_pitch_det_high_cnt_thr_1(data)                   (0x0000001F&(data))

#define  WOV_mm_vad_energy9                                                     0x1806069C
#define  WOV_mm_vad_energy9_reg_addr                                             "0xB806069C"
#define  WOV_mm_vad_energy9_reg                                                  0xB806069C
#define  WOV_mm_vad_energy9_inst_addr                                            "0x0012"
#define  set_WOV_mm_vad_energy9_reg(data)                                        (*((volatile unsigned int*)WOV_mm_vad_energy9_reg)=data)
#define  get_WOV_mm_vad_energy9_reg                                              (*((volatile unsigned int*)WOV_mm_vad_energy9_reg))
#define  WOV_mm_vad_energy9_pitch_det_high_cnt_thr_2_shift                       (27)
#define  WOV_mm_vad_energy9_pitch_det_high_cnt_false_thr_shift                   (24)
#define  WOV_mm_vad_energy9_pitch_det_low_cnt_thr_shift                          (20)
#define  WOV_mm_vad_energy9_pitch_det_low_cnt_thr_max_shift                      (14)
#define  WOV_mm_vad_energy9_pitch_det_pause_cnt_thr_shift                        (10)
#define  WOV_mm_vad_energy9_pitch_det_pause_cnt_times_thr_shift                  (7)
#define  WOV_mm_vad_energy9_pitch_det_lt_energy_thr_low_shift                    (0)
#define  WOV_mm_vad_energy9_pitch_det_high_cnt_thr_2_mask                        (0xF8000000)
#define  WOV_mm_vad_energy9_pitch_det_high_cnt_false_thr_mask                    (0x07000000)
#define  WOV_mm_vad_energy9_pitch_det_low_cnt_thr_mask                           (0x00F00000)
#define  WOV_mm_vad_energy9_pitch_det_low_cnt_thr_max_mask                       (0x000FC000)
#define  WOV_mm_vad_energy9_pitch_det_pause_cnt_thr_mask                         (0x00003C00)
#define  WOV_mm_vad_energy9_pitch_det_pause_cnt_times_thr_mask                   (0x00000380)
#define  WOV_mm_vad_energy9_pitch_det_lt_energy_thr_low_mask                     (0x0000007F)
#define  WOV_mm_vad_energy9_pitch_det_high_cnt_thr_2(data)                       (0xF8000000&((data)<<27))
#define  WOV_mm_vad_energy9_pitch_det_high_cnt_false_thr(data)                   (0x07000000&((data)<<24))
#define  WOV_mm_vad_energy9_pitch_det_low_cnt_thr(data)                          (0x00F00000&((data)<<20))
#define  WOV_mm_vad_energy9_pitch_det_low_cnt_thr_max(data)                      (0x000FC000&((data)<<14))
#define  WOV_mm_vad_energy9_pitch_det_pause_cnt_thr(data)                        (0x00003C00&((data)<<10))
#define  WOV_mm_vad_energy9_pitch_det_pause_cnt_times_thr(data)                  (0x00000380&((data)<<7))
#define  WOV_mm_vad_energy9_pitch_det_lt_energy_thr_low(data)                    (0x0000007F&(data))
#define  WOV_mm_vad_energy9_get_pitch_det_high_cnt_thr_2(data)                   ((0xF8000000&(data))>>27)
#define  WOV_mm_vad_energy9_get_pitch_det_high_cnt_false_thr(data)               ((0x07000000&(data))>>24)
#define  WOV_mm_vad_energy9_get_pitch_det_low_cnt_thr(data)                      ((0x00F00000&(data))>>20)
#define  WOV_mm_vad_energy9_get_pitch_det_low_cnt_thr_max(data)                  ((0x000FC000&(data))>>14)
#define  WOV_mm_vad_energy9_get_pitch_det_pause_cnt_thr(data)                    ((0x00003C00&(data))>>10)
#define  WOV_mm_vad_energy9_get_pitch_det_pause_cnt_times_thr(data)              ((0x00000380&(data))>>7)
#define  WOV_mm_vad_energy9_get_pitch_det_lt_energy_thr_low(data)                (0x0000007F&(data))

#define  WOV_mm_vad_energy10                                                    0x180606A0
#define  WOV_mm_vad_energy10_reg_addr                                            "0xB80606A0"
#define  WOV_mm_vad_energy10_reg                                                 0xB80606A0
#define  WOV_mm_vad_energy10_inst_addr                                           "0x0013"
#define  set_WOV_mm_vad_energy10_reg(data)                                       (*((volatile unsigned int*)WOV_mm_vad_energy10_reg)=data)
#define  get_WOV_mm_vad_energy10_reg                                             (*((volatile unsigned int*)WOV_mm_vad_energy10_reg))
#define  WOV_mm_vad_energy10_pitch_det_lt_energy_thr_high_shift                  (19)
#define  WOV_mm_vad_energy10_pitch_det_st_energy_thr_shift                       (13)
#define  WOV_mm_vad_energy10_pitch_det_cnt_thr_shift                             (5)
#define  WOV_mm_vad_energy10_pitch_det_false_pulse_cnt_thr_shift                 (1)
#define  WOV_mm_vad_energy10_pitch_det_loose_mode_shift                          (0)
#define  WOV_mm_vad_energy10_pitch_det_lt_energy_thr_high_mask                   (0x03F80000)
#define  WOV_mm_vad_energy10_pitch_det_st_energy_thr_mask                        (0x0007E000)
#define  WOV_mm_vad_energy10_pitch_det_cnt_thr_mask                              (0x00001FE0)
#define  WOV_mm_vad_energy10_pitch_det_false_pulse_cnt_thr_mask                  (0x0000001E)
#define  WOV_mm_vad_energy10_pitch_det_loose_mode_mask                           (0x00000001)
#define  WOV_mm_vad_energy10_pitch_det_lt_energy_thr_high(data)                  (0x03F80000&((data)<<19))
#define  WOV_mm_vad_energy10_pitch_det_st_energy_thr(data)                       (0x0007E000&((data)<<13))
#define  WOV_mm_vad_energy10_pitch_det_cnt_thr(data)                             (0x00001FE0&((data)<<5))
#define  WOV_mm_vad_energy10_pitch_det_false_pulse_cnt_thr(data)                 (0x0000001E&((data)<<1))
#define  WOV_mm_vad_energy10_pitch_det_loose_mode(data)                          (0x00000001&(data))
#define  WOV_mm_vad_energy10_get_pitch_det_lt_energy_thr_high(data)              ((0x03F80000&(data))>>19)
#define  WOV_mm_vad_energy10_get_pitch_det_st_energy_thr(data)                   ((0x0007E000&(data))>>13)
#define  WOV_mm_vad_energy10_get_pitch_det_cnt_thr(data)                         ((0x00001FE0&(data))>>5)
#define  WOV_mm_vad_energy10_get_pitch_det_false_pulse_cnt_thr(data)             ((0x0000001E&(data))>>1)
#define  WOV_mm_vad_energy10_get_pitch_det_loose_mode(data)                      (0x00000001&(data))

#define  WOV_mm_vad_energy11                                                    0x180606A4
#define  WOV_mm_vad_energy11_reg_addr                                            "0xB80606A4"
#define  WOV_mm_vad_energy11_reg                                                 0xB80606A4
#define  WOV_mm_vad_energy11_inst_addr                                           "0x0014"
#define  set_WOV_mm_vad_energy11_reg(data)                                       (*((volatile unsigned int*)WOV_mm_vad_energy11_reg)=data)
#define  get_WOV_mm_vad_energy11_reg                                             (*((volatile unsigned int*)WOV_mm_vad_energy11_reg))
#define  WOV_mm_vad_energy11_pitch_det_high_cnt_1st_thr_shift                    (19)
#define  WOV_mm_vad_energy11_pitch_det_lt_param_a_sel_phrase_shift               (17)
#define  WOV_mm_vad_energy11_pitch_det_speech_interval_thr_shift                 (7)
#define  WOV_mm_vad_energy11_pitch_det_debounce_edge_flag_clr_shift              (6)
#define  WOV_mm_vad_energy11_pitch_det_debounce_flag_shift                       (3)
#define  WOV_mm_vad_energy11_pitch_det_debounce_edge_flag_shift                  (2)
#define  WOV_mm_vad_energy11_pitch_det_high_cnt_1st_thr_mask                     (0x07F80000)
#define  WOV_mm_vad_energy11_pitch_det_lt_param_a_sel_phrase_mask                (0x00060000)
#define  WOV_mm_vad_energy11_pitch_det_speech_interval_thr_mask                  (0x0001FF80)
#define  WOV_mm_vad_energy11_pitch_det_debounce_edge_flag_clr_mask               (0x00000040)
#define  WOV_mm_vad_energy11_pitch_det_debounce_flag_mask                        (0x00000008)
#define  WOV_mm_vad_energy11_pitch_det_debounce_edge_flag_mask                   (0x00000004)
#define  WOV_mm_vad_energy11_pitch_det_high_cnt_1st_thr(data)                    (0x07F80000&((data)<<19))
#define  WOV_mm_vad_energy11_pitch_det_lt_param_a_sel_phrase(data)               (0x00060000&((data)<<17))
#define  WOV_mm_vad_energy11_pitch_det_speech_interval_thr(data)                 (0x0001FF80&((data)<<7))
#define  WOV_mm_vad_energy11_pitch_det_debounce_edge_flag_clr(data)              (0x00000040&((data)<<6))
#define  WOV_mm_vad_energy11_pitch_det_debounce_flag(data)                       (0x00000008&((data)<<3))
#define  WOV_mm_vad_energy11_pitch_det_debounce_edge_flag(data)                  (0x00000004&((data)<<2))
#define  WOV_mm_vad_energy11_get_pitch_det_high_cnt_1st_thr(data)                ((0x07F80000&(data))>>19)
#define  WOV_mm_vad_energy11_get_pitch_det_lt_param_a_sel_phrase(data)           ((0x00060000&(data))>>17)
#define  WOV_mm_vad_energy11_get_pitch_det_speech_interval_thr(data)             ((0x0001FF80&(data))>>7)
#define  WOV_mm_vad_energy11_get_pitch_det_debounce_edge_flag_clr(data)          ((0x00000040&(data))>>6)
#define  WOV_mm_vad_energy11_get_pitch_det_debounce_flag(data)                   ((0x00000008&(data))>>3)
#define  WOV_mm_vad_energy11_get_pitch_det_debounce_edge_flag(data)              ((0x00000004&(data))>>2)

#define  WOV_mm_vad_energy12                                                    0x180606A8
#define  WOV_mm_vad_energy12_reg_addr                                            "0xB80606A8"
#define  WOV_mm_vad_energy12_reg                                                 0xB80606A8
#define  WOV_mm_vad_energy12_inst_addr                                           "0x0015"
#define  set_WOV_mm_vad_energy12_reg(data)                                       (*((volatile unsigned int*)WOV_mm_vad_energy12_reg)=data)
#define  get_WOV_mm_vad_energy12_reg                                             (*((volatile unsigned int*)WOV_mm_vad_energy12_reg))
#define  WOV_mm_vad_energy12_hello_time_length_shift                             (0)
#define  WOV_mm_vad_energy12_hello_time_length_mask                              (0x000003FF)
#define  WOV_mm_vad_energy12_hello_time_length(data)                             (0x000003FF&(data))
#define  WOV_mm_vad_energy12_get_hello_time_length(data)                         (0x000003FF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======WOV register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adc_0_en:1;
        RBus_UInt32  adc_1_en:1;
        RBus_UInt32  adc_0_sample_rate:4;
        RBus_UInt32  adc_1_sample_rate:4;
        RBus_UInt32  dmic_0_clk_sel:4;
        RBus_UInt32  dmic_0_en:1;
        RBus_UInt32  gen_src_16k128_en:1;
        RBus_UInt32  gen_src_32k128_en:1;
        RBus_UInt32  gen_src_48k128_en:1;
        RBus_UInt32  gen_src_8k128_en:1;
        RBus_UInt32  pitch_det_en:1;
        RBus_UInt32  audio_ip_merlin5_standby_clk_sel:1;
        RBus_UInt32  pitch_det_clk_sel:1;
        RBus_UInt32  adc0_ad_src_en:1;
        RBus_UInt32  adc1_ad_src_en:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  vad_dbg_sel:4;
    };
}wov_stby_tcon_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  adc0_ad_gain_l:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  adc0_ad_gain_r:7;
    };
}wov_stby_ad0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adc0_dmicl_ri_fa_sel:1;
        RBus_UInt32  adc0_dmicr_ri_fa_sel:1;
        RBus_UInt32  adc0_dmic_lpf1st_fc_sel:3;
        RBus_UInt32  adc0_dmic_lpf2nd_fc_sel:1;
        RBus_UInt32  adc0_ad_hpf_en:1;
        RBus_UInt32  adc0_ad_comp_gain:2;
        RBus_UInt32  adc0_ad_mute_l:1;
        RBus_UInt32  adc0_ad_mute_r:1;
        RBus_UInt32  adc0_ad_zdet_tout:2;
        RBus_UInt32  adc0_ad_zdet_func:2;
        RBus_UInt32  adc0_dmic_boost_gain_l:2;
        RBus_UInt32  adc0_dmic_boost_gain_r:2;
        RBus_UInt32  adc0_dmic_lpf1st_en:1;
        RBus_UInt32  res1:12;
    };
}wov_stby_ad0_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  adc1_ad_gain_l:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  adc1_ad_gain_r:7;
    };
}wov_stby_ad1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adc1_dmicl_ri_fa_sel:1;
        RBus_UInt32  adc1_dmicr_ri_fa_sel:1;
        RBus_UInt32  adc1_dmic_lpf1st_fc_sel:3;
        RBus_UInt32  adc1_dmic_lpf2nd_fc_sel:1;
        RBus_UInt32  adc1_ad_hpf_en:1;
        RBus_UInt32  adc1_ad_comp_gain:2;
        RBus_UInt32  adc1_ad_mute_l:1;
        RBus_UInt32  adc1_ad_mute_r:1;
        RBus_UInt32  adc1_ad_zdet_tout:2;
        RBus_UInt32  adc1_ad_zdet_func:2;
        RBus_UInt32  adc1_dmic_boost_gain_l:2;
        RBus_UInt32  adc1_dmic_boost_gain_r:2;
        RBus_UInt32  adc1_dmic_lpf1st_en:1;
        RBus_UInt32  res1:12;
    };
}wov_stby_ad1_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_dmic_clk_src:1;
        RBus_UInt32  pitch_det_irq_en:1;
        RBus_UInt32  hello_det_irq_en:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  reg_force_ls_en:1;
        RBus_UInt32  reg_force_ls_val:1;
        RBus_UInt32  reg_wov_sram_rd_ptr:14;
        RBus_UInt32  reg_wov_bit_mode:1;
        RBus_UInt32  reg_wov_ch_sel:2;
        RBus_UInt32  reg_wov_ch_mode:2;
        RBus_UInt32  reg_wov_sram_wr_en:1;
        RBus_UInt32  reg_wov_sram_rd_en:1;
        RBus_UInt32  reg_wov_func_en:1;
    };
}wov_wov_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  wov_sram_irq_wr_ptr:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  wov_sram_wr_ptr:14;
    };
}wov_wov_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  wov_sram_rd_ptr:14;
    };
}wov_wov_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_wov_ddr_start_addr:32;
    };
}wov_wov_ctrl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_wov_ddr_ring:1;
        RBus_UInt32  wov_ddr_ov:1;
        RBus_UInt32  reg_wov_ddr_lenth_limt:25;
        RBus_UInt32  res1:5;
    };
}wov_wov_ctrl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wov_ddr_wr_ptr:27;
        RBus_UInt32  res1:5;
    };
}wov_wov_ctrl_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wov_bist_done:1;
        RBus_UInt32  wov_bist_fail_0:1;
        RBus_UInt32  wov_bist_fail_1:1;
        RBus_UInt32  wov_drf_bist_done:1;
        RBus_UInt32  wov_drf_bist_fail_0:1;
        RBus_UInt32  wov_drf_bist_fail_1:1;
        RBus_UInt32  wov_drf_start_pause:1;
        RBus_UInt32  wov_bist_fail_group:1;
        RBus_UInt32  wov_drf_fail_group:1;
        RBus_UInt32  res1:9;
        RBus_UInt32  reg_wov_bist_clk_sel:1;
        RBus_UInt32  reg_wov_rm_1:4;
        RBus_UInt32  reg_wov_rme_1:1;
        RBus_UInt32  reg_wov_rm_0:4;
        RBus_UInt32  reg_wov_rme_0:1;
        RBus_UInt32  reg_wov_drf_test_resume:1;
        RBus_UInt32  reg_wov_drf_bist_mode:1;
        RBus_UInt32  reg_wov_bist_mode:1;
    };
}wov_wov_ctrl_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_vad_test:1;
        RBus_UInt32  test_wreq:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  vad_in_sel:3;
        RBus_UInt32  vad_debug_en:1;
        RBus_UInt32  test_data_in:16;
    };
}wov_wov_vad_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch_det_flag:1;
        RBus_UInt32  pitch_det_flag_hold:1;
        RBus_UInt32  hello_flag:1;
        RBus_UInt32  hello_flag_hold:1;
        RBus_UInt32  pitch_det_initial_time:6;
        RBus_UInt32  pitch_det_lt_param_a_sel:2;
        RBus_UInt32  pitch_det_lt_update_counter_thr:4;
        RBus_UInt32  pitch_det_lt_update_mode:2;
        RBus_UInt32  pitch_det_mv_thr:4;
        RBus_UInt32  pitch_det_no_speech_counter_thr:9;
        RBus_UInt32  pitch_det_onset_high_sel_en:1;
    };
}wov_mm_vad_energy4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  pitch_det_peak_search_thr:10;
        RBus_UInt32  pitch_det_peak_search_thr2:10;
        RBus_UInt32  pitch_det_quasi_speech_thr:4;
        RBus_UInt32  pitch_det_od_thr_default:5;
    };
}wov_mm_vad_energy5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch_det_od_thr_lowerbound:5;
        RBus_UInt32  pitch_det_thr_lt_updatech_thr:4;
        RBus_UInt32  pitch_det_thr_st_valid:13;
        RBus_UInt32  pitch_det_od_thr_step:5;
        RBus_UInt32  pitch_det_od_thr_upperbound:5;
    };
}wov_mm_vad_energy6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch_det_clr:1;
        RBus_UInt32  pitch_det_onset_mask:6;
        RBus_UInt32  pitch_det_thr_onset_adapt_en:1;
        RBus_UInt32  pitch_det_mute_subband_1:1;
        RBus_UInt32  pitch_det_mute_subband_2:1;
        RBus_UInt32  pitch_det_mute_subband_3:1;
        RBus_UInt32  pitch_det_mute_subband_4:1;
        RBus_UInt32  pitch_det_mute_subband_5:1;
        RBus_UInt32  pitch_det_mute_subband_6:1;
        RBus_UInt32  pitch_det_lt_thr_low:5;
        RBus_UInt32  pitch_det_lt_thr_high:5;
        RBus_UInt32  res1:8;
    };
}wov_mm_vad_energy7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pitch_det_st_valid_thr_low:13;
        RBus_UInt32  pitch_det_st_valid_thr_high:13;
        RBus_UInt32  pitch_det_high_cnt_thr_1:5;
    };
}wov_mm_vad_energy8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch_det_high_cnt_thr_2:5;
        RBus_UInt32  pitch_det_high_cnt_false_thr:3;
        RBus_UInt32  pitch_det_low_cnt_thr:4;
        RBus_UInt32  pitch_det_low_cnt_thr_max:6;
        RBus_UInt32  pitch_det_pause_cnt_thr:4;
        RBus_UInt32  pitch_det_pause_cnt_times_thr:3;
        RBus_UInt32  pitch_det_lt_energy_thr_low:7;
    };
}wov_mm_vad_energy9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pitch_det_lt_energy_thr_high:7;
        RBus_UInt32  pitch_det_st_energy_thr:6;
        RBus_UInt32  pitch_det_cnt_thr:8;
        RBus_UInt32  pitch_det_false_pulse_cnt_thr:4;
        RBus_UInt32  pitch_det_loose_mode:1;
    };
}wov_mm_vad_energy10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  pitch_det_high_cnt_1st_thr:8;
        RBus_UInt32  pitch_det_lt_param_a_sel_phrase:2;
        RBus_UInt32  pitch_det_speech_interval_thr:10;
        RBus_UInt32  pitch_det_debounce_edge_flag_clr:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  pitch_det_debounce_flag:1;
        RBus_UInt32  pitch_det_debounce_edge_flag:1;
        RBus_UInt32  res3:2;
    };
}wov_mm_vad_energy11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  hello_time_length:10;
    };
}wov_mm_vad_energy12_RBUS;

#else //apply LITTLE_ENDIAN

//======WOV register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vad_dbg_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  adc1_ad_src_en:1;
        RBus_UInt32  adc0_ad_src_en:1;
        RBus_UInt32  pitch_det_clk_sel:1;
        RBus_UInt32  audio_ip_merlin5_standby_clk_sel:1;
        RBus_UInt32  pitch_det_en:1;
        RBus_UInt32  gen_src_8k128_en:1;
        RBus_UInt32  gen_src_48k128_en:1;
        RBus_UInt32  gen_src_32k128_en:1;
        RBus_UInt32  gen_src_16k128_en:1;
        RBus_UInt32  dmic_0_en:1;
        RBus_UInt32  dmic_0_clk_sel:4;
        RBus_UInt32  adc_1_sample_rate:4;
        RBus_UInt32  adc_0_sample_rate:4;
        RBus_UInt32  adc_1_en:1;
        RBus_UInt32  adc_0_en:1;
    };
}wov_stby_tcon_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adc0_ad_gain_r:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  adc0_ad_gain_l:7;
        RBus_UInt32  res2:17;
    };
}wov_stby_ad0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  adc0_dmic_lpf1st_en:1;
        RBus_UInt32  adc0_dmic_boost_gain_r:2;
        RBus_UInt32  adc0_dmic_boost_gain_l:2;
        RBus_UInt32  adc0_ad_zdet_func:2;
        RBus_UInt32  adc0_ad_zdet_tout:2;
        RBus_UInt32  adc0_ad_mute_r:1;
        RBus_UInt32  adc0_ad_mute_l:1;
        RBus_UInt32  adc0_ad_comp_gain:2;
        RBus_UInt32  adc0_ad_hpf_en:1;
        RBus_UInt32  adc0_dmic_lpf2nd_fc_sel:1;
        RBus_UInt32  adc0_dmic_lpf1st_fc_sel:3;
        RBus_UInt32  adc0_dmicr_ri_fa_sel:1;
        RBus_UInt32  adc0_dmicl_ri_fa_sel:1;
    };
}wov_stby_ad0_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adc1_ad_gain_r:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  adc1_ad_gain_l:7;
        RBus_UInt32  res2:17;
    };
}wov_stby_ad1_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  adc1_dmic_lpf1st_en:1;
        RBus_UInt32  adc1_dmic_boost_gain_r:2;
        RBus_UInt32  adc1_dmic_boost_gain_l:2;
        RBus_UInt32  adc1_ad_zdet_func:2;
        RBus_UInt32  adc1_ad_zdet_tout:2;
        RBus_UInt32  adc1_ad_mute_r:1;
        RBus_UInt32  adc1_ad_mute_l:1;
        RBus_UInt32  adc1_ad_comp_gain:2;
        RBus_UInt32  adc1_ad_hpf_en:1;
        RBus_UInt32  adc1_dmic_lpf2nd_fc_sel:1;
        RBus_UInt32  adc1_dmic_lpf1st_fc_sel:3;
        RBus_UInt32  adc1_dmicr_ri_fa_sel:1;
        RBus_UInt32  adc1_dmicl_ri_fa_sel:1;
    };
}wov_stby_ad1_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_wov_func_en:1;
        RBus_UInt32  reg_wov_sram_rd_en:1;
        RBus_UInt32  reg_wov_sram_wr_en:1;
        RBus_UInt32  reg_wov_ch_mode:2;
        RBus_UInt32  reg_wov_ch_sel:2;
        RBus_UInt32  reg_wov_bit_mode:1;
        RBus_UInt32  reg_wov_sram_rd_ptr:14;
        RBus_UInt32  reg_force_ls_val:1;
        RBus_UInt32  reg_force_ls_en:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  hello_det_irq_en:1;
        RBus_UInt32  pitch_det_irq_en:1;
        RBus_UInt32  reg_dmic_clk_src:1;
    };
}wov_wov_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wov_sram_wr_ptr:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  wov_sram_irq_wr_ptr:14;
        RBus_UInt32  res2:2;
    };
}wov_wov_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wov_sram_rd_ptr:14;
        RBus_UInt32  res1:18;
    };
}wov_wov_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_wov_ddr_start_addr:32;
    };
}wov_wov_ctrl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  reg_wov_ddr_lenth_limt:25;
        RBus_UInt32  wov_ddr_ov:1;
        RBus_UInt32  reg_wov_ddr_ring:1;
    };
}wov_wov_ctrl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  wov_ddr_wr_ptr:27;
    };
}wov_wov_ctrl_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_wov_bist_mode:1;
        RBus_UInt32  reg_wov_drf_bist_mode:1;
        RBus_UInt32  reg_wov_drf_test_resume:1;
        RBus_UInt32  reg_wov_rme_0:1;
        RBus_UInt32  reg_wov_rm_0:4;
        RBus_UInt32  reg_wov_rme_1:1;
        RBus_UInt32  reg_wov_rm_1:4;
        RBus_UInt32  reg_wov_bist_clk_sel:1;
        RBus_UInt32  res1:9;
        RBus_UInt32  wov_drf_fail_group:1;
        RBus_UInt32  wov_bist_fail_group:1;
        RBus_UInt32  wov_drf_start_pause:1;
        RBus_UInt32  wov_drf_bist_fail_1:1;
        RBus_UInt32  wov_drf_bist_fail_0:1;
        RBus_UInt32  wov_drf_bist_done:1;
        RBus_UInt32  wov_bist_fail_1:1;
        RBus_UInt32  wov_bist_fail_0:1;
        RBus_UInt32  wov_bist_done:1;
    };
}wov_wov_ctrl_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_data_in:16;
        RBus_UInt32  vad_debug_en:1;
        RBus_UInt32  vad_in_sel:3;
        RBus_UInt32  res1:10;
        RBus_UInt32  test_wreq:1;
        RBus_UInt32  clk_vad_test:1;
    };
}wov_wov_vad_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch_det_onset_high_sel_en:1;
        RBus_UInt32  pitch_det_no_speech_counter_thr:9;
        RBus_UInt32  pitch_det_mv_thr:4;
        RBus_UInt32  pitch_det_lt_update_mode:2;
        RBus_UInt32  pitch_det_lt_update_counter_thr:4;
        RBus_UInt32  pitch_det_lt_param_a_sel:2;
        RBus_UInt32  pitch_det_initial_time:6;
        RBus_UInt32  hello_flag_hold:1;
        RBus_UInt32  hello_flag:1;
        RBus_UInt32  pitch_det_flag_hold:1;
        RBus_UInt32  pitch_det_flag:1;
    };
}wov_mm_vad_energy4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch_det_od_thr_default:5;
        RBus_UInt32  pitch_det_quasi_speech_thr:4;
        RBus_UInt32  pitch_det_peak_search_thr2:10;
        RBus_UInt32  pitch_det_peak_search_thr:10;
        RBus_UInt32  res1:3;
    };
}wov_mm_vad_energy5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch_det_od_thr_upperbound:5;
        RBus_UInt32  pitch_det_od_thr_step:5;
        RBus_UInt32  pitch_det_thr_st_valid:13;
        RBus_UInt32  pitch_det_thr_lt_updatech_thr:4;
        RBus_UInt32  pitch_det_od_thr_lowerbound:5;
    };
}wov_mm_vad_energy6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  pitch_det_lt_thr_high:5;
        RBus_UInt32  pitch_det_lt_thr_low:5;
        RBus_UInt32  pitch_det_mute_subband_6:1;
        RBus_UInt32  pitch_det_mute_subband_5:1;
        RBus_UInt32  pitch_det_mute_subband_4:1;
        RBus_UInt32  pitch_det_mute_subband_3:1;
        RBus_UInt32  pitch_det_mute_subband_2:1;
        RBus_UInt32  pitch_det_mute_subband_1:1;
        RBus_UInt32  pitch_det_thr_onset_adapt_en:1;
        RBus_UInt32  pitch_det_onset_mask:6;
        RBus_UInt32  pitch_det_clr:1;
    };
}wov_mm_vad_energy7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch_det_high_cnt_thr_1:5;
        RBus_UInt32  pitch_det_st_valid_thr_high:13;
        RBus_UInt32  pitch_det_st_valid_thr_low:13;
        RBus_UInt32  res1:1;
    };
}wov_mm_vad_energy8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch_det_lt_energy_thr_low:7;
        RBus_UInt32  pitch_det_pause_cnt_times_thr:3;
        RBus_UInt32  pitch_det_pause_cnt_thr:4;
        RBus_UInt32  pitch_det_low_cnt_thr_max:6;
        RBus_UInt32  pitch_det_low_cnt_thr:4;
        RBus_UInt32  pitch_det_high_cnt_false_thr:3;
        RBus_UInt32  pitch_det_high_cnt_thr_2:5;
    };
}wov_mm_vad_energy9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch_det_loose_mode:1;
        RBus_UInt32  pitch_det_false_pulse_cnt_thr:4;
        RBus_UInt32  pitch_det_cnt_thr:8;
        RBus_UInt32  pitch_det_st_energy_thr:6;
        RBus_UInt32  pitch_det_lt_energy_thr_high:7;
        RBus_UInt32  res1:6;
    };
}wov_mm_vad_energy10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  pitch_det_debounce_edge_flag:1;
        RBus_UInt32  pitch_det_debounce_flag:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  pitch_det_debounce_edge_flag_clr:1;
        RBus_UInt32  pitch_det_speech_interval_thr:10;
        RBus_UInt32  pitch_det_lt_param_a_sel_phrase:2;
        RBus_UInt32  pitch_det_high_cnt_1st_thr:8;
        RBus_UInt32  res3:5;
    };
}wov_mm_vad_energy11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hello_time_length:10;
        RBus_UInt32  res1:22;
    };
}wov_mm_vad_energy12_RBUS;




#endif 


#endif 
