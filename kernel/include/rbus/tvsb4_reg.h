/**
* @file Merlin5-DesignSpec-TV-SB4-DCU1
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_TVSB4_REG_H_
#define _RBUS_TVSB4_REG_H_

#include "rbus_types.h"



//  TVSB4 Register Address
#define  TVSB4_TV_SB4_DCU1_ARB_CR0                                              0x1801C600
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_reg_addr                                      "0xB801C600"
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_reg                                           0xB801C600
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_inst_addr                                     "0x0000"
#define  set_TVSB4_TV_SB4_DCU1_ARB_CR0_reg(data)                                 (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_ARB_CR0_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_ARB_CR0_reg                                       (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_ARB_CR0_reg))
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_mode_shift                              (31)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_start_shift                             (30)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_tx_mode_shift                              (29)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_tx_start_shift                             (28)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_gated_shift                             (27)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_dummy_26_16_shift                             (16)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_debug_bit_sel_shift                     (8)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_fail_bit_status_shift                   (7)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_done_shift                              (6)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_err_shift                               (5)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_tx_work_shift                              (4)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_time_step_shift                               (0)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_mode_mask                               (0x80000000)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_start_mask                              (0x40000000)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_tx_mode_mask                               (0x20000000)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_tx_start_mask                              (0x10000000)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_gated_mask                              (0x08000000)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_dummy_26_16_mask                              (0x07FF0000)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_debug_bit_sel_mask                      (0x0000FF00)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_fail_bit_status_mask                    (0x00000080)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_done_mask                               (0x00000040)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_err_mask                                (0x00000020)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_tx_work_mask                               (0x00000010)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_time_step_mask                                (0x0000000F)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_mode(data)                              (0x80000000&((data)<<31))
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_start(data)                             (0x40000000&((data)<<30))
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_tx_mode(data)                              (0x20000000&((data)<<29))
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_tx_start(data)                             (0x10000000&((data)<<28))
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_gated(data)                             (0x08000000&((data)<<27))
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_dummy_26_16(data)                             (0x07FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_debug_bit_sel(data)                     (0x0000FF00&((data)<<8))
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_fail_bit_status(data)                   (0x00000080&((data)<<7))
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_done(data)                              (0x00000040&((data)<<6))
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_rx_err(data)                               (0x00000020&((data)<<5))
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_sf_tx_work(data)                              (0x00000010&((data)<<4))
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_time_step(data)                               (0x0000000F&(data))
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_get_sf_rx_mode(data)                          ((0x80000000&(data))>>31)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_get_sf_rx_start(data)                         ((0x40000000&(data))>>30)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_get_sf_tx_mode(data)                          ((0x20000000&(data))>>29)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_get_sf_tx_start(data)                         ((0x10000000&(data))>>28)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_get_sf_rx_gated(data)                         ((0x08000000&(data))>>27)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_get_dummy_26_16(data)                         ((0x07FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_get_sf_rx_debug_bit_sel(data)                 ((0x0000FF00&(data))>>8)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_get_sf_rx_fail_bit_status(data)               ((0x00000080&(data))>>7)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_get_sf_rx_done(data)                          ((0x00000040&(data))>>6)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_get_sf_rx_err(data)                           ((0x00000020&(data))>>5)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_get_sf_tx_work(data)                          ((0x00000010&(data))>>4)
#define  TVSB4_TV_SB4_DCU1_ARB_CR0_get_time_step(data)                           (0x0000000F&(data))

#define  TVSB4_TV_SB4_DCU1_ARB_CR1                                              0x1801C604
#define  TVSB4_TV_SB4_DCU1_ARB_CR1_reg_addr                                      "0xB801C604"
#define  TVSB4_TV_SB4_DCU1_ARB_CR1_reg                                           0xB801C604
#define  TVSB4_TV_SB4_DCU1_ARB_CR1_inst_addr                                     "0x0001"
#define  set_TVSB4_TV_SB4_DCU1_ARB_CR1_reg(data)                                 (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_ARB_CR1_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_ARB_CR1_reg                                       (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_ARB_CR1_reg))
#define  TVSB4_TV_SB4_DCU1_ARB_CR1_arb_en_shift                                  (0)
#define  TVSB4_TV_SB4_DCU1_ARB_CR1_arb_en_mask                                   (0x000001FF)
#define  TVSB4_TV_SB4_DCU1_ARB_CR1_arb_en(data)                                  (0x000001FF&(data))
#define  TVSB4_TV_SB4_DCU1_ARB_CR1_get_arb_en(data)                              (0x000001FF&(data))

#define  TVSB4_TV_SB4_DCU1_LATCNT_CR1                                           0x1801C608
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR1_reg_addr                                   "0xB801C608"
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR1_reg                                        0xB801C608
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR1_inst_addr                                  "0x0002"
#define  set_TVSB4_TV_SB4_DCU1_LATCNT_CR1_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_LATCNT_CR1_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_LATCNT_CR1_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_LATCNT_CR1_reg))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR1_client0_latcnt_end_shift                   (16)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR1_client0_latcnt_beg_shift                   (0)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR1_client0_latcnt_end_mask                    (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR1_client0_latcnt_beg_mask                    (0x000000FF)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR1_client0_latcnt_end(data)                   (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR1_client0_latcnt_beg(data)                   (0x000000FF&(data))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR1_get_client0_latcnt_end(data)               ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR1_get_client0_latcnt_beg(data)               (0x000000FF&(data))

#define  TVSB4_TV_SB4_DCU1_LATCNT_CR2                                           0x1801C60C
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR2_reg_addr                                   "0xB801C60C"
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR2_reg                                        0xB801C60C
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR2_inst_addr                                  "0x0003"
#define  set_TVSB4_TV_SB4_DCU1_LATCNT_CR2_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_LATCNT_CR2_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_LATCNT_CR2_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_LATCNT_CR2_reg))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR2_client1_latcnt_end_shift                   (16)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR2_client1_latcnt_beg_shift                   (0)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR2_client1_latcnt_end_mask                    (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR2_client1_latcnt_beg_mask                    (0x000000FF)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR2_client1_latcnt_end(data)                   (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR2_client1_latcnt_beg(data)                   (0x000000FF&(data))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR2_get_client1_latcnt_end(data)               ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR2_get_client1_latcnt_beg(data)               (0x000000FF&(data))

#define  TVSB4_TV_SB4_DCU1_LATCNT_CR3                                           0x1801C610
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR3_reg_addr                                   "0xB801C610"
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR3_reg                                        0xB801C610
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR3_inst_addr                                  "0x0004"
#define  set_TVSB4_TV_SB4_DCU1_LATCNT_CR3_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_LATCNT_CR3_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_LATCNT_CR3_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_LATCNT_CR3_reg))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR3_client2_latcnt_end_shift                   (16)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR3_client2_latcnt_beg_shift                   (0)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR3_client2_latcnt_end_mask                    (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR3_client2_latcnt_beg_mask                    (0x000000FF)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR3_client2_latcnt_end(data)                   (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR3_client2_latcnt_beg(data)                   (0x000000FF&(data))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR3_get_client2_latcnt_end(data)               ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR3_get_client2_latcnt_beg(data)               (0x000000FF&(data))

#define  TVSB4_TV_SB4_DCU1_LATCNT_CR5                                           0x1801C618
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR5_reg_addr                                   "0xB801C618"
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR5_reg                                        0xB801C618
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR5_inst_addr                                  "0x0005"
#define  set_TVSB4_TV_SB4_DCU1_LATCNT_CR5_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_LATCNT_CR5_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_LATCNT_CR5_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_LATCNT_CR5_reg))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR5_client4_latcnt_end_shift                   (16)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR5_client4_latcnt_beg_shift                   (0)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR5_client4_latcnt_end_mask                    (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR5_client4_latcnt_beg_mask                    (0x000000FF)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR5_client4_latcnt_end(data)                   (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR5_client4_latcnt_beg(data)                   (0x000000FF&(data))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR5_get_client4_latcnt_end(data)               ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR5_get_client4_latcnt_beg(data)               (0x000000FF&(data))

#define  TVSB4_TV_SB4_DCU1_LATCNT_CR6                                           0x1801C61C
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR6_reg_addr                                   "0xB801C61C"
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR6_reg                                        0xB801C61C
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR6_inst_addr                                  "0x0006"
#define  set_TVSB4_TV_SB4_DCU1_LATCNT_CR6_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_LATCNT_CR6_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_LATCNT_CR6_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_LATCNT_CR6_reg))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR6_client5_latcnt_end_shift                   (16)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR6_client5_latcnt_beg_shift                   (0)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR6_client5_latcnt_end_mask                    (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR6_client5_latcnt_beg_mask                    (0x000000FF)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR6_client5_latcnt_end(data)                   (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR6_client5_latcnt_beg(data)                   (0x000000FF&(data))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR6_get_client5_latcnt_end(data)               ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR6_get_client5_latcnt_beg(data)               (0x000000FF&(data))

#define  TVSB4_TV_SB4_DCU1_LATCNT_CR7                                           0x1801C620
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR7_reg_addr                                   "0xB801C620"
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR7_reg                                        0xB801C620
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR7_inst_addr                                  "0x0007"
#define  set_TVSB4_TV_SB4_DCU1_LATCNT_CR7_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_LATCNT_CR7_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_LATCNT_CR7_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_LATCNT_CR7_reg))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR7_client6_latcnt_end_shift                   (16)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR7_client6_latcnt_beg_shift                   (0)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR7_client6_latcnt_end_mask                    (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR7_client6_latcnt_beg_mask                    (0x000000FF)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR7_client6_latcnt_end(data)                   (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR7_client6_latcnt_beg(data)                   (0x000000FF&(data))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR7_get_client6_latcnt_end(data)               ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR7_get_client6_latcnt_beg(data)               (0x000000FF&(data))

#define  TVSB4_TV_SB4_DCU1_LATCNT_CR8                                           0x1801C624
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR8_reg_addr                                   "0xB801C624"
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR8_reg                                        0xB801C624
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR8_inst_addr                                  "0x0008"
#define  set_TVSB4_TV_SB4_DCU1_LATCNT_CR8_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_LATCNT_CR8_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_LATCNT_CR8_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_LATCNT_CR8_reg))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR8_client7_latcnt_end_shift                   (16)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR8_client7_latcnt_beg_shift                   (0)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR8_client7_latcnt_end_mask                    (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR8_client7_latcnt_beg_mask                    (0x000000FF)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR8_client7_latcnt_end(data)                   (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR8_client7_latcnt_beg(data)                   (0x000000FF&(data))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR8_get_client7_latcnt_end(data)               ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR8_get_client7_latcnt_beg(data)               (0x000000FF&(data))

#define  TVSB4_TV_SB4_DCU1_LATCNT_CR9                                           0x1801C628
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR9_reg_addr                                   "0xB801C628"
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR9_reg                                        0xB801C628
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR9_inst_addr                                  "0x0009"
#define  set_TVSB4_TV_SB4_DCU1_LATCNT_CR9_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_LATCNT_CR9_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_LATCNT_CR9_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_LATCNT_CR9_reg))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR9_client8_latcnt_end_shift                   (16)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR9_client8_latcnt_beg_shift                   (0)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR9_client8_latcnt_end_mask                    (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR9_client8_latcnt_beg_mask                    (0x000000FF)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR9_client8_latcnt_end(data)                   (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR9_client8_latcnt_beg(data)                   (0x000000FF&(data))
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR9_get_client8_latcnt_end(data)               ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_LATCNT_CR9_get_client8_latcnt_beg(data)               (0x000000FF&(data))

#define  TVSB4_TV_SB4_DCU1_PC_CTRL                                              0x1801C650
#define  TVSB4_TV_SB4_DCU1_PC_CTRL_reg_addr                                      "0xB801C650"
#define  TVSB4_TV_SB4_DCU1_PC_CTRL_reg                                           0xB801C650
#define  TVSB4_TV_SB4_DCU1_PC_CTRL_inst_addr                                     "0x000A"
#define  set_TVSB4_TV_SB4_DCU1_PC_CTRL_reg(data)                                 (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_CTRL_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_PC_CTRL_reg                                       (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_CTRL_reg))
#define  TVSB4_TV_SB4_DCU1_PC_CTRL_pc_rd_only_shift                              (1)
#define  TVSB4_TV_SB4_DCU1_PC_CTRL_pc_go_shift                                   (0)
#define  TVSB4_TV_SB4_DCU1_PC_CTRL_pc_rd_only_mask                               (0x00000002)
#define  TVSB4_TV_SB4_DCU1_PC_CTRL_pc_go_mask                                    (0x00000001)
#define  TVSB4_TV_SB4_DCU1_PC_CTRL_pc_rd_only(data)                              (0x00000002&((data)<<1))
#define  TVSB4_TV_SB4_DCU1_PC_CTRL_pc_go(data)                                   (0x00000001&(data))
#define  TVSB4_TV_SB4_DCU1_PC_CTRL_get_pc_rd_only(data)                          ((0x00000002&(data))>>1)
#define  TVSB4_TV_SB4_DCU1_PC_CTRL_get_pc_go(data)                               (0x00000001&(data))

#define  TVSB4_TV_SB4_DCU1_PC_TOTA_MON_NUM                                      0x1801C654
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_MON_NUM_reg_addr                              "0xB801C654"
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_MON_NUM_reg                                   0xB801C654
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_MON_NUM_inst_addr                             "0x000B"
#define  set_TVSB4_TV_SB4_DCU1_PC_TOTA_MON_NUM_reg(data)                         (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_TOTA_MON_NUM_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_PC_TOTA_MON_NUM_reg                               (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_TOTA_MON_NUM_reg))
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_MON_NUM_pc_tota_mon_num_shift                 (0)
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_MON_NUM_pc_tota_mon_num_mask                  (0xFFFFFFFF)
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_MON_NUM_pc_tota_mon_num(data)                 (0xFFFFFFFF&(data))
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_MON_NUM_get_pc_tota_mon_num(data)             (0xFFFFFFFF&(data))

#define  TVSB4_TV_SB4_DCU1_PC_TOTA_ACK_NUM                                      0x1801C658
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_ACK_NUM_reg_addr                              "0xB801C658"
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_ACK_NUM_reg                                   0xB801C658
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_ACK_NUM_inst_addr                             "0x000C"
#define  set_TVSB4_TV_SB4_DCU1_PC_TOTA_ACK_NUM_reg(data)                         (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_TOTA_ACK_NUM_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_PC_TOTA_ACK_NUM_reg                               (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_TOTA_ACK_NUM_reg))
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_ACK_NUM_pc_tota_ack_num_shift                 (0)
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_ACK_NUM_pc_tota_ack_num_mask                  (0xFFFFFFFF)
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_ACK_NUM_pc_tota_ack_num(data)                 (0xFFFFFFFF&(data))
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_ACK_NUM_get_pc_tota_ack_num(data)             (0xFFFFFFFF&(data))

#define  TVSB4_TV_SB4_DCU1_PC_TOTA_IDL_NUM                                      0x1801C65C
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_IDL_NUM_reg_addr                              "0xB801C65C"
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_IDL_NUM_reg                                   0xB801C65C
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_IDL_NUM_inst_addr                             "0x000D"
#define  set_TVSB4_TV_SB4_DCU1_PC_TOTA_IDL_NUM_reg(data)                         (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_TOTA_IDL_NUM_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_PC_TOTA_IDL_NUM_reg                               (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_TOTA_IDL_NUM_reg))
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_IDL_NUM_pc_tota_idl_num_shift                 (0)
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_IDL_NUM_pc_tota_idl_num_mask                  (0xFFFFFFFF)
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_IDL_NUM_pc_tota_idl_num(data)                 (0xFFFFFFFF&(data))
#define  TVSB4_TV_SB4_DCU1_PC_TOTA_IDL_NUM_get_pc_tota_idl_num(data)             (0xFFFFFFFF&(data))

#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl1                                        0x1801C660
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_reg_addr                                "0xB801C660"
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_reg                                     0xB801C660
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_inst_addr                               "0x000E"
#define  set_TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_reg(data)                           (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_reg                                 (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_reg))
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_pc_prog2_sel_shift                      (16)
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_pc_prog1_sel_shift                      (8)
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_pc_prog0_sel_shift                      (0)
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_pc_prog2_sel_mask                       (0x000F0000)
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_pc_prog1_sel_mask                       (0x00000F00)
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_pc_prog0_sel_mask                       (0x0000000F)
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_pc_prog2_sel(data)                      (0x000F0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_pc_prog1_sel(data)                      (0x00000F00&((data)<<8))
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_pc_prog0_sel(data)                      (0x0000000F&(data))
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_get_pc_prog2_sel(data)                  ((0x000F0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_get_pc_prog1_sel(data)                  ((0x00000F00&(data))>>8)
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl1_get_pc_prog0_sel(data)                  (0x0000000F&(data))

#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl2                                        0x1801C664
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_reg_addr                                "0xB801C664"
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_reg                                     0xB801C664
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_inst_addr                               "0x000F"
#define  set_TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_reg(data)                           (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_reg                                 (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_reg))
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_pc_prog2_req_occur_shift                (2)
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_pc_prog1_req_occur_shift                (1)
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_pc_prog0_req_occur_shift                (0)
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_pc_prog2_req_occur_mask                 (0x00000004)
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_pc_prog1_req_occur_mask                 (0x00000002)
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_pc_prog0_req_occur_mask                 (0x00000001)
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_pc_prog2_req_occur(data)                (0x00000004&((data)<<2))
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_pc_prog1_req_occur(data)                (0x00000002&((data)<<1))
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_pc_prog0_req_occur(data)                (0x00000001&(data))
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_get_pc_prog2_req_occur(data)            ((0x00000004&(data))>>2)
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_get_pc_prog1_req_occur(data)            ((0x00000002&(data))>>1)
#define  TVSB4_TV_SB4_DCU1_PC_prog_ctrl2_get_pc_prog0_req_occur(data)            (0x00000001&(data))

#define  TVSB4_TV_SB4_DCU1_PC_prog_0_channel_sel                                0x1801C668
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_channel_sel_reg_addr                        "0xB801C668"
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_channel_sel_reg                             0xB801C668
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_channel_sel_inst_addr                       "0x0010"
#define  set_TVSB4_TV_SB4_DCU1_PC_prog_0_channel_sel_reg(data)                   (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_prog_0_channel_sel_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_PC_prog_0_channel_sel_reg                         (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_prog_0_channel_sel_reg))
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_channel_sel_prog_channel_sel_shift          (0)
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_channel_sel_prog_channel_sel_mask           (0x00000003)
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_channel_sel_prog_channel_sel(data)          (0x00000003&(data))
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_channel_sel_get_prog_channel_sel(data)      (0x00000003&(data))

#define  TVSB4_TV_SB4_DCU1_PC_prog_0_acc_lat                                    0x1801C66C
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_acc_lat_reg_addr                            "0xB801C66C"
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_acc_lat_reg                                 0xB801C66C
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_acc_lat_inst_addr                           "0x0011"
#define  set_TVSB4_TV_SB4_DCU1_PC_prog_0_acc_lat_reg(data)                       (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_prog_0_acc_lat_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_PC_prog_0_acc_lat_reg                             (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_prog_0_acc_lat_reg))
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_acc_lat_prog_acc_lat_shift                  (0)
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_acc_lat_prog_acc_lat_mask                   (0xFFFFFFFF)
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_acc_lat_prog_acc_lat(data)                  (0xFFFFFFFF&(data))
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_acc_lat_get_prog_acc_lat(data)              (0xFFFFFFFF&(data))

#define  TVSB4_TV_SB4_DCU1_PC_prog_0_max_lat                                    0x1801C670
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_max_lat_reg_addr                            "0xB801C670"
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_max_lat_reg                                 0xB801C670
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_max_lat_inst_addr                           "0x0012"
#define  set_TVSB4_TV_SB4_DCU1_PC_prog_0_max_lat_reg(data)                       (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_prog_0_max_lat_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_PC_prog_0_max_lat_reg                             (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_prog_0_max_lat_reg))
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_max_lat_prog_max_lat_shift                  (0)
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_max_lat_prog_max_lat_mask                   (0x0000FFFF)
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_max_lat_prog_max_lat(data)                  (0x0000FFFF&(data))
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_max_lat_get_prog_max_lat(data)              (0x0000FFFF&(data))

#define  TVSB4_TV_SB4_DCU1_PC_prog_0_req_num                                    0x1801C674
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_req_num_reg_addr                            "0xB801C674"
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_req_num_reg                                 0xB801C674
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_req_num_inst_addr                           "0x0013"
#define  set_TVSB4_TV_SB4_DCU1_PC_prog_0_req_num_reg(data)                       (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_prog_0_req_num_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_PC_prog_0_req_num_reg                             (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_prog_0_req_num_reg))
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_req_num_prog_req_num_shift                  (0)
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_req_num_prog_req_num_mask                   (0x00FFFFFF)
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_req_num_prog_req_num(data)                  (0x00FFFFFF&(data))
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_req_num_get_prog_req_num(data)              (0x00FFFFFF&(data))

#define  TVSB4_TV_SB4_DCU1_PC_prog_0_ack_num                                    0x1801C678
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_ack_num_reg_addr                            "0xB801C678"
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_ack_num_reg                                 0xB801C678
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_ack_num_inst_addr                           "0x0014"
#define  set_TVSB4_TV_SB4_DCU1_PC_prog_0_ack_num_reg(data)                       (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_prog_0_ack_num_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_PC_prog_0_ack_num_reg                             (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_prog_0_ack_num_reg))
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_ack_num_prog_ack_num_shift                  (0)
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_ack_num_prog_ack_num_mask                   (0xFFFFFFFF)
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_ack_num_prog_ack_num(data)                  (0xFFFFFFFF&(data))
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_ack_num_get_prog_ack_num(data)              (0xFFFFFFFF&(data))

#define  TVSB4_TV_SB4_DCU1_PC_prog_0_hitend                                     0x1801C67C
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_hitend_reg_addr                             "0xB801C67C"
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_hitend_reg                                  0xB801C67C
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_hitend_inst_addr                            "0x0015"
#define  set_TVSB4_TV_SB4_DCU1_PC_prog_0_hitend_reg(data)                        (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_prog_0_hitend_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_PC_prog_0_hitend_reg                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_PC_prog_0_hitend_reg))
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_hitend_prog_hitend_cnt_shift                (0)
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_hitend_prog_hitend_cnt_mask                 (0x0000FFFF)
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_hitend_prog_hitend_cnt(data)                (0x0000FFFF&(data))
#define  TVSB4_TV_SB4_DCU1_PC_prog_0_hitend_get_prog_hitend_cnt(data)            (0x0000FFFF&(data))

#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL                                     0x1801C6D0
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_reg_addr                             "0xB801C6D0"
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_reg                                  0xB801C6D0
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_inst_addr                            "0x0016"
#define  set_TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_reg(data)                        (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_reg                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_reg))
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_bt_done_shift                        (4)
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_bt_bl_shift                          (3)
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_bt_data_inv_shift                    (2)
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_bt_rw_shift                          (1)
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_bt_go_shift                          (0)
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_bt_done_mask                         (0x00000030)
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_bt_bl_mask                           (0x00000008)
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_bt_data_inv_mask                     (0x00000004)
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_bt_rw_mask                           (0x00000002)
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_bt_go_mask                           (0x00000001)
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_bt_done(data)                        (0x00000030&((data)<<4))
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_bt_bl(data)                          (0x00000008&((data)<<3))
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_bt_data_inv(data)                    (0x00000004&((data)<<2))
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_bt_rw(data)                          (0x00000002&((data)<<1))
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_bt_go(data)                          (0x00000001&(data))
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_get_bt_done(data)                    ((0x00000030&(data))>>4)
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_get_bt_bl(data)                      ((0x00000008&(data))>>3)
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_get_bt_data_inv(data)                ((0x00000004&(data))>>2)
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_get_bt_rw(data)                      ((0x00000002&(data))>>1)
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_CTRL_get_bt_go(data)                      (0x00000001&(data))

#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_ADDR_DATA                                0x1801C6D4
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_ADDR_DATA_reg_addr                        "0xB801C6D4"
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_ADDR_DATA_reg                             0xB801C6D4
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_ADDR_DATA_inst_addr                       "0x0017"
#define  set_TVSB4_TV_SB4_DCU1_BRIDGE_TEST_ADDR_DATA_reg(data)                   (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_BRIDGE_TEST_ADDR_DATA_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_BRIDGE_TEST_ADDR_DATA_reg                         (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_BRIDGE_TEST_ADDR_DATA_reg))
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_ADDR_DATA_bt_addr_data_shift              (4)
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_ADDR_DATA_bt_addr_data_mask               (0xFFFFFFF0)
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_ADDR_DATA_bt_addr_data(data)              (0xFFFFFFF0&((data)<<4))
#define  TVSB4_TV_SB4_DCU1_BRIDGE_TEST_ADDR_DATA_get_bt_addr_data(data)          ((0xFFFFFFF0&(data))>>4)

#define  TVSB4_TV_SB4_DCU1_ARB_SR0                                              0x1801C6C8
#define  TVSB4_TV_SB4_DCU1_ARB_SR0_reg_addr                                      "0xB801C6C8"
#define  TVSB4_TV_SB4_DCU1_ARB_SR0_reg                                           0xB801C6C8
#define  TVSB4_TV_SB4_DCU1_ARB_SR0_inst_addr                                     "0x0018"
#define  set_TVSB4_TV_SB4_DCU1_ARB_SR0_reg(data)                                 (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_ARB_SR0_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_ARB_SR0_reg                                       (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_ARB_SR0_reg))
#define  TVSB4_TV_SB4_DCU1_ARB_SR0_sb_req_shift                                  (16)
#define  TVSB4_TV_SB4_DCU1_ARB_SR0_sb_gnt_shift                                  (0)
#define  TVSB4_TV_SB4_DCU1_ARB_SR0_sb_req_mask                                   (0x01FF0000)
#define  TVSB4_TV_SB4_DCU1_ARB_SR0_sb_gnt_mask                                   (0x000001FF)
#define  TVSB4_TV_SB4_DCU1_ARB_SR0_sb_req(data)                                  (0x01FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_ARB_SR0_sb_gnt(data)                                  (0x000001FF&(data))
#define  TVSB4_TV_SB4_DCU1_ARB_SR0_get_sb_req(data)                              ((0x01FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_ARB_SR0_get_sb_gnt(data)                              (0x000001FF&(data))

#define  TVSB4_TV_SB4_DCU1_ARB_SR1                                              0x1801C6CC
#define  TVSB4_TV_SB4_DCU1_ARB_SR1_reg_addr                                      "0xB801C6CC"
#define  TVSB4_TV_SB4_DCU1_ARB_SR1_reg                                           0xB801C6CC
#define  TVSB4_TV_SB4_DCU1_ARB_SR1_inst_addr                                     "0x0019"
#define  set_TVSB4_TV_SB4_DCU1_ARB_SR1_reg(data)                                 (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_ARB_SR1_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_ARB_SR1_reg                                       (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_ARB_SR1_reg))
#define  TVSB4_TV_SB4_DCU1_ARB_SR1_time_stamp_sel_shift                          (24)
#define  TVSB4_TV_SB4_DCU1_ARB_SR1_time_stamp_shift                              (16)
#define  TVSB4_TV_SB4_DCU1_ARB_SR1_win_latcnt_shift                              (0)
#define  TVSB4_TV_SB4_DCU1_ARB_SR1_time_stamp_sel_mask                           (0x0F000000)
#define  TVSB4_TV_SB4_DCU1_ARB_SR1_time_stamp_mask                               (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_ARB_SR1_win_latcnt_mask                               (0x000000FF)
#define  TVSB4_TV_SB4_DCU1_ARB_SR1_time_stamp_sel(data)                          (0x0F000000&((data)<<24))
#define  TVSB4_TV_SB4_DCU1_ARB_SR1_time_stamp(data)                              (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_ARB_SR1_win_latcnt(data)                              (0x000000FF&(data))
#define  TVSB4_TV_SB4_DCU1_ARB_SR1_get_time_stamp_sel(data)                      ((0x0F000000&(data))>>24)
#define  TVSB4_TV_SB4_DCU1_ARB_SR1_get_time_stamp(data)                          ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_ARB_SR1_get_win_latcnt(data)                          (0x000000FF&(data))

#define  TVSB4_TV_SB4_DCU1_DEBUG                                                0x1801C6F4
#define  TVSB4_TV_SB4_DCU1_DEBUG_reg_addr                                        "0xB801C6F4"
#define  TVSB4_TV_SB4_DCU1_DEBUG_reg                                             0xB801C6F4
#define  TVSB4_TV_SB4_DCU1_DEBUG_inst_addr                                       "0x001A"
#define  set_TVSB4_TV_SB4_DCU1_DEBUG_reg(data)                                   (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_DEBUG_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_DEBUG_reg                                         (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_DEBUG_reg))
#define  TVSB4_TV_SB4_DCU1_DEBUG_sb_debug_mode_shift                             (0)
#define  TVSB4_TV_SB4_DCU1_DEBUG_sb_debug_mode_mask                              (0x0000000F)
#define  TVSB4_TV_SB4_DCU1_DEBUG_sb_debug_mode(data)                             (0x0000000F&(data))
#define  TVSB4_TV_SB4_DCU1_DEBUG_get_sb_debug_mode(data)                         (0x0000000F&(data))

#define  TVSB4_TV_SB4_DCU1_bw_limit_0                                           0x1801C630
#define  TVSB4_TV_SB4_DCU1_bw_limit_0_reg_addr                                   "0xB801C630"
#define  TVSB4_TV_SB4_DCU1_bw_limit_0_reg                                        0xB801C630
#define  TVSB4_TV_SB4_DCU1_bw_limit_0_inst_addr                                  "0x001B"
#define  set_TVSB4_TV_SB4_DCU1_bw_limit_0_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_0_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_bw_limit_0_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_0_reg))
#define  TVSB4_TV_SB4_DCU1_bw_limit_0_max_req_num_0_shift                        (24)
#define  TVSB4_TV_SB4_DCU1_bw_limit_0_req_thr_0_shift                            (16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_0_time_thr_0_shift                           (0)
#define  TVSB4_TV_SB4_DCU1_bw_limit_0_max_req_num_0_mask                         (0xFF000000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_0_req_thr_0_mask                             (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_0_time_thr_0_mask                            (0x0000FFFF)
#define  TVSB4_TV_SB4_DCU1_bw_limit_0_max_req_num_0(data)                        (0xFF000000&((data)<<24))
#define  TVSB4_TV_SB4_DCU1_bw_limit_0_req_thr_0(data)                            (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_bw_limit_0_time_thr_0(data)                           (0x0000FFFF&(data))
#define  TVSB4_TV_SB4_DCU1_bw_limit_0_get_max_req_num_0(data)                    ((0xFF000000&(data))>>24)
#define  TVSB4_TV_SB4_DCU1_bw_limit_0_get_req_thr_0(data)                        ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_0_get_time_thr_0(data)                       (0x0000FFFF&(data))

#define  TVSB4_TV_SB4_DCU1_bw_limit_1                                           0x1801C634
#define  TVSB4_TV_SB4_DCU1_bw_limit_1_reg_addr                                   "0xB801C634"
#define  TVSB4_TV_SB4_DCU1_bw_limit_1_reg                                        0xB801C634
#define  TVSB4_TV_SB4_DCU1_bw_limit_1_inst_addr                                  "0x001C"
#define  set_TVSB4_TV_SB4_DCU1_bw_limit_1_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_1_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_bw_limit_1_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_1_reg))
#define  TVSB4_TV_SB4_DCU1_bw_limit_1_max_req_num_1_shift                        (24)
#define  TVSB4_TV_SB4_DCU1_bw_limit_1_req_thr_1_shift                            (16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_1_time_thr_1_shift                           (0)
#define  TVSB4_TV_SB4_DCU1_bw_limit_1_max_req_num_1_mask                         (0xFF000000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_1_req_thr_1_mask                             (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_1_time_thr_1_mask                            (0x0000FFFF)
#define  TVSB4_TV_SB4_DCU1_bw_limit_1_max_req_num_1(data)                        (0xFF000000&((data)<<24))
#define  TVSB4_TV_SB4_DCU1_bw_limit_1_req_thr_1(data)                            (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_bw_limit_1_time_thr_1(data)                           (0x0000FFFF&(data))
#define  TVSB4_TV_SB4_DCU1_bw_limit_1_get_max_req_num_1(data)                    ((0xFF000000&(data))>>24)
#define  TVSB4_TV_SB4_DCU1_bw_limit_1_get_req_thr_1(data)                        ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_1_get_time_thr_1(data)                       (0x0000FFFF&(data))

#define  TVSB4_TV_SB4_DCU1_bw_limit_2                                           0x1801C638
#define  TVSB4_TV_SB4_DCU1_bw_limit_2_reg_addr                                   "0xB801C638"
#define  TVSB4_TV_SB4_DCU1_bw_limit_2_reg                                        0xB801C638
#define  TVSB4_TV_SB4_DCU1_bw_limit_2_inst_addr                                  "0x001D"
#define  set_TVSB4_TV_SB4_DCU1_bw_limit_2_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_2_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_bw_limit_2_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_2_reg))
#define  TVSB4_TV_SB4_DCU1_bw_limit_2_max_req_num_2_shift                        (24)
#define  TVSB4_TV_SB4_DCU1_bw_limit_2_req_thr_2_shift                            (16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_2_time_thr_2_shift                           (0)
#define  TVSB4_TV_SB4_DCU1_bw_limit_2_max_req_num_2_mask                         (0xFF000000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_2_req_thr_2_mask                             (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_2_time_thr_2_mask                            (0x0000FFFF)
#define  TVSB4_TV_SB4_DCU1_bw_limit_2_max_req_num_2(data)                        (0xFF000000&((data)<<24))
#define  TVSB4_TV_SB4_DCU1_bw_limit_2_req_thr_2(data)                            (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_bw_limit_2_time_thr_2(data)                           (0x0000FFFF&(data))
#define  TVSB4_TV_SB4_DCU1_bw_limit_2_get_max_req_num_2(data)                    ((0xFF000000&(data))>>24)
#define  TVSB4_TV_SB4_DCU1_bw_limit_2_get_req_thr_2(data)                        ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_2_get_time_thr_2(data)                       (0x0000FFFF&(data))

#define  TVSB4_TV_SB4_DCU1_bw_limit_4                                           0x1801C640
#define  TVSB4_TV_SB4_DCU1_bw_limit_4_reg_addr                                   "0xB801C640"
#define  TVSB4_TV_SB4_DCU1_bw_limit_4_reg                                        0xB801C640
#define  TVSB4_TV_SB4_DCU1_bw_limit_4_inst_addr                                  "0x001E"
#define  set_TVSB4_TV_SB4_DCU1_bw_limit_4_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_4_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_bw_limit_4_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_4_reg))
#define  TVSB4_TV_SB4_DCU1_bw_limit_4_max_req_num_4_shift                        (24)
#define  TVSB4_TV_SB4_DCU1_bw_limit_4_req_thr_4_shift                            (16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_4_time_thr_4_shift                           (0)
#define  TVSB4_TV_SB4_DCU1_bw_limit_4_max_req_num_4_mask                         (0xFF000000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_4_req_thr_4_mask                             (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_4_time_thr_4_mask                            (0x0000FFFF)
#define  TVSB4_TV_SB4_DCU1_bw_limit_4_max_req_num_4(data)                        (0xFF000000&((data)<<24))
#define  TVSB4_TV_SB4_DCU1_bw_limit_4_req_thr_4(data)                            (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_bw_limit_4_time_thr_4(data)                           (0x0000FFFF&(data))
#define  TVSB4_TV_SB4_DCU1_bw_limit_4_get_max_req_num_4(data)                    ((0xFF000000&(data))>>24)
#define  TVSB4_TV_SB4_DCU1_bw_limit_4_get_req_thr_4(data)                        ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_4_get_time_thr_4(data)                       (0x0000FFFF&(data))

#define  TVSB4_TV_SB4_DCU1_bw_limit_5                                           0x1801C644
#define  TVSB4_TV_SB4_DCU1_bw_limit_5_reg_addr                                   "0xB801C644"
#define  TVSB4_TV_SB4_DCU1_bw_limit_5_reg                                        0xB801C644
#define  TVSB4_TV_SB4_DCU1_bw_limit_5_inst_addr                                  "0x001F"
#define  set_TVSB4_TV_SB4_DCU1_bw_limit_5_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_5_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_bw_limit_5_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_5_reg))
#define  TVSB4_TV_SB4_DCU1_bw_limit_5_max_req_num_5_shift                        (24)
#define  TVSB4_TV_SB4_DCU1_bw_limit_5_req_thr_5_shift                            (16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_5_time_thr_5_shift                           (0)
#define  TVSB4_TV_SB4_DCU1_bw_limit_5_max_req_num_5_mask                         (0xFF000000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_5_req_thr_5_mask                             (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_5_time_thr_5_mask                            (0x0000FFFF)
#define  TVSB4_TV_SB4_DCU1_bw_limit_5_max_req_num_5(data)                        (0xFF000000&((data)<<24))
#define  TVSB4_TV_SB4_DCU1_bw_limit_5_req_thr_5(data)                            (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_bw_limit_5_time_thr_5(data)                           (0x0000FFFF&(data))
#define  TVSB4_TV_SB4_DCU1_bw_limit_5_get_max_req_num_5(data)                    ((0xFF000000&(data))>>24)
#define  TVSB4_TV_SB4_DCU1_bw_limit_5_get_req_thr_5(data)                        ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_5_get_time_thr_5(data)                       (0x0000FFFF&(data))

#define  TVSB4_TV_SB4_DCU1_bw_limit_6                                           0x1801C648
#define  TVSB4_TV_SB4_DCU1_bw_limit_6_reg_addr                                   "0xB801C648"
#define  TVSB4_TV_SB4_DCU1_bw_limit_6_reg                                        0xB801C648
#define  TVSB4_TV_SB4_DCU1_bw_limit_6_inst_addr                                  "0x0020"
#define  set_TVSB4_TV_SB4_DCU1_bw_limit_6_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_6_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_bw_limit_6_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_6_reg))
#define  TVSB4_TV_SB4_DCU1_bw_limit_6_max_req_num_6_shift                        (24)
#define  TVSB4_TV_SB4_DCU1_bw_limit_6_req_thr_6_shift                            (16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_6_time_thr_6_shift                           (0)
#define  TVSB4_TV_SB4_DCU1_bw_limit_6_max_req_num_6_mask                         (0xFF000000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_6_req_thr_6_mask                             (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_6_time_thr_6_mask                            (0x0000FFFF)
#define  TVSB4_TV_SB4_DCU1_bw_limit_6_max_req_num_6(data)                        (0xFF000000&((data)<<24))
#define  TVSB4_TV_SB4_DCU1_bw_limit_6_req_thr_6(data)                            (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_bw_limit_6_time_thr_6(data)                           (0x0000FFFF&(data))
#define  TVSB4_TV_SB4_DCU1_bw_limit_6_get_max_req_num_6(data)                    ((0xFF000000&(data))>>24)
#define  TVSB4_TV_SB4_DCU1_bw_limit_6_get_req_thr_6(data)                        ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_6_get_time_thr_6(data)                       (0x0000FFFF&(data))

#define  TVSB4_TV_SB4_DCU1_bw_limit_7                                           0x1801C64C
#define  TVSB4_TV_SB4_DCU1_bw_limit_7_reg_addr                                   "0xB801C64C"
#define  TVSB4_TV_SB4_DCU1_bw_limit_7_reg                                        0xB801C64C
#define  TVSB4_TV_SB4_DCU1_bw_limit_7_inst_addr                                  "0x0021"
#define  set_TVSB4_TV_SB4_DCU1_bw_limit_7_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_7_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_bw_limit_7_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_7_reg))
#define  TVSB4_TV_SB4_DCU1_bw_limit_7_max_req_num_7_shift                        (24)
#define  TVSB4_TV_SB4_DCU1_bw_limit_7_req_thr_7_shift                            (16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_7_time_thr_7_shift                           (0)
#define  TVSB4_TV_SB4_DCU1_bw_limit_7_max_req_num_7_mask                         (0xFF000000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_7_req_thr_7_mask                             (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_7_time_thr_7_mask                            (0x0000FFFF)
#define  TVSB4_TV_SB4_DCU1_bw_limit_7_max_req_num_7(data)                        (0xFF000000&((data)<<24))
#define  TVSB4_TV_SB4_DCU1_bw_limit_7_req_thr_7(data)                            (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_bw_limit_7_time_thr_7(data)                           (0x0000FFFF&(data))
#define  TVSB4_TV_SB4_DCU1_bw_limit_7_get_max_req_num_7(data)                    ((0xFF000000&(data))>>24)
#define  TVSB4_TV_SB4_DCU1_bw_limit_7_get_req_thr_7(data)                        ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_7_get_time_thr_7(data)                       (0x0000FFFF&(data))

#define  TVSB4_TV_SB4_DCU1_bw_limit_8                                           0x1801C6A8
#define  TVSB4_TV_SB4_DCU1_bw_limit_8_reg_addr                                   "0xB801C6A8"
#define  TVSB4_TV_SB4_DCU1_bw_limit_8_reg                                        0xB801C6A8
#define  TVSB4_TV_SB4_DCU1_bw_limit_8_inst_addr                                  "0x0022"
#define  set_TVSB4_TV_SB4_DCU1_bw_limit_8_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_8_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_bw_limit_8_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_8_reg))
#define  TVSB4_TV_SB4_DCU1_bw_limit_8_max_req_num_8_shift                        (24)
#define  TVSB4_TV_SB4_DCU1_bw_limit_8_req_thr_8_shift                            (16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_8_time_thr_8_shift                           (0)
#define  TVSB4_TV_SB4_DCU1_bw_limit_8_max_req_num_8_mask                         (0xFF000000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_8_req_thr_8_mask                             (0x00FF0000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_8_time_thr_8_mask                            (0x0000FFFF)
#define  TVSB4_TV_SB4_DCU1_bw_limit_8_max_req_num_8(data)                        (0xFF000000&((data)<<24))
#define  TVSB4_TV_SB4_DCU1_bw_limit_8_req_thr_8(data)                            (0x00FF0000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_bw_limit_8_time_thr_8(data)                           (0x0000FFFF&(data))
#define  TVSB4_TV_SB4_DCU1_bw_limit_8_get_max_req_num_8(data)                    ((0xFF000000&(data))>>24)
#define  TVSB4_TV_SB4_DCU1_bw_limit_8_get_req_thr_8(data)                        ((0x00FF0000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_8_get_time_thr_8(data)                       (0x0000FFFF&(data))

#define  TVSB4_TV_SB4_DCU1_bw_limit_en                                          0x1801C6E8
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_reg_addr                                  "0xB801C6E8"
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_reg                                       0xB801C6E8
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_inst_addr                                 "0x0023"
#define  set_TVSB4_TV_SB4_DCU1_bw_limit_en_reg(data)                             (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_en_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_bw_limit_en_reg                                   (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_bw_limit_en_reg))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_len_scheme_en_shift                       (31)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_8_shift                     (17)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_8_shift                       (16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_7_shift                     (15)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_7_shift                       (14)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_6_shift                     (13)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_6_shift                       (12)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_5_shift                     (11)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_5_shift                       (10)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_4_shift                     (9)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_4_shift                       (8)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_2_shift                     (5)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_2_shift                       (4)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_1_shift                     (3)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_1_shift                       (2)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_0_shift                     (1)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_0_shift                       (0)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_len_scheme_en_mask                        (0x80000000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_8_mask                      (0x00020000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_8_mask                        (0x00010000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_7_mask                      (0x00008000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_7_mask                        (0x00004000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_6_mask                      (0x00002000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_6_mask                        (0x00001000)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_5_mask                      (0x00000800)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_5_mask                        (0x00000400)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_4_mask                      (0x00000200)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_4_mask                        (0x00000100)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_2_mask                      (0x00000020)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_2_mask                        (0x00000010)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_1_mask                      (0x00000008)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_1_mask                        (0x00000004)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_0_mask                      (0x00000002)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_0_mask                        (0x00000001)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_len_scheme_en(data)                       (0x80000000&((data)<<31))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_8(data)                     (0x00020000&((data)<<17))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_8(data)                       (0x00010000&((data)<<16))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_7(data)                     (0x00008000&((data)<<15))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_7(data)                       (0x00004000&((data)<<14))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_6(data)                     (0x00002000&((data)<<13))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_6(data)                       (0x00001000&((data)<<12))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_5(data)                     (0x00000800&((data)<<11))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_5(data)                       (0x00000400&((data)<<10))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_4(data)                     (0x00000200&((data)<<9))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_4(data)                       (0x00000100&((data)<<8))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_2(data)                     (0x00000020&((data)<<5))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_2(data)                       (0x00000010&((data)<<4))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_1(data)                     (0x00000008&((data)<<3))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_1(data)                       (0x00000004&((data)<<2))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_status_clr_0(data)                     (0x00000002&((data)<<1))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_bw_limit_en_0(data)                       (0x00000001&(data))
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_len_scheme_en(data)                   ((0x80000000&(data))>>31)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_bw_status_clr_8(data)                 ((0x00020000&(data))>>17)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_bw_limit_en_8(data)                   ((0x00010000&(data))>>16)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_bw_status_clr_7(data)                 ((0x00008000&(data))>>15)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_bw_limit_en_7(data)                   ((0x00004000&(data))>>14)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_bw_status_clr_6(data)                 ((0x00002000&(data))>>13)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_bw_limit_en_6(data)                   ((0x00001000&(data))>>12)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_bw_status_clr_5(data)                 ((0x00000800&(data))>>11)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_bw_limit_en_5(data)                   ((0x00000400&(data))>>10)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_bw_status_clr_4(data)                 ((0x00000200&(data))>>9)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_bw_limit_en_4(data)                   ((0x00000100&(data))>>8)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_bw_status_clr_2(data)                 ((0x00000020&(data))>>5)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_bw_limit_en_2(data)                   ((0x00000010&(data))>>4)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_bw_status_clr_1(data)                 ((0x00000008&(data))>>3)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_bw_limit_en_1(data)                   ((0x00000004&(data))>>2)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_bw_status_clr_0(data)                 ((0x00000002&(data))>>1)
#define  TVSB4_TV_SB4_DCU1_bw_limit_en_get_bw_limit_en_0(data)                   (0x00000001&(data))

#define  TVSB4_TV_SB4_DCU1_queue_ctrl                                           0x1801C6EC
#define  TVSB4_TV_SB4_DCU1_queue_ctrl_reg_addr                                   "0xB801C6EC"
#define  TVSB4_TV_SB4_DCU1_queue_ctrl_reg                                        0xB801C6EC
#define  TVSB4_TV_SB4_DCU1_queue_ctrl_inst_addr                                  "0x0024"
#define  set_TVSB4_TV_SB4_DCU1_queue_ctrl_reg(data)                              (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_queue_ctrl_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_queue_ctrl_reg                                    (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_queue_ctrl_reg))
#define  TVSB4_TV_SB4_DCU1_queue_ctrl_rd_queue_num_shift                         (4)
#define  TVSB4_TV_SB4_DCU1_queue_ctrl_wr_queue_num_shift                         (0)
#define  TVSB4_TV_SB4_DCU1_queue_ctrl_rd_queue_num_mask                          (0x000000F0)
#define  TVSB4_TV_SB4_DCU1_queue_ctrl_wr_queue_num_mask                          (0x00000007)
#define  TVSB4_TV_SB4_DCU1_queue_ctrl_rd_queue_num(data)                         (0x000000F0&((data)<<4))
#define  TVSB4_TV_SB4_DCU1_queue_ctrl_wr_queue_num(data)                         (0x00000007&(data))
#define  TVSB4_TV_SB4_DCU1_queue_ctrl_get_rd_queue_num(data)                     ((0x000000F0&(data))>>4)
#define  TVSB4_TV_SB4_DCU1_queue_ctrl_get_wr_queue_num(data)                     (0x00000007&(data))

#define  TVSB4_TV_SB4_DCU1_error_status                                         0x1801C6FC
#define  TVSB4_TV_SB4_DCU1_error_status_reg_addr                                 "0xB801C6FC"
#define  TVSB4_TV_SB4_DCU1_error_status_reg                                      0xB801C6FC
#define  TVSB4_TV_SB4_DCU1_error_status_inst_addr                                "0x0025"
#define  set_TVSB4_TV_SB4_DCU1_error_status_reg(data)                            (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_error_status_reg)=data)
#define  get_TVSB4_TV_SB4_DCU1_error_status_reg                                  (*((volatile unsigned int*)TVSB4_TV_SB4_DCU1_error_status_reg))
#define  TVSB4_TV_SB4_DCU1_error_status_error_clr_shift                          (31)
#define  TVSB4_TV_SB4_DCU1_error_status_error_zero_length_id_shift               (12)
#define  TVSB4_TV_SB4_DCU1_error_status_error_read_full_shift                    (9)
#define  TVSB4_TV_SB4_DCU1_error_status_error_write_full_shift                   (8)
#define  TVSB4_TV_SB4_DCU1_error_status_error_clr_mask                           (0x80000000)
#define  TVSB4_TV_SB4_DCU1_error_status_error_zero_length_id_mask                (0x0000F000)
#define  TVSB4_TV_SB4_DCU1_error_status_error_read_full_mask                     (0x00000200)
#define  TVSB4_TV_SB4_DCU1_error_status_error_write_full_mask                    (0x00000100)
#define  TVSB4_TV_SB4_DCU1_error_status_error_clr(data)                          (0x80000000&((data)<<31))
#define  TVSB4_TV_SB4_DCU1_error_status_error_zero_length_id(data)               (0x0000F000&((data)<<12))
#define  TVSB4_TV_SB4_DCU1_error_status_error_read_full(data)                    (0x00000200&((data)<<9))
#define  TVSB4_TV_SB4_DCU1_error_status_error_write_full(data)                   (0x00000100&((data)<<8))
#define  TVSB4_TV_SB4_DCU1_error_status_get_error_clr(data)                      ((0x80000000&(data))>>31)
#define  TVSB4_TV_SB4_DCU1_error_status_get_error_zero_length_id(data)           ((0x0000F000&(data))>>12)
#define  TVSB4_TV_SB4_DCU1_error_status_get_error_read_full(data)                ((0x00000200&(data))>>9)
#define  TVSB4_TV_SB4_DCU1_error_status_get_error_write_full(data)               ((0x00000100&(data))>>8)

#define  TVSB4_TV_SB4_dummy_trc_0                                               0x1801C6B0
#define  TVSB4_TV_SB4_dummy_trc_0_reg_addr                                       "0xB801C6B0"
#define  TVSB4_TV_SB4_dummy_trc_0_reg                                            0xB801C6B0
#define  TVSB4_TV_SB4_dummy_trc_0_inst_addr                                      "0x0026"
#define  set_TVSB4_TV_SB4_dummy_trc_0_reg(data)                                  (*((volatile unsigned int*)TVSB4_TV_SB4_dummy_trc_0_reg)=data)
#define  get_TVSB4_TV_SB4_dummy_trc_0_reg                                        (*((volatile unsigned int*)TVSB4_TV_SB4_dummy_trc_0_reg))
#define  TVSB4_TV_SB4_dummy_trc_0_rw_type_shift                                  (28)
#define  TVSB4_TV_SB4_dummy_trc_0_bl_type_shift                                  (24)
#define  TVSB4_TV_SB4_dummy_trc_0_cmd_min_dly_shift                              (12)
#define  TVSB4_TV_SB4_dummy_trc_0_cmd_max_dly_shift                              (0)
#define  TVSB4_TV_SB4_dummy_trc_0_rw_type_mask                                   (0x30000000)
#define  TVSB4_TV_SB4_dummy_trc_0_bl_type_mask                                   (0x01000000)
#define  TVSB4_TV_SB4_dummy_trc_0_cmd_min_dly_mask                               (0x00FFF000)
#define  TVSB4_TV_SB4_dummy_trc_0_cmd_max_dly_mask                               (0x00000FFF)
#define  TVSB4_TV_SB4_dummy_trc_0_rw_type(data)                                  (0x30000000&((data)<<28))
#define  TVSB4_TV_SB4_dummy_trc_0_bl_type(data)                                  (0x01000000&((data)<<24))
#define  TVSB4_TV_SB4_dummy_trc_0_cmd_min_dly(data)                              (0x00FFF000&((data)<<12))
#define  TVSB4_TV_SB4_dummy_trc_0_cmd_max_dly(data)                              (0x00000FFF&(data))
#define  TVSB4_TV_SB4_dummy_trc_0_get_rw_type(data)                              ((0x30000000&(data))>>28)
#define  TVSB4_TV_SB4_dummy_trc_0_get_bl_type(data)                              ((0x01000000&(data))>>24)
#define  TVSB4_TV_SB4_dummy_trc_0_get_cmd_min_dly(data)                          ((0x00FFF000&(data))>>12)
#define  TVSB4_TV_SB4_dummy_trc_0_get_cmd_max_dly(data)                          (0x00000FFF&(data))

#define  TVSB4_TV_SB4_dummy_trc_1                                               0x1801C6B4
#define  TVSB4_TV_SB4_dummy_trc_1_reg_addr                                       "0xB801C6B4"
#define  TVSB4_TV_SB4_dummy_trc_1_reg                                            0xB801C6B4
#define  TVSB4_TV_SB4_dummy_trc_1_inst_addr                                      "0x0027"
#define  set_TVSB4_TV_SB4_dummy_trc_1_reg(data)                                  (*((volatile unsigned int*)TVSB4_TV_SB4_dummy_trc_1_reg)=data)
#define  get_TVSB4_TV_SB4_dummy_trc_1_reg                                        (*((volatile unsigned int*)TVSB4_TV_SB4_dummy_trc_1_reg))
#define  TVSB4_TV_SB4_dummy_trc_1_bl_64b_shift                                   (3)
#define  TVSB4_TV_SB4_dummy_trc_1_bl_64b_mask                                    (0x000007F8)
#define  TVSB4_TV_SB4_dummy_trc_1_bl_64b(data)                                   (0x000007F8&((data)<<3))
#define  TVSB4_TV_SB4_dummy_trc_1_get_bl_64b(data)                               ((0x000007F8&(data))>>3)

#define  TVSB4_TV_SB4_dummy_trc_2                                               0x1801C6B8
#define  TVSB4_TV_SB4_dummy_trc_2_reg_addr                                       "0xB801C6B8"
#define  TVSB4_TV_SB4_dummy_trc_2_reg                                            0xB801C6B8
#define  TVSB4_TV_SB4_dummy_trc_2_inst_addr                                      "0x0028"
#define  set_TVSB4_TV_SB4_dummy_trc_2_reg(data)                                  (*((volatile unsigned int*)TVSB4_TV_SB4_dummy_trc_2_reg)=data)
#define  get_TVSB4_TV_SB4_dummy_trc_2_reg                                        (*((volatile unsigned int*)TVSB4_TV_SB4_dummy_trc_2_reg))
#define  TVSB4_TV_SB4_dummy_trc_2_addr_64b_shift                                 (3)
#define  TVSB4_TV_SB4_dummy_trc_2_addr_64b_mask                                  (0xFFFFFFF8)
#define  TVSB4_TV_SB4_dummy_trc_2_addr_64b(data)                                 (0xFFFFFFF8&((data)<<3))
#define  TVSB4_TV_SB4_dummy_trc_2_get_addr_64b(data)                             ((0xFFFFFFF8&(data))>>3)

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======TVSB4 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sf_rx_mode:1;
        RBus_UInt32  sf_rx_start:1;
        RBus_UInt32  sf_tx_mode:1;
        RBus_UInt32  sf_tx_start:1;
        RBus_UInt32  sf_rx_gated:1;
        RBus_UInt32  dummy1801c600_26_16:11;
        RBus_UInt32  sf_rx_debug_bit_sel:8;
        RBus_UInt32  sf_rx_fail_bit_status:1;
        RBus_UInt32  sf_rx_done:1;
        RBus_UInt32  sf_rx_err:1;
        RBus_UInt32  sf_tx_work:1;
        RBus_UInt32  time_step:4;
    };
}tvsb4_tv_sb4_dcu1_arb_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  arb_en:9;
    };
}tvsb4_tv_sb4_dcu1_arb_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client0_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client0_latcnt_beg:8;
    };
}tvsb4_tv_sb4_dcu1_latcnt_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client1_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client1_latcnt_beg:8;
    };
}tvsb4_tv_sb4_dcu1_latcnt_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client2_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client2_latcnt_beg:8;
    };
}tvsb4_tv_sb4_dcu1_latcnt_cr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client4_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client4_latcnt_beg:8;
    };
}tvsb4_tv_sb4_dcu1_latcnt_cr5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client5_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client5_latcnt_beg:8;
    };
}tvsb4_tv_sb4_dcu1_latcnt_cr6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client6_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client6_latcnt_beg:8;
    };
}tvsb4_tv_sb4_dcu1_latcnt_cr7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client7_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client7_latcnt_beg:8;
    };
}tvsb4_tv_sb4_dcu1_latcnt_cr8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client8_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client8_latcnt_beg:8;
    };
}tvsb4_tv_sb4_dcu1_latcnt_cr9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  pc_rd_only:1;
        RBus_UInt32  pc_go:1;
    };
}tvsb4_tv_sb4_dcu1_pc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_mon_num:32;
    };
}tvsb4_tv_sb4_dcu1_pc_tota_mon_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_ack_num:32;
    };
}tvsb4_tv_sb4_dcu1_pc_tota_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_idl_num:32;
    };
}tvsb4_tv_sb4_dcu1_pc_tota_idl_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  pc_prog2_sel:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  pc_prog1_sel:4;
        RBus_UInt32  res3:4;
        RBus_UInt32  pc_prog0_sel:4;
    };
}tvsb4_tv_sb4_dcu1_pc_prog_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  pc_prog2_req_occur:1;
        RBus_UInt32  pc_prog1_req_occur:1;
        RBus_UInt32  pc_prog0_req_occur:1;
    };
}tvsb4_tv_sb4_dcu1_pc_prog_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  prog_channel_sel:2;
    };
}tvsb4_tv_sb4_dcu1_pc_prog_0_channel_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_acc_lat:32;
    };
}tvsb4_tv_sb4_dcu1_pc_prog_0_acc_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  prog_max_lat:16;
    };
}tvsb4_tv_sb4_dcu1_pc_prog_0_max_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  prog_req_num:24;
    };
}tvsb4_tv_sb4_dcu1_pc_prog_0_req_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_ack_num:32;
    };
}tvsb4_tv_sb4_dcu1_pc_prog_0_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  prog_hitend_cnt:16;
    };
}tvsb4_tv_sb4_dcu1_pc_prog_0_hitend_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  bt_done:2;
        RBus_UInt32  bt_bl:1;
        RBus_UInt32  bt_data_inv:1;
        RBus_UInt32  bt_rw:1;
        RBus_UInt32  bt_go:1;
    };
}tvsb4_tv_sb4_dcu1_bridge_test_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bt_addr_data:28;
        RBus_UInt32  res1:4;
    };
}tvsb4_tv_sb4_dcu1_bridge_test_addr_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  sb_req:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  sb_gnt:9;
    };
}tvsb4_tv_sb4_dcu1_arb_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  time_stamp_sel:4;
        RBus_UInt32  time_stamp:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  win_latcnt:8;
    };
}tvsb4_tv_sb4_dcu1_arb_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  sb_debug_mode:4;
    };
}tvsb4_tv_sb4_dcu1_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_0:8;
        RBus_UInt32  req_thr_0:8;
        RBus_UInt32  time_thr_0:16;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_1:8;
        RBus_UInt32  req_thr_1:8;
        RBus_UInt32  time_thr_1:16;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_2:8;
        RBus_UInt32  req_thr_2:8;
        RBus_UInt32  time_thr_2:16;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_4:8;
        RBus_UInt32  req_thr_4:8;
        RBus_UInt32  time_thr_4:16;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_5:8;
        RBus_UInt32  req_thr_5:8;
        RBus_UInt32  time_thr_5:16;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_6:8;
        RBus_UInt32  req_thr_6:8;
        RBus_UInt32  time_thr_6:16;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_7:8;
        RBus_UInt32  req_thr_7:8;
        RBus_UInt32  time_thr_7:16;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_8:8;
        RBus_UInt32  req_thr_8:8;
        RBus_UInt32  time_thr_8:16;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  len_scheme_en:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  bw_status_clr_8:1;
        RBus_UInt32  bw_limit_en_8:1;
        RBus_UInt32  bw_status_clr_7:1;
        RBus_UInt32  bw_limit_en_7:1;
        RBus_UInt32  bw_status_clr_6:1;
        RBus_UInt32  bw_limit_en_6:1;
        RBus_UInt32  bw_status_clr_5:1;
        RBus_UInt32  bw_limit_en_5:1;
        RBus_UInt32  bw_status_clr_4:1;
        RBus_UInt32  bw_limit_en_4:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  bw_status_clr_2:1;
        RBus_UInt32  bw_limit_en_2:1;
        RBus_UInt32  bw_status_clr_1:1;
        RBus_UInt32  bw_limit_en_1:1;
        RBus_UInt32  bw_status_clr_0:1;
        RBus_UInt32  bw_limit_en_0:1;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rd_queue_num:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  wr_queue_num:3;
    };
}tvsb4_tv_sb4_dcu1_queue_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  error_clr:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  error_zero_length_id:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  error_read_full:1;
        RBus_UInt32  error_write_full:1;
        RBus_UInt32  res3:8;
    };
}tvsb4_tv_sb4_dcu1_error_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  rw_type:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  bl_type:1;
        RBus_UInt32  cmd_min_dly:12;
        RBus_UInt32  cmd_max_dly:12;
    };
}tvsb4_tv_sb4_dummy_trc_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  bl_64b:8;
        RBus_UInt32  res2:3;
    };
}tvsb4_tv_sb4_dummy_trc_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_64b:29;
        RBus_UInt32  res1:3;
    };
}tvsb4_tv_sb4_dummy_trc_2_RBUS;

#else //apply LITTLE_ENDIAN

//======TVSB4 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_step:4;
        RBus_UInt32  sf_tx_work:1;
        RBus_UInt32  sf_rx_err:1;
        RBus_UInt32  sf_rx_done:1;
        RBus_UInt32  sf_rx_fail_bit_status:1;
        RBus_UInt32  sf_rx_debug_bit_sel:8;
        RBus_UInt32  dummy1801c600_26_16:11;
        RBus_UInt32  sf_rx_gated:1;
        RBus_UInt32  sf_tx_start:1;
        RBus_UInt32  sf_tx_mode:1;
        RBus_UInt32  sf_rx_start:1;
        RBus_UInt32  sf_rx_mode:1;
    };
}tvsb4_tv_sb4_dcu1_arb_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  arb_en:9;
        RBus_UInt32  res1:23;
    };
}tvsb4_tv_sb4_dcu1_arb_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client0_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client0_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}tvsb4_tv_sb4_dcu1_latcnt_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client1_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client1_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}tvsb4_tv_sb4_dcu1_latcnt_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client2_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client2_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}tvsb4_tv_sb4_dcu1_latcnt_cr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client4_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client4_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}tvsb4_tv_sb4_dcu1_latcnt_cr5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client5_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client5_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}tvsb4_tv_sb4_dcu1_latcnt_cr6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client6_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client6_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}tvsb4_tv_sb4_dcu1_latcnt_cr7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client7_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client7_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}tvsb4_tv_sb4_dcu1_latcnt_cr8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client8_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client8_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}tvsb4_tv_sb4_dcu1_latcnt_cr9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_go:1;
        RBus_UInt32  pc_rd_only:1;
        RBus_UInt32  res1:30;
    };
}tvsb4_tv_sb4_dcu1_pc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_mon_num:32;
    };
}tvsb4_tv_sb4_dcu1_pc_tota_mon_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_ack_num:32;
    };
}tvsb4_tv_sb4_dcu1_pc_tota_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_idl_num:32;
    };
}tvsb4_tv_sb4_dcu1_pc_tota_idl_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_prog0_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pc_prog1_sel:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  pc_prog2_sel:4;
        RBus_UInt32  res3:12;
    };
}tvsb4_tv_sb4_dcu1_pc_prog_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_prog0_req_occur:1;
        RBus_UInt32  pc_prog1_req_occur:1;
        RBus_UInt32  pc_prog2_req_occur:1;
        RBus_UInt32  res1:29;
    };
}tvsb4_tv_sb4_dcu1_pc_prog_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_channel_sel:2;
        RBus_UInt32  res1:30;
    };
}tvsb4_tv_sb4_dcu1_pc_prog_0_channel_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_acc_lat:32;
    };
}tvsb4_tv_sb4_dcu1_pc_prog_0_acc_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_max_lat:16;
        RBus_UInt32  res1:16;
    };
}tvsb4_tv_sb4_dcu1_pc_prog_0_max_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_req_num:24;
        RBus_UInt32  res1:8;
    };
}tvsb4_tv_sb4_dcu1_pc_prog_0_req_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_ack_num:32;
    };
}tvsb4_tv_sb4_dcu1_pc_prog_0_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_hitend_cnt:16;
        RBus_UInt32  res1:16;
    };
}tvsb4_tv_sb4_dcu1_pc_prog_0_hitend_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bt_go:1;
        RBus_UInt32  bt_rw:1;
        RBus_UInt32  bt_data_inv:1;
        RBus_UInt32  bt_bl:1;
        RBus_UInt32  bt_done:2;
        RBus_UInt32  res1:26;
    };
}tvsb4_tv_sb4_dcu1_bridge_test_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bt_addr_data:28;
    };
}tvsb4_tv_sb4_dcu1_bridge_test_addr_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sb_gnt:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  sb_req:9;
        RBus_UInt32  res2:7;
    };
}tvsb4_tv_sb4_dcu1_arb_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  win_latcnt:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  time_stamp:8;
        RBus_UInt32  time_stamp_sel:4;
        RBus_UInt32  res2:4;
    };
}tvsb4_tv_sb4_dcu1_arb_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sb_debug_mode:4;
        RBus_UInt32  res1:28;
    };
}tvsb4_tv_sb4_dcu1_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_0:16;
        RBus_UInt32  req_thr_0:8;
        RBus_UInt32  max_req_num_0:8;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_1:16;
        RBus_UInt32  req_thr_1:8;
        RBus_UInt32  max_req_num_1:8;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_2:16;
        RBus_UInt32  req_thr_2:8;
        RBus_UInt32  max_req_num_2:8;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_4:16;
        RBus_UInt32  req_thr_4:8;
        RBus_UInt32  max_req_num_4:8;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_5:16;
        RBus_UInt32  req_thr_5:8;
        RBus_UInt32  max_req_num_5:8;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_6:16;
        RBus_UInt32  req_thr_6:8;
        RBus_UInt32  max_req_num_6:8;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_7:16;
        RBus_UInt32  req_thr_7:8;
        RBus_UInt32  max_req_num_7:8;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_8:16;
        RBus_UInt32  req_thr_8:8;
        RBus_UInt32  max_req_num_8:8;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bw_limit_en_0:1;
        RBus_UInt32  bw_status_clr_0:1;
        RBus_UInt32  bw_limit_en_1:1;
        RBus_UInt32  bw_status_clr_1:1;
        RBus_UInt32  bw_limit_en_2:1;
        RBus_UInt32  bw_status_clr_2:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  bw_limit_en_4:1;
        RBus_UInt32  bw_status_clr_4:1;
        RBus_UInt32  bw_limit_en_5:1;
        RBus_UInt32  bw_status_clr_5:1;
        RBus_UInt32  bw_limit_en_6:1;
        RBus_UInt32  bw_status_clr_6:1;
        RBus_UInt32  bw_limit_en_7:1;
        RBus_UInt32  bw_status_clr_7:1;
        RBus_UInt32  bw_limit_en_8:1;
        RBus_UInt32  bw_status_clr_8:1;
        RBus_UInt32  res2:13;
        RBus_UInt32  len_scheme_en:1;
    };
}tvsb4_tv_sb4_dcu1_bw_limit_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_queue_num:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  rd_queue_num:4;
        RBus_UInt32  res2:24;
    };
}tvsb4_tv_sb4_dcu1_queue_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  error_write_full:1;
        RBus_UInt32  error_read_full:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  error_zero_length_id:4;
        RBus_UInt32  res3:15;
        RBus_UInt32  error_clr:1;
    };
}tvsb4_tv_sb4_dcu1_error_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmd_max_dly:12;
        RBus_UInt32  cmd_min_dly:12;
        RBus_UInt32  bl_type:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  rw_type:2;
        RBus_UInt32  res2:2;
    };
}tvsb4_tv_sb4_dummy_trc_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  bl_64b:8;
        RBus_UInt32  res2:21;
    };
}tvsb4_tv_sb4_dummy_trc_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  addr_64b:29;
    };
}tvsb4_tv_sb4_dummy_trc_2_RBUS;




#endif 


#endif 
