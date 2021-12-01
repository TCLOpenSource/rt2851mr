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

#ifndef _RBUS_INVOUTPUTGAMMA_REG_H_
#define _RBUS_INVOUTPUTGAMMA_REG_H_

#include "rbus_types.h"



//  INVOUTPUTGAMMA Register Address
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT                                      0x1802C820
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_reg_addr                              "0xB802C820"
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_reg                                   0xB802C820
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_inst_addr                             "0x0000"
#define  set_INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_reg(data)                         (*((volatile unsigned int*)INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_reg)=data)
#define  get_INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_reg                               (*((volatile unsigned int*)INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_reg))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_inv_out_gamma_tab_index_shift         (16)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_inv_out_gamma_tab_d0_shift            (8)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_inv_out_gamma_tab_d1_shift            (0)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_inv_out_gamma_tab_index_mask          (0x0FFF0000)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_inv_out_gamma_tab_d0_mask             (0x00007F00)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_inv_out_gamma_tab_d1_mask             (0x0000007F)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_inv_out_gamma_tab_index(data)         (0x0FFF0000&((data)<<16))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_inv_out_gamma_tab_d0(data)            (0x00007F00&((data)<<8))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_inv_out_gamma_tab_d1(data)            (0x0000007F&(data))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_get_inv_out_gamma_tab_index(data)     ((0x0FFF0000&(data))>>16)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_get_inv_out_gamma_tab_d0(data)        ((0x00007F00&(data))>>8)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_PORT_get_inv_out_gamma_tab_d1(data)        (0x0000007F&(data))

#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1                                    0x1802C824
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_reg_addr                            "0xB802C824"
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_reg                                 0xB802C824
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inst_addr                           "0x0001"
#define  set_INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_reg(data)                       (*((volatile unsigned int*)INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_reg)=data)
#define  get_INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_reg                             (*((volatile unsigned int*)INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_reg))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_read_tab_sel_shift    (28)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_tab_addr_shift        (16)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_ax_rw_sel_shift       (7)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_ax_ch_sel_shift       (5)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_fifo_empty_shift      (4)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_fifo_full_shift       (3)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_wr_error_shift        (2)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_dummy_1_shift                       (1)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_en_shift              (0)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_read_tab_sel_mask     (0x10000000)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_tab_addr_mask         (0x007F0000)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_ax_rw_sel_mask        (0x00000180)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_ax_ch_sel_mask        (0x00000060)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_fifo_empty_mask       (0x00000010)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_fifo_full_mask        (0x00000008)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_wr_error_mask         (0x00000004)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_dummy_1_mask                        (0x00000002)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_en_mask               (0x00000001)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_read_tab_sel(data)    (0x10000000&((data)<<28))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_tab_addr(data)        (0x007F0000&((data)<<16))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_ax_rw_sel(data)       (0x00000180&((data)<<7))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_ax_ch_sel(data)       (0x00000060&((data)<<5))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_fifo_empty(data)      (0x00000010&((data)<<4))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_fifo_full(data)       (0x00000008&((data)<<3))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_wr_error(data)        (0x00000004&((data)<<2))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_dummy_1(data)                       (0x00000002&((data)<<1))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_inv_out_gamma_en(data)              (0x00000001&(data))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_get_inv_out_gamma_read_tab_sel(data) ((0x10000000&(data))>>28)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_get_inv_out_gamma_tab_addr(data)    ((0x007F0000&(data))>>16)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_get_inv_out_gamma_ax_rw_sel(data)   ((0x00000180&(data))>>7)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_get_inv_out_gamma_ax_ch_sel(data)   ((0x00000060&(data))>>5)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_get_inv_out_gamma_fifo_empty(data)  ((0x00000010&(data))>>4)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_get_inv_out_gamma_fifo_full(data)   ((0x00000008&(data))>>3)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_get_inv_out_gamma_wr_error(data)    ((0x00000004&(data))>>2)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_get_dummy_1(data)                   ((0x00000002&(data))>>1)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_CTRL_1_get_inv_out_gamma_en(data)          (0x00000001&(data))

#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL                                 0x1802C828
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_reg_addr                         "0xB802C828"
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_reg                              0xB802C828
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_inst_addr                        "0x0002"
#define  set_INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_reg(data)                    (*((volatile unsigned int*)INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_reg)=data)
#define  get_INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_reg                          (*((volatile unsigned int*)INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_reg))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_test1_shift                      (6)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_ls_shift                         (5)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_rme_shift                        (4)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_rm_shift                         (0)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_test1_mask                       (0x00000040)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_ls_mask                          (0x00000020)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_rme_mask                         (0x00000010)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_rm_mask                          (0x0000000F)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_test1(data)                      (0x00000040&((data)<<6))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_ls(data)                         (0x00000020&((data)<<5))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_rme(data)                        (0x00000010&((data)<<4))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_rm(data)                         (0x0000000F&(data))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_get_test1(data)                  ((0x00000040&(data))>>6)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_get_ls(data)                     ((0x00000020&(data))>>5)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_get_rme(data)                    ((0x00000010&(data))>>4)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_CTRL_get_rm(data)                     (0x0000000F&(data))

#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS                               0x1802C830
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_reg_addr                       "0xB802C830"
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_reg                            0xB802C830
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inst_addr                      "0x0003"
#define  set_INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_reg(data)                  (*((volatile unsigned int*)INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_reg)=data)
#define  get_INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_reg                        (*((volatile unsigned int*)INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_reg))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_r_drf_bist_fail_p1_shift (26)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_g_drf_bist_fail_p1_shift (25)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_b_drf_bist_fail_p1_shift (24)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_r_bist_fail_p1_shift (18)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_g_bist_fail_p1_shift (17)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_b_bist_fail_p1_shift (16)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_r_drf_bist_fail_p0_shift (10)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_g_drf_bist_fail_p0_shift (9)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_b_drf_bist_fail_p0_shift (8)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_r_bist_fail_p0_shift (2)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_g_bist_fail_p0_shift (1)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_b_bist_fail_p0_shift (0)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_r_drf_bist_fail_p1_mask (0x04000000)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_g_drf_bist_fail_p1_mask (0x02000000)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_b_drf_bist_fail_p1_mask (0x01000000)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_r_bist_fail_p1_mask (0x00040000)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_g_bist_fail_p1_mask (0x00020000)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_b_bist_fail_p1_mask (0x00010000)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_r_drf_bist_fail_p0_mask (0x00000400)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_g_drf_bist_fail_p0_mask (0x00000200)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_b_drf_bist_fail_p0_mask (0x00000100)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_r_bist_fail_p0_mask (0x00000004)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_g_bist_fail_p0_mask (0x00000002)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_b_bist_fail_p0_mask (0x00000001)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_r_drf_bist_fail_p1(data) (0x04000000&((data)<<26))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_g_drf_bist_fail_p1(data) (0x02000000&((data)<<25))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_b_drf_bist_fail_p1(data) (0x01000000&((data)<<24))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_r_bist_fail_p1(data) (0x00040000&((data)<<18))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_g_bist_fail_p1(data) (0x00020000&((data)<<17))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_b_bist_fail_p1(data) (0x00010000&((data)<<16))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_r_drf_bist_fail_p0(data) (0x00000400&((data)<<10))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_g_drf_bist_fail_p0(data) (0x00000200&((data)<<9))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_b_drf_bist_fail_p0(data) (0x00000100&((data)<<8))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_r_bist_fail_p0(data) (0x00000004&((data)<<2))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_g_bist_fail_p0(data) (0x00000002&((data)<<1))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_inv_out_gamma_b_bist_fail_p0(data) (0x00000001&(data))
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_get_inv_out_gamma_r_drf_bist_fail_p1(data) ((0x04000000&(data))>>26)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_get_inv_out_gamma_g_drf_bist_fail_p1(data) ((0x02000000&(data))>>25)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_get_inv_out_gamma_b_drf_bist_fail_p1(data) ((0x01000000&(data))>>24)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_get_inv_out_gamma_r_bist_fail_p1(data) ((0x00040000&(data))>>18)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_get_inv_out_gamma_g_bist_fail_p1(data) ((0x00020000&(data))>>17)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_get_inv_out_gamma_b_bist_fail_p1(data) ((0x00010000&(data))>>16)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_get_inv_out_gamma_r_drf_bist_fail_p0(data) ((0x00000400&(data))>>10)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_get_inv_out_gamma_g_drf_bist_fail_p0(data) ((0x00000200&(data))>>9)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_get_inv_out_gamma_b_drf_bist_fail_p0(data) ((0x00000100&(data))>>8)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_get_inv_out_gamma_r_bist_fail_p0(data) ((0x00000004&(data))>>2)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_get_inv_out_gamma_g_bist_fail_p0(data) ((0x00000002&(data))>>1)
#define  INVOUTPUTGAMMA_INV_OUT_GAMMA_BIST_STATUS_get_inv_out_gamma_b_bist_fail_p0(data) (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======INVOUTPUTGAMMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  inv_out_gamma_tab_index:12;
        RBus_UInt32  res2:1;
        RBus_UInt32  inv_out_gamma_tab_d0:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  inv_out_gamma_tab_d1:7;
    };
}invoutputgamma_inv_out_gamma_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  inv_out_gamma_read_tab_sel:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  inv_out_gamma_tab_addr:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  inv_out_gamma_ax_rw_sel:2;
        RBus_UInt32  inv_out_gamma_ax_ch_sel:2;
        RBus_UInt32  inv_out_gamma_fifo_empty:1;
        RBus_UInt32  inv_out_gamma_fifo_full:1;
        RBus_UInt32  inv_out_gamma_wr_error:1;
        RBus_UInt32  dummy1802c824_1:1;
        RBus_UInt32  inv_out_gamma_en:1;
    };
}invoutputgamma_inv_out_gamma_ctrl_1_RBUS;

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
}invoutputgamma_inv_out_gamma_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  inv_out_gamma_r_drf_bist_fail_p1:1;
        RBus_UInt32  inv_out_gamma_g_drf_bist_fail_p1:1;
        RBus_UInt32  inv_out_gamma_b_drf_bist_fail_p1:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  inv_out_gamma_r_bist_fail_p1:1;
        RBus_UInt32  inv_out_gamma_g_bist_fail_p1:1;
        RBus_UInt32  inv_out_gamma_b_bist_fail_p1:1;
        RBus_UInt32  res3:5;
        RBus_UInt32  inv_out_gamma_r_drf_bist_fail_p0:1;
        RBus_UInt32  inv_out_gamma_g_drf_bist_fail_p0:1;
        RBus_UInt32  inv_out_gamma_b_drf_bist_fail_p0:1;
        RBus_UInt32  res4:5;
        RBus_UInt32  inv_out_gamma_r_bist_fail_p0:1;
        RBus_UInt32  inv_out_gamma_g_bist_fail_p0:1;
        RBus_UInt32  inv_out_gamma_b_bist_fail_p0:1;
    };
}invoutputgamma_inv_out_gamma_bist_status_RBUS;

#else //apply LITTLE_ENDIAN

//======INVOUTPUTGAMMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  inv_out_gamma_tab_d1:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  inv_out_gamma_tab_d0:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  inv_out_gamma_tab_index:12;
        RBus_UInt32  res3:4;
    };
}invoutputgamma_inv_out_gamma_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  inv_out_gamma_en:1;
        RBus_UInt32  dummy1802c824_1:1;
        RBus_UInt32  inv_out_gamma_wr_error:1;
        RBus_UInt32  inv_out_gamma_fifo_full:1;
        RBus_UInt32  inv_out_gamma_fifo_empty:1;
        RBus_UInt32  inv_out_gamma_ax_ch_sel:2;
        RBus_UInt32  inv_out_gamma_ax_rw_sel:2;
        RBus_UInt32  res1:7;
        RBus_UInt32  inv_out_gamma_tab_addr:7;
        RBus_UInt32  res2:5;
        RBus_UInt32  inv_out_gamma_read_tab_sel:1;
        RBus_UInt32  res3:3;
    };
}invoutputgamma_inv_out_gamma_ctrl_1_RBUS;

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
}invoutputgamma_inv_out_gamma_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  inv_out_gamma_b_bist_fail_p0:1;
        RBus_UInt32  inv_out_gamma_g_bist_fail_p0:1;
        RBus_UInt32  inv_out_gamma_r_bist_fail_p0:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  inv_out_gamma_b_drf_bist_fail_p0:1;
        RBus_UInt32  inv_out_gamma_g_drf_bist_fail_p0:1;
        RBus_UInt32  inv_out_gamma_r_drf_bist_fail_p0:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  inv_out_gamma_b_bist_fail_p1:1;
        RBus_UInt32  inv_out_gamma_g_bist_fail_p1:1;
        RBus_UInt32  inv_out_gamma_r_bist_fail_p1:1;
        RBus_UInt32  res3:5;
        RBus_UInt32  inv_out_gamma_b_drf_bist_fail_p1:1;
        RBus_UInt32  inv_out_gamma_g_drf_bist_fail_p1:1;
        RBus_UInt32  inv_out_gamma_r_drf_bist_fail_p1:1;
        RBus_UInt32  res4:5;
    };
}invoutputgamma_inv_out_gamma_bist_status_RBUS;




#endif 


#endif 
