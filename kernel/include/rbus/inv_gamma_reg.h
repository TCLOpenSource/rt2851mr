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

#ifndef _RBUS_INV_GAMMA_REG_H_
#define _RBUS_INV_GAMMA_REG_H_

#include "rbus_types.h"



//  INV_GAMMA Register Address
#define  INV_GAMMA_INV_GAMMA_PORT                                               0x1802C010
#define  INV_GAMMA_INV_GAMMA_PORT_reg_addr                                       "0xB802C010"
#define  INV_GAMMA_INV_GAMMA_PORT_reg                                            0xB802C010
#define  INV_GAMMA_INV_GAMMA_PORT_inst_addr                                      "0x0000"
#define  set_INV_GAMMA_INV_GAMMA_PORT_reg(data)                                  (*((volatile unsigned int*)INV_GAMMA_INV_GAMMA_PORT_reg)=data)
#define  get_INV_GAMMA_INV_GAMMA_PORT_reg                                        (*((volatile unsigned int*)INV_GAMMA_INV_GAMMA_PORT_reg))
#define  INV_GAMMA_INV_GAMMA_PORT_inv_gamma_tab_index_shift                      (16)
#define  INV_GAMMA_INV_GAMMA_PORT_inv_gamma_tab_d0_shift                         (8)
#define  INV_GAMMA_INV_GAMMA_PORT_inv_gamma_tab_d1_shift                         (0)
#define  INV_GAMMA_INV_GAMMA_PORT_inv_gamma_tab_index_mask                       (0x3FFF0000)
#define  INV_GAMMA_INV_GAMMA_PORT_inv_gamma_tab_d0_mask                          (0x0000FF00)
#define  INV_GAMMA_INV_GAMMA_PORT_inv_gamma_tab_d1_mask                          (0x000000FF)
#define  INV_GAMMA_INV_GAMMA_PORT_inv_gamma_tab_index(data)                      (0x3FFF0000&((data)<<16))
#define  INV_GAMMA_INV_GAMMA_PORT_inv_gamma_tab_d0(data)                         (0x0000FF00&((data)<<8))
#define  INV_GAMMA_INV_GAMMA_PORT_inv_gamma_tab_d1(data)                         (0x000000FF&(data))
#define  INV_GAMMA_INV_GAMMA_PORT_get_inv_gamma_tab_index(data)                  ((0x3FFF0000&(data))>>16)
#define  INV_GAMMA_INV_GAMMA_PORT_get_inv_gamma_tab_d0(data)                     ((0x0000FF00&(data))>>8)
#define  INV_GAMMA_INV_GAMMA_PORT_get_inv_gamma_tab_d1(data)                     (0x000000FF&(data))

#define  INV_GAMMA_INV_GAMMA_CTRL_1                                             0x1802C014
#define  INV_GAMMA_INV_GAMMA_CTRL_1_reg_addr                                     "0xB802C014"
#define  INV_GAMMA_INV_GAMMA_CTRL_1_reg                                          0xB802C014
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inst_addr                                    "0x0001"
#define  set_INV_GAMMA_INV_GAMMA_CTRL_1_reg(data)                                (*((volatile unsigned int*)INV_GAMMA_INV_GAMMA_CTRL_1_reg)=data)
#define  get_INV_GAMMA_INV_GAMMA_CTRL_1_reg                                      (*((volatile unsigned int*)INV_GAMMA_INV_GAMMA_CTRL_1_reg))
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_read_tab_sel_shift                 (28)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_tab_addr_shift                     (16)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_ax_rw_sel_shift                    (7)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_ax_tab_sel_shift                   (6)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_ax_ch_sel_shift                    (4)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_fifo_empty_shift                   (3)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_fifo_full_shift                    (2)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_wr_error_shift                     (1)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_dummy_0_shift                                (0)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_read_tab_sel_mask                  (0x10000000)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_tab_addr_mask                      (0x01FF0000)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_ax_rw_sel_mask                     (0x00000180)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_ax_tab_sel_mask                    (0x00000040)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_ax_ch_sel_mask                     (0x00000030)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_fifo_empty_mask                    (0x00000008)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_fifo_full_mask                     (0x00000004)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_wr_error_mask                      (0x00000002)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_dummy_0_mask                                 (0x00000001)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_read_tab_sel(data)                 (0x10000000&((data)<<28))
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_tab_addr(data)                     (0x01FF0000&((data)<<16))
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_ax_rw_sel(data)                    (0x00000180&((data)<<7))
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_ax_tab_sel(data)                   (0x00000040&((data)<<6))
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_ax_ch_sel(data)                    (0x00000030&((data)<<4))
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_fifo_empty(data)                   (0x00000008&((data)<<3))
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_fifo_full(data)                    (0x00000004&((data)<<2))
#define  INV_GAMMA_INV_GAMMA_CTRL_1_inv_gamma_wr_error(data)                     (0x00000002&((data)<<1))
#define  INV_GAMMA_INV_GAMMA_CTRL_1_dummy_0(data)                                (0x00000001&(data))
#define  INV_GAMMA_INV_GAMMA_CTRL_1_get_inv_gamma_read_tab_sel(data)             ((0x10000000&(data))>>28)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_get_inv_gamma_tab_addr(data)                 ((0x01FF0000&(data))>>16)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_get_inv_gamma_ax_rw_sel(data)                ((0x00000180&(data))>>7)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_get_inv_gamma_ax_tab_sel(data)               ((0x00000040&(data))>>6)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_get_inv_gamma_ax_ch_sel(data)                ((0x00000030&(data))>>4)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_get_inv_gamma_fifo_empty(data)               ((0x00000008&(data))>>3)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_get_inv_gamma_fifo_full(data)                ((0x00000004&(data))>>2)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_get_inv_gamma_wr_error(data)                 ((0x00000002&(data))>>1)
#define  INV_GAMMA_INV_GAMMA_CTRL_1_get_dummy_0(data)                            (0x00000001&(data))

#define  INV_GAMMA_INV_GAMMA_CTRL_2                                             0x1802C018
#define  INV_GAMMA_INV_GAMMA_CTRL_2_reg_addr                                     "0xB802C018"
#define  INV_GAMMA_INV_GAMMA_CTRL_2_reg                                          0xB802C018
#define  INV_GAMMA_INV_GAMMA_CTRL_2_inst_addr                                    "0x0002"
#define  set_INV_GAMMA_INV_GAMMA_CTRL_2_reg(data)                                (*((volatile unsigned int*)INV_GAMMA_INV_GAMMA_CTRL_2_reg)=data)
#define  get_INV_GAMMA_INV_GAMMA_CTRL_2_reg                                      (*((volatile unsigned int*)INV_GAMMA_INV_GAMMA_CTRL_2_reg))
#define  INV_GAMMA_INV_GAMMA_CTRL_2_inv_gamma_tab_size_sel_shift                 (8)
#define  INV_GAMMA_INV_GAMMA_CTRL_2_inv_gamma_m_tab_sel_shift                    (6)
#define  INV_GAMMA_INV_GAMMA_CTRL_2_inv_gamma_s_tab_sel_shift                    (4)
#define  INV_GAMMA_INV_GAMMA_CTRL_2_inv_gamma_overlap_shift                      (3)
#define  INV_GAMMA_INV_GAMMA_CTRL_2_dummy_2_0_shift                              (0)
#define  INV_GAMMA_INV_GAMMA_CTRL_2_inv_gamma_tab_size_sel_mask                  (0x00000100)
#define  INV_GAMMA_INV_GAMMA_CTRL_2_inv_gamma_m_tab_sel_mask                     (0x000000C0)
#define  INV_GAMMA_INV_GAMMA_CTRL_2_inv_gamma_s_tab_sel_mask                     (0x00000030)
#define  INV_GAMMA_INV_GAMMA_CTRL_2_inv_gamma_overlap_mask                       (0x00000008)
#define  INV_GAMMA_INV_GAMMA_CTRL_2_dummy_2_0_mask                               (0x00000007)
#define  INV_GAMMA_INV_GAMMA_CTRL_2_inv_gamma_tab_size_sel(data)                 (0x00000100&((data)<<8))
#define  INV_GAMMA_INV_GAMMA_CTRL_2_inv_gamma_m_tab_sel(data)                    (0x000000C0&((data)<<6))
#define  INV_GAMMA_INV_GAMMA_CTRL_2_inv_gamma_s_tab_sel(data)                    (0x00000030&((data)<<4))
#define  INV_GAMMA_INV_GAMMA_CTRL_2_inv_gamma_overlap(data)                      (0x00000008&((data)<<3))
#define  INV_GAMMA_INV_GAMMA_CTRL_2_dummy_2_0(data)                              (0x00000007&(data))
#define  INV_GAMMA_INV_GAMMA_CTRL_2_get_inv_gamma_tab_size_sel(data)             ((0x00000100&(data))>>8)
#define  INV_GAMMA_INV_GAMMA_CTRL_2_get_inv_gamma_m_tab_sel(data)                ((0x000000C0&(data))>>6)
#define  INV_GAMMA_INV_GAMMA_CTRL_2_get_inv_gamma_s_tab_sel(data)                ((0x00000030&(data))>>4)
#define  INV_GAMMA_INV_GAMMA_CTRL_2_get_inv_gamma_overlap(data)                  ((0x00000008&(data))>>3)
#define  INV_GAMMA_INV_GAMMA_CTRL_2_get_dummy_2_0(data)                          (0x00000007&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======INV_GAMMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  inv_gamma_tab_index:14;
        RBus_UInt32  inv_gamma_tab_d0:8;
        RBus_UInt32  inv_gamma_tab_d1:8;
    };
}inv_gamma_inv_gamma_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  inv_gamma_read_tab_sel:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  inv_gamma_tab_addr:9;
        RBus_UInt32  res3:7;
        RBus_UInt32  inv_gamma_ax_rw_sel:2;
        RBus_UInt32  inv_gamma_ax_tab_sel:1;
        RBus_UInt32  inv_gamma_ax_ch_sel:2;
        RBus_UInt32  inv_gamma_fifo_empty:1;
        RBus_UInt32  inv_gamma_fifo_full:1;
        RBus_UInt32  inv_gamma_wr_error:1;
        RBus_UInt32  dummy1802c014_0:1;
    };
}inv_gamma_inv_gamma_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  inv_gamma_tab_size_sel:1;
        RBus_UInt32  inv_gamma_m_tab_sel:2;
        RBus_UInt32  inv_gamma_s_tab_sel:2;
        RBus_UInt32  inv_gamma_overlap:1;
        RBus_UInt32  dummy1802c018_2_0:3;
    };
}inv_gamma_inv_gamma_ctrl_2_RBUS;

#else //apply LITTLE_ENDIAN

//======INV_GAMMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  inv_gamma_tab_d1:8;
        RBus_UInt32  inv_gamma_tab_d0:8;
        RBus_UInt32  inv_gamma_tab_index:14;
        RBus_UInt32  res1:2;
    };
}inv_gamma_inv_gamma_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802c014_0:1;
        RBus_UInt32  inv_gamma_wr_error:1;
        RBus_UInt32  inv_gamma_fifo_full:1;
        RBus_UInt32  inv_gamma_fifo_empty:1;
        RBus_UInt32  inv_gamma_ax_ch_sel:2;
        RBus_UInt32  inv_gamma_ax_tab_sel:1;
        RBus_UInt32  inv_gamma_ax_rw_sel:2;
        RBus_UInt32  res1:7;
        RBus_UInt32  inv_gamma_tab_addr:9;
        RBus_UInt32  res2:3;
        RBus_UInt32  inv_gamma_read_tab_sel:1;
        RBus_UInt32  res3:3;
    };
}inv_gamma_inv_gamma_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802c018_2_0:3;
        RBus_UInt32  inv_gamma_overlap:1;
        RBus_UInt32  inv_gamma_s_tab_sel:2;
        RBus_UInt32  inv_gamma_m_tab_sel:2;
        RBus_UInt32  inv_gamma_tab_size_sel:1;
        RBus_UInt32  res1:23;
    };
}inv_gamma_inv_gamma_ctrl_2_RBUS;




#endif 


#endif 
