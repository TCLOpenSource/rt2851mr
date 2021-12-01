/**
* @file Merlin5-DesignSpec-D_Domain_TCON
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_TCON_REG_H_
#define _RBUS_TCON_REG_H_

#include "rbus_types.h"



//  TCON Register Address
#define  TCON_TCON_CTRL                                                         0x1802D200
#define  TCON_TCON_CTRL_reg_addr                                                 "0xB802D200"
#define  TCON_TCON_CTRL_reg                                                      0xB802D200
#define  TCON_TCON_CTRL_inst_addr                                                "0x0000"
#define  set_TCON_TCON_CTRL_reg(data)                                            (*((volatile unsigned int*)TCON_TCON_CTRL_reg)=data)
#define  get_TCON_TCON_CTRL_reg                                                  (*((volatile unsigned int*)TCON_TCON_CTRL_reg))
#define  TCON_TCON_CTRL_tcon_output_shift                                        (0)
#define  TCON_TCON_CTRL_tcon_output_mask                                         (0x3FFFFFFF)
#define  TCON_TCON_CTRL_tcon_output(data)                                        (0x3FFFFFFF&(data))
#define  TCON_TCON_CTRL_get_tcon_output(data)                                    (0x3FFFFFFF&(data))

#define  TCON_TCON_IP_EN                                                        0x1802D208
#define  TCON_TCON_IP_EN_reg_addr                                                "0xB802D208"
#define  TCON_TCON_IP_EN_reg                                                     0xB802D208
#define  TCON_TCON_IP_EN_inst_addr                                               "0x0001"
#define  set_TCON_TCON_IP_EN_reg(data)                                           (*((volatile unsigned int*)TCON_TCON_IP_EN_reg)=data)
#define  get_TCON_TCON_IP_EN_reg                                                 (*((volatile unsigned int*)TCON_TCON_IP_EN_reg))
#define  TCON_TCON_IP_EN_tcon_across_frame_en_shift                              (1)
#define  TCON_TCON_IP_EN_tcon_en_shift                                           (0)
#define  TCON_TCON_IP_EN_tcon_across_frame_en_mask                               (0x00000002)
#define  TCON_TCON_IP_EN_tcon_en_mask                                            (0x00000001)
#define  TCON_TCON_IP_EN_tcon_across_frame_en(data)                              (0x00000002&((data)<<1))
#define  TCON_TCON_IP_EN_tcon_en(data)                                           (0x00000001&(data))
#define  TCON_TCON_IP_EN_get_tcon_across_frame_en(data)                          ((0x00000002&(data))>>1)
#define  TCON_TCON_IP_EN_get_tcon_en(data)                                       (0x00000001&(data))

#define  TCON_TCON0_HSE                                                         0x1802D210
#define  TCON_TCON0_HSE_reg_addr                                                 "0xB802D210"
#define  TCON_TCON0_HSE_reg                                                      0xB802D210
#define  TCON_TCON0_HSE_inst_addr                                                "0x0002"
#define  set_TCON_TCON0_HSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON0_HSE_reg)=data)
#define  get_TCON_TCON0_HSE_reg                                                  (*((volatile unsigned int*)TCON_TCON0_HSE_reg))
#define  TCON_TCON0_HSE_dummy_0_shift                                            (31)
#define  TCON_TCON0_HSE_tcon0_hstart_shift                                       (16)
#define  TCON_TCON0_HSE_tcon0_hend_shift                                         (0)
#define  TCON_TCON0_HSE_dummy_0_mask                                             (0x80000000)
#define  TCON_TCON0_HSE_tcon0_hstart_mask                                        (0x7FFF0000)
#define  TCON_TCON0_HSE_tcon0_hend_mask                                          (0x00007FFF)
#define  TCON_TCON0_HSE_dummy_0(data)                                            (0x80000000&((data)<<31))
#define  TCON_TCON0_HSE_tcon0_hstart(data)                                       (0x7FFF0000&((data)<<16))
#define  TCON_TCON0_HSE_tcon0_hend(data)                                         (0x00007FFF&(data))
#define  TCON_TCON0_HSE_get_dummy_0(data)                                        ((0x80000000&(data))>>31)
#define  TCON_TCON0_HSE_get_tcon0_hstart(data)                                   ((0x7FFF0000&(data))>>16)
#define  TCON_TCON0_HSE_get_tcon0_hend(data)                                     (0x00007FFF&(data))

#define  TCON_TCON0_VSE                                                         0x1802D214
#define  TCON_TCON0_VSE_reg_addr                                                 "0xB802D214"
#define  TCON_TCON0_VSE_reg                                                      0xB802D214
#define  TCON_TCON0_VSE_inst_addr                                                "0x0003"
#define  set_TCON_TCON0_VSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON0_VSE_reg)=data)
#define  get_TCON_TCON0_VSE_reg                                                  (*((volatile unsigned int*)TCON_TCON0_VSE_reg))
#define  TCON_TCON0_VSE_tcon0_vstart_shift                                       (16)
#define  TCON_TCON0_VSE_tcon0_vend_shift                                         (0)
#define  TCON_TCON0_VSE_tcon0_vstart_mask                                        (0x1FFF0000)
#define  TCON_TCON0_VSE_tcon0_vend_mask                                          (0x00001FFF)
#define  TCON_TCON0_VSE_tcon0_vstart(data)                                       (0x1FFF0000&((data)<<16))
#define  TCON_TCON0_VSE_tcon0_vend(data)                                         (0x00001FFF&(data))
#define  TCON_TCON0_VSE_get_tcon0_vstart(data)                                   ((0x1FFF0000&(data))>>16)
#define  TCON_TCON0_VSE_get_tcon0_vend(data)                                     (0x00001FFF&(data))

#define  TCON_TCON0_Ctrl                                                        0x1802D218
#define  TCON_TCON0_Ctrl_reg_addr                                                "0xB802D218"
#define  TCON_TCON0_Ctrl_reg                                                     0xB802D218
#define  TCON_TCON0_Ctrl_inst_addr                                               "0x0004"
#define  set_TCON_TCON0_Ctrl_reg(data)                                           (*((volatile unsigned int*)TCON_TCON0_Ctrl_reg)=data)
#define  get_TCON_TCON0_Ctrl_reg                                                 (*((volatile unsigned int*)TCON_TCON0_Ctrl_reg))
#define  TCON_TCON0_Ctrl_tcon0_l_flag_sel_shift                                  (13)
#define  TCON_TCON0_Ctrl_tcon0_off_opt_shift                                     (12)
#define  TCON_TCON0_Ctrl_tcon0_across_ctrl_reset_shift                           (11)
#define  TCON_TCON0_Ctrl_tcon0_mode_shift                                        (8)
#define  TCON_TCON0_Ctrl_tcon0_en_shift                                          (7)
#define  TCON_TCON0_Ctrl_tcon0_inv_shift                                         (6)
#define  TCON_TCON0_Ctrl_tcon0_comb_inv_shift                                    (5)
#define  TCON_TCON0_Ctrl_tcon0_frame_tog_en_shift                                (3)
#define  TCON_TCON0_Ctrl_tcon0_comb_shift                                        (0)
#define  TCON_TCON0_Ctrl_tcon0_l_flag_sel_mask                                   (0x0003E000)
#define  TCON_TCON0_Ctrl_tcon0_off_opt_mask                                      (0x00001000)
#define  TCON_TCON0_Ctrl_tcon0_across_ctrl_reset_mask                            (0x00000800)
#define  TCON_TCON0_Ctrl_tcon0_mode_mask                                         (0x00000700)
#define  TCON_TCON0_Ctrl_tcon0_en_mask                                           (0x00000080)
#define  TCON_TCON0_Ctrl_tcon0_inv_mask                                          (0x00000040)
#define  TCON_TCON0_Ctrl_tcon0_comb_inv_mask                                     (0x00000020)
#define  TCON_TCON0_Ctrl_tcon0_frame_tog_en_mask                                 (0x00000008)
#define  TCON_TCON0_Ctrl_tcon0_comb_mask                                         (0x00000007)
#define  TCON_TCON0_Ctrl_tcon0_l_flag_sel(data)                                  (0x0003E000&((data)<<13))
#define  TCON_TCON0_Ctrl_tcon0_off_opt(data)                                     (0x00001000&((data)<<12))
#define  TCON_TCON0_Ctrl_tcon0_across_ctrl_reset(data)                           (0x00000800&((data)<<11))
#define  TCON_TCON0_Ctrl_tcon0_mode(data)                                        (0x00000700&((data)<<8))
#define  TCON_TCON0_Ctrl_tcon0_en(data)                                          (0x00000080&((data)<<7))
#define  TCON_TCON0_Ctrl_tcon0_inv(data)                                         (0x00000040&((data)<<6))
#define  TCON_TCON0_Ctrl_tcon0_comb_inv(data)                                    (0x00000020&((data)<<5))
#define  TCON_TCON0_Ctrl_tcon0_frame_tog_en(data)                                (0x00000008&((data)<<3))
#define  TCON_TCON0_Ctrl_tcon0_comb(data)                                        (0x00000007&(data))
#define  TCON_TCON0_Ctrl_get_tcon0_l_flag_sel(data)                              ((0x0003E000&(data))>>13)
#define  TCON_TCON0_Ctrl_get_tcon0_off_opt(data)                                 ((0x00001000&(data))>>12)
#define  TCON_TCON0_Ctrl_get_tcon0_across_ctrl_reset(data)                       ((0x00000800&(data))>>11)
#define  TCON_TCON0_Ctrl_get_tcon0_mode(data)                                    ((0x00000700&(data))>>8)
#define  TCON_TCON0_Ctrl_get_tcon0_en(data)                                      ((0x00000080&(data))>>7)
#define  TCON_TCON0_Ctrl_get_tcon0_inv(data)                                     ((0x00000040&(data))>>6)
#define  TCON_TCON0_Ctrl_get_tcon0_comb_inv(data)                                ((0x00000020&(data))>>5)
#define  TCON_TCON0_Ctrl_get_tcon0_frame_tog_en(data)                            ((0x00000008&(data))>>3)
#define  TCON_TCON0_Ctrl_get_tcon0_comb(data)                                    (0x00000007&(data))

#define  TCON_TCON0_ACROSS_LINE_CONTROL3                                        0x1802D21C
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_reg_addr                                "0xB802D21C"
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_reg                                     0xB802D21C
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_inst_addr                               "0x0005"
#define  set_TCON_TCON0_ACROSS_LINE_CONTROL3_reg(data)                           (*((volatile unsigned int*)TCON_TCON0_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON0_ACROSS_LINE_CONTROL3_reg                                 (*((volatile unsigned int*)TCON_TCON0_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_tcon0_across_frame_int_shift            (28)
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_tcon0_across_ctrl3_rp_shift             (16)
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_tcon0_hl_num_shift                      (12)
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_tcon0_across_ctrl3_hp_shift             (0)
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_tcon0_across_frame_int_mask             (0x10000000)
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_tcon0_across_ctrl3_rp_mask              (0x0FFF0000)
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_tcon0_hl_num_mask                       (0x0000F000)
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_tcon0_across_ctrl3_hp_mask              (0x00000FFF)
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_tcon0_across_frame_int(data)            (0x10000000&((data)<<28))
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_tcon0_across_ctrl3_rp(data)             (0x0FFF0000&((data)<<16))
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_tcon0_hl_num(data)                      (0x0000F000&((data)<<12))
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_tcon0_across_ctrl3_hp(data)             (0x00000FFF&(data))
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_get_tcon0_across_frame_int(data)        ((0x10000000&(data))>>28)
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_get_tcon0_across_ctrl3_rp(data)         ((0x0FFF0000&(data))>>16)
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_get_tcon0_hl_num(data)                  ((0x0000F000&(data))>>12)
#define  TCON_TCON0_ACROSS_LINE_CONTROL3_get_tcon0_across_ctrl3_hp(data)         (0x00000FFF&(data))

#define  TCON_TCON0_ACROSS_FRAME_CONTROL                                        0x1802D220
#define  TCON_TCON0_ACROSS_FRAME_CONTROL_reg_addr                                "0xB802D220"
#define  TCON_TCON0_ACROSS_FRAME_CONTROL_reg                                     0xB802D220
#define  TCON_TCON0_ACROSS_FRAME_CONTROL_inst_addr                               "0x0006"
#define  set_TCON_TCON0_ACROSS_FRAME_CONTROL_reg(data)                           (*((volatile unsigned int*)TCON_TCON0_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON0_ACROSS_FRAME_CONTROL_reg                                 (*((volatile unsigned int*)TCON_TCON0_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON0_ACROSS_FRAME_CONTROL_tcon0_frame_lp_shift                    (16)
#define  TCON_TCON0_ACROSS_FRAME_CONTROL_tcon0_frame_hp_shift                    (0)
#define  TCON_TCON0_ACROSS_FRAME_CONTROL_tcon0_frame_lp_mask                     (0x0FFF0000)
#define  TCON_TCON0_ACROSS_FRAME_CONTROL_tcon0_frame_hp_mask                     (0x00000FFF)
#define  TCON_TCON0_ACROSS_FRAME_CONTROL_tcon0_frame_lp(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON0_ACROSS_FRAME_CONTROL_tcon0_frame_hp(data)                    (0x00000FFF&(data))
#define  TCON_TCON0_ACROSS_FRAME_CONTROL_get_tcon0_frame_lp(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON0_ACROSS_FRAME_CONTROL_get_tcon0_frame_hp(data)                (0x00000FFF&(data))

#define  TCON_TCON0_FRAME_HL_CONTROL                                            0x1802D224
#define  TCON_TCON0_FRAME_HL_CONTROL_reg_addr                                    "0xB802D224"
#define  TCON_TCON0_FRAME_HL_CONTROL_reg                                         0xB802D224
#define  TCON_TCON0_FRAME_HL_CONTROL_inst_addr                                   "0x0007"
#define  set_TCON_TCON0_FRAME_HL_CONTROL_reg(data)                               (*((volatile unsigned int*)TCON_TCON0_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON0_FRAME_HL_CONTROL_reg                                     (*((volatile unsigned int*)TCON_TCON0_FRAME_HL_CONTROL_reg))
#define  TCON_TCON0_FRAME_HL_CONTROL_tcon0_frame_offset_shift                    (16)
#define  TCON_TCON0_FRAME_HL_CONTROL_tcon0_hl_shift                              (0)
#define  TCON_TCON0_FRAME_HL_CONTROL_tcon0_frame_offset_mask                     (0x0FFF0000)
#define  TCON_TCON0_FRAME_HL_CONTROL_tcon0_hl_mask                               (0x0000FFFF)
#define  TCON_TCON0_FRAME_HL_CONTROL_tcon0_frame_offset(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON0_FRAME_HL_CONTROL_tcon0_hl(data)                              (0x0000FFFF&(data))
#define  TCON_TCON0_FRAME_HL_CONTROL_get_tcon0_frame_offset(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON0_FRAME_HL_CONTROL_get_tcon0_hl(data)                          (0x0000FFFF&(data))

#define  TCON_TCON1_HSE                                                         0x1802D230
#define  TCON_TCON1_HSE_reg_addr                                                 "0xB802D230"
#define  TCON_TCON1_HSE_reg                                                      0xB802D230
#define  TCON_TCON1_HSE_inst_addr                                                "0x0008"
#define  set_TCON_TCON1_HSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON1_HSE_reg)=data)
#define  get_TCON_TCON1_HSE_reg                                                  (*((volatile unsigned int*)TCON_TCON1_HSE_reg))
#define  TCON_TCON1_HSE_dummy_1_shift                                            (31)
#define  TCON_TCON1_HSE_tcon1_hstart_shift                                       (16)
#define  TCON_TCON1_HSE_tcon1_hend_shift                                         (0)
#define  TCON_TCON1_HSE_dummy_1_mask                                             (0x80000000)
#define  TCON_TCON1_HSE_tcon1_hstart_mask                                        (0x7FFF0000)
#define  TCON_TCON1_HSE_tcon1_hend_mask                                          (0x00007FFF)
#define  TCON_TCON1_HSE_dummy_1(data)                                            (0x80000000&((data)<<31))
#define  TCON_TCON1_HSE_tcon1_hstart(data)                                       (0x7FFF0000&((data)<<16))
#define  TCON_TCON1_HSE_tcon1_hend(data)                                         (0x00007FFF&(data))
#define  TCON_TCON1_HSE_get_dummy_1(data)                                        ((0x80000000&(data))>>31)
#define  TCON_TCON1_HSE_get_tcon1_hstart(data)                                   ((0x7FFF0000&(data))>>16)
#define  TCON_TCON1_HSE_get_tcon1_hend(data)                                     (0x00007FFF&(data))

#define  TCON_TCON1_VSE                                                         0x1802D234
#define  TCON_TCON1_VSE_reg_addr                                                 "0xB802D234"
#define  TCON_TCON1_VSE_reg                                                      0xB802D234
#define  TCON_TCON1_VSE_inst_addr                                                "0x0009"
#define  set_TCON_TCON1_VSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON1_VSE_reg)=data)
#define  get_TCON_TCON1_VSE_reg                                                  (*((volatile unsigned int*)TCON_TCON1_VSE_reg))
#define  TCON_TCON1_VSE_tcon1_vstart_shift                                       (16)
#define  TCON_TCON1_VSE_tcon1_vend_shift                                         (0)
#define  TCON_TCON1_VSE_tcon1_vstart_mask                                        (0x1FFF0000)
#define  TCON_TCON1_VSE_tcon1_vend_mask                                          (0x00001FFF)
#define  TCON_TCON1_VSE_tcon1_vstart(data)                                       (0x1FFF0000&((data)<<16))
#define  TCON_TCON1_VSE_tcon1_vend(data)                                         (0x00001FFF&(data))
#define  TCON_TCON1_VSE_get_tcon1_vstart(data)                                   ((0x1FFF0000&(data))>>16)
#define  TCON_TCON1_VSE_get_tcon1_vend(data)                                     (0x00001FFF&(data))

#define  TCON_TCON1_Ctrl                                                        0x1802D238
#define  TCON_TCON1_Ctrl_reg_addr                                                "0xB802D238"
#define  TCON_TCON1_Ctrl_reg                                                     0xB802D238
#define  TCON_TCON1_Ctrl_inst_addr                                               "0x000A"
#define  set_TCON_TCON1_Ctrl_reg(data)                                           (*((volatile unsigned int*)TCON_TCON1_Ctrl_reg)=data)
#define  get_TCON_TCON1_Ctrl_reg                                                 (*((volatile unsigned int*)TCON_TCON1_Ctrl_reg))
#define  TCON_TCON1_Ctrl_tcon1_l_flag_sel_shift                                  (13)
#define  TCON_TCON1_Ctrl_tcon1_off_opt_shift                                     (12)
#define  TCON_TCON1_Ctrl_tcon1_across_ctrl_reset_shift                           (11)
#define  TCON_TCON1_Ctrl_tcon1_mode_shift                                        (8)
#define  TCON_TCON1_Ctrl_tcon1_en_shift                                          (7)
#define  TCON_TCON1_Ctrl_tcon1_inv_shift                                         (6)
#define  TCON_TCON1_Ctrl_tcon1_comb_inv_shift                                    (5)
#define  TCON_TCON1_Ctrl_tcon1_frame_tog_en_shift                                (3)
#define  TCON_TCON1_Ctrl_tcon1_comb_shift                                        (0)
#define  TCON_TCON1_Ctrl_tcon1_l_flag_sel_mask                                   (0x0003E000)
#define  TCON_TCON1_Ctrl_tcon1_off_opt_mask                                      (0x00001000)
#define  TCON_TCON1_Ctrl_tcon1_across_ctrl_reset_mask                            (0x00000800)
#define  TCON_TCON1_Ctrl_tcon1_mode_mask                                         (0x00000700)
#define  TCON_TCON1_Ctrl_tcon1_en_mask                                           (0x00000080)
#define  TCON_TCON1_Ctrl_tcon1_inv_mask                                          (0x00000040)
#define  TCON_TCON1_Ctrl_tcon1_comb_inv_mask                                     (0x00000020)
#define  TCON_TCON1_Ctrl_tcon1_frame_tog_en_mask                                 (0x00000008)
#define  TCON_TCON1_Ctrl_tcon1_comb_mask                                         (0x00000007)
#define  TCON_TCON1_Ctrl_tcon1_l_flag_sel(data)                                  (0x0003E000&((data)<<13))
#define  TCON_TCON1_Ctrl_tcon1_off_opt(data)                                     (0x00001000&((data)<<12))
#define  TCON_TCON1_Ctrl_tcon1_across_ctrl_reset(data)                           (0x00000800&((data)<<11))
#define  TCON_TCON1_Ctrl_tcon1_mode(data)                                        (0x00000700&((data)<<8))
#define  TCON_TCON1_Ctrl_tcon1_en(data)                                          (0x00000080&((data)<<7))
#define  TCON_TCON1_Ctrl_tcon1_inv(data)                                         (0x00000040&((data)<<6))
#define  TCON_TCON1_Ctrl_tcon1_comb_inv(data)                                    (0x00000020&((data)<<5))
#define  TCON_TCON1_Ctrl_tcon1_frame_tog_en(data)                                (0x00000008&((data)<<3))
#define  TCON_TCON1_Ctrl_tcon1_comb(data)                                        (0x00000007&(data))
#define  TCON_TCON1_Ctrl_get_tcon1_l_flag_sel(data)                              ((0x0003E000&(data))>>13)
#define  TCON_TCON1_Ctrl_get_tcon1_off_opt(data)                                 ((0x00001000&(data))>>12)
#define  TCON_TCON1_Ctrl_get_tcon1_across_ctrl_reset(data)                       ((0x00000800&(data))>>11)
#define  TCON_TCON1_Ctrl_get_tcon1_mode(data)                                    ((0x00000700&(data))>>8)
#define  TCON_TCON1_Ctrl_get_tcon1_en(data)                                      ((0x00000080&(data))>>7)
#define  TCON_TCON1_Ctrl_get_tcon1_inv(data)                                     ((0x00000040&(data))>>6)
#define  TCON_TCON1_Ctrl_get_tcon1_comb_inv(data)                                ((0x00000020&(data))>>5)
#define  TCON_TCON1_Ctrl_get_tcon1_frame_tog_en(data)                            ((0x00000008&(data))>>3)
#define  TCON_TCON1_Ctrl_get_tcon1_comb(data)                                    (0x00000007&(data))

#define  TCON_TCON1_ACROSS_LINE_CONTROL3                                        0x1802D23C
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_reg_addr                                "0xB802D23C"
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_reg                                     0xB802D23C
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_inst_addr                               "0x000B"
#define  set_TCON_TCON1_ACROSS_LINE_CONTROL3_reg(data)                           (*((volatile unsigned int*)TCON_TCON1_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON1_ACROSS_LINE_CONTROL3_reg                                 (*((volatile unsigned int*)TCON_TCON1_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_tcon1_across_frame_int_shift            (28)
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_tcon1_across_ctrl3_rp_shift             (16)
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_tcon1_hl_num_shift                      (12)
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_tcon1_across_ctrl3_hp_shift             (0)
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_tcon1_across_frame_int_mask             (0x10000000)
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_tcon1_across_ctrl3_rp_mask              (0x0FFF0000)
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_tcon1_hl_num_mask                       (0x0000F000)
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_tcon1_across_ctrl3_hp_mask              (0x00000FFF)
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_tcon1_across_frame_int(data)            (0x10000000&((data)<<28))
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_tcon1_across_ctrl3_rp(data)             (0x0FFF0000&((data)<<16))
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_tcon1_hl_num(data)                      (0x0000F000&((data)<<12))
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_tcon1_across_ctrl3_hp(data)             (0x00000FFF&(data))
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_get_tcon1_across_frame_int(data)        ((0x10000000&(data))>>28)
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_get_tcon1_across_ctrl3_rp(data)         ((0x0FFF0000&(data))>>16)
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_get_tcon1_hl_num(data)                  ((0x0000F000&(data))>>12)
#define  TCON_TCON1_ACROSS_LINE_CONTROL3_get_tcon1_across_ctrl3_hp(data)         (0x00000FFF&(data))

#define  TCON_TCON1_ACROSS_FRAME_CONTROL                                        0x1802D240
#define  TCON_TCON1_ACROSS_FRAME_CONTROL_reg_addr                                "0xB802D240"
#define  TCON_TCON1_ACROSS_FRAME_CONTROL_reg                                     0xB802D240
#define  TCON_TCON1_ACROSS_FRAME_CONTROL_inst_addr                               "0x000C"
#define  set_TCON_TCON1_ACROSS_FRAME_CONTROL_reg(data)                           (*((volatile unsigned int*)TCON_TCON1_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON1_ACROSS_FRAME_CONTROL_reg                                 (*((volatile unsigned int*)TCON_TCON1_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON1_ACROSS_FRAME_CONTROL_tcon1_frame_lp_shift                    (16)
#define  TCON_TCON1_ACROSS_FRAME_CONTROL_tcon1_frame_hp_shift                    (0)
#define  TCON_TCON1_ACROSS_FRAME_CONTROL_tcon1_frame_lp_mask                     (0x0FFF0000)
#define  TCON_TCON1_ACROSS_FRAME_CONTROL_tcon1_frame_hp_mask                     (0x00000FFF)
#define  TCON_TCON1_ACROSS_FRAME_CONTROL_tcon1_frame_lp(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON1_ACROSS_FRAME_CONTROL_tcon1_frame_hp(data)                    (0x00000FFF&(data))
#define  TCON_TCON1_ACROSS_FRAME_CONTROL_get_tcon1_frame_lp(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON1_ACROSS_FRAME_CONTROL_get_tcon1_frame_hp(data)                (0x00000FFF&(data))

#define  TCON_TCON1_FRAME_HL_CONTROL                                            0x1802D244
#define  TCON_TCON1_FRAME_HL_CONTROL_reg_addr                                    "0xB802D244"
#define  TCON_TCON1_FRAME_HL_CONTROL_reg                                         0xB802D244
#define  TCON_TCON1_FRAME_HL_CONTROL_inst_addr                                   "0x000D"
#define  set_TCON_TCON1_FRAME_HL_CONTROL_reg(data)                               (*((volatile unsigned int*)TCON_TCON1_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON1_FRAME_HL_CONTROL_reg                                     (*((volatile unsigned int*)TCON_TCON1_FRAME_HL_CONTROL_reg))
#define  TCON_TCON1_FRAME_HL_CONTROL_tcon1_frame_offset_shift                    (16)
#define  TCON_TCON1_FRAME_HL_CONTROL_tcon1_hl_shift                              (0)
#define  TCON_TCON1_FRAME_HL_CONTROL_tcon1_frame_offset_mask                     (0x0FFF0000)
#define  TCON_TCON1_FRAME_HL_CONTROL_tcon1_hl_mask                               (0x0000FFFF)
#define  TCON_TCON1_FRAME_HL_CONTROL_tcon1_frame_offset(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON1_FRAME_HL_CONTROL_tcon1_hl(data)                              (0x0000FFFF&(data))
#define  TCON_TCON1_FRAME_HL_CONTROL_get_tcon1_frame_offset(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON1_FRAME_HL_CONTROL_get_tcon1_hl(data)                          (0x0000FFFF&(data))

#define  TCON_TCON2_HSE                                                         0x1802D250
#define  TCON_TCON2_HSE_reg_addr                                                 "0xB802D250"
#define  TCON_TCON2_HSE_reg                                                      0xB802D250
#define  TCON_TCON2_HSE_inst_addr                                                "0x000E"
#define  set_TCON_TCON2_HSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON2_HSE_reg)=data)
#define  get_TCON_TCON2_HSE_reg                                                  (*((volatile unsigned int*)TCON_TCON2_HSE_reg))
#define  TCON_TCON2_HSE_dummy_2_shift                                            (31)
#define  TCON_TCON2_HSE_tcon2_hstart_shift                                       (16)
#define  TCON_TCON2_HSE_tcon2_hend_shift                                         (0)
#define  TCON_TCON2_HSE_dummy_2_mask                                             (0x80000000)
#define  TCON_TCON2_HSE_tcon2_hstart_mask                                        (0x7FFF0000)
#define  TCON_TCON2_HSE_tcon2_hend_mask                                          (0x00007FFF)
#define  TCON_TCON2_HSE_dummy_2(data)                                            (0x80000000&((data)<<31))
#define  TCON_TCON2_HSE_tcon2_hstart(data)                                       (0x7FFF0000&((data)<<16))
#define  TCON_TCON2_HSE_tcon2_hend(data)                                         (0x00007FFF&(data))
#define  TCON_TCON2_HSE_get_dummy_2(data)                                        ((0x80000000&(data))>>31)
#define  TCON_TCON2_HSE_get_tcon2_hstart(data)                                   ((0x7FFF0000&(data))>>16)
#define  TCON_TCON2_HSE_get_tcon2_hend(data)                                     (0x00007FFF&(data))

#define  TCON_TCON2_VSE                                                         0x1802D254
#define  TCON_TCON2_VSE_reg_addr                                                 "0xB802D254"
#define  TCON_TCON2_VSE_reg                                                      0xB802D254
#define  TCON_TCON2_VSE_inst_addr                                                "0x000F"
#define  set_TCON_TCON2_VSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON2_VSE_reg)=data)
#define  get_TCON_TCON2_VSE_reg                                                  (*((volatile unsigned int*)TCON_TCON2_VSE_reg))
#define  TCON_TCON2_VSE_tcon2_vstart_shift                                       (16)
#define  TCON_TCON2_VSE_tcon2_vend_shift                                         (0)
#define  TCON_TCON2_VSE_tcon2_vstart_mask                                        (0x1FFF0000)
#define  TCON_TCON2_VSE_tcon2_vend_mask                                          (0x00001FFF)
#define  TCON_TCON2_VSE_tcon2_vstart(data)                                       (0x1FFF0000&((data)<<16))
#define  TCON_TCON2_VSE_tcon2_vend(data)                                         (0x00001FFF&(data))
#define  TCON_TCON2_VSE_get_tcon2_vstart(data)                                   ((0x1FFF0000&(data))>>16)
#define  TCON_TCON2_VSE_get_tcon2_vend(data)                                     (0x00001FFF&(data))

#define  TCON_TCON2_Ctrl                                                        0x1802D258
#define  TCON_TCON2_Ctrl_reg_addr                                                "0xB802D258"
#define  TCON_TCON2_Ctrl_reg                                                     0xB802D258
#define  TCON_TCON2_Ctrl_inst_addr                                               "0x0010"
#define  set_TCON_TCON2_Ctrl_reg(data)                                           (*((volatile unsigned int*)TCON_TCON2_Ctrl_reg)=data)
#define  get_TCON_TCON2_Ctrl_reg                                                 (*((volatile unsigned int*)TCON_TCON2_Ctrl_reg))
#define  TCON_TCON2_Ctrl_tcon2_l_flag_sel_shift                                  (13)
#define  TCON_TCON2_Ctrl_tcon2_off_opt_shift                                     (12)
#define  TCON_TCON2_Ctrl_tcon2_across_ctrl_reset_shift                           (11)
#define  TCON_TCON2_Ctrl_tcon2_mode_shift                                        (8)
#define  TCON_TCON2_Ctrl_tcon2_en_shift                                          (7)
#define  TCON_TCON2_Ctrl_tcon2_inv_shift                                         (6)
#define  TCON_TCON2_Ctrl_tcon2_comb_inv_shift                                    (5)
#define  TCON_TCON2_Ctrl_tcon2_frame_tog_en_shift                                (3)
#define  TCON_TCON2_Ctrl_tcon2_comb_shift                                        (0)
#define  TCON_TCON2_Ctrl_tcon2_l_flag_sel_mask                                   (0x0003E000)
#define  TCON_TCON2_Ctrl_tcon2_off_opt_mask                                      (0x00001000)
#define  TCON_TCON2_Ctrl_tcon2_across_ctrl_reset_mask                            (0x00000800)
#define  TCON_TCON2_Ctrl_tcon2_mode_mask                                         (0x00000700)
#define  TCON_TCON2_Ctrl_tcon2_en_mask                                           (0x00000080)
#define  TCON_TCON2_Ctrl_tcon2_inv_mask                                          (0x00000040)
#define  TCON_TCON2_Ctrl_tcon2_comb_inv_mask                                     (0x00000020)
#define  TCON_TCON2_Ctrl_tcon2_frame_tog_en_mask                                 (0x00000008)
#define  TCON_TCON2_Ctrl_tcon2_comb_mask                                         (0x00000007)
#define  TCON_TCON2_Ctrl_tcon2_l_flag_sel(data)                                  (0x0003E000&((data)<<13))
#define  TCON_TCON2_Ctrl_tcon2_off_opt(data)                                     (0x00001000&((data)<<12))
#define  TCON_TCON2_Ctrl_tcon2_across_ctrl_reset(data)                           (0x00000800&((data)<<11))
#define  TCON_TCON2_Ctrl_tcon2_mode(data)                                        (0x00000700&((data)<<8))
#define  TCON_TCON2_Ctrl_tcon2_en(data)                                          (0x00000080&((data)<<7))
#define  TCON_TCON2_Ctrl_tcon2_inv(data)                                         (0x00000040&((data)<<6))
#define  TCON_TCON2_Ctrl_tcon2_comb_inv(data)                                    (0x00000020&((data)<<5))
#define  TCON_TCON2_Ctrl_tcon2_frame_tog_en(data)                                (0x00000008&((data)<<3))
#define  TCON_TCON2_Ctrl_tcon2_comb(data)                                        (0x00000007&(data))
#define  TCON_TCON2_Ctrl_get_tcon2_l_flag_sel(data)                              ((0x0003E000&(data))>>13)
#define  TCON_TCON2_Ctrl_get_tcon2_off_opt(data)                                 ((0x00001000&(data))>>12)
#define  TCON_TCON2_Ctrl_get_tcon2_across_ctrl_reset(data)                       ((0x00000800&(data))>>11)
#define  TCON_TCON2_Ctrl_get_tcon2_mode(data)                                    ((0x00000700&(data))>>8)
#define  TCON_TCON2_Ctrl_get_tcon2_en(data)                                      ((0x00000080&(data))>>7)
#define  TCON_TCON2_Ctrl_get_tcon2_inv(data)                                     ((0x00000040&(data))>>6)
#define  TCON_TCON2_Ctrl_get_tcon2_comb_inv(data)                                ((0x00000020&(data))>>5)
#define  TCON_TCON2_Ctrl_get_tcon2_frame_tog_en(data)                            ((0x00000008&(data))>>3)
#define  TCON_TCON2_Ctrl_get_tcon2_comb(data)                                    (0x00000007&(data))

#define  TCON_TCON2_ACROSS_LINE_CONTROL3                                        0x1802D25C
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_reg_addr                                "0xB802D25C"
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_reg                                     0xB802D25C
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_inst_addr                               "0x0011"
#define  set_TCON_TCON2_ACROSS_LINE_CONTROL3_reg(data)                           (*((volatile unsigned int*)TCON_TCON2_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON2_ACROSS_LINE_CONTROL3_reg                                 (*((volatile unsigned int*)TCON_TCON2_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_tcon2_across_frame_int_shift            (28)
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_tcon2_across_ctrl3_rp_shift             (16)
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_tcon2_hl_num_shift                      (12)
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_tcon2_across_ctrl3_hp_shift             (0)
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_tcon2_across_frame_int_mask             (0x10000000)
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_tcon2_across_ctrl3_rp_mask              (0x0FFF0000)
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_tcon2_hl_num_mask                       (0x0000F000)
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_tcon2_across_ctrl3_hp_mask              (0x00000FFF)
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_tcon2_across_frame_int(data)            (0x10000000&((data)<<28))
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_tcon2_across_ctrl3_rp(data)             (0x0FFF0000&((data)<<16))
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_tcon2_hl_num(data)                      (0x0000F000&((data)<<12))
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_tcon2_across_ctrl3_hp(data)             (0x00000FFF&(data))
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_get_tcon2_across_frame_int(data)        ((0x10000000&(data))>>28)
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_get_tcon2_across_ctrl3_rp(data)         ((0x0FFF0000&(data))>>16)
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_get_tcon2_hl_num(data)                  ((0x0000F000&(data))>>12)
#define  TCON_TCON2_ACROSS_LINE_CONTROL3_get_tcon2_across_ctrl3_hp(data)         (0x00000FFF&(data))

#define  TCON_TCON2_ACROSS_FRAME_CONTROL                                        0x1802D260
#define  TCON_TCON2_ACROSS_FRAME_CONTROL_reg_addr                                "0xB802D260"
#define  TCON_TCON2_ACROSS_FRAME_CONTROL_reg                                     0xB802D260
#define  TCON_TCON2_ACROSS_FRAME_CONTROL_inst_addr                               "0x0012"
#define  set_TCON_TCON2_ACROSS_FRAME_CONTROL_reg(data)                           (*((volatile unsigned int*)TCON_TCON2_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON2_ACROSS_FRAME_CONTROL_reg                                 (*((volatile unsigned int*)TCON_TCON2_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON2_ACROSS_FRAME_CONTROL_tcon2_frame_lp_shift                    (16)
#define  TCON_TCON2_ACROSS_FRAME_CONTROL_tcon2_frame_hp_shift                    (0)
#define  TCON_TCON2_ACROSS_FRAME_CONTROL_tcon2_frame_lp_mask                     (0x0FFF0000)
#define  TCON_TCON2_ACROSS_FRAME_CONTROL_tcon2_frame_hp_mask                     (0x00000FFF)
#define  TCON_TCON2_ACROSS_FRAME_CONTROL_tcon2_frame_lp(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON2_ACROSS_FRAME_CONTROL_tcon2_frame_hp(data)                    (0x00000FFF&(data))
#define  TCON_TCON2_ACROSS_FRAME_CONTROL_get_tcon2_frame_lp(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON2_ACROSS_FRAME_CONTROL_get_tcon2_frame_hp(data)                (0x00000FFF&(data))

#define  TCON_TCON2_FRAME_HL_CONTROL                                            0x1802D264
#define  TCON_TCON2_FRAME_HL_CONTROL_reg_addr                                    "0xB802D264"
#define  TCON_TCON2_FRAME_HL_CONTROL_reg                                         0xB802D264
#define  TCON_TCON2_FRAME_HL_CONTROL_inst_addr                                   "0x0013"
#define  set_TCON_TCON2_FRAME_HL_CONTROL_reg(data)                               (*((volatile unsigned int*)TCON_TCON2_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON2_FRAME_HL_CONTROL_reg                                     (*((volatile unsigned int*)TCON_TCON2_FRAME_HL_CONTROL_reg))
#define  TCON_TCON2_FRAME_HL_CONTROL_tcon2_frame_offset_shift                    (16)
#define  TCON_TCON2_FRAME_HL_CONTROL_tcon2_hl_shift                              (0)
#define  TCON_TCON2_FRAME_HL_CONTROL_tcon2_frame_offset_mask                     (0x0FFF0000)
#define  TCON_TCON2_FRAME_HL_CONTROL_tcon2_hl_mask                               (0x0000FFFF)
#define  TCON_TCON2_FRAME_HL_CONTROL_tcon2_frame_offset(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON2_FRAME_HL_CONTROL_tcon2_hl(data)                              (0x0000FFFF&(data))
#define  TCON_TCON2_FRAME_HL_CONTROL_get_tcon2_frame_offset(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON2_FRAME_HL_CONTROL_get_tcon2_hl(data)                          (0x0000FFFF&(data))

#define  TCON_TCON3_HSE                                                         0x1802D270
#define  TCON_TCON3_HSE_reg_addr                                                 "0xB802D270"
#define  TCON_TCON3_HSE_reg                                                      0xB802D270
#define  TCON_TCON3_HSE_inst_addr                                                "0x0014"
#define  set_TCON_TCON3_HSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON3_HSE_reg)=data)
#define  get_TCON_TCON3_HSE_reg                                                  (*((volatile unsigned int*)TCON_TCON3_HSE_reg))
#define  TCON_TCON3_HSE_dummy_3_shift                                            (31)
#define  TCON_TCON3_HSE_tcon3_hstart_shift                                       (16)
#define  TCON_TCON3_HSE_tcon3_hend_shift                                         (0)
#define  TCON_TCON3_HSE_dummy_3_mask                                             (0x80000000)
#define  TCON_TCON3_HSE_tcon3_hstart_mask                                        (0x7FFF0000)
#define  TCON_TCON3_HSE_tcon3_hend_mask                                          (0x00007FFF)
#define  TCON_TCON3_HSE_dummy_3(data)                                            (0x80000000&((data)<<31))
#define  TCON_TCON3_HSE_tcon3_hstart(data)                                       (0x7FFF0000&((data)<<16))
#define  TCON_TCON3_HSE_tcon3_hend(data)                                         (0x00007FFF&(data))
#define  TCON_TCON3_HSE_get_dummy_3(data)                                        ((0x80000000&(data))>>31)
#define  TCON_TCON3_HSE_get_tcon3_hstart(data)                                   ((0x7FFF0000&(data))>>16)
#define  TCON_TCON3_HSE_get_tcon3_hend(data)                                     (0x00007FFF&(data))

#define  TCON_TCON3_VSE                                                         0x1802D274
#define  TCON_TCON3_VSE_reg_addr                                                 "0xB802D274"
#define  TCON_TCON3_VSE_reg                                                      0xB802D274
#define  TCON_TCON3_VSE_inst_addr                                                "0x0015"
#define  set_TCON_TCON3_VSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON3_VSE_reg)=data)
#define  get_TCON_TCON3_VSE_reg                                                  (*((volatile unsigned int*)TCON_TCON3_VSE_reg))
#define  TCON_TCON3_VSE_tcon3_vstart_shift                                       (16)
#define  TCON_TCON3_VSE_tcon3_vend_shift                                         (0)
#define  TCON_TCON3_VSE_tcon3_vstart_mask                                        (0x1FFF0000)
#define  TCON_TCON3_VSE_tcon3_vend_mask                                          (0x00001FFF)
#define  TCON_TCON3_VSE_tcon3_vstart(data)                                       (0x1FFF0000&((data)<<16))
#define  TCON_TCON3_VSE_tcon3_vend(data)                                         (0x00001FFF&(data))
#define  TCON_TCON3_VSE_get_tcon3_vstart(data)                                   ((0x1FFF0000&(data))>>16)
#define  TCON_TCON3_VSE_get_tcon3_vend(data)                                     (0x00001FFF&(data))

#define  TCON_TCON3_Ctrl                                                        0x1802D278
#define  TCON_TCON3_Ctrl_reg_addr                                                "0xB802D278"
#define  TCON_TCON3_Ctrl_reg                                                     0xB802D278
#define  TCON_TCON3_Ctrl_inst_addr                                               "0x0016"
#define  set_TCON_TCON3_Ctrl_reg(data)                                           (*((volatile unsigned int*)TCON_TCON3_Ctrl_reg)=data)
#define  get_TCON_TCON3_Ctrl_reg                                                 (*((volatile unsigned int*)TCON_TCON3_Ctrl_reg))
#define  TCON_TCON3_Ctrl_tcon3_l_flag_sel_shift                                  (13)
#define  TCON_TCON3_Ctrl_tcon3_off_opt_shift                                     (12)
#define  TCON_TCON3_Ctrl_tcon3_across_ctrl_reset_shift                           (11)
#define  TCON_TCON3_Ctrl_tcon3_mode_shift                                        (8)
#define  TCON_TCON3_Ctrl_tcon3_en_shift                                          (7)
#define  TCON_TCON3_Ctrl_tcon3_inv_shift                                         (6)
#define  TCON_TCON3_Ctrl_tcon3_comb_inv_shift                                    (5)
#define  TCON_TCON3_Ctrl_tcon3_frame_tog_en_shift                                (3)
#define  TCON_TCON3_Ctrl_tcon3_comb_shift                                        (0)
#define  TCON_TCON3_Ctrl_tcon3_l_flag_sel_mask                                   (0x0003E000)
#define  TCON_TCON3_Ctrl_tcon3_off_opt_mask                                      (0x00001000)
#define  TCON_TCON3_Ctrl_tcon3_across_ctrl_reset_mask                            (0x00000800)
#define  TCON_TCON3_Ctrl_tcon3_mode_mask                                         (0x00000700)
#define  TCON_TCON3_Ctrl_tcon3_en_mask                                           (0x00000080)
#define  TCON_TCON3_Ctrl_tcon3_inv_mask                                          (0x00000040)
#define  TCON_TCON3_Ctrl_tcon3_comb_inv_mask                                     (0x00000020)
#define  TCON_TCON3_Ctrl_tcon3_frame_tog_en_mask                                 (0x00000008)
#define  TCON_TCON3_Ctrl_tcon3_comb_mask                                         (0x00000007)
#define  TCON_TCON3_Ctrl_tcon3_l_flag_sel(data)                                  (0x0003E000&((data)<<13))
#define  TCON_TCON3_Ctrl_tcon3_off_opt(data)                                     (0x00001000&((data)<<12))
#define  TCON_TCON3_Ctrl_tcon3_across_ctrl_reset(data)                           (0x00000800&((data)<<11))
#define  TCON_TCON3_Ctrl_tcon3_mode(data)                                        (0x00000700&((data)<<8))
#define  TCON_TCON3_Ctrl_tcon3_en(data)                                          (0x00000080&((data)<<7))
#define  TCON_TCON3_Ctrl_tcon3_inv(data)                                         (0x00000040&((data)<<6))
#define  TCON_TCON3_Ctrl_tcon3_comb_inv(data)                                    (0x00000020&((data)<<5))
#define  TCON_TCON3_Ctrl_tcon3_frame_tog_en(data)                                (0x00000008&((data)<<3))
#define  TCON_TCON3_Ctrl_tcon3_comb(data)                                        (0x00000007&(data))
#define  TCON_TCON3_Ctrl_get_tcon3_l_flag_sel(data)                              ((0x0003E000&(data))>>13)
#define  TCON_TCON3_Ctrl_get_tcon3_off_opt(data)                                 ((0x00001000&(data))>>12)
#define  TCON_TCON3_Ctrl_get_tcon3_across_ctrl_reset(data)                       ((0x00000800&(data))>>11)
#define  TCON_TCON3_Ctrl_get_tcon3_mode(data)                                    ((0x00000700&(data))>>8)
#define  TCON_TCON3_Ctrl_get_tcon3_en(data)                                      ((0x00000080&(data))>>7)
#define  TCON_TCON3_Ctrl_get_tcon3_inv(data)                                     ((0x00000040&(data))>>6)
#define  TCON_TCON3_Ctrl_get_tcon3_comb_inv(data)                                ((0x00000020&(data))>>5)
#define  TCON_TCON3_Ctrl_get_tcon3_frame_tog_en(data)                            ((0x00000008&(data))>>3)
#define  TCON_TCON3_Ctrl_get_tcon3_comb(data)                                    (0x00000007&(data))

#define  TCON_TCON3_ACROSS_LINE_CONTROL3                                        0x1802D27C
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_reg_addr                                "0xB802D27C"
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_reg                                     0xB802D27C
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_inst_addr                               "0x0017"
#define  set_TCON_TCON3_ACROSS_LINE_CONTROL3_reg(data)                           (*((volatile unsigned int*)TCON_TCON3_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON3_ACROSS_LINE_CONTROL3_reg                                 (*((volatile unsigned int*)TCON_TCON3_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_tcon3_across_frame_int_shift            (28)
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_tcon3_across_ctrl3_rp_shift             (16)
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_tcon3_hl_num_shift                      (12)
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_tcon3_across_ctrl3_hp_shift             (0)
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_tcon3_across_frame_int_mask             (0x10000000)
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_tcon3_across_ctrl3_rp_mask              (0x0FFF0000)
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_tcon3_hl_num_mask                       (0x0000F000)
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_tcon3_across_ctrl3_hp_mask              (0x00000FFF)
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_tcon3_across_frame_int(data)            (0x10000000&((data)<<28))
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_tcon3_across_ctrl3_rp(data)             (0x0FFF0000&((data)<<16))
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_tcon3_hl_num(data)                      (0x0000F000&((data)<<12))
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_tcon3_across_ctrl3_hp(data)             (0x00000FFF&(data))
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_get_tcon3_across_frame_int(data)        ((0x10000000&(data))>>28)
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_get_tcon3_across_ctrl3_rp(data)         ((0x0FFF0000&(data))>>16)
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_get_tcon3_hl_num(data)                  ((0x0000F000&(data))>>12)
#define  TCON_TCON3_ACROSS_LINE_CONTROL3_get_tcon3_across_ctrl3_hp(data)         (0x00000FFF&(data))

#define  TCON_TCON3_ACROSS_FRAME_CONTROL                                        0x1802D280
#define  TCON_TCON3_ACROSS_FRAME_CONTROL_reg_addr                                "0xB802D280"
#define  TCON_TCON3_ACROSS_FRAME_CONTROL_reg                                     0xB802D280
#define  TCON_TCON3_ACROSS_FRAME_CONTROL_inst_addr                               "0x0018"
#define  set_TCON_TCON3_ACROSS_FRAME_CONTROL_reg(data)                           (*((volatile unsigned int*)TCON_TCON3_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON3_ACROSS_FRAME_CONTROL_reg                                 (*((volatile unsigned int*)TCON_TCON3_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON3_ACROSS_FRAME_CONTROL_tcon3_frame_lp_shift                    (16)
#define  TCON_TCON3_ACROSS_FRAME_CONTROL_tcon3_frame_hp_shift                    (0)
#define  TCON_TCON3_ACROSS_FRAME_CONTROL_tcon3_frame_lp_mask                     (0x0FFF0000)
#define  TCON_TCON3_ACROSS_FRAME_CONTROL_tcon3_frame_hp_mask                     (0x00000FFF)
#define  TCON_TCON3_ACROSS_FRAME_CONTROL_tcon3_frame_lp(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON3_ACROSS_FRAME_CONTROL_tcon3_frame_hp(data)                    (0x00000FFF&(data))
#define  TCON_TCON3_ACROSS_FRAME_CONTROL_get_tcon3_frame_lp(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON3_ACROSS_FRAME_CONTROL_get_tcon3_frame_hp(data)                (0x00000FFF&(data))

#define  TCON_TCON3_FRAME_HL_CONTROL                                            0x1802D284
#define  TCON_TCON3_FRAME_HL_CONTROL_reg_addr                                    "0xB802D284"
#define  TCON_TCON3_FRAME_HL_CONTROL_reg                                         0xB802D284
#define  TCON_TCON3_FRAME_HL_CONTROL_inst_addr                                   "0x0019"
#define  set_TCON_TCON3_FRAME_HL_CONTROL_reg(data)                               (*((volatile unsigned int*)TCON_TCON3_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON3_FRAME_HL_CONTROL_reg                                     (*((volatile unsigned int*)TCON_TCON3_FRAME_HL_CONTROL_reg))
#define  TCON_TCON3_FRAME_HL_CONTROL_tcon3_frame_offset_shift                    (16)
#define  TCON_TCON3_FRAME_HL_CONTROL_tcon3_hl_shift                              (0)
#define  TCON_TCON3_FRAME_HL_CONTROL_tcon3_frame_offset_mask                     (0x0FFF0000)
#define  TCON_TCON3_FRAME_HL_CONTROL_tcon3_hl_mask                               (0x0000FFFF)
#define  TCON_TCON3_FRAME_HL_CONTROL_tcon3_frame_offset(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON3_FRAME_HL_CONTROL_tcon3_hl(data)                              (0x0000FFFF&(data))
#define  TCON_TCON3_FRAME_HL_CONTROL_get_tcon3_frame_offset(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON3_FRAME_HL_CONTROL_get_tcon3_hl(data)                          (0x0000FFFF&(data))

#define  TCON_TCON4_HSE                                                         0x1802D290
#define  TCON_TCON4_HSE_reg_addr                                                 "0xB802D290"
#define  TCON_TCON4_HSE_reg                                                      0xB802D290
#define  TCON_TCON4_HSE_inst_addr                                                "0x001A"
#define  set_TCON_TCON4_HSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON4_HSE_reg)=data)
#define  get_TCON_TCON4_HSE_reg                                                  (*((volatile unsigned int*)TCON_TCON4_HSE_reg))
#define  TCON_TCON4_HSE_dummy_4_shift                                            (31)
#define  TCON_TCON4_HSE_tcon4_hstart_shift                                       (16)
#define  TCON_TCON4_HSE_tcon4_hend_shift                                         (0)
#define  TCON_TCON4_HSE_dummy_4_mask                                             (0x80000000)
#define  TCON_TCON4_HSE_tcon4_hstart_mask                                        (0x7FFF0000)
#define  TCON_TCON4_HSE_tcon4_hend_mask                                          (0x00007FFF)
#define  TCON_TCON4_HSE_dummy_4(data)                                            (0x80000000&((data)<<31))
#define  TCON_TCON4_HSE_tcon4_hstart(data)                                       (0x7FFF0000&((data)<<16))
#define  TCON_TCON4_HSE_tcon4_hend(data)                                         (0x00007FFF&(data))
#define  TCON_TCON4_HSE_get_dummy_4(data)                                        ((0x80000000&(data))>>31)
#define  TCON_TCON4_HSE_get_tcon4_hstart(data)                                   ((0x7FFF0000&(data))>>16)
#define  TCON_TCON4_HSE_get_tcon4_hend(data)                                     (0x00007FFF&(data))

#define  TCON_TCON4_VSE                                                         0x1802D294
#define  TCON_TCON4_VSE_reg_addr                                                 "0xB802D294"
#define  TCON_TCON4_VSE_reg                                                      0xB802D294
#define  TCON_TCON4_VSE_inst_addr                                                "0x001B"
#define  set_TCON_TCON4_VSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON4_VSE_reg)=data)
#define  get_TCON_TCON4_VSE_reg                                                  (*((volatile unsigned int*)TCON_TCON4_VSE_reg))
#define  TCON_TCON4_VSE_tcon4_vstart_shift                                       (16)
#define  TCON_TCON4_VSE_tcon4_vend_shift                                         (0)
#define  TCON_TCON4_VSE_tcon4_vstart_mask                                        (0x1FFF0000)
#define  TCON_TCON4_VSE_tcon4_vend_mask                                          (0x00001FFF)
#define  TCON_TCON4_VSE_tcon4_vstart(data)                                       (0x1FFF0000&((data)<<16))
#define  TCON_TCON4_VSE_tcon4_vend(data)                                         (0x00001FFF&(data))
#define  TCON_TCON4_VSE_get_tcon4_vstart(data)                                   ((0x1FFF0000&(data))>>16)
#define  TCON_TCON4_VSE_get_tcon4_vend(data)                                     (0x00001FFF&(data))

#define  TCON_TCON4_Ctrl                                                        0x1802D298
#define  TCON_TCON4_Ctrl_reg_addr                                                "0xB802D298"
#define  TCON_TCON4_Ctrl_reg                                                     0xB802D298
#define  TCON_TCON4_Ctrl_inst_addr                                               "0x001C"
#define  set_TCON_TCON4_Ctrl_reg(data)                                           (*((volatile unsigned int*)TCON_TCON4_Ctrl_reg)=data)
#define  get_TCON_TCON4_Ctrl_reg                                                 (*((volatile unsigned int*)TCON_TCON4_Ctrl_reg))
#define  TCON_TCON4_Ctrl_tcon4_l_flag_sel_shift                                  (13)
#define  TCON_TCON4_Ctrl_tcon4_off_opt_shift                                     (12)
#define  TCON_TCON4_Ctrl_tcon4_across_ctrl_reset_shift                           (11)
#define  TCON_TCON4_Ctrl_tcon4_mode_shift                                        (8)
#define  TCON_TCON4_Ctrl_tcon4_en_shift                                          (7)
#define  TCON_TCON4_Ctrl_tcon4_inv_shift                                         (6)
#define  TCON_TCON4_Ctrl_tcon4_comb_inv_shift                                    (5)
#define  TCON_TCON4_Ctrl_tcon4_frame_tog_en_shift                                (3)
#define  TCON_TCON4_Ctrl_tcon4_comb_shift                                        (0)
#define  TCON_TCON4_Ctrl_tcon4_l_flag_sel_mask                                   (0x0003E000)
#define  TCON_TCON4_Ctrl_tcon4_off_opt_mask                                      (0x00001000)
#define  TCON_TCON4_Ctrl_tcon4_across_ctrl_reset_mask                            (0x00000800)
#define  TCON_TCON4_Ctrl_tcon4_mode_mask                                         (0x00000700)
#define  TCON_TCON4_Ctrl_tcon4_en_mask                                           (0x00000080)
#define  TCON_TCON4_Ctrl_tcon4_inv_mask                                          (0x00000040)
#define  TCON_TCON4_Ctrl_tcon4_comb_inv_mask                                     (0x00000020)
#define  TCON_TCON4_Ctrl_tcon4_frame_tog_en_mask                                 (0x00000008)
#define  TCON_TCON4_Ctrl_tcon4_comb_mask                                         (0x00000007)
#define  TCON_TCON4_Ctrl_tcon4_l_flag_sel(data)                                  (0x0003E000&((data)<<13))
#define  TCON_TCON4_Ctrl_tcon4_off_opt(data)                                     (0x00001000&((data)<<12))
#define  TCON_TCON4_Ctrl_tcon4_across_ctrl_reset(data)                           (0x00000800&((data)<<11))
#define  TCON_TCON4_Ctrl_tcon4_mode(data)                                        (0x00000700&((data)<<8))
#define  TCON_TCON4_Ctrl_tcon4_en(data)                                          (0x00000080&((data)<<7))
#define  TCON_TCON4_Ctrl_tcon4_inv(data)                                         (0x00000040&((data)<<6))
#define  TCON_TCON4_Ctrl_tcon4_comb_inv(data)                                    (0x00000020&((data)<<5))
#define  TCON_TCON4_Ctrl_tcon4_frame_tog_en(data)                                (0x00000008&((data)<<3))
#define  TCON_TCON4_Ctrl_tcon4_comb(data)                                        (0x00000007&(data))
#define  TCON_TCON4_Ctrl_get_tcon4_l_flag_sel(data)                              ((0x0003E000&(data))>>13)
#define  TCON_TCON4_Ctrl_get_tcon4_off_opt(data)                                 ((0x00001000&(data))>>12)
#define  TCON_TCON4_Ctrl_get_tcon4_across_ctrl_reset(data)                       ((0x00000800&(data))>>11)
#define  TCON_TCON4_Ctrl_get_tcon4_mode(data)                                    ((0x00000700&(data))>>8)
#define  TCON_TCON4_Ctrl_get_tcon4_en(data)                                      ((0x00000080&(data))>>7)
#define  TCON_TCON4_Ctrl_get_tcon4_inv(data)                                     ((0x00000040&(data))>>6)
#define  TCON_TCON4_Ctrl_get_tcon4_comb_inv(data)                                ((0x00000020&(data))>>5)
#define  TCON_TCON4_Ctrl_get_tcon4_frame_tog_en(data)                            ((0x00000008&(data))>>3)
#define  TCON_TCON4_Ctrl_get_tcon4_comb(data)                                    (0x00000007&(data))

#define  TCON_TCON4_ACROSS_LINE_CONTROL3                                        0x1802D29C
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_reg_addr                                "0xB802D29C"
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_reg                                     0xB802D29C
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_inst_addr                               "0x001D"
#define  set_TCON_TCON4_ACROSS_LINE_CONTROL3_reg(data)                           (*((volatile unsigned int*)TCON_TCON4_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON4_ACROSS_LINE_CONTROL3_reg                                 (*((volatile unsigned int*)TCON_TCON4_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_tcon4_across_frame_int_shift            (28)
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_tcon4_across_ctrl3_rp_shift             (16)
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_tcon4_hl_num_shift                      (12)
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_tcon4_across_ctrl3_hp_shift             (0)
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_tcon4_across_frame_int_mask             (0x10000000)
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_tcon4_across_ctrl3_rp_mask              (0x0FFF0000)
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_tcon4_hl_num_mask                       (0x0000F000)
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_tcon4_across_ctrl3_hp_mask              (0x00000FFF)
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_tcon4_across_frame_int(data)            (0x10000000&((data)<<28))
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_tcon4_across_ctrl3_rp(data)             (0x0FFF0000&((data)<<16))
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_tcon4_hl_num(data)                      (0x0000F000&((data)<<12))
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_tcon4_across_ctrl3_hp(data)             (0x00000FFF&(data))
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_get_tcon4_across_frame_int(data)        ((0x10000000&(data))>>28)
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_get_tcon4_across_ctrl3_rp(data)         ((0x0FFF0000&(data))>>16)
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_get_tcon4_hl_num(data)                  ((0x0000F000&(data))>>12)
#define  TCON_TCON4_ACROSS_LINE_CONTROL3_get_tcon4_across_ctrl3_hp(data)         (0x00000FFF&(data))

#define  TCON_TCON4_ACROSS_FRAME_CONTROL                                        0x1802D2A0
#define  TCON_TCON4_ACROSS_FRAME_CONTROL_reg_addr                                "0xB802D2A0"
#define  TCON_TCON4_ACROSS_FRAME_CONTROL_reg                                     0xB802D2A0
#define  TCON_TCON4_ACROSS_FRAME_CONTROL_inst_addr                               "0x001E"
#define  set_TCON_TCON4_ACROSS_FRAME_CONTROL_reg(data)                           (*((volatile unsigned int*)TCON_TCON4_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON4_ACROSS_FRAME_CONTROL_reg                                 (*((volatile unsigned int*)TCON_TCON4_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON4_ACROSS_FRAME_CONTROL_tcon4_frame_lp_shift                    (16)
#define  TCON_TCON4_ACROSS_FRAME_CONTROL_tcon4_frame_hp_shift                    (0)
#define  TCON_TCON4_ACROSS_FRAME_CONTROL_tcon4_frame_lp_mask                     (0x0FFF0000)
#define  TCON_TCON4_ACROSS_FRAME_CONTROL_tcon4_frame_hp_mask                     (0x00000FFF)
#define  TCON_TCON4_ACROSS_FRAME_CONTROL_tcon4_frame_lp(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON4_ACROSS_FRAME_CONTROL_tcon4_frame_hp(data)                    (0x00000FFF&(data))
#define  TCON_TCON4_ACROSS_FRAME_CONTROL_get_tcon4_frame_lp(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON4_ACROSS_FRAME_CONTROL_get_tcon4_frame_hp(data)                (0x00000FFF&(data))

#define  TCON_TCON4_FRAME_HL_CONTROL                                            0x1802D2A4
#define  TCON_TCON4_FRAME_HL_CONTROL_reg_addr                                    "0xB802D2A4"
#define  TCON_TCON4_FRAME_HL_CONTROL_reg                                         0xB802D2A4
#define  TCON_TCON4_FRAME_HL_CONTROL_inst_addr                                   "0x001F"
#define  set_TCON_TCON4_FRAME_HL_CONTROL_reg(data)                               (*((volatile unsigned int*)TCON_TCON4_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON4_FRAME_HL_CONTROL_reg                                     (*((volatile unsigned int*)TCON_TCON4_FRAME_HL_CONTROL_reg))
#define  TCON_TCON4_FRAME_HL_CONTROL_tcon4_frame_offset_shift                    (16)
#define  TCON_TCON4_FRAME_HL_CONTROL_tcon4_hl_shift                              (0)
#define  TCON_TCON4_FRAME_HL_CONTROL_tcon4_frame_offset_mask                     (0x0FFF0000)
#define  TCON_TCON4_FRAME_HL_CONTROL_tcon4_hl_mask                               (0x0000FFFF)
#define  TCON_TCON4_FRAME_HL_CONTROL_tcon4_frame_offset(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON4_FRAME_HL_CONTROL_tcon4_hl(data)                              (0x0000FFFF&(data))
#define  TCON_TCON4_FRAME_HL_CONTROL_get_tcon4_frame_offset(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON4_FRAME_HL_CONTROL_get_tcon4_hl(data)                          (0x0000FFFF&(data))

#define  TCON_TCON5_HSE                                                         0x1802D2B0
#define  TCON_TCON5_HSE_reg_addr                                                 "0xB802D2B0"
#define  TCON_TCON5_HSE_reg                                                      0xB802D2B0
#define  TCON_TCON5_HSE_inst_addr                                                "0x0020"
#define  set_TCON_TCON5_HSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON5_HSE_reg)=data)
#define  get_TCON_TCON5_HSE_reg                                                  (*((volatile unsigned int*)TCON_TCON5_HSE_reg))
#define  TCON_TCON5_HSE_dummy_5_shift                                            (31)
#define  TCON_TCON5_HSE_tcon5_hstart_shift                                       (16)
#define  TCON_TCON5_HSE_tcon5_hend_shift                                         (0)
#define  TCON_TCON5_HSE_dummy_5_mask                                             (0x80000000)
#define  TCON_TCON5_HSE_tcon5_hstart_mask                                        (0x7FFF0000)
#define  TCON_TCON5_HSE_tcon5_hend_mask                                          (0x00007FFF)
#define  TCON_TCON5_HSE_dummy_5(data)                                            (0x80000000&((data)<<31))
#define  TCON_TCON5_HSE_tcon5_hstart(data)                                       (0x7FFF0000&((data)<<16))
#define  TCON_TCON5_HSE_tcon5_hend(data)                                         (0x00007FFF&(data))
#define  TCON_TCON5_HSE_get_dummy_5(data)                                        ((0x80000000&(data))>>31)
#define  TCON_TCON5_HSE_get_tcon5_hstart(data)                                   ((0x7FFF0000&(data))>>16)
#define  TCON_TCON5_HSE_get_tcon5_hend(data)                                     (0x00007FFF&(data))

#define  TCON_TCON5_VSE                                                         0x1802D2B4
#define  TCON_TCON5_VSE_reg_addr                                                 "0xB802D2B4"
#define  TCON_TCON5_VSE_reg                                                      0xB802D2B4
#define  TCON_TCON5_VSE_inst_addr                                                "0x0021"
#define  set_TCON_TCON5_VSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON5_VSE_reg)=data)
#define  get_TCON_TCON5_VSE_reg                                                  (*((volatile unsigned int*)TCON_TCON5_VSE_reg))
#define  TCON_TCON5_VSE_tcon5_vstart_shift                                       (16)
#define  TCON_TCON5_VSE_tcon5_vend_shift                                         (0)
#define  TCON_TCON5_VSE_tcon5_vstart_mask                                        (0x1FFF0000)
#define  TCON_TCON5_VSE_tcon5_vend_mask                                          (0x00001FFF)
#define  TCON_TCON5_VSE_tcon5_vstart(data)                                       (0x1FFF0000&((data)<<16))
#define  TCON_TCON5_VSE_tcon5_vend(data)                                         (0x00001FFF&(data))
#define  TCON_TCON5_VSE_get_tcon5_vstart(data)                                   ((0x1FFF0000&(data))>>16)
#define  TCON_TCON5_VSE_get_tcon5_vend(data)                                     (0x00001FFF&(data))

#define  TCON_TCON5_Ctrl                                                        0x1802D2B8
#define  TCON_TCON5_Ctrl_reg_addr                                                "0xB802D2B8"
#define  TCON_TCON5_Ctrl_reg                                                     0xB802D2B8
#define  TCON_TCON5_Ctrl_inst_addr                                               "0x0022"
#define  set_TCON_TCON5_Ctrl_reg(data)                                           (*((volatile unsigned int*)TCON_TCON5_Ctrl_reg)=data)
#define  get_TCON_TCON5_Ctrl_reg                                                 (*((volatile unsigned int*)TCON_TCON5_Ctrl_reg))
#define  TCON_TCON5_Ctrl_tcon5_l_flag_sel_shift                                  (13)
#define  TCON_TCON5_Ctrl_tcon5_off_opt_shift                                     (12)
#define  TCON_TCON5_Ctrl_tcon5_across_ctrl_reset_shift                           (11)
#define  TCON_TCON5_Ctrl_tcon5_mode_shift                                        (8)
#define  TCON_TCON5_Ctrl_tcon5_en_shift                                          (7)
#define  TCON_TCON5_Ctrl_tcon5_inv_shift                                         (6)
#define  TCON_TCON5_Ctrl_tcon5_comb_inv_shift                                    (5)
#define  TCON_TCON5_Ctrl_tcon5_frame_tog_en_shift                                (3)
#define  TCON_TCON5_Ctrl_tcon5_comb_shift                                        (0)
#define  TCON_TCON5_Ctrl_tcon5_l_flag_sel_mask                                   (0x0003E000)
#define  TCON_TCON5_Ctrl_tcon5_off_opt_mask                                      (0x00001000)
#define  TCON_TCON5_Ctrl_tcon5_across_ctrl_reset_mask                            (0x00000800)
#define  TCON_TCON5_Ctrl_tcon5_mode_mask                                         (0x00000700)
#define  TCON_TCON5_Ctrl_tcon5_en_mask                                           (0x00000080)
#define  TCON_TCON5_Ctrl_tcon5_inv_mask                                          (0x00000040)
#define  TCON_TCON5_Ctrl_tcon5_comb_inv_mask                                     (0x00000020)
#define  TCON_TCON5_Ctrl_tcon5_frame_tog_en_mask                                 (0x00000008)
#define  TCON_TCON5_Ctrl_tcon5_comb_mask                                         (0x00000007)
#define  TCON_TCON5_Ctrl_tcon5_l_flag_sel(data)                                  (0x0003E000&((data)<<13))
#define  TCON_TCON5_Ctrl_tcon5_off_opt(data)                                     (0x00001000&((data)<<12))
#define  TCON_TCON5_Ctrl_tcon5_across_ctrl_reset(data)                           (0x00000800&((data)<<11))
#define  TCON_TCON5_Ctrl_tcon5_mode(data)                                        (0x00000700&((data)<<8))
#define  TCON_TCON5_Ctrl_tcon5_en(data)                                          (0x00000080&((data)<<7))
#define  TCON_TCON5_Ctrl_tcon5_inv(data)                                         (0x00000040&((data)<<6))
#define  TCON_TCON5_Ctrl_tcon5_comb_inv(data)                                    (0x00000020&((data)<<5))
#define  TCON_TCON5_Ctrl_tcon5_frame_tog_en(data)                                (0x00000008&((data)<<3))
#define  TCON_TCON5_Ctrl_tcon5_comb(data)                                        (0x00000007&(data))
#define  TCON_TCON5_Ctrl_get_tcon5_l_flag_sel(data)                              ((0x0003E000&(data))>>13)
#define  TCON_TCON5_Ctrl_get_tcon5_off_opt(data)                                 ((0x00001000&(data))>>12)
#define  TCON_TCON5_Ctrl_get_tcon5_across_ctrl_reset(data)                       ((0x00000800&(data))>>11)
#define  TCON_TCON5_Ctrl_get_tcon5_mode(data)                                    ((0x00000700&(data))>>8)
#define  TCON_TCON5_Ctrl_get_tcon5_en(data)                                      ((0x00000080&(data))>>7)
#define  TCON_TCON5_Ctrl_get_tcon5_inv(data)                                     ((0x00000040&(data))>>6)
#define  TCON_TCON5_Ctrl_get_tcon5_comb_inv(data)                                ((0x00000020&(data))>>5)
#define  TCON_TCON5_Ctrl_get_tcon5_frame_tog_en(data)                            ((0x00000008&(data))>>3)
#define  TCON_TCON5_Ctrl_get_tcon5_comb(data)                                    (0x00000007&(data))

#define  TCON_TCON5_ACROSS_LINE_CONTROL3                                        0x1802D2BC
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_reg_addr                                "0xB802D2BC"
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_reg                                     0xB802D2BC
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_inst_addr                               "0x0023"
#define  set_TCON_TCON5_ACROSS_LINE_CONTROL3_reg(data)                           (*((volatile unsigned int*)TCON_TCON5_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON5_ACROSS_LINE_CONTROL3_reg                                 (*((volatile unsigned int*)TCON_TCON5_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_tcon5_across_frame_int_shift            (28)
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_tcon5_across_ctrl3_rp_shift             (16)
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_tcon5_hl_num_shift                      (12)
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_tcon5_across_ctrl3_hp_shift             (0)
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_tcon5_across_frame_int_mask             (0x10000000)
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_tcon5_across_ctrl3_rp_mask              (0x0FFF0000)
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_tcon5_hl_num_mask                       (0x0000F000)
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_tcon5_across_ctrl3_hp_mask              (0x00000FFF)
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_tcon5_across_frame_int(data)            (0x10000000&((data)<<28))
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_tcon5_across_ctrl3_rp(data)             (0x0FFF0000&((data)<<16))
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_tcon5_hl_num(data)                      (0x0000F000&((data)<<12))
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_tcon5_across_ctrl3_hp(data)             (0x00000FFF&(data))
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_get_tcon5_across_frame_int(data)        ((0x10000000&(data))>>28)
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_get_tcon5_across_ctrl3_rp(data)         ((0x0FFF0000&(data))>>16)
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_get_tcon5_hl_num(data)                  ((0x0000F000&(data))>>12)
#define  TCON_TCON5_ACROSS_LINE_CONTROL3_get_tcon5_across_ctrl3_hp(data)         (0x00000FFF&(data))

#define  TCON_TCON5_ACROSS_FRAME_CONTROL                                        0x1802D2C0
#define  TCON_TCON5_ACROSS_FRAME_CONTROL_reg_addr                                "0xB802D2C0"
#define  TCON_TCON5_ACROSS_FRAME_CONTROL_reg                                     0xB802D2C0
#define  TCON_TCON5_ACROSS_FRAME_CONTROL_inst_addr                               "0x0024"
#define  set_TCON_TCON5_ACROSS_FRAME_CONTROL_reg(data)                           (*((volatile unsigned int*)TCON_TCON5_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON5_ACROSS_FRAME_CONTROL_reg                                 (*((volatile unsigned int*)TCON_TCON5_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON5_ACROSS_FRAME_CONTROL_tcon5_frame_lp_shift                    (16)
#define  TCON_TCON5_ACROSS_FRAME_CONTROL_tcon5_frame_hp_shift                    (0)
#define  TCON_TCON5_ACROSS_FRAME_CONTROL_tcon5_frame_lp_mask                     (0x0FFF0000)
#define  TCON_TCON5_ACROSS_FRAME_CONTROL_tcon5_frame_hp_mask                     (0x00000FFF)
#define  TCON_TCON5_ACROSS_FRAME_CONTROL_tcon5_frame_lp(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON5_ACROSS_FRAME_CONTROL_tcon5_frame_hp(data)                    (0x00000FFF&(data))
#define  TCON_TCON5_ACROSS_FRAME_CONTROL_get_tcon5_frame_lp(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON5_ACROSS_FRAME_CONTROL_get_tcon5_frame_hp(data)                (0x00000FFF&(data))

#define  TCON_TCON5_FRAME_HL_CONTROL                                            0x1802D2C4
#define  TCON_TCON5_FRAME_HL_CONTROL_reg_addr                                    "0xB802D2C4"
#define  TCON_TCON5_FRAME_HL_CONTROL_reg                                         0xB802D2C4
#define  TCON_TCON5_FRAME_HL_CONTROL_inst_addr                                   "0x0025"
#define  set_TCON_TCON5_FRAME_HL_CONTROL_reg(data)                               (*((volatile unsigned int*)TCON_TCON5_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON5_FRAME_HL_CONTROL_reg                                     (*((volatile unsigned int*)TCON_TCON5_FRAME_HL_CONTROL_reg))
#define  TCON_TCON5_FRAME_HL_CONTROL_tcon5_frame_offset_shift                    (16)
#define  TCON_TCON5_FRAME_HL_CONTROL_tcon5_hl_shift                              (0)
#define  TCON_TCON5_FRAME_HL_CONTROL_tcon5_frame_offset_mask                     (0x0FFF0000)
#define  TCON_TCON5_FRAME_HL_CONTROL_tcon5_hl_mask                               (0x0000FFFF)
#define  TCON_TCON5_FRAME_HL_CONTROL_tcon5_frame_offset(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON5_FRAME_HL_CONTROL_tcon5_hl(data)                              (0x0000FFFF&(data))
#define  TCON_TCON5_FRAME_HL_CONTROL_get_tcon5_frame_offset(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON5_FRAME_HL_CONTROL_get_tcon5_hl(data)                          (0x0000FFFF&(data))

#define  TCON_TCON6_HSE                                                         0x1802D2D0
#define  TCON_TCON6_HSE_reg_addr                                                 "0xB802D2D0"
#define  TCON_TCON6_HSE_reg                                                      0xB802D2D0
#define  TCON_TCON6_HSE_inst_addr                                                "0x0026"
#define  set_TCON_TCON6_HSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON6_HSE_reg)=data)
#define  get_TCON_TCON6_HSE_reg                                                  (*((volatile unsigned int*)TCON_TCON6_HSE_reg))
#define  TCON_TCON6_HSE_dummy_6_shift                                            (31)
#define  TCON_TCON6_HSE_tcon6_hstart_shift                                       (16)
#define  TCON_TCON6_HSE_tcon6_hend_shift                                         (0)
#define  TCON_TCON6_HSE_dummy_6_mask                                             (0x80000000)
#define  TCON_TCON6_HSE_tcon6_hstart_mask                                        (0x7FFF0000)
#define  TCON_TCON6_HSE_tcon6_hend_mask                                          (0x00007FFF)
#define  TCON_TCON6_HSE_dummy_6(data)                                            (0x80000000&((data)<<31))
#define  TCON_TCON6_HSE_tcon6_hstart(data)                                       (0x7FFF0000&((data)<<16))
#define  TCON_TCON6_HSE_tcon6_hend(data)                                         (0x00007FFF&(data))
#define  TCON_TCON6_HSE_get_dummy_6(data)                                        ((0x80000000&(data))>>31)
#define  TCON_TCON6_HSE_get_tcon6_hstart(data)                                   ((0x7FFF0000&(data))>>16)
#define  TCON_TCON6_HSE_get_tcon6_hend(data)                                     (0x00007FFF&(data))

#define  TCON_TCON6_VSE                                                         0x1802D2D4
#define  TCON_TCON6_VSE_reg_addr                                                 "0xB802D2D4"
#define  TCON_TCON6_VSE_reg                                                      0xB802D2D4
#define  TCON_TCON6_VSE_inst_addr                                                "0x0027"
#define  set_TCON_TCON6_VSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON6_VSE_reg)=data)
#define  get_TCON_TCON6_VSE_reg                                                  (*((volatile unsigned int*)TCON_TCON6_VSE_reg))
#define  TCON_TCON6_VSE_tcon6_vstart_shift                                       (16)
#define  TCON_TCON6_VSE_tcon6_vend_shift                                         (0)
#define  TCON_TCON6_VSE_tcon6_vstart_mask                                        (0x1FFF0000)
#define  TCON_TCON6_VSE_tcon6_vend_mask                                          (0x00001FFF)
#define  TCON_TCON6_VSE_tcon6_vstart(data)                                       (0x1FFF0000&((data)<<16))
#define  TCON_TCON6_VSE_tcon6_vend(data)                                         (0x00001FFF&(data))
#define  TCON_TCON6_VSE_get_tcon6_vstart(data)                                   ((0x1FFF0000&(data))>>16)
#define  TCON_TCON6_VSE_get_tcon6_vend(data)                                     (0x00001FFF&(data))

#define  TCON_TCON6_Ctrl                                                        0x1802D2D8
#define  TCON_TCON6_Ctrl_reg_addr                                                "0xB802D2D8"
#define  TCON_TCON6_Ctrl_reg                                                     0xB802D2D8
#define  TCON_TCON6_Ctrl_inst_addr                                               "0x0028"
#define  set_TCON_TCON6_Ctrl_reg(data)                                           (*((volatile unsigned int*)TCON_TCON6_Ctrl_reg)=data)
#define  get_TCON_TCON6_Ctrl_reg                                                 (*((volatile unsigned int*)TCON_TCON6_Ctrl_reg))
#define  TCON_TCON6_Ctrl_tcon6_l_flag_sel_shift                                  (13)
#define  TCON_TCON6_Ctrl_tcon6_off_opt_shift                                     (12)
#define  TCON_TCON6_Ctrl_tcon6_across_ctrl_reset_shift                           (11)
#define  TCON_TCON6_Ctrl_tcon6_mode_shift                                        (8)
#define  TCON_TCON6_Ctrl_tcon6_en_shift                                          (7)
#define  TCON_TCON6_Ctrl_tcon6_inv_shift                                         (6)
#define  TCON_TCON6_Ctrl_tcon6_comb_inv_shift                                    (5)
#define  TCON_TCON6_Ctrl_tcon6_frame_tog_en_shift                                (3)
#define  TCON_TCON6_Ctrl_tcon6_comb_shift                                        (0)
#define  TCON_TCON6_Ctrl_tcon6_l_flag_sel_mask                                   (0x0003E000)
#define  TCON_TCON6_Ctrl_tcon6_off_opt_mask                                      (0x00001000)
#define  TCON_TCON6_Ctrl_tcon6_across_ctrl_reset_mask                            (0x00000800)
#define  TCON_TCON6_Ctrl_tcon6_mode_mask                                         (0x00000700)
#define  TCON_TCON6_Ctrl_tcon6_en_mask                                           (0x00000080)
#define  TCON_TCON6_Ctrl_tcon6_inv_mask                                          (0x00000040)
#define  TCON_TCON6_Ctrl_tcon6_comb_inv_mask                                     (0x00000020)
#define  TCON_TCON6_Ctrl_tcon6_frame_tog_en_mask                                 (0x00000008)
#define  TCON_TCON6_Ctrl_tcon6_comb_mask                                         (0x00000007)
#define  TCON_TCON6_Ctrl_tcon6_l_flag_sel(data)                                  (0x0003E000&((data)<<13))
#define  TCON_TCON6_Ctrl_tcon6_off_opt(data)                                     (0x00001000&((data)<<12))
#define  TCON_TCON6_Ctrl_tcon6_across_ctrl_reset(data)                           (0x00000800&((data)<<11))
#define  TCON_TCON6_Ctrl_tcon6_mode(data)                                        (0x00000700&((data)<<8))
#define  TCON_TCON6_Ctrl_tcon6_en(data)                                          (0x00000080&((data)<<7))
#define  TCON_TCON6_Ctrl_tcon6_inv(data)                                         (0x00000040&((data)<<6))
#define  TCON_TCON6_Ctrl_tcon6_comb_inv(data)                                    (0x00000020&((data)<<5))
#define  TCON_TCON6_Ctrl_tcon6_frame_tog_en(data)                                (0x00000008&((data)<<3))
#define  TCON_TCON6_Ctrl_tcon6_comb(data)                                        (0x00000007&(data))
#define  TCON_TCON6_Ctrl_get_tcon6_l_flag_sel(data)                              ((0x0003E000&(data))>>13)
#define  TCON_TCON6_Ctrl_get_tcon6_off_opt(data)                                 ((0x00001000&(data))>>12)
#define  TCON_TCON6_Ctrl_get_tcon6_across_ctrl_reset(data)                       ((0x00000800&(data))>>11)
#define  TCON_TCON6_Ctrl_get_tcon6_mode(data)                                    ((0x00000700&(data))>>8)
#define  TCON_TCON6_Ctrl_get_tcon6_en(data)                                      ((0x00000080&(data))>>7)
#define  TCON_TCON6_Ctrl_get_tcon6_inv(data)                                     ((0x00000040&(data))>>6)
#define  TCON_TCON6_Ctrl_get_tcon6_comb_inv(data)                                ((0x00000020&(data))>>5)
#define  TCON_TCON6_Ctrl_get_tcon6_frame_tog_en(data)                            ((0x00000008&(data))>>3)
#define  TCON_TCON6_Ctrl_get_tcon6_comb(data)                                    (0x00000007&(data))

#define  TCON_TCON6_ACROSS_LINE_CONTROL3                                        0x1802D2DC
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_reg_addr                                "0xB802D2DC"
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_reg                                     0xB802D2DC
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_inst_addr                               "0x0029"
#define  set_TCON_TCON6_ACROSS_LINE_CONTROL3_reg(data)                           (*((volatile unsigned int*)TCON_TCON6_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON6_ACROSS_LINE_CONTROL3_reg                                 (*((volatile unsigned int*)TCON_TCON6_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_tcon6_across_frame_int_shift            (28)
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_tcon6_across_ctrl3_rp_shift             (16)
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_tcon6_hl_num_shift                      (12)
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_tcon6_across_ctrl3_hp_shift             (0)
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_tcon6_across_frame_int_mask             (0x10000000)
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_tcon6_across_ctrl3_rp_mask              (0x0FFF0000)
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_tcon6_hl_num_mask                       (0x0000F000)
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_tcon6_across_ctrl3_hp_mask              (0x00000FFF)
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_tcon6_across_frame_int(data)            (0x10000000&((data)<<28))
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_tcon6_across_ctrl3_rp(data)             (0x0FFF0000&((data)<<16))
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_tcon6_hl_num(data)                      (0x0000F000&((data)<<12))
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_tcon6_across_ctrl3_hp(data)             (0x00000FFF&(data))
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_get_tcon6_across_frame_int(data)        ((0x10000000&(data))>>28)
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_get_tcon6_across_ctrl3_rp(data)         ((0x0FFF0000&(data))>>16)
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_get_tcon6_hl_num(data)                  ((0x0000F000&(data))>>12)
#define  TCON_TCON6_ACROSS_LINE_CONTROL3_get_tcon6_across_ctrl3_hp(data)         (0x00000FFF&(data))

#define  TCON_TCON6_ACROSS_FRAME_CONTROL                                        0x1802D2E0
#define  TCON_TCON6_ACROSS_FRAME_CONTROL_reg_addr                                "0xB802D2E0"
#define  TCON_TCON6_ACROSS_FRAME_CONTROL_reg                                     0xB802D2E0
#define  TCON_TCON6_ACROSS_FRAME_CONTROL_inst_addr                               "0x002A"
#define  set_TCON_TCON6_ACROSS_FRAME_CONTROL_reg(data)                           (*((volatile unsigned int*)TCON_TCON6_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON6_ACROSS_FRAME_CONTROL_reg                                 (*((volatile unsigned int*)TCON_TCON6_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON6_ACROSS_FRAME_CONTROL_tcon6_frame_lp_shift                    (16)
#define  TCON_TCON6_ACROSS_FRAME_CONTROL_tcon6_frame_hp_shift                    (0)
#define  TCON_TCON6_ACROSS_FRAME_CONTROL_tcon6_frame_lp_mask                     (0x0FFF0000)
#define  TCON_TCON6_ACROSS_FRAME_CONTROL_tcon6_frame_hp_mask                     (0x00000FFF)
#define  TCON_TCON6_ACROSS_FRAME_CONTROL_tcon6_frame_lp(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON6_ACROSS_FRAME_CONTROL_tcon6_frame_hp(data)                    (0x00000FFF&(data))
#define  TCON_TCON6_ACROSS_FRAME_CONTROL_get_tcon6_frame_lp(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON6_ACROSS_FRAME_CONTROL_get_tcon6_frame_hp(data)                (0x00000FFF&(data))

#define  TCON_TCON6_FRAME_HL_CONTROL                                            0x1802D2E4
#define  TCON_TCON6_FRAME_HL_CONTROL_reg_addr                                    "0xB802D2E4"
#define  TCON_TCON6_FRAME_HL_CONTROL_reg                                         0xB802D2E4
#define  TCON_TCON6_FRAME_HL_CONTROL_inst_addr                                   "0x002B"
#define  set_TCON_TCON6_FRAME_HL_CONTROL_reg(data)                               (*((volatile unsigned int*)TCON_TCON6_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON6_FRAME_HL_CONTROL_reg                                     (*((volatile unsigned int*)TCON_TCON6_FRAME_HL_CONTROL_reg))
#define  TCON_TCON6_FRAME_HL_CONTROL_tcon6_frame_offset_shift                    (16)
#define  TCON_TCON6_FRAME_HL_CONTROL_tcon6_hl_shift                              (0)
#define  TCON_TCON6_FRAME_HL_CONTROL_tcon6_frame_offset_mask                     (0x0FFF0000)
#define  TCON_TCON6_FRAME_HL_CONTROL_tcon6_hl_mask                               (0x0000FFFF)
#define  TCON_TCON6_FRAME_HL_CONTROL_tcon6_frame_offset(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON6_FRAME_HL_CONTROL_tcon6_hl(data)                              (0x0000FFFF&(data))
#define  TCON_TCON6_FRAME_HL_CONTROL_get_tcon6_frame_offset(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON6_FRAME_HL_CONTROL_get_tcon6_hl(data)                          (0x0000FFFF&(data))

#define  TCON_TCON7_HSE                                                         0x1802D2F0
#define  TCON_TCON7_HSE_reg_addr                                                 "0xB802D2F0"
#define  TCON_TCON7_HSE_reg                                                      0xB802D2F0
#define  TCON_TCON7_HSE_inst_addr                                                "0x002C"
#define  set_TCON_TCON7_HSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON7_HSE_reg)=data)
#define  get_TCON_TCON7_HSE_reg                                                  (*((volatile unsigned int*)TCON_TCON7_HSE_reg))
#define  TCON_TCON7_HSE_dummy_7_shift                                            (31)
#define  TCON_TCON7_HSE_tcon7_hstart_shift                                       (16)
#define  TCON_TCON7_HSE_tcon7_hend_shift                                         (0)
#define  TCON_TCON7_HSE_dummy_7_mask                                             (0x80000000)
#define  TCON_TCON7_HSE_tcon7_hstart_mask                                        (0x7FFF0000)
#define  TCON_TCON7_HSE_tcon7_hend_mask                                          (0x00007FFF)
#define  TCON_TCON7_HSE_dummy_7(data)                                            (0x80000000&((data)<<31))
#define  TCON_TCON7_HSE_tcon7_hstart(data)                                       (0x7FFF0000&((data)<<16))
#define  TCON_TCON7_HSE_tcon7_hend(data)                                         (0x00007FFF&(data))
#define  TCON_TCON7_HSE_get_dummy_7(data)                                        ((0x80000000&(data))>>31)
#define  TCON_TCON7_HSE_get_tcon7_hstart(data)                                   ((0x7FFF0000&(data))>>16)
#define  TCON_TCON7_HSE_get_tcon7_hend(data)                                     (0x00007FFF&(data))

#define  TCON_TCON7_VSE                                                         0x1802D2F4
#define  TCON_TCON7_VSE_reg_addr                                                 "0xB802D2F4"
#define  TCON_TCON7_VSE_reg                                                      0xB802D2F4
#define  TCON_TCON7_VSE_inst_addr                                                "0x002D"
#define  set_TCON_TCON7_VSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON7_VSE_reg)=data)
#define  get_TCON_TCON7_VSE_reg                                                  (*((volatile unsigned int*)TCON_TCON7_VSE_reg))
#define  TCON_TCON7_VSE_tcon7_vstart_shift                                       (16)
#define  TCON_TCON7_VSE_tcon7_vend_shift                                         (0)
#define  TCON_TCON7_VSE_tcon7_vstart_mask                                        (0x1FFF0000)
#define  TCON_TCON7_VSE_tcon7_vend_mask                                          (0x00001FFF)
#define  TCON_TCON7_VSE_tcon7_vstart(data)                                       (0x1FFF0000&((data)<<16))
#define  TCON_TCON7_VSE_tcon7_vend(data)                                         (0x00001FFF&(data))
#define  TCON_TCON7_VSE_get_tcon7_vstart(data)                                   ((0x1FFF0000&(data))>>16)
#define  TCON_TCON7_VSE_get_tcon7_vend(data)                                     (0x00001FFF&(data))

#define  TCON_TCON7_Ctrl                                                        0x1802D2F8
#define  TCON_TCON7_Ctrl_reg_addr                                                "0xB802D2F8"
#define  TCON_TCON7_Ctrl_reg                                                     0xB802D2F8
#define  TCON_TCON7_Ctrl_inst_addr                                               "0x002E"
#define  set_TCON_TCON7_Ctrl_reg(data)                                           (*((volatile unsigned int*)TCON_TCON7_Ctrl_reg)=data)
#define  get_TCON_TCON7_Ctrl_reg                                                 (*((volatile unsigned int*)TCON_TCON7_Ctrl_reg))
#define  TCON_TCON7_Ctrl_tcon7_l_flag_sel_shift                                  (13)
#define  TCON_TCON7_Ctrl_tcon7_off_opt_shift                                     (12)
#define  TCON_TCON7_Ctrl_tcon7_across_ctrl_reset_shift                           (11)
#define  TCON_TCON7_Ctrl_tcon7_mode_shift                                        (8)
#define  TCON_TCON7_Ctrl_tcon7_en_shift                                          (7)
#define  TCON_TCON7_Ctrl_tcon7_inv_shift                                         (6)
#define  TCON_TCON7_Ctrl_tcon7_comb_inv_shift                                    (5)
#define  TCON_TCON7_Ctrl_tcon7_frame_tog_en_shift                                (3)
#define  TCON_TCON7_Ctrl_tcon7_comb_shift                                        (0)
#define  TCON_TCON7_Ctrl_tcon7_l_flag_sel_mask                                   (0x0003E000)
#define  TCON_TCON7_Ctrl_tcon7_off_opt_mask                                      (0x00001000)
#define  TCON_TCON7_Ctrl_tcon7_across_ctrl_reset_mask                            (0x00000800)
#define  TCON_TCON7_Ctrl_tcon7_mode_mask                                         (0x00000700)
#define  TCON_TCON7_Ctrl_tcon7_en_mask                                           (0x00000080)
#define  TCON_TCON7_Ctrl_tcon7_inv_mask                                          (0x00000040)
#define  TCON_TCON7_Ctrl_tcon7_comb_inv_mask                                     (0x00000020)
#define  TCON_TCON7_Ctrl_tcon7_frame_tog_en_mask                                 (0x00000008)
#define  TCON_TCON7_Ctrl_tcon7_comb_mask                                         (0x00000007)
#define  TCON_TCON7_Ctrl_tcon7_l_flag_sel(data)                                  (0x0003E000&((data)<<13))
#define  TCON_TCON7_Ctrl_tcon7_off_opt(data)                                     (0x00001000&((data)<<12))
#define  TCON_TCON7_Ctrl_tcon7_across_ctrl_reset(data)                           (0x00000800&((data)<<11))
#define  TCON_TCON7_Ctrl_tcon7_mode(data)                                        (0x00000700&((data)<<8))
#define  TCON_TCON7_Ctrl_tcon7_en(data)                                          (0x00000080&((data)<<7))
#define  TCON_TCON7_Ctrl_tcon7_inv(data)                                         (0x00000040&((data)<<6))
#define  TCON_TCON7_Ctrl_tcon7_comb_inv(data)                                    (0x00000020&((data)<<5))
#define  TCON_TCON7_Ctrl_tcon7_frame_tog_en(data)                                (0x00000008&((data)<<3))
#define  TCON_TCON7_Ctrl_tcon7_comb(data)                                        (0x00000007&(data))
#define  TCON_TCON7_Ctrl_get_tcon7_l_flag_sel(data)                              ((0x0003E000&(data))>>13)
#define  TCON_TCON7_Ctrl_get_tcon7_off_opt(data)                                 ((0x00001000&(data))>>12)
#define  TCON_TCON7_Ctrl_get_tcon7_across_ctrl_reset(data)                       ((0x00000800&(data))>>11)
#define  TCON_TCON7_Ctrl_get_tcon7_mode(data)                                    ((0x00000700&(data))>>8)
#define  TCON_TCON7_Ctrl_get_tcon7_en(data)                                      ((0x00000080&(data))>>7)
#define  TCON_TCON7_Ctrl_get_tcon7_inv(data)                                     ((0x00000040&(data))>>6)
#define  TCON_TCON7_Ctrl_get_tcon7_comb_inv(data)                                ((0x00000020&(data))>>5)
#define  TCON_TCON7_Ctrl_get_tcon7_frame_tog_en(data)                            ((0x00000008&(data))>>3)
#define  TCON_TCON7_Ctrl_get_tcon7_comb(data)                                    (0x00000007&(data))

#define  TCON_TCON7_ACROSS_LINE_CONTROL3                                        0x1802D2FC
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_reg_addr                                "0xB802D2FC"
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_reg                                     0xB802D2FC
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_inst_addr                               "0x002F"
#define  set_TCON_TCON7_ACROSS_LINE_CONTROL3_reg(data)                           (*((volatile unsigned int*)TCON_TCON7_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON7_ACROSS_LINE_CONTROL3_reg                                 (*((volatile unsigned int*)TCON_TCON7_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_tcon7_across_frame_int_shift            (28)
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_tcon7_across_ctrl3_rp_shift             (16)
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_tcon7_hl_num_shift                      (12)
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_tcon7_across_ctrl3_hp_shift             (0)
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_tcon7_across_frame_int_mask             (0x10000000)
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_tcon7_across_ctrl3_rp_mask              (0x0FFF0000)
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_tcon7_hl_num_mask                       (0x0000F000)
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_tcon7_across_ctrl3_hp_mask              (0x00000FFF)
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_tcon7_across_frame_int(data)            (0x10000000&((data)<<28))
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_tcon7_across_ctrl3_rp(data)             (0x0FFF0000&((data)<<16))
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_tcon7_hl_num(data)                      (0x0000F000&((data)<<12))
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_tcon7_across_ctrl3_hp(data)             (0x00000FFF&(data))
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_get_tcon7_across_frame_int(data)        ((0x10000000&(data))>>28)
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_get_tcon7_across_ctrl3_rp(data)         ((0x0FFF0000&(data))>>16)
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_get_tcon7_hl_num(data)                  ((0x0000F000&(data))>>12)
#define  TCON_TCON7_ACROSS_LINE_CONTROL3_get_tcon7_across_ctrl3_hp(data)         (0x00000FFF&(data))

#define  TCON_TCON7_ACROSS_FRAME_CONTROL                                        0x1802D300
#define  TCON_TCON7_ACROSS_FRAME_CONTROL_reg_addr                                "0xB802D300"
#define  TCON_TCON7_ACROSS_FRAME_CONTROL_reg                                     0xB802D300
#define  TCON_TCON7_ACROSS_FRAME_CONTROL_inst_addr                               "0x0030"
#define  set_TCON_TCON7_ACROSS_FRAME_CONTROL_reg(data)                           (*((volatile unsigned int*)TCON_TCON7_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON7_ACROSS_FRAME_CONTROL_reg                                 (*((volatile unsigned int*)TCON_TCON7_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON7_ACROSS_FRAME_CONTROL_tcon7_frame_lp_shift                    (16)
#define  TCON_TCON7_ACROSS_FRAME_CONTROL_tcon7_frame_hp_shift                    (0)
#define  TCON_TCON7_ACROSS_FRAME_CONTROL_tcon7_frame_lp_mask                     (0x0FFF0000)
#define  TCON_TCON7_ACROSS_FRAME_CONTROL_tcon7_frame_hp_mask                     (0x00000FFF)
#define  TCON_TCON7_ACROSS_FRAME_CONTROL_tcon7_frame_lp(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON7_ACROSS_FRAME_CONTROL_tcon7_frame_hp(data)                    (0x00000FFF&(data))
#define  TCON_TCON7_ACROSS_FRAME_CONTROL_get_tcon7_frame_lp(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON7_ACROSS_FRAME_CONTROL_get_tcon7_frame_hp(data)                (0x00000FFF&(data))

#define  TCON_TCON7_FRAME_HL_CONTROL                                            0x1802D304
#define  TCON_TCON7_FRAME_HL_CONTROL_reg_addr                                    "0xB802D304"
#define  TCON_TCON7_FRAME_HL_CONTROL_reg                                         0xB802D304
#define  TCON_TCON7_FRAME_HL_CONTROL_inst_addr                                   "0x0031"
#define  set_TCON_TCON7_FRAME_HL_CONTROL_reg(data)                               (*((volatile unsigned int*)TCON_TCON7_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON7_FRAME_HL_CONTROL_reg                                     (*((volatile unsigned int*)TCON_TCON7_FRAME_HL_CONTROL_reg))
#define  TCON_TCON7_FRAME_HL_CONTROL_tcon7_frame_offset_shift                    (16)
#define  TCON_TCON7_FRAME_HL_CONTROL_tcon7_hl_shift                              (0)
#define  TCON_TCON7_FRAME_HL_CONTROL_tcon7_frame_offset_mask                     (0x0FFF0000)
#define  TCON_TCON7_FRAME_HL_CONTROL_tcon7_hl_mask                               (0x0000FFFF)
#define  TCON_TCON7_FRAME_HL_CONTROL_tcon7_frame_offset(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON7_FRAME_HL_CONTROL_tcon7_hl(data)                              (0x0000FFFF&(data))
#define  TCON_TCON7_FRAME_HL_CONTROL_get_tcon7_frame_offset(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON7_FRAME_HL_CONTROL_get_tcon7_hl(data)                          (0x0000FFFF&(data))

#define  TCON_TCON8_HSE                                                         0x1802D310
#define  TCON_TCON8_HSE_reg_addr                                                 "0xB802D310"
#define  TCON_TCON8_HSE_reg                                                      0xB802D310
#define  TCON_TCON8_HSE_inst_addr                                                "0x0032"
#define  set_TCON_TCON8_HSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON8_HSE_reg)=data)
#define  get_TCON_TCON8_HSE_reg                                                  (*((volatile unsigned int*)TCON_TCON8_HSE_reg))
#define  TCON_TCON8_HSE_dummy_8_shift                                            (31)
#define  TCON_TCON8_HSE_tcon8_hstart_shift                                       (16)
#define  TCON_TCON8_HSE_tcon8_hend_shift                                         (0)
#define  TCON_TCON8_HSE_dummy_8_mask                                             (0x80000000)
#define  TCON_TCON8_HSE_tcon8_hstart_mask                                        (0x7FFF0000)
#define  TCON_TCON8_HSE_tcon8_hend_mask                                          (0x00007FFF)
#define  TCON_TCON8_HSE_dummy_8(data)                                            (0x80000000&((data)<<31))
#define  TCON_TCON8_HSE_tcon8_hstart(data)                                       (0x7FFF0000&((data)<<16))
#define  TCON_TCON8_HSE_tcon8_hend(data)                                         (0x00007FFF&(data))
#define  TCON_TCON8_HSE_get_dummy_8(data)                                        ((0x80000000&(data))>>31)
#define  TCON_TCON8_HSE_get_tcon8_hstart(data)                                   ((0x7FFF0000&(data))>>16)
#define  TCON_TCON8_HSE_get_tcon8_hend(data)                                     (0x00007FFF&(data))

#define  TCON_TCON8_VSE                                                         0x1802D314
#define  TCON_TCON8_VSE_reg_addr                                                 "0xB802D314"
#define  TCON_TCON8_VSE_reg                                                      0xB802D314
#define  TCON_TCON8_VSE_inst_addr                                                "0x0033"
#define  set_TCON_TCON8_VSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON8_VSE_reg)=data)
#define  get_TCON_TCON8_VSE_reg                                                  (*((volatile unsigned int*)TCON_TCON8_VSE_reg))
#define  TCON_TCON8_VSE_tcon8_vstart_shift                                       (16)
#define  TCON_TCON8_VSE_tcon8_vend_shift                                         (0)
#define  TCON_TCON8_VSE_tcon8_vstart_mask                                        (0x1FFF0000)
#define  TCON_TCON8_VSE_tcon8_vend_mask                                          (0x00001FFF)
#define  TCON_TCON8_VSE_tcon8_vstart(data)                                       (0x1FFF0000&((data)<<16))
#define  TCON_TCON8_VSE_tcon8_vend(data)                                         (0x00001FFF&(data))
#define  TCON_TCON8_VSE_get_tcon8_vstart(data)                                   ((0x1FFF0000&(data))>>16)
#define  TCON_TCON8_VSE_get_tcon8_vend(data)                                     (0x00001FFF&(data))

#define  TCON_TCON8_Ctrl                                                        0x1802D318
#define  TCON_TCON8_Ctrl_reg_addr                                                "0xB802D318"
#define  TCON_TCON8_Ctrl_reg                                                     0xB802D318
#define  TCON_TCON8_Ctrl_inst_addr                                               "0x0034"
#define  set_TCON_TCON8_Ctrl_reg(data)                                           (*((volatile unsigned int*)TCON_TCON8_Ctrl_reg)=data)
#define  get_TCON_TCON8_Ctrl_reg                                                 (*((volatile unsigned int*)TCON_TCON8_Ctrl_reg))
#define  TCON_TCON8_Ctrl_tcon8_l_flag_sel_shift                                  (13)
#define  TCON_TCON8_Ctrl_tcon8_off_opt_shift                                     (12)
#define  TCON_TCON8_Ctrl_tcon8_across_ctrl_reset_shift                           (11)
#define  TCON_TCON8_Ctrl_tcon8_mode_shift                                        (8)
#define  TCON_TCON8_Ctrl_tcon8_en_shift                                          (7)
#define  TCON_TCON8_Ctrl_tcon8_inv_shift                                         (6)
#define  TCON_TCON8_Ctrl_tcon8_comb_inv_shift                                    (5)
#define  TCON_TCON8_Ctrl_tcon8_frame_tog_en_shift                                (3)
#define  TCON_TCON8_Ctrl_tcon8_comb_shift                                        (0)
#define  TCON_TCON8_Ctrl_tcon8_l_flag_sel_mask                                   (0x0003E000)
#define  TCON_TCON8_Ctrl_tcon8_off_opt_mask                                      (0x00001000)
#define  TCON_TCON8_Ctrl_tcon8_across_ctrl_reset_mask                            (0x00000800)
#define  TCON_TCON8_Ctrl_tcon8_mode_mask                                         (0x00000700)
#define  TCON_TCON8_Ctrl_tcon8_en_mask                                           (0x00000080)
#define  TCON_TCON8_Ctrl_tcon8_inv_mask                                          (0x00000040)
#define  TCON_TCON8_Ctrl_tcon8_comb_inv_mask                                     (0x00000020)
#define  TCON_TCON8_Ctrl_tcon8_frame_tog_en_mask                                 (0x00000008)
#define  TCON_TCON8_Ctrl_tcon8_comb_mask                                         (0x00000007)
#define  TCON_TCON8_Ctrl_tcon8_l_flag_sel(data)                                  (0x0003E000&((data)<<13))
#define  TCON_TCON8_Ctrl_tcon8_off_opt(data)                                     (0x00001000&((data)<<12))
#define  TCON_TCON8_Ctrl_tcon8_across_ctrl_reset(data)                           (0x00000800&((data)<<11))
#define  TCON_TCON8_Ctrl_tcon8_mode(data)                                        (0x00000700&((data)<<8))
#define  TCON_TCON8_Ctrl_tcon8_en(data)                                          (0x00000080&((data)<<7))
#define  TCON_TCON8_Ctrl_tcon8_inv(data)                                         (0x00000040&((data)<<6))
#define  TCON_TCON8_Ctrl_tcon8_comb_inv(data)                                    (0x00000020&((data)<<5))
#define  TCON_TCON8_Ctrl_tcon8_frame_tog_en(data)                                (0x00000008&((data)<<3))
#define  TCON_TCON8_Ctrl_tcon8_comb(data)                                        (0x00000007&(data))
#define  TCON_TCON8_Ctrl_get_tcon8_l_flag_sel(data)                              ((0x0003E000&(data))>>13)
#define  TCON_TCON8_Ctrl_get_tcon8_off_opt(data)                                 ((0x00001000&(data))>>12)
#define  TCON_TCON8_Ctrl_get_tcon8_across_ctrl_reset(data)                       ((0x00000800&(data))>>11)
#define  TCON_TCON8_Ctrl_get_tcon8_mode(data)                                    ((0x00000700&(data))>>8)
#define  TCON_TCON8_Ctrl_get_tcon8_en(data)                                      ((0x00000080&(data))>>7)
#define  TCON_TCON8_Ctrl_get_tcon8_inv(data)                                     ((0x00000040&(data))>>6)
#define  TCON_TCON8_Ctrl_get_tcon8_comb_inv(data)                                ((0x00000020&(data))>>5)
#define  TCON_TCON8_Ctrl_get_tcon8_frame_tog_en(data)                            ((0x00000008&(data))>>3)
#define  TCON_TCON8_Ctrl_get_tcon8_comb(data)                                    (0x00000007&(data))

#define  TCON_TCON8_ACROSS_LINE_CONTROL3                                        0x1802D31C
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_reg_addr                                "0xB802D31C"
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_reg                                     0xB802D31C
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_inst_addr                               "0x0035"
#define  set_TCON_TCON8_ACROSS_LINE_CONTROL3_reg(data)                           (*((volatile unsigned int*)TCON_TCON8_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON8_ACROSS_LINE_CONTROL3_reg                                 (*((volatile unsigned int*)TCON_TCON8_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_tcon8_across_frame_int_shift            (28)
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_tcon8_across_ctrl3_rp_shift             (16)
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_tcon8_hl_num_shift                      (12)
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_tcon8_across_ctrl3_hp_shift             (0)
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_tcon8_across_frame_int_mask             (0x10000000)
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_tcon8_across_ctrl3_rp_mask              (0x0FFF0000)
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_tcon8_hl_num_mask                       (0x0000F000)
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_tcon8_across_ctrl3_hp_mask              (0x00000FFF)
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_tcon8_across_frame_int(data)            (0x10000000&((data)<<28))
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_tcon8_across_ctrl3_rp(data)             (0x0FFF0000&((data)<<16))
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_tcon8_hl_num(data)                      (0x0000F000&((data)<<12))
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_tcon8_across_ctrl3_hp(data)             (0x00000FFF&(data))
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_get_tcon8_across_frame_int(data)        ((0x10000000&(data))>>28)
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_get_tcon8_across_ctrl3_rp(data)         ((0x0FFF0000&(data))>>16)
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_get_tcon8_hl_num(data)                  ((0x0000F000&(data))>>12)
#define  TCON_TCON8_ACROSS_LINE_CONTROL3_get_tcon8_across_ctrl3_hp(data)         (0x00000FFF&(data))

#define  TCON_TCON8_ACROSS_FRAME_CONTROL                                        0x1802D320
#define  TCON_TCON8_ACROSS_FRAME_CONTROL_reg_addr                                "0xB802D320"
#define  TCON_TCON8_ACROSS_FRAME_CONTROL_reg                                     0xB802D320
#define  TCON_TCON8_ACROSS_FRAME_CONTROL_inst_addr                               "0x0036"
#define  set_TCON_TCON8_ACROSS_FRAME_CONTROL_reg(data)                           (*((volatile unsigned int*)TCON_TCON8_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON8_ACROSS_FRAME_CONTROL_reg                                 (*((volatile unsigned int*)TCON_TCON8_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON8_ACROSS_FRAME_CONTROL_tcon8_frame_lp_shift                    (16)
#define  TCON_TCON8_ACROSS_FRAME_CONTROL_tcon8_frame_hp_shift                    (0)
#define  TCON_TCON8_ACROSS_FRAME_CONTROL_tcon8_frame_lp_mask                     (0x0FFF0000)
#define  TCON_TCON8_ACROSS_FRAME_CONTROL_tcon8_frame_hp_mask                     (0x00000FFF)
#define  TCON_TCON8_ACROSS_FRAME_CONTROL_tcon8_frame_lp(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON8_ACROSS_FRAME_CONTROL_tcon8_frame_hp(data)                    (0x00000FFF&(data))
#define  TCON_TCON8_ACROSS_FRAME_CONTROL_get_tcon8_frame_lp(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON8_ACROSS_FRAME_CONTROL_get_tcon8_frame_hp(data)                (0x00000FFF&(data))

#define  TCON_TCON8_FRAME_HL_CONTROL                                            0x1802D324
#define  TCON_TCON8_FRAME_HL_CONTROL_reg_addr                                    "0xB802D324"
#define  TCON_TCON8_FRAME_HL_CONTROL_reg                                         0xB802D324
#define  TCON_TCON8_FRAME_HL_CONTROL_inst_addr                                   "0x0037"
#define  set_TCON_TCON8_FRAME_HL_CONTROL_reg(data)                               (*((volatile unsigned int*)TCON_TCON8_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON8_FRAME_HL_CONTROL_reg                                     (*((volatile unsigned int*)TCON_TCON8_FRAME_HL_CONTROL_reg))
#define  TCON_TCON8_FRAME_HL_CONTROL_tcon8_frame_offset_shift                    (16)
#define  TCON_TCON8_FRAME_HL_CONTROL_tcon8_hl_shift                              (0)
#define  TCON_TCON8_FRAME_HL_CONTROL_tcon8_frame_offset_mask                     (0x0FFF0000)
#define  TCON_TCON8_FRAME_HL_CONTROL_tcon8_hl_mask                               (0x0000FFFF)
#define  TCON_TCON8_FRAME_HL_CONTROL_tcon8_frame_offset(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON8_FRAME_HL_CONTROL_tcon8_hl(data)                              (0x0000FFFF&(data))
#define  TCON_TCON8_FRAME_HL_CONTROL_get_tcon8_frame_offset(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON8_FRAME_HL_CONTROL_get_tcon8_hl(data)                          (0x0000FFFF&(data))

#define  TCON_TCON9_HSE                                                         0x1802D330
#define  TCON_TCON9_HSE_reg_addr                                                 "0xB802D330"
#define  TCON_TCON9_HSE_reg                                                      0xB802D330
#define  TCON_TCON9_HSE_inst_addr                                                "0x0038"
#define  set_TCON_TCON9_HSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON9_HSE_reg)=data)
#define  get_TCON_TCON9_HSE_reg                                                  (*((volatile unsigned int*)TCON_TCON9_HSE_reg))
#define  TCON_TCON9_HSE_dummy_9_shift                                            (31)
#define  TCON_TCON9_HSE_tcon9_hstart_shift                                       (16)
#define  TCON_TCON9_HSE_tcon9_hend_shift                                         (0)
#define  TCON_TCON9_HSE_dummy_9_mask                                             (0x80000000)
#define  TCON_TCON9_HSE_tcon9_hstart_mask                                        (0x7FFF0000)
#define  TCON_TCON9_HSE_tcon9_hend_mask                                          (0x00007FFF)
#define  TCON_TCON9_HSE_dummy_9(data)                                            (0x80000000&((data)<<31))
#define  TCON_TCON9_HSE_tcon9_hstart(data)                                       (0x7FFF0000&((data)<<16))
#define  TCON_TCON9_HSE_tcon9_hend(data)                                         (0x00007FFF&(data))
#define  TCON_TCON9_HSE_get_dummy_9(data)                                        ((0x80000000&(data))>>31)
#define  TCON_TCON9_HSE_get_tcon9_hstart(data)                                   ((0x7FFF0000&(data))>>16)
#define  TCON_TCON9_HSE_get_tcon9_hend(data)                                     (0x00007FFF&(data))

#define  TCON_TCON9_VSE                                                         0x1802D334
#define  TCON_TCON9_VSE_reg_addr                                                 "0xB802D334"
#define  TCON_TCON9_VSE_reg                                                      0xB802D334
#define  TCON_TCON9_VSE_inst_addr                                                "0x0039"
#define  set_TCON_TCON9_VSE_reg(data)                                            (*((volatile unsigned int*)TCON_TCON9_VSE_reg)=data)
#define  get_TCON_TCON9_VSE_reg                                                  (*((volatile unsigned int*)TCON_TCON9_VSE_reg))
#define  TCON_TCON9_VSE_tcon9_vstart_shift                                       (16)
#define  TCON_TCON9_VSE_tcon9_vend_shift                                         (0)
#define  TCON_TCON9_VSE_tcon9_vstart_mask                                        (0x1FFF0000)
#define  TCON_TCON9_VSE_tcon9_vend_mask                                          (0x00001FFF)
#define  TCON_TCON9_VSE_tcon9_vstart(data)                                       (0x1FFF0000&((data)<<16))
#define  TCON_TCON9_VSE_tcon9_vend(data)                                         (0x00001FFF&(data))
#define  TCON_TCON9_VSE_get_tcon9_vstart(data)                                   ((0x1FFF0000&(data))>>16)
#define  TCON_TCON9_VSE_get_tcon9_vend(data)                                     (0x00001FFF&(data))

#define  TCON_TCON9_Ctrl                                                        0x1802D338
#define  TCON_TCON9_Ctrl_reg_addr                                                "0xB802D338"
#define  TCON_TCON9_Ctrl_reg                                                     0xB802D338
#define  TCON_TCON9_Ctrl_inst_addr                                               "0x003A"
#define  set_TCON_TCON9_Ctrl_reg(data)                                           (*((volatile unsigned int*)TCON_TCON9_Ctrl_reg)=data)
#define  get_TCON_TCON9_Ctrl_reg                                                 (*((volatile unsigned int*)TCON_TCON9_Ctrl_reg))
#define  TCON_TCON9_Ctrl_tcon9_l_flag_sel_shift                                  (13)
#define  TCON_TCON9_Ctrl_tcon9_off_opt_shift                                     (12)
#define  TCON_TCON9_Ctrl_tcon9_across_ctrl_reset_shift                           (11)
#define  TCON_TCON9_Ctrl_tcon9_mode_shift                                        (8)
#define  TCON_TCON9_Ctrl_tcon9_en_shift                                          (7)
#define  TCON_TCON9_Ctrl_tcon9_inv_shift                                         (6)
#define  TCON_TCON9_Ctrl_tcon9_comb_inv_shift                                    (5)
#define  TCON_TCON9_Ctrl_tcon9_frame_tog_en_shift                                (3)
#define  TCON_TCON9_Ctrl_tcon9_comb_shift                                        (0)
#define  TCON_TCON9_Ctrl_tcon9_l_flag_sel_mask                                   (0x0003E000)
#define  TCON_TCON9_Ctrl_tcon9_off_opt_mask                                      (0x00001000)
#define  TCON_TCON9_Ctrl_tcon9_across_ctrl_reset_mask                            (0x00000800)
#define  TCON_TCON9_Ctrl_tcon9_mode_mask                                         (0x00000700)
#define  TCON_TCON9_Ctrl_tcon9_en_mask                                           (0x00000080)
#define  TCON_TCON9_Ctrl_tcon9_inv_mask                                          (0x00000040)
#define  TCON_TCON9_Ctrl_tcon9_comb_inv_mask                                     (0x00000020)
#define  TCON_TCON9_Ctrl_tcon9_frame_tog_en_mask                                 (0x00000008)
#define  TCON_TCON9_Ctrl_tcon9_comb_mask                                         (0x00000007)
#define  TCON_TCON9_Ctrl_tcon9_l_flag_sel(data)                                  (0x0003E000&((data)<<13))
#define  TCON_TCON9_Ctrl_tcon9_off_opt(data)                                     (0x00001000&((data)<<12))
#define  TCON_TCON9_Ctrl_tcon9_across_ctrl_reset(data)                           (0x00000800&((data)<<11))
#define  TCON_TCON9_Ctrl_tcon9_mode(data)                                        (0x00000700&((data)<<8))
#define  TCON_TCON9_Ctrl_tcon9_en(data)                                          (0x00000080&((data)<<7))
#define  TCON_TCON9_Ctrl_tcon9_inv(data)                                         (0x00000040&((data)<<6))
#define  TCON_TCON9_Ctrl_tcon9_comb_inv(data)                                    (0x00000020&((data)<<5))
#define  TCON_TCON9_Ctrl_tcon9_frame_tog_en(data)                                (0x00000008&((data)<<3))
#define  TCON_TCON9_Ctrl_tcon9_comb(data)                                        (0x00000007&(data))
#define  TCON_TCON9_Ctrl_get_tcon9_l_flag_sel(data)                              ((0x0003E000&(data))>>13)
#define  TCON_TCON9_Ctrl_get_tcon9_off_opt(data)                                 ((0x00001000&(data))>>12)
#define  TCON_TCON9_Ctrl_get_tcon9_across_ctrl_reset(data)                       ((0x00000800&(data))>>11)
#define  TCON_TCON9_Ctrl_get_tcon9_mode(data)                                    ((0x00000700&(data))>>8)
#define  TCON_TCON9_Ctrl_get_tcon9_en(data)                                      ((0x00000080&(data))>>7)
#define  TCON_TCON9_Ctrl_get_tcon9_inv(data)                                     ((0x00000040&(data))>>6)
#define  TCON_TCON9_Ctrl_get_tcon9_comb_inv(data)                                ((0x00000020&(data))>>5)
#define  TCON_TCON9_Ctrl_get_tcon9_frame_tog_en(data)                            ((0x00000008&(data))>>3)
#define  TCON_TCON9_Ctrl_get_tcon9_comb(data)                                    (0x00000007&(data))

#define  TCON_TCON9_ACROSS_LINE_CONTROL3                                        0x1802D33C
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_reg_addr                                "0xB802D33C"
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_reg                                     0xB802D33C
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_inst_addr                               "0x003B"
#define  set_TCON_TCON9_ACROSS_LINE_CONTROL3_reg(data)                           (*((volatile unsigned int*)TCON_TCON9_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON9_ACROSS_LINE_CONTROL3_reg                                 (*((volatile unsigned int*)TCON_TCON9_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_tcon9_across_frame_int_shift            (28)
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_tcon9_across_ctrl3_rp_shift             (16)
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_tcon9_hl_num_shift                      (12)
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_tcon9_across_ctrl3_hp_shift             (0)
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_tcon9_across_frame_int_mask             (0x10000000)
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_tcon9_across_ctrl3_rp_mask              (0x0FFF0000)
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_tcon9_hl_num_mask                       (0x0000F000)
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_tcon9_across_ctrl3_hp_mask              (0x00000FFF)
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_tcon9_across_frame_int(data)            (0x10000000&((data)<<28))
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_tcon9_across_ctrl3_rp(data)             (0x0FFF0000&((data)<<16))
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_tcon9_hl_num(data)                      (0x0000F000&((data)<<12))
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_tcon9_across_ctrl3_hp(data)             (0x00000FFF&(data))
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_get_tcon9_across_frame_int(data)        ((0x10000000&(data))>>28)
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_get_tcon9_across_ctrl3_rp(data)         ((0x0FFF0000&(data))>>16)
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_get_tcon9_hl_num(data)                  ((0x0000F000&(data))>>12)
#define  TCON_TCON9_ACROSS_LINE_CONTROL3_get_tcon9_across_ctrl3_hp(data)         (0x00000FFF&(data))

#define  TCON_TCON9_ACROSS_FRAME_CONTROL                                        0x1802D340
#define  TCON_TCON9_ACROSS_FRAME_CONTROL_reg_addr                                "0xB802D340"
#define  TCON_TCON9_ACROSS_FRAME_CONTROL_reg                                     0xB802D340
#define  TCON_TCON9_ACROSS_FRAME_CONTROL_inst_addr                               "0x003C"
#define  set_TCON_TCON9_ACROSS_FRAME_CONTROL_reg(data)                           (*((volatile unsigned int*)TCON_TCON9_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON9_ACROSS_FRAME_CONTROL_reg                                 (*((volatile unsigned int*)TCON_TCON9_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON9_ACROSS_FRAME_CONTROL_tcon9_frame_lp_shift                    (16)
#define  TCON_TCON9_ACROSS_FRAME_CONTROL_tcon9_frame_hp_shift                    (0)
#define  TCON_TCON9_ACROSS_FRAME_CONTROL_tcon9_frame_lp_mask                     (0x0FFF0000)
#define  TCON_TCON9_ACROSS_FRAME_CONTROL_tcon9_frame_hp_mask                     (0x00000FFF)
#define  TCON_TCON9_ACROSS_FRAME_CONTROL_tcon9_frame_lp(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON9_ACROSS_FRAME_CONTROL_tcon9_frame_hp(data)                    (0x00000FFF&(data))
#define  TCON_TCON9_ACROSS_FRAME_CONTROL_get_tcon9_frame_lp(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON9_ACROSS_FRAME_CONTROL_get_tcon9_frame_hp(data)                (0x00000FFF&(data))

#define  TCON_TCON9_FRAME_HL_CONTROL                                            0x1802D344
#define  TCON_TCON9_FRAME_HL_CONTROL_reg_addr                                    "0xB802D344"
#define  TCON_TCON9_FRAME_HL_CONTROL_reg                                         0xB802D344
#define  TCON_TCON9_FRAME_HL_CONTROL_inst_addr                                   "0x003D"
#define  set_TCON_TCON9_FRAME_HL_CONTROL_reg(data)                               (*((volatile unsigned int*)TCON_TCON9_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON9_FRAME_HL_CONTROL_reg                                     (*((volatile unsigned int*)TCON_TCON9_FRAME_HL_CONTROL_reg))
#define  TCON_TCON9_FRAME_HL_CONTROL_tcon9_frame_offset_shift                    (16)
#define  TCON_TCON9_FRAME_HL_CONTROL_tcon9_hl_shift                              (0)
#define  TCON_TCON9_FRAME_HL_CONTROL_tcon9_frame_offset_mask                     (0x0FFF0000)
#define  TCON_TCON9_FRAME_HL_CONTROL_tcon9_hl_mask                               (0x0000FFFF)
#define  TCON_TCON9_FRAME_HL_CONTROL_tcon9_frame_offset(data)                    (0x0FFF0000&((data)<<16))
#define  TCON_TCON9_FRAME_HL_CONTROL_tcon9_hl(data)                              (0x0000FFFF&(data))
#define  TCON_TCON9_FRAME_HL_CONTROL_get_tcon9_frame_offset(data)                ((0x0FFF0000&(data))>>16)
#define  TCON_TCON9_FRAME_HL_CONTROL_get_tcon9_hl(data)                          (0x0000FFFF&(data))

#define  TCON_TCON10_HSE                                                        0x1802D350
#define  TCON_TCON10_HSE_reg_addr                                                "0xB802D350"
#define  TCON_TCON10_HSE_reg                                                     0xB802D350
#define  TCON_TCON10_HSE_inst_addr                                               "0x003E"
#define  set_TCON_TCON10_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON10_HSE_reg)=data)
#define  get_TCON_TCON10_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON10_HSE_reg))
#define  TCON_TCON10_HSE_dummy_10_shift                                          (31)
#define  TCON_TCON10_HSE_tcon10_hstart_shift                                     (16)
#define  TCON_TCON10_HSE_tcon10_hend_shift                                       (0)
#define  TCON_TCON10_HSE_dummy_10_mask                                           (0x80000000)
#define  TCON_TCON10_HSE_tcon10_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON10_HSE_tcon10_hend_mask                                        (0x00007FFF)
#define  TCON_TCON10_HSE_dummy_10(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON10_HSE_tcon10_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON10_HSE_tcon10_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON10_HSE_get_dummy_10(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON10_HSE_get_tcon10_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON10_HSE_get_tcon10_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON10_VSE                                                        0x1802D354
#define  TCON_TCON10_VSE_reg_addr                                                "0xB802D354"
#define  TCON_TCON10_VSE_reg                                                     0xB802D354
#define  TCON_TCON10_VSE_inst_addr                                               "0x003F"
#define  set_TCON_TCON10_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON10_VSE_reg)=data)
#define  get_TCON_TCON10_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON10_VSE_reg))
#define  TCON_TCON10_VSE_tcon10_vstart_shift                                     (16)
#define  TCON_TCON10_VSE_tcon10_vend_shift                                       (0)
#define  TCON_TCON10_VSE_tcon10_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON10_VSE_tcon10_vend_mask                                        (0x00001FFF)
#define  TCON_TCON10_VSE_tcon10_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON10_VSE_tcon10_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON10_VSE_get_tcon10_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON10_VSE_get_tcon10_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON10_Ctrl                                                       0x1802D358
#define  TCON_TCON10_Ctrl_reg_addr                                               "0xB802D358"
#define  TCON_TCON10_Ctrl_reg                                                    0xB802D358
#define  TCON_TCON10_Ctrl_inst_addr                                              "0x0040"
#define  set_TCON_TCON10_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON10_Ctrl_reg)=data)
#define  get_TCON_TCON10_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON10_Ctrl_reg))
#define  TCON_TCON10_Ctrl_tcon10_l_flag_sel_shift                                (13)
#define  TCON_TCON10_Ctrl_tcon10_off_opt_shift                                   (12)
#define  TCON_TCON10_Ctrl_tcon10_across_ctrl_reset_shift                         (11)
#define  TCON_TCON10_Ctrl_tcon10_mode_shift                                      (8)
#define  TCON_TCON10_Ctrl_tcon10_en_shift                                        (7)
#define  TCON_TCON10_Ctrl_tcon10_inv_shift                                       (6)
#define  TCON_TCON10_Ctrl_tcon10_comb_inv_shift                                  (5)
#define  TCON_TCON10_Ctrl_tcon10_frame_tog_en_shift                              (3)
#define  TCON_TCON10_Ctrl_tcon10_comb_shift                                      (0)
#define  TCON_TCON10_Ctrl_tcon10_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON10_Ctrl_tcon10_off_opt_mask                                    (0x00001000)
#define  TCON_TCON10_Ctrl_tcon10_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON10_Ctrl_tcon10_mode_mask                                       (0x00000700)
#define  TCON_TCON10_Ctrl_tcon10_en_mask                                         (0x00000080)
#define  TCON_TCON10_Ctrl_tcon10_inv_mask                                        (0x00000040)
#define  TCON_TCON10_Ctrl_tcon10_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON10_Ctrl_tcon10_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON10_Ctrl_tcon10_comb_mask                                       (0x00000007)
#define  TCON_TCON10_Ctrl_tcon10_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON10_Ctrl_tcon10_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON10_Ctrl_tcon10_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON10_Ctrl_tcon10_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON10_Ctrl_tcon10_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON10_Ctrl_tcon10_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON10_Ctrl_tcon10_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON10_Ctrl_tcon10_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON10_Ctrl_tcon10_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON10_Ctrl_get_tcon10_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON10_Ctrl_get_tcon10_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON10_Ctrl_get_tcon10_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON10_Ctrl_get_tcon10_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON10_Ctrl_get_tcon10_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON10_Ctrl_get_tcon10_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON10_Ctrl_get_tcon10_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON10_Ctrl_get_tcon10_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON10_Ctrl_get_tcon10_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON10_ACROSS_LINE_CONTROL3                                       0x1802D35C
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D35C"
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_reg                                    0xB802D35C
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_inst_addr                              "0x0041"
#define  set_TCON_TCON10_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON10_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON10_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON10_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_tcon10_across_frame_int_shift          (28)
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_tcon10_across_ctrl3_rp_shift           (16)
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_tcon10_hl_num_shift                    (12)
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_tcon10_across_ctrl3_hp_shift           (0)
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_tcon10_across_frame_int_mask           (0x10000000)
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_tcon10_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_tcon10_hl_num_mask                     (0x0000F000)
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_tcon10_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_tcon10_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_tcon10_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_tcon10_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_tcon10_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_get_tcon10_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_get_tcon10_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_get_tcon10_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON10_ACROSS_LINE_CONTROL3_get_tcon10_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON10_ACROSS_FRAME_CONTROL                                       0x1802D360
#define  TCON_TCON10_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D360"
#define  TCON_TCON10_ACROSS_FRAME_CONTROL_reg                                    0xB802D360
#define  TCON_TCON10_ACROSS_FRAME_CONTROL_inst_addr                              "0x0042"
#define  set_TCON_TCON10_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON10_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON10_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON10_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON10_ACROSS_FRAME_CONTROL_tcon10_frame_lp_shift                  (16)
#define  TCON_TCON10_ACROSS_FRAME_CONTROL_tcon10_frame_hp_shift                  (0)
#define  TCON_TCON10_ACROSS_FRAME_CONTROL_tcon10_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON10_ACROSS_FRAME_CONTROL_tcon10_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON10_ACROSS_FRAME_CONTROL_tcon10_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON10_ACROSS_FRAME_CONTROL_tcon10_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON10_ACROSS_FRAME_CONTROL_get_tcon10_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON10_ACROSS_FRAME_CONTROL_get_tcon10_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON10_FRAME_HL_CONTROL                                           0x1802D364
#define  TCON_TCON10_FRAME_HL_CONTROL_reg_addr                                   "0xB802D364"
#define  TCON_TCON10_FRAME_HL_CONTROL_reg                                        0xB802D364
#define  TCON_TCON10_FRAME_HL_CONTROL_inst_addr                                  "0x0043"
#define  set_TCON_TCON10_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON10_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON10_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON10_FRAME_HL_CONTROL_reg))
#define  TCON_TCON10_FRAME_HL_CONTROL_tcon10_frame_offset_shift                  (16)
#define  TCON_TCON10_FRAME_HL_CONTROL_tcon10_hl_shift                            (0)
#define  TCON_TCON10_FRAME_HL_CONTROL_tcon10_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON10_FRAME_HL_CONTROL_tcon10_hl_mask                             (0x0000FFFF)
#define  TCON_TCON10_FRAME_HL_CONTROL_tcon10_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON10_FRAME_HL_CONTROL_tcon10_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON10_FRAME_HL_CONTROL_get_tcon10_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON10_FRAME_HL_CONTROL_get_tcon10_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON11_HSE                                                        0x1802D370
#define  TCON_TCON11_HSE_reg_addr                                                "0xB802D370"
#define  TCON_TCON11_HSE_reg                                                     0xB802D370
#define  TCON_TCON11_HSE_inst_addr                                               "0x0044"
#define  set_TCON_TCON11_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON11_HSE_reg)=data)
#define  get_TCON_TCON11_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON11_HSE_reg))
#define  TCON_TCON11_HSE_dummy_11_shift                                          (31)
#define  TCON_TCON11_HSE_tcon11_hstart_shift                                     (16)
#define  TCON_TCON11_HSE_tcon11_hend_shift                                       (0)
#define  TCON_TCON11_HSE_dummy_11_mask                                           (0x80000000)
#define  TCON_TCON11_HSE_tcon11_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON11_HSE_tcon11_hend_mask                                        (0x00007FFF)
#define  TCON_TCON11_HSE_dummy_11(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON11_HSE_tcon11_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON11_HSE_tcon11_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON11_HSE_get_dummy_11(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON11_HSE_get_tcon11_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON11_HSE_get_tcon11_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON11_VSE                                                        0x1802D374
#define  TCON_TCON11_VSE_reg_addr                                                "0xB802D374"
#define  TCON_TCON11_VSE_reg                                                     0xB802D374
#define  TCON_TCON11_VSE_inst_addr                                               "0x0045"
#define  set_TCON_TCON11_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON11_VSE_reg)=data)
#define  get_TCON_TCON11_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON11_VSE_reg))
#define  TCON_TCON11_VSE_tcon11_vstart_shift                                     (16)
#define  TCON_TCON11_VSE_tcon11_vend_shift                                       (0)
#define  TCON_TCON11_VSE_tcon11_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON11_VSE_tcon11_vend_mask                                        (0x00001FFF)
#define  TCON_TCON11_VSE_tcon11_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON11_VSE_tcon11_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON11_VSE_get_tcon11_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON11_VSE_get_tcon11_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON11_Ctrl                                                       0x1802D378
#define  TCON_TCON11_Ctrl_reg_addr                                               "0xB802D378"
#define  TCON_TCON11_Ctrl_reg                                                    0xB802D378
#define  TCON_TCON11_Ctrl_inst_addr                                              "0x0046"
#define  set_TCON_TCON11_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON11_Ctrl_reg)=data)
#define  get_TCON_TCON11_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON11_Ctrl_reg))
#define  TCON_TCON11_Ctrl_tcon11_l_flag_sel_shift                                (13)
#define  TCON_TCON11_Ctrl_tcon11_off_opt_shift                                   (12)
#define  TCON_TCON11_Ctrl_tcon11_across_ctrl_reset_shift                         (11)
#define  TCON_TCON11_Ctrl_tcon11_mode_shift                                      (8)
#define  TCON_TCON11_Ctrl_tcon11_en_shift                                        (7)
#define  TCON_TCON11_Ctrl_tcon11_inv_shift                                       (6)
#define  TCON_TCON11_Ctrl_tcon11_comb_inv_shift                                  (5)
#define  TCON_TCON11_Ctrl_tcon11_frame_tog_en_shift                              (3)
#define  TCON_TCON11_Ctrl_tcon11_comb_shift                                      (0)
#define  TCON_TCON11_Ctrl_tcon11_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON11_Ctrl_tcon11_off_opt_mask                                    (0x00001000)
#define  TCON_TCON11_Ctrl_tcon11_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON11_Ctrl_tcon11_mode_mask                                       (0x00000700)
#define  TCON_TCON11_Ctrl_tcon11_en_mask                                         (0x00000080)
#define  TCON_TCON11_Ctrl_tcon11_inv_mask                                        (0x00000040)
#define  TCON_TCON11_Ctrl_tcon11_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON11_Ctrl_tcon11_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON11_Ctrl_tcon11_comb_mask                                       (0x00000007)
#define  TCON_TCON11_Ctrl_tcon11_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON11_Ctrl_tcon11_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON11_Ctrl_tcon11_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON11_Ctrl_tcon11_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON11_Ctrl_tcon11_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON11_Ctrl_tcon11_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON11_Ctrl_tcon11_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON11_Ctrl_tcon11_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON11_Ctrl_tcon11_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON11_Ctrl_get_tcon11_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON11_Ctrl_get_tcon11_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON11_Ctrl_get_tcon11_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON11_Ctrl_get_tcon11_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON11_Ctrl_get_tcon11_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON11_Ctrl_get_tcon11_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON11_Ctrl_get_tcon11_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON11_Ctrl_get_tcon11_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON11_Ctrl_get_tcon11_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON11_ACROSS_LINE_CONTROL3                                       0x1802D37C
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D37C"
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_reg                                    0xB802D37C
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_inst_addr                              "0x0047"
#define  set_TCON_TCON11_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON11_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON11_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON11_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_tcon11_across_frame_int_shift          (28)
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_tcon11_across_ctrl3_rp_shift           (16)
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_tcon11_hl_num_shift                    (12)
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_tcon11_across_ctrl3_hp_shift           (0)
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_tcon11_across_frame_int_mask           (0x10000000)
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_tcon11_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_tcon11_hl_num_mask                     (0x0000F000)
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_tcon11_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_tcon11_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_tcon11_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_tcon11_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_tcon11_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_get_tcon11_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_get_tcon11_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_get_tcon11_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON11_ACROSS_LINE_CONTROL3_get_tcon11_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON11_ACROSS_FRAME_CONTROL                                       0x1802D380
#define  TCON_TCON11_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D380"
#define  TCON_TCON11_ACROSS_FRAME_CONTROL_reg                                    0xB802D380
#define  TCON_TCON11_ACROSS_FRAME_CONTROL_inst_addr                              "0x0048"
#define  set_TCON_TCON11_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON11_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON11_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON11_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON11_ACROSS_FRAME_CONTROL_tcon11_frame_lp_shift                  (16)
#define  TCON_TCON11_ACROSS_FRAME_CONTROL_tcon11_frame_hp_shift                  (0)
#define  TCON_TCON11_ACROSS_FRAME_CONTROL_tcon11_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON11_ACROSS_FRAME_CONTROL_tcon11_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON11_ACROSS_FRAME_CONTROL_tcon11_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON11_ACROSS_FRAME_CONTROL_tcon11_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON11_ACROSS_FRAME_CONTROL_get_tcon11_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON11_ACROSS_FRAME_CONTROL_get_tcon11_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON11_FRAME_HL_CONTROL                                           0x1802D384
#define  TCON_TCON11_FRAME_HL_CONTROL_reg_addr                                   "0xB802D384"
#define  TCON_TCON11_FRAME_HL_CONTROL_reg                                        0xB802D384
#define  TCON_TCON11_FRAME_HL_CONTROL_inst_addr                                  "0x0049"
#define  set_TCON_TCON11_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON11_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON11_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON11_FRAME_HL_CONTROL_reg))
#define  TCON_TCON11_FRAME_HL_CONTROL_tcon11_frame_offset_shift                  (16)
#define  TCON_TCON11_FRAME_HL_CONTROL_tcon11_hl_shift                            (0)
#define  TCON_TCON11_FRAME_HL_CONTROL_tcon11_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON11_FRAME_HL_CONTROL_tcon11_hl_mask                             (0x0000FFFF)
#define  TCON_TCON11_FRAME_HL_CONTROL_tcon11_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON11_FRAME_HL_CONTROL_tcon11_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON11_FRAME_HL_CONTROL_get_tcon11_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON11_FRAME_HL_CONTROL_get_tcon11_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON12_HSE                                                        0x1802D390
#define  TCON_TCON12_HSE_reg_addr                                                "0xB802D390"
#define  TCON_TCON12_HSE_reg                                                     0xB802D390
#define  TCON_TCON12_HSE_inst_addr                                               "0x004A"
#define  set_TCON_TCON12_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON12_HSE_reg)=data)
#define  get_TCON_TCON12_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON12_HSE_reg))
#define  TCON_TCON12_HSE_dummy_12_shift                                          (31)
#define  TCON_TCON12_HSE_tcon12_hstart_shift                                     (16)
#define  TCON_TCON12_HSE_tcon12_hend_shift                                       (0)
#define  TCON_TCON12_HSE_dummy_12_mask                                           (0x80000000)
#define  TCON_TCON12_HSE_tcon12_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON12_HSE_tcon12_hend_mask                                        (0x00007FFF)
#define  TCON_TCON12_HSE_dummy_12(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON12_HSE_tcon12_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON12_HSE_tcon12_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON12_HSE_get_dummy_12(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON12_HSE_get_tcon12_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON12_HSE_get_tcon12_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON12_VSE                                                        0x1802D394
#define  TCON_TCON12_VSE_reg_addr                                                "0xB802D394"
#define  TCON_TCON12_VSE_reg                                                     0xB802D394
#define  TCON_TCON12_VSE_inst_addr                                               "0x004B"
#define  set_TCON_TCON12_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON12_VSE_reg)=data)
#define  get_TCON_TCON12_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON12_VSE_reg))
#define  TCON_TCON12_VSE_tcon12_vstart_shift                                     (16)
#define  TCON_TCON12_VSE_tcon12_vend_shift                                       (0)
#define  TCON_TCON12_VSE_tcon12_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON12_VSE_tcon12_vend_mask                                        (0x00001FFF)
#define  TCON_TCON12_VSE_tcon12_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON12_VSE_tcon12_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON12_VSE_get_tcon12_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON12_VSE_get_tcon12_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON12_Ctrl                                                       0x1802D398
#define  TCON_TCON12_Ctrl_reg_addr                                               "0xB802D398"
#define  TCON_TCON12_Ctrl_reg                                                    0xB802D398
#define  TCON_TCON12_Ctrl_inst_addr                                              "0x004C"
#define  set_TCON_TCON12_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON12_Ctrl_reg)=data)
#define  get_TCON_TCON12_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON12_Ctrl_reg))
#define  TCON_TCON12_Ctrl_tcon12_l_flag_sel_shift                                (13)
#define  TCON_TCON12_Ctrl_tcon12_off_opt_shift                                   (12)
#define  TCON_TCON12_Ctrl_tcon12_across_ctrl_reset_shift                         (11)
#define  TCON_TCON12_Ctrl_tcon12_mode_shift                                      (8)
#define  TCON_TCON12_Ctrl_tcon12_en_shift                                        (7)
#define  TCON_TCON12_Ctrl_tcon12_inv_shift                                       (6)
#define  TCON_TCON12_Ctrl_tcon12_comb_inv_shift                                  (5)
#define  TCON_TCON12_Ctrl_tcon12_frame_tog_en_shift                              (3)
#define  TCON_TCON12_Ctrl_tcon12_comb_shift                                      (0)
#define  TCON_TCON12_Ctrl_tcon12_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON12_Ctrl_tcon12_off_opt_mask                                    (0x00001000)
#define  TCON_TCON12_Ctrl_tcon12_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON12_Ctrl_tcon12_mode_mask                                       (0x00000700)
#define  TCON_TCON12_Ctrl_tcon12_en_mask                                         (0x00000080)
#define  TCON_TCON12_Ctrl_tcon12_inv_mask                                        (0x00000040)
#define  TCON_TCON12_Ctrl_tcon12_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON12_Ctrl_tcon12_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON12_Ctrl_tcon12_comb_mask                                       (0x00000007)
#define  TCON_TCON12_Ctrl_tcon12_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON12_Ctrl_tcon12_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON12_Ctrl_tcon12_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON12_Ctrl_tcon12_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON12_Ctrl_tcon12_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON12_Ctrl_tcon12_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON12_Ctrl_tcon12_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON12_Ctrl_tcon12_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON12_Ctrl_tcon12_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON12_Ctrl_get_tcon12_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON12_Ctrl_get_tcon12_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON12_Ctrl_get_tcon12_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON12_Ctrl_get_tcon12_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON12_Ctrl_get_tcon12_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON12_Ctrl_get_tcon12_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON12_Ctrl_get_tcon12_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON12_Ctrl_get_tcon12_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON12_Ctrl_get_tcon12_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON12_ACROSS_LINE_CONTROL3                                       0x1802D39C
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D39C"
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_reg                                    0xB802D39C
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_inst_addr                              "0x004D"
#define  set_TCON_TCON12_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON12_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON12_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON12_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_tcon12_across_frame_int_shift          (28)
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_tcon12_across_ctrl3_rp_shift           (16)
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_tcon12_hl_num_shift                    (12)
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_tcon12_across_ctrl3_hp_shift           (0)
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_tcon12_across_frame_int_mask           (0x10000000)
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_tcon12_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_tcon12_hl_num_mask                     (0x0000F000)
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_tcon12_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_tcon12_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_tcon12_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_tcon12_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_tcon12_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_get_tcon12_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_get_tcon12_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_get_tcon12_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON12_ACROSS_LINE_CONTROL3_get_tcon12_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON12_ACROSS_FRAME_CONTROL                                       0x1802D3A0
#define  TCON_TCON12_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D3A0"
#define  TCON_TCON12_ACROSS_FRAME_CONTROL_reg                                    0xB802D3A0
#define  TCON_TCON12_ACROSS_FRAME_CONTROL_inst_addr                              "0x004E"
#define  set_TCON_TCON12_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON12_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON12_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON12_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON12_ACROSS_FRAME_CONTROL_tcon12_frame_lp_shift                  (16)
#define  TCON_TCON12_ACROSS_FRAME_CONTROL_tcon12_frame_hp_shift                  (0)
#define  TCON_TCON12_ACROSS_FRAME_CONTROL_tcon12_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON12_ACROSS_FRAME_CONTROL_tcon12_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON12_ACROSS_FRAME_CONTROL_tcon12_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON12_ACROSS_FRAME_CONTROL_tcon12_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON12_ACROSS_FRAME_CONTROL_get_tcon12_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON12_ACROSS_FRAME_CONTROL_get_tcon12_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON12_FRAME_HL_CONTROL                                           0x1802D3A4
#define  TCON_TCON12_FRAME_HL_CONTROL_reg_addr                                   "0xB802D3A4"
#define  TCON_TCON12_FRAME_HL_CONTROL_reg                                        0xB802D3A4
#define  TCON_TCON12_FRAME_HL_CONTROL_inst_addr                                  "0x004F"
#define  set_TCON_TCON12_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON12_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON12_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON12_FRAME_HL_CONTROL_reg))
#define  TCON_TCON12_FRAME_HL_CONTROL_tcon12_frame_offset_shift                  (16)
#define  TCON_TCON12_FRAME_HL_CONTROL_tcon12_hl_shift                            (0)
#define  TCON_TCON12_FRAME_HL_CONTROL_tcon12_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON12_FRAME_HL_CONTROL_tcon12_hl_mask                             (0x0000FFFF)
#define  TCON_TCON12_FRAME_HL_CONTROL_tcon12_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON12_FRAME_HL_CONTROL_tcon12_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON12_FRAME_HL_CONTROL_get_tcon12_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON12_FRAME_HL_CONTROL_get_tcon12_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON13_HSE                                                        0x1802D3B0
#define  TCON_TCON13_HSE_reg_addr                                                "0xB802D3B0"
#define  TCON_TCON13_HSE_reg                                                     0xB802D3B0
#define  TCON_TCON13_HSE_inst_addr                                               "0x0050"
#define  set_TCON_TCON13_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON13_HSE_reg)=data)
#define  get_TCON_TCON13_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON13_HSE_reg))
#define  TCON_TCON13_HSE_dummy_13_shift                                          (31)
#define  TCON_TCON13_HSE_tcon13_hstart_shift                                     (16)
#define  TCON_TCON13_HSE_tcon13_hend_shift                                       (0)
#define  TCON_TCON13_HSE_dummy_13_mask                                           (0x80000000)
#define  TCON_TCON13_HSE_tcon13_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON13_HSE_tcon13_hend_mask                                        (0x00007FFF)
#define  TCON_TCON13_HSE_dummy_13(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON13_HSE_tcon13_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON13_HSE_tcon13_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON13_HSE_get_dummy_13(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON13_HSE_get_tcon13_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON13_HSE_get_tcon13_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON13_VSE                                                        0x1802D3B4
#define  TCON_TCON13_VSE_reg_addr                                                "0xB802D3B4"
#define  TCON_TCON13_VSE_reg                                                     0xB802D3B4
#define  TCON_TCON13_VSE_inst_addr                                               "0x0051"
#define  set_TCON_TCON13_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON13_VSE_reg)=data)
#define  get_TCON_TCON13_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON13_VSE_reg))
#define  TCON_TCON13_VSE_tcon13_vstart_shift                                     (16)
#define  TCON_TCON13_VSE_tcon13_vend_shift                                       (0)
#define  TCON_TCON13_VSE_tcon13_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON13_VSE_tcon13_vend_mask                                        (0x00001FFF)
#define  TCON_TCON13_VSE_tcon13_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON13_VSE_tcon13_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON13_VSE_get_tcon13_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON13_VSE_get_tcon13_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON13_Ctrl                                                       0x1802D3B8
#define  TCON_TCON13_Ctrl_reg_addr                                               "0xB802D3B8"
#define  TCON_TCON13_Ctrl_reg                                                    0xB802D3B8
#define  TCON_TCON13_Ctrl_inst_addr                                              "0x0052"
#define  set_TCON_TCON13_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON13_Ctrl_reg)=data)
#define  get_TCON_TCON13_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON13_Ctrl_reg))
#define  TCON_TCON13_Ctrl_tcon13_l_flag_sel_shift                                (13)
#define  TCON_TCON13_Ctrl_tcon13_off_opt_shift                                   (12)
#define  TCON_TCON13_Ctrl_tcon13_across_ctrl_reset_shift                         (11)
#define  TCON_TCON13_Ctrl_tcon13_mode_shift                                      (8)
#define  TCON_TCON13_Ctrl_tcon13_en_shift                                        (7)
#define  TCON_TCON13_Ctrl_tcon13_inv_shift                                       (6)
#define  TCON_TCON13_Ctrl_tcon13_comb_inv_shift                                  (5)
#define  TCON_TCON13_Ctrl_tcon13_frame_tog_en_shift                              (3)
#define  TCON_TCON13_Ctrl_tcon13_comb_shift                                      (0)
#define  TCON_TCON13_Ctrl_tcon13_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON13_Ctrl_tcon13_off_opt_mask                                    (0x00001000)
#define  TCON_TCON13_Ctrl_tcon13_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON13_Ctrl_tcon13_mode_mask                                       (0x00000700)
#define  TCON_TCON13_Ctrl_tcon13_en_mask                                         (0x00000080)
#define  TCON_TCON13_Ctrl_tcon13_inv_mask                                        (0x00000040)
#define  TCON_TCON13_Ctrl_tcon13_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON13_Ctrl_tcon13_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON13_Ctrl_tcon13_comb_mask                                       (0x00000007)
#define  TCON_TCON13_Ctrl_tcon13_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON13_Ctrl_tcon13_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON13_Ctrl_tcon13_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON13_Ctrl_tcon13_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON13_Ctrl_tcon13_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON13_Ctrl_tcon13_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON13_Ctrl_tcon13_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON13_Ctrl_tcon13_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON13_Ctrl_tcon13_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON13_Ctrl_get_tcon13_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON13_Ctrl_get_tcon13_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON13_Ctrl_get_tcon13_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON13_Ctrl_get_tcon13_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON13_Ctrl_get_tcon13_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON13_Ctrl_get_tcon13_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON13_Ctrl_get_tcon13_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON13_Ctrl_get_tcon13_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON13_Ctrl_get_tcon13_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON13_ACROSS_LINE_CONTROL3                                       0x1802D3BC
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D3BC"
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_reg                                    0xB802D3BC
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_inst_addr                              "0x0053"
#define  set_TCON_TCON13_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON13_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON13_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON13_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_tcon13_across_frame_int_shift          (28)
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_tcon13_across_ctrl3_rp_shift           (16)
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_tcon13_hl_num_shift                    (12)
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_tcon13_across_ctrl3_hp_shift           (0)
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_tcon13_across_frame_int_mask           (0x10000000)
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_tcon13_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_tcon13_hl_num_mask                     (0x0000F000)
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_tcon13_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_tcon13_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_tcon13_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_tcon13_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_tcon13_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_get_tcon13_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_get_tcon13_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_get_tcon13_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON13_ACROSS_LINE_CONTROL3_get_tcon13_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON13_ACROSS_FRAME_CONTROL                                       0x1802D3C0
#define  TCON_TCON13_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D3C0"
#define  TCON_TCON13_ACROSS_FRAME_CONTROL_reg                                    0xB802D3C0
#define  TCON_TCON13_ACROSS_FRAME_CONTROL_inst_addr                              "0x0054"
#define  set_TCON_TCON13_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON13_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON13_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON13_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON13_ACROSS_FRAME_CONTROL_tcon13_frame_lp_shift                  (16)
#define  TCON_TCON13_ACROSS_FRAME_CONTROL_tcon13_frame_hp_shift                  (0)
#define  TCON_TCON13_ACROSS_FRAME_CONTROL_tcon13_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON13_ACROSS_FRAME_CONTROL_tcon13_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON13_ACROSS_FRAME_CONTROL_tcon13_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON13_ACROSS_FRAME_CONTROL_tcon13_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON13_ACROSS_FRAME_CONTROL_get_tcon13_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON13_ACROSS_FRAME_CONTROL_get_tcon13_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON13_FRAME_HL_CONTROL                                           0x1802D3C4
#define  TCON_TCON13_FRAME_HL_CONTROL_reg_addr                                   "0xB802D3C4"
#define  TCON_TCON13_FRAME_HL_CONTROL_reg                                        0xB802D3C4
#define  TCON_TCON13_FRAME_HL_CONTROL_inst_addr                                  "0x0055"
#define  set_TCON_TCON13_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON13_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON13_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON13_FRAME_HL_CONTROL_reg))
#define  TCON_TCON13_FRAME_HL_CONTROL_tcon13_frame_offset_shift                  (16)
#define  TCON_TCON13_FRAME_HL_CONTROL_tcon13_hl_shift                            (0)
#define  TCON_TCON13_FRAME_HL_CONTROL_tcon13_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON13_FRAME_HL_CONTROL_tcon13_hl_mask                             (0x0000FFFF)
#define  TCON_TCON13_FRAME_HL_CONTROL_tcon13_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON13_FRAME_HL_CONTROL_tcon13_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON13_FRAME_HL_CONTROL_get_tcon13_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON13_FRAME_HL_CONTROL_get_tcon13_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON14_HSE                                                        0x1802D3D0
#define  TCON_TCON14_HSE_reg_addr                                                "0xB802D3D0"
#define  TCON_TCON14_HSE_reg                                                     0xB802D3D0
#define  TCON_TCON14_HSE_inst_addr                                               "0x0056"
#define  set_TCON_TCON14_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON14_HSE_reg)=data)
#define  get_TCON_TCON14_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON14_HSE_reg))
#define  TCON_TCON14_HSE_dummy_14_shift                                          (31)
#define  TCON_TCON14_HSE_tcon14_hstart_shift                                     (16)
#define  TCON_TCON14_HSE_tcon14_hend_shift                                       (0)
#define  TCON_TCON14_HSE_dummy_14_mask                                           (0x80000000)
#define  TCON_TCON14_HSE_tcon14_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON14_HSE_tcon14_hend_mask                                        (0x00007FFF)
#define  TCON_TCON14_HSE_dummy_14(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON14_HSE_tcon14_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON14_HSE_tcon14_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON14_HSE_get_dummy_14(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON14_HSE_get_tcon14_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON14_HSE_get_tcon14_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON14_VSE                                                        0x1802D3D4
#define  TCON_TCON14_VSE_reg_addr                                                "0xB802D3D4"
#define  TCON_TCON14_VSE_reg                                                     0xB802D3D4
#define  TCON_TCON14_VSE_inst_addr                                               "0x0057"
#define  set_TCON_TCON14_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON14_VSE_reg)=data)
#define  get_TCON_TCON14_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON14_VSE_reg))
#define  TCON_TCON14_VSE_tcon14_vstart_shift                                     (16)
#define  TCON_TCON14_VSE_tcon14_vend_shift                                       (0)
#define  TCON_TCON14_VSE_tcon14_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON14_VSE_tcon14_vend_mask                                        (0x00001FFF)
#define  TCON_TCON14_VSE_tcon14_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON14_VSE_tcon14_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON14_VSE_get_tcon14_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON14_VSE_get_tcon14_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON14_Ctrl                                                       0x1802D3D8
#define  TCON_TCON14_Ctrl_reg_addr                                               "0xB802D3D8"
#define  TCON_TCON14_Ctrl_reg                                                    0xB802D3D8
#define  TCON_TCON14_Ctrl_inst_addr                                              "0x0058"
#define  set_TCON_TCON14_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON14_Ctrl_reg)=data)
#define  get_TCON_TCON14_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON14_Ctrl_reg))
#define  TCON_TCON14_Ctrl_tcon14_l_flag_sel_shift                                (13)
#define  TCON_TCON14_Ctrl_tcon14_off_opt_shift                                   (12)
#define  TCON_TCON14_Ctrl_tcon14_across_ctrl_reset_shift                         (11)
#define  TCON_TCON14_Ctrl_tcon14_mode_shift                                      (8)
#define  TCON_TCON14_Ctrl_tcon14_en_shift                                        (7)
#define  TCON_TCON14_Ctrl_tcon14_inv_shift                                       (6)
#define  TCON_TCON14_Ctrl_tcon14_comb_inv_shift                                  (5)
#define  TCON_TCON14_Ctrl_tcon14_frame_tog_en_shift                              (3)
#define  TCON_TCON14_Ctrl_tcon14_comb_shift                                      (0)
#define  TCON_TCON14_Ctrl_tcon14_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON14_Ctrl_tcon14_off_opt_mask                                    (0x00001000)
#define  TCON_TCON14_Ctrl_tcon14_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON14_Ctrl_tcon14_mode_mask                                       (0x00000700)
#define  TCON_TCON14_Ctrl_tcon14_en_mask                                         (0x00000080)
#define  TCON_TCON14_Ctrl_tcon14_inv_mask                                        (0x00000040)
#define  TCON_TCON14_Ctrl_tcon14_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON14_Ctrl_tcon14_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON14_Ctrl_tcon14_comb_mask                                       (0x00000007)
#define  TCON_TCON14_Ctrl_tcon14_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON14_Ctrl_tcon14_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON14_Ctrl_tcon14_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON14_Ctrl_tcon14_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON14_Ctrl_tcon14_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON14_Ctrl_tcon14_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON14_Ctrl_tcon14_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON14_Ctrl_tcon14_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON14_Ctrl_tcon14_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON14_Ctrl_get_tcon14_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON14_Ctrl_get_tcon14_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON14_Ctrl_get_tcon14_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON14_Ctrl_get_tcon14_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON14_Ctrl_get_tcon14_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON14_Ctrl_get_tcon14_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON14_Ctrl_get_tcon14_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON14_Ctrl_get_tcon14_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON14_Ctrl_get_tcon14_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON14_ACROSS_LINE_CONTROL3                                       0x1802D3DC
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D3DC"
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_reg                                    0xB802D3DC
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_inst_addr                              "0x0059"
#define  set_TCON_TCON14_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON14_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON14_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON14_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_tcon14_across_frame_int_shift          (28)
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_tcon14_across_ctrl3_rp_shift           (16)
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_tcon14_hl_num_shift                    (12)
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_tcon14_across_ctrl3_hp_shift           (0)
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_tcon14_across_frame_int_mask           (0x10000000)
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_tcon14_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_tcon14_hl_num_mask                     (0x0000F000)
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_tcon14_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_tcon14_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_tcon14_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_tcon14_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_tcon14_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_get_tcon14_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_get_tcon14_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_get_tcon14_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON14_ACROSS_LINE_CONTROL3_get_tcon14_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON14_ACROSS_FRAME_CONTROL                                       0x1802D3E0
#define  TCON_TCON14_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D3E0"
#define  TCON_TCON14_ACROSS_FRAME_CONTROL_reg                                    0xB802D3E0
#define  TCON_TCON14_ACROSS_FRAME_CONTROL_inst_addr                              "0x005A"
#define  set_TCON_TCON14_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON14_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON14_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON14_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON14_ACROSS_FRAME_CONTROL_tcon14_frame_lp_shift                  (16)
#define  TCON_TCON14_ACROSS_FRAME_CONTROL_tcon14_frame_hp_shift                  (0)
#define  TCON_TCON14_ACROSS_FRAME_CONTROL_tcon14_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON14_ACROSS_FRAME_CONTROL_tcon14_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON14_ACROSS_FRAME_CONTROL_tcon14_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON14_ACROSS_FRAME_CONTROL_tcon14_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON14_ACROSS_FRAME_CONTROL_get_tcon14_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON14_ACROSS_FRAME_CONTROL_get_tcon14_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON14_FRAME_HL_CONTROL                                           0x1802D3E4
#define  TCON_TCON14_FRAME_HL_CONTROL_reg_addr                                   "0xB802D3E4"
#define  TCON_TCON14_FRAME_HL_CONTROL_reg                                        0xB802D3E4
#define  TCON_TCON14_FRAME_HL_CONTROL_inst_addr                                  "0x005B"
#define  set_TCON_TCON14_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON14_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON14_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON14_FRAME_HL_CONTROL_reg))
#define  TCON_TCON14_FRAME_HL_CONTROL_tcon14_frame_offset_shift                  (16)
#define  TCON_TCON14_FRAME_HL_CONTROL_tcon14_hl_shift                            (0)
#define  TCON_TCON14_FRAME_HL_CONTROL_tcon14_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON14_FRAME_HL_CONTROL_tcon14_hl_mask                             (0x0000FFFF)
#define  TCON_TCON14_FRAME_HL_CONTROL_tcon14_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON14_FRAME_HL_CONTROL_tcon14_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON14_FRAME_HL_CONTROL_get_tcon14_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON14_FRAME_HL_CONTROL_get_tcon14_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON15_HSE                                                        0x1802D3F0
#define  TCON_TCON15_HSE_reg_addr                                                "0xB802D3F0"
#define  TCON_TCON15_HSE_reg                                                     0xB802D3F0
#define  TCON_TCON15_HSE_inst_addr                                               "0x005C"
#define  set_TCON_TCON15_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON15_HSE_reg)=data)
#define  get_TCON_TCON15_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON15_HSE_reg))
#define  TCON_TCON15_HSE_dummy_15_shift                                          (31)
#define  TCON_TCON15_HSE_tcon15_hstart_shift                                     (16)
#define  TCON_TCON15_HSE_tcon15_hend_shift                                       (0)
#define  TCON_TCON15_HSE_dummy_15_mask                                           (0x80000000)
#define  TCON_TCON15_HSE_tcon15_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON15_HSE_tcon15_hend_mask                                        (0x00007FFF)
#define  TCON_TCON15_HSE_dummy_15(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON15_HSE_tcon15_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON15_HSE_tcon15_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON15_HSE_get_dummy_15(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON15_HSE_get_tcon15_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON15_HSE_get_tcon15_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON15_VSE                                                        0x1802D3F4
#define  TCON_TCON15_VSE_reg_addr                                                "0xB802D3F4"
#define  TCON_TCON15_VSE_reg                                                     0xB802D3F4
#define  TCON_TCON15_VSE_inst_addr                                               "0x005D"
#define  set_TCON_TCON15_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON15_VSE_reg)=data)
#define  get_TCON_TCON15_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON15_VSE_reg))
#define  TCON_TCON15_VSE_tcon15_vstart_shift                                     (16)
#define  TCON_TCON15_VSE_tcon15_vend_shift                                       (0)
#define  TCON_TCON15_VSE_tcon15_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON15_VSE_tcon15_vend_mask                                        (0x00001FFF)
#define  TCON_TCON15_VSE_tcon15_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON15_VSE_tcon15_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON15_VSE_get_tcon15_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON15_VSE_get_tcon15_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON15_Ctrl                                                       0x1802D3F8
#define  TCON_TCON15_Ctrl_reg_addr                                               "0xB802D3F8"
#define  TCON_TCON15_Ctrl_reg                                                    0xB802D3F8
#define  TCON_TCON15_Ctrl_inst_addr                                              "0x005E"
#define  set_TCON_TCON15_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON15_Ctrl_reg)=data)
#define  get_TCON_TCON15_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON15_Ctrl_reg))
#define  TCON_TCON15_Ctrl_tcon15_l_flag_sel_shift                                (13)
#define  TCON_TCON15_Ctrl_tcon15_off_opt_shift                                   (12)
#define  TCON_TCON15_Ctrl_tcon15_across_ctrl_reset_shift                         (11)
#define  TCON_TCON15_Ctrl_tcon15_mode_shift                                      (8)
#define  TCON_TCON15_Ctrl_tcon15_en_shift                                        (7)
#define  TCON_TCON15_Ctrl_tcon15_inv_shift                                       (6)
#define  TCON_TCON15_Ctrl_tcon15_comb_inv_shift                                  (5)
#define  TCON_TCON15_Ctrl_tcon15_frame_tog_en_shift                              (3)
#define  TCON_TCON15_Ctrl_tcon15_comb_shift                                      (0)
#define  TCON_TCON15_Ctrl_tcon15_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON15_Ctrl_tcon15_off_opt_mask                                    (0x00001000)
#define  TCON_TCON15_Ctrl_tcon15_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON15_Ctrl_tcon15_mode_mask                                       (0x00000700)
#define  TCON_TCON15_Ctrl_tcon15_en_mask                                         (0x00000080)
#define  TCON_TCON15_Ctrl_tcon15_inv_mask                                        (0x00000040)
#define  TCON_TCON15_Ctrl_tcon15_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON15_Ctrl_tcon15_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON15_Ctrl_tcon15_comb_mask                                       (0x00000007)
#define  TCON_TCON15_Ctrl_tcon15_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON15_Ctrl_tcon15_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON15_Ctrl_tcon15_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON15_Ctrl_tcon15_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON15_Ctrl_tcon15_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON15_Ctrl_tcon15_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON15_Ctrl_tcon15_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON15_Ctrl_tcon15_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON15_Ctrl_tcon15_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON15_Ctrl_get_tcon15_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON15_Ctrl_get_tcon15_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON15_Ctrl_get_tcon15_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON15_Ctrl_get_tcon15_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON15_Ctrl_get_tcon15_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON15_Ctrl_get_tcon15_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON15_Ctrl_get_tcon15_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON15_Ctrl_get_tcon15_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON15_Ctrl_get_tcon15_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON15_ACROSS_LINE_CONTROL3                                       0x1802D3FC
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D3FC"
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_reg                                    0xB802D3FC
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_inst_addr                              "0x005F"
#define  set_TCON_TCON15_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON15_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON15_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON15_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_tcon15_across_frame_int_shift          (28)
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_tcon15_across_ctrl3_rp_shift           (16)
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_tcon15_hl_num_shift                    (12)
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_tcon15_across_ctrl3_hp_shift           (0)
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_tcon15_across_frame_int_mask           (0x10000000)
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_tcon15_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_tcon15_hl_num_mask                     (0x0000F000)
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_tcon15_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_tcon15_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_tcon15_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_tcon15_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_tcon15_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_get_tcon15_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_get_tcon15_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_get_tcon15_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON15_ACROSS_LINE_CONTROL3_get_tcon15_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON15_ACROSS_FRAME_CONTROL                                       0x1802D400
#define  TCON_TCON15_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D400"
#define  TCON_TCON15_ACROSS_FRAME_CONTROL_reg                                    0xB802D400
#define  TCON_TCON15_ACROSS_FRAME_CONTROL_inst_addr                              "0x0060"
#define  set_TCON_TCON15_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON15_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON15_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON15_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON15_ACROSS_FRAME_CONTROL_tcon15_frame_lp_shift                  (16)
#define  TCON_TCON15_ACROSS_FRAME_CONTROL_tcon15_frame_hp_shift                  (0)
#define  TCON_TCON15_ACROSS_FRAME_CONTROL_tcon15_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON15_ACROSS_FRAME_CONTROL_tcon15_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON15_ACROSS_FRAME_CONTROL_tcon15_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON15_ACROSS_FRAME_CONTROL_tcon15_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON15_ACROSS_FRAME_CONTROL_get_tcon15_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON15_ACROSS_FRAME_CONTROL_get_tcon15_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON15_FRAME_HL_CONTROL                                           0x1802D404
#define  TCON_TCON15_FRAME_HL_CONTROL_reg_addr                                   "0xB802D404"
#define  TCON_TCON15_FRAME_HL_CONTROL_reg                                        0xB802D404
#define  TCON_TCON15_FRAME_HL_CONTROL_inst_addr                                  "0x0061"
#define  set_TCON_TCON15_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON15_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON15_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON15_FRAME_HL_CONTROL_reg))
#define  TCON_TCON15_FRAME_HL_CONTROL_tcon15_frame_offset_shift                  (16)
#define  TCON_TCON15_FRAME_HL_CONTROL_tcon15_hl_shift                            (0)
#define  TCON_TCON15_FRAME_HL_CONTROL_tcon15_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON15_FRAME_HL_CONTROL_tcon15_hl_mask                             (0x0000FFFF)
#define  TCON_TCON15_FRAME_HL_CONTROL_tcon15_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON15_FRAME_HL_CONTROL_tcon15_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON15_FRAME_HL_CONTROL_get_tcon15_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON15_FRAME_HL_CONTROL_get_tcon15_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON16_HSE                                                        0x1802D410
#define  TCON_TCON16_HSE_reg_addr                                                "0xB802D410"
#define  TCON_TCON16_HSE_reg                                                     0xB802D410
#define  TCON_TCON16_HSE_inst_addr                                               "0x0062"
#define  set_TCON_TCON16_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON16_HSE_reg)=data)
#define  get_TCON_TCON16_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON16_HSE_reg))
#define  TCON_TCON16_HSE_dummy_16_shift                                          (31)
#define  TCON_TCON16_HSE_tcon16_hstart_shift                                     (16)
#define  TCON_TCON16_HSE_tcon16_hend_shift                                       (0)
#define  TCON_TCON16_HSE_dummy_16_mask                                           (0x80000000)
#define  TCON_TCON16_HSE_tcon16_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON16_HSE_tcon16_hend_mask                                        (0x00007FFF)
#define  TCON_TCON16_HSE_dummy_16(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON16_HSE_tcon16_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON16_HSE_tcon16_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON16_HSE_get_dummy_16(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON16_HSE_get_tcon16_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON16_HSE_get_tcon16_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON16_VSE                                                        0x1802D414
#define  TCON_TCON16_VSE_reg_addr                                                "0xB802D414"
#define  TCON_TCON16_VSE_reg                                                     0xB802D414
#define  TCON_TCON16_VSE_inst_addr                                               "0x0063"
#define  set_TCON_TCON16_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON16_VSE_reg)=data)
#define  get_TCON_TCON16_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON16_VSE_reg))
#define  TCON_TCON16_VSE_tcon16_vstart_shift                                     (16)
#define  TCON_TCON16_VSE_tcon16_vend_shift                                       (0)
#define  TCON_TCON16_VSE_tcon16_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON16_VSE_tcon16_vend_mask                                        (0x00001FFF)
#define  TCON_TCON16_VSE_tcon16_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON16_VSE_tcon16_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON16_VSE_get_tcon16_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON16_VSE_get_tcon16_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON16_Ctrl                                                       0x1802D418
#define  TCON_TCON16_Ctrl_reg_addr                                               "0xB802D418"
#define  TCON_TCON16_Ctrl_reg                                                    0xB802D418
#define  TCON_TCON16_Ctrl_inst_addr                                              "0x0064"
#define  set_TCON_TCON16_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON16_Ctrl_reg)=data)
#define  get_TCON_TCON16_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON16_Ctrl_reg))
#define  TCON_TCON16_Ctrl_tcon16_l_flag_sel_shift                                (13)
#define  TCON_TCON16_Ctrl_tcon16_off_opt_shift                                   (12)
#define  TCON_TCON16_Ctrl_tcon16_across_ctrl_reset_shift                         (11)
#define  TCON_TCON16_Ctrl_tcon16_mode_shift                                      (8)
#define  TCON_TCON16_Ctrl_tcon16_en_shift                                        (7)
#define  TCON_TCON16_Ctrl_tcon16_inv_shift                                       (6)
#define  TCON_TCON16_Ctrl_tcon16_comb_inv_shift                                  (5)
#define  TCON_TCON16_Ctrl_tcon16_frame_tog_en_shift                              (3)
#define  TCON_TCON16_Ctrl_tcon16_comb_shift                                      (0)
#define  TCON_TCON16_Ctrl_tcon16_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON16_Ctrl_tcon16_off_opt_mask                                    (0x00001000)
#define  TCON_TCON16_Ctrl_tcon16_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON16_Ctrl_tcon16_mode_mask                                       (0x00000700)
#define  TCON_TCON16_Ctrl_tcon16_en_mask                                         (0x00000080)
#define  TCON_TCON16_Ctrl_tcon16_inv_mask                                        (0x00000040)
#define  TCON_TCON16_Ctrl_tcon16_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON16_Ctrl_tcon16_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON16_Ctrl_tcon16_comb_mask                                       (0x00000007)
#define  TCON_TCON16_Ctrl_tcon16_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON16_Ctrl_tcon16_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON16_Ctrl_tcon16_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON16_Ctrl_tcon16_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON16_Ctrl_tcon16_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON16_Ctrl_tcon16_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON16_Ctrl_tcon16_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON16_Ctrl_tcon16_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON16_Ctrl_tcon16_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON16_Ctrl_get_tcon16_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON16_Ctrl_get_tcon16_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON16_Ctrl_get_tcon16_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON16_Ctrl_get_tcon16_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON16_Ctrl_get_tcon16_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON16_Ctrl_get_tcon16_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON16_Ctrl_get_tcon16_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON16_Ctrl_get_tcon16_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON16_Ctrl_get_tcon16_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON16_ACROSS_LINE_CONTROL3                                       0x1802D41C
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D41C"
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_reg                                    0xB802D41C
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_inst_addr                              "0x0065"
#define  set_TCON_TCON16_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON16_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON16_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON16_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_tcon16_across_frame_int_shift          (28)
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_tcon16_across_ctrl3_rp_shift           (16)
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_tcon16_hl_num_shift                    (12)
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_tcon16_across_ctrl3_hp_shift           (0)
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_tcon16_across_frame_int_mask           (0x10000000)
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_tcon16_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_tcon16_hl_num_mask                     (0x0000F000)
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_tcon16_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_tcon16_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_tcon16_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_tcon16_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_tcon16_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_get_tcon16_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_get_tcon16_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_get_tcon16_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON16_ACROSS_LINE_CONTROL3_get_tcon16_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON16_ACROSS_FRAME_CONTROL                                       0x1802D420
#define  TCON_TCON16_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D420"
#define  TCON_TCON16_ACROSS_FRAME_CONTROL_reg                                    0xB802D420
#define  TCON_TCON16_ACROSS_FRAME_CONTROL_inst_addr                              "0x0066"
#define  set_TCON_TCON16_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON16_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON16_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON16_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON16_ACROSS_FRAME_CONTROL_tcon16_frame_lp_shift                  (16)
#define  TCON_TCON16_ACROSS_FRAME_CONTROL_tcon16_frame_hp_shift                  (0)
#define  TCON_TCON16_ACROSS_FRAME_CONTROL_tcon16_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON16_ACROSS_FRAME_CONTROL_tcon16_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON16_ACROSS_FRAME_CONTROL_tcon16_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON16_ACROSS_FRAME_CONTROL_tcon16_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON16_ACROSS_FRAME_CONTROL_get_tcon16_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON16_ACROSS_FRAME_CONTROL_get_tcon16_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON16_FRAME_HL_CONTROL                                           0x1802D424
#define  TCON_TCON16_FRAME_HL_CONTROL_reg_addr                                   "0xB802D424"
#define  TCON_TCON16_FRAME_HL_CONTROL_reg                                        0xB802D424
#define  TCON_TCON16_FRAME_HL_CONTROL_inst_addr                                  "0x0067"
#define  set_TCON_TCON16_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON16_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON16_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON16_FRAME_HL_CONTROL_reg))
#define  TCON_TCON16_FRAME_HL_CONTROL_tcon16_frame_offset_shift                  (16)
#define  TCON_TCON16_FRAME_HL_CONTROL_tcon16_hl_shift                            (0)
#define  TCON_TCON16_FRAME_HL_CONTROL_tcon16_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON16_FRAME_HL_CONTROL_tcon16_hl_mask                             (0x0000FFFF)
#define  TCON_TCON16_FRAME_HL_CONTROL_tcon16_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON16_FRAME_HL_CONTROL_tcon16_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON16_FRAME_HL_CONTROL_get_tcon16_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON16_FRAME_HL_CONTROL_get_tcon16_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON17_HSE                                                        0x1802D430
#define  TCON_TCON17_HSE_reg_addr                                                "0xB802D430"
#define  TCON_TCON17_HSE_reg                                                     0xB802D430
#define  TCON_TCON17_HSE_inst_addr                                               "0x0068"
#define  set_TCON_TCON17_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON17_HSE_reg)=data)
#define  get_TCON_TCON17_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON17_HSE_reg))
#define  TCON_TCON17_HSE_dummy_17_shift                                          (31)
#define  TCON_TCON17_HSE_tcon17_hstart_shift                                     (16)
#define  TCON_TCON17_HSE_tcon17_hend_shift                                       (0)
#define  TCON_TCON17_HSE_dummy_17_mask                                           (0x80000000)
#define  TCON_TCON17_HSE_tcon17_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON17_HSE_tcon17_hend_mask                                        (0x00007FFF)
#define  TCON_TCON17_HSE_dummy_17(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON17_HSE_tcon17_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON17_HSE_tcon17_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON17_HSE_get_dummy_17(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON17_HSE_get_tcon17_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON17_HSE_get_tcon17_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON17_VSE                                                        0x1802D434
#define  TCON_TCON17_VSE_reg_addr                                                "0xB802D434"
#define  TCON_TCON17_VSE_reg                                                     0xB802D434
#define  TCON_TCON17_VSE_inst_addr                                               "0x0069"
#define  set_TCON_TCON17_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON17_VSE_reg)=data)
#define  get_TCON_TCON17_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON17_VSE_reg))
#define  TCON_TCON17_VSE_tcon17_vstart_shift                                     (16)
#define  TCON_TCON17_VSE_tcon17_vend_shift                                       (0)
#define  TCON_TCON17_VSE_tcon17_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON17_VSE_tcon17_vend_mask                                        (0x00001FFF)
#define  TCON_TCON17_VSE_tcon17_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON17_VSE_tcon17_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON17_VSE_get_tcon17_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON17_VSE_get_tcon17_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON17_Ctrl                                                       0x1802D438
#define  TCON_TCON17_Ctrl_reg_addr                                               "0xB802D438"
#define  TCON_TCON17_Ctrl_reg                                                    0xB802D438
#define  TCON_TCON17_Ctrl_inst_addr                                              "0x006A"
#define  set_TCON_TCON17_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON17_Ctrl_reg)=data)
#define  get_TCON_TCON17_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON17_Ctrl_reg))
#define  TCON_TCON17_Ctrl_tcon17_l_flag_sel_shift                                (13)
#define  TCON_TCON17_Ctrl_tcon17_off_opt_shift                                   (12)
#define  TCON_TCON17_Ctrl_tcon17_across_ctrl_reset_shift                         (11)
#define  TCON_TCON17_Ctrl_tcon17_mode_shift                                      (8)
#define  TCON_TCON17_Ctrl_tcon17_en_shift                                        (7)
#define  TCON_TCON17_Ctrl_tcon17_inv_shift                                       (6)
#define  TCON_TCON17_Ctrl_tcon17_comb_inv_shift                                  (5)
#define  TCON_TCON17_Ctrl_tcon17_frame_tog_en_shift                              (3)
#define  TCON_TCON17_Ctrl_tcon17_comb_shift                                      (0)
#define  TCON_TCON17_Ctrl_tcon17_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON17_Ctrl_tcon17_off_opt_mask                                    (0x00001000)
#define  TCON_TCON17_Ctrl_tcon17_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON17_Ctrl_tcon17_mode_mask                                       (0x00000700)
#define  TCON_TCON17_Ctrl_tcon17_en_mask                                         (0x00000080)
#define  TCON_TCON17_Ctrl_tcon17_inv_mask                                        (0x00000040)
#define  TCON_TCON17_Ctrl_tcon17_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON17_Ctrl_tcon17_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON17_Ctrl_tcon17_comb_mask                                       (0x00000007)
#define  TCON_TCON17_Ctrl_tcon17_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON17_Ctrl_tcon17_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON17_Ctrl_tcon17_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON17_Ctrl_tcon17_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON17_Ctrl_tcon17_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON17_Ctrl_tcon17_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON17_Ctrl_tcon17_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON17_Ctrl_tcon17_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON17_Ctrl_tcon17_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON17_Ctrl_get_tcon17_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON17_Ctrl_get_tcon17_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON17_Ctrl_get_tcon17_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON17_Ctrl_get_tcon17_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON17_Ctrl_get_tcon17_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON17_Ctrl_get_tcon17_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON17_Ctrl_get_tcon17_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON17_Ctrl_get_tcon17_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON17_Ctrl_get_tcon17_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON17_ACROSS_LINE_CONTROL3                                       0x1802D43C
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D43C"
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_reg                                    0xB802D43C
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_inst_addr                              "0x006B"
#define  set_TCON_TCON17_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON17_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON17_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON17_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_tcon17_across_frame_int_shift          (28)
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_tcon17_across_ctrl3_rp_shift           (16)
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_tcon17_hl_num_shift                    (12)
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_tcon17_across_ctrl3_hp_shift           (0)
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_tcon17_across_frame_int_mask           (0x10000000)
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_tcon17_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_tcon17_hl_num_mask                     (0x0000F000)
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_tcon17_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_tcon17_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_tcon17_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_tcon17_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_tcon17_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_get_tcon17_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_get_tcon17_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_get_tcon17_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON17_ACROSS_LINE_CONTROL3_get_tcon17_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON17_ACROSS_FRAME_CONTROL                                       0x1802D440
#define  TCON_TCON17_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D440"
#define  TCON_TCON17_ACROSS_FRAME_CONTROL_reg                                    0xB802D440
#define  TCON_TCON17_ACROSS_FRAME_CONTROL_inst_addr                              "0x006C"
#define  set_TCON_TCON17_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON17_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON17_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON17_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON17_ACROSS_FRAME_CONTROL_tcon17_frame_lp_shift                  (16)
#define  TCON_TCON17_ACROSS_FRAME_CONTROL_tcon17_frame_hp_shift                  (0)
#define  TCON_TCON17_ACROSS_FRAME_CONTROL_tcon17_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON17_ACROSS_FRAME_CONTROL_tcon17_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON17_ACROSS_FRAME_CONTROL_tcon17_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON17_ACROSS_FRAME_CONTROL_tcon17_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON17_ACROSS_FRAME_CONTROL_get_tcon17_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON17_ACROSS_FRAME_CONTROL_get_tcon17_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON17_FRAME_HL_CONTROL                                           0x1802D444
#define  TCON_TCON17_FRAME_HL_CONTROL_reg_addr                                   "0xB802D444"
#define  TCON_TCON17_FRAME_HL_CONTROL_reg                                        0xB802D444
#define  TCON_TCON17_FRAME_HL_CONTROL_inst_addr                                  "0x006D"
#define  set_TCON_TCON17_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON17_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON17_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON17_FRAME_HL_CONTROL_reg))
#define  TCON_TCON17_FRAME_HL_CONTROL_tcon17_frame_offset_shift                  (16)
#define  TCON_TCON17_FRAME_HL_CONTROL_tcon17_hl_shift                            (0)
#define  TCON_TCON17_FRAME_HL_CONTROL_tcon17_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON17_FRAME_HL_CONTROL_tcon17_hl_mask                             (0x0000FFFF)
#define  TCON_TCON17_FRAME_HL_CONTROL_tcon17_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON17_FRAME_HL_CONTROL_tcon17_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON17_FRAME_HL_CONTROL_get_tcon17_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON17_FRAME_HL_CONTROL_get_tcon17_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON18_HSE                                                        0x1802D450
#define  TCON_TCON18_HSE_reg_addr                                                "0xB802D450"
#define  TCON_TCON18_HSE_reg                                                     0xB802D450
#define  TCON_TCON18_HSE_inst_addr                                               "0x006E"
#define  set_TCON_TCON18_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON18_HSE_reg)=data)
#define  get_TCON_TCON18_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON18_HSE_reg))
#define  TCON_TCON18_HSE_dummy_18_shift                                          (31)
#define  TCON_TCON18_HSE_tcon18_hstart_shift                                     (16)
#define  TCON_TCON18_HSE_tcon18_hend_shift                                       (0)
#define  TCON_TCON18_HSE_dummy_18_mask                                           (0x80000000)
#define  TCON_TCON18_HSE_tcon18_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON18_HSE_tcon18_hend_mask                                        (0x00007FFF)
#define  TCON_TCON18_HSE_dummy_18(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON18_HSE_tcon18_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON18_HSE_tcon18_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON18_HSE_get_dummy_18(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON18_HSE_get_tcon18_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON18_HSE_get_tcon18_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON18_VSE                                                        0x1802D454
#define  TCON_TCON18_VSE_reg_addr                                                "0xB802D454"
#define  TCON_TCON18_VSE_reg                                                     0xB802D454
#define  TCON_TCON18_VSE_inst_addr                                               "0x006F"
#define  set_TCON_TCON18_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON18_VSE_reg)=data)
#define  get_TCON_TCON18_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON18_VSE_reg))
#define  TCON_TCON18_VSE_tcon18_vstart_shift                                     (16)
#define  TCON_TCON18_VSE_tcon18_vend_shift                                       (0)
#define  TCON_TCON18_VSE_tcon18_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON18_VSE_tcon18_vend_mask                                        (0x00001FFF)
#define  TCON_TCON18_VSE_tcon18_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON18_VSE_tcon18_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON18_VSE_get_tcon18_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON18_VSE_get_tcon18_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON18_Ctrl                                                       0x1802D458
#define  TCON_TCON18_Ctrl_reg_addr                                               "0xB802D458"
#define  TCON_TCON18_Ctrl_reg                                                    0xB802D458
#define  TCON_TCON18_Ctrl_inst_addr                                              "0x0070"
#define  set_TCON_TCON18_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON18_Ctrl_reg)=data)
#define  get_TCON_TCON18_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON18_Ctrl_reg))
#define  TCON_TCON18_Ctrl_tcon18_l_flag_sel_shift                                (13)
#define  TCON_TCON18_Ctrl_tcon18_off_opt_shift                                   (12)
#define  TCON_TCON18_Ctrl_tcon18_across_ctrl_reset_shift                         (11)
#define  TCON_TCON18_Ctrl_tcon18_mode_shift                                      (8)
#define  TCON_TCON18_Ctrl_tcon18_en_shift                                        (7)
#define  TCON_TCON18_Ctrl_tcon18_inv_shift                                       (6)
#define  TCON_TCON18_Ctrl_tcon18_comb_inv_shift                                  (5)
#define  TCON_TCON18_Ctrl_tcon18_frame_tog_en_shift                              (3)
#define  TCON_TCON18_Ctrl_tcon18_comb_shift                                      (0)
#define  TCON_TCON18_Ctrl_tcon18_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON18_Ctrl_tcon18_off_opt_mask                                    (0x00001000)
#define  TCON_TCON18_Ctrl_tcon18_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON18_Ctrl_tcon18_mode_mask                                       (0x00000700)
#define  TCON_TCON18_Ctrl_tcon18_en_mask                                         (0x00000080)
#define  TCON_TCON18_Ctrl_tcon18_inv_mask                                        (0x00000040)
#define  TCON_TCON18_Ctrl_tcon18_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON18_Ctrl_tcon18_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON18_Ctrl_tcon18_comb_mask                                       (0x00000007)
#define  TCON_TCON18_Ctrl_tcon18_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON18_Ctrl_tcon18_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON18_Ctrl_tcon18_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON18_Ctrl_tcon18_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON18_Ctrl_tcon18_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON18_Ctrl_tcon18_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON18_Ctrl_tcon18_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON18_Ctrl_tcon18_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON18_Ctrl_tcon18_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON18_Ctrl_get_tcon18_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON18_Ctrl_get_tcon18_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON18_Ctrl_get_tcon18_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON18_Ctrl_get_tcon18_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON18_Ctrl_get_tcon18_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON18_Ctrl_get_tcon18_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON18_Ctrl_get_tcon18_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON18_Ctrl_get_tcon18_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON18_Ctrl_get_tcon18_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON18_ACROSS_LINE_CONTROL3                                       0x1802D45C
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D45C"
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_reg                                    0xB802D45C
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_inst_addr                              "0x0071"
#define  set_TCON_TCON18_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON18_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON18_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON18_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_tcon18_across_frame_int_shift          (28)
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_tcon18_across_ctrl3_rp_shift           (16)
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_tcon18_hl_num_shift                    (12)
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_tcon18_across_ctrl3_hp_shift           (0)
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_tcon18_across_frame_int_mask           (0x10000000)
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_tcon18_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_tcon18_hl_num_mask                     (0x0000F000)
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_tcon18_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_tcon18_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_tcon18_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_tcon18_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_tcon18_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_get_tcon18_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_get_tcon18_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_get_tcon18_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON18_ACROSS_LINE_CONTROL3_get_tcon18_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON18_ACROSS_FRAME_CONTROL                                       0x1802D460
#define  TCON_TCON18_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D460"
#define  TCON_TCON18_ACROSS_FRAME_CONTROL_reg                                    0xB802D460
#define  TCON_TCON18_ACROSS_FRAME_CONTROL_inst_addr                              "0x0072"
#define  set_TCON_TCON18_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON18_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON18_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON18_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON18_ACROSS_FRAME_CONTROL_tcon18_frame_lp_shift                  (16)
#define  TCON_TCON18_ACROSS_FRAME_CONTROL_tcon18_frame_hp_shift                  (0)
#define  TCON_TCON18_ACROSS_FRAME_CONTROL_tcon18_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON18_ACROSS_FRAME_CONTROL_tcon18_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON18_ACROSS_FRAME_CONTROL_tcon18_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON18_ACROSS_FRAME_CONTROL_tcon18_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON18_ACROSS_FRAME_CONTROL_get_tcon18_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON18_ACROSS_FRAME_CONTROL_get_tcon18_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON18_FRAME_HL_CONTROL                                           0x1802D464
#define  TCON_TCON18_FRAME_HL_CONTROL_reg_addr                                   "0xB802D464"
#define  TCON_TCON18_FRAME_HL_CONTROL_reg                                        0xB802D464
#define  TCON_TCON18_FRAME_HL_CONTROL_inst_addr                                  "0x0073"
#define  set_TCON_TCON18_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON18_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON18_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON18_FRAME_HL_CONTROL_reg))
#define  TCON_TCON18_FRAME_HL_CONTROL_tcon18_frame_offset_shift                  (16)
#define  TCON_TCON18_FRAME_HL_CONTROL_tcon18_hl_shift                            (0)
#define  TCON_TCON18_FRAME_HL_CONTROL_tcon18_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON18_FRAME_HL_CONTROL_tcon18_hl_mask                             (0x0000FFFF)
#define  TCON_TCON18_FRAME_HL_CONTROL_tcon18_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON18_FRAME_HL_CONTROL_tcon18_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON18_FRAME_HL_CONTROL_get_tcon18_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON18_FRAME_HL_CONTROL_get_tcon18_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON19_HSE                                                        0x1802D470
#define  TCON_TCON19_HSE_reg_addr                                                "0xB802D470"
#define  TCON_TCON19_HSE_reg                                                     0xB802D470
#define  TCON_TCON19_HSE_inst_addr                                               "0x0074"
#define  set_TCON_TCON19_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON19_HSE_reg)=data)
#define  get_TCON_TCON19_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON19_HSE_reg))
#define  TCON_TCON19_HSE_dummy_19_shift                                          (31)
#define  TCON_TCON19_HSE_tcon19_hstart_shift                                     (16)
#define  TCON_TCON19_HSE_tcon19_hend_shift                                       (0)
#define  TCON_TCON19_HSE_dummy_19_mask                                           (0x80000000)
#define  TCON_TCON19_HSE_tcon19_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON19_HSE_tcon19_hend_mask                                        (0x00007FFF)
#define  TCON_TCON19_HSE_dummy_19(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON19_HSE_tcon19_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON19_HSE_tcon19_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON19_HSE_get_dummy_19(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON19_HSE_get_tcon19_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON19_HSE_get_tcon19_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON19_VSE                                                        0x1802D474
#define  TCON_TCON19_VSE_reg_addr                                                "0xB802D474"
#define  TCON_TCON19_VSE_reg                                                     0xB802D474
#define  TCON_TCON19_VSE_inst_addr                                               "0x0075"
#define  set_TCON_TCON19_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON19_VSE_reg)=data)
#define  get_TCON_TCON19_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON19_VSE_reg))
#define  TCON_TCON19_VSE_tcon19_vstart_shift                                     (16)
#define  TCON_TCON19_VSE_tcon19_vend_shift                                       (0)
#define  TCON_TCON19_VSE_tcon19_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON19_VSE_tcon19_vend_mask                                        (0x00001FFF)
#define  TCON_TCON19_VSE_tcon19_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON19_VSE_tcon19_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON19_VSE_get_tcon19_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON19_VSE_get_tcon19_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON19_Ctrl                                                       0x1802D478
#define  TCON_TCON19_Ctrl_reg_addr                                               "0xB802D478"
#define  TCON_TCON19_Ctrl_reg                                                    0xB802D478
#define  TCON_TCON19_Ctrl_inst_addr                                              "0x0076"
#define  set_TCON_TCON19_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON19_Ctrl_reg)=data)
#define  get_TCON_TCON19_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON19_Ctrl_reg))
#define  TCON_TCON19_Ctrl_tcon19_l_flag_sel_shift                                (13)
#define  TCON_TCON19_Ctrl_tcon19_off_opt_shift                                   (12)
#define  TCON_TCON19_Ctrl_tcon19_across_ctrl_reset_shift                         (11)
#define  TCON_TCON19_Ctrl_tcon19_mode_shift                                      (8)
#define  TCON_TCON19_Ctrl_tcon19_en_shift                                        (7)
#define  TCON_TCON19_Ctrl_tcon19_inv_shift                                       (6)
#define  TCON_TCON19_Ctrl_tcon19_comb_inv_shift                                  (5)
#define  TCON_TCON19_Ctrl_tcon19_frame_tog_en_shift                              (3)
#define  TCON_TCON19_Ctrl_tcon19_comb_shift                                      (0)
#define  TCON_TCON19_Ctrl_tcon19_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON19_Ctrl_tcon19_off_opt_mask                                    (0x00001000)
#define  TCON_TCON19_Ctrl_tcon19_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON19_Ctrl_tcon19_mode_mask                                       (0x00000700)
#define  TCON_TCON19_Ctrl_tcon19_en_mask                                         (0x00000080)
#define  TCON_TCON19_Ctrl_tcon19_inv_mask                                        (0x00000040)
#define  TCON_TCON19_Ctrl_tcon19_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON19_Ctrl_tcon19_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON19_Ctrl_tcon19_comb_mask                                       (0x00000007)
#define  TCON_TCON19_Ctrl_tcon19_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON19_Ctrl_tcon19_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON19_Ctrl_tcon19_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON19_Ctrl_tcon19_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON19_Ctrl_tcon19_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON19_Ctrl_tcon19_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON19_Ctrl_tcon19_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON19_Ctrl_tcon19_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON19_Ctrl_tcon19_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON19_Ctrl_get_tcon19_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON19_Ctrl_get_tcon19_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON19_Ctrl_get_tcon19_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON19_Ctrl_get_tcon19_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON19_Ctrl_get_tcon19_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON19_Ctrl_get_tcon19_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON19_Ctrl_get_tcon19_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON19_Ctrl_get_tcon19_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON19_Ctrl_get_tcon19_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON19_ACROSS_LINE_CONTROL3                                       0x1802D47C
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D47C"
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_reg                                    0xB802D47C
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_inst_addr                              "0x0077"
#define  set_TCON_TCON19_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON19_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON19_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON19_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_tcon19_across_frame_int_shift          (28)
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_tcon19_across_ctrl3_rp_shift           (16)
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_tcon19_hl_num_shift                    (12)
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_tcon19_across_ctrl3_hp_shift           (0)
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_tcon19_across_frame_int_mask           (0x10000000)
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_tcon19_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_tcon19_hl_num_mask                     (0x0000F000)
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_tcon19_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_tcon19_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_tcon19_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_tcon19_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_tcon19_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_get_tcon19_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_get_tcon19_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_get_tcon19_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON19_ACROSS_LINE_CONTROL3_get_tcon19_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON19_ACROSS_FRAME_CONTROL                                       0x1802D480
#define  TCON_TCON19_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D480"
#define  TCON_TCON19_ACROSS_FRAME_CONTROL_reg                                    0xB802D480
#define  TCON_TCON19_ACROSS_FRAME_CONTROL_inst_addr                              "0x0078"
#define  set_TCON_TCON19_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON19_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON19_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON19_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON19_ACROSS_FRAME_CONTROL_tcon19_frame_lp_shift                  (16)
#define  TCON_TCON19_ACROSS_FRAME_CONTROL_tcon19_frame_hp_shift                  (0)
#define  TCON_TCON19_ACROSS_FRAME_CONTROL_tcon19_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON19_ACROSS_FRAME_CONTROL_tcon19_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON19_ACROSS_FRAME_CONTROL_tcon19_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON19_ACROSS_FRAME_CONTROL_tcon19_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON19_ACROSS_FRAME_CONTROL_get_tcon19_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON19_ACROSS_FRAME_CONTROL_get_tcon19_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON19_FRAME_HL_CONTROL                                           0x1802D484
#define  TCON_TCON19_FRAME_HL_CONTROL_reg_addr                                   "0xB802D484"
#define  TCON_TCON19_FRAME_HL_CONTROL_reg                                        0xB802D484
#define  TCON_TCON19_FRAME_HL_CONTROL_inst_addr                                  "0x0079"
#define  set_TCON_TCON19_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON19_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON19_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON19_FRAME_HL_CONTROL_reg))
#define  TCON_TCON19_FRAME_HL_CONTROL_tcon19_frame_offset_shift                  (16)
#define  TCON_TCON19_FRAME_HL_CONTROL_tcon19_hl_shift                            (0)
#define  TCON_TCON19_FRAME_HL_CONTROL_tcon19_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON19_FRAME_HL_CONTROL_tcon19_hl_mask                             (0x0000FFFF)
#define  TCON_TCON19_FRAME_HL_CONTROL_tcon19_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON19_FRAME_HL_CONTROL_tcon19_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON19_FRAME_HL_CONTROL_get_tcon19_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON19_FRAME_HL_CONTROL_get_tcon19_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON20_HSE                                                        0x1802D490
#define  TCON_TCON20_HSE_reg_addr                                                "0xB802D490"
#define  TCON_TCON20_HSE_reg                                                     0xB802D490
#define  TCON_TCON20_HSE_inst_addr                                               "0x007A"
#define  set_TCON_TCON20_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON20_HSE_reg)=data)
#define  get_TCON_TCON20_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON20_HSE_reg))
#define  TCON_TCON20_HSE_dummy_20_shift                                          (31)
#define  TCON_TCON20_HSE_tcon20_hstart_shift                                     (16)
#define  TCON_TCON20_HSE_tcon20_hend_shift                                       (0)
#define  TCON_TCON20_HSE_dummy_20_mask                                           (0x80000000)
#define  TCON_TCON20_HSE_tcon20_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON20_HSE_tcon20_hend_mask                                        (0x00007FFF)
#define  TCON_TCON20_HSE_dummy_20(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON20_HSE_tcon20_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON20_HSE_tcon20_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON20_HSE_get_dummy_20(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON20_HSE_get_tcon20_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON20_HSE_get_tcon20_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON20_VSE                                                        0x1802D494
#define  TCON_TCON20_VSE_reg_addr                                                "0xB802D494"
#define  TCON_TCON20_VSE_reg                                                     0xB802D494
#define  TCON_TCON20_VSE_inst_addr                                               "0x007B"
#define  set_TCON_TCON20_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON20_VSE_reg)=data)
#define  get_TCON_TCON20_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON20_VSE_reg))
#define  TCON_TCON20_VSE_tcon20_vstart_shift                                     (16)
#define  TCON_TCON20_VSE_tcon20_vend_shift                                       (0)
#define  TCON_TCON20_VSE_tcon20_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON20_VSE_tcon20_vend_mask                                        (0x00001FFF)
#define  TCON_TCON20_VSE_tcon20_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON20_VSE_tcon20_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON20_VSE_get_tcon20_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON20_VSE_get_tcon20_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON20_Ctrl                                                       0x1802D498
#define  TCON_TCON20_Ctrl_reg_addr                                               "0xB802D498"
#define  TCON_TCON20_Ctrl_reg                                                    0xB802D498
#define  TCON_TCON20_Ctrl_inst_addr                                              "0x007C"
#define  set_TCON_TCON20_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON20_Ctrl_reg)=data)
#define  get_TCON_TCON20_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON20_Ctrl_reg))
#define  TCON_TCON20_Ctrl_tcon20_l_flag_sel_shift                                (13)
#define  TCON_TCON20_Ctrl_tcon20_off_opt_shift                                   (12)
#define  TCON_TCON20_Ctrl_tcon20_across_ctrl_reset_shift                         (11)
#define  TCON_TCON20_Ctrl_tcon20_mode_shift                                      (8)
#define  TCON_TCON20_Ctrl_tcon20_en_shift                                        (7)
#define  TCON_TCON20_Ctrl_tcon20_inv_shift                                       (6)
#define  TCON_TCON20_Ctrl_tcon20_comb_inv_shift                                  (5)
#define  TCON_TCON20_Ctrl_tcon20_frame_tog_en_shift                              (3)
#define  TCON_TCON20_Ctrl_tcon20_comb_shift                                      (0)
#define  TCON_TCON20_Ctrl_tcon20_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON20_Ctrl_tcon20_off_opt_mask                                    (0x00001000)
#define  TCON_TCON20_Ctrl_tcon20_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON20_Ctrl_tcon20_mode_mask                                       (0x00000700)
#define  TCON_TCON20_Ctrl_tcon20_en_mask                                         (0x00000080)
#define  TCON_TCON20_Ctrl_tcon20_inv_mask                                        (0x00000040)
#define  TCON_TCON20_Ctrl_tcon20_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON20_Ctrl_tcon20_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON20_Ctrl_tcon20_comb_mask                                       (0x00000007)
#define  TCON_TCON20_Ctrl_tcon20_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON20_Ctrl_tcon20_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON20_Ctrl_tcon20_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON20_Ctrl_tcon20_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON20_Ctrl_tcon20_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON20_Ctrl_tcon20_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON20_Ctrl_tcon20_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON20_Ctrl_tcon20_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON20_Ctrl_tcon20_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON20_Ctrl_get_tcon20_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON20_Ctrl_get_tcon20_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON20_Ctrl_get_tcon20_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON20_Ctrl_get_tcon20_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON20_Ctrl_get_tcon20_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON20_Ctrl_get_tcon20_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON20_Ctrl_get_tcon20_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON20_Ctrl_get_tcon20_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON20_Ctrl_get_tcon20_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON20_ACROSS_LINE_CONTROL3                                       0x1802D49C
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D49C"
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_reg                                    0xB802D49C
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_inst_addr                              "0x007D"
#define  set_TCON_TCON20_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON20_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON20_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON20_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_tcon20_across_frame_int_shift          (28)
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_tcon20_across_ctrl3_rp_shift           (16)
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_tcon20_hl_num_shift                    (12)
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_tcon20_across_ctrl3_hp_shift           (0)
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_tcon20_across_frame_int_mask           (0x10000000)
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_tcon20_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_tcon20_hl_num_mask                     (0x0000F000)
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_tcon20_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_tcon20_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_tcon20_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_tcon20_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_tcon20_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_get_tcon20_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_get_tcon20_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_get_tcon20_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON20_ACROSS_LINE_CONTROL3_get_tcon20_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON20_ACROSS_FRAME_CONTROL                                       0x1802D4A0
#define  TCON_TCON20_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D4A0"
#define  TCON_TCON20_ACROSS_FRAME_CONTROL_reg                                    0xB802D4A0
#define  TCON_TCON20_ACROSS_FRAME_CONTROL_inst_addr                              "0x007E"
#define  set_TCON_TCON20_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON20_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON20_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON20_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON20_ACROSS_FRAME_CONTROL_tcon20_frame_lp_shift                  (16)
#define  TCON_TCON20_ACROSS_FRAME_CONTROL_tcon20_frame_hp_shift                  (0)
#define  TCON_TCON20_ACROSS_FRAME_CONTROL_tcon20_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON20_ACROSS_FRAME_CONTROL_tcon20_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON20_ACROSS_FRAME_CONTROL_tcon20_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON20_ACROSS_FRAME_CONTROL_tcon20_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON20_ACROSS_FRAME_CONTROL_get_tcon20_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON20_ACROSS_FRAME_CONTROL_get_tcon20_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON20_FRAME_HL_CONTROL                                           0x1802D4A4
#define  TCON_TCON20_FRAME_HL_CONTROL_reg_addr                                   "0xB802D4A4"
#define  TCON_TCON20_FRAME_HL_CONTROL_reg                                        0xB802D4A4
#define  TCON_TCON20_FRAME_HL_CONTROL_inst_addr                                  "0x007F"
#define  set_TCON_TCON20_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON20_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON20_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON20_FRAME_HL_CONTROL_reg))
#define  TCON_TCON20_FRAME_HL_CONTROL_tcon20_frame_offset_shift                  (16)
#define  TCON_TCON20_FRAME_HL_CONTROL_tcon20_hl_shift                            (0)
#define  TCON_TCON20_FRAME_HL_CONTROL_tcon20_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON20_FRAME_HL_CONTROL_tcon20_hl_mask                             (0x0000FFFF)
#define  TCON_TCON20_FRAME_HL_CONTROL_tcon20_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON20_FRAME_HL_CONTROL_tcon20_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON20_FRAME_HL_CONTROL_get_tcon20_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON20_FRAME_HL_CONTROL_get_tcon20_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON21_HSE                                                        0x1802D4B0
#define  TCON_TCON21_HSE_reg_addr                                                "0xB802D4B0"
#define  TCON_TCON21_HSE_reg                                                     0xB802D4B0
#define  TCON_TCON21_HSE_inst_addr                                               "0x0080"
#define  set_TCON_TCON21_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON21_HSE_reg)=data)
#define  get_TCON_TCON21_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON21_HSE_reg))
#define  TCON_TCON21_HSE_dummy_21_shift                                          (31)
#define  TCON_TCON21_HSE_tcon21_hstart_shift                                     (16)
#define  TCON_TCON21_HSE_tcon21_hend_shift                                       (0)
#define  TCON_TCON21_HSE_dummy_21_mask                                           (0x80000000)
#define  TCON_TCON21_HSE_tcon21_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON21_HSE_tcon21_hend_mask                                        (0x00007FFF)
#define  TCON_TCON21_HSE_dummy_21(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON21_HSE_tcon21_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON21_HSE_tcon21_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON21_HSE_get_dummy_21(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON21_HSE_get_tcon21_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON21_HSE_get_tcon21_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON21_VSE                                                        0x1802D4B4
#define  TCON_TCON21_VSE_reg_addr                                                "0xB802D4B4"
#define  TCON_TCON21_VSE_reg                                                     0xB802D4B4
#define  TCON_TCON21_VSE_inst_addr                                               "0x0081"
#define  set_TCON_TCON21_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON21_VSE_reg)=data)
#define  get_TCON_TCON21_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON21_VSE_reg))
#define  TCON_TCON21_VSE_tcon21_vstart_shift                                     (16)
#define  TCON_TCON21_VSE_tcon21_vend_shift                                       (0)
#define  TCON_TCON21_VSE_tcon21_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON21_VSE_tcon21_vend_mask                                        (0x00001FFF)
#define  TCON_TCON21_VSE_tcon21_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON21_VSE_tcon21_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON21_VSE_get_tcon21_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON21_VSE_get_tcon21_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON21_Ctrl                                                       0x1802D4B8
#define  TCON_TCON21_Ctrl_reg_addr                                               "0xB802D4B8"
#define  TCON_TCON21_Ctrl_reg                                                    0xB802D4B8
#define  TCON_TCON21_Ctrl_inst_addr                                              "0x0082"
#define  set_TCON_TCON21_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON21_Ctrl_reg)=data)
#define  get_TCON_TCON21_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON21_Ctrl_reg))
#define  TCON_TCON21_Ctrl_tcon21_l_flag_sel_shift                                (13)
#define  TCON_TCON21_Ctrl_tcon21_off_opt_shift                                   (12)
#define  TCON_TCON21_Ctrl_tcon21_across_ctrl_reset_shift                         (11)
#define  TCON_TCON21_Ctrl_tcon21_mode_shift                                      (8)
#define  TCON_TCON21_Ctrl_tcon21_en_shift                                        (7)
#define  TCON_TCON21_Ctrl_tcon21_inv_shift                                       (6)
#define  TCON_TCON21_Ctrl_tcon21_comb_inv_shift                                  (5)
#define  TCON_TCON21_Ctrl_tcon21_frame_tog_en_shift                              (3)
#define  TCON_TCON21_Ctrl_tcon21_comb_shift                                      (0)
#define  TCON_TCON21_Ctrl_tcon21_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON21_Ctrl_tcon21_off_opt_mask                                    (0x00001000)
#define  TCON_TCON21_Ctrl_tcon21_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON21_Ctrl_tcon21_mode_mask                                       (0x00000700)
#define  TCON_TCON21_Ctrl_tcon21_en_mask                                         (0x00000080)
#define  TCON_TCON21_Ctrl_tcon21_inv_mask                                        (0x00000040)
#define  TCON_TCON21_Ctrl_tcon21_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON21_Ctrl_tcon21_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON21_Ctrl_tcon21_comb_mask                                       (0x00000007)
#define  TCON_TCON21_Ctrl_tcon21_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON21_Ctrl_tcon21_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON21_Ctrl_tcon21_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON21_Ctrl_tcon21_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON21_Ctrl_tcon21_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON21_Ctrl_tcon21_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON21_Ctrl_tcon21_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON21_Ctrl_tcon21_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON21_Ctrl_tcon21_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON21_Ctrl_get_tcon21_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON21_Ctrl_get_tcon21_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON21_Ctrl_get_tcon21_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON21_Ctrl_get_tcon21_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON21_Ctrl_get_tcon21_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON21_Ctrl_get_tcon21_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON21_Ctrl_get_tcon21_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON21_Ctrl_get_tcon21_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON21_Ctrl_get_tcon21_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON21_ACROSS_LINE_CONTROL3                                       0x1802D4BC
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D4BC"
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_reg                                    0xB802D4BC
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_inst_addr                              "0x0083"
#define  set_TCON_TCON21_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON21_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON21_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON21_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_tcon21_across_frame_int_shift          (28)
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_tcon21_across_ctrl3_rp_shift           (16)
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_tcon21_hl_num_shift                    (12)
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_tcon21_across_ctrl3_hp_shift           (0)
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_tcon21_across_frame_int_mask           (0x10000000)
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_tcon21_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_tcon21_hl_num_mask                     (0x0000F000)
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_tcon21_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_tcon21_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_tcon21_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_tcon21_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_tcon21_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_get_tcon21_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_get_tcon21_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_get_tcon21_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON21_ACROSS_LINE_CONTROL3_get_tcon21_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON21_ACROSS_FRAME_CONTROL                                       0x1802D4C0
#define  TCON_TCON21_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D4C0"
#define  TCON_TCON21_ACROSS_FRAME_CONTROL_reg                                    0xB802D4C0
#define  TCON_TCON21_ACROSS_FRAME_CONTROL_inst_addr                              "0x0084"
#define  set_TCON_TCON21_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON21_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON21_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON21_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON21_ACROSS_FRAME_CONTROL_tcon21_frame_lp_shift                  (16)
#define  TCON_TCON21_ACROSS_FRAME_CONTROL_tcon21_frame_hp_shift                  (0)
#define  TCON_TCON21_ACROSS_FRAME_CONTROL_tcon21_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON21_ACROSS_FRAME_CONTROL_tcon21_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON21_ACROSS_FRAME_CONTROL_tcon21_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON21_ACROSS_FRAME_CONTROL_tcon21_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON21_ACROSS_FRAME_CONTROL_get_tcon21_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON21_ACROSS_FRAME_CONTROL_get_tcon21_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON21_FRAME_HL_CONTROL                                           0x1802D4C4
#define  TCON_TCON21_FRAME_HL_CONTROL_reg_addr                                   "0xB802D4C4"
#define  TCON_TCON21_FRAME_HL_CONTROL_reg                                        0xB802D4C4
#define  TCON_TCON21_FRAME_HL_CONTROL_inst_addr                                  "0x0085"
#define  set_TCON_TCON21_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON21_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON21_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON21_FRAME_HL_CONTROL_reg))
#define  TCON_TCON21_FRAME_HL_CONTROL_tcon21_frame_offset_shift                  (16)
#define  TCON_TCON21_FRAME_HL_CONTROL_tcon21_hl_shift                            (0)
#define  TCON_TCON21_FRAME_HL_CONTROL_tcon21_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON21_FRAME_HL_CONTROL_tcon21_hl_mask                             (0x0000FFFF)
#define  TCON_TCON21_FRAME_HL_CONTROL_tcon21_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON21_FRAME_HL_CONTROL_tcon21_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON21_FRAME_HL_CONTROL_get_tcon21_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON21_FRAME_HL_CONTROL_get_tcon21_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON22_HSE                                                        0x1802D4D0
#define  TCON_TCON22_HSE_reg_addr                                                "0xB802D4D0"
#define  TCON_TCON22_HSE_reg                                                     0xB802D4D0
#define  TCON_TCON22_HSE_inst_addr                                               "0x0086"
#define  set_TCON_TCON22_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON22_HSE_reg)=data)
#define  get_TCON_TCON22_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON22_HSE_reg))
#define  TCON_TCON22_HSE_dummy_22_shift                                          (31)
#define  TCON_TCON22_HSE_tcon22_hstart_shift                                     (16)
#define  TCON_TCON22_HSE_tcon22_hend_shift                                       (0)
#define  TCON_TCON22_HSE_dummy_22_mask                                           (0x80000000)
#define  TCON_TCON22_HSE_tcon22_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON22_HSE_tcon22_hend_mask                                        (0x00007FFF)
#define  TCON_TCON22_HSE_dummy_22(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON22_HSE_tcon22_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON22_HSE_tcon22_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON22_HSE_get_dummy_22(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON22_HSE_get_tcon22_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON22_HSE_get_tcon22_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON22_VSE                                                        0x1802D4D4
#define  TCON_TCON22_VSE_reg_addr                                                "0xB802D4D4"
#define  TCON_TCON22_VSE_reg                                                     0xB802D4D4
#define  TCON_TCON22_VSE_inst_addr                                               "0x0087"
#define  set_TCON_TCON22_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON22_VSE_reg)=data)
#define  get_TCON_TCON22_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON22_VSE_reg))
#define  TCON_TCON22_VSE_tcon22_vstart_shift                                     (16)
#define  TCON_TCON22_VSE_tcon22_vend_shift                                       (0)
#define  TCON_TCON22_VSE_tcon22_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON22_VSE_tcon22_vend_mask                                        (0x00001FFF)
#define  TCON_TCON22_VSE_tcon22_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON22_VSE_tcon22_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON22_VSE_get_tcon22_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON22_VSE_get_tcon22_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON22_Ctrl                                                       0x1802D4D8
#define  TCON_TCON22_Ctrl_reg_addr                                               "0xB802D4D8"
#define  TCON_TCON22_Ctrl_reg                                                    0xB802D4D8
#define  TCON_TCON22_Ctrl_inst_addr                                              "0x0088"
#define  set_TCON_TCON22_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON22_Ctrl_reg)=data)
#define  get_TCON_TCON22_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON22_Ctrl_reg))
#define  TCON_TCON22_Ctrl_tcon22_l_flag_sel_shift                                (13)
#define  TCON_TCON22_Ctrl_tcon22_off_opt_shift                                   (12)
#define  TCON_TCON22_Ctrl_tcon22_across_ctrl_reset_shift                         (11)
#define  TCON_TCON22_Ctrl_tcon22_mode_shift                                      (8)
#define  TCON_TCON22_Ctrl_tcon22_en_shift                                        (7)
#define  TCON_TCON22_Ctrl_tcon22_inv_shift                                       (6)
#define  TCON_TCON22_Ctrl_tcon22_comb_inv_shift                                  (5)
#define  TCON_TCON22_Ctrl_tcon22_frame_tog_en_shift                              (3)
#define  TCON_TCON22_Ctrl_tcon22_comb_shift                                      (0)
#define  TCON_TCON22_Ctrl_tcon22_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON22_Ctrl_tcon22_off_opt_mask                                    (0x00001000)
#define  TCON_TCON22_Ctrl_tcon22_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON22_Ctrl_tcon22_mode_mask                                       (0x00000700)
#define  TCON_TCON22_Ctrl_tcon22_en_mask                                         (0x00000080)
#define  TCON_TCON22_Ctrl_tcon22_inv_mask                                        (0x00000040)
#define  TCON_TCON22_Ctrl_tcon22_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON22_Ctrl_tcon22_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON22_Ctrl_tcon22_comb_mask                                       (0x00000007)
#define  TCON_TCON22_Ctrl_tcon22_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON22_Ctrl_tcon22_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON22_Ctrl_tcon22_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON22_Ctrl_tcon22_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON22_Ctrl_tcon22_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON22_Ctrl_tcon22_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON22_Ctrl_tcon22_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON22_Ctrl_tcon22_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON22_Ctrl_tcon22_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON22_Ctrl_get_tcon22_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON22_Ctrl_get_tcon22_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON22_Ctrl_get_tcon22_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON22_Ctrl_get_tcon22_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON22_Ctrl_get_tcon22_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON22_Ctrl_get_tcon22_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON22_Ctrl_get_tcon22_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON22_Ctrl_get_tcon22_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON22_Ctrl_get_tcon22_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON22_ACROSS_LINE_CONTROL3                                       0x1802D4DC
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D4DC"
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_reg                                    0xB802D4DC
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_inst_addr                              "0x0089"
#define  set_TCON_TCON22_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON22_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON22_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON22_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_tcon22_across_frame_int_shift          (28)
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_tcon22_across_ctrl3_rp_shift           (16)
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_tcon22_hl_num_shift                    (12)
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_tcon22_across_ctrl3_hp_shift           (0)
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_tcon22_across_frame_int_mask           (0x10000000)
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_tcon22_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_tcon22_hl_num_mask                     (0x0000F000)
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_tcon22_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_tcon22_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_tcon22_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_tcon22_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_tcon22_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_get_tcon22_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_get_tcon22_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_get_tcon22_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON22_ACROSS_LINE_CONTROL3_get_tcon22_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON22_ACROSS_FRAME_CONTROL                                       0x1802D4E0
#define  TCON_TCON22_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D4E0"
#define  TCON_TCON22_ACROSS_FRAME_CONTROL_reg                                    0xB802D4E0
#define  TCON_TCON22_ACROSS_FRAME_CONTROL_inst_addr                              "0x008A"
#define  set_TCON_TCON22_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON22_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON22_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON22_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON22_ACROSS_FRAME_CONTROL_tcon22_frame_lp_shift                  (16)
#define  TCON_TCON22_ACROSS_FRAME_CONTROL_tcon22_frame_hp_shift                  (0)
#define  TCON_TCON22_ACROSS_FRAME_CONTROL_tcon22_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON22_ACROSS_FRAME_CONTROL_tcon22_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON22_ACROSS_FRAME_CONTROL_tcon22_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON22_ACROSS_FRAME_CONTROL_tcon22_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON22_ACROSS_FRAME_CONTROL_get_tcon22_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON22_ACROSS_FRAME_CONTROL_get_tcon22_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON22_FRAME_HL_CONTROL                                           0x1802D4E4
#define  TCON_TCON22_FRAME_HL_CONTROL_reg_addr                                   "0xB802D4E4"
#define  TCON_TCON22_FRAME_HL_CONTROL_reg                                        0xB802D4E4
#define  TCON_TCON22_FRAME_HL_CONTROL_inst_addr                                  "0x008B"
#define  set_TCON_TCON22_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON22_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON22_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON22_FRAME_HL_CONTROL_reg))
#define  TCON_TCON22_FRAME_HL_CONTROL_tcon22_frame_offset_shift                  (16)
#define  TCON_TCON22_FRAME_HL_CONTROL_tcon22_hl_shift                            (0)
#define  TCON_TCON22_FRAME_HL_CONTROL_tcon22_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON22_FRAME_HL_CONTROL_tcon22_hl_mask                             (0x0000FFFF)
#define  TCON_TCON22_FRAME_HL_CONTROL_tcon22_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON22_FRAME_HL_CONTROL_tcon22_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON22_FRAME_HL_CONTROL_get_tcon22_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON22_FRAME_HL_CONTROL_get_tcon22_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON23_HSE                                                        0x1802D4F0
#define  TCON_TCON23_HSE_reg_addr                                                "0xB802D4F0"
#define  TCON_TCON23_HSE_reg                                                     0xB802D4F0
#define  TCON_TCON23_HSE_inst_addr                                               "0x008C"
#define  set_TCON_TCON23_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON23_HSE_reg)=data)
#define  get_TCON_TCON23_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON23_HSE_reg))
#define  TCON_TCON23_HSE_dummy_23_shift                                          (31)
#define  TCON_TCON23_HSE_tcon23_hstart_shift                                     (16)
#define  TCON_TCON23_HSE_tcon23_hend_shift                                       (0)
#define  TCON_TCON23_HSE_dummy_23_mask                                           (0x80000000)
#define  TCON_TCON23_HSE_tcon23_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON23_HSE_tcon23_hend_mask                                        (0x00007FFF)
#define  TCON_TCON23_HSE_dummy_23(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON23_HSE_tcon23_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON23_HSE_tcon23_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON23_HSE_get_dummy_23(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON23_HSE_get_tcon23_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON23_HSE_get_tcon23_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON23_VSE                                                        0x1802D4F4
#define  TCON_TCON23_VSE_reg_addr                                                "0xB802D4F4"
#define  TCON_TCON23_VSE_reg                                                     0xB802D4F4
#define  TCON_TCON23_VSE_inst_addr                                               "0x008D"
#define  set_TCON_TCON23_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON23_VSE_reg)=data)
#define  get_TCON_TCON23_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON23_VSE_reg))
#define  TCON_TCON23_VSE_tcon23_vstart_shift                                     (16)
#define  TCON_TCON23_VSE_tcon23_vend_shift                                       (0)
#define  TCON_TCON23_VSE_tcon23_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON23_VSE_tcon23_vend_mask                                        (0x00001FFF)
#define  TCON_TCON23_VSE_tcon23_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON23_VSE_tcon23_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON23_VSE_get_tcon23_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON23_VSE_get_tcon23_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON23_Ctrl                                                       0x1802D4F8
#define  TCON_TCON23_Ctrl_reg_addr                                               "0xB802D4F8"
#define  TCON_TCON23_Ctrl_reg                                                    0xB802D4F8
#define  TCON_TCON23_Ctrl_inst_addr                                              "0x008E"
#define  set_TCON_TCON23_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON23_Ctrl_reg)=data)
#define  get_TCON_TCON23_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON23_Ctrl_reg))
#define  TCON_TCON23_Ctrl_tcon23_l_flag_sel_shift                                (13)
#define  TCON_TCON23_Ctrl_tcon23_off_opt_shift                                   (12)
#define  TCON_TCON23_Ctrl_tcon23_across_ctrl_reset_shift                         (11)
#define  TCON_TCON23_Ctrl_tcon23_mode_shift                                      (8)
#define  TCON_TCON23_Ctrl_tcon23_en_shift                                        (7)
#define  TCON_TCON23_Ctrl_tcon23_inv_shift                                       (6)
#define  TCON_TCON23_Ctrl_tcon23_comb_inv_shift                                  (5)
#define  TCON_TCON23_Ctrl_tcon23_frame_tog_en_shift                              (3)
#define  TCON_TCON23_Ctrl_tcon23_comb_shift                                      (0)
#define  TCON_TCON23_Ctrl_tcon23_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON23_Ctrl_tcon23_off_opt_mask                                    (0x00001000)
#define  TCON_TCON23_Ctrl_tcon23_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON23_Ctrl_tcon23_mode_mask                                       (0x00000700)
#define  TCON_TCON23_Ctrl_tcon23_en_mask                                         (0x00000080)
#define  TCON_TCON23_Ctrl_tcon23_inv_mask                                        (0x00000040)
#define  TCON_TCON23_Ctrl_tcon23_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON23_Ctrl_tcon23_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON23_Ctrl_tcon23_comb_mask                                       (0x00000007)
#define  TCON_TCON23_Ctrl_tcon23_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON23_Ctrl_tcon23_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON23_Ctrl_tcon23_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON23_Ctrl_tcon23_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON23_Ctrl_tcon23_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON23_Ctrl_tcon23_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON23_Ctrl_tcon23_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON23_Ctrl_tcon23_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON23_Ctrl_tcon23_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON23_Ctrl_get_tcon23_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON23_Ctrl_get_tcon23_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON23_Ctrl_get_tcon23_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON23_Ctrl_get_tcon23_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON23_Ctrl_get_tcon23_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON23_Ctrl_get_tcon23_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON23_Ctrl_get_tcon23_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON23_Ctrl_get_tcon23_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON23_Ctrl_get_tcon23_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON23_ACROSS_LINE_CONTROL3                                       0x1802D4FC
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D4FC"
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_reg                                    0xB802D4FC
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_inst_addr                              "0x008F"
#define  set_TCON_TCON23_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON23_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON23_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON23_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_tcon23_across_frame_int_shift          (28)
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_tcon23_across_ctrl3_rp_shift           (16)
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_tcon23_hl_num_shift                    (12)
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_tcon23_across_ctrl3_hp_shift           (0)
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_tcon23_across_frame_int_mask           (0x10000000)
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_tcon23_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_tcon23_hl_num_mask                     (0x0000F000)
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_tcon23_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_tcon23_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_tcon23_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_tcon23_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_tcon23_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_get_tcon23_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_get_tcon23_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_get_tcon23_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON23_ACROSS_LINE_CONTROL3_get_tcon23_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON23_ACROSS_FRAME_CONTROL                                       0x1802D500
#define  TCON_TCON23_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D500"
#define  TCON_TCON23_ACROSS_FRAME_CONTROL_reg                                    0xB802D500
#define  TCON_TCON23_ACROSS_FRAME_CONTROL_inst_addr                              "0x0090"
#define  set_TCON_TCON23_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON23_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON23_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON23_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON23_ACROSS_FRAME_CONTROL_tcon23_frame_lp_shift                  (16)
#define  TCON_TCON23_ACROSS_FRAME_CONTROL_tcon23_frame_hp_shift                  (0)
#define  TCON_TCON23_ACROSS_FRAME_CONTROL_tcon23_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON23_ACROSS_FRAME_CONTROL_tcon23_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON23_ACROSS_FRAME_CONTROL_tcon23_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON23_ACROSS_FRAME_CONTROL_tcon23_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON23_ACROSS_FRAME_CONTROL_get_tcon23_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON23_ACROSS_FRAME_CONTROL_get_tcon23_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON23_FRAME_HL_CONTROL                                           0x1802D504
#define  TCON_TCON23_FRAME_HL_CONTROL_reg_addr                                   "0xB802D504"
#define  TCON_TCON23_FRAME_HL_CONTROL_reg                                        0xB802D504
#define  TCON_TCON23_FRAME_HL_CONTROL_inst_addr                                  "0x0091"
#define  set_TCON_TCON23_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON23_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON23_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON23_FRAME_HL_CONTROL_reg))
#define  TCON_TCON23_FRAME_HL_CONTROL_tcon23_frame_offset_shift                  (16)
#define  TCON_TCON23_FRAME_HL_CONTROL_tcon23_hl_shift                            (0)
#define  TCON_TCON23_FRAME_HL_CONTROL_tcon23_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON23_FRAME_HL_CONTROL_tcon23_hl_mask                             (0x0000FFFF)
#define  TCON_TCON23_FRAME_HL_CONTROL_tcon23_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON23_FRAME_HL_CONTROL_tcon23_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON23_FRAME_HL_CONTROL_get_tcon23_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON23_FRAME_HL_CONTROL_get_tcon23_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON24_HSE                                                        0x1802D510
#define  TCON_TCON24_HSE_reg_addr                                                "0xB802D510"
#define  TCON_TCON24_HSE_reg                                                     0xB802D510
#define  TCON_TCON24_HSE_inst_addr                                               "0x0092"
#define  set_TCON_TCON24_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON24_HSE_reg)=data)
#define  get_TCON_TCON24_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON24_HSE_reg))
#define  TCON_TCON24_HSE_dummy_24_shift                                          (31)
#define  TCON_TCON24_HSE_tcon24_hstart_shift                                     (16)
#define  TCON_TCON24_HSE_tcon24_hend_shift                                       (0)
#define  TCON_TCON24_HSE_dummy_24_mask                                           (0x80000000)
#define  TCON_TCON24_HSE_tcon24_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON24_HSE_tcon24_hend_mask                                        (0x00007FFF)
#define  TCON_TCON24_HSE_dummy_24(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON24_HSE_tcon24_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON24_HSE_tcon24_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON24_HSE_get_dummy_24(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON24_HSE_get_tcon24_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON24_HSE_get_tcon24_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON24_VSE                                                        0x1802D514
#define  TCON_TCON24_VSE_reg_addr                                                "0xB802D514"
#define  TCON_TCON24_VSE_reg                                                     0xB802D514
#define  TCON_TCON24_VSE_inst_addr                                               "0x0093"
#define  set_TCON_TCON24_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON24_VSE_reg)=data)
#define  get_TCON_TCON24_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON24_VSE_reg))
#define  TCON_TCON24_VSE_tcon24_vstart_shift                                     (16)
#define  TCON_TCON24_VSE_tcon24_vend_shift                                       (0)
#define  TCON_TCON24_VSE_tcon24_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON24_VSE_tcon24_vend_mask                                        (0x00001FFF)
#define  TCON_TCON24_VSE_tcon24_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON24_VSE_tcon24_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON24_VSE_get_tcon24_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON24_VSE_get_tcon24_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON24_Ctrl                                                       0x1802D518
#define  TCON_TCON24_Ctrl_reg_addr                                               "0xB802D518"
#define  TCON_TCON24_Ctrl_reg                                                    0xB802D518
#define  TCON_TCON24_Ctrl_inst_addr                                              "0x0094"
#define  set_TCON_TCON24_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON24_Ctrl_reg)=data)
#define  get_TCON_TCON24_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON24_Ctrl_reg))
#define  TCON_TCON24_Ctrl_tcon24_l_flag_sel_shift                                (13)
#define  TCON_TCON24_Ctrl_tcon24_off_opt_shift                                   (12)
#define  TCON_TCON24_Ctrl_tcon24_across_ctrl_reset_shift                         (11)
#define  TCON_TCON24_Ctrl_tcon24_mode_shift                                      (8)
#define  TCON_TCON24_Ctrl_tcon24_en_shift                                        (7)
#define  TCON_TCON24_Ctrl_tcon24_inv_shift                                       (6)
#define  TCON_TCON24_Ctrl_tcon24_comb_inv_shift                                  (5)
#define  TCON_TCON24_Ctrl_tcon24_frame_tog_en_shift                              (3)
#define  TCON_TCON24_Ctrl_tcon24_comb_shift                                      (0)
#define  TCON_TCON24_Ctrl_tcon24_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON24_Ctrl_tcon24_off_opt_mask                                    (0x00001000)
#define  TCON_TCON24_Ctrl_tcon24_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON24_Ctrl_tcon24_mode_mask                                       (0x00000700)
#define  TCON_TCON24_Ctrl_tcon24_en_mask                                         (0x00000080)
#define  TCON_TCON24_Ctrl_tcon24_inv_mask                                        (0x00000040)
#define  TCON_TCON24_Ctrl_tcon24_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON24_Ctrl_tcon24_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON24_Ctrl_tcon24_comb_mask                                       (0x00000007)
#define  TCON_TCON24_Ctrl_tcon24_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON24_Ctrl_tcon24_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON24_Ctrl_tcon24_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON24_Ctrl_tcon24_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON24_Ctrl_tcon24_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON24_Ctrl_tcon24_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON24_Ctrl_tcon24_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON24_Ctrl_tcon24_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON24_Ctrl_tcon24_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON24_Ctrl_get_tcon24_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON24_Ctrl_get_tcon24_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON24_Ctrl_get_tcon24_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON24_Ctrl_get_tcon24_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON24_Ctrl_get_tcon24_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON24_Ctrl_get_tcon24_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON24_Ctrl_get_tcon24_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON24_Ctrl_get_tcon24_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON24_Ctrl_get_tcon24_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON24_ACROSS_LINE_CONTROL3                                       0x1802D51C
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D51C"
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_reg                                    0xB802D51C
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_inst_addr                              "0x0095"
#define  set_TCON_TCON24_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON24_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON24_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON24_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_tcon24_across_frame_int_shift          (28)
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_tcon24_across_ctrl3_rp_shift           (16)
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_tcon24_hl_num_shift                    (12)
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_tcon24_across_ctrl3_hp_shift           (0)
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_tcon24_across_frame_int_mask           (0x10000000)
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_tcon24_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_tcon24_hl_num_mask                     (0x0000F000)
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_tcon24_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_tcon24_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_tcon24_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_tcon24_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_tcon24_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_get_tcon24_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_get_tcon24_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_get_tcon24_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON24_ACROSS_LINE_CONTROL3_get_tcon24_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON24_ACROSS_FRAME_CONTROL                                       0x1802D520
#define  TCON_TCON24_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D520"
#define  TCON_TCON24_ACROSS_FRAME_CONTROL_reg                                    0xB802D520
#define  TCON_TCON24_ACROSS_FRAME_CONTROL_inst_addr                              "0x0096"
#define  set_TCON_TCON24_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON24_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON24_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON24_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON24_ACROSS_FRAME_CONTROL_tcon24_frame_lp_shift                  (16)
#define  TCON_TCON24_ACROSS_FRAME_CONTROL_tcon24_frame_hp_shift                  (0)
#define  TCON_TCON24_ACROSS_FRAME_CONTROL_tcon24_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON24_ACROSS_FRAME_CONTROL_tcon24_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON24_ACROSS_FRAME_CONTROL_tcon24_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON24_ACROSS_FRAME_CONTROL_tcon24_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON24_ACROSS_FRAME_CONTROL_get_tcon24_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON24_ACROSS_FRAME_CONTROL_get_tcon24_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON24_FRAME_HL_CONTROL                                           0x1802D524
#define  TCON_TCON24_FRAME_HL_CONTROL_reg_addr                                   "0xB802D524"
#define  TCON_TCON24_FRAME_HL_CONTROL_reg                                        0xB802D524
#define  TCON_TCON24_FRAME_HL_CONTROL_inst_addr                                  "0x0097"
#define  set_TCON_TCON24_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON24_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON24_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON24_FRAME_HL_CONTROL_reg))
#define  TCON_TCON24_FRAME_HL_CONTROL_tcon24_frame_offset_shift                  (16)
#define  TCON_TCON24_FRAME_HL_CONTROL_tcon24_hl_shift                            (0)
#define  TCON_TCON24_FRAME_HL_CONTROL_tcon24_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON24_FRAME_HL_CONTROL_tcon24_hl_mask                             (0x0000FFFF)
#define  TCON_TCON24_FRAME_HL_CONTROL_tcon24_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON24_FRAME_HL_CONTROL_tcon24_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON24_FRAME_HL_CONTROL_get_tcon24_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON24_FRAME_HL_CONTROL_get_tcon24_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON25_HSE                                                        0x1802D530
#define  TCON_TCON25_HSE_reg_addr                                                "0xB802D530"
#define  TCON_TCON25_HSE_reg                                                     0xB802D530
#define  TCON_TCON25_HSE_inst_addr                                               "0x0098"
#define  set_TCON_TCON25_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON25_HSE_reg)=data)
#define  get_TCON_TCON25_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON25_HSE_reg))
#define  TCON_TCON25_HSE_dummy_25_shift                                          (31)
#define  TCON_TCON25_HSE_tcon25_hstart_shift                                     (16)
#define  TCON_TCON25_HSE_tcon25_hend_shift                                       (0)
#define  TCON_TCON25_HSE_dummy_25_mask                                           (0x80000000)
#define  TCON_TCON25_HSE_tcon25_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON25_HSE_tcon25_hend_mask                                        (0x00007FFF)
#define  TCON_TCON25_HSE_dummy_25(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON25_HSE_tcon25_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON25_HSE_tcon25_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON25_HSE_get_dummy_25(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON25_HSE_get_tcon25_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON25_HSE_get_tcon25_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON25_VSE                                                        0x1802D534
#define  TCON_TCON25_VSE_reg_addr                                                "0xB802D534"
#define  TCON_TCON25_VSE_reg                                                     0xB802D534
#define  TCON_TCON25_VSE_inst_addr                                               "0x0099"
#define  set_TCON_TCON25_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON25_VSE_reg)=data)
#define  get_TCON_TCON25_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON25_VSE_reg))
#define  TCON_TCON25_VSE_tcon25_vstart_shift                                     (16)
#define  TCON_TCON25_VSE_tcon25_vend_shift                                       (0)
#define  TCON_TCON25_VSE_tcon25_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON25_VSE_tcon25_vend_mask                                        (0x00001FFF)
#define  TCON_TCON25_VSE_tcon25_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON25_VSE_tcon25_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON25_VSE_get_tcon25_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON25_VSE_get_tcon25_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON25_Ctrl                                                       0x1802D538
#define  TCON_TCON25_Ctrl_reg_addr                                               "0xB802D538"
#define  TCON_TCON25_Ctrl_reg                                                    0xB802D538
#define  TCON_TCON25_Ctrl_inst_addr                                              "0x009A"
#define  set_TCON_TCON25_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON25_Ctrl_reg)=data)
#define  get_TCON_TCON25_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON25_Ctrl_reg))
#define  TCON_TCON25_Ctrl_tcon25_l_flag_sel_shift                                (13)
#define  TCON_TCON25_Ctrl_tcon25_off_opt_shift                                   (12)
#define  TCON_TCON25_Ctrl_tcon25_across_ctrl_reset_shift                         (11)
#define  TCON_TCON25_Ctrl_tcon25_mode_shift                                      (8)
#define  TCON_TCON25_Ctrl_tcon25_en_shift                                        (7)
#define  TCON_TCON25_Ctrl_tcon25_inv_shift                                       (6)
#define  TCON_TCON25_Ctrl_tcon25_comb_inv_shift                                  (5)
#define  TCON_TCON25_Ctrl_tcon25_frame_tog_en_shift                              (3)
#define  TCON_TCON25_Ctrl_tcon25_comb_shift                                      (0)
#define  TCON_TCON25_Ctrl_tcon25_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON25_Ctrl_tcon25_off_opt_mask                                    (0x00001000)
#define  TCON_TCON25_Ctrl_tcon25_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON25_Ctrl_tcon25_mode_mask                                       (0x00000700)
#define  TCON_TCON25_Ctrl_tcon25_en_mask                                         (0x00000080)
#define  TCON_TCON25_Ctrl_tcon25_inv_mask                                        (0x00000040)
#define  TCON_TCON25_Ctrl_tcon25_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON25_Ctrl_tcon25_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON25_Ctrl_tcon25_comb_mask                                       (0x00000007)
#define  TCON_TCON25_Ctrl_tcon25_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON25_Ctrl_tcon25_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON25_Ctrl_tcon25_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON25_Ctrl_tcon25_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON25_Ctrl_tcon25_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON25_Ctrl_tcon25_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON25_Ctrl_tcon25_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON25_Ctrl_tcon25_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON25_Ctrl_tcon25_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON25_Ctrl_get_tcon25_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON25_Ctrl_get_tcon25_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON25_Ctrl_get_tcon25_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON25_Ctrl_get_tcon25_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON25_Ctrl_get_tcon25_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON25_Ctrl_get_tcon25_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON25_Ctrl_get_tcon25_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON25_Ctrl_get_tcon25_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON25_Ctrl_get_tcon25_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON25_ACROSS_LINE_CONTROL3                                       0x1802D53C
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D53C"
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_reg                                    0xB802D53C
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_inst_addr                              "0x009B"
#define  set_TCON_TCON25_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON25_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON25_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON25_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_tcon25_across_frame_int_shift          (28)
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_tcon25_across_ctrl3_rp_shift           (16)
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_tcon25_hl_num_shift                    (12)
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_tcon25_across_ctrl3_hp_shift           (0)
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_tcon25_across_frame_int_mask           (0x10000000)
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_tcon25_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_tcon25_hl_num_mask                     (0x0000F000)
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_tcon25_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_tcon25_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_tcon25_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_tcon25_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_tcon25_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_get_tcon25_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_get_tcon25_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_get_tcon25_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON25_ACROSS_LINE_CONTROL3_get_tcon25_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON25_ACROSS_FRAME_CONTROL                                       0x1802D540
#define  TCON_TCON25_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D540"
#define  TCON_TCON25_ACROSS_FRAME_CONTROL_reg                                    0xB802D540
#define  TCON_TCON25_ACROSS_FRAME_CONTROL_inst_addr                              "0x009C"
#define  set_TCON_TCON25_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON25_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON25_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON25_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON25_ACROSS_FRAME_CONTROL_tcon25_frame_lp_shift                  (16)
#define  TCON_TCON25_ACROSS_FRAME_CONTROL_tcon25_frame_hp_shift                  (0)
#define  TCON_TCON25_ACROSS_FRAME_CONTROL_tcon25_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON25_ACROSS_FRAME_CONTROL_tcon25_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON25_ACROSS_FRAME_CONTROL_tcon25_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON25_ACROSS_FRAME_CONTROL_tcon25_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON25_ACROSS_FRAME_CONTROL_get_tcon25_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON25_ACROSS_FRAME_CONTROL_get_tcon25_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON25_FRAME_HL_CONTROL                                           0x1802D544
#define  TCON_TCON25_FRAME_HL_CONTROL_reg_addr                                   "0xB802D544"
#define  TCON_TCON25_FRAME_HL_CONTROL_reg                                        0xB802D544
#define  TCON_TCON25_FRAME_HL_CONTROL_inst_addr                                  "0x009D"
#define  set_TCON_TCON25_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON25_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON25_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON25_FRAME_HL_CONTROL_reg))
#define  TCON_TCON25_FRAME_HL_CONTROL_tcon25_frame_offset_shift                  (16)
#define  TCON_TCON25_FRAME_HL_CONTROL_tcon25_hl_shift                            (0)
#define  TCON_TCON25_FRAME_HL_CONTROL_tcon25_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON25_FRAME_HL_CONTROL_tcon25_hl_mask                             (0x0000FFFF)
#define  TCON_TCON25_FRAME_HL_CONTROL_tcon25_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON25_FRAME_HL_CONTROL_tcon25_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON25_FRAME_HL_CONTROL_get_tcon25_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON25_FRAME_HL_CONTROL_get_tcon25_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON26_HSE                                                        0x1802D550
#define  TCON_TCON26_HSE_reg_addr                                                "0xB802D550"
#define  TCON_TCON26_HSE_reg                                                     0xB802D550
#define  TCON_TCON26_HSE_inst_addr                                               "0x009E"
#define  set_TCON_TCON26_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON26_HSE_reg)=data)
#define  get_TCON_TCON26_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON26_HSE_reg))
#define  TCON_TCON26_HSE_dummy_26_shift                                          (31)
#define  TCON_TCON26_HSE_tcon26_hstart_shift                                     (16)
#define  TCON_TCON26_HSE_tcon26_hend_shift                                       (0)
#define  TCON_TCON26_HSE_dummy_26_mask                                           (0x80000000)
#define  TCON_TCON26_HSE_tcon26_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON26_HSE_tcon26_hend_mask                                        (0x00007FFF)
#define  TCON_TCON26_HSE_dummy_26(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON26_HSE_tcon26_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON26_HSE_tcon26_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON26_HSE_get_dummy_26(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON26_HSE_get_tcon26_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON26_HSE_get_tcon26_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON26_VSE                                                        0x1802D554
#define  TCON_TCON26_VSE_reg_addr                                                "0xB802D554"
#define  TCON_TCON26_VSE_reg                                                     0xB802D554
#define  TCON_TCON26_VSE_inst_addr                                               "0x009F"
#define  set_TCON_TCON26_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON26_VSE_reg)=data)
#define  get_TCON_TCON26_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON26_VSE_reg))
#define  TCON_TCON26_VSE_tcon26_vstart_shift                                     (16)
#define  TCON_TCON26_VSE_tcon26_vend_shift                                       (0)
#define  TCON_TCON26_VSE_tcon26_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON26_VSE_tcon26_vend_mask                                        (0x00001FFF)
#define  TCON_TCON26_VSE_tcon26_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON26_VSE_tcon26_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON26_VSE_get_tcon26_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON26_VSE_get_tcon26_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON26_Ctrl                                                       0x1802D558
#define  TCON_TCON26_Ctrl_reg_addr                                               "0xB802D558"
#define  TCON_TCON26_Ctrl_reg                                                    0xB802D558
#define  TCON_TCON26_Ctrl_inst_addr                                              "0x00A0"
#define  set_TCON_TCON26_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON26_Ctrl_reg)=data)
#define  get_TCON_TCON26_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON26_Ctrl_reg))
#define  TCON_TCON26_Ctrl_tcon26_l_flag_sel_shift                                (13)
#define  TCON_TCON26_Ctrl_tcon26_off_opt_shift                                   (12)
#define  TCON_TCON26_Ctrl_tcon26_across_ctrl_reset_shift                         (11)
#define  TCON_TCON26_Ctrl_tcon26_mode_shift                                      (8)
#define  TCON_TCON26_Ctrl_tcon26_en_shift                                        (7)
#define  TCON_TCON26_Ctrl_tcon26_inv_shift                                       (6)
#define  TCON_TCON26_Ctrl_tcon26_comb_inv_shift                                  (5)
#define  TCON_TCON26_Ctrl_tcon26_frame_tog_en_shift                              (3)
#define  TCON_TCON26_Ctrl_tcon26_comb_shift                                      (0)
#define  TCON_TCON26_Ctrl_tcon26_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON26_Ctrl_tcon26_off_opt_mask                                    (0x00001000)
#define  TCON_TCON26_Ctrl_tcon26_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON26_Ctrl_tcon26_mode_mask                                       (0x00000700)
#define  TCON_TCON26_Ctrl_tcon26_en_mask                                         (0x00000080)
#define  TCON_TCON26_Ctrl_tcon26_inv_mask                                        (0x00000040)
#define  TCON_TCON26_Ctrl_tcon26_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON26_Ctrl_tcon26_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON26_Ctrl_tcon26_comb_mask                                       (0x00000007)
#define  TCON_TCON26_Ctrl_tcon26_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON26_Ctrl_tcon26_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON26_Ctrl_tcon26_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON26_Ctrl_tcon26_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON26_Ctrl_tcon26_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON26_Ctrl_tcon26_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON26_Ctrl_tcon26_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON26_Ctrl_tcon26_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON26_Ctrl_tcon26_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON26_Ctrl_get_tcon26_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON26_Ctrl_get_tcon26_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON26_Ctrl_get_tcon26_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON26_Ctrl_get_tcon26_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON26_Ctrl_get_tcon26_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON26_Ctrl_get_tcon26_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON26_Ctrl_get_tcon26_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON26_Ctrl_get_tcon26_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON26_Ctrl_get_tcon26_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON26_ACROSS_LINE_CONTROL3                                       0x1802D55C
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D55C"
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_reg                                    0xB802D55C
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_inst_addr                              "0x00A1"
#define  set_TCON_TCON26_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON26_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON26_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON26_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_tcon26_across_frame_int_shift          (28)
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_tcon26_across_ctrl3_rp_shift           (16)
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_tcon26_hl_num_shift                    (12)
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_tcon26_across_ctrl3_hp_shift           (0)
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_tcon26_across_frame_int_mask           (0x10000000)
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_tcon26_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_tcon26_hl_num_mask                     (0x0000F000)
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_tcon26_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_tcon26_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_tcon26_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_tcon26_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_tcon26_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_get_tcon26_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_get_tcon26_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_get_tcon26_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON26_ACROSS_LINE_CONTROL3_get_tcon26_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON26_ACROSS_FRAME_CONTROL                                       0x1802D560
#define  TCON_TCON26_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D560"
#define  TCON_TCON26_ACROSS_FRAME_CONTROL_reg                                    0xB802D560
#define  TCON_TCON26_ACROSS_FRAME_CONTROL_inst_addr                              "0x00A2"
#define  set_TCON_TCON26_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON26_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON26_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON26_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON26_ACROSS_FRAME_CONTROL_tcon26_frame_lp_shift                  (16)
#define  TCON_TCON26_ACROSS_FRAME_CONTROL_tcon26_frame_hp_shift                  (0)
#define  TCON_TCON26_ACROSS_FRAME_CONTROL_tcon26_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON26_ACROSS_FRAME_CONTROL_tcon26_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON26_ACROSS_FRAME_CONTROL_tcon26_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON26_ACROSS_FRAME_CONTROL_tcon26_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON26_ACROSS_FRAME_CONTROL_get_tcon26_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON26_ACROSS_FRAME_CONTROL_get_tcon26_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON26_FRAME_HL_CONTROL                                           0x1802D564
#define  TCON_TCON26_FRAME_HL_CONTROL_reg_addr                                   "0xB802D564"
#define  TCON_TCON26_FRAME_HL_CONTROL_reg                                        0xB802D564
#define  TCON_TCON26_FRAME_HL_CONTROL_inst_addr                                  "0x00A3"
#define  set_TCON_TCON26_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON26_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON26_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON26_FRAME_HL_CONTROL_reg))
#define  TCON_TCON26_FRAME_HL_CONTROL_tcon26_frame_offset_shift                  (16)
#define  TCON_TCON26_FRAME_HL_CONTROL_tcon26_hl_shift                            (0)
#define  TCON_TCON26_FRAME_HL_CONTROL_tcon26_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON26_FRAME_HL_CONTROL_tcon26_hl_mask                             (0x0000FFFF)
#define  TCON_TCON26_FRAME_HL_CONTROL_tcon26_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON26_FRAME_HL_CONTROL_tcon26_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON26_FRAME_HL_CONTROL_get_tcon26_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON26_FRAME_HL_CONTROL_get_tcon26_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON27_HSE                                                        0x1802D570
#define  TCON_TCON27_HSE_reg_addr                                                "0xB802D570"
#define  TCON_TCON27_HSE_reg                                                     0xB802D570
#define  TCON_TCON27_HSE_inst_addr                                               "0x00A4"
#define  set_TCON_TCON27_HSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON27_HSE_reg)=data)
#define  get_TCON_TCON27_HSE_reg                                                 (*((volatile unsigned int*)TCON_TCON27_HSE_reg))
#define  TCON_TCON27_HSE_dummy_27_shift                                          (31)
#define  TCON_TCON27_HSE_tcon27_hstart_shift                                     (16)
#define  TCON_TCON27_HSE_tcon27_hend_shift                                       (0)
#define  TCON_TCON27_HSE_dummy_27_mask                                           (0x80000000)
#define  TCON_TCON27_HSE_tcon27_hstart_mask                                      (0x7FFF0000)
#define  TCON_TCON27_HSE_tcon27_hend_mask                                        (0x00007FFF)
#define  TCON_TCON27_HSE_dummy_27(data)                                          (0x80000000&((data)<<31))
#define  TCON_TCON27_HSE_tcon27_hstart(data)                                     (0x7FFF0000&((data)<<16))
#define  TCON_TCON27_HSE_tcon27_hend(data)                                       (0x00007FFF&(data))
#define  TCON_TCON27_HSE_get_dummy_27(data)                                      ((0x80000000&(data))>>31)
#define  TCON_TCON27_HSE_get_tcon27_hstart(data)                                 ((0x7FFF0000&(data))>>16)
#define  TCON_TCON27_HSE_get_tcon27_hend(data)                                   (0x00007FFF&(data))

#define  TCON_TCON27_VSE                                                        0x1802D574
#define  TCON_TCON27_VSE_reg_addr                                                "0xB802D574"
#define  TCON_TCON27_VSE_reg                                                     0xB802D574
#define  TCON_TCON27_VSE_inst_addr                                               "0x00A5"
#define  set_TCON_TCON27_VSE_reg(data)                                           (*((volatile unsigned int*)TCON_TCON27_VSE_reg)=data)
#define  get_TCON_TCON27_VSE_reg                                                 (*((volatile unsigned int*)TCON_TCON27_VSE_reg))
#define  TCON_TCON27_VSE_tcon27_vstart_shift                                     (16)
#define  TCON_TCON27_VSE_tcon27_vend_shift                                       (0)
#define  TCON_TCON27_VSE_tcon27_vstart_mask                                      (0x1FFF0000)
#define  TCON_TCON27_VSE_tcon27_vend_mask                                        (0x00001FFF)
#define  TCON_TCON27_VSE_tcon27_vstart(data)                                     (0x1FFF0000&((data)<<16))
#define  TCON_TCON27_VSE_tcon27_vend(data)                                       (0x00001FFF&(data))
#define  TCON_TCON27_VSE_get_tcon27_vstart(data)                                 ((0x1FFF0000&(data))>>16)
#define  TCON_TCON27_VSE_get_tcon27_vend(data)                                   (0x00001FFF&(data))

#define  TCON_TCON27_Ctrl                                                       0x1802D578
#define  TCON_TCON27_Ctrl_reg_addr                                               "0xB802D578"
#define  TCON_TCON27_Ctrl_reg                                                    0xB802D578
#define  TCON_TCON27_Ctrl_inst_addr                                              "0x00A6"
#define  set_TCON_TCON27_Ctrl_reg(data)                                          (*((volatile unsigned int*)TCON_TCON27_Ctrl_reg)=data)
#define  get_TCON_TCON27_Ctrl_reg                                                (*((volatile unsigned int*)TCON_TCON27_Ctrl_reg))
#define  TCON_TCON27_Ctrl_tcon27_l_flag_sel_shift                                (13)
#define  TCON_TCON27_Ctrl_tcon27_off_opt_shift                                   (12)
#define  TCON_TCON27_Ctrl_tcon27_across_ctrl_reset_shift                         (11)
#define  TCON_TCON27_Ctrl_tcon27_mode_shift                                      (8)
#define  TCON_TCON27_Ctrl_tcon27_en_shift                                        (7)
#define  TCON_TCON27_Ctrl_tcon27_inv_shift                                       (6)
#define  TCON_TCON27_Ctrl_tcon27_comb_inv_shift                                  (5)
#define  TCON_TCON27_Ctrl_tcon27_frame_tog_en_shift                              (3)
#define  TCON_TCON27_Ctrl_tcon27_comb_shift                                      (0)
#define  TCON_TCON27_Ctrl_tcon27_l_flag_sel_mask                                 (0x0003E000)
#define  TCON_TCON27_Ctrl_tcon27_off_opt_mask                                    (0x00001000)
#define  TCON_TCON27_Ctrl_tcon27_across_ctrl_reset_mask                          (0x00000800)
#define  TCON_TCON27_Ctrl_tcon27_mode_mask                                       (0x00000700)
#define  TCON_TCON27_Ctrl_tcon27_en_mask                                         (0x00000080)
#define  TCON_TCON27_Ctrl_tcon27_inv_mask                                        (0x00000040)
#define  TCON_TCON27_Ctrl_tcon27_comb_inv_mask                                   (0x00000020)
#define  TCON_TCON27_Ctrl_tcon27_frame_tog_en_mask                               (0x00000008)
#define  TCON_TCON27_Ctrl_tcon27_comb_mask                                       (0x00000007)
#define  TCON_TCON27_Ctrl_tcon27_l_flag_sel(data)                                (0x0003E000&((data)<<13))
#define  TCON_TCON27_Ctrl_tcon27_off_opt(data)                                   (0x00001000&((data)<<12))
#define  TCON_TCON27_Ctrl_tcon27_across_ctrl_reset(data)                         (0x00000800&((data)<<11))
#define  TCON_TCON27_Ctrl_tcon27_mode(data)                                      (0x00000700&((data)<<8))
#define  TCON_TCON27_Ctrl_tcon27_en(data)                                        (0x00000080&((data)<<7))
#define  TCON_TCON27_Ctrl_tcon27_inv(data)                                       (0x00000040&((data)<<6))
#define  TCON_TCON27_Ctrl_tcon27_comb_inv(data)                                  (0x00000020&((data)<<5))
#define  TCON_TCON27_Ctrl_tcon27_frame_tog_en(data)                              (0x00000008&((data)<<3))
#define  TCON_TCON27_Ctrl_tcon27_comb(data)                                      (0x00000007&(data))
#define  TCON_TCON27_Ctrl_get_tcon27_l_flag_sel(data)                            ((0x0003E000&(data))>>13)
#define  TCON_TCON27_Ctrl_get_tcon27_off_opt(data)                               ((0x00001000&(data))>>12)
#define  TCON_TCON27_Ctrl_get_tcon27_across_ctrl_reset(data)                     ((0x00000800&(data))>>11)
#define  TCON_TCON27_Ctrl_get_tcon27_mode(data)                                  ((0x00000700&(data))>>8)
#define  TCON_TCON27_Ctrl_get_tcon27_en(data)                                    ((0x00000080&(data))>>7)
#define  TCON_TCON27_Ctrl_get_tcon27_inv(data)                                   ((0x00000040&(data))>>6)
#define  TCON_TCON27_Ctrl_get_tcon27_comb_inv(data)                              ((0x00000020&(data))>>5)
#define  TCON_TCON27_Ctrl_get_tcon27_frame_tog_en(data)                          ((0x00000008&(data))>>3)
#define  TCON_TCON27_Ctrl_get_tcon27_comb(data)                                  (0x00000007&(data))

#define  TCON_TCON27_ACROSS_LINE_CONTROL3                                       0x1802D57C
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_reg_addr                               "0xB802D57C"
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_reg                                    0xB802D57C
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_inst_addr                              "0x00A7"
#define  set_TCON_TCON27_ACROSS_LINE_CONTROL3_reg(data)                          (*((volatile unsigned int*)TCON_TCON27_ACROSS_LINE_CONTROL3_reg)=data)
#define  get_TCON_TCON27_ACROSS_LINE_CONTROL3_reg                                (*((volatile unsigned int*)TCON_TCON27_ACROSS_LINE_CONTROL3_reg))
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_tcon27_across_frame_int_shift          (28)
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_tcon27_across_ctrl3_rp_shift           (16)
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_tcon27_hl_num_shift                    (12)
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_tcon27_across_ctrl3_hp_shift           (0)
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_tcon27_across_frame_int_mask           (0x10000000)
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_tcon27_across_ctrl3_rp_mask            (0x0FFF0000)
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_tcon27_hl_num_mask                     (0x0000F000)
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_tcon27_across_ctrl3_hp_mask            (0x00000FFF)
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_tcon27_across_frame_int(data)          (0x10000000&((data)<<28))
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_tcon27_across_ctrl3_rp(data)           (0x0FFF0000&((data)<<16))
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_tcon27_hl_num(data)                    (0x0000F000&((data)<<12))
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_tcon27_across_ctrl3_hp(data)           (0x00000FFF&(data))
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_get_tcon27_across_frame_int(data)      ((0x10000000&(data))>>28)
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_get_tcon27_across_ctrl3_rp(data)       ((0x0FFF0000&(data))>>16)
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_get_tcon27_hl_num(data)                ((0x0000F000&(data))>>12)
#define  TCON_TCON27_ACROSS_LINE_CONTROL3_get_tcon27_across_ctrl3_hp(data)       (0x00000FFF&(data))

#define  TCON_TCON27_ACROSS_FRAME_CONTROL                                       0x1802D580
#define  TCON_TCON27_ACROSS_FRAME_CONTROL_reg_addr                               "0xB802D580"
#define  TCON_TCON27_ACROSS_FRAME_CONTROL_reg                                    0xB802D580
#define  TCON_TCON27_ACROSS_FRAME_CONTROL_inst_addr                              "0x00A8"
#define  set_TCON_TCON27_ACROSS_FRAME_CONTROL_reg(data)                          (*((volatile unsigned int*)TCON_TCON27_ACROSS_FRAME_CONTROL_reg)=data)
#define  get_TCON_TCON27_ACROSS_FRAME_CONTROL_reg                                (*((volatile unsigned int*)TCON_TCON27_ACROSS_FRAME_CONTROL_reg))
#define  TCON_TCON27_ACROSS_FRAME_CONTROL_tcon27_frame_lp_shift                  (16)
#define  TCON_TCON27_ACROSS_FRAME_CONTROL_tcon27_frame_hp_shift                  (0)
#define  TCON_TCON27_ACROSS_FRAME_CONTROL_tcon27_frame_lp_mask                   (0x0FFF0000)
#define  TCON_TCON27_ACROSS_FRAME_CONTROL_tcon27_frame_hp_mask                   (0x00000FFF)
#define  TCON_TCON27_ACROSS_FRAME_CONTROL_tcon27_frame_lp(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON27_ACROSS_FRAME_CONTROL_tcon27_frame_hp(data)                  (0x00000FFF&(data))
#define  TCON_TCON27_ACROSS_FRAME_CONTROL_get_tcon27_frame_lp(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON27_ACROSS_FRAME_CONTROL_get_tcon27_frame_hp(data)              (0x00000FFF&(data))

#define  TCON_TCON27_FRAME_HL_CONTROL                                           0x1802D584
#define  TCON_TCON27_FRAME_HL_CONTROL_reg_addr                                   "0xB802D584"
#define  TCON_TCON27_FRAME_HL_CONTROL_reg                                        0xB802D584
#define  TCON_TCON27_FRAME_HL_CONTROL_inst_addr                                  "0x00A9"
#define  set_TCON_TCON27_FRAME_HL_CONTROL_reg(data)                              (*((volatile unsigned int*)TCON_TCON27_FRAME_HL_CONTROL_reg)=data)
#define  get_TCON_TCON27_FRAME_HL_CONTROL_reg                                    (*((volatile unsigned int*)TCON_TCON27_FRAME_HL_CONTROL_reg))
#define  TCON_TCON27_FRAME_HL_CONTROL_tcon27_frame_offset_shift                  (16)
#define  TCON_TCON27_FRAME_HL_CONTROL_tcon27_hl_shift                            (0)
#define  TCON_TCON27_FRAME_HL_CONTROL_tcon27_frame_offset_mask                   (0x0FFF0000)
#define  TCON_TCON27_FRAME_HL_CONTROL_tcon27_hl_mask                             (0x0000FFFF)
#define  TCON_TCON27_FRAME_HL_CONTROL_tcon27_frame_offset(data)                  (0x0FFF0000&((data)<<16))
#define  TCON_TCON27_FRAME_HL_CONTROL_tcon27_hl(data)                            (0x0000FFFF&(data))
#define  TCON_TCON27_FRAME_HL_CONTROL_get_tcon27_frame_offset(data)              ((0x0FFF0000&(data))>>16)
#define  TCON_TCON27_FRAME_HL_CONTROL_get_tcon27_hl(data)                        (0x0000FFFF&(data))

#define  TCON_TCON_PWM0_CONTROL0                                                0x1802D588
#define  TCON_TCON_PWM0_CONTROL0_reg_addr                                        "0xB802D588"
#define  TCON_TCON_PWM0_CONTROL0_reg                                             0xB802D588
#define  TCON_TCON_PWM0_CONTROL0_inst_addr                                       "0x00AA"
#define  set_TCON_TCON_PWM0_CONTROL0_reg(data)                                   (*((volatile unsigned int*)TCON_TCON_PWM0_CONTROL0_reg)=data)
#define  get_TCON_TCON_PWM0_CONTROL0_reg                                         (*((volatile unsigned int*)TCON_TCON_PWM0_CONTROL0_reg))
#define  TCON_TCON_PWM0_CONTROL0_pwm0_rp_shift                                   (0)
#define  TCON_TCON_PWM0_CONTROL0_pwm0_rp_mask                                    (0x03FFFFFF)
#define  TCON_TCON_PWM0_CONTROL0_pwm0_rp(data)                                   (0x03FFFFFF&(data))
#define  TCON_TCON_PWM0_CONTROL0_get_pwm0_rp(data)                               (0x03FFFFFF&(data))

#define  TCON_TCON_PWM0_CONTROL1                                                0x1802D58C
#define  TCON_TCON_PWM0_CONTROL1_reg_addr                                        "0xB802D58C"
#define  TCON_TCON_PWM0_CONTROL1_reg                                             0xB802D58C
#define  TCON_TCON_PWM0_CONTROL1_inst_addr                                       "0x00AB"
#define  set_TCON_TCON_PWM0_CONTROL1_reg(data)                                   (*((volatile unsigned int*)TCON_TCON_PWM0_CONTROL1_reg)=data)
#define  get_TCON_TCON_PWM0_CONTROL1_reg                                         (*((volatile unsigned int*)TCON_TCON_PWM0_CONTROL1_reg))
#define  TCON_TCON_PWM0_CONTROL1_pwm0_hp_shift                                   (0)
#define  TCON_TCON_PWM0_CONTROL1_pwm0_hp_mask                                    (0x03FFFFFF)
#define  TCON_TCON_PWM0_CONTROL1_pwm0_hp(data)                                   (0x03FFFFFF&(data))
#define  TCON_TCON_PWM0_CONTROL1_get_pwm0_hp(data)                               (0x03FFFFFF&(data))

#define  TCON_TCON_PWM0_CONTROL2                                                0x1802D590
#define  TCON_TCON_PWM0_CONTROL2_reg_addr                                        "0xB802D590"
#define  TCON_TCON_PWM0_CONTROL2_reg                                             0xB802D590
#define  TCON_TCON_PWM0_CONTROL2_inst_addr                                       "0x00AC"
#define  set_TCON_TCON_PWM0_CONTROL2_reg(data)                                   (*((volatile unsigned int*)TCON_TCON_PWM0_CONTROL2_reg)=data)
#define  get_TCON_TCON_PWM0_CONTROL2_reg                                         (*((volatile unsigned int*)TCON_TCON_PWM0_CONTROL2_reg))
#define  TCON_TCON_PWM0_CONTROL2_pwm0_en_shift                                   (31)
#define  TCON_TCON_PWM0_CONTROL2_pwm0_num_shift                                  (0)
#define  TCON_TCON_PWM0_CONTROL2_pwm0_en_mask                                    (0x80000000)
#define  TCON_TCON_PWM0_CONTROL2_pwm0_num_mask                                   (0x0000000F)
#define  TCON_TCON_PWM0_CONTROL2_pwm0_en(data)                                   (0x80000000&((data)<<31))
#define  TCON_TCON_PWM0_CONTROL2_pwm0_num(data)                                  (0x0000000F&(data))
#define  TCON_TCON_PWM0_CONTROL2_get_pwm0_en(data)                               ((0x80000000&(data))>>31)
#define  TCON_TCON_PWM0_CONTROL2_get_pwm0_num(data)                              (0x0000000F&(data))

#define  TCON_TCON_PWM1_CONTROL0                                                0x1802D594
#define  TCON_TCON_PWM1_CONTROL0_reg_addr                                        "0xB802D594"
#define  TCON_TCON_PWM1_CONTROL0_reg                                             0xB802D594
#define  TCON_TCON_PWM1_CONTROL0_inst_addr                                       "0x00AD"
#define  set_TCON_TCON_PWM1_CONTROL0_reg(data)                                   (*((volatile unsigned int*)TCON_TCON_PWM1_CONTROL0_reg)=data)
#define  get_TCON_TCON_PWM1_CONTROL0_reg                                         (*((volatile unsigned int*)TCON_TCON_PWM1_CONTROL0_reg))
#define  TCON_TCON_PWM1_CONTROL0_pwm1_rp_shift                                   (0)
#define  TCON_TCON_PWM1_CONTROL0_pwm1_rp_mask                                    (0x03FFFFFF)
#define  TCON_TCON_PWM1_CONTROL0_pwm1_rp(data)                                   (0x03FFFFFF&(data))
#define  TCON_TCON_PWM1_CONTROL0_get_pwm1_rp(data)                               (0x03FFFFFF&(data))

#define  TCON_TCON_PWM1_CONTROL1                                                0x1802D598
#define  TCON_TCON_PWM1_CONTROL1_reg_addr                                        "0xB802D598"
#define  TCON_TCON_PWM1_CONTROL1_reg                                             0xB802D598
#define  TCON_TCON_PWM1_CONTROL1_inst_addr                                       "0x00AE"
#define  set_TCON_TCON_PWM1_CONTROL1_reg(data)                                   (*((volatile unsigned int*)TCON_TCON_PWM1_CONTROL1_reg)=data)
#define  get_TCON_TCON_PWM1_CONTROL1_reg                                         (*((volatile unsigned int*)TCON_TCON_PWM1_CONTROL1_reg))
#define  TCON_TCON_PWM1_CONTROL1_pwm1_hp_shift                                   (0)
#define  TCON_TCON_PWM1_CONTROL1_pwm1_hp_mask                                    (0x03FFFFFF)
#define  TCON_TCON_PWM1_CONTROL1_pwm1_hp(data)                                   (0x03FFFFFF&(data))
#define  TCON_TCON_PWM1_CONTROL1_get_pwm1_hp(data)                               (0x03FFFFFF&(data))

#define  TCON_TCON_PWM1_CONTROL2                                                0x1802D59C
#define  TCON_TCON_PWM1_CONTROL2_reg_addr                                        "0xB802D59C"
#define  TCON_TCON_PWM1_CONTROL2_reg                                             0xB802D59C
#define  TCON_TCON_PWM1_CONTROL2_inst_addr                                       "0x00AF"
#define  set_TCON_TCON_PWM1_CONTROL2_reg(data)                                   (*((volatile unsigned int*)TCON_TCON_PWM1_CONTROL2_reg)=data)
#define  get_TCON_TCON_PWM1_CONTROL2_reg                                         (*((volatile unsigned int*)TCON_TCON_PWM1_CONTROL2_reg))
#define  TCON_TCON_PWM1_CONTROL2_pwm1_en_shift                                   (31)
#define  TCON_TCON_PWM1_CONTROL2_pwm1_num_shift                                  (0)
#define  TCON_TCON_PWM1_CONTROL2_pwm1_en_mask                                    (0x80000000)
#define  TCON_TCON_PWM1_CONTROL2_pwm1_num_mask                                   (0x0000000F)
#define  TCON_TCON_PWM1_CONTROL2_pwm1_en(data)                                   (0x80000000&((data)<<31))
#define  TCON_TCON_PWM1_CONTROL2_pwm1_num(data)                                  (0x0000000F&(data))
#define  TCON_TCON_PWM1_CONTROL2_get_pwm1_en(data)                               ((0x80000000&(data))>>31)
#define  TCON_TCON_PWM1_CONTROL2_get_pwm1_num(data)                              (0x0000000F&(data))

#define  TCON_TCON_PWM_DB_SEL                                                   0x1802D5A0
#define  TCON_TCON_PWM_DB_SEL_reg_addr                                           "0xB802D5A0"
#define  TCON_TCON_PWM_DB_SEL_reg                                                0xB802D5A0
#define  TCON_TCON_PWM_DB_SEL_inst_addr                                          "0x00B0"
#define  set_TCON_TCON_PWM_DB_SEL_reg(data)                                      (*((volatile unsigned int*)TCON_TCON_PWM_DB_SEL_reg)=data)
#define  get_TCON_TCON_PWM_DB_SEL_reg                                            (*((volatile unsigned int*)TCON_TCON_PWM_DB_SEL_reg))
#define  TCON_TCON_PWM_DB_SEL_dummy_31_28_shift                                  (28)
#define  TCON_TCON_PWM_DB_SEL_pwm_db_sel_shift                                   (4)
#define  TCON_TCON_PWM_DB_SEL_pwm_db_apply_shift                                 (0)
#define  TCON_TCON_PWM_DB_SEL_dummy_31_28_mask                                   (0xF0000000)
#define  TCON_TCON_PWM_DB_SEL_pwm_db_sel_mask                                    (0x00000010)
#define  TCON_TCON_PWM_DB_SEL_pwm_db_apply_mask                                  (0x00000001)
#define  TCON_TCON_PWM_DB_SEL_dummy_31_28(data)                                  (0xF0000000&((data)<<28))
#define  TCON_TCON_PWM_DB_SEL_pwm_db_sel(data)                                   (0x00000010&((data)<<4))
#define  TCON_TCON_PWM_DB_SEL_pwm_db_apply(data)                                 (0x00000001&(data))
#define  TCON_TCON_PWM_DB_SEL_get_dummy_31_28(data)                              ((0xF0000000&(data))>>28)
#define  TCON_TCON_PWM_DB_SEL_get_pwm_db_sel(data)                               ((0x00000010&(data))>>4)
#define  TCON_TCON_PWM_DB_SEL_get_pwm_db_apply(data)                             (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======TCON register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  tcon_output:30;
    };
}tcon_tcon_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}tcon_tcon_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  tcon_across_frame_en:1;
        RBus_UInt32  tcon_en:1;
    };
}tcon_tcon_ip_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_0:1;
        RBus_UInt32  tcon0_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon0_hend:15;
    };
}tcon_tcon0_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon0_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon0_vend:13;
    };
}tcon_tcon0_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon0_l_flag_sel:5;
        RBus_UInt32  tcon0_off_opt:1;
        RBus_UInt32  tcon0_across_ctrl_reset:1;
        RBus_UInt32  tcon0_mode:3;
        RBus_UInt32  tcon0_en:1;
        RBus_UInt32  tcon0_inv:1;
        RBus_UInt32  tcon0_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon0_frame_tog_en:1;
        RBus_UInt32  tcon0_comb:3;
    };
}tcon_tcon0_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon0_across_frame_int:1;
        RBus_UInt32  tcon0_across_ctrl3_rp:12;
        RBus_UInt32  tcon0_hl_num:4;
        RBus_UInt32  tcon0_across_ctrl3_hp:12;
    };
}tcon_tcon0_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon0_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon0_frame_hp:12;
    };
}tcon_tcon0_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon0_frame_offset:12;
        RBus_UInt32  tcon0_hl:16;
    };
}tcon_tcon0_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_1:1;
        RBus_UInt32  tcon1_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon1_hend:15;
    };
}tcon_tcon1_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon1_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon1_vend:13;
    };
}tcon_tcon1_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon1_l_flag_sel:5;
        RBus_UInt32  tcon1_off_opt:1;
        RBus_UInt32  tcon1_across_ctrl_reset:1;
        RBus_UInt32  tcon1_mode:3;
        RBus_UInt32  tcon1_en:1;
        RBus_UInt32  tcon1_inv:1;
        RBus_UInt32  tcon1_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon1_frame_tog_en:1;
        RBus_UInt32  tcon1_comb:3;
    };
}tcon_tcon1_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon1_across_frame_int:1;
        RBus_UInt32  tcon1_across_ctrl3_rp:12;
        RBus_UInt32  tcon1_hl_num:4;
        RBus_UInt32  tcon1_across_ctrl3_hp:12;
    };
}tcon_tcon1_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon1_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon1_frame_hp:12;
    };
}tcon_tcon1_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon1_frame_offset:12;
        RBus_UInt32  tcon1_hl:16;
    };
}tcon_tcon1_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_2:1;
        RBus_UInt32  tcon2_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon2_hend:15;
    };
}tcon_tcon2_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon2_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon2_vend:13;
    };
}tcon_tcon2_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon2_l_flag_sel:5;
        RBus_UInt32  tcon2_off_opt:1;
        RBus_UInt32  tcon2_across_ctrl_reset:1;
        RBus_UInt32  tcon2_mode:3;
        RBus_UInt32  tcon2_en:1;
        RBus_UInt32  tcon2_inv:1;
        RBus_UInt32  tcon2_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon2_frame_tog_en:1;
        RBus_UInt32  tcon2_comb:3;
    };
}tcon_tcon2_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon2_across_frame_int:1;
        RBus_UInt32  tcon2_across_ctrl3_rp:12;
        RBus_UInt32  tcon2_hl_num:4;
        RBus_UInt32  tcon2_across_ctrl3_hp:12;
    };
}tcon_tcon2_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon2_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon2_frame_hp:12;
    };
}tcon_tcon2_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon2_frame_offset:12;
        RBus_UInt32  tcon2_hl:16;
    };
}tcon_tcon2_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_3:1;
        RBus_UInt32  tcon3_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon3_hend:15;
    };
}tcon_tcon3_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon3_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon3_vend:13;
    };
}tcon_tcon3_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon3_l_flag_sel:5;
        RBus_UInt32  tcon3_off_opt:1;
        RBus_UInt32  tcon3_across_ctrl_reset:1;
        RBus_UInt32  tcon3_mode:3;
        RBus_UInt32  tcon3_en:1;
        RBus_UInt32  tcon3_inv:1;
        RBus_UInt32  tcon3_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon3_frame_tog_en:1;
        RBus_UInt32  tcon3_comb:3;
    };
}tcon_tcon3_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon3_across_frame_int:1;
        RBus_UInt32  tcon3_across_ctrl3_rp:12;
        RBus_UInt32  tcon3_hl_num:4;
        RBus_UInt32  tcon3_across_ctrl3_hp:12;
    };
}tcon_tcon3_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon3_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon3_frame_hp:12;
    };
}tcon_tcon3_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon3_frame_offset:12;
        RBus_UInt32  tcon3_hl:16;
    };
}tcon_tcon3_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_4:1;
        RBus_UInt32  tcon4_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon4_hend:15;
    };
}tcon_tcon4_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon4_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon4_vend:13;
    };
}tcon_tcon4_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon4_l_flag_sel:5;
        RBus_UInt32  tcon4_off_opt:1;
        RBus_UInt32  tcon4_across_ctrl_reset:1;
        RBus_UInt32  tcon4_mode:3;
        RBus_UInt32  tcon4_en:1;
        RBus_UInt32  tcon4_inv:1;
        RBus_UInt32  tcon4_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon4_frame_tog_en:1;
        RBus_UInt32  tcon4_comb:3;
    };
}tcon_tcon4_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon4_across_frame_int:1;
        RBus_UInt32  tcon4_across_ctrl3_rp:12;
        RBus_UInt32  tcon4_hl_num:4;
        RBus_UInt32  tcon4_across_ctrl3_hp:12;
    };
}tcon_tcon4_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon4_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon4_frame_hp:12;
    };
}tcon_tcon4_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon4_frame_offset:12;
        RBus_UInt32  tcon4_hl:16;
    };
}tcon_tcon4_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_5:1;
        RBus_UInt32  tcon5_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon5_hend:15;
    };
}tcon_tcon5_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon5_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon5_vend:13;
    };
}tcon_tcon5_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon5_l_flag_sel:5;
        RBus_UInt32  tcon5_off_opt:1;
        RBus_UInt32  tcon5_across_ctrl_reset:1;
        RBus_UInt32  tcon5_mode:3;
        RBus_UInt32  tcon5_en:1;
        RBus_UInt32  tcon5_inv:1;
        RBus_UInt32  tcon5_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon5_frame_tog_en:1;
        RBus_UInt32  tcon5_comb:3;
    };
}tcon_tcon5_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon5_across_frame_int:1;
        RBus_UInt32  tcon5_across_ctrl3_rp:12;
        RBus_UInt32  tcon5_hl_num:4;
        RBus_UInt32  tcon5_across_ctrl3_hp:12;
    };
}tcon_tcon5_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon5_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon5_frame_hp:12;
    };
}tcon_tcon5_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon5_frame_offset:12;
        RBus_UInt32  tcon5_hl:16;
    };
}tcon_tcon5_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_6:1;
        RBus_UInt32  tcon6_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon6_hend:15;
    };
}tcon_tcon6_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon6_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon6_vend:13;
    };
}tcon_tcon6_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon6_l_flag_sel:5;
        RBus_UInt32  tcon6_off_opt:1;
        RBus_UInt32  tcon6_across_ctrl_reset:1;
        RBus_UInt32  tcon6_mode:3;
        RBus_UInt32  tcon6_en:1;
        RBus_UInt32  tcon6_inv:1;
        RBus_UInt32  tcon6_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon6_frame_tog_en:1;
        RBus_UInt32  tcon6_comb:3;
    };
}tcon_tcon6_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon6_across_frame_int:1;
        RBus_UInt32  tcon6_across_ctrl3_rp:12;
        RBus_UInt32  tcon6_hl_num:4;
        RBus_UInt32  tcon6_across_ctrl3_hp:12;
    };
}tcon_tcon6_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon6_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon6_frame_hp:12;
    };
}tcon_tcon6_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon6_frame_offset:12;
        RBus_UInt32  tcon6_hl:16;
    };
}tcon_tcon6_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_7:1;
        RBus_UInt32  tcon7_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon7_hend:15;
    };
}tcon_tcon7_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon7_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon7_vend:13;
    };
}tcon_tcon7_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon7_l_flag_sel:5;
        RBus_UInt32  tcon7_off_opt:1;
        RBus_UInt32  tcon7_across_ctrl_reset:1;
        RBus_UInt32  tcon7_mode:3;
        RBus_UInt32  tcon7_en:1;
        RBus_UInt32  tcon7_inv:1;
        RBus_UInt32  tcon7_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon7_frame_tog_en:1;
        RBus_UInt32  tcon7_comb:3;
    };
}tcon_tcon7_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon7_across_frame_int:1;
        RBus_UInt32  tcon7_across_ctrl3_rp:12;
        RBus_UInt32  tcon7_hl_num:4;
        RBus_UInt32  tcon7_across_ctrl3_hp:12;
    };
}tcon_tcon7_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon7_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon7_frame_hp:12;
    };
}tcon_tcon7_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon7_frame_offset:12;
        RBus_UInt32  tcon7_hl:16;
    };
}tcon_tcon7_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_8:1;
        RBus_UInt32  tcon8_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon8_hend:15;
    };
}tcon_tcon8_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon8_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon8_vend:13;
    };
}tcon_tcon8_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon8_l_flag_sel:5;
        RBus_UInt32  tcon8_off_opt:1;
        RBus_UInt32  tcon8_across_ctrl_reset:1;
        RBus_UInt32  tcon8_mode:3;
        RBus_UInt32  tcon8_en:1;
        RBus_UInt32  tcon8_inv:1;
        RBus_UInt32  tcon8_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon8_frame_tog_en:1;
        RBus_UInt32  tcon8_comb:3;
    };
}tcon_tcon8_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon8_across_frame_int:1;
        RBus_UInt32  tcon8_across_ctrl3_rp:12;
        RBus_UInt32  tcon8_hl_num:4;
        RBus_UInt32  tcon8_across_ctrl3_hp:12;
    };
}tcon_tcon8_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon8_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon8_frame_hp:12;
    };
}tcon_tcon8_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon8_frame_offset:12;
        RBus_UInt32  tcon8_hl:16;
    };
}tcon_tcon8_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_9:1;
        RBus_UInt32  tcon9_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon9_hend:15;
    };
}tcon_tcon9_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon9_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon9_vend:13;
    };
}tcon_tcon9_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon9_l_flag_sel:5;
        RBus_UInt32  tcon9_off_opt:1;
        RBus_UInt32  tcon9_across_ctrl_reset:1;
        RBus_UInt32  tcon9_mode:3;
        RBus_UInt32  tcon9_en:1;
        RBus_UInt32  tcon9_inv:1;
        RBus_UInt32  tcon9_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon9_frame_tog_en:1;
        RBus_UInt32  tcon9_comb:3;
    };
}tcon_tcon9_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon9_across_frame_int:1;
        RBus_UInt32  tcon9_across_ctrl3_rp:12;
        RBus_UInt32  tcon9_hl_num:4;
        RBus_UInt32  tcon9_across_ctrl3_hp:12;
    };
}tcon_tcon9_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon9_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon9_frame_hp:12;
    };
}tcon_tcon9_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon9_frame_offset:12;
        RBus_UInt32  tcon9_hl:16;
    };
}tcon_tcon9_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_10:1;
        RBus_UInt32  tcon10_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon10_hend:15;
    };
}tcon_tcon10_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon10_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon10_vend:13;
    };
}tcon_tcon10_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon10_l_flag_sel:5;
        RBus_UInt32  tcon10_off_opt:1;
        RBus_UInt32  tcon10_across_ctrl_reset:1;
        RBus_UInt32  tcon10_mode:3;
        RBus_UInt32  tcon10_en:1;
        RBus_UInt32  tcon10_inv:1;
        RBus_UInt32  tcon10_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon10_frame_tog_en:1;
        RBus_UInt32  tcon10_comb:3;
    };
}tcon_tcon10_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon10_across_frame_int:1;
        RBus_UInt32  tcon10_across_ctrl3_rp:12;
        RBus_UInt32  tcon10_hl_num:4;
        RBus_UInt32  tcon10_across_ctrl3_hp:12;
    };
}tcon_tcon10_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon10_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon10_frame_hp:12;
    };
}tcon_tcon10_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon10_frame_offset:12;
        RBus_UInt32  tcon10_hl:16;
    };
}tcon_tcon10_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_11:1;
        RBus_UInt32  tcon11_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon11_hend:15;
    };
}tcon_tcon11_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon11_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon11_vend:13;
    };
}tcon_tcon11_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon11_l_flag_sel:5;
        RBus_UInt32  tcon11_off_opt:1;
        RBus_UInt32  tcon11_across_ctrl_reset:1;
        RBus_UInt32  tcon11_mode:3;
        RBus_UInt32  tcon11_en:1;
        RBus_UInt32  tcon11_inv:1;
        RBus_UInt32  tcon11_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon11_frame_tog_en:1;
        RBus_UInt32  tcon11_comb:3;
    };
}tcon_tcon11_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon11_across_frame_int:1;
        RBus_UInt32  tcon11_across_ctrl3_rp:12;
        RBus_UInt32  tcon11_hl_num:4;
        RBus_UInt32  tcon11_across_ctrl3_hp:12;
    };
}tcon_tcon11_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon11_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon11_frame_hp:12;
    };
}tcon_tcon11_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon11_frame_offset:12;
        RBus_UInt32  tcon11_hl:16;
    };
}tcon_tcon11_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_12:1;
        RBus_UInt32  tcon12_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon12_hend:15;
    };
}tcon_tcon12_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon12_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon12_vend:13;
    };
}tcon_tcon12_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon12_l_flag_sel:5;
        RBus_UInt32  tcon12_off_opt:1;
        RBus_UInt32  tcon12_across_ctrl_reset:1;
        RBus_UInt32  tcon12_mode:3;
        RBus_UInt32  tcon12_en:1;
        RBus_UInt32  tcon12_inv:1;
        RBus_UInt32  tcon12_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon12_frame_tog_en:1;
        RBus_UInt32  tcon12_comb:3;
    };
}tcon_tcon12_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon12_across_frame_int:1;
        RBus_UInt32  tcon12_across_ctrl3_rp:12;
        RBus_UInt32  tcon12_hl_num:4;
        RBus_UInt32  tcon12_across_ctrl3_hp:12;
    };
}tcon_tcon12_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon12_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon12_frame_hp:12;
    };
}tcon_tcon12_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon12_frame_offset:12;
        RBus_UInt32  tcon12_hl:16;
    };
}tcon_tcon12_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_13:1;
        RBus_UInt32  tcon13_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon13_hend:15;
    };
}tcon_tcon13_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon13_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon13_vend:13;
    };
}tcon_tcon13_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon13_l_flag_sel:5;
        RBus_UInt32  tcon13_off_opt:1;
        RBus_UInt32  tcon13_across_ctrl_reset:1;
        RBus_UInt32  tcon13_mode:3;
        RBus_UInt32  tcon13_en:1;
        RBus_UInt32  tcon13_inv:1;
        RBus_UInt32  tcon13_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon13_frame_tog_en:1;
        RBus_UInt32  tcon13_comb:3;
    };
}tcon_tcon13_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon13_across_frame_int:1;
        RBus_UInt32  tcon13_across_ctrl3_rp:12;
        RBus_UInt32  tcon13_hl_num:4;
        RBus_UInt32  tcon13_across_ctrl3_hp:12;
    };
}tcon_tcon13_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon13_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon13_frame_hp:12;
    };
}tcon_tcon13_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon13_frame_offset:12;
        RBus_UInt32  tcon13_hl:16;
    };
}tcon_tcon13_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_14:1;
        RBus_UInt32  tcon14_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon14_hend:15;
    };
}tcon_tcon14_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon14_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon14_vend:13;
    };
}tcon_tcon14_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon14_l_flag_sel:5;
        RBus_UInt32  tcon14_off_opt:1;
        RBus_UInt32  tcon14_across_ctrl_reset:1;
        RBus_UInt32  tcon14_mode:3;
        RBus_UInt32  tcon14_en:1;
        RBus_UInt32  tcon14_inv:1;
        RBus_UInt32  tcon14_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon14_frame_tog_en:1;
        RBus_UInt32  tcon14_comb:3;
    };
}tcon_tcon14_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon14_across_frame_int:1;
        RBus_UInt32  tcon14_across_ctrl3_rp:12;
        RBus_UInt32  tcon14_hl_num:4;
        RBus_UInt32  tcon14_across_ctrl3_hp:12;
    };
}tcon_tcon14_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon14_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon14_frame_hp:12;
    };
}tcon_tcon14_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon14_frame_offset:12;
        RBus_UInt32  tcon14_hl:16;
    };
}tcon_tcon14_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_15:1;
        RBus_UInt32  tcon15_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon15_hend:15;
    };
}tcon_tcon15_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon15_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon15_vend:13;
    };
}tcon_tcon15_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon15_l_flag_sel:5;
        RBus_UInt32  tcon15_off_opt:1;
        RBus_UInt32  tcon15_across_ctrl_reset:1;
        RBus_UInt32  tcon15_mode:3;
        RBus_UInt32  tcon15_en:1;
        RBus_UInt32  tcon15_inv:1;
        RBus_UInt32  tcon15_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon15_frame_tog_en:1;
        RBus_UInt32  tcon15_comb:3;
    };
}tcon_tcon15_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon15_across_frame_int:1;
        RBus_UInt32  tcon15_across_ctrl3_rp:12;
        RBus_UInt32  tcon15_hl_num:4;
        RBus_UInt32  tcon15_across_ctrl3_hp:12;
    };
}tcon_tcon15_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon15_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon15_frame_hp:12;
    };
}tcon_tcon15_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon15_frame_offset:12;
        RBus_UInt32  tcon15_hl:16;
    };
}tcon_tcon15_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_16:1;
        RBus_UInt32  tcon16_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon16_hend:15;
    };
}tcon_tcon16_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon16_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon16_vend:13;
    };
}tcon_tcon16_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon16_l_flag_sel:5;
        RBus_UInt32  tcon16_off_opt:1;
        RBus_UInt32  tcon16_across_ctrl_reset:1;
        RBus_UInt32  tcon16_mode:3;
        RBus_UInt32  tcon16_en:1;
        RBus_UInt32  tcon16_inv:1;
        RBus_UInt32  tcon16_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon16_frame_tog_en:1;
        RBus_UInt32  tcon16_comb:3;
    };
}tcon_tcon16_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon16_across_frame_int:1;
        RBus_UInt32  tcon16_across_ctrl3_rp:12;
        RBus_UInt32  tcon16_hl_num:4;
        RBus_UInt32  tcon16_across_ctrl3_hp:12;
    };
}tcon_tcon16_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon16_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon16_frame_hp:12;
    };
}tcon_tcon16_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon16_frame_offset:12;
        RBus_UInt32  tcon16_hl:16;
    };
}tcon_tcon16_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_17:1;
        RBus_UInt32  tcon17_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon17_hend:15;
    };
}tcon_tcon17_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon17_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon17_vend:13;
    };
}tcon_tcon17_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon17_l_flag_sel:5;
        RBus_UInt32  tcon17_off_opt:1;
        RBus_UInt32  tcon17_across_ctrl_reset:1;
        RBus_UInt32  tcon17_mode:3;
        RBus_UInt32  tcon17_en:1;
        RBus_UInt32  tcon17_inv:1;
        RBus_UInt32  tcon17_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon17_frame_tog_en:1;
        RBus_UInt32  tcon17_comb:3;
    };
}tcon_tcon17_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon17_across_frame_int:1;
        RBus_UInt32  tcon17_across_ctrl3_rp:12;
        RBus_UInt32  tcon17_hl_num:4;
        RBus_UInt32  tcon17_across_ctrl3_hp:12;
    };
}tcon_tcon17_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon17_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon17_frame_hp:12;
    };
}tcon_tcon17_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon17_frame_offset:12;
        RBus_UInt32  tcon17_hl:16;
    };
}tcon_tcon17_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_18:1;
        RBus_UInt32  tcon18_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon18_hend:15;
    };
}tcon_tcon18_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon18_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon18_vend:13;
    };
}tcon_tcon18_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon18_l_flag_sel:5;
        RBus_UInt32  tcon18_off_opt:1;
        RBus_UInt32  tcon18_across_ctrl_reset:1;
        RBus_UInt32  tcon18_mode:3;
        RBus_UInt32  tcon18_en:1;
        RBus_UInt32  tcon18_inv:1;
        RBus_UInt32  tcon18_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon18_frame_tog_en:1;
        RBus_UInt32  tcon18_comb:3;
    };
}tcon_tcon18_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon18_across_frame_int:1;
        RBus_UInt32  tcon18_across_ctrl3_rp:12;
        RBus_UInt32  tcon18_hl_num:4;
        RBus_UInt32  tcon18_across_ctrl3_hp:12;
    };
}tcon_tcon18_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon18_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon18_frame_hp:12;
    };
}tcon_tcon18_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon18_frame_offset:12;
        RBus_UInt32  tcon18_hl:16;
    };
}tcon_tcon18_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_19:1;
        RBus_UInt32  tcon19_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon19_hend:15;
    };
}tcon_tcon19_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon19_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon19_vend:13;
    };
}tcon_tcon19_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon19_l_flag_sel:5;
        RBus_UInt32  tcon19_off_opt:1;
        RBus_UInt32  tcon19_across_ctrl_reset:1;
        RBus_UInt32  tcon19_mode:3;
        RBus_UInt32  tcon19_en:1;
        RBus_UInt32  tcon19_inv:1;
        RBus_UInt32  tcon19_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon19_frame_tog_en:1;
        RBus_UInt32  tcon19_comb:3;
    };
}tcon_tcon19_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon19_across_frame_int:1;
        RBus_UInt32  tcon19_across_ctrl3_rp:12;
        RBus_UInt32  tcon19_hl_num:4;
        RBus_UInt32  tcon19_across_ctrl3_hp:12;
    };
}tcon_tcon19_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon19_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon19_frame_hp:12;
    };
}tcon_tcon19_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon19_frame_offset:12;
        RBus_UInt32  tcon19_hl:16;
    };
}tcon_tcon19_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_20:1;
        RBus_UInt32  tcon20_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon20_hend:15;
    };
}tcon_tcon20_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon20_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon20_vend:13;
    };
}tcon_tcon20_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon20_l_flag_sel:5;
        RBus_UInt32  tcon20_off_opt:1;
        RBus_UInt32  tcon20_across_ctrl_reset:1;
        RBus_UInt32  tcon20_mode:3;
        RBus_UInt32  tcon20_en:1;
        RBus_UInt32  tcon20_inv:1;
        RBus_UInt32  tcon20_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon20_frame_tog_en:1;
        RBus_UInt32  tcon20_comb:3;
    };
}tcon_tcon20_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon20_across_frame_int:1;
        RBus_UInt32  tcon20_across_ctrl3_rp:12;
        RBus_UInt32  tcon20_hl_num:4;
        RBus_UInt32  tcon20_across_ctrl3_hp:12;
    };
}tcon_tcon20_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon20_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon20_frame_hp:12;
    };
}tcon_tcon20_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon20_frame_offset:12;
        RBus_UInt32  tcon20_hl:16;
    };
}tcon_tcon20_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_21:1;
        RBus_UInt32  tcon21_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon21_hend:15;
    };
}tcon_tcon21_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon21_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon21_vend:13;
    };
}tcon_tcon21_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon21_l_flag_sel:5;
        RBus_UInt32  tcon21_off_opt:1;
        RBus_UInt32  tcon21_across_ctrl_reset:1;
        RBus_UInt32  tcon21_mode:3;
        RBus_UInt32  tcon21_en:1;
        RBus_UInt32  tcon21_inv:1;
        RBus_UInt32  tcon21_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon21_frame_tog_en:1;
        RBus_UInt32  tcon21_comb:3;
    };
}tcon_tcon21_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon21_across_frame_int:1;
        RBus_UInt32  tcon21_across_ctrl3_rp:12;
        RBus_UInt32  tcon21_hl_num:4;
        RBus_UInt32  tcon21_across_ctrl3_hp:12;
    };
}tcon_tcon21_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon21_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon21_frame_hp:12;
    };
}tcon_tcon21_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon21_frame_offset:12;
        RBus_UInt32  tcon21_hl:16;
    };
}tcon_tcon21_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_22:1;
        RBus_UInt32  tcon22_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon22_hend:15;
    };
}tcon_tcon22_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon22_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon22_vend:13;
    };
}tcon_tcon22_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon22_l_flag_sel:5;
        RBus_UInt32  tcon22_off_opt:1;
        RBus_UInt32  tcon22_across_ctrl_reset:1;
        RBus_UInt32  tcon22_mode:3;
        RBus_UInt32  tcon22_en:1;
        RBus_UInt32  tcon22_inv:1;
        RBus_UInt32  tcon22_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon22_frame_tog_en:1;
        RBus_UInt32  tcon22_comb:3;
    };
}tcon_tcon22_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon22_across_frame_int:1;
        RBus_UInt32  tcon22_across_ctrl3_rp:12;
        RBus_UInt32  tcon22_hl_num:4;
        RBus_UInt32  tcon22_across_ctrl3_hp:12;
    };
}tcon_tcon22_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon22_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon22_frame_hp:12;
    };
}tcon_tcon22_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon22_frame_offset:12;
        RBus_UInt32  tcon22_hl:16;
    };
}tcon_tcon22_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_23:1;
        RBus_UInt32  tcon23_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon23_hend:15;
    };
}tcon_tcon23_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon23_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon23_vend:13;
    };
}tcon_tcon23_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon23_l_flag_sel:5;
        RBus_UInt32  tcon23_off_opt:1;
        RBus_UInt32  tcon23_across_ctrl_reset:1;
        RBus_UInt32  tcon23_mode:3;
        RBus_UInt32  tcon23_en:1;
        RBus_UInt32  tcon23_inv:1;
        RBus_UInt32  tcon23_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon23_frame_tog_en:1;
        RBus_UInt32  tcon23_comb:3;
    };
}tcon_tcon23_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon23_across_frame_int:1;
        RBus_UInt32  tcon23_across_ctrl3_rp:12;
        RBus_UInt32  tcon23_hl_num:4;
        RBus_UInt32  tcon23_across_ctrl3_hp:12;
    };
}tcon_tcon23_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon23_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon23_frame_hp:12;
    };
}tcon_tcon23_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon23_frame_offset:12;
        RBus_UInt32  tcon23_hl:16;
    };
}tcon_tcon23_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_24:1;
        RBus_UInt32  tcon24_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon24_hend:15;
    };
}tcon_tcon24_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon24_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon24_vend:13;
    };
}tcon_tcon24_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon24_l_flag_sel:5;
        RBus_UInt32  tcon24_off_opt:1;
        RBus_UInt32  tcon24_across_ctrl_reset:1;
        RBus_UInt32  tcon24_mode:3;
        RBus_UInt32  tcon24_en:1;
        RBus_UInt32  tcon24_inv:1;
        RBus_UInt32  tcon24_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon24_frame_tog_en:1;
        RBus_UInt32  tcon24_comb:3;
    };
}tcon_tcon24_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon24_across_frame_int:1;
        RBus_UInt32  tcon24_across_ctrl3_rp:12;
        RBus_UInt32  tcon24_hl_num:4;
        RBus_UInt32  tcon24_across_ctrl3_hp:12;
    };
}tcon_tcon24_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon24_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon24_frame_hp:12;
    };
}tcon_tcon24_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon24_frame_offset:12;
        RBus_UInt32  tcon24_hl:16;
    };
}tcon_tcon24_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_25:1;
        RBus_UInt32  tcon25_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon25_hend:15;
    };
}tcon_tcon25_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon25_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon25_vend:13;
    };
}tcon_tcon25_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon25_l_flag_sel:5;
        RBus_UInt32  tcon25_off_opt:1;
        RBus_UInt32  tcon25_across_ctrl_reset:1;
        RBus_UInt32  tcon25_mode:3;
        RBus_UInt32  tcon25_en:1;
        RBus_UInt32  tcon25_inv:1;
        RBus_UInt32  tcon25_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon25_frame_tog_en:1;
        RBus_UInt32  tcon25_comb:3;
    };
}tcon_tcon25_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon25_across_frame_int:1;
        RBus_UInt32  tcon25_across_ctrl3_rp:12;
        RBus_UInt32  tcon25_hl_num:4;
        RBus_UInt32  tcon25_across_ctrl3_hp:12;
    };
}tcon_tcon25_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon25_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon25_frame_hp:12;
    };
}tcon_tcon25_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon25_frame_offset:12;
        RBus_UInt32  tcon25_hl:16;
    };
}tcon_tcon25_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_26:1;
        RBus_UInt32  tcon26_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon26_hend:15;
    };
}tcon_tcon26_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon26_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon26_vend:13;
    };
}tcon_tcon26_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon26_l_flag_sel:5;
        RBus_UInt32  tcon26_off_opt:1;
        RBus_UInt32  tcon26_across_ctrl_reset:1;
        RBus_UInt32  tcon26_mode:3;
        RBus_UInt32  tcon26_en:1;
        RBus_UInt32  tcon26_inv:1;
        RBus_UInt32  tcon26_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon26_frame_tog_en:1;
        RBus_UInt32  tcon26_comb:3;
    };
}tcon_tcon26_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon26_across_frame_int:1;
        RBus_UInt32  tcon26_across_ctrl3_rp:12;
        RBus_UInt32  tcon26_hl_num:4;
        RBus_UInt32  tcon26_across_ctrl3_hp:12;
    };
}tcon_tcon26_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon26_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon26_frame_hp:12;
    };
}tcon_tcon26_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon26_frame_offset:12;
        RBus_UInt32  tcon26_hl:16;
    };
}tcon_tcon26_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_27:1;
        RBus_UInt32  tcon27_hstart:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon27_hend:15;
    };
}tcon_tcon27_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon27_vstart:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  tcon27_vend:13;
    };
}tcon_tcon27_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  tcon27_l_flag_sel:5;
        RBus_UInt32  tcon27_off_opt:1;
        RBus_UInt32  tcon27_across_ctrl_reset:1;
        RBus_UInt32  tcon27_mode:3;
        RBus_UInt32  tcon27_en:1;
        RBus_UInt32  tcon27_inv:1;
        RBus_UInt32  tcon27_comb_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  tcon27_frame_tog_en:1;
        RBus_UInt32  tcon27_comb:3;
    };
}tcon_tcon27_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon27_across_frame_int:1;
        RBus_UInt32  tcon27_across_ctrl3_rp:12;
        RBus_UInt32  tcon27_hl_num:4;
        RBus_UInt32  tcon27_across_ctrl3_hp:12;
    };
}tcon_tcon27_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon27_frame_lp:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  tcon27_frame_hp:12;
    };
}tcon_tcon27_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon27_frame_offset:12;
        RBus_UInt32  tcon27_hl:16;
    };
}tcon_tcon27_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pwm0_rp:26;
    };
}tcon_tcon_pwm0_control0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pwm0_hp:26;
    };
}tcon_tcon_pwm0_control1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_en:1;
        RBus_UInt32  res1:27;
        RBus_UInt32  pwm0_num:4;
    };
}tcon_tcon_pwm0_control2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pwm1_rp:26;
    };
}tcon_tcon_pwm1_control0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pwm1_hp:26;
    };
}tcon_tcon_pwm1_control1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_en:1;
        RBus_UInt32  res1:27;
        RBus_UInt32  pwm1_num:4;
    };
}tcon_tcon_pwm1_control2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d5a0_31_28:4;
        RBus_UInt32  res1:23;
        RBus_UInt32  pwm_db_sel:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  pwm_db_apply:1;
    };
}tcon_tcon_pwm_db_sel_RBUS;

#else //apply LITTLE_ENDIAN

//======TCON register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon_output:30;
        RBus_UInt32  res1:2;
    };
}tcon_tcon_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}tcon_tcon_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon_en:1;
        RBus_UInt32  tcon_across_frame_en:1;
        RBus_UInt32  res1:30;
    };
}tcon_tcon_ip_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon0_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon0_hstart:15;
        RBus_UInt32  dummy_0:1;
    };
}tcon_tcon0_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon0_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon0_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon0_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon0_comb:3;
        RBus_UInt32  tcon0_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon0_comb_inv:1;
        RBus_UInt32  tcon0_inv:1;
        RBus_UInt32  tcon0_en:1;
        RBus_UInt32  tcon0_mode:3;
        RBus_UInt32  tcon0_across_ctrl_reset:1;
        RBus_UInt32  tcon0_off_opt:1;
        RBus_UInt32  tcon0_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon0_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon0_across_ctrl3_hp:12;
        RBus_UInt32  tcon0_hl_num:4;
        RBus_UInt32  tcon0_across_ctrl3_rp:12;
        RBus_UInt32  tcon0_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon0_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon0_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon0_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon0_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon0_hl:16;
        RBus_UInt32  tcon0_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon0_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon1_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon1_hstart:15;
        RBus_UInt32  dummy_1:1;
    };
}tcon_tcon1_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon1_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon1_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon1_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon1_comb:3;
        RBus_UInt32  tcon1_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon1_comb_inv:1;
        RBus_UInt32  tcon1_inv:1;
        RBus_UInt32  tcon1_en:1;
        RBus_UInt32  tcon1_mode:3;
        RBus_UInt32  tcon1_across_ctrl_reset:1;
        RBus_UInt32  tcon1_off_opt:1;
        RBus_UInt32  tcon1_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon1_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon1_across_ctrl3_hp:12;
        RBus_UInt32  tcon1_hl_num:4;
        RBus_UInt32  tcon1_across_ctrl3_rp:12;
        RBus_UInt32  tcon1_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon1_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon1_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon1_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon1_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon1_hl:16;
        RBus_UInt32  tcon1_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon1_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon2_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon2_hstart:15;
        RBus_UInt32  dummy_2:1;
    };
}tcon_tcon2_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon2_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon2_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon2_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon2_comb:3;
        RBus_UInt32  tcon2_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon2_comb_inv:1;
        RBus_UInt32  tcon2_inv:1;
        RBus_UInt32  tcon2_en:1;
        RBus_UInt32  tcon2_mode:3;
        RBus_UInt32  tcon2_across_ctrl_reset:1;
        RBus_UInt32  tcon2_off_opt:1;
        RBus_UInt32  tcon2_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon2_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon2_across_ctrl3_hp:12;
        RBus_UInt32  tcon2_hl_num:4;
        RBus_UInt32  tcon2_across_ctrl3_rp:12;
        RBus_UInt32  tcon2_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon2_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon2_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon2_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon2_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon2_hl:16;
        RBus_UInt32  tcon2_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon2_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon3_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon3_hstart:15;
        RBus_UInt32  dummy_3:1;
    };
}tcon_tcon3_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon3_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon3_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon3_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon3_comb:3;
        RBus_UInt32  tcon3_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon3_comb_inv:1;
        RBus_UInt32  tcon3_inv:1;
        RBus_UInt32  tcon3_en:1;
        RBus_UInt32  tcon3_mode:3;
        RBus_UInt32  tcon3_across_ctrl_reset:1;
        RBus_UInt32  tcon3_off_opt:1;
        RBus_UInt32  tcon3_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon3_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon3_across_ctrl3_hp:12;
        RBus_UInt32  tcon3_hl_num:4;
        RBus_UInt32  tcon3_across_ctrl3_rp:12;
        RBus_UInt32  tcon3_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon3_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon3_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon3_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon3_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon3_hl:16;
        RBus_UInt32  tcon3_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon3_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon4_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon4_hstart:15;
        RBus_UInt32  dummy_4:1;
    };
}tcon_tcon4_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon4_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon4_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon4_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon4_comb:3;
        RBus_UInt32  tcon4_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon4_comb_inv:1;
        RBus_UInt32  tcon4_inv:1;
        RBus_UInt32  tcon4_en:1;
        RBus_UInt32  tcon4_mode:3;
        RBus_UInt32  tcon4_across_ctrl_reset:1;
        RBus_UInt32  tcon4_off_opt:1;
        RBus_UInt32  tcon4_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon4_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon4_across_ctrl3_hp:12;
        RBus_UInt32  tcon4_hl_num:4;
        RBus_UInt32  tcon4_across_ctrl3_rp:12;
        RBus_UInt32  tcon4_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon4_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon4_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon4_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon4_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon4_hl:16;
        RBus_UInt32  tcon4_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon4_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon5_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon5_hstart:15;
        RBus_UInt32  dummy_5:1;
    };
}tcon_tcon5_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon5_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon5_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon5_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon5_comb:3;
        RBus_UInt32  tcon5_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon5_comb_inv:1;
        RBus_UInt32  tcon5_inv:1;
        RBus_UInt32  tcon5_en:1;
        RBus_UInt32  tcon5_mode:3;
        RBus_UInt32  tcon5_across_ctrl_reset:1;
        RBus_UInt32  tcon5_off_opt:1;
        RBus_UInt32  tcon5_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon5_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon5_across_ctrl3_hp:12;
        RBus_UInt32  tcon5_hl_num:4;
        RBus_UInt32  tcon5_across_ctrl3_rp:12;
        RBus_UInt32  tcon5_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon5_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon5_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon5_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon5_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon5_hl:16;
        RBus_UInt32  tcon5_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon5_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon6_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon6_hstart:15;
        RBus_UInt32  dummy_6:1;
    };
}tcon_tcon6_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon6_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon6_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon6_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon6_comb:3;
        RBus_UInt32  tcon6_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon6_comb_inv:1;
        RBus_UInt32  tcon6_inv:1;
        RBus_UInt32  tcon6_en:1;
        RBus_UInt32  tcon6_mode:3;
        RBus_UInt32  tcon6_across_ctrl_reset:1;
        RBus_UInt32  tcon6_off_opt:1;
        RBus_UInt32  tcon6_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon6_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon6_across_ctrl3_hp:12;
        RBus_UInt32  tcon6_hl_num:4;
        RBus_UInt32  tcon6_across_ctrl3_rp:12;
        RBus_UInt32  tcon6_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon6_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon6_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon6_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon6_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon6_hl:16;
        RBus_UInt32  tcon6_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon6_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon7_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon7_hstart:15;
        RBus_UInt32  dummy_7:1;
    };
}tcon_tcon7_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon7_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon7_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon7_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon7_comb:3;
        RBus_UInt32  tcon7_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon7_comb_inv:1;
        RBus_UInt32  tcon7_inv:1;
        RBus_UInt32  tcon7_en:1;
        RBus_UInt32  tcon7_mode:3;
        RBus_UInt32  tcon7_across_ctrl_reset:1;
        RBus_UInt32  tcon7_off_opt:1;
        RBus_UInt32  tcon7_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon7_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon7_across_ctrl3_hp:12;
        RBus_UInt32  tcon7_hl_num:4;
        RBus_UInt32  tcon7_across_ctrl3_rp:12;
        RBus_UInt32  tcon7_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon7_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon7_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon7_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon7_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon7_hl:16;
        RBus_UInt32  tcon7_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon7_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon8_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon8_hstart:15;
        RBus_UInt32  dummy_8:1;
    };
}tcon_tcon8_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon8_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon8_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon8_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon8_comb:3;
        RBus_UInt32  tcon8_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon8_comb_inv:1;
        RBus_UInt32  tcon8_inv:1;
        RBus_UInt32  tcon8_en:1;
        RBus_UInt32  tcon8_mode:3;
        RBus_UInt32  tcon8_across_ctrl_reset:1;
        RBus_UInt32  tcon8_off_opt:1;
        RBus_UInt32  tcon8_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon8_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon8_across_ctrl3_hp:12;
        RBus_UInt32  tcon8_hl_num:4;
        RBus_UInt32  tcon8_across_ctrl3_rp:12;
        RBus_UInt32  tcon8_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon8_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon8_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon8_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon8_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon8_hl:16;
        RBus_UInt32  tcon8_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon8_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon9_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon9_hstart:15;
        RBus_UInt32  dummy_9:1;
    };
}tcon_tcon9_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon9_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon9_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon9_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon9_comb:3;
        RBus_UInt32  tcon9_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon9_comb_inv:1;
        RBus_UInt32  tcon9_inv:1;
        RBus_UInt32  tcon9_en:1;
        RBus_UInt32  tcon9_mode:3;
        RBus_UInt32  tcon9_across_ctrl_reset:1;
        RBus_UInt32  tcon9_off_opt:1;
        RBus_UInt32  tcon9_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon9_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon9_across_ctrl3_hp:12;
        RBus_UInt32  tcon9_hl_num:4;
        RBus_UInt32  tcon9_across_ctrl3_rp:12;
        RBus_UInt32  tcon9_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon9_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon9_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon9_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon9_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon9_hl:16;
        RBus_UInt32  tcon9_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon9_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon10_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon10_hstart:15;
        RBus_UInt32  dummy_10:1;
    };
}tcon_tcon10_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon10_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon10_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon10_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon10_comb:3;
        RBus_UInt32  tcon10_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon10_comb_inv:1;
        RBus_UInt32  tcon10_inv:1;
        RBus_UInt32  tcon10_en:1;
        RBus_UInt32  tcon10_mode:3;
        RBus_UInt32  tcon10_across_ctrl_reset:1;
        RBus_UInt32  tcon10_off_opt:1;
        RBus_UInt32  tcon10_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon10_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon10_across_ctrl3_hp:12;
        RBus_UInt32  tcon10_hl_num:4;
        RBus_UInt32  tcon10_across_ctrl3_rp:12;
        RBus_UInt32  tcon10_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon10_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon10_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon10_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon10_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon10_hl:16;
        RBus_UInt32  tcon10_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon10_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon11_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon11_hstart:15;
        RBus_UInt32  dummy_11:1;
    };
}tcon_tcon11_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon11_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon11_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon11_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon11_comb:3;
        RBus_UInt32  tcon11_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon11_comb_inv:1;
        RBus_UInt32  tcon11_inv:1;
        RBus_UInt32  tcon11_en:1;
        RBus_UInt32  tcon11_mode:3;
        RBus_UInt32  tcon11_across_ctrl_reset:1;
        RBus_UInt32  tcon11_off_opt:1;
        RBus_UInt32  tcon11_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon11_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon11_across_ctrl3_hp:12;
        RBus_UInt32  tcon11_hl_num:4;
        RBus_UInt32  tcon11_across_ctrl3_rp:12;
        RBus_UInt32  tcon11_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon11_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon11_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon11_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon11_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon11_hl:16;
        RBus_UInt32  tcon11_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon11_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon12_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon12_hstart:15;
        RBus_UInt32  dummy_12:1;
    };
}tcon_tcon12_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon12_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon12_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon12_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon12_comb:3;
        RBus_UInt32  tcon12_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon12_comb_inv:1;
        RBus_UInt32  tcon12_inv:1;
        RBus_UInt32  tcon12_en:1;
        RBus_UInt32  tcon12_mode:3;
        RBus_UInt32  tcon12_across_ctrl_reset:1;
        RBus_UInt32  tcon12_off_opt:1;
        RBus_UInt32  tcon12_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon12_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon12_across_ctrl3_hp:12;
        RBus_UInt32  tcon12_hl_num:4;
        RBus_UInt32  tcon12_across_ctrl3_rp:12;
        RBus_UInt32  tcon12_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon12_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon12_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon12_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon12_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon12_hl:16;
        RBus_UInt32  tcon12_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon12_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon13_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon13_hstart:15;
        RBus_UInt32  dummy_13:1;
    };
}tcon_tcon13_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon13_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon13_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon13_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon13_comb:3;
        RBus_UInt32  tcon13_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon13_comb_inv:1;
        RBus_UInt32  tcon13_inv:1;
        RBus_UInt32  tcon13_en:1;
        RBus_UInt32  tcon13_mode:3;
        RBus_UInt32  tcon13_across_ctrl_reset:1;
        RBus_UInt32  tcon13_off_opt:1;
        RBus_UInt32  tcon13_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon13_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon13_across_ctrl3_hp:12;
        RBus_UInt32  tcon13_hl_num:4;
        RBus_UInt32  tcon13_across_ctrl3_rp:12;
        RBus_UInt32  tcon13_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon13_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon13_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon13_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon13_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon13_hl:16;
        RBus_UInt32  tcon13_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon13_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon14_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon14_hstart:15;
        RBus_UInt32  dummy_14:1;
    };
}tcon_tcon14_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon14_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon14_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon14_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon14_comb:3;
        RBus_UInt32  tcon14_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon14_comb_inv:1;
        RBus_UInt32  tcon14_inv:1;
        RBus_UInt32  tcon14_en:1;
        RBus_UInt32  tcon14_mode:3;
        RBus_UInt32  tcon14_across_ctrl_reset:1;
        RBus_UInt32  tcon14_off_opt:1;
        RBus_UInt32  tcon14_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon14_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon14_across_ctrl3_hp:12;
        RBus_UInt32  tcon14_hl_num:4;
        RBus_UInt32  tcon14_across_ctrl3_rp:12;
        RBus_UInt32  tcon14_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon14_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon14_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon14_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon14_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon14_hl:16;
        RBus_UInt32  tcon14_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon14_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon15_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon15_hstart:15;
        RBus_UInt32  dummy_15:1;
    };
}tcon_tcon15_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon15_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon15_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon15_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon15_comb:3;
        RBus_UInt32  tcon15_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon15_comb_inv:1;
        RBus_UInt32  tcon15_inv:1;
        RBus_UInt32  tcon15_en:1;
        RBus_UInt32  tcon15_mode:3;
        RBus_UInt32  tcon15_across_ctrl_reset:1;
        RBus_UInt32  tcon15_off_opt:1;
        RBus_UInt32  tcon15_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon15_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon15_across_ctrl3_hp:12;
        RBus_UInt32  tcon15_hl_num:4;
        RBus_UInt32  tcon15_across_ctrl3_rp:12;
        RBus_UInt32  tcon15_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon15_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon15_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon15_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon15_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon15_hl:16;
        RBus_UInt32  tcon15_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon15_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon16_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon16_hstart:15;
        RBus_UInt32  dummy_16:1;
    };
}tcon_tcon16_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon16_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon16_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon16_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon16_comb:3;
        RBus_UInt32  tcon16_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon16_comb_inv:1;
        RBus_UInt32  tcon16_inv:1;
        RBus_UInt32  tcon16_en:1;
        RBus_UInt32  tcon16_mode:3;
        RBus_UInt32  tcon16_across_ctrl_reset:1;
        RBus_UInt32  tcon16_off_opt:1;
        RBus_UInt32  tcon16_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon16_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon16_across_ctrl3_hp:12;
        RBus_UInt32  tcon16_hl_num:4;
        RBus_UInt32  tcon16_across_ctrl3_rp:12;
        RBus_UInt32  tcon16_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon16_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon16_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon16_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon16_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon16_hl:16;
        RBus_UInt32  tcon16_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon16_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon17_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon17_hstart:15;
        RBus_UInt32  dummy_17:1;
    };
}tcon_tcon17_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon17_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon17_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon17_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon17_comb:3;
        RBus_UInt32  tcon17_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon17_comb_inv:1;
        RBus_UInt32  tcon17_inv:1;
        RBus_UInt32  tcon17_en:1;
        RBus_UInt32  tcon17_mode:3;
        RBus_UInt32  tcon17_across_ctrl_reset:1;
        RBus_UInt32  tcon17_off_opt:1;
        RBus_UInt32  tcon17_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon17_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon17_across_ctrl3_hp:12;
        RBus_UInt32  tcon17_hl_num:4;
        RBus_UInt32  tcon17_across_ctrl3_rp:12;
        RBus_UInt32  tcon17_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon17_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon17_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon17_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon17_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon17_hl:16;
        RBus_UInt32  tcon17_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon17_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon18_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon18_hstart:15;
        RBus_UInt32  dummy_18:1;
    };
}tcon_tcon18_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon18_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon18_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon18_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon18_comb:3;
        RBus_UInt32  tcon18_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon18_comb_inv:1;
        RBus_UInt32  tcon18_inv:1;
        RBus_UInt32  tcon18_en:1;
        RBus_UInt32  tcon18_mode:3;
        RBus_UInt32  tcon18_across_ctrl_reset:1;
        RBus_UInt32  tcon18_off_opt:1;
        RBus_UInt32  tcon18_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon18_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon18_across_ctrl3_hp:12;
        RBus_UInt32  tcon18_hl_num:4;
        RBus_UInt32  tcon18_across_ctrl3_rp:12;
        RBus_UInt32  tcon18_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon18_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon18_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon18_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon18_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon18_hl:16;
        RBus_UInt32  tcon18_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon18_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon19_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon19_hstart:15;
        RBus_UInt32  dummy_19:1;
    };
}tcon_tcon19_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon19_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon19_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon19_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon19_comb:3;
        RBus_UInt32  tcon19_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon19_comb_inv:1;
        RBus_UInt32  tcon19_inv:1;
        RBus_UInt32  tcon19_en:1;
        RBus_UInt32  tcon19_mode:3;
        RBus_UInt32  tcon19_across_ctrl_reset:1;
        RBus_UInt32  tcon19_off_opt:1;
        RBus_UInt32  tcon19_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon19_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon19_across_ctrl3_hp:12;
        RBus_UInt32  tcon19_hl_num:4;
        RBus_UInt32  tcon19_across_ctrl3_rp:12;
        RBus_UInt32  tcon19_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon19_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon19_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon19_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon19_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon19_hl:16;
        RBus_UInt32  tcon19_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon19_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon20_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon20_hstart:15;
        RBus_UInt32  dummy_20:1;
    };
}tcon_tcon20_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon20_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon20_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon20_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon20_comb:3;
        RBus_UInt32  tcon20_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon20_comb_inv:1;
        RBus_UInt32  tcon20_inv:1;
        RBus_UInt32  tcon20_en:1;
        RBus_UInt32  tcon20_mode:3;
        RBus_UInt32  tcon20_across_ctrl_reset:1;
        RBus_UInt32  tcon20_off_opt:1;
        RBus_UInt32  tcon20_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon20_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon20_across_ctrl3_hp:12;
        RBus_UInt32  tcon20_hl_num:4;
        RBus_UInt32  tcon20_across_ctrl3_rp:12;
        RBus_UInt32  tcon20_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon20_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon20_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon20_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon20_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon20_hl:16;
        RBus_UInt32  tcon20_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon20_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon21_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon21_hstart:15;
        RBus_UInt32  dummy_21:1;
    };
}tcon_tcon21_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon21_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon21_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon21_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon21_comb:3;
        RBus_UInt32  tcon21_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon21_comb_inv:1;
        RBus_UInt32  tcon21_inv:1;
        RBus_UInt32  tcon21_en:1;
        RBus_UInt32  tcon21_mode:3;
        RBus_UInt32  tcon21_across_ctrl_reset:1;
        RBus_UInt32  tcon21_off_opt:1;
        RBus_UInt32  tcon21_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon21_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon21_across_ctrl3_hp:12;
        RBus_UInt32  tcon21_hl_num:4;
        RBus_UInt32  tcon21_across_ctrl3_rp:12;
        RBus_UInt32  tcon21_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon21_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon21_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon21_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon21_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon21_hl:16;
        RBus_UInt32  tcon21_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon21_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon22_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon22_hstart:15;
        RBus_UInt32  dummy_22:1;
    };
}tcon_tcon22_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon22_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon22_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon22_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon22_comb:3;
        RBus_UInt32  tcon22_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon22_comb_inv:1;
        RBus_UInt32  tcon22_inv:1;
        RBus_UInt32  tcon22_en:1;
        RBus_UInt32  tcon22_mode:3;
        RBus_UInt32  tcon22_across_ctrl_reset:1;
        RBus_UInt32  tcon22_off_opt:1;
        RBus_UInt32  tcon22_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon22_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon22_across_ctrl3_hp:12;
        RBus_UInt32  tcon22_hl_num:4;
        RBus_UInt32  tcon22_across_ctrl3_rp:12;
        RBus_UInt32  tcon22_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon22_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon22_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon22_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon22_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon22_hl:16;
        RBus_UInt32  tcon22_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon22_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon23_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon23_hstart:15;
        RBus_UInt32  dummy_23:1;
    };
}tcon_tcon23_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon23_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon23_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon23_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon23_comb:3;
        RBus_UInt32  tcon23_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon23_comb_inv:1;
        RBus_UInt32  tcon23_inv:1;
        RBus_UInt32  tcon23_en:1;
        RBus_UInt32  tcon23_mode:3;
        RBus_UInt32  tcon23_across_ctrl_reset:1;
        RBus_UInt32  tcon23_off_opt:1;
        RBus_UInt32  tcon23_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon23_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon23_across_ctrl3_hp:12;
        RBus_UInt32  tcon23_hl_num:4;
        RBus_UInt32  tcon23_across_ctrl3_rp:12;
        RBus_UInt32  tcon23_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon23_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon23_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon23_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon23_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon23_hl:16;
        RBus_UInt32  tcon23_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon23_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon24_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon24_hstart:15;
        RBus_UInt32  dummy_24:1;
    };
}tcon_tcon24_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon24_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon24_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon24_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon24_comb:3;
        RBus_UInt32  tcon24_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon24_comb_inv:1;
        RBus_UInt32  tcon24_inv:1;
        RBus_UInt32  tcon24_en:1;
        RBus_UInt32  tcon24_mode:3;
        RBus_UInt32  tcon24_across_ctrl_reset:1;
        RBus_UInt32  tcon24_off_opt:1;
        RBus_UInt32  tcon24_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon24_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon24_across_ctrl3_hp:12;
        RBus_UInt32  tcon24_hl_num:4;
        RBus_UInt32  tcon24_across_ctrl3_rp:12;
        RBus_UInt32  tcon24_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon24_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon24_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon24_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon24_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon24_hl:16;
        RBus_UInt32  tcon24_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon24_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon25_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon25_hstart:15;
        RBus_UInt32  dummy_25:1;
    };
}tcon_tcon25_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon25_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon25_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon25_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon25_comb:3;
        RBus_UInt32  tcon25_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon25_comb_inv:1;
        RBus_UInt32  tcon25_inv:1;
        RBus_UInt32  tcon25_en:1;
        RBus_UInt32  tcon25_mode:3;
        RBus_UInt32  tcon25_across_ctrl_reset:1;
        RBus_UInt32  tcon25_off_opt:1;
        RBus_UInt32  tcon25_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon25_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon25_across_ctrl3_hp:12;
        RBus_UInt32  tcon25_hl_num:4;
        RBus_UInt32  tcon25_across_ctrl3_rp:12;
        RBus_UInt32  tcon25_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon25_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon25_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon25_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon25_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon25_hl:16;
        RBus_UInt32  tcon25_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon25_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon26_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon26_hstart:15;
        RBus_UInt32  dummy_26:1;
    };
}tcon_tcon26_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon26_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon26_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon26_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon26_comb:3;
        RBus_UInt32  tcon26_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon26_comb_inv:1;
        RBus_UInt32  tcon26_inv:1;
        RBus_UInt32  tcon26_en:1;
        RBus_UInt32  tcon26_mode:3;
        RBus_UInt32  tcon26_across_ctrl_reset:1;
        RBus_UInt32  tcon26_off_opt:1;
        RBus_UInt32  tcon26_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon26_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon26_across_ctrl3_hp:12;
        RBus_UInt32  tcon26_hl_num:4;
        RBus_UInt32  tcon26_across_ctrl3_rp:12;
        RBus_UInt32  tcon26_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon26_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon26_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon26_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon26_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon26_hl:16;
        RBus_UInt32  tcon26_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon26_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon27_hend:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon27_hstart:15;
        RBus_UInt32  dummy_27:1;
    };
}tcon_tcon27_hse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon27_vend:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  tcon27_vstart:13;
        RBus_UInt32  res2:3;
    };
}tcon_tcon27_vse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon27_comb:3;
        RBus_UInt32  tcon27_frame_tog_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tcon27_comb_inv:1;
        RBus_UInt32  tcon27_inv:1;
        RBus_UInt32  tcon27_en:1;
        RBus_UInt32  tcon27_mode:3;
        RBus_UInt32  tcon27_across_ctrl_reset:1;
        RBus_UInt32  tcon27_off_opt:1;
        RBus_UInt32  tcon27_l_flag_sel:5;
        RBus_UInt32  res2:14;
    };
}tcon_tcon27_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon27_across_ctrl3_hp:12;
        RBus_UInt32  tcon27_hl_num:4;
        RBus_UInt32  tcon27_across_ctrl3_rp:12;
        RBus_UInt32  tcon27_across_frame_int:1;
        RBus_UInt32  res1:3;
    };
}tcon_tcon27_across_line_control3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon27_frame_hp:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  tcon27_frame_lp:12;
        RBus_UInt32  res2:4;
    };
}tcon_tcon27_across_frame_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon27_hl:16;
        RBus_UInt32  tcon27_frame_offset:12;
        RBus_UInt32  res1:4;
    };
}tcon_tcon27_frame_hl_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_rp:26;
        RBus_UInt32  res1:6;
    };
}tcon_tcon_pwm0_control0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_hp:26;
        RBus_UInt32  res1:6;
    };
}tcon_tcon_pwm0_control1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_num:4;
        RBus_UInt32  res1:27;
        RBus_UInt32  pwm0_en:1;
    };
}tcon_tcon_pwm0_control2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_rp:26;
        RBus_UInt32  res1:6;
    };
}tcon_tcon_pwm1_control0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_hp:26;
        RBus_UInt32  res1:6;
    };
}tcon_tcon_pwm1_control1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_num:4;
        RBus_UInt32  res1:27;
        RBus_UInt32  pwm1_en:1;
    };
}tcon_tcon_pwm1_control2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm_db_apply:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  pwm_db_sel:1;
        RBus_UInt32  res2:23;
        RBus_UInt32  dummy1802d5a0_31_28:4;
    };
}tcon_tcon_pwm_db_sel_RBUS;




#endif 


#endif 
