/**
* @file Merlin5-DesignSpec-P1_FEC
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_HDMI21_P1_FEC_REG_H_
#define _RBUS_HDMI21_P1_FEC_REG_H_

#include "rbus_types.h"



//  HDMI21_P1_FEC Register Address
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0                                          0x180B9500
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_reg_addr                                  "0xB80B9500"
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_reg                                       0xB80B9500
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_inst_addr                                 "0x0000"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_RS_0_reg(data)                             (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_0_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_RS_0_reg                                   (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_0_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_rs_dc_en_shift                            (7)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_rs_bypass_shift                           (6)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_rs_cnt_en_shift                           (5)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_rs_cnt_keep_shift                         (4)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_rs_cnt_valid_shift                        (3)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_dummy_2_0_shift                           (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_rs_dc_en_mask                             (0x00000080)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_rs_bypass_mask                            (0x00000040)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_rs_cnt_en_mask                            (0x00000020)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_rs_cnt_keep_mask                          (0x00000010)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_rs_cnt_valid_mask                         (0x00000008)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_dummy_2_0_mask                            (0x00000007)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_rs_dc_en(data)                            (0x00000080&((data)<<7))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_rs_bypass(data)                           (0x00000040&((data)<<6))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_rs_cnt_en(data)                           (0x00000020&((data)<<5))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_rs_cnt_keep(data)                         (0x00000010&((data)<<4))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_rs_cnt_valid(data)                        (0x00000008&((data)<<3))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_dummy_2_0(data)                           (0x00000007&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_get_rs_dc_en(data)                        ((0x00000080&(data))>>7)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_get_rs_bypass(data)                       ((0x00000040&(data))>>6)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_get_rs_cnt_en(data)                       ((0x00000020&(data))>>5)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_get_rs_cnt_keep(data)                     ((0x00000010&(data))>>4)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_get_rs_cnt_valid(data)                    ((0x00000008&(data))>>3)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_0_get_dummy_2_0(data)                       (0x00000007&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_RS_1                                          0x180B9504
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_1_reg_addr                                  "0xB80B9504"
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_1_reg                                       0xB80B9504
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_1_inst_addr                                 "0x0001"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_RS_1_reg(data)                             (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_1_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_RS_1_reg                                   (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_1_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_1_rs_clk_1s_sel_shift                       (7)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_1_rs_clk_1m_div_shift                       (3)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_1_dummy_2_0_shift                           (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_1_rs_clk_1s_sel_mask                        (0x00000080)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_1_rs_clk_1m_div_mask                        (0x00000078)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_1_dummy_2_0_mask                            (0x00000007)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_1_rs_clk_1s_sel(data)                       (0x00000080&((data)<<7))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_1_rs_clk_1m_div(data)                       (0x00000078&((data)<<3))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_1_dummy_2_0(data)                           (0x00000007&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_1_get_rs_clk_1s_sel(data)                   ((0x00000080&(data))>>7)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_1_get_rs_clk_1m_div(data)                   ((0x00000078&(data))>>3)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_1_get_dummy_2_0(data)                       (0x00000007&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_RS_2                                          0x180B9508
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_2_reg_addr                                  "0xB80B9508"
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_2_reg                                       0xB80B9508
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_2_inst_addr                                 "0x0002"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_RS_2_reg(data)                             (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_2_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_RS_2_reg                                   (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_2_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_2_dummy_7_0_shift                           (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_2_dummy_7_0_mask                            (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_2_dummy_7_0(data)                           (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_2_get_dummy_7_0(data)                       (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3                                          0x180B950C
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_reg_addr                                  "0xB80B950C"
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_reg                                       0xB80B950C
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_inst_addr                                 "0x0003"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_RS_3_reg(data)                             (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_3_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_RS_3_reg                                   (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_3_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_rsed_upd_en_shift                         (7)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_rsed_upd_num_shift                        (4)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_rsed_upd_once_shift                       (3)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_rsed_upd_ie_shift                         (2)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_rsed_upd_shift                            (1)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_dummy_0_shift                             (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_rsed_upd_en_mask                          (0x00000080)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_rsed_upd_num_mask                         (0x00000070)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_rsed_upd_once_mask                        (0x00000008)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_rsed_upd_ie_mask                          (0x00000004)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_rsed_upd_mask                             (0x00000002)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_dummy_0_mask                              (0x00000001)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_rsed_upd_en(data)                         (0x00000080&((data)<<7))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_rsed_upd_num(data)                        (0x00000070&((data)<<4))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_rsed_upd_once(data)                       (0x00000008&((data)<<3))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_rsed_upd_ie(data)                         (0x00000004&((data)<<2))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_rsed_upd(data)                            (0x00000002&((data)<<1))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_dummy_0(data)                             (0x00000001&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_get_rsed_upd_en(data)                     ((0x00000080&(data))>>7)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_get_rsed_upd_num(data)                    ((0x00000070&(data))>>4)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_get_rsed_upd_once(data)                   ((0x00000008&(data))>>3)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_get_rsed_upd_ie(data)                     ((0x00000004&(data))>>2)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_get_rsed_upd(data)                        ((0x00000002&(data))>>1)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_3_get_dummy_0(data)                         (0x00000001&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_0                                       0x180B9510
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_0_reg_addr                               "0xB80B9510"
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_0_reg                                    0xB80B9510
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_0_inst_addr                              "0x0004"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_FW_RS_0_reg(data)                          (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FW_RS_0_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_FW_RS_0_reg                                (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FW_RS_0_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_0_fw_rs_corr_cnt_l0_shift                (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_0_fw_rs_corr_cnt_l0_mask                 (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_0_fw_rs_corr_cnt_l0(data)                (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_0_get_fw_rs_corr_cnt_l0(data)            (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_1                                       0x180B9514
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_1_reg_addr                               "0xB80B9514"
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_1_reg                                    0xB80B9514
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_1_inst_addr                              "0x0005"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_FW_RS_1_reg(data)                          (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FW_RS_1_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_FW_RS_1_reg                                (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FW_RS_1_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_1_fw_rs_corr_cnt_l1_shift                (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_1_fw_rs_corr_cnt_l1_mask                 (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_1_fw_rs_corr_cnt_l1(data)                (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_1_get_fw_rs_corr_cnt_l1(data)            (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_2                                       0x180B9518
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_2_reg_addr                               "0xB80B9518"
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_2_reg                                    0xB80B9518
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_2_inst_addr                              "0x0006"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_FW_RS_2_reg(data)                          (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FW_RS_2_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_FW_RS_2_reg                                (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FW_RS_2_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_2_fw_rs_corr_cnt_l2_shift                (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_2_fw_rs_corr_cnt_l2_mask                 (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_2_fw_rs_corr_cnt_l2(data)                (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_2_get_fw_rs_corr_cnt_l2(data)            (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_3                                       0x180B951C
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_3_reg_addr                               "0xB80B951C"
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_3_reg                                    0xB80B951C
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_3_inst_addr                              "0x0007"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_FW_RS_3_reg(data)                          (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FW_RS_3_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_FW_RS_3_reg                                (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FW_RS_3_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_3_fw_rs_corr_cnt_l3_shift                (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_3_fw_rs_corr_cnt_l3_mask                 (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_3_fw_rs_corr_cnt_l3(data)                (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_3_get_fw_rs_corr_cnt_l3(data)            (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_4                                       0x180B9520
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_4_reg_addr                               "0xB80B9520"
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_4_reg                                    0xB80B9520
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_4_inst_addr                              "0x0008"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_FW_RS_4_reg(data)                          (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FW_RS_4_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_FW_RS_4_reg                                (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FW_RS_4_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_4_fw_rs_corr_th_shift                    (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_4_fw_rs_corr_th_mask                     (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_4_fw_rs_corr_th(data)                    (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_4_get_fw_rs_corr_th(data)                (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5                                       0x180B9524
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_reg_addr                               "0xB80B9524"
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_reg                                    0xB80B9524
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_inst_addr                              "0x0009"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_reg(data)                          (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_reg                                (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_cnt_en_shift                     (7)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_cnt_ie_shift                     (6)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_l0_shift                         (5)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_l1_shift                         (4)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_l2_shift                         (3)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_l3_shift                         (2)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_cnt_md_shift                     (1)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_dummy_0_shift                          (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_cnt_en_mask                      (0x00000080)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_cnt_ie_mask                      (0x00000040)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_l0_mask                          (0x00000020)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_l1_mask                          (0x00000010)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_l2_mask                          (0x00000008)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_l3_mask                          (0x00000004)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_cnt_md_mask                      (0x00000002)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_dummy_0_mask                           (0x00000001)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_cnt_en(data)                     (0x00000080&((data)<<7))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_cnt_ie(data)                     (0x00000040&((data)<<6))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_l0(data)                         (0x00000020&((data)<<5))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_l1(data)                         (0x00000010&((data)<<4))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_l2(data)                         (0x00000008&((data)<<3))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_l3(data)                         (0x00000004&((data)<<2))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_fw_rs_cnt_md(data)                     (0x00000002&((data)<<1))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_dummy_0(data)                          (0x00000001&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_get_fw_rs_cnt_en(data)                 ((0x00000080&(data))>>7)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_get_fw_rs_cnt_ie(data)                 ((0x00000040&(data))>>6)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_get_fw_rs_l0(data)                     ((0x00000020&(data))>>5)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_get_fw_rs_l1(data)                     ((0x00000010&(data))>>4)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_get_fw_rs_l2(data)                     ((0x00000008&(data))>>3)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_get_fw_rs_l3(data)                     ((0x00000004&(data))>>2)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_get_fw_rs_cnt_md(data)                 ((0x00000002&(data))>>1)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_5_get_dummy_0(data)                      (0x00000001&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6                                       0x180B9528
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_reg_addr                               "0xB80B9528"
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_reg                                    0xB80B9528
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_inst_addr                              "0x000A"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_reg(data)                          (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_reg                                (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_dummy_7_3_shift                        (3)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_fw_rs_cnt_done_shift                   (2)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_fw_rs_cnt_period_shift                 (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_dummy_7_3_mask                         (0x000000F8)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_fw_rs_cnt_done_mask                    (0x00000004)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_fw_rs_cnt_period_mask                  (0x00000003)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_dummy_7_3(data)                        (0x000000F8&((data)<<3))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_fw_rs_cnt_done(data)                   (0x00000004&((data)<<2))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_fw_rs_cnt_period(data)                 (0x00000003&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_get_dummy_7_3(data)                    ((0x000000F8&(data))>>3)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_get_fw_rs_cnt_done(data)               ((0x00000004&(data))>>2)
#define  HDMI21_P1_FEC_FEC_HDMI21_FW_RS_6_get_fw_rs_cnt_period(data)             (0x00000003&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_1                                        0x180B952C
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_reg_addr                                "0xB80B952C"
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_reg                                     0xB80B952C
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_inst_addr                               "0x000B"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_reg(data)                           (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_reg                                 (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_lfsr_chk_en_shift                       (7)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_lfsr_fail_shift                         (6)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_map_type_shift                          (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_lfsr_chk_en_mask                        (0x00000080)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_lfsr_fail_mask                          (0x00000040)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_map_type_mask                           (0x0000003F)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_lfsr_chk_en(data)                       (0x00000080&((data)<<7))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_lfsr_fail(data)                         (0x00000040&((data)<<6))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_map_type(data)                          (0x0000003F&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_get_lfsr_chk_en(data)                   ((0x00000080&(data))>>7)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_get_lfsr_fail(data)                     ((0x00000040&(data))>>6)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_1_get_map_type(data)                      (0x0000003F&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_2                                        0x180B9530
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_reg_addr                                "0xB80B9530"
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_reg                                     0xB80B9530
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_inst_addr                               "0x000C"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_reg(data)                           (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_reg                                 (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_lfsr_chk_done_shift                     (7)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_lfsr_chk_num_shift                      (4)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_dummy_3_0_shift                         (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_lfsr_chk_done_mask                      (0x00000080)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_lfsr_chk_num_mask                       (0x00000070)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_dummy_3_0_mask                          (0x0000000F)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_lfsr_chk_done(data)                     (0x00000080&((data)<<7))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_lfsr_chk_num(data)                      (0x00000070&((data)<<4))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_dummy_3_0(data)                         (0x0000000F&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_get_lfsr_chk_done(data)                 ((0x00000080&(data))>>7)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_get_lfsr_chk_num(data)                  ((0x00000070&(data))>>4)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_2_get_dummy_3_0(data)                     (0x0000000F&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_3                                        0x180B9534
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_3_reg_addr                                "0xB80B9534"
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_3_reg                                     0xB80B9534
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_3_inst_addr                               "0x000D"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_LFSR_3_reg(data)                           (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_3_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_LFSR_3_reg                                 (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_3_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_3_lfsr_err_cnt_shift                      (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_3_lfsr_err_cnt_mask                       (0x00000FFF)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_3_lfsr_err_cnt(data)                      (0x00000FFF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_3_get_lfsr_err_cnt(data)                  (0x00000FFF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_4                                        0x180B9538
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_4_reg_addr                                "0xB80B9538"
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_4_reg                                     0xB80B9538
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_4_inst_addr                               "0x000E"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_LFSR_4_reg(data)                           (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_4_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_LFSR_4_reg                                 (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_4_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_4_lfsr1_seed_l_shift                      (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_4_lfsr1_seed_l_mask                       (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_4_lfsr1_seed_l(data)                      (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_4_get_lfsr1_seed_l(data)                  (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_5                                        0x180B953C
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_5_reg_addr                                "0xB80B953C"
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_5_reg                                     0xB80B953C
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_5_inst_addr                               "0x000F"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_LFSR_5_reg(data)                           (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_5_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_LFSR_5_reg                                 (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_5_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_5_lfsr1_seed_h_shift                      (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_5_lfsr1_seed_h_mask                       (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_5_lfsr1_seed_h(data)                      (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_5_get_lfsr1_seed_h(data)                  (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_6                                        0x180B9540
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_6_reg_addr                                "0xB80B9540"
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_6_reg                                     0xB80B9540
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_6_inst_addr                               "0x0010"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_LFSR_6_reg(data)                           (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_6_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_LFSR_6_reg                                 (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_6_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_6_lfsr2_seed_l_shift                      (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_6_lfsr2_seed_l_mask                       (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_6_lfsr2_seed_l(data)                      (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_6_get_lfsr2_seed_l(data)                  (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_7                                        0x180B9544
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_7_reg_addr                                "0xB80B9544"
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_7_reg                                     0xB80B9544
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_7_inst_addr                               "0x0011"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_LFSR_7_reg(data)                           (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_7_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_LFSR_7_reg                                 (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_7_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_7_lfsr2_seed_h_shift                      (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_7_lfsr2_seed_h_mask                       (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_7_lfsr2_seed_h(data)                      (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_7_get_lfsr2_seed_h(data)                  (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_8                                        0x180B9548
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_8_reg_addr                                "0xB80B9548"
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_8_reg                                     0xB80B9548
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_8_inst_addr                               "0x0012"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_LFSR_8_reg(data)                           (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_8_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_LFSR_8_reg                                 (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_8_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_8_lfsr3_seed_l_shift                      (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_8_lfsr3_seed_l_mask                       (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_8_lfsr3_seed_l(data)                      (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_8_get_lfsr3_seed_l(data)                  (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_9                                        0x180B954C
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_9_reg_addr                                "0xB80B954C"
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_9_reg                                     0xB80B954C
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_9_inst_addr                               "0x0013"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_LFSR_9_reg(data)                           (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_9_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_LFSR_9_reg                                 (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_9_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_9_lfsr3_seed_h_shift                      (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_9_lfsr3_seed_h_mask                       (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_9_lfsr3_seed_h(data)                      (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_9_get_lfsr3_seed_h(data)                  (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_10                                       0x180B9550
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_10_reg_addr                               "0xB80B9550"
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_10_reg                                    0xB80B9550
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_10_inst_addr                              "0x0014"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_LFSR_10_reg(data)                          (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_10_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_LFSR_10_reg                                (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_10_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_10_lfsr4_seed_l_shift                     (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_10_lfsr4_seed_l_mask                      (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_10_lfsr4_seed_l(data)                     (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_10_get_lfsr4_seed_l(data)                 (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_11                                       0x180B9554
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_11_reg_addr                               "0xB80B9554"
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_11_reg                                    0xB80B9554
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_11_inst_addr                              "0x0015"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_LFSR_11_reg(data)                          (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_11_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_LFSR_11_reg                                (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LFSR_11_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_11_lfsr4_seed_h_shift                     (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_11_lfsr4_seed_h_mask                      (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_11_lfsr4_seed_h(data)                     (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_LFSR_11_get_lfsr4_seed_h(data)                 (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0                                          0x180B9558
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_reg_addr                                  "0xB80B9558"
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_reg                                       0xB80B9558
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_inst_addr                                 "0x0016"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_DI_0_reg(data)                             (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_DI_0_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_DI_0_reg                                   (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_DI_0_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_digb_judge_shift                          (7)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_di_start_judge_shift                      (6)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_hs_polar_invert_shift                     (5)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_vs_polar_invert_shift                     (4)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_vs_polar_fw_mode_shift                    (3)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_dummy_2_0_shift                           (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_digb_judge_mask                           (0x00000080)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_di_start_judge_mask                       (0x00000040)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_hs_polar_invert_mask                      (0x00000020)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_vs_polar_invert_mask                      (0x00000010)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_vs_polar_fw_mode_mask                     (0x00000008)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_dummy_2_0_mask                            (0x00000007)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_digb_judge(data)                          (0x00000080&((data)<<7))
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_di_start_judge(data)                      (0x00000040&((data)<<6))
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_hs_polar_invert(data)                     (0x00000020&((data)<<5))
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_vs_polar_invert(data)                     (0x00000010&((data)<<4))
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_vs_polar_fw_mode(data)                    (0x00000008&((data)<<3))
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_dummy_2_0(data)                           (0x00000007&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_get_digb_judge(data)                      ((0x00000080&(data))>>7)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_get_di_start_judge(data)                  ((0x00000040&(data))>>6)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_get_hs_polar_invert(data)                 ((0x00000020&(data))>>5)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_get_vs_polar_invert(data)                 ((0x00000010&(data))>>4)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_get_vs_polar_fw_mode(data)                ((0x00000008&(data))>>3)
#define  HDMI21_P1_FEC_FEC_HDMI21_DI_0_get_dummy_2_0(data)                       (0x00000007&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0                                     0x180B955C
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_reg_addr                             "0xB80B955C"
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_reg                                  0xB80B955C
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_inst_addr                            "0x0017"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_reg(data)                        (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_reg                              (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_rs_fifo_save_shift                   (7)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_rs_fifo_ch_shift                     (5)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_dummy_4_1_shift                      (1)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_rs_save_done_shift                   (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_rs_fifo_save_mask                    (0x00000080)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_rs_fifo_ch_mask                      (0x00000060)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_dummy_4_1_mask                       (0x0000001E)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_rs_save_done_mask                    (0x00000001)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_rs_fifo_save(data)                   (0x00000080&((data)<<7))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_rs_fifo_ch(data)                     (0x00000060&((data)<<5))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_dummy_4_1(data)                      (0x0000001E&((data)<<1))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_rs_save_done(data)                   (0x00000001&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_get_rs_fifo_save(data)               ((0x00000080&(data))>>7)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_get_rs_fifo_ch(data)                 ((0x00000060&(data))>>5)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_get_dummy_4_1(data)                  ((0x0000001E&(data))>>1)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_0_get_rs_save_done(data)               (0x00000001&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_1                                     0x180B9560
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_1_reg_addr                             "0xB80B9560"
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_1_reg                                  0xB80B9560
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_1_inst_addr                            "0x0018"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_1_reg(data)                        (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_1_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_1_reg                              (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_1_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_1_rs_sram_addr_shift                   (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_1_rs_sram_addr_mask                    (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_1_rs_sram_addr(data)                   (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_1_get_rs_sram_addr(data)               (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_2                                     0x180B9564
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_2_reg_addr                             "0xB80B9564"
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_2_reg                                  0xB80B9564
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_2_inst_addr                            "0x0019"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_2_reg(data)                        (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_2_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_2_reg                              (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_2_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_2_rs_sram_data_shift                   (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_2_rs_sram_data_mask                    (0x0000FFFF)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_2_rs_sram_data(data)                   (0x0000FFFF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_2_get_rs_sram_data(data)               (0x0000FFFF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0                                0x180B956C
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_reg_addr                        "0xB80B956C"
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_reg                             0xB80B956C
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_inst_addr                       "0x001A"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_reg(data)                   (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_reg                         (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_bist_rst_n_rs_shift             (7)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_bist_mode_rs_shift              (6)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_drf_bist_mode_rs_shift          (5)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_drf_start_pause_rs_shift        (4)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_drf_test_resume_rs_shift        (3)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_rs_bist_clk_en_shift            (2)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_rs_cp_clk_en_shift              (1)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_dummy_0_shift                   (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_bist_rst_n_rs_mask              (0x00000080)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_bist_mode_rs_mask               (0x00000040)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_drf_bist_mode_rs_mask           (0x00000020)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_drf_start_pause_rs_mask         (0x00000010)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_drf_test_resume_rs_mask         (0x00000008)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_rs_bist_clk_en_mask             (0x00000004)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_rs_cp_clk_en_mask               (0x00000002)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_dummy_0_mask                    (0x00000001)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_bist_rst_n_rs(data)             (0x00000080&((data)<<7))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_bist_mode_rs(data)              (0x00000040&((data)<<6))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_drf_bist_mode_rs(data)          (0x00000020&((data)<<5))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_drf_start_pause_rs(data)        (0x00000010&((data)<<4))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_drf_test_resume_rs(data)        (0x00000008&((data)<<3))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_rs_bist_clk_en(data)            (0x00000004&((data)<<2))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_rs_cp_clk_en(data)              (0x00000002&((data)<<1))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_dummy_0(data)                   (0x00000001&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_get_bist_rst_n_rs(data)         ((0x00000080&(data))>>7)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_get_bist_mode_rs(data)          ((0x00000040&(data))>>6)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_get_drf_bist_mode_rs(data)      ((0x00000020&(data))>>5)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_get_drf_start_pause_rs(data)    ((0x00000010&(data))>>4)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_get_drf_test_resume_rs(data)    ((0x00000008&(data))>>3)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_get_rs_bist_clk_en(data)        ((0x00000004&(data))>>2)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_get_rs_cp_clk_en(data)          ((0x00000002&(data))>>1)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_0_get_dummy_0(data)               (0x00000001&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1                                0x180B9570
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_reg_addr                        "0xB80B9570"
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_reg                             0xB80B9570
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_inst_addr                       "0x001B"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_reg(data)                   (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_reg                         (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_done_rs_shift              (8)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_fail_rs_shift              (7)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_fail0_rs_shift             (6)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_fail1_rs_shift             (5)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_fail2_rs_shift             (4)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_fail3_rs_shift             (3)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_dummy_2_0_shift                 (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_done_rs_mask               (0x00000100)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_fail_rs_mask               (0x00000080)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_fail0_rs_mask              (0x00000040)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_fail1_rs_mask              (0x00000020)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_fail2_rs_mask              (0x00000010)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_fail3_rs_mask              (0x00000008)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_dummy_2_0_mask                  (0x00000007)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_done_rs(data)              (0x00000100&((data)<<8))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_fail_rs(data)              (0x00000080&((data)<<7))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_fail0_rs(data)             (0x00000040&((data)<<6))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_fail1_rs(data)             (0x00000020&((data)<<5))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_fail2_rs(data)             (0x00000010&((data)<<4))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_bist_fail3_rs(data)             (0x00000008&((data)<<3))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_dummy_2_0(data)                 (0x00000007&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_get_bist_done_rs(data)          ((0x00000100&(data))>>8)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_get_bist_fail_rs(data)          ((0x00000080&(data))>>7)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_get_bist_fail0_rs(data)         ((0x00000040&(data))>>6)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_get_bist_fail1_rs(data)         ((0x00000020&(data))>>5)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_get_bist_fail2_rs(data)         ((0x00000010&(data))>>4)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_get_bist_fail3_rs(data)         ((0x00000008&(data))>>3)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_1_get_dummy_2_0(data)             (0x00000007&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2                                0x180B9574
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_reg_addr                        "0xB80B9574"
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_reg                             0xB80B9574
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_inst_addr                       "0x001C"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_reg(data)                   (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_reg                         (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_done_rs_shift          (8)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_fail_rs_shift          (7)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_fail0_rs_shift         (6)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_fail1_rs_shift         (5)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_fail2_rs_shift         (4)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_fail3_rs_shift         (3)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_dummy_2_0_shift                 (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_done_rs_mask           (0x00000100)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_fail_rs_mask           (0x00000080)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_fail0_rs_mask          (0x00000040)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_fail1_rs_mask          (0x00000020)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_fail2_rs_mask          (0x00000010)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_fail3_rs_mask          (0x00000008)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_dummy_2_0_mask                  (0x00000007)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_done_rs(data)          (0x00000100&((data)<<8))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_fail_rs(data)          (0x00000080&((data)<<7))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_fail0_rs(data)         (0x00000040&((data)<<6))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_fail1_rs(data)         (0x00000020&((data)<<5))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_fail2_rs(data)         (0x00000010&((data)<<4))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_drf_bist_fail3_rs(data)         (0x00000008&((data)<<3))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_dummy_2_0(data)                 (0x00000007&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_get_drf_bist_done_rs(data)      ((0x00000100&(data))>>8)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_get_drf_bist_fail_rs(data)      ((0x00000080&(data))>>7)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_get_drf_bist_fail0_rs(data)     ((0x00000040&(data))>>6)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_get_drf_bist_fail1_rs(data)     ((0x00000020&(data))>>5)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_get_drf_bist_fail2_rs(data)     ((0x00000010&(data))>>4)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_get_drf_bist_fail3_rs(data)     ((0x00000008&(data))>>3)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_SRAM_BIST_2_get_dummy_2_0(data)             (0x00000007&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN                                0x180B9578
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_reg_addr                        "0xB80B9578"
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_reg                             0xB80B9578
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_inst_addr                       "0x001D"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_reg(data)                   (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_reg                         (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rmb3_shift                  (28)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rmb2_shift                  (24)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rmb1_shift                  (20)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rmb0_shift                  (16)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rma3_shift                  (12)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rma2_shift                  (8)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rma1_shift                  (4)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rma0_shift                  (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rmb3_mask                   (0xF0000000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rmb2_mask                   (0x0F000000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rmb1_mask                   (0x00F00000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rmb0_mask                   (0x000F0000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rma3_mask                   (0x0000F000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rma2_mask                   (0x00000F00)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rma1_mask                   (0x000000F0)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rma0_mask                   (0x0000000F)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rmb3(data)                  (0xF0000000&((data)<<28))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rmb2(data)                  (0x0F000000&((data)<<24))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rmb1(data)                  (0x00F00000&((data)<<20))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rmb0(data)                  (0x000F0000&((data)<<16))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rma3(data)                  (0x0000F000&((data)<<12))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rma2(data)                  (0x00000F00&((data)<<8))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rma1(data)                  (0x000000F0&((data)<<4))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_fec_rma0(data)                  (0x0000000F&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_get_fec_rmb3(data)              ((0xF0000000&(data))>>28)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_get_fec_rmb2(data)              ((0x0F000000&(data))>>24)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_get_fec_rmb1(data)              ((0x00F00000&(data))>>20)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_get_fec_rmb0(data)              ((0x000F0000&(data))>>16)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_get_fec_rma3(data)              ((0x0000F000&(data))>>12)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_get_fec_rma2(data)              ((0x00000F00&(data))>>8)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_get_fec_rma1(data)              ((0x000000F0&(data))>>4)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_get_fec_rma0(data)              (0x0000000F&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE                         0x180B957C
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_reg_addr                 "0xB80B957C"
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_reg                      0xB80B957C
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_inst_addr                "0x001E"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_reg(data)            (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_reg                  (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1b_3_shift       (27)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1a_3_shift       (26)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1b_2_shift       (25)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1a_2_shift       (24)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1b_1_shift       (23)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1a_1_shift       (22)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1b_0_shift       (21)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1a_0_shift       (20)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_ls3_shift            (19)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_ls2_shift            (18)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_ls1_shift            (17)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_ls0_shift            (16)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmeb_3_shift         (15)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmeb_2_shift         (14)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmeb_1_shift         (13)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmeb_0_shift         (12)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmea_3_shift         (11)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmea_2_shift         (10)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmea_1_shift         (9)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmea_0_shift         (8)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_dummy_7_0_shift          (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1b_3_mask        (0x08000000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1a_3_mask        (0x04000000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1b_2_mask        (0x02000000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1a_2_mask        (0x01000000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1b_1_mask        (0x00800000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1a_1_mask        (0x00400000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1b_0_mask        (0x00200000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1a_0_mask        (0x00100000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_ls3_mask             (0x00080000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_ls2_mask             (0x00040000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_ls1_mask             (0x00020000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_ls0_mask             (0x00010000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmeb_3_mask          (0x00008000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmeb_2_mask          (0x00004000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmeb_1_mask          (0x00002000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmeb_0_mask          (0x00001000)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmea_3_mask          (0x00000800)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmea_2_mask          (0x00000400)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmea_1_mask          (0x00000200)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmea_0_mask          (0x00000100)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_dummy_7_0_mask           (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1b_3(data)       (0x08000000&((data)<<27))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1a_3(data)       (0x04000000&((data)<<26))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1b_2(data)       (0x02000000&((data)<<25))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1a_2(data)       (0x01000000&((data)<<24))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1b_1(data)       (0x00800000&((data)<<23))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1a_1(data)       (0x00400000&((data)<<22))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1b_0(data)       (0x00200000&((data)<<21))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_test1a_0(data)       (0x00100000&((data)<<20))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_ls3(data)            (0x00080000&((data)<<19))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_ls2(data)            (0x00040000&((data)<<18))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_ls1(data)            (0x00020000&((data)<<17))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_ls0(data)            (0x00010000&((data)<<16))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmeb_3(data)         (0x00008000&((data)<<15))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmeb_2(data)         (0x00004000&((data)<<14))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmeb_1(data)         (0x00002000&((data)<<13))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmeb_0(data)         (0x00001000&((data)<<12))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmea_3(data)         (0x00000800&((data)<<11))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmea_2(data)         (0x00000400&((data)<<10))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmea_1(data)         (0x00000200&((data)<<9))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_fec_rmea_0(data)         (0x00000100&((data)<<8))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_dummy_7_0(data)          (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_test1b_3(data)   ((0x08000000&(data))>>27)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_test1a_3(data)   ((0x04000000&(data))>>26)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_test1b_2(data)   ((0x02000000&(data))>>25)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_test1a_2(data)   ((0x01000000&(data))>>24)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_test1b_1(data)   ((0x00800000&(data))>>23)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_test1a_1(data)   ((0x00400000&(data))>>22)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_test1b_0(data)   ((0x00200000&(data))>>21)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_test1a_0(data)   ((0x00100000&(data))>>20)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_ls3(data)        ((0x00080000&(data))>>19)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_ls2(data)        ((0x00040000&(data))>>18)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_ls1(data)        ((0x00020000&(data))>>17)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_ls0(data)        ((0x00010000&(data))>>16)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_rmeb_3(data)     ((0x00008000&(data))>>15)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_rmeb_2(data)     ((0x00004000&(data))>>14)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_rmeb_1(data)     ((0x00002000&(data))>>13)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_rmeb_0(data)     ((0x00001000&(data))>>12)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_rmea_3(data)     ((0x00000800&(data))>>11)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_rmea_2(data)     ((0x00000400&(data))>>10)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_rmea_1(data)     ((0x00000200&(data))>>9)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_fec_rmea_0(data)     ((0x00000100&(data))>>8)
#define  HDMI21_P1_FEC_FEC_HDMI21_RS_READ_MARGIN_ENABLE_get_dummy_7_0(data)      (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0                                         0x180B9580
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_reg_addr                                 "0xB80B9580"
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_reg                                      0xB80B9580
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_inst_addr                                "0x001F"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_FRL_0_reg(data)                            (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FRL_0_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_FRL_0_reg                                  (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FRL_0_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_frl_det_en_shift                         (7)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_v_gb_det_shift                           (6)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_v_pkt_det_shift                          (5)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_frl_hs_shift                             (4)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_frl_vs_shift                             (3)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_frl_data_byte_swap_shift                 (2)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_frl_data_bit_rev_shift                   (1)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_dummy_0_shift                            (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_frl_det_en_mask                          (0x00000080)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_v_gb_det_mask                            (0x00000040)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_v_pkt_det_mask                           (0x00000020)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_frl_hs_mask                              (0x00000010)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_frl_vs_mask                              (0x00000008)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_frl_data_byte_swap_mask                  (0x00000004)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_frl_data_bit_rev_mask                    (0x00000002)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_dummy_0_mask                             (0x00000001)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_frl_det_en(data)                         (0x00000080&((data)<<7))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_v_gb_det(data)                           (0x00000040&((data)<<6))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_v_pkt_det(data)                          (0x00000020&((data)<<5))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_frl_hs(data)                             (0x00000010&((data)<<4))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_frl_vs(data)                             (0x00000008&((data)<<3))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_frl_data_byte_swap(data)                 (0x00000004&((data)<<2))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_frl_data_bit_rev(data)                   (0x00000002&((data)<<1))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_dummy_0(data)                            (0x00000001&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_get_frl_det_en(data)                     ((0x00000080&(data))>>7)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_get_v_gb_det(data)                       ((0x00000040&(data))>>6)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_get_v_pkt_det(data)                      ((0x00000020&(data))>>5)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_get_frl_hs(data)                         ((0x00000010&(data))>>4)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_get_frl_vs(data)                         ((0x00000008&(data))>>3)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_get_frl_data_byte_swap(data)             ((0x00000004&(data))>>2)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_get_frl_data_bit_rev(data)               ((0x00000002&(data))>>1)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_0_get_dummy_0(data)                        (0x00000001&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1                                         0x180B9584
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_reg_addr                                 "0xB80B9584"
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_reg                                      0xB80B9584
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_inst_addr                                "0x0020"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_FRL_1_reg(data)                            (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FRL_1_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_FRL_1_reg                                  (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FRL_1_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_frl_wd_en_shift                          (7)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_data_island_err_shift                    (6)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_di_err_ie_shift                          (5)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_frl_pkt_len_err_shift                    (4)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_gap_judge_shift                          (3)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_frl_map_err_shift                        (2)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_dummy_1_0_shift                          (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_frl_wd_en_mask                           (0x00000080)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_data_island_err_mask                     (0x00000040)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_di_err_ie_mask                           (0x00000020)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_frl_pkt_len_err_mask                     (0x00000010)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_gap_judge_mask                           (0x00000008)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_frl_map_err_mask                         (0x00000004)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_dummy_1_0_mask                           (0x00000003)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_frl_wd_en(data)                          (0x00000080&((data)<<7))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_data_island_err(data)                    (0x00000040&((data)<<6))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_di_err_ie(data)                          (0x00000020&((data)<<5))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_frl_pkt_len_err(data)                    (0x00000010&((data)<<4))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_gap_judge(data)                          (0x00000008&((data)<<3))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_frl_map_err(data)                        (0x00000004&((data)<<2))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_dummy_1_0(data)                          (0x00000003&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_get_frl_wd_en(data)                      ((0x00000080&(data))>>7)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_get_data_island_err(data)                ((0x00000040&(data))>>6)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_get_di_err_ie(data)                      ((0x00000020&(data))>>5)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_get_frl_pkt_len_err(data)                ((0x00000010&(data))>>4)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_get_gap_judge(data)                      ((0x00000008&(data))>>3)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_get_frl_map_err(data)                    ((0x00000004&(data))>>2)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_1_get_dummy_1_0(data)                      (0x00000003&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_D1                                        0x180B9588
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_D1_reg_addr                                "0xB80B9588"
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_D1_reg                                     0xB80B9588
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_D1_inst_addr                               "0x0021"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_FRL_D1_reg(data)                           (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FRL_D1_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_FRL_D1_reg                                 (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FRL_D1_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_D1_dummy_7_0_shift                         (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_D1_dummy_7_0_mask                          (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_D1_dummy_7_0(data)                         (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_D1_get_dummy_7_0(data)                     (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_D2                                        0x180B958C
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_D2_reg_addr                                "0xB80B958C"
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_D2_reg                                     0xB80B958C
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_D2_inst_addr                               "0x0022"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_FRL_D2_reg(data)                           (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FRL_D2_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_FRL_D2_reg                                 (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_FRL_D2_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_D2_dummy_7_0_shift                         (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_D2_dummy_7_0_mask                          (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_D2_dummy_7_0(data)                         (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_FRL_D2_get_dummy_7_0(data)                     (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_TEST_SEL                                      0x180B9590
#define  HDMI21_P1_FEC_FEC_HDMI21_TEST_SEL_reg_addr                              "0xB80B9590"
#define  HDMI21_P1_FEC_FEC_HDMI21_TEST_SEL_reg                                   0xB80B9590
#define  HDMI21_P1_FEC_FEC_HDMI21_TEST_SEL_inst_addr                             "0x0023"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_TEST_SEL_reg(data)                         (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_TEST_SEL_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_TEST_SEL_reg                               (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_TEST_SEL_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_TEST_SEL_hdmi21_tst_sel_shift                  (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_TEST_SEL_hdmi21_tst_sel_mask                   (0x000000FF)
#define  HDMI21_P1_FEC_FEC_HDMI21_TEST_SEL_hdmi21_tst_sel(data)                  (0x000000FF&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_TEST_SEL_get_hdmi21_tst_sel(data)              (0x000000FF&(data))

#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9                                          0x180B9594
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_reg_addr                                  "0xB80B9594"
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_reg                                       0xB80B9594
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_inst_addr                                 "0x0024"
#define  set_HDMI21_P1_FEC_FEC_HDMI21_LT_9_reg(data)                             (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LT_9_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI21_LT_9_reg                                   (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI21_LT_9_reg))
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_lt_gap_en_shift                           (7)
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_lt_gap_err_shift                          (6)
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_lt_gap_err_ie_shift                       (5)
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_dummy_4_0_shift                           (0)
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_lt_gap_en_mask                            (0x00000080)
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_lt_gap_err_mask                           (0x00000040)
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_lt_gap_err_ie_mask                        (0x00000020)
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_dummy_4_0_mask                            (0x0000001F)
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_lt_gap_en(data)                           (0x00000080&((data)<<7))
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_lt_gap_err(data)                          (0x00000040&((data)<<6))
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_lt_gap_err_ie(data)                       (0x00000020&((data)<<5))
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_dummy_4_0(data)                           (0x0000001F&(data))
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_get_lt_gap_en(data)                       ((0x00000080&(data))>>7)
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_get_lt_gap_err(data)                      ((0x00000040&(data))>>6)
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_get_lt_gap_err_ie(data)                   ((0x00000020&(data))>>5)
#define  HDMI21_P1_FEC_FEC_HDMI21_LT_9_get_dummy_4_0(data)                       (0x0000001F&(data))

#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR                                 0x180B9598
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_reg_addr                         "0xB80B9598"
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_reg                              0xB80B9598
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_inst_addr                        "0x0025"
#define  set_HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_reg(data)                    (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_reg                          (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_reg))
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_chg_hdmi_md_det_en_shift         (8)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_chg_hdmi_md_det_shift            (7)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_md_sel_cond_shift                (6)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_cond_a_time_shift                (5)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_cond_b_time_shift                (4)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_md_sel_ctrl_shift                (3)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_md_sel_shift                     (2)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_dummy_1_0_shift                  (0)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_chg_hdmi_md_det_en_mask          (0x00000100)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_chg_hdmi_md_det_mask             (0x00000080)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_md_sel_cond_mask                 (0x00000040)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_cond_a_time_mask                 (0x00000020)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_cond_b_time_mask                 (0x00000010)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_md_sel_ctrl_mask                 (0x00000008)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_md_sel_mask                      (0x00000004)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_dummy_1_0_mask                   (0x00000003)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_chg_hdmi_md_det_en(data)         (0x00000100&((data)<<8))
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_chg_hdmi_md_det(data)            (0x00000080&((data)<<7))
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_md_sel_cond(data)                (0x00000040&((data)<<6))
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_cond_a_time(data)                (0x00000020&((data)<<5))
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_cond_b_time(data)                (0x00000010&((data)<<4))
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_md_sel_ctrl(data)                (0x00000008&((data)<<3))
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_md_sel(data)                     (0x00000004&((data)<<2))
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_dummy_1_0(data)                  (0x00000003&(data))
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_get_chg_hdmi_md_det_en(data)     ((0x00000100&(data))>>8)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_get_chg_hdmi_md_det(data)        ((0x00000080&(data))>>7)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_get_md_sel_cond(data)            ((0x00000040&(data))>>6)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_get_cond_a_time(data)            ((0x00000020&(data))>>5)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_get_cond_b_time(data)            ((0x00000010&(data))>>4)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_get_md_sel_ctrl(data)            ((0x00000008&(data))>>3)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_get_md_sel(data)                 ((0x00000004&(data))>>2)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_SCR_get_dummy_1_0(data)              (0x00000003&(data))

#define  HDMI21_P1_FEC_FEC_HDMI_SR                                              0x180B959C
#define  HDMI21_P1_FEC_FEC_HDMI_SR_reg_addr                                      "0xB80B959C"
#define  HDMI21_P1_FEC_FEC_HDMI_SR_reg                                           0xB80B959C
#define  HDMI21_P1_FEC_FEC_HDMI_SR_inst_addr                                     "0x0026"
#define  set_HDMI21_P1_FEC_FEC_HDMI_SR_reg(data)                                 (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI_SR_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_HDMI_SR_reg                                       (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_HDMI_SR_reg))
#define  HDMI21_P1_FEC_FEC_HDMI_SR_hdmi_md_det_shift                             (0)
#define  HDMI21_P1_FEC_FEC_HDMI_SR_hdmi_md_det_mask                              (0x00000001)
#define  HDMI21_P1_FEC_FEC_HDMI_SR_hdmi_md_det(data)                             (0x00000001&(data))
#define  HDMI21_P1_FEC_FEC_HDMI_SR_get_hdmi_md_det(data)                         (0x00000001&(data))

#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR                                0x180B95A0
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_reg_addr                        "0xB80B95A0"
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_reg                             0xB80B95A0
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_inst_addr                       "0x0027"
#define  set_HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_reg(data)                   (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_reg)=data)
#define  get_HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_reg                         (*((volatile unsigned int*)HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_reg))
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_no_vgb_aft_vpre_shift           (2)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_no_agb_aft_apre_shift           (1)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_no_trailing_agb_shift           (0)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_no_vgb_aft_vpre_mask            (0x00000004)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_no_agb_aft_apre_mask            (0x00000002)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_no_trailing_agb_mask            (0x00000001)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_no_vgb_aft_vpre(data)           (0x00000004&((data)<<2))
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_no_agb_aft_apre(data)           (0x00000002&((data)<<1))
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_no_trailing_agb(data)           (0x00000001&(data))
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_get_no_vgb_aft_vpre(data)       ((0x00000004&(data))>>2)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_get_no_agb_aft_apre(data)       ((0x00000002&(data))>>1)
#define  HDMI21_P1_FEC_FEC_PORT_PAGE73_HDMI_BCSR_get_no_trailing_agb(data)       (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======HDMI21_P1_FEC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rs_dc_en:1;
        RBus_UInt32  rs_bypass:1;
        RBus_UInt32  rs_cnt_en:1;
        RBus_UInt32  rs_cnt_keep:1;
        RBus_UInt32  rs_cnt_valid:1;
        RBus_UInt32  dummy180b9500_2_0:3;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rs_clk_1s_sel:1;
        RBus_UInt32  rs_clk_1m_div:4;
        RBus_UInt32  dummy180b9504_2_0:3;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dummy180b9508_7_0:8;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rsed_upd_en:1;
        RBus_UInt32  rsed_upd_num:3;
        RBus_UInt32  rsed_upd_once:1;
        RBus_UInt32  rsed_upd_ie:1;
        RBus_UInt32  rsed_upd:1;
        RBus_UInt32  dummy180b950c_0:1;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fw_rs_corr_cnt_l0:8;
    };
}hdmi21_p1_fec_fec_hdmi21_fw_rs_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fw_rs_corr_cnt_l1:8;
    };
}hdmi21_p1_fec_fec_hdmi21_fw_rs_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fw_rs_corr_cnt_l2:8;
    };
}hdmi21_p1_fec_fec_hdmi21_fw_rs_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fw_rs_corr_cnt_l3:8;
    };
}hdmi21_p1_fec_fec_hdmi21_fw_rs_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fw_rs_corr_th:8;
    };
}hdmi21_p1_fec_fec_hdmi21_fw_rs_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  fw_rs_cnt_en:1;
        RBus_UInt32  fw_rs_cnt_ie:1;
        RBus_UInt32  fw_rs_l0:1;
        RBus_UInt32  fw_rs_l1:1;
        RBus_UInt32  fw_rs_l2:1;
        RBus_UInt32  fw_rs_l3:1;
        RBus_UInt32  fw_rs_cnt_md:1;
        RBus_UInt32  dummy180b9524_0:1;
    };
}hdmi21_p1_fec_fec_hdmi21_fw_rs_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dummy180b9528_7_3:5;
        RBus_UInt32  fw_rs_cnt_done:1;
        RBus_UInt32  fw_rs_cnt_period:2;
    };
}hdmi21_p1_fec_fec_hdmi21_fw_rs_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lfsr_chk_en:1;
        RBus_UInt32  lfsr_fail:1;
        RBus_UInt32  map_type:6;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lfsr_chk_done:1;
        RBus_UInt32  lfsr_chk_num:3;
        RBus_UInt32  dummy180b9530_3_0:4;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  lfsr_err_cnt:12;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lfsr1_seed_l:8;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lfsr1_seed_h:8;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lfsr2_seed_l:8;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lfsr2_seed_h:8;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lfsr3_seed_l:8;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lfsr3_seed_h:8;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lfsr4_seed_l:8;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lfsr4_seed_h:8;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  digb_judge:1;
        RBus_UInt32  di_start_judge:1;
        RBus_UInt32  hs_polar_invert:1;
        RBus_UInt32  vs_polar_invert:1;
        RBus_UInt32  vs_polar_fw_mode:1;
        RBus_UInt32  dummy180b9558_2_0:3;
    };
}hdmi21_p1_fec_fec_hdmi21_di_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rs_fifo_save:1;
        RBus_UInt32  rs_fifo_ch:2;
        RBus_UInt32  dummy180b955c_4_1:4;
        RBus_UInt32  rs_save_done:1;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_sram_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rs_sram_addr:8;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_sram_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  rs_sram_data:16;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_sram_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  bist_rst_n_rs:1;
        RBus_UInt32  bist_mode_rs:1;
        RBus_UInt32  drf_bist_mode_rs:1;
        RBus_UInt32  drf_start_pause_rs:1;
        RBus_UInt32  drf_test_resume_rs:1;
        RBus_UInt32  rs_bist_clk_en:1;
        RBus_UInt32  rs_cp_clk_en:1;
        RBus_UInt32  dummy180b956c_0:1;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_sram_bist_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  bist_done_rs:1;
        RBus_UInt32  bist_fail_rs:1;
        RBus_UInt32  bist_fail0_rs:1;
        RBus_UInt32  bist_fail1_rs:1;
        RBus_UInt32  bist_fail2_rs:1;
        RBus_UInt32  bist_fail3_rs:1;
        RBus_UInt32  dummy180b9570_2_0:3;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_sram_bist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  drf_bist_done_rs:1;
        RBus_UInt32  drf_bist_fail_rs:1;
        RBus_UInt32  drf_bist_fail0_rs:1;
        RBus_UInt32  drf_bist_fail1_rs:1;
        RBus_UInt32  drf_bist_fail2_rs:1;
        RBus_UInt32  drf_bist_fail3_rs:1;
        RBus_UInt32  dummy180b9574_2_0:3;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_sram_bist_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fec_rmb3:4;
        RBus_UInt32  fec_rmb2:4;
        RBus_UInt32  fec_rmb1:4;
        RBus_UInt32  fec_rmb0:4;
        RBus_UInt32  fec_rma3:4;
        RBus_UInt32  fec_rma2:4;
        RBus_UInt32  fec_rma1:4;
        RBus_UInt32  fec_rma0:4;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_read_margin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  fec_test1b_3:1;
        RBus_UInt32  fec_test1a_3:1;
        RBus_UInt32  fec_test1b_2:1;
        RBus_UInt32  fec_test1a_2:1;
        RBus_UInt32  fec_test1b_1:1;
        RBus_UInt32  fec_test1a_1:1;
        RBus_UInt32  fec_test1b_0:1;
        RBus_UInt32  fec_test1a_0:1;
        RBus_UInt32  fec_ls3:1;
        RBus_UInt32  fec_ls2:1;
        RBus_UInt32  fec_ls1:1;
        RBus_UInt32  fec_ls0:1;
        RBus_UInt32  fec_rmeb_3:1;
        RBus_UInt32  fec_rmeb_2:1;
        RBus_UInt32  fec_rmeb_1:1;
        RBus_UInt32  fec_rmeb_0:1;
        RBus_UInt32  fec_rmea_3:1;
        RBus_UInt32  fec_rmea_2:1;
        RBus_UInt32  fec_rmea_1:1;
        RBus_UInt32  fec_rmea_0:1;
        RBus_UInt32  dummy180b957c_7_0:8;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_read_margin_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  frl_det_en:1;
        RBus_UInt32  v_gb_det:1;
        RBus_UInt32  v_pkt_det:1;
        RBus_UInt32  frl_hs:1;
        RBus_UInt32  frl_vs:1;
        RBus_UInt32  frl_data_byte_swap:1;
        RBus_UInt32  frl_data_bit_rev:1;
        RBus_UInt32  dummy180b9580_0:1;
    };
}hdmi21_p1_fec_fec_hdmi21_frl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  frl_wd_en:1;
        RBus_UInt32  data_island_err:1;
        RBus_UInt32  di_err_ie:1;
        RBus_UInt32  frl_pkt_len_err:1;
        RBus_UInt32  gap_judge:1;
        RBus_UInt32  frl_map_err:1;
        RBus_UInt32  dummy180b9584_1_0:2;
    };
}hdmi21_p1_fec_fec_hdmi21_frl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dummy180b9588_7_0:8;
    };
}hdmi21_p1_fec_fec_hdmi21_frl_d1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dummy180b958c_7_0:8;
    };
}hdmi21_p1_fec_fec_hdmi21_frl_d2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  hdmi21_tst_sel:8;
    };
}hdmi21_p1_fec_fec_hdmi21_test_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lt_gap_en:1;
        RBus_UInt32  lt_gap_err:1;
        RBus_UInt32  lt_gap_err_ie:1;
        RBus_UInt32  dummy180b9594_4_0:5;
    };
}hdmi21_p1_fec_fec_hdmi21_lt_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  chg_hdmi_md_det_en:1;
        RBus_UInt32  chg_hdmi_md_det:1;
        RBus_UInt32  md_sel_cond:1;
        RBus_UInt32  cond_a_time:1;
        RBus_UInt32  cond_b_time:1;
        RBus_UInt32  md_sel_ctrl:1;
        RBus_UInt32  md_sel:1;
        RBus_UInt32  dummy180b9598_1_0:2;
    };
}hdmi21_p1_fec_fec_port_page73_hdmi_scr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  hdmi_md_det:1;
    };
}hdmi21_p1_fec_fec_hdmi_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  no_vgb_aft_vpre:1;
        RBus_UInt32  no_agb_aft_apre:1;
        RBus_UInt32  no_trailing_agb:1;
    };
}hdmi21_p1_fec_fec_port_page73_hdmi_bcsr_RBUS;

#else //apply LITTLE_ENDIAN

//======HDMI21_P1_FEC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b9500_2_0:3;
        RBus_UInt32  rs_cnt_valid:1;
        RBus_UInt32  rs_cnt_keep:1;
        RBus_UInt32  rs_cnt_en:1;
        RBus_UInt32  rs_bypass:1;
        RBus_UInt32  rs_dc_en:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b9504_2_0:3;
        RBus_UInt32  rs_clk_1m_div:4;
        RBus_UInt32  rs_clk_1s_sel:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b9508_7_0:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b950c_0:1;
        RBus_UInt32  rsed_upd:1;
        RBus_UInt32  rsed_upd_ie:1;
        RBus_UInt32  rsed_upd_once:1;
        RBus_UInt32  rsed_upd_num:3;
        RBus_UInt32  rsed_upd_en:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_rs_corr_cnt_l0:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_fw_rs_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_rs_corr_cnt_l1:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_fw_rs_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_rs_corr_cnt_l2:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_fw_rs_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_rs_corr_cnt_l3:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_fw_rs_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_rs_corr_th:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_fw_rs_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b9524_0:1;
        RBus_UInt32  fw_rs_cnt_md:1;
        RBus_UInt32  fw_rs_l3:1;
        RBus_UInt32  fw_rs_l2:1;
        RBus_UInt32  fw_rs_l1:1;
        RBus_UInt32  fw_rs_l0:1;
        RBus_UInt32  fw_rs_cnt_ie:1;
        RBus_UInt32  fw_rs_cnt_en:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_fw_rs_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fw_rs_cnt_period:2;
        RBus_UInt32  fw_rs_cnt_done:1;
        RBus_UInt32  dummy180b9528_7_3:5;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_fw_rs_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  map_type:6;
        RBus_UInt32  lfsr_fail:1;
        RBus_UInt32  lfsr_chk_en:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b9530_3_0:4;
        RBus_UInt32  lfsr_chk_num:3;
        RBus_UInt32  lfsr_chk_done:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lfsr_err_cnt:12;
        RBus_UInt32  res1:20;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lfsr1_seed_l:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lfsr1_seed_h:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lfsr2_seed_l:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lfsr2_seed_h:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lfsr3_seed_l:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lfsr3_seed_h:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lfsr4_seed_l:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lfsr4_seed_h:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_lfsr_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b9558_2_0:3;
        RBus_UInt32  vs_polar_fw_mode:1;
        RBus_UInt32  vs_polar_invert:1;
        RBus_UInt32  hs_polar_invert:1;
        RBus_UInt32  di_start_judge:1;
        RBus_UInt32  digb_judge:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_di_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rs_save_done:1;
        RBus_UInt32  dummy180b955c_4_1:4;
        RBus_UInt32  rs_fifo_ch:2;
        RBus_UInt32  rs_fifo_save:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_sram_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rs_sram_addr:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_sram_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rs_sram_data:16;
        RBus_UInt32  res1:16;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_sram_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b956c_0:1;
        RBus_UInt32  rs_cp_clk_en:1;
        RBus_UInt32  rs_bist_clk_en:1;
        RBus_UInt32  drf_test_resume_rs:1;
        RBus_UInt32  drf_start_pause_rs:1;
        RBus_UInt32  drf_bist_mode_rs:1;
        RBus_UInt32  bist_mode_rs:1;
        RBus_UInt32  bist_rst_n_rs:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_sram_bist_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b9570_2_0:3;
        RBus_UInt32  bist_fail3_rs:1;
        RBus_UInt32  bist_fail2_rs:1;
        RBus_UInt32  bist_fail1_rs:1;
        RBus_UInt32  bist_fail0_rs:1;
        RBus_UInt32  bist_fail_rs:1;
        RBus_UInt32  bist_done_rs:1;
        RBus_UInt32  res1:23;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_sram_bist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b9574_2_0:3;
        RBus_UInt32  drf_bist_fail3_rs:1;
        RBus_UInt32  drf_bist_fail2_rs:1;
        RBus_UInt32  drf_bist_fail1_rs:1;
        RBus_UInt32  drf_bist_fail0_rs:1;
        RBus_UInt32  drf_bist_fail_rs:1;
        RBus_UInt32  drf_bist_done_rs:1;
        RBus_UInt32  res1:23;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_sram_bist_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fec_rma0:4;
        RBus_UInt32  fec_rma1:4;
        RBus_UInt32  fec_rma2:4;
        RBus_UInt32  fec_rma3:4;
        RBus_UInt32  fec_rmb0:4;
        RBus_UInt32  fec_rmb1:4;
        RBus_UInt32  fec_rmb2:4;
        RBus_UInt32  fec_rmb3:4;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_read_margin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b957c_7_0:8;
        RBus_UInt32  fec_rmea_0:1;
        RBus_UInt32  fec_rmea_1:1;
        RBus_UInt32  fec_rmea_2:1;
        RBus_UInt32  fec_rmea_3:1;
        RBus_UInt32  fec_rmeb_0:1;
        RBus_UInt32  fec_rmeb_1:1;
        RBus_UInt32  fec_rmeb_2:1;
        RBus_UInt32  fec_rmeb_3:1;
        RBus_UInt32  fec_ls0:1;
        RBus_UInt32  fec_ls1:1;
        RBus_UInt32  fec_ls2:1;
        RBus_UInt32  fec_ls3:1;
        RBus_UInt32  fec_test1a_0:1;
        RBus_UInt32  fec_test1b_0:1;
        RBus_UInt32  fec_test1a_1:1;
        RBus_UInt32  fec_test1b_1:1;
        RBus_UInt32  fec_test1a_2:1;
        RBus_UInt32  fec_test1b_2:1;
        RBus_UInt32  fec_test1a_3:1;
        RBus_UInt32  fec_test1b_3:1;
        RBus_UInt32  res1:4;
    };
}hdmi21_p1_fec_fec_hdmi21_rs_read_margin_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b9580_0:1;
        RBus_UInt32  frl_data_bit_rev:1;
        RBus_UInt32  frl_data_byte_swap:1;
        RBus_UInt32  frl_vs:1;
        RBus_UInt32  frl_hs:1;
        RBus_UInt32  v_pkt_det:1;
        RBus_UInt32  v_gb_det:1;
        RBus_UInt32  frl_det_en:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_frl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b9584_1_0:2;
        RBus_UInt32  frl_map_err:1;
        RBus_UInt32  gap_judge:1;
        RBus_UInt32  frl_pkt_len_err:1;
        RBus_UInt32  di_err_ie:1;
        RBus_UInt32  data_island_err:1;
        RBus_UInt32  frl_wd_en:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_frl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b9588_7_0:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_frl_d1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b958c_7_0:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_frl_d2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdmi21_tst_sel:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_test_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b9594_4_0:5;
        RBus_UInt32  lt_gap_err_ie:1;
        RBus_UInt32  lt_gap_err:1;
        RBus_UInt32  lt_gap_en:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p1_fec_fec_hdmi21_lt_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b9598_1_0:2;
        RBus_UInt32  md_sel:1;
        RBus_UInt32  md_sel_ctrl:1;
        RBus_UInt32  cond_b_time:1;
        RBus_UInt32  cond_a_time:1;
        RBus_UInt32  md_sel_cond:1;
        RBus_UInt32  chg_hdmi_md_det:1;
        RBus_UInt32  chg_hdmi_md_det_en:1;
        RBus_UInt32  res1:23;
    };
}hdmi21_p1_fec_fec_port_page73_hdmi_scr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdmi_md_det:1;
        RBus_UInt32  res1:31;
    };
}hdmi21_p1_fec_fec_hdmi_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  no_trailing_agb:1;
        RBus_UInt32  no_agb_aft_apre:1;
        RBus_UInt32  no_vgb_aft_vpre:1;
        RBus_UInt32  res1:29;
    };
}hdmi21_p1_fec_fec_port_page73_hdmi_bcsr_RBUS;




#endif 


#endif 
