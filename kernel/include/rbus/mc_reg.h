/**
* @file Merlin5_MEMC_MC
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_MC_REG_H_
#define _RBUS_MC_REG_H_

#include "rbus_types.h"



//  MC Register Address
#define  MC_MC_04                                                               0x18099604
#define  MC_MC_04_reg_addr                                                       "0xB8099604"
#define  MC_MC_04_reg                                                            0xB8099604
#define  MC_MC_04_inst_addr                                                      "0x0000"
#define  set_MC_MC_04_reg(data)                                                  (*((volatile unsigned int*)MC_MC_04_reg)=data)
#define  get_MC_MC_04_reg                                                        (*((volatile unsigned int*)MC_MC_04_reg))
#define  MC_MC_04_mc_var_lfb_offset_shift                                        (3)
#define  MC_MC_04_mc_var_lfb_mode_shift                                          (2)
#define  MC_MC_04_mc_var_lfb_intp_en_shift                                       (0)
#define  MC_MC_04_mc_var_lfb_offset_mask                                         (0x00000038)
#define  MC_MC_04_mc_var_lfb_mode_mask                                           (0x00000004)
#define  MC_MC_04_mc_var_lfb_intp_en_mask                                        (0x00000003)
#define  MC_MC_04_mc_var_lfb_offset(data)                                        (0x00000038&((data)<<3))
#define  MC_MC_04_mc_var_lfb_mode(data)                                          (0x00000004&((data)<<2))
#define  MC_MC_04_mc_var_lfb_intp_en(data)                                       (0x00000003&(data))
#define  MC_MC_04_get_mc_var_lfb_offset(data)                                    ((0x00000038&(data))>>3)
#define  MC_MC_04_get_mc_var_lfb_mode(data)                                      ((0x00000004&(data))>>2)
#define  MC_MC_04_get_mc_var_lfb_intp_en(data)                                   (0x00000003&(data))

#define  MC_MC_08                                                               0x18099608
#define  MC_MC_08_reg_addr                                                       "0xB8099608"
#define  MC_MC_08_reg                                                            0xB8099608
#define  MC_MC_08_inst_addr                                                      "0x0001"
#define  set_MC_MC_08_reg(data)                                                  (*((volatile unsigned int*)MC_MC_08_reg)=data)
#define  get_MC_MC_08_reg                                                        (*((volatile unsigned int*)MC_MC_08_reg))
#define  MC_MC_08_mc_var_lfb_th_shift                                            (24)
#define  MC_MC_08_mc_var_lfb_lvl_shift                                           (16)
#define  MC_MC_08_mc_var_lfb_max_shift                                           (8)
#define  MC_MC_08_mc_var_lfb_min_shift                                           (0)
#define  MC_MC_08_mc_var_lfb_th_mask                                             (0x7F000000)
#define  MC_MC_08_mc_var_lfb_lvl_mask                                            (0x007F0000)
#define  MC_MC_08_mc_var_lfb_max_mask                                            (0x00007F00)
#define  MC_MC_08_mc_var_lfb_min_mask                                            (0x0000007F)
#define  MC_MC_08_mc_var_lfb_th(data)                                            (0x7F000000&((data)<<24))
#define  MC_MC_08_mc_var_lfb_lvl(data)                                           (0x007F0000&((data)<<16))
#define  MC_MC_08_mc_var_lfb_max(data)                                           (0x00007F00&((data)<<8))
#define  MC_MC_08_mc_var_lfb_min(data)                                           (0x0000007F&(data))
#define  MC_MC_08_get_mc_var_lfb_th(data)                                        ((0x7F000000&(data))>>24)
#define  MC_MC_08_get_mc_var_lfb_lvl(data)                                       ((0x007F0000&(data))>>16)
#define  MC_MC_08_get_mc_var_lfb_max(data)                                       ((0x00007F00&(data))>>8)
#define  MC_MC_08_get_mc_var_lfb_min(data)                                       (0x0000007F&(data))

#define  MC_MC_0C                                                               0x1809960C
#define  MC_MC_0C_reg_addr                                                       "0xB809960C"
#define  MC_MC_0C_reg                                                            0xB809960C
#define  MC_MC_0C_inst_addr                                                      "0x0002"
#define  set_MC_MC_0C_reg(data)                                                  (*((volatile unsigned int*)MC_MC_0C_reg)=data)
#define  get_MC_MC_0C_reg                                                        (*((volatile unsigned int*)MC_MC_0C_reg))
#define  MC_MC_0C_mc_pt_phase_fb_phase_en_shift                                  (31)
#define  MC_MC_0C_mc_pre_phase_fb_phase_en_shift                                 (30)
#define  MC_MC_0C_mc_logo_phase_fb_phase_en_shift                                (29)
#define  MC_MC_0C_mc_phase_fb_64_sel_shift                                       (28)
#define  MC_MC_0C_mc_phase_fb_gain_shift                                         (20)
#define  MC_MC_0C_mc_lvllpf_coef2_shift                                          (14)
#define  MC_MC_0C_mc_lvllpf_coef1_shift                                          (8)
#define  MC_MC_0C_mc_lvllpf_coef0_shift                                          (2)
#define  MC_MC_0C_mc_lvllpf_lpf_en_shift                                         (1)
#define  MC_MC_0C_mc_pt_phase_fb_phase_en_mask                                   (0x80000000)
#define  MC_MC_0C_mc_pre_phase_fb_phase_en_mask                                  (0x40000000)
#define  MC_MC_0C_mc_logo_phase_fb_phase_en_mask                                 (0x20000000)
#define  MC_MC_0C_mc_phase_fb_64_sel_mask                                        (0x10000000)
#define  MC_MC_0C_mc_phase_fb_gain_mask                                          (0x0FF00000)
#define  MC_MC_0C_mc_lvllpf_coef2_mask                                           (0x000FC000)
#define  MC_MC_0C_mc_lvllpf_coef1_mask                                           (0x00003F00)
#define  MC_MC_0C_mc_lvllpf_coef0_mask                                           (0x000000FC)
#define  MC_MC_0C_mc_lvllpf_lpf_en_mask                                          (0x00000002)
#define  MC_MC_0C_mc_pt_phase_fb_phase_en(data)                                  (0x80000000&((data)<<31))
#define  MC_MC_0C_mc_pre_phase_fb_phase_en(data)                                 (0x40000000&((data)<<30))
#define  MC_MC_0C_mc_logo_phase_fb_phase_en(data)                                (0x20000000&((data)<<29))
#define  MC_MC_0C_mc_phase_fb_64_sel(data)                                       (0x10000000&((data)<<28))
#define  MC_MC_0C_mc_phase_fb_gain(data)                                         (0x0FF00000&((data)<<20))
#define  MC_MC_0C_mc_lvllpf_coef2(data)                                          (0x000FC000&((data)<<14))
#define  MC_MC_0C_mc_lvllpf_coef1(data)                                          (0x00003F00&((data)<<8))
#define  MC_MC_0C_mc_lvllpf_coef0(data)                                          (0x000000FC&((data)<<2))
#define  MC_MC_0C_mc_lvllpf_lpf_en(data)                                         (0x00000002&((data)<<1))
#define  MC_MC_0C_get_mc_pt_phase_fb_phase_en(data)                              ((0x80000000&(data))>>31)
#define  MC_MC_0C_get_mc_pre_phase_fb_phase_en(data)                             ((0x40000000&(data))>>30)
#define  MC_MC_0C_get_mc_logo_phase_fb_phase_en(data)                            ((0x20000000&(data))>>29)
#define  MC_MC_0C_get_mc_phase_fb_64_sel(data)                                   ((0x10000000&(data))>>28)
#define  MC_MC_0C_get_mc_phase_fb_gain(data)                                     ((0x0FF00000&(data))>>20)
#define  MC_MC_0C_get_mc_lvllpf_coef2(data)                                      ((0x000FC000&(data))>>14)
#define  MC_MC_0C_get_mc_lvllpf_coef1(data)                                      ((0x00003F00&(data))>>8)
#define  MC_MC_0C_get_mc_lvllpf_coef0(data)                                      ((0x000000FC&(data))>>2)
#define  MC_MC_0C_get_mc_lvllpf_lpf_en(data)                                     ((0x00000002&(data))>>1)

#define  MC_MC_10                                                               0x18099610
#define  MC_MC_10_reg_addr                                                       "0xB8099610"
#define  MC_MC_10_reg                                                            0xB8099610
#define  MC_MC_10_inst_addr                                                      "0x0003"
#define  set_MC_MC_10_reg(data)                                                  (*((volatile unsigned int*)MC_MC_10_reg)=data)
#define  get_MC_MC_10_reg                                                        (*((volatile unsigned int*)MC_MC_10_reg))
#define  MC_MC_10_mc_mvdiff_coef4_shift                                          (25)
#define  MC_MC_10_mc_mvdiff_coef3_shift                                          (19)
#define  MC_MC_10_mc_mvdiff_coef2_shift                                          (13)
#define  MC_MC_10_mc_mvdiff_coef1_shift                                          (7)
#define  MC_MC_10_mc_mvdiff_coef0_shift                                          (1)
#define  MC_MC_10_mc_mvdiff_lpf_en_shift                                         (0)
#define  MC_MC_10_mc_mvdiff_coef4_mask                                           (0x7E000000)
#define  MC_MC_10_mc_mvdiff_coef3_mask                                           (0x01F80000)
#define  MC_MC_10_mc_mvdiff_coef2_mask                                           (0x0007E000)
#define  MC_MC_10_mc_mvdiff_coef1_mask                                           (0x00001F80)
#define  MC_MC_10_mc_mvdiff_coef0_mask                                           (0x0000007E)
#define  MC_MC_10_mc_mvdiff_lpf_en_mask                                          (0x00000001)
#define  MC_MC_10_mc_mvdiff_coef4(data)                                          (0x7E000000&((data)<<25))
#define  MC_MC_10_mc_mvdiff_coef3(data)                                          (0x01F80000&((data)<<19))
#define  MC_MC_10_mc_mvdiff_coef2(data)                                          (0x0007E000&((data)<<13))
#define  MC_MC_10_mc_mvdiff_coef1(data)                                          (0x00001F80&((data)<<7))
#define  MC_MC_10_mc_mvdiff_coef0(data)                                          (0x0000007E&((data)<<1))
#define  MC_MC_10_mc_mvdiff_lpf_en(data)                                         (0x00000001&(data))
#define  MC_MC_10_get_mc_mvdiff_coef4(data)                                      ((0x7E000000&(data))>>25)
#define  MC_MC_10_get_mc_mvdiff_coef3(data)                                      ((0x01F80000&(data))>>19)
#define  MC_MC_10_get_mc_mvdiff_coef2(data)                                      ((0x0007E000&(data))>>13)
#define  MC_MC_10_get_mc_mvdiff_coef1(data)                                      ((0x00001F80&(data))>>7)
#define  MC_MC_10_get_mc_mvdiff_coef0(data)                                      ((0x0000007E&(data))>>1)
#define  MC_MC_10_get_mc_mvdiff_lpf_en(data)                                     (0x00000001&(data))

#define  MC_MC_14                                                               0x18099614
#define  MC_MC_14_reg_addr                                                       "0xB8099614"
#define  MC_MC_14_reg                                                            0xB8099614
#define  MC_MC_14_inst_addr                                                      "0x0004"
#define  set_MC_MC_14_reg(data)                                                  (*((volatile unsigned int*)MC_MC_14_reg)=data)
#define  get_MC_MC_14_reg                                                        (*((volatile unsigned int*)MC_MC_14_reg))
#define  MC_MC_14_mc_blklogo_prefetch_num_shift                                  (28)
#define  MC_MC_14_mc_blklogo_hact_shift                                          (14)
#define  MC_MC_14_mc_blklogo_htotal_shift                                        (0)
#define  MC_MC_14_mc_blklogo_prefetch_num_mask                                   (0xF0000000)
#define  MC_MC_14_mc_blklogo_hact_mask                                           (0x0FFFC000)
#define  MC_MC_14_mc_blklogo_htotal_mask                                         (0x00003FFF)
#define  MC_MC_14_mc_blklogo_prefetch_num(data)                                  (0xF0000000&((data)<<28))
#define  MC_MC_14_mc_blklogo_hact(data)                                          (0x0FFFC000&((data)<<14))
#define  MC_MC_14_mc_blklogo_htotal(data)                                        (0x00003FFF&(data))
#define  MC_MC_14_get_mc_blklogo_prefetch_num(data)                              ((0xF0000000&(data))>>28)
#define  MC_MC_14_get_mc_blklogo_hact(data)                                      ((0x0FFFC000&(data))>>14)
#define  MC_MC_14_get_mc_blklogo_htotal(data)                                    (0x00003FFF&(data))

#define  MC_MC_18                                                               0x18099618
#define  MC_MC_18_reg_addr                                                       "0xB8099618"
#define  MC_MC_18_reg                                                            0xB8099618
#define  MC_MC_18_inst_addr                                                      "0x0005"
#define  set_MC_MC_18_reg(data)                                                  (*((volatile unsigned int*)MC_MC_18_reg)=data)
#define  get_MC_MC_18_reg                                                        (*((volatile unsigned int*)MC_MC_18_reg))
#define  MC_MC_18_mc_blklogo_erosion_timing_mode_shift                           (25)
#define  MC_MC_18_mc_pc_mode_pwr_otp_shift                                       (24)
#define  MC_MC_18_mc_fblvl_timing_adj_shift                                      (22)
#define  MC_MC_18_mc_blklogo_ern_sel_shift                                       (21)
#define  MC_MC_18_mc_blklogo_thr_shift                                           (17)
#define  MC_MC_18_mc_blklogo_erosion_en_shift                                    (16)
#define  MC_MC_18_mc_blklogo_row_num_shift                                       (8)
#define  MC_MC_18_mc_blklogo_mc_de_size_shift                                    (6)
#define  MC_MC_18_mc_blklogo_mc_de_mask_num_shift                                (0)
#define  MC_MC_18_mc_blklogo_erosion_timing_mode_mask                            (0x02000000)
#define  MC_MC_18_mc_pc_mode_pwr_otp_mask                                        (0x01000000)
#define  MC_MC_18_mc_fblvl_timing_adj_mask                                       (0x00C00000)
#define  MC_MC_18_mc_blklogo_ern_sel_mask                                        (0x00200000)
#define  MC_MC_18_mc_blklogo_thr_mask                                            (0x001E0000)
#define  MC_MC_18_mc_blklogo_erosion_en_mask                                     (0x00010000)
#define  MC_MC_18_mc_blklogo_row_num_mask                                        (0x0000FF00)
#define  MC_MC_18_mc_blklogo_mc_de_size_mask                                     (0x000000C0)
#define  MC_MC_18_mc_blklogo_mc_de_mask_num_mask                                 (0x0000003F)
#define  MC_MC_18_mc_blklogo_erosion_timing_mode(data)                           (0x02000000&((data)<<25))
#define  MC_MC_18_mc_pc_mode_pwr_otp(data)                                       (0x01000000&((data)<<24))
#define  MC_MC_18_mc_fblvl_timing_adj(data)                                      (0x00C00000&((data)<<22))
#define  MC_MC_18_mc_blklogo_ern_sel(data)                                       (0x00200000&((data)<<21))
#define  MC_MC_18_mc_blklogo_thr(data)                                           (0x001E0000&((data)<<17))
#define  MC_MC_18_mc_blklogo_erosion_en(data)                                    (0x00010000&((data)<<16))
#define  MC_MC_18_mc_blklogo_row_num(data)                                       (0x0000FF00&((data)<<8))
#define  MC_MC_18_mc_blklogo_mc_de_size(data)                                    (0x000000C0&((data)<<6))
#define  MC_MC_18_mc_blklogo_mc_de_mask_num(data)                                (0x0000003F&(data))
#define  MC_MC_18_get_mc_blklogo_erosion_timing_mode(data)                       ((0x02000000&(data))>>25)
#define  MC_MC_18_get_mc_pc_mode_pwr_otp(data)                                   ((0x01000000&(data))>>24)
#define  MC_MC_18_get_mc_fblvl_timing_adj(data)                                  ((0x00C00000&(data))>>22)
#define  MC_MC_18_get_mc_blklogo_ern_sel(data)                                   ((0x00200000&(data))>>21)
#define  MC_MC_18_get_mc_blklogo_thr(data)                                       ((0x001E0000&(data))>>17)
#define  MC_MC_18_get_mc_blklogo_erosion_en(data)                                ((0x00010000&(data))>>16)
#define  MC_MC_18_get_mc_blklogo_row_num(data)                                   ((0x0000FF00&(data))>>8)
#define  MC_MC_18_get_mc_blklogo_mc_de_size(data)                                ((0x000000C0&(data))>>6)
#define  MC_MC_18_get_mc_blklogo_mc_de_mask_num(data)                            (0x0000003F&(data))

#define  MC_MC_1C                                                               0x1809961C
#define  MC_MC_1C_reg_addr                                                       "0xB809961C"
#define  MC_MC_1C_reg                                                            0xB809961C
#define  MC_MC_1C_inst_addr                                                      "0x0006"
#define  set_MC_MC_1C_reg(data)                                                  (*((volatile unsigned int*)MC_MC_1C_reg)=data)
#define  get_MC_MC_1C_reg                                                        (*((volatile unsigned int*)MC_MC_1C_reg))
#define  MC_MC_1C_mc_mv_pat_erosion_mode_shift                                   (24)
#define  MC_MC_1C_mc_mv_pat_mv_x_shift                                           (13)
#define  MC_MC_1C_mc_mv_pat_mv_y_shift                                           (3)
#define  MC_MC_1C_mc_mv_pat_mode_shift                                           (1)
#define  MC_MC_1C_mc_mv_pat_en_shift                                             (0)
#define  MC_MC_1C_mc_mv_pat_erosion_mode_mask                                    (0x01000000)
#define  MC_MC_1C_mc_mv_pat_mv_x_mask                                            (0x00FFE000)
#define  MC_MC_1C_mc_mv_pat_mv_y_mask                                            (0x00001FF8)
#define  MC_MC_1C_mc_mv_pat_mode_mask                                            (0x00000006)
#define  MC_MC_1C_mc_mv_pat_en_mask                                              (0x00000001)
#define  MC_MC_1C_mc_mv_pat_erosion_mode(data)                                   (0x01000000&((data)<<24))
#define  MC_MC_1C_mc_mv_pat_mv_x(data)                                           (0x00FFE000&((data)<<13))
#define  MC_MC_1C_mc_mv_pat_mv_y(data)                                           (0x00001FF8&((data)<<3))
#define  MC_MC_1C_mc_mv_pat_mode(data)                                           (0x00000006&((data)<<1))
#define  MC_MC_1C_mc_mv_pat_en(data)                                             (0x00000001&(data))
#define  MC_MC_1C_get_mc_mv_pat_erosion_mode(data)                               ((0x01000000&(data))>>24)
#define  MC_MC_1C_get_mc_mv_pat_mv_x(data)                                       ((0x00FFE000&(data))>>13)
#define  MC_MC_1C_get_mc_mv_pat_mv_y(data)                                       ((0x00001FF8&(data))>>3)
#define  MC_MC_1C_get_mc_mv_pat_mode(data)                                       ((0x00000006&(data))>>1)
#define  MC_MC_1C_get_mc_mv_pat_en(data)                                         (0x00000001&(data))

#define  MC_MC_20                                                               0x18099620
#define  MC_MC_20_reg_addr                                                       "0xB8099620"
#define  MC_MC_20_reg                                                            0xB8099620
#define  MC_MC_20_inst_addr                                                      "0x0007"
#define  set_MC_MC_20_reg(data)                                                  (*((volatile unsigned int*)MC_MC_20_reg)=data)
#define  get_MC_MC_20_reg                                                        (*((volatile unsigned int*)MC_MC_20_reg))
#define  MC_MC_20_mc_mv_pat_v0_shift                                             (18)
#define  MC_MC_20_mc_mv_pat_h1_shift                                             (9)
#define  MC_MC_20_mc_mv_pat_h0_shift                                             (0)
#define  MC_MC_20_mc_mv_pat_v0_mask                                              (0x07FC0000)
#define  MC_MC_20_mc_mv_pat_h1_mask                                              (0x0003FE00)
#define  MC_MC_20_mc_mv_pat_h0_mask                                              (0x000001FF)
#define  MC_MC_20_mc_mv_pat_v0(data)                                             (0x07FC0000&((data)<<18))
#define  MC_MC_20_mc_mv_pat_h1(data)                                             (0x0003FE00&((data)<<9))
#define  MC_MC_20_mc_mv_pat_h0(data)                                             (0x000001FF&(data))
#define  MC_MC_20_get_mc_mv_pat_v0(data)                                         ((0x07FC0000&(data))>>18)
#define  MC_MC_20_get_mc_mv_pat_h1(data)                                         ((0x0003FE00&(data))>>9)
#define  MC_MC_20_get_mc_mv_pat_h0(data)                                         (0x000001FF&(data))

#define  MC_MC_24                                                               0x18099624
#define  MC_MC_24_reg_addr                                                       "0xB8099624"
#define  MC_MC_24_reg                                                            0xB8099624
#define  MC_MC_24_inst_addr                                                      "0x0008"
#define  set_MC_MC_24_reg(data)                                                  (*((volatile unsigned int*)MC_MC_24_reg)=data)
#define  get_MC_MC_24_reg                                                        (*((volatile unsigned int*)MC_MC_24_reg))
#define  MC_MC_24_mc_mv_pat_row_num_shift                                        (18)
#define  MC_MC_24_mc_mv_pat_blk_num_shift                                        (9)
#define  MC_MC_24_mc_mv_pat_v1_shift                                             (0)
#define  MC_MC_24_mc_mv_pat_row_num_mask                                         (0x07FC0000)
#define  MC_MC_24_mc_mv_pat_blk_num_mask                                         (0x0003FE00)
#define  MC_MC_24_mc_mv_pat_v1_mask                                              (0x000001FF)
#define  MC_MC_24_mc_mv_pat_row_num(data)                                        (0x07FC0000&((data)<<18))
#define  MC_MC_24_mc_mv_pat_blk_num(data)                                        (0x0003FE00&((data)<<9))
#define  MC_MC_24_mc_mv_pat_v1(data)                                             (0x000001FF&(data))
#define  MC_MC_24_get_mc_mv_pat_row_num(data)                                    ((0x07FC0000&(data))>>18)
#define  MC_MC_24_get_mc_mv_pat_blk_num(data)                                    ((0x0003FE00&(data))>>9)
#define  MC_MC_24_get_mc_mv_pat_v1(data)                                         (0x000001FF&(data))

#define  MC_MC_28                                                               0x18099628
#define  MC_MC_28_reg_addr                                                       "0xB8099628"
#define  MC_MC_28_reg                                                            0xB8099628
#define  MC_MC_28_inst_addr                                                      "0x0009"
#define  set_MC_MC_28_reg(data)                                                  (*((volatile unsigned int*)MC_MC_28_reg)=data)
#define  get_MC_MC_28_reg                                                        (*((volatile unsigned int*)MC_MC_28_reg))
#define  MC_MC_28_mc_fblvl_obmc_bypass_shift                                     (30)
#define  MC_MC_28_mcdh_dh_half_v_timing_shift                                    (29)
#define  MC_MC_28_mcdh_sw_reset_shift                                            (28)
#define  MC_MC_28_mcdh_occl_thr_shift                                            (23)
#define  MC_MC_28_mc_fb_lvl_force_value_shift                                    (15)
#define  MC_MC_28_mc_fb_lvl_force_en_shift                                       (14)
#define  MC_MC_28_mc_fb_izpz_mod_shift                                           (11)
#define  MC_MC_28_mc_mv_pat_self_cycle_shift                                     (3)
#define  MC_MC_28_mc_mv_pat_self_en_shift                                        (2)
#define  MC_MC_28_mc_mv_pat_row_size_shift                                       (1)
#define  MC_MC_28_mc_mv_pat_blk_size_shift                                       (0)
#define  MC_MC_28_mc_fblvl_obmc_bypass_mask                                      (0xC0000000)
#define  MC_MC_28_mcdh_dh_half_v_timing_mask                                     (0x20000000)
#define  MC_MC_28_mcdh_sw_reset_mask                                             (0x10000000)
#define  MC_MC_28_mcdh_occl_thr_mask                                             (0x0F800000)
#define  MC_MC_28_mc_fb_lvl_force_value_mask                                     (0x007F8000)
#define  MC_MC_28_mc_fb_lvl_force_en_mask                                        (0x00004000)
#define  MC_MC_28_mc_fb_izpz_mod_mask                                            (0x00003800)
#define  MC_MC_28_mc_mv_pat_self_cycle_mask                                      (0x000007F8)
#define  MC_MC_28_mc_mv_pat_self_en_mask                                         (0x00000004)
#define  MC_MC_28_mc_mv_pat_row_size_mask                                        (0x00000002)
#define  MC_MC_28_mc_mv_pat_blk_size_mask                                        (0x00000001)
#define  MC_MC_28_mc_fblvl_obmc_bypass(data)                                     (0xC0000000&((data)<<30))
#define  MC_MC_28_mcdh_dh_half_v_timing(data)                                    (0x20000000&((data)<<29))
#define  MC_MC_28_mcdh_sw_reset(data)                                            (0x10000000&((data)<<28))
#define  MC_MC_28_mcdh_occl_thr(data)                                            (0x0F800000&((data)<<23))
#define  MC_MC_28_mc_fb_lvl_force_value(data)                                    (0x007F8000&((data)<<15))
#define  MC_MC_28_mc_fb_lvl_force_en(data)                                       (0x00004000&((data)<<14))
#define  MC_MC_28_mc_fb_izpz_mod(data)                                           (0x00003800&((data)<<11))
#define  MC_MC_28_mc_mv_pat_self_cycle(data)                                     (0x000007F8&((data)<<3))
#define  MC_MC_28_mc_mv_pat_self_en(data)                                        (0x00000004&((data)<<2))
#define  MC_MC_28_mc_mv_pat_row_size(data)                                       (0x00000002&((data)<<1))
#define  MC_MC_28_mc_mv_pat_blk_size(data)                                       (0x00000001&(data))
#define  MC_MC_28_get_mc_fblvl_obmc_bypass(data)                                 ((0xC0000000&(data))>>30)
#define  MC_MC_28_get_mcdh_dh_half_v_timing(data)                                ((0x20000000&(data))>>29)
#define  MC_MC_28_get_mcdh_sw_reset(data)                                        ((0x10000000&(data))>>28)
#define  MC_MC_28_get_mcdh_occl_thr(data)                                        ((0x0F800000&(data))>>23)
#define  MC_MC_28_get_mc_fb_lvl_force_value(data)                                ((0x007F8000&(data))>>15)
#define  MC_MC_28_get_mc_fb_lvl_force_en(data)                                   ((0x00004000&(data))>>14)
#define  MC_MC_28_get_mc_fb_izpz_mod(data)                                       ((0x00003800&(data))>>11)
#define  MC_MC_28_get_mc_mv_pat_self_cycle(data)                                 ((0x000007F8&(data))>>3)
#define  MC_MC_28_get_mc_mv_pat_self_en(data)                                    ((0x00000004&(data))>>2)
#define  MC_MC_28_get_mc_mv_pat_row_size(data)                                   ((0x00000002&(data))>>1)
#define  MC_MC_28_get_mc_mv_pat_blk_size(data)                                   (0x00000001&(data))

#define  MC_MC_2C                                                               0x1809962C
#define  MC_MC_2C_reg_addr                                                       "0xB809962C"
#define  MC_MC_2C_reg                                                            0xB809962C
#define  MC_MC_2C_inst_addr                                                      "0x000A"
#define  set_MC_MC_2C_reg(data)                                                  (*((volatile unsigned int*)MC_MC_2C_reg)=data)
#define  get_MC_MC_2C_reg                                                        (*((volatile unsigned int*)MC_MC_2C_reg))
#define  MC_MC_2C_mc_delay_me_line_cnt_shift                                     (24)
#define  MC_MC_2C_mc_me_timing_err_shift                                         (23)
#define  MC_MC_2C_mcdh_mv_row_num_shift                                          (12)
#define  MC_MC_2C_mcdh_mv_blk_num_shift                                          (3)
#define  MC_MC_2C_mcdh_mv_rd_intval_shift                                        (2)
#define  MC_MC_2C_mcdh_mv_row_size_shift                                         (0)
#define  MC_MC_2C_mc_delay_me_line_cnt_mask                                      (0x1F000000)
#define  MC_MC_2C_mc_me_timing_err_mask                                          (0x00800000)
#define  MC_MC_2C_mcdh_mv_row_num_mask                                           (0x001FF000)
#define  MC_MC_2C_mcdh_mv_blk_num_mask                                           (0x00000FF8)
#define  MC_MC_2C_mcdh_mv_rd_intval_mask                                         (0x00000004)
#define  MC_MC_2C_mcdh_mv_row_size_mask                                          (0x00000003)
#define  MC_MC_2C_mc_delay_me_line_cnt(data)                                     (0x1F000000&((data)<<24))
#define  MC_MC_2C_mc_me_timing_err(data)                                         (0x00800000&((data)<<23))
#define  MC_MC_2C_mcdh_mv_row_num(data)                                          (0x001FF000&((data)<<12))
#define  MC_MC_2C_mcdh_mv_blk_num(data)                                          (0x00000FF8&((data)<<3))
#define  MC_MC_2C_mcdh_mv_rd_intval(data)                                        (0x00000004&((data)<<2))
#define  MC_MC_2C_mcdh_mv_row_size(data)                                         (0x00000003&(data))
#define  MC_MC_2C_get_mc_delay_me_line_cnt(data)                                 ((0x1F000000&(data))>>24)
#define  MC_MC_2C_get_mc_me_timing_err(data)                                     ((0x00800000&(data))>>23)
#define  MC_MC_2C_get_mcdh_mv_row_num(data)                                      ((0x001FF000&(data))>>12)
#define  MC_MC_2C_get_mcdh_mv_blk_num(data)                                      ((0x00000FF8&(data))>>3)
#define  MC_MC_2C_get_mcdh_mv_rd_intval(data)                                    ((0x00000004&(data))>>2)
#define  MC_MC_2C_get_mcdh_mv_row_size(data)                                     (0x00000003&(data))

#define  MC_MC_30                                                               0x18099630
#define  MC_MC_30_reg_addr                                                       "0xB8099630"
#define  MC_MC_30_reg                                                            0xB8099630
#define  MC_MC_30_inst_addr                                                      "0x000B"
#define  set_MC_MC_30_reg(data)                                                  (*((volatile unsigned int*)MC_MC_30_reg)=data)
#define  get_MC_MC_30_reg                                                        (*((volatile unsigned int*)MC_MC_30_reg))
#define  MC_MC_30_mc_dummy_30_shift                                              (11)
#define  MC_MC_30_mc_scene_change_fb_shift                                       (10)
#define  MC_MC_30_mc_scene_change_on_shift                                       (9)
#define  MC_MC_30_mc_scene_change_mode_shift                                     (8)
#define  MC_MC_30_mc_var_flt_occ_prot_en_shift                                   (5)
#define  MC_MC_30_mc_var_flt_mvd_prot_en_shift                                   (4)
#define  MC_MC_30_mc_v_l_r_shift                                                 (3)
#define  MC_MC_30_mc_invld_ref_share_ip_shift                                    (2)
#define  MC_MC_30_mc_v_half_size_shift                                           (1)
#define  MC_MC_30_mc_h_half_size_shift                                           (0)
#define  MC_MC_30_mc_dummy_30_mask                                               (0xFFFFF800)
#define  MC_MC_30_mc_scene_change_fb_mask                                        (0x00000400)
#define  MC_MC_30_mc_scene_change_on_mask                                        (0x00000200)
#define  MC_MC_30_mc_scene_change_mode_mask                                      (0x00000100)
#define  MC_MC_30_mc_var_flt_occ_prot_en_mask                                    (0x00000020)
#define  MC_MC_30_mc_var_flt_mvd_prot_en_mask                                    (0x00000010)
#define  MC_MC_30_mc_v_l_r_mask                                                  (0x00000008)
#define  MC_MC_30_mc_invld_ref_share_ip_mask                                     (0x00000004)
#define  MC_MC_30_mc_v_half_size_mask                                            (0x00000002)
#define  MC_MC_30_mc_h_half_size_mask                                            (0x00000001)
#define  MC_MC_30_mc_dummy_30(data)                                              (0xFFFFF800&((data)<<11))
#define  MC_MC_30_mc_scene_change_fb(data)                                       (0x00000400&((data)<<10))
#define  MC_MC_30_mc_scene_change_on(data)                                       (0x00000200&((data)<<9))
#define  MC_MC_30_mc_scene_change_mode(data)                                     (0x00000100&((data)<<8))
#define  MC_MC_30_mc_var_flt_occ_prot_en(data)                                   (0x00000020&((data)<<5))
#define  MC_MC_30_mc_var_flt_mvd_prot_en(data)                                   (0x00000010&((data)<<4))
#define  MC_MC_30_mc_v_l_r(data)                                                 (0x00000008&((data)<<3))
#define  MC_MC_30_mc_invld_ref_share_ip(data)                                    (0x00000004&((data)<<2))
#define  MC_MC_30_mc_v_half_size(data)                                           (0x00000002&((data)<<1))
#define  MC_MC_30_mc_h_half_size(data)                                           (0x00000001&(data))
#define  MC_MC_30_get_mc_dummy_30(data)                                          ((0xFFFFF800&(data))>>11)
#define  MC_MC_30_get_mc_scene_change_fb(data)                                   ((0x00000400&(data))>>10)
#define  MC_MC_30_get_mc_scene_change_on(data)                                   ((0x00000200&(data))>>9)
#define  MC_MC_30_get_mc_scene_change_mode(data)                                 ((0x00000100&(data))>>8)
#define  MC_MC_30_get_mc_var_flt_occ_prot_en(data)                               ((0x00000020&(data))>>5)
#define  MC_MC_30_get_mc_var_flt_mvd_prot_en(data)                               ((0x00000010&(data))>>4)
#define  MC_MC_30_get_mc_v_l_r(data)                                             ((0x00000008&(data))>>3)
#define  MC_MC_30_get_mc_invld_ref_share_ip(data)                                ((0x00000004&(data))>>2)
#define  MC_MC_30_get_mc_v_half_size(data)                                       ((0x00000002&(data))>>1)
#define  MC_MC_30_get_mc_h_half_size(data)                                       (0x00000001&(data))

#define  MC_MC_34                                                               0x18099634
#define  MC_MC_34_reg_addr                                                       "0xB8099634"
#define  MC_MC_34_reg                                                            0xB8099634
#define  MC_MC_34_inst_addr                                                      "0x000C"
#define  set_MC_MC_34_reg(data)                                                  (*((volatile unsigned int*)MC_MC_34_reg)=data)
#define  get_MC_MC_34_reg                                                        (*((volatile unsigned int*)MC_MC_34_reg))
#define  MC_MC_34_mc_sram_test1_shift                                            (29)
#define  MC_MC_34_mc_sram_ls_shift                                               (28)
#define  MC_MC_34_mc_v_act_shift                                                 (16)
#define  MC_MC_34_mc_h_act_shift                                                 (0)
#define  MC_MC_34_mc_sram_test1_mask                                             (0x20000000)
#define  MC_MC_34_mc_sram_ls_mask                                                (0x10000000)
#define  MC_MC_34_mc_v_act_mask                                                  (0x0FFF0000)
#define  MC_MC_34_mc_h_act_mask                                                  (0x00000FFF)
#define  MC_MC_34_mc_sram_test1(data)                                            (0x20000000&((data)<<29))
#define  MC_MC_34_mc_sram_ls(data)                                               (0x10000000&((data)<<28))
#define  MC_MC_34_mc_v_act(data)                                                 (0x0FFF0000&((data)<<16))
#define  MC_MC_34_mc_h_act(data)                                                 (0x00000FFF&(data))
#define  MC_MC_34_get_mc_sram_test1(data)                                        ((0x20000000&(data))>>29)
#define  MC_MC_34_get_mc_sram_ls(data)                                           ((0x10000000&(data))>>28)
#define  MC_MC_34_get_mc_v_act(data)                                             ((0x0FFF0000&(data))>>16)
#define  MC_MC_34_get_mc_h_act(data)                                             (0x00000FFF&(data))

#define  MC_MC_38                                                               0x18099638
#define  MC_MC_38_reg_addr                                                       "0xB8099638"
#define  MC_MC_38_reg                                                            0xB8099638
#define  MC_MC_38_inst_addr                                                      "0x000D"
#define  set_MC_MC_38_reg(data)                                                  (*((volatile unsigned int*)MC_MC_38_reg)=data)
#define  get_MC_MC_38_reg                                                        (*((volatile unsigned int*)MC_MC_38_reg))
#define  MC_MC_38_mc_dummy_38_shift                                              (8)
#define  MC_MC_38_mc_mv_scale_shift                                              (4)
#define  MC_MC_38_mc_blk_size_shift                                              (0)
#define  MC_MC_38_mc_dummy_38_mask                                               (0xFFFFFF00)
#define  MC_MC_38_mc_mv_scale_mask                                               (0x000000F0)
#define  MC_MC_38_mc_blk_size_mask                                               (0x0000000F)
#define  MC_MC_38_mc_dummy_38(data)                                              (0xFFFFFF00&((data)<<8))
#define  MC_MC_38_mc_mv_scale(data)                                              (0x000000F0&((data)<<4))
#define  MC_MC_38_mc_blk_size(data)                                              (0x0000000F&(data))
#define  MC_MC_38_get_mc_dummy_38(data)                                          ((0xFFFFFF00&(data))>>8)
#define  MC_MC_38_get_mc_mv_scale(data)                                          ((0x000000F0&(data))>>4)
#define  MC_MC_38_get_mc_blk_size(data)                                          (0x0000000F&(data))

#define  MC_MC_3C                                                               0x1809963C
#define  MC_MC_3C_reg_addr                                                       "0xB809963C"
#define  MC_MC_3C_reg                                                            0xB809963C
#define  MC_MC_3C_inst_addr                                                      "0x000E"
#define  set_MC_MC_3C_reg(data)                                                  (*((volatile unsigned int*)MC_MC_3C_reg)=data)
#define  get_MC_MC_3C_reg                                                        (*((volatile unsigned int*)MC_MC_3C_reg))
#define  MC_MC_3C_mc_row_num_shift                                               (16)
#define  MC_MC_3C_mc_blk_num_shift                                               (0)
#define  MC_MC_3C_mc_row_num_mask                                                (0x03FF0000)
#define  MC_MC_3C_mc_blk_num_mask                                                (0x000003FF)
#define  MC_MC_3C_mc_row_num(data)                                               (0x03FF0000&((data)<<16))
#define  MC_MC_3C_mc_blk_num(data)                                               (0x000003FF&(data))
#define  MC_MC_3C_get_mc_row_num(data)                                           ((0x03FF0000&(data))>>16)
#define  MC_MC_3C_get_mc_blk_num(data)                                           (0x000003FF&(data))

#define  MC_MC_40                                                               0x18099640
#define  MC_MC_40_reg_addr                                                       "0xB8099640"
#define  MC_MC_40_reg                                                            0xB8099640
#define  MC_MC_40_inst_addr                                                      "0x000F"
#define  set_MC_MC_40_reg(data)                                                  (*((volatile unsigned int*)MC_MC_40_reg)=data)
#define  get_MC_MC_40_reg                                                        (*((volatile unsigned int*)MC_MC_40_reg))
#define  MC_MC_40_mc_mv_xph_rnd_thy_shift                                        (24)
#define  MC_MC_40_mc_mv_xph_rnd_thx_shift                                        (16)
#define  MC_MC_40_mc_mv_var_th_shift                                             (8)
#define  MC_MC_40_mc_mvd_intp_en_shift                                           (6)
#define  MC_MC_40_mc_mv_xph_rnd_en_shift                                         (4)
#define  MC_MC_40_mc_poly_intp_lvl_shift                                         (2)
#define  MC_MC_40_mc_poly_intp_en_shift                                          (0)
#define  MC_MC_40_mc_mv_xph_rnd_thy_mask                                         (0xFF000000)
#define  MC_MC_40_mc_mv_xph_rnd_thx_mask                                         (0x00FF0000)
#define  MC_MC_40_mc_mv_var_th_mask                                              (0x0000FF00)
#define  MC_MC_40_mc_mvd_intp_en_mask                                            (0x000000C0)
#define  MC_MC_40_mc_mv_xph_rnd_en_mask                                          (0x00000010)
#define  MC_MC_40_mc_poly_intp_lvl_mask                                          (0x0000000C)
#define  MC_MC_40_mc_poly_intp_en_mask                                           (0x00000003)
#define  MC_MC_40_mc_mv_xph_rnd_thy(data)                                        (0xFF000000&((data)<<24))
#define  MC_MC_40_mc_mv_xph_rnd_thx(data)                                        (0x00FF0000&((data)<<16))
#define  MC_MC_40_mc_mv_var_th(data)                                             (0x0000FF00&((data)<<8))
#define  MC_MC_40_mc_mvd_intp_en(data)                                           (0x000000C0&((data)<<6))
#define  MC_MC_40_mc_mv_xph_rnd_en(data)                                         (0x00000010&((data)<<4))
#define  MC_MC_40_mc_poly_intp_lvl(data)                                         (0x0000000C&((data)<<2))
#define  MC_MC_40_mc_poly_intp_en(data)                                          (0x00000003&(data))
#define  MC_MC_40_get_mc_mv_xph_rnd_thy(data)                                    ((0xFF000000&(data))>>24)
#define  MC_MC_40_get_mc_mv_xph_rnd_thx(data)                                    ((0x00FF0000&(data))>>16)
#define  MC_MC_40_get_mc_mv_var_th(data)                                         ((0x0000FF00&(data))>>8)
#define  MC_MC_40_get_mc_mvd_intp_en(data)                                       ((0x000000C0&(data))>>6)
#define  MC_MC_40_get_mc_mv_xph_rnd_en(data)                                     ((0x00000010&(data))>>4)
#define  MC_MC_40_get_mc_poly_intp_lvl(data)                                     ((0x0000000C&(data))>>2)
#define  MC_MC_40_get_mc_poly_intp_en(data)                                      (0x00000003&(data))

#define  MC_MC_44                                                               0x18099644
#define  MC_MC_44_reg_addr                                                       "0xB8099644"
#define  MC_MC_44_reg                                                            0xB8099644
#define  MC_MC_44_inst_addr                                                      "0x0010"
#define  set_MC_MC_44_reg(data)                                                  (*((volatile unsigned int*)MC_MC_44_reg)=data)
#define  get_MC_MC_44_reg                                                        (*((volatile unsigned int*)MC_MC_44_reg))
#define  MC_MC_44_mc_sr_lf_c_shift                                               (16)
#define  MC_MC_44_mc_sr_lf_y_shift                                               (0)
#define  MC_MC_44_mc_sr_lf_c_mask                                                (0x03FF0000)
#define  MC_MC_44_mc_sr_lf_y_mask                                                (0x000003FF)
#define  MC_MC_44_mc_sr_lf_c(data)                                               (0x03FF0000&((data)<<16))
#define  MC_MC_44_mc_sr_lf_y(data)                                               (0x000003FF&(data))
#define  MC_MC_44_get_mc_sr_lf_c(data)                                           ((0x03FF0000&(data))>>16)
#define  MC_MC_44_get_mc_sr_lf_y(data)                                           (0x000003FF&(data))

#define  MC_MC_48                                                               0x18099648
#define  MC_MC_48_reg_addr                                                       "0xB8099648"
#define  MC_MC_48_reg                                                            0xB8099648
#define  MC_MC_48_inst_addr                                                      "0x0011"
#define  set_MC_MC_48_reg(data)                                                  (*((volatile unsigned int*)MC_MC_48_reg)=data)
#define  get_MC_MC_48_reg                                                        (*((volatile unsigned int*)MC_MC_48_reg))
#define  MC_MC_48_mc_sr_hf_c_shift                                               (16)
#define  MC_MC_48_mc_sr_hf_y_shift                                               (0)
#define  MC_MC_48_mc_sr_hf_c_mask                                                (0x03FF0000)
#define  MC_MC_48_mc_sr_hf_y_mask                                                (0x000003FF)
#define  MC_MC_48_mc_sr_hf_c(data)                                               (0x03FF0000&((data)<<16))
#define  MC_MC_48_mc_sr_hf_y(data)                                               (0x000003FF&(data))
#define  MC_MC_48_get_mc_sr_hf_c(data)                                           ((0x03FF0000&(data))>>16)
#define  MC_MC_48_get_mc_sr_hf_y(data)                                           (0x000003FF&(data))

#define  MC_MC_4C                                                               0x1809964C
#define  MC_MC_4C_reg_addr                                                       "0xB809964C"
#define  MC_MC_4C_reg                                                            0xB809964C
#define  MC_MC_4C_inst_addr                                                      "0x0012"
#define  set_MC_MC_4C_reg(data)                                                  (*((volatile unsigned int*)MC_MC_4C_reg)=data)
#define  get_MC_MC_4C_reg                                                        (*((volatile unsigned int*)MC_MC_4C_reg))
#define  MC_MC_4C_mc_dummy_4c_shift                                              (10)
#define  MC_MC_4C_mc_sr_h_shift                                                  (0)
#define  MC_MC_4C_mc_dummy_4c_mask                                               (0xFFFFFC00)
#define  MC_MC_4C_mc_sr_h_mask                                                   (0x000003FF)
#define  MC_MC_4C_mc_dummy_4c(data)                                              (0xFFFFFC00&((data)<<10))
#define  MC_MC_4C_mc_sr_h(data)                                                  (0x000003FF&(data))
#define  MC_MC_4C_get_mc_dummy_4c(data)                                          ((0xFFFFFC00&(data))>>10)
#define  MC_MC_4C_get_mc_sr_h(data)                                              (0x000003FF&(data))

#define  MC_MC_50                                                               0x18099650
#define  MC_MC_50_reg_addr                                                       "0xB8099650"
#define  MC_MC_50_reg                                                            0xB8099650
#define  MC_MC_50_inst_addr                                                      "0x0013"
#define  set_MC_MC_50_reg(data)                                                  (*((volatile unsigned int*)MC_MC_50_reg)=data)
#define  get_MC_MC_50_reg                                                        (*((volatile unsigned int*)MC_MC_50_reg))
#define  MC_MC_50_mc_bot_rim0_shift                                              (16)
#define  MC_MC_50_mc_top_rim0_shift                                              (0)
#define  MC_MC_50_mc_bot_rim0_mask                                               (0x0FFF0000)
#define  MC_MC_50_mc_top_rim0_mask                                               (0x00000FFF)
#define  MC_MC_50_mc_bot_rim0(data)                                              (0x0FFF0000&((data)<<16))
#define  MC_MC_50_mc_top_rim0(data)                                              (0x00000FFF&(data))
#define  MC_MC_50_get_mc_bot_rim0(data)                                          ((0x0FFF0000&(data))>>16)
#define  MC_MC_50_get_mc_top_rim0(data)                                          (0x00000FFF&(data))

#define  MC_MC_54                                                               0x18099654
#define  MC_MC_54_reg_addr                                                       "0xB8099654"
#define  MC_MC_54_reg                                                            0xB8099654
#define  MC_MC_54_inst_addr                                                      "0x0014"
#define  set_MC_MC_54_reg(data)                                                  (*((volatile unsigned int*)MC_MC_54_reg)=data)
#define  get_MC_MC_54_reg                                                        (*((volatile unsigned int*)MC_MC_54_reg))
#define  MC_MC_54_mc_rht_rim0_shift                                              (16)
#define  MC_MC_54_mc_lft_rim0_shift                                              (0)
#define  MC_MC_54_mc_rht_rim0_mask                                               (0x0FFF0000)
#define  MC_MC_54_mc_lft_rim0_mask                                               (0x00000FFF)
#define  MC_MC_54_mc_rht_rim0(data)                                              (0x0FFF0000&((data)<<16))
#define  MC_MC_54_mc_lft_rim0(data)                                              (0x00000FFF&(data))
#define  MC_MC_54_get_mc_rht_rim0(data)                                          ((0x0FFF0000&(data))>>16)
#define  MC_MC_54_get_mc_lft_rim0(data)                                          (0x00000FFF&(data))

#define  MC_MC_58                                                               0x18099658
#define  MC_MC_58_reg_addr                                                       "0xB8099658"
#define  MC_MC_58_reg                                                            0xB8099658
#define  MC_MC_58_inst_addr                                                      "0x0015"
#define  set_MC_MC_58_reg(data)                                                  (*((volatile unsigned int*)MC_MC_58_reg)=data)
#define  get_MC_MC_58_reg                                                        (*((volatile unsigned int*)MC_MC_58_reg))
#define  MC_MC_58_mc_bot_rim1_shift                                              (16)
#define  MC_MC_58_mc_top_rim1_shift                                              (0)
#define  MC_MC_58_mc_bot_rim1_mask                                               (0x0FFF0000)
#define  MC_MC_58_mc_top_rim1_mask                                               (0x00000FFF)
#define  MC_MC_58_mc_bot_rim1(data)                                              (0x0FFF0000&((data)<<16))
#define  MC_MC_58_mc_top_rim1(data)                                              (0x00000FFF&(data))
#define  MC_MC_58_get_mc_bot_rim1(data)                                          ((0x0FFF0000&(data))>>16)
#define  MC_MC_58_get_mc_top_rim1(data)                                          (0x00000FFF&(data))

#define  MC_MC_5C                                                               0x1809965C
#define  MC_MC_5C_reg_addr                                                       "0xB809965C"
#define  MC_MC_5C_reg                                                            0xB809965C
#define  MC_MC_5C_inst_addr                                                      "0x0016"
#define  set_MC_MC_5C_reg(data)                                                  (*((volatile unsigned int*)MC_MC_5C_reg)=data)
#define  get_MC_MC_5C_reg                                                        (*((volatile unsigned int*)MC_MC_5C_reg))
#define  MC_MC_5C_mc_rht_rim1_shift                                              (16)
#define  MC_MC_5C_mc_lft_rim1_shift                                              (0)
#define  MC_MC_5C_mc_rht_rim1_mask                                               (0x0FFF0000)
#define  MC_MC_5C_mc_lft_rim1_mask                                               (0x00000FFF)
#define  MC_MC_5C_mc_rht_rim1(data)                                              (0x0FFF0000&((data)<<16))
#define  MC_MC_5C_mc_lft_rim1(data)                                              (0x00000FFF&(data))
#define  MC_MC_5C_get_mc_rht_rim1(data)                                          ((0x0FFF0000&(data))>>16)
#define  MC_MC_5C_get_mc_lft_rim1(data)                                          (0x00000FFF&(data))

#define  MC_MC_60                                                               0x18099660
#define  MC_MC_60_reg_addr                                                       "0xB8099660"
#define  MC_MC_60_reg                                                            0xB8099660
#define  MC_MC_60_inst_addr                                                      "0x0017"
#define  set_MC_MC_60_reg(data)                                                  (*((volatile unsigned int*)MC_MC_60_reg)=data)
#define  get_MC_MC_60_reg                                                        (*((volatile unsigned int*)MC_MC_60_reg))
#define  MC_MC_60_mc_dw_mode_shift                                               (8)
#define  MC_MC_60_mc_dw_en_shift                                                 (0)
#define  MC_MC_60_mc_dw_mode_mask                                                (0x00000100)
#define  MC_MC_60_mc_dw_en_mask                                                  (0x000000FF)
#define  MC_MC_60_mc_dw_mode(data)                                               (0x00000100&((data)<<8))
#define  MC_MC_60_mc_dw_en(data)                                                 (0x000000FF&(data))
#define  MC_MC_60_get_mc_dw_mode(data)                                           ((0x00000100&(data))>>8)
#define  MC_MC_60_get_mc_dw_en(data)                                             (0x000000FF&(data))

#define  MC_MC_64                                                               0x18099664
#define  MC_MC_64_reg_addr                                                       "0xB8099664"
#define  MC_MC_64_reg                                                            0xB8099664
#define  MC_MC_64_inst_addr                                                      "0x0018"
#define  set_MC_MC_64_reg(data)                                                  (*((volatile unsigned int*)MC_MC_64_reg)=data)
#define  get_MC_MC_64_reg                                                        (*((volatile unsigned int*)MC_MC_64_reg))
#define  MC_MC_64_mc_dw_bot0_shift                                               (16)
#define  MC_MC_64_mc_dw_top0_shift                                               (0)
#define  MC_MC_64_mc_dw_bot0_mask                                                (0x0FFF0000)
#define  MC_MC_64_mc_dw_top0_mask                                                (0x00000FFF)
#define  MC_MC_64_mc_dw_bot0(data)                                               (0x0FFF0000&((data)<<16))
#define  MC_MC_64_mc_dw_top0(data)                                               (0x00000FFF&(data))
#define  MC_MC_64_get_mc_dw_bot0(data)                                           ((0x0FFF0000&(data))>>16)
#define  MC_MC_64_get_mc_dw_top0(data)                                           (0x00000FFF&(data))

#define  MC_MC_68                                                               0x18099668
#define  MC_MC_68_reg_addr                                                       "0xB8099668"
#define  MC_MC_68_reg                                                            0xB8099668
#define  MC_MC_68_inst_addr                                                      "0x0019"
#define  set_MC_MC_68_reg(data)                                                  (*((volatile unsigned int*)MC_MC_68_reg)=data)
#define  get_MC_MC_68_reg                                                        (*((volatile unsigned int*)MC_MC_68_reg))
#define  MC_MC_68_mc_dw_rht0_shift                                               (16)
#define  MC_MC_68_mc_dw_lft0_shift                                               (0)
#define  MC_MC_68_mc_dw_rht0_mask                                                (0x0FFF0000)
#define  MC_MC_68_mc_dw_lft0_mask                                                (0x00000FFF)
#define  MC_MC_68_mc_dw_rht0(data)                                               (0x0FFF0000&((data)<<16))
#define  MC_MC_68_mc_dw_lft0(data)                                               (0x00000FFF&(data))
#define  MC_MC_68_get_mc_dw_rht0(data)                                           ((0x0FFF0000&(data))>>16)
#define  MC_MC_68_get_mc_dw_lft0(data)                                           (0x00000FFF&(data))

#define  MC_MC_6C                                                               0x1809966C
#define  MC_MC_6C_reg_addr                                                       "0xB809966C"
#define  MC_MC_6C_reg                                                            0xB809966C
#define  MC_MC_6C_inst_addr                                                      "0x001A"
#define  set_MC_MC_6C_reg(data)                                                  (*((volatile unsigned int*)MC_MC_6C_reg)=data)
#define  get_MC_MC_6C_reg                                                        (*((volatile unsigned int*)MC_MC_6C_reg))
#define  MC_MC_6C_mc_dw_bot1_shift                                               (16)
#define  MC_MC_6C_mc_dw_top1_shift                                               (0)
#define  MC_MC_6C_mc_dw_bot1_mask                                                (0x0FFF0000)
#define  MC_MC_6C_mc_dw_top1_mask                                                (0x00000FFF)
#define  MC_MC_6C_mc_dw_bot1(data)                                               (0x0FFF0000&((data)<<16))
#define  MC_MC_6C_mc_dw_top1(data)                                               (0x00000FFF&(data))
#define  MC_MC_6C_get_mc_dw_bot1(data)                                           ((0x0FFF0000&(data))>>16)
#define  MC_MC_6C_get_mc_dw_top1(data)                                           (0x00000FFF&(data))

#define  MC_MC_70                                                               0x18099670
#define  MC_MC_70_reg_addr                                                       "0xB8099670"
#define  MC_MC_70_reg                                                            0xB8099670
#define  MC_MC_70_inst_addr                                                      "0x001B"
#define  set_MC_MC_70_reg(data)                                                  (*((volatile unsigned int*)MC_MC_70_reg)=data)
#define  get_MC_MC_70_reg                                                        (*((volatile unsigned int*)MC_MC_70_reg))
#define  MC_MC_70_mc_dw_rht1_shift                                               (16)
#define  MC_MC_70_mc_dw_lft1_shift                                               (0)
#define  MC_MC_70_mc_dw_rht1_mask                                                (0x0FFF0000)
#define  MC_MC_70_mc_dw_lft1_mask                                                (0x00000FFF)
#define  MC_MC_70_mc_dw_rht1(data)                                               (0x0FFF0000&((data)<<16))
#define  MC_MC_70_mc_dw_lft1(data)                                               (0x00000FFF&(data))
#define  MC_MC_70_get_mc_dw_rht1(data)                                           ((0x0FFF0000&(data))>>16)
#define  MC_MC_70_get_mc_dw_lft1(data)                                           (0x00000FFF&(data))

#define  MC_MC_74                                                               0x18099674
#define  MC_MC_74_reg_addr                                                       "0xB8099674"
#define  MC_MC_74_reg                                                            0xB8099674
#define  MC_MC_74_inst_addr                                                      "0x001C"
#define  set_MC_MC_74_reg(data)                                                  (*((volatile unsigned int*)MC_MC_74_reg)=data)
#define  get_MC_MC_74_reg                                                        (*((volatile unsigned int*)MC_MC_74_reg))
#define  MC_MC_74_mc_dw_bot2_shift                                               (16)
#define  MC_MC_74_mc_dw_top2_shift                                               (0)
#define  MC_MC_74_mc_dw_bot2_mask                                                (0x0FFF0000)
#define  MC_MC_74_mc_dw_top2_mask                                                (0x00000FFF)
#define  MC_MC_74_mc_dw_bot2(data)                                               (0x0FFF0000&((data)<<16))
#define  MC_MC_74_mc_dw_top2(data)                                               (0x00000FFF&(data))
#define  MC_MC_74_get_mc_dw_bot2(data)                                           ((0x0FFF0000&(data))>>16)
#define  MC_MC_74_get_mc_dw_top2(data)                                           (0x00000FFF&(data))

#define  MC_MC_78                                                               0x18099678
#define  MC_MC_78_reg_addr                                                       "0xB8099678"
#define  MC_MC_78_reg                                                            0xB8099678
#define  MC_MC_78_inst_addr                                                      "0x001D"
#define  set_MC_MC_78_reg(data)                                                  (*((volatile unsigned int*)MC_MC_78_reg)=data)
#define  get_MC_MC_78_reg                                                        (*((volatile unsigned int*)MC_MC_78_reg))
#define  MC_MC_78_mc_dw_rht2_shift                                               (16)
#define  MC_MC_78_mc_dw_lft2_shift                                               (0)
#define  MC_MC_78_mc_dw_rht2_mask                                                (0x0FFF0000)
#define  MC_MC_78_mc_dw_lft2_mask                                                (0x00000FFF)
#define  MC_MC_78_mc_dw_rht2(data)                                               (0x0FFF0000&((data)<<16))
#define  MC_MC_78_mc_dw_lft2(data)                                               (0x00000FFF&(data))
#define  MC_MC_78_get_mc_dw_rht2(data)                                           ((0x0FFF0000&(data))>>16)
#define  MC_MC_78_get_mc_dw_lft2(data)                                           (0x00000FFF&(data))

#define  MC_MC_7C                                                               0x1809967C
#define  MC_MC_7C_reg_addr                                                       "0xB809967C"
#define  MC_MC_7C_reg                                                            0xB809967C
#define  MC_MC_7C_inst_addr                                                      "0x001E"
#define  set_MC_MC_7C_reg(data)                                                  (*((volatile unsigned int*)MC_MC_7C_reg)=data)
#define  get_MC_MC_7C_reg                                                        (*((volatile unsigned int*)MC_MC_7C_reg))
#define  MC_MC_7C_mc_dw_bot3_shift                                               (16)
#define  MC_MC_7C_mc_dw_top3_shift                                               (0)
#define  MC_MC_7C_mc_dw_bot3_mask                                                (0x0FFF0000)
#define  MC_MC_7C_mc_dw_top3_mask                                                (0x00000FFF)
#define  MC_MC_7C_mc_dw_bot3(data)                                               (0x0FFF0000&((data)<<16))
#define  MC_MC_7C_mc_dw_top3(data)                                               (0x00000FFF&(data))
#define  MC_MC_7C_get_mc_dw_bot3(data)                                           ((0x0FFF0000&(data))>>16)
#define  MC_MC_7C_get_mc_dw_top3(data)                                           (0x00000FFF&(data))

#define  MC_MC_80                                                               0x18099680
#define  MC_MC_80_reg_addr                                                       "0xB8099680"
#define  MC_MC_80_reg                                                            0xB8099680
#define  MC_MC_80_inst_addr                                                      "0x001F"
#define  set_MC_MC_80_reg(data)                                                  (*((volatile unsigned int*)MC_MC_80_reg)=data)
#define  get_MC_MC_80_reg                                                        (*((volatile unsigned int*)MC_MC_80_reg))
#define  MC_MC_80_mc_dw_rht3_shift                                               (16)
#define  MC_MC_80_mc_dw_lft3_shift                                               (0)
#define  MC_MC_80_mc_dw_rht3_mask                                                (0x0FFF0000)
#define  MC_MC_80_mc_dw_lft3_mask                                                (0x00000FFF)
#define  MC_MC_80_mc_dw_rht3(data)                                               (0x0FFF0000&((data)<<16))
#define  MC_MC_80_mc_dw_lft3(data)                                               (0x00000FFF&(data))
#define  MC_MC_80_get_mc_dw_rht3(data)                                           ((0x0FFF0000&(data))>>16)
#define  MC_MC_80_get_mc_dw_lft3(data)                                           (0x00000FFF&(data))

#define  MC_MC_84                                                               0x18099684
#define  MC_MC_84_reg_addr                                                       "0xB8099684"
#define  MC_MC_84_reg                                                            0xB8099684
#define  MC_MC_84_inst_addr                                                      "0x0020"
#define  set_MC_MC_84_reg(data)                                                  (*((volatile unsigned int*)MC_MC_84_reg)=data)
#define  get_MC_MC_84_reg                                                        (*((volatile unsigned int*)MC_MC_84_reg))
#define  MC_MC_84_mc_dw_bot4_shift                                               (16)
#define  MC_MC_84_mc_dw_top4_shift                                               (0)
#define  MC_MC_84_mc_dw_bot4_mask                                                (0x0FFF0000)
#define  MC_MC_84_mc_dw_top4_mask                                                (0x00000FFF)
#define  MC_MC_84_mc_dw_bot4(data)                                               (0x0FFF0000&((data)<<16))
#define  MC_MC_84_mc_dw_top4(data)                                               (0x00000FFF&(data))
#define  MC_MC_84_get_mc_dw_bot4(data)                                           ((0x0FFF0000&(data))>>16)
#define  MC_MC_84_get_mc_dw_top4(data)                                           (0x00000FFF&(data))

#define  MC_MC_88                                                               0x18099688
#define  MC_MC_88_reg_addr                                                       "0xB8099688"
#define  MC_MC_88_reg                                                            0xB8099688
#define  MC_MC_88_inst_addr                                                      "0x0021"
#define  set_MC_MC_88_reg(data)                                                  (*((volatile unsigned int*)MC_MC_88_reg)=data)
#define  get_MC_MC_88_reg                                                        (*((volatile unsigned int*)MC_MC_88_reg))
#define  MC_MC_88_mc_dw_rht4_shift                                               (16)
#define  MC_MC_88_mc_dw_lft4_shift                                               (0)
#define  MC_MC_88_mc_dw_rht4_mask                                                (0x0FFF0000)
#define  MC_MC_88_mc_dw_lft4_mask                                                (0x00000FFF)
#define  MC_MC_88_mc_dw_rht4(data)                                               (0x0FFF0000&((data)<<16))
#define  MC_MC_88_mc_dw_lft4(data)                                               (0x00000FFF&(data))
#define  MC_MC_88_get_mc_dw_rht4(data)                                           ((0x0FFF0000&(data))>>16)
#define  MC_MC_88_get_mc_dw_lft4(data)                                           (0x00000FFF&(data))

#define  MC_MC_8C                                                               0x1809968C
#define  MC_MC_8C_reg_addr                                                       "0xB809968C"
#define  MC_MC_8C_reg                                                            0xB809968C
#define  MC_MC_8C_inst_addr                                                      "0x0022"
#define  set_MC_MC_8C_reg(data)                                                  (*((volatile unsigned int*)MC_MC_8C_reg)=data)
#define  get_MC_MC_8C_reg                                                        (*((volatile unsigned int*)MC_MC_8C_reg))
#define  MC_MC_8C_mc_dw_bot5_shift                                               (16)
#define  MC_MC_8C_mc_dw_top5_shift                                               (0)
#define  MC_MC_8C_mc_dw_bot5_mask                                                (0x0FFF0000)
#define  MC_MC_8C_mc_dw_top5_mask                                                (0x00000FFF)
#define  MC_MC_8C_mc_dw_bot5(data)                                               (0x0FFF0000&((data)<<16))
#define  MC_MC_8C_mc_dw_top5(data)                                               (0x00000FFF&(data))
#define  MC_MC_8C_get_mc_dw_bot5(data)                                           ((0x0FFF0000&(data))>>16)
#define  MC_MC_8C_get_mc_dw_top5(data)                                           (0x00000FFF&(data))

#define  MC_MC_90                                                               0x18099690
#define  MC_MC_90_reg_addr                                                       "0xB8099690"
#define  MC_MC_90_reg                                                            0xB8099690
#define  MC_MC_90_inst_addr                                                      "0x0023"
#define  set_MC_MC_90_reg(data)                                                  (*((volatile unsigned int*)MC_MC_90_reg)=data)
#define  get_MC_MC_90_reg                                                        (*((volatile unsigned int*)MC_MC_90_reg))
#define  MC_MC_90_mc_dw_rht5_shift                                               (16)
#define  MC_MC_90_mc_dw_lft5_shift                                               (0)
#define  MC_MC_90_mc_dw_rht5_mask                                                (0x0FFF0000)
#define  MC_MC_90_mc_dw_lft5_mask                                                (0x00000FFF)
#define  MC_MC_90_mc_dw_rht5(data)                                               (0x0FFF0000&((data)<<16))
#define  MC_MC_90_mc_dw_lft5(data)                                               (0x00000FFF&(data))
#define  MC_MC_90_get_mc_dw_rht5(data)                                           ((0x0FFF0000&(data))>>16)
#define  MC_MC_90_get_mc_dw_lft5(data)                                           (0x00000FFF&(data))

#define  MC_MC_94                                                               0x18099694
#define  MC_MC_94_reg_addr                                                       "0xB8099694"
#define  MC_MC_94_reg                                                            0xB8099694
#define  MC_MC_94_inst_addr                                                      "0x0024"
#define  set_MC_MC_94_reg(data)                                                  (*((volatile unsigned int*)MC_MC_94_reg)=data)
#define  get_MC_MC_94_reg                                                        (*((volatile unsigned int*)MC_MC_94_reg))
#define  MC_MC_94_mc_dw_bot6_shift                                               (16)
#define  MC_MC_94_mc_dw_top6_shift                                               (0)
#define  MC_MC_94_mc_dw_bot6_mask                                                (0x0FFF0000)
#define  MC_MC_94_mc_dw_top6_mask                                                (0x00000FFF)
#define  MC_MC_94_mc_dw_bot6(data)                                               (0x0FFF0000&((data)<<16))
#define  MC_MC_94_mc_dw_top6(data)                                               (0x00000FFF&(data))
#define  MC_MC_94_get_mc_dw_bot6(data)                                           ((0x0FFF0000&(data))>>16)
#define  MC_MC_94_get_mc_dw_top6(data)                                           (0x00000FFF&(data))

#define  MC_MC_98                                                               0x18099698
#define  MC_MC_98_reg_addr                                                       "0xB8099698"
#define  MC_MC_98_reg                                                            0xB8099698
#define  MC_MC_98_inst_addr                                                      "0x0025"
#define  set_MC_MC_98_reg(data)                                                  (*((volatile unsigned int*)MC_MC_98_reg)=data)
#define  get_MC_MC_98_reg                                                        (*((volatile unsigned int*)MC_MC_98_reg))
#define  MC_MC_98_mc_dw_rht6_shift                                               (16)
#define  MC_MC_98_mc_dw_lft6_shift                                               (0)
#define  MC_MC_98_mc_dw_rht6_mask                                                (0x0FFF0000)
#define  MC_MC_98_mc_dw_lft6_mask                                                (0x00000FFF)
#define  MC_MC_98_mc_dw_rht6(data)                                               (0x0FFF0000&((data)<<16))
#define  MC_MC_98_mc_dw_lft6(data)                                               (0x00000FFF&(data))
#define  MC_MC_98_get_mc_dw_rht6(data)                                           ((0x0FFF0000&(data))>>16)
#define  MC_MC_98_get_mc_dw_lft6(data)                                           (0x00000FFF&(data))

#define  MC_MC_9C                                                               0x1809969C
#define  MC_MC_9C_reg_addr                                                       "0xB809969C"
#define  MC_MC_9C_reg                                                            0xB809969C
#define  MC_MC_9C_inst_addr                                                      "0x0026"
#define  set_MC_MC_9C_reg(data)                                                  (*((volatile unsigned int*)MC_MC_9C_reg)=data)
#define  get_MC_MC_9C_reg                                                        (*((volatile unsigned int*)MC_MC_9C_reg))
#define  MC_MC_9C_mc_dw_bot7_shift                                               (16)
#define  MC_MC_9C_mc_dw_top7_shift                                               (0)
#define  MC_MC_9C_mc_dw_bot7_mask                                                (0x0FFF0000)
#define  MC_MC_9C_mc_dw_top7_mask                                                (0x00000FFF)
#define  MC_MC_9C_mc_dw_bot7(data)                                               (0x0FFF0000&((data)<<16))
#define  MC_MC_9C_mc_dw_top7(data)                                               (0x00000FFF&(data))
#define  MC_MC_9C_get_mc_dw_bot7(data)                                           ((0x0FFF0000&(data))>>16)
#define  MC_MC_9C_get_mc_dw_top7(data)                                           (0x00000FFF&(data))

#define  MC_MC_A0                                                               0x180996A0
#define  MC_MC_A0_reg_addr                                                       "0xB80996A0"
#define  MC_MC_A0_reg                                                            0xB80996A0
#define  MC_MC_A0_inst_addr                                                      "0x0027"
#define  set_MC_MC_A0_reg(data)                                                  (*((volatile unsigned int*)MC_MC_A0_reg)=data)
#define  get_MC_MC_A0_reg                                                        (*((volatile unsigned int*)MC_MC_A0_reg))
#define  MC_MC_A0_mc_dw_rht7_shift                                               (16)
#define  MC_MC_A0_mc_dw_lft7_shift                                               (0)
#define  MC_MC_A0_mc_dw_rht7_mask                                                (0x0FFF0000)
#define  MC_MC_A0_mc_dw_lft7_mask                                                (0x00000FFF)
#define  MC_MC_A0_mc_dw_rht7(data)                                               (0x0FFF0000&((data)<<16))
#define  MC_MC_A0_mc_dw_lft7(data)                                               (0x00000FFF&(data))
#define  MC_MC_A0_get_mc_dw_rht7(data)                                           ((0x0FFF0000&(data))>>16)
#define  MC_MC_A0_get_mc_dw_lft7(data)                                           (0x00000FFF&(data))

#define  MC_MC_A4                                                               0x180996A4
#define  MC_MC_A4_reg_addr                                                       "0xB80996A4"
#define  MC_MC_A4_reg                                                            0xB80996A4
#define  MC_MC_A4_inst_addr                                                      "0x0028"
#define  set_MC_MC_A4_reg(data)                                                  (*((volatile unsigned int*)MC_MC_A4_reg)=data)
#define  get_MC_MC_A4_reg                                                        (*((volatile unsigned int*)MC_MC_A4_reg))
#define  MC_MC_A4_mc_pt_phase_th1_shift                                          (24)
#define  MC_MC_A4_mc_pt_phase_th0_shift                                          (16)
#define  MC_MC_A4_mc_pt_z_type2_shift                                            (12)
#define  MC_MC_A4_mc_pt_z_type1_shift                                            (8)
#define  MC_MC_A4_mc_pt_logo_th_shift                                            (4)
#define  MC_MC_A4_mc_pt_logo_mode_shift                                          (3)
#define  MC_MC_A4_mc_pt_hf_sr_en_shift                                           (2)
#define  MC_MC_A4_mc_pt_sr_clip_en_shift                                         (1)
#define  MC_MC_A4_mc_pt_proc_en_shift                                            (0)
#define  MC_MC_A4_mc_pt_phase_th1_mask                                           (0x7F000000)
#define  MC_MC_A4_mc_pt_phase_th0_mask                                           (0x007F0000)
#define  MC_MC_A4_mc_pt_z_type2_mask                                             (0x00007000)
#define  MC_MC_A4_mc_pt_z_type1_mask                                             (0x00000700)
#define  MC_MC_A4_mc_pt_logo_th_mask                                             (0x000000F0)
#define  MC_MC_A4_mc_pt_logo_mode_mask                                           (0x00000008)
#define  MC_MC_A4_mc_pt_hf_sr_en_mask                                            (0x00000004)
#define  MC_MC_A4_mc_pt_sr_clip_en_mask                                          (0x00000002)
#define  MC_MC_A4_mc_pt_proc_en_mask                                             (0x00000001)
#define  MC_MC_A4_mc_pt_phase_th1(data)                                          (0x7F000000&((data)<<24))
#define  MC_MC_A4_mc_pt_phase_th0(data)                                          (0x007F0000&((data)<<16))
#define  MC_MC_A4_mc_pt_z_type2(data)                                            (0x00007000&((data)<<12))
#define  MC_MC_A4_mc_pt_z_type1(data)                                            (0x00000700&((data)<<8))
#define  MC_MC_A4_mc_pt_logo_th(data)                                            (0x000000F0&((data)<<4))
#define  MC_MC_A4_mc_pt_logo_mode(data)                                          (0x00000008&((data)<<3))
#define  MC_MC_A4_mc_pt_hf_sr_en(data)                                           (0x00000004&((data)<<2))
#define  MC_MC_A4_mc_pt_sr_clip_en(data)                                         (0x00000002&((data)<<1))
#define  MC_MC_A4_mc_pt_proc_en(data)                                            (0x00000001&(data))
#define  MC_MC_A4_get_mc_pt_phase_th1(data)                                      ((0x7F000000&(data))>>24)
#define  MC_MC_A4_get_mc_pt_phase_th0(data)                                      ((0x007F0000&(data))>>16)
#define  MC_MC_A4_get_mc_pt_z_type2(data)                                        ((0x00007000&(data))>>12)
#define  MC_MC_A4_get_mc_pt_z_type1(data)                                        ((0x00000700&(data))>>8)
#define  MC_MC_A4_get_mc_pt_logo_th(data)                                        ((0x000000F0&(data))>>4)
#define  MC_MC_A4_get_mc_pt_logo_mode(data)                                      ((0x00000008&(data))>>3)
#define  MC_MC_A4_get_mc_pt_hf_sr_en(data)                                       ((0x00000004&(data))>>2)
#define  MC_MC_A4_get_mc_pt_sr_clip_en(data)                                     ((0x00000002&(data))>>1)
#define  MC_MC_A4_get_mc_pt_proc_en(data)                                        (0x00000001&(data))

#define  MC_MC_A8                                                               0x180996A8
#define  MC_MC_A8_reg_addr                                                       "0xB80996A8"
#define  MC_MC_A8_reg                                                            0xB80996A8
#define  MC_MC_A8_inst_addr                                                      "0x0029"
#define  set_MC_MC_A8_reg(data)                                                  (*((volatile unsigned int*)MC_MC_A8_reg)=data)
#define  get_MC_MC_A8_reg                                                        (*((volatile unsigned int*)MC_MC_A8_reg))
#define  MC_MC_A8_mc_occl_phase_th1_shift                                        (16)
#define  MC_MC_A8_mc_occl_phase_th0_shift                                        (8)
#define  MC_MC_A8_mc_occl_poly_off_shift                                         (1)
#define  MC_MC_A8_mc_occl_en_shift                                               (0)
#define  MC_MC_A8_mc_occl_phase_th1_mask                                         (0x007F0000)
#define  MC_MC_A8_mc_occl_phase_th0_mask                                         (0x00007F00)
#define  MC_MC_A8_mc_occl_poly_off_mask                                          (0x00000002)
#define  MC_MC_A8_mc_occl_en_mask                                                (0x00000001)
#define  MC_MC_A8_mc_occl_phase_th1(data)                                        (0x007F0000&((data)<<16))
#define  MC_MC_A8_mc_occl_phase_th0(data)                                        (0x00007F00&((data)<<8))
#define  MC_MC_A8_mc_occl_poly_off(data)                                         (0x00000002&((data)<<1))
#define  MC_MC_A8_mc_occl_en(data)                                               (0x00000001&(data))
#define  MC_MC_A8_get_mc_occl_phase_th1(data)                                    ((0x007F0000&(data))>>16)
#define  MC_MC_A8_get_mc_occl_phase_th0(data)                                    ((0x00007F00&(data))>>8)
#define  MC_MC_A8_get_mc_occl_poly_off(data)                                     ((0x00000002&(data))>>1)
#define  MC_MC_A8_get_mc_occl_en(data)                                           (0x00000001&(data))

#define  MC_MC_AC                                                               0x180996AC
#define  MC_MC_AC_reg_addr                                                       "0xB80996AC"
#define  MC_MC_AC_reg                                                            0xB80996AC
#define  MC_MC_AC_inst_addr                                                      "0x002A"
#define  set_MC_MC_AC_reg(data)                                                  (*((volatile unsigned int*)MC_MC_AC_reg)=data)
#define  get_MC_MC_AC_reg                                                        (*((volatile unsigned int*)MC_MC_AC_reg))
#define  MC_MC_AC_mc_pt_pxl_th1_shift                                            (24)
#define  MC_MC_AC_mc_pt_pxl_th0_shift                                            (16)
#define  MC_MC_AC_mc_pt_pxl_mode_shift                                           (15)
#define  MC_MC_AC_mc_dummy_ac_shift                                              (3)
#define  MC_MC_AC_mc_obmc_mode_shift                                             (2)
#define  MC_MC_AC_mc_obmc_bypass_shift                                           (0)
#define  MC_MC_AC_mc_pt_pxl_th1_mask                                             (0xFF000000)
#define  MC_MC_AC_mc_pt_pxl_th0_mask                                             (0x00FF0000)
#define  MC_MC_AC_mc_pt_pxl_mode_mask                                            (0x00008000)
#define  MC_MC_AC_mc_dummy_ac_mask                                               (0x00007FF8)
#define  MC_MC_AC_mc_obmc_mode_mask                                              (0x00000004)
#define  MC_MC_AC_mc_obmc_bypass_mask                                            (0x00000003)
#define  MC_MC_AC_mc_pt_pxl_th1(data)                                            (0xFF000000&((data)<<24))
#define  MC_MC_AC_mc_pt_pxl_th0(data)                                            (0x00FF0000&((data)<<16))
#define  MC_MC_AC_mc_pt_pxl_mode(data)                                           (0x00008000&((data)<<15))
#define  MC_MC_AC_mc_dummy_ac(data)                                              (0x00007FF8&((data)<<3))
#define  MC_MC_AC_mc_obmc_mode(data)                                             (0x00000004&((data)<<2))
#define  MC_MC_AC_mc_obmc_bypass(data)                                           (0x00000003&(data))
#define  MC_MC_AC_get_mc_pt_pxl_th1(data)                                        ((0xFF000000&(data))>>24)
#define  MC_MC_AC_get_mc_pt_pxl_th0(data)                                        ((0x00FF0000&(data))>>16)
#define  MC_MC_AC_get_mc_pt_pxl_mode(data)                                       ((0x00008000&(data))>>15)
#define  MC_MC_AC_get_mc_dummy_ac(data)                                          ((0x00007FF8&(data))>>3)
#define  MC_MC_AC_get_mc_obmc_mode(data)                                         ((0x00000004&(data))>>2)
#define  MC_MC_AC_get_mc_obmc_bypass(data)                                       (0x00000003&(data))

#define  MC_MC_B0                                                               0x180996B0
#define  MC_MC_B0_reg_addr                                                       "0xB80996B0"
#define  MC_MC_B0_reg                                                            0xB80996B0
#define  MC_MC_B0_inst_addr                                                      "0x002B"
#define  set_MC_MC_B0_reg(data)                                                  (*((volatile unsigned int*)MC_MC_B0_reg)=data)
#define  get_MC_MC_B0_reg                                                        (*((volatile unsigned int*)MC_MC_B0_reg))
#define  MC_MC_B0_mc_bld_sr_flbk_shift                                           (28)
#define  MC_MC_B0_mc_bld_flbk_lvl_shift                                          (20)
#define  MC_MC_B0_mc_bld_w_type_shift                                            (16)
#define  MC_MC_B0_mc_bld_z_type_flbk_shift                                       (12)
#define  MC_MC_B0_mc_bld_z_type_med3_shift                                       (8)
#define  MC_MC_B0_mc_bld_flbk_bypass_shift                                       (6)
#define  MC_MC_B0_mc_bld_med3_bypass_shift                                       (4)
#define  MC_MC_B0_mc_bld_bypass_shift                                            (0)
#define  MC_MC_B0_mc_bld_sr_flbk_mask                                            (0x30000000)
#define  MC_MC_B0_mc_bld_flbk_lvl_mask                                           (0x0FF00000)
#define  MC_MC_B0_mc_bld_w_type_mask                                             (0x00070000)
#define  MC_MC_B0_mc_bld_z_type_flbk_mask                                        (0x00007000)
#define  MC_MC_B0_mc_bld_z_type_med3_mask                                        (0x00000700)
#define  MC_MC_B0_mc_bld_flbk_bypass_mask                                        (0x000000C0)
#define  MC_MC_B0_mc_bld_med3_bypass_mask                                        (0x00000030)
#define  MC_MC_B0_mc_bld_bypass_mask                                             (0x00000007)
#define  MC_MC_B0_mc_bld_sr_flbk(data)                                           (0x30000000&((data)<<28))
#define  MC_MC_B0_mc_bld_flbk_lvl(data)                                          (0x0FF00000&((data)<<20))
#define  MC_MC_B0_mc_bld_w_type(data)                                            (0x00070000&((data)<<16))
#define  MC_MC_B0_mc_bld_z_type_flbk(data)                                       (0x00007000&((data)<<12))
#define  MC_MC_B0_mc_bld_z_type_med3(data)                                       (0x00000700&((data)<<8))
#define  MC_MC_B0_mc_bld_flbk_bypass(data)                                       (0x000000C0&((data)<<6))
#define  MC_MC_B0_mc_bld_med3_bypass(data)                                       (0x00000030&((data)<<4))
#define  MC_MC_B0_mc_bld_bypass(data)                                            (0x00000007&(data))
#define  MC_MC_B0_get_mc_bld_sr_flbk(data)                                       ((0x30000000&(data))>>28)
#define  MC_MC_B0_get_mc_bld_flbk_lvl(data)                                      ((0x0FF00000&(data))>>20)
#define  MC_MC_B0_get_mc_bld_w_type(data)                                        ((0x00070000&(data))>>16)
#define  MC_MC_B0_get_mc_bld_z_type_flbk(data)                                   ((0x00007000&(data))>>12)
#define  MC_MC_B0_get_mc_bld_z_type_med3(data)                                   ((0x00000700&(data))>>8)
#define  MC_MC_B0_get_mc_bld_flbk_bypass(data)                                   ((0x000000C0&(data))>>6)
#define  MC_MC_B0_get_mc_bld_med3_bypass(data)                                   ((0x00000030&(data))>>4)
#define  MC_MC_B0_get_mc_bld_bypass(data)                                        (0x00000007&(data))

#define  MC_MC_B4                                                               0x180996B4
#define  MC_MC_B4_reg_addr                                                       "0xB80996B4"
#define  MC_MC_B4_reg                                                            0xB80996B4
#define  MC_MC_B4_inst_addr                                                      "0x002C"
#define  set_MC_MC_B4_reg(data)                                                  (*((volatile unsigned int*)MC_MC_B4_reg)=data)
#define  get_MC_MC_B4_reg                                                        (*((volatile unsigned int*)MC_MC_B4_reg))
#define  MC_MC_B4_mc_bld_mvd_y_max_shift                                         (24)
#define  MC_MC_B4_mc_bld_mvd_y_min_shift                                         (16)
#define  MC_MC_B4_mc_bld_mvd_slope_shift                                         (8)
#define  MC_MC_B4_mc_bld_mvd_x_th_shift                                          (0)
#define  MC_MC_B4_mc_bld_mvd_y_max_mask                                          (0xFF000000)
#define  MC_MC_B4_mc_bld_mvd_y_min_mask                                          (0x00FF0000)
#define  MC_MC_B4_mc_bld_mvd_slope_mask                                          (0x0000FF00)
#define  MC_MC_B4_mc_bld_mvd_x_th_mask                                           (0x000000FF)
#define  MC_MC_B4_mc_bld_mvd_y_max(data)                                         (0xFF000000&((data)<<24))
#define  MC_MC_B4_mc_bld_mvd_y_min(data)                                         (0x00FF0000&((data)<<16))
#define  MC_MC_B4_mc_bld_mvd_slope(data)                                         (0x0000FF00&((data)<<8))
#define  MC_MC_B4_mc_bld_mvd_x_th(data)                                          (0x000000FF&(data))
#define  MC_MC_B4_get_mc_bld_mvd_y_max(data)                                     ((0xFF000000&(data))>>24)
#define  MC_MC_B4_get_mc_bld_mvd_y_min(data)                                     ((0x00FF0000&(data))>>16)
#define  MC_MC_B4_get_mc_bld_mvd_slope(data)                                     ((0x0000FF00&(data))>>8)
#define  MC_MC_B4_get_mc_bld_mvd_x_th(data)                                      (0x000000FF&(data))

#define  MC_MC_B8                                                               0x180996B8
#define  MC_MC_B8_reg_addr                                                       "0xB80996B8"
#define  MC_MC_B8_reg                                                            0xB80996B8
#define  MC_MC_B8_inst_addr                                                      "0x002D"
#define  set_MC_MC_B8_reg(data)                                                  (*((volatile unsigned int*)MC_MC_B8_reg)=data)
#define  get_MC_MC_B8_reg                                                        (*((volatile unsigned int*)MC_MC_B8_reg))
#define  MC_MC_B8_mc_sobj_ymax0_shift                                            (16)
#define  MC_MC_B8_mc_sobj_ymin0_shift                                            (12)
#define  MC_MC_B8_mc_sobj_en_shift                                               (11)
#define  MC_MC_B8_mc_sobj_slop0_shift                                            (8)
#define  MC_MC_B8_mc_sobj_x_th0_shift                                            (0)
#define  MC_MC_B8_mc_sobj_ymax0_mask                                             (0x000F0000)
#define  MC_MC_B8_mc_sobj_ymin0_mask                                             (0x0000F000)
#define  MC_MC_B8_mc_sobj_en_mask                                                (0x00000800)
#define  MC_MC_B8_mc_sobj_slop0_mask                                             (0x00000700)
#define  MC_MC_B8_mc_sobj_x_th0_mask                                             (0x000000FF)
#define  MC_MC_B8_mc_sobj_ymax0(data)                                            (0x000F0000&((data)<<16))
#define  MC_MC_B8_mc_sobj_ymin0(data)                                            (0x0000F000&((data)<<12))
#define  MC_MC_B8_mc_sobj_en(data)                                               (0x00000800&((data)<<11))
#define  MC_MC_B8_mc_sobj_slop0(data)                                            (0x00000700&((data)<<8))
#define  MC_MC_B8_mc_sobj_x_th0(data)                                            (0x000000FF&(data))
#define  MC_MC_B8_get_mc_sobj_ymax0(data)                                        ((0x000F0000&(data))>>16)
#define  MC_MC_B8_get_mc_sobj_ymin0(data)                                        ((0x0000F000&(data))>>12)
#define  MC_MC_B8_get_mc_sobj_en(data)                                           ((0x00000800&(data))>>11)
#define  MC_MC_B8_get_mc_sobj_slop0(data)                                        ((0x00000700&(data))>>8)
#define  MC_MC_B8_get_mc_sobj_x_th0(data)                                        (0x000000FF&(data))

#define  MC_MC_BC                                                               0x180996BC
#define  MC_MC_BC_reg_addr                                                       "0xB80996BC"
#define  MC_MC_BC_reg                                                            0xB80996BC
#define  MC_MC_BC_inst_addr                                                      "0x002E"
#define  set_MC_MC_BC_reg(data)                                                  (*((volatile unsigned int*)MC_MC_BC_reg)=data)
#define  get_MC_MC_BC_reg                                                        (*((volatile unsigned int*)MC_MC_BC_reg))
#define  MC_MC_BC_mc_sobj_alpha_th_shift                                         (24)
#define  MC_MC_BC_mc_sobj_ymax1_shift                                            (20)
#define  MC_MC_BC_mc_sobj_ymin1_shift                                            (16)
#define  MC_MC_BC_mc_sobj_slop1_shift                                            (8)
#define  MC_MC_BC_mc_sobj_x_th1_shift                                            (0)
#define  MC_MC_BC_mc_sobj_alpha_th_mask                                          (0x0F000000)
#define  MC_MC_BC_mc_sobj_ymax1_mask                                             (0x00F00000)
#define  MC_MC_BC_mc_sobj_ymin1_mask                                             (0x000F0000)
#define  MC_MC_BC_mc_sobj_slop1_mask                                             (0x00003F00)
#define  MC_MC_BC_mc_sobj_x_th1_mask                                             (0x000000FF)
#define  MC_MC_BC_mc_sobj_alpha_th(data)                                         (0x0F000000&((data)<<24))
#define  MC_MC_BC_mc_sobj_ymax1(data)                                            (0x00F00000&((data)<<20))
#define  MC_MC_BC_mc_sobj_ymin1(data)                                            (0x000F0000&((data)<<16))
#define  MC_MC_BC_mc_sobj_slop1(data)                                            (0x00003F00&((data)<<8))
#define  MC_MC_BC_mc_sobj_x_th1(data)                                            (0x000000FF&(data))
#define  MC_MC_BC_get_mc_sobj_alpha_th(data)                                     ((0x0F000000&(data))>>24)
#define  MC_MC_BC_get_mc_sobj_ymax1(data)                                        ((0x00F00000&(data))>>20)
#define  MC_MC_BC_get_mc_sobj_ymin1(data)                                        ((0x000F0000&(data))>>16)
#define  MC_MC_BC_get_mc_sobj_slop1(data)                                        ((0x00003F00&(data))>>8)
#define  MC_MC_BC_get_mc_sobj_x_th1(data)                                        (0x000000FF&(data))

#define  MC_MC_C0                                                               0x180996C0
#define  MC_MC_C0_reg_addr                                                       "0xB80996C0"
#define  MC_MC_C0_reg                                                            0xB80996C0
#define  MC_MC_C0_inst_addr                                                      "0x002F"
#define  set_MC_MC_C0_reg(data)                                                  (*((volatile unsigned int*)MC_MC_C0_reg)=data)
#define  get_MC_MC_C0_reg                                                        (*((volatile unsigned int*)MC_MC_C0_reg))
#define  MC_MC_C0_mc_cursor_y0_shift                                             (16)
#define  MC_MC_C0_mc_cursor_x0_shift                                             (0)
#define  MC_MC_C0_mc_cursor_y0_mask                                              (0x0FFF0000)
#define  MC_MC_C0_mc_cursor_x0_mask                                              (0x00000FFF)
#define  MC_MC_C0_mc_cursor_y0(data)                                             (0x0FFF0000&((data)<<16))
#define  MC_MC_C0_mc_cursor_x0(data)                                             (0x00000FFF&(data))
#define  MC_MC_C0_get_mc_cursor_y0(data)                                         ((0x0FFF0000&(data))>>16)
#define  MC_MC_C0_get_mc_cursor_x0(data)                                         (0x00000FFF&(data))

#define  MC_MC_C4                                                               0x180996C4
#define  MC_MC_C4_reg_addr                                                       "0xB80996C4"
#define  MC_MC_C4_reg                                                            0xB80996C4
#define  MC_MC_C4_inst_addr                                                      "0x0030"
#define  set_MC_MC_C4_reg(data)                                                  (*((volatile unsigned int*)MC_MC_C4_reg)=data)
#define  get_MC_MC_C4_reg                                                        (*((volatile unsigned int*)MC_MC_C4_reg))
#define  MC_MC_C4_mc_cursor_color_v0_shift                                       (16)
#define  MC_MC_C4_mc_cursor_color_u0_shift                                       (8)
#define  MC_MC_C4_mc_cursor_color_y0_shift                                       (0)
#define  MC_MC_C4_mc_cursor_color_v0_mask                                        (0x00FF0000)
#define  MC_MC_C4_mc_cursor_color_u0_mask                                        (0x0000FF00)
#define  MC_MC_C4_mc_cursor_color_y0_mask                                        (0x000000FF)
#define  MC_MC_C4_mc_cursor_color_v0(data)                                       (0x00FF0000&((data)<<16))
#define  MC_MC_C4_mc_cursor_color_u0(data)                                       (0x0000FF00&((data)<<8))
#define  MC_MC_C4_mc_cursor_color_y0(data)                                       (0x000000FF&(data))
#define  MC_MC_C4_get_mc_cursor_color_v0(data)                                   ((0x00FF0000&(data))>>16)
#define  MC_MC_C4_get_mc_cursor_color_u0(data)                                   ((0x0000FF00&(data))>>8)
#define  MC_MC_C4_get_mc_cursor_color_y0(data)                                   (0x000000FF&(data))

#define  MC_MC_C8                                                               0x180996C8
#define  MC_MC_C8_reg_addr                                                       "0xB80996C8"
#define  MC_MC_C8_reg                                                            0xB80996C8
#define  MC_MC_C8_inst_addr                                                      "0x0031"
#define  set_MC_MC_C8_reg(data)                                                  (*((volatile unsigned int*)MC_MC_C8_reg)=data)
#define  get_MC_MC_C8_reg                                                        (*((volatile unsigned int*)MC_MC_C8_reg))
#define  MC_MC_C8_mc_cursor_y1_shift                                             (16)
#define  MC_MC_C8_mc_cursor_x1_shift                                             (0)
#define  MC_MC_C8_mc_cursor_y1_mask                                              (0x0FFF0000)
#define  MC_MC_C8_mc_cursor_x1_mask                                              (0x00000FFF)
#define  MC_MC_C8_mc_cursor_y1(data)                                             (0x0FFF0000&((data)<<16))
#define  MC_MC_C8_mc_cursor_x1(data)                                             (0x00000FFF&(data))
#define  MC_MC_C8_get_mc_cursor_y1(data)                                         ((0x0FFF0000&(data))>>16)
#define  MC_MC_C8_get_mc_cursor_x1(data)                                         (0x00000FFF&(data))

#define  MC_MC_CC                                                               0x180996CC
#define  MC_MC_CC_reg_addr                                                       "0xB80996CC"
#define  MC_MC_CC_reg                                                            0xB80996CC
#define  MC_MC_CC_inst_addr                                                      "0x0032"
#define  set_MC_MC_CC_reg(data)                                                  (*((volatile unsigned int*)MC_MC_CC_reg)=data)
#define  get_MC_MC_CC_reg                                                        (*((volatile unsigned int*)MC_MC_CC_reg))
#define  MC_MC_CC_mc_cursor_show_shift                                           (26)
#define  MC_MC_CC_mc_cursor_en_shift                                             (24)
#define  MC_MC_CC_mc_cursor_color_v1_shift                                       (16)
#define  MC_MC_CC_mc_cursor_color_u1_shift                                       (8)
#define  MC_MC_CC_mc_cursor_color_y1_shift                                       (0)
#define  MC_MC_CC_mc_cursor_show_mask                                            (0x0C000000)
#define  MC_MC_CC_mc_cursor_en_mask                                              (0x03000000)
#define  MC_MC_CC_mc_cursor_color_v1_mask                                        (0x00FF0000)
#define  MC_MC_CC_mc_cursor_color_u1_mask                                        (0x0000FF00)
#define  MC_MC_CC_mc_cursor_color_y1_mask                                        (0x000000FF)
#define  MC_MC_CC_mc_cursor_show(data)                                           (0x0C000000&((data)<<26))
#define  MC_MC_CC_mc_cursor_en(data)                                             (0x03000000&((data)<<24))
#define  MC_MC_CC_mc_cursor_color_v1(data)                                       (0x00FF0000&((data)<<16))
#define  MC_MC_CC_mc_cursor_color_u1(data)                                       (0x0000FF00&((data)<<8))
#define  MC_MC_CC_mc_cursor_color_y1(data)                                       (0x000000FF&(data))
#define  MC_MC_CC_get_mc_cursor_show(data)                                       ((0x0C000000&(data))>>26)
#define  MC_MC_CC_get_mc_cursor_en(data)                                         ((0x03000000&(data))>>24)
#define  MC_MC_CC_get_mc_cursor_color_v1(data)                                   ((0x00FF0000&(data))>>16)
#define  MC_MC_CC_get_mc_cursor_color_u1(data)                                   ((0x0000FF00&(data))>>8)
#define  MC_MC_CC_get_mc_cursor_color_y1(data)                                   (0x000000FF&(data))

#define  MC_MC_D0                                                               0x180996D0
#define  MC_MC_D0_reg_addr                                                       "0xB80996D0"
#define  MC_MC_D0_reg                                                            0xB80996D0
#define  MC_MC_D0_inst_addr                                                      "0x0033"
#define  set_MC_MC_D0_reg(data)                                                  (*((volatile unsigned int*)MC_MC_D0_reg)=data)
#define  get_MC_MC_D0_reg                                                        (*((volatile unsigned int*)MC_MC_D0_reg))
#define  MC_MC_D0_mc_grid_on_shift                                               (24)
#define  MC_MC_D0_mc_grid_color_v_shift                                          (16)
#define  MC_MC_D0_mc_grid_color_u_shift                                          (8)
#define  MC_MC_D0_mc_grid_color_y_shift                                          (0)
#define  MC_MC_D0_mc_grid_on_mask                                                (0x01000000)
#define  MC_MC_D0_mc_grid_color_v_mask                                           (0x00FF0000)
#define  MC_MC_D0_mc_grid_color_u_mask                                           (0x0000FF00)
#define  MC_MC_D0_mc_grid_color_y_mask                                           (0x000000FF)
#define  MC_MC_D0_mc_grid_on(data)                                               (0x01000000&((data)<<24))
#define  MC_MC_D0_mc_grid_color_v(data)                                          (0x00FF0000&((data)<<16))
#define  MC_MC_D0_mc_grid_color_u(data)                                          (0x0000FF00&((data)<<8))
#define  MC_MC_D0_mc_grid_color_y(data)                                          (0x000000FF&(data))
#define  MC_MC_D0_get_mc_grid_on(data)                                           ((0x01000000&(data))>>24)
#define  MC_MC_D0_get_mc_grid_color_v(data)                                      ((0x00FF0000&(data))>>16)
#define  MC_MC_D0_get_mc_grid_color_u(data)                                      ((0x0000FF00&(data))>>8)
#define  MC_MC_D0_get_mc_grid_color_y(data)                                      (0x000000FF&(data))

#define  MC_MC_D4                                                               0x180996D4
#define  MC_MC_D4_reg_addr                                                       "0xB80996D4"
#define  MC_MC_D4_reg                                                            0xB80996D4
#define  MC_MC_D4_inst_addr                                                      "0x0034"
#define  set_MC_MC_D4_reg(data)                                                  (*((volatile unsigned int*)MC_MC_D4_reg)=data)
#define  get_MC_MC_D4_reg                                                        (*((volatile unsigned int*)MC_MC_D4_reg))
#define  MC_MC_D4_mc_dummy_d4_shift                                              (15)
#define  MC_MC_D4_mc_force_lbmc_idx_en_shift                                     (14)
#define  MC_MC_D4_mc_force_lbmc_idx_hf_shift                                     (12)
#define  MC_MC_D4_mc_force_lbmc_idx_lf_shift                                     (8)
#define  MC_MC_D4_mc_force_phase_en_shift                                        (7)
#define  MC_MC_D4_mc_force_phase_shift                                           (0)
#define  MC_MC_D4_mc_dummy_d4_mask                                               (0xFFFF8000)
#define  MC_MC_D4_mc_force_lbmc_idx_en_mask                                      (0x00004000)
#define  MC_MC_D4_mc_force_lbmc_idx_hf_mask                                      (0x00003000)
#define  MC_MC_D4_mc_force_lbmc_idx_lf_mask                                      (0x00000F00)
#define  MC_MC_D4_mc_force_phase_en_mask                                         (0x00000080)
#define  MC_MC_D4_mc_force_phase_mask                                            (0x0000007F)
#define  MC_MC_D4_mc_dummy_d4(data)                                              (0xFFFF8000&((data)<<15))
#define  MC_MC_D4_mc_force_lbmc_idx_en(data)                                     (0x00004000&((data)<<14))
#define  MC_MC_D4_mc_force_lbmc_idx_hf(data)                                     (0x00003000&((data)<<12))
#define  MC_MC_D4_mc_force_lbmc_idx_lf(data)                                     (0x00000F00&((data)<<8))
#define  MC_MC_D4_mc_force_phase_en(data)                                        (0x00000080&((data)<<7))
#define  MC_MC_D4_mc_force_phase(data)                                           (0x0000007F&(data))
#define  MC_MC_D4_get_mc_dummy_d4(data)                                          ((0xFFFF8000&(data))>>15)
#define  MC_MC_D4_get_mc_force_lbmc_idx_en(data)                                 ((0x00004000&(data))>>14)
#define  MC_MC_D4_get_mc_force_lbmc_idx_hf(data)                                 ((0x00003000&(data))>>12)
#define  MC_MC_D4_get_mc_force_lbmc_idx_lf(data)                                 ((0x00000F00&(data))>>8)
#define  MC_MC_D4_get_mc_force_phase_en(data)                                    ((0x00000080&(data))>>7)
#define  MC_MC_D4_get_mc_force_phase(data)                                       (0x0000007F&(data))

#define  MC_MC_D8                                                               0x180996D8
#define  MC_MC_D8_reg_addr                                                       "0xB80996D8"
#define  MC_MC_D8_reg                                                            0xB80996D8
#define  MC_MC_D8_inst_addr                                                      "0x0035"
#define  set_MC_MC_D8_reg(data)                                                  (*((volatile unsigned int*)MC_MC_D8_reg)=data)
#define  get_MC_MC_D8_reg                                                        (*((volatile unsigned int*)MC_MC_D8_reg))
#define  MC_MC_D8_mc_force_mv_en_shift                                           (31)
#define  MC_MC_D8_mc_force_mv_h_shift                                            (16)
#define  MC_MC_D8_mc_force_mv_v_shift                                            (0)
#define  MC_MC_D8_mc_force_mv_en_mask                                            (0x80000000)
#define  MC_MC_D8_mc_force_mv_h_mask                                             (0x07FF0000)
#define  MC_MC_D8_mc_force_mv_v_mask                                             (0x000003FF)
#define  MC_MC_D8_mc_force_mv_en(data)                                           (0x80000000&((data)<<31))
#define  MC_MC_D8_mc_force_mv_h(data)                                            (0x07FF0000&((data)<<16))
#define  MC_MC_D8_mc_force_mv_v(data)                                            (0x000003FF&(data))
#define  MC_MC_D8_get_mc_force_mv_en(data)                                       ((0x80000000&(data))>>31)
#define  MC_MC_D8_get_mc_force_mv_h(data)                                        ((0x07FF0000&(data))>>16)
#define  MC_MC_D8_get_mc_force_mv_v(data)                                        (0x000003FF&(data))

#define  MC_MC_DC                                                               0x180996DC
#define  MC_MC_DC_reg_addr                                                       "0xB80996DC"
#define  MC_MC_DC_reg                                                            0xB80996DC
#define  MC_MC_DC_inst_addr                                                      "0x0036"
#define  set_MC_MC_DC_reg(data)                                                  (*((volatile unsigned int*)MC_MC_DC_reg)=data)
#define  get_MC_MC_DC_reg                                                        (*((volatile unsigned int*)MC_MC_DC_reg))
#define  MC_MC_DC_mc_show_fblvl_mode_shift                                       (29)
#define  MC_MC_DC_mc_show_scene_chg_shift                                        (28)
#define  MC_MC_DC_mc_show_lbmc_shift                                             (12)
#define  MC_MC_DC_mc_show_pt_mode_shift                                          (8)
#define  MC_MC_DC_mc_show_intp_mode_shift                                        (6)
#define  MC_MC_DC_mc_show_occl_mode_shift                                        (5)
#define  MC_MC_DC_mc_show_mv_mode_shift                                          (4)
#define  MC_MC_DC_mc_show_sel_shift                                              (0)
#define  MC_MC_DC_mc_show_fblvl_mode_mask                                        (0x20000000)
#define  MC_MC_DC_mc_show_scene_chg_mask                                         (0x10000000)
#define  MC_MC_DC_mc_show_lbmc_mask                                              (0x00007000)
#define  MC_MC_DC_mc_show_pt_mode_mask                                           (0x00000F00)
#define  MC_MC_DC_mc_show_intp_mode_mask                                         (0x000000C0)
#define  MC_MC_DC_mc_show_occl_mode_mask                                         (0x00000020)
#define  MC_MC_DC_mc_show_mv_mode_mask                                           (0x00000010)
#define  MC_MC_DC_mc_show_sel_mask                                               (0x0000000F)
#define  MC_MC_DC_mc_show_fblvl_mode(data)                                       (0x20000000&((data)<<29))
#define  MC_MC_DC_mc_show_scene_chg(data)                                        (0x10000000&((data)<<28))
#define  MC_MC_DC_mc_show_lbmc(data)                                             (0x00007000&((data)<<12))
#define  MC_MC_DC_mc_show_pt_mode(data)                                          (0x00000F00&((data)<<8))
#define  MC_MC_DC_mc_show_intp_mode(data)                                        (0x000000C0&((data)<<6))
#define  MC_MC_DC_mc_show_occl_mode(data)                                        (0x00000020&((data)<<5))
#define  MC_MC_DC_mc_show_mv_mode(data)                                          (0x00000010&((data)<<4))
#define  MC_MC_DC_mc_show_sel(data)                                              (0x0000000F&(data))
#define  MC_MC_DC_get_mc_show_fblvl_mode(data)                                   ((0x20000000&(data))>>29)
#define  MC_MC_DC_get_mc_show_scene_chg(data)                                    ((0x10000000&(data))>>28)
#define  MC_MC_DC_get_mc_show_lbmc(data)                                         ((0x00007000&(data))>>12)
#define  MC_MC_DC_get_mc_show_pt_mode(data)                                      ((0x00000F00&(data))>>8)
#define  MC_MC_DC_get_mc_show_intp_mode(data)                                    ((0x000000C0&(data))>>6)
#define  MC_MC_DC_get_mc_show_occl_mode(data)                                    ((0x00000020&(data))>>5)
#define  MC_MC_DC_get_mc_show_mv_mode(data)                                      ((0x00000010&(data))>>4)
#define  MC_MC_DC_get_mc_show_sel(data)                                          (0x0000000F&(data))

#define  MC_MC_E0                                                               0x180996E0
#define  MC_MC_E0_reg_addr                                                       "0xB80996E0"
#define  MC_MC_E0_reg                                                            0xB80996E0
#define  MC_MC_E0_inst_addr                                                      "0x0037"
#define  set_MC_MC_E0_reg(data)                                                  (*((volatile unsigned int*)MC_MC_E0_reg)=data)
#define  get_MC_MC_E0_reg                                                        (*((volatile unsigned int*)MC_MC_E0_reg))
#define  MC_MC_E0_mc_dummy_e0_shift                                              (13)
#define  MC_MC_E0_mc_show_gain_shift                                             (8)
#define  MC_MC_E0_mc_hw_debug_shift                                              (0)
#define  MC_MC_E0_mc_dummy_e0_mask                                               (0xFFFFE000)
#define  MC_MC_E0_mc_show_gain_mask                                              (0x00001F00)
#define  MC_MC_E0_mc_hw_debug_mask                                               (0x000000FF)
#define  MC_MC_E0_mc_dummy_e0(data)                                              (0xFFFFE000&((data)<<13))
#define  MC_MC_E0_mc_show_gain(data)                                             (0x00001F00&((data)<<8))
#define  MC_MC_E0_mc_hw_debug(data)                                              (0x000000FF&(data))
#define  MC_MC_E0_get_mc_dummy_e0(data)                                          ((0xFFFFE000&(data))>>13)
#define  MC_MC_E0_get_mc_show_gain(data)                                         ((0x00001F00&(data))>>8)
#define  MC_MC_E0_get_mc_hw_debug(data)                                          (0x000000FF&(data))

#define  MC_MC_E4                                                               0x180996E4
#define  MC_MC_E4_reg_addr                                                       "0xB80996E4"
#define  MC_MC_E4_reg                                                            0xB80996E4
#define  MC_MC_E4_inst_addr                                                      "0x0038"
#define  set_MC_MC_E4_reg(data)                                                  (*((volatile unsigned int*)MC_MC_E4_reg)=data)
#define  get_MC_MC_E4_reg                                                        (*((volatile unsigned int*)MC_MC_E4_reg))
#define  MC_MC_E4_mc_fblvl_filter_avg_th_shift                                   (16)
#define  MC_MC_E4_mc_fblvl_filter_th_shift                                       (8)
#define  MC_MC_E4_mc_fblvl_filter_cut_shift                                      (0)
#define  MC_MC_E4_mc_fblvl_filter_avg_th_mask                                    (0x00FF0000)
#define  MC_MC_E4_mc_fblvl_filter_th_mask                                        (0x0000FF00)
#define  MC_MC_E4_mc_fblvl_filter_cut_mask                                       (0x000000FF)
#define  MC_MC_E4_mc_fblvl_filter_avg_th(data)                                   (0x00FF0000&((data)<<16))
#define  MC_MC_E4_mc_fblvl_filter_th(data)                                       (0x0000FF00&((data)<<8))
#define  MC_MC_E4_mc_fblvl_filter_cut(data)                                      (0x000000FF&(data))
#define  MC_MC_E4_get_mc_fblvl_filter_avg_th(data)                               ((0x00FF0000&(data))>>16)
#define  MC_MC_E4_get_mc_fblvl_filter_th(data)                                   ((0x0000FF00&(data))>>8)
#define  MC_MC_E4_get_mc_fblvl_filter_cut(data)                                  (0x000000FF&(data))

#define  MC_MC_E8                                                               0x180996E8
#define  MC_MC_E8_reg_addr                                                       "0xB80996E8"
#define  MC_MC_E8_reg                                                            0xB80996E8
#define  MC_MC_E8_inst_addr                                                      "0x0039"
#define  set_MC_MC_E8_reg(data)                                                  (*((volatile unsigned int*)MC_MC_E8_reg)=data)
#define  get_MC_MC_E8_reg                                                        (*((volatile unsigned int*)MC_MC_E8_reg))
#define  MC_MC_E8_mc_fblvl_filter_mode_shift                                     (8)
#define  MC_MC_E8_mc_fblvl_filter_num_shift                                      (1)
#define  MC_MC_E8_mc_fblvl_filter_en_shift                                       (0)
#define  MC_MC_E8_mc_fblvl_filter_mode_mask                                      (0x00000300)
#define  MC_MC_E8_mc_fblvl_filter_num_mask                                       (0x0000007E)
#define  MC_MC_E8_mc_fblvl_filter_en_mask                                        (0x00000001)
#define  MC_MC_E8_mc_fblvl_filter_mode(data)                                     (0x00000300&((data)<<8))
#define  MC_MC_E8_mc_fblvl_filter_num(data)                                      (0x0000007E&((data)<<1))
#define  MC_MC_E8_mc_fblvl_filter_en(data)                                       (0x00000001&(data))
#define  MC_MC_E8_get_mc_fblvl_filter_mode(data)                                 ((0x00000300&(data))>>8)
#define  MC_MC_E8_get_mc_fblvl_filter_num(data)                                  ((0x0000007E&(data))>>1)
#define  MC_MC_E8_get_mc_fblvl_filter_en(data)                                   (0x00000001&(data))

#define  MC_MC_F0                                                               0x180996F0
#define  MC_MC_F0_reg_addr                                                       "0xB80996F0"
#define  MC_MC_F0_reg                                                            0xB80996F0
#define  MC_MC_F0_inst_addr                                                      "0x003A"
#define  set_MC_MC_F0_reg(data)                                                  (*((volatile unsigned int*)MC_MC_F0_reg)=data)
#define  get_MC_MC_F0_reg                                                        (*((volatile unsigned int*)MC_MC_F0_reg))
#define  MC_MC_F0_regr_mc_rdbk_value0_shift                                      (0)
#define  MC_MC_F0_regr_mc_rdbk_value0_mask                                       (0x3FFFFFFF)
#define  MC_MC_F0_regr_mc_rdbk_value0(data)                                      (0x3FFFFFFF&(data))
#define  MC_MC_F0_get_regr_mc_rdbk_value0(data)                                  (0x3FFFFFFF&(data))

#define  MC_MC_F4                                                               0x180996F4
#define  MC_MC_F4_reg_addr                                                       "0xB80996F4"
#define  MC_MC_F4_reg                                                            0xB80996F4
#define  MC_MC_F4_inst_addr                                                      "0x003B"
#define  set_MC_MC_F4_reg(data)                                                  (*((volatile unsigned int*)MC_MC_F4_reg)=data)
#define  get_MC_MC_F4_reg                                                        (*((volatile unsigned int*)MC_MC_F4_reg))
#define  MC_MC_F4_regr_mc_rdbk_value1_shift                                      (0)
#define  MC_MC_F4_regr_mc_rdbk_value1_mask                                       (0x3FFFFFFF)
#define  MC_MC_F4_regr_mc_rdbk_value1(data)                                      (0x3FFFFFFF&(data))
#define  MC_MC_F4_get_regr_mc_rdbk_value1(data)                                  (0x3FFFFFFF&(data))

#define  MC_MC_F8                                                               0x180996F8
#define  MC_MC_F8_reg_addr                                                       "0xB80996F8"
#define  MC_MC_F8_reg                                                            0xB80996F8
#define  MC_MC_F8_inst_addr                                                      "0x003C"
#define  set_MC_MC_F8_reg(data)                                                  (*((volatile unsigned int*)MC_MC_F8_reg)=data)
#define  get_MC_MC_F8_reg                                                        (*((volatile unsigned int*)MC_MC_F8_reg))
#define  MC_MC_F8_regr_mc_dummy_f8_shift                                         (14)
#define  MC_MC_F8_regr_lbmc_idx_hf_shift                                         (12)
#define  MC_MC_F8_regr_lbmc_idx_lf_shift                                         (8)
#define  MC_MC_F8_regr_mc_phase_shift                                            (0)
#define  MC_MC_F8_regr_mc_dummy_f8_mask                                          (0xFFFFC000)
#define  MC_MC_F8_regr_lbmc_idx_hf_mask                                          (0x00003000)
#define  MC_MC_F8_regr_lbmc_idx_lf_mask                                          (0x00000F00)
#define  MC_MC_F8_regr_mc_phase_mask                                             (0x0000007F)
#define  MC_MC_F8_regr_mc_dummy_f8(data)                                         (0xFFFFC000&((data)<<14))
#define  MC_MC_F8_regr_lbmc_idx_hf(data)                                         (0x00003000&((data)<<12))
#define  MC_MC_F8_regr_lbmc_idx_lf(data)                                         (0x00000F00&((data)<<8))
#define  MC_MC_F8_regr_mc_phase(data)                                            (0x0000007F&(data))
#define  MC_MC_F8_get_regr_mc_dummy_f8(data)                                     ((0xFFFFC000&(data))>>14)
#define  MC_MC_F8_get_regr_lbmc_idx_hf(data)                                     ((0x00003000&(data))>>12)
#define  MC_MC_F8_get_regr_lbmc_idx_lf(data)                                     ((0x00000F00&(data))>>8)
#define  MC_MC_F8_get_regr_mc_phase(data)                                        (0x0000007F&(data))

#define  MC_MC_FC                                                               0x180996FC
#define  MC_MC_FC_reg_addr                                                       "0xB80996FC"
#define  MC_MC_FC_reg                                                            0xB80996FC
#define  MC_MC_FC_inst_addr                                                      "0x003D"
#define  set_MC_MC_FC_reg(data)                                                  (*((volatile unsigned int*)MC_MC_FC_reg)=data)
#define  get_MC_MC_FC_reg                                                        (*((volatile unsigned int*)MC_MC_FC_reg))
#define  MC_MC_FC_regr_mc_dummy_fc_shift                                         (0)
#define  MC_MC_FC_regr_mc_dummy_fc_mask                                          (0xFFFFFFFF)
#define  MC_MC_FC_regr_mc_dummy_fc(data)                                         (0xFFFFFFFF&(data))
#define  MC_MC_FC_get_regr_mc_dummy_fc(data)                                     (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======MC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  mc_var_lfb_offset:3;
        RBus_UInt32  mc_var_lfb_mode:1;
        RBus_UInt32  mc_var_lfb_intp_en:2;
    };
}mc_mc_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mc_var_lfb_th:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  mc_var_lfb_lvl:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  mc_var_lfb_max:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  mc_var_lfb_min:7;
    };
}mc_mc_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_pt_phase_fb_phase_en:1;
        RBus_UInt32  mc_pre_phase_fb_phase_en:1;
        RBus_UInt32  mc_logo_phase_fb_phase_en:1;
        RBus_UInt32  mc_phase_fb_64_sel:1;
        RBus_UInt32  mc_phase_fb_gain:8;
        RBus_UInt32  mc_lvllpf_coef2:6;
        RBus_UInt32  mc_lvllpf_coef1:6;
        RBus_UInt32  mc_lvllpf_coef0:6;
        RBus_UInt32  mc_lvllpf_lpf_en:1;
        RBus_UInt32  res1:1;
    };
}mc_mc_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mc_mvdiff_coef4:6;
        RBus_UInt32  mc_mvdiff_coef3:6;
        RBus_UInt32  mc_mvdiff_coef2:6;
        RBus_UInt32  mc_mvdiff_coef1:6;
        RBus_UInt32  mc_mvdiff_coef0:6;
        RBus_UInt32  mc_mvdiff_lpf_en:1;
    };
}mc_mc_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_blklogo_prefetch_num:4;
        RBus_UInt32  mc_blklogo_hact:14;
        RBus_UInt32  mc_blklogo_htotal:14;
    };
}mc_mc_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  mc_blklogo_erosion_timing_mode:1;
        RBus_UInt32  mc_pc_mode_pwr_otp:1;
        RBus_UInt32  mc_fblvl_timing_adj:2;
        RBus_UInt32  mc_blklogo_ern_sel:1;
        RBus_UInt32  mc_blklogo_thr:4;
        RBus_UInt32  mc_blklogo_erosion_en:1;
        RBus_UInt32  mc_blklogo_row_num:8;
        RBus_UInt32  mc_blklogo_mc_de_size:2;
        RBus_UInt32  mc_blklogo_mc_de_mask_num:6;
    };
}mc_mc_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  mc_mv_pat_erosion_mode:1;
        RBus_UInt32  mc_mv_pat_mv_x:11;
        RBus_UInt32  mc_mv_pat_mv_y:10;
        RBus_UInt32  mc_mv_pat_mode:2;
        RBus_UInt32  mc_mv_pat_en:1;
    };
}mc_mc_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  mc_mv_pat_v0:9;
        RBus_UInt32  mc_mv_pat_h1:9;
        RBus_UInt32  mc_mv_pat_h0:9;
    };
}mc_mc_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  mc_mv_pat_row_num:9;
        RBus_UInt32  mc_mv_pat_blk_num:9;
        RBus_UInt32  mc_mv_pat_v1:9;
    };
}mc_mc_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_fblvl_obmc_bypass:2;
        RBus_UInt32  mcdh_dh_half_v_timing:1;
        RBus_UInt32  mcdh_sw_reset:1;
        RBus_UInt32  mcdh_occl_thr:5;
        RBus_UInt32  mc_fb_lvl_force_value:8;
        RBus_UInt32  mc_fb_lvl_force_en:1;
        RBus_UInt32  mc_fb_izpz_mod:3;
        RBus_UInt32  mc_mv_pat_self_cycle:8;
        RBus_UInt32  mc_mv_pat_self_en:1;
        RBus_UInt32  mc_mv_pat_row_size:1;
        RBus_UInt32  mc_mv_pat_blk_size:1;
    };
}mc_mc_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  mc_delay_me_line_cnt:5;
        RBus_UInt32  mc_me_timing_err:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  mcdh_mv_row_num:9;
        RBus_UInt32  mcdh_mv_blk_num:9;
        RBus_UInt32  mcdh_mv_rd_intval:1;
        RBus_UInt32  mcdh_mv_row_size:2;
    };
}mc_mc_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dummy_30:21;
        RBus_UInt32  mc_scene_change_fb:1;
        RBus_UInt32  mc_scene_change_on:1;
        RBus_UInt32  mc_scene_change_mode:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  mc_var_flt_occ_prot_en:1;
        RBus_UInt32  mc_var_flt_mvd_prot_en:1;
        RBus_UInt32  mc_v_l_r:1;
        RBus_UInt32  mc_invld_ref_share_ip:1;
        RBus_UInt32  mc_v_half_size:1;
        RBus_UInt32  mc_h_half_size:1;
    };
}mc_mc_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mc_sram_test1:1;
        RBus_UInt32  mc_sram_ls:1;
        RBus_UInt32  mc_v_act:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_h_act:12;
    };
}mc_mc_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dummy_38:24;
        RBus_UInt32  mc_mv_scale:4;
        RBus_UInt32  mc_blk_size:4;
    };
}mc_mc_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  mc_row_num:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  mc_blk_num:10;
    };
}mc_mc_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_mv_xph_rnd_thy:8;
        RBus_UInt32  mc_mv_xph_rnd_thx:8;
        RBus_UInt32  mc_mv_var_th:8;
        RBus_UInt32  mc_mvd_intp_en:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  mc_mv_xph_rnd_en:1;
        RBus_UInt32  mc_poly_intp_lvl:2;
        RBus_UInt32  mc_poly_intp_en:2;
    };
}mc_mc_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  mc_sr_lf_c:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  mc_sr_lf_y:10;
    };
}mc_mc_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  mc_sr_hf_c:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  mc_sr_hf_y:10;
    };
}mc_mc_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dummy_4c:22;
        RBus_UInt32  mc_sr_h:10;
    };
}mc_mc_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_bot_rim0:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_top_rim0:12;
    };
}mc_mc_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_rht_rim0:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_lft_rim0:12;
    };
}mc_mc_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_bot_rim1:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_top_rim1:12;
    };
}mc_mc_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_rht_rim1:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_lft_rim1:12;
    };
}mc_mc_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  mc_dw_mode:1;
        RBus_UInt32  mc_dw_en:8;
    };
}mc_mc_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_bot0:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_dw_top0:12;
    };
}mc_mc_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_rht0:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_dw_lft0:12;
    };
}mc_mc_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_bot1:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_dw_top1:12;
    };
}mc_mc_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_rht1:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_dw_lft1:12;
    };
}mc_mc_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_bot2:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_dw_top2:12;
    };
}mc_mc_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_rht2:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_dw_lft2:12;
    };
}mc_mc_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_bot3:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_dw_top3:12;
    };
}mc_mc_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_rht3:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_dw_lft3:12;
    };
}mc_mc_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_bot4:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_dw_top4:12;
    };
}mc_mc_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_rht4:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_dw_lft4:12;
    };
}mc_mc_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_bot5:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_dw_top5:12;
    };
}mc_mc_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_rht5:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_dw_lft5:12;
    };
}mc_mc_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_bot6:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_dw_top6:12;
    };
}mc_mc_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_rht6:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_dw_lft6:12;
    };
}mc_mc_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_bot7:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_dw_top7:12;
    };
}mc_mc_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_rht7:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_dw_lft7:12;
    };
}mc_mc_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mc_pt_phase_th1:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  mc_pt_phase_th0:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  mc_pt_z_type2:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  mc_pt_z_type1:3;
        RBus_UInt32  mc_pt_logo_th:4;
        RBus_UInt32  mc_pt_logo_mode:1;
        RBus_UInt32  mc_pt_hf_sr_en:1;
        RBus_UInt32  mc_pt_sr_clip_en:1;
        RBus_UInt32  mc_pt_proc_en:1;
    };
}mc_mc_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  mc_occl_phase_th1:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  mc_occl_phase_th0:7;
        RBus_UInt32  res3:6;
        RBus_UInt32  mc_occl_poly_off:1;
        RBus_UInt32  mc_occl_en:1;
    };
}mc_mc_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_pt_pxl_th1:8;
        RBus_UInt32  mc_pt_pxl_th0:8;
        RBus_UInt32  mc_pt_pxl_mode:1;
        RBus_UInt32  mc_dummy_ac:12;
        RBus_UInt32  mc_obmc_mode:1;
        RBus_UInt32  mc_obmc_bypass:2;
    };
}mc_mc_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mc_bld_sr_flbk:2;
        RBus_UInt32  mc_bld_flbk_lvl:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  mc_bld_w_type:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  mc_bld_z_type_flbk:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  mc_bld_z_type_med3:3;
        RBus_UInt32  mc_bld_flbk_bypass:2;
        RBus_UInt32  mc_bld_med3_bypass:2;
        RBus_UInt32  res5:1;
        RBus_UInt32  mc_bld_bypass:3;
    };
}mc_mc_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_bld_mvd_y_max:8;
        RBus_UInt32  mc_bld_mvd_y_min:8;
        RBus_UInt32  mc_bld_mvd_slope:8;
        RBus_UInt32  mc_bld_mvd_x_th:8;
    };
}mc_mc_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  mc_sobj_ymax0:4;
        RBus_UInt32  mc_sobj_ymin0:4;
        RBus_UInt32  mc_sobj_en:1;
        RBus_UInt32  mc_sobj_slop0:3;
        RBus_UInt32  mc_sobj_x_th0:8;
    };
}mc_mc_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_sobj_alpha_th:4;
        RBus_UInt32  mc_sobj_ymax1:4;
        RBus_UInt32  mc_sobj_ymin1:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  mc_sobj_slop1:6;
        RBus_UInt32  mc_sobj_x_th1:8;
    };
}mc_mc_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_cursor_y0:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_cursor_x0:12;
    };
}mc_mc_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  mc_cursor_color_v0:8;
        RBus_UInt32  mc_cursor_color_u0:8;
        RBus_UInt32  mc_cursor_color_y0:8;
    };
}mc_mc_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_cursor_y1:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_cursor_x1:12;
    };
}mc_mc_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_cursor_show:2;
        RBus_UInt32  mc_cursor_en:2;
        RBus_UInt32  mc_cursor_color_v1:8;
        RBus_UInt32  mc_cursor_color_u1:8;
        RBus_UInt32  mc_cursor_color_y1:8;
    };
}mc_mc_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  mc_grid_on:1;
        RBus_UInt32  mc_grid_color_v:8;
        RBus_UInt32  mc_grid_color_u:8;
        RBus_UInt32  mc_grid_color_y:8;
    };
}mc_mc_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dummy_d4:17;
        RBus_UInt32  mc_force_lbmc_idx_en:1;
        RBus_UInt32  mc_force_lbmc_idx_hf:2;
        RBus_UInt32  mc_force_lbmc_idx_lf:4;
        RBus_UInt32  mc_force_phase_en:1;
        RBus_UInt32  mc_force_phase:7;
    };
}mc_mc_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_force_mv_en:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_force_mv_h:11;
        RBus_UInt32  res2:6;
        RBus_UInt32  mc_force_mv_v:10;
    };
}mc_mc_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mc_show_fblvl_mode:1;
        RBus_UInt32  mc_show_scene_chg:1;
        RBus_UInt32  res2:13;
        RBus_UInt32  mc_show_lbmc:3;
        RBus_UInt32  mc_show_pt_mode:4;
        RBus_UInt32  mc_show_intp_mode:2;
        RBus_UInt32  mc_show_occl_mode:1;
        RBus_UInt32  mc_show_mv_mode:1;
        RBus_UInt32  mc_show_sel:4;
    };
}mc_mc_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dummy_e0:19;
        RBus_UInt32  mc_show_gain:5;
        RBus_UInt32  mc_hw_debug:8;
    };
}mc_mc_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  mc_fblvl_filter_avg_th:8;
        RBus_UInt32  mc_fblvl_filter_th:8;
        RBus_UInt32  mc_fblvl_filter_cut:8;
    };
}mc_mc_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  mc_fblvl_filter_mode:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  mc_fblvl_filter_num:6;
        RBus_UInt32  mc_fblvl_filter_en:1;
    };
}mc_mc_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_mc_rdbk_value0:30;
    };
}mc_mc_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_mc_rdbk_value1:30;
    };
}mc_mc_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_dummy_f8:18;
        RBus_UInt32  regr_lbmc_idx_hf:2;
        RBus_UInt32  regr_lbmc_idx_lf:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_mc_phase:7;
    };
}mc_mc_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_dummy_fc:32;
    };
}mc_mc_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======MC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_var_lfb_intp_en:2;
        RBus_UInt32  mc_var_lfb_mode:1;
        RBus_UInt32  mc_var_lfb_offset:3;
        RBus_UInt32  res1:26;
    };
}mc_mc_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_var_lfb_min:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  mc_var_lfb_max:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  mc_var_lfb_lvl:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  mc_var_lfb_th:7;
        RBus_UInt32  res4:1;
    };
}mc_mc_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mc_lvllpf_lpf_en:1;
        RBus_UInt32  mc_lvllpf_coef0:6;
        RBus_UInt32  mc_lvllpf_coef1:6;
        RBus_UInt32  mc_lvllpf_coef2:6;
        RBus_UInt32  mc_phase_fb_gain:8;
        RBus_UInt32  mc_phase_fb_64_sel:1;
        RBus_UInt32  mc_logo_phase_fb_phase_en:1;
        RBus_UInt32  mc_pre_phase_fb_phase_en:1;
        RBus_UInt32  mc_pt_phase_fb_phase_en:1;
    };
}mc_mc_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_mvdiff_lpf_en:1;
        RBus_UInt32  mc_mvdiff_coef0:6;
        RBus_UInt32  mc_mvdiff_coef1:6;
        RBus_UInt32  mc_mvdiff_coef2:6;
        RBus_UInt32  mc_mvdiff_coef3:6;
        RBus_UInt32  mc_mvdiff_coef4:6;
        RBus_UInt32  res1:1;
    };
}mc_mc_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_blklogo_htotal:14;
        RBus_UInt32  mc_blklogo_hact:14;
        RBus_UInt32  mc_blklogo_prefetch_num:4;
    };
}mc_mc_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_blklogo_mc_de_mask_num:6;
        RBus_UInt32  mc_blklogo_mc_de_size:2;
        RBus_UInt32  mc_blklogo_row_num:8;
        RBus_UInt32  mc_blklogo_erosion_en:1;
        RBus_UInt32  mc_blklogo_thr:4;
        RBus_UInt32  mc_blklogo_ern_sel:1;
        RBus_UInt32  mc_fblvl_timing_adj:2;
        RBus_UInt32  mc_pc_mode_pwr_otp:1;
        RBus_UInt32  mc_blklogo_erosion_timing_mode:1;
        RBus_UInt32  res1:6;
    };
}mc_mc_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_mv_pat_en:1;
        RBus_UInt32  mc_mv_pat_mode:2;
        RBus_UInt32  mc_mv_pat_mv_y:10;
        RBus_UInt32  mc_mv_pat_mv_x:11;
        RBus_UInt32  mc_mv_pat_erosion_mode:1;
        RBus_UInt32  res1:7;
    };
}mc_mc_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_mv_pat_h0:9;
        RBus_UInt32  mc_mv_pat_h1:9;
        RBus_UInt32  mc_mv_pat_v0:9;
        RBus_UInt32  res1:5;
    };
}mc_mc_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_mv_pat_v1:9;
        RBus_UInt32  mc_mv_pat_blk_num:9;
        RBus_UInt32  mc_mv_pat_row_num:9;
        RBus_UInt32  res1:5;
    };
}mc_mc_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_mv_pat_blk_size:1;
        RBus_UInt32  mc_mv_pat_row_size:1;
        RBus_UInt32  mc_mv_pat_self_en:1;
        RBus_UInt32  mc_mv_pat_self_cycle:8;
        RBus_UInt32  mc_fb_izpz_mod:3;
        RBus_UInt32  mc_fb_lvl_force_en:1;
        RBus_UInt32  mc_fb_lvl_force_value:8;
        RBus_UInt32  mcdh_occl_thr:5;
        RBus_UInt32  mcdh_sw_reset:1;
        RBus_UInt32  mcdh_dh_half_v_timing:1;
        RBus_UInt32  mc_fblvl_obmc_bypass:2;
    };
}mc_mc_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mcdh_mv_row_size:2;
        RBus_UInt32  mcdh_mv_rd_intval:1;
        RBus_UInt32  mcdh_mv_blk_num:9;
        RBus_UInt32  mcdh_mv_row_num:9;
        RBus_UInt32  res1:2;
        RBus_UInt32  mc_me_timing_err:1;
        RBus_UInt32  mc_delay_me_line_cnt:5;
        RBus_UInt32  res2:3;
    };
}mc_mc_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_h_half_size:1;
        RBus_UInt32  mc_v_half_size:1;
        RBus_UInt32  mc_invld_ref_share_ip:1;
        RBus_UInt32  mc_v_l_r:1;
        RBus_UInt32  mc_var_flt_mvd_prot_en:1;
        RBus_UInt32  mc_var_flt_occ_prot_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  mc_scene_change_mode:1;
        RBus_UInt32  mc_scene_change_on:1;
        RBus_UInt32  mc_scene_change_fb:1;
        RBus_UInt32  mc_dummy_30:21;
    };
}mc_mc_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_h_act:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_v_act:12;
        RBus_UInt32  mc_sram_ls:1;
        RBus_UInt32  mc_sram_test1:1;
        RBus_UInt32  res2:2;
    };
}mc_mc_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_blk_size:4;
        RBus_UInt32  mc_mv_scale:4;
        RBus_UInt32  mc_dummy_38:24;
    };
}mc_mc_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_blk_num:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  mc_row_num:10;
        RBus_UInt32  res2:6;
    };
}mc_mc_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_poly_intp_en:2;
        RBus_UInt32  mc_poly_intp_lvl:2;
        RBus_UInt32  mc_mv_xph_rnd_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  mc_mvd_intp_en:2;
        RBus_UInt32  mc_mv_var_th:8;
        RBus_UInt32  mc_mv_xph_rnd_thx:8;
        RBus_UInt32  mc_mv_xph_rnd_thy:8;
    };
}mc_mc_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_sr_lf_y:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  mc_sr_lf_c:10;
        RBus_UInt32  res2:6;
    };
}mc_mc_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_sr_hf_y:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  mc_sr_hf_c:10;
        RBus_UInt32  res2:6;
    };
}mc_mc_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_sr_h:10;
        RBus_UInt32  mc_dummy_4c:22;
    };
}mc_mc_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_top_rim0:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_bot_rim0:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_lft_rim0:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_rht_rim0:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_top_rim1:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_bot_rim1:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_lft_rim1:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_rht_rim1:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_en:8;
        RBus_UInt32  mc_dw_mode:1;
        RBus_UInt32  res1:23;
    };
}mc_mc_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_top0:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_bot0:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_lft0:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_rht0:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_top1:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_bot1:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_lft1:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_rht1:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_top2:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_bot2:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_lft2:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_rht2:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_top3:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_bot3:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_lft3:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_rht3:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_top4:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_bot4:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_lft4:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_rht4:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_top5:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_bot5:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_lft5:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_rht5:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_top6:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_bot6:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_lft6:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_rht6:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_top7:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_bot7:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_dw_lft7:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_dw_rht7:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_pt_proc_en:1;
        RBus_UInt32  mc_pt_sr_clip_en:1;
        RBus_UInt32  mc_pt_hf_sr_en:1;
        RBus_UInt32  mc_pt_logo_mode:1;
        RBus_UInt32  mc_pt_logo_th:4;
        RBus_UInt32  mc_pt_z_type1:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  mc_pt_z_type2:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  mc_pt_phase_th0:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  mc_pt_phase_th1:7;
        RBus_UInt32  res4:1;
    };
}mc_mc_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_occl_en:1;
        RBus_UInt32  mc_occl_poly_off:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  mc_occl_phase_th0:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  mc_occl_phase_th1:7;
        RBus_UInt32  res3:9;
    };
}mc_mc_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_obmc_bypass:2;
        RBus_UInt32  mc_obmc_mode:1;
        RBus_UInt32  mc_dummy_ac:12;
        RBus_UInt32  mc_pt_pxl_mode:1;
        RBus_UInt32  mc_pt_pxl_th0:8;
        RBus_UInt32  mc_pt_pxl_th1:8;
    };
}mc_mc_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_bld_bypass:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  mc_bld_med3_bypass:2;
        RBus_UInt32  mc_bld_flbk_bypass:2;
        RBus_UInt32  mc_bld_z_type_med3:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  mc_bld_z_type_flbk:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  mc_bld_w_type:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  mc_bld_flbk_lvl:8;
        RBus_UInt32  mc_bld_sr_flbk:2;
        RBus_UInt32  res5:2;
    };
}mc_mc_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_bld_mvd_x_th:8;
        RBus_UInt32  mc_bld_mvd_slope:8;
        RBus_UInt32  mc_bld_mvd_y_min:8;
        RBus_UInt32  mc_bld_mvd_y_max:8;
    };
}mc_mc_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_sobj_x_th0:8;
        RBus_UInt32  mc_sobj_slop0:3;
        RBus_UInt32  mc_sobj_en:1;
        RBus_UInt32  mc_sobj_ymin0:4;
        RBus_UInt32  mc_sobj_ymax0:4;
        RBus_UInt32  res1:12;
    };
}mc_mc_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_sobj_x_th1:8;
        RBus_UInt32  mc_sobj_slop1:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  mc_sobj_ymin1:4;
        RBus_UInt32  mc_sobj_ymax1:4;
        RBus_UInt32  mc_sobj_alpha_th:4;
        RBus_UInt32  res2:4;
    };
}mc_mc_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_cursor_x0:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_cursor_y0:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_cursor_color_y0:8;
        RBus_UInt32  mc_cursor_color_u0:8;
        RBus_UInt32  mc_cursor_color_v0:8;
        RBus_UInt32  res1:8;
    };
}mc_mc_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_cursor_x1:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  mc_cursor_y1:12;
        RBus_UInt32  res2:4;
    };
}mc_mc_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_cursor_color_y1:8;
        RBus_UInt32  mc_cursor_color_u1:8;
        RBus_UInt32  mc_cursor_color_v1:8;
        RBus_UInt32  mc_cursor_en:2;
        RBus_UInt32  mc_cursor_show:2;
        RBus_UInt32  res1:4;
    };
}mc_mc_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_grid_color_y:8;
        RBus_UInt32  mc_grid_color_u:8;
        RBus_UInt32  mc_grid_color_v:8;
        RBus_UInt32  mc_grid_on:1;
        RBus_UInt32  res1:7;
    };
}mc_mc_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_force_phase:7;
        RBus_UInt32  mc_force_phase_en:1;
        RBus_UInt32  mc_force_lbmc_idx_lf:4;
        RBus_UInt32  mc_force_lbmc_idx_hf:2;
        RBus_UInt32  mc_force_lbmc_idx_en:1;
        RBus_UInt32  mc_dummy_d4:17;
    };
}mc_mc_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_force_mv_v:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  mc_force_mv_h:11;
        RBus_UInt32  res2:4;
        RBus_UInt32  mc_force_mv_en:1;
    };
}mc_mc_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_show_sel:4;
        RBus_UInt32  mc_show_mv_mode:1;
        RBus_UInt32  mc_show_occl_mode:1;
        RBus_UInt32  mc_show_intp_mode:2;
        RBus_UInt32  mc_show_pt_mode:4;
        RBus_UInt32  mc_show_lbmc:3;
        RBus_UInt32  res1:13;
        RBus_UInt32  mc_show_scene_chg:1;
        RBus_UInt32  mc_show_fblvl_mode:1;
        RBus_UInt32  res2:2;
    };
}mc_mc_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_hw_debug:8;
        RBus_UInt32  mc_show_gain:5;
        RBus_UInt32  mc_dummy_e0:19;
    };
}mc_mc_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_fblvl_filter_cut:8;
        RBus_UInt32  mc_fblvl_filter_th:8;
        RBus_UInt32  mc_fblvl_filter_avg_th:8;
        RBus_UInt32  res1:8;
    };
}mc_mc_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_fblvl_filter_en:1;
        RBus_UInt32  mc_fblvl_filter_num:6;
        RBus_UInt32  res1:1;
        RBus_UInt32  mc_fblvl_filter_mode:2;
        RBus_UInt32  res2:22;
    };
}mc_mc_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_rdbk_value0:30;
        RBus_UInt32  res1:2;
    };
}mc_mc_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_rdbk_value1:30;
        RBus_UInt32  res1:2;
    };
}mc_mc_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_phase:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_lbmc_idx_lf:4;
        RBus_UInt32  regr_lbmc_idx_hf:2;
        RBus_UInt32  regr_mc_dummy_f8:18;
    };
}mc_mc_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_mc_dummy_fc:32;
    };
}mc_mc_fc_RBUS;




#endif 


#endif 
