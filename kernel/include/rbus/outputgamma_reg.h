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

#ifndef _RBUS_OUTPUTGAMMA_REG_H_
#define _RBUS_OUTPUTGAMMA_REG_H_

#include "rbus_types.h"



//  OUTPUTGAMMA Register Address
#define  OUTPUTGAMMA_OUT_GAMMA_PORT                                             0x1802C800
#define  OUTPUTGAMMA_OUT_GAMMA_PORT_reg_addr                                     "0xB802C800"
#define  OUTPUTGAMMA_OUT_GAMMA_PORT_reg                                          0xB802C800
#define  OUTPUTGAMMA_OUT_GAMMA_PORT_inst_addr                                    "0x0000"
#define  set_OUTPUTGAMMA_OUT_GAMMA_PORT_reg(data)                                (*((volatile unsigned int*)OUTPUTGAMMA_OUT_GAMMA_PORT_reg)=data)
#define  get_OUTPUTGAMMA_OUT_GAMMA_PORT_reg                                      (*((volatile unsigned int*)OUTPUTGAMMA_OUT_GAMMA_PORT_reg))
#define  OUTPUTGAMMA_OUT_GAMMA_PORT_out_gamma_tab_index_shift                    (16)
#define  OUTPUTGAMMA_OUT_GAMMA_PORT_out_gamma_tab_d0_shift                       (8)
#define  OUTPUTGAMMA_OUT_GAMMA_PORT_out_gamma_tab_d1_shift                       (0)
#define  OUTPUTGAMMA_OUT_GAMMA_PORT_out_gamma_tab_index_mask                     (0x1FFF0000)
#define  OUTPUTGAMMA_OUT_GAMMA_PORT_out_gamma_tab_d0_mask                        (0x0000FF00)
#define  OUTPUTGAMMA_OUT_GAMMA_PORT_out_gamma_tab_d1_mask                        (0x000000FF)
#define  OUTPUTGAMMA_OUT_GAMMA_PORT_out_gamma_tab_index(data)                    (0x1FFF0000&((data)<<16))
#define  OUTPUTGAMMA_OUT_GAMMA_PORT_out_gamma_tab_d0(data)                       (0x0000FF00&((data)<<8))
#define  OUTPUTGAMMA_OUT_GAMMA_PORT_out_gamma_tab_d1(data)                       (0x000000FF&(data))
#define  OUTPUTGAMMA_OUT_GAMMA_PORT_get_out_gamma_tab_index(data)                ((0x1FFF0000&(data))>>16)
#define  OUTPUTGAMMA_OUT_GAMMA_PORT_get_out_gamma_tab_d0(data)                   ((0x0000FF00&(data))>>8)
#define  OUTPUTGAMMA_OUT_GAMMA_PORT_get_out_gamma_tab_d1(data)                   (0x000000FF&(data))

#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1                                           0x1802C804
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_reg_addr                                   "0xB802C804"
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_reg                                        0xB802C804
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_inst_addr                                  "0x0001"
#define  set_OUTPUTGAMMA_OUT_GAMMA_CTRL_1_reg(data)                              (*((volatile unsigned int*)OUTPUTGAMMA_OUT_GAMMA_CTRL_1_reg)=data)
#define  get_OUTPUTGAMMA_OUT_GAMMA_CTRL_1_reg                                    (*((volatile unsigned int*)OUTPUTGAMMA_OUT_GAMMA_CTRL_1_reg))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_read_tab_sel_shift               (28)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_tab_addr_shift                   (16)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_ax_rw_sel_shift                  (8)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_ax_ch_sel_shift                  (5)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_fifo_empty_shift                 (4)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_fifo_full_shift                  (3)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_wr_error_shift                   (2)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_location_shift                   (1)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_en_shift                         (0)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_read_tab_sel_mask                (0x10000000)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_tab_addr_mask                    (0x01FF0000)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_ax_rw_sel_mask                   (0x00000300)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_ax_ch_sel_mask                   (0x000000E0)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_fifo_empty_mask                  (0x00000010)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_fifo_full_mask                   (0x00000008)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_wr_error_mask                    (0x00000004)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_location_mask                    (0x00000002)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_en_mask                          (0x00000001)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_read_tab_sel(data)               (0x10000000&((data)<<28))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_tab_addr(data)                   (0x01FF0000&((data)<<16))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_ax_rw_sel(data)                  (0x00000300&((data)<<8))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_ax_ch_sel(data)                  (0x000000E0&((data)<<5))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_fifo_empty(data)                 (0x00000010&((data)<<4))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_fifo_full(data)                  (0x00000008&((data)<<3))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_wr_error(data)                   (0x00000004&((data)<<2))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_location(data)                   (0x00000002&((data)<<1))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_out_gamma_en(data)                         (0x00000001&(data))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_get_out_gamma_read_tab_sel(data)           ((0x10000000&(data))>>28)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_get_out_gamma_tab_addr(data)               ((0x01FF0000&(data))>>16)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_get_out_gamma_ax_rw_sel(data)              ((0x00000300&(data))>>8)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_get_out_gamma_ax_ch_sel(data)              ((0x000000E0&(data))>>5)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_get_out_gamma_fifo_empty(data)             ((0x00000010&(data))>>4)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_get_out_gamma_fifo_full(data)              ((0x00000008&(data))>>3)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_get_out_gamma_wr_error(data)               ((0x00000004&(data))>>2)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_get_out_gamma_location(data)               ((0x00000002&(data))>>1)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_1_get_out_gamma_en(data)                     (0x00000001&(data))

#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL                                        0x1802C808
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_reg_addr                                "0xB802C808"
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_reg                                     0xB802C808
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_inst_addr                               "0x0002"
#define  set_OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_reg(data)                           (*((volatile unsigned int*)OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_reg)=data)
#define  get_OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_reg                                 (*((volatile unsigned int*)OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_reg))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_test1_shift                             (6)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_ls_shift                                (5)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_rme_shift                               (4)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_rm_shift                                (0)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_test1_mask                              (0x00000040)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_ls_mask                                 (0x00000020)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_rme_mask                                (0x00000010)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_rm_mask                                 (0x0000000F)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_test1(data)                             (0x00000040&((data)<<6))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_ls(data)                                (0x00000020&((data)<<5))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_rme(data)                               (0x00000010&((data)<<4))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_rm(data)                                (0x0000000F&(data))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_get_test1(data)                         ((0x00000040&(data))>>6)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_get_ls(data)                            ((0x00000020&(data))>>5)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_get_rme(data)                           ((0x00000010&(data))>>4)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_CTRL_get_rm(data)                            (0x0000000F&(data))

#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS                                      0x1802C810
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_reg_addr                              "0xB802C810"
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_reg                                   0xB802C810
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_inst_addr                             "0x0003"
#define  set_OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_reg(data)                         (*((volatile unsigned int*)OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_reg)=data)
#define  get_OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_reg                               (*((volatile unsigned int*)OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_reg))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_w_drf_bist_fail_p1_shift    (27)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_r_drf_bist_fail_p1_shift    (26)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_g_drf_bist_fail_p1_shift    (25)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_b_drf_bist_fail_p1_shift    (24)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_w_bist_fail_p1_shift        (19)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_r_bist_fail_p1_shift        (18)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_g_bist_fail_p1_shift        (17)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_b_bist_fail_p1_shift        (16)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_w_drf_bist_fail_p0_shift    (11)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_r_drf_bist_fail_p0_shift    (10)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_g_drf_bist_fail_p0_shift    (9)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_b_drf_bist_fail_p0_shift    (8)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_w_bist_fail_p0_shift        (3)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_r_bist_fail_p0_shift        (2)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_g_bist_fail_p0_shift        (1)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_b_bist_fail_p0_shift        (0)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_w_drf_bist_fail_p1_mask     (0x08000000)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_r_drf_bist_fail_p1_mask     (0x04000000)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_g_drf_bist_fail_p1_mask     (0x02000000)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_b_drf_bist_fail_p1_mask     (0x01000000)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_w_bist_fail_p1_mask         (0x00080000)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_r_bist_fail_p1_mask         (0x00040000)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_g_bist_fail_p1_mask         (0x00020000)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_b_bist_fail_p1_mask         (0x00010000)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_w_drf_bist_fail_p0_mask     (0x00000800)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_r_drf_bist_fail_p0_mask     (0x00000400)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_g_drf_bist_fail_p0_mask     (0x00000200)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_b_drf_bist_fail_p0_mask     (0x00000100)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_w_bist_fail_p0_mask         (0x00000008)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_r_bist_fail_p0_mask         (0x00000004)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_g_bist_fail_p0_mask         (0x00000002)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_b_bist_fail_p0_mask         (0x00000001)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_w_drf_bist_fail_p1(data)    (0x08000000&((data)<<27))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_r_drf_bist_fail_p1(data)    (0x04000000&((data)<<26))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_g_drf_bist_fail_p1(data)    (0x02000000&((data)<<25))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_b_drf_bist_fail_p1(data)    (0x01000000&((data)<<24))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_w_bist_fail_p1(data)        (0x00080000&((data)<<19))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_r_bist_fail_p1(data)        (0x00040000&((data)<<18))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_g_bist_fail_p1(data)        (0x00020000&((data)<<17))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_b_bist_fail_p1(data)        (0x00010000&((data)<<16))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_w_drf_bist_fail_p0(data)    (0x00000800&((data)<<11))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_r_drf_bist_fail_p0(data)    (0x00000400&((data)<<10))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_g_drf_bist_fail_p0(data)    (0x00000200&((data)<<9))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_b_drf_bist_fail_p0(data)    (0x00000100&((data)<<8))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_w_bist_fail_p0(data)        (0x00000008&((data)<<3))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_r_bist_fail_p0(data)        (0x00000004&((data)<<2))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_g_bist_fail_p0(data)        (0x00000002&((data)<<1))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_out_gamma_b_bist_fail_p0(data)        (0x00000001&(data))
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_get_out_gamma_w_drf_bist_fail_p1(data) ((0x08000000&(data))>>27)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_get_out_gamma_r_drf_bist_fail_p1(data) ((0x04000000&(data))>>26)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_get_out_gamma_g_drf_bist_fail_p1(data) ((0x02000000&(data))>>25)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_get_out_gamma_b_drf_bist_fail_p1(data) ((0x01000000&(data))>>24)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_get_out_gamma_w_bist_fail_p1(data)    ((0x00080000&(data))>>19)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_get_out_gamma_r_bist_fail_p1(data)    ((0x00040000&(data))>>18)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_get_out_gamma_g_bist_fail_p1(data)    ((0x00020000&(data))>>17)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_get_out_gamma_b_bist_fail_p1(data)    ((0x00010000&(data))>>16)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_get_out_gamma_w_drf_bist_fail_p0(data) ((0x00000800&(data))>>11)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_get_out_gamma_r_drf_bist_fail_p0(data) ((0x00000400&(data))>>10)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_get_out_gamma_g_drf_bist_fail_p0(data) ((0x00000200&(data))>>9)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_get_out_gamma_b_drf_bist_fail_p0(data) ((0x00000100&(data))>>8)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_get_out_gamma_w_bist_fail_p0(data)    ((0x00000008&(data))>>3)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_get_out_gamma_r_bist_fail_p0(data)    ((0x00000004&(data))>>2)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_get_out_gamma_g_bist_fail_p0(data)    ((0x00000002&(data))>>1)
#define  OUTPUTGAMMA_OUT_GAMMA_BIST_STATUS_get_out_gamma_b_bist_fail_p0(data)    (0x00000001&(data))

#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2                                           0x1802C814
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_reg_addr                                   "0xB802C814"
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_reg                                        0xB802C814
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_inst_addr                                  "0x0004"
#define  set_OUTPUTGAMMA_OUT_GAMMA_CTRL_2_reg(data)                              (*((volatile unsigned int*)OUTPUTGAMMA_OUT_GAMMA_CTRL_2_reg)=data)
#define  get_OUTPUTGAMMA_OUT_GAMMA_CTRL_2_reg                                    (*((volatile unsigned int*)OUTPUTGAMMA_OUT_GAMMA_CTRL_2_reg))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_out_gamma_format_shift                     (16)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_even_ch_w_shift                            (14)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_even_ch_b_shift                            (12)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_even_ch_g_shift                            (10)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_even_ch_r_shift                            (8)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_odd_ch_w_shift                             (6)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_odd_ch_b_shift                             (4)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_odd_ch_g_shift                             (2)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_odd_ch_r_shift                             (0)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_out_gamma_format_mask                      (0x00010000)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_even_ch_w_mask                             (0x0000C000)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_even_ch_b_mask                             (0x00003000)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_even_ch_g_mask                             (0x00000C00)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_even_ch_r_mask                             (0x00000300)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_odd_ch_w_mask                              (0x000000C0)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_odd_ch_b_mask                              (0x00000030)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_odd_ch_g_mask                              (0x0000000C)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_odd_ch_r_mask                              (0x00000003)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_out_gamma_format(data)                     (0x00010000&((data)<<16))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_even_ch_w(data)                            (0x0000C000&((data)<<14))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_even_ch_b(data)                            (0x00003000&((data)<<12))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_even_ch_g(data)                            (0x00000C00&((data)<<10))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_even_ch_r(data)                            (0x00000300&((data)<<8))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_odd_ch_w(data)                             (0x000000C0&((data)<<6))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_odd_ch_b(data)                             (0x00000030&((data)<<4))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_odd_ch_g(data)                             (0x0000000C&((data)<<2))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_odd_ch_r(data)                             (0x00000003&(data))
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_get_out_gamma_format(data)                 ((0x00010000&(data))>>16)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_get_even_ch_w(data)                        ((0x0000C000&(data))>>14)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_get_even_ch_b(data)                        ((0x00003000&(data))>>12)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_get_even_ch_g(data)                        ((0x00000C00&(data))>>10)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_get_even_ch_r(data)                        ((0x00000300&(data))>>8)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_get_odd_ch_w(data)                         ((0x000000C0&(data))>>6)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_get_odd_ch_b(data)                         ((0x00000030&(data))>>4)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_get_odd_ch_g(data)                         ((0x0000000C&(data))>>2)
#define  OUTPUTGAMMA_OUT_GAMMA_CTRL_2_get_odd_ch_r(data)                         (0x00000003&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======OUTPUTGAMMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  out_gamma_tab_index:13;
        RBus_UInt32  out_gamma_tab_d0:8;
        RBus_UInt32  out_gamma_tab_d1:8;
    };
}outputgamma_out_gamma_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  out_gamma_read_tab_sel:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  out_gamma_tab_addr:9;
        RBus_UInt32  res3:6;
        RBus_UInt32  out_gamma_ax_rw_sel:2;
        RBus_UInt32  out_gamma_ax_ch_sel:3;
        RBus_UInt32  out_gamma_fifo_empty:1;
        RBus_UInt32  out_gamma_fifo_full:1;
        RBus_UInt32  out_gamma_wr_error:1;
        RBus_UInt32  out_gamma_location:1;
        RBus_UInt32  out_gamma_en:1;
    };
}outputgamma_out_gamma_ctrl_1_RBUS;

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
}outputgamma_out_gamma_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  out_gamma_w_drf_bist_fail_p1:1;
        RBus_UInt32  out_gamma_r_drf_bist_fail_p1:1;
        RBus_UInt32  out_gamma_g_drf_bist_fail_p1:1;
        RBus_UInt32  out_gamma_b_drf_bist_fail_p1:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  out_gamma_w_bist_fail_p1:1;
        RBus_UInt32  out_gamma_r_bist_fail_p1:1;
        RBus_UInt32  out_gamma_g_bist_fail_p1:1;
        RBus_UInt32  out_gamma_b_bist_fail_p1:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  out_gamma_w_drf_bist_fail_p0:1;
        RBus_UInt32  out_gamma_r_drf_bist_fail_p0:1;
        RBus_UInt32  out_gamma_g_drf_bist_fail_p0:1;
        RBus_UInt32  out_gamma_b_drf_bist_fail_p0:1;
        RBus_UInt32  res4:4;
        RBus_UInt32  out_gamma_w_bist_fail_p0:1;
        RBus_UInt32  out_gamma_r_bist_fail_p0:1;
        RBus_UInt32  out_gamma_g_bist_fail_p0:1;
        RBus_UInt32  out_gamma_b_bist_fail_p0:1;
    };
}outputgamma_out_gamma_bist_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  out_gamma_format:1;
        RBus_UInt32  even_ch_w:2;
        RBus_UInt32  even_ch_b:2;
        RBus_UInt32  even_ch_g:2;
        RBus_UInt32  even_ch_r:2;
        RBus_UInt32  odd_ch_w:2;
        RBus_UInt32  odd_ch_b:2;
        RBus_UInt32  odd_ch_g:2;
        RBus_UInt32  odd_ch_r:2;
    };
}outputgamma_out_gamma_ctrl_2_RBUS;

#else //apply LITTLE_ENDIAN

//======OUTPUTGAMMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  out_gamma_tab_d1:8;
        RBus_UInt32  out_gamma_tab_d0:8;
        RBus_UInt32  out_gamma_tab_index:13;
        RBus_UInt32  res1:3;
    };
}outputgamma_out_gamma_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  out_gamma_en:1;
        RBus_UInt32  out_gamma_location:1;
        RBus_UInt32  out_gamma_wr_error:1;
        RBus_UInt32  out_gamma_fifo_full:1;
        RBus_UInt32  out_gamma_fifo_empty:1;
        RBus_UInt32  out_gamma_ax_ch_sel:3;
        RBus_UInt32  out_gamma_ax_rw_sel:2;
        RBus_UInt32  res1:6;
        RBus_UInt32  out_gamma_tab_addr:9;
        RBus_UInt32  res2:3;
        RBus_UInt32  out_gamma_read_tab_sel:1;
        RBus_UInt32  res3:3;
    };
}outputgamma_out_gamma_ctrl_1_RBUS;

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
}outputgamma_out_gamma_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  out_gamma_b_bist_fail_p0:1;
        RBus_UInt32  out_gamma_g_bist_fail_p0:1;
        RBus_UInt32  out_gamma_r_bist_fail_p0:1;
        RBus_UInt32  out_gamma_w_bist_fail_p0:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  out_gamma_b_drf_bist_fail_p0:1;
        RBus_UInt32  out_gamma_g_drf_bist_fail_p0:1;
        RBus_UInt32  out_gamma_r_drf_bist_fail_p0:1;
        RBus_UInt32  out_gamma_w_drf_bist_fail_p0:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  out_gamma_b_bist_fail_p1:1;
        RBus_UInt32  out_gamma_g_bist_fail_p1:1;
        RBus_UInt32  out_gamma_r_bist_fail_p1:1;
        RBus_UInt32  out_gamma_w_bist_fail_p1:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  out_gamma_b_drf_bist_fail_p1:1;
        RBus_UInt32  out_gamma_g_drf_bist_fail_p1:1;
        RBus_UInt32  out_gamma_r_drf_bist_fail_p1:1;
        RBus_UInt32  out_gamma_w_drf_bist_fail_p1:1;
        RBus_UInt32  res4:4;
    };
}outputgamma_out_gamma_bist_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  odd_ch_r:2;
        RBus_UInt32  odd_ch_g:2;
        RBus_UInt32  odd_ch_b:2;
        RBus_UInt32  odd_ch_w:2;
        RBus_UInt32  even_ch_r:2;
        RBus_UInt32  even_ch_g:2;
        RBus_UInt32  even_ch_b:2;
        RBus_UInt32  even_ch_w:2;
        RBus_UInt32  out_gamma_format:1;
        RBus_UInt32  res1:15;
    };
}outputgamma_out_gamma_ctrl_2_RBUS;




#endif 


#endif 
