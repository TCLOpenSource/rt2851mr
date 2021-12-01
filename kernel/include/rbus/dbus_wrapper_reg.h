/**
* @file Merlin5_MEMC_DBUS_wrapper
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_DBUS_WRAPPER_REG_H_
#define _RBUS_DBUS_WRAPPER_REG_H_

#include "rbus_types.h"



//  DBUS_WRAPPER Register Address
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0                                         0x1809E000
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_reg_addr                                 "0xB809E000"
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_reg                                      0xB809E000
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_inst_addr                                "0x0000"
#define  set_DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_reg(data)                            (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_reg                                  (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_mode_shift                         (31)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_start_shift                        (30)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_tx_mode_shift                         (29)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_tx_start_shift                        (28)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_gated_shift                        (27)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_dummy_26_16_shift                        (16)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_debug_bit_sel_shift                (8)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_fail_bit_status_shift              (7)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_done_shift                         (6)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_err_shift                          (5)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_tx_work_shift                         (4)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_time_step_shift                          (0)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_mode_mask                          (0x80000000)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_start_mask                         (0x40000000)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_tx_mode_mask                          (0x20000000)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_tx_start_mask                         (0x10000000)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_gated_mask                         (0x08000000)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_dummy_26_16_mask                         (0x07FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_debug_bit_sel_mask                 (0x0000FF00)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_fail_bit_status_mask               (0x00000080)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_done_mask                          (0x00000040)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_err_mask                           (0x00000020)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_tx_work_mask                          (0x00000010)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_time_step_mask                           (0x0000000F)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_mode(data)                         (0x80000000&((data)<<31))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_start(data)                        (0x40000000&((data)<<30))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_tx_mode(data)                         (0x20000000&((data)<<29))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_tx_start(data)                        (0x10000000&((data)<<28))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_gated(data)                        (0x08000000&((data)<<27))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_dummy_26_16(data)                        (0x07FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_debug_bit_sel(data)                (0x0000FF00&((data)<<8))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_fail_bit_status(data)              (0x00000080&((data)<<7))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_done(data)                         (0x00000040&((data)<<6))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_rx_err(data)                          (0x00000020&((data)<<5))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_sf_tx_work(data)                         (0x00000010&((data)<<4))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_time_step(data)                          (0x0000000F&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_get_sf_rx_mode(data)                     ((0x80000000&(data))>>31)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_get_sf_rx_start(data)                    ((0x40000000&(data))>>30)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_get_sf_tx_mode(data)                     ((0x20000000&(data))>>29)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_get_sf_tx_start(data)                    ((0x10000000&(data))>>28)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_get_sf_rx_gated(data)                    ((0x08000000&(data))>>27)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_get_dummy_26_16(data)                    ((0x07FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_get_sf_rx_debug_bit_sel(data)            ((0x0000FF00&(data))>>8)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_get_sf_rx_fail_bit_status(data)          ((0x00000080&(data))>>7)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_get_sf_rx_done(data)                     ((0x00000040&(data))>>6)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_get_sf_rx_err(data)                      ((0x00000020&(data))>>5)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_get_sf_tx_work(data)                     ((0x00000010&(data))>>4)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR0_get_time_step(data)                      (0x0000000F&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR1                                         0x1809E004
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR1_reg_addr                                 "0xB809E004"
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR1_reg                                      0xB809E004
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR1_inst_addr                                "0x0001"
#define  set_DBUS_WRAPPER_MEMC_DCU1_ARB_CR1_reg(data)                            (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_ARB_CR1_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_ARB_CR1_reg                                  (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_ARB_CR1_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR1_arb_en_shift                             (0)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR1_arb_en_mask                              (0x000003FF)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR1_arb_en(data)                             (0x000003FF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_CR1_get_arb_en(data)                         (0x000003FF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR1                                      0x1809E008
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR1_reg_addr                              "0xB809E008"
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR1_reg                                   0xB809E008
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR1_inst_addr                             "0x0002"
#define  set_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR1_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR1_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR1_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR1_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR1_client0_latcnt_end_shift              (16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR1_client0_latcnt_beg_shift              (0)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR1_client0_latcnt_end_mask               (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR1_client0_latcnt_beg_mask               (0x000000FF)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR1_client0_latcnt_end(data)              (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR1_client0_latcnt_beg(data)              (0x000000FF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR1_get_client0_latcnt_end(data)          ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR1_get_client0_latcnt_beg(data)          (0x000000FF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR2                                      0x1809E00C
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR2_reg_addr                              "0xB809E00C"
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR2_reg                                   0xB809E00C
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR2_inst_addr                             "0x0003"
#define  set_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR2_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR2_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR2_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR2_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR2_client1_latcnt_end_shift              (16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR2_client1_latcnt_beg_shift              (0)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR2_client1_latcnt_end_mask               (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR2_client1_latcnt_beg_mask               (0x000000FF)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR2_client1_latcnt_end(data)              (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR2_client1_latcnt_beg(data)              (0x000000FF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR2_get_client1_latcnt_end(data)          ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR2_get_client1_latcnt_beg(data)          (0x000000FF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR3                                      0x1809E010
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR3_reg_addr                              "0xB809E010"
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR3_reg                                   0xB809E010
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR3_inst_addr                             "0x0004"
#define  set_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR3_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR3_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR3_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR3_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR3_client2_latcnt_end_shift              (16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR3_client2_latcnt_beg_shift              (0)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR3_client2_latcnt_end_mask               (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR3_client2_latcnt_beg_mask               (0x000000FF)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR3_client2_latcnt_end(data)              (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR3_client2_latcnt_beg(data)              (0x000000FF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR3_get_client2_latcnt_end(data)          ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR3_get_client2_latcnt_beg(data)          (0x000000FF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR4                                      0x1809E014
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR4_reg_addr                              "0xB809E014"
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR4_reg                                   0xB809E014
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR4_inst_addr                             "0x0005"
#define  set_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR4_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR4_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR4_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR4_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR4_client3_latcnt_end_shift              (16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR4_client3_latcnt_beg_shift              (0)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR4_client3_latcnt_end_mask               (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR4_client3_latcnt_beg_mask               (0x000000FF)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR4_client3_latcnt_end(data)              (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR4_client3_latcnt_beg(data)              (0x000000FF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR4_get_client3_latcnt_end(data)          ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR4_get_client3_latcnt_beg(data)          (0x000000FF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR5                                      0x1809E018
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR5_reg_addr                              "0xB809E018"
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR5_reg                                   0xB809E018
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR5_inst_addr                             "0x0006"
#define  set_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR5_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR5_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR5_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR5_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR5_client4_latcnt_end_shift              (16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR5_client4_latcnt_beg_shift              (0)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR5_client4_latcnt_end_mask               (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR5_client4_latcnt_beg_mask               (0x000000FF)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR5_client4_latcnt_end(data)              (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR5_client4_latcnt_beg(data)              (0x000000FF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR5_get_client4_latcnt_end(data)          ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR5_get_client4_latcnt_beg(data)          (0x000000FF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR6                                      0x1809E01C
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR6_reg_addr                              "0xB809E01C"
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR6_reg                                   0xB809E01C
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR6_inst_addr                             "0x0007"
#define  set_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR6_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR6_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR6_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR6_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR6_client5_latcnt_end_shift              (16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR6_client5_latcnt_beg_shift              (0)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR6_client5_latcnt_end_mask               (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR6_client5_latcnt_beg_mask               (0x000000FF)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR6_client5_latcnt_end(data)              (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR6_client5_latcnt_beg(data)              (0x000000FF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR6_get_client5_latcnt_end(data)          ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR6_get_client5_latcnt_beg(data)          (0x000000FF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR7                                      0x1809E020
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR7_reg_addr                              "0xB809E020"
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR7_reg                                   0xB809E020
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR7_inst_addr                             "0x0008"
#define  set_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR7_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR7_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR7_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR7_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR7_client6_latcnt_end_shift              (16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR7_client6_latcnt_beg_shift              (0)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR7_client6_latcnt_end_mask               (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR7_client6_latcnt_beg_mask               (0x000000FF)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR7_client6_latcnt_end(data)              (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR7_client6_latcnt_beg(data)              (0x000000FF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR7_get_client6_latcnt_end(data)          ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR7_get_client6_latcnt_beg(data)          (0x000000FF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR8                                      0x1809E024
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR8_reg_addr                              "0xB809E024"
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR8_reg                                   0xB809E024
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR8_inst_addr                             "0x0009"
#define  set_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR8_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR8_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR8_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR8_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR8_client7_latcnt_end_shift              (16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR8_client7_latcnt_beg_shift              (0)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR8_client7_latcnt_end_mask               (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR8_client7_latcnt_beg_mask               (0x000000FF)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR8_client7_latcnt_end(data)              (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR8_client7_latcnt_beg(data)              (0x000000FF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR8_get_client7_latcnt_end(data)          ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR8_get_client7_latcnt_beg(data)          (0x000000FF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR9                                      0x1809E104
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR9_reg_addr                              "0xB809E104"
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR9_reg                                   0xB809E104
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR9_inst_addr                             "0x000A"
#define  set_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR9_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR9_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR9_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR9_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR9_client8_latcnt_end_shift              (16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR9_client8_latcnt_beg_shift              (0)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR9_client8_latcnt_end_mask               (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR9_client8_latcnt_beg_mask               (0x000000FF)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR9_client8_latcnt_end(data)              (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR9_client8_latcnt_beg(data)              (0x000000FF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR9_get_client8_latcnt_end(data)          ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR9_get_client8_latcnt_beg(data)          (0x000000FF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR10                                     0x1809E108
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR10_reg_addr                             "0xB809E108"
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR10_reg                                  0xB809E108
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR10_inst_addr                            "0x000B"
#define  set_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR10_reg(data)                        (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR10_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR10_reg                              (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR10_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR10_client9_latcnt_end_shift             (16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR10_client9_latcnt_beg_shift             (0)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR10_client9_latcnt_end_mask              (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR10_client9_latcnt_beg_mask              (0x000000FF)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR10_client9_latcnt_end(data)             (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR10_client9_latcnt_beg(data)             (0x000000FF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR10_get_client9_latcnt_end(data)         ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_LATCNT_CR10_get_client9_latcnt_beg(data)         (0x000000FF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_PC_CTRL                                         0x1809E028
#define  DBUS_WRAPPER_MEMC_DCU1_PC_CTRL_reg_addr                                 "0xB809E028"
#define  DBUS_WRAPPER_MEMC_DCU1_PC_CTRL_reg                                      0xB809E028
#define  DBUS_WRAPPER_MEMC_DCU1_PC_CTRL_inst_addr                                "0x000C"
#define  set_DBUS_WRAPPER_MEMC_DCU1_PC_CTRL_reg(data)                            (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_CTRL_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_PC_CTRL_reg                                  (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_CTRL_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_CTRL_pc_rd_only_shift                         (1)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_CTRL_pc_go_shift                              (0)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_CTRL_pc_rd_only_mask                          (0x00000002)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_CTRL_pc_go_mask                               (0x00000001)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_CTRL_pc_rd_only(data)                         (0x00000002&((data)<<1))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_CTRL_pc_go(data)                              (0x00000001&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_CTRL_get_pc_rd_only(data)                     ((0x00000002&(data))>>1)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_CTRL_get_pc_go(data)                          (0x00000001&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_MON_NUM                                 0x1809E02C
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_MON_NUM_reg_addr                         "0xB809E02C"
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_MON_NUM_reg                              0xB809E02C
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_MON_NUM_inst_addr                        "0x000D"
#define  set_DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_MON_NUM_reg(data)                    (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_MON_NUM_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_MON_NUM_reg                          (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_MON_NUM_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_MON_NUM_pc_tota_mon_num_shift            (0)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_MON_NUM_pc_tota_mon_num_mask             (0xFFFFFFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_MON_NUM_pc_tota_mon_num(data)            (0xFFFFFFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_MON_NUM_get_pc_tota_mon_num(data)        (0xFFFFFFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_ACK_NUM                                 0x1809E030
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_ACK_NUM_reg_addr                         "0xB809E030"
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_ACK_NUM_reg                              0xB809E030
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_ACK_NUM_inst_addr                        "0x000E"
#define  set_DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_ACK_NUM_reg(data)                    (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_ACK_NUM_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_ACK_NUM_reg                          (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_ACK_NUM_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_ACK_NUM_pc_tota_ack_num_shift            (0)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_ACK_NUM_pc_tota_ack_num_mask             (0xFFFFFFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_ACK_NUM_pc_tota_ack_num(data)            (0xFFFFFFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_ACK_NUM_get_pc_tota_ack_num(data)        (0xFFFFFFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_IDL_NUM                                 0x1809E034
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_IDL_NUM_reg_addr                         "0xB809E034"
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_IDL_NUM_reg                              0xB809E034
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_IDL_NUM_inst_addr                        "0x000F"
#define  set_DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_IDL_NUM_reg(data)                    (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_IDL_NUM_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_IDL_NUM_reg                          (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_IDL_NUM_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_IDL_NUM_pc_tota_idl_num_shift            (0)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_IDL_NUM_pc_tota_idl_num_mask             (0xFFFFFFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_IDL_NUM_pc_tota_idl_num(data)            (0xFFFFFFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_TOTA_IDL_NUM_get_pc_tota_idl_num(data)        (0xFFFFFFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1                                   0x1809E038
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_reg_addr                           "0xB809E038"
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_reg                                0xB809E038
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_inst_addr                          "0x0010"
#define  set_DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_reg(data)                      (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_reg                            (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_pc_prog2_sel_shift                 (16)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_pc_prog1_sel_shift                 (8)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_pc_prog0_sel_shift                 (0)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_pc_prog2_sel_mask                  (0x000F0000)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_pc_prog1_sel_mask                  (0x00000F00)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_pc_prog0_sel_mask                  (0x0000000F)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_pc_prog2_sel(data)                 (0x000F0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_pc_prog1_sel(data)                 (0x00000F00&((data)<<8))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_pc_prog0_sel(data)                 (0x0000000F&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_get_pc_prog2_sel(data)             ((0x000F0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_get_pc_prog1_sel(data)             ((0x00000F00&(data))>>8)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl1_get_pc_prog0_sel(data)             (0x0000000F&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2                                   0x1809E03C
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_reg_addr                           "0xB809E03C"
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_reg                                0xB809E03C
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_inst_addr                          "0x0011"
#define  set_DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_reg(data)                      (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_reg                            (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_pc_prog2_req_occur_shift           (2)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_pc_prog1_req_occur_shift           (1)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_pc_prog0_req_occur_shift           (0)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_pc_prog2_req_occur_mask            (0x00000004)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_pc_prog1_req_occur_mask            (0x00000002)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_pc_prog0_req_occur_mask            (0x00000001)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_pc_prog2_req_occur(data)           (0x00000004&((data)<<2))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_pc_prog1_req_occur(data)           (0x00000002&((data)<<1))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_pc_prog0_req_occur(data)           (0x00000001&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_get_pc_prog2_req_occur(data)       ((0x00000004&(data))>>2)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_get_pc_prog1_req_occur(data)       ((0x00000002&(data))>>1)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_ctrl2_get_pc_prog0_req_occur(data)       (0x00000001&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_channel_sel                           0x1809E040
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_channel_sel_reg_addr                   "0xB809E040"
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_channel_sel_reg                        0xB809E040
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_channel_sel_inst_addr                  "0x0012"
#define  set_DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_channel_sel_reg(data)              (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_channel_sel_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_channel_sel_reg                    (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_channel_sel_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_channel_sel_prog_channel_sel_shift     (0)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_channel_sel_prog_channel_sel_mask      (0x00000003)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_channel_sel_prog_channel_sel(data)     (0x00000003&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_channel_sel_get_prog_channel_sel(data) (0x00000003&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_acc_lat                               0x1809E044
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_acc_lat_reg_addr                       "0xB809E044"
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_acc_lat_reg                            0xB809E044
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_acc_lat_inst_addr                      "0x0013"
#define  set_DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_acc_lat_reg(data)                  (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_acc_lat_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_acc_lat_reg                        (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_acc_lat_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_acc_lat_prog_acc_lat_shift             (0)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_acc_lat_prog_acc_lat_mask              (0xFFFFFFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_acc_lat_prog_acc_lat(data)             (0xFFFFFFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_acc_lat_get_prog_acc_lat(data)         (0xFFFFFFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_max_lat                               0x1809E048
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_max_lat_reg_addr                       "0xB809E048"
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_max_lat_reg                            0xB809E048
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_max_lat_inst_addr                      "0x0014"
#define  set_DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_max_lat_reg(data)                  (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_max_lat_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_max_lat_reg                        (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_max_lat_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_max_lat_prog_max_lat_shift             (0)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_max_lat_prog_max_lat_mask              (0x0000FFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_max_lat_prog_max_lat(data)             (0x0000FFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_max_lat_get_prog_max_lat(data)         (0x0000FFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_req_num                               0x1809E04C
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_req_num_reg_addr                       "0xB809E04C"
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_req_num_reg                            0xB809E04C
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_req_num_inst_addr                      "0x0015"
#define  set_DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_req_num_reg(data)                  (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_req_num_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_req_num_reg                        (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_req_num_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_req_num_prog_req_num_shift             (0)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_req_num_prog_req_num_mask              (0x00FFFFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_req_num_prog_req_num(data)             (0x00FFFFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_req_num_get_prog_req_num(data)         (0x00FFFFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_ack_num                               0x1809E050
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_ack_num_reg_addr                       "0xB809E050"
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_ack_num_reg                            0xB809E050
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_ack_num_inst_addr                      "0x0016"
#define  set_DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_ack_num_reg(data)                  (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_ack_num_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_ack_num_reg                        (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_ack_num_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_ack_num_prog_ack_num_shift             (0)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_ack_num_prog_ack_num_mask              (0xFFFFFFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_ack_num_prog_ack_num(data)             (0xFFFFFFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_ack_num_get_prog_ack_num(data)         (0xFFFFFFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_hitend                                0x1809E054
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_hitend_reg_addr                        "0xB809E054"
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_hitend_reg                             0xB809E054
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_hitend_inst_addr                       "0x0017"
#define  set_DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_hitend_reg(data)                   (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_hitend_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_hitend_reg                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_hitend_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_hitend_prog_hitend_cnt_shift           (0)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_hitend_prog_hitend_cnt_mask            (0x0000FFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_hitend_prog_hitend_cnt(data)           (0x0000FFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_PC_prog_0_hitend_get_prog_hitend_cnt(data)       (0x0000FFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL                                0x1809E058
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_reg_addr                        "0xB809E058"
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_reg                             0xB809E058
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_inst_addr                       "0x0018"
#define  set_DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_reg(data)                   (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_reg                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_bt_done_shift                   (4)
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_bt_bl_shift                     (3)
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_bt_data_inv_shift               (2)
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_bt_rw_shift                     (1)
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_bt_go_shift                     (0)
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_bt_done_mask                    (0x00000030)
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_bt_bl_mask                      (0x00000008)
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_bt_data_inv_mask                (0x00000004)
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_bt_rw_mask                      (0x00000002)
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_bt_go_mask                      (0x00000001)
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_bt_done(data)                   (0x00000030&((data)<<4))
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_bt_bl(data)                     (0x00000008&((data)<<3))
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_bt_data_inv(data)               (0x00000004&((data)<<2))
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_bt_rw(data)                     (0x00000002&((data)<<1))
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_bt_go(data)                     (0x00000001&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_get_bt_done(data)               ((0x00000030&(data))>>4)
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_get_bt_bl(data)                 ((0x00000008&(data))>>3)
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_get_bt_data_inv(data)           ((0x00000004&(data))>>2)
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_get_bt_rw(data)                 ((0x00000002&(data))>>1)
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_CTRL_get_bt_go(data)                 (0x00000001&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_ADDR_DATA                           0x1809E05C
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_ADDR_DATA_reg_addr                   "0xB809E05C"
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_ADDR_DATA_reg                        0xB809E05C
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_ADDR_DATA_inst_addr                  "0x0019"
#define  set_DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_ADDR_DATA_reg(data)              (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_ADDR_DATA_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_ADDR_DATA_reg                    (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_ADDR_DATA_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_ADDR_DATA_bt_addr_data_shift         (4)
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_ADDR_DATA_bt_addr_data_mask          (0xFFFFFFF0)
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_ADDR_DATA_bt_addr_data(data)         (0xFFFFFFF0&((data)<<4))
#define  DBUS_WRAPPER_MEMC_DCU1_BRIDGE_TEST_ADDR_DATA_get_bt_addr_data(data)     ((0xFFFFFFF0&(data))>>4)

#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR0                                         0x1809E060
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR0_reg_addr                                 "0xB809E060"
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR0_reg                                      0xB809E060
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR0_inst_addr                                "0x001A"
#define  set_DBUS_WRAPPER_MEMC_DCU1_ARB_SR0_reg(data)                            (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_ARB_SR0_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_ARB_SR0_reg                                  (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_ARB_SR0_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR0_sb_req_shift                             (16)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR0_sb_gnt_shift                             (0)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR0_sb_req_mask                              (0x03FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR0_sb_gnt_mask                              (0x000003FF)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR0_sb_req(data)                             (0x03FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR0_sb_gnt(data)                             (0x000003FF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR0_get_sb_req(data)                         ((0x03FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR0_get_sb_gnt(data)                         (0x000003FF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR1                                         0x1809E064
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_reg_addr                                 "0xB809E064"
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_reg                                      0xB809E064
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_inst_addr                                "0x001B"
#define  set_DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_reg(data)                            (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_reg                                  (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_time_stamp_sel_shift                     (24)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_time_stamp_shift                         (16)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_win_latcnt_shift                         (0)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_time_stamp_sel_mask                      (0x0F000000)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_time_stamp_mask                          (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_win_latcnt_mask                          (0x000000FF)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_time_stamp_sel(data)                     (0x0F000000&((data)<<24))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_time_stamp(data)                         (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_win_latcnt(data)                         (0x000000FF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_get_time_stamp_sel(data)                 ((0x0F000000&(data))>>24)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_get_time_stamp(data)                     ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_ARB_SR1_get_win_latcnt(data)                     (0x000000FF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_0                                      0x1809E068
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_reg_addr                              "0xB809E068"
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_reg                                   0xB809E068
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_inst_addr                             "0x001C"
#define  set_DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_max_req_num_0_shift                   (24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_req_thr_0_shift                       (16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_time_thr_0_shift                      (0)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_max_req_num_0_mask                    (0xFF000000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_req_thr_0_mask                        (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_time_thr_0_mask                       (0x0000FFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_max_req_num_0(data)                   (0xFF000000&((data)<<24))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_req_thr_0(data)                       (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_time_thr_0(data)                      (0x0000FFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_get_max_req_num_0(data)               ((0xFF000000&(data))>>24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_get_req_thr_0(data)                   ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_0_get_time_thr_0(data)                  (0x0000FFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_1                                      0x1809E06C
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_reg_addr                              "0xB809E06C"
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_reg                                   0xB809E06C
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_inst_addr                             "0x001D"
#define  set_DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_max_req_num_1_shift                   (24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_req_thr_1_shift                       (16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_time_thr_1_shift                      (0)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_max_req_num_1_mask                    (0xFF000000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_req_thr_1_mask                        (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_time_thr_1_mask                       (0x0000FFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_max_req_num_1(data)                   (0xFF000000&((data)<<24))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_req_thr_1(data)                       (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_time_thr_1(data)                      (0x0000FFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_get_max_req_num_1(data)               ((0xFF000000&(data))>>24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_get_req_thr_1(data)                   ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_1_get_time_thr_1(data)                  (0x0000FFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_2                                      0x1809E070
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_reg_addr                              "0xB809E070"
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_reg                                   0xB809E070
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_inst_addr                             "0x001E"
#define  set_DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_max_req_num_2_shift                   (24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_req_thr_2_shift                       (16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_time_thr_2_shift                      (0)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_max_req_num_2_mask                    (0xFF000000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_req_thr_2_mask                        (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_time_thr_2_mask                       (0x0000FFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_max_req_num_2(data)                   (0xFF000000&((data)<<24))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_req_thr_2(data)                       (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_time_thr_2(data)                      (0x0000FFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_get_max_req_num_2(data)               ((0xFF000000&(data))>>24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_get_req_thr_2(data)                   ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_2_get_time_thr_2(data)                  (0x0000FFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_3                                      0x1809E074
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_reg_addr                              "0xB809E074"
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_reg                                   0xB809E074
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_inst_addr                             "0x001F"
#define  set_DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_max_req_num_3_shift                   (24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_req_thr_3_shift                       (16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_time_thr_3_shift                      (0)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_max_req_num_3_mask                    (0xFF000000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_req_thr_3_mask                        (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_time_thr_3_mask                       (0x0000FFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_max_req_num_3(data)                   (0xFF000000&((data)<<24))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_req_thr_3(data)                       (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_time_thr_3(data)                      (0x0000FFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_get_max_req_num_3(data)               ((0xFF000000&(data))>>24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_get_req_thr_3(data)                   ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_3_get_time_thr_3(data)                  (0x0000FFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_4                                      0x1809E078
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_reg_addr                              "0xB809E078"
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_reg                                   0xB809E078
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_inst_addr                             "0x0020"
#define  set_DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_max_req_num_4_shift                   (24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_req_thr_4_shift                       (16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_time_thr_4_shift                      (0)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_max_req_num_4_mask                    (0xFF000000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_req_thr_4_mask                        (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_time_thr_4_mask                       (0x0000FFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_max_req_num_4(data)                   (0xFF000000&((data)<<24))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_req_thr_4(data)                       (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_time_thr_4(data)                      (0x0000FFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_get_max_req_num_4(data)               ((0xFF000000&(data))>>24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_get_req_thr_4(data)                   ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_4_get_time_thr_4(data)                  (0x0000FFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_5                                      0x1809E07C
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_reg_addr                              "0xB809E07C"
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_reg                                   0xB809E07C
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_inst_addr                             "0x0021"
#define  set_DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_max_req_num_5_shift                   (24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_req_thr_5_shift                       (16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_time_thr_5_shift                      (0)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_max_req_num_5_mask                    (0xFF000000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_req_thr_5_mask                        (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_time_thr_5_mask                       (0x0000FFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_max_req_num_5(data)                   (0xFF000000&((data)<<24))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_req_thr_5(data)                       (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_time_thr_5(data)                      (0x0000FFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_get_max_req_num_5(data)               ((0xFF000000&(data))>>24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_get_req_thr_5(data)                   ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_5_get_time_thr_5(data)                  (0x0000FFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_6                                      0x1809E080
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_reg_addr                              "0xB809E080"
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_reg                                   0xB809E080
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_inst_addr                             "0x0022"
#define  set_DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_max_req_num_6_shift                   (24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_req_thr_6_shift                       (16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_time_thr_6_shift                      (0)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_max_req_num_6_mask                    (0xFF000000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_req_thr_6_mask                        (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_time_thr_6_mask                       (0x0000FFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_max_req_num_6(data)                   (0xFF000000&((data)<<24))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_req_thr_6(data)                       (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_time_thr_6(data)                      (0x0000FFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_get_max_req_num_6(data)               ((0xFF000000&(data))>>24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_get_req_thr_6(data)                   ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_6_get_time_thr_6(data)                  (0x0000FFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_7                                      0x1809E084
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_reg_addr                              "0xB809E084"
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_reg                                   0xB809E084
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_inst_addr                             "0x0023"
#define  set_DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_max_req_num_7_shift                   (24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_req_thr_7_shift                       (16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_time_thr_7_shift                      (0)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_max_req_num_7_mask                    (0xFF000000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_req_thr_7_mask                        (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_time_thr_7_mask                       (0x0000FFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_max_req_num_7(data)                   (0xFF000000&((data)<<24))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_req_thr_7(data)                       (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_time_thr_7(data)                      (0x0000FFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_get_max_req_num_7(data)               ((0xFF000000&(data))>>24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_get_req_thr_7(data)                   ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_7_get_time_thr_7(data)                  (0x0000FFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_8                                      0x1809E10C
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_reg_addr                              "0xB809E10C"
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_reg                                   0xB809E10C
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_inst_addr                             "0x0024"
#define  set_DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_max_req_num_8_shift                   (24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_req_thr_8_shift                       (16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_time_thr_8_shift                      (0)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_max_req_num_8_mask                    (0xFF000000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_req_thr_8_mask                        (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_time_thr_8_mask                       (0x0000FFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_max_req_num_8(data)                   (0xFF000000&((data)<<24))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_req_thr_8(data)                       (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_time_thr_8(data)                      (0x0000FFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_get_max_req_num_8(data)               ((0xFF000000&(data))>>24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_get_req_thr_8(data)                   ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_8_get_time_thr_8(data)                  (0x0000FFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_9                                      0x1809E110
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_reg_addr                              "0xB809E110"
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_reg                                   0xB809E110
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_inst_addr                             "0x0025"
#define  set_DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_max_req_num_9_shift                   (24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_req_thr_9_shift                       (16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_time_thr_9_shift                      (0)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_max_req_num_9_mask                    (0xFF000000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_req_thr_9_mask                        (0x00FF0000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_time_thr_9_mask                       (0x0000FFFF)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_max_req_num_9(data)                   (0xFF000000&((data)<<24))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_req_thr_9(data)                       (0x00FF0000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_time_thr_9(data)                      (0x0000FFFF&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_get_max_req_num_9(data)               ((0xFF000000&(data))>>24)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_get_req_thr_9(data)                   ((0x00FF0000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_9_get_time_thr_9(data)                  (0x0000FFFF&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en                                     0x1809E088
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_reg_addr                             "0xB809E088"
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_reg                                  0xB809E088
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_inst_addr                            "0x0026"
#define  set_DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_reg(data)                        (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_reg                              (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_len_scheme_en_shift                  (31)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_9_shift                (19)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_9_shift                  (18)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_8_shift                (17)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_8_shift                  (16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_7_shift                (15)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_7_shift                  (14)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_6_shift                (13)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_6_shift                  (12)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_5_shift                (11)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_5_shift                  (10)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_4_shift                (9)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_4_shift                  (8)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_3_shift                (7)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_3_shift                  (6)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_2_shift                (5)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_2_shift                  (4)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_1_shift                (3)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_1_shift                  (2)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_0_shift                (1)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_0_shift                  (0)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_len_scheme_en_mask                   (0x80000000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_9_mask                 (0x00080000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_9_mask                   (0x00040000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_8_mask                 (0x00020000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_8_mask                   (0x00010000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_7_mask                 (0x00008000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_7_mask                   (0x00004000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_6_mask                 (0x00002000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_6_mask                   (0x00001000)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_5_mask                 (0x00000800)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_5_mask                   (0x00000400)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_4_mask                 (0x00000200)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_4_mask                   (0x00000100)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_3_mask                 (0x00000080)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_3_mask                   (0x00000040)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_2_mask                 (0x00000020)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_2_mask                   (0x00000010)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_1_mask                 (0x00000008)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_1_mask                   (0x00000004)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_0_mask                 (0x00000002)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_0_mask                   (0x00000001)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_len_scheme_en(data)                  (0x80000000&((data)<<31))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_9(data)                (0x00080000&((data)<<19))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_9(data)                  (0x00040000&((data)<<18))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_8(data)                (0x00020000&((data)<<17))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_8(data)                  (0x00010000&((data)<<16))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_7(data)                (0x00008000&((data)<<15))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_7(data)                  (0x00004000&((data)<<14))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_6(data)                (0x00002000&((data)<<13))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_6(data)                  (0x00001000&((data)<<12))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_5(data)                (0x00000800&((data)<<11))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_5(data)                  (0x00000400&((data)<<10))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_4(data)                (0x00000200&((data)<<9))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_4(data)                  (0x00000100&((data)<<8))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_3(data)                (0x00000080&((data)<<7))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_3(data)                  (0x00000040&((data)<<6))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_2(data)                (0x00000020&((data)<<5))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_2(data)                  (0x00000010&((data)<<4))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_1(data)                (0x00000008&((data)<<3))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_1(data)                  (0x00000004&((data)<<2))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_status_clr_0(data)                (0x00000002&((data)<<1))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_bw_limit_en_0(data)                  (0x00000001&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_len_scheme_en(data)              ((0x80000000&(data))>>31)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_status_clr_9(data)            ((0x00080000&(data))>>19)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_limit_en_9(data)              ((0x00040000&(data))>>18)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_status_clr_8(data)            ((0x00020000&(data))>>17)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_limit_en_8(data)              ((0x00010000&(data))>>16)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_status_clr_7(data)            ((0x00008000&(data))>>15)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_limit_en_7(data)              ((0x00004000&(data))>>14)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_status_clr_6(data)            ((0x00002000&(data))>>13)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_limit_en_6(data)              ((0x00001000&(data))>>12)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_status_clr_5(data)            ((0x00000800&(data))>>11)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_limit_en_5(data)              ((0x00000400&(data))>>10)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_status_clr_4(data)            ((0x00000200&(data))>>9)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_limit_en_4(data)              ((0x00000100&(data))>>8)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_status_clr_3(data)            ((0x00000080&(data))>>7)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_limit_en_3(data)              ((0x00000040&(data))>>6)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_status_clr_2(data)            ((0x00000020&(data))>>5)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_limit_en_2(data)              ((0x00000010&(data))>>4)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_status_clr_1(data)            ((0x00000008&(data))>>3)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_limit_en_1(data)              ((0x00000004&(data))>>2)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_status_clr_0(data)            ((0x00000002&(data))>>1)
#define  DBUS_WRAPPER_MEMC_DCU1_bw_limit_en_get_bw_limit_en_0(data)              (0x00000001&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_queue_ctrl                                      0x1809E08C
#define  DBUS_WRAPPER_MEMC_DCU1_queue_ctrl_reg_addr                              "0xB809E08C"
#define  DBUS_WRAPPER_MEMC_DCU1_queue_ctrl_reg                                   0xB809E08C
#define  DBUS_WRAPPER_MEMC_DCU1_queue_ctrl_inst_addr                             "0x0027"
#define  set_DBUS_WRAPPER_MEMC_DCU1_queue_ctrl_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_queue_ctrl_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_queue_ctrl_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_queue_ctrl_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_queue_ctrl_rd_queue_num_shift                    (8)
#define  DBUS_WRAPPER_MEMC_DCU1_queue_ctrl_wr_queue_num_shift                    (0)
#define  DBUS_WRAPPER_MEMC_DCU1_queue_ctrl_rd_queue_num_mask                     (0x00001F00)
#define  DBUS_WRAPPER_MEMC_DCU1_queue_ctrl_wr_queue_num_mask                     (0x0000000F)
#define  DBUS_WRAPPER_MEMC_DCU1_queue_ctrl_rd_queue_num(data)                    (0x00001F00&((data)<<8))
#define  DBUS_WRAPPER_MEMC_DCU1_queue_ctrl_wr_queue_num(data)                    (0x0000000F&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_queue_ctrl_get_rd_queue_num(data)                ((0x00001F00&(data))>>8)
#define  DBUS_WRAPPER_MEMC_DCU1_queue_ctrl_get_wr_queue_num(data)                (0x0000000F&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl                                        0x1809E090
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_reg_addr                                "0xB809E090"
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_reg                                     0xB809E090
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_inst_addr                               "0x0028"
#define  set_DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_reg(data)                           (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_reg                                 (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_cti_space_margin_kmer_shift             (9)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_cti_grp_cmd_err_kmer_shift              (8)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_cti_space_margin_kmew_shift             (5)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_cti_grp_cmd_err_kmew_shift              (4)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_cti_status_clr_shift                    (1)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_queue_flush_shift                       (0)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_cti_space_margin_kmer_mask              (0x00000E00)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_cti_grp_cmd_err_kmer_mask               (0x00000100)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_cti_space_margin_kmew_mask              (0x000000E0)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_cti_grp_cmd_err_kmew_mask               (0x00000010)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_cti_status_clr_mask                     (0x00000002)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_queue_flush_mask                        (0x00000001)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_cti_space_margin_kmer(data)             (0x00000E00&((data)<<9))
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_cti_grp_cmd_err_kmer(data)              (0x00000100&((data)<<8))
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_cti_space_margin_kmew(data)             (0x000000E0&((data)<<5))
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_cti_grp_cmd_err_kmew(data)              (0x00000010&((data)<<4))
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_cti_status_clr(data)                    (0x00000002&((data)<<1))
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_queue_flush(data)                       (0x00000001&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_get_cti_space_margin_kmer(data)         ((0x00000E00&(data))>>9)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_get_cti_grp_cmd_err_kmer(data)          ((0x00000100&(data))>>8)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_get_cti_space_margin_kmew(data)         ((0x000000E0&(data))>>5)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_get_cti_grp_cmd_err_kmew(data)          ((0x00000010&(data))>>4)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_get_cti_status_clr(data)                ((0x00000002&(data))>>1)
#define  DBUS_WRAPPER_MEMC_DCU1_cti_ctrl_get_queue_flush(data)                   (0x00000001&(data))

#define  DBUS_WRAPPER_MEMC_DCU1_error_status                                    0x1809E094
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_reg_addr                            "0xB809E094"
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_reg                                 0xB809E094
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_inst_addr                           "0x0029"
#define  set_DBUS_WRAPPER_MEMC_DCU1_error_status_reg(data)                       (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_error_status_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_error_status_reg                             (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_error_status_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_error_clr_shift                     (31)
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_error_zero_length_id_shift          (12)
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_error_read_full_shift               (9)
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_error_write_full_shift              (8)
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_error_clr_mask                      (0x80000000)
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_error_zero_length_id_mask           (0x0000F000)
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_error_read_full_mask                (0x00000200)
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_error_write_full_mask               (0x00000100)
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_error_clr(data)                     (0x80000000&((data)<<31))
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_error_zero_length_id(data)          (0x0000F000&((data)<<12))
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_error_read_full(data)               (0x00000200&((data)<<9))
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_error_write_full(data)              (0x00000100&((data)<<8))
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_get_error_clr(data)                 ((0x80000000&(data))>>31)
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_get_error_zero_length_id(data)      ((0x0000F000&(data))>>12)
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_get_error_read_full(data)           ((0x00000200&(data))>>9)
#define  DBUS_WRAPPER_MEMC_DCU1_error_status_get_error_write_full(data)          ((0x00000100&(data))>>8)

#define  DBUS_WRAPPER_MEMC_DCU1_DEBUG                                           0x1809E098
#define  DBUS_WRAPPER_MEMC_DCU1_DEBUG_reg_addr                                   "0xB809E098"
#define  DBUS_WRAPPER_MEMC_DCU1_DEBUG_reg                                        0xB809E098
#define  DBUS_WRAPPER_MEMC_DCU1_DEBUG_inst_addr                                  "0x002A"
#define  set_DBUS_WRAPPER_MEMC_DCU1_DEBUG_reg(data)                              (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_DEBUG_reg)=data)
#define  get_DBUS_WRAPPER_MEMC_DCU1_DEBUG_reg                                    (*((volatile unsigned int*)DBUS_WRAPPER_MEMC_DCU1_DEBUG_reg))
#define  DBUS_WRAPPER_MEMC_DCU1_DEBUG_sb_debug_mode_shift                        (0)
#define  DBUS_WRAPPER_MEMC_DCU1_DEBUG_sb_debug_mode_mask                         (0x0000000F)
#define  DBUS_WRAPPER_MEMC_DCU1_DEBUG_sb_debug_mode(data)                        (0x0000000F&(data))
#define  DBUS_WRAPPER_MEMC_DCU1_DEBUG_get_sb_debug_mode(data)                    (0x0000000F&(data))

#define  DBUS_WRAPPER_Memc_wrapper_ctrl1                                        0x1809E0A0
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_reg_addr                                "0xB809E0A0"
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_reg                                     0xB809E0A0
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_inst_addr                               "0x002B"
#define  set_DBUS_WRAPPER_Memc_wrapper_ctrl1_reg(data)                           (*((volatile unsigned int*)DBUS_WRAPPER_Memc_wrapper_ctrl1_reg)=data)
#define  get_DBUS_WRAPPER_Memc_wrapper_ctrl1_reg                                 (*((volatile unsigned int*)DBUS_WRAPPER_Memc_wrapper_ctrl1_reg))
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_kme_m0_rd_outstanding_num_shift         (12)
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_kme_m0_wr_outstanding_num_shift         (4)
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_bready_ignore_shift                     (1)
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_bresp_select_shift                      (0)
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_kme_m0_rd_outstanding_num_mask          (0x0001F000)
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_kme_m0_wr_outstanding_num_mask          (0x000001F0)
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_bready_ignore_mask                      (0x00000002)
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_bresp_select_mask                       (0x00000001)
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_kme_m0_rd_outstanding_num(data)         (0x0001F000&((data)<<12))
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_kme_m0_wr_outstanding_num(data)         (0x000001F0&((data)<<4))
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_bready_ignore(data)                     (0x00000002&((data)<<1))
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_bresp_select(data)                      (0x00000001&(data))
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_get_kme_m0_rd_outstanding_num(data)     ((0x0001F000&(data))>>12)
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_get_kme_m0_wr_outstanding_num(data)     ((0x000001F0&(data))>>4)
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_get_bready_ignore(data)                 ((0x00000002&(data))>>1)
#define  DBUS_WRAPPER_Memc_wrapper_ctrl1_get_bresp_select(data)                  (0x00000001&(data))

#define  DBUS_WRAPPER_Memc_wrapper_status1                                      0x1809E0A8
#define  DBUS_WRAPPER_Memc_wrapper_status1_reg_addr                              "0xB809E0A8"
#define  DBUS_WRAPPER_Memc_wrapper_status1_reg                                   0xB809E0A8
#define  DBUS_WRAPPER_Memc_wrapper_status1_inst_addr                             "0x002C"
#define  set_DBUS_WRAPPER_Memc_wrapper_status1_reg(data)                         (*((volatile unsigned int*)DBUS_WRAPPER_Memc_wrapper_status1_reg)=data)
#define  get_DBUS_WRAPPER_Memc_wrapper_status1_reg                               (*((volatile unsigned int*)DBUS_WRAPPER_Memc_wrapper_status1_reg))
#define  DBUS_WRAPPER_Memc_wrapper_status1_kme_m0_rd_outstanding_cnt_shift       (24)
#define  DBUS_WRAPPER_Memc_wrapper_status1_kme_m0_wr_outstanding_cnt_shift       (16)
#define  DBUS_WRAPPER_Memc_wrapper_status1_kme_m0_rd_outstanding_cnt_mask        (0x1F000000)
#define  DBUS_WRAPPER_Memc_wrapper_status1_kme_m0_wr_outstanding_cnt_mask        (0x001F0000)
#define  DBUS_WRAPPER_Memc_wrapper_status1_kme_m0_rd_outstanding_cnt(data)       (0x1F000000&((data)<<24))
#define  DBUS_WRAPPER_Memc_wrapper_status1_kme_m0_wr_outstanding_cnt(data)       (0x001F0000&((data)<<16))
#define  DBUS_WRAPPER_Memc_wrapper_status1_get_kme_m0_rd_outstanding_cnt(data)   ((0x1F000000&(data))>>24)
#define  DBUS_WRAPPER_Memc_wrapper_status1_get_kme_m0_wr_outstanding_cnt(data)   ((0x001F0000&(data))>>16)

#define  DBUS_WRAPPER_Memc_wrapper_fifo_status                                  0x1809E0B0
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_reg_addr                          "0xB809E0B0"
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_reg                               0xB809E0B0
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_inst_addr                         "0x002D"
#define  set_DBUS_WRAPPER_Memc_wrapper_fifo_status_reg(data)                     (*((volatile unsigned int*)DBUS_WRAPPER_Memc_wrapper_fifo_status_reg)=data)
#define  get_DBUS_WRAPPER_Memc_wrapper_fifo_status_reg                           (*((volatile unsigned int*)DBUS_WRAPPER_Memc_wrapper_fifo_status_reg))
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_rcmd_fifo_empty_shift      (27)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_rcmd_fifo_full_shift       (26)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_rid_fifo_empty_shift       (25)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_rid_fifo_full_shift        (24)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wdata_buffer_empty_shift   (23)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wdata_buffer_full_shift    (22)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wdata_fifo_empty_shift     (21)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wdata_fifo_full_shift      (20)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wcmd_fifo_empty_shift      (19)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wcmd_fifo_full_shift       (18)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wid_fifo_empty_shift       (17)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wid_fifo_full_shift        (16)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_rcmd_fifo_empty_mask       (0x08000000)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_rcmd_fifo_full_mask        (0x04000000)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_rid_fifo_empty_mask        (0x02000000)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_rid_fifo_full_mask         (0x01000000)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wdata_buffer_empty_mask    (0x00800000)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wdata_buffer_full_mask     (0x00400000)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wdata_fifo_empty_mask      (0x00200000)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wdata_fifo_full_mask       (0x00100000)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wcmd_fifo_empty_mask       (0x00080000)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wcmd_fifo_full_mask        (0x00040000)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wid_fifo_empty_mask        (0x00020000)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wid_fifo_full_mask         (0x00010000)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_rcmd_fifo_empty(data)      (0x08000000&((data)<<27))
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_rcmd_fifo_full(data)       (0x04000000&((data)<<26))
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_rid_fifo_empty(data)       (0x02000000&((data)<<25))
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_rid_fifo_full(data)        (0x01000000&((data)<<24))
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wdata_buffer_empty(data)   (0x00800000&((data)<<23))
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wdata_buffer_full(data)    (0x00400000&((data)<<22))
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wdata_fifo_empty(data)     (0x00200000&((data)<<21))
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wdata_fifo_full(data)      (0x00100000&((data)<<20))
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wcmd_fifo_empty(data)      (0x00080000&((data)<<19))
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wcmd_fifo_full(data)       (0x00040000&((data)<<18))
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wid_fifo_empty(data)       (0x00020000&((data)<<17))
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_kme_m0_wid_fifo_full(data)        (0x00010000&((data)<<16))
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_get_kme_m0_rcmd_fifo_empty(data)  ((0x08000000&(data))>>27)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_get_kme_m0_rcmd_fifo_full(data)   ((0x04000000&(data))>>26)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_get_kme_m0_rid_fifo_empty(data)   ((0x02000000&(data))>>25)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_get_kme_m0_rid_fifo_full(data)    ((0x01000000&(data))>>24)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_get_kme_m0_wdata_buffer_empty(data) ((0x00800000&(data))>>23)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_get_kme_m0_wdata_buffer_full(data) ((0x00400000&(data))>>22)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_get_kme_m0_wdata_fifo_empty(data) ((0x00200000&(data))>>21)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_get_kme_m0_wdata_fifo_full(data)  ((0x00100000&(data))>>20)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_get_kme_m0_wcmd_fifo_empty(data)  ((0x00080000&(data))>>19)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_get_kme_m0_wcmd_fifo_full(data)   ((0x00040000&(data))>>18)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_get_kme_m0_wid_fifo_empty(data)   ((0x00020000&(data))>>17)
#define  DBUS_WRAPPER_Memc_wrapper_fifo_status_get_kme_m0_wid_fifo_full(data)    ((0x00010000&(data))>>16)

#define  DBUS_WRAPPER_Me_uplimit_addr                                           0x1809E0B4
#define  DBUS_WRAPPER_Me_uplimit_addr_reg_addr                                   "0xB809E0B4"
#define  DBUS_WRAPPER_Me_uplimit_addr_reg                                        0xB809E0B4
#define  DBUS_WRAPPER_Me_uplimit_addr_inst_addr                                  "0x002E"
#define  set_DBUS_WRAPPER_Me_uplimit_addr_reg(data)                              (*((volatile unsigned int*)DBUS_WRAPPER_Me_uplimit_addr_reg)=data)
#define  get_DBUS_WRAPPER_Me_uplimit_addr_reg                                    (*((volatile unsigned int*)DBUS_WRAPPER_Me_uplimit_addr_reg))
#define  DBUS_WRAPPER_Me_uplimit_addr_kme_uplimit_addr_shift                     (4)
#define  DBUS_WRAPPER_Me_uplimit_addr_kme_uplimit_addr_mask                      (0xFFFFFFF0)
#define  DBUS_WRAPPER_Me_uplimit_addr_kme_uplimit_addr(data)                     (0xFFFFFFF0&((data)<<4))
#define  DBUS_WRAPPER_Me_uplimit_addr_get_kme_uplimit_addr(data)                 ((0xFFFFFFF0&(data))>>4)

#define  DBUS_WRAPPER_Me_downlimit_addr                                         0x1809E0B8
#define  DBUS_WRAPPER_Me_downlimit_addr_reg_addr                                 "0xB809E0B8"
#define  DBUS_WRAPPER_Me_downlimit_addr_reg                                      0xB809E0B8
#define  DBUS_WRAPPER_Me_downlimit_addr_inst_addr                                "0x002F"
#define  set_DBUS_WRAPPER_Me_downlimit_addr_reg(data)                            (*((volatile unsigned int*)DBUS_WRAPPER_Me_downlimit_addr_reg)=data)
#define  get_DBUS_WRAPPER_Me_downlimit_addr_reg                                  (*((volatile unsigned int*)DBUS_WRAPPER_Me_downlimit_addr_reg))
#define  DBUS_WRAPPER_Me_downlimit_addr_kme_downlimit_addr_shift                 (4)
#define  DBUS_WRAPPER_Me_downlimit_addr_kme_downlimit_addr_mask                  (0xFFFFFFF0)
#define  DBUS_WRAPPER_Me_downlimit_addr_kme_downlimit_addr(data)                 (0xFFFFFFF0&((data)<<4))
#define  DBUS_WRAPPER_Me_downlimit_addr_get_kme_downlimit_addr(data)             ((0xFFFFFFF0&(data))>>4)

#define  DBUS_WRAPPER_irq_en                                                    0x1809E0C4
#define  DBUS_WRAPPER_irq_en_reg_addr                                            "0xB809E0C4"
#define  DBUS_WRAPPER_irq_en_reg                                                 0xB809E0C4
#define  DBUS_WRAPPER_irq_en_inst_addr                                           "0x0030"
#define  set_DBUS_WRAPPER_irq_en_reg(data)                                       (*((volatile unsigned int*)DBUS_WRAPPER_irq_en_reg)=data)
#define  get_DBUS_WRAPPER_irq_en_reg                                             (*((volatile unsigned int*)DBUS_WRAPPER_irq_en_reg))
#define  DBUS_WRAPPER_irq_en_kme_addr_gt_irq_en_shift                            (13)
#define  DBUS_WRAPPER_irq_en_kme_addr_lt_irq_en_shift                            (12)
#define  DBUS_WRAPPER_irq_en_kme_m0_rready_low_irq_en_shift                      (8)
#define  DBUS_WRAPPER_irq_en_kme_m0_awaddr_unaligned_irq_en_shift                (1)
#define  DBUS_WRAPPER_irq_en_kme_m0_araddr_unaligned_irq_en_shift                (0)
#define  DBUS_WRAPPER_irq_en_kme_addr_gt_irq_en_mask                             (0x00002000)
#define  DBUS_WRAPPER_irq_en_kme_addr_lt_irq_en_mask                             (0x00001000)
#define  DBUS_WRAPPER_irq_en_kme_m0_rready_low_irq_en_mask                       (0x00000100)
#define  DBUS_WRAPPER_irq_en_kme_m0_awaddr_unaligned_irq_en_mask                 (0x00000002)
#define  DBUS_WRAPPER_irq_en_kme_m0_araddr_unaligned_irq_en_mask                 (0x00000001)
#define  DBUS_WRAPPER_irq_en_kme_addr_gt_irq_en(data)                            (0x00002000&((data)<<13))
#define  DBUS_WRAPPER_irq_en_kme_addr_lt_irq_en(data)                            (0x00001000&((data)<<12))
#define  DBUS_WRAPPER_irq_en_kme_m0_rready_low_irq_en(data)                      (0x00000100&((data)<<8))
#define  DBUS_WRAPPER_irq_en_kme_m0_awaddr_unaligned_irq_en(data)                (0x00000002&((data)<<1))
#define  DBUS_WRAPPER_irq_en_kme_m0_araddr_unaligned_irq_en(data)                (0x00000001&(data))
#define  DBUS_WRAPPER_irq_en_get_kme_addr_gt_irq_en(data)                        ((0x00002000&(data))>>13)
#define  DBUS_WRAPPER_irq_en_get_kme_addr_lt_irq_en(data)                        ((0x00001000&(data))>>12)
#define  DBUS_WRAPPER_irq_en_get_kme_m0_rready_low_irq_en(data)                  ((0x00000100&(data))>>8)
#define  DBUS_WRAPPER_irq_en_get_kme_m0_awaddr_unaligned_irq_en(data)            ((0x00000002&(data))>>1)
#define  DBUS_WRAPPER_irq_en_get_kme_m0_araddr_unaligned_irq_en(data)            (0x00000001&(data))

#define  DBUS_WRAPPER_irq_status                                                0x1809E0C8
#define  DBUS_WRAPPER_irq_status_reg_addr                                        "0xB809E0C8"
#define  DBUS_WRAPPER_irq_status_reg                                             0xB809E0C8
#define  DBUS_WRAPPER_irq_status_inst_addr                                       "0x0031"
#define  set_DBUS_WRAPPER_irq_status_reg(data)                                   (*((volatile unsigned int*)DBUS_WRAPPER_irq_status_reg)=data)
#define  get_DBUS_WRAPPER_irq_status_reg                                         (*((volatile unsigned int*)DBUS_WRAPPER_irq_status_reg))
#define  DBUS_WRAPPER_irq_status_kme_addr_gt_err_shift                           (13)
#define  DBUS_WRAPPER_irq_status_kme_addr_lt_err_shift                           (12)
#define  DBUS_WRAPPER_irq_status_kme_m0_rready_low_err_shift                     (8)
#define  DBUS_WRAPPER_irq_status_kme_m0_awaddr_unaligned_err_shift               (1)
#define  DBUS_WRAPPER_irq_status_kme_m0_araddr_unaligned_err_shift               (0)
#define  DBUS_WRAPPER_irq_status_kme_addr_gt_err_mask                            (0x00002000)
#define  DBUS_WRAPPER_irq_status_kme_addr_lt_err_mask                            (0x00001000)
#define  DBUS_WRAPPER_irq_status_kme_m0_rready_low_err_mask                      (0x00000100)
#define  DBUS_WRAPPER_irq_status_kme_m0_awaddr_unaligned_err_mask                (0x00000002)
#define  DBUS_WRAPPER_irq_status_kme_m0_araddr_unaligned_err_mask                (0x00000001)
#define  DBUS_WRAPPER_irq_status_kme_addr_gt_err(data)                           (0x00002000&((data)<<13))
#define  DBUS_WRAPPER_irq_status_kme_addr_lt_err(data)                           (0x00001000&((data)<<12))
#define  DBUS_WRAPPER_irq_status_kme_m0_rready_low_err(data)                     (0x00000100&((data)<<8))
#define  DBUS_WRAPPER_irq_status_kme_m0_awaddr_unaligned_err(data)               (0x00000002&((data)<<1))
#define  DBUS_WRAPPER_irq_status_kme_m0_araddr_unaligned_err(data)               (0x00000001&(data))
#define  DBUS_WRAPPER_irq_status_get_kme_addr_gt_err(data)                       ((0x00002000&(data))>>13)
#define  DBUS_WRAPPER_irq_status_get_kme_addr_lt_err(data)                       ((0x00001000&(data))>>12)
#define  DBUS_WRAPPER_irq_status_get_kme_m0_rready_low_err(data)                 ((0x00000100&(data))>>8)
#define  DBUS_WRAPPER_irq_status_get_kme_m0_awaddr_unaligned_err(data)           ((0x00000002&(data))>>1)
#define  DBUS_WRAPPER_irq_status_get_kme_m0_araddr_unaligned_err(data)           (0x00000001&(data))

#define  DBUS_WRAPPER_bist_mode                                                 0x1809E0D4
#define  DBUS_WRAPPER_bist_mode_reg_addr                                         "0xB809E0D4"
#define  DBUS_WRAPPER_bist_mode_reg                                              0xB809E0D4
#define  DBUS_WRAPPER_bist_mode_inst_addr                                        "0x0032"
#define  set_DBUS_WRAPPER_bist_mode_reg(data)                                    (*((volatile unsigned int*)DBUS_WRAPPER_bist_mode_reg)=data)
#define  get_DBUS_WRAPPER_bist_mode_reg                                          (*((volatile unsigned int*)DBUS_WRAPPER_bist_mode_reg))
#define  DBUS_WRAPPER_bist_mode_kme_bist_mode_shift                              (0)
#define  DBUS_WRAPPER_bist_mode_kme_bist_mode_mask                               (0x00000001)
#define  DBUS_WRAPPER_bist_mode_kme_bist_mode(data)                              (0x00000001&(data))
#define  DBUS_WRAPPER_bist_mode_get_kme_bist_mode(data)                          (0x00000001&(data))

#define  DBUS_WRAPPER_drf_bist_mode                                             0x1809E0D8
#define  DBUS_WRAPPER_drf_bist_mode_reg_addr                                     "0xB809E0D8"
#define  DBUS_WRAPPER_drf_bist_mode_reg                                          0xB809E0D8
#define  DBUS_WRAPPER_drf_bist_mode_inst_addr                                    "0x0033"
#define  set_DBUS_WRAPPER_drf_bist_mode_reg(data)                                (*((volatile unsigned int*)DBUS_WRAPPER_drf_bist_mode_reg)=data)
#define  get_DBUS_WRAPPER_drf_bist_mode_reg                                      (*((volatile unsigned int*)DBUS_WRAPPER_drf_bist_mode_reg))
#define  DBUS_WRAPPER_drf_bist_mode_kme_drf_bist_mode_shift                      (0)
#define  DBUS_WRAPPER_drf_bist_mode_kme_drf_bist_mode_mask                       (0x00000001)
#define  DBUS_WRAPPER_drf_bist_mode_kme_drf_bist_mode(data)                      (0x00000001&(data))
#define  DBUS_WRAPPER_drf_bist_mode_get_kme_drf_bist_mode(data)                  (0x00000001&(data))

#define  DBUS_WRAPPER_drf_test_resume                                           0x1809E0DC
#define  DBUS_WRAPPER_drf_test_resume_reg_addr                                   "0xB809E0DC"
#define  DBUS_WRAPPER_drf_test_resume_reg                                        0xB809E0DC
#define  DBUS_WRAPPER_drf_test_resume_inst_addr                                  "0x0034"
#define  set_DBUS_WRAPPER_drf_test_resume_reg(data)                              (*((volatile unsigned int*)DBUS_WRAPPER_drf_test_resume_reg)=data)
#define  get_DBUS_WRAPPER_drf_test_resume_reg                                    (*((volatile unsigned int*)DBUS_WRAPPER_drf_test_resume_reg))
#define  DBUS_WRAPPER_drf_test_resume_kme_drf_test_resume_shift                  (0)
#define  DBUS_WRAPPER_drf_test_resume_kme_drf_test_resume_mask                   (0x00000001)
#define  DBUS_WRAPPER_drf_test_resume_kme_drf_test_resume(data)                  (0x00000001&(data))
#define  DBUS_WRAPPER_drf_test_resume_get_kme_drf_test_resume(data)              (0x00000001&(data))

#define  DBUS_WRAPPER_rm                                                        0x1809E0E0
#define  DBUS_WRAPPER_rm_reg_addr                                                "0xB809E0E0"
#define  DBUS_WRAPPER_rm_reg                                                     0xB809E0E0
#define  DBUS_WRAPPER_rm_inst_addr                                               "0x0035"
#define  set_DBUS_WRAPPER_rm_reg(data)                                           (*((volatile unsigned int*)DBUS_WRAPPER_rm_reg)=data)
#define  get_DBUS_WRAPPER_rm_reg                                                 (*((volatile unsigned int*)DBUS_WRAPPER_rm_reg))
#define  DBUS_WRAPPER_rm_kme_rme_shift                                           (8)
#define  DBUS_WRAPPER_rm_kme_rm_shift                                            (4)
#define  DBUS_WRAPPER_rm_kme_test1_shift                                         (1)
#define  DBUS_WRAPPER_rm_kme_ls_shift                                            (0)
#define  DBUS_WRAPPER_rm_kme_rme_mask                                            (0x00000100)
#define  DBUS_WRAPPER_rm_kme_rm_mask                                             (0x000000F0)
#define  DBUS_WRAPPER_rm_kme_test1_mask                                          (0x00000002)
#define  DBUS_WRAPPER_rm_kme_ls_mask                                             (0x00000001)
#define  DBUS_WRAPPER_rm_kme_rme(data)                                           (0x00000100&((data)<<8))
#define  DBUS_WRAPPER_rm_kme_rm(data)                                            (0x000000F0&((data)<<4))
#define  DBUS_WRAPPER_rm_kme_test1(data)                                         (0x00000002&((data)<<1))
#define  DBUS_WRAPPER_rm_kme_ls(data)                                            (0x00000001&(data))
#define  DBUS_WRAPPER_rm_get_kme_rme(data)                                       ((0x00000100&(data))>>8)
#define  DBUS_WRAPPER_rm_get_kme_rm(data)                                        ((0x000000F0&(data))>>4)
#define  DBUS_WRAPPER_rm_get_kme_test1(data)                                     ((0x00000002&(data))>>1)
#define  DBUS_WRAPPER_rm_get_kme_ls(data)                                        (0x00000001&(data))

#define  DBUS_WRAPPER_testrwm                                                   0x1809E0E4
#define  DBUS_WRAPPER_testrwm_reg_addr                                           "0xB809E0E4"
#define  DBUS_WRAPPER_testrwm_reg                                                0xB809E0E4
#define  DBUS_WRAPPER_testrwm_inst_addr                                          "0x0036"
#define  set_DBUS_WRAPPER_testrwm_reg(data)                                      (*((volatile unsigned int*)DBUS_WRAPPER_testrwm_reg)=data)
#define  get_DBUS_WRAPPER_testrwm_reg                                            (*((volatile unsigned int*)DBUS_WRAPPER_testrwm_reg))
#define  DBUS_WRAPPER_testrwm_kme_testrwm_shift                                  (0)
#define  DBUS_WRAPPER_testrwm_kme_testrwm_mask                                   (0x00000001)
#define  DBUS_WRAPPER_testrwm_kme_testrwm(data)                                  (0x00000001&(data))
#define  DBUS_WRAPPER_testrwm_get_kme_testrwm(data)                              (0x00000001&(data))

#define  DBUS_WRAPPER_bist_done                                                 0x1809E0E8
#define  DBUS_WRAPPER_bist_done_reg_addr                                         "0xB809E0E8"
#define  DBUS_WRAPPER_bist_done_reg                                              0xB809E0E8
#define  DBUS_WRAPPER_bist_done_inst_addr                                        "0x0037"
#define  set_DBUS_WRAPPER_bist_done_reg(data)                                    (*((volatile unsigned int*)DBUS_WRAPPER_bist_done_reg)=data)
#define  get_DBUS_WRAPPER_bist_done_reg                                          (*((volatile unsigned int*)DBUS_WRAPPER_bist_done_reg))
#define  DBUS_WRAPPER_bist_done_kme_bist_done_shift                              (0)
#define  DBUS_WRAPPER_bist_done_kme_bist_done_mask                               (0x00000001)
#define  DBUS_WRAPPER_bist_done_kme_bist_done(data)                              (0x00000001&(data))
#define  DBUS_WRAPPER_bist_done_get_kme_bist_done(data)                          (0x00000001&(data))

#define  DBUS_WRAPPER_drf_bist_done                                             0x1809E0EC
#define  DBUS_WRAPPER_drf_bist_done_reg_addr                                     "0xB809E0EC"
#define  DBUS_WRAPPER_drf_bist_done_reg                                          0xB809E0EC
#define  DBUS_WRAPPER_drf_bist_done_inst_addr                                    "0x0038"
#define  set_DBUS_WRAPPER_drf_bist_done_reg(data)                                (*((volatile unsigned int*)DBUS_WRAPPER_drf_bist_done_reg)=data)
#define  get_DBUS_WRAPPER_drf_bist_done_reg                                      (*((volatile unsigned int*)DBUS_WRAPPER_drf_bist_done_reg))
#define  DBUS_WRAPPER_drf_bist_done_kme_drf_bist_done_shift                      (0)
#define  DBUS_WRAPPER_drf_bist_done_kme_drf_bist_done_mask                       (0x00000001)
#define  DBUS_WRAPPER_drf_bist_done_kme_drf_bist_done(data)                      (0x00000001&(data))
#define  DBUS_WRAPPER_drf_bist_done_get_kme_drf_bist_done(data)                  (0x00000001&(data))

#define  DBUS_WRAPPER_bist_fail_0                                               0x1809E0F0
#define  DBUS_WRAPPER_bist_fail_0_reg_addr                                       "0xB809E0F0"
#define  DBUS_WRAPPER_bist_fail_0_reg                                            0xB809E0F0
#define  DBUS_WRAPPER_bist_fail_0_inst_addr                                      "0x0039"
#define  set_DBUS_WRAPPER_bist_fail_0_reg(data)                                  (*((volatile unsigned int*)DBUS_WRAPPER_bist_fail_0_reg)=data)
#define  get_DBUS_WRAPPER_bist_fail_0_reg                                        (*((volatile unsigned int*)DBUS_WRAPPER_bist_fail_0_reg))
#define  DBUS_WRAPPER_bist_fail_0_kme_bist_fail_0_shift                          (0)
#define  DBUS_WRAPPER_bist_fail_0_kme_bist_fail_0_mask                           (0x00000001)
#define  DBUS_WRAPPER_bist_fail_0_kme_bist_fail_0(data)                          (0x00000001&(data))
#define  DBUS_WRAPPER_bist_fail_0_get_kme_bist_fail_0(data)                      (0x00000001&(data))

#define  DBUS_WRAPPER_drf_bist_fail_0                                           0x1809E0F4
#define  DBUS_WRAPPER_drf_bist_fail_0_reg_addr                                   "0xB809E0F4"
#define  DBUS_WRAPPER_drf_bist_fail_0_reg                                        0xB809E0F4
#define  DBUS_WRAPPER_drf_bist_fail_0_inst_addr                                  "0x003A"
#define  set_DBUS_WRAPPER_drf_bist_fail_0_reg(data)                              (*((volatile unsigned int*)DBUS_WRAPPER_drf_bist_fail_0_reg)=data)
#define  get_DBUS_WRAPPER_drf_bist_fail_0_reg                                    (*((volatile unsigned int*)DBUS_WRAPPER_drf_bist_fail_0_reg))
#define  DBUS_WRAPPER_drf_bist_fail_0_kme_drf_bist_fail_0_shift                  (0)
#define  DBUS_WRAPPER_drf_bist_fail_0_kme_drf_bist_fail_0_mask                   (0x00000001)
#define  DBUS_WRAPPER_drf_bist_fail_0_kme_drf_bist_fail_0(data)                  (0x00000001&(data))
#define  DBUS_WRAPPER_drf_bist_fail_0_get_kme_drf_bist_fail_0(data)              (0x00000001&(data))

#define  DBUS_WRAPPER_drf_start_pause                                           0x1809E0F8
#define  DBUS_WRAPPER_drf_start_pause_reg_addr                                   "0xB809E0F8"
#define  DBUS_WRAPPER_drf_start_pause_reg                                        0xB809E0F8
#define  DBUS_WRAPPER_drf_start_pause_inst_addr                                  "0x003B"
#define  set_DBUS_WRAPPER_drf_start_pause_reg(data)                              (*((volatile unsigned int*)DBUS_WRAPPER_drf_start_pause_reg)=data)
#define  get_DBUS_WRAPPER_drf_start_pause_reg                                    (*((volatile unsigned int*)DBUS_WRAPPER_drf_start_pause_reg))
#define  DBUS_WRAPPER_drf_start_pause_kme_drf_start_pause_shift                  (0)
#define  DBUS_WRAPPER_drf_start_pause_kme_drf_start_pause_mask                   (0x00000001)
#define  DBUS_WRAPPER_drf_start_pause_kme_drf_start_pause(data)                  (0x00000001&(data))
#define  DBUS_WRAPPER_drf_start_pause_get_kme_drf_start_pause(data)              (0x00000001&(data))

#define  DBUS_WRAPPER_memc_dbg_1                                                0x1809E0FC
#define  DBUS_WRAPPER_memc_dbg_1_reg_addr                                        "0xB809E0FC"
#define  DBUS_WRAPPER_memc_dbg_1_reg                                             0xB809E0FC
#define  DBUS_WRAPPER_memc_dbg_1_inst_addr                                       "0x003C"
#define  set_DBUS_WRAPPER_memc_dbg_1_reg(data)                                   (*((volatile unsigned int*)DBUS_WRAPPER_memc_dbg_1_reg)=data)
#define  get_DBUS_WRAPPER_memc_dbg_1_reg                                         (*((volatile unsigned int*)DBUS_WRAPPER_memc_dbg_1_reg))
#define  DBUS_WRAPPER_memc_dbg_1_dbg_wvalid_timeout_shift                        (16)
#define  DBUS_WRAPPER_memc_dbg_1_kme_dbg_wvalid_timout2_shift                    (2)
#define  DBUS_WRAPPER_memc_dbg_1_kme_dbg_wvalid_timout1_shift                    (1)
#define  DBUS_WRAPPER_memc_dbg_1_debug_en_shift                                  (0)
#define  DBUS_WRAPPER_memc_dbg_1_dbg_wvalid_timeout_mask                         (0xFFFF0000)
#define  DBUS_WRAPPER_memc_dbg_1_kme_dbg_wvalid_timout2_mask                     (0x00000004)
#define  DBUS_WRAPPER_memc_dbg_1_kme_dbg_wvalid_timout1_mask                     (0x00000002)
#define  DBUS_WRAPPER_memc_dbg_1_debug_en_mask                                   (0x00000001)
#define  DBUS_WRAPPER_memc_dbg_1_dbg_wvalid_timeout(data)                        (0xFFFF0000&((data)<<16))
#define  DBUS_WRAPPER_memc_dbg_1_kme_dbg_wvalid_timout2(data)                    (0x00000004&((data)<<2))
#define  DBUS_WRAPPER_memc_dbg_1_kme_dbg_wvalid_timout1(data)                    (0x00000002&((data)<<1))
#define  DBUS_WRAPPER_memc_dbg_1_debug_en(data)                                  (0x00000001&(data))
#define  DBUS_WRAPPER_memc_dbg_1_get_dbg_wvalid_timeout(data)                    ((0xFFFF0000&(data))>>16)
#define  DBUS_WRAPPER_memc_dbg_1_get_kme_dbg_wvalid_timout2(data)                ((0x00000004&(data))>>2)
#define  DBUS_WRAPPER_memc_dbg_1_get_kme_dbg_wvalid_timout1(data)                ((0x00000002&(data))>>1)
#define  DBUS_WRAPPER_memc_dbg_1_get_debug_en(data)                              (0x00000001&(data))

#define  DBUS_WRAPPER_memc_dbg_2                                                0x1809E100
#define  DBUS_WRAPPER_memc_dbg_2_reg_addr                                        "0xB809E100"
#define  DBUS_WRAPPER_memc_dbg_2_reg                                             0xB809E100
#define  DBUS_WRAPPER_memc_dbg_2_inst_addr                                       "0x003D"
#define  set_DBUS_WRAPPER_memc_dbg_2_reg(data)                                   (*((volatile unsigned int*)DBUS_WRAPPER_memc_dbg_2_reg)=data)
#define  get_DBUS_WRAPPER_memc_dbg_2_reg                                         (*((volatile unsigned int*)DBUS_WRAPPER_memc_dbg_2_reg))
#define  DBUS_WRAPPER_memc_dbg_2_kme_dbg_dbus_wlen_cnt_shift                     (8)
#define  DBUS_WRAPPER_memc_dbg_2_kme_dbg_axi_wlen_cnt_shift                      (0)
#define  DBUS_WRAPPER_memc_dbg_2_kme_dbg_dbus_wlen_cnt_mask                      (0x0000FF00)
#define  DBUS_WRAPPER_memc_dbg_2_kme_dbg_axi_wlen_cnt_mask                       (0x000000FF)
#define  DBUS_WRAPPER_memc_dbg_2_kme_dbg_dbus_wlen_cnt(data)                     (0x0000FF00&((data)<<8))
#define  DBUS_WRAPPER_memc_dbg_2_kme_dbg_axi_wlen_cnt(data)                      (0x000000FF&(data))
#define  DBUS_WRAPPER_memc_dbg_2_get_kme_dbg_dbus_wlen_cnt(data)                 ((0x0000FF00&(data))>>8)
#define  DBUS_WRAPPER_memc_dbg_2_get_kme_dbg_axi_wlen_cnt(data)                  (0x000000FF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======DBUS_WRAPPER register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sf_rx_mode:1;
        RBus_UInt32  sf_rx_start:1;
        RBus_UInt32  sf_tx_mode:1;
        RBus_UInt32  sf_tx_start:1;
        RBus_UInt32  sf_rx_gated:1;
        RBus_UInt32  dummy1809e000_26_16:11;
        RBus_UInt32  sf_rx_debug_bit_sel:8;
        RBus_UInt32  sf_rx_fail_bit_status:1;
        RBus_UInt32  sf_rx_done:1;
        RBus_UInt32  sf_rx_err:1;
        RBus_UInt32  sf_tx_work:1;
        RBus_UInt32  time_step:4;
    };
}dbus_wrapper_memc_dcu1_arb_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  arb_en:10;
    };
}dbus_wrapper_memc_dcu1_arb_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client0_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client0_latcnt_beg:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client1_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client1_latcnt_beg:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client2_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client2_latcnt_beg:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client3_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client3_latcnt_beg:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client4_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client4_latcnt_beg:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client5_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client5_latcnt_beg:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client6_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client6_latcnt_beg:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client7_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client7_latcnt_beg:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client8_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client8_latcnt_beg:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client9_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client9_latcnt_beg:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  pc_rd_only:1;
        RBus_UInt32  pc_go:1;
    };
}dbus_wrapper_memc_dcu1_pc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_mon_num:32;
    };
}dbus_wrapper_memc_dcu1_pc_tota_mon_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_ack_num:32;
    };
}dbus_wrapper_memc_dcu1_pc_tota_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_idl_num:32;
    };
}dbus_wrapper_memc_dcu1_pc_tota_idl_num_RBUS;

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
}dbus_wrapper_memc_dcu1_pc_prog_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  pc_prog2_req_occur:1;
        RBus_UInt32  pc_prog1_req_occur:1;
        RBus_UInt32  pc_prog0_req_occur:1;
    };
}dbus_wrapper_memc_dcu1_pc_prog_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  prog_channel_sel:2;
    };
}dbus_wrapper_memc_dcu1_pc_prog_0_channel_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_acc_lat:32;
    };
}dbus_wrapper_memc_dcu1_pc_prog_0_acc_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  prog_max_lat:16;
    };
}dbus_wrapper_memc_dcu1_pc_prog_0_max_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  prog_req_num:24;
    };
}dbus_wrapper_memc_dcu1_pc_prog_0_req_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_ack_num:32;
    };
}dbus_wrapper_memc_dcu1_pc_prog_0_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  prog_hitend_cnt:16;
    };
}dbus_wrapper_memc_dcu1_pc_prog_0_hitend_RBUS;

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
}dbus_wrapper_memc_dcu1_bridge_test_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bt_addr_data:28;
        RBus_UInt32  res1:4;
    };
}dbus_wrapper_memc_dcu1_bridge_test_addr_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  sb_req:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  sb_gnt:10;
    };
}dbus_wrapper_memc_dcu1_arb_sr0_RBUS;

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
}dbus_wrapper_memc_dcu1_arb_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_0:8;
        RBus_UInt32  req_thr_0:8;
        RBus_UInt32  time_thr_0:16;
    };
}dbus_wrapper_memc_dcu1_bw_limit_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_1:8;
        RBus_UInt32  req_thr_1:8;
        RBus_UInt32  time_thr_1:16;
    };
}dbus_wrapper_memc_dcu1_bw_limit_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_2:8;
        RBus_UInt32  req_thr_2:8;
        RBus_UInt32  time_thr_2:16;
    };
}dbus_wrapper_memc_dcu1_bw_limit_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_3:8;
        RBus_UInt32  req_thr_3:8;
        RBus_UInt32  time_thr_3:16;
    };
}dbus_wrapper_memc_dcu1_bw_limit_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_4:8;
        RBus_UInt32  req_thr_4:8;
        RBus_UInt32  time_thr_4:16;
    };
}dbus_wrapper_memc_dcu1_bw_limit_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_5:8;
        RBus_UInt32  req_thr_5:8;
        RBus_UInt32  time_thr_5:16;
    };
}dbus_wrapper_memc_dcu1_bw_limit_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_6:8;
        RBus_UInt32  req_thr_6:8;
        RBus_UInt32  time_thr_6:16;
    };
}dbus_wrapper_memc_dcu1_bw_limit_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_7:8;
        RBus_UInt32  req_thr_7:8;
        RBus_UInt32  time_thr_7:16;
    };
}dbus_wrapper_memc_dcu1_bw_limit_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_8:8;
        RBus_UInt32  req_thr_8:8;
        RBus_UInt32  time_thr_8:16;
    };
}dbus_wrapper_memc_dcu1_bw_limit_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_9:8;
        RBus_UInt32  req_thr_9:8;
        RBus_UInt32  time_thr_9:16;
    };
}dbus_wrapper_memc_dcu1_bw_limit_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  len_scheme_en:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  bw_status_clr_9:1;
        RBus_UInt32  bw_limit_en_9:1;
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
        RBus_UInt32  bw_status_clr_3:1;
        RBus_UInt32  bw_limit_en_3:1;
        RBus_UInt32  bw_status_clr_2:1;
        RBus_UInt32  bw_limit_en_2:1;
        RBus_UInt32  bw_status_clr_1:1;
        RBus_UInt32  bw_limit_en_1:1;
        RBus_UInt32  bw_status_clr_0:1;
        RBus_UInt32  bw_limit_en_0:1;
    };
}dbus_wrapper_memc_dcu1_bw_limit_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  rd_queue_num:5;
        RBus_UInt32  res2:4;
        RBus_UInt32  wr_queue_num:4;
    };
}dbus_wrapper_memc_dcu1_queue_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  cti_space_margin_kmer:3;
        RBus_UInt32  cti_grp_cmd_err_kmer:1;
        RBus_UInt32  cti_space_margin_kmew:3;
        RBus_UInt32  cti_grp_cmd_err_kmew:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  cti_status_clr:1;
        RBus_UInt32  queue_flush:1;
    };
}dbus_wrapper_memc_dcu1_cti_ctrl_RBUS;

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
}dbus_wrapper_memc_dcu1_error_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  sb_debug_mode:4;
    };
}dbus_wrapper_memc_dcu1_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  kme_m0_rd_outstanding_num:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  kme_m0_wr_outstanding_num:5;
        RBus_UInt32  res3:2;
        RBus_UInt32  bready_ignore:1;
        RBus_UInt32  bresp_select:1;
    };
}dbus_wrapper_memc_wrapper_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}dbus_wrapper_memc_wrapper_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  kme_m0_rd_outstanding_cnt:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  kme_m0_wr_outstanding_cnt:5;
        RBus_UInt32  res3:16;
    };
}dbus_wrapper_memc_wrapper_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}dbus_wrapper_memc_wrapper_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  kme_m0_rcmd_fifo_empty:1;
        RBus_UInt32  kme_m0_rcmd_fifo_full:1;
        RBus_UInt32  kme_m0_rid_fifo_empty:1;
        RBus_UInt32  kme_m0_rid_fifo_full:1;
        RBus_UInt32  kme_m0_wdata_buffer_empty:1;
        RBus_UInt32  kme_m0_wdata_buffer_full:1;
        RBus_UInt32  kme_m0_wdata_fifo_empty:1;
        RBus_UInt32  kme_m0_wdata_fifo_full:1;
        RBus_UInt32  kme_m0_wcmd_fifo_empty:1;
        RBus_UInt32  kme_m0_wcmd_fifo_full:1;
        RBus_UInt32  kme_m0_wid_fifo_empty:1;
        RBus_UInt32  kme_m0_wid_fifo_full:1;
        RBus_UInt32  res2:16;
    };
}dbus_wrapper_memc_wrapper_fifo_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_uplimit_addr:28;
        RBus_UInt32  res1:4;
    };
}dbus_wrapper_me_uplimit_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_downlimit_addr:28;
        RBus_UInt32  res1:4;
    };
}dbus_wrapper_me_downlimit_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}dbus_wrapper_mc_uplimit_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}dbus_wrapper_mc_downlimit_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  kme_addr_gt_irq_en:1;
        RBus_UInt32  kme_addr_lt_irq_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  kme_m0_rready_low_irq_en:1;
        RBus_UInt32  res3:6;
        RBus_UInt32  kme_m0_awaddr_unaligned_irq_en:1;
        RBus_UInt32  kme_m0_araddr_unaligned_irq_en:1;
    };
}dbus_wrapper_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  kme_addr_gt_err:1;
        RBus_UInt32  kme_addr_lt_err:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  kme_m0_rready_low_err:1;
        RBus_UInt32  res3:6;
        RBus_UInt32  kme_m0_awaddr_unaligned_err:1;
        RBus_UInt32  kme_m0_araddr_unaligned_err:1;
    };
}dbus_wrapper_irq_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  kme_bist_mode:1;
    };
}dbus_wrapper_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  kme_drf_bist_mode:1;
    };
}dbus_wrapper_drf_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  kme_drf_test_resume:1;
    };
}dbus_wrapper_drf_test_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  kme_rme:1;
        RBus_UInt32  kme_rm:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  kme_test1:1;
        RBus_UInt32  kme_ls:1;
    };
}dbus_wrapper_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  kme_testrwm:1;
    };
}dbus_wrapper_testrwm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  kme_bist_done:1;
    };
}dbus_wrapper_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  kme_drf_bist_done:1;
    };
}dbus_wrapper_drf_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  kme_bist_fail_0:1;
    };
}dbus_wrapper_bist_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  kme_drf_bist_fail_0:1;
    };
}dbus_wrapper_drf_bist_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  kme_drf_start_pause:1;
    };
}dbus_wrapper_drf_start_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_wvalid_timeout:16;
        RBus_UInt32  res1:13;
        RBus_UInt32  kme_dbg_wvalid_timout2:1;
        RBus_UInt32  kme_dbg_wvalid_timout1:1;
        RBus_UInt32  debug_en:1;
    };
}dbus_wrapper_memc_dbg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  kme_dbg_dbus_wlen_cnt:8;
        RBus_UInt32  kme_dbg_axi_wlen_cnt:8;
    };
}dbus_wrapper_memc_dbg_2_RBUS;

#else //apply LITTLE_ENDIAN

//======DBUS_WRAPPER register structure define==========

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
        RBus_UInt32  dummy1809e000_26_16:11;
        RBus_UInt32  sf_rx_gated:1;
        RBus_UInt32  sf_tx_start:1;
        RBus_UInt32  sf_tx_mode:1;
        RBus_UInt32  sf_rx_start:1;
        RBus_UInt32  sf_rx_mode:1;
    };
}dbus_wrapper_memc_dcu1_arb_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  arb_en:10;
        RBus_UInt32  res1:22;
    };
}dbus_wrapper_memc_dcu1_arb_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client0_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client0_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client1_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client1_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client2_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client2_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client3_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client3_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client4_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client4_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client5_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client5_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client6_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client6_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client7_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client7_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client8_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client8_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client9_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client9_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}dbus_wrapper_memc_dcu1_latcnt_cr10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_go:1;
        RBus_UInt32  pc_rd_only:1;
        RBus_UInt32  res1:30;
    };
}dbus_wrapper_memc_dcu1_pc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_mon_num:32;
    };
}dbus_wrapper_memc_dcu1_pc_tota_mon_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_ack_num:32;
    };
}dbus_wrapper_memc_dcu1_pc_tota_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_idl_num:32;
    };
}dbus_wrapper_memc_dcu1_pc_tota_idl_num_RBUS;

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
}dbus_wrapper_memc_dcu1_pc_prog_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_prog0_req_occur:1;
        RBus_UInt32  pc_prog1_req_occur:1;
        RBus_UInt32  pc_prog2_req_occur:1;
        RBus_UInt32  res1:29;
    };
}dbus_wrapper_memc_dcu1_pc_prog_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_channel_sel:2;
        RBus_UInt32  res1:30;
    };
}dbus_wrapper_memc_dcu1_pc_prog_0_channel_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_acc_lat:32;
    };
}dbus_wrapper_memc_dcu1_pc_prog_0_acc_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_max_lat:16;
        RBus_UInt32  res1:16;
    };
}dbus_wrapper_memc_dcu1_pc_prog_0_max_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_req_num:24;
        RBus_UInt32  res1:8;
    };
}dbus_wrapper_memc_dcu1_pc_prog_0_req_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_ack_num:32;
    };
}dbus_wrapper_memc_dcu1_pc_prog_0_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_hitend_cnt:16;
        RBus_UInt32  res1:16;
    };
}dbus_wrapper_memc_dcu1_pc_prog_0_hitend_RBUS;

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
}dbus_wrapper_memc_dcu1_bridge_test_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bt_addr_data:28;
    };
}dbus_wrapper_memc_dcu1_bridge_test_addr_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sb_gnt:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  sb_req:10;
        RBus_UInt32  res2:6;
    };
}dbus_wrapper_memc_dcu1_arb_sr0_RBUS;

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
}dbus_wrapper_memc_dcu1_arb_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_0:16;
        RBus_UInt32  req_thr_0:8;
        RBus_UInt32  max_req_num_0:8;
    };
}dbus_wrapper_memc_dcu1_bw_limit_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_1:16;
        RBus_UInt32  req_thr_1:8;
        RBus_UInt32  max_req_num_1:8;
    };
}dbus_wrapper_memc_dcu1_bw_limit_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_2:16;
        RBus_UInt32  req_thr_2:8;
        RBus_UInt32  max_req_num_2:8;
    };
}dbus_wrapper_memc_dcu1_bw_limit_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_3:16;
        RBus_UInt32  req_thr_3:8;
        RBus_UInt32  max_req_num_3:8;
    };
}dbus_wrapper_memc_dcu1_bw_limit_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_4:16;
        RBus_UInt32  req_thr_4:8;
        RBus_UInt32  max_req_num_4:8;
    };
}dbus_wrapper_memc_dcu1_bw_limit_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_5:16;
        RBus_UInt32  req_thr_5:8;
        RBus_UInt32  max_req_num_5:8;
    };
}dbus_wrapper_memc_dcu1_bw_limit_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_6:16;
        RBus_UInt32  req_thr_6:8;
        RBus_UInt32  max_req_num_6:8;
    };
}dbus_wrapper_memc_dcu1_bw_limit_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_7:16;
        RBus_UInt32  req_thr_7:8;
        RBus_UInt32  max_req_num_7:8;
    };
}dbus_wrapper_memc_dcu1_bw_limit_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_8:16;
        RBus_UInt32  req_thr_8:8;
        RBus_UInt32  max_req_num_8:8;
    };
}dbus_wrapper_memc_dcu1_bw_limit_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_9:16;
        RBus_UInt32  req_thr_9:8;
        RBus_UInt32  max_req_num_9:8;
    };
}dbus_wrapper_memc_dcu1_bw_limit_9_RBUS;

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
        RBus_UInt32  bw_limit_en_9:1;
        RBus_UInt32  bw_status_clr_9:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  len_scheme_en:1;
    };
}dbus_wrapper_memc_dcu1_bw_limit_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_queue_num:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  rd_queue_num:5;
        RBus_UInt32  res2:19;
    };
}dbus_wrapper_memc_dcu1_queue_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  queue_flush:1;
        RBus_UInt32  cti_status_clr:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  cti_grp_cmd_err_kmew:1;
        RBus_UInt32  cti_space_margin_kmew:3;
        RBus_UInt32  cti_grp_cmd_err_kmer:1;
        RBus_UInt32  cti_space_margin_kmer:3;
        RBus_UInt32  res2:20;
    };
}dbus_wrapper_memc_dcu1_cti_ctrl_RBUS;

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
}dbus_wrapper_memc_dcu1_error_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sb_debug_mode:4;
        RBus_UInt32  res1:28;
    };
}dbus_wrapper_memc_dcu1_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bresp_select:1;
        RBus_UInt32  bready_ignore:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_m0_wr_outstanding_num:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  kme_m0_rd_outstanding_num:5;
        RBus_UInt32  res3:15;
    };
}dbus_wrapper_memc_wrapper_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}dbus_wrapper_memc_wrapper_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  kme_m0_wr_outstanding_cnt:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  kme_m0_rd_outstanding_cnt:5;
        RBus_UInt32  res3:3;
    };
}dbus_wrapper_memc_wrapper_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}dbus_wrapper_memc_wrapper_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  kme_m0_wid_fifo_full:1;
        RBus_UInt32  kme_m0_wid_fifo_empty:1;
        RBus_UInt32  kme_m0_wcmd_fifo_full:1;
        RBus_UInt32  kme_m0_wcmd_fifo_empty:1;
        RBus_UInt32  kme_m0_wdata_fifo_full:1;
        RBus_UInt32  kme_m0_wdata_fifo_empty:1;
        RBus_UInt32  kme_m0_wdata_buffer_full:1;
        RBus_UInt32  kme_m0_wdata_buffer_empty:1;
        RBus_UInt32  kme_m0_rid_fifo_full:1;
        RBus_UInt32  kme_m0_rid_fifo_empty:1;
        RBus_UInt32  kme_m0_rcmd_fifo_full:1;
        RBus_UInt32  kme_m0_rcmd_fifo_empty:1;
        RBus_UInt32  res2:4;
    };
}dbus_wrapper_memc_wrapper_fifo_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  kme_uplimit_addr:28;
    };
}dbus_wrapper_me_uplimit_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  kme_downlimit_addr:28;
    };
}dbus_wrapper_me_downlimit_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}dbus_wrapper_mc_uplimit_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}dbus_wrapper_mc_downlimit_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_m0_araddr_unaligned_irq_en:1;
        RBus_UInt32  kme_m0_awaddr_unaligned_irq_en:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  kme_m0_rready_low_irq_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  kme_addr_lt_irq_en:1;
        RBus_UInt32  kme_addr_gt_irq_en:1;
        RBus_UInt32  res3:18;
    };
}dbus_wrapper_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_m0_araddr_unaligned_err:1;
        RBus_UInt32  kme_m0_awaddr_unaligned_err:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  kme_m0_rready_low_err:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  kme_addr_lt_err:1;
        RBus_UInt32  kme_addr_gt_err:1;
        RBus_UInt32  res3:18;
    };
}dbus_wrapper_irq_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_bist_mode:1;
        RBus_UInt32  res1:31;
    };
}dbus_wrapper_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_drf_bist_mode:1;
        RBus_UInt32  res1:31;
    };
}dbus_wrapper_drf_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_drf_test_resume:1;
        RBus_UInt32  res1:31;
    };
}dbus_wrapper_drf_test_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_ls:1;
        RBus_UInt32  kme_test1:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  kme_rm:4;
        RBus_UInt32  kme_rme:1;
        RBus_UInt32  res2:23;
    };
}dbus_wrapper_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_testrwm:1;
        RBus_UInt32  res1:31;
    };
}dbus_wrapper_testrwm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_bist_done:1;
        RBus_UInt32  res1:31;
    };
}dbus_wrapper_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_drf_bist_done:1;
        RBus_UInt32  res1:31;
    };
}dbus_wrapper_drf_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_bist_fail_0:1;
        RBus_UInt32  res1:31;
    };
}dbus_wrapper_bist_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_drf_bist_fail_0:1;
        RBus_UInt32  res1:31;
    };
}dbus_wrapper_drf_bist_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_drf_start_pause:1;
        RBus_UInt32  res1:31;
    };
}dbus_wrapper_drf_start_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debug_en:1;
        RBus_UInt32  kme_dbg_wvalid_timout1:1;
        RBus_UInt32  kme_dbg_wvalid_timout2:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  dbg_wvalid_timeout:16;
    };
}dbus_wrapper_memc_dbg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_dbg_axi_wlen_cnt:8;
        RBus_UInt32  kme_dbg_dbus_wlen_cnt:8;
        RBus_UInt32  res1:16;
    };
}dbus_wrapper_memc_dbg_2_RBUS;




#endif 


#endif 
