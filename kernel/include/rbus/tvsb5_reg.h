/**
* @file Merlin5-DesignSpec-TV-SB5-DCU1
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_TVSB5_REG_H_
#define _RBUS_TVSB5_REG_H_

#include "rbus_types.h"



//  TVSB5 Register Address
#define  TVSB5_TV_SB5_DCU1_ARB_CR0                                              0x1801C700
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_reg_addr                                      "0xB801C700"
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_reg                                           0xB801C700
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_inst_addr                                     "0x0000"
#define  set_TVSB5_TV_SB5_DCU1_ARB_CR0_reg(data)                                 (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_ARB_CR0_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_ARB_CR0_reg                                       (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_ARB_CR0_reg))
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_mode_shift                              (31)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_start_shift                             (30)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_tx_mode_shift                              (29)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_tx_start_shift                             (28)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_gated_shift                             (27)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_dummy_26_16_shift                             (16)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_debug_bit_sel_shift                     (8)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_fail_bit_status_shift                   (7)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_done_shift                              (6)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_err_shift                               (5)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_tx_work_shift                              (4)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_time_step_shift                               (0)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_mode_mask                               (0x80000000)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_start_mask                              (0x40000000)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_tx_mode_mask                               (0x20000000)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_tx_start_mask                              (0x10000000)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_gated_mask                              (0x08000000)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_dummy_26_16_mask                              (0x07FF0000)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_debug_bit_sel_mask                      (0x0000FF00)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_fail_bit_status_mask                    (0x00000080)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_done_mask                               (0x00000040)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_err_mask                                (0x00000020)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_tx_work_mask                               (0x00000010)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_time_step_mask                                (0x0000000F)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_mode(data)                              (0x80000000&((data)<<31))
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_start(data)                             (0x40000000&((data)<<30))
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_tx_mode(data)                              (0x20000000&((data)<<29))
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_tx_start(data)                             (0x10000000&((data)<<28))
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_gated(data)                             (0x08000000&((data)<<27))
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_dummy_26_16(data)                             (0x07FF0000&((data)<<16))
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_debug_bit_sel(data)                     (0x0000FF00&((data)<<8))
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_fail_bit_status(data)                   (0x00000080&((data)<<7))
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_done(data)                              (0x00000040&((data)<<6))
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_rx_err(data)                               (0x00000020&((data)<<5))
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_sf_tx_work(data)                              (0x00000010&((data)<<4))
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_time_step(data)                               (0x0000000F&(data))
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_get_sf_rx_mode(data)                          ((0x80000000&(data))>>31)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_get_sf_rx_start(data)                         ((0x40000000&(data))>>30)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_get_sf_tx_mode(data)                          ((0x20000000&(data))>>29)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_get_sf_tx_start(data)                         ((0x10000000&(data))>>28)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_get_sf_rx_gated(data)                         ((0x08000000&(data))>>27)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_get_dummy_26_16(data)                         ((0x07FF0000&(data))>>16)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_get_sf_rx_debug_bit_sel(data)                 ((0x0000FF00&(data))>>8)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_get_sf_rx_fail_bit_status(data)               ((0x00000080&(data))>>7)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_get_sf_rx_done(data)                          ((0x00000040&(data))>>6)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_get_sf_rx_err(data)                           ((0x00000020&(data))>>5)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_get_sf_tx_work(data)                          ((0x00000010&(data))>>4)
#define  TVSB5_TV_SB5_DCU1_ARB_CR0_get_time_step(data)                           (0x0000000F&(data))

#define  TVSB5_TV_SB5_DCU1_ARB_CR2                                              0x1801C720
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_reg_addr                                      "0xB801C720"
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_reg                                           0xB801C720
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_inst_addr                                     "0x0001"
#define  set_TVSB5_TV_SB5_DCU1_ARB_CR2_reg(data)                                 (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_ARB_CR2_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_ARB_CR2_reg                                       (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_ARB_CR2_reg))
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_mode_shift                         (31)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_start_shift                        (30)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_tx_mode_shift                         (29)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_tx_start_shift                        (28)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_gated_shift                        (27)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_dummy_26_16_shift                             (16)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_debug_bit_sel_shift                (8)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_fail_bit_status_shift              (7)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_done_shift                         (6)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_err_shift                          (5)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_tx_work_shift                         (4)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_mode_mask                          (0x80000000)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_start_mask                         (0x40000000)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_tx_mode_mask                          (0x20000000)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_tx_start_mask                         (0x10000000)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_gated_mask                         (0x08000000)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_dummy_26_16_mask                              (0x07FF0000)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_debug_bit_sel_mask                 (0x0000FF00)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_fail_bit_status_mask               (0x00000080)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_done_mask                          (0x00000040)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_err_mask                           (0x00000020)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_tx_work_mask                          (0x00000010)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_mode(data)                         (0x80000000&((data)<<31))
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_start(data)                        (0x40000000&((data)<<30))
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_tx_mode(data)                         (0x20000000&((data)<<29))
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_tx_start(data)                        (0x10000000&((data)<<28))
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_gated(data)                        (0x08000000&((data)<<27))
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_dummy_26_16(data)                             (0x07FF0000&((data)<<16))
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_debug_bit_sel(data)                (0x0000FF00&((data)<<8))
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_fail_bit_status(data)              (0x00000080&((data)<<7))
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_done(data)                         (0x00000040&((data)<<6))
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_rx_err(data)                          (0x00000020&((data)<<5))
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_usb3_sf_tx_work(data)                         (0x00000010&((data)<<4))
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_get_usb3_sf_rx_mode(data)                     ((0x80000000&(data))>>31)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_get_usb3_sf_rx_start(data)                    ((0x40000000&(data))>>30)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_get_usb3_sf_tx_mode(data)                     ((0x20000000&(data))>>29)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_get_usb3_sf_tx_start(data)                    ((0x10000000&(data))>>28)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_get_usb3_sf_rx_gated(data)                    ((0x08000000&(data))>>27)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_get_dummy_26_16(data)                         ((0x07FF0000&(data))>>16)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_get_usb3_sf_rx_debug_bit_sel(data)            ((0x0000FF00&(data))>>8)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_get_usb3_sf_rx_fail_bit_status(data)          ((0x00000080&(data))>>7)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_get_usb3_sf_rx_done(data)                     ((0x00000040&(data))>>6)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_get_usb3_sf_rx_err(data)                      ((0x00000020&(data))>>5)
#define  TVSB5_TV_SB5_DCU1_ARB_CR2_get_usb3_sf_tx_work(data)                     ((0x00000010&(data))>>4)

#define  TVSB5_TV_SB5_DCU1_ARB_CR1                                              0x1801C704
#define  TVSB5_TV_SB5_DCU1_ARB_CR1_reg_addr                                      "0xB801C704"
#define  TVSB5_TV_SB5_DCU1_ARB_CR1_reg                                           0xB801C704
#define  TVSB5_TV_SB5_DCU1_ARB_CR1_inst_addr                                     "0x0002"
#define  set_TVSB5_TV_SB5_DCU1_ARB_CR1_reg(data)                                 (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_ARB_CR1_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_ARB_CR1_reg                                       (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_ARB_CR1_reg))
#define  TVSB5_TV_SB5_DCU1_ARB_CR1_arb_en_shift                                  (0)
#define  TVSB5_TV_SB5_DCU1_ARB_CR1_arb_en_mask                                   (0x0000000F)
#define  TVSB5_TV_SB5_DCU1_ARB_CR1_arb_en(data)                                  (0x0000000F&(data))
#define  TVSB5_TV_SB5_DCU1_ARB_CR1_get_arb_en(data)                              (0x0000000F&(data))

#define  TVSB5_TV_SB5_DCU1_LATCNT_CR1                                           0x1801C708
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR1_reg_addr                                   "0xB801C708"
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR1_reg                                        0xB801C708
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR1_inst_addr                                  "0x0003"
#define  set_TVSB5_TV_SB5_DCU1_LATCNT_CR1_reg(data)                              (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_LATCNT_CR1_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_LATCNT_CR1_reg                                    (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_LATCNT_CR1_reg))
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR1_client0_latcnt_end_shift                   (16)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR1_client0_latcnt_beg_shift                   (0)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR1_client0_latcnt_end_mask                    (0x00FF0000)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR1_client0_latcnt_beg_mask                    (0x000000FF)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR1_client0_latcnt_end(data)                   (0x00FF0000&((data)<<16))
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR1_client0_latcnt_beg(data)                   (0x000000FF&(data))
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR1_get_client0_latcnt_end(data)               ((0x00FF0000&(data))>>16)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR1_get_client0_latcnt_beg(data)               (0x000000FF&(data))

#define  TVSB5_TV_SB5_DCU1_LATCNT_CR2                                           0x1801C70C
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR2_reg_addr                                   "0xB801C70C"
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR2_reg                                        0xB801C70C
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR2_inst_addr                                  "0x0004"
#define  set_TVSB5_TV_SB5_DCU1_LATCNT_CR2_reg(data)                              (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_LATCNT_CR2_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_LATCNT_CR2_reg                                    (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_LATCNT_CR2_reg))
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR2_client1_latcnt_end_shift                   (16)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR2_client1_latcnt_beg_shift                   (0)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR2_client1_latcnt_end_mask                    (0x00FF0000)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR2_client1_latcnt_beg_mask                    (0x000000FF)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR2_client1_latcnt_end(data)                   (0x00FF0000&((data)<<16))
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR2_client1_latcnt_beg(data)                   (0x000000FF&(data))
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR2_get_client1_latcnt_end(data)               ((0x00FF0000&(data))>>16)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR2_get_client1_latcnt_beg(data)               (0x000000FF&(data))

#define  TVSB5_TV_SB5_DCU1_LATCNT_CR3                                           0x1801C710
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR3_reg_addr                                   "0xB801C710"
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR3_reg                                        0xB801C710
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR3_inst_addr                                  "0x0005"
#define  set_TVSB5_TV_SB5_DCU1_LATCNT_CR3_reg(data)                              (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_LATCNT_CR3_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_LATCNT_CR3_reg                                    (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_LATCNT_CR3_reg))
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR3_client2_latcnt_end_shift                   (16)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR3_client2_latcnt_beg_shift                   (0)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR3_client2_latcnt_end_mask                    (0x00FF0000)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR3_client2_latcnt_beg_mask                    (0x000000FF)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR3_client2_latcnt_end(data)                   (0x00FF0000&((data)<<16))
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR3_client2_latcnt_beg(data)                   (0x000000FF&(data))
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR3_get_client2_latcnt_end(data)               ((0x00FF0000&(data))>>16)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR3_get_client2_latcnt_beg(data)               (0x000000FF&(data))

#define  TVSB5_TV_SB5_DCU1_LATCNT_CR4                                           0x1801C714
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR4_reg_addr                                   "0xB801C714"
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR4_reg                                        0xB801C714
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR4_inst_addr                                  "0x0006"
#define  set_TVSB5_TV_SB5_DCU1_LATCNT_CR4_reg(data)                              (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_LATCNT_CR4_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_LATCNT_CR4_reg                                    (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_LATCNT_CR4_reg))
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR4_client3_latcnt_end_shift                   (16)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR4_client3_latcnt_beg_shift                   (0)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR4_client3_latcnt_end_mask                    (0x00FF0000)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR4_client3_latcnt_beg_mask                    (0x000000FF)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR4_client3_latcnt_end(data)                   (0x00FF0000&((data)<<16))
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR4_client3_latcnt_beg(data)                   (0x000000FF&(data))
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR4_get_client3_latcnt_end(data)               ((0x00FF0000&(data))>>16)
#define  TVSB5_TV_SB5_DCU1_LATCNT_CR4_get_client3_latcnt_beg(data)               (0x000000FF&(data))

#define  TVSB5_TV_SB5_DCU1_PC_CTRL                                              0x1801C750
#define  TVSB5_TV_SB5_DCU1_PC_CTRL_reg_addr                                      "0xB801C750"
#define  TVSB5_TV_SB5_DCU1_PC_CTRL_reg                                           0xB801C750
#define  TVSB5_TV_SB5_DCU1_PC_CTRL_inst_addr                                     "0x0007"
#define  set_TVSB5_TV_SB5_DCU1_PC_CTRL_reg(data)                                 (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_CTRL_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_PC_CTRL_reg                                       (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_CTRL_reg))
#define  TVSB5_TV_SB5_DCU1_PC_CTRL_pc_rd_only_shift                              (1)
#define  TVSB5_TV_SB5_DCU1_PC_CTRL_pc_go_shift                                   (0)
#define  TVSB5_TV_SB5_DCU1_PC_CTRL_pc_rd_only_mask                               (0x00000002)
#define  TVSB5_TV_SB5_DCU1_PC_CTRL_pc_go_mask                                    (0x00000001)
#define  TVSB5_TV_SB5_DCU1_PC_CTRL_pc_rd_only(data)                              (0x00000002&((data)<<1))
#define  TVSB5_TV_SB5_DCU1_PC_CTRL_pc_go(data)                                   (0x00000001&(data))
#define  TVSB5_TV_SB5_DCU1_PC_CTRL_get_pc_rd_only(data)                          ((0x00000002&(data))>>1)
#define  TVSB5_TV_SB5_DCU1_PC_CTRL_get_pc_go(data)                               (0x00000001&(data))

#define  TVSB5_TV_SB5_DCU1_PC_TOTA_MON_NUM                                      0x1801C754
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_MON_NUM_reg_addr                              "0xB801C754"
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_MON_NUM_reg                                   0xB801C754
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_MON_NUM_inst_addr                             "0x0008"
#define  set_TVSB5_TV_SB5_DCU1_PC_TOTA_MON_NUM_reg(data)                         (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_TOTA_MON_NUM_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_PC_TOTA_MON_NUM_reg                               (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_TOTA_MON_NUM_reg))
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_MON_NUM_pc_tota_mon_num_shift                 (0)
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_MON_NUM_pc_tota_mon_num_mask                  (0xFFFFFFFF)
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_MON_NUM_pc_tota_mon_num(data)                 (0xFFFFFFFF&(data))
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_MON_NUM_get_pc_tota_mon_num(data)             (0xFFFFFFFF&(data))

#define  TVSB5_TV_SB5_DCU1_PC_TOTA_ACK_NUM                                      0x1801C758
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_ACK_NUM_reg_addr                              "0xB801C758"
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_ACK_NUM_reg                                   0xB801C758
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_ACK_NUM_inst_addr                             "0x0009"
#define  set_TVSB5_TV_SB5_DCU1_PC_TOTA_ACK_NUM_reg(data)                         (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_TOTA_ACK_NUM_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_PC_TOTA_ACK_NUM_reg                               (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_TOTA_ACK_NUM_reg))
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_ACK_NUM_pc_tota_ack_num_shift                 (0)
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_ACK_NUM_pc_tota_ack_num_mask                  (0xFFFFFFFF)
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_ACK_NUM_pc_tota_ack_num(data)                 (0xFFFFFFFF&(data))
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_ACK_NUM_get_pc_tota_ack_num(data)             (0xFFFFFFFF&(data))

#define  TVSB5_TV_SB5_DCU1_PC_TOTA_IDL_NUM                                      0x1801C75C
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_IDL_NUM_reg_addr                              "0xB801C75C"
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_IDL_NUM_reg                                   0xB801C75C
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_IDL_NUM_inst_addr                             "0x000A"
#define  set_TVSB5_TV_SB5_DCU1_PC_TOTA_IDL_NUM_reg(data)                         (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_TOTA_IDL_NUM_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_PC_TOTA_IDL_NUM_reg                               (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_TOTA_IDL_NUM_reg))
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_IDL_NUM_pc_tota_idl_num_shift                 (0)
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_IDL_NUM_pc_tota_idl_num_mask                  (0xFFFFFFFF)
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_IDL_NUM_pc_tota_idl_num(data)                 (0xFFFFFFFF&(data))
#define  TVSB5_TV_SB5_DCU1_PC_TOTA_IDL_NUM_get_pc_tota_idl_num(data)             (0xFFFFFFFF&(data))

#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl1                                        0x1801C760
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_reg_addr                                "0xB801C760"
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_reg                                     0xB801C760
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_inst_addr                               "0x000B"
#define  set_TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_reg(data)                           (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_reg                                 (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_reg))
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_pc_prog2_sel_shift                      (16)
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_pc_prog1_sel_shift                      (8)
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_pc_prog0_sel_shift                      (0)
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_pc_prog2_sel_mask                       (0x000F0000)
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_pc_prog1_sel_mask                       (0x00000F00)
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_pc_prog0_sel_mask                       (0x0000000F)
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_pc_prog2_sel(data)                      (0x000F0000&((data)<<16))
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_pc_prog1_sel(data)                      (0x00000F00&((data)<<8))
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_pc_prog0_sel(data)                      (0x0000000F&(data))
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_get_pc_prog2_sel(data)                  ((0x000F0000&(data))>>16)
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_get_pc_prog1_sel(data)                  ((0x00000F00&(data))>>8)
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl1_get_pc_prog0_sel(data)                  (0x0000000F&(data))

#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl2                                        0x1801C764
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_reg_addr                                "0xB801C764"
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_reg                                     0xB801C764
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_inst_addr                               "0x000C"
#define  set_TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_reg(data)                           (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_reg                                 (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_reg))
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_pc_prog2_req_occur_shift                (2)
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_pc_prog1_req_occur_shift                (1)
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_pc_prog0_req_occur_shift                (0)
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_pc_prog2_req_occur_mask                 (0x00000004)
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_pc_prog1_req_occur_mask                 (0x00000002)
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_pc_prog0_req_occur_mask                 (0x00000001)
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_pc_prog2_req_occur(data)                (0x00000004&((data)<<2))
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_pc_prog1_req_occur(data)                (0x00000002&((data)<<1))
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_pc_prog0_req_occur(data)                (0x00000001&(data))
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_get_pc_prog2_req_occur(data)            ((0x00000004&(data))>>2)
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_get_pc_prog1_req_occur(data)            ((0x00000002&(data))>>1)
#define  TVSB5_TV_SB5_DCU1_PC_prog_ctrl2_get_pc_prog0_req_occur(data)            (0x00000001&(data))

#define  TVSB5_TV_SB5_DCU1_PC_prog_0_channel_sel                                0x1801C768
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_channel_sel_reg_addr                        "0xB801C768"
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_channel_sel_reg                             0xB801C768
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_channel_sel_inst_addr                       "0x000D"
#define  set_TVSB5_TV_SB5_DCU1_PC_prog_0_channel_sel_reg(data)                   (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_prog_0_channel_sel_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_PC_prog_0_channel_sel_reg                         (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_prog_0_channel_sel_reg))
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_channel_sel_prog_channel_sel_shift          (0)
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_channel_sel_prog_channel_sel_mask           (0x00000003)
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_channel_sel_prog_channel_sel(data)          (0x00000003&(data))
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_channel_sel_get_prog_channel_sel(data)      (0x00000003&(data))

#define  TVSB5_TV_SB5_DCU1_PC_prog_0_acc_lat                                    0x1801C76C
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_acc_lat_reg_addr                            "0xB801C76C"
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_acc_lat_reg                                 0xB801C76C
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_acc_lat_inst_addr                           "0x000E"
#define  set_TVSB5_TV_SB5_DCU1_PC_prog_0_acc_lat_reg(data)                       (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_prog_0_acc_lat_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_PC_prog_0_acc_lat_reg                             (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_prog_0_acc_lat_reg))
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_acc_lat_prog_acc_lat_shift                  (0)
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_acc_lat_prog_acc_lat_mask                   (0xFFFFFFFF)
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_acc_lat_prog_acc_lat(data)                  (0xFFFFFFFF&(data))
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_acc_lat_get_prog_acc_lat(data)              (0xFFFFFFFF&(data))

#define  TVSB5_TV_SB5_DCU1_PC_prog_0_max_lat                                    0x1801C770
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_max_lat_reg_addr                            "0xB801C770"
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_max_lat_reg                                 0xB801C770
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_max_lat_inst_addr                           "0x000F"
#define  set_TVSB5_TV_SB5_DCU1_PC_prog_0_max_lat_reg(data)                       (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_prog_0_max_lat_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_PC_prog_0_max_lat_reg                             (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_prog_0_max_lat_reg))
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_max_lat_prog_max_lat_shift                  (0)
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_max_lat_prog_max_lat_mask                   (0x0000FFFF)
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_max_lat_prog_max_lat(data)                  (0x0000FFFF&(data))
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_max_lat_get_prog_max_lat(data)              (0x0000FFFF&(data))

#define  TVSB5_TV_SB5_DCU1_PC_prog_0_req_num                                    0x1801C774
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_req_num_reg_addr                            "0xB801C774"
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_req_num_reg                                 0xB801C774
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_req_num_inst_addr                           "0x0010"
#define  set_TVSB5_TV_SB5_DCU1_PC_prog_0_req_num_reg(data)                       (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_prog_0_req_num_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_PC_prog_0_req_num_reg                             (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_prog_0_req_num_reg))
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_req_num_prog_req_num_shift                  (0)
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_req_num_prog_req_num_mask                   (0x00FFFFFF)
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_req_num_prog_req_num(data)                  (0x00FFFFFF&(data))
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_req_num_get_prog_req_num(data)              (0x00FFFFFF&(data))

#define  TVSB5_TV_SB5_DCU1_PC_prog_0_ack_num                                    0x1801C778
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_ack_num_reg_addr                            "0xB801C778"
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_ack_num_reg                                 0xB801C778
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_ack_num_inst_addr                           "0x0011"
#define  set_TVSB5_TV_SB5_DCU1_PC_prog_0_ack_num_reg(data)                       (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_prog_0_ack_num_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_PC_prog_0_ack_num_reg                             (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_prog_0_ack_num_reg))
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_ack_num_prog_ack_num_shift                  (0)
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_ack_num_prog_ack_num_mask                   (0xFFFFFFFF)
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_ack_num_prog_ack_num(data)                  (0xFFFFFFFF&(data))
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_ack_num_get_prog_ack_num(data)              (0xFFFFFFFF&(data))

#define  TVSB5_TV_SB5_DCU1_PC_prog_0_hitend                                     0x1801C77C
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_hitend_reg_addr                             "0xB801C77C"
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_hitend_reg                                  0xB801C77C
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_hitend_inst_addr                            "0x0012"
#define  set_TVSB5_TV_SB5_DCU1_PC_prog_0_hitend_reg(data)                        (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_prog_0_hitend_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_PC_prog_0_hitend_reg                              (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_PC_prog_0_hitend_reg))
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_hitend_prog_hitend_cnt_shift                (0)
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_hitend_prog_hitend_cnt_mask                 (0x0000FFFF)
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_hitend_prog_hitend_cnt(data)                (0x0000FFFF&(data))
#define  TVSB5_TV_SB5_DCU1_PC_prog_0_hitend_get_prog_hitend_cnt(data)            (0x0000FFFF&(data))

#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL                                     0x1801C7D0
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_reg_addr                             "0xB801C7D0"
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_reg                                  0xB801C7D0
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_inst_addr                            "0x0013"
#define  set_TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_reg(data)                        (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_reg                              (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_reg))
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_bt_done_shift                        (4)
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_bt_bl_shift                          (3)
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_bt_data_inv_shift                    (2)
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_bt_rw_shift                          (1)
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_bt_go_shift                          (0)
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_bt_done_mask                         (0x00000030)
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_bt_bl_mask                           (0x00000008)
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_bt_data_inv_mask                     (0x00000004)
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_bt_rw_mask                           (0x00000002)
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_bt_go_mask                           (0x00000001)
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_bt_done(data)                        (0x00000030&((data)<<4))
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_bt_bl(data)                          (0x00000008&((data)<<3))
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_bt_data_inv(data)                    (0x00000004&((data)<<2))
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_bt_rw(data)                          (0x00000002&((data)<<1))
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_bt_go(data)                          (0x00000001&(data))
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_get_bt_done(data)                    ((0x00000030&(data))>>4)
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_get_bt_bl(data)                      ((0x00000008&(data))>>3)
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_get_bt_data_inv(data)                ((0x00000004&(data))>>2)
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_get_bt_rw(data)                      ((0x00000002&(data))>>1)
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_CTRL_get_bt_go(data)                      (0x00000001&(data))

#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_ADDR_DATA                                0x1801C7D4
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_ADDR_DATA_reg_addr                        "0xB801C7D4"
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_ADDR_DATA_reg                             0xB801C7D4
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_ADDR_DATA_inst_addr                       "0x0014"
#define  set_TVSB5_TV_SB5_DCU1_BRIDGE_TEST_ADDR_DATA_reg(data)                   (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_BRIDGE_TEST_ADDR_DATA_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_BRIDGE_TEST_ADDR_DATA_reg                         (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_BRIDGE_TEST_ADDR_DATA_reg))
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_ADDR_DATA_bt_addr_data_shift              (4)
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_ADDR_DATA_bt_addr_data_mask               (0xFFFFFFF0)
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_ADDR_DATA_bt_addr_data(data)              (0xFFFFFFF0&((data)<<4))
#define  TVSB5_TV_SB5_DCU1_BRIDGE_TEST_ADDR_DATA_get_bt_addr_data(data)          ((0xFFFFFFF0&(data))>>4)

#define  TVSB5_TV_SB5_DCU1_ARB_SR0                                              0x1801C7C8
#define  TVSB5_TV_SB5_DCU1_ARB_SR0_reg_addr                                      "0xB801C7C8"
#define  TVSB5_TV_SB5_DCU1_ARB_SR0_reg                                           0xB801C7C8
#define  TVSB5_TV_SB5_DCU1_ARB_SR0_inst_addr                                     "0x0015"
#define  set_TVSB5_TV_SB5_DCU1_ARB_SR0_reg(data)                                 (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_ARB_SR0_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_ARB_SR0_reg                                       (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_ARB_SR0_reg))
#define  TVSB5_TV_SB5_DCU1_ARB_SR0_sb_req_shift                                  (16)
#define  TVSB5_TV_SB5_DCU1_ARB_SR0_sb_gnt_shift                                  (0)
#define  TVSB5_TV_SB5_DCU1_ARB_SR0_sb_req_mask                                   (0x000F0000)
#define  TVSB5_TV_SB5_DCU1_ARB_SR0_sb_gnt_mask                                   (0x0000000F)
#define  TVSB5_TV_SB5_DCU1_ARB_SR0_sb_req(data)                                  (0x000F0000&((data)<<16))
#define  TVSB5_TV_SB5_DCU1_ARB_SR0_sb_gnt(data)                                  (0x0000000F&(data))
#define  TVSB5_TV_SB5_DCU1_ARB_SR0_get_sb_req(data)                              ((0x000F0000&(data))>>16)
#define  TVSB5_TV_SB5_DCU1_ARB_SR0_get_sb_gnt(data)                              (0x0000000F&(data))

#define  TVSB5_TV_SB5_DCU1_ARB_SR1                                              0x1801C7CC
#define  TVSB5_TV_SB5_DCU1_ARB_SR1_reg_addr                                      "0xB801C7CC"
#define  TVSB5_TV_SB5_DCU1_ARB_SR1_reg                                           0xB801C7CC
#define  TVSB5_TV_SB5_DCU1_ARB_SR1_inst_addr                                     "0x0016"
#define  set_TVSB5_TV_SB5_DCU1_ARB_SR1_reg(data)                                 (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_ARB_SR1_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_ARB_SR1_reg                                       (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_ARB_SR1_reg))
#define  TVSB5_TV_SB5_DCU1_ARB_SR1_time_stamp_sel_shift                          (24)
#define  TVSB5_TV_SB5_DCU1_ARB_SR1_time_stamp_shift                              (16)
#define  TVSB5_TV_SB5_DCU1_ARB_SR1_win_latcnt_shift                              (0)
#define  TVSB5_TV_SB5_DCU1_ARB_SR1_time_stamp_sel_mask                           (0x0F000000)
#define  TVSB5_TV_SB5_DCU1_ARB_SR1_time_stamp_mask                               (0x00FF0000)
#define  TVSB5_TV_SB5_DCU1_ARB_SR1_win_latcnt_mask                               (0x000000FF)
#define  TVSB5_TV_SB5_DCU1_ARB_SR1_time_stamp_sel(data)                          (0x0F000000&((data)<<24))
#define  TVSB5_TV_SB5_DCU1_ARB_SR1_time_stamp(data)                              (0x00FF0000&((data)<<16))
#define  TVSB5_TV_SB5_DCU1_ARB_SR1_win_latcnt(data)                              (0x000000FF&(data))
#define  TVSB5_TV_SB5_DCU1_ARB_SR1_get_time_stamp_sel(data)                      ((0x0F000000&(data))>>24)
#define  TVSB5_TV_SB5_DCU1_ARB_SR1_get_time_stamp(data)                          ((0x00FF0000&(data))>>16)
#define  TVSB5_TV_SB5_DCU1_ARB_SR1_get_win_latcnt(data)                          (0x000000FF&(data))

#define  TVSB5_TV_SB5_DCU1_DEBUG                                                0x1801C7F4
#define  TVSB5_TV_SB5_DCU1_DEBUG_reg_addr                                        "0xB801C7F4"
#define  TVSB5_TV_SB5_DCU1_DEBUG_reg                                             0xB801C7F4
#define  TVSB5_TV_SB5_DCU1_DEBUG_inst_addr                                       "0x0017"
#define  set_TVSB5_TV_SB5_DCU1_DEBUG_reg(data)                                   (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_DEBUG_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_DEBUG_reg                                         (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_DEBUG_reg))
#define  TVSB5_TV_SB5_DCU1_DEBUG_sb_debug_mode_shift                             (0)
#define  TVSB5_TV_SB5_DCU1_DEBUG_sb_debug_mode_mask                              (0x0000000F)
#define  TVSB5_TV_SB5_DCU1_DEBUG_sb_debug_mode(data)                             (0x0000000F&(data))
#define  TVSB5_TV_SB5_DCU1_DEBUG_get_sb_debug_mode(data)                         (0x0000000F&(data))

#define  TVSB5_TV_SB5_DCU1_bw_limit_0                                           0x1801C730
#define  TVSB5_TV_SB5_DCU1_bw_limit_0_reg_addr                                   "0xB801C730"
#define  TVSB5_TV_SB5_DCU1_bw_limit_0_reg                                        0xB801C730
#define  TVSB5_TV_SB5_DCU1_bw_limit_0_inst_addr                                  "0x0018"
#define  set_TVSB5_TV_SB5_DCU1_bw_limit_0_reg(data)                              (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_bw_limit_0_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_bw_limit_0_reg                                    (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_bw_limit_0_reg))
#define  TVSB5_TV_SB5_DCU1_bw_limit_0_max_req_num_0_shift                        (24)
#define  TVSB5_TV_SB5_DCU1_bw_limit_0_req_thr_0_shift                            (16)
#define  TVSB5_TV_SB5_DCU1_bw_limit_0_time_thr_0_shift                           (0)
#define  TVSB5_TV_SB5_DCU1_bw_limit_0_max_req_num_0_mask                         (0xFF000000)
#define  TVSB5_TV_SB5_DCU1_bw_limit_0_req_thr_0_mask                             (0x00FF0000)
#define  TVSB5_TV_SB5_DCU1_bw_limit_0_time_thr_0_mask                            (0x0000FFFF)
#define  TVSB5_TV_SB5_DCU1_bw_limit_0_max_req_num_0(data)                        (0xFF000000&((data)<<24))
#define  TVSB5_TV_SB5_DCU1_bw_limit_0_req_thr_0(data)                            (0x00FF0000&((data)<<16))
#define  TVSB5_TV_SB5_DCU1_bw_limit_0_time_thr_0(data)                           (0x0000FFFF&(data))
#define  TVSB5_TV_SB5_DCU1_bw_limit_0_get_max_req_num_0(data)                    ((0xFF000000&(data))>>24)
#define  TVSB5_TV_SB5_DCU1_bw_limit_0_get_req_thr_0(data)                        ((0x00FF0000&(data))>>16)
#define  TVSB5_TV_SB5_DCU1_bw_limit_0_get_time_thr_0(data)                       (0x0000FFFF&(data))

#define  TVSB5_TV_SB5_DCU1_bw_limit_1                                           0x1801C734
#define  TVSB5_TV_SB5_DCU1_bw_limit_1_reg_addr                                   "0xB801C734"
#define  TVSB5_TV_SB5_DCU1_bw_limit_1_reg                                        0xB801C734
#define  TVSB5_TV_SB5_DCU1_bw_limit_1_inst_addr                                  "0x0019"
#define  set_TVSB5_TV_SB5_DCU1_bw_limit_1_reg(data)                              (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_bw_limit_1_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_bw_limit_1_reg                                    (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_bw_limit_1_reg))
#define  TVSB5_TV_SB5_DCU1_bw_limit_1_max_req_num_1_shift                        (24)
#define  TVSB5_TV_SB5_DCU1_bw_limit_1_req_thr_1_shift                            (16)
#define  TVSB5_TV_SB5_DCU1_bw_limit_1_time_thr_1_shift                           (0)
#define  TVSB5_TV_SB5_DCU1_bw_limit_1_max_req_num_1_mask                         (0xFF000000)
#define  TVSB5_TV_SB5_DCU1_bw_limit_1_req_thr_1_mask                             (0x00FF0000)
#define  TVSB5_TV_SB5_DCU1_bw_limit_1_time_thr_1_mask                            (0x0000FFFF)
#define  TVSB5_TV_SB5_DCU1_bw_limit_1_max_req_num_1(data)                        (0xFF000000&((data)<<24))
#define  TVSB5_TV_SB5_DCU1_bw_limit_1_req_thr_1(data)                            (0x00FF0000&((data)<<16))
#define  TVSB5_TV_SB5_DCU1_bw_limit_1_time_thr_1(data)                           (0x0000FFFF&(data))
#define  TVSB5_TV_SB5_DCU1_bw_limit_1_get_max_req_num_1(data)                    ((0xFF000000&(data))>>24)
#define  TVSB5_TV_SB5_DCU1_bw_limit_1_get_req_thr_1(data)                        ((0x00FF0000&(data))>>16)
#define  TVSB5_TV_SB5_DCU1_bw_limit_1_get_time_thr_1(data)                       (0x0000FFFF&(data))

#define  TVSB5_TV_SB5_DCU1_bw_limit_2                                           0x1801C738
#define  TVSB5_TV_SB5_DCU1_bw_limit_2_reg_addr                                   "0xB801C738"
#define  TVSB5_TV_SB5_DCU1_bw_limit_2_reg                                        0xB801C738
#define  TVSB5_TV_SB5_DCU1_bw_limit_2_inst_addr                                  "0x001A"
#define  set_TVSB5_TV_SB5_DCU1_bw_limit_2_reg(data)                              (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_bw_limit_2_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_bw_limit_2_reg                                    (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_bw_limit_2_reg))
#define  TVSB5_TV_SB5_DCU1_bw_limit_2_max_req_num_2_shift                        (24)
#define  TVSB5_TV_SB5_DCU1_bw_limit_2_req_thr_2_shift                            (16)
#define  TVSB5_TV_SB5_DCU1_bw_limit_2_time_thr_2_shift                           (0)
#define  TVSB5_TV_SB5_DCU1_bw_limit_2_max_req_num_2_mask                         (0xFF000000)
#define  TVSB5_TV_SB5_DCU1_bw_limit_2_req_thr_2_mask                             (0x00FF0000)
#define  TVSB5_TV_SB5_DCU1_bw_limit_2_time_thr_2_mask                            (0x0000FFFF)
#define  TVSB5_TV_SB5_DCU1_bw_limit_2_max_req_num_2(data)                        (0xFF000000&((data)<<24))
#define  TVSB5_TV_SB5_DCU1_bw_limit_2_req_thr_2(data)                            (0x00FF0000&((data)<<16))
#define  TVSB5_TV_SB5_DCU1_bw_limit_2_time_thr_2(data)                           (0x0000FFFF&(data))
#define  TVSB5_TV_SB5_DCU1_bw_limit_2_get_max_req_num_2(data)                    ((0xFF000000&(data))>>24)
#define  TVSB5_TV_SB5_DCU1_bw_limit_2_get_req_thr_2(data)                        ((0x00FF0000&(data))>>16)
#define  TVSB5_TV_SB5_DCU1_bw_limit_2_get_time_thr_2(data)                       (0x0000FFFF&(data))

#define  TVSB5_TV_SB5_DCU1_bw_limit_3                                           0x1801C73C
#define  TVSB5_TV_SB5_DCU1_bw_limit_3_reg_addr                                   "0xB801C73C"
#define  TVSB5_TV_SB5_DCU1_bw_limit_3_reg                                        0xB801C73C
#define  TVSB5_TV_SB5_DCU1_bw_limit_3_inst_addr                                  "0x001B"
#define  set_TVSB5_TV_SB5_DCU1_bw_limit_3_reg(data)                              (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_bw_limit_3_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_bw_limit_3_reg                                    (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_bw_limit_3_reg))
#define  TVSB5_TV_SB5_DCU1_bw_limit_3_max_req_num_3_shift                        (24)
#define  TVSB5_TV_SB5_DCU1_bw_limit_3_req_thr_3_shift                            (16)
#define  TVSB5_TV_SB5_DCU1_bw_limit_3_time_thr_3_shift                           (0)
#define  TVSB5_TV_SB5_DCU1_bw_limit_3_max_req_num_3_mask                         (0xFF000000)
#define  TVSB5_TV_SB5_DCU1_bw_limit_3_req_thr_3_mask                             (0x00FF0000)
#define  TVSB5_TV_SB5_DCU1_bw_limit_3_time_thr_3_mask                            (0x0000FFFF)
#define  TVSB5_TV_SB5_DCU1_bw_limit_3_max_req_num_3(data)                        (0xFF000000&((data)<<24))
#define  TVSB5_TV_SB5_DCU1_bw_limit_3_req_thr_3(data)                            (0x00FF0000&((data)<<16))
#define  TVSB5_TV_SB5_DCU1_bw_limit_3_time_thr_3(data)                           (0x0000FFFF&(data))
#define  TVSB5_TV_SB5_DCU1_bw_limit_3_get_max_req_num_3(data)                    ((0xFF000000&(data))>>24)
#define  TVSB5_TV_SB5_DCU1_bw_limit_3_get_req_thr_3(data)                        ((0x00FF0000&(data))>>16)
#define  TVSB5_TV_SB5_DCU1_bw_limit_3_get_time_thr_3(data)                       (0x0000FFFF&(data))

#define  TVSB5_TV_SB5_DCU1_bw_limit_en                                          0x1801C7E8
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_reg_addr                                  "0xB801C7E8"
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_reg                                       0xB801C7E8
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_inst_addr                                 "0x001C"
#define  set_TVSB5_TV_SB5_DCU1_bw_limit_en_reg(data)                             (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_bw_limit_en_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_bw_limit_en_reg                                   (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_bw_limit_en_reg))
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_len_scheme_en_shift                       (31)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_status_clr_3_shift                     (7)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_limit_en_3_shift                       (6)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_status_clr_2_shift                     (5)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_limit_en_2_shift                       (4)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_status_clr_1_shift                     (3)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_limit_en_1_shift                       (2)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_status_clr_0_shift                     (1)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_limit_en_0_shift                       (0)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_len_scheme_en_mask                        (0x80000000)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_status_clr_3_mask                      (0x00000080)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_limit_en_3_mask                        (0x00000040)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_status_clr_2_mask                      (0x00000020)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_limit_en_2_mask                        (0x00000010)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_status_clr_1_mask                      (0x00000008)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_limit_en_1_mask                        (0x00000004)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_status_clr_0_mask                      (0x00000002)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_limit_en_0_mask                        (0x00000001)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_len_scheme_en(data)                       (0x80000000&((data)<<31))
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_status_clr_3(data)                     (0x00000080&((data)<<7))
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_limit_en_3(data)                       (0x00000040&((data)<<6))
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_status_clr_2(data)                     (0x00000020&((data)<<5))
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_limit_en_2(data)                       (0x00000010&((data)<<4))
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_status_clr_1(data)                     (0x00000008&((data)<<3))
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_limit_en_1(data)                       (0x00000004&((data)<<2))
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_status_clr_0(data)                     (0x00000002&((data)<<1))
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_bw_limit_en_0(data)                       (0x00000001&(data))
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_get_len_scheme_en(data)                   ((0x80000000&(data))>>31)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_get_bw_status_clr_3(data)                 ((0x00000080&(data))>>7)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_get_bw_limit_en_3(data)                   ((0x00000040&(data))>>6)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_get_bw_status_clr_2(data)                 ((0x00000020&(data))>>5)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_get_bw_limit_en_2(data)                   ((0x00000010&(data))>>4)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_get_bw_status_clr_1(data)                 ((0x00000008&(data))>>3)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_get_bw_limit_en_1(data)                   ((0x00000004&(data))>>2)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_get_bw_status_clr_0(data)                 ((0x00000002&(data))>>1)
#define  TVSB5_TV_SB5_DCU1_bw_limit_en_get_bw_limit_en_0(data)                   (0x00000001&(data))

#define  TVSB5_TV_SB5_DCU1_queue_ctrl                                           0x1801C7EC
#define  TVSB5_TV_SB5_DCU1_queue_ctrl_reg_addr                                   "0xB801C7EC"
#define  TVSB5_TV_SB5_DCU1_queue_ctrl_reg                                        0xB801C7EC
#define  TVSB5_TV_SB5_DCU1_queue_ctrl_inst_addr                                  "0x001D"
#define  set_TVSB5_TV_SB5_DCU1_queue_ctrl_reg(data)                              (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_queue_ctrl_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_queue_ctrl_reg                                    (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_queue_ctrl_reg))
#define  TVSB5_TV_SB5_DCU1_queue_ctrl_rd_queue_num_shift                         (8)
#define  TVSB5_TV_SB5_DCU1_queue_ctrl_wr_queue_num_shift                         (0)
#define  TVSB5_TV_SB5_DCU1_queue_ctrl_rd_queue_num_mask                          (0x00001F00)
#define  TVSB5_TV_SB5_DCU1_queue_ctrl_wr_queue_num_mask                          (0x0000001F)
#define  TVSB5_TV_SB5_DCU1_queue_ctrl_rd_queue_num(data)                         (0x00001F00&((data)<<8))
#define  TVSB5_TV_SB5_DCU1_queue_ctrl_wr_queue_num(data)                         (0x0000001F&(data))
#define  TVSB5_TV_SB5_DCU1_queue_ctrl_get_rd_queue_num(data)                     ((0x00001F00&(data))>>8)
#define  TVSB5_TV_SB5_DCU1_queue_ctrl_get_wr_queue_num(data)                     (0x0000001F&(data))

#define  TVSB5_TV_SB5_DCU1_error_status                                         0x1801C7FC
#define  TVSB5_TV_SB5_DCU1_error_status_reg_addr                                 "0xB801C7FC"
#define  TVSB5_TV_SB5_DCU1_error_status_reg                                      0xB801C7FC
#define  TVSB5_TV_SB5_DCU1_error_status_inst_addr                                "0x001E"
#define  set_TVSB5_TV_SB5_DCU1_error_status_reg(data)                            (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_error_status_reg)=data)
#define  get_TVSB5_TV_SB5_DCU1_error_status_reg                                  (*((volatile unsigned int*)TVSB5_TV_SB5_DCU1_error_status_reg))
#define  TVSB5_TV_SB5_DCU1_error_status_error_clr_shift                          (31)
#define  TVSB5_TV_SB5_DCU1_error_status_error_zero_length_id_shift               (12)
#define  TVSB5_TV_SB5_DCU1_error_status_error_wdone_full_shift                   (10)
#define  TVSB5_TV_SB5_DCU1_error_status_error_read_full_shift                    (9)
#define  TVSB5_TV_SB5_DCU1_error_status_error_write_full_shift                   (8)
#define  TVSB5_TV_SB5_DCU1_error_status_error_clr_mask                           (0x80000000)
#define  TVSB5_TV_SB5_DCU1_error_status_error_zero_length_id_mask                (0x0000F000)
#define  TVSB5_TV_SB5_DCU1_error_status_error_wdone_full_mask                    (0x00000400)
#define  TVSB5_TV_SB5_DCU1_error_status_error_read_full_mask                     (0x00000200)
#define  TVSB5_TV_SB5_DCU1_error_status_error_write_full_mask                    (0x00000100)
#define  TVSB5_TV_SB5_DCU1_error_status_error_clr(data)                          (0x80000000&((data)<<31))
#define  TVSB5_TV_SB5_DCU1_error_status_error_zero_length_id(data)               (0x0000F000&((data)<<12))
#define  TVSB5_TV_SB5_DCU1_error_status_error_wdone_full(data)                   (0x00000400&((data)<<10))
#define  TVSB5_TV_SB5_DCU1_error_status_error_read_full(data)                    (0x00000200&((data)<<9))
#define  TVSB5_TV_SB5_DCU1_error_status_error_write_full(data)                   (0x00000100&((data)<<8))
#define  TVSB5_TV_SB5_DCU1_error_status_get_error_clr(data)                      ((0x80000000&(data))>>31)
#define  TVSB5_TV_SB5_DCU1_error_status_get_error_zero_length_id(data)           ((0x0000F000&(data))>>12)
#define  TVSB5_TV_SB5_DCU1_error_status_get_error_wdone_full(data)               ((0x00000400&(data))>>10)
#define  TVSB5_TV_SB5_DCU1_error_status_get_error_read_full(data)                ((0x00000200&(data))>>9)
#define  TVSB5_TV_SB5_DCU1_error_status_get_error_write_full(data)               ((0x00000100&(data))>>8)

#define  TVSB5_TV_SB5_dummy_trc_0                                               0x1801C7B0
#define  TVSB5_TV_SB5_dummy_trc_0_reg_addr                                       "0xB801C7B0"
#define  TVSB5_TV_SB5_dummy_trc_0_reg                                            0xB801C7B0
#define  TVSB5_TV_SB5_dummy_trc_0_inst_addr                                      "0x001F"
#define  set_TVSB5_TV_SB5_dummy_trc_0_reg(data)                                  (*((volatile unsigned int*)TVSB5_TV_SB5_dummy_trc_0_reg)=data)
#define  get_TVSB5_TV_SB5_dummy_trc_0_reg                                        (*((volatile unsigned int*)TVSB5_TV_SB5_dummy_trc_0_reg))
#define  TVSB5_TV_SB5_dummy_trc_0_rw_type_shift                                  (28)
#define  TVSB5_TV_SB5_dummy_trc_0_bl_type_shift                                  (24)
#define  TVSB5_TV_SB5_dummy_trc_0_cmd_min_dly_shift                              (12)
#define  TVSB5_TV_SB5_dummy_trc_0_cmd_max_dly_shift                              (0)
#define  TVSB5_TV_SB5_dummy_trc_0_rw_type_mask                                   (0x30000000)
#define  TVSB5_TV_SB5_dummy_trc_0_bl_type_mask                                   (0x01000000)
#define  TVSB5_TV_SB5_dummy_trc_0_cmd_min_dly_mask                               (0x00FFF000)
#define  TVSB5_TV_SB5_dummy_trc_0_cmd_max_dly_mask                               (0x00000FFF)
#define  TVSB5_TV_SB5_dummy_trc_0_rw_type(data)                                  (0x30000000&((data)<<28))
#define  TVSB5_TV_SB5_dummy_trc_0_bl_type(data)                                  (0x01000000&((data)<<24))
#define  TVSB5_TV_SB5_dummy_trc_0_cmd_min_dly(data)                              (0x00FFF000&((data)<<12))
#define  TVSB5_TV_SB5_dummy_trc_0_cmd_max_dly(data)                              (0x00000FFF&(data))
#define  TVSB5_TV_SB5_dummy_trc_0_get_rw_type(data)                              ((0x30000000&(data))>>28)
#define  TVSB5_TV_SB5_dummy_trc_0_get_bl_type(data)                              ((0x01000000&(data))>>24)
#define  TVSB5_TV_SB5_dummy_trc_0_get_cmd_min_dly(data)                          ((0x00FFF000&(data))>>12)
#define  TVSB5_TV_SB5_dummy_trc_0_get_cmd_max_dly(data)                          (0x00000FFF&(data))

#define  TVSB5_TV_SB5_dummy_trc_1                                               0x1801C7B4
#define  TVSB5_TV_SB5_dummy_trc_1_reg_addr                                       "0xB801C7B4"
#define  TVSB5_TV_SB5_dummy_trc_1_reg                                            0xB801C7B4
#define  TVSB5_TV_SB5_dummy_trc_1_inst_addr                                      "0x0020"
#define  set_TVSB5_TV_SB5_dummy_trc_1_reg(data)                                  (*((volatile unsigned int*)TVSB5_TV_SB5_dummy_trc_1_reg)=data)
#define  get_TVSB5_TV_SB5_dummy_trc_1_reg                                        (*((volatile unsigned int*)TVSB5_TV_SB5_dummy_trc_1_reg))
#define  TVSB5_TV_SB5_dummy_trc_1_bl_64b_shift                                   (3)
#define  TVSB5_TV_SB5_dummy_trc_1_bl_64b_mask                                    (0x000007F8)
#define  TVSB5_TV_SB5_dummy_trc_1_bl_64b(data)                                   (0x000007F8&((data)<<3))
#define  TVSB5_TV_SB5_dummy_trc_1_get_bl_64b(data)                               ((0x000007F8&(data))>>3)

#define  TVSB5_TV_SB5_dummy_trc_2                                               0x1801C7B8
#define  TVSB5_TV_SB5_dummy_trc_2_reg_addr                                       "0xB801C7B8"
#define  TVSB5_TV_SB5_dummy_trc_2_reg                                            0xB801C7B8
#define  TVSB5_TV_SB5_dummy_trc_2_inst_addr                                      "0x0021"
#define  set_TVSB5_TV_SB5_dummy_trc_2_reg(data)                                  (*((volatile unsigned int*)TVSB5_TV_SB5_dummy_trc_2_reg)=data)
#define  get_TVSB5_TV_SB5_dummy_trc_2_reg                                        (*((volatile unsigned int*)TVSB5_TV_SB5_dummy_trc_2_reg))
#define  TVSB5_TV_SB5_dummy_trc_2_addr_64b_shift                                 (3)
#define  TVSB5_TV_SB5_dummy_trc_2_addr_64b_mask                                  (0xFFFFFFF8)
#define  TVSB5_TV_SB5_dummy_trc_2_addr_64b(data)                                 (0xFFFFFFF8&((data)<<3))
#define  TVSB5_TV_SB5_dummy_trc_2_get_addr_64b(data)                             ((0xFFFFFFF8&(data))>>3)

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======TVSB5 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sf_rx_mode:1;
        RBus_UInt32  sf_rx_start:1;
        RBus_UInt32  sf_tx_mode:1;
        RBus_UInt32  sf_tx_start:1;
        RBus_UInt32  sf_rx_gated:1;
        RBus_UInt32  dummy1801c700_26_16:11;
        RBus_UInt32  sf_rx_debug_bit_sel:8;
        RBus_UInt32  sf_rx_fail_bit_status:1;
        RBus_UInt32  sf_rx_done:1;
        RBus_UInt32  sf_rx_err:1;
        RBus_UInt32  sf_tx_work:1;
        RBus_UInt32  time_step:4;
    };
}tvsb5_tv_sb5_dcu1_arb_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb3_sf_rx_mode:1;
        RBus_UInt32  usb3_sf_rx_start:1;
        RBus_UInt32  usb3_sf_tx_mode:1;
        RBus_UInt32  usb3_sf_tx_start:1;
        RBus_UInt32  usb3_sf_rx_gated:1;
        RBus_UInt32  dummy1801c720_26_16:11;
        RBus_UInt32  usb3_sf_rx_debug_bit_sel:8;
        RBus_UInt32  usb3_sf_rx_fail_bit_status:1;
        RBus_UInt32  usb3_sf_rx_done:1;
        RBus_UInt32  usb3_sf_rx_err:1;
        RBus_UInt32  usb3_sf_tx_work:1;
        RBus_UInt32  res1:4;
    };
}tvsb5_tv_sb5_dcu1_arb_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  arb_en:4;
    };
}tvsb5_tv_sb5_dcu1_arb_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client0_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client0_latcnt_beg:8;
    };
}tvsb5_tv_sb5_dcu1_latcnt_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client1_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client1_latcnt_beg:8;
    };
}tvsb5_tv_sb5_dcu1_latcnt_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client2_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client2_latcnt_beg:8;
    };
}tvsb5_tv_sb5_dcu1_latcnt_cr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client3_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client3_latcnt_beg:8;
    };
}tvsb5_tv_sb5_dcu1_latcnt_cr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  pc_rd_only:1;
        RBus_UInt32  pc_go:1;
    };
}tvsb5_tv_sb5_dcu1_pc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_mon_num:32;
    };
}tvsb5_tv_sb5_dcu1_pc_tota_mon_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_ack_num:32;
    };
}tvsb5_tv_sb5_dcu1_pc_tota_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_idl_num:32;
    };
}tvsb5_tv_sb5_dcu1_pc_tota_idl_num_RBUS;

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
}tvsb5_tv_sb5_dcu1_pc_prog_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  pc_prog2_req_occur:1;
        RBus_UInt32  pc_prog1_req_occur:1;
        RBus_UInt32  pc_prog0_req_occur:1;
    };
}tvsb5_tv_sb5_dcu1_pc_prog_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  prog_channel_sel:2;
    };
}tvsb5_tv_sb5_dcu1_pc_prog_0_channel_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_acc_lat:32;
    };
}tvsb5_tv_sb5_dcu1_pc_prog_0_acc_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  prog_max_lat:16;
    };
}tvsb5_tv_sb5_dcu1_pc_prog_0_max_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  prog_req_num:24;
    };
}tvsb5_tv_sb5_dcu1_pc_prog_0_req_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_ack_num:32;
    };
}tvsb5_tv_sb5_dcu1_pc_prog_0_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  prog_hitend_cnt:16;
    };
}tvsb5_tv_sb5_dcu1_pc_prog_0_hitend_RBUS;

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
}tvsb5_tv_sb5_dcu1_bridge_test_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bt_addr_data:28;
        RBus_UInt32  res1:4;
    };
}tvsb5_tv_sb5_dcu1_bridge_test_addr_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  sb_req:4;
        RBus_UInt32  res2:12;
        RBus_UInt32  sb_gnt:4;
    };
}tvsb5_tv_sb5_dcu1_arb_sr0_RBUS;

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
}tvsb5_tv_sb5_dcu1_arb_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  sb_debug_mode:4;
    };
}tvsb5_tv_sb5_dcu1_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_0:8;
        RBus_UInt32  req_thr_0:8;
        RBus_UInt32  time_thr_0:16;
    };
}tvsb5_tv_sb5_dcu1_bw_limit_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_1:8;
        RBus_UInt32  req_thr_1:8;
        RBus_UInt32  time_thr_1:16;
    };
}tvsb5_tv_sb5_dcu1_bw_limit_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_2:8;
        RBus_UInt32  req_thr_2:8;
        RBus_UInt32  time_thr_2:16;
    };
}tvsb5_tv_sb5_dcu1_bw_limit_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_3:8;
        RBus_UInt32  req_thr_3:8;
        RBus_UInt32  time_thr_3:16;
    };
}tvsb5_tv_sb5_dcu1_bw_limit_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  len_scheme_en:1;
        RBus_UInt32  res1:23;
        RBus_UInt32  bw_status_clr_3:1;
        RBus_UInt32  bw_limit_en_3:1;
        RBus_UInt32  bw_status_clr_2:1;
        RBus_UInt32  bw_limit_en_2:1;
        RBus_UInt32  bw_status_clr_1:1;
        RBus_UInt32  bw_limit_en_1:1;
        RBus_UInt32  bw_status_clr_0:1;
        RBus_UInt32  bw_limit_en_0:1;
    };
}tvsb5_tv_sb5_dcu1_bw_limit_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  rd_queue_num:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  wr_queue_num:5;
    };
}tvsb5_tv_sb5_dcu1_queue_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  error_clr:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  error_zero_length_id:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  error_wdone_full:1;
        RBus_UInt32  error_read_full:1;
        RBus_UInt32  error_write_full:1;
        RBus_UInt32  res3:8;
    };
}tvsb5_tv_sb5_dcu1_error_status_RBUS;

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
}tvsb5_tv_sb5_dummy_trc_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  bl_64b:8;
        RBus_UInt32  res2:3;
    };
}tvsb5_tv_sb5_dummy_trc_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_64b:29;
        RBus_UInt32  res1:3;
    };
}tvsb5_tv_sb5_dummy_trc_2_RBUS;

#else //apply LITTLE_ENDIAN

//======TVSB5 register structure define==========

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
        RBus_UInt32  dummy1801c700_26_16:11;
        RBus_UInt32  sf_rx_gated:1;
        RBus_UInt32  sf_tx_start:1;
        RBus_UInt32  sf_tx_mode:1;
        RBus_UInt32  sf_rx_start:1;
        RBus_UInt32  sf_rx_mode:1;
    };
}tvsb5_tv_sb5_dcu1_arb_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  usb3_sf_tx_work:1;
        RBus_UInt32  usb3_sf_rx_err:1;
        RBus_UInt32  usb3_sf_rx_done:1;
        RBus_UInt32  usb3_sf_rx_fail_bit_status:1;
        RBus_UInt32  usb3_sf_rx_debug_bit_sel:8;
        RBus_UInt32  dummy1801c720_26_16:11;
        RBus_UInt32  usb3_sf_rx_gated:1;
        RBus_UInt32  usb3_sf_tx_start:1;
        RBus_UInt32  usb3_sf_tx_mode:1;
        RBus_UInt32  usb3_sf_rx_start:1;
        RBus_UInt32  usb3_sf_rx_mode:1;
    };
}tvsb5_tv_sb5_dcu1_arb_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  arb_en:4;
        RBus_UInt32  res1:28;
    };
}tvsb5_tv_sb5_dcu1_arb_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client0_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client0_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}tvsb5_tv_sb5_dcu1_latcnt_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client1_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client1_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}tvsb5_tv_sb5_dcu1_latcnt_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client2_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client2_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}tvsb5_tv_sb5_dcu1_latcnt_cr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client3_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client3_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}tvsb5_tv_sb5_dcu1_latcnt_cr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_go:1;
        RBus_UInt32  pc_rd_only:1;
        RBus_UInt32  res1:30;
    };
}tvsb5_tv_sb5_dcu1_pc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_mon_num:32;
    };
}tvsb5_tv_sb5_dcu1_pc_tota_mon_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_ack_num:32;
    };
}tvsb5_tv_sb5_dcu1_pc_tota_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_idl_num:32;
    };
}tvsb5_tv_sb5_dcu1_pc_tota_idl_num_RBUS;

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
}tvsb5_tv_sb5_dcu1_pc_prog_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_prog0_req_occur:1;
        RBus_UInt32  pc_prog1_req_occur:1;
        RBus_UInt32  pc_prog2_req_occur:1;
        RBus_UInt32  res1:29;
    };
}tvsb5_tv_sb5_dcu1_pc_prog_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_channel_sel:2;
        RBus_UInt32  res1:30;
    };
}tvsb5_tv_sb5_dcu1_pc_prog_0_channel_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_acc_lat:32;
    };
}tvsb5_tv_sb5_dcu1_pc_prog_0_acc_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_max_lat:16;
        RBus_UInt32  res1:16;
    };
}tvsb5_tv_sb5_dcu1_pc_prog_0_max_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_req_num:24;
        RBus_UInt32  res1:8;
    };
}tvsb5_tv_sb5_dcu1_pc_prog_0_req_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_ack_num:32;
    };
}tvsb5_tv_sb5_dcu1_pc_prog_0_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_hitend_cnt:16;
        RBus_UInt32  res1:16;
    };
}tvsb5_tv_sb5_dcu1_pc_prog_0_hitend_RBUS;

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
}tvsb5_tv_sb5_dcu1_bridge_test_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bt_addr_data:28;
    };
}tvsb5_tv_sb5_dcu1_bridge_test_addr_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sb_gnt:4;
        RBus_UInt32  res1:12;
        RBus_UInt32  sb_req:4;
        RBus_UInt32  res2:12;
    };
}tvsb5_tv_sb5_dcu1_arb_sr0_RBUS;

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
}tvsb5_tv_sb5_dcu1_arb_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sb_debug_mode:4;
        RBus_UInt32  res1:28;
    };
}tvsb5_tv_sb5_dcu1_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_0:16;
        RBus_UInt32  req_thr_0:8;
        RBus_UInt32  max_req_num_0:8;
    };
}tvsb5_tv_sb5_dcu1_bw_limit_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_1:16;
        RBus_UInt32  req_thr_1:8;
        RBus_UInt32  max_req_num_1:8;
    };
}tvsb5_tv_sb5_dcu1_bw_limit_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_2:16;
        RBus_UInt32  req_thr_2:8;
        RBus_UInt32  max_req_num_2:8;
    };
}tvsb5_tv_sb5_dcu1_bw_limit_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_3:16;
        RBus_UInt32  req_thr_3:8;
        RBus_UInt32  max_req_num_3:8;
    };
}tvsb5_tv_sb5_dcu1_bw_limit_3_RBUS;

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
        RBus_UInt32  bw_limit_en_3:1;
        RBus_UInt32  bw_status_clr_3:1;
        RBus_UInt32  res1:23;
        RBus_UInt32  len_scheme_en:1;
    };
}tvsb5_tv_sb5_dcu1_bw_limit_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_queue_num:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  rd_queue_num:5;
        RBus_UInt32  res2:19;
    };
}tvsb5_tv_sb5_dcu1_queue_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  error_write_full:1;
        RBus_UInt32  error_read_full:1;
        RBus_UInt32  error_wdone_full:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  error_zero_length_id:4;
        RBus_UInt32  res3:15;
        RBus_UInt32  error_clr:1;
    };
}tvsb5_tv_sb5_dcu1_error_status_RBUS;

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
}tvsb5_tv_sb5_dummy_trc_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  bl_64b:8;
        RBus_UInt32  res2:21;
    };
}tvsb5_tv_sb5_dummy_trc_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  addr_64b:29;
    };
}tvsb5_tv_sb5_dummy_trc_2_RBUS;




#endif 


#endif 
