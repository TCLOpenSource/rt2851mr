/**
* @file Merlin5-DesignSpec-SSB3
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_SSB3_REG_H_
#define _RBUS_SSB3_REG_H_

#include "rbus_types.h"



//  SSB3 Register Address
#define  SSB3_TV_SB1_DCU1_ARB_CR                                                0x18002380
#define  SSB3_TV_SB1_DCU1_ARB_CR_reg_addr                                        "0xB8002380"
#define  SSB3_TV_SB1_DCU1_ARB_CR_reg                                             0xB8002380
#define  SSB3_TV_SB1_DCU1_ARB_CR_inst_addr                                       "0x0000"
#define  set_SSB3_TV_SB1_DCU1_ARB_CR_reg(data)                                   (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_ARB_CR_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_ARB_CR_reg                                         (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_ARB_CR_reg))
#define  SSB3_TV_SB1_DCU1_ARB_CR_dummy_31_16_shift                               (16)
#define  SSB3_TV_SB1_DCU1_ARB_CR_time_step_shift                                 (12)
#define  SSB3_TV_SB1_DCU1_ARB_CR_arb_en_shift                                    (0)
#define  SSB3_TV_SB1_DCU1_ARB_CR_dummy_31_16_mask                                (0xFFFF0000)
#define  SSB3_TV_SB1_DCU1_ARB_CR_time_step_mask                                  (0x0000F000)
#define  SSB3_TV_SB1_DCU1_ARB_CR_arb_en_mask                                     (0x00000003)
#define  SSB3_TV_SB1_DCU1_ARB_CR_dummy_31_16(data)                               (0xFFFF0000&((data)<<16))
#define  SSB3_TV_SB1_DCU1_ARB_CR_time_step(data)                                 (0x0000F000&((data)<<12))
#define  SSB3_TV_SB1_DCU1_ARB_CR_arb_en(data)                                    (0x00000003&(data))
#define  SSB3_TV_SB1_DCU1_ARB_CR_get_dummy_31_16(data)                           ((0xFFFF0000&(data))>>16)
#define  SSB3_TV_SB1_DCU1_ARB_CR_get_time_step(data)                             ((0x0000F000&(data))>>12)
#define  SSB3_TV_SB1_DCU1_ARB_CR_get_arb_en(data)                                (0x00000003&(data))

#define  SSB3_TV_SB1_DCU1_SF_TEST                                               0x18002384
#define  SSB3_TV_SB1_DCU1_SF_TEST_reg_addr                                       "0xB8002384"
#define  SSB3_TV_SB1_DCU1_SF_TEST_reg                                            0xB8002384
#define  SSB3_TV_SB1_DCU1_SF_TEST_inst_addr                                      "0x0001"
#define  set_SSB3_TV_SB1_DCU1_SF_TEST_reg(data)                                  (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_SF_TEST_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_SF_TEST_reg                                        (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_SF_TEST_reg))
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_mode_shift                               (31)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_start_shift                              (30)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_tx_mode_shift                               (29)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_tx_start_shift                              (28)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_gated_shift                              (27)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_done_shift                               (26)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_err_shift                                (25)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_tx_work_shift                               (24)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_debug_bit_sel_shift                      (16)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_fail_bit_status_shift                    (15)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_mode_mask                                (0x80000000)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_start_mask                               (0x40000000)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_tx_mode_mask                                (0x20000000)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_tx_start_mask                               (0x10000000)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_gated_mask                               (0x08000000)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_done_mask                                (0x04000000)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_err_mask                                 (0x02000000)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_tx_work_mask                                (0x01000000)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_debug_bit_sel_mask                       (0x00FF0000)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_fail_bit_status_mask                     (0x00008000)
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_mode(data)                               (0x80000000&((data)<<31))
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_start(data)                              (0x40000000&((data)<<30))
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_tx_mode(data)                               (0x20000000&((data)<<29))
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_tx_start(data)                              (0x10000000&((data)<<28))
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_gated(data)                              (0x08000000&((data)<<27))
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_done(data)                               (0x04000000&((data)<<26))
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_err(data)                                (0x02000000&((data)<<25))
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_tx_work(data)                               (0x01000000&((data)<<24))
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_debug_bit_sel(data)                      (0x00FF0000&((data)<<16))
#define  SSB3_TV_SB1_DCU1_SF_TEST_sf_rx_fail_bit_status(data)                    (0x00008000&((data)<<15))
#define  SSB3_TV_SB1_DCU1_SF_TEST_get_sf_rx_mode(data)                           ((0x80000000&(data))>>31)
#define  SSB3_TV_SB1_DCU1_SF_TEST_get_sf_rx_start(data)                          ((0x40000000&(data))>>30)
#define  SSB3_TV_SB1_DCU1_SF_TEST_get_sf_tx_mode(data)                           ((0x20000000&(data))>>29)
#define  SSB3_TV_SB1_DCU1_SF_TEST_get_sf_tx_start(data)                          ((0x10000000&(data))>>28)
#define  SSB3_TV_SB1_DCU1_SF_TEST_get_sf_rx_gated(data)                          ((0x08000000&(data))>>27)
#define  SSB3_TV_SB1_DCU1_SF_TEST_get_sf_rx_done(data)                           ((0x04000000&(data))>>26)
#define  SSB3_TV_SB1_DCU1_SF_TEST_get_sf_rx_err(data)                            ((0x02000000&(data))>>25)
#define  SSB3_TV_SB1_DCU1_SF_TEST_get_sf_tx_work(data)                           ((0x01000000&(data))>>24)
#define  SSB3_TV_SB1_DCU1_SF_TEST_get_sf_rx_debug_bit_sel(data)                  ((0x00FF0000&(data))>>16)
#define  SSB3_TV_SB1_DCU1_SF_TEST_get_sf_rx_fail_bit_status(data)                ((0x00008000&(data))>>15)

#define  SSB3_TV_SB1_DCU1_LATCNT_CR1                                            0x18002388
#define  SSB3_TV_SB1_DCU1_LATCNT_CR1_reg_addr                                    "0xB8002388"
#define  SSB3_TV_SB1_DCU1_LATCNT_CR1_reg                                         0xB8002388
#define  SSB3_TV_SB1_DCU1_LATCNT_CR1_inst_addr                                   "0x0002"
#define  set_SSB3_TV_SB1_DCU1_LATCNT_CR1_reg(data)                               (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_LATCNT_CR1_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_LATCNT_CR1_reg                                     (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_LATCNT_CR1_reg))
#define  SSB3_TV_SB1_DCU1_LATCNT_CR1_client0_latcnt_end_shift                    (16)
#define  SSB3_TV_SB1_DCU1_LATCNT_CR1_client0_latcnt_beg_shift                    (0)
#define  SSB3_TV_SB1_DCU1_LATCNT_CR1_client0_latcnt_end_mask                     (0x00FF0000)
#define  SSB3_TV_SB1_DCU1_LATCNT_CR1_client0_latcnt_beg_mask                     (0x000000FF)
#define  SSB3_TV_SB1_DCU1_LATCNT_CR1_client0_latcnt_end(data)                    (0x00FF0000&((data)<<16))
#define  SSB3_TV_SB1_DCU1_LATCNT_CR1_client0_latcnt_beg(data)                    (0x000000FF&(data))
#define  SSB3_TV_SB1_DCU1_LATCNT_CR1_get_client0_latcnt_end(data)                ((0x00FF0000&(data))>>16)
#define  SSB3_TV_SB1_DCU1_LATCNT_CR1_get_client0_latcnt_beg(data)                (0x000000FF&(data))

#define  SSB3_TV_SB1_DCU1_LATCNT_CR2                                            0x1800238C
#define  SSB3_TV_SB1_DCU1_LATCNT_CR2_reg_addr                                    "0xB800238C"
#define  SSB3_TV_SB1_DCU1_LATCNT_CR2_reg                                         0xB800238C
#define  SSB3_TV_SB1_DCU1_LATCNT_CR2_inst_addr                                   "0x0003"
#define  set_SSB3_TV_SB1_DCU1_LATCNT_CR2_reg(data)                               (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_LATCNT_CR2_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_LATCNT_CR2_reg                                     (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_LATCNT_CR2_reg))
#define  SSB3_TV_SB1_DCU1_LATCNT_CR2_client1_latcnt_end_shift                    (16)
#define  SSB3_TV_SB1_DCU1_LATCNT_CR2_client1_latcnt_beg_shift                    (0)
#define  SSB3_TV_SB1_DCU1_LATCNT_CR2_client1_latcnt_end_mask                     (0x00FF0000)
#define  SSB3_TV_SB1_DCU1_LATCNT_CR2_client1_latcnt_beg_mask                     (0x000000FF)
#define  SSB3_TV_SB1_DCU1_LATCNT_CR2_client1_latcnt_end(data)                    (0x00FF0000&((data)<<16))
#define  SSB3_TV_SB1_DCU1_LATCNT_CR2_client1_latcnt_beg(data)                    (0x000000FF&(data))
#define  SSB3_TV_SB1_DCU1_LATCNT_CR2_get_client1_latcnt_end(data)                ((0x00FF0000&(data))>>16)
#define  SSB3_TV_SB1_DCU1_LATCNT_CR2_get_client1_latcnt_beg(data)                (0x000000FF&(data))

#define  SSB3_TV_SB1_DCU1_PC_CTRL                                               0x18002350
#define  SSB3_TV_SB1_DCU1_PC_CTRL_reg_addr                                       "0xB8002350"
#define  SSB3_TV_SB1_DCU1_PC_CTRL_reg                                            0xB8002350
#define  SSB3_TV_SB1_DCU1_PC_CTRL_inst_addr                                      "0x0004"
#define  set_SSB3_TV_SB1_DCU1_PC_CTRL_reg(data)                                  (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_CTRL_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_PC_CTRL_reg                                        (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_CTRL_reg))
#define  SSB3_TV_SB1_DCU1_PC_CTRL_pc_rd_only_shift                               (1)
#define  SSB3_TV_SB1_DCU1_PC_CTRL_pc_go_shift                                    (0)
#define  SSB3_TV_SB1_DCU1_PC_CTRL_pc_rd_only_mask                                (0x00000002)
#define  SSB3_TV_SB1_DCU1_PC_CTRL_pc_go_mask                                     (0x00000001)
#define  SSB3_TV_SB1_DCU1_PC_CTRL_pc_rd_only(data)                               (0x00000002&((data)<<1))
#define  SSB3_TV_SB1_DCU1_PC_CTRL_pc_go(data)                                    (0x00000001&(data))
#define  SSB3_TV_SB1_DCU1_PC_CTRL_get_pc_rd_only(data)                           ((0x00000002&(data))>>1)
#define  SSB3_TV_SB1_DCU1_PC_CTRL_get_pc_go(data)                                (0x00000001&(data))

#define  SSB3_TV_SB1_DCU1_PC_TOTA_MON_NUM                                       0x18002354
#define  SSB3_TV_SB1_DCU1_PC_TOTA_MON_NUM_reg_addr                               "0xB8002354"
#define  SSB3_TV_SB1_DCU1_PC_TOTA_MON_NUM_reg                                    0xB8002354
#define  SSB3_TV_SB1_DCU1_PC_TOTA_MON_NUM_inst_addr                              "0x0005"
#define  set_SSB3_TV_SB1_DCU1_PC_TOTA_MON_NUM_reg(data)                          (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_TOTA_MON_NUM_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_PC_TOTA_MON_NUM_reg                                (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_TOTA_MON_NUM_reg))
#define  SSB3_TV_SB1_DCU1_PC_TOTA_MON_NUM_pc_tota_mon_num_shift                  (0)
#define  SSB3_TV_SB1_DCU1_PC_TOTA_MON_NUM_pc_tota_mon_num_mask                   (0xFFFFFFFF)
#define  SSB3_TV_SB1_DCU1_PC_TOTA_MON_NUM_pc_tota_mon_num(data)                  (0xFFFFFFFF&(data))
#define  SSB3_TV_SB1_DCU1_PC_TOTA_MON_NUM_get_pc_tota_mon_num(data)              (0xFFFFFFFF&(data))

#define  SSB3_TV_SB1_DCU1_PC_TOTA_ACK_NUM                                       0x18002358
#define  SSB3_TV_SB1_DCU1_PC_TOTA_ACK_NUM_reg_addr                               "0xB8002358"
#define  SSB3_TV_SB1_DCU1_PC_TOTA_ACK_NUM_reg                                    0xB8002358
#define  SSB3_TV_SB1_DCU1_PC_TOTA_ACK_NUM_inst_addr                              "0x0006"
#define  set_SSB3_TV_SB1_DCU1_PC_TOTA_ACK_NUM_reg(data)                          (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_TOTA_ACK_NUM_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_PC_TOTA_ACK_NUM_reg                                (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_TOTA_ACK_NUM_reg))
#define  SSB3_TV_SB1_DCU1_PC_TOTA_ACK_NUM_pc_tota_ack_num_shift                  (0)
#define  SSB3_TV_SB1_DCU1_PC_TOTA_ACK_NUM_pc_tota_ack_num_mask                   (0xFFFFFFFF)
#define  SSB3_TV_SB1_DCU1_PC_TOTA_ACK_NUM_pc_tota_ack_num(data)                  (0xFFFFFFFF&(data))
#define  SSB3_TV_SB1_DCU1_PC_TOTA_ACK_NUM_get_pc_tota_ack_num(data)              (0xFFFFFFFF&(data))

#define  SSB3_TV_SB1_DCU1_PC_TOTA_IDL_NUM                                       0x1800235C
#define  SSB3_TV_SB1_DCU1_PC_TOTA_IDL_NUM_reg_addr                               "0xB800235C"
#define  SSB3_TV_SB1_DCU1_PC_TOTA_IDL_NUM_reg                                    0xB800235C
#define  SSB3_TV_SB1_DCU1_PC_TOTA_IDL_NUM_inst_addr                              "0x0007"
#define  set_SSB3_TV_SB1_DCU1_PC_TOTA_IDL_NUM_reg(data)                          (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_TOTA_IDL_NUM_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_PC_TOTA_IDL_NUM_reg                                (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_TOTA_IDL_NUM_reg))
#define  SSB3_TV_SB1_DCU1_PC_TOTA_IDL_NUM_pc_tota_idl_num_shift                  (0)
#define  SSB3_TV_SB1_DCU1_PC_TOTA_IDL_NUM_pc_tota_idl_num_mask                   (0xFFFFFFFF)
#define  SSB3_TV_SB1_DCU1_PC_TOTA_IDL_NUM_pc_tota_idl_num(data)                  (0xFFFFFFFF&(data))
#define  SSB3_TV_SB1_DCU1_PC_TOTA_IDL_NUM_get_pc_tota_idl_num(data)              (0xFFFFFFFF&(data))

#define  SSB3_TV_SB1_DCU1_PC_prog_ctrl1                                         0x18002360
#define  SSB3_TV_SB1_DCU1_PC_prog_ctrl1_reg_addr                                 "0xB8002360"
#define  SSB3_TV_SB1_DCU1_PC_prog_ctrl1_reg                                      0xB8002360
#define  SSB3_TV_SB1_DCU1_PC_prog_ctrl1_inst_addr                                "0x0008"
#define  set_SSB3_TV_SB1_DCU1_PC_prog_ctrl1_reg(data)                            (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_prog_ctrl1_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_PC_prog_ctrl1_reg                                  (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_prog_ctrl1_reg))
#define  SSB3_TV_SB1_DCU1_PC_prog_ctrl1_pc_prog0_req_occur_shift                 (31)
#define  SSB3_TV_SB1_DCU1_PC_prog_ctrl1_pc_prog0_sel_shift                       (0)
#define  SSB3_TV_SB1_DCU1_PC_prog_ctrl1_pc_prog0_req_occur_mask                  (0x80000000)
#define  SSB3_TV_SB1_DCU1_PC_prog_ctrl1_pc_prog0_sel_mask                        (0x0000000F)
#define  SSB3_TV_SB1_DCU1_PC_prog_ctrl1_pc_prog0_req_occur(data)                 (0x80000000&((data)<<31))
#define  SSB3_TV_SB1_DCU1_PC_prog_ctrl1_pc_prog0_sel(data)                       (0x0000000F&(data))
#define  SSB3_TV_SB1_DCU1_PC_prog_ctrl1_get_pc_prog0_req_occur(data)             ((0x80000000&(data))>>31)
#define  SSB3_TV_SB1_DCU1_PC_prog_ctrl1_get_pc_prog0_sel(data)                   (0x0000000F&(data))

#define  SSB3_TV_SB1_DCU1_PC_prog_0_acc_lat                                     0x1800236C
#define  SSB3_TV_SB1_DCU1_PC_prog_0_acc_lat_reg_addr                             "0xB800236C"
#define  SSB3_TV_SB1_DCU1_PC_prog_0_acc_lat_reg                                  0xB800236C
#define  SSB3_TV_SB1_DCU1_PC_prog_0_acc_lat_inst_addr                            "0x0009"
#define  set_SSB3_TV_SB1_DCU1_PC_prog_0_acc_lat_reg(data)                        (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_prog_0_acc_lat_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_PC_prog_0_acc_lat_reg                              (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_prog_0_acc_lat_reg))
#define  SSB3_TV_SB1_DCU1_PC_prog_0_acc_lat_prog_acc_lat_shift                   (0)
#define  SSB3_TV_SB1_DCU1_PC_prog_0_acc_lat_prog_acc_lat_mask                    (0xFFFFFFFF)
#define  SSB3_TV_SB1_DCU1_PC_prog_0_acc_lat_prog_acc_lat(data)                   (0xFFFFFFFF&(data))
#define  SSB3_TV_SB1_DCU1_PC_prog_0_acc_lat_get_prog_acc_lat(data)               (0xFFFFFFFF&(data))

#define  SSB3_TV_SB1_DCU1_PC_prog_0_max_lat                                     0x18002370
#define  SSB3_TV_SB1_DCU1_PC_prog_0_max_lat_reg_addr                             "0xB8002370"
#define  SSB3_TV_SB1_DCU1_PC_prog_0_max_lat_reg                                  0xB8002370
#define  SSB3_TV_SB1_DCU1_PC_prog_0_max_lat_inst_addr                            "0x000A"
#define  set_SSB3_TV_SB1_DCU1_PC_prog_0_max_lat_reg(data)                        (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_prog_0_max_lat_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_PC_prog_0_max_lat_reg                              (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_prog_0_max_lat_reg))
#define  SSB3_TV_SB1_DCU1_PC_prog_0_max_lat_prog_max_lat_shift                   (0)
#define  SSB3_TV_SB1_DCU1_PC_prog_0_max_lat_prog_max_lat_mask                    (0x0000FFFF)
#define  SSB3_TV_SB1_DCU1_PC_prog_0_max_lat_prog_max_lat(data)                   (0x0000FFFF&(data))
#define  SSB3_TV_SB1_DCU1_PC_prog_0_max_lat_get_prog_max_lat(data)               (0x0000FFFF&(data))

#define  SSB3_TV_SB1_DCU1_PC_prog_0_req_num                                     0x18002374
#define  SSB3_TV_SB1_DCU1_PC_prog_0_req_num_reg_addr                             "0xB8002374"
#define  SSB3_TV_SB1_DCU1_PC_prog_0_req_num_reg                                  0xB8002374
#define  SSB3_TV_SB1_DCU1_PC_prog_0_req_num_inst_addr                            "0x000B"
#define  set_SSB3_TV_SB1_DCU1_PC_prog_0_req_num_reg(data)                        (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_prog_0_req_num_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_PC_prog_0_req_num_reg                              (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_prog_0_req_num_reg))
#define  SSB3_TV_SB1_DCU1_PC_prog_0_req_num_prog_req_num_shift                   (0)
#define  SSB3_TV_SB1_DCU1_PC_prog_0_req_num_prog_req_num_mask                    (0x00FFFFFF)
#define  SSB3_TV_SB1_DCU1_PC_prog_0_req_num_prog_req_num(data)                   (0x00FFFFFF&(data))
#define  SSB3_TV_SB1_DCU1_PC_prog_0_req_num_get_prog_req_num(data)               (0x00FFFFFF&(data))

#define  SSB3_TV_SB1_DCU1_PC_prog_0_ack_num                                     0x18002378
#define  SSB3_TV_SB1_DCU1_PC_prog_0_ack_num_reg_addr                             "0xB8002378"
#define  SSB3_TV_SB1_DCU1_PC_prog_0_ack_num_reg                                  0xB8002378
#define  SSB3_TV_SB1_DCU1_PC_prog_0_ack_num_inst_addr                            "0x000C"
#define  set_SSB3_TV_SB1_DCU1_PC_prog_0_ack_num_reg(data)                        (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_prog_0_ack_num_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_PC_prog_0_ack_num_reg                              (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_prog_0_ack_num_reg))
#define  SSB3_TV_SB1_DCU1_PC_prog_0_ack_num_prog_ack_num_shift                   (0)
#define  SSB3_TV_SB1_DCU1_PC_prog_0_ack_num_prog_ack_num_mask                    (0xFFFFFFFF)
#define  SSB3_TV_SB1_DCU1_PC_prog_0_ack_num_prog_ack_num(data)                   (0xFFFFFFFF&(data))
#define  SSB3_TV_SB1_DCU1_PC_prog_0_ack_num_get_prog_ack_num(data)               (0xFFFFFFFF&(data))

#define  SSB3_TV_SB1_DCU1_PC_prog_0_hitend                                      0x1800237C
#define  SSB3_TV_SB1_DCU1_PC_prog_0_hitend_reg_addr                              "0xB800237C"
#define  SSB3_TV_SB1_DCU1_PC_prog_0_hitend_reg                                   0xB800237C
#define  SSB3_TV_SB1_DCU1_PC_prog_0_hitend_inst_addr                             "0x000D"
#define  set_SSB3_TV_SB1_DCU1_PC_prog_0_hitend_reg(data)                         (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_prog_0_hitend_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_PC_prog_0_hitend_reg                               (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_PC_prog_0_hitend_reg))
#define  SSB3_TV_SB1_DCU1_PC_prog_0_hitend_prog_hitend_cnt_shift                 (0)
#define  SSB3_TV_SB1_DCU1_PC_prog_0_hitend_prog_hitend_cnt_mask                  (0x0000FFFF)
#define  SSB3_TV_SB1_DCU1_PC_prog_0_hitend_prog_hitend_cnt(data)                 (0x0000FFFF&(data))
#define  SSB3_TV_SB1_DCU1_PC_prog_0_hitend_get_prog_hitend_cnt(data)             (0x0000FFFF&(data))

#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL                                      0x18002390
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_reg_addr                              "0xB8002390"
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_reg                                   0xB8002390
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_inst_addr                             "0x000E"
#define  set_SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_reg(data)                         (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_reg                               (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_reg))
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_bt_done_shift                         (4)
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_bt_bl_shift                           (3)
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_bt_data_inv_shift                     (2)
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_bt_rw_shift                           (1)
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_bt_go_shift                           (0)
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_bt_done_mask                          (0x00000030)
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_bt_bl_mask                            (0x00000008)
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_bt_data_inv_mask                      (0x00000004)
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_bt_rw_mask                            (0x00000002)
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_bt_go_mask                            (0x00000001)
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_bt_done(data)                         (0x00000030&((data)<<4))
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_bt_bl(data)                           (0x00000008&((data)<<3))
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_bt_data_inv(data)                     (0x00000004&((data)<<2))
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_bt_rw(data)                           (0x00000002&((data)<<1))
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_bt_go(data)                           (0x00000001&(data))
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_get_bt_done(data)                     ((0x00000030&(data))>>4)
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_get_bt_bl(data)                       ((0x00000008&(data))>>3)
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_get_bt_data_inv(data)                 ((0x00000004&(data))>>2)
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_get_bt_rw(data)                       ((0x00000002&(data))>>1)
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_CTRL_get_bt_go(data)                       (0x00000001&(data))

#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_ADDR_DATA                                 0x1800239C
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_ADDR_DATA_reg_addr                         "0xB800239C"
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_ADDR_DATA_reg                              0xB800239C
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_ADDR_DATA_inst_addr                        "0x000F"
#define  set_SSB3_TV_SB1_DCU1_BRIDGE_TEST_ADDR_DATA_reg(data)                    (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_BRIDGE_TEST_ADDR_DATA_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_BRIDGE_TEST_ADDR_DATA_reg                          (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_BRIDGE_TEST_ADDR_DATA_reg))
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_ADDR_DATA_bt_addr_data_shift               (3)
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_ADDR_DATA_bt_addr_data_mask                (0xFFFFFFF8)
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_ADDR_DATA_bt_addr_data(data)               (0xFFFFFFF8&((data)<<3))
#define  SSB3_TV_SB1_DCU1_BRIDGE_TEST_ADDR_DATA_get_bt_addr_data(data)           ((0xFFFFFFF8&(data))>>3)

#define  SSB3_TV_SB1_DCU1_REQ_CR                                                0x180023A0
#define  SSB3_TV_SB1_DCU1_REQ_CR_reg_addr                                        "0xB80023A0"
#define  SSB3_TV_SB1_DCU1_REQ_CR_reg                                             0xB80023A0
#define  SSB3_TV_SB1_DCU1_REQ_CR_inst_addr                                       "0x0010"
#define  set_SSB3_TV_SB1_DCU1_REQ_CR_reg(data)                                   (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_REQ_CR_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_REQ_CR_reg                                         (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_REQ_CR_reg))
#define  SSB3_TV_SB1_DCU1_REQ_CR_max_count_shift                                 (16)
#define  SSB3_TV_SB1_DCU1_REQ_CR_off_time_shift                                  (0)
#define  SSB3_TV_SB1_DCU1_REQ_CR_max_count_mask                                  (0x000F0000)
#define  SSB3_TV_SB1_DCU1_REQ_CR_off_time_mask                                   (0x000000FF)
#define  SSB3_TV_SB1_DCU1_REQ_CR_max_count(data)                                 (0x000F0000&((data)<<16))
#define  SSB3_TV_SB1_DCU1_REQ_CR_off_time(data)                                  (0x000000FF&(data))
#define  SSB3_TV_SB1_DCU1_REQ_CR_get_max_count(data)                             ((0x000F0000&(data))>>16)
#define  SSB3_TV_SB1_DCU1_REQ_CR_get_off_time(data)                              (0x000000FF&(data))

#define  SSB3_TV_SB1_DCU1_ARB_SR1                                               0x180023B0
#define  SSB3_TV_SB1_DCU1_ARB_SR1_reg_addr                                       "0xB80023B0"
#define  SSB3_TV_SB1_DCU1_ARB_SR1_reg                                            0xB80023B0
#define  SSB3_TV_SB1_DCU1_ARB_SR1_inst_addr                                      "0x0011"
#define  set_SSB3_TV_SB1_DCU1_ARB_SR1_reg(data)                                  (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_ARB_SR1_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_ARB_SR1_reg                                        (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_ARB_SR1_reg))
#define  SSB3_TV_SB1_DCU1_ARB_SR1_sb_req_shift                                   (22)
#define  SSB3_TV_SB1_DCU1_ARB_SR1_sb_gnt_shift                                   (12)
#define  SSB3_TV_SB1_DCU1_ARB_SR1_win_latcnt_shift                               (0)
#define  SSB3_TV_SB1_DCU1_ARB_SR1_sb_req_mask                                    (0x00C00000)
#define  SSB3_TV_SB1_DCU1_ARB_SR1_sb_gnt_mask                                    (0x00003000)
#define  SSB3_TV_SB1_DCU1_ARB_SR1_win_latcnt_mask                                (0x000000FF)
#define  SSB3_TV_SB1_DCU1_ARB_SR1_sb_req(data)                                   (0x00C00000&((data)<<22))
#define  SSB3_TV_SB1_DCU1_ARB_SR1_sb_gnt(data)                                   (0x00003000&((data)<<12))
#define  SSB3_TV_SB1_DCU1_ARB_SR1_win_latcnt(data)                               (0x000000FF&(data))
#define  SSB3_TV_SB1_DCU1_ARB_SR1_get_sb_req(data)                               ((0x00C00000&(data))>>22)
#define  SSB3_TV_SB1_DCU1_ARB_SR1_get_sb_gnt(data)                               ((0x00003000&(data))>>12)
#define  SSB3_TV_SB1_DCU1_ARB_SR1_get_win_latcnt(data)                           (0x000000FF&(data))

#define  SSB3_TV_SB1_DCU1_bw_limit_0                                            0x180023D0
#define  SSB3_TV_SB1_DCU1_bw_limit_0_reg_addr                                    "0xB80023D0"
#define  SSB3_TV_SB1_DCU1_bw_limit_0_reg                                         0xB80023D0
#define  SSB3_TV_SB1_DCU1_bw_limit_0_inst_addr                                   "0x0012"
#define  set_SSB3_TV_SB1_DCU1_bw_limit_0_reg(data)                               (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_bw_limit_0_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_bw_limit_0_reg                                     (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_bw_limit_0_reg))
#define  SSB3_TV_SB1_DCU1_bw_limit_0_max_req_num_0_shift                         (24)
#define  SSB3_TV_SB1_DCU1_bw_limit_0_req_thr_0_shift                             (16)
#define  SSB3_TV_SB1_DCU1_bw_limit_0_time_thr_0_shift                            (0)
#define  SSB3_TV_SB1_DCU1_bw_limit_0_max_req_num_0_mask                          (0xFF000000)
#define  SSB3_TV_SB1_DCU1_bw_limit_0_req_thr_0_mask                              (0x00FF0000)
#define  SSB3_TV_SB1_DCU1_bw_limit_0_time_thr_0_mask                             (0x0000FFFF)
#define  SSB3_TV_SB1_DCU1_bw_limit_0_max_req_num_0(data)                         (0xFF000000&((data)<<24))
#define  SSB3_TV_SB1_DCU1_bw_limit_0_req_thr_0(data)                             (0x00FF0000&((data)<<16))
#define  SSB3_TV_SB1_DCU1_bw_limit_0_time_thr_0(data)                            (0x0000FFFF&(data))
#define  SSB3_TV_SB1_DCU1_bw_limit_0_get_max_req_num_0(data)                     ((0xFF000000&(data))>>24)
#define  SSB3_TV_SB1_DCU1_bw_limit_0_get_req_thr_0(data)                         ((0x00FF0000&(data))>>16)
#define  SSB3_TV_SB1_DCU1_bw_limit_0_get_time_thr_0(data)                        (0x0000FFFF&(data))

#define  SSB3_TV_SB1_DCU1_bw_limit_1                                            0x180023D4
#define  SSB3_TV_SB1_DCU1_bw_limit_1_reg_addr                                    "0xB80023D4"
#define  SSB3_TV_SB1_DCU1_bw_limit_1_reg                                         0xB80023D4
#define  SSB3_TV_SB1_DCU1_bw_limit_1_inst_addr                                   "0x0013"
#define  set_SSB3_TV_SB1_DCU1_bw_limit_1_reg(data)                               (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_bw_limit_1_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_bw_limit_1_reg                                     (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_bw_limit_1_reg))
#define  SSB3_TV_SB1_DCU1_bw_limit_1_max_req_num_1_shift                         (24)
#define  SSB3_TV_SB1_DCU1_bw_limit_1_req_thr_1_shift                             (16)
#define  SSB3_TV_SB1_DCU1_bw_limit_1_time_thr_1_shift                            (0)
#define  SSB3_TV_SB1_DCU1_bw_limit_1_max_req_num_1_mask                          (0xFF000000)
#define  SSB3_TV_SB1_DCU1_bw_limit_1_req_thr_1_mask                              (0x00FF0000)
#define  SSB3_TV_SB1_DCU1_bw_limit_1_time_thr_1_mask                             (0x0000FFFF)
#define  SSB3_TV_SB1_DCU1_bw_limit_1_max_req_num_1(data)                         (0xFF000000&((data)<<24))
#define  SSB3_TV_SB1_DCU1_bw_limit_1_req_thr_1(data)                             (0x00FF0000&((data)<<16))
#define  SSB3_TV_SB1_DCU1_bw_limit_1_time_thr_1(data)                            (0x0000FFFF&(data))
#define  SSB3_TV_SB1_DCU1_bw_limit_1_get_max_req_num_1(data)                     ((0xFF000000&(data))>>24)
#define  SSB3_TV_SB1_DCU1_bw_limit_1_get_req_thr_1(data)                         ((0x00FF0000&(data))>>16)
#define  SSB3_TV_SB1_DCU1_bw_limit_1_get_time_thr_1(data)                        (0x0000FFFF&(data))

#define  SSB3_TV_SB1_DCU1_bw_limit_en                                           0x180023E8
#define  SSB3_TV_SB1_DCU1_bw_limit_en_reg_addr                                   "0xB80023E8"
#define  SSB3_TV_SB1_DCU1_bw_limit_en_reg                                        0xB80023E8
#define  SSB3_TV_SB1_DCU1_bw_limit_en_inst_addr                                  "0x0014"
#define  set_SSB3_TV_SB1_DCU1_bw_limit_en_reg(data)                              (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_bw_limit_en_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_bw_limit_en_reg                                    (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_bw_limit_en_reg))
#define  SSB3_TV_SB1_DCU1_bw_limit_en_len_scheme_en_shift                        (31)
#define  SSB3_TV_SB1_DCU1_bw_limit_en_bw_status_clr_1_shift                      (3)
#define  SSB3_TV_SB1_DCU1_bw_limit_en_bw_limit_en_1_shift                        (2)
#define  SSB3_TV_SB1_DCU1_bw_limit_en_bw_status_clr_0_shift                      (1)
#define  SSB3_TV_SB1_DCU1_bw_limit_en_bw_limit_en_0_shift                        (0)
#define  SSB3_TV_SB1_DCU1_bw_limit_en_len_scheme_en_mask                         (0x80000000)
#define  SSB3_TV_SB1_DCU1_bw_limit_en_bw_status_clr_1_mask                       (0x00000008)
#define  SSB3_TV_SB1_DCU1_bw_limit_en_bw_limit_en_1_mask                         (0x00000004)
#define  SSB3_TV_SB1_DCU1_bw_limit_en_bw_status_clr_0_mask                       (0x00000002)
#define  SSB3_TV_SB1_DCU1_bw_limit_en_bw_limit_en_0_mask                         (0x00000001)
#define  SSB3_TV_SB1_DCU1_bw_limit_en_len_scheme_en(data)                        (0x80000000&((data)<<31))
#define  SSB3_TV_SB1_DCU1_bw_limit_en_bw_status_clr_1(data)                      (0x00000008&((data)<<3))
#define  SSB3_TV_SB1_DCU1_bw_limit_en_bw_limit_en_1(data)                        (0x00000004&((data)<<2))
#define  SSB3_TV_SB1_DCU1_bw_limit_en_bw_status_clr_0(data)                      (0x00000002&((data)<<1))
#define  SSB3_TV_SB1_DCU1_bw_limit_en_bw_limit_en_0(data)                        (0x00000001&(data))
#define  SSB3_TV_SB1_DCU1_bw_limit_en_get_len_scheme_en(data)                    ((0x80000000&(data))>>31)
#define  SSB3_TV_SB1_DCU1_bw_limit_en_get_bw_status_clr_1(data)                  ((0x00000008&(data))>>3)
#define  SSB3_TV_SB1_DCU1_bw_limit_en_get_bw_limit_en_1(data)                    ((0x00000004&(data))>>2)
#define  SSB3_TV_SB1_DCU1_bw_limit_en_get_bw_status_clr_0(data)                  ((0x00000002&(data))>>1)
#define  SSB3_TV_SB1_DCU1_bw_limit_en_get_bw_limit_en_0(data)                    (0x00000001&(data))

#define  SSB3_TV_SB1_DCU1_error_status                                          0x180023FC
#define  SSB3_TV_SB1_DCU1_error_status_reg_addr                                  "0xB80023FC"
#define  SSB3_TV_SB1_DCU1_error_status_reg                                       0xB80023FC
#define  SSB3_TV_SB1_DCU1_error_status_inst_addr                                 "0x0015"
#define  set_SSB3_TV_SB1_DCU1_error_status_reg(data)                             (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_error_status_reg)=data)
#define  get_SSB3_TV_SB1_DCU1_error_status_reg                                   (*((volatile unsigned int*)SSB3_TV_SB1_DCU1_error_status_reg))
#define  SSB3_TV_SB1_DCU1_error_status_error_clr_shift                           (31)
#define  SSB3_TV_SB1_DCU1_error_status_error_read_full_shift                     (9)
#define  SSB3_TV_SB1_DCU1_error_status_error_write_full_shift                    (8)
#define  SSB3_TV_SB1_DCU1_error_status_error_wdone_full_shift                    (7)
#define  SSB3_TV_SB1_DCU1_error_status_error_clr_mask                            (0x80000000)
#define  SSB3_TV_SB1_DCU1_error_status_error_read_full_mask                      (0x00000200)
#define  SSB3_TV_SB1_DCU1_error_status_error_write_full_mask                     (0x00000100)
#define  SSB3_TV_SB1_DCU1_error_status_error_wdone_full_mask                     (0x00000080)
#define  SSB3_TV_SB1_DCU1_error_status_error_clr(data)                           (0x80000000&((data)<<31))
#define  SSB3_TV_SB1_DCU1_error_status_error_read_full(data)                     (0x00000200&((data)<<9))
#define  SSB3_TV_SB1_DCU1_error_status_error_write_full(data)                    (0x00000100&((data)<<8))
#define  SSB3_TV_SB1_DCU1_error_status_error_wdone_full(data)                    (0x00000080&((data)<<7))
#define  SSB3_TV_SB1_DCU1_error_status_get_error_clr(data)                       ((0x80000000&(data))>>31)
#define  SSB3_TV_SB1_DCU1_error_status_get_error_read_full(data)                 ((0x00000200&(data))>>9)
#define  SSB3_TV_SB1_DCU1_error_status_get_error_write_full(data)                ((0x00000100&(data))>>8)
#define  SSB3_TV_SB1_DCU1_error_status_get_error_wdone_full(data)                ((0x00000080&(data))>>7)

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======SSB3 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18002380_31_16:16;
        RBus_UInt32  time_step:4;
        RBus_UInt32  res1:10;
        RBus_UInt32  arb_en:2;
    };
}ssb3_tv_sb1_dcu1_arb_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sf_rx_mode:1;
        RBus_UInt32  sf_rx_start:1;
        RBus_UInt32  sf_tx_mode:1;
        RBus_UInt32  sf_tx_start:1;
        RBus_UInt32  sf_rx_gated:1;
        RBus_UInt32  sf_rx_done:1;
        RBus_UInt32  sf_rx_err:1;
        RBus_UInt32  sf_tx_work:1;
        RBus_UInt32  sf_rx_debug_bit_sel:8;
        RBus_UInt32  sf_rx_fail_bit_status:1;
        RBus_UInt32  res1:15;
    };
}ssb3_tv_sb1_dcu1_sf_test_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client0_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client0_latcnt_beg:8;
    };
}ssb3_tv_sb1_dcu1_latcnt_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client1_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client1_latcnt_beg:8;
    };
}ssb3_tv_sb1_dcu1_latcnt_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  pc_rd_only:1;
        RBus_UInt32  pc_go:1;
    };
}ssb3_tv_sb1_dcu1_pc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_mon_num:32;
    };
}ssb3_tv_sb1_dcu1_pc_tota_mon_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_ack_num:32;
    };
}ssb3_tv_sb1_dcu1_pc_tota_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_idl_num:32;
    };
}ssb3_tv_sb1_dcu1_pc_tota_idl_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_prog0_req_occur:1;
        RBus_UInt32  res1:27;
        RBus_UInt32  pc_prog0_sel:4;
    };
}ssb3_tv_sb1_dcu1_pc_prog_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_acc_lat:32;
    };
}ssb3_tv_sb1_dcu1_pc_prog_0_acc_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  prog_max_lat:16;
    };
}ssb3_tv_sb1_dcu1_pc_prog_0_max_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  prog_req_num:24;
    };
}ssb3_tv_sb1_dcu1_pc_prog_0_req_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_ack_num:32;
    };
}ssb3_tv_sb1_dcu1_pc_prog_0_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  prog_hitend_cnt:16;
    };
}ssb3_tv_sb1_dcu1_pc_prog_0_hitend_RBUS;

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
}ssb3_tv_sb1_dcu1_bridge_test_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bt_addr_data:29;
        RBus_UInt32  res1:3;
    };
}ssb3_tv_sb1_dcu1_bridge_test_addr_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  max_count:4;
        RBus_UInt32  res2:8;
        RBus_UInt32  off_time:8;
    };
}ssb3_tv_sb1_dcu1_req_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  sb_req:2;
        RBus_UInt32  res2:8;
        RBus_UInt32  sb_gnt:2;
        RBus_UInt32  res3:4;
        RBus_UInt32  win_latcnt:8;
    };
}ssb3_tv_sb1_dcu1_arb_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_0:8;
        RBus_UInt32  req_thr_0:8;
        RBus_UInt32  time_thr_0:16;
    };
}ssb3_tv_sb1_dcu1_bw_limit_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_1:8;
        RBus_UInt32  req_thr_1:8;
        RBus_UInt32  time_thr_1:16;
    };
}ssb3_tv_sb1_dcu1_bw_limit_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  len_scheme_en:1;
        RBus_UInt32  res1:27;
        RBus_UInt32  bw_status_clr_1:1;
        RBus_UInt32  bw_limit_en_1:1;
        RBus_UInt32  bw_status_clr_0:1;
        RBus_UInt32  bw_limit_en_0:1;
    };
}ssb3_tv_sb1_dcu1_bw_limit_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  error_clr:1;
        RBus_UInt32  res1:21;
        RBus_UInt32  error_read_full:1;
        RBus_UInt32  error_write_full:1;
        RBus_UInt32  error_wdone_full:1;
        RBus_UInt32  res2:7;
    };
}ssb3_tv_sb1_dcu1_error_status_RBUS;

#else //apply LITTLE_ENDIAN

//======SSB3 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  arb_en:2;
        RBus_UInt32  res1:10;
        RBus_UInt32  time_step:4;
        RBus_UInt32  dummy18002380_31_16:16;
    };
}ssb3_tv_sb1_dcu1_arb_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  sf_rx_fail_bit_status:1;
        RBus_UInt32  sf_rx_debug_bit_sel:8;
        RBus_UInt32  sf_tx_work:1;
        RBus_UInt32  sf_rx_err:1;
        RBus_UInt32  sf_rx_done:1;
        RBus_UInt32  sf_rx_gated:1;
        RBus_UInt32  sf_tx_start:1;
        RBus_UInt32  sf_tx_mode:1;
        RBus_UInt32  sf_rx_start:1;
        RBus_UInt32  sf_rx_mode:1;
    };
}ssb3_tv_sb1_dcu1_sf_test_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client0_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client0_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}ssb3_tv_sb1_dcu1_latcnt_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client1_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client1_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}ssb3_tv_sb1_dcu1_latcnt_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_go:1;
        RBus_UInt32  pc_rd_only:1;
        RBus_UInt32  res1:30;
    };
}ssb3_tv_sb1_dcu1_pc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_mon_num:32;
    };
}ssb3_tv_sb1_dcu1_pc_tota_mon_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_ack_num:32;
    };
}ssb3_tv_sb1_dcu1_pc_tota_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_idl_num:32;
    };
}ssb3_tv_sb1_dcu1_pc_tota_idl_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_prog0_sel:4;
        RBus_UInt32  res1:27;
        RBus_UInt32  pc_prog0_req_occur:1;
    };
}ssb3_tv_sb1_dcu1_pc_prog_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_acc_lat:32;
    };
}ssb3_tv_sb1_dcu1_pc_prog_0_acc_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_max_lat:16;
        RBus_UInt32  res1:16;
    };
}ssb3_tv_sb1_dcu1_pc_prog_0_max_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_req_num:24;
        RBus_UInt32  res1:8;
    };
}ssb3_tv_sb1_dcu1_pc_prog_0_req_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_ack_num:32;
    };
}ssb3_tv_sb1_dcu1_pc_prog_0_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_hitend_cnt:16;
        RBus_UInt32  res1:16;
    };
}ssb3_tv_sb1_dcu1_pc_prog_0_hitend_RBUS;

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
}ssb3_tv_sb1_dcu1_bridge_test_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  bt_addr_data:29;
    };
}ssb3_tv_sb1_dcu1_bridge_test_addr_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  off_time:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  max_count:4;
        RBus_UInt32  res2:12;
    };
}ssb3_tv_sb1_dcu1_req_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  win_latcnt:8;
        RBus_UInt32  res1:4;
        RBus_UInt32  sb_gnt:2;
        RBus_UInt32  res2:8;
        RBus_UInt32  sb_req:2;
        RBus_UInt32  res3:8;
    };
}ssb3_tv_sb1_dcu1_arb_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_0:16;
        RBus_UInt32  req_thr_0:8;
        RBus_UInt32  max_req_num_0:8;
    };
}ssb3_tv_sb1_dcu1_bw_limit_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_1:16;
        RBus_UInt32  req_thr_1:8;
        RBus_UInt32  max_req_num_1:8;
    };
}ssb3_tv_sb1_dcu1_bw_limit_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bw_limit_en_0:1;
        RBus_UInt32  bw_status_clr_0:1;
        RBus_UInt32  bw_limit_en_1:1;
        RBus_UInt32  bw_status_clr_1:1;
        RBus_UInt32  res1:27;
        RBus_UInt32  len_scheme_en:1;
    };
}ssb3_tv_sb1_dcu1_bw_limit_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  error_wdone_full:1;
        RBus_UInt32  error_write_full:1;
        RBus_UInt32  error_read_full:1;
        RBus_UInt32  res2:21;
        RBus_UInt32  error_clr:1;
    };
}ssb3_tv_sb1_dcu1_error_status_RBUS;




#endif 


#endif 
