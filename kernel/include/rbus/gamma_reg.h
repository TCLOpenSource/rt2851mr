/**
* @file Merlin5-DesignSpec-D-Domain_Panel_Compensation
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_GAMMA_REG_H_
#define _RBUS_GAMMA_REG_H_

#include "rbus_types.h"



//  GAMMA Register Address
#define  GAMMA_GAMMA_PORT                                                       0x1802C100
#define  GAMMA_GAMMA_PORT_reg_addr                                               "0xB802C100"
#define  GAMMA_GAMMA_PORT_reg                                                    0xB802C100
#define  GAMMA_GAMMA_PORT_inst_addr                                              "0x0000"
#define  set_GAMMA_GAMMA_PORT_reg(data)                                          (*((volatile unsigned int*)GAMMA_GAMMA_PORT_reg)=data)
#define  get_GAMMA_GAMMA_PORT_reg                                                (*((volatile unsigned int*)GAMMA_GAMMA_PORT_reg))
#define  GAMMA_GAMMA_PORT_gamma_tab_index_shift                                  (16)
#define  GAMMA_GAMMA_PORT_gamma_tab_d0_shift                                     (8)
#define  GAMMA_GAMMA_PORT_gamma_tab_d1_shift                                     (0)
#define  GAMMA_GAMMA_PORT_gamma_tab_index_mask                                   (0x0FFF0000)
#define  GAMMA_GAMMA_PORT_gamma_tab_d0_mask                                      (0x0000FF00)
#define  GAMMA_GAMMA_PORT_gamma_tab_d1_mask                                      (0x000000FF)
#define  GAMMA_GAMMA_PORT_gamma_tab_index(data)                                  (0x0FFF0000&((data)<<16))
#define  GAMMA_GAMMA_PORT_gamma_tab_d0(data)                                     (0x0000FF00&((data)<<8))
#define  GAMMA_GAMMA_PORT_gamma_tab_d1(data)                                     (0x000000FF&(data))
#define  GAMMA_GAMMA_PORT_get_gamma_tab_index(data)                              ((0x0FFF0000&(data))>>16)
#define  GAMMA_GAMMA_PORT_get_gamma_tab_d0(data)                                 ((0x0000FF00&(data))>>8)
#define  GAMMA_GAMMA_PORT_get_gamma_tab_d1(data)                                 (0x000000FF&(data))

#define  GAMMA_GAMMA_CTRL_1                                                     0x1802C104
#define  GAMMA_GAMMA_CTRL_1_reg_addr                                             "0xB802C104"
#define  GAMMA_GAMMA_CTRL_1_reg                                                  0xB802C104
#define  GAMMA_GAMMA_CTRL_1_inst_addr                                            "0x0001"
#define  set_GAMMA_GAMMA_CTRL_1_reg(data)                                        (*((volatile unsigned int*)GAMMA_GAMMA_CTRL_1_reg)=data)
#define  get_GAMMA_GAMMA_CTRL_1_reg                                              (*((volatile unsigned int*)GAMMA_GAMMA_CTRL_1_reg))
#define  GAMMA_GAMMA_CTRL_1_gamma_read_tab_sel_shift                             (28)
#define  GAMMA_GAMMA_CTRL_1_gamma_tab_addr_shift                                 (16)
#define  GAMMA_GAMMA_CTRL_1_gamma_ax_rw_sel_shift                                (7)
#define  GAMMA_GAMMA_CTRL_1_gamma_ax_tab_sel_shift                               (6)
#define  GAMMA_GAMMA_CTRL_1_gamma_ax_ch_sel_shift                                (4)
#define  GAMMA_GAMMA_CTRL_1_gamma_fifo_empty_shift                               (3)
#define  GAMMA_GAMMA_CTRL_1_gamma_fifo_full_shift                                (2)
#define  GAMMA_GAMMA_CTRL_1_gamma_wr_error_shift                                 (1)
#define  GAMMA_GAMMA_CTRL_1_dummy_0_shift                                        (0)
#define  GAMMA_GAMMA_CTRL_1_gamma_read_tab_sel_mask                              (0x10000000)
#define  GAMMA_GAMMA_CTRL_1_gamma_tab_addr_mask                                  (0x01FF0000)
#define  GAMMA_GAMMA_CTRL_1_gamma_ax_rw_sel_mask                                 (0x00000180)
#define  GAMMA_GAMMA_CTRL_1_gamma_ax_tab_sel_mask                                (0x00000040)
#define  GAMMA_GAMMA_CTRL_1_gamma_ax_ch_sel_mask                                 (0x00000030)
#define  GAMMA_GAMMA_CTRL_1_gamma_fifo_empty_mask                                (0x00000008)
#define  GAMMA_GAMMA_CTRL_1_gamma_fifo_full_mask                                 (0x00000004)
#define  GAMMA_GAMMA_CTRL_1_gamma_wr_error_mask                                  (0x00000002)
#define  GAMMA_GAMMA_CTRL_1_dummy_0_mask                                         (0x00000001)
#define  GAMMA_GAMMA_CTRL_1_gamma_read_tab_sel(data)                             (0x10000000&((data)<<28))
#define  GAMMA_GAMMA_CTRL_1_gamma_tab_addr(data)                                 (0x01FF0000&((data)<<16))
#define  GAMMA_GAMMA_CTRL_1_gamma_ax_rw_sel(data)                                (0x00000180&((data)<<7))
#define  GAMMA_GAMMA_CTRL_1_gamma_ax_tab_sel(data)                               (0x00000040&((data)<<6))
#define  GAMMA_GAMMA_CTRL_1_gamma_ax_ch_sel(data)                                (0x00000030&((data)<<4))
#define  GAMMA_GAMMA_CTRL_1_gamma_fifo_empty(data)                               (0x00000008&((data)<<3))
#define  GAMMA_GAMMA_CTRL_1_gamma_fifo_full(data)                                (0x00000004&((data)<<2))
#define  GAMMA_GAMMA_CTRL_1_gamma_wr_error(data)                                 (0x00000002&((data)<<1))
#define  GAMMA_GAMMA_CTRL_1_dummy_0(data)                                        (0x00000001&(data))
#define  GAMMA_GAMMA_CTRL_1_get_gamma_read_tab_sel(data)                         ((0x10000000&(data))>>28)
#define  GAMMA_GAMMA_CTRL_1_get_gamma_tab_addr(data)                             ((0x01FF0000&(data))>>16)
#define  GAMMA_GAMMA_CTRL_1_get_gamma_ax_rw_sel(data)                            ((0x00000180&(data))>>7)
#define  GAMMA_GAMMA_CTRL_1_get_gamma_ax_tab_sel(data)                           ((0x00000040&(data))>>6)
#define  GAMMA_GAMMA_CTRL_1_get_gamma_ax_ch_sel(data)                            ((0x00000030&(data))>>4)
#define  GAMMA_GAMMA_CTRL_1_get_gamma_fifo_empty(data)                           ((0x00000008&(data))>>3)
#define  GAMMA_GAMMA_CTRL_1_get_gamma_fifo_full(data)                            ((0x00000004&(data))>>2)
#define  GAMMA_GAMMA_CTRL_1_get_gamma_wr_error(data)                             ((0x00000002&(data))>>1)
#define  GAMMA_GAMMA_CTRL_1_get_dummy_0(data)                                    (0x00000001&(data))

#define  GAMMA_GAMMA_CTRL_2                                                     0x1802C108
#define  GAMMA_GAMMA_CTRL_2_reg_addr                                             "0xB802C108"
#define  GAMMA_GAMMA_CTRL_2_reg                                                  0xB802C108
#define  GAMMA_GAMMA_CTRL_2_inst_addr                                            "0x0002"
#define  set_GAMMA_GAMMA_CTRL_2_reg(data)                                        (*((volatile unsigned int*)GAMMA_GAMMA_CTRL_2_reg)=data)
#define  get_GAMMA_GAMMA_CTRL_2_reg                                              (*((volatile unsigned int*)GAMMA_GAMMA_CTRL_2_reg))
#define  GAMMA_GAMMA_CTRL_2_gamma_tab_size_sel_shift                             (8)
#define  GAMMA_GAMMA_CTRL_2_gamma_m_tab_sel_shift                                (6)
#define  GAMMA_GAMMA_CTRL_2_gamma_s_tab_sel_shift                                (4)
#define  GAMMA_GAMMA_CTRL_2_gamma_overlap_shift                                  (3)
#define  GAMMA_GAMMA_CTRL_2_dummy_2_0_shift                                      (0)
#define  GAMMA_GAMMA_CTRL_2_gamma_tab_size_sel_mask                              (0x00000100)
#define  GAMMA_GAMMA_CTRL_2_gamma_m_tab_sel_mask                                 (0x000000C0)
#define  GAMMA_GAMMA_CTRL_2_gamma_s_tab_sel_mask                                 (0x00000030)
#define  GAMMA_GAMMA_CTRL_2_gamma_overlap_mask                                   (0x00000008)
#define  GAMMA_GAMMA_CTRL_2_dummy_2_0_mask                                       (0x00000007)
#define  GAMMA_GAMMA_CTRL_2_gamma_tab_size_sel(data)                             (0x00000100&((data)<<8))
#define  GAMMA_GAMMA_CTRL_2_gamma_m_tab_sel(data)                                (0x000000C0&((data)<<6))
#define  GAMMA_GAMMA_CTRL_2_gamma_s_tab_sel(data)                                (0x00000030&((data)<<4))
#define  GAMMA_GAMMA_CTRL_2_gamma_overlap(data)                                  (0x00000008&((data)<<3))
#define  GAMMA_GAMMA_CTRL_2_dummy_2_0(data)                                      (0x00000007&(data))
#define  GAMMA_GAMMA_CTRL_2_get_gamma_tab_size_sel(data)                         ((0x00000100&(data))>>8)
#define  GAMMA_GAMMA_CTRL_2_get_gamma_m_tab_sel(data)                            ((0x000000C0&(data))>>6)
#define  GAMMA_GAMMA_CTRL_2_get_gamma_s_tab_sel(data)                            ((0x00000030&(data))>>4)
#define  GAMMA_GAMMA_CTRL_2_get_gamma_overlap(data)                              ((0x00000008&(data))>>3)
#define  GAMMA_GAMMA_CTRL_2_get_dummy_2_0(data)                                  (0x00000007&(data))

#define  GAMMA_GAMMA_CTRL_3                                                     0x1802C10C
#define  GAMMA_GAMMA_CTRL_3_reg_addr                                             "0xB802C10C"
#define  GAMMA_GAMMA_CTRL_3_reg                                                  0xB802C10C
#define  GAMMA_GAMMA_CTRL_3_inst_addr                                            "0x0003"
#define  set_GAMMA_GAMMA_CTRL_3_reg(data)                                        (*((volatile unsigned int*)GAMMA_GAMMA_CTRL_3_reg)=data)
#define  get_GAMMA_GAMMA_CTRL_3_reg                                              (*((volatile unsigned int*)GAMMA_GAMMA_CTRL_3_reg))
#define  GAMMA_GAMMA_CTRL_3_gamma_msb_d0_r_shift                                 (16)
#define  GAMMA_GAMMA_CTRL_3_gamma_msb_d0_g_shift                                 (8)
#define  GAMMA_GAMMA_CTRL_3_gamma_msb_d0_b_shift                                 (0)
#define  GAMMA_GAMMA_CTRL_3_gamma_msb_d0_r_mask                                  (0x00070000)
#define  GAMMA_GAMMA_CTRL_3_gamma_msb_d0_g_mask                                  (0x00000700)
#define  GAMMA_GAMMA_CTRL_3_gamma_msb_d0_b_mask                                  (0x00000007)
#define  GAMMA_GAMMA_CTRL_3_gamma_msb_d0_r(data)                                 (0x00070000&((data)<<16))
#define  GAMMA_GAMMA_CTRL_3_gamma_msb_d0_g(data)                                 (0x00000700&((data)<<8))
#define  GAMMA_GAMMA_CTRL_3_gamma_msb_d0_b(data)                                 (0x00000007&(data))
#define  GAMMA_GAMMA_CTRL_3_get_gamma_msb_d0_r(data)                             ((0x00070000&(data))>>16)
#define  GAMMA_GAMMA_CTRL_3_get_gamma_msb_d0_g(data)                             ((0x00000700&(data))>>8)
#define  GAMMA_GAMMA_CTRL_3_get_gamma_msb_d0_b(data)                             (0x00000007&(data))

#define  GAMMA_GAMMA_BIST_CTRL                                                  0x1802C110
#define  GAMMA_GAMMA_BIST_CTRL_reg_addr                                          "0xB802C110"
#define  GAMMA_GAMMA_BIST_CTRL_reg                                               0xB802C110
#define  GAMMA_GAMMA_BIST_CTRL_inst_addr                                         "0x0004"
#define  set_GAMMA_GAMMA_BIST_CTRL_reg(data)                                     (*((volatile unsigned int*)GAMMA_GAMMA_BIST_CTRL_reg)=data)
#define  get_GAMMA_GAMMA_BIST_CTRL_reg                                           (*((volatile unsigned int*)GAMMA_GAMMA_BIST_CTRL_reg))
#define  GAMMA_GAMMA_BIST_CTRL_test1_shift                                       (6)
#define  GAMMA_GAMMA_BIST_CTRL_ls_shift                                          (5)
#define  GAMMA_GAMMA_BIST_CTRL_rme_shift                                         (4)
#define  GAMMA_GAMMA_BIST_CTRL_rm_shift                                          (0)
#define  GAMMA_GAMMA_BIST_CTRL_test1_mask                                        (0x00000040)
#define  GAMMA_GAMMA_BIST_CTRL_ls_mask                                           (0x00000020)
#define  GAMMA_GAMMA_BIST_CTRL_rme_mask                                          (0x00000010)
#define  GAMMA_GAMMA_BIST_CTRL_rm_mask                                           (0x0000000F)
#define  GAMMA_GAMMA_BIST_CTRL_test1(data)                                       (0x00000040&((data)<<6))
#define  GAMMA_GAMMA_BIST_CTRL_ls(data)                                          (0x00000020&((data)<<5))
#define  GAMMA_GAMMA_BIST_CTRL_rme(data)                                         (0x00000010&((data)<<4))
#define  GAMMA_GAMMA_BIST_CTRL_rm(data)                                          (0x0000000F&(data))
#define  GAMMA_GAMMA_BIST_CTRL_get_test1(data)                                   ((0x00000040&(data))>>6)
#define  GAMMA_GAMMA_BIST_CTRL_get_ls(data)                                      ((0x00000020&(data))>>5)
#define  GAMMA_GAMMA_BIST_CTRL_get_rme(data)                                     ((0x00000010&(data))>>4)
#define  GAMMA_GAMMA_BIST_CTRL_get_rm(data)                                      (0x0000000F&(data))

#define  GAMMA_GAMMA_BIST_STATUS_0                                              0x1802C114
#define  GAMMA_GAMMA_BIST_STATUS_0_reg_addr                                      "0xB802C114"
#define  GAMMA_GAMMA_BIST_STATUS_0_reg                                           0xB802C114
#define  GAMMA_GAMMA_BIST_STATUS_0_inst_addr                                     "0x0005"
#define  set_GAMMA_GAMMA_BIST_STATUS_0_reg(data)                                 (*((volatile unsigned int*)GAMMA_GAMMA_BIST_STATUS_0_reg)=data)
#define  get_GAMMA_GAMMA_BIST_STATUS_0_reg                                       (*((volatile unsigned int*)GAMMA_GAMMA_BIST_STATUS_0_reg))
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_r_drf_bist_fail_p1_shift            (22)
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_g_drf_bist_fail_p1_shift            (21)
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_b_drf_bist_fail_p1_shift            (20)
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_r_drf_bist_fail_p0_shift            (18)
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_g_drf_bist_fail_p0_shift            (17)
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_b_drf_bist_fail_p0_shift            (16)
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_r_drf_bist_fail_p1_shift                (6)
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_g_drf_bist_fail_p1_shift                (5)
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_b_drf_bist_fail_p1_shift                (4)
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_r_drf_bist_fail_p0_shift                (2)
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_g_drf_bist_fail_p0_shift                (1)
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_b_drf_bist_fail_p0_shift                (0)
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_r_drf_bist_fail_p1_mask             (0x00400000)
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_g_drf_bist_fail_p1_mask             (0x00200000)
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_b_drf_bist_fail_p1_mask             (0x00100000)
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_r_drf_bist_fail_p0_mask             (0x00040000)
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_g_drf_bist_fail_p0_mask             (0x00020000)
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_b_drf_bist_fail_p0_mask             (0x00010000)
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_r_drf_bist_fail_p1_mask                 (0x00000040)
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_g_drf_bist_fail_p1_mask                 (0x00000020)
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_b_drf_bist_fail_p1_mask                 (0x00000010)
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_r_drf_bist_fail_p0_mask                 (0x00000004)
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_g_drf_bist_fail_p0_mask                 (0x00000002)
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_b_drf_bist_fail_p0_mask                 (0x00000001)
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_r_drf_bist_fail_p1(data)            (0x00400000&((data)<<22))
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_g_drf_bist_fail_p1(data)            (0x00200000&((data)<<21))
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_b_drf_bist_fail_p1(data)            (0x00100000&((data)<<20))
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_r_drf_bist_fail_p0(data)            (0x00040000&((data)<<18))
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_g_drf_bist_fail_p0(data)            (0x00020000&((data)<<17))
#define  GAMMA_GAMMA_BIST_STATUS_0_inv_gamma_b_drf_bist_fail_p0(data)            (0x00010000&((data)<<16))
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_r_drf_bist_fail_p1(data)                (0x00000040&((data)<<6))
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_g_drf_bist_fail_p1(data)                (0x00000020&((data)<<5))
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_b_drf_bist_fail_p1(data)                (0x00000010&((data)<<4))
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_r_drf_bist_fail_p0(data)                (0x00000004&((data)<<2))
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_g_drf_bist_fail_p0(data)                (0x00000002&((data)<<1))
#define  GAMMA_GAMMA_BIST_STATUS_0_gamma_b_drf_bist_fail_p0(data)                (0x00000001&(data))
#define  GAMMA_GAMMA_BIST_STATUS_0_get_inv_gamma_r_drf_bist_fail_p1(data)        ((0x00400000&(data))>>22)
#define  GAMMA_GAMMA_BIST_STATUS_0_get_inv_gamma_g_drf_bist_fail_p1(data)        ((0x00200000&(data))>>21)
#define  GAMMA_GAMMA_BIST_STATUS_0_get_inv_gamma_b_drf_bist_fail_p1(data)        ((0x00100000&(data))>>20)
#define  GAMMA_GAMMA_BIST_STATUS_0_get_inv_gamma_r_drf_bist_fail_p0(data)        ((0x00040000&(data))>>18)
#define  GAMMA_GAMMA_BIST_STATUS_0_get_inv_gamma_g_drf_bist_fail_p0(data)        ((0x00020000&(data))>>17)
#define  GAMMA_GAMMA_BIST_STATUS_0_get_inv_gamma_b_drf_bist_fail_p0(data)        ((0x00010000&(data))>>16)
#define  GAMMA_GAMMA_BIST_STATUS_0_get_gamma_r_drf_bist_fail_p1(data)            ((0x00000040&(data))>>6)
#define  GAMMA_GAMMA_BIST_STATUS_0_get_gamma_g_drf_bist_fail_p1(data)            ((0x00000020&(data))>>5)
#define  GAMMA_GAMMA_BIST_STATUS_0_get_gamma_b_drf_bist_fail_p1(data)            ((0x00000010&(data))>>4)
#define  GAMMA_GAMMA_BIST_STATUS_0_get_gamma_r_drf_bist_fail_p0(data)            ((0x00000004&(data))>>2)
#define  GAMMA_GAMMA_BIST_STATUS_0_get_gamma_g_drf_bist_fail_p0(data)            ((0x00000002&(data))>>1)
#define  GAMMA_GAMMA_BIST_STATUS_0_get_gamma_b_drf_bist_fail_p0(data)            (0x00000001&(data))

#define  GAMMA_GAMMA_BIST_STATUS_1                                              0x1802C118
#define  GAMMA_GAMMA_BIST_STATUS_1_reg_addr                                      "0xB802C118"
#define  GAMMA_GAMMA_BIST_STATUS_1_reg                                           0xB802C118
#define  GAMMA_GAMMA_BIST_STATUS_1_inst_addr                                     "0x0006"
#define  set_GAMMA_GAMMA_BIST_STATUS_1_reg(data)                                 (*((volatile unsigned int*)GAMMA_GAMMA_BIST_STATUS_1_reg)=data)
#define  get_GAMMA_GAMMA_BIST_STATUS_1_reg                                       (*((volatile unsigned int*)GAMMA_GAMMA_BIST_STATUS_1_reg))
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_r_bist_fail_p1_shift                (22)
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_g_bist_fail_p1_shift                (21)
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_b_bist_fail_p1_shift                (20)
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_r_bist_fail_p0_shift                (18)
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_g_bist_fail_p0_shift                (17)
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_b_bist_fail_p0_shift                (16)
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_r_bist_fail_p1_shift                    (6)
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_g_bist_fail_p1_shift                    (5)
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_b_bist_fail_p1_shift                    (4)
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_r_bist_fail_p0_shift                    (2)
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_g_bist_fail_p0_shift                    (1)
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_b_bist_fail_p0_shift                    (0)
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_r_bist_fail_p1_mask                 (0x00400000)
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_g_bist_fail_p1_mask                 (0x00200000)
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_b_bist_fail_p1_mask                 (0x00100000)
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_r_bist_fail_p0_mask                 (0x00040000)
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_g_bist_fail_p0_mask                 (0x00020000)
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_b_bist_fail_p0_mask                 (0x00010000)
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_r_bist_fail_p1_mask                     (0x00000040)
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_g_bist_fail_p1_mask                     (0x00000020)
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_b_bist_fail_p1_mask                     (0x00000010)
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_r_bist_fail_p0_mask                     (0x00000004)
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_g_bist_fail_p0_mask                     (0x00000002)
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_b_bist_fail_p0_mask                     (0x00000001)
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_r_bist_fail_p1(data)                (0x00400000&((data)<<22))
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_g_bist_fail_p1(data)                (0x00200000&((data)<<21))
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_b_bist_fail_p1(data)                (0x00100000&((data)<<20))
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_r_bist_fail_p0(data)                (0x00040000&((data)<<18))
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_g_bist_fail_p0(data)                (0x00020000&((data)<<17))
#define  GAMMA_GAMMA_BIST_STATUS_1_inv_gamma_b_bist_fail_p0(data)                (0x00010000&((data)<<16))
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_r_bist_fail_p1(data)                    (0x00000040&((data)<<6))
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_g_bist_fail_p1(data)                    (0x00000020&((data)<<5))
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_b_bist_fail_p1(data)                    (0x00000010&((data)<<4))
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_r_bist_fail_p0(data)                    (0x00000004&((data)<<2))
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_g_bist_fail_p0(data)                    (0x00000002&((data)<<1))
#define  GAMMA_GAMMA_BIST_STATUS_1_gamma_b_bist_fail_p0(data)                    (0x00000001&(data))
#define  GAMMA_GAMMA_BIST_STATUS_1_get_inv_gamma_r_bist_fail_p1(data)            ((0x00400000&(data))>>22)
#define  GAMMA_GAMMA_BIST_STATUS_1_get_inv_gamma_g_bist_fail_p1(data)            ((0x00200000&(data))>>21)
#define  GAMMA_GAMMA_BIST_STATUS_1_get_inv_gamma_b_bist_fail_p1(data)            ((0x00100000&(data))>>20)
#define  GAMMA_GAMMA_BIST_STATUS_1_get_inv_gamma_r_bist_fail_p0(data)            ((0x00040000&(data))>>18)
#define  GAMMA_GAMMA_BIST_STATUS_1_get_inv_gamma_g_bist_fail_p0(data)            ((0x00020000&(data))>>17)
#define  GAMMA_GAMMA_BIST_STATUS_1_get_inv_gamma_b_bist_fail_p0(data)            ((0x00010000&(data))>>16)
#define  GAMMA_GAMMA_BIST_STATUS_1_get_gamma_r_bist_fail_p1(data)                ((0x00000040&(data))>>6)
#define  GAMMA_GAMMA_BIST_STATUS_1_get_gamma_g_bist_fail_p1(data)                ((0x00000020&(data))>>5)
#define  GAMMA_GAMMA_BIST_STATUS_1_get_gamma_b_bist_fail_p1(data)                ((0x00000010&(data))>>4)
#define  GAMMA_GAMMA_BIST_STATUS_1_get_gamma_r_bist_fail_p0(data)                ((0x00000004&(data))>>2)
#define  GAMMA_GAMMA_BIST_STATUS_1_get_gamma_g_bist_fail_p0(data)                ((0x00000002&(data))>>1)
#define  GAMMA_GAMMA_BIST_STATUS_1_get_gamma_b_bist_fail_p0(data)                (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======GAMMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  gamma_tab_index:12;
        RBus_UInt32  gamma_tab_d0:8;
        RBus_UInt32  gamma_tab_d1:8;
    };
}gamma_gamma_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  gamma_read_tab_sel:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  gamma_tab_addr:9;
        RBus_UInt32  res3:7;
        RBus_UInt32  gamma_ax_rw_sel:2;
        RBus_UInt32  gamma_ax_tab_sel:1;
        RBus_UInt32  gamma_ax_ch_sel:2;
        RBus_UInt32  gamma_fifo_empty:1;
        RBus_UInt32  gamma_fifo_full:1;
        RBus_UInt32  gamma_wr_error:1;
        RBus_UInt32  dummy1802c104_0:1;
    };
}gamma_gamma_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  gamma_tab_size_sel:1;
        RBus_UInt32  gamma_m_tab_sel:2;
        RBus_UInt32  gamma_s_tab_sel:2;
        RBus_UInt32  gamma_overlap:1;
        RBus_UInt32  dummy1802c108_2_0:3;
    };
}gamma_gamma_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  gamma_msb_d0_r:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  gamma_msb_d0_g:3;
        RBus_UInt32  res3:5;
        RBus_UInt32  gamma_msb_d0_b:3;
    };
}gamma_gamma_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  test1:1;
        RBus_UInt32  ls:1;
        RBus_UInt32  rme:1;
        RBus_UInt32  rm:4;
    };
}gamma_gamma_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  inv_gamma_r_drf_bist_fail_p1:1;
        RBus_UInt32  inv_gamma_g_drf_bist_fail_p1:1;
        RBus_UInt32  inv_gamma_b_drf_bist_fail_p1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  inv_gamma_r_drf_bist_fail_p0:1;
        RBus_UInt32  inv_gamma_g_drf_bist_fail_p0:1;
        RBus_UInt32  inv_gamma_b_drf_bist_fail_p0:1;
        RBus_UInt32  res3:9;
        RBus_UInt32  gamma_r_drf_bist_fail_p1:1;
        RBus_UInt32  gamma_g_drf_bist_fail_p1:1;
        RBus_UInt32  gamma_b_drf_bist_fail_p1:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  gamma_r_drf_bist_fail_p0:1;
        RBus_UInt32  gamma_g_drf_bist_fail_p0:1;
        RBus_UInt32  gamma_b_drf_bist_fail_p0:1;
    };
}gamma_gamma_bist_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  inv_gamma_r_bist_fail_p1:1;
        RBus_UInt32  inv_gamma_g_bist_fail_p1:1;
        RBus_UInt32  inv_gamma_b_bist_fail_p1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  inv_gamma_r_bist_fail_p0:1;
        RBus_UInt32  inv_gamma_g_bist_fail_p0:1;
        RBus_UInt32  inv_gamma_b_bist_fail_p0:1;
        RBus_UInt32  res3:9;
        RBus_UInt32  gamma_r_bist_fail_p1:1;
        RBus_UInt32  gamma_g_bist_fail_p1:1;
        RBus_UInt32  gamma_b_bist_fail_p1:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  gamma_r_bist_fail_p0:1;
        RBus_UInt32  gamma_g_bist_fail_p0:1;
        RBus_UInt32  gamma_b_bist_fail_p0:1;
    };
}gamma_gamma_bist_status_1_RBUS;

#else //apply LITTLE_ENDIAN

//======GAMMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gamma_tab_d1:8;
        RBus_UInt32  gamma_tab_d0:8;
        RBus_UInt32  gamma_tab_index:12;
        RBus_UInt32  res1:4;
    };
}gamma_gamma_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802c104_0:1;
        RBus_UInt32  gamma_wr_error:1;
        RBus_UInt32  gamma_fifo_full:1;
        RBus_UInt32  gamma_fifo_empty:1;
        RBus_UInt32  gamma_ax_ch_sel:2;
        RBus_UInt32  gamma_ax_tab_sel:1;
        RBus_UInt32  gamma_ax_rw_sel:2;
        RBus_UInt32  res1:7;
        RBus_UInt32  gamma_tab_addr:9;
        RBus_UInt32  res2:3;
        RBus_UInt32  gamma_read_tab_sel:1;
        RBus_UInt32  res3:3;
    };
}gamma_gamma_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802c108_2_0:3;
        RBus_UInt32  gamma_overlap:1;
        RBus_UInt32  gamma_s_tab_sel:2;
        RBus_UInt32  gamma_m_tab_sel:2;
        RBus_UInt32  gamma_tab_size_sel:1;
        RBus_UInt32  res1:23;
    };
}gamma_gamma_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gamma_msb_d0_b:3;
        RBus_UInt32  res1:5;
        RBus_UInt32  gamma_msb_d0_g:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  gamma_msb_d0_r:3;
        RBus_UInt32  res3:13;
    };
}gamma_gamma_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm:4;
        RBus_UInt32  rme:1;
        RBus_UInt32  ls:1;
        RBus_UInt32  test1:1;
        RBus_UInt32  res1:25;
    };
}gamma_gamma_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gamma_b_drf_bist_fail_p0:1;
        RBus_UInt32  gamma_g_drf_bist_fail_p0:1;
        RBus_UInt32  gamma_r_drf_bist_fail_p0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  gamma_b_drf_bist_fail_p1:1;
        RBus_UInt32  gamma_g_drf_bist_fail_p1:1;
        RBus_UInt32  gamma_r_drf_bist_fail_p1:1;
        RBus_UInt32  res2:9;
        RBus_UInt32  inv_gamma_b_drf_bist_fail_p0:1;
        RBus_UInt32  inv_gamma_g_drf_bist_fail_p0:1;
        RBus_UInt32  inv_gamma_r_drf_bist_fail_p0:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  inv_gamma_b_drf_bist_fail_p1:1;
        RBus_UInt32  inv_gamma_g_drf_bist_fail_p1:1;
        RBus_UInt32  inv_gamma_r_drf_bist_fail_p1:1;
        RBus_UInt32  res4:9;
    };
}gamma_gamma_bist_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gamma_b_bist_fail_p0:1;
        RBus_UInt32  gamma_g_bist_fail_p0:1;
        RBus_UInt32  gamma_r_bist_fail_p0:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  gamma_b_bist_fail_p1:1;
        RBus_UInt32  gamma_g_bist_fail_p1:1;
        RBus_UInt32  gamma_r_bist_fail_p1:1;
        RBus_UInt32  res2:9;
        RBus_UInt32  inv_gamma_b_bist_fail_p0:1;
        RBus_UInt32  inv_gamma_g_bist_fail_p0:1;
        RBus_UInt32  inv_gamma_r_bist_fail_p0:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  inv_gamma_b_bist_fail_p1:1;
        RBus_UInt32  inv_gamma_g_bist_fail_p1:1;
        RBus_UInt32  inv_gamma_r_bist_fail_p1:1;
        RBus_UInt32  res4:9;
    };
}gamma_gamma_bist_status_1_RBUS;




#endif 


#endif 
