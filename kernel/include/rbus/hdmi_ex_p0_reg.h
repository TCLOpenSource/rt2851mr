/**
* @file Merlin5-DesignSpec-HDMI_RX_MAC_EX
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_HDMI_EX_P0_REG_H_
#define _RBUS_HDMI_EX_P0_REG_H_

#include "rbus_types.h"



//  HDMI_EX_P0 Register Address
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0                                             0x180B4000
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_reg_addr                                     "0xB80B4000"
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_reg                                          0xB80B4000
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_inst_addr                                    "0x0000"
#define  set_HDMI_EX_P0_EX_PHY_FIFO_CR0_reg(data)                                (*((volatile unsigned int*)HDMI_EX_P0_EX_PHY_FIFO_CR0_reg)=data)
#define  get_HDMI_EX_P0_EX_PHY_FIFO_CR0_reg                                      (*((volatile unsigned int*)HDMI_EX_P0_EX_PHY_FIFO_CR0_reg))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_r_flush_shift                          (26)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_r_afifo_en_shift                       (25)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_g_flush_shift                          (24)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_g_afifo_en_shift                       (23)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_b_flush_shift                          (22)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_b_afifo_en_shift                       (21)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_r_flush_shift                          (19)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_r_afifo_en_shift                       (18)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_g_flush_shift                          (17)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_g_afifo_en_shift                       (16)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_b_flush_shift                          (15)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_b_afifo_en_shift                       (14)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_r_flush_shift                          (12)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_r_afifo_en_shift                       (11)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_g_flush_shift                          (10)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_g_afifo_en_shift                       (9)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_b_flush_shift                          (8)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_b_afifo_en_shift                       (7)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_r_flush_shift                          (5)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_r_afifo_en_shift                       (4)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_g_flush_shift                          (3)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_g_afifo_en_shift                       (2)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_b_flush_shift                          (1)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_b_afifo_en_shift                       (0)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_r_flush_mask                           (0x04000000)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_r_afifo_en_mask                        (0x02000000)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_g_flush_mask                           (0x01000000)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_g_afifo_en_mask                        (0x00800000)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_b_flush_mask                           (0x00400000)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_b_afifo_en_mask                        (0x00200000)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_r_flush_mask                           (0x00080000)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_r_afifo_en_mask                        (0x00040000)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_g_flush_mask                           (0x00020000)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_g_afifo_en_mask                        (0x00010000)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_b_flush_mask                           (0x00008000)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_b_afifo_en_mask                        (0x00004000)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_r_flush_mask                           (0x00001000)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_r_afifo_en_mask                        (0x00000800)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_g_flush_mask                           (0x00000400)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_g_afifo_en_mask                        (0x00000200)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_b_flush_mask                           (0x00000100)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_b_afifo_en_mask                        (0x00000080)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_r_flush_mask                           (0x00000020)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_r_afifo_en_mask                        (0x00000010)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_g_flush_mask                           (0x00000008)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_g_afifo_en_mask                        (0x00000004)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_b_flush_mask                           (0x00000002)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_b_afifo_en_mask                        (0x00000001)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_r_flush(data)                          (0x04000000&((data)<<26))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_r_afifo_en(data)                       (0x02000000&((data)<<25))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_g_flush(data)                          (0x01000000&((data)<<24))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_g_afifo_en(data)                       (0x00800000&((data)<<23))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_b_flush(data)                          (0x00400000&((data)<<22))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port3_b_afifo_en(data)                       (0x00200000&((data)<<21))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_r_flush(data)                          (0x00080000&((data)<<19))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_r_afifo_en(data)                       (0x00040000&((data)<<18))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_g_flush(data)                          (0x00020000&((data)<<17))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_g_afifo_en(data)                       (0x00010000&((data)<<16))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_b_flush(data)                          (0x00008000&((data)<<15))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port2_b_afifo_en(data)                       (0x00004000&((data)<<14))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_r_flush(data)                          (0x00001000&((data)<<12))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_r_afifo_en(data)                       (0x00000800&((data)<<11))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_g_flush(data)                          (0x00000400&((data)<<10))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_g_afifo_en(data)                       (0x00000200&((data)<<9))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_b_flush(data)                          (0x00000100&((data)<<8))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port1_b_afifo_en(data)                       (0x00000080&((data)<<7))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_r_flush(data)                          (0x00000020&((data)<<5))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_r_afifo_en(data)                       (0x00000010&((data)<<4))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_g_flush(data)                          (0x00000008&((data)<<3))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_g_afifo_en(data)                       (0x00000004&((data)<<2))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_b_flush(data)                          (0x00000002&((data)<<1))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_port0_b_afifo_en(data)                       (0x00000001&(data))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port3_r_flush(data)                      ((0x04000000&(data))>>26)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port3_r_afifo_en(data)                   ((0x02000000&(data))>>25)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port3_g_flush(data)                      ((0x01000000&(data))>>24)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port3_g_afifo_en(data)                   ((0x00800000&(data))>>23)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port3_b_flush(data)                      ((0x00400000&(data))>>22)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port3_b_afifo_en(data)                   ((0x00200000&(data))>>21)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port2_r_flush(data)                      ((0x00080000&(data))>>19)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port2_r_afifo_en(data)                   ((0x00040000&(data))>>18)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port2_g_flush(data)                      ((0x00020000&(data))>>17)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port2_g_afifo_en(data)                   ((0x00010000&(data))>>16)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port2_b_flush(data)                      ((0x00008000&(data))>>15)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port2_b_afifo_en(data)                   ((0x00004000&(data))>>14)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port1_r_flush(data)                      ((0x00001000&(data))>>12)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port1_r_afifo_en(data)                   ((0x00000800&(data))>>11)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port1_g_flush(data)                      ((0x00000400&(data))>>10)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port1_g_afifo_en(data)                   ((0x00000200&(data))>>9)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port1_b_flush(data)                      ((0x00000100&(data))>>8)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port1_b_afifo_en(data)                   ((0x00000080&(data))>>7)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port0_r_flush(data)                      ((0x00000020&(data))>>5)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port0_r_afifo_en(data)                   ((0x00000010&(data))>>4)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port0_g_flush(data)                      ((0x00000008&(data))>>3)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port0_g_afifo_en(data)                   ((0x00000004&(data))>>2)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port0_b_flush(data)                      ((0x00000002&(data))>>1)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR0_get_port0_b_afifo_en(data)                   (0x00000001&(data))

#define  HDMI_EX_P0_EX_PHY_FIFO_CR1                                             0x180B4004
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_reg_addr                                     "0xB80B4004"
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_reg                                          0xB80B4004
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_inst_addr                                    "0x0001"
#define  set_HDMI_EX_P0_EX_PHY_FIFO_CR1_reg(data)                                (*((volatile unsigned int*)HDMI_EX_P0_EX_PHY_FIFO_CR1_reg)=data)
#define  get_HDMI_EX_P0_EX_PHY_FIFO_CR1_reg                                      (*((volatile unsigned int*)HDMI_EX_P0_EX_PHY_FIFO_CR1_reg))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port3_rclk_inv_shift                         (11)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port3_gclk_inv_shift                         (10)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port3_bclk_inv_shift                         (9)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port2_rclk_inv_shift                         (8)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port2_gclk_inv_shift                         (7)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port2_bclk_inv_shift                         (6)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port1_rclk_inv_shift                         (5)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port1_gclk_inv_shift                         (4)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port1_bclk_inv_shift                         (3)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port0_rclk_inv_shift                         (2)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port0_gclk_inv_shift                         (1)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port0_bclk_inv_shift                         (0)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port3_rclk_inv_mask                          (0x00000800)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port3_gclk_inv_mask                          (0x00000400)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port3_bclk_inv_mask                          (0x00000200)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port2_rclk_inv_mask                          (0x00000100)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port2_gclk_inv_mask                          (0x00000080)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port2_bclk_inv_mask                          (0x00000040)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port1_rclk_inv_mask                          (0x00000020)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port1_gclk_inv_mask                          (0x00000010)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port1_bclk_inv_mask                          (0x00000008)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port0_rclk_inv_mask                          (0x00000004)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port0_gclk_inv_mask                          (0x00000002)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port0_bclk_inv_mask                          (0x00000001)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port3_rclk_inv(data)                         (0x00000800&((data)<<11))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port3_gclk_inv(data)                         (0x00000400&((data)<<10))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port3_bclk_inv(data)                         (0x00000200&((data)<<9))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port2_rclk_inv(data)                         (0x00000100&((data)<<8))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port2_gclk_inv(data)                         (0x00000080&((data)<<7))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port2_bclk_inv(data)                         (0x00000040&((data)<<6))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port1_rclk_inv(data)                         (0x00000020&((data)<<5))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port1_gclk_inv(data)                         (0x00000010&((data)<<4))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port1_bclk_inv(data)                         (0x00000008&((data)<<3))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port0_rclk_inv(data)                         (0x00000004&((data)<<2))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port0_gclk_inv(data)                         (0x00000002&((data)<<1))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_port0_bclk_inv(data)                         (0x00000001&(data))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_get_port3_rclk_inv(data)                     ((0x00000800&(data))>>11)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_get_port3_gclk_inv(data)                     ((0x00000400&(data))>>10)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_get_port3_bclk_inv(data)                     ((0x00000200&(data))>>9)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_get_port2_rclk_inv(data)                     ((0x00000100&(data))>>8)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_get_port2_gclk_inv(data)                     ((0x00000080&(data))>>7)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_get_port2_bclk_inv(data)                     ((0x00000040&(data))>>6)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_get_port1_rclk_inv(data)                     ((0x00000020&(data))>>5)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_get_port1_gclk_inv(data)                     ((0x00000010&(data))>>4)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_get_port1_bclk_inv(data)                     ((0x00000008&(data))>>3)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_get_port0_rclk_inv(data)                     ((0x00000004&(data))>>2)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_get_port0_gclk_inv(data)                     ((0x00000002&(data))>>1)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR1_get_port0_bclk_inv(data)                     (0x00000001&(data))

#define  HDMI_EX_P0_EX_PHY_FIFO_SR0                                             0x180B4008
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_reg_addr                                     "0xB80B4008"
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_reg                                          0xB80B4008
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_inst_addr                                    "0x0002"
#define  set_HDMI_EX_P0_EX_PHY_FIFO_SR0_reg(data)                                (*((volatile unsigned int*)HDMI_EX_P0_EX_PHY_FIFO_SR0_reg)=data)
#define  get_HDMI_EX_P0_EX_PHY_FIFO_SR0_reg                                      (*((volatile unsigned int*)HDMI_EX_P0_EX_PHY_FIFO_SR0_reg))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_r_wrclk_det_timeout_flag_shift         (29)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_r_rwclk_det_timeout_flag_shift         (28)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_r_wovflow_flag_shift                   (27)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_r_rudflow_flag_shift                   (26)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_r_rflush_flag_shift                    (25)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_g_wrclk_det_timeout_flag_shift         (24)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_g_rwclk_det_timeout_flag_shift         (23)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_g_wovflow_flag_shift                   (22)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_g_rudflow_flag_shift                   (21)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_g_rflush_flag_shift                    (20)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_b_wrclk_det_timeout_flag_shift         (19)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_b_rwclk_det_timeout_flag_shift         (18)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_b_wovflow_flag_shift                   (17)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_b_rudflow_flag_shift                   (16)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_b_rflush_flag_shift                    (15)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_r_wrclk_det_timeout_flag_shift         (14)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_r_rwclk_det_timeout_flag_shift         (13)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_r_wovflow_flag_shift                   (12)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_r_rudflow_flag_shift                   (11)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_r_rflush_flag_shift                    (10)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_g_wrclk_det_timeout_flag_shift         (9)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_g_rwclk_det_timeout_flag_shift         (8)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_g_wovflow_flag_shift                   (7)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_g_rudflow_flag_shift                   (6)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_g_rflush_flag_shift                    (5)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_b_wrclk_det_timeout_flag_shift         (4)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_b_rwclk_det_timeout_flag_shift         (3)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_b_wovflow_flag_shift                   (2)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_b_rudflow_flag_shift                   (1)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_b_rflush_flag_shift                    (0)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_r_wrclk_det_timeout_flag_mask          (0x20000000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_r_rwclk_det_timeout_flag_mask          (0x10000000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_r_wovflow_flag_mask                    (0x08000000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_r_rudflow_flag_mask                    (0x04000000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_r_rflush_flag_mask                     (0x02000000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_g_wrclk_det_timeout_flag_mask          (0x01000000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_g_rwclk_det_timeout_flag_mask          (0x00800000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_g_wovflow_flag_mask                    (0x00400000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_g_rudflow_flag_mask                    (0x00200000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_g_rflush_flag_mask                     (0x00100000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_b_wrclk_det_timeout_flag_mask          (0x00080000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_b_rwclk_det_timeout_flag_mask          (0x00040000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_b_wovflow_flag_mask                    (0x00020000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_b_rudflow_flag_mask                    (0x00010000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_b_rflush_flag_mask                     (0x00008000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_r_wrclk_det_timeout_flag_mask          (0x00004000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_r_rwclk_det_timeout_flag_mask          (0x00002000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_r_wovflow_flag_mask                    (0x00001000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_r_rudflow_flag_mask                    (0x00000800)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_r_rflush_flag_mask                     (0x00000400)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_g_wrclk_det_timeout_flag_mask          (0x00000200)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_g_rwclk_det_timeout_flag_mask          (0x00000100)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_g_wovflow_flag_mask                    (0x00000080)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_g_rudflow_flag_mask                    (0x00000040)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_g_rflush_flag_mask                     (0x00000020)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_b_wrclk_det_timeout_flag_mask          (0x00000010)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_b_rwclk_det_timeout_flag_mask          (0x00000008)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_b_wovflow_flag_mask                    (0x00000004)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_b_rudflow_flag_mask                    (0x00000002)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_b_rflush_flag_mask                     (0x00000001)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_r_wrclk_det_timeout_flag(data)         (0x20000000&((data)<<29))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_r_rwclk_det_timeout_flag(data)         (0x10000000&((data)<<28))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_r_wovflow_flag(data)                   (0x08000000&((data)<<27))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_r_rudflow_flag(data)                   (0x04000000&((data)<<26))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_r_rflush_flag(data)                    (0x02000000&((data)<<25))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_g_wrclk_det_timeout_flag(data)         (0x01000000&((data)<<24))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_g_rwclk_det_timeout_flag(data)         (0x00800000&((data)<<23))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_g_wovflow_flag(data)                   (0x00400000&((data)<<22))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_g_rudflow_flag(data)                   (0x00200000&((data)<<21))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_g_rflush_flag(data)                    (0x00100000&((data)<<20))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_b_wrclk_det_timeout_flag(data)         (0x00080000&((data)<<19))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_b_rwclk_det_timeout_flag(data)         (0x00040000&((data)<<18))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_b_wovflow_flag(data)                   (0x00020000&((data)<<17))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_b_rudflow_flag(data)                   (0x00010000&((data)<<16))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port1_b_rflush_flag(data)                    (0x00008000&((data)<<15))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_r_wrclk_det_timeout_flag(data)         (0x00004000&((data)<<14))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_r_rwclk_det_timeout_flag(data)         (0x00002000&((data)<<13))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_r_wovflow_flag(data)                   (0x00001000&((data)<<12))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_r_rudflow_flag(data)                   (0x00000800&((data)<<11))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_r_rflush_flag(data)                    (0x00000400&((data)<<10))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_g_wrclk_det_timeout_flag(data)         (0x00000200&((data)<<9))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_g_rwclk_det_timeout_flag(data)         (0x00000100&((data)<<8))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_g_wovflow_flag(data)                   (0x00000080&((data)<<7))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_g_rudflow_flag(data)                   (0x00000040&((data)<<6))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_g_rflush_flag(data)                    (0x00000020&((data)<<5))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_b_wrclk_det_timeout_flag(data)         (0x00000010&((data)<<4))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_b_rwclk_det_timeout_flag(data)         (0x00000008&((data)<<3))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_b_wovflow_flag(data)                   (0x00000004&((data)<<2))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_b_rudflow_flag(data)                   (0x00000002&((data)<<1))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_port0_b_rflush_flag(data)                    (0x00000001&(data))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port1_r_wrclk_det_timeout_flag(data)     ((0x20000000&(data))>>29)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port1_r_rwclk_det_timeout_flag(data)     ((0x10000000&(data))>>28)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port1_r_wovflow_flag(data)               ((0x08000000&(data))>>27)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port1_r_rudflow_flag(data)               ((0x04000000&(data))>>26)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port1_r_rflush_flag(data)                ((0x02000000&(data))>>25)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port1_g_wrclk_det_timeout_flag(data)     ((0x01000000&(data))>>24)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port1_g_rwclk_det_timeout_flag(data)     ((0x00800000&(data))>>23)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port1_g_wovflow_flag(data)               ((0x00400000&(data))>>22)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port1_g_rudflow_flag(data)               ((0x00200000&(data))>>21)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port1_g_rflush_flag(data)                ((0x00100000&(data))>>20)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port1_b_wrclk_det_timeout_flag(data)     ((0x00080000&(data))>>19)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port1_b_rwclk_det_timeout_flag(data)     ((0x00040000&(data))>>18)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port1_b_wovflow_flag(data)               ((0x00020000&(data))>>17)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port1_b_rudflow_flag(data)               ((0x00010000&(data))>>16)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port1_b_rflush_flag(data)                ((0x00008000&(data))>>15)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port0_r_wrclk_det_timeout_flag(data)     ((0x00004000&(data))>>14)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port0_r_rwclk_det_timeout_flag(data)     ((0x00002000&(data))>>13)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port0_r_wovflow_flag(data)               ((0x00001000&(data))>>12)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port0_r_rudflow_flag(data)               ((0x00000800&(data))>>11)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port0_r_rflush_flag(data)                ((0x00000400&(data))>>10)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port0_g_wrclk_det_timeout_flag(data)     ((0x00000200&(data))>>9)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port0_g_rwclk_det_timeout_flag(data)     ((0x00000100&(data))>>8)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port0_g_wovflow_flag(data)               ((0x00000080&(data))>>7)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port0_g_rudflow_flag(data)               ((0x00000040&(data))>>6)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port0_g_rflush_flag(data)                ((0x00000020&(data))>>5)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port0_b_wrclk_det_timeout_flag(data)     ((0x00000010&(data))>>4)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port0_b_rwclk_det_timeout_flag(data)     ((0x00000008&(data))>>3)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port0_b_wovflow_flag(data)               ((0x00000004&(data))>>2)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port0_b_rudflow_flag(data)               ((0x00000002&(data))>>1)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR0_get_port0_b_rflush_flag(data)                (0x00000001&(data))

#define  HDMI_EX_P0_EX_PHY_FIFO_SR1                                             0x180B400C
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_reg_addr                                     "0xB80B400C"
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_reg                                          0xB80B400C
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_inst_addr                                    "0x0003"
#define  set_HDMI_EX_P0_EX_PHY_FIFO_SR1_reg(data)                                (*((volatile unsigned int*)HDMI_EX_P0_EX_PHY_FIFO_SR1_reg)=data)
#define  get_HDMI_EX_P0_EX_PHY_FIFO_SR1_reg                                      (*((volatile unsigned int*)HDMI_EX_P0_EX_PHY_FIFO_SR1_reg))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_r_wrclk_det_timeout_flag_shift         (29)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_r_rwclk_det_timeout_flag_shift         (28)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_r_wovflow_flag_shift                   (27)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_r_rudflow_flag_shift                   (26)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_r_rflush_flag_shift                    (25)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_g_wrclk_det_timeout_flag_shift         (24)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_g_rwclk_det_timeout_flag_shift         (23)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_g_wovflow_flag_shift                   (22)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_g_rudflow_flag_shift                   (21)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_g_rflush_flag_shift                    (20)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_b_wrclk_det_timeout_flag_shift         (19)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_b_rwclk_det_timeout_flag_shift         (18)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_b_wovflow_flag_shift                   (17)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_b_rudflow_flag_shift                   (16)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_b_rflush_flag_shift                    (15)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_r_wrclk_det_timeout_flag_shift         (14)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_r_rwclk_det_timeout_flag_shift         (13)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_r_wovflow_flag_shift                   (12)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_r_rudflow_flag_shift                   (11)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_r_rflush_flag_shift                    (10)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_g_wrclk_det_timeout_flag_shift         (9)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_g_rwclk_det_timeout_flag_shift         (8)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_g_wovflow_flag_shift                   (7)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_g_rudflow_flag_shift                   (6)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_g_rflush_flag_shift                    (5)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_b_wrclk_det_timeout_flag_shift         (4)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_b_rwclk_det_timeout_flag_shift         (3)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_b_wovflow_flag_shift                   (2)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_b_rudflow_flag_shift                   (1)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_b_rflush_flag_shift                    (0)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_r_wrclk_det_timeout_flag_mask          (0x20000000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_r_rwclk_det_timeout_flag_mask          (0x10000000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_r_wovflow_flag_mask                    (0x08000000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_r_rudflow_flag_mask                    (0x04000000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_r_rflush_flag_mask                     (0x02000000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_g_wrclk_det_timeout_flag_mask          (0x01000000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_g_rwclk_det_timeout_flag_mask          (0x00800000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_g_wovflow_flag_mask                    (0x00400000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_g_rudflow_flag_mask                    (0x00200000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_g_rflush_flag_mask                     (0x00100000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_b_wrclk_det_timeout_flag_mask          (0x00080000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_b_rwclk_det_timeout_flag_mask          (0x00040000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_b_wovflow_flag_mask                    (0x00020000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_b_rudflow_flag_mask                    (0x00010000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_b_rflush_flag_mask                     (0x00008000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_r_wrclk_det_timeout_flag_mask          (0x00004000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_r_rwclk_det_timeout_flag_mask          (0x00002000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_r_wovflow_flag_mask                    (0x00001000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_r_rudflow_flag_mask                    (0x00000800)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_r_rflush_flag_mask                     (0x00000400)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_g_wrclk_det_timeout_flag_mask          (0x00000200)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_g_rwclk_det_timeout_flag_mask          (0x00000100)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_g_wovflow_flag_mask                    (0x00000080)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_g_rudflow_flag_mask                    (0x00000040)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_g_rflush_flag_mask                     (0x00000020)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_b_wrclk_det_timeout_flag_mask          (0x00000010)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_b_rwclk_det_timeout_flag_mask          (0x00000008)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_b_wovflow_flag_mask                    (0x00000004)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_b_rudflow_flag_mask                    (0x00000002)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_b_rflush_flag_mask                     (0x00000001)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_r_wrclk_det_timeout_flag(data)         (0x20000000&((data)<<29))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_r_rwclk_det_timeout_flag(data)         (0x10000000&((data)<<28))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_r_wovflow_flag(data)                   (0x08000000&((data)<<27))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_r_rudflow_flag(data)                   (0x04000000&((data)<<26))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_r_rflush_flag(data)                    (0x02000000&((data)<<25))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_g_wrclk_det_timeout_flag(data)         (0x01000000&((data)<<24))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_g_rwclk_det_timeout_flag(data)         (0x00800000&((data)<<23))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_g_wovflow_flag(data)                   (0x00400000&((data)<<22))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_g_rudflow_flag(data)                   (0x00200000&((data)<<21))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_g_rflush_flag(data)                    (0x00100000&((data)<<20))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_b_wrclk_det_timeout_flag(data)         (0x00080000&((data)<<19))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_b_rwclk_det_timeout_flag(data)         (0x00040000&((data)<<18))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_b_wovflow_flag(data)                   (0x00020000&((data)<<17))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_b_rudflow_flag(data)                   (0x00010000&((data)<<16))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port3_b_rflush_flag(data)                    (0x00008000&((data)<<15))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_r_wrclk_det_timeout_flag(data)         (0x00004000&((data)<<14))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_r_rwclk_det_timeout_flag(data)         (0x00002000&((data)<<13))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_r_wovflow_flag(data)                   (0x00001000&((data)<<12))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_r_rudflow_flag(data)                   (0x00000800&((data)<<11))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_r_rflush_flag(data)                    (0x00000400&((data)<<10))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_g_wrclk_det_timeout_flag(data)         (0x00000200&((data)<<9))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_g_rwclk_det_timeout_flag(data)         (0x00000100&((data)<<8))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_g_wovflow_flag(data)                   (0x00000080&((data)<<7))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_g_rudflow_flag(data)                   (0x00000040&((data)<<6))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_g_rflush_flag(data)                    (0x00000020&((data)<<5))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_b_wrclk_det_timeout_flag(data)         (0x00000010&((data)<<4))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_b_rwclk_det_timeout_flag(data)         (0x00000008&((data)<<3))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_b_wovflow_flag(data)                   (0x00000004&((data)<<2))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_b_rudflow_flag(data)                   (0x00000002&((data)<<1))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_port2_b_rflush_flag(data)                    (0x00000001&(data))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port3_r_wrclk_det_timeout_flag(data)     ((0x20000000&(data))>>29)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port3_r_rwclk_det_timeout_flag(data)     ((0x10000000&(data))>>28)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port3_r_wovflow_flag(data)               ((0x08000000&(data))>>27)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port3_r_rudflow_flag(data)               ((0x04000000&(data))>>26)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port3_r_rflush_flag(data)                ((0x02000000&(data))>>25)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port3_g_wrclk_det_timeout_flag(data)     ((0x01000000&(data))>>24)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port3_g_rwclk_det_timeout_flag(data)     ((0x00800000&(data))>>23)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port3_g_wovflow_flag(data)               ((0x00400000&(data))>>22)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port3_g_rudflow_flag(data)               ((0x00200000&(data))>>21)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port3_g_rflush_flag(data)                ((0x00100000&(data))>>20)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port3_b_wrclk_det_timeout_flag(data)     ((0x00080000&(data))>>19)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port3_b_rwclk_det_timeout_flag(data)     ((0x00040000&(data))>>18)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port3_b_wovflow_flag(data)               ((0x00020000&(data))>>17)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port3_b_rudflow_flag(data)               ((0x00010000&(data))>>16)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port3_b_rflush_flag(data)                ((0x00008000&(data))>>15)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port2_r_wrclk_det_timeout_flag(data)     ((0x00004000&(data))>>14)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port2_r_rwclk_det_timeout_flag(data)     ((0x00002000&(data))>>13)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port2_r_wovflow_flag(data)               ((0x00001000&(data))>>12)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port2_r_rudflow_flag(data)               ((0x00000800&(data))>>11)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port2_r_rflush_flag(data)                ((0x00000400&(data))>>10)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port2_g_wrclk_det_timeout_flag(data)     ((0x00000200&(data))>>9)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port2_g_rwclk_det_timeout_flag(data)     ((0x00000100&(data))>>8)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port2_g_wovflow_flag(data)               ((0x00000080&(data))>>7)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port2_g_rudflow_flag(data)               ((0x00000040&(data))>>6)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port2_g_rflush_flag(data)                ((0x00000020&(data))>>5)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port2_b_wrclk_det_timeout_flag(data)     ((0x00000010&(data))>>4)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port2_b_rwclk_det_timeout_flag(data)     ((0x00000008&(data))>>3)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port2_b_wovflow_flag(data)               ((0x00000004&(data))>>2)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port2_b_rudflow_flag(data)               ((0x00000002&(data))>>1)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR1_get_port2_b_rflush_flag(data)                (0x00000001&(data))

#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL                                        0x180B4010
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_reg_addr                                "0xB80B4010"
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_reg                                     0xB80B4010
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_inst_addr                               "0x0004"
#define  set_HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_reg(data)                           (*((volatile unsigned int*)HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_reg)=data)
#define  get_HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_reg                                 (*((volatile unsigned int*)HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_reg))
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_ex_port_sel_shift                       (9)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_debug_data_sel_shift                    (8)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_hdmi_test_sel_shift                     (4)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_p3_dfe_rstn_n_shift                     (3)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_p2_dfe_rstn_n_shift                     (2)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_p1_dfe_rstn_n_shift                     (1)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_p0_dfe_rstn_n_shift                     (0)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_ex_port_sel_mask                        (0x00000600)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_debug_data_sel_mask                     (0x00000100)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_hdmi_test_sel_mask                      (0x000000F0)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_p3_dfe_rstn_n_mask                      (0x00000008)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_p2_dfe_rstn_n_mask                      (0x00000004)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_p1_dfe_rstn_n_mask                      (0x00000002)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_p0_dfe_rstn_n_mask                      (0x00000001)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_ex_port_sel(data)                       (0x00000600&((data)<<9))
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_debug_data_sel(data)                    (0x00000100&((data)<<8))
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_hdmi_test_sel(data)                     (0x000000F0&((data)<<4))
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_p3_dfe_rstn_n(data)                     (0x00000008&((data)<<3))
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_p2_dfe_rstn_n(data)                     (0x00000004&((data)<<2))
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_p1_dfe_rstn_n(data)                     (0x00000002&((data)<<1))
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_p0_dfe_rstn_n(data)                     (0x00000001&(data))
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_get_ex_port_sel(data)                   ((0x00000600&(data))>>9)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_get_debug_data_sel(data)                ((0x00000100&(data))>>8)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_get_hdmi_test_sel(data)                 ((0x000000F0&(data))>>4)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_get_p3_dfe_rstn_n(data)                 ((0x00000008&(data))>>3)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_get_p2_dfe_rstn_n(data)                 ((0x00000004&(data))>>2)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_get_p1_dfe_rstn_n(data)                 ((0x00000002&(data))>>1)
#define  HDMI_EX_P0_EX_HDMI_CTS_FIFO_CTL_get_p0_dfe_rstn_n(data)                 (0x00000001&(data))

#define  HDMI_EX_P0_EX_PHY_FIFO_CR2                                             0x180B4014
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_reg_addr                                     "0xB80B4014"
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_reg                                          0xB80B4014
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_inst_addr                                    "0x0005"
#define  set_HDMI_EX_P0_EX_PHY_FIFO_CR2_reg(data)                                (*((volatile unsigned int*)HDMI_EX_P0_EX_PHY_FIFO_CR2_reg)=data)
#define  get_HDMI_EX_P0_EX_PHY_FIFO_CR2_reg                                      (*((volatile unsigned int*)HDMI_EX_P0_EX_PHY_FIFO_CR2_reg))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port0_c_flush_shift                          (7)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port0_c_afifo_en_shift                       (6)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port1_c_flush_shift                          (5)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port1_c_afifo_en_shift                       (4)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port2_c_flush_shift                          (3)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port2_c_afifo_en_shift                       (2)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port3_c_flush_shift                          (1)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port3_c_afifo_en_shift                       (0)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port0_c_flush_mask                           (0x00000080)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port0_c_afifo_en_mask                        (0x00000040)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port1_c_flush_mask                           (0x00000020)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port1_c_afifo_en_mask                        (0x00000010)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port2_c_flush_mask                           (0x00000008)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port2_c_afifo_en_mask                        (0x00000004)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port3_c_flush_mask                           (0x00000002)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port3_c_afifo_en_mask                        (0x00000001)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port0_c_flush(data)                          (0x00000080&((data)<<7))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port0_c_afifo_en(data)                       (0x00000040&((data)<<6))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port1_c_flush(data)                          (0x00000020&((data)<<5))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port1_c_afifo_en(data)                       (0x00000010&((data)<<4))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port2_c_flush(data)                          (0x00000008&((data)<<3))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port2_c_afifo_en(data)                       (0x00000004&((data)<<2))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port3_c_flush(data)                          (0x00000002&((data)<<1))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_port3_c_afifo_en(data)                       (0x00000001&(data))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_get_port0_c_flush(data)                      ((0x00000080&(data))>>7)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_get_port0_c_afifo_en(data)                   ((0x00000040&(data))>>6)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_get_port1_c_flush(data)                      ((0x00000020&(data))>>5)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_get_port1_c_afifo_en(data)                   ((0x00000010&(data))>>4)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_get_port2_c_flush(data)                      ((0x00000008&(data))>>3)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_get_port2_c_afifo_en(data)                   ((0x00000004&(data))>>2)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_get_port3_c_flush(data)                      ((0x00000002&(data))>>1)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR2_get_port3_c_afifo_en(data)                   (0x00000001&(data))

#define  HDMI_EX_P0_EX_PHY_FIFO_CR3                                             0x180B4018
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_reg_addr                                     "0xB80B4018"
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_reg                                          0xB80B4018
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_inst_addr                                    "0x0006"
#define  set_HDMI_EX_P0_EX_PHY_FIFO_CR3_reg(data)                                (*((volatile unsigned int*)HDMI_EX_P0_EX_PHY_FIFO_CR3_reg)=data)
#define  get_HDMI_EX_P0_EX_PHY_FIFO_CR3_reg                                      (*((volatile unsigned int*)HDMI_EX_P0_EX_PHY_FIFO_CR3_reg))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_port0_cclk_inv_shift                         (3)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_port1_cclk_inv_shift                         (2)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_port2_cclk_inv_shift                         (1)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_port3_cclk_inv_shift                         (0)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_port0_cclk_inv_mask                          (0x00000008)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_port1_cclk_inv_mask                          (0x00000004)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_port2_cclk_inv_mask                          (0x00000002)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_port3_cclk_inv_mask                          (0x00000001)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_port0_cclk_inv(data)                         (0x00000008&((data)<<3))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_port1_cclk_inv(data)                         (0x00000004&((data)<<2))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_port2_cclk_inv(data)                         (0x00000002&((data)<<1))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_port3_cclk_inv(data)                         (0x00000001&(data))
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_get_port0_cclk_inv(data)                     ((0x00000008&(data))>>3)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_get_port1_cclk_inv(data)                     ((0x00000004&(data))>>2)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_get_port2_cclk_inv(data)                     ((0x00000002&(data))>>1)
#define  HDMI_EX_P0_EX_PHY_FIFO_CR3_get_port3_cclk_inv(data)                     (0x00000001&(data))

#define  HDMI_EX_P0_EX_PHY_FIFO_SR2                                             0x180B401C
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_reg_addr                                     "0xB80B401C"
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_reg                                          0xB80B401C
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_inst_addr                                    "0x0007"
#define  set_HDMI_EX_P0_EX_PHY_FIFO_SR2_reg(data)                                (*((volatile unsigned int*)HDMI_EX_P0_EX_PHY_FIFO_SR2_reg)=data)
#define  get_HDMI_EX_P0_EX_PHY_FIFO_SR2_reg                                      (*((volatile unsigned int*)HDMI_EX_P0_EX_PHY_FIFO_SR2_reg))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port0_c_wrclk_det_timeout_flag_shift         (19)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port0_c_rwclk_det_timeout_flag_shift         (18)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port0_c_wovflow_flag_shift                   (17)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port0_c_rudflow_flag_shift                   (16)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port0_c_rflush_flag_shift                    (15)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port1_c_wrclk_det_timeout_flag_shift         (14)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port1_c_rwclk_det_timeout_flag_shift         (13)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port1_c_wovflow_flag_shift                   (12)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port1_c_rudflow_flag_shift                   (11)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port1_c_rflush_flag_shift                    (10)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port2_c_wrclk_det_timeout_flag_shift         (9)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port2_c_rwclk_det_timeout_flag_shift         (8)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port2_c_wovflow_flag_shift                   (7)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port2_c_rudflow_flag_shift                   (6)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port2_c_rflush_flag_shift                    (5)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port3_c_wrclk_det_timeout_flag_shift         (4)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port3_c_rwclk_det_timeout_flag_shift         (3)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port3_c_wovflow_flag_shift                   (2)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port3_c_rudflow_flag_shift                   (1)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port3_c_rflush_flag_shift                    (0)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port0_c_wrclk_det_timeout_flag_mask          (0x00080000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port0_c_rwclk_det_timeout_flag_mask          (0x00040000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port0_c_wovflow_flag_mask                    (0x00020000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port0_c_rudflow_flag_mask                    (0x00010000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port0_c_rflush_flag_mask                     (0x00008000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port1_c_wrclk_det_timeout_flag_mask          (0x00004000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port1_c_rwclk_det_timeout_flag_mask          (0x00002000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port1_c_wovflow_flag_mask                    (0x00001000)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port1_c_rudflow_flag_mask                    (0x00000800)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port1_c_rflush_flag_mask                     (0x00000400)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port2_c_wrclk_det_timeout_flag_mask          (0x00000200)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port2_c_rwclk_det_timeout_flag_mask          (0x00000100)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port2_c_wovflow_flag_mask                    (0x00000080)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port2_c_rudflow_flag_mask                    (0x00000040)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port2_c_rflush_flag_mask                     (0x00000020)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port3_c_wrclk_det_timeout_flag_mask          (0x00000010)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port3_c_rwclk_det_timeout_flag_mask          (0x00000008)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port3_c_wovflow_flag_mask                    (0x00000004)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port3_c_rudflow_flag_mask                    (0x00000002)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port3_c_rflush_flag_mask                     (0x00000001)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port0_c_wrclk_det_timeout_flag(data)         (0x00080000&((data)<<19))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port0_c_rwclk_det_timeout_flag(data)         (0x00040000&((data)<<18))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port0_c_wovflow_flag(data)                   (0x00020000&((data)<<17))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port0_c_rudflow_flag(data)                   (0x00010000&((data)<<16))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port0_c_rflush_flag(data)                    (0x00008000&((data)<<15))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port1_c_wrclk_det_timeout_flag(data)         (0x00004000&((data)<<14))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port1_c_rwclk_det_timeout_flag(data)         (0x00002000&((data)<<13))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port1_c_wovflow_flag(data)                   (0x00001000&((data)<<12))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port1_c_rudflow_flag(data)                   (0x00000800&((data)<<11))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port1_c_rflush_flag(data)                    (0x00000400&((data)<<10))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port2_c_wrclk_det_timeout_flag(data)         (0x00000200&((data)<<9))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port2_c_rwclk_det_timeout_flag(data)         (0x00000100&((data)<<8))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port2_c_wovflow_flag(data)                   (0x00000080&((data)<<7))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port2_c_rudflow_flag(data)                   (0x00000040&((data)<<6))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port2_c_rflush_flag(data)                    (0x00000020&((data)<<5))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port3_c_wrclk_det_timeout_flag(data)         (0x00000010&((data)<<4))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port3_c_rwclk_det_timeout_flag(data)         (0x00000008&((data)<<3))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port3_c_wovflow_flag(data)                   (0x00000004&((data)<<2))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port3_c_rudflow_flag(data)                   (0x00000002&((data)<<1))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_port3_c_rflush_flag(data)                    (0x00000001&(data))
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port0_c_wrclk_det_timeout_flag(data)     ((0x00080000&(data))>>19)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port0_c_rwclk_det_timeout_flag(data)     ((0x00040000&(data))>>18)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port0_c_wovflow_flag(data)               ((0x00020000&(data))>>17)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port0_c_rudflow_flag(data)               ((0x00010000&(data))>>16)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port0_c_rflush_flag(data)                ((0x00008000&(data))>>15)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port1_c_wrclk_det_timeout_flag(data)     ((0x00004000&(data))>>14)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port1_c_rwclk_det_timeout_flag(data)     ((0x00002000&(data))>>13)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port1_c_wovflow_flag(data)               ((0x00001000&(data))>>12)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port1_c_rudflow_flag(data)               ((0x00000800&(data))>>11)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port1_c_rflush_flag(data)                ((0x00000400&(data))>>10)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port2_c_wrclk_det_timeout_flag(data)     ((0x00000200&(data))>>9)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port2_c_rwclk_det_timeout_flag(data)     ((0x00000100&(data))>>8)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port2_c_wovflow_flag(data)               ((0x00000080&(data))>>7)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port2_c_rudflow_flag(data)               ((0x00000040&(data))>>6)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port2_c_rflush_flag(data)                ((0x00000020&(data))>>5)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port3_c_wrclk_det_timeout_flag(data)     ((0x00000010&(data))>>4)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port3_c_rwclk_det_timeout_flag(data)     ((0x00000008&(data))>>3)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port3_c_wovflow_flag(data)               ((0x00000004&(data))>>2)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port3_c_rudflow_flag(data)               ((0x00000002&(data))>>1)
#define  HDMI_EX_P0_EX_PHY_FIFO_SR2_get_port3_c_rflush_flag(data)                (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======HDMI_EX_P0 register structure define==========

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
        RBus_UInt32  res3:1;
        RBus_UInt32  port2_r_flush:1;
        RBus_UInt32  port2_r_afifo_en:1;
        RBus_UInt32  port2_g_flush:1;
        RBus_UInt32  port2_g_afifo_en:1;
        RBus_UInt32  port2_b_flush:1;
        RBus_UInt32  port2_b_afifo_en:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  port1_r_flush:1;
        RBus_UInt32  port1_r_afifo_en:1;
        RBus_UInt32  port1_g_flush:1;
        RBus_UInt32  port1_g_afifo_en:1;
        RBus_UInt32  port1_b_flush:1;
        RBus_UInt32  port1_b_afifo_en:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  port0_r_flush:1;
        RBus_UInt32  port0_r_afifo_en:1;
        RBus_UInt32  port0_g_flush:1;
        RBus_UInt32  port0_g_afifo_en:1;
        RBus_UInt32  port0_b_flush:1;
        RBus_UInt32  port0_b_afifo_en:1;
    };
}hdmi_ex_p0_ex_phy_fifo_cr0_RBUS;

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
}hdmi_ex_p0_ex_phy_fifo_cr1_RBUS;

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
}hdmi_ex_p0_ex_phy_fifo_sr0_RBUS;

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
}hdmi_ex_p0_ex_phy_fifo_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  ex_port_sel:2;
        RBus_UInt32  debug_data_sel:1;
        RBus_UInt32  hdmi_test_sel:4;
        RBus_UInt32  p3_dfe_rstn_n:1;
        RBus_UInt32  p2_dfe_rstn_n:1;
        RBus_UInt32  p1_dfe_rstn_n:1;
        RBus_UInt32  p0_dfe_rstn_n:1;
    };
}hdmi_ex_p0_ex_hdmi_cts_fifo_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  port0_c_flush:1;
        RBus_UInt32  port0_c_afifo_en:1;
        RBus_UInt32  port1_c_flush:1;
        RBus_UInt32  port1_c_afifo_en:1;
        RBus_UInt32  port2_c_flush:1;
        RBus_UInt32  port2_c_afifo_en:1;
        RBus_UInt32  port3_c_flush:1;
        RBus_UInt32  port3_c_afifo_en:1;
    };
}hdmi_ex_p0_ex_phy_fifo_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  port0_cclk_inv:1;
        RBus_UInt32  port1_cclk_inv:1;
        RBus_UInt32  port2_cclk_inv:1;
        RBus_UInt32  port3_cclk_inv:1;
    };
}hdmi_ex_p0_ex_phy_fifo_cr3_RBUS;

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
        RBus_UInt32  port1_c_wrclk_det_timeout_flag:1;
        RBus_UInt32  port1_c_rwclk_det_timeout_flag:1;
        RBus_UInt32  port1_c_wovflow_flag:1;
        RBus_UInt32  port1_c_rudflow_flag:1;
        RBus_UInt32  port1_c_rflush_flag:1;
        RBus_UInt32  port2_c_wrclk_det_timeout_flag:1;
        RBus_UInt32  port2_c_rwclk_det_timeout_flag:1;
        RBus_UInt32  port2_c_wovflow_flag:1;
        RBus_UInt32  port2_c_rudflow_flag:1;
        RBus_UInt32  port2_c_rflush_flag:1;
        RBus_UInt32  port3_c_wrclk_det_timeout_flag:1;
        RBus_UInt32  port3_c_rwclk_det_timeout_flag:1;
        RBus_UInt32  port3_c_wovflow_flag:1;
        RBus_UInt32  port3_c_rudflow_flag:1;
        RBus_UInt32  port3_c_rflush_flag:1;
    };
}hdmi_ex_p0_ex_phy_fifo_sr2_RBUS;

#else //apply LITTLE_ENDIAN

//======HDMI_EX_P0 register structure define==========

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
        RBus_UInt32  res1:1;
        RBus_UInt32  port1_b_afifo_en:1;
        RBus_UInt32  port1_b_flush:1;
        RBus_UInt32  port1_g_afifo_en:1;
        RBus_UInt32  port1_g_flush:1;
        RBus_UInt32  port1_r_afifo_en:1;
        RBus_UInt32  port1_r_flush:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  port2_b_afifo_en:1;
        RBus_UInt32  port2_b_flush:1;
        RBus_UInt32  port2_g_afifo_en:1;
        RBus_UInt32  port2_g_flush:1;
        RBus_UInt32  port2_r_afifo_en:1;
        RBus_UInt32  port2_r_flush:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  port3_b_afifo_en:1;
        RBus_UInt32  port3_b_flush:1;
        RBus_UInt32  port3_g_afifo_en:1;
        RBus_UInt32  port3_g_flush:1;
        RBus_UInt32  port3_r_afifo_en:1;
        RBus_UInt32  port3_r_flush:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  res5:3;
    };
}hdmi_ex_p0_ex_phy_fifo_cr0_RBUS;

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
}hdmi_ex_p0_ex_phy_fifo_cr1_RBUS;

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
}hdmi_ex_p0_ex_phy_fifo_sr0_RBUS;

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
}hdmi_ex_p0_ex_phy_fifo_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_dfe_rstn_n:1;
        RBus_UInt32  p1_dfe_rstn_n:1;
        RBus_UInt32  p2_dfe_rstn_n:1;
        RBus_UInt32  p3_dfe_rstn_n:1;
        RBus_UInt32  hdmi_test_sel:4;
        RBus_UInt32  debug_data_sel:1;
        RBus_UInt32  ex_port_sel:2;
        RBus_UInt32  res1:21;
    };
}hdmi_ex_p0_ex_hdmi_cts_fifo_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port3_c_afifo_en:1;
        RBus_UInt32  port3_c_flush:1;
        RBus_UInt32  port2_c_afifo_en:1;
        RBus_UInt32  port2_c_flush:1;
        RBus_UInt32  port1_c_afifo_en:1;
        RBus_UInt32  port1_c_flush:1;
        RBus_UInt32  port0_c_afifo_en:1;
        RBus_UInt32  port0_c_flush:1;
        RBus_UInt32  res1:24;
    };
}hdmi_ex_p0_ex_phy_fifo_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port3_cclk_inv:1;
        RBus_UInt32  port2_cclk_inv:1;
        RBus_UInt32  port1_cclk_inv:1;
        RBus_UInt32  port0_cclk_inv:1;
        RBus_UInt32  res1:28;
    };
}hdmi_ex_p0_ex_phy_fifo_cr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  port3_c_rflush_flag:1;
        RBus_UInt32  port3_c_rudflow_flag:1;
        RBus_UInt32  port3_c_wovflow_flag:1;
        RBus_UInt32  port3_c_rwclk_det_timeout_flag:1;
        RBus_UInt32  port3_c_wrclk_det_timeout_flag:1;
        RBus_UInt32  port2_c_rflush_flag:1;
        RBus_UInt32  port2_c_rudflow_flag:1;
        RBus_UInt32  port2_c_wovflow_flag:1;
        RBus_UInt32  port2_c_rwclk_det_timeout_flag:1;
        RBus_UInt32  port2_c_wrclk_det_timeout_flag:1;
        RBus_UInt32  port1_c_rflush_flag:1;
        RBus_UInt32  port1_c_rudflow_flag:1;
        RBus_UInt32  port1_c_wovflow_flag:1;
        RBus_UInt32  port1_c_rwclk_det_timeout_flag:1;
        RBus_UInt32  port1_c_wrclk_det_timeout_flag:1;
        RBus_UInt32  port0_c_rflush_flag:1;
        RBus_UInt32  port0_c_rudflow_flag:1;
        RBus_UInt32  port0_c_wovflow_flag:1;
        RBus_UInt32  port0_c_rwclk_det_timeout_flag:1;
        RBus_UInt32  port0_c_wrclk_det_timeout_flag:1;
        RBus_UInt32  res1:12;
    };
}hdmi_ex_p0_ex_phy_fifo_sr2_RBUS;




#endif 


#endif 
