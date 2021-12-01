/**
* @file Merlin5-DesignSpec-P3_HDMI_RX_MAC
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_HDMI_P2_REG_H_
#define _RBUS_HDMI_P2_REG_H_

#include "rbus_types.h"



//  HDMI_P1 Register Address
#define  HDMI_P2_SOFT_0                                                         0x1803C000
#define  HDMI_P2_SOFT_0_reg_addr                                                 "0xB803C000"
#define  HDMI_P2_SOFT_0_reg                                                      0xB803C000
#define  HDMI_P2_SOFT_0_inst_addr                                                "0x0000"
#define  set_HDMI_P2_SOFT_0_reg(data)                                            (*((volatile unsigned int*)HDMI_P2_SOFT_0_reg)=data)
#define  get_HDMI_P2_SOFT_0_reg                                                  (*((volatile unsigned int*)HDMI_P2_SOFT_0_reg))
#define  HDMI_P2_SOFT_0_i2c_scdc_rst_n_shift                                     (0)
#define  HDMI_P2_SOFT_0_i2c_scdc_rst_n_mask                                      (0x00000001)
#define  HDMI_P2_SOFT_0_i2c_scdc_rst_n(data)                                     (0x00000001&(data))
#define  HDMI_P2_SOFT_0_get_i2c_scdc_rst_n(data)                                 (0x00000001&(data))

#define  HDMI_P2_SOFT_1                                                         0x1803C004
#define  HDMI_P2_SOFT_1_reg_addr                                                 "0xB803C004"
#define  HDMI_P2_SOFT_1_reg                                                      0xB803C004
#define  HDMI_P2_SOFT_1_inst_addr                                                "0x0001"
#define  set_HDMI_P2_SOFT_1_reg(data)                                            (*((volatile unsigned int*)HDMI_P2_SOFT_1_reg)=data)
#define  get_HDMI_P2_SOFT_1_reg                                                  (*((volatile unsigned int*)HDMI_P2_SOFT_1_reg))
#define  HDMI_P2_SOFT_1_i2c_scdc_clken_shift                                     (0)
#define  HDMI_P2_SOFT_1_i2c_scdc_clken_mask                                      (0x00000001)
#define  HDMI_P2_SOFT_1_i2c_scdc_clken(data)                                     (0x00000001&(data))
#define  HDMI_P2_SOFT_1_get_i2c_scdc_clken(data)                                 (0x00000001&(data))

#define  HDMI_P2_PP_TMDS_CRCC                                                   0x1803C008
#define  HDMI_P2_PP_TMDS_CRCC_reg_addr                                           "0xB803C008"
#define  HDMI_P2_PP_TMDS_CRCC_reg                                                0xB803C008
#define  HDMI_P2_PP_TMDS_CRCC_inst_addr                                          "0x0002"
#define  set_HDMI_P2_PP_TMDS_CRCC_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_PP_TMDS_CRCC_reg)=data)
#define  get_HDMI_P2_PP_TMDS_CRCC_reg                                            (*((volatile unsigned int*)HDMI_P2_PP_TMDS_CRCC_reg))
#define  HDMI_P2_PP_TMDS_CRCC_crc_r_en_shift                                     (7)
#define  HDMI_P2_PP_TMDS_CRCC_crc_g_en_shift                                     (6)
#define  HDMI_P2_PP_TMDS_CRCC_crc_b_en_shift                                     (5)
#define  HDMI_P2_PP_TMDS_CRCC_crc_done_shift                                     (4)
#define  HDMI_P2_PP_TMDS_CRCC_crc_nonstable_shift                                (3)
#define  HDMI_P2_PP_TMDS_CRCC_crcts_shift                                        (1)
#define  HDMI_P2_PP_TMDS_CRCC_crcc_shift                                         (0)
#define  HDMI_P2_PP_TMDS_CRCC_crc_r_en_mask                                      (0x00000080)
#define  HDMI_P2_PP_TMDS_CRCC_crc_g_en_mask                                      (0x00000040)
#define  HDMI_P2_PP_TMDS_CRCC_crc_b_en_mask                                      (0x00000020)
#define  HDMI_P2_PP_TMDS_CRCC_crc_done_mask                                      (0x00000010)
#define  HDMI_P2_PP_TMDS_CRCC_crc_nonstable_mask                                 (0x00000008)
#define  HDMI_P2_PP_TMDS_CRCC_crcts_mask                                         (0x00000006)
#define  HDMI_P2_PP_TMDS_CRCC_crcc_mask                                          (0x00000001)
#define  HDMI_P2_PP_TMDS_CRCC_crc_r_en(data)                                     (0x00000080&((data)<<7))
#define  HDMI_P2_PP_TMDS_CRCC_crc_g_en(data)                                     (0x00000040&((data)<<6))
#define  HDMI_P2_PP_TMDS_CRCC_crc_b_en(data)                                     (0x00000020&((data)<<5))
#define  HDMI_P2_PP_TMDS_CRCC_crc_done(data)                                     (0x00000010&((data)<<4))
#define  HDMI_P2_PP_TMDS_CRCC_crc_nonstable(data)                                (0x00000008&((data)<<3))
#define  HDMI_P2_PP_TMDS_CRCC_crcts(data)                                        (0x00000006&((data)<<1))
#define  HDMI_P2_PP_TMDS_CRCC_crcc(data)                                         (0x00000001&(data))
#define  HDMI_P2_PP_TMDS_CRCC_get_crc_r_en(data)                                 ((0x00000080&(data))>>7)
#define  HDMI_P2_PP_TMDS_CRCC_get_crc_g_en(data)                                 ((0x00000040&(data))>>6)
#define  HDMI_P2_PP_TMDS_CRCC_get_crc_b_en(data)                                 ((0x00000020&(data))>>5)
#define  HDMI_P2_PP_TMDS_CRCC_get_crc_done(data)                                 ((0x00000010&(data))>>4)
#define  HDMI_P2_PP_TMDS_CRCC_get_crc_nonstable(data)                            ((0x00000008&(data))>>3)
#define  HDMI_P2_PP_TMDS_CRCC_get_crcts(data)                                    ((0x00000006&(data))>>1)
#define  HDMI_P2_PP_TMDS_CRCC_get_crcc(data)                                     (0x00000001&(data))

#define  HDMI_P2_PP_TMDS_CRCO0                                                  0x1803C00C
#define  HDMI_P2_PP_TMDS_CRCO0_reg_addr                                          "0xB803C00C"
#define  HDMI_P2_PP_TMDS_CRCO0_reg                                               0xB803C00C
#define  HDMI_P2_PP_TMDS_CRCO0_inst_addr                                         "0x0003"
#define  set_HDMI_P2_PP_TMDS_CRCO0_reg(data)                                     (*((volatile unsigned int*)HDMI_P2_PP_TMDS_CRCO0_reg)=data)
#define  get_HDMI_P2_PP_TMDS_CRCO0_reg                                           (*((volatile unsigned int*)HDMI_P2_PP_TMDS_CRCO0_reg))
#define  HDMI_P2_PP_TMDS_CRCO0_crcob2_3_shift                                    (16)
#define  HDMI_P2_PP_TMDS_CRCO0_crcob2_2_shift                                    (8)
#define  HDMI_P2_PP_TMDS_CRCO0_crcob2_1_shift                                    (0)
#define  HDMI_P2_PP_TMDS_CRCO0_crcob2_3_mask                                     (0x00FF0000)
#define  HDMI_P2_PP_TMDS_CRCO0_crcob2_2_mask                                     (0x0000FF00)
#define  HDMI_P2_PP_TMDS_CRCO0_crcob2_1_mask                                     (0x000000FF)
#define  HDMI_P2_PP_TMDS_CRCO0_crcob2_3(data)                                    (0x00FF0000&((data)<<16))
#define  HDMI_P2_PP_TMDS_CRCO0_crcob2_2(data)                                    (0x0000FF00&((data)<<8))
#define  HDMI_P2_PP_TMDS_CRCO0_crcob2_1(data)                                    (0x000000FF&(data))
#define  HDMI_P2_PP_TMDS_CRCO0_get_crcob2_3(data)                                ((0x00FF0000&(data))>>16)
#define  HDMI_P2_PP_TMDS_CRCO0_get_crcob2_2(data)                                ((0x0000FF00&(data))>>8)
#define  HDMI_P2_PP_TMDS_CRCO0_get_crcob2_1(data)                                (0x000000FF&(data))

#define  HDMI_P2_PP_TMDS_CRCO1                                                  0x1803C010
#define  HDMI_P2_PP_TMDS_CRCO1_reg_addr                                          "0xB803C010"
#define  HDMI_P2_PP_TMDS_CRCO1_reg                                               0xB803C010
#define  HDMI_P2_PP_TMDS_CRCO1_inst_addr                                         "0x0004"
#define  set_HDMI_P2_PP_TMDS_CRCO1_reg(data)                                     (*((volatile unsigned int*)HDMI_P2_PP_TMDS_CRCO1_reg)=data)
#define  get_HDMI_P2_PP_TMDS_CRCO1_reg                                           (*((volatile unsigned int*)HDMI_P2_PP_TMDS_CRCO1_reg))
#define  HDMI_P2_PP_TMDS_CRCO1_crcob2_6_shift                                    (16)
#define  HDMI_P2_PP_TMDS_CRCO1_crcob2_5_shift                                    (8)
#define  HDMI_P2_PP_TMDS_CRCO1_crcob2_4_shift                                    (0)
#define  HDMI_P2_PP_TMDS_CRCO1_crcob2_6_mask                                     (0x00FF0000)
#define  HDMI_P2_PP_TMDS_CRCO1_crcob2_5_mask                                     (0x0000FF00)
#define  HDMI_P2_PP_TMDS_CRCO1_crcob2_4_mask                                     (0x000000FF)
#define  HDMI_P2_PP_TMDS_CRCO1_crcob2_6(data)                                    (0x00FF0000&((data)<<16))
#define  HDMI_P2_PP_TMDS_CRCO1_crcob2_5(data)                                    (0x0000FF00&((data)<<8))
#define  HDMI_P2_PP_TMDS_CRCO1_crcob2_4(data)                                    (0x000000FF&(data))
#define  HDMI_P2_PP_TMDS_CRCO1_get_crcob2_6(data)                                ((0x00FF0000&(data))>>16)
#define  HDMI_P2_PP_TMDS_CRCO1_get_crcob2_5(data)                                ((0x0000FF00&(data))>>8)
#define  HDMI_P2_PP_TMDS_CRCO1_get_crcob2_4(data)                                (0x000000FF&(data))

#define  HDMI_P2_TMDS_CTRL                                                      0x1803C014
#define  HDMI_P2_TMDS_CTRL_reg_addr                                              "0xB803C014"
#define  HDMI_P2_TMDS_CTRL_reg                                                   0xB803C014
#define  HDMI_P2_TMDS_CTRL_inst_addr                                             "0x0005"
#define  set_HDMI_P2_TMDS_CTRL_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_TMDS_CTRL_reg)=data)
#define  get_HDMI_P2_TMDS_CTRL_reg                                               (*((volatile unsigned int*)HDMI_P2_TMDS_CTRL_reg))
#define  HDMI_P2_TMDS_CTRL_end_phase_shift                                       (8)
#define  HDMI_P2_TMDS_CTRL_bcd_shift                                             (7)
#define  HDMI_P2_TMDS_CTRL_gcd_shift                                             (6)
#define  HDMI_P2_TMDS_CTRL_rcd_shift                                             (5)
#define  HDMI_P2_TMDS_CTRL_ho_shift                                              (4)
#define  HDMI_P2_TMDS_CTRL_yo_shift                                              (3)
#define  HDMI_P2_TMDS_CTRL_dummy_2_0_shift                                       (0)
#define  HDMI_P2_TMDS_CTRL_end_phase_mask                                        (0x00000300)
#define  HDMI_P2_TMDS_CTRL_bcd_mask                                              (0x00000080)
#define  HDMI_P2_TMDS_CTRL_gcd_mask                                              (0x00000040)
#define  HDMI_P2_TMDS_CTRL_rcd_mask                                              (0x00000020)
#define  HDMI_P2_TMDS_CTRL_ho_mask                                               (0x00000010)
#define  HDMI_P2_TMDS_CTRL_yo_mask                                               (0x00000008)
#define  HDMI_P2_TMDS_CTRL_dummy_2_0_mask                                        (0x00000007)
#define  HDMI_P2_TMDS_CTRL_end_phase(data)                                       (0x00000300&((data)<<8))
#define  HDMI_P2_TMDS_CTRL_bcd(data)                                             (0x00000080&((data)<<7))
#define  HDMI_P2_TMDS_CTRL_gcd(data)                                             (0x00000040&((data)<<6))
#define  HDMI_P2_TMDS_CTRL_rcd(data)                                             (0x00000020&((data)<<5))
#define  HDMI_P2_TMDS_CTRL_ho(data)                                              (0x00000010&((data)<<4))
#define  HDMI_P2_TMDS_CTRL_yo(data)                                              (0x00000008&((data)<<3))
#define  HDMI_P2_TMDS_CTRL_dummy_2_0(data)                                       (0x00000007&(data))
#define  HDMI_P2_TMDS_CTRL_get_end_phase(data)                                   ((0x00000300&(data))>>8)
#define  HDMI_P2_TMDS_CTRL_get_bcd(data)                                         ((0x00000080&(data))>>7)
#define  HDMI_P2_TMDS_CTRL_get_gcd(data)                                         ((0x00000040&(data))>>6)
#define  HDMI_P2_TMDS_CTRL_get_rcd(data)                                         ((0x00000020&(data))>>5)
#define  HDMI_P2_TMDS_CTRL_get_ho(data)                                          ((0x00000010&(data))>>4)
#define  HDMI_P2_TMDS_CTRL_get_yo(data)                                          ((0x00000008&(data))>>3)
#define  HDMI_P2_TMDS_CTRL_get_dummy_2_0(data)                                   (0x00000007&(data))

#define  HDMI_P2_TMDS_OUTCTL                                                    0x1803C018
#define  HDMI_P2_TMDS_OUTCTL_reg_addr                                            "0xB803C018"
#define  HDMI_P2_TMDS_OUTCTL_reg                                                 0xB803C018
#define  HDMI_P2_TMDS_OUTCTL_inst_addr                                           "0x0006"
#define  set_HDMI_P2_TMDS_OUTCTL_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_TMDS_OUTCTL_reg)=data)
#define  get_HDMI_P2_TMDS_OUTCTL_reg                                             (*((volatile unsigned int*)HDMI_P2_TMDS_OUTCTL_reg))
#define  HDMI_P2_TMDS_OUTCTL_trcoe_r_shift                                       (13)
#define  HDMI_P2_TMDS_OUTCTL_tgcoe_r_shift                                       (12)
#define  HDMI_P2_TMDS_OUTCTL_tbcoe_r_shift                                       (11)
#define  HDMI_P2_TMDS_OUTCTL_ocke_r_shift                                        (10)
#define  HDMI_P2_TMDS_OUTCTL_aoe_shift                                           (9)
#define  HDMI_P2_TMDS_OUTCTL_trcoe_shift                                         (8)
#define  HDMI_P2_TMDS_OUTCTL_tgcoe_shift                                         (7)
#define  HDMI_P2_TMDS_OUTCTL_tbcoe_shift                                         (6)
#define  HDMI_P2_TMDS_OUTCTL_ocke_shift                                          (5)
#define  HDMI_P2_TMDS_OUTCTL_ockie_shift                                         (4)
#define  HDMI_P2_TMDS_OUTCTL_focke_shift                                         (3)
#define  HDMI_P2_TMDS_OUTCTL_cbus_dbg_cke_shift                                  (2)
#define  HDMI_P2_TMDS_OUTCTL_dummy_1_0_shift                                     (0)
#define  HDMI_P2_TMDS_OUTCTL_trcoe_r_mask                                        (0x00002000)
#define  HDMI_P2_TMDS_OUTCTL_tgcoe_r_mask                                        (0x00001000)
#define  HDMI_P2_TMDS_OUTCTL_tbcoe_r_mask                                        (0x00000800)
#define  HDMI_P2_TMDS_OUTCTL_ocke_r_mask                                         (0x00000400)
#define  HDMI_P2_TMDS_OUTCTL_aoe_mask                                            (0x00000200)
#define  HDMI_P2_TMDS_OUTCTL_trcoe_mask                                          (0x00000100)
#define  HDMI_P2_TMDS_OUTCTL_tgcoe_mask                                          (0x00000080)
#define  HDMI_P2_TMDS_OUTCTL_tbcoe_mask                                          (0x00000040)
#define  HDMI_P2_TMDS_OUTCTL_ocke_mask                                           (0x00000020)
#define  HDMI_P2_TMDS_OUTCTL_ockie_mask                                          (0x00000010)
#define  HDMI_P2_TMDS_OUTCTL_focke_mask                                          (0x00000008)
#define  HDMI_P2_TMDS_OUTCTL_cbus_dbg_cke_mask                                   (0x00000004)
#define  HDMI_P2_TMDS_OUTCTL_dummy_1_0_mask                                      (0x00000003)
#define  HDMI_P2_TMDS_OUTCTL_trcoe_r(data)                                       (0x00002000&((data)<<13))
#define  HDMI_P2_TMDS_OUTCTL_tgcoe_r(data)                                       (0x00001000&((data)<<12))
#define  HDMI_P2_TMDS_OUTCTL_tbcoe_r(data)                                       (0x00000800&((data)<<11))
#define  HDMI_P2_TMDS_OUTCTL_ocke_r(data)                                        (0x00000400&((data)<<10))
#define  HDMI_P2_TMDS_OUTCTL_aoe(data)                                           (0x00000200&((data)<<9))
#define  HDMI_P2_TMDS_OUTCTL_trcoe(data)                                         (0x00000100&((data)<<8))
#define  HDMI_P2_TMDS_OUTCTL_tgcoe(data)                                         (0x00000080&((data)<<7))
#define  HDMI_P2_TMDS_OUTCTL_tbcoe(data)                                         (0x00000040&((data)<<6))
#define  HDMI_P2_TMDS_OUTCTL_ocke(data)                                          (0x00000020&((data)<<5))
#define  HDMI_P2_TMDS_OUTCTL_ockie(data)                                         (0x00000010&((data)<<4))
#define  HDMI_P2_TMDS_OUTCTL_focke(data)                                         (0x00000008&((data)<<3))
#define  HDMI_P2_TMDS_OUTCTL_cbus_dbg_cke(data)                                  (0x00000004&((data)<<2))
#define  HDMI_P2_TMDS_OUTCTL_dummy_1_0(data)                                     (0x00000003&(data))
#define  HDMI_P2_TMDS_OUTCTL_get_trcoe_r(data)                                   ((0x00002000&(data))>>13)
#define  HDMI_P2_TMDS_OUTCTL_get_tgcoe_r(data)                                   ((0x00001000&(data))>>12)
#define  HDMI_P2_TMDS_OUTCTL_get_tbcoe_r(data)                                   ((0x00000800&(data))>>11)
#define  HDMI_P2_TMDS_OUTCTL_get_ocke_r(data)                                    ((0x00000400&(data))>>10)
#define  HDMI_P2_TMDS_OUTCTL_get_aoe(data)                                       ((0x00000200&(data))>>9)
#define  HDMI_P2_TMDS_OUTCTL_get_trcoe(data)                                     ((0x00000100&(data))>>8)
#define  HDMI_P2_TMDS_OUTCTL_get_tgcoe(data)                                     ((0x00000080&(data))>>7)
#define  HDMI_P2_TMDS_OUTCTL_get_tbcoe(data)                                     ((0x00000040&(data))>>6)
#define  HDMI_P2_TMDS_OUTCTL_get_ocke(data)                                      ((0x00000020&(data))>>5)
#define  HDMI_P2_TMDS_OUTCTL_get_ockie(data)                                     ((0x00000010&(data))>>4)
#define  HDMI_P2_TMDS_OUTCTL_get_focke(data)                                     ((0x00000008&(data))>>3)
#define  HDMI_P2_TMDS_OUTCTL_get_cbus_dbg_cke(data)                              ((0x00000004&(data))>>2)
#define  HDMI_P2_TMDS_OUTCTL_get_dummy_1_0(data)                                 (0x00000003&(data))

#define  HDMI_P2_TMDS_PWDCTL                                                    0x1803C01C
#define  HDMI_P2_TMDS_PWDCTL_reg_addr                                            "0xB803C01C"
#define  HDMI_P2_TMDS_PWDCTL_reg                                                 0xB803C01C
#define  HDMI_P2_TMDS_PWDCTL_inst_addr                                           "0x0007"
#define  set_HDMI_P2_TMDS_PWDCTL_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_TMDS_PWDCTL_reg)=data)
#define  get_HDMI_P2_TMDS_PWDCTL_reg                                             (*((volatile unsigned int*)HDMI_P2_TMDS_PWDCTL_reg))
#define  HDMI_P2_TMDS_PWDCTL_ecc_r_shift                                         (31)
#define  HDMI_P2_TMDS_PWDCTL_erip_r_shift                                        (30)
#define  HDMI_P2_TMDS_PWDCTL_egip_r_shift                                        (29)
#define  HDMI_P2_TMDS_PWDCTL_ebip_r_shift                                        (28)
#define  HDMI_P2_TMDS_PWDCTL_dummy_27_10_shift                                   (10)
#define  HDMI_P2_TMDS_PWDCTL_video_preamble_off_en_shift                         (9)
#define  HDMI_P2_TMDS_PWDCTL_hs_width_sel_shift                                  (8)
#define  HDMI_P2_TMDS_PWDCTL_deo_shift                                           (7)
#define  HDMI_P2_TMDS_PWDCTL_brcw_shift                                          (6)
#define  HDMI_P2_TMDS_PWDCTL_pnsw_shift                                          (5)
#define  HDMI_P2_TMDS_PWDCTL_iccaf_shift                                         (4)
#define  HDMI_P2_TMDS_PWDCTL_ecc_shift                                           (3)
#define  HDMI_P2_TMDS_PWDCTL_erip_shift                                          (2)
#define  HDMI_P2_TMDS_PWDCTL_egip_shift                                          (1)
#define  HDMI_P2_TMDS_PWDCTL_ebip_shift                                          (0)
#define  HDMI_P2_TMDS_PWDCTL_ecc_r_mask                                          (0x80000000)
#define  HDMI_P2_TMDS_PWDCTL_erip_r_mask                                         (0x40000000)
#define  HDMI_P2_TMDS_PWDCTL_egip_r_mask                                         (0x20000000)
#define  HDMI_P2_TMDS_PWDCTL_ebip_r_mask                                         (0x10000000)
#define  HDMI_P2_TMDS_PWDCTL_dummy_27_10_mask                                    (0x0FFFFC00)
#define  HDMI_P2_TMDS_PWDCTL_video_preamble_off_en_mask                          (0x00000200)
#define  HDMI_P2_TMDS_PWDCTL_hs_width_sel_mask                                   (0x00000100)
#define  HDMI_P2_TMDS_PWDCTL_deo_mask                                            (0x00000080)
#define  HDMI_P2_TMDS_PWDCTL_brcw_mask                                           (0x00000040)
#define  HDMI_P2_TMDS_PWDCTL_pnsw_mask                                           (0x00000020)
#define  HDMI_P2_TMDS_PWDCTL_iccaf_mask                                          (0x00000010)
#define  HDMI_P2_TMDS_PWDCTL_ecc_mask                                            (0x00000008)
#define  HDMI_P2_TMDS_PWDCTL_erip_mask                                           (0x00000004)
#define  HDMI_P2_TMDS_PWDCTL_egip_mask                                           (0x00000002)
#define  HDMI_P2_TMDS_PWDCTL_ebip_mask                                           (0x00000001)
#define  HDMI_P2_TMDS_PWDCTL_ecc_r(data)                                         (0x80000000&((data)<<31))
#define  HDMI_P2_TMDS_PWDCTL_erip_r(data)                                        (0x40000000&((data)<<30))
#define  HDMI_P2_TMDS_PWDCTL_egip_r(data)                                        (0x20000000&((data)<<29))
#define  HDMI_P2_TMDS_PWDCTL_ebip_r(data)                                        (0x10000000&((data)<<28))
#define  HDMI_P2_TMDS_PWDCTL_dummy_27_10(data)                                   (0x0FFFFC00&((data)<<10))
#define  HDMI_P2_TMDS_PWDCTL_video_preamble_off_en(data)                         (0x00000200&((data)<<9))
#define  HDMI_P2_TMDS_PWDCTL_hs_width_sel(data)                                  (0x00000100&((data)<<8))
#define  HDMI_P2_TMDS_PWDCTL_deo(data)                                           (0x00000080&((data)<<7))
#define  HDMI_P2_TMDS_PWDCTL_brcw(data)                                          (0x00000040&((data)<<6))
#define  HDMI_P2_TMDS_PWDCTL_pnsw(data)                                          (0x00000020&((data)<<5))
#define  HDMI_P2_TMDS_PWDCTL_iccaf(data)                                         (0x00000010&((data)<<4))
#define  HDMI_P2_TMDS_PWDCTL_ecc(data)                                           (0x00000008&((data)<<3))
#define  HDMI_P2_TMDS_PWDCTL_erip(data)                                          (0x00000004&((data)<<2))
#define  HDMI_P2_TMDS_PWDCTL_egip(data)                                          (0x00000002&((data)<<1))
#define  HDMI_P2_TMDS_PWDCTL_ebip(data)                                          (0x00000001&(data))
#define  HDMI_P2_TMDS_PWDCTL_get_ecc_r(data)                                     ((0x80000000&(data))>>31)
#define  HDMI_P2_TMDS_PWDCTL_get_erip_r(data)                                    ((0x40000000&(data))>>30)
#define  HDMI_P2_TMDS_PWDCTL_get_egip_r(data)                                    ((0x20000000&(data))>>29)
#define  HDMI_P2_TMDS_PWDCTL_get_ebip_r(data)                                    ((0x10000000&(data))>>28)
#define  HDMI_P2_TMDS_PWDCTL_get_dummy_27_10(data)                               ((0x0FFFFC00&(data))>>10)
#define  HDMI_P2_TMDS_PWDCTL_get_video_preamble_off_en(data)                     ((0x00000200&(data))>>9)
#define  HDMI_P2_TMDS_PWDCTL_get_hs_width_sel(data)                              ((0x00000100&(data))>>8)
#define  HDMI_P2_TMDS_PWDCTL_get_deo(data)                                       ((0x00000080&(data))>>7)
#define  HDMI_P2_TMDS_PWDCTL_get_brcw(data)                                      ((0x00000040&(data))>>6)
#define  HDMI_P2_TMDS_PWDCTL_get_pnsw(data)                                      ((0x00000020&(data))>>5)
#define  HDMI_P2_TMDS_PWDCTL_get_iccaf(data)                                     ((0x00000010&(data))>>4)
#define  HDMI_P2_TMDS_PWDCTL_get_ecc(data)                                       ((0x00000008&(data))>>3)
#define  HDMI_P2_TMDS_PWDCTL_get_erip(data)                                      ((0x00000004&(data))>>2)
#define  HDMI_P2_TMDS_PWDCTL_get_egip(data)                                      ((0x00000002&(data))>>1)
#define  HDMI_P2_TMDS_PWDCTL_get_ebip(data)                                      (0x00000001&(data))

#define  HDMI_P2_TMDS_Z0CC                                                      0x1803C020
#define  HDMI_P2_TMDS_Z0CC_reg_addr                                              "0xB803C020"
#define  HDMI_P2_TMDS_Z0CC_reg                                                   0xB803C020
#define  HDMI_P2_TMDS_Z0CC_inst_addr                                             "0x0008"
#define  set_HDMI_P2_TMDS_Z0CC_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_TMDS_Z0CC_reg)=data)
#define  get_HDMI_P2_TMDS_Z0CC_reg                                               (*((volatile unsigned int*)HDMI_P2_TMDS_Z0CC_reg))
#define  HDMI_P2_TMDS_Z0CC_hde_shift                                             (0)
#define  HDMI_P2_TMDS_Z0CC_hde_mask                                              (0x00000001)
#define  HDMI_P2_TMDS_Z0CC_hde(data)                                             (0x00000001&(data))
#define  HDMI_P2_TMDS_Z0CC_get_hde(data)                                         (0x00000001&(data))

#define  HDMI_P2_TMDS_CPS                                                       0x1803C024
#define  HDMI_P2_TMDS_CPS_reg_addr                                               "0xB803C024"
#define  HDMI_P2_TMDS_CPS_reg                                                    0xB803C024
#define  HDMI_P2_TMDS_CPS_inst_addr                                              "0x0009"
#define  set_HDMI_P2_TMDS_CPS_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_TMDS_CPS_reg)=data)
#define  get_HDMI_P2_TMDS_CPS_reg                                                (*((volatile unsigned int*)HDMI_P2_TMDS_CPS_reg))
#define  HDMI_P2_TMDS_CPS_pk_gb_num_shift                                        (18)
#define  HDMI_P2_TMDS_CPS_vd_gb_num_shift                                        (16)
#define  HDMI_P2_TMDS_CPS_pk_pre_num_shift                                       (13)
#define  HDMI_P2_TMDS_CPS_vd_pre_num_shift                                       (10)
#define  HDMI_P2_TMDS_CPS_pll_div2_en_shift                                      (9)
#define  HDMI_P2_TMDS_CPS_no_clk_in_shift                                        (8)
#define  HDMI_P2_TMDS_CPS_de_inv_disable_shift                                   (5)
#define  HDMI_P2_TMDS_CPS_clr_infoframe_dvi_shift                                (3)
#define  HDMI_P2_TMDS_CPS_auto_dvi2hdmi_shift                                    (2)
#define  HDMI_P2_TMDS_CPS_dummy_1_0_shift                                        (0)
#define  HDMI_P2_TMDS_CPS_pk_gb_num_mask                                         (0x000C0000)
#define  HDMI_P2_TMDS_CPS_vd_gb_num_mask                                         (0x00030000)
#define  HDMI_P2_TMDS_CPS_pk_pre_num_mask                                        (0x0000E000)
#define  HDMI_P2_TMDS_CPS_vd_pre_num_mask                                        (0x00001C00)
#define  HDMI_P2_TMDS_CPS_pll_div2_en_mask                                       (0x00000200)
#define  HDMI_P2_TMDS_CPS_no_clk_in_mask                                         (0x00000100)
#define  HDMI_P2_TMDS_CPS_de_inv_disable_mask                                    (0x00000020)
#define  HDMI_P2_TMDS_CPS_clr_infoframe_dvi_mask                                 (0x00000008)
#define  HDMI_P2_TMDS_CPS_auto_dvi2hdmi_mask                                     (0x00000004)
#define  HDMI_P2_TMDS_CPS_dummy_1_0_mask                                         (0x00000003)
#define  HDMI_P2_TMDS_CPS_pk_gb_num(data)                                        (0x000C0000&((data)<<18))
#define  HDMI_P2_TMDS_CPS_vd_gb_num(data)                                        (0x00030000&((data)<<16))
#define  HDMI_P2_TMDS_CPS_pk_pre_num(data)                                       (0x0000E000&((data)<<13))
#define  HDMI_P2_TMDS_CPS_vd_pre_num(data)                                       (0x00001C00&((data)<<10))
#define  HDMI_P2_TMDS_CPS_pll_div2_en(data)                                      (0x00000200&((data)<<9))
#define  HDMI_P2_TMDS_CPS_no_clk_in(data)                                        (0x00000100&((data)<<8))
#define  HDMI_P2_TMDS_CPS_de_inv_disable(data)                                   (0x00000020&((data)<<5))
#define  HDMI_P2_TMDS_CPS_clr_infoframe_dvi(data)                                (0x00000008&((data)<<3))
#define  HDMI_P2_TMDS_CPS_auto_dvi2hdmi(data)                                    (0x00000004&((data)<<2))
#define  HDMI_P2_TMDS_CPS_dummy_1_0(data)                                        (0x00000003&(data))
#define  HDMI_P2_TMDS_CPS_get_pk_gb_num(data)                                    ((0x000C0000&(data))>>18)
#define  HDMI_P2_TMDS_CPS_get_vd_gb_num(data)                                    ((0x00030000&(data))>>16)
#define  HDMI_P2_TMDS_CPS_get_pk_pre_num(data)                                   ((0x0000E000&(data))>>13)
#define  HDMI_P2_TMDS_CPS_get_vd_pre_num(data)                                   ((0x00001C00&(data))>>10)
#define  HDMI_P2_TMDS_CPS_get_pll_div2_en(data)                                  ((0x00000200&(data))>>9)
#define  HDMI_P2_TMDS_CPS_get_no_clk_in(data)                                    ((0x00000100&(data))>>8)
#define  HDMI_P2_TMDS_CPS_get_de_inv_disable(data)                               ((0x00000020&(data))>>5)
#define  HDMI_P2_TMDS_CPS_get_clr_infoframe_dvi(data)                            ((0x00000008&(data))>>3)
#define  HDMI_P2_TMDS_CPS_get_auto_dvi2hdmi(data)                                ((0x00000004&(data))>>2)
#define  HDMI_P2_TMDS_CPS_get_dummy_1_0(data)                                    (0x00000003&(data))

#define  HDMI_P2_TMDS_UDC                                                       0x1803C028
#define  HDMI_P2_TMDS_UDC_reg_addr                                               "0xB803C028"
#define  HDMI_P2_TMDS_UDC_reg                                                    0xB803C028
#define  HDMI_P2_TMDS_UDC_inst_addr                                              "0x000A"
#define  set_HDMI_P2_TMDS_UDC_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_TMDS_UDC_reg)=data)
#define  get_HDMI_P2_TMDS_UDC_reg                                                (*((volatile unsigned int*)HDMI_P2_TMDS_UDC_reg))
#define  HDMI_P2_TMDS_UDC_debug_sel_shift                                        (4)
#define  HDMI_P2_TMDS_UDC_dummy_3_shift                                          (3)
#define  HDMI_P2_TMDS_UDC_debug_sel_mask                                         (0x000003F0)
#define  HDMI_P2_TMDS_UDC_dummy_3_mask                                           (0x00000008)
#define  HDMI_P2_TMDS_UDC_debug_sel(data)                                        (0x000003F0&((data)<<4))
#define  HDMI_P2_TMDS_UDC_dummy_3(data)                                          (0x00000008&((data)<<3))
#define  HDMI_P2_TMDS_UDC_get_debug_sel(data)                                    ((0x000003F0&(data))>>4)
#define  HDMI_P2_TMDS_UDC_get_dummy_3(data)                                      ((0x00000008&(data))>>3)

#define  HDMI_P2_TMDS_ERRC                                                      0x1803C02C
#define  HDMI_P2_TMDS_ERRC_reg_addr                                              "0xB803C02C"
#define  HDMI_P2_TMDS_ERRC_reg                                                   0xB803C02C
#define  HDMI_P2_TMDS_ERRC_inst_addr                                             "0x000B"
#define  set_HDMI_P2_TMDS_ERRC_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_TMDS_ERRC_reg)=data)
#define  get_HDMI_P2_TMDS_ERRC_reg                                               (*((volatile unsigned int*)HDMI_P2_TMDS_ERRC_reg))
#define  HDMI_P2_TMDS_ERRC_dc_shift                                              (4)
#define  HDMI_P2_TMDS_ERRC_nl_shift                                              (0)
#define  HDMI_P2_TMDS_ERRC_dc_mask                                               (0x000000F0)
#define  HDMI_P2_TMDS_ERRC_nl_mask                                               (0x00000007)
#define  HDMI_P2_TMDS_ERRC_dc(data)                                              (0x000000F0&((data)<<4))
#define  HDMI_P2_TMDS_ERRC_nl(data)                                              (0x00000007&(data))
#define  HDMI_P2_TMDS_ERRC_get_dc(data)                                          ((0x000000F0&(data))>>4)
#define  HDMI_P2_TMDS_ERRC_get_nl(data)                                          (0x00000007&(data))

#define  HDMI_P2_TMDS_OUT_CTRL                                                  0x1803C030
#define  HDMI_P2_TMDS_OUT_CTRL_reg_addr                                          "0xB803C030"
#define  HDMI_P2_TMDS_OUT_CTRL_reg                                               0xB803C030
#define  HDMI_P2_TMDS_OUT_CTRL_inst_addr                                         "0x000C"
#define  set_HDMI_P2_TMDS_OUT_CTRL_reg(data)                                     (*((volatile unsigned int*)HDMI_P2_TMDS_OUT_CTRL_reg)=data)
#define  get_HDMI_P2_TMDS_OUT_CTRL_reg                                           (*((volatile unsigned int*)HDMI_P2_TMDS_OUT_CTRL_reg))
#define  HDMI_P2_TMDS_OUT_CTRL_tmds_bypass_shift                                 (7)
#define  HDMI_P2_TMDS_OUT_CTRL_dummy_6_0_shift                                   (0)
#define  HDMI_P2_TMDS_OUT_CTRL_tmds_bypass_mask                                  (0x00000080)
#define  HDMI_P2_TMDS_OUT_CTRL_dummy_6_0_mask                                    (0x0000007F)
#define  HDMI_P2_TMDS_OUT_CTRL_tmds_bypass(data)                                 (0x00000080&((data)<<7))
#define  HDMI_P2_TMDS_OUT_CTRL_dummy_6_0(data)                                   (0x0000007F&(data))
#define  HDMI_P2_TMDS_OUT_CTRL_get_tmds_bypass(data)                             ((0x00000080&(data))>>7)
#define  HDMI_P2_TMDS_OUT_CTRL_get_dummy_6_0(data)                               (0x0000007F&(data))

#define  HDMI_P2_TMDS_ROUT                                                      0x1803C034
#define  HDMI_P2_TMDS_ROUT_reg_addr                                              "0xB803C034"
#define  HDMI_P2_TMDS_ROUT_reg                                                   0xB803C034
#define  HDMI_P2_TMDS_ROUT_inst_addr                                             "0x000D"
#define  set_HDMI_P2_TMDS_ROUT_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_TMDS_ROUT_reg)=data)
#define  get_HDMI_P2_TMDS_ROUT_reg                                               (*((volatile unsigned int*)HDMI_P2_TMDS_ROUT_reg))
#define  HDMI_P2_TMDS_ROUT_tmds_rout_h_shift                                     (8)
#define  HDMI_P2_TMDS_ROUT_tmds_rout_l_shift                                     (0)
#define  HDMI_P2_TMDS_ROUT_tmds_rout_h_mask                                      (0x0000FF00)
#define  HDMI_P2_TMDS_ROUT_tmds_rout_l_mask                                      (0x000000FF)
#define  HDMI_P2_TMDS_ROUT_tmds_rout_h(data)                                     (0x0000FF00&((data)<<8))
#define  HDMI_P2_TMDS_ROUT_tmds_rout_l(data)                                     (0x000000FF&(data))
#define  HDMI_P2_TMDS_ROUT_get_tmds_rout_h(data)                                 ((0x0000FF00&(data))>>8)
#define  HDMI_P2_TMDS_ROUT_get_tmds_rout_l(data)                                 (0x000000FF&(data))

#define  HDMI_P2_TMDS_GOUT                                                      0x1803C038
#define  HDMI_P2_TMDS_GOUT_reg_addr                                              "0xB803C038"
#define  HDMI_P2_TMDS_GOUT_reg                                                   0xB803C038
#define  HDMI_P2_TMDS_GOUT_inst_addr                                             "0x000E"
#define  set_HDMI_P2_TMDS_GOUT_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_TMDS_GOUT_reg)=data)
#define  get_HDMI_P2_TMDS_GOUT_reg                                               (*((volatile unsigned int*)HDMI_P2_TMDS_GOUT_reg))
#define  HDMI_P2_TMDS_GOUT_tmds_gout_h_shift                                     (8)
#define  HDMI_P2_TMDS_GOUT_tmds_gout_l_shift                                     (0)
#define  HDMI_P2_TMDS_GOUT_tmds_gout_h_mask                                      (0x0000FF00)
#define  HDMI_P2_TMDS_GOUT_tmds_gout_l_mask                                      (0x000000FF)
#define  HDMI_P2_TMDS_GOUT_tmds_gout_h(data)                                     (0x0000FF00&((data)<<8))
#define  HDMI_P2_TMDS_GOUT_tmds_gout_l(data)                                     (0x000000FF&(data))
#define  HDMI_P2_TMDS_GOUT_get_tmds_gout_h(data)                                 ((0x0000FF00&(data))>>8)
#define  HDMI_P2_TMDS_GOUT_get_tmds_gout_l(data)                                 (0x000000FF&(data))

#define  HDMI_P2_TMDS_BOUT                                                      0x1803C03C
#define  HDMI_P2_TMDS_BOUT_reg_addr                                              "0xB803C03C"
#define  HDMI_P2_TMDS_BOUT_reg                                                   0xB803C03C
#define  HDMI_P2_TMDS_BOUT_inst_addr                                             "0x000F"
#define  set_HDMI_P2_TMDS_BOUT_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_TMDS_BOUT_reg)=data)
#define  get_HDMI_P2_TMDS_BOUT_reg                                               (*((volatile unsigned int*)HDMI_P2_TMDS_BOUT_reg))
#define  HDMI_P2_TMDS_BOUT_tmds_bout_h_shift                                     (8)
#define  HDMI_P2_TMDS_BOUT_tmds_bout_l_shift                                     (0)
#define  HDMI_P2_TMDS_BOUT_tmds_bout_h_mask                                      (0x0000FF00)
#define  HDMI_P2_TMDS_BOUT_tmds_bout_l_mask                                      (0x000000FF)
#define  HDMI_P2_TMDS_BOUT_tmds_bout_h(data)                                     (0x0000FF00&((data)<<8))
#define  HDMI_P2_TMDS_BOUT_tmds_bout_l(data)                                     (0x000000FF&(data))
#define  HDMI_P2_TMDS_BOUT_get_tmds_bout_h(data)                                 ((0x0000FF00&(data))>>8)
#define  HDMI_P2_TMDS_BOUT_get_tmds_bout_l(data)                                 (0x000000FF&(data))

#define  HDMI_P2_TMDS_DPC0                                                      0x1803C040
#define  HDMI_P2_TMDS_DPC0_reg_addr                                              "0xB803C040"
#define  HDMI_P2_TMDS_DPC0_reg                                                   0xB803C040
#define  HDMI_P2_TMDS_DPC0_inst_addr                                             "0x0010"
#define  set_HDMI_P2_TMDS_DPC0_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_TMDS_DPC0_reg)=data)
#define  get_HDMI_P2_TMDS_DPC0_reg                                               (*((volatile unsigned int*)HDMI_P2_TMDS_DPC0_reg))
#define  HDMI_P2_TMDS_DPC0_dpc_pp_valid_shift                                    (9)
#define  HDMI_P2_TMDS_DPC0_dpc_default_ph_shift                                  (8)
#define  HDMI_P2_TMDS_DPC0_dpc_pp_shift                                          (4)
#define  HDMI_P2_TMDS_DPC0_dpc_cd_shift                                          (0)
#define  HDMI_P2_TMDS_DPC0_dpc_pp_valid_mask                                     (0x00000200)
#define  HDMI_P2_TMDS_DPC0_dpc_default_ph_mask                                   (0x00000100)
#define  HDMI_P2_TMDS_DPC0_dpc_pp_mask                                           (0x000000F0)
#define  HDMI_P2_TMDS_DPC0_dpc_cd_mask                                           (0x0000000F)
#define  HDMI_P2_TMDS_DPC0_dpc_pp_valid(data)                                    (0x00000200&((data)<<9))
#define  HDMI_P2_TMDS_DPC0_dpc_default_ph(data)                                  (0x00000100&((data)<<8))
#define  HDMI_P2_TMDS_DPC0_dpc_pp(data)                                          (0x000000F0&((data)<<4))
#define  HDMI_P2_TMDS_DPC0_dpc_cd(data)                                          (0x0000000F&(data))
#define  HDMI_P2_TMDS_DPC0_get_dpc_pp_valid(data)                                ((0x00000200&(data))>>9)
#define  HDMI_P2_TMDS_DPC0_get_dpc_default_ph(data)                              ((0x00000100&(data))>>8)
#define  HDMI_P2_TMDS_DPC0_get_dpc_pp(data)                                      ((0x000000F0&(data))>>4)
#define  HDMI_P2_TMDS_DPC0_get_dpc_cd(data)                                      (0x0000000F&(data))

#define  HDMI_P2_TMDS_DPC1                                                      0x1803C044
#define  HDMI_P2_TMDS_DPC1_reg_addr                                              "0xB803C044"
#define  HDMI_P2_TMDS_DPC1_reg                                                   0xB803C044
#define  HDMI_P2_TMDS_DPC1_inst_addr                                             "0x0011"
#define  set_HDMI_P2_TMDS_DPC1_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_TMDS_DPC1_reg)=data)
#define  get_HDMI_P2_TMDS_DPC1_reg                                               (*((volatile unsigned int*)HDMI_P2_TMDS_DPC1_reg))
#define  HDMI_P2_TMDS_DPC1_dpc_cd_chg_flag_shift                                 (18)
#define  HDMI_P2_TMDS_DPC1_dpc_cd_chg_int_en_shift                               (16)
#define  HDMI_P2_TMDS_DPC1_dummy_15_11_shift                                     (11)
#define  HDMI_P2_TMDS_DPC1_dpc_auto_shift                                        (10)
#define  HDMI_P2_TMDS_DPC1_dpc_pp_valid_fw_shift                                 (9)
#define  HDMI_P2_TMDS_DPC1_dpc_default_ph_fw_shift                               (8)
#define  HDMI_P2_TMDS_DPC1_dpc_pp_fw_shift                                       (4)
#define  HDMI_P2_TMDS_DPC1_dpc_cd_fw_shift                                       (0)
#define  HDMI_P2_TMDS_DPC1_dpc_cd_chg_flag_mask                                  (0x00040000)
#define  HDMI_P2_TMDS_DPC1_dpc_cd_chg_int_en_mask                                (0x00010000)
#define  HDMI_P2_TMDS_DPC1_dummy_15_11_mask                                      (0x0000F800)
#define  HDMI_P2_TMDS_DPC1_dpc_auto_mask                                         (0x00000400)
#define  HDMI_P2_TMDS_DPC1_dpc_pp_valid_fw_mask                                  (0x00000200)
#define  HDMI_P2_TMDS_DPC1_dpc_default_ph_fw_mask                                (0x00000100)
#define  HDMI_P2_TMDS_DPC1_dpc_pp_fw_mask                                        (0x000000F0)
#define  HDMI_P2_TMDS_DPC1_dpc_cd_fw_mask                                        (0x0000000F)
#define  HDMI_P2_TMDS_DPC1_dpc_cd_chg_flag(data)                                 (0x00040000&((data)<<18))
#define  HDMI_P2_TMDS_DPC1_dpc_cd_chg_int_en(data)                               (0x00010000&((data)<<16))
#define  HDMI_P2_TMDS_DPC1_dummy_15_11(data)                                     (0x0000F800&((data)<<11))
#define  HDMI_P2_TMDS_DPC1_dpc_auto(data)                                        (0x00000400&((data)<<10))
#define  HDMI_P2_TMDS_DPC1_dpc_pp_valid_fw(data)                                 (0x00000200&((data)<<9))
#define  HDMI_P2_TMDS_DPC1_dpc_default_ph_fw(data)                               (0x00000100&((data)<<8))
#define  HDMI_P2_TMDS_DPC1_dpc_pp_fw(data)                                       (0x000000F0&((data)<<4))
#define  HDMI_P2_TMDS_DPC1_dpc_cd_fw(data)                                       (0x0000000F&(data))
#define  HDMI_P2_TMDS_DPC1_get_dpc_cd_chg_flag(data)                             ((0x00040000&(data))>>18)
#define  HDMI_P2_TMDS_DPC1_get_dpc_cd_chg_int_en(data)                           ((0x00010000&(data))>>16)
#define  HDMI_P2_TMDS_DPC1_get_dummy_15_11(data)                                 ((0x0000F800&(data))>>11)
#define  HDMI_P2_TMDS_DPC1_get_dpc_auto(data)                                    ((0x00000400&(data))>>10)
#define  HDMI_P2_TMDS_DPC1_get_dpc_pp_valid_fw(data)                             ((0x00000200&(data))>>9)
#define  HDMI_P2_TMDS_DPC1_get_dpc_default_ph_fw(data)                           ((0x00000100&(data))>>8)
#define  HDMI_P2_TMDS_DPC1_get_dpc_pp_fw(data)                                   ((0x000000F0&(data))>>4)
#define  HDMI_P2_TMDS_DPC1_get_dpc_cd_fw(data)                                   (0x0000000F&(data))

#define  HDMI_P2_TMDS_DPC_SET0                                                  0x1803C048
#define  HDMI_P2_TMDS_DPC_SET0_reg_addr                                          "0xB803C048"
#define  HDMI_P2_TMDS_DPC_SET0_reg                                               0xB803C048
#define  HDMI_P2_TMDS_DPC_SET0_inst_addr                                         "0x0012"
#define  set_HDMI_P2_TMDS_DPC_SET0_reg(data)                                     (*((volatile unsigned int*)HDMI_P2_TMDS_DPC_SET0_reg)=data)
#define  get_HDMI_P2_TMDS_DPC_SET0_reg                                           (*((volatile unsigned int*)HDMI_P2_TMDS_DPC_SET0_reg))
#define  HDMI_P2_TMDS_DPC_SET0_dpc_bypass_dis_shift                              (8)
#define  HDMI_P2_TMDS_DPC_SET0_dpc_en_shift                                      (7)
#define  HDMI_P2_TMDS_DPC_SET0_phase_errcnt_in_shift                             (4)
#define  HDMI_P2_TMDS_DPC_SET0_phase_clrcnt_in_shift                             (1)
#define  HDMI_P2_TMDS_DPC_SET0_phase_clr_sel_shift                               (0)
#define  HDMI_P2_TMDS_DPC_SET0_dpc_bypass_dis_mask                               (0x00000100)
#define  HDMI_P2_TMDS_DPC_SET0_dpc_en_mask                                       (0x00000080)
#define  HDMI_P2_TMDS_DPC_SET0_phase_errcnt_in_mask                              (0x00000070)
#define  HDMI_P2_TMDS_DPC_SET0_phase_clrcnt_in_mask                              (0x0000000E)
#define  HDMI_P2_TMDS_DPC_SET0_phase_clr_sel_mask                                (0x00000001)
#define  HDMI_P2_TMDS_DPC_SET0_dpc_bypass_dis(data)                              (0x00000100&((data)<<8))
#define  HDMI_P2_TMDS_DPC_SET0_dpc_en(data)                                      (0x00000080&((data)<<7))
#define  HDMI_P2_TMDS_DPC_SET0_phase_errcnt_in(data)                             (0x00000070&((data)<<4))
#define  HDMI_P2_TMDS_DPC_SET0_phase_clrcnt_in(data)                             (0x0000000E&((data)<<1))
#define  HDMI_P2_TMDS_DPC_SET0_phase_clr_sel(data)                               (0x00000001&(data))
#define  HDMI_P2_TMDS_DPC_SET0_get_dpc_bypass_dis(data)                          ((0x00000100&(data))>>8)
#define  HDMI_P2_TMDS_DPC_SET0_get_dpc_en(data)                                  ((0x00000080&(data))>>7)
#define  HDMI_P2_TMDS_DPC_SET0_get_phase_errcnt_in(data)                         ((0x00000070&(data))>>4)
#define  HDMI_P2_TMDS_DPC_SET0_get_phase_clrcnt_in(data)                         ((0x0000000E&(data))>>1)
#define  HDMI_P2_TMDS_DPC_SET0_get_phase_clr_sel(data)                           (0x00000001&(data))

#define  HDMI_P2_TMDS_DPC_SET1                                                  0x1803C04C
#define  HDMI_P2_TMDS_DPC_SET1_reg_addr                                          "0xB803C04C"
#define  HDMI_P2_TMDS_DPC_SET1_reg                                               0xB803C04C
#define  HDMI_P2_TMDS_DPC_SET1_inst_addr                                         "0x0013"
#define  set_HDMI_P2_TMDS_DPC_SET1_reg(data)                                     (*((volatile unsigned int*)HDMI_P2_TMDS_DPC_SET1_reg)=data)
#define  get_HDMI_P2_TMDS_DPC_SET1_reg                                           (*((volatile unsigned int*)HDMI_P2_TMDS_DPC_SET1_reg))
#define  HDMI_P2_TMDS_DPC_SET1_set_full_noti_shift                               (4)
#define  HDMI_P2_TMDS_DPC_SET1_set_empty_noti_shift                              (0)
#define  HDMI_P2_TMDS_DPC_SET1_set_full_noti_mask                                (0x000000F0)
#define  HDMI_P2_TMDS_DPC_SET1_set_empty_noti_mask                               (0x0000000F)
#define  HDMI_P2_TMDS_DPC_SET1_set_full_noti(data)                               (0x000000F0&((data)<<4))
#define  HDMI_P2_TMDS_DPC_SET1_set_empty_noti(data)                              (0x0000000F&(data))
#define  HDMI_P2_TMDS_DPC_SET1_get_set_full_noti(data)                           ((0x000000F0&(data))>>4)
#define  HDMI_P2_TMDS_DPC_SET1_get_set_empty_noti(data)                          (0x0000000F&(data))

#define  HDMI_P2_TMDS_DPC_SET2                                                  0x1803C050
#define  HDMI_P2_TMDS_DPC_SET2_reg_addr                                          "0xB803C050"
#define  HDMI_P2_TMDS_DPC_SET2_reg                                               0xB803C050
#define  HDMI_P2_TMDS_DPC_SET2_inst_addr                                         "0x0014"
#define  set_HDMI_P2_TMDS_DPC_SET2_reg(data)                                     (*((volatile unsigned int*)HDMI_P2_TMDS_DPC_SET2_reg)=data)
#define  get_HDMI_P2_TMDS_DPC_SET2_reg                                           (*((volatile unsigned int*)HDMI_P2_TMDS_DPC_SET2_reg))
#define  HDMI_P2_TMDS_DPC_SET2_fifo_errcnt_in_shift                              (5)
#define  HDMI_P2_TMDS_DPC_SET2_clr_phase_flag_shift                              (4)
#define  HDMI_P2_TMDS_DPC_SET2_clr_fifo_flag_shift                               (3)
#define  HDMI_P2_TMDS_DPC_SET2_dpc_phase_ok_shift                                (2)
#define  HDMI_P2_TMDS_DPC_SET2_dpc_phase_err_flag_shift                          (1)
#define  HDMI_P2_TMDS_DPC_SET2_dpc_fifo_err_flag_shift                           (0)
#define  HDMI_P2_TMDS_DPC_SET2_fifo_errcnt_in_mask                               (0x000000E0)
#define  HDMI_P2_TMDS_DPC_SET2_clr_phase_flag_mask                               (0x00000010)
#define  HDMI_P2_TMDS_DPC_SET2_clr_fifo_flag_mask                                (0x00000008)
#define  HDMI_P2_TMDS_DPC_SET2_dpc_phase_ok_mask                                 (0x00000004)
#define  HDMI_P2_TMDS_DPC_SET2_dpc_phase_err_flag_mask                           (0x00000002)
#define  HDMI_P2_TMDS_DPC_SET2_dpc_fifo_err_flag_mask                            (0x00000001)
#define  HDMI_P2_TMDS_DPC_SET2_fifo_errcnt_in(data)                              (0x000000E0&((data)<<5))
#define  HDMI_P2_TMDS_DPC_SET2_clr_phase_flag(data)                              (0x00000010&((data)<<4))
#define  HDMI_P2_TMDS_DPC_SET2_clr_fifo_flag(data)                               (0x00000008&((data)<<3))
#define  HDMI_P2_TMDS_DPC_SET2_dpc_phase_ok(data)                                (0x00000004&((data)<<2))
#define  HDMI_P2_TMDS_DPC_SET2_dpc_phase_err_flag(data)                          (0x00000002&((data)<<1))
#define  HDMI_P2_TMDS_DPC_SET2_dpc_fifo_err_flag(data)                           (0x00000001&(data))
#define  HDMI_P2_TMDS_DPC_SET2_get_fifo_errcnt_in(data)                          ((0x000000E0&(data))>>5)
#define  HDMI_P2_TMDS_DPC_SET2_get_clr_phase_flag(data)                          ((0x00000010&(data))>>4)
#define  HDMI_P2_TMDS_DPC_SET2_get_clr_fifo_flag(data)                           ((0x00000008&(data))>>3)
#define  HDMI_P2_TMDS_DPC_SET2_get_dpc_phase_ok(data)                            ((0x00000004&(data))>>2)
#define  HDMI_P2_TMDS_DPC_SET2_get_dpc_phase_err_flag(data)                      ((0x00000002&(data))>>1)
#define  HDMI_P2_TMDS_DPC_SET2_get_dpc_fifo_err_flag(data)                       (0x00000001&(data))

#define  HDMI_P2_TMDS_DPC_SET3                                                  0x1803C054
#define  HDMI_P2_TMDS_DPC_SET3_reg_addr                                          "0xB803C054"
#define  HDMI_P2_TMDS_DPC_SET3_reg                                               0xB803C054
#define  HDMI_P2_TMDS_DPC_SET3_inst_addr                                         "0x0015"
#define  set_HDMI_P2_TMDS_DPC_SET3_reg(data)                                     (*((volatile unsigned int*)HDMI_P2_TMDS_DPC_SET3_reg)=data)
#define  get_HDMI_P2_TMDS_DPC_SET3_reg                                           (*((volatile unsigned int*)HDMI_P2_TMDS_DPC_SET3_reg))
#define  HDMI_P2_TMDS_DPC_SET3_dpc_fifo_over_flag_shift                          (7)
#define  HDMI_P2_TMDS_DPC_SET3_dpc_fifo_under_flag_shift                         (6)
#define  HDMI_P2_TMDS_DPC_SET3_dpc_fifo_over_xflag_shift                         (5)
#define  HDMI_P2_TMDS_DPC_SET3_dpc_fifo_under_xflag_shift                        (4)
#define  HDMI_P2_TMDS_DPC_SET3_dpc_fifo_over_flag_mask                           (0x00000080)
#define  HDMI_P2_TMDS_DPC_SET3_dpc_fifo_under_flag_mask                          (0x00000040)
#define  HDMI_P2_TMDS_DPC_SET3_dpc_fifo_over_xflag_mask                          (0x00000020)
#define  HDMI_P2_TMDS_DPC_SET3_dpc_fifo_under_xflag_mask                         (0x00000010)
#define  HDMI_P2_TMDS_DPC_SET3_dpc_fifo_over_flag(data)                          (0x00000080&((data)<<7))
#define  HDMI_P2_TMDS_DPC_SET3_dpc_fifo_under_flag(data)                         (0x00000040&((data)<<6))
#define  HDMI_P2_TMDS_DPC_SET3_dpc_fifo_over_xflag(data)                         (0x00000020&((data)<<5))
#define  HDMI_P2_TMDS_DPC_SET3_dpc_fifo_under_xflag(data)                        (0x00000010&((data)<<4))
#define  HDMI_P2_TMDS_DPC_SET3_get_dpc_fifo_over_flag(data)                      ((0x00000080&(data))>>7)
#define  HDMI_P2_TMDS_DPC_SET3_get_dpc_fifo_under_flag(data)                     ((0x00000040&(data))>>6)
#define  HDMI_P2_TMDS_DPC_SET3_get_dpc_fifo_over_xflag(data)                     ((0x00000020&(data))>>5)
#define  HDMI_P2_TMDS_DPC_SET3_get_dpc_fifo_under_xflag(data)                    ((0x00000010&(data))>>4)

#define  HDMI_P2_VIDEO_BIT_ERR_DET                                              0x1803C05C
#define  HDMI_P2_VIDEO_BIT_ERR_DET_reg_addr                                      "0xB803C05C"
#define  HDMI_P2_VIDEO_BIT_ERR_DET_reg                                           0xB803C05C
#define  HDMI_P2_VIDEO_BIT_ERR_DET_inst_addr                                     "0x0016"
#define  set_HDMI_P2_VIDEO_BIT_ERR_DET_reg(data)                                 (*((volatile unsigned int*)HDMI_P2_VIDEO_BIT_ERR_DET_reg)=data)
#define  get_HDMI_P2_VIDEO_BIT_ERR_DET_reg                                       (*((volatile unsigned int*)HDMI_P2_VIDEO_BIT_ERR_DET_reg))
#define  HDMI_P2_VIDEO_BIT_ERR_DET_thd_shift                                     (16)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_disparity_reset_mode_shift                    (12)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_irq_en_shift                                  (11)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_reset_shift                                   (10)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_period_shift                                  (4)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_ch_sel_shift                                  (2)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_mode_shift                                    (1)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_en_shift                                      (0)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_thd_mask                                      (0xFFFF0000)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_disparity_reset_mode_mask                     (0x00001000)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_irq_en_mask                                   (0x00000800)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_reset_mask                                    (0x00000400)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_period_mask                                   (0x000003F0)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_ch_sel_mask                                   (0x0000000C)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_mode_mask                                     (0x00000002)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_en_mask                                       (0x00000001)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_thd(data)                                     (0xFFFF0000&((data)<<16))
#define  HDMI_P2_VIDEO_BIT_ERR_DET_disparity_reset_mode(data)                    (0x00001000&((data)<<12))
#define  HDMI_P2_VIDEO_BIT_ERR_DET_irq_en(data)                                  (0x00000800&((data)<<11))
#define  HDMI_P2_VIDEO_BIT_ERR_DET_reset(data)                                   (0x00000400&((data)<<10))
#define  HDMI_P2_VIDEO_BIT_ERR_DET_period(data)                                  (0x000003F0&((data)<<4))
#define  HDMI_P2_VIDEO_BIT_ERR_DET_ch_sel(data)                                  (0x0000000C&((data)<<2))
#define  HDMI_P2_VIDEO_BIT_ERR_DET_mode(data)                                    (0x00000002&((data)<<1))
#define  HDMI_P2_VIDEO_BIT_ERR_DET_en(data)                                      (0x00000001&(data))
#define  HDMI_P2_VIDEO_BIT_ERR_DET_get_thd(data)                                 ((0xFFFF0000&(data))>>16)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_get_disparity_reset_mode(data)                ((0x00001000&(data))>>12)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_get_irq_en(data)                              ((0x00000800&(data))>>11)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_get_reset(data)                               ((0x00000400&(data))>>10)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_get_period(data)                              ((0x000003F0&(data))>>4)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_get_ch_sel(data)                              ((0x0000000C&(data))>>2)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_get_mode(data)                                ((0x00000002&(data))>>1)
#define  HDMI_P2_VIDEO_BIT_ERR_DET_get_en(data)                                  (0x00000001&(data))

#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B                                         0x1803C060
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_reg_addr                                 "0xB803C060"
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_reg                                      0xB803C060
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_inst_addr                                "0x0017"
#define  set_HDMI_P2_VIDEO_BIT_ERR_STATUS_B_reg(data)                            (*((volatile unsigned int*)HDMI_P2_VIDEO_BIT_ERR_STATUS_B_reg)=data)
#define  get_HDMI_P2_VIDEO_BIT_ERR_STATUS_B_reg                                  (*((volatile unsigned int*)HDMI_P2_VIDEO_BIT_ERR_STATUS_B_reg))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_ad_max_b_shift                           (26)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_ad_min_b_shift                           (20)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_no_dis_reset_b_shift                     (19)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_bit_err_thd_b_shift                      (18)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_bit_err_b_shift                          (17)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_bit_err_cnt_of_b_shift                   (16)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_bit_err_cnt_b_shift                      (0)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_ad_max_b_mask                            (0xFC000000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_ad_min_b_mask                            (0x03F00000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_no_dis_reset_b_mask                      (0x00080000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_bit_err_thd_b_mask                       (0x00040000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_bit_err_b_mask                           (0x00020000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_bit_err_cnt_of_b_mask                    (0x00010000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_bit_err_cnt_b_mask                       (0x0000FFFF)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_ad_max_b(data)                           (0xFC000000&((data)<<26))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_ad_min_b(data)                           (0x03F00000&((data)<<20))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_no_dis_reset_b(data)                     (0x00080000&((data)<<19))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_bit_err_thd_b(data)                      (0x00040000&((data)<<18))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_bit_err_b(data)                          (0x00020000&((data)<<17))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_bit_err_cnt_of_b(data)                   (0x00010000&((data)<<16))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_bit_err_cnt_b(data)                      (0x0000FFFF&(data))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_get_ad_max_b(data)                       ((0xFC000000&(data))>>26)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_get_ad_min_b(data)                       ((0x03F00000&(data))>>20)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_get_no_dis_reset_b(data)                 ((0x00080000&(data))>>19)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_get_bit_err_thd_b(data)                  ((0x00040000&(data))>>18)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_get_bit_err_b(data)                      ((0x00020000&(data))>>17)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_get_bit_err_cnt_of_b(data)               ((0x00010000&(data))>>16)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_B_get_bit_err_cnt_b(data)                  (0x0000FFFF&(data))

#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G                                         0x1803C064
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_reg_addr                                 "0xB803C064"
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_reg                                      0xB803C064
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_inst_addr                                "0x0018"
#define  set_HDMI_P2_VIDEO_BIT_ERR_STATUS_G_reg(data)                            (*((volatile unsigned int*)HDMI_P2_VIDEO_BIT_ERR_STATUS_G_reg)=data)
#define  get_HDMI_P2_VIDEO_BIT_ERR_STATUS_G_reg                                  (*((volatile unsigned int*)HDMI_P2_VIDEO_BIT_ERR_STATUS_G_reg))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_ad_max_g_shift                           (26)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_ad_min_g_shift                           (20)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_no_dis_reset_g_shift                     (19)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_bit_err_thd_g_shift                      (18)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_bit_err_g_shift                          (17)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_bit_err_cnt_of_g_shift                   (16)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_bit_err_cnt_g_shift                      (0)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_ad_max_g_mask                            (0xFC000000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_ad_min_g_mask                            (0x03F00000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_no_dis_reset_g_mask                      (0x00080000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_bit_err_thd_g_mask                       (0x00040000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_bit_err_g_mask                           (0x00020000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_bit_err_cnt_of_g_mask                    (0x00010000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_bit_err_cnt_g_mask                       (0x0000FFFF)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_ad_max_g(data)                           (0xFC000000&((data)<<26))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_ad_min_g(data)                           (0x03F00000&((data)<<20))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_no_dis_reset_g(data)                     (0x00080000&((data)<<19))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_bit_err_thd_g(data)                      (0x00040000&((data)<<18))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_bit_err_g(data)                          (0x00020000&((data)<<17))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_bit_err_cnt_of_g(data)                   (0x00010000&((data)<<16))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_bit_err_cnt_g(data)                      (0x0000FFFF&(data))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_get_ad_max_g(data)                       ((0xFC000000&(data))>>26)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_get_ad_min_g(data)                       ((0x03F00000&(data))>>20)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_get_no_dis_reset_g(data)                 ((0x00080000&(data))>>19)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_get_bit_err_thd_g(data)                  ((0x00040000&(data))>>18)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_get_bit_err_g(data)                      ((0x00020000&(data))>>17)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_get_bit_err_cnt_of_g(data)               ((0x00010000&(data))>>16)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_G_get_bit_err_cnt_g(data)                  (0x0000FFFF&(data))

#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R                                         0x1803C068
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_reg_addr                                 "0xB803C068"
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_reg                                      0xB803C068
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_inst_addr                                "0x0019"
#define  set_HDMI_P2_VIDEO_BIT_ERR_STATUS_R_reg(data)                            (*((volatile unsigned int*)HDMI_P2_VIDEO_BIT_ERR_STATUS_R_reg)=data)
#define  get_HDMI_P2_VIDEO_BIT_ERR_STATUS_R_reg                                  (*((volatile unsigned int*)HDMI_P2_VIDEO_BIT_ERR_STATUS_R_reg))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_ad_max_r_shift                           (26)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_ad_min_r_shift                           (20)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_no_dis_reset_r_shift                     (19)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_bit_err_thd_r_shift                      (18)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_bit_err_r_shift                          (17)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_bit_err_cnt_of_r_shift                   (16)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_bit_err_cnt_r_shift                      (0)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_ad_max_r_mask                            (0xFC000000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_ad_min_r_mask                            (0x03F00000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_no_dis_reset_r_mask                      (0x00080000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_bit_err_thd_r_mask                       (0x00040000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_bit_err_r_mask                           (0x00020000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_bit_err_cnt_of_r_mask                    (0x00010000)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_bit_err_cnt_r_mask                       (0x0000FFFF)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_ad_max_r(data)                           (0xFC000000&((data)<<26))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_ad_min_r(data)                           (0x03F00000&((data)<<20))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_no_dis_reset_r(data)                     (0x00080000&((data)<<19))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_bit_err_thd_r(data)                      (0x00040000&((data)<<18))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_bit_err_r(data)                          (0x00020000&((data)<<17))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_bit_err_cnt_of_r(data)                   (0x00010000&((data)<<16))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_bit_err_cnt_r(data)                      (0x0000FFFF&(data))
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_get_ad_max_r(data)                       ((0xFC000000&(data))>>26)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_get_ad_min_r(data)                       ((0x03F00000&(data))>>20)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_get_no_dis_reset_r(data)                 ((0x00080000&(data))>>19)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_get_bit_err_thd_r(data)                  ((0x00040000&(data))>>18)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_get_bit_err_r(data)                      ((0x00020000&(data))>>17)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_get_bit_err_cnt_of_r(data)               ((0x00010000&(data))>>16)
#define  HDMI_P2_VIDEO_BIT_ERR_STATUS_R_get_bit_err_cnt_r(data)                  (0x0000FFFF&(data))

#define  HDMI_P2_TERC4_ERR_DET                                                  0x1803C06C
#define  HDMI_P2_TERC4_ERR_DET_reg_addr                                          "0xB803C06C"
#define  HDMI_P2_TERC4_ERR_DET_reg                                               0xB803C06C
#define  HDMI_P2_TERC4_ERR_DET_inst_addr                                         "0x001A"
#define  set_HDMI_P2_TERC4_ERR_DET_reg(data)                                     (*((volatile unsigned int*)HDMI_P2_TERC4_ERR_DET_reg)=data)
#define  get_HDMI_P2_TERC4_ERR_DET_reg                                           (*((volatile unsigned int*)HDMI_P2_TERC4_ERR_DET_reg))
#define  HDMI_P2_TERC4_ERR_DET_terc4_thd_shift                                   (0)
#define  HDMI_P2_TERC4_ERR_DET_terc4_thd_mask                                    (0x0000FFFF)
#define  HDMI_P2_TERC4_ERR_DET_terc4_thd(data)                                   (0x0000FFFF&(data))
#define  HDMI_P2_TERC4_ERR_DET_get_terc4_thd(data)                               (0x0000FFFF&(data))

#define  HDMI_P2_TERC4_ERR_STATUS_B                                             0x1803C070
#define  HDMI_P2_TERC4_ERR_STATUS_B_reg_addr                                     "0xB803C070"
#define  HDMI_P2_TERC4_ERR_STATUS_B_reg                                          0xB803C070
#define  HDMI_P2_TERC4_ERR_STATUS_B_inst_addr                                    "0x001B"
#define  set_HDMI_P2_TERC4_ERR_STATUS_B_reg(data)                                (*((volatile unsigned int*)HDMI_P2_TERC4_ERR_STATUS_B_reg)=data)
#define  get_HDMI_P2_TERC4_ERR_STATUS_B_reg                                      (*((volatile unsigned int*)HDMI_P2_TERC4_ERR_STATUS_B_reg))
#define  HDMI_P2_TERC4_ERR_STATUS_B_terc4_err_thd_b_shift                        (18)
#define  HDMI_P2_TERC4_ERR_STATUS_B_terc4_err_b_shift                            (17)
#define  HDMI_P2_TERC4_ERR_STATUS_B_terc4_err_cnt_of_b_shift                     (16)
#define  HDMI_P2_TERC4_ERR_STATUS_B_terc4_err_cnt_b_shift                        (0)
#define  HDMI_P2_TERC4_ERR_STATUS_B_terc4_err_thd_b_mask                         (0x00040000)
#define  HDMI_P2_TERC4_ERR_STATUS_B_terc4_err_b_mask                             (0x00020000)
#define  HDMI_P2_TERC4_ERR_STATUS_B_terc4_err_cnt_of_b_mask                      (0x00010000)
#define  HDMI_P2_TERC4_ERR_STATUS_B_terc4_err_cnt_b_mask                         (0x0000FFFF)
#define  HDMI_P2_TERC4_ERR_STATUS_B_terc4_err_thd_b(data)                        (0x00040000&((data)<<18))
#define  HDMI_P2_TERC4_ERR_STATUS_B_terc4_err_b(data)                            (0x00020000&((data)<<17))
#define  HDMI_P2_TERC4_ERR_STATUS_B_terc4_err_cnt_of_b(data)                     (0x00010000&((data)<<16))
#define  HDMI_P2_TERC4_ERR_STATUS_B_terc4_err_cnt_b(data)                        (0x0000FFFF&(data))
#define  HDMI_P2_TERC4_ERR_STATUS_B_get_terc4_err_thd_b(data)                    ((0x00040000&(data))>>18)
#define  HDMI_P2_TERC4_ERR_STATUS_B_get_terc4_err_b(data)                        ((0x00020000&(data))>>17)
#define  HDMI_P2_TERC4_ERR_STATUS_B_get_terc4_err_cnt_of_b(data)                 ((0x00010000&(data))>>16)
#define  HDMI_P2_TERC4_ERR_STATUS_B_get_terc4_err_cnt_b(data)                    (0x0000FFFF&(data))

#define  HDMI_P2_TERC4_ERR_STATUS_G                                             0x1803C074
#define  HDMI_P2_TERC4_ERR_STATUS_G_reg_addr                                     "0xB803C074"
#define  HDMI_P2_TERC4_ERR_STATUS_G_reg                                          0xB803C074
#define  HDMI_P2_TERC4_ERR_STATUS_G_inst_addr                                    "0x001C"
#define  set_HDMI_P2_TERC4_ERR_STATUS_G_reg(data)                                (*((volatile unsigned int*)HDMI_P2_TERC4_ERR_STATUS_G_reg)=data)
#define  get_HDMI_P2_TERC4_ERR_STATUS_G_reg                                      (*((volatile unsigned int*)HDMI_P2_TERC4_ERR_STATUS_G_reg))
#define  HDMI_P2_TERC4_ERR_STATUS_G_terc4_err_thd_g_shift                        (18)
#define  HDMI_P2_TERC4_ERR_STATUS_G_terc4_err_g_shift                            (17)
#define  HDMI_P2_TERC4_ERR_STATUS_G_terc4_err_cnt_of_g_shift                     (16)
#define  HDMI_P2_TERC4_ERR_STATUS_G_terc4_err_cnt_g_shift                        (0)
#define  HDMI_P2_TERC4_ERR_STATUS_G_terc4_err_thd_g_mask                         (0x00040000)
#define  HDMI_P2_TERC4_ERR_STATUS_G_terc4_err_g_mask                             (0x00020000)
#define  HDMI_P2_TERC4_ERR_STATUS_G_terc4_err_cnt_of_g_mask                      (0x00010000)
#define  HDMI_P2_TERC4_ERR_STATUS_G_terc4_err_cnt_g_mask                         (0x0000FFFF)
#define  HDMI_P2_TERC4_ERR_STATUS_G_terc4_err_thd_g(data)                        (0x00040000&((data)<<18))
#define  HDMI_P2_TERC4_ERR_STATUS_G_terc4_err_g(data)                            (0x00020000&((data)<<17))
#define  HDMI_P2_TERC4_ERR_STATUS_G_terc4_err_cnt_of_g(data)                     (0x00010000&((data)<<16))
#define  HDMI_P2_TERC4_ERR_STATUS_G_terc4_err_cnt_g(data)                        (0x0000FFFF&(data))
#define  HDMI_P2_TERC4_ERR_STATUS_G_get_terc4_err_thd_g(data)                    ((0x00040000&(data))>>18)
#define  HDMI_P2_TERC4_ERR_STATUS_G_get_terc4_err_g(data)                        ((0x00020000&(data))>>17)
#define  HDMI_P2_TERC4_ERR_STATUS_G_get_terc4_err_cnt_of_g(data)                 ((0x00010000&(data))>>16)
#define  HDMI_P2_TERC4_ERR_STATUS_G_get_terc4_err_cnt_g(data)                    (0x0000FFFF&(data))

#define  HDMI_P2_TERC4_ERR_STATUS_R                                             0x1803C078
#define  HDMI_P2_TERC4_ERR_STATUS_R_reg_addr                                     "0xB803C078"
#define  HDMI_P2_TERC4_ERR_STATUS_R_reg                                          0xB803C078
#define  HDMI_P2_TERC4_ERR_STATUS_R_inst_addr                                    "0x001D"
#define  set_HDMI_P2_TERC4_ERR_STATUS_R_reg(data)                                (*((volatile unsigned int*)HDMI_P2_TERC4_ERR_STATUS_R_reg)=data)
#define  get_HDMI_P2_TERC4_ERR_STATUS_R_reg                                      (*((volatile unsigned int*)HDMI_P2_TERC4_ERR_STATUS_R_reg))
#define  HDMI_P2_TERC4_ERR_STATUS_R_terc4_err_thd_r_shift                        (18)
#define  HDMI_P2_TERC4_ERR_STATUS_R_terc4_err_r_shift                            (17)
#define  HDMI_P2_TERC4_ERR_STATUS_R_terc4_err_cnt_of_r_shift                     (16)
#define  HDMI_P2_TERC4_ERR_STATUS_R_terc4_err_cnt_r_shift                        (0)
#define  HDMI_P2_TERC4_ERR_STATUS_R_terc4_err_thd_r_mask                         (0x00040000)
#define  HDMI_P2_TERC4_ERR_STATUS_R_terc4_err_r_mask                             (0x00020000)
#define  HDMI_P2_TERC4_ERR_STATUS_R_terc4_err_cnt_of_r_mask                      (0x00010000)
#define  HDMI_P2_TERC4_ERR_STATUS_R_terc4_err_cnt_r_mask                         (0x0000FFFF)
#define  HDMI_P2_TERC4_ERR_STATUS_R_terc4_err_thd_r(data)                        (0x00040000&((data)<<18))
#define  HDMI_P2_TERC4_ERR_STATUS_R_terc4_err_r(data)                            (0x00020000&((data)<<17))
#define  HDMI_P2_TERC4_ERR_STATUS_R_terc4_err_cnt_of_r(data)                     (0x00010000&((data)<<16))
#define  HDMI_P2_TERC4_ERR_STATUS_R_terc4_err_cnt_r(data)                        (0x0000FFFF&(data))
#define  HDMI_P2_TERC4_ERR_STATUS_R_get_terc4_err_thd_r(data)                    ((0x00040000&(data))>>18)
#define  HDMI_P2_TERC4_ERR_STATUS_R_get_terc4_err_r(data)                        ((0x00020000&(data))>>17)
#define  HDMI_P2_TERC4_ERR_STATUS_R_get_terc4_err_cnt_of_r(data)                 ((0x00010000&(data))>>16)
#define  HDMI_P2_TERC4_ERR_STATUS_R_get_terc4_err_cnt_r(data)                    (0x0000FFFF&(data))

#define  HDMI_P2_HDMI_SR                                                        0x1803C07C
#define  HDMI_P2_HDMI_SR_reg_addr                                                "0xB803C07C"
#define  HDMI_P2_HDMI_SR_reg                                                     0xB803C07C
#define  HDMI_P2_HDMI_SR_inst_addr                                               "0x001E"
#define  set_HDMI_P2_HDMI_SR_reg(data)                                           (*((volatile unsigned int*)HDMI_P2_HDMI_SR_reg)=data)
#define  get_HDMI_P2_HDMI_SR_reg                                                 (*((volatile unsigned int*)HDMI_P2_HDMI_SR_reg))
#define  HDMI_P2_HDMI_SR_avmute_fw_shift                                         (8)
#define  HDMI_P2_HDMI_SR_avmute_bg_shift                                         (7)
#define  HDMI_P2_HDMI_SR_avmute_shift                                            (6)
#define  HDMI_P2_HDMI_SR_mode_shift                                              (0)
#define  HDMI_P2_HDMI_SR_avmute_fw_mask                                          (0x00000100)
#define  HDMI_P2_HDMI_SR_avmute_bg_mask                                          (0x00000080)
#define  HDMI_P2_HDMI_SR_avmute_mask                                             (0x00000040)
#define  HDMI_P2_HDMI_SR_mode_mask                                               (0x00000001)
#define  HDMI_P2_HDMI_SR_avmute_fw(data)                                         (0x00000100&((data)<<8))
#define  HDMI_P2_HDMI_SR_avmute_bg(data)                                         (0x00000080&((data)<<7))
#define  HDMI_P2_HDMI_SR_avmute(data)                                            (0x00000040&((data)<<6))
#define  HDMI_P2_HDMI_SR_mode(data)                                              (0x00000001&(data))
#define  HDMI_P2_HDMI_SR_get_avmute_fw(data)                                     ((0x00000100&(data))>>8)
#define  HDMI_P2_HDMI_SR_get_avmute_bg(data)                                     ((0x00000080&(data))>>7)
#define  HDMI_P2_HDMI_SR_get_avmute(data)                                        ((0x00000040&(data))>>6)
#define  HDMI_P2_HDMI_SR_get_mode(data)                                          (0x00000001&(data))

#define  HDMI_P2_HDMI_GPVS                                                      0x1803C080
#define  HDMI_P2_HDMI_GPVS_reg_addr                                              "0xB803C080"
#define  HDMI_P2_HDMI_GPVS_reg                                                   0xB803C080
#define  HDMI_P2_HDMI_GPVS_inst_addr                                             "0x001F"
#define  set_HDMI_P2_HDMI_GPVS_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_HDMI_GPVS_reg)=data)
#define  get_HDMI_P2_HDMI_GPVS_reg                                               (*((volatile unsigned int*)HDMI_P2_HDMI_GPVS_reg))
#define  HDMI_P2_HDMI_GPVS_dummy_31_29_shift                                     (29)
#define  HDMI_P2_HDMI_GPVS_drmps_v_shift                                         (28)
#define  HDMI_P2_HDMI_GPVS_mpegps_v_shift                                        (27)
#define  HDMI_P2_HDMI_GPVS_aps_v_shift                                           (26)
#define  HDMI_P2_HDMI_GPVS_spdps_v_shift                                         (25)
#define  HDMI_P2_HDMI_GPVS_avips_v_shift                                         (24)
#define  HDMI_P2_HDMI_GPVS_hdr10pvsps_v_shift                                    (23)
#define  HDMI_P2_HDMI_GPVS_dvsps_v_shift                                         (22)
#define  HDMI_P2_HDMI_GPVS_fvsps_v_shift                                         (21)
#define  HDMI_P2_HDMI_GPVS_vsps_v_shift                                          (20)
#define  HDMI_P2_HDMI_GPVS_gmps_v_shift                                          (19)
#define  HDMI_P2_HDMI_GPVS_isrc1ps_v_shift                                       (18)
#define  HDMI_P2_HDMI_GPVS_acpps_v_shift                                         (17)
#define  HDMI_P2_HDMI_GPVS_drmps_shift                                           (16)
#define  HDMI_P2_HDMI_GPVS_mpegps_shift                                          (15)
#define  HDMI_P2_HDMI_GPVS_aps_shift                                             (14)
#define  HDMI_P2_HDMI_GPVS_spdps_shift                                           (13)
#define  HDMI_P2_HDMI_GPVS_avips_shift                                           (12)
#define  HDMI_P2_HDMI_GPVS_hdr10pvsps_shift                                      (11)
#define  HDMI_P2_HDMI_GPVS_dvsps_shift                                           (10)
#define  HDMI_P2_HDMI_GPVS_fvsps_shift                                           (9)
#define  HDMI_P2_HDMI_GPVS_vsps_shift                                            (8)
#define  HDMI_P2_HDMI_GPVS_gmps_shift                                            (7)
#define  HDMI_P2_HDMI_GPVS_isrc1ps_shift                                         (6)
#define  HDMI_P2_HDMI_GPVS_acpps_shift                                           (5)
#define  HDMI_P2_HDMI_GPVS_nps_shift                                             (4)
#define  HDMI_P2_HDMI_GPVS_rsv3ps_shift                                          (3)
#define  HDMI_P2_HDMI_GPVS_rsv2ps_shift                                          (2)
#define  HDMI_P2_HDMI_GPVS_rsv1ps_shift                                          (1)
#define  HDMI_P2_HDMI_GPVS_rsv0ps_shift                                          (0)
#define  HDMI_P2_HDMI_GPVS_dummy_31_29_mask                                      (0xE0000000)
#define  HDMI_P2_HDMI_GPVS_drmps_v_mask                                          (0x10000000)
#define  HDMI_P2_HDMI_GPVS_mpegps_v_mask                                         (0x08000000)
#define  HDMI_P2_HDMI_GPVS_aps_v_mask                                            (0x04000000)
#define  HDMI_P2_HDMI_GPVS_spdps_v_mask                                          (0x02000000)
#define  HDMI_P2_HDMI_GPVS_avips_v_mask                                          (0x01000000)
#define  HDMI_P2_HDMI_GPVS_hdr10pvsps_v_mask                                     (0x00800000)
#define  HDMI_P2_HDMI_GPVS_dvsps_v_mask                                          (0x00400000)
#define  HDMI_P2_HDMI_GPVS_fvsps_v_mask                                          (0x00200000)
#define  HDMI_P2_HDMI_GPVS_vsps_v_mask                                           (0x00100000)
#define  HDMI_P2_HDMI_GPVS_gmps_v_mask                                           (0x00080000)
#define  HDMI_P2_HDMI_GPVS_isrc1ps_v_mask                                        (0x00040000)
#define  HDMI_P2_HDMI_GPVS_acpps_v_mask                                          (0x00020000)
#define  HDMI_P2_HDMI_GPVS_drmps_mask                                            (0x00010000)
#define  HDMI_P2_HDMI_GPVS_mpegps_mask                                           (0x00008000)
#define  HDMI_P2_HDMI_GPVS_aps_mask                                              (0x00004000)
#define  HDMI_P2_HDMI_GPVS_spdps_mask                                            (0x00002000)
#define  HDMI_P2_HDMI_GPVS_avips_mask                                            (0x00001000)
#define  HDMI_P2_HDMI_GPVS_hdr10pvsps_mask                                       (0x00000800)
#define  HDMI_P2_HDMI_GPVS_dvsps_mask                                            (0x00000400)
#define  HDMI_P2_HDMI_GPVS_fvsps_mask                                            (0x00000200)
#define  HDMI_P2_HDMI_GPVS_vsps_mask                                             (0x00000100)
#define  HDMI_P2_HDMI_GPVS_gmps_mask                                             (0x00000080)
#define  HDMI_P2_HDMI_GPVS_isrc1ps_mask                                          (0x00000040)
#define  HDMI_P2_HDMI_GPVS_acpps_mask                                            (0x00000020)
#define  HDMI_P2_HDMI_GPVS_nps_mask                                              (0x00000010)
#define  HDMI_P2_HDMI_GPVS_rsv3ps_mask                                           (0x00000008)
#define  HDMI_P2_HDMI_GPVS_rsv2ps_mask                                           (0x00000004)
#define  HDMI_P2_HDMI_GPVS_rsv1ps_mask                                           (0x00000002)
#define  HDMI_P2_HDMI_GPVS_rsv0ps_mask                                           (0x00000001)
#define  HDMI_P2_HDMI_GPVS_dummy_31_29(data)                                     (0xE0000000&((data)<<29))
#define  HDMI_P2_HDMI_GPVS_drmps_v(data)                                         (0x10000000&((data)<<28))
#define  HDMI_P2_HDMI_GPVS_mpegps_v(data)                                        (0x08000000&((data)<<27))
#define  HDMI_P2_HDMI_GPVS_aps_v(data)                                           (0x04000000&((data)<<26))
#define  HDMI_P2_HDMI_GPVS_spdps_v(data)                                         (0x02000000&((data)<<25))
#define  HDMI_P2_HDMI_GPVS_avips_v(data)                                         (0x01000000&((data)<<24))
#define  HDMI_P2_HDMI_GPVS_hdr10pvsps_v(data)                                    (0x00800000&((data)<<23))
#define  HDMI_P2_HDMI_GPVS_dvsps_v(data)                                         (0x00400000&((data)<<22))
#define  HDMI_P2_HDMI_GPVS_fvsps_v(data)                                         (0x00200000&((data)<<21))
#define  HDMI_P2_HDMI_GPVS_vsps_v(data)                                          (0x00100000&((data)<<20))
#define  HDMI_P2_HDMI_GPVS_gmps_v(data)                                          (0x00080000&((data)<<19))
#define  HDMI_P2_HDMI_GPVS_isrc1ps_v(data)                                       (0x00040000&((data)<<18))
#define  HDMI_P2_HDMI_GPVS_acpps_v(data)                                         (0x00020000&((data)<<17))
#define  HDMI_P2_HDMI_GPVS_drmps(data)                                           (0x00010000&((data)<<16))
#define  HDMI_P2_HDMI_GPVS_mpegps(data)                                          (0x00008000&((data)<<15))
#define  HDMI_P2_HDMI_GPVS_aps(data)                                             (0x00004000&((data)<<14))
#define  HDMI_P2_HDMI_GPVS_spdps(data)                                           (0x00002000&((data)<<13))
#define  HDMI_P2_HDMI_GPVS_avips(data)                                           (0x00001000&((data)<<12))
#define  HDMI_P2_HDMI_GPVS_hdr10pvsps(data)                                      (0x00000800&((data)<<11))
#define  HDMI_P2_HDMI_GPVS_dvsps(data)                                           (0x00000400&((data)<<10))
#define  HDMI_P2_HDMI_GPVS_fvsps(data)                                           (0x00000200&((data)<<9))
#define  HDMI_P2_HDMI_GPVS_vsps(data)                                            (0x00000100&((data)<<8))
#define  HDMI_P2_HDMI_GPVS_gmps(data)                                            (0x00000080&((data)<<7))
#define  HDMI_P2_HDMI_GPVS_isrc1ps(data)                                         (0x00000040&((data)<<6))
#define  HDMI_P2_HDMI_GPVS_acpps(data)                                           (0x00000020&((data)<<5))
#define  HDMI_P2_HDMI_GPVS_nps(data)                                             (0x00000010&((data)<<4))
#define  HDMI_P2_HDMI_GPVS_rsv3ps(data)                                          (0x00000008&((data)<<3))
#define  HDMI_P2_HDMI_GPVS_rsv2ps(data)                                          (0x00000004&((data)<<2))
#define  HDMI_P2_HDMI_GPVS_rsv1ps(data)                                          (0x00000002&((data)<<1))
#define  HDMI_P2_HDMI_GPVS_rsv0ps(data)                                          (0x00000001&(data))
#define  HDMI_P2_HDMI_GPVS_get_dummy_31_29(data)                                 ((0xE0000000&(data))>>29)
#define  HDMI_P2_HDMI_GPVS_get_drmps_v(data)                                     ((0x10000000&(data))>>28)
#define  HDMI_P2_HDMI_GPVS_get_mpegps_v(data)                                    ((0x08000000&(data))>>27)
#define  HDMI_P2_HDMI_GPVS_get_aps_v(data)                                       ((0x04000000&(data))>>26)
#define  HDMI_P2_HDMI_GPVS_get_spdps_v(data)                                     ((0x02000000&(data))>>25)
#define  HDMI_P2_HDMI_GPVS_get_avips_v(data)                                     ((0x01000000&(data))>>24)
#define  HDMI_P2_HDMI_GPVS_get_hdr10pvsps_v(data)                                ((0x00800000&(data))>>23)
#define  HDMI_P2_HDMI_GPVS_get_dvsps_v(data)                                     ((0x00400000&(data))>>22)
#define  HDMI_P2_HDMI_GPVS_get_fvsps_v(data)                                     ((0x00200000&(data))>>21)
#define  HDMI_P2_HDMI_GPVS_get_vsps_v(data)                                      ((0x00100000&(data))>>20)
#define  HDMI_P2_HDMI_GPVS_get_gmps_v(data)                                      ((0x00080000&(data))>>19)
#define  HDMI_P2_HDMI_GPVS_get_isrc1ps_v(data)                                   ((0x00040000&(data))>>18)
#define  HDMI_P2_HDMI_GPVS_get_acpps_v(data)                                     ((0x00020000&(data))>>17)
#define  HDMI_P2_HDMI_GPVS_get_drmps(data)                                       ((0x00010000&(data))>>16)
#define  HDMI_P2_HDMI_GPVS_get_mpegps(data)                                      ((0x00008000&(data))>>15)
#define  HDMI_P2_HDMI_GPVS_get_aps(data)                                         ((0x00004000&(data))>>14)
#define  HDMI_P2_HDMI_GPVS_get_spdps(data)                                       ((0x00002000&(data))>>13)
#define  HDMI_P2_HDMI_GPVS_get_avips(data)                                       ((0x00001000&(data))>>12)
#define  HDMI_P2_HDMI_GPVS_get_hdr10pvsps(data)                                  ((0x00000800&(data))>>11)
#define  HDMI_P2_HDMI_GPVS_get_dvsps(data)                                       ((0x00000400&(data))>>10)
#define  HDMI_P2_HDMI_GPVS_get_fvsps(data)                                       ((0x00000200&(data))>>9)
#define  HDMI_P2_HDMI_GPVS_get_vsps(data)                                        ((0x00000100&(data))>>8)
#define  HDMI_P2_HDMI_GPVS_get_gmps(data)                                        ((0x00000080&(data))>>7)
#define  HDMI_P2_HDMI_GPVS_get_isrc1ps(data)                                     ((0x00000040&(data))>>6)
#define  HDMI_P2_HDMI_GPVS_get_acpps(data)                                       ((0x00000020&(data))>>5)
#define  HDMI_P2_HDMI_GPVS_get_nps(data)                                         ((0x00000010&(data))>>4)
#define  HDMI_P2_HDMI_GPVS_get_rsv3ps(data)                                      ((0x00000008&(data))>>3)
#define  HDMI_P2_HDMI_GPVS_get_rsv2ps(data)                                      ((0x00000004&(data))>>2)
#define  HDMI_P2_HDMI_GPVS_get_rsv1ps(data)                                      ((0x00000002&(data))>>1)
#define  HDMI_P2_HDMI_GPVS_get_rsv0ps(data)                                      (0x00000001&(data))

#define  HDMI_P2_HDMI_GPVS1                                                     0x1803C084
#define  HDMI_P2_HDMI_GPVS1_reg_addr                                             "0xB803C084"
#define  HDMI_P2_HDMI_GPVS1_reg                                                  0xB803C084
#define  HDMI_P2_HDMI_GPVS1_inst_addr                                            "0x0020"
#define  set_HDMI_P2_HDMI_GPVS1_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_HDMI_GPVS1_reg)=data)
#define  get_HDMI_P2_HDMI_GPVS1_reg                                              (*((volatile unsigned int*)HDMI_P2_HDMI_GPVS1_reg))
#define  HDMI_P2_HDMI_GPVS1_dummy_31_4_shift                                     (4)
#define  HDMI_P2_HDMI_GPVS1_drmps_rv_shift                                       (3)
#define  HDMI_P2_HDMI_GPVS1_hdr10pvsps_rv_shift                                  (2)
#define  HDMI_P2_HDMI_GPVS1_dvsps_rv_shift                                       (1)
#define  HDMI_P2_HDMI_GPVS1_vsps_rv_shift                                        (0)
#define  HDMI_P2_HDMI_GPVS1_dummy_31_4_mask                                      (0xFFFFFFF0)
#define  HDMI_P2_HDMI_GPVS1_drmps_rv_mask                                        (0x00000008)
#define  HDMI_P2_HDMI_GPVS1_hdr10pvsps_rv_mask                                   (0x00000004)
#define  HDMI_P2_HDMI_GPVS1_dvsps_rv_mask                                        (0x00000002)
#define  HDMI_P2_HDMI_GPVS1_vsps_rv_mask                                         (0x00000001)
#define  HDMI_P2_HDMI_GPVS1_dummy_31_4(data)                                     (0xFFFFFFF0&((data)<<4))
#define  HDMI_P2_HDMI_GPVS1_drmps_rv(data)                                       (0x00000008&((data)<<3))
#define  HDMI_P2_HDMI_GPVS1_hdr10pvsps_rv(data)                                  (0x00000004&((data)<<2))
#define  HDMI_P2_HDMI_GPVS1_dvsps_rv(data)                                       (0x00000002&((data)<<1))
#define  HDMI_P2_HDMI_GPVS1_vsps_rv(data)                                        (0x00000001&(data))
#define  HDMI_P2_HDMI_GPVS1_get_dummy_31_4(data)                                 ((0xFFFFFFF0&(data))>>4)
#define  HDMI_P2_HDMI_GPVS1_get_drmps_rv(data)                                   ((0x00000008&(data))>>3)
#define  HDMI_P2_HDMI_GPVS1_get_hdr10pvsps_rv(data)                              ((0x00000004&(data))>>2)
#define  HDMI_P2_HDMI_GPVS1_get_dvsps_rv(data)                                   ((0x00000002&(data))>>1)
#define  HDMI_P2_HDMI_GPVS1_get_vsps_rv(data)                                    (0x00000001&(data))

#define  HDMI_P2_HDMI_PSAP                                                      0x1803C088
#define  HDMI_P2_HDMI_PSAP_reg_addr                                              "0xB803C088"
#define  HDMI_P2_HDMI_PSAP_reg                                                   0xB803C088
#define  HDMI_P2_HDMI_PSAP_inst_addr                                             "0x0021"
#define  set_HDMI_P2_HDMI_PSAP_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_HDMI_PSAP_reg)=data)
#define  get_HDMI_P2_HDMI_PSAP_reg                                               (*((volatile unsigned int*)HDMI_P2_HDMI_PSAP_reg))
#define  HDMI_P2_HDMI_PSAP_apss_shift                                            (0)
#define  HDMI_P2_HDMI_PSAP_apss_mask                                             (0x000001FF)
#define  HDMI_P2_HDMI_PSAP_apss(data)                                            (0x000001FF&(data))
#define  HDMI_P2_HDMI_PSAP_get_apss(data)                                        (0x000001FF&(data))

#define  HDMI_P2_HDMI_PSDP                                                      0x1803C08C
#define  HDMI_P2_HDMI_PSDP_reg_addr                                              "0xB803C08C"
#define  HDMI_P2_HDMI_PSDP_reg                                                   0xB803C08C
#define  HDMI_P2_HDMI_PSDP_inst_addr                                             "0x0022"
#define  set_HDMI_P2_HDMI_PSDP_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_HDMI_PSDP_reg)=data)
#define  get_HDMI_P2_HDMI_PSDP_reg                                               (*((volatile unsigned int*)HDMI_P2_HDMI_PSDP_reg))
#define  HDMI_P2_HDMI_PSDP_dpss_shift                                            (0)
#define  HDMI_P2_HDMI_PSDP_dpss_mask                                             (0x000000FF)
#define  HDMI_P2_HDMI_PSDP_dpss(data)                                            (0x000000FF&(data))
#define  HDMI_P2_HDMI_PSDP_get_dpss(data)                                        (0x000000FF&(data))

#define  HDMI_P2_HDMI_SCR                                                       0x1803C090
#define  HDMI_P2_HDMI_SCR_reg_addr                                               "0xB803C090"
#define  HDMI_P2_HDMI_SCR_reg                                                    0xB803C090
#define  HDMI_P2_HDMI_SCR_inst_addr                                              "0x0023"
#define  set_HDMI_P2_HDMI_SCR_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_HDMI_SCR_reg)=data)
#define  get_HDMI_P2_HDMI_SCR_reg                                                (*((volatile unsigned int*)HDMI_P2_HDMI_SCR_reg))
#define  HDMI_P2_HDMI_SCR_packet_header_parsing_mode_shift                       (16)
#define  HDMI_P2_HDMI_SCR_nval_shift                                             (8)
#define  HDMI_P2_HDMI_SCR_no_vs_det_en_shift                                     (6)
#define  HDMI_P2_HDMI_SCR_dvi_reset_ds_cm_en_shift                               (5)
#define  HDMI_P2_HDMI_SCR_packet_ignore_shift                                    (4)
#define  HDMI_P2_HDMI_SCR_mode_shift                                             (3)
#define  HDMI_P2_HDMI_SCR_msmode_shift                                           (2)
#define  HDMI_P2_HDMI_SCR_cabs_shift                                             (1)
#define  HDMI_P2_HDMI_SCR_fcddip_shift                                           (0)
#define  HDMI_P2_HDMI_SCR_packet_header_parsing_mode_mask                        (0x00010000)
#define  HDMI_P2_HDMI_SCR_nval_mask                                              (0x0000FF00)
#define  HDMI_P2_HDMI_SCR_no_vs_det_en_mask                                      (0x00000040)
#define  HDMI_P2_HDMI_SCR_dvi_reset_ds_cm_en_mask                                (0x00000020)
#define  HDMI_P2_HDMI_SCR_packet_ignore_mask                                     (0x00000010)
#define  HDMI_P2_HDMI_SCR_mode_mask                                              (0x00000008)
#define  HDMI_P2_HDMI_SCR_msmode_mask                                            (0x00000004)
#define  HDMI_P2_HDMI_SCR_cabs_mask                                              (0x00000002)
#define  HDMI_P2_HDMI_SCR_fcddip_mask                                            (0x00000001)
#define  HDMI_P2_HDMI_SCR_packet_header_parsing_mode(data)                       (0x00010000&((data)<<16))
#define  HDMI_P2_HDMI_SCR_nval(data)                                             (0x0000FF00&((data)<<8))
#define  HDMI_P2_HDMI_SCR_no_vs_det_en(data)                                     (0x00000040&((data)<<6))
#define  HDMI_P2_HDMI_SCR_dvi_reset_ds_cm_en(data)                               (0x00000020&((data)<<5))
#define  HDMI_P2_HDMI_SCR_packet_ignore(data)                                    (0x00000010&((data)<<4))
#define  HDMI_P2_HDMI_SCR_mode(data)                                             (0x00000008&((data)<<3))
#define  HDMI_P2_HDMI_SCR_msmode(data)                                           (0x00000004&((data)<<2))
#define  HDMI_P2_HDMI_SCR_cabs(data)                                             (0x00000002&((data)<<1))
#define  HDMI_P2_HDMI_SCR_fcddip(data)                                           (0x00000001&(data))
#define  HDMI_P2_HDMI_SCR_get_packet_header_parsing_mode(data)                   ((0x00010000&(data))>>16)
#define  HDMI_P2_HDMI_SCR_get_nval(data)                                         ((0x0000FF00&(data))>>8)
#define  HDMI_P2_HDMI_SCR_get_no_vs_det_en(data)                                 ((0x00000040&(data))>>6)
#define  HDMI_P2_HDMI_SCR_get_dvi_reset_ds_cm_en(data)                           ((0x00000020&(data))>>5)
#define  HDMI_P2_HDMI_SCR_get_packet_ignore(data)                                ((0x00000010&(data))>>4)
#define  HDMI_P2_HDMI_SCR_get_mode(data)                                         ((0x00000008&(data))>>3)
#define  HDMI_P2_HDMI_SCR_get_msmode(data)                                       ((0x00000004&(data))>>2)
#define  HDMI_P2_HDMI_SCR_get_cabs(data)                                         ((0x00000002&(data))>>1)
#define  HDMI_P2_HDMI_SCR_get_fcddip(data)                                       (0x00000001&(data))

#define  HDMI_P2_HDMI_BCHCR                                                     0x1803C094
#define  HDMI_P2_HDMI_BCHCR_reg_addr                                             "0xB803C094"
#define  HDMI_P2_HDMI_BCHCR_reg                                                  0xB803C094
#define  HDMI_P2_HDMI_BCHCR_inst_addr                                            "0x0024"
#define  set_HDMI_P2_HDMI_BCHCR_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_HDMI_BCHCR_reg)=data)
#define  get_HDMI_P2_HDMI_BCHCR_reg                                              (*((volatile unsigned int*)HDMI_P2_HDMI_BCHCR_reg))
#define  HDMI_P2_HDMI_BCHCR_bches2_airq_en_shift                                 (7)
#define  HDMI_P2_HDMI_BCHCR_bches2_irq_en_shift                                  (6)
#define  HDMI_P2_HDMI_BCHCR_bche_shift                                           (3)
#define  HDMI_P2_HDMI_BCHCR_bches_shift                                          (2)
#define  HDMI_P2_HDMI_BCHCR_bches2_shift                                         (1)
#define  HDMI_P2_HDMI_BCHCR_pe_shift                                             (0)
#define  HDMI_P2_HDMI_BCHCR_bches2_airq_en_mask                                  (0x00000080)
#define  HDMI_P2_HDMI_BCHCR_bches2_irq_en_mask                                   (0x00000040)
#define  HDMI_P2_HDMI_BCHCR_bche_mask                                            (0x00000008)
#define  HDMI_P2_HDMI_BCHCR_bches_mask                                           (0x00000004)
#define  HDMI_P2_HDMI_BCHCR_bches2_mask                                          (0x00000002)
#define  HDMI_P2_HDMI_BCHCR_pe_mask                                              (0x00000001)
#define  HDMI_P2_HDMI_BCHCR_bches2_airq_en(data)                                 (0x00000080&((data)<<7))
#define  HDMI_P2_HDMI_BCHCR_bches2_irq_en(data)                                  (0x00000040&((data)<<6))
#define  HDMI_P2_HDMI_BCHCR_bche(data)                                           (0x00000008&((data)<<3))
#define  HDMI_P2_HDMI_BCHCR_bches(data)                                          (0x00000004&((data)<<2))
#define  HDMI_P2_HDMI_BCHCR_bches2(data)                                         (0x00000002&((data)<<1))
#define  HDMI_P2_HDMI_BCHCR_pe(data)                                             (0x00000001&(data))
#define  HDMI_P2_HDMI_BCHCR_get_bches2_airq_en(data)                             ((0x00000080&(data))>>7)
#define  HDMI_P2_HDMI_BCHCR_get_bches2_irq_en(data)                              ((0x00000040&(data))>>6)
#define  HDMI_P2_HDMI_BCHCR_get_bche(data)                                       ((0x00000008&(data))>>3)
#define  HDMI_P2_HDMI_BCHCR_get_bches(data)                                      ((0x00000004&(data))>>2)
#define  HDMI_P2_HDMI_BCHCR_get_bches2(data)                                     ((0x00000002&(data))>>1)
#define  HDMI_P2_HDMI_BCHCR_get_pe(data)                                         (0x00000001&(data))

#define  HDMI_P2_HDMI_AVMCR                                                     0x1803C098
#define  HDMI_P2_HDMI_AVMCR_reg_addr                                             "0xB803C098"
#define  HDMI_P2_HDMI_AVMCR_reg                                                  0xB803C098
#define  HDMI_P2_HDMI_AVMCR_inst_addr                                            "0x0025"
#define  set_HDMI_P2_HDMI_AVMCR_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_HDMI_AVMCR_reg)=data)
#define  get_HDMI_P2_HDMI_AVMCR_reg                                              (*((volatile unsigned int*)HDMI_P2_HDMI_AVMCR_reg))
#define  HDMI_P2_HDMI_AVMCR_avmute_flag_shift                                    (8)
#define  HDMI_P2_HDMI_AVMCR_avmute_win_en_shift                                  (7)
#define  HDMI_P2_HDMI_AVMCR_ve_shift                                             (3)
#define  HDMI_P2_HDMI_AVMCR_avmute_flag_mask                                     (0x00000100)
#define  HDMI_P2_HDMI_AVMCR_avmute_win_en_mask                                   (0x00000080)
#define  HDMI_P2_HDMI_AVMCR_ve_mask                                              (0x00000008)
#define  HDMI_P2_HDMI_AVMCR_avmute_flag(data)                                    (0x00000100&((data)<<8))
#define  HDMI_P2_HDMI_AVMCR_avmute_win_en(data)                                  (0x00000080&((data)<<7))
#define  HDMI_P2_HDMI_AVMCR_ve(data)                                             (0x00000008&((data)<<3))
#define  HDMI_P2_HDMI_AVMCR_get_avmute_flag(data)                                ((0x00000100&(data))>>8)
#define  HDMI_P2_HDMI_AVMCR_get_avmute_win_en(data)                              ((0x00000080&(data))>>7)
#define  HDMI_P2_HDMI_AVMCR_get_ve(data)                                         ((0x00000008&(data))>>3)

#define  HDMI_P2_HDMI_PAMICR                                                    0x1803C0A4
#define  HDMI_P2_HDMI_PAMICR_reg_addr                                            "0xB803C0A4"
#define  HDMI_P2_HDMI_PAMICR_reg                                                 0xB803C0A4
#define  HDMI_P2_HDMI_PAMICR_inst_addr                                           "0x0026"
#define  set_HDMI_P2_HDMI_PAMICR_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_HDMI_PAMICR_reg)=data)
#define  get_HDMI_P2_HDMI_PAMICR_reg                                             (*((volatile unsigned int*)HDMI_P2_HDMI_PAMICR_reg))
#define  HDMI_P2_HDMI_PAMICR_aicpvsb_shift                                       (16)
#define  HDMI_P2_HDMI_PAMICR_icpvsb_shift                                        (0)
#define  HDMI_P2_HDMI_PAMICR_aicpvsb_mask                                        (0x00FF0000)
#define  HDMI_P2_HDMI_PAMICR_icpvsb_mask                                         (0x00007FFF)
#define  HDMI_P2_HDMI_PAMICR_aicpvsb(data)                                       (0x00FF0000&((data)<<16))
#define  HDMI_P2_HDMI_PAMICR_icpvsb(data)                                        (0x00007FFF&(data))
#define  HDMI_P2_HDMI_PAMICR_get_aicpvsb(data)                                   ((0x00FF0000&(data))>>16)
#define  HDMI_P2_HDMI_PAMICR_get_icpvsb(data)                                    (0x00007FFF&(data))

#define  HDMI_P2_HDMI_PTRSV1                                                    0x1803C0A8
#define  HDMI_P2_HDMI_PTRSV1_reg_addr                                            "0xB803C0A8"
#define  HDMI_P2_HDMI_PTRSV1_reg                                                 0xB803C0A8
#define  HDMI_P2_HDMI_PTRSV1_inst_addr                                           "0x0027"
#define  set_HDMI_P2_HDMI_PTRSV1_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_HDMI_PTRSV1_reg)=data)
#define  get_HDMI_P2_HDMI_PTRSV1_reg                                             (*((volatile unsigned int*)HDMI_P2_HDMI_PTRSV1_reg))
#define  HDMI_P2_HDMI_PTRSV1_pt3_shift                                           (24)
#define  HDMI_P2_HDMI_PTRSV1_pt2_shift                                           (16)
#define  HDMI_P2_HDMI_PTRSV1_pt1_shift                                           (8)
#define  HDMI_P2_HDMI_PTRSV1_pt0_shift                                           (0)
#define  HDMI_P2_HDMI_PTRSV1_pt3_mask                                            (0xFF000000)
#define  HDMI_P2_HDMI_PTRSV1_pt2_mask                                            (0x00FF0000)
#define  HDMI_P2_HDMI_PTRSV1_pt1_mask                                            (0x0000FF00)
#define  HDMI_P2_HDMI_PTRSV1_pt0_mask                                            (0x000000FF)
#define  HDMI_P2_HDMI_PTRSV1_pt3(data)                                           (0xFF000000&((data)<<24))
#define  HDMI_P2_HDMI_PTRSV1_pt2(data)                                           (0x00FF0000&((data)<<16))
#define  HDMI_P2_HDMI_PTRSV1_pt1(data)                                           (0x0000FF00&((data)<<8))
#define  HDMI_P2_HDMI_PTRSV1_pt0(data)                                           (0x000000FF&(data))
#define  HDMI_P2_HDMI_PTRSV1_get_pt3(data)                                       ((0xFF000000&(data))>>24)
#define  HDMI_P2_HDMI_PTRSV1_get_pt2(data)                                       ((0x00FF0000&(data))>>16)
#define  HDMI_P2_HDMI_PTRSV1_get_pt1(data)                                       ((0x0000FF00&(data))>>8)
#define  HDMI_P2_HDMI_PTRSV1_get_pt0(data)                                       (0x000000FF&(data))

#define  HDMI_P2_HDMI_PTRSV2                                                    0x1803C0AC
#define  HDMI_P2_HDMI_PTRSV2_reg_addr                                            "0xB803C0AC"
#define  HDMI_P2_HDMI_PTRSV2_reg                                                 0xB803C0AC
#define  HDMI_P2_HDMI_PTRSV2_inst_addr                                           "0x0028"
#define  set_HDMI_P2_HDMI_PTRSV2_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_HDMI_PTRSV2_reg)=data)
#define  get_HDMI_P2_HDMI_PTRSV2_reg                                             (*((volatile unsigned int*)HDMI_P2_HDMI_PTRSV2_reg))
#define  HDMI_P2_HDMI_PTRSV2_pt3_oui_1st_shift                                   (24)
#define  HDMI_P2_HDMI_PTRSV2_pt2_oui_1st_shift                                   (16)
#define  HDMI_P2_HDMI_PTRSV2_pt1_oui_1st_shift                                   (8)
#define  HDMI_P2_HDMI_PTRSV2_pt0_oui_1st_shift                                   (0)
#define  HDMI_P2_HDMI_PTRSV2_pt3_oui_1st_mask                                    (0xFF000000)
#define  HDMI_P2_HDMI_PTRSV2_pt2_oui_1st_mask                                    (0x00FF0000)
#define  HDMI_P2_HDMI_PTRSV2_pt1_oui_1st_mask                                    (0x0000FF00)
#define  HDMI_P2_HDMI_PTRSV2_pt0_oui_1st_mask                                    (0x000000FF)
#define  HDMI_P2_HDMI_PTRSV2_pt3_oui_1st(data)                                   (0xFF000000&((data)<<24))
#define  HDMI_P2_HDMI_PTRSV2_pt2_oui_1st(data)                                   (0x00FF0000&((data)<<16))
#define  HDMI_P2_HDMI_PTRSV2_pt1_oui_1st(data)                                   (0x0000FF00&((data)<<8))
#define  HDMI_P2_HDMI_PTRSV2_pt0_oui_1st(data)                                   (0x000000FF&(data))
#define  HDMI_P2_HDMI_PTRSV2_get_pt3_oui_1st(data)                               ((0xFF000000&(data))>>24)
#define  HDMI_P2_HDMI_PTRSV2_get_pt2_oui_1st(data)                               ((0x00FF0000&(data))>>16)
#define  HDMI_P2_HDMI_PTRSV2_get_pt1_oui_1st(data)                               ((0x0000FF00&(data))>>8)
#define  HDMI_P2_HDMI_PTRSV2_get_pt0_oui_1st(data)                               (0x000000FF&(data))

#define  HDMI_P2_HDMI_PTRSV3                                                    0x1803C0B0
#define  HDMI_P2_HDMI_PTRSV3_reg_addr                                            "0xB803C0B0"
#define  HDMI_P2_HDMI_PTRSV3_reg                                                 0xB803C0B0
#define  HDMI_P2_HDMI_PTRSV3_inst_addr                                           "0x0029"
#define  set_HDMI_P2_HDMI_PTRSV3_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_HDMI_PTRSV3_reg)=data)
#define  get_HDMI_P2_HDMI_PTRSV3_reg                                             (*((volatile unsigned int*)HDMI_P2_HDMI_PTRSV3_reg))
#define  HDMI_P2_HDMI_PTRSV3_pt3_recognize_oui_en_shift                          (3)
#define  HDMI_P2_HDMI_PTRSV3_pt2_recognize_oui_en_shift                          (2)
#define  HDMI_P2_HDMI_PTRSV3_pt1_recognize_oui_en_shift                          (1)
#define  HDMI_P2_HDMI_PTRSV3_pt0_recognize_oui_en_shift                          (0)
#define  HDMI_P2_HDMI_PTRSV3_pt3_recognize_oui_en_mask                           (0x00000008)
#define  HDMI_P2_HDMI_PTRSV3_pt2_recognize_oui_en_mask                           (0x00000004)
#define  HDMI_P2_HDMI_PTRSV3_pt1_recognize_oui_en_mask                           (0x00000002)
#define  HDMI_P2_HDMI_PTRSV3_pt0_recognize_oui_en_mask                           (0x00000001)
#define  HDMI_P2_HDMI_PTRSV3_pt3_recognize_oui_en(data)                          (0x00000008&((data)<<3))
#define  HDMI_P2_HDMI_PTRSV3_pt2_recognize_oui_en(data)                          (0x00000004&((data)<<2))
#define  HDMI_P2_HDMI_PTRSV3_pt1_recognize_oui_en(data)                          (0x00000002&((data)<<1))
#define  HDMI_P2_HDMI_PTRSV3_pt0_recognize_oui_en(data)                          (0x00000001&(data))
#define  HDMI_P2_HDMI_PTRSV3_get_pt3_recognize_oui_en(data)                      ((0x00000008&(data))>>3)
#define  HDMI_P2_HDMI_PTRSV3_get_pt2_recognize_oui_en(data)                      ((0x00000004&(data))>>2)
#define  HDMI_P2_HDMI_PTRSV3_get_pt1_recognize_oui_en(data)                      ((0x00000002&(data))>>1)
#define  HDMI_P2_HDMI_PTRSV3_get_pt0_recognize_oui_en(data)                      (0x00000001&(data))

#define  HDMI_P2_HDMI_PVGCR0                                                    0x1803C0B4
#define  HDMI_P2_HDMI_PVGCR0_reg_addr                                            "0xB803C0B4"
#define  HDMI_P2_HDMI_PVGCR0_reg                                                 0xB803C0B4
#define  HDMI_P2_HDMI_PVGCR0_inst_addr                                           "0x002A"
#define  set_HDMI_P2_HDMI_PVGCR0_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_HDMI_PVGCR0_reg)=data)
#define  get_HDMI_P2_HDMI_PVGCR0_reg                                             (*((volatile unsigned int*)HDMI_P2_HDMI_PVGCR0_reg))
#define  HDMI_P2_HDMI_PVGCR0_pvsef_shift                                         (0)
#define  HDMI_P2_HDMI_PVGCR0_pvsef_mask                                          (0xFFFFFFFF)
#define  HDMI_P2_HDMI_PVGCR0_pvsef(data)                                         (0xFFFFFFFF&(data))
#define  HDMI_P2_HDMI_PVGCR0_get_pvsef(data)                                     (0xFFFFFFFF&(data))

#define  HDMI_P2_HDMI_PVSR0                                                     0x1803C0B8
#define  HDMI_P2_HDMI_PVSR0_reg_addr                                             "0xB803C0B8"
#define  HDMI_P2_HDMI_PVSR0_reg                                                  0xB803C0B8
#define  HDMI_P2_HDMI_PVSR0_inst_addr                                            "0x002B"
#define  set_HDMI_P2_HDMI_PVSR0_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_HDMI_PVSR0_reg)=data)
#define  get_HDMI_P2_HDMI_PVSR0_reg                                              (*((volatile unsigned int*)HDMI_P2_HDMI_PVSR0_reg))
#define  HDMI_P2_HDMI_PVSR0_pvs_shift                                            (0)
#define  HDMI_P2_HDMI_PVSR0_pvs_mask                                             (0xFFFFFFFF)
#define  HDMI_P2_HDMI_PVSR0_pvs(data)                                            (0xFFFFFFFF&(data))
#define  HDMI_P2_HDMI_PVSR0_get_pvs(data)                                        (0xFFFFFFFF&(data))

#define  HDMI_P2_HDMI_VCR                                                       0x1803C0BC
#define  HDMI_P2_HDMI_VCR_reg_addr                                               "0xB803C0BC"
#define  HDMI_P2_HDMI_VCR_reg                                                    0xB803C0BC
#define  HDMI_P2_HDMI_VCR_inst_addr                                              "0x002C"
#define  set_HDMI_P2_HDMI_VCR_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_HDMI_VCR_reg)=data)
#define  get_HDMI_P2_HDMI_VCR_reg                                                (*((volatile unsigned int*)HDMI_P2_HDMI_VCR_reg))
#define  HDMI_P2_HDMI_VCR_hdmi_field_shift                                       (29)
#define  HDMI_P2_HDMI_VCR_int_pro_chg_flag_shift                                 (28)
#define  HDMI_P2_HDMI_VCR_int_pro_chg_int_en_shift                               (26)
#define  HDMI_P2_HDMI_VCR_bg_gck_shift                                           (24)
#define  HDMI_P2_HDMI_VCR_iclk_sel_shift                                         (22)
#define  HDMI_P2_HDMI_VCR_csc_r_shift                                            (19)
#define  HDMI_P2_HDMI_VCR_hdirq_shift                                            (18)
#define  HDMI_P2_HDMI_VCR_csam_shift                                             (17)
#define  HDMI_P2_HDMI_VCR_csc_shift                                              (14)
#define  HDMI_P2_HDMI_VCR_field_decide_sel_shift                                 (13)
#define  HDMI_P2_HDMI_VCR_prdsam_shift                                           (12)
#define  HDMI_P2_HDMI_VCR_dsc_r_shift                                            (8)
#define  HDMI_P2_HDMI_VCR_eoi_shift                                              (7)
#define  HDMI_P2_HDMI_VCR_eot_shift                                              (6)
#define  HDMI_P2_HDMI_VCR_se_shift                                               (5)
#define  HDMI_P2_HDMI_VCR_rs_shift                                               (4)
#define  HDMI_P2_HDMI_VCR_dsc_shift                                              (0)
#define  HDMI_P2_HDMI_VCR_hdmi_field_mask                                        (0x20000000)
#define  HDMI_P2_HDMI_VCR_int_pro_chg_flag_mask                                  (0x10000000)
#define  HDMI_P2_HDMI_VCR_int_pro_chg_int_en_mask                                (0x04000000)
#define  HDMI_P2_HDMI_VCR_bg_gck_mask                                            (0x01000000)
#define  HDMI_P2_HDMI_VCR_iclk_sel_mask                                          (0x00C00000)
#define  HDMI_P2_HDMI_VCR_csc_r_mask                                             (0x00380000)
#define  HDMI_P2_HDMI_VCR_hdirq_mask                                             (0x00040000)
#define  HDMI_P2_HDMI_VCR_csam_mask                                              (0x00020000)
#define  HDMI_P2_HDMI_VCR_csc_mask                                               (0x0001C000)
#define  HDMI_P2_HDMI_VCR_field_decide_sel_mask                                  (0x00002000)
#define  HDMI_P2_HDMI_VCR_prdsam_mask                                            (0x00001000)
#define  HDMI_P2_HDMI_VCR_dsc_r_mask                                             (0x00000F00)
#define  HDMI_P2_HDMI_VCR_eoi_mask                                               (0x00000080)
#define  HDMI_P2_HDMI_VCR_eot_mask                                               (0x00000040)
#define  HDMI_P2_HDMI_VCR_se_mask                                                (0x00000020)
#define  HDMI_P2_HDMI_VCR_rs_mask                                                (0x00000010)
#define  HDMI_P2_HDMI_VCR_dsc_mask                                               (0x0000000F)
#define  HDMI_P2_HDMI_VCR_hdmi_field(data)                                       (0x20000000&((data)<<29))
#define  HDMI_P2_HDMI_VCR_int_pro_chg_flag(data)                                 (0x10000000&((data)<<28))
#define  HDMI_P2_HDMI_VCR_int_pro_chg_int_en(data)                               (0x04000000&((data)<<26))
#define  HDMI_P2_HDMI_VCR_bg_gck(data)                                           (0x01000000&((data)<<24))
#define  HDMI_P2_HDMI_VCR_iclk_sel(data)                                         (0x00C00000&((data)<<22))
#define  HDMI_P2_HDMI_VCR_csc_r(data)                                            (0x00380000&((data)<<19))
#define  HDMI_P2_HDMI_VCR_hdirq(data)                                            (0x00040000&((data)<<18))
#define  HDMI_P2_HDMI_VCR_csam(data)                                             (0x00020000&((data)<<17))
#define  HDMI_P2_HDMI_VCR_csc(data)                                              (0x0001C000&((data)<<14))
#define  HDMI_P2_HDMI_VCR_field_decide_sel(data)                                 (0x00002000&((data)<<13))
#define  HDMI_P2_HDMI_VCR_prdsam(data)                                           (0x00001000&((data)<<12))
#define  HDMI_P2_HDMI_VCR_dsc_r(data)                                            (0x00000F00&((data)<<8))
#define  HDMI_P2_HDMI_VCR_eoi(data)                                              (0x00000080&((data)<<7))
#define  HDMI_P2_HDMI_VCR_eot(data)                                              (0x00000040&((data)<<6))
#define  HDMI_P2_HDMI_VCR_se(data)                                               (0x00000020&((data)<<5))
#define  HDMI_P2_HDMI_VCR_rs(data)                                               (0x00000010&((data)<<4))
#define  HDMI_P2_HDMI_VCR_dsc(data)                                              (0x0000000F&(data))
#define  HDMI_P2_HDMI_VCR_get_hdmi_field(data)                                   ((0x20000000&(data))>>29)
#define  HDMI_P2_HDMI_VCR_get_int_pro_chg_flag(data)                             ((0x10000000&(data))>>28)
#define  HDMI_P2_HDMI_VCR_get_int_pro_chg_int_en(data)                           ((0x04000000&(data))>>26)
#define  HDMI_P2_HDMI_VCR_get_bg_gck(data)                                       ((0x01000000&(data))>>24)
#define  HDMI_P2_HDMI_VCR_get_iclk_sel(data)                                     ((0x00C00000&(data))>>22)
#define  HDMI_P2_HDMI_VCR_get_csc_r(data)                                        ((0x00380000&(data))>>19)
#define  HDMI_P2_HDMI_VCR_get_hdirq(data)                                        ((0x00040000&(data))>>18)
#define  HDMI_P2_HDMI_VCR_get_csam(data)                                         ((0x00020000&(data))>>17)
#define  HDMI_P2_HDMI_VCR_get_csc(data)                                          ((0x0001C000&(data))>>14)
#define  HDMI_P2_HDMI_VCR_get_field_decide_sel(data)                             ((0x00002000&(data))>>13)
#define  HDMI_P2_HDMI_VCR_get_prdsam(data)                                       ((0x00001000&(data))>>12)
#define  HDMI_P2_HDMI_VCR_get_dsc_r(data)                                        ((0x00000F00&(data))>>8)
#define  HDMI_P2_HDMI_VCR_get_eoi(data)                                          ((0x00000080&(data))>>7)
#define  HDMI_P2_HDMI_VCR_get_eot(data)                                          ((0x00000040&(data))>>6)
#define  HDMI_P2_HDMI_VCR_get_se(data)                                           ((0x00000020&(data))>>5)
#define  HDMI_P2_HDMI_VCR_get_rs(data)                                           ((0x00000010&(data))>>4)
#define  HDMI_P2_HDMI_VCR_get_dsc(data)                                          (0x0000000F&(data))

#define  HDMI_P2_HDMI_ACRCR                                                     0x1803C0C0
#define  HDMI_P2_HDMI_ACRCR_reg_addr                                             "0xB803C0C0"
#define  HDMI_P2_HDMI_ACRCR_reg                                                  0xB803C0C0
#define  HDMI_P2_HDMI_ACRCR_inst_addr                                            "0x002D"
#define  set_HDMI_P2_HDMI_ACRCR_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_HDMI_ACRCR_reg)=data)
#define  get_HDMI_P2_HDMI_ACRCR_reg                                              (*((volatile unsigned int*)HDMI_P2_HDMI_ACRCR_reg))
#define  HDMI_P2_HDMI_ACRCR_pucnr_shift                                          (1)
#define  HDMI_P2_HDMI_ACRCR_mode_shift                                           (0)
#define  HDMI_P2_HDMI_ACRCR_pucnr_mask                                           (0x00000002)
#define  HDMI_P2_HDMI_ACRCR_mode_mask                                            (0x00000001)
#define  HDMI_P2_HDMI_ACRCR_pucnr(data)                                          (0x00000002&((data)<<1))
#define  HDMI_P2_HDMI_ACRCR_mode(data)                                           (0x00000001&(data))
#define  HDMI_P2_HDMI_ACRCR_get_pucnr(data)                                      ((0x00000002&(data))>>1)
#define  HDMI_P2_HDMI_ACRCR_get_mode(data)                                       (0x00000001&(data))

#define  HDMI_P2_HDMI_ACRSR0                                                    0x1803C0C4
#define  HDMI_P2_HDMI_ACRSR0_reg_addr                                            "0xB803C0C4"
#define  HDMI_P2_HDMI_ACRSR0_reg                                                 0xB803C0C4
#define  HDMI_P2_HDMI_ACRSR0_inst_addr                                           "0x002E"
#define  set_HDMI_P2_HDMI_ACRSR0_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_HDMI_ACRSR0_reg)=data)
#define  get_HDMI_P2_HDMI_ACRSR0_reg                                             (*((volatile unsigned int*)HDMI_P2_HDMI_ACRSR0_reg))
#define  HDMI_P2_HDMI_ACRSR0_cts_shift                                           (0)
#define  HDMI_P2_HDMI_ACRSR0_cts_mask                                            (0x000FFFFF)
#define  HDMI_P2_HDMI_ACRSR0_cts(data)                                           (0x000FFFFF&(data))
#define  HDMI_P2_HDMI_ACRSR0_get_cts(data)                                       (0x000FFFFF&(data))

#define  HDMI_P2_HDMI_ACRSR1                                                    0x1803C0C8
#define  HDMI_P2_HDMI_ACRSR1_reg_addr                                            "0xB803C0C8"
#define  HDMI_P2_HDMI_ACRSR1_reg                                                 0xB803C0C8
#define  HDMI_P2_HDMI_ACRSR1_inst_addr                                           "0x002F"
#define  set_HDMI_P2_HDMI_ACRSR1_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_HDMI_ACRSR1_reg)=data)
#define  get_HDMI_P2_HDMI_ACRSR1_reg                                             (*((volatile unsigned int*)HDMI_P2_HDMI_ACRSR1_reg))
#define  HDMI_P2_HDMI_ACRSR1_n_shift                                             (0)
#define  HDMI_P2_HDMI_ACRSR1_n_mask                                              (0x000FFFFF)
#define  HDMI_P2_HDMI_ACRSR1_n(data)                                             (0x000FFFFF&(data))
#define  HDMI_P2_HDMI_ACRSR1_get_n(data)                                         (0x000FFFFF&(data))

#define  HDMI_P2_HDMI_INTCR                                                     0x1803C0CC
#define  HDMI_P2_HDMI_INTCR_reg_addr                                             "0xB803C0CC"
#define  HDMI_P2_HDMI_INTCR_reg                                                  0xB803C0CC
#define  HDMI_P2_HDMI_INTCR_inst_addr                                            "0x0030"
#define  set_HDMI_P2_HDMI_INTCR_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_HDMI_INTCR_reg)=data)
#define  get_HDMI_P2_HDMI_INTCR_reg                                              (*((volatile unsigned int*)HDMI_P2_HDMI_INTCR_reg))
#define  HDMI_P2_HDMI_INTCR_airq_gen_shift                                       (12)
#define  HDMI_P2_HDMI_INTCR_irq_gen_shift                                        (11)
#define  HDMI_P2_HDMI_INTCR_apending_shift                                       (10)
#define  HDMI_P2_HDMI_INTCR_pending_shift                                        (9)
#define  HDMI_P2_HDMI_INTCR_aavmute_shift                                        (8)
#define  HDMI_P2_HDMI_INTCR_avmute_shift                                         (7)
#define  HDMI_P2_HDMI_INTCR_avc_shift                                            (1)
#define  HDMI_P2_HDMI_INTCR_vc_shift                                             (0)
#define  HDMI_P2_HDMI_INTCR_airq_gen_mask                                        (0x00001000)
#define  HDMI_P2_HDMI_INTCR_irq_gen_mask                                         (0x00000800)
#define  HDMI_P2_HDMI_INTCR_apending_mask                                        (0x00000400)
#define  HDMI_P2_HDMI_INTCR_pending_mask                                         (0x00000200)
#define  HDMI_P2_HDMI_INTCR_aavmute_mask                                         (0x00000100)
#define  HDMI_P2_HDMI_INTCR_avmute_mask                                          (0x00000080)
#define  HDMI_P2_HDMI_INTCR_avc_mask                                             (0x00000002)
#define  HDMI_P2_HDMI_INTCR_vc_mask                                              (0x00000001)
#define  HDMI_P2_HDMI_INTCR_airq_gen(data)                                       (0x00001000&((data)<<12))
#define  HDMI_P2_HDMI_INTCR_irq_gen(data)                                        (0x00000800&((data)<<11))
#define  HDMI_P2_HDMI_INTCR_apending(data)                                       (0x00000400&((data)<<10))
#define  HDMI_P2_HDMI_INTCR_pending(data)                                        (0x00000200&((data)<<9))
#define  HDMI_P2_HDMI_INTCR_aavmute(data)                                        (0x00000100&((data)<<8))
#define  HDMI_P2_HDMI_INTCR_avmute(data)                                         (0x00000080&((data)<<7))
#define  HDMI_P2_HDMI_INTCR_avc(data)                                            (0x00000002&((data)<<1))
#define  HDMI_P2_HDMI_INTCR_vc(data)                                             (0x00000001&(data))
#define  HDMI_P2_HDMI_INTCR_get_airq_gen(data)                                   ((0x00001000&(data))>>12)
#define  HDMI_P2_HDMI_INTCR_get_irq_gen(data)                                    ((0x00000800&(data))>>11)
#define  HDMI_P2_HDMI_INTCR_get_apending(data)                                   ((0x00000400&(data))>>10)
#define  HDMI_P2_HDMI_INTCR_get_pending(data)                                    ((0x00000200&(data))>>9)
#define  HDMI_P2_HDMI_INTCR_get_aavmute(data)                                    ((0x00000100&(data))>>8)
#define  HDMI_P2_HDMI_INTCR_get_avmute(data)                                     ((0x00000080&(data))>>7)
#define  HDMI_P2_HDMI_INTCR_get_avc(data)                                        ((0x00000002&(data))>>1)
#define  HDMI_P2_HDMI_INTCR_get_vc(data)                                         (0x00000001&(data))

#define  HDMI_P2_HDMI_BCSR                                                      0x1803C0D0
#define  HDMI_P2_HDMI_BCSR_reg_addr                                              "0xB803C0D0"
#define  HDMI_P2_HDMI_BCSR_reg                                                   0xB803C0D0
#define  HDMI_P2_HDMI_BCSR_inst_addr                                             "0x0031"
#define  set_HDMI_P2_HDMI_BCSR_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_HDMI_BCSR_reg)=data)
#define  get_HDMI_P2_HDMI_BCSR_reg                                               (*((volatile unsigned int*)HDMI_P2_HDMI_BCSR_reg))
#define  HDMI_P2_HDMI_BCSR_nvlgb_shift                                           (5)
#define  HDMI_P2_HDMI_BCSR_nalgb_shift                                           (4)
#define  HDMI_P2_HDMI_BCSR_natgb_shift                                           (3)
#define  HDMI_P2_HDMI_BCSR_ngb_shift                                             (2)
#define  HDMI_P2_HDMI_BCSR_pe_shift                                              (1)
#define  HDMI_P2_HDMI_BCSR_gcp_shift                                             (0)
#define  HDMI_P2_HDMI_BCSR_nvlgb_mask                                            (0x00000020)
#define  HDMI_P2_HDMI_BCSR_nalgb_mask                                            (0x00000010)
#define  HDMI_P2_HDMI_BCSR_natgb_mask                                            (0x00000008)
#define  HDMI_P2_HDMI_BCSR_ngb_mask                                              (0x00000004)
#define  HDMI_P2_HDMI_BCSR_pe_mask                                               (0x00000002)
#define  HDMI_P2_HDMI_BCSR_gcp_mask                                              (0x00000001)
#define  HDMI_P2_HDMI_BCSR_nvlgb(data)                                           (0x00000020&((data)<<5))
#define  HDMI_P2_HDMI_BCSR_nalgb(data)                                           (0x00000010&((data)<<4))
#define  HDMI_P2_HDMI_BCSR_natgb(data)                                           (0x00000008&((data)<<3))
#define  HDMI_P2_HDMI_BCSR_ngb(data)                                             (0x00000004&((data)<<2))
#define  HDMI_P2_HDMI_BCSR_pe(data)                                              (0x00000002&((data)<<1))
#define  HDMI_P2_HDMI_BCSR_gcp(data)                                             (0x00000001&(data))
#define  HDMI_P2_HDMI_BCSR_get_nvlgb(data)                                       ((0x00000020&(data))>>5)
#define  HDMI_P2_HDMI_BCSR_get_nalgb(data)                                       ((0x00000010&(data))>>4)
#define  HDMI_P2_HDMI_BCSR_get_natgb(data)                                       ((0x00000008&(data))>>3)
#define  HDMI_P2_HDMI_BCSR_get_ngb(data)                                         ((0x00000004&(data))>>2)
#define  HDMI_P2_HDMI_BCSR_get_pe(data)                                          ((0x00000002&(data))>>1)
#define  HDMI_P2_HDMI_BCSR_get_gcp(data)                                         (0x00000001&(data))

#define  HDMI_P2_HDMI_ASR0                                                      0x1803C0D4
#define  HDMI_P2_HDMI_ASR0_reg_addr                                              "0xB803C0D4"
#define  HDMI_P2_HDMI_ASR0_reg                                                   0xB803C0D4
#define  HDMI_P2_HDMI_ASR0_inst_addr                                             "0x0032"
#define  set_HDMI_P2_HDMI_ASR0_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_HDMI_ASR0_reg)=data)
#define  get_HDMI_P2_HDMI_ASR0_reg                                               (*((volatile unsigned int*)HDMI_P2_HDMI_ASR0_reg))
#define  HDMI_P2_HDMI_ASR0_fsre_shift                                            (2)
#define  HDMI_P2_HDMI_ASR0_fsif_shift                                            (1)
#define  HDMI_P2_HDMI_ASR0_fsre_mask                                             (0x00000004)
#define  HDMI_P2_HDMI_ASR0_fsif_mask                                             (0x00000002)
#define  HDMI_P2_HDMI_ASR0_fsre(data)                                            (0x00000004&((data)<<2))
#define  HDMI_P2_HDMI_ASR0_fsif(data)                                            (0x00000002&((data)<<1))
#define  HDMI_P2_HDMI_ASR0_get_fsre(data)                                        ((0x00000004&(data))>>2)
#define  HDMI_P2_HDMI_ASR0_get_fsif(data)                                        ((0x00000002&(data))>>1)

#define  HDMI_P2_HDMI_ASR1                                                      0x1803C0D8
#define  HDMI_P2_HDMI_ASR1_reg_addr                                              "0xB803C0D8"
#define  HDMI_P2_HDMI_ASR1_reg                                                   0xB803C0D8
#define  HDMI_P2_HDMI_ASR1_inst_addr                                             "0x0033"
#define  set_HDMI_P2_HDMI_ASR1_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_HDMI_ASR1_reg)=data)
#define  get_HDMI_P2_HDMI_ASR1_reg                                               (*((volatile unsigned int*)HDMI_P2_HDMI_ASR1_reg))
#define  HDMI_P2_HDMI_ASR1_fbif_shift                                            (8)
#define  HDMI_P2_HDMI_ASR1_fbif_mask                                             (0x00000700)
#define  HDMI_P2_HDMI_ASR1_fbif(data)                                            (0x00000700&((data)<<8))
#define  HDMI_P2_HDMI_ASR1_get_fbif(data)                                        ((0x00000700&(data))>>8)

#define  HDMI_P2_HDMI_VIDEO_FORMAT                                              0x1803C0DC
#define  HDMI_P2_HDMI_VIDEO_FORMAT_reg_addr                                      "0xB803C0DC"
#define  HDMI_P2_HDMI_VIDEO_FORMAT_reg                                           0xB803C0DC
#define  HDMI_P2_HDMI_VIDEO_FORMAT_inst_addr                                     "0x0034"
#define  set_HDMI_P2_HDMI_VIDEO_FORMAT_reg(data)                                 (*((volatile unsigned int*)HDMI_P2_HDMI_VIDEO_FORMAT_reg)=data)
#define  get_HDMI_P2_HDMI_VIDEO_FORMAT_reg                                       (*((volatile unsigned int*)HDMI_P2_HDMI_VIDEO_FORMAT_reg))
#define  HDMI_P2_HDMI_VIDEO_FORMAT_hvf_shift                                     (8)
#define  HDMI_P2_HDMI_VIDEO_FORMAT_hdmi_vic_shift                                (0)
#define  HDMI_P2_HDMI_VIDEO_FORMAT_hvf_mask                                      (0x00000700)
#define  HDMI_P2_HDMI_VIDEO_FORMAT_hdmi_vic_mask                                 (0x000000FF)
#define  HDMI_P2_HDMI_VIDEO_FORMAT_hvf(data)                                     (0x00000700&((data)<<8))
#define  HDMI_P2_HDMI_VIDEO_FORMAT_hdmi_vic(data)                                (0x000000FF&(data))
#define  HDMI_P2_HDMI_VIDEO_FORMAT_get_hvf(data)                                 ((0x00000700&(data))>>8)
#define  HDMI_P2_HDMI_VIDEO_FORMAT_get_hdmi_vic(data)                            (0x000000FF&(data))

#define  HDMI_P2_HDMI_3D_FORMAT                                                 0x1803C0E0
#define  HDMI_P2_HDMI_3D_FORMAT_reg_addr                                         "0xB803C0E0"
#define  HDMI_P2_HDMI_3D_FORMAT_reg                                              0xB803C0E0
#define  HDMI_P2_HDMI_3D_FORMAT_inst_addr                                        "0x0035"
#define  set_HDMI_P2_HDMI_3D_FORMAT_reg(data)                                    (*((volatile unsigned int*)HDMI_P2_HDMI_3D_FORMAT_reg)=data)
#define  get_HDMI_P2_HDMI_3D_FORMAT_reg                                          (*((volatile unsigned int*)HDMI_P2_HDMI_3D_FORMAT_reg))
#define  HDMI_P2_HDMI_3D_FORMAT_hdmi_3d_ext_data_shift                           (12)
#define  HDMI_P2_HDMI_3D_FORMAT_hdmi_3d_metadata_type_shift                      (9)
#define  HDMI_P2_HDMI_3D_FORMAT_hdmi_3d_structure_shift                          (4)
#define  HDMI_P2_HDMI_3D_FORMAT_hdmi_3d_meta_present_shift                       (3)
#define  HDMI_P2_HDMI_3D_FORMAT_hdmi_3d_ext_data_mask                            (0x0000F000)
#define  HDMI_P2_HDMI_3D_FORMAT_hdmi_3d_metadata_type_mask                       (0x00000E00)
#define  HDMI_P2_HDMI_3D_FORMAT_hdmi_3d_structure_mask                           (0x000000F0)
#define  HDMI_P2_HDMI_3D_FORMAT_hdmi_3d_meta_present_mask                        (0x00000008)
#define  HDMI_P2_HDMI_3D_FORMAT_hdmi_3d_ext_data(data)                           (0x0000F000&((data)<<12))
#define  HDMI_P2_HDMI_3D_FORMAT_hdmi_3d_metadata_type(data)                      (0x00000E00&((data)<<9))
#define  HDMI_P2_HDMI_3D_FORMAT_hdmi_3d_structure(data)                          (0x000000F0&((data)<<4))
#define  HDMI_P2_HDMI_3D_FORMAT_hdmi_3d_meta_present(data)                       (0x00000008&((data)<<3))
#define  HDMI_P2_HDMI_3D_FORMAT_get_hdmi_3d_ext_data(data)                       ((0x0000F000&(data))>>12)
#define  HDMI_P2_HDMI_3D_FORMAT_get_hdmi_3d_metadata_type(data)                  ((0x00000E00&(data))>>9)
#define  HDMI_P2_HDMI_3D_FORMAT_get_hdmi_3d_structure(data)                      ((0x000000F0&(data))>>4)
#define  HDMI_P2_HDMI_3D_FORMAT_get_hdmi_3d_meta_present(data)                   ((0x00000008&(data))>>3)

#define  HDMI_P2_HDMI_FVS                                                       0x1803C0E4
#define  HDMI_P2_HDMI_FVS_reg_addr                                               "0xB803C0E4"
#define  HDMI_P2_HDMI_FVS_reg                                                    0xB803C0E4
#define  HDMI_P2_HDMI_FVS_inst_addr                                              "0x0036"
#define  set_HDMI_P2_HDMI_FVS_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_HDMI_FVS_reg)=data)
#define  get_HDMI_P2_HDMI_FVS_reg                                                (*((volatile unsigned int*)HDMI_P2_HDMI_FVS_reg))
#define  HDMI_P2_HDMI_FVS_allm_mode_shift                                        (4)
#define  HDMI_P2_HDMI_FVS_ccbpc_shift                                            (0)
#define  HDMI_P2_HDMI_FVS_allm_mode_mask                                         (0x00000010)
#define  HDMI_P2_HDMI_FVS_ccbpc_mask                                             (0x0000000F)
#define  HDMI_P2_HDMI_FVS_allm_mode(data)                                        (0x00000010&((data)<<4))
#define  HDMI_P2_HDMI_FVS_ccbpc(data)                                            (0x0000000F&(data))
#define  HDMI_P2_HDMI_FVS_get_allm_mode(data)                                    ((0x00000010&(data))>>4)
#define  HDMI_P2_HDMI_FVS_get_ccbpc(data)                                        (0x0000000F&(data))

#define  HDMI_P2_HDMI_DRM                                                       0x1803C0E8
#define  HDMI_P2_HDMI_DRM_reg_addr                                               "0xB803C0E8"
#define  HDMI_P2_HDMI_DRM_reg                                                    0xB803C0E8
#define  HDMI_P2_HDMI_DRM_inst_addr                                              "0x0037"
#define  set_HDMI_P2_HDMI_DRM_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_HDMI_DRM_reg)=data)
#define  get_HDMI_P2_HDMI_DRM_reg                                                (*((volatile unsigned int*)HDMI_P2_HDMI_DRM_reg))
#define  HDMI_P2_HDMI_DRM_static_metadata_descriptor_id_shift                    (4)
#define  HDMI_P2_HDMI_DRM_eotf_shift                                             (0)
#define  HDMI_P2_HDMI_DRM_static_metadata_descriptor_id_mask                     (0x00000070)
#define  HDMI_P2_HDMI_DRM_eotf_mask                                              (0x00000007)
#define  HDMI_P2_HDMI_DRM_static_metadata_descriptor_id(data)                    (0x00000070&((data)<<4))
#define  HDMI_P2_HDMI_DRM_eotf(data)                                             (0x00000007&(data))
#define  HDMI_P2_HDMI_DRM_get_static_metadata_descriptor_id(data)                ((0x00000070&(data))>>4)
#define  HDMI_P2_HDMI_DRM_get_eotf(data)                                         (0x00000007&(data))

#define  HDMI_P2_HDMI_PCMC                                                      0x1803C0EC
#define  HDMI_P2_HDMI_PCMC_reg_addr                                              "0xB803C0EC"
#define  HDMI_P2_HDMI_PCMC_reg                                                   0xB803C0EC
#define  HDMI_P2_HDMI_PCMC_inst_addr                                             "0x0038"
#define  set_HDMI_P2_HDMI_PCMC_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_HDMI_PCMC_reg)=data)
#define  get_HDMI_P2_HDMI_PCMC_reg                                               (*((volatile unsigned int*)HDMI_P2_HDMI_PCMC_reg))
#define  HDMI_P2_HDMI_PCMC_drm_info_clr_shift                                    (13)
#define  HDMI_P2_HDMI_PCMC_mpeg_info_clr_shift                                   (12)
#define  HDMI_P2_HDMI_PCMC_audio_info_clr_shift                                  (11)
#define  HDMI_P2_HDMI_PCMC_spd_info_clr_shift                                    (10)
#define  HDMI_P2_HDMI_PCMC_avi_info_clr_shift                                    (9)
#define  HDMI_P2_HDMI_PCMC_hdr10pvs_info_clr_shift                               (8)
#define  HDMI_P2_HDMI_PCMC_dvs_info_clr_shift                                    (7)
#define  HDMI_P2_HDMI_PCMC_fvs_info_clr_shift                                    (6)
#define  HDMI_P2_HDMI_PCMC_vs_info_clr_shift                                     (5)
#define  HDMI_P2_HDMI_PCMC_gm_clr_shift                                          (4)
#define  HDMI_P2_HDMI_PCMC_isrc2_clr_shift                                       (3)
#define  HDMI_P2_HDMI_PCMC_isrc1_clr_shift                                       (2)
#define  HDMI_P2_HDMI_PCMC_acp_clr_shift                                         (1)
#define  HDMI_P2_HDMI_PCMC_ackg_clr_shift                                        (0)
#define  HDMI_P2_HDMI_PCMC_drm_info_clr_mask                                     (0x00002000)
#define  HDMI_P2_HDMI_PCMC_mpeg_info_clr_mask                                    (0x00001000)
#define  HDMI_P2_HDMI_PCMC_audio_info_clr_mask                                   (0x00000800)
#define  HDMI_P2_HDMI_PCMC_spd_info_clr_mask                                     (0x00000400)
#define  HDMI_P2_HDMI_PCMC_avi_info_clr_mask                                     (0x00000200)
#define  HDMI_P2_HDMI_PCMC_hdr10pvs_info_clr_mask                                (0x00000100)
#define  HDMI_P2_HDMI_PCMC_dvs_info_clr_mask                                     (0x00000080)
#define  HDMI_P2_HDMI_PCMC_fvs_info_clr_mask                                     (0x00000040)
#define  HDMI_P2_HDMI_PCMC_vs_info_clr_mask                                      (0x00000020)
#define  HDMI_P2_HDMI_PCMC_gm_clr_mask                                           (0x00000010)
#define  HDMI_P2_HDMI_PCMC_isrc2_clr_mask                                        (0x00000008)
#define  HDMI_P2_HDMI_PCMC_isrc1_clr_mask                                        (0x00000004)
#define  HDMI_P2_HDMI_PCMC_acp_clr_mask                                          (0x00000002)
#define  HDMI_P2_HDMI_PCMC_ackg_clr_mask                                         (0x00000001)
#define  HDMI_P2_HDMI_PCMC_drm_info_clr(data)                                    (0x00002000&((data)<<13))
#define  HDMI_P2_HDMI_PCMC_mpeg_info_clr(data)                                   (0x00001000&((data)<<12))
#define  HDMI_P2_HDMI_PCMC_audio_info_clr(data)                                  (0x00000800&((data)<<11))
#define  HDMI_P2_HDMI_PCMC_spd_info_clr(data)                                    (0x00000400&((data)<<10))
#define  HDMI_P2_HDMI_PCMC_avi_info_clr(data)                                    (0x00000200&((data)<<9))
#define  HDMI_P2_HDMI_PCMC_hdr10pvs_info_clr(data)                               (0x00000100&((data)<<8))
#define  HDMI_P2_HDMI_PCMC_dvs_info_clr(data)                                    (0x00000080&((data)<<7))
#define  HDMI_P2_HDMI_PCMC_fvs_info_clr(data)                                    (0x00000040&((data)<<6))
#define  HDMI_P2_HDMI_PCMC_vs_info_clr(data)                                     (0x00000020&((data)<<5))
#define  HDMI_P2_HDMI_PCMC_gm_clr(data)                                          (0x00000010&((data)<<4))
#define  HDMI_P2_HDMI_PCMC_isrc2_clr(data)                                       (0x00000008&((data)<<3))
#define  HDMI_P2_HDMI_PCMC_isrc1_clr(data)                                       (0x00000004&((data)<<2))
#define  HDMI_P2_HDMI_PCMC_acp_clr(data)                                         (0x00000002&((data)<<1))
#define  HDMI_P2_HDMI_PCMC_ackg_clr(data)                                        (0x00000001&(data))
#define  HDMI_P2_HDMI_PCMC_get_drm_info_clr(data)                                ((0x00002000&(data))>>13)
#define  HDMI_P2_HDMI_PCMC_get_mpeg_info_clr(data)                               ((0x00001000&(data))>>12)
#define  HDMI_P2_HDMI_PCMC_get_audio_info_clr(data)                              ((0x00000800&(data))>>11)
#define  HDMI_P2_HDMI_PCMC_get_spd_info_clr(data)                                ((0x00000400&(data))>>10)
#define  HDMI_P2_HDMI_PCMC_get_avi_info_clr(data)                                ((0x00000200&(data))>>9)
#define  HDMI_P2_HDMI_PCMC_get_hdr10pvs_info_clr(data)                           ((0x00000100&(data))>>8)
#define  HDMI_P2_HDMI_PCMC_get_dvs_info_clr(data)                                ((0x00000080&(data))>>7)
#define  HDMI_P2_HDMI_PCMC_get_fvs_info_clr(data)                                ((0x00000040&(data))>>6)
#define  HDMI_P2_HDMI_PCMC_get_vs_info_clr(data)                                 ((0x00000020&(data))>>5)
#define  HDMI_P2_HDMI_PCMC_get_gm_clr(data)                                      ((0x00000010&(data))>>4)
#define  HDMI_P2_HDMI_PCMC_get_isrc2_clr(data)                                   ((0x00000008&(data))>>3)
#define  HDMI_P2_HDMI_PCMC_get_isrc1_clr(data)                                   ((0x00000004&(data))>>2)
#define  HDMI_P2_HDMI_PCMC_get_acp_clr(data)                                     ((0x00000002&(data))>>1)
#define  HDMI_P2_HDMI_PCMC_get_ackg_clr(data)                                    (0x00000001&(data))

#define  HDMI_P2_hdrap                                                          0x1803C0F0
#define  HDMI_P2_hdrap_reg_addr                                                  "0xB803C0F0"
#define  HDMI_P2_hdrap_reg                                                       0xB803C0F0
#define  HDMI_P2_hdrap_inst_addr                                                 "0x0039"
#define  set_HDMI_P2_hdrap_reg(data)                                             (*((volatile unsigned int*)HDMI_P2_hdrap_reg)=data)
#define  get_HDMI_P2_hdrap_reg                                                   (*((volatile unsigned int*)HDMI_P2_hdrap_reg))
#define  HDMI_P2_hdrap_apss_shift                                                (0)
#define  HDMI_P2_hdrap_apss_mask                                                 (0x000003FF)
#define  HDMI_P2_hdrap_apss(data)                                                (0x000003FF&(data))
#define  HDMI_P2_hdrap_get_apss(data)                                            (0x000003FF&(data))

#define  HDMI_P2_hdrdp                                                          0x1803C0F4
#define  HDMI_P2_hdrdp_reg_addr                                                  "0xB803C0F4"
#define  HDMI_P2_hdrdp_reg                                                       0xB803C0F4
#define  HDMI_P2_hdrdp_inst_addr                                                 "0x003A"
#define  set_HDMI_P2_hdrdp_reg(data)                                             (*((volatile unsigned int*)HDMI_P2_hdrdp_reg)=data)
#define  get_HDMI_P2_hdrdp_reg                                                   (*((volatile unsigned int*)HDMI_P2_hdrdp_reg))
#define  HDMI_P2_hdrdp_dpss_shift                                                (0)
#define  HDMI_P2_hdrdp_dpss_mask                                                 (0xFFFFFFFF)
#define  HDMI_P2_hdrdp_dpss(data)                                                (0xFFFFFFFF&(data))
#define  HDMI_P2_hdrdp_get_dpss(data)                                            (0xFFFFFFFF&(data))

#define  HDMI_P2_hdr_st                                                         0x1803C0F8
#define  HDMI_P2_hdr_st_reg_addr                                                 "0xB803C0F8"
#define  HDMI_P2_hdr_st_reg                                                      0xB803C0F8
#define  HDMI_P2_hdr_st_inst_addr                                                "0x003B"
#define  set_HDMI_P2_hdr_st_reg(data)                                            (*((volatile unsigned int*)HDMI_P2_hdr_st_reg)=data)
#define  get_HDMI_P2_hdr_st_reg                                                  (*((volatile unsigned int*)HDMI_P2_hdr_st_reg))
#define  HDMI_P2_hdr_st_em_hdr_no_shift                                          (8)
#define  HDMI_P2_hdr_st_em_hdr_done_block_shift                                  (6)
#define  HDMI_P2_hdr_st_em_hdr_timeout_shift                                     (5)
#define  HDMI_P2_hdr_st_em_hdr_discont_shift                                     (4)
#define  HDMI_P2_hdr_st_em_hdr_end_shift                                         (3)
#define  HDMI_P2_hdr_st_em_hdr_new_shift                                         (2)
#define  HDMI_P2_hdr_st_em_hdr_first_shift                                       (1)
#define  HDMI_P2_hdr_st_em_hdr_last_shift                                        (0)
#define  HDMI_P2_hdr_st_em_hdr_no_mask                                           (0x00000100)
#define  HDMI_P2_hdr_st_em_hdr_done_block_mask                                   (0x00000040)
#define  HDMI_P2_hdr_st_em_hdr_timeout_mask                                      (0x00000020)
#define  HDMI_P2_hdr_st_em_hdr_discont_mask                                      (0x00000010)
#define  HDMI_P2_hdr_st_em_hdr_end_mask                                          (0x00000008)
#define  HDMI_P2_hdr_st_em_hdr_new_mask                                          (0x00000004)
#define  HDMI_P2_hdr_st_em_hdr_first_mask                                        (0x00000002)
#define  HDMI_P2_hdr_st_em_hdr_last_mask                                         (0x00000001)
#define  HDMI_P2_hdr_st_em_hdr_no(data)                                          (0x00000100&((data)<<8))
#define  HDMI_P2_hdr_st_em_hdr_done_block(data)                                  (0x00000040&((data)<<6))
#define  HDMI_P2_hdr_st_em_hdr_timeout(data)                                     (0x00000020&((data)<<5))
#define  HDMI_P2_hdr_st_em_hdr_discont(data)                                     (0x00000010&((data)<<4))
#define  HDMI_P2_hdr_st_em_hdr_end(data)                                         (0x00000008&((data)<<3))
#define  HDMI_P2_hdr_st_em_hdr_new(data)                                         (0x00000004&((data)<<2))
#define  HDMI_P2_hdr_st_em_hdr_first(data)                                       (0x00000002&((data)<<1))
#define  HDMI_P2_hdr_st_em_hdr_last(data)                                        (0x00000001&(data))
#define  HDMI_P2_hdr_st_get_em_hdr_no(data)                                      ((0x00000100&(data))>>8)
#define  HDMI_P2_hdr_st_get_em_hdr_done_block(data)                              ((0x00000040&(data))>>6)
#define  HDMI_P2_hdr_st_get_em_hdr_timeout(data)                                 ((0x00000020&(data))>>5)
#define  HDMI_P2_hdr_st_get_em_hdr_discont(data)                                 ((0x00000010&(data))>>4)
#define  HDMI_P2_hdr_st_get_em_hdr_end(data)                                     ((0x00000008&(data))>>3)
#define  HDMI_P2_hdr_st_get_em_hdr_new(data)                                     ((0x00000004&(data))>>2)
#define  HDMI_P2_hdr_st_get_em_hdr_first(data)                                   ((0x00000002&(data))>>1)
#define  HDMI_P2_hdr_st_get_em_hdr_last(data)                                    (0x00000001&(data))

#define  HDMI_P2_em_ct                                                          0x1803C0FC
#define  HDMI_P2_em_ct_reg_addr                                                  "0xB803C0FC"
#define  HDMI_P2_em_ct_reg                                                       0xB803C0FC
#define  HDMI_P2_em_ct_inst_addr                                                 "0x003C"
#define  set_HDMI_P2_em_ct_reg(data)                                             (*((volatile unsigned int*)HDMI_P2_em_ct_reg)=data)
#define  get_HDMI_P2_em_ct_reg                                                   (*((volatile unsigned int*)HDMI_P2_em_ct_reg))
#define  HDMI_P2_em_ct_hdr_hd20_hd21_sel_shift                                   (31)
#define  HDMI_P2_em_ct_org_id_shift                                              (23)
#define  HDMI_P2_em_ct_set_tag_msb_shift                                         (15)
#define  HDMI_P2_em_ct_set_tag_lsb_shift                                         (7)
#define  HDMI_P2_em_ct_recognize_tag_en_shift                                    (6)
#define  HDMI_P2_em_ct_hdr_pkt_cnt_clr_shift                                     (5)
#define  HDMI_P2_em_ct_hdr_block_sel_shift                                       (4)
#define  HDMI_P2_em_ct_em_err2_proc_shift                                        (3)
#define  HDMI_P2_em_ct_rec_em_hdr_irq_en_shift                                   (0)
#define  HDMI_P2_em_ct_hdr_hd20_hd21_sel_mask                                    (0x80000000)
#define  HDMI_P2_em_ct_org_id_mask                                               (0x7F800000)
#define  HDMI_P2_em_ct_set_tag_msb_mask                                          (0x007F8000)
#define  HDMI_P2_em_ct_set_tag_lsb_mask                                          (0x00007F80)
#define  HDMI_P2_em_ct_recognize_tag_en_mask                                     (0x00000040)
#define  HDMI_P2_em_ct_hdr_pkt_cnt_clr_mask                                      (0x00000020)
#define  HDMI_P2_em_ct_hdr_block_sel_mask                                        (0x00000010)
#define  HDMI_P2_em_ct_em_err2_proc_mask                                         (0x00000008)
#define  HDMI_P2_em_ct_rec_em_hdr_irq_en_mask                                    (0x00000007)
#define  HDMI_P2_em_ct_hdr_hd20_hd21_sel(data)                                   (0x80000000&((data)<<31))
#define  HDMI_P2_em_ct_org_id(data)                                              (0x7F800000&((data)<<23))
#define  HDMI_P2_em_ct_set_tag_msb(data)                                         (0x007F8000&((data)<<15))
#define  HDMI_P2_em_ct_set_tag_lsb(data)                                         (0x00007F80&((data)<<7))
#define  HDMI_P2_em_ct_recognize_tag_en(data)                                    (0x00000040&((data)<<6))
#define  HDMI_P2_em_ct_hdr_pkt_cnt_clr(data)                                     (0x00000020&((data)<<5))
#define  HDMI_P2_em_ct_hdr_block_sel(data)                                       (0x00000010&((data)<<4))
#define  HDMI_P2_em_ct_em_err2_proc(data)                                        (0x00000008&((data)<<3))
#define  HDMI_P2_em_ct_rec_em_hdr_irq_en(data)                                   (0x00000007&(data))
#define  HDMI_P2_em_ct_get_hdr_hd20_hd21_sel(data)                               ((0x80000000&(data))>>31)
#define  HDMI_P2_em_ct_get_org_id(data)                                          ((0x7F800000&(data))>>23)
#define  HDMI_P2_em_ct_get_set_tag_msb(data)                                     ((0x007F8000&(data))>>15)
#define  HDMI_P2_em_ct_get_set_tag_lsb(data)                                     ((0x00007F80&(data))>>7)
#define  HDMI_P2_em_ct_get_recognize_tag_en(data)                                ((0x00000040&(data))>>6)
#define  HDMI_P2_em_ct_get_hdr_pkt_cnt_clr(data)                                 ((0x00000020&(data))>>5)
#define  HDMI_P2_em_ct_get_hdr_block_sel(data)                                   ((0x00000010&(data))>>4)
#define  HDMI_P2_em_ct_get_em_err2_proc(data)                                    ((0x00000008&(data))>>3)
#define  HDMI_P2_em_ct_get_rec_em_hdr_irq_en(data)                               (0x00000007&(data))

#define  HDMI_P2_fapa_ct                                                        0x1803C100
#define  HDMI_P2_fapa_ct_reg_addr                                                "0xB803C100"
#define  HDMI_P2_fapa_ct_reg                                                     0xB803C100
#define  HDMI_P2_fapa_ct_inst_addr                                               "0x003D"
#define  set_HDMI_P2_fapa_ct_reg(data)                                           (*((volatile unsigned int*)HDMI_P2_fapa_ct_reg)=data)
#define  get_HDMI_P2_fapa_ct_reg                                                 (*((volatile unsigned int*)HDMI_P2_fapa_ct_reg))
#define  HDMI_P2_fapa_ct_end_shift                                               (16)
#define  HDMI_P2_fapa_ct_em_timeout_frame_shift                                  (4)
#define  HDMI_P2_fapa_ct_mode_shift                                              (0)
#define  HDMI_P2_fapa_ct_end_mask                                                (0x7FFF0000)
#define  HDMI_P2_fapa_ct_em_timeout_frame_mask                                   (0x000000F0)
#define  HDMI_P2_fapa_ct_mode_mask                                               (0x00000001)
#define  HDMI_P2_fapa_ct_end(data)                                               (0x7FFF0000&((data)<<16))
#define  HDMI_P2_fapa_ct_em_timeout_frame(data)                                  (0x000000F0&((data)<<4))
#define  HDMI_P2_fapa_ct_mode(data)                                              (0x00000001&(data))
#define  HDMI_P2_fapa_ct_get_end(data)                                           ((0x7FFF0000&(data))>>16)
#define  HDMI_P2_fapa_ct_get_em_timeout_frame(data)                              ((0x000000F0&(data))>>4)
#define  HDMI_P2_fapa_ct_get_mode(data)                                          (0x00000001&(data))

#define  HDMI_P2_HDMI_EMAP                                                      0x1803C104
#define  HDMI_P2_HDMI_EMAP_reg_addr                                              "0xB803C104"
#define  HDMI_P2_HDMI_EMAP_reg                                                   0xB803C104
#define  HDMI_P2_HDMI_EMAP_inst_addr                                             "0x003E"
#define  set_HDMI_P2_HDMI_EMAP_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_HDMI_EMAP_reg)=data)
#define  get_HDMI_P2_HDMI_EMAP_reg                                               (*((volatile unsigned int*)HDMI_P2_HDMI_EMAP_reg))
#define  HDMI_P2_HDMI_EMAP_apss_shift                                            (0)
#define  HDMI_P2_HDMI_EMAP_apss_mask                                             (0x000000FF)
#define  HDMI_P2_HDMI_EMAP_apss(data)                                            (0x000000FF&(data))
#define  HDMI_P2_HDMI_EMAP_get_apss(data)                                        (0x000000FF&(data))

#define  HDMI_P2_HDMI_EMDP                                                      0x1803C108
#define  HDMI_P2_HDMI_EMDP_reg_addr                                              "0xB803C108"
#define  HDMI_P2_HDMI_EMDP_reg                                                   0xB803C108
#define  HDMI_P2_HDMI_EMDP_inst_addr                                             "0x003F"
#define  set_HDMI_P2_HDMI_EMDP_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_HDMI_EMDP_reg)=data)
#define  get_HDMI_P2_HDMI_EMDP_reg                                               (*((volatile unsigned int*)HDMI_P2_HDMI_EMDP_reg))
#define  HDMI_P2_HDMI_EMDP_dpss_shift                                            (0)
#define  HDMI_P2_HDMI_EMDP_dpss_mask                                             (0x000000FF)
#define  HDMI_P2_HDMI_EMDP_dpss(data)                                            (0x000000FF&(data))
#define  HDMI_P2_HDMI_EMDP_get_dpss(data)                                        (0x000000FF&(data))

#define  HDMI_P2_VRREM_ST                                                       0x1803C10C
#define  HDMI_P2_VRREM_ST_reg_addr                                               "0xB803C10C"
#define  HDMI_P2_VRREM_ST_reg                                                    0xB803C10C
#define  HDMI_P2_VRREM_ST_inst_addr                                              "0x0040"
#define  set_HDMI_P2_VRREM_ST_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_VRREM_ST_reg)=data)
#define  get_HDMI_P2_VRREM_ST_reg                                                (*((volatile unsigned int*)HDMI_P2_VRREM_ST_reg))
#define  HDMI_P2_VRREM_ST_em_vrr_no_shift                                        (7)
#define  HDMI_P2_VRREM_ST_em_vrr_timeout_shift                                   (5)
#define  HDMI_P2_VRREM_ST_em_vrr_discont_shift                                   (4)
#define  HDMI_P2_VRREM_ST_em_vrr_end_shift                                       (3)
#define  HDMI_P2_VRREM_ST_em_vrr_new_shift                                       (2)
#define  HDMI_P2_VRREM_ST_em_vrr_first_shift                                     (1)
#define  HDMI_P2_VRREM_ST_em_vrr_last_shift                                      (0)
#define  HDMI_P2_VRREM_ST_em_vrr_no_mask                                         (0x00000080)
#define  HDMI_P2_VRREM_ST_em_vrr_timeout_mask                                    (0x00000020)
#define  HDMI_P2_VRREM_ST_em_vrr_discont_mask                                    (0x00000010)
#define  HDMI_P2_VRREM_ST_em_vrr_end_mask                                        (0x00000008)
#define  HDMI_P2_VRREM_ST_em_vrr_new_mask                                        (0x00000004)
#define  HDMI_P2_VRREM_ST_em_vrr_first_mask                                      (0x00000002)
#define  HDMI_P2_VRREM_ST_em_vrr_last_mask                                       (0x00000001)
#define  HDMI_P2_VRREM_ST_em_vrr_no(data)                                        (0x00000080&((data)<<7))
#define  HDMI_P2_VRREM_ST_em_vrr_timeout(data)                                   (0x00000020&((data)<<5))
#define  HDMI_P2_VRREM_ST_em_vrr_discont(data)                                   (0x00000010&((data)<<4))
#define  HDMI_P2_VRREM_ST_em_vrr_end(data)                                       (0x00000008&((data)<<3))
#define  HDMI_P2_VRREM_ST_em_vrr_new(data)                                       (0x00000004&((data)<<2))
#define  HDMI_P2_VRREM_ST_em_vrr_first(data)                                     (0x00000002&((data)<<1))
#define  HDMI_P2_VRREM_ST_em_vrr_last(data)                                      (0x00000001&(data))
#define  HDMI_P2_VRREM_ST_get_em_vrr_no(data)                                    ((0x00000080&(data))>>7)
#define  HDMI_P2_VRREM_ST_get_em_vrr_timeout(data)                               ((0x00000020&(data))>>5)
#define  HDMI_P2_VRREM_ST_get_em_vrr_discont(data)                               ((0x00000010&(data))>>4)
#define  HDMI_P2_VRREM_ST_get_em_vrr_end(data)                                   ((0x00000008&(data))>>3)
#define  HDMI_P2_VRREM_ST_get_em_vrr_new(data)                                   ((0x00000004&(data))>>2)
#define  HDMI_P2_VRREM_ST_get_em_vrr_first(data)                                 ((0x00000002&(data))>>1)
#define  HDMI_P2_VRREM_ST_get_em_vrr_last(data)                                  (0x00000001&(data))

#define  HDMI_P2_HDMI_VRR_EMC                                                   0x1803C110
#define  HDMI_P2_HDMI_VRR_EMC_reg_addr                                           "0xB803C110"
#define  HDMI_P2_HDMI_VRR_EMC_reg                                                0xB803C110
#define  HDMI_P2_HDMI_VRR_EMC_inst_addr                                          "0x0041"
#define  set_HDMI_P2_HDMI_VRR_EMC_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_HDMI_VRR_EMC_reg)=data)
#define  get_HDMI_P2_HDMI_VRR_EMC_reg                                            (*((volatile unsigned int*)HDMI_P2_HDMI_VRR_EMC_reg))
#define  HDMI_P2_HDMI_VRR_EMC_vrr_clr_shift                                      (4)
#define  HDMI_P2_HDMI_VRR_EMC_rec_em_vrr_irq_en_shift                            (0)
#define  HDMI_P2_HDMI_VRR_EMC_vrr_clr_mask                                       (0x00000010)
#define  HDMI_P2_HDMI_VRR_EMC_rec_em_vrr_irq_en_mask                             (0x00000007)
#define  HDMI_P2_HDMI_VRR_EMC_vrr_clr(data)                                      (0x00000010&((data)<<4))
#define  HDMI_P2_HDMI_VRR_EMC_rec_em_vrr_irq_en(data)                            (0x00000007&(data))
#define  HDMI_P2_HDMI_VRR_EMC_get_vrr_clr(data)                                  ((0x00000010&(data))>>4)
#define  HDMI_P2_HDMI_VRR_EMC_get_rec_em_vrr_irq_en(data)                        (0x00000007&(data))

#define  HDMI_P2_Audio_Sample_Rate_Change_IRQ                                   0x1803C114
#define  HDMI_P2_Audio_Sample_Rate_Change_IRQ_reg_addr                           "0xB803C114"
#define  HDMI_P2_Audio_Sample_Rate_Change_IRQ_reg                                0xB803C114
#define  HDMI_P2_Audio_Sample_Rate_Change_IRQ_inst_addr                          "0x0042"
#define  set_HDMI_P2_Audio_Sample_Rate_Change_IRQ_reg(data)                      (*((volatile unsigned int*)HDMI_P2_Audio_Sample_Rate_Change_IRQ_reg)=data)
#define  get_HDMI_P2_Audio_Sample_Rate_Change_IRQ_reg                            (*((volatile unsigned int*)HDMI_P2_Audio_Sample_Rate_Change_IRQ_reg))
#define  HDMI_P2_Audio_Sample_Rate_Change_IRQ_en_ncts_chg_irq_shift              (3)
#define  HDMI_P2_Audio_Sample_Rate_Change_IRQ_ncts_chg_irq_shift                 (2)
#define  HDMI_P2_Audio_Sample_Rate_Change_IRQ_en_ncts_chg_irq_mask               (0x00000008)
#define  HDMI_P2_Audio_Sample_Rate_Change_IRQ_ncts_chg_irq_mask                  (0x00000004)
#define  HDMI_P2_Audio_Sample_Rate_Change_IRQ_en_ncts_chg_irq(data)              (0x00000008&((data)<<3))
#define  HDMI_P2_Audio_Sample_Rate_Change_IRQ_ncts_chg_irq(data)                 (0x00000004&((data)<<2))
#define  HDMI_P2_Audio_Sample_Rate_Change_IRQ_get_en_ncts_chg_irq(data)          ((0x00000008&(data))>>3)
#define  HDMI_P2_Audio_Sample_Rate_Change_IRQ_get_ncts_chg_irq(data)             ((0x00000004&(data))>>2)

#define  HDMI_P2_High_Bit_Rate_Audio_Packet                                     0x1803C118
#define  HDMI_P2_High_Bit_Rate_Audio_Packet_reg_addr                             "0xB803C118"
#define  HDMI_P2_High_Bit_Rate_Audio_Packet_reg                                  0xB803C118
#define  HDMI_P2_High_Bit_Rate_Audio_Packet_inst_addr                            "0x0043"
#define  set_HDMI_P2_High_Bit_Rate_Audio_Packet_reg(data)                        (*((volatile unsigned int*)HDMI_P2_High_Bit_Rate_Audio_Packet_reg)=data)
#define  get_HDMI_P2_High_Bit_Rate_Audio_Packet_reg                              (*((volatile unsigned int*)HDMI_P2_High_Bit_Rate_Audio_Packet_reg))
#define  HDMI_P2_High_Bit_Rate_Audio_Packet_hbr_audio_mode_shift                 (0)
#define  HDMI_P2_High_Bit_Rate_Audio_Packet_hbr_audio_mode_mask                  (0x00000001)
#define  HDMI_P2_High_Bit_Rate_Audio_Packet_hbr_audio_mode(data)                 (0x00000001&(data))
#define  HDMI_P2_High_Bit_Rate_Audio_Packet_get_hbr_audio_mode(data)             (0x00000001&(data))

#define  HDMI_P2_HDMI_AUDCR                                                     0x1803C11C
#define  HDMI_P2_HDMI_AUDCR_reg_addr                                             "0xB803C11C"
#define  HDMI_P2_HDMI_AUDCR_reg                                                  0xB803C11C
#define  HDMI_P2_HDMI_AUDCR_inst_addr                                            "0x0044"
#define  set_HDMI_P2_HDMI_AUDCR_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_HDMI_AUDCR_reg)=data)
#define  get_HDMI_P2_HDMI_AUDCR_reg                                              (*((volatile unsigned int*)HDMI_P2_HDMI_AUDCR_reg))
#define  HDMI_P2_HDMI_AUDCR_aud_data_fw_shift                                    (8)
#define  HDMI_P2_HDMI_AUDCR_pck_hbr_aud_gated_en_shift                           (6)
#define  HDMI_P2_HDMI_AUDCR_pck_aud_gated_en_shift                               (5)
#define  HDMI_P2_HDMI_AUDCR_aud_cptest_en_shift                                  (4)
#define  HDMI_P2_HDMI_AUDCR_sine_replace_en_shift                                (3)
#define  HDMI_P2_HDMI_AUDCR_bch2_repeat_en_shift                                 (2)
#define  HDMI_P2_HDMI_AUDCR_flat_en_shift                                        (1)
#define  HDMI_P2_HDMI_AUDCR_aud_en_shift                                         (0)
#define  HDMI_P2_HDMI_AUDCR_aud_data_fw_mask                                     (0x03FFFF00)
#define  HDMI_P2_HDMI_AUDCR_pck_hbr_aud_gated_en_mask                            (0x00000040)
#define  HDMI_P2_HDMI_AUDCR_pck_aud_gated_en_mask                                (0x00000020)
#define  HDMI_P2_HDMI_AUDCR_aud_cptest_en_mask                                   (0x00000010)
#define  HDMI_P2_HDMI_AUDCR_sine_replace_en_mask                                 (0x00000008)
#define  HDMI_P2_HDMI_AUDCR_bch2_repeat_en_mask                                  (0x00000004)
#define  HDMI_P2_HDMI_AUDCR_flat_en_mask                                         (0x00000002)
#define  HDMI_P2_HDMI_AUDCR_aud_en_mask                                          (0x00000001)
#define  HDMI_P2_HDMI_AUDCR_aud_data_fw(data)                                    (0x03FFFF00&((data)<<8))
#define  HDMI_P2_HDMI_AUDCR_pck_hbr_aud_gated_en(data)                           (0x00000040&((data)<<6))
#define  HDMI_P2_HDMI_AUDCR_pck_aud_gated_en(data)                               (0x00000020&((data)<<5))
#define  HDMI_P2_HDMI_AUDCR_aud_cptest_en(data)                                  (0x00000010&((data)<<4))
#define  HDMI_P2_HDMI_AUDCR_sine_replace_en(data)                                (0x00000008&((data)<<3))
#define  HDMI_P2_HDMI_AUDCR_bch2_repeat_en(data)                                 (0x00000004&((data)<<2))
#define  HDMI_P2_HDMI_AUDCR_flat_en(data)                                        (0x00000002&((data)<<1))
#define  HDMI_P2_HDMI_AUDCR_aud_en(data)                                         (0x00000001&(data))
#define  HDMI_P2_HDMI_AUDCR_get_aud_data_fw(data)                                ((0x03FFFF00&(data))>>8)
#define  HDMI_P2_HDMI_AUDCR_get_pck_hbr_aud_gated_en(data)                       ((0x00000040&(data))>>6)
#define  HDMI_P2_HDMI_AUDCR_get_pck_aud_gated_en(data)                           ((0x00000020&(data))>>5)
#define  HDMI_P2_HDMI_AUDCR_get_aud_cptest_en(data)                              ((0x00000010&(data))>>4)
#define  HDMI_P2_HDMI_AUDCR_get_sine_replace_en(data)                            ((0x00000008&(data))>>3)
#define  HDMI_P2_HDMI_AUDCR_get_bch2_repeat_en(data)                             ((0x00000004&(data))>>2)
#define  HDMI_P2_HDMI_AUDCR_get_flat_en(data)                                    ((0x00000002&(data))>>1)
#define  HDMI_P2_HDMI_AUDCR_get_aud_en(data)                                     (0x00000001&(data))

#define  HDMI_P2_HDMI_AUDSR                                                     0x1803C120
#define  HDMI_P2_HDMI_AUDSR_reg_addr                                             "0xB803C120"
#define  HDMI_P2_HDMI_AUDSR_reg                                                  0xB803C120
#define  HDMI_P2_HDMI_AUDSR_inst_addr                                            "0x0045"
#define  set_HDMI_P2_HDMI_AUDSR_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_HDMI_AUDSR_reg)=data)
#define  get_HDMI_P2_HDMI_AUDSR_reg                                              (*((volatile unsigned int*)HDMI_P2_HDMI_AUDSR_reg))
#define  HDMI_P2_HDMI_AUDSR_aud_ch_mode_shift                                    (1)
#define  HDMI_P2_HDMI_AUDSR_aud_fifof_shift                                      (0)
#define  HDMI_P2_HDMI_AUDSR_aud_ch_mode_mask                                     (0x0000000E)
#define  HDMI_P2_HDMI_AUDSR_aud_fifof_mask                                       (0x00000001)
#define  HDMI_P2_HDMI_AUDSR_aud_ch_mode(data)                                    (0x0000000E&((data)<<1))
#define  HDMI_P2_HDMI_AUDSR_aud_fifof(data)                                      (0x00000001&(data))
#define  HDMI_P2_HDMI_AUDSR_get_aud_ch_mode(data)                                ((0x0000000E&(data))>>1)
#define  HDMI_P2_HDMI_AUDSR_get_aud_fifof(data)                                  (0x00000001&(data))

#define  HDMI_P2_CLKDETCR                                                       0x1803C124
#define  HDMI_P2_CLKDETCR_reg_addr                                               "0xB803C124"
#define  HDMI_P2_CLKDETCR_reg                                                    0xB803C124
#define  HDMI_P2_CLKDETCR_inst_addr                                              "0x0046"
#define  set_HDMI_P2_CLKDETCR_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_CLKDETCR_reg)=data)
#define  get_HDMI_P2_CLKDETCR_reg                                                (*((volatile unsigned int*)HDMI_P2_CLKDETCR_reg))
#define  HDMI_P2_CLKDETCR_clkv_meas_sel_shift                                    (1)
#define  HDMI_P2_CLKDETCR_clock_det_en_shift                                     (0)
#define  HDMI_P2_CLKDETCR_clkv_meas_sel_mask                                     (0x00000006)
#define  HDMI_P2_CLKDETCR_clock_det_en_mask                                      (0x00000001)
#define  HDMI_P2_CLKDETCR_clkv_meas_sel(data)                                    (0x00000006&((data)<<1))
#define  HDMI_P2_CLKDETCR_clock_det_en(data)                                     (0x00000001&(data))
#define  HDMI_P2_CLKDETCR_get_clkv_meas_sel(data)                                ((0x00000006&(data))>>1)
#define  HDMI_P2_CLKDETCR_get_clock_det_en(data)                                 (0x00000001&(data))

#define  HDMI_P2_CLKDETSR                                                       0x1803C128
#define  HDMI_P2_CLKDETSR_reg_addr                                               "0xB803C128"
#define  HDMI_P2_CLKDETSR_reg                                                    0xB803C128
#define  HDMI_P2_CLKDETSR_inst_addr                                              "0x0047"
#define  set_HDMI_P2_CLKDETSR_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_CLKDETSR_reg)=data)
#define  get_HDMI_P2_CLKDETSR_reg                                                (*((volatile unsigned int*)HDMI_P2_CLKDETSR_reg))
#define  HDMI_P2_CLKDETSR_reset_counter_shift                                    (21)
#define  HDMI_P2_CLKDETSR_pop_out_shift                                          (20)
#define  HDMI_P2_CLKDETSR_clk_counter_shift                                      (8)
#define  HDMI_P2_CLKDETSR_en_clk_chg_irq_shift                                   (5)
#define  HDMI_P2_CLKDETSR_clk_chg_irq_shift                                      (4)
#define  HDMI_P2_CLKDETSR_dummy_3_2_shift                                        (2)
#define  HDMI_P2_CLKDETSR_clk_in_target_irq_en_shift                             (1)
#define  HDMI_P2_CLKDETSR_clk_in_target_shift                                    (0)
#define  HDMI_P2_CLKDETSR_reset_counter_mask                                     (0x00200000)
#define  HDMI_P2_CLKDETSR_pop_out_mask                                           (0x00100000)
#define  HDMI_P2_CLKDETSR_clk_counter_mask                                       (0x000FFF00)
#define  HDMI_P2_CLKDETSR_en_clk_chg_irq_mask                                    (0x00000020)
#define  HDMI_P2_CLKDETSR_clk_chg_irq_mask                                       (0x00000010)
#define  HDMI_P2_CLKDETSR_dummy_3_2_mask                                         (0x0000000C)
#define  HDMI_P2_CLKDETSR_clk_in_target_irq_en_mask                              (0x00000002)
#define  HDMI_P2_CLKDETSR_clk_in_target_mask                                     (0x00000001)
#define  HDMI_P2_CLKDETSR_reset_counter(data)                                    (0x00200000&((data)<<21))
#define  HDMI_P2_CLKDETSR_pop_out(data)                                          (0x00100000&((data)<<20))
#define  HDMI_P2_CLKDETSR_clk_counter(data)                                      (0x000FFF00&((data)<<8))
#define  HDMI_P2_CLKDETSR_en_clk_chg_irq(data)                                   (0x00000020&((data)<<5))
#define  HDMI_P2_CLKDETSR_clk_chg_irq(data)                                      (0x00000010&((data)<<4))
#define  HDMI_P2_CLKDETSR_dummy_3_2(data)                                        (0x0000000C&((data)<<2))
#define  HDMI_P2_CLKDETSR_clk_in_target_irq_en(data)                             (0x00000002&((data)<<1))
#define  HDMI_P2_CLKDETSR_clk_in_target(data)                                    (0x00000001&(data))
#define  HDMI_P2_CLKDETSR_get_reset_counter(data)                                ((0x00200000&(data))>>21)
#define  HDMI_P2_CLKDETSR_get_pop_out(data)                                      ((0x00100000&(data))>>20)
#define  HDMI_P2_CLKDETSR_get_clk_counter(data)                                  ((0x000FFF00&(data))>>8)
#define  HDMI_P2_CLKDETSR_get_en_clk_chg_irq(data)                               ((0x00000020&(data))>>5)
#define  HDMI_P2_CLKDETSR_get_clk_chg_irq(data)                                  ((0x00000010&(data))>>4)
#define  HDMI_P2_CLKDETSR_get_dummy_3_2(data)                                    ((0x0000000C&(data))>>2)
#define  HDMI_P2_CLKDETSR_get_clk_in_target_irq_en(data)                         ((0x00000002&(data))>>1)
#define  HDMI_P2_CLKDETSR_get_clk_in_target(data)                                (0x00000001&(data))

#define  HDMI_P2_CLK_SETTING_00                                                 0x1803C12C
#define  HDMI_P2_CLK_SETTING_00_reg_addr                                         "0xB803C12C"
#define  HDMI_P2_CLK_SETTING_00_reg                                              0xB803C12C
#define  HDMI_P2_CLK_SETTING_00_inst_addr                                        "0x0048"
#define  set_HDMI_P2_CLK_SETTING_00_reg(data)                                    (*((volatile unsigned int*)HDMI_P2_CLK_SETTING_00_reg)=data)
#define  get_HDMI_P2_CLK_SETTING_00_reg                                          (*((volatile unsigned int*)HDMI_P2_CLK_SETTING_00_reg))
#define  HDMI_P2_CLK_SETTING_00_dclk_cnt_start_shift                             (16)
#define  HDMI_P2_CLK_SETTING_00_dclk_cnt_end_shift                               (0)
#define  HDMI_P2_CLK_SETTING_00_dclk_cnt_start_mask                              (0x0FFF0000)
#define  HDMI_P2_CLK_SETTING_00_dclk_cnt_end_mask                                (0x00000FFF)
#define  HDMI_P2_CLK_SETTING_00_dclk_cnt_start(data)                             (0x0FFF0000&((data)<<16))
#define  HDMI_P2_CLK_SETTING_00_dclk_cnt_end(data)                               (0x00000FFF&(data))
#define  HDMI_P2_CLK_SETTING_00_get_dclk_cnt_start(data)                         ((0x0FFF0000&(data))>>16)
#define  HDMI_P2_CLK_SETTING_00_get_dclk_cnt_end(data)                           (0x00000FFF&(data))

#define  HDMI_P2_CLK_SETTING_01                                                 0x1803C130
#define  HDMI_P2_CLK_SETTING_01_reg_addr                                         "0xB803C130"
#define  HDMI_P2_CLK_SETTING_01_reg                                              0xB803C130
#define  HDMI_P2_CLK_SETTING_01_inst_addr                                        "0x0049"
#define  set_HDMI_P2_CLK_SETTING_01_reg(data)                                    (*((volatile unsigned int*)HDMI_P2_CLK_SETTING_01_reg)=data)
#define  get_HDMI_P2_CLK_SETTING_01_reg                                          (*((volatile unsigned int*)HDMI_P2_CLK_SETTING_01_reg))
#define  HDMI_P2_CLK_SETTING_01_target_for_maximum_clk_counter_shift             (16)
#define  HDMI_P2_CLK_SETTING_01_target_for_minimum_clk_counter_shift             (0)
#define  HDMI_P2_CLK_SETTING_01_target_for_maximum_clk_counter_mask              (0x0FFF0000)
#define  HDMI_P2_CLK_SETTING_01_target_for_minimum_clk_counter_mask              (0x00000FFF)
#define  HDMI_P2_CLK_SETTING_01_target_for_maximum_clk_counter(data)             (0x0FFF0000&((data)<<16))
#define  HDMI_P2_CLK_SETTING_01_target_for_minimum_clk_counter(data)             (0x00000FFF&(data))
#define  HDMI_P2_CLK_SETTING_01_get_target_for_maximum_clk_counter(data)         ((0x0FFF0000&(data))>>16)
#define  HDMI_P2_CLK_SETTING_01_get_target_for_minimum_clk_counter(data)         (0x00000FFF&(data))

#define  HDMI_P2_CLK_SETTING_02                                                 0x1803C134
#define  HDMI_P2_CLK_SETTING_02_reg_addr                                         "0xB803C134"
#define  HDMI_P2_CLK_SETTING_02_reg                                              0xB803C134
#define  HDMI_P2_CLK_SETTING_02_inst_addr                                        "0x004A"
#define  set_HDMI_P2_CLK_SETTING_02_reg(data)                                    (*((volatile unsigned int*)HDMI_P2_CLK_SETTING_02_reg)=data)
#define  get_HDMI_P2_CLK_SETTING_02_reg                                          (*((volatile unsigned int*)HDMI_P2_CLK_SETTING_02_reg))
#define  HDMI_P2_CLK_SETTING_02_clk_counter_err_threshold_shift                  (8)
#define  HDMI_P2_CLK_SETTING_02_clk_counter_debounce_shift                       (0)
#define  HDMI_P2_CLK_SETTING_02_clk_counter_err_threshold_mask                   (0x00000F00)
#define  HDMI_P2_CLK_SETTING_02_clk_counter_debounce_mask                        (0x000000FF)
#define  HDMI_P2_CLK_SETTING_02_clk_counter_err_threshold(data)                  (0x00000F00&((data)<<8))
#define  HDMI_P2_CLK_SETTING_02_clk_counter_debounce(data)                       (0x000000FF&(data))
#define  HDMI_P2_CLK_SETTING_02_get_clk_counter_err_threshold(data)              ((0x00000F00&(data))>>8)
#define  HDMI_P2_CLK_SETTING_02_get_clk_counter_debounce(data)                   (0x000000FF&(data))

#define  HDMI_P2_PRBS_R_CTRL                                                    0x1803C138
#define  HDMI_P2_PRBS_R_CTRL_reg_addr                                            "0xB803C138"
#define  HDMI_P2_PRBS_R_CTRL_reg                                                 0xB803C138
#define  HDMI_P2_PRBS_R_CTRL_inst_addr                                           "0x004B"
#define  set_HDMI_P2_PRBS_R_CTRL_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_PRBS_R_CTRL_reg)=data)
#define  get_HDMI_P2_PRBS_R_CTRL_reg                                             (*((volatile unsigned int*)HDMI_P2_PRBS_R_CTRL_reg))
#define  HDMI_P2_PRBS_R_CTRL_prbs23_rxen_shift                                   (28)
#define  HDMI_P2_PRBS_R_CTRL_prbs_rxbist_err_cnt_shift                           (20)
#define  HDMI_P2_PRBS_R_CTRL_prbs_err_cnt_shift                                  (16)
#define  HDMI_P2_PRBS_R_CTRL_prbs_bit_err_shift                                  (4)
#define  HDMI_P2_PRBS_R_CTRL_prbs_lock_shift                                     (3)
#define  HDMI_P2_PRBS_R_CTRL_prbs_err_cnt_clr_shift                              (2)
#define  HDMI_P2_PRBS_R_CTRL_prbs_reverse_shift                                  (1)
#define  HDMI_P2_PRBS_R_CTRL_prbs7_rxen_shift                                    (0)
#define  HDMI_P2_PRBS_R_CTRL_prbs23_rxen_mask                                    (0x10000000)
#define  HDMI_P2_PRBS_R_CTRL_prbs_rxbist_err_cnt_mask                            (0x0FF00000)
#define  HDMI_P2_PRBS_R_CTRL_prbs_err_cnt_mask                                   (0x000F0000)
#define  HDMI_P2_PRBS_R_CTRL_prbs_bit_err_mask                                   (0x00003FF0)
#define  HDMI_P2_PRBS_R_CTRL_prbs_lock_mask                                      (0x00000008)
#define  HDMI_P2_PRBS_R_CTRL_prbs_err_cnt_clr_mask                               (0x00000004)
#define  HDMI_P2_PRBS_R_CTRL_prbs_reverse_mask                                   (0x00000002)
#define  HDMI_P2_PRBS_R_CTRL_prbs7_rxen_mask                                     (0x00000001)
#define  HDMI_P2_PRBS_R_CTRL_prbs23_rxen(data)                                   (0x10000000&((data)<<28))
#define  HDMI_P2_PRBS_R_CTRL_prbs_rxbist_err_cnt(data)                           (0x0FF00000&((data)<<20))
#define  HDMI_P2_PRBS_R_CTRL_prbs_err_cnt(data)                                  (0x000F0000&((data)<<16))
#define  HDMI_P2_PRBS_R_CTRL_prbs_bit_err(data)                                  (0x00003FF0&((data)<<4))
#define  HDMI_P2_PRBS_R_CTRL_prbs_lock(data)                                     (0x00000008&((data)<<3))
#define  HDMI_P2_PRBS_R_CTRL_prbs_err_cnt_clr(data)                              (0x00000004&((data)<<2))
#define  HDMI_P2_PRBS_R_CTRL_prbs_reverse(data)                                  (0x00000002&((data)<<1))
#define  HDMI_P2_PRBS_R_CTRL_prbs7_rxen(data)                                    (0x00000001&(data))
#define  HDMI_P2_PRBS_R_CTRL_get_prbs23_rxen(data)                               ((0x10000000&(data))>>28)
#define  HDMI_P2_PRBS_R_CTRL_get_prbs_rxbist_err_cnt(data)                       ((0x0FF00000&(data))>>20)
#define  HDMI_P2_PRBS_R_CTRL_get_prbs_err_cnt(data)                              ((0x000F0000&(data))>>16)
#define  HDMI_P2_PRBS_R_CTRL_get_prbs_bit_err(data)                              ((0x00003FF0&(data))>>4)
#define  HDMI_P2_PRBS_R_CTRL_get_prbs_lock(data)                                 ((0x00000008&(data))>>3)
#define  HDMI_P2_PRBS_R_CTRL_get_prbs_err_cnt_clr(data)                          ((0x00000004&(data))>>2)
#define  HDMI_P2_PRBS_R_CTRL_get_prbs_reverse(data)                              ((0x00000002&(data))>>1)
#define  HDMI_P2_PRBS_R_CTRL_get_prbs7_rxen(data)                                (0x00000001&(data))

#define  HDMI_P2_PRBS_G_CTRL                                                    0x1803C13C
#define  HDMI_P2_PRBS_G_CTRL_reg_addr                                            "0xB803C13C"
#define  HDMI_P2_PRBS_G_CTRL_reg                                                 0xB803C13C
#define  HDMI_P2_PRBS_G_CTRL_inst_addr                                           "0x004C"
#define  set_HDMI_P2_PRBS_G_CTRL_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_PRBS_G_CTRL_reg)=data)
#define  get_HDMI_P2_PRBS_G_CTRL_reg                                             (*((volatile unsigned int*)HDMI_P2_PRBS_G_CTRL_reg))
#define  HDMI_P2_PRBS_G_CTRL_prbs23_rxen_shift                                   (28)
#define  HDMI_P2_PRBS_G_CTRL_prbs_rxbist_err_cnt_shift                           (20)
#define  HDMI_P2_PRBS_G_CTRL_prbs_err_cnt_shift                                  (16)
#define  HDMI_P2_PRBS_G_CTRL_prbs_bit_err_shift                                  (4)
#define  HDMI_P2_PRBS_G_CTRL_prbs_lock_shift                                     (3)
#define  HDMI_P2_PRBS_G_CTRL_prbs_err_cnt_clr_shift                              (2)
#define  HDMI_P2_PRBS_G_CTRL_prbs_reverse_shift                                  (1)
#define  HDMI_P2_PRBS_G_CTRL_prbs7_rxen_shift                                    (0)
#define  HDMI_P2_PRBS_G_CTRL_prbs23_rxen_mask                                    (0x10000000)
#define  HDMI_P2_PRBS_G_CTRL_prbs_rxbist_err_cnt_mask                            (0x0FF00000)
#define  HDMI_P2_PRBS_G_CTRL_prbs_err_cnt_mask                                   (0x000F0000)
#define  HDMI_P2_PRBS_G_CTRL_prbs_bit_err_mask                                   (0x00003FF0)
#define  HDMI_P2_PRBS_G_CTRL_prbs_lock_mask                                      (0x00000008)
#define  HDMI_P2_PRBS_G_CTRL_prbs_err_cnt_clr_mask                               (0x00000004)
#define  HDMI_P2_PRBS_G_CTRL_prbs_reverse_mask                                   (0x00000002)
#define  HDMI_P2_PRBS_G_CTRL_prbs7_rxen_mask                                     (0x00000001)
#define  HDMI_P2_PRBS_G_CTRL_prbs23_rxen(data)                                   (0x10000000&((data)<<28))
#define  HDMI_P2_PRBS_G_CTRL_prbs_rxbist_err_cnt(data)                           (0x0FF00000&((data)<<20))
#define  HDMI_P2_PRBS_G_CTRL_prbs_err_cnt(data)                                  (0x000F0000&((data)<<16))
#define  HDMI_P2_PRBS_G_CTRL_prbs_bit_err(data)                                  (0x00003FF0&((data)<<4))
#define  HDMI_P2_PRBS_G_CTRL_prbs_lock(data)                                     (0x00000008&((data)<<3))
#define  HDMI_P2_PRBS_G_CTRL_prbs_err_cnt_clr(data)                              (0x00000004&((data)<<2))
#define  HDMI_P2_PRBS_G_CTRL_prbs_reverse(data)                                  (0x00000002&((data)<<1))
#define  HDMI_P2_PRBS_G_CTRL_prbs7_rxen(data)                                    (0x00000001&(data))
#define  HDMI_P2_PRBS_G_CTRL_get_prbs23_rxen(data)                               ((0x10000000&(data))>>28)
#define  HDMI_P2_PRBS_G_CTRL_get_prbs_rxbist_err_cnt(data)                       ((0x0FF00000&(data))>>20)
#define  HDMI_P2_PRBS_G_CTRL_get_prbs_err_cnt(data)                              ((0x000F0000&(data))>>16)
#define  HDMI_P2_PRBS_G_CTRL_get_prbs_bit_err(data)                              ((0x00003FF0&(data))>>4)
#define  HDMI_P2_PRBS_G_CTRL_get_prbs_lock(data)                                 ((0x00000008&(data))>>3)
#define  HDMI_P2_PRBS_G_CTRL_get_prbs_err_cnt_clr(data)                          ((0x00000004&(data))>>2)
#define  HDMI_P2_PRBS_G_CTRL_get_prbs_reverse(data)                              ((0x00000002&(data))>>1)
#define  HDMI_P2_PRBS_G_CTRL_get_prbs7_rxen(data)                                (0x00000001&(data))

#define  HDMI_P2_PRBS_B_CTRL                                                    0x1803C140
#define  HDMI_P2_PRBS_B_CTRL_reg_addr                                            "0xB803C140"
#define  HDMI_P2_PRBS_B_CTRL_reg                                                 0xB803C140
#define  HDMI_P2_PRBS_B_CTRL_inst_addr                                           "0x004D"
#define  set_HDMI_P2_PRBS_B_CTRL_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_PRBS_B_CTRL_reg)=data)
#define  get_HDMI_P2_PRBS_B_CTRL_reg                                             (*((volatile unsigned int*)HDMI_P2_PRBS_B_CTRL_reg))
#define  HDMI_P2_PRBS_B_CTRL_prbs23_rxen_shift                                   (28)
#define  HDMI_P2_PRBS_B_CTRL_prbs_rxbist_err_cnt_shift                           (20)
#define  HDMI_P2_PRBS_B_CTRL_prbs_err_cnt_shift                                  (16)
#define  HDMI_P2_PRBS_B_CTRL_prbs_bit_err_shift                                  (4)
#define  HDMI_P2_PRBS_B_CTRL_prbs_lock_shift                                     (3)
#define  HDMI_P2_PRBS_B_CTRL_prbs_err_cnt_clr_shift                              (2)
#define  HDMI_P2_PRBS_B_CTRL_prbs_reverse_shift                                  (1)
#define  HDMI_P2_PRBS_B_CTRL_prbs7_rxen_shift                                    (0)
#define  HDMI_P2_PRBS_B_CTRL_prbs23_rxen_mask                                    (0x10000000)
#define  HDMI_P2_PRBS_B_CTRL_prbs_rxbist_err_cnt_mask                            (0x0FF00000)
#define  HDMI_P2_PRBS_B_CTRL_prbs_err_cnt_mask                                   (0x000F0000)
#define  HDMI_P2_PRBS_B_CTRL_prbs_bit_err_mask                                   (0x00003FF0)
#define  HDMI_P2_PRBS_B_CTRL_prbs_lock_mask                                      (0x00000008)
#define  HDMI_P2_PRBS_B_CTRL_prbs_err_cnt_clr_mask                               (0x00000004)
#define  HDMI_P2_PRBS_B_CTRL_prbs_reverse_mask                                   (0x00000002)
#define  HDMI_P2_PRBS_B_CTRL_prbs7_rxen_mask                                     (0x00000001)
#define  HDMI_P2_PRBS_B_CTRL_prbs23_rxen(data)                                   (0x10000000&((data)<<28))
#define  HDMI_P2_PRBS_B_CTRL_prbs_rxbist_err_cnt(data)                           (0x0FF00000&((data)<<20))
#define  HDMI_P2_PRBS_B_CTRL_prbs_err_cnt(data)                                  (0x000F0000&((data)<<16))
#define  HDMI_P2_PRBS_B_CTRL_prbs_bit_err(data)                                  (0x00003FF0&((data)<<4))
#define  HDMI_P2_PRBS_B_CTRL_prbs_lock(data)                                     (0x00000008&((data)<<3))
#define  HDMI_P2_PRBS_B_CTRL_prbs_err_cnt_clr(data)                              (0x00000004&((data)<<2))
#define  HDMI_P2_PRBS_B_CTRL_prbs_reverse(data)                                  (0x00000002&((data)<<1))
#define  HDMI_P2_PRBS_B_CTRL_prbs7_rxen(data)                                    (0x00000001&(data))
#define  HDMI_P2_PRBS_B_CTRL_get_prbs23_rxen(data)                               ((0x10000000&(data))>>28)
#define  HDMI_P2_PRBS_B_CTRL_get_prbs_rxbist_err_cnt(data)                       ((0x0FF00000&(data))>>20)
#define  HDMI_P2_PRBS_B_CTRL_get_prbs_err_cnt(data)                              ((0x000F0000&(data))>>16)
#define  HDMI_P2_PRBS_B_CTRL_get_prbs_bit_err(data)                              ((0x00003FF0&(data))>>4)
#define  HDMI_P2_PRBS_B_CTRL_get_prbs_lock(data)                                 ((0x00000008&(data))>>3)
#define  HDMI_P2_PRBS_B_CTRL_get_prbs_err_cnt_clr(data)                          ((0x00000004&(data))>>2)
#define  HDMI_P2_PRBS_B_CTRL_get_prbs_reverse(data)                              ((0x00000002&(data))>>1)
#define  HDMI_P2_PRBS_B_CTRL_get_prbs7_rxen(data)                                (0x00000001&(data))

#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl                                       0x1803C144
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_reg_addr                               "0xB803C144"
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_reg                                    0xB803C144
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_inst_addr                              "0x004E"
#define  set_HDMI_P2_HDMI_leading_GB_cmp_ctrl_reg(data)                          (*((volatile unsigned int*)HDMI_P2_HDMI_leading_GB_cmp_ctrl_reg)=data)
#define  get_HDMI_P2_HDMI_leading_GB_cmp_ctrl_reg                                (*((volatile unsigned int*)HDMI_P2_HDMI_leading_GB_cmp_ctrl_reg))
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_cmp_err_flag_shift                     (30)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_cmp_err_int_en_shift                   (28)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_preamble_shift                         (24)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_cmp_value_shift                        (8)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_dvi_mode_sel_shift                     (4)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_channel_sel_shift                      (2)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_lgb_cal_conti_shift                    (1)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_lgb_cal_en_shift                       (0)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_cmp_err_flag_mask                      (0x40000000)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_cmp_err_int_en_mask                    (0x10000000)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_preamble_mask                          (0x0F000000)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_cmp_value_mask                         (0x0003FF00)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_dvi_mode_sel_mask                      (0x00000010)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_channel_sel_mask                       (0x0000000C)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_lgb_cal_conti_mask                     (0x00000002)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_lgb_cal_en_mask                        (0x00000001)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_cmp_err_flag(data)                     (0x40000000&((data)<<30))
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_cmp_err_int_en(data)                   (0x10000000&((data)<<28))
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_preamble(data)                         (0x0F000000&((data)<<24))
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_cmp_value(data)                        (0x0003FF00&((data)<<8))
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_dvi_mode_sel(data)                     (0x00000010&((data)<<4))
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_channel_sel(data)                      (0x0000000C&((data)<<2))
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_lgb_cal_conti(data)                    (0x00000002&((data)<<1))
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_lgb_cal_en(data)                       (0x00000001&(data))
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_get_cmp_err_flag(data)                 ((0x40000000&(data))>>30)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_get_cmp_err_int_en(data)               ((0x10000000&(data))>>28)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_get_preamble(data)                     ((0x0F000000&(data))>>24)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_get_cmp_value(data)                    ((0x0003FF00&(data))>>8)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_get_dvi_mode_sel(data)                 ((0x00000010&(data))>>4)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_get_channel_sel(data)                  ((0x0000000C&(data))>>2)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_get_lgb_cal_conti(data)                ((0x00000002&(data))>>1)
#define  HDMI_P2_HDMI_leading_GB_cmp_ctrl_get_lgb_cal_en(data)                   (0x00000001&(data))

#define  HDMI_P2_HDMI_leading_GB_cmp_times                                      0x1803C148
#define  HDMI_P2_HDMI_leading_GB_cmp_times_reg_addr                              "0xB803C148"
#define  HDMI_P2_HDMI_leading_GB_cmp_times_reg                                   0xB803C148
#define  HDMI_P2_HDMI_leading_GB_cmp_times_inst_addr                             "0x004F"
#define  set_HDMI_P2_HDMI_leading_GB_cmp_times_reg(data)                         (*((volatile unsigned int*)HDMI_P2_HDMI_leading_GB_cmp_times_reg)=data)
#define  get_HDMI_P2_HDMI_leading_GB_cmp_times_reg                               (*((volatile unsigned int*)HDMI_P2_HDMI_leading_GB_cmp_times_reg))
#define  HDMI_P2_HDMI_leading_GB_cmp_times_cmp_err_cnt_shift                     (16)
#define  HDMI_P2_HDMI_leading_GB_cmp_times_cmp_times_shift                       (0)
#define  HDMI_P2_HDMI_leading_GB_cmp_times_cmp_err_cnt_mask                      (0xFFFF0000)
#define  HDMI_P2_HDMI_leading_GB_cmp_times_cmp_times_mask                        (0x0000FFFF)
#define  HDMI_P2_HDMI_leading_GB_cmp_times_cmp_err_cnt(data)                     (0xFFFF0000&((data)<<16))
#define  HDMI_P2_HDMI_leading_GB_cmp_times_cmp_times(data)                       (0x0000FFFF&(data))
#define  HDMI_P2_HDMI_leading_GB_cmp_times_get_cmp_err_cnt(data)                 ((0xFFFF0000&(data))>>16)
#define  HDMI_P2_HDMI_leading_GB_cmp_times_get_cmp_times(data)                   (0x0000FFFF&(data))

#define  HDMI_P2_HDMI_leading_GB_cmp_cnt                                        0x1803C14C
#define  HDMI_P2_HDMI_leading_GB_cmp_cnt_reg_addr                                "0xB803C14C"
#define  HDMI_P2_HDMI_leading_GB_cmp_cnt_reg                                     0xB803C14C
#define  HDMI_P2_HDMI_leading_GB_cmp_cnt_inst_addr                               "0x0050"
#define  set_HDMI_P2_HDMI_leading_GB_cmp_cnt_reg(data)                           (*((volatile unsigned int*)HDMI_P2_HDMI_leading_GB_cmp_cnt_reg)=data)
#define  get_HDMI_P2_HDMI_leading_GB_cmp_cnt_reg                                 (*((volatile unsigned int*)HDMI_P2_HDMI_leading_GB_cmp_cnt_reg))
#define  HDMI_P2_HDMI_leading_GB_cmp_cnt_preamble_cmp_cnt_shift                  (16)
#define  HDMI_P2_HDMI_leading_GB_cmp_cnt_preamble_cmp_cnt_by_frame_shift         (0)
#define  HDMI_P2_HDMI_leading_GB_cmp_cnt_preamble_cmp_cnt_mask                   (0xFFFF0000)
#define  HDMI_P2_HDMI_leading_GB_cmp_cnt_preamble_cmp_cnt_by_frame_mask          (0x0000FFFF)
#define  HDMI_P2_HDMI_leading_GB_cmp_cnt_preamble_cmp_cnt(data)                  (0xFFFF0000&((data)<<16))
#define  HDMI_P2_HDMI_leading_GB_cmp_cnt_preamble_cmp_cnt_by_frame(data)         (0x0000FFFF&(data))
#define  HDMI_P2_HDMI_leading_GB_cmp_cnt_get_preamble_cmp_cnt(data)              ((0xFFFF0000&(data))>>16)
#define  HDMI_P2_HDMI_leading_GB_cmp_cnt_get_preamble_cmp_cnt_by_frame(data)     (0x0000FFFF&(data))

#define  HDMI_P2_AUDIO_CTS_UP_BOUND                                             0x1803C150
#define  HDMI_P2_AUDIO_CTS_UP_BOUND_reg_addr                                     "0xB803C150"
#define  HDMI_P2_AUDIO_CTS_UP_BOUND_reg                                          0xB803C150
#define  HDMI_P2_AUDIO_CTS_UP_BOUND_inst_addr                                    "0x0051"
#define  set_HDMI_P2_AUDIO_CTS_UP_BOUND_reg(data)                                (*((volatile unsigned int*)HDMI_P2_AUDIO_CTS_UP_BOUND_reg)=data)
#define  get_HDMI_P2_AUDIO_CTS_UP_BOUND_reg                                      (*((volatile unsigned int*)HDMI_P2_AUDIO_CTS_UP_BOUND_reg))
#define  HDMI_P2_AUDIO_CTS_UP_BOUND_cts_over_flag_shift                          (31)
#define  HDMI_P2_AUDIO_CTS_UP_BOUND_cts_up_bound_shift                           (0)
#define  HDMI_P2_AUDIO_CTS_UP_BOUND_cts_over_flag_mask                           (0x80000000)
#define  HDMI_P2_AUDIO_CTS_UP_BOUND_cts_up_bound_mask                            (0x000FFFFF)
#define  HDMI_P2_AUDIO_CTS_UP_BOUND_cts_over_flag(data)                          (0x80000000&((data)<<31))
#define  HDMI_P2_AUDIO_CTS_UP_BOUND_cts_up_bound(data)                           (0x000FFFFF&(data))
#define  HDMI_P2_AUDIO_CTS_UP_BOUND_get_cts_over_flag(data)                      ((0x80000000&(data))>>31)
#define  HDMI_P2_AUDIO_CTS_UP_BOUND_get_cts_up_bound(data)                       (0x000FFFFF&(data))

#define  HDMI_P2_AUDIO_CTS_LOW_BOUND                                            0x1803C154
#define  HDMI_P2_AUDIO_CTS_LOW_BOUND_reg_addr                                    "0xB803C154"
#define  HDMI_P2_AUDIO_CTS_LOW_BOUND_reg                                         0xB803C154
#define  HDMI_P2_AUDIO_CTS_LOW_BOUND_inst_addr                                   "0x0052"
#define  set_HDMI_P2_AUDIO_CTS_LOW_BOUND_reg(data)                               (*((volatile unsigned int*)HDMI_P2_AUDIO_CTS_LOW_BOUND_reg)=data)
#define  get_HDMI_P2_AUDIO_CTS_LOW_BOUND_reg                                     (*((volatile unsigned int*)HDMI_P2_AUDIO_CTS_LOW_BOUND_reg))
#define  HDMI_P2_AUDIO_CTS_LOW_BOUND_cts_under_flag_shift                        (31)
#define  HDMI_P2_AUDIO_CTS_LOW_BOUND_cts_low_bound_shift                         (0)
#define  HDMI_P2_AUDIO_CTS_LOW_BOUND_cts_under_flag_mask                         (0x80000000)
#define  HDMI_P2_AUDIO_CTS_LOW_BOUND_cts_low_bound_mask                          (0x000FFFFF)
#define  HDMI_P2_AUDIO_CTS_LOW_BOUND_cts_under_flag(data)                        (0x80000000&((data)<<31))
#define  HDMI_P2_AUDIO_CTS_LOW_BOUND_cts_low_bound(data)                         (0x000FFFFF&(data))
#define  HDMI_P2_AUDIO_CTS_LOW_BOUND_get_cts_under_flag(data)                    ((0x80000000&(data))>>31)
#define  HDMI_P2_AUDIO_CTS_LOW_BOUND_get_cts_low_bound(data)                     (0x000FFFFF&(data))

#define  HDMI_P2_AUDIO_N_UP_BOUND                                               0x1803C158
#define  HDMI_P2_AUDIO_N_UP_BOUND_reg_addr                                       "0xB803C158"
#define  HDMI_P2_AUDIO_N_UP_BOUND_reg                                            0xB803C158
#define  HDMI_P2_AUDIO_N_UP_BOUND_inst_addr                                      "0x0053"
#define  set_HDMI_P2_AUDIO_N_UP_BOUND_reg(data)                                  (*((volatile unsigned int*)HDMI_P2_AUDIO_N_UP_BOUND_reg)=data)
#define  get_HDMI_P2_AUDIO_N_UP_BOUND_reg                                        (*((volatile unsigned int*)HDMI_P2_AUDIO_N_UP_BOUND_reg))
#define  HDMI_P2_AUDIO_N_UP_BOUND_n_over_flag_shift                              (31)
#define  HDMI_P2_AUDIO_N_UP_BOUND_n_up_bound_shift                               (0)
#define  HDMI_P2_AUDIO_N_UP_BOUND_n_over_flag_mask                               (0x80000000)
#define  HDMI_P2_AUDIO_N_UP_BOUND_n_up_bound_mask                                (0x000FFFFF)
#define  HDMI_P2_AUDIO_N_UP_BOUND_n_over_flag(data)                              (0x80000000&((data)<<31))
#define  HDMI_P2_AUDIO_N_UP_BOUND_n_up_bound(data)                               (0x000FFFFF&(data))
#define  HDMI_P2_AUDIO_N_UP_BOUND_get_n_over_flag(data)                          ((0x80000000&(data))>>31)
#define  HDMI_P2_AUDIO_N_UP_BOUND_get_n_up_bound(data)                           (0x000FFFFF&(data))

#define  HDMI_P2_AUDIO_N_LOW_BOUND                                              0x1803C15C
#define  HDMI_P2_AUDIO_N_LOW_BOUND_reg_addr                                      "0xB803C15C"
#define  HDMI_P2_AUDIO_N_LOW_BOUND_reg                                           0xB803C15C
#define  HDMI_P2_AUDIO_N_LOW_BOUND_inst_addr                                     "0x0054"
#define  set_HDMI_P2_AUDIO_N_LOW_BOUND_reg(data)                                 (*((volatile unsigned int*)HDMI_P2_AUDIO_N_LOW_BOUND_reg)=data)
#define  get_HDMI_P2_AUDIO_N_LOW_BOUND_reg                                       (*((volatile unsigned int*)HDMI_P2_AUDIO_N_LOW_BOUND_reg))
#define  HDMI_P2_AUDIO_N_LOW_BOUND_n_under_flag_shift                            (31)
#define  HDMI_P2_AUDIO_N_LOW_BOUND_n_low_bound_shift                             (0)
#define  HDMI_P2_AUDIO_N_LOW_BOUND_n_under_flag_mask                             (0x80000000)
#define  HDMI_P2_AUDIO_N_LOW_BOUND_n_low_bound_mask                              (0x000FFFFF)
#define  HDMI_P2_AUDIO_N_LOW_BOUND_n_under_flag(data)                            (0x80000000&((data)<<31))
#define  HDMI_P2_AUDIO_N_LOW_BOUND_n_low_bound(data)                             (0x000FFFFF&(data))
#define  HDMI_P2_AUDIO_N_LOW_BOUND_get_n_under_flag(data)                        ((0x80000000&(data))>>31)
#define  HDMI_P2_AUDIO_N_LOW_BOUND_get_n_low_bound(data)                         (0x000FFFFF&(data))

#define  HDMI_P2_LIGHT_SLEEP                                                    0x1803C160
#define  HDMI_P2_LIGHT_SLEEP_reg_addr                                            "0xB803C160"
#define  HDMI_P2_LIGHT_SLEEP_reg                                                 0xB803C160
#define  HDMI_P2_LIGHT_SLEEP_inst_addr                                           "0x0055"
#define  set_HDMI_P2_LIGHT_SLEEP_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_LIGHT_SLEEP_reg)=data)
#define  get_HDMI_P2_LIGHT_SLEEP_reg                                             (*((volatile unsigned int*)HDMI_P2_LIGHT_SLEEP_reg))
#define  HDMI_P2_LIGHT_SLEEP_linebuf_ls2_shift                                   (17)
#define  HDMI_P2_LIGHT_SLEEP_linebuf_ls1_shift                                   (16)
#define  HDMI_P2_LIGHT_SLEEP_linebuf_ls0_shift                                   (15)
#define  HDMI_P2_LIGHT_SLEEP_hdr_ls_1_shift                                      (10)
#define  HDMI_P2_LIGHT_SLEEP_hdr_ls_0_shift                                      (9)
#define  HDMI_P2_LIGHT_SLEEP_yuv420_ls3_shift                                    (8)
#define  HDMI_P2_LIGHT_SLEEP_yuv420_ls2_shift                                    (7)
#define  HDMI_P2_LIGHT_SLEEP_yuv420_ls1_shift                                    (6)
#define  HDMI_P2_LIGHT_SLEEP_yuv420_ls0_shift                                    (5)
#define  HDMI_P2_LIGHT_SLEEP_audio_ls_shift                                      (0)
#define  HDMI_P2_LIGHT_SLEEP_linebuf_ls2_mask                                    (0x00020000)
#define  HDMI_P2_LIGHT_SLEEP_linebuf_ls1_mask                                    (0x00010000)
#define  HDMI_P2_LIGHT_SLEEP_linebuf_ls0_mask                                    (0x00008000)
#define  HDMI_P2_LIGHT_SLEEP_hdr_ls_1_mask                                       (0x00000400)
#define  HDMI_P2_LIGHT_SLEEP_hdr_ls_0_mask                                       (0x00000200)
#define  HDMI_P2_LIGHT_SLEEP_yuv420_ls3_mask                                     (0x00000100)
#define  HDMI_P2_LIGHT_SLEEP_yuv420_ls2_mask                                     (0x00000080)
#define  HDMI_P2_LIGHT_SLEEP_yuv420_ls1_mask                                     (0x00000040)
#define  HDMI_P2_LIGHT_SLEEP_yuv420_ls0_mask                                     (0x00000020)
#define  HDMI_P2_LIGHT_SLEEP_audio_ls_mask                                       (0x00000001)
#define  HDMI_P2_LIGHT_SLEEP_linebuf_ls2(data)                                   (0x00020000&((data)<<17))
#define  HDMI_P2_LIGHT_SLEEP_linebuf_ls1(data)                                   (0x00010000&((data)<<16))
#define  HDMI_P2_LIGHT_SLEEP_linebuf_ls0(data)                                   (0x00008000&((data)<<15))
#define  HDMI_P2_LIGHT_SLEEP_hdr_ls_1(data)                                      (0x00000400&((data)<<10))
#define  HDMI_P2_LIGHT_SLEEP_hdr_ls_0(data)                                      (0x00000200&((data)<<9))
#define  HDMI_P2_LIGHT_SLEEP_yuv420_ls3(data)                                    (0x00000100&((data)<<8))
#define  HDMI_P2_LIGHT_SLEEP_yuv420_ls2(data)                                    (0x00000080&((data)<<7))
#define  HDMI_P2_LIGHT_SLEEP_yuv420_ls1(data)                                    (0x00000040&((data)<<6))
#define  HDMI_P2_LIGHT_SLEEP_yuv420_ls0(data)                                    (0x00000020&((data)<<5))
#define  HDMI_P2_LIGHT_SLEEP_audio_ls(data)                                      (0x00000001&(data))
#define  HDMI_P2_LIGHT_SLEEP_get_linebuf_ls2(data)                               ((0x00020000&(data))>>17)
#define  HDMI_P2_LIGHT_SLEEP_get_linebuf_ls1(data)                               ((0x00010000&(data))>>16)
#define  HDMI_P2_LIGHT_SLEEP_get_linebuf_ls0(data)                               ((0x00008000&(data))>>15)
#define  HDMI_P2_LIGHT_SLEEP_get_hdr_ls_1(data)                                  ((0x00000400&(data))>>10)
#define  HDMI_P2_LIGHT_SLEEP_get_hdr_ls_0(data)                                  ((0x00000200&(data))>>9)
#define  HDMI_P2_LIGHT_SLEEP_get_yuv420_ls3(data)                                ((0x00000100&(data))>>8)
#define  HDMI_P2_LIGHT_SLEEP_get_yuv420_ls2(data)                                ((0x00000080&(data))>>7)
#define  HDMI_P2_LIGHT_SLEEP_get_yuv420_ls1(data)                                ((0x00000040&(data))>>6)
#define  HDMI_P2_LIGHT_SLEEP_get_yuv420_ls0(data)                                ((0x00000020&(data))>>5)
#define  HDMI_P2_LIGHT_SLEEP_get_audio_ls(data)                                  (0x00000001&(data))

#define  HDMI_P2_READ_MARGIN_ENABLE                                             0x1803C164
#define  HDMI_P2_READ_MARGIN_ENABLE_reg_addr                                     "0xB803C164"
#define  HDMI_P2_READ_MARGIN_ENABLE_reg                                          0xB803C164
#define  HDMI_P2_READ_MARGIN_ENABLE_inst_addr                                    "0x0056"
#define  set_HDMI_P2_READ_MARGIN_ENABLE_reg(data)                                (*((volatile unsigned int*)HDMI_P2_READ_MARGIN_ENABLE_reg)=data)
#define  get_HDMI_P2_READ_MARGIN_ENABLE_reg                                      (*((volatile unsigned int*)HDMI_P2_READ_MARGIN_ENABLE_reg))
#define  HDMI_P2_READ_MARGIN_ENABLE_linebuf_rme2_shift                           (23)
#define  HDMI_P2_READ_MARGIN_ENABLE_linebuf_rme1_shift                           (22)
#define  HDMI_P2_READ_MARGIN_ENABLE_linebuf_rme0_shift                           (21)
#define  HDMI_P2_READ_MARGIN_ENABLE_hdr_rmeb_1_shift                             (12)
#define  HDMI_P2_READ_MARGIN_ENABLE_hdr_rmeb_0_shift                             (11)
#define  HDMI_P2_READ_MARGIN_ENABLE_hdr_rmea_1_shift                             (10)
#define  HDMI_P2_READ_MARGIN_ENABLE_hdr_rmea_0_shift                             (9)
#define  HDMI_P2_READ_MARGIN_ENABLE_yuv420_rme3_shift                            (8)
#define  HDMI_P2_READ_MARGIN_ENABLE_yuv420_rme2_shift                            (7)
#define  HDMI_P2_READ_MARGIN_ENABLE_yuv420_rme1_shift                            (6)
#define  HDMI_P2_READ_MARGIN_ENABLE_yuv420_rme0_shift                            (5)
#define  HDMI_P2_READ_MARGIN_ENABLE_audio_rme_shift                              (0)
#define  HDMI_P2_READ_MARGIN_ENABLE_linebuf_rme2_mask                            (0x00800000)
#define  HDMI_P2_READ_MARGIN_ENABLE_linebuf_rme1_mask                            (0x00400000)
#define  HDMI_P2_READ_MARGIN_ENABLE_linebuf_rme0_mask                            (0x00200000)
#define  HDMI_P2_READ_MARGIN_ENABLE_hdr_rmeb_1_mask                              (0x00001000)
#define  HDMI_P2_READ_MARGIN_ENABLE_hdr_rmeb_0_mask                              (0x00000800)
#define  HDMI_P2_READ_MARGIN_ENABLE_hdr_rmea_1_mask                              (0x00000400)
#define  HDMI_P2_READ_MARGIN_ENABLE_hdr_rmea_0_mask                              (0x00000200)
#define  HDMI_P2_READ_MARGIN_ENABLE_yuv420_rme3_mask                             (0x00000100)
#define  HDMI_P2_READ_MARGIN_ENABLE_yuv420_rme2_mask                             (0x00000080)
#define  HDMI_P2_READ_MARGIN_ENABLE_yuv420_rme1_mask                             (0x00000040)
#define  HDMI_P2_READ_MARGIN_ENABLE_yuv420_rme0_mask                             (0x00000020)
#define  HDMI_P2_READ_MARGIN_ENABLE_audio_rme_mask                               (0x00000001)
#define  HDMI_P2_READ_MARGIN_ENABLE_linebuf_rme2(data)                           (0x00800000&((data)<<23))
#define  HDMI_P2_READ_MARGIN_ENABLE_linebuf_rme1(data)                           (0x00400000&((data)<<22))
#define  HDMI_P2_READ_MARGIN_ENABLE_linebuf_rme0(data)                           (0x00200000&((data)<<21))
#define  HDMI_P2_READ_MARGIN_ENABLE_hdr_rmeb_1(data)                             (0x00001000&((data)<<12))
#define  HDMI_P2_READ_MARGIN_ENABLE_hdr_rmeb_0(data)                             (0x00000800&((data)<<11))
#define  HDMI_P2_READ_MARGIN_ENABLE_hdr_rmea_1(data)                             (0x00000400&((data)<<10))
#define  HDMI_P2_READ_MARGIN_ENABLE_hdr_rmea_0(data)                             (0x00000200&((data)<<9))
#define  HDMI_P2_READ_MARGIN_ENABLE_yuv420_rme3(data)                            (0x00000100&((data)<<8))
#define  HDMI_P2_READ_MARGIN_ENABLE_yuv420_rme2(data)                            (0x00000080&((data)<<7))
#define  HDMI_P2_READ_MARGIN_ENABLE_yuv420_rme1(data)                            (0x00000040&((data)<<6))
#define  HDMI_P2_READ_MARGIN_ENABLE_yuv420_rme0(data)                            (0x00000020&((data)<<5))
#define  HDMI_P2_READ_MARGIN_ENABLE_audio_rme(data)                              (0x00000001&(data))
#define  HDMI_P2_READ_MARGIN_ENABLE_get_linebuf_rme2(data)                       ((0x00800000&(data))>>23)
#define  HDMI_P2_READ_MARGIN_ENABLE_get_linebuf_rme1(data)                       ((0x00400000&(data))>>22)
#define  HDMI_P2_READ_MARGIN_ENABLE_get_linebuf_rme0(data)                       ((0x00200000&(data))>>21)
#define  HDMI_P2_READ_MARGIN_ENABLE_get_hdr_rmeb_1(data)                         ((0x00001000&(data))>>12)
#define  HDMI_P2_READ_MARGIN_ENABLE_get_hdr_rmeb_0(data)                         ((0x00000800&(data))>>11)
#define  HDMI_P2_READ_MARGIN_ENABLE_get_hdr_rmea_1(data)                         ((0x00000400&(data))>>10)
#define  HDMI_P2_READ_MARGIN_ENABLE_get_hdr_rmea_0(data)                         ((0x00000200&(data))>>9)
#define  HDMI_P2_READ_MARGIN_ENABLE_get_yuv420_rme3(data)                        ((0x00000100&(data))>>8)
#define  HDMI_P2_READ_MARGIN_ENABLE_get_yuv420_rme2(data)                        ((0x00000080&(data))>>7)
#define  HDMI_P2_READ_MARGIN_ENABLE_get_yuv420_rme1(data)                        ((0x00000040&(data))>>6)
#define  HDMI_P2_READ_MARGIN_ENABLE_get_yuv420_rme0(data)                        ((0x00000020&(data))>>5)
#define  HDMI_P2_READ_MARGIN_ENABLE_get_audio_rme(data)                          (0x00000001&(data))

#define  HDMI_P2_READ_MARGIN3                                                   0x1803C168
#define  HDMI_P2_READ_MARGIN3_reg_addr                                           "0xB803C168"
#define  HDMI_P2_READ_MARGIN3_reg                                                0xB803C168
#define  HDMI_P2_READ_MARGIN3_inst_addr                                          "0x0057"
#define  set_HDMI_P2_READ_MARGIN3_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_READ_MARGIN3_reg)=data)
#define  get_HDMI_P2_READ_MARGIN3_reg                                            (*((volatile unsigned int*)HDMI_P2_READ_MARGIN3_reg))
#define  HDMI_P2_READ_MARGIN3_linebuf_test1_2_shift                              (14)
#define  HDMI_P2_READ_MARGIN3_linebuf_test1_1_shift                              (13)
#define  HDMI_P2_READ_MARGIN3_linebuf_test1_0_shift                              (12)
#define  HDMI_P2_READ_MARGIN3_linebuf_rm2_shift                                  (8)
#define  HDMI_P2_READ_MARGIN3_linebuf_rm1_shift                                  (4)
#define  HDMI_P2_READ_MARGIN3_linebuf_rm0_shift                                  (0)
#define  HDMI_P2_READ_MARGIN3_linebuf_test1_2_mask                               (0x00004000)
#define  HDMI_P2_READ_MARGIN3_linebuf_test1_1_mask                               (0x00002000)
#define  HDMI_P2_READ_MARGIN3_linebuf_test1_0_mask                               (0x00001000)
#define  HDMI_P2_READ_MARGIN3_linebuf_rm2_mask                                   (0x00000F00)
#define  HDMI_P2_READ_MARGIN3_linebuf_rm1_mask                                   (0x000000F0)
#define  HDMI_P2_READ_MARGIN3_linebuf_rm0_mask                                   (0x0000000F)
#define  HDMI_P2_READ_MARGIN3_linebuf_test1_2(data)                              (0x00004000&((data)<<14))
#define  HDMI_P2_READ_MARGIN3_linebuf_test1_1(data)                              (0x00002000&((data)<<13))
#define  HDMI_P2_READ_MARGIN3_linebuf_test1_0(data)                              (0x00001000&((data)<<12))
#define  HDMI_P2_READ_MARGIN3_linebuf_rm2(data)                                  (0x00000F00&((data)<<8))
#define  HDMI_P2_READ_MARGIN3_linebuf_rm1(data)                                  (0x000000F0&((data)<<4))
#define  HDMI_P2_READ_MARGIN3_linebuf_rm0(data)                                  (0x0000000F&(data))
#define  HDMI_P2_READ_MARGIN3_get_linebuf_test1_2(data)                          ((0x00004000&(data))>>14)
#define  HDMI_P2_READ_MARGIN3_get_linebuf_test1_1(data)                          ((0x00002000&(data))>>13)
#define  HDMI_P2_READ_MARGIN3_get_linebuf_test1_0(data)                          ((0x00001000&(data))>>12)
#define  HDMI_P2_READ_MARGIN3_get_linebuf_rm2(data)                              ((0x00000F00&(data))>>8)
#define  HDMI_P2_READ_MARGIN3_get_linebuf_rm1(data)                              ((0x000000F0&(data))>>4)
#define  HDMI_P2_READ_MARGIN3_get_linebuf_rm0(data)                              (0x0000000F&(data))

#define  HDMI_P2_READ_MARGIN1                                                   0x1803C170
#define  HDMI_P2_READ_MARGIN1_reg_addr                                           "0xB803C170"
#define  HDMI_P2_READ_MARGIN1_reg                                                0xB803C170
#define  HDMI_P2_READ_MARGIN1_inst_addr                                          "0x0058"
#define  set_HDMI_P2_READ_MARGIN1_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_READ_MARGIN1_reg)=data)
#define  get_HDMI_P2_READ_MARGIN1_reg                                            (*((volatile unsigned int*)HDMI_P2_READ_MARGIN1_reg))
#define  HDMI_P2_READ_MARGIN1_hdr_test1b_1_shift                                 (31)
#define  HDMI_P2_READ_MARGIN1_hdr_test1a_1_shift                                 (30)
#define  HDMI_P2_READ_MARGIN1_hdr_test1b_0_shift                                 (29)
#define  HDMI_P2_READ_MARGIN1_hdr_test1a_0_shift                                 (28)
#define  HDMI_P2_READ_MARGIN1_yuv420_test1_3_shift                               (23)
#define  HDMI_P2_READ_MARGIN1_yuv420_test1_2_shift                               (22)
#define  HDMI_P2_READ_MARGIN1_yuv420_test1_1_shift                               (21)
#define  HDMI_P2_READ_MARGIN1_yuv420_test1_0_shift                               (20)
#define  HDMI_P2_READ_MARGIN1_yuv420_rm3_shift                                   (12)
#define  HDMI_P2_READ_MARGIN1_yuv420_rm2_shift                                   (8)
#define  HDMI_P2_READ_MARGIN1_yuv420_rm1_shift                                   (4)
#define  HDMI_P2_READ_MARGIN1_yuv420_rm0_shift                                   (0)
#define  HDMI_P2_READ_MARGIN1_hdr_test1b_1_mask                                  (0x80000000)
#define  HDMI_P2_READ_MARGIN1_hdr_test1a_1_mask                                  (0x40000000)
#define  HDMI_P2_READ_MARGIN1_hdr_test1b_0_mask                                  (0x20000000)
#define  HDMI_P2_READ_MARGIN1_hdr_test1a_0_mask                                  (0x10000000)
#define  HDMI_P2_READ_MARGIN1_yuv420_test1_3_mask                                (0x00800000)
#define  HDMI_P2_READ_MARGIN1_yuv420_test1_2_mask                                (0x00400000)
#define  HDMI_P2_READ_MARGIN1_yuv420_test1_1_mask                                (0x00200000)
#define  HDMI_P2_READ_MARGIN1_yuv420_test1_0_mask                                (0x00100000)
#define  HDMI_P2_READ_MARGIN1_yuv420_rm3_mask                                    (0x0000F000)
#define  HDMI_P2_READ_MARGIN1_yuv420_rm2_mask                                    (0x00000F00)
#define  HDMI_P2_READ_MARGIN1_yuv420_rm1_mask                                    (0x000000F0)
#define  HDMI_P2_READ_MARGIN1_yuv420_rm0_mask                                    (0x0000000F)
#define  HDMI_P2_READ_MARGIN1_hdr_test1b_1(data)                                 (0x80000000&((data)<<31))
#define  HDMI_P2_READ_MARGIN1_hdr_test1a_1(data)                                 (0x40000000&((data)<<30))
#define  HDMI_P2_READ_MARGIN1_hdr_test1b_0(data)                                 (0x20000000&((data)<<29))
#define  HDMI_P2_READ_MARGIN1_hdr_test1a_0(data)                                 (0x10000000&((data)<<28))
#define  HDMI_P2_READ_MARGIN1_yuv420_test1_3(data)                               (0x00800000&((data)<<23))
#define  HDMI_P2_READ_MARGIN1_yuv420_test1_2(data)                               (0x00400000&((data)<<22))
#define  HDMI_P2_READ_MARGIN1_yuv420_test1_1(data)                               (0x00200000&((data)<<21))
#define  HDMI_P2_READ_MARGIN1_yuv420_test1_0(data)                               (0x00100000&((data)<<20))
#define  HDMI_P2_READ_MARGIN1_yuv420_rm3(data)                                   (0x0000F000&((data)<<12))
#define  HDMI_P2_READ_MARGIN1_yuv420_rm2(data)                                   (0x00000F00&((data)<<8))
#define  HDMI_P2_READ_MARGIN1_yuv420_rm1(data)                                   (0x000000F0&((data)<<4))
#define  HDMI_P2_READ_MARGIN1_yuv420_rm0(data)                                   (0x0000000F&(data))
#define  HDMI_P2_READ_MARGIN1_get_hdr_test1b_1(data)                             ((0x80000000&(data))>>31)
#define  HDMI_P2_READ_MARGIN1_get_hdr_test1a_1(data)                             ((0x40000000&(data))>>30)
#define  HDMI_P2_READ_MARGIN1_get_hdr_test1b_0(data)                             ((0x20000000&(data))>>29)
#define  HDMI_P2_READ_MARGIN1_get_hdr_test1a_0(data)                             ((0x10000000&(data))>>28)
#define  HDMI_P2_READ_MARGIN1_get_yuv420_test1_3(data)                           ((0x00800000&(data))>>23)
#define  HDMI_P2_READ_MARGIN1_get_yuv420_test1_2(data)                           ((0x00400000&(data))>>22)
#define  HDMI_P2_READ_MARGIN1_get_yuv420_test1_1(data)                           ((0x00200000&(data))>>21)
#define  HDMI_P2_READ_MARGIN1_get_yuv420_test1_0(data)                           ((0x00100000&(data))>>20)
#define  HDMI_P2_READ_MARGIN1_get_yuv420_rm3(data)                               ((0x0000F000&(data))>>12)
#define  HDMI_P2_READ_MARGIN1_get_yuv420_rm2(data)                               ((0x00000F00&(data))>>8)
#define  HDMI_P2_READ_MARGIN1_get_yuv420_rm1(data)                               ((0x000000F0&(data))>>4)
#define  HDMI_P2_READ_MARGIN1_get_yuv420_rm0(data)                               (0x0000000F&(data))

#define  HDMI_P2_READ_MARGIN0                                                   0x1803C174
#define  HDMI_P2_READ_MARGIN0_reg_addr                                           "0xB803C174"
#define  HDMI_P2_READ_MARGIN0_reg                                                0xB803C174
#define  HDMI_P2_READ_MARGIN0_inst_addr                                          "0x0059"
#define  set_HDMI_P2_READ_MARGIN0_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_READ_MARGIN0_reg)=data)
#define  get_HDMI_P2_READ_MARGIN0_reg                                            (*((volatile unsigned int*)HDMI_P2_READ_MARGIN0_reg))
#define  HDMI_P2_READ_MARGIN0_hdr_rmb_1_shift                                    (28)
#define  HDMI_P2_READ_MARGIN0_hdr_rmb_0_shift                                    (24)
#define  HDMI_P2_READ_MARGIN0_hdr_rma_1_shift                                    (20)
#define  HDMI_P2_READ_MARGIN0_hdr_rma_0_shift                                    (16)
#define  HDMI_P2_READ_MARGIN0_audio_test1_0_shift                                (8)
#define  HDMI_P2_READ_MARGIN0_audio_rm_shift                                     (0)
#define  HDMI_P2_READ_MARGIN0_hdr_rmb_1_mask                                     (0xF0000000)
#define  HDMI_P2_READ_MARGIN0_hdr_rmb_0_mask                                     (0x0F000000)
#define  HDMI_P2_READ_MARGIN0_hdr_rma_1_mask                                     (0x00F00000)
#define  HDMI_P2_READ_MARGIN0_hdr_rma_0_mask                                     (0x000F0000)
#define  HDMI_P2_READ_MARGIN0_audio_test1_0_mask                                 (0x00000100)
#define  HDMI_P2_READ_MARGIN0_audio_rm_mask                                      (0x0000000F)
#define  HDMI_P2_READ_MARGIN0_hdr_rmb_1(data)                                    (0xF0000000&((data)<<28))
#define  HDMI_P2_READ_MARGIN0_hdr_rmb_0(data)                                    (0x0F000000&((data)<<24))
#define  HDMI_P2_READ_MARGIN0_hdr_rma_1(data)                                    (0x00F00000&((data)<<20))
#define  HDMI_P2_READ_MARGIN0_hdr_rma_0(data)                                    (0x000F0000&((data)<<16))
#define  HDMI_P2_READ_MARGIN0_audio_test1_0(data)                                (0x00000100&((data)<<8))
#define  HDMI_P2_READ_MARGIN0_audio_rm(data)                                     (0x0000000F&(data))
#define  HDMI_P2_READ_MARGIN0_get_hdr_rmb_1(data)                                ((0xF0000000&(data))>>28)
#define  HDMI_P2_READ_MARGIN0_get_hdr_rmb_0(data)                                ((0x0F000000&(data))>>24)
#define  HDMI_P2_READ_MARGIN0_get_hdr_rma_1(data)                                ((0x00F00000&(data))>>20)
#define  HDMI_P2_READ_MARGIN0_get_hdr_rma_0(data)                                ((0x000F0000&(data))>>16)
#define  HDMI_P2_READ_MARGIN0_get_audio_test1_0(data)                            ((0x00000100&(data))>>8)
#define  HDMI_P2_READ_MARGIN0_get_audio_rm(data)                                 (0x0000000F&(data))

#define  HDMI_P2_BIST_MODE                                                      0x1803C178
#define  HDMI_P2_BIST_MODE_reg_addr                                              "0xB803C178"
#define  HDMI_P2_BIST_MODE_reg                                                   0xB803C178
#define  HDMI_P2_BIST_MODE_inst_addr                                             "0x005A"
#define  set_HDMI_P2_BIST_MODE_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_BIST_MODE_reg)=data)
#define  get_HDMI_P2_BIST_MODE_reg                                               (*((volatile unsigned int*)HDMI_P2_BIST_MODE_reg))
#define  HDMI_P2_BIST_MODE_linebuf_bist_en_shift                                 (8)
#define  HDMI_P2_BIST_MODE_hdr_bist_en_shift                                     (5)
#define  HDMI_P2_BIST_MODE_yuv420_bist_en_shift                                  (4)
#define  HDMI_P2_BIST_MODE_audio_bist_en_shift                                   (0)
#define  HDMI_P2_BIST_MODE_linebuf_bist_en_mask                                  (0x00000100)
#define  HDMI_P2_BIST_MODE_hdr_bist_en_mask                                      (0x00000020)
#define  HDMI_P2_BIST_MODE_yuv420_bist_en_mask                                   (0x00000010)
#define  HDMI_P2_BIST_MODE_audio_bist_en_mask                                    (0x00000001)
#define  HDMI_P2_BIST_MODE_linebuf_bist_en(data)                                 (0x00000100&((data)<<8))
#define  HDMI_P2_BIST_MODE_hdr_bist_en(data)                                     (0x00000020&((data)<<5))
#define  HDMI_P2_BIST_MODE_yuv420_bist_en(data)                                  (0x00000010&((data)<<4))
#define  HDMI_P2_BIST_MODE_audio_bist_en(data)                                   (0x00000001&(data))
#define  HDMI_P2_BIST_MODE_get_linebuf_bist_en(data)                             ((0x00000100&(data))>>8)
#define  HDMI_P2_BIST_MODE_get_hdr_bist_en(data)                                 ((0x00000020&(data))>>5)
#define  HDMI_P2_BIST_MODE_get_yuv420_bist_en(data)                              ((0x00000010&(data))>>4)
#define  HDMI_P2_BIST_MODE_get_audio_bist_en(data)                               (0x00000001&(data))

#define  HDMI_P2_BIST_DONE                                                      0x1803C17C
#define  HDMI_P2_BIST_DONE_reg_addr                                              "0xB803C17C"
#define  HDMI_P2_BIST_DONE_reg                                                   0xB803C17C
#define  HDMI_P2_BIST_DONE_inst_addr                                             "0x005B"
#define  set_HDMI_P2_BIST_DONE_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_BIST_DONE_reg)=data)
#define  get_HDMI_P2_BIST_DONE_reg                                               (*((volatile unsigned int*)HDMI_P2_BIST_DONE_reg))
#define  HDMI_P2_BIST_DONE_linebuf_bist_done_shift                               (8)
#define  HDMI_P2_BIST_DONE_hdr_bist_done_shift                                   (5)
#define  HDMI_P2_BIST_DONE_yuv420_bist_done_shift                                (4)
#define  HDMI_P2_BIST_DONE_audio_bist_done_shift                                 (0)
#define  HDMI_P2_BIST_DONE_linebuf_bist_done_mask                                (0x00000100)
#define  HDMI_P2_BIST_DONE_hdr_bist_done_mask                                    (0x00000020)
#define  HDMI_P2_BIST_DONE_yuv420_bist_done_mask                                 (0x00000010)
#define  HDMI_P2_BIST_DONE_audio_bist_done_mask                                  (0x00000001)
#define  HDMI_P2_BIST_DONE_linebuf_bist_done(data)                               (0x00000100&((data)<<8))
#define  HDMI_P2_BIST_DONE_hdr_bist_done(data)                                   (0x00000020&((data)<<5))
#define  HDMI_P2_BIST_DONE_yuv420_bist_done(data)                                (0x00000010&((data)<<4))
#define  HDMI_P2_BIST_DONE_audio_bist_done(data)                                 (0x00000001&(data))
#define  HDMI_P2_BIST_DONE_get_linebuf_bist_done(data)                           ((0x00000100&(data))>>8)
#define  HDMI_P2_BIST_DONE_get_hdr_bist_done(data)                               ((0x00000020&(data))>>5)
#define  HDMI_P2_BIST_DONE_get_yuv420_bist_done(data)                            ((0x00000010&(data))>>4)
#define  HDMI_P2_BIST_DONE_get_audio_bist_done(data)                             (0x00000001&(data))

#define  HDMI_P2_BIST_FAIL                                                      0x1803C180
#define  HDMI_P2_BIST_FAIL_reg_addr                                              "0xB803C180"
#define  HDMI_P2_BIST_FAIL_reg                                                   0xB803C180
#define  HDMI_P2_BIST_FAIL_inst_addr                                             "0x005C"
#define  set_HDMI_P2_BIST_FAIL_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_BIST_FAIL_reg)=data)
#define  get_HDMI_P2_BIST_FAIL_reg                                               (*((volatile unsigned int*)HDMI_P2_BIST_FAIL_reg))
#define  HDMI_P2_BIST_FAIL_linebuf_bist_fail_shift                               (12)
#define  HDMI_P2_BIST_FAIL_linebuf_bist_fail0_shift                              (11)
#define  HDMI_P2_BIST_FAIL_linebuf_bist_fail1_shift                              (10)
#define  HDMI_P2_BIST_FAIL_linebuf_bist_fail2_shift                              (9)
#define  HDMI_P2_BIST_FAIL_hdr_bist_fail_shift                                   (8)
#define  HDMI_P2_BIST_FAIL_hdr_bist_fail0_shift                                  (7)
#define  HDMI_P2_BIST_FAIL_hdr_bist_fail1_shift                                  (6)
#define  HDMI_P2_BIST_FAIL_yuv420_bist_fail_shift                                (5)
#define  HDMI_P2_BIST_FAIL_yuv420_bist_fail0_shift                               (4)
#define  HDMI_P2_BIST_FAIL_yuv420_bist_fail1_shift                               (3)
#define  HDMI_P2_BIST_FAIL_yuv420_bist_fail2_shift                               (2)
#define  HDMI_P2_BIST_FAIL_yuv420_bist_fail3_shift                               (1)
#define  HDMI_P2_BIST_FAIL_audio_bist_fail_shift                                 (0)
#define  HDMI_P2_BIST_FAIL_linebuf_bist_fail_mask                                (0x00001000)
#define  HDMI_P2_BIST_FAIL_linebuf_bist_fail0_mask                               (0x00000800)
#define  HDMI_P2_BIST_FAIL_linebuf_bist_fail1_mask                               (0x00000400)
#define  HDMI_P2_BIST_FAIL_linebuf_bist_fail2_mask                               (0x00000200)
#define  HDMI_P2_BIST_FAIL_hdr_bist_fail_mask                                    (0x00000100)
#define  HDMI_P2_BIST_FAIL_hdr_bist_fail0_mask                                   (0x00000080)
#define  HDMI_P2_BIST_FAIL_hdr_bist_fail1_mask                                   (0x00000040)
#define  HDMI_P2_BIST_FAIL_yuv420_bist_fail_mask                                 (0x00000020)
#define  HDMI_P2_BIST_FAIL_yuv420_bist_fail0_mask                                (0x00000010)
#define  HDMI_P2_BIST_FAIL_yuv420_bist_fail1_mask                                (0x00000008)
#define  HDMI_P2_BIST_FAIL_yuv420_bist_fail2_mask                                (0x00000004)
#define  HDMI_P2_BIST_FAIL_yuv420_bist_fail3_mask                                (0x00000002)
#define  HDMI_P2_BIST_FAIL_audio_bist_fail_mask                                  (0x00000001)
#define  HDMI_P2_BIST_FAIL_linebuf_bist_fail(data)                               (0x00001000&((data)<<12))
#define  HDMI_P2_BIST_FAIL_linebuf_bist_fail0(data)                              (0x00000800&((data)<<11))
#define  HDMI_P2_BIST_FAIL_linebuf_bist_fail1(data)                              (0x00000400&((data)<<10))
#define  HDMI_P2_BIST_FAIL_linebuf_bist_fail2(data)                              (0x00000200&((data)<<9))
#define  HDMI_P2_BIST_FAIL_hdr_bist_fail(data)                                   (0x00000100&((data)<<8))
#define  HDMI_P2_BIST_FAIL_hdr_bist_fail0(data)                                  (0x00000080&((data)<<7))
#define  HDMI_P2_BIST_FAIL_hdr_bist_fail1(data)                                  (0x00000040&((data)<<6))
#define  HDMI_P2_BIST_FAIL_yuv420_bist_fail(data)                                (0x00000020&((data)<<5))
#define  HDMI_P2_BIST_FAIL_yuv420_bist_fail0(data)                               (0x00000010&((data)<<4))
#define  HDMI_P2_BIST_FAIL_yuv420_bist_fail1(data)                               (0x00000008&((data)<<3))
#define  HDMI_P2_BIST_FAIL_yuv420_bist_fail2(data)                               (0x00000004&((data)<<2))
#define  HDMI_P2_BIST_FAIL_yuv420_bist_fail3(data)                               (0x00000002&((data)<<1))
#define  HDMI_P2_BIST_FAIL_audio_bist_fail(data)                                 (0x00000001&(data))
#define  HDMI_P2_BIST_FAIL_get_linebuf_bist_fail(data)                           ((0x00001000&(data))>>12)
#define  HDMI_P2_BIST_FAIL_get_linebuf_bist_fail0(data)                          ((0x00000800&(data))>>11)
#define  HDMI_P2_BIST_FAIL_get_linebuf_bist_fail1(data)                          ((0x00000400&(data))>>10)
#define  HDMI_P2_BIST_FAIL_get_linebuf_bist_fail2(data)                          ((0x00000200&(data))>>9)
#define  HDMI_P2_BIST_FAIL_get_hdr_bist_fail(data)                               ((0x00000100&(data))>>8)
#define  HDMI_P2_BIST_FAIL_get_hdr_bist_fail0(data)                              ((0x00000080&(data))>>7)
#define  HDMI_P2_BIST_FAIL_get_hdr_bist_fail1(data)                              ((0x00000040&(data))>>6)
#define  HDMI_P2_BIST_FAIL_get_yuv420_bist_fail(data)                            ((0x00000020&(data))>>5)
#define  HDMI_P2_BIST_FAIL_get_yuv420_bist_fail0(data)                           ((0x00000010&(data))>>4)
#define  HDMI_P2_BIST_FAIL_get_yuv420_bist_fail1(data)                           ((0x00000008&(data))>>3)
#define  HDMI_P2_BIST_FAIL_get_yuv420_bist_fail2(data)                           ((0x00000004&(data))>>2)
#define  HDMI_P2_BIST_FAIL_get_yuv420_bist_fail3(data)                           ((0x00000002&(data))>>1)
#define  HDMI_P2_BIST_FAIL_get_audio_bist_fail(data)                             (0x00000001&(data))

#define  HDMI_P2_DRF_MODE                                                       0x1803C184
#define  HDMI_P2_DRF_MODE_reg_addr                                               "0xB803C184"
#define  HDMI_P2_DRF_MODE_reg                                                    0xB803C184
#define  HDMI_P2_DRF_MODE_inst_addr                                              "0x005D"
#define  set_HDMI_P2_DRF_MODE_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_DRF_MODE_reg)=data)
#define  get_HDMI_P2_DRF_MODE_reg                                                (*((volatile unsigned int*)HDMI_P2_DRF_MODE_reg))
#define  HDMI_P2_DRF_MODE_linebuf_drf_mode_shift                                 (8)
#define  HDMI_P2_DRF_MODE_hdr_drf_mode_shift                                     (5)
#define  HDMI_P2_DRF_MODE_yuv420_drf_mode_shift                                  (4)
#define  HDMI_P2_DRF_MODE_audio_drf_mode_shift                                   (0)
#define  HDMI_P2_DRF_MODE_linebuf_drf_mode_mask                                  (0x00000100)
#define  HDMI_P2_DRF_MODE_hdr_drf_mode_mask                                      (0x00000020)
#define  HDMI_P2_DRF_MODE_yuv420_drf_mode_mask                                   (0x00000010)
#define  HDMI_P2_DRF_MODE_audio_drf_mode_mask                                    (0x00000001)
#define  HDMI_P2_DRF_MODE_linebuf_drf_mode(data)                                 (0x00000100&((data)<<8))
#define  HDMI_P2_DRF_MODE_hdr_drf_mode(data)                                     (0x00000020&((data)<<5))
#define  HDMI_P2_DRF_MODE_yuv420_drf_mode(data)                                  (0x00000010&((data)<<4))
#define  HDMI_P2_DRF_MODE_audio_drf_mode(data)                                   (0x00000001&(data))
#define  HDMI_P2_DRF_MODE_get_linebuf_drf_mode(data)                             ((0x00000100&(data))>>8)
#define  HDMI_P2_DRF_MODE_get_hdr_drf_mode(data)                                 ((0x00000020&(data))>>5)
#define  HDMI_P2_DRF_MODE_get_yuv420_drf_mode(data)                              ((0x00000010&(data))>>4)
#define  HDMI_P2_DRF_MODE_get_audio_drf_mode(data)                               (0x00000001&(data))

#define  HDMI_P2_DRF_RESUME                                                     0x1803C188
#define  HDMI_P2_DRF_RESUME_reg_addr                                             "0xB803C188"
#define  HDMI_P2_DRF_RESUME_reg                                                  0xB803C188
#define  HDMI_P2_DRF_RESUME_inst_addr                                            "0x005E"
#define  set_HDMI_P2_DRF_RESUME_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_DRF_RESUME_reg)=data)
#define  get_HDMI_P2_DRF_RESUME_reg                                              (*((volatile unsigned int*)HDMI_P2_DRF_RESUME_reg))
#define  HDMI_P2_DRF_RESUME_linebuf_drf_resume_shift                             (8)
#define  HDMI_P2_DRF_RESUME_hdr_drf_resume_shift                                 (5)
#define  HDMI_P2_DRF_RESUME_yuv420_drf_resume_shift                              (4)
#define  HDMI_P2_DRF_RESUME_audio_drf_resume_shift                               (0)
#define  HDMI_P2_DRF_RESUME_linebuf_drf_resume_mask                              (0x00000100)
#define  HDMI_P2_DRF_RESUME_hdr_drf_resume_mask                                  (0x00000020)
#define  HDMI_P2_DRF_RESUME_yuv420_drf_resume_mask                               (0x00000010)
#define  HDMI_P2_DRF_RESUME_audio_drf_resume_mask                                (0x00000001)
#define  HDMI_P2_DRF_RESUME_linebuf_drf_resume(data)                             (0x00000100&((data)<<8))
#define  HDMI_P2_DRF_RESUME_hdr_drf_resume(data)                                 (0x00000020&((data)<<5))
#define  HDMI_P2_DRF_RESUME_yuv420_drf_resume(data)                              (0x00000010&((data)<<4))
#define  HDMI_P2_DRF_RESUME_audio_drf_resume(data)                               (0x00000001&(data))
#define  HDMI_P2_DRF_RESUME_get_linebuf_drf_resume(data)                         ((0x00000100&(data))>>8)
#define  HDMI_P2_DRF_RESUME_get_hdr_drf_resume(data)                             ((0x00000020&(data))>>5)
#define  HDMI_P2_DRF_RESUME_get_yuv420_drf_resume(data)                          ((0x00000010&(data))>>4)
#define  HDMI_P2_DRF_RESUME_get_audio_drf_resume(data)                           (0x00000001&(data))

#define  HDMI_P2_DRF_DONE                                                       0x1803C18C
#define  HDMI_P2_DRF_DONE_reg_addr                                               "0xB803C18C"
#define  HDMI_P2_DRF_DONE_reg                                                    0xB803C18C
#define  HDMI_P2_DRF_DONE_inst_addr                                              "0x005F"
#define  set_HDMI_P2_DRF_DONE_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_DRF_DONE_reg)=data)
#define  get_HDMI_P2_DRF_DONE_reg                                                (*((volatile unsigned int*)HDMI_P2_DRF_DONE_reg))
#define  HDMI_P2_DRF_DONE_linebuf_drf_done_shift                                 (8)
#define  HDMI_P2_DRF_DONE_hdr_drf_done_shift                                     (5)
#define  HDMI_P2_DRF_DONE_yuv420_drf_done_shift                                  (4)
#define  HDMI_P2_DRF_DONE_audio_drf_done_shift                                   (0)
#define  HDMI_P2_DRF_DONE_linebuf_drf_done_mask                                  (0x00000100)
#define  HDMI_P2_DRF_DONE_hdr_drf_done_mask                                      (0x00000020)
#define  HDMI_P2_DRF_DONE_yuv420_drf_done_mask                                   (0x00000010)
#define  HDMI_P2_DRF_DONE_audio_drf_done_mask                                    (0x00000001)
#define  HDMI_P2_DRF_DONE_linebuf_drf_done(data)                                 (0x00000100&((data)<<8))
#define  HDMI_P2_DRF_DONE_hdr_drf_done(data)                                     (0x00000020&((data)<<5))
#define  HDMI_P2_DRF_DONE_yuv420_drf_done(data)                                  (0x00000010&((data)<<4))
#define  HDMI_P2_DRF_DONE_audio_drf_done(data)                                   (0x00000001&(data))
#define  HDMI_P2_DRF_DONE_get_linebuf_drf_done(data)                             ((0x00000100&(data))>>8)
#define  HDMI_P2_DRF_DONE_get_hdr_drf_done(data)                                 ((0x00000020&(data))>>5)
#define  HDMI_P2_DRF_DONE_get_yuv420_drf_done(data)                              ((0x00000010&(data))>>4)
#define  HDMI_P2_DRF_DONE_get_audio_drf_done(data)                               (0x00000001&(data))

#define  HDMI_P2_DRF_PAUSE                                                      0x1803C190
#define  HDMI_P2_DRF_PAUSE_reg_addr                                              "0xB803C190"
#define  HDMI_P2_DRF_PAUSE_reg                                                   0xB803C190
#define  HDMI_P2_DRF_PAUSE_inst_addr                                             "0x0060"
#define  set_HDMI_P2_DRF_PAUSE_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_DRF_PAUSE_reg)=data)
#define  get_HDMI_P2_DRF_PAUSE_reg                                               (*((volatile unsigned int*)HDMI_P2_DRF_PAUSE_reg))
#define  HDMI_P2_DRF_PAUSE_linebuf_drf_pause_shift                               (8)
#define  HDMI_P2_DRF_PAUSE_hdr_drf_pause_shift                                   (5)
#define  HDMI_P2_DRF_PAUSE_yuv420_drf_pause_shift                                (4)
#define  HDMI_P2_DRF_PAUSE_audio_drf_pause_shift                                 (0)
#define  HDMI_P2_DRF_PAUSE_linebuf_drf_pause_mask                                (0x00000100)
#define  HDMI_P2_DRF_PAUSE_hdr_drf_pause_mask                                    (0x00000020)
#define  HDMI_P2_DRF_PAUSE_yuv420_drf_pause_mask                                 (0x00000010)
#define  HDMI_P2_DRF_PAUSE_audio_drf_pause_mask                                  (0x00000001)
#define  HDMI_P2_DRF_PAUSE_linebuf_drf_pause(data)                               (0x00000100&((data)<<8))
#define  HDMI_P2_DRF_PAUSE_hdr_drf_pause(data)                                   (0x00000020&((data)<<5))
#define  HDMI_P2_DRF_PAUSE_yuv420_drf_pause(data)                                (0x00000010&((data)<<4))
#define  HDMI_P2_DRF_PAUSE_audio_drf_pause(data)                                 (0x00000001&(data))
#define  HDMI_P2_DRF_PAUSE_get_linebuf_drf_pause(data)                           ((0x00000100&(data))>>8)
#define  HDMI_P2_DRF_PAUSE_get_hdr_drf_pause(data)                               ((0x00000020&(data))>>5)
#define  HDMI_P2_DRF_PAUSE_get_yuv420_drf_pause(data)                            ((0x00000010&(data))>>4)
#define  HDMI_P2_DRF_PAUSE_get_audio_drf_pause(data)                             (0x00000001&(data))

#define  HDMI_P2_DRF_FAIL                                                       0x1803C194
#define  HDMI_P2_DRF_FAIL_reg_addr                                               "0xB803C194"
#define  HDMI_P2_DRF_FAIL_reg                                                    0xB803C194
#define  HDMI_P2_DRF_FAIL_inst_addr                                              "0x0061"
#define  set_HDMI_P2_DRF_FAIL_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_DRF_FAIL_reg)=data)
#define  get_HDMI_P2_DRF_FAIL_reg                                                (*((volatile unsigned int*)HDMI_P2_DRF_FAIL_reg))
#define  HDMI_P2_DRF_FAIL_linebuf_drf_fail_shift                                 (12)
#define  HDMI_P2_DRF_FAIL_linebuf_drf_fail0_shift                                (11)
#define  HDMI_P2_DRF_FAIL_linebuf_drf_fail1_shift                                (10)
#define  HDMI_P2_DRF_FAIL_linebuf_drf_fail2_shift                                (9)
#define  HDMI_P2_DRF_FAIL_hdr_drf_fail_shift                                     (8)
#define  HDMI_P2_DRF_FAIL_hdr_drf_fail0_shift                                    (7)
#define  HDMI_P2_DRF_FAIL_hdr_drf_fail1_shift                                    (6)
#define  HDMI_P2_DRF_FAIL_yuv420_drf_fail_shift                                  (5)
#define  HDMI_P2_DRF_FAIL_yuv420_drf_fail0_shift                                 (4)
#define  HDMI_P2_DRF_FAIL_yuv420_drf_fail1_shift                                 (3)
#define  HDMI_P2_DRF_FAIL_yuv420_drf_fail2_shift                                 (2)
#define  HDMI_P2_DRF_FAIL_yuv420_drf_fail3_shift                                 (1)
#define  HDMI_P2_DRF_FAIL_audio_drf_fail_shift                                   (0)
#define  HDMI_P2_DRF_FAIL_linebuf_drf_fail_mask                                  (0x00001000)
#define  HDMI_P2_DRF_FAIL_linebuf_drf_fail0_mask                                 (0x00000800)
#define  HDMI_P2_DRF_FAIL_linebuf_drf_fail1_mask                                 (0x00000400)
#define  HDMI_P2_DRF_FAIL_linebuf_drf_fail2_mask                                 (0x00000200)
#define  HDMI_P2_DRF_FAIL_hdr_drf_fail_mask                                      (0x00000100)
#define  HDMI_P2_DRF_FAIL_hdr_drf_fail0_mask                                     (0x00000080)
#define  HDMI_P2_DRF_FAIL_hdr_drf_fail1_mask                                     (0x00000040)
#define  HDMI_P2_DRF_FAIL_yuv420_drf_fail_mask                                   (0x00000020)
#define  HDMI_P2_DRF_FAIL_yuv420_drf_fail0_mask                                  (0x00000010)
#define  HDMI_P2_DRF_FAIL_yuv420_drf_fail1_mask                                  (0x00000008)
#define  HDMI_P2_DRF_FAIL_yuv420_drf_fail2_mask                                  (0x00000004)
#define  HDMI_P2_DRF_FAIL_yuv420_drf_fail3_mask                                  (0x00000002)
#define  HDMI_P2_DRF_FAIL_audio_drf_fail_mask                                    (0x00000001)
#define  HDMI_P2_DRF_FAIL_linebuf_drf_fail(data)                                 (0x00001000&((data)<<12))
#define  HDMI_P2_DRF_FAIL_linebuf_drf_fail0(data)                                (0x00000800&((data)<<11))
#define  HDMI_P2_DRF_FAIL_linebuf_drf_fail1(data)                                (0x00000400&((data)<<10))
#define  HDMI_P2_DRF_FAIL_linebuf_drf_fail2(data)                                (0x00000200&((data)<<9))
#define  HDMI_P2_DRF_FAIL_hdr_drf_fail(data)                                     (0x00000100&((data)<<8))
#define  HDMI_P2_DRF_FAIL_hdr_drf_fail0(data)                                    (0x00000080&((data)<<7))
#define  HDMI_P2_DRF_FAIL_hdr_drf_fail1(data)                                    (0x00000040&((data)<<6))
#define  HDMI_P2_DRF_FAIL_yuv420_drf_fail(data)                                  (0x00000020&((data)<<5))
#define  HDMI_P2_DRF_FAIL_yuv420_drf_fail0(data)                                 (0x00000010&((data)<<4))
#define  HDMI_P2_DRF_FAIL_yuv420_drf_fail1(data)                                 (0x00000008&((data)<<3))
#define  HDMI_P2_DRF_FAIL_yuv420_drf_fail2(data)                                 (0x00000004&((data)<<2))
#define  HDMI_P2_DRF_FAIL_yuv420_drf_fail3(data)                                 (0x00000002&((data)<<1))
#define  HDMI_P2_DRF_FAIL_audio_drf_fail(data)                                   (0x00000001&(data))
#define  HDMI_P2_DRF_FAIL_get_linebuf_drf_fail(data)                             ((0x00001000&(data))>>12)
#define  HDMI_P2_DRF_FAIL_get_linebuf_drf_fail0(data)                            ((0x00000800&(data))>>11)
#define  HDMI_P2_DRF_FAIL_get_linebuf_drf_fail1(data)                            ((0x00000400&(data))>>10)
#define  HDMI_P2_DRF_FAIL_get_linebuf_drf_fail2(data)                            ((0x00000200&(data))>>9)
#define  HDMI_P2_DRF_FAIL_get_hdr_drf_fail(data)                                 ((0x00000100&(data))>>8)
#define  HDMI_P2_DRF_FAIL_get_hdr_drf_fail0(data)                                ((0x00000080&(data))>>7)
#define  HDMI_P2_DRF_FAIL_get_hdr_drf_fail1(data)                                ((0x00000040&(data))>>6)
#define  HDMI_P2_DRF_FAIL_get_yuv420_drf_fail(data)                              ((0x00000020&(data))>>5)
#define  HDMI_P2_DRF_FAIL_get_yuv420_drf_fail0(data)                             ((0x00000010&(data))>>4)
#define  HDMI_P2_DRF_FAIL_get_yuv420_drf_fail1(data)                             ((0x00000008&(data))>>3)
#define  HDMI_P2_DRF_FAIL_get_yuv420_drf_fail2(data)                             ((0x00000004&(data))>>2)
#define  HDMI_P2_DRF_FAIL_get_yuv420_drf_fail3(data)                             ((0x00000002&(data))>>1)
#define  HDMI_P2_DRF_FAIL_get_audio_drf_fail(data)                               (0x00000001&(data))

#define  HDMI_P2_PHY_FIFO_CR0                                                   0x1803C198
#define  HDMI_P2_PHY_FIFO_CR0_reg_addr                                           "0xB803C198"
#define  HDMI_P2_PHY_FIFO_CR0_reg                                                0xB803C198
#define  HDMI_P2_PHY_FIFO_CR0_inst_addr                                          "0x0062"
#define  set_HDMI_P2_PHY_FIFO_CR0_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_PHY_FIFO_CR0_reg)=data)
#define  get_HDMI_P2_PHY_FIFO_CR0_reg                                            (*((volatile unsigned int*)HDMI_P2_PHY_FIFO_CR0_reg))
#define  HDMI_P2_PHY_FIFO_CR0_port3_r_flush_shift                                (26)
#define  HDMI_P2_PHY_FIFO_CR0_port3_r_afifo_en_shift                             (25)
#define  HDMI_P2_PHY_FIFO_CR0_port3_g_flush_shift                                (24)
#define  HDMI_P2_PHY_FIFO_CR0_port3_g_afifo_en_shift                             (23)
#define  HDMI_P2_PHY_FIFO_CR0_port3_b_flush_shift                                (22)
#define  HDMI_P2_PHY_FIFO_CR0_port3_b_afifo_en_shift                             (21)
#define  HDMI_P2_PHY_FIFO_CR0_dummy_20_shift                                     (20)
#define  HDMI_P2_PHY_FIFO_CR0_port2_r_flush_shift                                (19)
#define  HDMI_P2_PHY_FIFO_CR0_port2_r_afifo_en_shift                             (18)
#define  HDMI_P2_PHY_FIFO_CR0_port2_g_flush_shift                                (17)
#define  HDMI_P2_PHY_FIFO_CR0_port2_g_afifo_en_shift                             (16)
#define  HDMI_P2_PHY_FIFO_CR0_port2_b_flush_shift                                (15)
#define  HDMI_P2_PHY_FIFO_CR0_port2_b_afifo_en_shift                             (14)
#define  HDMI_P2_PHY_FIFO_CR0_dummy_13_shift                                     (13)
#define  HDMI_P2_PHY_FIFO_CR0_port1_r_flush_shift                                (12)
#define  HDMI_P2_PHY_FIFO_CR0_port1_r_afifo_en_shift                             (11)
#define  HDMI_P2_PHY_FIFO_CR0_port1_g_flush_shift                                (10)
#define  HDMI_P2_PHY_FIFO_CR0_port1_g_afifo_en_shift                             (9)
#define  HDMI_P2_PHY_FIFO_CR0_port1_b_flush_shift                                (8)
#define  HDMI_P2_PHY_FIFO_CR0_port1_b_afifo_en_shift                             (7)
#define  HDMI_P2_PHY_FIFO_CR0_dummy_6_shift                                      (6)
#define  HDMI_P2_PHY_FIFO_CR0_port0_r_flush_shift                                (5)
#define  HDMI_P2_PHY_FIFO_CR0_port0_r_afifo_en_shift                             (4)
#define  HDMI_P2_PHY_FIFO_CR0_port0_g_flush_shift                                (3)
#define  HDMI_P2_PHY_FIFO_CR0_port0_g_afifo_en_shift                             (2)
#define  HDMI_P2_PHY_FIFO_CR0_port0_b_flush_shift                                (1)
#define  HDMI_P2_PHY_FIFO_CR0_port0_b_afifo_en_shift                             (0)
#define  HDMI_P2_PHY_FIFO_CR0_port3_r_flush_mask                                 (0x04000000)
#define  HDMI_P2_PHY_FIFO_CR0_port3_r_afifo_en_mask                              (0x02000000)
#define  HDMI_P2_PHY_FIFO_CR0_port3_g_flush_mask                                 (0x01000000)
#define  HDMI_P2_PHY_FIFO_CR0_port3_g_afifo_en_mask                              (0x00800000)
#define  HDMI_P2_PHY_FIFO_CR0_port3_b_flush_mask                                 (0x00400000)
#define  HDMI_P2_PHY_FIFO_CR0_port3_b_afifo_en_mask                              (0x00200000)
#define  HDMI_P2_PHY_FIFO_CR0_dummy_20_mask                                      (0x00100000)
#define  HDMI_P2_PHY_FIFO_CR0_port2_r_flush_mask                                 (0x00080000)
#define  HDMI_P2_PHY_FIFO_CR0_port2_r_afifo_en_mask                              (0x00040000)
#define  HDMI_P2_PHY_FIFO_CR0_port2_g_flush_mask                                 (0x00020000)
#define  HDMI_P2_PHY_FIFO_CR0_port2_g_afifo_en_mask                              (0x00010000)
#define  HDMI_P2_PHY_FIFO_CR0_port2_b_flush_mask                                 (0x00008000)
#define  HDMI_P2_PHY_FIFO_CR0_port2_b_afifo_en_mask                              (0x00004000)
#define  HDMI_P2_PHY_FIFO_CR0_dummy_13_mask                                      (0x00002000)
#define  HDMI_P2_PHY_FIFO_CR0_port1_r_flush_mask                                 (0x00001000)
#define  HDMI_P2_PHY_FIFO_CR0_port1_r_afifo_en_mask                              (0x00000800)
#define  HDMI_P2_PHY_FIFO_CR0_port1_g_flush_mask                                 (0x00000400)
#define  HDMI_P2_PHY_FIFO_CR0_port1_g_afifo_en_mask                              (0x00000200)
#define  HDMI_P2_PHY_FIFO_CR0_port1_b_flush_mask                                 (0x00000100)
#define  HDMI_P2_PHY_FIFO_CR0_port1_b_afifo_en_mask                              (0x00000080)
#define  HDMI_P2_PHY_FIFO_CR0_dummy_6_mask                                       (0x00000040)
#define  HDMI_P2_PHY_FIFO_CR0_port0_r_flush_mask                                 (0x00000020)
#define  HDMI_P2_PHY_FIFO_CR0_port0_r_afifo_en_mask                              (0x00000010)
#define  HDMI_P2_PHY_FIFO_CR0_port0_g_flush_mask                                 (0x00000008)
#define  HDMI_P2_PHY_FIFO_CR0_port0_g_afifo_en_mask                              (0x00000004)
#define  HDMI_P2_PHY_FIFO_CR0_port0_b_flush_mask                                 (0x00000002)
#define  HDMI_P2_PHY_FIFO_CR0_port0_b_afifo_en_mask                              (0x00000001)
#define  HDMI_P2_PHY_FIFO_CR0_port3_r_flush(data)                                (0x04000000&((data)<<26))
#define  HDMI_P2_PHY_FIFO_CR0_port3_r_afifo_en(data)                             (0x02000000&((data)<<25))
#define  HDMI_P2_PHY_FIFO_CR0_port3_g_flush(data)                                (0x01000000&((data)<<24))
#define  HDMI_P2_PHY_FIFO_CR0_port3_g_afifo_en(data)                             (0x00800000&((data)<<23))
#define  HDMI_P2_PHY_FIFO_CR0_port3_b_flush(data)                                (0x00400000&((data)<<22))
#define  HDMI_P2_PHY_FIFO_CR0_port3_b_afifo_en(data)                             (0x00200000&((data)<<21))
#define  HDMI_P2_PHY_FIFO_CR0_dummy_20(data)                                     (0x00100000&((data)<<20))
#define  HDMI_P2_PHY_FIFO_CR0_port2_r_flush(data)                                (0x00080000&((data)<<19))
#define  HDMI_P2_PHY_FIFO_CR0_port2_r_afifo_en(data)                             (0x00040000&((data)<<18))
#define  HDMI_P2_PHY_FIFO_CR0_port2_g_flush(data)                                (0x00020000&((data)<<17))
#define  HDMI_P2_PHY_FIFO_CR0_port2_g_afifo_en(data)                             (0x00010000&((data)<<16))
#define  HDMI_P2_PHY_FIFO_CR0_port2_b_flush(data)                                (0x00008000&((data)<<15))
#define  HDMI_P2_PHY_FIFO_CR0_port2_b_afifo_en(data)                             (0x00004000&((data)<<14))
#define  HDMI_P2_PHY_FIFO_CR0_dummy_13(data)                                     (0x00002000&((data)<<13))
#define  HDMI_P2_PHY_FIFO_CR0_port1_r_flush(data)                                (0x00001000&((data)<<12))
#define  HDMI_P2_PHY_FIFO_CR0_port1_r_afifo_en(data)                             (0x00000800&((data)<<11))
#define  HDMI_P2_PHY_FIFO_CR0_port1_g_flush(data)                                (0x00000400&((data)<<10))
#define  HDMI_P2_PHY_FIFO_CR0_port1_g_afifo_en(data)                             (0x00000200&((data)<<9))
#define  HDMI_P2_PHY_FIFO_CR0_port1_b_flush(data)                                (0x00000100&((data)<<8))
#define  HDMI_P2_PHY_FIFO_CR0_port1_b_afifo_en(data)                             (0x00000080&((data)<<7))
#define  HDMI_P2_PHY_FIFO_CR0_dummy_6(data)                                      (0x00000040&((data)<<6))
#define  HDMI_P2_PHY_FIFO_CR0_port0_r_flush(data)                                (0x00000020&((data)<<5))
#define  HDMI_P2_PHY_FIFO_CR0_port0_r_afifo_en(data)                             (0x00000010&((data)<<4))
#define  HDMI_P2_PHY_FIFO_CR0_port0_g_flush(data)                                (0x00000008&((data)<<3))
#define  HDMI_P2_PHY_FIFO_CR0_port0_g_afifo_en(data)                             (0x00000004&((data)<<2))
#define  HDMI_P2_PHY_FIFO_CR0_port0_b_flush(data)                                (0x00000002&((data)<<1))
#define  HDMI_P2_PHY_FIFO_CR0_port0_b_afifo_en(data)                             (0x00000001&(data))
#define  HDMI_P2_PHY_FIFO_CR0_get_port3_r_flush(data)                            ((0x04000000&(data))>>26)
#define  HDMI_P2_PHY_FIFO_CR0_get_port3_r_afifo_en(data)                         ((0x02000000&(data))>>25)
#define  HDMI_P2_PHY_FIFO_CR0_get_port3_g_flush(data)                            ((0x01000000&(data))>>24)
#define  HDMI_P2_PHY_FIFO_CR0_get_port3_g_afifo_en(data)                         ((0x00800000&(data))>>23)
#define  HDMI_P2_PHY_FIFO_CR0_get_port3_b_flush(data)                            ((0x00400000&(data))>>22)
#define  HDMI_P2_PHY_FIFO_CR0_get_port3_b_afifo_en(data)                         ((0x00200000&(data))>>21)
#define  HDMI_P2_PHY_FIFO_CR0_get_dummy_20(data)                                 ((0x00100000&(data))>>20)
#define  HDMI_P2_PHY_FIFO_CR0_get_port2_r_flush(data)                            ((0x00080000&(data))>>19)
#define  HDMI_P2_PHY_FIFO_CR0_get_port2_r_afifo_en(data)                         ((0x00040000&(data))>>18)
#define  HDMI_P2_PHY_FIFO_CR0_get_port2_g_flush(data)                            ((0x00020000&(data))>>17)
#define  HDMI_P2_PHY_FIFO_CR0_get_port2_g_afifo_en(data)                         ((0x00010000&(data))>>16)
#define  HDMI_P2_PHY_FIFO_CR0_get_port2_b_flush(data)                            ((0x00008000&(data))>>15)
#define  HDMI_P2_PHY_FIFO_CR0_get_port2_b_afifo_en(data)                         ((0x00004000&(data))>>14)
#define  HDMI_P2_PHY_FIFO_CR0_get_dummy_13(data)                                 ((0x00002000&(data))>>13)
#define  HDMI_P2_PHY_FIFO_CR0_get_port1_r_flush(data)                            ((0x00001000&(data))>>12)
#define  HDMI_P2_PHY_FIFO_CR0_get_port1_r_afifo_en(data)                         ((0x00000800&(data))>>11)
#define  HDMI_P2_PHY_FIFO_CR0_get_port1_g_flush(data)                            ((0x00000400&(data))>>10)
#define  HDMI_P2_PHY_FIFO_CR0_get_port1_g_afifo_en(data)                         ((0x00000200&(data))>>9)
#define  HDMI_P2_PHY_FIFO_CR0_get_port1_b_flush(data)                            ((0x00000100&(data))>>8)
#define  HDMI_P2_PHY_FIFO_CR0_get_port1_b_afifo_en(data)                         ((0x00000080&(data))>>7)
#define  HDMI_P2_PHY_FIFO_CR0_get_dummy_6(data)                                  ((0x00000040&(data))>>6)
#define  HDMI_P2_PHY_FIFO_CR0_get_port0_r_flush(data)                            ((0x00000020&(data))>>5)
#define  HDMI_P2_PHY_FIFO_CR0_get_port0_r_afifo_en(data)                         ((0x00000010&(data))>>4)
#define  HDMI_P2_PHY_FIFO_CR0_get_port0_g_flush(data)                            ((0x00000008&(data))>>3)
#define  HDMI_P2_PHY_FIFO_CR0_get_port0_g_afifo_en(data)                         ((0x00000004&(data))>>2)
#define  HDMI_P2_PHY_FIFO_CR0_get_port0_b_flush(data)                            ((0x00000002&(data))>>1)
#define  HDMI_P2_PHY_FIFO_CR0_get_port0_b_afifo_en(data)                         (0x00000001&(data))

#define  HDMI_P2_PHY_FIFO_CR1                                                   0x1803C19C
#define  HDMI_P2_PHY_FIFO_CR1_reg_addr                                           "0xB803C19C"
#define  HDMI_P2_PHY_FIFO_CR1_reg                                                0xB803C19C
#define  HDMI_P2_PHY_FIFO_CR1_inst_addr                                          "0x0063"
#define  set_HDMI_P2_PHY_FIFO_CR1_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_PHY_FIFO_CR1_reg)=data)
#define  get_HDMI_P2_PHY_FIFO_CR1_reg                                            (*((volatile unsigned int*)HDMI_P2_PHY_FIFO_CR1_reg))
#define  HDMI_P2_PHY_FIFO_CR1_port3_rclk_inv_shift                               (11)
#define  HDMI_P2_PHY_FIFO_CR1_port3_gclk_inv_shift                               (10)
#define  HDMI_P2_PHY_FIFO_CR1_port3_bclk_inv_shift                               (9)
#define  HDMI_P2_PHY_FIFO_CR1_port2_rclk_inv_shift                               (8)
#define  HDMI_P2_PHY_FIFO_CR1_port2_gclk_inv_shift                               (7)
#define  HDMI_P2_PHY_FIFO_CR1_port2_bclk_inv_shift                               (6)
#define  HDMI_P2_PHY_FIFO_CR1_port1_rclk_inv_shift                               (5)
#define  HDMI_P2_PHY_FIFO_CR1_port1_gclk_inv_shift                               (4)
#define  HDMI_P2_PHY_FIFO_CR1_port1_bclk_inv_shift                               (3)
#define  HDMI_P2_PHY_FIFO_CR1_port0_rclk_inv_shift                               (2)
#define  HDMI_P2_PHY_FIFO_CR1_port0_gclk_inv_shift                               (1)
#define  HDMI_P2_PHY_FIFO_CR1_port0_bclk_inv_shift                               (0)
#define  HDMI_P2_PHY_FIFO_CR1_port3_rclk_inv_mask                                (0x00000800)
#define  HDMI_P2_PHY_FIFO_CR1_port3_gclk_inv_mask                                (0x00000400)
#define  HDMI_P2_PHY_FIFO_CR1_port3_bclk_inv_mask                                (0x00000200)
#define  HDMI_P2_PHY_FIFO_CR1_port2_rclk_inv_mask                                (0x00000100)
#define  HDMI_P2_PHY_FIFO_CR1_port2_gclk_inv_mask                                (0x00000080)
#define  HDMI_P2_PHY_FIFO_CR1_port2_bclk_inv_mask                                (0x00000040)
#define  HDMI_P2_PHY_FIFO_CR1_port1_rclk_inv_mask                                (0x00000020)
#define  HDMI_P2_PHY_FIFO_CR1_port1_gclk_inv_mask                                (0x00000010)
#define  HDMI_P2_PHY_FIFO_CR1_port1_bclk_inv_mask                                (0x00000008)
#define  HDMI_P2_PHY_FIFO_CR1_port0_rclk_inv_mask                                (0x00000004)
#define  HDMI_P2_PHY_FIFO_CR1_port0_gclk_inv_mask                                (0x00000002)
#define  HDMI_P2_PHY_FIFO_CR1_port0_bclk_inv_mask                                (0x00000001)
#define  HDMI_P2_PHY_FIFO_CR1_port3_rclk_inv(data)                               (0x00000800&((data)<<11))
#define  HDMI_P2_PHY_FIFO_CR1_port3_gclk_inv(data)                               (0x00000400&((data)<<10))
#define  HDMI_P2_PHY_FIFO_CR1_port3_bclk_inv(data)                               (0x00000200&((data)<<9))
#define  HDMI_P2_PHY_FIFO_CR1_port2_rclk_inv(data)                               (0x00000100&((data)<<8))
#define  HDMI_P2_PHY_FIFO_CR1_port2_gclk_inv(data)                               (0x00000080&((data)<<7))
#define  HDMI_P2_PHY_FIFO_CR1_port2_bclk_inv(data)                               (0x00000040&((data)<<6))
#define  HDMI_P2_PHY_FIFO_CR1_port1_rclk_inv(data)                               (0x00000020&((data)<<5))
#define  HDMI_P2_PHY_FIFO_CR1_port1_gclk_inv(data)                               (0x00000010&((data)<<4))
#define  HDMI_P2_PHY_FIFO_CR1_port1_bclk_inv(data)                               (0x00000008&((data)<<3))
#define  HDMI_P2_PHY_FIFO_CR1_port0_rclk_inv(data)                               (0x00000004&((data)<<2))
#define  HDMI_P2_PHY_FIFO_CR1_port0_gclk_inv(data)                               (0x00000002&((data)<<1))
#define  HDMI_P2_PHY_FIFO_CR1_port0_bclk_inv(data)                               (0x00000001&(data))
#define  HDMI_P2_PHY_FIFO_CR1_get_port3_rclk_inv(data)                           ((0x00000800&(data))>>11)
#define  HDMI_P2_PHY_FIFO_CR1_get_port3_gclk_inv(data)                           ((0x00000400&(data))>>10)
#define  HDMI_P2_PHY_FIFO_CR1_get_port3_bclk_inv(data)                           ((0x00000200&(data))>>9)
#define  HDMI_P2_PHY_FIFO_CR1_get_port2_rclk_inv(data)                           ((0x00000100&(data))>>8)
#define  HDMI_P2_PHY_FIFO_CR1_get_port2_gclk_inv(data)                           ((0x00000080&(data))>>7)
#define  HDMI_P2_PHY_FIFO_CR1_get_port2_bclk_inv(data)                           ((0x00000040&(data))>>6)
#define  HDMI_P2_PHY_FIFO_CR1_get_port1_rclk_inv(data)                           ((0x00000020&(data))>>5)
#define  HDMI_P2_PHY_FIFO_CR1_get_port1_gclk_inv(data)                           ((0x00000010&(data))>>4)
#define  HDMI_P2_PHY_FIFO_CR1_get_port1_bclk_inv(data)                           ((0x00000008&(data))>>3)
#define  HDMI_P2_PHY_FIFO_CR1_get_port0_rclk_inv(data)                           ((0x00000004&(data))>>2)
#define  HDMI_P2_PHY_FIFO_CR1_get_port0_gclk_inv(data)                           ((0x00000002&(data))>>1)
#define  HDMI_P2_PHY_FIFO_CR1_get_port0_bclk_inv(data)                           (0x00000001&(data))

#define  HDMI_P2_PHY_FIFO_SR0                                                   0x1803C1A0
#define  HDMI_P2_PHY_FIFO_SR0_reg_addr                                           "0xB803C1A0"
#define  HDMI_P2_PHY_FIFO_SR0_reg                                                0xB803C1A0
#define  HDMI_P2_PHY_FIFO_SR0_inst_addr                                          "0x0064"
#define  set_HDMI_P2_PHY_FIFO_SR0_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_PHY_FIFO_SR0_reg)=data)
#define  get_HDMI_P2_PHY_FIFO_SR0_reg                                            (*((volatile unsigned int*)HDMI_P2_PHY_FIFO_SR0_reg))
#define  HDMI_P2_PHY_FIFO_SR0_port1_r_wrclk_det_timeout_flag_shift               (29)
#define  HDMI_P2_PHY_FIFO_SR0_port1_r_rwclk_det_timeout_flag_shift               (28)
#define  HDMI_P2_PHY_FIFO_SR0_port1_r_wovflow_flag_shift                         (27)
#define  HDMI_P2_PHY_FIFO_SR0_port1_r_rudflow_flag_shift                         (26)
#define  HDMI_P2_PHY_FIFO_SR0_port1_r_rflush_flag_shift                          (25)
#define  HDMI_P2_PHY_FIFO_SR0_port1_g_wrclk_det_timeout_flag_shift               (24)
#define  HDMI_P2_PHY_FIFO_SR0_port1_g_rwclk_det_timeout_flag_shift               (23)
#define  HDMI_P2_PHY_FIFO_SR0_port1_g_wovflow_flag_shift                         (22)
#define  HDMI_P2_PHY_FIFO_SR0_port1_g_rudflow_flag_shift                         (21)
#define  HDMI_P2_PHY_FIFO_SR0_port1_g_rflush_flag_shift                          (20)
#define  HDMI_P2_PHY_FIFO_SR0_port1_b_wrclk_det_timeout_flag_shift               (19)
#define  HDMI_P2_PHY_FIFO_SR0_port1_b_rwclk_det_timeout_flag_shift               (18)
#define  HDMI_P2_PHY_FIFO_SR0_port1_b_wovflow_flag_shift                         (17)
#define  HDMI_P2_PHY_FIFO_SR0_port1_b_rudflow_flag_shift                         (16)
#define  HDMI_P2_PHY_FIFO_SR0_port1_b_rflush_flag_shift                          (15)
#define  HDMI_P2_PHY_FIFO_SR0_port0_r_wrclk_det_timeout_flag_shift               (14)
#define  HDMI_P2_PHY_FIFO_SR0_port0_r_rwclk_det_timeout_flag_shift               (13)
#define  HDMI_P2_PHY_FIFO_SR0_port0_r_wovflow_flag_shift                         (12)
#define  HDMI_P2_PHY_FIFO_SR0_port0_r_rudflow_flag_shift                         (11)
#define  HDMI_P2_PHY_FIFO_SR0_port0_r_rflush_flag_shift                          (10)
#define  HDMI_P2_PHY_FIFO_SR0_port0_g_wrclk_det_timeout_flag_shift               (9)
#define  HDMI_P2_PHY_FIFO_SR0_port0_g_rwclk_det_timeout_flag_shift               (8)
#define  HDMI_P2_PHY_FIFO_SR0_port0_g_wovflow_flag_shift                         (7)
#define  HDMI_P2_PHY_FIFO_SR0_port0_g_rudflow_flag_shift                         (6)
#define  HDMI_P2_PHY_FIFO_SR0_port0_g_rflush_flag_shift                          (5)
#define  HDMI_P2_PHY_FIFO_SR0_port0_b_wrclk_det_timeout_flag_shift               (4)
#define  HDMI_P2_PHY_FIFO_SR0_port0_b_rwclk_det_timeout_flag_shift               (3)
#define  HDMI_P2_PHY_FIFO_SR0_port0_b_wovflow_flag_shift                         (2)
#define  HDMI_P2_PHY_FIFO_SR0_port0_b_rudflow_flag_shift                         (1)
#define  HDMI_P2_PHY_FIFO_SR0_port0_b_rflush_flag_shift                          (0)
#define  HDMI_P2_PHY_FIFO_SR0_port1_r_wrclk_det_timeout_flag_mask                (0x20000000)
#define  HDMI_P2_PHY_FIFO_SR0_port1_r_rwclk_det_timeout_flag_mask                (0x10000000)
#define  HDMI_P2_PHY_FIFO_SR0_port1_r_wovflow_flag_mask                          (0x08000000)
#define  HDMI_P2_PHY_FIFO_SR0_port1_r_rudflow_flag_mask                          (0x04000000)
#define  HDMI_P2_PHY_FIFO_SR0_port1_r_rflush_flag_mask                           (0x02000000)
#define  HDMI_P2_PHY_FIFO_SR0_port1_g_wrclk_det_timeout_flag_mask                (0x01000000)
#define  HDMI_P2_PHY_FIFO_SR0_port1_g_rwclk_det_timeout_flag_mask                (0x00800000)
#define  HDMI_P2_PHY_FIFO_SR0_port1_g_wovflow_flag_mask                          (0x00400000)
#define  HDMI_P2_PHY_FIFO_SR0_port1_g_rudflow_flag_mask                          (0x00200000)
#define  HDMI_P2_PHY_FIFO_SR0_port1_g_rflush_flag_mask                           (0x00100000)
#define  HDMI_P2_PHY_FIFO_SR0_port1_b_wrclk_det_timeout_flag_mask                (0x00080000)
#define  HDMI_P2_PHY_FIFO_SR0_port1_b_rwclk_det_timeout_flag_mask                (0x00040000)
#define  HDMI_P2_PHY_FIFO_SR0_port1_b_wovflow_flag_mask                          (0x00020000)
#define  HDMI_P2_PHY_FIFO_SR0_port1_b_rudflow_flag_mask                          (0x00010000)
#define  HDMI_P2_PHY_FIFO_SR0_port1_b_rflush_flag_mask                           (0x00008000)
#define  HDMI_P2_PHY_FIFO_SR0_port0_r_wrclk_det_timeout_flag_mask                (0x00004000)
#define  HDMI_P2_PHY_FIFO_SR0_port0_r_rwclk_det_timeout_flag_mask                (0x00002000)
#define  HDMI_P2_PHY_FIFO_SR0_port0_r_wovflow_flag_mask                          (0x00001000)
#define  HDMI_P2_PHY_FIFO_SR0_port0_r_rudflow_flag_mask                          (0x00000800)
#define  HDMI_P2_PHY_FIFO_SR0_port0_r_rflush_flag_mask                           (0x00000400)
#define  HDMI_P2_PHY_FIFO_SR0_port0_g_wrclk_det_timeout_flag_mask                (0x00000200)
#define  HDMI_P2_PHY_FIFO_SR0_port0_g_rwclk_det_timeout_flag_mask                (0x00000100)
#define  HDMI_P2_PHY_FIFO_SR0_port0_g_wovflow_flag_mask                          (0x00000080)
#define  HDMI_P2_PHY_FIFO_SR0_port0_g_rudflow_flag_mask                          (0x00000040)
#define  HDMI_P2_PHY_FIFO_SR0_port0_g_rflush_flag_mask                           (0x00000020)
#define  HDMI_P2_PHY_FIFO_SR0_port0_b_wrclk_det_timeout_flag_mask                (0x00000010)
#define  HDMI_P2_PHY_FIFO_SR0_port0_b_rwclk_det_timeout_flag_mask                (0x00000008)
#define  HDMI_P2_PHY_FIFO_SR0_port0_b_wovflow_flag_mask                          (0x00000004)
#define  HDMI_P2_PHY_FIFO_SR0_port0_b_rudflow_flag_mask                          (0x00000002)
#define  HDMI_P2_PHY_FIFO_SR0_port0_b_rflush_flag_mask                           (0x00000001)
#define  HDMI_P2_PHY_FIFO_SR0_port1_r_wrclk_det_timeout_flag(data)               (0x20000000&((data)<<29))
#define  HDMI_P2_PHY_FIFO_SR0_port1_r_rwclk_det_timeout_flag(data)               (0x10000000&((data)<<28))
#define  HDMI_P2_PHY_FIFO_SR0_port1_r_wovflow_flag(data)                         (0x08000000&((data)<<27))
#define  HDMI_P2_PHY_FIFO_SR0_port1_r_rudflow_flag(data)                         (0x04000000&((data)<<26))
#define  HDMI_P2_PHY_FIFO_SR0_port1_r_rflush_flag(data)                          (0x02000000&((data)<<25))
#define  HDMI_P2_PHY_FIFO_SR0_port1_g_wrclk_det_timeout_flag(data)               (0x01000000&((data)<<24))
#define  HDMI_P2_PHY_FIFO_SR0_port1_g_rwclk_det_timeout_flag(data)               (0x00800000&((data)<<23))
#define  HDMI_P2_PHY_FIFO_SR0_port1_g_wovflow_flag(data)                         (0x00400000&((data)<<22))
#define  HDMI_P2_PHY_FIFO_SR0_port1_g_rudflow_flag(data)                         (0x00200000&((data)<<21))
#define  HDMI_P2_PHY_FIFO_SR0_port1_g_rflush_flag(data)                          (0x00100000&((data)<<20))
#define  HDMI_P2_PHY_FIFO_SR0_port1_b_wrclk_det_timeout_flag(data)               (0x00080000&((data)<<19))
#define  HDMI_P2_PHY_FIFO_SR0_port1_b_rwclk_det_timeout_flag(data)               (0x00040000&((data)<<18))
#define  HDMI_P2_PHY_FIFO_SR0_port1_b_wovflow_flag(data)                         (0x00020000&((data)<<17))
#define  HDMI_P2_PHY_FIFO_SR0_port1_b_rudflow_flag(data)                         (0x00010000&((data)<<16))
#define  HDMI_P2_PHY_FIFO_SR0_port1_b_rflush_flag(data)                          (0x00008000&((data)<<15))
#define  HDMI_P2_PHY_FIFO_SR0_port0_r_wrclk_det_timeout_flag(data)               (0x00004000&((data)<<14))
#define  HDMI_P2_PHY_FIFO_SR0_port0_r_rwclk_det_timeout_flag(data)               (0x00002000&((data)<<13))
#define  HDMI_P2_PHY_FIFO_SR0_port0_r_wovflow_flag(data)                         (0x00001000&((data)<<12))
#define  HDMI_P2_PHY_FIFO_SR0_port0_r_rudflow_flag(data)                         (0x00000800&((data)<<11))
#define  HDMI_P2_PHY_FIFO_SR0_port0_r_rflush_flag(data)                          (0x00000400&((data)<<10))
#define  HDMI_P2_PHY_FIFO_SR0_port0_g_wrclk_det_timeout_flag(data)               (0x00000200&((data)<<9))
#define  HDMI_P2_PHY_FIFO_SR0_port0_g_rwclk_det_timeout_flag(data)               (0x00000100&((data)<<8))
#define  HDMI_P2_PHY_FIFO_SR0_port0_g_wovflow_flag(data)                         (0x00000080&((data)<<7))
#define  HDMI_P2_PHY_FIFO_SR0_port0_g_rudflow_flag(data)                         (0x00000040&((data)<<6))
#define  HDMI_P2_PHY_FIFO_SR0_port0_g_rflush_flag(data)                          (0x00000020&((data)<<5))
#define  HDMI_P2_PHY_FIFO_SR0_port0_b_wrclk_det_timeout_flag(data)               (0x00000010&((data)<<4))
#define  HDMI_P2_PHY_FIFO_SR0_port0_b_rwclk_det_timeout_flag(data)               (0x00000008&((data)<<3))
#define  HDMI_P2_PHY_FIFO_SR0_port0_b_wovflow_flag(data)                         (0x00000004&((data)<<2))
#define  HDMI_P2_PHY_FIFO_SR0_port0_b_rudflow_flag(data)                         (0x00000002&((data)<<1))
#define  HDMI_P2_PHY_FIFO_SR0_port0_b_rflush_flag(data)                          (0x00000001&(data))
#define  HDMI_P2_PHY_FIFO_SR0_get_port1_r_wrclk_det_timeout_flag(data)           ((0x20000000&(data))>>29)
#define  HDMI_P2_PHY_FIFO_SR0_get_port1_r_rwclk_det_timeout_flag(data)           ((0x10000000&(data))>>28)
#define  HDMI_P2_PHY_FIFO_SR0_get_port1_r_wovflow_flag(data)                     ((0x08000000&(data))>>27)
#define  HDMI_P2_PHY_FIFO_SR0_get_port1_r_rudflow_flag(data)                     ((0x04000000&(data))>>26)
#define  HDMI_P2_PHY_FIFO_SR0_get_port1_r_rflush_flag(data)                      ((0x02000000&(data))>>25)
#define  HDMI_P2_PHY_FIFO_SR0_get_port1_g_wrclk_det_timeout_flag(data)           ((0x01000000&(data))>>24)
#define  HDMI_P2_PHY_FIFO_SR0_get_port1_g_rwclk_det_timeout_flag(data)           ((0x00800000&(data))>>23)
#define  HDMI_P2_PHY_FIFO_SR0_get_port1_g_wovflow_flag(data)                     ((0x00400000&(data))>>22)
#define  HDMI_P2_PHY_FIFO_SR0_get_port1_g_rudflow_flag(data)                     ((0x00200000&(data))>>21)
#define  HDMI_P2_PHY_FIFO_SR0_get_port1_g_rflush_flag(data)                      ((0x00100000&(data))>>20)
#define  HDMI_P2_PHY_FIFO_SR0_get_port1_b_wrclk_det_timeout_flag(data)           ((0x00080000&(data))>>19)
#define  HDMI_P2_PHY_FIFO_SR0_get_port1_b_rwclk_det_timeout_flag(data)           ((0x00040000&(data))>>18)
#define  HDMI_P2_PHY_FIFO_SR0_get_port1_b_wovflow_flag(data)                     ((0x00020000&(data))>>17)
#define  HDMI_P2_PHY_FIFO_SR0_get_port1_b_rudflow_flag(data)                     ((0x00010000&(data))>>16)
#define  HDMI_P2_PHY_FIFO_SR0_get_port1_b_rflush_flag(data)                      ((0x00008000&(data))>>15)
#define  HDMI_P2_PHY_FIFO_SR0_get_port0_r_wrclk_det_timeout_flag(data)           ((0x00004000&(data))>>14)
#define  HDMI_P2_PHY_FIFO_SR0_get_port0_r_rwclk_det_timeout_flag(data)           ((0x00002000&(data))>>13)
#define  HDMI_P2_PHY_FIFO_SR0_get_port0_r_wovflow_flag(data)                     ((0x00001000&(data))>>12)
#define  HDMI_P2_PHY_FIFO_SR0_get_port0_r_rudflow_flag(data)                     ((0x00000800&(data))>>11)
#define  HDMI_P2_PHY_FIFO_SR0_get_port0_r_rflush_flag(data)                      ((0x00000400&(data))>>10)
#define  HDMI_P2_PHY_FIFO_SR0_get_port0_g_wrclk_det_timeout_flag(data)           ((0x00000200&(data))>>9)
#define  HDMI_P2_PHY_FIFO_SR0_get_port0_g_rwclk_det_timeout_flag(data)           ((0x00000100&(data))>>8)
#define  HDMI_P2_PHY_FIFO_SR0_get_port0_g_wovflow_flag(data)                     ((0x00000080&(data))>>7)
#define  HDMI_P2_PHY_FIFO_SR0_get_port0_g_rudflow_flag(data)                     ((0x00000040&(data))>>6)
#define  HDMI_P2_PHY_FIFO_SR0_get_port0_g_rflush_flag(data)                      ((0x00000020&(data))>>5)
#define  HDMI_P2_PHY_FIFO_SR0_get_port0_b_wrclk_det_timeout_flag(data)           ((0x00000010&(data))>>4)
#define  HDMI_P2_PHY_FIFO_SR0_get_port0_b_rwclk_det_timeout_flag(data)           ((0x00000008&(data))>>3)
#define  HDMI_P2_PHY_FIFO_SR0_get_port0_b_wovflow_flag(data)                     ((0x00000004&(data))>>2)
#define  HDMI_P2_PHY_FIFO_SR0_get_port0_b_rudflow_flag(data)                     ((0x00000002&(data))>>1)
#define  HDMI_P2_PHY_FIFO_SR0_get_port0_b_rflush_flag(data)                      (0x00000001&(data))

#define  HDMI_P2_PHY_FIFO_SR1                                                   0x1803C1A4
#define  HDMI_P2_PHY_FIFO_SR1_reg_addr                                           "0xB803C1A4"
#define  HDMI_P2_PHY_FIFO_SR1_reg                                                0xB803C1A4
#define  HDMI_P2_PHY_FIFO_SR1_inst_addr                                          "0x0065"
#define  set_HDMI_P2_PHY_FIFO_SR1_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_PHY_FIFO_SR1_reg)=data)
#define  get_HDMI_P2_PHY_FIFO_SR1_reg                                            (*((volatile unsigned int*)HDMI_P2_PHY_FIFO_SR1_reg))
#define  HDMI_P2_PHY_FIFO_SR1_port3_r_wrclk_det_timeout_flag_shift               (29)
#define  HDMI_P2_PHY_FIFO_SR1_port3_r_rwclk_det_timeout_flag_shift               (28)
#define  HDMI_P2_PHY_FIFO_SR1_port3_r_wovflow_flag_shift                         (27)
#define  HDMI_P2_PHY_FIFO_SR1_port3_r_rudflow_flag_shift                         (26)
#define  HDMI_P2_PHY_FIFO_SR1_port3_r_rflush_flag_shift                          (25)
#define  HDMI_P2_PHY_FIFO_SR1_port3_g_wrclk_det_timeout_flag_shift               (24)
#define  HDMI_P2_PHY_FIFO_SR1_port3_g_rwclk_det_timeout_flag_shift               (23)
#define  HDMI_P2_PHY_FIFO_SR1_port3_g_wovflow_flag_shift                         (22)
#define  HDMI_P2_PHY_FIFO_SR1_port3_g_rudflow_flag_shift                         (21)
#define  HDMI_P2_PHY_FIFO_SR1_port3_g_rflush_flag_shift                          (20)
#define  HDMI_P2_PHY_FIFO_SR1_port3_b_wrclk_det_timeout_flag_shift               (19)
#define  HDMI_P2_PHY_FIFO_SR1_port3_b_rwclk_det_timeout_flag_shift               (18)
#define  HDMI_P2_PHY_FIFO_SR1_port3_b_wovflow_flag_shift                         (17)
#define  HDMI_P2_PHY_FIFO_SR1_port3_b_rudflow_flag_shift                         (16)
#define  HDMI_P2_PHY_FIFO_SR1_port3_b_rflush_flag_shift                          (15)
#define  HDMI_P2_PHY_FIFO_SR1_port2_r_wrclk_det_timeout_flag_shift               (14)
#define  HDMI_P2_PHY_FIFO_SR1_port2_r_rwclk_det_timeout_flag_shift               (13)
#define  HDMI_P2_PHY_FIFO_SR1_port2_r_wovflow_flag_shift                         (12)
#define  HDMI_P2_PHY_FIFO_SR1_port2_r_rudflow_flag_shift                         (11)
#define  HDMI_P2_PHY_FIFO_SR1_port2_r_rflush_flag_shift                          (10)
#define  HDMI_P2_PHY_FIFO_SR1_port2_g_wrclk_det_timeout_flag_shift               (9)
#define  HDMI_P2_PHY_FIFO_SR1_port2_g_rwclk_det_timeout_flag_shift               (8)
#define  HDMI_P2_PHY_FIFO_SR1_port2_g_wovflow_flag_shift                         (7)
#define  HDMI_P2_PHY_FIFO_SR1_port2_g_rudflow_flag_shift                         (6)
#define  HDMI_P2_PHY_FIFO_SR1_port2_g_rflush_flag_shift                          (5)
#define  HDMI_P2_PHY_FIFO_SR1_port2_b_wrclk_det_timeout_flag_shift               (4)
#define  HDMI_P2_PHY_FIFO_SR1_port2_b_rwclk_det_timeout_flag_shift               (3)
#define  HDMI_P2_PHY_FIFO_SR1_port2_b_wovflow_flag_shift                         (2)
#define  HDMI_P2_PHY_FIFO_SR1_port2_b_rudflow_flag_shift                         (1)
#define  HDMI_P2_PHY_FIFO_SR1_port2_b_rflush_flag_shift                          (0)
#define  HDMI_P2_PHY_FIFO_SR1_port3_r_wrclk_det_timeout_flag_mask                (0x20000000)
#define  HDMI_P2_PHY_FIFO_SR1_port3_r_rwclk_det_timeout_flag_mask                (0x10000000)
#define  HDMI_P2_PHY_FIFO_SR1_port3_r_wovflow_flag_mask                          (0x08000000)
#define  HDMI_P2_PHY_FIFO_SR1_port3_r_rudflow_flag_mask                          (0x04000000)
#define  HDMI_P2_PHY_FIFO_SR1_port3_r_rflush_flag_mask                           (0x02000000)
#define  HDMI_P2_PHY_FIFO_SR1_port3_g_wrclk_det_timeout_flag_mask                (0x01000000)
#define  HDMI_P2_PHY_FIFO_SR1_port3_g_rwclk_det_timeout_flag_mask                (0x00800000)
#define  HDMI_P2_PHY_FIFO_SR1_port3_g_wovflow_flag_mask                          (0x00400000)
#define  HDMI_P2_PHY_FIFO_SR1_port3_g_rudflow_flag_mask                          (0x00200000)
#define  HDMI_P2_PHY_FIFO_SR1_port3_g_rflush_flag_mask                           (0x00100000)
#define  HDMI_P2_PHY_FIFO_SR1_port3_b_wrclk_det_timeout_flag_mask                (0x00080000)
#define  HDMI_P2_PHY_FIFO_SR1_port3_b_rwclk_det_timeout_flag_mask                (0x00040000)
#define  HDMI_P2_PHY_FIFO_SR1_port3_b_wovflow_flag_mask                          (0x00020000)
#define  HDMI_P2_PHY_FIFO_SR1_port3_b_rudflow_flag_mask                          (0x00010000)
#define  HDMI_P2_PHY_FIFO_SR1_port3_b_rflush_flag_mask                           (0x00008000)
#define  HDMI_P2_PHY_FIFO_SR1_port2_r_wrclk_det_timeout_flag_mask                (0x00004000)
#define  HDMI_P2_PHY_FIFO_SR1_port2_r_rwclk_det_timeout_flag_mask                (0x00002000)
#define  HDMI_P2_PHY_FIFO_SR1_port2_r_wovflow_flag_mask                          (0x00001000)
#define  HDMI_P2_PHY_FIFO_SR1_port2_r_rudflow_flag_mask                          (0x00000800)
#define  HDMI_P2_PHY_FIFO_SR1_port2_r_rflush_flag_mask                           (0x00000400)
#define  HDMI_P2_PHY_FIFO_SR1_port2_g_wrclk_det_timeout_flag_mask                (0x00000200)
#define  HDMI_P2_PHY_FIFO_SR1_port2_g_rwclk_det_timeout_flag_mask                (0x00000100)
#define  HDMI_P2_PHY_FIFO_SR1_port2_g_wovflow_flag_mask                          (0x00000080)
#define  HDMI_P2_PHY_FIFO_SR1_port2_g_rudflow_flag_mask                          (0x00000040)
#define  HDMI_P2_PHY_FIFO_SR1_port2_g_rflush_flag_mask                           (0x00000020)
#define  HDMI_P2_PHY_FIFO_SR1_port2_b_wrclk_det_timeout_flag_mask                (0x00000010)
#define  HDMI_P2_PHY_FIFO_SR1_port2_b_rwclk_det_timeout_flag_mask                (0x00000008)
#define  HDMI_P2_PHY_FIFO_SR1_port2_b_wovflow_flag_mask                          (0x00000004)
#define  HDMI_P2_PHY_FIFO_SR1_port2_b_rudflow_flag_mask                          (0x00000002)
#define  HDMI_P2_PHY_FIFO_SR1_port2_b_rflush_flag_mask                           (0x00000001)
#define  HDMI_P2_PHY_FIFO_SR1_port3_r_wrclk_det_timeout_flag(data)               (0x20000000&((data)<<29))
#define  HDMI_P2_PHY_FIFO_SR1_port3_r_rwclk_det_timeout_flag(data)               (0x10000000&((data)<<28))
#define  HDMI_P2_PHY_FIFO_SR1_port3_r_wovflow_flag(data)                         (0x08000000&((data)<<27))
#define  HDMI_P2_PHY_FIFO_SR1_port3_r_rudflow_flag(data)                         (0x04000000&((data)<<26))
#define  HDMI_P2_PHY_FIFO_SR1_port3_r_rflush_flag(data)                          (0x02000000&((data)<<25))
#define  HDMI_P2_PHY_FIFO_SR1_port3_g_wrclk_det_timeout_flag(data)               (0x01000000&((data)<<24))
#define  HDMI_P2_PHY_FIFO_SR1_port3_g_rwclk_det_timeout_flag(data)               (0x00800000&((data)<<23))
#define  HDMI_P2_PHY_FIFO_SR1_port3_g_wovflow_flag(data)                         (0x00400000&((data)<<22))
#define  HDMI_P2_PHY_FIFO_SR1_port3_g_rudflow_flag(data)                         (0x00200000&((data)<<21))
#define  HDMI_P2_PHY_FIFO_SR1_port3_g_rflush_flag(data)                          (0x00100000&((data)<<20))
#define  HDMI_P2_PHY_FIFO_SR1_port3_b_wrclk_det_timeout_flag(data)               (0x00080000&((data)<<19))
#define  HDMI_P2_PHY_FIFO_SR1_port3_b_rwclk_det_timeout_flag(data)               (0x00040000&((data)<<18))
#define  HDMI_P2_PHY_FIFO_SR1_port3_b_wovflow_flag(data)                         (0x00020000&((data)<<17))
#define  HDMI_P2_PHY_FIFO_SR1_port3_b_rudflow_flag(data)                         (0x00010000&((data)<<16))
#define  HDMI_P2_PHY_FIFO_SR1_port3_b_rflush_flag(data)                          (0x00008000&((data)<<15))
#define  HDMI_P2_PHY_FIFO_SR1_port2_r_wrclk_det_timeout_flag(data)               (0x00004000&((data)<<14))
#define  HDMI_P2_PHY_FIFO_SR1_port2_r_rwclk_det_timeout_flag(data)               (0x00002000&((data)<<13))
#define  HDMI_P2_PHY_FIFO_SR1_port2_r_wovflow_flag(data)                         (0x00001000&((data)<<12))
#define  HDMI_P2_PHY_FIFO_SR1_port2_r_rudflow_flag(data)                         (0x00000800&((data)<<11))
#define  HDMI_P2_PHY_FIFO_SR1_port2_r_rflush_flag(data)                          (0x00000400&((data)<<10))
#define  HDMI_P2_PHY_FIFO_SR1_port2_g_wrclk_det_timeout_flag(data)               (0x00000200&((data)<<9))
#define  HDMI_P2_PHY_FIFO_SR1_port2_g_rwclk_det_timeout_flag(data)               (0x00000100&((data)<<8))
#define  HDMI_P2_PHY_FIFO_SR1_port2_g_wovflow_flag(data)                         (0x00000080&((data)<<7))
#define  HDMI_P2_PHY_FIFO_SR1_port2_g_rudflow_flag(data)                         (0x00000040&((data)<<6))
#define  HDMI_P2_PHY_FIFO_SR1_port2_g_rflush_flag(data)                          (0x00000020&((data)<<5))
#define  HDMI_P2_PHY_FIFO_SR1_port2_b_wrclk_det_timeout_flag(data)               (0x00000010&((data)<<4))
#define  HDMI_P2_PHY_FIFO_SR1_port2_b_rwclk_det_timeout_flag(data)               (0x00000008&((data)<<3))
#define  HDMI_P2_PHY_FIFO_SR1_port2_b_wovflow_flag(data)                         (0x00000004&((data)<<2))
#define  HDMI_P2_PHY_FIFO_SR1_port2_b_rudflow_flag(data)                         (0x00000002&((data)<<1))
#define  HDMI_P2_PHY_FIFO_SR1_port2_b_rflush_flag(data)                          (0x00000001&(data))
#define  HDMI_P2_PHY_FIFO_SR1_get_port3_r_wrclk_det_timeout_flag(data)           ((0x20000000&(data))>>29)
#define  HDMI_P2_PHY_FIFO_SR1_get_port3_r_rwclk_det_timeout_flag(data)           ((0x10000000&(data))>>28)
#define  HDMI_P2_PHY_FIFO_SR1_get_port3_r_wovflow_flag(data)                     ((0x08000000&(data))>>27)
#define  HDMI_P2_PHY_FIFO_SR1_get_port3_r_rudflow_flag(data)                     ((0x04000000&(data))>>26)
#define  HDMI_P2_PHY_FIFO_SR1_get_port3_r_rflush_flag(data)                      ((0x02000000&(data))>>25)
#define  HDMI_P2_PHY_FIFO_SR1_get_port3_g_wrclk_det_timeout_flag(data)           ((0x01000000&(data))>>24)
#define  HDMI_P2_PHY_FIFO_SR1_get_port3_g_rwclk_det_timeout_flag(data)           ((0x00800000&(data))>>23)
#define  HDMI_P2_PHY_FIFO_SR1_get_port3_g_wovflow_flag(data)                     ((0x00400000&(data))>>22)
#define  HDMI_P2_PHY_FIFO_SR1_get_port3_g_rudflow_flag(data)                     ((0x00200000&(data))>>21)
#define  HDMI_P2_PHY_FIFO_SR1_get_port3_g_rflush_flag(data)                      ((0x00100000&(data))>>20)
#define  HDMI_P2_PHY_FIFO_SR1_get_port3_b_wrclk_det_timeout_flag(data)           ((0x00080000&(data))>>19)
#define  HDMI_P2_PHY_FIFO_SR1_get_port3_b_rwclk_det_timeout_flag(data)           ((0x00040000&(data))>>18)
#define  HDMI_P2_PHY_FIFO_SR1_get_port3_b_wovflow_flag(data)                     ((0x00020000&(data))>>17)
#define  HDMI_P2_PHY_FIFO_SR1_get_port3_b_rudflow_flag(data)                     ((0x00010000&(data))>>16)
#define  HDMI_P2_PHY_FIFO_SR1_get_port3_b_rflush_flag(data)                      ((0x00008000&(data))>>15)
#define  HDMI_P2_PHY_FIFO_SR1_get_port2_r_wrclk_det_timeout_flag(data)           ((0x00004000&(data))>>14)
#define  HDMI_P2_PHY_FIFO_SR1_get_port2_r_rwclk_det_timeout_flag(data)           ((0x00002000&(data))>>13)
#define  HDMI_P2_PHY_FIFO_SR1_get_port2_r_wovflow_flag(data)                     ((0x00001000&(data))>>12)
#define  HDMI_P2_PHY_FIFO_SR1_get_port2_r_rudflow_flag(data)                     ((0x00000800&(data))>>11)
#define  HDMI_P2_PHY_FIFO_SR1_get_port2_r_rflush_flag(data)                      ((0x00000400&(data))>>10)
#define  HDMI_P2_PHY_FIFO_SR1_get_port2_g_wrclk_det_timeout_flag(data)           ((0x00000200&(data))>>9)
#define  HDMI_P2_PHY_FIFO_SR1_get_port2_g_rwclk_det_timeout_flag(data)           ((0x00000100&(data))>>8)
#define  HDMI_P2_PHY_FIFO_SR1_get_port2_g_wovflow_flag(data)                     ((0x00000080&(data))>>7)
#define  HDMI_P2_PHY_FIFO_SR1_get_port2_g_rudflow_flag(data)                     ((0x00000040&(data))>>6)
#define  HDMI_P2_PHY_FIFO_SR1_get_port2_g_rflush_flag(data)                      ((0x00000020&(data))>>5)
#define  HDMI_P2_PHY_FIFO_SR1_get_port2_b_wrclk_det_timeout_flag(data)           ((0x00000010&(data))>>4)
#define  HDMI_P2_PHY_FIFO_SR1_get_port2_b_rwclk_det_timeout_flag(data)           ((0x00000008&(data))>>3)
#define  HDMI_P2_PHY_FIFO_SR1_get_port2_b_wovflow_flag(data)                     ((0x00000004&(data))>>2)
#define  HDMI_P2_PHY_FIFO_SR1_get_port2_b_rudflow_flag(data)                     ((0x00000002&(data))>>1)
#define  HDMI_P2_PHY_FIFO_SR1_get_port2_b_rflush_flag(data)                      (0x00000001&(data))

#define  HDMI_P2_HDMI_CTS_FIFO_CTL                                              0x1803C1A8
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_reg_addr                                      "0xB803C1A8"
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_reg                                           0xB803C1A8
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_inst_addr                                     "0x0066"
#define  set_HDMI_P2_HDMI_CTS_FIFO_CTL_reg(data)                                 (*((volatile unsigned int*)HDMI_P2_HDMI_CTS_FIFO_CTL_reg)=data)
#define  get_HDMI_P2_HDMI_CTS_FIFO_CTL_reg                                       (*((volatile unsigned int*)HDMI_P2_HDMI_CTS_FIFO_CTL_reg))
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_dbg_clk_freq_sel_shift                        (21)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_mhl_test_sel_shift                            (20)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_en_ctsfifo_toggle_hdmi_shift                  (13)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_offms_clock_sel_shift                         (11)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_hdmi_2x_out_sel_shift                         (9)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_hdmi_test_sel_shift                           (5)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_mac_out_sel_shift                             (4)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_hdmi_out_sel_shift                            (3)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_force_ctsfifo_rstn_hdmi_shift                 (2)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_en_ctsfifo_vsrst_hdmi_shift                   (1)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_en_ctsfifo_bypass_hdmi_shift                  (0)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_dbg_clk_freq_sel_mask                         (0x00200000)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_mhl_test_sel_mask                             (0x00100000)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_en_ctsfifo_toggle_hdmi_mask                   (0x00002000)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_offms_clock_sel_mask                          (0x00000800)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_hdmi_2x_out_sel_mask                          (0x00000600)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_hdmi_test_sel_mask                            (0x000001E0)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_mac_out_sel_mask                              (0x00000010)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_hdmi_out_sel_mask                             (0x00000008)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_force_ctsfifo_rstn_hdmi_mask                  (0x00000004)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_en_ctsfifo_vsrst_hdmi_mask                    (0x00000002)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_en_ctsfifo_bypass_hdmi_mask                   (0x00000001)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_dbg_clk_freq_sel(data)                        (0x00200000&((data)<<21))
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_mhl_test_sel(data)                            (0x00100000&((data)<<20))
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_en_ctsfifo_toggle_hdmi(data)                  (0x00002000&((data)<<13))
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_offms_clock_sel(data)                         (0x00000800&((data)<<11))
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_hdmi_2x_out_sel(data)                         (0x00000600&((data)<<9))
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_hdmi_test_sel(data)                           (0x000001E0&((data)<<5))
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_mac_out_sel(data)                             (0x00000010&((data)<<4))
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_hdmi_out_sel(data)                            (0x00000008&((data)<<3))
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_force_ctsfifo_rstn_hdmi(data)                 (0x00000004&((data)<<2))
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_en_ctsfifo_vsrst_hdmi(data)                   (0x00000002&((data)<<1))
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_en_ctsfifo_bypass_hdmi(data)                  (0x00000001&(data))
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_get_dbg_clk_freq_sel(data)                    ((0x00200000&(data))>>21)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_get_mhl_test_sel(data)                        ((0x00100000&(data))>>20)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_get_en_ctsfifo_toggle_hdmi(data)              ((0x00002000&(data))>>13)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_get_offms_clock_sel(data)                     ((0x00000800&(data))>>11)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_get_hdmi_2x_out_sel(data)                     ((0x00000600&(data))>>9)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_get_hdmi_test_sel(data)                       ((0x000001E0&(data))>>5)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_get_mac_out_sel(data)                         ((0x00000010&(data))>>4)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_get_hdmi_out_sel(data)                        ((0x00000008&(data))>>3)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_get_force_ctsfifo_rstn_hdmi(data)             ((0x00000004&(data))>>2)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_get_en_ctsfifo_vsrst_hdmi(data)               ((0x00000002&(data))>>1)
#define  HDMI_P2_HDMI_CTS_FIFO_CTL_get_en_ctsfifo_bypass_hdmi(data)              (0x00000001&(data))

#define  HDMI_P2_CH_CR                                                          0x1803C1AC
#define  HDMI_P2_CH_CR_reg_addr                                                  "0xB803C1AC"
#define  HDMI_P2_CH_CR_reg                                                       0xB803C1AC
#define  HDMI_P2_CH_CR_inst_addr                                                 "0x0067"
#define  set_HDMI_P2_CH_CR_reg(data)                                             (*((volatile unsigned int*)HDMI_P2_CH_CR_reg)=data)
#define  get_HDMI_P2_CH_CR_reg                                                   (*((volatile unsigned int*)HDMI_P2_CH_CR_reg))
#define  HDMI_P2_CH_CR_r_ch_afifo_en_shift                                       (24)
#define  HDMI_P2_CH_CR_g_ch_afifo_en_shift                                       (23)
#define  HDMI_P2_CH_CR_b_ch_afifo_en_shift                                       (22)
#define  HDMI_P2_CH_CR_ch_sync_sel_shift                                         (20)
#define  HDMI_P2_CH_CR_dummy_19_17_shift                                         (17)
#define  HDMI_P2_CH_CR_rden_thr_shift                                            (12)
#define  HDMI_P2_CH_CR_dummy_11_9_shift                                          (9)
#define  HDMI_P2_CH_CR_udwater_thr_shift                                         (4)
#define  HDMI_P2_CH_CR_dummy_3_shift                                             (3)
#define  HDMI_P2_CH_CR_flush_shift                                               (2)
#define  HDMI_P2_CH_CR_ch_afifo_airq_en_shift                                    (1)
#define  HDMI_P2_CH_CR_ch_afifo_irq_en_shift                                     (0)
#define  HDMI_P2_CH_CR_r_ch_afifo_en_mask                                        (0x01000000)
#define  HDMI_P2_CH_CR_g_ch_afifo_en_mask                                        (0x00800000)
#define  HDMI_P2_CH_CR_b_ch_afifo_en_mask                                        (0x00400000)
#define  HDMI_P2_CH_CR_ch_sync_sel_mask                                          (0x00300000)
#define  HDMI_P2_CH_CR_dummy_19_17_mask                                          (0x000E0000)
#define  HDMI_P2_CH_CR_rden_thr_mask                                             (0x0001F000)
#define  HDMI_P2_CH_CR_dummy_11_9_mask                                           (0x00000E00)
#define  HDMI_P2_CH_CR_udwater_thr_mask                                          (0x000001F0)
#define  HDMI_P2_CH_CR_dummy_3_mask                                              (0x00000008)
#define  HDMI_P2_CH_CR_flush_mask                                                (0x00000004)
#define  HDMI_P2_CH_CR_ch_afifo_airq_en_mask                                     (0x00000002)
#define  HDMI_P2_CH_CR_ch_afifo_irq_en_mask                                      (0x00000001)
#define  HDMI_P2_CH_CR_r_ch_afifo_en(data)                                       (0x01000000&((data)<<24))
#define  HDMI_P2_CH_CR_g_ch_afifo_en(data)                                       (0x00800000&((data)<<23))
#define  HDMI_P2_CH_CR_b_ch_afifo_en(data)                                       (0x00400000&((data)<<22))
#define  HDMI_P2_CH_CR_ch_sync_sel(data)                                         (0x00300000&((data)<<20))
#define  HDMI_P2_CH_CR_dummy_19_17(data)                                         (0x000E0000&((data)<<17))
#define  HDMI_P2_CH_CR_rden_thr(data)                                            (0x0001F000&((data)<<12))
#define  HDMI_P2_CH_CR_dummy_11_9(data)                                          (0x00000E00&((data)<<9))
#define  HDMI_P2_CH_CR_udwater_thr(data)                                         (0x000001F0&((data)<<4))
#define  HDMI_P2_CH_CR_dummy_3(data)                                             (0x00000008&((data)<<3))
#define  HDMI_P2_CH_CR_flush(data)                                               (0x00000004&((data)<<2))
#define  HDMI_P2_CH_CR_ch_afifo_airq_en(data)                                    (0x00000002&((data)<<1))
#define  HDMI_P2_CH_CR_ch_afifo_irq_en(data)                                     (0x00000001&(data))
#define  HDMI_P2_CH_CR_get_r_ch_afifo_en(data)                                   ((0x01000000&(data))>>24)
#define  HDMI_P2_CH_CR_get_g_ch_afifo_en(data)                                   ((0x00800000&(data))>>23)
#define  HDMI_P2_CH_CR_get_b_ch_afifo_en(data)                                   ((0x00400000&(data))>>22)
#define  HDMI_P2_CH_CR_get_ch_sync_sel(data)                                     ((0x00300000&(data))>>20)
#define  HDMI_P2_CH_CR_get_dummy_19_17(data)                                     ((0x000E0000&(data))>>17)
#define  HDMI_P2_CH_CR_get_rden_thr(data)                                        ((0x0001F000&(data))>>12)
#define  HDMI_P2_CH_CR_get_dummy_11_9(data)                                      ((0x00000E00&(data))>>9)
#define  HDMI_P2_CH_CR_get_udwater_thr(data)                                     ((0x000001F0&(data))>>4)
#define  HDMI_P2_CH_CR_get_dummy_3(data)                                         ((0x00000008&(data))>>3)
#define  HDMI_P2_CH_CR_get_flush(data)                                           ((0x00000004&(data))>>2)
#define  HDMI_P2_CH_CR_get_ch_afifo_airq_en(data)                                ((0x00000002&(data))>>1)
#define  HDMI_P2_CH_CR_get_ch_afifo_irq_en(data)                                 (0x00000001&(data))

#define  HDMI_P2_CH_SR                                                          0x1803C1B0
#define  HDMI_P2_CH_SR_reg_addr                                                  "0xB803C1B0"
#define  HDMI_P2_CH_SR_reg                                                       0xB803C1B0
#define  HDMI_P2_CH_SR_inst_addr                                                 "0x0068"
#define  set_HDMI_P2_CH_SR_reg(data)                                             (*((volatile unsigned int*)HDMI_P2_CH_SR_reg)=data)
#define  get_HDMI_P2_CH_SR_reg                                                   (*((volatile unsigned int*)HDMI_P2_CH_SR_reg))
#define  HDMI_P2_CH_SR_rgb_de_align_flag_shift                                   (30)
#define  HDMI_P2_CH_SR_r_rwclk_det_timeout_flag_shift                            (29)
#define  HDMI_P2_CH_SR_r_wrclk_det_timeout_flag_shift                            (28)
#define  HDMI_P2_CH_SR_g_rwclk_det_timeout_flag_shift                            (27)
#define  HDMI_P2_CH_SR_g_wrclk_det_timeout_flag_shift                            (26)
#define  HDMI_P2_CH_SR_b_rwclk_det_timeout_flag_shift                            (25)
#define  HDMI_P2_CH_SR_b_wrclk_det_timeout_flag_shift                            (24)
#define  HDMI_P2_CH_SR_r_rudflow_flag_shift                                      (23)
#define  HDMI_P2_CH_SR_r_wovflow_flag_shift                                      (22)
#define  HDMI_P2_CH_SR_r_rflush_flag_shift                                       (21)
#define  HDMI_P2_CH_SR_r_rw_water_lv_shift                                       (16)
#define  HDMI_P2_CH_SR_g_rudflow_flag_shift                                      (15)
#define  HDMI_P2_CH_SR_g_wovflow_flag_shift                                      (14)
#define  HDMI_P2_CH_SR_g_rflush_flag_shift                                       (13)
#define  HDMI_P2_CH_SR_g_rw_water_lv_shift                                       (8)
#define  HDMI_P2_CH_SR_b_rudflow_flag_shift                                      (7)
#define  HDMI_P2_CH_SR_b_wovflow_flag_shift                                      (6)
#define  HDMI_P2_CH_SR_b_rflush_flag_shift                                       (5)
#define  HDMI_P2_CH_SR_b_rw_water_lv_shift                                       (0)
#define  HDMI_P2_CH_SR_rgb_de_align_flag_mask                                    (0x40000000)
#define  HDMI_P2_CH_SR_r_rwclk_det_timeout_flag_mask                             (0x20000000)
#define  HDMI_P2_CH_SR_r_wrclk_det_timeout_flag_mask                             (0x10000000)
#define  HDMI_P2_CH_SR_g_rwclk_det_timeout_flag_mask                             (0x08000000)
#define  HDMI_P2_CH_SR_g_wrclk_det_timeout_flag_mask                             (0x04000000)
#define  HDMI_P2_CH_SR_b_rwclk_det_timeout_flag_mask                             (0x02000000)
#define  HDMI_P2_CH_SR_b_wrclk_det_timeout_flag_mask                             (0x01000000)
#define  HDMI_P2_CH_SR_r_rudflow_flag_mask                                       (0x00800000)
#define  HDMI_P2_CH_SR_r_wovflow_flag_mask                                       (0x00400000)
#define  HDMI_P2_CH_SR_r_rflush_flag_mask                                        (0x00200000)
#define  HDMI_P2_CH_SR_r_rw_water_lv_mask                                        (0x001F0000)
#define  HDMI_P2_CH_SR_g_rudflow_flag_mask                                       (0x00008000)
#define  HDMI_P2_CH_SR_g_wovflow_flag_mask                                       (0x00004000)
#define  HDMI_P2_CH_SR_g_rflush_flag_mask                                        (0x00002000)
#define  HDMI_P2_CH_SR_g_rw_water_lv_mask                                        (0x00001F00)
#define  HDMI_P2_CH_SR_b_rudflow_flag_mask                                       (0x00000080)
#define  HDMI_P2_CH_SR_b_wovflow_flag_mask                                       (0x00000040)
#define  HDMI_P2_CH_SR_b_rflush_flag_mask                                        (0x00000020)
#define  HDMI_P2_CH_SR_b_rw_water_lv_mask                                        (0x0000001F)
#define  HDMI_P2_CH_SR_rgb_de_align_flag(data)                                   (0x40000000&((data)<<30))
#define  HDMI_P2_CH_SR_r_rwclk_det_timeout_flag(data)                            (0x20000000&((data)<<29))
#define  HDMI_P2_CH_SR_r_wrclk_det_timeout_flag(data)                            (0x10000000&((data)<<28))
#define  HDMI_P2_CH_SR_g_rwclk_det_timeout_flag(data)                            (0x08000000&((data)<<27))
#define  HDMI_P2_CH_SR_g_wrclk_det_timeout_flag(data)                            (0x04000000&((data)<<26))
#define  HDMI_P2_CH_SR_b_rwclk_det_timeout_flag(data)                            (0x02000000&((data)<<25))
#define  HDMI_P2_CH_SR_b_wrclk_det_timeout_flag(data)                            (0x01000000&((data)<<24))
#define  HDMI_P2_CH_SR_r_rudflow_flag(data)                                      (0x00800000&((data)<<23))
#define  HDMI_P2_CH_SR_r_wovflow_flag(data)                                      (0x00400000&((data)<<22))
#define  HDMI_P2_CH_SR_r_rflush_flag(data)                                       (0x00200000&((data)<<21))
#define  HDMI_P2_CH_SR_r_rw_water_lv(data)                                       (0x001F0000&((data)<<16))
#define  HDMI_P2_CH_SR_g_rudflow_flag(data)                                      (0x00008000&((data)<<15))
#define  HDMI_P2_CH_SR_g_wovflow_flag(data)                                      (0x00004000&((data)<<14))
#define  HDMI_P2_CH_SR_g_rflush_flag(data)                                       (0x00002000&((data)<<13))
#define  HDMI_P2_CH_SR_g_rw_water_lv(data)                                       (0x00001F00&((data)<<8))
#define  HDMI_P2_CH_SR_b_rudflow_flag(data)                                      (0x00000080&((data)<<7))
#define  HDMI_P2_CH_SR_b_wovflow_flag(data)                                      (0x00000040&((data)<<6))
#define  HDMI_P2_CH_SR_b_rflush_flag(data)                                       (0x00000020&((data)<<5))
#define  HDMI_P2_CH_SR_b_rw_water_lv(data)                                       (0x0000001F&(data))
#define  HDMI_P2_CH_SR_get_rgb_de_align_flag(data)                               ((0x40000000&(data))>>30)
#define  HDMI_P2_CH_SR_get_r_rwclk_det_timeout_flag(data)                        ((0x20000000&(data))>>29)
#define  HDMI_P2_CH_SR_get_r_wrclk_det_timeout_flag(data)                        ((0x10000000&(data))>>28)
#define  HDMI_P2_CH_SR_get_g_rwclk_det_timeout_flag(data)                        ((0x08000000&(data))>>27)
#define  HDMI_P2_CH_SR_get_g_wrclk_det_timeout_flag(data)                        ((0x04000000&(data))>>26)
#define  HDMI_P2_CH_SR_get_b_rwclk_det_timeout_flag(data)                        ((0x02000000&(data))>>25)
#define  HDMI_P2_CH_SR_get_b_wrclk_det_timeout_flag(data)                        ((0x01000000&(data))>>24)
#define  HDMI_P2_CH_SR_get_r_rudflow_flag(data)                                  ((0x00800000&(data))>>23)
#define  HDMI_P2_CH_SR_get_r_wovflow_flag(data)                                  ((0x00400000&(data))>>22)
#define  HDMI_P2_CH_SR_get_r_rflush_flag(data)                                   ((0x00200000&(data))>>21)
#define  HDMI_P2_CH_SR_get_r_rw_water_lv(data)                                   ((0x001F0000&(data))>>16)
#define  HDMI_P2_CH_SR_get_g_rudflow_flag(data)                                  ((0x00008000&(data))>>15)
#define  HDMI_P2_CH_SR_get_g_wovflow_flag(data)                                  ((0x00004000&(data))>>14)
#define  HDMI_P2_CH_SR_get_g_rflush_flag(data)                                   ((0x00002000&(data))>>13)
#define  HDMI_P2_CH_SR_get_g_rw_water_lv(data)                                   ((0x00001F00&(data))>>8)
#define  HDMI_P2_CH_SR_get_b_rudflow_flag(data)                                  ((0x00000080&(data))>>7)
#define  HDMI_P2_CH_SR_get_b_wovflow_flag(data)                                  ((0x00000040&(data))>>6)
#define  HDMI_P2_CH_SR_get_b_rflush_flag(data)                                   ((0x00000020&(data))>>5)
#define  HDMI_P2_CH_SR_get_b_rw_water_lv(data)                                   (0x0000001F&(data))

#define  HDMI_P2_HDMI_2p0_CR                                                    0x1803C1B4
#define  HDMI_P2_HDMI_2p0_CR_reg_addr                                            "0xB803C1B4"
#define  HDMI_P2_HDMI_2p0_CR_reg                                                 0xB803C1B4
#define  HDMI_P2_HDMI_2p0_CR_inst_addr                                           "0x0069"
#define  set_HDMI_P2_HDMI_2p0_CR_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_HDMI_2p0_CR_reg)=data)
#define  get_HDMI_P2_HDMI_2p0_CR_reg                                             (*((volatile unsigned int*)HDMI_P2_HDMI_2p0_CR_reg))
#define  HDMI_P2_HDMI_2p0_CR_lfsr0_shift                                         (16)
#define  HDMI_P2_HDMI_2p0_CR_gating_en_shift                                     (8)
#define  HDMI_P2_HDMI_2p0_CR_ctr_char_num_shift                                  (1)
#define  HDMI_P2_HDMI_2p0_CR_hdmi_2p0_en_shift                                   (0)
#define  HDMI_P2_HDMI_2p0_CR_lfsr0_mask                                          (0xFFFF0000)
#define  HDMI_P2_HDMI_2p0_CR_gating_en_mask                                      (0x00000100)
#define  HDMI_P2_HDMI_2p0_CR_ctr_char_num_mask                                   (0x000000FE)
#define  HDMI_P2_HDMI_2p0_CR_hdmi_2p0_en_mask                                    (0x00000001)
#define  HDMI_P2_HDMI_2p0_CR_lfsr0(data)                                         (0xFFFF0000&((data)<<16))
#define  HDMI_P2_HDMI_2p0_CR_gating_en(data)                                     (0x00000100&((data)<<8))
#define  HDMI_P2_HDMI_2p0_CR_ctr_char_num(data)                                  (0x000000FE&((data)<<1))
#define  HDMI_P2_HDMI_2p0_CR_hdmi_2p0_en(data)                                   (0x00000001&(data))
#define  HDMI_P2_HDMI_2p0_CR_get_lfsr0(data)                                     ((0xFFFF0000&(data))>>16)
#define  HDMI_P2_HDMI_2p0_CR_get_gating_en(data)                                 ((0x00000100&(data))>>8)
#define  HDMI_P2_HDMI_2p0_CR_get_ctr_char_num(data)                              ((0x000000FE&(data))>>1)
#define  HDMI_P2_HDMI_2p0_CR_get_hdmi_2p0_en(data)                               (0x00000001&(data))

#define  HDMI_P2_HDMI_2p0_CR1                                                   0x1803C1B8
#define  HDMI_P2_HDMI_2p0_CR1_reg_addr                                           "0xB803C1B8"
#define  HDMI_P2_HDMI_2p0_CR1_reg                                                0xB803C1B8
#define  HDMI_P2_HDMI_2p0_CR1_inst_addr                                          "0x006A"
#define  set_HDMI_P2_HDMI_2p0_CR1_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_HDMI_2p0_CR1_reg)=data)
#define  get_HDMI_P2_HDMI_2p0_CR1_reg                                            (*((volatile unsigned int*)HDMI_P2_HDMI_2p0_CR1_reg))
#define  HDMI_P2_HDMI_2p0_CR1_lfsr2_shift                                        (16)
#define  HDMI_P2_HDMI_2p0_CR1_lfsr1_shift                                        (0)
#define  HDMI_P2_HDMI_2p0_CR1_lfsr2_mask                                         (0xFFFF0000)
#define  HDMI_P2_HDMI_2p0_CR1_lfsr1_mask                                         (0x0000FFFF)
#define  HDMI_P2_HDMI_2p0_CR1_lfsr2(data)                                        (0xFFFF0000&((data)<<16))
#define  HDMI_P2_HDMI_2p0_CR1_lfsr1(data)                                        (0x0000FFFF&(data))
#define  HDMI_P2_HDMI_2p0_CR1_get_lfsr2(data)                                    ((0xFFFF0000&(data))>>16)
#define  HDMI_P2_HDMI_2p0_CR1_get_lfsr1(data)                                    (0x0000FFFF&(data))

#define  HDMI_P2_SCR_CR                                                         0x1803C1BC
#define  HDMI_P2_SCR_CR_reg_addr                                                 "0xB803C1BC"
#define  HDMI_P2_SCR_CR_reg                                                      0xB803C1BC
#define  HDMI_P2_SCR_CR_inst_addr                                                "0x006B"
#define  set_HDMI_P2_SCR_CR_reg(data)                                            (*((volatile unsigned int*)HDMI_P2_SCR_CR_reg)=data)
#define  get_HDMI_P2_SCR_CR_reg                                                  (*((volatile unsigned int*)HDMI_P2_SCR_CR_reg))
#define  HDMI_P2_SCR_CR_char_lock_shift                                          (17)
#define  HDMI_P2_SCR_CR_uscr_per_glitch_r_shift                                  (13)
#define  HDMI_P2_SCR_CR_uscr_per_glitch_g_shift                                  (12)
#define  HDMI_P2_SCR_CR_uscr_per_glitch_b_shift                                  (11)
#define  HDMI_P2_SCR_CR_uscr_char_flag_r_shift                                   (10)
#define  HDMI_P2_SCR_CR_uscr_char_flag_g_shift                                   (9)
#define  HDMI_P2_SCR_CR_uscr_char_flag_b_shift                                   (8)
#define  HDMI_P2_SCR_CR_uscr_num_shift                                           (4)
#define  HDMI_P2_SCR_CR_dummy_3_2_shift                                          (2)
#define  HDMI_P2_SCR_CR_scr_en_fw_shift                                          (1)
#define  HDMI_P2_SCR_CR_scr_auto_shift                                           (0)
#define  HDMI_P2_SCR_CR_char_lock_mask                                           (0x00020000)
#define  HDMI_P2_SCR_CR_uscr_per_glitch_r_mask                                   (0x00002000)
#define  HDMI_P2_SCR_CR_uscr_per_glitch_g_mask                                   (0x00001000)
#define  HDMI_P2_SCR_CR_uscr_per_glitch_b_mask                                   (0x00000800)
#define  HDMI_P2_SCR_CR_uscr_char_flag_r_mask                                    (0x00000400)
#define  HDMI_P2_SCR_CR_uscr_char_flag_g_mask                                    (0x00000200)
#define  HDMI_P2_SCR_CR_uscr_char_flag_b_mask                                    (0x00000100)
#define  HDMI_P2_SCR_CR_uscr_num_mask                                            (0x000000F0)
#define  HDMI_P2_SCR_CR_dummy_3_2_mask                                           (0x0000000C)
#define  HDMI_P2_SCR_CR_scr_en_fw_mask                                           (0x00000002)
#define  HDMI_P2_SCR_CR_scr_auto_mask                                            (0x00000001)
#define  HDMI_P2_SCR_CR_char_lock(data)                                          (0x00020000&((data)<<17))
#define  HDMI_P2_SCR_CR_uscr_per_glitch_r(data)                                  (0x00002000&((data)<<13))
#define  HDMI_P2_SCR_CR_uscr_per_glitch_g(data)                                  (0x00001000&((data)<<12))
#define  HDMI_P2_SCR_CR_uscr_per_glitch_b(data)                                  (0x00000800&((data)<<11))
#define  HDMI_P2_SCR_CR_uscr_char_flag_r(data)                                   (0x00000400&((data)<<10))
#define  HDMI_P2_SCR_CR_uscr_char_flag_g(data)                                   (0x00000200&((data)<<9))
#define  HDMI_P2_SCR_CR_uscr_char_flag_b(data)                                   (0x00000100&((data)<<8))
#define  HDMI_P2_SCR_CR_uscr_num(data)                                           (0x000000F0&((data)<<4))
#define  HDMI_P2_SCR_CR_dummy_3_2(data)                                          (0x0000000C&((data)<<2))
#define  HDMI_P2_SCR_CR_scr_en_fw(data)                                          (0x00000002&((data)<<1))
#define  HDMI_P2_SCR_CR_scr_auto(data)                                           (0x00000001&(data))
#define  HDMI_P2_SCR_CR_get_char_lock(data)                                      ((0x00020000&(data))>>17)
#define  HDMI_P2_SCR_CR_get_uscr_per_glitch_r(data)                              ((0x00002000&(data))>>13)
#define  HDMI_P2_SCR_CR_get_uscr_per_glitch_g(data)                              ((0x00001000&(data))>>12)
#define  HDMI_P2_SCR_CR_get_uscr_per_glitch_b(data)                              ((0x00000800&(data))>>11)
#define  HDMI_P2_SCR_CR_get_uscr_char_flag_r(data)                               ((0x00000400&(data))>>10)
#define  HDMI_P2_SCR_CR_get_uscr_char_flag_g(data)                               ((0x00000200&(data))>>9)
#define  HDMI_P2_SCR_CR_get_uscr_char_flag_b(data)                               ((0x00000100&(data))>>8)
#define  HDMI_P2_SCR_CR_get_uscr_num(data)                                       ((0x000000F0&(data))>>4)
#define  HDMI_P2_SCR_CR_get_dummy_3_2(data)                                      ((0x0000000C&(data))>>2)
#define  HDMI_P2_SCR_CR_get_scr_en_fw(data)                                      ((0x00000002&(data))>>1)
#define  HDMI_P2_SCR_CR_get_scr_auto(data)                                       (0x00000001&(data))

#define  HDMI_P2_CERCR                                                          0x1803C1C0
#define  HDMI_P2_CERCR_reg_addr                                                  "0xB803C1C0"
#define  HDMI_P2_CERCR_reg                                                       0xB803C1C0
#define  HDMI_P2_CERCR_inst_addr                                                 "0x006C"
#define  set_HDMI_P2_CERCR_reg(data)                                             (*((volatile unsigned int*)HDMI_P2_CERCR_reg)=data)
#define  get_HDMI_P2_CERCR_reg                                                   (*((volatile unsigned int*)HDMI_P2_CERCR_reg))
#define  HDMI_P2_CERCR_err_cnt_sel_shift                                         (31)
#define  HDMI_P2_CERCR_scdc_ced_en_shift                                         (30)
#define  HDMI_P2_CERCR_ch_locked_reset_shift                                     (29)
#define  HDMI_P2_CERCR_ch2_over_max_err_num_shift                                (28)
#define  HDMI_P2_CERCR_ch1_over_max_err_num_shift                                (27)
#define  HDMI_P2_CERCR_ch0_over_max_err_num_shift                                (26)
#define  HDMI_P2_CERCR_max_err_num_shift                                         (16)
#define  HDMI_P2_CERCR_valid_reset_shift                                         (15)
#define  HDMI_P2_CERCR_reset_err_det_shift                                       (14)
#define  HDMI_P2_CERCR_keep_err_det_shift                                        (13)
#define  HDMI_P2_CERCR_refer_implem_shift                                        (12)
#define  HDMI_P2_CERCR_reset_shift                                               (11)
#define  HDMI_P2_CERCR_period_shift                                              (5)
#define  HDMI_P2_CERCR_ced_upd_num_shift                                         (2)
#define  HDMI_P2_CERCR_mode_shift                                                (1)
#define  HDMI_P2_CERCR_en_shift                                                  (0)
#define  HDMI_P2_CERCR_err_cnt_sel_mask                                          (0x80000000)
#define  HDMI_P2_CERCR_scdc_ced_en_mask                                          (0x40000000)
#define  HDMI_P2_CERCR_ch_locked_reset_mask                                      (0x20000000)
#define  HDMI_P2_CERCR_ch2_over_max_err_num_mask                                 (0x10000000)
#define  HDMI_P2_CERCR_ch1_over_max_err_num_mask                                 (0x08000000)
#define  HDMI_P2_CERCR_ch0_over_max_err_num_mask                                 (0x04000000)
#define  HDMI_P2_CERCR_max_err_num_mask                                          (0x03FF0000)
#define  HDMI_P2_CERCR_valid_reset_mask                                          (0x00008000)
#define  HDMI_P2_CERCR_reset_err_det_mask                                        (0x00004000)
#define  HDMI_P2_CERCR_keep_err_det_mask                                         (0x00002000)
#define  HDMI_P2_CERCR_refer_implem_mask                                         (0x00001000)
#define  HDMI_P2_CERCR_reset_mask                                                (0x00000800)
#define  HDMI_P2_CERCR_period_mask                                               (0x000007E0)
#define  HDMI_P2_CERCR_ced_upd_num_mask                                          (0x0000001C)
#define  HDMI_P2_CERCR_mode_mask                                                 (0x00000002)
#define  HDMI_P2_CERCR_en_mask                                                   (0x00000001)
#define  HDMI_P2_CERCR_err_cnt_sel(data)                                         (0x80000000&((data)<<31))
#define  HDMI_P2_CERCR_scdc_ced_en(data)                                         (0x40000000&((data)<<30))
#define  HDMI_P2_CERCR_ch_locked_reset(data)                                     (0x20000000&((data)<<29))
#define  HDMI_P2_CERCR_ch2_over_max_err_num(data)                                (0x10000000&((data)<<28))
#define  HDMI_P2_CERCR_ch1_over_max_err_num(data)                                (0x08000000&((data)<<27))
#define  HDMI_P2_CERCR_ch0_over_max_err_num(data)                                (0x04000000&((data)<<26))
#define  HDMI_P2_CERCR_max_err_num(data)                                         (0x03FF0000&((data)<<16))
#define  HDMI_P2_CERCR_valid_reset(data)                                         (0x00008000&((data)<<15))
#define  HDMI_P2_CERCR_reset_err_det(data)                                       (0x00004000&((data)<<14))
#define  HDMI_P2_CERCR_keep_err_det(data)                                        (0x00002000&((data)<<13))
#define  HDMI_P2_CERCR_refer_implem(data)                                        (0x00001000&((data)<<12))
#define  HDMI_P2_CERCR_reset(data)                                               (0x00000800&((data)<<11))
#define  HDMI_P2_CERCR_period(data)                                              (0x000007E0&((data)<<5))
#define  HDMI_P2_CERCR_ced_upd_num(data)                                         (0x0000001C&((data)<<2))
#define  HDMI_P2_CERCR_mode(data)                                                (0x00000002&((data)<<1))
#define  HDMI_P2_CERCR_en(data)                                                  (0x00000001&(data))
#define  HDMI_P2_CERCR_get_err_cnt_sel(data)                                     ((0x80000000&(data))>>31)
#define  HDMI_P2_CERCR_get_scdc_ced_en(data)                                     ((0x40000000&(data))>>30)
#define  HDMI_P2_CERCR_get_ch_locked_reset(data)                                 ((0x20000000&(data))>>29)
#define  HDMI_P2_CERCR_get_ch2_over_max_err_num(data)                            ((0x10000000&(data))>>28)
#define  HDMI_P2_CERCR_get_ch1_over_max_err_num(data)                            ((0x08000000&(data))>>27)
#define  HDMI_P2_CERCR_get_ch0_over_max_err_num(data)                            ((0x04000000&(data))>>26)
#define  HDMI_P2_CERCR_get_max_err_num(data)                                     ((0x03FF0000&(data))>>16)
#define  HDMI_P2_CERCR_get_valid_reset(data)                                     ((0x00008000&(data))>>15)
#define  HDMI_P2_CERCR_get_reset_err_det(data)                                   ((0x00004000&(data))>>14)
#define  HDMI_P2_CERCR_get_keep_err_det(data)                                    ((0x00002000&(data))>>13)
#define  HDMI_P2_CERCR_get_refer_implem(data)                                    ((0x00001000&(data))>>12)
#define  HDMI_P2_CERCR_get_reset(data)                                           ((0x00000800&(data))>>11)
#define  HDMI_P2_CERCR_get_period(data)                                          ((0x000007E0&(data))>>5)
#define  HDMI_P2_CERCR_get_ced_upd_num(data)                                     ((0x0000001C&(data))>>2)
#define  HDMI_P2_CERCR_get_mode(data)                                            ((0x00000002&(data))>>1)
#define  HDMI_P2_CERCR_get_en(data)                                              (0x00000001&(data))

#define  HDMI_P2_CERSR0                                                         0x1803C1C4
#define  HDMI_P2_CERSR0_reg_addr                                                 "0xB803C1C4"
#define  HDMI_P2_CERSR0_reg                                                      0xB803C1C4
#define  HDMI_P2_CERSR0_inst_addr                                                "0x006D"
#define  set_HDMI_P2_CERSR0_reg(data)                                            (*((volatile unsigned int*)HDMI_P2_CERSR0_reg)=data)
#define  get_HDMI_P2_CERSR0_reg                                                  (*((volatile unsigned int*)HDMI_P2_CERSR0_reg))
#define  HDMI_P2_CERSR0_err_cnt1_video_shift                                     (16)
#define  HDMI_P2_CERSR0_err_cnt0_video_shift                                     (0)
#define  HDMI_P2_CERSR0_err_cnt1_video_mask                                      (0x7FFF0000)
#define  HDMI_P2_CERSR0_err_cnt0_video_mask                                      (0x00007FFF)
#define  HDMI_P2_CERSR0_err_cnt1_video(data)                                     (0x7FFF0000&((data)<<16))
#define  HDMI_P2_CERSR0_err_cnt0_video(data)                                     (0x00007FFF&(data))
#define  HDMI_P2_CERSR0_get_err_cnt1_video(data)                                 ((0x7FFF0000&(data))>>16)
#define  HDMI_P2_CERSR0_get_err_cnt0_video(data)                                 (0x00007FFF&(data))

#define  HDMI_P2_CERSR1                                                         0x1803C1C8
#define  HDMI_P2_CERSR1_reg_addr                                                 "0xB803C1C8"
#define  HDMI_P2_CERSR1_reg                                                      0xB803C1C8
#define  HDMI_P2_CERSR1_inst_addr                                                "0x006E"
#define  set_HDMI_P2_CERSR1_reg(data)                                            (*((volatile unsigned int*)HDMI_P2_CERSR1_reg)=data)
#define  get_HDMI_P2_CERSR1_reg                                                  (*((volatile unsigned int*)HDMI_P2_CERSR1_reg))
#define  HDMI_P2_CERSR1_err_cnt0_pkt_shift                                       (16)
#define  HDMI_P2_CERSR1_err_cnt2_video_shift                                     (0)
#define  HDMI_P2_CERSR1_err_cnt0_pkt_mask                                        (0x7FFF0000)
#define  HDMI_P2_CERSR1_err_cnt2_video_mask                                      (0x00007FFF)
#define  HDMI_P2_CERSR1_err_cnt0_pkt(data)                                       (0x7FFF0000&((data)<<16))
#define  HDMI_P2_CERSR1_err_cnt2_video(data)                                     (0x00007FFF&(data))
#define  HDMI_P2_CERSR1_get_err_cnt0_pkt(data)                                   ((0x7FFF0000&(data))>>16)
#define  HDMI_P2_CERSR1_get_err_cnt2_video(data)                                 (0x00007FFF&(data))

#define  HDMI_P2_CERSR2                                                         0x1803C1CC
#define  HDMI_P2_CERSR2_reg_addr                                                 "0xB803C1CC"
#define  HDMI_P2_CERSR2_reg                                                      0xB803C1CC
#define  HDMI_P2_CERSR2_inst_addr                                                "0x006F"
#define  set_HDMI_P2_CERSR2_reg(data)                                            (*((volatile unsigned int*)HDMI_P2_CERSR2_reg)=data)
#define  get_HDMI_P2_CERSR2_reg                                                  (*((volatile unsigned int*)HDMI_P2_CERSR2_reg))
#define  HDMI_P2_CERSR2_err_cnt2_pkt_shift                                       (16)
#define  HDMI_P2_CERSR2_err_cnt1_pkt_shift                                       (0)
#define  HDMI_P2_CERSR2_err_cnt2_pkt_mask                                        (0x7FFF0000)
#define  HDMI_P2_CERSR2_err_cnt1_pkt_mask                                        (0x00007FFF)
#define  HDMI_P2_CERSR2_err_cnt2_pkt(data)                                       (0x7FFF0000&((data)<<16))
#define  HDMI_P2_CERSR2_err_cnt1_pkt(data)                                       (0x00007FFF&(data))
#define  HDMI_P2_CERSR2_get_err_cnt2_pkt(data)                                   ((0x7FFF0000&(data))>>16)
#define  HDMI_P2_CERSR2_get_err_cnt1_pkt(data)                                   (0x00007FFF&(data))

#define  HDMI_P2_CERSR3                                                         0x1803C1D0
#define  HDMI_P2_CERSR3_reg_addr                                                 "0xB803C1D0"
#define  HDMI_P2_CERSR3_reg                                                      0xB803C1D0
#define  HDMI_P2_CERSR3_inst_addr                                                "0x0070"
#define  set_HDMI_P2_CERSR3_reg(data)                                            (*((volatile unsigned int*)HDMI_P2_CERSR3_reg)=data)
#define  get_HDMI_P2_CERSR3_reg                                                  (*((volatile unsigned int*)HDMI_P2_CERSR3_reg))
#define  HDMI_P2_CERSR3_err_cnt1_ctr_shift                                       (16)
#define  HDMI_P2_CERSR3_err_cnt0_ctr_shift                                       (0)
#define  HDMI_P2_CERSR3_err_cnt1_ctr_mask                                        (0x7FFF0000)
#define  HDMI_P2_CERSR3_err_cnt0_ctr_mask                                        (0x00007FFF)
#define  HDMI_P2_CERSR3_err_cnt1_ctr(data)                                       (0x7FFF0000&((data)<<16))
#define  HDMI_P2_CERSR3_err_cnt0_ctr(data)                                       (0x00007FFF&(data))
#define  HDMI_P2_CERSR3_get_err_cnt1_ctr(data)                                   ((0x7FFF0000&(data))>>16)
#define  HDMI_P2_CERSR3_get_err_cnt0_ctr(data)                                   (0x00007FFF&(data))

#define  HDMI_P2_CERSR4                                                         0x1803C1D4
#define  HDMI_P2_CERSR4_reg_addr                                                 "0xB803C1D4"
#define  HDMI_P2_CERSR4_reg                                                      0xB803C1D4
#define  HDMI_P2_CERSR4_inst_addr                                                "0x0071"
#define  set_HDMI_P2_CERSR4_reg(data)                                            (*((volatile unsigned int*)HDMI_P2_CERSR4_reg)=data)
#define  get_HDMI_P2_CERSR4_reg                                                  (*((volatile unsigned int*)HDMI_P2_CERSR4_reg))
#define  HDMI_P2_CERSR4_err_cnt2_ctr_shift                                       (0)
#define  HDMI_P2_CERSR4_err_cnt2_ctr_mask                                        (0x00007FFF)
#define  HDMI_P2_CERSR4_err_cnt2_ctr(data)                                       (0x00007FFF&(data))
#define  HDMI_P2_CERSR4_get_err_cnt2_ctr(data)                                   (0x00007FFF&(data))

#define  HDMI_P2_YUV420_CR                                                      0x1803C1D8
#define  HDMI_P2_YUV420_CR_reg_addr                                              "0xB803C1D8"
#define  HDMI_P2_YUV420_CR_reg                                                   0xB803C1D8
#define  HDMI_P2_YUV420_CR_inst_addr                                             "0x0072"
#define  set_HDMI_P2_YUV420_CR_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_YUV420_CR_reg)=data)
#define  get_HDMI_P2_YUV420_CR_reg                                               (*((volatile unsigned int*)HDMI_P2_YUV420_CR_reg))
#define  HDMI_P2_YUV420_CR_fw_htotal_shift                                       (18)
#define  HDMI_P2_YUV420_CR_fw_hblank_shift                                       (4)
#define  HDMI_P2_YUV420_CR_fw_set_time_shift                                     (3)
#define  HDMI_P2_YUV420_CR_dummy_2_shift                                         (2)
#define  HDMI_P2_YUV420_CR_dummy_1_shift                                         (1)
#define  HDMI_P2_YUV420_CR_en_shift                                              (0)
#define  HDMI_P2_YUV420_CR_fw_htotal_mask                                        (0xFFFC0000)
#define  HDMI_P2_YUV420_CR_fw_hblank_mask                                        (0x0003FFF0)
#define  HDMI_P2_YUV420_CR_fw_set_time_mask                                      (0x00000008)
#define  HDMI_P2_YUV420_CR_dummy_2_mask                                          (0x00000004)
#define  HDMI_P2_YUV420_CR_dummy_1_mask                                          (0x00000002)
#define  HDMI_P2_YUV420_CR_en_mask                                               (0x00000001)
#define  HDMI_P2_YUV420_CR_fw_htotal(data)                                       (0xFFFC0000&((data)<<18))
#define  HDMI_P2_YUV420_CR_fw_hblank(data)                                       (0x0003FFF0&((data)<<4))
#define  HDMI_P2_YUV420_CR_fw_set_time(data)                                     (0x00000008&((data)<<3))
#define  HDMI_P2_YUV420_CR_dummy_2(data)                                         (0x00000004&((data)<<2))
#define  HDMI_P2_YUV420_CR_dummy_1(data)                                         (0x00000002&((data)<<1))
#define  HDMI_P2_YUV420_CR_en(data)                                              (0x00000001&(data))
#define  HDMI_P2_YUV420_CR_get_fw_htotal(data)                                   ((0xFFFC0000&(data))>>18)
#define  HDMI_P2_YUV420_CR_get_fw_hblank(data)                                   ((0x0003FFF0&(data))>>4)
#define  HDMI_P2_YUV420_CR_get_fw_set_time(data)                                 ((0x00000008&(data))>>3)
#define  HDMI_P2_YUV420_CR_get_dummy_2(data)                                     ((0x00000004&(data))>>2)
#define  HDMI_P2_YUV420_CR_get_dummy_1(data)                                     ((0x00000002&(data))>>1)
#define  HDMI_P2_YUV420_CR_get_en(data)                                          (0x00000001&(data))

#define  HDMI_P2_YUV420_CR1                                                     0x1803C1DC
#define  HDMI_P2_YUV420_CR1_reg_addr                                             "0xB803C1DC"
#define  HDMI_P2_YUV420_CR1_reg                                                  0xB803C1DC
#define  HDMI_P2_YUV420_CR1_inst_addr                                            "0x0073"
#define  set_HDMI_P2_YUV420_CR1_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_YUV420_CR1_reg)=data)
#define  get_HDMI_P2_YUV420_CR1_reg                                              (*((volatile unsigned int*)HDMI_P2_YUV420_CR1_reg))
#define  HDMI_P2_YUV420_CR1_vactive_shift                                        (1)
#define  HDMI_P2_YUV420_CR1_mode_shift                                           (0)
#define  HDMI_P2_YUV420_CR1_vactive_mask                                         (0x00003FFE)
#define  HDMI_P2_YUV420_CR1_mode_mask                                            (0x00000001)
#define  HDMI_P2_YUV420_CR1_vactive(data)                                        (0x00003FFE&((data)<<1))
#define  HDMI_P2_YUV420_CR1_mode(data)                                           (0x00000001&(data))
#define  HDMI_P2_YUV420_CR1_get_vactive(data)                                    ((0x00003FFE&(data))>>1)
#define  HDMI_P2_YUV420_CR1_get_mode(data)                                       (0x00000001&(data))

#define  HDMI_P2_fapa_ct_tmp                                                    0x1803C1E0
#define  HDMI_P2_fapa_ct_tmp_reg_addr                                            "0xB803C1E0"
#define  HDMI_P2_fapa_ct_tmp_reg                                                 0xB803C1E0
#define  HDMI_P2_fapa_ct_tmp_inst_addr                                           "0x0074"
#define  set_HDMI_P2_fapa_ct_tmp_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_fapa_ct_tmp_reg)=data)
#define  get_HDMI_P2_fapa_ct_tmp_reg                                             (*((volatile unsigned int*)HDMI_P2_fapa_ct_tmp_reg))
#define  HDMI_P2_fapa_ct_tmp_all_mode_shift                                      (13)
#define  HDMI_P2_fapa_ct_tmp_sta_shift                                           (0)
#define  HDMI_P2_fapa_ct_tmp_all_mode_mask                                       (0x00002000)
#define  HDMI_P2_fapa_ct_tmp_sta_mask                                            (0x00001FFF)
#define  HDMI_P2_fapa_ct_tmp_all_mode(data)                                      (0x00002000&((data)<<13))
#define  HDMI_P2_fapa_ct_tmp_sta(data)                                           (0x00001FFF&(data))
#define  HDMI_P2_fapa_ct_tmp_get_all_mode(data)                                  ((0x00002000&(data))>>13)
#define  HDMI_P2_fapa_ct_tmp_get_sta(data)                                       (0x00001FFF&(data))

#define  HDMI_P2_HDR_EM_CT2                                                     0x1803C1E4
#define  HDMI_P2_HDR_EM_CT2_reg_addr                                             "0xB803C1E4"
#define  HDMI_P2_HDR_EM_CT2_reg                                                  0xB803C1E4
#define  HDMI_P2_HDR_EM_CT2_inst_addr                                            "0x0075"
#define  set_HDMI_P2_HDR_EM_CT2_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_HDR_EM_CT2_reg)=data)
#define  get_HDMI_P2_HDR_EM_CT2_reg                                              (*((volatile unsigned int*)HDMI_P2_HDR_EM_CT2_reg))
#define  HDMI_P2_HDR_EM_CT2_sync_shift                                           (25)
#define  HDMI_P2_HDR_EM_CT2_recognize_oui_en_shift                               (24)
#define  HDMI_P2_HDR_EM_CT2_oui_3rd_shift                                        (16)
#define  HDMI_P2_HDR_EM_CT2_oui_2nd_shift                                        (8)
#define  HDMI_P2_HDR_EM_CT2_oui_1st_shift                                        (0)
#define  HDMI_P2_HDR_EM_CT2_sync_mask                                            (0x02000000)
#define  HDMI_P2_HDR_EM_CT2_recognize_oui_en_mask                                (0x01000000)
#define  HDMI_P2_HDR_EM_CT2_oui_3rd_mask                                         (0x00FF0000)
#define  HDMI_P2_HDR_EM_CT2_oui_2nd_mask                                         (0x0000FF00)
#define  HDMI_P2_HDR_EM_CT2_oui_1st_mask                                         (0x000000FF)
#define  HDMI_P2_HDR_EM_CT2_sync(data)                                           (0x02000000&((data)<<25))
#define  HDMI_P2_HDR_EM_CT2_recognize_oui_en(data)                               (0x01000000&((data)<<24))
#define  HDMI_P2_HDR_EM_CT2_oui_3rd(data)                                        (0x00FF0000&((data)<<16))
#define  HDMI_P2_HDR_EM_CT2_oui_2nd(data)                                        (0x0000FF00&((data)<<8))
#define  HDMI_P2_HDR_EM_CT2_oui_1st(data)                                        (0x000000FF&(data))
#define  HDMI_P2_HDR_EM_CT2_get_sync(data)                                       ((0x02000000&(data))>>25)
#define  HDMI_P2_HDR_EM_CT2_get_recognize_oui_en(data)                           ((0x01000000&(data))>>24)
#define  HDMI_P2_HDR_EM_CT2_get_oui_3rd(data)                                    ((0x00FF0000&(data))>>16)
#define  HDMI_P2_HDR_EM_CT2_get_oui_2nd(data)                                    ((0x0000FF00&(data))>>8)
#define  HDMI_P2_HDR_EM_CT2_get_oui_1st(data)                                    (0x000000FF&(data))

#define  HDMI_P2_HDMI_VSEM_EMC                                                  0x1803C1E8
#define  HDMI_P2_HDMI_VSEM_EMC_reg_addr                                          "0xB803C1E8"
#define  HDMI_P2_HDMI_VSEM_EMC_reg                                               0xB803C1E8
#define  HDMI_P2_HDMI_VSEM_EMC_inst_addr                                         "0x0076"
#define  set_HDMI_P2_HDMI_VSEM_EMC_reg(data)                                     (*((volatile unsigned int*)HDMI_P2_HDMI_VSEM_EMC_reg)=data)
#define  get_HDMI_P2_HDMI_VSEM_EMC_reg                                           (*((volatile unsigned int*)HDMI_P2_HDMI_VSEM_EMC_reg))
#define  HDMI_P2_HDMI_VSEM_EMC_set_tag_msb_shift                                 (16)
#define  HDMI_P2_HDMI_VSEM_EMC_set_tag_lsb_shift                                 (8)
#define  HDMI_P2_HDMI_VSEM_EMC_recognize_tag_en_shift                            (7)
#define  HDMI_P2_HDMI_VSEM_EMC_vsem_clr_shift                                    (4)
#define  HDMI_P2_HDMI_VSEM_EMC_rec_em_vsem_irq_en_shift                          (0)
#define  HDMI_P2_HDMI_VSEM_EMC_set_tag_msb_mask                                  (0x00FF0000)
#define  HDMI_P2_HDMI_VSEM_EMC_set_tag_lsb_mask                                  (0x0000FF00)
#define  HDMI_P2_HDMI_VSEM_EMC_recognize_tag_en_mask                             (0x00000080)
#define  HDMI_P2_HDMI_VSEM_EMC_vsem_clr_mask                                     (0x00000010)
#define  HDMI_P2_HDMI_VSEM_EMC_rec_em_vsem_irq_en_mask                           (0x00000007)
#define  HDMI_P2_HDMI_VSEM_EMC_set_tag_msb(data)                                 (0x00FF0000&((data)<<16))
#define  HDMI_P2_HDMI_VSEM_EMC_set_tag_lsb(data)                                 (0x0000FF00&((data)<<8))
#define  HDMI_P2_HDMI_VSEM_EMC_recognize_tag_en(data)                            (0x00000080&((data)<<7))
#define  HDMI_P2_HDMI_VSEM_EMC_vsem_clr(data)                                    (0x00000010&((data)<<4))
#define  HDMI_P2_HDMI_VSEM_EMC_rec_em_vsem_irq_en(data)                          (0x00000007&(data))
#define  HDMI_P2_HDMI_VSEM_EMC_get_set_tag_msb(data)                             ((0x00FF0000&(data))>>16)
#define  HDMI_P2_HDMI_VSEM_EMC_get_set_tag_lsb(data)                             ((0x0000FF00&(data))>>8)
#define  HDMI_P2_HDMI_VSEM_EMC_get_recognize_tag_en(data)                        ((0x00000080&(data))>>7)
#define  HDMI_P2_HDMI_VSEM_EMC_get_vsem_clr(data)                                ((0x00000010&(data))>>4)
#define  HDMI_P2_HDMI_VSEM_EMC_get_rec_em_vsem_irq_en(data)                      (0x00000007&(data))

#define  HDMI_P2_HDMI_VSEM_EMC2                                                 0x1803C1EC
#define  HDMI_P2_HDMI_VSEM_EMC2_reg_addr                                         "0xB803C1EC"
#define  HDMI_P2_HDMI_VSEM_EMC2_reg                                              0xB803C1EC
#define  HDMI_P2_HDMI_VSEM_EMC2_inst_addr                                        "0x0077"
#define  set_HDMI_P2_HDMI_VSEM_EMC2_reg(data)                                    (*((volatile unsigned int*)HDMI_P2_HDMI_VSEM_EMC2_reg)=data)
#define  get_HDMI_P2_HDMI_VSEM_EMC2_reg                                          (*((volatile unsigned int*)HDMI_P2_HDMI_VSEM_EMC2_reg))
#define  HDMI_P2_HDMI_VSEM_EMC2_sync_shift                                       (25)
#define  HDMI_P2_HDMI_VSEM_EMC2_recognize_oui_en_shift                           (24)
#define  HDMI_P2_HDMI_VSEM_EMC2_oui_3rd_shift                                    (16)
#define  HDMI_P2_HDMI_VSEM_EMC2_oui_2nd_shift                                    (8)
#define  HDMI_P2_HDMI_VSEM_EMC2_oui_1st_shift                                    (0)
#define  HDMI_P2_HDMI_VSEM_EMC2_sync_mask                                        (0x02000000)
#define  HDMI_P2_HDMI_VSEM_EMC2_recognize_oui_en_mask                            (0x01000000)
#define  HDMI_P2_HDMI_VSEM_EMC2_oui_3rd_mask                                     (0x00FF0000)
#define  HDMI_P2_HDMI_VSEM_EMC2_oui_2nd_mask                                     (0x0000FF00)
#define  HDMI_P2_HDMI_VSEM_EMC2_oui_1st_mask                                     (0x000000FF)
#define  HDMI_P2_HDMI_VSEM_EMC2_sync(data)                                       (0x02000000&((data)<<25))
#define  HDMI_P2_HDMI_VSEM_EMC2_recognize_oui_en(data)                           (0x01000000&((data)<<24))
#define  HDMI_P2_HDMI_VSEM_EMC2_oui_3rd(data)                                    (0x00FF0000&((data)<<16))
#define  HDMI_P2_HDMI_VSEM_EMC2_oui_2nd(data)                                    (0x0000FF00&((data)<<8))
#define  HDMI_P2_HDMI_VSEM_EMC2_oui_1st(data)                                    (0x000000FF&(data))
#define  HDMI_P2_HDMI_VSEM_EMC2_get_sync(data)                                   ((0x02000000&(data))>>25)
#define  HDMI_P2_HDMI_VSEM_EMC2_get_recognize_oui_en(data)                       ((0x01000000&(data))>>24)
#define  HDMI_P2_HDMI_VSEM_EMC2_get_oui_3rd(data)                                ((0x00FF0000&(data))>>16)
#define  HDMI_P2_HDMI_VSEM_EMC2_get_oui_2nd(data)                                ((0x0000FF00&(data))>>8)
#define  HDMI_P2_HDMI_VSEM_EMC2_get_oui_1st(data)                                (0x000000FF&(data))

#define  HDMI_P2_VSEM_ST                                                        0x1803C1F0
#define  HDMI_P2_VSEM_ST_reg_addr                                                "0xB803C1F0"
#define  HDMI_P2_VSEM_ST_reg                                                     0xB803C1F0
#define  HDMI_P2_VSEM_ST_inst_addr                                               "0x0078"
#define  set_HDMI_P2_VSEM_ST_reg(data)                                           (*((volatile unsigned int*)HDMI_P2_VSEM_ST_reg)=data)
#define  get_HDMI_P2_VSEM_ST_reg                                                 (*((volatile unsigned int*)HDMI_P2_VSEM_ST_reg))
#define  HDMI_P2_VSEM_ST_em_vsem_no_shift                                        (7)
#define  HDMI_P2_VSEM_ST_em_vsem_timeout_shift                                   (5)
#define  HDMI_P2_VSEM_ST_em_vsem_discont_shift                                   (4)
#define  HDMI_P2_VSEM_ST_em_vsem_end_shift                                       (3)
#define  HDMI_P2_VSEM_ST_em_vsem_new_shift                                       (2)
#define  HDMI_P2_VSEM_ST_em_vsem_first_shift                                     (1)
#define  HDMI_P2_VSEM_ST_em_vsem_last_shift                                      (0)
#define  HDMI_P2_VSEM_ST_em_vsem_no_mask                                         (0x00000080)
#define  HDMI_P2_VSEM_ST_em_vsem_timeout_mask                                    (0x00000020)
#define  HDMI_P2_VSEM_ST_em_vsem_discont_mask                                    (0x00000010)
#define  HDMI_P2_VSEM_ST_em_vsem_end_mask                                        (0x00000008)
#define  HDMI_P2_VSEM_ST_em_vsem_new_mask                                        (0x00000004)
#define  HDMI_P2_VSEM_ST_em_vsem_first_mask                                      (0x00000002)
#define  HDMI_P2_VSEM_ST_em_vsem_last_mask                                       (0x00000001)
#define  HDMI_P2_VSEM_ST_em_vsem_no(data)                                        (0x00000080&((data)<<7))
#define  HDMI_P2_VSEM_ST_em_vsem_timeout(data)                                   (0x00000020&((data)<<5))
#define  HDMI_P2_VSEM_ST_em_vsem_discont(data)                                   (0x00000010&((data)<<4))
#define  HDMI_P2_VSEM_ST_em_vsem_end(data)                                       (0x00000008&((data)<<3))
#define  HDMI_P2_VSEM_ST_em_vsem_new(data)                                       (0x00000004&((data)<<2))
#define  HDMI_P2_VSEM_ST_em_vsem_first(data)                                     (0x00000002&((data)<<1))
#define  HDMI_P2_VSEM_ST_em_vsem_last(data)                                      (0x00000001&(data))
#define  HDMI_P2_VSEM_ST_get_em_vsem_no(data)                                    ((0x00000080&(data))>>7)
#define  HDMI_P2_VSEM_ST_get_em_vsem_timeout(data)                               ((0x00000020&(data))>>5)
#define  HDMI_P2_VSEM_ST_get_em_vsem_discont(data)                               ((0x00000010&(data))>>4)
#define  HDMI_P2_VSEM_ST_get_em_vsem_end(data)                                   ((0x00000008&(data))>>3)
#define  HDMI_P2_VSEM_ST_get_em_vsem_new(data)                                   ((0x00000004&(data))>>2)
#define  HDMI_P2_VSEM_ST_get_em_vsem_first(data)                                 ((0x00000002&(data))>>1)
#define  HDMI_P2_VSEM_ST_get_em_vsem_last(data)                                  (0x00000001&(data))

#define  HDMI_P2_HD20_ps_ct                                                     0x1803C1F4
#define  HDMI_P2_HD20_ps_ct_reg_addr                                             "0xB803C1F4"
#define  HDMI_P2_HD20_ps_ct_reg                                                  0xB803C1F4
#define  HDMI_P2_HD20_ps_ct_inst_addr                                            "0x0079"
#define  set_HDMI_P2_HD20_ps_ct_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_HD20_ps_ct_reg)=data)
#define  get_HDMI_P2_HD20_ps_ct_reg                                              (*((volatile unsigned int*)HDMI_P2_HD20_ps_ct_reg))
#define  HDMI_P2_HD20_ps_ct_timer_cnt_end_shift                                  (4)
#define  HDMI_P2_HD20_ps_ct_fw_mode_shift                                        (1)
#define  HDMI_P2_HD20_ps_ct_ps_mode_shift                                        (0)
#define  HDMI_P2_HD20_ps_ct_timer_cnt_end_mask                                   (0x03FFFFF0)
#define  HDMI_P2_HD20_ps_ct_fw_mode_mask                                         (0x00000002)
#define  HDMI_P2_HD20_ps_ct_ps_mode_mask                                         (0x00000001)
#define  HDMI_P2_HD20_ps_ct_timer_cnt_end(data)                                  (0x03FFFFF0&((data)<<4))
#define  HDMI_P2_HD20_ps_ct_fw_mode(data)                                        (0x00000002&((data)<<1))
#define  HDMI_P2_HD20_ps_ct_ps_mode(data)                                        (0x00000001&(data))
#define  HDMI_P2_HD20_ps_ct_get_timer_cnt_end(data)                              ((0x03FFFFF0&(data))>>4)
#define  HDMI_P2_HD20_ps_ct_get_fw_mode(data)                                    ((0x00000002&(data))>>1)
#define  HDMI_P2_HD20_ps_ct_get_ps_mode(data)                                    (0x00000001&(data))

#define  HDMI_P2_HD20_ps_st                                                     0x1803C1F8
#define  HDMI_P2_HD20_ps_st_reg_addr                                             "0xB803C1F8"
#define  HDMI_P2_HD20_ps_st_reg                                                  0xB803C1F8
#define  HDMI_P2_HD20_ps_st_inst_addr                                            "0x007A"
#define  set_HDMI_P2_HD20_ps_st_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_HD20_ps_st_reg)=data)
#define  get_HDMI_P2_HD20_ps_st_reg                                              (*((volatile unsigned int*)HDMI_P2_HD20_ps_st_reg))
#define  HDMI_P2_HD20_ps_st_irq_en_pwron_shift                                   (29)
#define  HDMI_P2_HD20_ps_st_irq_en_pwroff_shift                                  (28)
#define  HDMI_P2_HD20_ps_st_pwron_shift                                          (1)
#define  HDMI_P2_HD20_ps_st_pwroff_shift                                         (0)
#define  HDMI_P2_HD20_ps_st_irq_en_pwron_mask                                    (0x20000000)
#define  HDMI_P2_HD20_ps_st_irq_en_pwroff_mask                                   (0x10000000)
#define  HDMI_P2_HD20_ps_st_pwron_mask                                           (0x00000002)
#define  HDMI_P2_HD20_ps_st_pwroff_mask                                          (0x00000001)
#define  HDMI_P2_HD20_ps_st_irq_en_pwron(data)                                   (0x20000000&((data)<<29))
#define  HDMI_P2_HD20_ps_st_irq_en_pwroff(data)                                  (0x10000000&((data)<<28))
#define  HDMI_P2_HD20_ps_st_pwron(data)                                          (0x00000002&((data)<<1))
#define  HDMI_P2_HD20_ps_st_pwroff(data)                                         (0x00000001&(data))
#define  HDMI_P2_HD20_ps_st_get_irq_en_pwron(data)                               ((0x20000000&(data))>>29)
#define  HDMI_P2_HD20_ps_st_get_irq_en_pwroff(data)                              ((0x10000000&(data))>>28)
#define  HDMI_P2_HD20_ps_st_get_pwron(data)                                      ((0x00000002&(data))>>1)
#define  HDMI_P2_HD20_ps_st_get_pwroff(data)                                     (0x00000001&(data))

#define  HDMI_P2_irq_all_status                                                 0x1803C1FC
#define  HDMI_P2_irq_all_status_reg_addr                                         "0xB803C1FC"
#define  HDMI_P2_irq_all_status_reg                                              0xB803C1FC
#define  HDMI_P2_irq_all_status_inst_addr                                        "0x007B"
#define  set_HDMI_P2_irq_all_status_reg(data)                                    (*((volatile unsigned int*)HDMI_P2_irq_all_status_reg)=data)
#define  get_HDMI_P2_irq_all_status_reg                                          (*((volatile unsigned int*)HDMI_P2_irq_all_status_reg))
#define  HDMI_P2_irq_all_status_irq_fw_all_0_shift                               (0)
#define  HDMI_P2_irq_all_status_irq_fw_all_0_mask                                (0x00000001)
#define  HDMI_P2_irq_all_status_irq_fw_all_0(data)                               (0x00000001&(data))
#define  HDMI_P2_irq_all_status_get_irq_fw_all_0(data)                           (0x00000001&(data))

#define  HDMI_P2_xtal_1ms                                                       0x1803C200
#define  HDMI_P2_xtal_1ms_reg_addr                                               "0xB803C200"
#define  HDMI_P2_xtal_1ms_reg                                                    0xB803C200
#define  HDMI_P2_xtal_1ms_inst_addr                                              "0x007C"
#define  set_HDMI_P2_xtal_1ms_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_xtal_1ms_reg)=data)
#define  get_HDMI_P2_xtal_1ms_reg                                                (*((volatile unsigned int*)HDMI_P2_xtal_1ms_reg))
#define  HDMI_P2_xtal_1ms_cnt_shift                                              (0)
#define  HDMI_P2_xtal_1ms_cnt_mask                                               (0x00007FFF)
#define  HDMI_P2_xtal_1ms_cnt(data)                                              (0x00007FFF&(data))
#define  HDMI_P2_xtal_1ms_get_cnt(data)                                          (0x00007FFF&(data))

#define  HDMI_P2_xtal_10ms                                                      0x1803C204
#define  HDMI_P2_xtal_10ms_reg_addr                                              "0xB803C204"
#define  HDMI_P2_xtal_10ms_reg                                                   0xB803C204
#define  HDMI_P2_xtal_10ms_inst_addr                                             "0x007D"
#define  set_HDMI_P2_xtal_10ms_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_xtal_10ms_reg)=data)
#define  get_HDMI_P2_xtal_10ms_reg                                               (*((volatile unsigned int*)HDMI_P2_xtal_10ms_reg))
#define  HDMI_P2_xtal_10ms_cnt_shift                                             (0)
#define  HDMI_P2_xtal_10ms_cnt_mask                                              (0x0007FFFF)
#define  HDMI_P2_xtal_10ms_cnt(data)                                             (0x0007FFFF&(data))
#define  HDMI_P2_xtal_10ms_get_cnt(data)                                         (0x0007FFFF&(data))

#define  HDMI_P2_ps_measure_ctrl                                                0x1803C220
#define  HDMI_P2_ps_measure_ctrl_reg_addr                                        "0xB803C220"
#define  HDMI_P2_ps_measure_ctrl_reg                                             0xB803C220
#define  HDMI_P2_ps_measure_ctrl_inst_addr                                       "0x007E"
#define  set_HDMI_P2_ps_measure_ctrl_reg(data)                                   (*((volatile unsigned int*)HDMI_P2_ps_measure_ctrl_reg)=data)
#define  get_HDMI_P2_ps_measure_ctrl_reg                                         (*((volatile unsigned int*)HDMI_P2_ps_measure_ctrl_reg))
#define  HDMI_P2_ps_measure_ctrl_en_shift                                        (0)
#define  HDMI_P2_ps_measure_ctrl_en_mask                                         (0x00000001)
#define  HDMI_P2_ps_measure_ctrl_en(data)                                        (0x00000001&(data))
#define  HDMI_P2_ps_measure_ctrl_get_en(data)                                    (0x00000001&(data))

#define  HDMI_P2_ps_measure_xtal_clk                                            0x1803C224
#define  HDMI_P2_ps_measure_xtal_clk_reg_addr                                    "0xB803C224"
#define  HDMI_P2_ps_measure_xtal_clk_reg                                         0xB803C224
#define  HDMI_P2_ps_measure_xtal_clk_inst_addr                                   "0x007F"
#define  set_HDMI_P2_ps_measure_xtal_clk_reg(data)                               (*((volatile unsigned int*)HDMI_P2_ps_measure_xtal_clk_reg)=data)
#define  get_HDMI_P2_ps_measure_xtal_clk_reg                                     (*((volatile unsigned int*)HDMI_P2_ps_measure_xtal_clk_reg))
#define  HDMI_P2_ps_measure_xtal_clk_vs2vs_cycle_count_shift                     (0)
#define  HDMI_P2_ps_measure_xtal_clk_vs2vs_cycle_count_mask                      (0x003FFFFF)
#define  HDMI_P2_ps_measure_xtal_clk_vs2vs_cycle_count(data)                     (0x003FFFFF&(data))
#define  HDMI_P2_ps_measure_xtal_clk_get_vs2vs_cycle_count(data)                 (0x003FFFFF&(data))

#define  HDMI_P2_ps_measure_tmds_clk                                            0x1803C228
#define  HDMI_P2_ps_measure_tmds_clk_reg_addr                                    "0xB803C228"
#define  HDMI_P2_ps_measure_tmds_clk_reg                                         0xB803C228
#define  HDMI_P2_ps_measure_tmds_clk_inst_addr                                   "0x0080"
#define  set_HDMI_P2_ps_measure_tmds_clk_reg(data)                               (*((volatile unsigned int*)HDMI_P2_ps_measure_tmds_clk_reg)=data)
#define  get_HDMI_P2_ps_measure_tmds_clk_reg                                     (*((volatile unsigned int*)HDMI_P2_ps_measure_tmds_clk_reg))
#define  HDMI_P2_ps_measure_tmds_clk_last_pixel2vs_count_shift                   (0)
#define  HDMI_P2_ps_measure_tmds_clk_last_pixel2vs_count_mask                    (0x07FFFFFF)
#define  HDMI_P2_ps_measure_tmds_clk_last_pixel2vs_count(data)                   (0x07FFFFFF&(data))
#define  HDMI_P2_ps_measure_tmds_clk_get_last_pixel2vs_count(data)               (0x07FFFFFF&(data))

#define  HDMI_P2_HDCP_KEEPOUT                                                   0x1803C300
#define  HDMI_P2_HDCP_KEEPOUT_reg_addr                                           "0xB803C300"
#define  HDMI_P2_HDCP_KEEPOUT_reg                                                0xB803C300
#define  HDMI_P2_HDCP_KEEPOUT_inst_addr                                          "0x0081"
#define  set_HDMI_P2_HDCP_KEEPOUT_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_HDCP_KEEPOUT_reg)=data)
#define  get_HDMI_P2_HDCP_KEEPOUT_reg                                            (*((volatile unsigned int*)HDMI_P2_HDCP_KEEPOUT_reg))
#define  HDMI_P2_HDCP_KEEPOUT_non_ctl_err_shift                                  (25)
#define  HDMI_P2_HDCP_KEEPOUT_rc_err_shift                                       (24)
#define  HDMI_P2_HDCP_KEEPOUT_keepout_window_end_shift                           (12)
#define  HDMI_P2_HDCP_KEEPOUT_keepout_window_start_shift                         (0)
#define  HDMI_P2_HDCP_KEEPOUT_non_ctl_err_mask                                   (0x02000000)
#define  HDMI_P2_HDCP_KEEPOUT_rc_err_mask                                        (0x01000000)
#define  HDMI_P2_HDCP_KEEPOUT_keepout_window_end_mask                            (0x001FF000)
#define  HDMI_P2_HDCP_KEEPOUT_keepout_window_start_mask                          (0x000003FF)
#define  HDMI_P2_HDCP_KEEPOUT_non_ctl_err(data)                                  (0x02000000&((data)<<25))
#define  HDMI_P2_HDCP_KEEPOUT_rc_err(data)                                       (0x01000000&((data)<<24))
#define  HDMI_P2_HDCP_KEEPOUT_keepout_window_end(data)                           (0x001FF000&((data)<<12))
#define  HDMI_P2_HDCP_KEEPOUT_keepout_window_start(data)                         (0x000003FF&(data))
#define  HDMI_P2_HDCP_KEEPOUT_get_non_ctl_err(data)                              ((0x02000000&(data))>>25)
#define  HDMI_P2_HDCP_KEEPOUT_get_rc_err(data)                                   ((0x01000000&(data))>>24)
#define  HDMI_P2_HDCP_KEEPOUT_get_keepout_window_end(data)                       ((0x001FF000&(data))>>12)
#define  HDMI_P2_HDCP_KEEPOUT_get_keepout_window_start(data)                     (0x000003FF&(data))

#define  HDMI_P2_HDCP_CR                                                        0x1803C304
#define  HDMI_P2_HDCP_CR_reg_addr                                                "0xB803C304"
#define  HDMI_P2_HDCP_CR_reg                                                     0xB803C304
#define  HDMI_P2_HDCP_CR_inst_addr                                               "0x0082"
#define  set_HDMI_P2_HDCP_CR_reg(data)                                           (*((volatile unsigned int*)HDMI_P2_HDCP_CR_reg)=data)
#define  get_HDMI_P2_HDCP_CR_reg                                                 (*((volatile unsigned int*)HDMI_P2_HDCP_CR_reg))
#define  HDMI_P2_HDCP_CR_enc_window_end_shift                                    (20)
#define  HDMI_P2_HDCP_CR_enc_window_start_shift                                  (10)
#define  HDMI_P2_HDCP_CR_hdcp_clk_switch_auto_shift                              (9)
#define  HDMI_P2_HDCP_CR_hdcp_clk_sel_fw_shift                                   (8)
#define  HDMI_P2_HDCP_CR_namfe_shift                                             (7)
#define  HDMI_P2_HDCP_CR_rpt_shift                                               (6)
#define  HDMI_P2_HDCP_CR_ivsp_shift                                              (5)
#define  HDMI_P2_HDCP_CR_invvs_shift                                             (4)
#define  HDMI_P2_HDCP_CR_ivspm_shift                                             (3)
#define  HDMI_P2_HDCP_CR_enc_window_end_mask                                     (0x1FF00000)
#define  HDMI_P2_HDCP_CR_enc_window_start_mask                                   (0x000FFC00)
#define  HDMI_P2_HDCP_CR_hdcp_clk_switch_auto_mask                               (0x00000200)
#define  HDMI_P2_HDCP_CR_hdcp_clk_sel_fw_mask                                    (0x00000100)
#define  HDMI_P2_HDCP_CR_namfe_mask                                              (0x00000080)
#define  HDMI_P2_HDCP_CR_rpt_mask                                                (0x00000040)
#define  HDMI_P2_HDCP_CR_ivsp_mask                                               (0x00000020)
#define  HDMI_P2_HDCP_CR_invvs_mask                                              (0x00000010)
#define  HDMI_P2_HDCP_CR_ivspm_mask                                              (0x00000008)
#define  HDMI_P2_HDCP_CR_enc_window_end(data)                                    (0x1FF00000&((data)<<20))
#define  HDMI_P2_HDCP_CR_enc_window_start(data)                                  (0x000FFC00&((data)<<10))
#define  HDMI_P2_HDCP_CR_hdcp_clk_switch_auto(data)                              (0x00000200&((data)<<9))
#define  HDMI_P2_HDCP_CR_hdcp_clk_sel_fw(data)                                   (0x00000100&((data)<<8))
#define  HDMI_P2_HDCP_CR_namfe(data)                                             (0x00000080&((data)<<7))
#define  HDMI_P2_HDCP_CR_rpt(data)                                               (0x00000040&((data)<<6))
#define  HDMI_P2_HDCP_CR_ivsp(data)                                              (0x00000020&((data)<<5))
#define  HDMI_P2_HDCP_CR_invvs(data)                                             (0x00000010&((data)<<4))
#define  HDMI_P2_HDCP_CR_ivspm(data)                                             (0x00000008&((data)<<3))
#define  HDMI_P2_HDCP_CR_get_enc_window_end(data)                                ((0x1FF00000&(data))>>20)
#define  HDMI_P2_HDCP_CR_get_enc_window_start(data)                              ((0x000FFC00&(data))>>10)
#define  HDMI_P2_HDCP_CR_get_hdcp_clk_switch_auto(data)                          ((0x00000200&(data))>>9)
#define  HDMI_P2_HDCP_CR_get_hdcp_clk_sel_fw(data)                               ((0x00000100&(data))>>8)
#define  HDMI_P2_HDCP_CR_get_namfe(data)                                         ((0x00000080&(data))>>7)
#define  HDMI_P2_HDCP_CR_get_rpt(data)                                           ((0x00000040&(data))>>6)
#define  HDMI_P2_HDCP_CR_get_ivsp(data)                                          ((0x00000020&(data))>>5)
#define  HDMI_P2_HDCP_CR_get_invvs(data)                                         ((0x00000010&(data))>>4)
#define  HDMI_P2_HDCP_CR_get_ivspm(data)                                         ((0x00000008&(data))>>3)

#define  HDMI_P2_HDCP_CR2                                                       0x1803C308
#define  HDMI_P2_HDCP_CR2_reg_addr                                               "0xB803C308"
#define  HDMI_P2_HDCP_CR2_reg                                                    0xB803C308
#define  HDMI_P2_HDCP_CR2_inst_addr                                              "0x0083"
#define  set_HDMI_P2_HDCP_CR2_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_HDCP_CR2_reg)=data)
#define  get_HDMI_P2_HDCP_CR2_reg                                                (*((volatile unsigned int*)HDMI_P2_HDCP_CR2_reg))
#define  HDMI_P2_HDCP_CR2_enc_window_de2vs_shift                                 (1)
#define  HDMI_P2_HDCP_CR2_win_opp_mode_shift                                     (0)
#define  HDMI_P2_HDCP_CR2_enc_window_de2vs_mask                                  (0x0FFFFFFE)
#define  HDMI_P2_HDCP_CR2_win_opp_mode_mask                                      (0x00000001)
#define  HDMI_P2_HDCP_CR2_enc_window_de2vs(data)                                 (0x0FFFFFFE&((data)<<1))
#define  HDMI_P2_HDCP_CR2_win_opp_mode(data)                                     (0x00000001&(data))
#define  HDMI_P2_HDCP_CR2_get_enc_window_de2vs(data)                             ((0x0FFFFFFE&(data))>>1)
#define  HDMI_P2_HDCP_CR2_get_win_opp_mode(data)                                 (0x00000001&(data))

#define  HDMI_P2_HDCP_PCR                                                       0x1803C30C
#define  HDMI_P2_HDCP_PCR_reg_addr                                               "0xB803C30C"
#define  HDMI_P2_HDCP_PCR_reg                                                    0xB803C30C
#define  HDMI_P2_HDCP_PCR_inst_addr                                              "0x0084"
#define  set_HDMI_P2_HDCP_PCR_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_HDCP_PCR_reg)=data)
#define  get_HDMI_P2_HDCP_PCR_reg                                                (*((volatile unsigned int*)HDMI_P2_HDCP_PCR_reg))
#define  HDMI_P2_HDCP_PCR_tune_up_down_shift                                     (17)
#define  HDMI_P2_HDCP_PCR_tune_range_shift                                       (10)
#define  HDMI_P2_HDCP_PCR_dvi_enc_mode_shift                                     (8)
#define  HDMI_P2_HDCP_PCR_hdcp_vs_sel_shift                                      (5)
#define  HDMI_P2_HDCP_PCR_enc_tog_shift                                          (4)
#define  HDMI_P2_HDCP_PCR_avmute_dis_shift                                       (3)
#define  HDMI_P2_HDCP_PCR_tune_up_down_mask                                      (0x00020000)
#define  HDMI_P2_HDCP_PCR_tune_range_mask                                        (0x0001FC00)
#define  HDMI_P2_HDCP_PCR_dvi_enc_mode_mask                                      (0x00000100)
#define  HDMI_P2_HDCP_PCR_hdcp_vs_sel_mask                                       (0x00000020)
#define  HDMI_P2_HDCP_PCR_enc_tog_mask                                           (0x00000010)
#define  HDMI_P2_HDCP_PCR_avmute_dis_mask                                        (0x00000008)
#define  HDMI_P2_HDCP_PCR_tune_up_down(data)                                     (0x00020000&((data)<<17))
#define  HDMI_P2_HDCP_PCR_tune_range(data)                                       (0x0001FC00&((data)<<10))
#define  HDMI_P2_HDCP_PCR_dvi_enc_mode(data)                                     (0x00000100&((data)<<8))
#define  HDMI_P2_HDCP_PCR_hdcp_vs_sel(data)                                      (0x00000020&((data)<<5))
#define  HDMI_P2_HDCP_PCR_enc_tog(data)                                          (0x00000010&((data)<<4))
#define  HDMI_P2_HDCP_PCR_avmute_dis(data)                                       (0x00000008&((data)<<3))
#define  HDMI_P2_HDCP_PCR_get_tune_up_down(data)                                 ((0x00020000&(data))>>17)
#define  HDMI_P2_HDCP_PCR_get_tune_range(data)                                   ((0x0001FC00&(data))>>10)
#define  HDMI_P2_HDCP_PCR_get_dvi_enc_mode(data)                                 ((0x00000100&(data))>>8)
#define  HDMI_P2_HDCP_PCR_get_hdcp_vs_sel(data)                                  ((0x00000020&(data))>>5)
#define  HDMI_P2_HDCP_PCR_get_enc_tog(data)                                      ((0x00000010&(data))>>4)
#define  HDMI_P2_HDCP_PCR_get_avmute_dis(data)                                   ((0x00000008&(data))>>3)

#define  HDMI_P2_HDCP_FLAG1                                                     0x1803C310
#define  HDMI_P2_HDCP_FLAG1_reg_addr                                             "0xB803C310"
#define  HDMI_P2_HDCP_FLAG1_reg                                                  0xB803C310
#define  HDMI_P2_HDCP_FLAG1_inst_addr                                            "0x0085"
#define  set_HDMI_P2_HDCP_FLAG1_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_HDCP_FLAG1_reg)=data)
#define  get_HDMI_P2_HDCP_FLAG1_reg                                              (*((volatile unsigned int*)HDMI_P2_HDCP_FLAG1_reg))
#define  HDMI_P2_HDCP_FLAG1_dummy_0_shift                                        (0)
#define  HDMI_P2_HDCP_FLAG1_dummy_0_mask                                         (0x00000001)
#define  HDMI_P2_HDCP_FLAG1_dummy_0(data)                                        (0x00000001&(data))
#define  HDMI_P2_HDCP_FLAG1_get_dummy_0(data)                                    (0x00000001&(data))

#define  HDMI_P2_HDCP_FLAG2                                                     0x1803C314
#define  HDMI_P2_HDCP_FLAG2_reg_addr                                             "0xB803C314"
#define  HDMI_P2_HDCP_FLAG2_reg                                                  0xB803C314
#define  HDMI_P2_HDCP_FLAG2_inst_addr                                            "0x0086"
#define  set_HDMI_P2_HDCP_FLAG2_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_HDCP_FLAG2_reg)=data)
#define  get_HDMI_P2_HDCP_FLAG2_reg                                              (*((volatile unsigned int*)HDMI_P2_HDCP_FLAG2_reg))
#define  HDMI_P2_HDCP_FLAG2_dummy_0_shift                                        (0)
#define  HDMI_P2_HDCP_FLAG2_dummy_0_mask                                         (0x00000001)
#define  HDMI_P2_HDCP_FLAG2_dummy_0(data)                                        (0x00000001&(data))
#define  HDMI_P2_HDCP_FLAG2_get_dummy_0(data)                                    (0x00000001&(data))

#define  HDMI_P2_HDCP_2p2_CR                                                    0x1803C320
#define  HDMI_P2_HDCP_2p2_CR_reg_addr                                            "0xB803C320"
#define  HDMI_P2_HDCP_2p2_CR_reg                                                 0xB803C320
#define  HDMI_P2_HDCP_2p2_CR_inst_addr                                           "0x0087"
#define  set_HDMI_P2_HDCP_2p2_CR_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_CR_reg)=data)
#define  get_HDMI_P2_HDCP_2p2_CR_reg                                             (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_CR_reg))
#define  HDMI_P2_HDCP_2p2_CR_dummy_31_29_shift                                   (29)
#define  HDMI_P2_HDCP_2p2_CR_aes_engine_sel_shift                                (28)
#define  HDMI_P2_HDCP_2p2_CR_fn_auto_inc_shift                                   (26)
#define  HDMI_P2_HDCP_2p2_CR_apply_cp_fn_shift                                   (25)
#define  HDMI_P2_HDCP_2p2_CR_ks_encoded_shift                                    (24)
#define  HDMI_P2_HDCP_2p2_CR_dummy_31_29_mask                                    (0xE0000000)
#define  HDMI_P2_HDCP_2p2_CR_aes_engine_sel_mask                                 (0x10000000)
#define  HDMI_P2_HDCP_2p2_CR_fn_auto_inc_mask                                    (0x04000000)
#define  HDMI_P2_HDCP_2p2_CR_apply_cp_fn_mask                                    (0x02000000)
#define  HDMI_P2_HDCP_2p2_CR_ks_encoded_mask                                     (0x01000000)
#define  HDMI_P2_HDCP_2p2_CR_dummy_31_29(data)                                   (0xE0000000&((data)<<29))
#define  HDMI_P2_HDCP_2p2_CR_aes_engine_sel(data)                                (0x10000000&((data)<<28))
#define  HDMI_P2_HDCP_2p2_CR_fn_auto_inc(data)                                   (0x04000000&((data)<<26))
#define  HDMI_P2_HDCP_2p2_CR_apply_cp_fn(data)                                   (0x02000000&((data)<<25))
#define  HDMI_P2_HDCP_2p2_CR_ks_encoded(data)                                    (0x01000000&((data)<<24))
#define  HDMI_P2_HDCP_2p2_CR_get_dummy_31_29(data)                               ((0xE0000000&(data))>>29)
#define  HDMI_P2_HDCP_2p2_CR_get_aes_engine_sel(data)                            ((0x10000000&(data))>>28)
#define  HDMI_P2_HDCP_2p2_CR_get_fn_auto_inc(data)                               ((0x04000000&(data))>>26)
#define  HDMI_P2_HDCP_2p2_CR_get_apply_cp_fn(data)                               ((0x02000000&(data))>>25)
#define  HDMI_P2_HDCP_2p2_CR_get_ks_encoded(data)                                ((0x01000000&(data))>>24)

#define  HDMI_P2_HDCP_2p2_ks0                                                   0x1803C324
#define  HDMI_P2_HDCP_2p2_ks0_reg_addr                                           "0xB803C324"
#define  HDMI_P2_HDCP_2p2_ks0_reg                                                0xB803C324
#define  HDMI_P2_HDCP_2p2_ks0_inst_addr                                          "0x0088"
#define  set_HDMI_P2_HDCP_2p2_ks0_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_ks0_reg)=data)
#define  get_HDMI_P2_HDCP_2p2_ks0_reg                                            (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_ks0_reg))
#define  HDMI_P2_HDCP_2p2_ks0_ks_shift                                           (0)
#define  HDMI_P2_HDCP_2p2_ks0_ks_mask                                            (0xFFFFFFFF)
#define  HDMI_P2_HDCP_2p2_ks0_ks(data)                                           (0xFFFFFFFF&(data))
#define  HDMI_P2_HDCP_2p2_ks0_get_ks(data)                                       (0xFFFFFFFF&(data))

#define  HDMI_P2_HDCP_2p2_ks1                                                   0x1803C328
#define  HDMI_P2_HDCP_2p2_ks1_reg_addr                                           "0xB803C328"
#define  HDMI_P2_HDCP_2p2_ks1_reg                                                0xB803C328
#define  HDMI_P2_HDCP_2p2_ks1_inst_addr                                          "0x0089"
#define  set_HDMI_P2_HDCP_2p2_ks1_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_ks1_reg)=data)
#define  get_HDMI_P2_HDCP_2p2_ks1_reg                                            (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_ks1_reg))
#define  HDMI_P2_HDCP_2p2_ks1_ks_shift                                           (0)
#define  HDMI_P2_HDCP_2p2_ks1_ks_mask                                            (0xFFFFFFFF)
#define  HDMI_P2_HDCP_2p2_ks1_ks(data)                                           (0xFFFFFFFF&(data))
#define  HDMI_P2_HDCP_2p2_ks1_get_ks(data)                                       (0xFFFFFFFF&(data))

#define  HDMI_P2_HDCP_2p2_ks2                                                   0x1803C32C
#define  HDMI_P2_HDCP_2p2_ks2_reg_addr                                           "0xB803C32C"
#define  HDMI_P2_HDCP_2p2_ks2_reg                                                0xB803C32C
#define  HDMI_P2_HDCP_2p2_ks2_inst_addr                                          "0x008A"
#define  set_HDMI_P2_HDCP_2p2_ks2_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_ks2_reg)=data)
#define  get_HDMI_P2_HDCP_2p2_ks2_reg                                            (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_ks2_reg))
#define  HDMI_P2_HDCP_2p2_ks2_ks_shift                                           (0)
#define  HDMI_P2_HDCP_2p2_ks2_ks_mask                                            (0xFFFFFFFF)
#define  HDMI_P2_HDCP_2p2_ks2_ks(data)                                           (0xFFFFFFFF&(data))
#define  HDMI_P2_HDCP_2p2_ks2_get_ks(data)                                       (0xFFFFFFFF&(data))

#define  HDMI_P2_HDCP_2p2_ks3                                                   0x1803C330
#define  HDMI_P2_HDCP_2p2_ks3_reg_addr                                           "0xB803C330"
#define  HDMI_P2_HDCP_2p2_ks3_reg                                                0xB803C330
#define  HDMI_P2_HDCP_2p2_ks3_inst_addr                                          "0x008B"
#define  set_HDMI_P2_HDCP_2p2_ks3_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_ks3_reg)=data)
#define  get_HDMI_P2_HDCP_2p2_ks3_reg                                            (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_ks3_reg))
#define  HDMI_P2_HDCP_2p2_ks3_ks_shift                                           (0)
#define  HDMI_P2_HDCP_2p2_ks3_ks_mask                                            (0xFFFFFFFF)
#define  HDMI_P2_HDCP_2p2_ks3_ks(data)                                           (0xFFFFFFFF&(data))
#define  HDMI_P2_HDCP_2p2_ks3_get_ks(data)                                       (0xFFFFFFFF&(data))

#define  HDMI_P2_HDCP_2p2_lc0                                                   0x1803C334
#define  HDMI_P2_HDCP_2p2_lc0_reg_addr                                           "0xB803C334"
#define  HDMI_P2_HDCP_2p2_lc0_reg                                                0xB803C334
#define  HDMI_P2_HDCP_2p2_lc0_inst_addr                                          "0x008C"
#define  set_HDMI_P2_HDCP_2p2_lc0_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_lc0_reg)=data)
#define  get_HDMI_P2_HDCP_2p2_lc0_reg                                            (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_lc0_reg))
#define  HDMI_P2_HDCP_2p2_lc0_lc_shift                                           (0)
#define  HDMI_P2_HDCP_2p2_lc0_lc_mask                                            (0xFFFFFFFF)
#define  HDMI_P2_HDCP_2p2_lc0_lc(data)                                           (0xFFFFFFFF&(data))
#define  HDMI_P2_HDCP_2p2_lc0_get_lc(data)                                       (0xFFFFFFFF&(data))

#define  HDMI_P2_HDCP_2p2_lc1                                                   0x1803C338
#define  HDMI_P2_HDCP_2p2_lc1_reg_addr                                           "0xB803C338"
#define  HDMI_P2_HDCP_2p2_lc1_reg                                                0xB803C338
#define  HDMI_P2_HDCP_2p2_lc1_inst_addr                                          "0x008D"
#define  set_HDMI_P2_HDCP_2p2_lc1_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_lc1_reg)=data)
#define  get_HDMI_P2_HDCP_2p2_lc1_reg                                            (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_lc1_reg))
#define  HDMI_P2_HDCP_2p2_lc1_lc_shift                                           (0)
#define  HDMI_P2_HDCP_2p2_lc1_lc_mask                                            (0xFFFFFFFF)
#define  HDMI_P2_HDCP_2p2_lc1_lc(data)                                           (0xFFFFFFFF&(data))
#define  HDMI_P2_HDCP_2p2_lc1_get_lc(data)                                       (0xFFFFFFFF&(data))

#define  HDMI_P2_HDCP_2p2_lc2                                                   0x1803C33C
#define  HDMI_P2_HDCP_2p2_lc2_reg_addr                                           "0xB803C33C"
#define  HDMI_P2_HDCP_2p2_lc2_reg                                                0xB803C33C
#define  HDMI_P2_HDCP_2p2_lc2_inst_addr                                          "0x008E"
#define  set_HDMI_P2_HDCP_2p2_lc2_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_lc2_reg)=data)
#define  get_HDMI_P2_HDCP_2p2_lc2_reg                                            (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_lc2_reg))
#define  HDMI_P2_HDCP_2p2_lc2_lc_shift                                           (0)
#define  HDMI_P2_HDCP_2p2_lc2_lc_mask                                            (0xFFFFFFFF)
#define  HDMI_P2_HDCP_2p2_lc2_lc(data)                                           (0xFFFFFFFF&(data))
#define  HDMI_P2_HDCP_2p2_lc2_get_lc(data)                                       (0xFFFFFFFF&(data))

#define  HDMI_P2_HDCP_2p2_lc3                                                   0x1803C340
#define  HDMI_P2_HDCP_2p2_lc3_reg_addr                                           "0xB803C340"
#define  HDMI_P2_HDCP_2p2_lc3_reg                                                0xB803C340
#define  HDMI_P2_HDCP_2p2_lc3_inst_addr                                          "0x008F"
#define  set_HDMI_P2_HDCP_2p2_lc3_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_lc3_reg)=data)
#define  get_HDMI_P2_HDCP_2p2_lc3_reg                                            (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_lc3_reg))
#define  HDMI_P2_HDCP_2p2_lc3_lc_shift                                           (0)
#define  HDMI_P2_HDCP_2p2_lc3_lc_mask                                            (0xFFFFFFFF)
#define  HDMI_P2_HDCP_2p2_lc3_lc(data)                                           (0xFFFFFFFF&(data))
#define  HDMI_P2_HDCP_2p2_lc3_get_lc(data)                                       (0xFFFFFFFF&(data))

#define  HDMI_P2_HDCP_2p2_riv0                                                  0x1803C344
#define  HDMI_P2_HDCP_2p2_riv0_reg_addr                                          "0xB803C344"
#define  HDMI_P2_HDCP_2p2_riv0_reg                                               0xB803C344
#define  HDMI_P2_HDCP_2p2_riv0_inst_addr                                         "0x0090"
#define  set_HDMI_P2_HDCP_2p2_riv0_reg(data)                                     (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_riv0_reg)=data)
#define  get_HDMI_P2_HDCP_2p2_riv0_reg                                           (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_riv0_reg))
#define  HDMI_P2_HDCP_2p2_riv0_riv_shift                                         (0)
#define  HDMI_P2_HDCP_2p2_riv0_riv_mask                                          (0xFFFFFFFF)
#define  HDMI_P2_HDCP_2p2_riv0_riv(data)                                         (0xFFFFFFFF&(data))
#define  HDMI_P2_HDCP_2p2_riv0_get_riv(data)                                     (0xFFFFFFFF&(data))

#define  HDMI_P2_HDCP_2p2_riv1                                                  0x1803C348
#define  HDMI_P2_HDCP_2p2_riv1_reg_addr                                          "0xB803C348"
#define  HDMI_P2_HDCP_2p2_riv1_reg                                               0xB803C348
#define  HDMI_P2_HDCP_2p2_riv1_inst_addr                                         "0x0091"
#define  set_HDMI_P2_HDCP_2p2_riv1_reg(data)                                     (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_riv1_reg)=data)
#define  get_HDMI_P2_HDCP_2p2_riv1_reg                                           (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_riv1_reg))
#define  HDMI_P2_HDCP_2p2_riv1_riv_shift                                         (0)
#define  HDMI_P2_HDCP_2p2_riv1_riv_mask                                          (0xFFFFFFFF)
#define  HDMI_P2_HDCP_2p2_riv1_riv(data)                                         (0xFFFFFFFF&(data))
#define  HDMI_P2_HDCP_2p2_riv1_get_riv(data)                                     (0xFFFFFFFF&(data))

#define  HDMI_P2_HDCP_2p2_SR0                                                   0x1803C34C
#define  HDMI_P2_HDCP_2p2_SR0_reg_addr                                           "0xB803C34C"
#define  HDMI_P2_HDCP_2p2_SR0_reg                                                0xB803C34C
#define  HDMI_P2_HDCP_2p2_SR0_inst_addr                                          "0x0092"
#define  set_HDMI_P2_HDCP_2p2_SR0_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_SR0_reg)=data)
#define  get_HDMI_P2_HDCP_2p2_SR0_reg                                            (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_SR0_reg))
#define  HDMI_P2_HDCP_2p2_SR0_frame_number_shift                                 (22)
#define  HDMI_P2_HDCP_2p2_SR0_irq_fn_compare_fail_shift                          (21)
#define  HDMI_P2_HDCP_2p2_SR0_irq_crc_fail_shift                                 (20)
#define  HDMI_P2_HDCP_2p2_SR0_irq_no_cp_packet_shift                             (19)
#define  HDMI_P2_HDCP_2p2_SR0_aes_uf_shift                                       (12)
#define  HDMI_P2_HDCP_2p2_SR0_frame_number_mask                                  (0x3FC00000)
#define  HDMI_P2_HDCP_2p2_SR0_irq_fn_compare_fail_mask                           (0x00200000)
#define  HDMI_P2_HDCP_2p2_SR0_irq_crc_fail_mask                                  (0x00100000)
#define  HDMI_P2_HDCP_2p2_SR0_irq_no_cp_packet_mask                              (0x00080000)
#define  HDMI_P2_HDCP_2p2_SR0_aes_uf_mask                                        (0x00001000)
#define  HDMI_P2_HDCP_2p2_SR0_frame_number(data)                                 (0x3FC00000&((data)<<22))
#define  HDMI_P2_HDCP_2p2_SR0_irq_fn_compare_fail(data)                          (0x00200000&((data)<<21))
#define  HDMI_P2_HDCP_2p2_SR0_irq_crc_fail(data)                                 (0x00100000&((data)<<20))
#define  HDMI_P2_HDCP_2p2_SR0_irq_no_cp_packet(data)                             (0x00080000&((data)<<19))
#define  HDMI_P2_HDCP_2p2_SR0_aes_uf(data)                                       (0x00001000&((data)<<12))
#define  HDMI_P2_HDCP_2p2_SR0_get_frame_number(data)                             ((0x3FC00000&(data))>>22)
#define  HDMI_P2_HDCP_2p2_SR0_get_irq_fn_compare_fail(data)                      ((0x00200000&(data))>>21)
#define  HDMI_P2_HDCP_2p2_SR0_get_irq_crc_fail(data)                             ((0x00100000&(data))>>20)
#define  HDMI_P2_HDCP_2p2_SR0_get_irq_no_cp_packet(data)                         ((0x00080000&(data))>>19)
#define  HDMI_P2_HDCP_2p2_SR0_get_aes_uf(data)                                   ((0x00001000&(data))>>12)

#define  HDMI_P2_HDCP_2p2_SR1                                                   0x1803C350
#define  HDMI_P2_HDCP_2p2_SR1_reg_addr                                           "0xB803C350"
#define  HDMI_P2_HDCP_2p2_SR1_reg                                                0xB803C350
#define  HDMI_P2_HDCP_2p2_SR1_inst_addr                                          "0x0093"
#define  set_HDMI_P2_HDCP_2p2_SR1_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_SR1_reg)=data)
#define  get_HDMI_P2_HDCP_2p2_SR1_reg                                            (*((volatile unsigned int*)HDMI_P2_HDCP_2p2_SR1_reg))
#define  HDMI_P2_HDCP_2p2_SR1_bch_err2_cnt_shift                                 (12)
#define  HDMI_P2_HDCP_2p2_SR1_irq_fn_compare_fail_en_shift                       (9)
#define  HDMI_P2_HDCP_2p2_SR1_irq_crc_fail_en_shift                              (8)
#define  HDMI_P2_HDCP_2p2_SR1_irq_no_cp_packet_en_shift                          (7)
#define  HDMI_P2_HDCP_2p2_SR1_bch_err2_cnt_mask                                  (0x0007F000)
#define  HDMI_P2_HDCP_2p2_SR1_irq_fn_compare_fail_en_mask                        (0x00000200)
#define  HDMI_P2_HDCP_2p2_SR1_irq_crc_fail_en_mask                               (0x00000100)
#define  HDMI_P2_HDCP_2p2_SR1_irq_no_cp_packet_en_mask                           (0x00000080)
#define  HDMI_P2_HDCP_2p2_SR1_bch_err2_cnt(data)                                 (0x0007F000&((data)<<12))
#define  HDMI_P2_HDCP_2p2_SR1_irq_fn_compare_fail_en(data)                       (0x00000200&((data)<<9))
#define  HDMI_P2_HDCP_2p2_SR1_irq_crc_fail_en(data)                              (0x00000100&((data)<<8))
#define  HDMI_P2_HDCP_2p2_SR1_irq_no_cp_packet_en(data)                          (0x00000080&((data)<<7))
#define  HDMI_P2_HDCP_2p2_SR1_get_bch_err2_cnt(data)                             ((0x0007F000&(data))>>12)
#define  HDMI_P2_HDCP_2p2_SR1_get_irq_fn_compare_fail_en(data)                   ((0x00000200&(data))>>9)
#define  HDMI_P2_HDCP_2p2_SR1_get_irq_crc_fail_en(data)                          ((0x00000100&(data))>>8)
#define  HDMI_P2_HDCP_2p2_SR1_get_irq_no_cp_packet_en(data)                      ((0x00000080&(data))>>7)

#define  HDMI_P2_HDCP_HOA                                                       0x1803C35C
#define  HDMI_P2_HDCP_HOA_reg_addr                                               "0xB803C35C"
#define  HDMI_P2_HDCP_HOA_reg                                                    0xB803C35C
#define  HDMI_P2_HDCP_HOA_inst_addr                                              "0x0094"
#define  set_HDMI_P2_HDCP_HOA_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_HDCP_HOA_reg)=data)
#define  get_HDMI_P2_HDCP_HOA_reg                                                (*((volatile unsigned int*)HDMI_P2_HDCP_HOA_reg))
#define  HDMI_P2_HDCP_HOA_enc_method_shift                                       (7)
#define  HDMI_P2_HDCP_HOA_fc_shift                                               (0)
#define  HDMI_P2_HDCP_HOA_enc_method_mask                                        (0x00000080)
#define  HDMI_P2_HDCP_HOA_fc_mask                                                (0x0000007F)
#define  HDMI_P2_HDCP_HOA_enc_method(data)                                       (0x00000080&((data)<<7))
#define  HDMI_P2_HDCP_HOA_fc(data)                                               (0x0000007F&(data))
#define  HDMI_P2_HDCP_HOA_get_enc_method(data)                                   ((0x00000080&(data))>>7)
#define  HDMI_P2_HDCP_HOA_get_fc(data)                                           (0x0000007F&(data))

#define  HDMI_P2_HDMI_VPLLCR0                                                   0x1803C400
#define  HDMI_P2_HDMI_VPLLCR0_reg_addr                                           "0xB803C400"
#define  HDMI_P2_HDMI_VPLLCR0_reg                                                0xB803C400
#define  HDMI_P2_HDMI_VPLLCR0_inst_addr                                          "0x0095"
#define  set_HDMI_P2_HDMI_VPLLCR0_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_HDMI_VPLLCR0_reg)=data)
#define  get_HDMI_P2_HDMI_VPLLCR0_reg                                            (*((volatile unsigned int*)HDMI_P2_HDMI_VPLLCR0_reg))
#define  HDMI_P2_HDMI_VPLLCR0_dpll_reg_shift                                     (30)
#define  HDMI_P2_HDMI_VPLLCR0_dpll_m_shift                                       (22)
#define  HDMI_P2_HDMI_VPLLCR0_dpll_reser_shift                                   (17)
#define  HDMI_P2_HDMI_VPLLCR0_dpll_bpsin_shift                                   (16)
#define  HDMI_P2_HDMI_VPLLCR0_dpll_o_shift                                       (14)
#define  HDMI_P2_HDMI_VPLLCR0_dpll_n_shift                                       (7)
#define  HDMI_P2_HDMI_VPLLCR0_dpll_rs_shift                                      (4)
#define  HDMI_P2_HDMI_VPLLCR0_dpll_ip_shift                                      (0)
#define  HDMI_P2_HDMI_VPLLCR0_dpll_reg_mask                                      (0xC0000000)
#define  HDMI_P2_HDMI_VPLLCR0_dpll_m_mask                                        (0x3FC00000)
#define  HDMI_P2_HDMI_VPLLCR0_dpll_reser_mask                                    (0x001E0000)
#define  HDMI_P2_HDMI_VPLLCR0_dpll_bpsin_mask                                    (0x00010000)
#define  HDMI_P2_HDMI_VPLLCR0_dpll_o_mask                                        (0x0000C000)
#define  HDMI_P2_HDMI_VPLLCR0_dpll_n_mask                                        (0x00000380)
#define  HDMI_P2_HDMI_VPLLCR0_dpll_rs_mask                                       (0x00000070)
#define  HDMI_P2_HDMI_VPLLCR0_dpll_ip_mask                                       (0x0000000F)
#define  HDMI_P2_HDMI_VPLLCR0_dpll_reg(data)                                     (0xC0000000&((data)<<30))
#define  HDMI_P2_HDMI_VPLLCR0_dpll_m(data)                                       (0x3FC00000&((data)<<22))
#define  HDMI_P2_HDMI_VPLLCR0_dpll_reser(data)                                   (0x001E0000&((data)<<17))
#define  HDMI_P2_HDMI_VPLLCR0_dpll_bpsin(data)                                   (0x00010000&((data)<<16))
#define  HDMI_P2_HDMI_VPLLCR0_dpll_o(data)                                       (0x0000C000&((data)<<14))
#define  HDMI_P2_HDMI_VPLLCR0_dpll_n(data)                                       (0x00000380&((data)<<7))
#define  HDMI_P2_HDMI_VPLLCR0_dpll_rs(data)                                      (0x00000070&((data)<<4))
#define  HDMI_P2_HDMI_VPLLCR0_dpll_ip(data)                                      (0x0000000F&(data))
#define  HDMI_P2_HDMI_VPLLCR0_get_dpll_reg(data)                                 ((0xC0000000&(data))>>30)
#define  HDMI_P2_HDMI_VPLLCR0_get_dpll_m(data)                                   ((0x3FC00000&(data))>>22)
#define  HDMI_P2_HDMI_VPLLCR0_get_dpll_reser(data)                               ((0x001E0000&(data))>>17)
#define  HDMI_P2_HDMI_VPLLCR0_get_dpll_bpsin(data)                               ((0x00010000&(data))>>16)
#define  HDMI_P2_HDMI_VPLLCR0_get_dpll_o(data)                                   ((0x0000C000&(data))>>14)
#define  HDMI_P2_HDMI_VPLLCR0_get_dpll_n(data)                                   ((0x00000380&(data))>>7)
#define  HDMI_P2_HDMI_VPLLCR0_get_dpll_rs(data)                                  ((0x00000070&(data))>>4)
#define  HDMI_P2_HDMI_VPLLCR0_get_dpll_ip(data)                                  (0x0000000F&(data))

#define  HDMI_P2_HDMI_VPLLCR1                                                   0x1803C404
#define  HDMI_P2_HDMI_VPLLCR1_reg_addr                                           "0xB803C404"
#define  HDMI_P2_HDMI_VPLLCR1_reg                                                0xB803C404
#define  HDMI_P2_HDMI_VPLLCR1_inst_addr                                          "0x0096"
#define  set_HDMI_P2_HDMI_VPLLCR1_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_HDMI_VPLLCR1_reg)=data)
#define  get_HDMI_P2_HDMI_VPLLCR1_reg                                            (*((volatile unsigned int*)HDMI_P2_HDMI_VPLLCR1_reg))
#define  HDMI_P2_HDMI_VPLLCR1_dpll_cp_shift                                      (21)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_seltst_shift                                  (19)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_vrefsel_shift                                 (14)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_freeze_dsc_shift                              (13)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_ldo_pow_shift                                 (12)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_ldo_sel_shift                                 (10)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_wdrst_shift                                   (6)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_wdset_shift                                   (5)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_rstb_shift                                    (4)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_freeze_shift                                  (2)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_pow_shift                                     (0)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_cp_mask                                       (0x00200000)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_seltst_mask                                   (0x00180000)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_vrefsel_mask                                  (0x00004000)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_freeze_dsc_mask                               (0x00002000)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_ldo_pow_mask                                  (0x00001000)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_ldo_sel_mask                                  (0x00000C00)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_wdrst_mask                                    (0x00000040)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_wdset_mask                                    (0x00000020)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_rstb_mask                                     (0x00000010)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_freeze_mask                                   (0x00000004)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_pow_mask                                      (0x00000001)
#define  HDMI_P2_HDMI_VPLLCR1_dpll_cp(data)                                      (0x00200000&((data)<<21))
#define  HDMI_P2_HDMI_VPLLCR1_dpll_seltst(data)                                  (0x00180000&((data)<<19))
#define  HDMI_P2_HDMI_VPLLCR1_dpll_vrefsel(data)                                 (0x00004000&((data)<<14))
#define  HDMI_P2_HDMI_VPLLCR1_dpll_freeze_dsc(data)                              (0x00002000&((data)<<13))
#define  HDMI_P2_HDMI_VPLLCR1_dpll_ldo_pow(data)                                 (0x00001000&((data)<<12))
#define  HDMI_P2_HDMI_VPLLCR1_dpll_ldo_sel(data)                                 (0x00000C00&((data)<<10))
#define  HDMI_P2_HDMI_VPLLCR1_dpll_wdrst(data)                                   (0x00000040&((data)<<6))
#define  HDMI_P2_HDMI_VPLLCR1_dpll_wdset(data)                                   (0x00000020&((data)<<5))
#define  HDMI_P2_HDMI_VPLLCR1_dpll_rstb(data)                                    (0x00000010&((data)<<4))
#define  HDMI_P2_HDMI_VPLLCR1_dpll_freeze(data)                                  (0x00000004&((data)<<2))
#define  HDMI_P2_HDMI_VPLLCR1_dpll_pow(data)                                     (0x00000001&(data))
#define  HDMI_P2_HDMI_VPLLCR1_get_dpll_cp(data)                                  ((0x00200000&(data))>>21)
#define  HDMI_P2_HDMI_VPLLCR1_get_dpll_seltst(data)                              ((0x00180000&(data))>>19)
#define  HDMI_P2_HDMI_VPLLCR1_get_dpll_vrefsel(data)                             ((0x00004000&(data))>>14)
#define  HDMI_P2_HDMI_VPLLCR1_get_dpll_freeze_dsc(data)                          ((0x00002000&(data))>>13)
#define  HDMI_P2_HDMI_VPLLCR1_get_dpll_ldo_pow(data)                             ((0x00001000&(data))>>12)
#define  HDMI_P2_HDMI_VPLLCR1_get_dpll_ldo_sel(data)                             ((0x00000C00&(data))>>10)
#define  HDMI_P2_HDMI_VPLLCR1_get_dpll_wdrst(data)                               ((0x00000040&(data))>>6)
#define  HDMI_P2_HDMI_VPLLCR1_get_dpll_wdset(data)                               ((0x00000020&(data))>>5)
#define  HDMI_P2_HDMI_VPLLCR1_get_dpll_rstb(data)                                ((0x00000010&(data))>>4)
#define  HDMI_P2_HDMI_VPLLCR1_get_dpll_freeze(data)                              ((0x00000004&(data))>>2)
#define  HDMI_P2_HDMI_VPLLCR1_get_dpll_pow(data)                                 (0x00000001&(data))

#define  HDMI_P2_HDMI_VPLLCR2                                                   0x1803C408
#define  HDMI_P2_HDMI_VPLLCR2_reg_addr                                           "0xB803C408"
#define  HDMI_P2_HDMI_VPLLCR2_reg                                                0xB803C408
#define  HDMI_P2_HDMI_VPLLCR2_inst_addr                                          "0x0097"
#define  set_HDMI_P2_HDMI_VPLLCR2_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_HDMI_VPLLCR2_reg)=data)
#define  get_HDMI_P2_HDMI_VPLLCR2_reg                                            (*((volatile unsigned int*)HDMI_P2_HDMI_VPLLCR2_reg))
#define  HDMI_P2_HDMI_VPLLCR2_dpll_wdo_shift                                     (7)
#define  HDMI_P2_HDMI_VPLLCR2_dpll_reloadm_shift                                 (0)
#define  HDMI_P2_HDMI_VPLLCR2_dpll_wdo_mask                                      (0x00000080)
#define  HDMI_P2_HDMI_VPLLCR2_dpll_reloadm_mask                                  (0x00000001)
#define  HDMI_P2_HDMI_VPLLCR2_dpll_wdo(data)                                     (0x00000080&((data)<<7))
#define  HDMI_P2_HDMI_VPLLCR2_dpll_reloadm(data)                                 (0x00000001&(data))
#define  HDMI_P2_HDMI_VPLLCR2_get_dpll_wdo(data)                                 ((0x00000080&(data))>>7)
#define  HDMI_P2_HDMI_VPLLCR2_get_dpll_reloadm(data)                             (0x00000001&(data))

#define  HDMI_P2_MN_SCLKG_CTRL                                                  0x1803C410
#define  HDMI_P2_MN_SCLKG_CTRL_reg_addr                                          "0xB803C410"
#define  HDMI_P2_MN_SCLKG_CTRL_reg                                               0xB803C410
#define  HDMI_P2_MN_SCLKG_CTRL_inst_addr                                         "0x0098"
#define  set_HDMI_P2_MN_SCLKG_CTRL_reg(data)                                     (*((volatile unsigned int*)HDMI_P2_MN_SCLKG_CTRL_reg)=data)
#define  get_HDMI_P2_MN_SCLKG_CTRL_reg                                           (*((volatile unsigned int*)HDMI_P2_MN_SCLKG_CTRL_reg))
#define  HDMI_P2_MN_SCLKG_CTRL_sclkg_pll_in_sel_shift                            (7)
#define  HDMI_P2_MN_SCLKG_CTRL_sclkg_oclk_sel_shift                              (5)
#define  HDMI_P2_MN_SCLKG_CTRL_sclkg_dbuf_shift                                  (4)
#define  HDMI_P2_MN_SCLKG_CTRL_dummy_3_0_shift                                   (0)
#define  HDMI_P2_MN_SCLKG_CTRL_sclkg_pll_in_sel_mask                             (0x00000080)
#define  HDMI_P2_MN_SCLKG_CTRL_sclkg_oclk_sel_mask                               (0x00000060)
#define  HDMI_P2_MN_SCLKG_CTRL_sclkg_dbuf_mask                                   (0x00000010)
#define  HDMI_P2_MN_SCLKG_CTRL_dummy_3_0_mask                                    (0x0000000F)
#define  HDMI_P2_MN_SCLKG_CTRL_sclkg_pll_in_sel(data)                            (0x00000080&((data)<<7))
#define  HDMI_P2_MN_SCLKG_CTRL_sclkg_oclk_sel(data)                              (0x00000060&((data)<<5))
#define  HDMI_P2_MN_SCLKG_CTRL_sclkg_dbuf(data)                                  (0x00000010&((data)<<4))
#define  HDMI_P2_MN_SCLKG_CTRL_dummy_3_0(data)                                   (0x0000000F&(data))
#define  HDMI_P2_MN_SCLKG_CTRL_get_sclkg_pll_in_sel(data)                        ((0x00000080&(data))>>7)
#define  HDMI_P2_MN_SCLKG_CTRL_get_sclkg_oclk_sel(data)                          ((0x00000060&(data))>>5)
#define  HDMI_P2_MN_SCLKG_CTRL_get_sclkg_dbuf(data)                              ((0x00000010&(data))>>4)
#define  HDMI_P2_MN_SCLKG_CTRL_get_dummy_3_0(data)                               (0x0000000F&(data))

#define  HDMI_P2_MN_SCLKG_DIVS                                                  0x1803C414
#define  HDMI_P2_MN_SCLKG_DIVS_reg_addr                                          "0xB803C414"
#define  HDMI_P2_MN_SCLKG_DIVS_reg                                               0xB803C414
#define  HDMI_P2_MN_SCLKG_DIVS_inst_addr                                         "0x0099"
#define  set_HDMI_P2_MN_SCLKG_DIVS_reg(data)                                     (*((volatile unsigned int*)HDMI_P2_MN_SCLKG_DIVS_reg)=data)
#define  get_HDMI_P2_MN_SCLKG_DIVS_reg                                           (*((volatile unsigned int*)HDMI_P2_MN_SCLKG_DIVS_reg))
#define  HDMI_P2_MN_SCLKG_DIVS_sclkg_pll_div2_en_shift                           (7)
#define  HDMI_P2_MN_SCLKG_DIVS_sclkg_pll_divs_shift                              (0)
#define  HDMI_P2_MN_SCLKG_DIVS_sclkg_pll_div2_en_mask                            (0x00000080)
#define  HDMI_P2_MN_SCLKG_DIVS_sclkg_pll_divs_mask                               (0x0000007F)
#define  HDMI_P2_MN_SCLKG_DIVS_sclkg_pll_div2_en(data)                           (0x00000080&((data)<<7))
#define  HDMI_P2_MN_SCLKG_DIVS_sclkg_pll_divs(data)                              (0x0000007F&(data))
#define  HDMI_P2_MN_SCLKG_DIVS_get_sclkg_pll_div2_en(data)                       ((0x00000080&(data))>>7)
#define  HDMI_P2_MN_SCLKG_DIVS_get_sclkg_pll_divs(data)                          (0x0000007F&(data))

#define  HDMI_P2_MDD_CR                                                         0x1803C500
#define  HDMI_P2_MDD_CR_reg_addr                                                 "0xB803C500"
#define  HDMI_P2_MDD_CR_reg                                                      0xB803C500
#define  HDMI_P2_MDD_CR_inst_addr                                                "0x009A"
#define  set_HDMI_P2_MDD_CR_reg(data)                                            (*((volatile unsigned int*)HDMI_P2_MDD_CR_reg)=data)
#define  get_HDMI_P2_MDD_CR_reg                                                  (*((volatile unsigned int*)HDMI_P2_MDD_CR_reg))
#define  HDMI_P2_MDD_CR_pending_shift                                            (25)
#define  HDMI_P2_MDD_CR_dummy_24_16_shift                                        (16)
#define  HDMI_P2_MDD_CR_dummy_15_shift                                           (15)
#define  HDMI_P2_MDD_CR_no_md_check_shift                                        (14)
#define  HDMI_P2_MDD_CR_metadata_version_check_shift                             (13)
#define  HDMI_P2_MDD_CR_metadata_type_check_shift                                (12)
#define  HDMI_P2_MDD_CR_dummy_11_shift                                           (11)
#define  HDMI_P2_MDD_CR_det_con_enter_shift                                      (8)
#define  HDMI_P2_MDD_CR_dummy_7_shift                                            (7)
#define  HDMI_P2_MDD_CR_det_con_leave_shift                                      (4)
#define  HDMI_P2_MDD_CR_irq_det_chg_en_shift                                     (3)
#define  HDMI_P2_MDD_CR_dummy_2_1_shift                                          (1)
#define  HDMI_P2_MDD_CR_en_shift                                                 (0)
#define  HDMI_P2_MDD_CR_pending_mask                                             (0x02000000)
#define  HDMI_P2_MDD_CR_dummy_24_16_mask                                         (0x01FF0000)
#define  HDMI_P2_MDD_CR_dummy_15_mask                                            (0x00008000)
#define  HDMI_P2_MDD_CR_no_md_check_mask                                         (0x00004000)
#define  HDMI_P2_MDD_CR_metadata_version_check_mask                              (0x00002000)
#define  HDMI_P2_MDD_CR_metadata_type_check_mask                                 (0x00001000)
#define  HDMI_P2_MDD_CR_dummy_11_mask                                            (0x00000800)
#define  HDMI_P2_MDD_CR_det_con_enter_mask                                       (0x00000700)
#define  HDMI_P2_MDD_CR_dummy_7_mask                                             (0x00000080)
#define  HDMI_P2_MDD_CR_det_con_leave_mask                                       (0x00000070)
#define  HDMI_P2_MDD_CR_irq_det_chg_en_mask                                      (0x00000008)
#define  HDMI_P2_MDD_CR_dummy_2_1_mask                                           (0x00000006)
#define  HDMI_P2_MDD_CR_en_mask                                                  (0x00000001)
#define  HDMI_P2_MDD_CR_pending(data)                                            (0x02000000&((data)<<25))
#define  HDMI_P2_MDD_CR_dummy_24_16(data)                                        (0x01FF0000&((data)<<16))
#define  HDMI_P2_MDD_CR_dummy_15(data)                                           (0x00008000&((data)<<15))
#define  HDMI_P2_MDD_CR_no_md_check(data)                                        (0x00004000&((data)<<14))
#define  HDMI_P2_MDD_CR_metadata_version_check(data)                             (0x00002000&((data)<<13))
#define  HDMI_P2_MDD_CR_metadata_type_check(data)                                (0x00001000&((data)<<12))
#define  HDMI_P2_MDD_CR_dummy_11(data)                                           (0x00000800&((data)<<11))
#define  HDMI_P2_MDD_CR_det_con_enter(data)                                      (0x00000700&((data)<<8))
#define  HDMI_P2_MDD_CR_dummy_7(data)                                            (0x00000080&((data)<<7))
#define  HDMI_P2_MDD_CR_det_con_leave(data)                                      (0x00000070&((data)<<4))
#define  HDMI_P2_MDD_CR_irq_det_chg_en(data)                                     (0x00000008&((data)<<3))
#define  HDMI_P2_MDD_CR_dummy_2_1(data)                                          (0x00000006&((data)<<1))
#define  HDMI_P2_MDD_CR_en(data)                                                 (0x00000001&(data))
#define  HDMI_P2_MDD_CR_get_pending(data)                                        ((0x02000000&(data))>>25)
#define  HDMI_P2_MDD_CR_get_dummy_24_16(data)                                    ((0x01FF0000&(data))>>16)
#define  HDMI_P2_MDD_CR_get_dummy_15(data)                                       ((0x00008000&(data))>>15)
#define  HDMI_P2_MDD_CR_get_no_md_check(data)                                    ((0x00004000&(data))>>14)
#define  HDMI_P2_MDD_CR_get_metadata_version_check(data)                         ((0x00002000&(data))>>13)
#define  HDMI_P2_MDD_CR_get_metadata_type_check(data)                            ((0x00001000&(data))>>12)
#define  HDMI_P2_MDD_CR_get_dummy_11(data)                                       ((0x00000800&(data))>>11)
#define  HDMI_P2_MDD_CR_get_det_con_enter(data)                                  ((0x00000700&(data))>>8)
#define  HDMI_P2_MDD_CR_get_dummy_7(data)                                        ((0x00000080&(data))>>7)
#define  HDMI_P2_MDD_CR_get_det_con_leave(data)                                  ((0x00000070&(data))>>4)
#define  HDMI_P2_MDD_CR_get_irq_det_chg_en(data)                                 ((0x00000008&(data))>>3)
#define  HDMI_P2_MDD_CR_get_dummy_2_1(data)                                      ((0x00000006&(data))>>1)
#define  HDMI_P2_MDD_CR_get_en(data)                                             (0x00000001&(data))

#define  HDMI_P2_MDD_SR                                                         0x1803C504
#define  HDMI_P2_MDD_SR_reg_addr                                                 "0xB803C504"
#define  HDMI_P2_MDD_SR_reg                                                      0xB803C504
#define  HDMI_P2_MDD_SR_inst_addr                                                "0x009B"
#define  set_HDMI_P2_MDD_SR_reg(data)                                            (*((volatile unsigned int*)HDMI_P2_MDD_SR_reg)=data)
#define  get_HDMI_P2_MDD_SR_reg                                                  (*((volatile unsigned int*)HDMI_P2_MDD_SR_reg))
#define  HDMI_P2_MDD_SR_frame_crc_result_shift                                   (2)
#define  HDMI_P2_MDD_SR_det_result_chg_shift                                     (1)
#define  HDMI_P2_MDD_SR_det_result_shift                                         (0)
#define  HDMI_P2_MDD_SR_frame_crc_result_mask                                    (0x00000004)
#define  HDMI_P2_MDD_SR_det_result_chg_mask                                      (0x00000002)
#define  HDMI_P2_MDD_SR_det_result_mask                                          (0x00000001)
#define  HDMI_P2_MDD_SR_frame_crc_result(data)                                   (0x00000004&((data)<<2))
#define  HDMI_P2_MDD_SR_det_result_chg(data)                                     (0x00000002&((data)<<1))
#define  HDMI_P2_MDD_SR_det_result(data)                                         (0x00000001&(data))
#define  HDMI_P2_MDD_SR_get_frame_crc_result(data)                               ((0x00000004&(data))>>2)
#define  HDMI_P2_MDD_SR_get_det_result_chg(data)                                 ((0x00000002&(data))>>1)
#define  HDMI_P2_MDD_SR_get_det_result(data)                                     (0x00000001&(data))

#define  HDMI_P2_FW_FUNC                                                        0x1803C508
#define  HDMI_P2_FW_FUNC_reg_addr                                                "0xB803C508"
#define  HDMI_P2_FW_FUNC_reg                                                     0xB803C508
#define  HDMI_P2_FW_FUNC_inst_addr                                               "0x009C"
#define  set_HDMI_P2_FW_FUNC_reg(data)                                           (*((volatile unsigned int*)HDMI_P2_FW_FUNC_reg)=data)
#define  get_HDMI_P2_FW_FUNC_reg                                                 (*((volatile unsigned int*)HDMI_P2_FW_FUNC_reg))
#define  HDMI_P2_FW_FUNC_application_shift                                       (0)
#define  HDMI_P2_FW_FUNC_application_mask                                        (0xFFFFFFFF)
#define  HDMI_P2_FW_FUNC_application(data)                                       (0xFFFFFFFF&(data))
#define  HDMI_P2_FW_FUNC_get_application(data)                                   (0xFFFFFFFF&(data))

#define  HDMI_P2_PORT_SWITCH                                                    0x1803C50C
#define  HDMI_P2_PORT_SWITCH_reg_addr                                            "0xB803C50C"
#define  HDMI_P2_PORT_SWITCH_reg                                                 0xB803C50C
#define  HDMI_P2_PORT_SWITCH_inst_addr                                           "0x009D"
#define  set_HDMI_P2_PORT_SWITCH_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_PORT_SWITCH_reg)=data)
#define  get_HDMI_P2_PORT_SWITCH_reg                                             (*((volatile unsigned int*)HDMI_P2_PORT_SWITCH_reg))
#define  HDMI_P2_PORT_SWITCH_offms_hd21_sel_shift                                (4)
#define  HDMI_P2_PORT_SWITCH_port_sel_shift                                      (2)
#define  HDMI_P2_PORT_SWITCH_offms_port_sel_shift                                (0)
#define  HDMI_P2_PORT_SWITCH_offms_hd21_sel_mask                                 (0x00000010)
#define  HDMI_P2_PORT_SWITCH_port_sel_mask                                       (0x0000000C)
#define  HDMI_P2_PORT_SWITCH_offms_port_sel_mask                                 (0x00000003)
#define  HDMI_P2_PORT_SWITCH_offms_hd21_sel(data)                                (0x00000010&((data)<<4))
#define  HDMI_P2_PORT_SWITCH_port_sel(data)                                      (0x0000000C&((data)<<2))
#define  HDMI_P2_PORT_SWITCH_offms_port_sel(data)                                (0x00000003&(data))
#define  HDMI_P2_PORT_SWITCH_get_offms_hd21_sel(data)                            ((0x00000010&(data))>>4)
#define  HDMI_P2_PORT_SWITCH_get_port_sel(data)                                  ((0x0000000C&(data))>>2)
#define  HDMI_P2_PORT_SWITCH_get_offms_port_sel(data)                            (0x00000003&(data))

#define  HDMI_P2_POWER_SAVING                                                   0x1803C510
#define  HDMI_P2_POWER_SAVING_reg_addr                                           "0xB803C510"
#define  HDMI_P2_POWER_SAVING_reg                                                0xB803C510
#define  HDMI_P2_POWER_SAVING_inst_addr                                          "0x009E"
#define  set_HDMI_P2_POWER_SAVING_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_POWER_SAVING_reg)=data)
#define  get_HDMI_P2_POWER_SAVING_reg                                            (*((volatile unsigned int*)HDMI_P2_POWER_SAVING_reg))
#define  HDMI_P2_POWER_SAVING_ptg_clken_shift                                    (0)
#define  HDMI_P2_POWER_SAVING_ptg_clken_mask                                     (0x00000001)
#define  HDMI_P2_POWER_SAVING_ptg_clken(data)                                    (0x00000001&(data))
#define  HDMI_P2_POWER_SAVING_get_ptg_clken(data)                                (0x00000001&(data))

#define  HDMI_P2_CRC_Ctrl                                                       0x1803C514
#define  HDMI_P2_CRC_Ctrl_reg_addr                                               "0xB803C514"
#define  HDMI_P2_CRC_Ctrl_reg                                                    0xB803C514
#define  HDMI_P2_CRC_Ctrl_inst_addr                                              "0x009F"
#define  set_HDMI_P2_CRC_Ctrl_reg(data)                                          (*((volatile unsigned int*)HDMI_P2_CRC_Ctrl_reg)=data)
#define  get_HDMI_P2_CRC_Ctrl_reg                                                (*((volatile unsigned int*)HDMI_P2_CRC_Ctrl_reg))
#define  HDMI_P2_CRC_Ctrl_crc_res_sel_shift                                      (4)
#define  HDMI_P2_CRC_Ctrl_crc_auto_cmp_en_shift                                  (2)
#define  HDMI_P2_CRC_Ctrl_crc_conti_shift                                        (1)
#define  HDMI_P2_CRC_Ctrl_crc_start_shift                                        (0)
#define  HDMI_P2_CRC_Ctrl_crc_res_sel_mask                                       (0x000000F0)
#define  HDMI_P2_CRC_Ctrl_crc_auto_cmp_en_mask                                   (0x00000004)
#define  HDMI_P2_CRC_Ctrl_crc_conti_mask                                         (0x00000002)
#define  HDMI_P2_CRC_Ctrl_crc_start_mask                                         (0x00000001)
#define  HDMI_P2_CRC_Ctrl_crc_res_sel(data)                                      (0x000000F0&((data)<<4))
#define  HDMI_P2_CRC_Ctrl_crc_auto_cmp_en(data)                                  (0x00000004&((data)<<2))
#define  HDMI_P2_CRC_Ctrl_crc_conti(data)                                        (0x00000002&((data)<<1))
#define  HDMI_P2_CRC_Ctrl_crc_start(data)                                        (0x00000001&(data))
#define  HDMI_P2_CRC_Ctrl_get_crc_res_sel(data)                                  ((0x000000F0&(data))>>4)
#define  HDMI_P2_CRC_Ctrl_get_crc_auto_cmp_en(data)                              ((0x00000004&(data))>>2)
#define  HDMI_P2_CRC_Ctrl_get_crc_conti(data)                                    ((0x00000002&(data))>>1)
#define  HDMI_P2_CRC_Ctrl_get_crc_start(data)                                    (0x00000001&(data))

#define  HDMI_P2_CRC_Result                                                     0x1803C518
#define  HDMI_P2_CRC_Result_reg_addr                                             "0xB803C518"
#define  HDMI_P2_CRC_Result_reg                                                  0xB803C518
#define  HDMI_P2_CRC_Result_inst_addr                                            "0x00A0"
#define  set_HDMI_P2_CRC_Result_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_CRC_Result_reg)=data)
#define  get_HDMI_P2_CRC_Result_reg                                              (*((volatile unsigned int*)HDMI_P2_CRC_Result_reg))
#define  HDMI_P2_CRC_Result_crc_result_shift                                     (0)
#define  HDMI_P2_CRC_Result_crc_result_mask                                      (0xFFFFFFFF)
#define  HDMI_P2_CRC_Result_crc_result(data)                                     (0xFFFFFFFF&(data))
#define  HDMI_P2_CRC_Result_get_crc_result(data)                                 (0xFFFFFFFF&(data))

#define  HDMI_P2_DES_CRC                                                        0x1803C51C
#define  HDMI_P2_DES_CRC_reg_addr                                                "0xB803C51C"
#define  HDMI_P2_DES_CRC_reg                                                     0xB803C51C
#define  HDMI_P2_DES_CRC_inst_addr                                               "0x00A1"
#define  set_HDMI_P2_DES_CRC_reg(data)                                           (*((volatile unsigned int*)HDMI_P2_DES_CRC_reg)=data)
#define  get_HDMI_P2_DES_CRC_reg                                                 (*((volatile unsigned int*)HDMI_P2_DES_CRC_reg))
#define  HDMI_P2_DES_CRC_crc_des_shift                                           (0)
#define  HDMI_P2_DES_CRC_crc_des_mask                                            (0xFFFFFFFF)
#define  HDMI_P2_DES_CRC_crc_des(data)                                           (0xFFFFFFFF&(data))
#define  HDMI_P2_DES_CRC_get_crc_des(data)                                       (0xFFFFFFFF&(data))

#define  HDMI_P2_CRC_ERR_CNT0                                                   0x1803C520
#define  HDMI_P2_CRC_ERR_CNT0_reg_addr                                           "0xB803C520"
#define  HDMI_P2_CRC_ERR_CNT0_reg                                                0xB803C520
#define  HDMI_P2_CRC_ERR_CNT0_inst_addr                                          "0x00A2"
#define  set_HDMI_P2_CRC_ERR_CNT0_reg(data)                                      (*((volatile unsigned int*)HDMI_P2_CRC_ERR_CNT0_reg)=data)
#define  get_HDMI_P2_CRC_ERR_CNT0_reg                                            (*((volatile unsigned int*)HDMI_P2_CRC_ERR_CNT0_reg))
#define  HDMI_P2_CRC_ERR_CNT0_crc_err_cnt_shift                                  (0)
#define  HDMI_P2_CRC_ERR_CNT0_crc_err_cnt_mask                                   (0x0000FFFF)
#define  HDMI_P2_CRC_ERR_CNT0_crc_err_cnt(data)                                  (0x0000FFFF&(data))
#define  HDMI_P2_CRC_ERR_CNT0_get_crc_err_cnt(data)                              (0x0000FFFF&(data))

#define  HDMI_P2_hdmi_20_21_ctrl                                                0x1803C524
#define  HDMI_P2_hdmi_20_21_ctrl_reg_addr                                        "0xB803C524"
#define  HDMI_P2_hdmi_20_21_ctrl_reg                                             0xB803C524
#define  HDMI_P2_hdmi_20_21_ctrl_inst_addr                                       "0x00A3"
#define  set_HDMI_P2_hdmi_20_21_ctrl_reg(data)                                   (*((volatile unsigned int*)HDMI_P2_hdmi_20_21_ctrl_reg)=data)
#define  get_HDMI_P2_hdmi_20_21_ctrl_reg                                         (*((volatile unsigned int*)HDMI_P2_hdmi_20_21_ctrl_reg))
#define  HDMI_P2_hdmi_20_21_ctrl_pixel_mode_shift                                (0)
#define  HDMI_P2_hdmi_20_21_ctrl_pixel_mode_mask                                 (0x00000001)
#define  HDMI_P2_hdmi_20_21_ctrl_pixel_mode(data)                                (0x00000001&(data))
#define  HDMI_P2_hdmi_20_21_ctrl_get_pixel_mode(data)                            (0x00000001&(data))

#define  HDMI_P2_IRQ                                                            0x1803C604
#define  HDMI_P2_IRQ_reg_addr                                                    "0xB803C604"
#define  HDMI_P2_IRQ_reg                                                         0xB803C604
#define  HDMI_P2_IRQ_inst_addr                                                   "0x00A4"
#define  set_HDMI_P2_IRQ_reg(data)                                               (*((volatile unsigned int*)HDMI_P2_IRQ_reg)=data)
#define  get_HDMI_P2_IRQ_reg                                                     (*((volatile unsigned int*)HDMI_P2_IRQ_reg))
#define  HDMI_P2_IRQ_auto_gen_pulse_mode_shift                                   (0)
#define  HDMI_P2_IRQ_auto_gen_pulse_mode_mask                                    (0x00000001)
#define  HDMI_P2_IRQ_auto_gen_pulse_mode(data)                                   (0x00000001&(data))
#define  HDMI_P2_IRQ_get_auto_gen_pulse_mode(data)                               (0x00000001&(data))

#define  HDMI_P2_mp                                                             0x1803C608
#define  HDMI_P2_mp_reg_addr                                                     "0xB803C608"
#define  HDMI_P2_mp_reg                                                          0xB803C608
#define  HDMI_P2_mp_inst_addr                                                    "0x00A5"
#define  set_HDMI_P2_mp_reg(data)                                                (*((volatile unsigned int*)HDMI_P2_mp_reg)=data)
#define  get_HDMI_P2_mp_reg                                                      (*((volatile unsigned int*)HDMI_P2_mp_reg))
#define  HDMI_P2_mp_bist_mode_shift                                              (0)
#define  HDMI_P2_mp_bist_mode_mask                                               (0x00000001)
#define  HDMI_P2_mp_bist_mode(data)                                              (0x00000001&(data))
#define  HDMI_P2_mp_get_bist_mode(data)                                          (0x00000001&(data))

#define  HDMI_P2_hdmi_v_bypass                                                  0x1803C60C
#define  HDMI_P2_hdmi_v_bypass_reg_addr                                          "0xB803C60C"
#define  HDMI_P2_hdmi_v_bypass_reg                                               0xB803C60C
#define  HDMI_P2_hdmi_v_bypass_inst_addr                                         "0x00A6"
#define  set_HDMI_P2_hdmi_v_bypass_reg(data)                                     (*((volatile unsigned int*)HDMI_P2_hdmi_v_bypass_reg)=data)
#define  get_HDMI_P2_hdmi_v_bypass_reg                                           (*((volatile unsigned int*)HDMI_P2_hdmi_v_bypass_reg))
#define  HDMI_P2_hdmi_v_bypass_fw_mode_shift                                     (18)
#define  HDMI_P2_hdmi_v_bypass_data_shift                                        (0)
#define  HDMI_P2_hdmi_v_bypass_fw_mode_mask                                      (0x00040000)
#define  HDMI_P2_hdmi_v_bypass_data_mask                                         (0x0003FFFF)
#define  HDMI_P2_hdmi_v_bypass_fw_mode(data)                                     (0x00040000&((data)<<18))
#define  HDMI_P2_hdmi_v_bypass_data(data)                                        (0x0003FFFF&(data))
#define  HDMI_P2_hdmi_v_bypass_get_fw_mode(data)                                 ((0x00040000&(data))>>18)
#define  HDMI_P2_hdmi_v_bypass_get_data(data)                                    (0x0003FFFF&(data))

#define  HDMI_P2_hdmi_mp                                                        0x1803C610
#define  HDMI_P2_hdmi_mp_reg_addr                                                "0xB803C610"
#define  HDMI_P2_hdmi_mp_reg                                                     0xB803C610
#define  HDMI_P2_hdmi_mp_inst_addr                                               "0x00A7"
#define  set_HDMI_P2_hdmi_mp_reg(data)                                           (*((volatile unsigned int*)HDMI_P2_hdmi_mp_reg)=data)
#define  get_HDMI_P2_hdmi_mp_reg                                                 (*((volatile unsigned int*)HDMI_P2_hdmi_mp_reg))
#define  HDMI_P2_hdmi_mp_mp_data_out_shift                                       (8)
#define  HDMI_P2_hdmi_mp_mp_check_and_shift                                      (7)
#define  HDMI_P2_hdmi_mp_mp_check_or_shift                                       (6)
#define  HDMI_P2_hdmi_mp_mp_mode_shift                                           (0)
#define  HDMI_P2_hdmi_mp_mp_data_out_mask                                        (0x00000100)
#define  HDMI_P2_hdmi_mp_mp_check_and_mask                                       (0x00000080)
#define  HDMI_P2_hdmi_mp_mp_check_or_mask                                        (0x00000040)
#define  HDMI_P2_hdmi_mp_mp_mode_mask                                            (0x00000001)
#define  HDMI_P2_hdmi_mp_mp_data_out(data)                                       (0x00000100&((data)<<8))
#define  HDMI_P2_hdmi_mp_mp_check_and(data)                                      (0x00000080&((data)<<7))
#define  HDMI_P2_hdmi_mp_mp_check_or(data)                                       (0x00000040&((data)<<6))
#define  HDMI_P2_hdmi_mp_mp_mode(data)                                           (0x00000001&(data))
#define  HDMI_P2_hdmi_mp_get_mp_data_out(data)                                   ((0x00000100&(data))>>8)
#define  HDMI_P2_hdmi_mp_get_mp_check_and(data)                                  ((0x00000080&(data))>>7)
#define  HDMI_P2_hdmi_mp_get_mp_check_or(data)                                   ((0x00000040&(data))>>6)
#define  HDMI_P2_hdmi_mp_get_mp_mode(data)                                       (0x00000001&(data))

#define  HDMI_P2_debug_port                                                     0x1803C614
#define  HDMI_P2_debug_port_reg_addr                                             "0xB803C614"
#define  HDMI_P2_debug_port_reg                                                  0xB803C614
#define  HDMI_P2_debug_port_inst_addr                                            "0x00A8"
#define  set_HDMI_P2_debug_port_reg(data)                                        (*((volatile unsigned int*)HDMI_P2_debug_port_reg)=data)
#define  get_HDMI_P2_debug_port_reg                                              (*((volatile unsigned int*)HDMI_P2_debug_port_reg))
#define  HDMI_P2_debug_port_otpin_shift                                          (0)
#define  HDMI_P2_debug_port_otpin_mask                                           (0xFFFFFFFF)
#define  HDMI_P2_debug_port_otpin(data)                                          (0xFFFFFFFF&(data))
#define  HDMI_P2_debug_port_get_otpin(data)                                      (0xFFFFFFFF&(data))

#define  HDMI_P2_hdmi_rst0                                                      0x1803C620
#define  HDMI_P2_hdmi_rst0_reg_addr                                              "0xB803C620"
#define  HDMI_P2_hdmi_rst0_reg                                                   0xB803C620
#define  HDMI_P2_hdmi_rst0_inst_addr                                             "0x00A9"
#define  set_HDMI_P2_hdmi_rst0_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_hdmi_rst0_reg)=data)
#define  get_HDMI_P2_hdmi_rst0_reg                                               (*((volatile unsigned int*)HDMI_P2_hdmi_rst0_reg))
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_common_shift                                (29)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_pre3_shift                                  (28)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_pre2_shift                                  (27)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_pre1_shift                                  (26)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_pre0_shift                                  (25)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_hdcp_pre3_shift                             (24)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_hdcp_pre2_shift                             (23)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_hdcp_pre1_shift                             (22)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_hdcp_pre0_shift                             (21)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_common_mask                                 (0x20000000)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_pre3_mask                                   (0x10000000)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_pre2_mask                                   (0x08000000)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_pre1_mask                                   (0x04000000)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_pre0_mask                                   (0x02000000)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_hdcp_pre3_mask                              (0x01000000)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_hdcp_pre2_mask                              (0x00800000)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_hdcp_pre1_mask                              (0x00400000)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_hdcp_pre0_mask                              (0x00200000)
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_common(data)                                (0x20000000&((data)<<29))
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_pre3(data)                                  (0x10000000&((data)<<28))
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_pre2(data)                                  (0x08000000&((data)<<27))
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_pre1(data)                                  (0x04000000&((data)<<26))
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_pre0(data)                                  (0x02000000&((data)<<25))
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_hdcp_pre3(data)                             (0x01000000&((data)<<24))
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_hdcp_pre2(data)                             (0x00800000&((data)<<23))
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_hdcp_pre1(data)                             (0x00400000&((data)<<22))
#define  HDMI_P2_hdmi_rst0_rstn_hdmi_hdcp_pre0(data)                             (0x00200000&((data)<<21))
#define  HDMI_P2_hdmi_rst0_get_rstn_hdmi_common(data)                            ((0x20000000&(data))>>29)
#define  HDMI_P2_hdmi_rst0_get_rstn_hdmi_pre3(data)                              ((0x10000000&(data))>>28)
#define  HDMI_P2_hdmi_rst0_get_rstn_hdmi_pre2(data)                              ((0x08000000&(data))>>27)
#define  HDMI_P2_hdmi_rst0_get_rstn_hdmi_pre1(data)                              ((0x04000000&(data))>>26)
#define  HDMI_P2_hdmi_rst0_get_rstn_hdmi_pre0(data)                              ((0x02000000&(data))>>25)
#define  HDMI_P2_hdmi_rst0_get_rstn_hdmi_hdcp_pre3(data)                         ((0x01000000&(data))>>24)
#define  HDMI_P2_hdmi_rst0_get_rstn_hdmi_hdcp_pre2(data)                         ((0x00800000&(data))>>23)
#define  HDMI_P2_hdmi_rst0_get_rstn_hdmi_hdcp_pre1(data)                         ((0x00400000&(data))>>22)
#define  HDMI_P2_hdmi_rst0_get_rstn_hdmi_hdcp_pre0(data)                         ((0x00200000&(data))>>21)

#define  HDMI_P2_hdmi_rst3                                                      0x1803C624
#define  HDMI_P2_hdmi_rst3_reg_addr                                              "0xB803C624"
#define  HDMI_P2_hdmi_rst3_reg                                                   0xB803C624
#define  HDMI_P2_hdmi_rst3_inst_addr                                             "0x00AA"
#define  set_HDMI_P2_hdmi_rst3_reg(data)                                         (*((volatile unsigned int*)HDMI_P2_hdmi_rst3_reg)=data)
#define  get_HDMI_P2_hdmi_rst3_reg                                               (*((volatile unsigned int*)HDMI_P2_hdmi_rst3_reg))
#define  HDMI_P2_hdmi_rst3_rstn_hd21_common_shift                                (29)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_pre3_shift                                  (28)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_pre2_shift                                  (27)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_pre1_shift                                  (26)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_pre0_shift                                  (25)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_hdcp_pre3_shift                             (24)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_hdcp_pre2_shift                             (23)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_hdcp_pre1_shift                             (22)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_hdcp_pre0_shift                             (21)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_common_mask                                 (0x20000000)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_pre3_mask                                   (0x10000000)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_pre2_mask                                   (0x08000000)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_pre1_mask                                   (0x04000000)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_pre0_mask                                   (0x02000000)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_hdcp_pre3_mask                              (0x01000000)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_hdcp_pre2_mask                              (0x00800000)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_hdcp_pre1_mask                              (0x00400000)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_hdcp_pre0_mask                              (0x00200000)
#define  HDMI_P2_hdmi_rst3_rstn_hd21_common(data)                                (0x20000000&((data)<<29))
#define  HDMI_P2_hdmi_rst3_rstn_hd21_pre3(data)                                  (0x10000000&((data)<<28))
#define  HDMI_P2_hdmi_rst3_rstn_hd21_pre2(data)                                  (0x08000000&((data)<<27))
#define  HDMI_P2_hdmi_rst3_rstn_hd21_pre1(data)                                  (0x04000000&((data)<<26))
#define  HDMI_P2_hdmi_rst3_rstn_hd21_pre0(data)                                  (0x02000000&((data)<<25))
#define  HDMI_P2_hdmi_rst3_rstn_hd21_hdcp_pre3(data)                             (0x01000000&((data)<<24))
#define  HDMI_P2_hdmi_rst3_rstn_hd21_hdcp_pre2(data)                             (0x00800000&((data)<<23))
#define  HDMI_P2_hdmi_rst3_rstn_hd21_hdcp_pre1(data)                             (0x00400000&((data)<<22))
#define  HDMI_P2_hdmi_rst3_rstn_hd21_hdcp_pre0(data)                             (0x00200000&((data)<<21))
#define  HDMI_P2_hdmi_rst3_get_rstn_hd21_common(data)                            ((0x20000000&(data))>>29)
#define  HDMI_P2_hdmi_rst3_get_rstn_hd21_pre3(data)                              ((0x10000000&(data))>>28)
#define  HDMI_P2_hdmi_rst3_get_rstn_hd21_pre2(data)                              ((0x08000000&(data))>>27)
#define  HDMI_P2_hdmi_rst3_get_rstn_hd21_pre1(data)                              ((0x04000000&(data))>>26)
#define  HDMI_P2_hdmi_rst3_get_rstn_hd21_pre0(data)                              ((0x02000000&(data))>>25)
#define  HDMI_P2_hdmi_rst3_get_rstn_hd21_hdcp_pre3(data)                         ((0x01000000&(data))>>24)
#define  HDMI_P2_hdmi_rst3_get_rstn_hd21_hdcp_pre2(data)                         ((0x00800000&(data))>>23)
#define  HDMI_P2_hdmi_rst3_get_rstn_hd21_hdcp_pre1(data)                         ((0x00400000&(data))>>22)
#define  HDMI_P2_hdmi_rst3_get_rstn_hd21_hdcp_pre0(data)                         ((0x00200000&(data))>>21)

#define  HDMI_P2_hdmi_clken0                                                    0x1803C628
#define  HDMI_P2_hdmi_clken0_reg_addr                                            "0xB803C628"
#define  HDMI_P2_hdmi_clken0_reg                                                 0xB803C628
#define  HDMI_P2_hdmi_clken0_inst_addr                                           "0x00AB"
#define  set_HDMI_P2_hdmi_clken0_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_hdmi_clken0_reg)=data)
#define  get_HDMI_P2_hdmi_clken0_reg                                             (*((volatile unsigned int*)HDMI_P2_hdmi_clken0_reg))
#define  HDMI_P2_hdmi_clken0_clken_hdmi_common_shift                             (29)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_pre3_shift                               (28)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_pre2_shift                               (27)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_pre1_shift                               (26)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_pre0_shift                               (25)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_hdcp_pre3_shift                          (24)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_hdcp_pre2_shift                          (23)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_hdcp_pre1_shift                          (22)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_hdcp_pre0_shift                          (21)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_common_mask                              (0x20000000)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_pre3_mask                                (0x10000000)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_pre2_mask                                (0x08000000)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_pre1_mask                                (0x04000000)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_pre0_mask                                (0x02000000)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_hdcp_pre3_mask                           (0x01000000)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_hdcp_pre2_mask                           (0x00800000)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_hdcp_pre1_mask                           (0x00400000)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_hdcp_pre0_mask                           (0x00200000)
#define  HDMI_P2_hdmi_clken0_clken_hdmi_common(data)                             (0x20000000&((data)<<29))
#define  HDMI_P2_hdmi_clken0_clken_hdmi_pre3(data)                               (0x10000000&((data)<<28))
#define  HDMI_P2_hdmi_clken0_clken_hdmi_pre2(data)                               (0x08000000&((data)<<27))
#define  HDMI_P2_hdmi_clken0_clken_hdmi_pre1(data)                               (0x04000000&((data)<<26))
#define  HDMI_P2_hdmi_clken0_clken_hdmi_pre0(data)                               (0x02000000&((data)<<25))
#define  HDMI_P2_hdmi_clken0_clken_hdmi_hdcp_pre3(data)                          (0x01000000&((data)<<24))
#define  HDMI_P2_hdmi_clken0_clken_hdmi_hdcp_pre2(data)                          (0x00800000&((data)<<23))
#define  HDMI_P2_hdmi_clken0_clken_hdmi_hdcp_pre1(data)                          (0x00400000&((data)<<22))
#define  HDMI_P2_hdmi_clken0_clken_hdmi_hdcp_pre0(data)                          (0x00200000&((data)<<21))
#define  HDMI_P2_hdmi_clken0_get_clken_hdmi_common(data)                         ((0x20000000&(data))>>29)
#define  HDMI_P2_hdmi_clken0_get_clken_hdmi_pre3(data)                           ((0x10000000&(data))>>28)
#define  HDMI_P2_hdmi_clken0_get_clken_hdmi_pre2(data)                           ((0x08000000&(data))>>27)
#define  HDMI_P2_hdmi_clken0_get_clken_hdmi_pre1(data)                           ((0x04000000&(data))>>26)
#define  HDMI_P2_hdmi_clken0_get_clken_hdmi_pre0(data)                           ((0x02000000&(data))>>25)
#define  HDMI_P2_hdmi_clken0_get_clken_hdmi_hdcp_pre3(data)                      ((0x01000000&(data))>>24)
#define  HDMI_P2_hdmi_clken0_get_clken_hdmi_hdcp_pre2(data)                      ((0x00800000&(data))>>23)
#define  HDMI_P2_hdmi_clken0_get_clken_hdmi_hdcp_pre1(data)                      ((0x00400000&(data))>>22)
#define  HDMI_P2_hdmi_clken0_get_clken_hdmi_hdcp_pre0(data)                      ((0x00200000&(data))>>21)

#define  HDMI_P2_hdmi_clken3                                                    0x1803C62C
#define  HDMI_P2_hdmi_clken3_reg_addr                                            "0xB803C62C"
#define  HDMI_P2_hdmi_clken3_reg                                                 0xB803C62C
#define  HDMI_P2_hdmi_clken3_inst_addr                                           "0x00AC"
#define  set_HDMI_P2_hdmi_clken3_reg(data)                                       (*((volatile unsigned int*)HDMI_P2_hdmi_clken3_reg)=data)
#define  get_HDMI_P2_hdmi_clken3_reg                                             (*((volatile unsigned int*)HDMI_P2_hdmi_clken3_reg))
#define  HDMI_P2_hdmi_clken3_clken_hd21_common_shift                             (29)
#define  HDMI_P2_hdmi_clken3_clken_hd21_pre3_shift                               (28)
#define  HDMI_P2_hdmi_clken3_clken_hd21_pre2_shift                               (27)
#define  HDMI_P2_hdmi_clken3_clken_hd21_pre1_shift                               (26)
#define  HDMI_P2_hdmi_clken3_clken_hd21_pre0_shift                               (25)
#define  HDMI_P2_hdmi_clken3_clken_hd21_hdcp_pre3_shift                          (24)
#define  HDMI_P2_hdmi_clken3_clken_hd21_hdcp_pre2_shift                          (23)
#define  HDMI_P2_hdmi_clken3_clken_hd21_hdcp_pre1_shift                          (22)
#define  HDMI_P2_hdmi_clken3_clken_hd21_hdcp_pre0_shift                          (21)
#define  HDMI_P2_hdmi_clken3_clken_hd21_common_mask                              (0x20000000)
#define  HDMI_P2_hdmi_clken3_clken_hd21_pre3_mask                                (0x10000000)
#define  HDMI_P2_hdmi_clken3_clken_hd21_pre2_mask                                (0x08000000)
#define  HDMI_P2_hdmi_clken3_clken_hd21_pre1_mask                                (0x04000000)
#define  HDMI_P2_hdmi_clken3_clken_hd21_pre0_mask                                (0x02000000)
#define  HDMI_P2_hdmi_clken3_clken_hd21_hdcp_pre3_mask                           (0x01000000)
#define  HDMI_P2_hdmi_clken3_clken_hd21_hdcp_pre2_mask                           (0x00800000)
#define  HDMI_P2_hdmi_clken3_clken_hd21_hdcp_pre1_mask                           (0x00400000)
#define  HDMI_P2_hdmi_clken3_clken_hd21_hdcp_pre0_mask                           (0x00200000)
#define  HDMI_P2_hdmi_clken3_clken_hd21_common(data)                             (0x20000000&((data)<<29))
#define  HDMI_P2_hdmi_clken3_clken_hd21_pre3(data)                               (0x10000000&((data)<<28))
#define  HDMI_P2_hdmi_clken3_clken_hd21_pre2(data)                               (0x08000000&((data)<<27))
#define  HDMI_P2_hdmi_clken3_clken_hd21_pre1(data)                               (0x04000000&((data)<<26))
#define  HDMI_P2_hdmi_clken3_clken_hd21_pre0(data)                               (0x02000000&((data)<<25))
#define  HDMI_P2_hdmi_clken3_clken_hd21_hdcp_pre3(data)                          (0x01000000&((data)<<24))
#define  HDMI_P2_hdmi_clken3_clken_hd21_hdcp_pre2(data)                          (0x00800000&((data)<<23))
#define  HDMI_P2_hdmi_clken3_clken_hd21_hdcp_pre1(data)                          (0x00400000&((data)<<22))
#define  HDMI_P2_hdmi_clken3_clken_hd21_hdcp_pre0(data)                          (0x00200000&((data)<<21))
#define  HDMI_P2_hdmi_clken3_get_clken_hd21_common(data)                         ((0x20000000&(data))>>29)
#define  HDMI_P2_hdmi_clken3_get_clken_hd21_pre3(data)                           ((0x10000000&(data))>>28)
#define  HDMI_P2_hdmi_clken3_get_clken_hd21_pre2(data)                           ((0x08000000&(data))>>27)
#define  HDMI_P2_hdmi_clken3_get_clken_hd21_pre1(data)                           ((0x04000000&(data))>>26)
#define  HDMI_P2_hdmi_clken3_get_clken_hd21_pre0(data)                           ((0x02000000&(data))>>25)
#define  HDMI_P2_hdmi_clken3_get_clken_hd21_hdcp_pre3(data)                      ((0x01000000&(data))>>24)
#define  HDMI_P2_hdmi_clken3_get_clken_hd21_hdcp_pre2(data)                      ((0x00800000&(data))>>23)
#define  HDMI_P2_hdmi_clken3_get_clken_hd21_hdcp_pre1(data)                      ((0x00400000&(data))>>22)
#define  HDMI_P2_hdmi_clken3_get_clken_hd21_hdcp_pre0(data)                      ((0x00200000&(data))>>21)

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======HDMI_P1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  i2c_scdc_rst_n:1;
    };
}hdmi_p2_soft_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  i2c_scdc_clken:1;
    };
}hdmi_p2_soft_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  crc_r_en:1;
        RBus_UInt32  crc_g_en:1;
        RBus_UInt32  crc_b_en:1;
        RBus_UInt32  crc_done:1;
        RBus_UInt32  crc_nonstable:1;
        RBus_UInt32  crcts:2;
        RBus_UInt32  crcc:1;
    };
}hdmi_p2_pp_tmds_crcc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  crcob2_3:8;
        RBus_UInt32  crcob2_2:8;
        RBus_UInt32  crcob2_1:8;
    };
}hdmi_p2_pp_tmds_crco0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  crcob2_6:8;
        RBus_UInt32  crcob2_5:8;
        RBus_UInt32  crcob2_4:8;
    };
}hdmi_p2_pp_tmds_crco1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  end_phase:2;
        RBus_UInt32  bcd:1;
        RBus_UInt32  gcd:1;
        RBus_UInt32  rcd:1;
        RBus_UInt32  ho:1;
        RBus_UInt32  yo:1;
        RBus_UInt32  dummy180b2014_2_0:3;
    };
}hdmi_p2_tmds_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  trcoe_r:1;
        RBus_UInt32  tgcoe_r:1;
        RBus_UInt32  tbcoe_r:1;
        RBus_UInt32  ocke_r:1;
        RBus_UInt32  aoe:1;
        RBus_UInt32  trcoe:1;
        RBus_UInt32  tgcoe:1;
        RBus_UInt32  tbcoe:1;
        RBus_UInt32  ocke:1;
        RBus_UInt32  ockie:1;
        RBus_UInt32  focke:1;
        RBus_UInt32  cbus_dbg_cke:1;
        RBus_UInt32  dummy180b2018_1_0:2;
    };
}hdmi_p2_tmds_outctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ecc_r:1;
        RBus_UInt32  erip_r:1;
        RBus_UInt32  egip_r:1;
        RBus_UInt32  ebip_r:1;
        RBus_UInt32  dummy180b201c_27_10:18;
        RBus_UInt32  video_preamble_off_en:1;
        RBus_UInt32  hs_width_sel:1;
        RBus_UInt32  deo:1;
        RBus_UInt32  brcw:1;
        RBus_UInt32  pnsw:1;
        RBus_UInt32  iccaf:1;
        RBus_UInt32  ecc:1;
        RBus_UInt32  erip:1;
        RBus_UInt32  egip:1;
        RBus_UInt32  ebip:1;
    };
}hdmi_p2_tmds_pwdctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  hde:1;
    };
}hdmi_p2_tmds_z0cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  pk_gb_num:2;
        RBus_UInt32  vd_gb_num:2;
        RBus_UInt32  pk_pre_num:3;
        RBus_UInt32  vd_pre_num:3;
        RBus_UInt32  pll_div2_en:1;
        RBus_UInt32  no_clk_in:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  de_inv_disable:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  clr_infoframe_dvi:1;
        RBus_UInt32  auto_dvi2hdmi:1;
        RBus_UInt32  dummy180b2024_1_0:2;
    };
}hdmi_p2_tmds_cps_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  debug_sel:6;
        RBus_UInt32  dummy180b2028_3:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:2;
    };
}hdmi_p2_tmds_udc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dc:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  nl:3;
    };
}hdmi_p2_tmds_errc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  tmds_bypass:1;
        RBus_UInt32  dummy180b2030_6_0:7;
    };
}hdmi_p2_tmds_out_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  tmds_rout_h:8;
        RBus_UInt32  tmds_rout_l:8;
    };
}hdmi_p2_tmds_rout_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  tmds_gout_h:8;
        RBus_UInt32  tmds_gout_l:8;
    };
}hdmi_p2_tmds_gout_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  tmds_bout_h:8;
        RBus_UInt32  tmds_bout_l:8;
    };
}hdmi_p2_tmds_bout_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  dpc_pp_valid:1;
        RBus_UInt32  dpc_default_ph:1;
        RBus_UInt32  dpc_pp:4;
        RBus_UInt32  dpc_cd:4;
    };
}hdmi_p2_tmds_dpc0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  dpc_cd_chg_flag:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dpc_cd_chg_int_en:1;
        RBus_UInt32  dummy180b2044_15_11:5;
        RBus_UInt32  dpc_auto:1;
        RBus_UInt32  dpc_pp_valid_fw:1;
        RBus_UInt32  dpc_default_ph_fw:1;
        RBus_UInt32  dpc_pp_fw:4;
        RBus_UInt32  dpc_cd_fw:4;
    };
}hdmi_p2_tmds_dpc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  dpc_bypass_dis:1;
        RBus_UInt32  dpc_en:1;
        RBus_UInt32  phase_errcnt_in:3;
        RBus_UInt32  phase_clrcnt_in:3;
        RBus_UInt32  phase_clr_sel:1;
    };
}hdmi_p2_tmds_dpc_set0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  set_full_noti:4;
        RBus_UInt32  set_empty_noti:4;
    };
}hdmi_p2_tmds_dpc_set1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fifo_errcnt_in:3;
        RBus_UInt32  clr_phase_flag:1;
        RBus_UInt32  clr_fifo_flag:1;
        RBus_UInt32  dpc_phase_ok:1;
        RBus_UInt32  dpc_phase_err_flag:1;
        RBus_UInt32  dpc_fifo_err_flag:1;
    };
}hdmi_p2_tmds_dpc_set2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dpc_fifo_over_flag:1;
        RBus_UInt32  dpc_fifo_under_flag:1;
        RBus_UInt32  dpc_fifo_over_xflag:1;
        RBus_UInt32  dpc_fifo_under_xflag:1;
        RBus_UInt32  res2:4;
    };
}hdmi_p2_tmds_dpc_set3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  thd:16;
        RBus_UInt32  res1:3;
        RBus_UInt32  disparity_reset_mode:1;
        RBus_UInt32  irq_en:1;
        RBus_UInt32  reset:1;
        RBus_UInt32  period:6;
        RBus_UInt32  ch_sel:2;
        RBus_UInt32  mode:1;
        RBus_UInt32  en:1;
    };
}hdmi_p2_video_bit_err_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ad_max_b:6;
        RBus_UInt32  ad_min_b:6;
        RBus_UInt32  no_dis_reset_b:1;
        RBus_UInt32  bit_err_thd_b:1;
        RBus_UInt32  bit_err_b:1;
        RBus_UInt32  bit_err_cnt_of_b:1;
        RBus_UInt32  bit_err_cnt_b:16;
    };
}hdmi_p2_video_bit_err_status_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ad_max_g:6;
        RBus_UInt32  ad_min_g:6;
        RBus_UInt32  no_dis_reset_g:1;
        RBus_UInt32  bit_err_thd_g:1;
        RBus_UInt32  bit_err_g:1;
        RBus_UInt32  bit_err_cnt_of_g:1;
        RBus_UInt32  bit_err_cnt_g:16;
    };
}hdmi_p2_video_bit_err_status_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ad_max_r:6;
        RBus_UInt32  ad_min_r:6;
        RBus_UInt32  no_dis_reset_r:1;
        RBus_UInt32  bit_err_thd_r:1;
        RBus_UInt32  bit_err_r:1;
        RBus_UInt32  bit_err_cnt_of_r:1;
        RBus_UInt32  bit_err_cnt_r:16;
    };
}hdmi_p2_video_bit_err_status_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  terc4_thd:16;
    };
}hdmi_p2_terc4_err_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  terc4_err_thd_b:1;
        RBus_UInt32  terc4_err_b:1;
        RBus_UInt32  terc4_err_cnt_of_b:1;
        RBus_UInt32  terc4_err_cnt_b:16;
    };
}hdmi_p2_terc4_err_status_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  terc4_err_thd_g:1;
        RBus_UInt32  terc4_err_g:1;
        RBus_UInt32  terc4_err_cnt_of_g:1;
        RBus_UInt32  terc4_err_cnt_g:16;
    };
}hdmi_p2_terc4_err_status_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  terc4_err_thd_r:1;
        RBus_UInt32  terc4_err_r:1;
        RBus_UInt32  terc4_err_cnt_of_r:1;
        RBus_UInt32  terc4_err_cnt_r:16;
    };
}hdmi_p2_terc4_err_status_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  avmute_fw:1;
        RBus_UInt32  avmute_bg:1;
        RBus_UInt32  avmute:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  mode:1;
    };
}hdmi_p2_hdmi_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b2080_31_29:3;
        RBus_UInt32  drmps_v:1;
        RBus_UInt32  mpegps_v:1;
        RBus_UInt32  aps_v:1;
        RBus_UInt32  spdps_v:1;
        RBus_UInt32  avips_v:1;
        RBus_UInt32  hdr10pvsps_v:1;
        RBus_UInt32  dvsps_v:1;
        RBus_UInt32  fvsps_v:1;
        RBus_UInt32  vsps_v:1;
        RBus_UInt32  gmps_v:1;
        RBus_UInt32  isrc1ps_v:1;
        RBus_UInt32  acpps_v:1;
        RBus_UInt32  drmps:1;
        RBus_UInt32  mpegps:1;
        RBus_UInt32  aps:1;
        RBus_UInt32  spdps:1;
        RBus_UInt32  avips:1;
        RBus_UInt32  hdr10pvsps:1;
        RBus_UInt32  dvsps:1;
        RBus_UInt32  fvsps:1;
        RBus_UInt32  vsps:1;
        RBus_UInt32  gmps:1;
        RBus_UInt32  isrc1ps:1;
        RBus_UInt32  acpps:1;
        RBus_UInt32  nps:1;
        RBus_UInt32  rsv3ps:1;
        RBus_UInt32  rsv2ps:1;
        RBus_UInt32  rsv1ps:1;
        RBus_UInt32  rsv0ps:1;
    };
}hdmi_p2_hdmi_gpvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b2084_31_4:28;
        RBus_UInt32  drmps_rv:1;
        RBus_UInt32  hdr10pvsps_rv:1;
        RBus_UInt32  dvsps_rv:1;
        RBus_UInt32  vsps_rv:1;
    };
}hdmi_p2_hdmi_gpvs1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  apss:9;
    };
}hdmi_p2_hdmi_psap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dpss:8;
    };
}hdmi_p2_hdmi_psdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  packet_header_parsing_mode:1;
        RBus_UInt32  nval:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  no_vs_det_en:1;
        RBus_UInt32  dvi_reset_ds_cm_en:1;
        RBus_UInt32  packet_ignore:1;
        RBus_UInt32  mode:1;
        RBus_UInt32  msmode:1;
        RBus_UInt32  cabs:1;
        RBus_UInt32  fcddip:1;
    };
}hdmi_p2_hdmi_scr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  bches2_airq_en:1;
        RBus_UInt32  bches2_irq_en:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  bche:1;
        RBus_UInt32  bches:1;
        RBus_UInt32  bches2:1;
        RBus_UInt32  pe:1;
    };
}hdmi_p2_hdmi_bchcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  avmute_flag:1;
        RBus_UInt32  avmute_win_en:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  ve:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:1;
    };
}hdmi_p2_hdmi_avmcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  aicpvsb:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  icpvsb:15;
    };
}hdmi_p2_hdmi_pamicr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pt3:8;
        RBus_UInt32  pt2:8;
        RBus_UInt32  pt1:8;
        RBus_UInt32  pt0:8;
    };
}hdmi_p2_hdmi_ptrsv1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pt3_oui_1st:8;
        RBus_UInt32  pt2_oui_1st:8;
        RBus_UInt32  pt1_oui_1st:8;
        RBus_UInt32  pt0_oui_1st:8;
    };
}hdmi_p2_hdmi_ptrsv2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pt3_recognize_oui_en:1;
        RBus_UInt32  pt2_recognize_oui_en:1;
        RBus_UInt32  pt1_recognize_oui_en:1;
        RBus_UInt32  pt0_recognize_oui_en:1;
    };
}hdmi_p2_hdmi_ptrsv3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvsef:32;
    };
}hdmi_p2_hdmi_pvgcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvs:32;
    };
}hdmi_p2_hdmi_pvsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  hdmi_field:1;
        RBus_UInt32  int_pro_chg_flag:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  int_pro_chg_int_en:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  bg_gck:1;
        RBus_UInt32  iclk_sel:2;
        RBus_UInt32  csc_r:3;
        RBus_UInt32  hdirq:1;
        RBus_UInt32  csam:1;
        RBus_UInt32  csc:3;
        RBus_UInt32  field_decide_sel:1;
        RBus_UInt32  prdsam:1;
        RBus_UInt32  dsc_r:4;
        RBus_UInt32  eoi:1;
        RBus_UInt32  eot:1;
        RBus_UInt32  se:1;
        RBus_UInt32  rs:1;
        RBus_UInt32  dsc:4;
    };
}hdmi_p2_hdmi_vcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  pucnr:1;
        RBus_UInt32  mode:1;
    };
}hdmi_p2_hdmi_acrcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  cts:20;
    };
}hdmi_p2_hdmi_acrsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  n:20;
    };
}hdmi_p2_hdmi_acrsr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  airq_gen:1;
        RBus_UInt32  irq_gen:1;
        RBus_UInt32  apending:1;
        RBus_UInt32  pending:1;
        RBus_UInt32  aavmute:1;
        RBus_UInt32  avmute:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  avc:1;
        RBus_UInt32  vc:1;
    };
}hdmi_p2_hdmi_intcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  nvlgb:1;
        RBus_UInt32  nalgb:1;
        RBus_UInt32  natgb:1;
        RBus_UInt32  ngb:1;
        RBus_UInt32  pe:1;
        RBus_UInt32  gcp:1;
    };
}hdmi_p2_hdmi_bcsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  fsre:1;
        RBus_UInt32  fsif:1;
        RBus_UInt32  res2:1;
    };
}hdmi_p2_hdmi_asr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  fbif:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:6;
    };
}hdmi_p2_hdmi_asr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  hvf:3;
        RBus_UInt32  hdmi_vic:8;
    };
}hdmi_p2_hdmi_video_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  hdmi_3d_ext_data:4;
        RBus_UInt32  hdmi_3d_metadata_type:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  hdmi_3d_structure:4;
        RBus_UInt32  hdmi_3d_meta_present:1;
        RBus_UInt32  res3:3;
    };
}hdmi_p2_hdmi_3d_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:4;
        RBus_UInt32  allm_mode:1;
        RBus_UInt32  ccbpc:4;
    };
}hdmi_p2_hdmi_fvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  static_metadata_descriptor_id:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  eotf:3;
    };
}hdmi_p2_hdmi_drm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  drm_info_clr:1;
        RBus_UInt32  mpeg_info_clr:1;
        RBus_UInt32  audio_info_clr:1;
        RBus_UInt32  spd_info_clr:1;
        RBus_UInt32  avi_info_clr:1;
        RBus_UInt32  hdr10pvs_info_clr:1;
        RBus_UInt32  dvs_info_clr:1;
        RBus_UInt32  fvs_info_clr:1;
        RBus_UInt32  vs_info_clr:1;
        RBus_UInt32  gm_clr:1;
        RBus_UInt32  isrc2_clr:1;
        RBus_UInt32  isrc1_clr:1;
        RBus_UInt32  acp_clr:1;
        RBus_UInt32  ackg_clr:1;
    };
}hdmi_p2_hdmi_pcmc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  apss:10;
    };
}hdmi_p2_hdrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpss:32;
    };
}hdmi_p2_hdrdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  em_hdr_no:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  em_hdr_done_block:1;
        RBus_UInt32  em_hdr_timeout:1;
        RBus_UInt32  em_hdr_discont:1;
        RBus_UInt32  em_hdr_end:1;
        RBus_UInt32  em_hdr_new:1;
        RBus_UInt32  em_hdr_first:1;
        RBus_UInt32  em_hdr_last:1;
    };
}hdmi_p2_hdr_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr_hd20_hd21_sel:1;
        RBus_UInt32  org_id:8;
        RBus_UInt32  set_tag_msb:8;
        RBus_UInt32  set_tag_lsb:8;
        RBus_UInt32  recognize_tag_en:1;
        RBus_UInt32  hdr_pkt_cnt_clr:1;
        RBus_UInt32  hdr_block_sel:1;
        RBus_UInt32  em_err2_proc:1;
        RBus_UInt32  rec_em_hdr_irq_en:3;
    };
}hdmi_p2_em_ct_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  end:15;
        RBus_UInt32  res2:8;
        RBus_UInt32  em_timeout_frame:4;
        RBus_UInt32  res3:3;
        RBus_UInt32  mode:1;
    };
}hdmi_p2_fapa_ct_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  apss:8;
    };
}hdmi_p2_hdmi_emap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dpss:8;
    };
}hdmi_p2_hdmi_emdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  em_vrr_no:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  em_vrr_timeout:1;
        RBus_UInt32  em_vrr_discont:1;
        RBus_UInt32  em_vrr_end:1;
        RBus_UInt32  em_vrr_new:1;
        RBus_UInt32  em_vrr_first:1;
        RBus_UInt32  em_vrr_last:1;
    };
}hdmi_p2_vrrem_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  vrr_clr:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  rec_em_vrr_irq_en:3;
    };
}hdmi_p2_hdmi_vrr_emc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  en_ncts_chg_irq:1;
        RBus_UInt32  ncts_chg_irq:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
    };
}hdmi_p2_audio_sample_rate_change_irq_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  hbr_audio_mode:1;
    };
}hdmi_p2_high_bit_rate_audio_packet_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  aud_data_fw:18;
        RBus_UInt32  res2:1;
        RBus_UInt32  pck_hbr_aud_gated_en:1;
        RBus_UInt32  pck_aud_gated_en:1;
        RBus_UInt32  aud_cptest_en:1;
        RBus_UInt32  sine_replace_en:1;
        RBus_UInt32  bch2_repeat_en:1;
        RBus_UInt32  flat_en:1;
        RBus_UInt32  aud_en:1;
    };
}hdmi_p2_hdmi_audcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  aud_ch_mode:3;
        RBus_UInt32  aud_fifof:1;
    };
}hdmi_p2_hdmi_audsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  clkv_meas_sel:2;
        RBus_UInt32  clock_det_en:1;
    };
}hdmi_p2_clkdetcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  reset_counter:1;
        RBus_UInt32  pop_out:1;
        RBus_UInt32  clk_counter:12;
        RBus_UInt32  res2:2;
        RBus_UInt32  en_clk_chg_irq:1;
        RBus_UInt32  clk_chg_irq:1;
        RBus_UInt32  dummy180b2128_3_2:2;
        RBus_UInt32  clk_in_target_irq_en:1;
        RBus_UInt32  clk_in_target:1;
    };
}hdmi_p2_clkdetsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dclk_cnt_start:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  dclk_cnt_end:12;
    };
}hdmi_p2_clk_setting_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  target_for_maximum_clk_counter:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  target_for_minimum_clk_counter:12;
    };
}hdmi_p2_clk_setting_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  clk_counter_err_threshold:4;
        RBus_UInt32  clk_counter_debounce:8;
    };
}hdmi_p2_clk_setting_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  prbs23_rxen:1;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  prbs_err_cnt:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  prbs_bit_err:10;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs7_rxen:1;
    };
}hdmi_p2_prbs_r_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  prbs23_rxen:1;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  prbs_err_cnt:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  prbs_bit_err:10;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs7_rxen:1;
    };
}hdmi_p2_prbs_g_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  prbs23_rxen:1;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  prbs_err_cnt:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  prbs_bit_err:10;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs7_rxen:1;
    };
}hdmi_p2_prbs_b_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  cmp_err_flag:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  cmp_err_int_en:1;
        RBus_UInt32  preamble:4;
        RBus_UInt32  res3:6;
        RBus_UInt32  cmp_value:10;
        RBus_UInt32  res4:3;
        RBus_UInt32  dvi_mode_sel:1;
        RBus_UInt32  channel_sel:2;
        RBus_UInt32  lgb_cal_conti:1;
        RBus_UInt32  lgb_cal_en:1;
    };
}hdmi_p2_hdmi_leading_gb_cmp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_err_cnt:16;
        RBus_UInt32  cmp_times:16;
    };
}hdmi_p2_hdmi_leading_gb_cmp_times_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  preamble_cmp_cnt:16;
        RBus_UInt32  preamble_cmp_cnt_by_frame:16;
    };
}hdmi_p2_hdmi_leading_gb_cmp_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cts_over_flag:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  cts_up_bound:20;
    };
}hdmi_p2_audio_cts_up_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cts_under_flag:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  cts_low_bound:20;
    };
}hdmi_p2_audio_cts_low_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  n_over_flag:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  n_up_bound:20;
    };
}hdmi_p2_audio_n_up_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  n_under_flag:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  n_low_bound:20;
    };
}hdmi_p2_audio_n_low_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  linebuf_ls2:1;
        RBus_UInt32  linebuf_ls1:1;
        RBus_UInt32  linebuf_ls0:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  hdr_ls_1:1;
        RBus_UInt32  hdr_ls_0:1;
        RBus_UInt32  yuv420_ls3:1;
        RBus_UInt32  yuv420_ls2:1;
        RBus_UInt32  yuv420_ls1:1;
        RBus_UInt32  yuv420_ls0:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  audio_ls:1;
    };
}hdmi_p2_light_sleep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  linebuf_rme2:1;
        RBus_UInt32  linebuf_rme1:1;
        RBus_UInt32  linebuf_rme0:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  hdr_rmeb_1:1;
        RBus_UInt32  hdr_rmeb_0:1;
        RBus_UInt32  hdr_rmea_1:1;
        RBus_UInt32  hdr_rmea_0:1;
        RBus_UInt32  yuv420_rme3:1;
        RBus_UInt32  yuv420_rme2:1;
        RBus_UInt32  yuv420_rme1:1;
        RBus_UInt32  yuv420_rme0:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  audio_rme:1;
    };
}hdmi_p2_read_margin_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  linebuf_test1_2:1;
        RBus_UInt32  linebuf_test1_1:1;
        RBus_UInt32  linebuf_test1_0:1;
        RBus_UInt32  linebuf_rm2:4;
        RBus_UInt32  linebuf_rm1:4;
        RBus_UInt32  linebuf_rm0:4;
    };
}hdmi_p2_read_margin3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}hdmi_p2_read_margin2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr_test1b_1:1;
        RBus_UInt32  hdr_test1a_1:1;
        RBus_UInt32  hdr_test1b_0:1;
        RBus_UInt32  hdr_test1a_0:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  yuv420_test1_3:1;
        RBus_UInt32  yuv420_test1_2:1;
        RBus_UInt32  yuv420_test1_1:1;
        RBus_UInt32  yuv420_test1_0:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  yuv420_rm3:4;
        RBus_UInt32  yuv420_rm2:4;
        RBus_UInt32  yuv420_rm1:4;
        RBus_UInt32  yuv420_rm0:4;
    };
}hdmi_p2_read_margin1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr_rmb_1:4;
        RBus_UInt32  hdr_rmb_0:4;
        RBus_UInt32  hdr_rma_1:4;
        RBus_UInt32  hdr_rma_0:4;
        RBus_UInt32  res1:7;
        RBus_UInt32  audio_test1_0:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  audio_rm:4;
    };
}hdmi_p2_read_margin0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  linebuf_bist_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  hdr_bist_en:1;
        RBus_UInt32  yuv420_bist_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  audio_bist_en:1;
    };
}hdmi_p2_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  linebuf_bist_done:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  hdr_bist_done:1;
        RBus_UInt32  yuv420_bist_done:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  audio_bist_done:1;
    };
}hdmi_p2_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  linebuf_bist_fail:1;
        RBus_UInt32  linebuf_bist_fail0:1;
        RBus_UInt32  linebuf_bist_fail1:1;
        RBus_UInt32  linebuf_bist_fail2:1;
        RBus_UInt32  hdr_bist_fail:1;
        RBus_UInt32  hdr_bist_fail0:1;
        RBus_UInt32  hdr_bist_fail1:1;
        RBus_UInt32  yuv420_bist_fail:1;
        RBus_UInt32  yuv420_bist_fail0:1;
        RBus_UInt32  yuv420_bist_fail1:1;
        RBus_UInt32  yuv420_bist_fail2:1;
        RBus_UInt32  yuv420_bist_fail3:1;
        RBus_UInt32  audio_bist_fail:1;
    };
}hdmi_p2_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  linebuf_drf_mode:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  hdr_drf_mode:1;
        RBus_UInt32  yuv420_drf_mode:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  audio_drf_mode:1;
    };
}hdmi_p2_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  linebuf_drf_resume:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  hdr_drf_resume:1;
        RBus_UInt32  yuv420_drf_resume:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  audio_drf_resume:1;
    };
}hdmi_p2_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  linebuf_drf_done:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  hdr_drf_done:1;
        RBus_UInt32  yuv420_drf_done:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  audio_drf_done:1;
    };
}hdmi_p2_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  linebuf_drf_pause:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  hdr_drf_pause:1;
        RBus_UInt32  yuv420_drf_pause:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  audio_drf_pause:1;
    };
}hdmi_p2_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  linebuf_drf_fail:1;
        RBus_UInt32  linebuf_drf_fail0:1;
        RBus_UInt32  linebuf_drf_fail1:1;
        RBus_UInt32  linebuf_drf_fail2:1;
        RBus_UInt32  hdr_drf_fail:1;
        RBus_UInt32  hdr_drf_fail0:1;
        RBus_UInt32  hdr_drf_fail1:1;
        RBus_UInt32  yuv420_drf_fail:1;
        RBus_UInt32  yuv420_drf_fail0:1;
        RBus_UInt32  yuv420_drf_fail1:1;
        RBus_UInt32  yuv420_drf_fail2:1;
        RBus_UInt32  yuv420_drf_fail3:1;
        RBus_UInt32  audio_drf_fail:1;
    };
}hdmi_p2_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  port3_r_flush:1;
        RBus_UInt32  port3_r_afifo_en:1;
        RBus_UInt32  port3_g_flush:1;
        RBus_UInt32  port3_g_afifo_en:1;
        RBus_UInt32  port3_b_flush:1;
        RBus_UInt32  port3_b_afifo_en:1;
        RBus_UInt32  dummy180b2198_20:1;
        RBus_UInt32  port2_r_flush:1;
        RBus_UInt32  port2_r_afifo_en:1;
        RBus_UInt32  port2_g_flush:1;
        RBus_UInt32  port2_g_afifo_en:1;
        RBus_UInt32  port2_b_flush:1;
        RBus_UInt32  port2_b_afifo_en:1;
        RBus_UInt32  dummy180b2198_13:1;
        RBus_UInt32  port1_r_flush:1;
        RBus_UInt32  port1_r_afifo_en:1;
        RBus_UInt32  port1_g_flush:1;
        RBus_UInt32  port1_g_afifo_en:1;
        RBus_UInt32  port1_b_flush:1;
        RBus_UInt32  port1_b_afifo_en:1;
        RBus_UInt32  dummy180b2198_6:1;
        RBus_UInt32  port0_r_flush:1;
        RBus_UInt32  port0_r_afifo_en:1;
        RBus_UInt32  port0_g_flush:1;
        RBus_UInt32  port0_g_afifo_en:1;
        RBus_UInt32  port0_b_flush:1;
        RBus_UInt32  port0_b_afifo_en:1;
    };
}hdmi_p2_phy_fifo_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  port3_rclk_inv:1;
        RBus_UInt32  port3_gclk_inv:1;
        RBus_UInt32  port3_bclk_inv:1;
        RBus_UInt32  port2_rclk_inv:1;
        RBus_UInt32  port2_gclk_inv:1;
        RBus_UInt32  port2_bclk_inv:1;
        RBus_UInt32  port1_rclk_inv:1;
        RBus_UInt32  port1_gclk_inv:1;
        RBus_UInt32  port1_bclk_inv:1;
        RBus_UInt32  port0_rclk_inv:1;
        RBus_UInt32  port0_gclk_inv:1;
        RBus_UInt32  port0_bclk_inv:1;
    };
}hdmi_p2_phy_fifo_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  port1_r_wrclk_det_timeout_flag:1;
        RBus_UInt32  port1_r_rwclk_det_timeout_flag:1;
        RBus_UInt32  port1_r_wovflow_flag:1;
        RBus_UInt32  port1_r_rudflow_flag:1;
        RBus_UInt32  port1_r_rflush_flag:1;
        RBus_UInt32  port1_g_wrclk_det_timeout_flag:1;
        RBus_UInt32  port1_g_rwclk_det_timeout_flag:1;
        RBus_UInt32  port1_g_wovflow_flag:1;
        RBus_UInt32  port1_g_rudflow_flag:1;
        RBus_UInt32  port1_g_rflush_flag:1;
        RBus_UInt32  port1_b_wrclk_det_timeout_flag:1;
        RBus_UInt32  port1_b_rwclk_det_timeout_flag:1;
        RBus_UInt32  port1_b_wovflow_flag:1;
        RBus_UInt32  port1_b_rudflow_flag:1;
        RBus_UInt32  port1_b_rflush_flag:1;
        RBus_UInt32  port0_r_wrclk_det_timeout_flag:1;
        RBus_UInt32  port0_r_rwclk_det_timeout_flag:1;
        RBus_UInt32  port0_r_wovflow_flag:1;
        RBus_UInt32  port0_r_rudflow_flag:1;
        RBus_UInt32  port0_r_rflush_flag:1;
        RBus_UInt32  port0_g_wrclk_det_timeout_flag:1;
        RBus_UInt32  port0_g_rwclk_det_timeout_flag:1;
        RBus_UInt32  port0_g_wovflow_flag:1;
        RBus_UInt32  port0_g_rudflow_flag:1;
        RBus_UInt32  port0_g_rflush_flag:1;
        RBus_UInt32  port0_b_wrclk_det_timeout_flag:1;
        RBus_UInt32  port0_b_rwclk_det_timeout_flag:1;
        RBus_UInt32  port0_b_wovflow_flag:1;
        RBus_UInt32  port0_b_rudflow_flag:1;
        RBus_UInt32  port0_b_rflush_flag:1;
    };
}hdmi_p2_phy_fifo_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  port3_r_wrclk_det_timeout_flag:1;
        RBus_UInt32  port3_r_rwclk_det_timeout_flag:1;
        RBus_UInt32  port3_r_wovflow_flag:1;
        RBus_UInt32  port3_r_rudflow_flag:1;
        RBus_UInt32  port3_r_rflush_flag:1;
        RBus_UInt32  port3_g_wrclk_det_timeout_flag:1;
        RBus_UInt32  port3_g_rwclk_det_timeout_flag:1;
        RBus_UInt32  port3_g_wovflow_flag:1;
        RBus_UInt32  port3_g_rudflow_flag:1;
        RBus_UInt32  port3_g_rflush_flag:1;
        RBus_UInt32  port3_b_wrclk_det_timeout_flag:1;
        RBus_UInt32  port3_b_rwclk_det_timeout_flag:1;
        RBus_UInt32  port3_b_wovflow_flag:1;
        RBus_UInt32  port3_b_rudflow_flag:1;
        RBus_UInt32  port3_b_rflush_flag:1;
        RBus_UInt32  port2_r_wrclk_det_timeout_flag:1;
        RBus_UInt32  port2_r_rwclk_det_timeout_flag:1;
        RBus_UInt32  port2_r_wovflow_flag:1;
        RBus_UInt32  port2_r_rudflow_flag:1;
        RBus_UInt32  port2_r_rflush_flag:1;
        RBus_UInt32  port2_g_wrclk_det_timeout_flag:1;
        RBus_UInt32  port2_g_rwclk_det_timeout_flag:1;
        RBus_UInt32  port2_g_wovflow_flag:1;
        RBus_UInt32  port2_g_rudflow_flag:1;
        RBus_UInt32  port2_g_rflush_flag:1;
        RBus_UInt32  port2_b_wrclk_det_timeout_flag:1;
        RBus_UInt32  port2_b_rwclk_det_timeout_flag:1;
        RBus_UInt32  port2_b_wovflow_flag:1;
        RBus_UInt32  port2_b_rudflow_flag:1;
        RBus_UInt32  port2_b_rflush_flag:1;
    };
}hdmi_p2_phy_fifo_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  dbg_clk_freq_sel:1;
        RBus_UInt32  mhl_test_sel:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  en_ctsfifo_toggle_hdmi:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  offms_clock_sel:1;
        RBus_UInt32  hdmi_2x_out_sel:2;
        RBus_UInt32  hdmi_test_sel:4;
        RBus_UInt32  mac_out_sel:1;
        RBus_UInt32  hdmi_out_sel:1;
        RBus_UInt32  force_ctsfifo_rstn_hdmi:1;
        RBus_UInt32  en_ctsfifo_vsrst_hdmi:1;
        RBus_UInt32  en_ctsfifo_bypass_hdmi:1;
    };
}hdmi_p2_hdmi_cts_fifo_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  r_ch_afifo_en:1;
        RBus_UInt32  g_ch_afifo_en:1;
        RBus_UInt32  b_ch_afifo_en:1;
        RBus_UInt32  ch_sync_sel:2;
        RBus_UInt32  dummy180b21ac_19_17:3;
        RBus_UInt32  rden_thr:5;
        RBus_UInt32  dummy180b21ac_11_9:3;
        RBus_UInt32  udwater_thr:5;
        RBus_UInt32  dummy180b21ac_3:1;
        RBus_UInt32  flush:1;
        RBus_UInt32  ch_afifo_airq_en:1;
        RBus_UInt32  ch_afifo_irq_en:1;
    };
}hdmi_p2_ch_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  rgb_de_align_flag:1;
        RBus_UInt32  r_rwclk_det_timeout_flag:1;
        RBus_UInt32  r_wrclk_det_timeout_flag:1;
        RBus_UInt32  g_rwclk_det_timeout_flag:1;
        RBus_UInt32  g_wrclk_det_timeout_flag:1;
        RBus_UInt32  b_rwclk_det_timeout_flag:1;
        RBus_UInt32  b_wrclk_det_timeout_flag:1;
        RBus_UInt32  r_rudflow_flag:1;
        RBus_UInt32  r_wovflow_flag:1;
        RBus_UInt32  r_rflush_flag:1;
        RBus_UInt32  r_rw_water_lv:5;
        RBus_UInt32  g_rudflow_flag:1;
        RBus_UInt32  g_wovflow_flag:1;
        RBus_UInt32  g_rflush_flag:1;
        RBus_UInt32  g_rw_water_lv:5;
        RBus_UInt32  b_rudflow_flag:1;
        RBus_UInt32  b_wovflow_flag:1;
        RBus_UInt32  b_rflush_flag:1;
        RBus_UInt32  b_rw_water_lv:5;
    };
}hdmi_p2_ch_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lfsr0:16;
        RBus_UInt32  res1:7;
        RBus_UInt32  gating_en:1;
        RBus_UInt32  ctr_char_num:7;
        RBus_UInt32  hdmi_2p0_en:1;
    };
}hdmi_p2_hdmi_2p0_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lfsr2:16;
        RBus_UInt32  lfsr1:16;
    };
}hdmi_p2_hdmi_2p0_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  char_lock:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  uscr_per_glitch_r:1;
        RBus_UInt32  uscr_per_glitch_g:1;
        RBus_UInt32  uscr_per_glitch_b:1;
        RBus_UInt32  uscr_char_flag_r:1;
        RBus_UInt32  uscr_char_flag_g:1;
        RBus_UInt32  uscr_char_flag_b:1;
        RBus_UInt32  uscr_num:4;
        RBus_UInt32  dummy180b21bc_3_2:2;
        RBus_UInt32  scr_en_fw:1;
        RBus_UInt32  scr_auto:1;
    };
}hdmi_p2_scr_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  err_cnt_sel:1;
        RBus_UInt32  scdc_ced_en:1;
        RBus_UInt32  ch_locked_reset:1;
        RBus_UInt32  ch2_over_max_err_num:1;
        RBus_UInt32  ch1_over_max_err_num:1;
        RBus_UInt32  ch0_over_max_err_num:1;
        RBus_UInt32  max_err_num:10;
        RBus_UInt32  valid_reset:1;
        RBus_UInt32  reset_err_det:1;
        RBus_UInt32  keep_err_det:1;
        RBus_UInt32  refer_implem:1;
        RBus_UInt32  reset:1;
        RBus_UInt32  period:6;
        RBus_UInt32  ced_upd_num:3;
        RBus_UInt32  mode:1;
        RBus_UInt32  en:1;
    };
}hdmi_p2_cercr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  err_cnt1_video:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt0_video:15;
    };
}hdmi_p2_cersr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  err_cnt0_pkt:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt2_video:15;
    };
}hdmi_p2_cersr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  err_cnt2_pkt:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt1_pkt:15;
    };
}hdmi_p2_cersr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  err_cnt1_ctr:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt0_ctr:15;
    };
}hdmi_p2_cersr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  err_cnt2_ctr:15;
    };
}hdmi_p2_cersr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_htotal:14;
        RBus_UInt32  fw_hblank:14;
        RBus_UInt32  fw_set_time:1;
        RBus_UInt32  dummy180b21d8_2:1;
        RBus_UInt32  dummy180b21d8_1:1;
        RBus_UInt32  en:1;
    };
}hdmi_p2_yuv420_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vactive:13;
        RBus_UInt32  mode:1;
    };
}hdmi_p2_yuv420_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  all_mode:1;
        RBus_UInt32  sta:13;
    };
}hdmi_p2_fapa_ct_tmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  sync:1;
        RBus_UInt32  recognize_oui_en:1;
        RBus_UInt32  oui_3rd:8;
        RBus_UInt32  oui_2nd:8;
        RBus_UInt32  oui_1st:8;
    };
}hdmi_p2_hdr_em_ct2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  set_tag_msb:8;
        RBus_UInt32  set_tag_lsb:8;
        RBus_UInt32  recognize_tag_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  vsem_clr:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  rec_em_vsem_irq_en:3;
    };
}hdmi_p2_hdmi_vsem_emc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  sync:1;
        RBus_UInt32  recognize_oui_en:1;
        RBus_UInt32  oui_3rd:8;
        RBus_UInt32  oui_2nd:8;
        RBus_UInt32  oui_1st:8;
    };
}hdmi_p2_hdmi_vsem_emc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  em_vsem_no:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  em_vsem_timeout:1;
        RBus_UInt32  em_vsem_discont:1;
        RBus_UInt32  em_vsem_end:1;
        RBus_UInt32  em_vsem_new:1;
        RBus_UInt32  em_vsem_first:1;
        RBus_UInt32  em_vsem_last:1;
    };
}hdmi_p2_vsem_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  timer_cnt_end:22;
        RBus_UInt32  res2:2;
        RBus_UInt32  fw_mode:1;
        RBus_UInt32  ps_mode:1;
    };
}hdmi_p2_hd20_ps_ct_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  irq_en_pwron:1;
        RBus_UInt32  irq_en_pwroff:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:24;
        RBus_UInt32  pwron:1;
        RBus_UInt32  pwroff:1;
    };
}hdmi_p2_hd20_ps_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  irq_fw_all_0:1;
    };
}hdmi_p2_irq_all_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  cnt:15;
    };
}hdmi_p2_xtal_1ms_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  cnt:19;
    };
}hdmi_p2_xtal_10ms_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  en:1;
    };
}hdmi_p2_ps_measure_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  vs2vs_cycle_count:22;
    };
}hdmi_p2_ps_measure_xtal_clk_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  last_pixel2vs_count:27;
    };
}hdmi_p2_ps_measure_tmds_clk_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  non_ctl_err:1;
        RBus_UInt32  rc_err:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  keepout_window_end:9;
        RBus_UInt32  res3:2;
        RBus_UInt32  keepout_window_start:10;
    };
}hdmi_p2_hdcp_keepout_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  enc_window_end:9;
        RBus_UInt32  enc_window_start:10;
        RBus_UInt32  hdcp_clk_switch_auto:1;
        RBus_UInt32  hdcp_clk_sel_fw:1;
        RBus_UInt32  namfe:1;
        RBus_UInt32  rpt:1;
        RBus_UInt32  ivsp:1;
        RBus_UInt32  invvs:1;
        RBus_UInt32  ivspm:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
    };
}hdmi_p2_hdcp_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  enc_window_de2vs:27;
        RBus_UInt32  win_opp_mode:1;
    };
}hdmi_p2_hdcp_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  res3:4;
        RBus_UInt32  res4:4;
        RBus_UInt32  res5:2;
        RBus_UInt32  tune_up_down:1;
        RBus_UInt32  tune_range:7;
        RBus_UInt32  res6:1;
        RBus_UInt32  dvi_enc_mode:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  hdcp_vs_sel:1;
        RBus_UInt32  enc_tog:1;
        RBus_UInt32  avmute_dis:1;
        RBus_UInt32  res9:1;
        RBus_UInt32  res10:1;
        RBus_UInt32  res11:1;
    };
}hdmi_p2_hdcp_pcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:1;
        RBus_UInt32  dummy180b2310_0:1;
    };
}hdmi_p2_hdcp_flag1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:1;
        RBus_UInt32  dummy180b2314_0:1;
    };
}hdmi_p2_hdcp_flag2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:10;
        RBus_UInt32  res4:8;
    };
}hdmi_p2_hdcp_ap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  res2:8;
    };
}hdmi_p2_hdcp_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b2320_31_29:3;
        RBus_UInt32  aes_engine_sel:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  fn_auto_inc:1;
        RBus_UInt32  apply_cp_fn:1;
        RBus_UInt32  ks_encoded:1;
        RBus_UInt32  res2:12;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:1;
        RBus_UInt32  res10:1;
        RBus_UInt32  res11:1;
        RBus_UInt32  res12:1;
        RBus_UInt32  res13:1;
        RBus_UInt32  res14:1;
    };
}hdmi_p2_hdcp_2p2_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ks:32;
    };
}hdmi_p2_hdcp_2p2_ks0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ks:32;
    };
}hdmi_p2_hdcp_2p2_ks1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ks:32;
    };
}hdmi_p2_hdcp_2p2_ks2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ks:32;
    };
}hdmi_p2_hdcp_2p2_ks3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lc:32;
    };
}hdmi_p2_hdcp_2p2_lc0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lc:32;
    };
}hdmi_p2_hdcp_2p2_lc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lc:32;
    };
}hdmi_p2_hdcp_2p2_lc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lc:32;
    };
}hdmi_p2_hdcp_2p2_lc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  riv:32;
    };
}hdmi_p2_hdcp_2p2_riv0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  riv:32;
    };
}hdmi_p2_hdcp_2p2_riv1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  frame_number:8;
        RBus_UInt32  irq_fn_compare_fail:1;
        RBus_UInt32  irq_crc_fail:1;
        RBus_UInt32  irq_no_cp_packet:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  aes_uf:1;
        RBus_UInt32  res8:12;
    };
}hdmi_p2_hdcp_2p2_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  bch_err2_cnt:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  irq_fn_compare_fail_en:1;
        RBus_UInt32  irq_crc_fail_en:1;
        RBus_UInt32  irq_no_cp_packet_en:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:1;
        RBus_UInt32  res10:1;
    };
}hdmi_p2_hdcp_2p2_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  res2:10;
    };
}hdmi_p2_hdcp_msap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  res2:8;
    };
}hdmi_p2_hdcp_msdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  enc_method:1;
        RBus_UInt32  fc:7;
    };
}hdmi_p2_hdcp_hoa_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpll_reg:2;
        RBus_UInt32  dpll_m:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  dpll_reser:4;
        RBus_UInt32  dpll_bpsin:1;
        RBus_UInt32  dpll_o:2;
        RBus_UInt32  res2:4;
        RBus_UInt32  dpll_n:3;
        RBus_UInt32  dpll_rs:3;
        RBus_UInt32  dpll_ip:4;
    };
}hdmi_p2_hdmi_vpllcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  dpll_cp:1;
        RBus_UInt32  dpll_seltst:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  dpll_vrefsel:1;
        RBus_UInt32  dpll_freeze_dsc:1;
        RBus_UInt32  dpll_ldo_pow:1;
        RBus_UInt32  dpll_ldo_sel:2;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  dpll_wdrst:1;
        RBus_UInt32  dpll_wdset:1;
        RBus_UInt32  dpll_rstb:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  dpll_freeze:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  dpll_pow:1;
    };
}hdmi_p2_hdmi_vpllcr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dpll_wdo:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  dpll_reloadm:1;
    };
}hdmi_p2_hdmi_vpllcr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sclkg_pll_in_sel:1;
        RBus_UInt32  sclkg_oclk_sel:2;
        RBus_UInt32  sclkg_dbuf:1;
        RBus_UInt32  dummy180b2410_3_0:4;
    };
}hdmi_p2_mn_sclkg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sclkg_pll_div2_en:1;
        RBus_UInt32  sclkg_pll_divs:7;
    };
}hdmi_p2_mn_sclkg_divs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pending:1;
        RBus_UInt32  dummy180b2500_24_16:9;
        RBus_UInt32  dummy180b2500_15:1;
        RBus_UInt32  no_md_check:1;
        RBus_UInt32  metadata_version_check:1;
        RBus_UInt32  metadata_type_check:1;
        RBus_UInt32  dummy180b2500_11:1;
        RBus_UInt32  det_con_enter:3;
        RBus_UInt32  dummy180b2500_7:1;
        RBus_UInt32  det_con_leave:3;
        RBus_UInt32  irq_det_chg_en:1;
        RBus_UInt32  dummy180b2500_2_1:2;
        RBus_UInt32  en:1;
    };
}hdmi_p2_mdd_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  frame_crc_result:1;
        RBus_UInt32  det_result_chg:1;
        RBus_UInt32  det_result:1;
    };
}hdmi_p2_mdd_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  application:32;
    };
}hdmi_p2_fw_func_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  offms_hd21_sel:1;
        RBus_UInt32  port_sel:2;
        RBus_UInt32  offms_port_sel:2;
    };
}hdmi_p2_port_switch_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ptg_clken:1;
    };
}hdmi_p2_power_saving_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  crc_res_sel:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  crc_auto_cmp_en:1;
        RBus_UInt32  crc_conti:1;
        RBus_UInt32  crc_start:1;
    };
}hdmi_p2_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}hdmi_p2_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_des:32;
    };
}hdmi_p2_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  crc_err_cnt:16;
    };
}hdmi_p2_crc_err_cnt0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  pixel_mode:1;
    };
}hdmi_p2_hdmi_20_21_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  res5:2;
    };
}hdmi_p2_ot_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  auto_gen_pulse_mode:1;
    };
}hdmi_p2_irq_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bist_mode:1;
    };
}hdmi_p2_mp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  fw_mode:1;
        RBus_UInt32  data:18;
    };
}hdmi_p2_hdmi_v_bypass_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  mp_data_out:1;
        RBus_UInt32  mp_check_and:1;
        RBus_UInt32  mp_check_or:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:2;
        RBus_UInt32  mp_mode:1;
    };
}hdmi_p2_hdmi_mp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  otpin:32;
    };
}hdmi_p2_debug_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  rstn_hdmi_common:1;
        RBus_UInt32  rstn_hdmi_pre3:1;
        RBus_UInt32  rstn_hdmi_pre2:1;
        RBus_UInt32  rstn_hdmi_pre1:1;
        RBus_UInt32  rstn_hdmi_pre0:1;
        RBus_UInt32  rstn_hdmi_hdcp_pre3:1;
        RBus_UInt32  rstn_hdmi_hdcp_pre2:1;
        RBus_UInt32  rstn_hdmi_hdcp_pre1:1;
        RBus_UInt32  rstn_hdmi_hdcp_pre0:1;
        RBus_UInt32  res2:21;
    };
}hdmi_p2_hdmi_rst0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  rstn_hd21_common:1;
        RBus_UInt32  rstn_hd21_pre3:1;
        RBus_UInt32  rstn_hd21_pre2:1;
        RBus_UInt32  rstn_hd21_pre1:1;
        RBus_UInt32  rstn_hd21_pre0:1;
        RBus_UInt32  rstn_hd21_hdcp_pre3:1;
        RBus_UInt32  rstn_hd21_hdcp_pre2:1;
        RBus_UInt32  rstn_hd21_hdcp_pre1:1;
        RBus_UInt32  rstn_hd21_hdcp_pre0:1;
        RBus_UInt32  res2:21;
    };
}hdmi_p2_hdmi_rst3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  clken_hdmi_common:1;
        RBus_UInt32  clken_hdmi_pre3:1;
        RBus_UInt32  clken_hdmi_pre2:1;
        RBus_UInt32  clken_hdmi_pre1:1;
        RBus_UInt32  clken_hdmi_pre0:1;
        RBus_UInt32  clken_hdmi_hdcp_pre3:1;
        RBus_UInt32  clken_hdmi_hdcp_pre2:1;
        RBus_UInt32  clken_hdmi_hdcp_pre1:1;
        RBus_UInt32  clken_hdmi_hdcp_pre0:1;
        RBus_UInt32  res2:21;
    };
}hdmi_p2_hdmi_clken0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  clken_hd21_common:1;
        RBus_UInt32  clken_hd21_pre3:1;
        RBus_UInt32  clken_hd21_pre2:1;
        RBus_UInt32  clken_hd21_pre1:1;
        RBus_UInt32  clken_hd21_pre0:1;
        RBus_UInt32  clken_hd21_hdcp_pre3:1;
        RBus_UInt32  clken_hd21_hdcp_pre2:1;
        RBus_UInt32  clken_hd21_hdcp_pre1:1;
        RBus_UInt32  clken_hd21_hdcp_pre0:1;
        RBus_UInt32  res2:21;
    };
}hdmi_p2_hdmi_clken3_RBUS;

#else //apply LITTLE_ENDIAN

//======HDMI_P1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2c_scdc_rst_n:1;
        RBus_UInt32  res1:31;
    };
}hdmi_p2_soft_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2c_scdc_clken:1;
        RBus_UInt32  res1:31;
    };
}hdmi_p2_soft_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crcc:1;
        RBus_UInt32  crcts:2;
        RBus_UInt32  crc_nonstable:1;
        RBus_UInt32  crc_done:1;
        RBus_UInt32  crc_b_en:1;
        RBus_UInt32  crc_g_en:1;
        RBus_UInt32  crc_r_en:1;
        RBus_UInt32  res1:24;
    };
}hdmi_p2_pp_tmds_crcc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crcob2_1:8;
        RBus_UInt32  crcob2_2:8;
        RBus_UInt32  crcob2_3:8;
        RBus_UInt32  res1:8;
    };
}hdmi_p2_pp_tmds_crco0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crcob2_4:8;
        RBus_UInt32  crcob2_5:8;
        RBus_UInt32  crcob2_6:8;
        RBus_UInt32  res1:8;
    };
}hdmi_p2_pp_tmds_crco1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b2014_2_0:3;
        RBus_UInt32  yo:1;
        RBus_UInt32  ho:1;
        RBus_UInt32  rcd:1;
        RBus_UInt32  gcd:1;
        RBus_UInt32  bcd:1;
        RBus_UInt32  end_phase:2;
        RBus_UInt32  res1:22;
    };
}hdmi_p2_tmds_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b2018_1_0:2;
        RBus_UInt32  cbus_dbg_cke:1;
        RBus_UInt32  focke:1;
        RBus_UInt32  ockie:1;
        RBus_UInt32  ocke:1;
        RBus_UInt32  tbcoe:1;
        RBus_UInt32  tgcoe:1;
        RBus_UInt32  trcoe:1;
        RBus_UInt32  aoe:1;
        RBus_UInt32  ocke_r:1;
        RBus_UInt32  tbcoe_r:1;
        RBus_UInt32  tgcoe_r:1;
        RBus_UInt32  trcoe_r:1;
        RBus_UInt32  res1:18;
    };
}hdmi_p2_tmds_outctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ebip:1;
        RBus_UInt32  egip:1;
        RBus_UInt32  erip:1;
        RBus_UInt32  ecc:1;
        RBus_UInt32  iccaf:1;
        RBus_UInt32  pnsw:1;
        RBus_UInt32  brcw:1;
        RBus_UInt32  deo:1;
        RBus_UInt32  hs_width_sel:1;
        RBus_UInt32  video_preamble_off_en:1;
        RBus_UInt32  dummy180b201c_27_10:18;
        RBus_UInt32  ebip_r:1;
        RBus_UInt32  egip_r:1;
        RBus_UInt32  erip_r:1;
        RBus_UInt32  ecc_r:1;
    };
}hdmi_p2_tmds_pwdctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hde:1;
        RBus_UInt32  res1:31;
    };
}hdmi_p2_tmds_z0cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b2024_1_0:2;
        RBus_UInt32  auto_dvi2hdmi:1;
        RBus_UInt32  clr_infoframe_dvi:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  de_inv_disable:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  no_clk_in:1;
        RBus_UInt32  pll_div2_en:1;
        RBus_UInt32  vd_pre_num:3;
        RBus_UInt32  pk_pre_num:3;
        RBus_UInt32  vd_gb_num:2;
        RBus_UInt32  pk_gb_num:2;
        RBus_UInt32  res3:12;
    };
}hdmi_p2_tmds_cps_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  dummy180b2028_3:1;
        RBus_UInt32  debug_sel:6;
        RBus_UInt32  res3:22;
    };
}hdmi_p2_tmds_udc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nl:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  dc:4;
        RBus_UInt32  res2:24;
    };
}hdmi_p2_tmds_errc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b2030_6_0:7;
        RBus_UInt32  tmds_bypass:1;
        RBus_UInt32  res1:24;
    };
}hdmi_p2_tmds_out_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmds_rout_l:8;
        RBus_UInt32  tmds_rout_h:8;
        RBus_UInt32  res1:16;
    };
}hdmi_p2_tmds_rout_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmds_gout_l:8;
        RBus_UInt32  tmds_gout_h:8;
        RBus_UInt32  res1:16;
    };
}hdmi_p2_tmds_gout_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmds_bout_l:8;
        RBus_UInt32  tmds_bout_h:8;
        RBus_UInt32  res1:16;
    };
}hdmi_p2_tmds_bout_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpc_cd:4;
        RBus_UInt32  dpc_pp:4;
        RBus_UInt32  dpc_default_ph:1;
        RBus_UInt32  dpc_pp_valid:1;
        RBus_UInt32  res1:22;
    };
}hdmi_p2_tmds_dpc0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpc_cd_fw:4;
        RBus_UInt32  dpc_pp_fw:4;
        RBus_UInt32  dpc_default_ph_fw:1;
        RBus_UInt32  dpc_pp_valid_fw:1;
        RBus_UInt32  dpc_auto:1;
        RBus_UInt32  dummy180b2044_15_11:5;
        RBus_UInt32  dpc_cd_chg_int_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dpc_cd_chg_flag:1;
        RBus_UInt32  res2:13;
    };
}hdmi_p2_tmds_dpc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  phase_clr_sel:1;
        RBus_UInt32  phase_clrcnt_in:3;
        RBus_UInt32  phase_errcnt_in:3;
        RBus_UInt32  dpc_en:1;
        RBus_UInt32  dpc_bypass_dis:1;
        RBus_UInt32  res1:23;
    };
}hdmi_p2_tmds_dpc_set0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  set_empty_noti:4;
        RBus_UInt32  set_full_noti:4;
        RBus_UInt32  res1:24;
    };
}hdmi_p2_tmds_dpc_set1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpc_fifo_err_flag:1;
        RBus_UInt32  dpc_phase_err_flag:1;
        RBus_UInt32  dpc_phase_ok:1;
        RBus_UInt32  clr_fifo_flag:1;
        RBus_UInt32  clr_phase_flag:1;
        RBus_UInt32  fifo_errcnt_in:3;
        RBus_UInt32  res1:24;
    };
}hdmi_p2_tmds_dpc_set2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dpc_fifo_under_xflag:1;
        RBus_UInt32  dpc_fifo_over_xflag:1;
        RBus_UInt32  dpc_fifo_under_flag:1;
        RBus_UInt32  dpc_fifo_over_flag:1;
        RBus_UInt32  res2:24;
    };
}hdmi_p2_tmds_dpc_set3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en:1;
        RBus_UInt32  mode:1;
        RBus_UInt32  ch_sel:2;
        RBus_UInt32  period:6;
        RBus_UInt32  reset:1;
        RBus_UInt32  irq_en:1;
        RBus_UInt32  disparity_reset_mode:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  thd:16;
    };
}hdmi_p2_video_bit_err_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bit_err_cnt_b:16;
        RBus_UInt32  bit_err_cnt_of_b:1;
        RBus_UInt32  bit_err_b:1;
        RBus_UInt32  bit_err_thd_b:1;
        RBus_UInt32  no_dis_reset_b:1;
        RBus_UInt32  ad_min_b:6;
        RBus_UInt32  ad_max_b:6;
    };
}hdmi_p2_video_bit_err_status_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bit_err_cnt_g:16;
        RBus_UInt32  bit_err_cnt_of_g:1;
        RBus_UInt32  bit_err_g:1;
        RBus_UInt32  bit_err_thd_g:1;
        RBus_UInt32  no_dis_reset_g:1;
        RBus_UInt32  ad_min_g:6;
        RBus_UInt32  ad_max_g:6;
    };
}hdmi_p2_video_bit_err_status_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bit_err_cnt_r:16;
        RBus_UInt32  bit_err_cnt_of_r:1;
        RBus_UInt32  bit_err_r:1;
        RBus_UInt32  bit_err_thd_r:1;
        RBus_UInt32  no_dis_reset_r:1;
        RBus_UInt32  ad_min_r:6;
        RBus_UInt32  ad_max_r:6;
    };
}hdmi_p2_video_bit_err_status_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  terc4_thd:16;
        RBus_UInt32  res1:16;
    };
}hdmi_p2_terc4_err_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  terc4_err_cnt_b:16;
        RBus_UInt32  terc4_err_cnt_of_b:1;
        RBus_UInt32  terc4_err_b:1;
        RBus_UInt32  terc4_err_thd_b:1;
        RBus_UInt32  res1:13;
    };
}hdmi_p2_terc4_err_status_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  terc4_err_cnt_g:16;
        RBus_UInt32  terc4_err_cnt_of_g:1;
        RBus_UInt32  terc4_err_g:1;
        RBus_UInt32  terc4_err_thd_g:1;
        RBus_UInt32  res1:13;
    };
}hdmi_p2_terc4_err_status_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  terc4_err_cnt_r:16;
        RBus_UInt32  terc4_err_cnt_of_r:1;
        RBus_UInt32  terc4_err_r:1;
        RBus_UInt32  terc4_err_thd_r:1;
        RBus_UInt32  res1:13;
    };
}hdmi_p2_terc4_err_status_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mode:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  avmute:1;
        RBus_UInt32  avmute_bg:1;
        RBus_UInt32  avmute_fw:1;
        RBus_UInt32  res6:23;
    };
}hdmi_p2_hdmi_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rsv0ps:1;
        RBus_UInt32  rsv1ps:1;
        RBus_UInt32  rsv2ps:1;
        RBus_UInt32  rsv3ps:1;
        RBus_UInt32  nps:1;
        RBus_UInt32  acpps:1;
        RBus_UInt32  isrc1ps:1;
        RBus_UInt32  gmps:1;
        RBus_UInt32  vsps:1;
        RBus_UInt32  fvsps:1;
        RBus_UInt32  dvsps:1;
        RBus_UInt32  hdr10pvsps:1;
        RBus_UInt32  avips:1;
        RBus_UInt32  spdps:1;
        RBus_UInt32  aps:1;
        RBus_UInt32  mpegps:1;
        RBus_UInt32  drmps:1;
        RBus_UInt32  acpps_v:1;
        RBus_UInt32  isrc1ps_v:1;
        RBus_UInt32  gmps_v:1;
        RBus_UInt32  vsps_v:1;
        RBus_UInt32  fvsps_v:1;
        RBus_UInt32  dvsps_v:1;
        RBus_UInt32  hdr10pvsps_v:1;
        RBus_UInt32  avips_v:1;
        RBus_UInt32  spdps_v:1;
        RBus_UInt32  aps_v:1;
        RBus_UInt32  mpegps_v:1;
        RBus_UInt32  drmps_v:1;
        RBus_UInt32  dummy180b2080_31_29:3;
    };
}hdmi_p2_hdmi_gpvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsps_rv:1;
        RBus_UInt32  dvsps_rv:1;
        RBus_UInt32  hdr10pvsps_rv:1;
        RBus_UInt32  drmps_rv:1;
        RBus_UInt32  dummy180b2084_31_4:28;
    };
}hdmi_p2_hdmi_gpvs1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  apss:9;
        RBus_UInt32  res1:23;
    };
}hdmi_p2_hdmi_psap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpss:8;
        RBus_UInt32  res1:24;
    };
}hdmi_p2_hdmi_psdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcddip:1;
        RBus_UInt32  cabs:1;
        RBus_UInt32  msmode:1;
        RBus_UInt32  mode:1;
        RBus_UInt32  packet_ignore:1;
        RBus_UInt32  dvi_reset_ds_cm_en:1;
        RBus_UInt32  no_vs_det_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  nval:8;
        RBus_UInt32  packet_header_parsing_mode:1;
        RBus_UInt32  res2:15;
    };
}hdmi_p2_hdmi_scr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pe:1;
        RBus_UInt32  bches2:1;
        RBus_UInt32  bches:1;
        RBus_UInt32  bche:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  bches2_irq_en:1;
        RBus_UInt32  bches2_airq_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:22;
    };
}hdmi_p2_hdmi_bchcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  ve:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  avmute_win_en:1;
        RBus_UInt32  avmute_flag:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:21;
    };
}hdmi_p2_hdmi_avmcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  icpvsb:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  aicpvsb:8;
        RBus_UInt32  res2:8;
    };
}hdmi_p2_hdmi_pamicr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pt0:8;
        RBus_UInt32  pt1:8;
        RBus_UInt32  pt2:8;
        RBus_UInt32  pt3:8;
    };
}hdmi_p2_hdmi_ptrsv1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pt0_oui_1st:8;
        RBus_UInt32  pt1_oui_1st:8;
        RBus_UInt32  pt2_oui_1st:8;
        RBus_UInt32  pt3_oui_1st:8;
    };
}hdmi_p2_hdmi_ptrsv2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pt0_recognize_oui_en:1;
        RBus_UInt32  pt1_recognize_oui_en:1;
        RBus_UInt32  pt2_recognize_oui_en:1;
        RBus_UInt32  pt3_recognize_oui_en:1;
        RBus_UInt32  res1:28;
    };
}hdmi_p2_hdmi_ptrsv3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvsef:32;
    };
}hdmi_p2_hdmi_pvgcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvs:32;
    };
}hdmi_p2_hdmi_pvsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dsc:4;
        RBus_UInt32  rs:1;
        RBus_UInt32  se:1;
        RBus_UInt32  eot:1;
        RBus_UInt32  eoi:1;
        RBus_UInt32  dsc_r:4;
        RBus_UInt32  prdsam:1;
        RBus_UInt32  field_decide_sel:1;
        RBus_UInt32  csc:3;
        RBus_UInt32  csam:1;
        RBus_UInt32  hdirq:1;
        RBus_UInt32  csc_r:3;
        RBus_UInt32  iclk_sel:2;
        RBus_UInt32  bg_gck:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  int_pro_chg_int_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  int_pro_chg_flag:1;
        RBus_UInt32  hdmi_field:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
    };
}hdmi_p2_hdmi_vcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mode:1;
        RBus_UInt32  pucnr:1;
        RBus_UInt32  res1:30;
    };
}hdmi_p2_hdmi_acrcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cts:20;
        RBus_UInt32  res1:12;
    };
}hdmi_p2_hdmi_acrsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  n:20;
        RBus_UInt32  res1:12;
    };
}hdmi_p2_hdmi_acrsr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vc:1;
        RBus_UInt32  avc:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  avmute:1;
        RBus_UInt32  aavmute:1;
        RBus_UInt32  pending:1;
        RBus_UInt32  apending:1;
        RBus_UInt32  irq_gen:1;
        RBus_UInt32  airq_gen:1;
        RBus_UInt32  res6:19;
    };
}hdmi_p2_hdmi_intcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gcp:1;
        RBus_UInt32  pe:1;
        RBus_UInt32  ngb:1;
        RBus_UInt32  natgb:1;
        RBus_UInt32  nalgb:1;
        RBus_UInt32  nvlgb:1;
        RBus_UInt32  res1:26;
    };
}hdmi_p2_hdmi_bcsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  fsif:1;
        RBus_UInt32  fsre:1;
        RBus_UInt32  res2:29;
    };
}hdmi_p2_hdmi_asr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  fbif:3;
        RBus_UInt32  res3:21;
    };
}hdmi_p2_hdmi_asr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdmi_vic:8;
        RBus_UInt32  hvf:3;
        RBus_UInt32  res1:21;
    };
}hdmi_p2_hdmi_video_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hdmi_3d_meta_present:1;
        RBus_UInt32  hdmi_3d_structure:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  hdmi_3d_metadata_type:3;
        RBus_UInt32  hdmi_3d_ext_data:4;
        RBus_UInt32  res3:16;
    };
}hdmi_p2_hdmi_3d_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ccbpc:4;
        RBus_UInt32  allm_mode:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  res6:17;
    };
}hdmi_p2_hdmi_fvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eotf:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  static_metadata_descriptor_id:3;
        RBus_UInt32  res2:25;
    };
}hdmi_p2_hdmi_drm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ackg_clr:1;
        RBus_UInt32  acp_clr:1;
        RBus_UInt32  isrc1_clr:1;
        RBus_UInt32  isrc2_clr:1;
        RBus_UInt32  gm_clr:1;
        RBus_UInt32  vs_info_clr:1;
        RBus_UInt32  fvs_info_clr:1;
        RBus_UInt32  dvs_info_clr:1;
        RBus_UInt32  hdr10pvs_info_clr:1;
        RBus_UInt32  avi_info_clr:1;
        RBus_UInt32  spd_info_clr:1;
        RBus_UInt32  audio_info_clr:1;
        RBus_UInt32  mpeg_info_clr:1;
        RBus_UInt32  drm_info_clr:1;
        RBus_UInt32  res1:18;
    };
}hdmi_p2_hdmi_pcmc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  apss:10;
        RBus_UInt32  res1:22;
    };
}hdmi_p2_hdrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpss:32;
    };
}hdmi_p2_hdrdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  em_hdr_last:1;
        RBus_UInt32  em_hdr_first:1;
        RBus_UInt32  em_hdr_new:1;
        RBus_UInt32  em_hdr_end:1;
        RBus_UInt32  em_hdr_discont:1;
        RBus_UInt32  em_hdr_timeout:1;
        RBus_UInt32  em_hdr_done_block:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  em_hdr_no:1;
        RBus_UInt32  res2:23;
    };
}hdmi_p2_hdr_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rec_em_hdr_irq_en:3;
        RBus_UInt32  em_err2_proc:1;
        RBus_UInt32  hdr_block_sel:1;
        RBus_UInt32  hdr_pkt_cnt_clr:1;
        RBus_UInt32  recognize_tag_en:1;
        RBus_UInt32  set_tag_lsb:8;
        RBus_UInt32  set_tag_msb:8;
        RBus_UInt32  org_id:8;
        RBus_UInt32  hdr_hd20_hd21_sel:1;
    };
}hdmi_p2_em_ct_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mode:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  em_timeout_frame:4;
        RBus_UInt32  res2:8;
        RBus_UInt32  end:15;
        RBus_UInt32  res3:1;
    };
}hdmi_p2_fapa_ct_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  apss:8;
        RBus_UInt32  res1:24;
    };
}hdmi_p2_hdmi_emap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpss:8;
        RBus_UInt32  res1:24;
    };
}hdmi_p2_hdmi_emdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  em_vrr_last:1;
        RBus_UInt32  em_vrr_first:1;
        RBus_UInt32  em_vrr_new:1;
        RBus_UInt32  em_vrr_end:1;
        RBus_UInt32  em_vrr_discont:1;
        RBus_UInt32  em_vrr_timeout:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  em_vrr_no:1;
        RBus_UInt32  res2:24;
    };
}hdmi_p2_vrrem_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rec_em_vrr_irq_en:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  vrr_clr:1;
        RBus_UInt32  res2:27;
    };
}hdmi_p2_hdmi_vrr_emc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  ncts_chg_irq:1;
        RBus_UInt32  en_ncts_chg_irq:1;
        RBus_UInt32  res3:28;
    };
}hdmi_p2_audio_sample_rate_change_irq_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hbr_audio_mode:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:29;
    };
}hdmi_p2_high_bit_rate_audio_packet_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  aud_en:1;
        RBus_UInt32  flat_en:1;
        RBus_UInt32  bch2_repeat_en:1;
        RBus_UInt32  sine_replace_en:1;
        RBus_UInt32  aud_cptest_en:1;
        RBus_UInt32  pck_aud_gated_en:1;
        RBus_UInt32  pck_hbr_aud_gated_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  aud_data_fw:18;
        RBus_UInt32  res2:6;
    };
}hdmi_p2_hdmi_audcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  aud_fifof:1;
        RBus_UInt32  aud_ch_mode:3;
        RBus_UInt32  res1:28;
    };
}hdmi_p2_hdmi_audsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clock_det_en:1;
        RBus_UInt32  clkv_meas_sel:2;
        RBus_UInt32  res1:29;
    };
}hdmi_p2_clkdetcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_in_target:1;
        RBus_UInt32  clk_in_target_irq_en:1;
        RBus_UInt32  dummy180b2128_3_2:2;
        RBus_UInt32  clk_chg_irq:1;
        RBus_UInt32  en_clk_chg_irq:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  clk_counter:12;
        RBus_UInt32  pop_out:1;
        RBus_UInt32  reset_counter:1;
        RBus_UInt32  res2:10;
    };
}hdmi_p2_clkdetsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dclk_cnt_end:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  dclk_cnt_start:12;
        RBus_UInt32  res2:4;
    };
}hdmi_p2_clk_setting_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  target_for_minimum_clk_counter:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  target_for_maximum_clk_counter:12;
        RBus_UInt32  res2:4;
    };
}hdmi_p2_clk_setting_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_counter_debounce:8;
        RBus_UInt32  clk_counter_err_threshold:4;
        RBus_UInt32  res1:20;
    };
}hdmi_p2_clk_setting_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prbs7_rxen:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  prbs_bit_err:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  prbs_err_cnt:4;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  prbs23_rxen:1;
        RBus_UInt32  res2:3;
    };
}hdmi_p2_prbs_r_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prbs7_rxen:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  prbs_bit_err:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  prbs_err_cnt:4;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  prbs23_rxen:1;
        RBus_UInt32  res2:3;
    };
}hdmi_p2_prbs_g_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prbs7_rxen:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  prbs_bit_err:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  prbs_err_cnt:4;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  prbs23_rxen:1;
        RBus_UInt32  res2:3;
    };
}hdmi_p2_prbs_b_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lgb_cal_en:1;
        RBus_UInt32  lgb_cal_conti:1;
        RBus_UInt32  channel_sel:2;
        RBus_UInt32  dvi_mode_sel:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cmp_value:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  preamble:4;
        RBus_UInt32  cmp_err_int_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  cmp_err_flag:1;
        RBus_UInt32  res4:1;
    };
}hdmi_p2_hdmi_leading_gb_cmp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_times:16;
        RBus_UInt32  cmp_err_cnt:16;
    };
}hdmi_p2_hdmi_leading_gb_cmp_times_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  preamble_cmp_cnt_by_frame:16;
        RBus_UInt32  preamble_cmp_cnt:16;
    };
}hdmi_p2_hdmi_leading_gb_cmp_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cts_up_bound:20;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  cts_over_flag:1;
    };
}hdmi_p2_audio_cts_up_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cts_low_bound:20;
        RBus_UInt32  res1:11;
        RBus_UInt32  cts_under_flag:1;
    };
}hdmi_p2_audio_cts_low_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  n_up_bound:20;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  n_over_flag:1;
    };
}hdmi_p2_audio_n_up_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  n_low_bound:20;
        RBus_UInt32  res1:11;
        RBus_UInt32  n_under_flag:1;
    };
}hdmi_p2_audio_n_low_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_ls:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  yuv420_ls0:1;
        RBus_UInt32  yuv420_ls1:1;
        RBus_UInt32  yuv420_ls2:1;
        RBus_UInt32  yuv420_ls3:1;
        RBus_UInt32  hdr_ls_0:1;
        RBus_UInt32  hdr_ls_1:1;
        RBus_UInt32  res5:4;
        RBus_UInt32  linebuf_ls0:1;
        RBus_UInt32  linebuf_ls1:1;
        RBus_UInt32  linebuf_ls2:1;
        RBus_UInt32  res6:14;
    };
}hdmi_p2_light_sleep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_rme:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  yuv420_rme0:1;
        RBus_UInt32  yuv420_rme1:1;
        RBus_UInt32  yuv420_rme2:1;
        RBus_UInt32  yuv420_rme3:1;
        RBus_UInt32  hdr_rmea_0:1;
        RBus_UInt32  hdr_rmea_1:1;
        RBus_UInt32  hdr_rmeb_0:1;
        RBus_UInt32  hdr_rmeb_1:1;
        RBus_UInt32  res5:8;
        RBus_UInt32  linebuf_rme0:1;
        RBus_UInt32  linebuf_rme1:1;
        RBus_UInt32  linebuf_rme2:1;
        RBus_UInt32  res6:8;
    };
}hdmi_p2_read_margin_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  linebuf_rm0:4;
        RBus_UInt32  linebuf_rm1:4;
        RBus_UInt32  linebuf_rm2:4;
        RBus_UInt32  linebuf_test1_0:1;
        RBus_UInt32  linebuf_test1_1:1;
        RBus_UInt32  linebuf_test1_2:1;
        RBus_UInt32  res1:17;
    };
}hdmi_p2_read_margin3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}hdmi_p2_read_margin2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  yuv420_rm0:4;
        RBus_UInt32  yuv420_rm1:4;
        RBus_UInt32  yuv420_rm2:4;
        RBus_UInt32  yuv420_rm3:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  yuv420_test1_0:1;
        RBus_UInt32  yuv420_test1_1:1;
        RBus_UInt32  yuv420_test1_2:1;
        RBus_UInt32  yuv420_test1_3:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  hdr_test1a_0:1;
        RBus_UInt32  hdr_test1b_0:1;
        RBus_UInt32  hdr_test1a_1:1;
        RBus_UInt32  hdr_test1b_1:1;
    };
}hdmi_p2_read_margin1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_rm:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  audio_test1_0:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  hdr_rma_0:4;
        RBus_UInt32  hdr_rma_1:4;
        RBus_UInt32  hdr_rmb_0:4;
        RBus_UInt32  hdr_rmb_1:4;
    };
}hdmi_p2_read_margin0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_bist_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  yuv420_bist_en:1;
        RBus_UInt32  hdr_bist_en:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  linebuf_bist_en:1;
        RBus_UInt32  res5:23;
    };
}hdmi_p2_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_bist_done:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  yuv420_bist_done:1;
        RBus_UInt32  hdr_bist_done:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  linebuf_bist_done:1;
        RBus_UInt32  res5:23;
    };
}hdmi_p2_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_bist_fail:1;
        RBus_UInt32  yuv420_bist_fail3:1;
        RBus_UInt32  yuv420_bist_fail2:1;
        RBus_UInt32  yuv420_bist_fail1:1;
        RBus_UInt32  yuv420_bist_fail0:1;
        RBus_UInt32  yuv420_bist_fail:1;
        RBus_UInt32  hdr_bist_fail1:1;
        RBus_UInt32  hdr_bist_fail0:1;
        RBus_UInt32  hdr_bist_fail:1;
        RBus_UInt32  linebuf_bist_fail2:1;
        RBus_UInt32  linebuf_bist_fail1:1;
        RBus_UInt32  linebuf_bist_fail0:1;
        RBus_UInt32  linebuf_bist_fail:1;
        RBus_UInt32  res1:19;
    };
}hdmi_p2_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_drf_mode:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  yuv420_drf_mode:1;
        RBus_UInt32  hdr_drf_mode:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  linebuf_drf_mode:1;
        RBus_UInt32  res5:23;
    };
}hdmi_p2_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_drf_resume:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  yuv420_drf_resume:1;
        RBus_UInt32  hdr_drf_resume:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  linebuf_drf_resume:1;
        RBus_UInt32  res5:23;
    };
}hdmi_p2_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_drf_done:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  yuv420_drf_done:1;
        RBus_UInt32  hdr_drf_done:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  linebuf_drf_done:1;
        RBus_UInt32  res5:23;
    };
}hdmi_p2_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_drf_pause:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  yuv420_drf_pause:1;
        RBus_UInt32  hdr_drf_pause:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  linebuf_drf_pause:1;
        RBus_UInt32  res5:23;
    };
}hdmi_p2_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  audio_drf_fail:1;
        RBus_UInt32  yuv420_drf_fail3:1;
        RBus_UInt32  yuv420_drf_fail2:1;
        RBus_UInt32  yuv420_drf_fail1:1;
        RBus_UInt32  yuv420_drf_fail0:1;
        RBus_UInt32  yuv420_drf_fail:1;
        RBus_UInt32  hdr_drf_fail1:1;
        RBus_UInt32  hdr_drf_fail0:1;
        RBus_UInt32  hdr_drf_fail:1;
        RBus_UInt32  linebuf_drf_fail2:1;
        RBus_UInt32  linebuf_drf_fail1:1;
        RBus_UInt32  linebuf_drf_fail0:1;
        RBus_UInt32  linebuf_drf_fail:1;
        RBus_UInt32  res1:19;
    };
}hdmi_p2_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port0_b_afifo_en:1;
        RBus_UInt32  port0_b_flush:1;
        RBus_UInt32  port0_g_afifo_en:1;
        RBus_UInt32  port0_g_flush:1;
        RBus_UInt32  port0_r_afifo_en:1;
        RBus_UInt32  port0_r_flush:1;
        RBus_UInt32  dummy180b2198_6:1;
        RBus_UInt32  port1_b_afifo_en:1;
        RBus_UInt32  port1_b_flush:1;
        RBus_UInt32  port1_g_afifo_en:1;
        RBus_UInt32  port1_g_flush:1;
        RBus_UInt32  port1_r_afifo_en:1;
        RBus_UInt32  port1_r_flush:1;
        RBus_UInt32  dummy180b2198_13:1;
        RBus_UInt32  port2_b_afifo_en:1;
        RBus_UInt32  port2_b_flush:1;
        RBus_UInt32  port2_g_afifo_en:1;
        RBus_UInt32  port2_g_flush:1;
        RBus_UInt32  port2_r_afifo_en:1;
        RBus_UInt32  port2_r_flush:1;
        RBus_UInt32  dummy180b2198_20:1;
        RBus_UInt32  port3_b_afifo_en:1;
        RBus_UInt32  port3_b_flush:1;
        RBus_UInt32  port3_g_afifo_en:1;
        RBus_UInt32  port3_g_flush:1;
        RBus_UInt32  port3_r_afifo_en:1;
        RBus_UInt32  port3_r_flush:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:3;
    };
}hdmi_p2_phy_fifo_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port0_bclk_inv:1;
        RBus_UInt32  port0_gclk_inv:1;
        RBus_UInt32  port0_rclk_inv:1;
        RBus_UInt32  port1_bclk_inv:1;
        RBus_UInt32  port1_gclk_inv:1;
        RBus_UInt32  port1_rclk_inv:1;
        RBus_UInt32  port2_bclk_inv:1;
        RBus_UInt32  port2_gclk_inv:1;
        RBus_UInt32  port2_rclk_inv:1;
        RBus_UInt32  port3_bclk_inv:1;
        RBus_UInt32  port3_gclk_inv:1;
        RBus_UInt32  port3_rclk_inv:1;
        RBus_UInt32  res1:20;
    };
}hdmi_p2_phy_fifo_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port0_b_rflush_flag:1;
        RBus_UInt32  port0_b_rudflow_flag:1;
        RBus_UInt32  port0_b_wovflow_flag:1;
        RBus_UInt32  port0_b_rwclk_det_timeout_flag:1;
        RBus_UInt32  port0_b_wrclk_det_timeout_flag:1;
        RBus_UInt32  port0_g_rflush_flag:1;
        RBus_UInt32  port0_g_rudflow_flag:1;
        RBus_UInt32  port0_g_wovflow_flag:1;
        RBus_UInt32  port0_g_rwclk_det_timeout_flag:1;
        RBus_UInt32  port0_g_wrclk_det_timeout_flag:1;
        RBus_UInt32  port0_r_rflush_flag:1;
        RBus_UInt32  port0_r_rudflow_flag:1;
        RBus_UInt32  port0_r_wovflow_flag:1;
        RBus_UInt32  port0_r_rwclk_det_timeout_flag:1;
        RBus_UInt32  port0_r_wrclk_det_timeout_flag:1;
        RBus_UInt32  port1_b_rflush_flag:1;
        RBus_UInt32  port1_b_rudflow_flag:1;
        RBus_UInt32  port1_b_wovflow_flag:1;
        RBus_UInt32  port1_b_rwclk_det_timeout_flag:1;
        RBus_UInt32  port1_b_wrclk_det_timeout_flag:1;
        RBus_UInt32  port1_g_rflush_flag:1;
        RBus_UInt32  port1_g_rudflow_flag:1;
        RBus_UInt32  port1_g_wovflow_flag:1;
        RBus_UInt32  port1_g_rwclk_det_timeout_flag:1;
        RBus_UInt32  port1_g_wrclk_det_timeout_flag:1;
        RBus_UInt32  port1_r_rflush_flag:1;
        RBus_UInt32  port1_r_rudflow_flag:1;
        RBus_UInt32  port1_r_wovflow_flag:1;
        RBus_UInt32  port1_r_rwclk_det_timeout_flag:1;
        RBus_UInt32  port1_r_wrclk_det_timeout_flag:1;
        RBus_UInt32  res1:2;
    };
}hdmi_p2_phy_fifo_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port2_b_rflush_flag:1;
        RBus_UInt32  port2_b_rudflow_flag:1;
        RBus_UInt32  port2_b_wovflow_flag:1;
        RBus_UInt32  port2_b_rwclk_det_timeout_flag:1;
        RBus_UInt32  port2_b_wrclk_det_timeout_flag:1;
        RBus_UInt32  port2_g_rflush_flag:1;
        RBus_UInt32  port2_g_rudflow_flag:1;
        RBus_UInt32  port2_g_wovflow_flag:1;
        RBus_UInt32  port2_g_rwclk_det_timeout_flag:1;
        RBus_UInt32  port2_g_wrclk_det_timeout_flag:1;
        RBus_UInt32  port2_r_rflush_flag:1;
        RBus_UInt32  port2_r_rudflow_flag:1;
        RBus_UInt32  port2_r_wovflow_flag:1;
        RBus_UInt32  port2_r_rwclk_det_timeout_flag:1;
        RBus_UInt32  port2_r_wrclk_det_timeout_flag:1;
        RBus_UInt32  port3_b_rflush_flag:1;
        RBus_UInt32  port3_b_rudflow_flag:1;
        RBus_UInt32  port3_b_wovflow_flag:1;
        RBus_UInt32  port3_b_rwclk_det_timeout_flag:1;
        RBus_UInt32  port3_b_wrclk_det_timeout_flag:1;
        RBus_UInt32  port3_g_rflush_flag:1;
        RBus_UInt32  port3_g_rudflow_flag:1;
        RBus_UInt32  port3_g_wovflow_flag:1;
        RBus_UInt32  port3_g_rwclk_det_timeout_flag:1;
        RBus_UInt32  port3_g_wrclk_det_timeout_flag:1;
        RBus_UInt32  port3_r_rflush_flag:1;
        RBus_UInt32  port3_r_rudflow_flag:1;
        RBus_UInt32  port3_r_wovflow_flag:1;
        RBus_UInt32  port3_r_rwclk_det_timeout_flag:1;
        RBus_UInt32  port3_r_wrclk_det_timeout_flag:1;
        RBus_UInt32  res1:2;
    };
}hdmi_p2_phy_fifo_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en_ctsfifo_bypass_hdmi:1;
        RBus_UInt32  en_ctsfifo_vsrst_hdmi:1;
        RBus_UInt32  force_ctsfifo_rstn_hdmi:1;
        RBus_UInt32  hdmi_out_sel:1;
        RBus_UInt32  mac_out_sel:1;
        RBus_UInt32  hdmi_test_sel:4;
        RBus_UInt32  hdmi_2x_out_sel:2;
        RBus_UInt32  offms_clock_sel:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  en_ctsfifo_toggle_hdmi:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  mhl_test_sel:1;
        RBus_UInt32  dbg_clk_freq_sel:1;
        RBus_UInt32  res3:10;
    };
}hdmi_p2_hdmi_cts_fifo_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_afifo_irq_en:1;
        RBus_UInt32  ch_afifo_airq_en:1;
        RBus_UInt32  flush:1;
        RBus_UInt32  dummy180b21ac_3:1;
        RBus_UInt32  udwater_thr:5;
        RBus_UInt32  dummy180b21ac_11_9:3;
        RBus_UInt32  rden_thr:5;
        RBus_UInt32  dummy180b21ac_19_17:3;
        RBus_UInt32  ch_sync_sel:2;
        RBus_UInt32  b_ch_afifo_en:1;
        RBus_UInt32  g_ch_afifo_en:1;
        RBus_UInt32  r_ch_afifo_en:1;
        RBus_UInt32  res1:7;
    };
}hdmi_p2_ch_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b_rw_water_lv:5;
        RBus_UInt32  b_rflush_flag:1;
        RBus_UInt32  b_wovflow_flag:1;
        RBus_UInt32  b_rudflow_flag:1;
        RBus_UInt32  g_rw_water_lv:5;
        RBus_UInt32  g_rflush_flag:1;
        RBus_UInt32  g_wovflow_flag:1;
        RBus_UInt32  g_rudflow_flag:1;
        RBus_UInt32  r_rw_water_lv:5;
        RBus_UInt32  r_rflush_flag:1;
        RBus_UInt32  r_wovflow_flag:1;
        RBus_UInt32  r_rudflow_flag:1;
        RBus_UInt32  b_wrclk_det_timeout_flag:1;
        RBus_UInt32  b_rwclk_det_timeout_flag:1;
        RBus_UInt32  g_wrclk_det_timeout_flag:1;
        RBus_UInt32  g_rwclk_det_timeout_flag:1;
        RBus_UInt32  r_wrclk_det_timeout_flag:1;
        RBus_UInt32  r_rwclk_det_timeout_flag:1;
        RBus_UInt32  rgb_de_align_flag:1;
        RBus_UInt32  res1:1;
    };
}hdmi_p2_ch_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdmi_2p0_en:1;
        RBus_UInt32  ctr_char_num:7;
        RBus_UInt32  gating_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  lfsr0:16;
    };
}hdmi_p2_hdmi_2p0_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lfsr1:16;
        RBus_UInt32  lfsr2:16;
    };
}hdmi_p2_hdmi_2p0_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scr_auto:1;
        RBus_UInt32  scr_en_fw:1;
        RBus_UInt32  dummy180b21bc_3_2:2;
        RBus_UInt32  uscr_num:4;
        RBus_UInt32  uscr_char_flag_b:1;
        RBus_UInt32  uscr_char_flag_g:1;
        RBus_UInt32  uscr_char_flag_r:1;
        RBus_UInt32  uscr_per_glitch_b:1;
        RBus_UInt32  uscr_per_glitch_g:1;
        RBus_UInt32  uscr_per_glitch_r:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  char_lock:1;
        RBus_UInt32  res4:14;
    };
}hdmi_p2_scr_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en:1;
        RBus_UInt32  mode:1;
        RBus_UInt32  ced_upd_num:3;
        RBus_UInt32  period:6;
        RBus_UInt32  reset:1;
        RBus_UInt32  refer_implem:1;
        RBus_UInt32  keep_err_det:1;
        RBus_UInt32  reset_err_det:1;
        RBus_UInt32  valid_reset:1;
        RBus_UInt32  max_err_num:10;
        RBus_UInt32  ch0_over_max_err_num:1;
        RBus_UInt32  ch1_over_max_err_num:1;
        RBus_UInt32  ch2_over_max_err_num:1;
        RBus_UInt32  ch_locked_reset:1;
        RBus_UInt32  scdc_ced_en:1;
        RBus_UInt32  err_cnt_sel:1;
    };
}hdmi_p2_cercr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  err_cnt0_video:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  err_cnt1_video:15;
        RBus_UInt32  res2:1;
    };
}hdmi_p2_cersr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  err_cnt2_video:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  err_cnt0_pkt:15;
        RBus_UInt32  res2:1;
    };
}hdmi_p2_cersr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  err_cnt1_pkt:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  err_cnt2_pkt:15;
        RBus_UInt32  res2:1;
    };
}hdmi_p2_cersr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  err_cnt0_ctr:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  err_cnt1_ctr:15;
        RBus_UInt32  res2:1;
    };
}hdmi_p2_cersr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  err_cnt2_ctr:15;
        RBus_UInt32  res1:17;
    };
}hdmi_p2_cersr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en:1;
        RBus_UInt32  dummy180b21d8_1:1;
        RBus_UInt32  dummy180b21d8_2:1;
        RBus_UInt32  fw_set_time:1;
        RBus_UInt32  fw_hblank:14;
        RBus_UInt32  fw_htotal:14;
    };
}hdmi_p2_yuv420_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mode:1;
        RBus_UInt32  vactive:13;
        RBus_UInt32  res1:18;
    };
}hdmi_p2_yuv420_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sta:13;
        RBus_UInt32  all_mode:1;
        RBus_UInt32  res1:18;
    };
}hdmi_p2_fapa_ct_tmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  oui_1st:8;
        RBus_UInt32  oui_2nd:8;
        RBus_UInt32  oui_3rd:8;
        RBus_UInt32  recognize_oui_en:1;
        RBus_UInt32  sync:1;
        RBus_UInt32  res1:6;
    };
}hdmi_p2_hdr_em_ct2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rec_em_vsem_irq_en:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  vsem_clr:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  recognize_tag_en:1;
        RBus_UInt32  set_tag_lsb:8;
        RBus_UInt32  set_tag_msb:8;
        RBus_UInt32  res3:8;
    };
}hdmi_p2_hdmi_vsem_emc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  oui_1st:8;
        RBus_UInt32  oui_2nd:8;
        RBus_UInt32  oui_3rd:8;
        RBus_UInt32  recognize_oui_en:1;
        RBus_UInt32  sync:1;
        RBus_UInt32  res1:6;
    };
}hdmi_p2_hdmi_vsem_emc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  em_vsem_last:1;
        RBus_UInt32  em_vsem_first:1;
        RBus_UInt32  em_vsem_new:1;
        RBus_UInt32  em_vsem_end:1;
        RBus_UInt32  em_vsem_discont:1;
        RBus_UInt32  em_vsem_timeout:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  em_vsem_no:1;
        RBus_UInt32  res2:24;
    };
}hdmi_p2_vsem_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ps_mode:1;
        RBus_UInt32  fw_mode:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  timer_cnt_end:22;
        RBus_UInt32  res2:6;
    };
}hdmi_p2_hd20_ps_ct_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwroff:1;
        RBus_UInt32  pwron:1;
        RBus_UInt32  res1:24;
        RBus_UInt32  res2:2;
        RBus_UInt32  irq_en_pwroff:1;
        RBus_UInt32  irq_en_pwron:1;
        RBus_UInt32  res3:2;
    };
}hdmi_p2_hd20_ps_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irq_fw_all_0:1;
        RBus_UInt32  res1:31;
    };
}hdmi_p2_irq_all_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt:15;
        RBus_UInt32  res1:17;
    };
}hdmi_p2_xtal_1ms_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt:19;
        RBus_UInt32  res1:13;
    };
}hdmi_p2_xtal_10ms_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en:1;
        RBus_UInt32  res1:31;
    };
}hdmi_p2_ps_measure_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs2vs_cycle_count:22;
        RBus_UInt32  res1:10;
    };
}hdmi_p2_ps_measure_xtal_clk_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  last_pixel2vs_count:27;
        RBus_UInt32  res1:5;
    };
}hdmi_p2_ps_measure_tmds_clk_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  keepout_window_start:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  keepout_window_end:9;
        RBus_UInt32  res2:3;
        RBus_UInt32  rc_err:1;
        RBus_UInt32  non_ctl_err:1;
        RBus_UInt32  res3:6;
    };
}hdmi_p2_hdcp_keepout_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  ivspm:1;
        RBus_UInt32  invvs:1;
        RBus_UInt32  ivsp:1;
        RBus_UInt32  rpt:1;
        RBus_UInt32  namfe:1;
        RBus_UInt32  hdcp_clk_sel_fw:1;
        RBus_UInt32  hdcp_clk_switch_auto:1;
        RBus_UInt32  enc_window_start:10;
        RBus_UInt32  enc_window_end:9;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
    };
}hdmi_p2_hdcp_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  win_opp_mode:1;
        RBus_UInt32  enc_window_de2vs:27;
        RBus_UInt32  res1:4;
    };
}hdmi_p2_hdcp_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  avmute_dis:1;
        RBus_UInt32  enc_tog:1;
        RBus_UInt32  hdcp_vs_sel:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  dvi_enc_mode:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  tune_range:7;
        RBus_UInt32  tune_up_down:1;
        RBus_UInt32  res7:2;
        RBus_UInt32  res8:4;
        RBus_UInt32  res9:4;
        RBus_UInt32  res10:3;
        RBus_UInt32  res11:1;
    };
}hdmi_p2_hdcp_pcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b2310_0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:23;
    };
}hdmi_p2_hdcp_flag1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b2314_0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:23;
    };
}hdmi_p2_hdcp_flag2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  res2:10;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:13;
    };
}hdmi_p2_hdcp_ap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  res2:24;
    };
}hdmi_p2_hdcp_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:1;
        RBus_UInt32  res10:1;
        RBus_UInt32  res11:1;
        RBus_UInt32  res12:1;
        RBus_UInt32  res13:12;
        RBus_UInt32  ks_encoded:1;
        RBus_UInt32  apply_cp_fn:1;
        RBus_UInt32  fn_auto_inc:1;
        RBus_UInt32  res14:1;
        RBus_UInt32  aes_engine_sel:1;
        RBus_UInt32  dummy180b2320_31_29:3;
    };
}hdmi_p2_hdcp_2p2_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ks:32;
    };
}hdmi_p2_hdcp_2p2_ks0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ks:32;
    };
}hdmi_p2_hdcp_2p2_ks1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ks:32;
    };
}hdmi_p2_hdcp_2p2_ks2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ks:32;
    };
}hdmi_p2_hdcp_2p2_ks3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lc:32;
    };
}hdmi_p2_hdcp_2p2_lc0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lc:32;
    };
}hdmi_p2_hdcp_2p2_lc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lc:32;
    };
}hdmi_p2_hdcp_2p2_lc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lc:32;
    };
}hdmi_p2_hdcp_2p2_lc3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  riv:32;
    };
}hdmi_p2_hdcp_2p2_riv0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  riv:32;
    };
}hdmi_p2_hdcp_2p2_riv1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  aes_uf:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  irq_no_cp_packet:1;
        RBus_UInt32  irq_crc_fail:1;
        RBus_UInt32  irq_fn_compare_fail:1;
        RBus_UInt32  frame_number:8;
        RBus_UInt32  res8:2;
    };
}hdmi_p2_hdcp_2p2_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  irq_no_cp_packet_en:1;
        RBus_UInt32  irq_crc_fail_en:1;
        RBus_UInt32  irq_fn_compare_fail_en:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:1;
        RBus_UInt32  bch_err2_cnt:7;
        RBus_UInt32  res10:13;
    };
}hdmi_p2_hdcp_2p2_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  res2:22;
    };
}hdmi_p2_hdcp_msap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  res2:24;
    };
}hdmi_p2_hdcp_msdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fc:7;
        RBus_UInt32  enc_method:1;
        RBus_UInt32  res1:24;
    };
}hdmi_p2_hdcp_hoa_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpll_ip:4;
        RBus_UInt32  dpll_rs:3;
        RBus_UInt32  dpll_n:3;
        RBus_UInt32  res1:4;
        RBus_UInt32  dpll_o:2;
        RBus_UInt32  dpll_bpsin:1;
        RBus_UInt32  dpll_reser:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  dpll_m:8;
        RBus_UInt32  dpll_reg:2;
    };
}hdmi_p2_hdmi_vpllcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpll_pow:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dpll_freeze:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dpll_rstb:1;
        RBus_UInt32  dpll_wdset:1;
        RBus_UInt32  dpll_wdrst:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  dpll_ldo_sel:2;
        RBus_UInt32  dpll_ldo_pow:1;
        RBus_UInt32  dpll_freeze_dsc:1;
        RBus_UInt32  dpll_vrefsel:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:3;
        RBus_UInt32  dpll_seltst:2;
        RBus_UInt32  dpll_cp:1;
        RBus_UInt32  res8:10;
    };
}hdmi_p2_hdmi_vpllcr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpll_reloadm:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  dpll_wdo:1;
        RBus_UInt32  res4:24;
    };
}hdmi_p2_hdmi_vpllcr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b2410_3_0:4;
        RBus_UInt32  sclkg_dbuf:1;
        RBus_UInt32  sclkg_oclk_sel:2;
        RBus_UInt32  sclkg_pll_in_sel:1;
        RBus_UInt32  res1:24;
    };
}hdmi_p2_mn_sclkg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sclkg_pll_divs:7;
        RBus_UInt32  sclkg_pll_div2_en:1;
        RBus_UInt32  res1:24;
    };
}hdmi_p2_mn_sclkg_divs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en:1;
        RBus_UInt32  dummy180b2500_2_1:2;
        RBus_UInt32  irq_det_chg_en:1;
        RBus_UInt32  det_con_leave:3;
        RBus_UInt32  dummy180b2500_7:1;
        RBus_UInt32  det_con_enter:3;
        RBus_UInt32  dummy180b2500_11:1;
        RBus_UInt32  metadata_type_check:1;
        RBus_UInt32  metadata_version_check:1;
        RBus_UInt32  no_md_check:1;
        RBus_UInt32  dummy180b2500_15:1;
        RBus_UInt32  dummy180b2500_24_16:9;
        RBus_UInt32  pending:1;
        RBus_UInt32  res1:6;
    };
}hdmi_p2_mdd_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  det_result:1;
        RBus_UInt32  det_result_chg:1;
        RBus_UInt32  frame_crc_result:1;
        RBus_UInt32  res1:29;
    };
}hdmi_p2_mdd_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  application:32;
    };
}hdmi_p2_fw_func_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  offms_port_sel:2;
        RBus_UInt32  port_sel:2;
        RBus_UInt32  offms_hd21_sel:1;
        RBus_UInt32  res1:27;
    };
}hdmi_p2_port_switch_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_clken:1;
        RBus_UInt32  res1:31;
    };
}hdmi_p2_power_saving_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_start:1;
        RBus_UInt32  crc_conti:1;
        RBus_UInt32  crc_auto_cmp_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  crc_res_sel:4;
        RBus_UInt32  res2:24;
    };
}hdmi_p2_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}hdmi_p2_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_des:32;
    };
}hdmi_p2_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_err_cnt:16;
        RBus_UInt32  res1:16;
    };
}hdmi_p2_crc_err_cnt0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pixel_mode:1;
        RBus_UInt32  res1:31;
    };
}hdmi_p2_hdmi_20_21_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  res5:24;
    };
}hdmi_p2_ot_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  auto_gen_pulse_mode:1;
        RBus_UInt32  res1:31;
    };
}hdmi_p2_irq_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_mode:1;
        RBus_UInt32  res1:31;
    };
}hdmi_p2_mp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data:18;
        RBus_UInt32  fw_mode:1;
        RBus_UInt32  res1:13;
    };
}hdmi_p2_hdmi_v_bypass_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mp_mode:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  mp_check_or:1;
        RBus_UInt32  mp_check_and:1;
        RBus_UInt32  mp_data_out:1;
        RBus_UInt32  res5:23;
    };
}hdmi_p2_hdmi_mp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  otpin:32;
    };
}hdmi_p2_debug_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  rstn_hdmi_hdcp_pre0:1;
        RBus_UInt32  rstn_hdmi_hdcp_pre1:1;
        RBus_UInt32  rstn_hdmi_hdcp_pre2:1;
        RBus_UInt32  rstn_hdmi_hdcp_pre3:1;
        RBus_UInt32  rstn_hdmi_pre0:1;
        RBus_UInt32  rstn_hdmi_pre1:1;
        RBus_UInt32  rstn_hdmi_pre2:1;
        RBus_UInt32  rstn_hdmi_pre3:1;
        RBus_UInt32  rstn_hdmi_common:1;
        RBus_UInt32  res2:2;
    };
}hdmi_p2_hdmi_rst0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  rstn_hd21_hdcp_pre0:1;
        RBus_UInt32  rstn_hd21_hdcp_pre1:1;
        RBus_UInt32  rstn_hd21_hdcp_pre2:1;
        RBus_UInt32  rstn_hd21_hdcp_pre3:1;
        RBus_UInt32  rstn_hd21_pre0:1;
        RBus_UInt32  rstn_hd21_pre1:1;
        RBus_UInt32  rstn_hd21_pre2:1;
        RBus_UInt32  rstn_hd21_pre3:1;
        RBus_UInt32  rstn_hd21_common:1;
        RBus_UInt32  res2:2;
    };
}hdmi_p2_hdmi_rst3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  clken_hdmi_hdcp_pre0:1;
        RBus_UInt32  clken_hdmi_hdcp_pre1:1;
        RBus_UInt32  clken_hdmi_hdcp_pre2:1;
        RBus_UInt32  clken_hdmi_hdcp_pre3:1;
        RBus_UInt32  clken_hdmi_pre0:1;
        RBus_UInt32  clken_hdmi_pre1:1;
        RBus_UInt32  clken_hdmi_pre2:1;
        RBus_UInt32  clken_hdmi_pre3:1;
        RBus_UInt32  clken_hdmi_common:1;
        RBus_UInt32  res2:2;
    };
}hdmi_p2_hdmi_clken0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  clken_hd21_hdcp_pre0:1;
        RBus_UInt32  clken_hd21_hdcp_pre1:1;
        RBus_UInt32  clken_hd21_hdcp_pre2:1;
        RBus_UInt32  clken_hd21_hdcp_pre3:1;
        RBus_UInt32  clken_hd21_pre0:1;
        RBus_UInt32  clken_hd21_pre1:1;
        RBus_UInt32  clken_hd21_pre2:1;
        RBus_UInt32  clken_hd21_pre3:1;
        RBus_UInt32  clken_hd21_common:1;
        RBus_UInt32  res2:2;
    };
}hdmi_p2_hdmi_clken3_RBUS;




#endif 


#endif 
