/**
* @file Merlin5-DesignSpec-P0_HDMI21_RX_MAC
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_HDMI21_P0_REG_H_
#define _RBUS_HDMI21_P0_REG_H_

#include "rbus_types.h"



//  HDMI21_P0 Register Address
#define  HDMI21_P0_HD21_CR                                                      0x180B7000
#define  HDMI21_P0_HD21_CR_reg_addr                                              "0xB80B7000"
#define  HDMI21_P0_HD21_CR_reg                                                   0xB80B7000
#define  HDMI21_P0_HD21_CR_inst_addr                                             "0x0000"
#define  set_HDMI21_P0_HD21_CR_reg(data)                                         (*((volatile unsigned int*)HDMI21_P0_HD21_CR_reg)=data)
#define  get_HDMI21_P0_HD21_CR_reg                                               (*((volatile unsigned int*)HDMI21_P0_HD21_CR_reg))
#define  HDMI21_P0_HD21_CR_clk_div_sel_shift                                     (6)
#define  HDMI21_P0_HD21_CR_clk_div_en_shift                                      (5)
#define  HDMI21_P0_HD21_CR_iclk_sel_shift                                        (3)
#define  HDMI21_P0_HD21_CR_dsc_mode_fw_shift                                     (2)
#define  HDMI21_P0_HD21_CR_lane_mode_fw_shift                                    (1)
#define  HDMI21_P0_HD21_CR_hd21_en_shift                                         (0)
#define  HDMI21_P0_HD21_CR_clk_div_sel_mask                                      (0x000000C0)
#define  HDMI21_P0_HD21_CR_clk_div_en_mask                                       (0x00000020)
#define  HDMI21_P0_HD21_CR_iclk_sel_mask                                         (0x00000018)
#define  HDMI21_P0_HD21_CR_dsc_mode_fw_mask                                      (0x00000004)
#define  HDMI21_P0_HD21_CR_lane_mode_fw_mask                                     (0x00000002)
#define  HDMI21_P0_HD21_CR_hd21_en_mask                                          (0x00000001)
#define  HDMI21_P0_HD21_CR_clk_div_sel(data)                                     (0x000000C0&((data)<<6))
#define  HDMI21_P0_HD21_CR_clk_div_en(data)                                      (0x00000020&((data)<<5))
#define  HDMI21_P0_HD21_CR_iclk_sel(data)                                        (0x00000018&((data)<<3))
#define  HDMI21_P0_HD21_CR_dsc_mode_fw(data)                                     (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_CR_lane_mode_fw(data)                                    (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_CR_hd21_en(data)                                         (0x00000001&(data))
#define  HDMI21_P0_HD21_CR_get_clk_div_sel(data)                                 ((0x000000C0&(data))>>6)
#define  HDMI21_P0_HD21_CR_get_clk_div_en(data)                                  ((0x00000020&(data))>>5)
#define  HDMI21_P0_HD21_CR_get_iclk_sel(data)                                    ((0x00000018&(data))>>3)
#define  HDMI21_P0_HD21_CR_get_dsc_mode_fw(data)                                 ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_CR_get_lane_mode_fw(data)                                ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_CR_get_hd21_en(data)                                     (0x00000001&(data))

#define  HDMI21_P0_HD21_PHY_FIFO_CR0                                            0x180B7004
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_reg_addr                                    "0xB80B7004"
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_reg                                         0xB80B7004
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_inst_addr                                   "0x0001"
#define  set_HDMI21_P0_HD21_PHY_FIFO_CR0_reg(data)                               (*((volatile unsigned int*)HDMI21_P0_HD21_PHY_FIFO_CR0_reg)=data)
#define  get_HDMI21_P0_HD21_PHY_FIFO_CR0_reg                                     (*((volatile unsigned int*)HDMI21_P0_HD21_PHY_FIFO_CR0_reg))
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port0_c_flush_shift                         (7)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port0_c_afifo_en_shift                      (6)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port2_c_flush_shift                         (5)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port2_c_afifo_en_shift                      (4)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port1_c_flush_shift                         (3)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port1_c_afifo_en_shift                      (2)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port3_c_flush_shift                         (1)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port3_c_afifo_en_shift                      (0)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port0_c_flush_mask                          (0x00000080)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port0_c_afifo_en_mask                       (0x00000040)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port2_c_flush_mask                          (0x00000020)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port2_c_afifo_en_mask                       (0x00000010)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port1_c_flush_mask                          (0x00000008)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port1_c_afifo_en_mask                       (0x00000004)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port3_c_flush_mask                          (0x00000002)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port3_c_afifo_en_mask                       (0x00000001)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port0_c_flush(data)                         (0x00000080&((data)<<7))
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port0_c_afifo_en(data)                      (0x00000040&((data)<<6))
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port2_c_flush(data)                         (0x00000020&((data)<<5))
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port2_c_afifo_en(data)                      (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port1_c_flush(data)                         (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port1_c_afifo_en(data)                      (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port3_c_flush(data)                         (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_port3_c_afifo_en(data)                      (0x00000001&(data))
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_get_port0_c_flush(data)                     ((0x00000080&(data))>>7)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_get_port0_c_afifo_en(data)                  ((0x00000040&(data))>>6)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_get_port2_c_flush(data)                     ((0x00000020&(data))>>5)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_get_port2_c_afifo_en(data)                  ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_get_port1_c_flush(data)                     ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_get_port1_c_afifo_en(data)                  ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_get_port3_c_flush(data)                     ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_PHY_FIFO_CR0_get_port3_c_afifo_en(data)                  (0x00000001&(data))

#define  HDMI21_P0_HD21_PHY_FIFO_CR1                                            0x180B7008
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_reg_addr                                    "0xB80B7008"
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_reg                                         0xB80B7008
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_inst_addr                                   "0x0002"
#define  set_HDMI21_P0_HD21_PHY_FIFO_CR1_reg(data)                               (*((volatile unsigned int*)HDMI21_P0_HD21_PHY_FIFO_CR1_reg)=data)
#define  get_HDMI21_P0_HD21_PHY_FIFO_CR1_reg                                     (*((volatile unsigned int*)HDMI21_P0_HD21_PHY_FIFO_CR1_reg))
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_port0_ckclk_inv_shift                       (3)
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_port1_ckclk_inv_shift                       (2)
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_port2_ckclk_inv_shift                       (1)
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_port3_ckclk_inv_shift                       (0)
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_port0_ckclk_inv_mask                        (0x00000008)
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_port1_ckclk_inv_mask                        (0x00000004)
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_port2_ckclk_inv_mask                        (0x00000002)
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_port3_ckclk_inv_mask                        (0x00000001)
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_port0_ckclk_inv(data)                       (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_port1_ckclk_inv(data)                       (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_port2_ckclk_inv(data)                       (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_port3_ckclk_inv(data)                       (0x00000001&(data))
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_get_port0_ckclk_inv(data)                   ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_get_port1_ckclk_inv(data)                   ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_get_port2_ckclk_inv(data)                   ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_PHY_FIFO_CR1_get_port3_ckclk_inv(data)                   (0x00000001&(data))

#define  HDMI21_P0_HD21_PHY_FIFO_SR0                                            0x180B700C
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_reg_addr                                    "0xB80B700C"
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_reg                                         0xB80B700C
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_inst_addr                                   "0x0003"
#define  set_HDMI21_P0_HD21_PHY_FIFO_SR0_reg(data)                               (*((volatile unsigned int*)HDMI21_P0_HD21_PHY_FIFO_SR0_reg)=data)
#define  get_HDMI21_P0_HD21_PHY_FIFO_SR0_reg                                     (*((volatile unsigned int*)HDMI21_P0_HD21_PHY_FIFO_SR0_reg))
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port0_c_wrclk_det_timeout_flag_shift        (19)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port0_c_rwclk_det_timeout_flag_shift        (18)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port0_c_wovflow_flag_shift                  (17)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port0_c_rudflow_flag_shift                  (16)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port0_c_rflush_flag_shift                   (15)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port1_c_wrclk_det_timeout_flag_shift        (4)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port1_c_rwclk_det_timeout_flag_shift        (3)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port1_c_wovflow_flag_shift                  (2)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port1_c_rudflow_flag_shift                  (1)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port1_c_rflush_flag_shift                   (0)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port0_c_wrclk_det_timeout_flag_mask         (0x00080000)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port0_c_rwclk_det_timeout_flag_mask         (0x00040000)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port0_c_wovflow_flag_mask                   (0x00020000)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port0_c_rudflow_flag_mask                   (0x00010000)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port0_c_rflush_flag_mask                    (0x00008000)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port1_c_wrclk_det_timeout_flag_mask         (0x00000010)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port1_c_rwclk_det_timeout_flag_mask         (0x00000008)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port1_c_wovflow_flag_mask                   (0x00000004)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port1_c_rudflow_flag_mask                   (0x00000002)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port1_c_rflush_flag_mask                    (0x00000001)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port0_c_wrclk_det_timeout_flag(data)        (0x00080000&((data)<<19))
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port0_c_rwclk_det_timeout_flag(data)        (0x00040000&((data)<<18))
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port0_c_wovflow_flag(data)                  (0x00020000&((data)<<17))
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port0_c_rudflow_flag(data)                  (0x00010000&((data)<<16))
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port0_c_rflush_flag(data)                   (0x00008000&((data)<<15))
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port1_c_wrclk_det_timeout_flag(data)        (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port1_c_rwclk_det_timeout_flag(data)        (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port1_c_wovflow_flag(data)                  (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port1_c_rudflow_flag(data)                  (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_port1_c_rflush_flag(data)                   (0x00000001&(data))
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_get_port0_c_wrclk_det_timeout_flag(data)    ((0x00080000&(data))>>19)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_get_port0_c_rwclk_det_timeout_flag(data)    ((0x00040000&(data))>>18)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_get_port0_c_wovflow_flag(data)              ((0x00020000&(data))>>17)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_get_port0_c_rudflow_flag(data)              ((0x00010000&(data))>>16)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_get_port0_c_rflush_flag(data)               ((0x00008000&(data))>>15)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_get_port1_c_wrclk_det_timeout_flag(data)    ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_get_port1_c_rwclk_det_timeout_flag(data)    ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_get_port1_c_wovflow_flag(data)              ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_get_port1_c_rudflow_flag(data)              ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_PHY_FIFO_SR0_get_port1_c_rflush_flag(data)               (0x00000001&(data))

#define  HDMI21_P0_HD21_PHY_FIFO_SR1                                            0x180B7010
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_reg_addr                                    "0xB80B7010"
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_reg                                         0xB80B7010
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_inst_addr                                   "0x0004"
#define  set_HDMI21_P0_HD21_PHY_FIFO_SR1_reg(data)                               (*((volatile unsigned int*)HDMI21_P0_HD21_PHY_FIFO_SR1_reg)=data)
#define  get_HDMI21_P0_HD21_PHY_FIFO_SR1_reg                                     (*((volatile unsigned int*)HDMI21_P0_HD21_PHY_FIFO_SR1_reg))
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port2_c_wrclk_det_timeout_flag_shift        (19)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port2_c_rwclk_det_timeout_flag_shift        (18)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port2_c_wovflow_flag_shift                  (17)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port2_c_rudflow_flag_shift                  (16)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port2_c_rflush_flag_shift                   (15)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port3_c_wrclk_det_timeout_flag_shift        (4)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port3_c_rwclk_det_timeout_flag_shift        (3)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port3_c_wovflow_flag_shift                  (2)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port3_c_rudflow_flag_shift                  (1)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port3_c_rflush_flag_shift                   (0)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port2_c_wrclk_det_timeout_flag_mask         (0x00080000)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port2_c_rwclk_det_timeout_flag_mask         (0x00040000)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port2_c_wovflow_flag_mask                   (0x00020000)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port2_c_rudflow_flag_mask                   (0x00010000)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port2_c_rflush_flag_mask                    (0x00008000)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port3_c_wrclk_det_timeout_flag_mask         (0x00000010)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port3_c_rwclk_det_timeout_flag_mask         (0x00000008)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port3_c_wovflow_flag_mask                   (0x00000004)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port3_c_rudflow_flag_mask                   (0x00000002)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port3_c_rflush_flag_mask                    (0x00000001)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port2_c_wrclk_det_timeout_flag(data)        (0x00080000&((data)<<19))
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port2_c_rwclk_det_timeout_flag(data)        (0x00040000&((data)<<18))
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port2_c_wovflow_flag(data)                  (0x00020000&((data)<<17))
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port2_c_rudflow_flag(data)                  (0x00010000&((data)<<16))
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port2_c_rflush_flag(data)                   (0x00008000&((data)<<15))
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port3_c_wrclk_det_timeout_flag(data)        (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port3_c_rwclk_det_timeout_flag(data)        (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port3_c_wovflow_flag(data)                  (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port3_c_rudflow_flag(data)                  (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_port3_c_rflush_flag(data)                   (0x00000001&(data))
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_get_port2_c_wrclk_det_timeout_flag(data)    ((0x00080000&(data))>>19)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_get_port2_c_rwclk_det_timeout_flag(data)    ((0x00040000&(data))>>18)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_get_port2_c_wovflow_flag(data)              ((0x00020000&(data))>>17)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_get_port2_c_rudflow_flag(data)              ((0x00010000&(data))>>16)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_get_port2_c_rflush_flag(data)               ((0x00008000&(data))>>15)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_get_port3_c_wrclk_det_timeout_flag(data)    ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_get_port3_c_rwclk_det_timeout_flag(data)    ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_get_port3_c_wovflow_flag(data)              ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_get_port3_c_rudflow_flag(data)              ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_PHY_FIFO_SR1_get_port3_c_rflush_flag(data)               (0x00000001&(data))

#define  HDMI21_P0_hd21_channel_align_c                                         0x180B7014
#define  HDMI21_P0_hd21_channel_align_c_reg_addr                                 "0xB80B7014"
#define  HDMI21_P0_hd21_channel_align_c_reg                                      0xB80B7014
#define  HDMI21_P0_hd21_channel_align_c_inst_addr                                "0x0005"
#define  set_HDMI21_P0_hd21_channel_align_c_reg(data)                            (*((volatile unsigned int*)HDMI21_P0_hd21_channel_align_c_reg)=data)
#define  get_HDMI21_P0_hd21_channel_align_c_reg                                  (*((volatile unsigned int*)HDMI21_P0_hd21_channel_align_c_reg))
#define  HDMI21_P0_hd21_channel_align_c_scdc_force_realign_shift                 (31)
#define  HDMI21_P0_hd21_channel_align_c_scdc_lock_sel_shift                      (27)
#define  HDMI21_P0_hd21_channel_align_c_scdc_unlock_num_shift                    (24)
#define  HDMI21_P0_hd21_channel_align_c_scdc_lock_bound_shift                    (23)
#define  HDMI21_P0_hd21_channel_align_c_scdc_align_mode_shift                    (22)
#define  HDMI21_P0_hd21_channel_align_c_align_mode_shift                         (21)
#define  HDMI21_P0_hd21_channel_align_c_force_realign_shift                      (20)
#define  HDMI21_P0_hd21_channel_align_c_lock_sel_shift                           (16)
#define  HDMI21_P0_hd21_channel_align_c_unlock_num_shift                         (13)
#define  HDMI21_P0_hd21_channel_align_c_unex_comma_shift                         (12)
#define  HDMI21_P0_hd21_channel_align_c_position_error_flag_shift                (11)
#define  HDMI21_P0_hd21_channel_align_c_com_seq_lock_shift                       (8)
#define  HDMI21_P0_hd21_channel_align_c_sr_detect_shift                          (7)
#define  HDMI21_P0_hd21_channel_align_c_position_error_cnt_shift                 (1)
#define  HDMI21_P0_hd21_channel_align_c_lock_bound_shift                         (0)
#define  HDMI21_P0_hd21_channel_align_c_scdc_force_realign_mask                  (0x80000000)
#define  HDMI21_P0_hd21_channel_align_c_scdc_lock_sel_mask                       (0x78000000)
#define  HDMI21_P0_hd21_channel_align_c_scdc_unlock_num_mask                     (0x07000000)
#define  HDMI21_P0_hd21_channel_align_c_scdc_lock_bound_mask                     (0x00800000)
#define  HDMI21_P0_hd21_channel_align_c_scdc_align_mode_mask                     (0x00400000)
#define  HDMI21_P0_hd21_channel_align_c_align_mode_mask                          (0x00200000)
#define  HDMI21_P0_hd21_channel_align_c_force_realign_mask                       (0x00100000)
#define  HDMI21_P0_hd21_channel_align_c_lock_sel_mask                            (0x000F0000)
#define  HDMI21_P0_hd21_channel_align_c_unlock_num_mask                          (0x0000E000)
#define  HDMI21_P0_hd21_channel_align_c_unex_comma_mask                          (0x00001000)
#define  HDMI21_P0_hd21_channel_align_c_position_error_flag_mask                 (0x00000800)
#define  HDMI21_P0_hd21_channel_align_c_com_seq_lock_mask                        (0x00000100)
#define  HDMI21_P0_hd21_channel_align_c_sr_detect_mask                           (0x00000080)
#define  HDMI21_P0_hd21_channel_align_c_position_error_cnt_mask                  (0x0000007E)
#define  HDMI21_P0_hd21_channel_align_c_lock_bound_mask                          (0x00000001)
#define  HDMI21_P0_hd21_channel_align_c_scdc_force_realign(data)                 (0x80000000&((data)<<31))
#define  HDMI21_P0_hd21_channel_align_c_scdc_lock_sel(data)                      (0x78000000&((data)<<27))
#define  HDMI21_P0_hd21_channel_align_c_scdc_unlock_num(data)                    (0x07000000&((data)<<24))
#define  HDMI21_P0_hd21_channel_align_c_scdc_lock_bound(data)                    (0x00800000&((data)<<23))
#define  HDMI21_P0_hd21_channel_align_c_scdc_align_mode(data)                    (0x00400000&((data)<<22))
#define  HDMI21_P0_hd21_channel_align_c_align_mode(data)                         (0x00200000&((data)<<21))
#define  HDMI21_P0_hd21_channel_align_c_force_realign(data)                      (0x00100000&((data)<<20))
#define  HDMI21_P0_hd21_channel_align_c_lock_sel(data)                           (0x000F0000&((data)<<16))
#define  HDMI21_P0_hd21_channel_align_c_unlock_num(data)                         (0x0000E000&((data)<<13))
#define  HDMI21_P0_hd21_channel_align_c_unex_comma(data)                         (0x00001000&((data)<<12))
#define  HDMI21_P0_hd21_channel_align_c_position_error_flag(data)                (0x00000800&((data)<<11))
#define  HDMI21_P0_hd21_channel_align_c_com_seq_lock(data)                       (0x00000100&((data)<<8))
#define  HDMI21_P0_hd21_channel_align_c_sr_detect(data)                          (0x00000080&((data)<<7))
#define  HDMI21_P0_hd21_channel_align_c_position_error_cnt(data)                 (0x0000007E&((data)<<1))
#define  HDMI21_P0_hd21_channel_align_c_lock_bound(data)                         (0x00000001&(data))
#define  HDMI21_P0_hd21_channel_align_c_get_scdc_force_realign(data)             ((0x80000000&(data))>>31)
#define  HDMI21_P0_hd21_channel_align_c_get_scdc_lock_sel(data)                  ((0x78000000&(data))>>27)
#define  HDMI21_P0_hd21_channel_align_c_get_scdc_unlock_num(data)                ((0x07000000&(data))>>24)
#define  HDMI21_P0_hd21_channel_align_c_get_scdc_lock_bound(data)                ((0x00800000&(data))>>23)
#define  HDMI21_P0_hd21_channel_align_c_get_scdc_align_mode(data)                ((0x00400000&(data))>>22)
#define  HDMI21_P0_hd21_channel_align_c_get_align_mode(data)                     ((0x00200000&(data))>>21)
#define  HDMI21_P0_hd21_channel_align_c_get_force_realign(data)                  ((0x00100000&(data))>>20)
#define  HDMI21_P0_hd21_channel_align_c_get_lock_sel(data)                       ((0x000F0000&(data))>>16)
#define  HDMI21_P0_hd21_channel_align_c_get_unlock_num(data)                     ((0x0000E000&(data))>>13)
#define  HDMI21_P0_hd21_channel_align_c_get_unex_comma(data)                     ((0x00001000&(data))>>12)
#define  HDMI21_P0_hd21_channel_align_c_get_position_error_flag(data)            ((0x00000800&(data))>>11)
#define  HDMI21_P0_hd21_channel_align_c_get_com_seq_lock(data)                   ((0x00000100&(data))>>8)
#define  HDMI21_P0_hd21_channel_align_c_get_sr_detect(data)                      ((0x00000080&(data))>>7)
#define  HDMI21_P0_hd21_channel_align_c_get_position_error_cnt(data)             ((0x0000007E&(data))>>1)
#define  HDMI21_P0_hd21_channel_align_c_get_lock_bound(data)                     (0x00000001&(data))

#define  HDMI21_P0_hd21_channel_align_r                                         0x180B7018
#define  HDMI21_P0_hd21_channel_align_r_reg_addr                                 "0xB80B7018"
#define  HDMI21_P0_hd21_channel_align_r_reg                                      0xB80B7018
#define  HDMI21_P0_hd21_channel_align_r_inst_addr                                "0x0006"
#define  set_HDMI21_P0_hd21_channel_align_r_reg(data)                            (*((volatile unsigned int*)HDMI21_P0_hd21_channel_align_r_reg)=data)
#define  get_HDMI21_P0_hd21_channel_align_r_reg                                  (*((volatile unsigned int*)HDMI21_P0_hd21_channel_align_r_reg))
#define  HDMI21_P0_hd21_channel_align_r_scdc_force_realign_shift                 (31)
#define  HDMI21_P0_hd21_channel_align_r_scdc_lock_sel_shift                      (27)
#define  HDMI21_P0_hd21_channel_align_r_scdc_unlock_num_shift                    (24)
#define  HDMI21_P0_hd21_channel_align_r_scdc_lock_bound_shift                    (23)
#define  HDMI21_P0_hd21_channel_align_r_scdc_align_mode_shift                    (22)
#define  HDMI21_P0_hd21_channel_align_r_align_mode_shift                         (21)
#define  HDMI21_P0_hd21_channel_align_r_force_realign_shift                      (20)
#define  HDMI21_P0_hd21_channel_align_r_lock_sel_shift                           (16)
#define  HDMI21_P0_hd21_channel_align_r_unlock_num_shift                         (13)
#define  HDMI21_P0_hd21_channel_align_r_unex_comma_shift                         (12)
#define  HDMI21_P0_hd21_channel_align_r_position_error_flag_shift                (11)
#define  HDMI21_P0_hd21_channel_align_r_com_seq_lock_shift                       (8)
#define  HDMI21_P0_hd21_channel_align_r_sr_detect_shift                          (7)
#define  HDMI21_P0_hd21_channel_align_r_position_error_cnt_shift                 (1)
#define  HDMI21_P0_hd21_channel_align_r_lock_bound_shift                         (0)
#define  HDMI21_P0_hd21_channel_align_r_scdc_force_realign_mask                  (0x80000000)
#define  HDMI21_P0_hd21_channel_align_r_scdc_lock_sel_mask                       (0x78000000)
#define  HDMI21_P0_hd21_channel_align_r_scdc_unlock_num_mask                     (0x07000000)
#define  HDMI21_P0_hd21_channel_align_r_scdc_lock_bound_mask                     (0x00800000)
#define  HDMI21_P0_hd21_channel_align_r_scdc_align_mode_mask                     (0x00400000)
#define  HDMI21_P0_hd21_channel_align_r_align_mode_mask                          (0x00200000)
#define  HDMI21_P0_hd21_channel_align_r_force_realign_mask                       (0x00100000)
#define  HDMI21_P0_hd21_channel_align_r_lock_sel_mask                            (0x000F0000)
#define  HDMI21_P0_hd21_channel_align_r_unlock_num_mask                          (0x0000E000)
#define  HDMI21_P0_hd21_channel_align_r_unex_comma_mask                          (0x00001000)
#define  HDMI21_P0_hd21_channel_align_r_position_error_flag_mask                 (0x00000800)
#define  HDMI21_P0_hd21_channel_align_r_com_seq_lock_mask                        (0x00000100)
#define  HDMI21_P0_hd21_channel_align_r_sr_detect_mask                           (0x00000080)
#define  HDMI21_P0_hd21_channel_align_r_position_error_cnt_mask                  (0x0000007E)
#define  HDMI21_P0_hd21_channel_align_r_lock_bound_mask                          (0x00000001)
#define  HDMI21_P0_hd21_channel_align_r_scdc_force_realign(data)                 (0x80000000&((data)<<31))
#define  HDMI21_P0_hd21_channel_align_r_scdc_lock_sel(data)                      (0x78000000&((data)<<27))
#define  HDMI21_P0_hd21_channel_align_r_scdc_unlock_num(data)                    (0x07000000&((data)<<24))
#define  HDMI21_P0_hd21_channel_align_r_scdc_lock_bound(data)                    (0x00800000&((data)<<23))
#define  HDMI21_P0_hd21_channel_align_r_scdc_align_mode(data)                    (0x00400000&((data)<<22))
#define  HDMI21_P0_hd21_channel_align_r_align_mode(data)                         (0x00200000&((data)<<21))
#define  HDMI21_P0_hd21_channel_align_r_force_realign(data)                      (0x00100000&((data)<<20))
#define  HDMI21_P0_hd21_channel_align_r_lock_sel(data)                           (0x000F0000&((data)<<16))
#define  HDMI21_P0_hd21_channel_align_r_unlock_num(data)                         (0x0000E000&((data)<<13))
#define  HDMI21_P0_hd21_channel_align_r_unex_comma(data)                         (0x00001000&((data)<<12))
#define  HDMI21_P0_hd21_channel_align_r_position_error_flag(data)                (0x00000800&((data)<<11))
#define  HDMI21_P0_hd21_channel_align_r_com_seq_lock(data)                       (0x00000100&((data)<<8))
#define  HDMI21_P0_hd21_channel_align_r_sr_detect(data)                          (0x00000080&((data)<<7))
#define  HDMI21_P0_hd21_channel_align_r_position_error_cnt(data)                 (0x0000007E&((data)<<1))
#define  HDMI21_P0_hd21_channel_align_r_lock_bound(data)                         (0x00000001&(data))
#define  HDMI21_P0_hd21_channel_align_r_get_scdc_force_realign(data)             ((0x80000000&(data))>>31)
#define  HDMI21_P0_hd21_channel_align_r_get_scdc_lock_sel(data)                  ((0x78000000&(data))>>27)
#define  HDMI21_P0_hd21_channel_align_r_get_scdc_unlock_num(data)                ((0x07000000&(data))>>24)
#define  HDMI21_P0_hd21_channel_align_r_get_scdc_lock_bound(data)                ((0x00800000&(data))>>23)
#define  HDMI21_P0_hd21_channel_align_r_get_scdc_align_mode(data)                ((0x00400000&(data))>>22)
#define  HDMI21_P0_hd21_channel_align_r_get_align_mode(data)                     ((0x00200000&(data))>>21)
#define  HDMI21_P0_hd21_channel_align_r_get_force_realign(data)                  ((0x00100000&(data))>>20)
#define  HDMI21_P0_hd21_channel_align_r_get_lock_sel(data)                       ((0x000F0000&(data))>>16)
#define  HDMI21_P0_hd21_channel_align_r_get_unlock_num(data)                     ((0x0000E000&(data))>>13)
#define  HDMI21_P0_hd21_channel_align_r_get_unex_comma(data)                     ((0x00001000&(data))>>12)
#define  HDMI21_P0_hd21_channel_align_r_get_position_error_flag(data)            ((0x00000800&(data))>>11)
#define  HDMI21_P0_hd21_channel_align_r_get_com_seq_lock(data)                   ((0x00000100&(data))>>8)
#define  HDMI21_P0_hd21_channel_align_r_get_sr_detect(data)                      ((0x00000080&(data))>>7)
#define  HDMI21_P0_hd21_channel_align_r_get_position_error_cnt(data)             ((0x0000007E&(data))>>1)
#define  HDMI21_P0_hd21_channel_align_r_get_lock_bound(data)                     (0x00000001&(data))

#define  HDMI21_P0_hd21_channel_align_g                                         0x180B701C
#define  HDMI21_P0_hd21_channel_align_g_reg_addr                                 "0xB80B701C"
#define  HDMI21_P0_hd21_channel_align_g_reg                                      0xB80B701C
#define  HDMI21_P0_hd21_channel_align_g_inst_addr                                "0x0007"
#define  set_HDMI21_P0_hd21_channel_align_g_reg(data)                            (*((volatile unsigned int*)HDMI21_P0_hd21_channel_align_g_reg)=data)
#define  get_HDMI21_P0_hd21_channel_align_g_reg                                  (*((volatile unsigned int*)HDMI21_P0_hd21_channel_align_g_reg))
#define  HDMI21_P0_hd21_channel_align_g_scdc_force_realign_shift                 (31)
#define  HDMI21_P0_hd21_channel_align_g_scdc_lock_sel_shift                      (27)
#define  HDMI21_P0_hd21_channel_align_g_scdc_unlock_num_shift                    (24)
#define  HDMI21_P0_hd21_channel_align_g_scdc_lock_bound_shift                    (23)
#define  HDMI21_P0_hd21_channel_align_g_scdc_align_mode_shift                    (22)
#define  HDMI21_P0_hd21_channel_align_g_align_mode_shift                         (21)
#define  HDMI21_P0_hd21_channel_align_g_force_realign_shift                      (20)
#define  HDMI21_P0_hd21_channel_align_g_lock_sel_shift                           (16)
#define  HDMI21_P0_hd21_channel_align_g_unlock_num_shift                         (13)
#define  HDMI21_P0_hd21_channel_align_g_unex_comma_shift                         (12)
#define  HDMI21_P0_hd21_channel_align_g_position_error_flag_shift                (11)
#define  HDMI21_P0_hd21_channel_align_g_com_seq_lock_shift                       (8)
#define  HDMI21_P0_hd21_channel_align_g_sr_detect_shift                          (7)
#define  HDMI21_P0_hd21_channel_align_g_position_error_cnt_shift                 (1)
#define  HDMI21_P0_hd21_channel_align_g_lock_bound_shift                         (0)
#define  HDMI21_P0_hd21_channel_align_g_scdc_force_realign_mask                  (0x80000000)
#define  HDMI21_P0_hd21_channel_align_g_scdc_lock_sel_mask                       (0x78000000)
#define  HDMI21_P0_hd21_channel_align_g_scdc_unlock_num_mask                     (0x07000000)
#define  HDMI21_P0_hd21_channel_align_g_scdc_lock_bound_mask                     (0x00800000)
#define  HDMI21_P0_hd21_channel_align_g_scdc_align_mode_mask                     (0x00400000)
#define  HDMI21_P0_hd21_channel_align_g_align_mode_mask                          (0x00200000)
#define  HDMI21_P0_hd21_channel_align_g_force_realign_mask                       (0x00100000)
#define  HDMI21_P0_hd21_channel_align_g_lock_sel_mask                            (0x000F0000)
#define  HDMI21_P0_hd21_channel_align_g_unlock_num_mask                          (0x0000E000)
#define  HDMI21_P0_hd21_channel_align_g_unex_comma_mask                          (0x00001000)
#define  HDMI21_P0_hd21_channel_align_g_position_error_flag_mask                 (0x00000800)
#define  HDMI21_P0_hd21_channel_align_g_com_seq_lock_mask                        (0x00000100)
#define  HDMI21_P0_hd21_channel_align_g_sr_detect_mask                           (0x00000080)
#define  HDMI21_P0_hd21_channel_align_g_position_error_cnt_mask                  (0x0000007E)
#define  HDMI21_P0_hd21_channel_align_g_lock_bound_mask                          (0x00000001)
#define  HDMI21_P0_hd21_channel_align_g_scdc_force_realign(data)                 (0x80000000&((data)<<31))
#define  HDMI21_P0_hd21_channel_align_g_scdc_lock_sel(data)                      (0x78000000&((data)<<27))
#define  HDMI21_P0_hd21_channel_align_g_scdc_unlock_num(data)                    (0x07000000&((data)<<24))
#define  HDMI21_P0_hd21_channel_align_g_scdc_lock_bound(data)                    (0x00800000&((data)<<23))
#define  HDMI21_P0_hd21_channel_align_g_scdc_align_mode(data)                    (0x00400000&((data)<<22))
#define  HDMI21_P0_hd21_channel_align_g_align_mode(data)                         (0x00200000&((data)<<21))
#define  HDMI21_P0_hd21_channel_align_g_force_realign(data)                      (0x00100000&((data)<<20))
#define  HDMI21_P0_hd21_channel_align_g_lock_sel(data)                           (0x000F0000&((data)<<16))
#define  HDMI21_P0_hd21_channel_align_g_unlock_num(data)                         (0x0000E000&((data)<<13))
#define  HDMI21_P0_hd21_channel_align_g_unex_comma(data)                         (0x00001000&((data)<<12))
#define  HDMI21_P0_hd21_channel_align_g_position_error_flag(data)                (0x00000800&((data)<<11))
#define  HDMI21_P0_hd21_channel_align_g_com_seq_lock(data)                       (0x00000100&((data)<<8))
#define  HDMI21_P0_hd21_channel_align_g_sr_detect(data)                          (0x00000080&((data)<<7))
#define  HDMI21_P0_hd21_channel_align_g_position_error_cnt(data)                 (0x0000007E&((data)<<1))
#define  HDMI21_P0_hd21_channel_align_g_lock_bound(data)                         (0x00000001&(data))
#define  HDMI21_P0_hd21_channel_align_g_get_scdc_force_realign(data)             ((0x80000000&(data))>>31)
#define  HDMI21_P0_hd21_channel_align_g_get_scdc_lock_sel(data)                  ((0x78000000&(data))>>27)
#define  HDMI21_P0_hd21_channel_align_g_get_scdc_unlock_num(data)                ((0x07000000&(data))>>24)
#define  HDMI21_P0_hd21_channel_align_g_get_scdc_lock_bound(data)                ((0x00800000&(data))>>23)
#define  HDMI21_P0_hd21_channel_align_g_get_scdc_align_mode(data)                ((0x00400000&(data))>>22)
#define  HDMI21_P0_hd21_channel_align_g_get_align_mode(data)                     ((0x00200000&(data))>>21)
#define  HDMI21_P0_hd21_channel_align_g_get_force_realign(data)                  ((0x00100000&(data))>>20)
#define  HDMI21_P0_hd21_channel_align_g_get_lock_sel(data)                       ((0x000F0000&(data))>>16)
#define  HDMI21_P0_hd21_channel_align_g_get_unlock_num(data)                     ((0x0000E000&(data))>>13)
#define  HDMI21_P0_hd21_channel_align_g_get_unex_comma(data)                     ((0x00001000&(data))>>12)
#define  HDMI21_P0_hd21_channel_align_g_get_position_error_flag(data)            ((0x00000800&(data))>>11)
#define  HDMI21_P0_hd21_channel_align_g_get_com_seq_lock(data)                   ((0x00000100&(data))>>8)
#define  HDMI21_P0_hd21_channel_align_g_get_sr_detect(data)                      ((0x00000080&(data))>>7)
#define  HDMI21_P0_hd21_channel_align_g_get_position_error_cnt(data)             ((0x0000007E&(data))>>1)
#define  HDMI21_P0_hd21_channel_align_g_get_lock_bound(data)                     (0x00000001&(data))

#define  HDMI21_P0_hd21_channel_align_b                                         0x180B7020
#define  HDMI21_P0_hd21_channel_align_b_reg_addr                                 "0xB80B7020"
#define  HDMI21_P0_hd21_channel_align_b_reg                                      0xB80B7020
#define  HDMI21_P0_hd21_channel_align_b_inst_addr                                "0x0008"
#define  set_HDMI21_P0_hd21_channel_align_b_reg(data)                            (*((volatile unsigned int*)HDMI21_P0_hd21_channel_align_b_reg)=data)
#define  get_HDMI21_P0_hd21_channel_align_b_reg                                  (*((volatile unsigned int*)HDMI21_P0_hd21_channel_align_b_reg))
#define  HDMI21_P0_hd21_channel_align_b_scdc_force_realign_shift                 (31)
#define  HDMI21_P0_hd21_channel_align_b_scdc_lock_sel_shift                      (27)
#define  HDMI21_P0_hd21_channel_align_b_scdc_unlock_num_shift                    (24)
#define  HDMI21_P0_hd21_channel_align_b_scdc_lock_bound_shift                    (23)
#define  HDMI21_P0_hd21_channel_align_b_scdc_align_mode_shift                    (22)
#define  HDMI21_P0_hd21_channel_align_b_align_mode_shift                         (21)
#define  HDMI21_P0_hd21_channel_align_b_force_realign_shift                      (20)
#define  HDMI21_P0_hd21_channel_align_b_lock_sel_shift                           (16)
#define  HDMI21_P0_hd21_channel_align_b_unlock_num_shift                         (13)
#define  HDMI21_P0_hd21_channel_align_b_unex_comma_shift                         (12)
#define  HDMI21_P0_hd21_channel_align_b_position_error_flag_shift                (11)
#define  HDMI21_P0_hd21_channel_align_b_com_seq_lock_shift                       (8)
#define  HDMI21_P0_hd21_channel_align_b_sr_detect_shift                          (7)
#define  HDMI21_P0_hd21_channel_align_b_position_error_cnt_shift                 (1)
#define  HDMI21_P0_hd21_channel_align_b_lock_bound_shift                         (0)
#define  HDMI21_P0_hd21_channel_align_b_scdc_force_realign_mask                  (0x80000000)
#define  HDMI21_P0_hd21_channel_align_b_scdc_lock_sel_mask                       (0x78000000)
#define  HDMI21_P0_hd21_channel_align_b_scdc_unlock_num_mask                     (0x07000000)
#define  HDMI21_P0_hd21_channel_align_b_scdc_lock_bound_mask                     (0x00800000)
#define  HDMI21_P0_hd21_channel_align_b_scdc_align_mode_mask                     (0x00400000)
#define  HDMI21_P0_hd21_channel_align_b_align_mode_mask                          (0x00200000)
#define  HDMI21_P0_hd21_channel_align_b_force_realign_mask                       (0x00100000)
#define  HDMI21_P0_hd21_channel_align_b_lock_sel_mask                            (0x000F0000)
#define  HDMI21_P0_hd21_channel_align_b_unlock_num_mask                          (0x0000E000)
#define  HDMI21_P0_hd21_channel_align_b_unex_comma_mask                          (0x00001000)
#define  HDMI21_P0_hd21_channel_align_b_position_error_flag_mask                 (0x00000800)
#define  HDMI21_P0_hd21_channel_align_b_com_seq_lock_mask                        (0x00000100)
#define  HDMI21_P0_hd21_channel_align_b_sr_detect_mask                           (0x00000080)
#define  HDMI21_P0_hd21_channel_align_b_position_error_cnt_mask                  (0x0000007E)
#define  HDMI21_P0_hd21_channel_align_b_lock_bound_mask                          (0x00000001)
#define  HDMI21_P0_hd21_channel_align_b_scdc_force_realign(data)                 (0x80000000&((data)<<31))
#define  HDMI21_P0_hd21_channel_align_b_scdc_lock_sel(data)                      (0x78000000&((data)<<27))
#define  HDMI21_P0_hd21_channel_align_b_scdc_unlock_num(data)                    (0x07000000&((data)<<24))
#define  HDMI21_P0_hd21_channel_align_b_scdc_lock_bound(data)                    (0x00800000&((data)<<23))
#define  HDMI21_P0_hd21_channel_align_b_scdc_align_mode(data)                    (0x00400000&((data)<<22))
#define  HDMI21_P0_hd21_channel_align_b_align_mode(data)                         (0x00200000&((data)<<21))
#define  HDMI21_P0_hd21_channel_align_b_force_realign(data)                      (0x00100000&((data)<<20))
#define  HDMI21_P0_hd21_channel_align_b_lock_sel(data)                           (0x000F0000&((data)<<16))
#define  HDMI21_P0_hd21_channel_align_b_unlock_num(data)                         (0x0000E000&((data)<<13))
#define  HDMI21_P0_hd21_channel_align_b_unex_comma(data)                         (0x00001000&((data)<<12))
#define  HDMI21_P0_hd21_channel_align_b_position_error_flag(data)                (0x00000800&((data)<<11))
#define  HDMI21_P0_hd21_channel_align_b_com_seq_lock(data)                       (0x00000100&((data)<<8))
#define  HDMI21_P0_hd21_channel_align_b_sr_detect(data)                          (0x00000080&((data)<<7))
#define  HDMI21_P0_hd21_channel_align_b_position_error_cnt(data)                 (0x0000007E&((data)<<1))
#define  HDMI21_P0_hd21_channel_align_b_lock_bound(data)                         (0x00000001&(data))
#define  HDMI21_P0_hd21_channel_align_b_get_scdc_force_realign(data)             ((0x80000000&(data))>>31)
#define  HDMI21_P0_hd21_channel_align_b_get_scdc_lock_sel(data)                  ((0x78000000&(data))>>27)
#define  HDMI21_P0_hd21_channel_align_b_get_scdc_unlock_num(data)                ((0x07000000&(data))>>24)
#define  HDMI21_P0_hd21_channel_align_b_get_scdc_lock_bound(data)                ((0x00800000&(data))>>23)
#define  HDMI21_P0_hd21_channel_align_b_get_scdc_align_mode(data)                ((0x00400000&(data))>>22)
#define  HDMI21_P0_hd21_channel_align_b_get_align_mode(data)                     ((0x00200000&(data))>>21)
#define  HDMI21_P0_hd21_channel_align_b_get_force_realign(data)                  ((0x00100000&(data))>>20)
#define  HDMI21_P0_hd21_channel_align_b_get_lock_sel(data)                       ((0x000F0000&(data))>>16)
#define  HDMI21_P0_hd21_channel_align_b_get_unlock_num(data)                     ((0x0000E000&(data))>>13)
#define  HDMI21_P0_hd21_channel_align_b_get_unex_comma(data)                     ((0x00001000&(data))>>12)
#define  HDMI21_P0_hd21_channel_align_b_get_position_error_flag(data)            ((0x00000800&(data))>>11)
#define  HDMI21_P0_hd21_channel_align_b_get_com_seq_lock(data)                   ((0x00000100&(data))>>8)
#define  HDMI21_P0_hd21_channel_align_b_get_sr_detect(data)                      ((0x00000080&(data))>>7)
#define  HDMI21_P0_hd21_channel_align_b_get_position_error_cnt(data)             ((0x0000007E&(data))>>1)
#define  HDMI21_P0_hd21_channel_align_b_get_lock_bound(data)                     (0x00000001&(data))

#define  HDMI21_P0_hd21_ch_sync_ctrl                                            0x180B7024
#define  HDMI21_P0_hd21_ch_sync_ctrl_reg_addr                                    "0xB80B7024"
#define  HDMI21_P0_hd21_ch_sync_ctrl_reg                                         0xB80B7024
#define  HDMI21_P0_hd21_ch_sync_ctrl_inst_addr                                   "0x0009"
#define  set_HDMI21_P0_hd21_ch_sync_ctrl_reg(data)                               (*((volatile unsigned int*)HDMI21_P0_hd21_ch_sync_ctrl_reg)=data)
#define  get_HDMI21_P0_hd21_ch_sync_ctrl_reg                                     (*((volatile unsigned int*)HDMI21_P0_hd21_ch_sync_ctrl_reg))
#define  HDMI21_P0_hd21_ch_sync_ctrl_ch_sync_sel_shift                           (20)
#define  HDMI21_P0_hd21_ch_sync_ctrl_dummy_19_17_shift                           (17)
#define  HDMI21_P0_hd21_ch_sync_ctrl_rden_thr_shift                              (12)
#define  HDMI21_P0_hd21_ch_sync_ctrl_dummy_11_9_shift                            (9)
#define  HDMI21_P0_hd21_ch_sync_ctrl_udwater_thr_shift                           (4)
#define  HDMI21_P0_hd21_ch_sync_ctrl_dummy_3_shift                               (3)
#define  HDMI21_P0_hd21_ch_sync_ctrl_flush_shift                                 (2)
#define  HDMI21_P0_hd21_ch_sync_ctrl_ch_afifo_airq_en_shift                      (1)
#define  HDMI21_P0_hd21_ch_sync_ctrl_ch_afifo_irq_en_shift                       (0)
#define  HDMI21_P0_hd21_ch_sync_ctrl_ch_sync_sel_mask                            (0x00300000)
#define  HDMI21_P0_hd21_ch_sync_ctrl_dummy_19_17_mask                            (0x000E0000)
#define  HDMI21_P0_hd21_ch_sync_ctrl_rden_thr_mask                               (0x0001F000)
#define  HDMI21_P0_hd21_ch_sync_ctrl_dummy_11_9_mask                             (0x00000E00)
#define  HDMI21_P0_hd21_ch_sync_ctrl_udwater_thr_mask                            (0x000001F0)
#define  HDMI21_P0_hd21_ch_sync_ctrl_dummy_3_mask                                (0x00000008)
#define  HDMI21_P0_hd21_ch_sync_ctrl_flush_mask                                  (0x00000004)
#define  HDMI21_P0_hd21_ch_sync_ctrl_ch_afifo_airq_en_mask                       (0x00000002)
#define  HDMI21_P0_hd21_ch_sync_ctrl_ch_afifo_irq_en_mask                        (0x00000001)
#define  HDMI21_P0_hd21_ch_sync_ctrl_ch_sync_sel(data)                           (0x00300000&((data)<<20))
#define  HDMI21_P0_hd21_ch_sync_ctrl_dummy_19_17(data)                           (0x000E0000&((data)<<17))
#define  HDMI21_P0_hd21_ch_sync_ctrl_rden_thr(data)                              (0x0001F000&((data)<<12))
#define  HDMI21_P0_hd21_ch_sync_ctrl_dummy_11_9(data)                            (0x00000E00&((data)<<9))
#define  HDMI21_P0_hd21_ch_sync_ctrl_udwater_thr(data)                           (0x000001F0&((data)<<4))
#define  HDMI21_P0_hd21_ch_sync_ctrl_dummy_3(data)                               (0x00000008&((data)<<3))
#define  HDMI21_P0_hd21_ch_sync_ctrl_flush(data)                                 (0x00000004&((data)<<2))
#define  HDMI21_P0_hd21_ch_sync_ctrl_ch_afifo_airq_en(data)                      (0x00000002&((data)<<1))
#define  HDMI21_P0_hd21_ch_sync_ctrl_ch_afifo_irq_en(data)                       (0x00000001&(data))
#define  HDMI21_P0_hd21_ch_sync_ctrl_get_ch_sync_sel(data)                       ((0x00300000&(data))>>20)
#define  HDMI21_P0_hd21_ch_sync_ctrl_get_dummy_19_17(data)                       ((0x000E0000&(data))>>17)
#define  HDMI21_P0_hd21_ch_sync_ctrl_get_rden_thr(data)                          ((0x0001F000&(data))>>12)
#define  HDMI21_P0_hd21_ch_sync_ctrl_get_dummy_11_9(data)                        ((0x00000E00&(data))>>9)
#define  HDMI21_P0_hd21_ch_sync_ctrl_get_udwater_thr(data)                       ((0x000001F0&(data))>>4)
#define  HDMI21_P0_hd21_ch_sync_ctrl_get_dummy_3(data)                           ((0x00000008&(data))>>3)
#define  HDMI21_P0_hd21_ch_sync_ctrl_get_flush(data)                             ((0x00000004&(data))>>2)
#define  HDMI21_P0_hd21_ch_sync_ctrl_get_ch_afifo_airq_en(data)                  ((0x00000002&(data))>>1)
#define  HDMI21_P0_hd21_ch_sync_ctrl_get_ch_afifo_irq_en(data)                   (0x00000001&(data))

#define  HDMI21_P0_hd21_ch_sync_status                                          0x180B7028
#define  HDMI21_P0_hd21_ch_sync_status_reg_addr                                  "0xB80B7028"
#define  HDMI21_P0_hd21_ch_sync_status_reg                                       0xB80B7028
#define  HDMI21_P0_hd21_ch_sync_status_inst_addr                                 "0x000A"
#define  set_HDMI21_P0_hd21_ch_sync_status_reg(data)                             (*((volatile unsigned int*)HDMI21_P0_hd21_ch_sync_status_reg)=data)
#define  get_HDMI21_P0_hd21_ch_sync_status_reg                                   (*((volatile unsigned int*)HDMI21_P0_hd21_ch_sync_status_reg))
#define  HDMI21_P0_hd21_ch_sync_status_rgbc_de_align_flag_shift                  (0)
#define  HDMI21_P0_hd21_ch_sync_status_rgbc_de_align_flag_mask                   (0x00000001)
#define  HDMI21_P0_hd21_ch_sync_status_rgbc_de_align_flag(data)                  (0x00000001&(data))
#define  HDMI21_P0_hd21_ch_sync_status_get_rgbc_de_align_flag(data)              (0x00000001&(data))

#define  HDMI21_P0_hd21_ch_sync_r                                               0x180B702C
#define  HDMI21_P0_hd21_ch_sync_r_reg_addr                                       "0xB80B702C"
#define  HDMI21_P0_hd21_ch_sync_r_reg                                            0xB80B702C
#define  HDMI21_P0_hd21_ch_sync_r_inst_addr                                      "0x000B"
#define  set_HDMI21_P0_hd21_ch_sync_r_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_hd21_ch_sync_r_reg)=data)
#define  get_HDMI21_P0_hd21_ch_sync_r_reg                                        (*((volatile unsigned int*)HDMI21_P0_hd21_ch_sync_r_reg))
#define  HDMI21_P0_hd21_ch_sync_r_rw_water_lv_shift                              (6)
#define  HDMI21_P0_hd21_ch_sync_r_rflush_flag_shift                              (5)
#define  HDMI21_P0_hd21_ch_sync_r_rwclk_det_timeout_flag_shift                   (4)
#define  HDMI21_P0_hd21_ch_sync_r_wrclk_det_timeout_flag_shift                   (3)
#define  HDMI21_P0_hd21_ch_sync_r_rudflow_flag_shift                             (2)
#define  HDMI21_P0_hd21_ch_sync_r_wovflow_flag_shift                             (1)
#define  HDMI21_P0_hd21_ch_sync_r_ch_afifo_en_shift                              (0)
#define  HDMI21_P0_hd21_ch_sync_r_rw_water_lv_mask                               (0x000007C0)
#define  HDMI21_P0_hd21_ch_sync_r_rflush_flag_mask                               (0x00000020)
#define  HDMI21_P0_hd21_ch_sync_r_rwclk_det_timeout_flag_mask                    (0x00000010)
#define  HDMI21_P0_hd21_ch_sync_r_wrclk_det_timeout_flag_mask                    (0x00000008)
#define  HDMI21_P0_hd21_ch_sync_r_rudflow_flag_mask                              (0x00000004)
#define  HDMI21_P0_hd21_ch_sync_r_wovflow_flag_mask                              (0x00000002)
#define  HDMI21_P0_hd21_ch_sync_r_ch_afifo_en_mask                               (0x00000001)
#define  HDMI21_P0_hd21_ch_sync_r_rw_water_lv(data)                              (0x000007C0&((data)<<6))
#define  HDMI21_P0_hd21_ch_sync_r_rflush_flag(data)                              (0x00000020&((data)<<5))
#define  HDMI21_P0_hd21_ch_sync_r_rwclk_det_timeout_flag(data)                   (0x00000010&((data)<<4))
#define  HDMI21_P0_hd21_ch_sync_r_wrclk_det_timeout_flag(data)                   (0x00000008&((data)<<3))
#define  HDMI21_P0_hd21_ch_sync_r_rudflow_flag(data)                             (0x00000004&((data)<<2))
#define  HDMI21_P0_hd21_ch_sync_r_wovflow_flag(data)                             (0x00000002&((data)<<1))
#define  HDMI21_P0_hd21_ch_sync_r_ch_afifo_en(data)                              (0x00000001&(data))
#define  HDMI21_P0_hd21_ch_sync_r_get_rw_water_lv(data)                          ((0x000007C0&(data))>>6)
#define  HDMI21_P0_hd21_ch_sync_r_get_rflush_flag(data)                          ((0x00000020&(data))>>5)
#define  HDMI21_P0_hd21_ch_sync_r_get_rwclk_det_timeout_flag(data)               ((0x00000010&(data))>>4)
#define  HDMI21_P0_hd21_ch_sync_r_get_wrclk_det_timeout_flag(data)               ((0x00000008&(data))>>3)
#define  HDMI21_P0_hd21_ch_sync_r_get_rudflow_flag(data)                         ((0x00000004&(data))>>2)
#define  HDMI21_P0_hd21_ch_sync_r_get_wovflow_flag(data)                         ((0x00000002&(data))>>1)
#define  HDMI21_P0_hd21_ch_sync_r_get_ch_afifo_en(data)                          (0x00000001&(data))

#define  HDMI21_P0_hd21_ch_sync_g                                               0x180B7030
#define  HDMI21_P0_hd21_ch_sync_g_reg_addr                                       "0xB80B7030"
#define  HDMI21_P0_hd21_ch_sync_g_reg                                            0xB80B7030
#define  HDMI21_P0_hd21_ch_sync_g_inst_addr                                      "0x000C"
#define  set_HDMI21_P0_hd21_ch_sync_g_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_hd21_ch_sync_g_reg)=data)
#define  get_HDMI21_P0_hd21_ch_sync_g_reg                                        (*((volatile unsigned int*)HDMI21_P0_hd21_ch_sync_g_reg))
#define  HDMI21_P0_hd21_ch_sync_g_rw_water_lv_shift                              (6)
#define  HDMI21_P0_hd21_ch_sync_g_rflush_flag_shift                              (5)
#define  HDMI21_P0_hd21_ch_sync_g_rwclk_det_timeout_flag_shift                   (4)
#define  HDMI21_P0_hd21_ch_sync_g_wrclk_det_timeout_flag_shift                   (3)
#define  HDMI21_P0_hd21_ch_sync_g_rudflow_flag_shift                             (2)
#define  HDMI21_P0_hd21_ch_sync_g_wovflow_flag_shift                             (1)
#define  HDMI21_P0_hd21_ch_sync_g_ch_afifo_en_shift                              (0)
#define  HDMI21_P0_hd21_ch_sync_g_rw_water_lv_mask                               (0x000007C0)
#define  HDMI21_P0_hd21_ch_sync_g_rflush_flag_mask                               (0x00000020)
#define  HDMI21_P0_hd21_ch_sync_g_rwclk_det_timeout_flag_mask                    (0x00000010)
#define  HDMI21_P0_hd21_ch_sync_g_wrclk_det_timeout_flag_mask                    (0x00000008)
#define  HDMI21_P0_hd21_ch_sync_g_rudflow_flag_mask                              (0x00000004)
#define  HDMI21_P0_hd21_ch_sync_g_wovflow_flag_mask                              (0x00000002)
#define  HDMI21_P0_hd21_ch_sync_g_ch_afifo_en_mask                               (0x00000001)
#define  HDMI21_P0_hd21_ch_sync_g_rw_water_lv(data)                              (0x000007C0&((data)<<6))
#define  HDMI21_P0_hd21_ch_sync_g_rflush_flag(data)                              (0x00000020&((data)<<5))
#define  HDMI21_P0_hd21_ch_sync_g_rwclk_det_timeout_flag(data)                   (0x00000010&((data)<<4))
#define  HDMI21_P0_hd21_ch_sync_g_wrclk_det_timeout_flag(data)                   (0x00000008&((data)<<3))
#define  HDMI21_P0_hd21_ch_sync_g_rudflow_flag(data)                             (0x00000004&((data)<<2))
#define  HDMI21_P0_hd21_ch_sync_g_wovflow_flag(data)                             (0x00000002&((data)<<1))
#define  HDMI21_P0_hd21_ch_sync_g_ch_afifo_en(data)                              (0x00000001&(data))
#define  HDMI21_P0_hd21_ch_sync_g_get_rw_water_lv(data)                          ((0x000007C0&(data))>>6)
#define  HDMI21_P0_hd21_ch_sync_g_get_rflush_flag(data)                          ((0x00000020&(data))>>5)
#define  HDMI21_P0_hd21_ch_sync_g_get_rwclk_det_timeout_flag(data)               ((0x00000010&(data))>>4)
#define  HDMI21_P0_hd21_ch_sync_g_get_wrclk_det_timeout_flag(data)               ((0x00000008&(data))>>3)
#define  HDMI21_P0_hd21_ch_sync_g_get_rudflow_flag(data)                         ((0x00000004&(data))>>2)
#define  HDMI21_P0_hd21_ch_sync_g_get_wovflow_flag(data)                         ((0x00000002&(data))>>1)
#define  HDMI21_P0_hd21_ch_sync_g_get_ch_afifo_en(data)                          (0x00000001&(data))

#define  HDMI21_P0_hd21_ch_sync_b                                               0x180B7034
#define  HDMI21_P0_hd21_ch_sync_b_reg_addr                                       "0xB80B7034"
#define  HDMI21_P0_hd21_ch_sync_b_reg                                            0xB80B7034
#define  HDMI21_P0_hd21_ch_sync_b_inst_addr                                      "0x000D"
#define  set_HDMI21_P0_hd21_ch_sync_b_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_hd21_ch_sync_b_reg)=data)
#define  get_HDMI21_P0_hd21_ch_sync_b_reg                                        (*((volatile unsigned int*)HDMI21_P0_hd21_ch_sync_b_reg))
#define  HDMI21_P0_hd21_ch_sync_b_rw_water_lv_shift                              (6)
#define  HDMI21_P0_hd21_ch_sync_b_rflush_flag_shift                              (5)
#define  HDMI21_P0_hd21_ch_sync_b_rwclk_det_timeout_flag_shift                   (4)
#define  HDMI21_P0_hd21_ch_sync_b_wrclk_det_timeout_flag_shift                   (3)
#define  HDMI21_P0_hd21_ch_sync_b_rudflow_flag_shift                             (2)
#define  HDMI21_P0_hd21_ch_sync_b_wovflow_flag_shift                             (1)
#define  HDMI21_P0_hd21_ch_sync_b_ch_afifo_en_shift                              (0)
#define  HDMI21_P0_hd21_ch_sync_b_rw_water_lv_mask                               (0x000007C0)
#define  HDMI21_P0_hd21_ch_sync_b_rflush_flag_mask                               (0x00000020)
#define  HDMI21_P0_hd21_ch_sync_b_rwclk_det_timeout_flag_mask                    (0x00000010)
#define  HDMI21_P0_hd21_ch_sync_b_wrclk_det_timeout_flag_mask                    (0x00000008)
#define  HDMI21_P0_hd21_ch_sync_b_rudflow_flag_mask                              (0x00000004)
#define  HDMI21_P0_hd21_ch_sync_b_wovflow_flag_mask                              (0x00000002)
#define  HDMI21_P0_hd21_ch_sync_b_ch_afifo_en_mask                               (0x00000001)
#define  HDMI21_P0_hd21_ch_sync_b_rw_water_lv(data)                              (0x000007C0&((data)<<6))
#define  HDMI21_P0_hd21_ch_sync_b_rflush_flag(data)                              (0x00000020&((data)<<5))
#define  HDMI21_P0_hd21_ch_sync_b_rwclk_det_timeout_flag(data)                   (0x00000010&((data)<<4))
#define  HDMI21_P0_hd21_ch_sync_b_wrclk_det_timeout_flag(data)                   (0x00000008&((data)<<3))
#define  HDMI21_P0_hd21_ch_sync_b_rudflow_flag(data)                             (0x00000004&((data)<<2))
#define  HDMI21_P0_hd21_ch_sync_b_wovflow_flag(data)                             (0x00000002&((data)<<1))
#define  HDMI21_P0_hd21_ch_sync_b_ch_afifo_en(data)                              (0x00000001&(data))
#define  HDMI21_P0_hd21_ch_sync_b_get_rw_water_lv(data)                          ((0x000007C0&(data))>>6)
#define  HDMI21_P0_hd21_ch_sync_b_get_rflush_flag(data)                          ((0x00000020&(data))>>5)
#define  HDMI21_P0_hd21_ch_sync_b_get_rwclk_det_timeout_flag(data)               ((0x00000010&(data))>>4)
#define  HDMI21_P0_hd21_ch_sync_b_get_wrclk_det_timeout_flag(data)               ((0x00000008&(data))>>3)
#define  HDMI21_P0_hd21_ch_sync_b_get_rudflow_flag(data)                         ((0x00000004&(data))>>2)
#define  HDMI21_P0_hd21_ch_sync_b_get_wovflow_flag(data)                         ((0x00000002&(data))>>1)
#define  HDMI21_P0_hd21_ch_sync_b_get_ch_afifo_en(data)                          (0x00000001&(data))

#define  HDMI21_P0_hd21_ch_sync_c                                               0x180B7038
#define  HDMI21_P0_hd21_ch_sync_c_reg_addr                                       "0xB80B7038"
#define  HDMI21_P0_hd21_ch_sync_c_reg                                            0xB80B7038
#define  HDMI21_P0_hd21_ch_sync_c_inst_addr                                      "0x000E"
#define  set_HDMI21_P0_hd21_ch_sync_c_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_hd21_ch_sync_c_reg)=data)
#define  get_HDMI21_P0_hd21_ch_sync_c_reg                                        (*((volatile unsigned int*)HDMI21_P0_hd21_ch_sync_c_reg))
#define  HDMI21_P0_hd21_ch_sync_c_rw_water_lv_shift                              (6)
#define  HDMI21_P0_hd21_ch_sync_c_rflush_flag_shift                              (5)
#define  HDMI21_P0_hd21_ch_sync_c_rwclk_det_timeout_flag_shift                   (4)
#define  HDMI21_P0_hd21_ch_sync_c_wrclk_det_timeout_flag_shift                   (3)
#define  HDMI21_P0_hd21_ch_sync_c_rudflow_flag_shift                             (2)
#define  HDMI21_P0_hd21_ch_sync_c_wovflow_flag_shift                             (1)
#define  HDMI21_P0_hd21_ch_sync_c_ch_afifo_en_shift                              (0)
#define  HDMI21_P0_hd21_ch_sync_c_rw_water_lv_mask                               (0x000007C0)
#define  HDMI21_P0_hd21_ch_sync_c_rflush_flag_mask                               (0x00000020)
#define  HDMI21_P0_hd21_ch_sync_c_rwclk_det_timeout_flag_mask                    (0x00000010)
#define  HDMI21_P0_hd21_ch_sync_c_wrclk_det_timeout_flag_mask                    (0x00000008)
#define  HDMI21_P0_hd21_ch_sync_c_rudflow_flag_mask                              (0x00000004)
#define  HDMI21_P0_hd21_ch_sync_c_wovflow_flag_mask                              (0x00000002)
#define  HDMI21_P0_hd21_ch_sync_c_ch_afifo_en_mask                               (0x00000001)
#define  HDMI21_P0_hd21_ch_sync_c_rw_water_lv(data)                              (0x000007C0&((data)<<6))
#define  HDMI21_P0_hd21_ch_sync_c_rflush_flag(data)                              (0x00000020&((data)<<5))
#define  HDMI21_P0_hd21_ch_sync_c_rwclk_det_timeout_flag(data)                   (0x00000010&((data)<<4))
#define  HDMI21_P0_hd21_ch_sync_c_wrclk_det_timeout_flag(data)                   (0x00000008&((data)<<3))
#define  HDMI21_P0_hd21_ch_sync_c_rudflow_flag(data)                             (0x00000004&((data)<<2))
#define  HDMI21_P0_hd21_ch_sync_c_wovflow_flag(data)                             (0x00000002&((data)<<1))
#define  HDMI21_P0_hd21_ch_sync_c_ch_afifo_en(data)                              (0x00000001&(data))
#define  HDMI21_P0_hd21_ch_sync_c_get_rw_water_lv(data)                          ((0x000007C0&(data))>>6)
#define  HDMI21_P0_hd21_ch_sync_c_get_rflush_flag(data)                          ((0x00000020&(data))>>5)
#define  HDMI21_P0_hd21_ch_sync_c_get_rwclk_det_timeout_flag(data)               ((0x00000010&(data))>>4)
#define  HDMI21_P0_hd21_ch_sync_c_get_wrclk_det_timeout_flag(data)               ((0x00000008&(data))>>3)
#define  HDMI21_P0_hd21_ch_sync_c_get_rudflow_flag(data)                         ((0x00000004&(data))>>2)
#define  HDMI21_P0_hd21_ch_sync_c_get_wovflow_flag(data)                         ((0x00000002&(data))>>1)
#define  HDMI21_P0_hd21_ch_sync_c_get_ch_afifo_en(data)                          (0x00000001&(data))

#define  HDMI21_P0_hd21_errdet_r_ctrl                                           0x180B703C
#define  HDMI21_P0_hd21_errdet_r_ctrl_reg_addr                                   "0xB80B703C"
#define  HDMI21_P0_hd21_errdet_r_ctrl_reg                                        0xB80B703C
#define  HDMI21_P0_hd21_errdet_r_ctrl_inst_addr                                  "0x000F"
#define  set_HDMI21_P0_hd21_errdet_r_ctrl_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_r_ctrl_reg)=data)
#define  get_HDMI21_P0_hd21_errdet_r_ctrl_reg                                    (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_r_ctrl_reg))
#define  HDMI21_P0_hd21_errdet_r_ctrl_char_en_shift                              (25)
#define  HDMI21_P0_hd21_errdet_r_ctrl_disp_en_shift                              (24)
#define  HDMI21_P0_hd21_errdet_r_ctrl_disp_thr_shift                             (12)
#define  HDMI21_P0_hd21_errdet_r_ctrl_char_thr_shift                             (0)
#define  HDMI21_P0_hd21_errdet_r_ctrl_char_en_mask                               (0x02000000)
#define  HDMI21_P0_hd21_errdet_r_ctrl_disp_en_mask                               (0x01000000)
#define  HDMI21_P0_hd21_errdet_r_ctrl_disp_thr_mask                              (0x003FF000)
#define  HDMI21_P0_hd21_errdet_r_ctrl_char_thr_mask                              (0x000003FF)
#define  HDMI21_P0_hd21_errdet_r_ctrl_char_en(data)                              (0x02000000&((data)<<25))
#define  HDMI21_P0_hd21_errdet_r_ctrl_disp_en(data)                              (0x01000000&((data)<<24))
#define  HDMI21_P0_hd21_errdet_r_ctrl_disp_thr(data)                             (0x003FF000&((data)<<12))
#define  HDMI21_P0_hd21_errdet_r_ctrl_char_thr(data)                             (0x000003FF&(data))
#define  HDMI21_P0_hd21_errdet_r_ctrl_get_char_en(data)                          ((0x02000000&(data))>>25)
#define  HDMI21_P0_hd21_errdet_r_ctrl_get_disp_en(data)                          ((0x01000000&(data))>>24)
#define  HDMI21_P0_hd21_errdet_r_ctrl_get_disp_thr(data)                         ((0x003FF000&(data))>>12)
#define  HDMI21_P0_hd21_errdet_r_ctrl_get_char_thr(data)                         (0x000003FF&(data))

#define  HDMI21_P0_hd21_errdet_g_ctrl                                           0x180B7040
#define  HDMI21_P0_hd21_errdet_g_ctrl_reg_addr                                   "0xB80B7040"
#define  HDMI21_P0_hd21_errdet_g_ctrl_reg                                        0xB80B7040
#define  HDMI21_P0_hd21_errdet_g_ctrl_inst_addr                                  "0x0010"
#define  set_HDMI21_P0_hd21_errdet_g_ctrl_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_g_ctrl_reg)=data)
#define  get_HDMI21_P0_hd21_errdet_g_ctrl_reg                                    (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_g_ctrl_reg))
#define  HDMI21_P0_hd21_errdet_g_ctrl_char_en_shift                              (25)
#define  HDMI21_P0_hd21_errdet_g_ctrl_disp_en_shift                              (24)
#define  HDMI21_P0_hd21_errdet_g_ctrl_disp_thr_shift                             (12)
#define  HDMI21_P0_hd21_errdet_g_ctrl_char_thr_shift                             (0)
#define  HDMI21_P0_hd21_errdet_g_ctrl_char_en_mask                               (0x02000000)
#define  HDMI21_P0_hd21_errdet_g_ctrl_disp_en_mask                               (0x01000000)
#define  HDMI21_P0_hd21_errdet_g_ctrl_disp_thr_mask                              (0x003FF000)
#define  HDMI21_P0_hd21_errdet_g_ctrl_char_thr_mask                              (0x000003FF)
#define  HDMI21_P0_hd21_errdet_g_ctrl_char_en(data)                              (0x02000000&((data)<<25))
#define  HDMI21_P0_hd21_errdet_g_ctrl_disp_en(data)                              (0x01000000&((data)<<24))
#define  HDMI21_P0_hd21_errdet_g_ctrl_disp_thr(data)                             (0x003FF000&((data)<<12))
#define  HDMI21_P0_hd21_errdet_g_ctrl_char_thr(data)                             (0x000003FF&(data))
#define  HDMI21_P0_hd21_errdet_g_ctrl_get_char_en(data)                          ((0x02000000&(data))>>25)
#define  HDMI21_P0_hd21_errdet_g_ctrl_get_disp_en(data)                          ((0x01000000&(data))>>24)
#define  HDMI21_P0_hd21_errdet_g_ctrl_get_disp_thr(data)                         ((0x003FF000&(data))>>12)
#define  HDMI21_P0_hd21_errdet_g_ctrl_get_char_thr(data)                         (0x000003FF&(data))

#define  HDMI21_P0_hd21_errdet_b_ctrl                                           0x180B7044
#define  HDMI21_P0_hd21_errdet_b_ctrl_reg_addr                                   "0xB80B7044"
#define  HDMI21_P0_hd21_errdet_b_ctrl_reg                                        0xB80B7044
#define  HDMI21_P0_hd21_errdet_b_ctrl_inst_addr                                  "0x0011"
#define  set_HDMI21_P0_hd21_errdet_b_ctrl_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_b_ctrl_reg)=data)
#define  get_HDMI21_P0_hd21_errdet_b_ctrl_reg                                    (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_b_ctrl_reg))
#define  HDMI21_P0_hd21_errdet_b_ctrl_char_en_shift                              (25)
#define  HDMI21_P0_hd21_errdet_b_ctrl_disp_en_shift                              (24)
#define  HDMI21_P0_hd21_errdet_b_ctrl_disp_thr_shift                             (12)
#define  HDMI21_P0_hd21_errdet_b_ctrl_char_thr_shift                             (0)
#define  HDMI21_P0_hd21_errdet_b_ctrl_char_en_mask                               (0x02000000)
#define  HDMI21_P0_hd21_errdet_b_ctrl_disp_en_mask                               (0x01000000)
#define  HDMI21_P0_hd21_errdet_b_ctrl_disp_thr_mask                              (0x003FF000)
#define  HDMI21_P0_hd21_errdet_b_ctrl_char_thr_mask                              (0x000003FF)
#define  HDMI21_P0_hd21_errdet_b_ctrl_char_en(data)                              (0x02000000&((data)<<25))
#define  HDMI21_P0_hd21_errdet_b_ctrl_disp_en(data)                              (0x01000000&((data)<<24))
#define  HDMI21_P0_hd21_errdet_b_ctrl_disp_thr(data)                             (0x003FF000&((data)<<12))
#define  HDMI21_P0_hd21_errdet_b_ctrl_char_thr(data)                             (0x000003FF&(data))
#define  HDMI21_P0_hd21_errdet_b_ctrl_get_char_en(data)                          ((0x02000000&(data))>>25)
#define  HDMI21_P0_hd21_errdet_b_ctrl_get_disp_en(data)                          ((0x01000000&(data))>>24)
#define  HDMI21_P0_hd21_errdet_b_ctrl_get_disp_thr(data)                         ((0x003FF000&(data))>>12)
#define  HDMI21_P0_hd21_errdet_b_ctrl_get_char_thr(data)                         (0x000003FF&(data))

#define  HDMI21_P0_hd21_errdet_c_ctrl                                           0x180B7048
#define  HDMI21_P0_hd21_errdet_c_ctrl_reg_addr                                   "0xB80B7048"
#define  HDMI21_P0_hd21_errdet_c_ctrl_reg                                        0xB80B7048
#define  HDMI21_P0_hd21_errdet_c_ctrl_inst_addr                                  "0x0012"
#define  set_HDMI21_P0_hd21_errdet_c_ctrl_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_c_ctrl_reg)=data)
#define  get_HDMI21_P0_hd21_errdet_c_ctrl_reg                                    (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_c_ctrl_reg))
#define  HDMI21_P0_hd21_errdet_c_ctrl_char_en_shift                              (25)
#define  HDMI21_P0_hd21_errdet_c_ctrl_disp_en_shift                              (24)
#define  HDMI21_P0_hd21_errdet_c_ctrl_disp_thr_shift                             (12)
#define  HDMI21_P0_hd21_errdet_c_ctrl_char_thr_shift                             (0)
#define  HDMI21_P0_hd21_errdet_c_ctrl_char_en_mask                               (0x02000000)
#define  HDMI21_P0_hd21_errdet_c_ctrl_disp_en_mask                               (0x01000000)
#define  HDMI21_P0_hd21_errdet_c_ctrl_disp_thr_mask                              (0x003FF000)
#define  HDMI21_P0_hd21_errdet_c_ctrl_char_thr_mask                              (0x000003FF)
#define  HDMI21_P0_hd21_errdet_c_ctrl_char_en(data)                              (0x02000000&((data)<<25))
#define  HDMI21_P0_hd21_errdet_c_ctrl_disp_en(data)                              (0x01000000&((data)<<24))
#define  HDMI21_P0_hd21_errdet_c_ctrl_disp_thr(data)                             (0x003FF000&((data)<<12))
#define  HDMI21_P0_hd21_errdet_c_ctrl_char_thr(data)                             (0x000003FF&(data))
#define  HDMI21_P0_hd21_errdet_c_ctrl_get_char_en(data)                          ((0x02000000&(data))>>25)
#define  HDMI21_P0_hd21_errdet_c_ctrl_get_disp_en(data)                          ((0x01000000&(data))>>24)
#define  HDMI21_P0_hd21_errdet_c_ctrl_get_disp_thr(data)                         ((0x003FF000&(data))>>12)
#define  HDMI21_P0_hd21_errdet_c_ctrl_get_char_thr(data)                         (0x000003FF&(data))

#define  HDMI21_P0_hd21_errdet_r_disparity                                      0x180B705C
#define  HDMI21_P0_hd21_errdet_r_disparity_reg_addr                              "0xB80B705C"
#define  HDMI21_P0_hd21_errdet_r_disparity_reg                                   0xB80B705C
#define  HDMI21_P0_hd21_errdet_r_disparity_inst_addr                             "0x0013"
#define  set_HDMI21_P0_hd21_errdet_r_disparity_reg(data)                         (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_r_disparity_reg)=data)
#define  get_HDMI21_P0_hd21_errdet_r_disparity_reg                               (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_r_disparity_reg))
#define  HDMI21_P0_hd21_errdet_r_disparity_error_flag_shift                      (28)
#define  HDMI21_P0_hd21_errdet_r_disparity_error_cnt_sb_max_shift                (16)
#define  HDMI21_P0_hd21_errdet_r_disparity_error_cnt_acc_shift                   (0)
#define  HDMI21_P0_hd21_errdet_r_disparity_error_flag_mask                       (0x10000000)
#define  HDMI21_P0_hd21_errdet_r_disparity_error_cnt_sb_max_mask                 (0x03FF0000)
#define  HDMI21_P0_hd21_errdet_r_disparity_error_cnt_acc_mask                    (0x0000FFFF)
#define  HDMI21_P0_hd21_errdet_r_disparity_error_flag(data)                      (0x10000000&((data)<<28))
#define  HDMI21_P0_hd21_errdet_r_disparity_error_cnt_sb_max(data)                (0x03FF0000&((data)<<16))
#define  HDMI21_P0_hd21_errdet_r_disparity_error_cnt_acc(data)                   (0x0000FFFF&(data))
#define  HDMI21_P0_hd21_errdet_r_disparity_get_error_flag(data)                  ((0x10000000&(data))>>28)
#define  HDMI21_P0_hd21_errdet_r_disparity_get_error_cnt_sb_max(data)            ((0x03FF0000&(data))>>16)
#define  HDMI21_P0_hd21_errdet_r_disparity_get_error_cnt_acc(data)               (0x0000FFFF&(data))

#define  HDMI21_P0_hd21_errdet_g_disparity                                      0x180B7060
#define  HDMI21_P0_hd21_errdet_g_disparity_reg_addr                              "0xB80B7060"
#define  HDMI21_P0_hd21_errdet_g_disparity_reg                                   0xB80B7060
#define  HDMI21_P0_hd21_errdet_g_disparity_inst_addr                             "0x0014"
#define  set_HDMI21_P0_hd21_errdet_g_disparity_reg(data)                         (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_g_disparity_reg)=data)
#define  get_HDMI21_P0_hd21_errdet_g_disparity_reg                               (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_g_disparity_reg))
#define  HDMI21_P0_hd21_errdet_g_disparity_error_flag_shift                      (28)
#define  HDMI21_P0_hd21_errdet_g_disparity_error_cnt_sb_max_shift                (16)
#define  HDMI21_P0_hd21_errdet_g_disparity_error_cnt_acc_shift                   (0)
#define  HDMI21_P0_hd21_errdet_g_disparity_error_flag_mask                       (0x10000000)
#define  HDMI21_P0_hd21_errdet_g_disparity_error_cnt_sb_max_mask                 (0x03FF0000)
#define  HDMI21_P0_hd21_errdet_g_disparity_error_cnt_acc_mask                    (0x0000FFFF)
#define  HDMI21_P0_hd21_errdet_g_disparity_error_flag(data)                      (0x10000000&((data)<<28))
#define  HDMI21_P0_hd21_errdet_g_disparity_error_cnt_sb_max(data)                (0x03FF0000&((data)<<16))
#define  HDMI21_P0_hd21_errdet_g_disparity_error_cnt_acc(data)                   (0x0000FFFF&(data))
#define  HDMI21_P0_hd21_errdet_g_disparity_get_error_flag(data)                  ((0x10000000&(data))>>28)
#define  HDMI21_P0_hd21_errdet_g_disparity_get_error_cnt_sb_max(data)            ((0x03FF0000&(data))>>16)
#define  HDMI21_P0_hd21_errdet_g_disparity_get_error_cnt_acc(data)               (0x0000FFFF&(data))

#define  HDMI21_P0_hd21_errdet_b_disparity                                      0x180B7064
#define  HDMI21_P0_hd21_errdet_b_disparity_reg_addr                              "0xB80B7064"
#define  HDMI21_P0_hd21_errdet_b_disparity_reg                                   0xB80B7064
#define  HDMI21_P0_hd21_errdet_b_disparity_inst_addr                             "0x0015"
#define  set_HDMI21_P0_hd21_errdet_b_disparity_reg(data)                         (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_b_disparity_reg)=data)
#define  get_HDMI21_P0_hd21_errdet_b_disparity_reg                               (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_b_disparity_reg))
#define  HDMI21_P0_hd21_errdet_b_disparity_error_flag_shift                      (28)
#define  HDMI21_P0_hd21_errdet_b_disparity_error_cnt_sb_max_shift                (16)
#define  HDMI21_P0_hd21_errdet_b_disparity_error_cnt_acc_shift                   (0)
#define  HDMI21_P0_hd21_errdet_b_disparity_error_flag_mask                       (0x10000000)
#define  HDMI21_P0_hd21_errdet_b_disparity_error_cnt_sb_max_mask                 (0x03FF0000)
#define  HDMI21_P0_hd21_errdet_b_disparity_error_cnt_acc_mask                    (0x0000FFFF)
#define  HDMI21_P0_hd21_errdet_b_disparity_error_flag(data)                      (0x10000000&((data)<<28))
#define  HDMI21_P0_hd21_errdet_b_disparity_error_cnt_sb_max(data)                (0x03FF0000&((data)<<16))
#define  HDMI21_P0_hd21_errdet_b_disparity_error_cnt_acc(data)                   (0x0000FFFF&(data))
#define  HDMI21_P0_hd21_errdet_b_disparity_get_error_flag(data)                  ((0x10000000&(data))>>28)
#define  HDMI21_P0_hd21_errdet_b_disparity_get_error_cnt_sb_max(data)            ((0x03FF0000&(data))>>16)
#define  HDMI21_P0_hd21_errdet_b_disparity_get_error_cnt_acc(data)               (0x0000FFFF&(data))

#define  HDMI21_P0_hd21_errdet_c_disparity                                      0x180B7068
#define  HDMI21_P0_hd21_errdet_c_disparity_reg_addr                              "0xB80B7068"
#define  HDMI21_P0_hd21_errdet_c_disparity_reg                                   0xB80B7068
#define  HDMI21_P0_hd21_errdet_c_disparity_inst_addr                             "0x0016"
#define  set_HDMI21_P0_hd21_errdet_c_disparity_reg(data)                         (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_c_disparity_reg)=data)
#define  get_HDMI21_P0_hd21_errdet_c_disparity_reg                               (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_c_disparity_reg))
#define  HDMI21_P0_hd21_errdet_c_disparity_error_flag_shift                      (28)
#define  HDMI21_P0_hd21_errdet_c_disparity_error_cnt_sb_max_shift                (16)
#define  HDMI21_P0_hd21_errdet_c_disparity_error_cnt_acc_shift                   (0)
#define  HDMI21_P0_hd21_errdet_c_disparity_error_flag_mask                       (0x10000000)
#define  HDMI21_P0_hd21_errdet_c_disparity_error_cnt_sb_max_mask                 (0x03FF0000)
#define  HDMI21_P0_hd21_errdet_c_disparity_error_cnt_acc_mask                    (0x0000FFFF)
#define  HDMI21_P0_hd21_errdet_c_disparity_error_flag(data)                      (0x10000000&((data)<<28))
#define  HDMI21_P0_hd21_errdet_c_disparity_error_cnt_sb_max(data)                (0x03FF0000&((data)<<16))
#define  HDMI21_P0_hd21_errdet_c_disparity_error_cnt_acc(data)                   (0x0000FFFF&(data))
#define  HDMI21_P0_hd21_errdet_c_disparity_get_error_flag(data)                  ((0x10000000&(data))>>28)
#define  HDMI21_P0_hd21_errdet_c_disparity_get_error_cnt_sb_max(data)            ((0x03FF0000&(data))>>16)
#define  HDMI21_P0_hd21_errdet_c_disparity_get_error_cnt_acc(data)               (0x0000FFFF&(data))

#define  HDMI21_P0_hd21_errdet_r_char                                           0x180B706C
#define  HDMI21_P0_hd21_errdet_r_char_reg_addr                                   "0xB80B706C"
#define  HDMI21_P0_hd21_errdet_r_char_reg                                        0xB80B706C
#define  HDMI21_P0_hd21_errdet_r_char_inst_addr                                  "0x0017"
#define  set_HDMI21_P0_hd21_errdet_r_char_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_r_char_reg)=data)
#define  get_HDMI21_P0_hd21_errdet_r_char_reg                                    (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_r_char_reg))
#define  HDMI21_P0_hd21_errdet_r_char_error_flag_shift                           (28)
#define  HDMI21_P0_hd21_errdet_r_char_error_cnt_sb_max_shift                     (16)
#define  HDMI21_P0_hd21_errdet_r_char_error_cnt_acc_shift                        (0)
#define  HDMI21_P0_hd21_errdet_r_char_error_flag_mask                            (0x10000000)
#define  HDMI21_P0_hd21_errdet_r_char_error_cnt_sb_max_mask                      (0x03FF0000)
#define  HDMI21_P0_hd21_errdet_r_char_error_cnt_acc_mask                         (0x0000FFFF)
#define  HDMI21_P0_hd21_errdet_r_char_error_flag(data)                           (0x10000000&((data)<<28))
#define  HDMI21_P0_hd21_errdet_r_char_error_cnt_sb_max(data)                     (0x03FF0000&((data)<<16))
#define  HDMI21_P0_hd21_errdet_r_char_error_cnt_acc(data)                        (0x0000FFFF&(data))
#define  HDMI21_P0_hd21_errdet_r_char_get_error_flag(data)                       ((0x10000000&(data))>>28)
#define  HDMI21_P0_hd21_errdet_r_char_get_error_cnt_sb_max(data)                 ((0x03FF0000&(data))>>16)
#define  HDMI21_P0_hd21_errdet_r_char_get_error_cnt_acc(data)                    (0x0000FFFF&(data))

#define  HDMI21_P0_hd21_errdet_g_char                                           0x180B7070
#define  HDMI21_P0_hd21_errdet_g_char_reg_addr                                   "0xB80B7070"
#define  HDMI21_P0_hd21_errdet_g_char_reg                                        0xB80B7070
#define  HDMI21_P0_hd21_errdet_g_char_inst_addr                                  "0x0018"
#define  set_HDMI21_P0_hd21_errdet_g_char_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_g_char_reg)=data)
#define  get_HDMI21_P0_hd21_errdet_g_char_reg                                    (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_g_char_reg))
#define  HDMI21_P0_hd21_errdet_g_char_error_flag_shift                           (28)
#define  HDMI21_P0_hd21_errdet_g_char_error_cnt_sb_max_shift                     (16)
#define  HDMI21_P0_hd21_errdet_g_char_error_cnt_acc_shift                        (0)
#define  HDMI21_P0_hd21_errdet_g_char_error_flag_mask                            (0x10000000)
#define  HDMI21_P0_hd21_errdet_g_char_error_cnt_sb_max_mask                      (0x03FF0000)
#define  HDMI21_P0_hd21_errdet_g_char_error_cnt_acc_mask                         (0x0000FFFF)
#define  HDMI21_P0_hd21_errdet_g_char_error_flag(data)                           (0x10000000&((data)<<28))
#define  HDMI21_P0_hd21_errdet_g_char_error_cnt_sb_max(data)                     (0x03FF0000&((data)<<16))
#define  HDMI21_P0_hd21_errdet_g_char_error_cnt_acc(data)                        (0x0000FFFF&(data))
#define  HDMI21_P0_hd21_errdet_g_char_get_error_flag(data)                       ((0x10000000&(data))>>28)
#define  HDMI21_P0_hd21_errdet_g_char_get_error_cnt_sb_max(data)                 ((0x03FF0000&(data))>>16)
#define  HDMI21_P0_hd21_errdet_g_char_get_error_cnt_acc(data)                    (0x0000FFFF&(data))

#define  HDMI21_P0_hd21_errdet_b_char                                           0x180B7074
#define  HDMI21_P0_hd21_errdet_b_char_reg_addr                                   "0xB80B7074"
#define  HDMI21_P0_hd21_errdet_b_char_reg                                        0xB80B7074
#define  HDMI21_P0_hd21_errdet_b_char_inst_addr                                  "0x0019"
#define  set_HDMI21_P0_hd21_errdet_b_char_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_b_char_reg)=data)
#define  get_HDMI21_P0_hd21_errdet_b_char_reg                                    (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_b_char_reg))
#define  HDMI21_P0_hd21_errdet_b_char_error_flag_shift                           (28)
#define  HDMI21_P0_hd21_errdet_b_char_error_cnt_sb_max_shift                     (16)
#define  HDMI21_P0_hd21_errdet_b_char_error_cnt_acc_shift                        (0)
#define  HDMI21_P0_hd21_errdet_b_char_error_flag_mask                            (0x10000000)
#define  HDMI21_P0_hd21_errdet_b_char_error_cnt_sb_max_mask                      (0x03FF0000)
#define  HDMI21_P0_hd21_errdet_b_char_error_cnt_acc_mask                         (0x0000FFFF)
#define  HDMI21_P0_hd21_errdet_b_char_error_flag(data)                           (0x10000000&((data)<<28))
#define  HDMI21_P0_hd21_errdet_b_char_error_cnt_sb_max(data)                     (0x03FF0000&((data)<<16))
#define  HDMI21_P0_hd21_errdet_b_char_error_cnt_acc(data)                        (0x0000FFFF&(data))
#define  HDMI21_P0_hd21_errdet_b_char_get_error_flag(data)                       ((0x10000000&(data))>>28)
#define  HDMI21_P0_hd21_errdet_b_char_get_error_cnt_sb_max(data)                 ((0x03FF0000&(data))>>16)
#define  HDMI21_P0_hd21_errdet_b_char_get_error_cnt_acc(data)                    (0x0000FFFF&(data))

#define  HDMI21_P0_hd21_errdet_c_char                                           0x180B7078
#define  HDMI21_P0_hd21_errdet_c_char_reg_addr                                   "0xB80B7078"
#define  HDMI21_P0_hd21_errdet_c_char_reg                                        0xB80B7078
#define  HDMI21_P0_hd21_errdet_c_char_inst_addr                                  "0x001A"
#define  set_HDMI21_P0_hd21_errdet_c_char_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_c_char_reg)=data)
#define  get_HDMI21_P0_hd21_errdet_c_char_reg                                    (*((volatile unsigned int*)HDMI21_P0_hd21_errdet_c_char_reg))
#define  HDMI21_P0_hd21_errdet_c_char_error_flag_shift                           (28)
#define  HDMI21_P0_hd21_errdet_c_char_error_cnt_sb_max_shift                     (16)
#define  HDMI21_P0_hd21_errdet_c_char_error_cnt_acc_shift                        (0)
#define  HDMI21_P0_hd21_errdet_c_char_error_flag_mask                            (0x10000000)
#define  HDMI21_P0_hd21_errdet_c_char_error_cnt_sb_max_mask                      (0x03FF0000)
#define  HDMI21_P0_hd21_errdet_c_char_error_cnt_acc_mask                         (0x0000FFFF)
#define  HDMI21_P0_hd21_errdet_c_char_error_flag(data)                           (0x10000000&((data)<<28))
#define  HDMI21_P0_hd21_errdet_c_char_error_cnt_sb_max(data)                     (0x03FF0000&((data)<<16))
#define  HDMI21_P0_hd21_errdet_c_char_error_cnt_acc(data)                        (0x0000FFFF&(data))
#define  HDMI21_P0_hd21_errdet_c_char_get_error_flag(data)                       ((0x10000000&(data))>>28)
#define  HDMI21_P0_hd21_errdet_c_char_get_error_cnt_sb_max(data)                 ((0x03FF0000&(data))>>16)
#define  HDMI21_P0_hd21_errdet_c_char_get_error_cnt_acc(data)                    (0x0000FFFF&(data))

#define  HDMI21_P0_hd21_disp_ctrl                                               0x180B707C
#define  HDMI21_P0_hd21_disp_ctrl_reg_addr                                       "0xB80B707C"
#define  HDMI21_P0_hd21_disp_ctrl_reg                                            0xB80B707C
#define  HDMI21_P0_hd21_disp_ctrl_inst_addr                                      "0x001B"
#define  set_HDMI21_P0_hd21_disp_ctrl_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_hd21_disp_ctrl_reg)=data)
#define  get_HDMI21_P0_hd21_disp_ctrl_reg                                        (*((volatile unsigned int*)HDMI21_P0_hd21_disp_ctrl_reg))
#define  HDMI21_P0_hd21_disp_ctrl_mask_sb_cnt_shift                              (13)
#define  HDMI21_P0_hd21_disp_ctrl_mask_en_shift                                  (12)
#define  HDMI21_P0_hd21_disp_ctrl_disp_upbound_shift                             (4)
#define  HDMI21_P0_hd21_disp_ctrl_init_disp_value_shift                          (0)
#define  HDMI21_P0_hd21_disp_ctrl_mask_sb_cnt_mask                               (0x007FE000)
#define  HDMI21_P0_hd21_disp_ctrl_mask_en_mask                                   (0x00001000)
#define  HDMI21_P0_hd21_disp_ctrl_disp_upbound_mask                              (0x00000FF0)
#define  HDMI21_P0_hd21_disp_ctrl_init_disp_value_mask                           (0x0000000F)
#define  HDMI21_P0_hd21_disp_ctrl_mask_sb_cnt(data)                              (0x007FE000&((data)<<13))
#define  HDMI21_P0_hd21_disp_ctrl_mask_en(data)                                  (0x00001000&((data)<<12))
#define  HDMI21_P0_hd21_disp_ctrl_disp_upbound(data)                             (0x00000FF0&((data)<<4))
#define  HDMI21_P0_hd21_disp_ctrl_init_disp_value(data)                          (0x0000000F&(data))
#define  HDMI21_P0_hd21_disp_ctrl_get_mask_sb_cnt(data)                          ((0x007FE000&(data))>>13)
#define  HDMI21_P0_hd21_disp_ctrl_get_mask_en(data)                              ((0x00001000&(data))>>12)
#define  HDMI21_P0_hd21_disp_ctrl_get_disp_upbound(data)                         ((0x00000FF0&(data))>>4)
#define  HDMI21_P0_hd21_disp_ctrl_get_init_disp_value(data)                      (0x0000000F&(data))

#define  HDMI21_P0_HD21_MM_CR                                                   0x180B7080
#define  HDMI21_P0_HD21_MM_CR_reg_addr                                           "0xB80B7080"
#define  HDMI21_P0_HD21_MM_CR_reg                                                0xB80B7080
#define  HDMI21_P0_HD21_MM_CR_inst_addr                                          "0x001C"
#define  set_HDMI21_P0_HD21_MM_CR_reg(data)                                      (*((volatile unsigned int*)HDMI21_P0_HD21_MM_CR_reg)=data)
#define  get_HDMI21_P0_HD21_MM_CR_reg                                            (*((volatile unsigned int*)HDMI21_P0_HD21_MM_CR_reg))
#define  HDMI21_P0_HD21_MM_CR_tb_diff_shift                                      (16)
#define  HDMI21_P0_HD21_MM_CR_fix_rate_hact_shift                                (0)
#define  HDMI21_P0_HD21_MM_CR_tb_diff_mask                                       (0x03FF0000)
#define  HDMI21_P0_HD21_MM_CR_fix_rate_hact_mask                                 (0x00007FFF)
#define  HDMI21_P0_HD21_MM_CR_tb_diff(data)                                      (0x03FF0000&((data)<<16))
#define  HDMI21_P0_HD21_MM_CR_fix_rate_hact(data)                                (0x00007FFF&(data))
#define  HDMI21_P0_HD21_MM_CR_get_tb_diff(data)                                  ((0x03FF0000&(data))>>16)
#define  HDMI21_P0_HD21_MM_CR_get_fix_rate_hact(data)                            (0x00007FFF&(data))

#define  HDMI21_P0_HD21_MM_SR                                                   0x180B7084
#define  HDMI21_P0_HD21_MM_SR_reg_addr                                           "0xB80B7084"
#define  HDMI21_P0_HD21_MM_SR_reg                                                0xB80B7084
#define  HDMI21_P0_HD21_MM_SR_inst_addr                                          "0x001D"
#define  set_HDMI21_P0_HD21_MM_SR_reg(data)                                      (*((volatile unsigned int*)HDMI21_P0_HD21_MM_SR_reg)=data)
#define  get_HDMI21_P0_HD21_MM_SR_reg                                            (*((volatile unsigned int*)HDMI21_P0_HD21_MM_SR_reg))
#define  HDMI21_P0_HD21_MM_SR_tb_diff_over_shift                                 (0)
#define  HDMI21_P0_HD21_MM_SR_tb_diff_over_mask                                  (0x00000001)
#define  HDMI21_P0_HD21_MM_SR_tb_diff_over(data)                                 (0x00000001&(data))
#define  HDMI21_P0_HD21_MM_SR_get_tb_diff_over(data)                             (0x00000001&(data))

#define  HDMI21_P0_hd21_HDMI_HDRAP                                              0x180B70B8
#define  HDMI21_P0_hd21_HDMI_HDRAP_reg_addr                                      "0xB80B70B8"
#define  HDMI21_P0_hd21_HDMI_HDRAP_reg                                           0xB80B70B8
#define  HDMI21_P0_hd21_HDMI_HDRAP_inst_addr                                     "0x001E"
#define  set_HDMI21_P0_hd21_HDMI_HDRAP_reg(data)                                 (*((volatile unsigned int*)HDMI21_P0_hd21_HDMI_HDRAP_reg)=data)
#define  get_HDMI21_P0_hd21_HDMI_HDRAP_reg                                       (*((volatile unsigned int*)HDMI21_P0_hd21_HDMI_HDRAP_reg))
#define  HDMI21_P0_hd21_HDMI_HDRAP_apss_shift                                    (0)
#define  HDMI21_P0_hd21_HDMI_HDRAP_apss_mask                                     (0x000003FF)
#define  HDMI21_P0_hd21_HDMI_HDRAP_apss(data)                                    (0x000003FF&(data))
#define  HDMI21_P0_hd21_HDMI_HDRAP_get_apss(data)                                (0x000003FF&(data))

#define  HDMI21_P0_hd21_HDMI_HDRDP                                              0x180B70BC
#define  HDMI21_P0_hd21_HDMI_HDRDP_reg_addr                                      "0xB80B70BC"
#define  HDMI21_P0_hd21_HDMI_HDRDP_reg                                           0xB80B70BC
#define  HDMI21_P0_hd21_HDMI_HDRDP_inst_addr                                     "0x001F"
#define  set_HDMI21_P0_hd21_HDMI_HDRDP_reg(data)                                 (*((volatile unsigned int*)HDMI21_P0_hd21_HDMI_HDRDP_reg)=data)
#define  get_HDMI21_P0_hd21_HDMI_HDRDP_reg                                       (*((volatile unsigned int*)HDMI21_P0_hd21_HDMI_HDRDP_reg))
#define  HDMI21_P0_hd21_HDMI_HDRDP_dpss_shift                                    (0)
#define  HDMI21_P0_hd21_HDMI_HDRDP_dpss_mask                                     (0xFFFFFFFF)
#define  HDMI21_P0_hd21_HDMI_HDRDP_dpss(data)                                    (0xFFFFFFFF&(data))
#define  HDMI21_P0_hd21_HDMI_HDRDP_get_dpss(data)                                (0xFFFFFFFF&(data))

#define  HDMI21_P0_HD21_HDR_EM_ST                                               0x180B70C4
#define  HDMI21_P0_HD21_HDR_EM_ST_reg_addr                                       "0xB80B70C4"
#define  HDMI21_P0_HD21_HDR_EM_ST_reg                                            0xB80B70C4
#define  HDMI21_P0_HD21_HDR_EM_ST_inst_addr                                      "0x0020"
#define  set_HDMI21_P0_HD21_HDR_EM_ST_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_HD21_HDR_EM_ST_reg)=data)
#define  get_HDMI21_P0_HD21_HDR_EM_ST_reg                                        (*((volatile unsigned int*)HDMI21_P0_HD21_HDR_EM_ST_reg))
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_no_shift                                (7)
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_done_block_shift                        (6)
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_timeout_shift                           (5)
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_discont_shift                           (4)
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_end_shift                               (3)
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_new_shift                               (2)
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_first_shift                             (1)
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_last_shift                              (0)
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_no_mask                                 (0x00000080)
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_done_block_mask                         (0x00000040)
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_timeout_mask                            (0x00000020)
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_discont_mask                            (0x00000010)
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_end_mask                                (0x00000008)
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_new_mask                                (0x00000004)
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_first_mask                              (0x00000002)
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_last_mask                               (0x00000001)
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_no(data)                                (0x00000080&((data)<<7))
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_done_block(data)                        (0x00000040&((data)<<6))
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_timeout(data)                           (0x00000020&((data)<<5))
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_discont(data)                           (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_end(data)                               (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_new(data)                               (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_first(data)                             (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_HDR_EM_ST_em_hdr_last(data)                              (0x00000001&(data))
#define  HDMI21_P0_HD21_HDR_EM_ST_get_em_hdr_no(data)                            ((0x00000080&(data))>>7)
#define  HDMI21_P0_HD21_HDR_EM_ST_get_em_hdr_done_block(data)                    ((0x00000040&(data))>>6)
#define  HDMI21_P0_HD21_HDR_EM_ST_get_em_hdr_timeout(data)                       ((0x00000020&(data))>>5)
#define  HDMI21_P0_HD21_HDR_EM_ST_get_em_hdr_discont(data)                       ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_HDR_EM_ST_get_em_hdr_end(data)                           ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_HDR_EM_ST_get_em_hdr_new(data)                           ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_HDR_EM_ST_get_em_hdr_first(data)                         ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_HDR_EM_ST_get_em_hdr_last(data)                          (0x00000001&(data))

#define  HDMI21_P0_HD21_HDR_EM_CT                                               0x180B70C8
#define  HDMI21_P0_HD21_HDR_EM_CT_reg_addr                                       "0xB80B70C8"
#define  HDMI21_P0_HD21_HDR_EM_CT_reg                                            0xB80B70C8
#define  HDMI21_P0_HD21_HDR_EM_CT_inst_addr                                      "0x0021"
#define  set_HDMI21_P0_HD21_HDR_EM_CT_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_HD21_HDR_EM_CT_reg)=data)
#define  get_HDMI21_P0_HD21_HDR_EM_CT_reg                                        (*((volatile unsigned int*)HDMI21_P0_HD21_HDR_EM_CT_reg))
#define  HDMI21_P0_HD21_HDR_EM_CT_org_id_shift                                   (24)
#define  HDMI21_P0_HD21_HDR_EM_CT_set_tag_msb_shift                              (16)
#define  HDMI21_P0_HD21_HDR_EM_CT_set_tag_lsb_shift                              (8)
#define  HDMI21_P0_HD21_HDR_EM_CT_recognize_tag_en_shift                         (7)
#define  HDMI21_P0_HD21_HDR_EM_CT_hdr_pkt_cnt_clr_shift                          (5)
#define  HDMI21_P0_HD21_HDR_EM_CT_hdr_block_sel_shift                            (4)
#define  HDMI21_P0_HD21_HDR_EM_CT_em_err2_proc_shift                             (3)
#define  HDMI21_P0_HD21_HDR_EM_CT_rec_em_hdr_irq_en_shift                        (0)
#define  HDMI21_P0_HD21_HDR_EM_CT_org_id_mask                                    (0xFF000000)
#define  HDMI21_P0_HD21_HDR_EM_CT_set_tag_msb_mask                               (0x00FF0000)
#define  HDMI21_P0_HD21_HDR_EM_CT_set_tag_lsb_mask                               (0x0000FF00)
#define  HDMI21_P0_HD21_HDR_EM_CT_recognize_tag_en_mask                          (0x00000080)
#define  HDMI21_P0_HD21_HDR_EM_CT_hdr_pkt_cnt_clr_mask                           (0x00000020)
#define  HDMI21_P0_HD21_HDR_EM_CT_hdr_block_sel_mask                             (0x00000010)
#define  HDMI21_P0_HD21_HDR_EM_CT_em_err2_proc_mask                              (0x00000008)
#define  HDMI21_P0_HD21_HDR_EM_CT_rec_em_hdr_irq_en_mask                         (0x00000007)
#define  HDMI21_P0_HD21_HDR_EM_CT_org_id(data)                                   (0xFF000000&((data)<<24))
#define  HDMI21_P0_HD21_HDR_EM_CT_set_tag_msb(data)                              (0x00FF0000&((data)<<16))
#define  HDMI21_P0_HD21_HDR_EM_CT_set_tag_lsb(data)                              (0x0000FF00&((data)<<8))
#define  HDMI21_P0_HD21_HDR_EM_CT_recognize_tag_en(data)                         (0x00000080&((data)<<7))
#define  HDMI21_P0_HD21_HDR_EM_CT_hdr_pkt_cnt_clr(data)                          (0x00000020&((data)<<5))
#define  HDMI21_P0_HD21_HDR_EM_CT_hdr_block_sel(data)                            (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_HDR_EM_CT_em_err2_proc(data)                             (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_HDR_EM_CT_rec_em_hdr_irq_en(data)                        (0x00000007&(data))
#define  HDMI21_P0_HD21_HDR_EM_CT_get_org_id(data)                               ((0xFF000000&(data))>>24)
#define  HDMI21_P0_HD21_HDR_EM_CT_get_set_tag_msb(data)                          ((0x00FF0000&(data))>>16)
#define  HDMI21_P0_HD21_HDR_EM_CT_get_set_tag_lsb(data)                          ((0x0000FF00&(data))>>8)
#define  HDMI21_P0_HD21_HDR_EM_CT_get_recognize_tag_en(data)                     ((0x00000080&(data))>>7)
#define  HDMI21_P0_HD21_HDR_EM_CT_get_hdr_pkt_cnt_clr(data)                      ((0x00000020&(data))>>5)
#define  HDMI21_P0_HD21_HDR_EM_CT_get_hdr_block_sel(data)                        ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_HDR_EM_CT_get_em_err2_proc(data)                         ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_HDR_EM_CT_get_rec_em_hdr_irq_en(data)                    (0x00000007&(data))

#define  HDMI21_P0_HD21_HDR_EM_CT2                                              0x180B70DC
#define  HDMI21_P0_HD21_HDR_EM_CT2_reg_addr                                      "0xB80B70DC"
#define  HDMI21_P0_HD21_HDR_EM_CT2_reg                                           0xB80B70DC
#define  HDMI21_P0_HD21_HDR_EM_CT2_inst_addr                                     "0x0022"
#define  set_HDMI21_P0_HD21_HDR_EM_CT2_reg(data)                                 (*((volatile unsigned int*)HDMI21_P0_HD21_HDR_EM_CT2_reg)=data)
#define  get_HDMI21_P0_HD21_HDR_EM_CT2_reg                                       (*((volatile unsigned int*)HDMI21_P0_HD21_HDR_EM_CT2_reg))
#define  HDMI21_P0_HD21_HDR_EM_CT2_sync_shift                                    (25)
#define  HDMI21_P0_HD21_HDR_EM_CT2_recognize_oui_en_shift                        (24)
#define  HDMI21_P0_HD21_HDR_EM_CT2_oui_3rd_shift                                 (16)
#define  HDMI21_P0_HD21_HDR_EM_CT2_oui_2nd_shift                                 (8)
#define  HDMI21_P0_HD21_HDR_EM_CT2_oui_1st_shift                                 (0)
#define  HDMI21_P0_HD21_HDR_EM_CT2_sync_mask                                     (0x02000000)
#define  HDMI21_P0_HD21_HDR_EM_CT2_recognize_oui_en_mask                         (0x01000000)
#define  HDMI21_P0_HD21_HDR_EM_CT2_oui_3rd_mask                                  (0x00FF0000)
#define  HDMI21_P0_HD21_HDR_EM_CT2_oui_2nd_mask                                  (0x0000FF00)
#define  HDMI21_P0_HD21_HDR_EM_CT2_oui_1st_mask                                  (0x000000FF)
#define  HDMI21_P0_HD21_HDR_EM_CT2_sync(data)                                    (0x02000000&((data)<<25))
#define  HDMI21_P0_HD21_HDR_EM_CT2_recognize_oui_en(data)                        (0x01000000&((data)<<24))
#define  HDMI21_P0_HD21_HDR_EM_CT2_oui_3rd(data)                                 (0x00FF0000&((data)<<16))
#define  HDMI21_P0_HD21_HDR_EM_CT2_oui_2nd(data)                                 (0x0000FF00&((data)<<8))
#define  HDMI21_P0_HD21_HDR_EM_CT2_oui_1st(data)                                 (0x000000FF&(data))
#define  HDMI21_P0_HD21_HDR_EM_CT2_get_sync(data)                                ((0x02000000&(data))>>25)
#define  HDMI21_P0_HD21_HDR_EM_CT2_get_recognize_oui_en(data)                    ((0x01000000&(data))>>24)
#define  HDMI21_P0_HD21_HDR_EM_CT2_get_oui_3rd(data)                             ((0x00FF0000&(data))>>16)
#define  HDMI21_P0_HD21_HDR_EM_CT2_get_oui_2nd(data)                             ((0x0000FF00&(data))>>8)
#define  HDMI21_P0_HD21_HDR_EM_CT2_get_oui_1st(data)                             (0x000000FF&(data))

#define  HDMI21_P0_HD21_HDMI_EMAP                                               0x180B70CC
#define  HDMI21_P0_HD21_HDMI_EMAP_reg_addr                                       "0xB80B70CC"
#define  HDMI21_P0_HD21_HDMI_EMAP_reg                                            0xB80B70CC
#define  HDMI21_P0_HD21_HDMI_EMAP_inst_addr                                      "0x0023"
#define  set_HDMI21_P0_HD21_HDMI_EMAP_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_EMAP_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_EMAP_reg                                        (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_EMAP_reg))
#define  HDMI21_P0_HD21_HDMI_EMAP_apss_shift                                     (0)
#define  HDMI21_P0_HD21_HDMI_EMAP_apss_mask                                      (0x000000FF)
#define  HDMI21_P0_HD21_HDMI_EMAP_apss(data)                                     (0x000000FF&(data))
#define  HDMI21_P0_HD21_HDMI_EMAP_get_apss(data)                                 (0x000000FF&(data))

#define  HDMI21_P0_hd21_HDMI_EMDP                                               0x180B70D0
#define  HDMI21_P0_hd21_HDMI_EMDP_reg_addr                                       "0xB80B70D0"
#define  HDMI21_P0_hd21_HDMI_EMDP_reg                                            0xB80B70D0
#define  HDMI21_P0_hd21_HDMI_EMDP_inst_addr                                      "0x0024"
#define  set_HDMI21_P0_hd21_HDMI_EMDP_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_hd21_HDMI_EMDP_reg)=data)
#define  get_HDMI21_P0_hd21_HDMI_EMDP_reg                                        (*((volatile unsigned int*)HDMI21_P0_hd21_HDMI_EMDP_reg))
#define  HDMI21_P0_hd21_HDMI_EMDP_dpss_shift                                     (0)
#define  HDMI21_P0_hd21_HDMI_EMDP_dpss_mask                                      (0x000000FF)
#define  HDMI21_P0_hd21_HDMI_EMDP_dpss(data)                                     (0x000000FF&(data))
#define  HDMI21_P0_hd21_HDMI_EMDP_get_dpss(data)                                 (0x000000FF&(data))

#define  HDMI21_P0_HD21_fapa_ct                                                 0x180B70D8
#define  HDMI21_P0_HD21_fapa_ct_reg_addr                                         "0xB80B70D8"
#define  HDMI21_P0_HD21_fapa_ct_reg                                              0xB80B70D8
#define  HDMI21_P0_HD21_fapa_ct_inst_addr                                        "0x0025"
#define  set_HDMI21_P0_HD21_fapa_ct_reg(data)                                    (*((volatile unsigned int*)HDMI21_P0_HD21_fapa_ct_reg)=data)
#define  get_HDMI21_P0_HD21_fapa_ct_reg                                          (*((volatile unsigned int*)HDMI21_P0_HD21_fapa_ct_reg))
#define  HDMI21_P0_HD21_fapa_ct_region_cnt_shift                                 (5)
#define  HDMI21_P0_HD21_fapa_ct_em_timeout_frame_shift                           (1)
#define  HDMI21_P0_HD21_fapa_ct_mode_shift                                       (0)
#define  HDMI21_P0_HD21_fapa_ct_region_cnt_mask                                  (0xFFFFFFE0)
#define  HDMI21_P0_HD21_fapa_ct_em_timeout_frame_mask                            (0x0000001E)
#define  HDMI21_P0_HD21_fapa_ct_mode_mask                                        (0x00000001)
#define  HDMI21_P0_HD21_fapa_ct_region_cnt(data)                                 (0xFFFFFFE0&((data)<<5))
#define  HDMI21_P0_HD21_fapa_ct_em_timeout_frame(data)                           (0x0000001E&((data)<<1))
#define  HDMI21_P0_HD21_fapa_ct_mode(data)                                       (0x00000001&(data))
#define  HDMI21_P0_HD21_fapa_ct_get_region_cnt(data)                             ((0xFFFFFFE0&(data))>>5)
#define  HDMI21_P0_HD21_fapa_ct_get_em_timeout_frame(data)                       ((0x0000001E&(data))>>1)
#define  HDMI21_P0_HD21_fapa_ct_get_mode(data)                                   (0x00000001&(data))

#define  HDMI21_P0_HD21_fapa_ct2                                                0x180B70C0
#define  HDMI21_P0_HD21_fapa_ct2_reg_addr                                        "0xB80B70C0"
#define  HDMI21_P0_HD21_fapa_ct2_reg                                             0xB80B70C0
#define  HDMI21_P0_HD21_fapa_ct2_inst_addr                                       "0x0026"
#define  set_HDMI21_P0_HD21_fapa_ct2_reg(data)                                   (*((volatile unsigned int*)HDMI21_P0_HD21_fapa_ct2_reg)=data)
#define  get_HDMI21_P0_HD21_fapa_ct2_reg                                         (*((volatile unsigned int*)HDMI21_P0_HD21_fapa_ct2_reg))
#define  HDMI21_P0_HD21_fapa_ct2_region_cnt_msb_shift                            (0)
#define  HDMI21_P0_HD21_fapa_ct2_region_cnt_msb_mask                             (0x0000001F)
#define  HDMI21_P0_HD21_fapa_ct2_region_cnt_msb(data)                            (0x0000001F&(data))
#define  HDMI21_P0_HD21_fapa_ct2_get_region_cnt_msb(data)                        (0x0000001F&(data))

#define  HDMI21_P0_HD21_VSEM_ST                                                 0x180B7100
#define  HDMI21_P0_HD21_VSEM_ST_reg_addr                                         "0xB80B7100"
#define  HDMI21_P0_HD21_VSEM_ST_reg                                              0xB80B7100
#define  HDMI21_P0_HD21_VSEM_ST_inst_addr                                        "0x0027"
#define  set_HDMI21_P0_HD21_VSEM_ST_reg(data)                                    (*((volatile unsigned int*)HDMI21_P0_HD21_VSEM_ST_reg)=data)
#define  get_HDMI21_P0_HD21_VSEM_ST_reg                                          (*((volatile unsigned int*)HDMI21_P0_HD21_VSEM_ST_reg))
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_no_shift                                 (7)
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_timeout_shift                            (5)
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_discont_shift                            (4)
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_end_shift                                (3)
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_new_shift                                (2)
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_first_shift                              (1)
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_last_shift                               (0)
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_no_mask                                  (0x00000080)
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_timeout_mask                             (0x00000020)
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_discont_mask                             (0x00000010)
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_end_mask                                 (0x00000008)
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_new_mask                                 (0x00000004)
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_first_mask                               (0x00000002)
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_last_mask                                (0x00000001)
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_no(data)                                 (0x00000080&((data)<<7))
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_timeout(data)                            (0x00000020&((data)<<5))
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_discont(data)                            (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_end(data)                                (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_new(data)                                (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_first(data)                              (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_VSEM_ST_em_vsem_last(data)                               (0x00000001&(data))
#define  HDMI21_P0_HD21_VSEM_ST_get_em_vsem_no(data)                             ((0x00000080&(data))>>7)
#define  HDMI21_P0_HD21_VSEM_ST_get_em_vsem_timeout(data)                        ((0x00000020&(data))>>5)
#define  HDMI21_P0_HD21_VSEM_ST_get_em_vsem_discont(data)                        ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_VSEM_ST_get_em_vsem_end(data)                            ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_VSEM_ST_get_em_vsem_new(data)                            ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_VSEM_ST_get_em_vsem_first(data)                          ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_VSEM_ST_get_em_vsem_last(data)                           (0x00000001&(data))

#define  HDMI21_P0_HD21_VRREM_ST                                                0x180B7104
#define  HDMI21_P0_HD21_VRREM_ST_reg_addr                                        "0xB80B7104"
#define  HDMI21_P0_HD21_VRREM_ST_reg                                             0xB80B7104
#define  HDMI21_P0_HD21_VRREM_ST_inst_addr                                       "0x0028"
#define  set_HDMI21_P0_HD21_VRREM_ST_reg(data)                                   (*((volatile unsigned int*)HDMI21_P0_HD21_VRREM_ST_reg)=data)
#define  get_HDMI21_P0_HD21_VRREM_ST_reg                                         (*((volatile unsigned int*)HDMI21_P0_HD21_VRREM_ST_reg))
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_no_shift                                 (7)
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_timeout_shift                            (5)
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_discont_shift                            (4)
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_end_shift                                (3)
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_new_shift                                (2)
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_first_shift                              (1)
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_last_shift                               (0)
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_no_mask                                  (0x00000080)
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_timeout_mask                             (0x00000020)
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_discont_mask                             (0x00000010)
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_end_mask                                 (0x00000008)
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_new_mask                                 (0x00000004)
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_first_mask                               (0x00000002)
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_last_mask                                (0x00000001)
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_no(data)                                 (0x00000080&((data)<<7))
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_timeout(data)                            (0x00000020&((data)<<5))
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_discont(data)                            (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_end(data)                                (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_new(data)                                (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_first(data)                              (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_VRREM_ST_em_vrr_last(data)                               (0x00000001&(data))
#define  HDMI21_P0_HD21_VRREM_ST_get_em_vrr_no(data)                             ((0x00000080&(data))>>7)
#define  HDMI21_P0_HD21_VRREM_ST_get_em_vrr_timeout(data)                        ((0x00000020&(data))>>5)
#define  HDMI21_P0_HD21_VRREM_ST_get_em_vrr_discont(data)                        ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_VRREM_ST_get_em_vrr_end(data)                            ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_VRREM_ST_get_em_vrr_new(data)                            ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_VRREM_ST_get_em_vrr_first(data)                          ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_VRREM_ST_get_em_vrr_last(data)                           (0x00000001&(data))

#define  HDMI21_P0_HD21_CVTEM_ST                                                0x180B7108
#define  HDMI21_P0_HD21_CVTEM_ST_reg_addr                                        "0xB80B7108"
#define  HDMI21_P0_HD21_CVTEM_ST_reg                                             0xB80B7108
#define  HDMI21_P0_HD21_CVTEM_ST_inst_addr                                       "0x0029"
#define  set_HDMI21_P0_HD21_CVTEM_ST_reg(data)                                   (*((volatile unsigned int*)HDMI21_P0_HD21_CVTEM_ST_reg)=data)
#define  get_HDMI21_P0_HD21_CVTEM_ST_reg                                         (*((volatile unsigned int*)HDMI21_P0_HD21_CVTEM_ST_reg))
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_no_shift                               (7)
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_timeout_shift                          (5)
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_discont_shift                          (4)
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_end_shift                              (3)
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_new_shift                              (2)
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_first_shift                            (1)
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_last_shift                             (0)
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_no_mask                                (0x00000080)
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_timeout_mask                           (0x00000020)
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_discont_mask                           (0x00000010)
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_end_mask                               (0x00000008)
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_new_mask                               (0x00000004)
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_first_mask                             (0x00000002)
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_last_mask                              (0x00000001)
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_no(data)                               (0x00000080&((data)<<7))
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_timeout(data)                          (0x00000020&((data)<<5))
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_discont(data)                          (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_end(data)                              (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_new(data)                              (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_first(data)                            (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_CVTEM_ST_em_cvtem_last(data)                             (0x00000001&(data))
#define  HDMI21_P0_HD21_CVTEM_ST_get_em_cvtem_no(data)                           ((0x00000080&(data))>>7)
#define  HDMI21_P0_HD21_CVTEM_ST_get_em_cvtem_timeout(data)                      ((0x00000020&(data))>>5)
#define  HDMI21_P0_HD21_CVTEM_ST_get_em_cvtem_discont(data)                      ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_CVTEM_ST_get_em_cvtem_end(data)                          ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_CVTEM_ST_get_em_cvtem_new(data)                          ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_CVTEM_ST_get_em_cvtem_first(data)                        ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_CVTEM_ST_get_em_cvtem_last(data)                         (0x00000001&(data))

#define  HDMI21_P0_HD21_HDMI_VSEM_EMC                                           0x180B7110
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_reg_addr                                   "0xB80B7110"
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_reg                                        0xB80B7110
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_inst_addr                                  "0x002A"
#define  set_HDMI21_P0_HD21_HDMI_VSEM_EMC_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_VSEM_EMC_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_VSEM_EMC_reg                                    (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_VSEM_EMC_reg))
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_set_tag_msb_shift                          (16)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_set_tag_lsb_shift                          (8)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_recognize_tag_en_shift                     (7)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_vsem_clr_shift                             (4)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_rec_em_vsem_irq_en_shift                   (0)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_set_tag_msb_mask                           (0x00FF0000)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_set_tag_lsb_mask                           (0x0000FF00)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_recognize_tag_en_mask                      (0x00000080)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_vsem_clr_mask                              (0x00000010)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_rec_em_vsem_irq_en_mask                    (0x00000007)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_set_tag_msb(data)                          (0x00FF0000&((data)<<16))
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_set_tag_lsb(data)                          (0x0000FF00&((data)<<8))
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_recognize_tag_en(data)                     (0x00000080&((data)<<7))
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_vsem_clr(data)                             (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_rec_em_vsem_irq_en(data)                   (0x00000007&(data))
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_get_set_tag_msb(data)                      ((0x00FF0000&(data))>>16)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_get_set_tag_lsb(data)                      ((0x0000FF00&(data))>>8)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_get_recognize_tag_en(data)                 ((0x00000080&(data))>>7)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_get_vsem_clr(data)                         ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC_get_rec_em_vsem_irq_en(data)               (0x00000007&(data))

#define  HDMI21_P0_HD21_HDMI_VRR_EMC                                            0x180B7114
#define  HDMI21_P0_HD21_HDMI_VRR_EMC_reg_addr                                    "0xB80B7114"
#define  HDMI21_P0_HD21_HDMI_VRR_EMC_reg                                         0xB80B7114
#define  HDMI21_P0_HD21_HDMI_VRR_EMC_inst_addr                                   "0x002B"
#define  set_HDMI21_P0_HD21_HDMI_VRR_EMC_reg(data)                               (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_VRR_EMC_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_VRR_EMC_reg                                     (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_VRR_EMC_reg))
#define  HDMI21_P0_HD21_HDMI_VRR_EMC_vrr_clr_shift                               (4)
#define  HDMI21_P0_HD21_HDMI_VRR_EMC_rec_em_vrr_irq_en_shift                     (0)
#define  HDMI21_P0_HD21_HDMI_VRR_EMC_vrr_clr_mask                                (0x00000010)
#define  HDMI21_P0_HD21_HDMI_VRR_EMC_rec_em_vrr_irq_en_mask                      (0x00000007)
#define  HDMI21_P0_HD21_HDMI_VRR_EMC_vrr_clr(data)                               (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_HDMI_VRR_EMC_rec_em_vrr_irq_en(data)                     (0x00000007&(data))
#define  HDMI21_P0_HD21_HDMI_VRR_EMC_get_vrr_clr(data)                           ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_HDMI_VRR_EMC_get_rec_em_vrr_irq_en(data)                 (0x00000007&(data))

#define  HDMI21_P0_HD21_HDMI_CVTEM_EMC                                          0x180B7118
#define  HDMI21_P0_HD21_HDMI_CVTEM_EMC_reg_addr                                  "0xB80B7118"
#define  HDMI21_P0_HD21_HDMI_CVTEM_EMC_reg                                       0xB80B7118
#define  HDMI21_P0_HD21_HDMI_CVTEM_EMC_inst_addr                                 "0x002C"
#define  set_HDMI21_P0_HD21_HDMI_CVTEM_EMC_reg(data)                             (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_CVTEM_EMC_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_CVTEM_EMC_reg                                   (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_CVTEM_EMC_reg))
#define  HDMI21_P0_HD21_HDMI_CVTEM_EMC_cvtem_clr_shift                           (4)
#define  HDMI21_P0_HD21_HDMI_CVTEM_EMC_rec_em_cvtem_irq_en_shift                 (0)
#define  HDMI21_P0_HD21_HDMI_CVTEM_EMC_cvtem_clr_mask                            (0x00000010)
#define  HDMI21_P0_HD21_HDMI_CVTEM_EMC_rec_em_cvtem_irq_en_mask                  (0x00000007)
#define  HDMI21_P0_HD21_HDMI_CVTEM_EMC_cvtem_clr(data)                           (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_HDMI_CVTEM_EMC_rec_em_cvtem_irq_en(data)                 (0x00000007&(data))
#define  HDMI21_P0_HD21_HDMI_CVTEM_EMC_get_cvtem_clr(data)                       ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_HDMI_CVTEM_EMC_get_rec_em_cvtem_irq_en(data)             (0x00000007&(data))

#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2                                          0x180B711C
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_reg_addr                                  "0xB80B711C"
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_reg                                       0xB80B711C
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_inst_addr                                 "0x002D"
#define  set_HDMI21_P0_HD21_HDMI_VSEM_EMC2_reg(data)                             (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_VSEM_EMC2_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_VSEM_EMC2_reg                                   (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_VSEM_EMC2_reg))
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_sync_shift                                (25)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_recognize_oui_en_shift                    (24)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_oui_3rd_shift                             (16)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_oui_2nd_shift                             (8)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_oui_1st_shift                             (0)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_sync_mask                                 (0x02000000)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_recognize_oui_en_mask                     (0x01000000)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_oui_3rd_mask                              (0x00FF0000)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_oui_2nd_mask                              (0x0000FF00)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_oui_1st_mask                              (0x000000FF)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_sync(data)                                (0x02000000&((data)<<25))
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_recognize_oui_en(data)                    (0x01000000&((data)<<24))
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_oui_3rd(data)                             (0x00FF0000&((data)<<16))
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_oui_2nd(data)                             (0x0000FF00&((data)<<8))
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_oui_1st(data)                             (0x000000FF&(data))
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_get_sync(data)                            ((0x02000000&(data))>>25)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_get_recognize_oui_en(data)                ((0x01000000&(data))>>24)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_get_oui_3rd(data)                         ((0x00FF0000&(data))>>16)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_get_oui_2nd(data)                         ((0x0000FF00&(data))>>8)
#define  HDMI21_P0_HD21_HDMI_VSEM_EMC2_get_oui_1st(data)                         (0x000000FF&(data))

#define  HDMI21_P0_HD21_rmzp                                                    0x180B70EC
#define  HDMI21_P0_HD21_rmzp_reg_addr                                            "0xB80B70EC"
#define  HDMI21_P0_HD21_rmzp_reg                                                 0xB80B70EC
#define  HDMI21_P0_HD21_rmzp_inst_addr                                           "0x002E"
#define  set_HDMI21_P0_HD21_rmzp_reg(data)                                       (*((volatile unsigned int*)HDMI21_P0_HD21_rmzp_reg)=data)
#define  get_HDMI21_P0_HD21_rmzp_reg                                             (*((volatile unsigned int*)HDMI21_P0_HD21_rmzp_reg))
#define  HDMI21_P0_HD21_rmzp_hcbyte_fw_shift                                     (4)
#define  HDMI21_P0_HD21_rmzp_fw_apply_en_shift                                   (2)
#define  HDMI21_P0_HD21_rmzp_less_empacket_err_shift                             (1)
#define  HDMI21_P0_HD21_rmzp_more_empacket_err_shift                             (0)
#define  HDMI21_P0_HD21_rmzp_hcbyte_fw_mask                                      (0x000FFFF0)
#define  HDMI21_P0_HD21_rmzp_fw_apply_en_mask                                    (0x00000004)
#define  HDMI21_P0_HD21_rmzp_less_empacket_err_mask                              (0x00000002)
#define  HDMI21_P0_HD21_rmzp_more_empacket_err_mask                              (0x00000001)
#define  HDMI21_P0_HD21_rmzp_hcbyte_fw(data)                                     (0x000FFFF0&((data)<<4))
#define  HDMI21_P0_HD21_rmzp_fw_apply_en(data)                                   (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_rmzp_less_empacket_err(data)                             (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_rmzp_more_empacket_err(data)                             (0x00000001&(data))
#define  HDMI21_P0_HD21_rmzp_get_hcbyte_fw(data)                                 ((0x000FFFF0&(data))>>4)
#define  HDMI21_P0_HD21_rmzp_get_fw_apply_en(data)                               ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_rmzp_get_less_empacket_err(data)                         ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_rmzp_get_more_empacket_err(data)                         (0x00000001&(data))

#define  HDMI21_P0_hd21_cercr                                                   0x180B70F0
#define  HDMI21_P0_hd21_cercr_reg_addr                                           "0xB80B70F0"
#define  HDMI21_P0_hd21_cercr_reg                                                0xB80B70F0
#define  HDMI21_P0_hd21_cercr_inst_addr                                          "0x002F"
#define  set_HDMI21_P0_hd21_cercr_reg(data)                                      (*((volatile unsigned int*)HDMI21_P0_hd21_cercr_reg)=data)
#define  get_HDMI21_P0_hd21_cercr_reg                                            (*((volatile unsigned int*)HDMI21_P0_hd21_cercr_reg))
#define  HDMI21_P0_hd21_cercr_err_cnt_sel_shift                                  (16)
#define  HDMI21_P0_hd21_cercr_scdc_ced_en_shift                                  (15)
#define  HDMI21_P0_hd21_cercr_valid_reset_shift                                  (14)
#define  HDMI21_P0_hd21_cercr_reset_err_det_shift                                (13)
#define  HDMI21_P0_hd21_cercr_keep_err_det_shift                                 (12)
#define  HDMI21_P0_hd21_cercr_reset_shift                                        (11)
#define  HDMI21_P0_hd21_cercr_period_shift                                       (5)
#define  HDMI21_P0_hd21_cercr_ced_upd_num_shift                                  (2)
#define  HDMI21_P0_hd21_cercr_mode_shift                                         (1)
#define  HDMI21_P0_hd21_cercr_en_shift                                           (0)
#define  HDMI21_P0_hd21_cercr_err_cnt_sel_mask                                   (0x00010000)
#define  HDMI21_P0_hd21_cercr_scdc_ced_en_mask                                   (0x00008000)
#define  HDMI21_P0_hd21_cercr_valid_reset_mask                                   (0x00004000)
#define  HDMI21_P0_hd21_cercr_reset_err_det_mask                                 (0x00002000)
#define  HDMI21_P0_hd21_cercr_keep_err_det_mask                                  (0x00001000)
#define  HDMI21_P0_hd21_cercr_reset_mask                                         (0x00000800)
#define  HDMI21_P0_hd21_cercr_period_mask                                        (0x000007E0)
#define  HDMI21_P0_hd21_cercr_ced_upd_num_mask                                   (0x0000001C)
#define  HDMI21_P0_hd21_cercr_mode_mask                                          (0x00000002)
#define  HDMI21_P0_hd21_cercr_en_mask                                            (0x00000001)
#define  HDMI21_P0_hd21_cercr_err_cnt_sel(data)                                  (0x00010000&((data)<<16))
#define  HDMI21_P0_hd21_cercr_scdc_ced_en(data)                                  (0x00008000&((data)<<15))
#define  HDMI21_P0_hd21_cercr_valid_reset(data)                                  (0x00004000&((data)<<14))
#define  HDMI21_P0_hd21_cercr_reset_err_det(data)                                (0x00002000&((data)<<13))
#define  HDMI21_P0_hd21_cercr_keep_err_det(data)                                 (0x00001000&((data)<<12))
#define  HDMI21_P0_hd21_cercr_reset(data)                                        (0x00000800&((data)<<11))
#define  HDMI21_P0_hd21_cercr_period(data)                                       (0x000007E0&((data)<<5))
#define  HDMI21_P0_hd21_cercr_ced_upd_num(data)                                  (0x0000001C&((data)<<2))
#define  HDMI21_P0_hd21_cercr_mode(data)                                         (0x00000002&((data)<<1))
#define  HDMI21_P0_hd21_cercr_en(data)                                           (0x00000001&(data))
#define  HDMI21_P0_hd21_cercr_get_err_cnt_sel(data)                              ((0x00010000&(data))>>16)
#define  HDMI21_P0_hd21_cercr_get_scdc_ced_en(data)                              ((0x00008000&(data))>>15)
#define  HDMI21_P0_hd21_cercr_get_valid_reset(data)                              ((0x00004000&(data))>>14)
#define  HDMI21_P0_hd21_cercr_get_reset_err_det(data)                            ((0x00002000&(data))>>13)
#define  HDMI21_P0_hd21_cercr_get_keep_err_det(data)                             ((0x00001000&(data))>>12)
#define  HDMI21_P0_hd21_cercr_get_reset(data)                                    ((0x00000800&(data))>>11)
#define  HDMI21_P0_hd21_cercr_get_period(data)                                   ((0x000007E0&(data))>>5)
#define  HDMI21_P0_hd21_cercr_get_ced_upd_num(data)                              ((0x0000001C&(data))>>2)
#define  HDMI21_P0_hd21_cercr_get_mode(data)                                     ((0x00000002&(data))>>1)
#define  HDMI21_P0_hd21_cercr_get_en(data)                                       (0x00000001&(data))

#define  HDMI21_P0_HD21_CERSR0                                                  0x180B70F4
#define  HDMI21_P0_HD21_CERSR0_reg_addr                                          "0xB80B70F4"
#define  HDMI21_P0_HD21_CERSR0_reg                                               0xB80B70F4
#define  HDMI21_P0_HD21_CERSR0_inst_addr                                         "0x0030"
#define  set_HDMI21_P0_HD21_CERSR0_reg(data)                                     (*((volatile unsigned int*)HDMI21_P0_HD21_CERSR0_reg)=data)
#define  get_HDMI21_P0_HD21_CERSR0_reg                                           (*((volatile unsigned int*)HDMI21_P0_HD21_CERSR0_reg))
#define  HDMI21_P0_HD21_CERSR0_err_cnt1_shift                                    (16)
#define  HDMI21_P0_HD21_CERSR0_err_cnt0_shift                                    (0)
#define  HDMI21_P0_HD21_CERSR0_err_cnt1_mask                                     (0x7FFF0000)
#define  HDMI21_P0_HD21_CERSR0_err_cnt0_mask                                     (0x00007FFF)
#define  HDMI21_P0_HD21_CERSR0_err_cnt1(data)                                    (0x7FFF0000&((data)<<16))
#define  HDMI21_P0_HD21_CERSR0_err_cnt0(data)                                    (0x00007FFF&(data))
#define  HDMI21_P0_HD21_CERSR0_get_err_cnt1(data)                                ((0x7FFF0000&(data))>>16)
#define  HDMI21_P0_HD21_CERSR0_get_err_cnt0(data)                                (0x00007FFF&(data))

#define  HDMI21_P0_HD21_CERSR1                                                  0x180B70F8
#define  HDMI21_P0_HD21_CERSR1_reg_addr                                          "0xB80B70F8"
#define  HDMI21_P0_HD21_CERSR1_reg                                               0xB80B70F8
#define  HDMI21_P0_HD21_CERSR1_inst_addr                                         "0x0031"
#define  set_HDMI21_P0_HD21_CERSR1_reg(data)                                     (*((volatile unsigned int*)HDMI21_P0_HD21_CERSR1_reg)=data)
#define  get_HDMI21_P0_HD21_CERSR1_reg                                           (*((volatile unsigned int*)HDMI21_P0_HD21_CERSR1_reg))
#define  HDMI21_P0_HD21_CERSR1_err_cnt3_shift                                    (16)
#define  HDMI21_P0_HD21_CERSR1_err_cnt2_shift                                    (0)
#define  HDMI21_P0_HD21_CERSR1_err_cnt3_mask                                     (0x7FFF0000)
#define  HDMI21_P0_HD21_CERSR1_err_cnt2_mask                                     (0x00007FFF)
#define  HDMI21_P0_HD21_CERSR1_err_cnt3(data)                                    (0x7FFF0000&((data)<<16))
#define  HDMI21_P0_HD21_CERSR1_err_cnt2(data)                                    (0x00007FFF&(data))
#define  HDMI21_P0_HD21_CERSR1_get_err_cnt3(data)                                ((0x7FFF0000&(data))>>16)
#define  HDMI21_P0_HD21_CERSR1_get_err_cnt2(data)                                (0x00007FFF&(data))

#define  HDMI21_P0_HD21_CERSR2                                                  0x180B70FC
#define  HDMI21_P0_HD21_CERSR2_reg_addr                                          "0xB80B70FC"
#define  HDMI21_P0_HD21_CERSR2_reg                                               0xB80B70FC
#define  HDMI21_P0_HD21_CERSR2_inst_addr                                         "0x0032"
#define  set_HDMI21_P0_HD21_CERSR2_reg(data)                                     (*((volatile unsigned int*)HDMI21_P0_HD21_CERSR2_reg)=data)
#define  get_HDMI21_P0_HD21_CERSR2_reg                                           (*((volatile unsigned int*)HDMI21_P0_HD21_CERSR2_reg))
#define  HDMI21_P0_HD21_CERSR2_rs_err_cnt_shift                                  (16)
#define  HDMI21_P0_HD21_CERSR2_rs_err_cnt_mask                                   (0x7FFF0000)
#define  HDMI21_P0_HD21_CERSR2_rs_err_cnt(data)                                  (0x7FFF0000&((data)<<16))
#define  HDMI21_P0_HD21_CERSR2_get_rs_err_cnt(data)                              ((0x7FFF0000&(data))>>16)

#define  HDMI21_P0_HD21_TIMING_GEN_CR                                           0x180B714C
#define  HDMI21_P0_HD21_TIMING_GEN_CR_reg_addr                                   "0xB80B714C"
#define  HDMI21_P0_HD21_TIMING_GEN_CR_reg                                        0xB80B714C
#define  HDMI21_P0_HD21_TIMING_GEN_CR_inst_addr                                  "0x0033"
#define  set_HDMI21_P0_HD21_TIMING_GEN_CR_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_HD21_TIMING_GEN_CR_reg)=data)
#define  get_HDMI21_P0_HD21_TIMING_GEN_CR_reg                                    (*((volatile unsigned int*)HDMI21_P0_HD21_TIMING_GEN_CR_reg))
#define  HDMI21_P0_HD21_TIMING_GEN_CR_tg_window_shift                            (8)
#define  HDMI21_P0_HD21_TIMING_GEN_CR_tg_en_shift                                (0)
#define  HDMI21_P0_HD21_TIMING_GEN_CR_tg_window_mask                             (0x0000FF00)
#define  HDMI21_P0_HD21_TIMING_GEN_CR_tg_en_mask                                 (0x00000001)
#define  HDMI21_P0_HD21_TIMING_GEN_CR_tg_window(data)                            (0x0000FF00&((data)<<8))
#define  HDMI21_P0_HD21_TIMING_GEN_CR_tg_en(data)                                (0x00000001&(data))
#define  HDMI21_P0_HD21_TIMING_GEN_CR_get_tg_window(data)                        ((0x0000FF00&(data))>>8)
#define  HDMI21_P0_HD21_TIMING_GEN_CR_get_tg_en(data)                            (0x00000001&(data))

#define  HDMI21_P0_HD21_TIMING_GEN_SR                                           0x180B7150
#define  HDMI21_P0_HD21_TIMING_GEN_SR_reg_addr                                   "0xB80B7150"
#define  HDMI21_P0_HD21_TIMING_GEN_SR_reg                                        0xB80B7150
#define  HDMI21_P0_HD21_TIMING_GEN_SR_inst_addr                                  "0x0034"
#define  set_HDMI21_P0_HD21_TIMING_GEN_SR_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_HD21_TIMING_GEN_SR_reg)=data)
#define  get_HDMI21_P0_HD21_TIMING_GEN_SR_reg                                    (*((volatile unsigned int*)HDMI21_P0_HD21_TIMING_GEN_SR_reg))
#define  HDMI21_P0_HD21_TIMING_GEN_SR_de_data_mismatch_shift                     (3)
#define  HDMI21_P0_HD21_TIMING_GEN_SR_dpc2tg_linebuff_shift                      (2)
#define  HDMI21_P0_HD21_TIMING_GEN_SR_ms2tg_fifof_shift                          (1)
#define  HDMI21_P0_HD21_TIMING_GEN_SR_video_timing_tog_err_shift                 (0)
#define  HDMI21_P0_HD21_TIMING_GEN_SR_de_data_mismatch_mask                      (0x00000008)
#define  HDMI21_P0_HD21_TIMING_GEN_SR_dpc2tg_linebuff_mask                       (0x00000004)
#define  HDMI21_P0_HD21_TIMING_GEN_SR_ms2tg_fifof_mask                           (0x00000002)
#define  HDMI21_P0_HD21_TIMING_GEN_SR_video_timing_tog_err_mask                  (0x00000001)
#define  HDMI21_P0_HD21_TIMING_GEN_SR_de_data_mismatch(data)                     (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_TIMING_GEN_SR_dpc2tg_linebuff(data)                      (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_TIMING_GEN_SR_ms2tg_fifof(data)                          (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_TIMING_GEN_SR_video_timing_tog_err(data)                 (0x00000001&(data))
#define  HDMI21_P0_HD21_TIMING_GEN_SR_get_de_data_mismatch(data)                 ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_TIMING_GEN_SR_get_dpc2tg_linebuff(data)                  ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_TIMING_GEN_SR_get_ms2tg_fifof(data)                      ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_TIMING_GEN_SR_get_video_timing_tog_err(data)             (0x00000001&(data))

#define  HDMI21_P0_HD21_CH_ST                                                   0x180B71D0
#define  HDMI21_P0_HD21_CH_ST_reg_addr                                           "0xB80B71D0"
#define  HDMI21_P0_HD21_CH_ST_reg                                                0xB80B71D0
#define  HDMI21_P0_HD21_CH_ST_inst_addr                                          "0x0035"
#define  set_HDMI21_P0_HD21_CH_ST_reg(data)                                      (*((volatile unsigned int*)HDMI21_P0_HD21_CH_ST_reg)=data)
#define  get_HDMI21_P0_HD21_CH_ST_reg                                            (*((volatile unsigned int*)HDMI21_P0_HD21_CH_ST_reg))
#define  HDMI21_P0_HD21_CH_ST_dummy_1_0_shift                                    (0)
#define  HDMI21_P0_HD21_CH_ST_dummy_1_0_mask                                     (0x00000003)
#define  HDMI21_P0_HD21_CH_ST_dummy_1_0(data)                                    (0x00000003&(data))
#define  HDMI21_P0_HD21_CH_ST_get_dummy_1_0(data)                                (0x00000003&(data))

#define  HDMI21_P0_HD21_PRBS_R_CTRL                                             0x180B71D4
#define  HDMI21_P0_HD21_PRBS_R_CTRL_reg_addr                                     "0xB80B71D4"
#define  HDMI21_P0_HD21_PRBS_R_CTRL_reg                                          0xB80B71D4
#define  HDMI21_P0_HD21_PRBS_R_CTRL_inst_addr                                    "0x0036"
#define  set_HDMI21_P0_HD21_PRBS_R_CTRL_reg(data)                                (*((volatile unsigned int*)HDMI21_P0_HD21_PRBS_R_CTRL_reg)=data)
#define  get_HDMI21_P0_HD21_PRBS_R_CTRL_reg                                      (*((volatile unsigned int*)HDMI21_P0_HD21_PRBS_R_CTRL_reg))
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs_rxbist_err_cnt_shift                    (12)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs_lock_shift                              (8)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs_err_cnt_clr_shift                       (4)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs_reverse_shift                           (3)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs15_rxen_shift                            (2)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs11_rxen_shift                            (1)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs7_rxen_shift                             (0)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs_rxbist_err_cnt_mask                     (0x000FF000)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs_lock_mask                               (0x00000100)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs_err_cnt_clr_mask                        (0x00000010)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs_reverse_mask                            (0x00000008)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs15_rxen_mask                             (0x00000004)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs11_rxen_mask                             (0x00000002)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs7_rxen_mask                              (0x00000001)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs_rxbist_err_cnt(data)                    (0x000FF000&((data)<<12))
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs_lock(data)                              (0x00000100&((data)<<8))
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs_err_cnt_clr(data)                       (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs_reverse(data)                           (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs15_rxen(data)                            (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs11_rxen(data)                            (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_PRBS_R_CTRL_prbs7_rxen(data)                             (0x00000001&(data))
#define  HDMI21_P0_HD21_PRBS_R_CTRL_get_prbs_rxbist_err_cnt(data)                ((0x000FF000&(data))>>12)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_get_prbs_lock(data)                          ((0x00000100&(data))>>8)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_get_prbs_err_cnt_clr(data)                   ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_get_prbs_reverse(data)                       ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_get_prbs15_rxen(data)                        ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_get_prbs11_rxen(data)                        ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_PRBS_R_CTRL_get_prbs7_rxen(data)                         (0x00000001&(data))

#define  HDMI21_P0_HD21_PRBS_G_CTRL                                             0x180B71D8
#define  HDMI21_P0_HD21_PRBS_G_CTRL_reg_addr                                     "0xB80B71D8"
#define  HDMI21_P0_HD21_PRBS_G_CTRL_reg                                          0xB80B71D8
#define  HDMI21_P0_HD21_PRBS_G_CTRL_inst_addr                                    "0x0037"
#define  set_HDMI21_P0_HD21_PRBS_G_CTRL_reg(data)                                (*((volatile unsigned int*)HDMI21_P0_HD21_PRBS_G_CTRL_reg)=data)
#define  get_HDMI21_P0_HD21_PRBS_G_CTRL_reg                                      (*((volatile unsigned int*)HDMI21_P0_HD21_PRBS_G_CTRL_reg))
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs_rxbist_err_cnt_shift                    (12)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs_lock_shift                              (8)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs_err_cnt_clr_shift                       (4)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs_reverse_shift                           (3)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs15_rxen_shift                            (2)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs11_rxen_shift                            (1)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs7_rxen_shift                             (0)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs_rxbist_err_cnt_mask                     (0x000FF000)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs_lock_mask                               (0x00000100)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs_err_cnt_clr_mask                        (0x00000010)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs_reverse_mask                            (0x00000008)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs15_rxen_mask                             (0x00000004)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs11_rxen_mask                             (0x00000002)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs7_rxen_mask                              (0x00000001)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs_rxbist_err_cnt(data)                    (0x000FF000&((data)<<12))
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs_lock(data)                              (0x00000100&((data)<<8))
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs_err_cnt_clr(data)                       (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs_reverse(data)                           (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs15_rxen(data)                            (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs11_rxen(data)                            (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_PRBS_G_CTRL_prbs7_rxen(data)                             (0x00000001&(data))
#define  HDMI21_P0_HD21_PRBS_G_CTRL_get_prbs_rxbist_err_cnt(data)                ((0x000FF000&(data))>>12)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_get_prbs_lock(data)                          ((0x00000100&(data))>>8)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_get_prbs_err_cnt_clr(data)                   ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_get_prbs_reverse(data)                       ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_get_prbs15_rxen(data)                        ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_get_prbs11_rxen(data)                        ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_PRBS_G_CTRL_get_prbs7_rxen(data)                         (0x00000001&(data))

#define  HDMI21_P0_HD21_PRBS_B_CTRL                                             0x180B71DC
#define  HDMI21_P0_HD21_PRBS_B_CTRL_reg_addr                                     "0xB80B71DC"
#define  HDMI21_P0_HD21_PRBS_B_CTRL_reg                                          0xB80B71DC
#define  HDMI21_P0_HD21_PRBS_B_CTRL_inst_addr                                    "0x0038"
#define  set_HDMI21_P0_HD21_PRBS_B_CTRL_reg(data)                                (*((volatile unsigned int*)HDMI21_P0_HD21_PRBS_B_CTRL_reg)=data)
#define  get_HDMI21_P0_HD21_PRBS_B_CTRL_reg                                      (*((volatile unsigned int*)HDMI21_P0_HD21_PRBS_B_CTRL_reg))
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs_rxbist_err_cnt_shift                    (12)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs_lock_shift                              (8)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs_err_cnt_clr_shift                       (4)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs_reverse_shift                           (3)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs15_rxen_shift                            (2)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs11_rxen_shift                            (1)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs7_rxen_shift                             (0)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs_rxbist_err_cnt_mask                     (0x000FF000)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs_lock_mask                               (0x00000100)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs_err_cnt_clr_mask                        (0x00000010)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs_reverse_mask                            (0x00000008)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs15_rxen_mask                             (0x00000004)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs11_rxen_mask                             (0x00000002)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs7_rxen_mask                              (0x00000001)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs_rxbist_err_cnt(data)                    (0x000FF000&((data)<<12))
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs_lock(data)                              (0x00000100&((data)<<8))
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs_err_cnt_clr(data)                       (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs_reverse(data)                           (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs15_rxen(data)                            (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs11_rxen(data)                            (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_PRBS_B_CTRL_prbs7_rxen(data)                             (0x00000001&(data))
#define  HDMI21_P0_HD21_PRBS_B_CTRL_get_prbs_rxbist_err_cnt(data)                ((0x000FF000&(data))>>12)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_get_prbs_lock(data)                          ((0x00000100&(data))>>8)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_get_prbs_err_cnt_clr(data)                   ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_get_prbs_reverse(data)                       ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_get_prbs15_rxen(data)                        ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_get_prbs11_rxen(data)                        ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_PRBS_B_CTRL_get_prbs7_rxen(data)                         (0x00000001&(data))

#define  HDMI21_P0_HD21_PRBS_C_CTRL                                             0x180B71E0
#define  HDMI21_P0_HD21_PRBS_C_CTRL_reg_addr                                     "0xB80B71E0"
#define  HDMI21_P0_HD21_PRBS_C_CTRL_reg                                          0xB80B71E0
#define  HDMI21_P0_HD21_PRBS_C_CTRL_inst_addr                                    "0x0039"
#define  set_HDMI21_P0_HD21_PRBS_C_CTRL_reg(data)                                (*((volatile unsigned int*)HDMI21_P0_HD21_PRBS_C_CTRL_reg)=data)
#define  get_HDMI21_P0_HD21_PRBS_C_CTRL_reg                                      (*((volatile unsigned int*)HDMI21_P0_HD21_PRBS_C_CTRL_reg))
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs_rxbist_err_cnt_shift                    (12)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs_lock_shift                              (8)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs_err_cnt_clr_shift                       (4)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs_reverse_shift                           (3)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs15_rxen_shift                            (2)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs11_rxen_shift                            (1)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs7_rxen_shift                             (0)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs_rxbist_err_cnt_mask                     (0x000FF000)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs_lock_mask                               (0x00000100)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs_err_cnt_clr_mask                        (0x00000010)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs_reverse_mask                            (0x00000008)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs15_rxen_mask                             (0x00000004)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs11_rxen_mask                             (0x00000002)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs7_rxen_mask                              (0x00000001)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs_rxbist_err_cnt(data)                    (0x000FF000&((data)<<12))
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs_lock(data)                              (0x00000100&((data)<<8))
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs_err_cnt_clr(data)                       (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs_reverse(data)                           (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs15_rxen(data)                            (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs11_rxen(data)                            (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_PRBS_C_CTRL_prbs7_rxen(data)                             (0x00000001&(data))
#define  HDMI21_P0_HD21_PRBS_C_CTRL_get_prbs_rxbist_err_cnt(data)                ((0x000FF000&(data))>>12)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_get_prbs_lock(data)                          ((0x00000100&(data))>>8)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_get_prbs_err_cnt_clr(data)                   ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_get_prbs_reverse(data)                       ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_get_prbs15_rxen(data)                        ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_get_prbs11_rxen(data)                        ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_PRBS_C_CTRL_get_prbs7_rxen(data)                         (0x00000001&(data))

#define  HDMI21_P0_HD21_PRBS_R_STATUS                                           0x180B71E4
#define  HDMI21_P0_HD21_PRBS_R_STATUS_reg_addr                                   "0xB80B71E4"
#define  HDMI21_P0_HD21_PRBS_R_STATUS_reg                                        0xB80B71E4
#define  HDMI21_P0_HD21_PRBS_R_STATUS_inst_addr                                  "0x003A"
#define  set_HDMI21_P0_HD21_PRBS_R_STATUS_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_HD21_PRBS_R_STATUS_reg)=data)
#define  get_HDMI21_P0_HD21_PRBS_R_STATUS_reg                                    (*((volatile unsigned int*)HDMI21_P0_HD21_PRBS_R_STATUS_reg))
#define  HDMI21_P0_HD21_PRBS_R_STATUS_prbs_err_cnt_shift                         (20)
#define  HDMI21_P0_HD21_PRBS_R_STATUS_prbs_bit_err_shift                         (0)
#define  HDMI21_P0_HD21_PRBS_R_STATUS_prbs_err_cnt_mask                          (0x01F00000)
#define  HDMI21_P0_HD21_PRBS_R_STATUS_prbs_bit_err_mask                          (0x0003FFFF)
#define  HDMI21_P0_HD21_PRBS_R_STATUS_prbs_err_cnt(data)                         (0x01F00000&((data)<<20))
#define  HDMI21_P0_HD21_PRBS_R_STATUS_prbs_bit_err(data)                         (0x0003FFFF&(data))
#define  HDMI21_P0_HD21_PRBS_R_STATUS_get_prbs_err_cnt(data)                     ((0x01F00000&(data))>>20)
#define  HDMI21_P0_HD21_PRBS_R_STATUS_get_prbs_bit_err(data)                     (0x0003FFFF&(data))

#define  HDMI21_P0_HD21_PRBS_G_STATUS                                           0x180B71E8
#define  HDMI21_P0_HD21_PRBS_G_STATUS_reg_addr                                   "0xB80B71E8"
#define  HDMI21_P0_HD21_PRBS_G_STATUS_reg                                        0xB80B71E8
#define  HDMI21_P0_HD21_PRBS_G_STATUS_inst_addr                                  "0x003B"
#define  set_HDMI21_P0_HD21_PRBS_G_STATUS_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_HD21_PRBS_G_STATUS_reg)=data)
#define  get_HDMI21_P0_HD21_PRBS_G_STATUS_reg                                    (*((volatile unsigned int*)HDMI21_P0_HD21_PRBS_G_STATUS_reg))
#define  HDMI21_P0_HD21_PRBS_G_STATUS_prbs_err_cnt_shift                         (20)
#define  HDMI21_P0_HD21_PRBS_G_STATUS_prbs_bit_err_shift                         (0)
#define  HDMI21_P0_HD21_PRBS_G_STATUS_prbs_err_cnt_mask                          (0x01F00000)
#define  HDMI21_P0_HD21_PRBS_G_STATUS_prbs_bit_err_mask                          (0x0003FFFF)
#define  HDMI21_P0_HD21_PRBS_G_STATUS_prbs_err_cnt(data)                         (0x01F00000&((data)<<20))
#define  HDMI21_P0_HD21_PRBS_G_STATUS_prbs_bit_err(data)                         (0x0003FFFF&(data))
#define  HDMI21_P0_HD21_PRBS_G_STATUS_get_prbs_err_cnt(data)                     ((0x01F00000&(data))>>20)
#define  HDMI21_P0_HD21_PRBS_G_STATUS_get_prbs_bit_err(data)                     (0x0003FFFF&(data))

#define  HDMI21_P0_HD21_PRBS_B_STATUS                                           0x180B71EC
#define  HDMI21_P0_HD21_PRBS_B_STATUS_reg_addr                                   "0xB80B71EC"
#define  HDMI21_P0_HD21_PRBS_B_STATUS_reg                                        0xB80B71EC
#define  HDMI21_P0_HD21_PRBS_B_STATUS_inst_addr                                  "0x003C"
#define  set_HDMI21_P0_HD21_PRBS_B_STATUS_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_HD21_PRBS_B_STATUS_reg)=data)
#define  get_HDMI21_P0_HD21_PRBS_B_STATUS_reg                                    (*((volatile unsigned int*)HDMI21_P0_HD21_PRBS_B_STATUS_reg))
#define  HDMI21_P0_HD21_PRBS_B_STATUS_prbs_err_cnt_shift                         (20)
#define  HDMI21_P0_HD21_PRBS_B_STATUS_prbs_bit_err_shift                         (0)
#define  HDMI21_P0_HD21_PRBS_B_STATUS_prbs_err_cnt_mask                          (0x01F00000)
#define  HDMI21_P0_HD21_PRBS_B_STATUS_prbs_bit_err_mask                          (0x0003FFFF)
#define  HDMI21_P0_HD21_PRBS_B_STATUS_prbs_err_cnt(data)                         (0x01F00000&((data)<<20))
#define  HDMI21_P0_HD21_PRBS_B_STATUS_prbs_bit_err(data)                         (0x0003FFFF&(data))
#define  HDMI21_P0_HD21_PRBS_B_STATUS_get_prbs_err_cnt(data)                     ((0x01F00000&(data))>>20)
#define  HDMI21_P0_HD21_PRBS_B_STATUS_get_prbs_bit_err(data)                     (0x0003FFFF&(data))

#define  HDMI21_P0_HD21_PRBS_C_STATUS                                           0x180B71F0
#define  HDMI21_P0_HD21_PRBS_C_STATUS_reg_addr                                   "0xB80B71F0"
#define  HDMI21_P0_HD21_PRBS_C_STATUS_reg                                        0xB80B71F0
#define  HDMI21_P0_HD21_PRBS_C_STATUS_inst_addr                                  "0x003D"
#define  set_HDMI21_P0_HD21_PRBS_C_STATUS_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_HD21_PRBS_C_STATUS_reg)=data)
#define  get_HDMI21_P0_HD21_PRBS_C_STATUS_reg                                    (*((volatile unsigned int*)HDMI21_P0_HD21_PRBS_C_STATUS_reg))
#define  HDMI21_P0_HD21_PRBS_C_STATUS_prbs_err_cnt_shift                         (20)
#define  HDMI21_P0_HD21_PRBS_C_STATUS_prbs_bit_err_shift                         (0)
#define  HDMI21_P0_HD21_PRBS_C_STATUS_prbs_err_cnt_mask                          (0x01F00000)
#define  HDMI21_P0_HD21_PRBS_C_STATUS_prbs_bit_err_mask                          (0x0003FFFF)
#define  HDMI21_P0_HD21_PRBS_C_STATUS_prbs_err_cnt(data)                         (0x01F00000&((data)<<20))
#define  HDMI21_P0_HD21_PRBS_C_STATUS_prbs_bit_err(data)                         (0x0003FFFF&(data))
#define  HDMI21_P0_HD21_PRBS_C_STATUS_get_prbs_err_cnt(data)                     ((0x01F00000&(data))>>20)
#define  HDMI21_P0_HD21_PRBS_C_STATUS_get_prbs_bit_err(data)                     (0x0003FFFF&(data))

#define  HDMI21_P0_hd21_DSCD_DBG                                                0x180B71F4
#define  HDMI21_P0_hd21_DSCD_DBG_reg_addr                                        "0xB80B71F4"
#define  HDMI21_P0_hd21_DSCD_DBG_reg                                             0xB80B71F4
#define  HDMI21_P0_hd21_DSCD_DBG_inst_addr                                       "0x003E"
#define  set_HDMI21_P0_hd21_DSCD_DBG_reg(data)                                   (*((volatile unsigned int*)HDMI21_P0_hd21_DSCD_DBG_reg)=data)
#define  get_HDMI21_P0_hd21_DSCD_DBG_reg                                         (*((volatile unsigned int*)HDMI21_P0_hd21_DSCD_DBG_reg))
#define  HDMI21_P0_hd21_DSCD_DBG_en_shift                                        (31)
#define  HDMI21_P0_hd21_DSCD_DBG_rd_ch_shift                                     (24)
#define  HDMI21_P0_hd21_DSCD_DBG_wr_last_addr_shift                              (12)
#define  HDMI21_P0_hd21_DSCD_DBG_one_lane_sel_shift                              (8)
#define  HDMI21_P0_hd21_DSCD_DBG_four_lane_sel_shift                             (5)
#define  HDMI21_P0_hd21_DSCD_DBG_lane_dbg_mode_shift                             (4)
#define  HDMI21_P0_hd21_DSCD_DBG_wr_en_shift                                     (0)
#define  HDMI21_P0_hd21_DSCD_DBG_en_mask                                         (0x80000000)
#define  HDMI21_P0_hd21_DSCD_DBG_rd_ch_mask                                      (0x03000000)
#define  HDMI21_P0_hd21_DSCD_DBG_wr_last_addr_mask                               (0x00FFF000)
#define  HDMI21_P0_hd21_DSCD_DBG_one_lane_sel_mask                               (0x00000700)
#define  HDMI21_P0_hd21_DSCD_DBG_four_lane_sel_mask                              (0x00000020)
#define  HDMI21_P0_hd21_DSCD_DBG_lane_dbg_mode_mask                              (0x00000010)
#define  HDMI21_P0_hd21_DSCD_DBG_wr_en_mask                                      (0x00000001)
#define  HDMI21_P0_hd21_DSCD_DBG_en(data)                                        (0x80000000&((data)<<31))
#define  HDMI21_P0_hd21_DSCD_DBG_rd_ch(data)                                     (0x03000000&((data)<<24))
#define  HDMI21_P0_hd21_DSCD_DBG_wr_last_addr(data)                              (0x00FFF000&((data)<<12))
#define  HDMI21_P0_hd21_DSCD_DBG_one_lane_sel(data)                              (0x00000700&((data)<<8))
#define  HDMI21_P0_hd21_DSCD_DBG_four_lane_sel(data)                             (0x00000020&((data)<<5))
#define  HDMI21_P0_hd21_DSCD_DBG_lane_dbg_mode(data)                             (0x00000010&((data)<<4))
#define  HDMI21_P0_hd21_DSCD_DBG_wr_en(data)                                     (0x00000001&(data))
#define  HDMI21_P0_hd21_DSCD_DBG_get_en(data)                                    ((0x80000000&(data))>>31)
#define  HDMI21_P0_hd21_DSCD_DBG_get_rd_ch(data)                                 ((0x03000000&(data))>>24)
#define  HDMI21_P0_hd21_DSCD_DBG_get_wr_last_addr(data)                          ((0x00FFF000&(data))>>12)
#define  HDMI21_P0_hd21_DSCD_DBG_get_one_lane_sel(data)                          ((0x00000700&(data))>>8)
#define  HDMI21_P0_hd21_DSCD_DBG_get_four_lane_sel(data)                         ((0x00000020&(data))>>5)
#define  HDMI21_P0_hd21_DSCD_DBG_get_lane_dbg_mode(data)                         ((0x00000010&(data))>>4)
#define  HDMI21_P0_hd21_DSCD_DBG_get_wr_en(data)                                 (0x00000001&(data))

#define  HDMI21_P0_HD21_DSCD_DBG_AP                                             0x180B71F8
#define  HDMI21_P0_HD21_DSCD_DBG_AP_reg_addr                                     "0xB80B71F8"
#define  HDMI21_P0_HD21_DSCD_DBG_AP_reg                                          0xB80B71F8
#define  HDMI21_P0_HD21_DSCD_DBG_AP_inst_addr                                    "0x003F"
#define  set_HDMI21_P0_HD21_DSCD_DBG_AP_reg(data)                                (*((volatile unsigned int*)HDMI21_P0_HD21_DSCD_DBG_AP_reg)=data)
#define  get_HDMI21_P0_HD21_DSCD_DBG_AP_reg                                      (*((volatile unsigned int*)HDMI21_P0_HD21_DSCD_DBG_AP_reg))
#define  HDMI21_P0_HD21_DSCD_DBG_AP_apss_shift                                   (0)
#define  HDMI21_P0_HD21_DSCD_DBG_AP_apss_mask                                    (0x00000FFF)
#define  HDMI21_P0_HD21_DSCD_DBG_AP_apss(data)                                   (0x00000FFF&(data))
#define  HDMI21_P0_HD21_DSCD_DBG_AP_get_apss(data)                               (0x00000FFF&(data))

#define  HDMI21_P0_hd21_DSCD_DBG_DP                                             0x180B71FC
#define  HDMI21_P0_hd21_DSCD_DBG_DP_reg_addr                                     "0xB80B71FC"
#define  HDMI21_P0_hd21_DSCD_DBG_DP_reg                                          0xB80B71FC
#define  HDMI21_P0_hd21_DSCD_DBG_DP_inst_addr                                    "0x0040"
#define  set_HDMI21_P0_hd21_DSCD_DBG_DP_reg(data)                                (*((volatile unsigned int*)HDMI21_P0_hd21_DSCD_DBG_DP_reg)=data)
#define  get_HDMI21_P0_hd21_DSCD_DBG_DP_reg                                      (*((volatile unsigned int*)HDMI21_P0_hd21_DSCD_DBG_DP_reg))
#define  HDMI21_P0_hd21_DSCD_DBG_DP_dpss_shift                                   (0)
#define  HDMI21_P0_hd21_DSCD_DBG_DP_dpss_mask                                    (0xFFFFFFFF)
#define  HDMI21_P0_hd21_DSCD_DBG_DP_dpss(data)                                   (0xFFFFFFFF&(data))
#define  HDMI21_P0_hd21_DSCD_DBG_DP_get_dpss(data)                               (0xFFFFFFFF&(data))

#define  HDMI21_P0_HD21_LT_R                                                    0x180B7200
#define  HDMI21_P0_HD21_LT_R_reg_addr                                            "0xB80B7200"
#define  HDMI21_P0_HD21_LT_R_reg                                                 0xB80B7200
#define  HDMI21_P0_HD21_LT_R_inst_addr                                           "0x0041"
#define  set_HDMI21_P0_HD21_LT_R_reg(data)                                       (*((volatile unsigned int*)HDMI21_P0_HD21_LT_R_reg)=data)
#define  get_HDMI21_P0_HD21_LT_R_reg                                             (*((volatile unsigned int*)HDMI21_P0_HD21_LT_R_reg))
#define  HDMI21_P0_HD21_LT_R_ln_req_shift                                        (28)
#define  HDMI21_P0_HD21_LT_R_lock_sel_shift                                      (24)
#define  HDMI21_P0_HD21_LT_R_popup_shift                                         (22)
#define  HDMI21_P0_HD21_LT_R_reset_shift                                         (21)
#define  HDMI21_P0_HD21_LT_R_timeout_flag_shift                                  (20)
#define  HDMI21_P0_HD21_LT_R_err_cnt_shift                                       (4)
#define  HDMI21_P0_HD21_LT_R_lock_valid_shift                                    (0)
#define  HDMI21_P0_HD21_LT_R_ln_req_mask                                         (0xF0000000)
#define  HDMI21_P0_HD21_LT_R_lock_sel_mask                                       (0x0F000000)
#define  HDMI21_P0_HD21_LT_R_popup_mask                                          (0x00400000)
#define  HDMI21_P0_HD21_LT_R_reset_mask                                          (0x00200000)
#define  HDMI21_P0_HD21_LT_R_timeout_flag_mask                                   (0x00100000)
#define  HDMI21_P0_HD21_LT_R_err_cnt_mask                                        (0x0007FFF0)
#define  HDMI21_P0_HD21_LT_R_lock_valid_mask                                     (0x00000001)
#define  HDMI21_P0_HD21_LT_R_ln_req(data)                                        (0xF0000000&((data)<<28))
#define  HDMI21_P0_HD21_LT_R_lock_sel(data)                                      (0x0F000000&((data)<<24))
#define  HDMI21_P0_HD21_LT_R_popup(data)                                         (0x00400000&((data)<<22))
#define  HDMI21_P0_HD21_LT_R_reset(data)                                         (0x00200000&((data)<<21))
#define  HDMI21_P0_HD21_LT_R_timeout_flag(data)                                  (0x00100000&((data)<<20))
#define  HDMI21_P0_HD21_LT_R_err_cnt(data)                                       (0x0007FFF0&((data)<<4))
#define  HDMI21_P0_HD21_LT_R_lock_valid(data)                                    (0x00000001&(data))
#define  HDMI21_P0_HD21_LT_R_get_ln_req(data)                                    ((0xF0000000&(data))>>28)
#define  HDMI21_P0_HD21_LT_R_get_lock_sel(data)                                  ((0x0F000000&(data))>>24)
#define  HDMI21_P0_HD21_LT_R_get_popup(data)                                     ((0x00400000&(data))>>22)
#define  HDMI21_P0_HD21_LT_R_get_reset(data)                                     ((0x00200000&(data))>>21)
#define  HDMI21_P0_HD21_LT_R_get_timeout_flag(data)                              ((0x00100000&(data))>>20)
#define  HDMI21_P0_HD21_LT_R_get_err_cnt(data)                                   ((0x0007FFF0&(data))>>4)
#define  HDMI21_P0_HD21_LT_R_get_lock_valid(data)                                (0x00000001&(data))

#define  HDMI21_P0_HD21_LT_G                                                    0x180B7204
#define  HDMI21_P0_HD21_LT_G_reg_addr                                            "0xB80B7204"
#define  HDMI21_P0_HD21_LT_G_reg                                                 0xB80B7204
#define  HDMI21_P0_HD21_LT_G_inst_addr                                           "0x0042"
#define  set_HDMI21_P0_HD21_LT_G_reg(data)                                       (*((volatile unsigned int*)HDMI21_P0_HD21_LT_G_reg)=data)
#define  get_HDMI21_P0_HD21_LT_G_reg                                             (*((volatile unsigned int*)HDMI21_P0_HD21_LT_G_reg))
#define  HDMI21_P0_HD21_LT_G_ln_req_shift                                        (28)
#define  HDMI21_P0_HD21_LT_G_lock_sel_shift                                      (24)
#define  HDMI21_P0_HD21_LT_G_popup_shift                                         (22)
#define  HDMI21_P0_HD21_LT_G_reset_shift                                         (21)
#define  HDMI21_P0_HD21_LT_G_timeout_flag_shift                                  (20)
#define  HDMI21_P0_HD21_LT_G_err_cnt_shift                                       (4)
#define  HDMI21_P0_HD21_LT_G_lock_valid_shift                                    (0)
#define  HDMI21_P0_HD21_LT_G_ln_req_mask                                         (0xF0000000)
#define  HDMI21_P0_HD21_LT_G_lock_sel_mask                                       (0x0F000000)
#define  HDMI21_P0_HD21_LT_G_popup_mask                                          (0x00400000)
#define  HDMI21_P0_HD21_LT_G_reset_mask                                          (0x00200000)
#define  HDMI21_P0_HD21_LT_G_timeout_flag_mask                                   (0x00100000)
#define  HDMI21_P0_HD21_LT_G_err_cnt_mask                                        (0x0007FFF0)
#define  HDMI21_P0_HD21_LT_G_lock_valid_mask                                     (0x00000001)
#define  HDMI21_P0_HD21_LT_G_ln_req(data)                                        (0xF0000000&((data)<<28))
#define  HDMI21_P0_HD21_LT_G_lock_sel(data)                                      (0x0F000000&((data)<<24))
#define  HDMI21_P0_HD21_LT_G_popup(data)                                         (0x00400000&((data)<<22))
#define  HDMI21_P0_HD21_LT_G_reset(data)                                         (0x00200000&((data)<<21))
#define  HDMI21_P0_HD21_LT_G_timeout_flag(data)                                  (0x00100000&((data)<<20))
#define  HDMI21_P0_HD21_LT_G_err_cnt(data)                                       (0x0007FFF0&((data)<<4))
#define  HDMI21_P0_HD21_LT_G_lock_valid(data)                                    (0x00000001&(data))
#define  HDMI21_P0_HD21_LT_G_get_ln_req(data)                                    ((0xF0000000&(data))>>28)
#define  HDMI21_P0_HD21_LT_G_get_lock_sel(data)                                  ((0x0F000000&(data))>>24)
#define  HDMI21_P0_HD21_LT_G_get_popup(data)                                     ((0x00400000&(data))>>22)
#define  HDMI21_P0_HD21_LT_G_get_reset(data)                                     ((0x00200000&(data))>>21)
#define  HDMI21_P0_HD21_LT_G_get_timeout_flag(data)                              ((0x00100000&(data))>>20)
#define  HDMI21_P0_HD21_LT_G_get_err_cnt(data)                                   ((0x0007FFF0&(data))>>4)
#define  HDMI21_P0_HD21_LT_G_get_lock_valid(data)                                (0x00000001&(data))

#define  HDMI21_P0_HD21_LT_B                                                    0x180B7208
#define  HDMI21_P0_HD21_LT_B_reg_addr                                            "0xB80B7208"
#define  HDMI21_P0_HD21_LT_B_reg                                                 0xB80B7208
#define  HDMI21_P0_HD21_LT_B_inst_addr                                           "0x0043"
#define  set_HDMI21_P0_HD21_LT_B_reg(data)                                       (*((volatile unsigned int*)HDMI21_P0_HD21_LT_B_reg)=data)
#define  get_HDMI21_P0_HD21_LT_B_reg                                             (*((volatile unsigned int*)HDMI21_P0_HD21_LT_B_reg))
#define  HDMI21_P0_HD21_LT_B_ln_req_shift                                        (28)
#define  HDMI21_P0_HD21_LT_B_lock_sel_shift                                      (24)
#define  HDMI21_P0_HD21_LT_B_popup_shift                                         (22)
#define  HDMI21_P0_HD21_LT_B_reset_shift                                         (21)
#define  HDMI21_P0_HD21_LT_B_timeout_flag_shift                                  (20)
#define  HDMI21_P0_HD21_LT_B_err_cnt_shift                                       (4)
#define  HDMI21_P0_HD21_LT_B_lock_valid_shift                                    (0)
#define  HDMI21_P0_HD21_LT_B_ln_req_mask                                         (0xF0000000)
#define  HDMI21_P0_HD21_LT_B_lock_sel_mask                                       (0x0F000000)
#define  HDMI21_P0_HD21_LT_B_popup_mask                                          (0x00400000)
#define  HDMI21_P0_HD21_LT_B_reset_mask                                          (0x00200000)
#define  HDMI21_P0_HD21_LT_B_timeout_flag_mask                                   (0x00100000)
#define  HDMI21_P0_HD21_LT_B_err_cnt_mask                                        (0x0007FFF0)
#define  HDMI21_P0_HD21_LT_B_lock_valid_mask                                     (0x00000001)
#define  HDMI21_P0_HD21_LT_B_ln_req(data)                                        (0xF0000000&((data)<<28))
#define  HDMI21_P0_HD21_LT_B_lock_sel(data)                                      (0x0F000000&((data)<<24))
#define  HDMI21_P0_HD21_LT_B_popup(data)                                         (0x00400000&((data)<<22))
#define  HDMI21_P0_HD21_LT_B_reset(data)                                         (0x00200000&((data)<<21))
#define  HDMI21_P0_HD21_LT_B_timeout_flag(data)                                  (0x00100000&((data)<<20))
#define  HDMI21_P0_HD21_LT_B_err_cnt(data)                                       (0x0007FFF0&((data)<<4))
#define  HDMI21_P0_HD21_LT_B_lock_valid(data)                                    (0x00000001&(data))
#define  HDMI21_P0_HD21_LT_B_get_ln_req(data)                                    ((0xF0000000&(data))>>28)
#define  HDMI21_P0_HD21_LT_B_get_lock_sel(data)                                  ((0x0F000000&(data))>>24)
#define  HDMI21_P0_HD21_LT_B_get_popup(data)                                     ((0x00400000&(data))>>22)
#define  HDMI21_P0_HD21_LT_B_get_reset(data)                                     ((0x00200000&(data))>>21)
#define  HDMI21_P0_HD21_LT_B_get_timeout_flag(data)                              ((0x00100000&(data))>>20)
#define  HDMI21_P0_HD21_LT_B_get_err_cnt(data)                                   ((0x0007FFF0&(data))>>4)
#define  HDMI21_P0_HD21_LT_B_get_lock_valid(data)                                (0x00000001&(data))

#define  HDMI21_P0_HD21_LT_C                                                    0x180B720C
#define  HDMI21_P0_HD21_LT_C_reg_addr                                            "0xB80B720C"
#define  HDMI21_P0_HD21_LT_C_reg                                                 0xB80B720C
#define  HDMI21_P0_HD21_LT_C_inst_addr                                           "0x0044"
#define  set_HDMI21_P0_HD21_LT_C_reg(data)                                       (*((volatile unsigned int*)HDMI21_P0_HD21_LT_C_reg)=data)
#define  get_HDMI21_P0_HD21_LT_C_reg                                             (*((volatile unsigned int*)HDMI21_P0_HD21_LT_C_reg))
#define  HDMI21_P0_HD21_LT_C_ln_req_shift                                        (28)
#define  HDMI21_P0_HD21_LT_C_lock_sel_shift                                      (24)
#define  HDMI21_P0_HD21_LT_C_popup_shift                                         (22)
#define  HDMI21_P0_HD21_LT_C_reset_shift                                         (21)
#define  HDMI21_P0_HD21_LT_C_timeout_flag_shift                                  (20)
#define  HDMI21_P0_HD21_LT_C_err_cnt_shift                                       (4)
#define  HDMI21_P0_HD21_LT_C_lock_valid_shift                                    (0)
#define  HDMI21_P0_HD21_LT_C_ln_req_mask                                         (0xF0000000)
#define  HDMI21_P0_HD21_LT_C_lock_sel_mask                                       (0x0F000000)
#define  HDMI21_P0_HD21_LT_C_popup_mask                                          (0x00400000)
#define  HDMI21_P0_HD21_LT_C_reset_mask                                          (0x00200000)
#define  HDMI21_P0_HD21_LT_C_timeout_flag_mask                                   (0x00100000)
#define  HDMI21_P0_HD21_LT_C_err_cnt_mask                                        (0x0007FFF0)
#define  HDMI21_P0_HD21_LT_C_lock_valid_mask                                     (0x00000001)
#define  HDMI21_P0_HD21_LT_C_ln_req(data)                                        (0xF0000000&((data)<<28))
#define  HDMI21_P0_HD21_LT_C_lock_sel(data)                                      (0x0F000000&((data)<<24))
#define  HDMI21_P0_HD21_LT_C_popup(data)                                         (0x00400000&((data)<<22))
#define  HDMI21_P0_HD21_LT_C_reset(data)                                         (0x00200000&((data)<<21))
#define  HDMI21_P0_HD21_LT_C_timeout_flag(data)                                  (0x00100000&((data)<<20))
#define  HDMI21_P0_HD21_LT_C_err_cnt(data)                                       (0x0007FFF0&((data)<<4))
#define  HDMI21_P0_HD21_LT_C_lock_valid(data)                                    (0x00000001&(data))
#define  HDMI21_P0_HD21_LT_C_get_ln_req(data)                                    ((0xF0000000&(data))>>28)
#define  HDMI21_P0_HD21_LT_C_get_lock_sel(data)                                  ((0x0F000000&(data))>>24)
#define  HDMI21_P0_HD21_LT_C_get_popup(data)                                     ((0x00400000&(data))>>22)
#define  HDMI21_P0_HD21_LT_C_get_reset(data)                                     ((0x00200000&(data))>>21)
#define  HDMI21_P0_HD21_LT_C_get_timeout_flag(data)                              ((0x00100000&(data))>>20)
#define  HDMI21_P0_HD21_LT_C_get_err_cnt(data)                                   ((0x0007FFF0&(data))>>4)
#define  HDMI21_P0_HD21_LT_C_get_lock_valid(data)                                (0x00000001&(data))

#define  HDMI21_P0_HD21_LT_ALL                                                  0x180B7210
#define  HDMI21_P0_HD21_LT_ALL_reg_addr                                          "0xB80B7210"
#define  HDMI21_P0_HD21_LT_ALL_reg                                               0xB80B7210
#define  HDMI21_P0_HD21_LT_ALL_inst_addr                                         "0x0045"
#define  set_HDMI21_P0_HD21_LT_ALL_reg(data)                                     (*((volatile unsigned int*)HDMI21_P0_HD21_LT_ALL_reg)=data)
#define  get_HDMI21_P0_HD21_LT_ALL_reg                                           (*((volatile unsigned int*)HDMI21_P0_HD21_LT_ALL_reg))
#define  HDMI21_P0_HD21_LT_ALL_ltp_en_shift                                      (28)
#define  HDMI21_P0_HD21_LT_ALL_ltp3_sel_shift                                    (24)
#define  HDMI21_P0_HD21_LT_ALL_timeout_set_shift                                 (0)
#define  HDMI21_P0_HD21_LT_ALL_ltp_en_mask                                       (0x10000000)
#define  HDMI21_P0_HD21_LT_ALL_ltp3_sel_mask                                     (0x07000000)
#define  HDMI21_P0_HD21_LT_ALL_timeout_set_mask                                  (0x007FFFFF)
#define  HDMI21_P0_HD21_LT_ALL_ltp_en(data)                                      (0x10000000&((data)<<28))
#define  HDMI21_P0_HD21_LT_ALL_ltp3_sel(data)                                    (0x07000000&((data)<<24))
#define  HDMI21_P0_HD21_LT_ALL_timeout_set(data)                                 (0x007FFFFF&(data))
#define  HDMI21_P0_HD21_LT_ALL_get_ltp_en(data)                                  ((0x10000000&(data))>>28)
#define  HDMI21_P0_HD21_LT_ALL_get_ltp3_sel(data)                                ((0x07000000&(data))>>24)
#define  HDMI21_P0_HD21_LT_ALL_get_timeout_set(data)                             (0x007FFFFF&(data))

#define  HDMI21_P0_HD21_UDC                                                     0x180B7230
#define  HDMI21_P0_HD21_UDC_reg_addr                                             "0xB80B7230"
#define  HDMI21_P0_HD21_UDC_reg                                                  0xB80B7230
#define  HDMI21_P0_HD21_UDC_inst_addr                                            "0x0046"
#define  set_HDMI21_P0_HD21_UDC_reg(data)                                        (*((volatile unsigned int*)HDMI21_P0_HD21_UDC_reg)=data)
#define  get_HDMI21_P0_HD21_UDC_reg                                              (*((volatile unsigned int*)HDMI21_P0_HD21_UDC_reg))
#define  HDMI21_P0_HD21_UDC_debug_sel_shift                                      (4)
#define  HDMI21_P0_HD21_UDC_dummy_3_shift                                        (3)
#define  HDMI21_P0_HD21_UDC_debug_sel_mask                                       (0x000003F0)
#define  HDMI21_P0_HD21_UDC_dummy_3_mask                                         (0x00000008)
#define  HDMI21_P0_HD21_UDC_debug_sel(data)                                      (0x000003F0&((data)<<4))
#define  HDMI21_P0_HD21_UDC_dummy_3(data)                                        (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_UDC_get_debug_sel(data)                                  ((0x000003F0&(data))>>4)
#define  HDMI21_P0_HD21_UDC_get_dummy_3(data)                                    ((0x00000008&(data))>>3)

#define  HDMI21_P0_HD21_TMDS_DPC0                                               0x180B7234
#define  HDMI21_P0_HD21_TMDS_DPC0_reg_addr                                       "0xB80B7234"
#define  HDMI21_P0_HD21_TMDS_DPC0_reg                                            0xB80B7234
#define  HDMI21_P0_HD21_TMDS_DPC0_inst_addr                                      "0x0047"
#define  set_HDMI21_P0_HD21_TMDS_DPC0_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_HD21_TMDS_DPC0_reg)=data)
#define  get_HDMI21_P0_HD21_TMDS_DPC0_reg                                        (*((volatile unsigned int*)HDMI21_P0_HD21_TMDS_DPC0_reg))
#define  HDMI21_P0_HD21_TMDS_DPC0_dpc_pp_valid_shift                             (9)
#define  HDMI21_P0_HD21_TMDS_DPC0_dpc_default_ph_shift                           (8)
#define  HDMI21_P0_HD21_TMDS_DPC0_dpc_pp_shift                                   (4)
#define  HDMI21_P0_HD21_TMDS_DPC0_dpc_cd_shift                                   (0)
#define  HDMI21_P0_HD21_TMDS_DPC0_dpc_pp_valid_mask                              (0x00000200)
#define  HDMI21_P0_HD21_TMDS_DPC0_dpc_default_ph_mask                            (0x00000100)
#define  HDMI21_P0_HD21_TMDS_DPC0_dpc_pp_mask                                    (0x000000F0)
#define  HDMI21_P0_HD21_TMDS_DPC0_dpc_cd_mask                                    (0x0000000F)
#define  HDMI21_P0_HD21_TMDS_DPC0_dpc_pp_valid(data)                             (0x00000200&((data)<<9))
#define  HDMI21_P0_HD21_TMDS_DPC0_dpc_default_ph(data)                           (0x00000100&((data)<<8))
#define  HDMI21_P0_HD21_TMDS_DPC0_dpc_pp(data)                                   (0x000000F0&((data)<<4))
#define  HDMI21_P0_HD21_TMDS_DPC0_dpc_cd(data)                                   (0x0000000F&(data))
#define  HDMI21_P0_HD21_TMDS_DPC0_get_dpc_pp_valid(data)                         ((0x00000200&(data))>>9)
#define  HDMI21_P0_HD21_TMDS_DPC0_get_dpc_default_ph(data)                       ((0x00000100&(data))>>8)
#define  HDMI21_P0_HD21_TMDS_DPC0_get_dpc_pp(data)                               ((0x000000F0&(data))>>4)
#define  HDMI21_P0_HD21_TMDS_DPC0_get_dpc_cd(data)                               (0x0000000F&(data))

#define  HDMI21_P0_HD21_TMDS_DPC1                                               0x180B7238
#define  HDMI21_P0_HD21_TMDS_DPC1_reg_addr                                       "0xB80B7238"
#define  HDMI21_P0_HD21_TMDS_DPC1_reg                                            0xB80B7238
#define  HDMI21_P0_HD21_TMDS_DPC1_inst_addr                                      "0x0048"
#define  set_HDMI21_P0_HD21_TMDS_DPC1_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_HD21_TMDS_DPC1_reg)=data)
#define  get_HDMI21_P0_HD21_TMDS_DPC1_reg                                        (*((volatile unsigned int*)HDMI21_P0_HD21_TMDS_DPC1_reg))
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_cd_chg_flag_shift                          (18)
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_cd_chg_int_en_shift                        (16)
#define  HDMI21_P0_HD21_TMDS_DPC1_dummy_15_11_shift                              (11)
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_auto_shift                                 (10)
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_pp_valid_fw_shift                          (9)
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_default_ph_fw_shift                        (8)
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_pp_fw_shift                                (4)
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_cd_fw_shift                                (0)
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_cd_chg_flag_mask                           (0x00040000)
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_cd_chg_int_en_mask                         (0x00010000)
#define  HDMI21_P0_HD21_TMDS_DPC1_dummy_15_11_mask                               (0x0000F800)
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_auto_mask                                  (0x00000400)
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_pp_valid_fw_mask                           (0x00000200)
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_default_ph_fw_mask                         (0x00000100)
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_pp_fw_mask                                 (0x000000F0)
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_cd_fw_mask                                 (0x0000000F)
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_cd_chg_flag(data)                          (0x00040000&((data)<<18))
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_cd_chg_int_en(data)                        (0x00010000&((data)<<16))
#define  HDMI21_P0_HD21_TMDS_DPC1_dummy_15_11(data)                              (0x0000F800&((data)<<11))
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_auto(data)                                 (0x00000400&((data)<<10))
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_pp_valid_fw(data)                          (0x00000200&((data)<<9))
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_default_ph_fw(data)                        (0x00000100&((data)<<8))
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_pp_fw(data)                                (0x000000F0&((data)<<4))
#define  HDMI21_P0_HD21_TMDS_DPC1_dpc_cd_fw(data)                                (0x0000000F&(data))
#define  HDMI21_P0_HD21_TMDS_DPC1_get_dpc_cd_chg_flag(data)                      ((0x00040000&(data))>>18)
#define  HDMI21_P0_HD21_TMDS_DPC1_get_dpc_cd_chg_int_en(data)                    ((0x00010000&(data))>>16)
#define  HDMI21_P0_HD21_TMDS_DPC1_get_dummy_15_11(data)                          ((0x0000F800&(data))>>11)
#define  HDMI21_P0_HD21_TMDS_DPC1_get_dpc_auto(data)                             ((0x00000400&(data))>>10)
#define  HDMI21_P0_HD21_TMDS_DPC1_get_dpc_pp_valid_fw(data)                      ((0x00000200&(data))>>9)
#define  HDMI21_P0_HD21_TMDS_DPC1_get_dpc_default_ph_fw(data)                    ((0x00000100&(data))>>8)
#define  HDMI21_P0_HD21_TMDS_DPC1_get_dpc_pp_fw(data)                            ((0x000000F0&(data))>>4)
#define  HDMI21_P0_HD21_TMDS_DPC1_get_dpc_cd_fw(data)                            (0x0000000F&(data))

#define  HDMI21_P0_HD21_TMDS_DPC_SET0                                           0x180B723C
#define  HDMI21_P0_HD21_TMDS_DPC_SET0_reg_addr                                   "0xB80B723C"
#define  HDMI21_P0_HD21_TMDS_DPC_SET0_reg                                        0xB80B723C
#define  HDMI21_P0_HD21_TMDS_DPC_SET0_inst_addr                                  "0x0049"
#define  set_HDMI21_P0_HD21_TMDS_DPC_SET0_reg(data)                              (*((volatile unsigned int*)HDMI21_P0_HD21_TMDS_DPC_SET0_reg)=data)
#define  get_HDMI21_P0_HD21_TMDS_DPC_SET0_reg                                    (*((volatile unsigned int*)HDMI21_P0_HD21_TMDS_DPC_SET0_reg))
#define  HDMI21_P0_HD21_TMDS_DPC_SET0_dpc_en_shift                               (7)
#define  HDMI21_P0_HD21_TMDS_DPC_SET0_pp_phase_measure_err_shift                 (6)
#define  HDMI21_P0_HD21_TMDS_DPC_SET0_dpc_en_mask                                (0x00000080)
#define  HDMI21_P0_HD21_TMDS_DPC_SET0_pp_phase_measure_err_mask                  (0x00000040)
#define  HDMI21_P0_HD21_TMDS_DPC_SET0_dpc_en(data)                               (0x00000080&((data)<<7))
#define  HDMI21_P0_HD21_TMDS_DPC_SET0_pp_phase_measure_err(data)                 (0x00000040&((data)<<6))
#define  HDMI21_P0_HD21_TMDS_DPC_SET0_get_dpc_en(data)                           ((0x00000080&(data))>>7)
#define  HDMI21_P0_HD21_TMDS_DPC_SET0_get_pp_phase_measure_err(data)             ((0x00000040&(data))>>6)

#define  HDMI21_P0_HD21_HDMI_SR                                                 0x180B7244
#define  HDMI21_P0_HD21_HDMI_SR_reg_addr                                         "0xB80B7244"
#define  HDMI21_P0_HD21_HDMI_SR_reg                                              0xB80B7244
#define  HDMI21_P0_HD21_HDMI_SR_inst_addr                                        "0x004A"
#define  set_HDMI21_P0_HD21_HDMI_SR_reg(data)                                    (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_SR_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_SR_reg                                          (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_SR_reg))
#define  HDMI21_P0_HD21_HDMI_SR_avmute_fw_shift                                  (8)
#define  HDMI21_P0_HD21_HDMI_SR_avmute_bg_shift                                  (7)
#define  HDMI21_P0_HD21_HDMI_SR_avmute_shift                                     (6)
#define  HDMI21_P0_HD21_HDMI_SR_avmute_fw_mask                                   (0x00000100)
#define  HDMI21_P0_HD21_HDMI_SR_avmute_bg_mask                                   (0x00000080)
#define  HDMI21_P0_HD21_HDMI_SR_avmute_mask                                      (0x00000040)
#define  HDMI21_P0_HD21_HDMI_SR_avmute_fw(data)                                  (0x00000100&((data)<<8))
#define  HDMI21_P0_HD21_HDMI_SR_avmute_bg(data)                                  (0x00000080&((data)<<7))
#define  HDMI21_P0_HD21_HDMI_SR_avmute(data)                                     (0x00000040&((data)<<6))
#define  HDMI21_P0_HD21_HDMI_SR_get_avmute_fw(data)                              ((0x00000100&(data))>>8)
#define  HDMI21_P0_HD21_HDMI_SR_get_avmute_bg(data)                              ((0x00000080&(data))>>7)
#define  HDMI21_P0_HD21_HDMI_SR_get_avmute(data)                                 ((0x00000040&(data))>>6)

#define  HDMI21_P0_HD21_HDMI_GPVS                                               0x180B7248
#define  HDMI21_P0_HD21_HDMI_GPVS_reg_addr                                       "0xB80B7248"
#define  HDMI21_P0_HD21_HDMI_GPVS_reg                                            0xB80B7248
#define  HDMI21_P0_HD21_HDMI_GPVS_inst_addr                                      "0x004B"
#define  set_HDMI21_P0_HD21_HDMI_GPVS_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_GPVS_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_GPVS_reg                                        (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_GPVS_reg))
#define  HDMI21_P0_HD21_HDMI_GPVS_dummy_31_29_shift                              (29)
#define  HDMI21_P0_HD21_HDMI_GPVS_drmps_v_shift                                  (28)
#define  HDMI21_P0_HD21_HDMI_GPVS_mpegps_v_shift                                 (27)
#define  HDMI21_P0_HD21_HDMI_GPVS_aps_v_shift                                    (26)
#define  HDMI21_P0_HD21_HDMI_GPVS_spdps_v_shift                                  (25)
#define  HDMI21_P0_HD21_HDMI_GPVS_avips_v_shift                                  (24)
#define  HDMI21_P0_HD21_HDMI_GPVS_hdr10pvsps_v_shift                             (23)
#define  HDMI21_P0_HD21_HDMI_GPVS_dvsps_v_shift                                  (22)
#define  HDMI21_P0_HD21_HDMI_GPVS_fvsps_v_shift                                  (21)
#define  HDMI21_P0_HD21_HDMI_GPVS_vsps_v_shift                                   (20)
#define  HDMI21_P0_HD21_HDMI_GPVS_gmps_v_shift                                   (19)
#define  HDMI21_P0_HD21_HDMI_GPVS_isrc1ps_v_shift                                (18)
#define  HDMI21_P0_HD21_HDMI_GPVS_acpps_v_shift                                  (17)
#define  HDMI21_P0_HD21_HDMI_GPVS_drmps_shift                                    (16)
#define  HDMI21_P0_HD21_HDMI_GPVS_mpegps_shift                                   (15)
#define  HDMI21_P0_HD21_HDMI_GPVS_aps_shift                                      (14)
#define  HDMI21_P0_HD21_HDMI_GPVS_spdps_shift                                    (13)
#define  HDMI21_P0_HD21_HDMI_GPVS_avips_shift                                    (12)
#define  HDMI21_P0_HD21_HDMI_GPVS_hdr10pvsps_shift                               (11)
#define  HDMI21_P0_HD21_HDMI_GPVS_dvsps_shift                                    (10)
#define  HDMI21_P0_HD21_HDMI_GPVS_fvsps_shift                                    (9)
#define  HDMI21_P0_HD21_HDMI_GPVS_vsps_shift                                     (8)
#define  HDMI21_P0_HD21_HDMI_GPVS_gmps_shift                                     (7)
#define  HDMI21_P0_HD21_HDMI_GPVS_isrc1ps_shift                                  (6)
#define  HDMI21_P0_HD21_HDMI_GPVS_acpps_shift                                    (5)
#define  HDMI21_P0_HD21_HDMI_GPVS_nps_shift                                      (4)
#define  HDMI21_P0_HD21_HDMI_GPVS_rsv3ps_shift                                   (3)
#define  HDMI21_P0_HD21_HDMI_GPVS_rsv2ps_shift                                   (2)
#define  HDMI21_P0_HD21_HDMI_GPVS_rsv1ps_shift                                   (1)
#define  HDMI21_P0_HD21_HDMI_GPVS_rsv0ps_shift                                   (0)
#define  HDMI21_P0_HD21_HDMI_GPVS_dummy_31_29_mask                               (0xE0000000)
#define  HDMI21_P0_HD21_HDMI_GPVS_drmps_v_mask                                   (0x10000000)
#define  HDMI21_P0_HD21_HDMI_GPVS_mpegps_v_mask                                  (0x08000000)
#define  HDMI21_P0_HD21_HDMI_GPVS_aps_v_mask                                     (0x04000000)
#define  HDMI21_P0_HD21_HDMI_GPVS_spdps_v_mask                                   (0x02000000)
#define  HDMI21_P0_HD21_HDMI_GPVS_avips_v_mask                                   (0x01000000)
#define  HDMI21_P0_HD21_HDMI_GPVS_hdr10pvsps_v_mask                              (0x00800000)
#define  HDMI21_P0_HD21_HDMI_GPVS_dvsps_v_mask                                   (0x00400000)
#define  HDMI21_P0_HD21_HDMI_GPVS_fvsps_v_mask                                   (0x00200000)
#define  HDMI21_P0_HD21_HDMI_GPVS_vsps_v_mask                                    (0x00100000)
#define  HDMI21_P0_HD21_HDMI_GPVS_gmps_v_mask                                    (0x00080000)
#define  HDMI21_P0_HD21_HDMI_GPVS_isrc1ps_v_mask                                 (0x00040000)
#define  HDMI21_P0_HD21_HDMI_GPVS_acpps_v_mask                                   (0x00020000)
#define  HDMI21_P0_HD21_HDMI_GPVS_drmps_mask                                     (0x00010000)
#define  HDMI21_P0_HD21_HDMI_GPVS_mpegps_mask                                    (0x00008000)
#define  HDMI21_P0_HD21_HDMI_GPVS_aps_mask                                       (0x00004000)
#define  HDMI21_P0_HD21_HDMI_GPVS_spdps_mask                                     (0x00002000)
#define  HDMI21_P0_HD21_HDMI_GPVS_avips_mask                                     (0x00001000)
#define  HDMI21_P0_HD21_HDMI_GPVS_hdr10pvsps_mask                                (0x00000800)
#define  HDMI21_P0_HD21_HDMI_GPVS_dvsps_mask                                     (0x00000400)
#define  HDMI21_P0_HD21_HDMI_GPVS_fvsps_mask                                     (0x00000200)
#define  HDMI21_P0_HD21_HDMI_GPVS_vsps_mask                                      (0x00000100)
#define  HDMI21_P0_HD21_HDMI_GPVS_gmps_mask                                      (0x00000080)
#define  HDMI21_P0_HD21_HDMI_GPVS_isrc1ps_mask                                   (0x00000040)
#define  HDMI21_P0_HD21_HDMI_GPVS_acpps_mask                                     (0x00000020)
#define  HDMI21_P0_HD21_HDMI_GPVS_nps_mask                                       (0x00000010)
#define  HDMI21_P0_HD21_HDMI_GPVS_rsv3ps_mask                                    (0x00000008)
#define  HDMI21_P0_HD21_HDMI_GPVS_rsv2ps_mask                                    (0x00000004)
#define  HDMI21_P0_HD21_HDMI_GPVS_rsv1ps_mask                                    (0x00000002)
#define  HDMI21_P0_HD21_HDMI_GPVS_rsv0ps_mask                                    (0x00000001)
#define  HDMI21_P0_HD21_HDMI_GPVS_dummy_31_29(data)                              (0xE0000000&((data)<<29))
#define  HDMI21_P0_HD21_HDMI_GPVS_drmps_v(data)                                  (0x10000000&((data)<<28))
#define  HDMI21_P0_HD21_HDMI_GPVS_mpegps_v(data)                                 (0x08000000&((data)<<27))
#define  HDMI21_P0_HD21_HDMI_GPVS_aps_v(data)                                    (0x04000000&((data)<<26))
#define  HDMI21_P0_HD21_HDMI_GPVS_spdps_v(data)                                  (0x02000000&((data)<<25))
#define  HDMI21_P0_HD21_HDMI_GPVS_avips_v(data)                                  (0x01000000&((data)<<24))
#define  HDMI21_P0_HD21_HDMI_GPVS_hdr10pvsps_v(data)                             (0x00800000&((data)<<23))
#define  HDMI21_P0_HD21_HDMI_GPVS_dvsps_v(data)                                  (0x00400000&((data)<<22))
#define  HDMI21_P0_HD21_HDMI_GPVS_fvsps_v(data)                                  (0x00200000&((data)<<21))
#define  HDMI21_P0_HD21_HDMI_GPVS_vsps_v(data)                                   (0x00100000&((data)<<20))
#define  HDMI21_P0_HD21_HDMI_GPVS_gmps_v(data)                                   (0x00080000&((data)<<19))
#define  HDMI21_P0_HD21_HDMI_GPVS_isrc1ps_v(data)                                (0x00040000&((data)<<18))
#define  HDMI21_P0_HD21_HDMI_GPVS_acpps_v(data)                                  (0x00020000&((data)<<17))
#define  HDMI21_P0_HD21_HDMI_GPVS_drmps(data)                                    (0x00010000&((data)<<16))
#define  HDMI21_P0_HD21_HDMI_GPVS_mpegps(data)                                   (0x00008000&((data)<<15))
#define  HDMI21_P0_HD21_HDMI_GPVS_aps(data)                                      (0x00004000&((data)<<14))
#define  HDMI21_P0_HD21_HDMI_GPVS_spdps(data)                                    (0x00002000&((data)<<13))
#define  HDMI21_P0_HD21_HDMI_GPVS_avips(data)                                    (0x00001000&((data)<<12))
#define  HDMI21_P0_HD21_HDMI_GPVS_hdr10pvsps(data)                               (0x00000800&((data)<<11))
#define  HDMI21_P0_HD21_HDMI_GPVS_dvsps(data)                                    (0x00000400&((data)<<10))
#define  HDMI21_P0_HD21_HDMI_GPVS_fvsps(data)                                    (0x00000200&((data)<<9))
#define  HDMI21_P0_HD21_HDMI_GPVS_vsps(data)                                     (0x00000100&((data)<<8))
#define  HDMI21_P0_HD21_HDMI_GPVS_gmps(data)                                     (0x00000080&((data)<<7))
#define  HDMI21_P0_HD21_HDMI_GPVS_isrc1ps(data)                                  (0x00000040&((data)<<6))
#define  HDMI21_P0_HD21_HDMI_GPVS_acpps(data)                                    (0x00000020&((data)<<5))
#define  HDMI21_P0_HD21_HDMI_GPVS_nps(data)                                      (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_HDMI_GPVS_rsv3ps(data)                                   (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_HDMI_GPVS_rsv2ps(data)                                   (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_HDMI_GPVS_rsv1ps(data)                                   (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_HDMI_GPVS_rsv0ps(data)                                   (0x00000001&(data))
#define  HDMI21_P0_HD21_HDMI_GPVS_get_dummy_31_29(data)                          ((0xE0000000&(data))>>29)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_drmps_v(data)                              ((0x10000000&(data))>>28)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_mpegps_v(data)                             ((0x08000000&(data))>>27)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_aps_v(data)                                ((0x04000000&(data))>>26)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_spdps_v(data)                              ((0x02000000&(data))>>25)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_avips_v(data)                              ((0x01000000&(data))>>24)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_hdr10pvsps_v(data)                         ((0x00800000&(data))>>23)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_dvsps_v(data)                              ((0x00400000&(data))>>22)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_fvsps_v(data)                              ((0x00200000&(data))>>21)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_vsps_v(data)                               ((0x00100000&(data))>>20)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_gmps_v(data)                               ((0x00080000&(data))>>19)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_isrc1ps_v(data)                            ((0x00040000&(data))>>18)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_acpps_v(data)                              ((0x00020000&(data))>>17)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_drmps(data)                                ((0x00010000&(data))>>16)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_mpegps(data)                               ((0x00008000&(data))>>15)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_aps(data)                                  ((0x00004000&(data))>>14)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_spdps(data)                                ((0x00002000&(data))>>13)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_avips(data)                                ((0x00001000&(data))>>12)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_hdr10pvsps(data)                           ((0x00000800&(data))>>11)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_dvsps(data)                                ((0x00000400&(data))>>10)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_fvsps(data)                                ((0x00000200&(data))>>9)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_vsps(data)                                 ((0x00000100&(data))>>8)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_gmps(data)                                 ((0x00000080&(data))>>7)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_isrc1ps(data)                              ((0x00000040&(data))>>6)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_acpps(data)                                ((0x00000020&(data))>>5)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_nps(data)                                  ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_rsv3ps(data)                               ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_rsv2ps(data)                               ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_rsv1ps(data)                               ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_HDMI_GPVS_get_rsv0ps(data)                               (0x00000001&(data))

#define  HDMI21_P0_HD21_HDMI_GPVS1                                              0x180B724C
#define  HDMI21_P0_HD21_HDMI_GPVS1_reg_addr                                      "0xB80B724C"
#define  HDMI21_P0_HD21_HDMI_GPVS1_reg                                           0xB80B724C
#define  HDMI21_P0_HD21_HDMI_GPVS1_inst_addr                                     "0x004C"
#define  set_HDMI21_P0_HD21_HDMI_GPVS1_reg(data)                                 (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_GPVS1_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_GPVS1_reg                                       (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_GPVS1_reg))
#define  HDMI21_P0_HD21_HDMI_GPVS1_dummy_31_4_shift                              (4)
#define  HDMI21_P0_HD21_HDMI_GPVS1_drmps_rv_shift                                (3)
#define  HDMI21_P0_HD21_HDMI_GPVS1_hdr10pvsps_rv_shift                           (2)
#define  HDMI21_P0_HD21_HDMI_GPVS1_dvsps_rv_shift                                (1)
#define  HDMI21_P0_HD21_HDMI_GPVS1_vsps_rv_shift                                 (0)
#define  HDMI21_P0_HD21_HDMI_GPVS1_dummy_31_4_mask                               (0xFFFFFFF0)
#define  HDMI21_P0_HD21_HDMI_GPVS1_drmps_rv_mask                                 (0x00000008)
#define  HDMI21_P0_HD21_HDMI_GPVS1_hdr10pvsps_rv_mask                            (0x00000004)
#define  HDMI21_P0_HD21_HDMI_GPVS1_dvsps_rv_mask                                 (0x00000002)
#define  HDMI21_P0_HD21_HDMI_GPVS1_vsps_rv_mask                                  (0x00000001)
#define  HDMI21_P0_HD21_HDMI_GPVS1_dummy_31_4(data)                              (0xFFFFFFF0&((data)<<4))
#define  HDMI21_P0_HD21_HDMI_GPVS1_drmps_rv(data)                                (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_HDMI_GPVS1_hdr10pvsps_rv(data)                           (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_HDMI_GPVS1_dvsps_rv(data)                                (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_HDMI_GPVS1_vsps_rv(data)                                 (0x00000001&(data))
#define  HDMI21_P0_HD21_HDMI_GPVS1_get_dummy_31_4(data)                          ((0xFFFFFFF0&(data))>>4)
#define  HDMI21_P0_HD21_HDMI_GPVS1_get_drmps_rv(data)                            ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_HDMI_GPVS1_get_hdr10pvsps_rv(data)                       ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_HDMI_GPVS1_get_dvsps_rv(data)                            ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_HDMI_GPVS1_get_vsps_rv(data)                             (0x00000001&(data))

#define  HDMI21_P0_HD21_HDMI_PSAP                                               0x180B7250
#define  HDMI21_P0_HD21_HDMI_PSAP_reg_addr                                       "0xB80B7250"
#define  HDMI21_P0_HD21_HDMI_PSAP_reg                                            0xB80B7250
#define  HDMI21_P0_HD21_HDMI_PSAP_inst_addr                                      "0x004D"
#define  set_HDMI21_P0_HD21_HDMI_PSAP_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PSAP_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_PSAP_reg                                        (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PSAP_reg))
#define  HDMI21_P0_HD21_HDMI_PSAP_apss_shift                                     (0)
#define  HDMI21_P0_HD21_HDMI_PSAP_apss_mask                                      (0x000001FF)
#define  HDMI21_P0_HD21_HDMI_PSAP_apss(data)                                     (0x000001FF&(data))
#define  HDMI21_P0_HD21_HDMI_PSAP_get_apss(data)                                 (0x000001FF&(data))

#define  HDMI21_P0_HD21_HDMI_PSDP                                               0x180B7254
#define  HDMI21_P0_HD21_HDMI_PSDP_reg_addr                                       "0xB80B7254"
#define  HDMI21_P0_HD21_HDMI_PSDP_reg                                            0xB80B7254
#define  HDMI21_P0_HD21_HDMI_PSDP_inst_addr                                      "0x004E"
#define  set_HDMI21_P0_HD21_HDMI_PSDP_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PSDP_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_PSDP_reg                                        (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PSDP_reg))
#define  HDMI21_P0_HD21_HDMI_PSDP_dpss_shift                                     (0)
#define  HDMI21_P0_HD21_HDMI_PSDP_dpss_mask                                      (0x000000FF)
#define  HDMI21_P0_HD21_HDMI_PSDP_dpss(data)                                     (0x000000FF&(data))
#define  HDMI21_P0_HD21_HDMI_PSDP_get_dpss(data)                                 (0x000000FF&(data))

#define  HDMI21_P0_HD21_HDMI_SCR                                                0x180B7258
#define  HDMI21_P0_HD21_HDMI_SCR_reg_addr                                        "0xB80B7258"
#define  HDMI21_P0_HD21_HDMI_SCR_reg                                             0xB80B7258
#define  HDMI21_P0_HD21_HDMI_SCR_inst_addr                                       "0x004F"
#define  set_HDMI21_P0_HD21_HDMI_SCR_reg(data)                                   (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_SCR_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_SCR_reg                                         (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_SCR_reg))
#define  HDMI21_P0_HD21_HDMI_SCR_packet_header_parsing_mode_shift                (16)
#define  HDMI21_P0_HD21_HDMI_SCR_packet_header_parsing_mode_mask                 (0x00010000)
#define  HDMI21_P0_HD21_HDMI_SCR_packet_header_parsing_mode(data)                (0x00010000&((data)<<16))
#define  HDMI21_P0_HD21_HDMI_SCR_get_packet_header_parsing_mode(data)            ((0x00010000&(data))>>16)

#define  HDMI21_P0_HD21_HDMI_BCHCR                                              0x180B725C
#define  HDMI21_P0_HD21_HDMI_BCHCR_reg_addr                                      "0xB80B725C"
#define  HDMI21_P0_HD21_HDMI_BCHCR_reg                                           0xB80B725C
#define  HDMI21_P0_HD21_HDMI_BCHCR_inst_addr                                     "0x0050"
#define  set_HDMI21_P0_HD21_HDMI_BCHCR_reg(data)                                 (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_BCHCR_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_BCHCR_reg                                       (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_BCHCR_reg))
#define  HDMI21_P0_HD21_HDMI_BCHCR_bches2_airq_en_shift                          (7)
#define  HDMI21_P0_HD21_HDMI_BCHCR_bches2_irq_en_shift                           (6)
#define  HDMI21_P0_HD21_HDMI_BCHCR_bche_shift                                    (3)
#define  HDMI21_P0_HD21_HDMI_BCHCR_bches_shift                                   (2)
#define  HDMI21_P0_HD21_HDMI_BCHCR_bches2_shift                                  (1)
#define  HDMI21_P0_HD21_HDMI_BCHCR_pe_shift                                      (0)
#define  HDMI21_P0_HD21_HDMI_BCHCR_bches2_airq_en_mask                           (0x00000080)
#define  HDMI21_P0_HD21_HDMI_BCHCR_bches2_irq_en_mask                            (0x00000040)
#define  HDMI21_P0_HD21_HDMI_BCHCR_bche_mask                                     (0x00000008)
#define  HDMI21_P0_HD21_HDMI_BCHCR_bches_mask                                    (0x00000004)
#define  HDMI21_P0_HD21_HDMI_BCHCR_bches2_mask                                   (0x00000002)
#define  HDMI21_P0_HD21_HDMI_BCHCR_pe_mask                                       (0x00000001)
#define  HDMI21_P0_HD21_HDMI_BCHCR_bches2_airq_en(data)                          (0x00000080&((data)<<7))
#define  HDMI21_P0_HD21_HDMI_BCHCR_bches2_irq_en(data)                           (0x00000040&((data)<<6))
#define  HDMI21_P0_HD21_HDMI_BCHCR_bche(data)                                    (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_HDMI_BCHCR_bches(data)                                   (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_HDMI_BCHCR_bches2(data)                                  (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_HDMI_BCHCR_pe(data)                                      (0x00000001&(data))
#define  HDMI21_P0_HD21_HDMI_BCHCR_get_bches2_airq_en(data)                      ((0x00000080&(data))>>7)
#define  HDMI21_P0_HD21_HDMI_BCHCR_get_bches2_irq_en(data)                       ((0x00000040&(data))>>6)
#define  HDMI21_P0_HD21_HDMI_BCHCR_get_bche(data)                                ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_HDMI_BCHCR_get_bches(data)                               ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_HDMI_BCHCR_get_bches2(data)                              ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_HDMI_BCHCR_get_pe(data)                                  (0x00000001&(data))

#define  HDMI21_P0_HD21_HDMI_AVMCR                                              0x180B7260
#define  HDMI21_P0_HD21_HDMI_AVMCR_reg_addr                                      "0xB80B7260"
#define  HDMI21_P0_HD21_HDMI_AVMCR_reg                                           0xB80B7260
#define  HDMI21_P0_HD21_HDMI_AVMCR_inst_addr                                     "0x0051"
#define  set_HDMI21_P0_HD21_HDMI_AVMCR_reg(data)                                 (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_AVMCR_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_AVMCR_reg                                       (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_AVMCR_reg))
#define  HDMI21_P0_HD21_HDMI_AVMCR_avmute_flag_shift                             (8)
#define  HDMI21_P0_HD21_HDMI_AVMCR_avmute_win_en_shift                           (7)
#define  HDMI21_P0_HD21_HDMI_AVMCR_avmute_flag_mask                              (0x00000100)
#define  HDMI21_P0_HD21_HDMI_AVMCR_avmute_win_en_mask                            (0x00000080)
#define  HDMI21_P0_HD21_HDMI_AVMCR_avmute_flag(data)                             (0x00000100&((data)<<8))
#define  HDMI21_P0_HD21_HDMI_AVMCR_avmute_win_en(data)                           (0x00000080&((data)<<7))
#define  HDMI21_P0_HD21_HDMI_AVMCR_get_avmute_flag(data)                         ((0x00000100&(data))>>8)
#define  HDMI21_P0_HD21_HDMI_AVMCR_get_avmute_win_en(data)                       ((0x00000080&(data))>>7)

#define  HDMI21_P0_HD21_HDMI_PAMICR                                             0x180B7264
#define  HDMI21_P0_HD21_HDMI_PAMICR_reg_addr                                     "0xB80B7264"
#define  HDMI21_P0_HD21_HDMI_PAMICR_reg                                          0xB80B7264
#define  HDMI21_P0_HD21_HDMI_PAMICR_inst_addr                                    "0x0052"
#define  set_HDMI21_P0_HD21_HDMI_PAMICR_reg(data)                                (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PAMICR_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_PAMICR_reg                                      (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PAMICR_reg))
#define  HDMI21_P0_HD21_HDMI_PAMICR_aicpvsb_shift                                (16)
#define  HDMI21_P0_HD21_HDMI_PAMICR_icpvsb_shift                                 (0)
#define  HDMI21_P0_HD21_HDMI_PAMICR_aicpvsb_mask                                 (0x00FF0000)
#define  HDMI21_P0_HD21_HDMI_PAMICR_icpvsb_mask                                  (0x00007FFF)
#define  HDMI21_P0_HD21_HDMI_PAMICR_aicpvsb(data)                                (0x00FF0000&((data)<<16))
#define  HDMI21_P0_HD21_HDMI_PAMICR_icpvsb(data)                                 (0x00007FFF&(data))
#define  HDMI21_P0_HD21_HDMI_PAMICR_get_aicpvsb(data)                            ((0x00FF0000&(data))>>16)
#define  HDMI21_P0_HD21_HDMI_PAMICR_get_icpvsb(data)                             (0x00007FFF&(data))

#define  HDMI21_P0_HD21_HDMI_PTRSV1                                             0x180B7268
#define  HDMI21_P0_HD21_HDMI_PTRSV1_reg_addr                                     "0xB80B7268"
#define  HDMI21_P0_HD21_HDMI_PTRSV1_reg                                          0xB80B7268
#define  HDMI21_P0_HD21_HDMI_PTRSV1_inst_addr                                    "0x0053"
#define  set_HDMI21_P0_HD21_HDMI_PTRSV1_reg(data)                                (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PTRSV1_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_PTRSV1_reg                                      (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PTRSV1_reg))
#define  HDMI21_P0_HD21_HDMI_PTRSV1_pt3_shift                                    (24)
#define  HDMI21_P0_HD21_HDMI_PTRSV1_pt2_shift                                    (16)
#define  HDMI21_P0_HD21_HDMI_PTRSV1_pt1_shift                                    (8)
#define  HDMI21_P0_HD21_HDMI_PTRSV1_pt0_shift                                    (0)
#define  HDMI21_P0_HD21_HDMI_PTRSV1_pt3_mask                                     (0xFF000000)
#define  HDMI21_P0_HD21_HDMI_PTRSV1_pt2_mask                                     (0x00FF0000)
#define  HDMI21_P0_HD21_HDMI_PTRSV1_pt1_mask                                     (0x0000FF00)
#define  HDMI21_P0_HD21_HDMI_PTRSV1_pt0_mask                                     (0x000000FF)
#define  HDMI21_P0_HD21_HDMI_PTRSV1_pt3(data)                                    (0xFF000000&((data)<<24))
#define  HDMI21_P0_HD21_HDMI_PTRSV1_pt2(data)                                    (0x00FF0000&((data)<<16))
#define  HDMI21_P0_HD21_HDMI_PTRSV1_pt1(data)                                    (0x0000FF00&((data)<<8))
#define  HDMI21_P0_HD21_HDMI_PTRSV1_pt0(data)                                    (0x000000FF&(data))
#define  HDMI21_P0_HD21_HDMI_PTRSV1_get_pt3(data)                                ((0xFF000000&(data))>>24)
#define  HDMI21_P0_HD21_HDMI_PTRSV1_get_pt2(data)                                ((0x00FF0000&(data))>>16)
#define  HDMI21_P0_HD21_HDMI_PTRSV1_get_pt1(data)                                ((0x0000FF00&(data))>>8)
#define  HDMI21_P0_HD21_HDMI_PTRSV1_get_pt0(data)                                (0x000000FF&(data))

#define  HDMI21_P0_HD21_HDMI_PTRSV2                                             0x180B726C
#define  HDMI21_P0_HD21_HDMI_PTRSV2_reg_addr                                     "0xB80B726C"
#define  HDMI21_P0_HD21_HDMI_PTRSV2_reg                                          0xB80B726C
#define  HDMI21_P0_HD21_HDMI_PTRSV2_inst_addr                                    "0x0054"
#define  set_HDMI21_P0_HD21_HDMI_PTRSV2_reg(data)                                (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PTRSV2_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_PTRSV2_reg                                      (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PTRSV2_reg))
#define  HDMI21_P0_HD21_HDMI_PTRSV2_pt3_oui_1st_shift                            (24)
#define  HDMI21_P0_HD21_HDMI_PTRSV2_pt2_oui_1st_shift                            (16)
#define  HDMI21_P0_HD21_HDMI_PTRSV2_pt1_oui_1st_shift                            (8)
#define  HDMI21_P0_HD21_HDMI_PTRSV2_pt0_oui_1st_shift                            (0)
#define  HDMI21_P0_HD21_HDMI_PTRSV2_pt3_oui_1st_mask                             (0xFF000000)
#define  HDMI21_P0_HD21_HDMI_PTRSV2_pt2_oui_1st_mask                             (0x00FF0000)
#define  HDMI21_P0_HD21_HDMI_PTRSV2_pt1_oui_1st_mask                             (0x0000FF00)
#define  HDMI21_P0_HD21_HDMI_PTRSV2_pt0_oui_1st_mask                             (0x000000FF)
#define  HDMI21_P0_HD21_HDMI_PTRSV2_pt3_oui_1st(data)                            (0xFF000000&((data)<<24))
#define  HDMI21_P0_HD21_HDMI_PTRSV2_pt2_oui_1st(data)                            (0x00FF0000&((data)<<16))
#define  HDMI21_P0_HD21_HDMI_PTRSV2_pt1_oui_1st(data)                            (0x0000FF00&((data)<<8))
#define  HDMI21_P0_HD21_HDMI_PTRSV2_pt0_oui_1st(data)                            (0x000000FF&(data))
#define  HDMI21_P0_HD21_HDMI_PTRSV2_get_pt3_oui_1st(data)                        ((0xFF000000&(data))>>24)
#define  HDMI21_P0_HD21_HDMI_PTRSV2_get_pt2_oui_1st(data)                        ((0x00FF0000&(data))>>16)
#define  HDMI21_P0_HD21_HDMI_PTRSV2_get_pt1_oui_1st(data)                        ((0x0000FF00&(data))>>8)
#define  HDMI21_P0_HD21_HDMI_PTRSV2_get_pt0_oui_1st(data)                        (0x000000FF&(data))

#define  HDMI21_P0_HD21_HDMI_PTRSV3                                             0x180B7270
#define  HDMI21_P0_HD21_HDMI_PTRSV3_reg_addr                                     "0xB80B7270"
#define  HDMI21_P0_HD21_HDMI_PTRSV3_reg                                          0xB80B7270
#define  HDMI21_P0_HD21_HDMI_PTRSV3_inst_addr                                    "0x0055"
#define  set_HDMI21_P0_HD21_HDMI_PTRSV3_reg(data)                                (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PTRSV3_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_PTRSV3_reg                                      (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PTRSV3_reg))
#define  HDMI21_P0_HD21_HDMI_PTRSV3_pt3_recognize_oui_en_shift                   (3)
#define  HDMI21_P0_HD21_HDMI_PTRSV3_pt2_recognize_oui_en_shift                   (2)
#define  HDMI21_P0_HD21_HDMI_PTRSV3_pt1_recognize_oui_en_shift                   (1)
#define  HDMI21_P0_HD21_HDMI_PTRSV3_pt0_recognize_oui_en_shift                   (0)
#define  HDMI21_P0_HD21_HDMI_PTRSV3_pt3_recognize_oui_en_mask                    (0x00000008)
#define  HDMI21_P0_HD21_HDMI_PTRSV3_pt2_recognize_oui_en_mask                    (0x00000004)
#define  HDMI21_P0_HD21_HDMI_PTRSV3_pt1_recognize_oui_en_mask                    (0x00000002)
#define  HDMI21_P0_HD21_HDMI_PTRSV3_pt0_recognize_oui_en_mask                    (0x00000001)
#define  HDMI21_P0_HD21_HDMI_PTRSV3_pt3_recognize_oui_en(data)                   (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_HDMI_PTRSV3_pt2_recognize_oui_en(data)                   (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_HDMI_PTRSV3_pt1_recognize_oui_en(data)                   (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_HDMI_PTRSV3_pt0_recognize_oui_en(data)                   (0x00000001&(data))
#define  HDMI21_P0_HD21_HDMI_PTRSV3_get_pt3_recognize_oui_en(data)               ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_HDMI_PTRSV3_get_pt2_recognize_oui_en(data)               ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_HDMI_PTRSV3_get_pt1_recognize_oui_en(data)               ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_HDMI_PTRSV3_get_pt0_recognize_oui_en(data)               (0x00000001&(data))

#define  HDMI21_P0_HD21_HDMI_PVGCR0                                             0x180B7274
#define  HDMI21_P0_HD21_HDMI_PVGCR0_reg_addr                                     "0xB80B7274"
#define  HDMI21_P0_HD21_HDMI_PVGCR0_reg                                          0xB80B7274
#define  HDMI21_P0_HD21_HDMI_PVGCR0_inst_addr                                    "0x0056"
#define  set_HDMI21_P0_HD21_HDMI_PVGCR0_reg(data)                                (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PVGCR0_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_PVGCR0_reg                                      (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PVGCR0_reg))
#define  HDMI21_P0_HD21_HDMI_PVGCR0_pvsef_shift                                  (0)
#define  HDMI21_P0_HD21_HDMI_PVGCR0_pvsef_mask                                   (0xFFFFFFFF)
#define  HDMI21_P0_HD21_HDMI_PVGCR0_pvsef(data)                                  (0xFFFFFFFF&(data))
#define  HDMI21_P0_HD21_HDMI_PVGCR0_get_pvsef(data)                              (0xFFFFFFFF&(data))

#define  HDMI21_P0_HD21_HDMI_PVSR0                                              0x180B7278
#define  HDMI21_P0_HD21_HDMI_PVSR0_reg_addr                                      "0xB80B7278"
#define  HDMI21_P0_HD21_HDMI_PVSR0_reg                                           0xB80B7278
#define  HDMI21_P0_HD21_HDMI_PVSR0_inst_addr                                     "0x0057"
#define  set_HDMI21_P0_HD21_HDMI_PVSR0_reg(data)                                 (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PVSR0_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_PVSR0_reg                                       (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PVSR0_reg))
#define  HDMI21_P0_HD21_HDMI_PVSR0_pvs_shift                                     (0)
#define  HDMI21_P0_HD21_HDMI_PVSR0_pvs_mask                                      (0xFFFFFFFF)
#define  HDMI21_P0_HD21_HDMI_PVSR0_pvs(data)                                     (0xFFFFFFFF&(data))
#define  HDMI21_P0_HD21_HDMI_PVSR0_get_pvs(data)                                 (0xFFFFFFFF&(data))

#define  HDMI21_P0_HD21_HDMI_VCR                                                0x180B727C
#define  HDMI21_P0_HD21_HDMI_VCR_reg_addr                                        "0xB80B727C"
#define  HDMI21_P0_HD21_HDMI_VCR_reg                                             0xB80B727C
#define  HDMI21_P0_HD21_HDMI_VCR_inst_addr                                       "0x0058"
#define  set_HDMI21_P0_HD21_HDMI_VCR_reg(data)                                   (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_VCR_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_VCR_reg                                         (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_VCR_reg))
#define  HDMI21_P0_HD21_HDMI_VCR_hdmi_field_shift                                (29)
#define  HDMI21_P0_HD21_HDMI_VCR_csc_r_shift                                     (19)
#define  HDMI21_P0_HD21_HDMI_VCR_csam_shift                                      (17)
#define  HDMI21_P0_HD21_HDMI_VCR_csc_shift                                       (14)
#define  HDMI21_P0_HD21_HDMI_VCR_prdsam_shift                                    (12)
#define  HDMI21_P0_HD21_HDMI_VCR_dsc_r_shift                                     (8)
#define  HDMI21_P0_HD21_HDMI_VCR_eoi_shift                                       (7)
#define  HDMI21_P0_HD21_HDMI_VCR_rs_shift                                        (4)
#define  HDMI21_P0_HD21_HDMI_VCR_dsc_shift                                       (0)
#define  HDMI21_P0_HD21_HDMI_VCR_hdmi_field_mask                                 (0x20000000)
#define  HDMI21_P0_HD21_HDMI_VCR_csc_r_mask                                      (0x00380000)
#define  HDMI21_P0_HD21_HDMI_VCR_csam_mask                                       (0x00020000)
#define  HDMI21_P0_HD21_HDMI_VCR_csc_mask                                        (0x0001C000)
#define  HDMI21_P0_HD21_HDMI_VCR_prdsam_mask                                     (0x00001000)
#define  HDMI21_P0_HD21_HDMI_VCR_dsc_r_mask                                      (0x00000F00)
#define  HDMI21_P0_HD21_HDMI_VCR_eoi_mask                                        (0x00000080)
#define  HDMI21_P0_HD21_HDMI_VCR_rs_mask                                         (0x00000010)
#define  HDMI21_P0_HD21_HDMI_VCR_dsc_mask                                        (0x0000000F)
#define  HDMI21_P0_HD21_HDMI_VCR_hdmi_field(data)                                (0x20000000&((data)<<29))
#define  HDMI21_P0_HD21_HDMI_VCR_csc_r(data)                                     (0x00380000&((data)<<19))
#define  HDMI21_P0_HD21_HDMI_VCR_csam(data)                                      (0x00020000&((data)<<17))
#define  HDMI21_P0_HD21_HDMI_VCR_csc(data)                                       (0x0001C000&((data)<<14))
#define  HDMI21_P0_HD21_HDMI_VCR_prdsam(data)                                    (0x00001000&((data)<<12))
#define  HDMI21_P0_HD21_HDMI_VCR_dsc_r(data)                                     (0x00000F00&((data)<<8))
#define  HDMI21_P0_HD21_HDMI_VCR_eoi(data)                                       (0x00000080&((data)<<7))
#define  HDMI21_P0_HD21_HDMI_VCR_rs(data)                                        (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_HDMI_VCR_dsc(data)                                       (0x0000000F&(data))
#define  HDMI21_P0_HD21_HDMI_VCR_get_hdmi_field(data)                            ((0x20000000&(data))>>29)
#define  HDMI21_P0_HD21_HDMI_VCR_get_csc_r(data)                                 ((0x00380000&(data))>>19)
#define  HDMI21_P0_HD21_HDMI_VCR_get_csam(data)                                  ((0x00020000&(data))>>17)
#define  HDMI21_P0_HD21_HDMI_VCR_get_csc(data)                                   ((0x0001C000&(data))>>14)
#define  HDMI21_P0_HD21_HDMI_VCR_get_prdsam(data)                                ((0x00001000&(data))>>12)
#define  HDMI21_P0_HD21_HDMI_VCR_get_dsc_r(data)                                 ((0x00000F00&(data))>>8)
#define  HDMI21_P0_HD21_HDMI_VCR_get_eoi(data)                                   ((0x00000080&(data))>>7)
#define  HDMI21_P0_HD21_HDMI_VCR_get_rs(data)                                    ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_HDMI_VCR_get_dsc(data)                                   (0x0000000F&(data))

#define  HDMI21_P0_HD21_HDMI_ACRCR                                              0x180B7280
#define  HDMI21_P0_HD21_HDMI_ACRCR_reg_addr                                      "0xB80B7280"
#define  HDMI21_P0_HD21_HDMI_ACRCR_reg                                           0xB80B7280
#define  HDMI21_P0_HD21_HDMI_ACRCR_inst_addr                                     "0x0059"
#define  set_HDMI21_P0_HD21_HDMI_ACRCR_reg(data)                                 (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_ACRCR_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_ACRCR_reg                                       (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_ACRCR_reg))
#define  HDMI21_P0_HD21_HDMI_ACRCR_pucnr_shift                                   (1)
#define  HDMI21_P0_HD21_HDMI_ACRCR_mode_shift                                    (0)
#define  HDMI21_P0_HD21_HDMI_ACRCR_pucnr_mask                                    (0x00000002)
#define  HDMI21_P0_HD21_HDMI_ACRCR_mode_mask                                     (0x00000001)
#define  HDMI21_P0_HD21_HDMI_ACRCR_pucnr(data)                                   (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_HDMI_ACRCR_mode(data)                                    (0x00000001&(data))
#define  HDMI21_P0_HD21_HDMI_ACRCR_get_pucnr(data)                               ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_HDMI_ACRCR_get_mode(data)                                (0x00000001&(data))

#define  HDMI21_P0_HD21_HDMI_ACRSR0                                             0x180B7284
#define  HDMI21_P0_HD21_HDMI_ACRSR0_reg_addr                                     "0xB80B7284"
#define  HDMI21_P0_HD21_HDMI_ACRSR0_reg                                          0xB80B7284
#define  HDMI21_P0_HD21_HDMI_ACRSR0_inst_addr                                    "0x005A"
#define  set_HDMI21_P0_HD21_HDMI_ACRSR0_reg(data)                                (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_ACRSR0_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_ACRSR0_reg                                      (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_ACRSR0_reg))
#define  HDMI21_P0_HD21_HDMI_ACRSR0_cts_shift                                    (0)
#define  HDMI21_P0_HD21_HDMI_ACRSR0_cts_mask                                     (0x000FFFFF)
#define  HDMI21_P0_HD21_HDMI_ACRSR0_cts(data)                                    (0x000FFFFF&(data))
#define  HDMI21_P0_HD21_HDMI_ACRSR0_get_cts(data)                                (0x000FFFFF&(data))

#define  HDMI21_P0_HD21_HDMI_ACRSR1                                             0x180B7288
#define  HDMI21_P0_HD21_HDMI_ACRSR1_reg_addr                                     "0xB80B7288"
#define  HDMI21_P0_HD21_HDMI_ACRSR1_reg                                          0xB80B7288
#define  HDMI21_P0_HD21_HDMI_ACRSR1_inst_addr                                    "0x005B"
#define  set_HDMI21_P0_HD21_HDMI_ACRSR1_reg(data)                                (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_ACRSR1_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_ACRSR1_reg                                      (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_ACRSR1_reg))
#define  HDMI21_P0_HD21_HDMI_ACRSR1_n_shift                                      (0)
#define  HDMI21_P0_HD21_HDMI_ACRSR1_n_mask                                       (0x000FFFFF)
#define  HDMI21_P0_HD21_HDMI_ACRSR1_n(data)                                      (0x000FFFFF&(data))
#define  HDMI21_P0_HD21_HDMI_ACRSR1_get_n(data)                                  (0x000FFFFF&(data))

#define  HDMI21_P0_HD21_HDMI_INTCR                                              0x180B728C
#define  HDMI21_P0_HD21_HDMI_INTCR_reg_addr                                      "0xB80B728C"
#define  HDMI21_P0_HD21_HDMI_INTCR_reg                                           0xB80B728C
#define  HDMI21_P0_HD21_HDMI_INTCR_inst_addr                                     "0x005C"
#define  set_HDMI21_P0_HD21_HDMI_INTCR_reg(data)                                 (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_INTCR_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_INTCR_reg                                       (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_INTCR_reg))
#define  HDMI21_P0_HD21_HDMI_INTCR_apending_shift                                (10)
#define  HDMI21_P0_HD21_HDMI_INTCR_pending_shift                                 (9)
#define  HDMI21_P0_HD21_HDMI_INTCR_aavmute_shift                                 (8)
#define  HDMI21_P0_HD21_HDMI_INTCR_avmute_shift                                  (7)
#define  HDMI21_P0_HD21_HDMI_INTCR_apending_mask                                 (0x00000400)
#define  HDMI21_P0_HD21_HDMI_INTCR_pending_mask                                  (0x00000200)
#define  HDMI21_P0_HD21_HDMI_INTCR_aavmute_mask                                  (0x00000100)
#define  HDMI21_P0_HD21_HDMI_INTCR_avmute_mask                                   (0x00000080)
#define  HDMI21_P0_HD21_HDMI_INTCR_apending(data)                                (0x00000400&((data)<<10))
#define  HDMI21_P0_HD21_HDMI_INTCR_pending(data)                                 (0x00000200&((data)<<9))
#define  HDMI21_P0_HD21_HDMI_INTCR_aavmute(data)                                 (0x00000100&((data)<<8))
#define  HDMI21_P0_HD21_HDMI_INTCR_avmute(data)                                  (0x00000080&((data)<<7))
#define  HDMI21_P0_HD21_HDMI_INTCR_get_apending(data)                            ((0x00000400&(data))>>10)
#define  HDMI21_P0_HD21_HDMI_INTCR_get_pending(data)                             ((0x00000200&(data))>>9)
#define  HDMI21_P0_HD21_HDMI_INTCR_get_aavmute(data)                             ((0x00000100&(data))>>8)
#define  HDMI21_P0_HD21_HDMI_INTCR_get_avmute(data)                              ((0x00000080&(data))>>7)

#define  HDMI21_P0_HD21_HDMI_BCSR                                               0x180B7290
#define  HDMI21_P0_HD21_HDMI_BCSR_reg_addr                                       "0xB80B7290"
#define  HDMI21_P0_HD21_HDMI_BCSR_reg                                            0xB80B7290
#define  HDMI21_P0_HD21_HDMI_BCSR_inst_addr                                      "0x005D"
#define  set_HDMI21_P0_HD21_HDMI_BCSR_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_BCSR_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_BCSR_reg                                        (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_BCSR_reg))
#define  HDMI21_P0_HD21_HDMI_BCSR_pe_shift                                       (1)
#define  HDMI21_P0_HD21_HDMI_BCSR_gcp_shift                                      (0)
#define  HDMI21_P0_HD21_HDMI_BCSR_pe_mask                                        (0x00000002)
#define  HDMI21_P0_HD21_HDMI_BCSR_gcp_mask                                       (0x00000001)
#define  HDMI21_P0_HD21_HDMI_BCSR_pe(data)                                       (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_HDMI_BCSR_gcp(data)                                      (0x00000001&(data))
#define  HDMI21_P0_HD21_HDMI_BCSR_get_pe(data)                                   ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_HDMI_BCSR_get_gcp(data)                                  (0x00000001&(data))

#define  HDMI21_P0_HD21_HDMI_ASR0                                               0x180B7294
#define  HDMI21_P0_HD21_HDMI_ASR0_reg_addr                                       "0xB80B7294"
#define  HDMI21_P0_HD21_HDMI_ASR0_reg                                            0xB80B7294
#define  HDMI21_P0_HD21_HDMI_ASR0_inst_addr                                      "0x005E"
#define  set_HDMI21_P0_HD21_HDMI_ASR0_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_ASR0_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_ASR0_reg                                        (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_ASR0_reg))
#define  HDMI21_P0_HD21_HDMI_ASR0_fsre_shift                                     (2)
#define  HDMI21_P0_HD21_HDMI_ASR0_fsif_shift                                     (1)
#define  HDMI21_P0_HD21_HDMI_ASR0_fsre_mask                                      (0x00000004)
#define  HDMI21_P0_HD21_HDMI_ASR0_fsif_mask                                      (0x00000002)
#define  HDMI21_P0_HD21_HDMI_ASR0_fsre(data)                                     (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_HDMI_ASR0_fsif(data)                                     (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_HDMI_ASR0_get_fsre(data)                                 ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_HDMI_ASR0_get_fsif(data)                                 ((0x00000002&(data))>>1)

#define  HDMI21_P0_HD21_HDMI_ASR1                                               0x180B7298
#define  HDMI21_P0_HD21_HDMI_ASR1_reg_addr                                       "0xB80B7298"
#define  HDMI21_P0_HD21_HDMI_ASR1_reg                                            0xB80B7298
#define  HDMI21_P0_HD21_HDMI_ASR1_inst_addr                                      "0x005F"
#define  set_HDMI21_P0_HD21_HDMI_ASR1_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_ASR1_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_ASR1_reg                                        (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_ASR1_reg))
#define  HDMI21_P0_HD21_HDMI_ASR1_fbif_shift                                     (8)
#define  HDMI21_P0_HD21_HDMI_ASR1_fbif_mask                                      (0x00000700)
#define  HDMI21_P0_HD21_HDMI_ASR1_fbif(data)                                     (0x00000700&((data)<<8))
#define  HDMI21_P0_HD21_HDMI_ASR1_get_fbif(data)                                 ((0x00000700&(data))>>8)

#define  HDMI21_P0_HD21_HDMI_VIDEO_FORMAT                                       0x180B729C
#define  HDMI21_P0_HD21_HDMI_VIDEO_FORMAT_reg_addr                               "0xB80B729C"
#define  HDMI21_P0_HD21_HDMI_VIDEO_FORMAT_reg                                    0xB80B729C
#define  HDMI21_P0_HD21_HDMI_VIDEO_FORMAT_inst_addr                              "0x0060"
#define  set_HDMI21_P0_HD21_HDMI_VIDEO_FORMAT_reg(data)                          (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_VIDEO_FORMAT_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_VIDEO_FORMAT_reg                                (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_VIDEO_FORMAT_reg))
#define  HDMI21_P0_HD21_HDMI_VIDEO_FORMAT_hvf_shift                              (8)
#define  HDMI21_P0_HD21_HDMI_VIDEO_FORMAT_hdmi_vic_shift                         (0)
#define  HDMI21_P0_HD21_HDMI_VIDEO_FORMAT_hvf_mask                               (0x00000700)
#define  HDMI21_P0_HD21_HDMI_VIDEO_FORMAT_hdmi_vic_mask                          (0x000000FF)
#define  HDMI21_P0_HD21_HDMI_VIDEO_FORMAT_hvf(data)                              (0x00000700&((data)<<8))
#define  HDMI21_P0_HD21_HDMI_VIDEO_FORMAT_hdmi_vic(data)                         (0x000000FF&(data))
#define  HDMI21_P0_HD21_HDMI_VIDEO_FORMAT_get_hvf(data)                          ((0x00000700&(data))>>8)
#define  HDMI21_P0_HD21_HDMI_VIDEO_FORMAT_get_hdmi_vic(data)                     (0x000000FF&(data))

#define  HDMI21_P0_HD21_HDMI_3D_FORMAT                                          0x180B72A0
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_reg_addr                                  "0xB80B72A0"
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_reg                                       0xB80B72A0
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_inst_addr                                 "0x0061"
#define  set_HDMI21_P0_HD21_HDMI_3D_FORMAT_reg(data)                             (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_3D_FORMAT_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_3D_FORMAT_reg                                   (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_3D_FORMAT_reg))
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_hdmi_3d_ext_data_shift                    (12)
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_hdmi_3d_metadata_type_shift               (9)
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_hdmi_3d_structure_shift                   (4)
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_hdmi_3d_meta_present_shift                (3)
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_hdmi_3d_ext_data_mask                     (0x0000F000)
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_hdmi_3d_metadata_type_mask                (0x00000E00)
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_hdmi_3d_structure_mask                    (0x000000F0)
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_hdmi_3d_meta_present_mask                 (0x00000008)
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_hdmi_3d_ext_data(data)                    (0x0000F000&((data)<<12))
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_hdmi_3d_metadata_type(data)               (0x00000E00&((data)<<9))
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_hdmi_3d_structure(data)                   (0x000000F0&((data)<<4))
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_hdmi_3d_meta_present(data)                (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_get_hdmi_3d_ext_data(data)                ((0x0000F000&(data))>>12)
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_get_hdmi_3d_metadata_type(data)           ((0x00000E00&(data))>>9)
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_get_hdmi_3d_structure(data)               ((0x000000F0&(data))>>4)
#define  HDMI21_P0_HD21_HDMI_3D_FORMAT_get_hdmi_3d_meta_present(data)            ((0x00000008&(data))>>3)

#define  HDMI21_P0_HD21_HDMI_FVS                                                0x180B72A4
#define  HDMI21_P0_HD21_HDMI_FVS_reg_addr                                        "0xB80B72A4"
#define  HDMI21_P0_HD21_HDMI_FVS_reg                                             0xB80B72A4
#define  HDMI21_P0_HD21_HDMI_FVS_inst_addr                                       "0x0062"
#define  set_HDMI21_P0_HD21_HDMI_FVS_reg(data)                                   (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_FVS_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_FVS_reg                                         (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_FVS_reg))
#define  HDMI21_P0_HD21_HDMI_FVS_allm_mode_shift                                 (4)
#define  HDMI21_P0_HD21_HDMI_FVS_ccbpc_shift                                     (0)
#define  HDMI21_P0_HD21_HDMI_FVS_allm_mode_mask                                  (0x00000010)
#define  HDMI21_P0_HD21_HDMI_FVS_ccbpc_mask                                      (0x0000000F)
#define  HDMI21_P0_HD21_HDMI_FVS_allm_mode(data)                                 (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_HDMI_FVS_ccbpc(data)                                     (0x0000000F&(data))
#define  HDMI21_P0_HD21_HDMI_FVS_get_allm_mode(data)                             ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_HDMI_FVS_get_ccbpc(data)                                 (0x0000000F&(data))

#define  HDMI21_P0_HD21_HDMI_DRM                                                0x180B72A8
#define  HDMI21_P0_HD21_HDMI_DRM_reg_addr                                        "0xB80B72A8"
#define  HDMI21_P0_HD21_HDMI_DRM_reg                                             0xB80B72A8
#define  HDMI21_P0_HD21_HDMI_DRM_inst_addr                                       "0x0063"
#define  set_HDMI21_P0_HD21_HDMI_DRM_reg(data)                                   (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_DRM_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_DRM_reg                                         (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_DRM_reg))
#define  HDMI21_P0_HD21_HDMI_DRM_static_metadata_descriptor_id_shift             (4)
#define  HDMI21_P0_HD21_HDMI_DRM_eotf_shift                                      (0)
#define  HDMI21_P0_HD21_HDMI_DRM_static_metadata_descriptor_id_mask              (0x00000070)
#define  HDMI21_P0_HD21_HDMI_DRM_eotf_mask                                       (0x00000007)
#define  HDMI21_P0_HD21_HDMI_DRM_static_metadata_descriptor_id(data)             (0x00000070&((data)<<4))
#define  HDMI21_P0_HD21_HDMI_DRM_eotf(data)                                      (0x00000007&(data))
#define  HDMI21_P0_HD21_HDMI_DRM_get_static_metadata_descriptor_id(data)         ((0x00000070&(data))>>4)
#define  HDMI21_P0_HD21_HDMI_DRM_get_eotf(data)                                  (0x00000007&(data))

#define  HDMI21_P0_HD21_HDMI_PCMC                                               0x180B72AC
#define  HDMI21_P0_HD21_HDMI_PCMC_reg_addr                                       "0xB80B72AC"
#define  HDMI21_P0_HD21_HDMI_PCMC_reg                                            0xB80B72AC
#define  HDMI21_P0_HD21_HDMI_PCMC_inst_addr                                      "0x0064"
#define  set_HDMI21_P0_HD21_HDMI_PCMC_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PCMC_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_PCMC_reg                                        (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_PCMC_reg))
#define  HDMI21_P0_HD21_HDMI_PCMC_drm_info_clr_shift                             (13)
#define  HDMI21_P0_HD21_HDMI_PCMC_mpeg_info_clr_shift                            (12)
#define  HDMI21_P0_HD21_HDMI_PCMC_audio_info_clr_shift                           (11)
#define  HDMI21_P0_HD21_HDMI_PCMC_spd_info_clr_shift                             (10)
#define  HDMI21_P0_HD21_HDMI_PCMC_avi_info_clr_shift                             (9)
#define  HDMI21_P0_HD21_HDMI_PCMC_hdr10pvs_info_clr_shift                        (8)
#define  HDMI21_P0_HD21_HDMI_PCMC_dvs_info_clr_shift                             (7)
#define  HDMI21_P0_HD21_HDMI_PCMC_fvs_info_clr_shift                             (6)
#define  HDMI21_P0_HD21_HDMI_PCMC_vs_info_clr_shift                              (5)
#define  HDMI21_P0_HD21_HDMI_PCMC_gm_clr_shift                                   (4)
#define  HDMI21_P0_HD21_HDMI_PCMC_isrc2_clr_shift                                (3)
#define  HDMI21_P0_HD21_HDMI_PCMC_isrc1_clr_shift                                (2)
#define  HDMI21_P0_HD21_HDMI_PCMC_acp_clr_shift                                  (1)
#define  HDMI21_P0_HD21_HDMI_PCMC_ackg_clr_shift                                 (0)
#define  HDMI21_P0_HD21_HDMI_PCMC_drm_info_clr_mask                              (0x00002000)
#define  HDMI21_P0_HD21_HDMI_PCMC_mpeg_info_clr_mask                             (0x00001000)
#define  HDMI21_P0_HD21_HDMI_PCMC_audio_info_clr_mask                            (0x00000800)
#define  HDMI21_P0_HD21_HDMI_PCMC_spd_info_clr_mask                              (0x00000400)
#define  HDMI21_P0_HD21_HDMI_PCMC_avi_info_clr_mask                              (0x00000200)
#define  HDMI21_P0_HD21_HDMI_PCMC_hdr10pvs_info_clr_mask                         (0x00000100)
#define  HDMI21_P0_HD21_HDMI_PCMC_dvs_info_clr_mask                              (0x00000080)
#define  HDMI21_P0_HD21_HDMI_PCMC_fvs_info_clr_mask                              (0x00000040)
#define  HDMI21_P0_HD21_HDMI_PCMC_vs_info_clr_mask                               (0x00000020)
#define  HDMI21_P0_HD21_HDMI_PCMC_gm_clr_mask                                    (0x00000010)
#define  HDMI21_P0_HD21_HDMI_PCMC_isrc2_clr_mask                                 (0x00000008)
#define  HDMI21_P0_HD21_HDMI_PCMC_isrc1_clr_mask                                 (0x00000004)
#define  HDMI21_P0_HD21_HDMI_PCMC_acp_clr_mask                                   (0x00000002)
#define  HDMI21_P0_HD21_HDMI_PCMC_ackg_clr_mask                                  (0x00000001)
#define  HDMI21_P0_HD21_HDMI_PCMC_drm_info_clr(data)                             (0x00002000&((data)<<13))
#define  HDMI21_P0_HD21_HDMI_PCMC_mpeg_info_clr(data)                            (0x00001000&((data)<<12))
#define  HDMI21_P0_HD21_HDMI_PCMC_audio_info_clr(data)                           (0x00000800&((data)<<11))
#define  HDMI21_P0_HD21_HDMI_PCMC_spd_info_clr(data)                             (0x00000400&((data)<<10))
#define  HDMI21_P0_HD21_HDMI_PCMC_avi_info_clr(data)                             (0x00000200&((data)<<9))
#define  HDMI21_P0_HD21_HDMI_PCMC_hdr10pvs_info_clr(data)                        (0x00000100&((data)<<8))
#define  HDMI21_P0_HD21_HDMI_PCMC_dvs_info_clr(data)                             (0x00000080&((data)<<7))
#define  HDMI21_P0_HD21_HDMI_PCMC_fvs_info_clr(data)                             (0x00000040&((data)<<6))
#define  HDMI21_P0_HD21_HDMI_PCMC_vs_info_clr(data)                              (0x00000020&((data)<<5))
#define  HDMI21_P0_HD21_HDMI_PCMC_gm_clr(data)                                   (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_HDMI_PCMC_isrc2_clr(data)                                (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_HDMI_PCMC_isrc1_clr(data)                                (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_HDMI_PCMC_acp_clr(data)                                  (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_HDMI_PCMC_ackg_clr(data)                                 (0x00000001&(data))
#define  HDMI21_P0_HD21_HDMI_PCMC_get_drm_info_clr(data)                         ((0x00002000&(data))>>13)
#define  HDMI21_P0_HD21_HDMI_PCMC_get_mpeg_info_clr(data)                        ((0x00001000&(data))>>12)
#define  HDMI21_P0_HD21_HDMI_PCMC_get_audio_info_clr(data)                       ((0x00000800&(data))>>11)
#define  HDMI21_P0_HD21_HDMI_PCMC_get_spd_info_clr(data)                         ((0x00000400&(data))>>10)
#define  HDMI21_P0_HD21_HDMI_PCMC_get_avi_info_clr(data)                         ((0x00000200&(data))>>9)
#define  HDMI21_P0_HD21_HDMI_PCMC_get_hdr10pvs_info_clr(data)                    ((0x00000100&(data))>>8)
#define  HDMI21_P0_HD21_HDMI_PCMC_get_dvs_info_clr(data)                         ((0x00000080&(data))>>7)
#define  HDMI21_P0_HD21_HDMI_PCMC_get_fvs_info_clr(data)                         ((0x00000040&(data))>>6)
#define  HDMI21_P0_HD21_HDMI_PCMC_get_vs_info_clr(data)                          ((0x00000020&(data))>>5)
#define  HDMI21_P0_HD21_HDMI_PCMC_get_gm_clr(data)                               ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_HDMI_PCMC_get_isrc2_clr(data)                            ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_HDMI_PCMC_get_isrc1_clr(data)                            ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_HDMI_PCMC_get_acp_clr(data)                              ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_HDMI_PCMC_get_ackg_clr(data)                             (0x00000001&(data))

#define  HDMI21_P0_HD21_Audio_Sample_Rate_Change_IRQ                            0x180B72B0
#define  HDMI21_P0_HD21_Audio_Sample_Rate_Change_IRQ_reg_addr                    "0xB80B72B0"
#define  HDMI21_P0_HD21_Audio_Sample_Rate_Change_IRQ_reg                         0xB80B72B0
#define  HDMI21_P0_HD21_Audio_Sample_Rate_Change_IRQ_inst_addr                   "0x0065"
#define  set_HDMI21_P0_HD21_Audio_Sample_Rate_Change_IRQ_reg(data)               (*((volatile unsigned int*)HDMI21_P0_HD21_Audio_Sample_Rate_Change_IRQ_reg)=data)
#define  get_HDMI21_P0_HD21_Audio_Sample_Rate_Change_IRQ_reg                     (*((volatile unsigned int*)HDMI21_P0_HD21_Audio_Sample_Rate_Change_IRQ_reg))
#define  HDMI21_P0_HD21_Audio_Sample_Rate_Change_IRQ_en_ncts_chg_irq_shift       (3)
#define  HDMI21_P0_HD21_Audio_Sample_Rate_Change_IRQ_ncts_chg_irq_shift          (2)
#define  HDMI21_P0_HD21_Audio_Sample_Rate_Change_IRQ_en_ncts_chg_irq_mask        (0x00000008)
#define  HDMI21_P0_HD21_Audio_Sample_Rate_Change_IRQ_ncts_chg_irq_mask           (0x00000004)
#define  HDMI21_P0_HD21_Audio_Sample_Rate_Change_IRQ_en_ncts_chg_irq(data)       (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_Audio_Sample_Rate_Change_IRQ_ncts_chg_irq(data)          (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_Audio_Sample_Rate_Change_IRQ_get_en_ncts_chg_irq(data)   ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_Audio_Sample_Rate_Change_IRQ_get_ncts_chg_irq(data)      ((0x00000004&(data))>>2)

#define  HDMI21_P0_HD21_High_Bit_Rate_Audio_Packet                              0x180B72B4
#define  HDMI21_P0_HD21_High_Bit_Rate_Audio_Packet_reg_addr                      "0xB80B72B4"
#define  HDMI21_P0_HD21_High_Bit_Rate_Audio_Packet_reg                           0xB80B72B4
#define  HDMI21_P0_HD21_High_Bit_Rate_Audio_Packet_inst_addr                     "0x0066"
#define  set_HDMI21_P0_HD21_High_Bit_Rate_Audio_Packet_reg(data)                 (*((volatile unsigned int*)HDMI21_P0_HD21_High_Bit_Rate_Audio_Packet_reg)=data)
#define  get_HDMI21_P0_HD21_High_Bit_Rate_Audio_Packet_reg                       (*((volatile unsigned int*)HDMI21_P0_HD21_High_Bit_Rate_Audio_Packet_reg))
#define  HDMI21_P0_HD21_High_Bit_Rate_Audio_Packet_hbr_audio_mode_shift          (0)
#define  HDMI21_P0_HD21_High_Bit_Rate_Audio_Packet_hbr_audio_mode_mask           (0x00000001)
#define  HDMI21_P0_HD21_High_Bit_Rate_Audio_Packet_hbr_audio_mode(data)          (0x00000001&(data))
#define  HDMI21_P0_HD21_High_Bit_Rate_Audio_Packet_get_hbr_audio_mode(data)      (0x00000001&(data))

#define  HDMI21_P0_HD21_HDMI_AUDCR                                              0x180B72B8
#define  HDMI21_P0_HD21_HDMI_AUDCR_reg_addr                                      "0xB80B72B8"
#define  HDMI21_P0_HD21_HDMI_AUDCR_reg                                           0xB80B72B8
#define  HDMI21_P0_HD21_HDMI_AUDCR_inst_addr                                     "0x0067"
#define  set_HDMI21_P0_HD21_HDMI_AUDCR_reg(data)                                 (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_AUDCR_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_AUDCR_reg                                       (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_AUDCR_reg))
#define  HDMI21_P0_HD21_HDMI_AUDCR_aud_data_fw_shift                             (8)
#define  HDMI21_P0_HD21_HDMI_AUDCR_pck_hbr_aud_gated_en_shift                    (6)
#define  HDMI21_P0_HD21_HDMI_AUDCR_pck_aud_gated_en_shift                        (5)
#define  HDMI21_P0_HD21_HDMI_AUDCR_aud_cptest_en_shift                           (4)
#define  HDMI21_P0_HD21_HDMI_AUDCR_sine_replace_en_shift                         (3)
#define  HDMI21_P0_HD21_HDMI_AUDCR_bch2_repeat_en_shift                          (2)
#define  HDMI21_P0_HD21_HDMI_AUDCR_flat_en_shift                                 (1)
#define  HDMI21_P0_HD21_HDMI_AUDCR_aud_en_shift                                  (0)
#define  HDMI21_P0_HD21_HDMI_AUDCR_aud_data_fw_mask                              (0x03FFFF00)
#define  HDMI21_P0_HD21_HDMI_AUDCR_pck_hbr_aud_gated_en_mask                     (0x00000040)
#define  HDMI21_P0_HD21_HDMI_AUDCR_pck_aud_gated_en_mask                         (0x00000020)
#define  HDMI21_P0_HD21_HDMI_AUDCR_aud_cptest_en_mask                            (0x00000010)
#define  HDMI21_P0_HD21_HDMI_AUDCR_sine_replace_en_mask                          (0x00000008)
#define  HDMI21_P0_HD21_HDMI_AUDCR_bch2_repeat_en_mask                           (0x00000004)
#define  HDMI21_P0_HD21_HDMI_AUDCR_flat_en_mask                                  (0x00000002)
#define  HDMI21_P0_HD21_HDMI_AUDCR_aud_en_mask                                   (0x00000001)
#define  HDMI21_P0_HD21_HDMI_AUDCR_aud_data_fw(data)                             (0x03FFFF00&((data)<<8))
#define  HDMI21_P0_HD21_HDMI_AUDCR_pck_hbr_aud_gated_en(data)                    (0x00000040&((data)<<6))
#define  HDMI21_P0_HD21_HDMI_AUDCR_pck_aud_gated_en(data)                        (0x00000020&((data)<<5))
#define  HDMI21_P0_HD21_HDMI_AUDCR_aud_cptest_en(data)                           (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_HDMI_AUDCR_sine_replace_en(data)                         (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_HDMI_AUDCR_bch2_repeat_en(data)                          (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_HDMI_AUDCR_flat_en(data)                                 (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_HDMI_AUDCR_aud_en(data)                                  (0x00000001&(data))
#define  HDMI21_P0_HD21_HDMI_AUDCR_get_aud_data_fw(data)                         ((0x03FFFF00&(data))>>8)
#define  HDMI21_P0_HD21_HDMI_AUDCR_get_pck_hbr_aud_gated_en(data)                ((0x00000040&(data))>>6)
#define  HDMI21_P0_HD21_HDMI_AUDCR_get_pck_aud_gated_en(data)                    ((0x00000020&(data))>>5)
#define  HDMI21_P0_HD21_HDMI_AUDCR_get_aud_cptest_en(data)                       ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_HDMI_AUDCR_get_sine_replace_en(data)                     ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_HDMI_AUDCR_get_bch2_repeat_en(data)                      ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_HDMI_AUDCR_get_flat_en(data)                             ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_HDMI_AUDCR_get_aud_en(data)                              (0x00000001&(data))

#define  HDMI21_P0_HD21_HDMI_AUDSR                                              0x180B72BC
#define  HDMI21_P0_HD21_HDMI_AUDSR_reg_addr                                      "0xB80B72BC"
#define  HDMI21_P0_HD21_HDMI_AUDSR_reg                                           0xB80B72BC
#define  HDMI21_P0_HD21_HDMI_AUDSR_inst_addr                                     "0x0068"
#define  set_HDMI21_P0_HD21_HDMI_AUDSR_reg(data)                                 (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_AUDSR_reg)=data)
#define  get_HDMI21_P0_HD21_HDMI_AUDSR_reg                                       (*((volatile unsigned int*)HDMI21_P0_HD21_HDMI_AUDSR_reg))
#define  HDMI21_P0_HD21_HDMI_AUDSR_aud_ch_mode_shift                             (1)
#define  HDMI21_P0_HD21_HDMI_AUDSR_aud_fifof_shift                               (0)
#define  HDMI21_P0_HD21_HDMI_AUDSR_aud_ch_mode_mask                              (0x0000000E)
#define  HDMI21_P0_HD21_HDMI_AUDSR_aud_fifof_mask                                (0x00000001)
#define  HDMI21_P0_HD21_HDMI_AUDSR_aud_ch_mode(data)                             (0x0000000E&((data)<<1))
#define  HDMI21_P0_HD21_HDMI_AUDSR_aud_fifof(data)                               (0x00000001&(data))
#define  HDMI21_P0_HD21_HDMI_AUDSR_get_aud_ch_mode(data)                         ((0x0000000E&(data))>>1)
#define  HDMI21_P0_HD21_HDMI_AUDSR_get_aud_fifof(data)                           (0x00000001&(data))

#define  HDMI21_P0_HD21_AUDIO_CTS_UP_BOUND                                      0x180B72C0
#define  HDMI21_P0_HD21_AUDIO_CTS_UP_BOUND_reg_addr                              "0xB80B72C0"
#define  HDMI21_P0_HD21_AUDIO_CTS_UP_BOUND_reg                                   0xB80B72C0
#define  HDMI21_P0_HD21_AUDIO_CTS_UP_BOUND_inst_addr                             "0x0069"
#define  set_HDMI21_P0_HD21_AUDIO_CTS_UP_BOUND_reg(data)                         (*((volatile unsigned int*)HDMI21_P0_HD21_AUDIO_CTS_UP_BOUND_reg)=data)
#define  get_HDMI21_P0_HD21_AUDIO_CTS_UP_BOUND_reg                               (*((volatile unsigned int*)HDMI21_P0_HD21_AUDIO_CTS_UP_BOUND_reg))
#define  HDMI21_P0_HD21_AUDIO_CTS_UP_BOUND_cts_over_flag_shift                   (31)
#define  HDMI21_P0_HD21_AUDIO_CTS_UP_BOUND_cts_up_bound_shift                    (0)
#define  HDMI21_P0_HD21_AUDIO_CTS_UP_BOUND_cts_over_flag_mask                    (0x80000000)
#define  HDMI21_P0_HD21_AUDIO_CTS_UP_BOUND_cts_up_bound_mask                     (0x000FFFFF)
#define  HDMI21_P0_HD21_AUDIO_CTS_UP_BOUND_cts_over_flag(data)                   (0x80000000&((data)<<31))
#define  HDMI21_P0_HD21_AUDIO_CTS_UP_BOUND_cts_up_bound(data)                    (0x000FFFFF&(data))
#define  HDMI21_P0_HD21_AUDIO_CTS_UP_BOUND_get_cts_over_flag(data)               ((0x80000000&(data))>>31)
#define  HDMI21_P0_HD21_AUDIO_CTS_UP_BOUND_get_cts_up_bound(data)                (0x000FFFFF&(data))

#define  HDMI21_P0_HD21_AUDIO_CTS_LOW_BOUND                                     0x180B72C4
#define  HDMI21_P0_HD21_AUDIO_CTS_LOW_BOUND_reg_addr                             "0xB80B72C4"
#define  HDMI21_P0_HD21_AUDIO_CTS_LOW_BOUND_reg                                  0xB80B72C4
#define  HDMI21_P0_HD21_AUDIO_CTS_LOW_BOUND_inst_addr                            "0x006A"
#define  set_HDMI21_P0_HD21_AUDIO_CTS_LOW_BOUND_reg(data)                        (*((volatile unsigned int*)HDMI21_P0_HD21_AUDIO_CTS_LOW_BOUND_reg)=data)
#define  get_HDMI21_P0_HD21_AUDIO_CTS_LOW_BOUND_reg                              (*((volatile unsigned int*)HDMI21_P0_HD21_AUDIO_CTS_LOW_BOUND_reg))
#define  HDMI21_P0_HD21_AUDIO_CTS_LOW_BOUND_cts_under_flag_shift                 (31)
#define  HDMI21_P0_HD21_AUDIO_CTS_LOW_BOUND_cts_low_bound_shift                  (0)
#define  HDMI21_P0_HD21_AUDIO_CTS_LOW_BOUND_cts_under_flag_mask                  (0x80000000)
#define  HDMI21_P0_HD21_AUDIO_CTS_LOW_BOUND_cts_low_bound_mask                   (0x000FFFFF)
#define  HDMI21_P0_HD21_AUDIO_CTS_LOW_BOUND_cts_under_flag(data)                 (0x80000000&((data)<<31))
#define  HDMI21_P0_HD21_AUDIO_CTS_LOW_BOUND_cts_low_bound(data)                  (0x000FFFFF&(data))
#define  HDMI21_P0_HD21_AUDIO_CTS_LOW_BOUND_get_cts_under_flag(data)             ((0x80000000&(data))>>31)
#define  HDMI21_P0_HD21_AUDIO_CTS_LOW_BOUND_get_cts_low_bound(data)              (0x000FFFFF&(data))

#define  HDMI21_P0_HD21_AUDIO_N_UP_BOUND                                        0x180B72C8
#define  HDMI21_P0_HD21_AUDIO_N_UP_BOUND_reg_addr                                "0xB80B72C8"
#define  HDMI21_P0_HD21_AUDIO_N_UP_BOUND_reg                                     0xB80B72C8
#define  HDMI21_P0_HD21_AUDIO_N_UP_BOUND_inst_addr                               "0x006B"
#define  set_HDMI21_P0_HD21_AUDIO_N_UP_BOUND_reg(data)                           (*((volatile unsigned int*)HDMI21_P0_HD21_AUDIO_N_UP_BOUND_reg)=data)
#define  get_HDMI21_P0_HD21_AUDIO_N_UP_BOUND_reg                                 (*((volatile unsigned int*)HDMI21_P0_HD21_AUDIO_N_UP_BOUND_reg))
#define  HDMI21_P0_HD21_AUDIO_N_UP_BOUND_n_over_flag_shift                       (31)
#define  HDMI21_P0_HD21_AUDIO_N_UP_BOUND_n_up_bound_shift                        (0)
#define  HDMI21_P0_HD21_AUDIO_N_UP_BOUND_n_over_flag_mask                        (0x80000000)
#define  HDMI21_P0_HD21_AUDIO_N_UP_BOUND_n_up_bound_mask                         (0x000FFFFF)
#define  HDMI21_P0_HD21_AUDIO_N_UP_BOUND_n_over_flag(data)                       (0x80000000&((data)<<31))
#define  HDMI21_P0_HD21_AUDIO_N_UP_BOUND_n_up_bound(data)                        (0x000FFFFF&(data))
#define  HDMI21_P0_HD21_AUDIO_N_UP_BOUND_get_n_over_flag(data)                   ((0x80000000&(data))>>31)
#define  HDMI21_P0_HD21_AUDIO_N_UP_BOUND_get_n_up_bound(data)                    (0x000FFFFF&(data))

#define  HDMI21_P0_HD21_AUDIO_N_LOW_BOUND                                       0x180B72CC
#define  HDMI21_P0_HD21_AUDIO_N_LOW_BOUND_reg_addr                               "0xB80B72CC"
#define  HDMI21_P0_HD21_AUDIO_N_LOW_BOUND_reg                                    0xB80B72CC
#define  HDMI21_P0_HD21_AUDIO_N_LOW_BOUND_inst_addr                              "0x006C"
#define  set_HDMI21_P0_HD21_AUDIO_N_LOW_BOUND_reg(data)                          (*((volatile unsigned int*)HDMI21_P0_HD21_AUDIO_N_LOW_BOUND_reg)=data)
#define  get_HDMI21_P0_HD21_AUDIO_N_LOW_BOUND_reg                                (*((volatile unsigned int*)HDMI21_P0_HD21_AUDIO_N_LOW_BOUND_reg))
#define  HDMI21_P0_HD21_AUDIO_N_LOW_BOUND_n_under_flag_shift                     (31)
#define  HDMI21_P0_HD21_AUDIO_N_LOW_BOUND_n_low_bound_shift                      (0)
#define  HDMI21_P0_HD21_AUDIO_N_LOW_BOUND_n_under_flag_mask                      (0x80000000)
#define  HDMI21_P0_HD21_AUDIO_N_LOW_BOUND_n_low_bound_mask                       (0x000FFFFF)
#define  HDMI21_P0_HD21_AUDIO_N_LOW_BOUND_n_under_flag(data)                     (0x80000000&((data)<<31))
#define  HDMI21_P0_HD21_AUDIO_N_LOW_BOUND_n_low_bound(data)                      (0x000FFFFF&(data))
#define  HDMI21_P0_HD21_AUDIO_N_LOW_BOUND_get_n_under_flag(data)                 ((0x80000000&(data))>>31)
#define  HDMI21_P0_HD21_AUDIO_N_LOW_BOUND_get_n_low_bound(data)                  (0x000FFFFF&(data))

#define  HDMI21_P0_HD21_CLKDETCR                                                0x180B72D0
#define  HDMI21_P0_HD21_CLKDETCR_reg_addr                                        "0xB80B72D0"
#define  HDMI21_P0_HD21_CLKDETCR_reg                                             0xB80B72D0
#define  HDMI21_P0_HD21_CLKDETCR_inst_addr                                       "0x006D"
#define  set_HDMI21_P0_HD21_CLKDETCR_reg(data)                                   (*((volatile unsigned int*)HDMI21_P0_HD21_CLKDETCR_reg)=data)
#define  get_HDMI21_P0_HD21_CLKDETCR_reg                                         (*((volatile unsigned int*)HDMI21_P0_HD21_CLKDETCR_reg))
#define  HDMI21_P0_HD21_CLKDETCR_trans_meas_sel_shift                            (4)
#define  HDMI21_P0_HD21_CLKDETCR_det_sel_shift                                   (3)
#define  HDMI21_P0_HD21_CLKDETCR_clkv_meas_sel_shift                             (1)
#define  HDMI21_P0_HD21_CLKDETCR_clock_det_en_shift                              (0)
#define  HDMI21_P0_HD21_CLKDETCR_trans_meas_sel_mask                             (0x00000030)
#define  HDMI21_P0_HD21_CLKDETCR_det_sel_mask                                    (0x00000008)
#define  HDMI21_P0_HD21_CLKDETCR_clkv_meas_sel_mask                              (0x00000006)
#define  HDMI21_P0_HD21_CLKDETCR_clock_det_en_mask                               (0x00000001)
#define  HDMI21_P0_HD21_CLKDETCR_trans_meas_sel(data)                            (0x00000030&((data)<<4))
#define  HDMI21_P0_HD21_CLKDETCR_det_sel(data)                                   (0x00000008&((data)<<3))
#define  HDMI21_P0_HD21_CLKDETCR_clkv_meas_sel(data)                             (0x00000006&((data)<<1))
#define  HDMI21_P0_HD21_CLKDETCR_clock_det_en(data)                              (0x00000001&(data))
#define  HDMI21_P0_HD21_CLKDETCR_get_trans_meas_sel(data)                        ((0x00000030&(data))>>4)
#define  HDMI21_P0_HD21_CLKDETCR_get_det_sel(data)                               ((0x00000008&(data))>>3)
#define  HDMI21_P0_HD21_CLKDETCR_get_clkv_meas_sel(data)                         ((0x00000006&(data))>>1)
#define  HDMI21_P0_HD21_CLKDETCR_get_clock_det_en(data)                          (0x00000001&(data))

#define  HDMI21_P0_HD21_CLKDETSR                                                0x180B72D4
#define  HDMI21_P0_HD21_CLKDETSR_reg_addr                                        "0xB80B72D4"
#define  HDMI21_P0_HD21_CLKDETSR_reg                                             0xB80B72D4
#define  HDMI21_P0_HD21_CLKDETSR_inst_addr                                       "0x006E"
#define  set_HDMI21_P0_HD21_CLKDETSR_reg(data)                                   (*((volatile unsigned int*)HDMI21_P0_HD21_CLKDETSR_reg)=data)
#define  get_HDMI21_P0_HD21_CLKDETSR_reg                                         (*((volatile unsigned int*)HDMI21_P0_HD21_CLKDETSR_reg))
#define  HDMI21_P0_HD21_CLKDETSR_reset_counter_shift                             (25)
#define  HDMI21_P0_HD21_CLKDETSR_pop_out_shift                                   (24)
#define  HDMI21_P0_HD21_CLKDETSR_clk_counter_shift                               (8)
#define  HDMI21_P0_HD21_CLKDETSR_en_clk_chg_irq_shift                            (5)
#define  HDMI21_P0_HD21_CLKDETSR_clk_chg_irq_shift                               (4)
#define  HDMI21_P0_HD21_CLKDETSR_dummy_3_2_shift                                 (2)
#define  HDMI21_P0_HD21_CLKDETSR_clk_in_target_irq_en_shift                      (1)
#define  HDMI21_P0_HD21_CLKDETSR_clk_in_target_shift                             (0)
#define  HDMI21_P0_HD21_CLKDETSR_reset_counter_mask                              (0x02000000)
#define  HDMI21_P0_HD21_CLKDETSR_pop_out_mask                                    (0x01000000)
#define  HDMI21_P0_HD21_CLKDETSR_clk_counter_mask                                (0x000FFF00)
#define  HDMI21_P0_HD21_CLKDETSR_en_clk_chg_irq_mask                             (0x00000020)
#define  HDMI21_P0_HD21_CLKDETSR_clk_chg_irq_mask                                (0x00000010)
#define  HDMI21_P0_HD21_CLKDETSR_dummy_3_2_mask                                  (0x0000000C)
#define  HDMI21_P0_HD21_CLKDETSR_clk_in_target_irq_en_mask                       (0x00000002)
#define  HDMI21_P0_HD21_CLKDETSR_clk_in_target_mask                              (0x00000001)
#define  HDMI21_P0_HD21_CLKDETSR_reset_counter(data)                             (0x02000000&((data)<<25))
#define  HDMI21_P0_HD21_CLKDETSR_pop_out(data)                                   (0x01000000&((data)<<24))
#define  HDMI21_P0_HD21_CLKDETSR_clk_counter(data)                               (0x000FFF00&((data)<<8))
#define  HDMI21_P0_HD21_CLKDETSR_en_clk_chg_irq(data)                            (0x00000020&((data)<<5))
#define  HDMI21_P0_HD21_CLKDETSR_clk_chg_irq(data)                               (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_CLKDETSR_dummy_3_2(data)                                 (0x0000000C&((data)<<2))
#define  HDMI21_P0_HD21_CLKDETSR_clk_in_target_irq_en(data)                      (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_CLKDETSR_clk_in_target(data)                             (0x00000001&(data))
#define  HDMI21_P0_HD21_CLKDETSR_get_reset_counter(data)                         ((0x02000000&(data))>>25)
#define  HDMI21_P0_HD21_CLKDETSR_get_pop_out(data)                               ((0x01000000&(data))>>24)
#define  HDMI21_P0_HD21_CLKDETSR_get_clk_counter(data)                           ((0x000FFF00&(data))>>8)
#define  HDMI21_P0_HD21_CLKDETSR_get_en_clk_chg_irq(data)                        ((0x00000020&(data))>>5)
#define  HDMI21_P0_HD21_CLKDETSR_get_clk_chg_irq(data)                           ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_CLKDETSR_get_dummy_3_2(data)                             ((0x0000000C&(data))>>2)
#define  HDMI21_P0_HD21_CLKDETSR_get_clk_in_target_irq_en(data)                  ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_CLKDETSR_get_clk_in_target(data)                         (0x00000001&(data))

#define  HDMI21_P0_HD21_CLK_SETTING_00                                          0x180B72D8
#define  HDMI21_P0_HD21_CLK_SETTING_00_reg_addr                                  "0xB80B72D8"
#define  HDMI21_P0_HD21_CLK_SETTING_00_reg                                       0xB80B72D8
#define  HDMI21_P0_HD21_CLK_SETTING_00_inst_addr                                 "0x006F"
#define  set_HDMI21_P0_HD21_CLK_SETTING_00_reg(data)                             (*((volatile unsigned int*)HDMI21_P0_HD21_CLK_SETTING_00_reg)=data)
#define  get_HDMI21_P0_HD21_CLK_SETTING_00_reg                                   (*((volatile unsigned int*)HDMI21_P0_HD21_CLK_SETTING_00_reg))
#define  HDMI21_P0_HD21_CLK_SETTING_00_dclk_cnt_start_shift                      (16)
#define  HDMI21_P0_HD21_CLK_SETTING_00_dclk_cnt_end_shift                        (0)
#define  HDMI21_P0_HD21_CLK_SETTING_00_dclk_cnt_start_mask                       (0x0FFF0000)
#define  HDMI21_P0_HD21_CLK_SETTING_00_dclk_cnt_end_mask                         (0x00000FFF)
#define  HDMI21_P0_HD21_CLK_SETTING_00_dclk_cnt_start(data)                      (0x0FFF0000&((data)<<16))
#define  HDMI21_P0_HD21_CLK_SETTING_00_dclk_cnt_end(data)                        (0x00000FFF&(data))
#define  HDMI21_P0_HD21_CLK_SETTING_00_get_dclk_cnt_start(data)                  ((0x0FFF0000&(data))>>16)
#define  HDMI21_P0_HD21_CLK_SETTING_00_get_dclk_cnt_end(data)                    (0x00000FFF&(data))

#define  HDMI21_P0_HD21_CLK_SETTING_01                                          0x180B72DC
#define  HDMI21_P0_HD21_CLK_SETTING_01_reg_addr                                  "0xB80B72DC"
#define  HDMI21_P0_HD21_CLK_SETTING_01_reg                                       0xB80B72DC
#define  HDMI21_P0_HD21_CLK_SETTING_01_inst_addr                                 "0x0070"
#define  set_HDMI21_P0_HD21_CLK_SETTING_01_reg(data)                             (*((volatile unsigned int*)HDMI21_P0_HD21_CLK_SETTING_01_reg)=data)
#define  get_HDMI21_P0_HD21_CLK_SETTING_01_reg                                   (*((volatile unsigned int*)HDMI21_P0_HD21_CLK_SETTING_01_reg))
#define  HDMI21_P0_HD21_CLK_SETTING_01_target_for_maximum_clk_counter_shift      (16)
#define  HDMI21_P0_HD21_CLK_SETTING_01_target_for_minimum_clk_counter_shift      (0)
#define  HDMI21_P0_HD21_CLK_SETTING_01_target_for_maximum_clk_counter_mask       (0x0FFF0000)
#define  HDMI21_P0_HD21_CLK_SETTING_01_target_for_minimum_clk_counter_mask       (0x00000FFF)
#define  HDMI21_P0_HD21_CLK_SETTING_01_target_for_maximum_clk_counter(data)      (0x0FFF0000&((data)<<16))
#define  HDMI21_P0_HD21_CLK_SETTING_01_target_for_minimum_clk_counter(data)      (0x00000FFF&(data))
#define  HDMI21_P0_HD21_CLK_SETTING_01_get_target_for_maximum_clk_counter(data)  ((0x0FFF0000&(data))>>16)
#define  HDMI21_P0_HD21_CLK_SETTING_01_get_target_for_minimum_clk_counter(data)  (0x00000FFF&(data))

#define  HDMI21_P0_HD21_CLK_SETTING_02                                          0x180B72E0
#define  HDMI21_P0_HD21_CLK_SETTING_02_reg_addr                                  "0xB80B72E0"
#define  HDMI21_P0_HD21_CLK_SETTING_02_reg                                       0xB80B72E0
#define  HDMI21_P0_HD21_CLK_SETTING_02_inst_addr                                 "0x0071"
#define  set_HDMI21_P0_HD21_CLK_SETTING_02_reg(data)                             (*((volatile unsigned int*)HDMI21_P0_HD21_CLK_SETTING_02_reg)=data)
#define  get_HDMI21_P0_HD21_CLK_SETTING_02_reg                                   (*((volatile unsigned int*)HDMI21_P0_HD21_CLK_SETTING_02_reg))
#define  HDMI21_P0_HD21_CLK_SETTING_02_clk_counter_err_threshold_shift           (8)
#define  HDMI21_P0_HD21_CLK_SETTING_02_clk_counter_debounce_shift                (0)
#define  HDMI21_P0_HD21_CLK_SETTING_02_clk_counter_err_threshold_mask            (0x00000F00)
#define  HDMI21_P0_HD21_CLK_SETTING_02_clk_counter_debounce_mask                 (0x000000FF)
#define  HDMI21_P0_HD21_CLK_SETTING_02_clk_counter_err_threshold(data)           (0x00000F00&((data)<<8))
#define  HDMI21_P0_HD21_CLK_SETTING_02_clk_counter_debounce(data)                (0x000000FF&(data))
#define  HDMI21_P0_HD21_CLK_SETTING_02_get_clk_counter_err_threshold(data)       ((0x00000F00&(data))>>8)
#define  HDMI21_P0_HD21_CLK_SETTING_02_get_clk_counter_debounce(data)            (0x000000FF&(data))

#define  HDMI21_P0_HD21_CLKDET2CR                                               0x180B72E4
#define  HDMI21_P0_HD21_CLKDET2CR_reg_addr                                       "0xB80B72E4"
#define  HDMI21_P0_HD21_CLKDET2CR_reg                                            0xB80B72E4
#define  HDMI21_P0_HD21_CLKDET2CR_inst_addr                                      "0x0072"
#define  set_HDMI21_P0_HD21_CLKDET2CR_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_HD21_CLKDET2CR_reg)=data)
#define  get_HDMI21_P0_HD21_CLKDET2CR_reg                                        (*((volatile unsigned int*)HDMI21_P0_HD21_CLKDET2CR_reg))
#define  HDMI21_P0_HD21_CLKDET2CR_trans_meas_sel_shift                           (4)
#define  HDMI21_P0_HD21_CLKDET2CR_clock_det_en_shift                             (0)
#define  HDMI21_P0_HD21_CLKDET2CR_trans_meas_sel_mask                            (0x00000030)
#define  HDMI21_P0_HD21_CLKDET2CR_clock_det_en_mask                              (0x00000001)
#define  HDMI21_P0_HD21_CLKDET2CR_trans_meas_sel(data)                           (0x00000030&((data)<<4))
#define  HDMI21_P0_HD21_CLKDET2CR_clock_det_en(data)                             (0x00000001&(data))
#define  HDMI21_P0_HD21_CLKDET2CR_get_trans_meas_sel(data)                       ((0x00000030&(data))>>4)
#define  HDMI21_P0_HD21_CLKDET2CR_get_clock_det_en(data)                         (0x00000001&(data))

#define  HDMI21_P0_HD21_CLKDET2SR                                               0x180B72E8
#define  HDMI21_P0_HD21_CLKDET2SR_reg_addr                                       "0xB80B72E8"
#define  HDMI21_P0_HD21_CLKDET2SR_reg                                            0xB80B72E8
#define  HDMI21_P0_HD21_CLKDET2SR_inst_addr                                      "0x0073"
#define  set_HDMI21_P0_HD21_CLKDET2SR_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_HD21_CLKDET2SR_reg)=data)
#define  get_HDMI21_P0_HD21_CLKDET2SR_reg                                        (*((volatile unsigned int*)HDMI21_P0_HD21_CLKDET2SR_reg))
#define  HDMI21_P0_HD21_CLKDET2SR_reset_counter_shift                            (25)
#define  HDMI21_P0_HD21_CLKDET2SR_pop_out_shift                                  (24)
#define  HDMI21_P0_HD21_CLKDET2SR_clk_counter_shift                              (8)
#define  HDMI21_P0_HD21_CLKDET2SR_en_clk_chg_irq_shift                           (5)
#define  HDMI21_P0_HD21_CLKDET2SR_clk_chg_irq_shift                              (4)
#define  HDMI21_P0_HD21_CLKDET2SR_dummy_3_2_shift                                (2)
#define  HDMI21_P0_HD21_CLKDET2SR_clk_in_target_irq_en_shift                     (1)
#define  HDMI21_P0_HD21_CLKDET2SR_clk_in_target_shift                            (0)
#define  HDMI21_P0_HD21_CLKDET2SR_reset_counter_mask                             (0x02000000)
#define  HDMI21_P0_HD21_CLKDET2SR_pop_out_mask                                   (0x01000000)
#define  HDMI21_P0_HD21_CLKDET2SR_clk_counter_mask                               (0x000FFF00)
#define  HDMI21_P0_HD21_CLKDET2SR_en_clk_chg_irq_mask                            (0x00000020)
#define  HDMI21_P0_HD21_CLKDET2SR_clk_chg_irq_mask                               (0x00000010)
#define  HDMI21_P0_HD21_CLKDET2SR_dummy_3_2_mask                                 (0x0000000C)
#define  HDMI21_P0_HD21_CLKDET2SR_clk_in_target_irq_en_mask                      (0x00000002)
#define  HDMI21_P0_HD21_CLKDET2SR_clk_in_target_mask                             (0x00000001)
#define  HDMI21_P0_HD21_CLKDET2SR_reset_counter(data)                            (0x02000000&((data)<<25))
#define  HDMI21_P0_HD21_CLKDET2SR_pop_out(data)                                  (0x01000000&((data)<<24))
#define  HDMI21_P0_HD21_CLKDET2SR_clk_counter(data)                              (0x000FFF00&((data)<<8))
#define  HDMI21_P0_HD21_CLKDET2SR_en_clk_chg_irq(data)                           (0x00000020&((data)<<5))
#define  HDMI21_P0_HD21_CLKDET2SR_clk_chg_irq(data)                              (0x00000010&((data)<<4))
#define  HDMI21_P0_HD21_CLKDET2SR_dummy_3_2(data)                                (0x0000000C&((data)<<2))
#define  HDMI21_P0_HD21_CLKDET2SR_clk_in_target_irq_en(data)                     (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_CLKDET2SR_clk_in_target(data)                            (0x00000001&(data))
#define  HDMI21_P0_HD21_CLKDET2SR_get_reset_counter(data)                        ((0x02000000&(data))>>25)
#define  HDMI21_P0_HD21_CLKDET2SR_get_pop_out(data)                              ((0x01000000&(data))>>24)
#define  HDMI21_P0_HD21_CLKDET2SR_get_clk_counter(data)                          ((0x000FFF00&(data))>>8)
#define  HDMI21_P0_HD21_CLKDET2SR_get_en_clk_chg_irq(data)                       ((0x00000020&(data))>>5)
#define  HDMI21_P0_HD21_CLKDET2SR_get_clk_chg_irq(data)                          ((0x00000010&(data))>>4)
#define  HDMI21_P0_HD21_CLKDET2SR_get_dummy_3_2(data)                            ((0x0000000C&(data))>>2)
#define  HDMI21_P0_HD21_CLKDET2SR_get_clk_in_target_irq_en(data)                 ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_CLKDET2SR_get_clk_in_target(data)                        (0x00000001&(data))

#define  HDMI21_P0_HD21_CLK2_SETTING_00                                         0x180B72EC
#define  HDMI21_P0_HD21_CLK2_SETTING_00_reg_addr                                 "0xB80B72EC"
#define  HDMI21_P0_HD21_CLK2_SETTING_00_reg                                      0xB80B72EC
#define  HDMI21_P0_HD21_CLK2_SETTING_00_inst_addr                                "0x0074"
#define  set_HDMI21_P0_HD21_CLK2_SETTING_00_reg(data)                            (*((volatile unsigned int*)HDMI21_P0_HD21_CLK2_SETTING_00_reg)=data)
#define  get_HDMI21_P0_HD21_CLK2_SETTING_00_reg                                  (*((volatile unsigned int*)HDMI21_P0_HD21_CLK2_SETTING_00_reg))
#define  HDMI21_P0_HD21_CLK2_SETTING_00_dclk_cnt_start_shift                     (16)
#define  HDMI21_P0_HD21_CLK2_SETTING_00_dclk_cnt_end_shift                       (0)
#define  HDMI21_P0_HD21_CLK2_SETTING_00_dclk_cnt_start_mask                      (0x0FFF0000)
#define  HDMI21_P0_HD21_CLK2_SETTING_00_dclk_cnt_end_mask                        (0x00000FFF)
#define  HDMI21_P0_HD21_CLK2_SETTING_00_dclk_cnt_start(data)                     (0x0FFF0000&((data)<<16))
#define  HDMI21_P0_HD21_CLK2_SETTING_00_dclk_cnt_end(data)                       (0x00000FFF&(data))
#define  HDMI21_P0_HD21_CLK2_SETTING_00_get_dclk_cnt_start(data)                 ((0x0FFF0000&(data))>>16)
#define  HDMI21_P0_HD21_CLK2_SETTING_00_get_dclk_cnt_end(data)                   (0x00000FFF&(data))

#define  HDMI21_P0_HD21_CLK2_SETTING_01                                         0x180B72F0
#define  HDMI21_P0_HD21_CLK2_SETTING_01_reg_addr                                 "0xB80B72F0"
#define  HDMI21_P0_HD21_CLK2_SETTING_01_reg                                      0xB80B72F0
#define  HDMI21_P0_HD21_CLK2_SETTING_01_inst_addr                                "0x0075"
#define  set_HDMI21_P0_HD21_CLK2_SETTING_01_reg(data)                            (*((volatile unsigned int*)HDMI21_P0_HD21_CLK2_SETTING_01_reg)=data)
#define  get_HDMI21_P0_HD21_CLK2_SETTING_01_reg                                  (*((volatile unsigned int*)HDMI21_P0_HD21_CLK2_SETTING_01_reg))
#define  HDMI21_P0_HD21_CLK2_SETTING_01_target_for_maximum_clk_counter_shift     (16)
#define  HDMI21_P0_HD21_CLK2_SETTING_01_target_for_minimum_clk_counter_shift     (0)
#define  HDMI21_P0_HD21_CLK2_SETTING_01_target_for_maximum_clk_counter_mask      (0x0FFF0000)
#define  HDMI21_P0_HD21_CLK2_SETTING_01_target_for_minimum_clk_counter_mask      (0x00000FFF)
#define  HDMI21_P0_HD21_CLK2_SETTING_01_target_for_maximum_clk_counter(data)     (0x0FFF0000&((data)<<16))
#define  HDMI21_P0_HD21_CLK2_SETTING_01_target_for_minimum_clk_counter(data)     (0x00000FFF&(data))
#define  HDMI21_P0_HD21_CLK2_SETTING_01_get_target_for_maximum_clk_counter(data) ((0x0FFF0000&(data))>>16)
#define  HDMI21_P0_HD21_CLK2_SETTING_01_get_target_for_minimum_clk_counter(data) (0x00000FFF&(data))

#define  HDMI21_P0_HD21_CLK2_SETTING_02                                         0x180B72F4
#define  HDMI21_P0_HD21_CLK2_SETTING_02_reg_addr                                 "0xB80B72F4"
#define  HDMI21_P0_HD21_CLK2_SETTING_02_reg                                      0xB80B72F4
#define  HDMI21_P0_HD21_CLK2_SETTING_02_inst_addr                                "0x0076"
#define  set_HDMI21_P0_HD21_CLK2_SETTING_02_reg(data)                            (*((volatile unsigned int*)HDMI21_P0_HD21_CLK2_SETTING_02_reg)=data)
#define  get_HDMI21_P0_HD21_CLK2_SETTING_02_reg                                  (*((volatile unsigned int*)HDMI21_P0_HD21_CLK2_SETTING_02_reg))
#define  HDMI21_P0_HD21_CLK2_SETTING_02_clk_counter_err_threshold_shift          (8)
#define  HDMI21_P0_HD21_CLK2_SETTING_02_clk_counter_debounce_shift               (0)
#define  HDMI21_P0_HD21_CLK2_SETTING_02_clk_counter_err_threshold_mask           (0x00000F00)
#define  HDMI21_P0_HD21_CLK2_SETTING_02_clk_counter_debounce_mask                (0x000000FF)
#define  HDMI21_P0_HD21_CLK2_SETTING_02_clk_counter_err_threshold(data)          (0x00000F00&((data)<<8))
#define  HDMI21_P0_HD21_CLK2_SETTING_02_clk_counter_debounce(data)               (0x000000FF&(data))
#define  HDMI21_P0_HD21_CLK2_SETTING_02_get_clk_counter_err_threshold(data)      ((0x00000F00&(data))>>8)
#define  HDMI21_P0_HD21_CLK2_SETTING_02_get_clk_counter_debounce(data)           (0x000000FF&(data))

#define  HDMI21_P0_HD21_CLK_HWM_SETTING_00                                      0x180B72F8
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_00_reg_addr                              "0xB80B72F8"
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_00_reg                                   0xB80B72F8
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_00_inst_addr                             "0x0077"
#define  set_HDMI21_P0_HD21_CLK_HWM_SETTING_00_reg(data)                         (*((volatile unsigned int*)HDMI21_P0_HD21_CLK_HWM_SETTING_00_reg)=data)
#define  get_HDMI21_P0_HD21_CLK_HWM_SETTING_00_reg                               (*((volatile unsigned int*)HDMI21_P0_HD21_CLK_HWM_SETTING_00_reg))
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_00_one_time_n_shift                      (4)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_00_one_time_en_shift                     (0)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_00_one_time_n_mask                       (0x00003FF0)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_00_one_time_en_mask                      (0x00000001)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_00_one_time_n(data)                      (0x00003FF0&((data)<<4))
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_00_one_time_en(data)                     (0x00000001&(data))
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_00_get_one_time_n(data)                  ((0x00003FF0&(data))>>4)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_00_get_one_time_en(data)                 (0x00000001&(data))

#define  HDMI21_P0_HD21_CLK_HWM_SETTING_01                                      0x180B72FC
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_01_reg_addr                              "0xB80B72FC"
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_01_reg                                   0xB80B72FC
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_01_inst_addr                             "0x0078"
#define  set_HDMI21_P0_HD21_CLK_HWM_SETTING_01_reg(data)                         (*((volatile unsigned int*)HDMI21_P0_HD21_CLK_HWM_SETTING_01_reg)=data)
#define  get_HDMI21_P0_HD21_CLK_HWM_SETTING_01_reg                               (*((volatile unsigned int*)HDMI21_P0_HD21_CLK_HWM_SETTING_01_reg))
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_01_cont_offset_n_shift                   (16)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_01_cont_x_shift                          (4)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_01_cont_en_shift                         (0)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_01_cont_offset_n_mask                    (0x07FF0000)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_01_cont_x_mask                           (0x00007FF0)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_01_cont_en_mask                          (0x00000001)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_01_cont_offset_n(data)                   (0x07FF0000&((data)<<16))
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_01_cont_x(data)                          (0x00007FF0&((data)<<4))
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_01_cont_en(data)                         (0x00000001&(data))
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_01_get_cont_offset_n(data)               ((0x07FF0000&(data))>>16)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_01_get_cont_x(data)                      ((0x00007FF0&(data))>>4)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_01_get_cont_en(data)                     (0x00000001&(data))

#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02                                      0x180B7300
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_reg_addr                              "0xB80B7300"
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_reg                                   0xB80B7300
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_inst_addr                             "0x0079"
#define  set_HDMI21_P0_HD21_CLK_HWM_SETTING_02_reg(data)                         (*((volatile unsigned int*)HDMI21_P0_HD21_CLK_HWM_SETTING_02_reg)=data)
#define  get_HDMI21_P0_HD21_CLK_HWM_SETTING_02_reg                               (*((volatile unsigned int*)HDMI21_P0_HD21_CLK_HWM_SETTING_02_reg))
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_cont_err_th_shift                     (16)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_real_mode_shift                       (12)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_tr_weight_shift                       (8)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_no_tr_weight_shift                    (0)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_cont_err_th_mask                      (0x00FF0000)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_real_mode_mask                        (0x00001000)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_tr_weight_mask                        (0x00000F00)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_no_tr_weight_mask                     (0x000000FF)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_cont_err_th(data)                     (0x00FF0000&((data)<<16))
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_real_mode(data)                       (0x00001000&((data)<<12))
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_tr_weight(data)                       (0x00000F00&((data)<<8))
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_no_tr_weight(data)                    (0x000000FF&(data))
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_get_cont_err_th(data)                 ((0x00FF0000&(data))>>16)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_get_real_mode(data)                   ((0x00001000&(data))>>12)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_get_tr_weight(data)                   ((0x00000F00&(data))>>8)
#define  HDMI21_P0_HD21_CLK_HWM_SETTING_02_get_no_tr_weight(data)                (0x000000FF&(data))

#define  HDMI21_P0_HD21_CLK_HWN_ONE_ST_00                                       0x180B7304
#define  HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_reg_addr                               "0xB80B7304"
#define  HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_reg                                    0xB80B7304
#define  HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_inst_addr                              "0x007A"
#define  set_HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_reg(data)                          (*((volatile unsigned int*)HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_reg)=data)
#define  get_HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_reg                                (*((volatile unsigned int*)HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_reg))
#define  HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_one_time_done_flag_shift               (31)
#define  HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_one_time_1_num_shift                   (12)
#define  HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_one_time_0_num_shift                   (0)
#define  HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_one_time_done_flag_mask                (0x80000000)
#define  HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_one_time_1_num_mask                    (0x007FF000)
#define  HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_one_time_0_num_mask                    (0x000007FF)
#define  HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_one_time_done_flag(data)               (0x80000000&((data)<<31))
#define  HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_one_time_1_num(data)                   (0x007FF000&((data)<<12))
#define  HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_one_time_0_num(data)                   (0x000007FF&(data))
#define  HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_get_one_time_done_flag(data)           ((0x80000000&(data))>>31)
#define  HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_get_one_time_1_num(data)               ((0x007FF000&(data))>>12)
#define  HDMI21_P0_HD21_CLK_HWN_ONE_ST_00_get_one_time_0_num(data)               (0x000007FF&(data))

#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01                                      0x180B7308
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_reg_addr                              "0xB80B7308"
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_reg                                   0xB80B7308
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_inst_addr                             "0x007B"
#define  set_HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_reg(data)                         (*((volatile unsigned int*)HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_reg)=data)
#define  get_HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_reg                               (*((volatile unsigned int*)HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_reg))
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_cont_mode_going_flag_shift            (31)
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_cont_err_ov_flag_shift                (30)
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_cont_mode_err_cnt_shift               (12)
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_cont_mode_1_num_shift                 (0)
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_cont_mode_going_flag_mask             (0x80000000)
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_cont_err_ov_flag_mask                 (0x40000000)
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_cont_mode_err_cnt_mask                (0x000FF000)
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_cont_mode_1_num_mask                  (0x000007FF)
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_cont_mode_going_flag(data)            (0x80000000&((data)<<31))
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_cont_err_ov_flag(data)                (0x40000000&((data)<<30))
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_cont_mode_err_cnt(data)               (0x000FF000&((data)<<12))
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_cont_mode_1_num(data)                 (0x000007FF&(data))
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_get_cont_mode_going_flag(data)        ((0x80000000&(data))>>31)
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_get_cont_err_ov_flag(data)            ((0x40000000&(data))>>30)
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_get_cont_mode_err_cnt(data)           ((0x000FF000&(data))>>12)
#define  HDMI21_P0_HD21_CLK_HWN_CONT_ST_01_get_cont_mode_1_num(data)             (0x000007FF&(data))

#define  HDMI21_P0_HD21_fapa_ct_tmp                                             0x180B730C
#define  HDMI21_P0_HD21_fapa_ct_tmp_reg_addr                                     "0xB80B730C"
#define  HDMI21_P0_HD21_fapa_ct_tmp_reg                                          0xB80B730C
#define  HDMI21_P0_HD21_fapa_ct_tmp_inst_addr                                    "0x007C"
#define  set_HDMI21_P0_HD21_fapa_ct_tmp_reg(data)                                (*((volatile unsigned int*)HDMI21_P0_HD21_fapa_ct_tmp_reg)=data)
#define  get_HDMI21_P0_HD21_fapa_ct_tmp_reg                                      (*((volatile unsigned int*)HDMI21_P0_HD21_fapa_ct_tmp_reg))
#define  HDMI21_P0_HD21_fapa_ct_tmp_all_mode_shift                               (13)
#define  HDMI21_P0_HD21_fapa_ct_tmp_sta_shift                                    (0)
#define  HDMI21_P0_HD21_fapa_ct_tmp_all_mode_mask                                (0x00002000)
#define  HDMI21_P0_HD21_fapa_ct_tmp_sta_mask                                     (0x00001FFF)
#define  HDMI21_P0_HD21_fapa_ct_tmp_all_mode(data)                               (0x00002000&((data)<<13))
#define  HDMI21_P0_HD21_fapa_ct_tmp_sta(data)                                    (0x00001FFF&(data))
#define  HDMI21_P0_HD21_fapa_ct_tmp_get_all_mode(data)                           ((0x00002000&(data))>>13)
#define  HDMI21_P0_HD21_fapa_ct_tmp_get_sta(data)                                (0x00001FFF&(data))

#define  HDMI21_P0_HD21_ps_ct                                                   0x180B7310
#define  HDMI21_P0_HD21_ps_ct_reg_addr                                           "0xB80B7310"
#define  HDMI21_P0_HD21_ps_ct_reg                                                0xB80B7310
#define  HDMI21_P0_HD21_ps_ct_inst_addr                                          "0x007D"
#define  set_HDMI21_P0_HD21_ps_ct_reg(data)                                      (*((volatile unsigned int*)HDMI21_P0_HD21_ps_ct_reg)=data)
#define  get_HDMI21_P0_HD21_ps_ct_reg                                            (*((volatile unsigned int*)HDMI21_P0_HD21_ps_ct_reg))
#define  HDMI21_P0_HD21_ps_ct_mac_out_en_shift                                   (29)
#define  HDMI21_P0_HD21_ps_ct_mac_on_sel_shift                                   (27)
#define  HDMI21_P0_HD21_ps_ct_timer_cnt_end_shift                                (4)
#define  HDMI21_P0_HD21_ps_ct_hdcp_mode_shift                                    (2)
#define  HDMI21_P0_HD21_ps_ct_fw_mode_shift                                      (1)
#define  HDMI21_P0_HD21_ps_ct_ps_mode_shift                                      (0)
#define  HDMI21_P0_HD21_ps_ct_mac_out_en_mask                                    (0x20000000)
#define  HDMI21_P0_HD21_ps_ct_mac_on_sel_mask                                    (0x18000000)
#define  HDMI21_P0_HD21_ps_ct_timer_cnt_end_mask                                 (0x03FFFFF0)
#define  HDMI21_P0_HD21_ps_ct_hdcp_mode_mask                                     (0x0000000C)
#define  HDMI21_P0_HD21_ps_ct_fw_mode_mask                                       (0x00000002)
#define  HDMI21_P0_HD21_ps_ct_ps_mode_mask                                       (0x00000001)
#define  HDMI21_P0_HD21_ps_ct_mac_out_en(data)                                   (0x20000000&((data)<<29))
#define  HDMI21_P0_HD21_ps_ct_mac_on_sel(data)                                   (0x18000000&((data)<<27))
#define  HDMI21_P0_HD21_ps_ct_timer_cnt_end(data)                                (0x03FFFFF0&((data)<<4))
#define  HDMI21_P0_HD21_ps_ct_hdcp_mode(data)                                    (0x0000000C&((data)<<2))
#define  HDMI21_P0_HD21_ps_ct_fw_mode(data)                                      (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_ps_ct_ps_mode(data)                                      (0x00000001&(data))
#define  HDMI21_P0_HD21_ps_ct_get_mac_out_en(data)                               ((0x20000000&(data))>>29)
#define  HDMI21_P0_HD21_ps_ct_get_mac_on_sel(data)                               ((0x18000000&(data))>>27)
#define  HDMI21_P0_HD21_ps_ct_get_timer_cnt_end(data)                            ((0x03FFFFF0&(data))>>4)
#define  HDMI21_P0_HD21_ps_ct_get_hdcp_mode(data)                                ((0x0000000C&(data))>>2)
#define  HDMI21_P0_HD21_ps_ct_get_fw_mode(data)                                  ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_ps_ct_get_ps_mode(data)                                  (0x00000001&(data))

#define  HDMI21_P0_HD21_ps_st                                                   0x180B7314
#define  HDMI21_P0_HD21_ps_st_reg_addr                                           "0xB80B7314"
#define  HDMI21_P0_HD21_ps_st_reg                                                0xB80B7314
#define  HDMI21_P0_HD21_ps_st_inst_addr                                          "0x007E"
#define  set_HDMI21_P0_HD21_ps_st_reg(data)                                      (*((volatile unsigned int*)HDMI21_P0_HD21_ps_st_reg)=data)
#define  get_HDMI21_P0_HD21_ps_st_reg                                            (*((volatile unsigned int*)HDMI21_P0_HD21_ps_st_reg))
#define  HDMI21_P0_HD21_ps_st_win_opp_detect_shift                               (30)
#define  HDMI21_P0_HD21_ps_st_irq_en_pwron_shift                                 (29)
#define  HDMI21_P0_HD21_ps_st_irq_en_pwroff_shift                                (28)
#define  HDMI21_P0_HD21_ps_st_phy_power_on_flag_shift                            (2)
#define  HDMI21_P0_HD21_ps_st_pwron_shift                                        (1)
#define  HDMI21_P0_HD21_ps_st_pwroff_shift                                       (0)
#define  HDMI21_P0_HD21_ps_st_win_opp_detect_mask                                (0x40000000)
#define  HDMI21_P0_HD21_ps_st_irq_en_pwron_mask                                  (0x20000000)
#define  HDMI21_P0_HD21_ps_st_irq_en_pwroff_mask                                 (0x10000000)
#define  HDMI21_P0_HD21_ps_st_phy_power_on_flag_mask                             (0x00000004)
#define  HDMI21_P0_HD21_ps_st_pwron_mask                                         (0x00000002)
#define  HDMI21_P0_HD21_ps_st_pwroff_mask                                        (0x00000001)
#define  HDMI21_P0_HD21_ps_st_win_opp_detect(data)                               (0x40000000&((data)<<30))
#define  HDMI21_P0_HD21_ps_st_irq_en_pwron(data)                                 (0x20000000&((data)<<29))
#define  HDMI21_P0_HD21_ps_st_irq_en_pwroff(data)                                (0x10000000&((data)<<28))
#define  HDMI21_P0_HD21_ps_st_phy_power_on_flag(data)                            (0x00000004&((data)<<2))
#define  HDMI21_P0_HD21_ps_st_pwron(data)                                        (0x00000002&((data)<<1))
#define  HDMI21_P0_HD21_ps_st_pwroff(data)                                       (0x00000001&(data))
#define  HDMI21_P0_HD21_ps_st_get_win_opp_detect(data)                           ((0x40000000&(data))>>30)
#define  HDMI21_P0_HD21_ps_st_get_irq_en_pwron(data)                             ((0x20000000&(data))>>29)
#define  HDMI21_P0_HD21_ps_st_get_irq_en_pwroff(data)                            ((0x10000000&(data))>>28)
#define  HDMI21_P0_HD21_ps_st_get_phy_power_on_flag(data)                        ((0x00000004&(data))>>2)
#define  HDMI21_P0_HD21_ps_st_get_pwron(data)                                    ((0x00000002&(data))>>1)
#define  HDMI21_P0_HD21_ps_st_get_pwroff(data)                                   (0x00000001&(data))

#define  HDMI21_P0_hd21_irq_all_status                                          0x180B7318
#define  HDMI21_P0_hd21_irq_all_status_reg_addr                                  "0xB80B7318"
#define  HDMI21_P0_hd21_irq_all_status_reg                                       0xB80B7318
#define  HDMI21_P0_hd21_irq_all_status_inst_addr                                 "0x007F"
#define  set_HDMI21_P0_hd21_irq_all_status_reg(data)                             (*((volatile unsigned int*)HDMI21_P0_hd21_irq_all_status_reg)=data)
#define  get_HDMI21_P0_hd21_irq_all_status_reg                                   (*((volatile unsigned int*)HDMI21_P0_hd21_irq_all_status_reg))
#define  HDMI21_P0_hd21_irq_all_status_irq_fw_all_0_shift                        (0)
#define  HDMI21_P0_hd21_irq_all_status_irq_fw_all_0_mask                         (0x00000001)
#define  HDMI21_P0_hd21_irq_all_status_irq_fw_all_0(data)                        (0x00000001&(data))
#define  HDMI21_P0_hd21_irq_all_status_get_irq_fw_all_0(data)                    (0x00000001&(data))

#define  HDMI21_P0_hd21_xtal_1s                                                 0x180B7340
#define  HDMI21_P0_hd21_xtal_1s_reg_addr                                         "0xB80B7340"
#define  HDMI21_P0_hd21_xtal_1s_reg                                              0xB80B7340
#define  HDMI21_P0_hd21_xtal_1s_inst_addr                                        "0x0080"
#define  set_HDMI21_P0_hd21_xtal_1s_reg(data)                                    (*((volatile unsigned int*)HDMI21_P0_hd21_xtal_1s_reg)=data)
#define  get_HDMI21_P0_hd21_xtal_1s_reg                                          (*((volatile unsigned int*)HDMI21_P0_hd21_xtal_1s_reg))
#define  HDMI21_P0_hd21_xtal_1s_cnt_shift                                        (0)
#define  HDMI21_P0_hd21_xtal_1s_cnt_mask                                         (0x01FFFFFF)
#define  HDMI21_P0_hd21_xtal_1s_cnt(data)                                        (0x01FFFFFF&(data))
#define  HDMI21_P0_hd21_xtal_1s_get_cnt(data)                                    (0x01FFFFFF&(data))

#define  HDMI21_P0_hd21_xtal_280ms                                              0x180B7344
#define  HDMI21_P0_hd21_xtal_280ms_reg_addr                                      "0xB80B7344"
#define  HDMI21_P0_hd21_xtal_280ms_reg                                           0xB80B7344
#define  HDMI21_P0_hd21_xtal_280ms_inst_addr                                     "0x0081"
#define  set_HDMI21_P0_hd21_xtal_280ms_reg(data)                                 (*((volatile unsigned int*)HDMI21_P0_hd21_xtal_280ms_reg)=data)
#define  get_HDMI21_P0_hd21_xtal_280ms_reg                                       (*((volatile unsigned int*)HDMI21_P0_hd21_xtal_280ms_reg))
#define  HDMI21_P0_hd21_xtal_280ms_cnt_shift                                     (0)
#define  HDMI21_P0_hd21_xtal_280ms_cnt_mask                                      (0x007FFFFF)
#define  HDMI21_P0_hd21_xtal_280ms_cnt(data)                                     (0x007FFFFF&(data))
#define  HDMI21_P0_hd21_xtal_280ms_get_cnt(data)                                 (0x007FFFFF&(data))

#define  HDMI21_P0_hd21_xtal_10ms                                               0x180B7348
#define  HDMI21_P0_hd21_xtal_10ms_reg_addr                                       "0xB80B7348"
#define  HDMI21_P0_hd21_xtal_10ms_reg                                            0xB80B7348
#define  HDMI21_P0_hd21_xtal_10ms_inst_addr                                      "0x0082"
#define  set_HDMI21_P0_hd21_xtal_10ms_reg(data)                                  (*((volatile unsigned int*)HDMI21_P0_hd21_xtal_10ms_reg)=data)
#define  get_HDMI21_P0_hd21_xtal_10ms_reg                                        (*((volatile unsigned int*)HDMI21_P0_hd21_xtal_10ms_reg))
#define  HDMI21_P0_hd21_xtal_10ms_cnt_shift                                      (0)
#define  HDMI21_P0_hd21_xtal_10ms_cnt_mask                                       (0x0007FFFF)
#define  HDMI21_P0_hd21_xtal_10ms_cnt(data)                                      (0x0007FFFF&(data))
#define  HDMI21_P0_hd21_xtal_10ms_get_cnt(data)                                  (0x0007FFFF&(data))

#define  HDMI21_P0_hd21_ps_measure_ctrl                                         0x180B7350
#define  HDMI21_P0_hd21_ps_measure_ctrl_reg_addr                                 "0xB80B7350"
#define  HDMI21_P0_hd21_ps_measure_ctrl_reg                                      0xB80B7350
#define  HDMI21_P0_hd21_ps_measure_ctrl_inst_addr                                "0x0083"
#define  set_HDMI21_P0_hd21_ps_measure_ctrl_reg(data)                            (*((volatile unsigned int*)HDMI21_P0_hd21_ps_measure_ctrl_reg)=data)
#define  get_HDMI21_P0_hd21_ps_measure_ctrl_reg                                  (*((volatile unsigned int*)HDMI21_P0_hd21_ps_measure_ctrl_reg))
#define  HDMI21_P0_hd21_ps_measure_ctrl_en_shift                                 (0)
#define  HDMI21_P0_hd21_ps_measure_ctrl_en_mask                                  (0x00000001)
#define  HDMI21_P0_hd21_ps_measure_ctrl_en(data)                                 (0x00000001&(data))
#define  HDMI21_P0_hd21_ps_measure_ctrl_get_en(data)                             (0x00000001&(data))

#define  HDMI21_P0_hd21_ps_measure_xtal_clk0                                    0x180B7354
#define  HDMI21_P0_hd21_ps_measure_xtal_clk0_reg_addr                            "0xB80B7354"
#define  HDMI21_P0_hd21_ps_measure_xtal_clk0_reg                                 0xB80B7354
#define  HDMI21_P0_hd21_ps_measure_xtal_clk0_inst_addr                           "0x0084"
#define  set_HDMI21_P0_hd21_ps_measure_xtal_clk0_reg(data)                       (*((volatile unsigned int*)HDMI21_P0_hd21_ps_measure_xtal_clk0_reg)=data)
#define  get_HDMI21_P0_hd21_ps_measure_xtal_clk0_reg                             (*((volatile unsigned int*)HDMI21_P0_hd21_ps_measure_xtal_clk0_reg))
#define  HDMI21_P0_hd21_ps_measure_xtal_clk0_vs2first_pixel_count_shift          (0)
#define  HDMI21_P0_hd21_ps_measure_xtal_clk0_vs2first_pixel_count_mask           (0x003FFFFF)
#define  HDMI21_P0_hd21_ps_measure_xtal_clk0_vs2first_pixel_count(data)          (0x003FFFFF&(data))
#define  HDMI21_P0_hd21_ps_measure_xtal_clk0_get_vs2first_pixel_count(data)      (0x003FFFFF&(data))

#define  HDMI21_P0_hd21_ps_measure_xtal_clk1                                    0x180B7358
#define  HDMI21_P0_hd21_ps_measure_xtal_clk1_reg_addr                            "0xB80B7358"
#define  HDMI21_P0_hd21_ps_measure_xtal_clk1_reg                                 0xB80B7358
#define  HDMI21_P0_hd21_ps_measure_xtal_clk1_inst_addr                           "0x0085"
#define  set_HDMI21_P0_hd21_ps_measure_xtal_clk1_reg(data)                       (*((volatile unsigned int*)HDMI21_P0_hd21_ps_measure_xtal_clk1_reg)=data)
#define  get_HDMI21_P0_hd21_ps_measure_xtal_clk1_reg                             (*((volatile unsigned int*)HDMI21_P0_hd21_ps_measure_xtal_clk1_reg))
#define  HDMI21_P0_hd21_ps_measure_xtal_clk1_vs2last_pixel_count_shift           (0)
#define  HDMI21_P0_hd21_ps_measure_xtal_clk1_vs2last_pixel_count_mask            (0x003FFFFF)
#define  HDMI21_P0_hd21_ps_measure_xtal_clk1_vs2last_pixel_count(data)           (0x003FFFFF&(data))
#define  HDMI21_P0_hd21_ps_measure_xtal_clk1_get_vs2last_pixel_count(data)       (0x003FFFFF&(data))

#define  HDMI21_P0_hd21_ps_measure_xtal_clk2                                    0x180B735C
#define  HDMI21_P0_hd21_ps_measure_xtal_clk2_reg_addr                            "0xB80B735C"
#define  HDMI21_P0_hd21_ps_measure_xtal_clk2_reg                                 0xB80B735C
#define  HDMI21_P0_hd21_ps_measure_xtal_clk2_inst_addr                           "0x0086"
#define  set_HDMI21_P0_hd21_ps_measure_xtal_clk2_reg(data)                       (*((volatile unsigned int*)HDMI21_P0_hd21_ps_measure_xtal_clk2_reg)=data)
#define  get_HDMI21_P0_hd21_ps_measure_xtal_clk2_reg                             (*((volatile unsigned int*)HDMI21_P0_hd21_ps_measure_xtal_clk2_reg))
#define  HDMI21_P0_hd21_ps_measure_xtal_clk2_vs2vs_count_shift                   (0)
#define  HDMI21_P0_hd21_ps_measure_xtal_clk2_vs2vs_count_mask                    (0x003FFFFF)
#define  HDMI21_P0_hd21_ps_measure_xtal_clk2_vs2vs_count(data)                   (0x003FFFFF&(data))
#define  HDMI21_P0_hd21_ps_measure_xtal_clk2_get_vs2vs_count(data)               (0x003FFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======HDMI21_P0 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  res2:1;
        RBus_UInt32  clk_div_sel:2;
        RBus_UInt32  clk_div_en:1;
        RBus_UInt32  iclk_sel:2;
        RBus_UInt32  dsc_mode_fw:1;
        RBus_UInt32  lane_mode_fw:1;
        RBus_UInt32  hd21_en:1;
    };
}hdmi21_p0_hd21_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  port0_c_flush:1;
        RBus_UInt32  port0_c_afifo_en:1;
        RBus_UInt32  port2_c_flush:1;
        RBus_UInt32  port2_c_afifo_en:1;
        RBus_UInt32  port1_c_flush:1;
        RBus_UInt32  port1_c_afifo_en:1;
        RBus_UInt32  port3_c_flush:1;
        RBus_UInt32  port3_c_afifo_en:1;
    };
}hdmi21_p0_hd21_phy_fifo_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  port0_ckclk_inv:1;
        RBus_UInt32  port1_ckclk_inv:1;
        RBus_UInt32  port2_ckclk_inv:1;
        RBus_UInt32  port3_ckclk_inv:1;
    };
}hdmi21_p0_hd21_phy_fifo_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  port0_c_wrclk_det_timeout_flag:1;
        RBus_UInt32  port0_c_rwclk_det_timeout_flag:1;
        RBus_UInt32  port0_c_wovflow_flag:1;
        RBus_UInt32  port0_c_rudflow_flag:1;
        RBus_UInt32  port0_c_rflush_flag:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  port1_c_wrclk_det_timeout_flag:1;
        RBus_UInt32  port1_c_rwclk_det_timeout_flag:1;
        RBus_UInt32  port1_c_wovflow_flag:1;
        RBus_UInt32  port1_c_rudflow_flag:1;
        RBus_UInt32  port1_c_rflush_flag:1;
    };
}hdmi21_p0_hd21_phy_fifo_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  port2_c_wrclk_det_timeout_flag:1;
        RBus_UInt32  port2_c_rwclk_det_timeout_flag:1;
        RBus_UInt32  port2_c_wovflow_flag:1;
        RBus_UInt32  port2_c_rudflow_flag:1;
        RBus_UInt32  port2_c_rflush_flag:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  port3_c_wrclk_det_timeout_flag:1;
        RBus_UInt32  port3_c_rwclk_det_timeout_flag:1;
        RBus_UInt32  port3_c_wovflow_flag:1;
        RBus_UInt32  port3_c_rudflow_flag:1;
        RBus_UInt32  port3_c_rflush_flag:1;
    };
}hdmi21_p0_hd21_phy_fifo_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scdc_force_realign:1;
        RBus_UInt32  scdc_lock_sel:4;
        RBus_UInt32  scdc_unlock_num:3;
        RBus_UInt32  scdc_lock_bound:1;
        RBus_UInt32  scdc_align_mode:1;
        RBus_UInt32  align_mode:1;
        RBus_UInt32  force_realign:1;
        RBus_UInt32  lock_sel:4;
        RBus_UInt32  unlock_num:3;
        RBus_UInt32  unex_comma:1;
        RBus_UInt32  position_error_flag:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  com_seq_lock:1;
        RBus_UInt32  sr_detect:1;
        RBus_UInt32  position_error_cnt:6;
        RBus_UInt32  lock_bound:1;
    };
}hdmi21_p0_hd21_channel_align_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scdc_force_realign:1;
        RBus_UInt32  scdc_lock_sel:4;
        RBus_UInt32  scdc_unlock_num:3;
        RBus_UInt32  scdc_lock_bound:1;
        RBus_UInt32  scdc_align_mode:1;
        RBus_UInt32  align_mode:1;
        RBus_UInt32  force_realign:1;
        RBus_UInt32  lock_sel:4;
        RBus_UInt32  unlock_num:3;
        RBus_UInt32  unex_comma:1;
        RBus_UInt32  position_error_flag:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  com_seq_lock:1;
        RBus_UInt32  sr_detect:1;
        RBus_UInt32  position_error_cnt:6;
        RBus_UInt32  lock_bound:1;
    };
}hdmi21_p0_hd21_channel_align_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scdc_force_realign:1;
        RBus_UInt32  scdc_lock_sel:4;
        RBus_UInt32  scdc_unlock_num:3;
        RBus_UInt32  scdc_lock_bound:1;
        RBus_UInt32  scdc_align_mode:1;
        RBus_UInt32  align_mode:1;
        RBus_UInt32  force_realign:1;
        RBus_UInt32  lock_sel:4;
        RBus_UInt32  unlock_num:3;
        RBus_UInt32  unex_comma:1;
        RBus_UInt32  position_error_flag:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  com_seq_lock:1;
        RBus_UInt32  sr_detect:1;
        RBus_UInt32  position_error_cnt:6;
        RBus_UInt32  lock_bound:1;
    };
}hdmi21_p0_hd21_channel_align_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scdc_force_realign:1;
        RBus_UInt32  scdc_lock_sel:4;
        RBus_UInt32  scdc_unlock_num:3;
        RBus_UInt32  scdc_lock_bound:1;
        RBus_UInt32  scdc_align_mode:1;
        RBus_UInt32  align_mode:1;
        RBus_UInt32  force_realign:1;
        RBus_UInt32  lock_sel:4;
        RBus_UInt32  unlock_num:3;
        RBus_UInt32  unex_comma:1;
        RBus_UInt32  position_error_flag:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  com_seq_lock:1;
        RBus_UInt32  sr_detect:1;
        RBus_UInt32  position_error_cnt:6;
        RBus_UInt32  lock_bound:1;
    };
}hdmi21_p0_hd21_channel_align_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  ch_sync_sel:2;
        RBus_UInt32  dummy180b7024_19_17:3;
        RBus_UInt32  rden_thr:5;
        RBus_UInt32  dummy180b7024_11_9:3;
        RBus_UInt32  udwater_thr:5;
        RBus_UInt32  dummy180b7024_3:1;
        RBus_UInt32  flush:1;
        RBus_UInt32  ch_afifo_airq_en:1;
        RBus_UInt32  ch_afifo_irq_en:1;
    };
}hdmi21_p0_hd21_ch_sync_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  rgbc_de_align_flag:1;
    };
}hdmi21_p0_hd21_ch_sync_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  rw_water_lv:5;
        RBus_UInt32  rflush_flag:1;
        RBus_UInt32  rwclk_det_timeout_flag:1;
        RBus_UInt32  wrclk_det_timeout_flag:1;
        RBus_UInt32  rudflow_flag:1;
        RBus_UInt32  wovflow_flag:1;
        RBus_UInt32  ch_afifo_en:1;
    };
}hdmi21_p0_hd21_ch_sync_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  rw_water_lv:5;
        RBus_UInt32  rflush_flag:1;
        RBus_UInt32  rwclk_det_timeout_flag:1;
        RBus_UInt32  wrclk_det_timeout_flag:1;
        RBus_UInt32  rudflow_flag:1;
        RBus_UInt32  wovflow_flag:1;
        RBus_UInt32  ch_afifo_en:1;
    };
}hdmi21_p0_hd21_ch_sync_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  rw_water_lv:5;
        RBus_UInt32  rflush_flag:1;
        RBus_UInt32  rwclk_det_timeout_flag:1;
        RBus_UInt32  wrclk_det_timeout_flag:1;
        RBus_UInt32  rudflow_flag:1;
        RBus_UInt32  wovflow_flag:1;
        RBus_UInt32  ch_afifo_en:1;
    };
}hdmi21_p0_hd21_ch_sync_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  rw_water_lv:5;
        RBus_UInt32  rflush_flag:1;
        RBus_UInt32  rwclk_det_timeout_flag:1;
        RBus_UInt32  wrclk_det_timeout_flag:1;
        RBus_UInt32  rudflow_flag:1;
        RBus_UInt32  wovflow_flag:1;
        RBus_UInt32  ch_afifo_en:1;
    };
}hdmi21_p0_hd21_ch_sync_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  char_en:1;
        RBus_UInt32  disp_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  disp_thr:10;
        RBus_UInt32  res3:2;
        RBus_UInt32  char_thr:10;
    };
}hdmi21_p0_hd21_errdet_r_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  char_en:1;
        RBus_UInt32  disp_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  disp_thr:10;
        RBus_UInt32  res3:2;
        RBus_UInt32  char_thr:10;
    };
}hdmi21_p0_hd21_errdet_g_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  char_en:1;
        RBus_UInt32  disp_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  disp_thr:10;
        RBus_UInt32  res3:2;
        RBus_UInt32  char_thr:10;
    };
}hdmi21_p0_hd21_errdet_b_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  char_en:1;
        RBus_UInt32  disp_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  disp_thr:10;
        RBus_UInt32  res3:2;
        RBus_UInt32  char_thr:10;
    };
}hdmi21_p0_hd21_errdet_c_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  error_flag:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  error_cnt_sb_max:10;
        RBus_UInt32  error_cnt_acc:16;
    };
}hdmi21_p0_hd21_errdet_r_disparity_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  error_flag:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  error_cnt_sb_max:10;
        RBus_UInt32  error_cnt_acc:16;
    };
}hdmi21_p0_hd21_errdet_g_disparity_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  error_flag:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  error_cnt_sb_max:10;
        RBus_UInt32  error_cnt_acc:16;
    };
}hdmi21_p0_hd21_errdet_b_disparity_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  error_flag:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  error_cnt_sb_max:10;
        RBus_UInt32  error_cnt_acc:16;
    };
}hdmi21_p0_hd21_errdet_c_disparity_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  error_flag:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  error_cnt_sb_max:10;
        RBus_UInt32  error_cnt_acc:16;
    };
}hdmi21_p0_hd21_errdet_r_char_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  error_flag:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  error_cnt_sb_max:10;
        RBus_UInt32  error_cnt_acc:16;
    };
}hdmi21_p0_hd21_errdet_g_char_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  error_flag:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  error_cnt_sb_max:10;
        RBus_UInt32  error_cnt_acc:16;
    };
}hdmi21_p0_hd21_errdet_b_char_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  error_flag:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  error_cnt_sb_max:10;
        RBus_UInt32  error_cnt_acc:16;
    };
}hdmi21_p0_hd21_errdet_c_char_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  mask_sb_cnt:10;
        RBus_UInt32  mask_en:1;
        RBus_UInt32  disp_upbound:8;
        RBus_UInt32  init_disp_value:4;
    };
}hdmi21_p0_hd21_disp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  tb_diff:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  fix_rate_hact:15;
    };
}hdmi21_p0_hd21_mm_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  tb_diff_over:1;
    };
}hdmi21_p0_hd21_mm_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  apss:10;
    };
}hdmi21_p0_hd21_hdmi_hdrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpss:32;
    };
}hdmi21_p0_hd21_hdmi_hdrdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  em_hdr_no:1;
        RBus_UInt32  em_hdr_done_block:1;
        RBus_UInt32  em_hdr_timeout:1;
        RBus_UInt32  em_hdr_discont:1;
        RBus_UInt32  em_hdr_end:1;
        RBus_UInt32  em_hdr_new:1;
        RBus_UInt32  em_hdr_first:1;
        RBus_UInt32  em_hdr_last:1;
    };
}hdmi21_p0_hd21_hdr_em_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  org_id:8;
        RBus_UInt32  set_tag_msb:8;
        RBus_UInt32  set_tag_lsb:8;
        RBus_UInt32  recognize_tag_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  hdr_pkt_cnt_clr:1;
        RBus_UInt32  hdr_block_sel:1;
        RBus_UInt32  em_err2_proc:1;
        RBus_UInt32  rec_em_hdr_irq_en:3;
    };
}hdmi21_p0_hd21_hdr_em_ct_RBUS;

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
}hdmi21_p0_hd21_hdr_em_ct2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  apss:8;
    };
}hdmi21_p0_hd21_hdmi_emap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dpss:8;
    };
}hdmi21_p0_hd21_hdmi_emdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  region_cnt:27;
        RBus_UInt32  em_timeout_frame:4;
        RBus_UInt32  mode:1;
    };
}hdmi21_p0_hd21_fapa_ct_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  region_cnt_msb:5;
    };
}hdmi21_p0_hd21_fapa_ct2_RBUS;

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
}hdmi21_p0_hd21_vsem_st_RBUS;

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
}hdmi21_p0_hd21_vrrem_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  em_cvtem_no:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  em_cvtem_timeout:1;
        RBus_UInt32  em_cvtem_discont:1;
        RBus_UInt32  em_cvtem_end:1;
        RBus_UInt32  em_cvtem_new:1;
        RBus_UInt32  em_cvtem_first:1;
        RBus_UInt32  em_cvtem_last:1;
    };
}hdmi21_p0_hd21_cvtem_st_RBUS;

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
}hdmi21_p0_hd21_hdmi_vsem_emc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  vrr_clr:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  rec_em_vrr_irq_en:3;
    };
}hdmi21_p0_hd21_hdmi_vrr_emc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  cvtem_clr:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  rec_em_cvtem_irq_en:3;
    };
}hdmi21_p0_hd21_hdmi_cvtem_emc_RBUS;

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
}hdmi21_p0_hd21_hdmi_vsem_emc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  hcbyte_fw:16;
        RBus_UInt32  res2:1;
        RBus_UInt32  fw_apply_en:1;
        RBus_UInt32  less_empacket_err:1;
        RBus_UInt32  more_empacket_err:1;
    };
}hdmi21_p0_hd21_rmzp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  err_cnt_sel:1;
        RBus_UInt32  scdc_ced_en:1;
        RBus_UInt32  valid_reset:1;
        RBus_UInt32  reset_err_det:1;
        RBus_UInt32  keep_err_det:1;
        RBus_UInt32  reset:1;
        RBus_UInt32  period:6;
        RBus_UInt32  ced_upd_num:3;
        RBus_UInt32  mode:1;
        RBus_UInt32  en:1;
    };
}hdmi21_p0_hd21_cercr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  err_cnt1:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt0:15;
    };
}hdmi21_p0_hd21_cersr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  err_cnt3:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt2:15;
    };
}hdmi21_p0_hd21_cersr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  rs_err_cnt:15;
        RBus_UInt32  res2:16;
    };
}hdmi21_p0_hd21_cersr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  tg_window:8;
        RBus_UInt32  res2:7;
        RBus_UInt32  tg_en:1;
    };
}hdmi21_p0_hd21_timing_gen_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  de_data_mismatch:1;
        RBus_UInt32  dpc2tg_linebuff:1;
        RBus_UInt32  ms2tg_fifof:1;
        RBus_UInt32  video_timing_tog_err:1;
    };
}hdmi21_p0_hd21_timing_gen_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  dummy180b71d0_1_0:2;
    };
}hdmi21_p0_hd21_ch_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  res2:3;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs15_rxen:1;
        RBus_UInt32  prbs11_rxen:1;
        RBus_UInt32  prbs7_rxen:1;
    };
}hdmi21_p0_hd21_prbs_r_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  res2:3;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs15_rxen:1;
        RBus_UInt32  prbs11_rxen:1;
        RBus_UInt32  prbs7_rxen:1;
    };
}hdmi21_p0_hd21_prbs_g_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  res2:3;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs15_rxen:1;
        RBus_UInt32  prbs11_rxen:1;
        RBus_UInt32  prbs7_rxen:1;
    };
}hdmi21_p0_hd21_prbs_b_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  res2:3;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs15_rxen:1;
        RBus_UInt32  prbs11_rxen:1;
        RBus_UInt32  prbs7_rxen:1;
    };
}hdmi21_p0_hd21_prbs_c_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  prbs_err_cnt:5;
        RBus_UInt32  res2:2;
        RBus_UInt32  prbs_bit_err:18;
    };
}hdmi21_p0_hd21_prbs_r_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  prbs_err_cnt:5;
        RBus_UInt32  res2:2;
        RBus_UInt32  prbs_bit_err:18;
    };
}hdmi21_p0_hd21_prbs_g_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  prbs_err_cnt:5;
        RBus_UInt32  res2:2;
        RBus_UInt32  prbs_bit_err:18;
    };
}hdmi21_p0_hd21_prbs_b_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  prbs_err_cnt:5;
        RBus_UInt32  res2:2;
        RBus_UInt32  prbs_bit_err:18;
    };
}hdmi21_p0_hd21_prbs_c_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  rd_ch:2;
        RBus_UInt32  wr_last_addr:12;
        RBus_UInt32  res2:1;
        RBus_UInt32  one_lane_sel:3;
        RBus_UInt32  res3:2;
        RBus_UInt32  four_lane_sel:1;
        RBus_UInt32  lane_dbg_mode:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  wr_en:1;
    };
}hdmi21_p0_hd21_dscd_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  apss:12;
    };
}hdmi21_p0_hd21_dscd_dbg_ap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpss:32;
    };
}hdmi21_p0_hd21_dscd_dbg_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ln_req:4;
        RBus_UInt32  lock_sel:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  popup:1;
        RBus_UInt32  reset:1;
        RBus_UInt32  timeout_flag:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt:15;
        RBus_UInt32  res3:3;
        RBus_UInt32  lock_valid:1;
    };
}hdmi21_p0_hd21_lt_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ln_req:4;
        RBus_UInt32  lock_sel:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  popup:1;
        RBus_UInt32  reset:1;
        RBus_UInt32  timeout_flag:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt:15;
        RBus_UInt32  res3:3;
        RBus_UInt32  lock_valid:1;
    };
}hdmi21_p0_hd21_lt_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ln_req:4;
        RBus_UInt32  lock_sel:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  popup:1;
        RBus_UInt32  reset:1;
        RBus_UInt32  timeout_flag:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt:15;
        RBus_UInt32  res3:3;
        RBus_UInt32  lock_valid:1;
    };
}hdmi21_p0_hd21_lt_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ln_req:4;
        RBus_UInt32  lock_sel:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  popup:1;
        RBus_UInt32  reset:1;
        RBus_UInt32  timeout_flag:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  err_cnt:15;
        RBus_UInt32  res3:3;
        RBus_UInt32  lock_valid:1;
    };
}hdmi21_p0_hd21_lt_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ltp_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  ltp3_sel:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  timeout_set:23;
    };
}hdmi21_p0_hd21_lt_all_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  debug_sel:6;
        RBus_UInt32  dummy180b7230_3:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:2;
    };
}hdmi21_p0_hd21_udc_RBUS;

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
}hdmi21_p0_hd21_tmds_dpc0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  dpc_cd_chg_flag:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dpc_cd_chg_int_en:1;
        RBus_UInt32  dummy180b7238_15_11:5;
        RBus_UInt32  dpc_auto:1;
        RBus_UInt32  dpc_pp_valid_fw:1;
        RBus_UInt32  dpc_default_ph_fw:1;
        RBus_UInt32  dpc_pp_fw:4;
        RBus_UInt32  dpc_cd_fw:4;
    };
}hdmi21_p0_hd21_tmds_dpc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dpc_en:1;
        RBus_UInt32  pp_phase_measure_err:1;
        RBus_UInt32  res2:6;
    };
}hdmi21_p0_hd21_tmds_dpc_set0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  avmute_fw:1;
        RBus_UInt32  avmute_bg:1;
        RBus_UInt32  avmute:1;
        RBus_UInt32  res2:6;
    };
}hdmi21_p0_hd21_hdmi_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b7248_31_29:3;
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
}hdmi21_p0_hd21_hdmi_gpvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b724c_31_4:28;
        RBus_UInt32  drmps_rv:1;
        RBus_UInt32  hdr10pvsps_rv:1;
        RBus_UInt32  dvsps_rv:1;
        RBus_UInt32  vsps_rv:1;
    };
}hdmi21_p0_hd21_hdmi_gpvs1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  apss:9;
    };
}hdmi21_p0_hd21_hdmi_psap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dpss:8;
    };
}hdmi21_p0_hd21_hdmi_psdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  packet_header_parsing_mode:1;
        RBus_UInt32  res2:16;
    };
}hdmi21_p0_hd21_hdmi_scr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  bches2_airq_en:1;
        RBus_UInt32  bches2_irq_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  bche:1;
        RBus_UInt32  bches:1;
        RBus_UInt32  bches2:1;
        RBus_UInt32  pe:1;
    };
}hdmi21_p0_hd21_hdmi_bchcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  avmute_flag:1;
        RBus_UInt32  avmute_win_en:1;
        RBus_UInt32  res2:7;
    };
}hdmi21_p0_hd21_hdmi_avmcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  aicpvsb:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  icpvsb:15;
    };
}hdmi21_p0_hd21_hdmi_pamicr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pt3:8;
        RBus_UInt32  pt2:8;
        RBus_UInt32  pt1:8;
        RBus_UInt32  pt0:8;
    };
}hdmi21_p0_hd21_hdmi_ptrsv1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pt3_oui_1st:8;
        RBus_UInt32  pt2_oui_1st:8;
        RBus_UInt32  pt1_oui_1st:8;
        RBus_UInt32  pt0_oui_1st:8;
    };
}hdmi21_p0_hd21_hdmi_ptrsv2_RBUS;

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
}hdmi21_p0_hd21_hdmi_ptrsv3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvsef:32;
    };
}hdmi21_p0_hd21_hdmi_pvgcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvs:32;
    };
}hdmi21_p0_hd21_hdmi_pvsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  hdmi_field:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  csc_r:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  csam:1;
        RBus_UInt32  csc:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  prdsam:1;
        RBus_UInt32  dsc_r:4;
        RBus_UInt32  eoi:1;
        RBus_UInt32  res5:2;
        RBus_UInt32  rs:1;
        RBus_UInt32  dsc:4;
    };
}hdmi21_p0_hd21_hdmi_vcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  pucnr:1;
        RBus_UInt32  mode:1;
    };
}hdmi21_p0_hd21_hdmi_acrcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  cts:20;
    };
}hdmi21_p0_hd21_hdmi_acrsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  n:20;
    };
}hdmi21_p0_hd21_hdmi_acrsr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  apending:1;
        RBus_UInt32  pending:1;
        RBus_UInt32  aavmute:1;
        RBus_UInt32  avmute:1;
        RBus_UInt32  res2:7;
    };
}hdmi21_p0_hd21_hdmi_intcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  pe:1;
        RBus_UInt32  gcp:1;
    };
}hdmi21_p0_hd21_hdmi_bcsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  fsre:1;
        RBus_UInt32  fsif:1;
        RBus_UInt32  res2:1;
    };
}hdmi21_p0_hd21_hdmi_asr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  fbif:3;
        RBus_UInt32  res2:8;
    };
}hdmi21_p0_hd21_hdmi_asr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  hvf:3;
        RBus_UInt32  hdmi_vic:8;
    };
}hdmi21_p0_hd21_hdmi_video_format_RBUS;

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
}hdmi21_p0_hd21_hdmi_3d_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  allm_mode:1;
        RBus_UInt32  ccbpc:4;
    };
}hdmi21_p0_hd21_hdmi_fvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  static_metadata_descriptor_id:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  eotf:3;
    };
}hdmi21_p0_hd21_hdmi_drm_RBUS;

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
}hdmi21_p0_hd21_hdmi_pcmc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  en_ncts_chg_irq:1;
        RBus_UInt32  ncts_chg_irq:1;
        RBus_UInt32  res2:2;
    };
}hdmi21_p0_hd21_audio_sample_rate_change_irq_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  hbr_audio_mode:1;
    };
}hdmi21_p0_hd21_high_bit_rate_audio_packet_RBUS;

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
}hdmi21_p0_hd21_hdmi_audcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  aud_ch_mode:3;
        RBus_UInt32  aud_fifof:1;
    };
}hdmi21_p0_hd21_hdmi_audsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cts_over_flag:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  cts_up_bound:20;
    };
}hdmi21_p0_hd21_audio_cts_up_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cts_under_flag:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  cts_low_bound:20;
    };
}hdmi21_p0_hd21_audio_cts_low_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  n_over_flag:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  n_up_bound:20;
    };
}hdmi21_p0_hd21_audio_n_up_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  n_under_flag:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  n_low_bound:20;
    };
}hdmi21_p0_hd21_audio_n_low_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  trans_meas_sel:2;
        RBus_UInt32  det_sel:1;
        RBus_UInt32  clkv_meas_sel:2;
        RBus_UInt32  clock_det_en:1;
    };
}hdmi21_p0_hd21_clkdetcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  reset_counter:1;
        RBus_UInt32  pop_out:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  clk_counter:12;
        RBus_UInt32  res3:2;
        RBus_UInt32  en_clk_chg_irq:1;
        RBus_UInt32  clk_chg_irq:1;
        RBus_UInt32  dummy180b72d4_3_2:2;
        RBus_UInt32  clk_in_target_irq_en:1;
        RBus_UInt32  clk_in_target:1;
    };
}hdmi21_p0_hd21_clkdetsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dclk_cnt_start:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  dclk_cnt_end:12;
    };
}hdmi21_p0_hd21_clk_setting_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  target_for_maximum_clk_counter:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  target_for_minimum_clk_counter:12;
    };
}hdmi21_p0_hd21_clk_setting_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  clk_counter_err_threshold:4;
        RBus_UInt32  clk_counter_debounce:8;
    };
}hdmi21_p0_hd21_clk_setting_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  trans_meas_sel:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  clock_det_en:1;
    };
}hdmi21_p0_hd21_clkdet2cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  reset_counter:1;
        RBus_UInt32  pop_out:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  clk_counter:12;
        RBus_UInt32  res3:2;
        RBus_UInt32  en_clk_chg_irq:1;
        RBus_UInt32  clk_chg_irq:1;
        RBus_UInt32  dummy180b72e8_3_2:2;
        RBus_UInt32  clk_in_target_irq_en:1;
        RBus_UInt32  clk_in_target:1;
    };
}hdmi21_p0_hd21_clkdet2sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dclk_cnt_start:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  dclk_cnt_end:12;
    };
}hdmi21_p0_hd21_clk2_setting_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  target_for_maximum_clk_counter:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  target_for_minimum_clk_counter:12;
    };
}hdmi21_p0_hd21_clk2_setting_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  clk_counter_err_threshold:4;
        RBus_UInt32  clk_counter_debounce:8;
    };
}hdmi21_p0_hd21_clk2_setting_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  one_time_n:10;
        RBus_UInt32  res2:3;
        RBus_UInt32  one_time_en:1;
    };
}hdmi21_p0_hd21_clk_hwm_setting_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  cont_offset_n:11;
        RBus_UInt32  res2:1;
        RBus_UInt32  cont_x:11;
        RBus_UInt32  res3:3;
        RBus_UInt32  cont_en:1;
    };
}hdmi21_p0_hd21_clk_hwm_setting_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cont_err_th:8;
        RBus_UInt32  res2:3;
        RBus_UInt32  real_mode:1;
        RBus_UInt32  tr_weight:4;
        RBus_UInt32  no_tr_weight:8;
    };
}hdmi21_p0_hd21_clk_hwm_setting_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  one_time_done_flag:1;
        RBus_UInt32  res1:8;
        RBus_UInt32  one_time_1_num:11;
        RBus_UInt32  res2:1;
        RBus_UInt32  one_time_0_num:11;
    };
}hdmi21_p0_hd21_clk_hwn_one_st_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cont_mode_going_flag:1;
        RBus_UInt32  cont_err_ov_flag:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  cont_mode_err_cnt:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  cont_mode_1_num:11;
    };
}hdmi21_p0_hd21_clk_hwn_cont_st_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  all_mode:1;
        RBus_UInt32  sta:13;
    };
}hdmi21_p0_hd21_fapa_ct_tmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mac_out_en:1;
        RBus_UInt32  mac_on_sel:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  timer_cnt_end:22;
        RBus_UInt32  hdcp_mode:2;
        RBus_UInt32  fw_mode:1;
        RBus_UInt32  ps_mode:1;
    };
}hdmi21_p0_hd21_ps_ct_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  win_opp_detect:1;
        RBus_UInt32  irq_en_pwron:1;
        RBus_UInt32  irq_en_pwroff:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:23;
        RBus_UInt32  phy_power_on_flag:1;
        RBus_UInt32  pwron:1;
        RBus_UInt32  pwroff:1;
    };
}hdmi21_p0_hd21_ps_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  irq_fw_all_0:1;
    };
}hdmi21_p0_hd21_irq_all_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  cnt:25;
    };
}hdmi21_p0_hd21_xtal_1s_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  cnt:23;
    };
}hdmi21_p0_hd21_xtal_280ms_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  cnt:19;
    };
}hdmi21_p0_hd21_xtal_10ms_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  en:1;
    };
}hdmi21_p0_hd21_ps_measure_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  vs2first_pixel_count:22;
    };
}hdmi21_p0_hd21_ps_measure_xtal_clk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  vs2last_pixel_count:22;
    };
}hdmi21_p0_hd21_ps_measure_xtal_clk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  vs2vs_count:22;
    };
}hdmi21_p0_hd21_ps_measure_xtal_clk2_RBUS;

#else //apply LITTLE_ENDIAN

//======HDMI21_P0 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hd21_en:1;
        RBus_UInt32  lane_mode_fw:1;
        RBus_UInt32  dsc_mode_fw:1;
        RBus_UInt32  iclk_sel:2;
        RBus_UInt32  clk_div_en:1;
        RBus_UInt32  clk_div_sel:2;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:23;
    };
}hdmi21_p0_hd21_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port3_c_afifo_en:1;
        RBus_UInt32  port3_c_flush:1;
        RBus_UInt32  port1_c_afifo_en:1;
        RBus_UInt32  port1_c_flush:1;
        RBus_UInt32  port2_c_afifo_en:1;
        RBus_UInt32  port2_c_flush:1;
        RBus_UInt32  port0_c_afifo_en:1;
        RBus_UInt32  port0_c_flush:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p0_hd21_phy_fifo_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port3_ckclk_inv:1;
        RBus_UInt32  port2_ckclk_inv:1;
        RBus_UInt32  port1_ckclk_inv:1;
        RBus_UInt32  port0_ckclk_inv:1;
        RBus_UInt32  res1:28;
    };
}hdmi21_p0_hd21_phy_fifo_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port1_c_rflush_flag:1;
        RBus_UInt32  port1_c_rudflow_flag:1;
        RBus_UInt32  port1_c_wovflow_flag:1;
        RBus_UInt32  port1_c_rwclk_det_timeout_flag:1;
        RBus_UInt32  port1_c_wrclk_det_timeout_flag:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  port0_c_rflush_flag:1;
        RBus_UInt32  port0_c_rudflow_flag:1;
        RBus_UInt32  port0_c_wovflow_flag:1;
        RBus_UInt32  port0_c_rwclk_det_timeout_flag:1;
        RBus_UInt32  port0_c_wrclk_det_timeout_flag:1;
        RBus_UInt32  res2:12;
    };
}hdmi21_p0_hd21_phy_fifo_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port3_c_rflush_flag:1;
        RBus_UInt32  port3_c_rudflow_flag:1;
        RBus_UInt32  port3_c_wovflow_flag:1;
        RBus_UInt32  port3_c_rwclk_det_timeout_flag:1;
        RBus_UInt32  port3_c_wrclk_det_timeout_flag:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  port2_c_rflush_flag:1;
        RBus_UInt32  port2_c_rudflow_flag:1;
        RBus_UInt32  port2_c_wovflow_flag:1;
        RBus_UInt32  port2_c_rwclk_det_timeout_flag:1;
        RBus_UInt32  port2_c_wrclk_det_timeout_flag:1;
        RBus_UInt32  res2:12;
    };
}hdmi21_p0_hd21_phy_fifo_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lock_bound:1;
        RBus_UInt32  position_error_cnt:6;
        RBus_UInt32  sr_detect:1;
        RBus_UInt32  com_seq_lock:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  position_error_flag:1;
        RBus_UInt32  unex_comma:1;
        RBus_UInt32  unlock_num:3;
        RBus_UInt32  lock_sel:4;
        RBus_UInt32  force_realign:1;
        RBus_UInt32  align_mode:1;
        RBus_UInt32  scdc_align_mode:1;
        RBus_UInt32  scdc_lock_bound:1;
        RBus_UInt32  scdc_unlock_num:3;
        RBus_UInt32  scdc_lock_sel:4;
        RBus_UInt32  scdc_force_realign:1;
    };
}hdmi21_p0_hd21_channel_align_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lock_bound:1;
        RBus_UInt32  position_error_cnt:6;
        RBus_UInt32  sr_detect:1;
        RBus_UInt32  com_seq_lock:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  position_error_flag:1;
        RBus_UInt32  unex_comma:1;
        RBus_UInt32  unlock_num:3;
        RBus_UInt32  lock_sel:4;
        RBus_UInt32  force_realign:1;
        RBus_UInt32  align_mode:1;
        RBus_UInt32  scdc_align_mode:1;
        RBus_UInt32  scdc_lock_bound:1;
        RBus_UInt32  scdc_unlock_num:3;
        RBus_UInt32  scdc_lock_sel:4;
        RBus_UInt32  scdc_force_realign:1;
    };
}hdmi21_p0_hd21_channel_align_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lock_bound:1;
        RBus_UInt32  position_error_cnt:6;
        RBus_UInt32  sr_detect:1;
        RBus_UInt32  com_seq_lock:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  position_error_flag:1;
        RBus_UInt32  unex_comma:1;
        RBus_UInt32  unlock_num:3;
        RBus_UInt32  lock_sel:4;
        RBus_UInt32  force_realign:1;
        RBus_UInt32  align_mode:1;
        RBus_UInt32  scdc_align_mode:1;
        RBus_UInt32  scdc_lock_bound:1;
        RBus_UInt32  scdc_unlock_num:3;
        RBus_UInt32  scdc_lock_sel:4;
        RBus_UInt32  scdc_force_realign:1;
    };
}hdmi21_p0_hd21_channel_align_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lock_bound:1;
        RBus_UInt32  position_error_cnt:6;
        RBus_UInt32  sr_detect:1;
        RBus_UInt32  com_seq_lock:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  position_error_flag:1;
        RBus_UInt32  unex_comma:1;
        RBus_UInt32  unlock_num:3;
        RBus_UInt32  lock_sel:4;
        RBus_UInt32  force_realign:1;
        RBus_UInt32  align_mode:1;
        RBus_UInt32  scdc_align_mode:1;
        RBus_UInt32  scdc_lock_bound:1;
        RBus_UInt32  scdc_unlock_num:3;
        RBus_UInt32  scdc_lock_sel:4;
        RBus_UInt32  scdc_force_realign:1;
    };
}hdmi21_p0_hd21_channel_align_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_afifo_irq_en:1;
        RBus_UInt32  ch_afifo_airq_en:1;
        RBus_UInt32  flush:1;
        RBus_UInt32  dummy180b7024_3:1;
        RBus_UInt32  udwater_thr:5;
        RBus_UInt32  dummy180b7024_11_9:3;
        RBus_UInt32  rden_thr:5;
        RBus_UInt32  dummy180b7024_19_17:3;
        RBus_UInt32  ch_sync_sel:2;
        RBus_UInt32  res1:10;
    };
}hdmi21_p0_hd21_ch_sync_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rgbc_de_align_flag:1;
        RBus_UInt32  res1:31;
    };
}hdmi21_p0_hd21_ch_sync_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_afifo_en:1;
        RBus_UInt32  wovflow_flag:1;
        RBus_UInt32  rudflow_flag:1;
        RBus_UInt32  wrclk_det_timeout_flag:1;
        RBus_UInt32  rwclk_det_timeout_flag:1;
        RBus_UInt32  rflush_flag:1;
        RBus_UInt32  rw_water_lv:5;
        RBus_UInt32  res1:21;
    };
}hdmi21_p0_hd21_ch_sync_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_afifo_en:1;
        RBus_UInt32  wovflow_flag:1;
        RBus_UInt32  rudflow_flag:1;
        RBus_UInt32  wrclk_det_timeout_flag:1;
        RBus_UInt32  rwclk_det_timeout_flag:1;
        RBus_UInt32  rflush_flag:1;
        RBus_UInt32  rw_water_lv:5;
        RBus_UInt32  res1:21;
    };
}hdmi21_p0_hd21_ch_sync_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_afifo_en:1;
        RBus_UInt32  wovflow_flag:1;
        RBus_UInt32  rudflow_flag:1;
        RBus_UInt32  wrclk_det_timeout_flag:1;
        RBus_UInt32  rwclk_det_timeout_flag:1;
        RBus_UInt32  rflush_flag:1;
        RBus_UInt32  rw_water_lv:5;
        RBus_UInt32  res1:21;
    };
}hdmi21_p0_hd21_ch_sync_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_afifo_en:1;
        RBus_UInt32  wovflow_flag:1;
        RBus_UInt32  rudflow_flag:1;
        RBus_UInt32  wrclk_det_timeout_flag:1;
        RBus_UInt32  rwclk_det_timeout_flag:1;
        RBus_UInt32  rflush_flag:1;
        RBus_UInt32  rw_water_lv:5;
        RBus_UInt32  res1:21;
    };
}hdmi21_p0_hd21_ch_sync_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  char_thr:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  disp_thr:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  disp_en:1;
        RBus_UInt32  char_en:1;
        RBus_UInt32  res3:6;
    };
}hdmi21_p0_hd21_errdet_r_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  char_thr:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  disp_thr:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  disp_en:1;
        RBus_UInt32  char_en:1;
        RBus_UInt32  res3:6;
    };
}hdmi21_p0_hd21_errdet_g_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  char_thr:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  disp_thr:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  disp_en:1;
        RBus_UInt32  char_en:1;
        RBus_UInt32  res3:6;
    };
}hdmi21_p0_hd21_errdet_b_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  char_thr:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  disp_thr:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  disp_en:1;
        RBus_UInt32  char_en:1;
        RBus_UInt32  res3:6;
    };
}hdmi21_p0_hd21_errdet_c_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  error_cnt_acc:16;
        RBus_UInt32  error_cnt_sb_max:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  error_flag:1;
        RBus_UInt32  res2:3;
    };
}hdmi21_p0_hd21_errdet_r_disparity_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  error_cnt_acc:16;
        RBus_UInt32  error_cnt_sb_max:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  error_flag:1;
        RBus_UInt32  res2:3;
    };
}hdmi21_p0_hd21_errdet_g_disparity_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  error_cnt_acc:16;
        RBus_UInt32  error_cnt_sb_max:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  error_flag:1;
        RBus_UInt32  res2:3;
    };
}hdmi21_p0_hd21_errdet_b_disparity_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  error_cnt_acc:16;
        RBus_UInt32  error_cnt_sb_max:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  error_flag:1;
        RBus_UInt32  res2:3;
    };
}hdmi21_p0_hd21_errdet_c_disparity_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  error_cnt_acc:16;
        RBus_UInt32  error_cnt_sb_max:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  error_flag:1;
        RBus_UInt32  res2:3;
    };
}hdmi21_p0_hd21_errdet_r_char_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  error_cnt_acc:16;
        RBus_UInt32  error_cnt_sb_max:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  error_flag:1;
        RBus_UInt32  res2:3;
    };
}hdmi21_p0_hd21_errdet_g_char_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  error_cnt_acc:16;
        RBus_UInt32  error_cnt_sb_max:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  error_flag:1;
        RBus_UInt32  res2:3;
    };
}hdmi21_p0_hd21_errdet_b_char_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  error_cnt_acc:16;
        RBus_UInt32  error_cnt_sb_max:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  error_flag:1;
        RBus_UInt32  res2:3;
    };
}hdmi21_p0_hd21_errdet_c_char_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  init_disp_value:4;
        RBus_UInt32  disp_upbound:8;
        RBus_UInt32  mask_en:1;
        RBus_UInt32  mask_sb_cnt:10;
        RBus_UInt32  res1:9;
    };
}hdmi21_p0_hd21_disp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fix_rate_hact:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tb_diff:10;
        RBus_UInt32  res2:6;
    };
}hdmi21_p0_hd21_mm_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tb_diff_over:1;
        RBus_UInt32  res1:31;
    };
}hdmi21_p0_hd21_mm_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  apss:10;
        RBus_UInt32  res1:22;
    };
}hdmi21_p0_hd21_hdmi_hdrap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpss:32;
    };
}hdmi21_p0_hd21_hdmi_hdrdp_RBUS;

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
        RBus_UInt32  em_hdr_no:1;
        RBus_UInt32  res1:24;
    };
}hdmi21_p0_hd21_hdr_em_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rec_em_hdr_irq_en:3;
        RBus_UInt32  em_err2_proc:1;
        RBus_UInt32  hdr_block_sel:1;
        RBus_UInt32  hdr_pkt_cnt_clr:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  recognize_tag_en:1;
        RBus_UInt32  set_tag_lsb:8;
        RBus_UInt32  set_tag_msb:8;
        RBus_UInt32  org_id:8;
    };
}hdmi21_p0_hd21_hdr_em_ct_RBUS;

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
}hdmi21_p0_hd21_hdr_em_ct2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  apss:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p0_hd21_hdmi_emap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpss:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p0_hd21_hdmi_emdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mode:1;
        RBus_UInt32  em_timeout_frame:4;
        RBus_UInt32  region_cnt:27;
    };
}hdmi21_p0_hd21_fapa_ct_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  region_cnt_msb:5;
        RBus_UInt32  res1:27;
    };
}hdmi21_p0_hd21_fapa_ct2_RBUS;

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
}hdmi21_p0_hd21_vsem_st_RBUS;

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
}hdmi21_p0_hd21_vrrem_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  em_cvtem_last:1;
        RBus_UInt32  em_cvtem_first:1;
        RBus_UInt32  em_cvtem_new:1;
        RBus_UInt32  em_cvtem_end:1;
        RBus_UInt32  em_cvtem_discont:1;
        RBus_UInt32  em_cvtem_timeout:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  em_cvtem_no:1;
        RBus_UInt32  res2:24;
    };
}hdmi21_p0_hd21_cvtem_st_RBUS;

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
}hdmi21_p0_hd21_hdmi_vsem_emc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rec_em_vrr_irq_en:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  vrr_clr:1;
        RBus_UInt32  res2:27;
    };
}hdmi21_p0_hd21_hdmi_vrr_emc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rec_em_cvtem_irq_en:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  cvtem_clr:1;
        RBus_UInt32  res2:27;
    };
}hdmi21_p0_hd21_hdmi_cvtem_emc_RBUS;

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
}hdmi21_p0_hd21_hdmi_vsem_emc2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  more_empacket_err:1;
        RBus_UInt32  less_empacket_err:1;
        RBus_UInt32  fw_apply_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  hcbyte_fw:16;
        RBus_UInt32  res2:12;
    };
}hdmi21_p0_hd21_rmzp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en:1;
        RBus_UInt32  mode:1;
        RBus_UInt32  ced_upd_num:3;
        RBus_UInt32  period:6;
        RBus_UInt32  reset:1;
        RBus_UInt32  keep_err_det:1;
        RBus_UInt32  reset_err_det:1;
        RBus_UInt32  valid_reset:1;
        RBus_UInt32  scdc_ced_en:1;
        RBus_UInt32  err_cnt_sel:1;
        RBus_UInt32  res1:15;
    };
}hdmi21_p0_hd21_cercr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  err_cnt0:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  err_cnt1:15;
        RBus_UInt32  res2:1;
    };
}hdmi21_p0_hd21_cersr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  err_cnt2:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  err_cnt3:15;
        RBus_UInt32  res2:1;
    };
}hdmi21_p0_hd21_cersr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  rs_err_cnt:15;
        RBus_UInt32  res2:1;
    };
}hdmi21_p0_hd21_cersr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tg_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  tg_window:8;
        RBus_UInt32  res2:16;
    };
}hdmi21_p0_hd21_timing_gen_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  video_timing_tog_err:1;
        RBus_UInt32  ms2tg_fifof:1;
        RBus_UInt32  dpc2tg_linebuff:1;
        RBus_UInt32  de_data_mismatch:1;
        RBus_UInt32  res1:28;
    };
}hdmi21_p0_hd21_timing_gen_sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180b71d0_1_0:2;
        RBus_UInt32  res1:30;
    };
}hdmi21_p0_hd21_ch_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prbs7_rxen:1;
        RBus_UInt32  prbs11_rxen:1;
        RBus_UInt32  prbs15_rxen:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  res3:12;
    };
}hdmi21_p0_hd21_prbs_r_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prbs7_rxen:1;
        RBus_UInt32  prbs11_rxen:1;
        RBus_UInt32  prbs15_rxen:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  res3:12;
    };
}hdmi21_p0_hd21_prbs_g_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prbs7_rxen:1;
        RBus_UInt32  prbs11_rxen:1;
        RBus_UInt32  prbs15_rxen:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  res3:12;
    };
}hdmi21_p0_hd21_prbs_b_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prbs7_rxen:1;
        RBus_UInt32  prbs11_rxen:1;
        RBus_UInt32  prbs15_rxen:1;
        RBus_UInt32  prbs_reverse:1;
        RBus_UInt32  prbs_err_cnt_clr:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  prbs_lock:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  prbs_rxbist_err_cnt:8;
        RBus_UInt32  res3:12;
    };
}hdmi21_p0_hd21_prbs_c_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prbs_bit_err:18;
        RBus_UInt32  res1:2;
        RBus_UInt32  prbs_err_cnt:5;
        RBus_UInt32  res2:7;
    };
}hdmi21_p0_hd21_prbs_r_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prbs_bit_err:18;
        RBus_UInt32  res1:2;
        RBus_UInt32  prbs_err_cnt:5;
        RBus_UInt32  res2:7;
    };
}hdmi21_p0_hd21_prbs_g_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prbs_bit_err:18;
        RBus_UInt32  res1:2;
        RBus_UInt32  prbs_err_cnt:5;
        RBus_UInt32  res2:7;
    };
}hdmi21_p0_hd21_prbs_b_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prbs_bit_err:18;
        RBus_UInt32  res1:2;
        RBus_UInt32  prbs_err_cnt:5;
        RBus_UInt32  res2:7;
    };
}hdmi21_p0_hd21_prbs_c_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  lane_dbg_mode:1;
        RBus_UInt32  four_lane_sel:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  one_lane_sel:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  wr_last_addr:12;
        RBus_UInt32  rd_ch:2;
        RBus_UInt32  res4:5;
        RBus_UInt32  en:1;
    };
}hdmi21_p0_hd21_dscd_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  apss:12;
        RBus_UInt32  res1:20;
    };
}hdmi21_p0_hd21_dscd_dbg_ap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpss:32;
    };
}hdmi21_p0_hd21_dscd_dbg_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lock_valid:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  err_cnt:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  timeout_flag:1;
        RBus_UInt32  reset:1;
        RBus_UInt32  popup:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  lock_sel:4;
        RBus_UInt32  ln_req:4;
    };
}hdmi21_p0_hd21_lt_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lock_valid:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  err_cnt:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  timeout_flag:1;
        RBus_UInt32  reset:1;
        RBus_UInt32  popup:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  lock_sel:4;
        RBus_UInt32  ln_req:4;
    };
}hdmi21_p0_hd21_lt_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lock_valid:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  err_cnt:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  timeout_flag:1;
        RBus_UInt32  reset:1;
        RBus_UInt32  popup:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  lock_sel:4;
        RBus_UInt32  ln_req:4;
    };
}hdmi21_p0_hd21_lt_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lock_valid:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  err_cnt:15;
        RBus_UInt32  res2:1;
        RBus_UInt32  timeout_flag:1;
        RBus_UInt32  reset:1;
        RBus_UInt32  popup:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  lock_sel:4;
        RBus_UInt32  ln_req:4;
    };
}hdmi21_p0_hd21_lt_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timeout_set:23;
        RBus_UInt32  res1:1;
        RBus_UInt32  ltp3_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  ltp_en:1;
        RBus_UInt32  res3:3;
    };
}hdmi21_p0_hd21_lt_all_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  dummy180b7230_3:1;
        RBus_UInt32  debug_sel:6;
        RBus_UInt32  res3:22;
    };
}hdmi21_p0_hd21_udc_RBUS;

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
}hdmi21_p0_hd21_tmds_dpc0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpc_cd_fw:4;
        RBus_UInt32  dpc_pp_fw:4;
        RBus_UInt32  dpc_default_ph_fw:1;
        RBus_UInt32  dpc_pp_valid_fw:1;
        RBus_UInt32  dpc_auto:1;
        RBus_UInt32  dummy180b7238_15_11:5;
        RBus_UInt32  dpc_cd_chg_int_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dpc_cd_chg_flag:1;
        RBus_UInt32  res2:13;
    };
}hdmi21_p0_hd21_tmds_dpc1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pp_phase_measure_err:1;
        RBus_UInt32  dpc_en:1;
        RBus_UInt32  res2:24;
    };
}hdmi21_p0_hd21_tmds_dpc_set0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  avmute:1;
        RBus_UInt32  avmute_bg:1;
        RBus_UInt32  avmute_fw:1;
        RBus_UInt32  res2:23;
    };
}hdmi21_p0_hd21_hdmi_sr_RBUS;

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
        RBus_UInt32  dummy180b7248_31_29:3;
    };
}hdmi21_p0_hd21_hdmi_gpvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsps_rv:1;
        RBus_UInt32  dvsps_rv:1;
        RBus_UInt32  hdr10pvsps_rv:1;
        RBus_UInt32  drmps_rv:1;
        RBus_UInt32  dummy180b724c_31_4:28;
    };
}hdmi21_p0_hd21_hdmi_gpvs1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  apss:9;
        RBus_UInt32  res1:23;
    };
}hdmi21_p0_hd21_hdmi_psap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dpss:8;
        RBus_UInt32  res1:24;
    };
}hdmi21_p0_hd21_hdmi_psdp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  packet_header_parsing_mode:1;
        RBus_UInt32  res2:15;
    };
}hdmi21_p0_hd21_hdmi_scr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pe:1;
        RBus_UInt32  bches2:1;
        RBus_UInt32  bches:1;
        RBus_UInt32  bche:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  bches2_irq_en:1;
        RBus_UInt32  bches2_airq_en:1;
        RBus_UInt32  res2:24;
    };
}hdmi21_p0_hd21_hdmi_bchcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  avmute_win_en:1;
        RBus_UInt32  avmute_flag:1;
        RBus_UInt32  res2:23;
    };
}hdmi21_p0_hd21_hdmi_avmcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  icpvsb:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  aicpvsb:8;
        RBus_UInt32  res2:8;
    };
}hdmi21_p0_hd21_hdmi_pamicr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pt0:8;
        RBus_UInt32  pt1:8;
        RBus_UInt32  pt2:8;
        RBus_UInt32  pt3:8;
    };
}hdmi21_p0_hd21_hdmi_ptrsv1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pt0_oui_1st:8;
        RBus_UInt32  pt1_oui_1st:8;
        RBus_UInt32  pt2_oui_1st:8;
        RBus_UInt32  pt3_oui_1st:8;
    };
}hdmi21_p0_hd21_hdmi_ptrsv2_RBUS;

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
}hdmi21_p0_hd21_hdmi_ptrsv3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvsef:32;
    };
}hdmi21_p0_hd21_hdmi_pvgcr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pvs:32;
    };
}hdmi21_p0_hd21_hdmi_pvsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dsc:4;
        RBus_UInt32  rs:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  eoi:1;
        RBus_UInt32  dsc_r:4;
        RBus_UInt32  prdsam:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  csc:3;
        RBus_UInt32  csam:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  csc_r:3;
        RBus_UInt32  res4:7;
        RBus_UInt32  hdmi_field:1;
        RBus_UInt32  res5:2;
    };
}hdmi21_p0_hd21_hdmi_vcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mode:1;
        RBus_UInt32  pucnr:1;
        RBus_UInt32  res1:30;
    };
}hdmi21_p0_hd21_hdmi_acrcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cts:20;
        RBus_UInt32  res1:12;
    };
}hdmi21_p0_hd21_hdmi_acrsr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  n:20;
        RBus_UInt32  res1:12;
    };
}hdmi21_p0_hd21_hdmi_acrsr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  avmute:1;
        RBus_UInt32  aavmute:1;
        RBus_UInt32  pending:1;
        RBus_UInt32  apending:1;
        RBus_UInt32  res2:21;
    };
}hdmi21_p0_hd21_hdmi_intcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gcp:1;
        RBus_UInt32  pe:1;
        RBus_UInt32  res1:30;
    };
}hdmi21_p0_hd21_hdmi_bcsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  fsif:1;
        RBus_UInt32  fsre:1;
        RBus_UInt32  res2:29;
    };
}hdmi21_p0_hd21_hdmi_asr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  fbif:3;
        RBus_UInt32  res2:21;
    };
}hdmi21_p0_hd21_hdmi_asr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdmi_vic:8;
        RBus_UInt32  hvf:3;
        RBus_UInt32  res1:21;
    };
}hdmi21_p0_hd21_hdmi_video_format_RBUS;

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
}hdmi21_p0_hd21_hdmi_3d_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ccbpc:4;
        RBus_UInt32  allm_mode:1;
        RBus_UInt32  res1:27;
    };
}hdmi21_p0_hd21_hdmi_fvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eotf:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  static_metadata_descriptor_id:3;
        RBus_UInt32  res2:25;
    };
}hdmi21_p0_hd21_hdmi_drm_RBUS;

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
}hdmi21_p0_hd21_hdmi_pcmc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ncts_chg_irq:1;
        RBus_UInt32  en_ncts_chg_irq:1;
        RBus_UInt32  res2:28;
    };
}hdmi21_p0_hd21_audio_sample_rate_change_irq_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hbr_audio_mode:1;
        RBus_UInt32  res1:31;
    };
}hdmi21_p0_hd21_high_bit_rate_audio_packet_RBUS;

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
}hdmi21_p0_hd21_hdmi_audcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  aud_fifof:1;
        RBus_UInt32  aud_ch_mode:3;
        RBus_UInt32  res1:28;
    };
}hdmi21_p0_hd21_hdmi_audsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cts_up_bound:20;
        RBus_UInt32  res1:11;
        RBus_UInt32  cts_over_flag:1;
    };
}hdmi21_p0_hd21_audio_cts_up_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cts_low_bound:20;
        RBus_UInt32  res1:11;
        RBus_UInt32  cts_under_flag:1;
    };
}hdmi21_p0_hd21_audio_cts_low_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  n_up_bound:20;
        RBus_UInt32  res1:11;
        RBus_UInt32  n_over_flag:1;
    };
}hdmi21_p0_hd21_audio_n_up_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  n_low_bound:20;
        RBus_UInt32  res1:11;
        RBus_UInt32  n_under_flag:1;
    };
}hdmi21_p0_hd21_audio_n_low_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clock_det_en:1;
        RBus_UInt32  clkv_meas_sel:2;
        RBus_UInt32  det_sel:1;
        RBus_UInt32  trans_meas_sel:2;
        RBus_UInt32  res1:26;
    };
}hdmi21_p0_hd21_clkdetcr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_in_target:1;
        RBus_UInt32  clk_in_target_irq_en:1;
        RBus_UInt32  dummy180b72d4_3_2:2;
        RBus_UInt32  clk_chg_irq:1;
        RBus_UInt32  en_clk_chg_irq:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  clk_counter:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  pop_out:1;
        RBus_UInt32  reset_counter:1;
        RBus_UInt32  res3:6;
    };
}hdmi21_p0_hd21_clkdetsr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dclk_cnt_end:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  dclk_cnt_start:12;
        RBus_UInt32  res2:4;
    };
}hdmi21_p0_hd21_clk_setting_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  target_for_minimum_clk_counter:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  target_for_maximum_clk_counter:12;
        RBus_UInt32  res2:4;
    };
}hdmi21_p0_hd21_clk_setting_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_counter_debounce:8;
        RBus_UInt32  clk_counter_err_threshold:4;
        RBus_UInt32  res1:20;
    };
}hdmi21_p0_hd21_clk_setting_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clock_det_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  trans_meas_sel:2;
        RBus_UInt32  res3:26;
    };
}hdmi21_p0_hd21_clkdet2cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_in_target:1;
        RBus_UInt32  clk_in_target_irq_en:1;
        RBus_UInt32  dummy180b72e8_3_2:2;
        RBus_UInt32  clk_chg_irq:1;
        RBus_UInt32  en_clk_chg_irq:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  clk_counter:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  pop_out:1;
        RBus_UInt32  reset_counter:1;
        RBus_UInt32  res3:6;
    };
}hdmi21_p0_hd21_clkdet2sr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dclk_cnt_end:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  dclk_cnt_start:12;
        RBus_UInt32  res2:4;
    };
}hdmi21_p0_hd21_clk2_setting_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  target_for_minimum_clk_counter:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  target_for_maximum_clk_counter:12;
        RBus_UInt32  res2:4;
    };
}hdmi21_p0_hd21_clk2_setting_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clk_counter_debounce:8;
        RBus_UInt32  clk_counter_err_threshold:4;
        RBus_UInt32  res1:20;
    };
}hdmi21_p0_hd21_clk2_setting_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  one_time_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  one_time_n:10;
        RBus_UInt32  res2:18;
    };
}hdmi21_p0_hd21_clk_hwm_setting_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cont_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cont_x:11;
        RBus_UInt32  res2:1;
        RBus_UInt32  cont_offset_n:11;
        RBus_UInt32  res3:5;
    };
}hdmi21_p0_hd21_clk_hwm_setting_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  no_tr_weight:8;
        RBus_UInt32  tr_weight:4;
        RBus_UInt32  real_mode:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cont_err_th:8;
        RBus_UInt32  res2:8;
    };
}hdmi21_p0_hd21_clk_hwm_setting_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  one_time_0_num:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  one_time_1_num:11;
        RBus_UInt32  res2:8;
        RBus_UInt32  one_time_done_flag:1;
    };
}hdmi21_p0_hd21_clk_hwn_one_st_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cont_mode_1_num:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  cont_mode_err_cnt:8;
        RBus_UInt32  res2:10;
        RBus_UInt32  cont_err_ov_flag:1;
        RBus_UInt32  cont_mode_going_flag:1;
    };
}hdmi21_p0_hd21_clk_hwn_cont_st_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sta:13;
        RBus_UInt32  all_mode:1;
        RBus_UInt32  res1:18;
    };
}hdmi21_p0_hd21_fapa_ct_tmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ps_mode:1;
        RBus_UInt32  fw_mode:1;
        RBus_UInt32  hdcp_mode:2;
        RBus_UInt32  timer_cnt_end:22;
        RBus_UInt32  res1:1;
        RBus_UInt32  mac_on_sel:2;
        RBus_UInt32  mac_out_en:1;
        RBus_UInt32  res2:2;
    };
}hdmi21_p0_hd21_ps_ct_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwroff:1;
        RBus_UInt32  pwron:1;
        RBus_UInt32  phy_power_on_flag:1;
        RBus_UInt32  res1:23;
        RBus_UInt32  res2:2;
        RBus_UInt32  irq_en_pwroff:1;
        RBus_UInt32  irq_en_pwron:1;
        RBus_UInt32  win_opp_detect:1;
        RBus_UInt32  res3:1;
    };
}hdmi21_p0_hd21_ps_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irq_fw_all_0:1;
        RBus_UInt32  res1:31;
    };
}hdmi21_p0_hd21_irq_all_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt:25;
        RBus_UInt32  res1:7;
    };
}hdmi21_p0_hd21_xtal_1s_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt:23;
        RBus_UInt32  res1:9;
    };
}hdmi21_p0_hd21_xtal_280ms_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt:19;
        RBus_UInt32  res1:13;
    };
}hdmi21_p0_hd21_xtal_10ms_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en:1;
        RBus_UInt32  res1:31;
    };
}hdmi21_p0_hd21_ps_measure_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs2first_pixel_count:22;
        RBus_UInt32  res1:10;
    };
}hdmi21_p0_hd21_ps_measure_xtal_clk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs2last_pixel_count:22;
        RBus_UInt32  res1:10;
    };
}hdmi21_p0_hd21_ps_measure_xtal_clk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs2vs_count:22;
        RBus_UInt32  res1:10;
    };
}hdmi21_p0_hd21_ps_measure_xtal_clk2_RBUS;




#endif 


#endif 
