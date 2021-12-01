/**
* @file Merlin5-DesignSpec-D_Domain_SFG
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_SFG_REG_H_
#define _RBUS_SFG_REG_H_

#include "rbus_types.h"



//  SFG Register Address
#define  SFG_SFG_ZZ_shift_dbg_CTRL                                              0x1802D900
#define  SFG_SFG_ZZ_shift_dbg_CTRL_reg_addr                                      "0xB802D900"
#define  SFG_SFG_ZZ_shift_dbg_CTRL_reg                                           0xB802D900
#define  SFG_SFG_ZZ_shift_dbg_CTRL_inst_addr                                     "0x0000"
#define  set_SFG_SFG_ZZ_shift_dbg_CTRL_reg(data)                                 (*((volatile unsigned int*)SFG_SFG_ZZ_shift_dbg_CTRL_reg)=data)
#define  get_SFG_SFG_ZZ_shift_dbg_CTRL_reg                                       (*((volatile unsigned int*)SFG_SFG_ZZ_shift_dbg_CTRL_reg))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_clken_disp_sfg_osd_shift                      (25)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_clken_disp_sfg_shift                          (24)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_fix_hs_last_line_shift                        (22)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_subpixel_en_shift                             (21)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_lclk_inv_sel_shift                            (20)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_macclk_inv_shift                              (19)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_pif_clk_sel_shift                             (18)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dout_pre_rb_swap_shift                        (17)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dispd_debug_mode_shift                        (14)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dout_mode_shift                               (12)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_sfg_dout_en_shift                             (11)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dvs_inv_shift                                 (10)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dhs_inv_shift                                 (9)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dden_inv_shift                                (8)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_daclk_inv_shift                               (7)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_daclk_en_shift                                (6)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dout_rb_swap_shift                            (5)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dout_bit_swap_shift                           (4)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dout_data_inv_shift                           (3)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dclk_dly_sel_shift                            (0)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_clken_disp_sfg_osd_mask                       (0x02000000)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_clken_disp_sfg_mask                           (0x01000000)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_fix_hs_last_line_mask                         (0x00400000)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_subpixel_en_mask                              (0x00200000)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_lclk_inv_sel_mask                             (0x00100000)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_macclk_inv_mask                               (0x00080000)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_pif_clk_sel_mask                              (0x00040000)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dout_pre_rb_swap_mask                         (0x00020000)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dispd_debug_mode_mask                         (0x0001C000)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dout_mode_mask                                (0x00003000)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_sfg_dout_en_mask                              (0x00000800)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dvs_inv_mask                                  (0x00000400)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dhs_inv_mask                                  (0x00000200)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dden_inv_mask                                 (0x00000100)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_daclk_inv_mask                                (0x00000080)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_daclk_en_mask                                 (0x00000040)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dout_rb_swap_mask                             (0x00000020)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dout_bit_swap_mask                            (0x00000010)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dout_data_inv_mask                            (0x00000008)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dclk_dly_sel_mask                             (0x00000007)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_clken_disp_sfg_osd(data)                      (0x02000000&((data)<<25))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_clken_disp_sfg(data)                          (0x01000000&((data)<<24))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_fix_hs_last_line(data)                        (0x00400000&((data)<<22))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_subpixel_en(data)                             (0x00200000&((data)<<21))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_lclk_inv_sel(data)                            (0x00100000&((data)<<20))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_macclk_inv(data)                              (0x00080000&((data)<<19))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_pif_clk_sel(data)                             (0x00040000&((data)<<18))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dout_pre_rb_swap(data)                        (0x00020000&((data)<<17))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dispd_debug_mode(data)                        (0x0001C000&((data)<<14))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dout_mode(data)                               (0x00003000&((data)<<12))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_sfg_dout_en(data)                             (0x00000800&((data)<<11))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dvs_inv(data)                                 (0x00000400&((data)<<10))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dhs_inv(data)                                 (0x00000200&((data)<<9))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dden_inv(data)                                (0x00000100&((data)<<8))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_daclk_inv(data)                               (0x00000080&((data)<<7))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_daclk_en(data)                                (0x00000040&((data)<<6))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dout_rb_swap(data)                            (0x00000020&((data)<<5))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dout_bit_swap(data)                           (0x00000010&((data)<<4))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dout_data_inv(data)                           (0x00000008&((data)<<3))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_dclk_dly_sel(data)                            (0x00000007&(data))
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_clken_disp_sfg_osd(data)                  ((0x02000000&(data))>>25)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_clken_disp_sfg(data)                      ((0x01000000&(data))>>24)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_fix_hs_last_line(data)                    ((0x00400000&(data))>>22)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_subpixel_en(data)                         ((0x00200000&(data))>>21)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_lclk_inv_sel(data)                        ((0x00100000&(data))>>20)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_macclk_inv(data)                          ((0x00080000&(data))>>19)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_pif_clk_sel(data)                         ((0x00040000&(data))>>18)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_dout_pre_rb_swap(data)                    ((0x00020000&(data))>>17)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_dispd_debug_mode(data)                    ((0x0001C000&(data))>>14)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_dout_mode(data)                           ((0x00003000&(data))>>12)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_sfg_dout_en(data)                         ((0x00000800&(data))>>11)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_dvs_inv(data)                             ((0x00000400&(data))>>10)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_dhs_inv(data)                             ((0x00000200&(data))>>9)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_dden_inv(data)                            ((0x00000100&(data))>>8)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_daclk_inv(data)                           ((0x00000080&(data))>>7)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_daclk_en(data)                            ((0x00000040&(data))>>6)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_dout_rb_swap(data)                        ((0x00000020&(data))>>5)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_dout_bit_swap(data)                       ((0x00000010&(data))>>4)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_dout_data_inv(data)                       ((0x00000008&(data))>>3)
#define  SFG_SFG_ZZ_shift_dbg_CTRL_get_dclk_dly_sel(data)                        (0x00000007&(data))

#define  SFG_SFG_SWAP_CTRL0                                                     0x1802D904
#define  SFG_SFG_SWAP_CTRL0_reg_addr                                             "0xB802D904"
#define  SFG_SFG_SWAP_CTRL0_reg                                                  0xB802D904
#define  SFG_SFG_SWAP_CTRL0_inst_addr                                            "0x0001"
#define  set_SFG_SFG_SWAP_CTRL0_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_SWAP_CTRL0_reg)=data)
#define  get_SFG_SFG_SWAP_CTRL0_reg                                              (*((volatile unsigned int*)SFG_SFG_SWAP_CTRL0_reg))
#define  SFG_SFG_SWAP_CTRL0_dclk_mode_switch_shift                               (24)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_aport_shift                             (23)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_bport_shift                             (22)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_cport_shift                             (21)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_dport_shift                             (20)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_eport_shift                             (19)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_fport_shift                             (18)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_gport_shift                             (17)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_hport_shift                             (16)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_iport_shift                             (15)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_jport_shift                             (14)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_kport_shift                             (13)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_lport_shift                             (12)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_mport_shift                             (11)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_nport_shift                             (10)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_oport_shift                             (9)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_pport_shift                             (8)
#define  SFG_SFG_SWAP_CTRL0_dclk_mode_switch_mask                                (0x0F000000)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_aport_mask                              (0x00800000)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_bport_mask                              (0x00400000)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_cport_mask                              (0x00200000)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_dport_mask                              (0x00100000)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_eport_mask                              (0x00080000)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_fport_mask                              (0x00040000)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_gport_mask                              (0x00020000)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_hport_mask                              (0x00010000)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_iport_mask                              (0x00008000)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_jport_mask                              (0x00004000)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_kport_mask                              (0x00002000)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_lport_mask                              (0x00001000)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_mport_mask                              (0x00000800)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_nport_mask                              (0x00000400)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_oport_mask                              (0x00000200)
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_pport_mask                              (0x00000100)
#define  SFG_SFG_SWAP_CTRL0_dclk_mode_switch(data)                               (0x0F000000&((data)<<24))
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_aport(data)                             (0x00800000&((data)<<23))
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_bport(data)                             (0x00400000&((data)<<22))
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_cport(data)                             (0x00200000&((data)<<21))
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_dport(data)                             (0x00100000&((data)<<20))
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_eport(data)                             (0x00080000&((data)<<19))
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_fport(data)                             (0x00040000&((data)<<18))
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_gport(data)                             (0x00020000&((data)<<17))
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_hport(data)                             (0x00010000&((data)<<16))
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_iport(data)                             (0x00008000&((data)<<15))
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_jport(data)                             (0x00004000&((data)<<14))
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_kport(data)                             (0x00002000&((data)<<13))
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_lport(data)                             (0x00001000&((data)<<12))
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_mport(data)                             (0x00000800&((data)<<11))
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_nport(data)                             (0x00000400&((data)<<10))
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_oport(data)                             (0x00000200&((data)<<9))
#define  SFG_SFG_SWAP_CTRL0_force_bg_dif_pport(data)                             (0x00000100&((data)<<8))
#define  SFG_SFG_SWAP_CTRL0_get_dclk_mode_switch(data)                           ((0x0F000000&(data))>>24)
#define  SFG_SFG_SWAP_CTRL0_get_force_bg_dif_aport(data)                         ((0x00800000&(data))>>23)
#define  SFG_SFG_SWAP_CTRL0_get_force_bg_dif_bport(data)                         ((0x00400000&(data))>>22)
#define  SFG_SFG_SWAP_CTRL0_get_force_bg_dif_cport(data)                         ((0x00200000&(data))>>21)
#define  SFG_SFG_SWAP_CTRL0_get_force_bg_dif_dport(data)                         ((0x00100000&(data))>>20)
#define  SFG_SFG_SWAP_CTRL0_get_force_bg_dif_eport(data)                         ((0x00080000&(data))>>19)
#define  SFG_SFG_SWAP_CTRL0_get_force_bg_dif_fport(data)                         ((0x00040000&(data))>>18)
#define  SFG_SFG_SWAP_CTRL0_get_force_bg_dif_gport(data)                         ((0x00020000&(data))>>17)
#define  SFG_SFG_SWAP_CTRL0_get_force_bg_dif_hport(data)                         ((0x00010000&(data))>>16)
#define  SFG_SFG_SWAP_CTRL0_get_force_bg_dif_iport(data)                         ((0x00008000&(data))>>15)
#define  SFG_SFG_SWAP_CTRL0_get_force_bg_dif_jport(data)                         ((0x00004000&(data))>>14)
#define  SFG_SFG_SWAP_CTRL0_get_force_bg_dif_kport(data)                         ((0x00002000&(data))>>13)
#define  SFG_SFG_SWAP_CTRL0_get_force_bg_dif_lport(data)                         ((0x00001000&(data))>>12)
#define  SFG_SFG_SWAP_CTRL0_get_force_bg_dif_mport(data)                         ((0x00000800&(data))>>11)
#define  SFG_SFG_SWAP_CTRL0_get_force_bg_dif_nport(data)                         ((0x00000400&(data))>>10)
#define  SFG_SFG_SWAP_CTRL0_get_force_bg_dif_oport(data)                         ((0x00000200&(data))>>9)
#define  SFG_SFG_SWAP_CTRL0_get_force_bg_dif_pport(data)                         ((0x00000100&(data))>>8)

#define  SFG_SFG_CRC_CTRL                                                       0x1802D910
#define  SFG_SFG_CRC_CTRL_reg_addr                                               "0xB802D910"
#define  SFG_SFG_CRC_CTRL_reg                                                    0xB802D910
#define  SFG_SFG_CRC_CTRL_inst_addr                                              "0x0002"
#define  set_SFG_SFG_CRC_CTRL_reg(data)                                          (*((volatile unsigned int*)SFG_SFG_CRC_CTRL_reg)=data)
#define  get_SFG_SFG_CRC_CTRL_reg                                                (*((volatile unsigned int*)SFG_SFG_CRC_CTRL_reg))
#define  SFG_SFG_CRC_CTRL_sfg_crc_mode_shift                                     (4)
#define  SFG_SFG_CRC_CTRL_sfg_crc_l_auto_cmp_en_shift                            (3)
#define  SFG_SFG_CRC_CTRL_sfg_crc_r_auto_cmp_en_shift                            (2)
#define  SFG_SFG_CRC_CTRL_sfg_crc_conti_shift                                    (1)
#define  SFG_SFG_CRC_CTRL_sfg_crc_start_shift                                    (0)
#define  SFG_SFG_CRC_CTRL_sfg_crc_mode_mask                                      (0x00000010)
#define  SFG_SFG_CRC_CTRL_sfg_crc_l_auto_cmp_en_mask                             (0x00000008)
#define  SFG_SFG_CRC_CTRL_sfg_crc_r_auto_cmp_en_mask                             (0x00000004)
#define  SFG_SFG_CRC_CTRL_sfg_crc_conti_mask                                     (0x00000002)
#define  SFG_SFG_CRC_CTRL_sfg_crc_start_mask                                     (0x00000001)
#define  SFG_SFG_CRC_CTRL_sfg_crc_mode(data)                                     (0x00000010&((data)<<4))
#define  SFG_SFG_CRC_CTRL_sfg_crc_l_auto_cmp_en(data)                            (0x00000008&((data)<<3))
#define  SFG_SFG_CRC_CTRL_sfg_crc_r_auto_cmp_en(data)                            (0x00000004&((data)<<2))
#define  SFG_SFG_CRC_CTRL_sfg_crc_conti(data)                                    (0x00000002&((data)<<1))
#define  SFG_SFG_CRC_CTRL_sfg_crc_start(data)                                    (0x00000001&(data))
#define  SFG_SFG_CRC_CTRL_get_sfg_crc_mode(data)                                 ((0x00000010&(data))>>4)
#define  SFG_SFG_CRC_CTRL_get_sfg_crc_l_auto_cmp_en(data)                        ((0x00000008&(data))>>3)
#define  SFG_SFG_CRC_CTRL_get_sfg_crc_r_auto_cmp_en(data)                        ((0x00000004&(data))>>2)
#define  SFG_SFG_CRC_CTRL_get_sfg_crc_conti(data)                                ((0x00000002&(data))>>1)
#define  SFG_SFG_CRC_CTRL_get_sfg_crc_start(data)                                (0x00000001&(data))

#define  SFG_SFG_CRC_RESULT                                                     0x1802D914
#define  SFG_SFG_CRC_RESULT_reg_addr                                             "0xB802D914"
#define  SFG_SFG_CRC_RESULT_reg                                                  0xB802D914
#define  SFG_SFG_CRC_RESULT_inst_addr                                            "0x0003"
#define  set_SFG_SFG_CRC_RESULT_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_CRC_RESULT_reg)=data)
#define  get_SFG_SFG_CRC_RESULT_reg                                              (*((volatile unsigned int*)SFG_SFG_CRC_RESULT_reg))
#define  SFG_SFG_CRC_RESULT_sfg_crc_result_0_shift                               (0)
#define  SFG_SFG_CRC_RESULT_sfg_crc_result_0_mask                                (0xFFFFFFFF)
#define  SFG_SFG_CRC_RESULT_sfg_crc_result_0(data)                               (0xFFFFFFFF&(data))
#define  SFG_SFG_CRC_RESULT_get_sfg_crc_result_0(data)                           (0xFFFFFFFF&(data))

#define  SFG_SFG_CRC_R_RESULT                                                   0x1802D918
#define  SFG_SFG_CRC_R_RESULT_reg_addr                                           "0xB802D918"
#define  SFG_SFG_CRC_R_RESULT_reg                                                0xB802D918
#define  SFG_SFG_CRC_R_RESULT_inst_addr                                          "0x0004"
#define  set_SFG_SFG_CRC_R_RESULT_reg(data)                                      (*((volatile unsigned int*)SFG_SFG_CRC_R_RESULT_reg)=data)
#define  get_SFG_SFG_CRC_R_RESULT_reg                                            (*((volatile unsigned int*)SFG_SFG_CRC_R_RESULT_reg))
#define  SFG_SFG_CRC_R_RESULT_sfg_crc_result_1_shift                             (0)
#define  SFG_SFG_CRC_R_RESULT_sfg_crc_result_1_mask                              (0xFFFFFFFF)
#define  SFG_SFG_CRC_R_RESULT_sfg_crc_result_1(data)                             (0xFFFFFFFF&(data))
#define  SFG_SFG_CRC_R_RESULT_get_sfg_crc_result_1(data)                         (0xFFFFFFFF&(data))

#define  SFG_SFG_L_DES_CRC                                                      0x1802D91C
#define  SFG_SFG_L_DES_CRC_reg_addr                                              "0xB802D91C"
#define  SFG_SFG_L_DES_CRC_reg                                                   0xB802D91C
#define  SFG_SFG_L_DES_CRC_inst_addr                                             "0x0005"
#define  set_SFG_SFG_L_DES_CRC_reg(data)                                         (*((volatile unsigned int*)SFG_SFG_L_DES_CRC_reg)=data)
#define  get_SFG_SFG_L_DES_CRC_reg                                               (*((volatile unsigned int*)SFG_SFG_L_DES_CRC_reg))
#define  SFG_SFG_L_DES_CRC_sfg_l_des_crc_shift                                   (0)
#define  SFG_SFG_L_DES_CRC_sfg_l_des_crc_mask                                    (0xFFFFFFFF)
#define  SFG_SFG_L_DES_CRC_sfg_l_des_crc(data)                                   (0xFFFFFFFF&(data))
#define  SFG_SFG_L_DES_CRC_get_sfg_l_des_crc(data)                               (0xFFFFFFFF&(data))

#define  SFG_SFG_R_DES_CRC                                                      0x1802D920
#define  SFG_SFG_R_DES_CRC_reg_addr                                              "0xB802D920"
#define  SFG_SFG_R_DES_CRC_reg                                                   0xB802D920
#define  SFG_SFG_R_DES_CRC_inst_addr                                             "0x0006"
#define  set_SFG_SFG_R_DES_CRC_reg(data)                                         (*((volatile unsigned int*)SFG_SFG_R_DES_CRC_reg)=data)
#define  get_SFG_SFG_R_DES_CRC_reg                                               (*((volatile unsigned int*)SFG_SFG_R_DES_CRC_reg))
#define  SFG_SFG_R_DES_CRC_sfg_r_des_crc_shift                                   (0)
#define  SFG_SFG_R_DES_CRC_sfg_r_des_crc_mask                                    (0xFFFFFFFF)
#define  SFG_SFG_R_DES_CRC_sfg_r_des_crc(data)                                   (0xFFFFFFFF&(data))
#define  SFG_SFG_R_DES_CRC_get_sfg_r_des_crc(data)                               (0xFFFFFFFF&(data))

#define  SFG_SFG_CRC_ERR_CNT                                                    0x1802D924
#define  SFG_SFG_CRC_ERR_CNT_reg_addr                                            "0xB802D924"
#define  SFG_SFG_CRC_ERR_CNT_reg                                                 0xB802D924
#define  SFG_SFG_CRC_ERR_CNT_inst_addr                                           "0x0007"
#define  set_SFG_SFG_CRC_ERR_CNT_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_CRC_ERR_CNT_reg)=data)
#define  get_SFG_SFG_CRC_ERR_CNT_reg                                             (*((volatile unsigned int*)SFG_SFG_CRC_ERR_CNT_reg))
#define  SFG_SFG_CRC_ERR_CNT_sfg_l_crc_err_cnt_shift                             (16)
#define  SFG_SFG_CRC_ERR_CNT_sfg_r_crc_err_cnt_shift                             (0)
#define  SFG_SFG_CRC_ERR_CNT_sfg_l_crc_err_cnt_mask                              (0xFFFF0000)
#define  SFG_SFG_CRC_ERR_CNT_sfg_r_crc_err_cnt_mask                              (0x0000FFFF)
#define  SFG_SFG_CRC_ERR_CNT_sfg_l_crc_err_cnt(data)                             (0xFFFF0000&((data)<<16))
#define  SFG_SFG_CRC_ERR_CNT_sfg_r_crc_err_cnt(data)                             (0x0000FFFF&(data))
#define  SFG_SFG_CRC_ERR_CNT_get_sfg_l_crc_err_cnt(data)                         ((0xFFFF0000&(data))>>16)
#define  SFG_SFG_CRC_ERR_CNT_get_sfg_r_crc_err_cnt(data)                         (0x0000FFFF&(data))

#define  SFG_SFG_FORCE_BG_AT_DIF                                                0x1802D928
#define  SFG_SFG_FORCE_BG_AT_DIF_reg_addr                                        "0xB802D928"
#define  SFG_SFG_FORCE_BG_AT_DIF_reg                                             0xB802D928
#define  SFG_SFG_FORCE_BG_AT_DIF_inst_addr                                       "0x0008"
#define  set_SFG_SFG_FORCE_BG_AT_DIF_reg(data)                                   (*((volatile unsigned int*)SFG_SFG_FORCE_BG_AT_DIF_reg)=data)
#define  get_SFG_SFG_FORCE_BG_AT_DIF_reg                                         (*((volatile unsigned int*)SFG_SFG_FORCE_BG_AT_DIF_reg))
#define  SFG_SFG_FORCE_BG_AT_DIF_en_force_bg_dif_shift                           (31)
#define  SFG_SFG_FORCE_BG_AT_DIF_bg_dif_red_shift                                (20)
#define  SFG_SFG_FORCE_BG_AT_DIF_bg_dif_grn_shift                                (10)
#define  SFG_SFG_FORCE_BG_AT_DIF_bg_dif_blu_shift                                (0)
#define  SFG_SFG_FORCE_BG_AT_DIF_en_force_bg_dif_mask                            (0x80000000)
#define  SFG_SFG_FORCE_BG_AT_DIF_bg_dif_red_mask                                 (0x3FF00000)
#define  SFG_SFG_FORCE_BG_AT_DIF_bg_dif_grn_mask                                 (0x000FFC00)
#define  SFG_SFG_FORCE_BG_AT_DIF_bg_dif_blu_mask                                 (0x000003FF)
#define  SFG_SFG_FORCE_BG_AT_DIF_en_force_bg_dif(data)                           (0x80000000&((data)<<31))
#define  SFG_SFG_FORCE_BG_AT_DIF_bg_dif_red(data)                                (0x3FF00000&((data)<<20))
#define  SFG_SFG_FORCE_BG_AT_DIF_bg_dif_grn(data)                                (0x000FFC00&((data)<<10))
#define  SFG_SFG_FORCE_BG_AT_DIF_bg_dif_blu(data)                                (0x000003FF&(data))
#define  SFG_SFG_FORCE_BG_AT_DIF_get_en_force_bg_dif(data)                       ((0x80000000&(data))>>31)
#define  SFG_SFG_FORCE_BG_AT_DIF_get_bg_dif_red(data)                            ((0x3FF00000&(data))>>20)
#define  SFG_SFG_FORCE_BG_AT_DIF_get_bg_dif_grn(data)                            ((0x000FFC00&(data))>>10)
#define  SFG_SFG_FORCE_BG_AT_DIF_get_bg_dif_blu(data)                            (0x000003FF&(data))

#define  SFG_ZZ_CTRL                                                            0x1802D92C
#define  SFG_ZZ_CTRL_reg_addr                                                    "0xB802D92C"
#define  SFG_ZZ_CTRL_reg                                                         0xB802D92C
#define  SFG_ZZ_CTRL_inst_addr                                                   "0x0009"
#define  set_SFG_ZZ_CTRL_reg(data)                                               (*((volatile unsigned int*)SFG_ZZ_CTRL_reg)=data)
#define  get_SFG_ZZ_CTRL_reg                                                     (*((volatile unsigned int*)SFG_ZZ_CTRL_reg))
#define  SFG_ZZ_CTRL_dummy_0_shift                                               (31)
#define  SFG_ZZ_CTRL_zz_shift_sp_0_shift                                         (20)
#define  SFG_ZZ_CTRL_zz_shift_sp_1_shift                                         (16)
#define  SFG_ZZ_CTRL_zz_shift_sp_2_shift                                         (12)
#define  SFG_ZZ_CTRL_zz_shift_sp_3_shift                                         (8)
#define  SFG_ZZ_CTRL_zz_shift_mode_0_shift                                       (7)
#define  SFG_ZZ_CTRL_zz_shift_mode_1_shift                                       (6)
#define  SFG_ZZ_CTRL_zz_shift_mode_2_shift                                       (5)
#define  SFG_ZZ_CTRL_zz_shift_mode_3_shift                                       (4)
#define  SFG_ZZ_CTRL_dummy_0_mask                                                (0x80000000)
#define  SFG_ZZ_CTRL_zz_shift_sp_0_mask                                          (0x00F00000)
#define  SFG_ZZ_CTRL_zz_shift_sp_1_mask                                          (0x000F0000)
#define  SFG_ZZ_CTRL_zz_shift_sp_2_mask                                          (0x0000F000)
#define  SFG_ZZ_CTRL_zz_shift_sp_3_mask                                          (0x00000F00)
#define  SFG_ZZ_CTRL_zz_shift_mode_0_mask                                        (0x00000080)
#define  SFG_ZZ_CTRL_zz_shift_mode_1_mask                                        (0x00000040)
#define  SFG_ZZ_CTRL_zz_shift_mode_2_mask                                        (0x00000020)
#define  SFG_ZZ_CTRL_zz_shift_mode_3_mask                                        (0x00000010)
#define  SFG_ZZ_CTRL_dummy_0(data)                                               (0x80000000&((data)<<31))
#define  SFG_ZZ_CTRL_zz_shift_sp_0(data)                                         (0x00F00000&((data)<<20))
#define  SFG_ZZ_CTRL_zz_shift_sp_1(data)                                         (0x000F0000&((data)<<16))
#define  SFG_ZZ_CTRL_zz_shift_sp_2(data)                                         (0x0000F000&((data)<<12))
#define  SFG_ZZ_CTRL_zz_shift_sp_3(data)                                         (0x00000F00&((data)<<8))
#define  SFG_ZZ_CTRL_zz_shift_mode_0(data)                                       (0x00000080&((data)<<7))
#define  SFG_ZZ_CTRL_zz_shift_mode_1(data)                                       (0x00000040&((data)<<6))
#define  SFG_ZZ_CTRL_zz_shift_mode_2(data)                                       (0x00000020&((data)<<5))
#define  SFG_ZZ_CTRL_zz_shift_mode_3(data)                                       (0x00000010&((data)<<4))
#define  SFG_ZZ_CTRL_get_dummy_0(data)                                           ((0x80000000&(data))>>31)
#define  SFG_ZZ_CTRL_get_zz_shift_sp_0(data)                                     ((0x00F00000&(data))>>20)
#define  SFG_ZZ_CTRL_get_zz_shift_sp_1(data)                                     ((0x000F0000&(data))>>16)
#define  SFG_ZZ_CTRL_get_zz_shift_sp_2(data)                                     ((0x0000F000&(data))>>12)
#define  SFG_ZZ_CTRL_get_zz_shift_sp_3(data)                                     ((0x00000F00&(data))>>8)
#define  SFG_ZZ_CTRL_get_zz_shift_mode_0(data)                                   ((0x00000080&(data))>>7)
#define  SFG_ZZ_CTRL_get_zz_shift_mode_1(data)                                   ((0x00000040&(data))>>6)
#define  SFG_ZZ_CTRL_get_zz_shift_mode_2(data)                                   ((0x00000020&(data))>>5)
#define  SFG_ZZ_CTRL_get_zz_shift_mode_3(data)                                   ((0x00000010&(data))>>4)

#define  SFG_SFG_DUMMY_CTRL_0A                                                  0x1802D930
#define  SFG_SFG_DUMMY_CTRL_0A_reg_addr                                          "0xB802D930"
#define  SFG_SFG_DUMMY_CTRL_0A_reg                                               0xB802D930
#define  SFG_SFG_DUMMY_CTRL_0A_inst_addr                                         "0x000A"
#define  set_SFG_SFG_DUMMY_CTRL_0A_reg(data)                                     (*((volatile unsigned int*)SFG_SFG_DUMMY_CTRL_0A_reg)=data)
#define  get_SFG_SFG_DUMMY_CTRL_0A_reg                                           (*((volatile unsigned int*)SFG_SFG_DUMMY_CTRL_0A_reg))
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_front_dummy_num_0_shift                     (30)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_back_dummy_num_0_shift                      (28)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_front_dummy_num_1_shift                     (26)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_back_dummy_num_1_shift                      (24)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_front_dummy_num_2_shift                     (22)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_back_dummy_num_2_shift                      (20)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_front_dummy_num_3_shift                     (18)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_back_dummy_num_3_shift                      (16)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_front_dummy_num_0_shift                     (14)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_back_dummy_num_0_shift                      (12)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_front_dummy_num_1_shift                     (10)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_back_dummy_num_1_shift                      (8)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_front_dummy_num_2_shift                     (6)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_back_dummy_num_2_shift                      (4)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_front_dummy_num_3_shift                     (2)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_back_dummy_num_3_shift                      (0)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_front_dummy_num_0_mask                      (0xC0000000)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_back_dummy_num_0_mask                       (0x30000000)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_front_dummy_num_1_mask                      (0x0C000000)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_back_dummy_num_1_mask                       (0x03000000)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_front_dummy_num_2_mask                      (0x00C00000)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_back_dummy_num_2_mask                       (0x00300000)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_front_dummy_num_3_mask                      (0x000C0000)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_back_dummy_num_3_mask                       (0x00030000)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_front_dummy_num_0_mask                      (0x0000C000)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_back_dummy_num_0_mask                       (0x00003000)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_front_dummy_num_1_mask                      (0x00000C00)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_back_dummy_num_1_mask                       (0x00000300)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_front_dummy_num_2_mask                      (0x000000C0)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_back_dummy_num_2_mask                       (0x00000030)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_front_dummy_num_3_mask                      (0x0000000C)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_back_dummy_num_3_mask                       (0x00000003)
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_front_dummy_num_0(data)                     (0xC0000000&((data)<<30))
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_back_dummy_num_0(data)                      (0x30000000&((data)<<28))
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_front_dummy_num_1(data)                     (0x0C000000&((data)<<26))
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_back_dummy_num_1(data)                      (0x03000000&((data)<<24))
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_front_dummy_num_2(data)                     (0x00C00000&((data)<<22))
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_back_dummy_num_2(data)                      (0x00300000&((data)<<20))
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_front_dummy_num_3(data)                     (0x000C0000&((data)<<18))
#define  SFG_SFG_DUMMY_CTRL_0A_seg_0_back_dummy_num_3(data)                      (0x00030000&((data)<<16))
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_front_dummy_num_0(data)                     (0x0000C000&((data)<<14))
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_back_dummy_num_0(data)                      (0x00003000&((data)<<12))
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_front_dummy_num_1(data)                     (0x00000C00&((data)<<10))
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_back_dummy_num_1(data)                      (0x00000300&((data)<<8))
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_front_dummy_num_2(data)                     (0x000000C0&((data)<<6))
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_back_dummy_num_2(data)                      (0x00000030&((data)<<4))
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_front_dummy_num_3(data)                     (0x0000000C&((data)<<2))
#define  SFG_SFG_DUMMY_CTRL_0A_seg_1_back_dummy_num_3(data)                      (0x00000003&(data))
#define  SFG_SFG_DUMMY_CTRL_0A_get_seg_0_front_dummy_num_0(data)                 ((0xC0000000&(data))>>30)
#define  SFG_SFG_DUMMY_CTRL_0A_get_seg_0_back_dummy_num_0(data)                  ((0x30000000&(data))>>28)
#define  SFG_SFG_DUMMY_CTRL_0A_get_seg_0_front_dummy_num_1(data)                 ((0x0C000000&(data))>>26)
#define  SFG_SFG_DUMMY_CTRL_0A_get_seg_0_back_dummy_num_1(data)                  ((0x03000000&(data))>>24)
#define  SFG_SFG_DUMMY_CTRL_0A_get_seg_0_front_dummy_num_2(data)                 ((0x00C00000&(data))>>22)
#define  SFG_SFG_DUMMY_CTRL_0A_get_seg_0_back_dummy_num_2(data)                  ((0x00300000&(data))>>20)
#define  SFG_SFG_DUMMY_CTRL_0A_get_seg_0_front_dummy_num_3(data)                 ((0x000C0000&(data))>>18)
#define  SFG_SFG_DUMMY_CTRL_0A_get_seg_0_back_dummy_num_3(data)                  ((0x00030000&(data))>>16)
#define  SFG_SFG_DUMMY_CTRL_0A_get_seg_1_front_dummy_num_0(data)                 ((0x0000C000&(data))>>14)
#define  SFG_SFG_DUMMY_CTRL_0A_get_seg_1_back_dummy_num_0(data)                  ((0x00003000&(data))>>12)
#define  SFG_SFG_DUMMY_CTRL_0A_get_seg_1_front_dummy_num_1(data)                 ((0x00000C00&(data))>>10)
#define  SFG_SFG_DUMMY_CTRL_0A_get_seg_1_back_dummy_num_1(data)                  ((0x00000300&(data))>>8)
#define  SFG_SFG_DUMMY_CTRL_0A_get_seg_1_front_dummy_num_2(data)                 ((0x000000C0&(data))>>6)
#define  SFG_SFG_DUMMY_CTRL_0A_get_seg_1_back_dummy_num_2(data)                  ((0x00000030&(data))>>4)
#define  SFG_SFG_DUMMY_CTRL_0A_get_seg_1_front_dummy_num_3(data)                 ((0x0000000C&(data))>>2)
#define  SFG_SFG_DUMMY_CTRL_0A_get_seg_1_back_dummy_num_3(data)                  (0x00000003&(data))

#define  SFG_SFG_DUMMY_CTRL_0B                                                  0x1802D934
#define  SFG_SFG_DUMMY_CTRL_0B_reg_addr                                          "0xB802D934"
#define  SFG_SFG_DUMMY_CTRL_0B_reg                                               0xB802D934
#define  SFG_SFG_DUMMY_CTRL_0B_inst_addr                                         "0x000B"
#define  set_SFG_SFG_DUMMY_CTRL_0B_reg(data)                                     (*((volatile unsigned int*)SFG_SFG_DUMMY_CTRL_0B_reg)=data)
#define  get_SFG_SFG_DUMMY_CTRL_0B_reg                                           (*((volatile unsigned int*)SFG_SFG_DUMMY_CTRL_0B_reg))
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_front_dummy_num_0_shift                     (30)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_back_dummy_num_0_shift                      (28)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_front_dummy_num_1_shift                     (26)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_back_dummy_num_1_shift                      (24)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_front_dummy_num_2_shift                     (22)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_back_dummy_num_2_shift                      (20)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_front_dummy_num_3_shift                     (18)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_back_dummy_num_3_shift                      (16)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_front_dummy_num_0_shift                     (14)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_back_dummy_num_0_shift                      (12)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_front_dummy_num_1_shift                     (10)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_back_dummy_num_1_shift                      (8)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_front_dummy_num_2_shift                     (6)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_back_dummy_num_2_shift                      (4)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_front_dummy_num_3_shift                     (2)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_back_dummy_num_3_shift                      (0)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_front_dummy_num_0_mask                      (0xC0000000)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_back_dummy_num_0_mask                       (0x30000000)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_front_dummy_num_1_mask                      (0x0C000000)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_back_dummy_num_1_mask                       (0x03000000)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_front_dummy_num_2_mask                      (0x00C00000)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_back_dummy_num_2_mask                       (0x00300000)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_front_dummy_num_3_mask                      (0x000C0000)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_back_dummy_num_3_mask                       (0x00030000)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_front_dummy_num_0_mask                      (0x0000C000)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_back_dummy_num_0_mask                       (0x00003000)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_front_dummy_num_1_mask                      (0x00000C00)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_back_dummy_num_1_mask                       (0x00000300)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_front_dummy_num_2_mask                      (0x000000C0)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_back_dummy_num_2_mask                       (0x00000030)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_front_dummy_num_3_mask                      (0x0000000C)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_back_dummy_num_3_mask                       (0x00000003)
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_front_dummy_num_0(data)                     (0xC0000000&((data)<<30))
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_back_dummy_num_0(data)                      (0x30000000&((data)<<28))
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_front_dummy_num_1(data)                     (0x0C000000&((data)<<26))
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_back_dummy_num_1(data)                      (0x03000000&((data)<<24))
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_front_dummy_num_2(data)                     (0x00C00000&((data)<<22))
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_back_dummy_num_2(data)                      (0x00300000&((data)<<20))
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_front_dummy_num_3(data)                     (0x000C0000&((data)<<18))
#define  SFG_SFG_DUMMY_CTRL_0B_seg_2_back_dummy_num_3(data)                      (0x00030000&((data)<<16))
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_front_dummy_num_0(data)                     (0x0000C000&((data)<<14))
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_back_dummy_num_0(data)                      (0x00003000&((data)<<12))
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_front_dummy_num_1(data)                     (0x00000C00&((data)<<10))
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_back_dummy_num_1(data)                      (0x00000300&((data)<<8))
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_front_dummy_num_2(data)                     (0x000000C0&((data)<<6))
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_back_dummy_num_2(data)                      (0x00000030&((data)<<4))
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_front_dummy_num_3(data)                     (0x0000000C&((data)<<2))
#define  SFG_SFG_DUMMY_CTRL_0B_seg_3_back_dummy_num_3(data)                      (0x00000003&(data))
#define  SFG_SFG_DUMMY_CTRL_0B_get_seg_2_front_dummy_num_0(data)                 ((0xC0000000&(data))>>30)
#define  SFG_SFG_DUMMY_CTRL_0B_get_seg_2_back_dummy_num_0(data)                  ((0x30000000&(data))>>28)
#define  SFG_SFG_DUMMY_CTRL_0B_get_seg_2_front_dummy_num_1(data)                 ((0x0C000000&(data))>>26)
#define  SFG_SFG_DUMMY_CTRL_0B_get_seg_2_back_dummy_num_1(data)                  ((0x03000000&(data))>>24)
#define  SFG_SFG_DUMMY_CTRL_0B_get_seg_2_front_dummy_num_2(data)                 ((0x00C00000&(data))>>22)
#define  SFG_SFG_DUMMY_CTRL_0B_get_seg_2_back_dummy_num_2(data)                  ((0x00300000&(data))>>20)
#define  SFG_SFG_DUMMY_CTRL_0B_get_seg_2_front_dummy_num_3(data)                 ((0x000C0000&(data))>>18)
#define  SFG_SFG_DUMMY_CTRL_0B_get_seg_2_back_dummy_num_3(data)                  ((0x00030000&(data))>>16)
#define  SFG_SFG_DUMMY_CTRL_0B_get_seg_3_front_dummy_num_0(data)                 ((0x0000C000&(data))>>14)
#define  SFG_SFG_DUMMY_CTRL_0B_get_seg_3_back_dummy_num_0(data)                  ((0x00003000&(data))>>12)
#define  SFG_SFG_DUMMY_CTRL_0B_get_seg_3_front_dummy_num_1(data)                 ((0x00000C00&(data))>>10)
#define  SFG_SFG_DUMMY_CTRL_0B_get_seg_3_back_dummy_num_1(data)                  ((0x00000300&(data))>>8)
#define  SFG_SFG_DUMMY_CTRL_0B_get_seg_3_front_dummy_num_2(data)                 ((0x000000C0&(data))>>6)
#define  SFG_SFG_DUMMY_CTRL_0B_get_seg_3_back_dummy_num_2(data)                  ((0x00000030&(data))>>4)
#define  SFG_SFG_DUMMY_CTRL_0B_get_seg_3_front_dummy_num_3(data)                 ((0x0000000C&(data))>>2)
#define  SFG_SFG_DUMMY_CTRL_0B_get_seg_3_back_dummy_num_3(data)                  (0x00000003&(data))

#define  SFG_SFG_DUMMY_CTRL_1A                                                  0x1802D938
#define  SFG_SFG_DUMMY_CTRL_1A_reg_addr                                          "0xB802D938"
#define  SFG_SFG_DUMMY_CTRL_1A_reg                                               0xB802D938
#define  SFG_SFG_DUMMY_CTRL_1A_inst_addr                                         "0x000C"
#define  set_SFG_SFG_DUMMY_CTRL_1A_reg(data)                                     (*((volatile unsigned int*)SFG_SFG_DUMMY_CTRL_1A_reg)=data)
#define  get_SFG_SFG_DUMMY_CTRL_1A_reg                                           (*((volatile unsigned int*)SFG_SFG_DUMMY_CTRL_1A_reg))
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_front_dummy_num_0_shift                     (30)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_back_dummy_num_0_shift                      (28)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_front_dummy_num_1_shift                     (26)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_back_dummy_num_1_shift                      (24)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_front_dummy_num_2_shift                     (22)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_back_dummy_num_2_shift                      (20)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_front_dummy_num_3_shift                     (18)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_back_dummy_num_3_shift                      (16)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_front_dummy_num_0_shift                     (14)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_back_dummy_num_0_shift                      (12)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_front_dummy_num_1_shift                     (10)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_back_dummy_num_1_shift                      (8)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_front_dummy_num_2_shift                     (6)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_back_dummy_num_2_shift                      (4)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_front_dummy_num_3_shift                     (2)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_back_dummy_num_3_shift                      (0)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_front_dummy_num_0_mask                      (0xC0000000)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_back_dummy_num_0_mask                       (0x30000000)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_front_dummy_num_1_mask                      (0x0C000000)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_back_dummy_num_1_mask                       (0x03000000)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_front_dummy_num_2_mask                      (0x00C00000)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_back_dummy_num_2_mask                       (0x00300000)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_front_dummy_num_3_mask                      (0x000C0000)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_back_dummy_num_3_mask                       (0x00030000)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_front_dummy_num_0_mask                      (0x0000C000)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_back_dummy_num_0_mask                       (0x00003000)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_front_dummy_num_1_mask                      (0x00000C00)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_back_dummy_num_1_mask                       (0x00000300)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_front_dummy_num_2_mask                      (0x000000C0)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_back_dummy_num_2_mask                       (0x00000030)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_front_dummy_num_3_mask                      (0x0000000C)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_back_dummy_num_3_mask                       (0x00000003)
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_front_dummy_num_0(data)                     (0xC0000000&((data)<<30))
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_back_dummy_num_0(data)                      (0x30000000&((data)<<28))
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_front_dummy_num_1(data)                     (0x0C000000&((data)<<26))
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_back_dummy_num_1(data)                      (0x03000000&((data)<<24))
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_front_dummy_num_2(data)                     (0x00C00000&((data)<<22))
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_back_dummy_num_2(data)                      (0x00300000&((data)<<20))
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_front_dummy_num_3(data)                     (0x000C0000&((data)<<18))
#define  SFG_SFG_DUMMY_CTRL_1A_seg_4_back_dummy_num_3(data)                      (0x00030000&((data)<<16))
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_front_dummy_num_0(data)                     (0x0000C000&((data)<<14))
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_back_dummy_num_0(data)                      (0x00003000&((data)<<12))
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_front_dummy_num_1(data)                     (0x00000C00&((data)<<10))
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_back_dummy_num_1(data)                      (0x00000300&((data)<<8))
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_front_dummy_num_2(data)                     (0x000000C0&((data)<<6))
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_back_dummy_num_2(data)                      (0x00000030&((data)<<4))
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_front_dummy_num_3(data)                     (0x0000000C&((data)<<2))
#define  SFG_SFG_DUMMY_CTRL_1A_seg_5_back_dummy_num_3(data)                      (0x00000003&(data))
#define  SFG_SFG_DUMMY_CTRL_1A_get_seg_4_front_dummy_num_0(data)                 ((0xC0000000&(data))>>30)
#define  SFG_SFG_DUMMY_CTRL_1A_get_seg_4_back_dummy_num_0(data)                  ((0x30000000&(data))>>28)
#define  SFG_SFG_DUMMY_CTRL_1A_get_seg_4_front_dummy_num_1(data)                 ((0x0C000000&(data))>>26)
#define  SFG_SFG_DUMMY_CTRL_1A_get_seg_4_back_dummy_num_1(data)                  ((0x03000000&(data))>>24)
#define  SFG_SFG_DUMMY_CTRL_1A_get_seg_4_front_dummy_num_2(data)                 ((0x00C00000&(data))>>22)
#define  SFG_SFG_DUMMY_CTRL_1A_get_seg_4_back_dummy_num_2(data)                  ((0x00300000&(data))>>20)
#define  SFG_SFG_DUMMY_CTRL_1A_get_seg_4_front_dummy_num_3(data)                 ((0x000C0000&(data))>>18)
#define  SFG_SFG_DUMMY_CTRL_1A_get_seg_4_back_dummy_num_3(data)                  ((0x00030000&(data))>>16)
#define  SFG_SFG_DUMMY_CTRL_1A_get_seg_5_front_dummy_num_0(data)                 ((0x0000C000&(data))>>14)
#define  SFG_SFG_DUMMY_CTRL_1A_get_seg_5_back_dummy_num_0(data)                  ((0x00003000&(data))>>12)
#define  SFG_SFG_DUMMY_CTRL_1A_get_seg_5_front_dummy_num_1(data)                 ((0x00000C00&(data))>>10)
#define  SFG_SFG_DUMMY_CTRL_1A_get_seg_5_back_dummy_num_1(data)                  ((0x00000300&(data))>>8)
#define  SFG_SFG_DUMMY_CTRL_1A_get_seg_5_front_dummy_num_2(data)                 ((0x000000C0&(data))>>6)
#define  SFG_SFG_DUMMY_CTRL_1A_get_seg_5_back_dummy_num_2(data)                  ((0x00000030&(data))>>4)
#define  SFG_SFG_DUMMY_CTRL_1A_get_seg_5_front_dummy_num_3(data)                 ((0x0000000C&(data))>>2)
#define  SFG_SFG_DUMMY_CTRL_1A_get_seg_5_back_dummy_num_3(data)                  (0x00000003&(data))

#define  SFG_SFG_DUMMY_CTRL_1B                                                  0x1802D940
#define  SFG_SFG_DUMMY_CTRL_1B_reg_addr                                          "0xB802D940"
#define  SFG_SFG_DUMMY_CTRL_1B_reg                                               0xB802D940
#define  SFG_SFG_DUMMY_CTRL_1B_inst_addr                                         "0x000D"
#define  set_SFG_SFG_DUMMY_CTRL_1B_reg(data)                                     (*((volatile unsigned int*)SFG_SFG_DUMMY_CTRL_1B_reg)=data)
#define  get_SFG_SFG_DUMMY_CTRL_1B_reg                                           (*((volatile unsigned int*)SFG_SFG_DUMMY_CTRL_1B_reg))
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_front_dummy_num_0_shift                     (30)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_back_dummy_num_0_shift                      (28)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_front_dummy_num_1_shift                     (26)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_back_dummy_num_1_shift                      (24)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_front_dummy_num_2_shift                     (22)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_back_dummy_num_2_shift                      (20)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_front_dummy_num_3_shift                     (18)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_back_dummy_num_3_shift                      (16)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_front_dummy_num_0_shift                     (14)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_back_dummy_num_0_shift                      (12)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_front_dummy_num_1_shift                     (10)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_back_dummy_num_1_shift                      (8)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_front_dummy_num_2_shift                     (6)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_back_dummy_num_2_shift                      (4)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_front_dummy_num_3_shift                     (2)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_back_dummy_num_3_shift                      (0)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_front_dummy_num_0_mask                      (0xC0000000)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_back_dummy_num_0_mask                       (0x30000000)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_front_dummy_num_1_mask                      (0x0C000000)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_back_dummy_num_1_mask                       (0x03000000)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_front_dummy_num_2_mask                      (0x00C00000)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_back_dummy_num_2_mask                       (0x00300000)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_front_dummy_num_3_mask                      (0x000C0000)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_back_dummy_num_3_mask                       (0x00030000)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_front_dummy_num_0_mask                      (0x0000C000)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_back_dummy_num_0_mask                       (0x00003000)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_front_dummy_num_1_mask                      (0x00000C00)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_back_dummy_num_1_mask                       (0x00000300)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_front_dummy_num_2_mask                      (0x000000C0)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_back_dummy_num_2_mask                       (0x00000030)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_front_dummy_num_3_mask                      (0x0000000C)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_back_dummy_num_3_mask                       (0x00000003)
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_front_dummy_num_0(data)                     (0xC0000000&((data)<<30))
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_back_dummy_num_0(data)                      (0x30000000&((data)<<28))
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_front_dummy_num_1(data)                     (0x0C000000&((data)<<26))
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_back_dummy_num_1(data)                      (0x03000000&((data)<<24))
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_front_dummy_num_2(data)                     (0x00C00000&((data)<<22))
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_back_dummy_num_2(data)                      (0x00300000&((data)<<20))
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_front_dummy_num_3(data)                     (0x000C0000&((data)<<18))
#define  SFG_SFG_DUMMY_CTRL_1B_seg_6_back_dummy_num_3(data)                      (0x00030000&((data)<<16))
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_front_dummy_num_0(data)                     (0x0000C000&((data)<<14))
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_back_dummy_num_0(data)                      (0x00003000&((data)<<12))
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_front_dummy_num_1(data)                     (0x00000C00&((data)<<10))
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_back_dummy_num_1(data)                      (0x00000300&((data)<<8))
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_front_dummy_num_2(data)                     (0x000000C0&((data)<<6))
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_back_dummy_num_2(data)                      (0x00000030&((data)<<4))
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_front_dummy_num_3(data)                     (0x0000000C&((data)<<2))
#define  SFG_SFG_DUMMY_CTRL_1B_seg_7_back_dummy_num_3(data)                      (0x00000003&(data))
#define  SFG_SFG_DUMMY_CTRL_1B_get_seg_6_front_dummy_num_0(data)                 ((0xC0000000&(data))>>30)
#define  SFG_SFG_DUMMY_CTRL_1B_get_seg_6_back_dummy_num_0(data)                  ((0x30000000&(data))>>28)
#define  SFG_SFG_DUMMY_CTRL_1B_get_seg_6_front_dummy_num_1(data)                 ((0x0C000000&(data))>>26)
#define  SFG_SFG_DUMMY_CTRL_1B_get_seg_6_back_dummy_num_1(data)                  ((0x03000000&(data))>>24)
#define  SFG_SFG_DUMMY_CTRL_1B_get_seg_6_front_dummy_num_2(data)                 ((0x00C00000&(data))>>22)
#define  SFG_SFG_DUMMY_CTRL_1B_get_seg_6_back_dummy_num_2(data)                  ((0x00300000&(data))>>20)
#define  SFG_SFG_DUMMY_CTRL_1B_get_seg_6_front_dummy_num_3(data)                 ((0x000C0000&(data))>>18)
#define  SFG_SFG_DUMMY_CTRL_1B_get_seg_6_back_dummy_num_3(data)                  ((0x00030000&(data))>>16)
#define  SFG_SFG_DUMMY_CTRL_1B_get_seg_7_front_dummy_num_0(data)                 ((0x0000C000&(data))>>14)
#define  SFG_SFG_DUMMY_CTRL_1B_get_seg_7_back_dummy_num_0(data)                  ((0x00003000&(data))>>12)
#define  SFG_SFG_DUMMY_CTRL_1B_get_seg_7_front_dummy_num_1(data)                 ((0x00000C00&(data))>>10)
#define  SFG_SFG_DUMMY_CTRL_1B_get_seg_7_back_dummy_num_1(data)                  ((0x00000300&(data))>>8)
#define  SFG_SFG_DUMMY_CTRL_1B_get_seg_7_front_dummy_num_2(data)                 ((0x000000C0&(data))>>6)
#define  SFG_SFG_DUMMY_CTRL_1B_get_seg_7_back_dummy_num_2(data)                  ((0x00000030&(data))>>4)
#define  SFG_SFG_DUMMY_CTRL_1B_get_seg_7_front_dummy_num_3(data)                 ((0x0000000C&(data))>>2)
#define  SFG_SFG_DUMMY_CTRL_1B_get_seg_7_back_dummy_num_3(data)                  (0x00000003&(data))

#define  SFG_SFG_DUMMY_CTRL_8                                                   0x1802D944
#define  SFG_SFG_DUMMY_CTRL_8_reg_addr                                           "0xB802D944"
#define  SFG_SFG_DUMMY_CTRL_8_reg                                                0xB802D944
#define  SFG_SFG_DUMMY_CTRL_8_inst_addr                                          "0x000E"
#define  set_SFG_SFG_DUMMY_CTRL_8_reg(data)                                      (*((volatile unsigned int*)SFG_SFG_DUMMY_CTRL_8_reg)=data)
#define  get_SFG_SFG_DUMMY_CTRL_8_reg                                            (*((volatile unsigned int*)SFG_SFG_DUMMY_CTRL_8_reg))
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_front_dummy_num_0_shift                      (30)
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_back_dummy_num_0_shift                       (28)
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_front_dummy_num_1_shift                      (26)
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_back_dummy_num_1_shift                       (24)
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_front_dummy_num_2_shift                      (22)
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_back_dummy_num_2_shift                       (20)
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_front_dummy_num_3_shift                      (18)
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_back_dummy_num_3_shift                       (16)
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_front_dummy_num_0_shift                      (14)
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_back_dummy_num_0_shift                       (12)
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_front_dummy_num_1_shift                      (10)
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_back_dummy_num_1_shift                       (8)
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_front_dummy_num_2_shift                      (6)
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_back_dummy_num_2_shift                       (4)
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_front_dummy_num_3_shift                      (2)
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_back_dummy_num_3_shift                       (0)
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_front_dummy_num_0_mask                       (0xC0000000)
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_back_dummy_num_0_mask                        (0x30000000)
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_front_dummy_num_1_mask                       (0x0C000000)
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_back_dummy_num_1_mask                        (0x03000000)
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_front_dummy_num_2_mask                       (0x00C00000)
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_back_dummy_num_2_mask                        (0x00300000)
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_front_dummy_num_3_mask                       (0x000C0000)
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_back_dummy_num_3_mask                        (0x00030000)
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_front_dummy_num_0_mask                       (0x0000C000)
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_back_dummy_num_0_mask                        (0x00003000)
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_front_dummy_num_1_mask                       (0x00000C00)
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_back_dummy_num_1_mask                        (0x00000300)
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_front_dummy_num_2_mask                       (0x000000C0)
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_back_dummy_num_2_mask                        (0x00000030)
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_front_dummy_num_3_mask                       (0x0000000C)
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_back_dummy_num_3_mask                        (0x00000003)
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_front_dummy_num_0(data)                      (0xC0000000&((data)<<30))
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_back_dummy_num_0(data)                       (0x30000000&((data)<<28))
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_front_dummy_num_1(data)                      (0x0C000000&((data)<<26))
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_back_dummy_num_1(data)                       (0x03000000&((data)<<24))
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_front_dummy_num_2(data)                      (0x00C00000&((data)<<22))
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_back_dummy_num_2(data)                       (0x00300000&((data)<<20))
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_front_dummy_num_3(data)                      (0x000C0000&((data)<<18))
#define  SFG_SFG_DUMMY_CTRL_8_seg_8_back_dummy_num_3(data)                       (0x00030000&((data)<<16))
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_front_dummy_num_0(data)                      (0x0000C000&((data)<<14))
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_back_dummy_num_0(data)                       (0x00003000&((data)<<12))
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_front_dummy_num_1(data)                      (0x00000C00&((data)<<10))
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_back_dummy_num_1(data)                       (0x00000300&((data)<<8))
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_front_dummy_num_2(data)                      (0x000000C0&((data)<<6))
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_back_dummy_num_2(data)                       (0x00000030&((data)<<4))
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_front_dummy_num_3(data)                      (0x0000000C&((data)<<2))
#define  SFG_SFG_DUMMY_CTRL_8_seg_9_back_dummy_num_3(data)                       (0x00000003&(data))
#define  SFG_SFG_DUMMY_CTRL_8_get_seg_8_front_dummy_num_0(data)                  ((0xC0000000&(data))>>30)
#define  SFG_SFG_DUMMY_CTRL_8_get_seg_8_back_dummy_num_0(data)                   ((0x30000000&(data))>>28)
#define  SFG_SFG_DUMMY_CTRL_8_get_seg_8_front_dummy_num_1(data)                  ((0x0C000000&(data))>>26)
#define  SFG_SFG_DUMMY_CTRL_8_get_seg_8_back_dummy_num_1(data)                   ((0x03000000&(data))>>24)
#define  SFG_SFG_DUMMY_CTRL_8_get_seg_8_front_dummy_num_2(data)                  ((0x00C00000&(data))>>22)
#define  SFG_SFG_DUMMY_CTRL_8_get_seg_8_back_dummy_num_2(data)                   ((0x00300000&(data))>>20)
#define  SFG_SFG_DUMMY_CTRL_8_get_seg_8_front_dummy_num_3(data)                  ((0x000C0000&(data))>>18)
#define  SFG_SFG_DUMMY_CTRL_8_get_seg_8_back_dummy_num_3(data)                   ((0x00030000&(data))>>16)
#define  SFG_SFG_DUMMY_CTRL_8_get_seg_9_front_dummy_num_0(data)                  ((0x0000C000&(data))>>14)
#define  SFG_SFG_DUMMY_CTRL_8_get_seg_9_back_dummy_num_0(data)                   ((0x00003000&(data))>>12)
#define  SFG_SFG_DUMMY_CTRL_8_get_seg_9_front_dummy_num_1(data)                  ((0x00000C00&(data))>>10)
#define  SFG_SFG_DUMMY_CTRL_8_get_seg_9_back_dummy_num_1(data)                   ((0x00000300&(data))>>8)
#define  SFG_SFG_DUMMY_CTRL_8_get_seg_9_front_dummy_num_2(data)                  ((0x000000C0&(data))>>6)
#define  SFG_SFG_DUMMY_CTRL_8_get_seg_9_back_dummy_num_2(data)                   ((0x00000030&(data))>>4)
#define  SFG_SFG_DUMMY_CTRL_8_get_seg_9_front_dummy_num_3(data)                  ((0x0000000C&(data))>>2)
#define  SFG_SFG_DUMMY_CTRL_8_get_seg_9_back_dummy_num_3(data)                   (0x00000003&(data))

#define  SFG_SFG_DUMMY_CTRL_10                                                  0x1802D948
#define  SFG_SFG_DUMMY_CTRL_10_reg_addr                                          "0xB802D948"
#define  SFG_SFG_DUMMY_CTRL_10_reg                                               0xB802D948
#define  SFG_SFG_DUMMY_CTRL_10_inst_addr                                         "0x000F"
#define  set_SFG_SFG_DUMMY_CTRL_10_reg(data)                                     (*((volatile unsigned int*)SFG_SFG_DUMMY_CTRL_10_reg)=data)
#define  get_SFG_SFG_DUMMY_CTRL_10_reg                                           (*((volatile unsigned int*)SFG_SFG_DUMMY_CTRL_10_reg))
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_front_dummy_num_0_shift                    (30)
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_back_dummy_num_0_shift                     (28)
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_front_dummy_num_1_shift                    (26)
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_back_dummy_num_1_shift                     (24)
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_front_dummy_num_2_shift                    (22)
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_back_dummy_num_2_shift                     (20)
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_front_dummy_num_3_shift                    (18)
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_back_dummy_num_3_shift                     (16)
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_front_dummy_num_0_shift                    (14)
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_back_dummy_num_0_shift                     (12)
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_front_dummy_num_1_shift                    (10)
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_back_dummy_num_1_shift                     (8)
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_front_dummy_num_2_shift                    (6)
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_back_dummy_num_2_shift                     (4)
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_front_dummy_num_3_shift                    (2)
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_back_dummy_num_3_shift                     (0)
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_front_dummy_num_0_mask                     (0xC0000000)
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_back_dummy_num_0_mask                      (0x30000000)
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_front_dummy_num_1_mask                     (0x0C000000)
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_back_dummy_num_1_mask                      (0x03000000)
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_front_dummy_num_2_mask                     (0x00C00000)
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_back_dummy_num_2_mask                      (0x00300000)
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_front_dummy_num_3_mask                     (0x000C0000)
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_back_dummy_num_3_mask                      (0x00030000)
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_front_dummy_num_0_mask                     (0x0000C000)
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_back_dummy_num_0_mask                      (0x00003000)
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_front_dummy_num_1_mask                     (0x00000C00)
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_back_dummy_num_1_mask                      (0x00000300)
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_front_dummy_num_2_mask                     (0x000000C0)
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_back_dummy_num_2_mask                      (0x00000030)
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_front_dummy_num_3_mask                     (0x0000000C)
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_back_dummy_num_3_mask                      (0x00000003)
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_front_dummy_num_0(data)                    (0xC0000000&((data)<<30))
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_back_dummy_num_0(data)                     (0x30000000&((data)<<28))
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_front_dummy_num_1(data)                    (0x0C000000&((data)<<26))
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_back_dummy_num_1(data)                     (0x03000000&((data)<<24))
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_front_dummy_num_2(data)                    (0x00C00000&((data)<<22))
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_back_dummy_num_2(data)                     (0x00300000&((data)<<20))
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_front_dummy_num_3(data)                    (0x000C0000&((data)<<18))
#define  SFG_SFG_DUMMY_CTRL_10_seg_10_back_dummy_num_3(data)                     (0x00030000&((data)<<16))
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_front_dummy_num_0(data)                    (0x0000C000&((data)<<14))
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_back_dummy_num_0(data)                     (0x00003000&((data)<<12))
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_front_dummy_num_1(data)                    (0x00000C00&((data)<<10))
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_back_dummy_num_1(data)                     (0x00000300&((data)<<8))
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_front_dummy_num_2(data)                    (0x000000C0&((data)<<6))
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_back_dummy_num_2(data)                     (0x00000030&((data)<<4))
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_front_dummy_num_3(data)                    (0x0000000C&((data)<<2))
#define  SFG_SFG_DUMMY_CTRL_10_seg_11_back_dummy_num_3(data)                     (0x00000003&(data))
#define  SFG_SFG_DUMMY_CTRL_10_get_seg_10_front_dummy_num_0(data)                ((0xC0000000&(data))>>30)
#define  SFG_SFG_DUMMY_CTRL_10_get_seg_10_back_dummy_num_0(data)                 ((0x30000000&(data))>>28)
#define  SFG_SFG_DUMMY_CTRL_10_get_seg_10_front_dummy_num_1(data)                ((0x0C000000&(data))>>26)
#define  SFG_SFG_DUMMY_CTRL_10_get_seg_10_back_dummy_num_1(data)                 ((0x03000000&(data))>>24)
#define  SFG_SFG_DUMMY_CTRL_10_get_seg_10_front_dummy_num_2(data)                ((0x00C00000&(data))>>22)
#define  SFG_SFG_DUMMY_CTRL_10_get_seg_10_back_dummy_num_2(data)                 ((0x00300000&(data))>>20)
#define  SFG_SFG_DUMMY_CTRL_10_get_seg_10_front_dummy_num_3(data)                ((0x000C0000&(data))>>18)
#define  SFG_SFG_DUMMY_CTRL_10_get_seg_10_back_dummy_num_3(data)                 ((0x00030000&(data))>>16)
#define  SFG_SFG_DUMMY_CTRL_10_get_seg_11_front_dummy_num_0(data)                ((0x0000C000&(data))>>14)
#define  SFG_SFG_DUMMY_CTRL_10_get_seg_11_back_dummy_num_0(data)                 ((0x00003000&(data))>>12)
#define  SFG_SFG_DUMMY_CTRL_10_get_seg_11_front_dummy_num_1(data)                ((0x00000C00&(data))>>10)
#define  SFG_SFG_DUMMY_CTRL_10_get_seg_11_back_dummy_num_1(data)                 ((0x00000300&(data))>>8)
#define  SFG_SFG_DUMMY_CTRL_10_get_seg_11_front_dummy_num_2(data)                ((0x000000C0&(data))>>6)
#define  SFG_SFG_DUMMY_CTRL_10_get_seg_11_back_dummy_num_2(data)                 ((0x00000030&(data))>>4)
#define  SFG_SFG_DUMMY_CTRL_10_get_seg_11_front_dummy_num_3(data)                ((0x0000000C&(data))>>2)
#define  SFG_SFG_DUMMY_CTRL_10_get_seg_11_back_dummy_num_3(data)                 (0x00000003&(data))

#define  SFG_SFG_CTRL_13                                                        0x1802D94C
#define  SFG_SFG_CTRL_13_reg_addr                                                "0xB802D94C"
#define  SFG_SFG_CTRL_13_reg                                                     0xB802D94C
#define  SFG_SFG_CTRL_13_inst_addr                                               "0x0010"
#define  set_SFG_SFG_CTRL_13_reg(data)                                           (*((volatile unsigned int*)SFG_SFG_CTRL_13_reg)=data)
#define  get_SFG_SFG_CTRL_13_reg                                                 (*((volatile unsigned int*)SFG_SFG_CTRL_13_reg))
#define  SFG_SFG_CTRL_13_gray_dum_line_data_2_shift                              (0)
#define  SFG_SFG_CTRL_13_gray_dum_line_data_2_mask                               (0x3FFFFFFF)
#define  SFG_SFG_CTRL_13_gray_dum_line_data_2(data)                              (0x3FFFFFFF&(data))
#define  SFG_SFG_CTRL_13_get_gray_dum_line_data_2(data)                          (0x3FFFFFFF&(data))

#define  SFG_SFG_CTRL_24                                                        0x1802D950
#define  SFG_SFG_CTRL_24_reg_addr                                                "0xB802D950"
#define  SFG_SFG_CTRL_24_reg                                                     0xB802D950
#define  SFG_SFG_CTRL_24_inst_addr                                               "0x0011"
#define  set_SFG_SFG_CTRL_24_reg(data)                                           (*((volatile unsigned int*)SFG_SFG_CTRL_24_reg)=data)
#define  get_SFG_SFG_CTRL_24_reg                                                 (*((volatile unsigned int*)SFG_SFG_CTRL_24_reg))
#define  SFG_SFG_CTRL_24_dv_den_end_shift                                        (16)
#define  SFG_SFG_CTRL_24_dv_den_sta_shift                                        (0)
#define  SFG_SFG_CTRL_24_dv_den_end_mask                                         (0x1FFF0000)
#define  SFG_SFG_CTRL_24_dv_den_sta_mask                                         (0x00001FFF)
#define  SFG_SFG_CTRL_24_dv_den_end(data)                                        (0x1FFF0000&((data)<<16))
#define  SFG_SFG_CTRL_24_dv_den_sta(data)                                        (0x00001FFF&(data))
#define  SFG_SFG_CTRL_24_get_dv_den_end(data)                                    ((0x1FFF0000&(data))>>16)
#define  SFG_SFG_CTRL_24_get_dv_den_sta(data)                                    (0x00001FFF&(data))

#define  SFG_SFG_CTRL_25                                                        0x1802D954
#define  SFG_SFG_CTRL_25_reg_addr                                                "0xB802D954"
#define  SFG_SFG_CTRL_25_reg                                                     0xB802D954
#define  SFG_SFG_CTRL_25_inst_addr                                               "0x0012"
#define  set_SFG_SFG_CTRL_25_reg(data)                                           (*((volatile unsigned int*)SFG_SFG_CTRL_25_reg)=data)
#define  get_SFG_SFG_CTRL_25_reg                                                 (*((volatile unsigned int*)SFG_SFG_CTRL_25_reg))
#define  SFG_SFG_CTRL_25_dh_den_end_shift                                        (16)
#define  SFG_SFG_CTRL_25_dh_den_sta_shift                                        (0)
#define  SFG_SFG_CTRL_25_dh_den_end_mask                                         (0x1FFF0000)
#define  SFG_SFG_CTRL_25_dh_den_sta_mask                                         (0x00001FFF)
#define  SFG_SFG_CTRL_25_dh_den_end(data)                                        (0x1FFF0000&((data)<<16))
#define  SFG_SFG_CTRL_25_dh_den_sta(data)                                        (0x00001FFF&(data))
#define  SFG_SFG_CTRL_25_get_dh_den_end(data)                                    ((0x1FFF0000&(data))>>16)
#define  SFG_SFG_CTRL_25_get_dh_den_sta(data)                                    (0x00001FFF&(data))

#define  SFG_SFG_CTRL_26                                                        0x1802D958
#define  SFG_SFG_CTRL_26_reg_addr                                                "0xB802D958"
#define  SFG_SFG_CTRL_26_reg                                                     0xB802D958
#define  SFG_SFG_CTRL_26_inst_addr                                               "0x0013"
#define  set_SFG_SFG_CTRL_26_reg(data)                                           (*((volatile unsigned int*)SFG_SFG_CTRL_26_reg)=data)
#define  get_SFG_SFG_CTRL_26_reg                                                 (*((volatile unsigned int*)SFG_SFG_CTRL_26_reg))
#define  SFG_SFG_CTRL_26_dv_width_shift                                          (24)
#define  SFG_SFG_CTRL_26_dh_width_shift                                          (16)
#define  SFG_SFG_CTRL_26_dh_total_shift                                          (0)
#define  SFG_SFG_CTRL_26_dv_width_mask                                           (0xFF000000)
#define  SFG_SFG_CTRL_26_dh_width_mask                                           (0x00FF0000)
#define  SFG_SFG_CTRL_26_dh_total_mask                                           (0x00001FFF)
#define  SFG_SFG_CTRL_26_dv_width(data)                                          (0xFF000000&((data)<<24))
#define  SFG_SFG_CTRL_26_dh_width(data)                                          (0x00FF0000&((data)<<16))
#define  SFG_SFG_CTRL_26_dh_total(data)                                          (0x00001FFF&(data))
#define  SFG_SFG_CTRL_26_get_dv_width(data)                                      ((0xFF000000&(data))>>24)
#define  SFG_SFG_CTRL_26_get_dh_width(data)                                      ((0x00FF0000&(data))>>16)
#define  SFG_SFG_CTRL_26_get_dh_total(data)                                      (0x00001FFF&(data))

#define  SFG_SFG_CTRL_0                                                         0x1802D964
#define  SFG_SFG_CTRL_0_reg_addr                                                 "0xB802D964"
#define  SFG_SFG_CTRL_0_reg                                                      0xB802D964
#define  SFG_SFG_CTRL_0_inst_addr                                                "0x0014"
#define  set_SFG_SFG_CTRL_0_reg(data)                                            (*((volatile unsigned int*)SFG_SFG_CTRL_0_reg)=data)
#define  get_SFG_SFG_CTRL_0_reg                                                  (*((volatile unsigned int*)SFG_SFG_CTRL_0_reg))
#define  SFG_SFG_CTRL_0_data_shift_en_shift                                      (31)
#define  SFG_SFG_CTRL_0_data_mode_shift                                          (28)
#define  SFG_SFG_CTRL_0_dummy_1_shift                                            (26)
#define  SFG_SFG_CTRL_0_mask_one_eye_black_en_shift                              (25)
#define  SFG_SFG_CTRL_0_mask_one_eye_black_left_shift                            (24)
#define  SFG_SFG_CTRL_0_dummy_pixel_shift_en_shift                               (23)
#define  SFG_SFG_CTRL_0_pif_pixel_mode_shift                                     (16)
#define  SFG_SFG_CTRL_0_data_map_sel_shift                                       (13)
#define  SFG_SFG_CTRL_0_seg_num_shift                                            (8)
#define  SFG_SFG_CTRL_0_h_flip_en_shift                                          (7)
#define  SFG_SFG_CTRL_0_port_num_shift                                           (0)
#define  SFG_SFG_CTRL_0_data_shift_en_mask                                       (0x80000000)
#define  SFG_SFG_CTRL_0_data_mode_mask                                           (0x30000000)
#define  SFG_SFG_CTRL_0_dummy_1_mask                                             (0x0C000000)
#define  SFG_SFG_CTRL_0_mask_one_eye_black_en_mask                               (0x02000000)
#define  SFG_SFG_CTRL_0_mask_one_eye_black_left_mask                             (0x01000000)
#define  SFG_SFG_CTRL_0_dummy_pixel_shift_en_mask                                (0x00800000)
#define  SFG_SFG_CTRL_0_pif_pixel_mode_mask                                      (0x00030000)
#define  SFG_SFG_CTRL_0_data_map_sel_mask                                        (0x0000E000)
#define  SFG_SFG_CTRL_0_seg_num_mask                                             (0x00001F00)
#define  SFG_SFG_CTRL_0_h_flip_en_mask                                           (0x00000080)
#define  SFG_SFG_CTRL_0_port_num_mask                                            (0x0000001F)
#define  SFG_SFG_CTRL_0_data_shift_en(data)                                      (0x80000000&((data)<<31))
#define  SFG_SFG_CTRL_0_data_mode(data)                                          (0x30000000&((data)<<28))
#define  SFG_SFG_CTRL_0_dummy_1(data)                                            (0x0C000000&((data)<<26))
#define  SFG_SFG_CTRL_0_mask_one_eye_black_en(data)                              (0x02000000&((data)<<25))
#define  SFG_SFG_CTRL_0_mask_one_eye_black_left(data)                            (0x01000000&((data)<<24))
#define  SFG_SFG_CTRL_0_dummy_pixel_shift_en(data)                               (0x00800000&((data)<<23))
#define  SFG_SFG_CTRL_0_pif_pixel_mode(data)                                     (0x00030000&((data)<<16))
#define  SFG_SFG_CTRL_0_data_map_sel(data)                                       (0x0000E000&((data)<<13))
#define  SFG_SFG_CTRL_0_seg_num(data)                                            (0x00001F00&((data)<<8))
#define  SFG_SFG_CTRL_0_h_flip_en(data)                                          (0x00000080&((data)<<7))
#define  SFG_SFG_CTRL_0_port_num(data)                                           (0x0000001F&(data))
#define  SFG_SFG_CTRL_0_get_data_shift_en(data)                                  ((0x80000000&(data))>>31)
#define  SFG_SFG_CTRL_0_get_data_mode(data)                                      ((0x30000000&(data))>>28)
#define  SFG_SFG_CTRL_0_get_dummy_1(data)                                        ((0x0C000000&(data))>>26)
#define  SFG_SFG_CTRL_0_get_mask_one_eye_black_en(data)                          ((0x02000000&(data))>>25)
#define  SFG_SFG_CTRL_0_get_mask_one_eye_black_left(data)                        ((0x01000000&(data))>>24)
#define  SFG_SFG_CTRL_0_get_dummy_pixel_shift_en(data)                           ((0x00800000&(data))>>23)
#define  SFG_SFG_CTRL_0_get_pif_pixel_mode(data)                                 ((0x00030000&(data))>>16)
#define  SFG_SFG_CTRL_0_get_data_map_sel(data)                                   ((0x0000E000&(data))>>13)
#define  SFG_SFG_CTRL_0_get_seg_num(data)                                        ((0x00001F00&(data))>>8)
#define  SFG_SFG_CTRL_0_get_h_flip_en(data)                                      ((0x00000080&(data))>>7)
#define  SFG_SFG_CTRL_0_get_port_num(data)                                       (0x0000001F&(data))

#define  SFG_SFG_CTRL_1                                                         0x1802D968
#define  SFG_SFG_CTRL_1_reg_addr                                                 "0xB802D968"
#define  SFG_SFG_CTRL_1_reg                                                      0xB802D968
#define  SFG_SFG_CTRL_1_inst_addr                                                "0x0015"
#define  set_SFG_SFG_CTRL_1_reg(data)                                            (*((volatile unsigned int*)SFG_SFG_CTRL_1_reg)=data)
#define  get_SFG_SFG_CTRL_1_reg                                                  (*((volatile unsigned int*)SFG_SFG_CTRL_1_reg))
#define  SFG_SFG_CTRL_1_seg0_start_res_shift                                     (29)
#define  SFG_SFG_CTRL_1_seg0_start_shift                                         (16)
#define  SFG_SFG_CTRL_1_seg1_start_res_shift                                     (13)
#define  SFG_SFG_CTRL_1_seg1_start_shift                                         (0)
#define  SFG_SFG_CTRL_1_seg0_start_res_mask                                      (0xE0000000)
#define  SFG_SFG_CTRL_1_seg0_start_mask                                          (0x1FFF0000)
#define  SFG_SFG_CTRL_1_seg1_start_res_mask                                      (0x0000E000)
#define  SFG_SFG_CTRL_1_seg1_start_mask                                          (0x00001FFF)
#define  SFG_SFG_CTRL_1_seg0_start_res(data)                                     (0xE0000000&((data)<<29))
#define  SFG_SFG_CTRL_1_seg0_start(data)                                         (0x1FFF0000&((data)<<16))
#define  SFG_SFG_CTRL_1_seg1_start_res(data)                                     (0x0000E000&((data)<<13))
#define  SFG_SFG_CTRL_1_seg1_start(data)                                         (0x00001FFF&(data))
#define  SFG_SFG_CTRL_1_get_seg0_start_res(data)                                 ((0xE0000000&(data))>>29)
#define  SFG_SFG_CTRL_1_get_seg0_start(data)                                     ((0x1FFF0000&(data))>>16)
#define  SFG_SFG_CTRL_1_get_seg1_start_res(data)                                 ((0x0000E000&(data))>>13)
#define  SFG_SFG_CTRL_1_get_seg1_start(data)                                     (0x00001FFF&(data))

#define  SFG_SFG_CTRL_2                                                         0x1802D96C
#define  SFG_SFG_CTRL_2_reg_addr                                                 "0xB802D96C"
#define  SFG_SFG_CTRL_2_reg                                                      0xB802D96C
#define  SFG_SFG_CTRL_2_inst_addr                                                "0x0016"
#define  set_SFG_SFG_CTRL_2_reg(data)                                            (*((volatile unsigned int*)SFG_SFG_CTRL_2_reg)=data)
#define  get_SFG_SFG_CTRL_2_reg                                                  (*((volatile unsigned int*)SFG_SFG_CTRL_2_reg))
#define  SFG_SFG_CTRL_2_seg2_start_res_shift                                     (29)
#define  SFG_SFG_CTRL_2_seg2_start_shift                                         (16)
#define  SFG_SFG_CTRL_2_seg3_start_res_shift                                     (13)
#define  SFG_SFG_CTRL_2_seg3_start_shift                                         (0)
#define  SFG_SFG_CTRL_2_seg2_start_res_mask                                      (0xE0000000)
#define  SFG_SFG_CTRL_2_seg2_start_mask                                          (0x1FFF0000)
#define  SFG_SFG_CTRL_2_seg3_start_res_mask                                      (0x0000E000)
#define  SFG_SFG_CTRL_2_seg3_start_mask                                          (0x00001FFF)
#define  SFG_SFG_CTRL_2_seg2_start_res(data)                                     (0xE0000000&((data)<<29))
#define  SFG_SFG_CTRL_2_seg2_start(data)                                         (0x1FFF0000&((data)<<16))
#define  SFG_SFG_CTRL_2_seg3_start_res(data)                                     (0x0000E000&((data)<<13))
#define  SFG_SFG_CTRL_2_seg3_start(data)                                         (0x00001FFF&(data))
#define  SFG_SFG_CTRL_2_get_seg2_start_res(data)                                 ((0xE0000000&(data))>>29)
#define  SFG_SFG_CTRL_2_get_seg2_start(data)                                     ((0x1FFF0000&(data))>>16)
#define  SFG_SFG_CTRL_2_get_seg3_start_res(data)                                 ((0x0000E000&(data))>>13)
#define  SFG_SFG_CTRL_2_get_seg3_start(data)                                     (0x00001FFF&(data))

#define  SFG_SFG_CTRL_3                                                         0x1802D970
#define  SFG_SFG_CTRL_3_reg_addr                                                 "0xB802D970"
#define  SFG_SFG_CTRL_3_reg                                                      0xB802D970
#define  SFG_SFG_CTRL_3_inst_addr                                                "0x0017"
#define  set_SFG_SFG_CTRL_3_reg(data)                                            (*((volatile unsigned int*)SFG_SFG_CTRL_3_reg)=data)
#define  get_SFG_SFG_CTRL_3_reg                                                  (*((volatile unsigned int*)SFG_SFG_CTRL_3_reg))
#define  SFG_SFG_CTRL_3_seg4_start_res_shift                                     (29)
#define  SFG_SFG_CTRL_3_seg4_start_shift                                         (16)
#define  SFG_SFG_CTRL_3_seg5_start_res_shift                                     (13)
#define  SFG_SFG_CTRL_3_seg5_start_shift                                         (0)
#define  SFG_SFG_CTRL_3_seg4_start_res_mask                                      (0xE0000000)
#define  SFG_SFG_CTRL_3_seg4_start_mask                                          (0x1FFF0000)
#define  SFG_SFG_CTRL_3_seg5_start_res_mask                                      (0x0000E000)
#define  SFG_SFG_CTRL_3_seg5_start_mask                                          (0x00001FFF)
#define  SFG_SFG_CTRL_3_seg4_start_res(data)                                     (0xE0000000&((data)<<29))
#define  SFG_SFG_CTRL_3_seg4_start(data)                                         (0x1FFF0000&((data)<<16))
#define  SFG_SFG_CTRL_3_seg5_start_res(data)                                     (0x0000E000&((data)<<13))
#define  SFG_SFG_CTRL_3_seg5_start(data)                                         (0x00001FFF&(data))
#define  SFG_SFG_CTRL_3_get_seg4_start_res(data)                                 ((0xE0000000&(data))>>29)
#define  SFG_SFG_CTRL_3_get_seg4_start(data)                                     ((0x1FFF0000&(data))>>16)
#define  SFG_SFG_CTRL_3_get_seg5_start_res(data)                                 ((0x0000E000&(data))>>13)
#define  SFG_SFG_CTRL_3_get_seg5_start(data)                                     (0x00001FFF&(data))

#define  SFG_SFG_CTRL_4                                                         0x1802D974
#define  SFG_SFG_CTRL_4_reg_addr                                                 "0xB802D974"
#define  SFG_SFG_CTRL_4_reg                                                      0xB802D974
#define  SFG_SFG_CTRL_4_inst_addr                                                "0x0018"
#define  set_SFG_SFG_CTRL_4_reg(data)                                            (*((volatile unsigned int*)SFG_SFG_CTRL_4_reg)=data)
#define  get_SFG_SFG_CTRL_4_reg                                                  (*((volatile unsigned int*)SFG_SFG_CTRL_4_reg))
#define  SFG_SFG_CTRL_4_seg6_start_res_shift                                     (29)
#define  SFG_SFG_CTRL_4_seg6_start_shift                                         (16)
#define  SFG_SFG_CTRL_4_seg7_start_res_shift                                     (13)
#define  SFG_SFG_CTRL_4_seg7_start_shift                                         (0)
#define  SFG_SFG_CTRL_4_seg6_start_res_mask                                      (0xE0000000)
#define  SFG_SFG_CTRL_4_seg6_start_mask                                          (0x1FFF0000)
#define  SFG_SFG_CTRL_4_seg7_start_res_mask                                      (0x0000E000)
#define  SFG_SFG_CTRL_4_seg7_start_mask                                          (0x00001FFF)
#define  SFG_SFG_CTRL_4_seg6_start_res(data)                                     (0xE0000000&((data)<<29))
#define  SFG_SFG_CTRL_4_seg6_start(data)                                         (0x1FFF0000&((data)<<16))
#define  SFG_SFG_CTRL_4_seg7_start_res(data)                                     (0x0000E000&((data)<<13))
#define  SFG_SFG_CTRL_4_seg7_start(data)                                         (0x00001FFF&(data))
#define  SFG_SFG_CTRL_4_get_seg6_start_res(data)                                 ((0xE0000000&(data))>>29)
#define  SFG_SFG_CTRL_4_get_seg6_start(data)                                     ((0x1FFF0000&(data))>>16)
#define  SFG_SFG_CTRL_4_get_seg7_start_res(data)                                 ((0x0000E000&(data))>>13)
#define  SFG_SFG_CTRL_4_get_seg7_start(data)                                     (0x00001FFF&(data))

#define  SFG_SFG_START_CTRL_8                                                   0x1802D978
#define  SFG_SFG_START_CTRL_8_reg_addr                                           "0xB802D978"
#define  SFG_SFG_START_CTRL_8_reg                                                0xB802D978
#define  SFG_SFG_START_CTRL_8_inst_addr                                          "0x0019"
#define  set_SFG_SFG_START_CTRL_8_reg(data)                                      (*((volatile unsigned int*)SFG_SFG_START_CTRL_8_reg)=data)
#define  get_SFG_SFG_START_CTRL_8_reg                                            (*((volatile unsigned int*)SFG_SFG_START_CTRL_8_reg))
#define  SFG_SFG_START_CTRL_8_seg8_start_res_shift                               (29)
#define  SFG_SFG_START_CTRL_8_seg8_start_shift                                   (16)
#define  SFG_SFG_START_CTRL_8_seg9_start_res_shift                               (13)
#define  SFG_SFG_START_CTRL_8_seg9_start_shift                                   (0)
#define  SFG_SFG_START_CTRL_8_seg8_start_res_mask                                (0xE0000000)
#define  SFG_SFG_START_CTRL_8_seg8_start_mask                                    (0x1FFF0000)
#define  SFG_SFG_START_CTRL_8_seg9_start_res_mask                                (0x0000E000)
#define  SFG_SFG_START_CTRL_8_seg9_start_mask                                    (0x00001FFF)
#define  SFG_SFG_START_CTRL_8_seg8_start_res(data)                               (0xE0000000&((data)<<29))
#define  SFG_SFG_START_CTRL_8_seg8_start(data)                                   (0x1FFF0000&((data)<<16))
#define  SFG_SFG_START_CTRL_8_seg9_start_res(data)                               (0x0000E000&((data)<<13))
#define  SFG_SFG_START_CTRL_8_seg9_start(data)                                   (0x00001FFF&(data))
#define  SFG_SFG_START_CTRL_8_get_seg8_start_res(data)                           ((0xE0000000&(data))>>29)
#define  SFG_SFG_START_CTRL_8_get_seg8_start(data)                               ((0x1FFF0000&(data))>>16)
#define  SFG_SFG_START_CTRL_8_get_seg9_start_res(data)                           ((0x0000E000&(data))>>13)
#define  SFG_SFG_START_CTRL_8_get_seg9_start(data)                               (0x00001FFF&(data))

#define  SFG_SFG_START_CTRL_10                                                  0x1802D97C
#define  SFG_SFG_START_CTRL_10_reg_addr                                          "0xB802D97C"
#define  SFG_SFG_START_CTRL_10_reg                                               0xB802D97C
#define  SFG_SFG_START_CTRL_10_inst_addr                                         "0x001A"
#define  set_SFG_SFG_START_CTRL_10_reg(data)                                     (*((volatile unsigned int*)SFG_SFG_START_CTRL_10_reg)=data)
#define  get_SFG_SFG_START_CTRL_10_reg                                           (*((volatile unsigned int*)SFG_SFG_START_CTRL_10_reg))
#define  SFG_SFG_START_CTRL_10_seg10_start_res_shift                             (29)
#define  SFG_SFG_START_CTRL_10_seg10_start_shift                                 (16)
#define  SFG_SFG_START_CTRL_10_seg11_start_res_shift                             (13)
#define  SFG_SFG_START_CTRL_10_seg11_start_shift                                 (0)
#define  SFG_SFG_START_CTRL_10_seg10_start_res_mask                              (0xE0000000)
#define  SFG_SFG_START_CTRL_10_seg10_start_mask                                  (0x1FFF0000)
#define  SFG_SFG_START_CTRL_10_seg11_start_res_mask                              (0x0000E000)
#define  SFG_SFG_START_CTRL_10_seg11_start_mask                                  (0x00001FFF)
#define  SFG_SFG_START_CTRL_10_seg10_start_res(data)                             (0xE0000000&((data)<<29))
#define  SFG_SFG_START_CTRL_10_seg10_start(data)                                 (0x1FFF0000&((data)<<16))
#define  SFG_SFG_START_CTRL_10_seg11_start_res(data)                             (0x0000E000&((data)<<13))
#define  SFG_SFG_START_CTRL_10_seg11_start(data)                                 (0x00001FFF&(data))
#define  SFG_SFG_START_CTRL_10_get_seg10_start_res(data)                         ((0xE0000000&(data))>>29)
#define  SFG_SFG_START_CTRL_10_get_seg10_start(data)                             ((0x1FFF0000&(data))>>16)
#define  SFG_SFG_START_CTRL_10_get_seg11_start_res(data)                         ((0x0000E000&(data))>>13)
#define  SFG_SFG_START_CTRL_10_get_seg11_start(data)                             (0x00001FFF&(data))

#define  SFG_SFG_CTRL_11                                                        0x1802D980
#define  SFG_SFG_CTRL_11_reg_addr                                                "0xB802D980"
#define  SFG_SFG_CTRL_11_reg                                                     0xB802D980
#define  SFG_SFG_CTRL_11_inst_addr                                               "0x001B"
#define  set_SFG_SFG_CTRL_11_reg(data)                                           (*((volatile unsigned int*)SFG_SFG_CTRL_11_reg)=data)
#define  get_SFG_SFG_CTRL_11_reg                                                 (*((volatile unsigned int*)SFG_SFG_CTRL_11_reg))
#define  SFG_SFG_CTRL_11_gray_dum_line_data_0_shift                              (0)
#define  SFG_SFG_CTRL_11_gray_dum_line_data_0_mask                               (0x3FFFFFFF)
#define  SFG_SFG_CTRL_11_gray_dum_line_data_0(data)                              (0x3FFFFFFF&(data))
#define  SFG_SFG_CTRL_11_get_gray_dum_line_data_0(data)                          (0x3FFFFFFF&(data))

#define  SFG_SFG_CTRL_12                                                        0x1802D984
#define  SFG_SFG_CTRL_12_reg_addr                                                "0xB802D984"
#define  SFG_SFG_CTRL_12_reg                                                     0xB802D984
#define  SFG_SFG_CTRL_12_inst_addr                                               "0x001C"
#define  set_SFG_SFG_CTRL_12_reg(data)                                           (*((volatile unsigned int*)SFG_SFG_CTRL_12_reg)=data)
#define  get_SFG_SFG_CTRL_12_reg                                                 (*((volatile unsigned int*)SFG_SFG_CTRL_12_reg))
#define  SFG_SFG_CTRL_12_gray_dum_line_data_1_shift                              (0)
#define  SFG_SFG_CTRL_12_gray_dum_line_data_1_mask                               (0x3FFFFFFF)
#define  SFG_SFG_CTRL_12_gray_dum_line_data_1(data)                              (0x3FFFFFFF&(data))
#define  SFG_SFG_CTRL_12_get_gray_dum_line_data_1(data)                          (0x3FFFFFFF&(data))

#define  SFG_SFG_CTRL_6                                                         0x1802D988
#define  SFG_SFG_CTRL_6_reg_addr                                                 "0xB802D988"
#define  SFG_SFG_CTRL_6_reg                                                      0xB802D988
#define  SFG_SFG_CTRL_6_inst_addr                                                "0x001D"
#define  set_SFG_SFG_CTRL_6_reg(data)                                            (*((volatile unsigned int*)SFG_SFG_CTRL_6_reg)=data)
#define  get_SFG_SFG_CTRL_6_reg                                                  (*((volatile unsigned int*)SFG_SFG_CTRL_6_reg))
#define  SFG_SFG_CTRL_6_bypass_mode_shift                                        (31)
#define  SFG_SFG_CTRL_6_tg_auto_cfg_shift                                        (30)
#define  SFG_SFG_CTRL_6_front_gray_num_shift                                     (20)
#define  SFG_SFG_CTRL_6_front_act_num_shift                                      (16)
#define  SFG_SFG_CTRL_6_back_act_num_shift                                       (12)
#define  SFG_SFG_CTRL_6_back_gray_num_shift                                      (8)
#define  SFG_SFG_CTRL_6_front_gray_en_shift                                      (7)
#define  SFG_SFG_CTRL_6_front_act_en_shift                                       (6)
#define  SFG_SFG_CTRL_6_back_act_en_shift                                        (5)
#define  SFG_SFG_CTRL_6_back_gray_en_shift                                       (4)
#define  SFG_SFG_CTRL_6_downsample_v_shift                                       (0)
#define  SFG_SFG_CTRL_6_bypass_mode_mask                                         (0x80000000)
#define  SFG_SFG_CTRL_6_tg_auto_cfg_mask                                         (0x40000000)
#define  SFG_SFG_CTRL_6_front_gray_num_mask                                      (0x00700000)
#define  SFG_SFG_CTRL_6_front_act_num_mask                                       (0x00070000)
#define  SFG_SFG_CTRL_6_back_act_num_mask                                        (0x00007000)
#define  SFG_SFG_CTRL_6_back_gray_num_mask                                       (0x00000700)
#define  SFG_SFG_CTRL_6_front_gray_en_mask                                       (0x00000080)
#define  SFG_SFG_CTRL_6_front_act_en_mask                                        (0x00000040)
#define  SFG_SFG_CTRL_6_back_act_en_mask                                         (0x00000020)
#define  SFG_SFG_CTRL_6_back_gray_en_mask                                        (0x00000010)
#define  SFG_SFG_CTRL_6_downsample_v_mask                                        (0x00000001)
#define  SFG_SFG_CTRL_6_bypass_mode(data)                                        (0x80000000&((data)<<31))
#define  SFG_SFG_CTRL_6_tg_auto_cfg(data)                                        (0x40000000&((data)<<30))
#define  SFG_SFG_CTRL_6_front_gray_num(data)                                     (0x00700000&((data)<<20))
#define  SFG_SFG_CTRL_6_front_act_num(data)                                      (0x00070000&((data)<<16))
#define  SFG_SFG_CTRL_6_back_act_num(data)                                       (0x00007000&((data)<<12))
#define  SFG_SFG_CTRL_6_back_gray_num(data)                                      (0x00000700&((data)<<8))
#define  SFG_SFG_CTRL_6_front_gray_en(data)                                      (0x00000080&((data)<<7))
#define  SFG_SFG_CTRL_6_front_act_en(data)                                       (0x00000040&((data)<<6))
#define  SFG_SFG_CTRL_6_back_act_en(data)                                        (0x00000020&((data)<<5))
#define  SFG_SFG_CTRL_6_back_gray_en(data)                                       (0x00000010&((data)<<4))
#define  SFG_SFG_CTRL_6_downsample_v(data)                                       (0x00000001&(data))
#define  SFG_SFG_CTRL_6_get_bypass_mode(data)                                    ((0x80000000&(data))>>31)
#define  SFG_SFG_CTRL_6_get_tg_auto_cfg(data)                                    ((0x40000000&(data))>>30)
#define  SFG_SFG_CTRL_6_get_front_gray_num(data)                                 ((0x00700000&(data))>>20)
#define  SFG_SFG_CTRL_6_get_front_act_num(data)                                  ((0x00070000&(data))>>16)
#define  SFG_SFG_CTRL_6_get_back_act_num(data)                                   ((0x00007000&(data))>>12)
#define  SFG_SFG_CTRL_6_get_back_gray_num(data)                                  ((0x00000700&(data))>>8)
#define  SFG_SFG_CTRL_6_get_front_gray_en(data)                                  ((0x00000080&(data))>>7)
#define  SFG_SFG_CTRL_6_get_front_act_en(data)                                   ((0x00000040&(data))>>6)
#define  SFG_SFG_CTRL_6_get_back_act_en(data)                                    ((0x00000020&(data))>>5)
#define  SFG_SFG_CTRL_6_get_back_gray_en(data)                                   ((0x00000010&(data))>>4)
#define  SFG_SFG_CTRL_6_get_downsample_v(data)                                   (0x00000001&(data))

#define  SFG_SFG_CTRL_7                                                         0x1802D98C
#define  SFG_SFG_CTRL_7_reg_addr                                                 "0xB802D98C"
#define  SFG_SFG_CTRL_7_reg                                                      0xB802D98C
#define  SFG_SFG_CTRL_7_inst_addr                                                "0x001E"
#define  set_SFG_SFG_CTRL_7_reg(data)                                            (*((volatile unsigned int*)SFG_SFG_CTRL_7_reg)=data)
#define  get_SFG_SFG_CTRL_7_reg                                                  (*((volatile unsigned int*)SFG_SFG_CTRL_7_reg))
#define  SFG_SFG_CTRL_7_hsync_width_shift                                        (16)
#define  SFG_SFG_CTRL_7_hsync_delay_shift                                        (0)
#define  SFG_SFG_CTRL_7_hsync_width_mask                                         (0x00FF0000)
#define  SFG_SFG_CTRL_7_hsync_delay_mask                                         (0x0000FFFF)
#define  SFG_SFG_CTRL_7_hsync_width(data)                                        (0x00FF0000&((data)<<16))
#define  SFG_SFG_CTRL_7_hsync_delay(data)                                        (0x0000FFFF&(data))
#define  SFG_SFG_CTRL_7_get_hsync_width(data)                                    ((0x00FF0000&(data))>>16)
#define  SFG_SFG_CTRL_7_get_hsync_delay(data)                                    (0x0000FFFF&(data))

#define  SFG_SFG_CTRL_8                                                         0x1802D990
#define  SFG_SFG_CTRL_8_reg_addr                                                 "0xB802D990"
#define  SFG_SFG_CTRL_8_reg                                                      0xB802D990
#define  SFG_SFG_CTRL_8_inst_addr                                                "0x001F"
#define  set_SFG_SFG_CTRL_8_reg(data)                                            (*((volatile unsigned int*)SFG_SFG_CTRL_8_reg)=data)
#define  get_SFG_SFG_CTRL_8_reg                                                  (*((volatile unsigned int*)SFG_SFG_CTRL_8_reg))
#define  SFG_SFG_CTRL_8_hs_distance_shift                                        (16)
#define  SFG_SFG_CTRL_8_vsync_end_shift                                          (8)
#define  SFG_SFG_CTRL_8_vsync_start_shift                                        (0)
#define  SFG_SFG_CTRL_8_hs_distance_mask                                         (0x3FFF0000)
#define  SFG_SFG_CTRL_8_vsync_end_mask                                           (0x0000FF00)
#define  SFG_SFG_CTRL_8_vsync_start_mask                                         (0x000000FF)
#define  SFG_SFG_CTRL_8_hs_distance(data)                                        (0x3FFF0000&((data)<<16))
#define  SFG_SFG_CTRL_8_vsync_end(data)                                          (0x0000FF00&((data)<<8))
#define  SFG_SFG_CTRL_8_vsync_start(data)                                        (0x000000FF&(data))
#define  SFG_SFG_CTRL_8_get_hs_distance(data)                                    ((0x3FFF0000&(data))>>16)
#define  SFG_SFG_CTRL_8_get_vsync_end(data)                                      ((0x0000FF00&(data))>>8)
#define  SFG_SFG_CTRL_8_get_vsync_start(data)                                    (0x000000FF&(data))

#define  SFG_SFG_CTRL_9                                                         0x1802D994
#define  SFG_SFG_CTRL_9_reg_addr                                                 "0xB802D994"
#define  SFG_SFG_CTRL_9_reg                                                      0xB802D994
#define  SFG_SFG_CTRL_9_inst_addr                                                "0x0020"
#define  set_SFG_SFG_CTRL_9_reg(data)                                            (*((volatile unsigned int*)SFG_SFG_CTRL_9_reg)=data)
#define  get_SFG_SFG_CTRL_9_reg                                                  (*((volatile unsigned int*)SFG_SFG_CTRL_9_reg))
#define  SFG_SFG_CTRL_9_sfg_dh_den_sta_shift                                     (16)
#define  SFG_SFG_CTRL_9_req_start_shift                                          (0)
#define  SFG_SFG_CTRL_9_sfg_dh_den_sta_mask                                      (0xFFFF0000)
#define  SFG_SFG_CTRL_9_req_start_mask                                           (0x0000FFFF)
#define  SFG_SFG_CTRL_9_sfg_dh_den_sta(data)                                     (0xFFFF0000&((data)<<16))
#define  SFG_SFG_CTRL_9_req_start(data)                                          (0x0000FFFF&(data))
#define  SFG_SFG_CTRL_9_get_sfg_dh_den_sta(data)                                 ((0xFFFF0000&(data))>>16)
#define  SFG_SFG_CTRL_9_get_req_start(data)                                      (0x0000FFFF&(data))

#define  SFG_SFG_CTRL_5                                                         0x1802D998
#define  SFG_SFG_CTRL_5_reg_addr                                                 "0xB802D998"
#define  SFG_SFG_CTRL_5_reg                                                      0xB802D998
#define  SFG_SFG_CTRL_5_inst_addr                                                "0x0021"
#define  set_SFG_SFG_CTRL_5_reg(data)                                            (*((volatile unsigned int*)SFG_SFG_CTRL_5_reg)=data)
#define  get_SFG_SFG_CTRL_5_reg                                                  (*((volatile unsigned int*)SFG_SFG_CTRL_5_reg))
#define  SFG_SFG_CTRL_5_seg15_flip_shift                                         (15)
#define  SFG_SFG_CTRL_5_seg14_flip_shift                                         (14)
#define  SFG_SFG_CTRL_5_seg13_flip_shift                                         (13)
#define  SFG_SFG_CTRL_5_seg12_flip_shift                                         (12)
#define  SFG_SFG_CTRL_5_seg11_flip_shift                                         (11)
#define  SFG_SFG_CTRL_5_seg10_flip_shift                                         (10)
#define  SFG_SFG_CTRL_5_seg9_flip_shift                                          (9)
#define  SFG_SFG_CTRL_5_seg8_flip_shift                                          (8)
#define  SFG_SFG_CTRL_5_seg7_flip_shift                                          (7)
#define  SFG_SFG_CTRL_5_seg6_flip_shift                                          (6)
#define  SFG_SFG_CTRL_5_seg5_flip_shift                                          (5)
#define  SFG_SFG_CTRL_5_seg4_flip_shift                                          (4)
#define  SFG_SFG_CTRL_5_seg3_flip_shift                                          (3)
#define  SFG_SFG_CTRL_5_seg2_flip_shift                                          (2)
#define  SFG_SFG_CTRL_5_seg1_flip_shift                                          (1)
#define  SFG_SFG_CTRL_5_seg0_flip_shift                                          (0)
#define  SFG_SFG_CTRL_5_seg15_flip_mask                                          (0x00008000)
#define  SFG_SFG_CTRL_5_seg14_flip_mask                                          (0x00004000)
#define  SFG_SFG_CTRL_5_seg13_flip_mask                                          (0x00002000)
#define  SFG_SFG_CTRL_5_seg12_flip_mask                                          (0x00001000)
#define  SFG_SFG_CTRL_5_seg11_flip_mask                                          (0x00000800)
#define  SFG_SFG_CTRL_5_seg10_flip_mask                                          (0x00000400)
#define  SFG_SFG_CTRL_5_seg9_flip_mask                                           (0x00000200)
#define  SFG_SFG_CTRL_5_seg8_flip_mask                                           (0x00000100)
#define  SFG_SFG_CTRL_5_seg7_flip_mask                                           (0x00000080)
#define  SFG_SFG_CTRL_5_seg6_flip_mask                                           (0x00000040)
#define  SFG_SFG_CTRL_5_seg5_flip_mask                                           (0x00000020)
#define  SFG_SFG_CTRL_5_seg4_flip_mask                                           (0x00000010)
#define  SFG_SFG_CTRL_5_seg3_flip_mask                                           (0x00000008)
#define  SFG_SFG_CTRL_5_seg2_flip_mask                                           (0x00000004)
#define  SFG_SFG_CTRL_5_seg1_flip_mask                                           (0x00000002)
#define  SFG_SFG_CTRL_5_seg0_flip_mask                                           (0x00000001)
#define  SFG_SFG_CTRL_5_seg15_flip(data)                                         (0x00008000&((data)<<15))
#define  SFG_SFG_CTRL_5_seg14_flip(data)                                         (0x00004000&((data)<<14))
#define  SFG_SFG_CTRL_5_seg13_flip(data)                                         (0x00002000&((data)<<13))
#define  SFG_SFG_CTRL_5_seg12_flip(data)                                         (0x00001000&((data)<<12))
#define  SFG_SFG_CTRL_5_seg11_flip(data)                                         (0x00000800&((data)<<11))
#define  SFG_SFG_CTRL_5_seg10_flip(data)                                         (0x00000400&((data)<<10))
#define  SFG_SFG_CTRL_5_seg9_flip(data)                                          (0x00000200&((data)<<9))
#define  SFG_SFG_CTRL_5_seg8_flip(data)                                          (0x00000100&((data)<<8))
#define  SFG_SFG_CTRL_5_seg7_flip(data)                                          (0x00000080&((data)<<7))
#define  SFG_SFG_CTRL_5_seg6_flip(data)                                          (0x00000040&((data)<<6))
#define  SFG_SFG_CTRL_5_seg5_flip(data)                                          (0x00000020&((data)<<5))
#define  SFG_SFG_CTRL_5_seg4_flip(data)                                          (0x00000010&((data)<<4))
#define  SFG_SFG_CTRL_5_seg3_flip(data)                                          (0x00000008&((data)<<3))
#define  SFG_SFG_CTRL_5_seg2_flip(data)                                          (0x00000004&((data)<<2))
#define  SFG_SFG_CTRL_5_seg1_flip(data)                                          (0x00000002&((data)<<1))
#define  SFG_SFG_CTRL_5_seg0_flip(data)                                          (0x00000001&(data))
#define  SFG_SFG_CTRL_5_get_seg15_flip(data)                                     ((0x00008000&(data))>>15)
#define  SFG_SFG_CTRL_5_get_seg14_flip(data)                                     ((0x00004000&(data))>>14)
#define  SFG_SFG_CTRL_5_get_seg13_flip(data)                                     ((0x00002000&(data))>>13)
#define  SFG_SFG_CTRL_5_get_seg12_flip(data)                                     ((0x00001000&(data))>>12)
#define  SFG_SFG_CTRL_5_get_seg11_flip(data)                                     ((0x00000800&(data))>>11)
#define  SFG_SFG_CTRL_5_get_seg10_flip(data)                                     ((0x00000400&(data))>>10)
#define  SFG_SFG_CTRL_5_get_seg9_flip(data)                                      ((0x00000200&(data))>>9)
#define  SFG_SFG_CTRL_5_get_seg8_flip(data)                                      ((0x00000100&(data))>>8)
#define  SFG_SFG_CTRL_5_get_seg7_flip(data)                                      ((0x00000080&(data))>>7)
#define  SFG_SFG_CTRL_5_get_seg6_flip(data)                                      ((0x00000040&(data))>>6)
#define  SFG_SFG_CTRL_5_get_seg5_flip(data)                                      ((0x00000020&(data))>>5)
#define  SFG_SFG_CTRL_5_get_seg4_flip(data)                                      ((0x00000010&(data))>>4)
#define  SFG_SFG_CTRL_5_get_seg3_flip(data)                                      ((0x00000008&(data))>>3)
#define  SFG_SFG_CTRL_5_get_seg2_flip(data)                                      ((0x00000004&(data))>>2)
#define  SFG_SFG_CTRL_5_get_seg1_flip(data)                                      ((0x00000002&(data))>>1)
#define  SFG_SFG_CTRL_5_get_seg0_flip(data)                                      (0x00000001&(data))

#define  SFG_SFG_CTRL_A                                                         0x1802D99C
#define  SFG_SFG_CTRL_A_reg_addr                                                 "0xB802D99C"
#define  SFG_SFG_CTRL_A_reg                                                      0xB802D99C
#define  SFG_SFG_CTRL_A_inst_addr                                                "0x0022"
#define  set_SFG_SFG_CTRL_A_reg(data)                                            (*((volatile unsigned int*)SFG_SFG_CTRL_A_reg)=data)
#define  get_SFG_SFG_CTRL_A_reg                                                  (*((volatile unsigned int*)SFG_SFG_CTRL_A_reg))
#define  SFG_SFG_CTRL_A_final_line_length_shift                                  (16)
#define  SFG_SFG_CTRL_A_final_line_length_mask                                   (0x1FFF0000)
#define  SFG_SFG_CTRL_A_final_line_length(data)                                  (0x1FFF0000&((data)<<16))
#define  SFG_SFG_CTRL_A_get_final_line_length(data)                              ((0x1FFF0000&(data))>>16)

#define  SFG_SFG_CTRL_B                                                         0x1802D9A0
#define  SFG_SFG_CTRL_B_reg_addr                                                 "0xB802D9A0"
#define  SFG_SFG_CTRL_B_reg                                                      0xB802D9A0
#define  SFG_SFG_CTRL_B_inst_addr                                                "0x0023"
#define  set_SFG_SFG_CTRL_B_reg(data)                                            (*((volatile unsigned int*)SFG_SFG_CTRL_B_reg)=data)
#define  get_SFG_SFG_CTRL_B_reg                                                  (*((volatile unsigned int*)SFG_SFG_CTRL_B_reg))
#define  SFG_SFG_CTRL_B_residue_pix_split_mode_shift                             (16)
#define  SFG_SFG_CTRL_B_final_addr_split_mode_shift                              (0)
#define  SFG_SFG_CTRL_B_residue_pix_split_mode_mask                              (0x00070000)
#define  SFG_SFG_CTRL_B_final_addr_split_mode_mask                               (0x00001FFF)
#define  SFG_SFG_CTRL_B_residue_pix_split_mode(data)                             (0x00070000&((data)<<16))
#define  SFG_SFG_CTRL_B_final_addr_split_mode(data)                              (0x00001FFF&(data))
#define  SFG_SFG_CTRL_B_get_residue_pix_split_mode(data)                         ((0x00070000&(data))>>16)
#define  SFG_SFG_CTRL_B_get_final_addr_split_mode(data)                          (0x00001FFF&(data))

#define  SFG_SFG_CTRL_C                                                         0x1802D9A4
#define  SFG_SFG_CTRL_C_reg_addr                                                 "0xB802D9A4"
#define  SFG_SFG_CTRL_C_reg                                                      0xB802D9A4
#define  SFG_SFG_CTRL_C_inst_addr                                                "0x0024"
#define  set_SFG_SFG_CTRL_C_reg(data)                                            (*((volatile unsigned int*)SFG_SFG_CTRL_C_reg)=data)
#define  get_SFG_SFG_CTRL_C_reg                                                  (*((volatile unsigned int*)SFG_SFG_CTRL_C_reg))
#define  SFG_SFG_CTRL_C_hs_den_io_dist_shift                                     (16)
#define  SFG_SFG_CTRL_C_hs_io_dist_shift                                         (0)
#define  SFG_SFG_CTRL_C_hs_den_io_dist_mask                                      (0x1FFF0000)
#define  SFG_SFG_CTRL_C_hs_io_dist_mask                                          (0x00001FFF)
#define  SFG_SFG_CTRL_C_hs_den_io_dist(data)                                     (0x1FFF0000&((data)<<16))
#define  SFG_SFG_CTRL_C_hs_io_dist(data)                                         (0x00001FFF&(data))
#define  SFG_SFG_CTRL_C_get_hs_den_io_dist(data)                                 ((0x1FFF0000&(data))>>16)
#define  SFG_SFG_CTRL_C_get_hs_io_dist(data)                                     (0x00001FFF&(data))

#define  SFG_SFG_TG_AUTO_1                                                      0x1802D9A8
#define  SFG_SFG_TG_AUTO_1_reg_addr                                              "0xB802D9A8"
#define  SFG_SFG_TG_AUTO_1_reg                                                   0xB802D9A8
#define  SFG_SFG_TG_AUTO_1_inst_addr                                             "0x0025"
#define  set_SFG_SFG_TG_AUTO_1_reg(data)                                         (*((volatile unsigned int*)SFG_SFG_TG_AUTO_1_reg)=data)
#define  get_SFG_SFG_TG_AUTO_1_reg                                               (*((volatile unsigned int*)SFG_SFG_TG_AUTO_1_reg))
#define  SFG_SFG_TG_AUTO_1_sfg_dh_den_sta_auto_shift                             (16)
#define  SFG_SFG_TG_AUTO_1_req_start_auto_shift                                  (0)
#define  SFG_SFG_TG_AUTO_1_sfg_dh_den_sta_auto_mask                              (0xFFFF0000)
#define  SFG_SFG_TG_AUTO_1_req_start_auto_mask                                   (0x0000FFFF)
#define  SFG_SFG_TG_AUTO_1_sfg_dh_den_sta_auto(data)                             (0xFFFF0000&((data)<<16))
#define  SFG_SFG_TG_AUTO_1_req_start_auto(data)                                  (0x0000FFFF&(data))
#define  SFG_SFG_TG_AUTO_1_get_sfg_dh_den_sta_auto(data)                         ((0xFFFF0000&(data))>>16)
#define  SFG_SFG_TG_AUTO_1_get_req_start_auto(data)                              (0x0000FFFF&(data))

#define  SFG_SFG_TG_AUTO_2                                                      0x1802D9AC
#define  SFG_SFG_TG_AUTO_2_reg_addr                                              "0xB802D9AC"
#define  SFG_SFG_TG_AUTO_2_reg                                                   0xB802D9AC
#define  SFG_SFG_TG_AUTO_2_inst_addr                                             "0x0026"
#define  set_SFG_SFG_TG_AUTO_2_reg(data)                                         (*((volatile unsigned int*)SFG_SFG_TG_AUTO_2_reg)=data)
#define  get_SFG_SFG_TG_AUTO_2_reg                                               (*((volatile unsigned int*)SFG_SFG_TG_AUTO_2_reg))
#define  SFG_SFG_TG_AUTO_2_t_read_shift                                          (31)
#define  SFG_SFG_TG_AUTO_2_hsync_width_auto_shift                                (16)
#define  SFG_SFG_TG_AUTO_2_hsync_delay_auto_shift                                (0)
#define  SFG_SFG_TG_AUTO_2_t_read_mask                                           (0x80000000)
#define  SFG_SFG_TG_AUTO_2_hsync_width_auto_mask                                 (0x00FF0000)
#define  SFG_SFG_TG_AUTO_2_hsync_delay_auto_mask                                 (0x0000FFFF)
#define  SFG_SFG_TG_AUTO_2_t_read(data)                                          (0x80000000&((data)<<31))
#define  SFG_SFG_TG_AUTO_2_hsync_width_auto(data)                                (0x00FF0000&((data)<<16))
#define  SFG_SFG_TG_AUTO_2_hsync_delay_auto(data)                                (0x0000FFFF&(data))
#define  SFG_SFG_TG_AUTO_2_get_t_read(data)                                      ((0x80000000&(data))>>31)
#define  SFG_SFG_TG_AUTO_2_get_hsync_width_auto(data)                            ((0x00FF0000&(data))>>16)
#define  SFG_SFG_TG_AUTO_2_get_hsync_delay_auto(data)                            (0x0000FFFF&(data))

#define  SFG_SFG_TG_AUTO_3                                                      0x1802D9B0
#define  SFG_SFG_TG_AUTO_3_reg_addr                                              "0xB802D9B0"
#define  SFG_SFG_TG_AUTO_3_reg                                                   0xB802D9B0
#define  SFG_SFG_TG_AUTO_3_inst_addr                                             "0x0027"
#define  set_SFG_SFG_TG_AUTO_3_reg(data)                                         (*((volatile unsigned int*)SFG_SFG_TG_AUTO_3_reg)=data)
#define  get_SFG_SFG_TG_AUTO_3_reg                                               (*((volatile unsigned int*)SFG_SFG_TG_AUTO_3_reg))
#define  SFG_SFG_TG_AUTO_3_hs_distance_auto_shift                                (16)
#define  SFG_SFG_TG_AUTO_3_vsync_end_auto_shift                                  (8)
#define  SFG_SFG_TG_AUTO_3_vsync_start_auto_shift                                (0)
#define  SFG_SFG_TG_AUTO_3_hs_distance_auto_mask                                 (0x3FFF0000)
#define  SFG_SFG_TG_AUTO_3_vsync_end_auto_mask                                   (0x0000FF00)
#define  SFG_SFG_TG_AUTO_3_vsync_start_auto_mask                                 (0x000000FF)
#define  SFG_SFG_TG_AUTO_3_hs_distance_auto(data)                                (0x3FFF0000&((data)<<16))
#define  SFG_SFG_TG_AUTO_3_vsync_end_auto(data)                                  (0x0000FF00&((data)<<8))
#define  SFG_SFG_TG_AUTO_3_vsync_start_auto(data)                                (0x000000FF&(data))
#define  SFG_SFG_TG_AUTO_3_get_hs_distance_auto(data)                            ((0x3FFF0000&(data))>>16)
#define  SFG_SFG_TG_AUTO_3_get_vsync_end_auto(data)                              ((0x0000FF00&(data))>>8)
#define  SFG_SFG_TG_AUTO_3_get_vsync_start_auto(data)                            (0x000000FF&(data))

#define  SFG_SFG_TG_AUTO_4                                                      0x1802D9B4
#define  SFG_SFG_TG_AUTO_4_reg_addr                                              "0xB802D9B4"
#define  SFG_SFG_TG_AUTO_4_reg                                                   0xB802D9B4
#define  SFG_SFG_TG_AUTO_4_inst_addr                                             "0x0028"
#define  set_SFG_SFG_TG_AUTO_4_reg(data)                                         (*((volatile unsigned int*)SFG_SFG_TG_AUTO_4_reg)=data)
#define  get_SFG_SFG_TG_AUTO_4_reg                                               (*((volatile unsigned int*)SFG_SFG_TG_AUTO_4_reg))
#define  SFG_SFG_TG_AUTO_4_hs_den_io_dist_auto_shift                             (16)
#define  SFG_SFG_TG_AUTO_4_hs_io_dist_auto_shift                                 (0)
#define  SFG_SFG_TG_AUTO_4_hs_den_io_dist_auto_mask                              (0x1FFF0000)
#define  SFG_SFG_TG_AUTO_4_hs_io_dist_auto_mask                                  (0x00001FFF)
#define  SFG_SFG_TG_AUTO_4_hs_den_io_dist_auto(data)                             (0x1FFF0000&((data)<<16))
#define  SFG_SFG_TG_AUTO_4_hs_io_dist_auto(data)                                 (0x00001FFF&(data))
#define  SFG_SFG_TG_AUTO_4_get_hs_den_io_dist_auto(data)                         ((0x1FFF0000&(data))>>16)
#define  SFG_SFG_TG_AUTO_4_get_hs_io_dist_auto(data)                             (0x00001FFF&(data))

#define  SFG_SFG_DUMMY                                                          0x1802D9B8
#define  SFG_SFG_DUMMY_reg_addr                                                  "0xB802D9B8"
#define  SFG_SFG_DUMMY_reg                                                       0xB802D9B8
#define  SFG_SFG_DUMMY_inst_addr                                                 "0x0029"
#define  set_SFG_SFG_DUMMY_reg(data)                                             (*((volatile unsigned int*)SFG_SFG_DUMMY_reg)=data)
#define  get_SFG_SFG_DUMMY_reg                                                   (*((volatile unsigned int*)SFG_SFG_DUMMY_reg))
#define  SFG_SFG_DUMMY_clken_lvds_shift                                          (31)
#define  SFG_SFG_DUMMY_clken_epi_shift                                           (30)
#define  SFG_SFG_DUMMY_clken_vby1_shift                                          (29)
#define  SFG_SFG_DUMMY_clken_vby1_osd_shift                                      (28)
#define  SFG_SFG_DUMMY_dummy_2_shift                                             (17)
#define  SFG_SFG_DUMMY_in_data_inv_shift                                         (16)
#define  SFG_SFG_DUMMY_clken_p2p_shift                                           (15)
#define  SFG_SFG_DUMMY_clken_isp_shift                                           (14)
#define  SFG_SFG_DUMMY_clken_lvds_mask                                           (0x80000000)
#define  SFG_SFG_DUMMY_clken_epi_mask                                            (0x40000000)
#define  SFG_SFG_DUMMY_clken_vby1_mask                                           (0x20000000)
#define  SFG_SFG_DUMMY_clken_vby1_osd_mask                                       (0x10000000)
#define  SFG_SFG_DUMMY_dummy_2_mask                                              (0x0FFE0000)
#define  SFG_SFG_DUMMY_in_data_inv_mask                                          (0x00010000)
#define  SFG_SFG_DUMMY_clken_p2p_mask                                            (0x00008000)
#define  SFG_SFG_DUMMY_clken_isp_mask                                            (0x00004000)
#define  SFG_SFG_DUMMY_clken_lvds(data)                                          (0x80000000&((data)<<31))
#define  SFG_SFG_DUMMY_clken_epi(data)                                           (0x40000000&((data)<<30))
#define  SFG_SFG_DUMMY_clken_vby1(data)                                          (0x20000000&((data)<<29))
#define  SFG_SFG_DUMMY_clken_vby1_osd(data)                                      (0x10000000&((data)<<28))
#define  SFG_SFG_DUMMY_dummy_2(data)                                             (0x0FFE0000&((data)<<17))
#define  SFG_SFG_DUMMY_in_data_inv(data)                                         (0x00010000&((data)<<16))
#define  SFG_SFG_DUMMY_clken_p2p(data)                                           (0x00008000&((data)<<15))
#define  SFG_SFG_DUMMY_clken_isp(data)                                           (0x00004000&((data)<<14))
#define  SFG_SFG_DUMMY_get_clken_lvds(data)                                      ((0x80000000&(data))>>31)
#define  SFG_SFG_DUMMY_get_clken_epi(data)                                       ((0x40000000&(data))>>30)
#define  SFG_SFG_DUMMY_get_clken_vby1(data)                                      ((0x20000000&(data))>>29)
#define  SFG_SFG_DUMMY_get_clken_vby1_osd(data)                                  ((0x10000000&(data))>>28)
#define  SFG_SFG_DUMMY_get_dummy_2(data)                                         ((0x0FFE0000&(data))>>17)
#define  SFG_SFG_DUMMY_get_in_data_inv(data)                                     ((0x00010000&(data))>>16)
#define  SFG_SFG_DUMMY_get_clken_p2p(data)                                       ((0x00008000&(data))>>15)
#define  SFG_SFG_DUMMY_get_clken_isp(data)                                       ((0x00004000&(data))>>14)

#define  SFG_SFG_BIST_MODE                                                      0x1802D9BC
#define  SFG_SFG_BIST_MODE_reg_addr                                              "0xB802D9BC"
#define  SFG_SFG_BIST_MODE_reg                                                   0xB802D9BC
#define  SFG_SFG_BIST_MODE_inst_addr                                             "0x002A"
#define  set_SFG_SFG_BIST_MODE_reg(data)                                         (*((volatile unsigned int*)SFG_SFG_BIST_MODE_reg)=data)
#define  get_SFG_SFG_BIST_MODE_reg                                               (*((volatile unsigned int*)SFG_SFG_BIST_MODE_reg))
#define  SFG_SFG_BIST_MODE_sfg_bist_mode_shift                                   (0)
#define  SFG_SFG_BIST_MODE_sfg_bist_mode_mask                                    (0x00000001)
#define  SFG_SFG_BIST_MODE_sfg_bist_mode(data)                                   (0x00000001&(data))
#define  SFG_SFG_BIST_MODE_get_sfg_bist_mode(data)                               (0x00000001&(data))

#define  SFG_SFG_BIST_DONE                                                      0x1802D9C0
#define  SFG_SFG_BIST_DONE_reg_addr                                              "0xB802D9C0"
#define  SFG_SFG_BIST_DONE_reg                                                   0xB802D9C0
#define  SFG_SFG_BIST_DONE_inst_addr                                             "0x002B"
#define  set_SFG_SFG_BIST_DONE_reg(data)                                         (*((volatile unsigned int*)SFG_SFG_BIST_DONE_reg)=data)
#define  get_SFG_SFG_BIST_DONE_reg                                               (*((volatile unsigned int*)SFG_SFG_BIST_DONE_reg))
#define  SFG_SFG_BIST_DONE_sfg_bist_done_shift                                   (0)
#define  SFG_SFG_BIST_DONE_sfg_bist_done_mask                                    (0x00000001)
#define  SFG_SFG_BIST_DONE_sfg_bist_done(data)                                   (0x00000001&(data))
#define  SFG_SFG_BIST_DONE_get_sfg_bist_done(data)                               (0x00000001&(data))

#define  SFG_SFG_BIST_FAIL_GROUP                                                0x1802D9C4
#define  SFG_SFG_BIST_FAIL_GROUP_reg_addr                                        "0xB802D9C4"
#define  SFG_SFG_BIST_FAIL_GROUP_reg                                             0xB802D9C4
#define  SFG_SFG_BIST_FAIL_GROUP_inst_addr                                       "0x002C"
#define  set_SFG_SFG_BIST_FAIL_GROUP_reg(data)                                   (*((volatile unsigned int*)SFG_SFG_BIST_FAIL_GROUP_reg)=data)
#define  get_SFG_SFG_BIST_FAIL_GROUP_reg                                         (*((volatile unsigned int*)SFG_SFG_BIST_FAIL_GROUP_reg))
#define  SFG_SFG_BIST_FAIL_GROUP_sfg_bist_fail_group_shift                       (0)
#define  SFG_SFG_BIST_FAIL_GROUP_sfg_bist_fail_group_mask                        (0x00000001)
#define  SFG_SFG_BIST_FAIL_GROUP_sfg_bist_fail_group(data)                       (0x00000001&(data))
#define  SFG_SFG_BIST_FAIL_GROUP_get_sfg_bist_fail_group(data)                   (0x00000001&(data))

#define  SFG_SFG_BIST_FAIL                                                      0x1802D9C8
#define  SFG_SFG_BIST_FAIL_reg_addr                                              "0xB802D9C8"
#define  SFG_SFG_BIST_FAIL_reg                                                   0xB802D9C8
#define  SFG_SFG_BIST_FAIL_inst_addr                                             "0x002D"
#define  set_SFG_SFG_BIST_FAIL_reg(data)                                         (*((volatile unsigned int*)SFG_SFG_BIST_FAIL_reg)=data)
#define  get_SFG_SFG_BIST_FAIL_reg                                               (*((volatile unsigned int*)SFG_SFG_BIST_FAIL_reg))
#define  SFG_SFG_BIST_FAIL_sfg_bist_fail_1_shift                                 (1)
#define  SFG_SFG_BIST_FAIL_sfg_bist_fail_0_shift                                 (0)
#define  SFG_SFG_BIST_FAIL_sfg_bist_fail_1_mask                                  (0x00000002)
#define  SFG_SFG_BIST_FAIL_sfg_bist_fail_0_mask                                  (0x00000001)
#define  SFG_SFG_BIST_FAIL_sfg_bist_fail_1(data)                                 (0x00000002&((data)<<1))
#define  SFG_SFG_BIST_FAIL_sfg_bist_fail_0(data)                                 (0x00000001&(data))
#define  SFG_SFG_BIST_FAIL_get_sfg_bist_fail_1(data)                             ((0x00000002&(data))>>1)
#define  SFG_SFG_BIST_FAIL_get_sfg_bist_fail_0(data)                             (0x00000001&(data))

#define  SFG_SFG_DRF_MODE                                                       0x1802D9CC
#define  SFG_SFG_DRF_MODE_reg_addr                                               "0xB802D9CC"
#define  SFG_SFG_DRF_MODE_reg                                                    0xB802D9CC
#define  SFG_SFG_DRF_MODE_inst_addr                                              "0x002E"
#define  set_SFG_SFG_DRF_MODE_reg(data)                                          (*((volatile unsigned int*)SFG_SFG_DRF_MODE_reg)=data)
#define  get_SFG_SFG_DRF_MODE_reg                                                (*((volatile unsigned int*)SFG_SFG_DRF_MODE_reg))
#define  SFG_SFG_DRF_MODE_sfg_drf_mode_shift                                     (0)
#define  SFG_SFG_DRF_MODE_sfg_drf_mode_mask                                      (0x00000001)
#define  SFG_SFG_DRF_MODE_sfg_drf_mode(data)                                     (0x00000001&(data))
#define  SFG_SFG_DRF_MODE_get_sfg_drf_mode(data)                                 (0x00000001&(data))

#define  SFG_SFG_DRF_RESUME                                                     0x1802D9D0
#define  SFG_SFG_DRF_RESUME_reg_addr                                             "0xB802D9D0"
#define  SFG_SFG_DRF_RESUME_reg                                                  0xB802D9D0
#define  SFG_SFG_DRF_RESUME_inst_addr                                            "0x002F"
#define  set_SFG_SFG_DRF_RESUME_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_DRF_RESUME_reg)=data)
#define  get_SFG_SFG_DRF_RESUME_reg                                              (*((volatile unsigned int*)SFG_SFG_DRF_RESUME_reg))
#define  SFG_SFG_DRF_RESUME_sfg_drf_resume_shift                                 (0)
#define  SFG_SFG_DRF_RESUME_sfg_drf_resume_mask                                  (0x00000001)
#define  SFG_SFG_DRF_RESUME_sfg_drf_resume(data)                                 (0x00000001&(data))
#define  SFG_SFG_DRF_RESUME_get_sfg_drf_resume(data)                             (0x00000001&(data))

#define  SFG_SFG_DRF_DONE                                                       0x1802D9D4
#define  SFG_SFG_DRF_DONE_reg_addr                                               "0xB802D9D4"
#define  SFG_SFG_DRF_DONE_reg                                                    0xB802D9D4
#define  SFG_SFG_DRF_DONE_inst_addr                                              "0x0030"
#define  set_SFG_SFG_DRF_DONE_reg(data)                                          (*((volatile unsigned int*)SFG_SFG_DRF_DONE_reg)=data)
#define  get_SFG_SFG_DRF_DONE_reg                                                (*((volatile unsigned int*)SFG_SFG_DRF_DONE_reg))
#define  SFG_SFG_DRF_DONE_sfg_drf_done_shift                                     (0)
#define  SFG_SFG_DRF_DONE_sfg_drf_done_mask                                      (0x00000001)
#define  SFG_SFG_DRF_DONE_sfg_drf_done(data)                                     (0x00000001&(data))
#define  SFG_SFG_DRF_DONE_get_sfg_drf_done(data)                                 (0x00000001&(data))

#define  SFG_SFG_DRF_PAUSE                                                      0x1802D9D8
#define  SFG_SFG_DRF_PAUSE_reg_addr                                              "0xB802D9D8"
#define  SFG_SFG_DRF_PAUSE_reg                                                   0xB802D9D8
#define  SFG_SFG_DRF_PAUSE_inst_addr                                             "0x0031"
#define  set_SFG_SFG_DRF_PAUSE_reg(data)                                         (*((volatile unsigned int*)SFG_SFG_DRF_PAUSE_reg)=data)
#define  get_SFG_SFG_DRF_PAUSE_reg                                               (*((volatile unsigned int*)SFG_SFG_DRF_PAUSE_reg))
#define  SFG_SFG_DRF_PAUSE_sfg_drf_pause_shift                                   (0)
#define  SFG_SFG_DRF_PAUSE_sfg_drf_pause_mask                                    (0x00000001)
#define  SFG_SFG_DRF_PAUSE_sfg_drf_pause(data)                                   (0x00000001&(data))
#define  SFG_SFG_DRF_PAUSE_get_sfg_drf_pause(data)                               (0x00000001&(data))

#define  SFG_SFG_DRF_FAIL_GROUP                                                 0x1802D9DC
#define  SFG_SFG_DRF_FAIL_GROUP_reg_addr                                         "0xB802D9DC"
#define  SFG_SFG_DRF_FAIL_GROUP_reg                                              0xB802D9DC
#define  SFG_SFG_DRF_FAIL_GROUP_inst_addr                                        "0x0032"
#define  set_SFG_SFG_DRF_FAIL_GROUP_reg(data)                                    (*((volatile unsigned int*)SFG_SFG_DRF_FAIL_GROUP_reg)=data)
#define  get_SFG_SFG_DRF_FAIL_GROUP_reg                                          (*((volatile unsigned int*)SFG_SFG_DRF_FAIL_GROUP_reg))
#define  SFG_SFG_DRF_FAIL_GROUP_sfg_drf_fail_group_shift                         (0)
#define  SFG_SFG_DRF_FAIL_GROUP_sfg_drf_fail_group_mask                          (0x00000001)
#define  SFG_SFG_DRF_FAIL_GROUP_sfg_drf_fail_group(data)                         (0x00000001&(data))
#define  SFG_SFG_DRF_FAIL_GROUP_get_sfg_drf_fail_group(data)                     (0x00000001&(data))

#define  SFG_SFG_DRF_FAI                                                        0x1802D9E0
#define  SFG_SFG_DRF_FAI_reg_addr                                                "0xB802D9E0"
#define  SFG_SFG_DRF_FAI_reg                                                     0xB802D9E0
#define  SFG_SFG_DRF_FAI_inst_addr                                               "0x0033"
#define  set_SFG_SFG_DRF_FAI_reg(data)                                           (*((volatile unsigned int*)SFG_SFG_DRF_FAI_reg)=data)
#define  get_SFG_SFG_DRF_FAI_reg                                                 (*((volatile unsigned int*)SFG_SFG_DRF_FAI_reg))
#define  SFG_SFG_DRF_FAI_sfg_drf_fail_1_shift                                    (1)
#define  SFG_SFG_DRF_FAI_sfg_drf_fail_0_shift                                    (0)
#define  SFG_SFG_DRF_FAI_sfg_drf_fail_1_mask                                     (0x00000002)
#define  SFG_SFG_DRF_FAI_sfg_drf_fail_0_mask                                     (0x00000001)
#define  SFG_SFG_DRF_FAI_sfg_drf_fail_1(data)                                    (0x00000002&((data)<<1))
#define  SFG_SFG_DRF_FAI_sfg_drf_fail_0(data)                                    (0x00000001&(data))
#define  SFG_SFG_DRF_FAI_get_sfg_drf_fail_1(data)                                ((0x00000002&(data))>>1)
#define  SFG_SFG_DRF_FAI_get_sfg_drf_fail_0(data)                                (0x00000001&(data))

#define  SFG_SFG_BIST_OTHER                                                     0x1802D9E4
#define  SFG_SFG_BIST_OTHER_reg_addr                                             "0xB802D9E4"
#define  SFG_SFG_BIST_OTHER_reg                                                  0xB802D9E4
#define  SFG_SFG_BIST_OTHER_inst_addr                                            "0x0034"
#define  set_SFG_SFG_BIST_OTHER_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_BIST_OTHER_reg)=data)
#define  get_SFG_SFG_BIST_OTHER_reg                                              (*((volatile unsigned int*)SFG_SFG_BIST_OTHER_reg))
#define  SFG_SFG_BIST_OTHER_sfg_bist_test1_shift                                 (7)
#define  SFG_SFG_BIST_OTHER_sfg_bist_ls_shift                                    (6)
#define  SFG_SFG_BIST_OTHER_sfg_bist_rm_shift                                    (2)
#define  SFG_SFG_BIST_OTHER_sfg_bist_rme_shift                                   (1)
#define  SFG_SFG_BIST_OTHER_sfg_bist_rst_n_shift                                 (0)
#define  SFG_SFG_BIST_OTHER_sfg_bist_test1_mask                                  (0x00000080)
#define  SFG_SFG_BIST_OTHER_sfg_bist_ls_mask                                     (0x00000040)
#define  SFG_SFG_BIST_OTHER_sfg_bist_rm_mask                                     (0x0000003C)
#define  SFG_SFG_BIST_OTHER_sfg_bist_rme_mask                                    (0x00000002)
#define  SFG_SFG_BIST_OTHER_sfg_bist_rst_n_mask                                  (0x00000001)
#define  SFG_SFG_BIST_OTHER_sfg_bist_test1(data)                                 (0x00000080&((data)<<7))
#define  SFG_SFG_BIST_OTHER_sfg_bist_ls(data)                                    (0x00000040&((data)<<6))
#define  SFG_SFG_BIST_OTHER_sfg_bist_rm(data)                                    (0x0000003C&((data)<<2))
#define  SFG_SFG_BIST_OTHER_sfg_bist_rme(data)                                   (0x00000002&((data)<<1))
#define  SFG_SFG_BIST_OTHER_sfg_bist_rst_n(data)                                 (0x00000001&(data))
#define  SFG_SFG_BIST_OTHER_get_sfg_bist_test1(data)                             ((0x00000080&(data))>>7)
#define  SFG_SFG_BIST_OTHER_get_sfg_bist_ls(data)                                ((0x00000040&(data))>>6)
#define  SFG_SFG_BIST_OTHER_get_sfg_bist_rm(data)                                ((0x0000003C&(data))>>2)
#define  SFG_SFG_BIST_OTHER_get_sfg_bist_rme(data)                               ((0x00000002&(data))>>1)
#define  SFG_SFG_BIST_OTHER_get_sfg_bist_rst_n(data)                             (0x00000001&(data))

#define  SFG_SFG_MID_DUMMY_0                                                    0x1802D9E8
#define  SFG_SFG_MID_DUMMY_0_reg_addr                                            "0xB802D9E8"
#define  SFG_SFG_MID_DUMMY_0_reg                                                 0xB802D9E8
#define  SFG_SFG_MID_DUMMY_0_inst_addr                                           "0x0035"
#define  set_SFG_SFG_MID_DUMMY_0_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_MID_DUMMY_0_reg)=data)
#define  get_SFG_SFG_MID_DUMMY_0_reg                                             (*((volatile unsigned int*)SFG_SFG_MID_DUMMY_0_reg))
#define  SFG_SFG_MID_DUMMY_0_seg0_mid_dummy_place_shift                          (20)
#define  SFG_SFG_MID_DUMMY_0_seg0_mid_dummy_num_shift                            (16)
#define  SFG_SFG_MID_DUMMY_0_seg1_mid_dummy_place_shift                          (4)
#define  SFG_SFG_MID_DUMMY_0_seg1_mid_dummy_num_shift                            (0)
#define  SFG_SFG_MID_DUMMY_0_seg0_mid_dummy_place_mask                           (0xFFF00000)
#define  SFG_SFG_MID_DUMMY_0_seg0_mid_dummy_num_mask                             (0x000F0000)
#define  SFG_SFG_MID_DUMMY_0_seg1_mid_dummy_place_mask                           (0x0000FFF0)
#define  SFG_SFG_MID_DUMMY_0_seg1_mid_dummy_num_mask                             (0x0000000F)
#define  SFG_SFG_MID_DUMMY_0_seg0_mid_dummy_place(data)                          (0xFFF00000&((data)<<20))
#define  SFG_SFG_MID_DUMMY_0_seg0_mid_dummy_num(data)                            (0x000F0000&((data)<<16))
#define  SFG_SFG_MID_DUMMY_0_seg1_mid_dummy_place(data)                          (0x0000FFF0&((data)<<4))
#define  SFG_SFG_MID_DUMMY_0_seg1_mid_dummy_num(data)                            (0x0000000F&(data))
#define  SFG_SFG_MID_DUMMY_0_get_seg0_mid_dummy_place(data)                      ((0xFFF00000&(data))>>20)
#define  SFG_SFG_MID_DUMMY_0_get_seg0_mid_dummy_num(data)                        ((0x000F0000&(data))>>16)
#define  SFG_SFG_MID_DUMMY_0_get_seg1_mid_dummy_place(data)                      ((0x0000FFF0&(data))>>4)
#define  SFG_SFG_MID_DUMMY_0_get_seg1_mid_dummy_num(data)                        (0x0000000F&(data))

#define  SFG_SFG_MID_DUMMY_1                                                    0x1802D9EC
#define  SFG_SFG_MID_DUMMY_1_reg_addr                                            "0xB802D9EC"
#define  SFG_SFG_MID_DUMMY_1_reg                                                 0xB802D9EC
#define  SFG_SFG_MID_DUMMY_1_inst_addr                                           "0x0036"
#define  set_SFG_SFG_MID_DUMMY_1_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_MID_DUMMY_1_reg)=data)
#define  get_SFG_SFG_MID_DUMMY_1_reg                                             (*((volatile unsigned int*)SFG_SFG_MID_DUMMY_1_reg))
#define  SFG_SFG_MID_DUMMY_1_seg2_mid_dummy_place_shift                          (20)
#define  SFG_SFG_MID_DUMMY_1_seg2_mid_dummy_num_shift                            (16)
#define  SFG_SFG_MID_DUMMY_1_seg3_mid_dummy_place_shift                          (4)
#define  SFG_SFG_MID_DUMMY_1_seg3_mid_dummy_num_shift                            (0)
#define  SFG_SFG_MID_DUMMY_1_seg2_mid_dummy_place_mask                           (0xFFF00000)
#define  SFG_SFG_MID_DUMMY_1_seg2_mid_dummy_num_mask                             (0x000F0000)
#define  SFG_SFG_MID_DUMMY_1_seg3_mid_dummy_place_mask                           (0x0000FFF0)
#define  SFG_SFG_MID_DUMMY_1_seg3_mid_dummy_num_mask                             (0x0000000F)
#define  SFG_SFG_MID_DUMMY_1_seg2_mid_dummy_place(data)                          (0xFFF00000&((data)<<20))
#define  SFG_SFG_MID_DUMMY_1_seg2_mid_dummy_num(data)                            (0x000F0000&((data)<<16))
#define  SFG_SFG_MID_DUMMY_1_seg3_mid_dummy_place(data)                          (0x0000FFF0&((data)<<4))
#define  SFG_SFG_MID_DUMMY_1_seg3_mid_dummy_num(data)                            (0x0000000F&(data))
#define  SFG_SFG_MID_DUMMY_1_get_seg2_mid_dummy_place(data)                      ((0xFFF00000&(data))>>20)
#define  SFG_SFG_MID_DUMMY_1_get_seg2_mid_dummy_num(data)                        ((0x000F0000&(data))>>16)
#define  SFG_SFG_MID_DUMMY_1_get_seg3_mid_dummy_place(data)                      ((0x0000FFF0&(data))>>4)
#define  SFG_SFG_MID_DUMMY_1_get_seg3_mid_dummy_num(data)                        (0x0000000F&(data))

#define  SFG_SFG_MID_DUMMY_2                                                    0x1802D9F0
#define  SFG_SFG_MID_DUMMY_2_reg_addr                                            "0xB802D9F0"
#define  SFG_SFG_MID_DUMMY_2_reg                                                 0xB802D9F0
#define  SFG_SFG_MID_DUMMY_2_inst_addr                                           "0x0037"
#define  set_SFG_SFG_MID_DUMMY_2_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_MID_DUMMY_2_reg)=data)
#define  get_SFG_SFG_MID_DUMMY_2_reg                                             (*((volatile unsigned int*)SFG_SFG_MID_DUMMY_2_reg))
#define  SFG_SFG_MID_DUMMY_2_seg4_mid_dummy_place_shift                          (20)
#define  SFG_SFG_MID_DUMMY_2_seg4_mid_dummy_num_shift                            (16)
#define  SFG_SFG_MID_DUMMY_2_seg5_mid_dummy_place_shift                          (4)
#define  SFG_SFG_MID_DUMMY_2_seg5_mid_dummy_num_shift                            (0)
#define  SFG_SFG_MID_DUMMY_2_seg4_mid_dummy_place_mask                           (0xFFF00000)
#define  SFG_SFG_MID_DUMMY_2_seg4_mid_dummy_num_mask                             (0x000F0000)
#define  SFG_SFG_MID_DUMMY_2_seg5_mid_dummy_place_mask                           (0x0000FFF0)
#define  SFG_SFG_MID_DUMMY_2_seg5_mid_dummy_num_mask                             (0x0000000F)
#define  SFG_SFG_MID_DUMMY_2_seg4_mid_dummy_place(data)                          (0xFFF00000&((data)<<20))
#define  SFG_SFG_MID_DUMMY_2_seg4_mid_dummy_num(data)                            (0x000F0000&((data)<<16))
#define  SFG_SFG_MID_DUMMY_2_seg5_mid_dummy_place(data)                          (0x0000FFF0&((data)<<4))
#define  SFG_SFG_MID_DUMMY_2_seg5_mid_dummy_num(data)                            (0x0000000F&(data))
#define  SFG_SFG_MID_DUMMY_2_get_seg4_mid_dummy_place(data)                      ((0xFFF00000&(data))>>20)
#define  SFG_SFG_MID_DUMMY_2_get_seg4_mid_dummy_num(data)                        ((0x000F0000&(data))>>16)
#define  SFG_SFG_MID_DUMMY_2_get_seg5_mid_dummy_place(data)                      ((0x0000FFF0&(data))>>4)
#define  SFG_SFG_MID_DUMMY_2_get_seg5_mid_dummy_num(data)                        (0x0000000F&(data))

#define  SFG_SFG_MID_DUMMY_3                                                    0x1802D9F4
#define  SFG_SFG_MID_DUMMY_3_reg_addr                                            "0xB802D9F4"
#define  SFG_SFG_MID_DUMMY_3_reg                                                 0xB802D9F4
#define  SFG_SFG_MID_DUMMY_3_inst_addr                                           "0x0038"
#define  set_SFG_SFG_MID_DUMMY_3_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_MID_DUMMY_3_reg)=data)
#define  get_SFG_SFG_MID_DUMMY_3_reg                                             (*((volatile unsigned int*)SFG_SFG_MID_DUMMY_3_reg))
#define  SFG_SFG_MID_DUMMY_3_seg6_mid_dummy_place_shift                          (20)
#define  SFG_SFG_MID_DUMMY_3_seg6_mid_dummy_num_shift                            (16)
#define  SFG_SFG_MID_DUMMY_3_seg7_mid_dummy_place_shift                          (4)
#define  SFG_SFG_MID_DUMMY_3_seg7_mid_dummy_num_shift                            (0)
#define  SFG_SFG_MID_DUMMY_3_seg6_mid_dummy_place_mask                           (0xFFF00000)
#define  SFG_SFG_MID_DUMMY_3_seg6_mid_dummy_num_mask                             (0x000F0000)
#define  SFG_SFG_MID_DUMMY_3_seg7_mid_dummy_place_mask                           (0x0000FFF0)
#define  SFG_SFG_MID_DUMMY_3_seg7_mid_dummy_num_mask                             (0x0000000F)
#define  SFG_SFG_MID_DUMMY_3_seg6_mid_dummy_place(data)                          (0xFFF00000&((data)<<20))
#define  SFG_SFG_MID_DUMMY_3_seg6_mid_dummy_num(data)                            (0x000F0000&((data)<<16))
#define  SFG_SFG_MID_DUMMY_3_seg7_mid_dummy_place(data)                          (0x0000FFF0&((data)<<4))
#define  SFG_SFG_MID_DUMMY_3_seg7_mid_dummy_num(data)                            (0x0000000F&(data))
#define  SFG_SFG_MID_DUMMY_3_get_seg6_mid_dummy_place(data)                      ((0xFFF00000&(data))>>20)
#define  SFG_SFG_MID_DUMMY_3_get_seg6_mid_dummy_num(data)                        ((0x000F0000&(data))>>16)
#define  SFG_SFG_MID_DUMMY_3_get_seg7_mid_dummy_place(data)                      ((0x0000FFF0&(data))>>4)
#define  SFG_SFG_MID_DUMMY_3_get_seg7_mid_dummy_num(data)                        (0x0000000F&(data))

#define  SFG_SFG_MID_DUMMY_8                                                    0x1802D9F8
#define  SFG_SFG_MID_DUMMY_8_reg_addr                                            "0xB802D9F8"
#define  SFG_SFG_MID_DUMMY_8_reg                                                 0xB802D9F8
#define  SFG_SFG_MID_DUMMY_8_inst_addr                                           "0x0039"
#define  set_SFG_SFG_MID_DUMMY_8_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_MID_DUMMY_8_reg)=data)
#define  get_SFG_SFG_MID_DUMMY_8_reg                                             (*((volatile unsigned int*)SFG_SFG_MID_DUMMY_8_reg))
#define  SFG_SFG_MID_DUMMY_8_seg8_mid_dummy_place_shift                          (20)
#define  SFG_SFG_MID_DUMMY_8_seg8_mid_dummy_num_shift                            (16)
#define  SFG_SFG_MID_DUMMY_8_seg9_mid_dummy_place_shift                          (4)
#define  SFG_SFG_MID_DUMMY_8_seg9_mid_dummy_num_shift                            (0)
#define  SFG_SFG_MID_DUMMY_8_seg8_mid_dummy_place_mask                           (0xFFF00000)
#define  SFG_SFG_MID_DUMMY_8_seg8_mid_dummy_num_mask                             (0x000F0000)
#define  SFG_SFG_MID_DUMMY_8_seg9_mid_dummy_place_mask                           (0x0000FFF0)
#define  SFG_SFG_MID_DUMMY_8_seg9_mid_dummy_num_mask                             (0x0000000F)
#define  SFG_SFG_MID_DUMMY_8_seg8_mid_dummy_place(data)                          (0xFFF00000&((data)<<20))
#define  SFG_SFG_MID_DUMMY_8_seg8_mid_dummy_num(data)                            (0x000F0000&((data)<<16))
#define  SFG_SFG_MID_DUMMY_8_seg9_mid_dummy_place(data)                          (0x0000FFF0&((data)<<4))
#define  SFG_SFG_MID_DUMMY_8_seg9_mid_dummy_num(data)                            (0x0000000F&(data))
#define  SFG_SFG_MID_DUMMY_8_get_seg8_mid_dummy_place(data)                      ((0xFFF00000&(data))>>20)
#define  SFG_SFG_MID_DUMMY_8_get_seg8_mid_dummy_num(data)                        ((0x000F0000&(data))>>16)
#define  SFG_SFG_MID_DUMMY_8_get_seg9_mid_dummy_place(data)                      ((0x0000FFF0&(data))>>4)
#define  SFG_SFG_MID_DUMMY_8_get_seg9_mid_dummy_num(data)                        (0x0000000F&(data))

#define  SFG_SFG_MID_DUMMY_10                                                   0x1802D9FC
#define  SFG_SFG_MID_DUMMY_10_reg_addr                                           "0xB802D9FC"
#define  SFG_SFG_MID_DUMMY_10_reg                                                0xB802D9FC
#define  SFG_SFG_MID_DUMMY_10_inst_addr                                          "0x003A"
#define  set_SFG_SFG_MID_DUMMY_10_reg(data)                                      (*((volatile unsigned int*)SFG_SFG_MID_DUMMY_10_reg)=data)
#define  get_SFG_SFG_MID_DUMMY_10_reg                                            (*((volatile unsigned int*)SFG_SFG_MID_DUMMY_10_reg))
#define  SFG_SFG_MID_DUMMY_10_seg10_mid_dummy_place_shift                        (20)
#define  SFG_SFG_MID_DUMMY_10_seg10_mid_dummy_num_shift                          (16)
#define  SFG_SFG_MID_DUMMY_10_seg11_mid_dummy_place_shift                        (4)
#define  SFG_SFG_MID_DUMMY_10_seg11_mid_dummy_num_shift                          (0)
#define  SFG_SFG_MID_DUMMY_10_seg10_mid_dummy_place_mask                         (0xFFF00000)
#define  SFG_SFG_MID_DUMMY_10_seg10_mid_dummy_num_mask                           (0x000F0000)
#define  SFG_SFG_MID_DUMMY_10_seg11_mid_dummy_place_mask                         (0x0000FFF0)
#define  SFG_SFG_MID_DUMMY_10_seg11_mid_dummy_num_mask                           (0x0000000F)
#define  SFG_SFG_MID_DUMMY_10_seg10_mid_dummy_place(data)                        (0xFFF00000&((data)<<20))
#define  SFG_SFG_MID_DUMMY_10_seg10_mid_dummy_num(data)                          (0x000F0000&((data)<<16))
#define  SFG_SFG_MID_DUMMY_10_seg11_mid_dummy_place(data)                        (0x0000FFF0&((data)<<4))
#define  SFG_SFG_MID_DUMMY_10_seg11_mid_dummy_num(data)                          (0x0000000F&(data))
#define  SFG_SFG_MID_DUMMY_10_get_seg10_mid_dummy_place(data)                    ((0xFFF00000&(data))>>20)
#define  SFG_SFG_MID_DUMMY_10_get_seg10_mid_dummy_num(data)                      ((0x000F0000&(data))>>16)
#define  SFG_SFG_MID_DUMMY_10_get_seg11_mid_dummy_place(data)                    ((0x0000FFF0&(data))>>4)
#define  SFG_SFG_MID_DUMMY_10_get_seg11_mid_dummy_num(data)                      (0x0000000F&(data))

#define  SFG_SFG_CTRL_DUM_LINE                                                  0x1802DA00
#define  SFG_SFG_CTRL_DUM_LINE_reg_addr                                          "0xB802DA00"
#define  SFG_SFG_CTRL_DUM_LINE_reg                                               0xB802DA00
#define  SFG_SFG_CTRL_DUM_LINE_inst_addr                                         "0x003B"
#define  set_SFG_SFG_CTRL_DUM_LINE_reg(data)                                     (*((volatile unsigned int*)SFG_SFG_CTRL_DUM_LINE_reg)=data)
#define  get_SFG_SFG_CTRL_DUM_LINE_reg                                           (*((volatile unsigned int*)SFG_SFG_CTRL_DUM_LINE_reg))
#define  SFG_SFG_CTRL_DUM_LINE_front_dum_num_shift                               (20)
#define  SFG_SFG_CTRL_DUM_LINE_front_dum_en_shift                                (16)
#define  SFG_SFG_CTRL_DUM_LINE_back_dum_num_shift                                (4)
#define  SFG_SFG_CTRL_DUM_LINE_back_dum_en_shift                                 (0)
#define  SFG_SFG_CTRL_DUM_LINE_front_dum_num_mask                                (0xFFF00000)
#define  SFG_SFG_CTRL_DUM_LINE_front_dum_en_mask                                 (0x00010000)
#define  SFG_SFG_CTRL_DUM_LINE_back_dum_num_mask                                 (0x0000FFF0)
#define  SFG_SFG_CTRL_DUM_LINE_back_dum_en_mask                                  (0x00000001)
#define  SFG_SFG_CTRL_DUM_LINE_front_dum_num(data)                               (0xFFF00000&((data)<<20))
#define  SFG_SFG_CTRL_DUM_LINE_front_dum_en(data)                                (0x00010000&((data)<<16))
#define  SFG_SFG_CTRL_DUM_LINE_back_dum_num(data)                                (0x0000FFF0&((data)<<4))
#define  SFG_SFG_CTRL_DUM_LINE_back_dum_en(data)                                 (0x00000001&(data))
#define  SFG_SFG_CTRL_DUM_LINE_get_front_dum_num(data)                           ((0xFFF00000&(data))>>20)
#define  SFG_SFG_CTRL_DUM_LINE_get_front_dum_en(data)                            ((0x00010000&(data))>>16)
#define  SFG_SFG_CTRL_DUM_LINE_get_back_dum_num(data)                            ((0x0000FFF0&(data))>>4)
#define  SFG_SFG_CTRL_DUM_LINE_get_back_dum_en(data)                             (0x00000001&(data))

#define  SFG_SFG_data_after_den                                                 0x1802DA08
#define  SFG_SFG_data_after_den_reg_addr                                         "0xB802DA08"
#define  SFG_SFG_data_after_den_reg                                              0xB802DA08
#define  SFG_SFG_data_after_den_inst_addr                                        "0x003C"
#define  set_SFG_SFG_data_after_den_reg(data)                                    (*((volatile unsigned int*)SFG_SFG_data_after_den_reg)=data)
#define  get_SFG_SFG_data_after_den_reg                                          (*((volatile unsigned int*)SFG_SFG_data_after_den_reg))
#define  SFG_SFG_data_after_den_ext_num_fw_mode_shift                            (31)
#define  SFG_SFG_data_after_den_ext_subpixel_mode_shift                          (24)
#define  SFG_SFG_data_after_den_active_pixel_rgb_shift                           (8)
#define  SFG_SFG_data_after_den_dummy_5_0_shift                                  (0)
#define  SFG_SFG_data_after_den_ext_num_fw_mode_mask                             (0x80000000)
#define  SFG_SFG_data_after_den_ext_subpixel_mode_mask                           (0x01000000)
#define  SFG_SFG_data_after_den_active_pixel_rgb_mask                            (0x001FFF00)
#define  SFG_SFG_data_after_den_dummy_5_0_mask                                   (0x0000003F)
#define  SFG_SFG_data_after_den_ext_num_fw_mode(data)                            (0x80000000&((data)<<31))
#define  SFG_SFG_data_after_den_ext_subpixel_mode(data)                          (0x01000000&((data)<<24))
#define  SFG_SFG_data_after_den_active_pixel_rgb(data)                           (0x001FFF00&((data)<<8))
#define  SFG_SFG_data_after_den_dummy_5_0(data)                                  (0x0000003F&(data))
#define  SFG_SFG_data_after_den_get_ext_num_fw_mode(data)                        ((0x80000000&(data))>>31)
#define  SFG_SFG_data_after_den_get_ext_subpixel_mode(data)                      ((0x01000000&(data))>>24)
#define  SFG_SFG_data_after_den_get_active_pixel_rgb(data)                       ((0x001FFF00&(data))>>8)
#define  SFG_SFG_data_after_den_get_dummy_5_0(data)                              (0x0000003F&(data))

#define  SFG_SFG_insert_subpixel_0                                              0x1802DA0C
#define  SFG_SFG_insert_subpixel_0_reg_addr                                      "0xB802DA0C"
#define  SFG_SFG_insert_subpixel_0_reg                                           0xB802DA0C
#define  SFG_SFG_insert_subpixel_0_inst_addr                                     "0x003D"
#define  set_SFG_SFG_insert_subpixel_0_reg(data)                                 (*((volatile unsigned int*)SFG_SFG_insert_subpixel_0_reg)=data)
#define  get_SFG_SFG_insert_subpixel_0_reg                                       (*((volatile unsigned int*)SFG_SFG_insert_subpixel_0_reg))
#define  SFG_SFG_insert_subpixel_0_insert_line0_r_0_shift                        (28)
#define  SFG_SFG_insert_subpixel_0_insert_line0_g_0_shift                        (24)
#define  SFG_SFG_insert_subpixel_0_insert_line0_b_0_shift                        (20)
#define  SFG_SFG_insert_subpixel_0_insert_line0_r_last_shift                     (16)
#define  SFG_SFG_insert_subpixel_0_insert_line0_g_last_shift                     (12)
#define  SFG_SFG_insert_subpixel_0_insert_line0_b_last_shift                     (8)
#define  SFG_SFG_insert_subpixel_0_gdummy_sel_shift                              (0)
#define  SFG_SFG_insert_subpixel_0_insert_line0_r_0_mask                         (0xF0000000)
#define  SFG_SFG_insert_subpixel_0_insert_line0_g_0_mask                         (0x0F000000)
#define  SFG_SFG_insert_subpixel_0_insert_line0_b_0_mask                         (0x00F00000)
#define  SFG_SFG_insert_subpixel_0_insert_line0_r_last_mask                      (0x000F0000)
#define  SFG_SFG_insert_subpixel_0_insert_line0_g_last_mask                      (0x0000F000)
#define  SFG_SFG_insert_subpixel_0_insert_line0_b_last_mask                      (0x00000F00)
#define  SFG_SFG_insert_subpixel_0_gdummy_sel_mask                               (0x00000001)
#define  SFG_SFG_insert_subpixel_0_insert_line0_r_0(data)                        (0xF0000000&((data)<<28))
#define  SFG_SFG_insert_subpixel_0_insert_line0_g_0(data)                        (0x0F000000&((data)<<24))
#define  SFG_SFG_insert_subpixel_0_insert_line0_b_0(data)                        (0x00F00000&((data)<<20))
#define  SFG_SFG_insert_subpixel_0_insert_line0_r_last(data)                     (0x000F0000&((data)<<16))
#define  SFG_SFG_insert_subpixel_0_insert_line0_g_last(data)                     (0x0000F000&((data)<<12))
#define  SFG_SFG_insert_subpixel_0_insert_line0_b_last(data)                     (0x00000F00&((data)<<8))
#define  SFG_SFG_insert_subpixel_0_gdummy_sel(data)                              (0x00000001&(data))
#define  SFG_SFG_insert_subpixel_0_get_insert_line0_r_0(data)                    ((0xF0000000&(data))>>28)
#define  SFG_SFG_insert_subpixel_0_get_insert_line0_g_0(data)                    ((0x0F000000&(data))>>24)
#define  SFG_SFG_insert_subpixel_0_get_insert_line0_b_0(data)                    ((0x00F00000&(data))>>20)
#define  SFG_SFG_insert_subpixel_0_get_insert_line0_r_last(data)                 ((0x000F0000&(data))>>16)
#define  SFG_SFG_insert_subpixel_0_get_insert_line0_g_last(data)                 ((0x0000F000&(data))>>12)
#define  SFG_SFG_insert_subpixel_0_get_insert_line0_b_last(data)                 ((0x00000F00&(data))>>8)
#define  SFG_SFG_insert_subpixel_0_get_gdummy_sel(data)                          (0x00000001&(data))

#define  SFG_SFG_insert_subpixel_1                                              0x1802DA10
#define  SFG_SFG_insert_subpixel_1_reg_addr                                      "0xB802DA10"
#define  SFG_SFG_insert_subpixel_1_reg                                           0xB802DA10
#define  SFG_SFG_insert_subpixel_1_inst_addr                                     "0x003E"
#define  set_SFG_SFG_insert_subpixel_1_reg(data)                                 (*((volatile unsigned int*)SFG_SFG_insert_subpixel_1_reg)=data)
#define  get_SFG_SFG_insert_subpixel_1_reg                                       (*((volatile unsigned int*)SFG_SFG_insert_subpixel_1_reg))
#define  SFG_SFG_insert_subpixel_1_insert_line1_r_0_shift                        (28)
#define  SFG_SFG_insert_subpixel_1_insert_line1_g_0_shift                        (24)
#define  SFG_SFG_insert_subpixel_1_insert_line1_b_0_shift                        (20)
#define  SFG_SFG_insert_subpixel_1_insert_line1_r_last_shift                     (16)
#define  SFG_SFG_insert_subpixel_1_insert_line1_g_last_shift                     (12)
#define  SFG_SFG_insert_subpixel_1_insert_line1_b_last_shift                     (8)
#define  SFG_SFG_insert_subpixel_1_insert_line1_r_0_mask                         (0xF0000000)
#define  SFG_SFG_insert_subpixel_1_insert_line1_g_0_mask                         (0x0F000000)
#define  SFG_SFG_insert_subpixel_1_insert_line1_b_0_mask                         (0x00F00000)
#define  SFG_SFG_insert_subpixel_1_insert_line1_r_last_mask                      (0x000F0000)
#define  SFG_SFG_insert_subpixel_1_insert_line1_g_last_mask                      (0x0000F000)
#define  SFG_SFG_insert_subpixel_1_insert_line1_b_last_mask                      (0x00000F00)
#define  SFG_SFG_insert_subpixel_1_insert_line1_r_0(data)                        (0xF0000000&((data)<<28))
#define  SFG_SFG_insert_subpixel_1_insert_line1_g_0(data)                        (0x0F000000&((data)<<24))
#define  SFG_SFG_insert_subpixel_1_insert_line1_b_0(data)                        (0x00F00000&((data)<<20))
#define  SFG_SFG_insert_subpixel_1_insert_line1_r_last(data)                     (0x000F0000&((data)<<16))
#define  SFG_SFG_insert_subpixel_1_insert_line1_g_last(data)                     (0x0000F000&((data)<<12))
#define  SFG_SFG_insert_subpixel_1_insert_line1_b_last(data)                     (0x00000F00&((data)<<8))
#define  SFG_SFG_insert_subpixel_1_get_insert_line1_r_0(data)                    ((0xF0000000&(data))>>28)
#define  SFG_SFG_insert_subpixel_1_get_insert_line1_g_0(data)                    ((0x0F000000&(data))>>24)
#define  SFG_SFG_insert_subpixel_1_get_insert_line1_b_0(data)                    ((0x00F00000&(data))>>20)
#define  SFG_SFG_insert_subpixel_1_get_insert_line1_r_last(data)                 ((0x000F0000&(data))>>16)
#define  SFG_SFG_insert_subpixel_1_get_insert_line1_g_last(data)                 ((0x0000F000&(data))>>12)
#define  SFG_SFG_insert_subpixel_1_get_insert_line1_b_last(data)                 ((0x00000F00&(data))>>8)

#define  SFG_SFG_insert_subpixel_2                                              0x1802DA14
#define  SFG_SFG_insert_subpixel_2_reg_addr                                      "0xB802DA14"
#define  SFG_SFG_insert_subpixel_2_reg                                           0xB802DA14
#define  SFG_SFG_insert_subpixel_2_inst_addr                                     "0x003F"
#define  set_SFG_SFG_insert_subpixel_2_reg(data)                                 (*((volatile unsigned int*)SFG_SFG_insert_subpixel_2_reg)=data)
#define  get_SFG_SFG_insert_subpixel_2_reg                                       (*((volatile unsigned int*)SFG_SFG_insert_subpixel_2_reg))
#define  SFG_SFG_insert_subpixel_2_insert_line2_r_0_shift                        (28)
#define  SFG_SFG_insert_subpixel_2_insert_line2_g_0_shift                        (24)
#define  SFG_SFG_insert_subpixel_2_insert_line2_b_0_shift                        (20)
#define  SFG_SFG_insert_subpixel_2_insert_line2_r_last_shift                     (16)
#define  SFG_SFG_insert_subpixel_2_insert_line2_g_last_shift                     (12)
#define  SFG_SFG_insert_subpixel_2_insert_line2_b_last_shift                     (8)
#define  SFG_SFG_insert_subpixel_2_insert_line2_r_0_mask                         (0xF0000000)
#define  SFG_SFG_insert_subpixel_2_insert_line2_g_0_mask                         (0x0F000000)
#define  SFG_SFG_insert_subpixel_2_insert_line2_b_0_mask                         (0x00F00000)
#define  SFG_SFG_insert_subpixel_2_insert_line2_r_last_mask                      (0x000F0000)
#define  SFG_SFG_insert_subpixel_2_insert_line2_g_last_mask                      (0x0000F000)
#define  SFG_SFG_insert_subpixel_2_insert_line2_b_last_mask                      (0x00000F00)
#define  SFG_SFG_insert_subpixel_2_insert_line2_r_0(data)                        (0xF0000000&((data)<<28))
#define  SFG_SFG_insert_subpixel_2_insert_line2_g_0(data)                        (0x0F000000&((data)<<24))
#define  SFG_SFG_insert_subpixel_2_insert_line2_b_0(data)                        (0x00F00000&((data)<<20))
#define  SFG_SFG_insert_subpixel_2_insert_line2_r_last(data)                     (0x000F0000&((data)<<16))
#define  SFG_SFG_insert_subpixel_2_insert_line2_g_last(data)                     (0x0000F000&((data)<<12))
#define  SFG_SFG_insert_subpixel_2_insert_line2_b_last(data)                     (0x00000F00&((data)<<8))
#define  SFG_SFG_insert_subpixel_2_get_insert_line2_r_0(data)                    ((0xF0000000&(data))>>28)
#define  SFG_SFG_insert_subpixel_2_get_insert_line2_g_0(data)                    ((0x0F000000&(data))>>24)
#define  SFG_SFG_insert_subpixel_2_get_insert_line2_b_0(data)                    ((0x00F00000&(data))>>20)
#define  SFG_SFG_insert_subpixel_2_get_insert_line2_r_last(data)                 ((0x000F0000&(data))>>16)
#define  SFG_SFG_insert_subpixel_2_get_insert_line2_g_last(data)                 ((0x0000F000&(data))>>12)
#define  SFG_SFG_insert_subpixel_2_get_insert_line2_b_last(data)                 ((0x00000F00&(data))>>8)

#define  SFG_SFG_insert_subpixel_3                                              0x1802DA18
#define  SFG_SFG_insert_subpixel_3_reg_addr                                      "0xB802DA18"
#define  SFG_SFG_insert_subpixel_3_reg                                           0xB802DA18
#define  SFG_SFG_insert_subpixel_3_inst_addr                                     "0x0040"
#define  set_SFG_SFG_insert_subpixel_3_reg(data)                                 (*((volatile unsigned int*)SFG_SFG_insert_subpixel_3_reg)=data)
#define  get_SFG_SFG_insert_subpixel_3_reg                                       (*((volatile unsigned int*)SFG_SFG_insert_subpixel_3_reg))
#define  SFG_SFG_insert_subpixel_3_insert_line3_r_0_shift                        (28)
#define  SFG_SFG_insert_subpixel_3_insert_line3_g_0_shift                        (24)
#define  SFG_SFG_insert_subpixel_3_insert_line3_b_0_shift                        (20)
#define  SFG_SFG_insert_subpixel_3_insert_line3_r_last_shift                     (16)
#define  SFG_SFG_insert_subpixel_3_insert_line3_g_last_shift                     (12)
#define  SFG_SFG_insert_subpixel_3_insert_line3_b_last_shift                     (8)
#define  SFG_SFG_insert_subpixel_3_insert_line3_r_0_mask                         (0xF0000000)
#define  SFG_SFG_insert_subpixel_3_insert_line3_g_0_mask                         (0x0F000000)
#define  SFG_SFG_insert_subpixel_3_insert_line3_b_0_mask                         (0x00F00000)
#define  SFG_SFG_insert_subpixel_3_insert_line3_r_last_mask                      (0x000F0000)
#define  SFG_SFG_insert_subpixel_3_insert_line3_g_last_mask                      (0x0000F000)
#define  SFG_SFG_insert_subpixel_3_insert_line3_b_last_mask                      (0x00000F00)
#define  SFG_SFG_insert_subpixel_3_insert_line3_r_0(data)                        (0xF0000000&((data)<<28))
#define  SFG_SFG_insert_subpixel_3_insert_line3_g_0(data)                        (0x0F000000&((data)<<24))
#define  SFG_SFG_insert_subpixel_3_insert_line3_b_0(data)                        (0x00F00000&((data)<<20))
#define  SFG_SFG_insert_subpixel_3_insert_line3_r_last(data)                     (0x000F0000&((data)<<16))
#define  SFG_SFG_insert_subpixel_3_insert_line3_g_last(data)                     (0x0000F000&((data)<<12))
#define  SFG_SFG_insert_subpixel_3_insert_line3_b_last(data)                     (0x00000F00&((data)<<8))
#define  SFG_SFG_insert_subpixel_3_get_insert_line3_r_0(data)                    ((0xF0000000&(data))>>28)
#define  SFG_SFG_insert_subpixel_3_get_insert_line3_g_0(data)                    ((0x0F000000&(data))>>24)
#define  SFG_SFG_insert_subpixel_3_get_insert_line3_b_0(data)                    ((0x00F00000&(data))>>20)
#define  SFG_SFG_insert_subpixel_3_get_insert_line3_r_last(data)                 ((0x000F0000&(data))>>16)
#define  SFG_SFG_insert_subpixel_3_get_insert_line3_g_last(data)                 ((0x0000F000&(data))>>12)
#define  SFG_SFG_insert_subpixel_3_get_insert_line3_b_last(data)                 ((0x00000F00&(data))>>8)

#define  SFG_SFG_ctrl_10                                                        0x1802DA1C
#define  SFG_SFG_ctrl_10_reg_addr                                                "0xB802DA1C"
#define  SFG_SFG_ctrl_10_reg                                                     0xB802DA1C
#define  SFG_SFG_ctrl_10_inst_addr                                               "0x0041"
#define  set_SFG_SFG_ctrl_10_reg(data)                                           (*((volatile unsigned int*)SFG_SFG_ctrl_10_reg)=data)
#define  get_SFG_SFG_ctrl_10_reg                                                 (*((volatile unsigned int*)SFG_SFG_ctrl_10_reg))
#define  SFG_SFG_ctrl_10_dummy_pixel_data_shift                                  (28)
#define  SFG_SFG_ctrl_10_db_sel_shift                                            (20)
#define  SFG_SFG_ctrl_10_dummy_pixel_data_mask                                   (0x10000000)
#define  SFG_SFG_ctrl_10_db_sel_mask                                             (0x00100000)
#define  SFG_SFG_ctrl_10_dummy_pixel_data(data)                                  (0x10000000&((data)<<28))
#define  SFG_SFG_ctrl_10_db_sel(data)                                            (0x00100000&((data)<<20))
#define  SFG_SFG_ctrl_10_get_dummy_pixel_data(data)                              ((0x10000000&(data))>>28)
#define  SFG_SFG_ctrl_10_get_db_sel(data)                                        ((0x00100000&(data))>>20)

#define  SFG_SFG_Last_ext_pixel_last_flip                                       0x1802DA20
#define  SFG_SFG_Last_ext_pixel_last_flip_reg_addr                               "0xB802DA20"
#define  SFG_SFG_Last_ext_pixel_last_flip_reg                                    0xB802DA20
#define  SFG_SFG_Last_ext_pixel_last_flip_inst_addr                              "0x0042"
#define  set_SFG_SFG_Last_ext_pixel_last_flip_reg(data)                          (*((volatile unsigned int*)SFG_SFG_Last_ext_pixel_last_flip_reg)=data)
#define  get_SFG_SFG_Last_ext_pixel_last_flip_reg                                (*((volatile unsigned int*)SFG_SFG_Last_ext_pixel_last_flip_reg))
#define  SFG_SFG_Last_ext_pixel_last_flip_dummy_15_0_shift                       (0)
#define  SFG_SFG_Last_ext_pixel_last_flip_dummy_15_0_mask                        (0x0000FFFF)
#define  SFG_SFG_Last_ext_pixel_last_flip_dummy_15_0(data)                       (0x0000FFFF&(data))
#define  SFG_SFG_Last_ext_pixel_last_flip_get_dummy_15_0(data)                   (0x0000FFFF&(data))

#define  SFG_SFG_CTRL_14                                                        0x1802DA24
#define  SFG_SFG_CTRL_14_reg_addr                                                "0xB802DA24"
#define  SFG_SFG_CTRL_14_reg                                                     0xB802DA24
#define  SFG_SFG_CTRL_14_inst_addr                                               "0x0043"
#define  set_SFG_SFG_CTRL_14_reg(data)                                           (*((volatile unsigned int*)SFG_SFG_CTRL_14_reg)=data)
#define  get_SFG_SFG_CTRL_14_reg                                                 (*((volatile unsigned int*)SFG_SFG_CTRL_14_reg))
#define  SFG_SFG_CTRL_14_back_gray_sel_7_shift                                   (30)
#define  SFG_SFG_CTRL_14_back_gray_sel_6_shift                                   (28)
#define  SFG_SFG_CTRL_14_back_gray_sel_5_shift                                   (26)
#define  SFG_SFG_CTRL_14_back_gray_sel_4_shift                                   (24)
#define  SFG_SFG_CTRL_14_back_gray_sel_3_shift                                   (22)
#define  SFG_SFG_CTRL_14_back_gray_sel_2_shift                                   (20)
#define  SFG_SFG_CTRL_14_back_gray_sel_1_shift                                   (18)
#define  SFG_SFG_CTRL_14_back_gray_sel_0_shift                                   (16)
#define  SFG_SFG_CTRL_14_front_gray_sel_7_shift                                  (14)
#define  SFG_SFG_CTRL_14_front_gray_sel_6_shift                                  (12)
#define  SFG_SFG_CTRL_14_front_gray_sel_5_shift                                  (10)
#define  SFG_SFG_CTRL_14_front_gray_sel_4_shift                                  (8)
#define  SFG_SFG_CTRL_14_front_gray_sel_3_shift                                  (6)
#define  SFG_SFG_CTRL_14_front_gray_sel_2_shift                                  (4)
#define  SFG_SFG_CTRL_14_front_gray_sel_1_shift                                  (2)
#define  SFG_SFG_CTRL_14_front_gray_sel_0_shift                                  (0)
#define  SFG_SFG_CTRL_14_back_gray_sel_7_mask                                    (0xC0000000)
#define  SFG_SFG_CTRL_14_back_gray_sel_6_mask                                    (0x30000000)
#define  SFG_SFG_CTRL_14_back_gray_sel_5_mask                                    (0x0C000000)
#define  SFG_SFG_CTRL_14_back_gray_sel_4_mask                                    (0x03000000)
#define  SFG_SFG_CTRL_14_back_gray_sel_3_mask                                    (0x00C00000)
#define  SFG_SFG_CTRL_14_back_gray_sel_2_mask                                    (0x00300000)
#define  SFG_SFG_CTRL_14_back_gray_sel_1_mask                                    (0x000C0000)
#define  SFG_SFG_CTRL_14_back_gray_sel_0_mask                                    (0x00030000)
#define  SFG_SFG_CTRL_14_front_gray_sel_7_mask                                   (0x0000C000)
#define  SFG_SFG_CTRL_14_front_gray_sel_6_mask                                   (0x00003000)
#define  SFG_SFG_CTRL_14_front_gray_sel_5_mask                                   (0x00000C00)
#define  SFG_SFG_CTRL_14_front_gray_sel_4_mask                                   (0x00000300)
#define  SFG_SFG_CTRL_14_front_gray_sel_3_mask                                   (0x000000C0)
#define  SFG_SFG_CTRL_14_front_gray_sel_2_mask                                   (0x00000030)
#define  SFG_SFG_CTRL_14_front_gray_sel_1_mask                                   (0x0000000C)
#define  SFG_SFG_CTRL_14_front_gray_sel_0_mask                                   (0x00000003)
#define  SFG_SFG_CTRL_14_back_gray_sel_7(data)                                   (0xC0000000&((data)<<30))
#define  SFG_SFG_CTRL_14_back_gray_sel_6(data)                                   (0x30000000&((data)<<28))
#define  SFG_SFG_CTRL_14_back_gray_sel_5(data)                                   (0x0C000000&((data)<<26))
#define  SFG_SFG_CTRL_14_back_gray_sel_4(data)                                   (0x03000000&((data)<<24))
#define  SFG_SFG_CTRL_14_back_gray_sel_3(data)                                   (0x00C00000&((data)<<22))
#define  SFG_SFG_CTRL_14_back_gray_sel_2(data)                                   (0x00300000&((data)<<20))
#define  SFG_SFG_CTRL_14_back_gray_sel_1(data)                                   (0x000C0000&((data)<<18))
#define  SFG_SFG_CTRL_14_back_gray_sel_0(data)                                   (0x00030000&((data)<<16))
#define  SFG_SFG_CTRL_14_front_gray_sel_7(data)                                  (0x0000C000&((data)<<14))
#define  SFG_SFG_CTRL_14_front_gray_sel_6(data)                                  (0x00003000&((data)<<12))
#define  SFG_SFG_CTRL_14_front_gray_sel_5(data)                                  (0x00000C00&((data)<<10))
#define  SFG_SFG_CTRL_14_front_gray_sel_4(data)                                  (0x00000300&((data)<<8))
#define  SFG_SFG_CTRL_14_front_gray_sel_3(data)                                  (0x000000C0&((data)<<6))
#define  SFG_SFG_CTRL_14_front_gray_sel_2(data)                                  (0x00000030&((data)<<4))
#define  SFG_SFG_CTRL_14_front_gray_sel_1(data)                                  (0x0000000C&((data)<<2))
#define  SFG_SFG_CTRL_14_front_gray_sel_0(data)                                  (0x00000003&(data))
#define  SFG_SFG_CTRL_14_get_back_gray_sel_7(data)                               ((0xC0000000&(data))>>30)
#define  SFG_SFG_CTRL_14_get_back_gray_sel_6(data)                               ((0x30000000&(data))>>28)
#define  SFG_SFG_CTRL_14_get_back_gray_sel_5(data)                               ((0x0C000000&(data))>>26)
#define  SFG_SFG_CTRL_14_get_back_gray_sel_4(data)                               ((0x03000000&(data))>>24)
#define  SFG_SFG_CTRL_14_get_back_gray_sel_3(data)                               ((0x00C00000&(data))>>22)
#define  SFG_SFG_CTRL_14_get_back_gray_sel_2(data)                               ((0x00300000&(data))>>20)
#define  SFG_SFG_CTRL_14_get_back_gray_sel_1(data)                               ((0x000C0000&(data))>>18)
#define  SFG_SFG_CTRL_14_get_back_gray_sel_0(data)                               ((0x00030000&(data))>>16)
#define  SFG_SFG_CTRL_14_get_front_gray_sel_7(data)                              ((0x0000C000&(data))>>14)
#define  SFG_SFG_CTRL_14_get_front_gray_sel_6(data)                              ((0x00003000&(data))>>12)
#define  SFG_SFG_CTRL_14_get_front_gray_sel_5(data)                              ((0x00000C00&(data))>>10)
#define  SFG_SFG_CTRL_14_get_front_gray_sel_4(data)                              ((0x00000300&(data))>>8)
#define  SFG_SFG_CTRL_14_get_front_gray_sel_3(data)                              ((0x000000C0&(data))>>6)
#define  SFG_SFG_CTRL_14_get_front_gray_sel_2(data)                              ((0x00000030&(data))>>4)
#define  SFG_SFG_CTRL_14_get_front_gray_sel_1(data)                              ((0x0000000C&(data))>>2)
#define  SFG_SFG_CTRL_14_get_front_gray_sel_0(data)                              (0x00000003&(data))

#define  SFG_SFG_CTRL_15                                                        0x1802DA28
#define  SFG_SFG_CTRL_15_reg_addr                                                "0xB802DA28"
#define  SFG_SFG_CTRL_15_reg                                                     0xB802DA28
#define  SFG_SFG_CTRL_15_inst_addr                                               "0x0044"
#define  set_SFG_SFG_CTRL_15_reg(data)                                           (*((volatile unsigned int*)SFG_SFG_CTRL_15_reg)=data)
#define  get_SFG_SFG_CTRL_15_reg                                                 (*((volatile unsigned int*)SFG_SFG_CTRL_15_reg))
#define  SFG_SFG_CTRL_15_gray_dum_line_data_3_shift                              (0)
#define  SFG_SFG_CTRL_15_gray_dum_line_data_3_mask                               (0x3FFFFFFF)
#define  SFG_SFG_CTRL_15_gray_dum_line_data_3(data)                              (0x3FFFFFFF&(data))
#define  SFG_SFG_CTRL_15_get_gray_dum_line_data_3(data)                          (0x3FFFFFFF&(data))

#define  SFG_SFG_MID_DUMMY_11                                                   0x1802DB10
#define  SFG_SFG_MID_DUMMY_11_reg_addr                                           "0xB802DB10"
#define  SFG_SFG_MID_DUMMY_11_reg                                                0xB802DB10
#define  SFG_SFG_MID_DUMMY_11_inst_addr                                          "0x0045"
#define  set_SFG_SFG_MID_DUMMY_11_reg(data)                                      (*((volatile unsigned int*)SFG_SFG_MID_DUMMY_11_reg)=data)
#define  get_SFG_SFG_MID_DUMMY_11_reg                                            (*((volatile unsigned int*)SFG_SFG_MID_DUMMY_11_reg))
#define  SFG_SFG_MID_DUMMY_11_seg12_mid_dummy_place_shift                        (20)
#define  SFG_SFG_MID_DUMMY_11_seg12_mid_dummy_num_shift                          (16)
#define  SFG_SFG_MID_DUMMY_11_seg13_mid_dummy_place_shift                        (4)
#define  SFG_SFG_MID_DUMMY_11_seg13_mid_dummy_num_shift                          (0)
#define  SFG_SFG_MID_DUMMY_11_seg12_mid_dummy_place_mask                         (0xFFF00000)
#define  SFG_SFG_MID_DUMMY_11_seg12_mid_dummy_num_mask                           (0x000F0000)
#define  SFG_SFG_MID_DUMMY_11_seg13_mid_dummy_place_mask                         (0x0000FFF0)
#define  SFG_SFG_MID_DUMMY_11_seg13_mid_dummy_num_mask                           (0x0000000F)
#define  SFG_SFG_MID_DUMMY_11_seg12_mid_dummy_place(data)                        (0xFFF00000&((data)<<20))
#define  SFG_SFG_MID_DUMMY_11_seg12_mid_dummy_num(data)                          (0x000F0000&((data)<<16))
#define  SFG_SFG_MID_DUMMY_11_seg13_mid_dummy_place(data)                        (0x0000FFF0&((data)<<4))
#define  SFG_SFG_MID_DUMMY_11_seg13_mid_dummy_num(data)                          (0x0000000F&(data))
#define  SFG_SFG_MID_DUMMY_11_get_seg12_mid_dummy_place(data)                    ((0xFFF00000&(data))>>20)
#define  SFG_SFG_MID_DUMMY_11_get_seg12_mid_dummy_num(data)                      ((0x000F0000&(data))>>16)
#define  SFG_SFG_MID_DUMMY_11_get_seg13_mid_dummy_place(data)                    ((0x0000FFF0&(data))>>4)
#define  SFG_SFG_MID_DUMMY_11_get_seg13_mid_dummy_num(data)                      (0x0000000F&(data))

#define  SFG_SFG_MID_DUMMY_12                                                   0x1802DB14
#define  SFG_SFG_MID_DUMMY_12_reg_addr                                           "0xB802DB14"
#define  SFG_SFG_MID_DUMMY_12_reg                                                0xB802DB14
#define  SFG_SFG_MID_DUMMY_12_inst_addr                                          "0x0046"
#define  set_SFG_SFG_MID_DUMMY_12_reg(data)                                      (*((volatile unsigned int*)SFG_SFG_MID_DUMMY_12_reg)=data)
#define  get_SFG_SFG_MID_DUMMY_12_reg                                            (*((volatile unsigned int*)SFG_SFG_MID_DUMMY_12_reg))
#define  SFG_SFG_MID_DUMMY_12_seg14_mid_dummy_place_shift                        (20)
#define  SFG_SFG_MID_DUMMY_12_seg14_mid_dummy_num_shift                          (16)
#define  SFG_SFG_MID_DUMMY_12_seg15_mid_dummy_place_shift                        (4)
#define  SFG_SFG_MID_DUMMY_12_seg15_mid_dummy_num_shift                          (0)
#define  SFG_SFG_MID_DUMMY_12_seg14_mid_dummy_place_mask                         (0xFFF00000)
#define  SFG_SFG_MID_DUMMY_12_seg14_mid_dummy_num_mask                           (0x000F0000)
#define  SFG_SFG_MID_DUMMY_12_seg15_mid_dummy_place_mask                         (0x0000FFF0)
#define  SFG_SFG_MID_DUMMY_12_seg15_mid_dummy_num_mask                           (0x0000000F)
#define  SFG_SFG_MID_DUMMY_12_seg14_mid_dummy_place(data)                        (0xFFF00000&((data)<<20))
#define  SFG_SFG_MID_DUMMY_12_seg14_mid_dummy_num(data)                          (0x000F0000&((data)<<16))
#define  SFG_SFG_MID_DUMMY_12_seg15_mid_dummy_place(data)                        (0x0000FFF0&((data)<<4))
#define  SFG_SFG_MID_DUMMY_12_seg15_mid_dummy_num(data)                          (0x0000000F&(data))
#define  SFG_SFG_MID_DUMMY_12_get_seg14_mid_dummy_place(data)                    ((0xFFF00000&(data))>>20)
#define  SFG_SFG_MID_DUMMY_12_get_seg14_mid_dummy_num(data)                      ((0x000F0000&(data))>>16)
#define  SFG_SFG_MID_DUMMY_12_get_seg15_mid_dummy_place(data)                    ((0x0000FFF0&(data))>>4)
#define  SFG_SFG_MID_DUMMY_12_get_seg15_mid_dummy_num(data)                      (0x0000000F&(data))

#define  SFG_SFG_debug                                                          0x1802DA84
#define  SFG_SFG_debug_reg_addr                                                  "0xB802DA84"
#define  SFG_SFG_debug_reg                                                       0xB802DA84
#define  SFG_SFG_debug_inst_addr                                                 "0x0047"
#define  set_SFG_SFG_debug_reg(data)                                             (*((volatile unsigned int*)SFG_SFG_debug_reg)=data)
#define  get_SFG_SFG_debug_reg                                                   (*((volatile unsigned int*)SFG_SFG_debug_reg))
#define  SFG_SFG_debug_sfg_debug_clk_div_shift                                   (2)
#define  SFG_SFG_debug_sfg_debug_clk_div_mask                                    (0x0000000C)
#define  SFG_SFG_debug_sfg_debug_clk_div(data)                                   (0x0000000C&((data)<<2))
#define  SFG_SFG_debug_get_sfg_debug_clk_div(data)                               ((0x0000000C&(data))>>2)

#define  SFG_SFG_data_capture_vh                                                0x1802DA88
#define  SFG_SFG_data_capture_vh_reg_addr                                        "0xB802DA88"
#define  SFG_SFG_data_capture_vh_reg                                             0xB802DA88
#define  SFG_SFG_data_capture_vh_inst_addr                                       "0x0048"
#define  set_SFG_SFG_data_capture_vh_reg(data)                                   (*((volatile unsigned int*)SFG_SFG_data_capture_vh_reg)=data)
#define  get_SFG_SFG_data_capture_vh_reg                                         (*((volatile unsigned int*)SFG_SFG_data_capture_vh_reg))
#define  SFG_SFG_data_capture_vh_data_capture_v_shift                            (16)
#define  SFG_SFG_data_capture_vh_data_capture_h_shift                            (0)
#define  SFG_SFG_data_capture_vh_data_capture_v_mask                             (0x3FFF0000)
#define  SFG_SFG_data_capture_vh_data_capture_h_mask                             (0x00003FFF)
#define  SFG_SFG_data_capture_vh_data_capture_v(data)                            (0x3FFF0000&((data)<<16))
#define  SFG_SFG_data_capture_vh_data_capture_h(data)                            (0x00003FFF&(data))
#define  SFG_SFG_data_capture_vh_get_data_capture_v(data)                        ((0x3FFF0000&(data))>>16)
#define  SFG_SFG_data_capture_vh_get_data_capture_h(data)                        (0x00003FFF&(data))

#define  SFG_SFG_data_capture_src                                               0x1802DA8C
#define  SFG_SFG_data_capture_src_reg_addr                                       "0xB802DA8C"
#define  SFG_SFG_data_capture_src_reg                                            0xB802DA8C
#define  SFG_SFG_data_capture_src_inst_addr                                      "0x0049"
#define  set_SFG_SFG_data_capture_src_reg(data)                                  (*((volatile unsigned int*)SFG_SFG_data_capture_src_reg)=data)
#define  get_SFG_SFG_data_capture_src_reg                                        (*((volatile unsigned int*)SFG_SFG_data_capture_src_reg))
#define  SFG_SFG_data_capture_src_data_capture_src_shift                         (28)
#define  SFG_SFG_data_capture_src_data_capture_apply_shift                       (5)
#define  SFG_SFG_data_capture_src_data_capture_en_shift                          (4)
#define  SFG_SFG_data_capture_src_data_capture_port_shift                        (0)
#define  SFG_SFG_data_capture_src_data_capture_src_mask                          (0x30000000)
#define  SFG_SFG_data_capture_src_data_capture_apply_mask                        (0x00000020)
#define  SFG_SFG_data_capture_src_data_capture_en_mask                           (0x00000010)
#define  SFG_SFG_data_capture_src_data_capture_port_mask                         (0x0000000F)
#define  SFG_SFG_data_capture_src_data_capture_src(data)                         (0x30000000&((data)<<28))
#define  SFG_SFG_data_capture_src_data_capture_apply(data)                       (0x00000020&((data)<<5))
#define  SFG_SFG_data_capture_src_data_capture_en(data)                          (0x00000010&((data)<<4))
#define  SFG_SFG_data_capture_src_data_capture_port(data)                        (0x0000000F&(data))
#define  SFG_SFG_data_capture_src_get_data_capture_src(data)                     ((0x30000000&(data))>>28)
#define  SFG_SFG_data_capture_src_get_data_capture_apply(data)                   ((0x00000020&(data))>>5)
#define  SFG_SFG_data_capture_src_get_data_capture_en(data)                      ((0x00000010&(data))>>4)
#define  SFG_SFG_data_capture_src_get_data_capture_port(data)                    (0x0000000F&(data))

#define  SFG_SFG_data_capture_read_data                                         0x1802DA90
#define  SFG_SFG_data_capture_read_data_reg_addr                                 "0xB802DA90"
#define  SFG_SFG_data_capture_read_data_reg                                      0xB802DA90
#define  SFG_SFG_data_capture_read_data_inst_addr                                "0x004A"
#define  set_SFG_SFG_data_capture_read_data_reg(data)                            (*((volatile unsigned int*)SFG_SFG_data_capture_read_data_reg)=data)
#define  get_SFG_SFG_data_capture_read_data_reg                                  (*((volatile unsigned int*)SFG_SFG_data_capture_read_data_reg))
#define  SFG_SFG_data_capture_read_data_data_capture_data_shift                  (0)
#define  SFG_SFG_data_capture_read_data_data_capture_data_mask                   (0xFFFFFFFF)
#define  SFG_SFG_data_capture_read_data_data_capture_data(data)                  (0xFFFFFFFF&(data))
#define  SFG_SFG_data_capture_read_data_get_data_capture_data(data)              (0xFFFFFFFF&(data))

#define  SFG_SFG_last_seg_0                                                     0x1802DA94
#define  SFG_SFG_last_seg_0_reg_addr                                             "0xB802DA94"
#define  SFG_SFG_last_seg_0_reg                                                  0xB802DA94
#define  SFG_SFG_last_seg_0_inst_addr                                            "0x004B"
#define  set_SFG_SFG_last_seg_0_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_last_seg_0_reg)=data)
#define  get_SFG_SFG_last_seg_0_reg                                              (*((volatile unsigned int*)SFG_SFG_last_seg_0_reg))
#define  SFG_SFG_last_seg_0_last_seg_start_res_line0_shift                       (29)
#define  SFG_SFG_last_seg_0_last_seg_start_line0_shift                           (16)
#define  SFG_SFG_last_seg_0_last_seg_start_res_line1_shift                       (13)
#define  SFG_SFG_last_seg_0_last_seg_start_line1_shift                           (0)
#define  SFG_SFG_last_seg_0_last_seg_start_res_line0_mask                        (0xE0000000)
#define  SFG_SFG_last_seg_0_last_seg_start_line0_mask                            (0x1FFF0000)
#define  SFG_SFG_last_seg_0_last_seg_start_res_line1_mask                        (0x0000E000)
#define  SFG_SFG_last_seg_0_last_seg_start_line1_mask                            (0x00001FFF)
#define  SFG_SFG_last_seg_0_last_seg_start_res_line0(data)                       (0xE0000000&((data)<<29))
#define  SFG_SFG_last_seg_0_last_seg_start_line0(data)                           (0x1FFF0000&((data)<<16))
#define  SFG_SFG_last_seg_0_last_seg_start_res_line1(data)                       (0x0000E000&((data)<<13))
#define  SFG_SFG_last_seg_0_last_seg_start_line1(data)                           (0x00001FFF&(data))
#define  SFG_SFG_last_seg_0_get_last_seg_start_res_line0(data)                   ((0xE0000000&(data))>>29)
#define  SFG_SFG_last_seg_0_get_last_seg_start_line0(data)                       ((0x1FFF0000&(data))>>16)
#define  SFG_SFG_last_seg_0_get_last_seg_start_res_line1(data)                   ((0x0000E000&(data))>>13)
#define  SFG_SFG_last_seg_0_get_last_seg_start_line1(data)                       (0x00001FFF&(data))

#define  SFG_SFG_last_seg_1                                                     0x1802DA98
#define  SFG_SFG_last_seg_1_reg_addr                                             "0xB802DA98"
#define  SFG_SFG_last_seg_1_reg                                                  0xB802DA98
#define  SFG_SFG_last_seg_1_inst_addr                                            "0x004C"
#define  set_SFG_SFG_last_seg_1_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_last_seg_1_reg)=data)
#define  get_SFG_SFG_last_seg_1_reg                                              (*((volatile unsigned int*)SFG_SFG_last_seg_1_reg))
#define  SFG_SFG_last_seg_1_last_seg_start_res_line2_shift                       (29)
#define  SFG_SFG_last_seg_1_last_seg_start_line2_shift                           (16)
#define  SFG_SFG_last_seg_1_last_seg_start_res_line3_shift                       (13)
#define  SFG_SFG_last_seg_1_last_seg_start_line3_shift                           (0)
#define  SFG_SFG_last_seg_1_last_seg_start_res_line2_mask                        (0xE0000000)
#define  SFG_SFG_last_seg_1_last_seg_start_line2_mask                            (0x1FFF0000)
#define  SFG_SFG_last_seg_1_last_seg_start_res_line3_mask                        (0x0000E000)
#define  SFG_SFG_last_seg_1_last_seg_start_line3_mask                            (0x00001FFF)
#define  SFG_SFG_last_seg_1_last_seg_start_res_line2(data)                       (0xE0000000&((data)<<29))
#define  SFG_SFG_last_seg_1_last_seg_start_line2(data)                           (0x1FFF0000&((data)<<16))
#define  SFG_SFG_last_seg_1_last_seg_start_res_line3(data)                       (0x0000E000&((data)<<13))
#define  SFG_SFG_last_seg_1_last_seg_start_line3(data)                           (0x00001FFF&(data))
#define  SFG_SFG_last_seg_1_get_last_seg_start_res_line2(data)                   ((0xE0000000&(data))>>29)
#define  SFG_SFG_last_seg_1_get_last_seg_start_line2(data)                       ((0x1FFF0000&(data))>>16)
#define  SFG_SFG_last_seg_1_get_last_seg_start_res_line3(data)                   ((0x0000E000&(data))>>13)
#define  SFG_SFG_last_seg_1_get_last_seg_start_line3(data)                       (0x00001FFF&(data))

#define  SFG_SFG_DRD_CTRL_0                                                     0x1802DAA0
#define  SFG_SFG_DRD_CTRL_0_reg_addr                                             "0xB802DAA0"
#define  SFG_SFG_DRD_CTRL_0_reg                                                  0xB802DAA0
#define  SFG_SFG_DRD_CTRL_0_inst_addr                                            "0x004D"
#define  set_SFG_SFG_DRD_CTRL_0_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_0_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_0_reg                                              (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_0_reg))
#define  SFG_SFG_DRD_CTRL_0_drd_r_0_line0_shift                                  (24)
#define  SFG_SFG_DRD_CTRL_0_drd_r_0_line1_shift                                  (16)
#define  SFG_SFG_DRD_CTRL_0_drd_r_0_line2_shift                                  (8)
#define  SFG_SFG_DRD_CTRL_0_drd_r_0_line3_shift                                  (0)
#define  SFG_SFG_DRD_CTRL_0_drd_r_0_line0_mask                                   (0x1F000000)
#define  SFG_SFG_DRD_CTRL_0_drd_r_0_line1_mask                                   (0x001F0000)
#define  SFG_SFG_DRD_CTRL_0_drd_r_0_line2_mask                                   (0x00001F00)
#define  SFG_SFG_DRD_CTRL_0_drd_r_0_line3_mask                                   (0x0000001F)
#define  SFG_SFG_DRD_CTRL_0_drd_r_0_line0(data)                                  (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_0_drd_r_0_line1(data)                                  (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_0_drd_r_0_line2(data)                                  (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_0_drd_r_0_line3(data)                                  (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_0_get_drd_r_0_line0(data)                              ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_0_get_drd_r_0_line1(data)                              ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_0_get_drd_r_0_line2(data)                              ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_0_get_drd_r_0_line3(data)                              (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_1                                                     0x1802DAA4
#define  SFG_SFG_DRD_CTRL_1_reg_addr                                             "0xB802DAA4"
#define  SFG_SFG_DRD_CTRL_1_reg                                                  0xB802DAA4
#define  SFG_SFG_DRD_CTRL_1_inst_addr                                            "0x004E"
#define  set_SFG_SFG_DRD_CTRL_1_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_1_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_1_reg                                              (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_1_reg))
#define  SFG_SFG_DRD_CTRL_1_drd_g_0_line0_shift                                  (24)
#define  SFG_SFG_DRD_CTRL_1_drd_g_0_line1_shift                                  (16)
#define  SFG_SFG_DRD_CTRL_1_drd_g_0_line2_shift                                  (8)
#define  SFG_SFG_DRD_CTRL_1_drd_g_0_line3_shift                                  (0)
#define  SFG_SFG_DRD_CTRL_1_drd_g_0_line0_mask                                   (0x1F000000)
#define  SFG_SFG_DRD_CTRL_1_drd_g_0_line1_mask                                   (0x001F0000)
#define  SFG_SFG_DRD_CTRL_1_drd_g_0_line2_mask                                   (0x00001F00)
#define  SFG_SFG_DRD_CTRL_1_drd_g_0_line3_mask                                   (0x0000001F)
#define  SFG_SFG_DRD_CTRL_1_drd_g_0_line0(data)                                  (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_1_drd_g_0_line1(data)                                  (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_1_drd_g_0_line2(data)                                  (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_1_drd_g_0_line3(data)                                  (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_1_get_drd_g_0_line0(data)                              ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_1_get_drd_g_0_line1(data)                              ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_1_get_drd_g_0_line2(data)                              ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_1_get_drd_g_0_line3(data)                              (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_2                                                     0x1802DAA8
#define  SFG_SFG_DRD_CTRL_2_reg_addr                                             "0xB802DAA8"
#define  SFG_SFG_DRD_CTRL_2_reg                                                  0xB802DAA8
#define  SFG_SFG_DRD_CTRL_2_inst_addr                                            "0x004F"
#define  set_SFG_SFG_DRD_CTRL_2_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_2_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_2_reg                                              (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_2_reg))
#define  SFG_SFG_DRD_CTRL_2_drd_b_0_line0_shift                                  (24)
#define  SFG_SFG_DRD_CTRL_2_drd_b_0_line1_shift                                  (16)
#define  SFG_SFG_DRD_CTRL_2_drd_b_0_line2_shift                                  (8)
#define  SFG_SFG_DRD_CTRL_2_drd_b_0_line3_shift                                  (0)
#define  SFG_SFG_DRD_CTRL_2_drd_b_0_line0_mask                                   (0x1F000000)
#define  SFG_SFG_DRD_CTRL_2_drd_b_0_line1_mask                                   (0x001F0000)
#define  SFG_SFG_DRD_CTRL_2_drd_b_0_line2_mask                                   (0x00001F00)
#define  SFG_SFG_DRD_CTRL_2_drd_b_0_line3_mask                                   (0x0000001F)
#define  SFG_SFG_DRD_CTRL_2_drd_b_0_line0(data)                                  (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_2_drd_b_0_line1(data)                                  (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_2_drd_b_0_line2(data)                                  (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_2_drd_b_0_line3(data)                                  (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_2_get_drd_b_0_line0(data)                              ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_2_get_drd_b_0_line1(data)                              ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_2_get_drd_b_0_line2(data)                              ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_2_get_drd_b_0_line3(data)                              (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_6                                                     0x1802DAAC
#define  SFG_SFG_DRD_CTRL_6_reg_addr                                             "0xB802DAAC"
#define  SFG_SFG_DRD_CTRL_6_reg                                                  0xB802DAAC
#define  SFG_SFG_DRD_CTRL_6_inst_addr                                            "0x0050"
#define  set_SFG_SFG_DRD_CTRL_6_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_6_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_6_reg                                              (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_6_reg))
#define  SFG_SFG_DRD_CTRL_6_drd_r_2_line0_shift                                  (24)
#define  SFG_SFG_DRD_CTRL_6_drd_r_2_line1_shift                                  (16)
#define  SFG_SFG_DRD_CTRL_6_drd_r_2_line2_shift                                  (8)
#define  SFG_SFG_DRD_CTRL_6_drd_r_2_line3_shift                                  (0)
#define  SFG_SFG_DRD_CTRL_6_drd_r_2_line0_mask                                   (0x1F000000)
#define  SFG_SFG_DRD_CTRL_6_drd_r_2_line1_mask                                   (0x001F0000)
#define  SFG_SFG_DRD_CTRL_6_drd_r_2_line2_mask                                   (0x00001F00)
#define  SFG_SFG_DRD_CTRL_6_drd_r_2_line3_mask                                   (0x0000001F)
#define  SFG_SFG_DRD_CTRL_6_drd_r_2_line0(data)                                  (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_6_drd_r_2_line1(data)                                  (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_6_drd_r_2_line2(data)                                  (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_6_drd_r_2_line3(data)                                  (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_6_get_drd_r_2_line0(data)                              ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_6_get_drd_r_2_line1(data)                              ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_6_get_drd_r_2_line2(data)                              ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_6_get_drd_r_2_line3(data)                              (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_7                                                     0x1802DAB0
#define  SFG_SFG_DRD_CTRL_7_reg_addr                                             "0xB802DAB0"
#define  SFG_SFG_DRD_CTRL_7_reg                                                  0xB802DAB0
#define  SFG_SFG_DRD_CTRL_7_inst_addr                                            "0x0051"
#define  set_SFG_SFG_DRD_CTRL_7_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_7_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_7_reg                                              (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_7_reg))
#define  SFG_SFG_DRD_CTRL_7_drd_g_2_line0_shift                                  (24)
#define  SFG_SFG_DRD_CTRL_7_drd_g_2_line1_shift                                  (16)
#define  SFG_SFG_DRD_CTRL_7_drd_g_2_line2_shift                                  (8)
#define  SFG_SFG_DRD_CTRL_7_drd_g_2_line3_shift                                  (0)
#define  SFG_SFG_DRD_CTRL_7_drd_g_2_line0_mask                                   (0x1F000000)
#define  SFG_SFG_DRD_CTRL_7_drd_g_2_line1_mask                                   (0x001F0000)
#define  SFG_SFG_DRD_CTRL_7_drd_g_2_line2_mask                                   (0x00001F00)
#define  SFG_SFG_DRD_CTRL_7_drd_g_2_line3_mask                                   (0x0000001F)
#define  SFG_SFG_DRD_CTRL_7_drd_g_2_line0(data)                                  (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_7_drd_g_2_line1(data)                                  (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_7_drd_g_2_line2(data)                                  (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_7_drd_g_2_line3(data)                                  (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_7_get_drd_g_2_line0(data)                              ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_7_get_drd_g_2_line1(data)                              ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_7_get_drd_g_2_line2(data)                              ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_7_get_drd_g_2_line3(data)                              (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_8                                                     0x1802DAB4
#define  SFG_SFG_DRD_CTRL_8_reg_addr                                             "0xB802DAB4"
#define  SFG_SFG_DRD_CTRL_8_reg                                                  0xB802DAB4
#define  SFG_SFG_DRD_CTRL_8_inst_addr                                            "0x0052"
#define  set_SFG_SFG_DRD_CTRL_8_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_8_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_8_reg                                              (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_8_reg))
#define  SFG_SFG_DRD_CTRL_8_drd_b_2_line0_shift                                  (24)
#define  SFG_SFG_DRD_CTRL_8_drd_b_2_line1_shift                                  (16)
#define  SFG_SFG_DRD_CTRL_8_drd_b_2_line2_shift                                  (8)
#define  SFG_SFG_DRD_CTRL_8_drd_b_2_line3_shift                                  (0)
#define  SFG_SFG_DRD_CTRL_8_drd_b_2_line0_mask                                   (0x1F000000)
#define  SFG_SFG_DRD_CTRL_8_drd_b_2_line1_mask                                   (0x001F0000)
#define  SFG_SFG_DRD_CTRL_8_drd_b_2_line2_mask                                   (0x00001F00)
#define  SFG_SFG_DRD_CTRL_8_drd_b_2_line3_mask                                   (0x0000001F)
#define  SFG_SFG_DRD_CTRL_8_drd_b_2_line0(data)                                  (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_8_drd_b_2_line1(data)                                  (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_8_drd_b_2_line2(data)                                  (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_8_drd_b_2_line3(data)                                  (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_8_get_drd_b_2_line0(data)                              ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_8_get_drd_b_2_line1(data)                              ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_8_get_drd_b_2_line2(data)                              ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_8_get_drd_b_2_line3(data)                              (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_12                                                    0x1802DAB8
#define  SFG_SFG_DRD_CTRL_12_reg_addr                                            "0xB802DAB8"
#define  SFG_SFG_DRD_CTRL_12_reg                                                 0xB802DAB8
#define  SFG_SFG_DRD_CTRL_12_inst_addr                                           "0x0053"
#define  set_SFG_SFG_DRD_CTRL_12_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_12_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_12_reg                                             (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_12_reg))
#define  SFG_SFG_DRD_CTRL_12_drd_r_4_line0_shift                                 (24)
#define  SFG_SFG_DRD_CTRL_12_drd_r_4_line1_shift                                 (16)
#define  SFG_SFG_DRD_CTRL_12_drd_r_4_line2_shift                                 (8)
#define  SFG_SFG_DRD_CTRL_12_drd_r_4_line3_shift                                 (0)
#define  SFG_SFG_DRD_CTRL_12_drd_r_4_line0_mask                                  (0x1F000000)
#define  SFG_SFG_DRD_CTRL_12_drd_r_4_line1_mask                                  (0x001F0000)
#define  SFG_SFG_DRD_CTRL_12_drd_r_4_line2_mask                                  (0x00001F00)
#define  SFG_SFG_DRD_CTRL_12_drd_r_4_line3_mask                                  (0x0000001F)
#define  SFG_SFG_DRD_CTRL_12_drd_r_4_line0(data)                                 (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_12_drd_r_4_line1(data)                                 (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_12_drd_r_4_line2(data)                                 (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_12_drd_r_4_line3(data)                                 (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_12_get_drd_r_4_line0(data)                             ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_12_get_drd_r_4_line1(data)                             ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_12_get_drd_r_4_line2(data)                             ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_12_get_drd_r_4_line3(data)                             (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_13                                                    0x1802DABC
#define  SFG_SFG_DRD_CTRL_13_reg_addr                                            "0xB802DABC"
#define  SFG_SFG_DRD_CTRL_13_reg                                                 0xB802DABC
#define  SFG_SFG_DRD_CTRL_13_inst_addr                                           "0x0054"
#define  set_SFG_SFG_DRD_CTRL_13_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_13_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_13_reg                                             (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_13_reg))
#define  SFG_SFG_DRD_CTRL_13_drd_g_4_line0_shift                                 (24)
#define  SFG_SFG_DRD_CTRL_13_drd_g_4_line1_shift                                 (16)
#define  SFG_SFG_DRD_CTRL_13_drd_g_4_line2_shift                                 (8)
#define  SFG_SFG_DRD_CTRL_13_drd_g_4_line3_shift                                 (0)
#define  SFG_SFG_DRD_CTRL_13_drd_g_4_line0_mask                                  (0x1F000000)
#define  SFG_SFG_DRD_CTRL_13_drd_g_4_line1_mask                                  (0x001F0000)
#define  SFG_SFG_DRD_CTRL_13_drd_g_4_line2_mask                                  (0x00001F00)
#define  SFG_SFG_DRD_CTRL_13_drd_g_4_line3_mask                                  (0x0000001F)
#define  SFG_SFG_DRD_CTRL_13_drd_g_4_line0(data)                                 (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_13_drd_g_4_line1(data)                                 (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_13_drd_g_4_line2(data)                                 (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_13_drd_g_4_line3(data)                                 (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_13_get_drd_g_4_line0(data)                             ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_13_get_drd_g_4_line1(data)                             ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_13_get_drd_g_4_line2(data)                             ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_13_get_drd_g_4_line3(data)                             (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_14                                                    0x1802DAC0
#define  SFG_SFG_DRD_CTRL_14_reg_addr                                            "0xB802DAC0"
#define  SFG_SFG_DRD_CTRL_14_reg                                                 0xB802DAC0
#define  SFG_SFG_DRD_CTRL_14_inst_addr                                           "0x0055"
#define  set_SFG_SFG_DRD_CTRL_14_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_14_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_14_reg                                             (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_14_reg))
#define  SFG_SFG_DRD_CTRL_14_drd_b_4_line0_shift                                 (24)
#define  SFG_SFG_DRD_CTRL_14_drd_b_4_line1_shift                                 (16)
#define  SFG_SFG_DRD_CTRL_14_drd_b_4_line2_shift                                 (8)
#define  SFG_SFG_DRD_CTRL_14_drd_b_4_line3_shift                                 (0)
#define  SFG_SFG_DRD_CTRL_14_drd_b_4_line0_mask                                  (0x1F000000)
#define  SFG_SFG_DRD_CTRL_14_drd_b_4_line1_mask                                  (0x001F0000)
#define  SFG_SFG_DRD_CTRL_14_drd_b_4_line2_mask                                  (0x00001F00)
#define  SFG_SFG_DRD_CTRL_14_drd_b_4_line3_mask                                  (0x0000001F)
#define  SFG_SFG_DRD_CTRL_14_drd_b_4_line0(data)                                 (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_14_drd_b_4_line1(data)                                 (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_14_drd_b_4_line2(data)                                 (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_14_drd_b_4_line3(data)                                 (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_14_get_drd_b_4_line0(data)                             ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_14_get_drd_b_4_line1(data)                             ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_14_get_drd_b_4_line2(data)                             ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_14_get_drd_b_4_line3(data)                             (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_18                                                    0x1802DAC4
#define  SFG_SFG_DRD_CTRL_18_reg_addr                                            "0xB802DAC4"
#define  SFG_SFG_DRD_CTRL_18_reg                                                 0xB802DAC4
#define  SFG_SFG_DRD_CTRL_18_inst_addr                                           "0x0056"
#define  set_SFG_SFG_DRD_CTRL_18_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_18_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_18_reg                                             (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_18_reg))
#define  SFG_SFG_DRD_CTRL_18_drd_r_6_line0_shift                                 (24)
#define  SFG_SFG_DRD_CTRL_18_drd_r_6_line1_shift                                 (16)
#define  SFG_SFG_DRD_CTRL_18_drd_r_6_line2_shift                                 (8)
#define  SFG_SFG_DRD_CTRL_18_drd_r_6_line3_shift                                 (0)
#define  SFG_SFG_DRD_CTRL_18_drd_r_6_line0_mask                                  (0x1F000000)
#define  SFG_SFG_DRD_CTRL_18_drd_r_6_line1_mask                                  (0x001F0000)
#define  SFG_SFG_DRD_CTRL_18_drd_r_6_line2_mask                                  (0x00001F00)
#define  SFG_SFG_DRD_CTRL_18_drd_r_6_line3_mask                                  (0x0000001F)
#define  SFG_SFG_DRD_CTRL_18_drd_r_6_line0(data)                                 (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_18_drd_r_6_line1(data)                                 (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_18_drd_r_6_line2(data)                                 (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_18_drd_r_6_line3(data)                                 (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_18_get_drd_r_6_line0(data)                             ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_18_get_drd_r_6_line1(data)                             ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_18_get_drd_r_6_line2(data)                             ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_18_get_drd_r_6_line3(data)                             (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_19                                                    0x1802DAC8
#define  SFG_SFG_DRD_CTRL_19_reg_addr                                            "0xB802DAC8"
#define  SFG_SFG_DRD_CTRL_19_reg                                                 0xB802DAC8
#define  SFG_SFG_DRD_CTRL_19_inst_addr                                           "0x0057"
#define  set_SFG_SFG_DRD_CTRL_19_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_19_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_19_reg                                             (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_19_reg))
#define  SFG_SFG_DRD_CTRL_19_drd_g_6_line0_shift                                 (24)
#define  SFG_SFG_DRD_CTRL_19_drd_g_6_line1_shift                                 (16)
#define  SFG_SFG_DRD_CTRL_19_drd_g_6_line2_shift                                 (8)
#define  SFG_SFG_DRD_CTRL_19_drd_g_6_line3_shift                                 (0)
#define  SFG_SFG_DRD_CTRL_19_drd_g_6_line0_mask                                  (0x1F000000)
#define  SFG_SFG_DRD_CTRL_19_drd_g_6_line1_mask                                  (0x001F0000)
#define  SFG_SFG_DRD_CTRL_19_drd_g_6_line2_mask                                  (0x00001F00)
#define  SFG_SFG_DRD_CTRL_19_drd_g_6_line3_mask                                  (0x0000001F)
#define  SFG_SFG_DRD_CTRL_19_drd_g_6_line0(data)                                 (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_19_drd_g_6_line1(data)                                 (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_19_drd_g_6_line2(data)                                 (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_19_drd_g_6_line3(data)                                 (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_19_get_drd_g_6_line0(data)                             ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_19_get_drd_g_6_line1(data)                             ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_19_get_drd_g_6_line2(data)                             ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_19_get_drd_g_6_line3(data)                             (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_20                                                    0x1802DACC
#define  SFG_SFG_DRD_CTRL_20_reg_addr                                            "0xB802DACC"
#define  SFG_SFG_DRD_CTRL_20_reg                                                 0xB802DACC
#define  SFG_SFG_DRD_CTRL_20_inst_addr                                           "0x0058"
#define  set_SFG_SFG_DRD_CTRL_20_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_20_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_20_reg                                             (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_20_reg))
#define  SFG_SFG_DRD_CTRL_20_drd_b_6_line0_shift                                 (24)
#define  SFG_SFG_DRD_CTRL_20_drd_b_6_line1_shift                                 (16)
#define  SFG_SFG_DRD_CTRL_20_drd_b_6_line2_shift                                 (8)
#define  SFG_SFG_DRD_CTRL_20_drd_b_6_line3_shift                                 (0)
#define  SFG_SFG_DRD_CTRL_20_drd_b_6_line0_mask                                  (0x1F000000)
#define  SFG_SFG_DRD_CTRL_20_drd_b_6_line1_mask                                  (0x001F0000)
#define  SFG_SFG_DRD_CTRL_20_drd_b_6_line2_mask                                  (0x00001F00)
#define  SFG_SFG_DRD_CTRL_20_drd_b_6_line3_mask                                  (0x0000001F)
#define  SFG_SFG_DRD_CTRL_20_drd_b_6_line0(data)                                 (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_20_drd_b_6_line1(data)                                 (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_20_drd_b_6_line2(data)                                 (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_20_drd_b_6_line3(data)                                 (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_20_get_drd_b_6_line0(data)                             ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_20_get_drd_b_6_line1(data)                             ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_20_get_drd_b_6_line2(data)                             ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_20_get_drd_b_6_line3(data)                             (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_3                                                     0x1802DAD0
#define  SFG_SFG_DRD_CTRL_3_reg_addr                                             "0xB802DAD0"
#define  SFG_SFG_DRD_CTRL_3_reg                                                  0xB802DAD0
#define  SFG_SFG_DRD_CTRL_3_inst_addr                                            "0x0059"
#define  set_SFG_SFG_DRD_CTRL_3_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_3_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_3_reg                                              (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_3_reg))
#define  SFG_SFG_DRD_CTRL_3_drd_r_1_line0_shift                                  (24)
#define  SFG_SFG_DRD_CTRL_3_drd_r_1_line1_shift                                  (16)
#define  SFG_SFG_DRD_CTRL_3_drd_r_1_line2_shift                                  (8)
#define  SFG_SFG_DRD_CTRL_3_drd_r_1_line3_shift                                  (0)
#define  SFG_SFG_DRD_CTRL_3_drd_r_1_line0_mask                                   (0x1F000000)
#define  SFG_SFG_DRD_CTRL_3_drd_r_1_line1_mask                                   (0x001F0000)
#define  SFG_SFG_DRD_CTRL_3_drd_r_1_line2_mask                                   (0x00001F00)
#define  SFG_SFG_DRD_CTRL_3_drd_r_1_line3_mask                                   (0x0000001F)
#define  SFG_SFG_DRD_CTRL_3_drd_r_1_line0(data)                                  (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_3_drd_r_1_line1(data)                                  (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_3_drd_r_1_line2(data)                                  (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_3_drd_r_1_line3(data)                                  (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_3_get_drd_r_1_line0(data)                              ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_3_get_drd_r_1_line1(data)                              ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_3_get_drd_r_1_line2(data)                              ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_3_get_drd_r_1_line3(data)                              (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_4                                                     0x1802DAD4
#define  SFG_SFG_DRD_CTRL_4_reg_addr                                             "0xB802DAD4"
#define  SFG_SFG_DRD_CTRL_4_reg                                                  0xB802DAD4
#define  SFG_SFG_DRD_CTRL_4_inst_addr                                            "0x005A"
#define  set_SFG_SFG_DRD_CTRL_4_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_4_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_4_reg                                              (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_4_reg))
#define  SFG_SFG_DRD_CTRL_4_drd_g_1_line0_shift                                  (24)
#define  SFG_SFG_DRD_CTRL_4_drd_g_1_line1_shift                                  (16)
#define  SFG_SFG_DRD_CTRL_4_drd_g_1_line2_shift                                  (8)
#define  SFG_SFG_DRD_CTRL_4_drd_g_1_line3_shift                                  (0)
#define  SFG_SFG_DRD_CTRL_4_drd_g_1_line0_mask                                   (0x1F000000)
#define  SFG_SFG_DRD_CTRL_4_drd_g_1_line1_mask                                   (0x001F0000)
#define  SFG_SFG_DRD_CTRL_4_drd_g_1_line2_mask                                   (0x00001F00)
#define  SFG_SFG_DRD_CTRL_4_drd_g_1_line3_mask                                   (0x0000001F)
#define  SFG_SFG_DRD_CTRL_4_drd_g_1_line0(data)                                  (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_4_drd_g_1_line1(data)                                  (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_4_drd_g_1_line2(data)                                  (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_4_drd_g_1_line3(data)                                  (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_4_get_drd_g_1_line0(data)                              ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_4_get_drd_g_1_line1(data)                              ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_4_get_drd_g_1_line2(data)                              ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_4_get_drd_g_1_line3(data)                              (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_5                                                     0x1802DAD8
#define  SFG_SFG_DRD_CTRL_5_reg_addr                                             "0xB802DAD8"
#define  SFG_SFG_DRD_CTRL_5_reg                                                  0xB802DAD8
#define  SFG_SFG_DRD_CTRL_5_inst_addr                                            "0x005B"
#define  set_SFG_SFG_DRD_CTRL_5_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_5_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_5_reg                                              (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_5_reg))
#define  SFG_SFG_DRD_CTRL_5_drd_b_1_line0_shift                                  (24)
#define  SFG_SFG_DRD_CTRL_5_drd_b_1_line1_shift                                  (16)
#define  SFG_SFG_DRD_CTRL_5_drd_b_1_line2_shift                                  (8)
#define  SFG_SFG_DRD_CTRL_5_drd_b_1_line3_shift                                  (0)
#define  SFG_SFG_DRD_CTRL_5_drd_b_1_line0_mask                                   (0x1F000000)
#define  SFG_SFG_DRD_CTRL_5_drd_b_1_line1_mask                                   (0x001F0000)
#define  SFG_SFG_DRD_CTRL_5_drd_b_1_line2_mask                                   (0x00001F00)
#define  SFG_SFG_DRD_CTRL_5_drd_b_1_line3_mask                                   (0x0000001F)
#define  SFG_SFG_DRD_CTRL_5_drd_b_1_line0(data)                                  (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_5_drd_b_1_line1(data)                                  (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_5_drd_b_1_line2(data)                                  (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_5_drd_b_1_line3(data)                                  (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_5_get_drd_b_1_line0(data)                              ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_5_get_drd_b_1_line1(data)                              ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_5_get_drd_b_1_line2(data)                              ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_5_get_drd_b_1_line3(data)                              (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_9                                                     0x1802DADC
#define  SFG_SFG_DRD_CTRL_9_reg_addr                                             "0xB802DADC"
#define  SFG_SFG_DRD_CTRL_9_reg                                                  0xB802DADC
#define  SFG_SFG_DRD_CTRL_9_inst_addr                                            "0x005C"
#define  set_SFG_SFG_DRD_CTRL_9_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_9_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_9_reg                                              (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_9_reg))
#define  SFG_SFG_DRD_CTRL_9_drd_r_3_line0_shift                                  (24)
#define  SFG_SFG_DRD_CTRL_9_drd_r_3_line1_shift                                  (16)
#define  SFG_SFG_DRD_CTRL_9_drd_r_3_line2_shift                                  (8)
#define  SFG_SFG_DRD_CTRL_9_drd_r_3_line3_shift                                  (0)
#define  SFG_SFG_DRD_CTRL_9_drd_r_3_line0_mask                                   (0x1F000000)
#define  SFG_SFG_DRD_CTRL_9_drd_r_3_line1_mask                                   (0x001F0000)
#define  SFG_SFG_DRD_CTRL_9_drd_r_3_line2_mask                                   (0x00001F00)
#define  SFG_SFG_DRD_CTRL_9_drd_r_3_line3_mask                                   (0x0000001F)
#define  SFG_SFG_DRD_CTRL_9_drd_r_3_line0(data)                                  (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_9_drd_r_3_line1(data)                                  (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_9_drd_r_3_line2(data)                                  (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_9_drd_r_3_line3(data)                                  (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_9_get_drd_r_3_line0(data)                              ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_9_get_drd_r_3_line1(data)                              ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_9_get_drd_r_3_line2(data)                              ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_9_get_drd_r_3_line3(data)                              (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_10                                                    0x1802DAE0
#define  SFG_SFG_DRD_CTRL_10_reg_addr                                            "0xB802DAE0"
#define  SFG_SFG_DRD_CTRL_10_reg                                                 0xB802DAE0
#define  SFG_SFG_DRD_CTRL_10_inst_addr                                           "0x005D"
#define  set_SFG_SFG_DRD_CTRL_10_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_10_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_10_reg                                             (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_10_reg))
#define  SFG_SFG_DRD_CTRL_10_drd_g_3_line0_shift                                 (24)
#define  SFG_SFG_DRD_CTRL_10_drd_g_3_line1_shift                                 (16)
#define  SFG_SFG_DRD_CTRL_10_drd_g_3_line2_shift                                 (8)
#define  SFG_SFG_DRD_CTRL_10_drd_g_3_line3_shift                                 (0)
#define  SFG_SFG_DRD_CTRL_10_drd_g_3_line0_mask                                  (0x1F000000)
#define  SFG_SFG_DRD_CTRL_10_drd_g_3_line1_mask                                  (0x001F0000)
#define  SFG_SFG_DRD_CTRL_10_drd_g_3_line2_mask                                  (0x00001F00)
#define  SFG_SFG_DRD_CTRL_10_drd_g_3_line3_mask                                  (0x0000001F)
#define  SFG_SFG_DRD_CTRL_10_drd_g_3_line0(data)                                 (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_10_drd_g_3_line1(data)                                 (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_10_drd_g_3_line2(data)                                 (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_10_drd_g_3_line3(data)                                 (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_10_get_drd_g_3_line0(data)                             ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_10_get_drd_g_3_line1(data)                             ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_10_get_drd_g_3_line2(data)                             ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_10_get_drd_g_3_line3(data)                             (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_11                                                    0x1802DAE4
#define  SFG_SFG_DRD_CTRL_11_reg_addr                                            "0xB802DAE4"
#define  SFG_SFG_DRD_CTRL_11_reg                                                 0xB802DAE4
#define  SFG_SFG_DRD_CTRL_11_inst_addr                                           "0x005E"
#define  set_SFG_SFG_DRD_CTRL_11_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_11_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_11_reg                                             (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_11_reg))
#define  SFG_SFG_DRD_CTRL_11_drd_b_3_line0_shift                                 (24)
#define  SFG_SFG_DRD_CTRL_11_drd_b_3_line1_shift                                 (16)
#define  SFG_SFG_DRD_CTRL_11_drd_b_3_line2_shift                                 (8)
#define  SFG_SFG_DRD_CTRL_11_drd_b_3_line3_shift                                 (0)
#define  SFG_SFG_DRD_CTRL_11_drd_b_3_line0_mask                                  (0x1F000000)
#define  SFG_SFG_DRD_CTRL_11_drd_b_3_line1_mask                                  (0x001F0000)
#define  SFG_SFG_DRD_CTRL_11_drd_b_3_line2_mask                                  (0x00001F00)
#define  SFG_SFG_DRD_CTRL_11_drd_b_3_line3_mask                                  (0x0000001F)
#define  SFG_SFG_DRD_CTRL_11_drd_b_3_line0(data)                                 (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_11_drd_b_3_line1(data)                                 (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_11_drd_b_3_line2(data)                                 (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_11_drd_b_3_line3(data)                                 (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_11_get_drd_b_3_line0(data)                             ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_11_get_drd_b_3_line1(data)                             ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_11_get_drd_b_3_line2(data)                             ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_11_get_drd_b_3_line3(data)                             (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_15                                                    0x1802DAE8
#define  SFG_SFG_DRD_CTRL_15_reg_addr                                            "0xB802DAE8"
#define  SFG_SFG_DRD_CTRL_15_reg                                                 0xB802DAE8
#define  SFG_SFG_DRD_CTRL_15_inst_addr                                           "0x005F"
#define  set_SFG_SFG_DRD_CTRL_15_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_15_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_15_reg                                             (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_15_reg))
#define  SFG_SFG_DRD_CTRL_15_drd_r_5_line0_shift                                 (24)
#define  SFG_SFG_DRD_CTRL_15_drd_r_5_line1_shift                                 (16)
#define  SFG_SFG_DRD_CTRL_15_drd_r_5_line2_shift                                 (8)
#define  SFG_SFG_DRD_CTRL_15_drd_r_5_line3_shift                                 (0)
#define  SFG_SFG_DRD_CTRL_15_drd_r_5_line0_mask                                  (0x1F000000)
#define  SFG_SFG_DRD_CTRL_15_drd_r_5_line1_mask                                  (0x001F0000)
#define  SFG_SFG_DRD_CTRL_15_drd_r_5_line2_mask                                  (0x00001F00)
#define  SFG_SFG_DRD_CTRL_15_drd_r_5_line3_mask                                  (0x0000001F)
#define  SFG_SFG_DRD_CTRL_15_drd_r_5_line0(data)                                 (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_15_drd_r_5_line1(data)                                 (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_15_drd_r_5_line2(data)                                 (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_15_drd_r_5_line3(data)                                 (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_15_get_drd_r_5_line0(data)                             ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_15_get_drd_r_5_line1(data)                             ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_15_get_drd_r_5_line2(data)                             ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_15_get_drd_r_5_line3(data)                             (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_16                                                    0x1802DAEC
#define  SFG_SFG_DRD_CTRL_16_reg_addr                                            "0xB802DAEC"
#define  SFG_SFG_DRD_CTRL_16_reg                                                 0xB802DAEC
#define  SFG_SFG_DRD_CTRL_16_inst_addr                                           "0x0060"
#define  set_SFG_SFG_DRD_CTRL_16_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_16_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_16_reg                                             (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_16_reg))
#define  SFG_SFG_DRD_CTRL_16_drd_g_5_line0_shift                                 (24)
#define  SFG_SFG_DRD_CTRL_16_drd_g_5_line1_shift                                 (16)
#define  SFG_SFG_DRD_CTRL_16_drd_g_5_line2_shift                                 (8)
#define  SFG_SFG_DRD_CTRL_16_drd_g_5_line3_shift                                 (0)
#define  SFG_SFG_DRD_CTRL_16_drd_g_5_line0_mask                                  (0x1F000000)
#define  SFG_SFG_DRD_CTRL_16_drd_g_5_line1_mask                                  (0x001F0000)
#define  SFG_SFG_DRD_CTRL_16_drd_g_5_line2_mask                                  (0x00001F00)
#define  SFG_SFG_DRD_CTRL_16_drd_g_5_line3_mask                                  (0x0000001F)
#define  SFG_SFG_DRD_CTRL_16_drd_g_5_line0(data)                                 (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_16_drd_g_5_line1(data)                                 (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_16_drd_g_5_line2(data)                                 (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_16_drd_g_5_line3(data)                                 (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_16_get_drd_g_5_line0(data)                             ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_16_get_drd_g_5_line1(data)                             ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_16_get_drd_g_5_line2(data)                             ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_16_get_drd_g_5_line3(data)                             (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_17                                                    0x1802DAF0
#define  SFG_SFG_DRD_CTRL_17_reg_addr                                            "0xB802DAF0"
#define  SFG_SFG_DRD_CTRL_17_reg                                                 0xB802DAF0
#define  SFG_SFG_DRD_CTRL_17_inst_addr                                           "0x0061"
#define  set_SFG_SFG_DRD_CTRL_17_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_17_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_17_reg                                             (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_17_reg))
#define  SFG_SFG_DRD_CTRL_17_drd_b_5_line0_shift                                 (24)
#define  SFG_SFG_DRD_CTRL_17_drd_b_5_line1_shift                                 (16)
#define  SFG_SFG_DRD_CTRL_17_drd_b_5_line2_shift                                 (8)
#define  SFG_SFG_DRD_CTRL_17_drd_b_5_line3_shift                                 (0)
#define  SFG_SFG_DRD_CTRL_17_drd_b_5_line0_mask                                  (0x1F000000)
#define  SFG_SFG_DRD_CTRL_17_drd_b_5_line1_mask                                  (0x001F0000)
#define  SFG_SFG_DRD_CTRL_17_drd_b_5_line2_mask                                  (0x00001F00)
#define  SFG_SFG_DRD_CTRL_17_drd_b_5_line3_mask                                  (0x0000001F)
#define  SFG_SFG_DRD_CTRL_17_drd_b_5_line0(data)                                 (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_17_drd_b_5_line1(data)                                 (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_17_drd_b_5_line2(data)                                 (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_17_drd_b_5_line3(data)                                 (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_17_get_drd_b_5_line0(data)                             ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_17_get_drd_b_5_line1(data)                             ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_17_get_drd_b_5_line2(data)                             ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_17_get_drd_b_5_line3(data)                             (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_21                                                    0x1802DAF4
#define  SFG_SFG_DRD_CTRL_21_reg_addr                                            "0xB802DAF4"
#define  SFG_SFG_DRD_CTRL_21_reg                                                 0xB802DAF4
#define  SFG_SFG_DRD_CTRL_21_inst_addr                                           "0x0062"
#define  set_SFG_SFG_DRD_CTRL_21_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_21_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_21_reg                                             (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_21_reg))
#define  SFG_SFG_DRD_CTRL_21_drd_r_7_line0_shift                                 (24)
#define  SFG_SFG_DRD_CTRL_21_drd_r_7_line1_shift                                 (16)
#define  SFG_SFG_DRD_CTRL_21_drd_r_7_line2_shift                                 (8)
#define  SFG_SFG_DRD_CTRL_21_drd_r_7_line3_shift                                 (0)
#define  SFG_SFG_DRD_CTRL_21_drd_r_7_line0_mask                                  (0x1F000000)
#define  SFG_SFG_DRD_CTRL_21_drd_r_7_line1_mask                                  (0x001F0000)
#define  SFG_SFG_DRD_CTRL_21_drd_r_7_line2_mask                                  (0x00001F00)
#define  SFG_SFG_DRD_CTRL_21_drd_r_7_line3_mask                                  (0x0000001F)
#define  SFG_SFG_DRD_CTRL_21_drd_r_7_line0(data)                                 (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_21_drd_r_7_line1(data)                                 (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_21_drd_r_7_line2(data)                                 (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_21_drd_r_7_line3(data)                                 (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_21_get_drd_r_7_line0(data)                             ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_21_get_drd_r_7_line1(data)                             ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_21_get_drd_r_7_line2(data)                             ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_21_get_drd_r_7_line3(data)                             (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_22                                                    0x1802DAF8
#define  SFG_SFG_DRD_CTRL_22_reg_addr                                            "0xB802DAF8"
#define  SFG_SFG_DRD_CTRL_22_reg                                                 0xB802DAF8
#define  SFG_SFG_DRD_CTRL_22_inst_addr                                           "0x0063"
#define  set_SFG_SFG_DRD_CTRL_22_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_22_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_22_reg                                             (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_22_reg))
#define  SFG_SFG_DRD_CTRL_22_drd_g_7_line0_shift                                 (24)
#define  SFG_SFG_DRD_CTRL_22_drd_g_7_line1_shift                                 (16)
#define  SFG_SFG_DRD_CTRL_22_drd_g_7_line2_shift                                 (8)
#define  SFG_SFG_DRD_CTRL_22_drd_g_7_line3_shift                                 (0)
#define  SFG_SFG_DRD_CTRL_22_drd_g_7_line0_mask                                  (0x1F000000)
#define  SFG_SFG_DRD_CTRL_22_drd_g_7_line1_mask                                  (0x001F0000)
#define  SFG_SFG_DRD_CTRL_22_drd_g_7_line2_mask                                  (0x00001F00)
#define  SFG_SFG_DRD_CTRL_22_drd_g_7_line3_mask                                  (0x0000001F)
#define  SFG_SFG_DRD_CTRL_22_drd_g_7_line0(data)                                 (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_22_drd_g_7_line1(data)                                 (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_22_drd_g_7_line2(data)                                 (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_22_drd_g_7_line3(data)                                 (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_22_get_drd_g_7_line0(data)                             ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_22_get_drd_g_7_line1(data)                             ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_22_get_drd_g_7_line2(data)                             ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_22_get_drd_g_7_line3(data)                             (0x0000001F&(data))

#define  SFG_SFG_DRD_CTRL_23                                                    0x1802DAFC
#define  SFG_SFG_DRD_CTRL_23_reg_addr                                            "0xB802DAFC"
#define  SFG_SFG_DRD_CTRL_23_reg                                                 0xB802DAFC
#define  SFG_SFG_DRD_CTRL_23_inst_addr                                           "0x0064"
#define  set_SFG_SFG_DRD_CTRL_23_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_23_reg)=data)
#define  get_SFG_SFG_DRD_CTRL_23_reg                                             (*((volatile unsigned int*)SFG_SFG_DRD_CTRL_23_reg))
#define  SFG_SFG_DRD_CTRL_23_drd_b_7_line0_shift                                 (24)
#define  SFG_SFG_DRD_CTRL_23_drd_b_7_line1_shift                                 (16)
#define  SFG_SFG_DRD_CTRL_23_drd_b_7_line2_shift                                 (8)
#define  SFG_SFG_DRD_CTRL_23_drd_b_7_line3_shift                                 (0)
#define  SFG_SFG_DRD_CTRL_23_drd_b_7_line0_mask                                  (0x1F000000)
#define  SFG_SFG_DRD_CTRL_23_drd_b_7_line1_mask                                  (0x001F0000)
#define  SFG_SFG_DRD_CTRL_23_drd_b_7_line2_mask                                  (0x00001F00)
#define  SFG_SFG_DRD_CTRL_23_drd_b_7_line3_mask                                  (0x0000001F)
#define  SFG_SFG_DRD_CTRL_23_drd_b_7_line0(data)                                 (0x1F000000&((data)<<24))
#define  SFG_SFG_DRD_CTRL_23_drd_b_7_line1(data)                                 (0x001F0000&((data)<<16))
#define  SFG_SFG_DRD_CTRL_23_drd_b_7_line2(data)                                 (0x00001F00&((data)<<8))
#define  SFG_SFG_DRD_CTRL_23_drd_b_7_line3(data)                                 (0x0000001F&(data))
#define  SFG_SFG_DRD_CTRL_23_get_drd_b_7_line0(data)                             ((0x1F000000&(data))>>24)
#define  SFG_SFG_DRD_CTRL_23_get_drd_b_7_line1(data)                             ((0x001F0000&(data))>>16)
#define  SFG_SFG_DRD_CTRL_23_get_drd_b_7_line2(data)                             ((0x00001F00&(data))>>8)
#define  SFG_SFG_DRD_CTRL_23_get_drd_b_7_line3(data)                             (0x0000001F&(data))

#define  SFG_SFG_START_CTRL_27                                                  0x1802DB00
#define  SFG_SFG_START_CTRL_27_reg_addr                                          "0xB802DB00"
#define  SFG_SFG_START_CTRL_27_reg                                               0xB802DB00
#define  SFG_SFG_START_CTRL_27_inst_addr                                         "0x0065"
#define  set_SFG_SFG_START_CTRL_27_reg(data)                                     (*((volatile unsigned int*)SFG_SFG_START_CTRL_27_reg)=data)
#define  get_SFG_SFG_START_CTRL_27_reg                                           (*((volatile unsigned int*)SFG_SFG_START_CTRL_27_reg))
#define  SFG_SFG_START_CTRL_27_seg12_start_res_shift                             (29)
#define  SFG_SFG_START_CTRL_27_seg12_start_shift                                 (16)
#define  SFG_SFG_START_CTRL_27_seg13_start_res_shift                             (13)
#define  SFG_SFG_START_CTRL_27_seg13_start_shift                                 (0)
#define  SFG_SFG_START_CTRL_27_seg12_start_res_mask                              (0xE0000000)
#define  SFG_SFG_START_CTRL_27_seg12_start_mask                                  (0x1FFF0000)
#define  SFG_SFG_START_CTRL_27_seg13_start_res_mask                              (0x0000E000)
#define  SFG_SFG_START_CTRL_27_seg13_start_mask                                  (0x00001FFF)
#define  SFG_SFG_START_CTRL_27_seg12_start_res(data)                             (0xE0000000&((data)<<29))
#define  SFG_SFG_START_CTRL_27_seg12_start(data)                                 (0x1FFF0000&((data)<<16))
#define  SFG_SFG_START_CTRL_27_seg13_start_res(data)                             (0x0000E000&((data)<<13))
#define  SFG_SFG_START_CTRL_27_seg13_start(data)                                 (0x00001FFF&(data))
#define  SFG_SFG_START_CTRL_27_get_seg12_start_res(data)                         ((0xE0000000&(data))>>29)
#define  SFG_SFG_START_CTRL_27_get_seg12_start(data)                             ((0x1FFF0000&(data))>>16)
#define  SFG_SFG_START_CTRL_27_get_seg13_start_res(data)                         ((0x0000E000&(data))>>13)
#define  SFG_SFG_START_CTRL_27_get_seg13_start(data)                             (0x00001FFF&(data))

#define  SFG_SFG_START_CTRL_28                                                  0x1802DB04
#define  SFG_SFG_START_CTRL_28_reg_addr                                          "0xB802DB04"
#define  SFG_SFG_START_CTRL_28_reg                                               0xB802DB04
#define  SFG_SFG_START_CTRL_28_inst_addr                                         "0x0066"
#define  set_SFG_SFG_START_CTRL_28_reg(data)                                     (*((volatile unsigned int*)SFG_SFG_START_CTRL_28_reg)=data)
#define  get_SFG_SFG_START_CTRL_28_reg                                           (*((volatile unsigned int*)SFG_SFG_START_CTRL_28_reg))
#define  SFG_SFG_START_CTRL_28_seg14_start_res_shift                             (29)
#define  SFG_SFG_START_CTRL_28_seg14_start_shift                                 (16)
#define  SFG_SFG_START_CTRL_28_seg15_start_res_shift                             (13)
#define  SFG_SFG_START_CTRL_28_seg15_start_shift                                 (0)
#define  SFG_SFG_START_CTRL_28_seg14_start_res_mask                              (0xE0000000)
#define  SFG_SFG_START_CTRL_28_seg14_start_mask                                  (0x1FFF0000)
#define  SFG_SFG_START_CTRL_28_seg15_start_res_mask                              (0x0000E000)
#define  SFG_SFG_START_CTRL_28_seg15_start_mask                                  (0x00001FFF)
#define  SFG_SFG_START_CTRL_28_seg14_start_res(data)                             (0xE0000000&((data)<<29))
#define  SFG_SFG_START_CTRL_28_seg14_start(data)                                 (0x1FFF0000&((data)<<16))
#define  SFG_SFG_START_CTRL_28_seg15_start_res(data)                             (0x0000E000&((data)<<13))
#define  SFG_SFG_START_CTRL_28_seg15_start(data)                                 (0x00001FFF&(data))
#define  SFG_SFG_START_CTRL_28_get_seg14_start_res(data)                         ((0xE0000000&(data))>>29)
#define  SFG_SFG_START_CTRL_28_get_seg14_start(data)                             ((0x1FFF0000&(data))>>16)
#define  SFG_SFG_START_CTRL_28_get_seg15_start_res(data)                         ((0x0000E000&(data))>>13)
#define  SFG_SFG_START_CTRL_28_get_seg15_start(data)                             (0x00001FFF&(data))

#define  SFG_SFG_DUMMY_CTRL_29                                                  0x1802DB08
#define  SFG_SFG_DUMMY_CTRL_29_reg_addr                                          "0xB802DB08"
#define  SFG_SFG_DUMMY_CTRL_29_reg                                               0xB802DB08
#define  SFG_SFG_DUMMY_CTRL_29_inst_addr                                         "0x0067"
#define  set_SFG_SFG_DUMMY_CTRL_29_reg(data)                                     (*((volatile unsigned int*)SFG_SFG_DUMMY_CTRL_29_reg)=data)
#define  get_SFG_SFG_DUMMY_CTRL_29_reg                                           (*((volatile unsigned int*)SFG_SFG_DUMMY_CTRL_29_reg))
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_front_dummy_num_0_shift                    (30)
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_back_dummy_num_0_shift                     (28)
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_front_dummy_num_1_shift                    (26)
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_back_dummy_num_1_shift                     (24)
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_front_dummy_num_2_shift                    (22)
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_back_dummy_num_2_shift                     (20)
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_front_dummy_num_3_shift                    (18)
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_back_dummy_num_3_shift                     (16)
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_front_dummy_num_0_shift                    (14)
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_back_dummy_num_0_shift                     (12)
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_front_dummy_num_1_shift                    (10)
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_back_dummy_num_1_shift                     (8)
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_front_dummy_num_2_shift                    (6)
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_back_dummy_num_2_shift                     (4)
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_front_dummy_num_3_shift                    (2)
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_back_dummy_num_3_shift                     (0)
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_front_dummy_num_0_mask                     (0xC0000000)
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_back_dummy_num_0_mask                      (0x30000000)
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_front_dummy_num_1_mask                     (0x0C000000)
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_back_dummy_num_1_mask                      (0x03000000)
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_front_dummy_num_2_mask                     (0x00C00000)
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_back_dummy_num_2_mask                      (0x00300000)
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_front_dummy_num_3_mask                     (0x000C0000)
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_back_dummy_num_3_mask                      (0x00030000)
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_front_dummy_num_0_mask                     (0x0000C000)
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_back_dummy_num_0_mask                      (0x00003000)
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_front_dummy_num_1_mask                     (0x00000C00)
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_back_dummy_num_1_mask                      (0x00000300)
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_front_dummy_num_2_mask                     (0x000000C0)
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_back_dummy_num_2_mask                      (0x00000030)
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_front_dummy_num_3_mask                     (0x0000000C)
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_back_dummy_num_3_mask                      (0x00000003)
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_front_dummy_num_0(data)                    (0xC0000000&((data)<<30))
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_back_dummy_num_0(data)                     (0x30000000&((data)<<28))
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_front_dummy_num_1(data)                    (0x0C000000&((data)<<26))
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_back_dummy_num_1(data)                     (0x03000000&((data)<<24))
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_front_dummy_num_2(data)                    (0x00C00000&((data)<<22))
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_back_dummy_num_2(data)                     (0x00300000&((data)<<20))
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_front_dummy_num_3(data)                    (0x000C0000&((data)<<18))
#define  SFG_SFG_DUMMY_CTRL_29_seg_12_back_dummy_num_3(data)                     (0x00030000&((data)<<16))
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_front_dummy_num_0(data)                    (0x0000C000&((data)<<14))
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_back_dummy_num_0(data)                     (0x00003000&((data)<<12))
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_front_dummy_num_1(data)                    (0x00000C00&((data)<<10))
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_back_dummy_num_1(data)                     (0x00000300&((data)<<8))
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_front_dummy_num_2(data)                    (0x000000C0&((data)<<6))
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_back_dummy_num_2(data)                     (0x00000030&((data)<<4))
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_front_dummy_num_3(data)                    (0x0000000C&((data)<<2))
#define  SFG_SFG_DUMMY_CTRL_29_seg_13_back_dummy_num_3(data)                     (0x00000003&(data))
#define  SFG_SFG_DUMMY_CTRL_29_get_seg_12_front_dummy_num_0(data)                ((0xC0000000&(data))>>30)
#define  SFG_SFG_DUMMY_CTRL_29_get_seg_12_back_dummy_num_0(data)                 ((0x30000000&(data))>>28)
#define  SFG_SFG_DUMMY_CTRL_29_get_seg_12_front_dummy_num_1(data)                ((0x0C000000&(data))>>26)
#define  SFG_SFG_DUMMY_CTRL_29_get_seg_12_back_dummy_num_1(data)                 ((0x03000000&(data))>>24)
#define  SFG_SFG_DUMMY_CTRL_29_get_seg_12_front_dummy_num_2(data)                ((0x00C00000&(data))>>22)
#define  SFG_SFG_DUMMY_CTRL_29_get_seg_12_back_dummy_num_2(data)                 ((0x00300000&(data))>>20)
#define  SFG_SFG_DUMMY_CTRL_29_get_seg_12_front_dummy_num_3(data)                ((0x000C0000&(data))>>18)
#define  SFG_SFG_DUMMY_CTRL_29_get_seg_12_back_dummy_num_3(data)                 ((0x00030000&(data))>>16)
#define  SFG_SFG_DUMMY_CTRL_29_get_seg_13_front_dummy_num_0(data)                ((0x0000C000&(data))>>14)
#define  SFG_SFG_DUMMY_CTRL_29_get_seg_13_back_dummy_num_0(data)                 ((0x00003000&(data))>>12)
#define  SFG_SFG_DUMMY_CTRL_29_get_seg_13_front_dummy_num_1(data)                ((0x00000C00&(data))>>10)
#define  SFG_SFG_DUMMY_CTRL_29_get_seg_13_back_dummy_num_1(data)                 ((0x00000300&(data))>>8)
#define  SFG_SFG_DUMMY_CTRL_29_get_seg_13_front_dummy_num_2(data)                ((0x000000C0&(data))>>6)
#define  SFG_SFG_DUMMY_CTRL_29_get_seg_13_back_dummy_num_2(data)                 ((0x00000030&(data))>>4)
#define  SFG_SFG_DUMMY_CTRL_29_get_seg_13_front_dummy_num_3(data)                ((0x0000000C&(data))>>2)
#define  SFG_SFG_DUMMY_CTRL_29_get_seg_13_back_dummy_num_3(data)                 (0x00000003&(data))

#define  SFG_SFG_DUMMY_CTRL_30                                                  0x1802DB0C
#define  SFG_SFG_DUMMY_CTRL_30_reg_addr                                          "0xB802DB0C"
#define  SFG_SFG_DUMMY_CTRL_30_reg                                               0xB802DB0C
#define  SFG_SFG_DUMMY_CTRL_30_inst_addr                                         "0x0068"
#define  set_SFG_SFG_DUMMY_CTRL_30_reg(data)                                     (*((volatile unsigned int*)SFG_SFG_DUMMY_CTRL_30_reg)=data)
#define  get_SFG_SFG_DUMMY_CTRL_30_reg                                           (*((volatile unsigned int*)SFG_SFG_DUMMY_CTRL_30_reg))
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_front_dummy_num_0_shift                    (30)
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_back_dummy_num_0_shift                     (28)
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_front_dummy_num_1_shift                    (26)
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_back_dummy_num_1_shift                     (24)
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_front_dummy_num_2_shift                    (22)
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_back_dummy_num_2_shift                     (20)
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_front_dummy_num_3_shift                    (18)
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_back_dummy_num_3_shift                     (16)
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_front_dummy_num_0_shift                    (14)
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_back_dummy_num_0_shift                     (12)
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_front_dummy_num_1_shift                    (10)
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_back_dummy_num_1_shift                     (8)
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_front_dummy_num_2_shift                    (6)
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_back_dummy_num_2_shift                     (4)
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_front_dummy_num_3_shift                    (2)
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_back_dummy_num_3_shift                     (0)
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_front_dummy_num_0_mask                     (0xC0000000)
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_back_dummy_num_0_mask                      (0x30000000)
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_front_dummy_num_1_mask                     (0x0C000000)
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_back_dummy_num_1_mask                      (0x03000000)
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_front_dummy_num_2_mask                     (0x00C00000)
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_back_dummy_num_2_mask                      (0x00300000)
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_front_dummy_num_3_mask                     (0x000C0000)
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_back_dummy_num_3_mask                      (0x00030000)
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_front_dummy_num_0_mask                     (0x0000C000)
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_back_dummy_num_0_mask                      (0x00003000)
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_front_dummy_num_1_mask                     (0x00000C00)
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_back_dummy_num_1_mask                      (0x00000300)
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_front_dummy_num_2_mask                     (0x000000C0)
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_back_dummy_num_2_mask                      (0x00000030)
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_front_dummy_num_3_mask                     (0x0000000C)
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_back_dummy_num_3_mask                      (0x00000003)
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_front_dummy_num_0(data)                    (0xC0000000&((data)<<30))
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_back_dummy_num_0(data)                     (0x30000000&((data)<<28))
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_front_dummy_num_1(data)                    (0x0C000000&((data)<<26))
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_back_dummy_num_1(data)                     (0x03000000&((data)<<24))
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_front_dummy_num_2(data)                    (0x00C00000&((data)<<22))
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_back_dummy_num_2(data)                     (0x00300000&((data)<<20))
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_front_dummy_num_3(data)                    (0x000C0000&((data)<<18))
#define  SFG_SFG_DUMMY_CTRL_30_seg_14_back_dummy_num_3(data)                     (0x00030000&((data)<<16))
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_front_dummy_num_0(data)                    (0x0000C000&((data)<<14))
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_back_dummy_num_0(data)                     (0x00003000&((data)<<12))
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_front_dummy_num_1(data)                    (0x00000C00&((data)<<10))
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_back_dummy_num_1(data)                     (0x00000300&((data)<<8))
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_front_dummy_num_2(data)                    (0x000000C0&((data)<<6))
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_back_dummy_num_2(data)                     (0x00000030&((data)<<4))
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_front_dummy_num_3(data)                    (0x0000000C&((data)<<2))
#define  SFG_SFG_DUMMY_CTRL_30_seg_15_back_dummy_num_3(data)                     (0x00000003&(data))
#define  SFG_SFG_DUMMY_CTRL_30_get_seg_14_front_dummy_num_0(data)                ((0xC0000000&(data))>>30)
#define  SFG_SFG_DUMMY_CTRL_30_get_seg_14_back_dummy_num_0(data)                 ((0x30000000&(data))>>28)
#define  SFG_SFG_DUMMY_CTRL_30_get_seg_14_front_dummy_num_1(data)                ((0x0C000000&(data))>>26)
#define  SFG_SFG_DUMMY_CTRL_30_get_seg_14_back_dummy_num_1(data)                 ((0x03000000&(data))>>24)
#define  SFG_SFG_DUMMY_CTRL_30_get_seg_14_front_dummy_num_2(data)                ((0x00C00000&(data))>>22)
#define  SFG_SFG_DUMMY_CTRL_30_get_seg_14_back_dummy_num_2(data)                 ((0x00300000&(data))>>20)
#define  SFG_SFG_DUMMY_CTRL_30_get_seg_14_front_dummy_num_3(data)                ((0x000C0000&(data))>>18)
#define  SFG_SFG_DUMMY_CTRL_30_get_seg_14_back_dummy_num_3(data)                 ((0x00030000&(data))>>16)
#define  SFG_SFG_DUMMY_CTRL_30_get_seg_15_front_dummy_num_0(data)                ((0x0000C000&(data))>>14)
#define  SFG_SFG_DUMMY_CTRL_30_get_seg_15_back_dummy_num_0(data)                 ((0x00003000&(data))>>12)
#define  SFG_SFG_DUMMY_CTRL_30_get_seg_15_front_dummy_num_1(data)                ((0x00000C00&(data))>>10)
#define  SFG_SFG_DUMMY_CTRL_30_get_seg_15_back_dummy_num_1(data)                 ((0x00000300&(data))>>8)
#define  SFG_SFG_DUMMY_CTRL_30_get_seg_15_front_dummy_num_2(data)                ((0x000000C0&(data))>>6)
#define  SFG_SFG_DUMMY_CTRL_30_get_seg_15_back_dummy_num_2(data)                 ((0x00000030&(data))>>4)
#define  SFG_SFG_DUMMY_CTRL_30_get_seg_15_front_dummy_num_3(data)                ((0x0000000C&(data))>>2)
#define  SFG_SFG_DUMMY_CTRL_30_get_seg_15_back_dummy_num_3(data)                 (0x00000003&(data))

#define  SFG_SFG1_fw_ext_SUBPIXEL                                               0x1802DB68
#define  SFG_SFG1_fw_ext_SUBPIXEL_reg_addr                                       "0xB802DB68"
#define  SFG_SFG1_fw_ext_SUBPIXEL_reg                                            0xB802DB68
#define  SFG_SFG1_fw_ext_SUBPIXEL_inst_addr                                      "0x0069"
#define  set_SFG_SFG1_fw_ext_SUBPIXEL_reg(data)                                  (*((volatile unsigned int*)SFG_SFG1_fw_ext_SUBPIXEL_reg)=data)
#define  get_SFG_SFG1_fw_ext_SUBPIXEL_reg                                        (*((volatile unsigned int*)SFG_SFG1_fw_ext_SUBPIXEL_reg))
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_7_shift                   (28)
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_6_shift                   (24)
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_5_shift                   (20)
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_4_shift                   (16)
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_3_shift                   (12)
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_2_shift                   (8)
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_1_shift                   (4)
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_0_shift                   (0)
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_7_mask                    (0x70000000)
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_6_mask                    (0x07000000)
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_5_mask                    (0x00700000)
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_4_mask                    (0x00070000)
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_3_mask                    (0x00007000)
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_2_mask                    (0x00000700)
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_1_mask                    (0x00000070)
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_0_mask                    (0x00000007)
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_7(data)                   (0x70000000&((data)<<28))
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_6(data)                   (0x07000000&((data)<<24))
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_5(data)                   (0x00700000&((data)<<20))
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_4(data)                   (0x00070000&((data)<<16))
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_3(data)                   (0x00007000&((data)<<12))
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_2(data)                   (0x00000700&((data)<<8))
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_1(data)                   (0x00000070&((data)<<4))
#define  SFG_SFG1_fw_ext_SUBPIXEL_fw_ext_subpix_a_line_0(data)                   (0x00000007&(data))
#define  SFG_SFG1_fw_ext_SUBPIXEL_get_fw_ext_subpix_a_line_7(data)               ((0x70000000&(data))>>28)
#define  SFG_SFG1_fw_ext_SUBPIXEL_get_fw_ext_subpix_a_line_6(data)               ((0x07000000&(data))>>24)
#define  SFG_SFG1_fw_ext_SUBPIXEL_get_fw_ext_subpix_a_line_5(data)               ((0x00700000&(data))>>20)
#define  SFG_SFG1_fw_ext_SUBPIXEL_get_fw_ext_subpix_a_line_4(data)               ((0x00070000&(data))>>16)
#define  SFG_SFG1_fw_ext_SUBPIXEL_get_fw_ext_subpix_a_line_3(data)               ((0x00007000&(data))>>12)
#define  SFG_SFG1_fw_ext_SUBPIXEL_get_fw_ext_subpix_a_line_2(data)               ((0x00000700&(data))>>8)
#define  SFG_SFG1_fw_ext_SUBPIXEL_get_fw_ext_subpix_a_line_1(data)               ((0x00000070&(data))>>4)
#define  SFG_SFG1_fw_ext_SUBPIXEL_get_fw_ext_subpix_a_line_0(data)               (0x00000007&(data))

#define  SFG_SFG1_fw_ext_SUBPIXEL2                                              0x1802DB6C
#define  SFG_SFG1_fw_ext_SUBPIXEL2_reg_addr                                      "0xB802DB6C"
#define  SFG_SFG1_fw_ext_SUBPIXEL2_reg                                           0xB802DB6C
#define  SFG_SFG1_fw_ext_SUBPIXEL2_inst_addr                                     "0x006A"
#define  set_SFG_SFG1_fw_ext_SUBPIXEL2_reg(data)                                 (*((volatile unsigned int*)SFG_SFG1_fw_ext_SUBPIXEL2_reg)=data)
#define  get_SFG_SFG1_fw_ext_SUBPIXEL2_reg                                       (*((volatile unsigned int*)SFG_SFG1_fw_ext_SUBPIXEL2_reg))
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_7_shift                  (28)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_6_shift                  (24)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_5_shift                  (20)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_4_shift                  (16)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_3_shift                  (12)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_2_shift                  (8)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_1_shift                  (4)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_0_shift                  (0)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_7_mask                   (0x70000000)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_6_mask                   (0x07000000)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_5_mask                   (0x00700000)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_4_mask                   (0x00070000)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_3_mask                   (0x00007000)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_2_mask                   (0x00000700)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_1_mask                   (0x00000070)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_0_mask                   (0x00000007)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_7(data)                  (0x70000000&((data)<<28))
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_6(data)                  (0x07000000&((data)<<24))
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_5(data)                  (0x00700000&((data)<<20))
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_4(data)                  (0x00070000&((data)<<16))
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_3(data)                  (0x00007000&((data)<<12))
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_2(data)                  (0x00000700&((data)<<8))
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_1(data)                  (0x00000070&((data)<<4))
#define  SFG_SFG1_fw_ext_SUBPIXEL2_fw_ext_subpix_b_line_0(data)                  (0x00000007&(data))
#define  SFG_SFG1_fw_ext_SUBPIXEL2_get_fw_ext_subpix_b_line_7(data)              ((0x70000000&(data))>>28)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_get_fw_ext_subpix_b_line_6(data)              ((0x07000000&(data))>>24)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_get_fw_ext_subpix_b_line_5(data)              ((0x00700000&(data))>>20)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_get_fw_ext_subpix_b_line_4(data)              ((0x00070000&(data))>>16)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_get_fw_ext_subpix_b_line_3(data)              ((0x00007000&(data))>>12)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_get_fw_ext_subpix_b_line_2(data)              ((0x00000700&(data))>>8)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_get_fw_ext_subpix_b_line_1(data)              ((0x00000070&(data))>>4)
#define  SFG_SFG1_fw_ext_SUBPIXEL2_get_fw_ext_subpix_b_line_0(data)              (0x00000007&(data))

#define  SFG_SFG1_DUM_DATA_LINE_0                                               0x1802DB78
#define  SFG_SFG1_DUM_DATA_LINE_0_reg_addr                                       "0xB802DB78"
#define  SFG_SFG1_DUM_DATA_LINE_0_reg                                            0xB802DB78
#define  SFG_SFG1_DUM_DATA_LINE_0_inst_addr                                      "0x006B"
#define  set_SFG_SFG1_DUM_DATA_LINE_0_reg(data)                                  (*((volatile unsigned int*)SFG_SFG1_DUM_DATA_LINE_0_reg)=data)
#define  get_SFG_SFG1_DUM_DATA_LINE_0_reg                                        (*((volatile unsigned int*)SFG_SFG1_DUM_DATA_LINE_0_reg))
#define  SFG_SFG1_DUM_DATA_LINE_0_dum_data1_line_0_shift                         (16)
#define  SFG_SFG1_DUM_DATA_LINE_0_dum_data0_line_0_shift                         (0)
#define  SFG_SFG1_DUM_DATA_LINE_0_dum_data1_line_0_mask                          (0x03FF0000)
#define  SFG_SFG1_DUM_DATA_LINE_0_dum_data0_line_0_mask                          (0x000003FF)
#define  SFG_SFG1_DUM_DATA_LINE_0_dum_data1_line_0(data)                         (0x03FF0000&((data)<<16))
#define  SFG_SFG1_DUM_DATA_LINE_0_dum_data0_line_0(data)                         (0x000003FF&(data))
#define  SFG_SFG1_DUM_DATA_LINE_0_get_dum_data1_line_0(data)                     ((0x03FF0000&(data))>>16)
#define  SFG_SFG1_DUM_DATA_LINE_0_get_dum_data0_line_0(data)                     (0x000003FF&(data))

#define  SFG_SFG1_DUM_DATA_LINE_1                                               0x1802DB7C
#define  SFG_SFG1_DUM_DATA_LINE_1_reg_addr                                       "0xB802DB7C"
#define  SFG_SFG1_DUM_DATA_LINE_1_reg                                            0xB802DB7C
#define  SFG_SFG1_DUM_DATA_LINE_1_inst_addr                                      "0x006C"
#define  set_SFG_SFG1_DUM_DATA_LINE_1_reg(data)                                  (*((volatile unsigned int*)SFG_SFG1_DUM_DATA_LINE_1_reg)=data)
#define  get_SFG_SFG1_DUM_DATA_LINE_1_reg                                        (*((volatile unsigned int*)SFG_SFG1_DUM_DATA_LINE_1_reg))
#define  SFG_SFG1_DUM_DATA_LINE_1_dum_data1_line_1_shift                         (16)
#define  SFG_SFG1_DUM_DATA_LINE_1_dum_data0_line_1_shift                         (0)
#define  SFG_SFG1_DUM_DATA_LINE_1_dum_data1_line_1_mask                          (0x03FF0000)
#define  SFG_SFG1_DUM_DATA_LINE_1_dum_data0_line_1_mask                          (0x000003FF)
#define  SFG_SFG1_DUM_DATA_LINE_1_dum_data1_line_1(data)                         (0x03FF0000&((data)<<16))
#define  SFG_SFG1_DUM_DATA_LINE_1_dum_data0_line_1(data)                         (0x000003FF&(data))
#define  SFG_SFG1_DUM_DATA_LINE_1_get_dum_data1_line_1(data)                     ((0x03FF0000&(data))>>16)
#define  SFG_SFG1_DUM_DATA_LINE_1_get_dum_data0_line_1(data)                     (0x000003FF&(data))

#define  SFG_SFG1_DUM_DATA_LINE_2                                               0x1802DB80
#define  SFG_SFG1_DUM_DATA_LINE_2_reg_addr                                       "0xB802DB80"
#define  SFG_SFG1_DUM_DATA_LINE_2_reg                                            0xB802DB80
#define  SFG_SFG1_DUM_DATA_LINE_2_inst_addr                                      "0x006D"
#define  set_SFG_SFG1_DUM_DATA_LINE_2_reg(data)                                  (*((volatile unsigned int*)SFG_SFG1_DUM_DATA_LINE_2_reg)=data)
#define  get_SFG_SFG1_DUM_DATA_LINE_2_reg                                        (*((volatile unsigned int*)SFG_SFG1_DUM_DATA_LINE_2_reg))
#define  SFG_SFG1_DUM_DATA_LINE_2_dum_data1_line_2_shift                         (16)
#define  SFG_SFG1_DUM_DATA_LINE_2_dum_data0_line_2_shift                         (0)
#define  SFG_SFG1_DUM_DATA_LINE_2_dum_data1_line_2_mask                          (0x03FF0000)
#define  SFG_SFG1_DUM_DATA_LINE_2_dum_data0_line_2_mask                          (0x000003FF)
#define  SFG_SFG1_DUM_DATA_LINE_2_dum_data1_line_2(data)                         (0x03FF0000&((data)<<16))
#define  SFG_SFG1_DUM_DATA_LINE_2_dum_data0_line_2(data)                         (0x000003FF&(data))
#define  SFG_SFG1_DUM_DATA_LINE_2_get_dum_data1_line_2(data)                     ((0x03FF0000&(data))>>16)
#define  SFG_SFG1_DUM_DATA_LINE_2_get_dum_data0_line_2(data)                     (0x000003FF&(data))

#define  SFG_SFG1_DUM_DATA_LINE_3                                               0x1802DB84
#define  SFG_SFG1_DUM_DATA_LINE_3_reg_addr                                       "0xB802DB84"
#define  SFG_SFG1_DUM_DATA_LINE_3_reg                                            0xB802DB84
#define  SFG_SFG1_DUM_DATA_LINE_3_inst_addr                                      "0x006E"
#define  set_SFG_SFG1_DUM_DATA_LINE_3_reg(data)                                  (*((volatile unsigned int*)SFG_SFG1_DUM_DATA_LINE_3_reg)=data)
#define  get_SFG_SFG1_DUM_DATA_LINE_3_reg                                        (*((volatile unsigned int*)SFG_SFG1_DUM_DATA_LINE_3_reg))
#define  SFG_SFG1_DUM_DATA_LINE_3_dum_data1_line_3_shift                         (16)
#define  SFG_SFG1_DUM_DATA_LINE_3_dum_data0_line_3_shift                         (0)
#define  SFG_SFG1_DUM_DATA_LINE_3_dum_data1_line_3_mask                          (0x03FF0000)
#define  SFG_SFG1_DUM_DATA_LINE_3_dum_data0_line_3_mask                          (0x000003FF)
#define  SFG_SFG1_DUM_DATA_LINE_3_dum_data1_line_3(data)                         (0x03FF0000&((data)<<16))
#define  SFG_SFG1_DUM_DATA_LINE_3_dum_data0_line_3(data)                         (0x000003FF&(data))
#define  SFG_SFG1_DUM_DATA_LINE_3_get_dum_data1_line_3(data)                     ((0x03FF0000&(data))>>16)
#define  SFG_SFG1_DUM_DATA_LINE_3_get_dum_data0_line_3(data)                     (0x000003FF&(data))

#define  SFG_SFG1_DUM_DATA_LINE_4                                               0x1802DB88
#define  SFG_SFG1_DUM_DATA_LINE_4_reg_addr                                       "0xB802DB88"
#define  SFG_SFG1_DUM_DATA_LINE_4_reg                                            0xB802DB88
#define  SFG_SFG1_DUM_DATA_LINE_4_inst_addr                                      "0x006F"
#define  set_SFG_SFG1_DUM_DATA_LINE_4_reg(data)                                  (*((volatile unsigned int*)SFG_SFG1_DUM_DATA_LINE_4_reg)=data)
#define  get_SFG_SFG1_DUM_DATA_LINE_4_reg                                        (*((volatile unsigned int*)SFG_SFG1_DUM_DATA_LINE_4_reg))
#define  SFG_SFG1_DUM_DATA_LINE_4_dum_data1_line_4_shift                         (16)
#define  SFG_SFG1_DUM_DATA_LINE_4_dum_data0_line_4_shift                         (0)
#define  SFG_SFG1_DUM_DATA_LINE_4_dum_data1_line_4_mask                          (0x03FF0000)
#define  SFG_SFG1_DUM_DATA_LINE_4_dum_data0_line_4_mask                          (0x000003FF)
#define  SFG_SFG1_DUM_DATA_LINE_4_dum_data1_line_4(data)                         (0x03FF0000&((data)<<16))
#define  SFG_SFG1_DUM_DATA_LINE_4_dum_data0_line_4(data)                         (0x000003FF&(data))
#define  SFG_SFG1_DUM_DATA_LINE_4_get_dum_data1_line_4(data)                     ((0x03FF0000&(data))>>16)
#define  SFG_SFG1_DUM_DATA_LINE_4_get_dum_data0_line_4(data)                     (0x000003FF&(data))

#define  SFG_SFG1_DUM_DATA_LINE_5                                               0x1802DB8C
#define  SFG_SFG1_DUM_DATA_LINE_5_reg_addr                                       "0xB802DB8C"
#define  SFG_SFG1_DUM_DATA_LINE_5_reg                                            0xB802DB8C
#define  SFG_SFG1_DUM_DATA_LINE_5_inst_addr                                      "0x0070"
#define  set_SFG_SFG1_DUM_DATA_LINE_5_reg(data)                                  (*((volatile unsigned int*)SFG_SFG1_DUM_DATA_LINE_5_reg)=data)
#define  get_SFG_SFG1_DUM_DATA_LINE_5_reg                                        (*((volatile unsigned int*)SFG_SFG1_DUM_DATA_LINE_5_reg))
#define  SFG_SFG1_DUM_DATA_LINE_5_dum_data1_line_5_shift                         (16)
#define  SFG_SFG1_DUM_DATA_LINE_5_dum_data0_line_5_shift                         (0)
#define  SFG_SFG1_DUM_DATA_LINE_5_dum_data1_line_5_mask                          (0x03FF0000)
#define  SFG_SFG1_DUM_DATA_LINE_5_dum_data0_line_5_mask                          (0x000003FF)
#define  SFG_SFG1_DUM_DATA_LINE_5_dum_data1_line_5(data)                         (0x03FF0000&((data)<<16))
#define  SFG_SFG1_DUM_DATA_LINE_5_dum_data0_line_5(data)                         (0x000003FF&(data))
#define  SFG_SFG1_DUM_DATA_LINE_5_get_dum_data1_line_5(data)                     ((0x03FF0000&(data))>>16)
#define  SFG_SFG1_DUM_DATA_LINE_5_get_dum_data0_line_5(data)                     (0x000003FF&(data))

#define  SFG_SFG1_DUM_DATA_LINE_6                                               0x1802DB90
#define  SFG_SFG1_DUM_DATA_LINE_6_reg_addr                                       "0xB802DB90"
#define  SFG_SFG1_DUM_DATA_LINE_6_reg                                            0xB802DB90
#define  SFG_SFG1_DUM_DATA_LINE_6_inst_addr                                      "0x0071"
#define  set_SFG_SFG1_DUM_DATA_LINE_6_reg(data)                                  (*((volatile unsigned int*)SFG_SFG1_DUM_DATA_LINE_6_reg)=data)
#define  get_SFG_SFG1_DUM_DATA_LINE_6_reg                                        (*((volatile unsigned int*)SFG_SFG1_DUM_DATA_LINE_6_reg))
#define  SFG_SFG1_DUM_DATA_LINE_6_dum_data1_line_6_shift                         (16)
#define  SFG_SFG1_DUM_DATA_LINE_6_dum_data0_line_6_shift                         (0)
#define  SFG_SFG1_DUM_DATA_LINE_6_dum_data1_line_6_mask                          (0x03FF0000)
#define  SFG_SFG1_DUM_DATA_LINE_6_dum_data0_line_6_mask                          (0x000003FF)
#define  SFG_SFG1_DUM_DATA_LINE_6_dum_data1_line_6(data)                         (0x03FF0000&((data)<<16))
#define  SFG_SFG1_DUM_DATA_LINE_6_dum_data0_line_6(data)                         (0x000003FF&(data))
#define  SFG_SFG1_DUM_DATA_LINE_6_get_dum_data1_line_6(data)                     ((0x03FF0000&(data))>>16)
#define  SFG_SFG1_DUM_DATA_LINE_6_get_dum_data0_line_6(data)                     (0x000003FF&(data))

#define  SFG_SFG1_DUM_DATA_LINE_7                                               0x1802DB94
#define  SFG_SFG1_DUM_DATA_LINE_7_reg_addr                                       "0xB802DB94"
#define  SFG_SFG1_DUM_DATA_LINE_7_reg                                            0xB802DB94
#define  SFG_SFG1_DUM_DATA_LINE_7_inst_addr                                      "0x0072"
#define  set_SFG_SFG1_DUM_DATA_LINE_7_reg(data)                                  (*((volatile unsigned int*)SFG_SFG1_DUM_DATA_LINE_7_reg)=data)
#define  get_SFG_SFG1_DUM_DATA_LINE_7_reg                                        (*((volatile unsigned int*)SFG_SFG1_DUM_DATA_LINE_7_reg))
#define  SFG_SFG1_DUM_DATA_LINE_7_dum_data1_line_7_shift                         (16)
#define  SFG_SFG1_DUM_DATA_LINE_7_dum_data0_line_7_shift                         (0)
#define  SFG_SFG1_DUM_DATA_LINE_7_dum_data1_line_7_mask                          (0x03FF0000)
#define  SFG_SFG1_DUM_DATA_LINE_7_dum_data0_line_7_mask                          (0x000003FF)
#define  SFG_SFG1_DUM_DATA_LINE_7_dum_data1_line_7(data)                         (0x03FF0000&((data)<<16))
#define  SFG_SFG1_DUM_DATA_LINE_7_dum_data0_line_7(data)                         (0x000003FF&(data))
#define  SFG_SFG1_DUM_DATA_LINE_7_get_dum_data1_line_7(data)                     ((0x03FF0000&(data))>>16)
#define  SFG_SFG1_DUM_DATA_LINE_7_get_dum_data0_line_7(data)                     (0x000003FF&(data))

#define  SFG_ZZ_CTRL_2                                                          0x1802DBA8
#define  SFG_ZZ_CTRL_2_reg_addr                                                  "0xB802DBA8"
#define  SFG_ZZ_CTRL_2_reg                                                       0xB802DBA8
#define  SFG_ZZ_CTRL_2_inst_addr                                                 "0x0073"
#define  set_SFG_ZZ_CTRL_2_reg(data)                                             (*((volatile unsigned int*)SFG_ZZ_CTRL_2_reg)=data)
#define  get_SFG_ZZ_CTRL_2_reg                                                   (*((volatile unsigned int*)SFG_ZZ_CTRL_2_reg))
#define  SFG_ZZ_CTRL_2_zz_shift_sp_4_shift                                       (20)
#define  SFG_ZZ_CTRL_2_zz_shift_sp_5_shift                                       (16)
#define  SFG_ZZ_CTRL_2_zz_shift_sp_6_shift                                       (12)
#define  SFG_ZZ_CTRL_2_zz_shift_sp_7_shift                                       (8)
#define  SFG_ZZ_CTRL_2_zz_shift_mode_4_shift                                     (7)
#define  SFG_ZZ_CTRL_2_zz_shift_mode_5_shift                                     (6)
#define  SFG_ZZ_CTRL_2_zz_shift_mode_6_shift                                     (5)
#define  SFG_ZZ_CTRL_2_zz_shift_mode_7_shift                                     (4)
#define  SFG_ZZ_CTRL_2_zz_shift_sp_4_mask                                        (0x00F00000)
#define  SFG_ZZ_CTRL_2_zz_shift_sp_5_mask                                        (0x000F0000)
#define  SFG_ZZ_CTRL_2_zz_shift_sp_6_mask                                        (0x0000F000)
#define  SFG_ZZ_CTRL_2_zz_shift_sp_7_mask                                        (0x00000F00)
#define  SFG_ZZ_CTRL_2_zz_shift_mode_4_mask                                      (0x00000080)
#define  SFG_ZZ_CTRL_2_zz_shift_mode_5_mask                                      (0x00000040)
#define  SFG_ZZ_CTRL_2_zz_shift_mode_6_mask                                      (0x00000020)
#define  SFG_ZZ_CTRL_2_zz_shift_mode_7_mask                                      (0x00000010)
#define  SFG_ZZ_CTRL_2_zz_shift_sp_4(data)                                       (0x00F00000&((data)<<20))
#define  SFG_ZZ_CTRL_2_zz_shift_sp_5(data)                                       (0x000F0000&((data)<<16))
#define  SFG_ZZ_CTRL_2_zz_shift_sp_6(data)                                       (0x0000F000&((data)<<12))
#define  SFG_ZZ_CTRL_2_zz_shift_sp_7(data)                                       (0x00000F00&((data)<<8))
#define  SFG_ZZ_CTRL_2_zz_shift_mode_4(data)                                     (0x00000080&((data)<<7))
#define  SFG_ZZ_CTRL_2_zz_shift_mode_5(data)                                     (0x00000040&((data)<<6))
#define  SFG_ZZ_CTRL_2_zz_shift_mode_6(data)                                     (0x00000020&((data)<<5))
#define  SFG_ZZ_CTRL_2_zz_shift_mode_7(data)                                     (0x00000010&((data)<<4))
#define  SFG_ZZ_CTRL_2_get_zz_shift_sp_4(data)                                   ((0x00F00000&(data))>>20)
#define  SFG_ZZ_CTRL_2_get_zz_shift_sp_5(data)                                   ((0x000F0000&(data))>>16)
#define  SFG_ZZ_CTRL_2_get_zz_shift_sp_6(data)                                   ((0x0000F000&(data))>>12)
#define  SFG_ZZ_CTRL_2_get_zz_shift_sp_7(data)                                   ((0x00000F00&(data))>>8)
#define  SFG_ZZ_CTRL_2_get_zz_shift_mode_4(data)                                 ((0x00000080&(data))>>7)
#define  SFG_ZZ_CTRL_2_get_zz_shift_mode_5(data)                                 ((0x00000040&(data))>>6)
#define  SFG_ZZ_CTRL_2_get_zz_shift_mode_6(data)                                 ((0x00000020&(data))>>5)
#define  SFG_ZZ_CTRL_2_get_zz_shift_mode_7(data)                                 ((0x00000010&(data))>>4)

#define  SFG_SFG_insert_subpixel_4                                              0x1802DBAC
#define  SFG_SFG_insert_subpixel_4_reg_addr                                      "0xB802DBAC"
#define  SFG_SFG_insert_subpixel_4_reg                                           0xB802DBAC
#define  SFG_SFG_insert_subpixel_4_inst_addr                                     "0x0074"
#define  set_SFG_SFG_insert_subpixel_4_reg(data)                                 (*((volatile unsigned int*)SFG_SFG_insert_subpixel_4_reg)=data)
#define  get_SFG_SFG_insert_subpixel_4_reg                                       (*((volatile unsigned int*)SFG_SFG_insert_subpixel_4_reg))
#define  SFG_SFG_insert_subpixel_4_insert_line4_r_0_shift                        (28)
#define  SFG_SFG_insert_subpixel_4_insert_line4_g_0_shift                        (24)
#define  SFG_SFG_insert_subpixel_4_insert_line4_b_0_shift                        (20)
#define  SFG_SFG_insert_subpixel_4_insert_line4_r_last_shift                     (16)
#define  SFG_SFG_insert_subpixel_4_insert_line4_g_last_shift                     (12)
#define  SFG_SFG_insert_subpixel_4_insert_line4_b_last_shift                     (8)
#define  SFG_SFG_insert_subpixel_4_insert_line4_r_0_mask                         (0xF0000000)
#define  SFG_SFG_insert_subpixel_4_insert_line4_g_0_mask                         (0x0F000000)
#define  SFG_SFG_insert_subpixel_4_insert_line4_b_0_mask                         (0x00F00000)
#define  SFG_SFG_insert_subpixel_4_insert_line4_r_last_mask                      (0x000F0000)
#define  SFG_SFG_insert_subpixel_4_insert_line4_g_last_mask                      (0x0000F000)
#define  SFG_SFG_insert_subpixel_4_insert_line4_b_last_mask                      (0x00000F00)
#define  SFG_SFG_insert_subpixel_4_insert_line4_r_0(data)                        (0xF0000000&((data)<<28))
#define  SFG_SFG_insert_subpixel_4_insert_line4_g_0(data)                        (0x0F000000&((data)<<24))
#define  SFG_SFG_insert_subpixel_4_insert_line4_b_0(data)                        (0x00F00000&((data)<<20))
#define  SFG_SFG_insert_subpixel_4_insert_line4_r_last(data)                     (0x000F0000&((data)<<16))
#define  SFG_SFG_insert_subpixel_4_insert_line4_g_last(data)                     (0x0000F000&((data)<<12))
#define  SFG_SFG_insert_subpixel_4_insert_line4_b_last(data)                     (0x00000F00&((data)<<8))
#define  SFG_SFG_insert_subpixel_4_get_insert_line4_r_0(data)                    ((0xF0000000&(data))>>28)
#define  SFG_SFG_insert_subpixel_4_get_insert_line4_g_0(data)                    ((0x0F000000&(data))>>24)
#define  SFG_SFG_insert_subpixel_4_get_insert_line4_b_0(data)                    ((0x00F00000&(data))>>20)
#define  SFG_SFG_insert_subpixel_4_get_insert_line4_r_last(data)                 ((0x000F0000&(data))>>16)
#define  SFG_SFG_insert_subpixel_4_get_insert_line4_g_last(data)                 ((0x0000F000&(data))>>12)
#define  SFG_SFG_insert_subpixel_4_get_insert_line4_b_last(data)                 ((0x00000F00&(data))>>8)

#define  SFG_SFG_insert_subpixel_5                                              0x1802DBB0
#define  SFG_SFG_insert_subpixel_5_reg_addr                                      "0xB802DBB0"
#define  SFG_SFG_insert_subpixel_5_reg                                           0xB802DBB0
#define  SFG_SFG_insert_subpixel_5_inst_addr                                     "0x0075"
#define  set_SFG_SFG_insert_subpixel_5_reg(data)                                 (*((volatile unsigned int*)SFG_SFG_insert_subpixel_5_reg)=data)
#define  get_SFG_SFG_insert_subpixel_5_reg                                       (*((volatile unsigned int*)SFG_SFG_insert_subpixel_5_reg))
#define  SFG_SFG_insert_subpixel_5_insert_line5_r_0_shift                        (28)
#define  SFG_SFG_insert_subpixel_5_insert_line5_g_0_shift                        (24)
#define  SFG_SFG_insert_subpixel_5_insert_line5_b_0_shift                        (20)
#define  SFG_SFG_insert_subpixel_5_insert_line5_r_last_shift                     (16)
#define  SFG_SFG_insert_subpixel_5_insert_line5_g_last_shift                     (12)
#define  SFG_SFG_insert_subpixel_5_insert_line5_b_last_shift                     (8)
#define  SFG_SFG_insert_subpixel_5_insert_line5_r_0_mask                         (0xF0000000)
#define  SFG_SFG_insert_subpixel_5_insert_line5_g_0_mask                         (0x0F000000)
#define  SFG_SFG_insert_subpixel_5_insert_line5_b_0_mask                         (0x00F00000)
#define  SFG_SFG_insert_subpixel_5_insert_line5_r_last_mask                      (0x000F0000)
#define  SFG_SFG_insert_subpixel_5_insert_line5_g_last_mask                      (0x0000F000)
#define  SFG_SFG_insert_subpixel_5_insert_line5_b_last_mask                      (0x00000F00)
#define  SFG_SFG_insert_subpixel_5_insert_line5_r_0(data)                        (0xF0000000&((data)<<28))
#define  SFG_SFG_insert_subpixel_5_insert_line5_g_0(data)                        (0x0F000000&((data)<<24))
#define  SFG_SFG_insert_subpixel_5_insert_line5_b_0(data)                        (0x00F00000&((data)<<20))
#define  SFG_SFG_insert_subpixel_5_insert_line5_r_last(data)                     (0x000F0000&((data)<<16))
#define  SFG_SFG_insert_subpixel_5_insert_line5_g_last(data)                     (0x0000F000&((data)<<12))
#define  SFG_SFG_insert_subpixel_5_insert_line5_b_last(data)                     (0x00000F00&((data)<<8))
#define  SFG_SFG_insert_subpixel_5_get_insert_line5_r_0(data)                    ((0xF0000000&(data))>>28)
#define  SFG_SFG_insert_subpixel_5_get_insert_line5_g_0(data)                    ((0x0F000000&(data))>>24)
#define  SFG_SFG_insert_subpixel_5_get_insert_line5_b_0(data)                    ((0x00F00000&(data))>>20)
#define  SFG_SFG_insert_subpixel_5_get_insert_line5_r_last(data)                 ((0x000F0000&(data))>>16)
#define  SFG_SFG_insert_subpixel_5_get_insert_line5_g_last(data)                 ((0x0000F000&(data))>>12)
#define  SFG_SFG_insert_subpixel_5_get_insert_line5_b_last(data)                 ((0x00000F00&(data))>>8)

#define  SFG_SFG_insert_subpixel_6                                              0x1802DBB4
#define  SFG_SFG_insert_subpixel_6_reg_addr                                      "0xB802DBB4"
#define  SFG_SFG_insert_subpixel_6_reg                                           0xB802DBB4
#define  SFG_SFG_insert_subpixel_6_inst_addr                                     "0x0076"
#define  set_SFG_SFG_insert_subpixel_6_reg(data)                                 (*((volatile unsigned int*)SFG_SFG_insert_subpixel_6_reg)=data)
#define  get_SFG_SFG_insert_subpixel_6_reg                                       (*((volatile unsigned int*)SFG_SFG_insert_subpixel_6_reg))
#define  SFG_SFG_insert_subpixel_6_insert_line6_r_0_shift                        (28)
#define  SFG_SFG_insert_subpixel_6_insert_line6_g_0_shift                        (24)
#define  SFG_SFG_insert_subpixel_6_insert_line6_b_0_shift                        (20)
#define  SFG_SFG_insert_subpixel_6_insert_line6_r_last_shift                     (16)
#define  SFG_SFG_insert_subpixel_6_insert_line6_g_last_shift                     (12)
#define  SFG_SFG_insert_subpixel_6_insert_line6_b_last_shift                     (8)
#define  SFG_SFG_insert_subpixel_6_insert_line6_r_0_mask                         (0xF0000000)
#define  SFG_SFG_insert_subpixel_6_insert_line6_g_0_mask                         (0x0F000000)
#define  SFG_SFG_insert_subpixel_6_insert_line6_b_0_mask                         (0x00F00000)
#define  SFG_SFG_insert_subpixel_6_insert_line6_r_last_mask                      (0x000F0000)
#define  SFG_SFG_insert_subpixel_6_insert_line6_g_last_mask                      (0x0000F000)
#define  SFG_SFG_insert_subpixel_6_insert_line6_b_last_mask                      (0x00000F00)
#define  SFG_SFG_insert_subpixel_6_insert_line6_r_0(data)                        (0xF0000000&((data)<<28))
#define  SFG_SFG_insert_subpixel_6_insert_line6_g_0(data)                        (0x0F000000&((data)<<24))
#define  SFG_SFG_insert_subpixel_6_insert_line6_b_0(data)                        (0x00F00000&((data)<<20))
#define  SFG_SFG_insert_subpixel_6_insert_line6_r_last(data)                     (0x000F0000&((data)<<16))
#define  SFG_SFG_insert_subpixel_6_insert_line6_g_last(data)                     (0x0000F000&((data)<<12))
#define  SFG_SFG_insert_subpixel_6_insert_line6_b_last(data)                     (0x00000F00&((data)<<8))
#define  SFG_SFG_insert_subpixel_6_get_insert_line6_r_0(data)                    ((0xF0000000&(data))>>28)
#define  SFG_SFG_insert_subpixel_6_get_insert_line6_g_0(data)                    ((0x0F000000&(data))>>24)
#define  SFG_SFG_insert_subpixel_6_get_insert_line6_b_0(data)                    ((0x00F00000&(data))>>20)
#define  SFG_SFG_insert_subpixel_6_get_insert_line6_r_last(data)                 ((0x000F0000&(data))>>16)
#define  SFG_SFG_insert_subpixel_6_get_insert_line6_g_last(data)                 ((0x0000F000&(data))>>12)
#define  SFG_SFG_insert_subpixel_6_get_insert_line6_b_last(data)                 ((0x00000F00&(data))>>8)

#define  SFG_SFG_insert_subpixel_7                                              0x1802DBB8
#define  SFG_SFG_insert_subpixel_7_reg_addr                                      "0xB802DBB8"
#define  SFG_SFG_insert_subpixel_7_reg                                           0xB802DBB8
#define  SFG_SFG_insert_subpixel_7_inst_addr                                     "0x0077"
#define  set_SFG_SFG_insert_subpixel_7_reg(data)                                 (*((volatile unsigned int*)SFG_SFG_insert_subpixel_7_reg)=data)
#define  get_SFG_SFG_insert_subpixel_7_reg                                       (*((volatile unsigned int*)SFG_SFG_insert_subpixel_7_reg))
#define  SFG_SFG_insert_subpixel_7_insert_line7_r_0_shift                        (28)
#define  SFG_SFG_insert_subpixel_7_insert_line7_g_0_shift                        (24)
#define  SFG_SFG_insert_subpixel_7_insert_line7_b_0_shift                        (20)
#define  SFG_SFG_insert_subpixel_7_insert_line7_r_last_shift                     (16)
#define  SFG_SFG_insert_subpixel_7_insert_line7_g_last_shift                     (12)
#define  SFG_SFG_insert_subpixel_7_insert_line7_b_last_shift                     (8)
#define  SFG_SFG_insert_subpixel_7_insert_line7_r_0_mask                         (0xF0000000)
#define  SFG_SFG_insert_subpixel_7_insert_line7_g_0_mask                         (0x0F000000)
#define  SFG_SFG_insert_subpixel_7_insert_line7_b_0_mask                         (0x00F00000)
#define  SFG_SFG_insert_subpixel_7_insert_line7_r_last_mask                      (0x000F0000)
#define  SFG_SFG_insert_subpixel_7_insert_line7_g_last_mask                      (0x0000F000)
#define  SFG_SFG_insert_subpixel_7_insert_line7_b_last_mask                      (0x00000F00)
#define  SFG_SFG_insert_subpixel_7_insert_line7_r_0(data)                        (0xF0000000&((data)<<28))
#define  SFG_SFG_insert_subpixel_7_insert_line7_g_0(data)                        (0x0F000000&((data)<<24))
#define  SFG_SFG_insert_subpixel_7_insert_line7_b_0(data)                        (0x00F00000&((data)<<20))
#define  SFG_SFG_insert_subpixel_7_insert_line7_r_last(data)                     (0x000F0000&((data)<<16))
#define  SFG_SFG_insert_subpixel_7_insert_line7_g_last(data)                     (0x0000F000&((data)<<12))
#define  SFG_SFG_insert_subpixel_7_insert_line7_b_last(data)                     (0x00000F00&((data)<<8))
#define  SFG_SFG_insert_subpixel_7_get_insert_line7_r_0(data)                    ((0xF0000000&(data))>>28)
#define  SFG_SFG_insert_subpixel_7_get_insert_line7_g_0(data)                    ((0x0F000000&(data))>>24)
#define  SFG_SFG_insert_subpixel_7_get_insert_line7_b_0(data)                    ((0x00F00000&(data))>>20)
#define  SFG_SFG_insert_subpixel_7_get_insert_line7_r_last(data)                 ((0x000F0000&(data))>>16)
#define  SFG_SFG_insert_subpixel_7_get_insert_line7_g_last(data)                 ((0x0000F000&(data))>>12)
#define  SFG_SFG_insert_subpixel_7_get_insert_line7_b_last(data)                 ((0x00000F00&(data))>>8)

#define  SFG_SFG_Last_ext_pixel_last_flip_2                                     0x1802DBBC
#define  SFG_SFG_Last_ext_pixel_last_flip_2_reg_addr                             "0xB802DBBC"
#define  SFG_SFG_Last_ext_pixel_last_flip_2_reg                                  0xB802DBBC
#define  SFG_SFG_Last_ext_pixel_last_flip_2_inst_addr                            "0x0078"
#define  set_SFG_SFG_Last_ext_pixel_last_flip_2_reg(data)                        (*((volatile unsigned int*)SFG_SFG_Last_ext_pixel_last_flip_2_reg)=data)
#define  get_SFG_SFG_Last_ext_pixel_last_flip_2_reg                              (*((volatile unsigned int*)SFG_SFG_Last_ext_pixel_last_flip_2_reg))
#define  SFG_SFG_Last_ext_pixel_last_flip_2_dummy_15_0_shift                     (0)
#define  SFG_SFG_Last_ext_pixel_last_flip_2_dummy_15_0_mask                      (0x0000FFFF)
#define  SFG_SFG_Last_ext_pixel_last_flip_2_dummy_15_0(data)                     (0x0000FFFF&(data))
#define  SFG_SFG_Last_ext_pixel_last_flip_2_get_dummy_15_0(data)                 (0x0000FFFF&(data))

#define  SFG_SFG_last_seg_2                                                     0x1802DBE0
#define  SFG_SFG_last_seg_2_reg_addr                                             "0xB802DBE0"
#define  SFG_SFG_last_seg_2_reg                                                  0xB802DBE0
#define  SFG_SFG_last_seg_2_inst_addr                                            "0x0079"
#define  set_SFG_SFG_last_seg_2_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_last_seg_2_reg)=data)
#define  get_SFG_SFG_last_seg_2_reg                                              (*((volatile unsigned int*)SFG_SFG_last_seg_2_reg))
#define  SFG_SFG_last_seg_2_last_seg_start_res_line4_shift                       (29)
#define  SFG_SFG_last_seg_2_last_seg_start_line4_shift                           (16)
#define  SFG_SFG_last_seg_2_last_seg_start_res_line5_shift                       (13)
#define  SFG_SFG_last_seg_2_last_seg_start_line5_shift                           (0)
#define  SFG_SFG_last_seg_2_last_seg_start_res_line4_mask                        (0xE0000000)
#define  SFG_SFG_last_seg_2_last_seg_start_line4_mask                            (0x1FFF0000)
#define  SFG_SFG_last_seg_2_last_seg_start_res_line5_mask                        (0x0000E000)
#define  SFG_SFG_last_seg_2_last_seg_start_line5_mask                            (0x00001FFF)
#define  SFG_SFG_last_seg_2_last_seg_start_res_line4(data)                       (0xE0000000&((data)<<29))
#define  SFG_SFG_last_seg_2_last_seg_start_line4(data)                           (0x1FFF0000&((data)<<16))
#define  SFG_SFG_last_seg_2_last_seg_start_res_line5(data)                       (0x0000E000&((data)<<13))
#define  SFG_SFG_last_seg_2_last_seg_start_line5(data)                           (0x00001FFF&(data))
#define  SFG_SFG_last_seg_2_get_last_seg_start_res_line4(data)                   ((0xE0000000&(data))>>29)
#define  SFG_SFG_last_seg_2_get_last_seg_start_line4(data)                       ((0x1FFF0000&(data))>>16)
#define  SFG_SFG_last_seg_2_get_last_seg_start_res_line5(data)                   ((0x0000E000&(data))>>13)
#define  SFG_SFG_last_seg_2_get_last_seg_start_line5(data)                       (0x00001FFF&(data))

#define  SFG_SFG_last_seg_3                                                     0x1802DBE4
#define  SFG_SFG_last_seg_3_reg_addr                                             "0xB802DBE4"
#define  SFG_SFG_last_seg_3_reg                                                  0xB802DBE4
#define  SFG_SFG_last_seg_3_inst_addr                                            "0x007A"
#define  set_SFG_SFG_last_seg_3_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_last_seg_3_reg)=data)
#define  get_SFG_SFG_last_seg_3_reg                                              (*((volatile unsigned int*)SFG_SFG_last_seg_3_reg))
#define  SFG_SFG_last_seg_3_last_seg_start_res_line6_shift                       (29)
#define  SFG_SFG_last_seg_3_last_seg_start_line6_shift                           (16)
#define  SFG_SFG_last_seg_3_last_seg_start_res_line7_shift                       (13)
#define  SFG_SFG_last_seg_3_last_seg_start_line7_shift                           (0)
#define  SFG_SFG_last_seg_3_last_seg_start_res_line6_mask                        (0xE0000000)
#define  SFG_SFG_last_seg_3_last_seg_start_line6_mask                            (0x1FFF0000)
#define  SFG_SFG_last_seg_3_last_seg_start_res_line7_mask                        (0x0000E000)
#define  SFG_SFG_last_seg_3_last_seg_start_line7_mask                            (0x00001FFF)
#define  SFG_SFG_last_seg_3_last_seg_start_res_line6(data)                       (0xE0000000&((data)<<29))
#define  SFG_SFG_last_seg_3_last_seg_start_line6(data)                           (0x1FFF0000&((data)<<16))
#define  SFG_SFG_last_seg_3_last_seg_start_res_line7(data)                       (0x0000E000&((data)<<13))
#define  SFG_SFG_last_seg_3_last_seg_start_line7(data)                           (0x00001FFF&(data))
#define  SFG_SFG_last_seg_3_get_last_seg_start_res_line6(data)                   ((0xE0000000&(data))>>29)
#define  SFG_SFG_last_seg_3_get_last_seg_start_line6(data)                       ((0x1FFF0000&(data))>>16)
#define  SFG_SFG_last_seg_3_get_last_seg_start_res_line7(data)                   ((0x0000E000&(data))>>13)
#define  SFG_SFG_last_seg_3_get_last_seg_start_line7(data)                       (0x00001FFF&(data))

#define  SFG_SFG_patgen_ctrl                                                    0x1802DBF0
#define  SFG_SFG_patgen_ctrl_reg_addr                                            "0xB802DBF0"
#define  SFG_SFG_patgen_ctrl_reg                                                 0xB802DBF0
#define  SFG_SFG_patgen_ctrl_inst_addr                                           "0x007B"
#define  set_SFG_SFG_patgen_ctrl_reg(data)                                       (*((volatile unsigned int*)SFG_SFG_patgen_ctrl_reg)=data)
#define  get_SFG_SFG_patgen_ctrl_reg                                             (*((volatile unsigned int*)SFG_SFG_patgen_ctrl_reg))
#define  SFG_SFG_patgen_ctrl_sfg_pat_line_width_shift                            (20)
#define  SFG_SFG_patgen_ctrl_sfg_pat_line_num_shift                              (8)
#define  SFG_SFG_patgen_ctrl_sfg_pat_cnt_mode_shift                              (5)
#define  SFG_SFG_patgen_ctrl_sfg_pat_even_shift                                  (4)
#define  SFG_SFG_patgen_ctrl_sfg_pat_rgb_sel_shift                               (3)
#define  SFG_SFG_patgen_ctrl_sfg_pat_mode_shift                                  (1)
#define  SFG_SFG_patgen_ctrl_sfg_pat_en_shift                                    (0)
#define  SFG_SFG_patgen_ctrl_sfg_pat_line_width_mask                             (0x1FF00000)
#define  SFG_SFG_patgen_ctrl_sfg_pat_line_num_mask                               (0x0001FF00)
#define  SFG_SFG_patgen_ctrl_sfg_pat_cnt_mode_mask                               (0x00000020)
#define  SFG_SFG_patgen_ctrl_sfg_pat_even_mask                                   (0x00000010)
#define  SFG_SFG_patgen_ctrl_sfg_pat_rgb_sel_mask                                (0x00000008)
#define  SFG_SFG_patgen_ctrl_sfg_pat_mode_mask                                   (0x00000006)
#define  SFG_SFG_patgen_ctrl_sfg_pat_en_mask                                     (0x00000001)
#define  SFG_SFG_patgen_ctrl_sfg_pat_line_width(data)                            (0x1FF00000&((data)<<20))
#define  SFG_SFG_patgen_ctrl_sfg_pat_line_num(data)                              (0x0001FF00&((data)<<8))
#define  SFG_SFG_patgen_ctrl_sfg_pat_cnt_mode(data)                              (0x00000020&((data)<<5))
#define  SFG_SFG_patgen_ctrl_sfg_pat_even(data)                                  (0x00000010&((data)<<4))
#define  SFG_SFG_patgen_ctrl_sfg_pat_rgb_sel(data)                               (0x00000008&((data)<<3))
#define  SFG_SFG_patgen_ctrl_sfg_pat_mode(data)                                  (0x00000006&((data)<<1))
#define  SFG_SFG_patgen_ctrl_sfg_pat_en(data)                                    (0x00000001&(data))
#define  SFG_SFG_patgen_ctrl_get_sfg_pat_line_width(data)                        ((0x1FF00000&(data))>>20)
#define  SFG_SFG_patgen_ctrl_get_sfg_pat_line_num(data)                          ((0x0001FF00&(data))>>8)
#define  SFG_SFG_patgen_ctrl_get_sfg_pat_cnt_mode(data)                          ((0x00000020&(data))>>5)
#define  SFG_SFG_patgen_ctrl_get_sfg_pat_even(data)                              ((0x00000010&(data))>>4)
#define  SFG_SFG_patgen_ctrl_get_sfg_pat_rgb_sel(data)                           ((0x00000008&(data))>>3)
#define  SFG_SFG_patgen_ctrl_get_sfg_pat_mode(data)                              ((0x00000006&(data))>>1)
#define  SFG_SFG_patgen_ctrl_get_sfg_pat_en(data)                                (0x00000001&(data))

#define  SFG_SFG_patgen_0                                                       0x1802DBF4
#define  SFG_SFG_patgen_0_reg_addr                                               "0xB802DBF4"
#define  SFG_SFG_patgen_0_reg                                                    0xB802DBF4
#define  SFG_SFG_patgen_0_inst_addr                                              "0x007C"
#define  set_SFG_SFG_patgen_0_reg(data)                                          (*((volatile unsigned int*)SFG_SFG_patgen_0_reg)=data)
#define  get_SFG_SFG_patgen_0_reg                                                (*((volatile unsigned int*)SFG_SFG_patgen_0_reg))
#define  SFG_SFG_patgen_0_sfg_pat_w0_shift                                       (24)
#define  SFG_SFG_patgen_0_sfg_pat_r0_shift                                       (16)
#define  SFG_SFG_patgen_0_sfg_pat_g0_shift                                       (8)
#define  SFG_SFG_patgen_0_sfg_pat_b0_shift                                       (0)
#define  SFG_SFG_patgen_0_sfg_pat_w0_mask                                        (0xFF000000)
#define  SFG_SFG_patgen_0_sfg_pat_r0_mask                                        (0x00FF0000)
#define  SFG_SFG_patgen_0_sfg_pat_g0_mask                                        (0x0000FF00)
#define  SFG_SFG_patgen_0_sfg_pat_b0_mask                                        (0x000000FF)
#define  SFG_SFG_patgen_0_sfg_pat_w0(data)                                       (0xFF000000&((data)<<24))
#define  SFG_SFG_patgen_0_sfg_pat_r0(data)                                       (0x00FF0000&((data)<<16))
#define  SFG_SFG_patgen_0_sfg_pat_g0(data)                                       (0x0000FF00&((data)<<8))
#define  SFG_SFG_patgen_0_sfg_pat_b0(data)                                       (0x000000FF&(data))
#define  SFG_SFG_patgen_0_get_sfg_pat_w0(data)                                   ((0xFF000000&(data))>>24)
#define  SFG_SFG_patgen_0_get_sfg_pat_r0(data)                                   ((0x00FF0000&(data))>>16)
#define  SFG_SFG_patgen_0_get_sfg_pat_g0(data)                                   ((0x0000FF00&(data))>>8)
#define  SFG_SFG_patgen_0_get_sfg_pat_b0(data)                                   (0x000000FF&(data))

#define  SFG_SFG_patgen_1                                                       0x1802DBF8
#define  SFG_SFG_patgen_1_reg_addr                                               "0xB802DBF8"
#define  SFG_SFG_patgen_1_reg                                                    0xB802DBF8
#define  SFG_SFG_patgen_1_inst_addr                                              "0x007D"
#define  set_SFG_SFG_patgen_1_reg(data)                                          (*((volatile unsigned int*)SFG_SFG_patgen_1_reg)=data)
#define  get_SFG_SFG_patgen_1_reg                                                (*((volatile unsigned int*)SFG_SFG_patgen_1_reg))
#define  SFG_SFG_patgen_1_sfg_pat_w1_shift                                       (24)
#define  SFG_SFG_patgen_1_sfg_pat_r1_shift                                       (16)
#define  SFG_SFG_patgen_1_sfg_pat_g1_shift                                       (8)
#define  SFG_SFG_patgen_1_sfg_pat_b1_shift                                       (0)
#define  SFG_SFG_patgen_1_sfg_pat_w1_mask                                        (0xFF000000)
#define  SFG_SFG_patgen_1_sfg_pat_r1_mask                                        (0x00FF0000)
#define  SFG_SFG_patgen_1_sfg_pat_g1_mask                                        (0x0000FF00)
#define  SFG_SFG_patgen_1_sfg_pat_b1_mask                                        (0x000000FF)
#define  SFG_SFG_patgen_1_sfg_pat_w1(data)                                       (0xFF000000&((data)<<24))
#define  SFG_SFG_patgen_1_sfg_pat_r1(data)                                       (0x00FF0000&((data)<<16))
#define  SFG_SFG_patgen_1_sfg_pat_g1(data)                                       (0x0000FF00&((data)<<8))
#define  SFG_SFG_patgen_1_sfg_pat_b1(data)                                       (0x000000FF&(data))
#define  SFG_SFG_patgen_1_get_sfg_pat_w1(data)                                   ((0xFF000000&(data))>>24)
#define  SFG_SFG_patgen_1_get_sfg_pat_r1(data)                                   ((0x00FF0000&(data))>>16)
#define  SFG_SFG_patgen_1_get_sfg_pat_g1(data)                                   ((0x0000FF00&(data))>>8)
#define  SFG_SFG_patgen_1_get_sfg_pat_b1(data)                                   (0x000000FF&(data))

#define  SFG_SFG_patgen_2                                                       0x1802DBFC
#define  SFG_SFG_patgen_2_reg_addr                                               "0xB802DBFC"
#define  SFG_SFG_patgen_2_reg                                                    0xB802DBFC
#define  SFG_SFG_patgen_2_inst_addr                                              "0x007E"
#define  set_SFG_SFG_patgen_2_reg(data)                                          (*((volatile unsigned int*)SFG_SFG_patgen_2_reg)=data)
#define  get_SFG_SFG_patgen_2_reg                                                (*((volatile unsigned int*)SFG_SFG_patgen_2_reg))
#define  SFG_SFG_patgen_2_sfg_pat_w2_shift                                       (24)
#define  SFG_SFG_patgen_2_sfg_pat_r2_shift                                       (16)
#define  SFG_SFG_patgen_2_sfg_pat_g2_shift                                       (8)
#define  SFG_SFG_patgen_2_sfg_pat_b2_shift                                       (0)
#define  SFG_SFG_patgen_2_sfg_pat_w2_mask                                        (0xFF000000)
#define  SFG_SFG_patgen_2_sfg_pat_r2_mask                                        (0x00FF0000)
#define  SFG_SFG_patgen_2_sfg_pat_g2_mask                                        (0x0000FF00)
#define  SFG_SFG_patgen_2_sfg_pat_b2_mask                                        (0x000000FF)
#define  SFG_SFG_patgen_2_sfg_pat_w2(data)                                       (0xFF000000&((data)<<24))
#define  SFG_SFG_patgen_2_sfg_pat_r2(data)                                       (0x00FF0000&((data)<<16))
#define  SFG_SFG_patgen_2_sfg_pat_g2(data)                                       (0x0000FF00&((data)<<8))
#define  SFG_SFG_patgen_2_sfg_pat_b2(data)                                       (0x000000FF&(data))
#define  SFG_SFG_patgen_2_get_sfg_pat_w2(data)                                   ((0xFF000000&(data))>>24)
#define  SFG_SFG_patgen_2_get_sfg_pat_r2(data)                                   ((0x00FF0000&(data))>>16)
#define  SFG_SFG_patgen_2_get_sfg_pat_g2(data)                                   ((0x0000FF00&(data))>>8)
#define  SFG_SFG_patgen_2_get_sfg_pat_b2(data)                                   (0x000000FF&(data))

#define  SFG_SFG_patgen_3                                                       0x1802DC00
#define  SFG_SFG_patgen_3_reg_addr                                               "0xB802DC00"
#define  SFG_SFG_patgen_3_reg                                                    0xB802DC00
#define  SFG_SFG_patgen_3_inst_addr                                              "0x007F"
#define  set_SFG_SFG_patgen_3_reg(data)                                          (*((volatile unsigned int*)SFG_SFG_patgen_3_reg)=data)
#define  get_SFG_SFG_patgen_3_reg                                                (*((volatile unsigned int*)SFG_SFG_patgen_3_reg))
#define  SFG_SFG_patgen_3_sfg_pat_w3_shift                                       (24)
#define  SFG_SFG_patgen_3_sfg_pat_r3_shift                                       (16)
#define  SFG_SFG_patgen_3_sfg_pat_g3_shift                                       (8)
#define  SFG_SFG_patgen_3_sfg_pat_b3_shift                                       (0)
#define  SFG_SFG_patgen_3_sfg_pat_w3_mask                                        (0xFF000000)
#define  SFG_SFG_patgen_3_sfg_pat_r3_mask                                        (0x00FF0000)
#define  SFG_SFG_patgen_3_sfg_pat_g3_mask                                        (0x0000FF00)
#define  SFG_SFG_patgen_3_sfg_pat_b3_mask                                        (0x000000FF)
#define  SFG_SFG_patgen_3_sfg_pat_w3(data)                                       (0xFF000000&((data)<<24))
#define  SFG_SFG_patgen_3_sfg_pat_r3(data)                                       (0x00FF0000&((data)<<16))
#define  SFG_SFG_patgen_3_sfg_pat_g3(data)                                       (0x0000FF00&((data)<<8))
#define  SFG_SFG_patgen_3_sfg_pat_b3(data)                                       (0x000000FF&(data))
#define  SFG_SFG_patgen_3_get_sfg_pat_w3(data)                                   ((0xFF000000&(data))>>24)
#define  SFG_SFG_patgen_3_get_sfg_pat_r3(data)                                   ((0x00FF0000&(data))>>16)
#define  SFG_SFG_patgen_3_get_sfg_pat_g3(data)                                   ((0x0000FF00&(data))>>8)
#define  SFG_SFG_patgen_3_get_sfg_pat_b3(data)                                   (0x000000FF&(data))

#define  SFG_SFG_patgen_4                                                       0x1802DC04
#define  SFG_SFG_patgen_4_reg_addr                                               "0xB802DC04"
#define  SFG_SFG_patgen_4_reg                                                    0xB802DC04
#define  SFG_SFG_patgen_4_inst_addr                                              "0x0080"
#define  set_SFG_SFG_patgen_4_reg(data)                                          (*((volatile unsigned int*)SFG_SFG_patgen_4_reg)=data)
#define  get_SFG_SFG_patgen_4_reg                                                (*((volatile unsigned int*)SFG_SFG_patgen_4_reg))
#define  SFG_SFG_patgen_4_sfg_pat_w4_shift                                       (24)
#define  SFG_SFG_patgen_4_sfg_pat_r4_shift                                       (16)
#define  SFG_SFG_patgen_4_sfg_pat_g4_shift                                       (8)
#define  SFG_SFG_patgen_4_sfg_pat_b4_shift                                       (0)
#define  SFG_SFG_patgen_4_sfg_pat_w4_mask                                        (0xFF000000)
#define  SFG_SFG_patgen_4_sfg_pat_r4_mask                                        (0x00FF0000)
#define  SFG_SFG_patgen_4_sfg_pat_g4_mask                                        (0x0000FF00)
#define  SFG_SFG_patgen_4_sfg_pat_b4_mask                                        (0x000000FF)
#define  SFG_SFG_patgen_4_sfg_pat_w4(data)                                       (0xFF000000&((data)<<24))
#define  SFG_SFG_patgen_4_sfg_pat_r4(data)                                       (0x00FF0000&((data)<<16))
#define  SFG_SFG_patgen_4_sfg_pat_g4(data)                                       (0x0000FF00&((data)<<8))
#define  SFG_SFG_patgen_4_sfg_pat_b4(data)                                       (0x000000FF&(data))
#define  SFG_SFG_patgen_4_get_sfg_pat_w4(data)                                   ((0xFF000000&(data))>>24)
#define  SFG_SFG_patgen_4_get_sfg_pat_r4(data)                                   ((0x00FF0000&(data))>>16)
#define  SFG_SFG_patgen_4_get_sfg_pat_g4(data)                                   ((0x0000FF00&(data))>>8)
#define  SFG_SFG_patgen_4_get_sfg_pat_b4(data)                                   (0x000000FF&(data))

#define  SFG_SFG_patgen_5                                                       0x1802DC08
#define  SFG_SFG_patgen_5_reg_addr                                               "0xB802DC08"
#define  SFG_SFG_patgen_5_reg                                                    0xB802DC08
#define  SFG_SFG_patgen_5_inst_addr                                              "0x0081"
#define  set_SFG_SFG_patgen_5_reg(data)                                          (*((volatile unsigned int*)SFG_SFG_patgen_5_reg)=data)
#define  get_SFG_SFG_patgen_5_reg                                                (*((volatile unsigned int*)SFG_SFG_patgen_5_reg))
#define  SFG_SFG_patgen_5_sfg_pat_w5_shift                                       (24)
#define  SFG_SFG_patgen_5_sfg_pat_r5_shift                                       (16)
#define  SFG_SFG_patgen_5_sfg_pat_g5_shift                                       (8)
#define  SFG_SFG_patgen_5_sfg_pat_b5_shift                                       (0)
#define  SFG_SFG_patgen_5_sfg_pat_w5_mask                                        (0xFF000000)
#define  SFG_SFG_patgen_5_sfg_pat_r5_mask                                        (0x00FF0000)
#define  SFG_SFG_patgen_5_sfg_pat_g5_mask                                        (0x0000FF00)
#define  SFG_SFG_patgen_5_sfg_pat_b5_mask                                        (0x000000FF)
#define  SFG_SFG_patgen_5_sfg_pat_w5(data)                                       (0xFF000000&((data)<<24))
#define  SFG_SFG_patgen_5_sfg_pat_r5(data)                                       (0x00FF0000&((data)<<16))
#define  SFG_SFG_patgen_5_sfg_pat_g5(data)                                       (0x0000FF00&((data)<<8))
#define  SFG_SFG_patgen_5_sfg_pat_b5(data)                                       (0x000000FF&(data))
#define  SFG_SFG_patgen_5_get_sfg_pat_w5(data)                                   ((0xFF000000&(data))>>24)
#define  SFG_SFG_patgen_5_get_sfg_pat_r5(data)                                   ((0x00FF0000&(data))>>16)
#define  SFG_SFG_patgen_5_get_sfg_pat_g5(data)                                   ((0x0000FF00&(data))>>8)
#define  SFG_SFG_patgen_5_get_sfg_pat_b5(data)                                   (0x000000FF&(data))

#define  SFG_SFG_patgen_6                                                       0x1802DC0C
#define  SFG_SFG_patgen_6_reg_addr                                               "0xB802DC0C"
#define  SFG_SFG_patgen_6_reg                                                    0xB802DC0C
#define  SFG_SFG_patgen_6_inst_addr                                              "0x0082"
#define  set_SFG_SFG_patgen_6_reg(data)                                          (*((volatile unsigned int*)SFG_SFG_patgen_6_reg)=data)
#define  get_SFG_SFG_patgen_6_reg                                                (*((volatile unsigned int*)SFG_SFG_patgen_6_reg))
#define  SFG_SFG_patgen_6_sfg_pat_w6_shift                                       (24)
#define  SFG_SFG_patgen_6_sfg_pat_r6_shift                                       (16)
#define  SFG_SFG_patgen_6_sfg_pat_g6_shift                                       (8)
#define  SFG_SFG_patgen_6_sfg_pat_b6_shift                                       (0)
#define  SFG_SFG_patgen_6_sfg_pat_w6_mask                                        (0xFF000000)
#define  SFG_SFG_patgen_6_sfg_pat_r6_mask                                        (0x00FF0000)
#define  SFG_SFG_patgen_6_sfg_pat_g6_mask                                        (0x0000FF00)
#define  SFG_SFG_patgen_6_sfg_pat_b6_mask                                        (0x000000FF)
#define  SFG_SFG_patgen_6_sfg_pat_w6(data)                                       (0xFF000000&((data)<<24))
#define  SFG_SFG_patgen_6_sfg_pat_r6(data)                                       (0x00FF0000&((data)<<16))
#define  SFG_SFG_patgen_6_sfg_pat_g6(data)                                       (0x0000FF00&((data)<<8))
#define  SFG_SFG_patgen_6_sfg_pat_b6(data)                                       (0x000000FF&(data))
#define  SFG_SFG_patgen_6_get_sfg_pat_w6(data)                                   ((0xFF000000&(data))>>24)
#define  SFG_SFG_patgen_6_get_sfg_pat_r6(data)                                   ((0x00FF0000&(data))>>16)
#define  SFG_SFG_patgen_6_get_sfg_pat_g6(data)                                   ((0x0000FF00&(data))>>8)
#define  SFG_SFG_patgen_6_get_sfg_pat_b6(data)                                   (0x000000FF&(data))

#define  SFG_SFG_patgen_7                                                       0x1802DC10
#define  SFG_SFG_patgen_7_reg_addr                                               "0xB802DC10"
#define  SFG_SFG_patgen_7_reg                                                    0xB802DC10
#define  SFG_SFG_patgen_7_inst_addr                                              "0x0083"
#define  set_SFG_SFG_patgen_7_reg(data)                                          (*((volatile unsigned int*)SFG_SFG_patgen_7_reg)=data)
#define  get_SFG_SFG_patgen_7_reg                                                (*((volatile unsigned int*)SFG_SFG_patgen_7_reg))
#define  SFG_SFG_patgen_7_sfg_pat_w7_shift                                       (24)
#define  SFG_SFG_patgen_7_sfg_pat_r7_shift                                       (16)
#define  SFG_SFG_patgen_7_sfg_pat_g7_shift                                       (8)
#define  SFG_SFG_patgen_7_sfg_pat_b7_shift                                       (0)
#define  SFG_SFG_patgen_7_sfg_pat_w7_mask                                        (0xFF000000)
#define  SFG_SFG_patgen_7_sfg_pat_r7_mask                                        (0x00FF0000)
#define  SFG_SFG_patgen_7_sfg_pat_g7_mask                                        (0x0000FF00)
#define  SFG_SFG_patgen_7_sfg_pat_b7_mask                                        (0x000000FF)
#define  SFG_SFG_patgen_7_sfg_pat_w7(data)                                       (0xFF000000&((data)<<24))
#define  SFG_SFG_patgen_7_sfg_pat_r7(data)                                       (0x00FF0000&((data)<<16))
#define  SFG_SFG_patgen_7_sfg_pat_g7(data)                                       (0x0000FF00&((data)<<8))
#define  SFG_SFG_patgen_7_sfg_pat_b7(data)                                       (0x000000FF&(data))
#define  SFG_SFG_patgen_7_get_sfg_pat_w7(data)                                   ((0xFF000000&(data))>>24)
#define  SFG_SFG_patgen_7_get_sfg_pat_r7(data)                                   ((0x00FF0000&(data))>>16)
#define  SFG_SFG_patgen_7_get_sfg_pat_g7(data)                                   ((0x0000FF00&(data))>>8)
#define  SFG_SFG_patgen_7_get_sfg_pat_b7(data)                                   (0x000000FF&(data))

#define  SFG_SFG_patgen_8                                                       0x1802DC14
#define  SFG_SFG_patgen_8_reg_addr                                               "0xB802DC14"
#define  SFG_SFG_patgen_8_reg                                                    0xB802DC14
#define  SFG_SFG_patgen_8_inst_addr                                              "0x0084"
#define  set_SFG_SFG_patgen_8_reg(data)                                          (*((volatile unsigned int*)SFG_SFG_patgen_8_reg)=data)
#define  get_SFG_SFG_patgen_8_reg                                                (*((volatile unsigned int*)SFG_SFG_patgen_8_reg))
#define  SFG_SFG_patgen_8_sfg_pat3_subpix_1_shift                                (16)
#define  SFG_SFG_patgen_8_sfg_pat3_subpix_0_shift                                (0)
#define  SFG_SFG_patgen_8_sfg_pat3_subpix_1_mask                                 (0x03FF0000)
#define  SFG_SFG_patgen_8_sfg_pat3_subpix_0_mask                                 (0x000003FF)
#define  SFG_SFG_patgen_8_sfg_pat3_subpix_1(data)                                (0x03FF0000&((data)<<16))
#define  SFG_SFG_patgen_8_sfg_pat3_subpix_0(data)                                (0x000003FF&(data))
#define  SFG_SFG_patgen_8_get_sfg_pat3_subpix_1(data)                            ((0x03FF0000&(data))>>16)
#define  SFG_SFG_patgen_8_get_sfg_pat3_subpix_0(data)                            (0x000003FF&(data))

#define  SFG_SFG_patgen_9                                                       0x1802DC18
#define  SFG_SFG_patgen_9_reg_addr                                               "0xB802DC18"
#define  SFG_SFG_patgen_9_reg                                                    0xB802DC18
#define  SFG_SFG_patgen_9_inst_addr                                              "0x0085"
#define  set_SFG_SFG_patgen_9_reg(data)                                          (*((volatile unsigned int*)SFG_SFG_patgen_9_reg)=data)
#define  get_SFG_SFG_patgen_9_reg                                                (*((volatile unsigned int*)SFG_SFG_patgen_9_reg))
#define  SFG_SFG_patgen_9_sfg_pat3_line_0_shift                                  (0)
#define  SFG_SFG_patgen_9_sfg_pat3_line_0_mask                                   (0x00FFFFFF)
#define  SFG_SFG_patgen_9_sfg_pat3_line_0(data)                                  (0x00FFFFFF&(data))
#define  SFG_SFG_patgen_9_get_sfg_pat3_line_0(data)                              (0x00FFFFFF&(data))

#define  SFG_SFG_patgen_10                                                      0x1802DC1C
#define  SFG_SFG_patgen_10_reg_addr                                              "0xB802DC1C"
#define  SFG_SFG_patgen_10_reg                                                   0xB802DC1C
#define  SFG_SFG_patgen_10_inst_addr                                             "0x0086"
#define  set_SFG_SFG_patgen_10_reg(data)                                         (*((volatile unsigned int*)SFG_SFG_patgen_10_reg)=data)
#define  get_SFG_SFG_patgen_10_reg                                               (*((volatile unsigned int*)SFG_SFG_patgen_10_reg))
#define  SFG_SFG_patgen_10_sfg_pat3_line_1_shift                                 (0)
#define  SFG_SFG_patgen_10_sfg_pat3_line_1_mask                                  (0x00FFFFFF)
#define  SFG_SFG_patgen_10_sfg_pat3_line_1(data)                                 (0x00FFFFFF&(data))
#define  SFG_SFG_patgen_10_get_sfg_pat3_line_1(data)                             (0x00FFFFFF&(data))

#define  SFG_SFG_patgen_11                                                      0x1802DC20
#define  SFG_SFG_patgen_11_reg_addr                                              "0xB802DC20"
#define  SFG_SFG_patgen_11_reg                                                   0xB802DC20
#define  SFG_SFG_patgen_11_inst_addr                                             "0x0087"
#define  set_SFG_SFG_patgen_11_reg(data)                                         (*((volatile unsigned int*)SFG_SFG_patgen_11_reg)=data)
#define  get_SFG_SFG_patgen_11_reg                                               (*((volatile unsigned int*)SFG_SFG_patgen_11_reg))
#define  SFG_SFG_patgen_11_sfg_pat3_line_2_shift                                 (0)
#define  SFG_SFG_patgen_11_sfg_pat3_line_2_mask                                  (0x00FFFFFF)
#define  SFG_SFG_patgen_11_sfg_pat3_line_2(data)                                 (0x00FFFFFF&(data))
#define  SFG_SFG_patgen_11_get_sfg_pat3_line_2(data)                             (0x00FFFFFF&(data))

#define  SFG_SFG_patgen_12                                                      0x1802DC24
#define  SFG_SFG_patgen_12_reg_addr                                              "0xB802DC24"
#define  SFG_SFG_patgen_12_reg                                                   0xB802DC24
#define  SFG_SFG_patgen_12_inst_addr                                             "0x0088"
#define  set_SFG_SFG_patgen_12_reg(data)                                         (*((volatile unsigned int*)SFG_SFG_patgen_12_reg)=data)
#define  get_SFG_SFG_patgen_12_reg                                               (*((volatile unsigned int*)SFG_SFG_patgen_12_reg))
#define  SFG_SFG_patgen_12_sfg_pat3_line_3_shift                                 (0)
#define  SFG_SFG_patgen_12_sfg_pat3_line_3_mask                                  (0x00FFFFFF)
#define  SFG_SFG_patgen_12_sfg_pat3_line_3(data)                                 (0x00FFFFFF&(data))
#define  SFG_SFG_patgen_12_get_sfg_pat3_line_3(data)                             (0x00FFFFFF&(data))

#define  SFG_SFG_irq_ctrl_0                                                     0x1802DC28
#define  SFG_SFG_irq_ctrl_0_reg_addr                                             "0xB802DC28"
#define  SFG_SFG_irq_ctrl_0_reg                                                  0xB802DC28
#define  SFG_SFG_irq_ctrl_0_inst_addr                                            "0x0089"
#define  set_SFG_SFG_irq_ctrl_0_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_irq_ctrl_0_reg)=data)
#define  get_SFG_SFG_irq_ctrl_0_reg                                              (*((volatile unsigned int*)SFG_SFG_irq_ctrl_0_reg))
#define  SFG_SFG_irq_ctrl_0_sfg_tim_irq_en_shift                                 (0)
#define  SFG_SFG_irq_ctrl_0_sfg_tim_irq_en_mask                                  (0x00000007)
#define  SFG_SFG_irq_ctrl_0_sfg_tim_irq_en(data)                                 (0x00000007&(data))
#define  SFG_SFG_irq_ctrl_0_get_sfg_tim_irq_en(data)                             (0x00000007&(data))

#define  SFG_SFG_irq_ctrl_1                                                     0x1802DC2C
#define  SFG_SFG_irq_ctrl_1_reg_addr                                             "0xB802DC2C"
#define  SFG_SFG_irq_ctrl_1_reg                                                  0xB802DC2C
#define  SFG_SFG_irq_ctrl_1_inst_addr                                            "0x008A"
#define  set_SFG_SFG_irq_ctrl_1_reg(data)                                        (*((volatile unsigned int*)SFG_SFG_irq_ctrl_1_reg)=data)
#define  get_SFG_SFG_irq_ctrl_1_reg                                              (*((volatile unsigned int*)SFG_SFG_irq_ctrl_1_reg))
#define  SFG_SFG_irq_ctrl_1_sfg_tim_irq_flag_shift                               (0)
#define  SFG_SFG_irq_ctrl_1_sfg_tim_irq_flag_mask                                (0x00000007)
#define  SFG_SFG_irq_ctrl_1_sfg_tim_irq_flag(data)                               (0x00000007&(data))
#define  SFG_SFG_irq_ctrl_1_get_sfg_tim_irq_flag(data)                           (0x00000007&(data))

#define  SFG_Pat_det_window_H_ini_sta_width                                     0x1802DC30
#define  SFG_Pat_det_window_H_ini_sta_width_reg_addr                             "0xB802DC30"
#define  SFG_Pat_det_window_H_ini_sta_width_reg                                  0xB802DC30
#define  SFG_Pat_det_window_H_ini_sta_width_inst_addr                            "0x008B"
#define  set_SFG_Pat_det_window_H_ini_sta_width_reg(data)                        (*((volatile unsigned int*)SFG_Pat_det_window_H_ini_sta_width_reg)=data)
#define  get_SFG_Pat_det_window_H_ini_sta_width_reg                              (*((volatile unsigned int*)SFG_Pat_det_window_H_ini_sta_width_reg))
#define  SFG_Pat_det_window_H_ini_sta_width_pat_det_h_ini_sta_shift              (16)
#define  SFG_Pat_det_window_H_ini_sta_width_pat_det_width_shift                  (0)
#define  SFG_Pat_det_window_H_ini_sta_width_pat_det_h_ini_sta_mask               (0x1FFF0000)
#define  SFG_Pat_det_window_H_ini_sta_width_pat_det_width_mask                   (0x00001FFF)
#define  SFG_Pat_det_window_H_ini_sta_width_pat_det_h_ini_sta(data)              (0x1FFF0000&((data)<<16))
#define  SFG_Pat_det_window_H_ini_sta_width_pat_det_width(data)                  (0x00001FFF&(data))
#define  SFG_Pat_det_window_H_ini_sta_width_get_pat_det_h_ini_sta(data)          ((0x1FFF0000&(data))>>16)
#define  SFG_Pat_det_window_H_ini_sta_width_get_pat_det_width(data)              (0x00001FFF&(data))

#define  SFG_Pat_det_window_V_ini_sta_height                                    0x1802DC34
#define  SFG_Pat_det_window_V_ini_sta_height_reg_addr                            "0xB802DC34"
#define  SFG_Pat_det_window_V_ini_sta_height_reg                                 0xB802DC34
#define  SFG_Pat_det_window_V_ini_sta_height_inst_addr                           "0x008C"
#define  set_SFG_Pat_det_window_V_ini_sta_height_reg(data)                       (*((volatile unsigned int*)SFG_Pat_det_window_V_ini_sta_height_reg)=data)
#define  get_SFG_Pat_det_window_V_ini_sta_height_reg                             (*((volatile unsigned int*)SFG_Pat_det_window_V_ini_sta_height_reg))
#define  SFG_Pat_det_window_V_ini_sta_height_pat_det_v_ini_sta_shift             (16)
#define  SFG_Pat_det_window_V_ini_sta_height_pat_det_height_shift                (0)
#define  SFG_Pat_det_window_V_ini_sta_height_pat_det_v_ini_sta_mask              (0x0FFF0000)
#define  SFG_Pat_det_window_V_ini_sta_height_pat_det_height_mask                 (0x00000FFF)
#define  SFG_Pat_det_window_V_ini_sta_height_pat_det_v_ini_sta(data)             (0x0FFF0000&((data)<<16))
#define  SFG_Pat_det_window_V_ini_sta_height_pat_det_height(data)                (0x00000FFF&(data))
#define  SFG_Pat_det_window_V_ini_sta_height_get_pat_det_v_ini_sta(data)         ((0x0FFF0000&(data))>>16)
#define  SFG_Pat_det_window_V_ini_sta_height_get_pat_det_height(data)            (0x00000FFF&(data))

#define  SFG_Pattern_detect_CTRL                                                0x1802DC38
#define  SFG_Pattern_detect_CTRL_reg_addr                                        "0xB802DC38"
#define  SFG_Pattern_detect_CTRL_reg                                             0xB802DC38
#define  SFG_Pattern_detect_CTRL_inst_addr                                       "0x008D"
#define  set_SFG_Pattern_detect_CTRL_reg(data)                                   (*((volatile unsigned int*)SFG_Pattern_detect_CTRL_reg)=data)
#define  get_SFG_Pattern_detect_CTRL_reg                                         (*((volatile unsigned int*)SFG_Pattern_detect_CTRL_reg))
#define  SFG_Pattern_detect_CTRL_met_frame_thresh_shift                          (8)
#define  SFG_Pattern_detect_CTRL_pat_det_en_shift                                (0)
#define  SFG_Pattern_detect_CTRL_met_frame_thresh_mask                           (0x0000FF00)
#define  SFG_Pattern_detect_CTRL_pat_det_en_mask                                 (0x00000001)
#define  SFG_Pattern_detect_CTRL_met_frame_thresh(data)                          (0x0000FF00&((data)<<8))
#define  SFG_Pattern_detect_CTRL_pat_det_en(data)                                (0x00000001&(data))
#define  SFG_Pattern_detect_CTRL_get_met_frame_thresh(data)                      ((0x0000FF00&(data))>>8)
#define  SFG_Pattern_detect_CTRL_get_pat_det_en(data)                            (0x00000001&(data))

#define  SFG_Pat_det_ctrl_1                                                     0x1802DC3C
#define  SFG_Pat_det_ctrl_1_reg_addr                                             "0xB802DC3C"
#define  SFG_Pat_det_ctrl_1_reg                                                  0xB802DC3C
#define  SFG_Pat_det_ctrl_1_inst_addr                                            "0x008E"
#define  set_SFG_Pat_det_ctrl_1_reg(data)                                        (*((volatile unsigned int*)SFG_Pat_det_ctrl_1_reg)=data)
#define  get_SFG_Pat_det_ctrl_1_reg                                              (*((volatile unsigned int*)SFG_Pat_det_ctrl_1_reg))
#define  SFG_Pat_det_ctrl_1_pxl_diff_12_shift                                    (16)
#define  SFG_Pat_det_ctrl_1_pxl_diff_sub_12_shift                                (0)
#define  SFG_Pat_det_ctrl_1_pxl_diff_12_mask                                     (0x03FF0000)
#define  SFG_Pat_det_ctrl_1_pxl_diff_sub_12_mask                                 (0x000003FF)
#define  SFG_Pat_det_ctrl_1_pxl_diff_12(data)                                    (0x03FF0000&((data)<<16))
#define  SFG_Pat_det_ctrl_1_pxl_diff_sub_12(data)                                (0x000003FF&(data))
#define  SFG_Pat_det_ctrl_1_get_pxl_diff_12(data)                                ((0x03FF0000&(data))>>16)
#define  SFG_Pat_det_ctrl_1_get_pxl_diff_sub_12(data)                            (0x000003FF&(data))

#define  SFG_Pat_det_ctrl_2                                                     0x1802DC40
#define  SFG_Pat_det_ctrl_2_reg_addr                                             "0xB802DC40"
#define  SFG_Pat_det_ctrl_2_reg                                                  0xB802DC40
#define  SFG_Pat_det_ctrl_2_inst_addr                                            "0x008F"
#define  set_SFG_Pat_det_ctrl_2_reg(data)                                        (*((volatile unsigned int*)SFG_Pat_det_ctrl_2_reg)=data)
#define  get_SFG_Pat_det_ctrl_2_reg                                              (*((volatile unsigned int*)SFG_Pat_det_ctrl_2_reg))
#define  SFG_Pat_det_ctrl_2_pxl_diff_13_shift                                    (16)
#define  SFG_Pat_det_ctrl_2_pxl_diff_sub_13_shift                                (0)
#define  SFG_Pat_det_ctrl_2_pxl_diff_13_mask                                     (0x03FF0000)
#define  SFG_Pat_det_ctrl_2_pxl_diff_sub_13_mask                                 (0x000003FF)
#define  SFG_Pat_det_ctrl_2_pxl_diff_13(data)                                    (0x03FF0000&((data)<<16))
#define  SFG_Pat_det_ctrl_2_pxl_diff_sub_13(data)                                (0x000003FF&(data))
#define  SFG_Pat_det_ctrl_2_get_pxl_diff_13(data)                                ((0x03FF0000&(data))>>16)
#define  SFG_Pat_det_ctrl_2_get_pxl_diff_sub_13(data)                            (0x000003FF&(data))

#define  SFG_Pat_det_ctrl_3                                                     0x1802DC44
#define  SFG_Pat_det_ctrl_3_reg_addr                                             "0xB802DC44"
#define  SFG_Pat_det_ctrl_3_reg                                                  0xB802DC44
#define  SFG_Pat_det_ctrl_3_inst_addr                                            "0x0090"
#define  set_SFG_Pat_det_ctrl_3_reg(data)                                        (*((volatile unsigned int*)SFG_Pat_det_ctrl_3_reg)=data)
#define  get_SFG_Pat_det_ctrl_3_reg                                              (*((volatile unsigned int*)SFG_Pat_det_ctrl_3_reg))
#define  SFG_Pat_det_ctrl_3_vline_num_thresh_12_shift                            (16)
#define  SFG_Pat_det_ctrl_3_h_num_thresh_12_shift                                (0)
#define  SFG_Pat_det_ctrl_3_vline_num_thresh_12_mask                             (0x0FFF0000)
#define  SFG_Pat_det_ctrl_3_h_num_thresh_12_mask                                 (0x00003FFF)
#define  SFG_Pat_det_ctrl_3_vline_num_thresh_12(data)                            (0x0FFF0000&((data)<<16))
#define  SFG_Pat_det_ctrl_3_h_num_thresh_12(data)                                (0x00003FFF&(data))
#define  SFG_Pat_det_ctrl_3_get_vline_num_thresh_12(data)                        ((0x0FFF0000&(data))>>16)
#define  SFG_Pat_det_ctrl_3_get_h_num_thresh_12(data)                            (0x00003FFF&(data))

#define  SFG_Pat_det_ctrl_4                                                     0x1802DC48
#define  SFG_Pat_det_ctrl_4_reg_addr                                             "0xB802DC48"
#define  SFG_Pat_det_ctrl_4_reg                                                  0xB802DC48
#define  SFG_Pat_det_ctrl_4_inst_addr                                            "0x0091"
#define  set_SFG_Pat_det_ctrl_4_reg(data)                                        (*((volatile unsigned int*)SFG_Pat_det_ctrl_4_reg)=data)
#define  get_SFG_Pat_det_ctrl_4_reg                                              (*((volatile unsigned int*)SFG_Pat_det_ctrl_4_reg))
#define  SFG_Pat_det_ctrl_4_vline_num_thresh_13_shift                            (16)
#define  SFG_Pat_det_ctrl_4_h_num_thresh_13_shift                                (0)
#define  SFG_Pat_det_ctrl_4_vline_num_thresh_13_mask                             (0x0FFF0000)
#define  SFG_Pat_det_ctrl_4_h_num_thresh_13_mask                                 (0x00000FFF)
#define  SFG_Pat_det_ctrl_4_vline_num_thresh_13(data)                            (0x0FFF0000&((data)<<16))
#define  SFG_Pat_det_ctrl_4_h_num_thresh_13(data)                                (0x00000FFF&(data))
#define  SFG_Pat_det_ctrl_4_get_vline_num_thresh_13(data)                        ((0x0FFF0000&(data))>>16)
#define  SFG_Pat_det_ctrl_4_get_h_num_thresh_13(data)                            (0x00000FFF&(data))

#define  SFG_Pat_det_ctrl_5                                                     0x1802DC4C
#define  SFG_Pat_det_ctrl_5_reg_addr                                             "0xB802DC4C"
#define  SFG_Pat_det_ctrl_5_reg                                                  0xB802DC4C
#define  SFG_Pat_det_ctrl_5_inst_addr                                            "0x0092"
#define  set_SFG_Pat_det_ctrl_5_reg(data)                                        (*((volatile unsigned int*)SFG_Pat_det_ctrl_5_reg)=data)
#define  get_SFG_Pat_det_ctrl_5_reg                                              (*((volatile unsigned int*)SFG_Pat_det_ctrl_5_reg))
#define  SFG_Pat_det_ctrl_5_irq_flag_shift                                       (0)
#define  SFG_Pat_det_ctrl_5_irq_flag_mask                                        (0x0001FFFF)
#define  SFG_Pat_det_ctrl_5_irq_flag(data)                                       (0x0001FFFF&(data))
#define  SFG_Pat_det_ctrl_5_get_irq_flag(data)                                   (0x0001FFFF&(data))

#define  SFG_Pat_det_ctrl_7                                                     0x1802DC50
#define  SFG_Pat_det_ctrl_7_reg_addr                                             "0xB802DC50"
#define  SFG_Pat_det_ctrl_7_reg                                                  0xB802DC50
#define  SFG_Pat_det_ctrl_7_inst_addr                                            "0x0093"
#define  set_SFG_Pat_det_ctrl_7_reg(data)                                        (*((volatile unsigned int*)SFG_Pat_det_ctrl_7_reg)=data)
#define  get_SFG_Pat_det_ctrl_7_reg                                              (*((volatile unsigned int*)SFG_Pat_det_ctrl_7_reg))
#define  SFG_Pat_det_ctrl_7_irq_en_shift                                         (0)
#define  SFG_Pat_det_ctrl_7_irq_en_mask                                          (0x0001FFFF)
#define  SFG_Pat_det_ctrl_7_irq_en(data)                                         (0x0001FFFF&(data))
#define  SFG_Pat_det_ctrl_7_get_irq_en(data)                                     (0x0001FFFF&(data))

#define  SFG_Pat_det_ctrl_6                                                     0x1802DC54
#define  SFG_Pat_det_ctrl_6_reg_addr                                             "0xB802DC54"
#define  SFG_Pat_det_ctrl_6_reg                                                  0xB802DC54
#define  SFG_Pat_det_ctrl_6_inst_addr                                            "0x0094"
#define  set_SFG_Pat_det_ctrl_6_reg(data)                                        (*((volatile unsigned int*)SFG_Pat_det_ctrl_6_reg)=data)
#define  get_SFG_Pat_det_ctrl_6_reg                                              (*((volatile unsigned int*)SFG_Pat_det_ctrl_6_reg))
#define  SFG_Pat_det_ctrl_6_vsign_num_thresh_13_shift                            (16)
#define  SFG_Pat_det_ctrl_6_vsign_num_thresh_12_shift                            (0)
#define  SFG_Pat_det_ctrl_6_vsign_num_thresh_13_mask                             (0x03FF0000)
#define  SFG_Pat_det_ctrl_6_vsign_num_thresh_12_mask                             (0x000003FF)
#define  SFG_Pat_det_ctrl_6_vsign_num_thresh_13(data)                            (0x03FF0000&((data)<<16))
#define  SFG_Pat_det_ctrl_6_vsign_num_thresh_12(data)                            (0x000003FF&(data))
#define  SFG_Pat_det_ctrl_6_get_vsign_num_thresh_13(data)                        ((0x03FF0000&(data))>>16)
#define  SFG_Pat_det_ctrl_6_get_vsign_num_thresh_12(data)                        (0x000003FF&(data))

#define  SFG_Pat_det_acc1                                                       0x1802DC58
#define  SFG_Pat_det_acc1_reg_addr                                               "0xB802DC58"
#define  SFG_Pat_det_acc1_reg                                                    0xB802DC58
#define  SFG_Pat_det_acc1_inst_addr                                              "0x0095"
#define  set_SFG_Pat_det_acc1_reg(data)                                          (*((volatile unsigned int*)SFG_Pat_det_acc1_reg)=data)
#define  get_SFG_Pat_det_acc1_reg                                                (*((volatile unsigned int*)SFG_Pat_det_acc1_reg))
#define  SFG_Pat_det_acc1_vsign_eq12_acc_1_shift                                 (16)
#define  SFG_Pat_det_acc1_vsign_eq12_acc_0_shift                                 (0)
#define  SFG_Pat_det_acc1_vsign_eq12_acc_1_mask                                  (0x03FF0000)
#define  SFG_Pat_det_acc1_vsign_eq12_acc_0_mask                                  (0x000003FF)
#define  SFG_Pat_det_acc1_vsign_eq12_acc_1(data)                                 (0x03FF0000&((data)<<16))
#define  SFG_Pat_det_acc1_vsign_eq12_acc_0(data)                                 (0x000003FF&(data))
#define  SFG_Pat_det_acc1_get_vsign_eq12_acc_1(data)                             ((0x03FF0000&(data))>>16)
#define  SFG_Pat_det_acc1_get_vsign_eq12_acc_0(data)                             (0x000003FF&(data))

#define  SFG_Pat_det_acc2                                                       0x1802DC5C
#define  SFG_Pat_det_acc2_reg_addr                                               "0xB802DC5C"
#define  SFG_Pat_det_acc2_reg                                                    0xB802DC5C
#define  SFG_Pat_det_acc2_inst_addr                                              "0x0096"
#define  set_SFG_Pat_det_acc2_reg(data)                                          (*((volatile unsigned int*)SFG_Pat_det_acc2_reg)=data)
#define  get_SFG_Pat_det_acc2_reg                                                (*((volatile unsigned int*)SFG_Pat_det_acc2_reg))
#define  SFG_Pat_det_acc2_vsign_eq12_acc_3_shift                                 (16)
#define  SFG_Pat_det_acc2_vsign_eq12_acc_2_shift                                 (0)
#define  SFG_Pat_det_acc2_vsign_eq12_acc_3_mask                                  (0x03FF0000)
#define  SFG_Pat_det_acc2_vsign_eq12_acc_2_mask                                  (0x000003FF)
#define  SFG_Pat_det_acc2_vsign_eq12_acc_3(data)                                 (0x03FF0000&((data)<<16))
#define  SFG_Pat_det_acc2_vsign_eq12_acc_2(data)                                 (0x000003FF&(data))
#define  SFG_Pat_det_acc2_get_vsign_eq12_acc_3(data)                             ((0x03FF0000&(data))>>16)
#define  SFG_Pat_det_acc2_get_vsign_eq12_acc_2(data)                             (0x000003FF&(data))

#define  SFG_Pat_det_acc3                                                       0x1802DC60
#define  SFG_Pat_det_acc3_reg_addr                                               "0xB802DC60"
#define  SFG_Pat_det_acc3_reg                                                    0xB802DC60
#define  SFG_Pat_det_acc3_inst_addr                                              "0x0097"
#define  set_SFG_Pat_det_acc3_reg(data)                                          (*((volatile unsigned int*)SFG_Pat_det_acc3_reg)=data)
#define  get_SFG_Pat_det_acc3_reg                                                (*((volatile unsigned int*)SFG_Pat_det_acc3_reg))
#define  SFG_Pat_det_acc3_vsign_eq12_acc_5_shift                                 (16)
#define  SFG_Pat_det_acc3_vsign_eq12_acc_4_shift                                 (0)
#define  SFG_Pat_det_acc3_vsign_eq12_acc_5_mask                                  (0x03FF0000)
#define  SFG_Pat_det_acc3_vsign_eq12_acc_4_mask                                  (0x000003FF)
#define  SFG_Pat_det_acc3_vsign_eq12_acc_5(data)                                 (0x03FF0000&((data)<<16))
#define  SFG_Pat_det_acc3_vsign_eq12_acc_4(data)                                 (0x000003FF&(data))
#define  SFG_Pat_det_acc3_get_vsign_eq12_acc_5(data)                             ((0x03FF0000&(data))>>16)
#define  SFG_Pat_det_acc3_get_vsign_eq12_acc_4(data)                             (0x000003FF&(data))

#define  SFG_Pat_det_acc4                                                       0x1802DC64
#define  SFG_Pat_det_acc4_reg_addr                                               "0xB802DC64"
#define  SFG_Pat_det_acc4_reg                                                    0xB802DC64
#define  SFG_Pat_det_acc4_inst_addr                                              "0x0098"
#define  set_SFG_Pat_det_acc4_reg(data)                                          (*((volatile unsigned int*)SFG_Pat_det_acc4_reg)=data)
#define  get_SFG_Pat_det_acc4_reg                                                (*((volatile unsigned int*)SFG_Pat_det_acc4_reg))
#define  SFG_Pat_det_acc4_vsign_eq12_acc_7_shift                                 (16)
#define  SFG_Pat_det_acc4_vsign_eq12_acc_6_shift                                 (0)
#define  SFG_Pat_det_acc4_vsign_eq12_acc_7_mask                                  (0x03FF0000)
#define  SFG_Pat_det_acc4_vsign_eq12_acc_6_mask                                  (0x000003FF)
#define  SFG_Pat_det_acc4_vsign_eq12_acc_7(data)                                 (0x03FF0000&((data)<<16))
#define  SFG_Pat_det_acc4_vsign_eq12_acc_6(data)                                 (0x000003FF&(data))
#define  SFG_Pat_det_acc4_get_vsign_eq12_acc_7(data)                             ((0x03FF0000&(data))>>16)
#define  SFG_Pat_det_acc4_get_vsign_eq12_acc_6(data)                             (0x000003FF&(data))

#define  SFG_Pat_det_acc5                                                       0x1802DC68
#define  SFG_Pat_det_acc5_reg_addr                                               "0xB802DC68"
#define  SFG_Pat_det_acc5_reg                                                    0xB802DC68
#define  SFG_Pat_det_acc5_inst_addr                                              "0x0099"
#define  set_SFG_Pat_det_acc5_reg(data)                                          (*((volatile unsigned int*)SFG_Pat_det_acc5_reg)=data)
#define  get_SFG_Pat_det_acc5_reg                                                (*((volatile unsigned int*)SFG_Pat_det_acc5_reg))
#define  SFG_Pat_det_acc5_vsign_eq13_acc_1_shift                                 (16)
#define  SFG_Pat_det_acc5_vsign_eq13_acc_0_shift                                 (0)
#define  SFG_Pat_det_acc5_vsign_eq13_acc_1_mask                                  (0x03FF0000)
#define  SFG_Pat_det_acc5_vsign_eq13_acc_0_mask                                  (0x000003FF)
#define  SFG_Pat_det_acc5_vsign_eq13_acc_1(data)                                 (0x03FF0000&((data)<<16))
#define  SFG_Pat_det_acc5_vsign_eq13_acc_0(data)                                 (0x000003FF&(data))
#define  SFG_Pat_det_acc5_get_vsign_eq13_acc_1(data)                             ((0x03FF0000&(data))>>16)
#define  SFG_Pat_det_acc5_get_vsign_eq13_acc_0(data)                             (0x000003FF&(data))

#define  SFG_Pat_det_acc6                                                       0x1802DC6C
#define  SFG_Pat_det_acc6_reg_addr                                               "0xB802DC6C"
#define  SFG_Pat_det_acc6_reg                                                    0xB802DC6C
#define  SFG_Pat_det_acc6_inst_addr                                              "0x009A"
#define  set_SFG_Pat_det_acc6_reg(data)                                          (*((volatile unsigned int*)SFG_Pat_det_acc6_reg)=data)
#define  get_SFG_Pat_det_acc6_reg                                                (*((volatile unsigned int*)SFG_Pat_det_acc6_reg))
#define  SFG_Pat_det_acc6_vsign_eq13_acc_3_shift                                 (16)
#define  SFG_Pat_det_acc6_vsign_eq13_acc_2_shift                                 (0)
#define  SFG_Pat_det_acc6_vsign_eq13_acc_3_mask                                  (0x03FF0000)
#define  SFG_Pat_det_acc6_vsign_eq13_acc_2_mask                                  (0x000003FF)
#define  SFG_Pat_det_acc6_vsign_eq13_acc_3(data)                                 (0x03FF0000&((data)<<16))
#define  SFG_Pat_det_acc6_vsign_eq13_acc_2(data)                                 (0x000003FF&(data))
#define  SFG_Pat_det_acc6_get_vsign_eq13_acc_3(data)                             ((0x03FF0000&(data))>>16)
#define  SFG_Pat_det_acc6_get_vsign_eq13_acc_2(data)                             (0x000003FF&(data))

#define  SFG_Pat_det_acc7                                                       0x1802DC70
#define  SFG_Pat_det_acc7_reg_addr                                               "0xB802DC70"
#define  SFG_Pat_det_acc7_reg                                                    0xB802DC70
#define  SFG_Pat_det_acc7_inst_addr                                              "0x009B"
#define  set_SFG_Pat_det_acc7_reg(data)                                          (*((volatile unsigned int*)SFG_Pat_det_acc7_reg)=data)
#define  get_SFG_Pat_det_acc7_reg                                                (*((volatile unsigned int*)SFG_Pat_det_acc7_reg))
#define  SFG_Pat_det_acc7_vsign_eq13_acc_5_shift                                 (16)
#define  SFG_Pat_det_acc7_vsign_eq13_acc_4_shift                                 (0)
#define  SFG_Pat_det_acc7_vsign_eq13_acc_5_mask                                  (0x03FF0000)
#define  SFG_Pat_det_acc7_vsign_eq13_acc_4_mask                                  (0x000003FF)
#define  SFG_Pat_det_acc7_vsign_eq13_acc_5(data)                                 (0x03FF0000&((data)<<16))
#define  SFG_Pat_det_acc7_vsign_eq13_acc_4(data)                                 (0x000003FF&(data))
#define  SFG_Pat_det_acc7_get_vsign_eq13_acc_5(data)                             ((0x03FF0000&(data))>>16)
#define  SFG_Pat_det_acc7_get_vsign_eq13_acc_4(data)                             (0x000003FF&(data))

#define  SFG_Pat_det_acc8                                                       0x1802DC74
#define  SFG_Pat_det_acc8_reg_addr                                               "0xB802DC74"
#define  SFG_Pat_det_acc8_reg                                                    0xB802DC74
#define  SFG_Pat_det_acc8_inst_addr                                              "0x009C"
#define  set_SFG_Pat_det_acc8_reg(data)                                          (*((volatile unsigned int*)SFG_Pat_det_acc8_reg)=data)
#define  get_SFG_Pat_det_acc8_reg                                                (*((volatile unsigned int*)SFG_Pat_det_acc8_reg))
#define  SFG_Pat_det_acc8_vsign_eq13_acc_7_shift                                 (16)
#define  SFG_Pat_det_acc8_vsign_eq13_acc_6_shift                                 (0)
#define  SFG_Pat_det_acc8_vsign_eq13_acc_7_mask                                  (0x03FF0000)
#define  SFG_Pat_det_acc8_vsign_eq13_acc_6_mask                                  (0x000003FF)
#define  SFG_Pat_det_acc8_vsign_eq13_acc_7(data)                                 (0x03FF0000&((data)<<16))
#define  SFG_Pat_det_acc8_vsign_eq13_acc_6(data)                                 (0x000003FF&(data))
#define  SFG_Pat_det_acc8_get_vsign_eq13_acc_7(data)                             ((0x03FF0000&(data))>>16)
#define  SFG_Pat_det_acc8_get_vsign_eq13_acc_6(data)                             (0x000003FF&(data))

#define  SFG_Pat_det_acc9                                                       0x1802DC78
#define  SFG_Pat_det_acc9_reg_addr                                               "0xB802DC78"
#define  SFG_Pat_det_acc9_reg                                                    0xB802DC78
#define  SFG_Pat_det_acc9_inst_addr                                              "0x009D"
#define  set_SFG_Pat_det_acc9_reg(data)                                          (*((volatile unsigned int*)SFG_Pat_det_acc9_reg)=data)
#define  get_SFG_Pat_det_acc9_reg                                                (*((volatile unsigned int*)SFG_Pat_det_acc9_reg))
#define  SFG_Pat_det_acc9_frame_eq12_acc_3_shift                                 (24)
#define  SFG_Pat_det_acc9_frame_eq12_acc_2_shift                                 (16)
#define  SFG_Pat_det_acc9_frame_eq12_acc_1_shift                                 (8)
#define  SFG_Pat_det_acc9_frame_eq12_acc_0_shift                                 (0)
#define  SFG_Pat_det_acc9_frame_eq12_acc_3_mask                                  (0xFF000000)
#define  SFG_Pat_det_acc9_frame_eq12_acc_2_mask                                  (0x00FF0000)
#define  SFG_Pat_det_acc9_frame_eq12_acc_1_mask                                  (0x0000FF00)
#define  SFG_Pat_det_acc9_frame_eq12_acc_0_mask                                  (0x000000FF)
#define  SFG_Pat_det_acc9_frame_eq12_acc_3(data)                                 (0xFF000000&((data)<<24))
#define  SFG_Pat_det_acc9_frame_eq12_acc_2(data)                                 (0x00FF0000&((data)<<16))
#define  SFG_Pat_det_acc9_frame_eq12_acc_1(data)                                 (0x0000FF00&((data)<<8))
#define  SFG_Pat_det_acc9_frame_eq12_acc_0(data)                                 (0x000000FF&(data))
#define  SFG_Pat_det_acc9_get_frame_eq12_acc_3(data)                             ((0xFF000000&(data))>>24)
#define  SFG_Pat_det_acc9_get_frame_eq12_acc_2(data)                             ((0x00FF0000&(data))>>16)
#define  SFG_Pat_det_acc9_get_frame_eq12_acc_1(data)                             ((0x0000FF00&(data))>>8)
#define  SFG_Pat_det_acc9_get_frame_eq12_acc_0(data)                             (0x000000FF&(data))

#define  SFG_Pat_det_acc10                                                      0x1802DC7C
#define  SFG_Pat_det_acc10_reg_addr                                              "0xB802DC7C"
#define  SFG_Pat_det_acc10_reg                                                   0xB802DC7C
#define  SFG_Pat_det_acc10_inst_addr                                             "0x009E"
#define  set_SFG_Pat_det_acc10_reg(data)                                         (*((volatile unsigned int*)SFG_Pat_det_acc10_reg)=data)
#define  get_SFG_Pat_det_acc10_reg                                               (*((volatile unsigned int*)SFG_Pat_det_acc10_reg))
#define  SFG_Pat_det_acc10_frame_eq12_acc_7_shift                                (24)
#define  SFG_Pat_det_acc10_frame_eq12_acc_6_shift                                (16)
#define  SFG_Pat_det_acc10_frame_eq12_acc_5_shift                                (8)
#define  SFG_Pat_det_acc10_frame_eq12_acc_4_shift                                (0)
#define  SFG_Pat_det_acc10_frame_eq12_acc_7_mask                                 (0xFF000000)
#define  SFG_Pat_det_acc10_frame_eq12_acc_6_mask                                 (0x00FF0000)
#define  SFG_Pat_det_acc10_frame_eq12_acc_5_mask                                 (0x0000FF00)
#define  SFG_Pat_det_acc10_frame_eq12_acc_4_mask                                 (0x000000FF)
#define  SFG_Pat_det_acc10_frame_eq12_acc_7(data)                                (0xFF000000&((data)<<24))
#define  SFG_Pat_det_acc10_frame_eq12_acc_6(data)                                (0x00FF0000&((data)<<16))
#define  SFG_Pat_det_acc10_frame_eq12_acc_5(data)                                (0x0000FF00&((data)<<8))
#define  SFG_Pat_det_acc10_frame_eq12_acc_4(data)                                (0x000000FF&(data))
#define  SFG_Pat_det_acc10_get_frame_eq12_acc_7(data)                            ((0xFF000000&(data))>>24)
#define  SFG_Pat_det_acc10_get_frame_eq12_acc_6(data)                            ((0x00FF0000&(data))>>16)
#define  SFG_Pat_det_acc10_get_frame_eq12_acc_5(data)                            ((0x0000FF00&(data))>>8)
#define  SFG_Pat_det_acc10_get_frame_eq12_acc_4(data)                            (0x000000FF&(data))

#define  SFG_Pat_det_acc11                                                      0x1802DC80
#define  SFG_Pat_det_acc11_reg_addr                                              "0xB802DC80"
#define  SFG_Pat_det_acc11_reg                                                   0xB802DC80
#define  SFG_Pat_det_acc11_inst_addr                                             "0x009F"
#define  set_SFG_Pat_det_acc11_reg(data)                                         (*((volatile unsigned int*)SFG_Pat_det_acc11_reg)=data)
#define  get_SFG_Pat_det_acc11_reg                                               (*((volatile unsigned int*)SFG_Pat_det_acc11_reg))
#define  SFG_Pat_det_acc11_frame_eq13_acc_3_shift                                (24)
#define  SFG_Pat_det_acc11_frame_eq13_acc_2_shift                                (16)
#define  SFG_Pat_det_acc11_frame_eq13_acc_1_shift                                (8)
#define  SFG_Pat_det_acc11_frame_eq13_acc_0_shift                                (0)
#define  SFG_Pat_det_acc11_frame_eq13_acc_3_mask                                 (0xFF000000)
#define  SFG_Pat_det_acc11_frame_eq13_acc_2_mask                                 (0x00FF0000)
#define  SFG_Pat_det_acc11_frame_eq13_acc_1_mask                                 (0x0000FF00)
#define  SFG_Pat_det_acc11_frame_eq13_acc_0_mask                                 (0x000000FF)
#define  SFG_Pat_det_acc11_frame_eq13_acc_3(data)                                (0xFF000000&((data)<<24))
#define  SFG_Pat_det_acc11_frame_eq13_acc_2(data)                                (0x00FF0000&((data)<<16))
#define  SFG_Pat_det_acc11_frame_eq13_acc_1(data)                                (0x0000FF00&((data)<<8))
#define  SFG_Pat_det_acc11_frame_eq13_acc_0(data)                                (0x000000FF&(data))
#define  SFG_Pat_det_acc11_get_frame_eq13_acc_3(data)                            ((0xFF000000&(data))>>24)
#define  SFG_Pat_det_acc11_get_frame_eq13_acc_2(data)                            ((0x00FF0000&(data))>>16)
#define  SFG_Pat_det_acc11_get_frame_eq13_acc_1(data)                            ((0x0000FF00&(data))>>8)
#define  SFG_Pat_det_acc11_get_frame_eq13_acc_0(data)                            (0x000000FF&(data))

#define  SFG_Pat_det_acc12                                                      0x1802DC84
#define  SFG_Pat_det_acc12_reg_addr                                              "0xB802DC84"
#define  SFG_Pat_det_acc12_reg                                                   0xB802DC84
#define  SFG_Pat_det_acc12_inst_addr                                             "0x00A0"
#define  set_SFG_Pat_det_acc12_reg(data)                                         (*((volatile unsigned int*)SFG_Pat_det_acc12_reg)=data)
#define  get_SFG_Pat_det_acc12_reg                                               (*((volatile unsigned int*)SFG_Pat_det_acc12_reg))
#define  SFG_Pat_det_acc12_frame_eq13_acc_7_shift                                (24)
#define  SFG_Pat_det_acc12_frame_eq13_acc_6_shift                                (16)
#define  SFG_Pat_det_acc12_frame_eq13_acc_5_shift                                (8)
#define  SFG_Pat_det_acc12_frame_eq13_acc_4_shift                                (0)
#define  SFG_Pat_det_acc12_frame_eq13_acc_7_mask                                 (0xFF000000)
#define  SFG_Pat_det_acc12_frame_eq13_acc_6_mask                                 (0x00FF0000)
#define  SFG_Pat_det_acc12_frame_eq13_acc_5_mask                                 (0x0000FF00)
#define  SFG_Pat_det_acc12_frame_eq13_acc_4_mask                                 (0x000000FF)
#define  SFG_Pat_det_acc12_frame_eq13_acc_7(data)                                (0xFF000000&((data)<<24))
#define  SFG_Pat_det_acc12_frame_eq13_acc_6(data)                                (0x00FF0000&((data)<<16))
#define  SFG_Pat_det_acc12_frame_eq13_acc_5(data)                                (0x0000FF00&((data)<<8))
#define  SFG_Pat_det_acc12_frame_eq13_acc_4(data)                                (0x000000FF&(data))
#define  SFG_Pat_det_acc12_get_frame_eq13_acc_7(data)                            ((0xFF000000&(data))>>24)
#define  SFG_Pat_det_acc12_get_frame_eq13_acc_6(data)                            ((0x00FF0000&(data))>>16)
#define  SFG_Pat_det_acc12_get_frame_eq13_acc_5(data)                            ((0x0000FF00&(data))>>8)
#define  SFG_Pat_det_acc12_get_frame_eq13_acc_4(data)                            (0x000000FF&(data))

#define  SFG_Pat_det_acc13                                                      0x1802DC88
#define  SFG_Pat_det_acc13_reg_addr                                              "0xB802DC88"
#define  SFG_Pat_det_acc13_reg                                                   0xB802DC88
#define  SFG_Pat_det_acc13_inst_addr                                             "0x00A1"
#define  set_SFG_Pat_det_acc13_reg(data)                                         (*((volatile unsigned int*)SFG_Pat_det_acc13_reg)=data)
#define  get_SFG_Pat_det_acc13_reg                                               (*((volatile unsigned int*)SFG_Pat_det_acc13_reg))
#define  SFG_Pat_det_acc13_frame_other_acc_shift                                 (0)
#define  SFG_Pat_det_acc13_frame_other_acc_mask                                  (0x000000FF)
#define  SFG_Pat_det_acc13_frame_other_acc(data)                                 (0x000000FF&(data))
#define  SFG_Pat_det_acc13_get_frame_other_acc(data)                             (0x000000FF&(data))

#define  SFG_Debug_pin                                                          0x1802DC90
#define  SFG_Debug_pin_reg_addr                                                  "0xB802DC90"
#define  SFG_Debug_pin_reg                                                       0xB802DC90
#define  SFG_Debug_pin_inst_addr                                                 "0x00A2"
#define  set_SFG_Debug_pin_reg(data)                                             (*((volatile unsigned int*)SFG_Debug_pin_reg)=data)
#define  get_SFG_Debug_pin_reg                                                   (*((volatile unsigned int*)SFG_Debug_pin_reg))
#define  SFG_Debug_pin_sfg_tst_out_shift                                         (0)
#define  SFG_Debug_pin_sfg_tst_out_mask                                          (0xFFFFFFFF)
#define  SFG_Debug_pin_sfg_tst_out(data)                                         (0xFFFFFFFF&(data))
#define  SFG_Debug_pin_get_sfg_tst_out(data)                                     (0xFFFFFFFF&(data))

#define  SFG_SFG2_CTRL_0                                                        0x1802DA30
#define  SFG_SFG2_CTRL_0_reg_addr                                                "0xB802DA30"
#define  SFG_SFG2_CTRL_0_reg                                                     0xB802DA30
#define  SFG_SFG2_CTRL_0_inst_addr                                               "0x00A3"
#define  set_SFG_SFG2_CTRL_0_reg(data)                                           (*((volatile unsigned int*)SFG_SFG2_CTRL_0_reg)=data)
#define  get_SFG_SFG2_CTRL_0_reg                                                 (*((volatile unsigned int*)SFG_SFG2_CTRL_0_reg))
#define  SFG_SFG2_CTRL_0_sfg2_in_data_inv_shift                                  (31)
#define  SFG_SFG2_CTRL_0_sfg2_osd_en_shift                                       (30)
#define  SFG_SFG2_CTRL_0_sfg2_bypass_mode_shift                                  (27)
#define  SFG_SFG2_CTRL_0_sfg2_tg_auto_cfg_shift                                  (26)
#define  SFG_SFG2_CTRL_0_sfg2_dout_en_shift                                      (25)
#define  SFG_SFG2_CTRL_0_sfg2_h_flip_en_shift                                    (8)
#define  SFG_SFG2_CTRL_0_sfg2_seg_num_shift                                      (4)
#define  SFG_SFG2_CTRL_0_sfg2_port_num_shift                                     (0)
#define  SFG_SFG2_CTRL_0_sfg2_in_data_inv_mask                                   (0x80000000)
#define  SFG_SFG2_CTRL_0_sfg2_osd_en_mask                                        (0x40000000)
#define  SFG_SFG2_CTRL_0_sfg2_bypass_mode_mask                                   (0x08000000)
#define  SFG_SFG2_CTRL_0_sfg2_tg_auto_cfg_mask                                   (0x04000000)
#define  SFG_SFG2_CTRL_0_sfg2_dout_en_mask                                       (0x02000000)
#define  SFG_SFG2_CTRL_0_sfg2_h_flip_en_mask                                     (0x00000100)
#define  SFG_SFG2_CTRL_0_sfg2_seg_num_mask                                       (0x000000F0)
#define  SFG_SFG2_CTRL_0_sfg2_port_num_mask                                      (0x0000000F)
#define  SFG_SFG2_CTRL_0_sfg2_in_data_inv(data)                                  (0x80000000&((data)<<31))
#define  SFG_SFG2_CTRL_0_sfg2_osd_en(data)                                       (0x40000000&((data)<<30))
#define  SFG_SFG2_CTRL_0_sfg2_bypass_mode(data)                                  (0x08000000&((data)<<27))
#define  SFG_SFG2_CTRL_0_sfg2_tg_auto_cfg(data)                                  (0x04000000&((data)<<26))
#define  SFG_SFG2_CTRL_0_sfg2_dout_en(data)                                      (0x02000000&((data)<<25))
#define  SFG_SFG2_CTRL_0_sfg2_h_flip_en(data)                                    (0x00000100&((data)<<8))
#define  SFG_SFG2_CTRL_0_sfg2_seg_num(data)                                      (0x000000F0&((data)<<4))
#define  SFG_SFG2_CTRL_0_sfg2_port_num(data)                                     (0x0000000F&(data))
#define  SFG_SFG2_CTRL_0_get_sfg2_in_data_inv(data)                              ((0x80000000&(data))>>31)
#define  SFG_SFG2_CTRL_0_get_sfg2_osd_en(data)                                   ((0x40000000&(data))>>30)
#define  SFG_SFG2_CTRL_0_get_sfg2_bypass_mode(data)                              ((0x08000000&(data))>>27)
#define  SFG_SFG2_CTRL_0_get_sfg2_tg_auto_cfg(data)                              ((0x04000000&(data))>>26)
#define  SFG_SFG2_CTRL_0_get_sfg2_dout_en(data)                                  ((0x02000000&(data))>>25)
#define  SFG_SFG2_CTRL_0_get_sfg2_h_flip_en(data)                                ((0x00000100&(data))>>8)
#define  SFG_SFG2_CTRL_0_get_sfg2_seg_num(data)                                  ((0x000000F0&(data))>>4)
#define  SFG_SFG2_CTRL_0_get_sfg2_port_num(data)                                 (0x0000000F&(data))

#define  SFG_SFG2_PORT_SWAP                                                     0x1802DA44
#define  SFG_SFG2_PORT_SWAP_reg_addr                                             "0xB802DA44"
#define  SFG_SFG2_PORT_SWAP_reg                                                  0xB802DA44
#define  SFG_SFG2_PORT_SWAP_inst_addr                                            "0x00A4"
#define  set_SFG_SFG2_PORT_SWAP_reg(data)                                        (*((volatile unsigned int*)SFG_SFG2_PORT_SWAP_reg)=data)
#define  get_SFG_SFG2_PORT_SWAP_reg                                              (*((volatile unsigned int*)SFG_SFG2_PORT_SWAP_reg))
#define  SFG_SFG2_PORT_SWAP_sfg2_port_0_shift                                    (28)
#define  SFG_SFG2_PORT_SWAP_sfg2_port_1_shift                                    (24)
#define  SFG_SFG2_PORT_SWAP_sfg2_port_2_shift                                    (20)
#define  SFG_SFG2_PORT_SWAP_sfg2_port_3_shift                                    (16)
#define  SFG_SFG2_PORT_SWAP_sfg2_port_4_shift                                    (12)
#define  SFG_SFG2_PORT_SWAP_sfg2_port_5_shift                                    (8)
#define  SFG_SFG2_PORT_SWAP_sfg2_port_6_shift                                    (4)
#define  SFG_SFG2_PORT_SWAP_sfg2_port_7_shift                                    (0)
#define  SFG_SFG2_PORT_SWAP_sfg2_port_0_mask                                     (0xF0000000)
#define  SFG_SFG2_PORT_SWAP_sfg2_port_1_mask                                     (0x0F000000)
#define  SFG_SFG2_PORT_SWAP_sfg2_port_2_mask                                     (0x00F00000)
#define  SFG_SFG2_PORT_SWAP_sfg2_port_3_mask                                     (0x000F0000)
#define  SFG_SFG2_PORT_SWAP_sfg2_port_4_mask                                     (0x0000F000)
#define  SFG_SFG2_PORT_SWAP_sfg2_port_5_mask                                     (0x00000F00)
#define  SFG_SFG2_PORT_SWAP_sfg2_port_6_mask                                     (0x000000F0)
#define  SFG_SFG2_PORT_SWAP_sfg2_port_7_mask                                     (0x0000000F)
#define  SFG_SFG2_PORT_SWAP_sfg2_port_0(data)                                    (0xF0000000&((data)<<28))
#define  SFG_SFG2_PORT_SWAP_sfg2_port_1(data)                                    (0x0F000000&((data)<<24))
#define  SFG_SFG2_PORT_SWAP_sfg2_port_2(data)                                    (0x00F00000&((data)<<20))
#define  SFG_SFG2_PORT_SWAP_sfg2_port_3(data)                                    (0x000F0000&((data)<<16))
#define  SFG_SFG2_PORT_SWAP_sfg2_port_4(data)                                    (0x0000F000&((data)<<12))
#define  SFG_SFG2_PORT_SWAP_sfg2_port_5(data)                                    (0x00000F00&((data)<<8))
#define  SFG_SFG2_PORT_SWAP_sfg2_port_6(data)                                    (0x000000F0&((data)<<4))
#define  SFG_SFG2_PORT_SWAP_sfg2_port_7(data)                                    (0x0000000F&(data))
#define  SFG_SFG2_PORT_SWAP_get_sfg2_port_0(data)                                ((0xF0000000&(data))>>28)
#define  SFG_SFG2_PORT_SWAP_get_sfg2_port_1(data)                                ((0x0F000000&(data))>>24)
#define  SFG_SFG2_PORT_SWAP_get_sfg2_port_2(data)                                ((0x00F00000&(data))>>20)
#define  SFG_SFG2_PORT_SWAP_get_sfg2_port_3(data)                                ((0x000F0000&(data))>>16)
#define  SFG_SFG2_PORT_SWAP_get_sfg2_port_4(data)                                ((0x0000F000&(data))>>12)
#define  SFG_SFG2_PORT_SWAP_get_sfg2_port_5(data)                                ((0x00000F00&(data))>>8)
#define  SFG_SFG2_PORT_SWAP_get_sfg2_port_6(data)                                ((0x000000F0&(data))>>4)
#define  SFG_SFG2_PORT_SWAP_get_sfg2_port_7(data)                                (0x0000000F&(data))

#define  SFG_SFG2_FORCE_0                                                       0x1802DA48
#define  SFG_SFG2_FORCE_0_reg_addr                                               "0xB802DA48"
#define  SFG_SFG2_FORCE_0_reg                                                    0xB802DA48
#define  SFG_SFG2_FORCE_0_inst_addr                                              "0x00A5"
#define  set_SFG_SFG2_FORCE_0_reg(data)                                          (*((volatile unsigned int*)SFG_SFG2_FORCE_0_reg)=data)
#define  get_SFG_SFG2_FORCE_0_reg                                                (*((volatile unsigned int*)SFG_SFG2_FORCE_0_reg))
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_en_shift                                 (31)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_7_shift                             (7)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_6_shift                             (6)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_5_shift                             (5)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_4_shift                             (4)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_3_shift                             (3)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_2_shift                             (2)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_1_shift                             (1)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_0_shift                             (0)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_en_mask                                  (0x80000000)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_7_mask                              (0x00000080)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_6_mask                              (0x00000040)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_5_mask                              (0x00000020)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_4_mask                              (0x00000010)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_3_mask                              (0x00000008)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_2_mask                              (0x00000004)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_1_mask                              (0x00000002)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_0_mask                              (0x00000001)
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_en(data)                                 (0x80000000&((data)<<31))
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_7(data)                             (0x00000080&((data)<<7))
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_6(data)                             (0x00000040&((data)<<6))
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_5(data)                             (0x00000020&((data)<<5))
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_4(data)                             (0x00000010&((data)<<4))
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_3(data)                             (0x00000008&((data)<<3))
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_2(data)                             (0x00000004&((data)<<2))
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_1(data)                             (0x00000002&((data)<<1))
#define  SFG_SFG2_FORCE_0_sfg2_force_bg_port_0(data)                             (0x00000001&(data))
#define  SFG_SFG2_FORCE_0_get_sfg2_force_bg_en(data)                             ((0x80000000&(data))>>31)
#define  SFG_SFG2_FORCE_0_get_sfg2_force_bg_port_7(data)                         ((0x00000080&(data))>>7)
#define  SFG_SFG2_FORCE_0_get_sfg2_force_bg_port_6(data)                         ((0x00000040&(data))>>6)
#define  SFG_SFG2_FORCE_0_get_sfg2_force_bg_port_5(data)                         ((0x00000020&(data))>>5)
#define  SFG_SFG2_FORCE_0_get_sfg2_force_bg_port_4(data)                         ((0x00000010&(data))>>4)
#define  SFG_SFG2_FORCE_0_get_sfg2_force_bg_port_3(data)                         ((0x00000008&(data))>>3)
#define  SFG_SFG2_FORCE_0_get_sfg2_force_bg_port_2(data)                         ((0x00000004&(data))>>2)
#define  SFG_SFG2_FORCE_0_get_sfg2_force_bg_port_1(data)                         ((0x00000002&(data))>>1)
#define  SFG_SFG2_FORCE_0_get_sfg2_force_bg_port_0(data)                         (0x00000001&(data))

#define  SFG_SFG2_FORCE_1                                                       0x1802DA4C
#define  SFG_SFG2_FORCE_1_reg_addr                                               "0xB802DA4C"
#define  SFG_SFG2_FORCE_1_reg                                                    0xB802DA4C
#define  SFG_SFG2_FORCE_1_inst_addr                                              "0x00A6"
#define  set_SFG_SFG2_FORCE_1_reg(data)                                          (*((volatile unsigned int*)SFG_SFG2_FORCE_1_reg)=data)
#define  get_SFG_SFG2_FORCE_1_reg                                                (*((volatile unsigned int*)SFG_SFG2_FORCE_1_reg))
#define  SFG_SFG2_FORCE_1_sfg2_bg_a_shift                                        (24)
#define  SFG_SFG2_FORCE_1_sfg2_bg_r_shift                                        (16)
#define  SFG_SFG2_FORCE_1_sfg2_bg_g_shift                                        (8)
#define  SFG_SFG2_FORCE_1_sfg2_bg_b_shift                                        (0)
#define  SFG_SFG2_FORCE_1_sfg2_bg_a_mask                                         (0xFF000000)
#define  SFG_SFG2_FORCE_1_sfg2_bg_r_mask                                         (0x00FF0000)
#define  SFG_SFG2_FORCE_1_sfg2_bg_g_mask                                         (0x0000FF00)
#define  SFG_SFG2_FORCE_1_sfg2_bg_b_mask                                         (0x000000FF)
#define  SFG_SFG2_FORCE_1_sfg2_bg_a(data)                                        (0xFF000000&((data)<<24))
#define  SFG_SFG2_FORCE_1_sfg2_bg_r(data)                                        (0x00FF0000&((data)<<16))
#define  SFG_SFG2_FORCE_1_sfg2_bg_g(data)                                        (0x0000FF00&((data)<<8))
#define  SFG_SFG2_FORCE_1_sfg2_bg_b(data)                                        (0x000000FF&(data))
#define  SFG_SFG2_FORCE_1_get_sfg2_bg_a(data)                                    ((0xFF000000&(data))>>24)
#define  SFG_SFG2_FORCE_1_get_sfg2_bg_r(data)                                    ((0x00FF0000&(data))>>16)
#define  SFG_SFG2_FORCE_1_get_sfg2_bg_g(data)                                    ((0x0000FF00&(data))>>8)
#define  SFG_SFG2_FORCE_1_get_sfg2_bg_b(data)                                    (0x000000FF&(data))

#define  SFG_SFG2_CRC_CTRL                                                      0x1802DA50
#define  SFG_SFG2_CRC_CTRL_reg_addr                                              "0xB802DA50"
#define  SFG_SFG2_CRC_CTRL_reg                                                   0xB802DA50
#define  SFG_SFG2_CRC_CTRL_inst_addr                                             "0x00A7"
#define  set_SFG_SFG2_CRC_CTRL_reg(data)                                         (*((volatile unsigned int*)SFG_SFG2_CRC_CTRL_reg)=data)
#define  get_SFG_SFG2_CRC_CTRL_reg                                               (*((volatile unsigned int*)SFG_SFG2_CRC_CTRL_reg))
#define  SFG_SFG2_CRC_CTRL_sfg2_crc_mode_shift                                   (4)
#define  SFG_SFG2_CRC_CTRL_sfg2_crc_l_auto_cmp_en_shift                          (3)
#define  SFG_SFG2_CRC_CTRL_sfg2_crc_r_auto_cmp_en_shift                          (2)
#define  SFG_SFG2_CRC_CTRL_sfg2_crc_conti_shift                                  (1)
#define  SFG_SFG2_CRC_CTRL_sfg2_crc_start_shift                                  (0)
#define  SFG_SFG2_CRC_CTRL_sfg2_crc_mode_mask                                    (0x00000010)
#define  SFG_SFG2_CRC_CTRL_sfg2_crc_l_auto_cmp_en_mask                           (0x00000008)
#define  SFG_SFG2_CRC_CTRL_sfg2_crc_r_auto_cmp_en_mask                           (0x00000004)
#define  SFG_SFG2_CRC_CTRL_sfg2_crc_conti_mask                                   (0x00000002)
#define  SFG_SFG2_CRC_CTRL_sfg2_crc_start_mask                                   (0x00000001)
#define  SFG_SFG2_CRC_CTRL_sfg2_crc_mode(data)                                   (0x00000010&((data)<<4))
#define  SFG_SFG2_CRC_CTRL_sfg2_crc_l_auto_cmp_en(data)                          (0x00000008&((data)<<3))
#define  SFG_SFG2_CRC_CTRL_sfg2_crc_r_auto_cmp_en(data)                          (0x00000004&((data)<<2))
#define  SFG_SFG2_CRC_CTRL_sfg2_crc_conti(data)                                  (0x00000002&((data)<<1))
#define  SFG_SFG2_CRC_CTRL_sfg2_crc_start(data)                                  (0x00000001&(data))
#define  SFG_SFG2_CRC_CTRL_get_sfg2_crc_mode(data)                               ((0x00000010&(data))>>4)
#define  SFG_SFG2_CRC_CTRL_get_sfg2_crc_l_auto_cmp_en(data)                      ((0x00000008&(data))>>3)
#define  SFG_SFG2_CRC_CTRL_get_sfg2_crc_r_auto_cmp_en(data)                      ((0x00000004&(data))>>2)
#define  SFG_SFG2_CRC_CTRL_get_sfg2_crc_conti(data)                              ((0x00000002&(data))>>1)
#define  SFG_SFG2_CRC_CTRL_get_sfg2_crc_start(data)                              (0x00000001&(data))

#define  SFG_SFG2_CRC_RESULT                                                    0x1802DA54
#define  SFG_SFG2_CRC_RESULT_reg_addr                                            "0xB802DA54"
#define  SFG_SFG2_CRC_RESULT_reg                                                 0xB802DA54
#define  SFG_SFG2_CRC_RESULT_inst_addr                                           "0x00A8"
#define  set_SFG_SFG2_CRC_RESULT_reg(data)                                       (*((volatile unsigned int*)SFG_SFG2_CRC_RESULT_reg)=data)
#define  get_SFG_SFG2_CRC_RESULT_reg                                             (*((volatile unsigned int*)SFG_SFG2_CRC_RESULT_reg))
#define  SFG_SFG2_CRC_RESULT_sfg2_crc_result_0_shift                             (0)
#define  SFG_SFG2_CRC_RESULT_sfg2_crc_result_0_mask                              (0xFFFFFFFF)
#define  SFG_SFG2_CRC_RESULT_sfg2_crc_result_0(data)                             (0xFFFFFFFF&(data))
#define  SFG_SFG2_CRC_RESULT_get_sfg2_crc_result_0(data)                         (0xFFFFFFFF&(data))

#define  SFG_SFG2_CRC_R_RESULT                                                  0x1802DA58
#define  SFG_SFG2_CRC_R_RESULT_reg_addr                                          "0xB802DA58"
#define  SFG_SFG2_CRC_R_RESULT_reg                                               0xB802DA58
#define  SFG_SFG2_CRC_R_RESULT_inst_addr                                         "0x00A9"
#define  set_SFG_SFG2_CRC_R_RESULT_reg(data)                                     (*((volatile unsigned int*)SFG_SFG2_CRC_R_RESULT_reg)=data)
#define  get_SFG_SFG2_CRC_R_RESULT_reg                                           (*((volatile unsigned int*)SFG_SFG2_CRC_R_RESULT_reg))
#define  SFG_SFG2_CRC_R_RESULT_sfg2_crc_result_1_shift                           (0)
#define  SFG_SFG2_CRC_R_RESULT_sfg2_crc_result_1_mask                            (0xFFFFFFFF)
#define  SFG_SFG2_CRC_R_RESULT_sfg2_crc_result_1(data)                           (0xFFFFFFFF&(data))
#define  SFG_SFG2_CRC_R_RESULT_get_sfg2_crc_result_1(data)                       (0xFFFFFFFF&(data))

#define  SFG_SFG2_CRC_L_DES_CRC                                                 0x1802DA5C
#define  SFG_SFG2_CRC_L_DES_CRC_reg_addr                                         "0xB802DA5C"
#define  SFG_SFG2_CRC_L_DES_CRC_reg                                              0xB802DA5C
#define  SFG_SFG2_CRC_L_DES_CRC_inst_addr                                        "0x00AA"
#define  set_SFG_SFG2_CRC_L_DES_CRC_reg(data)                                    (*((volatile unsigned int*)SFG_SFG2_CRC_L_DES_CRC_reg)=data)
#define  get_SFG_SFG2_CRC_L_DES_CRC_reg                                          (*((volatile unsigned int*)SFG_SFG2_CRC_L_DES_CRC_reg))
#define  SFG_SFG2_CRC_L_DES_CRC_sfg2_l_des_crc_shift                             (0)
#define  SFG_SFG2_CRC_L_DES_CRC_sfg2_l_des_crc_mask                              (0xFFFFFFFF)
#define  SFG_SFG2_CRC_L_DES_CRC_sfg2_l_des_crc(data)                             (0xFFFFFFFF&(data))
#define  SFG_SFG2_CRC_L_DES_CRC_get_sfg2_l_des_crc(data)                         (0xFFFFFFFF&(data))

#define  SFG_SFG2_CRC_R_DES_CRC                                                 0x1802DA60
#define  SFG_SFG2_CRC_R_DES_CRC_reg_addr                                         "0xB802DA60"
#define  SFG_SFG2_CRC_R_DES_CRC_reg                                              0xB802DA60
#define  SFG_SFG2_CRC_R_DES_CRC_inst_addr                                        "0x00AB"
#define  set_SFG_SFG2_CRC_R_DES_CRC_reg(data)                                    (*((volatile unsigned int*)SFG_SFG2_CRC_R_DES_CRC_reg)=data)
#define  get_SFG_SFG2_CRC_R_DES_CRC_reg                                          (*((volatile unsigned int*)SFG_SFG2_CRC_R_DES_CRC_reg))
#define  SFG_SFG2_CRC_R_DES_CRC_sfg2_r_des_crc_shift                             (0)
#define  SFG_SFG2_CRC_R_DES_CRC_sfg2_r_des_crc_mask                              (0xFFFFFFFF)
#define  SFG_SFG2_CRC_R_DES_CRC_sfg2_r_des_crc(data)                             (0xFFFFFFFF&(data))
#define  SFG_SFG2_CRC_R_DES_CRC_get_sfg2_r_des_crc(data)                         (0xFFFFFFFF&(data))

#define  SFG_SFG2_CRC_ERR_CNT                                                   0x1802DA64
#define  SFG_SFG2_CRC_ERR_CNT_reg_addr                                           "0xB802DA64"
#define  SFG_SFG2_CRC_ERR_CNT_reg                                                0xB802DA64
#define  SFG_SFG2_CRC_ERR_CNT_inst_addr                                          "0x00AC"
#define  set_SFG_SFG2_CRC_ERR_CNT_reg(data)                                      (*((volatile unsigned int*)SFG_SFG2_CRC_ERR_CNT_reg)=data)
#define  get_SFG_SFG2_CRC_ERR_CNT_reg                                            (*((volatile unsigned int*)SFG_SFG2_CRC_ERR_CNT_reg))
#define  SFG_SFG2_CRC_ERR_CNT_sfg2_l_crc_err_cnt_shift                           (16)
#define  SFG_SFG2_CRC_ERR_CNT_sfg2_r_crc_err_cnt_shift                           (0)
#define  SFG_SFG2_CRC_ERR_CNT_sfg2_l_crc_err_cnt_mask                            (0xFFFF0000)
#define  SFG_SFG2_CRC_ERR_CNT_sfg2_r_crc_err_cnt_mask                            (0x0000FFFF)
#define  SFG_SFG2_CRC_ERR_CNT_sfg2_l_crc_err_cnt(data)                           (0xFFFF0000&((data)<<16))
#define  SFG_SFG2_CRC_ERR_CNT_sfg2_r_crc_err_cnt(data)                           (0x0000FFFF&(data))
#define  SFG_SFG2_CRC_ERR_CNT_get_sfg2_l_crc_err_cnt(data)                       ((0xFFFF0000&(data))>>16)
#define  SFG_SFG2_CRC_ERR_CNT_get_sfg2_r_crc_err_cnt(data)                       (0x0000FFFF&(data))

#define  SFG_SFG2_TIME_CTRL_0                                                   0x1802DA68
#define  SFG_SFG2_TIME_CTRL_0_reg_addr                                           "0xB802DA68"
#define  SFG_SFG2_TIME_CTRL_0_reg                                                0xB802DA68
#define  SFG_SFG2_TIME_CTRL_0_inst_addr                                          "0x00AD"
#define  set_SFG_SFG2_TIME_CTRL_0_reg(data)                                      (*((volatile unsigned int*)SFG_SFG2_TIME_CTRL_0_reg)=data)
#define  get_SFG_SFG2_TIME_CTRL_0_reg                                            (*((volatile unsigned int*)SFG_SFG2_TIME_CTRL_0_reg))
#define  SFG_SFG2_TIME_CTRL_0_sfg2_hsync_width_shift                             (16)
#define  SFG_SFG2_TIME_CTRL_0_sfg2_hsync_delay_shift                             (0)
#define  SFG_SFG2_TIME_CTRL_0_sfg2_hsync_width_mask                              (0x00FF0000)
#define  SFG_SFG2_TIME_CTRL_0_sfg2_hsync_delay_mask                              (0x0000FFFF)
#define  SFG_SFG2_TIME_CTRL_0_sfg2_hsync_width(data)                             (0x00FF0000&((data)<<16))
#define  SFG_SFG2_TIME_CTRL_0_sfg2_hsync_delay(data)                             (0x0000FFFF&(data))
#define  SFG_SFG2_TIME_CTRL_0_get_sfg2_hsync_width(data)                         ((0x00FF0000&(data))>>16)
#define  SFG_SFG2_TIME_CTRL_0_get_sfg2_hsync_delay(data)                         (0x0000FFFF&(data))

#define  SFG_SFG2_TIME_CTRL_1                                                   0x1802DA6C
#define  SFG_SFG2_TIME_CTRL_1_reg_addr                                           "0xB802DA6C"
#define  SFG_SFG2_TIME_CTRL_1_reg                                                0xB802DA6C
#define  SFG_SFG2_TIME_CTRL_1_inst_addr                                          "0x00AE"
#define  set_SFG_SFG2_TIME_CTRL_1_reg(data)                                      (*((volatile unsigned int*)SFG_SFG2_TIME_CTRL_1_reg)=data)
#define  get_SFG_SFG2_TIME_CTRL_1_reg                                            (*((volatile unsigned int*)SFG_SFG2_TIME_CTRL_1_reg))
#define  SFG_SFG2_TIME_CTRL_1_sfg2_vsync_end_shift                               (16)
#define  SFG_SFG2_TIME_CTRL_1_sfg2_vsync_start_shift                             (0)
#define  SFG_SFG2_TIME_CTRL_1_sfg2_vsync_end_mask                                (0x00FF0000)
#define  SFG_SFG2_TIME_CTRL_1_sfg2_vsync_start_mask                              (0x000000FF)
#define  SFG_SFG2_TIME_CTRL_1_sfg2_vsync_end(data)                               (0x00FF0000&((data)<<16))
#define  SFG_SFG2_TIME_CTRL_1_sfg2_vsync_start(data)                             (0x000000FF&(data))
#define  SFG_SFG2_TIME_CTRL_1_get_sfg2_vsync_end(data)                           ((0x00FF0000&(data))>>16)
#define  SFG_SFG2_TIME_CTRL_1_get_sfg2_vsync_start(data)                         (0x000000FF&(data))

#define  SFG_SFG2_TIME_CTRL_2                                                   0x1802DA70
#define  SFG_SFG2_TIME_CTRL_2_reg_addr                                           "0xB802DA70"
#define  SFG_SFG2_TIME_CTRL_2_reg                                                0xB802DA70
#define  SFG_SFG2_TIME_CTRL_2_inst_addr                                          "0x00AF"
#define  set_SFG_SFG2_TIME_CTRL_2_reg(data)                                      (*((volatile unsigned int*)SFG_SFG2_TIME_CTRL_2_reg)=data)
#define  get_SFG_SFG2_TIME_CTRL_2_reg                                            (*((volatile unsigned int*)SFG_SFG2_TIME_CTRL_2_reg))
#define  SFG_SFG2_TIME_CTRL_2_sfg2_dh_den_sta_shift                              (16)
#define  SFG_SFG2_TIME_CTRL_2_sfg2_req_start_shift                               (0)
#define  SFG_SFG2_TIME_CTRL_2_sfg2_dh_den_sta_mask                               (0xFFFF0000)
#define  SFG_SFG2_TIME_CTRL_2_sfg2_req_start_mask                                (0x0000FFFF)
#define  SFG_SFG2_TIME_CTRL_2_sfg2_dh_den_sta(data)                              (0xFFFF0000&((data)<<16))
#define  SFG_SFG2_TIME_CTRL_2_sfg2_req_start(data)                               (0x0000FFFF&(data))
#define  SFG_SFG2_TIME_CTRL_2_get_sfg2_dh_den_sta(data)                          ((0xFFFF0000&(data))>>16)
#define  SFG_SFG2_TIME_CTRL_2_get_sfg2_req_start(data)                           (0x0000FFFF&(data))

#define  SFG_SFG2_DEN_CTRL                                                      0x1802DA74
#define  SFG_SFG2_DEN_CTRL_reg_addr                                              "0xB802DA74"
#define  SFG_SFG2_DEN_CTRL_reg                                                   0xB802DA74
#define  SFG_SFG2_DEN_CTRL_inst_addr                                             "0x00B0"
#define  set_SFG_SFG2_DEN_CTRL_reg(data)                                         (*((volatile unsigned int*)SFG_SFG2_DEN_CTRL_reg)=data)
#define  get_SFG_SFG2_DEN_CTRL_reg                                               (*((volatile unsigned int*)SFG_SFG2_DEN_CTRL_reg))
#define  SFG_SFG2_DEN_CTRL_sfg2_final_line_length_shift                          (0)
#define  SFG_SFG2_DEN_CTRL_sfg2_final_line_length_mask                           (0x00001FFF)
#define  SFG_SFG2_DEN_CTRL_sfg2_final_line_length(data)                          (0x00001FFF&(data))
#define  SFG_SFG2_DEN_CTRL_get_sfg2_final_line_length(data)                      (0x00001FFF&(data))

#define  SFG_SFG2_TIME_CTRL_AUTO_0                                              0x1802DA78
#define  SFG_SFG2_TIME_CTRL_AUTO_0_reg_addr                                      "0xB802DA78"
#define  SFG_SFG2_TIME_CTRL_AUTO_0_reg                                           0xB802DA78
#define  SFG_SFG2_TIME_CTRL_AUTO_0_inst_addr                                     "0x00B1"
#define  set_SFG_SFG2_TIME_CTRL_AUTO_0_reg(data)                                 (*((volatile unsigned int*)SFG_SFG2_TIME_CTRL_AUTO_0_reg)=data)
#define  get_SFG_SFG2_TIME_CTRL_AUTO_0_reg                                       (*((volatile unsigned int*)SFG_SFG2_TIME_CTRL_AUTO_0_reg))
#define  SFG_SFG2_TIME_CTRL_AUTO_0_sfg2_hsync_width_auto_shift                   (16)
#define  SFG_SFG2_TIME_CTRL_AUTO_0_sfg2_hsync_delay_auto_shift                   (0)
#define  SFG_SFG2_TIME_CTRL_AUTO_0_sfg2_hsync_width_auto_mask                    (0x00FF0000)
#define  SFG_SFG2_TIME_CTRL_AUTO_0_sfg2_hsync_delay_auto_mask                    (0x0000FFFF)
#define  SFG_SFG2_TIME_CTRL_AUTO_0_sfg2_hsync_width_auto(data)                   (0x00FF0000&((data)<<16))
#define  SFG_SFG2_TIME_CTRL_AUTO_0_sfg2_hsync_delay_auto(data)                   (0x0000FFFF&(data))
#define  SFG_SFG2_TIME_CTRL_AUTO_0_get_sfg2_hsync_width_auto(data)               ((0x00FF0000&(data))>>16)
#define  SFG_SFG2_TIME_CTRL_AUTO_0_get_sfg2_hsync_delay_auto(data)               (0x0000FFFF&(data))

#define  SFG_SFG2_TIME_CTRL_AUTO_1                                              0x1802DA7C
#define  SFG_SFG2_TIME_CTRL_AUTO_1_reg_addr                                      "0xB802DA7C"
#define  SFG_SFG2_TIME_CTRL_AUTO_1_reg                                           0xB802DA7C
#define  SFG_SFG2_TIME_CTRL_AUTO_1_inst_addr                                     "0x00B2"
#define  set_SFG_SFG2_TIME_CTRL_AUTO_1_reg(data)                                 (*((volatile unsigned int*)SFG_SFG2_TIME_CTRL_AUTO_1_reg)=data)
#define  get_SFG_SFG2_TIME_CTRL_AUTO_1_reg                                       (*((volatile unsigned int*)SFG_SFG2_TIME_CTRL_AUTO_1_reg))
#define  SFG_SFG2_TIME_CTRL_AUTO_1_sfg2_vsync_end_auto_shift                     (16)
#define  SFG_SFG2_TIME_CTRL_AUTO_1_sfg2_vsync_start_auto_shift                   (0)
#define  SFG_SFG2_TIME_CTRL_AUTO_1_sfg2_vsync_end_auto_mask                      (0x00FF0000)
#define  SFG_SFG2_TIME_CTRL_AUTO_1_sfg2_vsync_start_auto_mask                    (0x000000FF)
#define  SFG_SFG2_TIME_CTRL_AUTO_1_sfg2_vsync_end_auto(data)                     (0x00FF0000&((data)<<16))
#define  SFG_SFG2_TIME_CTRL_AUTO_1_sfg2_vsync_start_auto(data)                   (0x000000FF&(data))
#define  SFG_SFG2_TIME_CTRL_AUTO_1_get_sfg2_vsync_end_auto(data)                 ((0x00FF0000&(data))>>16)
#define  SFG_SFG2_TIME_CTRL_AUTO_1_get_sfg2_vsync_start_auto(data)               (0x000000FF&(data))

#define  SFG_SFG2_TIME_CTRL_AUTO_2                                              0x1802DA80
#define  SFG_SFG2_TIME_CTRL_AUTO_2_reg_addr                                      "0xB802DA80"
#define  SFG_SFG2_TIME_CTRL_AUTO_2_reg                                           0xB802DA80
#define  SFG_SFG2_TIME_CTRL_AUTO_2_inst_addr                                     "0x00B3"
#define  set_SFG_SFG2_TIME_CTRL_AUTO_2_reg(data)                                 (*((volatile unsigned int*)SFG_SFG2_TIME_CTRL_AUTO_2_reg)=data)
#define  get_SFG_SFG2_TIME_CTRL_AUTO_2_reg                                       (*((volatile unsigned int*)SFG_SFG2_TIME_CTRL_AUTO_2_reg))
#define  SFG_SFG2_TIME_CTRL_AUTO_2_sfg2_dh_den_sta_auto_shift                    (16)
#define  SFG_SFG2_TIME_CTRL_AUTO_2_sfg2_req_start_auto_shift                     (0)
#define  SFG_SFG2_TIME_CTRL_AUTO_2_sfg2_dh_den_sta_auto_mask                     (0xFFFF0000)
#define  SFG_SFG2_TIME_CTRL_AUTO_2_sfg2_req_start_auto_mask                      (0x0000FFFF)
#define  SFG_SFG2_TIME_CTRL_AUTO_2_sfg2_dh_den_sta_auto(data)                    (0xFFFF0000&((data)<<16))
#define  SFG_SFG2_TIME_CTRL_AUTO_2_sfg2_req_start_auto(data)                     (0x0000FFFF&(data))
#define  SFG_SFG2_TIME_CTRL_AUTO_2_get_sfg2_dh_den_sta_auto(data)                ((0xFFFF0000&(data))>>16)
#define  SFG_SFG2_TIME_CTRL_AUTO_2_get_sfg2_req_start_auto(data)                 (0x0000FFFF&(data))

#define  SFG_PIF_FIFO_CTRL0                                                     0x1802DC94
#define  SFG_PIF_FIFO_CTRL0_reg_addr                                             "0xB802DC94"
#define  SFG_PIF_FIFO_CTRL0_reg                                                  0xB802DC94
#define  SFG_PIF_FIFO_CTRL0_inst_addr                                            "0x00B4"
#define  set_SFG_PIF_FIFO_CTRL0_reg(data)                                        (*((volatile unsigned int*)SFG_PIF_FIFO_CTRL0_reg)=data)
#define  get_SFG_PIF_FIFO_CTRL0_reg                                              (*((volatile unsigned int*)SFG_PIF_FIFO_CTRL0_reg))
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_en_shift                                    (31)
#define  SFG_PIF_FIFO_CTRL0_plt_lvds_mode_shift                                  (28)
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_dbg_en_shift                                (24)
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_dbg_sel_shift                               (20)
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_irq_shift                                   (16)
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_error_ie_shift                              (12)
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_error_shift                                 (8)
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_error_cnt_shift                             (0)
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_en_mask                                     (0x80000000)
#define  SFG_PIF_FIFO_CTRL0_plt_lvds_mode_mask                                   (0x70000000)
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_dbg_en_mask                                 (0x01000000)
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_dbg_sel_mask                                (0x00F00000)
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_irq_mask                                    (0x00010000)
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_error_ie_mask                               (0x00001000)
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_error_mask                                  (0x00000100)
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_error_cnt_mask                              (0x000000FF)
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_en(data)                                    (0x80000000&((data)<<31))
#define  SFG_PIF_FIFO_CTRL0_plt_lvds_mode(data)                                  (0x70000000&((data)<<28))
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_dbg_en(data)                                (0x01000000&((data)<<24))
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_dbg_sel(data)                               (0x00F00000&((data)<<20))
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_irq(data)                                   (0x00010000&((data)<<16))
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_error_ie(data)                              (0x00001000&((data)<<12))
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_error(data)                                 (0x00000100&((data)<<8))
#define  SFG_PIF_FIFO_CTRL0_pif_fifo_error_cnt(data)                             (0x000000FF&(data))
#define  SFG_PIF_FIFO_CTRL0_get_pif_fifo_en(data)                                ((0x80000000&(data))>>31)
#define  SFG_PIF_FIFO_CTRL0_get_plt_lvds_mode(data)                              ((0x70000000&(data))>>28)
#define  SFG_PIF_FIFO_CTRL0_get_pif_fifo_dbg_en(data)                            ((0x01000000&(data))>>24)
#define  SFG_PIF_FIFO_CTRL0_get_pif_fifo_dbg_sel(data)                           ((0x00F00000&(data))>>20)
#define  SFG_PIF_FIFO_CTRL0_get_pif_fifo_irq(data)                               ((0x00010000&(data))>>16)
#define  SFG_PIF_FIFO_CTRL0_get_pif_fifo_error_ie(data)                          ((0x00001000&(data))>>12)
#define  SFG_PIF_FIFO_CTRL0_get_pif_fifo_error(data)                             ((0x00000100&(data))>>8)
#define  SFG_PIF_FIFO_CTRL0_get_pif_fifo_error_cnt(data)                         (0x000000FF&(data))

#define  SFG_PIF_FIFO_CTRL1                                                     0x1802DC98
#define  SFG_PIF_FIFO_CTRL1_reg_addr                                             "0xB802DC98"
#define  SFG_PIF_FIFO_CTRL1_reg                                                  0xB802DC98
#define  SFG_PIF_FIFO_CTRL1_inst_addr                                            "0x00B5"
#define  set_SFG_PIF_FIFO_CTRL1_reg(data)                                        (*((volatile unsigned int*)SFG_PIF_FIFO_CTRL1_reg)=data)
#define  get_SFG_PIF_FIFO_CTRL1_reg                                              (*((volatile unsigned int*)SFG_PIF_FIFO_CTRL1_reg))
#define  SFG_PIF_FIFO_CTRL1_pif_fifo_rst_type_shift                              (31)
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_5_error_shift                              (29)
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_4_error_shift                              (28)
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_3_error_shift                              (27)
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_2_error_shift                              (26)
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_1_error_shift                              (25)
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_0_error_shift                              (24)
#define  SFG_PIF_FIFO_CTRL1_lane_en_shift                                        (0)
#define  SFG_PIF_FIFO_CTRL1_pif_fifo_rst_type_mask                               (0x80000000)
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_5_error_mask                               (0x20000000)
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_4_error_mask                               (0x10000000)
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_3_error_mask                               (0x08000000)
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_2_error_mask                               (0x04000000)
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_1_error_mask                               (0x02000000)
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_0_error_mask                               (0x01000000)
#define  SFG_PIF_FIFO_CTRL1_lane_en_mask                                         (0x0000FFFF)
#define  SFG_PIF_FIFO_CTRL1_pif_fifo_rst_type(data)                              (0x80000000&((data)<<31))
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_5_error(data)                              (0x20000000&((data)<<29))
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_4_error(data)                              (0x10000000&((data)<<28))
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_3_error(data)                              (0x08000000&((data)<<27))
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_2_error(data)                              (0x04000000&((data)<<26))
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_1_error(data)                              (0x02000000&((data)<<25))
#define  SFG_PIF_FIFO_CTRL1_hit_r_cnt_0_error(data)                              (0x01000000&((data)<<24))
#define  SFG_PIF_FIFO_CTRL1_lane_en(data)                                        (0x0000FFFF&(data))
#define  SFG_PIF_FIFO_CTRL1_get_pif_fifo_rst_type(data)                          ((0x80000000&(data))>>31)
#define  SFG_PIF_FIFO_CTRL1_get_hit_r_cnt_5_error(data)                          ((0x20000000&(data))>>29)
#define  SFG_PIF_FIFO_CTRL1_get_hit_r_cnt_4_error(data)                          ((0x10000000&(data))>>28)
#define  SFG_PIF_FIFO_CTRL1_get_hit_r_cnt_3_error(data)                          ((0x08000000&(data))>>27)
#define  SFG_PIF_FIFO_CTRL1_get_hit_r_cnt_2_error(data)                          ((0x04000000&(data))>>26)
#define  SFG_PIF_FIFO_CTRL1_get_hit_r_cnt_1_error(data)                          ((0x02000000&(data))>>25)
#define  SFG_PIF_FIFO_CTRL1_get_hit_r_cnt_0_error(data)                          ((0x01000000&(data))>>24)
#define  SFG_PIF_FIFO_CTRL1_get_lane_en(data)                                    (0x0000FFFF&(data))

#define  SFG_PIF_FIFO_CTRL2                                                     0x1802DC9C
#define  SFG_PIF_FIFO_CTRL2_reg_addr                                             "0xB802DC9C"
#define  SFG_PIF_FIFO_CTRL2_reg                                                  0xB802DC9C
#define  SFG_PIF_FIFO_CTRL2_inst_addr                                            "0x00B6"
#define  set_SFG_PIF_FIFO_CTRL2_reg(data)                                        (*((volatile unsigned int*)SFG_PIF_FIFO_CTRL2_reg)=data)
#define  get_SFG_PIF_FIFO_CTRL2_reg                                              (*((volatile unsigned int*)SFG_PIF_FIFO_CTRL2_reg))
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel07_shift                                (28)
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel06_shift                                (24)
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel05_shift                                (20)
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel04_shift                                (16)
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel03_shift                                (12)
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel02_shift                                (8)
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel01_shift                                (4)
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel00_shift                                (0)
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel07_mask                                 (0xF0000000)
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel06_mask                                 (0x0F000000)
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel05_mask                                 (0x00F00000)
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel04_mask                                 (0x000F0000)
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel03_mask                                 (0x0000F000)
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel02_mask                                 (0x00000F00)
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel01_mask                                 (0x000000F0)
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel00_mask                                 (0x0000000F)
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel07(data)                                (0xF0000000&((data)<<28))
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel06(data)                                (0x0F000000&((data)<<24))
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel05(data)                                (0x00F00000&((data)<<20))
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel04(data)                                (0x000F0000&((data)<<16))
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel03(data)                                (0x0000F000&((data)<<12))
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel02(data)                                (0x00000F00&((data)<<8))
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel01(data)                                (0x000000F0&((data)<<4))
#define  SFG_PIF_FIFO_CTRL2_lvds_pair_sel00(data)                                (0x0000000F&(data))
#define  SFG_PIF_FIFO_CTRL2_get_lvds_pair_sel07(data)                            ((0xF0000000&(data))>>28)
#define  SFG_PIF_FIFO_CTRL2_get_lvds_pair_sel06(data)                            ((0x0F000000&(data))>>24)
#define  SFG_PIF_FIFO_CTRL2_get_lvds_pair_sel05(data)                            ((0x00F00000&(data))>>20)
#define  SFG_PIF_FIFO_CTRL2_get_lvds_pair_sel04(data)                            ((0x000F0000&(data))>>16)
#define  SFG_PIF_FIFO_CTRL2_get_lvds_pair_sel03(data)                            ((0x0000F000&(data))>>12)
#define  SFG_PIF_FIFO_CTRL2_get_lvds_pair_sel02(data)                            ((0x00000F00&(data))>>8)
#define  SFG_PIF_FIFO_CTRL2_get_lvds_pair_sel01(data)                            ((0x000000F0&(data))>>4)
#define  SFG_PIF_FIFO_CTRL2_get_lvds_pair_sel00(data)                            (0x0000000F&(data))

#define  SFG_PIF_FIFO_CTRL3                                                     0x1802DCA0
#define  SFG_PIF_FIFO_CTRL3_reg_addr                                             "0xB802DCA0"
#define  SFG_PIF_FIFO_CTRL3_reg                                                  0xB802DCA0
#define  SFG_PIF_FIFO_CTRL3_inst_addr                                            "0x00B7"
#define  set_SFG_PIF_FIFO_CTRL3_reg(data)                                        (*((volatile unsigned int*)SFG_PIF_FIFO_CTRL3_reg)=data)
#define  get_SFG_PIF_FIFO_CTRL3_reg                                              (*((volatile unsigned int*)SFG_PIF_FIFO_CTRL3_reg))
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel15_shift                                (28)
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel14_shift                                (24)
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel13_shift                                (20)
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel12_shift                                (16)
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel11_shift                                (12)
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel10_shift                                (8)
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel09_shift                                (4)
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel08_shift                                (0)
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel15_mask                                 (0xF0000000)
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel14_mask                                 (0x0F000000)
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel13_mask                                 (0x00F00000)
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel12_mask                                 (0x000F0000)
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel11_mask                                 (0x0000F000)
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel10_mask                                 (0x00000F00)
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel09_mask                                 (0x000000F0)
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel08_mask                                 (0x0000000F)
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel15(data)                                (0xF0000000&((data)<<28))
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel14(data)                                (0x0F000000&((data)<<24))
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel13(data)                                (0x00F00000&((data)<<20))
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel12(data)                                (0x000F0000&((data)<<16))
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel11(data)                                (0x0000F000&((data)<<12))
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel10(data)                                (0x00000F00&((data)<<8))
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel09(data)                                (0x000000F0&((data)<<4))
#define  SFG_PIF_FIFO_CTRL3_lvds_pair_sel08(data)                                (0x0000000F&(data))
#define  SFG_PIF_FIFO_CTRL3_get_lvds_pair_sel15(data)                            ((0xF0000000&(data))>>28)
#define  SFG_PIF_FIFO_CTRL3_get_lvds_pair_sel14(data)                            ((0x0F000000&(data))>>24)
#define  SFG_PIF_FIFO_CTRL3_get_lvds_pair_sel13(data)                            ((0x00F00000&(data))>>20)
#define  SFG_PIF_FIFO_CTRL3_get_lvds_pair_sel12(data)                            ((0x000F0000&(data))>>16)
#define  SFG_PIF_FIFO_CTRL3_get_lvds_pair_sel11(data)                            ((0x0000F000&(data))>>12)
#define  SFG_PIF_FIFO_CTRL3_get_lvds_pair_sel10(data)                            ((0x00000F00&(data))>>8)
#define  SFG_PIF_FIFO_CTRL3_get_lvds_pair_sel09(data)                            ((0x000000F0&(data))>>4)
#define  SFG_PIF_FIFO_CTRL3_get_lvds_pair_sel08(data)                            (0x0000000F&(data))

#define  SFG_PIF_FIFO_CTRL4                                                     0x1802DCA4
#define  SFG_PIF_FIFO_CTRL4_reg_addr                                             "0xB802DCA4"
#define  SFG_PIF_FIFO_CTRL4_reg                                                  0xB802DCA4
#define  SFG_PIF_FIFO_CTRL4_inst_addr                                            "0x00B8"
#define  set_SFG_PIF_FIFO_CTRL4_reg(data)                                        (*((volatile unsigned int*)SFG_PIF_FIFO_CTRL4_reg)=data)
#define  get_SFG_PIF_FIFO_CTRL4_reg                                              (*((volatile unsigned int*)SFG_PIF_FIFO_CTRL4_reg))
#define  SFG_PIF_FIFO_CTRL4_bist_en_shift                                        (31)
#define  SFG_PIF_FIFO_CTRL4_dummy_27_24_shift                                    (24)
#define  SFG_PIF_FIFO_CTRL4_bist_length_shift                                    (0)
#define  SFG_PIF_FIFO_CTRL4_bist_en_mask                                         (0x80000000)
#define  SFG_PIF_FIFO_CTRL4_dummy_27_24_mask                                     (0x0F000000)
#define  SFG_PIF_FIFO_CTRL4_bist_length_mask                                     (0x00FFFFFF)
#define  SFG_PIF_FIFO_CTRL4_bist_en(data)                                        (0x80000000&((data)<<31))
#define  SFG_PIF_FIFO_CTRL4_dummy_27_24(data)                                    (0x0F000000&((data)<<24))
#define  SFG_PIF_FIFO_CTRL4_bist_length(data)                                    (0x00FFFFFF&(data))
#define  SFG_PIF_FIFO_CTRL4_get_bist_en(data)                                    ((0x80000000&(data))>>31)
#define  SFG_PIF_FIFO_CTRL4_get_dummy_27_24(data)                                ((0x0F000000&(data))>>24)
#define  SFG_PIF_FIFO_CTRL4_get_bist_length(data)                                (0x00FFFFFF&(data))

#define  SFG_PIF_FIFO_CTRL5                                                     0x1802DCA8
#define  SFG_PIF_FIFO_CTRL5_reg_addr                                             "0xB802DCA8"
#define  SFG_PIF_FIFO_CTRL5_reg                                                  0xB802DCA8
#define  SFG_PIF_FIFO_CTRL5_inst_addr                                            "0x00B9"
#define  set_SFG_PIF_FIFO_CTRL5_reg(data)                                        (*((volatile unsigned int*)SFG_PIF_FIFO_CTRL5_reg)=data)
#define  get_SFG_PIF_FIFO_CTRL5_reg                                              (*((volatile unsigned int*)SFG_PIF_FIFO_CTRL5_reg))
#define  SFG_PIF_FIFO_CTRL5_bist_done_shift                                      (20)
#define  SFG_PIF_FIFO_CTRL5_bist_pass_shift                                      (16)
#define  SFG_PIF_FIFO_CTRL5_bist_lane_pass_shift                                 (0)
#define  SFG_PIF_FIFO_CTRL5_bist_done_mask                                       (0x00100000)
#define  SFG_PIF_FIFO_CTRL5_bist_pass_mask                                       (0x00010000)
#define  SFG_PIF_FIFO_CTRL5_bist_lane_pass_mask                                  (0x0000FFFF)
#define  SFG_PIF_FIFO_CTRL5_bist_done(data)                                      (0x00100000&((data)<<20))
#define  SFG_PIF_FIFO_CTRL5_bist_pass(data)                                      (0x00010000&((data)<<16))
#define  SFG_PIF_FIFO_CTRL5_bist_lane_pass(data)                                 (0x0000FFFF&(data))
#define  SFG_PIF_FIFO_CTRL5_get_bist_done(data)                                  ((0x00100000&(data))>>20)
#define  SFG_PIF_FIFO_CTRL5_get_bist_pass(data)                                  ((0x00010000&(data))>>16)
#define  SFG_PIF_FIFO_CTRL5_get_bist_lane_pass(data)                             (0x0000FFFF&(data))

#define  SFG_PIF_FIFO_CTRL6                                                     0x1802DCAC
#define  SFG_PIF_FIFO_CTRL6_reg_addr                                             "0xB802DCAC"
#define  SFG_PIF_FIFO_CTRL6_reg                                                  0xB802DCAC
#define  SFG_PIF_FIFO_CTRL6_inst_addr                                            "0x00BA"
#define  set_SFG_PIF_FIFO_CTRL6_reg(data)                                        (*((volatile unsigned int*)SFG_PIF_FIFO_CTRL6_reg)=data)
#define  get_SFG_PIF_FIFO_CTRL6_reg                                              (*((volatile unsigned int*)SFG_PIF_FIFO_CTRL6_reg))
#define  SFG_PIF_FIFO_CTRL6_pif_fifo_tst_out_shift                               (0)
#define  SFG_PIF_FIFO_CTRL6_pif_fifo_tst_out_mask                                (0xFFFFFFFF)
#define  SFG_PIF_FIFO_CTRL6_pif_fifo_tst_out(data)                               (0xFFFFFFFF&(data))
#define  SFG_PIF_FIFO_CTRL6_get_pif_fifo_tst_out(data)                           (0xFFFFFFFF&(data))

#define  SFG_PIF_FIFO_OSD_CTRL0                                                 0x1802DCB0
#define  SFG_PIF_FIFO_OSD_CTRL0_reg_addr                                         "0xB802DCB0"
#define  SFG_PIF_FIFO_OSD_CTRL0_reg                                              0xB802DCB0
#define  SFG_PIF_FIFO_OSD_CTRL0_inst_addr                                        "0x00BB"
#define  set_SFG_PIF_FIFO_OSD_CTRL0_reg(data)                                    (*((volatile unsigned int*)SFG_PIF_FIFO_OSD_CTRL0_reg)=data)
#define  get_SFG_PIF_FIFO_OSD_CTRL0_reg                                          (*((volatile unsigned int*)SFG_PIF_FIFO_OSD_CTRL0_reg))
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_en_shift                            (31)
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_dbg_en_shift                        (24)
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_dbg_sel_shift                       (20)
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_irq_shift                           (16)
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error_ie_shift                      (12)
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error_shift                         (8)
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error_cnt_shift                     (0)
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_en_mask                             (0x80000000)
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_dbg_en_mask                         (0x01000000)
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_dbg_sel_mask                        (0x00300000)
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_irq_mask                            (0x00010000)
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error_ie_mask                       (0x00001000)
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error_mask                          (0x00000100)
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error_cnt_mask                      (0x000000FF)
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_en(data)                            (0x80000000&((data)<<31))
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_dbg_en(data)                        (0x01000000&((data)<<24))
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_dbg_sel(data)                       (0x00300000&((data)<<20))
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_irq(data)                           (0x00010000&((data)<<16))
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error_ie(data)                      (0x00001000&((data)<<12))
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error(data)                         (0x00000100&((data)<<8))
#define  SFG_PIF_FIFO_OSD_CTRL0_osd_pif_fifo_error_cnt(data)                     (0x000000FF&(data))
#define  SFG_PIF_FIFO_OSD_CTRL0_get_osd_pif_fifo_en(data)                        ((0x80000000&(data))>>31)
#define  SFG_PIF_FIFO_OSD_CTRL0_get_osd_pif_fifo_dbg_en(data)                    ((0x01000000&(data))>>24)
#define  SFG_PIF_FIFO_OSD_CTRL0_get_osd_pif_fifo_dbg_sel(data)                   ((0x00300000&(data))>>20)
#define  SFG_PIF_FIFO_OSD_CTRL0_get_osd_pif_fifo_irq(data)                       ((0x00010000&(data))>>16)
#define  SFG_PIF_FIFO_OSD_CTRL0_get_osd_pif_fifo_error_ie(data)                  ((0x00001000&(data))>>12)
#define  SFG_PIF_FIFO_OSD_CTRL0_get_osd_pif_fifo_error(data)                     ((0x00000100&(data))>>8)
#define  SFG_PIF_FIFO_OSD_CTRL0_get_osd_pif_fifo_error_cnt(data)                 (0x000000FF&(data))

#define  SFG_PIF_FIFO_OSD_CTRL1                                                 0x1802DCB4
#define  SFG_PIF_FIFO_OSD_CTRL1_reg_addr                                         "0xB802DCB4"
#define  SFG_PIF_FIFO_OSD_CTRL1_reg                                              0xB802DCB4
#define  SFG_PIF_FIFO_OSD_CTRL1_inst_addr                                        "0x00BC"
#define  set_SFG_PIF_FIFO_OSD_CTRL1_reg(data)                                    (*((volatile unsigned int*)SFG_PIF_FIFO_OSD_CTRL1_reg)=data)
#define  get_SFG_PIF_FIFO_OSD_CTRL1_reg                                          (*((volatile unsigned int*)SFG_PIF_FIFO_OSD_CTRL1_reg))
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_pif_fifo_rst_type_shift                      (31)
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_5_error_shift                      (29)
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_4_error_shift                      (28)
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_3_error_shift                      (27)
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_2_error_shift                      (26)
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_1_error_shift                      (25)
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_0_error_shift                      (24)
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_lane_en_shift                                (0)
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_pif_fifo_rst_type_mask                       (0x80000000)
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_5_error_mask                       (0x20000000)
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_4_error_mask                       (0x10000000)
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_3_error_mask                       (0x08000000)
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_2_error_mask                       (0x04000000)
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_1_error_mask                       (0x02000000)
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_0_error_mask                       (0x01000000)
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_lane_en_mask                                 (0x0000000F)
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_pif_fifo_rst_type(data)                      (0x80000000&((data)<<31))
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_5_error(data)                      (0x20000000&((data)<<29))
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_4_error(data)                      (0x10000000&((data)<<28))
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_3_error(data)                      (0x08000000&((data)<<27))
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_2_error(data)                      (0x04000000&((data)<<26))
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_1_error(data)                      (0x02000000&((data)<<25))
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_hit_r_cnt_0_error(data)                      (0x01000000&((data)<<24))
#define  SFG_PIF_FIFO_OSD_CTRL1_osd_lane_en(data)                                (0x0000000F&(data))
#define  SFG_PIF_FIFO_OSD_CTRL1_get_osd_pif_fifo_rst_type(data)                  ((0x80000000&(data))>>31)
#define  SFG_PIF_FIFO_OSD_CTRL1_get_osd_hit_r_cnt_5_error(data)                  ((0x20000000&(data))>>29)
#define  SFG_PIF_FIFO_OSD_CTRL1_get_osd_hit_r_cnt_4_error(data)                  ((0x10000000&(data))>>28)
#define  SFG_PIF_FIFO_OSD_CTRL1_get_osd_hit_r_cnt_3_error(data)                  ((0x08000000&(data))>>27)
#define  SFG_PIF_FIFO_OSD_CTRL1_get_osd_hit_r_cnt_2_error(data)                  ((0x04000000&(data))>>26)
#define  SFG_PIF_FIFO_OSD_CTRL1_get_osd_hit_r_cnt_1_error(data)                  ((0x02000000&(data))>>25)
#define  SFG_PIF_FIFO_OSD_CTRL1_get_osd_hit_r_cnt_0_error(data)                  ((0x01000000&(data))>>24)
#define  SFG_PIF_FIFO_OSD_CTRL1_get_osd_lane_en(data)                            (0x0000000F&(data))

#define  SFG_PIF_FIFO_OSD_CTRL2                                                 0x1802DCB8
#define  SFG_PIF_FIFO_OSD_CTRL2_reg_addr                                         "0xB802DCB8"
#define  SFG_PIF_FIFO_OSD_CTRL2_reg                                              0xB802DCB8
#define  SFG_PIF_FIFO_OSD_CTRL2_inst_addr                                        "0x00BD"
#define  set_SFG_PIF_FIFO_OSD_CTRL2_reg(data)                                    (*((volatile unsigned int*)SFG_PIF_FIFO_OSD_CTRL2_reg)=data)
#define  get_SFG_PIF_FIFO_OSD_CTRL2_reg                                          (*((volatile unsigned int*)SFG_PIF_FIFO_OSD_CTRL2_reg))
#define  SFG_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel3_shift                         (12)
#define  SFG_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel2_shift                         (8)
#define  SFG_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel1_shift                         (4)
#define  SFG_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel0_shift                         (0)
#define  SFG_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel3_mask                          (0x00003000)
#define  SFG_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel2_mask                          (0x00000300)
#define  SFG_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel1_mask                          (0x00000030)
#define  SFG_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel0_mask                          (0x00000003)
#define  SFG_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel3(data)                         (0x00003000&((data)<<12))
#define  SFG_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel2(data)                         (0x00000300&((data)<<8))
#define  SFG_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel1(data)                         (0x00000030&((data)<<4))
#define  SFG_PIF_FIFO_OSD_CTRL2_osd_lvds_pair_sel0(data)                         (0x00000003&(data))
#define  SFG_PIF_FIFO_OSD_CTRL2_get_osd_lvds_pair_sel3(data)                     ((0x00003000&(data))>>12)
#define  SFG_PIF_FIFO_OSD_CTRL2_get_osd_lvds_pair_sel2(data)                     ((0x00000300&(data))>>8)
#define  SFG_PIF_FIFO_OSD_CTRL2_get_osd_lvds_pair_sel1(data)                     ((0x00000030&(data))>>4)
#define  SFG_PIF_FIFO_OSD_CTRL2_get_osd_lvds_pair_sel0(data)                     (0x00000003&(data))

#define  SFG_PIF_FIFO_OSD_CTRL3                                                 0x1802DCBC
#define  SFG_PIF_FIFO_OSD_CTRL3_reg_addr                                         "0xB802DCBC"
#define  SFG_PIF_FIFO_OSD_CTRL3_reg                                              0xB802DCBC
#define  SFG_PIF_FIFO_OSD_CTRL3_inst_addr                                        "0x00BE"
#define  set_SFG_PIF_FIFO_OSD_CTRL3_reg(data)                                    (*((volatile unsigned int*)SFG_PIF_FIFO_OSD_CTRL3_reg)=data)
#define  get_SFG_PIF_FIFO_OSD_CTRL3_reg                                          (*((volatile unsigned int*)SFG_PIF_FIFO_OSD_CTRL3_reg))
#define  SFG_PIF_FIFO_OSD_CTRL3_osd_bist_en_shift                                (31)
#define  SFG_PIF_FIFO_OSD_CTRL3_dummy_27_24_shift                                (24)
#define  SFG_PIF_FIFO_OSD_CTRL3_osd_bist_length_shift                            (0)
#define  SFG_PIF_FIFO_OSD_CTRL3_osd_bist_en_mask                                 (0x80000000)
#define  SFG_PIF_FIFO_OSD_CTRL3_dummy_27_24_mask                                 (0x0F000000)
#define  SFG_PIF_FIFO_OSD_CTRL3_osd_bist_length_mask                             (0x00FFFFFF)
#define  SFG_PIF_FIFO_OSD_CTRL3_osd_bist_en(data)                                (0x80000000&((data)<<31))
#define  SFG_PIF_FIFO_OSD_CTRL3_dummy_27_24(data)                                (0x0F000000&((data)<<24))
#define  SFG_PIF_FIFO_OSD_CTRL3_osd_bist_length(data)                            (0x00FFFFFF&(data))
#define  SFG_PIF_FIFO_OSD_CTRL3_get_osd_bist_en(data)                            ((0x80000000&(data))>>31)
#define  SFG_PIF_FIFO_OSD_CTRL3_get_dummy_27_24(data)                            ((0x0F000000&(data))>>24)
#define  SFG_PIF_FIFO_OSD_CTRL3_get_osd_bist_length(data)                        (0x00FFFFFF&(data))

#define  SFG_PIF_FIFO_OSD_CTRL4                                                 0x1802DCC0
#define  SFG_PIF_FIFO_OSD_CTRL4_reg_addr                                         "0xB802DCC0"
#define  SFG_PIF_FIFO_OSD_CTRL4_reg                                              0xB802DCC0
#define  SFG_PIF_FIFO_OSD_CTRL4_inst_addr                                        "0x00BF"
#define  set_SFG_PIF_FIFO_OSD_CTRL4_reg(data)                                    (*((volatile unsigned int*)SFG_PIF_FIFO_OSD_CTRL4_reg)=data)
#define  get_SFG_PIF_FIFO_OSD_CTRL4_reg                                          (*((volatile unsigned int*)SFG_PIF_FIFO_OSD_CTRL4_reg))
#define  SFG_PIF_FIFO_OSD_CTRL4_osd_bist_done_shift                              (20)
#define  SFG_PIF_FIFO_OSD_CTRL4_osd_bist_pass_shift                              (16)
#define  SFG_PIF_FIFO_OSD_CTRL4_osd_bist_lane_pass_shift                         (0)
#define  SFG_PIF_FIFO_OSD_CTRL4_osd_bist_done_mask                               (0x00100000)
#define  SFG_PIF_FIFO_OSD_CTRL4_osd_bist_pass_mask                               (0x00010000)
#define  SFG_PIF_FIFO_OSD_CTRL4_osd_bist_lane_pass_mask                          (0x0000000F)
#define  SFG_PIF_FIFO_OSD_CTRL4_osd_bist_done(data)                              (0x00100000&((data)<<20))
#define  SFG_PIF_FIFO_OSD_CTRL4_osd_bist_pass(data)                              (0x00010000&((data)<<16))
#define  SFG_PIF_FIFO_OSD_CTRL4_osd_bist_lane_pass(data)                         (0x0000000F&(data))
#define  SFG_PIF_FIFO_OSD_CTRL4_get_osd_bist_done(data)                          ((0x00100000&(data))>>20)
#define  SFG_PIF_FIFO_OSD_CTRL4_get_osd_bist_pass(data)                          ((0x00010000&(data))>>16)
#define  SFG_PIF_FIFO_OSD_CTRL4_get_osd_bist_lane_pass(data)                     (0x0000000F&(data))

#define  SFG_PIF_FIFO_OSD_CTRL5                                                 0x1802DCC4
#define  SFG_PIF_FIFO_OSD_CTRL5_reg_addr                                         "0xB802DCC4"
#define  SFG_PIF_FIFO_OSD_CTRL5_reg                                              0xB802DCC4
#define  SFG_PIF_FIFO_OSD_CTRL5_inst_addr                                        "0x00C0"
#define  set_SFG_PIF_FIFO_OSD_CTRL5_reg(data)                                    (*((volatile unsigned int*)SFG_PIF_FIFO_OSD_CTRL5_reg)=data)
#define  get_SFG_PIF_FIFO_OSD_CTRL5_reg                                          (*((volatile unsigned int*)SFG_PIF_FIFO_OSD_CTRL5_reg))
#define  SFG_PIF_FIFO_OSD_CTRL5_osd_pif_fifo_tst_out_shift                       (0)
#define  SFG_PIF_FIFO_OSD_CTRL5_osd_pif_fifo_tst_out_mask                        (0xFFFFFFFF)
#define  SFG_PIF_FIFO_OSD_CTRL5_osd_pif_fifo_tst_out(data)                       (0xFFFFFFFF&(data))
#define  SFG_PIF_FIFO_OSD_CTRL5_get_osd_pif_fifo_tst_out(data)                   (0xFFFFFFFF&(data))

#define  SFG_PIF_FIFO_MUX_CTRL0                                                 0x1802DCC8
#define  SFG_PIF_FIFO_MUX_CTRL0_reg_addr                                         "0xB802DCC8"
#define  SFG_PIF_FIFO_MUX_CTRL0_reg                                              0xB802DCC8
#define  SFG_PIF_FIFO_MUX_CTRL0_inst_addr                                        "0x00C1"
#define  set_SFG_PIF_FIFO_MUX_CTRL0_reg(data)                                    (*((volatile unsigned int*)SFG_PIF_FIFO_MUX_CTRL0_reg)=data)
#define  get_SFG_PIF_FIFO_MUX_CTRL0_reg                                          (*((volatile unsigned int*)SFG_PIF_FIFO_MUX_CTRL0_reg))
#define  SFG_PIF_FIFO_MUX_CTRL0_video_osd_sel_shift                              (28)
#define  SFG_PIF_FIFO_MUX_CTRL0_phy_lane_en_shift                                (0)
#define  SFG_PIF_FIFO_MUX_CTRL0_video_osd_sel_mask                               (0x70000000)
#define  SFG_PIF_FIFO_MUX_CTRL0_phy_lane_en_mask                                 (0x0000FFFF)
#define  SFG_PIF_FIFO_MUX_CTRL0_video_osd_sel(data)                              (0x70000000&((data)<<28))
#define  SFG_PIF_FIFO_MUX_CTRL0_phy_lane_en(data)                                (0x0000FFFF&(data))
#define  SFG_PIF_FIFO_MUX_CTRL0_get_video_osd_sel(data)                          ((0x70000000&(data))>>28)
#define  SFG_PIF_FIFO_MUX_CTRL0_get_phy_lane_en(data)                            (0x0000FFFF&(data))

#define  SFG_PIF_FIFO_MUX_CTRL1                                                 0x1802DCCC
#define  SFG_PIF_FIFO_MUX_CTRL1_reg_addr                                         "0xB802DCCC"
#define  SFG_PIF_FIFO_MUX_CTRL1_reg                                              0xB802DCCC
#define  SFG_PIF_FIFO_MUX_CTRL1_inst_addr                                        "0x00C2"
#define  set_SFG_PIF_FIFO_MUX_CTRL1_reg(data)                                    (*((volatile unsigned int*)SFG_PIF_FIFO_MUX_CTRL1_reg)=data)
#define  get_SFG_PIF_FIFO_MUX_CTRL1_reg                                          (*((volatile unsigned int*)SFG_PIF_FIFO_MUX_CTRL1_reg))
#define  SFG_PIF_FIFO_MUX_CTRL1_fix_pattern_en_shift                             (31)
#define  SFG_PIF_FIFO_MUX_CTRL1_fix_pattern_shift                                (0)
#define  SFG_PIF_FIFO_MUX_CTRL1_fix_pattern_en_mask                              (0x80000000)
#define  SFG_PIF_FIFO_MUX_CTRL1_fix_pattern_mask                                 (0x07FFFFFF)
#define  SFG_PIF_FIFO_MUX_CTRL1_fix_pattern_en(data)                             (0x80000000&((data)<<31))
#define  SFG_PIF_FIFO_MUX_CTRL1_fix_pattern(data)                                (0x07FFFFFF&(data))
#define  SFG_PIF_FIFO_MUX_CTRL1_get_fix_pattern_en(data)                         ((0x80000000&(data))>>31)
#define  SFG_PIF_FIFO_MUX_CTRL1_get_fix_pattern(data)                            (0x07FFFFFF&(data))

#define  SFG_PIF_FIFO_MUX_CTRL2                                                 0x1802DCD0
#define  SFG_PIF_FIFO_MUX_CTRL2_reg_addr                                         "0xB802DCD0"
#define  SFG_PIF_FIFO_MUX_CTRL2_reg                                              0xB802DCD0
#define  SFG_PIF_FIFO_MUX_CTRL2_inst_addr                                        "0x00C3"
#define  set_SFG_PIF_FIFO_MUX_CTRL2_reg(data)                                    (*((volatile unsigned int*)SFG_PIF_FIFO_MUX_CTRL2_reg)=data)
#define  get_SFG_PIF_FIFO_MUX_CTRL2_reg                                          (*((volatile unsigned int*)SFG_PIF_FIFO_MUX_CTRL2_reg))
#define  SFG_PIF_FIFO_MUX_CTRL2_pn_swap_shift                                    (0)
#define  SFG_PIF_FIFO_MUX_CTRL2_pn_swap_mask                                     (0x0000FFFF)
#define  SFG_PIF_FIFO_MUX_CTRL2_pn_swap(data)                                    (0x0000FFFF&(data))
#define  SFG_PIF_FIFO_MUX_CTRL2_get_pn_swap(data)                                (0x0000FFFF&(data))

#define  SFG_PIF_MISC                                                           0x1802DCD4
#define  SFG_PIF_MISC_reg_addr                                                   "0xB802DCD4"
#define  SFG_PIF_MISC_reg                                                        0xB802DCD4
#define  SFG_PIF_MISC_inst_addr                                                  "0x00C4"
#define  set_SFG_PIF_MISC_reg(data)                                              (*((volatile unsigned int*)SFG_PIF_MISC_reg)=data)
#define  get_SFG_PIF_MISC_reg                                                    (*((volatile unsigned int*)SFG_PIF_MISC_reg))
#define  SFG_PIF_MISC_prbs_tx_en_shift                                           (31)
#define  SFG_PIF_MISC_prbs_mode_shift                                            (28)
#define  SFG_PIF_MISC_pif_debug_sel_shift                                        (0)
#define  SFG_PIF_MISC_prbs_tx_en_mask                                            (0x80000000)
#define  SFG_PIF_MISC_prbs_mode_mask                                             (0x30000000)
#define  SFG_PIF_MISC_pif_debug_sel_mask                                         (0x0000000F)
#define  SFG_PIF_MISC_prbs_tx_en(data)                                           (0x80000000&((data)<<31))
#define  SFG_PIF_MISC_prbs_mode(data)                                            (0x30000000&((data)<<28))
#define  SFG_PIF_MISC_pif_debug_sel(data)                                        (0x0000000F&(data))
#define  SFG_PIF_MISC_get_prbs_tx_en(data)                                       ((0x80000000&(data))>>31)
#define  SFG_PIF_MISC_get_prbs_mode(data)                                        ((0x30000000&(data))>>28)
#define  SFG_PIF_MISC_get_pif_debug_sel(data)                                    (0x0000000F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======SFG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  clken_disp_sfg_osd:1;
        RBus_UInt32  clken_disp_sfg:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  fix_hs_last_line:1;
        RBus_UInt32  subpixel_en:1;
        RBus_UInt32  lclk_inv_sel:1;
        RBus_UInt32  macclk_inv:1;
        RBus_UInt32  pif_clk_sel:1;
        RBus_UInt32  dout_pre_rb_swap:1;
        RBus_UInt32  dispd_debug_mode:3;
        RBus_UInt32  dout_mode:2;
        RBus_UInt32  sfg_dout_en:1;
        RBus_UInt32  dvs_inv:1;
        RBus_UInt32  dhs_inv:1;
        RBus_UInt32  dden_inv:1;
        RBus_UInt32  daclk_inv:1;
        RBus_UInt32  daclk_en:1;
        RBus_UInt32  dout_rb_swap:1;
        RBus_UInt32  dout_bit_swap:1;
        RBus_UInt32  dout_data_inv:1;
        RBus_UInt32  dclk_dly_sel:3;
    };
}sfg_sfg_zz_shift_dbg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dclk_mode_switch:4;
        RBus_UInt32  force_bg_dif_aport:1;
        RBus_UInt32  force_bg_dif_bport:1;
        RBus_UInt32  force_bg_dif_cport:1;
        RBus_UInt32  force_bg_dif_dport:1;
        RBus_UInt32  force_bg_dif_eport:1;
        RBus_UInt32  force_bg_dif_fport:1;
        RBus_UInt32  force_bg_dif_gport:1;
        RBus_UInt32  force_bg_dif_hport:1;
        RBus_UInt32  force_bg_dif_iport:1;
        RBus_UInt32  force_bg_dif_jport:1;
        RBus_UInt32  force_bg_dif_kport:1;
        RBus_UInt32  force_bg_dif_lport:1;
        RBus_UInt32  force_bg_dif_mport:1;
        RBus_UInt32  force_bg_dif_nport:1;
        RBus_UInt32  force_bg_dif_oport:1;
        RBus_UInt32  force_bg_dif_pport:1;
        RBus_UInt32  res2:8;
    };
}sfg_sfg_swap_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  sfg_crc_mode:1;
        RBus_UInt32  sfg_crc_l_auto_cmp_en:1;
        RBus_UInt32  sfg_crc_r_auto_cmp_en:1;
        RBus_UInt32  sfg_crc_conti:1;
        RBus_UInt32  sfg_crc_start:1;
    };
}sfg_sfg_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_crc_result_0:32;
    };
}sfg_sfg_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_crc_result_1:32;
    };
}sfg_sfg_crc_r_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_l_des_crc:32;
    };
}sfg_sfg_l_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_r_des_crc:32;
    };
}sfg_sfg_r_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_l_crc_err_cnt:16;
        RBus_UInt32  sfg_r_crc_err_cnt:16;
    };
}sfg_sfg_crc_err_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en_force_bg_dif:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  bg_dif_red:10;
        RBus_UInt32  bg_dif_grn:10;
        RBus_UInt32  bg_dif_blu:10;
    };
}sfg_sfg_force_bg_at_dif_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_0:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  zz_shift_sp_0:4;
        RBus_UInt32  zz_shift_sp_1:4;
        RBus_UInt32  zz_shift_sp_2:4;
        RBus_UInt32  zz_shift_sp_3:4;
        RBus_UInt32  zz_shift_mode_0:1;
        RBus_UInt32  zz_shift_mode_1:1;
        RBus_UInt32  zz_shift_mode_2:1;
        RBus_UInt32  zz_shift_mode_3:1;
        RBus_UInt32  res2:4;
    };
}sfg_zz_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_0_front_dummy_num_0:2;
        RBus_UInt32  seg_0_back_dummy_num_0:2;
        RBus_UInt32  seg_0_front_dummy_num_1:2;
        RBus_UInt32  seg_0_back_dummy_num_1:2;
        RBus_UInt32  seg_0_front_dummy_num_2:2;
        RBus_UInt32  seg_0_back_dummy_num_2:2;
        RBus_UInt32  seg_0_front_dummy_num_3:2;
        RBus_UInt32  seg_0_back_dummy_num_3:2;
        RBus_UInt32  seg_1_front_dummy_num_0:2;
        RBus_UInt32  seg_1_back_dummy_num_0:2;
        RBus_UInt32  seg_1_front_dummy_num_1:2;
        RBus_UInt32  seg_1_back_dummy_num_1:2;
        RBus_UInt32  seg_1_front_dummy_num_2:2;
        RBus_UInt32  seg_1_back_dummy_num_2:2;
        RBus_UInt32  seg_1_front_dummy_num_3:2;
        RBus_UInt32  seg_1_back_dummy_num_3:2;
    };
}sfg_sfg_dummy_ctrl_0a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_2_front_dummy_num_0:2;
        RBus_UInt32  seg_2_back_dummy_num_0:2;
        RBus_UInt32  seg_2_front_dummy_num_1:2;
        RBus_UInt32  seg_2_back_dummy_num_1:2;
        RBus_UInt32  seg_2_front_dummy_num_2:2;
        RBus_UInt32  seg_2_back_dummy_num_2:2;
        RBus_UInt32  seg_2_front_dummy_num_3:2;
        RBus_UInt32  seg_2_back_dummy_num_3:2;
        RBus_UInt32  seg_3_front_dummy_num_0:2;
        RBus_UInt32  seg_3_back_dummy_num_0:2;
        RBus_UInt32  seg_3_front_dummy_num_1:2;
        RBus_UInt32  seg_3_back_dummy_num_1:2;
        RBus_UInt32  seg_3_front_dummy_num_2:2;
        RBus_UInt32  seg_3_back_dummy_num_2:2;
        RBus_UInt32  seg_3_front_dummy_num_3:2;
        RBus_UInt32  seg_3_back_dummy_num_3:2;
    };
}sfg_sfg_dummy_ctrl_0b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_4_front_dummy_num_0:2;
        RBus_UInt32  seg_4_back_dummy_num_0:2;
        RBus_UInt32  seg_4_front_dummy_num_1:2;
        RBus_UInt32  seg_4_back_dummy_num_1:2;
        RBus_UInt32  seg_4_front_dummy_num_2:2;
        RBus_UInt32  seg_4_back_dummy_num_2:2;
        RBus_UInt32  seg_4_front_dummy_num_3:2;
        RBus_UInt32  seg_4_back_dummy_num_3:2;
        RBus_UInt32  seg_5_front_dummy_num_0:2;
        RBus_UInt32  seg_5_back_dummy_num_0:2;
        RBus_UInt32  seg_5_front_dummy_num_1:2;
        RBus_UInt32  seg_5_back_dummy_num_1:2;
        RBus_UInt32  seg_5_front_dummy_num_2:2;
        RBus_UInt32  seg_5_back_dummy_num_2:2;
        RBus_UInt32  seg_5_front_dummy_num_3:2;
        RBus_UInt32  seg_5_back_dummy_num_3:2;
    };
}sfg_sfg_dummy_ctrl_1a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_6_front_dummy_num_0:2;
        RBus_UInt32  seg_6_back_dummy_num_0:2;
        RBus_UInt32  seg_6_front_dummy_num_1:2;
        RBus_UInt32  seg_6_back_dummy_num_1:2;
        RBus_UInt32  seg_6_front_dummy_num_2:2;
        RBus_UInt32  seg_6_back_dummy_num_2:2;
        RBus_UInt32  seg_6_front_dummy_num_3:2;
        RBus_UInt32  seg_6_back_dummy_num_3:2;
        RBus_UInt32  seg_7_front_dummy_num_0:2;
        RBus_UInt32  seg_7_back_dummy_num_0:2;
        RBus_UInt32  seg_7_front_dummy_num_1:2;
        RBus_UInt32  seg_7_back_dummy_num_1:2;
        RBus_UInt32  seg_7_front_dummy_num_2:2;
        RBus_UInt32  seg_7_back_dummy_num_2:2;
        RBus_UInt32  seg_7_front_dummy_num_3:2;
        RBus_UInt32  seg_7_back_dummy_num_3:2;
    };
}sfg_sfg_dummy_ctrl_1b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_8_front_dummy_num_0:2;
        RBus_UInt32  seg_8_back_dummy_num_0:2;
        RBus_UInt32  seg_8_front_dummy_num_1:2;
        RBus_UInt32  seg_8_back_dummy_num_1:2;
        RBus_UInt32  seg_8_front_dummy_num_2:2;
        RBus_UInt32  seg_8_back_dummy_num_2:2;
        RBus_UInt32  seg_8_front_dummy_num_3:2;
        RBus_UInt32  seg_8_back_dummy_num_3:2;
        RBus_UInt32  seg_9_front_dummy_num_0:2;
        RBus_UInt32  seg_9_back_dummy_num_0:2;
        RBus_UInt32  seg_9_front_dummy_num_1:2;
        RBus_UInt32  seg_9_back_dummy_num_1:2;
        RBus_UInt32  seg_9_front_dummy_num_2:2;
        RBus_UInt32  seg_9_back_dummy_num_2:2;
        RBus_UInt32  seg_9_front_dummy_num_3:2;
        RBus_UInt32  seg_9_back_dummy_num_3:2;
    };
}sfg_sfg_dummy_ctrl_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_10_front_dummy_num_0:2;
        RBus_UInt32  seg_10_back_dummy_num_0:2;
        RBus_UInt32  seg_10_front_dummy_num_1:2;
        RBus_UInt32  seg_10_back_dummy_num_1:2;
        RBus_UInt32  seg_10_front_dummy_num_2:2;
        RBus_UInt32  seg_10_back_dummy_num_2:2;
        RBus_UInt32  seg_10_front_dummy_num_3:2;
        RBus_UInt32  seg_10_back_dummy_num_3:2;
        RBus_UInt32  seg_11_front_dummy_num_0:2;
        RBus_UInt32  seg_11_back_dummy_num_0:2;
        RBus_UInt32  seg_11_front_dummy_num_1:2;
        RBus_UInt32  seg_11_back_dummy_num_1:2;
        RBus_UInt32  seg_11_front_dummy_num_2:2;
        RBus_UInt32  seg_11_back_dummy_num_2:2;
        RBus_UInt32  seg_11_front_dummy_num_3:2;
        RBus_UInt32  seg_11_back_dummy_num_3:2;
    };
}sfg_sfg_dummy_ctrl_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  gray_dum_line_data_2:30;
    };
}sfg_sfg_ctrl_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dv_den_end:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  dv_den_sta:13;
    };
}sfg_sfg_ctrl_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dh_den_end:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  dh_den_sta:13;
    };
}sfg_sfg_ctrl_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dv_width:8;
        RBus_UInt32  dh_width:8;
        RBus_UInt32  res1:3;
        RBus_UInt32  dh_total:13;
    };
}sfg_sfg_ctrl_26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_shift_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  data_mode:2;
        RBus_UInt32  dummy_1:2;
        RBus_UInt32  mask_one_eye_black_en:1;
        RBus_UInt32  mask_one_eye_black_left:1;
        RBus_UInt32  dummy_pixel_shift_en:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  pif_pixel_mode:2;
        RBus_UInt32  data_map_sel:3;
        RBus_UInt32  seg_num:5;
        RBus_UInt32  h_flip_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  port_num:5;
    };
}sfg_sfg_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg0_start_res:3;
        RBus_UInt32  seg0_start:13;
        RBus_UInt32  seg1_start_res:3;
        RBus_UInt32  seg1_start:13;
    };
}sfg_sfg_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg2_start_res:3;
        RBus_UInt32  seg2_start:13;
        RBus_UInt32  seg3_start_res:3;
        RBus_UInt32  seg3_start:13;
    };
}sfg_sfg_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg4_start_res:3;
        RBus_UInt32  seg4_start:13;
        RBus_UInt32  seg5_start_res:3;
        RBus_UInt32  seg5_start:13;
    };
}sfg_sfg_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg6_start_res:3;
        RBus_UInt32  seg6_start:13;
        RBus_UInt32  seg7_start_res:3;
        RBus_UInt32  seg7_start:13;
    };
}sfg_sfg_ctrl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg8_start_res:3;
        RBus_UInt32  seg8_start:13;
        RBus_UInt32  seg9_start_res:3;
        RBus_UInt32  seg9_start:13;
    };
}sfg_sfg_start_ctrl_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg10_start_res:3;
        RBus_UInt32  seg10_start:13;
        RBus_UInt32  seg11_start_res:3;
        RBus_UInt32  seg11_start:13;
    };
}sfg_sfg_start_ctrl_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  gray_dum_line_data_0:30;
    };
}sfg_sfg_ctrl_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  gray_dum_line_data_1:30;
    };
}sfg_sfg_ctrl_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bypass_mode:1;
        RBus_UInt32  tg_auto_cfg:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  front_gray_num:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  front_act_num:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  back_act_num:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  back_gray_num:3;
        RBus_UInt32  front_gray_en:1;
        RBus_UInt32  front_act_en:1;
        RBus_UInt32  back_act_en:1;
        RBus_UInt32  back_gray_en:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  downsample_v:1;
    };
}sfg_sfg_ctrl_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  hsync_width:8;
        RBus_UInt32  hsync_delay:16;
    };
}sfg_sfg_ctrl_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  hs_distance:14;
        RBus_UInt32  vsync_end:8;
        RBus_UInt32  vsync_start:8;
    };
}sfg_sfg_ctrl_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_dh_den_sta:16;
        RBus_UInt32  req_start:16;
    };
}sfg_sfg_ctrl_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  seg15_flip:1;
        RBus_UInt32  seg14_flip:1;
        RBus_UInt32  seg13_flip:1;
        RBus_UInt32  seg12_flip:1;
        RBus_UInt32  seg11_flip:1;
        RBus_UInt32  seg10_flip:1;
        RBus_UInt32  seg9_flip:1;
        RBus_UInt32  seg8_flip:1;
        RBus_UInt32  seg7_flip:1;
        RBus_UInt32  seg6_flip:1;
        RBus_UInt32  seg5_flip:1;
        RBus_UInt32  seg4_flip:1;
        RBus_UInt32  seg3_flip:1;
        RBus_UInt32  seg2_flip:1;
        RBus_UInt32  seg1_flip:1;
        RBus_UInt32  seg0_flip:1;
    };
}sfg_sfg_ctrl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  final_line_length:13;
        RBus_UInt32  res2:16;
    };
}sfg_sfg_ctrl_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  residue_pix_split_mode:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  final_addr_split_mode:13;
    };
}sfg_sfg_ctrl_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hs_den_io_dist:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  hs_io_dist:13;
    };
}sfg_sfg_ctrl_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_dh_den_sta_auto:16;
        RBus_UInt32  req_start_auto:16;
    };
}sfg_sfg_tg_auto_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  t_read:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  hsync_width_auto:8;
        RBus_UInt32  hsync_delay_auto:16;
    };
}sfg_sfg_tg_auto_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  hs_distance_auto:14;
        RBus_UInt32  vsync_end_auto:8;
        RBus_UInt32  vsync_start_auto:8;
    };
}sfg_sfg_tg_auto_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hs_den_io_dist_auto:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  hs_io_dist_auto:13;
    };
}sfg_sfg_tg_auto_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clken_lvds:1;
        RBus_UInt32  clken_epi:1;
        RBus_UInt32  clken_vby1:1;
        RBus_UInt32  clken_vby1_osd:1;
        RBus_UInt32  dummy_2:11;
        RBus_UInt32  in_data_inv:1;
        RBus_UInt32  clken_p2p:1;
        RBus_UInt32  clken_isp:1;
        RBus_UInt32  res1:14;
    };
}sfg_sfg_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  res2:1;
        RBus_UInt32  sfg_bist_mode:1;
    };
}sfg_sfg_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  res2:1;
        RBus_UInt32  sfg_bist_done:1;
    };
}sfg_sfg_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  res2:1;
        RBus_UInt32  sfg_bist_fail_group:1;
    };
}sfg_sfg_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  sfg_bist_fail_1:1;
        RBus_UInt32  sfg_bist_fail_0:1;
    };
}sfg_sfg_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  res2:1;
        RBus_UInt32  sfg_drf_mode:1;
    };
}sfg_sfg_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  res2:1;
        RBus_UInt32  sfg_drf_resume:1;
    };
}sfg_sfg_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  res2:1;
        RBus_UInt32  sfg_drf_done:1;
    };
}sfg_sfg_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  res2:1;
        RBus_UInt32  sfg_drf_pause:1;
    };
}sfg_sfg_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  res2:1;
        RBus_UInt32  sfg_drf_fail_group:1;
    };
}sfg_sfg_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  sfg_drf_fail_1:1;
        RBus_UInt32  sfg_drf_fail_0:1;
    };
}sfg_sfg_drf_fai_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sfg_bist_test1:1;
        RBus_UInt32  sfg_bist_ls:1;
        RBus_UInt32  sfg_bist_rm:4;
        RBus_UInt32  sfg_bist_rme:1;
        RBus_UInt32  sfg_bist_rst_n:1;
    };
}sfg_sfg_bist_other_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg0_mid_dummy_place:12;
        RBus_UInt32  seg0_mid_dummy_num:4;
        RBus_UInt32  seg1_mid_dummy_place:12;
        RBus_UInt32  seg1_mid_dummy_num:4;
    };
}sfg_sfg_mid_dummy_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg2_mid_dummy_place:12;
        RBus_UInt32  seg2_mid_dummy_num:4;
        RBus_UInt32  seg3_mid_dummy_place:12;
        RBus_UInt32  seg3_mid_dummy_num:4;
    };
}sfg_sfg_mid_dummy_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg4_mid_dummy_place:12;
        RBus_UInt32  seg4_mid_dummy_num:4;
        RBus_UInt32  seg5_mid_dummy_place:12;
        RBus_UInt32  seg5_mid_dummy_num:4;
    };
}sfg_sfg_mid_dummy_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg6_mid_dummy_place:12;
        RBus_UInt32  seg6_mid_dummy_num:4;
        RBus_UInt32  seg7_mid_dummy_place:12;
        RBus_UInt32  seg7_mid_dummy_num:4;
    };
}sfg_sfg_mid_dummy_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg8_mid_dummy_place:12;
        RBus_UInt32  seg8_mid_dummy_num:4;
        RBus_UInt32  seg9_mid_dummy_place:12;
        RBus_UInt32  seg9_mid_dummy_num:4;
    };
}sfg_sfg_mid_dummy_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg10_mid_dummy_place:12;
        RBus_UInt32  seg10_mid_dummy_num:4;
        RBus_UInt32  seg11_mid_dummy_place:12;
        RBus_UInt32  seg11_mid_dummy_num:4;
    };
}sfg_sfg_mid_dummy_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  front_dum_num:12;
        RBus_UInt32  res1:3;
        RBus_UInt32  front_dum_en:1;
        RBus_UInt32  back_dum_num:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  back_dum_en:1;
    };
}sfg_sfg_ctrl_dum_line_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ext_num_fw_mode:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  ext_subpixel_mode:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  active_pixel_rgb:13;
        RBus_UInt32  res3:2;
        RBus_UInt32  dummy1802da08_5_0:6;
    };
}sfg_sfg_data_after_den_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  insert_line0_r_0:4;
        RBus_UInt32  insert_line0_g_0:4;
        RBus_UInt32  insert_line0_b_0:4;
        RBus_UInt32  insert_line0_r_last:4;
        RBus_UInt32  insert_line0_g_last:4;
        RBus_UInt32  insert_line0_b_last:4;
        RBus_UInt32  res1:7;
        RBus_UInt32  gdummy_sel:1;
    };
}sfg_sfg_insert_subpixel_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  insert_line1_r_0:4;
        RBus_UInt32  insert_line1_g_0:4;
        RBus_UInt32  insert_line1_b_0:4;
        RBus_UInt32  insert_line1_r_last:4;
        RBus_UInt32  insert_line1_g_last:4;
        RBus_UInt32  insert_line1_b_last:4;
        RBus_UInt32  res1:8;
    };
}sfg_sfg_insert_subpixel_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  insert_line2_r_0:4;
        RBus_UInt32  insert_line2_g_0:4;
        RBus_UInt32  insert_line2_b_0:4;
        RBus_UInt32  insert_line2_r_last:4;
        RBus_UInt32  insert_line2_g_last:4;
        RBus_UInt32  insert_line2_b_last:4;
        RBus_UInt32  res1:8;
    };
}sfg_sfg_insert_subpixel_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  insert_line3_r_0:4;
        RBus_UInt32  insert_line3_g_0:4;
        RBus_UInt32  insert_line3_b_0:4;
        RBus_UInt32  insert_line3_r_last:4;
        RBus_UInt32  insert_line3_g_last:4;
        RBus_UInt32  insert_line3_b_last:4;
        RBus_UInt32  res1:8;
    };
}sfg_sfg_insert_subpixel_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dummy_pixel_data:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  db_sel:1;
        RBus_UInt32  res3:20;
    };
}sfg_sfg_ctrl_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  dummy1802da20_15_0:16;
    };
}sfg_sfg_last_ext_pixel_last_flip_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  back_gray_sel_7:2;
        RBus_UInt32  back_gray_sel_6:2;
        RBus_UInt32  back_gray_sel_5:2;
        RBus_UInt32  back_gray_sel_4:2;
        RBus_UInt32  back_gray_sel_3:2;
        RBus_UInt32  back_gray_sel_2:2;
        RBus_UInt32  back_gray_sel_1:2;
        RBus_UInt32  back_gray_sel_0:2;
        RBus_UInt32  front_gray_sel_7:2;
        RBus_UInt32  front_gray_sel_6:2;
        RBus_UInt32  front_gray_sel_5:2;
        RBus_UInt32  front_gray_sel_4:2;
        RBus_UInt32  front_gray_sel_3:2;
        RBus_UInt32  front_gray_sel_2:2;
        RBus_UInt32  front_gray_sel_1:2;
        RBus_UInt32  front_gray_sel_0:2;
    };
}sfg_sfg_ctrl_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  gray_dum_line_data_3:30;
    };
}sfg_sfg_ctrl_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg12_mid_dummy_place:12;
        RBus_UInt32  seg12_mid_dummy_num:4;
        RBus_UInt32  seg13_mid_dummy_place:12;
        RBus_UInt32  seg13_mid_dummy_num:4;
    };
}sfg_sfg_mid_dummy_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg14_mid_dummy_place:12;
        RBus_UInt32  seg14_mid_dummy_num:4;
        RBus_UInt32  seg15_mid_dummy_place:12;
        RBus_UInt32  seg15_mid_dummy_num:4;
    };
}sfg_sfg_mid_dummy_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  sfg_debug_clk_div:2;
        RBus_UInt32  res2:2;
    };
}sfg_sfg_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  data_capture_v:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  data_capture_h:14;
    };
}sfg_sfg_data_capture_vh_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  data_capture_src:2;
        RBus_UInt32  res2:22;
        RBus_UInt32  data_capture_apply:1;
        RBus_UInt32  data_capture_en:1;
        RBus_UInt32  data_capture_port:4;
    };
}sfg_sfg_data_capture_src_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_capture_data:32;
    };
}sfg_sfg_data_capture_read_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  last_seg_start_res_line0:3;
        RBus_UInt32  last_seg_start_line0:13;
        RBus_UInt32  last_seg_start_res_line1:3;
        RBus_UInt32  last_seg_start_line1:13;
    };
}sfg_sfg_last_seg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  last_seg_start_res_line2:3;
        RBus_UInt32  last_seg_start_line2:13;
        RBus_UInt32  last_seg_start_res_line3:3;
        RBus_UInt32  last_seg_start_line3:13;
    };
}sfg_sfg_last_seg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_r_0_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_r_0_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_r_0_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_r_0_line3:5;
    };
}sfg_sfg_drd_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_g_0_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_g_0_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_g_0_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_g_0_line3:5;
    };
}sfg_sfg_drd_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_b_0_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_b_0_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_b_0_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_b_0_line3:5;
    };
}sfg_sfg_drd_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_r_2_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_r_2_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_r_2_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_r_2_line3:5;
    };
}sfg_sfg_drd_ctrl_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_g_2_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_g_2_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_g_2_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_g_2_line3:5;
    };
}sfg_sfg_drd_ctrl_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_b_2_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_b_2_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_b_2_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_b_2_line3:5;
    };
}sfg_sfg_drd_ctrl_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_r_4_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_r_4_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_r_4_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_r_4_line3:5;
    };
}sfg_sfg_drd_ctrl_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_g_4_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_g_4_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_g_4_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_g_4_line3:5;
    };
}sfg_sfg_drd_ctrl_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_b_4_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_b_4_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_b_4_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_b_4_line3:5;
    };
}sfg_sfg_drd_ctrl_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_r_6_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_r_6_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_r_6_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_r_6_line3:5;
    };
}sfg_sfg_drd_ctrl_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_g_6_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_g_6_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_g_6_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_g_6_line3:5;
    };
}sfg_sfg_drd_ctrl_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_b_6_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_b_6_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_b_6_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_b_6_line3:5;
    };
}sfg_sfg_drd_ctrl_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_r_1_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_r_1_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_r_1_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_r_1_line3:5;
    };
}sfg_sfg_drd_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_g_1_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_g_1_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_g_1_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_g_1_line3:5;
    };
}sfg_sfg_drd_ctrl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_b_1_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_b_1_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_b_1_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_b_1_line3:5;
    };
}sfg_sfg_drd_ctrl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_r_3_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_r_3_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_r_3_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_r_3_line3:5;
    };
}sfg_sfg_drd_ctrl_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_g_3_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_g_3_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_g_3_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_g_3_line3:5;
    };
}sfg_sfg_drd_ctrl_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_b_3_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_b_3_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_b_3_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_b_3_line3:5;
    };
}sfg_sfg_drd_ctrl_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_r_5_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_r_5_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_r_5_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_r_5_line3:5;
    };
}sfg_sfg_drd_ctrl_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_g_5_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_g_5_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_g_5_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_g_5_line3:5;
    };
}sfg_sfg_drd_ctrl_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_b_5_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_b_5_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_b_5_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_b_5_line3:5;
    };
}sfg_sfg_drd_ctrl_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_r_7_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_r_7_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_r_7_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_r_7_line3:5;
    };
}sfg_sfg_drd_ctrl_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_g_7_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_g_7_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_g_7_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_g_7_line3:5;
    };
}sfg_sfg_drd_ctrl_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_b_7_line0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_b_7_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_b_7_line2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  drd_b_7_line3:5;
    };
}sfg_sfg_drd_ctrl_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg12_start_res:3;
        RBus_UInt32  seg12_start:13;
        RBus_UInt32  seg13_start_res:3;
        RBus_UInt32  seg13_start:13;
    };
}sfg_sfg_start_ctrl_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg14_start_res:3;
        RBus_UInt32  seg14_start:13;
        RBus_UInt32  seg15_start_res:3;
        RBus_UInt32  seg15_start:13;
    };
}sfg_sfg_start_ctrl_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_12_front_dummy_num_0:2;
        RBus_UInt32  seg_12_back_dummy_num_0:2;
        RBus_UInt32  seg_12_front_dummy_num_1:2;
        RBus_UInt32  seg_12_back_dummy_num_1:2;
        RBus_UInt32  seg_12_front_dummy_num_2:2;
        RBus_UInt32  seg_12_back_dummy_num_2:2;
        RBus_UInt32  seg_12_front_dummy_num_3:2;
        RBus_UInt32  seg_12_back_dummy_num_3:2;
        RBus_UInt32  seg_13_front_dummy_num_0:2;
        RBus_UInt32  seg_13_back_dummy_num_0:2;
        RBus_UInt32  seg_13_front_dummy_num_1:2;
        RBus_UInt32  seg_13_back_dummy_num_1:2;
        RBus_UInt32  seg_13_front_dummy_num_2:2;
        RBus_UInt32  seg_13_back_dummy_num_2:2;
        RBus_UInt32  seg_13_front_dummy_num_3:2;
        RBus_UInt32  seg_13_back_dummy_num_3:2;
    };
}sfg_sfg_dummy_ctrl_29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_14_front_dummy_num_0:2;
        RBus_UInt32  seg_14_back_dummy_num_0:2;
        RBus_UInt32  seg_14_front_dummy_num_1:2;
        RBus_UInt32  seg_14_back_dummy_num_1:2;
        RBus_UInt32  seg_14_front_dummy_num_2:2;
        RBus_UInt32  seg_14_back_dummy_num_2:2;
        RBus_UInt32  seg_14_front_dummy_num_3:2;
        RBus_UInt32  seg_14_back_dummy_num_3:2;
        RBus_UInt32  seg_15_front_dummy_num_0:2;
        RBus_UInt32  seg_15_back_dummy_num_0:2;
        RBus_UInt32  seg_15_front_dummy_num_1:2;
        RBus_UInt32  seg_15_back_dummy_num_1:2;
        RBus_UInt32  seg_15_front_dummy_num_2:2;
        RBus_UInt32  seg_15_back_dummy_num_2:2;
        RBus_UInt32  seg_15_front_dummy_num_3:2;
        RBus_UInt32  seg_15_back_dummy_num_3:2;
    };
}sfg_sfg_dummy_ctrl_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  fw_ext_subpix_a_line_7:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  fw_ext_subpix_a_line_6:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  fw_ext_subpix_a_line_5:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  fw_ext_subpix_a_line_4:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  fw_ext_subpix_a_line_3:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  fw_ext_subpix_a_line_2:3;
        RBus_UInt32  res7:1;
        RBus_UInt32  fw_ext_subpix_a_line_1:3;
        RBus_UInt32  res8:1;
        RBus_UInt32  fw_ext_subpix_a_line_0:3;
    };
}sfg_sfg1_fw_ext_subpixel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  fw_ext_subpix_b_line_7:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  fw_ext_subpix_b_line_6:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  fw_ext_subpix_b_line_5:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  fw_ext_subpix_b_line_4:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  fw_ext_subpix_b_line_3:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  fw_ext_subpix_b_line_2:3;
        RBus_UInt32  res7:1;
        RBus_UInt32  fw_ext_subpix_b_line_1:3;
        RBus_UInt32  res8:1;
        RBus_UInt32  fw_ext_subpix_b_line_0:3;
    };
}sfg_sfg1_fw_ext_subpixel2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dum_data1_line_0:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  dum_data0_line_0:10;
    };
}sfg_sfg1_dum_data_line_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dum_data1_line_1:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  dum_data0_line_1:10;
    };
}sfg_sfg1_dum_data_line_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dum_data1_line_2:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  dum_data0_line_2:10;
    };
}sfg_sfg1_dum_data_line_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dum_data1_line_3:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  dum_data0_line_3:10;
    };
}sfg_sfg1_dum_data_line_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dum_data1_line_4:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  dum_data0_line_4:10;
    };
}sfg_sfg1_dum_data_line_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dum_data1_line_5:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  dum_data0_line_5:10;
    };
}sfg_sfg1_dum_data_line_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dum_data1_line_6:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  dum_data0_line_6:10;
    };
}sfg_sfg1_dum_data_line_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dum_data1_line_7:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  dum_data0_line_7:10;
    };
}sfg_sfg1_dum_data_line_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  zz_shift_sp_4:4;
        RBus_UInt32  zz_shift_sp_5:4;
        RBus_UInt32  zz_shift_sp_6:4;
        RBus_UInt32  zz_shift_sp_7:4;
        RBus_UInt32  zz_shift_mode_4:1;
        RBus_UInt32  zz_shift_mode_5:1;
        RBus_UInt32  zz_shift_mode_6:1;
        RBus_UInt32  zz_shift_mode_7:1;
        RBus_UInt32  res2:4;
    };
}sfg_zz_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  insert_line4_r_0:4;
        RBus_UInt32  insert_line4_g_0:4;
        RBus_UInt32  insert_line4_b_0:4;
        RBus_UInt32  insert_line4_r_last:4;
        RBus_UInt32  insert_line4_g_last:4;
        RBus_UInt32  insert_line4_b_last:4;
        RBus_UInt32  res1:8;
    };
}sfg_sfg_insert_subpixel_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  insert_line5_r_0:4;
        RBus_UInt32  insert_line5_g_0:4;
        RBus_UInt32  insert_line5_b_0:4;
        RBus_UInt32  insert_line5_r_last:4;
        RBus_UInt32  insert_line5_g_last:4;
        RBus_UInt32  insert_line5_b_last:4;
        RBus_UInt32  res1:8;
    };
}sfg_sfg_insert_subpixel_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  insert_line6_r_0:4;
        RBus_UInt32  insert_line6_g_0:4;
        RBus_UInt32  insert_line6_b_0:4;
        RBus_UInt32  insert_line6_r_last:4;
        RBus_UInt32  insert_line6_g_last:4;
        RBus_UInt32  insert_line6_b_last:4;
        RBus_UInt32  res1:8;
    };
}sfg_sfg_insert_subpixel_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  insert_line7_r_0:4;
        RBus_UInt32  insert_line7_g_0:4;
        RBus_UInt32  insert_line7_b_0:4;
        RBus_UInt32  insert_line7_r_last:4;
        RBus_UInt32  insert_line7_g_last:4;
        RBus_UInt32  insert_line7_b_last:4;
        RBus_UInt32  res1:8;
    };
}sfg_sfg_insert_subpixel_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  dummy1802dbbc_15_0:16;
    };
}sfg_sfg_last_ext_pixel_last_flip_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  last_seg_start_res_line4:3;
        RBus_UInt32  last_seg_start_line4:13;
        RBus_UInt32  last_seg_start_res_line5:3;
        RBus_UInt32  last_seg_start_line5:13;
    };
}sfg_sfg_last_seg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  last_seg_start_res_line6:3;
        RBus_UInt32  last_seg_start_line6:13;
        RBus_UInt32  last_seg_start_res_line7:3;
        RBus_UInt32  last_seg_start_line7:13;
    };
}sfg_sfg_last_seg_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sfg_pat_line_width:9;
        RBus_UInt32  res2:3;
        RBus_UInt32  sfg_pat_line_num:9;
        RBus_UInt32  res3:2;
        RBus_UInt32  sfg_pat_cnt_mode:1;
        RBus_UInt32  sfg_pat_even:1;
        RBus_UInt32  sfg_pat_rgb_sel:1;
        RBus_UInt32  sfg_pat_mode:2;
        RBus_UInt32  sfg_pat_en:1;
    };
}sfg_sfg_patgen_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_w0:8;
        RBus_UInt32  sfg_pat_r0:8;
        RBus_UInt32  sfg_pat_g0:8;
        RBus_UInt32  sfg_pat_b0:8;
    };
}sfg_sfg_patgen_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_w1:8;
        RBus_UInt32  sfg_pat_r1:8;
        RBus_UInt32  sfg_pat_g1:8;
        RBus_UInt32  sfg_pat_b1:8;
    };
}sfg_sfg_patgen_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_w2:8;
        RBus_UInt32  sfg_pat_r2:8;
        RBus_UInt32  sfg_pat_g2:8;
        RBus_UInt32  sfg_pat_b2:8;
    };
}sfg_sfg_patgen_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_w3:8;
        RBus_UInt32  sfg_pat_r3:8;
        RBus_UInt32  sfg_pat_g3:8;
        RBus_UInt32  sfg_pat_b3:8;
    };
}sfg_sfg_patgen_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_w4:8;
        RBus_UInt32  sfg_pat_r4:8;
        RBus_UInt32  sfg_pat_g4:8;
        RBus_UInt32  sfg_pat_b4:8;
    };
}sfg_sfg_patgen_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_w5:8;
        RBus_UInt32  sfg_pat_r5:8;
        RBus_UInt32  sfg_pat_g5:8;
        RBus_UInt32  sfg_pat_b5:8;
    };
}sfg_sfg_patgen_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_w6:8;
        RBus_UInt32  sfg_pat_r6:8;
        RBus_UInt32  sfg_pat_g6:8;
        RBus_UInt32  sfg_pat_b6:8;
    };
}sfg_sfg_patgen_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_w7:8;
        RBus_UInt32  sfg_pat_r7:8;
        RBus_UInt32  sfg_pat_g7:8;
        RBus_UInt32  sfg_pat_b7:8;
    };
}sfg_sfg_patgen_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  sfg_pat3_subpix_1:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  sfg_pat3_subpix_0:10;
    };
}sfg_sfg_patgen_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  sfg_pat3_line_0:24;
    };
}sfg_sfg_patgen_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  sfg_pat3_line_1:24;
    };
}sfg_sfg_patgen_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  sfg_pat3_line_2:24;
    };
}sfg_sfg_patgen_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  sfg_pat3_line_3:24;
    };
}sfg_sfg_patgen_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  sfg_tim_irq_en:3;
    };
}sfg_sfg_irq_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  sfg_tim_irq_flag:3;
    };
}sfg_sfg_irq_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  pat_det_h_ini_sta:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  pat_det_width:13;
    };
}sfg_pat_det_window_h_ini_sta_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  pat_det_v_ini_sta:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  pat_det_height:12;
    };
}sfg_pat_det_window_v_ini_sta_height_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  met_frame_thresh:8;
        RBus_UInt32  res2:7;
        RBus_UInt32  pat_det_en:1;
    };
}sfg_pattern_detect_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pxl_diff_12:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  pxl_diff_sub_12:10;
    };
}sfg_pat_det_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pxl_diff_13:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  pxl_diff_sub_13:10;
    };
}sfg_pat_det_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  vline_num_thresh_12:12;
        RBus_UInt32  res2:2;
        RBus_UInt32  h_num_thresh_12:14;
    };
}sfg_pat_det_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  vline_num_thresh_13:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  h_num_thresh_13:12;
    };
}sfg_pat_det_ctrl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  irq_flag:17;
    };
}sfg_pat_det_ctrl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  irq_en:17;
    };
}sfg_pat_det_ctrl_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_num_thresh_13:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  vsign_num_thresh_12:10;
    };
}sfg_pat_det_ctrl_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_eq12_acc_1:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  vsign_eq12_acc_0:10;
    };
}sfg_pat_det_acc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_eq12_acc_3:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  vsign_eq12_acc_2:10;
    };
}sfg_pat_det_acc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_eq12_acc_5:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  vsign_eq12_acc_4:10;
    };
}sfg_pat_det_acc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_eq12_acc_7:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  vsign_eq12_acc_6:10;
    };
}sfg_pat_det_acc4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_eq13_acc_1:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  vsign_eq13_acc_0:10;
    };
}sfg_pat_det_acc5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_eq13_acc_3:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  vsign_eq13_acc_2:10;
    };
}sfg_pat_det_acc6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_eq13_acc_5:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  vsign_eq13_acc_4:10;
    };
}sfg_pat_det_acc7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_eq13_acc_7:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  vsign_eq13_acc_6:10;
    };
}sfg_pat_det_acc8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frame_eq12_acc_3:8;
        RBus_UInt32  frame_eq12_acc_2:8;
        RBus_UInt32  frame_eq12_acc_1:8;
        RBus_UInt32  frame_eq12_acc_0:8;
    };
}sfg_pat_det_acc9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frame_eq12_acc_7:8;
        RBus_UInt32  frame_eq12_acc_6:8;
        RBus_UInt32  frame_eq12_acc_5:8;
        RBus_UInt32  frame_eq12_acc_4:8;
    };
}sfg_pat_det_acc10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frame_eq13_acc_3:8;
        RBus_UInt32  frame_eq13_acc_2:8;
        RBus_UInt32  frame_eq13_acc_1:8;
        RBus_UInt32  frame_eq13_acc_0:8;
    };
}sfg_pat_det_acc11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frame_eq13_acc_7:8;
        RBus_UInt32  frame_eq13_acc_6:8;
        RBus_UInt32  frame_eq13_acc_5:8;
        RBus_UInt32  frame_eq13_acc_4:8;
    };
}sfg_pat_det_acc12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  frame_other_acc:8;
    };
}sfg_pat_det_acc13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_tst_out:32;
    };
}sfg_debug_pin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_in_data_inv:1;
        RBus_UInt32  sfg2_osd_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  sfg2_bypass_mode:1;
        RBus_UInt32  sfg2_tg_auto_cfg:1;
        RBus_UInt32  sfg2_dout_en:1;
        RBus_UInt32  res2:16;
        RBus_UInt32  sfg2_h_flip_en:1;
        RBus_UInt32  sfg2_seg_num:4;
        RBus_UInt32  sfg2_port_num:4;
    };
}sfg_sfg2_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_port_0:4;
        RBus_UInt32  sfg2_port_1:4;
        RBus_UInt32  sfg2_port_2:4;
        RBus_UInt32  sfg2_port_3:4;
        RBus_UInt32  sfg2_port_4:4;
        RBus_UInt32  sfg2_port_5:4;
        RBus_UInt32  sfg2_port_6:4;
        RBus_UInt32  sfg2_port_7:4;
    };
}sfg_sfg2_port_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_force_bg_en:1;
        RBus_UInt32  res1:23;
        RBus_UInt32  sfg2_force_bg_port_7:1;
        RBus_UInt32  sfg2_force_bg_port_6:1;
        RBus_UInt32  sfg2_force_bg_port_5:1;
        RBus_UInt32  sfg2_force_bg_port_4:1;
        RBus_UInt32  sfg2_force_bg_port_3:1;
        RBus_UInt32  sfg2_force_bg_port_2:1;
        RBus_UInt32  sfg2_force_bg_port_1:1;
        RBus_UInt32  sfg2_force_bg_port_0:1;
    };
}sfg_sfg2_force_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_bg_a:8;
        RBus_UInt32  sfg2_bg_r:8;
        RBus_UInt32  sfg2_bg_g:8;
        RBus_UInt32  sfg2_bg_b:8;
    };
}sfg_sfg2_force_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  sfg2_crc_mode:1;
        RBus_UInt32  sfg2_crc_l_auto_cmp_en:1;
        RBus_UInt32  sfg2_crc_r_auto_cmp_en:1;
        RBus_UInt32  sfg2_crc_conti:1;
        RBus_UInt32  sfg2_crc_start:1;
    };
}sfg_sfg2_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_crc_result_0:32;
    };
}sfg_sfg2_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_crc_result_1:32;
    };
}sfg_sfg2_crc_r_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_l_des_crc:32;
    };
}sfg_sfg2_crc_l_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_r_des_crc:32;
    };
}sfg_sfg2_crc_r_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_l_crc_err_cnt:16;
        RBus_UInt32  sfg2_r_crc_err_cnt:16;
    };
}sfg_sfg2_crc_err_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  sfg2_hsync_width:8;
        RBus_UInt32  sfg2_hsync_delay:16;
    };
}sfg_sfg2_time_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  sfg2_vsync_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  sfg2_vsync_start:8;
    };
}sfg_sfg2_time_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_dh_den_sta:16;
        RBus_UInt32  sfg2_req_start:16;
    };
}sfg_sfg2_time_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  sfg2_final_line_length:13;
    };
}sfg_sfg2_den_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  sfg2_hsync_width_auto:8;
        RBus_UInt32  sfg2_hsync_delay_auto:16;
    };
}sfg_sfg2_time_ctrl_auto_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  sfg2_vsync_end_auto:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  sfg2_vsync_start_auto:8;
    };
}sfg_sfg2_time_ctrl_auto_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_dh_den_sta_auto:16;
        RBus_UInt32  sfg2_req_start_auto:16;
    };
}sfg_sfg2_time_ctrl_auto_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_fifo_en:1;
        RBus_UInt32  plt_lvds_mode:3;
        RBus_UInt32  res1:3;
        RBus_UInt32  pif_fifo_dbg_en:1;
        RBus_UInt32  pif_fifo_dbg_sel:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  pif_fifo_irq:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_fifo_error_ie:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  pif_fifo_error:1;
        RBus_UInt32  pif_fifo_error_cnt:8;
    };
}sfg_pif_fifo_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_fifo_rst_type:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  hit_r_cnt_5_error:1;
        RBus_UInt32  hit_r_cnt_4_error:1;
        RBus_UInt32  hit_r_cnt_3_error:1;
        RBus_UInt32  hit_r_cnt_2_error:1;
        RBus_UInt32  hit_r_cnt_1_error:1;
        RBus_UInt32  hit_r_cnt_0_error:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  lane_en:16;
    };
}sfg_pif_fifo_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lvds_pair_sel07:4;
        RBus_UInt32  lvds_pair_sel06:4;
        RBus_UInt32  lvds_pair_sel05:4;
        RBus_UInt32  lvds_pair_sel04:4;
        RBus_UInt32  lvds_pair_sel03:4;
        RBus_UInt32  lvds_pair_sel02:4;
        RBus_UInt32  lvds_pair_sel01:4;
        RBus_UInt32  lvds_pair_sel00:4;
    };
}sfg_pif_fifo_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lvds_pair_sel15:4;
        RBus_UInt32  lvds_pair_sel14:4;
        RBus_UInt32  lvds_pair_sel13:4;
        RBus_UInt32  lvds_pair_sel12:4;
        RBus_UInt32  lvds_pair_sel11:4;
        RBus_UInt32  lvds_pair_sel10:4;
        RBus_UInt32  lvds_pair_sel09:4;
        RBus_UInt32  lvds_pair_sel08:4;
    };
}sfg_pif_fifo_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  dummy1802dca4_27_24:4;
        RBus_UInt32  bist_length:24;
    };
}sfg_pif_fifo_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  bist_done:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  bist_pass:1;
        RBus_UInt32  bist_lane_pass:16;
    };
}sfg_pif_fifo_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_fifo_tst_out:32;
    };
}sfg_pif_fifo_ctrl6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_pif_fifo_en:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  osd_pif_fifo_dbg_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  osd_pif_fifo_dbg_sel:2;
        RBus_UInt32  res3:3;
        RBus_UInt32  osd_pif_fifo_irq:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  osd_pif_fifo_error_ie:1;
        RBus_UInt32  res5:3;
        RBus_UInt32  osd_pif_fifo_error:1;
        RBus_UInt32  osd_pif_fifo_error_cnt:8;
    };
}sfg_pif_fifo_osd_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_pif_fifo_rst_type:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  osd_hit_r_cnt_5_error:1;
        RBus_UInt32  osd_hit_r_cnt_4_error:1;
        RBus_UInt32  osd_hit_r_cnt_3_error:1;
        RBus_UInt32  osd_hit_r_cnt_2_error:1;
        RBus_UInt32  osd_hit_r_cnt_1_error:1;
        RBus_UInt32  osd_hit_r_cnt_0_error:1;
        RBus_UInt32  res2:20;
        RBus_UInt32  osd_lane_en:4;
    };
}sfg_pif_fifo_osd_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  osd_lvds_pair_sel3:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  osd_lvds_pair_sel2:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  osd_lvds_pair_sel1:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  osd_lvds_pair_sel0:2;
    };
}sfg_pif_fifo_osd_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_bist_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  dummy1802dcbc_27_24:4;
        RBus_UInt32  osd_bist_length:24;
    };
}sfg_pif_fifo_osd_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  osd_bist_done:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  osd_bist_pass:1;
        RBus_UInt32  res3:12;
        RBus_UInt32  osd_bist_lane_pass:4;
    };
}sfg_pif_fifo_osd_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_pif_fifo_tst_out:32;
    };
}sfg_pif_fifo_osd_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  video_osd_sel:3;
        RBus_UInt32  res2:12;
        RBus_UInt32  phy_lane_en:16;
    };
}sfg_pif_fifo_mux_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fix_pattern_en:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  fix_pattern:27;
    };
}sfg_pif_fifo_mux_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  pn_swap:16;
    };
}sfg_pif_fifo_mux_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prbs_tx_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  prbs_mode:2;
        RBus_UInt32  res2:24;
        RBus_UInt32  pif_debug_sel:4;
    };
}sfg_pif_misc_RBUS;

#else //apply LITTLE_ENDIAN

//======SFG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dclk_dly_sel:3;
        RBus_UInt32  dout_data_inv:1;
        RBus_UInt32  dout_bit_swap:1;
        RBus_UInt32  dout_rb_swap:1;
        RBus_UInt32  daclk_en:1;
        RBus_UInt32  daclk_inv:1;
        RBus_UInt32  dden_inv:1;
        RBus_UInt32  dhs_inv:1;
        RBus_UInt32  dvs_inv:1;
        RBus_UInt32  sfg_dout_en:1;
        RBus_UInt32  dout_mode:2;
        RBus_UInt32  dispd_debug_mode:3;
        RBus_UInt32  dout_pre_rb_swap:1;
        RBus_UInt32  pif_clk_sel:1;
        RBus_UInt32  macclk_inv:1;
        RBus_UInt32  lclk_inv_sel:1;
        RBus_UInt32  subpixel_en:1;
        RBus_UInt32  fix_hs_last_line:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  clken_disp_sfg:1;
        RBus_UInt32  clken_disp_sfg_osd:1;
        RBus_UInt32  res2:6;
    };
}sfg_sfg_zz_shift_dbg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  force_bg_dif_pport:1;
        RBus_UInt32  force_bg_dif_oport:1;
        RBus_UInt32  force_bg_dif_nport:1;
        RBus_UInt32  force_bg_dif_mport:1;
        RBus_UInt32  force_bg_dif_lport:1;
        RBus_UInt32  force_bg_dif_kport:1;
        RBus_UInt32  force_bg_dif_jport:1;
        RBus_UInt32  force_bg_dif_iport:1;
        RBus_UInt32  force_bg_dif_hport:1;
        RBus_UInt32  force_bg_dif_gport:1;
        RBus_UInt32  force_bg_dif_fport:1;
        RBus_UInt32  force_bg_dif_eport:1;
        RBus_UInt32  force_bg_dif_dport:1;
        RBus_UInt32  force_bg_dif_cport:1;
        RBus_UInt32  force_bg_dif_bport:1;
        RBus_UInt32  force_bg_dif_aport:1;
        RBus_UInt32  dclk_mode_switch:4;
        RBus_UInt32  res2:4;
    };
}sfg_sfg_swap_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_crc_start:1;
        RBus_UInt32  sfg_crc_conti:1;
        RBus_UInt32  sfg_crc_r_auto_cmp_en:1;
        RBus_UInt32  sfg_crc_l_auto_cmp_en:1;
        RBus_UInt32  sfg_crc_mode:1;
        RBus_UInt32  res1:27;
    };
}sfg_sfg_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_crc_result_0:32;
    };
}sfg_sfg_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_crc_result_1:32;
    };
}sfg_sfg_crc_r_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_l_des_crc:32;
    };
}sfg_sfg_l_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_r_des_crc:32;
    };
}sfg_sfg_r_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_r_crc_err_cnt:16;
        RBus_UInt32  sfg_l_crc_err_cnt:16;
    };
}sfg_sfg_crc_err_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bg_dif_blu:10;
        RBus_UInt32  bg_dif_grn:10;
        RBus_UInt32  bg_dif_red:10;
        RBus_UInt32  res1:1;
        RBus_UInt32  en_force_bg_dif:1;
    };
}sfg_sfg_force_bg_at_dif_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  zz_shift_mode_3:1;
        RBus_UInt32  zz_shift_mode_2:1;
        RBus_UInt32  zz_shift_mode_1:1;
        RBus_UInt32  zz_shift_mode_0:1;
        RBus_UInt32  zz_shift_sp_3:4;
        RBus_UInt32  zz_shift_sp_2:4;
        RBus_UInt32  zz_shift_sp_1:4;
        RBus_UInt32  zz_shift_sp_0:4;
        RBus_UInt32  res2:7;
        RBus_UInt32  dummy_0:1;
    };
}sfg_zz_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_1_back_dummy_num_3:2;
        RBus_UInt32  seg_1_front_dummy_num_3:2;
        RBus_UInt32  seg_1_back_dummy_num_2:2;
        RBus_UInt32  seg_1_front_dummy_num_2:2;
        RBus_UInt32  seg_1_back_dummy_num_1:2;
        RBus_UInt32  seg_1_front_dummy_num_1:2;
        RBus_UInt32  seg_1_back_dummy_num_0:2;
        RBus_UInt32  seg_1_front_dummy_num_0:2;
        RBus_UInt32  seg_0_back_dummy_num_3:2;
        RBus_UInt32  seg_0_front_dummy_num_3:2;
        RBus_UInt32  seg_0_back_dummy_num_2:2;
        RBus_UInt32  seg_0_front_dummy_num_2:2;
        RBus_UInt32  seg_0_back_dummy_num_1:2;
        RBus_UInt32  seg_0_front_dummy_num_1:2;
        RBus_UInt32  seg_0_back_dummy_num_0:2;
        RBus_UInt32  seg_0_front_dummy_num_0:2;
    };
}sfg_sfg_dummy_ctrl_0a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_3_back_dummy_num_3:2;
        RBus_UInt32  seg_3_front_dummy_num_3:2;
        RBus_UInt32  seg_3_back_dummy_num_2:2;
        RBus_UInt32  seg_3_front_dummy_num_2:2;
        RBus_UInt32  seg_3_back_dummy_num_1:2;
        RBus_UInt32  seg_3_front_dummy_num_1:2;
        RBus_UInt32  seg_3_back_dummy_num_0:2;
        RBus_UInt32  seg_3_front_dummy_num_0:2;
        RBus_UInt32  seg_2_back_dummy_num_3:2;
        RBus_UInt32  seg_2_front_dummy_num_3:2;
        RBus_UInt32  seg_2_back_dummy_num_2:2;
        RBus_UInt32  seg_2_front_dummy_num_2:2;
        RBus_UInt32  seg_2_back_dummy_num_1:2;
        RBus_UInt32  seg_2_front_dummy_num_1:2;
        RBus_UInt32  seg_2_back_dummy_num_0:2;
        RBus_UInt32  seg_2_front_dummy_num_0:2;
    };
}sfg_sfg_dummy_ctrl_0b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_5_back_dummy_num_3:2;
        RBus_UInt32  seg_5_front_dummy_num_3:2;
        RBus_UInt32  seg_5_back_dummy_num_2:2;
        RBus_UInt32  seg_5_front_dummy_num_2:2;
        RBus_UInt32  seg_5_back_dummy_num_1:2;
        RBus_UInt32  seg_5_front_dummy_num_1:2;
        RBus_UInt32  seg_5_back_dummy_num_0:2;
        RBus_UInt32  seg_5_front_dummy_num_0:2;
        RBus_UInt32  seg_4_back_dummy_num_3:2;
        RBus_UInt32  seg_4_front_dummy_num_3:2;
        RBus_UInt32  seg_4_back_dummy_num_2:2;
        RBus_UInt32  seg_4_front_dummy_num_2:2;
        RBus_UInt32  seg_4_back_dummy_num_1:2;
        RBus_UInt32  seg_4_front_dummy_num_1:2;
        RBus_UInt32  seg_4_back_dummy_num_0:2;
        RBus_UInt32  seg_4_front_dummy_num_0:2;
    };
}sfg_sfg_dummy_ctrl_1a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_7_back_dummy_num_3:2;
        RBus_UInt32  seg_7_front_dummy_num_3:2;
        RBus_UInt32  seg_7_back_dummy_num_2:2;
        RBus_UInt32  seg_7_front_dummy_num_2:2;
        RBus_UInt32  seg_7_back_dummy_num_1:2;
        RBus_UInt32  seg_7_front_dummy_num_1:2;
        RBus_UInt32  seg_7_back_dummy_num_0:2;
        RBus_UInt32  seg_7_front_dummy_num_0:2;
        RBus_UInt32  seg_6_back_dummy_num_3:2;
        RBus_UInt32  seg_6_front_dummy_num_3:2;
        RBus_UInt32  seg_6_back_dummy_num_2:2;
        RBus_UInt32  seg_6_front_dummy_num_2:2;
        RBus_UInt32  seg_6_back_dummy_num_1:2;
        RBus_UInt32  seg_6_front_dummy_num_1:2;
        RBus_UInt32  seg_6_back_dummy_num_0:2;
        RBus_UInt32  seg_6_front_dummy_num_0:2;
    };
}sfg_sfg_dummy_ctrl_1b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_9_back_dummy_num_3:2;
        RBus_UInt32  seg_9_front_dummy_num_3:2;
        RBus_UInt32  seg_9_back_dummy_num_2:2;
        RBus_UInt32  seg_9_front_dummy_num_2:2;
        RBus_UInt32  seg_9_back_dummy_num_1:2;
        RBus_UInt32  seg_9_front_dummy_num_1:2;
        RBus_UInt32  seg_9_back_dummy_num_0:2;
        RBus_UInt32  seg_9_front_dummy_num_0:2;
        RBus_UInt32  seg_8_back_dummy_num_3:2;
        RBus_UInt32  seg_8_front_dummy_num_3:2;
        RBus_UInt32  seg_8_back_dummy_num_2:2;
        RBus_UInt32  seg_8_front_dummy_num_2:2;
        RBus_UInt32  seg_8_back_dummy_num_1:2;
        RBus_UInt32  seg_8_front_dummy_num_1:2;
        RBus_UInt32  seg_8_back_dummy_num_0:2;
        RBus_UInt32  seg_8_front_dummy_num_0:2;
    };
}sfg_sfg_dummy_ctrl_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_11_back_dummy_num_3:2;
        RBus_UInt32  seg_11_front_dummy_num_3:2;
        RBus_UInt32  seg_11_back_dummy_num_2:2;
        RBus_UInt32  seg_11_front_dummy_num_2:2;
        RBus_UInt32  seg_11_back_dummy_num_1:2;
        RBus_UInt32  seg_11_front_dummy_num_1:2;
        RBus_UInt32  seg_11_back_dummy_num_0:2;
        RBus_UInt32  seg_11_front_dummy_num_0:2;
        RBus_UInt32  seg_10_back_dummy_num_3:2;
        RBus_UInt32  seg_10_front_dummy_num_3:2;
        RBus_UInt32  seg_10_back_dummy_num_2:2;
        RBus_UInt32  seg_10_front_dummy_num_2:2;
        RBus_UInt32  seg_10_back_dummy_num_1:2;
        RBus_UInt32  seg_10_front_dummy_num_1:2;
        RBus_UInt32  seg_10_back_dummy_num_0:2;
        RBus_UInt32  seg_10_front_dummy_num_0:2;
    };
}sfg_sfg_dummy_ctrl_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gray_dum_line_data_2:30;
        RBus_UInt32  res1:2;
    };
}sfg_sfg_ctrl_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dv_den_sta:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dv_den_end:13;
        RBus_UInt32  res2:3;
    };
}sfg_sfg_ctrl_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_den_sta:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dh_den_end:13;
        RBus_UInt32  res2:3;
    };
}sfg_sfg_ctrl_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_total:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dh_width:8;
        RBus_UInt32  dv_width:8;
    };
}sfg_sfg_ctrl_26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port_num:5;
        RBus_UInt32  res1:2;
        RBus_UInt32  h_flip_en:1;
        RBus_UInt32  seg_num:5;
        RBus_UInt32  data_map_sel:3;
        RBus_UInt32  pif_pixel_mode:2;
        RBus_UInt32  res2:5;
        RBus_UInt32  dummy_pixel_shift_en:1;
        RBus_UInt32  mask_one_eye_black_left:1;
        RBus_UInt32  mask_one_eye_black_en:1;
        RBus_UInt32  dummy_1:2;
        RBus_UInt32  data_mode:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  data_shift_en:1;
    };
}sfg_sfg_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg1_start:13;
        RBus_UInt32  seg1_start_res:3;
        RBus_UInt32  seg0_start:13;
        RBus_UInt32  seg0_start_res:3;
    };
}sfg_sfg_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg3_start:13;
        RBus_UInt32  seg3_start_res:3;
        RBus_UInt32  seg2_start:13;
        RBus_UInt32  seg2_start_res:3;
    };
}sfg_sfg_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg5_start:13;
        RBus_UInt32  seg5_start_res:3;
        RBus_UInt32  seg4_start:13;
        RBus_UInt32  seg4_start_res:3;
    };
}sfg_sfg_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg7_start:13;
        RBus_UInt32  seg7_start_res:3;
        RBus_UInt32  seg6_start:13;
        RBus_UInt32  seg6_start_res:3;
    };
}sfg_sfg_ctrl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg9_start:13;
        RBus_UInt32  seg9_start_res:3;
        RBus_UInt32  seg8_start:13;
        RBus_UInt32  seg8_start_res:3;
    };
}sfg_sfg_start_ctrl_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg11_start:13;
        RBus_UInt32  seg11_start_res:3;
        RBus_UInt32  seg10_start:13;
        RBus_UInt32  seg10_start_res:3;
    };
}sfg_sfg_start_ctrl_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gray_dum_line_data_0:30;
        RBus_UInt32  res1:2;
    };
}sfg_sfg_ctrl_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gray_dum_line_data_1:30;
        RBus_UInt32  res1:2;
    };
}sfg_sfg_ctrl_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  downsample_v:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  back_gray_en:1;
        RBus_UInt32  back_act_en:1;
        RBus_UInt32  front_act_en:1;
        RBus_UInt32  front_gray_en:1;
        RBus_UInt32  back_gray_num:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  back_act_num:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  front_act_num:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  front_gray_num:3;
        RBus_UInt32  res5:7;
        RBus_UInt32  tg_auto_cfg:1;
        RBus_UInt32  bypass_mode:1;
    };
}sfg_sfg_ctrl_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hsync_delay:16;
        RBus_UInt32  hsync_width:8;
        RBus_UInt32  res1:8;
    };
}sfg_sfg_ctrl_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsync_start:8;
        RBus_UInt32  vsync_end:8;
        RBus_UInt32  hs_distance:14;
        RBus_UInt32  res1:2;
    };
}sfg_sfg_ctrl_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  req_start:16;
        RBus_UInt32  sfg_dh_den_sta:16;
    };
}sfg_sfg_ctrl_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg0_flip:1;
        RBus_UInt32  seg1_flip:1;
        RBus_UInt32  seg2_flip:1;
        RBus_UInt32  seg3_flip:1;
        RBus_UInt32  seg4_flip:1;
        RBus_UInt32  seg5_flip:1;
        RBus_UInt32  seg6_flip:1;
        RBus_UInt32  seg7_flip:1;
        RBus_UInt32  seg8_flip:1;
        RBus_UInt32  seg9_flip:1;
        RBus_UInt32  seg10_flip:1;
        RBus_UInt32  seg11_flip:1;
        RBus_UInt32  seg12_flip:1;
        RBus_UInt32  seg13_flip:1;
        RBus_UInt32  seg14_flip:1;
        RBus_UInt32  seg15_flip:1;
        RBus_UInt32  res1:16;
    };
}sfg_sfg_ctrl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  final_line_length:13;
        RBus_UInt32  res2:3;
    };
}sfg_sfg_ctrl_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  final_addr_split_mode:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  residue_pix_split_mode:3;
        RBus_UInt32  res2:13;
    };
}sfg_sfg_ctrl_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hs_io_dist:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  hs_den_io_dist:13;
        RBus_UInt32  res2:3;
    };
}sfg_sfg_ctrl_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  req_start_auto:16;
        RBus_UInt32  sfg_dh_den_sta_auto:16;
    };
}sfg_sfg_tg_auto_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hsync_delay_auto:16;
        RBus_UInt32  hsync_width_auto:8;
        RBus_UInt32  res1:7;
        RBus_UInt32  t_read:1;
    };
}sfg_sfg_tg_auto_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsync_start_auto:8;
        RBus_UInt32  vsync_end_auto:8;
        RBus_UInt32  hs_distance_auto:14;
        RBus_UInt32  res1:2;
    };
}sfg_sfg_tg_auto_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hs_io_dist_auto:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  hs_den_io_dist_auto:13;
        RBus_UInt32  res2:3;
    };
}sfg_sfg_tg_auto_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  clken_isp:1;
        RBus_UInt32  clken_p2p:1;
        RBus_UInt32  in_data_inv:1;
        RBus_UInt32  dummy_2:11;
        RBus_UInt32  clken_vby1_osd:1;
        RBus_UInt32  clken_vby1:1;
        RBus_UInt32  clken_epi:1;
        RBus_UInt32  clken_lvds:1;
    };
}sfg_sfg_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_bist_mode:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:30;
    };
}sfg_sfg_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_bist_done:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:30;
    };
}sfg_sfg_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_bist_fail_group:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:30;
    };
}sfg_sfg_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_bist_fail_0:1;
        RBus_UInt32  sfg_bist_fail_1:1;
        RBus_UInt32  res1:30;
    };
}sfg_sfg_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_drf_mode:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:30;
    };
}sfg_sfg_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_drf_resume:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:30;
    };
}sfg_sfg_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_drf_done:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:30;
    };
}sfg_sfg_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_drf_pause:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:30;
    };
}sfg_sfg_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_drf_fail_group:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:30;
    };
}sfg_sfg_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_drf_fail_0:1;
        RBus_UInt32  sfg_drf_fail_1:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:28;
    };
}sfg_sfg_drf_fai_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_bist_rst_n:1;
        RBus_UInt32  sfg_bist_rme:1;
        RBus_UInt32  sfg_bist_rm:4;
        RBus_UInt32  sfg_bist_ls:1;
        RBus_UInt32  sfg_bist_test1:1;
        RBus_UInt32  res1:24;
    };
}sfg_sfg_bist_other_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg1_mid_dummy_num:4;
        RBus_UInt32  seg1_mid_dummy_place:12;
        RBus_UInt32  seg0_mid_dummy_num:4;
        RBus_UInt32  seg0_mid_dummy_place:12;
    };
}sfg_sfg_mid_dummy_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg3_mid_dummy_num:4;
        RBus_UInt32  seg3_mid_dummy_place:12;
        RBus_UInt32  seg2_mid_dummy_num:4;
        RBus_UInt32  seg2_mid_dummy_place:12;
    };
}sfg_sfg_mid_dummy_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg5_mid_dummy_num:4;
        RBus_UInt32  seg5_mid_dummy_place:12;
        RBus_UInt32  seg4_mid_dummy_num:4;
        RBus_UInt32  seg4_mid_dummy_place:12;
    };
}sfg_sfg_mid_dummy_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg7_mid_dummy_num:4;
        RBus_UInt32  seg7_mid_dummy_place:12;
        RBus_UInt32  seg6_mid_dummy_num:4;
        RBus_UInt32  seg6_mid_dummy_place:12;
    };
}sfg_sfg_mid_dummy_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg9_mid_dummy_num:4;
        RBus_UInt32  seg9_mid_dummy_place:12;
        RBus_UInt32  seg8_mid_dummy_num:4;
        RBus_UInt32  seg8_mid_dummy_place:12;
    };
}sfg_sfg_mid_dummy_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg11_mid_dummy_num:4;
        RBus_UInt32  seg11_mid_dummy_place:12;
        RBus_UInt32  seg10_mid_dummy_num:4;
        RBus_UInt32  seg10_mid_dummy_place:12;
    };
}sfg_sfg_mid_dummy_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  back_dum_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  back_dum_num:12;
        RBus_UInt32  front_dum_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  front_dum_num:12;
    };
}sfg_sfg_ctrl_dum_line_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802da08_5_0:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  active_pixel_rgb:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  ext_subpixel_mode:1;
        RBus_UInt32  res3:6;
        RBus_UInt32  ext_num_fw_mode:1;
    };
}sfg_sfg_data_after_den_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gdummy_sel:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  insert_line0_b_last:4;
        RBus_UInt32  insert_line0_g_last:4;
        RBus_UInt32  insert_line0_r_last:4;
        RBus_UInt32  insert_line0_b_0:4;
        RBus_UInt32  insert_line0_g_0:4;
        RBus_UInt32  insert_line0_r_0:4;
    };
}sfg_sfg_insert_subpixel_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  insert_line1_b_last:4;
        RBus_UInt32  insert_line1_g_last:4;
        RBus_UInt32  insert_line1_r_last:4;
        RBus_UInt32  insert_line1_b_0:4;
        RBus_UInt32  insert_line1_g_0:4;
        RBus_UInt32  insert_line1_r_0:4;
    };
}sfg_sfg_insert_subpixel_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  insert_line2_b_last:4;
        RBus_UInt32  insert_line2_g_last:4;
        RBus_UInt32  insert_line2_r_last:4;
        RBus_UInt32  insert_line2_b_0:4;
        RBus_UInt32  insert_line2_g_0:4;
        RBus_UInt32  insert_line2_r_0:4;
    };
}sfg_sfg_insert_subpixel_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  insert_line3_b_last:4;
        RBus_UInt32  insert_line3_g_last:4;
        RBus_UInt32  insert_line3_r_last:4;
        RBus_UInt32  insert_line3_b_0:4;
        RBus_UInt32  insert_line3_g_0:4;
        RBus_UInt32  insert_line3_r_0:4;
    };
}sfg_sfg_insert_subpixel_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  db_sel:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  dummy_pixel_data:1;
        RBus_UInt32  res3:3;
    };
}sfg_sfg_ctrl_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802da20_15_0:16;
        RBus_UInt32  res1:16;
    };
}sfg_sfg_last_ext_pixel_last_flip_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  front_gray_sel_0:2;
        RBus_UInt32  front_gray_sel_1:2;
        RBus_UInt32  front_gray_sel_2:2;
        RBus_UInt32  front_gray_sel_3:2;
        RBus_UInt32  front_gray_sel_4:2;
        RBus_UInt32  front_gray_sel_5:2;
        RBus_UInt32  front_gray_sel_6:2;
        RBus_UInt32  front_gray_sel_7:2;
        RBus_UInt32  back_gray_sel_0:2;
        RBus_UInt32  back_gray_sel_1:2;
        RBus_UInt32  back_gray_sel_2:2;
        RBus_UInt32  back_gray_sel_3:2;
        RBus_UInt32  back_gray_sel_4:2;
        RBus_UInt32  back_gray_sel_5:2;
        RBus_UInt32  back_gray_sel_6:2;
        RBus_UInt32  back_gray_sel_7:2;
    };
}sfg_sfg_ctrl_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gray_dum_line_data_3:30;
        RBus_UInt32  res1:2;
    };
}sfg_sfg_ctrl_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg13_mid_dummy_num:4;
        RBus_UInt32  seg13_mid_dummy_place:12;
        RBus_UInt32  seg12_mid_dummy_num:4;
        RBus_UInt32  seg12_mid_dummy_place:12;
    };
}sfg_sfg_mid_dummy_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg15_mid_dummy_num:4;
        RBus_UInt32  seg15_mid_dummy_place:12;
        RBus_UInt32  seg14_mid_dummy_num:4;
        RBus_UInt32  seg14_mid_dummy_place:12;
    };
}sfg_sfg_mid_dummy_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  sfg_debug_clk_div:2;
        RBus_UInt32  res2:28;
    };
}sfg_sfg_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_capture_h:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  data_capture_v:14;
        RBus_UInt32  res2:2;
    };
}sfg_sfg_data_capture_vh_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_capture_port:4;
        RBus_UInt32  data_capture_en:1;
        RBus_UInt32  data_capture_apply:1;
        RBus_UInt32  res1:22;
        RBus_UInt32  data_capture_src:2;
        RBus_UInt32  res2:2;
    };
}sfg_sfg_data_capture_src_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_capture_data:32;
    };
}sfg_sfg_data_capture_read_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  last_seg_start_line1:13;
        RBus_UInt32  last_seg_start_res_line1:3;
        RBus_UInt32  last_seg_start_line0:13;
        RBus_UInt32  last_seg_start_res_line0:3;
    };
}sfg_sfg_last_seg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  last_seg_start_line3:13;
        RBus_UInt32  last_seg_start_res_line3:3;
        RBus_UInt32  last_seg_start_line2:13;
        RBus_UInt32  last_seg_start_res_line2:3;
    };
}sfg_sfg_last_seg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_r_0_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_r_0_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_r_0_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_r_0_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_g_0_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_g_0_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_g_0_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_g_0_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_b_0_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_b_0_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_b_0_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_b_0_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_r_2_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_r_2_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_r_2_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_r_2_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_g_2_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_g_2_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_g_2_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_g_2_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_b_2_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_b_2_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_b_2_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_b_2_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_r_4_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_r_4_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_r_4_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_r_4_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_g_4_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_g_4_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_g_4_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_g_4_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_b_4_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_b_4_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_b_4_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_b_4_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_r_6_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_r_6_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_r_6_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_r_6_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_g_6_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_g_6_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_g_6_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_g_6_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_b_6_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_b_6_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_b_6_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_b_6_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_r_1_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_r_1_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_r_1_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_r_1_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_g_1_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_g_1_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_g_1_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_g_1_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_b_1_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_b_1_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_b_1_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_b_1_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_r_3_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_r_3_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_r_3_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_r_3_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_g_3_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_g_3_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_g_3_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_g_3_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_b_3_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_b_3_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_b_3_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_b_3_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_r_5_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_r_5_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_r_5_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_r_5_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_g_5_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_g_5_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_g_5_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_g_5_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_b_5_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_b_5_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_b_5_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_b_5_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_r_7_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_r_7_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_r_7_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_r_7_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_g_7_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_g_7_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_g_7_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_g_7_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drd_b_7_line3:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  drd_b_7_line2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  drd_b_7_line1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  drd_b_7_line0:5;
        RBus_UInt32  res4:3;
    };
}sfg_sfg_drd_ctrl_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg13_start:13;
        RBus_UInt32  seg13_start_res:3;
        RBus_UInt32  seg12_start:13;
        RBus_UInt32  seg12_start_res:3;
    };
}sfg_sfg_start_ctrl_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg15_start:13;
        RBus_UInt32  seg15_start_res:3;
        RBus_UInt32  seg14_start:13;
        RBus_UInt32  seg14_start_res:3;
    };
}sfg_sfg_start_ctrl_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_13_back_dummy_num_3:2;
        RBus_UInt32  seg_13_front_dummy_num_3:2;
        RBus_UInt32  seg_13_back_dummy_num_2:2;
        RBus_UInt32  seg_13_front_dummy_num_2:2;
        RBus_UInt32  seg_13_back_dummy_num_1:2;
        RBus_UInt32  seg_13_front_dummy_num_1:2;
        RBus_UInt32  seg_13_back_dummy_num_0:2;
        RBus_UInt32  seg_13_front_dummy_num_0:2;
        RBus_UInt32  seg_12_back_dummy_num_3:2;
        RBus_UInt32  seg_12_front_dummy_num_3:2;
        RBus_UInt32  seg_12_back_dummy_num_2:2;
        RBus_UInt32  seg_12_front_dummy_num_2:2;
        RBus_UInt32  seg_12_back_dummy_num_1:2;
        RBus_UInt32  seg_12_front_dummy_num_1:2;
        RBus_UInt32  seg_12_back_dummy_num_0:2;
        RBus_UInt32  seg_12_front_dummy_num_0:2;
    };
}sfg_sfg_dummy_ctrl_29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_15_back_dummy_num_3:2;
        RBus_UInt32  seg_15_front_dummy_num_3:2;
        RBus_UInt32  seg_15_back_dummy_num_2:2;
        RBus_UInt32  seg_15_front_dummy_num_2:2;
        RBus_UInt32  seg_15_back_dummy_num_1:2;
        RBus_UInt32  seg_15_front_dummy_num_1:2;
        RBus_UInt32  seg_15_back_dummy_num_0:2;
        RBus_UInt32  seg_15_front_dummy_num_0:2;
        RBus_UInt32  seg_14_back_dummy_num_3:2;
        RBus_UInt32  seg_14_front_dummy_num_3:2;
        RBus_UInt32  seg_14_back_dummy_num_2:2;
        RBus_UInt32  seg_14_front_dummy_num_2:2;
        RBus_UInt32  seg_14_back_dummy_num_1:2;
        RBus_UInt32  seg_14_front_dummy_num_1:2;
        RBus_UInt32  seg_14_back_dummy_num_0:2;
        RBus_UInt32  seg_14_front_dummy_num_0:2;
    };
}sfg_sfg_dummy_ctrl_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_ext_subpix_a_line_0:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  fw_ext_subpix_a_line_1:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  fw_ext_subpix_a_line_2:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  fw_ext_subpix_a_line_3:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  fw_ext_subpix_a_line_4:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  fw_ext_subpix_a_line_5:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  fw_ext_subpix_a_line_6:3;
        RBus_UInt32  res7:1;
        RBus_UInt32  fw_ext_subpix_a_line_7:3;
        RBus_UInt32  res8:1;
    };
}sfg_sfg1_fw_ext_subpixel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_ext_subpix_b_line_0:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  fw_ext_subpix_b_line_1:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  fw_ext_subpix_b_line_2:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  fw_ext_subpix_b_line_3:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  fw_ext_subpix_b_line_4:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  fw_ext_subpix_b_line_5:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  fw_ext_subpix_b_line_6:3;
        RBus_UInt32  res7:1;
        RBus_UInt32  fw_ext_subpix_b_line_7:3;
        RBus_UInt32  res8:1;
    };
}sfg_sfg1_fw_ext_subpixel2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dum_data0_line_0:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  dum_data1_line_0:10;
        RBus_UInt32  res2:6;
    };
}sfg_sfg1_dum_data_line_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dum_data0_line_1:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  dum_data1_line_1:10;
        RBus_UInt32  res2:6;
    };
}sfg_sfg1_dum_data_line_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dum_data0_line_2:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  dum_data1_line_2:10;
        RBus_UInt32  res2:6;
    };
}sfg_sfg1_dum_data_line_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dum_data0_line_3:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  dum_data1_line_3:10;
        RBus_UInt32  res2:6;
    };
}sfg_sfg1_dum_data_line_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dum_data0_line_4:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  dum_data1_line_4:10;
        RBus_UInt32  res2:6;
    };
}sfg_sfg1_dum_data_line_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dum_data0_line_5:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  dum_data1_line_5:10;
        RBus_UInt32  res2:6;
    };
}sfg_sfg1_dum_data_line_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dum_data0_line_6:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  dum_data1_line_6:10;
        RBus_UInt32  res2:6;
    };
}sfg_sfg1_dum_data_line_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dum_data0_line_7:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  dum_data1_line_7:10;
        RBus_UInt32  res2:6;
    };
}sfg_sfg1_dum_data_line_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  zz_shift_mode_7:1;
        RBus_UInt32  zz_shift_mode_6:1;
        RBus_UInt32  zz_shift_mode_5:1;
        RBus_UInt32  zz_shift_mode_4:1;
        RBus_UInt32  zz_shift_sp_7:4;
        RBus_UInt32  zz_shift_sp_6:4;
        RBus_UInt32  zz_shift_sp_5:4;
        RBus_UInt32  zz_shift_sp_4:4;
        RBus_UInt32  res2:8;
    };
}sfg_zz_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  insert_line4_b_last:4;
        RBus_UInt32  insert_line4_g_last:4;
        RBus_UInt32  insert_line4_r_last:4;
        RBus_UInt32  insert_line4_b_0:4;
        RBus_UInt32  insert_line4_g_0:4;
        RBus_UInt32  insert_line4_r_0:4;
    };
}sfg_sfg_insert_subpixel_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  insert_line5_b_last:4;
        RBus_UInt32  insert_line5_g_last:4;
        RBus_UInt32  insert_line5_r_last:4;
        RBus_UInt32  insert_line5_b_0:4;
        RBus_UInt32  insert_line5_g_0:4;
        RBus_UInt32  insert_line5_r_0:4;
    };
}sfg_sfg_insert_subpixel_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  insert_line6_b_last:4;
        RBus_UInt32  insert_line6_g_last:4;
        RBus_UInt32  insert_line6_r_last:4;
        RBus_UInt32  insert_line6_b_0:4;
        RBus_UInt32  insert_line6_g_0:4;
        RBus_UInt32  insert_line6_r_0:4;
    };
}sfg_sfg_insert_subpixel_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  insert_line7_b_last:4;
        RBus_UInt32  insert_line7_g_last:4;
        RBus_UInt32  insert_line7_r_last:4;
        RBus_UInt32  insert_line7_b_0:4;
        RBus_UInt32  insert_line7_g_0:4;
        RBus_UInt32  insert_line7_r_0:4;
    };
}sfg_sfg_insert_subpixel_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802dbbc_15_0:16;
        RBus_UInt32  res1:16;
    };
}sfg_sfg_last_ext_pixel_last_flip_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  last_seg_start_line5:13;
        RBus_UInt32  last_seg_start_res_line5:3;
        RBus_UInt32  last_seg_start_line4:13;
        RBus_UInt32  last_seg_start_res_line4:3;
    };
}sfg_sfg_last_seg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  last_seg_start_line7:13;
        RBus_UInt32  last_seg_start_res_line7:3;
        RBus_UInt32  last_seg_start_line6:13;
        RBus_UInt32  last_seg_start_res_line6:3;
    };
}sfg_sfg_last_seg_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_en:1;
        RBus_UInt32  sfg_pat_mode:2;
        RBus_UInt32  sfg_pat_rgb_sel:1;
        RBus_UInt32  sfg_pat_even:1;
        RBus_UInt32  sfg_pat_cnt_mode:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  sfg_pat_line_num:9;
        RBus_UInt32  res2:3;
        RBus_UInt32  sfg_pat_line_width:9;
        RBus_UInt32  res3:3;
    };
}sfg_sfg_patgen_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_b0:8;
        RBus_UInt32  sfg_pat_g0:8;
        RBus_UInt32  sfg_pat_r0:8;
        RBus_UInt32  sfg_pat_w0:8;
    };
}sfg_sfg_patgen_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_b1:8;
        RBus_UInt32  sfg_pat_g1:8;
        RBus_UInt32  sfg_pat_r1:8;
        RBus_UInt32  sfg_pat_w1:8;
    };
}sfg_sfg_patgen_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_b2:8;
        RBus_UInt32  sfg_pat_g2:8;
        RBus_UInt32  sfg_pat_r2:8;
        RBus_UInt32  sfg_pat_w2:8;
    };
}sfg_sfg_patgen_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_b3:8;
        RBus_UInt32  sfg_pat_g3:8;
        RBus_UInt32  sfg_pat_r3:8;
        RBus_UInt32  sfg_pat_w3:8;
    };
}sfg_sfg_patgen_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_b4:8;
        RBus_UInt32  sfg_pat_g4:8;
        RBus_UInt32  sfg_pat_r4:8;
        RBus_UInt32  sfg_pat_w4:8;
    };
}sfg_sfg_patgen_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_b5:8;
        RBus_UInt32  sfg_pat_g5:8;
        RBus_UInt32  sfg_pat_r5:8;
        RBus_UInt32  sfg_pat_w5:8;
    };
}sfg_sfg_patgen_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_b6:8;
        RBus_UInt32  sfg_pat_g6:8;
        RBus_UInt32  sfg_pat_r6:8;
        RBus_UInt32  sfg_pat_w6:8;
    };
}sfg_sfg_patgen_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat_b7:8;
        RBus_UInt32  sfg_pat_g7:8;
        RBus_UInt32  sfg_pat_r7:8;
        RBus_UInt32  sfg_pat_w7:8;
    };
}sfg_sfg_patgen_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat3_subpix_0:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  sfg_pat3_subpix_1:10;
        RBus_UInt32  res2:6;
    };
}sfg_sfg_patgen_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat3_line_0:24;
        RBus_UInt32  res1:8;
    };
}sfg_sfg_patgen_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat3_line_1:24;
        RBus_UInt32  res1:8;
    };
}sfg_sfg_patgen_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat3_line_2:24;
        RBus_UInt32  res1:8;
    };
}sfg_sfg_patgen_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_pat3_line_3:24;
        RBus_UInt32  res1:8;
    };
}sfg_sfg_patgen_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_tim_irq_en:3;
        RBus_UInt32  res1:29;
    };
}sfg_sfg_irq_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_tim_irq_flag:3;
        RBus_UInt32  res1:29;
    };
}sfg_sfg_irq_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pat_det_width:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  pat_det_h_ini_sta:13;
        RBus_UInt32  res2:3;
    };
}sfg_pat_det_window_h_ini_sta_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pat_det_height:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  pat_det_v_ini_sta:12;
        RBus_UInt32  res2:4;
    };
}sfg_pat_det_window_v_ini_sta_height_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pat_det_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  met_frame_thresh:8;
        RBus_UInt32  res2:16;
    };
}sfg_pattern_detect_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pxl_diff_sub_12:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  pxl_diff_12:10;
        RBus_UInt32  res2:6;
    };
}sfg_pat_det_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pxl_diff_sub_13:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  pxl_diff_13:10;
        RBus_UInt32  res2:6;
    };
}sfg_pat_det_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_num_thresh_12:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  vline_num_thresh_12:12;
        RBus_UInt32  res2:4;
    };
}sfg_pat_det_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_num_thresh_13:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  vline_num_thresh_13:12;
        RBus_UInt32  res2:4;
    };
}sfg_pat_det_ctrl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irq_flag:17;
        RBus_UInt32  res1:15;
    };
}sfg_pat_det_ctrl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irq_en:17;
        RBus_UInt32  res1:15;
    };
}sfg_pat_det_ctrl_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsign_num_thresh_12:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_num_thresh_13:10;
        RBus_UInt32  res2:6;
    };
}sfg_pat_det_ctrl_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsign_eq12_acc_0:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_eq12_acc_1:10;
        RBus_UInt32  res2:6;
    };
}sfg_pat_det_acc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsign_eq12_acc_2:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_eq12_acc_3:10;
        RBus_UInt32  res2:6;
    };
}sfg_pat_det_acc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsign_eq12_acc_4:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_eq12_acc_5:10;
        RBus_UInt32  res2:6;
    };
}sfg_pat_det_acc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsign_eq12_acc_6:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_eq12_acc_7:10;
        RBus_UInt32  res2:6;
    };
}sfg_pat_det_acc4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsign_eq13_acc_0:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_eq13_acc_1:10;
        RBus_UInt32  res2:6;
    };
}sfg_pat_det_acc5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsign_eq13_acc_2:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_eq13_acc_3:10;
        RBus_UInt32  res2:6;
    };
}sfg_pat_det_acc6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsign_eq13_acc_4:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_eq13_acc_5:10;
        RBus_UInt32  res2:6;
    };
}sfg_pat_det_acc7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsign_eq13_acc_6:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  vsign_eq13_acc_7:10;
        RBus_UInt32  res2:6;
    };
}sfg_pat_det_acc8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frame_eq12_acc_0:8;
        RBus_UInt32  frame_eq12_acc_1:8;
        RBus_UInt32  frame_eq12_acc_2:8;
        RBus_UInt32  frame_eq12_acc_3:8;
    };
}sfg_pat_det_acc9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frame_eq12_acc_4:8;
        RBus_UInt32  frame_eq12_acc_5:8;
        RBus_UInt32  frame_eq12_acc_6:8;
        RBus_UInt32  frame_eq12_acc_7:8;
    };
}sfg_pat_det_acc10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frame_eq13_acc_0:8;
        RBus_UInt32  frame_eq13_acc_1:8;
        RBus_UInt32  frame_eq13_acc_2:8;
        RBus_UInt32  frame_eq13_acc_3:8;
    };
}sfg_pat_det_acc11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frame_eq13_acc_4:8;
        RBus_UInt32  frame_eq13_acc_5:8;
        RBus_UInt32  frame_eq13_acc_6:8;
        RBus_UInt32  frame_eq13_acc_7:8;
    };
}sfg_pat_det_acc12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frame_other_acc:8;
        RBus_UInt32  res1:24;
    };
}sfg_pat_det_acc13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg_tst_out:32;
    };
}sfg_debug_pin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_port_num:4;
        RBus_UInt32  sfg2_seg_num:4;
        RBus_UInt32  sfg2_h_flip_en:1;
        RBus_UInt32  res1:16;
        RBus_UInt32  sfg2_dout_en:1;
        RBus_UInt32  sfg2_tg_auto_cfg:1;
        RBus_UInt32  sfg2_bypass_mode:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  sfg2_osd_en:1;
        RBus_UInt32  sfg2_in_data_inv:1;
    };
}sfg_sfg2_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_port_7:4;
        RBus_UInt32  sfg2_port_6:4;
        RBus_UInt32  sfg2_port_5:4;
        RBus_UInt32  sfg2_port_4:4;
        RBus_UInt32  sfg2_port_3:4;
        RBus_UInt32  sfg2_port_2:4;
        RBus_UInt32  sfg2_port_1:4;
        RBus_UInt32  sfg2_port_0:4;
    };
}sfg_sfg2_port_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_force_bg_port_0:1;
        RBus_UInt32  sfg2_force_bg_port_1:1;
        RBus_UInt32  sfg2_force_bg_port_2:1;
        RBus_UInt32  sfg2_force_bg_port_3:1;
        RBus_UInt32  sfg2_force_bg_port_4:1;
        RBus_UInt32  sfg2_force_bg_port_5:1;
        RBus_UInt32  sfg2_force_bg_port_6:1;
        RBus_UInt32  sfg2_force_bg_port_7:1;
        RBus_UInt32  res1:23;
        RBus_UInt32  sfg2_force_bg_en:1;
    };
}sfg_sfg2_force_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_bg_b:8;
        RBus_UInt32  sfg2_bg_g:8;
        RBus_UInt32  sfg2_bg_r:8;
        RBus_UInt32  sfg2_bg_a:8;
    };
}sfg_sfg2_force_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_crc_start:1;
        RBus_UInt32  sfg2_crc_conti:1;
        RBus_UInt32  sfg2_crc_r_auto_cmp_en:1;
        RBus_UInt32  sfg2_crc_l_auto_cmp_en:1;
        RBus_UInt32  sfg2_crc_mode:1;
        RBus_UInt32  res1:27;
    };
}sfg_sfg2_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_crc_result_0:32;
    };
}sfg_sfg2_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_crc_result_1:32;
    };
}sfg_sfg2_crc_r_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_l_des_crc:32;
    };
}sfg_sfg2_crc_l_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_r_des_crc:32;
    };
}sfg_sfg2_crc_r_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_r_crc_err_cnt:16;
        RBus_UInt32  sfg2_l_crc_err_cnt:16;
    };
}sfg_sfg2_crc_err_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_hsync_delay:16;
        RBus_UInt32  sfg2_hsync_width:8;
        RBus_UInt32  res1:8;
    };
}sfg_sfg2_time_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_vsync_start:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  sfg2_vsync_end:8;
        RBus_UInt32  res2:8;
    };
}sfg_sfg2_time_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_req_start:16;
        RBus_UInt32  sfg2_dh_den_sta:16;
    };
}sfg_sfg2_time_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_final_line_length:13;
        RBus_UInt32  res1:19;
    };
}sfg_sfg2_den_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_hsync_delay_auto:16;
        RBus_UInt32  sfg2_hsync_width_auto:8;
        RBus_UInt32  res1:8;
    };
}sfg_sfg2_time_ctrl_auto_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_vsync_start_auto:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  sfg2_vsync_end_auto:8;
        RBus_UInt32  res2:8;
    };
}sfg_sfg2_time_ctrl_auto_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sfg2_req_start_auto:16;
        RBus_UInt32  sfg2_dh_den_sta_auto:16;
    };
}sfg_sfg2_time_ctrl_auto_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_fifo_error_cnt:8;
        RBus_UInt32  pif_fifo_error:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  pif_fifo_error_ie:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  pif_fifo_irq:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  pif_fifo_dbg_sel:4;
        RBus_UInt32  pif_fifo_dbg_en:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  plt_lvds_mode:3;
        RBus_UInt32  pif_fifo_en:1;
    };
}sfg_pif_fifo_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_en:16;
        RBus_UInt32  res1:8;
        RBus_UInt32  hit_r_cnt_0_error:1;
        RBus_UInt32  hit_r_cnt_1_error:1;
        RBus_UInt32  hit_r_cnt_2_error:1;
        RBus_UInt32  hit_r_cnt_3_error:1;
        RBus_UInt32  hit_r_cnt_4_error:1;
        RBus_UInt32  hit_r_cnt_5_error:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pif_fifo_rst_type:1;
    };
}sfg_pif_fifo_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lvds_pair_sel00:4;
        RBus_UInt32  lvds_pair_sel01:4;
        RBus_UInt32  lvds_pair_sel02:4;
        RBus_UInt32  lvds_pair_sel03:4;
        RBus_UInt32  lvds_pair_sel04:4;
        RBus_UInt32  lvds_pair_sel05:4;
        RBus_UInt32  lvds_pair_sel06:4;
        RBus_UInt32  lvds_pair_sel07:4;
    };
}sfg_pif_fifo_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lvds_pair_sel08:4;
        RBus_UInt32  lvds_pair_sel09:4;
        RBus_UInt32  lvds_pair_sel10:4;
        RBus_UInt32  lvds_pair_sel11:4;
        RBus_UInt32  lvds_pair_sel12:4;
        RBus_UInt32  lvds_pair_sel13:4;
        RBus_UInt32  lvds_pair_sel14:4;
        RBus_UInt32  lvds_pair_sel15:4;
    };
}sfg_pif_fifo_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_length:24;
        RBus_UInt32  dummy1802dca4_27_24:4;
        RBus_UInt32  res1:3;
        RBus_UInt32  bist_en:1;
    };
}sfg_pif_fifo_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_lane_pass:16;
        RBus_UInt32  bist_pass:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  bist_done:1;
        RBus_UInt32  res2:11;
    };
}sfg_pif_fifo_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_fifo_tst_out:32;
    };
}sfg_pif_fifo_ctrl6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_pif_fifo_error_cnt:8;
        RBus_UInt32  osd_pif_fifo_error:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_pif_fifo_error_ie:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  osd_pif_fifo_irq:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  osd_pif_fifo_dbg_sel:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  osd_pif_fifo_dbg_en:1;
        RBus_UInt32  res5:6;
        RBus_UInt32  osd_pif_fifo_en:1;
    };
}sfg_pif_fifo_osd_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_lane_en:4;
        RBus_UInt32  res1:20;
        RBus_UInt32  osd_hit_r_cnt_0_error:1;
        RBus_UInt32  osd_hit_r_cnt_1_error:1;
        RBus_UInt32  osd_hit_r_cnt_2_error:1;
        RBus_UInt32  osd_hit_r_cnt_3_error:1;
        RBus_UInt32  osd_hit_r_cnt_4_error:1;
        RBus_UInt32  osd_hit_r_cnt_5_error:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  osd_pif_fifo_rst_type:1;
    };
}sfg_pif_fifo_osd_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_lvds_pair_sel0:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  osd_lvds_pair_sel1:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  osd_lvds_pair_sel2:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  osd_lvds_pair_sel3:2;
        RBus_UInt32  res4:18;
    };
}sfg_pif_fifo_osd_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_bist_length:24;
        RBus_UInt32  dummy1802dcbc_27_24:4;
        RBus_UInt32  res1:3;
        RBus_UInt32  osd_bist_en:1;
    };
}sfg_pif_fifo_osd_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_bist_lane_pass:4;
        RBus_UInt32  res1:12;
        RBus_UInt32  osd_bist_pass:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  osd_bist_done:1;
        RBus_UInt32  res3:11;
    };
}sfg_pif_fifo_osd_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  osd_pif_fifo_tst_out:32;
    };
}sfg_pif_fifo_osd_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  phy_lane_en:16;
        RBus_UInt32  res1:12;
        RBus_UInt32  video_osd_sel:3;
        RBus_UInt32  res2:1;
    };
}sfg_pif_fifo_mux_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fix_pattern:27;
        RBus_UInt32  res1:4;
        RBus_UInt32  fix_pattern_en:1;
    };
}sfg_pif_fifo_mux_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pn_swap:16;
        RBus_UInt32  res1:16;
    };
}sfg_pif_fifo_mux_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_debug_sel:4;
        RBus_UInt32  res1:24;
        RBus_UInt32  prbs_mode:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  prbs_tx_en:1;
    };
}sfg_pif_misc_RBUS;




#endif 


#endif 
