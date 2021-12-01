/**
* @file Merlin5-DesignSpec-D-Domain_LGD_A10
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_LGD_A10_REG_H_
#define _RBUS_LGD_A10_REG_H_

#include "rbus_types.h"



//  LGD_A10 Register Address
#define  LGD_A10_LGD_A10_CTRL                                                   0x1802C6A0
#define  LGD_A10_LGD_A10_CTRL_reg_addr                                           "0xB802C6A0"
#define  LGD_A10_LGD_A10_CTRL_reg                                                0xB802C6A0
#define  LGD_A10_LGD_A10_CTRL_inst_addr                                          "0x0000"
#define  set_LGD_A10_LGD_A10_CTRL_reg(data)                                      (*((volatile unsigned int*)LGD_A10_LGD_A10_CTRL_reg)=data)
#define  get_LGD_A10_LGD_A10_CTRL_reg                                            (*((volatile unsigned int*)LGD_A10_LGD_A10_CTRL_reg))
#define  LGD_A10_LGD_A10_CTRL_a10_out_line_sel_shift                             (13)
#define  LGD_A10_LGD_A10_CTRL_a10_dbg_sel_shift                                  (12)
#define  LGD_A10_LGD_A10_CTRL_a10_dbg_out_shift                                  (10)
#define  LGD_A10_LGD_A10_CTRL_a10_dbg_in_shift                                   (8)
#define  LGD_A10_LGD_A10_CTRL_wpr_on_shift                                       (5)
#define  LGD_A10_LGD_A10_CTRL_ed_on_shift                                        (4)
#define  LGD_A10_LGD_A10_CTRL_bit_sel_shift                                      (3)
#define  LGD_A10_LGD_A10_CTRL_a10_sel_shift                                      (1)
#define  LGD_A10_LGD_A10_CTRL_a10_on_shift                                       (0)
#define  LGD_A10_LGD_A10_CTRL_a10_out_line_sel_mask                              (0x00006000)
#define  LGD_A10_LGD_A10_CTRL_a10_dbg_sel_mask                                   (0x00001000)
#define  LGD_A10_LGD_A10_CTRL_a10_dbg_out_mask                                   (0x00000C00)
#define  LGD_A10_LGD_A10_CTRL_a10_dbg_in_mask                                    (0x00000300)
#define  LGD_A10_LGD_A10_CTRL_wpr_on_mask                                        (0x00000020)
#define  LGD_A10_LGD_A10_CTRL_ed_on_mask                                         (0x00000010)
#define  LGD_A10_LGD_A10_CTRL_bit_sel_mask                                       (0x00000008)
#define  LGD_A10_LGD_A10_CTRL_a10_sel_mask                                       (0x00000006)
#define  LGD_A10_LGD_A10_CTRL_a10_on_mask                                        (0x00000001)
#define  LGD_A10_LGD_A10_CTRL_a10_out_line_sel(data)                             (0x00006000&((data)<<13))
#define  LGD_A10_LGD_A10_CTRL_a10_dbg_sel(data)                                  (0x00001000&((data)<<12))
#define  LGD_A10_LGD_A10_CTRL_a10_dbg_out(data)                                  (0x00000C00&((data)<<10))
#define  LGD_A10_LGD_A10_CTRL_a10_dbg_in(data)                                   (0x00000300&((data)<<8))
#define  LGD_A10_LGD_A10_CTRL_wpr_on(data)                                       (0x00000020&((data)<<5))
#define  LGD_A10_LGD_A10_CTRL_ed_on(data)                                        (0x00000010&((data)<<4))
#define  LGD_A10_LGD_A10_CTRL_bit_sel(data)                                      (0x00000008&((data)<<3))
#define  LGD_A10_LGD_A10_CTRL_a10_sel(data)                                      (0x00000006&((data)<<1))
#define  LGD_A10_LGD_A10_CTRL_a10_on(data)                                       (0x00000001&(data))
#define  LGD_A10_LGD_A10_CTRL_get_a10_out_line_sel(data)                         ((0x00006000&(data))>>13)
#define  LGD_A10_LGD_A10_CTRL_get_a10_dbg_sel(data)                              ((0x00001000&(data))>>12)
#define  LGD_A10_LGD_A10_CTRL_get_a10_dbg_out(data)                              ((0x00000C00&(data))>>10)
#define  LGD_A10_LGD_A10_CTRL_get_a10_dbg_in(data)                               ((0x00000300&(data))>>8)
#define  LGD_A10_LGD_A10_CTRL_get_wpr_on(data)                                   ((0x00000020&(data))>>5)
#define  LGD_A10_LGD_A10_CTRL_get_ed_on(data)                                    ((0x00000010&(data))>>4)
#define  LGD_A10_LGD_A10_CTRL_get_bit_sel(data)                                  ((0x00000008&(data))>>3)
#define  LGD_A10_LGD_A10_CTRL_get_a10_sel(data)                                  ((0x00000006&(data))>>1)
#define  LGD_A10_LGD_A10_CTRL_get_a10_on(data)                                   (0x00000001&(data))

#define  LGD_A10_LGD_A10_SET0                                                   0x1802C6A4
#define  LGD_A10_LGD_A10_SET0_reg_addr                                           "0xB802C6A4"
#define  LGD_A10_LGD_A10_SET0_reg                                                0xB802C6A4
#define  LGD_A10_LGD_A10_SET0_inst_addr                                          "0x0001"
#define  set_LGD_A10_LGD_A10_SET0_reg(data)                                      (*((volatile unsigned int*)LGD_A10_LGD_A10_SET0_reg)=data)
#define  get_LGD_A10_LGD_A10_SET0_reg                                            (*((volatile unsigned int*)LGD_A10_LGD_A10_SET0_reg))
#define  LGD_A10_LGD_A10_SET0_mask2_down_left_shift                              (24)
#define  LGD_A10_LGD_A10_SET0_mask2_down_right_shift                             (20)
#define  LGD_A10_LGD_A10_SET0_mask2_right_shift                                  (16)
#define  LGD_A10_LGD_A10_SET0_mask1_down_left_shift                              (12)
#define  LGD_A10_LGD_A10_SET0_mask1_down_shift                                   (8)
#define  LGD_A10_LGD_A10_SET0_mask1_down_right_shift                             (4)
#define  LGD_A10_LGD_A10_SET0_mask1_right_shift                                  (0)
#define  LGD_A10_LGD_A10_SET0_mask2_down_left_mask                               (0x0F000000)
#define  LGD_A10_LGD_A10_SET0_mask2_down_right_mask                              (0x00F00000)
#define  LGD_A10_LGD_A10_SET0_mask2_right_mask                                   (0x000F0000)
#define  LGD_A10_LGD_A10_SET0_mask1_down_left_mask                               (0x0000F000)
#define  LGD_A10_LGD_A10_SET0_mask1_down_mask                                    (0x00000F00)
#define  LGD_A10_LGD_A10_SET0_mask1_down_right_mask                              (0x000000F0)
#define  LGD_A10_LGD_A10_SET0_mask1_right_mask                                   (0x0000000F)
#define  LGD_A10_LGD_A10_SET0_mask2_down_left(data)                              (0x0F000000&((data)<<24))
#define  LGD_A10_LGD_A10_SET0_mask2_down_right(data)                             (0x00F00000&((data)<<20))
#define  LGD_A10_LGD_A10_SET0_mask2_right(data)                                  (0x000F0000&((data)<<16))
#define  LGD_A10_LGD_A10_SET0_mask1_down_left(data)                              (0x0000F000&((data)<<12))
#define  LGD_A10_LGD_A10_SET0_mask1_down(data)                                   (0x00000F00&((data)<<8))
#define  LGD_A10_LGD_A10_SET0_mask1_down_right(data)                             (0x000000F0&((data)<<4))
#define  LGD_A10_LGD_A10_SET0_mask1_right(data)                                  (0x0000000F&(data))
#define  LGD_A10_LGD_A10_SET0_get_mask2_down_left(data)                          ((0x0F000000&(data))>>24)
#define  LGD_A10_LGD_A10_SET0_get_mask2_down_right(data)                         ((0x00F00000&(data))>>20)
#define  LGD_A10_LGD_A10_SET0_get_mask2_right(data)                              ((0x000F0000&(data))>>16)
#define  LGD_A10_LGD_A10_SET0_get_mask1_down_left(data)                          ((0x0000F000&(data))>>12)
#define  LGD_A10_LGD_A10_SET0_get_mask1_down(data)                               ((0x00000F00&(data))>>8)
#define  LGD_A10_LGD_A10_SET0_get_mask1_down_right(data)                         ((0x000000F0&(data))>>4)
#define  LGD_A10_LGD_A10_SET0_get_mask1_right(data)                              (0x0000000F&(data))

#define  LGD_A10_LGD_A10_SET1                                                   0x1802C6A8
#define  LGD_A10_LGD_A10_SET1_reg_addr                                           "0xB802C6A8"
#define  LGD_A10_LGD_A10_SET1_reg                                                0xB802C6A8
#define  LGD_A10_LGD_A10_SET1_inst_addr                                          "0x0002"
#define  set_LGD_A10_LGD_A10_SET1_reg(data)                                      (*((volatile unsigned int*)LGD_A10_LGD_A10_SET1_reg)=data)
#define  get_LGD_A10_LGD_A10_SET1_reg                                            (*((volatile unsigned int*)LGD_A10_LGD_A10_SET1_reg))
#define  LGD_A10_LGD_A10_SET1_h_resolution_shift                                 (16)
#define  LGD_A10_LGD_A10_SET1_v_resolution_shift                                 (0)
#define  LGD_A10_LGD_A10_SET1_h_resolution_mask                                  (0x0FFF0000)
#define  LGD_A10_LGD_A10_SET1_v_resolution_mask                                  (0x00000FFF)
#define  LGD_A10_LGD_A10_SET1_h_resolution(data)                                 (0x0FFF0000&((data)<<16))
#define  LGD_A10_LGD_A10_SET1_v_resolution(data)                                 (0x00000FFF&(data))
#define  LGD_A10_LGD_A10_SET1_get_h_resolution(data)                             ((0x0FFF0000&(data))>>16)
#define  LGD_A10_LGD_A10_SET1_get_v_resolution(data)                             (0x00000FFF&(data))

#define  LGD_A10_LGD_A10_SET2                                                   0x1802C6AC
#define  LGD_A10_LGD_A10_SET2_reg_addr                                           "0xB802C6AC"
#define  LGD_A10_LGD_A10_SET2_reg                                                0xB802C6AC
#define  LGD_A10_LGD_A10_SET2_inst_addr                                          "0x0003"
#define  set_LGD_A10_LGD_A10_SET2_reg(data)                                      (*((volatile unsigned int*)LGD_A10_LGD_A10_SET2_reg)=data)
#define  get_LGD_A10_LGD_A10_SET2_reg                                            (*((volatile unsigned int*)LGD_A10_LGD_A10_SET2_reg))
#define  LGD_A10_LGD_A10_SET2_th_zero_count_shift                                (0)
#define  LGD_A10_LGD_A10_SET2_th_zero_count_mask                                 (0x00003FFF)
#define  LGD_A10_LGD_A10_SET2_th_zero_count(data)                                (0x00003FFF&(data))
#define  LGD_A10_LGD_A10_SET2_get_th_zero_count(data)                            (0x00003FFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======LGD_A10 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  a10_out_line_sel:2;
        RBus_UInt32  a10_dbg_sel:1;
        RBus_UInt32  a10_dbg_out:2;
        RBus_UInt32  a10_dbg_in:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  wpr_on:1;
        RBus_UInt32  ed_on:1;
        RBus_UInt32  bit_sel:1;
        RBus_UInt32  a10_sel:2;
        RBus_UInt32  a10_on:1;
    };
}lgd_a10_lgd_a10_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mask2_down_left:4;
        RBus_UInt32  mask2_down_right:4;
        RBus_UInt32  mask2_right:4;
        RBus_UInt32  mask1_down_left:4;
        RBus_UInt32  mask1_down:4;
        RBus_UInt32  mask1_down_right:4;
        RBus_UInt32  mask1_right:4;
    };
}lgd_a10_lgd_a10_set0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  h_resolution:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  v_resolution:12;
    };
}lgd_a10_lgd_a10_set1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  th_zero_count:14;
    };
}lgd_a10_lgd_a10_set2_RBUS;

#else //apply LITTLE_ENDIAN

//======LGD_A10 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  a10_on:1;
        RBus_UInt32  a10_sel:2;
        RBus_UInt32  bit_sel:1;
        RBus_UInt32  ed_on:1;
        RBus_UInt32  wpr_on:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  a10_dbg_in:2;
        RBus_UInt32  a10_dbg_out:2;
        RBus_UInt32  a10_dbg_sel:1;
        RBus_UInt32  a10_out_line_sel:2;
        RBus_UInt32  res2:17;
    };
}lgd_a10_lgd_a10_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mask1_right:4;
        RBus_UInt32  mask1_down_right:4;
        RBus_UInt32  mask1_down:4;
        RBus_UInt32  mask1_down_left:4;
        RBus_UInt32  mask2_right:4;
        RBus_UInt32  mask2_down_right:4;
        RBus_UInt32  mask2_down_left:4;
        RBus_UInt32  res1:4;
    };
}lgd_a10_lgd_a10_set0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_resolution:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  h_resolution:12;
        RBus_UInt32  res2:4;
    };
}lgd_a10_lgd_a10_set1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  th_zero_count:14;
        RBus_UInt32  res1:18;
    };
}lgd_a10_lgd_a10_set2_RBUS;




#endif 


#endif 
