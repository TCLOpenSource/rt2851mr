/**
* @file Merlin5-DesignSpec-TV-SB7-DCU1
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_TVSB7_REG_H_
#define _RBUS_TVSB7_REG_H_

#include "rbus_types.h"



//  TVSB7 Register Address
#define  TVSB7_TV_SB7_DCU1_ARB_CR0                                              0x1801C900
#define  TVSB7_TV_SB7_DCU1_ARB_CR0_reg_addr                                      "0xB801C900"
#define  TVSB7_TV_SB7_DCU1_ARB_CR0_reg                                           0xB801C900
#define  TVSB7_TV_SB7_DCU1_ARB_CR0_inst_addr                                     "0x0000"
#define  set_TVSB7_TV_SB7_DCU1_ARB_CR0_reg(data)                                 (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_ARB_CR0_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_ARB_CR0_reg                                       (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_ARB_CR0_reg))
#define  TVSB7_TV_SB7_DCU1_ARB_CR0_dummy_31_4_shift                              (4)
#define  TVSB7_TV_SB7_DCU1_ARB_CR0_time_step_shift                               (0)
#define  TVSB7_TV_SB7_DCU1_ARB_CR0_dummy_31_4_mask                               (0xFFFFFFF0)
#define  TVSB7_TV_SB7_DCU1_ARB_CR0_time_step_mask                                (0x0000000F)
#define  TVSB7_TV_SB7_DCU1_ARB_CR0_dummy_31_4(data)                              (0xFFFFFFF0&((data)<<4))
#define  TVSB7_TV_SB7_DCU1_ARB_CR0_time_step(data)                               (0x0000000F&(data))
#define  TVSB7_TV_SB7_DCU1_ARB_CR0_get_dummy_31_4(data)                          ((0xFFFFFFF0&(data))>>4)
#define  TVSB7_TV_SB7_DCU1_ARB_CR0_get_time_step(data)                           (0x0000000F&(data))

#define  TVSB7_TV_SB7_DCU1_ARB_CR1                                              0x1801C904
#define  TVSB7_TV_SB7_DCU1_ARB_CR1_reg_addr                                      "0xB801C904"
#define  TVSB7_TV_SB7_DCU1_ARB_CR1_reg                                           0xB801C904
#define  TVSB7_TV_SB7_DCU1_ARB_CR1_inst_addr                                     "0x0001"
#define  set_TVSB7_TV_SB7_DCU1_ARB_CR1_reg(data)                                 (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_ARB_CR1_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_ARB_CR1_reg                                       (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_ARB_CR1_reg))
#define  TVSB7_TV_SB7_DCU1_ARB_CR1_arb_en_shift                                  (0)
#define  TVSB7_TV_SB7_DCU1_ARB_CR1_arb_en_mask                                   (0x00000003)
#define  TVSB7_TV_SB7_DCU1_ARB_CR1_arb_en(data)                                  (0x00000003&(data))
#define  TVSB7_TV_SB7_DCU1_ARB_CR1_get_arb_en(data)                              (0x00000003&(data))

#define  TVSB7_TV_SB7_DCU1_LATCNT_CR1                                           0x1801C908
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR1_reg_addr                                   "0xB801C908"
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR1_reg                                        0xB801C908
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR1_inst_addr                                  "0x0002"
#define  set_TVSB7_TV_SB7_DCU1_LATCNT_CR1_reg(data)                              (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_LATCNT_CR1_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_LATCNT_CR1_reg                                    (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_LATCNT_CR1_reg))
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR1_client0_latcnt_end_shift                   (16)
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR1_client0_latcnt_beg_shift                   (0)
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR1_client0_latcnt_end_mask                    (0x00FF0000)
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR1_client0_latcnt_beg_mask                    (0x000000FF)
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR1_client0_latcnt_end(data)                   (0x00FF0000&((data)<<16))
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR1_client0_latcnt_beg(data)                   (0x000000FF&(data))
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR1_get_client0_latcnt_end(data)               ((0x00FF0000&(data))>>16)
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR1_get_client0_latcnt_beg(data)               (0x000000FF&(data))

#define  TVSB7_TV_SB7_DCU1_LATCNT_CR2                                           0x1801C90C
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR2_reg_addr                                   "0xB801C90C"
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR2_reg                                        0xB801C90C
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR2_inst_addr                                  "0x0003"
#define  set_TVSB7_TV_SB7_DCU1_LATCNT_CR2_reg(data)                              (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_LATCNT_CR2_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_LATCNT_CR2_reg                                    (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_LATCNT_CR2_reg))
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR2_client1_latcnt_end_shift                   (16)
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR2_client1_latcnt_beg_shift                   (0)
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR2_client1_latcnt_end_mask                    (0x00FF0000)
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR2_client1_latcnt_beg_mask                    (0x000000FF)
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR2_client1_latcnt_end(data)                   (0x00FF0000&((data)<<16))
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR2_client1_latcnt_beg(data)                   (0x000000FF&(data))
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR2_get_client1_latcnt_end(data)               ((0x00FF0000&(data))>>16)
#define  TVSB7_TV_SB7_DCU1_LATCNT_CR2_get_client1_latcnt_beg(data)               (0x000000FF&(data))

#define  TVSB7_TV_SB7_DCU1_PC_CTRL                                              0x1801C910
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_reg_addr                                      "0xB801C910"
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_reg                                           0xB801C910
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_inst_addr                                     "0x0004"
#define  set_TVSB7_TV_SB7_DCU1_PC_CTRL_reg(data)                                 (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_CTRL_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_PC_CTRL_reg                                       (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_CTRL_reg))
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_pc_prog0_req_occur_shift                      (31)
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_pc_prog0_sel_shift                            (4)
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_pc_rd_only_shift                              (1)
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_pc_go_shift                                   (0)
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_pc_prog0_req_occur_mask                       (0x80000000)
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_pc_prog0_sel_mask                             (0x00000010)
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_pc_rd_only_mask                               (0x00000002)
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_pc_go_mask                                    (0x00000001)
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_pc_prog0_req_occur(data)                      (0x80000000&((data)<<31))
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_pc_prog0_sel(data)                            (0x00000010&((data)<<4))
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_pc_rd_only(data)                              (0x00000002&((data)<<1))
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_pc_go(data)                                   (0x00000001&(data))
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_get_pc_prog0_req_occur(data)                  ((0x80000000&(data))>>31)
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_get_pc_prog0_sel(data)                        ((0x00000010&(data))>>4)
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_get_pc_rd_only(data)                          ((0x00000002&(data))>>1)
#define  TVSB7_TV_SB7_DCU1_PC_CTRL_get_pc_go(data)                               (0x00000001&(data))

#define  TVSB7_TV_SB7_DCU1_PC_TOTA_MON_NUM                                      0x1801C914
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_MON_NUM_reg_addr                              "0xB801C914"
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_MON_NUM_reg                                   0xB801C914
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_MON_NUM_inst_addr                             "0x0005"
#define  set_TVSB7_TV_SB7_DCU1_PC_TOTA_MON_NUM_reg(data)                         (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_TOTA_MON_NUM_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_PC_TOTA_MON_NUM_reg                               (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_TOTA_MON_NUM_reg))
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_MON_NUM_pc_tota_mon_num_shift                 (0)
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_MON_NUM_pc_tota_mon_num_mask                  (0xFFFFFFFF)
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_MON_NUM_pc_tota_mon_num(data)                 (0xFFFFFFFF&(data))
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_MON_NUM_get_pc_tota_mon_num(data)             (0xFFFFFFFF&(data))

#define  TVSB7_TV_SB7_DCU1_PC_TOTA_ACK_NUM                                      0x1801C918
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_ACK_NUM_reg_addr                              "0xB801C918"
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_ACK_NUM_reg                                   0xB801C918
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_ACK_NUM_inst_addr                             "0x0006"
#define  set_TVSB7_TV_SB7_DCU1_PC_TOTA_ACK_NUM_reg(data)                         (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_TOTA_ACK_NUM_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_PC_TOTA_ACK_NUM_reg                               (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_TOTA_ACK_NUM_reg))
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_ACK_NUM_pc_tota_ack_num_shift                 (0)
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_ACK_NUM_pc_tota_ack_num_mask                  (0xFFFFFFFF)
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_ACK_NUM_pc_tota_ack_num(data)                 (0xFFFFFFFF&(data))
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_ACK_NUM_get_pc_tota_ack_num(data)             (0xFFFFFFFF&(data))

#define  TVSB7_TV_SB7_DCU1_PC_TOTA_IDL_NUM                                      0x1801C91C
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_IDL_NUM_reg_addr                              "0xB801C91C"
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_IDL_NUM_reg                                   0xB801C91C
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_IDL_NUM_inst_addr                             "0x0007"
#define  set_TVSB7_TV_SB7_DCU1_PC_TOTA_IDL_NUM_reg(data)                         (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_TOTA_IDL_NUM_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_PC_TOTA_IDL_NUM_reg                               (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_TOTA_IDL_NUM_reg))
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_IDL_NUM_pc_tota_idl_num_shift                 (0)
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_IDL_NUM_pc_tota_idl_num_mask                  (0xFFFFFFFF)
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_IDL_NUM_pc_tota_idl_num(data)                 (0xFFFFFFFF&(data))
#define  TVSB7_TV_SB7_DCU1_PC_TOTA_IDL_NUM_get_pc_tota_idl_num(data)             (0xFFFFFFFF&(data))

#define  TVSB7_TV_SB7_DCU1_PC_prog_0_acc_lat                                    0x1801C920
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_acc_lat_reg_addr                            "0xB801C920"
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_acc_lat_reg                                 0xB801C920
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_acc_lat_inst_addr                           "0x0008"
#define  set_TVSB7_TV_SB7_DCU1_PC_prog_0_acc_lat_reg(data)                       (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_prog_0_acc_lat_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_PC_prog_0_acc_lat_reg                             (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_prog_0_acc_lat_reg))
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_acc_lat_prog_acc_lat_shift                  (0)
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_acc_lat_prog_acc_lat_mask                   (0xFFFFFFFF)
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_acc_lat_prog_acc_lat(data)                  (0xFFFFFFFF&(data))
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_acc_lat_get_prog_acc_lat(data)              (0xFFFFFFFF&(data))

#define  TVSB7_TV_SB7_DCU1_PC_prog_0_max_lat                                    0x1801C924
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_max_lat_reg_addr                            "0xB801C924"
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_max_lat_reg                                 0xB801C924
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_max_lat_inst_addr                           "0x0009"
#define  set_TVSB7_TV_SB7_DCU1_PC_prog_0_max_lat_reg(data)                       (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_prog_0_max_lat_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_PC_prog_0_max_lat_reg                             (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_prog_0_max_lat_reg))
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_max_lat_prog_max_lat_shift                  (0)
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_max_lat_prog_max_lat_mask                   (0x0000FFFF)
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_max_lat_prog_max_lat(data)                  (0x0000FFFF&(data))
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_max_lat_get_prog_max_lat(data)              (0x0000FFFF&(data))

#define  TVSB7_TV_SB7_DCU1_PC_prog_0_req_num                                    0x1801C928
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_req_num_reg_addr                            "0xB801C928"
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_req_num_reg                                 0xB801C928
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_req_num_inst_addr                           "0x000A"
#define  set_TVSB7_TV_SB7_DCU1_PC_prog_0_req_num_reg(data)                       (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_prog_0_req_num_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_PC_prog_0_req_num_reg                             (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_prog_0_req_num_reg))
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_req_num_prog_req_num_shift                  (0)
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_req_num_prog_req_num_mask                   (0x00FFFFFF)
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_req_num_prog_req_num(data)                  (0x00FFFFFF&(data))
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_req_num_get_prog_req_num(data)              (0x00FFFFFF&(data))

#define  TVSB7_TV_SB7_DCU1_PC_prog_0_ack_num                                    0x1801C92C
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_ack_num_reg_addr                            "0xB801C92C"
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_ack_num_reg                                 0xB801C92C
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_ack_num_inst_addr                           "0x000B"
#define  set_TVSB7_TV_SB7_DCU1_PC_prog_0_ack_num_reg(data)                       (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_prog_0_ack_num_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_PC_prog_0_ack_num_reg                             (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_prog_0_ack_num_reg))
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_ack_num_prog_ack_num_shift                  (0)
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_ack_num_prog_ack_num_mask                   (0xFFFFFFFF)
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_ack_num_prog_ack_num(data)                  (0xFFFFFFFF&(data))
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_ack_num_get_prog_ack_num(data)              (0xFFFFFFFF&(data))

#define  TVSB7_TV_SB7_DCU1_PC_prog_0_hitend                                     0x1801C930
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_hitend_reg_addr                             "0xB801C930"
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_hitend_reg                                  0xB801C930
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_hitend_inst_addr                            "0x000C"
#define  set_TVSB7_TV_SB7_DCU1_PC_prog_0_hitend_reg(data)                        (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_prog_0_hitend_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_PC_prog_0_hitend_reg                              (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_PC_prog_0_hitend_reg))
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_hitend_prog_hitend_cnt_shift                (0)
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_hitend_prog_hitend_cnt_mask                 (0x0000FFFF)
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_hitend_prog_hitend_cnt(data)                (0x0000FFFF&(data))
#define  TVSB7_TV_SB7_DCU1_PC_prog_0_hitend_get_prog_hitend_cnt(data)            (0x0000FFFF&(data))

#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL                                     0x1801C934
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_reg_addr                             "0xB801C934"
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_reg                                  0xB801C934
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_inst_addr                            "0x000D"
#define  set_TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_reg(data)                        (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_reg                              (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_reg))
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_bt_done_shift                        (4)
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_bt_bl_shift                          (3)
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_bt_data_inv_shift                    (2)
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_bt_rw_shift                          (1)
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_bt_go_shift                          (0)
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_bt_done_mask                         (0x00000030)
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_bt_bl_mask                           (0x00000008)
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_bt_data_inv_mask                     (0x00000004)
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_bt_rw_mask                           (0x00000002)
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_bt_go_mask                           (0x00000001)
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_bt_done(data)                        (0x00000030&((data)<<4))
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_bt_bl(data)                          (0x00000008&((data)<<3))
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_bt_data_inv(data)                    (0x00000004&((data)<<2))
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_bt_rw(data)                          (0x00000002&((data)<<1))
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_bt_go(data)                          (0x00000001&(data))
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_get_bt_done(data)                    ((0x00000030&(data))>>4)
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_get_bt_bl(data)                      ((0x00000008&(data))>>3)
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_get_bt_data_inv(data)                ((0x00000004&(data))>>2)
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_get_bt_rw(data)                      ((0x00000002&(data))>>1)
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_CTRL_get_bt_go(data)                      (0x00000001&(data))

#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_ADDR_DATA                                0x1801C938
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_ADDR_DATA_reg_addr                        "0xB801C938"
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_ADDR_DATA_reg                             0xB801C938
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_ADDR_DATA_inst_addr                       "0x000E"
#define  set_TVSB7_TV_SB7_DCU1_BRIDGE_TEST_ADDR_DATA_reg(data)                   (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_BRIDGE_TEST_ADDR_DATA_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_BRIDGE_TEST_ADDR_DATA_reg                         (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_BRIDGE_TEST_ADDR_DATA_reg))
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_ADDR_DATA_bt_addr_data_shift              (4)
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_ADDR_DATA_bt_addr_data_mask               (0xFFFFFFF0)
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_ADDR_DATA_bt_addr_data(data)              (0xFFFFFFF0&((data)<<4))
#define  TVSB7_TV_SB7_DCU1_BRIDGE_TEST_ADDR_DATA_get_bt_addr_data(data)          ((0xFFFFFFF0&(data))>>4)

#define  TVSB7_TV_SB7_DCU1_ARB_SR0                                              0x1801C93C
#define  TVSB7_TV_SB7_DCU1_ARB_SR0_reg_addr                                      "0xB801C93C"
#define  TVSB7_TV_SB7_DCU1_ARB_SR0_reg                                           0xB801C93C
#define  TVSB7_TV_SB7_DCU1_ARB_SR0_inst_addr                                     "0x000F"
#define  set_TVSB7_TV_SB7_DCU1_ARB_SR0_reg(data)                                 (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_ARB_SR0_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_ARB_SR0_reg                                       (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_ARB_SR0_reg))
#define  TVSB7_TV_SB7_DCU1_ARB_SR0_sb_req_shift                                  (22)
#define  TVSB7_TV_SB7_DCU1_ARB_SR0_sb_gnt_shift                                  (12)
#define  TVSB7_TV_SB7_DCU1_ARB_SR0_win_latcnt_shift                              (0)
#define  TVSB7_TV_SB7_DCU1_ARB_SR0_sb_req_mask                                   (0x00C00000)
#define  TVSB7_TV_SB7_DCU1_ARB_SR0_sb_gnt_mask                                   (0x00003000)
#define  TVSB7_TV_SB7_DCU1_ARB_SR0_win_latcnt_mask                               (0x000000FF)
#define  TVSB7_TV_SB7_DCU1_ARB_SR0_sb_req(data)                                  (0x00C00000&((data)<<22))
#define  TVSB7_TV_SB7_DCU1_ARB_SR0_sb_gnt(data)                                  (0x00003000&((data)<<12))
#define  TVSB7_TV_SB7_DCU1_ARB_SR0_win_latcnt(data)                              (0x000000FF&(data))
#define  TVSB7_TV_SB7_DCU1_ARB_SR0_get_sb_req(data)                              ((0x00C00000&(data))>>22)
#define  TVSB7_TV_SB7_DCU1_ARB_SR0_get_sb_gnt(data)                              ((0x00003000&(data))>>12)
#define  TVSB7_TV_SB7_DCU1_ARB_SR0_get_win_latcnt(data)                          (0x000000FF&(data))

#define  TVSB7_TV_SB7_DCU1_bw_limit_0                                           0x1801C944
#define  TVSB7_TV_SB7_DCU1_bw_limit_0_reg_addr                                   "0xB801C944"
#define  TVSB7_TV_SB7_DCU1_bw_limit_0_reg                                        0xB801C944
#define  TVSB7_TV_SB7_DCU1_bw_limit_0_inst_addr                                  "0x0010"
#define  set_TVSB7_TV_SB7_DCU1_bw_limit_0_reg(data)                              (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_bw_limit_0_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_bw_limit_0_reg                                    (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_bw_limit_0_reg))
#define  TVSB7_TV_SB7_DCU1_bw_limit_0_max_req_num_0_shift                        (24)
#define  TVSB7_TV_SB7_DCU1_bw_limit_0_req_thr_0_shift                            (16)
#define  TVSB7_TV_SB7_DCU1_bw_limit_0_time_thr_0_shift                           (0)
#define  TVSB7_TV_SB7_DCU1_bw_limit_0_max_req_num_0_mask                         (0xFF000000)
#define  TVSB7_TV_SB7_DCU1_bw_limit_0_req_thr_0_mask                             (0x00FF0000)
#define  TVSB7_TV_SB7_DCU1_bw_limit_0_time_thr_0_mask                            (0x0000FFFF)
#define  TVSB7_TV_SB7_DCU1_bw_limit_0_max_req_num_0(data)                        (0xFF000000&((data)<<24))
#define  TVSB7_TV_SB7_DCU1_bw_limit_0_req_thr_0(data)                            (0x00FF0000&((data)<<16))
#define  TVSB7_TV_SB7_DCU1_bw_limit_0_time_thr_0(data)                           (0x0000FFFF&(data))
#define  TVSB7_TV_SB7_DCU1_bw_limit_0_get_max_req_num_0(data)                    ((0xFF000000&(data))>>24)
#define  TVSB7_TV_SB7_DCU1_bw_limit_0_get_req_thr_0(data)                        ((0x00FF0000&(data))>>16)
#define  TVSB7_TV_SB7_DCU1_bw_limit_0_get_time_thr_0(data)                       (0x0000FFFF&(data))

#define  TVSB7_TV_SB7_DCU1_bw_limit_1                                           0x1801C948
#define  TVSB7_TV_SB7_DCU1_bw_limit_1_reg_addr                                   "0xB801C948"
#define  TVSB7_TV_SB7_DCU1_bw_limit_1_reg                                        0xB801C948
#define  TVSB7_TV_SB7_DCU1_bw_limit_1_inst_addr                                  "0x0011"
#define  set_TVSB7_TV_SB7_DCU1_bw_limit_1_reg(data)                              (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_bw_limit_1_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_bw_limit_1_reg                                    (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_bw_limit_1_reg))
#define  TVSB7_TV_SB7_DCU1_bw_limit_1_max_req_num_1_shift                        (24)
#define  TVSB7_TV_SB7_DCU1_bw_limit_1_req_thr_1_shift                            (16)
#define  TVSB7_TV_SB7_DCU1_bw_limit_1_time_thr_1_shift                           (0)
#define  TVSB7_TV_SB7_DCU1_bw_limit_1_max_req_num_1_mask                         (0xFF000000)
#define  TVSB7_TV_SB7_DCU1_bw_limit_1_req_thr_1_mask                             (0x00FF0000)
#define  TVSB7_TV_SB7_DCU1_bw_limit_1_time_thr_1_mask                            (0x0000FFFF)
#define  TVSB7_TV_SB7_DCU1_bw_limit_1_max_req_num_1(data)                        (0xFF000000&((data)<<24))
#define  TVSB7_TV_SB7_DCU1_bw_limit_1_req_thr_1(data)                            (0x00FF0000&((data)<<16))
#define  TVSB7_TV_SB7_DCU1_bw_limit_1_time_thr_1(data)                           (0x0000FFFF&(data))
#define  TVSB7_TV_SB7_DCU1_bw_limit_1_get_max_req_num_1(data)                    ((0xFF000000&(data))>>24)
#define  TVSB7_TV_SB7_DCU1_bw_limit_1_get_req_thr_1(data)                        ((0x00FF0000&(data))>>16)
#define  TVSB7_TV_SB7_DCU1_bw_limit_1_get_time_thr_1(data)                       (0x0000FFFF&(data))

#define  TVSB7_TV_SB7_DCU1_bw_limit_en                                          0x1801C94C
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_reg_addr                                  "0xB801C94C"
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_reg                                       0xB801C94C
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_inst_addr                                 "0x0012"
#define  set_TVSB7_TV_SB7_DCU1_bw_limit_en_reg(data)                             (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_bw_limit_en_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_bw_limit_en_reg                                   (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_bw_limit_en_reg))
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_len_scheme_en_shift                       (31)
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_bw_status_clr_1_shift                     (3)
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_bw_limit_en_1_shift                       (2)
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_bw_status_clr_0_shift                     (1)
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_bw_limit_en_0_shift                       (0)
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_len_scheme_en_mask                        (0x80000000)
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_bw_status_clr_1_mask                      (0x00000008)
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_bw_limit_en_1_mask                        (0x00000004)
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_bw_status_clr_0_mask                      (0x00000002)
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_bw_limit_en_0_mask                        (0x00000001)
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_len_scheme_en(data)                       (0x80000000&((data)<<31))
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_bw_status_clr_1(data)                     (0x00000008&((data)<<3))
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_bw_limit_en_1(data)                       (0x00000004&((data)<<2))
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_bw_status_clr_0(data)                     (0x00000002&((data)<<1))
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_bw_limit_en_0(data)                       (0x00000001&(data))
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_get_len_scheme_en(data)                   ((0x80000000&(data))>>31)
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_get_bw_status_clr_1(data)                 ((0x00000008&(data))>>3)
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_get_bw_limit_en_1(data)                   ((0x00000004&(data))>>2)
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_get_bw_status_clr_0(data)                 ((0x00000002&(data))>>1)
#define  TVSB7_TV_SB7_DCU1_bw_limit_en_get_bw_limit_en_0(data)                   (0x00000001&(data))

#define  TVSB7_TV_SB7_DCU1_queue_ctrl                                           0x1801C950
#define  TVSB7_TV_SB7_DCU1_queue_ctrl_reg_addr                                   "0xB801C950"
#define  TVSB7_TV_SB7_DCU1_queue_ctrl_reg                                        0xB801C950
#define  TVSB7_TV_SB7_DCU1_queue_ctrl_inst_addr                                  "0x0013"
#define  set_TVSB7_TV_SB7_DCU1_queue_ctrl_reg(data)                              (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_queue_ctrl_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_queue_ctrl_reg                                    (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_queue_ctrl_reg))
#define  TVSB7_TV_SB7_DCU1_queue_ctrl_rd_queue_num_shift                         (16)
#define  TVSB7_TV_SB7_DCU1_queue_ctrl_wr_queue_num_shift                         (0)
#define  TVSB7_TV_SB7_DCU1_queue_ctrl_rd_queue_num_mask                          (0x00FF0000)
#define  TVSB7_TV_SB7_DCU1_queue_ctrl_wr_queue_num_mask                          (0x0000001F)
#define  TVSB7_TV_SB7_DCU1_queue_ctrl_rd_queue_num(data)                         (0x00FF0000&((data)<<16))
#define  TVSB7_TV_SB7_DCU1_queue_ctrl_wr_queue_num(data)                         (0x0000001F&(data))
#define  TVSB7_TV_SB7_DCU1_queue_ctrl_get_rd_queue_num(data)                     ((0x00FF0000&(data))>>16)
#define  TVSB7_TV_SB7_DCU1_queue_ctrl_get_wr_queue_num(data)                     (0x0000001F&(data))

#define  TVSB7_TV_SB7_DCU1_error_status                                         0x1801C954
#define  TVSB7_TV_SB7_DCU1_error_status_reg_addr                                 "0xB801C954"
#define  TVSB7_TV_SB7_DCU1_error_status_reg                                      0xB801C954
#define  TVSB7_TV_SB7_DCU1_error_status_inst_addr                                "0x0014"
#define  set_TVSB7_TV_SB7_DCU1_error_status_reg(data)                            (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_error_status_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_error_status_reg                                  (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_error_status_reg))
#define  TVSB7_TV_SB7_DCU1_error_status_error_clr_shift                          (31)
#define  TVSB7_TV_SB7_DCU1_error_status_error_zero_length_id_shift               (12)
#define  TVSB7_TV_SB7_DCU1_error_status_error_read_full_shift                    (9)
#define  TVSB7_TV_SB7_DCU1_error_status_error_write_full_shift                   (8)
#define  TVSB7_TV_SB7_DCU1_error_status_error_clr_mask                           (0x80000000)
#define  TVSB7_TV_SB7_DCU1_error_status_error_zero_length_id_mask                (0x0000F000)
#define  TVSB7_TV_SB7_DCU1_error_status_error_read_full_mask                     (0x00000200)
#define  TVSB7_TV_SB7_DCU1_error_status_error_write_full_mask                    (0x00000100)
#define  TVSB7_TV_SB7_DCU1_error_status_error_clr(data)                          (0x80000000&((data)<<31))
#define  TVSB7_TV_SB7_DCU1_error_status_error_zero_length_id(data)               (0x0000F000&((data)<<12))
#define  TVSB7_TV_SB7_DCU1_error_status_error_read_full(data)                    (0x00000200&((data)<<9))
#define  TVSB7_TV_SB7_DCU1_error_status_error_write_full(data)                   (0x00000100&((data)<<8))
#define  TVSB7_TV_SB7_DCU1_error_status_get_error_clr(data)                      ((0x80000000&(data))>>31)
#define  TVSB7_TV_SB7_DCU1_error_status_get_error_zero_length_id(data)           ((0x0000F000&(data))>>12)
#define  TVSB7_TV_SB7_DCU1_error_status_get_error_read_full(data)                ((0x00000200&(data))>>9)
#define  TVSB7_TV_SB7_DCU1_error_status_get_error_write_full(data)               ((0x00000100&(data))>>8)

#define  TVSB7_TV_SB7_DCU1_cti_ctrl                                             0x1801C958
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_reg_addr                                     "0xB801C958"
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_reg                                          0xB801C958
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_inst_addr                                    "0x0015"
#define  set_TVSB7_TV_SB7_DCU1_cti_ctrl_reg(data)                                (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_cti_ctrl_reg)=data)
#define  get_TVSB7_TV_SB7_DCU1_cti_ctrl_reg                                      (*((volatile unsigned int*)TVSB7_TV_SB7_DCU1_cti_ctrl_reg))
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_rd_wr_same_grp_shift                     (15)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_space_margin_shift                       (12)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_wr_grp_more_than_4_shift                 (11)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_wr_grp_block_shift                       (10)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_cmd_err_shift                        (9)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_len_err_shift                        (8)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_alight_err_shift                     (7)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_repeat_err_shift                     (6)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_num_err_shift                        (5)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_cont_err_shift                       (4)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_grp_wr_disable_shift                         (3)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_status_clr_shift                         (2)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_queue_flush_shift                            (1)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_grp_disable_shift                            (0)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_rd_wr_same_grp_mask                      (0x00008000)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_space_margin_mask                        (0x00007000)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_wr_grp_more_than_4_mask                  (0x00000800)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_wr_grp_block_mask                        (0x00000400)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_cmd_err_mask                         (0x00000200)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_len_err_mask                         (0x00000100)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_alight_err_mask                      (0x00000080)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_repeat_err_mask                      (0x00000040)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_num_err_mask                         (0x00000020)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_cont_err_mask                        (0x00000010)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_grp_wr_disable_mask                          (0x00000008)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_status_clr_mask                          (0x00000004)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_queue_flush_mask                             (0x00000002)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_grp_disable_mask                             (0x00000001)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_rd_wr_same_grp(data)                     (0x00008000&((data)<<15))
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_space_margin(data)                       (0x00007000&((data)<<12))
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_wr_grp_more_than_4(data)                 (0x00000800&((data)<<11))
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_wr_grp_block(data)                       (0x00000400&((data)<<10))
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_cmd_err(data)                        (0x00000200&((data)<<9))
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_len_err(data)                        (0x00000100&((data)<<8))
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_alight_err(data)                     (0x00000080&((data)<<7))
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_repeat_err(data)                     (0x00000040&((data)<<6))
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_num_err(data)                        (0x00000020&((data)<<5))
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_grp_cont_err(data)                       (0x00000010&((data)<<4))
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_grp_wr_disable(data)                         (0x00000008&((data)<<3))
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_cti_status_clr(data)                         (0x00000004&((data)<<2))
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_queue_flush(data)                            (0x00000002&((data)<<1))
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_grp_disable(data)                            (0x00000001&(data))
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_get_cti_rd_wr_same_grp(data)                 ((0x00008000&(data))>>15)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_get_cti_space_margin(data)                   ((0x00007000&(data))>>12)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_get_cti_wr_grp_more_than_4(data)             ((0x00000800&(data))>>11)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_get_cti_wr_grp_block(data)                   ((0x00000400&(data))>>10)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_get_cti_grp_cmd_err(data)                    ((0x00000200&(data))>>9)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_get_cti_grp_len_err(data)                    ((0x00000100&(data))>>8)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_get_cti_grp_alight_err(data)                 ((0x00000080&(data))>>7)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_get_cti_grp_repeat_err(data)                 ((0x00000040&(data))>>6)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_get_cti_grp_num_err(data)                    ((0x00000020&(data))>>5)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_get_cti_grp_cont_err(data)                   ((0x00000010&(data))>>4)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_get_grp_wr_disable(data)                     ((0x00000008&(data))>>3)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_get_cti_status_clr(data)                     ((0x00000004&(data))>>2)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_get_queue_flush(data)                        ((0x00000002&(data))>>1)
#define  TVSB7_TV_SB7_DCU1_cti_ctrl_get_grp_disable(data)                        (0x00000001&(data))

#define  TVSB7_TV_SB7_dummy_trc_0                                               0x1801C970
#define  TVSB7_TV_SB7_dummy_trc_0_reg_addr                                       "0xB801C970"
#define  TVSB7_TV_SB7_dummy_trc_0_reg                                            0xB801C970
#define  TVSB7_TV_SB7_dummy_trc_0_inst_addr                                      "0x0016"
#define  set_TVSB7_TV_SB7_dummy_trc_0_reg(data)                                  (*((volatile unsigned int*)TVSB7_TV_SB7_dummy_trc_0_reg)=data)
#define  get_TVSB7_TV_SB7_dummy_trc_0_reg                                        (*((volatile unsigned int*)TVSB7_TV_SB7_dummy_trc_0_reg))
#define  TVSB7_TV_SB7_dummy_trc_0_rw_type_shift                                  (28)
#define  TVSB7_TV_SB7_dummy_trc_0_bl_type_shift                                  (24)
#define  TVSB7_TV_SB7_dummy_trc_0_cmd_min_dly_shift                              (12)
#define  TVSB7_TV_SB7_dummy_trc_0_cmd_max_dly_shift                              (0)
#define  TVSB7_TV_SB7_dummy_trc_0_rw_type_mask                                   (0x30000000)
#define  TVSB7_TV_SB7_dummy_trc_0_bl_type_mask                                   (0x01000000)
#define  TVSB7_TV_SB7_dummy_trc_0_cmd_min_dly_mask                               (0x00FFF000)
#define  TVSB7_TV_SB7_dummy_trc_0_cmd_max_dly_mask                               (0x00000FFF)
#define  TVSB7_TV_SB7_dummy_trc_0_rw_type(data)                                  (0x30000000&((data)<<28))
#define  TVSB7_TV_SB7_dummy_trc_0_bl_type(data)                                  (0x01000000&((data)<<24))
#define  TVSB7_TV_SB7_dummy_trc_0_cmd_min_dly(data)                              (0x00FFF000&((data)<<12))
#define  TVSB7_TV_SB7_dummy_trc_0_cmd_max_dly(data)                              (0x00000FFF&(data))
#define  TVSB7_TV_SB7_dummy_trc_0_get_rw_type(data)                              ((0x30000000&(data))>>28)
#define  TVSB7_TV_SB7_dummy_trc_0_get_bl_type(data)                              ((0x01000000&(data))>>24)
#define  TVSB7_TV_SB7_dummy_trc_0_get_cmd_min_dly(data)                          ((0x00FFF000&(data))>>12)
#define  TVSB7_TV_SB7_dummy_trc_0_get_cmd_max_dly(data)                          (0x00000FFF&(data))

#define  TVSB7_TV_SB7_dummy_trc_1                                               0x1801C974
#define  TVSB7_TV_SB7_dummy_trc_1_reg_addr                                       "0xB801C974"
#define  TVSB7_TV_SB7_dummy_trc_1_reg                                            0xB801C974
#define  TVSB7_TV_SB7_dummy_trc_1_inst_addr                                      "0x0017"
#define  set_TVSB7_TV_SB7_dummy_trc_1_reg(data)                                  (*((volatile unsigned int*)TVSB7_TV_SB7_dummy_trc_1_reg)=data)
#define  get_TVSB7_TV_SB7_dummy_trc_1_reg                                        (*((volatile unsigned int*)TVSB7_TV_SB7_dummy_trc_1_reg))
#define  TVSB7_TV_SB7_dummy_trc_1_bl_64b_shift                                   (3)
#define  TVSB7_TV_SB7_dummy_trc_1_bl_64b_mask                                    (0x000007F8)
#define  TVSB7_TV_SB7_dummy_trc_1_bl_64b(data)                                   (0x000007F8&((data)<<3))
#define  TVSB7_TV_SB7_dummy_trc_1_get_bl_64b(data)                               ((0x000007F8&(data))>>3)

#define  TVSB7_TV_SB7_dummy_trc_2                                               0x1801C978
#define  TVSB7_TV_SB7_dummy_trc_2_reg_addr                                       "0xB801C978"
#define  TVSB7_TV_SB7_dummy_trc_2_reg                                            0xB801C978
#define  TVSB7_TV_SB7_dummy_trc_2_inst_addr                                      "0x0018"
#define  set_TVSB7_TV_SB7_dummy_trc_2_reg(data)                                  (*((volatile unsigned int*)TVSB7_TV_SB7_dummy_trc_2_reg)=data)
#define  get_TVSB7_TV_SB7_dummy_trc_2_reg                                        (*((volatile unsigned int*)TVSB7_TV_SB7_dummy_trc_2_reg))
#define  TVSB7_TV_SB7_dummy_trc_2_addr_64b_shift                                 (3)
#define  TVSB7_TV_SB7_dummy_trc_2_addr_64b_mask                                  (0xFFFFFFF8)
#define  TVSB7_TV_SB7_dummy_trc_2_addr_64b(data)                                 (0xFFFFFFF8&((data)<<3))
#define  TVSB7_TV_SB7_dummy_trc_2_get_addr_64b(data)                             ((0xFFFFFFF8&(data))>>3)

#define  TVSB7_TV_SB7_DC_64_WRAP_CTRL                                           0x1801C960
#define  TVSB7_TV_SB7_DC_64_WRAP_CTRL_reg_addr                                   "0xB801C960"
#define  TVSB7_TV_SB7_DC_64_WRAP_CTRL_reg                                        0xB801C960
#define  TVSB7_TV_SB7_DC_64_WRAP_CTRL_inst_addr                                  "0x0019"
#define  set_TVSB7_TV_SB7_DC_64_WRAP_CTRL_reg(data)                              (*((volatile unsigned int*)TVSB7_TV_SB7_DC_64_WRAP_CTRL_reg)=data)
#define  get_TVSB7_TV_SB7_DC_64_WRAP_CTRL_reg                                    (*((volatile unsigned int*)TVSB7_TV_SB7_DC_64_WRAP_CTRL_reg))
#define  TVSB7_TV_SB7_DC_64_WRAP_CTRL_full_transfer_shift                        (4)
#define  TVSB7_TV_SB7_DC_64_WRAP_CTRL_cmd_inorder_shift                          (0)
#define  TVSB7_TV_SB7_DC_64_WRAP_CTRL_full_transfer_mask                         (0x00000010)
#define  TVSB7_TV_SB7_DC_64_WRAP_CTRL_cmd_inorder_mask                           (0x00000001)
#define  TVSB7_TV_SB7_DC_64_WRAP_CTRL_full_transfer(data)                        (0x00000010&((data)<<4))
#define  TVSB7_TV_SB7_DC_64_WRAP_CTRL_cmd_inorder(data)                          (0x00000001&(data))
#define  TVSB7_TV_SB7_DC_64_WRAP_CTRL_get_full_transfer(data)                    ((0x00000010&(data))>>4)
#define  TVSB7_TV_SB7_DC_64_WRAP_CTRL_get_cmd_inorder(data)                      (0x00000001&(data))

#define  TVSB7_TV_SB7_DC_64_WRAP_BIST                                           0x1801C968
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_reg_addr                                   "0xB801C968"
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_reg                                        0xB801C968
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_inst_addr                                  "0x001A"
#define  set_TVSB7_TV_SB7_DC_64_WRAP_BIST_reg(data)                              (*((volatile unsigned int*)TVSB7_TV_SB7_DC_64_WRAP_BIST_reg)=data)
#define  get_TVSB7_TV_SB7_DC_64_WRAP_BIST_reg                                    (*((volatile unsigned int*)TVSB7_TV_SB7_DC_64_WRAP_BIST_reg))
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_fail_all_shift                  (14)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_fail_1_shift                    (13)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_fail_0_shift                    (12)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_pause_shift                 (11)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_fail_all_shift              (10)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_fail_1_shift                (9)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_fail_0_shift                (8)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_done_shift                  (5)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_done_shift                      (4)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_resume_shift                (2)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_mode_shift                  (1)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_mode_shift                      (0)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_fail_all_mask                   (0x00004000)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_fail_1_mask                     (0x00002000)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_fail_0_mask                     (0x00001000)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_pause_mask                  (0x00000800)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_fail_all_mask               (0x00000400)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_fail_1_mask                 (0x00000200)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_fail_0_mask                 (0x00000100)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_done_mask                   (0x00000020)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_done_mask                       (0x00000010)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_resume_mask                 (0x00000004)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_mode_mask                   (0x00000002)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_mode_mask                       (0x00000001)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_fail_all(data)                  (0x00004000&((data)<<14))
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_fail_1(data)                    (0x00002000&((data)<<13))
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_fail_0(data)                    (0x00001000&((data)<<12))
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_pause(data)                 (0x00000800&((data)<<11))
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_fail_all(data)              (0x00000400&((data)<<10))
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_fail_1(data)                (0x00000200&((data)<<9))
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_fail_0(data)                (0x00000100&((data)<<8))
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_done(data)                  (0x00000020&((data)<<5))
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_done(data)                      (0x00000010&((data)<<4))
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_resume(data)                (0x00000004&((data)<<2))
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_drf_mode(data)                  (0x00000002&((data)<<1))
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_tvsb7_bist_mode(data)                      (0x00000001&(data))
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_get_tvsb7_bist_fail_all(data)              ((0x00004000&(data))>>14)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_get_tvsb7_bist_fail_1(data)                ((0x00002000&(data))>>13)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_get_tvsb7_bist_fail_0(data)                ((0x00001000&(data))>>12)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_get_tvsb7_bist_drf_pause(data)             ((0x00000800&(data))>>11)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_get_tvsb7_bist_drf_fail_all(data)          ((0x00000400&(data))>>10)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_get_tvsb7_bist_drf_fail_1(data)            ((0x00000200&(data))>>9)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_get_tvsb7_bist_drf_fail_0(data)            ((0x00000100&(data))>>8)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_get_tvsb7_bist_drf_done(data)              ((0x00000020&(data))>>5)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_get_tvsb7_bist_done(data)                  ((0x00000010&(data))>>4)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_get_tvsb7_bist_drf_resume(data)            ((0x00000004&(data))>>2)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_get_tvsb7_bist_drf_mode(data)              ((0x00000002&(data))>>1)
#define  TVSB7_TV_SB7_DC_64_WRAP_BIST_get_tvsb7_bist_mode(data)                  (0x00000001&(data))

#define  TVSB7_TV_SB7_DC_64_WRAP_RM                                             0x1801C96C
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_reg_addr                                     "0xB801C96C"
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_reg                                          0xB801C96C
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_inst_addr                                    "0x001B"
#define  set_TVSB7_TV_SB7_DC_64_WRAP_RM_reg(data)                                (*((volatile unsigned int*)TVSB7_TV_SB7_DC_64_WRAP_RM_reg)=data)
#define  get_TVSB7_TV_SB7_DC_64_WRAP_RM_reg                                      (*((volatile unsigned int*)TVSB7_TV_SB7_DC_64_WRAP_RM_reg))
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_bist_rm_rmeb_shift                           (12)
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_bist_rm_rmb_shift                            (8)
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_bist_rm_rmea_shift                           (4)
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_bist_rm_rma_shift                            (0)
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_bist_rm_rmeb_mask                            (0x00001000)
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_bist_rm_rmb_mask                             (0x00000F00)
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_bist_rm_rmea_mask                            (0x00000010)
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_bist_rm_rma_mask                             (0x0000000F)
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_bist_rm_rmeb(data)                           (0x00001000&((data)<<12))
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_bist_rm_rmb(data)                            (0x00000F00&((data)<<8))
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_bist_rm_rmea(data)                           (0x00000010&((data)<<4))
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_bist_rm_rma(data)                            (0x0000000F&(data))
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_get_bist_rm_rmeb(data)                       ((0x00001000&(data))>>12)
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_get_bist_rm_rmb(data)                        ((0x00000F00&(data))>>8)
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_get_bist_rm_rmea(data)                       ((0x00000010&(data))>>4)
#define  TVSB7_TV_SB7_DC_64_WRAP_RM_get_bist_rm_rma(data)                        (0x0000000F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======TVSB7 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1801c900_31_4:28;
        RBus_UInt32  time_step:4;
    };
}tvsb7_tv_sb7_dcu1_arb_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  arb_en:2;
    };
}tvsb7_tv_sb7_dcu1_arb_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client0_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client0_latcnt_beg:8;
    };
}tvsb7_tv_sb7_dcu1_latcnt_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client1_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client1_latcnt_beg:8;
    };
}tvsb7_tv_sb7_dcu1_latcnt_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_prog0_req_occur:1;
        RBus_UInt32  res1:26;
        RBus_UInt32  pc_prog0_sel:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  pc_rd_only:1;
        RBus_UInt32  pc_go:1;
    };
}tvsb7_tv_sb7_dcu1_pc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_mon_num:32;
    };
}tvsb7_tv_sb7_dcu1_pc_tota_mon_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_ack_num:32;
    };
}tvsb7_tv_sb7_dcu1_pc_tota_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_idl_num:32;
    };
}tvsb7_tv_sb7_dcu1_pc_tota_idl_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_acc_lat:32;
    };
}tvsb7_tv_sb7_dcu1_pc_prog_0_acc_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  prog_max_lat:16;
    };
}tvsb7_tv_sb7_dcu1_pc_prog_0_max_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  prog_req_num:24;
    };
}tvsb7_tv_sb7_dcu1_pc_prog_0_req_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_ack_num:32;
    };
}tvsb7_tv_sb7_dcu1_pc_prog_0_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  prog_hitend_cnt:16;
    };
}tvsb7_tv_sb7_dcu1_pc_prog_0_hitend_RBUS;

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
}tvsb7_tv_sb7_dcu1_bridge_test_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bt_addr_data:28;
        RBus_UInt32  res1:4;
    };
}tvsb7_tv_sb7_dcu1_bridge_test_addr_data_RBUS;

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
}tvsb7_tv_sb7_dcu1_arb_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_0:8;
        RBus_UInt32  req_thr_0:8;
        RBus_UInt32  time_thr_0:16;
    };
}tvsb7_tv_sb7_dcu1_bw_limit_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_1:8;
        RBus_UInt32  req_thr_1:8;
        RBus_UInt32  time_thr_1:16;
    };
}tvsb7_tv_sb7_dcu1_bw_limit_1_RBUS;

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
}tvsb7_tv_sb7_dcu1_bw_limit_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  rd_queue_num:8;
        RBus_UInt32  res2:11;
        RBus_UInt32  wr_queue_num:5;
    };
}tvsb7_tv_sb7_dcu1_queue_ctrl_RBUS;

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
}tvsb7_tv_sb7_dcu1_error_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cti_rd_wr_same_grp:1;
        RBus_UInt32  cti_space_margin:3;
        RBus_UInt32  cti_wr_grp_more_than_4:1;
        RBus_UInt32  cti_wr_grp_block:1;
        RBus_UInt32  cti_grp_cmd_err:1;
        RBus_UInt32  cti_grp_len_err:1;
        RBus_UInt32  cti_grp_alight_err:1;
        RBus_UInt32  cti_grp_repeat_err:1;
        RBus_UInt32  cti_grp_num_err:1;
        RBus_UInt32  cti_grp_cont_err:1;
        RBus_UInt32  grp_wr_disable:1;
        RBus_UInt32  cti_status_clr:1;
        RBus_UInt32  queue_flush:1;
        RBus_UInt32  grp_disable:1;
    };
}tvsb7_tv_sb7_dcu1_cti_ctrl_RBUS;

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
}tvsb7_tv_sb7_dummy_trc_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  bl_64b:8;
        RBus_UInt32  res2:3;
    };
}tvsb7_tv_sb7_dummy_trc_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_64b:29;
        RBus_UInt32  res1:3;
    };
}tvsb7_tv_sb7_dummy_trc_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  full_transfer:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  cmd_inorder:1;
    };
}tvsb7_tv_sb7_dc_64_wrap_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  tvsb7_bist_fail_all:1;
        RBus_UInt32  tvsb7_bist_fail_1:1;
        RBus_UInt32  tvsb7_bist_fail_0:1;
        RBus_UInt32  tvsb7_bist_drf_pause:1;
        RBus_UInt32  tvsb7_bist_drf_fail_all:1;
        RBus_UInt32  tvsb7_bist_drf_fail_1:1;
        RBus_UInt32  tvsb7_bist_drf_fail_0:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  tvsb7_bist_drf_done:1;
        RBus_UInt32  tvsb7_bist_done:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  tvsb7_bist_drf_resume:1;
        RBus_UInt32  tvsb7_bist_drf_mode:1;
        RBus_UInt32  tvsb7_bist_mode:1;
    };
}tvsb7_tv_sb7_dc_64_wrap_bist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  bist_rm_rmeb:1;
        RBus_UInt32  bist_rm_rmb:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  bist_rm_rmea:1;
        RBus_UInt32  bist_rm_rma:4;
    };
}tvsb7_tv_sb7_dc_64_wrap_rm_RBUS;

#else //apply LITTLE_ENDIAN

//======TVSB7 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_step:4;
        RBus_UInt32  dummy1801c900_31_4:28;
    };
}tvsb7_tv_sb7_dcu1_arb_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  arb_en:2;
        RBus_UInt32  res1:30;
    };
}tvsb7_tv_sb7_dcu1_arb_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client0_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client0_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}tvsb7_tv_sb7_dcu1_latcnt_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client1_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client1_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}tvsb7_tv_sb7_dcu1_latcnt_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_go:1;
        RBus_UInt32  pc_rd_only:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  pc_prog0_sel:1;
        RBus_UInt32  res2:26;
        RBus_UInt32  pc_prog0_req_occur:1;
    };
}tvsb7_tv_sb7_dcu1_pc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_mon_num:32;
    };
}tvsb7_tv_sb7_dcu1_pc_tota_mon_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_ack_num:32;
    };
}tvsb7_tv_sb7_dcu1_pc_tota_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_idl_num:32;
    };
}tvsb7_tv_sb7_dcu1_pc_tota_idl_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_acc_lat:32;
    };
}tvsb7_tv_sb7_dcu1_pc_prog_0_acc_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_max_lat:16;
        RBus_UInt32  res1:16;
    };
}tvsb7_tv_sb7_dcu1_pc_prog_0_max_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_req_num:24;
        RBus_UInt32  res1:8;
    };
}tvsb7_tv_sb7_dcu1_pc_prog_0_req_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_ack_num:32;
    };
}tvsb7_tv_sb7_dcu1_pc_prog_0_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_hitend_cnt:16;
        RBus_UInt32  res1:16;
    };
}tvsb7_tv_sb7_dcu1_pc_prog_0_hitend_RBUS;

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
}tvsb7_tv_sb7_dcu1_bridge_test_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bt_addr_data:28;
    };
}tvsb7_tv_sb7_dcu1_bridge_test_addr_data_RBUS;

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
}tvsb7_tv_sb7_dcu1_arb_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_0:16;
        RBus_UInt32  req_thr_0:8;
        RBus_UInt32  max_req_num_0:8;
    };
}tvsb7_tv_sb7_dcu1_bw_limit_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_1:16;
        RBus_UInt32  req_thr_1:8;
        RBus_UInt32  max_req_num_1:8;
    };
}tvsb7_tv_sb7_dcu1_bw_limit_1_RBUS;

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
}tvsb7_tv_sb7_dcu1_bw_limit_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_queue_num:5;
        RBus_UInt32  res1:11;
        RBus_UInt32  rd_queue_num:8;
        RBus_UInt32  res2:8;
    };
}tvsb7_tv_sb7_dcu1_queue_ctrl_RBUS;

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
}tvsb7_tv_sb7_dcu1_error_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  grp_disable:1;
        RBus_UInt32  queue_flush:1;
        RBus_UInt32  cti_status_clr:1;
        RBus_UInt32  grp_wr_disable:1;
        RBus_UInt32  cti_grp_cont_err:1;
        RBus_UInt32  cti_grp_num_err:1;
        RBus_UInt32  cti_grp_repeat_err:1;
        RBus_UInt32  cti_grp_alight_err:1;
        RBus_UInt32  cti_grp_len_err:1;
        RBus_UInt32  cti_grp_cmd_err:1;
        RBus_UInt32  cti_wr_grp_block:1;
        RBus_UInt32  cti_wr_grp_more_than_4:1;
        RBus_UInt32  cti_space_margin:3;
        RBus_UInt32  cti_rd_wr_same_grp:1;
        RBus_UInt32  res1:16;
    };
}tvsb7_tv_sb7_dcu1_cti_ctrl_RBUS;

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
}tvsb7_tv_sb7_dummy_trc_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  bl_64b:8;
        RBus_UInt32  res2:21;
    };
}tvsb7_tv_sb7_dummy_trc_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  addr_64b:29;
    };
}tvsb7_tv_sb7_dummy_trc_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmd_inorder:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  full_transfer:1;
        RBus_UInt32  res2:27;
    };
}tvsb7_tv_sb7_dc_64_wrap_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tvsb7_bist_mode:1;
        RBus_UInt32  tvsb7_bist_drf_mode:1;
        RBus_UInt32  tvsb7_bist_drf_resume:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tvsb7_bist_done:1;
        RBus_UInt32  tvsb7_bist_drf_done:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  tvsb7_bist_drf_fail_0:1;
        RBus_UInt32  tvsb7_bist_drf_fail_1:1;
        RBus_UInt32  tvsb7_bist_drf_fail_all:1;
        RBus_UInt32  tvsb7_bist_drf_pause:1;
        RBus_UInt32  tvsb7_bist_fail_0:1;
        RBus_UInt32  tvsb7_bist_fail_1:1;
        RBus_UInt32  tvsb7_bist_fail_all:1;
        RBus_UInt32  res3:17;
    };
}tvsb7_tv_sb7_dc_64_wrap_bist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_rm_rma:4;
        RBus_UInt32  bist_rm_rmea:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  bist_rm_rmb:4;
        RBus_UInt32  bist_rm_rmeb:1;
        RBus_UInt32  res2:19;
    };
}tvsb7_tv_sb7_dc_64_wrap_rm_RBUS;




#endif 


#endif 
