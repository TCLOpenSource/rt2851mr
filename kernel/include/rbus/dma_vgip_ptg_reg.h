/**
* @file Merlin5-DesignSpec-I-Domain_VGIP
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_DMA_VGIP_PTG_REG_H_
#define _RBUS_DMA_VGIP_PTG_REG_H_

#include "rbus_types.h"



//  DMA_VGIP_PTG Register Address
#define  DMA_VGIP_PTG_DMA_PTG_CTRL                                              0x180224C0
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_reg_addr                                      "0xB80224C0"
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_reg                                           0xB80224C0
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_inst_addr                                     "0x0000"
#define  set_DMA_VGIP_PTG_DMA_PTG_CTRL_reg(data)                                 (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_CTRL_reg)=data)
#define  get_DMA_VGIP_PTG_DMA_PTG_CTRL_reg                                       (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_CTRL_reg))
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_color_bar_mode_en_shift                   (22)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_shift_size_mode_shift                     (21)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_ptg_den_sel_shift                         (7)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_mask_one_eye_en_shift                     (6)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_mask_one_eye_left_shift                   (5)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_color_bar_vertical_mode_shift             (4)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_color_bar_interlaced_mode_shift           (3)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_color_bar_3d_mode_shift                   (2)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_color_num_shift                           (0)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_color_bar_mode_en_mask                    (0x00400000)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_shift_size_mode_mask                      (0x00200000)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_ptg_den_sel_mask                          (0x00000080)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_mask_one_eye_en_mask                      (0x00000040)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_mask_one_eye_left_mask                    (0x00000020)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_color_bar_vertical_mode_mask              (0x00000010)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_color_bar_interlaced_mode_mask            (0x00000008)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_color_bar_3d_mode_mask                    (0x00000004)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_color_num_mask                            (0x00000003)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_color_bar_mode_en(data)                   (0x00400000&((data)<<22))
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_shift_size_mode(data)                     (0x00200000&((data)<<21))
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_ptg_den_sel(data)                         (0x00000080&((data)<<7))
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_mask_one_eye_en(data)                     (0x00000040&((data)<<6))
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_mask_one_eye_left(data)                   (0x00000020&((data)<<5))
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_color_bar_vertical_mode(data)             (0x00000010&((data)<<4))
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_color_bar_interlaced_mode(data)           (0x00000008&((data)<<3))
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_color_bar_3d_mode(data)                   (0x00000004&((data)<<2))
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_dma_color_num(data)                           (0x00000003&(data))
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_get_dma_color_bar_mode_en(data)               ((0x00400000&(data))>>22)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_get_dma_shift_size_mode(data)                 ((0x00200000&(data))>>21)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_get_dma_ptg_den_sel(data)                     ((0x00000080&(data))>>7)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_get_dma_mask_one_eye_en(data)                 ((0x00000040&(data))>>6)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_get_dma_mask_one_eye_left(data)               ((0x00000020&(data))>>5)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_get_dma_color_bar_vertical_mode(data)         ((0x00000010&(data))>>4)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_get_dma_color_bar_interlaced_mode(data)       ((0x00000008&(data))>>3)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_get_dma_color_bar_3d_mode(data)               ((0x00000004&(data))>>2)
#define  DMA_VGIP_PTG_DMA_PTG_CTRL_get_dma_color_num(data)                       (0x00000003&(data))

#define  DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr                                         0x180224C4
#define  DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_reg_addr                                 "0xB80224C4"
#define  DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_reg                                      0xB80224C4
#define  DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_inst_addr                                "0x0001"
#define  set_DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_reg(data)                            (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_reg)=data)
#define  get_DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_reg                                  (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_reg))
#define  DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_dma_i_c0y_92b_shift                      (16)
#define  DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_dma_i_c0cr_92b_shift                     (8)
#define  DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_dma_i_c0cb_92b_shift                     (0)
#define  DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_dma_i_c0y_92b_mask                       (0x00FF0000)
#define  DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_dma_i_c0cr_92b_mask                      (0x0000FF00)
#define  DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_dma_i_c0cb_92b_mask                      (0x000000FF)
#define  DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_dma_i_c0y_92b(data)                      (0x00FF0000&((data)<<16))
#define  DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_dma_i_c0cr_92b(data)                     (0x0000FF00&((data)<<8))
#define  DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_dma_i_c0cb_92b(data)                     (0x000000FF&(data))
#define  DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_get_dma_i_c0y_92b(data)                  ((0x00FF0000&(data))>>16)
#define  DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_get_dma_i_c0cr_92b(data)                 ((0x0000FF00&(data))>>8)
#define  DMA_VGIP_PTG_DMA_PTG_C0Y_Cb_Cr_get_dma_i_c0cb_92b(data)                 (0x000000FF&(data))

#define  DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr                                         0x180224C8
#define  DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_reg_addr                                 "0xB80224C8"
#define  DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_reg                                      0xB80224C8
#define  DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_inst_addr                                "0x0002"
#define  set_DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_reg(data)                            (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_reg)=data)
#define  get_DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_reg                                  (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_reg))
#define  DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_dma_i_c1y_92b_shift                      (16)
#define  DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_dma_i_c1cr_92b_shift                     (8)
#define  DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_dma_i_c1cb_92b_shift                     (0)
#define  DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_dma_i_c1y_92b_mask                       (0x00FF0000)
#define  DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_dma_i_c1cr_92b_mask                      (0x0000FF00)
#define  DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_dma_i_c1cb_92b_mask                      (0x000000FF)
#define  DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_dma_i_c1y_92b(data)                      (0x00FF0000&((data)<<16))
#define  DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_dma_i_c1cr_92b(data)                     (0x0000FF00&((data)<<8))
#define  DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_dma_i_c1cb_92b(data)                     (0x000000FF&(data))
#define  DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_get_dma_i_c1y_92b(data)                  ((0x00FF0000&(data))>>16)
#define  DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_get_dma_i_c1cr_92b(data)                 ((0x0000FF00&(data))>>8)
#define  DMA_VGIP_PTG_DMA_PTG_C1Y_Cb_Cr_get_dma_i_c1cb_92b(data)                 (0x000000FF&(data))

#define  DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr                                         0x180224CC
#define  DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_reg_addr                                 "0xB80224CC"
#define  DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_reg                                      0xB80224CC
#define  DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_inst_addr                                "0x0003"
#define  set_DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_reg(data)                            (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_reg)=data)
#define  get_DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_reg                                  (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_reg))
#define  DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_dma_i_c2y_92b_shift                      (16)
#define  DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_dma_i_c2cr_92b_shift                     (8)
#define  DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_dma_i_c2cb_92b_shift                     (0)
#define  DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_dma_i_c2y_92b_mask                       (0x00FF0000)
#define  DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_dma_i_c2cr_92b_mask                      (0x0000FF00)
#define  DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_dma_i_c2cb_92b_mask                      (0x000000FF)
#define  DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_dma_i_c2y_92b(data)                      (0x00FF0000&((data)<<16))
#define  DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_dma_i_c2cr_92b(data)                     (0x0000FF00&((data)<<8))
#define  DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_dma_i_c2cb_92b(data)                     (0x000000FF&(data))
#define  DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_get_dma_i_c2y_92b(data)                  ((0x00FF0000&(data))>>16)
#define  DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_get_dma_i_c2cr_92b(data)                 ((0x0000FF00&(data))>>8)
#define  DMA_VGIP_PTG_DMA_PTG_C2Y_Cb_Cr_get_dma_i_c2cb_92b(data)                 (0x000000FF&(data))

#define  DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr                                         0x180224D0
#define  DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_reg_addr                                 "0xB80224D0"
#define  DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_reg                                      0xB80224D0
#define  DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_inst_addr                                "0x0004"
#define  set_DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_reg(data)                            (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_reg)=data)
#define  get_DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_reg                                  (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_reg))
#define  DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_dma_i_c3y_92b_shift                      (16)
#define  DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_dma_i_c3cr_92b_shift                     (8)
#define  DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_dma_i_c3cb_92b_shift                     (0)
#define  DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_dma_i_c3y_92b_mask                       (0x00FF0000)
#define  DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_dma_i_c3cr_92b_mask                      (0x0000FF00)
#define  DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_dma_i_c3cb_92b_mask                      (0x000000FF)
#define  DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_dma_i_c3y_92b(data)                      (0x00FF0000&((data)<<16))
#define  DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_dma_i_c3cr_92b(data)                     (0x0000FF00&((data)<<8))
#define  DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_dma_i_c3cb_92b(data)                     (0x000000FF&(data))
#define  DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_get_dma_i_c3y_92b(data)                  ((0x00FF0000&(data))>>16)
#define  DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_get_dma_i_c3cr_92b(data)                 ((0x0000FF00&(data))>>8)
#define  DMA_VGIP_PTG_DMA_PTG_C3Y_Cb_Cr_get_dma_i_c3cb_92b(data)                 (0x000000FF&(data))

#define  DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr                                         0x180224D4
#define  DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_reg_addr                                 "0xB80224D4"
#define  DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_reg                                      0xB80224D4
#define  DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_inst_addr                                "0x0005"
#define  set_DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_reg(data)                            (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_reg)=data)
#define  get_DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_reg                                  (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_reg))
#define  DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_dma_i_c4y_92b_shift                      (16)
#define  DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_dma_i_c4cr_92b_shift                     (8)
#define  DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_dma_i_c4cb_92b_shift                     (0)
#define  DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_dma_i_c4y_92b_mask                       (0x00FF0000)
#define  DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_dma_i_c4cr_92b_mask                      (0x0000FF00)
#define  DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_dma_i_c4cb_92b_mask                      (0x000000FF)
#define  DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_dma_i_c4y_92b(data)                      (0x00FF0000&((data)<<16))
#define  DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_dma_i_c4cr_92b(data)                     (0x0000FF00&((data)<<8))
#define  DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_dma_i_c4cb_92b(data)                     (0x000000FF&(data))
#define  DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_get_dma_i_c4y_92b(data)                  ((0x00FF0000&(data))>>16)
#define  DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_get_dma_i_c4cr_92b(data)                 ((0x0000FF00&(data))>>8)
#define  DMA_VGIP_PTG_DMA_PTG_C4Y_Cb_Cr_get_dma_i_c4cb_92b(data)                 (0x000000FF&(data))

#define  DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb                                         0x180224D8
#define  DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_reg_addr                                 "0xB80224D8"
#define  DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_reg                                      0xB80224D8
#define  DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_inst_addr                                "0x0006"
#define  set_DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_reg(data)                            (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_reg)=data)
#define  get_DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_reg                                  (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_reg))
#define  DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_dma_i_c5y_92b_shift                      (16)
#define  DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_dma_i_c5cr_92b_shift                     (8)
#define  DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_dma_i_c5cb_92b_shift                     (0)
#define  DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_dma_i_c5y_92b_mask                       (0x00FF0000)
#define  DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_dma_i_c5cr_92b_mask                      (0x0000FF00)
#define  DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_dma_i_c5cb_92b_mask                      (0x000000FF)
#define  DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_dma_i_c5y_92b(data)                      (0x00FF0000&((data)<<16))
#define  DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_dma_i_c5cr_92b(data)                     (0x0000FF00&((data)<<8))
#define  DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_dma_i_c5cb_92b(data)                     (0x000000FF&(data))
#define  DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_get_dma_i_c5y_92b(data)                  ((0x00FF0000&(data))>>16)
#define  DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_get_dma_i_c5cr_92b(data)                 ((0x0000FF00&(data))>>8)
#define  DMA_VGIP_PTG_DMA_PTG_C5Y_Cr_Cb_get_dma_i_c5cb_92b(data)                 (0x000000FF&(data))

#define  DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr                                         0x180224DC
#define  DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_reg_addr                                 "0xB80224DC"
#define  DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_reg                                      0xB80224DC
#define  DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_inst_addr                                "0x0007"
#define  set_DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_reg(data)                            (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_reg)=data)
#define  get_DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_reg                                  (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_reg))
#define  DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_dma_i_c6y_92b_shift                      (16)
#define  DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_dma_i_c6cr_92b_shift                     (8)
#define  DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_dma_i_c6cb_92b_shift                     (0)
#define  DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_dma_i_c6y_92b_mask                       (0x00FF0000)
#define  DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_dma_i_c6cr_92b_mask                      (0x0000FF00)
#define  DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_dma_i_c6cb_92b_mask                      (0x000000FF)
#define  DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_dma_i_c6y_92b(data)                      (0x00FF0000&((data)<<16))
#define  DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_dma_i_c6cr_92b(data)                     (0x0000FF00&((data)<<8))
#define  DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_dma_i_c6cb_92b(data)                     (0x000000FF&(data))
#define  DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_get_dma_i_c6y_92b(data)                  ((0x00FF0000&(data))>>16)
#define  DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_get_dma_i_c6cr_92b(data)                 ((0x0000FF00&(data))>>8)
#define  DMA_VGIP_PTG_DMA_PTG_C6Y_Cb_Cr_get_dma_i_c6cb_92b(data)                 (0x000000FF&(data))

#define  DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr                                         0x180224E0
#define  DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_reg_addr                                 "0xB80224E0"
#define  DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_reg                                      0xB80224E0
#define  DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_inst_addr                                "0x0008"
#define  set_DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_reg(data)                            (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_reg)=data)
#define  get_DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_reg                                  (*((volatile unsigned int*)DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_reg))
#define  DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_dma_i_c7y_92b_shift                      (16)
#define  DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_dma_i_c7cr_92b_shift                     (8)
#define  DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_dma_i_c7cb_92b_shift                     (0)
#define  DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_dma_i_c7y_92b_mask                       (0x00FF0000)
#define  DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_dma_i_c7cr_92b_mask                      (0x0000FF00)
#define  DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_dma_i_c7cb_92b_mask                      (0x000000FF)
#define  DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_dma_i_c7y_92b(data)                      (0x00FF0000&((data)<<16))
#define  DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_dma_i_c7cr_92b(data)                     (0x0000FF00&((data)<<8))
#define  DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_dma_i_c7cb_92b(data)                     (0x000000FF&(data))
#define  DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_get_dma_i_c7y_92b(data)                  ((0x00FF0000&(data))>>16)
#define  DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_get_dma_i_c7cr_92b(data)                 ((0x0000FF00&(data))>>8)
#define  DMA_VGIP_PTG_DMA_PTG_C7Y_Cb_Cr_get_dma_i_c7cb_92b(data)                 (0x000000FF&(data))

#define  DMA_VGIP_PTG_PTG_DMA_ACT_HSTA_Width                                    0x180224E8
#define  DMA_VGIP_PTG_PTG_DMA_ACT_HSTA_Width_reg_addr                            "0xB80224E8"
#define  DMA_VGIP_PTG_PTG_DMA_ACT_HSTA_Width_reg                                 0xB80224E8
#define  DMA_VGIP_PTG_PTG_DMA_ACT_HSTA_Width_inst_addr                           "0x0009"
#define  set_DMA_VGIP_PTG_PTG_DMA_ACT_HSTA_Width_reg(data)                       (*((volatile unsigned int*)DMA_VGIP_PTG_PTG_DMA_ACT_HSTA_Width_reg)=data)
#define  get_DMA_VGIP_PTG_PTG_DMA_ACT_HSTA_Width_reg                             (*((volatile unsigned int*)DMA_VGIP_PTG_PTG_DMA_ACT_HSTA_Width_reg))
#define  DMA_VGIP_PTG_PTG_DMA_ACT_HSTA_Width_ptg_dma_ih_act_sta_shift            (16)
#define  DMA_VGIP_PTG_PTG_DMA_ACT_HSTA_Width_ptg_dma_ih_act_wid_shift            (0)
#define  DMA_VGIP_PTG_PTG_DMA_ACT_HSTA_Width_ptg_dma_ih_act_sta_mask             (0x3FFF0000)
#define  DMA_VGIP_PTG_PTG_DMA_ACT_HSTA_Width_ptg_dma_ih_act_wid_mask             (0x00003FFF)
#define  DMA_VGIP_PTG_PTG_DMA_ACT_HSTA_Width_ptg_dma_ih_act_sta(data)            (0x3FFF0000&((data)<<16))
#define  DMA_VGIP_PTG_PTG_DMA_ACT_HSTA_Width_ptg_dma_ih_act_wid(data)            (0x00003FFF&(data))
#define  DMA_VGIP_PTG_PTG_DMA_ACT_HSTA_Width_get_ptg_dma_ih_act_sta(data)        ((0x3FFF0000&(data))>>16)
#define  DMA_VGIP_PTG_PTG_DMA_ACT_HSTA_Width_get_ptg_dma_ih_act_wid(data)        (0x00003FFF&(data))

#define  DMA_VGIP_PTG_PTG_DMA_ACT_VSTA_Width                                    0x180224EC
#define  DMA_VGIP_PTG_PTG_DMA_ACT_VSTA_Width_reg_addr                            "0xB80224EC"
#define  DMA_VGIP_PTG_PTG_DMA_ACT_VSTA_Width_reg                                 0xB80224EC
#define  DMA_VGIP_PTG_PTG_DMA_ACT_VSTA_Width_inst_addr                           "0x000A"
#define  set_DMA_VGIP_PTG_PTG_DMA_ACT_VSTA_Width_reg(data)                       (*((volatile unsigned int*)DMA_VGIP_PTG_PTG_DMA_ACT_VSTA_Width_reg)=data)
#define  get_DMA_VGIP_PTG_PTG_DMA_ACT_VSTA_Width_reg                             (*((volatile unsigned int*)DMA_VGIP_PTG_PTG_DMA_ACT_VSTA_Width_reg))
#define  DMA_VGIP_PTG_PTG_DMA_ACT_VSTA_Width_ptg_dma_iv_act_sta_shift            (16)
#define  DMA_VGIP_PTG_PTG_DMA_ACT_VSTA_Width_ptg_dma_iv_act_len_shift            (0)
#define  DMA_VGIP_PTG_PTG_DMA_ACT_VSTA_Width_ptg_dma_iv_act_sta_mask             (0x3FFF0000)
#define  DMA_VGIP_PTG_PTG_DMA_ACT_VSTA_Width_ptg_dma_iv_act_len_mask             (0x00003FFF)
#define  DMA_VGIP_PTG_PTG_DMA_ACT_VSTA_Width_ptg_dma_iv_act_sta(data)            (0x3FFF0000&((data)<<16))
#define  DMA_VGIP_PTG_PTG_DMA_ACT_VSTA_Width_ptg_dma_iv_act_len(data)            (0x00003FFF&(data))
#define  DMA_VGIP_PTG_PTG_DMA_ACT_VSTA_Width_get_ptg_dma_iv_act_sta(data)        ((0x3FFF0000&(data))>>16)
#define  DMA_VGIP_PTG_PTG_DMA_ACT_VSTA_Width_get_ptg_dma_iv_act_len(data)        (0x00003FFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======DMA_VGIP_PTG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  dma_color_bar_mode_en:1;
        RBus_UInt32  dma_shift_size_mode:1;
        RBus_UInt32  res2:13;
        RBus_UInt32  dma_ptg_den_sel:1;
        RBus_UInt32  dma_mask_one_eye_en:1;
        RBus_UInt32  dma_mask_one_eye_left:1;
        RBus_UInt32  dma_color_bar_vertical_mode:1;
        RBus_UInt32  dma_color_bar_interlaced_mode:1;
        RBus_UInt32  dma_color_bar_3d_mode:1;
        RBus_UInt32  dma_color_num:2;
    };
}dma_vgip_ptg_dma_ptg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dma_i_c0y_92b:8;
        RBus_UInt32  dma_i_c0cr_92b:8;
        RBus_UInt32  dma_i_c0cb_92b:8;
    };
}dma_vgip_ptg_dma_ptg_c0y_cb_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dma_i_c1y_92b:8;
        RBus_UInt32  dma_i_c1cr_92b:8;
        RBus_UInt32  dma_i_c1cb_92b:8;
    };
}dma_vgip_ptg_dma_ptg_c1y_cb_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dma_i_c2y_92b:8;
        RBus_UInt32  dma_i_c2cr_92b:8;
        RBus_UInt32  dma_i_c2cb_92b:8;
    };
}dma_vgip_ptg_dma_ptg_c2y_cb_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dma_i_c3y_92b:8;
        RBus_UInt32  dma_i_c3cr_92b:8;
        RBus_UInt32  dma_i_c3cb_92b:8;
    };
}dma_vgip_ptg_dma_ptg_c3y_cb_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dma_i_c4y_92b:8;
        RBus_UInt32  dma_i_c4cr_92b:8;
        RBus_UInt32  dma_i_c4cb_92b:8;
    };
}dma_vgip_ptg_dma_ptg_c4y_cb_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dma_i_c5y_92b:8;
        RBus_UInt32  dma_i_c5cr_92b:8;
        RBus_UInt32  dma_i_c5cb_92b:8;
    };
}dma_vgip_ptg_dma_ptg_c5y_cr_cb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dma_i_c6y_92b:8;
        RBus_UInt32  dma_i_c6cr_92b:8;
        RBus_UInt32  dma_i_c6cb_92b:8;
    };
}dma_vgip_ptg_dma_ptg_c6y_cb_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dma_i_c7y_92b:8;
        RBus_UInt32  dma_i_c7cr_92b:8;
        RBus_UInt32  dma_i_c7cb_92b:8;
    };
}dma_vgip_ptg_dma_ptg_c7y_cb_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ptg_dma_ih_act_sta:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  ptg_dma_ih_act_wid:14;
    };
}dma_vgip_ptg_ptg_dma_act_hsta_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ptg_dma_iv_act_sta:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  ptg_dma_iv_act_len:14;
    };
}dma_vgip_ptg_ptg_dma_act_vsta_width_RBUS;

#else //apply LITTLE_ENDIAN

//======DMA_VGIP_PTG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_color_num:2;
        RBus_UInt32  dma_color_bar_3d_mode:1;
        RBus_UInt32  dma_color_bar_interlaced_mode:1;
        RBus_UInt32  dma_color_bar_vertical_mode:1;
        RBus_UInt32  dma_mask_one_eye_left:1;
        RBus_UInt32  dma_mask_one_eye_en:1;
        RBus_UInt32  dma_ptg_den_sel:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  dma_shift_size_mode:1;
        RBus_UInt32  dma_color_bar_mode_en:1;
        RBus_UInt32  res2:9;
    };
}dma_vgip_ptg_dma_ptg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_i_c0cb_92b:8;
        RBus_UInt32  dma_i_c0cr_92b:8;
        RBus_UInt32  dma_i_c0y_92b:8;
        RBus_UInt32  res1:8;
    };
}dma_vgip_ptg_dma_ptg_c0y_cb_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_i_c1cb_92b:8;
        RBus_UInt32  dma_i_c1cr_92b:8;
        RBus_UInt32  dma_i_c1y_92b:8;
        RBus_UInt32  res1:8;
    };
}dma_vgip_ptg_dma_ptg_c1y_cb_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_i_c2cb_92b:8;
        RBus_UInt32  dma_i_c2cr_92b:8;
        RBus_UInt32  dma_i_c2y_92b:8;
        RBus_UInt32  res1:8;
    };
}dma_vgip_ptg_dma_ptg_c2y_cb_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_i_c3cb_92b:8;
        RBus_UInt32  dma_i_c3cr_92b:8;
        RBus_UInt32  dma_i_c3y_92b:8;
        RBus_UInt32  res1:8;
    };
}dma_vgip_ptg_dma_ptg_c3y_cb_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_i_c4cb_92b:8;
        RBus_UInt32  dma_i_c4cr_92b:8;
        RBus_UInt32  dma_i_c4y_92b:8;
        RBus_UInt32  res1:8;
    };
}dma_vgip_ptg_dma_ptg_c4y_cb_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_i_c5cb_92b:8;
        RBus_UInt32  dma_i_c5cr_92b:8;
        RBus_UInt32  dma_i_c5y_92b:8;
        RBus_UInt32  res1:8;
    };
}dma_vgip_ptg_dma_ptg_c5y_cr_cb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_i_c6cb_92b:8;
        RBus_UInt32  dma_i_c6cr_92b:8;
        RBus_UInt32  dma_i_c6y_92b:8;
        RBus_UInt32  res1:8;
    };
}dma_vgip_ptg_dma_ptg_c6y_cb_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_i_c7cb_92b:8;
        RBus_UInt32  dma_i_c7cr_92b:8;
        RBus_UInt32  dma_i_c7y_92b:8;
        RBus_UInt32  res1:8;
    };
}dma_vgip_ptg_dma_ptg_c7y_cb_cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_dma_ih_act_wid:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  ptg_dma_ih_act_sta:14;
        RBus_UInt32  res2:2;
    };
}dma_vgip_ptg_ptg_dma_act_hsta_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_dma_iv_act_len:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  ptg_dma_iv_act_sta:14;
        RBus_UInt32  res2:2;
    };
}dma_vgip_ptg_ptg_dma_act_vsta_width_RBUS;




#endif 


#endif 
