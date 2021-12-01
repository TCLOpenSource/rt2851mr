/**
* @file Merlin5-DesignSpec-M_Domain_Cap1Cap2
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_MDOMAIN_CAP_REG_H_
#define _RBUS_MDOMAIN_CAP_REG_H_

#include "rbus_types.h"



//  MDOMAIN_CAP Register Address
#define  MDOMAIN_CAP_DDR_In1WTLVL_Num                                           0x18027200
#define  MDOMAIN_CAP_DDR_In1WTLVL_Num_reg_addr                                   "0xB8027200"
#define  MDOMAIN_CAP_DDR_In1WTLVL_Num_reg                                        0xB8027200
#define  MDOMAIN_CAP_DDR_In1WTLVL_Num_inst_addr                                  "0x0000"
#define  set_MDOMAIN_CAP_DDR_In1WTLVL_Num_reg(data)                              (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1WTLVL_Num_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In1WTLVL_Num_reg                                    (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1WTLVL_Num_reg))
#define  MDOMAIN_CAP_DDR_In1WTLVL_Num_in1_wtlvl_shift                            (16)
#define  MDOMAIN_CAP_DDR_In1WTLVL_Num_in1_write_num_shift                        (0)
#define  MDOMAIN_CAP_DDR_In1WTLVL_Num_in1_wtlvl_mask                             (0x01FF0000)
#define  MDOMAIN_CAP_DDR_In1WTLVL_Num_in1_write_num_mask                         (0x0000FFFF)
#define  MDOMAIN_CAP_DDR_In1WTLVL_Num_in1_wtlvl(data)                            (0x01FF0000&((data)<<16))
#define  MDOMAIN_CAP_DDR_In1WTLVL_Num_in1_write_num(data)                        (0x0000FFFF&(data))
#define  MDOMAIN_CAP_DDR_In1WTLVL_Num_get_in1_wtlvl(data)                        ((0x01FF0000&(data))>>16)
#define  MDOMAIN_CAP_DDR_In1WTLVL_Num_get_in1_write_num(data)                    (0x0000FFFF&(data))

#define  MDOMAIN_CAP_DDR_In1WrLen_Rem                                           0x18027204
#define  MDOMAIN_CAP_DDR_In1WrLen_Rem_reg_addr                                   "0xB8027204"
#define  MDOMAIN_CAP_DDR_In1WrLen_Rem_reg                                        0xB8027204
#define  MDOMAIN_CAP_DDR_In1WrLen_Rem_inst_addr                                  "0x0001"
#define  set_MDOMAIN_CAP_DDR_In1WrLen_Rem_reg(data)                              (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1WrLen_Rem_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In1WrLen_Rem_reg                                    (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1WrLen_Rem_reg))
#define  MDOMAIN_CAP_DDR_In1WrLen_Rem_in1_wrlen_shift                            (8)
#define  MDOMAIN_CAP_DDR_In1WrLen_Rem_in1_write_remain_shift                     (0)
#define  MDOMAIN_CAP_DDR_In1WrLen_Rem_in1_wrlen_mask                             (0x0000FF00)
#define  MDOMAIN_CAP_DDR_In1WrLen_Rem_in1_write_remain_mask                      (0x000000FF)
#define  MDOMAIN_CAP_DDR_In1WrLen_Rem_in1_wrlen(data)                            (0x0000FF00&((data)<<8))
#define  MDOMAIN_CAP_DDR_In1WrLen_Rem_in1_write_remain(data)                     (0x000000FF&(data))
#define  MDOMAIN_CAP_DDR_In1WrLen_Rem_get_in1_wrlen(data)                        ((0x0000FF00&(data))>>8)
#define  MDOMAIN_CAP_DDR_In1WrLen_Rem_get_in1_write_remain(data)                 (0x000000FF&(data))

#define  MDOMAIN_CAP_DDR_In1Addr                                                0x18027208
#define  MDOMAIN_CAP_DDR_In1Addr_reg_addr                                        "0xB8027208"
#define  MDOMAIN_CAP_DDR_In1Addr_reg                                             0xB8027208
#define  MDOMAIN_CAP_DDR_In1Addr_inst_addr                                       "0x0002"
#define  set_MDOMAIN_CAP_DDR_In1Addr_reg(data)                                   (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1Addr_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In1Addr_reg                                         (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1Addr_reg))
#define  MDOMAIN_CAP_DDR_In1Addr_in1_wr_mem_start_shift                          (3)
#define  MDOMAIN_CAP_DDR_In1Addr_in1_wr_mem_start_mask                           (0xFFFFFFF8)
#define  MDOMAIN_CAP_DDR_In1Addr_in1_wr_mem_start(data)                          (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_DDR_In1Addr_get_in1_wr_mem_start(data)                      ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_DDR_In1LineStep                                            0x1802720C
#define  MDOMAIN_CAP_DDR_In1LineStep_reg_addr                                    "0xB802720C"
#define  MDOMAIN_CAP_DDR_In1LineStep_reg                                         0xB802720C
#define  MDOMAIN_CAP_DDR_In1LineStep_inst_addr                                   "0x0003"
#define  set_MDOMAIN_CAP_DDR_In1LineStep_reg(data)                               (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1LineStep_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In1LineStep_reg                                     (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1LineStep_reg))
#define  MDOMAIN_CAP_DDR_In1LineStep_in1_line_step_shift                         (3)
#define  MDOMAIN_CAP_DDR_In1LineStep_in1_line_step_mask                          (0xFFFFFFF8)
#define  MDOMAIN_CAP_DDR_In1LineStep_in1_line_step(data)                         (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_DDR_In1LineStep_get_in1_line_step(data)                     ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_DDR_In1BlkStep                                             0x18027210
#define  MDOMAIN_CAP_DDR_In1BlkStep_reg_addr                                     "0xB8027210"
#define  MDOMAIN_CAP_DDR_In1BlkStep_reg                                          0xB8027210
#define  MDOMAIN_CAP_DDR_In1BlkStep_inst_addr                                    "0x0004"
#define  set_MDOMAIN_CAP_DDR_In1BlkStep_reg(data)                                (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1BlkStep_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In1BlkStep_reg                                      (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1BlkStep_reg))
#define  MDOMAIN_CAP_DDR_In1BlkStep_in1_block_step_shift                         (3)
#define  MDOMAIN_CAP_DDR_In1BlkStep_in1_block_step_mask                          (0xFFFFFFF8)
#define  MDOMAIN_CAP_DDR_In1BlkStep_in1_block_step(data)                         (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_DDR_In1BlkStep_get_in1_block_step(data)                     ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_DDR_In1_2ndAddr                                            0x18027214
#define  MDOMAIN_CAP_DDR_In1_2ndAddr_reg_addr                                    "0xB8027214"
#define  MDOMAIN_CAP_DDR_In1_2ndAddr_reg                                         0xB8027214
#define  MDOMAIN_CAP_DDR_In1_2ndAddr_inst_addr                                   "0x0005"
#define  set_MDOMAIN_CAP_DDR_In1_2ndAddr_reg(data)                               (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1_2ndAddr_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In1_2ndAddr_reg                                     (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1_2ndAddr_reg))
#define  MDOMAIN_CAP_DDR_In1_2ndAddr_in1_sec_bl_shift                            (3)
#define  MDOMAIN_CAP_DDR_In1_2ndAddr_in1_sec_bl_mask                             (0xFFFFFFF8)
#define  MDOMAIN_CAP_DDR_In1_2ndAddr_in1_sec_bl(data)                            (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_DDR_In1_2ndAddr_get_in1_sec_bl(data)                        ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_DDR_In1_3rdAddr                                            0x18027218
#define  MDOMAIN_CAP_DDR_In1_3rdAddr_reg_addr                                    "0xB8027218"
#define  MDOMAIN_CAP_DDR_In1_3rdAddr_reg                                         0xB8027218
#define  MDOMAIN_CAP_DDR_In1_3rdAddr_inst_addr                                   "0x0006"
#define  set_MDOMAIN_CAP_DDR_In1_3rdAddr_reg(data)                               (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1_3rdAddr_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In1_3rdAddr_reg                                     (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1_3rdAddr_reg))
#define  MDOMAIN_CAP_DDR_In1_3rdAddr_in1_third_bl_shift                          (3)
#define  MDOMAIN_CAP_DDR_In1_3rdAddr_in1_third_bl_mask                           (0xFFFFFFF8)
#define  MDOMAIN_CAP_DDR_In1_3rdAddr_in1_third_bl(data)                          (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_DDR_In1_3rdAddr_get_in1_third_bl(data)                      ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_DDR_In1LineNum                                             0x1802721C
#define  MDOMAIN_CAP_DDR_In1LineNum_reg_addr                                     "0xB802721C"
#define  MDOMAIN_CAP_DDR_In1LineNum_reg                                          0xB802721C
#define  MDOMAIN_CAP_DDR_In1LineNum_inst_addr                                    "0x0007"
#define  set_MDOMAIN_CAP_DDR_In1LineNum_reg(data)                                (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1LineNum_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In1LineNum_reg                                      (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1LineNum_reg))
#define  MDOMAIN_CAP_DDR_In1LineNum_in1_zero_shift                               (17)
#define  MDOMAIN_CAP_DDR_In1LineNum_in1_frame_access_mode_shift                  (16)
#define  MDOMAIN_CAP_DDR_In1LineNum_in1_line_number_shift                        (0)
#define  MDOMAIN_CAP_DDR_In1LineNum_in1_zero_mask                                (0x00020000)
#define  MDOMAIN_CAP_DDR_In1LineNum_in1_frame_access_mode_mask                   (0x00010000)
#define  MDOMAIN_CAP_DDR_In1LineNum_in1_line_number_mask                         (0x00001FFF)
#define  MDOMAIN_CAP_DDR_In1LineNum_in1_zero(data)                               (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_DDR_In1LineNum_in1_frame_access_mode(data)                  (0x00010000&((data)<<16))
#define  MDOMAIN_CAP_DDR_In1LineNum_in1_line_number(data)                        (0x00001FFF&(data))
#define  MDOMAIN_CAP_DDR_In1LineNum_get_in1_zero(data)                           ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_DDR_In1LineNum_get_in1_frame_access_mode(data)              ((0x00010000&(data))>>16)
#define  MDOMAIN_CAP_DDR_In1LineNum_get_in1_line_number(data)                    (0x00001FFF&(data))

#define  MDOMAIN_CAP_DDR_In1Ctrl                                                0x18027220
#define  MDOMAIN_CAP_DDR_In1Ctrl_reg_addr                                        "0xB8027220"
#define  MDOMAIN_CAP_DDR_In1Ctrl_reg                                             0xB8027220
#define  MDOMAIN_CAP_DDR_In1Ctrl_inst_addr                                       "0x0008"
#define  set_MDOMAIN_CAP_DDR_In1Ctrl_reg(data)                                   (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1Ctrl_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In1Ctrl_reg                                         (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1Ctrl_reg))
#define  MDOMAIN_CAP_DDR_In1Ctrl_dispm_ddr_checksum_en_shift                     (31)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_disp2cap_distance_shift                     (28)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_bufnum_shift                                (24)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_unfreeze_wait_shift                         (21)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_auto_unfreeze_shift                         (20)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_freeze_option_shift                         (18)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_freeze_control_shift                        (17)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_bad_edit_suppression_shift                  (16)
#define  MDOMAIN_CAP_DDR_In1Ctrl_dispm_dbg_sel_shift                             (12)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_l_flag_inv_shift                            (11)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_rm_r_vs_en_shift                            (10)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_dout_align_shift                            (9)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_v_flip_3buf_en_shift                        (8)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_merge_enable_shift                          (7)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_double_enable_shift                         (6)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_block_free_shift                            (5)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_single_buffer_select_shift                  (2)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_freeze_enable_shift                         (1)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_en_vs_rst_shift                             (0)
#define  MDOMAIN_CAP_DDR_In1Ctrl_dispm_ddr_checksum_en_mask                      (0x80000000)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_disp2cap_distance_mask                      (0x70000000)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_bufnum_mask                                 (0x07000000)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_unfreeze_wait_mask                          (0x00E00000)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_auto_unfreeze_mask                          (0x00100000)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_freeze_option_mask                          (0x00040000)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_freeze_control_mask                         (0x00020000)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_bad_edit_suppression_mask                   (0x00010000)
#define  MDOMAIN_CAP_DDR_In1Ctrl_dispm_dbg_sel_mask                              (0x0000F000)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_l_flag_inv_mask                             (0x00000800)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_rm_r_vs_en_mask                             (0x00000400)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_dout_align_mask                             (0x00000200)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_v_flip_3buf_en_mask                         (0x00000100)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_merge_enable_mask                           (0x00000080)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_double_enable_mask                          (0x00000040)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_block_free_mask                             (0x00000020)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_single_buffer_select_mask                   (0x0000001C)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_freeze_enable_mask                          (0x00000002)
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_en_vs_rst_mask                              (0x00000001)
#define  MDOMAIN_CAP_DDR_In1Ctrl_dispm_ddr_checksum_en(data)                     (0x80000000&((data)<<31))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_disp2cap_distance(data)                     (0x70000000&((data)<<28))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_bufnum(data)                                (0x07000000&((data)<<24))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_unfreeze_wait(data)                         (0x00E00000&((data)<<21))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_auto_unfreeze(data)                         (0x00100000&((data)<<20))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_freeze_option(data)                         (0x00040000&((data)<<18))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_freeze_control(data)                        (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_bad_edit_suppression(data)                  (0x00010000&((data)<<16))
#define  MDOMAIN_CAP_DDR_In1Ctrl_dispm_dbg_sel(data)                             (0x0000F000&((data)<<12))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_l_flag_inv(data)                            (0x00000800&((data)<<11))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_rm_r_vs_en(data)                            (0x00000400&((data)<<10))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_dout_align(data)                            (0x00000200&((data)<<9))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_v_flip_3buf_en(data)                        (0x00000100&((data)<<8))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_merge_enable(data)                          (0x00000080&((data)<<7))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_double_enable(data)                         (0x00000040&((data)<<6))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_block_free(data)                            (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_single_buffer_select(data)                  (0x0000001C&((data)<<2))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_freeze_enable(data)                         (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_DDR_In1Ctrl_in1_en_vs_rst(data)                             (0x00000001&(data))
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_dispm_ddr_checksum_en(data)                 ((0x80000000&(data))>>31)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_disp2cap_distance(data)                 ((0x70000000&(data))>>28)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_bufnum(data)                            ((0x07000000&(data))>>24)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_unfreeze_wait(data)                     ((0x00E00000&(data))>>21)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_auto_unfreeze(data)                     ((0x00100000&(data))>>20)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_freeze_option(data)                     ((0x00040000&(data))>>18)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_freeze_control(data)                    ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_bad_edit_suppression(data)              ((0x00010000&(data))>>16)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_dispm_dbg_sel(data)                         ((0x0000F000&(data))>>12)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_l_flag_inv(data)                        ((0x00000800&(data))>>11)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_rm_r_vs_en(data)                        ((0x00000400&(data))>>10)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_dout_align(data)                        ((0x00000200&(data))>>9)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_v_flip_3buf_en(data)                    ((0x00000100&(data))>>8)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_merge_enable(data)                      ((0x00000080&(data))>>7)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_double_enable(data)                     ((0x00000040&(data))>>6)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_block_free(data)                        ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_single_buffer_select(data)              ((0x0000001C&(data))>>2)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_freeze_enable(data)                     ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_DDR_In1Ctrl_get_in1_en_vs_rst(data)                         (0x00000001&(data))

#define  MDOMAIN_CAP_DDR_In1Status                                              0x18027224
#define  MDOMAIN_CAP_DDR_In1Status_reg_addr                                      "0xB8027224"
#define  MDOMAIN_CAP_DDR_In1Status_reg                                           0xB8027224
#define  MDOMAIN_CAP_DDR_In1Status_inst_addr                                     "0x0009"
#define  set_MDOMAIN_CAP_DDR_In1Status_reg(data)                                 (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1Status_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In1Status_reg                                       (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1Status_reg))
#define  MDOMAIN_CAP_DDR_In1Status_in1_cap_enable_real_shift                     (21)
#define  MDOMAIN_CAP_DDR_In1Status_in1_burst_ongo_shift                          (20)
#define  MDOMAIN_CAP_DDR_In1Status_in1_sub_freeze_enable_2nd_shift               (18)
#define  MDOMAIN_CAP_DDR_In1Status_in1_auto_unfreeze_2nd_shift                   (17)
#define  MDOMAIN_CAP_DDR_In1Status_in1_freeze_enable_2nd_shift                   (16)
#define  MDOMAIN_CAP_DDR_In1Status_in1_sub_block_select_shift                    (9)
#define  MDOMAIN_CAP_DDR_In1Status_in1_block_select_shift                        (6)
#define  MDOMAIN_CAP_DDR_In1Status_in1_freeze_ok_shift                           (5)
#define  MDOMAIN_CAP_DDR_In1Status_in1_field_polarity_error_shift                (4)
#define  MDOMAIN_CAP_DDR_In1Status_in1_field_polarity_status_shift               (0)
#define  MDOMAIN_CAP_DDR_In1Status_in1_cap_enable_real_mask                      (0x00200000)
#define  MDOMAIN_CAP_DDR_In1Status_in1_burst_ongo_mask                           (0x00100000)
#define  MDOMAIN_CAP_DDR_In1Status_in1_sub_freeze_enable_2nd_mask                (0x00040000)
#define  MDOMAIN_CAP_DDR_In1Status_in1_auto_unfreeze_2nd_mask                    (0x00020000)
#define  MDOMAIN_CAP_DDR_In1Status_in1_freeze_enable_2nd_mask                    (0x00010000)
#define  MDOMAIN_CAP_DDR_In1Status_in1_sub_block_select_mask                     (0x00000E00)
#define  MDOMAIN_CAP_DDR_In1Status_in1_block_select_mask                         (0x000001C0)
#define  MDOMAIN_CAP_DDR_In1Status_in1_freeze_ok_mask                            (0x00000020)
#define  MDOMAIN_CAP_DDR_In1Status_in1_field_polarity_error_mask                 (0x00000010)
#define  MDOMAIN_CAP_DDR_In1Status_in1_field_polarity_status_mask                (0x0000000F)
#define  MDOMAIN_CAP_DDR_In1Status_in1_cap_enable_real(data)                     (0x00200000&((data)<<21))
#define  MDOMAIN_CAP_DDR_In1Status_in1_burst_ongo(data)                          (0x00100000&((data)<<20))
#define  MDOMAIN_CAP_DDR_In1Status_in1_sub_freeze_enable_2nd(data)               (0x00040000&((data)<<18))
#define  MDOMAIN_CAP_DDR_In1Status_in1_auto_unfreeze_2nd(data)                   (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_DDR_In1Status_in1_freeze_enable_2nd(data)                   (0x00010000&((data)<<16))
#define  MDOMAIN_CAP_DDR_In1Status_in1_sub_block_select(data)                    (0x00000E00&((data)<<9))
#define  MDOMAIN_CAP_DDR_In1Status_in1_block_select(data)                        (0x000001C0&((data)<<6))
#define  MDOMAIN_CAP_DDR_In1Status_in1_freeze_ok(data)                           (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_DDR_In1Status_in1_field_polarity_error(data)                (0x00000010&((data)<<4))
#define  MDOMAIN_CAP_DDR_In1Status_in1_field_polarity_status(data)               (0x0000000F&(data))
#define  MDOMAIN_CAP_DDR_In1Status_get_in1_cap_enable_real(data)                 ((0x00200000&(data))>>21)
#define  MDOMAIN_CAP_DDR_In1Status_get_in1_burst_ongo(data)                      ((0x00100000&(data))>>20)
#define  MDOMAIN_CAP_DDR_In1Status_get_in1_sub_freeze_enable_2nd(data)           ((0x00040000&(data))>>18)
#define  MDOMAIN_CAP_DDR_In1Status_get_in1_auto_unfreeze_2nd(data)               ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_DDR_In1Status_get_in1_freeze_enable_2nd(data)               ((0x00010000&(data))>>16)
#define  MDOMAIN_CAP_DDR_In1Status_get_in1_sub_block_select(data)                ((0x00000E00&(data))>>9)
#define  MDOMAIN_CAP_DDR_In1Status_get_in1_block_select(data)                    ((0x000001C0&(data))>>6)
#define  MDOMAIN_CAP_DDR_In1Status_get_in1_freeze_ok(data)                       ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_DDR_In1Status_get_in1_field_polarity_error(data)            ((0x00000010&(data))>>4)
#define  MDOMAIN_CAP_DDR_In1Status_get_in1_field_polarity_status(data)           (0x0000000F&(data))

#define  MDOMAIN_CAP_Cap_In1_enable                                             0x18027228
#define  MDOMAIN_CAP_Cap_In1_enable_reg_addr                                     "0xB8027228"
#define  MDOMAIN_CAP_Cap_In1_enable_reg                                          0xB8027228
#define  MDOMAIN_CAP_Cap_In1_enable_inst_addr                                    "0x000A"
#define  set_MDOMAIN_CAP_Cap_In1_enable_reg(data)                                (*((volatile unsigned int*)MDOMAIN_CAP_Cap_In1_enable_reg)=data)
#define  get_MDOMAIN_CAP_Cap_In1_enable_reg                                      (*((volatile unsigned int*)MDOMAIN_CAP_Cap_In1_enable_reg))
#define  MDOMAIN_CAP_Cap_In1_enable_in1_cap_enable_shift                         (0)
#define  MDOMAIN_CAP_Cap_In1_enable_in1_cap_enable_mask                          (0x00000001)
#define  MDOMAIN_CAP_Cap_In1_enable_in1_cap_enable(data)                         (0x00000001&(data))
#define  MDOMAIN_CAP_Cap_In1_enable_get_in1_cap_enable(data)                     (0x00000001&(data))

#define  MDOMAIN_CAP_DDR_In1subCtrl                                             0x1802722C
#define  MDOMAIN_CAP_DDR_In1subCtrl_reg_addr                                     "0xB802722C"
#define  MDOMAIN_CAP_DDR_In1subCtrl_reg                                          0xB802722C
#define  MDOMAIN_CAP_DDR_In1subCtrl_inst_addr                                    "0x000B"
#define  set_MDOMAIN_CAP_DDR_In1subCtrl_reg(data)                                (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1subCtrl_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In1subCtrl_reg                                      (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In1subCtrl_reg))
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_disp2cap_distance_shift              (28)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_use_main_block_en_shift              (27)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_bufnum_shift                         (24)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_freeze_option_shift                  (18)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_freeze_control_shift                 (17)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_v_flip_3buf_en_shift                 (8)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_double_enable_shift                  (6)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_block_free_shift                     (5)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_single_buffer_select_shift           (2)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_freeze_enable_shift                  (1)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_disp2cap_distance_mask               (0x70000000)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_use_main_block_en_mask               (0x08000000)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_bufnum_mask                          (0x07000000)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_freeze_option_mask                   (0x00040000)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_freeze_control_mask                  (0x00020000)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_v_flip_3buf_en_mask                  (0x00000100)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_double_enable_mask                   (0x00000040)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_block_free_mask                      (0x00000020)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_single_buffer_select_mask            (0x0000001C)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_freeze_enable_mask                   (0x00000002)
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_disp2cap_distance(data)              (0x70000000&((data)<<28))
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_use_main_block_en(data)              (0x08000000&((data)<<27))
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_bufnum(data)                         (0x07000000&((data)<<24))
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_freeze_option(data)                  (0x00040000&((data)<<18))
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_freeze_control(data)                 (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_v_flip_3buf_en(data)                 (0x00000100&((data)<<8))
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_double_enable(data)                  (0x00000040&((data)<<6))
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_block_free(data)                     (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_single_buffer_select(data)           (0x0000001C&((data)<<2))
#define  MDOMAIN_CAP_DDR_In1subCtrl_in1_sub_freeze_enable(data)                  (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_DDR_In1subCtrl_get_in1_sub_disp2cap_distance(data)          ((0x70000000&(data))>>28)
#define  MDOMAIN_CAP_DDR_In1subCtrl_get_in1_sub_use_main_block_en(data)          ((0x08000000&(data))>>27)
#define  MDOMAIN_CAP_DDR_In1subCtrl_get_in1_sub_bufnum(data)                     ((0x07000000&(data))>>24)
#define  MDOMAIN_CAP_DDR_In1subCtrl_get_in1_sub_freeze_option(data)              ((0x00040000&(data))>>18)
#define  MDOMAIN_CAP_DDR_In1subCtrl_get_in1_sub_freeze_control(data)             ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_DDR_In1subCtrl_get_in1_sub_v_flip_3buf_en(data)             ((0x00000100&(data))>>8)
#define  MDOMAIN_CAP_DDR_In1subCtrl_get_in1_sub_double_enable(data)              ((0x00000040&(data))>>6)
#define  MDOMAIN_CAP_DDR_In1subCtrl_get_in1_sub_block_free(data)                 ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_DDR_In1subCtrl_get_in1_sub_single_buffer_select(data)       ((0x0000001C&(data))>>2)
#define  MDOMAIN_CAP_DDR_In1subCtrl_get_in1_sub_freeze_enable(data)              ((0x00000002&(data))>>1)

#define  MDOMAIN_CAP_DDR_In2WTLVL                                               0x18027240
#define  MDOMAIN_CAP_DDR_In2WTLVL_reg_addr                                       "0xB8027240"
#define  MDOMAIN_CAP_DDR_In2WTLVL_reg                                            0xB8027240
#define  MDOMAIN_CAP_DDR_In2WTLVL_inst_addr                                      "0x000C"
#define  set_MDOMAIN_CAP_DDR_In2WTLVL_reg(data)                                  (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2WTLVL_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In2WTLVL_reg                                        (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2WTLVL_reg))
#define  MDOMAIN_CAP_DDR_In2WTLVL_in2_wtlvl_shift                                (16)
#define  MDOMAIN_CAP_DDR_In2WTLVL_in2_write_num_shift                            (0)
#define  MDOMAIN_CAP_DDR_In2WTLVL_in2_wtlvl_mask                                 (0x01FF0000)
#define  MDOMAIN_CAP_DDR_In2WTLVL_in2_write_num_mask                             (0x0000FFFF)
#define  MDOMAIN_CAP_DDR_In2WTLVL_in2_wtlvl(data)                                (0x01FF0000&((data)<<16))
#define  MDOMAIN_CAP_DDR_In2WTLVL_in2_write_num(data)                            (0x0000FFFF&(data))
#define  MDOMAIN_CAP_DDR_In2WTLVL_get_in2_wtlvl(data)                            ((0x01FF0000&(data))>>16)
#define  MDOMAIN_CAP_DDR_In2WTLVL_get_in2_write_num(data)                        (0x0000FFFF&(data))

#define  MDOMAIN_CAP_DDR_In2WrLen_Rem                                           0x18027244
#define  MDOMAIN_CAP_DDR_In2WrLen_Rem_reg_addr                                   "0xB8027244"
#define  MDOMAIN_CAP_DDR_In2WrLen_Rem_reg                                        0xB8027244
#define  MDOMAIN_CAP_DDR_In2WrLen_Rem_inst_addr                                  "0x000D"
#define  set_MDOMAIN_CAP_DDR_In2WrLen_Rem_reg(data)                              (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2WrLen_Rem_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In2WrLen_Rem_reg                                    (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2WrLen_Rem_reg))
#define  MDOMAIN_CAP_DDR_In2WrLen_Rem_in2_wrlen_shift                            (8)
#define  MDOMAIN_CAP_DDR_In2WrLen_Rem_in2_write_remain_shift                     (0)
#define  MDOMAIN_CAP_DDR_In2WrLen_Rem_in2_wrlen_mask                             (0x0000FF00)
#define  MDOMAIN_CAP_DDR_In2WrLen_Rem_in2_write_remain_mask                      (0x000000FF)
#define  MDOMAIN_CAP_DDR_In2WrLen_Rem_in2_wrlen(data)                            (0x0000FF00&((data)<<8))
#define  MDOMAIN_CAP_DDR_In2WrLen_Rem_in2_write_remain(data)                     (0x000000FF&(data))
#define  MDOMAIN_CAP_DDR_In2WrLen_Rem_get_in2_wrlen(data)                        ((0x0000FF00&(data))>>8)
#define  MDOMAIN_CAP_DDR_In2WrLen_Rem_get_in2_write_remain(data)                 (0x000000FF&(data))

#define  MDOMAIN_CAP_DDR_In2Addr                                                0x18027248
#define  MDOMAIN_CAP_DDR_In2Addr_reg_addr                                        "0xB8027248"
#define  MDOMAIN_CAP_DDR_In2Addr_reg                                             0xB8027248
#define  MDOMAIN_CAP_DDR_In2Addr_inst_addr                                       "0x000E"
#define  set_MDOMAIN_CAP_DDR_In2Addr_reg(data)                                   (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2Addr_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In2Addr_reg                                         (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2Addr_reg))
#define  MDOMAIN_CAP_DDR_In2Addr_in2_wr_mem_start_shift                          (3)
#define  MDOMAIN_CAP_DDR_In2Addr_in2_wr_mem_start_mask                           (0xFFFFFFF8)
#define  MDOMAIN_CAP_DDR_In2Addr_in2_wr_mem_start(data)                          (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_DDR_In2Addr_get_in2_wr_mem_start(data)                      ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_DDR_In2LineStep                                            0x1802724C
#define  MDOMAIN_CAP_DDR_In2LineStep_reg_addr                                    "0xB802724C"
#define  MDOMAIN_CAP_DDR_In2LineStep_reg                                         0xB802724C
#define  MDOMAIN_CAP_DDR_In2LineStep_inst_addr                                   "0x000F"
#define  set_MDOMAIN_CAP_DDR_In2LineStep_reg(data)                               (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2LineStep_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In2LineStep_reg                                     (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2LineStep_reg))
#define  MDOMAIN_CAP_DDR_In2LineStep_in2_line_step_shift                         (3)
#define  MDOMAIN_CAP_DDR_In2LineStep_in2_line_step_mask                          (0xFFFFFFF8)
#define  MDOMAIN_CAP_DDR_In2LineStep_in2_line_step(data)                         (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_DDR_In2LineStep_get_in2_line_step(data)                     ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_DDR_In2BlkStep                                             0x18027250
#define  MDOMAIN_CAP_DDR_In2BlkStep_reg_addr                                     "0xB8027250"
#define  MDOMAIN_CAP_DDR_In2BlkStep_reg                                          0xB8027250
#define  MDOMAIN_CAP_DDR_In2BlkStep_inst_addr                                    "0x0010"
#define  set_MDOMAIN_CAP_DDR_In2BlkStep_reg(data)                                (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2BlkStep_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In2BlkStep_reg                                      (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2BlkStep_reg))
#define  MDOMAIN_CAP_DDR_In2BlkStep_in2_block_step_shift                         (3)
#define  MDOMAIN_CAP_DDR_In2BlkStep_in2_block_step_mask                          (0xFFFFFFF8)
#define  MDOMAIN_CAP_DDR_In2BlkStep_in2_block_step(data)                         (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_DDR_In2BlkStep_get_in2_block_step(data)                     ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_DDR_In2_2ndAddr                                            0x18027254
#define  MDOMAIN_CAP_DDR_In2_2ndAddr_reg_addr                                    "0xB8027254"
#define  MDOMAIN_CAP_DDR_In2_2ndAddr_reg                                         0xB8027254
#define  MDOMAIN_CAP_DDR_In2_2ndAddr_inst_addr                                   "0x0011"
#define  set_MDOMAIN_CAP_DDR_In2_2ndAddr_reg(data)                               (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2_2ndAddr_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In2_2ndAddr_reg                                     (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2_2ndAddr_reg))
#define  MDOMAIN_CAP_DDR_In2_2ndAddr_in2_sec_bl_shift                            (3)
#define  MDOMAIN_CAP_DDR_In2_2ndAddr_in2_sec_bl_mask                             (0xFFFFFFF8)
#define  MDOMAIN_CAP_DDR_In2_2ndAddr_in2_sec_bl(data)                            (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_DDR_In2_2ndAddr_get_in2_sec_bl(data)                        ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_DDR_In2_3rdAddr                                            0x18027258
#define  MDOMAIN_CAP_DDR_In2_3rdAddr_reg_addr                                    "0xB8027258"
#define  MDOMAIN_CAP_DDR_In2_3rdAddr_reg                                         0xB8027258
#define  MDOMAIN_CAP_DDR_In2_3rdAddr_inst_addr                                   "0x0012"
#define  set_MDOMAIN_CAP_DDR_In2_3rdAddr_reg(data)                               (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2_3rdAddr_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In2_3rdAddr_reg                                     (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2_3rdAddr_reg))
#define  MDOMAIN_CAP_DDR_In2_3rdAddr_in2_third_bl_shift                          (3)
#define  MDOMAIN_CAP_DDR_In2_3rdAddr_in2_third_bl_mask                           (0xFFFFFFF8)
#define  MDOMAIN_CAP_DDR_In2_3rdAddr_in2_third_bl(data)                          (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_DDR_In2_3rdAddr_get_in2_third_bl(data)                      ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_DDR_In2LineNum                                             0x1802725C
#define  MDOMAIN_CAP_DDR_In2LineNum_reg_addr                                     "0xB802725C"
#define  MDOMAIN_CAP_DDR_In2LineNum_reg                                          0xB802725C
#define  MDOMAIN_CAP_DDR_In2LineNum_inst_addr                                    "0x0013"
#define  set_MDOMAIN_CAP_DDR_In2LineNum_reg(data)                                (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2LineNum_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In2LineNum_reg                                      (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2LineNum_reg))
#define  MDOMAIN_CAP_DDR_In2LineNum_in2_zero_shift                               (17)
#define  MDOMAIN_CAP_DDR_In2LineNum_in2_frame_access_mode_shift                  (16)
#define  MDOMAIN_CAP_DDR_In2LineNum_in2_line_number_shift                        (0)
#define  MDOMAIN_CAP_DDR_In2LineNum_in2_zero_mask                                (0x00020000)
#define  MDOMAIN_CAP_DDR_In2LineNum_in2_frame_access_mode_mask                   (0x00010000)
#define  MDOMAIN_CAP_DDR_In2LineNum_in2_line_number_mask                         (0x00001FFF)
#define  MDOMAIN_CAP_DDR_In2LineNum_in2_zero(data)                               (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_DDR_In2LineNum_in2_frame_access_mode(data)                  (0x00010000&((data)<<16))
#define  MDOMAIN_CAP_DDR_In2LineNum_in2_line_number(data)                        (0x00001FFF&(data))
#define  MDOMAIN_CAP_DDR_In2LineNum_get_in2_zero(data)                           ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_DDR_In2LineNum_get_in2_frame_access_mode(data)              ((0x00010000&(data))>>16)
#define  MDOMAIN_CAP_DDR_In2LineNum_get_in2_line_number(data)                    (0x00001FFF&(data))

#define  MDOMAIN_CAP_DDR_In2Ctrl                                                0x18027260
#define  MDOMAIN_CAP_DDR_In2Ctrl_reg_addr                                        "0xB8027260"
#define  MDOMAIN_CAP_DDR_In2Ctrl_reg                                             0xB8027260
#define  MDOMAIN_CAP_DDR_In2Ctrl_inst_addr                                       "0x0014"
#define  set_MDOMAIN_CAP_DDR_In2Ctrl_reg(data)                                   (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2Ctrl_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In2Ctrl_reg                                         (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2Ctrl_reg))
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_disp2cap_distance_shift                     (28)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_sub_use_main_block_en_shift                 (27)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_bufnum_shift                                (24)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_unfreeze_wait_shift                         (21)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_auto_unfreeze_shift                         (20)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_freeze_option_shift                         (18)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_freeze_control_shift                        (17)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_bad_edit_suppression_shift                  (16)
#define  MDOMAIN_CAP_DDR_In2Ctrl_block_sel_to_flag_fifo_option_shift             (12)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_dout_align_shift                            (9)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_v_flip_3buf_en_shift                        (8)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_merge_enable_shift                          (7)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_double_enable_shift                         (6)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_block_free_shift                            (5)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_single_buffer_select_shift                  (2)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_freeze_enable_shift                         (1)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_en_vs_rst_shift                             (0)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_disp2cap_distance_mask                      (0x70000000)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_sub_use_main_block_en_mask                  (0x08000000)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_bufnum_mask                                 (0x07000000)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_unfreeze_wait_mask                          (0x00E00000)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_auto_unfreeze_mask                          (0x00100000)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_freeze_option_mask                          (0x00040000)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_freeze_control_mask                         (0x00020000)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_bad_edit_suppression_mask                   (0x00010000)
#define  MDOMAIN_CAP_DDR_In2Ctrl_block_sel_to_flag_fifo_option_mask              (0x00001000)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_dout_align_mask                             (0x00000200)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_v_flip_3buf_en_mask                         (0x00000100)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_merge_enable_mask                           (0x00000080)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_double_enable_mask                          (0x00000040)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_block_free_mask                             (0x00000020)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_single_buffer_select_mask                   (0x0000001C)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_freeze_enable_mask                          (0x00000002)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_en_vs_rst_mask                              (0x00000001)
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_disp2cap_distance(data)                     (0x70000000&((data)<<28))
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_sub_use_main_block_en(data)                 (0x08000000&((data)<<27))
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_bufnum(data)                                (0x07000000&((data)<<24))
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_unfreeze_wait(data)                         (0x00E00000&((data)<<21))
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_auto_unfreeze(data)                         (0x00100000&((data)<<20))
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_freeze_option(data)                         (0x00040000&((data)<<18))
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_freeze_control(data)                        (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_bad_edit_suppression(data)                  (0x00010000&((data)<<16))
#define  MDOMAIN_CAP_DDR_In2Ctrl_block_sel_to_flag_fifo_option(data)             (0x00001000&((data)<<12))
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_dout_align(data)                            (0x00000200&((data)<<9))
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_v_flip_3buf_en(data)                        (0x00000100&((data)<<8))
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_merge_enable(data)                          (0x00000080&((data)<<7))
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_double_enable(data)                         (0x00000040&((data)<<6))
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_block_free(data)                            (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_single_buffer_select(data)                  (0x0000001C&((data)<<2))
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_freeze_enable(data)                         (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_DDR_In2Ctrl_in2_en_vs_rst(data)                             (0x00000001&(data))
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_in2_disp2cap_distance(data)                 ((0x70000000&(data))>>28)
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_in2_sub_use_main_block_en(data)             ((0x08000000&(data))>>27)
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_in2_bufnum(data)                            ((0x07000000&(data))>>24)
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_in2_unfreeze_wait(data)                     ((0x00E00000&(data))>>21)
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_in2_auto_unfreeze(data)                     ((0x00100000&(data))>>20)
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_in2_freeze_option(data)                     ((0x00040000&(data))>>18)
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_in2_freeze_control(data)                    ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_in2_bad_edit_suppression(data)              ((0x00010000&(data))>>16)
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_block_sel_to_flag_fifo_option(data)         ((0x00001000&(data))>>12)
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_in2_dout_align(data)                        ((0x00000200&(data))>>9)
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_in2_v_flip_3buf_en(data)                    ((0x00000100&(data))>>8)
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_in2_merge_enable(data)                      ((0x00000080&(data))>>7)
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_in2_double_enable(data)                     ((0x00000040&(data))>>6)
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_in2_block_free(data)                        ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_in2_single_buffer_select(data)              ((0x0000001C&(data))>>2)
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_in2_freeze_enable(data)                     ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_DDR_In2Ctrl_get_in2_en_vs_rst(data)                         (0x00000001&(data))

#define  MDOMAIN_CAP_Cap_In2_enable                                             0x18027264
#define  MDOMAIN_CAP_Cap_In2_enable_reg_addr                                     "0xB8027264"
#define  MDOMAIN_CAP_Cap_In2_enable_reg                                          0xB8027264
#define  MDOMAIN_CAP_Cap_In2_enable_inst_addr                                    "0x0015"
#define  set_MDOMAIN_CAP_Cap_In2_enable_reg(data)                                (*((volatile unsigned int*)MDOMAIN_CAP_Cap_In2_enable_reg)=data)
#define  get_MDOMAIN_CAP_Cap_In2_enable_reg                                      (*((volatile unsigned int*)MDOMAIN_CAP_Cap_In2_enable_reg))
#define  MDOMAIN_CAP_Cap_In2_enable_in2_cap_enable_shift                         (0)
#define  MDOMAIN_CAP_Cap_In2_enable_in2_cap_enable_mask                          (0x00000001)
#define  MDOMAIN_CAP_Cap_In2_enable_in2_cap_enable(data)                         (0x00000001&(data))
#define  MDOMAIN_CAP_Cap_In2_enable_get_in2_cap_enable(data)                     (0x00000001&(data))

#define  MDOMAIN_CAP_DDR_In2Status                                              0x18027268
#define  MDOMAIN_CAP_DDR_In2Status_reg_addr                                      "0xB8027268"
#define  MDOMAIN_CAP_DDR_In2Status_reg                                           0xB8027268
#define  MDOMAIN_CAP_DDR_In2Status_inst_addr                                     "0x0016"
#define  set_MDOMAIN_CAP_DDR_In2Status_reg(data)                                 (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2Status_reg)=data)
#define  get_MDOMAIN_CAP_DDR_In2Status_reg                                       (*((volatile unsigned int*)MDOMAIN_CAP_DDR_In2Status_reg))
#define  MDOMAIN_CAP_DDR_In2Status_in2_cap_enable_real_shift                     (21)
#define  MDOMAIN_CAP_DDR_In2Status_in2_burst_ongo_shift                          (20)
#define  MDOMAIN_CAP_DDR_In2Status_in2_auto_unfreeze_2nd_shift                   (17)
#define  MDOMAIN_CAP_DDR_In2Status_in2_freeze_enable_2nd_shift                   (16)
#define  MDOMAIN_CAP_DDR_In2Status_in2_block_select_shift                        (6)
#define  MDOMAIN_CAP_DDR_In2Status_in2_freeze_ok_shift                           (5)
#define  MDOMAIN_CAP_DDR_In2Status_in2_field_polarity_error_shift                (4)
#define  MDOMAIN_CAP_DDR_In2Status_in2_field_polarity_status_shift               (0)
#define  MDOMAIN_CAP_DDR_In2Status_in2_cap_enable_real_mask                      (0x00200000)
#define  MDOMAIN_CAP_DDR_In2Status_in2_burst_ongo_mask                           (0x00100000)
#define  MDOMAIN_CAP_DDR_In2Status_in2_auto_unfreeze_2nd_mask                    (0x00020000)
#define  MDOMAIN_CAP_DDR_In2Status_in2_freeze_enable_2nd_mask                    (0x00010000)
#define  MDOMAIN_CAP_DDR_In2Status_in2_block_select_mask                         (0x000001C0)
#define  MDOMAIN_CAP_DDR_In2Status_in2_freeze_ok_mask                            (0x00000020)
#define  MDOMAIN_CAP_DDR_In2Status_in2_field_polarity_error_mask                 (0x00000010)
#define  MDOMAIN_CAP_DDR_In2Status_in2_field_polarity_status_mask                (0x0000000F)
#define  MDOMAIN_CAP_DDR_In2Status_in2_cap_enable_real(data)                     (0x00200000&((data)<<21))
#define  MDOMAIN_CAP_DDR_In2Status_in2_burst_ongo(data)                          (0x00100000&((data)<<20))
#define  MDOMAIN_CAP_DDR_In2Status_in2_auto_unfreeze_2nd(data)                   (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_DDR_In2Status_in2_freeze_enable_2nd(data)                   (0x00010000&((data)<<16))
#define  MDOMAIN_CAP_DDR_In2Status_in2_block_select(data)                        (0x000001C0&((data)<<6))
#define  MDOMAIN_CAP_DDR_In2Status_in2_freeze_ok(data)                           (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_DDR_In2Status_in2_field_polarity_error(data)                (0x00000010&((data)<<4))
#define  MDOMAIN_CAP_DDR_In2Status_in2_field_polarity_status(data)               (0x0000000F&(data))
#define  MDOMAIN_CAP_DDR_In2Status_get_in2_cap_enable_real(data)                 ((0x00200000&(data))>>21)
#define  MDOMAIN_CAP_DDR_In2Status_get_in2_burst_ongo(data)                      ((0x00100000&(data))>>20)
#define  MDOMAIN_CAP_DDR_In2Status_get_in2_auto_unfreeze_2nd(data)               ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_DDR_In2Status_get_in2_freeze_enable_2nd(data)               ((0x00010000&(data))>>16)
#define  MDOMAIN_CAP_DDR_In2Status_get_in2_block_select(data)                    ((0x000001C0&(data))>>6)
#define  MDOMAIN_CAP_DDR_In2Status_get_in2_freeze_ok(data)                       ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_DDR_In2Status_get_in2_field_polarity_error(data)            ((0x00000010&(data))>>4)
#define  MDOMAIN_CAP_DDR_In2Status_get_in2_field_polarity_status(data)           (0x0000000F&(data))

#define  MDOMAIN_CAP_cap_reg_doublbuffer                                        0x1802726C
#define  MDOMAIN_CAP_cap_reg_doublbuffer_reg_addr                                "0xB802726C"
#define  MDOMAIN_CAP_cap_reg_doublbuffer_reg                                     0xB802726C
#define  MDOMAIN_CAP_cap_reg_doublbuffer_inst_addr                               "0x0017"
#define  set_MDOMAIN_CAP_cap_reg_doublbuffer_reg(data)                           (*((volatile unsigned int*)MDOMAIN_CAP_cap_reg_doublbuffer_reg)=data)
#define  get_MDOMAIN_CAP_cap_reg_doublbuffer_reg                                 (*((volatile unsigned int*)MDOMAIN_CAP_cap_reg_doublbuffer_reg))
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap2_db_apply_shift                     (18)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap2_db_sel_shift                       (17)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap2_db_en_shift                        (16)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap1_db_apply_shift                     (2)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap1_db_sel_shift                       (1)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap1_db_en_shift                        (0)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap2_db_apply_mask                      (0x00040000)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap2_db_sel_mask                        (0x00020000)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap2_db_en_mask                         (0x00010000)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap1_db_apply_mask                      (0x00000004)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap1_db_sel_mask                        (0x00000002)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap1_db_en_mask                         (0x00000001)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap2_db_apply(data)                     (0x00040000&((data)<<18))
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap2_db_sel(data)                       (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap2_db_en(data)                        (0x00010000&((data)<<16))
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap1_db_apply(data)                     (0x00000004&((data)<<2))
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap1_db_sel(data)                       (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_cap_reg_doublbuffer_cap1_db_en(data)                        (0x00000001&(data))
#define  MDOMAIN_CAP_cap_reg_doublbuffer_get_cap2_db_apply(data)                 ((0x00040000&(data))>>18)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_get_cap2_db_sel(data)                   ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_get_cap2_db_en(data)                    ((0x00010000&(data))>>16)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_get_cap1_db_apply(data)                 ((0x00000004&(data))>>2)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_get_cap1_db_sel(data)                   ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_cap_reg_doublbuffer_get_cap1_db_en(data)                    (0x00000001&(data))

#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus                                         0x18027270
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_reg_addr                                 "0xB8027270"
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_reg                                      0xB8027270
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_inst_addr                                "0x0018"
#define  set_MDOMAIN_CAP_Cap_DDR_FIFOStatus_reg(data)                            (*((volatile unsigned int*)MDOMAIN_CAP_Cap_DDR_FIFOStatus_reg)=data)
#define  get_MDOMAIN_CAP_Cap_DDR_FIFOStatus_reg                                  (*((volatile unsigned int*)MDOMAIN_CAP_Cap_DDR_FIFOStatus_reg))
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_cap_first_wr_flag_shift              (21)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_cap_last_wr_flag_shift               (20)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_fifofull_shift                       (19)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_fifoempty_shift                      (18)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_fifouf_shift                         (17)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_fifoof_shift                         (16)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_cap_first_wr_flag_shift              (5)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_cap_last_wr_flag_shift               (4)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_fifofull_shift                       (3)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_fifoempty_shift                      (2)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_fifouf_shift                         (1)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_fifoof_shift                         (0)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_cap_first_wr_flag_mask               (0x00200000)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_cap_last_wr_flag_mask                (0x00100000)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_fifofull_mask                        (0x00080000)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_fifoempty_mask                       (0x00040000)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_fifouf_mask                          (0x00020000)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_fifoof_mask                          (0x00010000)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_cap_first_wr_flag_mask               (0x00000020)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_cap_last_wr_flag_mask                (0x00000010)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_fifofull_mask                        (0x00000008)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_fifoempty_mask                       (0x00000004)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_fifouf_mask                          (0x00000002)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_fifoof_mask                          (0x00000001)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_cap_first_wr_flag(data)              (0x00200000&((data)<<21))
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_cap_last_wr_flag(data)               (0x00100000&((data)<<20))
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_fifofull(data)                       (0x00080000&((data)<<19))
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_fifoempty(data)                      (0x00040000&((data)<<18))
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_fifouf(data)                         (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in1_fifoof(data)                         (0x00010000&((data)<<16))
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_cap_first_wr_flag(data)              (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_cap_last_wr_flag(data)               (0x00000010&((data)<<4))
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_fifofull(data)                       (0x00000008&((data)<<3))
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_fifoempty(data)                      (0x00000004&((data)<<2))
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_fifouf(data)                         (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_in2_fifoof(data)                         (0x00000001&(data))
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_get_in1_cap_first_wr_flag(data)          ((0x00200000&(data))>>21)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_get_in1_cap_last_wr_flag(data)           ((0x00100000&(data))>>20)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_get_in1_fifofull(data)                   ((0x00080000&(data))>>19)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_get_in1_fifoempty(data)                  ((0x00040000&(data))>>18)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_get_in1_fifouf(data)                     ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_get_in1_fifoof(data)                     ((0x00010000&(data))>>16)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_get_in2_cap_first_wr_flag(data)          ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_get_in2_cap_last_wr_flag(data)           ((0x00000010&(data))>>4)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_get_in2_fifofull(data)                   ((0x00000008&(data))>>3)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_get_in2_fifoempty(data)                  ((0x00000004&(data))>>2)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_get_in2_fifouf(data)                     ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_Cap_DDR_FIFOStatus_get_in2_fifoof(data)                     (0x00000001&(data))

#define  MDOMAIN_CAP_Cap_help_debug_status                                      0x18027274
#define  MDOMAIN_CAP_Cap_help_debug_status_reg_addr                              "0xB8027274"
#define  MDOMAIN_CAP_Cap_help_debug_status_reg                                   0xB8027274
#define  MDOMAIN_CAP_Cap_help_debug_status_inst_addr                             "0x0019"
#define  set_MDOMAIN_CAP_Cap_help_debug_status_reg(data)                         (*((volatile unsigned int*)MDOMAIN_CAP_Cap_help_debug_status_reg)=data)
#define  get_MDOMAIN_CAP_Cap_help_debug_status_reg                               (*((volatile unsigned int*)MDOMAIN_CAP_Cap_help_debug_status_reg))
#define  MDOMAIN_CAP_Cap_help_debug_status_in1_sub_over_size_shift               (25)
#define  MDOMAIN_CAP_Cap_help_debug_status_in1_sub_under_size_shift              (24)
#define  MDOMAIN_CAP_Cap_help_debug_status_in1_drop_shift                        (18)
#define  MDOMAIN_CAP_Cap_help_debug_status_in1_over_size_shift                   (17)
#define  MDOMAIN_CAP_Cap_help_debug_status_in1_under_size_shift                  (16)
#define  MDOMAIN_CAP_Cap_help_debug_status_in2_drop_shift                        (2)
#define  MDOMAIN_CAP_Cap_help_debug_status_in2_over_size_shift                   (1)
#define  MDOMAIN_CAP_Cap_help_debug_status_in2_under_size_shift                  (0)
#define  MDOMAIN_CAP_Cap_help_debug_status_in1_sub_over_size_mask                (0x02000000)
#define  MDOMAIN_CAP_Cap_help_debug_status_in1_sub_under_size_mask               (0x01000000)
#define  MDOMAIN_CAP_Cap_help_debug_status_in1_drop_mask                         (0x00040000)
#define  MDOMAIN_CAP_Cap_help_debug_status_in1_over_size_mask                    (0x00020000)
#define  MDOMAIN_CAP_Cap_help_debug_status_in1_under_size_mask                   (0x00010000)
#define  MDOMAIN_CAP_Cap_help_debug_status_in2_drop_mask                         (0x00000004)
#define  MDOMAIN_CAP_Cap_help_debug_status_in2_over_size_mask                    (0x00000002)
#define  MDOMAIN_CAP_Cap_help_debug_status_in2_under_size_mask                   (0x00000001)
#define  MDOMAIN_CAP_Cap_help_debug_status_in1_sub_over_size(data)               (0x02000000&((data)<<25))
#define  MDOMAIN_CAP_Cap_help_debug_status_in1_sub_under_size(data)              (0x01000000&((data)<<24))
#define  MDOMAIN_CAP_Cap_help_debug_status_in1_drop(data)                        (0x00040000&((data)<<18))
#define  MDOMAIN_CAP_Cap_help_debug_status_in1_over_size(data)                   (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_Cap_help_debug_status_in1_under_size(data)                  (0x00010000&((data)<<16))
#define  MDOMAIN_CAP_Cap_help_debug_status_in2_drop(data)                        (0x00000004&((data)<<2))
#define  MDOMAIN_CAP_Cap_help_debug_status_in2_over_size(data)                   (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_Cap_help_debug_status_in2_under_size(data)                  (0x00000001&(data))
#define  MDOMAIN_CAP_Cap_help_debug_status_get_in1_sub_over_size(data)           ((0x02000000&(data))>>25)
#define  MDOMAIN_CAP_Cap_help_debug_status_get_in1_sub_under_size(data)          ((0x01000000&(data))>>24)
#define  MDOMAIN_CAP_Cap_help_debug_status_get_in1_drop(data)                    ((0x00040000&(data))>>18)
#define  MDOMAIN_CAP_Cap_help_debug_status_get_in1_over_size(data)               ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_Cap_help_debug_status_get_in1_under_size(data)              ((0x00010000&(data))>>16)
#define  MDOMAIN_CAP_Cap_help_debug_status_get_in2_drop(data)                    ((0x00000004&(data))>>2)
#define  MDOMAIN_CAP_Cap_help_debug_status_get_in2_over_size(data)               ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_Cap_help_debug_status_get_in2_under_size(data)              (0x00000001&(data))

#define  MDOMAIN_CAP_CapMain_BoundaryAddr1                                      0x18027278
#define  MDOMAIN_CAP_CapMain_BoundaryAddr1_reg_addr                              "0xB8027278"
#define  MDOMAIN_CAP_CapMain_BoundaryAddr1_reg                                   0xB8027278
#define  MDOMAIN_CAP_CapMain_BoundaryAddr1_inst_addr                             "0x001A"
#define  set_MDOMAIN_CAP_CapMain_BoundaryAddr1_reg(data)                         (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr1_reg)=data)
#define  get_MDOMAIN_CAP_CapMain_BoundaryAddr1_reg                               (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr1_reg))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr1_in1_cap_downlimit_adr_shift           (3)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr1_in1_cap_downlimit_adr_mask            (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr1_in1_cap_downlimit_adr(data)           (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr1_get_in1_cap_downlimit_adr(data)       ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_CapMain_BoundaryAddr2                                      0x1802727C
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_reg_addr                              "0xB802727C"
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_reg                                   0xB802727C
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_inst_addr                             "0x001B"
#define  set_MDOMAIN_CAP_CapMain_BoundaryAddr2_reg(data)                         (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr2_reg)=data)
#define  get_MDOMAIN_CAP_CapMain_BoundaryAddr2_reg                               (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr2_reg))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_in1_cap_uplimit_adr_shift             (3)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_in1_cap_uplimit_adr_mask              (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_in1_cap_uplimit_adr(data)             (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_get_in1_cap_uplimit_adr(data)         ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_DI1Cap_WRRD_BoundaryAdd_Status                             0x18027280
#define  MDOMAIN_CAP_DI1Cap_WRRD_BoundaryAdd_Status_reg_addr                     "0xB8027280"
#define  MDOMAIN_CAP_DI1Cap_WRRD_BoundaryAdd_Status_reg                          0xB8027280
#define  MDOMAIN_CAP_DI1Cap_WRRD_BoundaryAdd_Status_inst_addr                    "0x001C"
#define  set_MDOMAIN_CAP_DI1Cap_WRRD_BoundaryAdd_Status_reg(data)                (*((volatile unsigned int*)MDOMAIN_CAP_DI1Cap_WRRD_BoundaryAdd_Status_reg)=data)
#define  get_MDOMAIN_CAP_DI1Cap_WRRD_BoundaryAdd_Status_reg                      (*((volatile unsigned int*)MDOMAIN_CAP_DI1Cap_WRRD_BoundaryAdd_Status_reg))
#define  MDOMAIN_CAP_DI1Cap_WRRD_BoundaryAdd_Status_in1_cap_downlimit_ov_shift   (1)
#define  MDOMAIN_CAP_DI1Cap_WRRD_BoundaryAdd_Status_in1_cap_uplimit_ov_shift     (0)
#define  MDOMAIN_CAP_DI1Cap_WRRD_BoundaryAdd_Status_in1_cap_downlimit_ov_mask    (0x00000002)
#define  MDOMAIN_CAP_DI1Cap_WRRD_BoundaryAdd_Status_in1_cap_uplimit_ov_mask      (0x00000001)
#define  MDOMAIN_CAP_DI1Cap_WRRD_BoundaryAdd_Status_in1_cap_downlimit_ov(data)   (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_DI1Cap_WRRD_BoundaryAdd_Status_in1_cap_uplimit_ov(data)     (0x00000001&(data))
#define  MDOMAIN_CAP_DI1Cap_WRRD_BoundaryAdd_Status_get_in1_cap_downlimit_ov(data) ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_DI1Cap_WRRD_BoundaryAdd_Status_get_in1_cap_uplimit_ov(data) (0x00000001&(data))

#define  MDOMAIN_CAP_CapSub_BoundaryAddr1                                       0x18027284
#define  MDOMAIN_CAP_CapSub_BoundaryAddr1_reg_addr                               "0xB8027284"
#define  MDOMAIN_CAP_CapSub_BoundaryAddr1_reg                                    0xB8027284
#define  MDOMAIN_CAP_CapSub_BoundaryAddr1_inst_addr                              "0x001D"
#define  set_MDOMAIN_CAP_CapSub_BoundaryAddr1_reg(data)                          (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr1_reg)=data)
#define  get_MDOMAIN_CAP_CapSub_BoundaryAddr1_reg                                (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr1_reg))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr1_in2_cap_downlimit_adr_shift            (3)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr1_in2_cap_downlimit_adr_mask             (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr1_in2_cap_downlimit_adr(data)            (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr1_get_in2_cap_downlimit_adr(data)        ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_CapSub_BoundaryAddr2                                       0x18027288
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_reg_addr                               "0xB8027288"
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_reg                                    0xB8027288
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_inst_addr                              "0x001E"
#define  set_MDOMAIN_CAP_CapSub_BoundaryAddr2_reg(data)                          (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr2_reg)=data)
#define  get_MDOMAIN_CAP_CapSub_BoundaryAddr2_reg                                (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr2_reg))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_in2_cap_uplimit_adr_shift              (3)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_in2_cap_uplimit_adr_mask               (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_in2_cap_uplimit_adr(data)              (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_get_in2_cap_uplimit_adr(data)          ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_DI2Cap_WRRD_BoundaryAdd_Status                             0x1802728C
#define  MDOMAIN_CAP_DI2Cap_WRRD_BoundaryAdd_Status_reg_addr                     "0xB802728C"
#define  MDOMAIN_CAP_DI2Cap_WRRD_BoundaryAdd_Status_reg                          0xB802728C
#define  MDOMAIN_CAP_DI2Cap_WRRD_BoundaryAdd_Status_inst_addr                    "0x001F"
#define  set_MDOMAIN_CAP_DI2Cap_WRRD_BoundaryAdd_Status_reg(data)                (*((volatile unsigned int*)MDOMAIN_CAP_DI2Cap_WRRD_BoundaryAdd_Status_reg)=data)
#define  get_MDOMAIN_CAP_DI2Cap_WRRD_BoundaryAdd_Status_reg                      (*((volatile unsigned int*)MDOMAIN_CAP_DI2Cap_WRRD_BoundaryAdd_Status_reg))
#define  MDOMAIN_CAP_DI2Cap_WRRD_BoundaryAdd_Status_in2_cap_downlimit_ov_shift   (1)
#define  MDOMAIN_CAP_DI2Cap_WRRD_BoundaryAdd_Status_in2_cap_uplimit_ov_shift     (0)
#define  MDOMAIN_CAP_DI2Cap_WRRD_BoundaryAdd_Status_in2_cap_downlimit_ov_mask    (0x00000002)
#define  MDOMAIN_CAP_DI2Cap_WRRD_BoundaryAdd_Status_in2_cap_uplimit_ov_mask      (0x00000001)
#define  MDOMAIN_CAP_DI2Cap_WRRD_BoundaryAdd_Status_in2_cap_downlimit_ov(data)   (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_DI2Cap_WRRD_BoundaryAdd_Status_in2_cap_uplimit_ov(data)     (0x00000001&(data))
#define  MDOMAIN_CAP_DI2Cap_WRRD_BoundaryAdd_Status_get_in2_cap_downlimit_ov(data) ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_DI2Cap_WRRD_BoundaryAdd_Status_get_in2_cap_uplimit_ov(data) (0x00000001&(data))

#define  MDOMAIN_CAP_Cap_IE_WD_CTRL                                             0x18027290
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_reg_addr                                     "0xB8027290"
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_reg                                          0xB8027290
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_inst_addr                                    "0x0020"
#define  set_MDOMAIN_CAP_Cap_IE_WD_CTRL_reg(data)                                (*((volatile unsigned int*)MDOMAIN_CAP_Cap_IE_WD_CTRL_reg)=data)
#define  get_MDOMAIN_CAP_Cap_IE_WD_CTRL_reg                                      (*((volatile unsigned int*)MDOMAIN_CAP_Cap_IE_WD_CTRL_reg))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_wd_to_main_and_sub_shift                     (31)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_dispm_wd_debug_mode_shift                    (29)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_dispm_wd_debug_target_shift                  (28)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_cap_first_wr_wde_shift                   (22)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_cap_first_wr_ie_shift                    (21)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_fifoerr_ie_shift                         (20)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_cap_last_wr_ie_shift                     (19)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_fifoerr_wde_shift                        (18)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_cap_last_wr_wde_shift                    (17)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_wd_to_main_shift                             (16)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_cap_first_wr_wde_shift                   (6)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_cap_first_wr_ie_shift                    (5)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_fifoerr_ie_shift                         (4)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_cap_last_wr_ie_shift                     (3)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_fifoerr_wde_shift                        (2)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_cap_last_wr_wde_shift                    (1)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_wd_to_sub_shift                              (0)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_wd_to_main_and_sub_mask                      (0x80000000)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_dispm_wd_debug_mode_mask                     (0x20000000)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_dispm_wd_debug_target_mask                   (0x10000000)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_cap_first_wr_wde_mask                    (0x00400000)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_cap_first_wr_ie_mask                     (0x00200000)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_fifoerr_ie_mask                          (0x00100000)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_cap_last_wr_ie_mask                      (0x00080000)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_fifoerr_wde_mask                         (0x00040000)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_cap_last_wr_wde_mask                     (0x00020000)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_wd_to_main_mask                              (0x00010000)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_cap_first_wr_wde_mask                    (0x00000040)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_cap_first_wr_ie_mask                     (0x00000020)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_fifoerr_ie_mask                          (0x00000010)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_cap_last_wr_ie_mask                      (0x00000008)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_fifoerr_wde_mask                         (0x00000004)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_cap_last_wr_wde_mask                     (0x00000002)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_wd_to_sub_mask                               (0x00000001)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_wd_to_main_and_sub(data)                     (0x80000000&((data)<<31))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_dispm_wd_debug_mode(data)                    (0x20000000&((data)<<29))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_dispm_wd_debug_target(data)                  (0x10000000&((data)<<28))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_cap_first_wr_wde(data)                   (0x00400000&((data)<<22))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_cap_first_wr_ie(data)                    (0x00200000&((data)<<21))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_fifoerr_ie(data)                         (0x00100000&((data)<<20))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_cap_last_wr_ie(data)                     (0x00080000&((data)<<19))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_fifoerr_wde(data)                        (0x00040000&((data)<<18))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in1_cap_last_wr_wde(data)                    (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_wd_to_main(data)                             (0x00010000&((data)<<16))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_cap_first_wr_wde(data)                   (0x00000040&((data)<<6))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_cap_first_wr_ie(data)                    (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_fifoerr_ie(data)                         (0x00000010&((data)<<4))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_cap_last_wr_ie(data)                     (0x00000008&((data)<<3))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_fifoerr_wde(data)                        (0x00000004&((data)<<2))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_in2_cap_last_wr_wde(data)                    (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_wd_to_sub(data)                              (0x00000001&(data))
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_wd_to_main_and_sub(data)                 ((0x80000000&(data))>>31)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_dispm_wd_debug_mode(data)                ((0x20000000&(data))>>29)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_dispm_wd_debug_target(data)              ((0x10000000&(data))>>28)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_in1_cap_first_wr_wde(data)               ((0x00400000&(data))>>22)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_in1_cap_first_wr_ie(data)                ((0x00200000&(data))>>21)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_in1_fifoerr_ie(data)                     ((0x00100000&(data))>>20)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_in1_cap_last_wr_ie(data)                 ((0x00080000&(data))>>19)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_in1_fifoerr_wde(data)                    ((0x00040000&(data))>>18)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_in1_cap_last_wr_wde(data)                ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_wd_to_main(data)                         ((0x00010000&(data))>>16)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_in2_cap_first_wr_wde(data)               ((0x00000040&(data))>>6)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_in2_cap_first_wr_ie(data)                ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_in2_fifoerr_ie(data)                     ((0x00000010&(data))>>4)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_in2_cap_last_wr_ie(data)                 ((0x00000008&(data))>>3)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_in2_fifoerr_wde(data)                    ((0x00000004&(data))>>2)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_in2_cap_last_wr_wde(data)                ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_Cap_IE_WD_CTRL_get_wd_to_sub(data)                          (0x00000001&(data))

#define  MDOMAIN_CAP_CapMain_SBS_VSD_CAP_CTRL                                   0x18027294
#define  MDOMAIN_CAP_CapMain_SBS_VSD_CAP_CTRL_reg_addr                           "0xB8027294"
#define  MDOMAIN_CAP_CapMain_SBS_VSD_CAP_CTRL_reg                                0xB8027294
#define  MDOMAIN_CAP_CapMain_SBS_VSD_CAP_CTRL_inst_addr                          "0x0021"
#define  set_MDOMAIN_CAP_CapMain_SBS_VSD_CAP_CTRL_reg(data)                      (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_SBS_VSD_CAP_CTRL_reg)=data)
#define  get_MDOMAIN_CAP_CapMain_SBS_VSD_CAP_CTRL_reg                            (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_SBS_VSD_CAP_CTRL_reg))
#define  MDOMAIN_CAP_CapMain_SBS_VSD_CAP_CTRL_in1_sbs_vsd_en_shift               (0)
#define  MDOMAIN_CAP_CapMain_SBS_VSD_CAP_CTRL_in1_sbs_vsd_en_mask                (0x00000001)
#define  MDOMAIN_CAP_CapMain_SBS_VSD_CAP_CTRL_in1_sbs_vsd_en(data)               (0x00000001&(data))
#define  MDOMAIN_CAP_CapMain_SBS_VSD_CAP_CTRL_get_in1_sbs_vsd_en(data)           (0x00000001&(data))

#define  MDOMAIN_CAP_CapMain_SBS_VSD_CAP_OFFSET                                 0x18027298
#define  MDOMAIN_CAP_CapMain_SBS_VSD_CAP_OFFSET_reg_addr                         "0xB8027298"
#define  MDOMAIN_CAP_CapMain_SBS_VSD_CAP_OFFSET_reg                              0xB8027298
#define  MDOMAIN_CAP_CapMain_SBS_VSD_CAP_OFFSET_inst_addr                        "0x0022"
#define  set_MDOMAIN_CAP_CapMain_SBS_VSD_CAP_OFFSET_reg(data)                    (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_SBS_VSD_CAP_OFFSET_reg)=data)
#define  get_MDOMAIN_CAP_CapMain_SBS_VSD_CAP_OFFSET_reg                          (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_SBS_VSD_CAP_OFFSET_reg))
#define  MDOMAIN_CAP_CapMain_SBS_VSD_CAP_OFFSET_in1_lr_offset_shift              (3)
#define  MDOMAIN_CAP_CapMain_SBS_VSD_CAP_OFFSET_in1_lr_offset_mask               (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapMain_SBS_VSD_CAP_OFFSET_in1_lr_offset(data)              (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapMain_SBS_VSD_CAP_OFFSET_get_in1_lr_offset(data)          ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_DISPM_CRC_CTRL                                             0x180272A0
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_reg_addr                                     "0xB80272A0"
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_reg                                          0xB80272A0
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_inst_addr                                    "0x0023"
#define  set_MDOMAIN_CAP_DISPM_CRC_CTRL_reg(data)                                (*((volatile unsigned int*)MDOMAIN_CAP_DISPM_CRC_CTRL_reg)=data)
#define  get_MDOMAIN_CAP_DISPM_CRC_CTRL_reg                                      (*((volatile unsigned int*)MDOMAIN_CAP_DISPM_CRC_CTRL_reg))
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_crc_comp_error_int_shift                     (14)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_dynamic_crc_cmp_en_shift                     (13)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_crc_bit_sel_shift                            (10)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_disp_crc_3d_en_shift                         (7)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_disp_crc_conti_shift                         (5)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_disp_crc_start_shift                         (4)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_cap_crc_3d_en_shift                          (3)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_cap_crc_conti_shift                          (1)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_cap_crc_start_shift                          (0)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_crc_comp_error_int_mask                      (0x00004000)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_dynamic_crc_cmp_en_mask                      (0x00002000)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_crc_bit_sel_mask                             (0x00000C00)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_disp_crc_3d_en_mask                          (0x00000080)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_disp_crc_conti_mask                          (0x00000020)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_disp_crc_start_mask                          (0x00000010)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_cap_crc_3d_en_mask                           (0x00000008)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_cap_crc_conti_mask                           (0x00000002)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_cap_crc_start_mask                           (0x00000001)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_crc_comp_error_int(data)                     (0x00004000&((data)<<14))
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_dynamic_crc_cmp_en(data)                     (0x00002000&((data)<<13))
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_crc_bit_sel(data)                            (0x00000C00&((data)<<10))
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_disp_crc_3d_en(data)                         (0x00000080&((data)<<7))
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_disp_crc_conti(data)                         (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_disp_crc_start(data)                         (0x00000010&((data)<<4))
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_cap_crc_3d_en(data)                          (0x00000008&((data)<<3))
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_cap_crc_conti(data)                          (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_cap_crc_start(data)                          (0x00000001&(data))
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_get_crc_comp_error_int(data)                 ((0x00004000&(data))>>14)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_get_dynamic_crc_cmp_en(data)                 ((0x00002000&(data))>>13)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_get_crc_bit_sel(data)                        ((0x00000C00&(data))>>10)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_get_disp_crc_3d_en(data)                     ((0x00000080&(data))>>7)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_get_disp_crc_conti(data)                     ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_get_disp_crc_start(data)                     ((0x00000010&(data))>>4)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_get_cap_crc_3d_en(data)                      ((0x00000008&(data))>>3)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_get_cap_crc_conti(data)                      ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_DISPM_CRC_CTRL_get_cap_crc_start(data)                      (0x00000001&(data))

#define  MDOMAIN_CAP_DISPM_CRC_STATUS                                           0x180272A4
#define  MDOMAIN_CAP_DISPM_CRC_STATUS_reg_addr                                   "0xB80272A4"
#define  MDOMAIN_CAP_DISPM_CRC_STATUS_reg                                        0xB80272A4
#define  MDOMAIN_CAP_DISPM_CRC_STATUS_inst_addr                                  "0x0024"
#define  set_MDOMAIN_CAP_DISPM_CRC_STATUS_reg(data)                              (*((volatile unsigned int*)MDOMAIN_CAP_DISPM_CRC_STATUS_reg)=data)
#define  get_MDOMAIN_CAP_DISPM_CRC_STATUS_reg                                    (*((volatile unsigned int*)MDOMAIN_CAP_DISPM_CRC_STATUS_reg))
#define  MDOMAIN_CAP_DISPM_CRC_STATUS_match_buffer_shift                         (16)
#define  MDOMAIN_CAP_DISPM_CRC_STATUS_crc_comp_error_flag_shift                  (0)
#define  MDOMAIN_CAP_DISPM_CRC_STATUS_match_buffer_mask                          (0x00030000)
#define  MDOMAIN_CAP_DISPM_CRC_STATUS_crc_comp_error_flag_mask                   (0x00000001)
#define  MDOMAIN_CAP_DISPM_CRC_STATUS_match_buffer(data)                         (0x00030000&((data)<<16))
#define  MDOMAIN_CAP_DISPM_CRC_STATUS_crc_comp_error_flag(data)                  (0x00000001&(data))
#define  MDOMAIN_CAP_DISPM_CRC_STATUS_get_match_buffer(data)                     ((0x00030000&(data))>>16)
#define  MDOMAIN_CAP_DISPM_CRC_STATUS_get_crc_comp_error_flag(data)              (0x00000001&(data))

#define  MDOMAIN_CAP_CRC_mask                                                   0x180272A8
#define  MDOMAIN_CAP_CRC_mask_reg_addr                                           "0xB80272A8"
#define  MDOMAIN_CAP_CRC_mask_reg                                                0xB80272A8
#define  MDOMAIN_CAP_CRC_mask_inst_addr                                          "0x0025"
#define  set_MDOMAIN_CAP_CRC_mask_reg(data)                                      (*((volatile unsigned int*)MDOMAIN_CAP_CRC_mask_reg)=data)
#define  get_MDOMAIN_CAP_CRC_mask_reg                                            (*((volatile unsigned int*)MDOMAIN_CAP_CRC_mask_reg))
#define  MDOMAIN_CAP_CRC_mask_crc_mask_shift                                     (0)
#define  MDOMAIN_CAP_CRC_mask_crc_mask_mask                                      (0xFFFFFFFF)
#define  MDOMAIN_CAP_CRC_mask_crc_mask(data)                                     (0xFFFFFFFF&(data))
#define  MDOMAIN_CAP_CRC_mask_get_crc_mask(data)                                 (0xFFFFFFFF&(data))

#define  MDOMAIN_CAP_Cap_L_CRC_Result                                           0x180272AC
#define  MDOMAIN_CAP_Cap_L_CRC_Result_reg_addr                                   "0xB80272AC"
#define  MDOMAIN_CAP_Cap_L_CRC_Result_reg                                        0xB80272AC
#define  MDOMAIN_CAP_Cap_L_CRC_Result_inst_addr                                  "0x0026"
#define  set_MDOMAIN_CAP_Cap_L_CRC_Result_reg(data)                              (*((volatile unsigned int*)MDOMAIN_CAP_Cap_L_CRC_Result_reg)=data)
#define  get_MDOMAIN_CAP_Cap_L_CRC_Result_reg                                    (*((volatile unsigned int*)MDOMAIN_CAP_Cap_L_CRC_Result_reg))
#define  MDOMAIN_CAP_Cap_L_CRC_Result_cap_l_crc_result_shift                     (0)
#define  MDOMAIN_CAP_Cap_L_CRC_Result_cap_l_crc_result_mask                      (0xFFFFFFFF)
#define  MDOMAIN_CAP_Cap_L_CRC_Result_cap_l_crc_result(data)                     (0xFFFFFFFF&(data))
#define  MDOMAIN_CAP_Cap_L_CRC_Result_get_cap_l_crc_result(data)                 (0xFFFFFFFF&(data))

#define  MDOMAIN_CAP_Cap_R_CRC_Result                                           0x180272B0
#define  MDOMAIN_CAP_Cap_R_CRC_Result_reg_addr                                   "0xB80272B0"
#define  MDOMAIN_CAP_Cap_R_CRC_Result_reg                                        0xB80272B0
#define  MDOMAIN_CAP_Cap_R_CRC_Result_inst_addr                                  "0x0027"
#define  set_MDOMAIN_CAP_Cap_R_CRC_Result_reg(data)                              (*((volatile unsigned int*)MDOMAIN_CAP_Cap_R_CRC_Result_reg)=data)
#define  get_MDOMAIN_CAP_Cap_R_CRC_Result_reg                                    (*((volatile unsigned int*)MDOMAIN_CAP_Cap_R_CRC_Result_reg))
#define  MDOMAIN_CAP_Cap_R_CRC_Result_cap_r_crc_result_shift                     (0)
#define  MDOMAIN_CAP_Cap_R_CRC_Result_cap_r_crc_result_mask                      (0xFFFFFFFF)
#define  MDOMAIN_CAP_Cap_R_CRC_Result_cap_r_crc_result(data)                     (0xFFFFFFFF&(data))
#define  MDOMAIN_CAP_Cap_R_CRC_Result_get_cap_r_crc_result(data)                 (0xFFFFFFFF&(data))

#define  MDOMAIN_CAP_Disp_L_CRC_Result                                          0x180272B4
#define  MDOMAIN_CAP_Disp_L_CRC_Result_reg_addr                                  "0xB80272B4"
#define  MDOMAIN_CAP_Disp_L_CRC_Result_reg                                       0xB80272B4
#define  MDOMAIN_CAP_Disp_L_CRC_Result_inst_addr                                 "0x0028"
#define  set_MDOMAIN_CAP_Disp_L_CRC_Result_reg(data)                             (*((volatile unsigned int*)MDOMAIN_CAP_Disp_L_CRC_Result_reg)=data)
#define  get_MDOMAIN_CAP_Disp_L_CRC_Result_reg                                   (*((volatile unsigned int*)MDOMAIN_CAP_Disp_L_CRC_Result_reg))
#define  MDOMAIN_CAP_Disp_L_CRC_Result_disp_l_crc_result_shift                   (0)
#define  MDOMAIN_CAP_Disp_L_CRC_Result_disp_l_crc_result_mask                    (0xFFFFFFFF)
#define  MDOMAIN_CAP_Disp_L_CRC_Result_disp_l_crc_result(data)                   (0xFFFFFFFF&(data))
#define  MDOMAIN_CAP_Disp_L_CRC_Result_get_disp_l_crc_result(data)               (0xFFFFFFFF&(data))

#define  MDOMAIN_CAP_Display_R_CRC_Result                                       0x180272B8
#define  MDOMAIN_CAP_Display_R_CRC_Result_reg_addr                               "0xB80272B8"
#define  MDOMAIN_CAP_Display_R_CRC_Result_reg                                    0xB80272B8
#define  MDOMAIN_CAP_Display_R_CRC_Result_inst_addr                              "0x0029"
#define  set_MDOMAIN_CAP_Display_R_CRC_Result_reg(data)                          (*((volatile unsigned int*)MDOMAIN_CAP_Display_R_CRC_Result_reg)=data)
#define  get_MDOMAIN_CAP_Display_R_CRC_Result_reg                                (*((volatile unsigned int*)MDOMAIN_CAP_Display_R_CRC_Result_reg))
#define  MDOMAIN_CAP_Display_R_CRC_Result_disp_r_crc_result_shift                (0)
#define  MDOMAIN_CAP_Display_R_CRC_Result_disp_r_crc_result_mask                 (0xFFFFFFFF)
#define  MDOMAIN_CAP_Display_R_CRC_Result_disp_r_crc_result(data)                (0xFFFFFFFF&(data))
#define  MDOMAIN_CAP_Display_R_CRC_Result_get_disp_r_crc_result(data)            (0xFFFFFFFF&(data))

#define  MDOMAIN_CAP_CAP_DMA_rate_CTRL                                          0x180272C0
#define  MDOMAIN_CAP_CAP_DMA_rate_CTRL_reg_addr                                  "0xB80272C0"
#define  MDOMAIN_CAP_CAP_DMA_rate_CTRL_reg                                       0xB80272C0
#define  MDOMAIN_CAP_CAP_DMA_rate_CTRL_inst_addr                                 "0x002A"
#define  set_MDOMAIN_CAP_CAP_DMA_rate_CTRL_reg(data)                             (*((volatile unsigned int*)MDOMAIN_CAP_CAP_DMA_rate_CTRL_reg)=data)
#define  get_MDOMAIN_CAP_CAP_DMA_rate_CTRL_reg                                   (*((volatile unsigned int*)MDOMAIN_CAP_CAP_DMA_rate_CTRL_reg))
#define  MDOMAIN_CAP_CAP_DMA_rate_CTRL_in1_rate_en_shift                         (0)
#define  MDOMAIN_CAP_CAP_DMA_rate_CTRL_in1_rate_en_mask                          (0x00000001)
#define  MDOMAIN_CAP_CAP_DMA_rate_CTRL_in1_rate_en(data)                         (0x00000001&(data))
#define  MDOMAIN_CAP_CAP_DMA_rate_CTRL_get_in1_rate_en(data)                     (0x00000001&(data))

#define  MDOMAIN_CAP_Capture_rate                                               0x180272C4
#define  MDOMAIN_CAP_Capture_rate_reg_addr                                       "0xB80272C4"
#define  MDOMAIN_CAP_Capture_rate_reg                                            0xB80272C4
#define  MDOMAIN_CAP_Capture_rate_inst_addr                                      "0x002B"
#define  set_MDOMAIN_CAP_Capture_rate_reg(data)                                  (*((volatile unsigned int*)MDOMAIN_CAP_Capture_rate_reg)=data)
#define  get_MDOMAIN_CAP_Capture_rate_reg                                        (*((volatile unsigned int*)MDOMAIN_CAP_Capture_rate_reg))
#define  MDOMAIN_CAP_Capture_rate_in1_rate_shift                                 (0)
#define  MDOMAIN_CAP_Capture_rate_in1_rate_mask                                  (0xFFFFFFFF)
#define  MDOMAIN_CAP_Capture_rate_in1_rate(data)                                 (0xFFFFFFFF&(data))
#define  MDOMAIN_CAP_Capture_rate_get_in1_rate(data)                             (0xFFFFFFFF&(data))

#define  MDOMAIN_CAP_Capture1_byte_swap                                         0x180272C8
#define  MDOMAIN_CAP_Capture1_byte_swap_reg_addr                                 "0xB80272C8"
#define  MDOMAIN_CAP_Capture1_byte_swap_reg                                      0xB80272C8
#define  MDOMAIN_CAP_Capture1_byte_swap_inst_addr                                "0x002C"
#define  set_MDOMAIN_CAP_Capture1_byte_swap_reg(data)                            (*((volatile unsigned int*)MDOMAIN_CAP_Capture1_byte_swap_reg)=data)
#define  get_MDOMAIN_CAP_Capture1_byte_swap_reg                                  (*((volatile unsigned int*)MDOMAIN_CAP_Capture1_byte_swap_reg))
#define  MDOMAIN_CAP_Capture1_byte_swap_in1_8byte_swap_shift                     (3)
#define  MDOMAIN_CAP_Capture1_byte_swap_in1_4byte_swap_shift                     (2)
#define  MDOMAIN_CAP_Capture1_byte_swap_in1_2byte_swap_shift                     (1)
#define  MDOMAIN_CAP_Capture1_byte_swap_in1_1byte_swap_shift                     (0)
#define  MDOMAIN_CAP_Capture1_byte_swap_in1_8byte_swap_mask                      (0x00000008)
#define  MDOMAIN_CAP_Capture1_byte_swap_in1_4byte_swap_mask                      (0x00000004)
#define  MDOMAIN_CAP_Capture1_byte_swap_in1_2byte_swap_mask                      (0x00000002)
#define  MDOMAIN_CAP_Capture1_byte_swap_in1_1byte_swap_mask                      (0x00000001)
#define  MDOMAIN_CAP_Capture1_byte_swap_in1_8byte_swap(data)                     (0x00000008&((data)<<3))
#define  MDOMAIN_CAP_Capture1_byte_swap_in1_4byte_swap(data)                     (0x00000004&((data)<<2))
#define  MDOMAIN_CAP_Capture1_byte_swap_in1_2byte_swap(data)                     (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_Capture1_byte_swap_in1_1byte_swap(data)                     (0x00000001&(data))
#define  MDOMAIN_CAP_Capture1_byte_swap_get_in1_8byte_swap(data)                 ((0x00000008&(data))>>3)
#define  MDOMAIN_CAP_Capture1_byte_swap_get_in1_4byte_swap(data)                 ((0x00000004&(data))>>2)
#define  MDOMAIN_CAP_Capture1_byte_swap_get_in1_2byte_swap(data)                 ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_Capture1_byte_swap_get_in1_1byte_swap(data)                 (0x00000001&(data))

#define  MDOMAIN_CAP_Capture2_byte_swap                                         0x180272F8
#define  MDOMAIN_CAP_Capture2_byte_swap_reg_addr                                 "0xB80272F8"
#define  MDOMAIN_CAP_Capture2_byte_swap_reg                                      0xB80272F8
#define  MDOMAIN_CAP_Capture2_byte_swap_inst_addr                                "0x002D"
#define  set_MDOMAIN_CAP_Capture2_byte_swap_reg(data)                            (*((volatile unsigned int*)MDOMAIN_CAP_Capture2_byte_swap_reg)=data)
#define  get_MDOMAIN_CAP_Capture2_byte_swap_reg                                  (*((volatile unsigned int*)MDOMAIN_CAP_Capture2_byte_swap_reg))
#define  MDOMAIN_CAP_Capture2_byte_swap_in2_8byte_swap_shift                     (3)
#define  MDOMAIN_CAP_Capture2_byte_swap_in2_4byte_swap_shift                     (2)
#define  MDOMAIN_CAP_Capture2_byte_swap_in2_2byte_swap_shift                     (1)
#define  MDOMAIN_CAP_Capture2_byte_swap_in2_1byte_swap_shift                     (0)
#define  MDOMAIN_CAP_Capture2_byte_swap_in2_8byte_swap_mask                      (0x00000008)
#define  MDOMAIN_CAP_Capture2_byte_swap_in2_4byte_swap_mask                      (0x00000004)
#define  MDOMAIN_CAP_Capture2_byte_swap_in2_2byte_swap_mask                      (0x00000002)
#define  MDOMAIN_CAP_Capture2_byte_swap_in2_1byte_swap_mask                      (0x00000001)
#define  MDOMAIN_CAP_Capture2_byte_swap_in2_8byte_swap(data)                     (0x00000008&((data)<<3))
#define  MDOMAIN_CAP_Capture2_byte_swap_in2_4byte_swap(data)                     (0x00000004&((data)<<2))
#define  MDOMAIN_CAP_Capture2_byte_swap_in2_2byte_swap(data)                     (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_Capture2_byte_swap_in2_1byte_swap(data)                     (0x00000001&(data))
#define  MDOMAIN_CAP_Capture2_byte_swap_get_in2_8byte_swap(data)                 ((0x00000008&(data))>>3)
#define  MDOMAIN_CAP_Capture2_byte_swap_get_in2_4byte_swap(data)                 ((0x00000004&(data))>>2)
#define  MDOMAIN_CAP_Capture2_byte_swap_get_in2_2byte_swap(data)                 ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_Capture2_byte_swap_get_in2_1byte_swap(data)                 (0x00000001&(data))

#define  MDOMAIN_CAP_Main_SDNR_cxxto64                                          0x180272CC
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_reg_addr                                  "0xB80272CC"
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_reg                                       0xB80272CC
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_inst_addr                                 "0x002E"
#define  set_MDOMAIN_CAP_Main_SDNR_cxxto64_reg(data)                             (*((volatile unsigned int*)MDOMAIN_CAP_Main_SDNR_cxxto64_reg)=data)
#define  get_MDOMAIN_CAP_Main_SDNR_cxxto64_reg                                   (*((volatile unsigned int*)MDOMAIN_CAP_Main_SDNR_cxxto64_reg))
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_out_bit_shift                             (28)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_sort_fmt_shift                            (27)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_rgb565_en_shift                           (26)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_rgb_to_argb_en_shift                      (25)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_argb_swap_shift                           (24)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_argb_dummy_data_shift                     (16)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_out_bit_mask                              (0x10000000)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_sort_fmt_mask                             (0x08000000)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_rgb565_en_mask                            (0x04000000)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_rgb_to_argb_en_mask                       (0x02000000)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_argb_swap_mask                            (0x01000000)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_argb_dummy_data_mask                      (0x00FF0000)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_out_bit(data)                             (0x10000000&((data)<<28))
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_sort_fmt(data)                            (0x08000000&((data)<<27))
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_rgb565_en(data)                           (0x04000000&((data)<<26))
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_rgb_to_argb_en(data)                      (0x02000000&((data)<<25))
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_argb_swap(data)                           (0x01000000&((data)<<24))
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_argb_dummy_data(data)                     (0x00FF0000&((data)<<16))
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_get_out_bit(data)                         ((0x10000000&(data))>>28)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_get_sort_fmt(data)                        ((0x08000000&(data))>>27)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_get_rgb565_en(data)                       ((0x04000000&(data))>>26)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_get_rgb_to_argb_en(data)                  ((0x02000000&(data))>>25)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_get_argb_swap(data)                       ((0x01000000&(data))>>24)
#define  MDOMAIN_CAP_Main_SDNR_cxxto64_get_argb_dummy_data(data)                 ((0x00FF0000&(data))>>16)

#define  MDOMAIN_CAP_Sub_SDNR_cxxto64                                           0x180272D0
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_reg_addr                                   "0xB80272D0"
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_reg                                        0xB80272D0
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_inst_addr                                  "0x002F"
#define  set_MDOMAIN_CAP_Sub_SDNR_cxxto64_reg(data)                              (*((volatile unsigned int*)MDOMAIN_CAP_Sub_SDNR_cxxto64_reg)=data)
#define  get_MDOMAIN_CAP_Sub_SDNR_cxxto64_reg                                    (*((volatile unsigned int*)MDOMAIN_CAP_Sub_SDNR_cxxto64_reg))
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_out_bit_shift                          (28)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_sort_fmt_shift                         (27)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_rgb565_en_shift                        (26)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_rgb_to_argb_en_shift                   (25)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_argb_swap_shift                        (24)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_argb_dummy_data_shift                  (16)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_out_bit_mask                           (0x10000000)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_sort_fmt_mask                          (0x08000000)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_rgb565_en_mask                         (0x04000000)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_rgb_to_argb_en_mask                    (0x02000000)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_argb_swap_mask                         (0x01000000)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_argb_dummy_data_mask                   (0x00FF0000)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_out_bit(data)                          (0x10000000&((data)<<28))
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_sort_fmt(data)                         (0x08000000&((data)<<27))
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_rgb565_en(data)                        (0x04000000&((data)<<26))
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_rgb_to_argb_en(data)                   (0x02000000&((data)<<25))
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_argb_swap(data)                        (0x01000000&((data)<<24))
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_sub_argb_dummy_data(data)                  (0x00FF0000&((data)<<16))
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_get_sub_out_bit(data)                      ((0x10000000&(data))>>28)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_get_sub_sort_fmt(data)                     ((0x08000000&(data))>>27)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_get_sub_rgb565_en(data)                    ((0x04000000&(data))>>26)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_get_sub_rgb_to_argb_en(data)               ((0x02000000&(data))>>25)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_get_sub_argb_swap(data)                    ((0x01000000&(data))>>24)
#define  MDOMAIN_CAP_Sub_SDNR_cxxto64_get_sub_argb_dummy_data(data)              ((0x00FF0000&(data))>>16)

#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL                                     0x180272D4
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_reg_addr                             "0xB80272D4"
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_reg                                  0xB80272D4
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_inst_addr                            "0x0030"
#define  set_MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_reg(data)                        (*((volatile unsigned int*)MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_reg)=data)
#define  get_MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_reg                              (*((volatile unsigned int*)MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_reg))
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_wd_fsync_ovf_en_shift                (20)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_wd_fsync_udf_en_shift                (19)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_wd_ibuff_ovf_en_shift                (18)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_wd_ibuff_to_main_shift               (17)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_wd_ibuff_to_sub_shift                (16)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_irq_fsync_ovf_en_shift               (10)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_irq_fsync_udf_en_shift               (9)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_irq_ibuff_ovf_en_shift               (8)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_wd_fsync_ovf_en_mask                 (0x00100000)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_wd_fsync_udf_en_mask                 (0x00080000)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_wd_ibuff_ovf_en_mask                 (0x00040000)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_wd_ibuff_to_main_mask                (0x00020000)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_wd_ibuff_to_sub_mask                 (0x00010000)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_irq_fsync_ovf_en_mask                (0x00000400)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_irq_fsync_udf_en_mask                (0x00000200)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_irq_ibuff_ovf_en_mask                (0x00000100)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_wd_fsync_ovf_en(data)                (0x00100000&((data)<<20))
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_wd_fsync_udf_en(data)                (0x00080000&((data)<<19))
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_wd_ibuff_ovf_en(data)                (0x00040000&((data)<<18))
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_wd_ibuff_to_main(data)               (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_wd_ibuff_to_sub(data)                (0x00010000&((data)<<16))
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_irq_fsync_ovf_en(data)               (0x00000400&((data)<<10))
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_irq_fsync_udf_en(data)               (0x00000200&((data)<<9))
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_irq_ibuff_ovf_en(data)               (0x00000100&((data)<<8))
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_get_wd_fsync_ovf_en(data)            ((0x00100000&(data))>>20)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_get_wd_fsync_udf_en(data)            ((0x00080000&(data))>>19)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_get_wd_ibuff_ovf_en(data)            ((0x00040000&(data))>>18)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_get_wd_ibuff_to_main(data)           ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_get_wd_ibuff_to_sub(data)            ((0x00010000&(data))>>16)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_get_irq_fsync_ovf_en(data)           ((0x00000400&(data))>>10)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_get_irq_fsync_udf_en(data)           ((0x00000200&(data))>>9)
#define  MDOMAIN_CAP_ICH1_IBUFF_STATUS_CTRL_get_irq_ibuff_ovf_en(data)           ((0x00000100&(data))>>8)

#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL                                     0x180272D8
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_reg_addr                             "0xB80272D8"
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_reg                                  0xB80272D8
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_inst_addr                            "0x0031"
#define  set_MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_reg(data)                        (*((volatile unsigned int*)MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_reg)=data)
#define  get_MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_reg                              (*((volatile unsigned int*)MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_reg))
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_wd_fsync_ovf_en_sub_shift            (20)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_wd_fsync_udf_en_sub_shift            (19)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_wd_ibuff_ovf_en_sub_shift            (18)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_wd_ibuff_to_main_sub_shift           (17)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_wd_ibuff_to_sub_sub_shift            (16)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_irq_fsync_ovf_en_sub_shift           (10)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_irq_fsync_udf_en_sub_shift           (9)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_irq_ibuff_ovf_en_sub_shift           (8)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_wd_fsync_ovf_en_sub_mask             (0x00100000)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_wd_fsync_udf_en_sub_mask             (0x00080000)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_wd_ibuff_ovf_en_sub_mask             (0x00040000)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_wd_ibuff_to_main_sub_mask            (0x00020000)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_wd_ibuff_to_sub_sub_mask             (0x00010000)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_irq_fsync_ovf_en_sub_mask            (0x00000400)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_irq_fsync_udf_en_sub_mask            (0x00000200)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_irq_ibuff_ovf_en_sub_mask            (0x00000100)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_wd_fsync_ovf_en_sub(data)            (0x00100000&((data)<<20))
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_wd_fsync_udf_en_sub(data)            (0x00080000&((data)<<19))
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_wd_ibuff_ovf_en_sub(data)            (0x00040000&((data)<<18))
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_wd_ibuff_to_main_sub(data)           (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_wd_ibuff_to_sub_sub(data)            (0x00010000&((data)<<16))
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_irq_fsync_ovf_en_sub(data)           (0x00000400&((data)<<10))
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_irq_fsync_udf_en_sub(data)           (0x00000200&((data)<<9))
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_irq_ibuff_ovf_en_sub(data)           (0x00000100&((data)<<8))
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_get_wd_fsync_ovf_en_sub(data)        ((0x00100000&(data))>>20)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_get_wd_fsync_udf_en_sub(data)        ((0x00080000&(data))>>19)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_get_wd_ibuff_ovf_en_sub(data)        ((0x00040000&(data))>>18)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_get_wd_ibuff_to_main_sub(data)       ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_get_wd_ibuff_to_sub_sub(data)        ((0x00010000&(data))>>16)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_get_irq_fsync_ovf_en_sub(data)       ((0x00000400&(data))>>10)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_get_irq_fsync_udf_en_sub(data)       ((0x00000200&(data))>>9)
#define  MDOMAIN_CAP_ICH2_IBUFF_STATUS_CTRL_get_irq_ibuff_ovf_en_sub(data)       ((0x00000100&(data))>>8)

#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS                                         0x180272DC
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_reg_addr                                 "0xB80272DC"
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_reg                                      0xB80272DC
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_inst_addr                                "0x0032"
#define  set_MDOMAIN_CAP_ICH12_IBUFF_STATUS_reg(data)                            (*((volatile unsigned int*)MDOMAIN_CAP_ICH12_IBUFF_STATUS_reg)=data)
#define  get_MDOMAIN_CAP_ICH12_IBUFF_STATUS_reg                                  (*((volatile unsigned int*)MDOMAIN_CAP_ICH12_IBUFF_STATUS_reg))
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_q_sbs_lr_ovf_sub_shift                   (13)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_q_sbs_lr_udf_sub_shift                   (12)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_ibuff_ovf_sub_shift                      (10)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_fsync_ovf_sub_shift                      (9)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_fsync_udf_sub_shift                      (8)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_q_sbs_lr_ovf_shift                       (5)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_q_sbs_lr_udf_shift                       (4)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_ibuff_ovf_shift                          (2)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_fsync_ovf_shift                          (1)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_fsync_udf_shift                          (0)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_q_sbs_lr_ovf_sub_mask                    (0x00002000)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_q_sbs_lr_udf_sub_mask                    (0x00001000)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_ibuff_ovf_sub_mask                       (0x00000400)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_fsync_ovf_sub_mask                       (0x00000200)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_fsync_udf_sub_mask                       (0x00000100)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_q_sbs_lr_ovf_mask                        (0x00000020)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_q_sbs_lr_udf_mask                        (0x00000010)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_ibuff_ovf_mask                           (0x00000004)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_fsync_ovf_mask                           (0x00000002)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_fsync_udf_mask                           (0x00000001)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_q_sbs_lr_ovf_sub(data)                   (0x00002000&((data)<<13))
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_q_sbs_lr_udf_sub(data)                   (0x00001000&((data)<<12))
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_ibuff_ovf_sub(data)                      (0x00000400&((data)<<10))
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_fsync_ovf_sub(data)                      (0x00000200&((data)<<9))
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_fsync_udf_sub(data)                      (0x00000100&((data)<<8))
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_q_sbs_lr_ovf(data)                       (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_q_sbs_lr_udf(data)                       (0x00000010&((data)<<4))
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_ibuff_ovf(data)                          (0x00000004&((data)<<2))
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_fsync_ovf(data)                          (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_fsync_udf(data)                          (0x00000001&(data))
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_get_q_sbs_lr_ovf_sub(data)               ((0x00002000&(data))>>13)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_get_q_sbs_lr_udf_sub(data)               ((0x00001000&(data))>>12)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_get_ibuff_ovf_sub(data)                  ((0x00000400&(data))>>10)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_get_fsync_ovf_sub(data)                  ((0x00000200&(data))>>9)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_get_fsync_udf_sub(data)                  ((0x00000100&(data))>>8)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_get_q_sbs_lr_ovf(data)                   ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_get_q_sbs_lr_udf(data)                   ((0x00000010&(data))>>4)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_get_ibuff_ovf(data)                      ((0x00000004&(data))>>2)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_get_fsync_ovf(data)                      ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_ICH12_IBUFF_STATUS_get_fsync_udf(data)                      (0x00000001&(data))

#define  MDOMAIN_CAP_main_threshold                                             0x180272E8
#define  MDOMAIN_CAP_main_threshold_reg_addr                                     "0xB80272E8"
#define  MDOMAIN_CAP_main_threshold_reg                                          0xB80272E8
#define  MDOMAIN_CAP_main_threshold_inst_addr                                    "0x0033"
#define  set_MDOMAIN_CAP_main_threshold_reg(data)                                (*((volatile unsigned int*)MDOMAIN_CAP_main_threshold_reg)=data)
#define  get_MDOMAIN_CAP_main_threshold_reg                                      (*((volatile unsigned int*)MDOMAIN_CAP_main_threshold_reg))
#define  MDOMAIN_CAP_main_threshold_delta_down_shift                             (8)
#define  MDOMAIN_CAP_main_threshold_delta_up_shift                               (0)
#define  MDOMAIN_CAP_main_threshold_delta_down_mask                              (0x0000FF00)
#define  MDOMAIN_CAP_main_threshold_delta_up_mask                                (0x000000FF)
#define  MDOMAIN_CAP_main_threshold_delta_down(data)                             (0x0000FF00&((data)<<8))
#define  MDOMAIN_CAP_main_threshold_delta_up(data)                               (0x000000FF&(data))
#define  MDOMAIN_CAP_main_threshold_get_delta_down(data)                         ((0x0000FF00&(data))>>8)
#define  MDOMAIN_CAP_main_threshold_get_delta_up(data)                           (0x000000FF&(data))

#define  MDOMAIN_CAP_Smooth_tog_ctrl_0                                          0x180272F0
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_reg_addr                                  "0xB80272F0"
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_reg                                       0xB80272F0
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_inst_addr                                 "0x0034"
#define  set_MDOMAIN_CAP_Smooth_tog_ctrl_0_reg(data)                             (*((volatile unsigned int*)MDOMAIN_CAP_Smooth_tog_ctrl_0_reg)=data)
#define  get_MDOMAIN_CAP_Smooth_tog_ctrl_0_reg                                   (*((volatile unsigned int*)MDOMAIN_CAP_Smooth_tog_ctrl_0_reg))
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dispd_fs_3d_en_sub_shift                  (9)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dispi_fs_3d_en_sub_shift                  (8)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dispd_fs_3d_en_shift                      (5)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dispi_fs_3d_en_shift                      (4)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dummy_2_shift                             (2)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dummy_1_shift                             (1)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_main_sub_db_sel_shift                     (0)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dispd_fs_3d_en_sub_mask                   (0x00000200)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dispi_fs_3d_en_sub_mask                   (0x00000100)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dispd_fs_3d_en_mask                       (0x00000020)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dispi_fs_3d_en_mask                       (0x00000010)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dummy_2_mask                              (0x00000004)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dummy_1_mask                              (0x00000002)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_main_sub_db_sel_mask                      (0x00000001)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dispd_fs_3d_en_sub(data)                  (0x00000200&((data)<<9))
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dispi_fs_3d_en_sub(data)                  (0x00000100&((data)<<8))
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dispd_fs_3d_en(data)                      (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dispi_fs_3d_en(data)                      (0x00000010&((data)<<4))
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dummy_2(data)                             (0x00000004&((data)<<2))
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_dummy_1(data)                             (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_main_sub_db_sel(data)                     (0x00000001&(data))
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_get_dispd_fs_3d_en_sub(data)              ((0x00000200&(data))>>9)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_get_dispi_fs_3d_en_sub(data)              ((0x00000100&(data))>>8)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_get_dispd_fs_3d_en(data)                  ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_get_dispi_fs_3d_en(data)                  ((0x00000010&(data))>>4)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_get_dummy_2(data)                         ((0x00000004&(data))>>2)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_get_dummy_1(data)                         ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_Smooth_tog_ctrl_0_get_main_sub_db_sel(data)                 (0x00000001&(data))

#define  MDOMAIN_CAP_Smooth_tog_status_0                                        0x180272F4
#define  MDOMAIN_CAP_Smooth_tog_status_0_reg_addr                                "0xB80272F4"
#define  MDOMAIN_CAP_Smooth_tog_status_0_reg                                     0xB80272F4
#define  MDOMAIN_CAP_Smooth_tog_status_0_inst_addr                               "0x0035"
#define  set_MDOMAIN_CAP_Smooth_tog_status_0_reg(data)                           (*((volatile unsigned int*)MDOMAIN_CAP_Smooth_tog_status_0_reg)=data)
#define  get_MDOMAIN_CAP_Smooth_tog_status_0_reg                                 (*((volatile unsigned int*)MDOMAIN_CAP_Smooth_tog_status_0_reg))
#define  MDOMAIN_CAP_Smooth_tog_status_0_in2_cap_already_set_shift               (15)
#define  MDOMAIN_CAP_Smooth_tog_status_0_in2_cap_set_block_shift                 (12)
#define  MDOMAIN_CAP_Smooth_tog_status_0_in1_cap_already_set_shift               (11)
#define  MDOMAIN_CAP_Smooth_tog_status_0_in1_cap_set_block_shift                 (8)
#define  MDOMAIN_CAP_Smooth_tog_status_0_md_reg_is_db_sub_shift                  (3)
#define  MDOMAIN_CAP_Smooth_tog_status_0_im_reg_is_db_sub_shift                  (2)
#define  MDOMAIN_CAP_Smooth_tog_status_0_md_reg_is_db_shift                      (1)
#define  MDOMAIN_CAP_Smooth_tog_status_0_im_reg_is_db_shift                      (0)
#define  MDOMAIN_CAP_Smooth_tog_status_0_in2_cap_already_set_mask                (0x00008000)
#define  MDOMAIN_CAP_Smooth_tog_status_0_in2_cap_set_block_mask                  (0x00007000)
#define  MDOMAIN_CAP_Smooth_tog_status_0_in1_cap_already_set_mask                (0x00000800)
#define  MDOMAIN_CAP_Smooth_tog_status_0_in1_cap_set_block_mask                  (0x00000700)
#define  MDOMAIN_CAP_Smooth_tog_status_0_md_reg_is_db_sub_mask                   (0x00000008)
#define  MDOMAIN_CAP_Smooth_tog_status_0_im_reg_is_db_sub_mask                   (0x00000004)
#define  MDOMAIN_CAP_Smooth_tog_status_0_md_reg_is_db_mask                       (0x00000002)
#define  MDOMAIN_CAP_Smooth_tog_status_0_im_reg_is_db_mask                       (0x00000001)
#define  MDOMAIN_CAP_Smooth_tog_status_0_in2_cap_already_set(data)               (0x00008000&((data)<<15))
#define  MDOMAIN_CAP_Smooth_tog_status_0_in2_cap_set_block(data)                 (0x00007000&((data)<<12))
#define  MDOMAIN_CAP_Smooth_tog_status_0_in1_cap_already_set(data)               (0x00000800&((data)<<11))
#define  MDOMAIN_CAP_Smooth_tog_status_0_in1_cap_set_block(data)                 (0x00000700&((data)<<8))
#define  MDOMAIN_CAP_Smooth_tog_status_0_md_reg_is_db_sub(data)                  (0x00000008&((data)<<3))
#define  MDOMAIN_CAP_Smooth_tog_status_0_im_reg_is_db_sub(data)                  (0x00000004&((data)<<2))
#define  MDOMAIN_CAP_Smooth_tog_status_0_md_reg_is_db(data)                      (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_Smooth_tog_status_0_im_reg_is_db(data)                      (0x00000001&(data))
#define  MDOMAIN_CAP_Smooth_tog_status_0_get_in2_cap_already_set(data)           ((0x00008000&(data))>>15)
#define  MDOMAIN_CAP_Smooth_tog_status_0_get_in2_cap_set_block(data)             ((0x00007000&(data))>>12)
#define  MDOMAIN_CAP_Smooth_tog_status_0_get_in1_cap_already_set(data)           ((0x00000800&(data))>>11)
#define  MDOMAIN_CAP_Smooth_tog_status_0_get_in1_cap_set_block(data)             ((0x00000700&(data))>>8)
#define  MDOMAIN_CAP_Smooth_tog_status_0_get_md_reg_is_db_sub(data)              ((0x00000008&(data))>>3)
#define  MDOMAIN_CAP_Smooth_tog_status_0_get_im_reg_is_db_sub(data)              ((0x00000004&(data))>>2)
#define  MDOMAIN_CAP_Smooth_tog_status_0_get_md_reg_is_db(data)                  ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_Smooth_tog_status_0_get_im_reg_is_db(data)                  (0x00000001&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP                                                 0x18027800
#define  MDOMAIN_CAP_CAP_PQ_CMP_reg_addr                                         "0xB8027800"
#define  MDOMAIN_CAP_CAP_PQ_CMP_reg                                              0xB8027800
#define  MDOMAIN_CAP_CAP_PQ_CMP_inst_addr                                        "0x0036"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_reg(data)                                    (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_reg                                          (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_cmp_en_shift                                     (31)
#define  MDOMAIN_CAP_CAP_PQ_CMP_cmp_width_div32_shift                            (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_cmp_height_shift                                 (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_cmp_en_mask                                      (0x80000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_cmp_width_div32_mask                             (0x01FF0000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_cmp_height_mask                                  (0x00003FFF)
#define  MDOMAIN_CAP_CAP_PQ_CMP_cmp_en(data)                                     (0x80000000&((data)<<31))
#define  MDOMAIN_CAP_CAP_PQ_CMP_cmp_width_div32(data)                            (0x01FF0000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_cmp_height(data)                                 (0x00003FFF&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_get_cmp_en(data)                                 ((0x80000000&(data))>>31)
#define  MDOMAIN_CAP_CAP_PQ_CMP_get_cmp_width_div32(data)                        ((0x01FF0000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_get_cmp_height(data)                             (0x00003FFF&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR                                            0x18027804
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_reg_addr                                    "0xB8027804"
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_reg                                         0xB8027804
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_inst_addr                                   "0x0037"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_PAIR_reg(data)                               (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_PAIR_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_PAIR_reg                                     (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_PAIR_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_line_sum_bit_shift                      (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_400_old_mode_en_shift                   (15)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_dummy_14_11_shift                           (11)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_jump4_en_shift                          (10)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_qp_mode_shift                           (8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_dic_mode_en_shift                       (7)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_two_line_prediction_en_shift                (6)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_line_mode_shift                         (5)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_data_color_shift                        (4)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_data_bit_width_shift                    (2)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_data_format_shift                       (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_line_sum_bit_mask                       (0xFFFF0000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_400_old_mode_en_mask                    (0x00008000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_dummy_14_11_mask                            (0x00007800)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_jump4_en_mask                           (0x00000400)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_qp_mode_mask                            (0x00000300)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_dic_mode_en_mask                        (0x00000080)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_two_line_prediction_en_mask                 (0x00000040)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_line_mode_mask                          (0x00000020)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_data_color_mask                         (0x00000010)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_data_bit_width_mask                     (0x0000000C)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_data_format_mask                        (0x00000003)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_line_sum_bit(data)                      (0xFFFF0000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_400_old_mode_en(data)                   (0x00008000&((data)<<15))
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_dummy_14_11(data)                           (0x00007800&((data)<<11))
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_jump4_en(data)                          (0x00000400&((data)<<10))
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_qp_mode(data)                           (0x00000300&((data)<<8))
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_dic_mode_en(data)                       (0x00000080&((data)<<7))
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_two_line_prediction_en(data)                (0x00000040&((data)<<6))
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_line_mode(data)                         (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_data_color(data)                        (0x00000010&((data)<<4))
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_data_bit_width(data)                    (0x0000000C&((data)<<2))
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_cmp_data_format(data)                       (0x00000003&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_get_cmp_line_sum_bit(data)                  ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_get_cmp_400_old_mode_en(data)               ((0x00008000&(data))>>15)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_get_dummy_14_11(data)                       ((0x00007800&(data))>>11)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_get_cmp_jump4_en(data)                      ((0x00000400&(data))>>10)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_get_cmp_qp_mode(data)                       ((0x00000300&(data))>>8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_get_cmp_dic_mode_en(data)                   ((0x00000080&(data))>>7)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_get_two_line_prediction_en(data)            ((0x00000040&(data))>>6)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_get_cmp_line_mode(data)                     ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_get_cmp_data_color(data)                    ((0x00000010&(data))>>4)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_get_cmp_data_bit_width(data)                ((0x0000000C&(data))>>2)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PAIR_get_cmp_data_format(data)                   (0x00000003&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT                                             0x18027808
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_reg_addr                                     "0xB8027808"
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_reg                                          0xB8027808
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_inst_addr                                    "0x0038"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_BIT_reg(data)                                (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_BIT_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_BIT_reg                                      (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_BIT_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_first_line_more_bit_shift                    (24)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_block_limit_bit_shift                        (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_line_limit_bit_shift                         (8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_frame_limit_bit_shift                        (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_first_line_more_bit_mask                     (0x3F000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_block_limit_bit_mask                         (0x003F0000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_line_limit_bit_mask                          (0x00003F00)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_frame_limit_bit_mask                         (0x0000003F)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_first_line_more_bit(data)                    (0x3F000000&((data)<<24))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_block_limit_bit(data)                        (0x003F0000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_line_limit_bit(data)                         (0x00003F00&((data)<<8))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_frame_limit_bit(data)                        (0x0000003F&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_get_first_line_more_bit(data)                ((0x3F000000&(data))>>24)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_get_block_limit_bit(data)                    ((0x003F0000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_get_line_limit_bit(data)                     ((0x00003F00&(data))>>8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BIT_get_frame_limit_bit(data)                    (0x0000003F&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE                                          0x1802780C
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_reg_addr                                  "0xB802780C"
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_reg                                       0xB802780C
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_inst_addr                                 "0x0039"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_reg(data)                             (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_reg                                   (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_input_fifo_pause_cycle_shift              (28)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_tail_dummy_throughput_shift               (27)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_first_predict_nc_mode_shift               (26)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_g_ratio_shift                             (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_add_last2blk_over_curve_bit_shift         (15)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_variation_maxmin_en_shift                 (14)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_dynamic_sum_line_rst_shift                (13)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_blk0_add_en_shift                         (12)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_guarantee_max_qp_en_shift                 (11)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_dynamic_allocate_ratio_en_shift           (10)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_poor_limit_min_qp_en_shift                (9)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_balance_en_shift                          (8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_fisrt_line_more_en_shift                  (7)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_blk0_add_half_en_shift                    (6)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_do_422_mode_shift                         (4)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_first_predict_nc_en_shift                 (3)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_not_enough_bit_do_422_en_shift            (2)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_not_rich_do_422_en_shift                  (1)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_rb_lossy_do_422_en_shift                  (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_input_fifo_pause_cycle_mask               (0xF0000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_tail_dummy_throughput_mask                (0x08000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_first_predict_nc_mode_mask                (0x04000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_g_ratio_mask                              (0x001F0000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_add_last2blk_over_curve_bit_mask          (0x00008000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_variation_maxmin_en_mask                  (0x00004000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_dynamic_sum_line_rst_mask                 (0x00002000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_blk0_add_en_mask                          (0x00001000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_guarantee_max_qp_en_mask                  (0x00000800)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_dynamic_allocate_ratio_en_mask            (0x00000400)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_poor_limit_min_qp_en_mask                 (0x00000200)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_balance_en_mask                           (0x00000100)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_fisrt_line_more_en_mask                   (0x00000080)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_blk0_add_half_en_mask                     (0x00000040)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_do_422_mode_mask                          (0x00000030)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_first_predict_nc_en_mask                  (0x00000008)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_not_enough_bit_do_422_en_mask             (0x00000004)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_not_rich_do_422_en_mask                   (0x00000002)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_rb_lossy_do_422_en_mask                   (0x00000001)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_input_fifo_pause_cycle(data)              (0xF0000000&((data)<<28))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_tail_dummy_throughput(data)               (0x08000000&((data)<<27))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_first_predict_nc_mode(data)               (0x04000000&((data)<<26))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_g_ratio(data)                             (0x001F0000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_add_last2blk_over_curve_bit(data)         (0x00008000&((data)<<15))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_variation_maxmin_en(data)                 (0x00004000&((data)<<14))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_dynamic_sum_line_rst(data)                (0x00002000&((data)<<13))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_blk0_add_en(data)                         (0x00001000&((data)<<12))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_guarantee_max_qp_en(data)                 (0x00000800&((data)<<11))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_dynamic_allocate_ratio_en(data)           (0x00000400&((data)<<10))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_poor_limit_min_qp_en(data)                (0x00000200&((data)<<9))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_balance_en(data)                          (0x00000100&((data)<<8))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_fisrt_line_more_en(data)                  (0x00000080&((data)<<7))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_blk0_add_half_en(data)                    (0x00000040&((data)<<6))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_do_422_mode(data)                         (0x00000030&((data)<<4))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_first_predict_nc_en(data)                 (0x00000008&((data)<<3))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_not_enough_bit_do_422_en(data)            (0x00000004&((data)<<2))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_not_rich_do_422_en(data)                  (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_rb_lossy_do_422_en(data)                  (0x00000001&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_input_fifo_pause_cycle(data)          ((0xF0000000&(data))>>28)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_tail_dummy_throughput(data)           ((0x08000000&(data))>>27)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_first_predict_nc_mode(data)           ((0x04000000&(data))>>26)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_g_ratio(data)                         ((0x001F0000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_add_last2blk_over_curve_bit(data)     ((0x00008000&(data))>>15)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_variation_maxmin_en(data)             ((0x00004000&(data))>>14)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_dynamic_sum_line_rst(data)            ((0x00002000&(data))>>13)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_blk0_add_en(data)                     ((0x00001000&(data))>>12)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_guarantee_max_qp_en(data)             ((0x00000800&(data))>>11)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_dynamic_allocate_ratio_en(data)       ((0x00000400&(data))>>10)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_poor_limit_min_qp_en(data)            ((0x00000200&(data))>>9)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_balance_en(data)                      ((0x00000100&(data))>>8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_fisrt_line_more_en(data)              ((0x00000080&(data))>>7)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_blk0_add_half_en(data)                ((0x00000040&(data))>>6)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_do_422_mode(data)                     ((0x00000030&(data))>>4)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_first_predict_nc_en(data)             ((0x00000008&(data))>>3)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_not_enough_bit_do_422_en(data)        ((0x00000004&(data))>>2)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_not_rich_do_422_en(data)              ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ENABLE_get_rb_lossy_do_422_en(data)              (0x00000001&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH                                          0x18027810
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_reg_addr                                  "0xB8027810"
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_reg                                       0xB8027810
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_inst_addr                                 "0x003A"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_reg(data)                             (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_reg                                   (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_dic_mode_option_shift                     (28)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_not_enough_bit_do_422_qp_shift            (24)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_not_rich_do_422_th_shift                  (20)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_rb_lossy_do_422_qp_level_shift            (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_dic_mode_entry_th_shift                   (12)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_variation_value_th_shift                  (8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_variation_num_th_shift                    (4)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_variation_near_num_th_shift               (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_dic_mode_option_mask                      (0xF0000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_not_enough_bit_do_422_qp_mask             (0x07000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_not_rich_do_422_th_mask                   (0x00F00000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_rb_lossy_do_422_qp_level_mask             (0x00070000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_dic_mode_entry_th_mask                    (0x0000F000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_variation_value_th_mask                   (0x00000F00)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_variation_num_th_mask                     (0x00000070)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_variation_near_num_th_mask                (0x00000007)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_dic_mode_option(data)                     (0xF0000000&((data)<<28))
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_not_enough_bit_do_422_qp(data)            (0x07000000&((data)<<24))
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_not_rich_do_422_th(data)                  (0x00F00000&((data)<<20))
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_rb_lossy_do_422_qp_level(data)            (0x00070000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_dic_mode_entry_th(data)                   (0x0000F000&((data)<<12))
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_variation_value_th(data)                  (0x00000F00&((data)<<8))
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_variation_num_th(data)                    (0x00000070&((data)<<4))
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_variation_near_num_th(data)               (0x00000007&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_get_dic_mode_option(data)                 ((0xF0000000&(data))>>28)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_get_not_enough_bit_do_422_qp(data)        ((0x07000000&(data))>>24)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_get_not_rich_do_422_th(data)              ((0x00F00000&(data))>>20)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_get_rb_lossy_do_422_qp_level(data)        ((0x00070000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_get_dic_mode_entry_th(data)               ((0x0000F000&(data))>>12)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_get_variation_value_th(data)              ((0x00000F00&(data))>>8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_get_variation_num_th(data)                ((0x00000070&(data))>>4)
#define  MDOMAIN_CAP_CAP_PQ_CMP_SMOOTH_get_variation_near_num_th(data)           (0x00000007&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE                                        0x18027814
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_reg_addr                                "0xB8027814"
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_reg                                     0xB8027814
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_inst_addr                               "0x003B"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_reg(data)                           (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_reg                                 (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_max_shift        (24)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_min_shift        (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_dynamic_allocate_line_shift             (8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_dynamic_allocate_more_shift             (4)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_dynamic_allocate_less_shift             (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_max_mask         (0x1F000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_min_mask         (0x001F0000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_dynamic_allocate_line_mask              (0x00000700)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_dynamic_allocate_more_mask              (0x000000F0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_dynamic_allocate_less_mask              (0x0000000F)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_max(data)        (0x1F000000&((data)<<24))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_dynamic_allocate_ratio_min(data)        (0x001F0000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_dynamic_allocate_line(data)             (0x00000700&((data)<<8))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_dynamic_allocate_more(data)             (0x000000F0&((data)<<4))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_dynamic_allocate_less(data)             (0x0000000F&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_get_dynamic_allocate_ratio_max(data)    ((0x1F000000&(data))>>24)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_get_dynamic_allocate_ratio_min(data)    ((0x001F0000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_get_dynamic_allocate_line(data)         ((0x00000700&(data))>>8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_get_dynamic_allocate_more(data)         ((0x000000F0&(data))>>4)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ALLOCATE_get_dynamic_allocate_less(data)         (0x0000000F&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR                                            0x18027818
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_reg_addr                                    "0xB8027818"
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_reg                                         0xB8027818
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_inst_addr                                   "0x003C"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_POOR_reg(data)                               (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_POOR_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_POOR_reg                                     (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_POOR_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_poor_limit_th_qp4_shift                     (24)
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_poor_limit_th_qp3_shift                     (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_poor_limit_th_qp2_shift                     (8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_poor_limit_th_qp1_shift                     (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_poor_limit_th_qp4_mask                      (0x1F000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_poor_limit_th_qp3_mask                      (0x001F0000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_poor_limit_th_qp2_mask                      (0x00001F00)
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_poor_limit_th_qp1_mask                      (0x0000001F)
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_poor_limit_th_qp4(data)                     (0x1F000000&((data)<<24))
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_poor_limit_th_qp3(data)                     (0x001F0000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_poor_limit_th_qp2(data)                     (0x00001F00&((data)<<8))
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_poor_limit_th_qp1(data)                     (0x0000001F&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_get_poor_limit_th_qp4(data)                 ((0x1F000000&(data))>>24)
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_get_poor_limit_th_qp3(data)                 ((0x001F0000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_get_poor_limit_th_qp2(data)                 ((0x00001F00&(data))>>8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_POOR_get_poor_limit_th_qp1(data)                 (0x0000001F&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee                                       0x1802781C
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_reg_addr                               "0xB802781C"
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_reg                                    0xB802781C
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_inst_addr                              "0x003D"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_reg(data)                          (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_reg                                (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_cmp_crc_ro_line_sel_shift              (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_dic_mode_qp_th_rb_shift                (12)
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_dic_mode_qp_th_g_shift                 (8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_guarantee_max_rb_qp_shift              (4)
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_guarantee_max_g_qp_shift               (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_cmp_crc_ro_line_sel_mask               (0x3FFF0000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_dic_mode_qp_th_rb_mask                 (0x0000F000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_dic_mode_qp_th_g_mask                  (0x00000F00)
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_guarantee_max_rb_qp_mask               (0x000000F0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_guarantee_max_g_qp_mask                (0x0000000F)
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_cmp_crc_ro_line_sel(data)              (0x3FFF0000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_dic_mode_qp_th_rb(data)                (0x0000F000&((data)<<12))
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_dic_mode_qp_th_g(data)                 (0x00000F00&((data)<<8))
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_guarantee_max_rb_qp(data)              (0x000000F0&((data)<<4))
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_guarantee_max_g_qp(data)               (0x0000000F&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_get_cmp_crc_ro_line_sel(data)          ((0x3FFF0000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_get_dic_mode_qp_th_rb(data)            ((0x0000F000&(data))>>12)
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_get_dic_mode_qp_th_g(data)             ((0x00000F00&(data))>>8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_get_guarantee_max_rb_qp(data)          ((0x000000F0&(data))>>4)
#define  MDOMAIN_CAP_CAP_PQ_CMP_Guarantee_get_guarantee_max_g_qp(data)           (0x0000000F&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE                                         0x18027820
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_reg_addr                                 "0xB8027820"
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_reg                                      0xB8027820
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_inst_addr                                "0x003E"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_reg(data)                            (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_reg                                  (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_variation_maxmin_th2_shift               (24)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_variation_maxmin_th_shift                (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_rb_ov_th_shift                   (12)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_rb_ud_th_shift                   (10)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_rb_give_shift                    (8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_g_ov_th_shift                    (4)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_g_ud_th_shift                    (2)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_g_give_shift                     (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_variation_maxmin_th2_mask                (0xFF000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_variation_maxmin_th_mask                 (0x00FF0000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_rb_ov_th_mask                    (0x00003000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_rb_ud_th_mask                    (0x00000C00)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_rb_give_mask                     (0x00000300)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_g_ov_th_mask                     (0x00000030)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_g_ud_th_mask                     (0x0000000C)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_g_give_mask                      (0x00000003)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_variation_maxmin_th2(data)               (0xFF000000&((data)<<24))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_variation_maxmin_th(data)                (0x00FF0000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_rb_ov_th(data)                   (0x00003000&((data)<<12))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_rb_ud_th(data)                   (0x00000C00&((data)<<10))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_rb_give(data)                    (0x00000300&((data)<<8))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_g_ov_th(data)                    (0x00000030&((data)<<4))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_g_ud_th(data)                    (0x0000000C&((data)<<2))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_balance_g_give(data)                     (0x00000003&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_get_variation_maxmin_th2(data)           ((0xFF000000&(data))>>24)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_get_variation_maxmin_th(data)            ((0x00FF0000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_get_balance_rb_ov_th(data)               ((0x00003000&(data))>>12)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_get_balance_rb_ud_th(data)               ((0x00000C00&(data))>>10)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_get_balance_rb_give(data)                ((0x00000300&(data))>>8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_get_balance_g_ov_th(data)                ((0x00000030&(data))>>4)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_get_balance_g_ud_th(data)                ((0x0000000C&(data))>>2)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BALANCE_get_balance_g_give(data)                 (0x00000003&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN                                          0x18027824
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_reg_addr                                  "0xB8027824"
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_reg                                       0xB8027824
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_inst_addr                                 "0x003F"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_reg(data)                             (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_reg                                   (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_prs_over_line_sum_bit_irq_en_shift        (18)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_tail_fifo_overflow_irq_en_shift           (17)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_input_fifo_overflow_irq_en_shift          (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_block_fifo_overflow_irq_en_shift          (15)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_input_size_more_irq_en_shift              (14)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_input_size_less_irq_en_shift              (13)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_over_flb_irq_en_shift                     (12)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_request_fifo_even_overflow_irq_en_shift   (9)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_g_fifo_even_overflow_irq_en_shift         (6)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_r_fifo_even_overflow_irq_en_shift         (5)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_b_fifo_even_overflow_irq_en_shift         (4)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_prs_over_line_sum_bit_irq_en_mask         (0x00040000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_tail_fifo_overflow_irq_en_mask            (0x00020000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_input_fifo_overflow_irq_en_mask           (0x00010000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_block_fifo_overflow_irq_en_mask           (0x00008000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_input_size_more_irq_en_mask               (0x00004000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_input_size_less_irq_en_mask               (0x00002000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_over_flb_irq_en_mask                      (0x00001000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_request_fifo_even_overflow_irq_en_mask    (0x00000200)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_g_fifo_even_overflow_irq_en_mask          (0x00000040)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_r_fifo_even_overflow_irq_en_mask          (0x00000020)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_b_fifo_even_overflow_irq_en_mask          (0x00000010)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_prs_over_line_sum_bit_irq_en(data)        (0x00040000&((data)<<18))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_tail_fifo_overflow_irq_en(data)           (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_input_fifo_overflow_irq_en(data)          (0x00010000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_block_fifo_overflow_irq_en(data)          (0x00008000&((data)<<15))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_input_size_more_irq_en(data)              (0x00004000&((data)<<14))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_input_size_less_irq_en(data)              (0x00002000&((data)<<13))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_over_flb_irq_en(data)                     (0x00001000&((data)<<12))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_request_fifo_even_overflow_irq_en(data)   (0x00000200&((data)<<9))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_g_fifo_even_overflow_irq_en(data)         (0x00000040&((data)<<6))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_r_fifo_even_overflow_irq_en(data)         (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_b_fifo_even_overflow_irq_en(data)         (0x00000010&((data)<<4))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_get_prs_over_line_sum_bit_irq_en(data)    ((0x00040000&(data))>>18)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_get_tail_fifo_overflow_irq_en(data)       ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_get_input_fifo_overflow_irq_en(data)      ((0x00010000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_get_block_fifo_overflow_irq_en(data)      ((0x00008000&(data))>>15)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_get_input_size_more_irq_en(data)          ((0x00004000&(data))>>14)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_get_input_size_less_irq_en(data)          ((0x00002000&(data))>>13)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_get_over_flb_irq_en(data)                 ((0x00001000&(data))>>12)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_get_request_fifo_even_overflow_irq_en(data) ((0x00000200&(data))>>9)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_get_g_fifo_even_overflow_irq_en(data)     ((0x00000040&(data))>>6)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_get_r_fifo_even_overflow_irq_en(data)     ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_EN_get_b_fifo_even_overflow_irq_en(data)     ((0x00000010&(data))>>4)

#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST                                          0x18027828
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_reg_addr                                  "0xB8027828"
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_reg                                       0xB8027828
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_inst_addr                                 "0x0040"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_reg(data)                             (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_reg                                   (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_pqc_irq_shift                             (31)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_prs_over_line_sum_bit_st_shift            (18)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_tail_fifo_overflow_st_shift               (17)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_input_fifo_overflow_st_shift              (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_block_fifo_overflow_st_shift              (15)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_input_size_more_st_shift                  (14)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_input_size_less_st_shift                  (13)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_over_flb_st_shift                         (12)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_request_fifo_even_overflow_st_shift       (9)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_g_fifo_even_overflow_st_shift             (6)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_r_fifo_even_overflow_st_shift             (5)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_b_fifo_even_overflow_st_shift             (4)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_pqc_irq_mask                              (0x80000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_prs_over_line_sum_bit_st_mask             (0x00040000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_tail_fifo_overflow_st_mask                (0x00020000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_input_fifo_overflow_st_mask               (0x00010000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_block_fifo_overflow_st_mask               (0x00008000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_input_size_more_st_mask                   (0x00004000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_input_size_less_st_mask                   (0x00002000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_over_flb_st_mask                          (0x00001000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_request_fifo_even_overflow_st_mask        (0x00000200)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_g_fifo_even_overflow_st_mask              (0x00000040)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_r_fifo_even_overflow_st_mask              (0x00000020)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_b_fifo_even_overflow_st_mask              (0x00000010)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_pqc_irq(data)                             (0x80000000&((data)<<31))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_prs_over_line_sum_bit_st(data)            (0x00040000&((data)<<18))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_tail_fifo_overflow_st(data)               (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_input_fifo_overflow_st(data)              (0x00010000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_block_fifo_overflow_st(data)              (0x00008000&((data)<<15))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_input_size_more_st(data)                  (0x00004000&((data)<<14))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_input_size_less_st(data)                  (0x00002000&((data)<<13))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_over_flb_st(data)                         (0x00001000&((data)<<12))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_request_fifo_even_overflow_st(data)       (0x00000200&((data)<<9))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_g_fifo_even_overflow_st(data)             (0x00000040&((data)<<6))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_r_fifo_even_overflow_st(data)             (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_b_fifo_even_overflow_st(data)             (0x00000010&((data)<<4))
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_get_pqc_irq(data)                         ((0x80000000&(data))>>31)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_get_prs_over_line_sum_bit_st(data)        ((0x00040000&(data))>>18)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_get_tail_fifo_overflow_st(data)           ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_get_input_fifo_overflow_st(data)          ((0x00010000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_get_block_fifo_overflow_st(data)          ((0x00008000&(data))>>15)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_get_input_size_more_st(data)              ((0x00004000&(data))>>14)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_get_input_size_less_st(data)              ((0x00002000&(data))>>13)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_get_over_flb_st(data)                     ((0x00001000&(data))>>12)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_get_request_fifo_even_overflow_st(data)   ((0x00000200&(data))>>9)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_get_g_fifo_even_overflow_st(data)         ((0x00000040&(data))>>6)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_get_r_fifo_even_overflow_st(data)         ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_CAP_PQ_CMP_IRQ_ST_get_b_fifo_even_overflow_st(data)         ((0x00000010&(data))>>4)

#define  MDOMAIN_CAP_CAP_PQ_CMP_ST                                              0x1802782C
#define  MDOMAIN_CAP_CAP_PQ_CMP_ST_reg_addr                                      "0xB802782C"
#define  MDOMAIN_CAP_CAP_PQ_CMP_ST_reg                                           0xB802782C
#define  MDOMAIN_CAP_CAP_PQ_CMP_ST_inst_addr                                     "0x0041"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_ST_reg(data)                                 (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_ST_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_ST_reg                                       (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_ST_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ST_g_ratio_max_shift                             (24)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ST_g_ratio_min_shift                             (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ST_cmp_package_height_cnt_shift                  (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ST_g_ratio_max_mask                              (0x1F000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ST_g_ratio_min_mask                              (0x001F0000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ST_cmp_package_height_cnt_mask                   (0x00003FFF)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ST_g_ratio_max(data)                             (0x1F000000&((data)<<24))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ST_g_ratio_min(data)                             (0x001F0000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ST_cmp_package_height_cnt(data)                  (0x00003FFF&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_ST_get_g_ratio_max(data)                         ((0x1F000000&(data))>>24)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ST_get_g_ratio_min(data)                         ((0x001F0000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_ST_get_cmp_package_height_cnt(data)              (0x00003FFF&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST                                           0x18027830
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_reg_addr                                   "0xB8027830"
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_reg                                        0xB8027830
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_inst_addr                                  "0x0042"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_reg(data)                              (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_reg                                    (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_long_term_qp_measure_en_shift              (31)
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_long_term_g_qp_max_shift                   (20)
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_long_term_rb_qp_max_shift                  (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_short_term_g_qp_max_shift                  (4)
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_short_term_rb_qp_max_shift                 (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_long_term_qp_measure_en_mask               (0x80000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_long_term_g_qp_max_mask                    (0x00F00000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_long_term_rb_qp_max_mask                   (0x000F0000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_short_term_g_qp_max_mask                   (0x000000F0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_short_term_rb_qp_max_mask                  (0x0000000F)
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_long_term_qp_measure_en(data)              (0x80000000&((data)<<31))
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_long_term_g_qp_max(data)                   (0x00F00000&((data)<<20))
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_long_term_rb_qp_max(data)                  (0x000F0000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_short_term_g_qp_max(data)                  (0x000000F0&((data)<<4))
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_short_term_rb_qp_max(data)                 (0x0000000F&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_get_long_term_qp_measure_en(data)          ((0x80000000&(data))>>31)
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_get_long_term_g_qp_max(data)               ((0x00F00000&(data))>>20)
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_get_long_term_rb_qp_max(data)              ((0x000F0000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_get_short_term_g_qp_max(data)              ((0x000000F0&(data))>>4)
#define  MDOMAIN_CAP_CAP_PQ_CMP_QP_ST_get_short_term_rb_qp_max(data)             (0x0000000F&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1                                        0x18027834
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_reg_addr                                "0xB8027834"
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_reg                                     0xB8027834
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_inst_addr                               "0x0043"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_reg(data)                           (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_reg                                 (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_fifo_water_measure_en_shift             (31)
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_fifo_water_even_g_shift                 (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_fifo_water_even_r_shift                 (8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_fifo_water_even_b_shift                 (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_fifo_water_measure_en_mask              (0x80000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_fifo_water_even_g_mask                  (0x00FF0000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_fifo_water_even_r_mask                  (0x0000FF00)
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_fifo_water_even_b_mask                  (0x000000FF)
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_fifo_water_measure_en(data)             (0x80000000&((data)<<31))
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_fifo_water_even_g(data)                 (0x00FF0000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_fifo_water_even_r(data)                 (0x0000FF00&((data)<<8))
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_fifo_water_even_b(data)                 (0x000000FF&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_get_fifo_water_measure_en(data)         ((0x80000000&(data))>>31)
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_get_fifo_water_even_g(data)             ((0x00FF0000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_get_fifo_water_even_r(data)             ((0x0000FF00&(data))>>8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_FIFO_ST1_get_fifo_water_even_b(data)             (0x000000FF&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_LEFT_ST                                         0x1802783C
#define  MDOMAIN_CAP_CAP_PQ_CMP_LEFT_ST_reg_addr                                 "0xB802783C"
#define  MDOMAIN_CAP_CAP_PQ_CMP_LEFT_ST_reg                                      0xB802783C
#define  MDOMAIN_CAP_CAP_PQ_CMP_LEFT_ST_inst_addr                                "0x0044"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_LEFT_ST_reg(data)                            (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_LEFT_ST_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_LEFT_ST_reg                                  (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_LEFT_ST_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_LEFT_ST_g_frame_left_shift                       (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_LEFT_ST_rb_frame_left_shift                      (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_LEFT_ST_g_frame_left_mask                        (0xFFFF0000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_LEFT_ST_rb_frame_left_mask                       (0x0000FFFF)
#define  MDOMAIN_CAP_CAP_PQ_CMP_LEFT_ST_g_frame_left(data)                       (0xFFFF0000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_LEFT_ST_rb_frame_left(data)                      (0x0000FFFF&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_LEFT_ST_get_g_frame_left(data)                   ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_LEFT_ST_get_rb_frame_left(data)                  (0x0000FFFF&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_PACKAGE_ST                                      0x18027840
#define  MDOMAIN_CAP_CAP_PQ_CMP_PACKAGE_ST_reg_addr                              "0xB8027840"
#define  MDOMAIN_CAP_CAP_PQ_CMP_PACKAGE_ST_reg                                   0xB8027840
#define  MDOMAIN_CAP_CAP_PQ_CMP_PACKAGE_ST_inst_addr                             "0x0045"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_PACKAGE_ST_reg(data)                         (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_PACKAGE_ST_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_PACKAGE_ST_reg                               (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_PACKAGE_ST_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_PACKAGE_ST_total_package_long_term_shift         (31)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PACKAGE_ST_total_package_even_shift              (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PACKAGE_ST_total_package_long_term_mask          (0x80000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PACKAGE_ST_total_package_even_mask               (0x00FFFFFF)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PACKAGE_ST_total_package_long_term(data)         (0x80000000&((data)<<31))
#define  MDOMAIN_CAP_CAP_PQ_CMP_PACKAGE_ST_total_package_even(data)              (0x00FFFFFF&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_PACKAGE_ST_get_total_package_long_term(data)     ((0x80000000&(data))>>31)
#define  MDOMAIN_CAP_CAP_PQ_CMP_PACKAGE_ST_get_total_package_even(data)          (0x00FFFFFF&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_G                                      0x18027844
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_G_reg_addr                              "0xB8027844"
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_G_reg                                   0xB8027844
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_G_inst_addr                             "0x0046"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_G_reg(data)                         (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_G_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_G_reg                               (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_G_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_G_cmp_crc_even_g_shift                  (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_G_cmp_crc_even_g_mask                   (0xFFFFFFFF)
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_G_cmp_crc_even_g(data)                  (0xFFFFFFFF&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_G_get_cmp_crc_even_g(data)              (0xFFFFFFFF&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_R                                      0x18027848
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_R_reg_addr                              "0xB8027848"
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_R_reg                                   0xB8027848
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_R_inst_addr                             "0x0047"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_R_reg(data)                         (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_R_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_R_reg                               (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_R_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_R_cmp_crc_even_r_shift                  (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_R_cmp_crc_even_r_mask                   (0xFFFFFFFF)
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_R_cmp_crc_even_r(data)                  (0xFFFFFFFF&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_R_get_cmp_crc_even_r(data)              (0xFFFFFFFF&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_B                                      0x1802784C
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_B_reg_addr                              "0xB802784C"
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_B_reg                                   0xB802784C
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_B_inst_addr                             "0x0048"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_B_reg(data)                         (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_B_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_B_reg                               (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_B_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_B_cmp_crc_even_b_shift                  (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_B_cmp_crc_even_b_mask                   (0xFFFFFFFF)
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_B_cmp_crc_even_b(data)                  (0xFFFFFFFF&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_CRC_EVEN_B_get_cmp_crc_even_b(data)              (0xFFFFFFFF&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0                                       0x18027860
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_reg_addr                               "0xB8027860"
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_reg                                    0xB8027860
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_inst_addr                              "0x0049"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_reg(data)                          (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_reg                                (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_blk0_add_value0_shift                  (24)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_dic_mode_tolerance_shift               (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_blk0_add_value32_shift                 (8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_blk0_add_value16_shift                 (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_blk0_add_value0_mask                   (0x3F000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_dic_mode_tolerance_mask                (0x00FF0000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_blk0_add_value32_mask                  (0x00003F00)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_blk0_add_value16_mask                  (0x0000003F)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_blk0_add_value0(data)                  (0x3F000000&((data)<<24))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_dic_mode_tolerance(data)               (0x00FF0000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_blk0_add_value32(data)                 (0x00003F00&((data)<<8))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_blk0_add_value16(data)                 (0x0000003F&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_get_blk0_add_value0(data)              ((0x3F000000&(data))>>24)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_get_dic_mode_tolerance(data)           ((0x00FF0000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_get_blk0_add_value32(data)             ((0x00003F00&(data))>>8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD0_get_blk0_add_value16(data)             (0x0000003F&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1                                       0x18027864
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_reg_addr                               "0xB8027864"
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_reg                                    0xB8027864
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_inst_addr                              "0x004A"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_reg(data)                          (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_reg                                (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_blk0_add_value8_shift                  (24)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_blk0_add_value4_shift                  (16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_blk0_add_value2_shift                  (8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_blk0_add_value1_shift                  (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_blk0_add_value8_mask                   (0x3F000000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_blk0_add_value4_mask                   (0x003F0000)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_blk0_add_value2_mask                   (0x00003F00)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_blk0_add_value1_mask                   (0x0000003F)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_blk0_add_value8(data)                  (0x3F000000&((data)<<24))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_blk0_add_value4(data)                  (0x003F0000&((data)<<16))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_blk0_add_value2(data)                  (0x00003F00&((data)<<8))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_blk0_add_value1(data)                  (0x0000003F&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_get_blk0_add_value8(data)              ((0x3F000000&(data))>>24)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_get_blk0_add_value4(data)              ((0x003F0000&(data))>>16)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_get_blk0_add_value2(data)              ((0x00003F00&(data))>>8)
#define  MDOMAIN_CAP_CAP_PQ_CMP_BLK0_ADD1_get_blk0_add_value1(data)              (0x0000003F&(data))

#define  MDOMAIN_CAP_CAP_PQ_CMP_DEN_EXTEND_RATE                                 0x1802786C
#define  MDOMAIN_CAP_CAP_PQ_CMP_DEN_EXTEND_RATE_reg_addr                         "0xB802786C"
#define  MDOMAIN_CAP_CAP_PQ_CMP_DEN_EXTEND_RATE_reg                              0xB802786C
#define  MDOMAIN_CAP_CAP_PQ_CMP_DEN_EXTEND_RATE_inst_addr                        "0x004B"
#define  set_MDOMAIN_CAP_CAP_PQ_CMP_DEN_EXTEND_RATE_reg(data)                    (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_DEN_EXTEND_RATE_reg)=data)
#define  get_MDOMAIN_CAP_CAP_PQ_CMP_DEN_EXTEND_RATE_reg                          (*((volatile unsigned int*)MDOMAIN_CAP_CAP_PQ_CMP_DEN_EXTEND_RATE_reg))
#define  MDOMAIN_CAP_CAP_PQ_CMP_DEN_EXTEND_RATE_pqc_den_extend_rate_shift        (0)
#define  MDOMAIN_CAP_CAP_PQ_CMP_DEN_EXTEND_RATE_pqc_den_extend_rate_mask         (0x0000000F)
#define  MDOMAIN_CAP_CAP_PQ_CMP_DEN_EXTEND_RATE_pqc_den_extend_rate(data)        (0x0000000F&(data))
#define  MDOMAIN_CAP_CAP_PQ_CMP_DEN_EXTEND_RATE_get_pqc_den_extend_rate(data)    (0x0000000F&(data))

#define  MDOMAIN_CAP_capm_forth_buf_addr                                        0x18027700
#define  MDOMAIN_CAP_capm_forth_buf_addr_reg_addr                                "0xB8027700"
#define  MDOMAIN_CAP_capm_forth_buf_addr_reg                                     0xB8027700
#define  MDOMAIN_CAP_capm_forth_buf_addr_inst_addr                               "0x004C"
#define  set_MDOMAIN_CAP_capm_forth_buf_addr_reg(data)                           (*((volatile unsigned int*)MDOMAIN_CAP_capm_forth_buf_addr_reg)=data)
#define  get_MDOMAIN_CAP_capm_forth_buf_addr_reg                                 (*((volatile unsigned int*)MDOMAIN_CAP_capm_forth_buf_addr_reg))
#define  MDOMAIN_CAP_capm_forth_buf_addr_in1_forth_bl_shift                      (3)
#define  MDOMAIN_CAP_capm_forth_buf_addr_in1_forth_bl_mask                       (0xFFFFFFF8)
#define  MDOMAIN_CAP_capm_forth_buf_addr_in1_forth_bl(data)                      (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_capm_forth_buf_addr_get_in1_forth_bl(data)                  ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_capm_fifth_buf_addr                                        0x18027704
#define  MDOMAIN_CAP_capm_fifth_buf_addr_reg_addr                                "0xB8027704"
#define  MDOMAIN_CAP_capm_fifth_buf_addr_reg                                     0xB8027704
#define  MDOMAIN_CAP_capm_fifth_buf_addr_inst_addr                               "0x004D"
#define  set_MDOMAIN_CAP_capm_fifth_buf_addr_reg(data)                           (*((volatile unsigned int*)MDOMAIN_CAP_capm_fifth_buf_addr_reg)=data)
#define  get_MDOMAIN_CAP_capm_fifth_buf_addr_reg                                 (*((volatile unsigned int*)MDOMAIN_CAP_capm_fifth_buf_addr_reg))
#define  MDOMAIN_CAP_capm_fifth_buf_addr_in1_fifth_bl_shift                      (3)
#define  MDOMAIN_CAP_capm_fifth_buf_addr_in1_fifth_bl_mask                       (0xFFFFFFF8)
#define  MDOMAIN_CAP_capm_fifth_buf_addr_in1_fifth_bl(data)                      (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_capm_fifth_buf_addr_get_in1_fifth_bl(data)                  ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_capm_sixth_buf_addr                                        0x18027708
#define  MDOMAIN_CAP_capm_sixth_buf_addr_reg_addr                                "0xB8027708"
#define  MDOMAIN_CAP_capm_sixth_buf_addr_reg                                     0xB8027708
#define  MDOMAIN_CAP_capm_sixth_buf_addr_inst_addr                               "0x004E"
#define  set_MDOMAIN_CAP_capm_sixth_buf_addr_reg(data)                           (*((volatile unsigned int*)MDOMAIN_CAP_capm_sixth_buf_addr_reg)=data)
#define  get_MDOMAIN_CAP_capm_sixth_buf_addr_reg                                 (*((volatile unsigned int*)MDOMAIN_CAP_capm_sixth_buf_addr_reg))
#define  MDOMAIN_CAP_capm_sixth_buf_addr_in1_sixth_bl_shift                      (3)
#define  MDOMAIN_CAP_capm_sixth_buf_addr_in1_sixth_bl_mask                       (0xFFFFFFF8)
#define  MDOMAIN_CAP_capm_sixth_buf_addr_in1_sixth_bl(data)                      (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_capm_sixth_buf_addr_get_in1_sixth_bl(data)                  ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_capm_seventh_buf_addr                                      0x1802770C
#define  MDOMAIN_CAP_capm_seventh_buf_addr_reg_addr                              "0xB802770C"
#define  MDOMAIN_CAP_capm_seventh_buf_addr_reg                                   0xB802770C
#define  MDOMAIN_CAP_capm_seventh_buf_addr_inst_addr                             "0x004F"
#define  set_MDOMAIN_CAP_capm_seventh_buf_addr_reg(data)                         (*((volatile unsigned int*)MDOMAIN_CAP_capm_seventh_buf_addr_reg)=data)
#define  get_MDOMAIN_CAP_capm_seventh_buf_addr_reg                               (*((volatile unsigned int*)MDOMAIN_CAP_capm_seventh_buf_addr_reg))
#define  MDOMAIN_CAP_capm_seventh_buf_addr_in1_seventh_bl_shift                  (3)
#define  MDOMAIN_CAP_capm_seventh_buf_addr_in1_seventh_bl_mask                   (0xFFFFFFF8)
#define  MDOMAIN_CAP_capm_seventh_buf_addr_in1_seventh_bl(data)                  (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_capm_seventh_buf_addr_get_in1_seventh_bl(data)              ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_capm_eightth_buf_addr                                      0x18027710
#define  MDOMAIN_CAP_capm_eightth_buf_addr_reg_addr                              "0xB8027710"
#define  MDOMAIN_CAP_capm_eightth_buf_addr_reg                                   0xB8027710
#define  MDOMAIN_CAP_capm_eightth_buf_addr_inst_addr                             "0x0050"
#define  set_MDOMAIN_CAP_capm_eightth_buf_addr_reg(data)                         (*((volatile unsigned int*)MDOMAIN_CAP_capm_eightth_buf_addr_reg)=data)
#define  get_MDOMAIN_CAP_capm_eightth_buf_addr_reg                               (*((volatile unsigned int*)MDOMAIN_CAP_capm_eightth_buf_addr_reg))
#define  MDOMAIN_CAP_capm_eightth_buf_addr_in1_eightth_bl_shift                  (3)
#define  MDOMAIN_CAP_capm_eightth_buf_addr_in1_eightth_bl_mask                   (0xFFFFFFF8)
#define  MDOMAIN_CAP_capm_eightth_buf_addr_in1_eightth_bl(data)                  (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_capm_eightth_buf_addr_get_in1_eightth_bl(data)              ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_caps_forth_buf_addr                                        0x18027720
#define  MDOMAIN_CAP_caps_forth_buf_addr_reg_addr                                "0xB8027720"
#define  MDOMAIN_CAP_caps_forth_buf_addr_reg                                     0xB8027720
#define  MDOMAIN_CAP_caps_forth_buf_addr_inst_addr                               "0x0051"
#define  set_MDOMAIN_CAP_caps_forth_buf_addr_reg(data)                           (*((volatile unsigned int*)MDOMAIN_CAP_caps_forth_buf_addr_reg)=data)
#define  get_MDOMAIN_CAP_caps_forth_buf_addr_reg                                 (*((volatile unsigned int*)MDOMAIN_CAP_caps_forth_buf_addr_reg))
#define  MDOMAIN_CAP_caps_forth_buf_addr_in2_forth_bl_shift                      (3)
#define  MDOMAIN_CAP_caps_forth_buf_addr_in2_forth_bl_mask                       (0xFFFFFFF8)
#define  MDOMAIN_CAP_caps_forth_buf_addr_in2_forth_bl(data)                      (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_caps_forth_buf_addr_get_in2_forth_bl(data)                  ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_caps_fifth_buf_addr                                        0x18027724
#define  MDOMAIN_CAP_caps_fifth_buf_addr_reg_addr                                "0xB8027724"
#define  MDOMAIN_CAP_caps_fifth_buf_addr_reg                                     0xB8027724
#define  MDOMAIN_CAP_caps_fifth_buf_addr_inst_addr                               "0x0052"
#define  set_MDOMAIN_CAP_caps_fifth_buf_addr_reg(data)                           (*((volatile unsigned int*)MDOMAIN_CAP_caps_fifth_buf_addr_reg)=data)
#define  get_MDOMAIN_CAP_caps_fifth_buf_addr_reg                                 (*((volatile unsigned int*)MDOMAIN_CAP_caps_fifth_buf_addr_reg))
#define  MDOMAIN_CAP_caps_fifth_buf_addr_in2_fifth_bl_shift                      (3)
#define  MDOMAIN_CAP_caps_fifth_buf_addr_in2_fifth_bl_mask                       (0xFFFFFFF8)
#define  MDOMAIN_CAP_caps_fifth_buf_addr_in2_fifth_bl(data)                      (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_caps_fifth_buf_addr_get_in2_fifth_bl(data)                  ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_caps_sixth_buf_addr                                        0x18027728
#define  MDOMAIN_CAP_caps_sixth_buf_addr_reg_addr                                "0xB8027728"
#define  MDOMAIN_CAP_caps_sixth_buf_addr_reg                                     0xB8027728
#define  MDOMAIN_CAP_caps_sixth_buf_addr_inst_addr                               "0x0053"
#define  set_MDOMAIN_CAP_caps_sixth_buf_addr_reg(data)                           (*((volatile unsigned int*)MDOMAIN_CAP_caps_sixth_buf_addr_reg)=data)
#define  get_MDOMAIN_CAP_caps_sixth_buf_addr_reg                                 (*((volatile unsigned int*)MDOMAIN_CAP_caps_sixth_buf_addr_reg))
#define  MDOMAIN_CAP_caps_sixth_buf_addr_in2_sixth_bl_shift                      (3)
#define  MDOMAIN_CAP_caps_sixth_buf_addr_in2_sixth_bl_mask                       (0xFFFFFFF8)
#define  MDOMAIN_CAP_caps_sixth_buf_addr_in2_sixth_bl(data)                      (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_caps_sixth_buf_addr_get_in2_sixth_bl(data)                  ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_caps_seventh_buf_addr                                      0x1802772C
#define  MDOMAIN_CAP_caps_seventh_buf_addr_reg_addr                              "0xB802772C"
#define  MDOMAIN_CAP_caps_seventh_buf_addr_reg                                   0xB802772C
#define  MDOMAIN_CAP_caps_seventh_buf_addr_inst_addr                             "0x0054"
#define  set_MDOMAIN_CAP_caps_seventh_buf_addr_reg(data)                         (*((volatile unsigned int*)MDOMAIN_CAP_caps_seventh_buf_addr_reg)=data)
#define  get_MDOMAIN_CAP_caps_seventh_buf_addr_reg                               (*((volatile unsigned int*)MDOMAIN_CAP_caps_seventh_buf_addr_reg))
#define  MDOMAIN_CAP_caps_seventh_buf_addr_in2_seventh_bl_shift                  (3)
#define  MDOMAIN_CAP_caps_seventh_buf_addr_in2_seventh_bl_mask                   (0xFFFFFFF8)
#define  MDOMAIN_CAP_caps_seventh_buf_addr_in2_seventh_bl(data)                  (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_caps_seventh_buf_addr_get_in2_seventh_bl(data)              ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_caps_eightth_buf_addr                                      0x18027730
#define  MDOMAIN_CAP_caps_eightth_buf_addr_reg_addr                              "0xB8027730"
#define  MDOMAIN_CAP_caps_eightth_buf_addr_reg                                   0xB8027730
#define  MDOMAIN_CAP_caps_eightth_buf_addr_inst_addr                             "0x0055"
#define  set_MDOMAIN_CAP_caps_eightth_buf_addr_reg(data)                         (*((volatile unsigned int*)MDOMAIN_CAP_caps_eightth_buf_addr_reg)=data)
#define  get_MDOMAIN_CAP_caps_eightth_buf_addr_reg                               (*((volatile unsigned int*)MDOMAIN_CAP_caps_eightth_buf_addr_reg))
#define  MDOMAIN_CAP_caps_eightth_buf_addr_in2_eightth_bl_shift                  (3)
#define  MDOMAIN_CAP_caps_eightth_buf_addr_in2_eightth_bl_mask                   (0xFFFFFFF8)
#define  MDOMAIN_CAP_caps_eightth_buf_addr_in2_eightth_bl(data)                  (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_caps_eightth_buf_addr_get_in2_eightth_bl(data)              ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_mdom_smooth_tog_1                                          0x18027740
#define  MDOMAIN_CAP_mdom_smooth_tog_1_reg_addr                                  "0xB8027740"
#define  MDOMAIN_CAP_mdom_smooth_tog_1_reg                                       0xB8027740
#define  MDOMAIN_CAP_mdom_smooth_tog_1_inst_addr                                 "0x0056"
#define  set_MDOMAIN_CAP_mdom_smooth_tog_1_reg(data)                             (*((volatile unsigned int*)MDOMAIN_CAP_mdom_smooth_tog_1_reg)=data)
#define  get_MDOMAIN_CAP_mdom_smooth_tog_1_reg                                   (*((volatile unsigned int*)MDOMAIN_CAP_mdom_smooth_tog_1_reg))
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_sub_set_size_flag_shift (6)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_sub_clr_size_flag_shift (5)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_sub_shift        (4)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_main_set_size_flag_shift (2)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_main_clr_size_flag_shift (1)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_main_shift       (0)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_sub_set_size_flag_mask (0x00000040)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_sub_clr_size_flag_mask (0x00000020)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_sub_mask         (0x00000010)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_main_set_size_flag_mask (0x00000004)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_main_clr_size_flag_mask (0x00000002)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_main_mask        (0x00000001)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_sub_set_size_flag(data) (0x00000040&((data)<<6))
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_sub_clr_size_flag(data) (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_sub(data)        (0x00000010&((data)<<4))
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_main_set_size_flag(data) (0x00000004&((data)<<2))
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_main_clr_size_flag(data) (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_mdom_smooth_tog_1_mdom_smooth_tog_new_mode_main(data)       (0x00000001&(data))
#define  MDOMAIN_CAP_mdom_smooth_tog_1_get_mdom_smooth_tog_new_mode_sub_set_size_flag(data) ((0x00000040&(data))>>6)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_get_mdom_smooth_tog_new_mode_sub_clr_size_flag(data) ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_get_mdom_smooth_tog_new_mode_sub(data)    ((0x00000010&(data))>>4)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_get_mdom_smooth_tog_new_mode_main_set_size_flag(data) ((0x00000004&(data))>>2)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_get_mdom_smooth_tog_new_mode_main_clr_size_flag(data) ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_mdom_smooth_tog_1_get_mdom_smooth_tog_new_mode_main(data)   (0x00000001&(data))

#define  MDOMAIN_CAP_mdom_smooth_tog_2                                          0x18027744
#define  MDOMAIN_CAP_mdom_smooth_tog_2_reg_addr                                  "0xB8027744"
#define  MDOMAIN_CAP_mdom_smooth_tog_2_reg                                       0xB8027744
#define  MDOMAIN_CAP_mdom_smooth_tog_2_inst_addr                                 "0x0057"
#define  set_MDOMAIN_CAP_mdom_smooth_tog_2_reg(data)                             (*((volatile unsigned int*)MDOMAIN_CAP_mdom_smooth_tog_2_reg)=data)
#define  get_MDOMAIN_CAP_mdom_smooth_tog_2_reg                                   (*((volatile unsigned int*)MDOMAIN_CAP_mdom_smooth_tog_2_reg))
#define  MDOMAIN_CAP_mdom_smooth_tog_2_sub_size_flag_shift                       (8)
#define  MDOMAIN_CAP_mdom_smooth_tog_2_main_size_flag_shift                      (0)
#define  MDOMAIN_CAP_mdom_smooth_tog_2_sub_size_flag_mask                        (0x0000FF00)
#define  MDOMAIN_CAP_mdom_smooth_tog_2_main_size_flag_mask                       (0x000000FF)
#define  MDOMAIN_CAP_mdom_smooth_tog_2_sub_size_flag(data)                       (0x0000FF00&((data)<<8))
#define  MDOMAIN_CAP_mdom_smooth_tog_2_main_size_flag(data)                      (0x000000FF&(data))
#define  MDOMAIN_CAP_mdom_smooth_tog_2_get_sub_size_flag(data)                   ((0x0000FF00&(data))>>8)
#define  MDOMAIN_CAP_mdom_smooth_tog_2_get_main_size_flag(data)                  (0x000000FF&(data))

#define  MDOMAIN_CAP_CapMain_BoundaryAddr_CTRL                                  0x18027750
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_CTRL_reg_addr                          "0xB8027750"
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_CTRL_reg                               0xB8027750
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_CTRL_inst_addr                         "0x0058"
#define  set_MDOMAIN_CAP_CapMain_BoundaryAddr_CTRL_reg(data)                     (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr_CTRL_reg)=data)
#define  get_MDOMAIN_CAP_CapMain_BoundaryAddr_CTRL_reg                           (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr_CTRL_reg))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_CTRL_in1_boundary_limit_mode_shift     (0)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_CTRL_in1_boundary_limit_mode_mask      (0x00000001)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_CTRL_in1_boundary_limit_mode(data)     (0x00000001&(data))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_CTRL_get_in1_boundary_limit_mode(data) (0x00000001&(data))

#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK0                                  0x18027754
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK0_reg_addr                          "0xB8027754"
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK0_reg                               0xB8027754
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK0_inst_addr                         "0x0059"
#define  set_MDOMAIN_CAP_CapMain_BoundaryAddr_BLK0_reg(data)                     (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr_BLK0_reg)=data)
#define  get_MDOMAIN_CAP_CapMain_BoundaryAddr_BLK0_reg                           (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr_BLK0_reg))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK0_in1_cap_downlimit_blk0_adr_shift  (3)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK0_in1_cap_downlimit_blk0_adr_mask   (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK0_in1_cap_downlimit_blk0_adr(data)  (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK0_get_in1_cap_downlimit_blk0_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK0                                 0x18027758
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK0_reg_addr                         "0xB8027758"
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK0_reg                              0xB8027758
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK0_inst_addr                        "0x005A"
#define  set_MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK0_reg(data)                    (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK0_reg)=data)
#define  get_MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK0_reg                          (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK0_reg))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK0_in1_cap_uplimit_blk0_adr_shift   (3)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK0_in1_cap_uplimit_blk0_adr_mask    (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK0_in1_cap_uplimit_blk0_adr(data)   (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK0_get_in1_cap_uplimit_blk0_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK1                                  0x1802775C
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK1_reg_addr                          "0xB802775C"
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK1_reg                               0xB802775C
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK1_inst_addr                         "0x005B"
#define  set_MDOMAIN_CAP_CapMain_BoundaryAddr_BLK1_reg(data)                     (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr_BLK1_reg)=data)
#define  get_MDOMAIN_CAP_CapMain_BoundaryAddr_BLK1_reg                           (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr_BLK1_reg))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK1_in1_cap_downlimit_blk1_adr_shift  (3)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK1_in1_cap_downlimit_blk1_adr_mask   (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK1_in1_cap_downlimit_blk1_adr(data)  (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK1_get_in1_cap_downlimit_blk1_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK1                                 0x18027760
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK1_reg_addr                         "0xB8027760"
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK1_reg                              0xB8027760
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK1_inst_addr                        "0x005C"
#define  set_MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK1_reg(data)                    (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK1_reg)=data)
#define  get_MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK1_reg                          (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK1_reg))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK1_in1_cap_uplimit_blk1_adr_shift   (3)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK1_in1_cap_uplimit_blk1_adr_mask    (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK1_in1_cap_uplimit_blk1_adr(data)   (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK1_get_in1_cap_uplimit_blk1_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK2                                  0x18027764
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK2_reg_addr                          "0xB8027764"
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK2_reg                               0xB8027764
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK2_inst_addr                         "0x005D"
#define  set_MDOMAIN_CAP_CapMain_BoundaryAddr_BLK2_reg(data)                     (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr_BLK2_reg)=data)
#define  get_MDOMAIN_CAP_CapMain_BoundaryAddr_BLK2_reg                           (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr_BLK2_reg))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK2_in1_cap_downlimit_blk2_adr_shift  (3)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK2_in1_cap_downlimit_blk2_adr_mask   (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK2_in1_cap_downlimit_blk2_adr(data)  (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr_BLK2_get_in1_cap_downlimit_blk2_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK2                                 0x18027768
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK2_reg_addr                         "0xB8027768"
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK2_reg                              0xB8027768
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK2_inst_addr                        "0x005E"
#define  set_MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK2_reg(data)                    (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK2_reg)=data)
#define  get_MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK2_reg                          (*((volatile unsigned int*)MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK2_reg))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK2_in1_cap_uplimit_blk2_adr_shift   (3)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK2_in1_cap_uplimit_blk2_adr_mask    (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK2_in1_cap_uplimit_blk2_adr(data)   (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapMain_BoundaryAddr2_BLK2_get_in1_cap_uplimit_blk2_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_CapSub_BoundaryAddr_CTRL                                   0x18027770
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_CTRL_reg_addr                           "0xB8027770"
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_CTRL_reg                                0xB8027770
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_CTRL_inst_addr                          "0x005F"
#define  set_MDOMAIN_CAP_CapSub_BoundaryAddr_CTRL_reg(data)                      (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr_CTRL_reg)=data)
#define  get_MDOMAIN_CAP_CapSub_BoundaryAddr_CTRL_reg                            (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr_CTRL_reg))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_CTRL_in2_boundary_limit_mode_shift      (0)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_CTRL_in2_boundary_limit_mode_mask       (0x00000001)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_CTRL_in2_boundary_limit_mode(data)      (0x00000001&(data))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_CTRL_get_in2_boundary_limit_mode(data)  (0x00000001&(data))

#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK0                                   0x18027774
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK0_reg_addr                           "0xB8027774"
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK0_reg                                0xB8027774
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK0_inst_addr                          "0x0060"
#define  set_MDOMAIN_CAP_CapSub_BoundaryAddr_BLK0_reg(data)                      (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr_BLK0_reg)=data)
#define  get_MDOMAIN_CAP_CapSub_BoundaryAddr_BLK0_reg                            (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr_BLK0_reg))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK0_in2_cap_downlimit_blk0_adr_shift   (3)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK0_in2_cap_downlimit_blk0_adr_mask    (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK0_in2_cap_downlimit_blk0_adr(data)   (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK0_get_in2_cap_downlimit_blk0_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK0                                  0x18027778
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK0_reg_addr                          "0xB8027778"
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK0_reg                               0xB8027778
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK0_inst_addr                         "0x0061"
#define  set_MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK0_reg(data)                     (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK0_reg)=data)
#define  get_MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK0_reg                           (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK0_reg))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK0_in2_cap_uplimit_blk0_adr_shift    (3)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK0_in2_cap_uplimit_blk0_adr_mask     (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK0_in2_cap_uplimit_blk0_adr(data)    (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK0_get_in2_cap_uplimit_blk0_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK1                                   0x1802777C
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK1_reg_addr                           "0xB802777C"
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK1_reg                                0xB802777C
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK1_inst_addr                          "0x0062"
#define  set_MDOMAIN_CAP_CapSub_BoundaryAddr_BLK1_reg(data)                      (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr_BLK1_reg)=data)
#define  get_MDOMAIN_CAP_CapSub_BoundaryAddr_BLK1_reg                            (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr_BLK1_reg))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK1_in2_cap_downlimit_blk1_adr_shift   (3)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK1_in2_cap_downlimit_blk1_adr_mask    (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK1_in2_cap_downlimit_blk1_adr(data)   (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK1_get_in2_cap_downlimit_blk1_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK1                                  0x18027780
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK1_reg_addr                          "0xB8027780"
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK1_reg                               0xB8027780
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK1_inst_addr                         "0x0063"
#define  set_MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK1_reg(data)                     (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK1_reg)=data)
#define  get_MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK1_reg                           (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK1_reg))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK1_in2_cap_uplimit_blk1_adr_shift    (3)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK1_in2_cap_uplimit_blk1_adr_mask     (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK1_in2_cap_uplimit_blk1_adr(data)    (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK1_get_in2_cap_uplimit_blk1_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK2                                   0x18027784
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK2_reg_addr                           "0xB8027784"
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK2_reg                                0xB8027784
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK2_inst_addr                          "0x0064"
#define  set_MDOMAIN_CAP_CapSub_BoundaryAddr_BLK2_reg(data)                      (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr_BLK2_reg)=data)
#define  get_MDOMAIN_CAP_CapSub_BoundaryAddr_BLK2_reg                            (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr_BLK2_reg))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK2_in2_cap_downlimit_blk2_adr_shift   (3)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK2_in2_cap_downlimit_blk2_adr_mask    (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK2_in2_cap_downlimit_blk2_adr(data)   (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr_BLK2_get_in2_cap_downlimit_blk2_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK2                                  0x18027788
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK2_reg_addr                          "0xB8027788"
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK2_reg                               0xB8027788
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK2_inst_addr                         "0x0065"
#define  set_MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK2_reg(data)                     (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK2_reg)=data)
#define  get_MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK2_reg                           (*((volatile unsigned int*)MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK2_reg))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK2_in2_cap_uplimit_blk2_adr_shift    (3)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK2_in2_cap_uplimit_blk2_adr_mask     (0xFFFFFFF8)
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK2_in2_cap_uplimit_blk2_adr(data)    (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_CAP_CapSub_BoundaryAddr2_BLK2_get_in2_cap_uplimit_blk2_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_CAP_CAPS_PQ_CMP                                                0x18027880
#define  MDOMAIN_CAP_CAPS_PQ_CMP_reg_addr                                        "0xB8027880"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_reg                                             0xB8027880
#define  MDOMAIN_CAP_CAPS_PQ_CMP_inst_addr                                       "0x0066"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_reg(data)                                   (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_reg                                         (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_s_cmp_en_shift                                  (31)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_s_cmp_width_div32_shift                         (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_s_cmp_height_shift                              (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_s_cmp_en_mask                                   (0x80000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_s_cmp_width_div32_mask                          (0x01FF0000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_s_cmp_height_mask                               (0x00003FFF)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_s_cmp_en(data)                                  (0x80000000&((data)<<31))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_s_cmp_width_div32(data)                         (0x01FF0000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_s_cmp_height(data)                              (0x00003FFF&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_get_s_cmp_en(data)                              ((0x80000000&(data))>>31)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_get_s_cmp_width_div32(data)                     ((0x01FF0000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_get_s_cmp_height(data)                          (0x00003FFF&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR                                           0x18027884
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_reg_addr                                   "0xB8027884"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_reg                                        0xB8027884
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_inst_addr                                  "0x0067"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_reg(data)                              (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_reg                                    (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_line_sum_bit_shift                   (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_400_old_mode_en_shift                (15)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_dummy_14_11_shift                          (11)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_jump4_en_shift                       (10)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_qp_mode_shift                        (8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_dic_mode_en_shift                    (7)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_two_line_prediction_en_shift             (6)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_line_mode_shift                      (5)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_data_color_shift                     (4)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_data_bit_width_shift                 (2)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_data_format_shift                    (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_line_sum_bit_mask                    (0xFFFF0000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_400_old_mode_en_mask                 (0x00008000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_dummy_14_11_mask                           (0x00007800)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_jump4_en_mask                        (0x00000400)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_qp_mode_mask                         (0x00000300)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_dic_mode_en_mask                     (0x00000080)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_two_line_prediction_en_mask              (0x00000040)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_line_mode_mask                       (0x00000020)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_data_color_mask                      (0x00000010)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_data_bit_width_mask                  (0x0000000C)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_data_format_mask                     (0x00000003)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_line_sum_bit(data)                   (0xFFFF0000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_400_old_mode_en(data)                (0x00008000&((data)<<15))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_dummy_14_11(data)                          (0x00007800&((data)<<11))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_jump4_en(data)                       (0x00000400&((data)<<10))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_qp_mode(data)                        (0x00000300&((data)<<8))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_dic_mode_en(data)                    (0x00000080&((data)<<7))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_two_line_prediction_en(data)             (0x00000040&((data)<<6))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_line_mode(data)                      (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_data_color(data)                     (0x00000010&((data)<<4))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_data_bit_width(data)                 (0x0000000C&((data)<<2))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_s_cmp_data_format(data)                    (0x00000003&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_get_s_cmp_line_sum_bit(data)               ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_get_s_cmp_400_old_mode_en(data)            ((0x00008000&(data))>>15)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_get_dummy_14_11(data)                      ((0x00007800&(data))>>11)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_get_s_cmp_jump4_en(data)                   ((0x00000400&(data))>>10)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_get_s_cmp_qp_mode(data)                    ((0x00000300&(data))>>8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_get_s_cmp_dic_mode_en(data)                ((0x00000080&(data))>>7)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_get_s_two_line_prediction_en(data)         ((0x00000040&(data))>>6)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_get_s_cmp_line_mode(data)                  ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_get_s_cmp_data_color(data)                 ((0x00000010&(data))>>4)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_get_s_cmp_data_bit_width(data)             ((0x0000000C&(data))>>2)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PAIR_get_s_cmp_data_format(data)                (0x00000003&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT                                            0x18027888
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_reg_addr                                    "0xB8027888"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_reg                                         0xB8027888
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_inst_addr                                   "0x0068"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_BIT_reg(data)                               (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_BIT_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_BIT_reg                                     (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_BIT_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_s_first_line_more_bit_shift                 (24)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_s_block_limit_bit_shift                     (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_s_line_limit_bit_shift                      (8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_s_frame_limit_bit_shift                     (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_s_first_line_more_bit_mask                  (0x3F000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_s_block_limit_bit_mask                      (0x003F0000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_s_line_limit_bit_mask                       (0x00003F00)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_s_frame_limit_bit_mask                      (0x0000003F)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_s_first_line_more_bit(data)                 (0x3F000000&((data)<<24))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_s_block_limit_bit(data)                     (0x003F0000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_s_line_limit_bit(data)                      (0x00003F00&((data)<<8))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_s_frame_limit_bit(data)                     (0x0000003F&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_get_s_first_line_more_bit(data)             ((0x3F000000&(data))>>24)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_get_s_block_limit_bit(data)                 ((0x003F0000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_get_s_line_limit_bit(data)                  ((0x00003F00&(data))>>8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BIT_get_s_frame_limit_bit(data)                 (0x0000003F&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE                                         0x1802788C
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_reg_addr                                 "0xB802788C"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_reg                                      0xB802788C
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_inst_addr                                "0x0069"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_reg(data)                            (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_reg                                  (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_input_fifo_pause_cycle_shift           (28)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_tail_dummy_throughput_shift            (27)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_first_predict_nc_mode_shift            (26)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_g_ratio_shift                          (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_add_last2blk_over_curve_bit_shift      (15)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_variation_maxmin_en_shift              (14)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_dynamic_sum_line_rst_shift             (13)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_blk0_add_en_shift                      (12)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_guarantee_max_qp_en_shift              (11)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_dynamic_allocate_ratio_en_shift        (10)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_poor_limit_min_qp_en_shift             (9)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_balance_en_shift                       (8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_fisrt_line_more_en_shift               (7)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_blk0_add_half_en_shift                 (6)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_do_422_mode_shift                      (4)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_first_predict_nc_en_shift              (3)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_not_enough_bit_do_422_en_shift         (2)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_not_rich_do_422_en_shift               (1)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_rb_lossy_do_422_en_shift               (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_input_fifo_pause_cycle_mask            (0xF0000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_tail_dummy_throughput_mask             (0x08000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_first_predict_nc_mode_mask             (0x04000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_g_ratio_mask                           (0x001F0000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_add_last2blk_over_curve_bit_mask       (0x00008000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_variation_maxmin_en_mask               (0x00004000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_dynamic_sum_line_rst_mask              (0x00002000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_blk0_add_en_mask                       (0x00001000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_guarantee_max_qp_en_mask               (0x00000800)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_dynamic_allocate_ratio_en_mask         (0x00000400)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_poor_limit_min_qp_en_mask              (0x00000200)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_balance_en_mask                        (0x00000100)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_fisrt_line_more_en_mask                (0x00000080)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_blk0_add_half_en_mask                  (0x00000040)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_do_422_mode_mask                       (0x00000030)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_first_predict_nc_en_mask               (0x00000008)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_not_enough_bit_do_422_en_mask          (0x00000004)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_not_rich_do_422_en_mask                (0x00000002)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_rb_lossy_do_422_en_mask                (0x00000001)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_input_fifo_pause_cycle(data)           (0xF0000000&((data)<<28))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_tail_dummy_throughput(data)            (0x08000000&((data)<<27))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_first_predict_nc_mode(data)            (0x04000000&((data)<<26))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_g_ratio(data)                          (0x001F0000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_add_last2blk_over_curve_bit(data)      (0x00008000&((data)<<15))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_variation_maxmin_en(data)              (0x00004000&((data)<<14))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_dynamic_sum_line_rst(data)             (0x00002000&((data)<<13))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_blk0_add_en(data)                      (0x00001000&((data)<<12))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_guarantee_max_qp_en(data)              (0x00000800&((data)<<11))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_dynamic_allocate_ratio_en(data)        (0x00000400&((data)<<10))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_poor_limit_min_qp_en(data)             (0x00000200&((data)<<9))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_balance_en(data)                       (0x00000100&((data)<<8))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_fisrt_line_more_en(data)               (0x00000080&((data)<<7))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_blk0_add_half_en(data)                 (0x00000040&((data)<<6))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_do_422_mode(data)                      (0x00000030&((data)<<4))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_first_predict_nc_en(data)              (0x00000008&((data)<<3))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_not_enough_bit_do_422_en(data)         (0x00000004&((data)<<2))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_not_rich_do_422_en(data)               (0x00000002&((data)<<1))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_s_rb_lossy_do_422_en(data)               (0x00000001&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_input_fifo_pause_cycle(data)       ((0xF0000000&(data))>>28)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_tail_dummy_throughput(data)        ((0x08000000&(data))>>27)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_first_predict_nc_mode(data)        ((0x04000000&(data))>>26)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_g_ratio(data)                      ((0x001F0000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_add_last2blk_over_curve_bit(data)  ((0x00008000&(data))>>15)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_variation_maxmin_en(data)          ((0x00004000&(data))>>14)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_dynamic_sum_line_rst(data)         ((0x00002000&(data))>>13)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_blk0_add_en(data)                  ((0x00001000&(data))>>12)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_guarantee_max_qp_en(data)          ((0x00000800&(data))>>11)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_dynamic_allocate_ratio_en(data)    ((0x00000400&(data))>>10)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_poor_limit_min_qp_en(data)         ((0x00000200&(data))>>9)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_balance_en(data)                   ((0x00000100&(data))>>8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_fisrt_line_more_en(data)           ((0x00000080&(data))>>7)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_blk0_add_half_en(data)             ((0x00000040&(data))>>6)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_do_422_mode(data)                  ((0x00000030&(data))>>4)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_first_predict_nc_en(data)          ((0x00000008&(data))>>3)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_not_enough_bit_do_422_en(data)     ((0x00000004&(data))>>2)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_not_rich_do_422_en(data)           ((0x00000002&(data))>>1)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ENABLE_get_s_rb_lossy_do_422_en(data)           (0x00000001&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH                                         0x18027890
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_reg_addr                                 "0xB8027890"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_reg                                      0xB8027890
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_inst_addr                                "0x006A"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_reg(data)                            (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_reg                                  (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_dic_mode_option_shift                  (28)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_not_enough_bit_do_422_qp_shift         (24)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_not_rich_do_422_th_shift               (20)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_rb_lossy_do_422_qp_level_shift         (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_dic_mode_entry_th_shift                (12)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_variation_value_th_shift               (8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_variation_num_th_shift                 (4)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_variation_near_num_th_shift            (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_dic_mode_option_mask                   (0xF0000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_not_enough_bit_do_422_qp_mask          (0x07000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_not_rich_do_422_th_mask                (0x00F00000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_rb_lossy_do_422_qp_level_mask          (0x00070000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_dic_mode_entry_th_mask                 (0x0000F000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_variation_value_th_mask                (0x00000F00)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_variation_num_th_mask                  (0x00000070)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_variation_near_num_th_mask             (0x00000007)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_dic_mode_option(data)                  (0xF0000000&((data)<<28))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_not_enough_bit_do_422_qp(data)         (0x07000000&((data)<<24))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_not_rich_do_422_th(data)               (0x00F00000&((data)<<20))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_rb_lossy_do_422_qp_level(data)         (0x00070000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_dic_mode_entry_th(data)                (0x0000F000&((data)<<12))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_variation_value_th(data)               (0x00000F00&((data)<<8))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_variation_num_th(data)                 (0x00000070&((data)<<4))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_s_variation_near_num_th(data)            (0x00000007&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_get_s_dic_mode_option(data)              ((0xF0000000&(data))>>28)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_get_s_not_enough_bit_do_422_qp(data)     ((0x07000000&(data))>>24)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_get_s_not_rich_do_422_th(data)           ((0x00F00000&(data))>>20)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_get_s_rb_lossy_do_422_qp_level(data)     ((0x00070000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_get_s_dic_mode_entry_th(data)            ((0x0000F000&(data))>>12)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_get_s_variation_value_th(data)           ((0x00000F00&(data))>>8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_get_s_variation_num_th(data)             ((0x00000070&(data))>>4)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_SMOOTH_get_s_variation_near_num_th(data)        (0x00000007&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE                                       0x18027894
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_reg_addr                               "0xB8027894"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_reg                                    0xB8027894
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_inst_addr                              "0x006B"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_reg(data)                          (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_reg                                (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_s_dynamic_allocate_ratio_max_shift     (24)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_s_dynamic_allocate_ratio_min_shift     (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_s_dynamic_allocate_line_shift          (8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_s_dynamic_allocate_more_shift          (4)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_s_dynamic_allocate_less_shift          (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_s_dynamic_allocate_ratio_max_mask      (0x1F000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_s_dynamic_allocate_ratio_min_mask      (0x001F0000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_s_dynamic_allocate_line_mask           (0x00000700)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_s_dynamic_allocate_more_mask           (0x000000F0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_s_dynamic_allocate_less_mask           (0x0000000F)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_s_dynamic_allocate_ratio_max(data)     (0x1F000000&((data)<<24))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_s_dynamic_allocate_ratio_min(data)     (0x001F0000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_s_dynamic_allocate_line(data)          (0x00000700&((data)<<8))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_s_dynamic_allocate_more(data)          (0x000000F0&((data)<<4))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_s_dynamic_allocate_less(data)          (0x0000000F&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_get_s_dynamic_allocate_ratio_max(data) ((0x1F000000&(data))>>24)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_get_s_dynamic_allocate_ratio_min(data) ((0x001F0000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_get_s_dynamic_allocate_line(data)      ((0x00000700&(data))>>8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_get_s_dynamic_allocate_more(data)      ((0x000000F0&(data))>>4)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ALLOCATE_get_s_dynamic_allocate_less(data)      (0x0000000F&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR                                           0x18027898
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_reg_addr                                   "0xB8027898"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_reg                                        0xB8027898
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_inst_addr                                  "0x006C"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_POOR_reg(data)                              (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_POOR_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_POOR_reg                                    (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_POOR_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_s_poor_limit_th_qp4_shift                  (24)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_s_poor_limit_th_qp3_shift                  (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_s_poor_limit_th_qp2_shift                  (8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_s_poor_limit_th_qp1_shift                  (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_s_poor_limit_th_qp4_mask                   (0x1F000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_s_poor_limit_th_qp3_mask                   (0x001F0000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_s_poor_limit_th_qp2_mask                   (0x00001F00)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_s_poor_limit_th_qp1_mask                   (0x0000001F)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_s_poor_limit_th_qp4(data)                  (0x1F000000&((data)<<24))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_s_poor_limit_th_qp3(data)                  (0x001F0000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_s_poor_limit_th_qp2(data)                  (0x00001F00&((data)<<8))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_s_poor_limit_th_qp1(data)                  (0x0000001F&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_get_s_poor_limit_th_qp4(data)              ((0x1F000000&(data))>>24)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_get_s_poor_limit_th_qp3(data)              ((0x001F0000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_get_s_poor_limit_th_qp2(data)              ((0x00001F00&(data))>>8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_POOR_get_s_poor_limit_th_qp1(data)              (0x0000001F&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee                                      0x1802789C
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_reg_addr                              "0xB802789C"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_reg                                   0xB802789C
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_inst_addr                             "0x006D"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_reg(data)                         (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_reg                               (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_s_cmp_crc_ro_line_sel_shift           (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_s_dic_mode_qp_th_rb_shift             (12)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_s_dic_mode_qp_th_g_shift              (8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_s_guarantee_max_rb_qp_shift           (4)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_s_guarantee_max_g_qp_shift            (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_s_cmp_crc_ro_line_sel_mask            (0x3FFF0000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_s_dic_mode_qp_th_rb_mask              (0x0000F000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_s_dic_mode_qp_th_g_mask               (0x00000F00)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_s_guarantee_max_rb_qp_mask            (0x000000F0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_s_guarantee_max_g_qp_mask             (0x0000000F)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_s_cmp_crc_ro_line_sel(data)           (0x3FFF0000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_s_dic_mode_qp_th_rb(data)             (0x0000F000&((data)<<12))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_s_dic_mode_qp_th_g(data)              (0x00000F00&((data)<<8))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_s_guarantee_max_rb_qp(data)           (0x000000F0&((data)<<4))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_s_guarantee_max_g_qp(data)            (0x0000000F&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_get_s_cmp_crc_ro_line_sel(data)       ((0x3FFF0000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_get_s_dic_mode_qp_th_rb(data)         ((0x0000F000&(data))>>12)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_get_s_dic_mode_qp_th_g(data)          ((0x00000F00&(data))>>8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_get_s_guarantee_max_rb_qp(data)       ((0x000000F0&(data))>>4)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_Guarantee_get_s_guarantee_max_g_qp(data)        (0x0000000F&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE                                        0x180278A0
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_reg_addr                                "0xB80278A0"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_reg                                     0xB80278A0
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_inst_addr                               "0x006E"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_reg(data)                           (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_reg                                 (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_variation_maxmin_th2_shift            (24)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_variation_maxmin_th_shift             (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_rb_ov_th_shift                (12)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_rb_ud_th_shift                (10)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_rb_give_shift                 (8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_g_ov_th_shift                 (4)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_g_ud_th_shift                 (2)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_g_give_shift                  (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_variation_maxmin_th2_mask             (0xFF000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_variation_maxmin_th_mask              (0x00FF0000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_rb_ov_th_mask                 (0x00003000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_rb_ud_th_mask                 (0x00000C00)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_rb_give_mask                  (0x00000300)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_g_ov_th_mask                  (0x00000030)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_g_ud_th_mask                  (0x0000000C)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_g_give_mask                   (0x00000003)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_variation_maxmin_th2(data)            (0xFF000000&((data)<<24))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_variation_maxmin_th(data)             (0x00FF0000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_rb_ov_th(data)                (0x00003000&((data)<<12))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_rb_ud_th(data)                (0x00000C00&((data)<<10))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_rb_give(data)                 (0x00000300&((data)<<8))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_g_ov_th(data)                 (0x00000030&((data)<<4))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_g_ud_th(data)                 (0x0000000C&((data)<<2))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_s_balance_g_give(data)                  (0x00000003&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_get_s_variation_maxmin_th2(data)        ((0xFF000000&(data))>>24)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_get_s_variation_maxmin_th(data)         ((0x00FF0000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_get_s_balance_rb_ov_th(data)            ((0x00003000&(data))>>12)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_get_s_balance_rb_ud_th(data)            ((0x00000C00&(data))>>10)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_get_s_balance_rb_give(data)             ((0x00000300&(data))>>8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_get_s_balance_g_ov_th(data)             ((0x00000030&(data))>>4)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_get_s_balance_g_ud_th(data)             ((0x0000000C&(data))>>2)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BALANCE_get_s_balance_g_give(data)              (0x00000003&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN                                         0x180278A4
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_reg_addr                                 "0xB80278A4"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_reg                                      0xB80278A4
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_inst_addr                                "0x006F"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_reg(data)                            (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_reg                                  (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_prs_over_line_sum_bit_irq_en_shift     (18)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_tail_fifo_overflow_irq_en_shift        (17)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_input_fifo_overflow_irq_en_shift       (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_block_fifo_overflow_irq_en_shift       (15)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_input_size_more_irq_en_shift           (14)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_input_size_less_irq_en_shift           (13)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_over_flb_irq_en_shift                  (12)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_request_fifo_even_overflow_irq_en_shift (9)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_g_fifo_even_overflow_irq_en_shift      (6)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_r_fifo_even_overflow_irq_en_shift      (5)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_b_fifo_even_overflow_irq_en_shift      (4)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_prs_over_line_sum_bit_irq_en_mask      (0x00040000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_tail_fifo_overflow_irq_en_mask         (0x00020000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_input_fifo_overflow_irq_en_mask        (0x00010000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_block_fifo_overflow_irq_en_mask        (0x00008000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_input_size_more_irq_en_mask            (0x00004000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_input_size_less_irq_en_mask            (0x00002000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_over_flb_irq_en_mask                   (0x00001000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_request_fifo_even_overflow_irq_en_mask (0x00000200)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_g_fifo_even_overflow_irq_en_mask       (0x00000040)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_r_fifo_even_overflow_irq_en_mask       (0x00000020)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_b_fifo_even_overflow_irq_en_mask       (0x00000010)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_prs_over_line_sum_bit_irq_en(data)     (0x00040000&((data)<<18))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_tail_fifo_overflow_irq_en(data)        (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_input_fifo_overflow_irq_en(data)       (0x00010000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_block_fifo_overflow_irq_en(data)       (0x00008000&((data)<<15))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_input_size_more_irq_en(data)           (0x00004000&((data)<<14))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_input_size_less_irq_en(data)           (0x00002000&((data)<<13))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_over_flb_irq_en(data)                  (0x00001000&((data)<<12))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_request_fifo_even_overflow_irq_en(data) (0x00000200&((data)<<9))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_g_fifo_even_overflow_irq_en(data)      (0x00000040&((data)<<6))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_r_fifo_even_overflow_irq_en(data)      (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_s_b_fifo_even_overflow_irq_en(data)      (0x00000010&((data)<<4))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_get_s_prs_over_line_sum_bit_irq_en(data) ((0x00040000&(data))>>18)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_get_s_tail_fifo_overflow_irq_en(data)    ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_get_s_input_fifo_overflow_irq_en(data)   ((0x00010000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_get_s_block_fifo_overflow_irq_en(data)   ((0x00008000&(data))>>15)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_get_s_input_size_more_irq_en(data)       ((0x00004000&(data))>>14)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_get_s_input_size_less_irq_en(data)       ((0x00002000&(data))>>13)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_get_s_over_flb_irq_en(data)              ((0x00001000&(data))>>12)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_get_s_request_fifo_even_overflow_irq_en(data) ((0x00000200&(data))>>9)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_get_s_g_fifo_even_overflow_irq_en(data)  ((0x00000040&(data))>>6)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_get_s_r_fifo_even_overflow_irq_en(data)  ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_EN_get_s_b_fifo_even_overflow_irq_en(data)  ((0x00000010&(data))>>4)

#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST                                         0x180278A8
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_reg_addr                                 "0xB80278A8"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_reg                                      0xB80278A8
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_inst_addr                                "0x0070"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_reg(data)                            (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_reg                                  (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_pqc_irq_shift                          (31)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_prs_over_line_sum_bit_st_shift         (18)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_tail_fifo_overflow_st_shift            (17)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_input_fifo_overflow_st_shift           (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_block_fifo_overflow_st_shift           (15)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_input_size_more_st_shift               (14)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_input_size_less_st_shift               (13)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_over_flb_st_shift                      (12)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_request_fifo_even_overflow_st_shift    (9)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_g_fifo_even_overflow_st_shift          (6)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_r_fifo_even_overflow_st_shift          (5)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_b_fifo_even_overflow_st_shift          (4)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_pqc_irq_mask                           (0x80000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_prs_over_line_sum_bit_st_mask          (0x00040000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_tail_fifo_overflow_st_mask             (0x00020000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_input_fifo_overflow_st_mask            (0x00010000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_block_fifo_overflow_st_mask            (0x00008000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_input_size_more_st_mask                (0x00004000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_input_size_less_st_mask                (0x00002000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_over_flb_st_mask                       (0x00001000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_request_fifo_even_overflow_st_mask     (0x00000200)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_g_fifo_even_overflow_st_mask           (0x00000040)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_r_fifo_even_overflow_st_mask           (0x00000020)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_b_fifo_even_overflow_st_mask           (0x00000010)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_pqc_irq(data)                          (0x80000000&((data)<<31))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_prs_over_line_sum_bit_st(data)         (0x00040000&((data)<<18))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_tail_fifo_overflow_st(data)            (0x00020000&((data)<<17))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_input_fifo_overflow_st(data)           (0x00010000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_block_fifo_overflow_st(data)           (0x00008000&((data)<<15))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_input_size_more_st(data)               (0x00004000&((data)<<14))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_input_size_less_st(data)               (0x00002000&((data)<<13))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_over_flb_st(data)                      (0x00001000&((data)<<12))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_request_fifo_even_overflow_st(data)    (0x00000200&((data)<<9))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_g_fifo_even_overflow_st(data)          (0x00000040&((data)<<6))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_r_fifo_even_overflow_st(data)          (0x00000020&((data)<<5))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_s_b_fifo_even_overflow_st(data)          (0x00000010&((data)<<4))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_get_s_pqc_irq(data)                      ((0x80000000&(data))>>31)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_get_s_prs_over_line_sum_bit_st(data)     ((0x00040000&(data))>>18)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_get_s_tail_fifo_overflow_st(data)        ((0x00020000&(data))>>17)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_get_s_input_fifo_overflow_st(data)       ((0x00010000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_get_s_block_fifo_overflow_st(data)       ((0x00008000&(data))>>15)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_get_s_input_size_more_st(data)           ((0x00004000&(data))>>14)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_get_s_input_size_less_st(data)           ((0x00002000&(data))>>13)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_get_s_over_flb_st(data)                  ((0x00001000&(data))>>12)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_get_s_request_fifo_even_overflow_st(data) ((0x00000200&(data))>>9)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_get_s_g_fifo_even_overflow_st(data)      ((0x00000040&(data))>>6)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_get_s_r_fifo_even_overflow_st(data)      ((0x00000020&(data))>>5)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_IRQ_ST_get_s_b_fifo_even_overflow_st(data)      ((0x00000010&(data))>>4)

#define  MDOMAIN_CAP_CAPS_PQ_CMP_ST                                             0x180278AC
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ST_reg_addr                                     "0xB80278AC"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ST_reg                                          0xB80278AC
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ST_inst_addr                                    "0x0071"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_ST_reg(data)                                (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_ST_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_ST_reg                                      (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_ST_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ST_s_g_ratio_max_shift                          (24)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ST_s_g_ratio_min_shift                          (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ST_s_cmp_package_height_cnt_shift               (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ST_s_g_ratio_max_mask                           (0x1F000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ST_s_g_ratio_min_mask                           (0x001F0000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ST_s_cmp_package_height_cnt_mask                (0x00003FFF)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ST_s_g_ratio_max(data)                          (0x1F000000&((data)<<24))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ST_s_g_ratio_min(data)                          (0x001F0000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ST_s_cmp_package_height_cnt(data)               (0x00003FFF&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ST_get_s_g_ratio_max(data)                      ((0x1F000000&(data))>>24)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ST_get_s_g_ratio_min(data)                      ((0x001F0000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_ST_get_s_cmp_package_height_cnt(data)           (0x00003FFF&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST                                          0x180278B0
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_reg_addr                                  "0xB80278B0"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_reg                                       0xB80278B0
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_inst_addr                                 "0x0072"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_reg(data)                             (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_reg                                   (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_s_long_term_qp_measure_en_shift           (31)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_s_long_term_g_qp_max_shift                (20)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_s_long_term_rb_qp_max_shift               (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_s_short_term_g_qp_max_shift               (4)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_s_short_term_rb_qp_max_shift              (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_s_long_term_qp_measure_en_mask            (0x80000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_s_long_term_g_qp_max_mask                 (0x00F00000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_s_long_term_rb_qp_max_mask                (0x000F0000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_s_short_term_g_qp_max_mask                (0x000000F0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_s_short_term_rb_qp_max_mask               (0x0000000F)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_s_long_term_qp_measure_en(data)           (0x80000000&((data)<<31))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_s_long_term_g_qp_max(data)                (0x00F00000&((data)<<20))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_s_long_term_rb_qp_max(data)               (0x000F0000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_s_short_term_g_qp_max(data)               (0x000000F0&((data)<<4))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_s_short_term_rb_qp_max(data)              (0x0000000F&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_get_s_long_term_qp_measure_en(data)       ((0x80000000&(data))>>31)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_get_s_long_term_g_qp_max(data)            ((0x00F00000&(data))>>20)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_get_s_long_term_rb_qp_max(data)           ((0x000F0000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_get_s_short_term_g_qp_max(data)           ((0x000000F0&(data))>>4)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_QP_ST_get_s_short_term_rb_qp_max(data)          (0x0000000F&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1                                       0x180278B4
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_reg_addr                               "0xB80278B4"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_reg                                    0xB80278B4
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_inst_addr                              "0x0073"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_reg(data)                          (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_reg                                (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_s_fifo_water_measure_en_shift          (31)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_s_fifo_water_even_g_shift              (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_s_fifo_water_even_r_shift              (8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_s_fifo_water_even_b_shift              (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_s_fifo_water_measure_en_mask           (0x80000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_s_fifo_water_even_g_mask               (0x00FF0000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_s_fifo_water_even_r_mask               (0x0000FF00)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_s_fifo_water_even_b_mask               (0x000000FF)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_s_fifo_water_measure_en(data)          (0x80000000&((data)<<31))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_s_fifo_water_even_g(data)              (0x00FF0000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_s_fifo_water_even_r(data)              (0x0000FF00&((data)<<8))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_s_fifo_water_even_b(data)              (0x000000FF&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_get_s_fifo_water_measure_en(data)      ((0x80000000&(data))>>31)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_get_s_fifo_water_even_g(data)          ((0x00FF0000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_get_s_fifo_water_even_r(data)          ((0x0000FF00&(data))>>8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_FIFO_ST1_get_s_fifo_water_even_b(data)          (0x000000FF&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_LEFT_ST                                        0x180278B8
#define  MDOMAIN_CAP_CAPS_PQ_CMP_LEFT_ST_reg_addr                                "0xB80278B8"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_LEFT_ST_reg                                     0xB80278B8
#define  MDOMAIN_CAP_CAPS_PQ_CMP_LEFT_ST_inst_addr                               "0x0074"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_LEFT_ST_reg(data)                           (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_LEFT_ST_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_LEFT_ST_reg                                 (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_LEFT_ST_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_LEFT_ST_s_g_frame_left_shift                    (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_LEFT_ST_s_rb_frame_left_shift                   (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_LEFT_ST_s_g_frame_left_mask                     (0xFFFF0000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_LEFT_ST_s_rb_frame_left_mask                    (0x0000FFFF)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_LEFT_ST_s_g_frame_left(data)                    (0xFFFF0000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_LEFT_ST_s_rb_frame_left(data)                   (0x0000FFFF&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_LEFT_ST_get_s_g_frame_left(data)                ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_LEFT_ST_get_s_rb_frame_left(data)               (0x0000FFFF&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_PACKAGE_ST                                     0x180278BC
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PACKAGE_ST_reg_addr                             "0xB80278BC"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PACKAGE_ST_reg                                  0xB80278BC
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PACKAGE_ST_inst_addr                            "0x0075"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_PACKAGE_ST_reg(data)                        (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_PACKAGE_ST_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_PACKAGE_ST_reg                              (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_PACKAGE_ST_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PACKAGE_ST_s_total_package_long_term_shift      (31)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PACKAGE_ST_s_total_package_even_shift           (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PACKAGE_ST_s_total_package_long_term_mask       (0x80000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PACKAGE_ST_s_total_package_even_mask            (0x00FFFFFF)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PACKAGE_ST_s_total_package_long_term(data)      (0x80000000&((data)<<31))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PACKAGE_ST_s_total_package_even(data)           (0x00FFFFFF&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PACKAGE_ST_get_s_total_package_long_term(data)  ((0x80000000&(data))>>31)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_PACKAGE_ST_get_s_total_package_even(data)       (0x00FFFFFF&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_G                                     0x180278C0
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_G_reg_addr                             "0xB80278C0"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_G_reg                                  0xB80278C0
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_G_inst_addr                            "0x0076"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_G_reg(data)                        (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_G_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_G_reg                              (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_G_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_G_s_cmp_crc_even_g_shift               (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_G_s_cmp_crc_even_g_mask                (0xFFFFFFFF)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_G_s_cmp_crc_even_g(data)               (0xFFFFFFFF&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_G_get_s_cmp_crc_even_g(data)           (0xFFFFFFFF&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_R                                     0x180278C4
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_R_reg_addr                             "0xB80278C4"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_R_reg                                  0xB80278C4
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_R_inst_addr                            "0x0077"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_R_reg(data)                        (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_R_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_R_reg                              (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_R_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_R_s_cmp_crc_even_r_shift               (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_R_s_cmp_crc_even_r_mask                (0xFFFFFFFF)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_R_s_cmp_crc_even_r(data)               (0xFFFFFFFF&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_R_get_s_cmp_crc_even_r(data)           (0xFFFFFFFF&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_B                                     0x180278C8
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_B_reg_addr                             "0xB80278C8"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_B_reg                                  0xB80278C8
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_B_inst_addr                            "0x0078"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_B_reg(data)                        (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_B_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_B_reg                              (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_B_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_B_s_cmp_crc_even_b_shift               (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_B_s_cmp_crc_even_b_mask                (0xFFFFFFFF)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_B_s_cmp_crc_even_b(data)               (0xFFFFFFFF&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_CRC_EVEN_B_get_s_cmp_crc_even_b(data)           (0xFFFFFFFF&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0                                      0x180278CC
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_reg_addr                              "0xB80278CC"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_reg                                   0xB80278CC
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_inst_addr                             "0x0079"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_reg(data)                         (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_reg                               (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_s_blk0_add_value0_shift               (24)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_s_dic_mode_tolerance_shift            (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_s_blk0_add_value32_shift              (8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_s_blk0_add_value16_shift              (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_s_blk0_add_value0_mask                (0x3F000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_s_dic_mode_tolerance_mask             (0x00FF0000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_s_blk0_add_value32_mask               (0x00003F00)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_s_blk0_add_value16_mask               (0x0000003F)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_s_blk0_add_value0(data)               (0x3F000000&((data)<<24))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_s_dic_mode_tolerance(data)            (0x00FF0000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_s_blk0_add_value32(data)              (0x00003F00&((data)<<8))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_s_blk0_add_value16(data)              (0x0000003F&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_get_s_blk0_add_value0(data)           ((0x3F000000&(data))>>24)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_get_s_dic_mode_tolerance(data)        ((0x00FF0000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_get_s_blk0_add_value32(data)          ((0x00003F00&(data))>>8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD0_get_s_blk0_add_value16(data)          (0x0000003F&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1                                      0x180278D0
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_reg_addr                              "0xB80278D0"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_reg                                   0xB80278D0
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_inst_addr                             "0x007A"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_reg(data)                         (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_reg                               (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_s_blk0_add_value8_shift               (24)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_s_blk0_add_value4_shift               (16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_s_blk0_add_value2_shift               (8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_s_blk0_add_value1_shift               (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_s_blk0_add_value8_mask                (0x3F000000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_s_blk0_add_value4_mask                (0x003F0000)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_s_blk0_add_value2_mask                (0x00003F00)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_s_blk0_add_value1_mask                (0x0000003F)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_s_blk0_add_value8(data)               (0x3F000000&((data)<<24))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_s_blk0_add_value4(data)               (0x003F0000&((data)<<16))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_s_blk0_add_value2(data)               (0x00003F00&((data)<<8))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_s_blk0_add_value1(data)               (0x0000003F&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_get_s_blk0_add_value8(data)           ((0x3F000000&(data))>>24)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_get_s_blk0_add_value4(data)           ((0x003F0000&(data))>>16)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_get_s_blk0_add_value2(data)           ((0x00003F00&(data))>>8)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_BLK0_ADD1_get_s_blk0_add_value1(data)           (0x0000003F&(data))

#define  MDOMAIN_CAP_CAPS_PQ_CMP_DEN_EXTEND_RATE                                0x180278D4
#define  MDOMAIN_CAP_CAPS_PQ_CMP_DEN_EXTEND_RATE_reg_addr                        "0xB80278D4"
#define  MDOMAIN_CAP_CAPS_PQ_CMP_DEN_EXTEND_RATE_reg                             0xB80278D4
#define  MDOMAIN_CAP_CAPS_PQ_CMP_DEN_EXTEND_RATE_inst_addr                       "0x007B"
#define  set_MDOMAIN_CAP_CAPS_PQ_CMP_DEN_EXTEND_RATE_reg(data)                   (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_DEN_EXTEND_RATE_reg)=data)
#define  get_MDOMAIN_CAP_CAPS_PQ_CMP_DEN_EXTEND_RATE_reg                         (*((volatile unsigned int*)MDOMAIN_CAP_CAPS_PQ_CMP_DEN_EXTEND_RATE_reg))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_DEN_EXTEND_RATE_s_pqc_den_extend_rate_shift     (0)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_DEN_EXTEND_RATE_s_pqc_den_extend_rate_mask      (0x0000000F)
#define  MDOMAIN_CAP_CAPS_PQ_CMP_DEN_EXTEND_RATE_s_pqc_den_extend_rate(data)     (0x0000000F&(data))
#define  MDOMAIN_CAP_CAPS_PQ_CMP_DEN_EXTEND_RATE_get_s_pqc_den_extend_rate(data) (0x0000000F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======MDOMAIN_CAP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  in1_wtlvl:9;
        RBus_UInt32  in1_write_num:16;
    };
}mdomain_cap_ddr_in1wtlvl_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  in1_wrlen:8;
        RBus_UInt32  in1_write_remain:8;
    };
}mdomain_cap_ddr_in1wrlen_rem_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_wr_mem_start:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_ddr_in1addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_line_step:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_ddr_in1linestep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_block_step:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_ddr_in1blkstep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_sec_bl:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_ddr_in1_2ndaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_third_bl:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_ddr_in1_3rdaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  in1_zero:1;
        RBus_UInt32  in1_frame_access_mode:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  in1_line_number:13;
    };
}mdomain_cap_ddr_in1linenum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_checksum_en:1;
        RBus_UInt32  in1_disp2cap_distance:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  in1_bufnum:3;
        RBus_UInt32  in1_unfreeze_wait:3;
        RBus_UInt32  in1_auto_unfreeze:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  in1_freeze_option:1;
        RBus_UInt32  in1_freeze_control:1;
        RBus_UInt32  in1_bad_edit_suppression:1;
        RBus_UInt32  dispm_dbg_sel:4;
        RBus_UInt32  in1_l_flag_inv:1;
        RBus_UInt32  in1_rm_r_vs_en:1;
        RBus_UInt32  in1_dout_align:1;
        RBus_UInt32  in1_v_flip_3buf_en:1;
        RBus_UInt32  in1_merge_enable:1;
        RBus_UInt32  in1_double_enable:1;
        RBus_UInt32  in1_block_free:1;
        RBus_UInt32  in1_single_buffer_select:3;
        RBus_UInt32  in1_freeze_enable:1;
        RBus_UInt32  in1_en_vs_rst:1;
    };
}mdomain_cap_ddr_in1ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  in1_cap_enable_real:1;
        RBus_UInt32  in1_burst_ongo:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  in1_sub_freeze_enable_2nd:1;
        RBus_UInt32  in1_auto_unfreeze_2nd:1;
        RBus_UInt32  in1_freeze_enable_2nd:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  in1_sub_block_select:3;
        RBus_UInt32  in1_block_select:3;
        RBus_UInt32  in1_freeze_ok:1;
        RBus_UInt32  in1_field_polarity_error:1;
        RBus_UInt32  in1_field_polarity_status:4;
    };
}mdomain_cap_ddr_in1status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  in1_cap_enable:1;
    };
}mdomain_cap_cap_in1_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  in1_sub_disp2cap_distance:3;
        RBus_UInt32  in1_sub_use_main_block_en:1;
        RBus_UInt32  in1_sub_bufnum:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  res3:2;
        RBus_UInt32  in1_sub_freeze_option:1;
        RBus_UInt32  in1_sub_freeze_control:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:7;
        RBus_UInt32  in1_sub_v_flip_3buf_en:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  in1_sub_double_enable:1;
        RBus_UInt32  in1_sub_block_free:1;
        RBus_UInt32  in1_sub_single_buffer_select:3;
        RBus_UInt32  in1_sub_freeze_enable:1;
        RBus_UInt32  res7:1;
    };
}mdomain_cap_ddr_in1subctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  in2_wtlvl:9;
        RBus_UInt32  in2_write_num:16;
    };
}mdomain_cap_ddr_in2wtlvl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  in2_wrlen:8;
        RBus_UInt32  in2_write_remain:8;
    };
}mdomain_cap_ddr_in2wrlen_rem_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_wr_mem_start:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_ddr_in2addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_line_step:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_ddr_in2linestep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_block_step:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_ddr_in2blkstep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_sec_bl:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_ddr_in2_2ndaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_third_bl:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_ddr_in2_3rdaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  in2_zero:1;
        RBus_UInt32  in2_frame_access_mode:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  in2_line_number:13;
    };
}mdomain_cap_ddr_in2linenum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  in2_disp2cap_distance:3;
        RBus_UInt32  in2_sub_use_main_block_en:1;
        RBus_UInt32  in2_bufnum:3;
        RBus_UInt32  in2_unfreeze_wait:3;
        RBus_UInt32  in2_auto_unfreeze:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  in2_freeze_option:1;
        RBus_UInt32  in2_freeze_control:1;
        RBus_UInt32  in2_bad_edit_suppression:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  block_sel_to_flag_fifo_option:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  in2_dout_align:1;
        RBus_UInt32  in2_v_flip_3buf_en:1;
        RBus_UInt32  in2_merge_enable:1;
        RBus_UInt32  in2_double_enable:1;
        RBus_UInt32  in2_block_free:1;
        RBus_UInt32  in2_single_buffer_select:3;
        RBus_UInt32  in2_freeze_enable:1;
        RBus_UInt32  in2_en_vs_rst:1;
    };
}mdomain_cap_ddr_in2ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  in2_cap_enable:1;
    };
}mdomain_cap_cap_in2_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  in2_cap_enable_real:1;
        RBus_UInt32  in2_burst_ongo:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  in2_auto_unfreeze_2nd:1;
        RBus_UInt32  in2_freeze_enable_2nd:1;
        RBus_UInt32  res3:7;
        RBus_UInt32  in2_block_select:3;
        RBus_UInt32  in2_freeze_ok:1;
        RBus_UInt32  in2_field_polarity_error:1;
        RBus_UInt32  in2_field_polarity_status:4;
    };
}mdomain_cap_ddr_in2status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  cap2_db_apply:1;
        RBus_UInt32  cap2_db_sel:1;
        RBus_UInt32  cap2_db_en:1;
        RBus_UInt32  res2:13;
        RBus_UInt32  cap1_db_apply:1;
        RBus_UInt32  cap1_db_sel:1;
        RBus_UInt32  cap1_db_en:1;
    };
}mdomain_cap_cap_reg_doublbuffer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  in1_cap_first_wr_flag:1;
        RBus_UInt32  in1_cap_last_wr_flag:1;
        RBus_UInt32  in1_fifofull:1;
        RBus_UInt32  in1_fifoempty:1;
        RBus_UInt32  in1_fifouf:1;
        RBus_UInt32  in1_fifoof:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  in2_cap_first_wr_flag:1;
        RBus_UInt32  in2_cap_last_wr_flag:1;
        RBus_UInt32  in2_fifofull:1;
        RBus_UInt32  in2_fifoempty:1;
        RBus_UInt32  in2_fifouf:1;
        RBus_UInt32  in2_fifoof:1;
    };
}mdomain_cap_cap_ddr_fifostatus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  in1_sub_over_size:1;
        RBus_UInt32  in1_sub_under_size:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  in1_drop:1;
        RBus_UInt32  in1_over_size:1;
        RBus_UInt32  in1_under_size:1;
        RBus_UInt32  res3:13;
        RBus_UInt32  in2_drop:1;
        RBus_UInt32  in2_over_size:1;
        RBus_UInt32  in2_under_size:1;
    };
}mdomain_cap_cap_help_debug_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_cap_downlimit_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capmain_boundaryaddr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_cap_uplimit_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capmain_boundaryaddr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  in1_cap_downlimit_ov:1;
        RBus_UInt32  in1_cap_uplimit_ov:1;
    };
}mdomain_cap_di1cap_wrrd_boundaryadd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_cap_downlimit_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capsub_boundaryaddr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_cap_uplimit_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capsub_boundaryaddr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  in2_cap_downlimit_ov:1;
        RBus_UInt32  in2_cap_uplimit_ov:1;
    };
}mdomain_cap_di2cap_wrrd_boundaryadd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wd_to_main_and_sub:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dispm_wd_debug_mode:1;
        RBus_UInt32  dispm_wd_debug_target:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  in1_cap_first_wr_wde:1;
        RBus_UInt32  in1_cap_first_wr_ie:1;
        RBus_UInt32  in1_fifoerr_ie:1;
        RBus_UInt32  in1_cap_last_wr_ie:1;
        RBus_UInt32  in1_fifoerr_wde:1;
        RBus_UInt32  in1_cap_last_wr_wde:1;
        RBus_UInt32  wd_to_main:1;
        RBus_UInt32  res3:9;
        RBus_UInt32  in2_cap_first_wr_wde:1;
        RBus_UInt32  in2_cap_first_wr_ie:1;
        RBus_UInt32  in2_fifoerr_ie:1;
        RBus_UInt32  in2_cap_last_wr_ie:1;
        RBus_UInt32  in2_fifoerr_wde:1;
        RBus_UInt32  in2_cap_last_wr_wde:1;
        RBus_UInt32  wd_to_sub:1;
    };
}mdomain_cap_cap_ie_wd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  in1_sbs_vsd_en:1;
    };
}mdomain_cap_capmain_sbs_vsd_cap_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_lr_offset:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capmain_sbs_vsd_cap_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  crc_comp_error_int:1;
        RBus_UInt32  dynamic_crc_cmp_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  crc_bit_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  disp_crc_3d_en:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  disp_crc_conti:1;
        RBus_UInt32  disp_crc_start:1;
        RBus_UInt32  cap_crc_3d_en:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  cap_crc_conti:1;
        RBus_UInt32  cap_crc_start:1;
    };
}mdomain_cap_dispm_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  match_buffer:2;
        RBus_UInt32  res2:15;
        RBus_UInt32  crc_comp_error_flag:1;
    };
}mdomain_cap_dispm_crc_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_mask:32;
    };
}mdomain_cap_crc_mask_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_l_crc_result:32;
    };
}mdomain_cap_cap_l_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_r_crc_result:32;
    };
}mdomain_cap_cap_r_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_l_crc_result:32;
    };
}mdomain_cap_disp_l_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_r_crc_result:32;
    };
}mdomain_cap_display_r_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  in1_rate_en:1;
    };
}mdomain_cap_cap_dma_rate_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_rate:32;
    };
}mdomain_cap_capture_rate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  in1_8byte_swap:1;
        RBus_UInt32  in1_4byte_swap:1;
        RBus_UInt32  in1_2byte_swap:1;
        RBus_UInt32  in1_1byte_swap:1;
    };
}mdomain_cap_capture1_byte_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  in2_8byte_swap:1;
        RBus_UInt32  in2_4byte_swap:1;
        RBus_UInt32  in2_2byte_swap:1;
        RBus_UInt32  in2_1byte_swap:1;
    };
}mdomain_cap_capture2_byte_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  out_bit:1;
        RBus_UInt32  sort_fmt:1;
        RBus_UInt32  rgb565_en:1;
        RBus_UInt32  rgb_to_argb_en:1;
        RBus_UInt32  argb_swap:1;
        RBus_UInt32  argb_dummy_data:8;
        RBus_UInt32  res2:16;
    };
}mdomain_cap_main_sdnr_cxxto64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_out_bit:1;
        RBus_UInt32  sub_sort_fmt:1;
        RBus_UInt32  sub_rgb565_en:1;
        RBus_UInt32  sub_rgb_to_argb_en:1;
        RBus_UInt32  sub_argb_swap:1;
        RBus_UInt32  sub_argb_dummy_data:8;
        RBus_UInt32  res2:16;
    };
}mdomain_cap_sub_sdnr_cxxto64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  wd_fsync_ovf_en:1;
        RBus_UInt32  wd_fsync_udf_en:1;
        RBus_UInt32  wd_ibuff_ovf_en:1;
        RBus_UInt32  wd_ibuff_to_main:1;
        RBus_UInt32  wd_ibuff_to_sub:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  irq_fsync_ovf_en:1;
        RBus_UInt32  irq_fsync_udf_en:1;
        RBus_UInt32  irq_ibuff_ovf_en:1;
        RBus_UInt32  res3:8;
    };
}mdomain_cap_ich1_ibuff_status_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  wd_fsync_ovf_en_sub:1;
        RBus_UInt32  wd_fsync_udf_en_sub:1;
        RBus_UInt32  wd_ibuff_ovf_en_sub:1;
        RBus_UInt32  wd_ibuff_to_main_sub:1;
        RBus_UInt32  wd_ibuff_to_sub_sub:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  irq_fsync_ovf_en_sub:1;
        RBus_UInt32  irq_fsync_udf_en_sub:1;
        RBus_UInt32  irq_ibuff_ovf_en_sub:1;
        RBus_UInt32  res3:8;
    };
}mdomain_cap_ich2_ibuff_status_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  q_sbs_lr_ovf_sub:1;
        RBus_UInt32  q_sbs_lr_udf_sub:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  ibuff_ovf_sub:1;
        RBus_UInt32  fsync_ovf_sub:1;
        RBus_UInt32  fsync_udf_sub:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  q_sbs_lr_ovf:1;
        RBus_UInt32  q_sbs_lr_udf:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  ibuff_ovf:1;
        RBus_UInt32  fsync_ovf:1;
        RBus_UInt32  fsync_udf:1;
    };
}mdomain_cap_ich12_ibuff_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  delta_down:8;
        RBus_UInt32  delta_up:8;
    };
}mdomain_cap_main_threshold_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  dispd_fs_3d_en_sub:1;
        RBus_UInt32  dispi_fs_3d_en_sub:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  dispd_fs_3d_en:1;
        RBus_UInt32  dispi_fs_3d_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  dummy180272f0_2:1;
        RBus_UInt32  dummy180272f0_1:1;
        RBus_UInt32  main_sub_db_sel:1;
    };
}mdomain_cap_smooth_tog_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  in2_cap_already_set:1;
        RBus_UInt32  in2_cap_set_block:3;
        RBus_UInt32  in1_cap_already_set:1;
        RBus_UInt32  in1_cap_set_block:3;
        RBus_UInt32  res2:4;
        RBus_UInt32  md_reg_is_db_sub:1;
        RBus_UInt32  im_reg_is_db_sub:1;
        RBus_UInt32  md_reg_is_db:1;
        RBus_UInt32  im_reg_is_db:1;
    };
}mdomain_cap_smooth_tog_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_en:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  cmp_width_div32:9;
        RBus_UInt32  res2:2;
        RBus_UInt32  cmp_height:14;
    };
}mdomain_cap_cap_pq_cmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_line_sum_bit:16;
        RBus_UInt32  cmp_400_old_mode_en:1;
        RBus_UInt32  dummy18027804_14_11:4;
        RBus_UInt32  cmp_jump4_en:1;
        RBus_UInt32  cmp_qp_mode:2;
        RBus_UInt32  cmp_dic_mode_en:1;
        RBus_UInt32  two_line_prediction_en:1;
        RBus_UInt32  cmp_line_mode:1;
        RBus_UInt32  cmp_data_color:1;
        RBus_UInt32  cmp_data_bit_width:2;
        RBus_UInt32  cmp_data_format:2;
    };
}mdomain_cap_cap_pq_cmp_pair_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  first_line_more_bit:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  block_limit_bit:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  line_limit_bit:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  frame_limit_bit:6;
    };
}mdomain_cap_cap_pq_cmp_bit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_fifo_pause_cycle:4;
        RBus_UInt32  tail_dummy_throughput:1;
        RBus_UInt32  first_predict_nc_mode:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  g_ratio:5;
        RBus_UInt32  add_last2blk_over_curve_bit:1;
        RBus_UInt32  variation_maxmin_en:1;
        RBus_UInt32  dynamic_sum_line_rst:1;
        RBus_UInt32  blk0_add_en:1;
        RBus_UInt32  guarantee_max_qp_en:1;
        RBus_UInt32  dynamic_allocate_ratio_en:1;
        RBus_UInt32  poor_limit_min_qp_en:1;
        RBus_UInt32  balance_en:1;
        RBus_UInt32  fisrt_line_more_en:1;
        RBus_UInt32  blk0_add_half_en:1;
        RBus_UInt32  do_422_mode:2;
        RBus_UInt32  first_predict_nc_en:1;
        RBus_UInt32  not_enough_bit_do_422_en:1;
        RBus_UInt32  not_rich_do_422_en:1;
        RBus_UInt32  rb_lossy_do_422_en:1;
    };
}mdomain_cap_cap_pq_cmp_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dic_mode_option:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  not_enough_bit_do_422_qp:3;
        RBus_UInt32  not_rich_do_422_th:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  rb_lossy_do_422_qp_level:3;
        RBus_UInt32  dic_mode_entry_th:4;
        RBus_UInt32  variation_value_th:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  variation_num_th:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  variation_near_num_th:3;
    };
}mdomain_cap_cap_pq_cmp_smooth_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dynamic_allocate_ratio_max:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  dynamic_allocate_ratio_min:5;
        RBus_UInt32  res3:5;
        RBus_UInt32  dynamic_allocate_line:3;
        RBus_UInt32  dynamic_allocate_more:4;
        RBus_UInt32  dynamic_allocate_less:4;
    };
}mdomain_cap_cap_pq_cmp_allocate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  poor_limit_th_qp4:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  poor_limit_th_qp3:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  poor_limit_th_qp2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  poor_limit_th_qp1:5;
    };
}mdomain_cap_cap_pq_cmp_poor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  cmp_crc_ro_line_sel:14;
        RBus_UInt32  dic_mode_qp_th_rb:4;
        RBus_UInt32  dic_mode_qp_th_g:4;
        RBus_UInt32  guarantee_max_rb_qp:4;
        RBus_UInt32  guarantee_max_g_qp:4;
    };
}mdomain_cap_cap_pq_cmp_guarantee_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  variation_maxmin_th2:8;
        RBus_UInt32  variation_maxmin_th:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  balance_rb_ov_th:2;
        RBus_UInt32  balance_rb_ud_th:2;
        RBus_UInt32  balance_rb_give:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  balance_g_ov_th:2;
        RBus_UInt32  balance_g_ud_th:2;
        RBus_UInt32  balance_g_give:2;
    };
}mdomain_cap_cap_pq_cmp_balance_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  prs_over_line_sum_bit_irq_en:1;
        RBus_UInt32  tail_fifo_overflow_irq_en:1;
        RBus_UInt32  input_fifo_overflow_irq_en:1;
        RBus_UInt32  block_fifo_overflow_irq_en:1;
        RBus_UInt32  input_size_more_irq_en:1;
        RBus_UInt32  input_size_less_irq_en:1;
        RBus_UInt32  over_flb_irq_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  request_fifo_even_overflow_irq_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  g_fifo_even_overflow_irq_en:1;
        RBus_UInt32  r_fifo_even_overflow_irq_en:1;
        RBus_UInt32  b_fifo_even_overflow_irq_en:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
    };
}mdomain_cap_cap_pq_cmp_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pqc_irq:1;
        RBus_UInt32  res1:12;
        RBus_UInt32  prs_over_line_sum_bit_st:1;
        RBus_UInt32  tail_fifo_overflow_st:1;
        RBus_UInt32  input_fifo_overflow_st:1;
        RBus_UInt32  block_fifo_overflow_st:1;
        RBus_UInt32  input_size_more_st:1;
        RBus_UInt32  input_size_less_st:1;
        RBus_UInt32  over_flb_st:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  request_fifo_even_overflow_st:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  g_fifo_even_overflow_st:1;
        RBus_UInt32  r_fifo_even_overflow_st:1;
        RBus_UInt32  b_fifo_even_overflow_st:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
    };
}mdomain_cap_cap_pq_cmp_irq_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  g_ratio_max:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  g_ratio_min:5;
        RBus_UInt32  res4:2;
        RBus_UInt32  cmp_package_height_cnt:14;
    };
}mdomain_cap_cap_pq_cmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  long_term_qp_measure_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  long_term_g_qp_max:4;
        RBus_UInt32  long_term_rb_qp_max:4;
        RBus_UInt32  res2:8;
        RBus_UInt32  short_term_g_qp_max:4;
        RBus_UInt32  short_term_rb_qp_max:4;
    };
}mdomain_cap_cap_pq_cmp_qp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fifo_water_measure_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  fifo_water_even_g:8;
        RBus_UInt32  fifo_water_even_r:8;
        RBus_UInt32  fifo_water_even_b:8;
    };
}mdomain_cap_cap_pq_cmp_fifo_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_frame_left:16;
        RBus_UInt32  rb_frame_left:16;
    };
}mdomain_cap_cap_pq_cmp_left_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_package_long_term:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  total_package_even:24;
    };
}mdomain_cap_cap_pq_cmp_package_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_g:32;
    };
}mdomain_cap_cap_pq_cmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_r:32;
    };
}mdomain_cap_cap_pq_cmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_b:32;
    };
}mdomain_cap_cap_pq_cmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  blk0_add_value0:6;
        RBus_UInt32  dic_mode_tolerance:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  blk0_add_value32:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  blk0_add_value16:6;
    };
}mdomain_cap_cap_pq_cmp_blk0_add0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  blk0_add_value8:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  blk0_add_value4:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  blk0_add_value2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  blk0_add_value1:6;
    };
}mdomain_cap_cap_pq_cmp_blk0_add1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pqc_den_extend_rate:4;
    };
}mdomain_cap_cap_pq_cmp_den_extend_rate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_forth_bl:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capm_forth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_fifth_bl:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capm_fifth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_sixth_bl:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capm_sixth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_seventh_bl:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capm_seventh_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_eightth_bl:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capm_eightth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_forth_bl:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_caps_forth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_fifth_bl:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_caps_fifth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_sixth_bl:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_caps_sixth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_seventh_bl:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_caps_seventh_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_eightth_bl:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_caps_eightth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  mdom_smooth_tog_new_mode_sub_set_size_flag:1;
        RBus_UInt32  mdom_smooth_tog_new_mode_sub_clr_size_flag:1;
        RBus_UInt32  mdom_smooth_tog_new_mode_sub:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  mdom_smooth_tog_new_mode_main_set_size_flag:1;
        RBus_UInt32  mdom_smooth_tog_new_mode_main_clr_size_flag:1;
        RBus_UInt32  mdom_smooth_tog_new_mode_main:1;
    };
}mdomain_cap_mdom_smooth_tog_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  sub_size_flag:8;
        RBus_UInt32  main_size_flag:8;
    };
}mdomain_cap_mdom_smooth_tog_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  in1_boundary_limit_mode:1;
    };
}mdomain_cap_capmain_boundaryaddr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_cap_downlimit_blk0_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capmain_boundaryaddr_blk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_cap_uplimit_blk0_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capmain_boundaryaddr2_blk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_cap_downlimit_blk1_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capmain_boundaryaddr_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_cap_uplimit_blk1_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capmain_boundaryaddr2_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_cap_downlimit_blk2_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capmain_boundaryaddr_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_cap_uplimit_blk2_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capmain_boundaryaddr2_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  in2_boundary_limit_mode:1;
    };
}mdomain_cap_capsub_boundaryaddr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_cap_downlimit_blk0_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capsub_boundaryaddr_blk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_cap_uplimit_blk0_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capsub_boundaryaddr2_blk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_cap_downlimit_blk1_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capsub_boundaryaddr_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_cap_uplimit_blk1_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capsub_boundaryaddr2_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_cap_downlimit_blk2_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capsub_boundaryaddr_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_cap_uplimit_blk2_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_cap_capsub_boundaryaddr2_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_cmp_en:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  s_cmp_width_div32:9;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_cmp_height:14;
    };
}mdomain_cap_caps_pq_cmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_cmp_line_sum_bit:16;
        RBus_UInt32  s_cmp_400_old_mode_en:1;
        RBus_UInt32  dummy18027884_14_11:4;
        RBus_UInt32  s_cmp_jump4_en:1;
        RBus_UInt32  s_cmp_qp_mode:2;
        RBus_UInt32  s_cmp_dic_mode_en:1;
        RBus_UInt32  s_two_line_prediction_en:1;
        RBus_UInt32  s_cmp_line_mode:1;
        RBus_UInt32  s_cmp_data_color:1;
        RBus_UInt32  s_cmp_data_bit_width:2;
        RBus_UInt32  s_cmp_data_format:2;
    };
}mdomain_cap_caps_pq_cmp_pair_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  s_first_line_more_bit:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_block_limit_bit:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  s_line_limit_bit:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  s_frame_limit_bit:6;
    };
}mdomain_cap_caps_pq_cmp_bit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_input_fifo_pause_cycle:4;
        RBus_UInt32  s_tail_dummy_throughput:1;
        RBus_UInt32  s_first_predict_nc_mode:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  s_g_ratio:5;
        RBus_UInt32  s_add_last2blk_over_curve_bit:1;
        RBus_UInt32  s_variation_maxmin_en:1;
        RBus_UInt32  s_dynamic_sum_line_rst:1;
        RBus_UInt32  s_blk0_add_en:1;
        RBus_UInt32  s_guarantee_max_qp_en:1;
        RBus_UInt32  s_dynamic_allocate_ratio_en:1;
        RBus_UInt32  s_poor_limit_min_qp_en:1;
        RBus_UInt32  s_balance_en:1;
        RBus_UInt32  s_fisrt_line_more_en:1;
        RBus_UInt32  s_blk0_add_half_en:1;
        RBus_UInt32  s_do_422_mode:2;
        RBus_UInt32  s_first_predict_nc_en:1;
        RBus_UInt32  s_not_enough_bit_do_422_en:1;
        RBus_UInt32  s_not_rich_do_422_en:1;
        RBus_UInt32  s_rb_lossy_do_422_en:1;
    };
}mdomain_cap_caps_pq_cmp_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_dic_mode_option:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  s_not_enough_bit_do_422_qp:3;
        RBus_UInt32  s_not_rich_do_422_th:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  s_rb_lossy_do_422_qp_level:3;
        RBus_UInt32  s_dic_mode_entry_th:4;
        RBus_UInt32  s_variation_value_th:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  s_variation_num_th:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  s_variation_near_num_th:3;
    };
}mdomain_cap_caps_pq_cmp_smooth_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s_dynamic_allocate_ratio_max:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  s_dynamic_allocate_ratio_min:5;
        RBus_UInt32  res3:5;
        RBus_UInt32  s_dynamic_allocate_line:3;
        RBus_UInt32  s_dynamic_allocate_more:4;
        RBus_UInt32  s_dynamic_allocate_less:4;
    };
}mdomain_cap_caps_pq_cmp_allocate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  s_poor_limit_th_qp4:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  s_poor_limit_th_qp3:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  s_poor_limit_th_qp2:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  s_poor_limit_th_qp1:5;
    };
}mdomain_cap_caps_pq_cmp_poor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  s_cmp_crc_ro_line_sel:14;
        RBus_UInt32  s_dic_mode_qp_th_rb:4;
        RBus_UInt32  s_dic_mode_qp_th_g:4;
        RBus_UInt32  s_guarantee_max_rb_qp:4;
        RBus_UInt32  s_guarantee_max_g_qp:4;
    };
}mdomain_cap_caps_pq_cmp_guarantee_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_variation_maxmin_th2:8;
        RBus_UInt32  s_variation_maxmin_th:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  s_balance_rb_ov_th:2;
        RBus_UInt32  s_balance_rb_ud_th:2;
        RBus_UInt32  s_balance_rb_give:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_balance_g_ov_th:2;
        RBus_UInt32  s_balance_g_ud_th:2;
        RBus_UInt32  s_balance_g_give:2;
    };
}mdomain_cap_caps_pq_cmp_balance_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  s_prs_over_line_sum_bit_irq_en:1;
        RBus_UInt32  s_tail_fifo_overflow_irq_en:1;
        RBus_UInt32  s_input_fifo_overflow_irq_en:1;
        RBus_UInt32  s_block_fifo_overflow_irq_en:1;
        RBus_UInt32  s_input_size_more_irq_en:1;
        RBus_UInt32  s_input_size_less_irq_en:1;
        RBus_UInt32  s_over_flb_irq_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_request_fifo_even_overflow_irq_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  s_g_fifo_even_overflow_irq_en:1;
        RBus_UInt32  s_r_fifo_even_overflow_irq_en:1;
        RBus_UInt32  s_b_fifo_even_overflow_irq_en:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
    };
}mdomain_cap_caps_pq_cmp_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_pqc_irq:1;
        RBus_UInt32  res1:12;
        RBus_UInt32  s_prs_over_line_sum_bit_st:1;
        RBus_UInt32  s_tail_fifo_overflow_st:1;
        RBus_UInt32  s_input_fifo_overflow_st:1;
        RBus_UInt32  s_block_fifo_overflow_st:1;
        RBus_UInt32  s_input_size_more_st:1;
        RBus_UInt32  s_input_size_less_st:1;
        RBus_UInt32  s_over_flb_st:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_request_fifo_even_overflow_st:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  s_g_fifo_even_overflow_st:1;
        RBus_UInt32  s_r_fifo_even_overflow_st:1;
        RBus_UInt32  s_b_fifo_even_overflow_st:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
    };
}mdomain_cap_caps_pq_cmp_irq_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_g_ratio_max:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  s_g_ratio_min:5;
        RBus_UInt32  res4:2;
        RBus_UInt32  s_cmp_package_height_cnt:14;
    };
}mdomain_cap_caps_pq_cmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_long_term_qp_measure_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  s_long_term_g_qp_max:4;
        RBus_UInt32  s_long_term_rb_qp_max:4;
        RBus_UInt32  res2:8;
        RBus_UInt32  s_short_term_g_qp_max:4;
        RBus_UInt32  s_short_term_rb_qp_max:4;
    };
}mdomain_cap_caps_pq_cmp_qp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_fifo_water_measure_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  s_fifo_water_even_g:8;
        RBus_UInt32  s_fifo_water_even_r:8;
        RBus_UInt32  s_fifo_water_even_b:8;
    };
}mdomain_cap_caps_pq_cmp_fifo_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_g_frame_left:16;
        RBus_UInt32  s_rb_frame_left:16;
    };
}mdomain_cap_caps_pq_cmp_left_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_total_package_long_term:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  s_total_package_even:24;
    };
}mdomain_cap_caps_pq_cmp_package_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_cmp_crc_even_g:32;
    };
}mdomain_cap_caps_pq_cmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_cmp_crc_even_r:32;
    };
}mdomain_cap_caps_pq_cmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_cmp_crc_even_b:32;
    };
}mdomain_cap_caps_pq_cmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  s_blk0_add_value0:6;
        RBus_UInt32  s_dic_mode_tolerance:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_blk0_add_value32:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  s_blk0_add_value16:6;
    };
}mdomain_cap_caps_pq_cmp_blk0_add0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  s_blk0_add_value8:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_blk0_add_value4:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  s_blk0_add_value2:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  s_blk0_add_value1:6;
    };
}mdomain_cap_caps_pq_cmp_blk0_add1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  s_pqc_den_extend_rate:4;
    };
}mdomain_cap_caps_pq_cmp_den_extend_rate_RBUS;

#else //apply LITTLE_ENDIAN

//======MDOMAIN_CAP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_write_num:16;
        RBus_UInt32  in1_wtlvl:9;
        RBus_UInt32  res1:7;
    };
}mdomain_cap_ddr_in1wtlvl_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_write_remain:8;
        RBus_UInt32  in1_wrlen:8;
        RBus_UInt32  res1:16;
    };
}mdomain_cap_ddr_in1wrlen_rem_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_wr_mem_start:29;
    };
}mdomain_cap_ddr_in1addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_line_step:29;
    };
}mdomain_cap_ddr_in1linestep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_block_step:29;
    };
}mdomain_cap_ddr_in1blkstep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_sec_bl:29;
    };
}mdomain_cap_ddr_in1_2ndaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_third_bl:29;
    };
}mdomain_cap_ddr_in1_3rdaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_line_number:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_frame_access_mode:1;
        RBus_UInt32  in1_zero:1;
        RBus_UInt32  res2:14;
    };
}mdomain_cap_ddr_in1linenum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_en_vs_rst:1;
        RBus_UInt32  in1_freeze_enable:1;
        RBus_UInt32  in1_single_buffer_select:3;
        RBus_UInt32  in1_block_free:1;
        RBus_UInt32  in1_double_enable:1;
        RBus_UInt32  in1_merge_enable:1;
        RBus_UInt32  in1_v_flip_3buf_en:1;
        RBus_UInt32  in1_dout_align:1;
        RBus_UInt32  in1_rm_r_vs_en:1;
        RBus_UInt32  in1_l_flag_inv:1;
        RBus_UInt32  dispm_dbg_sel:4;
        RBus_UInt32  in1_bad_edit_suppression:1;
        RBus_UInt32  in1_freeze_control:1;
        RBus_UInt32  in1_freeze_option:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  in1_auto_unfreeze:1;
        RBus_UInt32  in1_unfreeze_wait:3;
        RBus_UInt32  in1_bufnum:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  in1_disp2cap_distance:3;
        RBus_UInt32  dispm_ddr_checksum_en:1;
    };
}mdomain_cap_ddr_in1ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_field_polarity_status:4;
        RBus_UInt32  in1_field_polarity_error:1;
        RBus_UInt32  in1_freeze_ok:1;
        RBus_UInt32  in1_block_select:3;
        RBus_UInt32  in1_sub_block_select:3;
        RBus_UInt32  res1:4;
        RBus_UInt32  in1_freeze_enable_2nd:1;
        RBus_UInt32  in1_auto_unfreeze_2nd:1;
        RBus_UInt32  in1_sub_freeze_enable_2nd:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  in1_burst_ongo:1;
        RBus_UInt32  in1_cap_enable_real:1;
        RBus_UInt32  res3:10;
    };
}mdomain_cap_ddr_in1status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_cap_enable:1;
        RBus_UInt32  res1:31;
    };
}mdomain_cap_cap_in1_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  in1_sub_freeze_enable:1;
        RBus_UInt32  in1_sub_single_buffer_select:3;
        RBus_UInt32  in1_sub_block_free:1;
        RBus_UInt32  in1_sub_double_enable:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  in1_sub_v_flip_3buf_en:1;
        RBus_UInt32  res3:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  in1_sub_freeze_control:1;
        RBus_UInt32  in1_sub_freeze_option:1;
        RBus_UInt32  res5:2;
        RBus_UInt32  res6:3;
        RBus_UInt32  in1_sub_bufnum:3;
        RBus_UInt32  in1_sub_use_main_block_en:1;
        RBus_UInt32  in1_sub_disp2cap_distance:3;
        RBus_UInt32  res7:1;
    };
}mdomain_cap_ddr_in1subctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_write_num:16;
        RBus_UInt32  in2_wtlvl:9;
        RBus_UInt32  res1:7;
    };
}mdomain_cap_ddr_in2wtlvl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_write_remain:8;
        RBus_UInt32  in2_wrlen:8;
        RBus_UInt32  res1:16;
    };
}mdomain_cap_ddr_in2wrlen_rem_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_wr_mem_start:29;
    };
}mdomain_cap_ddr_in2addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_line_step:29;
    };
}mdomain_cap_ddr_in2linestep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_block_step:29;
    };
}mdomain_cap_ddr_in2blkstep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_sec_bl:29;
    };
}mdomain_cap_ddr_in2_2ndaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_third_bl:29;
    };
}mdomain_cap_ddr_in2_3rdaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_line_number:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_frame_access_mode:1;
        RBus_UInt32  in2_zero:1;
        RBus_UInt32  res2:14;
    };
}mdomain_cap_ddr_in2linenum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_en_vs_rst:1;
        RBus_UInt32  in2_freeze_enable:1;
        RBus_UInt32  in2_single_buffer_select:3;
        RBus_UInt32  in2_block_free:1;
        RBus_UInt32  in2_double_enable:1;
        RBus_UInt32  in2_merge_enable:1;
        RBus_UInt32  in2_v_flip_3buf_en:1;
        RBus_UInt32  in2_dout_align:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  block_sel_to_flag_fifo_option:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  in2_bad_edit_suppression:1;
        RBus_UInt32  in2_freeze_control:1;
        RBus_UInt32  in2_freeze_option:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  in2_auto_unfreeze:1;
        RBus_UInt32  in2_unfreeze_wait:3;
        RBus_UInt32  in2_bufnum:3;
        RBus_UInt32  in2_sub_use_main_block_en:1;
        RBus_UInt32  in2_disp2cap_distance:3;
        RBus_UInt32  res4:1;
    };
}mdomain_cap_ddr_in2ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_cap_enable:1;
        RBus_UInt32  res1:31;
    };
}mdomain_cap_cap_in2_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_field_polarity_status:4;
        RBus_UInt32  in2_field_polarity_error:1;
        RBus_UInt32  in2_freeze_ok:1;
        RBus_UInt32  in2_block_select:3;
        RBus_UInt32  res1:7;
        RBus_UInt32  in2_freeze_enable_2nd:1;
        RBus_UInt32  in2_auto_unfreeze_2nd:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  in2_burst_ongo:1;
        RBus_UInt32  in2_cap_enable_real:1;
        RBus_UInt32  res3:10;
    };
}mdomain_cap_ddr_in2status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap1_db_en:1;
        RBus_UInt32  cap1_db_sel:1;
        RBus_UInt32  cap1_db_apply:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  cap2_db_en:1;
        RBus_UInt32  cap2_db_sel:1;
        RBus_UInt32  cap2_db_apply:1;
        RBus_UInt32  res2:13;
    };
}mdomain_cap_cap_reg_doublbuffer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_fifoof:1;
        RBus_UInt32  in2_fifouf:1;
        RBus_UInt32  in2_fifoempty:1;
        RBus_UInt32  in2_fifofull:1;
        RBus_UInt32  in2_cap_last_wr_flag:1;
        RBus_UInt32  in2_cap_first_wr_flag:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  in1_fifoof:1;
        RBus_UInt32  in1_fifouf:1;
        RBus_UInt32  in1_fifoempty:1;
        RBus_UInt32  in1_fifofull:1;
        RBus_UInt32  in1_cap_last_wr_flag:1;
        RBus_UInt32  in1_cap_first_wr_flag:1;
        RBus_UInt32  res2:10;
    };
}mdomain_cap_cap_ddr_fifostatus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_under_size:1;
        RBus_UInt32  in2_over_size:1;
        RBus_UInt32  in2_drop:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  in1_under_size:1;
        RBus_UInt32  in1_over_size:1;
        RBus_UInt32  in1_drop:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  in1_sub_under_size:1;
        RBus_UInt32  in1_sub_over_size:1;
        RBus_UInt32  res3:6;
    };
}mdomain_cap_cap_help_debug_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_cap_downlimit_adr:29;
    };
}mdomain_cap_capmain_boundaryaddr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_cap_uplimit_adr:29;
    };
}mdomain_cap_capmain_boundaryaddr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_cap_uplimit_ov:1;
        RBus_UInt32  in1_cap_downlimit_ov:1;
        RBus_UInt32  res1:30;
    };
}mdomain_cap_di1cap_wrrd_boundaryadd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_cap_downlimit_adr:29;
    };
}mdomain_cap_capsub_boundaryaddr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_cap_uplimit_adr:29;
    };
}mdomain_cap_capsub_boundaryaddr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_cap_uplimit_ov:1;
        RBus_UInt32  in2_cap_downlimit_ov:1;
        RBus_UInt32  res1:30;
    };
}mdomain_cap_di2cap_wrrd_boundaryadd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wd_to_sub:1;
        RBus_UInt32  in2_cap_last_wr_wde:1;
        RBus_UInt32  in2_fifoerr_wde:1;
        RBus_UInt32  in2_cap_last_wr_ie:1;
        RBus_UInt32  in2_fifoerr_ie:1;
        RBus_UInt32  in2_cap_first_wr_ie:1;
        RBus_UInt32  in2_cap_first_wr_wde:1;
        RBus_UInt32  res1:9;
        RBus_UInt32  wd_to_main:1;
        RBus_UInt32  in1_cap_last_wr_wde:1;
        RBus_UInt32  in1_fifoerr_wde:1;
        RBus_UInt32  in1_cap_last_wr_ie:1;
        RBus_UInt32  in1_fifoerr_ie:1;
        RBus_UInt32  in1_cap_first_wr_ie:1;
        RBus_UInt32  in1_cap_first_wr_wde:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  dispm_wd_debug_target:1;
        RBus_UInt32  dispm_wd_debug_mode:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  wd_to_main_and_sub:1;
    };
}mdomain_cap_cap_ie_wd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_sbs_vsd_en:1;
        RBus_UInt32  res1:31;
    };
}mdomain_cap_capmain_sbs_vsd_cap_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_lr_offset:29;
    };
}mdomain_cap_capmain_sbs_vsd_cap_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_crc_start:1;
        RBus_UInt32  cap_crc_conti:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  cap_crc_3d_en:1;
        RBus_UInt32  disp_crc_start:1;
        RBus_UInt32  disp_crc_conti:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  disp_crc_3d_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  crc_bit_sel:2;
        RBus_UInt32  res4:1;
        RBus_UInt32  dynamic_crc_cmp_en:1;
        RBus_UInt32  crc_comp_error_int:1;
        RBus_UInt32  res5:17;
    };
}mdomain_cap_dispm_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_comp_error_flag:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  match_buffer:2;
        RBus_UInt32  res2:14;
    };
}mdomain_cap_dispm_crc_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_mask:32;
    };
}mdomain_cap_crc_mask_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_l_crc_result:32;
    };
}mdomain_cap_cap_l_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cap_r_crc_result:32;
    };
}mdomain_cap_cap_r_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_l_crc_result:32;
    };
}mdomain_cap_disp_l_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp_r_crc_result:32;
    };
}mdomain_cap_display_r_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_rate_en:1;
        RBus_UInt32  res1:31;
    };
}mdomain_cap_cap_dma_rate_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_rate:32;
    };
}mdomain_cap_capture_rate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_1byte_swap:1;
        RBus_UInt32  in1_2byte_swap:1;
        RBus_UInt32  in1_4byte_swap:1;
        RBus_UInt32  in1_8byte_swap:1;
        RBus_UInt32  res1:28;
    };
}mdomain_cap_capture1_byte_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_1byte_swap:1;
        RBus_UInt32  in2_2byte_swap:1;
        RBus_UInt32  in2_4byte_swap:1;
        RBus_UInt32  in2_8byte_swap:1;
        RBus_UInt32  res1:28;
    };
}mdomain_cap_capture2_byte_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  argb_dummy_data:8;
        RBus_UInt32  argb_swap:1;
        RBus_UInt32  rgb_to_argb_en:1;
        RBus_UInt32  rgb565_en:1;
        RBus_UInt32  sort_fmt:1;
        RBus_UInt32  out_bit:1;
        RBus_UInt32  res2:3;
    };
}mdomain_cap_main_sdnr_cxxto64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  sub_argb_dummy_data:8;
        RBus_UInt32  sub_argb_swap:1;
        RBus_UInt32  sub_rgb_to_argb_en:1;
        RBus_UInt32  sub_rgb565_en:1;
        RBus_UInt32  sub_sort_fmt:1;
        RBus_UInt32  sub_out_bit:1;
        RBus_UInt32  res2:3;
    };
}mdomain_cap_sub_sdnr_cxxto64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  irq_ibuff_ovf_en:1;
        RBus_UInt32  irq_fsync_udf_en:1;
        RBus_UInt32  irq_fsync_ovf_en:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  wd_ibuff_to_sub:1;
        RBus_UInt32  wd_ibuff_to_main:1;
        RBus_UInt32  wd_ibuff_ovf_en:1;
        RBus_UInt32  wd_fsync_udf_en:1;
        RBus_UInt32  wd_fsync_ovf_en:1;
        RBus_UInt32  res3:11;
    };
}mdomain_cap_ich1_ibuff_status_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  irq_ibuff_ovf_en_sub:1;
        RBus_UInt32  irq_fsync_udf_en_sub:1;
        RBus_UInt32  irq_fsync_ovf_en_sub:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  wd_ibuff_to_sub_sub:1;
        RBus_UInt32  wd_ibuff_to_main_sub:1;
        RBus_UInt32  wd_ibuff_ovf_en_sub:1;
        RBus_UInt32  wd_fsync_udf_en_sub:1;
        RBus_UInt32  wd_fsync_ovf_en_sub:1;
        RBus_UInt32  res3:11;
    };
}mdomain_cap_ich2_ibuff_status_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fsync_udf:1;
        RBus_UInt32  fsync_ovf:1;
        RBus_UInt32  ibuff_ovf:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  q_sbs_lr_udf:1;
        RBus_UInt32  q_sbs_lr_ovf:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  fsync_udf_sub:1;
        RBus_UInt32  fsync_ovf_sub:1;
        RBus_UInt32  ibuff_ovf_sub:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  q_sbs_lr_udf_sub:1;
        RBus_UInt32  q_sbs_lr_ovf_sub:1;
        RBus_UInt32  res4:18;
    };
}mdomain_cap_ich12_ibuff_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  delta_up:8;
        RBus_UInt32  delta_down:8;
        RBus_UInt32  res1:16;
    };
}mdomain_cap_main_threshold_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_sub_db_sel:1;
        RBus_UInt32  dummy180272f0_1:1;
        RBus_UInt32  dummy180272f0_2:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dispi_fs_3d_en:1;
        RBus_UInt32  dispd_fs_3d_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  dispi_fs_3d_en_sub:1;
        RBus_UInt32  dispd_fs_3d_en_sub:1;
        RBus_UInt32  res3:22;
    };
}mdomain_cap_smooth_tog_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  im_reg_is_db:1;
        RBus_UInt32  md_reg_is_db:1;
        RBus_UInt32  im_reg_is_db_sub:1;
        RBus_UInt32  md_reg_is_db_sub:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  in1_cap_set_block:3;
        RBus_UInt32  in1_cap_already_set:1;
        RBus_UInt32  in2_cap_set_block:3;
        RBus_UInt32  in2_cap_already_set:1;
        RBus_UInt32  res2:16;
    };
}mdomain_cap_smooth_tog_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_height:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  cmp_width_div32:9;
        RBus_UInt32  res2:6;
        RBus_UInt32  cmp_en:1;
    };
}mdomain_cap_cap_pq_cmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_data_format:2;
        RBus_UInt32  cmp_data_bit_width:2;
        RBus_UInt32  cmp_data_color:1;
        RBus_UInt32  cmp_line_mode:1;
        RBus_UInt32  two_line_prediction_en:1;
        RBus_UInt32  cmp_dic_mode_en:1;
        RBus_UInt32  cmp_qp_mode:2;
        RBus_UInt32  cmp_jump4_en:1;
        RBus_UInt32  dummy18027804_14_11:4;
        RBus_UInt32  cmp_400_old_mode_en:1;
        RBus_UInt32  cmp_line_sum_bit:16;
    };
}mdomain_cap_cap_pq_cmp_pair_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frame_limit_bit:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  line_limit_bit:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  block_limit_bit:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  first_line_more_bit:6;
        RBus_UInt32  res4:2;
    };
}mdomain_cap_cap_pq_cmp_bit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rb_lossy_do_422_en:1;
        RBus_UInt32  not_rich_do_422_en:1;
        RBus_UInt32  not_enough_bit_do_422_en:1;
        RBus_UInt32  first_predict_nc_en:1;
        RBus_UInt32  do_422_mode:2;
        RBus_UInt32  blk0_add_half_en:1;
        RBus_UInt32  fisrt_line_more_en:1;
        RBus_UInt32  balance_en:1;
        RBus_UInt32  poor_limit_min_qp_en:1;
        RBus_UInt32  dynamic_allocate_ratio_en:1;
        RBus_UInt32  guarantee_max_qp_en:1;
        RBus_UInt32  blk0_add_en:1;
        RBus_UInt32  dynamic_sum_line_rst:1;
        RBus_UInt32  variation_maxmin_en:1;
        RBus_UInt32  add_last2blk_over_curve_bit:1;
        RBus_UInt32  g_ratio:5;
        RBus_UInt32  res1:5;
        RBus_UInt32  first_predict_nc_mode:1;
        RBus_UInt32  tail_dummy_throughput:1;
        RBus_UInt32  input_fifo_pause_cycle:4;
    };
}mdomain_cap_cap_pq_cmp_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  variation_near_num_th:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  variation_num_th:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  variation_value_th:4;
        RBus_UInt32  dic_mode_entry_th:4;
        RBus_UInt32  rb_lossy_do_422_qp_level:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  not_rich_do_422_th:4;
        RBus_UInt32  not_enough_bit_do_422_qp:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  dic_mode_option:4;
    };
}mdomain_cap_cap_pq_cmp_smooth_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dynamic_allocate_less:4;
        RBus_UInt32  dynamic_allocate_more:4;
        RBus_UInt32  dynamic_allocate_line:3;
        RBus_UInt32  res1:5;
        RBus_UInt32  dynamic_allocate_ratio_min:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  dynamic_allocate_ratio_max:5;
        RBus_UInt32  res3:3;
    };
}mdomain_cap_cap_pq_cmp_allocate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poor_limit_th_qp1:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  poor_limit_th_qp2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  poor_limit_th_qp3:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  poor_limit_th_qp4:5;
        RBus_UInt32  res4:3;
    };
}mdomain_cap_cap_pq_cmp_poor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  guarantee_max_g_qp:4;
        RBus_UInt32  guarantee_max_rb_qp:4;
        RBus_UInt32  dic_mode_qp_th_g:4;
        RBus_UInt32  dic_mode_qp_th_rb:4;
        RBus_UInt32  cmp_crc_ro_line_sel:14;
        RBus_UInt32  res1:2;
    };
}mdomain_cap_cap_pq_cmp_guarantee_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  balance_g_give:2;
        RBus_UInt32  balance_g_ud_th:2;
        RBus_UInt32  balance_g_ov_th:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  balance_rb_give:2;
        RBus_UInt32  balance_rb_ud_th:2;
        RBus_UInt32  balance_rb_ov_th:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  variation_maxmin_th:8;
        RBus_UInt32  variation_maxmin_th2:8;
    };
}mdomain_cap_cap_pq_cmp_balance_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  b_fifo_even_overflow_irq_en:1;
        RBus_UInt32  r_fifo_even_overflow_irq_en:1;
        RBus_UInt32  g_fifo_even_overflow_irq_en:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  request_fifo_even_overflow_irq_en:1;
        RBus_UInt32  res7:2;
        RBus_UInt32  over_flb_irq_en:1;
        RBus_UInt32  input_size_less_irq_en:1;
        RBus_UInt32  input_size_more_irq_en:1;
        RBus_UInt32  block_fifo_overflow_irq_en:1;
        RBus_UInt32  input_fifo_overflow_irq_en:1;
        RBus_UInt32  tail_fifo_overflow_irq_en:1;
        RBus_UInt32  prs_over_line_sum_bit_irq_en:1;
        RBus_UInt32  res8:13;
    };
}mdomain_cap_cap_pq_cmp_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  b_fifo_even_overflow_st:1;
        RBus_UInt32  r_fifo_even_overflow_st:1;
        RBus_UInt32  g_fifo_even_overflow_st:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  request_fifo_even_overflow_st:1;
        RBus_UInt32  res7:2;
        RBus_UInt32  over_flb_st:1;
        RBus_UInt32  input_size_less_st:1;
        RBus_UInt32  input_size_more_st:1;
        RBus_UInt32  block_fifo_overflow_st:1;
        RBus_UInt32  input_fifo_overflow_st:1;
        RBus_UInt32  tail_fifo_overflow_st:1;
        RBus_UInt32  prs_over_line_sum_bit_st:1;
        RBus_UInt32  res8:12;
        RBus_UInt32  pqc_irq:1;
    };
}mdomain_cap_cap_pq_cmp_irq_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_package_height_cnt:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  g_ratio_min:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  g_ratio_max:5;
        RBus_UInt32  res3:2;
        RBus_UInt32  res4:1;
    };
}mdomain_cap_cap_pq_cmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  short_term_rb_qp_max:4;
        RBus_UInt32  short_term_g_qp_max:4;
        RBus_UInt32  res1:8;
        RBus_UInt32  long_term_rb_qp_max:4;
        RBus_UInt32  long_term_g_qp_max:4;
        RBus_UInt32  res2:7;
        RBus_UInt32  long_term_qp_measure_en:1;
    };
}mdomain_cap_cap_pq_cmp_qp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fifo_water_even_b:8;
        RBus_UInt32  fifo_water_even_r:8;
        RBus_UInt32  fifo_water_even_g:8;
        RBus_UInt32  res1:7;
        RBus_UInt32  fifo_water_measure_en:1;
    };
}mdomain_cap_cap_pq_cmp_fifo_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rb_frame_left:16;
        RBus_UInt32  g_frame_left:16;
    };
}mdomain_cap_cap_pq_cmp_left_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_package_even:24;
        RBus_UInt32  res1:7;
        RBus_UInt32  total_package_long_term:1;
    };
}mdomain_cap_cap_pq_cmp_package_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_g:32;
    };
}mdomain_cap_cap_pq_cmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_r:32;
    };
}mdomain_cap_cap_pq_cmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmp_crc_even_b:32;
    };
}mdomain_cap_cap_pq_cmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blk0_add_value16:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  blk0_add_value32:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  dic_mode_tolerance:8;
        RBus_UInt32  blk0_add_value0:6;
        RBus_UInt32  res3:2;
    };
}mdomain_cap_cap_pq_cmp_blk0_add0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blk0_add_value1:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  blk0_add_value2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  blk0_add_value4:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  blk0_add_value8:6;
        RBus_UInt32  res4:2;
    };
}mdomain_cap_cap_pq_cmp_blk0_add1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pqc_den_extend_rate:4;
        RBus_UInt32  res1:28;
    };
}mdomain_cap_cap_pq_cmp_den_extend_rate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_forth_bl:29;
    };
}mdomain_cap_capm_forth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_fifth_bl:29;
    };
}mdomain_cap_capm_fifth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_sixth_bl:29;
    };
}mdomain_cap_capm_sixth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_seventh_bl:29;
    };
}mdomain_cap_capm_seventh_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_eightth_bl:29;
    };
}mdomain_cap_capm_eightth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_forth_bl:29;
    };
}mdomain_cap_caps_forth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_fifth_bl:29;
    };
}mdomain_cap_caps_fifth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_sixth_bl:29;
    };
}mdomain_cap_caps_sixth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_seventh_bl:29;
    };
}mdomain_cap_caps_seventh_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_eightth_bl:29;
    };
}mdomain_cap_caps_eightth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mdom_smooth_tog_new_mode_main:1;
        RBus_UInt32  mdom_smooth_tog_new_mode_main_clr_size_flag:1;
        RBus_UInt32  mdom_smooth_tog_new_mode_main_set_size_flag:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  mdom_smooth_tog_new_mode_sub:1;
        RBus_UInt32  mdom_smooth_tog_new_mode_sub_clr_size_flag:1;
        RBus_UInt32  mdom_smooth_tog_new_mode_sub_set_size_flag:1;
        RBus_UInt32  res2:25;
    };
}mdomain_cap_mdom_smooth_tog_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_size_flag:8;
        RBus_UInt32  sub_size_flag:8;
        RBus_UInt32  res1:16;
    };
}mdomain_cap_mdom_smooth_tog_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in1_boundary_limit_mode:1;
        RBus_UInt32  res1:31;
    };
}mdomain_cap_capmain_boundaryaddr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_cap_downlimit_blk0_adr:29;
    };
}mdomain_cap_capmain_boundaryaddr_blk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_cap_uplimit_blk0_adr:29;
    };
}mdomain_cap_capmain_boundaryaddr2_blk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_cap_downlimit_blk1_adr:29;
    };
}mdomain_cap_capmain_boundaryaddr_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_cap_uplimit_blk1_adr:29;
    };
}mdomain_cap_capmain_boundaryaddr2_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_cap_downlimit_blk2_adr:29;
    };
}mdomain_cap_capmain_boundaryaddr_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in1_cap_uplimit_blk2_adr:29;
    };
}mdomain_cap_capmain_boundaryaddr2_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in2_boundary_limit_mode:1;
        RBus_UInt32  res1:31;
    };
}mdomain_cap_capsub_boundaryaddr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_cap_downlimit_blk0_adr:29;
    };
}mdomain_cap_capsub_boundaryaddr_blk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_cap_uplimit_blk0_adr:29;
    };
}mdomain_cap_capsub_boundaryaddr2_blk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_cap_downlimit_blk1_adr:29;
    };
}mdomain_cap_capsub_boundaryaddr_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_cap_uplimit_blk1_adr:29;
    };
}mdomain_cap_capsub_boundaryaddr2_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_cap_downlimit_blk2_adr:29;
    };
}mdomain_cap_capsub_boundaryaddr_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  in2_cap_uplimit_blk2_adr:29;
    };
}mdomain_cap_capsub_boundaryaddr2_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_cmp_height:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  s_cmp_width_div32:9;
        RBus_UInt32  res2:6;
        RBus_UInt32  s_cmp_en:1;
    };
}mdomain_cap_caps_pq_cmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_cmp_data_format:2;
        RBus_UInt32  s_cmp_data_bit_width:2;
        RBus_UInt32  s_cmp_data_color:1;
        RBus_UInt32  s_cmp_line_mode:1;
        RBus_UInt32  s_two_line_prediction_en:1;
        RBus_UInt32  s_cmp_dic_mode_en:1;
        RBus_UInt32  s_cmp_qp_mode:2;
        RBus_UInt32  s_cmp_jump4_en:1;
        RBus_UInt32  dummy18027884_14_11:4;
        RBus_UInt32  s_cmp_400_old_mode_en:1;
        RBus_UInt32  s_cmp_line_sum_bit:16;
    };
}mdomain_cap_caps_pq_cmp_pair_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_frame_limit_bit:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  s_line_limit_bit:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_block_limit_bit:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  s_first_line_more_bit:6;
        RBus_UInt32  res4:2;
    };
}mdomain_cap_caps_pq_cmp_bit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_rb_lossy_do_422_en:1;
        RBus_UInt32  s_not_rich_do_422_en:1;
        RBus_UInt32  s_not_enough_bit_do_422_en:1;
        RBus_UInt32  s_first_predict_nc_en:1;
        RBus_UInt32  s_do_422_mode:2;
        RBus_UInt32  s_blk0_add_half_en:1;
        RBus_UInt32  s_fisrt_line_more_en:1;
        RBus_UInt32  s_balance_en:1;
        RBus_UInt32  s_poor_limit_min_qp_en:1;
        RBus_UInt32  s_dynamic_allocate_ratio_en:1;
        RBus_UInt32  s_guarantee_max_qp_en:1;
        RBus_UInt32  s_blk0_add_en:1;
        RBus_UInt32  s_dynamic_sum_line_rst:1;
        RBus_UInt32  s_variation_maxmin_en:1;
        RBus_UInt32  s_add_last2blk_over_curve_bit:1;
        RBus_UInt32  s_g_ratio:5;
        RBus_UInt32  res1:5;
        RBus_UInt32  s_first_predict_nc_mode:1;
        RBus_UInt32  s_tail_dummy_throughput:1;
        RBus_UInt32  s_input_fifo_pause_cycle:4;
    };
}mdomain_cap_caps_pq_cmp_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_variation_near_num_th:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  s_variation_num_th:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  s_variation_value_th:4;
        RBus_UInt32  s_dic_mode_entry_th:4;
        RBus_UInt32  s_rb_lossy_do_422_qp_level:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  s_not_rich_do_422_th:4;
        RBus_UInt32  s_not_enough_bit_do_422_qp:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  s_dic_mode_option:4;
    };
}mdomain_cap_caps_pq_cmp_smooth_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_dynamic_allocate_less:4;
        RBus_UInt32  s_dynamic_allocate_more:4;
        RBus_UInt32  s_dynamic_allocate_line:3;
        RBus_UInt32  res1:5;
        RBus_UInt32  s_dynamic_allocate_ratio_min:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  s_dynamic_allocate_ratio_max:5;
        RBus_UInt32  res3:3;
    };
}mdomain_cap_caps_pq_cmp_allocate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_poor_limit_th_qp1:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  s_poor_limit_th_qp2:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  s_poor_limit_th_qp3:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  s_poor_limit_th_qp4:5;
        RBus_UInt32  res4:3;
    };
}mdomain_cap_caps_pq_cmp_poor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_guarantee_max_g_qp:4;
        RBus_UInt32  s_guarantee_max_rb_qp:4;
        RBus_UInt32  s_dic_mode_qp_th_g:4;
        RBus_UInt32  s_dic_mode_qp_th_rb:4;
        RBus_UInt32  s_cmp_crc_ro_line_sel:14;
        RBus_UInt32  res1:2;
    };
}mdomain_cap_caps_pq_cmp_guarantee_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_balance_g_give:2;
        RBus_UInt32  s_balance_g_ud_th:2;
        RBus_UInt32  s_balance_g_ov_th:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  s_balance_rb_give:2;
        RBus_UInt32  s_balance_rb_ud_th:2;
        RBus_UInt32  s_balance_rb_ov_th:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_variation_maxmin_th:8;
        RBus_UInt32  s_variation_maxmin_th2:8;
    };
}mdomain_cap_caps_pq_cmp_balance_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  s_b_fifo_even_overflow_irq_en:1;
        RBus_UInt32  s_r_fifo_even_overflow_irq_en:1;
        RBus_UInt32  s_g_fifo_even_overflow_irq_en:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  s_request_fifo_even_overflow_irq_en:1;
        RBus_UInt32  res7:2;
        RBus_UInt32  s_over_flb_irq_en:1;
        RBus_UInt32  s_input_size_less_irq_en:1;
        RBus_UInt32  s_input_size_more_irq_en:1;
        RBus_UInt32  s_block_fifo_overflow_irq_en:1;
        RBus_UInt32  s_input_fifo_overflow_irq_en:1;
        RBus_UInt32  s_tail_fifo_overflow_irq_en:1;
        RBus_UInt32  s_prs_over_line_sum_bit_irq_en:1;
        RBus_UInt32  res8:13;
    };
}mdomain_cap_caps_pq_cmp_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  s_b_fifo_even_overflow_st:1;
        RBus_UInt32  s_r_fifo_even_overflow_st:1;
        RBus_UInt32  s_g_fifo_even_overflow_st:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  s_request_fifo_even_overflow_st:1;
        RBus_UInt32  res7:2;
        RBus_UInt32  s_over_flb_st:1;
        RBus_UInt32  s_input_size_less_st:1;
        RBus_UInt32  s_input_size_more_st:1;
        RBus_UInt32  s_block_fifo_overflow_st:1;
        RBus_UInt32  s_input_fifo_overflow_st:1;
        RBus_UInt32  s_tail_fifo_overflow_st:1;
        RBus_UInt32  s_prs_over_line_sum_bit_st:1;
        RBus_UInt32  res8:12;
        RBus_UInt32  s_pqc_irq:1;
    };
}mdomain_cap_caps_pq_cmp_irq_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_cmp_package_height_cnt:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  s_g_ratio_min:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  s_g_ratio_max:5;
        RBus_UInt32  res3:2;
        RBus_UInt32  res4:1;
    };
}mdomain_cap_caps_pq_cmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_short_term_rb_qp_max:4;
        RBus_UInt32  s_short_term_g_qp_max:4;
        RBus_UInt32  res1:8;
        RBus_UInt32  s_long_term_rb_qp_max:4;
        RBus_UInt32  s_long_term_g_qp_max:4;
        RBus_UInt32  res2:7;
        RBus_UInt32  s_long_term_qp_measure_en:1;
    };
}mdomain_cap_caps_pq_cmp_qp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_fifo_water_even_b:8;
        RBus_UInt32  s_fifo_water_even_r:8;
        RBus_UInt32  s_fifo_water_even_g:8;
        RBus_UInt32  res1:7;
        RBus_UInt32  s_fifo_water_measure_en:1;
    };
}mdomain_cap_caps_pq_cmp_fifo_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_rb_frame_left:16;
        RBus_UInt32  s_g_frame_left:16;
    };
}mdomain_cap_caps_pq_cmp_left_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_total_package_even:24;
        RBus_UInt32  res1:7;
        RBus_UInt32  s_total_package_long_term:1;
    };
}mdomain_cap_caps_pq_cmp_package_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_cmp_crc_even_g:32;
    };
}mdomain_cap_caps_pq_cmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_cmp_crc_even_r:32;
    };
}mdomain_cap_caps_pq_cmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_cmp_crc_even_b:32;
    };
}mdomain_cap_caps_pq_cmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_blk0_add_value16:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  s_blk0_add_value32:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_dic_mode_tolerance:8;
        RBus_UInt32  s_blk0_add_value0:6;
        RBus_UInt32  res3:2;
    };
}mdomain_cap_caps_pq_cmp_blk0_add0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_blk0_add_value1:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  s_blk0_add_value2:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_blk0_add_value4:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  s_blk0_add_value8:6;
        RBus_UInt32  res4:2;
    };
}mdomain_cap_caps_pq_cmp_blk0_add1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_pqc_den_extend_rate:4;
        RBus_UInt32  res1:28;
    };
}mdomain_cap_caps_pq_cmp_den_extend_rate_RBUS;




#endif 


#endif 
