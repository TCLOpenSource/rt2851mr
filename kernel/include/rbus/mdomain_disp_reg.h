/**
* @file Merlin5-DesignSpec-M_Domain_Disp1Disp2
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_MDOMAIN_DISP_REG_H_
#define _RBUS_MDOMAIN_DISP_REG_H_

#include "rbus_types.h"



//  MDOMAIN_DISP Register Address
#define  MDOMAIN_DISP_DDR_MainPreVStart                                         0x18027300
#define  MDOMAIN_DISP_DDR_MainPreVStart_reg_addr                                 "0xB8027300"
#define  MDOMAIN_DISP_DDR_MainPreVStart_reg                                      0xB8027300
#define  MDOMAIN_DISP_DDR_MainPreVStart_inst_addr                                "0x0000"
#define  set_MDOMAIN_DISP_DDR_MainPreVStart_reg(data)                            (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainPreVStart_reg)=data)
#define  get_MDOMAIN_DISP_DDR_MainPreVStart_reg                                  (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainPreVStart_reg))
#define  MDOMAIN_DISP_DDR_MainPreVStart_main_rgb2gbr_fmt_shift                   (14)
#define  MDOMAIN_DISP_DDR_MainPreVStart_main_usb2vga_en_shift                    (13)
#define  MDOMAIN_DISP_DDR_MainPreVStart_main_usb2vga_fmt_shift                   (12)
#define  MDOMAIN_DISP_DDR_MainPreVStart_main_pre_rd_v_start_shift                (0)
#define  MDOMAIN_DISP_DDR_MainPreVStart_main_rgb2gbr_fmt_mask                    (0x00004000)
#define  MDOMAIN_DISP_DDR_MainPreVStart_main_usb2vga_en_mask                     (0x00002000)
#define  MDOMAIN_DISP_DDR_MainPreVStart_main_usb2vga_fmt_mask                    (0x00001000)
#define  MDOMAIN_DISP_DDR_MainPreVStart_main_pre_rd_v_start_mask                 (0x000007FF)
#define  MDOMAIN_DISP_DDR_MainPreVStart_main_rgb2gbr_fmt(data)                   (0x00004000&((data)<<14))
#define  MDOMAIN_DISP_DDR_MainPreVStart_main_usb2vga_en(data)                    (0x00002000&((data)<<13))
#define  MDOMAIN_DISP_DDR_MainPreVStart_main_usb2vga_fmt(data)                   (0x00001000&((data)<<12))
#define  MDOMAIN_DISP_DDR_MainPreVStart_main_pre_rd_v_start(data)                (0x000007FF&(data))
#define  MDOMAIN_DISP_DDR_MainPreVStart_get_main_rgb2gbr_fmt(data)               ((0x00004000&(data))>>14)
#define  MDOMAIN_DISP_DDR_MainPreVStart_get_main_usb2vga_en(data)                ((0x00002000&(data))>>13)
#define  MDOMAIN_DISP_DDR_MainPreVStart_get_main_usb2vga_fmt(data)               ((0x00001000&(data))>>12)
#define  MDOMAIN_DISP_DDR_MainPreVStart_get_main_pre_rd_v_start(data)            (0x000007FF&(data))

#define  MDOMAIN_DISP_DDR_MainNumWTL                                            0x18027304
#define  MDOMAIN_DISP_DDR_MainNumWTL_reg_addr                                    "0xB8027304"
#define  MDOMAIN_DISP_DDR_MainNumWTL_reg                                         0xB8027304
#define  MDOMAIN_DISP_DDR_MainNumWTL_inst_addr                                   "0x0001"
#define  set_MDOMAIN_DISP_DDR_MainNumWTL_reg(data)                               (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainNumWTL_reg)=data)
#define  get_MDOMAIN_DISP_DDR_MainNumWTL_reg                                     (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainNumWTL_reg))
#define  MDOMAIN_DISP_DDR_MainNumWTL_main_pixel_num_shift                        (8)
#define  MDOMAIN_DISP_DDR_MainNumWTL_main_wtlvl_shift                            (0)
#define  MDOMAIN_DISP_DDR_MainNumWTL_main_pixel_num_mask                         (0x003FFF00)
#define  MDOMAIN_DISP_DDR_MainNumWTL_main_wtlvl_mask                             (0x000000FF)
#define  MDOMAIN_DISP_DDR_MainNumWTL_main_pixel_num(data)                        (0x003FFF00&((data)<<8))
#define  MDOMAIN_DISP_DDR_MainNumWTL_main_wtlvl(data)                            (0x000000FF&(data))
#define  MDOMAIN_DISP_DDR_MainNumWTL_get_main_pixel_num(data)                    ((0x003FFF00&(data))>>8)
#define  MDOMAIN_DISP_DDR_MainNumWTL_get_main_wtlvl(data)                        (0x000000FF&(data))

#define  MDOMAIN_DISP_DDR_MainRdNumLenRem                                       0x18027308
#define  MDOMAIN_DISP_DDR_MainRdNumLenRem_reg_addr                               "0xB8027308"
#define  MDOMAIN_DISP_DDR_MainRdNumLenRem_reg                                    0xB8027308
#define  MDOMAIN_DISP_DDR_MainRdNumLenRem_inst_addr                              "0x0002"
#define  set_MDOMAIN_DISP_DDR_MainRdNumLenRem_reg(data)                          (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainRdNumLenRem_reg)=data)
#define  get_MDOMAIN_DISP_DDR_MainRdNumLenRem_reg                                (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainRdNumLenRem_reg))
#define  MDOMAIN_DISP_DDR_MainRdNumLenRem_main_read_num_shift                    (16)
#define  MDOMAIN_DISP_DDR_MainRdNumLenRem_main_read_len_shift                    (8)
#define  MDOMAIN_DISP_DDR_MainRdNumLenRem_main_read_remain_shift                 (0)
#define  MDOMAIN_DISP_DDR_MainRdNumLenRem_main_read_num_mask                     (0xFFFF0000)
#define  MDOMAIN_DISP_DDR_MainRdNumLenRem_main_read_len_mask                     (0x0000FF00)
#define  MDOMAIN_DISP_DDR_MainRdNumLenRem_main_read_remain_mask                  (0x000000FF)
#define  MDOMAIN_DISP_DDR_MainRdNumLenRem_main_read_num(data)                    (0xFFFF0000&((data)<<16))
#define  MDOMAIN_DISP_DDR_MainRdNumLenRem_main_read_len(data)                    (0x0000FF00&((data)<<8))
#define  MDOMAIN_DISP_DDR_MainRdNumLenRem_main_read_remain(data)                 (0x000000FF&(data))
#define  MDOMAIN_DISP_DDR_MainRdNumLenRem_get_main_read_num(data)                ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_DISP_DDR_MainRdNumLenRem_get_main_read_len(data)                ((0x0000FF00&(data))>>8)
#define  MDOMAIN_DISP_DDR_MainRdNumLenRem_get_main_read_remain(data)             (0x000000FF&(data))

#define  MDOMAIN_DISP_DDR_MainAddr                                              0x1802730C
#define  MDOMAIN_DISP_DDR_MainAddr_reg_addr                                      "0xB802730C"
#define  MDOMAIN_DISP_DDR_MainAddr_reg                                           0xB802730C
#define  MDOMAIN_DISP_DDR_MainAddr_inst_addr                                     "0x0003"
#define  set_MDOMAIN_DISP_DDR_MainAddr_reg(data)                                 (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainAddr_reg)=data)
#define  get_MDOMAIN_DISP_DDR_MainAddr_reg                                       (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainAddr_reg))
#define  MDOMAIN_DISP_DDR_MainAddr_main_read_addr_shift                          (3)
#define  MDOMAIN_DISP_DDR_MainAddr_main_read_addr_mask                           (0xFFFFFFF8)
#define  MDOMAIN_DISP_DDR_MainAddr_main_read_addr(data)                          (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DDR_MainAddr_get_main_read_addr(data)                      ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DDR_MainAddrDropBits                                      0x18027310
#define  MDOMAIN_DISP_DDR_MainAddrDropBits_reg_addr                              "0xB8027310"
#define  MDOMAIN_DISP_DDR_MainAddrDropBits_reg                                   0xB8027310
#define  MDOMAIN_DISP_DDR_MainAddrDropBits_inst_addr                             "0x0004"
#define  set_MDOMAIN_DISP_DDR_MainAddrDropBits_reg(data)                         (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainAddrDropBits_reg)=data)
#define  get_MDOMAIN_DISP_DDR_MainAddrDropBits_reg                               (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainAddrDropBits_reg))
#define  MDOMAIN_DISP_DDR_MainAddrDropBits_main_addr_drop_shift                  (0)
#define  MDOMAIN_DISP_DDR_MainAddrDropBits_main_addr_drop_mask                   (0x0000FFFF)
#define  MDOMAIN_DISP_DDR_MainAddrDropBits_main_addr_drop(data)                  (0x0000FFFF&(data))
#define  MDOMAIN_DISP_DDR_MainAddrDropBits_get_main_addr_drop(data)              (0x0000FFFF&(data))

#define  MDOMAIN_DISP_DDR_MainLineStep                                          0x18027314
#define  MDOMAIN_DISP_DDR_MainLineStep_reg_addr                                  "0xB8027314"
#define  MDOMAIN_DISP_DDR_MainLineStep_reg                                       0xB8027314
#define  MDOMAIN_DISP_DDR_MainLineStep_inst_addr                                 "0x0005"
#define  set_MDOMAIN_DISP_DDR_MainLineStep_reg(data)                             (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainLineStep_reg)=data)
#define  get_MDOMAIN_DISP_DDR_MainLineStep_reg                                   (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainLineStep_reg))
#define  MDOMAIN_DISP_DDR_MainLineStep_main_line_step_shift                      (3)
#define  MDOMAIN_DISP_DDR_MainLineStep_main_line_step_mask                       (0xFFFFFFF8)
#define  MDOMAIN_DISP_DDR_MainLineStep_main_line_step(data)                      (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DDR_MainLineStep_get_main_line_step(data)                  ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DDR_MainBlkStep                                           0x18027318
#define  MDOMAIN_DISP_DDR_MainBlkStep_reg_addr                                   "0xB8027318"
#define  MDOMAIN_DISP_DDR_MainBlkStep_reg                                        0xB8027318
#define  MDOMAIN_DISP_DDR_MainBlkStep_inst_addr                                  "0x0006"
#define  set_MDOMAIN_DISP_DDR_MainBlkStep_reg(data)                              (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainBlkStep_reg)=data)
#define  get_MDOMAIN_DISP_DDR_MainBlkStep_reg                                    (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainBlkStep_reg))
#define  MDOMAIN_DISP_DDR_MainBlkStep_main_block_step_shift                      (3)
#define  MDOMAIN_DISP_DDR_MainBlkStep_main_block_step_mask                       (0xFFFFFFF8)
#define  MDOMAIN_DISP_DDR_MainBlkStep_main_block_step(data)                      (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DDR_MainBlkStep_get_main_block_step(data)                  ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DDR_Main2ndAddr                                           0x1802731C
#define  MDOMAIN_DISP_DDR_Main2ndAddr_reg_addr                                   "0xB802731C"
#define  MDOMAIN_DISP_DDR_Main2ndAddr_reg                                        0xB802731C
#define  MDOMAIN_DISP_DDR_Main2ndAddr_inst_addr                                  "0x0007"
#define  set_MDOMAIN_DISP_DDR_Main2ndAddr_reg(data)                              (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main2ndAddr_reg)=data)
#define  get_MDOMAIN_DISP_DDR_Main2ndAddr_reg                                    (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main2ndAddr_reg))
#define  MDOMAIN_DISP_DDR_Main2ndAddr_main_sec_block_shift                       (3)
#define  MDOMAIN_DISP_DDR_Main2ndAddr_main_sec_block_mask                        (0xFFFFFFF8)
#define  MDOMAIN_DISP_DDR_Main2ndAddr_main_sec_block(data)                       (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DDR_Main2ndAddr_get_main_sec_block(data)                   ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DDR_Main3rdAddr                                           0x18027320
#define  MDOMAIN_DISP_DDR_Main3rdAddr_reg_addr                                   "0xB8027320"
#define  MDOMAIN_DISP_DDR_Main3rdAddr_reg                                        0xB8027320
#define  MDOMAIN_DISP_DDR_Main3rdAddr_inst_addr                                  "0x0008"
#define  set_MDOMAIN_DISP_DDR_Main3rdAddr_reg(data)                              (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main3rdAddr_reg)=data)
#define  get_MDOMAIN_DISP_DDR_Main3rdAddr_reg                                    (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main3rdAddr_reg))
#define  MDOMAIN_DISP_DDR_Main3rdAddr_main_third_block_shift                     (3)
#define  MDOMAIN_DISP_DDR_Main3rdAddr_main_third_block_mask                      (0xFFFFFFF8)
#define  MDOMAIN_DISP_DDR_Main3rdAddr_main_third_block(data)                     (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DDR_Main3rdAddr_get_main_third_block(data)                 ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DDR_MainLineNum                                           0x18027324
#define  MDOMAIN_DISP_DDR_MainLineNum_reg_addr                                   "0xB8027324"
#define  MDOMAIN_DISP_DDR_MainLineNum_reg                                        0xB8027324
#define  MDOMAIN_DISP_DDR_MainLineNum_inst_addr                                  "0x0009"
#define  set_MDOMAIN_DISP_DDR_MainLineNum_reg(data)                              (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainLineNum_reg)=data)
#define  get_MDOMAIN_DISP_DDR_MainLineNum_reg                                    (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainLineNum_reg))
#define  MDOMAIN_DISP_DDR_MainLineNum_main_frame_mode_shift                      (13)
#define  MDOMAIN_DISP_DDR_MainLineNum_main_line_number_shift                     (0)
#define  MDOMAIN_DISP_DDR_MainLineNum_main_frame_mode_mask                       (0x00002000)
#define  MDOMAIN_DISP_DDR_MainLineNum_main_line_number_mask                      (0x00001FFF)
#define  MDOMAIN_DISP_DDR_MainLineNum_main_frame_mode(data)                      (0x00002000&((data)<<13))
#define  MDOMAIN_DISP_DDR_MainLineNum_main_line_number(data)                     (0x00001FFF&(data))
#define  MDOMAIN_DISP_DDR_MainLineNum_get_main_frame_mode(data)                  ((0x00002000&(data))>>13)
#define  MDOMAIN_DISP_DDR_MainLineNum_get_main_line_number(data)                 (0x00001FFF&(data))

#define  MDOMAIN_DISP_DDR_MainCtrl                                              0x18027328
#define  MDOMAIN_DISP_DDR_MainCtrl_reg_addr                                      "0xB8027328"
#define  MDOMAIN_DISP_DDR_MainCtrl_reg                                           0xB8027328
#define  MDOMAIN_DISP_DDR_MainCtrl_inst_addr                                     "0x000A"
#define  set_MDOMAIN_DISP_DDR_MainCtrl_reg(data)                                 (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainCtrl_reg)=data)
#define  get_MDOMAIN_DISP_DDR_MainCtrl_reg                                       (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainCtrl_reg))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_cap2disp_distance_shift                  (28)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_bufnum_shift                             (24)
#define  MDOMAIN_DISP_DDR_MainCtrl_dummy_22_shift                                (22)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_decompression_clk_en_shift               (21)
#define  MDOMAIN_DISP_DDR_MainCtrl_maincolorspace_shift                          (19)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_sub_swap_shift                           (18)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_in_format_shift                          (17)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_bit_num_shift                            (16)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_pr_out_merge_triple_shift                (14)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_pr_our_merge_en_shift                    (13)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_frame_seq_out_en_shift                   (12)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_stop_burst_en_shift                      (11)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_single_buffer_select_shift               (8)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_v_flip_3buf_en_shift                     (7)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_double_en_shift                          (6)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_merge_en0_shift                          (5)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_block_free_shift                         (4)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_frc_style_shift                          (3)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_source_sel_shift                         (1)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_use_sub_block_shift                      (0)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_cap2disp_distance_mask                   (0x70000000)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_bufnum_mask                              (0x07000000)
#define  MDOMAIN_DISP_DDR_MainCtrl_dummy_22_mask                                 (0x00400000)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_decompression_clk_en_mask                (0x00200000)
#define  MDOMAIN_DISP_DDR_MainCtrl_maincolorspace_mask                           (0x00080000)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_sub_swap_mask                            (0x00040000)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_in_format_mask                           (0x00020000)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_bit_num_mask                             (0x00010000)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_pr_out_merge_triple_mask                 (0x00004000)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_pr_our_merge_en_mask                     (0x00002000)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_frame_seq_out_en_mask                    (0x00001000)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_stop_burst_en_mask                       (0x00000800)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_single_buffer_select_mask                (0x00000700)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_v_flip_3buf_en_mask                      (0x00000080)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_double_en_mask                           (0x00000040)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_merge_en0_mask                           (0x00000020)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_block_free_mask                          (0x00000010)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_frc_style_mask                           (0x00000008)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_source_sel_mask                          (0x00000006)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_use_sub_block_mask                       (0x00000001)
#define  MDOMAIN_DISP_DDR_MainCtrl_main_cap2disp_distance(data)                  (0x70000000&((data)<<28))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_bufnum(data)                             (0x07000000&((data)<<24))
#define  MDOMAIN_DISP_DDR_MainCtrl_dummy_22(data)                                (0x00400000&((data)<<22))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_decompression_clk_en(data)               (0x00200000&((data)<<21))
#define  MDOMAIN_DISP_DDR_MainCtrl_maincolorspace(data)                          (0x00080000&((data)<<19))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_sub_swap(data)                           (0x00040000&((data)<<18))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_in_format(data)                          (0x00020000&((data)<<17))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_bit_num(data)                            (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_pr_out_merge_triple(data)                (0x00004000&((data)<<14))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_pr_our_merge_en(data)                    (0x00002000&((data)<<13))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_frame_seq_out_en(data)                   (0x00001000&((data)<<12))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_stop_burst_en(data)                      (0x00000800&((data)<<11))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_single_buffer_select(data)               (0x00000700&((data)<<8))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_v_flip_3buf_en(data)                     (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_double_en(data)                          (0x00000040&((data)<<6))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_merge_en0(data)                          (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_block_free(data)                         (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_frc_style(data)                          (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_source_sel(data)                         (0x00000006&((data)<<1))
#define  MDOMAIN_DISP_DDR_MainCtrl_main_use_sub_block(data)                      (0x00000001&(data))
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_cap2disp_distance(data)              ((0x70000000&(data))>>28)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_bufnum(data)                         ((0x07000000&(data))>>24)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_dummy_22(data)                            ((0x00400000&(data))>>22)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_decompression_clk_en(data)           ((0x00200000&(data))>>21)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_maincolorspace(data)                      ((0x00080000&(data))>>19)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_sub_swap(data)                       ((0x00040000&(data))>>18)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_in_format(data)                      ((0x00020000&(data))>>17)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_bit_num(data)                        ((0x00010000&(data))>>16)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_pr_out_merge_triple(data)            ((0x00004000&(data))>>14)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_pr_our_merge_en(data)                ((0x00002000&(data))>>13)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_frame_seq_out_en(data)               ((0x00001000&(data))>>12)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_stop_burst_en(data)                  ((0x00000800&(data))>>11)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_single_buffer_select(data)           ((0x00000700&(data))>>8)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_v_flip_3buf_en(data)                 ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_double_en(data)                      ((0x00000040&(data))>>6)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_merge_en0(data)                      ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_block_free(data)                     ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_frc_style(data)                      ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_source_sel(data)                     ((0x00000006&(data))>>1)
#define  MDOMAIN_DISP_DDR_MainCtrl_get_main_use_sub_block(data)                  (0x00000001&(data))

#define  MDOMAIN_DISP_Disp_main_enable                                          0x1802732C
#define  MDOMAIN_DISP_Disp_main_enable_reg_addr                                  "0xB802732C"
#define  MDOMAIN_DISP_Disp_main_enable_reg                                       0xB802732C
#define  MDOMAIN_DISP_Disp_main_enable_inst_addr                                 "0x000B"
#define  set_MDOMAIN_DISP_Disp_main_enable_reg(data)                             (*((volatile unsigned int*)MDOMAIN_DISP_Disp_main_enable_reg)=data)
#define  get_MDOMAIN_DISP_Disp_main_enable_reg                                   (*((volatile unsigned int*)MDOMAIN_DISP_Disp_main_enable_reg))
#define  MDOMAIN_DISP_Disp_main_enable_main_disp_en_shift                        (0)
#define  MDOMAIN_DISP_Disp_main_enable_main_disp_en_mask                         (0x00000001)
#define  MDOMAIN_DISP_Disp_main_enable_main_disp_en(data)                        (0x00000001&(data))
#define  MDOMAIN_DISP_Disp_main_enable_get_main_disp_en(data)                    (0x00000001&(data))

#define  MDOMAIN_DISP_DDR_MainStatus                                            0x18027330
#define  MDOMAIN_DISP_DDR_MainStatus_reg_addr                                    "0xB8027330"
#define  MDOMAIN_DISP_DDR_MainStatus_reg                                         0xB8027330
#define  MDOMAIN_DISP_DDR_MainStatus_inst_addr                                   "0x000C"
#define  set_MDOMAIN_DISP_DDR_MainStatus_reg(data)                               (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainStatus_reg)=data)
#define  get_MDOMAIN_DISP_DDR_MainStatus_reg                                     (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainStatus_reg))
#define  MDOMAIN_DISP_DDR_MainStatus_main_repeat_chgflg_shift                    (15)
#define  MDOMAIN_DISP_DDR_MainStatus_main_repeat_frame_sequence_shift            (12)
#define  MDOMAIN_DISP_DDR_MainStatus_main_drop_chgflg_shift                      (11)
#define  MDOMAIN_DISP_DDR_MainStatus_main_drop_frame_sequence_shift              (8)
#define  MDOMAIN_DISP_DDR_MainStatus_main_block_select_shift                     (4)
#define  MDOMAIN_DISP_DDR_MainStatus_main_read_l_flag_shift                      (0)
#define  MDOMAIN_DISP_DDR_MainStatus_main_repeat_chgflg_mask                     (0x00008000)
#define  MDOMAIN_DISP_DDR_MainStatus_main_repeat_frame_sequence_mask             (0x00007000)
#define  MDOMAIN_DISP_DDR_MainStatus_main_drop_chgflg_mask                       (0x00000800)
#define  MDOMAIN_DISP_DDR_MainStatus_main_drop_frame_sequence_mask               (0x00000700)
#define  MDOMAIN_DISP_DDR_MainStatus_main_block_select_mask                      (0x00000070)
#define  MDOMAIN_DISP_DDR_MainStatus_main_read_l_flag_mask                       (0x00000001)
#define  MDOMAIN_DISP_DDR_MainStatus_main_repeat_chgflg(data)                    (0x00008000&((data)<<15))
#define  MDOMAIN_DISP_DDR_MainStatus_main_repeat_frame_sequence(data)            (0x00007000&((data)<<12))
#define  MDOMAIN_DISP_DDR_MainStatus_main_drop_chgflg(data)                      (0x00000800&((data)<<11))
#define  MDOMAIN_DISP_DDR_MainStatus_main_drop_frame_sequence(data)              (0x00000700&((data)<<8))
#define  MDOMAIN_DISP_DDR_MainStatus_main_block_select(data)                     (0x00000070&((data)<<4))
#define  MDOMAIN_DISP_DDR_MainStatus_main_read_l_flag(data)                      (0x00000001&(data))
#define  MDOMAIN_DISP_DDR_MainStatus_get_main_repeat_chgflg(data)                ((0x00008000&(data))>>15)
#define  MDOMAIN_DISP_DDR_MainStatus_get_main_repeat_frame_sequence(data)        ((0x00007000&(data))>>12)
#define  MDOMAIN_DISP_DDR_MainStatus_get_main_drop_chgflg(data)                  ((0x00000800&(data))>>11)
#define  MDOMAIN_DISP_DDR_MainStatus_get_main_drop_frame_sequence(data)          ((0x00000700&(data))>>8)
#define  MDOMAIN_DISP_DDR_MainStatus_get_main_block_select(data)                 ((0x00000070&(data))>>4)
#define  MDOMAIN_DISP_DDR_MainStatus_get_main_read_l_flag(data)                  (0x00000001&(data))

#define  MDOMAIN_DISP_DDR_MainSubCtrl                                           0x18027334
#define  MDOMAIN_DISP_DDR_MainSubCtrl_reg_addr                                   "0xB8027334"
#define  MDOMAIN_DISP_DDR_MainSubCtrl_reg                                        0xB8027334
#define  MDOMAIN_DISP_DDR_MainSubCtrl_inst_addr                                  "0x000D"
#define  set_MDOMAIN_DISP_DDR_MainSubCtrl_reg(data)                              (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainSubCtrl_reg)=data)
#define  get_MDOMAIN_DISP_DDR_MainSubCtrl_reg                                    (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainSubCtrl_reg))
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp2_db_rd_sel_shift                      (18)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp2_double_enable_shift                  (17)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp2_double_apply_shift                   (16)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp1_db_rd_sel_shift                      (2)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp1_double_enable_shift                  (1)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp1_double_apply_shift                   (0)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp2_db_rd_sel_mask                       (0x00040000)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp2_double_enable_mask                   (0x00020000)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp2_double_apply_mask                    (0x00010000)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp1_db_rd_sel_mask                       (0x00000004)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp1_double_enable_mask                   (0x00000002)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp1_double_apply_mask                    (0x00000001)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp2_db_rd_sel(data)                      (0x00040000&((data)<<18))
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp2_double_enable(data)                  (0x00020000&((data)<<17))
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp2_double_apply(data)                   (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp1_db_rd_sel(data)                      (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp1_double_enable(data)                  (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DDR_MainSubCtrl_disp1_double_apply(data)                   (0x00000001&(data))
#define  MDOMAIN_DISP_DDR_MainSubCtrl_get_disp2_db_rd_sel(data)                  ((0x00040000&(data))>>18)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_get_disp2_double_enable(data)              ((0x00020000&(data))>>17)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_get_disp2_double_apply(data)               ((0x00010000&(data))>>16)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_get_disp1_db_rd_sel(data)                  ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_get_disp1_double_enable(data)              ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DDR_MainSubCtrl_get_disp1_double_apply(data)               (0x00000001&(data))

#define  MDOMAIN_DISP_Main_disp_blocksel_option                                 0x18027340
#define  MDOMAIN_DISP_Main_disp_blocksel_option_reg_addr                         "0xB8027340"
#define  MDOMAIN_DISP_Main_disp_blocksel_option_reg                              0xB8027340
#define  MDOMAIN_DISP_Main_disp_blocksel_option_inst_addr                        "0x000E"
#define  set_MDOMAIN_DISP_Main_disp_blocksel_option_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_Main_disp_blocksel_option_reg)=data)
#define  get_MDOMAIN_DISP_Main_disp_blocksel_option_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_Main_disp_blocksel_option_reg))
#define  MDOMAIN_DISP_Main_disp_blocksel_option_main_force_blocksel_toggle_mode_shift (17)
#define  MDOMAIN_DISP_Main_disp_blocksel_option_main_force_blocksel_toggle_en_shift (16)
#define  MDOMAIN_DISP_Main_disp_blocksel_option_main_force_blocksel_toggle_line_shift (0)
#define  MDOMAIN_DISP_Main_disp_blocksel_option_main_force_blocksel_toggle_mode_mask (0x00020000)
#define  MDOMAIN_DISP_Main_disp_blocksel_option_main_force_blocksel_toggle_en_mask (0x00010000)
#define  MDOMAIN_DISP_Main_disp_blocksel_option_main_force_blocksel_toggle_line_mask (0x00001FFF)
#define  MDOMAIN_DISP_Main_disp_blocksel_option_main_force_blocksel_toggle_mode(data) (0x00020000&((data)<<17))
#define  MDOMAIN_DISP_Main_disp_blocksel_option_main_force_blocksel_toggle_en(data) (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_Main_disp_blocksel_option_main_force_blocksel_toggle_line(data) (0x00001FFF&(data))
#define  MDOMAIN_DISP_Main_disp_blocksel_option_get_main_force_blocksel_toggle_mode(data) ((0x00020000&(data))>>17)
#define  MDOMAIN_DISP_Main_disp_blocksel_option_get_main_force_blocksel_toggle_en(data) ((0x00010000&(data))>>16)
#define  MDOMAIN_DISP_Main_disp_blocksel_option_get_main_force_blocksel_toggle_line(data) (0x00001FFF&(data))

#define  MDOMAIN_DISP_DISP_DMALOAD_OPTION                                       0x18027344
#define  MDOMAIN_DISP_DISP_DMALOAD_OPTION_reg_addr                               "0xB8027344"
#define  MDOMAIN_DISP_DISP_DMALOAD_OPTION_reg                                    0xB8027344
#define  MDOMAIN_DISP_DISP_DMALOAD_OPTION_inst_addr                              "0x000F"
#define  set_MDOMAIN_DISP_DISP_DMALOAD_OPTION_reg(data)                          (*((volatile unsigned int*)MDOMAIN_DISP_DISP_DMALOAD_OPTION_reg)=data)
#define  get_MDOMAIN_DISP_DISP_DMALOAD_OPTION_reg                                (*((volatile unsigned int*)MDOMAIN_DISP_DISP_DMALOAD_OPTION_reg))
#define  MDOMAIN_DISP_DISP_DMALOAD_OPTION_force_toggle_cal_option_shift          (18)
#define  MDOMAIN_DISP_DISP_DMALOAD_OPTION_force_dmaload_mode_shift               (16)
#define  MDOMAIN_DISP_DISP_DMALOAD_OPTION_force_dmaload_line_shift               (0)
#define  MDOMAIN_DISP_DISP_DMALOAD_OPTION_force_toggle_cal_option_mask           (0x000C0000)
#define  MDOMAIN_DISP_DISP_DMALOAD_OPTION_force_dmaload_mode_mask                (0x00030000)
#define  MDOMAIN_DISP_DISP_DMALOAD_OPTION_force_dmaload_line_mask                (0x00001FFF)
#define  MDOMAIN_DISP_DISP_DMALOAD_OPTION_force_toggle_cal_option(data)          (0x000C0000&((data)<<18))
#define  MDOMAIN_DISP_DISP_DMALOAD_OPTION_force_dmaload_mode(data)               (0x00030000&((data)<<16))
#define  MDOMAIN_DISP_DISP_DMALOAD_OPTION_force_dmaload_line(data)               (0x00001FFF&(data))
#define  MDOMAIN_DISP_DISP_DMALOAD_OPTION_get_force_toggle_cal_option(data)      ((0x000C0000&(data))>>18)
#define  MDOMAIN_DISP_DISP_DMALOAD_OPTION_get_force_dmaload_mode(data)           ((0x00030000&(data))>>16)
#define  MDOMAIN_DISP_DISP_DMALOAD_OPTION_get_force_dmaload_line(data)           (0x00001FFF&(data))

#define  MDOMAIN_DISP_DDR_MainMaskCtrl                                          0x18027350
#define  MDOMAIN_DISP_DDR_MainMaskCtrl_reg_addr                                  "0xB8027350"
#define  MDOMAIN_DISP_DDR_MainMaskCtrl_reg                                       0xB8027350
#define  MDOMAIN_DISP_DDR_MainMaskCtrl_inst_addr                                 "0x0010"
#define  set_MDOMAIN_DISP_DDR_MainMaskCtrl_reg(data)                             (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainMaskCtrl_reg)=data)
#define  get_MDOMAIN_DISP_DDR_MainMaskCtrl_reg                                   (*((volatile unsigned int*)MDOMAIN_DISP_DDR_MainMaskCtrl_reg))
#define  MDOMAIN_DISP_DDR_MainMaskCtrl_main_en_syn_rst_shift                     (16)
#define  MDOMAIN_DISP_DDR_MainMaskCtrl_main_en_syn_rst_mask                      (0x00010000)
#define  MDOMAIN_DISP_DDR_MainMaskCtrl_main_en_syn_rst(data)                     (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_DDR_MainMaskCtrl_get_main_en_syn_rst(data)                 ((0x00010000&(data))>>16)

#define  MDOMAIN_DISP_DDR_Main_BM_DMA                                           0x180273C0
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_reg_addr                                   "0xB80273C0"
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_reg                                        0xB80273C0
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_inst_addr                                  "0x0011"
#define  set_MDOMAIN_DISP_DDR_Main_BM_DMA_reg(data)                              (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main_BM_DMA_reg)=data)
#define  get_MDOMAIN_DISP_DDR_Main_BM_DMA_reg                                    (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main_BM_DMA_reg))
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_bstlen_shift                               (4)
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_chroma_fir_sel_shift                       (2)
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_chroma_format_shift                        (1)
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_dma_mode_shift                             (0)
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_bstlen_mask                                (0x00000070)
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_chroma_fir_sel_mask                        (0x0000000C)
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_chroma_format_mask                         (0x00000002)
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_dma_mode_mask                              (0x00000001)
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_bstlen(data)                               (0x00000070&((data)<<4))
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_chroma_fir_sel(data)                       (0x0000000C&((data)<<2))
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_chroma_format(data)                        (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_dma_mode(data)                             (0x00000001&(data))
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_get_bstlen(data)                           ((0x00000070&(data))>>4)
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_get_chroma_fir_sel(data)                   ((0x0000000C&(data))>>2)
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_get_chroma_format(data)                    ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_get_dma_mode(data)                         (0x00000001&(data))

#define  MDOMAIN_DISP_DDR_Main_BM_DMA_PICSET                                    0x180273C4
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_PICSET_reg_addr                            "0xB80273C4"
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_PICSET_reg                                 0xB80273C4
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_PICSET_inst_addr                           "0x0012"
#define  set_MDOMAIN_DISP_DDR_Main_BM_DMA_PICSET_reg(data)                       (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main_BM_DMA_PICSET_reg)=data)
#define  get_MDOMAIN_DISP_DDR_Main_BM_DMA_PICSET_reg                             (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main_BM_DMA_PICSET_reg))
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_PICSET_y_ads_set1_shift                    (8)
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_PICSET_c_ads_set1_shift                    (0)
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_PICSET_y_ads_set1_mask                     (0x00007F00)
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_PICSET_c_ads_set1_mask                     (0x0000007F)
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_PICSET_y_ads_set1(data)                    (0x00007F00&((data)<<8))
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_PICSET_c_ads_set1(data)                    (0x0000007F&(data))
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_PICSET_get_y_ads_set1(data)                ((0x00007F00&(data))>>8)
#define  MDOMAIN_DISP_DDR_Main_BM_DMA_PICSET_get_c_ads_set1(data)                (0x0000007F&(data))

#define  MDOMAIN_DISP_DDR_Main_BM_H_OFFSET                                      0x180273C8
#define  MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_reg_addr                              "0xB80273C8"
#define  MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_reg                                   0xB80273C8
#define  MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_inst_addr                             "0x0013"
#define  set_MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_reg(data)                         (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_reg)=data)
#define  get_MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_reg                               (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_reg))
#define  MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_c_h_offset_shift                      (16)
#define  MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_y_h_shift_shift                       (8)
#define  MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_y_h_offset_shift                      (0)
#define  MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_c_h_offset_mask                       (0x00FF0000)
#define  MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_y_h_shift_mask                        (0x00000F00)
#define  MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_y_h_offset_mask                       (0x000000FF)
#define  MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_c_h_offset(data)                      (0x00FF0000&((data)<<16))
#define  MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_y_h_shift(data)                       (0x00000F00&((data)<<8))
#define  MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_y_h_offset(data)                      (0x000000FF&(data))
#define  MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_get_c_h_offset(data)                  ((0x00FF0000&(data))>>16)
#define  MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_get_y_h_shift(data)                   ((0x00000F00&(data))>>8)
#define  MDOMAIN_DISP_DDR_Main_BM_H_OFFSET_get_y_h_offset(data)                  (0x000000FF&(data))

#define  MDOMAIN_DISP_DDR_Main_BM_V_OFFSET                                      0x180273CC
#define  MDOMAIN_DISP_DDR_Main_BM_V_OFFSET_reg_addr                              "0xB80273CC"
#define  MDOMAIN_DISP_DDR_Main_BM_V_OFFSET_reg                                   0xB80273CC
#define  MDOMAIN_DISP_DDR_Main_BM_V_OFFSET_inst_addr                             "0x0014"
#define  set_MDOMAIN_DISP_DDR_Main_BM_V_OFFSET_reg(data)                         (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main_BM_V_OFFSET_reg)=data)
#define  get_MDOMAIN_DISP_DDR_Main_BM_V_OFFSET_reg                               (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main_BM_V_OFFSET_reg))
#define  MDOMAIN_DISP_DDR_Main_BM_V_OFFSET_c_v_offset_shift                      (16)
#define  MDOMAIN_DISP_DDR_Main_BM_V_OFFSET_y_v_offset_shift                      (0)
#define  MDOMAIN_DISP_DDR_Main_BM_V_OFFSET_c_v_offset_mask                       (0x0FFF0000)
#define  MDOMAIN_DISP_DDR_Main_BM_V_OFFSET_y_v_offset_mask                       (0x00000FFF)
#define  MDOMAIN_DISP_DDR_Main_BM_V_OFFSET_c_v_offset(data)                      (0x0FFF0000&((data)<<16))
#define  MDOMAIN_DISP_DDR_Main_BM_V_OFFSET_y_v_offset(data)                      (0x00000FFF&(data))
#define  MDOMAIN_DISP_DDR_Main_BM_V_OFFSET_get_c_v_offset(data)                  ((0x0FFF0000&(data))>>16)
#define  MDOMAIN_DISP_DDR_Main_BM_V_OFFSET_get_y_v_offset(data)                  (0x00000FFF&(data))

#define  MDOMAIN_DISP_main_block_read_addcmd_transform                          0x180273D0
#define  MDOMAIN_DISP_main_block_read_addcmd_transform_reg_addr                  "0xB80273D0"
#define  MDOMAIN_DISP_main_block_read_addcmd_transform_reg                       0xB80273D0
#define  MDOMAIN_DISP_main_block_read_addcmd_transform_inst_addr                 "0x0015"
#define  set_MDOMAIN_DISP_main_block_read_addcmd_transform_reg(data)             (*((volatile unsigned int*)MDOMAIN_DISP_main_block_read_addcmd_transform_reg)=data)
#define  get_MDOMAIN_DISP_main_block_read_addcmd_transform_reg                   (*((volatile unsigned int*)MDOMAIN_DISP_main_block_read_addcmd_transform_reg))
#define  MDOMAIN_DISP_main_block_read_addcmd_transform_blockread_line_step_shift (3)
#define  MDOMAIN_DISP_main_block_read_addcmd_transform_blockread_addcmd_trans_en_shift (0)
#define  MDOMAIN_DISP_main_block_read_addcmd_transform_blockread_line_step_mask  (0xFFFFFFF8)
#define  MDOMAIN_DISP_main_block_read_addcmd_transform_blockread_addcmd_trans_en_mask (0x00000001)
#define  MDOMAIN_DISP_main_block_read_addcmd_transform_blockread_line_step(data) (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_main_block_read_addcmd_transform_blockread_addcmd_trans_en(data) (0x00000001&(data))
#define  MDOMAIN_DISP_main_block_read_addcmd_transform_get_blockread_line_step(data) ((0xFFFFFFF8&(data))>>3)
#define  MDOMAIN_DISP_main_block_read_addcmd_transform_get_blockread_addcmd_trans_en(data) (0x00000001&(data))

#define  MDOMAIN_DISP_main_block_read_ads_start_y                               0x180273D4
#define  MDOMAIN_DISP_main_block_read_ads_start_y_reg_addr                       "0xB80273D4"
#define  MDOMAIN_DISP_main_block_read_ads_start_y_reg                            0xB80273D4
#define  MDOMAIN_DISP_main_block_read_ads_start_y_inst_addr                      "0x0016"
#define  set_MDOMAIN_DISP_main_block_read_ads_start_y_reg(data)                  (*((volatile unsigned int*)MDOMAIN_DISP_main_block_read_ads_start_y_reg)=data)
#define  get_MDOMAIN_DISP_main_block_read_ads_start_y_reg                        (*((volatile unsigned int*)MDOMAIN_DISP_main_block_read_ads_start_y_reg))
#define  MDOMAIN_DISP_main_block_read_ads_start_y_y_ads_start_shift              (3)
#define  MDOMAIN_DISP_main_block_read_ads_start_y_y_ads_start_mask               (0xFFFFFFF8)
#define  MDOMAIN_DISP_main_block_read_ads_start_y_y_ads_start(data)              (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_main_block_read_ads_start_y_get_y_ads_start(data)          ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_main_block_read_ads_start_c                               0x180273D8
#define  MDOMAIN_DISP_main_block_read_ads_start_c_reg_addr                       "0xB80273D8"
#define  MDOMAIN_DISP_main_block_read_ads_start_c_reg                            0xB80273D8
#define  MDOMAIN_DISP_main_block_read_ads_start_c_inst_addr                      "0x0017"
#define  set_MDOMAIN_DISP_main_block_read_ads_start_c_reg(data)                  (*((volatile unsigned int*)MDOMAIN_DISP_main_block_read_ads_start_c_reg)=data)
#define  get_MDOMAIN_DISP_main_block_read_ads_start_c_reg                        (*((volatile unsigned int*)MDOMAIN_DISP_main_block_read_ads_start_c_reg))
#define  MDOMAIN_DISP_main_block_read_ads_start_c_c_ads_start_shift              (3)
#define  MDOMAIN_DISP_main_block_read_ads_start_c_c_ads_start_mask               (0xFFFFFFF8)
#define  MDOMAIN_DISP_main_block_read_ads_start_c_c_ads_start(data)              (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_main_block_read_ads_start_c_get_c_ads_start(data)          ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_main_block_read_c_line_step                               0x180273DC
#define  MDOMAIN_DISP_main_block_read_c_line_step_reg_addr                       "0xB80273DC"
#define  MDOMAIN_DISP_main_block_read_c_line_step_reg                            0xB80273DC
#define  MDOMAIN_DISP_main_block_read_c_line_step_inst_addr                      "0x0018"
#define  set_MDOMAIN_DISP_main_block_read_c_line_step_reg(data)                  (*((volatile unsigned int*)MDOMAIN_DISP_main_block_read_c_line_step_reg)=data)
#define  get_MDOMAIN_DISP_main_block_read_c_line_step_reg                        (*((volatile unsigned int*)MDOMAIN_DISP_main_block_read_c_line_step_reg))
#define  MDOMAIN_DISP_main_block_read_c_line_step_blockread_c_line_step_shift    (3)
#define  MDOMAIN_DISP_main_block_read_c_line_step_blockread_common_line_step_en_shift (0)
#define  MDOMAIN_DISP_main_block_read_c_line_step_blockread_c_line_step_mask     (0xFFFFFFF8)
#define  MDOMAIN_DISP_main_block_read_c_line_step_blockread_common_line_step_en_mask (0x00000001)
#define  MDOMAIN_DISP_main_block_read_c_line_step_blockread_c_line_step(data)    (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_main_block_read_c_line_step_blockread_common_line_step_en(data) (0x00000001&(data))
#define  MDOMAIN_DISP_main_block_read_c_line_step_get_blockread_c_line_step(data) ((0xFFFFFFF8&(data))>>3)
#define  MDOMAIN_DISP_main_block_read_c_line_step_get_blockread_common_line_step_en(data) (0x00000001&(data))

#define  MDOMAIN_DISP_DDR_SubPreVStart                                          0x18027400
#define  MDOMAIN_DISP_DDR_SubPreVStart_reg_addr                                  "0xB8027400"
#define  MDOMAIN_DISP_DDR_SubPreVStart_reg                                       0xB8027400
#define  MDOMAIN_DISP_DDR_SubPreVStart_inst_addr                                 "0x0019"
#define  set_MDOMAIN_DISP_DDR_SubPreVStart_reg(data)                             (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubPreVStart_reg)=data)
#define  get_MDOMAIN_DISP_DDR_SubPreVStart_reg                                   (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubPreVStart_reg))
#define  MDOMAIN_DISP_DDR_SubPreVStart_sub_rgb2gbr_fmt_shift                     (14)
#define  MDOMAIN_DISP_DDR_SubPreVStart_sub_usb2vga_en_shift                      (13)
#define  MDOMAIN_DISP_DDR_SubPreVStart_sub_usb2vga_fmt_shift                     (12)
#define  MDOMAIN_DISP_DDR_SubPreVStart_sub_pre_rd_v_start_shift                  (0)
#define  MDOMAIN_DISP_DDR_SubPreVStart_sub_rgb2gbr_fmt_mask                      (0x00004000)
#define  MDOMAIN_DISP_DDR_SubPreVStart_sub_usb2vga_en_mask                       (0x00002000)
#define  MDOMAIN_DISP_DDR_SubPreVStart_sub_usb2vga_fmt_mask                      (0x00001000)
#define  MDOMAIN_DISP_DDR_SubPreVStart_sub_pre_rd_v_start_mask                   (0x000007FF)
#define  MDOMAIN_DISP_DDR_SubPreVStart_sub_rgb2gbr_fmt(data)                     (0x00004000&((data)<<14))
#define  MDOMAIN_DISP_DDR_SubPreVStart_sub_usb2vga_en(data)                      (0x00002000&((data)<<13))
#define  MDOMAIN_DISP_DDR_SubPreVStart_sub_usb2vga_fmt(data)                     (0x00001000&((data)<<12))
#define  MDOMAIN_DISP_DDR_SubPreVStart_sub_pre_rd_v_start(data)                  (0x000007FF&(data))
#define  MDOMAIN_DISP_DDR_SubPreVStart_get_sub_rgb2gbr_fmt(data)                 ((0x00004000&(data))>>14)
#define  MDOMAIN_DISP_DDR_SubPreVStart_get_sub_usb2vga_en(data)                  ((0x00002000&(data))>>13)
#define  MDOMAIN_DISP_DDR_SubPreVStart_get_sub_usb2vga_fmt(data)                 ((0x00001000&(data))>>12)
#define  MDOMAIN_DISP_DDR_SubPreVStart_get_sub_pre_rd_v_start(data)              (0x000007FF&(data))

#define  MDOMAIN_DISP_DDR_SubPixNumWTL                                          0x18027404
#define  MDOMAIN_DISP_DDR_SubPixNumWTL_reg_addr                                  "0xB8027404"
#define  MDOMAIN_DISP_DDR_SubPixNumWTL_reg                                       0xB8027404
#define  MDOMAIN_DISP_DDR_SubPixNumWTL_inst_addr                                 "0x001A"
#define  set_MDOMAIN_DISP_DDR_SubPixNumWTL_reg(data)                             (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubPixNumWTL_reg)=data)
#define  get_MDOMAIN_DISP_DDR_SubPixNumWTL_reg                                   (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubPixNumWTL_reg))
#define  MDOMAIN_DISP_DDR_SubPixNumWTL_sub_pixel_num_shift                       (8)
#define  MDOMAIN_DISP_DDR_SubPixNumWTL_sub_wtlvl_shift                           (0)
#define  MDOMAIN_DISP_DDR_SubPixNumWTL_sub_pixel_num_mask                        (0x003FFF00)
#define  MDOMAIN_DISP_DDR_SubPixNumWTL_sub_wtlvl_mask                            (0x000000FF)
#define  MDOMAIN_DISP_DDR_SubPixNumWTL_sub_pixel_num(data)                       (0x003FFF00&((data)<<8))
#define  MDOMAIN_DISP_DDR_SubPixNumWTL_sub_wtlvl(data)                           (0x000000FF&(data))
#define  MDOMAIN_DISP_DDR_SubPixNumWTL_get_sub_pixel_num(data)                   ((0x003FFF00&(data))>>8)
#define  MDOMAIN_DISP_DDR_SubPixNumWTL_get_sub_wtlvl(data)                       (0x000000FF&(data))

#define  MDOMAIN_DISP_DDR_SubRdNumLenRem                                        0x18027408
#define  MDOMAIN_DISP_DDR_SubRdNumLenRem_reg_addr                                "0xB8027408"
#define  MDOMAIN_DISP_DDR_SubRdNumLenRem_reg                                     0xB8027408
#define  MDOMAIN_DISP_DDR_SubRdNumLenRem_inst_addr                               "0x001B"
#define  set_MDOMAIN_DISP_DDR_SubRdNumLenRem_reg(data)                           (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubRdNumLenRem_reg)=data)
#define  get_MDOMAIN_DISP_DDR_SubRdNumLenRem_reg                                 (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubRdNumLenRem_reg))
#define  MDOMAIN_DISP_DDR_SubRdNumLenRem_sub_read_num1_shift                     (16)
#define  MDOMAIN_DISP_DDR_SubRdNumLenRem_sub_read_len_shift                      (8)
#define  MDOMAIN_DISP_DDR_SubRdNumLenRem_sub_read_remain_shift                   (0)
#define  MDOMAIN_DISP_DDR_SubRdNumLenRem_sub_read_num1_mask                      (0xFFFF0000)
#define  MDOMAIN_DISP_DDR_SubRdNumLenRem_sub_read_len_mask                       (0x0000FF00)
#define  MDOMAIN_DISP_DDR_SubRdNumLenRem_sub_read_remain_mask                    (0x000000FF)
#define  MDOMAIN_DISP_DDR_SubRdNumLenRem_sub_read_num1(data)                     (0xFFFF0000&((data)<<16))
#define  MDOMAIN_DISP_DDR_SubRdNumLenRem_sub_read_len(data)                      (0x0000FF00&((data)<<8))
#define  MDOMAIN_DISP_DDR_SubRdNumLenRem_sub_read_remain(data)                   (0x000000FF&(data))
#define  MDOMAIN_DISP_DDR_SubRdNumLenRem_get_sub_read_num1(data)                 ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_DISP_DDR_SubRdNumLenRem_get_sub_read_len(data)                  ((0x0000FF00&(data))>>8)
#define  MDOMAIN_DISP_DDR_SubRdNumLenRem_get_sub_read_remain(data)               (0x000000FF&(data))

#define  MDOMAIN_DISP_DDR_SubAddr                                               0x1802740C
#define  MDOMAIN_DISP_DDR_SubAddr_reg_addr                                       "0xB802740C"
#define  MDOMAIN_DISP_DDR_SubAddr_reg                                            0xB802740C
#define  MDOMAIN_DISP_DDR_SubAddr_inst_addr                                      "0x001C"
#define  set_MDOMAIN_DISP_DDR_SubAddr_reg(data)                                  (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubAddr_reg)=data)
#define  get_MDOMAIN_DISP_DDR_SubAddr_reg                                        (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubAddr_reg))
#define  MDOMAIN_DISP_DDR_SubAddr_sub_read_addr_shift                            (3)
#define  MDOMAIN_DISP_DDR_SubAddr_sub_read_addr_mask                             (0xFFFFFFF8)
#define  MDOMAIN_DISP_DDR_SubAddr_sub_read_addr(data)                            (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DDR_SubAddr_get_sub_read_addr(data)                        ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DDR_SubAddrDropBits                                       0x18027410
#define  MDOMAIN_DISP_DDR_SubAddrDropBits_reg_addr                               "0xB8027410"
#define  MDOMAIN_DISP_DDR_SubAddrDropBits_reg                                    0xB8027410
#define  MDOMAIN_DISP_DDR_SubAddrDropBits_inst_addr                              "0x001D"
#define  set_MDOMAIN_DISP_DDR_SubAddrDropBits_reg(data)                          (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubAddrDropBits_reg)=data)
#define  get_MDOMAIN_DISP_DDR_SubAddrDropBits_reg                                (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubAddrDropBits_reg))
#define  MDOMAIN_DISP_DDR_SubAddrDropBits_sub_addr_drop_shift                    (0)
#define  MDOMAIN_DISP_DDR_SubAddrDropBits_sub_addr_drop_mask                     (0x0000FFFF)
#define  MDOMAIN_DISP_DDR_SubAddrDropBits_sub_addr_drop(data)                    (0x0000FFFF&(data))
#define  MDOMAIN_DISP_DDR_SubAddrDropBits_get_sub_addr_drop(data)                (0x0000FFFF&(data))

#define  MDOMAIN_DISP_DDR_SubLineStep                                           0x18027414
#define  MDOMAIN_DISP_DDR_SubLineStep_reg_addr                                   "0xB8027414"
#define  MDOMAIN_DISP_DDR_SubLineStep_reg                                        0xB8027414
#define  MDOMAIN_DISP_DDR_SubLineStep_inst_addr                                  "0x001E"
#define  set_MDOMAIN_DISP_DDR_SubLineStep_reg(data)                              (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubLineStep_reg)=data)
#define  get_MDOMAIN_DISP_DDR_SubLineStep_reg                                    (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubLineStep_reg))
#define  MDOMAIN_DISP_DDR_SubLineStep_sub_line_step_shift                        (3)
#define  MDOMAIN_DISP_DDR_SubLineStep_sub_line_step_mask                         (0xFFFFFFF8)
#define  MDOMAIN_DISP_DDR_SubLineStep_sub_line_step(data)                        (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DDR_SubLineStep_get_sub_line_step(data)                    ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DDR_SubBlkStep                                            0x18027418
#define  MDOMAIN_DISP_DDR_SubBlkStep_reg_addr                                    "0xB8027418"
#define  MDOMAIN_DISP_DDR_SubBlkStep_reg                                         0xB8027418
#define  MDOMAIN_DISP_DDR_SubBlkStep_inst_addr                                   "0x001F"
#define  set_MDOMAIN_DISP_DDR_SubBlkStep_reg(data)                               (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubBlkStep_reg)=data)
#define  get_MDOMAIN_DISP_DDR_SubBlkStep_reg                                     (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubBlkStep_reg))
#define  MDOMAIN_DISP_DDR_SubBlkStep_sub_block_step_shift                        (3)
#define  MDOMAIN_DISP_DDR_SubBlkStep_sub_block_step_mask                         (0xFFFFFFF8)
#define  MDOMAIN_DISP_DDR_SubBlkStep_sub_block_step(data)                        (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DDR_SubBlkStep_get_sub_block_step(data)                    ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DDR_Sub2ndAddr                                            0x1802741C
#define  MDOMAIN_DISP_DDR_Sub2ndAddr_reg_addr                                    "0xB802741C"
#define  MDOMAIN_DISP_DDR_Sub2ndAddr_reg                                         0xB802741C
#define  MDOMAIN_DISP_DDR_Sub2ndAddr_inst_addr                                   "0x0020"
#define  set_MDOMAIN_DISP_DDR_Sub2ndAddr_reg(data)                               (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Sub2ndAddr_reg)=data)
#define  get_MDOMAIN_DISP_DDR_Sub2ndAddr_reg                                     (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Sub2ndAddr_reg))
#define  MDOMAIN_DISP_DDR_Sub2ndAddr_sub_sec_block_shift                         (3)
#define  MDOMAIN_DISP_DDR_Sub2ndAddr_sub_sec_block_mask                          (0xFFFFFFF8)
#define  MDOMAIN_DISP_DDR_Sub2ndAddr_sub_sec_block(data)                         (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DDR_Sub2ndAddr_get_sub_sec_block(data)                     ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DDR_Sub3rdAddr                                            0x18027420
#define  MDOMAIN_DISP_DDR_Sub3rdAddr_reg_addr                                    "0xB8027420"
#define  MDOMAIN_DISP_DDR_Sub3rdAddr_reg                                         0xB8027420
#define  MDOMAIN_DISP_DDR_Sub3rdAddr_inst_addr                                   "0x0021"
#define  set_MDOMAIN_DISP_DDR_Sub3rdAddr_reg(data)                               (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Sub3rdAddr_reg)=data)
#define  get_MDOMAIN_DISP_DDR_Sub3rdAddr_reg                                     (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Sub3rdAddr_reg))
#define  MDOMAIN_DISP_DDR_Sub3rdAddr_sub_third_block_shift                       (3)
#define  MDOMAIN_DISP_DDR_Sub3rdAddr_sub_third_block_mask                        (0xFFFFFFF8)
#define  MDOMAIN_DISP_DDR_Sub3rdAddr_sub_third_block(data)                       (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DDR_Sub3rdAddr_get_sub_third_block(data)                   ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DDR_SubLineNum                                            0x18027424
#define  MDOMAIN_DISP_DDR_SubLineNum_reg_addr                                    "0xB8027424"
#define  MDOMAIN_DISP_DDR_SubLineNum_reg                                         0xB8027424
#define  MDOMAIN_DISP_DDR_SubLineNum_inst_addr                                   "0x0022"
#define  set_MDOMAIN_DISP_DDR_SubLineNum_reg(data)                               (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubLineNum_reg)=data)
#define  get_MDOMAIN_DISP_DDR_SubLineNum_reg                                     (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubLineNum_reg))
#define  MDOMAIN_DISP_DDR_SubLineNum_sub_frame_mode_shift                        (13)
#define  MDOMAIN_DISP_DDR_SubLineNum_sub_line_number_shift                       (0)
#define  MDOMAIN_DISP_DDR_SubLineNum_sub_frame_mode_mask                         (0x00002000)
#define  MDOMAIN_DISP_DDR_SubLineNum_sub_line_number_mask                        (0x00001FFF)
#define  MDOMAIN_DISP_DDR_SubLineNum_sub_frame_mode(data)                        (0x00002000&((data)<<13))
#define  MDOMAIN_DISP_DDR_SubLineNum_sub_line_number(data)                       (0x00001FFF&(data))
#define  MDOMAIN_DISP_DDR_SubLineNum_get_sub_frame_mode(data)                    ((0x00002000&(data))>>13)
#define  MDOMAIN_DISP_DDR_SubLineNum_get_sub_line_number(data)                   (0x00001FFF&(data))

#define  MDOMAIN_DISP_DDR_SubCtrl                                               0x18027428
#define  MDOMAIN_DISP_DDR_SubCtrl_reg_addr                                       "0xB8027428"
#define  MDOMAIN_DISP_DDR_SubCtrl_reg                                            0xB8027428
#define  MDOMAIN_DISP_DDR_SubCtrl_inst_addr                                      "0x0023"
#define  set_MDOMAIN_DISP_DDR_SubCtrl_reg(data)                                  (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubCtrl_reg)=data)
#define  get_MDOMAIN_DISP_DDR_SubCtrl_reg                                        (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubCtrl_reg))
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_cap2disp_distance_shift                    (28)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_bufnum_shift                               (24)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_decompression_clk_en_shift                 (22)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_ddd_depth_en_shift                         (20)
#define  MDOMAIN_DISP_DDR_SubCtrl_subcolorspace_shift                            (19)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_in_format_shift                            (17)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_bit_num_shift                              (16)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_source_sel_at_i2rnd_shift                  (13)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_stop_burst_en_shift                        (11)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_single_buffer_select_shift                 (8)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_v_flip_3buf_en_shift                       (7)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_double_en_shift                            (6)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_merge_en0_shift                            (5)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_block_free_shift                           (4)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_frc_style_shift                            (3)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_source_sel_shift                           (1)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_use_main_block_shift                       (0)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_cap2disp_distance_mask                     (0x70000000)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_bufnum_mask                                (0x07000000)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_decompression_clk_en_mask                  (0x00400000)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_ddd_depth_en_mask                          (0x00100000)
#define  MDOMAIN_DISP_DDR_SubCtrl_subcolorspace_mask                             (0x00080000)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_in_format_mask                             (0x00020000)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_bit_num_mask                               (0x00010000)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_source_sel_at_i2rnd_mask                   (0x00006000)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_stop_burst_en_mask                         (0x00000800)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_single_buffer_select_mask                  (0x00000700)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_v_flip_3buf_en_mask                        (0x00000080)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_double_en_mask                             (0x00000040)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_merge_en0_mask                             (0x00000020)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_block_free_mask                            (0x00000010)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_frc_style_mask                             (0x00000008)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_source_sel_mask                            (0x00000006)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_use_main_block_mask                        (0x00000001)
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_cap2disp_distance(data)                    (0x70000000&((data)<<28))
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_bufnum(data)                               (0x07000000&((data)<<24))
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_decompression_clk_en(data)                 (0x00400000&((data)<<22))
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_ddd_depth_en(data)                         (0x00100000&((data)<<20))
#define  MDOMAIN_DISP_DDR_SubCtrl_subcolorspace(data)                            (0x00080000&((data)<<19))
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_in_format(data)                            (0x00020000&((data)<<17))
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_bit_num(data)                              (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_source_sel_at_i2rnd(data)                  (0x00006000&((data)<<13))
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_stop_burst_en(data)                        (0x00000800&((data)<<11))
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_single_buffer_select(data)                 (0x00000700&((data)<<8))
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_v_flip_3buf_en(data)                       (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_double_en(data)                            (0x00000040&((data)<<6))
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_merge_en0(data)                            (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_block_free(data)                           (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_frc_style(data)                            (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_source_sel(data)                           (0x00000006&((data)<<1))
#define  MDOMAIN_DISP_DDR_SubCtrl_sub_use_main_block(data)                       (0x00000001&(data))
#define  MDOMAIN_DISP_DDR_SubCtrl_get_sub_cap2disp_distance(data)                ((0x70000000&(data))>>28)
#define  MDOMAIN_DISP_DDR_SubCtrl_get_sub_bufnum(data)                           ((0x07000000&(data))>>24)
#define  MDOMAIN_DISP_DDR_SubCtrl_get_sub_decompression_clk_en(data)             ((0x00400000&(data))>>22)
#define  MDOMAIN_DISP_DDR_SubCtrl_get_sub_ddd_depth_en(data)                     ((0x00100000&(data))>>20)
#define  MDOMAIN_DISP_DDR_SubCtrl_get_subcolorspace(data)                        ((0x00080000&(data))>>19)
#define  MDOMAIN_DISP_DDR_SubCtrl_get_sub_in_format(data)                        ((0x00020000&(data))>>17)
#define  MDOMAIN_DISP_DDR_SubCtrl_get_sub_bit_num(data)                          ((0x00010000&(data))>>16)
#define  MDOMAIN_DISP_DDR_SubCtrl_get_sub_source_sel_at_i2rnd(data)              ((0x00006000&(data))>>13)
#define  MDOMAIN_DISP_DDR_SubCtrl_get_sub_stop_burst_en(data)                    ((0x00000800&(data))>>11)
#define  MDOMAIN_DISP_DDR_SubCtrl_get_sub_single_buffer_select(data)             ((0x00000700&(data))>>8)
#define  MDOMAIN_DISP_DDR_SubCtrl_get_sub_v_flip_3buf_en(data)                   ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DDR_SubCtrl_get_sub_double_en(data)                        ((0x00000040&(data))>>6)
#define  MDOMAIN_DISP_DDR_SubCtrl_get_sub_merge_en0(data)                        ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DDR_SubCtrl_get_sub_block_free(data)                       ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DDR_SubCtrl_get_sub_frc_style(data)                        ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DDR_SubCtrl_get_sub_source_sel(data)                       ((0x00000006&(data))>>1)
#define  MDOMAIN_DISP_DDR_SubCtrl_get_sub_use_main_block(data)                   (0x00000001&(data))

#define  MDOMAIN_DISP_Disp_sub_enable                                           0x1802742C
#define  MDOMAIN_DISP_Disp_sub_enable_reg_addr                                   "0xB802742C"
#define  MDOMAIN_DISP_Disp_sub_enable_reg                                        0xB802742C
#define  MDOMAIN_DISP_Disp_sub_enable_inst_addr                                  "0x0024"
#define  set_MDOMAIN_DISP_Disp_sub_enable_reg(data)                              (*((volatile unsigned int*)MDOMAIN_DISP_Disp_sub_enable_reg)=data)
#define  get_MDOMAIN_DISP_Disp_sub_enable_reg                                    (*((volatile unsigned int*)MDOMAIN_DISP_Disp_sub_enable_reg))
#define  MDOMAIN_DISP_Disp_sub_enable_sub_disp_en_shift                          (0)
#define  MDOMAIN_DISP_Disp_sub_enable_sub_disp_en_mask                           (0x00000001)
#define  MDOMAIN_DISP_Disp_sub_enable_sub_disp_en(data)                          (0x00000001&(data))
#define  MDOMAIN_DISP_Disp_sub_enable_get_sub_disp_en(data)                      (0x00000001&(data))

#define  MDOMAIN_DISP_DDR_SubStatus                                             0x18027430
#define  MDOMAIN_DISP_DDR_SubStatus_reg_addr                                     "0xB8027430"
#define  MDOMAIN_DISP_DDR_SubStatus_reg                                          0xB8027430
#define  MDOMAIN_DISP_DDR_SubStatus_inst_addr                                    "0x0025"
#define  set_MDOMAIN_DISP_DDR_SubStatus_reg(data)                                (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubStatus_reg)=data)
#define  get_MDOMAIN_DISP_DDR_SubStatus_reg                                      (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubStatus_reg))
#define  MDOMAIN_DISP_DDR_SubStatus_sub_repeat_chgflg_shift                      (15)
#define  MDOMAIN_DISP_DDR_SubStatus_sub_repeat_frame_sequence_shift              (12)
#define  MDOMAIN_DISP_DDR_SubStatus_sub_drop_chgflg_shift                        (11)
#define  MDOMAIN_DISP_DDR_SubStatus_sub_drop_frame_sequence_shift                (8)
#define  MDOMAIN_DISP_DDR_SubStatus_sub_block_select_shift                       (4)
#define  MDOMAIN_DISP_DDR_SubStatus_sub_repeat_chgflg_mask                       (0x00008000)
#define  MDOMAIN_DISP_DDR_SubStatus_sub_repeat_frame_sequence_mask               (0x00007000)
#define  MDOMAIN_DISP_DDR_SubStatus_sub_drop_chgflg_mask                         (0x00000800)
#define  MDOMAIN_DISP_DDR_SubStatus_sub_drop_frame_sequence_mask                 (0x00000700)
#define  MDOMAIN_DISP_DDR_SubStatus_sub_block_select_mask                        (0x00000070)
#define  MDOMAIN_DISP_DDR_SubStatus_sub_repeat_chgflg(data)                      (0x00008000&((data)<<15))
#define  MDOMAIN_DISP_DDR_SubStatus_sub_repeat_frame_sequence(data)              (0x00007000&((data)<<12))
#define  MDOMAIN_DISP_DDR_SubStatus_sub_drop_chgflg(data)                        (0x00000800&((data)<<11))
#define  MDOMAIN_DISP_DDR_SubStatus_sub_drop_frame_sequence(data)                (0x00000700&((data)<<8))
#define  MDOMAIN_DISP_DDR_SubStatus_sub_block_select(data)                       (0x00000070&((data)<<4))
#define  MDOMAIN_DISP_DDR_SubStatus_get_sub_repeat_chgflg(data)                  ((0x00008000&(data))>>15)
#define  MDOMAIN_DISP_DDR_SubStatus_get_sub_repeat_frame_sequence(data)          ((0x00007000&(data))>>12)
#define  MDOMAIN_DISP_DDR_SubStatus_get_sub_drop_chgflg(data)                    ((0x00000800&(data))>>11)
#define  MDOMAIN_DISP_DDR_SubStatus_get_sub_drop_frame_sequence(data)            ((0x00000700&(data))>>8)
#define  MDOMAIN_DISP_DDR_SubStatus_get_sub_block_select(data)                   ((0x00000070&(data))>>4)

#define  MDOMAIN_DISP_Sub_disp_blocksel_option                                  0x18027440
#define  MDOMAIN_DISP_Sub_disp_blocksel_option_reg_addr                          "0xB8027440"
#define  MDOMAIN_DISP_Sub_disp_blocksel_option_reg                               0xB8027440
#define  MDOMAIN_DISP_Sub_disp_blocksel_option_inst_addr                         "0x0026"
#define  set_MDOMAIN_DISP_Sub_disp_blocksel_option_reg(data)                     (*((volatile unsigned int*)MDOMAIN_DISP_Sub_disp_blocksel_option_reg)=data)
#define  get_MDOMAIN_DISP_Sub_disp_blocksel_option_reg                           (*((volatile unsigned int*)MDOMAIN_DISP_Sub_disp_blocksel_option_reg))
#define  MDOMAIN_DISP_Sub_disp_blocksel_option_sub_force_blocksel_toggle_mode_shift (17)
#define  MDOMAIN_DISP_Sub_disp_blocksel_option_sub_force_blocksel_toggle_en_shift (16)
#define  MDOMAIN_DISP_Sub_disp_blocksel_option_sub_force_blocksel_toggle_line_shift (0)
#define  MDOMAIN_DISP_Sub_disp_blocksel_option_sub_force_blocksel_toggle_mode_mask (0x00020000)
#define  MDOMAIN_DISP_Sub_disp_blocksel_option_sub_force_blocksel_toggle_en_mask (0x00010000)
#define  MDOMAIN_DISP_Sub_disp_blocksel_option_sub_force_blocksel_toggle_line_mask (0x00001FFF)
#define  MDOMAIN_DISP_Sub_disp_blocksel_option_sub_force_blocksel_toggle_mode(data) (0x00020000&((data)<<17))
#define  MDOMAIN_DISP_Sub_disp_blocksel_option_sub_force_blocksel_toggle_en(data) (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_Sub_disp_blocksel_option_sub_force_blocksel_toggle_line(data) (0x00001FFF&(data))
#define  MDOMAIN_DISP_Sub_disp_blocksel_option_get_sub_force_blocksel_toggle_mode(data) ((0x00020000&(data))>>17)
#define  MDOMAIN_DISP_Sub_disp_blocksel_option_get_sub_force_blocksel_toggle_en(data) ((0x00010000&(data))>>16)
#define  MDOMAIN_DISP_Sub_disp_blocksel_option_get_sub_force_blocksel_toggle_line(data) (0x00001FFF&(data))

#define  MDOMAIN_DISP_DDR_SubMPEn                                               0x18027450
#define  MDOMAIN_DISP_DDR_SubMPEn_reg_addr                                       "0xB8027450"
#define  MDOMAIN_DISP_DDR_SubMPEn_reg                                            0xB8027450
#define  MDOMAIN_DISP_DDR_SubMPEn_inst_addr                                      "0x0027"
#define  set_MDOMAIN_DISP_DDR_SubMPEn_reg(data)                                  (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubMPEn_reg)=data)
#define  get_MDOMAIN_DISP_DDR_SubMPEn_reg                                        (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubMPEn_reg))
#define  MDOMAIN_DISP_DDR_SubMPEn_sub_mpic_enable_shift                          (0)
#define  MDOMAIN_DISP_DDR_SubMPEn_sub_mpic_enable_mask                           (0x0000FFFF)
#define  MDOMAIN_DISP_DDR_SubMPEn_sub_mpic_enable(data)                          (0x0000FFFF&(data))
#define  MDOMAIN_DISP_DDR_SubMPEn_get_sub_mpic_enable(data)                      (0x0000FFFF&(data))

#define  MDOMAIN_DISP_DDR_SubMPMode                                             0x18027454
#define  MDOMAIN_DISP_DDR_SubMPMode_reg_addr                                     "0xB8027454"
#define  MDOMAIN_DISP_DDR_SubMPMode_reg                                          0xB8027454
#define  MDOMAIN_DISP_DDR_SubMPMode_inst_addr                                    "0x0028"
#define  set_MDOMAIN_DISP_DDR_SubMPMode_reg(data)                                (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubMPMode_reg)=data)
#define  get_MDOMAIN_DISP_DDR_SubMPMode_reg                                      (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubMPMode_reg))
#define  MDOMAIN_DISP_DDR_SubMPMode_sub_active_mp_shift                          (4)
#define  MDOMAIN_DISP_DDR_SubMPMode_sub_en_syn_rst_shift                         (3)
#define  MDOMAIN_DISP_DDR_SubMPMode_sub_mp_mode_shift                            (1)
#define  MDOMAIN_DISP_DDR_SubMPMode_sub_mp_enable_shift                          (0)
#define  MDOMAIN_DISP_DDR_SubMPMode_sub_active_mp_mask                           (0x000000F0)
#define  MDOMAIN_DISP_DDR_SubMPMode_sub_en_syn_rst_mask                          (0x00000008)
#define  MDOMAIN_DISP_DDR_SubMPMode_sub_mp_mode_mask                             (0x00000006)
#define  MDOMAIN_DISP_DDR_SubMPMode_sub_mp_enable_mask                           (0x00000001)
#define  MDOMAIN_DISP_DDR_SubMPMode_sub_active_mp(data)                          (0x000000F0&((data)<<4))
#define  MDOMAIN_DISP_DDR_SubMPMode_sub_en_syn_rst(data)                         (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DDR_SubMPMode_sub_mp_mode(data)                            (0x00000006&((data)<<1))
#define  MDOMAIN_DISP_DDR_SubMPMode_sub_mp_enable(data)                          (0x00000001&(data))
#define  MDOMAIN_DISP_DDR_SubMPMode_get_sub_active_mp(data)                      ((0x000000F0&(data))>>4)
#define  MDOMAIN_DISP_DDR_SubMPMode_get_sub_en_syn_rst(data)                     ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DDR_SubMPMode_get_sub_mp_mode(data)                        ((0x00000006&(data))>>1)
#define  MDOMAIN_DISP_DDR_SubMPMode_get_sub_mp_enable(data)                      (0x00000001&(data))

#define  MDOMAIN_DISP_DDR_SubMPLineNum                                          0x18027458
#define  MDOMAIN_DISP_DDR_SubMPLineNum_reg_addr                                  "0xB8027458"
#define  MDOMAIN_DISP_DDR_SubMPLineNum_reg                                       0xB8027458
#define  MDOMAIN_DISP_DDR_SubMPLineNum_inst_addr                                 "0x0029"
#define  set_MDOMAIN_DISP_DDR_SubMPLineNum_reg(data)                             (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubMPLineNum_reg)=data)
#define  get_MDOMAIN_DISP_DDR_SubMPLineNum_reg                                   (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubMPLineNum_reg))
#define  MDOMAIN_DISP_DDR_SubMPLineNum_sub_mp_line_shift                         (0)
#define  MDOMAIN_DISP_DDR_SubMPLineNum_sub_mp_line_mask                          (0x00001FFF)
#define  MDOMAIN_DISP_DDR_SubMPLineNum_sub_mp_line(data)                         (0x00001FFF&(data))
#define  MDOMAIN_DISP_DDR_SubMPLineNum_get_sub_mp_line(data)                     (0x00001FFF&(data))

#define  MDOMAIN_DISP_DDR_SubBankLimitEndCol                                    0x1802745C
#define  MDOMAIN_DISP_DDR_SubBankLimitEndCol_reg_addr                            "0xB802745C"
#define  MDOMAIN_DISP_DDR_SubBankLimitEndCol_reg                                 0xB802745C
#define  MDOMAIN_DISP_DDR_SubBankLimitEndCol_inst_addr                           "0x002A"
#define  set_MDOMAIN_DISP_DDR_SubBankLimitEndCol_reg(data)                       (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubBankLimitEndCol_reg)=data)
#define  get_MDOMAIN_DISP_DDR_SubBankLimitEndCol_reg                             (*((volatile unsigned int*)MDOMAIN_DISP_DDR_SubBankLimitEndCol_reg))
#define  MDOMAIN_DISP_DDR_SubBankLimitEndCol_sub_limit_bank_shift                (9)
#define  MDOMAIN_DISP_DDR_SubBankLimitEndCol_sub_end_column_shift                (0)
#define  MDOMAIN_DISP_DDR_SubBankLimitEndCol_sub_limit_bank_mask                 (0x00001E00)
#define  MDOMAIN_DISP_DDR_SubBankLimitEndCol_sub_end_column_mask                 (0x000001FF)
#define  MDOMAIN_DISP_DDR_SubBankLimitEndCol_sub_limit_bank(data)                (0x00001E00&((data)<<9))
#define  MDOMAIN_DISP_DDR_SubBankLimitEndCol_sub_end_column(data)                (0x000001FF&(data))
#define  MDOMAIN_DISP_DDR_SubBankLimitEndCol_get_sub_limit_bank(data)            ((0x00001E00&(data))>>9)
#define  MDOMAIN_DISP_DDR_SubBankLimitEndCol_get_sub_end_column(data)            (0x000001FF&(data))

#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus                                       0x18027460
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_reg_addr                               "0xB8027460"
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_reg                                    0xB8027460
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_inst_addr                              "0x002B"
#define  set_MDOMAIN_DISP_Disp_DDR_FIFOStatus_reg(data)                          (*((volatile unsigned int*)MDOMAIN_DISP_Disp_DDR_FIFOStatus_reg)=data)
#define  get_MDOMAIN_DISP_Disp_DDR_FIFOStatus_reg                                (*((volatile unsigned int*)MDOMAIN_DISP_Disp_DDR_FIFOStatus_reg))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_field_shift                       (24)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_fifoof_shift                      (23)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_fifouf_shift                      (22)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_fifofull_shift                    (21)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_fifoempty_shift                   (20)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_combine_fifoof_shift              (19)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_combine_fifouf_shift              (18)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_combine_fifofull_shift            (17)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_combine_fifoempty_shift           (16)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_field_shift                        (8)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_fifoof_shift                       (7)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_fifouf_shift                       (6)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_fifofull_shift                     (5)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_fifoempty_shift                    (4)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_combine_fifoof_shift               (3)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_combine_fifouf_shift               (2)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_combine_fifofull_shift             (1)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_combine_fifoempty_shift            (0)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_field_mask                        (0x01000000)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_fifoof_mask                       (0x00800000)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_fifouf_mask                       (0x00400000)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_fifofull_mask                     (0x00200000)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_fifoempty_mask                    (0x00100000)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_combine_fifoof_mask               (0x00080000)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_combine_fifouf_mask               (0x00040000)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_combine_fifofull_mask             (0x00020000)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_combine_fifoempty_mask            (0x00010000)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_field_mask                         (0x00000100)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_fifoof_mask                        (0x00000080)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_fifouf_mask                        (0x00000040)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_fifofull_mask                      (0x00000020)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_fifoempty_mask                     (0x00000010)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_combine_fifoof_mask                (0x00000008)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_combine_fifouf_mask                (0x00000004)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_combine_fifofull_mask              (0x00000002)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_combine_fifoempty_mask             (0x00000001)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_field(data)                       (0x01000000&((data)<<24))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_fifoof(data)                      (0x00800000&((data)<<23))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_fifouf(data)                      (0x00400000&((data)<<22))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_fifofull(data)                    (0x00200000&((data)<<21))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_fifoempty(data)                   (0x00100000&((data)<<20))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_combine_fifoof(data)              (0x00080000&((data)<<19))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_combine_fifouf(data)              (0x00040000&((data)<<18))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_combine_fifofull(data)            (0x00020000&((data)<<17))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_main_combine_fifoempty(data)           (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_field(data)                        (0x00000100&((data)<<8))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_fifoof(data)                       (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_fifouf(data)                       (0x00000040&((data)<<6))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_fifofull(data)                     (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_fifoempty(data)                    (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_combine_fifoof(data)               (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_combine_fifouf(data)               (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_combine_fifofull(data)             (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_sub_combine_fifoempty(data)            (0x00000001&(data))
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_main_field(data)                   ((0x01000000&(data))>>24)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_main_fifoof(data)                  ((0x00800000&(data))>>23)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_main_fifouf(data)                  ((0x00400000&(data))>>22)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_main_fifofull(data)                ((0x00200000&(data))>>21)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_main_fifoempty(data)               ((0x00100000&(data))>>20)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_main_combine_fifoof(data)          ((0x00080000&(data))>>19)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_main_combine_fifouf(data)          ((0x00040000&(data))>>18)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_main_combine_fifofull(data)        ((0x00020000&(data))>>17)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_main_combine_fifoempty(data)       ((0x00010000&(data))>>16)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_sub_field(data)                    ((0x00000100&(data))>>8)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_sub_fifoof(data)                   ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_sub_fifouf(data)                   ((0x00000040&(data))>>6)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_sub_fifofull(data)                 ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_sub_fifoempty(data)                ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_sub_combine_fifoof(data)           ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_sub_combine_fifouf(data)           ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_sub_combine_fifofull(data)         ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_Disp_DDR_FIFOStatus_get_sub_combine_fifoempty(data)        (0x00000001&(data))

#define  MDOMAIN_DISP_Disp_IE_WD_CTRL                                           0x18027464
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_reg_addr                                   "0xB8027464"
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_reg                                        0xB8027464
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_inst_addr                                  "0x002C"
#define  set_MDOMAIN_DISP_Disp_IE_WD_CTRL_reg(data)                              (*((volatile unsigned int*)MDOMAIN_DISP_Disp_IE_WD_CTRL_reg)=data)
#define  get_MDOMAIN_DISP_Disp_IE_WD_CTRL_reg                                    (*((volatile unsigned int*)MDOMAIN_DISP_Disp_IE_WD_CTRL_reg))
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_main_fifoerr_ie_shift                      (17)
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_main_fifoerr_wde_shift                     (16)
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_sub_fifoerr_ie_shift                       (1)
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_sub_fifoerr_wde_shift                      (0)
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_main_fifoerr_ie_mask                       (0x00020000)
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_main_fifoerr_wde_mask                      (0x00010000)
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_sub_fifoerr_ie_mask                        (0x00000002)
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_sub_fifoerr_wde_mask                       (0x00000001)
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_main_fifoerr_ie(data)                      (0x00020000&((data)<<17))
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_main_fifoerr_wde(data)                     (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_sub_fifoerr_ie(data)                       (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_sub_fifoerr_wde(data)                      (0x00000001&(data))
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_get_main_fifoerr_ie(data)                  ((0x00020000&(data))>>17)
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_get_main_fifoerr_wde(data)                 ((0x00010000&(data))>>16)
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_get_sub_fifoerr_ie(data)                   ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_Disp_IE_WD_CTRL_get_sub_fifoerr_wde(data)                  (0x00000001&(data))

#define  MDOMAIN_DISP_DispMain_BoundaryAddr1                                    0x18027468
#define  MDOMAIN_DISP_DispMain_BoundaryAddr1_reg_addr                            "0xB8027468"
#define  MDOMAIN_DISP_DispMain_BoundaryAddr1_reg                                 0xB8027468
#define  MDOMAIN_DISP_DispMain_BoundaryAddr1_inst_addr                           "0x002D"
#define  set_MDOMAIN_DISP_DispMain_BoundaryAddr1_reg(data)                       (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr1_reg)=data)
#define  get_MDOMAIN_DISP_DispMain_BoundaryAddr1_reg                             (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr1_reg))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr1_main_disp_downlimit_adr_shift       (3)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr1_main_disp_downlimit_adr_mask        (0xFFFFFFF8)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr1_main_disp_downlimit_adr(data)       (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr1_get_main_disp_downlimit_adr(data)   ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DispMain_BoundaryAddr2                                    0x1802746C
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_reg_addr                            "0xB802746C"
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_reg                                 0xB802746C
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_inst_addr                           "0x002E"
#define  set_MDOMAIN_DISP_DispMain_BoundaryAddr2_reg(data)                       (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr2_reg)=data)
#define  get_MDOMAIN_DISP_DispMain_BoundaryAddr2_reg                             (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr2_reg))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_main_disp_uplimit_adr_shift         (3)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_main_disp_uplimit_adr_mask          (0xFFFFFFF8)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_main_disp_uplimit_adr(data)         (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_get_main_disp_uplimit_adr(data)     ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DispI1_RD_BoundaryAdd_Status                              0x18027470
#define  MDOMAIN_DISP_DispI1_RD_BoundaryAdd_Status_reg_addr                      "0xB8027470"
#define  MDOMAIN_DISP_DispI1_RD_BoundaryAdd_Status_reg                           0xB8027470
#define  MDOMAIN_DISP_DispI1_RD_BoundaryAdd_Status_inst_addr                     "0x002F"
#define  set_MDOMAIN_DISP_DispI1_RD_BoundaryAdd_Status_reg(data)                 (*((volatile unsigned int*)MDOMAIN_DISP_DispI1_RD_BoundaryAdd_Status_reg)=data)
#define  get_MDOMAIN_DISP_DispI1_RD_BoundaryAdd_Status_reg                       (*((volatile unsigned int*)MDOMAIN_DISP_DispI1_RD_BoundaryAdd_Status_reg))
#define  MDOMAIN_DISP_DispI1_RD_BoundaryAdd_Status_main_disp_downlimit_ov_shift  (1)
#define  MDOMAIN_DISP_DispI1_RD_BoundaryAdd_Status_main_dispuplimit_ov_shift     (0)
#define  MDOMAIN_DISP_DispI1_RD_BoundaryAdd_Status_main_disp_downlimit_ov_mask   (0x00000002)
#define  MDOMAIN_DISP_DispI1_RD_BoundaryAdd_Status_main_dispuplimit_ov_mask      (0x00000001)
#define  MDOMAIN_DISP_DispI1_RD_BoundaryAdd_Status_main_disp_downlimit_ov(data)  (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DispI1_RD_BoundaryAdd_Status_main_dispuplimit_ov(data)     (0x00000001&(data))
#define  MDOMAIN_DISP_DispI1_RD_BoundaryAdd_Status_get_main_disp_downlimit_ov(data) ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DispI1_RD_BoundaryAdd_Status_get_main_dispuplimit_ov(data) (0x00000001&(data))

#define  MDOMAIN_DISP_DispSub_BoundaryAddr1                                     0x18027474
#define  MDOMAIN_DISP_DispSub_BoundaryAddr1_reg_addr                             "0xB8027474"
#define  MDOMAIN_DISP_DispSub_BoundaryAddr1_reg                                  0xB8027474
#define  MDOMAIN_DISP_DispSub_BoundaryAddr1_inst_addr                            "0x0030"
#define  set_MDOMAIN_DISP_DispSub_BoundaryAddr1_reg(data)                        (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr1_reg)=data)
#define  get_MDOMAIN_DISP_DispSub_BoundaryAddr1_reg                              (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr1_reg))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr1_sub_disp_downlimit_adr_shift         (3)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr1_sub_disp_downlimit_adr_mask          (0xFFFFFFF8)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr1_sub_disp_downlimit_adr(data)         (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr1_get_sub_disp_downlimit_adr(data)     ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DispSub_BoundaryAddr2                                     0x18027478
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_reg_addr                             "0xB8027478"
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_reg                                  0xB8027478
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_inst_addr                            "0x0031"
#define  set_MDOMAIN_DISP_DispSub_BoundaryAddr2_reg(data)                        (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr2_reg)=data)
#define  get_MDOMAIN_DISP_DispSub_BoundaryAddr2_reg                              (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr2_reg))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_sub_disp_uplimit_adr_shift           (3)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_sub_disp_uplimit_adr_mask            (0xFFFFFFF8)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_sub_disp_uplimit_adr(data)           (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_get_sub_disp_uplimit_adr(data)       ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DispI2_RD_BoundaryAdd_Status                              0x1802747C
#define  MDOMAIN_DISP_DispI2_RD_BoundaryAdd_Status_reg_addr                      "0xB802747C"
#define  MDOMAIN_DISP_DispI2_RD_BoundaryAdd_Status_reg                           0xB802747C
#define  MDOMAIN_DISP_DispI2_RD_BoundaryAdd_Status_inst_addr                     "0x0032"
#define  set_MDOMAIN_DISP_DispI2_RD_BoundaryAdd_Status_reg(data)                 (*((volatile unsigned int*)MDOMAIN_DISP_DispI2_RD_BoundaryAdd_Status_reg)=data)
#define  get_MDOMAIN_DISP_DispI2_RD_BoundaryAdd_Status_reg                       (*((volatile unsigned int*)MDOMAIN_DISP_DispI2_RD_BoundaryAdd_Status_reg))
#define  MDOMAIN_DISP_DispI2_RD_BoundaryAdd_Status_sub_disp_downlimit_ov_shift   (1)
#define  MDOMAIN_DISP_DispI2_RD_BoundaryAdd_Status_sub_disp_uplimit_ov_shift     (0)
#define  MDOMAIN_DISP_DispI2_RD_BoundaryAdd_Status_sub_disp_downlimit_ov_mask    (0x00000002)
#define  MDOMAIN_DISP_DispI2_RD_BoundaryAdd_Status_sub_disp_uplimit_ov_mask      (0x00000001)
#define  MDOMAIN_DISP_DispI2_RD_BoundaryAdd_Status_sub_disp_downlimit_ov(data)   (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DispI2_RD_BoundaryAdd_Status_sub_disp_uplimit_ov(data)     (0x00000001&(data))
#define  MDOMAIN_DISP_DispI2_RD_BoundaryAdd_Status_get_sub_disp_downlimit_ov(data) ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DispI2_RD_BoundaryAdd_Status_get_sub_disp_uplimit_ov(data) (0x00000001&(data))

#define  MDOMAIN_DISP_DDR_Main_R_1ST_Addr                                       0x18027480
#define  MDOMAIN_DISP_DDR_Main_R_1ST_Addr_reg_addr                               "0xB8027480"
#define  MDOMAIN_DISP_DDR_Main_R_1ST_Addr_reg                                    0xB8027480
#define  MDOMAIN_DISP_DDR_Main_R_1ST_Addr_inst_addr                              "0x0033"
#define  set_MDOMAIN_DISP_DDR_Main_R_1ST_Addr_reg(data)                          (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main_R_1ST_Addr_reg)=data)
#define  get_MDOMAIN_DISP_DDR_Main_R_1ST_Addr_reg                                (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main_R_1ST_Addr_reg))
#define  MDOMAIN_DISP_DDR_Main_R_1ST_Addr_main_r_first_addr_shift                (3)
#define  MDOMAIN_DISP_DDR_Main_R_1ST_Addr_main_r_first_addr_mask                 (0xFFFFFFF8)
#define  MDOMAIN_DISP_DDR_Main_R_1ST_Addr_main_r_first_addr(data)                (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DDR_Main_R_1ST_Addr_get_main_r_first_addr(data)            ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DDR_Main_R_2ND_Addr                                       0x18027484
#define  MDOMAIN_DISP_DDR_Main_R_2ND_Addr_reg_addr                               "0xB8027484"
#define  MDOMAIN_DISP_DDR_Main_R_2ND_Addr_reg                                    0xB8027484
#define  MDOMAIN_DISP_DDR_Main_R_2ND_Addr_inst_addr                              "0x0034"
#define  set_MDOMAIN_DISP_DDR_Main_R_2ND_Addr_reg(data)                          (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main_R_2ND_Addr_reg)=data)
#define  get_MDOMAIN_DISP_DDR_Main_R_2ND_Addr_reg                                (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main_R_2ND_Addr_reg))
#define  MDOMAIN_DISP_DDR_Main_R_2ND_Addr_main_r_second_addr_shift               (3)
#define  MDOMAIN_DISP_DDR_Main_R_2ND_Addr_main_r_second_addr_mask                (0xFFFFFFF8)
#define  MDOMAIN_DISP_DDR_Main_R_2ND_Addr_main_r_second_addr(data)               (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DDR_Main_R_2ND_Addr_get_main_r_second_addr(data)           ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DDR_Main_R_3RD_Addr                                       0x18027488
#define  MDOMAIN_DISP_DDR_Main_R_3RD_Addr_reg_addr                               "0xB8027488"
#define  MDOMAIN_DISP_DDR_Main_R_3RD_Addr_reg                                    0xB8027488
#define  MDOMAIN_DISP_DDR_Main_R_3RD_Addr_inst_addr                              "0x0035"
#define  set_MDOMAIN_DISP_DDR_Main_R_3RD_Addr_reg(data)                          (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main_R_3RD_Addr_reg)=data)
#define  get_MDOMAIN_DISP_DDR_Main_R_3RD_Addr_reg                                (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Main_R_3RD_Addr_reg))
#define  MDOMAIN_DISP_DDR_Main_R_3RD_Addr_main_r_third_addr_shift                (3)
#define  MDOMAIN_DISP_DDR_Main_R_3RD_Addr_main_r_third_addr_mask                 (0xFFFFFFF8)
#define  MDOMAIN_DISP_DDR_Main_R_3RD_Addr_main_r_third_addr(data)                (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DDR_Main_R_3RD_Addr_get_main_r_third_addr(data)            ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DISP_help_debug                                           0x1802748C
#define  MDOMAIN_DISP_DISP_help_debug_reg_addr                                   "0xB802748C"
#define  MDOMAIN_DISP_DISP_help_debug_reg                                        0xB802748C
#define  MDOMAIN_DISP_DISP_help_debug_inst_addr                                  "0x0036"
#define  set_MDOMAIN_DISP_DISP_help_debug_reg(data)                              (*((volatile unsigned int*)MDOMAIN_DISP_DISP_help_debug_reg)=data)
#define  get_MDOMAIN_DISP_DISP_help_debug_reg                                    (*((volatile unsigned int*)MDOMAIN_DISP_DISP_help_debug_reg))
#define  MDOMAIN_DISP_DISP_help_debug_main_repeat_4x_shift                       (23)
#define  MDOMAIN_DISP_DISP_help_debug_main_repeat_3x_shift                       (22)
#define  MDOMAIN_DISP_DISP_help_debug_main_repeat_2x_shift                       (21)
#define  MDOMAIN_DISP_DISP_help_debug_main_repeat_1x_shift                       (20)
#define  MDOMAIN_DISP_DISP_help_debug_main_drop_shift                            (18)
#define  MDOMAIN_DISP_DISP_help_debug_main_under_size_shift                      (16)
#define  MDOMAIN_DISP_DISP_help_debug_sub_repeat_4x_shift                        (7)
#define  MDOMAIN_DISP_DISP_help_debug_sub_repeat_3x_shift                        (6)
#define  MDOMAIN_DISP_DISP_help_debug_sub_repeat_2x_shift                        (5)
#define  MDOMAIN_DISP_DISP_help_debug_sub_repeat_1x_shift                        (4)
#define  MDOMAIN_DISP_DISP_help_debug_sub_drop_shift                             (2)
#define  MDOMAIN_DISP_DISP_help_debug_sub_under_size_shift                       (0)
#define  MDOMAIN_DISP_DISP_help_debug_main_repeat_4x_mask                        (0x00800000)
#define  MDOMAIN_DISP_DISP_help_debug_main_repeat_3x_mask                        (0x00400000)
#define  MDOMAIN_DISP_DISP_help_debug_main_repeat_2x_mask                        (0x00200000)
#define  MDOMAIN_DISP_DISP_help_debug_main_repeat_1x_mask                        (0x00100000)
#define  MDOMAIN_DISP_DISP_help_debug_main_drop_mask                             (0x00040000)
#define  MDOMAIN_DISP_DISP_help_debug_main_under_size_mask                       (0x00010000)
#define  MDOMAIN_DISP_DISP_help_debug_sub_repeat_4x_mask                         (0x00000080)
#define  MDOMAIN_DISP_DISP_help_debug_sub_repeat_3x_mask                         (0x00000040)
#define  MDOMAIN_DISP_DISP_help_debug_sub_repeat_2x_mask                         (0x00000020)
#define  MDOMAIN_DISP_DISP_help_debug_sub_repeat_1x_mask                         (0x00000010)
#define  MDOMAIN_DISP_DISP_help_debug_sub_drop_mask                              (0x00000004)
#define  MDOMAIN_DISP_DISP_help_debug_sub_under_size_mask                        (0x00000001)
#define  MDOMAIN_DISP_DISP_help_debug_main_repeat_4x(data)                       (0x00800000&((data)<<23))
#define  MDOMAIN_DISP_DISP_help_debug_main_repeat_3x(data)                       (0x00400000&((data)<<22))
#define  MDOMAIN_DISP_DISP_help_debug_main_repeat_2x(data)                       (0x00200000&((data)<<21))
#define  MDOMAIN_DISP_DISP_help_debug_main_repeat_1x(data)                       (0x00100000&((data)<<20))
#define  MDOMAIN_DISP_DISP_help_debug_main_drop(data)                            (0x00040000&((data)<<18))
#define  MDOMAIN_DISP_DISP_help_debug_main_under_size(data)                      (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_DISP_help_debug_sub_repeat_4x(data)                        (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DISP_help_debug_sub_repeat_3x(data)                        (0x00000040&((data)<<6))
#define  MDOMAIN_DISP_DISP_help_debug_sub_repeat_2x(data)                        (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISP_help_debug_sub_repeat_1x(data)                        (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISP_help_debug_sub_drop(data)                             (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_DISP_help_debug_sub_under_size(data)                       (0x00000001&(data))
#define  MDOMAIN_DISP_DISP_help_debug_get_main_repeat_4x(data)                   ((0x00800000&(data))>>23)
#define  MDOMAIN_DISP_DISP_help_debug_get_main_repeat_3x(data)                   ((0x00400000&(data))>>22)
#define  MDOMAIN_DISP_DISP_help_debug_get_main_repeat_2x(data)                   ((0x00200000&(data))>>21)
#define  MDOMAIN_DISP_DISP_help_debug_get_main_repeat_1x(data)                   ((0x00100000&(data))>>20)
#define  MDOMAIN_DISP_DISP_help_debug_get_main_drop(data)                        ((0x00040000&(data))>>18)
#define  MDOMAIN_DISP_DISP_help_debug_get_main_under_size(data)                  ((0x00010000&(data))>>16)
#define  MDOMAIN_DISP_DISP_help_debug_get_sub_repeat_4x(data)                    ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DISP_help_debug_get_sub_repeat_3x(data)                    ((0x00000040&(data))>>6)
#define  MDOMAIN_DISP_DISP_help_debug_get_sub_repeat_2x(data)                    ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISP_help_debug_get_sub_repeat_1x(data)                    ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISP_help_debug_get_sub_drop(data)                         ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_DISP_help_debug_get_sub_under_size(data)                   (0x00000001&(data))

#define  MDOMAIN_DISP_DDR_Sub_BM_DMA                                            0x18027490
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_reg_addr                                    "0xB8027490"
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_reg                                         0xB8027490
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_inst_addr                                   "0x0037"
#define  set_MDOMAIN_DISP_DDR_Sub_BM_DMA_reg(data)                               (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Sub_BM_DMA_reg)=data)
#define  get_MDOMAIN_DISP_DDR_Sub_BM_DMA_reg                                     (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Sub_BM_DMA_reg))
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_sub_bstlen_shift                            (4)
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_sub_chroma_fir_sel_shift                    (2)
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_sub_chroma_format_shift                     (1)
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_sub_dma_mode_shift                          (0)
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_sub_bstlen_mask                             (0x00000070)
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_sub_chroma_fir_sel_mask                     (0x0000000C)
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_sub_chroma_format_mask                      (0x00000002)
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_sub_dma_mode_mask                           (0x00000001)
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_sub_bstlen(data)                            (0x00000070&((data)<<4))
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_sub_chroma_fir_sel(data)                    (0x0000000C&((data)<<2))
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_sub_chroma_format(data)                     (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_sub_dma_mode(data)                          (0x00000001&(data))
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_get_sub_bstlen(data)                        ((0x00000070&(data))>>4)
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_get_sub_chroma_fir_sel(data)                ((0x0000000C&(data))>>2)
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_get_sub_chroma_format(data)                 ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_get_sub_dma_mode(data)                      (0x00000001&(data))

#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_PICSET                                     0x18027494
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_PICSET_reg_addr                             "0xB8027494"
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_PICSET_reg                                  0xB8027494
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_PICSET_inst_addr                            "0x0038"
#define  set_MDOMAIN_DISP_DDR_Sub_BM_DMA_PICSET_reg(data)                        (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Sub_BM_DMA_PICSET_reg)=data)
#define  get_MDOMAIN_DISP_DDR_Sub_BM_DMA_PICSET_reg                              (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Sub_BM_DMA_PICSET_reg))
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_PICSET_sub_y_ads_set1_shift                 (8)
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_PICSET_sub_c_ads_set1_shift                 (0)
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_PICSET_sub_y_ads_set1_mask                  (0x00007F00)
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_PICSET_sub_c_ads_set1_mask                  (0x0000007F)
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_PICSET_sub_y_ads_set1(data)                 (0x00007F00&((data)<<8))
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_PICSET_sub_c_ads_set1(data)                 (0x0000007F&(data))
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_PICSET_get_sub_y_ads_set1(data)             ((0x00007F00&(data))>>8)
#define  MDOMAIN_DISP_DDR_Sub_BM_DMA_PICSET_get_sub_c_ads_set1(data)             (0x0000007F&(data))

#define  MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET                                       0x18027498
#define  MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_reg_addr                               "0xB8027498"
#define  MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_reg                                    0xB8027498
#define  MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_inst_addr                              "0x0039"
#define  set_MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_reg(data)                          (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_reg)=data)
#define  get_MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_reg                                (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_reg))
#define  MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_sub_c_h_offset_shift                   (16)
#define  MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_sub_y_h_shift_shift                    (8)
#define  MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_sub_y_h_offset_shift                   (0)
#define  MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_sub_c_h_offset_mask                    (0x00FF0000)
#define  MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_sub_y_h_shift_mask                     (0x00000F00)
#define  MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_sub_y_h_offset_mask                    (0x000000FF)
#define  MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_sub_c_h_offset(data)                   (0x00FF0000&((data)<<16))
#define  MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_sub_y_h_shift(data)                    (0x00000F00&((data)<<8))
#define  MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_sub_y_h_offset(data)                   (0x000000FF&(data))
#define  MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_get_sub_c_h_offset(data)               ((0x00FF0000&(data))>>16)
#define  MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_get_sub_y_h_shift(data)                ((0x00000F00&(data))>>8)
#define  MDOMAIN_DISP_DDR_Sub_BM_H_OFFSET_get_sub_y_h_offset(data)               (0x000000FF&(data))

#define  MDOMAIN_DISP_DDR_Sub_BM_V_OFFSET                                       0x1802749C
#define  MDOMAIN_DISP_DDR_Sub_BM_V_OFFSET_reg_addr                               "0xB802749C"
#define  MDOMAIN_DISP_DDR_Sub_BM_V_OFFSET_reg                                    0xB802749C
#define  MDOMAIN_DISP_DDR_Sub_BM_V_OFFSET_inst_addr                              "0x003A"
#define  set_MDOMAIN_DISP_DDR_Sub_BM_V_OFFSET_reg(data)                          (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Sub_BM_V_OFFSET_reg)=data)
#define  get_MDOMAIN_DISP_DDR_Sub_BM_V_OFFSET_reg                                (*((volatile unsigned int*)MDOMAIN_DISP_DDR_Sub_BM_V_OFFSET_reg))
#define  MDOMAIN_DISP_DDR_Sub_BM_V_OFFSET_sub_c_v_offset_shift                   (16)
#define  MDOMAIN_DISP_DDR_Sub_BM_V_OFFSET_sub_y_v_offset_shift                   (0)
#define  MDOMAIN_DISP_DDR_Sub_BM_V_OFFSET_sub_c_v_offset_mask                    (0x0FFF0000)
#define  MDOMAIN_DISP_DDR_Sub_BM_V_OFFSET_sub_y_v_offset_mask                    (0x00000FFF)
#define  MDOMAIN_DISP_DDR_Sub_BM_V_OFFSET_sub_c_v_offset(data)                   (0x0FFF0000&((data)<<16))
#define  MDOMAIN_DISP_DDR_Sub_BM_V_OFFSET_sub_y_v_offset(data)                   (0x00000FFF&(data))
#define  MDOMAIN_DISP_DDR_Sub_BM_V_OFFSET_get_sub_c_v_offset(data)               ((0x0FFF0000&(data))>>16)
#define  MDOMAIN_DISP_DDR_Sub_BM_V_OFFSET_get_sub_y_v_offset(data)               (0x00000FFF&(data))

#define  MDOMAIN_DISP_sub_block_read_addcmd_transform                           0x180275D0
#define  MDOMAIN_DISP_sub_block_read_addcmd_transform_reg_addr                   "0xB80275D0"
#define  MDOMAIN_DISP_sub_block_read_addcmd_transform_reg                        0xB80275D0
#define  MDOMAIN_DISP_sub_block_read_addcmd_transform_inst_addr                  "0x003B"
#define  set_MDOMAIN_DISP_sub_block_read_addcmd_transform_reg(data)              (*((volatile unsigned int*)MDOMAIN_DISP_sub_block_read_addcmd_transform_reg)=data)
#define  get_MDOMAIN_DISP_sub_block_read_addcmd_transform_reg                    (*((volatile unsigned int*)MDOMAIN_DISP_sub_block_read_addcmd_transform_reg))
#define  MDOMAIN_DISP_sub_block_read_addcmd_transform_sub_blockread_line_step_shift (3)
#define  MDOMAIN_DISP_sub_block_read_addcmd_transform_sub_blockread_addcmd_trans_en_shift (0)
#define  MDOMAIN_DISP_sub_block_read_addcmd_transform_sub_blockread_line_step_mask (0xFFFFFFF8)
#define  MDOMAIN_DISP_sub_block_read_addcmd_transform_sub_blockread_addcmd_trans_en_mask (0x00000001)
#define  MDOMAIN_DISP_sub_block_read_addcmd_transform_sub_blockread_line_step(data) (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_sub_block_read_addcmd_transform_sub_blockread_addcmd_trans_en(data) (0x00000001&(data))
#define  MDOMAIN_DISP_sub_block_read_addcmd_transform_get_sub_blockread_line_step(data) ((0xFFFFFFF8&(data))>>3)
#define  MDOMAIN_DISP_sub_block_read_addcmd_transform_get_sub_blockread_addcmd_trans_en(data) (0x00000001&(data))

#define  MDOMAIN_DISP_sub_block_read_ads_start_y                                0x180275D4
#define  MDOMAIN_DISP_sub_block_read_ads_start_y_reg_addr                        "0xB80275D4"
#define  MDOMAIN_DISP_sub_block_read_ads_start_y_reg                             0xB80275D4
#define  MDOMAIN_DISP_sub_block_read_ads_start_y_inst_addr                       "0x003C"
#define  set_MDOMAIN_DISP_sub_block_read_ads_start_y_reg(data)                   (*((volatile unsigned int*)MDOMAIN_DISP_sub_block_read_ads_start_y_reg)=data)
#define  get_MDOMAIN_DISP_sub_block_read_ads_start_y_reg                         (*((volatile unsigned int*)MDOMAIN_DISP_sub_block_read_ads_start_y_reg))
#define  MDOMAIN_DISP_sub_block_read_ads_start_y_sub_y_ads_start_shift           (3)
#define  MDOMAIN_DISP_sub_block_read_ads_start_y_sub_y_ads_start_mask            (0xFFFFFFF8)
#define  MDOMAIN_DISP_sub_block_read_ads_start_y_sub_y_ads_start(data)           (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_sub_block_read_ads_start_y_get_sub_y_ads_start(data)       ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_sub_block_read_ads_start_c                                0x180275D8
#define  MDOMAIN_DISP_sub_block_read_ads_start_c_reg_addr                        "0xB80275D8"
#define  MDOMAIN_DISP_sub_block_read_ads_start_c_reg                             0xB80275D8
#define  MDOMAIN_DISP_sub_block_read_ads_start_c_inst_addr                       "0x003D"
#define  set_MDOMAIN_DISP_sub_block_read_ads_start_c_reg(data)                   (*((volatile unsigned int*)MDOMAIN_DISP_sub_block_read_ads_start_c_reg)=data)
#define  get_MDOMAIN_DISP_sub_block_read_ads_start_c_reg                         (*((volatile unsigned int*)MDOMAIN_DISP_sub_block_read_ads_start_c_reg))
#define  MDOMAIN_DISP_sub_block_read_ads_start_c_sub_c_ads_start_shift           (3)
#define  MDOMAIN_DISP_sub_block_read_ads_start_c_sub_c_ads_start_mask            (0xFFFFFFF8)
#define  MDOMAIN_DISP_sub_block_read_ads_start_c_sub_c_ads_start(data)           (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_sub_block_read_ads_start_c_get_sub_c_ads_start(data)       ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_sub_block_read_c_line_step                                0x180275DC
#define  MDOMAIN_DISP_sub_block_read_c_line_step_reg_addr                        "0xB80275DC"
#define  MDOMAIN_DISP_sub_block_read_c_line_step_reg                             0xB80275DC
#define  MDOMAIN_DISP_sub_block_read_c_line_step_inst_addr                       "0x003E"
#define  set_MDOMAIN_DISP_sub_block_read_c_line_step_reg(data)                   (*((volatile unsigned int*)MDOMAIN_DISP_sub_block_read_c_line_step_reg)=data)
#define  get_MDOMAIN_DISP_sub_block_read_c_line_step_reg                         (*((volatile unsigned int*)MDOMAIN_DISP_sub_block_read_c_line_step_reg))
#define  MDOMAIN_DISP_sub_block_read_c_line_step_sub_blockread_c_line_step_shift (3)
#define  MDOMAIN_DISP_sub_block_read_c_line_step_sub_blockread_common_line_step_en_shift (0)
#define  MDOMAIN_DISP_sub_block_read_c_line_step_sub_blockread_c_line_step_mask  (0xFFFFFFF8)
#define  MDOMAIN_DISP_sub_block_read_c_line_step_sub_blockread_common_line_step_en_mask (0x00000001)
#define  MDOMAIN_DISP_sub_block_read_c_line_step_sub_blockread_c_line_step(data) (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_sub_block_read_c_line_step_sub_blockread_common_line_step_en(data) (0x00000001&(data))
#define  MDOMAIN_DISP_sub_block_read_c_line_step_get_sub_blockread_c_line_step(data) ((0xFFFFFFF8&(data))>>3)
#define  MDOMAIN_DISP_sub_block_read_c_line_step_get_sub_blockread_common_line_step_en(data) (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_BIST_MODE                                           0x180274A0
#define  MDOMAIN_DISP_DISPM_BIST_MODE_reg_addr                                   "0xB80274A0"
#define  MDOMAIN_DISP_DISPM_BIST_MODE_reg                                        0xB80274A0
#define  MDOMAIN_DISP_DISPM_BIST_MODE_inst_addr                                  "0x003F"
#define  set_MDOMAIN_DISP_DISPM_BIST_MODE_reg(data)                              (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_BIST_MODE_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_BIST_MODE_reg                                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_BIST_MODE_reg))
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_pqc1_sub_shift             (12)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_pqc2_sub_shift             (11)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_pqdc2_sub_shift      (10)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_pqdc1_sub_shift      (9)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_pqc2_shift                 (8)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_pqdc2_shift          (7)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_dispm_fsbuf_shift    (5)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_pqdc1_shift          (4)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_disp_sub_shift       (3)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_cap_sub_shift        (2)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_disp_main_shift      (1)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_cap_main_shift       (0)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_pqc1_sub_mask              (0x00001000)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_pqc2_sub_mask              (0x00000800)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_pqdc2_sub_mask       (0x00000400)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_pqdc1_sub_mask       (0x00000200)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_pqc2_mask                  (0x00000100)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_pqdc2_mask           (0x00000080)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_dispm_fsbuf_mask     (0x00000020)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_pqdc1_mask           (0x00000010)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_disp_sub_mask        (0x00000008)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_cap_sub_mask         (0x00000004)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_disp_main_mask       (0x00000002)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_cap_main_mask        (0x00000001)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_pqc1_sub(data)             (0x00001000&((data)<<12))
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_pqc2_sub(data)             (0x00000800&((data)<<11))
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_pqdc2_sub(data)      (0x00000400&((data)<<10))
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_pqdc1_sub(data)      (0x00000200&((data)<<9))
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_pqc2(data)                 (0x00000100&((data)<<8))
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_pqdc2(data)          (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_dispm_fsbuf(data)    (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_pqdc1(data)          (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_disp_sub(data)       (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_cap_sub(data)        (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_disp_main(data)      (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DISPM_BIST_MODE_dispm_bist_mode_mbist_cap_main(data)       (0x00000001&(data))
#define  MDOMAIN_DISP_DISPM_BIST_MODE_get_dispm_bist_mode_pqc1_sub(data)         ((0x00001000&(data))>>12)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_get_dispm_bist_mode_pqc2_sub(data)         ((0x00000800&(data))>>11)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_get_dispm_bist_mode_mbist_pqdc2_sub(data)  ((0x00000400&(data))>>10)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_get_dispm_bist_mode_mbist_pqdc1_sub(data)  ((0x00000200&(data))>>9)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_get_dispm_bist_mode_pqc2(data)             ((0x00000100&(data))>>8)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_get_dispm_bist_mode_mbist_pqdc2(data)      ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_get_dispm_bist_mode_mbist_dispm_fsbuf(data) ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_get_dispm_bist_mode_mbist_pqdc1(data)      ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_get_dispm_bist_mode_mbist_disp_sub(data)   ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_get_dispm_bist_mode_mbist_cap_sub(data)    ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_get_dispm_bist_mode_mbist_disp_main(data)  ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DISPM_BIST_MODE_get_dispm_bist_mode_mbist_cap_main(data)   (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_BIST_DONE                                           0x180274A4
#define  MDOMAIN_DISP_DISPM_BIST_DONE_reg_addr                                   "0xB80274A4"
#define  MDOMAIN_DISP_DISPM_BIST_DONE_reg                                        0xB80274A4
#define  MDOMAIN_DISP_DISPM_BIST_DONE_inst_addr                                  "0x0040"
#define  set_MDOMAIN_DISP_DISPM_BIST_DONE_reg(data)                              (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_BIST_DONE_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_BIST_DONE_reg                                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_BIST_DONE_reg))
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_pqc1_sub_shift             (12)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_pqc2_sub_shift             (11)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_pqdc2_sub_shift      (10)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_pqdc1_sub_shift      (9)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_pqc2_shift                 (8)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_pqdc2_shift          (7)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_dispm_fsbuf_shift    (5)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_pqdc1_shift          (4)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_disp_sub_shift       (3)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_cap_sub_shift        (2)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_disp_main_shift      (1)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_cap_main_shift       (0)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_pqc1_sub_mask              (0x00001000)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_pqc2_sub_mask              (0x00000800)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_pqdc2_sub_mask       (0x00000400)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_pqdc1_sub_mask       (0x00000200)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_pqc2_mask                  (0x00000100)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_pqdc2_mask           (0x00000080)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_dispm_fsbuf_mask     (0x00000020)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_pqdc1_mask           (0x00000010)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_disp_sub_mask        (0x00000008)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_cap_sub_mask         (0x00000004)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_disp_main_mask       (0x00000002)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_cap_main_mask        (0x00000001)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_pqc1_sub(data)             (0x00001000&((data)<<12))
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_pqc2_sub(data)             (0x00000800&((data)<<11))
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_pqdc2_sub(data)      (0x00000400&((data)<<10))
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_pqdc1_sub(data)      (0x00000200&((data)<<9))
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_pqc2(data)                 (0x00000100&((data)<<8))
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_pqdc2(data)          (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_dispm_fsbuf(data)    (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_pqdc1(data)          (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_disp_sub(data)       (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_cap_sub(data)        (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_disp_main(data)      (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DISPM_BIST_DONE_dispm_bist_done_mbist_cap_main(data)       (0x00000001&(data))
#define  MDOMAIN_DISP_DISPM_BIST_DONE_get_dispm_bist_done_pqc1_sub(data)         ((0x00001000&(data))>>12)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_get_dispm_bist_done_pqc2_sub(data)         ((0x00000800&(data))>>11)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_get_dispm_bist_done_mbist_pqdc2_sub(data)  ((0x00000400&(data))>>10)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_get_dispm_bist_done_mbist_pqdc1_sub(data)  ((0x00000200&(data))>>9)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_get_dispm_bist_done_pqc2(data)             ((0x00000100&(data))>>8)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_get_dispm_bist_done_mbist_pqdc2(data)      ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_get_dispm_bist_done_mbist_dispm_fsbuf(data) ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_get_dispm_bist_done_mbist_pqdc1(data)      ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_get_dispm_bist_done_mbist_disp_sub(data)   ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_get_dispm_bist_done_mbist_cap_sub(data)    ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_get_dispm_bist_done_mbist_disp_main(data)  ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DISPM_BIST_DONE_get_dispm_bist_done_mbist_cap_main(data)   (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP                                     0x180274A8
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_reg_addr                             "0xB80274A8"
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_reg                                  0xB80274A8
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_inst_addr                            "0x0041"
#define  set_MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_reg(data)                        (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_reg                              (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_reg))
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_pqc1_sub_shift (12)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_pqc2_sub_shift (11)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_pqdc2_sub_shift (10)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_pqdc1_sub_shift (9)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_pqc2_shift     (8)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_pqdc2_shift (7)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_dispm_fsbuf_shift (5)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_pqdc1_shift (4)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_disp_sub_shift (3)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_cap_sub_shift (2)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_disp_main_shift (1)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_cap_main_shift (0)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_pqc1_sub_mask  (0x00001000)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_pqc2_sub_mask  (0x00000800)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_pqdc2_sub_mask (0x00000400)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_pqdc1_sub_mask (0x00000200)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_pqc2_mask      (0x00000100)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_pqdc2_mask (0x00000080)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_dispm_fsbuf_mask (0x00000020)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_pqdc1_mask (0x00000010)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_disp_sub_mask (0x00000008)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_cap_sub_mask (0x00000004)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_disp_main_mask (0x00000002)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_cap_main_mask (0x00000001)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_pqc1_sub(data) (0x00001000&((data)<<12))
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_pqc2_sub(data) (0x00000800&((data)<<11))
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_pqdc2_sub(data) (0x00000400&((data)<<10))
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_pqdc1_sub(data) (0x00000200&((data)<<9))
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_pqc2(data)     (0x00000100&((data)<<8))
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_pqdc2(data) (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_dispm_fsbuf(data) (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_pqdc1(data) (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_disp_sub(data) (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_cap_sub(data) (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_disp_main(data) (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_dispm_bist_fail_group_mbist_cap_main(data) (0x00000001&(data))
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_get_dispm_bist_fail_group_pqc1_sub(data) ((0x00001000&(data))>>12)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_get_dispm_bist_fail_group_pqc2_sub(data) ((0x00000800&(data))>>11)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_get_dispm_bist_fail_group_mbist_pqdc2_sub(data) ((0x00000400&(data))>>10)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_get_dispm_bist_fail_group_mbist_pqdc1_sub(data) ((0x00000200&(data))>>9)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_get_dispm_bist_fail_group_pqc2(data) ((0x00000100&(data))>>8)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_get_dispm_bist_fail_group_mbist_pqdc2(data) ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_get_dispm_bist_fail_group_mbist_dispm_fsbuf(data) ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_get_dispm_bist_fail_group_mbist_pqdc1(data) ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_get_dispm_bist_fail_group_mbist_disp_sub(data) ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_get_dispm_bist_fail_group_mbist_cap_sub(data) ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_get_dispm_bist_fail_group_mbist_disp_main(data) ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DISPM_BIST_FAIL_GROUP_get_dispm_bist_fail_group_mbist_cap_main(data) (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_DRF_MODE                                            0x180274B0
#define  MDOMAIN_DISP_DISPM_DRF_MODE_reg_addr                                    "0xB80274B0"
#define  MDOMAIN_DISP_DISPM_DRF_MODE_reg                                         0xB80274B0
#define  MDOMAIN_DISP_DISPM_DRF_MODE_inst_addr                                   "0x0042"
#define  set_MDOMAIN_DISP_DISPM_DRF_MODE_reg(data)                               (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DRF_MODE_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_DRF_MODE_reg                                     (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DRF_MODE_reg))
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_pqc1_sub_shift               (12)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_pqc2_sub_shift               (11)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_pqdc2_sub_shift        (10)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_pqdc1_sub_shift        (9)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_pqc2_shift                   (8)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_pqdc2_shift            (7)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_dispm_fsbuf_shift      (5)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_pqdc1_shift            (4)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_disp_sub_shift         (3)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_cap_sub_shift          (2)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_disp_main_shift        (1)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_cap_main_shift         (0)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_pqc1_sub_mask                (0x00001000)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_pqc2_sub_mask                (0x00000800)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_pqdc2_sub_mask         (0x00000400)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_pqdc1_sub_mask         (0x00000200)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_pqc2_mask                    (0x00000100)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_pqdc2_mask             (0x00000080)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_dispm_fsbuf_mask       (0x00000020)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_pqdc1_mask             (0x00000010)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_disp_sub_mask          (0x00000008)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_cap_sub_mask           (0x00000004)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_disp_main_mask         (0x00000002)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_cap_main_mask          (0x00000001)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_pqc1_sub(data)               (0x00001000&((data)<<12))
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_pqc2_sub(data)               (0x00000800&((data)<<11))
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_pqdc2_sub(data)        (0x00000400&((data)<<10))
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_pqdc1_sub(data)        (0x00000200&((data)<<9))
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_pqc2(data)                   (0x00000100&((data)<<8))
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_pqdc2(data)            (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_dispm_fsbuf(data)      (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_pqdc1(data)            (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_disp_sub(data)         (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_cap_sub(data)          (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_disp_main(data)        (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DISPM_DRF_MODE_dispm_drf_mode_mbist_cap_main(data)         (0x00000001&(data))
#define  MDOMAIN_DISP_DISPM_DRF_MODE_get_dispm_drf_mode_pqc1_sub(data)           ((0x00001000&(data))>>12)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_get_dispm_drf_mode_pqc2_sub(data)           ((0x00000800&(data))>>11)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_get_dispm_drf_mode_mbist_pqdc2_sub(data)    ((0x00000400&(data))>>10)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_get_dispm_drf_mode_mbist_pqdc1_sub(data)    ((0x00000200&(data))>>9)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_get_dispm_drf_mode_pqc2(data)               ((0x00000100&(data))>>8)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_get_dispm_drf_mode_mbist_pqdc2(data)        ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_get_dispm_drf_mode_mbist_dispm_fsbuf(data)  ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_get_dispm_drf_mode_mbist_pqdc1(data)        ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_get_dispm_drf_mode_mbist_disp_sub(data)     ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_get_dispm_drf_mode_mbist_cap_sub(data)      ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_get_dispm_drf_mode_mbist_disp_main(data)    ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DISPM_DRF_MODE_get_dispm_drf_mode_mbist_cap_main(data)     (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_DRF_RESUME                                          0x180274B4
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_reg_addr                                  "0xB80274B4"
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_reg                                       0xB80274B4
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_inst_addr                                 "0x0043"
#define  set_MDOMAIN_DISP_DISPM_DRF_RESUME_reg(data)                             (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DRF_RESUME_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_DRF_RESUME_reg                                   (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DRF_RESUME_reg))
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_pqc1_sub_shift           (12)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_pqc2_sub_shift           (11)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_pqdc2_sub_shift    (10)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_pqdc1_sub_shift    (9)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_pqc2_shift               (8)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_pqdc2_shift        (7)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_dispm_fsbuf_shift  (5)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_pqdc1_shift        (4)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_disp_sub_shift     (3)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_cap_sub_shift      (2)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_disp_main_shift    (1)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_cap_main_shift     (0)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_pqc1_sub_mask            (0x00001000)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_pqc2_sub_mask            (0x00000800)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_pqdc2_sub_mask     (0x00000400)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_pqdc1_sub_mask     (0x00000200)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_pqc2_mask                (0x00000100)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_pqdc2_mask         (0x00000080)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_dispm_fsbuf_mask   (0x00000020)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_pqdc1_mask         (0x00000010)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_disp_sub_mask      (0x00000008)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_cap_sub_mask       (0x00000004)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_disp_main_mask     (0x00000002)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_cap_main_mask      (0x00000001)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_pqc1_sub(data)           (0x00001000&((data)<<12))
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_pqc2_sub(data)           (0x00000800&((data)<<11))
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_pqdc2_sub(data)    (0x00000400&((data)<<10))
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_pqdc1_sub(data)    (0x00000200&((data)<<9))
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_pqc2(data)               (0x00000100&((data)<<8))
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_pqdc2(data)        (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_dispm_fsbuf(data)  (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_pqdc1(data)        (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_disp_sub(data)     (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_cap_sub(data)      (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_disp_main(data)    (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_dispm_drf_resume_mbist_cap_main(data)     (0x00000001&(data))
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_get_dispm_drf_resume_pqc1_sub(data)       ((0x00001000&(data))>>12)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_get_dispm_drf_resume_pqc2_sub(data)       ((0x00000800&(data))>>11)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_get_dispm_drf_resume_mbist_pqdc2_sub(data) ((0x00000400&(data))>>10)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_get_dispm_drf_resume_mbist_pqdc1_sub(data) ((0x00000200&(data))>>9)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_get_dispm_drf_resume_pqc2(data)           ((0x00000100&(data))>>8)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_get_dispm_drf_resume_mbist_pqdc2(data)    ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_get_dispm_drf_resume_mbist_dispm_fsbuf(data) ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_get_dispm_drf_resume_mbist_pqdc1(data)    ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_get_dispm_drf_resume_mbist_disp_sub(data) ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_get_dispm_drf_resume_mbist_cap_sub(data)  ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_get_dispm_drf_resume_mbist_disp_main(data) ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DISPM_DRF_RESUME_get_dispm_drf_resume_mbist_cap_main(data) (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_DRF_DONE                                            0x180274B8
#define  MDOMAIN_DISP_DISPM_DRF_DONE_reg_addr                                    "0xB80274B8"
#define  MDOMAIN_DISP_DISPM_DRF_DONE_reg                                         0xB80274B8
#define  MDOMAIN_DISP_DISPM_DRF_DONE_inst_addr                                   "0x0044"
#define  set_MDOMAIN_DISP_DISPM_DRF_DONE_reg(data)                               (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DRF_DONE_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_DRF_DONE_reg                                     (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DRF_DONE_reg))
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_pqc1_sub_shift               (12)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_pqc2_sub_shift               (11)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_pqdc2_sub_shift        (10)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_pqdc1_sub_shift        (9)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_pqc2_shift                   (8)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_pqdc2_shift            (7)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_dispm_fsbuf_shift      (5)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_pqdc1_shift            (4)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_disp_sub_shift         (3)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_cap_sub_shift          (2)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_disp_main_shift        (1)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_cap_main_shift         (0)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_pqc1_sub_mask                (0x00001000)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_pqc2_sub_mask                (0x00000800)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_pqdc2_sub_mask         (0x00000400)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_pqdc1_sub_mask         (0x00000200)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_pqc2_mask                    (0x00000100)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_pqdc2_mask             (0x00000080)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_dispm_fsbuf_mask       (0x00000020)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_pqdc1_mask             (0x00000010)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_disp_sub_mask          (0x00000008)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_cap_sub_mask           (0x00000004)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_disp_main_mask         (0x00000002)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_cap_main_mask          (0x00000001)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_pqc1_sub(data)               (0x00001000&((data)<<12))
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_pqc2_sub(data)               (0x00000800&((data)<<11))
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_pqdc2_sub(data)        (0x00000400&((data)<<10))
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_pqdc1_sub(data)        (0x00000200&((data)<<9))
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_pqc2(data)                   (0x00000100&((data)<<8))
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_pqdc2(data)            (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_dispm_fsbuf(data)      (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_pqdc1(data)            (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_disp_sub(data)         (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_cap_sub(data)          (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_disp_main(data)        (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DISPM_DRF_DONE_dispm_drf_done_mbist_cap_main(data)         (0x00000001&(data))
#define  MDOMAIN_DISP_DISPM_DRF_DONE_get_dispm_drf_done_pqc1_sub(data)           ((0x00001000&(data))>>12)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_get_dispm_drf_done_pqc2_sub(data)           ((0x00000800&(data))>>11)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_get_dispm_drf_done_mbist_pqdc2_sub(data)    ((0x00000400&(data))>>10)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_get_dispm_drf_done_mbist_pqdc1_sub(data)    ((0x00000200&(data))>>9)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_get_dispm_drf_done_pqc2(data)               ((0x00000100&(data))>>8)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_get_dispm_drf_done_mbist_pqdc2(data)        ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_get_dispm_drf_done_mbist_dispm_fsbuf(data)  ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_get_dispm_drf_done_mbist_pqdc1(data)        ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_get_dispm_drf_done_mbist_disp_sub(data)     ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_get_dispm_drf_done_mbist_cap_sub(data)      ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_get_dispm_drf_done_mbist_disp_main(data)    ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DISPM_DRF_DONE_get_dispm_drf_done_mbist_cap_main(data)     (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_DRF_PAUSE                                           0x180274BC
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_reg_addr                                   "0xB80274BC"
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_reg                                        0xB80274BC
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_inst_addr                                  "0x0045"
#define  set_MDOMAIN_DISP_DISPM_DRF_PAUSE_reg(data)                              (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DRF_PAUSE_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_DRF_PAUSE_reg                                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DRF_PAUSE_reg))
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_pqc1_sub_shift             (12)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_pqc2_sub_shift             (11)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_pqdc2_sub_shift      (10)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_pqdc1_sub_shift      (9)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_pqc2_shift                 (8)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_pqdc2_shift          (7)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_dispm_fsbuf_shift    (5)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_pqdc1_shift          (4)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_disp_sub_shift       (3)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_cap_sub_shift        (2)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_disp_main_shift      (1)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_cap_main_shift       (0)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_pqc1_sub_mask              (0x00001000)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_pqc2_sub_mask              (0x00000800)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_pqdc2_sub_mask       (0x00000400)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_pqdc1_sub_mask       (0x00000200)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_pqc2_mask                  (0x00000100)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_pqdc2_mask           (0x00000080)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_dispm_fsbuf_mask     (0x00000020)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_pqdc1_mask           (0x00000010)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_disp_sub_mask        (0x00000008)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_cap_sub_mask         (0x00000004)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_disp_main_mask       (0x00000002)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_cap_main_mask        (0x00000001)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_pqc1_sub(data)             (0x00001000&((data)<<12))
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_pqc2_sub(data)             (0x00000800&((data)<<11))
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_pqdc2_sub(data)      (0x00000400&((data)<<10))
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_pqdc1_sub(data)      (0x00000200&((data)<<9))
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_pqc2(data)                 (0x00000100&((data)<<8))
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_pqdc2(data)          (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_dispm_fsbuf(data)    (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_pqdc1(data)          (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_disp_sub(data)       (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_cap_sub(data)        (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_disp_main(data)      (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_dispm_drf_pause_mbist_cap_main(data)       (0x00000001&(data))
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_get_dispm_drf_pause_pqc1_sub(data)         ((0x00001000&(data))>>12)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_get_dispm_drf_pause_pqc2_sub(data)         ((0x00000800&(data))>>11)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_get_dispm_drf_pause_mbist_pqdc2_sub(data)  ((0x00000400&(data))>>10)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_get_dispm_drf_pause_mbist_pqdc1_sub(data)  ((0x00000200&(data))>>9)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_get_dispm_drf_pause_pqc2(data)             ((0x00000100&(data))>>8)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_get_dispm_drf_pause_mbist_pqdc2(data)      ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_get_dispm_drf_pause_mbist_dispm_fsbuf(data) ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_get_dispm_drf_pause_mbist_pqdc1(data)      ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_get_dispm_drf_pause_mbist_disp_sub(data)   ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_get_dispm_drf_pause_mbist_cap_sub(data)    ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_get_dispm_drf_pause_mbist_disp_main(data)  ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DISPM_DRF_PAUSE_get_dispm_drf_pause_mbist_cap_main(data)   (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP                                      0x180274C0
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_reg_addr                              "0xB80274C0"
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_reg                                   0xB80274C0
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_inst_addr                             "0x0046"
#define  set_MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_reg(data)                         (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_reg                               (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_reg))
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_pqc1_sub_shift   (12)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_pqc2_sub_shift   (11)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_pqdc2_sub_shift (10)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_pqdc1_sub_shift (9)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_pqc2_shift       (8)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_pqdc2_shift (7)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_dispm_fsbuf_shift (5)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_pqdc1_shift (4)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_disp_sub_shift (3)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_cap_sub_shift (2)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_disp_main_shift (1)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_cap_main_shift (0)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_pqc1_sub_mask    (0x00001000)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_pqc2_sub_mask    (0x00000800)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_pqdc2_sub_mask (0x00000400)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_pqdc1_sub_mask (0x00000200)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_pqc2_mask        (0x00000100)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_pqdc2_mask (0x00000080)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_dispm_fsbuf_mask (0x00000020)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_pqdc1_mask (0x00000010)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_disp_sub_mask (0x00000008)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_cap_sub_mask (0x00000004)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_disp_main_mask (0x00000002)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_cap_main_mask (0x00000001)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_pqc1_sub(data)   (0x00001000&((data)<<12))
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_pqc2_sub(data)   (0x00000800&((data)<<11))
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_pqdc2_sub(data) (0x00000400&((data)<<10))
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_pqdc1_sub(data) (0x00000200&((data)<<9))
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_pqc2(data)       (0x00000100&((data)<<8))
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_pqdc2(data) (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_dispm_fsbuf(data) (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_pqdc1(data) (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_disp_sub(data) (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_cap_sub(data) (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_disp_main(data) (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_dispm_drf_fail_group_mbist_cap_main(data) (0x00000001&(data))
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_get_dispm_drf_fail_group_pqc1_sub(data) ((0x00001000&(data))>>12)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_get_dispm_drf_fail_group_pqc2_sub(data) ((0x00000800&(data))>>11)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_get_dispm_drf_fail_group_mbist_pqdc2_sub(data) ((0x00000400&(data))>>10)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_get_dispm_drf_fail_group_mbist_pqdc1_sub(data) ((0x00000200&(data))>>9)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_get_dispm_drf_fail_group_pqc2(data)   ((0x00000100&(data))>>8)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_get_dispm_drf_fail_group_mbist_pqdc2(data) ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_get_dispm_drf_fail_group_mbist_dispm_fsbuf(data) ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_get_dispm_drf_fail_group_mbist_pqdc1(data) ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_get_dispm_drf_fail_group_mbist_disp_sub(data) ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_get_dispm_drf_fail_group_mbist_cap_sub(data) ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_get_dispm_drf_fail_group_mbist_disp_main(data) ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DISPM_DRF_FAIL_GROUP_get_dispm_drf_fail_group_mbist_cap_main(data) (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_RM                                                  0x180274C4
#define  MDOMAIN_DISP_DISPM_RM_reg_addr                                          "0xB80274C4"
#define  MDOMAIN_DISP_DISPM_RM_reg                                               0xB80274C4
#define  MDOMAIN_DISP_DISPM_RM_inst_addr                                         "0x0047"
#define  set_MDOMAIN_DISP_DISPM_RM_reg(data)                                     (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_RM_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_RM_reg                                           (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_RM_reg))
#define  MDOMAIN_DISP_DISPM_RM_dispm_rmb_mbist_disp_sub_shift                    (28)
#define  MDOMAIN_DISP_DISPM_RM_dispm_rma_mbist_disp_sub_shift                    (24)
#define  MDOMAIN_DISP_DISPM_RM_dispm_rmb_mbist_disp_main_shift                   (20)
#define  MDOMAIN_DISP_DISPM_RM_dispm_rma_mbist_disp_main_shift                   (16)
#define  MDOMAIN_DISP_DISPM_RM_dispm_rmb_mbist_cap_sub_shift                     (12)
#define  MDOMAIN_DISP_DISPM_RM_dispm_rma_mbist_cap_sub_shift                     (8)
#define  MDOMAIN_DISP_DISPM_RM_dispm_rmb_mbist_cap_main_shift                    (4)
#define  MDOMAIN_DISP_DISPM_RM_dispm_rma_mbist_cap_main_shift                    (0)
#define  MDOMAIN_DISP_DISPM_RM_dispm_rmb_mbist_disp_sub_mask                     (0xF0000000)
#define  MDOMAIN_DISP_DISPM_RM_dispm_rma_mbist_disp_sub_mask                     (0x0F000000)
#define  MDOMAIN_DISP_DISPM_RM_dispm_rmb_mbist_disp_main_mask                    (0x00F00000)
#define  MDOMAIN_DISP_DISPM_RM_dispm_rma_mbist_disp_main_mask                    (0x000F0000)
#define  MDOMAIN_DISP_DISPM_RM_dispm_rmb_mbist_cap_sub_mask                      (0x0000F000)
#define  MDOMAIN_DISP_DISPM_RM_dispm_rma_mbist_cap_sub_mask                      (0x00000F00)
#define  MDOMAIN_DISP_DISPM_RM_dispm_rmb_mbist_cap_main_mask                     (0x000000F0)
#define  MDOMAIN_DISP_DISPM_RM_dispm_rma_mbist_cap_main_mask                     (0x0000000F)
#define  MDOMAIN_DISP_DISPM_RM_dispm_rmb_mbist_disp_sub(data)                    (0xF0000000&((data)<<28))
#define  MDOMAIN_DISP_DISPM_RM_dispm_rma_mbist_disp_sub(data)                    (0x0F000000&((data)<<24))
#define  MDOMAIN_DISP_DISPM_RM_dispm_rmb_mbist_disp_main(data)                   (0x00F00000&((data)<<20))
#define  MDOMAIN_DISP_DISPM_RM_dispm_rma_mbist_disp_main(data)                   (0x000F0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_RM_dispm_rmb_mbist_cap_sub(data)                     (0x0000F000&((data)<<12))
#define  MDOMAIN_DISP_DISPM_RM_dispm_rma_mbist_cap_sub(data)                     (0x00000F00&((data)<<8))
#define  MDOMAIN_DISP_DISPM_RM_dispm_rmb_mbist_cap_main(data)                    (0x000000F0&((data)<<4))
#define  MDOMAIN_DISP_DISPM_RM_dispm_rma_mbist_cap_main(data)                    (0x0000000F&(data))
#define  MDOMAIN_DISP_DISPM_RM_get_dispm_rmb_mbist_disp_sub(data)                ((0xF0000000&(data))>>28)
#define  MDOMAIN_DISP_DISPM_RM_get_dispm_rma_mbist_disp_sub(data)                ((0x0F000000&(data))>>24)
#define  MDOMAIN_DISP_DISPM_RM_get_dispm_rmb_mbist_disp_main(data)               ((0x00F00000&(data))>>20)
#define  MDOMAIN_DISP_DISPM_RM_get_dispm_rma_mbist_disp_main(data)               ((0x000F0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_RM_get_dispm_rmb_mbist_cap_sub(data)                 ((0x0000F000&(data))>>12)
#define  MDOMAIN_DISP_DISPM_RM_get_dispm_rma_mbist_cap_sub(data)                 ((0x00000F00&(data))>>8)
#define  MDOMAIN_DISP_DISPM_RM_get_dispm_rmb_mbist_cap_main(data)                ((0x000000F0&(data))>>4)
#define  MDOMAIN_DISP_DISPM_RM_get_dispm_rma_mbist_cap_main(data)                (0x0000000F&(data))

#define  MDOMAIN_DISP_DISPM_RME                                                 0x180274C8
#define  MDOMAIN_DISP_DISPM_RME_reg_addr                                         "0xB80274C8"
#define  MDOMAIN_DISP_DISPM_RME_reg                                              0xB80274C8
#define  MDOMAIN_DISP_DISPM_RME_inst_addr                                        "0x0048"
#define  set_MDOMAIN_DISP_DISPM_RME_reg(data)                                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_RME_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_RME_reg                                          (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_RME_reg))
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmeb_mbist_disp_sub_shift                  (7)
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmea_mbist_disp_sub_shift                  (6)
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmeb_mbist_disp_main_shift                 (5)
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmea_mbist_disp_main_shift                 (4)
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmeb_mbist_cap_sub_shift                   (3)
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmea_mbist_cap_sub_shift                   (2)
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmeb_mbist_cap_main_shift                  (1)
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmea_mbist_cap_main_shift                  (0)
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmeb_mbist_disp_sub_mask                   (0x00000080)
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmea_mbist_disp_sub_mask                   (0x00000040)
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmeb_mbist_disp_main_mask                  (0x00000020)
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmea_mbist_disp_main_mask                  (0x00000010)
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmeb_mbist_cap_sub_mask                    (0x00000008)
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmea_mbist_cap_sub_mask                    (0x00000004)
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmeb_mbist_cap_main_mask                   (0x00000002)
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmea_mbist_cap_main_mask                   (0x00000001)
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmeb_mbist_disp_sub(data)                  (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmea_mbist_disp_sub(data)                  (0x00000040&((data)<<6))
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmeb_mbist_disp_main(data)                 (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmea_mbist_disp_main(data)                 (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmeb_mbist_cap_sub(data)                   (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmea_mbist_cap_sub(data)                   (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmeb_mbist_cap_main(data)                  (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DISPM_RME_dispm_rmea_mbist_cap_main(data)                  (0x00000001&(data))
#define  MDOMAIN_DISP_DISPM_RME_get_dispm_rmeb_mbist_disp_sub(data)              ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DISPM_RME_get_dispm_rmea_mbist_disp_sub(data)              ((0x00000040&(data))>>6)
#define  MDOMAIN_DISP_DISPM_RME_get_dispm_rmeb_mbist_disp_main(data)             ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_RME_get_dispm_rmea_mbist_disp_main(data)             ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_RME_get_dispm_rmeb_mbist_cap_sub(data)               ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DISPM_RME_get_dispm_rmea_mbist_cap_sub(data)               ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_DISPM_RME_get_dispm_rmeb_mbist_cap_main(data)              ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DISPM_RME_get_dispm_rmea_mbist_cap_main(data)              (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_LS                                                  0x180274CC
#define  MDOMAIN_DISP_DISPM_LS_reg_addr                                          "0xB80274CC"
#define  MDOMAIN_DISP_DISPM_LS_reg                                               0xB80274CC
#define  MDOMAIN_DISP_DISPM_LS_inst_addr                                         "0x0049"
#define  set_MDOMAIN_DISP_DISPM_LS_reg(data)                                     (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_LS_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_LS_reg                                           (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_LS_reg))
#define  MDOMAIN_DISP_DISPM_LS_dispm_ls_pqc1_0_sub_shift                         (9)
#define  MDOMAIN_DISP_DISPM_LS_dispm_rme_pqc1_0_sub_shift                        (8)
#define  MDOMAIN_DISP_DISPM_LS_dispm_rm_pqc1_0_sub_shift                         (4)
#define  MDOMAIN_DISP_DISPM_LS_dispm_ls_mbist_disp_sub_shift                     (3)
#define  MDOMAIN_DISP_DISPM_LS_dispm_ls_mbist_disp_main_shift                    (2)
#define  MDOMAIN_DISP_DISPM_LS_dispm_ls_mbist_cap_sub_shift                      (1)
#define  MDOMAIN_DISP_DISPM_LS_dispm_ls_mbist_cap_main_shift                     (0)
#define  MDOMAIN_DISP_DISPM_LS_dispm_ls_pqc1_0_sub_mask                          (0x00000200)
#define  MDOMAIN_DISP_DISPM_LS_dispm_rme_pqc1_0_sub_mask                         (0x00000100)
#define  MDOMAIN_DISP_DISPM_LS_dispm_rm_pqc1_0_sub_mask                          (0x000000F0)
#define  MDOMAIN_DISP_DISPM_LS_dispm_ls_mbist_disp_sub_mask                      (0x00000008)
#define  MDOMAIN_DISP_DISPM_LS_dispm_ls_mbist_disp_main_mask                     (0x00000004)
#define  MDOMAIN_DISP_DISPM_LS_dispm_ls_mbist_cap_sub_mask                       (0x00000002)
#define  MDOMAIN_DISP_DISPM_LS_dispm_ls_mbist_cap_main_mask                      (0x00000001)
#define  MDOMAIN_DISP_DISPM_LS_dispm_ls_pqc1_0_sub(data)                         (0x00000200&((data)<<9))
#define  MDOMAIN_DISP_DISPM_LS_dispm_rme_pqc1_0_sub(data)                        (0x00000100&((data)<<8))
#define  MDOMAIN_DISP_DISPM_LS_dispm_rm_pqc1_0_sub(data)                         (0x000000F0&((data)<<4))
#define  MDOMAIN_DISP_DISPM_LS_dispm_ls_mbist_disp_sub(data)                     (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DISPM_LS_dispm_ls_mbist_disp_main(data)                    (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_DISPM_LS_dispm_ls_mbist_cap_sub(data)                      (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DISPM_LS_dispm_ls_mbist_cap_main(data)                     (0x00000001&(data))
#define  MDOMAIN_DISP_DISPM_LS_get_dispm_ls_pqc1_0_sub(data)                     ((0x00000200&(data))>>9)
#define  MDOMAIN_DISP_DISPM_LS_get_dispm_rme_pqc1_0_sub(data)                    ((0x00000100&(data))>>8)
#define  MDOMAIN_DISP_DISPM_LS_get_dispm_rm_pqc1_0_sub(data)                     ((0x000000F0&(data))>>4)
#define  MDOMAIN_DISP_DISPM_LS_get_dispm_ls_mbist_disp_sub(data)                 ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DISPM_LS_get_dispm_ls_mbist_disp_main(data)                ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_DISPM_LS_get_dispm_ls_mbist_cap_sub(data)                  ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DISPM_LS_get_dispm_ls_mbist_cap_main(data)                 (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_DECOMP_RM                                           0x180274D0
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_reg_addr                                   "0xB80274D0"
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_reg                                        0xB80274D0
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_inst_addr                                  "0x004A"
#define  set_MDOMAIN_DISP_DISPM_DECOMP_RM_reg(data)                              (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DECOMP_RM_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_DECOMP_RM_reg                                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DECOMP_RM_reg))
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_ls_mbist_pqdc2_sub_shift             (27)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rme_mbist_pqdc2_sub_shift            (26)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rm_mbist_pqdc2_sub_shift             (22)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_ls_mbist_pqdc1_sub_shift             (21)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rme_mbist_pqdc1_sub_shift            (20)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rm_mbist_pqdc1_sub_shift             (16)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_ls_mbist_pqdc2_shift                 (11)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rme_mbist_pqdc2_shift                (10)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rm_mbist_pqdc2_shift                 (6)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_ls_mbist_pqdc1_shift                 (5)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rme_mbist_pqdc1_shift                (4)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rm_mbist_pqdc1_shift                 (0)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_ls_mbist_pqdc2_sub_mask              (0x08000000)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rme_mbist_pqdc2_sub_mask             (0x04000000)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rm_mbist_pqdc2_sub_mask              (0x03C00000)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_ls_mbist_pqdc1_sub_mask              (0x00200000)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rme_mbist_pqdc1_sub_mask             (0x00100000)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rm_mbist_pqdc1_sub_mask              (0x000F0000)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_ls_mbist_pqdc2_mask                  (0x00000800)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rme_mbist_pqdc2_mask                 (0x00000400)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rm_mbist_pqdc2_mask                  (0x000003C0)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_ls_mbist_pqdc1_mask                  (0x00000020)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rme_mbist_pqdc1_mask                 (0x00000010)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rm_mbist_pqdc1_mask                  (0x0000000F)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_ls_mbist_pqdc2_sub(data)             (0x08000000&((data)<<27))
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rme_mbist_pqdc2_sub(data)            (0x04000000&((data)<<26))
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rm_mbist_pqdc2_sub(data)             (0x03C00000&((data)<<22))
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_ls_mbist_pqdc1_sub(data)             (0x00200000&((data)<<21))
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rme_mbist_pqdc1_sub(data)            (0x00100000&((data)<<20))
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rm_mbist_pqdc1_sub(data)             (0x000F0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_ls_mbist_pqdc2(data)                 (0x00000800&((data)<<11))
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rme_mbist_pqdc2(data)                (0x00000400&((data)<<10))
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rm_mbist_pqdc2(data)                 (0x000003C0&((data)<<6))
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_ls_mbist_pqdc1(data)                 (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rme_mbist_pqdc1(data)                (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_dispm_rm_mbist_pqdc1(data)                 (0x0000000F&(data))
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_get_dispm_ls_mbist_pqdc2_sub(data)         ((0x08000000&(data))>>27)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_get_dispm_rme_mbist_pqdc2_sub(data)        ((0x04000000&(data))>>26)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_get_dispm_rm_mbist_pqdc2_sub(data)         ((0x03C00000&(data))>>22)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_get_dispm_ls_mbist_pqdc1_sub(data)         ((0x00200000&(data))>>21)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_get_dispm_rme_mbist_pqdc1_sub(data)        ((0x00100000&(data))>>20)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_get_dispm_rm_mbist_pqdc1_sub(data)         ((0x000F0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_get_dispm_ls_mbist_pqdc2(data)             ((0x00000800&(data))>>11)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_get_dispm_rme_mbist_pqdc2(data)            ((0x00000400&(data))>>10)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_get_dispm_rm_mbist_pqdc2(data)             ((0x000003C0&(data))>>6)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_get_dispm_ls_mbist_pqdc1(data)             ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_get_dispm_rme_mbist_pqdc1(data)            ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_DECOMP_RM_get_dispm_rm_mbist_pqdc1(data)             (0x0000000F&(data))

#define  MDOMAIN_DISP_DISPM_COMP_RM                                             0x180274D4
#define  MDOMAIN_DISP_DISPM_COMP_RM_reg_addr                                     "0xB80274D4"
#define  MDOMAIN_DISP_DISPM_COMP_RM_reg                                          0xB80274D4
#define  MDOMAIN_DISP_DISPM_COMP_RM_inst_addr                                    "0x004B"
#define  set_MDOMAIN_DISP_DISPM_COMP_RM_reg(data)                                (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_COMP_RM_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_COMP_RM_reg                                      (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_COMP_RM_reg))
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_ls_pqc2_1_sub_shift                    (27)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rme_pqc2_1_sub_shift                   (26)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rm_pqc2_1_sub_shift                    (22)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_ls_pqc2_0_sub_shift                    (21)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rme_pqc2_0_sub_shift                   (20)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rm_pqc2_0_sub_shift                    (16)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_ls_pqc2_1_shift                        (11)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rme_pqc2_1_shift                       (10)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rm_pqc2_1_shift                        (6)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_ls_pqc2_0_shift                        (5)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rme_pqc2_0_shift                       (4)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rm_pqc2_0_shift                        (0)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_ls_pqc2_1_sub_mask                     (0x08000000)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rme_pqc2_1_sub_mask                    (0x04000000)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rm_pqc2_1_sub_mask                     (0x03C00000)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_ls_pqc2_0_sub_mask                     (0x00200000)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rme_pqc2_0_sub_mask                    (0x00100000)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rm_pqc2_0_sub_mask                     (0x000F0000)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_ls_pqc2_1_mask                         (0x00000800)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rme_pqc2_1_mask                        (0x00000400)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rm_pqc2_1_mask                         (0x000003C0)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_ls_pqc2_0_mask                         (0x00000020)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rme_pqc2_0_mask                        (0x00000010)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rm_pqc2_0_mask                         (0x0000000F)
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_ls_pqc2_1_sub(data)                    (0x08000000&((data)<<27))
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rme_pqc2_1_sub(data)                   (0x04000000&((data)<<26))
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rm_pqc2_1_sub(data)                    (0x03C00000&((data)<<22))
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_ls_pqc2_0_sub(data)                    (0x00200000&((data)<<21))
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rme_pqc2_0_sub(data)                   (0x00100000&((data)<<20))
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rm_pqc2_0_sub(data)                    (0x000F0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_ls_pqc2_1(data)                        (0x00000800&((data)<<11))
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rme_pqc2_1(data)                       (0x00000400&((data)<<10))
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rm_pqc2_1(data)                        (0x000003C0&((data)<<6))
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_ls_pqc2_0(data)                        (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rme_pqc2_0(data)                       (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_COMP_RM_dispm_rm_pqc2_0(data)                        (0x0000000F&(data))
#define  MDOMAIN_DISP_DISPM_COMP_RM_get_dispm_ls_pqc2_1_sub(data)                ((0x08000000&(data))>>27)
#define  MDOMAIN_DISP_DISPM_COMP_RM_get_dispm_rme_pqc2_1_sub(data)               ((0x04000000&(data))>>26)
#define  MDOMAIN_DISP_DISPM_COMP_RM_get_dispm_rm_pqc2_1_sub(data)                ((0x03C00000&(data))>>22)
#define  MDOMAIN_DISP_DISPM_COMP_RM_get_dispm_ls_pqc2_0_sub(data)                ((0x00200000&(data))>>21)
#define  MDOMAIN_DISP_DISPM_COMP_RM_get_dispm_rme_pqc2_0_sub(data)               ((0x00100000&(data))>>20)
#define  MDOMAIN_DISP_DISPM_COMP_RM_get_dispm_rm_pqc2_0_sub(data)                ((0x000F0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_COMP_RM_get_dispm_ls_pqc2_1(data)                    ((0x00000800&(data))>>11)
#define  MDOMAIN_DISP_DISPM_COMP_RM_get_dispm_rme_pqc2_1(data)                   ((0x00000400&(data))>>10)
#define  MDOMAIN_DISP_DISPM_COMP_RM_get_dispm_rm_pqc2_1(data)                    ((0x000003C0&(data))>>6)
#define  MDOMAIN_DISP_DISPM_COMP_RM_get_dispm_ls_pqc2_0(data)                    ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_COMP_RM_get_dispm_rme_pqc2_0(data)                   ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_COMP_RM_get_dispm_rm_pqc2_0(data)                    (0x0000000F&(data))

#define  MDOMAIN_DISP_DISPM_FSBUF_RM01                                          0x180274D8
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_reg_addr                                  "0xB80274D8"
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_reg                                       0xB80274D8
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_inst_addr                                 "0x004C"
#define  set_MDOMAIN_DISP_DISPM_FSBUF_RM01_reg(data)                             (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_FSBUF_RM01_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_FSBUF_RM01_reg                                   (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_FSBUF_RM01_reg))
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_ls_en1_shift                   (21)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_dvse1_shift                    (20)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_dvs1_shift                     (16)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_ls_en0_shift                   (5)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_dvse0_shift                    (4)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_dvs0_shift                     (0)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_ls_en1_mask                    (0x00200000)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_dvse1_mask                     (0x00100000)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_dvs1_mask                      (0x000F0000)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_ls_en0_mask                    (0x00000020)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_dvse0_mask                     (0x00000010)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_dvs0_mask                      (0x0000000F)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_ls_en1(data)                   (0x00200000&((data)<<21))
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_dvse1(data)                    (0x00100000&((data)<<20))
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_dvs1(data)                     (0x000F0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_ls_en0(data)                   (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_dvse0(data)                    (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_sdnr_fsbuf_dvs0(data)                     (0x0000000F&(data))
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_get_sdnr_fsbuf_ls_en1(data)               ((0x00200000&(data))>>21)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_get_sdnr_fsbuf_dvse1(data)                ((0x00100000&(data))>>20)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_get_sdnr_fsbuf_dvs1(data)                 ((0x000F0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_get_sdnr_fsbuf_ls_en0(data)               ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_get_sdnr_fsbuf_dvse0(data)                ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM01_get_sdnr_fsbuf_dvs0(data)                 (0x0000000F&(data))

#define  MDOMAIN_DISP_DISPM_FSBUF_RM23                                          0x180274DC
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_reg_addr                                  "0xB80274DC"
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_reg                                       0xB80274DC
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_inst_addr                                 "0x004D"
#define  set_MDOMAIN_DISP_DISPM_FSBUF_RM23_reg(data)                             (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_FSBUF_RM23_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_FSBUF_RM23_reg                                   (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_FSBUF_RM23_reg))
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_ls_en3_shift                   (21)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_dvse3_shift                    (20)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_dvs3_shift                     (16)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_ls_en2_shift                   (5)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_dvse2_shift                    (4)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_dvs2_shift                     (0)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_ls_en3_mask                    (0x00200000)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_dvse3_mask                     (0x00100000)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_dvs3_mask                      (0x000F0000)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_ls_en2_mask                    (0x00000020)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_dvse2_mask                     (0x00000010)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_dvs2_mask                      (0x0000000F)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_ls_en3(data)                   (0x00200000&((data)<<21))
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_dvse3(data)                    (0x00100000&((data)<<20))
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_dvs3(data)                     (0x000F0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_ls_en2(data)                   (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_dvse2(data)                    (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_sdnr_fsbuf_dvs2(data)                     (0x0000000F&(data))
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_get_sdnr_fsbuf_ls_en3(data)               ((0x00200000&(data))>>21)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_get_sdnr_fsbuf_dvse3(data)                ((0x00100000&(data))>>20)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_get_sdnr_fsbuf_dvs3(data)                 ((0x000F0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_get_sdnr_fsbuf_ls_en2(data)               ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_get_sdnr_fsbuf_dvse2(data)                ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_FSBUF_RM23_get_sdnr_fsbuf_dvs2(data)                 (0x0000000F&(data))

#define  MDOMAIN_DISP_DISP_DMA_rate_CTRL                                        0x180274F0
#define  MDOMAIN_DISP_DISP_DMA_rate_CTRL_reg_addr                                "0xB80274F0"
#define  MDOMAIN_DISP_DISP_DMA_rate_CTRL_reg                                     0xB80274F0
#define  MDOMAIN_DISP_DISP_DMA_rate_CTRL_inst_addr                               "0x004E"
#define  set_MDOMAIN_DISP_DISP_DMA_rate_CTRL_reg(data)                           (*((volatile unsigned int*)MDOMAIN_DISP_DISP_DMA_rate_CTRL_reg)=data)
#define  get_MDOMAIN_DISP_DISP_DMA_rate_CTRL_reg                                 (*((volatile unsigned int*)MDOMAIN_DISP_DISP_DMA_rate_CTRL_reg))
#define  MDOMAIN_DISP_DISP_DMA_rate_CTRL_main_rate_en_shift                      (0)
#define  MDOMAIN_DISP_DISP_DMA_rate_CTRL_main_rate_en_mask                       (0x00000001)
#define  MDOMAIN_DISP_DISP_DMA_rate_CTRL_main_rate_en(data)                      (0x00000001&(data))
#define  MDOMAIN_DISP_DISP_DMA_rate_CTRL_get_main_rate_en(data)                  (0x00000001&(data))

#define  MDOMAIN_DISP_Display_rate                                              0x180274F4
#define  MDOMAIN_DISP_Display_rate_reg_addr                                      "0xB80274F4"
#define  MDOMAIN_DISP_Display_rate_reg                                           0xB80274F4
#define  MDOMAIN_DISP_Display_rate_inst_addr                                     "0x004F"
#define  set_MDOMAIN_DISP_Display_rate_reg(data)                                 (*((volatile unsigned int*)MDOMAIN_DISP_Display_rate_reg)=data)
#define  get_MDOMAIN_DISP_Display_rate_reg                                       (*((volatile unsigned int*)MDOMAIN_DISP_Display_rate_reg))
#define  MDOMAIN_DISP_Display_rate_main_rate_shift                               (0)
#define  MDOMAIN_DISP_Display_rate_main_rate_mask                                (0xFFFFFFFF)
#define  MDOMAIN_DISP_Display_rate_main_rate(data)                               (0xFFFFFFFF&(data))
#define  MDOMAIN_DISP_Display_rate_get_main_rate(data)                           (0xFFFFFFFF&(data))

#define  MDOMAIN_DISP_Display_byte_channel_swap                                 0x180274F8
#define  MDOMAIN_DISP_Display_byte_channel_swap_reg_addr                         "0xB80274F8"
#define  MDOMAIN_DISP_Display_byte_channel_swap_reg                              0xB80274F8
#define  MDOMAIN_DISP_Display_byte_channel_swap_inst_addr                        "0x0050"
#define  set_MDOMAIN_DISP_Display_byte_channel_swap_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_Display_byte_channel_swap_reg)=data)
#define  get_MDOMAIN_DISP_Display_byte_channel_swap_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_Display_byte_channel_swap_reg))
#define  MDOMAIN_DISP_Display_byte_channel_swap_main_channel_swap_shift          (4)
#define  MDOMAIN_DISP_Display_byte_channel_swap_main_8byte_swap_shift            (3)
#define  MDOMAIN_DISP_Display_byte_channel_swap_main_4byte_swap_shift            (2)
#define  MDOMAIN_DISP_Display_byte_channel_swap_main_2byte_swap_shift            (1)
#define  MDOMAIN_DISP_Display_byte_channel_swap_main_1byte_swap_shift            (0)
#define  MDOMAIN_DISP_Display_byte_channel_swap_main_channel_swap_mask           (0x00000070)
#define  MDOMAIN_DISP_Display_byte_channel_swap_main_8byte_swap_mask             (0x00000008)
#define  MDOMAIN_DISP_Display_byte_channel_swap_main_4byte_swap_mask             (0x00000004)
#define  MDOMAIN_DISP_Display_byte_channel_swap_main_2byte_swap_mask             (0x00000002)
#define  MDOMAIN_DISP_Display_byte_channel_swap_main_1byte_swap_mask             (0x00000001)
#define  MDOMAIN_DISP_Display_byte_channel_swap_main_channel_swap(data)          (0x00000070&((data)<<4))
#define  MDOMAIN_DISP_Display_byte_channel_swap_main_8byte_swap(data)            (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_Display_byte_channel_swap_main_4byte_swap(data)            (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_Display_byte_channel_swap_main_2byte_swap(data)            (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_Display_byte_channel_swap_main_1byte_swap(data)            (0x00000001&(data))
#define  MDOMAIN_DISP_Display_byte_channel_swap_get_main_channel_swap(data)      ((0x00000070&(data))>>4)
#define  MDOMAIN_DISP_Display_byte_channel_swap_get_main_8byte_swap(data)        ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_Display_byte_channel_swap_get_main_4byte_swap(data)        ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_Display_byte_channel_swap_get_main_2byte_swap(data)        ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_Display_byte_channel_swap_get_main_1byte_swap(data)        (0x00000001&(data))

#define  MDOMAIN_DISP_Display_sub_byte_channel_swap                             0x180274FC
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_reg_addr                     "0xB80274FC"
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_reg                          0xB80274FC
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_inst_addr                    "0x0051"
#define  set_MDOMAIN_DISP_Display_sub_byte_channel_swap_reg(data)                (*((volatile unsigned int*)MDOMAIN_DISP_Display_sub_byte_channel_swap_reg)=data)
#define  get_MDOMAIN_DISP_Display_sub_byte_channel_swap_reg                      (*((volatile unsigned int*)MDOMAIN_DISP_Display_sub_byte_channel_swap_reg))
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_sub_channel_swap_shift       (4)
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_sub_8byte_swap_shift         (3)
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_sub_4byte_swap_shift         (2)
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_sub_2byte_swap_shift         (1)
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_sub_1byte_swap_shift         (0)
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_sub_channel_swap_mask        (0x00000070)
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_sub_8byte_swap_mask          (0x00000008)
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_sub_4byte_swap_mask          (0x00000004)
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_sub_2byte_swap_mask          (0x00000002)
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_sub_1byte_swap_mask          (0x00000001)
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_sub_channel_swap(data)       (0x00000070&((data)<<4))
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_sub_8byte_swap(data)         (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_sub_4byte_swap(data)         (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_sub_2byte_swap(data)         (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_sub_1byte_swap(data)         (0x00000001&(data))
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_get_sub_channel_swap(data)   ((0x00000070&(data))>>4)
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_get_sub_8byte_swap(data)     ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_get_sub_4byte_swap(data)     ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_get_sub_2byte_swap(data)     ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_Display_sub_byte_channel_swap_get_sub_1byte_swap(data)     (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_CTRL                                   0x18027500
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_CTRL_reg_addr                           "0xB8027500"
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_CTRL_reg                                0xB8027500
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_CTRL_inst_addr                          "0x0052"
#define  set_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_CTRL_reg(data)                      (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_CTRL_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_CTRL_reg                            (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_CTRL_reg))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_CTRL_dispm_ddr_checksum_en_shift        (31)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_CTRL_dispm_ddr_error_count_shift        (0)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_CTRL_dispm_ddr_checksum_en_mask         (0x80000000)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_CTRL_dispm_ddr_error_count_mask         (0x00FFFFFF)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_CTRL_dispm_ddr_checksum_en(data)        (0x80000000&((data)<<31))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_CTRL_dispm_ddr_error_count(data)        (0x00FFFFFF&(data))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_CTRL_get_dispm_ddr_checksum_en(data)    ((0x80000000&(data))>>31)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_CTRL_get_dispm_ddr_error_count(data)    (0x00FFFFFF&(data))

#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_0                                 0x18027504
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_0_reg_addr                         "0xB8027504"
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_0_reg                              0xB8027504
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_0_inst_addr                        "0x0053"
#define  set_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_0_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_0_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_0_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_0_reg))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_0_dispm_ddr_error_flag_127_96_shift (0)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_0_dispm_ddr_error_flag_127_96_mask (0xFFFFFFFF)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_0_dispm_ddr_error_flag_127_96(data) (0xFFFFFFFF&(data))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_0_get_dispm_ddr_error_flag_127_96(data) (0xFFFFFFFF&(data))

#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_1                                 0x18027508
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_1_reg_addr                         "0xB8027508"
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_1_reg                              0xB8027508
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_1_inst_addr                        "0x0054"
#define  set_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_1_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_1_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_1_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_1_reg))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_1_dispm_ddr_error_flag_95_64_shift (0)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_1_dispm_ddr_error_flag_95_64_mask  (0xFFFFFFFF)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_1_dispm_ddr_error_flag_95_64(data) (0xFFFFFFFF&(data))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_1_get_dispm_ddr_error_flag_95_64(data) (0xFFFFFFFF&(data))

#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_2                                 0x1802750C
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_2_reg_addr                         "0xB802750C"
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_2_reg                              0xB802750C
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_2_inst_addr                        "0x0055"
#define  set_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_2_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_2_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_2_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_2_reg))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_2_dispm_ddr_error_flag_63_32_shift (0)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_2_dispm_ddr_error_flag_63_32_mask  (0xFFFFFFFF)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_2_dispm_ddr_error_flag_63_32(data) (0xFFFFFFFF&(data))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_2_get_dispm_ddr_error_flag_63_32(data) (0xFFFFFFFF&(data))

#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_3                                 0x18027510
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_3_reg_addr                         "0xB8027510"
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_3_reg                              0xB8027510
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_3_inst_addr                        "0x0056"
#define  set_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_3_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_3_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_3_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_3_reg))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_3_dispm_ddr_error_flag_31_0_shift  (0)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_3_dispm_ddr_error_flag_31_0_mask   (0xFFFFFFFF)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_3_dispm_ddr_error_flag_31_0(data)  (0xFFFFFFFF&(data))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_FLAG_3_get_dispm_ddr_error_flag_31_0(data) (0xFFFFFFFF&(data))

#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_0                                 0x18027514
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_0_reg_addr                         "0xB8027514"
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_0_reg                              0xB8027514
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_0_inst_addr                        "0x0057"
#define  set_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_0_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_0_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_0_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_0_reg))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_0_dispm_ddr_error_mask_127_96_shift (0)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_0_dispm_ddr_error_mask_127_96_mask (0xFFFFFFFF)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_0_dispm_ddr_error_mask_127_96(data) (0xFFFFFFFF&(data))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_0_get_dispm_ddr_error_mask_127_96(data) (0xFFFFFFFF&(data))

#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_1                                 0x18027518
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_1_reg_addr                         "0xB8027518"
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_1_reg                              0xB8027518
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_1_inst_addr                        "0x0058"
#define  set_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_1_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_1_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_1_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_1_reg))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_1_dispm_ddr_error_mask_95_64_shift (0)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_1_dispm_ddr_error_mask_95_64_mask  (0xFFFFFFFF)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_1_dispm_ddr_error_mask_95_64(data) (0xFFFFFFFF&(data))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_1_get_dispm_ddr_error_mask_95_64(data) (0xFFFFFFFF&(data))

#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_2                                 0x1802751C
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_2_reg_addr                         "0xB802751C"
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_2_reg                              0xB802751C
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_2_inst_addr                        "0x0059"
#define  set_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_2_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_2_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_2_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_2_reg))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_2_dispm_ddr_error_mask_63_32_shift (0)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_2_dispm_ddr_error_mask_63_32_mask  (0xFFFFFFFF)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_2_dispm_ddr_error_mask_63_32(data) (0xFFFFFFFF&(data))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_2_get_dispm_ddr_error_mask_63_32(data) (0xFFFFFFFF&(data))

#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_3                                 0x18027520
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_3_reg_addr                         "0xB8027520"
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_3_reg                              0xB8027520
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_3_inst_addr                        "0x005A"
#define  set_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_3_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_3_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_3_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_3_reg))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_3_dispm_ddr_error_mask_31_0_shift  (0)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_3_dispm_ddr_error_mask_31_0_mask   (0xFFFFFFFF)
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_3_dispm_ddr_error_mask_31_0(data)  (0xFFFFFFFF&(data))
#define  MDOMAIN_DISP_DISPM_DDR_CHECKSUM_MASK_3_get_dispm_ddr_error_mask_31_0(data) (0xFFFFFFFF&(data))

#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL                                   0x18027530
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_reg_addr                           "0xB8027530"
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_reg                                0xB8027530
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_inst_addr                          "0x005B"
#define  set_MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_reg(data)                      (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_reg                            (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_reg))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc1_bist_fail_0_sub_shift (29)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_12_sub_shift (28)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_11_sub_shift (27)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_10_sub_shift (26)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_9_sub_shift (25)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_8_sub_shift (24)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_7_sub_shift (23)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_6_sub_shift (22)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_5_sub_shift (21)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_4_sub_shift (20)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_3_sub_shift (19)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_2_sub_shift (18)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_1_sub_shift (17)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_0_sub_shift (16)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_12_shift  (12)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_11_shift  (11)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_10_shift  (10)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_9_shift   (9)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_8_shift   (8)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_7_shift   (7)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_6_shift   (6)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_5_shift   (5)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_4_shift   (4)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_3_shift   (3)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_2_shift   (2)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_1_shift   (1)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_0_shift   (0)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc1_bist_fail_0_sub_mask (0x20000000)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_12_sub_mask (0x10000000)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_11_sub_mask (0x08000000)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_10_sub_mask (0x04000000)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_9_sub_mask (0x02000000)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_8_sub_mask (0x01000000)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_7_sub_mask (0x00800000)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_6_sub_mask (0x00400000)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_5_sub_mask (0x00200000)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_4_sub_mask (0x00100000)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_3_sub_mask (0x00080000)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_2_sub_mask (0x00040000)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_1_sub_mask (0x00020000)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_0_sub_mask (0x00010000)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_12_mask   (0x00001000)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_11_mask   (0x00000800)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_10_mask   (0x00000400)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_9_mask    (0x00000200)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_8_mask    (0x00000100)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_7_mask    (0x00000080)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_6_mask    (0x00000040)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_5_mask    (0x00000020)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_4_mask    (0x00000010)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_3_mask    (0x00000008)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_2_mask    (0x00000004)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_1_mask    (0x00000002)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_0_mask    (0x00000001)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc1_bist_fail_0_sub(data) (0x20000000&((data)<<29))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_12_sub(data) (0x10000000&((data)<<28))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_11_sub(data) (0x08000000&((data)<<27))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_10_sub(data) (0x04000000&((data)<<26))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_9_sub(data) (0x02000000&((data)<<25))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_8_sub(data) (0x01000000&((data)<<24))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_7_sub(data) (0x00800000&((data)<<23))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_6_sub(data) (0x00400000&((data)<<22))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_5_sub(data) (0x00200000&((data)<<21))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_4_sub(data) (0x00100000&((data)<<20))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_3_sub(data) (0x00080000&((data)<<19))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_2_sub(data) (0x00040000&((data)<<18))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_1_sub(data) (0x00020000&((data)<<17))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_0_sub(data) (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_12(data)  (0x00001000&((data)<<12))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_11(data)  (0x00000800&((data)<<11))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_10(data)  (0x00000400&((data)<<10))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_9(data)   (0x00000200&((data)<<9))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_8(data)   (0x00000100&((data)<<8))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_7(data)   (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_6(data)   (0x00000040&((data)<<6))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_5(data)   (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_4(data)   (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_3(data)   (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_2(data)   (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_1(data)   (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_dispm_pqc_pqc2_bist_fail_0(data)   (0x00000001&(data))
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc1_bist_fail_0_sub(data) ((0x20000000&(data))>>29)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_12_sub(data) ((0x10000000&(data))>>28)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_11_sub(data) ((0x08000000&(data))>>27)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_10_sub(data) ((0x04000000&(data))>>26)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_9_sub(data) ((0x02000000&(data))>>25)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_8_sub(data) ((0x01000000&(data))>>24)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_7_sub(data) ((0x00800000&(data))>>23)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_6_sub(data) ((0x00400000&(data))>>22)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_5_sub(data) ((0x00200000&(data))>>21)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_4_sub(data) ((0x00100000&(data))>>20)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_3_sub(data) ((0x00080000&(data))>>19)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_2_sub(data) ((0x00040000&(data))>>18)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_1_sub(data) ((0x00020000&(data))>>17)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_0_sub(data) ((0x00010000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_12(data) ((0x00001000&(data))>>12)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_11(data) ((0x00000800&(data))>>11)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_10(data) ((0x00000400&(data))>>10)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_9(data) ((0x00000200&(data))>>9)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_8(data) ((0x00000100&(data))>>8)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_7(data) ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_6(data) ((0x00000040&(data))>>6)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_5(data) ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_4(data) ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_3(data) ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_2(data) ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_1(data) ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DISPM_PQC_BIST_CAP_FAIL_get_dispm_pqc_pqc2_bist_fail_0(data) (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL                                    0x18027534
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_reg_addr                            "0xB8027534"
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_reg                                 0xB8027534
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_inst_addr                           "0x005C"
#define  set_MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_reg(data)                       (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_reg                             (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_reg))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc1_drf_fail_0_sub_shift (29)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_12_sub_shift (28)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_11_sub_shift (27)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_10_sub_shift (26)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_9_sub_shift (25)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_8_sub_shift (24)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_7_sub_shift (23)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_6_sub_shift (22)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_5_sub_shift (21)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_4_sub_shift (20)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_3_sub_shift (19)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_2_sub_shift (18)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_1_sub_shift (17)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_0_sub_shift (16)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_12_shift    (12)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_11_shift    (11)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_10_shift    (10)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_9_shift     (9)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_8_shift     (8)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_7_shift     (7)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_6_shift     (6)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_5_shift     (5)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_4_shift     (4)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_3_shift     (3)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_2_shift     (2)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_1_shift     (1)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_0_shift     (0)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc1_drf_fail_0_sub_mask  (0x20000000)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_12_sub_mask (0x10000000)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_11_sub_mask (0x08000000)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_10_sub_mask (0x04000000)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_9_sub_mask  (0x02000000)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_8_sub_mask  (0x01000000)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_7_sub_mask  (0x00800000)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_6_sub_mask  (0x00400000)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_5_sub_mask  (0x00200000)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_4_sub_mask  (0x00100000)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_3_sub_mask  (0x00080000)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_2_sub_mask  (0x00040000)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_1_sub_mask  (0x00020000)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_0_sub_mask  (0x00010000)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_12_mask     (0x00001000)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_11_mask     (0x00000800)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_10_mask     (0x00000400)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_9_mask      (0x00000200)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_8_mask      (0x00000100)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_7_mask      (0x00000080)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_6_mask      (0x00000040)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_5_mask      (0x00000020)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_4_mask      (0x00000010)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_3_mask      (0x00000008)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_2_mask      (0x00000004)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_1_mask      (0x00000002)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_0_mask      (0x00000001)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc1_drf_fail_0_sub(data) (0x20000000&((data)<<29))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_12_sub(data) (0x10000000&((data)<<28))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_11_sub(data) (0x08000000&((data)<<27))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_10_sub(data) (0x04000000&((data)<<26))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_9_sub(data) (0x02000000&((data)<<25))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_8_sub(data) (0x01000000&((data)<<24))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_7_sub(data) (0x00800000&((data)<<23))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_6_sub(data) (0x00400000&((data)<<22))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_5_sub(data) (0x00200000&((data)<<21))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_4_sub(data) (0x00100000&((data)<<20))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_3_sub(data) (0x00080000&((data)<<19))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_2_sub(data) (0x00040000&((data)<<18))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_1_sub(data) (0x00020000&((data)<<17))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_0_sub(data) (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_12(data)    (0x00001000&((data)<<12))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_11(data)    (0x00000800&((data)<<11))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_10(data)    (0x00000400&((data)<<10))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_9(data)     (0x00000200&((data)<<9))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_8(data)     (0x00000100&((data)<<8))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_7(data)     (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_6(data)     (0x00000040&((data)<<6))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_5(data)     (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_4(data)     (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_3(data)     (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_2(data)     (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_1(data)     (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_dispm_pqc_pqc2_drf_fail_0(data)     (0x00000001&(data))
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc1_drf_fail_0_sub(data) ((0x20000000&(data))>>29)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_12_sub(data) ((0x10000000&(data))>>28)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_11_sub(data) ((0x08000000&(data))>>27)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_10_sub(data) ((0x04000000&(data))>>26)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_9_sub(data) ((0x02000000&(data))>>25)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_8_sub(data) ((0x01000000&(data))>>24)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_7_sub(data) ((0x00800000&(data))>>23)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_6_sub(data) ((0x00400000&(data))>>22)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_5_sub(data) ((0x00200000&(data))>>21)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_4_sub(data) ((0x00100000&(data))>>20)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_3_sub(data) ((0x00080000&(data))>>19)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_2_sub(data) ((0x00040000&(data))>>18)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_1_sub(data) ((0x00020000&(data))>>17)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_0_sub(data) ((0x00010000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_12(data) ((0x00001000&(data))>>12)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_11(data) ((0x00000800&(data))>>11)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_10(data) ((0x00000400&(data))>>10)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_9(data) ((0x00000200&(data))>>9)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_8(data) ((0x00000100&(data))>>8)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_7(data) ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_6(data) ((0x00000040&(data))>>6)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_5(data) ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_4(data) ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_3(data) ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_2(data) ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_1(data) ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DISPM_PQC_DRF_CAP_FAIL_get_dispm_pqc_pqc2_drf_fail_0(data) (0x00000001&(data))

#define  MDOMAIN_DISP_main_forth_buf_addr                                       0x18027560
#define  MDOMAIN_DISP_main_forth_buf_addr_reg_addr                               "0xB8027560"
#define  MDOMAIN_DISP_main_forth_buf_addr_reg                                    0xB8027560
#define  MDOMAIN_DISP_main_forth_buf_addr_inst_addr                              "0x005D"
#define  set_MDOMAIN_DISP_main_forth_buf_addr_reg(data)                          (*((volatile unsigned int*)MDOMAIN_DISP_main_forth_buf_addr_reg)=data)
#define  get_MDOMAIN_DISP_main_forth_buf_addr_reg                                (*((volatile unsigned int*)MDOMAIN_DISP_main_forth_buf_addr_reg))
#define  MDOMAIN_DISP_main_forth_buf_addr_main_forth_block_shift                 (3)
#define  MDOMAIN_DISP_main_forth_buf_addr_main_forth_block_mask                  (0xFFFFFFF8)
#define  MDOMAIN_DISP_main_forth_buf_addr_main_forth_block(data)                 (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_main_forth_buf_addr_get_main_forth_block(data)             ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_main_fifth_buf_addr                                       0x18027564
#define  MDOMAIN_DISP_main_fifth_buf_addr_reg_addr                               "0xB8027564"
#define  MDOMAIN_DISP_main_fifth_buf_addr_reg                                    0xB8027564
#define  MDOMAIN_DISP_main_fifth_buf_addr_inst_addr                              "0x005E"
#define  set_MDOMAIN_DISP_main_fifth_buf_addr_reg(data)                          (*((volatile unsigned int*)MDOMAIN_DISP_main_fifth_buf_addr_reg)=data)
#define  get_MDOMAIN_DISP_main_fifth_buf_addr_reg                                (*((volatile unsigned int*)MDOMAIN_DISP_main_fifth_buf_addr_reg))
#define  MDOMAIN_DISP_main_fifth_buf_addr_main_fifth_block_shift                 (3)
#define  MDOMAIN_DISP_main_fifth_buf_addr_main_fifth_block_mask                  (0xFFFFFFF8)
#define  MDOMAIN_DISP_main_fifth_buf_addr_main_fifth_block(data)                 (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_main_fifth_buf_addr_get_main_fifth_block(data)             ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_main_sixth_buf_addr                                       0x18027568
#define  MDOMAIN_DISP_main_sixth_buf_addr_reg_addr                               "0xB8027568"
#define  MDOMAIN_DISP_main_sixth_buf_addr_reg                                    0xB8027568
#define  MDOMAIN_DISP_main_sixth_buf_addr_inst_addr                              "0x005F"
#define  set_MDOMAIN_DISP_main_sixth_buf_addr_reg(data)                          (*((volatile unsigned int*)MDOMAIN_DISP_main_sixth_buf_addr_reg)=data)
#define  get_MDOMAIN_DISP_main_sixth_buf_addr_reg                                (*((volatile unsigned int*)MDOMAIN_DISP_main_sixth_buf_addr_reg))
#define  MDOMAIN_DISP_main_sixth_buf_addr_main_sixth_block_shift                 (3)
#define  MDOMAIN_DISP_main_sixth_buf_addr_main_sixth_block_mask                  (0xFFFFFFF8)
#define  MDOMAIN_DISP_main_sixth_buf_addr_main_sixth_block(data)                 (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_main_sixth_buf_addr_get_main_sixth_block(data)             ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_main_seventh_buf_addr                                     0x1802756C
#define  MDOMAIN_DISP_main_seventh_buf_addr_reg_addr                             "0xB802756C"
#define  MDOMAIN_DISP_main_seventh_buf_addr_reg                                  0xB802756C
#define  MDOMAIN_DISP_main_seventh_buf_addr_inst_addr                            "0x0060"
#define  set_MDOMAIN_DISP_main_seventh_buf_addr_reg(data)                        (*((volatile unsigned int*)MDOMAIN_DISP_main_seventh_buf_addr_reg)=data)
#define  get_MDOMAIN_DISP_main_seventh_buf_addr_reg                              (*((volatile unsigned int*)MDOMAIN_DISP_main_seventh_buf_addr_reg))
#define  MDOMAIN_DISP_main_seventh_buf_addr_main_seventh_block_shift             (3)
#define  MDOMAIN_DISP_main_seventh_buf_addr_main_seventh_block_mask              (0xFFFFFFF8)
#define  MDOMAIN_DISP_main_seventh_buf_addr_main_seventh_block(data)             (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_main_seventh_buf_addr_get_main_seventh_block(data)         ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_main_eightth_buf_addr                                     0x18027570
#define  MDOMAIN_DISP_main_eightth_buf_addr_reg_addr                             "0xB8027570"
#define  MDOMAIN_DISP_main_eightth_buf_addr_reg                                  0xB8027570
#define  MDOMAIN_DISP_main_eightth_buf_addr_inst_addr                            "0x0061"
#define  set_MDOMAIN_DISP_main_eightth_buf_addr_reg(data)                        (*((volatile unsigned int*)MDOMAIN_DISP_main_eightth_buf_addr_reg)=data)
#define  get_MDOMAIN_DISP_main_eightth_buf_addr_reg                              (*((volatile unsigned int*)MDOMAIN_DISP_main_eightth_buf_addr_reg))
#define  MDOMAIN_DISP_main_eightth_buf_addr_main_eightth_block_shift             (3)
#define  MDOMAIN_DISP_main_eightth_buf_addr_main_eightth_block_mask              (0xFFFFFFF8)
#define  MDOMAIN_DISP_main_eightth_buf_addr_main_eightth_block(data)             (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_main_eightth_buf_addr_get_main_eightth_block(data)         ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_main_r_forth_buf_addr                                     0x18027580
#define  MDOMAIN_DISP_main_r_forth_buf_addr_reg_addr                             "0xB8027580"
#define  MDOMAIN_DISP_main_r_forth_buf_addr_reg                                  0xB8027580
#define  MDOMAIN_DISP_main_r_forth_buf_addr_inst_addr                            "0x0062"
#define  set_MDOMAIN_DISP_main_r_forth_buf_addr_reg(data)                        (*((volatile unsigned int*)MDOMAIN_DISP_main_r_forth_buf_addr_reg)=data)
#define  get_MDOMAIN_DISP_main_r_forth_buf_addr_reg                              (*((volatile unsigned int*)MDOMAIN_DISP_main_r_forth_buf_addr_reg))
#define  MDOMAIN_DISP_main_r_forth_buf_addr_main_r_forth_addr_shift              (3)
#define  MDOMAIN_DISP_main_r_forth_buf_addr_main_r_forth_addr_mask               (0xFFFFFFF8)
#define  MDOMAIN_DISP_main_r_forth_buf_addr_main_r_forth_addr(data)              (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_main_r_forth_buf_addr_get_main_r_forth_addr(data)          ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_main_r_fifth_buf_addr                                     0x18027584
#define  MDOMAIN_DISP_main_r_fifth_buf_addr_reg_addr                             "0xB8027584"
#define  MDOMAIN_DISP_main_r_fifth_buf_addr_reg                                  0xB8027584
#define  MDOMAIN_DISP_main_r_fifth_buf_addr_inst_addr                            "0x0063"
#define  set_MDOMAIN_DISP_main_r_fifth_buf_addr_reg(data)                        (*((volatile unsigned int*)MDOMAIN_DISP_main_r_fifth_buf_addr_reg)=data)
#define  get_MDOMAIN_DISP_main_r_fifth_buf_addr_reg                              (*((volatile unsigned int*)MDOMAIN_DISP_main_r_fifth_buf_addr_reg))
#define  MDOMAIN_DISP_main_r_fifth_buf_addr_main_r_fifth_addr_shift              (3)
#define  MDOMAIN_DISP_main_r_fifth_buf_addr_main_r_fifth_addr_mask               (0xFFFFFFF8)
#define  MDOMAIN_DISP_main_r_fifth_buf_addr_main_r_fifth_addr(data)              (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_main_r_fifth_buf_addr_get_main_r_fifth_addr(data)          ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_main_r_sixth_buf_addr                                     0x18027588
#define  MDOMAIN_DISP_main_r_sixth_buf_addr_reg_addr                             "0xB8027588"
#define  MDOMAIN_DISP_main_r_sixth_buf_addr_reg                                  0xB8027588
#define  MDOMAIN_DISP_main_r_sixth_buf_addr_inst_addr                            "0x0064"
#define  set_MDOMAIN_DISP_main_r_sixth_buf_addr_reg(data)                        (*((volatile unsigned int*)MDOMAIN_DISP_main_r_sixth_buf_addr_reg)=data)
#define  get_MDOMAIN_DISP_main_r_sixth_buf_addr_reg                              (*((volatile unsigned int*)MDOMAIN_DISP_main_r_sixth_buf_addr_reg))
#define  MDOMAIN_DISP_main_r_sixth_buf_addr_main_r_sixth_addr_shift              (3)
#define  MDOMAIN_DISP_main_r_sixth_buf_addr_main_r_sixth_addr_mask               (0xFFFFFFF8)
#define  MDOMAIN_DISP_main_r_sixth_buf_addr_main_r_sixth_addr(data)              (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_main_r_sixth_buf_addr_get_main_r_sixth_addr(data)          ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_main_r_seventh_buf_addr                                   0x1802758C
#define  MDOMAIN_DISP_main_r_seventh_buf_addr_reg_addr                           "0xB802758C"
#define  MDOMAIN_DISP_main_r_seventh_buf_addr_reg                                0xB802758C
#define  MDOMAIN_DISP_main_r_seventh_buf_addr_inst_addr                          "0x0065"
#define  set_MDOMAIN_DISP_main_r_seventh_buf_addr_reg(data)                      (*((volatile unsigned int*)MDOMAIN_DISP_main_r_seventh_buf_addr_reg)=data)
#define  get_MDOMAIN_DISP_main_r_seventh_buf_addr_reg                            (*((volatile unsigned int*)MDOMAIN_DISP_main_r_seventh_buf_addr_reg))
#define  MDOMAIN_DISP_main_r_seventh_buf_addr_main_r_seventh_addr_shift          (3)
#define  MDOMAIN_DISP_main_r_seventh_buf_addr_main_r_seventh_addr_mask           (0xFFFFFFF8)
#define  MDOMAIN_DISP_main_r_seventh_buf_addr_main_r_seventh_addr(data)          (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_main_r_seventh_buf_addr_get_main_r_seventh_addr(data)      ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_main_r_eightth_buf_addr                                   0x18027590
#define  MDOMAIN_DISP_main_r_eightth_buf_addr_reg_addr                           "0xB8027590"
#define  MDOMAIN_DISP_main_r_eightth_buf_addr_reg                                0xB8027590
#define  MDOMAIN_DISP_main_r_eightth_buf_addr_inst_addr                          "0x0066"
#define  set_MDOMAIN_DISP_main_r_eightth_buf_addr_reg(data)                      (*((volatile unsigned int*)MDOMAIN_DISP_main_r_eightth_buf_addr_reg)=data)
#define  get_MDOMAIN_DISP_main_r_eightth_buf_addr_reg                            (*((volatile unsigned int*)MDOMAIN_DISP_main_r_eightth_buf_addr_reg))
#define  MDOMAIN_DISP_main_r_eightth_buf_addr_main_r_eightth_addr_shift          (3)
#define  MDOMAIN_DISP_main_r_eightth_buf_addr_main_r_eightth_addr_mask           (0xFFFFFFF8)
#define  MDOMAIN_DISP_main_r_eightth_buf_addr_main_r_eightth_addr(data)          (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_main_r_eightth_buf_addr_get_main_r_eightth_addr(data)      ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_sub_forth_buf_addr                                        0x180275A0
#define  MDOMAIN_DISP_sub_forth_buf_addr_reg_addr                                "0xB80275A0"
#define  MDOMAIN_DISP_sub_forth_buf_addr_reg                                     0xB80275A0
#define  MDOMAIN_DISP_sub_forth_buf_addr_inst_addr                               "0x0067"
#define  set_MDOMAIN_DISP_sub_forth_buf_addr_reg(data)                           (*((volatile unsigned int*)MDOMAIN_DISP_sub_forth_buf_addr_reg)=data)
#define  get_MDOMAIN_DISP_sub_forth_buf_addr_reg                                 (*((volatile unsigned int*)MDOMAIN_DISP_sub_forth_buf_addr_reg))
#define  MDOMAIN_DISP_sub_forth_buf_addr_sub_forth_block_shift                   (3)
#define  MDOMAIN_DISP_sub_forth_buf_addr_sub_forth_block_mask                    (0xFFFFFFF8)
#define  MDOMAIN_DISP_sub_forth_buf_addr_sub_forth_block(data)                   (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_sub_forth_buf_addr_get_sub_forth_block(data)               ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_sub_fifth_buf_addr                                        0x180275A4
#define  MDOMAIN_DISP_sub_fifth_buf_addr_reg_addr                                "0xB80275A4"
#define  MDOMAIN_DISP_sub_fifth_buf_addr_reg                                     0xB80275A4
#define  MDOMAIN_DISP_sub_fifth_buf_addr_inst_addr                               "0x0068"
#define  set_MDOMAIN_DISP_sub_fifth_buf_addr_reg(data)                           (*((volatile unsigned int*)MDOMAIN_DISP_sub_fifth_buf_addr_reg)=data)
#define  get_MDOMAIN_DISP_sub_fifth_buf_addr_reg                                 (*((volatile unsigned int*)MDOMAIN_DISP_sub_fifth_buf_addr_reg))
#define  MDOMAIN_DISP_sub_fifth_buf_addr_sub_fifth_block_shift                   (3)
#define  MDOMAIN_DISP_sub_fifth_buf_addr_sub_fifth_block_mask                    (0xFFFFFFF8)
#define  MDOMAIN_DISP_sub_fifth_buf_addr_sub_fifth_block(data)                   (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_sub_fifth_buf_addr_get_sub_fifth_block(data)               ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_sub_sixth_buf_addr                                        0x180275A8
#define  MDOMAIN_DISP_sub_sixth_buf_addr_reg_addr                                "0xB80275A8"
#define  MDOMAIN_DISP_sub_sixth_buf_addr_reg                                     0xB80275A8
#define  MDOMAIN_DISP_sub_sixth_buf_addr_inst_addr                               "0x0069"
#define  set_MDOMAIN_DISP_sub_sixth_buf_addr_reg(data)                           (*((volatile unsigned int*)MDOMAIN_DISP_sub_sixth_buf_addr_reg)=data)
#define  get_MDOMAIN_DISP_sub_sixth_buf_addr_reg                                 (*((volatile unsigned int*)MDOMAIN_DISP_sub_sixth_buf_addr_reg))
#define  MDOMAIN_DISP_sub_sixth_buf_addr_sub_sixth_block_shift                   (3)
#define  MDOMAIN_DISP_sub_sixth_buf_addr_sub_sixth_block_mask                    (0xFFFFFFF8)
#define  MDOMAIN_DISP_sub_sixth_buf_addr_sub_sixth_block(data)                   (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_sub_sixth_buf_addr_get_sub_sixth_block(data)               ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_sub_seventh_buf_addr                                      0x180275AC
#define  MDOMAIN_DISP_sub_seventh_buf_addr_reg_addr                              "0xB80275AC"
#define  MDOMAIN_DISP_sub_seventh_buf_addr_reg                                   0xB80275AC
#define  MDOMAIN_DISP_sub_seventh_buf_addr_inst_addr                             "0x006A"
#define  set_MDOMAIN_DISP_sub_seventh_buf_addr_reg(data)                         (*((volatile unsigned int*)MDOMAIN_DISP_sub_seventh_buf_addr_reg)=data)
#define  get_MDOMAIN_DISP_sub_seventh_buf_addr_reg                               (*((volatile unsigned int*)MDOMAIN_DISP_sub_seventh_buf_addr_reg))
#define  MDOMAIN_DISP_sub_seventh_buf_addr_sub_seventh_block_shift               (3)
#define  MDOMAIN_DISP_sub_seventh_buf_addr_sub_seventh_block_mask                (0xFFFFFFF8)
#define  MDOMAIN_DISP_sub_seventh_buf_addr_sub_seventh_block(data)               (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_sub_seventh_buf_addr_get_sub_seventh_block(data)           ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_sub_eightth_buf_addr                                      0x180275B0
#define  MDOMAIN_DISP_sub_eightth_buf_addr_reg_addr                              "0xB80275B0"
#define  MDOMAIN_DISP_sub_eightth_buf_addr_reg                                   0xB80275B0
#define  MDOMAIN_DISP_sub_eightth_buf_addr_inst_addr                             "0x006B"
#define  set_MDOMAIN_DISP_sub_eightth_buf_addr_reg(data)                         (*((volatile unsigned int*)MDOMAIN_DISP_sub_eightth_buf_addr_reg)=data)
#define  get_MDOMAIN_DISP_sub_eightth_buf_addr_reg                               (*((volatile unsigned int*)MDOMAIN_DISP_sub_eightth_buf_addr_reg))
#define  MDOMAIN_DISP_sub_eightth_buf_addr_sub_eightth_block_shift               (3)
#define  MDOMAIN_DISP_sub_eightth_buf_addr_sub_eightth_block_mask                (0xFFFFFFF8)
#define  MDOMAIN_DISP_sub_eightth_buf_addr_sub_eightth_block(data)               (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_sub_eightth_buf_addr_get_sub_eightth_block(data)           ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DispMain_BoundaryAddr_CTRL                                0x18027540
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_CTRL_reg_addr                        "0xB8027540"
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_CTRL_reg                             0xB8027540
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_CTRL_inst_addr                       "0x006C"
#define  set_MDOMAIN_DISP_DispMain_BoundaryAddr_CTRL_reg(data)                   (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr_CTRL_reg)=data)
#define  get_MDOMAIN_DISP_DispMain_BoundaryAddr_CTRL_reg                         (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr_CTRL_reg))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_CTRL_main_disp_boundary_limit_mode_shift (0)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_CTRL_main_disp_boundary_limit_mode_mask (0x00000001)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_CTRL_main_disp_boundary_limit_mode(data) (0x00000001&(data))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_CTRL_get_main_disp_boundary_limit_mode(data) (0x00000001&(data))

#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK0                                0x18027544
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK0_reg_addr                        "0xB8027544"
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK0_reg                             0xB8027544
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK0_inst_addr                       "0x006D"
#define  set_MDOMAIN_DISP_DispMain_BoundaryAddr_BLK0_reg(data)                   (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr_BLK0_reg)=data)
#define  get_MDOMAIN_DISP_DispMain_BoundaryAddr_BLK0_reg                         (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr_BLK0_reg))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK0_main_disp_downlimit_blk0_adr_shift (3)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK0_main_disp_downlimit_blk0_adr_mask (0xFFFFFFF8)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK0_main_disp_downlimit_blk0_adr(data) (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK0_get_main_disp_downlimit_blk0_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK0                               0x18027548
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK0_reg_addr                       "0xB8027548"
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK0_reg                            0xB8027548
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK0_inst_addr                      "0x006E"
#define  set_MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK0_reg(data)                  (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK0_reg)=data)
#define  get_MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK0_reg                        (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK0_reg))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK0_main_disp_uplimit_blk0_adr_shift (3)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK0_main_disp_uplimit_blk0_adr_mask (0xFFFFFFF8)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK0_main_disp_uplimit_blk0_adr(data) (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK0_get_main_disp_uplimit_blk0_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK1                                0x1802754C
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK1_reg_addr                        "0xB802754C"
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK1_reg                             0xB802754C
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK1_inst_addr                       "0x006F"
#define  set_MDOMAIN_DISP_DispMain_BoundaryAddr_BLK1_reg(data)                   (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr_BLK1_reg)=data)
#define  get_MDOMAIN_DISP_DispMain_BoundaryAddr_BLK1_reg                         (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr_BLK1_reg))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK1_main_disp_downlimit_blk1_adr_shift (3)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK1_main_disp_downlimit_blk1_adr_mask (0xFFFFFFF8)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK1_main_disp_downlimit_blk1_adr(data) (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK1_get_main_disp_downlimit_blk1_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK1                               0x18027550
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK1_reg_addr                       "0xB8027550"
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK1_reg                            0xB8027550
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK1_inst_addr                      "0x0070"
#define  set_MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK1_reg(data)                  (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK1_reg)=data)
#define  get_MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK1_reg                        (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK1_reg))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK1_main_disp_uplimit_blk1_adr_shift (3)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK1_main_disp_uplimit_blk1_adr_mask (0xFFFFFFF8)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK1_main_disp_uplimit_blk1_adr(data) (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK1_get_main_disp_uplimit_blk1_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK2                                0x18027554
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK2_reg_addr                        "0xB8027554"
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK2_reg                             0xB8027554
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK2_inst_addr                       "0x0071"
#define  set_MDOMAIN_DISP_DispMain_BoundaryAddr_BLK2_reg(data)                   (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr_BLK2_reg)=data)
#define  get_MDOMAIN_DISP_DispMain_BoundaryAddr_BLK2_reg                         (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr_BLK2_reg))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK2_main_disp_downlimit_blk2_adr_shift (3)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK2_main_disp_downlimit_blk2_adr_mask (0xFFFFFFF8)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK2_main_disp_downlimit_blk2_adr(data) (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr_BLK2_get_main_disp_downlimit_blk2_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK2                               0x18027558
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK2_reg_addr                       "0xB8027558"
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK2_reg                            0xB8027558
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK2_inst_addr                      "0x0072"
#define  set_MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK2_reg(data)                  (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK2_reg)=data)
#define  get_MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK2_reg                        (*((volatile unsigned int*)MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK2_reg))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK2_main_disp_uplimit_blk2_adr_shift (3)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK2_main_disp_uplimit_blk2_adr_mask (0xFFFFFFF8)
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK2_main_disp_uplimit_blk2_adr(data) (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DispMain_BoundaryAddr2_BLK2_get_main_disp_uplimit_blk2_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DispSub_BoundaryAddr_CTRL                                 0x180275B4
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_CTRL_reg_addr                         "0xB80275B4"
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_CTRL_reg                              0xB80275B4
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_CTRL_inst_addr                        "0x0073"
#define  set_MDOMAIN_DISP_DispSub_BoundaryAddr_CTRL_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr_CTRL_reg)=data)
#define  get_MDOMAIN_DISP_DispSub_BoundaryAddr_CTRL_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr_CTRL_reg))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_CTRL_sub_disp_boundary_limit_mode_shift (0)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_CTRL_sub_disp_boundary_limit_mode_mask (0x00000001)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_CTRL_sub_disp_boundary_limit_mode(data) (0x00000001&(data))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_CTRL_get_sub_disp_boundary_limit_mode(data) (0x00000001&(data))

#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK0                                 0x180275B8
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK0_reg_addr                         "0xB80275B8"
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK0_reg                              0xB80275B8
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK0_inst_addr                        "0x0074"
#define  set_MDOMAIN_DISP_DispSub_BoundaryAddr_BLK0_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr_BLK0_reg)=data)
#define  get_MDOMAIN_DISP_DispSub_BoundaryAddr_BLK0_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr_BLK0_reg))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK0_sub_disp_downlimit_blk0_adr_shift (3)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK0_sub_disp_downlimit_blk0_adr_mask (0xFFFFFFF8)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK0_sub_disp_downlimit_blk0_adr(data) (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK0_get_sub_disp_downlimit_blk0_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK0                                0x180275BC
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK0_reg_addr                        "0xB80275BC"
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK0_reg                             0xB80275BC
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK0_inst_addr                       "0x0075"
#define  set_MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK0_reg(data)                   (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK0_reg)=data)
#define  get_MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK0_reg                         (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK0_reg))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK0_sub_disp_uplimit_blk0_adr_shift (3)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK0_sub_disp_uplimit_blk0_adr_mask  (0xFFFFFFF8)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK0_sub_disp_uplimit_blk0_adr(data) (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK0_get_sub_disp_uplimit_blk0_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK1                                 0x180275C0
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK1_reg_addr                         "0xB80275C0"
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK1_reg                              0xB80275C0
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK1_inst_addr                        "0x0076"
#define  set_MDOMAIN_DISP_DispSub_BoundaryAddr_BLK1_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr_BLK1_reg)=data)
#define  get_MDOMAIN_DISP_DispSub_BoundaryAddr_BLK1_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr_BLK1_reg))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK1_sub_disp_downlimit_blk1_adr_shift (3)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK1_sub_disp_downlimit_blk1_adr_mask (0xFFFFFFF8)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK1_sub_disp_downlimit_blk1_adr(data) (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK1_get_sub_disp_downlimit_blk1_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK1                                0x180275C4
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK1_reg_addr                        "0xB80275C4"
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK1_reg                             0xB80275C4
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK1_inst_addr                       "0x0077"
#define  set_MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK1_reg(data)                   (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK1_reg)=data)
#define  get_MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK1_reg                         (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK1_reg))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK1_sub_disp_uplimit_blk1_adr_shift (3)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK1_sub_disp_uplimit_blk1_adr_mask  (0xFFFFFFF8)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK1_sub_disp_uplimit_blk1_adr(data) (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK1_get_sub_disp_uplimit_blk1_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK2                                 0x180275C8
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK2_reg_addr                         "0xB80275C8"
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK2_reg                              0xB80275C8
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK2_inst_addr                        "0x0078"
#define  set_MDOMAIN_DISP_DispSub_BoundaryAddr_BLK2_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr_BLK2_reg)=data)
#define  get_MDOMAIN_DISP_DispSub_BoundaryAddr_BLK2_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr_BLK2_reg))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK2_sub_disp_downlimit_blk2_adr_shift (3)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK2_sub_disp_downlimit_blk2_adr_mask (0xFFFFFFF8)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK2_sub_disp_downlimit_blk2_adr(data) (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr_BLK2_get_sub_disp_downlimit_blk2_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK2                                0x180275CC
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK2_reg_addr                        "0xB80275CC"
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK2_reg                             0xB80275CC
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK2_inst_addr                       "0x0079"
#define  set_MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK2_reg(data)                   (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK2_reg)=data)
#define  get_MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK2_reg                         (*((volatile unsigned int*)MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK2_reg))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK2_sub_disp_uplimit_blk2_adr_shift (3)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK2_sub_disp_uplimit_blk2_adr_mask  (0xFFFFFFF8)
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK2_sub_disp_uplimit_blk2_adr(data) (0xFFFFFFF8&((data)<<3))
#define  MDOMAIN_DISP_DispSub_BoundaryAddr2_BLK2_get_sub_disp_uplimit_blk2_adr(data) ((0xFFFFFFF8&(data))>>3)

#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP                                       0x18027600
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_reg_addr                               "0xB8027600"
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_reg                                    0xB8027600
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_inst_addr                              "0x007A"
#define  set_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_reg(data)                          (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_reg                                (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_reg))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_decmp_en_shift                         (31)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_decmp_width_div32_shift                (16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_decmp_height_shift                     (0)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_decmp_en_mask                          (0x80000000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_decmp_width_div32_mask                 (0x01FF0000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_decmp_height_mask                      (0x00003FFF)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_decmp_en(data)                         (0x80000000&((data)<<31))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_decmp_width_div32(data)                (0x01FF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_decmp_height(data)                     (0x00003FFF&(data))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_get_decmp_en(data)                     ((0x80000000&(data))>>31)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_get_decmp_width_div32(data)            ((0x01FF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_get_decmp_height(data)                 (0x00003FFF&(data))

#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR                                  0x18027604
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_reg_addr                          "0xB8027604"
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_reg                               0xB8027604
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_inst_addr                         "0x007B"
#define  set_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_reg(data)                     (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_reg                           (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_reg))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_line_sum_bit_shift          (16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_400_old_mode_en_shift       (15)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_dummy_14_11_shift                 (11)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_jump4_en_shift              (10)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_qp_mode_shift               (8)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_dic_mode_en_shift           (7)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_two_line_prediction_en_shift (6)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_line_mode_shift             (5)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_data_color_shift            (4)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_data_bit_width_shift        (2)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_data_format_shift           (0)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_line_sum_bit_mask           (0xFFFF0000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_400_old_mode_en_mask        (0x00008000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_dummy_14_11_mask                  (0x00007800)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_jump4_en_mask               (0x00000400)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_qp_mode_mask                (0x00000300)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_dic_mode_en_mask            (0x00000080)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_two_line_prediction_en_mask (0x00000040)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_line_mode_mask              (0x00000020)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_data_color_mask             (0x00000010)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_data_bit_width_mask         (0x0000000C)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_data_format_mask            (0x00000003)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_line_sum_bit(data)          (0xFFFF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_400_old_mode_en(data)       (0x00008000&((data)<<15))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_dummy_14_11(data)                 (0x00007800&((data)<<11))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_jump4_en(data)              (0x00000400&((data)<<10))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_qp_mode(data)               (0x00000300&((data)<<8))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_dic_mode_en(data)           (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_two_line_prediction_en(data) (0x00000040&((data)<<6))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_line_mode(data)             (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_data_color(data)            (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_data_bit_width(data)        (0x0000000C&((data)<<2))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_decmp_data_format(data)           (0x00000003&(data))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_get_decmp_line_sum_bit(data)      ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_get_decmp_400_old_mode_en(data)   ((0x00008000&(data))>>15)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_get_dummy_14_11(data)             ((0x00007800&(data))>>11)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_get_decmp_jump4_en(data)          ((0x00000400&(data))>>10)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_get_decmp_qp_mode(data)           ((0x00000300&(data))>>8)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_get_decmp_dic_mode_en(data)       ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_get_decmp_two_line_prediction_en(data) ((0x00000040&(data))>>6)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_get_decmp_line_mode(data)         ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_get_decmp_data_color(data)        ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_get_decmp_data_bit_width(data)    ((0x0000000C&(data))>>2)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAIR_get_decmp_data_format(data)       (0x00000003&(data))

#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN                                0x18027608
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_reg_addr                        "0xB8027608"
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_reg                             0xB8027608
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_inst_addr                       "0x007C"
#define  set_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_reg(data)                   (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_reg                         (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_reg))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_decmp_crc_ro_line_sel_shift     (16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_saturation_type_shift           (1)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_saturation_en_shift             (0)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_decmp_crc_ro_line_sel_mask      (0x3FFF0000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_saturation_type_mask            (0x00000002)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_saturation_en_mask              (0x00000001)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_decmp_crc_ro_line_sel(data)     (0x3FFF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_saturation_type(data)           (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_saturation_en(data)             (0x00000001&(data))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_get_decmp_crc_ro_line_sel(data) ((0x3FFF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_get_saturation_type(data)       ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_SAT_EN_get_saturation_en(data)         (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN                                0x1802760C
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_reg_addr                        "0xB802760C"
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_reg                             0xB802760C
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_inst_addr                       "0x007D"
#define  set_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_reg(data)                   (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_reg                         (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_reg))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_not_finish_irq_even_en_shift    (21)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_underflow_irq_even_en_shift     (20)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_dic_error_even_en_shift         (19)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_crc_r_error_even_en_shift       (18)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_crc_g_error_even_en_shift       (17)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_crc_b_error_even_en_shift       (16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_not_finish_irq_even_en_mask     (0x00200000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_underflow_irq_even_en_mask      (0x00100000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_dic_error_even_en_mask          (0x00080000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_crc_r_error_even_en_mask        (0x00040000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_crc_g_error_even_en_mask        (0x00020000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_crc_b_error_even_en_mask        (0x00010000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_not_finish_irq_even_en(data)    (0x00200000&((data)<<21))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_underflow_irq_even_en(data)     (0x00100000&((data)<<20))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_dic_error_even_en(data)         (0x00080000&((data)<<19))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_crc_r_error_even_en(data)       (0x00040000&((data)<<18))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_crc_g_error_even_en(data)       (0x00020000&((data)<<17))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_crc_b_error_even_en(data)       (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_get_not_finish_irq_even_en(data) ((0x00200000&(data))>>21)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_get_underflow_irq_even_en(data) ((0x00100000&(data))>>20)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_get_dic_error_even_en(data)     ((0x00080000&(data))>>19)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_get_crc_r_error_even_en(data)   ((0x00040000&(data))>>18)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_get_crc_g_error_even_en(data)   ((0x00020000&(data))>>17)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_EN_get_crc_b_error_even_en(data)   ((0x00010000&(data))>>16)

#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st                                0x18027610
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_reg_addr                        "0xB8027610"
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_reg                             0xB8027610
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_inst_addr                       "0x007E"
#define  set_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_reg(data)                   (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_reg                         (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_reg))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_pqdc_irq_shift                  (31)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_in_fifo_overflow_even_st_shift  (27)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_ring_r_overflow_even_st_shift   (26)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_ring_g_overflow_even_st_shift   (25)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_ring_b_overflow_even_st_shift   (24)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_not_finish_irq_even_st_shift    (21)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_underflow_irq_even_st_shift     (20)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_dic_error_even_st_shift         (19)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_crc_r_error_even_st_shift       (18)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_crc_g_error_even_st_shift       (17)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_crc_b_error_even_st_shift       (16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_pqdc_irq_mask                   (0x80000000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_in_fifo_overflow_even_st_mask   (0x08000000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_ring_r_overflow_even_st_mask    (0x04000000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_ring_g_overflow_even_st_mask    (0x02000000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_ring_b_overflow_even_st_mask    (0x01000000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_not_finish_irq_even_st_mask     (0x00200000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_underflow_irq_even_st_mask      (0x00100000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_dic_error_even_st_mask          (0x00080000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_crc_r_error_even_st_mask        (0x00040000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_crc_g_error_even_st_mask        (0x00020000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_crc_b_error_even_st_mask        (0x00010000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_pqdc_irq(data)                  (0x80000000&((data)<<31))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_in_fifo_overflow_even_st(data)  (0x08000000&((data)<<27))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_ring_r_overflow_even_st(data)   (0x04000000&((data)<<26))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_ring_g_overflow_even_st(data)   (0x02000000&((data)<<25))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_ring_b_overflow_even_st(data)   (0x01000000&((data)<<24))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_not_finish_irq_even_st(data)    (0x00200000&((data)<<21))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_underflow_irq_even_st(data)     (0x00100000&((data)<<20))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_dic_error_even_st(data)         (0x00080000&((data)<<19))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_crc_r_error_even_st(data)       (0x00040000&((data)<<18))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_crc_g_error_even_st(data)       (0x00020000&((data)<<17))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_crc_b_error_even_st(data)       (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_get_pqdc_irq(data)              ((0x80000000&(data))>>31)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_get_in_fifo_overflow_even_st(data) ((0x08000000&(data))>>27)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_get_ring_r_overflow_even_st(data) ((0x04000000&(data))>>26)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_get_ring_g_overflow_even_st(data) ((0x02000000&(data))>>25)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_get_ring_b_overflow_even_st(data) ((0x01000000&(data))>>24)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_get_not_finish_irq_even_st(data) ((0x00200000&(data))>>21)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_get_underflow_irq_even_st(data) ((0x00100000&(data))>>20)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_get_dic_error_even_st(data)     ((0x00080000&(data))>>19)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_get_crc_r_error_even_st(data)   ((0x00040000&(data))>>18)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_get_crc_g_error_even_st(data)   ((0x00020000&(data))>>17)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_IRQ_st_get_crc_b_error_even_st(data)   ((0x00010000&(data))>>16)

#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN                               0x18027614
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_reg_addr                       "0xB8027614"
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_reg                            0xB8027614
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_inst_addr                      "0x007F"
#define  set_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_reg(data)                  (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_reg                        (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_reg))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_do_422_shift           (31)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_dic_shift              (17)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp_sel_shift           (16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp7_shift              (7)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp6_shift              (6)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp5_shift              (5)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp4_shift              (4)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp3_shift              (3)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp2_shift              (2)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp1_shift              (1)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp0_shift              (0)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_do_422_mask            (0x80000000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_dic_mask               (0x00020000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp_sel_mask            (0x00010000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp7_mask               (0x00000080)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp6_mask               (0x00000040)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp5_mask               (0x00000020)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp4_mask               (0x00000010)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp3_mask               (0x00000008)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp2_mask               (0x00000004)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp1_mask               (0x00000002)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp0_mask               (0x00000001)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_do_422(data)           (0x80000000&((data)<<31))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_dic(data)              (0x00020000&((data)<<17))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp_sel(data)           (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp7(data)              (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp6(data)              (0x00000040&((data)<<6))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp5(data)              (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp4(data)              (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp3(data)              (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp2(data)              (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp1(data)              (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_mark_en_qp0(data)              (0x00000001&(data))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_get_mark_en_do_422(data)       ((0x80000000&(data))>>31)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_get_mark_en_dic(data)          ((0x00020000&(data))>>17)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_get_mark_en_qp_sel(data)       ((0x00010000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_get_mark_en_qp7(data)          ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_get_mark_en_qp6(data)          ((0x00000040&(data))>>6)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_get_mark_en_qp5(data)          ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_get_mark_en_qp4(data)          ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_get_mark_en_qp3(data)          ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_get_mark_en_qp2(data)          ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_get_mark_en_qp1(data)          ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_EN_get_mark_en_qp0(data)          (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_01                         0x18027618
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_01_reg_addr                 "0xB8027618"
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_01_reg                      0xB8027618
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_01_inst_addr                "0x0080"
#define  set_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_01_reg(data)            (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_01_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_01_reg                  (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_01_reg))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_01_mark_color_0_shift       (16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_01_mark_color_1_shift       (0)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_01_mark_color_0_mask        (0xFFFF0000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_01_mark_color_1_mask        (0x0000FFFF)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_01_mark_color_0(data)       (0xFFFF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_01_mark_color_1(data)       (0x0000FFFF&(data))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_01_get_mark_color_0(data)   ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_01_get_mark_color_1(data)   (0x0000FFFF&(data))

#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_23                         0x1802761C
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_23_reg_addr                 "0xB802761C"
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_23_reg                      0xB802761C
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_23_inst_addr                "0x0081"
#define  set_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_23_reg(data)            (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_23_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_23_reg                  (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_23_reg))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_23_mark_color_2_shift       (16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_23_mark_color_3_shift       (0)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_23_mark_color_2_mask        (0xFFFF0000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_23_mark_color_3_mask        (0x0000FFFF)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_23_mark_color_2(data)       (0xFFFF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_23_mark_color_3(data)       (0x0000FFFF&(data))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_23_get_mark_color_2(data)   ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_23_get_mark_color_3(data)   (0x0000FFFF&(data))

#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_45                         0x18027620
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_45_reg_addr                 "0xB8027620"
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_45_reg                      0xB8027620
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_45_inst_addr                "0x0082"
#define  set_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_45_reg(data)            (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_45_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_45_reg                  (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_45_reg))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_45_mark_color_4_shift       (16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_45_mark_color_5_shift       (0)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_45_mark_color_4_mask        (0xFFFF0000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_45_mark_color_5_mask        (0x0000FFFF)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_45_mark_color_4(data)       (0xFFFF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_45_mark_color_5(data)       (0x0000FFFF&(data))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_45_get_mark_color_4(data)   ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_45_get_mark_color_5(data)   (0x0000FFFF&(data))

#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_67                         0x18027624
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_67_reg_addr                 "0xB8027624"
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_67_reg                      0xB8027624
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_67_inst_addr                "0x0083"
#define  set_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_67_reg(data)            (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_67_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_67_reg                  (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_67_reg))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_67_mark_color_6_shift       (16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_67_mark_color_7_shift       (0)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_67_mark_color_6_mask        (0xFFFF0000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_67_mark_color_7_mask        (0x0000FFFF)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_67_mark_color_6(data)       (0xFFFF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_67_mark_color_7(data)       (0x0000FFFF&(data))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_67_get_mark_color_6(data)   ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_67_get_mark_color_7(data)   (0x0000FFFF&(data))

#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_422                        0x18027628
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_422_reg_addr                "0xB8027628"
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_422_reg                     0xB8027628
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_422_inst_addr               "0x0084"
#define  set_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_422_reg(data)           (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_422_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_422_reg                 (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_422_reg))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_422_mark_color_dic_shift    (16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_422_mark_color_422_shift    (0)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_422_mark_color_dic_mask     (0xFFFF0000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_422_mark_color_422_mask     (0x0000FFFF)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_422_mark_color_dic(data)    (0xFFFF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_422_mark_color_422(data)    (0x0000FFFF&(data))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_422_get_mark_color_dic(data) ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_MARK_color_422_get_mark_color_422(data) (0x0000FFFF&(data))

#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_ST                                    0x1802762C
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_ST_reg_addr                            "0xB802762C"
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_ST_reg                                 0xB802762C
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_ST_inst_addr                           "0x0085"
#define  set_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_ST_reg(data)                       (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_ST_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_ST_reg                             (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_ST_reg))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_ST_decmp_crc_error_line_shift          (16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_ST_decmp_package_height_cnt_shift      (0)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_ST_decmp_crc_error_line_mask           (0x3FFF0000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_ST_decmp_package_height_cnt_mask       (0x00003FFF)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_ST_decmp_crc_error_line(data)          (0x3FFF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_ST_decmp_package_height_cnt(data)      (0x00003FFF&(data))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_ST_get_decmp_crc_error_line(data)      ((0x3FFF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_ST_get_decmp_package_height_cnt(data)  (0x00003FFF&(data))

#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_G                            0x18027630
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_G_reg_addr                    "0xB8027630"
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_G_reg                         0xB8027630
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_G_inst_addr                   "0x0086"
#define  set_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_G_reg(data)               (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_G_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_G_reg                     (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_G_reg))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g_shift      (0)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g_mask       (0xFFFFFFFF)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_G_decmp_crc_even_g(data)      (0xFFFFFFFF&(data))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_G_get_decmp_crc_even_g(data)  (0xFFFFFFFF&(data))

#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_R                            0x18027634
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_R_reg_addr                    "0xB8027634"
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_R_reg                         0xB8027634
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_R_inst_addr                   "0x0087"
#define  set_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_R_reg(data)               (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_R_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_R_reg                     (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_R_reg))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r_shift      (0)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r_mask       (0xFFFFFFFF)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_R_decmp_crc_even_r(data)      (0xFFFFFFFF&(data))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_R_get_decmp_crc_even_r(data)  (0xFFFFFFFF&(data))

#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_B                            0x18027638
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_B_reg_addr                    "0xB8027638"
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_B_reg                         0xB8027638
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_B_inst_addr                   "0x0088"
#define  set_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_B_reg(data)               (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_B_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_B_reg                     (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_B_reg))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b_shift      (0)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b_mask       (0xFFFFFFFF)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_B_decmp_crc_even_b(data)      (0xFFFFFFFF&(data))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_CRC_EVEN_B_get_decmp_crc_even_b(data)  (0xFFFFFFFF&(data))

#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE                           0x18027650
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_reg_addr                   "0xB8027650"
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_reg                        0xB8027650
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_inst_addr                  "0x0089"
#define  set_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_reg(data)              (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_reg                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_reg))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_measure_en_shift (31)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_long_term_shift (30)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_shift    (0)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_measure_en_mask (0x80000000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_long_term_mask (0x40000000)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_mask     (0x000000FF)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_measure_en(data) (0x80000000&((data)<<31))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle_long_term(data) (0x40000000&((data)<<30))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_decmp_pause_cycle(data)    (0x000000FF&(data))
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_get_decmp_pause_cycle_measure_en(data) ((0x80000000&(data))>>31)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_get_decmp_pause_cycle_long_term(data) ((0x40000000&(data))>>30)
#define  MDOMAIN_DISP_DISPM_MAIN_PQ_DECMP_PAUSE_CYCLE_get_decmp_pause_cycle(data) (0x000000FF&(data))

#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP                                        0x18027680
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_reg_addr                                "0xB8027680"
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_reg                                     0xB8027680
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_inst_addr                               "0x008A"
#define  set_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_reg(data)                           (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_reg                                 (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_reg))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_s_decmp_en_shift                        (31)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_s_decmp_width_div32_shift               (16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_s_decmp_height_shift                    (0)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_s_decmp_en_mask                         (0x80000000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_s_decmp_width_div32_mask                (0x01FF0000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_s_decmp_height_mask                     (0x00003FFF)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_s_decmp_en(data)                        (0x80000000&((data)<<31))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_s_decmp_width_div32(data)               (0x01FF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_s_decmp_height(data)                    (0x00003FFF&(data))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_get_s_decmp_en(data)                    ((0x80000000&(data))>>31)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_get_s_decmp_width_div32(data)           ((0x01FF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_get_s_decmp_height(data)                (0x00003FFF&(data))

#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR                                   0x18027684
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_reg_addr                           "0xB8027684"
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_reg                                0xB8027684
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_inst_addr                          "0x008B"
#define  set_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_reg(data)                      (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_reg                            (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_reg))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_line_sum_bit_shift         (16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_400_old_mode_en_shift      (15)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_dummy_14_11_shift                  (11)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_jump4_en_shift             (10)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_qp_mode_shift              (8)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_dic_mode_en_shift          (7)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_two_line_prediction_en_shift (6)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_line_mode_shift            (5)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_data_color_shift           (4)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_data_bit_width_shift       (2)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_data_format_shift          (0)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_line_sum_bit_mask          (0xFFFF0000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_400_old_mode_en_mask       (0x00008000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_dummy_14_11_mask                   (0x00007800)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_jump4_en_mask              (0x00000400)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_qp_mode_mask               (0x00000300)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_dic_mode_en_mask           (0x00000080)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_two_line_prediction_en_mask (0x00000040)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_line_mode_mask             (0x00000020)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_data_color_mask            (0x00000010)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_data_bit_width_mask        (0x0000000C)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_data_format_mask           (0x00000003)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_line_sum_bit(data)         (0xFFFF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_400_old_mode_en(data)      (0x00008000&((data)<<15))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_dummy_14_11(data)                  (0x00007800&((data)<<11))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_jump4_en(data)             (0x00000400&((data)<<10))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_qp_mode(data)              (0x00000300&((data)<<8))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_dic_mode_en(data)          (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_two_line_prediction_en(data) (0x00000040&((data)<<6))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_line_mode(data)            (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_data_color(data)           (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_data_bit_width(data)       (0x0000000C&((data)<<2))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_s_decmp_data_format(data)          (0x00000003&(data))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_get_s_decmp_line_sum_bit(data)     ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_get_s_decmp_400_old_mode_en(data)  ((0x00008000&(data))>>15)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_get_dummy_14_11(data)              ((0x00007800&(data))>>11)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_get_s_decmp_jump4_en(data)         ((0x00000400&(data))>>10)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_get_s_decmp_qp_mode(data)          ((0x00000300&(data))>>8)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_get_s_decmp_dic_mode_en(data)      ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_get_s_decmp_two_line_prediction_en(data) ((0x00000040&(data))>>6)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_get_s_decmp_line_mode(data)        ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_get_s_decmp_data_color(data)       ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_get_s_decmp_data_bit_width(data)   ((0x0000000C&(data))>>2)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAIR_get_s_decmp_data_format(data)      (0x00000003&(data))

#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN                                 0x18027688
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_reg_addr                         "0xB8027688"
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_reg                              0xB8027688
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_inst_addr                        "0x008C"
#define  set_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_reg))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_s_decmp_crc_ro_line_sel_shift    (16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_s_saturation_type_shift          (1)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_s_saturation_en_shift            (0)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_s_decmp_crc_ro_line_sel_mask     (0x3FFF0000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_s_saturation_type_mask           (0x00000002)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_s_saturation_en_mask             (0x00000001)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_s_decmp_crc_ro_line_sel(data)    (0x3FFF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_s_saturation_type(data)          (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_s_saturation_en(data)            (0x00000001&(data))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_get_s_decmp_crc_ro_line_sel(data) ((0x3FFF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_get_s_saturation_type(data)      ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_SAT_EN_get_s_saturation_en(data)        (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN                                 0x1802768C
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_reg_addr                         "0xB802768C"
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_reg                              0xB802768C
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_inst_addr                        "0x008D"
#define  set_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_reg))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_not_finish_irq_even_en_shift   (21)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_underflow_irq_even_en_shift    (20)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_dic_error_even_en_shift        (19)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_crc_r_error_even_en_shift      (18)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_crc_g_error_even_en_shift      (17)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_crc_b_error_even_en_shift      (16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_not_finish_irq_even_en_mask    (0x00200000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_underflow_irq_even_en_mask     (0x00100000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_dic_error_even_en_mask         (0x00080000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_crc_r_error_even_en_mask       (0x00040000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_crc_g_error_even_en_mask       (0x00020000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_crc_b_error_even_en_mask       (0x00010000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_not_finish_irq_even_en(data)   (0x00200000&((data)<<21))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_underflow_irq_even_en(data)    (0x00100000&((data)<<20))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_dic_error_even_en(data)        (0x00080000&((data)<<19))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_crc_r_error_even_en(data)      (0x00040000&((data)<<18))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_crc_g_error_even_en(data)      (0x00020000&((data)<<17))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_s_crc_b_error_even_en(data)      (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_get_s_not_finish_irq_even_en(data) ((0x00200000&(data))>>21)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_get_s_underflow_irq_even_en(data) ((0x00100000&(data))>>20)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_get_s_dic_error_even_en(data)    ((0x00080000&(data))>>19)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_get_s_crc_r_error_even_en(data)  ((0x00040000&(data))>>18)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_get_s_crc_g_error_even_en(data)  ((0x00020000&(data))>>17)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_EN_get_s_crc_b_error_even_en(data)  ((0x00010000&(data))>>16)

#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st                                 0x18027690
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_reg_addr                         "0xB8027690"
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_reg                              0xB8027690
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_inst_addr                        "0x008E"
#define  set_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_reg(data)                    (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_reg                          (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_reg))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_pqdc_irq_shift                 (31)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_in_fifo_overflow_even_st_shift (27)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_ring_r_overflow_even_st_shift  (26)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_ring_g_overflow_even_st_shift  (25)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_ring_b_overflow_even_st_shift  (24)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_not_finish_irq_even_st_shift   (21)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_underflow_irq_even_st_shift    (20)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_dic_error_even_st_shift        (19)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_crc_r_error_even_st_shift      (18)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_crc_g_error_even_st_shift      (17)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_crc_b_error_even_st_shift      (16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_pqdc_irq_mask                  (0x80000000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_in_fifo_overflow_even_st_mask  (0x08000000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_ring_r_overflow_even_st_mask   (0x04000000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_ring_g_overflow_even_st_mask   (0x02000000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_ring_b_overflow_even_st_mask   (0x01000000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_not_finish_irq_even_st_mask    (0x00200000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_underflow_irq_even_st_mask     (0x00100000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_dic_error_even_st_mask         (0x00080000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_crc_r_error_even_st_mask       (0x00040000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_crc_g_error_even_st_mask       (0x00020000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_crc_b_error_even_st_mask       (0x00010000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_pqdc_irq(data)                 (0x80000000&((data)<<31))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_in_fifo_overflow_even_st(data) (0x08000000&((data)<<27))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_ring_r_overflow_even_st(data)  (0x04000000&((data)<<26))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_ring_g_overflow_even_st(data)  (0x02000000&((data)<<25))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_ring_b_overflow_even_st(data)  (0x01000000&((data)<<24))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_not_finish_irq_even_st(data)   (0x00200000&((data)<<21))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_underflow_irq_even_st(data)    (0x00100000&((data)<<20))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_dic_error_even_st(data)        (0x00080000&((data)<<19))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_crc_r_error_even_st(data)      (0x00040000&((data)<<18))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_crc_g_error_even_st(data)      (0x00020000&((data)<<17))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_s_crc_b_error_even_st(data)      (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_get_s_pqdc_irq(data)             ((0x80000000&(data))>>31)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_get_s_in_fifo_overflow_even_st(data) ((0x08000000&(data))>>27)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_get_s_ring_r_overflow_even_st(data) ((0x04000000&(data))>>26)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_get_s_ring_g_overflow_even_st(data) ((0x02000000&(data))>>25)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_get_s_ring_b_overflow_even_st(data) ((0x01000000&(data))>>24)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_get_s_not_finish_irq_even_st(data) ((0x00200000&(data))>>21)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_get_s_underflow_irq_even_st(data) ((0x00100000&(data))>>20)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_get_s_dic_error_even_st(data)    ((0x00080000&(data))>>19)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_get_s_crc_r_error_even_st(data)  ((0x00040000&(data))>>18)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_get_s_crc_g_error_even_st(data)  ((0x00020000&(data))>>17)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_IRQ_st_get_s_crc_b_error_even_st(data)  ((0x00010000&(data))>>16)

#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN                                0x18027694
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_reg_addr                        "0xB8027694"
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_reg                             0xB8027694
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_inst_addr                       "0x008F"
#define  set_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_reg(data)                   (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_reg                         (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_reg))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_do_422_shift          (31)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_dic_shift             (17)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp_sel_shift          (16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp7_shift             (7)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp6_shift             (6)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp5_shift             (5)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp4_shift             (4)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp3_shift             (3)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp2_shift             (2)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp1_shift             (1)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp0_shift             (0)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_do_422_mask           (0x80000000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_dic_mask              (0x00020000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp_sel_mask           (0x00010000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp7_mask              (0x00000080)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp6_mask              (0x00000040)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp5_mask              (0x00000020)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp4_mask              (0x00000010)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp3_mask              (0x00000008)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp2_mask              (0x00000004)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp1_mask              (0x00000002)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp0_mask              (0x00000001)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_do_422(data)          (0x80000000&((data)<<31))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_dic(data)             (0x00020000&((data)<<17))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp_sel(data)          (0x00010000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp7(data)             (0x00000080&((data)<<7))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp6(data)             (0x00000040&((data)<<6))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp5(data)             (0x00000020&((data)<<5))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp4(data)             (0x00000010&((data)<<4))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp3(data)             (0x00000008&((data)<<3))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp2(data)             (0x00000004&((data)<<2))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp1(data)             (0x00000002&((data)<<1))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_s_mark_en_qp0(data)             (0x00000001&(data))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_get_s_mark_en_do_422(data)      ((0x80000000&(data))>>31)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_get_s_mark_en_dic(data)         ((0x00020000&(data))>>17)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_get_s_mark_en_qp_sel(data)      ((0x00010000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_get_s_mark_en_qp7(data)         ((0x00000080&(data))>>7)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_get_s_mark_en_qp6(data)         ((0x00000040&(data))>>6)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_get_s_mark_en_qp5(data)         ((0x00000020&(data))>>5)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_get_s_mark_en_qp4(data)         ((0x00000010&(data))>>4)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_get_s_mark_en_qp3(data)         ((0x00000008&(data))>>3)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_get_s_mark_en_qp2(data)         ((0x00000004&(data))>>2)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_get_s_mark_en_qp1(data)         ((0x00000002&(data))>>1)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_EN_get_s_mark_en_qp0(data)         (0x00000001&(data))

#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_01                          0x18027698
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_01_reg_addr                  "0xB8027698"
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_01_reg                       0xB8027698
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_01_inst_addr                 "0x0090"
#define  set_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_01_reg(data)             (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_01_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_01_reg                   (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_01_reg))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_01_s_mark_color_0_shift      (16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_01_s_mark_color_1_shift      (0)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_01_s_mark_color_0_mask       (0xFFFF0000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_01_s_mark_color_1_mask       (0x0000FFFF)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_01_s_mark_color_0(data)      (0xFFFF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_01_s_mark_color_1(data)      (0x0000FFFF&(data))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_01_get_s_mark_color_0(data)  ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_01_get_s_mark_color_1(data)  (0x0000FFFF&(data))

#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_23                          0x1802769C
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_23_reg_addr                  "0xB802769C"
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_23_reg                       0xB802769C
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_23_inst_addr                 "0x0091"
#define  set_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_23_reg(data)             (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_23_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_23_reg                   (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_23_reg))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_23_s_mark_color_2_shift      (16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_23_s_mark_color_3_shift      (0)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_23_s_mark_color_2_mask       (0xFFFF0000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_23_s_mark_color_3_mask       (0x0000FFFF)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_23_s_mark_color_2(data)      (0xFFFF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_23_s_mark_color_3(data)      (0x0000FFFF&(data))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_23_get_s_mark_color_2(data)  ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_23_get_s_mark_color_3(data)  (0x0000FFFF&(data))

#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_45                          0x180276A0
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_45_reg_addr                  "0xB80276A0"
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_45_reg                       0xB80276A0
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_45_inst_addr                 "0x0092"
#define  set_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_45_reg(data)             (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_45_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_45_reg                   (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_45_reg))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_45_s_mark_color_4_shift      (16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_45_s_mark_color_5_shift      (0)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_45_s_mark_color_4_mask       (0xFFFF0000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_45_s_mark_color_5_mask       (0x0000FFFF)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_45_s_mark_color_4(data)      (0xFFFF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_45_s_mark_color_5(data)      (0x0000FFFF&(data))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_45_get_s_mark_color_4(data)  ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_45_get_s_mark_color_5(data)  (0x0000FFFF&(data))

#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_67                          0x180276A4
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_67_reg_addr                  "0xB80276A4"
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_67_reg                       0xB80276A4
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_67_inst_addr                 "0x0093"
#define  set_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_67_reg(data)             (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_67_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_67_reg                   (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_67_reg))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_67_s_mark_color_6_shift      (16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_67_s_mark_color_7_shift      (0)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_67_s_mark_color_6_mask       (0xFFFF0000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_67_s_mark_color_7_mask       (0x0000FFFF)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_67_s_mark_color_6(data)      (0xFFFF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_67_s_mark_color_7(data)      (0x0000FFFF&(data))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_67_get_s_mark_color_6(data)  ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_67_get_s_mark_color_7(data)  (0x0000FFFF&(data))

#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_422                         0x180276A8
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_422_reg_addr                 "0xB80276A8"
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_422_reg                      0xB80276A8
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_422_inst_addr                "0x0094"
#define  set_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_422_reg(data)            (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_422_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_422_reg                  (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_422_reg))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_422_s_mark_color_dic_shift   (16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_422_s_mark_color_422_shift   (0)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_422_s_mark_color_dic_mask    (0xFFFF0000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_422_s_mark_color_422_mask    (0x0000FFFF)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_422_s_mark_color_dic(data)   (0xFFFF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_422_s_mark_color_422(data)   (0x0000FFFF&(data))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_422_get_s_mark_color_dic(data) ((0xFFFF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_MARK_color_422_get_s_mark_color_422(data) (0x0000FFFF&(data))

#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_ST                                     0x180276AC
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_ST_reg_addr                             "0xB80276AC"
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_ST_reg                                  0xB80276AC
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_ST_inst_addr                            "0x0095"
#define  set_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_ST_reg(data)                        (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_ST_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_ST_reg                              (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_ST_reg))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_ST_s_decmp_crc_error_line_shift         (16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_ST_s_decmp_package_height_cnt_shift     (0)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_ST_s_decmp_crc_error_line_mask          (0x3FFF0000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_ST_s_decmp_package_height_cnt_mask      (0x00003FFF)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_ST_s_decmp_crc_error_line(data)         (0x3FFF0000&((data)<<16))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_ST_s_decmp_package_height_cnt(data)     (0x00003FFF&(data))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_ST_get_s_decmp_crc_error_line(data)     ((0x3FFF0000&(data))>>16)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_ST_get_s_decmp_package_height_cnt(data) (0x00003FFF&(data))

#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_G                             0x180276B0
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_G_reg_addr                     "0xB80276B0"
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_G_reg                          0xB80276B0
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_G_inst_addr                    "0x0096"
#define  set_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_G_reg(data)                (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_G_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_G_reg                      (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_G_reg))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_G_s_decmp_crc_even_g_shift     (0)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_G_s_decmp_crc_even_g_mask      (0xFFFFFFFF)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_G_s_decmp_crc_even_g(data)     (0xFFFFFFFF&(data))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_G_get_s_decmp_crc_even_g(data) (0xFFFFFFFF&(data))

#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_R                             0x180276B4
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_R_reg_addr                     "0xB80276B4"
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_R_reg                          0xB80276B4
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_R_inst_addr                    "0x0097"
#define  set_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_R_reg(data)                (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_R_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_R_reg                      (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_R_reg))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_R_s_decmp_crc_even_r_shift     (0)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_R_s_decmp_crc_even_r_mask      (0xFFFFFFFF)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_R_s_decmp_crc_even_r(data)     (0xFFFFFFFF&(data))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_R_get_s_decmp_crc_even_r(data) (0xFFFFFFFF&(data))

#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_B                             0x180276B8
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_B_reg_addr                     "0xB80276B8"
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_B_reg                          0xB80276B8
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_B_inst_addr                    "0x0098"
#define  set_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_B_reg(data)                (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_B_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_B_reg                      (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_B_reg))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_B_s_decmp_crc_even_b_shift     (0)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_B_s_decmp_crc_even_b_mask      (0xFFFFFFFF)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_B_s_decmp_crc_even_b(data)     (0xFFFFFFFF&(data))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_CRC_EVEN_B_get_s_decmp_crc_even_b(data) (0xFFFFFFFF&(data))

#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE                            0x180276D0
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_reg_addr                    "0xB80276D0"
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_reg                         0xB80276D0
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_inst_addr                   "0x0099"
#define  set_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_reg(data)               (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_reg)=data)
#define  get_MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_reg                     (*((volatile unsigned int*)MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_reg))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_s_decmp_pause_cycle_measure_en_shift (31)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_s_decmp_pause_cycle_long_term_shift (30)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_s_decmp_pause_cycle_shift   (0)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_s_decmp_pause_cycle_measure_en_mask (0x80000000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_s_decmp_pause_cycle_long_term_mask (0x40000000)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_s_decmp_pause_cycle_mask    (0x000000FF)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_s_decmp_pause_cycle_measure_en(data) (0x80000000&((data)<<31))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_s_decmp_pause_cycle_long_term(data) (0x40000000&((data)<<30))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_s_decmp_pause_cycle(data)   (0x000000FF&(data))
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_get_s_decmp_pause_cycle_measure_en(data) ((0x80000000&(data))>>31)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_get_s_decmp_pause_cycle_long_term(data) ((0x40000000&(data))>>30)
#define  MDOMAIN_DISP_DISPM_SUB_PQ_DECMP_PAUSE_CYCLE_get_s_decmp_pause_cycle(data) (0x000000FF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======MDOMAIN_DISP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  main_rgb2gbr_fmt:1;
        RBus_UInt32  main_usb2vga_en:1;
        RBus_UInt32  main_usb2vga_fmt:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  main_pre_rd_v_start:11;
    };
}mdomain_disp_ddr_mainprevstart_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  main_pixel_num:14;
        RBus_UInt32  main_wtlvl:8;
    };
}mdomain_disp_ddr_mainnumwtl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_read_num:16;
        RBus_UInt32  main_read_len:8;
        RBus_UInt32  main_read_remain:8;
    };
}mdomain_disp_ddr_mainrdnumlenrem_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_read_addr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_ddr_mainaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  main_addr_drop:16;
    };
}mdomain_disp_ddr_mainaddrdropbits_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_line_step:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_ddr_mainlinestep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_block_step:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_ddr_mainblkstep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_sec_block:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_ddr_main2ndaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_third_block:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_ddr_main3rdaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  main_frame_mode:1;
        RBus_UInt32  main_line_number:13;
    };
}mdomain_disp_ddr_mainlinenum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  main_cap2disp_distance:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  main_bufnum:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  dummy18027328_22:1;
        RBus_UInt32  main_decompression_clk_en:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  maincolorspace:1;
        RBus_UInt32  main_sub_swap:1;
        RBus_UInt32  main_in_format:1;
        RBus_UInt32  main_bit_num:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  main_pr_out_merge_triple:1;
        RBus_UInt32  main_pr_our_merge_en:1;
        RBus_UInt32  main_frame_seq_out_en:1;
        RBus_UInt32  main_stop_burst_en:1;
        RBus_UInt32  main_single_buffer_select:3;
        RBus_UInt32  main_v_flip_3buf_en:1;
        RBus_UInt32  main_double_en:1;
        RBus_UInt32  main_merge_en0:1;
        RBus_UInt32  main_block_free:1;
        RBus_UInt32  main_frc_style:1;
        RBus_UInt32  main_source_sel:2;
        RBus_UInt32  main_use_sub_block:1;
    };
}mdomain_disp_ddr_mainctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  main_disp_en:1;
    };
}mdomain_disp_disp_main_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  main_repeat_chgflg:1;
        RBus_UInt32  main_repeat_frame_sequence:3;
        RBus_UInt32  main_drop_chgflg:1;
        RBus_UInt32  main_drop_frame_sequence:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  main_block_select:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  main_read_l_flag:1;
    };
}mdomain_disp_ddr_mainstatus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  disp2_db_rd_sel:1;
        RBus_UInt32  disp2_double_enable:1;
        RBus_UInt32  disp2_double_apply:1;
        RBus_UInt32  res2:13;
        RBus_UInt32  disp1_db_rd_sel:1;
        RBus_UInt32  disp1_double_enable:1;
        RBus_UInt32  disp1_double_apply:1;
    };
}mdomain_disp_ddr_mainsubctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  main_force_blocksel_toggle_mode:1;
        RBus_UInt32  main_force_blocksel_toggle_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  main_force_blocksel_toggle_line:13;
    };
}mdomain_disp_main_disp_blocksel_option_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  force_toggle_cal_option:2;
        RBus_UInt32  force_dmaload_mode:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  force_dmaload_line:13;
    };
}mdomain_disp_disp_dmaload_option_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  main_en_syn_rst:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:2;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:2;
        RBus_UInt32  res9:1;
        RBus_UInt32  res10:1;
        RBus_UInt32  res11:1;
        RBus_UInt32  res12:1;
        RBus_UInt32  res13:1;
        RBus_UInt32  res14:1;
    };
}mdomain_disp_ddr_mainmaskctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  bstlen:3;
        RBus_UInt32  chroma_fir_sel:2;
        RBus_UInt32  chroma_format:1;
        RBus_UInt32  dma_mode:1;
    };
}mdomain_disp_ddr_main_bm_dma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  y_ads_set1:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  c_ads_set1:7;
    };
}mdomain_disp_ddr_main_bm_dma_picset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  c_h_offset:8;
        RBus_UInt32  res2:4;
        RBus_UInt32  y_h_shift:4;
        RBus_UInt32  y_h_offset:8;
    };
}mdomain_disp_ddr_main_bm_h_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  c_v_offset:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  y_v_offset:12;
    };
}mdomain_disp_ddr_main_bm_v_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blockread_line_step:29;
        RBus_UInt32  res1:2;
        RBus_UInt32  blockread_addcmd_trans_en:1;
    };
}mdomain_disp_main_block_read_addcmd_transform_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_ads_start:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_main_block_read_ads_start_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_ads_start:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_main_block_read_ads_start_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blockread_c_line_step:29;
        RBus_UInt32  res1:2;
        RBus_UInt32  blockread_common_line_step_en:1;
    };
}mdomain_disp_main_block_read_c_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  sub_rgb2gbr_fmt:1;
        RBus_UInt32  sub_usb2vga_en:1;
        RBus_UInt32  sub_usb2vga_fmt:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  sub_pre_rd_v_start:11;
    };
}mdomain_disp_ddr_subprevstart_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  sub_pixel_num:14;
        RBus_UInt32  sub_wtlvl:8;
    };
}mdomain_disp_ddr_subpixnumwtl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_read_num1:16;
        RBus_UInt32  sub_read_len:8;
        RBus_UInt32  sub_read_remain:8;
    };
}mdomain_disp_ddr_subrdnumlenrem_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_read_addr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_ddr_subaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  sub_addr_drop:16;
    };
}mdomain_disp_ddr_subaddrdropbits_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_line_step:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_ddr_sublinestep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_block_step:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_ddr_subblkstep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_sec_block:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_ddr_sub2ndaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_third_block:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_ddr_sub3rdaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  sub_frame_mode:1;
        RBus_UInt32  sub_line_number:13;
    };
}mdomain_disp_ddr_sublinenum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  sub_cap2disp_distance:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  sub_bufnum:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  sub_decompression_clk_en:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  sub_ddd_depth_en:1;
        RBus_UInt32  subcolorspace:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  sub_in_format:1;
        RBus_UInt32  sub_bit_num:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  sub_source_sel_at_i2rnd:2;
        RBus_UInt32  res7:1;
        RBus_UInt32  sub_stop_burst_en:1;
        RBus_UInt32  sub_single_buffer_select:3;
        RBus_UInt32  sub_v_flip_3buf_en:1;
        RBus_UInt32  sub_double_en:1;
        RBus_UInt32  sub_merge_en0:1;
        RBus_UInt32  sub_block_free:1;
        RBus_UInt32  sub_frc_style:1;
        RBus_UInt32  sub_source_sel:2;
        RBus_UInt32  sub_use_main_block:1;
    };
}mdomain_disp_ddr_subctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  sub_disp_en:1;
    };
}mdomain_disp_disp_sub_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  sub_repeat_chgflg:1;
        RBus_UInt32  sub_repeat_frame_sequence:3;
        RBus_UInt32  sub_drop_chgflg:1;
        RBus_UInt32  sub_drop_frame_sequence:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  sub_block_select:3;
        RBus_UInt32  res3:4;
    };
}mdomain_disp_ddr_substatus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  sub_force_blocksel_toggle_mode:1;
        RBus_UInt32  sub_force_blocksel_toggle_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  sub_force_blocksel_toggle_line:13;
    };
}mdomain_disp_sub_disp_blocksel_option_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  sub_mpic_enable:16;
    };
}mdomain_disp_ddr_submpen_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sub_active_mp:4;
        RBus_UInt32  sub_en_syn_rst:1;
        RBus_UInt32  sub_mp_mode:2;
        RBus_UInt32  sub_mp_enable:1;
    };
}mdomain_disp_ddr_submpmode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  sub_mp_line:13;
    };
}mdomain_disp_ddr_submplinenum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  sub_limit_bank:4;
        RBus_UInt32  sub_end_column:9;
    };
}mdomain_disp_ddr_subbanklimitendcol_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  main_field:1;
        RBus_UInt32  main_fifoof:1;
        RBus_UInt32  main_fifouf:1;
        RBus_UInt32  main_fifofull:1;
        RBus_UInt32  main_fifoempty:1;
        RBus_UInt32  main_combine_fifoof:1;
        RBus_UInt32  main_combine_fifouf:1;
        RBus_UInt32  main_combine_fifofull:1;
        RBus_UInt32  main_combine_fifoempty:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  sub_field:1;
        RBus_UInt32  sub_fifoof:1;
        RBus_UInt32  sub_fifouf:1;
        RBus_UInt32  sub_fifofull:1;
        RBus_UInt32  sub_fifoempty:1;
        RBus_UInt32  sub_combine_fifoof:1;
        RBus_UInt32  sub_combine_fifouf:1;
        RBus_UInt32  sub_combine_fifofull:1;
        RBus_UInt32  sub_combine_fifoempty:1;
    };
}mdomain_disp_disp_ddr_fifostatus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  main_fifoerr_ie:1;
        RBus_UInt32  main_fifoerr_wde:1;
        RBus_UInt32  res2:14;
        RBus_UInt32  sub_fifoerr_ie:1;
        RBus_UInt32  sub_fifoerr_wde:1;
    };
}mdomain_disp_disp_ie_wd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_disp_downlimit_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_dispmain_boundaryaddr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_disp_uplimit_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_dispmain_boundaryaddr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  main_disp_downlimit_ov:1;
        RBus_UInt32  main_dispuplimit_ov:1;
    };
}mdomain_disp_dispi1_rd_boundaryadd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_disp_downlimit_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_dispsub_boundaryaddr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_disp_uplimit_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_dispsub_boundaryaddr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  sub_disp_downlimit_ov:1;
        RBus_UInt32  sub_disp_uplimit_ov:1;
    };
}mdomain_disp_dispi2_rd_boundaryadd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_r_first_addr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_ddr_main_r_1st_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_r_second_addr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_ddr_main_r_2nd_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_r_third_addr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_ddr_main_r_3rd_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  main_repeat_4x:1;
        RBus_UInt32  main_repeat_3x:1;
        RBus_UInt32  main_repeat_2x:1;
        RBus_UInt32  main_repeat_1x:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  main_drop:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  main_under_size:1;
        RBus_UInt32  res4:8;
        RBus_UInt32  sub_repeat_4x:1;
        RBus_UInt32  sub_repeat_3x:1;
        RBus_UInt32  sub_repeat_2x:1;
        RBus_UInt32  sub_repeat_1x:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  sub_drop:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  sub_under_size:1;
    };
}mdomain_disp_disp_help_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  sub_bstlen:3;
        RBus_UInt32  sub_chroma_fir_sel:2;
        RBus_UInt32  sub_chroma_format:1;
        RBus_UInt32  sub_dma_mode:1;
    };
}mdomain_disp_ddr_sub_bm_dma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  sub_y_ads_set1:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  sub_c_ads_set1:7;
    };
}mdomain_disp_ddr_sub_bm_dma_picset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  sub_c_h_offset:8;
        RBus_UInt32  res2:4;
        RBus_UInt32  sub_y_h_shift:4;
        RBus_UInt32  sub_y_h_offset:8;
    };
}mdomain_disp_ddr_sub_bm_h_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  sub_c_v_offset:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  sub_y_v_offset:12;
    };
}mdomain_disp_ddr_sub_bm_v_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_blockread_line_step:29;
        RBus_UInt32  res1:2;
        RBus_UInt32  sub_blockread_addcmd_trans_en:1;
    };
}mdomain_disp_sub_block_read_addcmd_transform_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_y_ads_start:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_sub_block_read_ads_start_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_c_ads_start:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_sub_block_read_ads_start_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_blockread_c_line_step:29;
        RBus_UInt32  res1:2;
        RBus_UInt32  sub_blockread_common_line_step_en:1;
    };
}mdomain_disp_sub_block_read_c_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  dispm_bist_mode_pqc1_sub:1;
        RBus_UInt32  dispm_bist_mode_pqc2_sub:1;
        RBus_UInt32  dispm_bist_mode_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_bist_mode_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_bist_mode_pqc2:1;
        RBus_UInt32  dispm_bist_mode_mbist_pqdc2:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dispm_bist_mode_mbist_dispm_fsbuf:1;
        RBus_UInt32  dispm_bist_mode_mbist_pqdc1:1;
        RBus_UInt32  dispm_bist_mode_mbist_disp_sub:1;
        RBus_UInt32  dispm_bist_mode_mbist_cap_sub:1;
        RBus_UInt32  dispm_bist_mode_mbist_disp_main:1;
        RBus_UInt32  dispm_bist_mode_mbist_cap_main:1;
    };
}mdomain_disp_dispm_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  dispm_bist_done_pqc1_sub:1;
        RBus_UInt32  dispm_bist_done_pqc2_sub:1;
        RBus_UInt32  dispm_bist_done_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_bist_done_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_bist_done_pqc2:1;
        RBus_UInt32  dispm_bist_done_mbist_pqdc2:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dispm_bist_done_mbist_dispm_fsbuf:1;
        RBus_UInt32  dispm_bist_done_mbist_pqdc1:1;
        RBus_UInt32  dispm_bist_done_mbist_disp_sub:1;
        RBus_UInt32  dispm_bist_done_mbist_cap_sub:1;
        RBus_UInt32  dispm_bist_done_mbist_disp_main:1;
        RBus_UInt32  dispm_bist_done_mbist_cap_main:1;
    };
}mdomain_disp_dispm_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  dispm_bist_fail_group_pqc1_sub:1;
        RBus_UInt32  dispm_bist_fail_group_pqc2_sub:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_bist_fail_group_pqc2:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_pqdc2:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_dispm_fsbuf:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_pqdc1:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_disp_sub:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_cap_sub:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_disp_main:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_cap_main:1;
    };
}mdomain_disp_dispm_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  dispm_drf_mode_pqc1_sub:1;
        RBus_UInt32  dispm_drf_mode_pqc2_sub:1;
        RBus_UInt32  dispm_drf_mode_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_drf_mode_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_drf_mode_pqc2:1;
        RBus_UInt32  dispm_drf_mode_mbist_pqdc2:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dispm_drf_mode_mbist_dispm_fsbuf:1;
        RBus_UInt32  dispm_drf_mode_mbist_pqdc1:1;
        RBus_UInt32  dispm_drf_mode_mbist_disp_sub:1;
        RBus_UInt32  dispm_drf_mode_mbist_cap_sub:1;
        RBus_UInt32  dispm_drf_mode_mbist_disp_main:1;
        RBus_UInt32  dispm_drf_mode_mbist_cap_main:1;
    };
}mdomain_disp_dispm_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  dispm_drf_resume_pqc1_sub:1;
        RBus_UInt32  dispm_drf_resume_pqc2_sub:1;
        RBus_UInt32  dispm_drf_resume_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_drf_resume_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_drf_resume_pqc2:1;
        RBus_UInt32  dispm_drf_resume_mbist_pqdc2:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dispm_drf_resume_mbist_dispm_fsbuf:1;
        RBus_UInt32  dispm_drf_resume_mbist_pqdc1:1;
        RBus_UInt32  dispm_drf_resume_mbist_disp_sub:1;
        RBus_UInt32  dispm_drf_resume_mbist_cap_sub:1;
        RBus_UInt32  dispm_drf_resume_mbist_disp_main:1;
        RBus_UInt32  dispm_drf_resume_mbist_cap_main:1;
    };
}mdomain_disp_dispm_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  dispm_drf_done_pqc1_sub:1;
        RBus_UInt32  dispm_drf_done_pqc2_sub:1;
        RBus_UInt32  dispm_drf_done_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_drf_done_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_drf_done_pqc2:1;
        RBus_UInt32  dispm_drf_done_mbist_pqdc2:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dispm_drf_done_mbist_dispm_fsbuf:1;
        RBus_UInt32  dispm_drf_done_mbist_pqdc1:1;
        RBus_UInt32  dispm_drf_done_mbist_disp_sub:1;
        RBus_UInt32  dispm_drf_done_mbist_cap_sub:1;
        RBus_UInt32  dispm_drf_done_mbist_disp_main:1;
        RBus_UInt32  dispm_drf_done_mbist_cap_main:1;
    };
}mdomain_disp_dispm_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  dispm_drf_pause_pqc1_sub:1;
        RBus_UInt32  dispm_drf_pause_pqc2_sub:1;
        RBus_UInt32  dispm_drf_pause_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_drf_pause_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_drf_pause_pqc2:1;
        RBus_UInt32  dispm_drf_pause_mbist_pqdc2:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dispm_drf_pause_mbist_dispm_fsbuf:1;
        RBus_UInt32  dispm_drf_pause_mbist_pqdc1:1;
        RBus_UInt32  dispm_drf_pause_mbist_disp_sub:1;
        RBus_UInt32  dispm_drf_pause_mbist_cap_sub:1;
        RBus_UInt32  dispm_drf_pause_mbist_disp_main:1;
        RBus_UInt32  dispm_drf_pause_mbist_cap_main:1;
    };
}mdomain_disp_dispm_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  dispm_drf_fail_group_pqc1_sub:1;
        RBus_UInt32  dispm_drf_fail_group_pqc2_sub:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_drf_fail_group_pqc2:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_pqdc2:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_dispm_fsbuf:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_pqdc1:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_disp_sub:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_cap_sub:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_disp_main:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_cap_main:1;
    };
}mdomain_disp_dispm_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_rmb_mbist_disp_sub:4;
        RBus_UInt32  dispm_rma_mbist_disp_sub:4;
        RBus_UInt32  dispm_rmb_mbist_disp_main:4;
        RBus_UInt32  dispm_rma_mbist_disp_main:4;
        RBus_UInt32  dispm_rmb_mbist_cap_sub:4;
        RBus_UInt32  dispm_rma_mbist_cap_sub:4;
        RBus_UInt32  dispm_rmb_mbist_cap_main:4;
        RBus_UInt32  dispm_rma_mbist_cap_main:4;
    };
}mdomain_disp_dispm_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dispm_rmeb_mbist_disp_sub:1;
        RBus_UInt32  dispm_rmea_mbist_disp_sub:1;
        RBus_UInt32  dispm_rmeb_mbist_disp_main:1;
        RBus_UInt32  dispm_rmea_mbist_disp_main:1;
        RBus_UInt32  dispm_rmeb_mbist_cap_sub:1;
        RBus_UInt32  dispm_rmea_mbist_cap_sub:1;
        RBus_UInt32  dispm_rmeb_mbist_cap_main:1;
        RBus_UInt32  dispm_rmea_mbist_cap_main:1;
    };
}mdomain_disp_dispm_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  dispm_ls_pqc1_0_sub:1;
        RBus_UInt32  dispm_rme_pqc1_0_sub:1;
        RBus_UInt32  dispm_rm_pqc1_0_sub:4;
        RBus_UInt32  dispm_ls_mbist_disp_sub:1;
        RBus_UInt32  dispm_ls_mbist_disp_main:1;
        RBus_UInt32  dispm_ls_mbist_cap_sub:1;
        RBus_UInt32  dispm_ls_mbist_cap_main:1;
    };
}mdomain_disp_dispm_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dispm_ls_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_rme_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_rm_mbist_pqdc2_sub:4;
        RBus_UInt32  dispm_ls_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_rme_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_rm_mbist_pqdc1_sub:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  dispm_ls_mbist_pqdc2:1;
        RBus_UInt32  dispm_rme_mbist_pqdc2:1;
        RBus_UInt32  dispm_rm_mbist_pqdc2:4;
        RBus_UInt32  dispm_ls_mbist_pqdc1:1;
        RBus_UInt32  dispm_rme_mbist_pqdc1:1;
        RBus_UInt32  dispm_rm_mbist_pqdc1:4;
    };
}mdomain_disp_dispm_decomp_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dispm_ls_pqc2_1_sub:1;
        RBus_UInt32  dispm_rme_pqc2_1_sub:1;
        RBus_UInt32  dispm_rm_pqc2_1_sub:4;
        RBus_UInt32  dispm_ls_pqc2_0_sub:1;
        RBus_UInt32  dispm_rme_pqc2_0_sub:1;
        RBus_UInt32  dispm_rm_pqc2_0_sub:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  dispm_ls_pqc2_1:1;
        RBus_UInt32  dispm_rme_pqc2_1:1;
        RBus_UInt32  dispm_rm_pqc2_1:4;
        RBus_UInt32  dispm_ls_pqc2_0:1;
        RBus_UInt32  dispm_rme_pqc2_0:1;
        RBus_UInt32  dispm_rm_pqc2_0:4;
    };
}mdomain_disp_dispm_comp_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  sdnr_fsbuf_ls_en1:1;
        RBus_UInt32  sdnr_fsbuf_dvse1:1;
        RBus_UInt32  sdnr_fsbuf_dvs1:4;
        RBus_UInt32  res2:10;
        RBus_UInt32  sdnr_fsbuf_ls_en0:1;
        RBus_UInt32  sdnr_fsbuf_dvse0:1;
        RBus_UInt32  sdnr_fsbuf_dvs0:4;
    };
}mdomain_disp_dispm_fsbuf_rm01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  sdnr_fsbuf_ls_en3:1;
        RBus_UInt32  sdnr_fsbuf_dvse3:1;
        RBus_UInt32  sdnr_fsbuf_dvs3:4;
        RBus_UInt32  res2:10;
        RBus_UInt32  sdnr_fsbuf_ls_en2:1;
        RBus_UInt32  sdnr_fsbuf_dvse2:1;
        RBus_UInt32  sdnr_fsbuf_dvs2:4;
    };
}mdomain_disp_dispm_fsbuf_rm23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  main_rate_en:1;
    };
}mdomain_disp_disp_dma_rate_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_rate:32;
    };
}mdomain_disp_display_rate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  main_channel_swap:3;
        RBus_UInt32  main_8byte_swap:1;
        RBus_UInt32  main_4byte_swap:1;
        RBus_UInt32  main_2byte_swap:1;
        RBus_UInt32  main_1byte_swap:1;
    };
}mdomain_disp_display_byte_channel_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  sub_channel_swap:3;
        RBus_UInt32  sub_8byte_swap:1;
        RBus_UInt32  sub_4byte_swap:1;
        RBus_UInt32  sub_2byte_swap:1;
        RBus_UInt32  sub_1byte_swap:1;
    };
}mdomain_disp_display_sub_byte_channel_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_checksum_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  dispm_ddr_error_count:24;
    };
}mdomain_disp_dispm_ddr_checksum_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_flag_127_96:32;
    };
}mdomain_disp_dispm_ddr_checksum_flag_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_flag_95_64:32;
    };
}mdomain_disp_dispm_ddr_checksum_flag_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_flag_63_32:32;
    };
}mdomain_disp_dispm_ddr_checksum_flag_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_flag_31_0:32;
    };
}mdomain_disp_dispm_ddr_checksum_flag_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_mask_127_96:32;
    };
}mdomain_disp_dispm_ddr_checksum_mask_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_mask_95_64:32;
    };
}mdomain_disp_dispm_ddr_checksum_mask_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_mask_63_32:32;
    };
}mdomain_disp_dispm_ddr_checksum_mask_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_mask_31_0:32;
    };
}mdomain_disp_dispm_ddr_checksum_mask_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dispm_pqc_pqc1_bist_fail_0_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_12_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_11_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_10_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_9_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_8_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_7_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_6_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_5_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_4_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_3_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_2_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_1_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_0_sub:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_12:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_11:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_10:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_9:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_8:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_7:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_6:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_5:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_4:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_3:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_2:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_1:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_0:1;
    };
}mdomain_disp_dispm_pqc_bist_cap_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dispm_pqc_pqc1_drf_fail_0_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_12_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_11_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_10_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_9_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_8_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_7_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_6_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_5_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_4_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_3_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_2_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_1_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_0_sub:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_12:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_11:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_10:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_9:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_8:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_7:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_6:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_5:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_4:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_3:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_2:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_1:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_0:1;
    };
}mdomain_disp_dispm_pqc_drf_cap_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_forth_block:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_main_forth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_fifth_block:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_main_fifth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_sixth_block:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_main_sixth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_seventh_block:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_main_seventh_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_eightth_block:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_main_eightth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_r_forth_addr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_main_r_forth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_r_fifth_addr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_main_r_fifth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_r_sixth_addr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_main_r_sixth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_r_seventh_addr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_main_r_seventh_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_r_eightth_addr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_main_r_eightth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_forth_block:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_sub_forth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_fifth_block:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_sub_fifth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_sixth_block:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_sub_sixth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_seventh_block:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_sub_seventh_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_eightth_block:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_sub_eightth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  main_disp_boundary_limit_mode:1;
    };
}mdomain_disp_dispmain_boundaryaddr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_disp_downlimit_blk0_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_dispmain_boundaryaddr_blk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_disp_uplimit_blk0_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_dispmain_boundaryaddr2_blk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_disp_downlimit_blk1_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_dispmain_boundaryaddr_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_disp_uplimit_blk1_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_dispmain_boundaryaddr2_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_disp_downlimit_blk2_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_dispmain_boundaryaddr_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_disp_uplimit_blk2_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_dispmain_boundaryaddr2_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  sub_disp_boundary_limit_mode:1;
    };
}mdomain_disp_dispsub_boundaryaddr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_disp_downlimit_blk0_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_dispsub_boundaryaddr_blk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_disp_uplimit_blk0_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_dispsub_boundaryaddr2_blk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_disp_downlimit_blk1_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_dispsub_boundaryaddr_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_disp_uplimit_blk1_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_dispsub_boundaryaddr2_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_disp_downlimit_blk2_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_dispsub_boundaryaddr_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_disp_uplimit_blk2_adr:29;
        RBus_UInt32  res1:3;
    };
}mdomain_disp_dispsub_boundaryaddr2_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_en:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  decmp_width_div32:9;
        RBus_UInt32  res2:2;
        RBus_UInt32  decmp_height:14;
    };
}mdomain_disp_dispm_main_pq_decmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_line_sum_bit:16;
        RBus_UInt32  decmp_400_old_mode_en:1;
        RBus_UInt32  dummy18027604_14_11:4;
        RBus_UInt32  decmp_jump4_en:1;
        RBus_UInt32  decmp_qp_mode:2;
        RBus_UInt32  decmp_dic_mode_en:1;
        RBus_UInt32  decmp_two_line_prediction_en:1;
        RBus_UInt32  decmp_line_mode:1;
        RBus_UInt32  decmp_data_color:1;
        RBus_UInt32  decmp_data_bit_width:2;
        RBus_UInt32  decmp_data_format:2;
    };
}mdomain_disp_dispm_main_pq_decmp_pair_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  decmp_crc_ro_line_sel:14;
        RBus_UInt32  res2:14;
        RBus_UInt32  saturation_type:1;
        RBus_UInt32  saturation_en:1;
    };
}mdomain_disp_dispm_main_pq_decmp_sat_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  not_finish_irq_even_en:1;
        RBus_UInt32  underflow_irq_even_en:1;
        RBus_UInt32  dic_error_even_en:1;
        RBus_UInt32  crc_r_error_even_en:1;
        RBus_UInt32  crc_g_error_even_en:1;
        RBus_UInt32  crc_b_error_even_en:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
    };
}mdomain_disp_dispm_main_pq_decmp_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pqdc_irq:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  in_fifo_overflow_even_st:1;
        RBus_UInt32  ring_r_overflow_even_st:1;
        RBus_UInt32  ring_g_overflow_even_st:1;
        RBus_UInt32  ring_b_overflow_even_st:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  not_finish_irq_even_st:1;
        RBus_UInt32  underflow_irq_even_st:1;
        RBus_UInt32  dic_error_even_st:1;
        RBus_UInt32  crc_r_error_even_st:1;
        RBus_UInt32  crc_g_error_even_st:1;
        RBus_UInt32  crc_b_error_even_st:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:2;
        RBus_UInt32  res9:1;
        RBus_UInt32  res10:1;
        RBus_UInt32  res11:1;
        RBus_UInt32  res12:1;
        RBus_UInt32  res13:1;
        RBus_UInt32  res14:1;
    };
}mdomain_disp_dispm_main_pq_decmp_irq_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_en_do_422:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  mark_en_dic:1;
        RBus_UInt32  mark_en_qp_sel:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  mark_en_qp7:1;
        RBus_UInt32  mark_en_qp6:1;
        RBus_UInt32  mark_en_qp5:1;
        RBus_UInt32  mark_en_qp4:1;
        RBus_UInt32  mark_en_qp3:1;
        RBus_UInt32  mark_en_qp2:1;
        RBus_UInt32  mark_en_qp1:1;
        RBus_UInt32  mark_en_qp0:1;
    };
}mdomain_disp_dispm_main_pq_decmp_mark_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_0:16;
        RBus_UInt32  mark_color_1:16;
    };
}mdomain_disp_dispm_main_pq_decmp_mark_color_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_2:16;
        RBus_UInt32  mark_color_3:16;
    };
}mdomain_disp_dispm_main_pq_decmp_mark_color_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_4:16;
        RBus_UInt32  mark_color_5:16;
    };
}mdomain_disp_dispm_main_pq_decmp_mark_color_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_6:16;
        RBus_UInt32  mark_color_7:16;
    };
}mdomain_disp_dispm_main_pq_decmp_mark_color_67_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_dic:16;
        RBus_UInt32  mark_color_422:16;
    };
}mdomain_disp_dispm_main_pq_decmp_mark_color_422_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  decmp_crc_error_line:14;
        RBus_UInt32  res3:2;
        RBus_UInt32  decmp_package_height_cnt:14;
    };
}mdomain_disp_dispm_main_pq_decmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_g:32;
    };
}mdomain_disp_dispm_main_pq_decmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_r:32;
    };
}mdomain_disp_dispm_main_pq_decmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_b:32;
    };
}mdomain_disp_dispm_main_pq_decmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_pause_cycle_measure_en:1;
        RBus_UInt32  decmp_pause_cycle_long_term:1;
        RBus_UInt32  res1:22;
        RBus_UInt32  decmp_pause_cycle:8;
    };
}mdomain_disp_dispm_main_pq_decmp_pause_cycle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_decmp_en:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  s_decmp_width_div32:9;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_decmp_height:14;
    };
}mdomain_disp_dispm_sub_pq_decmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_decmp_line_sum_bit:16;
        RBus_UInt32  s_decmp_400_old_mode_en:1;
        RBus_UInt32  dummy18027684_14_11:4;
        RBus_UInt32  s_decmp_jump4_en:1;
        RBus_UInt32  s_decmp_qp_mode:2;
        RBus_UInt32  s_decmp_dic_mode_en:1;
        RBus_UInt32  s_decmp_two_line_prediction_en:1;
        RBus_UInt32  s_decmp_line_mode:1;
        RBus_UInt32  s_decmp_data_color:1;
        RBus_UInt32  s_decmp_data_bit_width:2;
        RBus_UInt32  s_decmp_data_format:2;
    };
}mdomain_disp_dispm_sub_pq_decmp_pair_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  s_decmp_crc_ro_line_sel:14;
        RBus_UInt32  res2:14;
        RBus_UInt32  s_saturation_type:1;
        RBus_UInt32  s_saturation_en:1;
    };
}mdomain_disp_dispm_sub_pq_decmp_sat_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  s_not_finish_irq_even_en:1;
        RBus_UInt32  s_underflow_irq_even_en:1;
        RBus_UInt32  s_dic_error_even_en:1;
        RBus_UInt32  s_crc_r_error_even_en:1;
        RBus_UInt32  s_crc_g_error_even_en:1;
        RBus_UInt32  s_crc_b_error_even_en:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
    };
}mdomain_disp_dispm_sub_pq_decmp_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_pqdc_irq:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  s_in_fifo_overflow_even_st:1;
        RBus_UInt32  s_ring_r_overflow_even_st:1;
        RBus_UInt32  s_ring_g_overflow_even_st:1;
        RBus_UInt32  s_ring_b_overflow_even_st:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  s_not_finish_irq_even_st:1;
        RBus_UInt32  s_underflow_irq_even_st:1;
        RBus_UInt32  s_dic_error_even_st:1;
        RBus_UInt32  s_crc_r_error_even_st:1;
        RBus_UInt32  s_crc_g_error_even_st:1;
        RBus_UInt32  s_crc_b_error_even_st:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:2;
        RBus_UInt32  res9:1;
        RBus_UInt32  res10:1;
        RBus_UInt32  res11:1;
        RBus_UInt32  res12:1;
        RBus_UInt32  res13:1;
        RBus_UInt32  res14:1;
    };
}mdomain_disp_dispm_sub_pq_decmp_irq_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_mark_en_do_422:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  s_mark_en_dic:1;
        RBus_UInt32  s_mark_en_qp_sel:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  s_mark_en_qp7:1;
        RBus_UInt32  s_mark_en_qp6:1;
        RBus_UInt32  s_mark_en_qp5:1;
        RBus_UInt32  s_mark_en_qp4:1;
        RBus_UInt32  s_mark_en_qp3:1;
        RBus_UInt32  s_mark_en_qp2:1;
        RBus_UInt32  s_mark_en_qp1:1;
        RBus_UInt32  s_mark_en_qp0:1;
    };
}mdomain_disp_dispm_sub_pq_decmp_mark_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_mark_color_0:16;
        RBus_UInt32  s_mark_color_1:16;
    };
}mdomain_disp_dispm_sub_pq_decmp_mark_color_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_mark_color_2:16;
        RBus_UInt32  s_mark_color_3:16;
    };
}mdomain_disp_dispm_sub_pq_decmp_mark_color_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_mark_color_4:16;
        RBus_UInt32  s_mark_color_5:16;
    };
}mdomain_disp_dispm_sub_pq_decmp_mark_color_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_mark_color_6:16;
        RBus_UInt32  s_mark_color_7:16;
    };
}mdomain_disp_dispm_sub_pq_decmp_mark_color_67_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_mark_color_dic:16;
        RBus_UInt32  s_mark_color_422:16;
    };
}mdomain_disp_dispm_sub_pq_decmp_mark_color_422_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  s_decmp_crc_error_line:14;
        RBus_UInt32  res3:2;
        RBus_UInt32  s_decmp_package_height_cnt:14;
    };
}mdomain_disp_dispm_sub_pq_decmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_decmp_crc_even_g:32;
    };
}mdomain_disp_dispm_sub_pq_decmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_decmp_crc_even_r:32;
    };
}mdomain_disp_dispm_sub_pq_decmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_decmp_crc_even_b:32;
    };
}mdomain_disp_dispm_sub_pq_decmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_decmp_pause_cycle_measure_en:1;
        RBus_UInt32  s_decmp_pause_cycle_long_term:1;
        RBus_UInt32  res1:22;
        RBus_UInt32  s_decmp_pause_cycle:8;
    };
}mdomain_disp_dispm_sub_pq_decmp_pause_cycle_RBUS;

#else //apply LITTLE_ENDIAN

//======MDOMAIN_DISP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_pre_rd_v_start:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  main_usb2vga_fmt:1;
        RBus_UInt32  main_usb2vga_en:1;
        RBus_UInt32  main_rgb2gbr_fmt:1;
        RBus_UInt32  res2:17;
    };
}mdomain_disp_ddr_mainprevstart_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_wtlvl:8;
        RBus_UInt32  main_pixel_num:14;
        RBus_UInt32  res1:10;
    };
}mdomain_disp_ddr_mainnumwtl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_read_remain:8;
        RBus_UInt32  main_read_len:8;
        RBus_UInt32  main_read_num:16;
    };
}mdomain_disp_ddr_mainrdnumlenrem_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_read_addr:29;
    };
}mdomain_disp_ddr_mainaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_addr_drop:16;
        RBus_UInt32  res1:16;
    };
}mdomain_disp_ddr_mainaddrdropbits_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_line_step:29;
    };
}mdomain_disp_ddr_mainlinestep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_block_step:29;
    };
}mdomain_disp_ddr_mainblkstep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_sec_block:29;
    };
}mdomain_disp_ddr_main2ndaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_third_block:29;
    };
}mdomain_disp_ddr_main3rdaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_line_number:13;
        RBus_UInt32  main_frame_mode:1;
        RBus_UInt32  res1:18;
    };
}mdomain_disp_ddr_mainlinenum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_use_sub_block:1;
        RBus_UInt32  main_source_sel:2;
        RBus_UInt32  main_frc_style:1;
        RBus_UInt32  main_block_free:1;
        RBus_UInt32  main_merge_en0:1;
        RBus_UInt32  main_double_en:1;
        RBus_UInt32  main_v_flip_3buf_en:1;
        RBus_UInt32  main_single_buffer_select:3;
        RBus_UInt32  main_stop_burst_en:1;
        RBus_UInt32  main_frame_seq_out_en:1;
        RBus_UInt32  main_pr_our_merge_en:1;
        RBus_UInt32  main_pr_out_merge_triple:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  main_bit_num:1;
        RBus_UInt32  main_in_format:1;
        RBus_UInt32  main_sub_swap:1;
        RBus_UInt32  maincolorspace:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  main_decompression_clk_en:1;
        RBus_UInt32  dummy18027328_22:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  main_bufnum:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  main_cap2disp_distance:3;
        RBus_UInt32  res5:1;
    };
}mdomain_disp_ddr_mainctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_disp_en:1;
        RBus_UInt32  res1:31;
    };
}mdomain_disp_disp_main_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_read_l_flag:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  main_block_select:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  main_drop_frame_sequence:3;
        RBus_UInt32  main_drop_chgflg:1;
        RBus_UInt32  main_repeat_frame_sequence:3;
        RBus_UInt32  main_repeat_chgflg:1;
        RBus_UInt32  res3:16;
    };
}mdomain_disp_ddr_mainstatus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disp1_double_apply:1;
        RBus_UInt32  disp1_double_enable:1;
        RBus_UInt32  disp1_db_rd_sel:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  disp2_double_apply:1;
        RBus_UInt32  disp2_double_enable:1;
        RBus_UInt32  disp2_db_rd_sel:1;
        RBus_UInt32  res2:13;
    };
}mdomain_disp_ddr_mainsubctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_force_blocksel_toggle_line:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  main_force_blocksel_toggle_en:1;
        RBus_UInt32  main_force_blocksel_toggle_mode:1;
        RBus_UInt32  res2:14;
    };
}mdomain_disp_main_disp_blocksel_option_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  force_dmaload_line:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  force_dmaload_mode:2;
        RBus_UInt32  force_toggle_cal_option:2;
        RBus_UInt32  res2:12;
    };
}mdomain_disp_disp_dmaload_option_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:2;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:1;
        RBus_UInt32  res10:2;
        RBus_UInt32  res11:1;
        RBus_UInt32  res12:1;
        RBus_UInt32  res13:2;
        RBus_UInt32  main_en_syn_rst:1;
        RBus_UInt32  res14:15;
    };
}mdomain_disp_ddr_mainmaskctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_mode:1;
        RBus_UInt32  chroma_format:1;
        RBus_UInt32  chroma_fir_sel:2;
        RBus_UInt32  bstlen:3;
        RBus_UInt32  res1:25;
    };
}mdomain_disp_ddr_main_bm_dma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_ads_set1:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  y_ads_set1:7;
        RBus_UInt32  res2:17;
    };
}mdomain_disp_ddr_main_bm_dma_picset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_h_offset:8;
        RBus_UInt32  y_h_shift:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  c_h_offset:8;
        RBus_UInt32  res2:8;
    };
}mdomain_disp_ddr_main_bm_h_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_v_offset:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  c_v_offset:12;
        RBus_UInt32  res2:4;
    };
}mdomain_disp_ddr_main_bm_v_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blockread_addcmd_trans_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  blockread_line_step:29;
    };
}mdomain_disp_main_block_read_addcmd_transform_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  y_ads_start:29;
    };
}mdomain_disp_main_block_read_ads_start_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  c_ads_start:29;
    };
}mdomain_disp_main_block_read_ads_start_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blockread_common_line_step_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  blockread_c_line_step:29;
    };
}mdomain_disp_main_block_read_c_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_pre_rd_v_start:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  sub_usb2vga_fmt:1;
        RBus_UInt32  sub_usb2vga_en:1;
        RBus_UInt32  sub_rgb2gbr_fmt:1;
        RBus_UInt32  res2:17;
    };
}mdomain_disp_ddr_subprevstart_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_wtlvl:8;
        RBus_UInt32  sub_pixel_num:14;
        RBus_UInt32  res1:10;
    };
}mdomain_disp_ddr_subpixnumwtl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_read_remain:8;
        RBus_UInt32  sub_read_len:8;
        RBus_UInt32  sub_read_num1:16;
    };
}mdomain_disp_ddr_subrdnumlenrem_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_read_addr:29;
    };
}mdomain_disp_ddr_subaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_addr_drop:16;
        RBus_UInt32  res1:16;
    };
}mdomain_disp_ddr_subaddrdropbits_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_line_step:29;
    };
}mdomain_disp_ddr_sublinestep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_block_step:29;
    };
}mdomain_disp_ddr_subblkstep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_sec_block:29;
    };
}mdomain_disp_ddr_sub2ndaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_third_block:29;
    };
}mdomain_disp_ddr_sub3rdaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_line_number:13;
        RBus_UInt32  sub_frame_mode:1;
        RBus_UInt32  res1:18;
    };
}mdomain_disp_ddr_sublinenum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_use_main_block:1;
        RBus_UInt32  sub_source_sel:2;
        RBus_UInt32  sub_frc_style:1;
        RBus_UInt32  sub_block_free:1;
        RBus_UInt32  sub_merge_en0:1;
        RBus_UInt32  sub_double_en:1;
        RBus_UInt32  sub_v_flip_3buf_en:1;
        RBus_UInt32  sub_single_buffer_select:3;
        RBus_UInt32  sub_stop_burst_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  sub_source_sel_at_i2rnd:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  sub_bit_num:1;
        RBus_UInt32  sub_in_format:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  subcolorspace:1;
        RBus_UInt32  sub_ddd_depth_en:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  sub_decompression_clk_en:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  sub_bufnum:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  sub_cap2disp_distance:3;
        RBus_UInt32  res7:1;
    };
}mdomain_disp_ddr_subctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_disp_en:1;
        RBus_UInt32  res1:31;
    };
}mdomain_disp_disp_sub_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  sub_block_select:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  sub_drop_frame_sequence:3;
        RBus_UInt32  sub_drop_chgflg:1;
        RBus_UInt32  sub_repeat_frame_sequence:3;
        RBus_UInt32  sub_repeat_chgflg:1;
        RBus_UInt32  res3:16;
    };
}mdomain_disp_ddr_substatus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_force_blocksel_toggle_line:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_force_blocksel_toggle_en:1;
        RBus_UInt32  sub_force_blocksel_toggle_mode:1;
        RBus_UInt32  res2:14;
    };
}mdomain_disp_sub_disp_blocksel_option_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_mpic_enable:16;
        RBus_UInt32  res1:16;
    };
}mdomain_disp_ddr_submpen_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_mp_enable:1;
        RBus_UInt32  sub_mp_mode:2;
        RBus_UInt32  sub_en_syn_rst:1;
        RBus_UInt32  sub_active_mp:4;
        RBus_UInt32  res1:24;
    };
}mdomain_disp_ddr_submpmode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_mp_line:13;
        RBus_UInt32  res1:19;
    };
}mdomain_disp_ddr_submplinenum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_end_column:9;
        RBus_UInt32  sub_limit_bank:4;
        RBus_UInt32  res1:19;
    };
}mdomain_disp_ddr_subbanklimitendcol_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_combine_fifoempty:1;
        RBus_UInt32  sub_combine_fifofull:1;
        RBus_UInt32  sub_combine_fifouf:1;
        RBus_UInt32  sub_combine_fifoof:1;
        RBus_UInt32  sub_fifoempty:1;
        RBus_UInt32  sub_fifofull:1;
        RBus_UInt32  sub_fifouf:1;
        RBus_UInt32  sub_fifoof:1;
        RBus_UInt32  sub_field:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  main_combine_fifoempty:1;
        RBus_UInt32  main_combine_fifofull:1;
        RBus_UInt32  main_combine_fifouf:1;
        RBus_UInt32  main_combine_fifoof:1;
        RBus_UInt32  main_fifoempty:1;
        RBus_UInt32  main_fifofull:1;
        RBus_UInt32  main_fifouf:1;
        RBus_UInt32  main_fifoof:1;
        RBus_UInt32  main_field:1;
        RBus_UInt32  res2:7;
    };
}mdomain_disp_disp_ddr_fifostatus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_fifoerr_wde:1;
        RBus_UInt32  sub_fifoerr_ie:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  main_fifoerr_wde:1;
        RBus_UInt32  main_fifoerr_ie:1;
        RBus_UInt32  res2:14;
    };
}mdomain_disp_disp_ie_wd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_disp_downlimit_adr:29;
    };
}mdomain_disp_dispmain_boundaryaddr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_disp_uplimit_adr:29;
    };
}mdomain_disp_dispmain_boundaryaddr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_dispuplimit_ov:1;
        RBus_UInt32  main_disp_downlimit_ov:1;
        RBus_UInt32  res1:30;
    };
}mdomain_disp_dispi1_rd_boundaryadd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_disp_downlimit_adr:29;
    };
}mdomain_disp_dispsub_boundaryaddr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_disp_uplimit_adr:29;
    };
}mdomain_disp_dispsub_boundaryaddr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_disp_uplimit_ov:1;
        RBus_UInt32  sub_disp_downlimit_ov:1;
        RBus_UInt32  res1:30;
    };
}mdomain_disp_dispi2_rd_boundaryadd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_r_first_addr:29;
    };
}mdomain_disp_ddr_main_r_1st_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_r_second_addr:29;
    };
}mdomain_disp_ddr_main_r_2nd_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_r_third_addr:29;
    };
}mdomain_disp_ddr_main_r_3rd_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_under_size:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  sub_drop:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  sub_repeat_1x:1;
        RBus_UInt32  sub_repeat_2x:1;
        RBus_UInt32  sub_repeat_3x:1;
        RBus_UInt32  sub_repeat_4x:1;
        RBus_UInt32  res3:8;
        RBus_UInt32  main_under_size:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  main_drop:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  main_repeat_1x:1;
        RBus_UInt32  main_repeat_2x:1;
        RBus_UInt32  main_repeat_3x:1;
        RBus_UInt32  main_repeat_4x:1;
        RBus_UInt32  res6:8;
    };
}mdomain_disp_disp_help_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_dma_mode:1;
        RBus_UInt32  sub_chroma_format:1;
        RBus_UInt32  sub_chroma_fir_sel:2;
        RBus_UInt32  sub_bstlen:3;
        RBus_UInt32  res1:25;
    };
}mdomain_disp_ddr_sub_bm_dma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_c_ads_set1:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  sub_y_ads_set1:7;
        RBus_UInt32  res2:17;
    };
}mdomain_disp_ddr_sub_bm_dma_picset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_y_h_offset:8;
        RBus_UInt32  sub_y_h_shift:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  sub_c_h_offset:8;
        RBus_UInt32  res2:8;
    };
}mdomain_disp_ddr_sub_bm_h_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_y_v_offset:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  sub_c_v_offset:12;
        RBus_UInt32  res2:4;
    };
}mdomain_disp_ddr_sub_bm_v_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_blockread_addcmd_trans_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  sub_blockread_line_step:29;
    };
}mdomain_disp_sub_block_read_addcmd_transform_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_y_ads_start:29;
    };
}mdomain_disp_sub_block_read_ads_start_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_c_ads_start:29;
    };
}mdomain_disp_sub_block_read_ads_start_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_blockread_common_line_step_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  sub_blockread_c_line_step:29;
    };
}mdomain_disp_sub_block_read_c_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_bist_mode_mbist_cap_main:1;
        RBus_UInt32  dispm_bist_mode_mbist_disp_main:1;
        RBus_UInt32  dispm_bist_mode_mbist_cap_sub:1;
        RBus_UInt32  dispm_bist_mode_mbist_disp_sub:1;
        RBus_UInt32  dispm_bist_mode_mbist_pqdc1:1;
        RBus_UInt32  dispm_bist_mode_mbist_dispm_fsbuf:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dispm_bist_mode_mbist_pqdc2:1;
        RBus_UInt32  dispm_bist_mode_pqc2:1;
        RBus_UInt32  dispm_bist_mode_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_bist_mode_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_bist_mode_pqc2_sub:1;
        RBus_UInt32  dispm_bist_mode_pqc1_sub:1;
        RBus_UInt32  res2:19;
    };
}mdomain_disp_dispm_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_bist_done_mbist_cap_main:1;
        RBus_UInt32  dispm_bist_done_mbist_disp_main:1;
        RBus_UInt32  dispm_bist_done_mbist_cap_sub:1;
        RBus_UInt32  dispm_bist_done_mbist_disp_sub:1;
        RBus_UInt32  dispm_bist_done_mbist_pqdc1:1;
        RBus_UInt32  dispm_bist_done_mbist_dispm_fsbuf:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dispm_bist_done_mbist_pqdc2:1;
        RBus_UInt32  dispm_bist_done_pqc2:1;
        RBus_UInt32  dispm_bist_done_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_bist_done_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_bist_done_pqc2_sub:1;
        RBus_UInt32  dispm_bist_done_pqc1_sub:1;
        RBus_UInt32  res2:19;
    };
}mdomain_disp_dispm_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_bist_fail_group_mbist_cap_main:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_disp_main:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_cap_sub:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_disp_sub:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_pqdc1:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_dispm_fsbuf:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_pqdc2:1;
        RBus_UInt32  dispm_bist_fail_group_pqc2:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_bist_fail_group_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_bist_fail_group_pqc2_sub:1;
        RBus_UInt32  dispm_bist_fail_group_pqc1_sub:1;
        RBus_UInt32  res2:19;
    };
}mdomain_disp_dispm_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_drf_mode_mbist_cap_main:1;
        RBus_UInt32  dispm_drf_mode_mbist_disp_main:1;
        RBus_UInt32  dispm_drf_mode_mbist_cap_sub:1;
        RBus_UInt32  dispm_drf_mode_mbist_disp_sub:1;
        RBus_UInt32  dispm_drf_mode_mbist_pqdc1:1;
        RBus_UInt32  dispm_drf_mode_mbist_dispm_fsbuf:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dispm_drf_mode_mbist_pqdc2:1;
        RBus_UInt32  dispm_drf_mode_pqc2:1;
        RBus_UInt32  dispm_drf_mode_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_drf_mode_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_drf_mode_pqc2_sub:1;
        RBus_UInt32  dispm_drf_mode_pqc1_sub:1;
        RBus_UInt32  res2:19;
    };
}mdomain_disp_dispm_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_drf_resume_mbist_cap_main:1;
        RBus_UInt32  dispm_drf_resume_mbist_disp_main:1;
        RBus_UInt32  dispm_drf_resume_mbist_cap_sub:1;
        RBus_UInt32  dispm_drf_resume_mbist_disp_sub:1;
        RBus_UInt32  dispm_drf_resume_mbist_pqdc1:1;
        RBus_UInt32  dispm_drf_resume_mbist_dispm_fsbuf:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dispm_drf_resume_mbist_pqdc2:1;
        RBus_UInt32  dispm_drf_resume_pqc2:1;
        RBus_UInt32  dispm_drf_resume_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_drf_resume_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_drf_resume_pqc2_sub:1;
        RBus_UInt32  dispm_drf_resume_pqc1_sub:1;
        RBus_UInt32  res2:19;
    };
}mdomain_disp_dispm_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_drf_done_mbist_cap_main:1;
        RBus_UInt32  dispm_drf_done_mbist_disp_main:1;
        RBus_UInt32  dispm_drf_done_mbist_cap_sub:1;
        RBus_UInt32  dispm_drf_done_mbist_disp_sub:1;
        RBus_UInt32  dispm_drf_done_mbist_pqdc1:1;
        RBus_UInt32  dispm_drf_done_mbist_dispm_fsbuf:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dispm_drf_done_mbist_pqdc2:1;
        RBus_UInt32  dispm_drf_done_pqc2:1;
        RBus_UInt32  dispm_drf_done_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_drf_done_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_drf_done_pqc2_sub:1;
        RBus_UInt32  dispm_drf_done_pqc1_sub:1;
        RBus_UInt32  res2:19;
    };
}mdomain_disp_dispm_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_drf_pause_mbist_cap_main:1;
        RBus_UInt32  dispm_drf_pause_mbist_disp_main:1;
        RBus_UInt32  dispm_drf_pause_mbist_cap_sub:1;
        RBus_UInt32  dispm_drf_pause_mbist_disp_sub:1;
        RBus_UInt32  dispm_drf_pause_mbist_pqdc1:1;
        RBus_UInt32  dispm_drf_pause_mbist_dispm_fsbuf:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dispm_drf_pause_mbist_pqdc2:1;
        RBus_UInt32  dispm_drf_pause_pqc2:1;
        RBus_UInt32  dispm_drf_pause_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_drf_pause_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_drf_pause_pqc2_sub:1;
        RBus_UInt32  dispm_drf_pause_pqc1_sub:1;
        RBus_UInt32  res2:19;
    };
}mdomain_disp_dispm_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_drf_fail_group_mbist_cap_main:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_disp_main:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_cap_sub:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_disp_sub:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_pqdc1:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_dispm_fsbuf:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_pqdc2:1;
        RBus_UInt32  dispm_drf_fail_group_pqc2:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_drf_fail_group_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_drf_fail_group_pqc2_sub:1;
        RBus_UInt32  dispm_drf_fail_group_pqc1_sub:1;
        RBus_UInt32  res2:19;
    };
}mdomain_disp_dispm_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_rma_mbist_cap_main:4;
        RBus_UInt32  dispm_rmb_mbist_cap_main:4;
        RBus_UInt32  dispm_rma_mbist_cap_sub:4;
        RBus_UInt32  dispm_rmb_mbist_cap_sub:4;
        RBus_UInt32  dispm_rma_mbist_disp_main:4;
        RBus_UInt32  dispm_rmb_mbist_disp_main:4;
        RBus_UInt32  dispm_rma_mbist_disp_sub:4;
        RBus_UInt32  dispm_rmb_mbist_disp_sub:4;
    };
}mdomain_disp_dispm_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_rmea_mbist_cap_main:1;
        RBus_UInt32  dispm_rmeb_mbist_cap_main:1;
        RBus_UInt32  dispm_rmea_mbist_cap_sub:1;
        RBus_UInt32  dispm_rmeb_mbist_cap_sub:1;
        RBus_UInt32  dispm_rmea_mbist_disp_main:1;
        RBus_UInt32  dispm_rmeb_mbist_disp_main:1;
        RBus_UInt32  dispm_rmea_mbist_disp_sub:1;
        RBus_UInt32  dispm_rmeb_mbist_disp_sub:1;
        RBus_UInt32  res1:24;
    };
}mdomain_disp_dispm_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ls_mbist_cap_main:1;
        RBus_UInt32  dispm_ls_mbist_cap_sub:1;
        RBus_UInt32  dispm_ls_mbist_disp_main:1;
        RBus_UInt32  dispm_ls_mbist_disp_sub:1;
        RBus_UInt32  dispm_rm_pqc1_0_sub:4;
        RBus_UInt32  dispm_rme_pqc1_0_sub:1;
        RBus_UInt32  dispm_ls_pqc1_0_sub:1;
        RBus_UInt32  res1:22;
    };
}mdomain_disp_dispm_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_rm_mbist_pqdc1:4;
        RBus_UInt32  dispm_rme_mbist_pqdc1:1;
        RBus_UInt32  dispm_ls_mbist_pqdc1:1;
        RBus_UInt32  dispm_rm_mbist_pqdc2:4;
        RBus_UInt32  dispm_rme_mbist_pqdc2:1;
        RBus_UInt32  dispm_ls_mbist_pqdc2:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  dispm_rm_mbist_pqdc1_sub:4;
        RBus_UInt32  dispm_rme_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_ls_mbist_pqdc1_sub:1;
        RBus_UInt32  dispm_rm_mbist_pqdc2_sub:4;
        RBus_UInt32  dispm_rme_mbist_pqdc2_sub:1;
        RBus_UInt32  dispm_ls_mbist_pqdc2_sub:1;
        RBus_UInt32  res2:4;
    };
}mdomain_disp_dispm_decomp_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_rm_pqc2_0:4;
        RBus_UInt32  dispm_rme_pqc2_0:1;
        RBus_UInt32  dispm_ls_pqc2_0:1;
        RBus_UInt32  dispm_rm_pqc2_1:4;
        RBus_UInt32  dispm_rme_pqc2_1:1;
        RBus_UInt32  dispm_ls_pqc2_1:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  dispm_rm_pqc2_0_sub:4;
        RBus_UInt32  dispm_rme_pqc2_0_sub:1;
        RBus_UInt32  dispm_ls_pqc2_0_sub:1;
        RBus_UInt32  dispm_rm_pqc2_1_sub:4;
        RBus_UInt32  dispm_rme_pqc2_1_sub:1;
        RBus_UInt32  dispm_ls_pqc2_1_sub:1;
        RBus_UInt32  res2:4;
    };
}mdomain_disp_dispm_comp_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sdnr_fsbuf_dvs0:4;
        RBus_UInt32  sdnr_fsbuf_dvse0:1;
        RBus_UInt32  sdnr_fsbuf_ls_en0:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  sdnr_fsbuf_dvs1:4;
        RBus_UInt32  sdnr_fsbuf_dvse1:1;
        RBus_UInt32  sdnr_fsbuf_ls_en1:1;
        RBus_UInt32  res2:10;
    };
}mdomain_disp_dispm_fsbuf_rm01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sdnr_fsbuf_dvs2:4;
        RBus_UInt32  sdnr_fsbuf_dvse2:1;
        RBus_UInt32  sdnr_fsbuf_ls_en2:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  sdnr_fsbuf_dvs3:4;
        RBus_UInt32  sdnr_fsbuf_dvse3:1;
        RBus_UInt32  sdnr_fsbuf_ls_en3:1;
        RBus_UInt32  res2:10;
    };
}mdomain_disp_dispm_fsbuf_rm23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_rate_en:1;
        RBus_UInt32  res1:31;
    };
}mdomain_disp_disp_dma_rate_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_rate:32;
    };
}mdomain_disp_display_rate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_1byte_swap:1;
        RBus_UInt32  main_2byte_swap:1;
        RBus_UInt32  main_4byte_swap:1;
        RBus_UInt32  main_8byte_swap:1;
        RBus_UInt32  main_channel_swap:3;
        RBus_UInt32  res1:25;
    };
}mdomain_disp_display_byte_channel_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_1byte_swap:1;
        RBus_UInt32  sub_2byte_swap:1;
        RBus_UInt32  sub_4byte_swap:1;
        RBus_UInt32  sub_8byte_swap:1;
        RBus_UInt32  sub_channel_swap:3;
        RBus_UInt32  res1:25;
    };
}mdomain_disp_display_sub_byte_channel_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_count:24;
        RBus_UInt32  res1:7;
        RBus_UInt32  dispm_ddr_checksum_en:1;
    };
}mdomain_disp_dispm_ddr_checksum_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_flag_127_96:32;
    };
}mdomain_disp_dispm_ddr_checksum_flag_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_flag_95_64:32;
    };
}mdomain_disp_dispm_ddr_checksum_flag_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_flag_63_32:32;
    };
}mdomain_disp_dispm_ddr_checksum_flag_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_flag_31_0:32;
    };
}mdomain_disp_dispm_ddr_checksum_flag_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_mask_127_96:32;
    };
}mdomain_disp_dispm_ddr_checksum_mask_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_mask_95_64:32;
    };
}mdomain_disp_dispm_ddr_checksum_mask_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_mask_63_32:32;
    };
}mdomain_disp_dispm_ddr_checksum_mask_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_ddr_error_mask_31_0:32;
    };
}mdomain_disp_dispm_ddr_checksum_mask_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_0:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_1:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_2:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_3:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_4:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_5:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_6:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_7:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_8:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_9:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_10:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_11:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_12:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_0_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_1_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_2_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_3_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_4_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_5_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_6_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_7_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_8_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_9_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_10_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_11_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_bist_fail_12_sub:1;
        RBus_UInt32  dispm_pqc_pqc1_bist_fail_0_sub:1;
        RBus_UInt32  res2:2;
    };
}mdomain_disp_dispm_pqc_bist_cap_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_0:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_1:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_2:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_3:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_4:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_5:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_6:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_7:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_8:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_9:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_10:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_11:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_12:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_0_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_1_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_2_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_3_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_4_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_5_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_6_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_7_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_8_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_9_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_10_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_11_sub:1;
        RBus_UInt32  dispm_pqc_pqc2_drf_fail_12_sub:1;
        RBus_UInt32  dispm_pqc_pqc1_drf_fail_0_sub:1;
        RBus_UInt32  res2:2;
    };
}mdomain_disp_dispm_pqc_drf_cap_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_forth_block:29;
    };
}mdomain_disp_main_forth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_fifth_block:29;
    };
}mdomain_disp_main_fifth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_sixth_block:29;
    };
}mdomain_disp_main_sixth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_seventh_block:29;
    };
}mdomain_disp_main_seventh_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_eightth_block:29;
    };
}mdomain_disp_main_eightth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_r_forth_addr:29;
    };
}mdomain_disp_main_r_forth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_r_fifth_addr:29;
    };
}mdomain_disp_main_r_fifth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_r_sixth_addr:29;
    };
}mdomain_disp_main_r_sixth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_r_seventh_addr:29;
    };
}mdomain_disp_main_r_seventh_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_r_eightth_addr:29;
    };
}mdomain_disp_main_r_eightth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_forth_block:29;
    };
}mdomain_disp_sub_forth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_fifth_block:29;
    };
}mdomain_disp_sub_fifth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_sixth_block:29;
    };
}mdomain_disp_sub_sixth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_seventh_block:29;
    };
}mdomain_disp_sub_seventh_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_eightth_block:29;
    };
}mdomain_disp_sub_eightth_buf_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  main_disp_boundary_limit_mode:1;
        RBus_UInt32  res1:31;
    };
}mdomain_disp_dispmain_boundaryaddr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_disp_downlimit_blk0_adr:29;
    };
}mdomain_disp_dispmain_boundaryaddr_blk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_disp_uplimit_blk0_adr:29;
    };
}mdomain_disp_dispmain_boundaryaddr2_blk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_disp_downlimit_blk1_adr:29;
    };
}mdomain_disp_dispmain_boundaryaddr_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_disp_uplimit_blk1_adr:29;
    };
}mdomain_disp_dispmain_boundaryaddr2_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_disp_downlimit_blk2_adr:29;
    };
}mdomain_disp_dispmain_boundaryaddr_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  main_disp_uplimit_blk2_adr:29;
    };
}mdomain_disp_dispmain_boundaryaddr2_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sub_disp_boundary_limit_mode:1;
        RBus_UInt32  res1:31;
    };
}mdomain_disp_dispsub_boundaryaddr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_disp_downlimit_blk0_adr:29;
    };
}mdomain_disp_dispsub_boundaryaddr_blk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_disp_uplimit_blk0_adr:29;
    };
}mdomain_disp_dispsub_boundaryaddr2_blk0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_disp_downlimit_blk1_adr:29;
    };
}mdomain_disp_dispsub_boundaryaddr_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_disp_uplimit_blk1_adr:29;
    };
}mdomain_disp_dispsub_boundaryaddr2_blk1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_disp_downlimit_blk2_adr:29;
    };
}mdomain_disp_dispsub_boundaryaddr_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sub_disp_uplimit_blk2_adr:29;
    };
}mdomain_disp_dispsub_boundaryaddr2_blk2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_height:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  decmp_width_div32:9;
        RBus_UInt32  res2:6;
        RBus_UInt32  decmp_en:1;
    };
}mdomain_disp_dispm_main_pq_decmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_data_format:2;
        RBus_UInt32  decmp_data_bit_width:2;
        RBus_UInt32  decmp_data_color:1;
        RBus_UInt32  decmp_line_mode:1;
        RBus_UInt32  decmp_two_line_prediction_en:1;
        RBus_UInt32  decmp_dic_mode_en:1;
        RBus_UInt32  decmp_qp_mode:2;
        RBus_UInt32  decmp_jump4_en:1;
        RBus_UInt32  dummy18027604_14_11:4;
        RBus_UInt32  decmp_400_old_mode_en:1;
        RBus_UInt32  decmp_line_sum_bit:16;
    };
}mdomain_disp_dispm_main_pq_decmp_pair_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  saturation_en:1;
        RBus_UInt32  saturation_type:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  decmp_crc_ro_line_sel:14;
        RBus_UInt32  res2:2;
    };
}mdomain_disp_dispm_main_pq_decmp_sat_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:10;
        RBus_UInt32  crc_b_error_even_en:1;
        RBus_UInt32  crc_g_error_even_en:1;
        RBus_UInt32  crc_r_error_even_en:1;
        RBus_UInt32  dic_error_even_en:1;
        RBus_UInt32  underflow_irq_even_en:1;
        RBus_UInt32  not_finish_irq_even_en:1;
        RBus_UInt32  res8:10;
    };
}mdomain_disp_dispm_main_pq_decmp_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:2;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:1;
        RBus_UInt32  res10:1;
        RBus_UInt32  res11:1;
        RBus_UInt32  res12:4;
        RBus_UInt32  crc_b_error_even_st:1;
        RBus_UInt32  crc_g_error_even_st:1;
        RBus_UInt32  crc_r_error_even_st:1;
        RBus_UInt32  dic_error_even_st:1;
        RBus_UInt32  underflow_irq_even_st:1;
        RBus_UInt32  not_finish_irq_even_st:1;
        RBus_UInt32  res13:2;
        RBus_UInt32  ring_b_overflow_even_st:1;
        RBus_UInt32  ring_g_overflow_even_st:1;
        RBus_UInt32  ring_r_overflow_even_st:1;
        RBus_UInt32  in_fifo_overflow_even_st:1;
        RBus_UInt32  res14:3;
        RBus_UInt32  pqdc_irq:1;
    };
}mdomain_disp_dispm_main_pq_decmp_irq_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_en_qp0:1;
        RBus_UInt32  mark_en_qp1:1;
        RBus_UInt32  mark_en_qp2:1;
        RBus_UInt32  mark_en_qp3:1;
        RBus_UInt32  mark_en_qp4:1;
        RBus_UInt32  mark_en_qp5:1;
        RBus_UInt32  mark_en_qp6:1;
        RBus_UInt32  mark_en_qp7:1;
        RBus_UInt32  res1:8;
        RBus_UInt32  mark_en_qp_sel:1;
        RBus_UInt32  mark_en_dic:1;
        RBus_UInt32  res2:13;
        RBus_UInt32  mark_en_do_422:1;
    };
}mdomain_disp_dispm_main_pq_decmp_mark_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_1:16;
        RBus_UInt32  mark_color_0:16;
    };
}mdomain_disp_dispm_main_pq_decmp_mark_color_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_3:16;
        RBus_UInt32  mark_color_2:16;
    };
}mdomain_disp_dispm_main_pq_decmp_mark_color_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_5:16;
        RBus_UInt32  mark_color_4:16;
    };
}mdomain_disp_dispm_main_pq_decmp_mark_color_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_7:16;
        RBus_UInt32  mark_color_6:16;
    };
}mdomain_disp_dispm_main_pq_decmp_mark_color_67_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mark_color_422:16;
        RBus_UInt32  mark_color_dic:16;
    };
}mdomain_disp_dispm_main_pq_decmp_mark_color_422_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_package_height_cnt:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  decmp_crc_error_line:14;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
    };
}mdomain_disp_dispm_main_pq_decmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_g:32;
    };
}mdomain_disp_dispm_main_pq_decmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_r:32;
    };
}mdomain_disp_dispm_main_pq_decmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_crc_even_b:32;
    };
}mdomain_disp_dispm_main_pq_decmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decmp_pause_cycle:8;
        RBus_UInt32  res1:22;
        RBus_UInt32  decmp_pause_cycle_long_term:1;
        RBus_UInt32  decmp_pause_cycle_measure_en:1;
    };
}mdomain_disp_dispm_main_pq_decmp_pause_cycle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_decmp_height:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  s_decmp_width_div32:9;
        RBus_UInt32  res2:6;
        RBus_UInt32  s_decmp_en:1;
    };
}mdomain_disp_dispm_sub_pq_decmp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_decmp_data_format:2;
        RBus_UInt32  s_decmp_data_bit_width:2;
        RBus_UInt32  s_decmp_data_color:1;
        RBus_UInt32  s_decmp_line_mode:1;
        RBus_UInt32  s_decmp_two_line_prediction_en:1;
        RBus_UInt32  s_decmp_dic_mode_en:1;
        RBus_UInt32  s_decmp_qp_mode:2;
        RBus_UInt32  s_decmp_jump4_en:1;
        RBus_UInt32  dummy18027684_14_11:4;
        RBus_UInt32  s_decmp_400_old_mode_en:1;
        RBus_UInt32  s_decmp_line_sum_bit:16;
    };
}mdomain_disp_dispm_sub_pq_decmp_pair_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_saturation_en:1;
        RBus_UInt32  s_saturation_type:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  s_decmp_crc_ro_line_sel:14;
        RBus_UInt32  res2:2;
    };
}mdomain_disp_dispm_sub_pq_decmp_sat_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:10;
        RBus_UInt32  s_crc_b_error_even_en:1;
        RBus_UInt32  s_crc_g_error_even_en:1;
        RBus_UInt32  s_crc_r_error_even_en:1;
        RBus_UInt32  s_dic_error_even_en:1;
        RBus_UInt32  s_underflow_irq_even_en:1;
        RBus_UInt32  s_not_finish_irq_even_en:1;
        RBus_UInt32  res8:10;
    };
}mdomain_disp_dispm_sub_pq_decmp_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:2;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:1;
        RBus_UInt32  res10:1;
        RBus_UInt32  res11:1;
        RBus_UInt32  res12:4;
        RBus_UInt32  s_crc_b_error_even_st:1;
        RBus_UInt32  s_crc_g_error_even_st:1;
        RBus_UInt32  s_crc_r_error_even_st:1;
        RBus_UInt32  s_dic_error_even_st:1;
        RBus_UInt32  s_underflow_irq_even_st:1;
        RBus_UInt32  s_not_finish_irq_even_st:1;
        RBus_UInt32  res13:2;
        RBus_UInt32  s_ring_b_overflow_even_st:1;
        RBus_UInt32  s_ring_g_overflow_even_st:1;
        RBus_UInt32  s_ring_r_overflow_even_st:1;
        RBus_UInt32  s_in_fifo_overflow_even_st:1;
        RBus_UInt32  res14:3;
        RBus_UInt32  s_pqdc_irq:1;
    };
}mdomain_disp_dispm_sub_pq_decmp_irq_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_mark_en_qp0:1;
        RBus_UInt32  s_mark_en_qp1:1;
        RBus_UInt32  s_mark_en_qp2:1;
        RBus_UInt32  s_mark_en_qp3:1;
        RBus_UInt32  s_mark_en_qp4:1;
        RBus_UInt32  s_mark_en_qp5:1;
        RBus_UInt32  s_mark_en_qp6:1;
        RBus_UInt32  s_mark_en_qp7:1;
        RBus_UInt32  res1:8;
        RBus_UInt32  s_mark_en_qp_sel:1;
        RBus_UInt32  s_mark_en_dic:1;
        RBus_UInt32  res2:13;
        RBus_UInt32  s_mark_en_do_422:1;
    };
}mdomain_disp_dispm_sub_pq_decmp_mark_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_mark_color_1:16;
        RBus_UInt32  s_mark_color_0:16;
    };
}mdomain_disp_dispm_sub_pq_decmp_mark_color_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_mark_color_3:16;
        RBus_UInt32  s_mark_color_2:16;
    };
}mdomain_disp_dispm_sub_pq_decmp_mark_color_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_mark_color_5:16;
        RBus_UInt32  s_mark_color_4:16;
    };
}mdomain_disp_dispm_sub_pq_decmp_mark_color_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_mark_color_7:16;
        RBus_UInt32  s_mark_color_6:16;
    };
}mdomain_disp_dispm_sub_pq_decmp_mark_color_67_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_mark_color_422:16;
        RBus_UInt32  s_mark_color_dic:16;
    };
}mdomain_disp_dispm_sub_pq_decmp_mark_color_422_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_decmp_package_height_cnt:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  s_decmp_crc_error_line:14;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
    };
}mdomain_disp_dispm_sub_pq_decmp_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_decmp_crc_even_g:32;
    };
}mdomain_disp_dispm_sub_pq_decmp_crc_even_g_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_decmp_crc_even_r:32;
    };
}mdomain_disp_dispm_sub_pq_decmp_crc_even_r_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_decmp_crc_even_b:32;
    };
}mdomain_disp_dispm_sub_pq_decmp_crc_even_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  s_decmp_pause_cycle:8;
        RBus_UInt32  res1:22;
        RBus_UInt32  s_decmp_pause_cycle_long_term:1;
        RBus_UInt32  s_decmp_pause_cycle_measure_en:1;
    };
}mdomain_disp_dispm_sub_pq_decmp_pause_cycle_RBUS;




#endif 


#endif 
