/**
* @file Merlin5_DesignSpec_Vby1_OSD
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_VBY1_OSD_REG_H_
#define _RBUS_VBY1_OSD_REG_H_

#include "rbus_types.h"



//  VBY1_OSD Register Address
#define  VBY1_OSD_OSD_VIDEO_FORMAT                                              0x1802D800
#define  VBY1_OSD_OSD_VIDEO_FORMAT_reg_addr                                      "0xB802D800"
#define  VBY1_OSD_OSD_VIDEO_FORMAT_reg                                           0xB802D800
#define  VBY1_OSD_OSD_VIDEO_FORMAT_inst_addr                                     "0x0000"
#define  set_VBY1_OSD_OSD_VIDEO_FORMAT_reg(data)                                 (*((volatile unsigned int*)VBY1_OSD_OSD_VIDEO_FORMAT_reg)=data)
#define  get_VBY1_OSD_OSD_VIDEO_FORMAT_reg                                       (*((volatile unsigned int*)VBY1_OSD_OSD_VIDEO_FORMAT_reg))
#define  VBY1_OSD_OSD_VIDEO_FORMAT_vby1_aphy0_7_in_sel_shift                     (28)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_vby1_aphy8_15_in_sel_shift                    (26)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_lclk_inv_sel_shift                            (23)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_vby1_dclk_div_sel_shift                       (20)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_color_format_shift                            (16)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_win_shift                                     (0)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_vby1_aphy0_7_in_sel_mask                      (0x30000000)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_vby1_aphy8_15_in_sel_mask                     (0x0C000000)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_lclk_inv_sel_mask                             (0x00800000)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_vby1_dclk_div_sel_mask                        (0x00700000)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_color_format_mask                             (0x000F0000)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_win_mask                                      (0x000003FF)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_vby1_aphy0_7_in_sel(data)                     (0x30000000&((data)<<28))
#define  VBY1_OSD_OSD_VIDEO_FORMAT_vby1_aphy8_15_in_sel(data)                    (0x0C000000&((data)<<26))
#define  VBY1_OSD_OSD_VIDEO_FORMAT_lclk_inv_sel(data)                            (0x00800000&((data)<<23))
#define  VBY1_OSD_OSD_VIDEO_FORMAT_vby1_dclk_div_sel(data)                       (0x00700000&((data)<<20))
#define  VBY1_OSD_OSD_VIDEO_FORMAT_color_format(data)                            (0x000F0000&((data)<<16))
#define  VBY1_OSD_OSD_VIDEO_FORMAT_win(data)                                     (0x000003FF&(data))
#define  VBY1_OSD_OSD_VIDEO_FORMAT_get_vby1_aphy0_7_in_sel(data)                 ((0x30000000&(data))>>28)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_get_vby1_aphy8_15_in_sel(data)                ((0x0C000000&(data))>>26)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_get_lclk_inv_sel(data)                        ((0x00800000&(data))>>23)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_get_vby1_dclk_div_sel(data)                   ((0x00700000&(data))>>20)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_get_color_format(data)                        ((0x000F0000&(data))>>16)
#define  VBY1_OSD_OSD_VIDEO_FORMAT_get_win(data)                                 (0x000003FF&(data))

#define  VBY1_OSD_OSD_LANE_STATUS                                               0x1802D804
#define  VBY1_OSD_OSD_LANE_STATUS_reg_addr                                       "0xB802D804"
#define  VBY1_OSD_OSD_LANE_STATUS_reg                                            0xB802D804
#define  VBY1_OSD_OSD_LANE_STATUS_inst_addr                                      "0x0001"
#define  set_VBY1_OSD_OSD_LANE_STATUS_reg(data)                                  (*((volatile unsigned int*)VBY1_OSD_OSD_LANE_STATUS_reg)=data)
#define  get_VBY1_OSD_OSD_LANE_STATUS_reg                                        (*((volatile unsigned int*)VBY1_OSD_OSD_LANE_STATUS_reg))
#define  VBY1_OSD_OSD_LANE_STATUS_lane_count_shift                               (16)
#define  VBY1_OSD_OSD_LANE_STATUS_byte_mode_shift                                (0)
#define  VBY1_OSD_OSD_LANE_STATUS_lane_count_mask                                (0x001F0000)
#define  VBY1_OSD_OSD_LANE_STATUS_byte_mode_mask                                 (0x00000007)
#define  VBY1_OSD_OSD_LANE_STATUS_lane_count(data)                               (0x001F0000&((data)<<16))
#define  VBY1_OSD_OSD_LANE_STATUS_byte_mode(data)                                (0x00000007&(data))
#define  VBY1_OSD_OSD_LANE_STATUS_get_lane_count(data)                           ((0x001F0000&(data))>>16)
#define  VBY1_OSD_OSD_LANE_STATUS_get_byte_mode(data)                            (0x00000007&(data))

#define  VBY1_OSD_OSD_CTL                                                       0x1802D808
#define  VBY1_OSD_OSD_CTL_reg_addr                                               "0xB802D808"
#define  VBY1_OSD_OSD_CTL_reg                                                    0xB802D808
#define  VBY1_OSD_OSD_CTL_inst_addr                                              "0x0002"
#define  set_VBY1_OSD_OSD_CTL_reg(data)                                          (*((volatile unsigned int*)VBY1_OSD_OSD_CTL_reg)=data)
#define  get_VBY1_OSD_OSD_CTL_reg                                                (*((volatile unsigned int*)VBY1_OSD_OSD_CTL_reg))
#define  VBY1_OSD_OSD_CTL_ctl_shift                                              (0)
#define  VBY1_OSD_OSD_CTL_ctl_mask                                               (0x0000FFFF)
#define  VBY1_OSD_OSD_CTL_ctl(data)                                              (0x0000FFFF&(data))
#define  VBY1_OSD_OSD_CTL_get_ctl(data)                                          (0x0000FFFF&(data))

#define  VBY1_OSD_OSD_TRANSMIT_CONTROL                                          0x1802D80C
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_reg_addr                                  "0xB802D80C"
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_reg                                       0xB802D80C
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_inst_addr                                 "0x0003"
#define  set_VBY1_OSD_OSD_TRANSMIT_CONTROL_reg(data)                             (*((volatile unsigned int*)VBY1_OSD_OSD_TRANSMIT_CONTROL_reg)=data)
#define  get_VBY1_OSD_OSD_TRANSMIT_CONTROL_reg                                   (*((volatile unsigned int*)VBY1_OSD_OSD_TRANSMIT_CONTROL_reg))
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_reg_en_shift                              (31)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_pll_stable_shift                          (30)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_transfer_en_shift                         (29)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_video_trans_mode_shift                    (28)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_debounce_cnt_shift                        (24)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_bs_after_aln_shift                        (23)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_be_before_aln_shift                       (22)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_reg_delay_shift                           (0)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_reg_en_mask                               (0x80000000)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_pll_stable_mask                           (0x40000000)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_transfer_en_mask                          (0x20000000)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_video_trans_mode_mask                     (0x10000000)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_debounce_cnt_mask                         (0x0F000000)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_bs_after_aln_mask                         (0x00800000)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_be_before_aln_mask                        (0x00400000)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_reg_delay_mask                            (0x003FFFFF)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_reg_en(data)                              (0x80000000&((data)<<31))
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_pll_stable(data)                          (0x40000000&((data)<<30))
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_transfer_en(data)                         (0x20000000&((data)<<29))
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_video_trans_mode(data)                    (0x10000000&((data)<<28))
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_debounce_cnt(data)                        (0x0F000000&((data)<<24))
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_bs_after_aln(data)                        (0x00800000&((data)<<23))
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_be_before_aln(data)                       (0x00400000&((data)<<22))
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_reg_delay(data)                           (0x003FFFFF&(data))
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_get_reg_en(data)                          ((0x80000000&(data))>>31)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_get_pll_stable(data)                      ((0x40000000&(data))>>30)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_get_transfer_en(data)                     ((0x20000000&(data))>>29)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_get_video_trans_mode(data)                ((0x10000000&(data))>>28)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_get_debounce_cnt(data)                    ((0x0F000000&(data))>>24)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_get_bs_after_aln(data)                    ((0x00800000&(data))>>23)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_get_be_before_aln(data)                   ((0x00400000&(data))>>22)
#define  VBY1_OSD_OSD_TRANSMIT_CONTROL_get_reg_delay(data)                       (0x003FFFFF&(data))

#define  VBY1_OSD_OSD_TRANSMIT_STATUS                                           0x1802D810
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_reg_addr                                   "0xB802D810"
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_reg                                        0xB802D810
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_inst_addr                                  "0x0004"
#define  set_VBY1_OSD_OSD_TRANSMIT_STATUS_reg(data)                              (*((volatile unsigned int*)VBY1_OSD_OSD_TRANSMIT_STATUS_reg)=data)
#define  get_VBY1_OSD_OSD_TRANSMIT_STATUS_reg                                    (*((volatile unsigned int*)VBY1_OSD_OSD_TRANSMIT_STATUS_reg))
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_dummy_31_8_shift                           (8)
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_aln_finish_shift                           (5)
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_video_en_shift                             (2)
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_aln_en_shift                               (1)
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_cdr_en_shift                               (0)
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_dummy_31_8_mask                            (0xFFFFFF00)
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_aln_finish_mask                            (0x00000020)
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_video_en_mask                              (0x00000004)
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_aln_en_mask                                (0x00000002)
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_cdr_en_mask                                (0x00000001)
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_dummy_31_8(data)                           (0xFFFFFF00&((data)<<8))
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_aln_finish(data)                           (0x00000020&((data)<<5))
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_video_en(data)                             (0x00000004&((data)<<2))
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_aln_en(data)                               (0x00000002&((data)<<1))
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_cdr_en(data)                               (0x00000001&(data))
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_get_dummy_31_8(data)                       ((0xFFFFFF00&(data))>>8)
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_get_aln_finish(data)                       ((0x00000020&(data))>>5)
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_get_video_en(data)                         ((0x00000004&(data))>>2)
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_get_aln_en(data)                           ((0x00000002&(data))>>1)
#define  VBY1_OSD_OSD_TRANSMIT_STATUS_get_cdr_en(data)                           (0x00000001&(data))

#define  VBY1_OSD_OSD_THREE_FLAG                                                0x1802D814
#define  VBY1_OSD_OSD_THREE_FLAG_reg_addr                                        "0xB802D814"
#define  VBY1_OSD_OSD_THREE_FLAG_reg                                             0xB802D814
#define  VBY1_OSD_OSD_THREE_FLAG_inst_addr                                       "0x0005"
#define  set_VBY1_OSD_OSD_THREE_FLAG_reg(data)                                   (*((volatile unsigned int*)VBY1_OSD_OSD_THREE_FLAG_reg)=data)
#define  get_VBY1_OSD_OSD_THREE_FLAG_reg                                         (*((volatile unsigned int*)VBY1_OSD_OSD_THREE_FLAG_reg))
#define  VBY1_OSD_OSD_THREE_FLAG_three_mode_shift                                (1)
#define  VBY1_OSD_OSD_THREE_FLAG_three_en_shift                                  (0)
#define  VBY1_OSD_OSD_THREE_FLAG_three_mode_mask                                 (0x00000006)
#define  VBY1_OSD_OSD_THREE_FLAG_three_en_mask                                   (0x00000001)
#define  VBY1_OSD_OSD_THREE_FLAG_three_mode(data)                                (0x00000006&((data)<<1))
#define  VBY1_OSD_OSD_THREE_FLAG_three_en(data)                                  (0x00000001&(data))
#define  VBY1_OSD_OSD_THREE_FLAG_get_three_mode(data)                            ((0x00000006&(data))>>1)
#define  VBY1_OSD_OSD_THREE_FLAG_get_three_en(data)                              (0x00000001&(data))

#define  VBY1_OSD_OSD_CRC_CONTROL                                               0x1802D818
#define  VBY1_OSD_OSD_CRC_CONTROL_reg_addr                                       "0xB802D818"
#define  VBY1_OSD_OSD_CRC_CONTROL_reg                                            0xB802D818
#define  VBY1_OSD_OSD_CRC_CONTROL_inst_addr                                      "0x0006"
#define  set_VBY1_OSD_OSD_CRC_CONTROL_reg(data)                                  (*((volatile unsigned int*)VBY1_OSD_OSD_CRC_CONTROL_reg)=data)
#define  get_VBY1_OSD_OSD_CRC_CONTROL_reg                                        (*((volatile unsigned int*)VBY1_OSD_OSD_CRC_CONTROL_reg))
#define  VBY1_OSD_OSD_CRC_CONTROL_lane_crc_en_shift                              (16)
#define  VBY1_OSD_OSD_CRC_CONTROL_reg_crc_auto_cmp_en_shift                      (2)
#define  VBY1_OSD_OSD_CRC_CONTROL_reg_crc_conti_shift                            (1)
#define  VBY1_OSD_OSD_CRC_CONTROL_reg_crc_start_shift                            (0)
#define  VBY1_OSD_OSD_CRC_CONTROL_lane_crc_en_mask                               (0x000F0000)
#define  VBY1_OSD_OSD_CRC_CONTROL_reg_crc_auto_cmp_en_mask                       (0x00000004)
#define  VBY1_OSD_OSD_CRC_CONTROL_reg_crc_conti_mask                             (0x00000002)
#define  VBY1_OSD_OSD_CRC_CONTROL_reg_crc_start_mask                             (0x00000001)
#define  VBY1_OSD_OSD_CRC_CONTROL_lane_crc_en(data)                              (0x000F0000&((data)<<16))
#define  VBY1_OSD_OSD_CRC_CONTROL_reg_crc_auto_cmp_en(data)                      (0x00000004&((data)<<2))
#define  VBY1_OSD_OSD_CRC_CONTROL_reg_crc_conti(data)                            (0x00000002&((data)<<1))
#define  VBY1_OSD_OSD_CRC_CONTROL_reg_crc_start(data)                            (0x00000001&(data))
#define  VBY1_OSD_OSD_CRC_CONTROL_get_lane_crc_en(data)                          ((0x000F0000&(data))>>16)
#define  VBY1_OSD_OSD_CRC_CONTROL_get_reg_crc_auto_cmp_en(data)                  ((0x00000004&(data))>>2)
#define  VBY1_OSD_OSD_CRC_CONTROL_get_reg_crc_conti(data)                        ((0x00000002&(data))>>1)
#define  VBY1_OSD_OSD_CRC_CONTROL_get_reg_crc_start(data)                        (0x00000001&(data))

#define  VBY1_OSD_OSD_CRC_RESULT                                                0x1802D81C
#define  VBY1_OSD_OSD_CRC_RESULT_reg_addr                                        "0xB802D81C"
#define  VBY1_OSD_OSD_CRC_RESULT_reg                                             0xB802D81C
#define  VBY1_OSD_OSD_CRC_RESULT_inst_addr                                       "0x0007"
#define  set_VBY1_OSD_OSD_CRC_RESULT_reg(data)                                   (*((volatile unsigned int*)VBY1_OSD_OSD_CRC_RESULT_reg)=data)
#define  get_VBY1_OSD_OSD_CRC_RESULT_reg                                         (*((volatile unsigned int*)VBY1_OSD_OSD_CRC_RESULT_reg))
#define  VBY1_OSD_OSD_CRC_RESULT_crc_result_shift                                (0)
#define  VBY1_OSD_OSD_CRC_RESULT_crc_result_mask                                 (0xFFFFFFFF)
#define  VBY1_OSD_OSD_CRC_RESULT_crc_result(data)                                (0xFFFFFFFF&(data))
#define  VBY1_OSD_OSD_CRC_RESULT_get_crc_result(data)                            (0xFFFFFFFF&(data))

#define  VBY1_OSD_OSD_CRC_DES                                                   0x1802D820
#define  VBY1_OSD_OSD_CRC_DES_reg_addr                                           "0xB802D820"
#define  VBY1_OSD_OSD_CRC_DES_reg                                                0xB802D820
#define  VBY1_OSD_OSD_CRC_DES_inst_addr                                          "0x0008"
#define  set_VBY1_OSD_OSD_CRC_DES_reg(data)                                      (*((volatile unsigned int*)VBY1_OSD_OSD_CRC_DES_reg)=data)
#define  get_VBY1_OSD_OSD_CRC_DES_reg                                            (*((volatile unsigned int*)VBY1_OSD_OSD_CRC_DES_reg))
#define  VBY1_OSD_OSD_CRC_DES_reg_crc_des_shift                                  (0)
#define  VBY1_OSD_OSD_CRC_DES_reg_crc_des_mask                                   (0xFFFFFFFF)
#define  VBY1_OSD_OSD_CRC_DES_reg_crc_des(data)                                  (0xFFFFFFFF&(data))
#define  VBY1_OSD_OSD_CRC_DES_get_reg_crc_des(data)                              (0xFFFFFFFF&(data))

#define  VBY1_OSD_OSD_CRC_ERROR_CNT                                             0x1802D824
#define  VBY1_OSD_OSD_CRC_ERROR_CNT_reg_addr                                     "0xB802D824"
#define  VBY1_OSD_OSD_CRC_ERROR_CNT_reg                                          0xB802D824
#define  VBY1_OSD_OSD_CRC_ERROR_CNT_inst_addr                                    "0x0009"
#define  set_VBY1_OSD_OSD_CRC_ERROR_CNT_reg(data)                                (*((volatile unsigned int*)VBY1_OSD_OSD_CRC_ERROR_CNT_reg)=data)
#define  get_VBY1_OSD_OSD_CRC_ERROR_CNT_reg                                      (*((volatile unsigned int*)VBY1_OSD_OSD_CRC_ERROR_CNT_reg))
#define  VBY1_OSD_OSD_CRC_ERROR_CNT_crc_err_cnt_shift                            (0)
#define  VBY1_OSD_OSD_CRC_ERROR_CNT_crc_err_cnt_mask                             (0x0000FFFF)
#define  VBY1_OSD_OSD_CRC_ERROR_CNT_crc_err_cnt(data)                            (0x0000FFFF&(data))
#define  VBY1_OSD_OSD_CRC_ERROR_CNT_get_crc_err_cnt(data)                        (0x0000FFFF&(data))

#define  VBY1_OSD_OSD_ASYNC_FIFO_RST                                            0x1802D828
#define  VBY1_OSD_OSD_ASYNC_FIFO_RST_reg_addr                                    "0xB802D828"
#define  VBY1_OSD_OSD_ASYNC_FIFO_RST_reg                                         0xB802D828
#define  VBY1_OSD_OSD_ASYNC_FIFO_RST_inst_addr                                   "0x000A"
#define  set_VBY1_OSD_OSD_ASYNC_FIFO_RST_reg(data)                               (*((volatile unsigned int*)VBY1_OSD_OSD_ASYNC_FIFO_RST_reg)=data)
#define  get_VBY1_OSD_OSD_ASYNC_FIFO_RST_reg                                     (*((volatile unsigned int*)VBY1_OSD_OSD_ASYNC_FIFO_RST_reg))
#define  VBY1_OSD_OSD_ASYNC_FIFO_RST_fifo_vs_rst_en_shift                        (16)
#define  VBY1_OSD_OSD_ASYNC_FIFO_RST_fifo_vs_rst_delay_shift                     (0)
#define  VBY1_OSD_OSD_ASYNC_FIFO_RST_fifo_vs_rst_en_mask                         (0x00030000)
#define  VBY1_OSD_OSD_ASYNC_FIFO_RST_fifo_vs_rst_delay_mask                      (0x0000FFFF)
#define  VBY1_OSD_OSD_ASYNC_FIFO_RST_fifo_vs_rst_en(data)                        (0x00030000&((data)<<16))
#define  VBY1_OSD_OSD_ASYNC_FIFO_RST_fifo_vs_rst_delay(data)                     (0x0000FFFF&(data))
#define  VBY1_OSD_OSD_ASYNC_FIFO_RST_get_fifo_vs_rst_en(data)                    ((0x00030000&(data))>>16)
#define  VBY1_OSD_OSD_ASYNC_FIFO_RST_get_fifo_vs_rst_delay(data)                 (0x0000FFFF&(data))

#define  VBY1_OSD_OSD_VBY1_DEBUG                                                0x1802D82C
#define  VBY1_OSD_OSD_VBY1_DEBUG_reg_addr                                        "0xB802D82C"
#define  VBY1_OSD_OSD_VBY1_DEBUG_reg                                             0xB802D82C
#define  VBY1_OSD_OSD_VBY1_DEBUG_inst_addr                                       "0x000B"
#define  set_VBY1_OSD_OSD_VBY1_DEBUG_reg(data)                                   (*((volatile unsigned int*)VBY1_OSD_OSD_VBY1_DEBUG_reg)=data)
#define  get_VBY1_OSD_OSD_VBY1_DEBUG_reg                                         (*((volatile unsigned int*)VBY1_OSD_OSD_VBY1_DEBUG_reg))
#define  VBY1_OSD_OSD_VBY1_DEBUG_dummy_3_0_shift                                 (0)
#define  VBY1_OSD_OSD_VBY1_DEBUG_dummy_3_0_mask                                  (0x0000000F)
#define  VBY1_OSD_OSD_VBY1_DEBUG_dummy_3_0(data)                                 (0x0000000F&(data))
#define  VBY1_OSD_OSD_VBY1_DEBUG_get_dummy_3_0(data)                             (0x0000000F&(data))

#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL                                       0x1802D830
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_reg_addr                               "0xB802D830"
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_reg                                    0xB802D830
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_inst_addr                              "0x000C"
#define  set_VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_reg(data)                          (*((volatile unsigned int*)VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_reg)=data)
#define  get_VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_reg                                (*((volatile unsigned int*)VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_reg))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_htpdn_mode_ctrl_shift                  (31)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_lockn_mode_ctrl_shift                  (30)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_fw_htpdn_set_shift                     (29)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_fw_lockn_set_shift                     (28)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_htpdn_ie_shift                         (27)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_lockn_ie_shift                         (26)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_htpdn_int_status_shift                 (25)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_lockn_int_status_shift                 (24)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_vs_inv_shift                           (21)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_hs_inv_shift                           (20)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_de_only_mode_vs_set_shift              (18)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_de_only_mode_hs_set_shift              (17)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_de_only_mode_shift                     (16)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_htpdn_shift                            (3)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_lockn_shift                            (2)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_hw_htpdn_shift                         (1)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_hw_lockn_shift                         (0)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_htpdn_mode_ctrl_mask                   (0x80000000)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_lockn_mode_ctrl_mask                   (0x40000000)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_fw_htpdn_set_mask                      (0x20000000)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_fw_lockn_set_mask                      (0x10000000)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_htpdn_ie_mask                          (0x08000000)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_lockn_ie_mask                          (0x04000000)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_htpdn_int_status_mask                  (0x02000000)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_lockn_int_status_mask                  (0x01000000)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_vs_inv_mask                            (0x00200000)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_hs_inv_mask                            (0x00100000)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_de_only_mode_vs_set_mask               (0x00040000)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_de_only_mode_hs_set_mask               (0x00020000)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_de_only_mode_mask                      (0x00010000)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_htpdn_mask                             (0x00000008)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_lockn_mask                             (0x00000004)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_hw_htpdn_mask                          (0x00000002)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_hw_lockn_mask                          (0x00000001)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_htpdn_mode_ctrl(data)                  (0x80000000&((data)<<31))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_lockn_mode_ctrl(data)                  (0x40000000&((data)<<30))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_fw_htpdn_set(data)                     (0x20000000&((data)<<29))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_fw_lockn_set(data)                     (0x10000000&((data)<<28))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_htpdn_ie(data)                         (0x08000000&((data)<<27))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_lockn_ie(data)                         (0x04000000&((data)<<26))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_htpdn_int_status(data)                 (0x02000000&((data)<<25))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_lockn_int_status(data)                 (0x01000000&((data)<<24))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_vs_inv(data)                           (0x00200000&((data)<<21))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_hs_inv(data)                           (0x00100000&((data)<<20))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_de_only_mode_vs_set(data)              (0x00040000&((data)<<18))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_de_only_mode_hs_set(data)              (0x00020000&((data)<<17))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_de_only_mode(data)                     (0x00010000&((data)<<16))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_htpdn(data)                            (0x00000008&((data)<<3))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_lockn(data)                            (0x00000004&((data)<<2))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_hw_htpdn(data)                         (0x00000002&((data)<<1))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_hw_lockn(data)                         (0x00000001&(data))
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_htpdn_mode_ctrl(data)              ((0x80000000&(data))>>31)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_lockn_mode_ctrl(data)              ((0x40000000&(data))>>30)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_fw_htpdn_set(data)                 ((0x20000000&(data))>>29)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_fw_lockn_set(data)                 ((0x10000000&(data))>>28)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_htpdn_ie(data)                     ((0x08000000&(data))>>27)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_lockn_ie(data)                     ((0x04000000&(data))>>26)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_htpdn_int_status(data)             ((0x02000000&(data))>>25)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_lockn_int_status(data)             ((0x01000000&(data))>>24)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_vs_inv(data)                       ((0x00200000&(data))>>21)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_hs_inv(data)                       ((0x00100000&(data))>>20)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_de_only_mode_vs_set(data)          ((0x00040000&(data))>>18)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_de_only_mode_hs_set(data)          ((0x00020000&(data))>>17)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_de_only_mode(data)                 ((0x00010000&(data))>>16)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_htpdn(data)                        ((0x00000008&(data))>>3)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_lockn(data)                        ((0x00000004&(data))>>2)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_hw_htpdn(data)                     ((0x00000002&(data))>>1)
#define  VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_get_hw_lockn(data)                     (0x00000001&(data))

#define  VBY1_OSD_OSD_DATA_CAPTURE                                              0x1802D834
#define  VBY1_OSD_OSD_DATA_CAPTURE_reg_addr                                      "0xB802D834"
#define  VBY1_OSD_OSD_DATA_CAPTURE_reg                                           0xB802D834
#define  VBY1_OSD_OSD_DATA_CAPTURE_inst_addr                                     "0x000D"
#define  set_VBY1_OSD_OSD_DATA_CAPTURE_reg(data)                                 (*((volatile unsigned int*)VBY1_OSD_OSD_DATA_CAPTURE_reg)=data)
#define  get_VBY1_OSD_OSD_DATA_CAPTURE_reg                                       (*((volatile unsigned int*)VBY1_OSD_OSD_DATA_CAPTURE_reg))
#define  VBY1_OSD_OSD_DATA_CAPTURE_capture_lane_sel_shift                        (28)
#define  VBY1_OSD_OSD_DATA_CAPTURE_capture_active_only_shift                     (27)
#define  VBY1_OSD_OSD_DATA_CAPTURE_capture_v_shift                               (16)
#define  VBY1_OSD_OSD_DATA_CAPTURE_capture_en_shift                              (15)
#define  VBY1_OSD_OSD_DATA_CAPTURE_capture_h_shift                               (0)
#define  VBY1_OSD_OSD_DATA_CAPTURE_capture_lane_sel_mask                         (0xF0000000)
#define  VBY1_OSD_OSD_DATA_CAPTURE_capture_active_only_mask                      (0x08000000)
#define  VBY1_OSD_OSD_DATA_CAPTURE_capture_v_mask                                (0x07FF0000)
#define  VBY1_OSD_OSD_DATA_CAPTURE_capture_en_mask                               (0x00008000)
#define  VBY1_OSD_OSD_DATA_CAPTURE_capture_h_mask                                (0x00001FFF)
#define  VBY1_OSD_OSD_DATA_CAPTURE_capture_lane_sel(data)                        (0xF0000000&((data)<<28))
#define  VBY1_OSD_OSD_DATA_CAPTURE_capture_active_only(data)                     (0x08000000&((data)<<27))
#define  VBY1_OSD_OSD_DATA_CAPTURE_capture_v(data)                               (0x07FF0000&((data)<<16))
#define  VBY1_OSD_OSD_DATA_CAPTURE_capture_en(data)                              (0x00008000&((data)<<15))
#define  VBY1_OSD_OSD_DATA_CAPTURE_capture_h(data)                               (0x00001FFF&(data))
#define  VBY1_OSD_OSD_DATA_CAPTURE_get_capture_lane_sel(data)                    ((0xF0000000&(data))>>28)
#define  VBY1_OSD_OSD_DATA_CAPTURE_get_capture_active_only(data)                 ((0x08000000&(data))>>27)
#define  VBY1_OSD_OSD_DATA_CAPTURE_get_capture_v(data)                           ((0x07FF0000&(data))>>16)
#define  VBY1_OSD_OSD_DATA_CAPTURE_get_capture_en(data)                          ((0x00008000&(data))>>15)
#define  VBY1_OSD_OSD_DATA_CAPTURE_get_capture_h(data)                           (0x00001FFF&(data))

#define  VBY1_OSD_OSD_DATA_CAPTURE_1                                            0x1802D838
#define  VBY1_OSD_OSD_DATA_CAPTURE_1_reg_addr                                    "0xB802D838"
#define  VBY1_OSD_OSD_DATA_CAPTURE_1_reg                                         0xB802D838
#define  VBY1_OSD_OSD_DATA_CAPTURE_1_inst_addr                                   "0x000E"
#define  set_VBY1_OSD_OSD_DATA_CAPTURE_1_reg(data)                               (*((volatile unsigned int*)VBY1_OSD_OSD_DATA_CAPTURE_1_reg)=data)
#define  get_VBY1_OSD_OSD_DATA_CAPTURE_1_reg                                     (*((volatile unsigned int*)VBY1_OSD_OSD_DATA_CAPTURE_1_reg))
#define  VBY1_OSD_OSD_DATA_CAPTURE_1_dummy_7_0_shift                             (0)
#define  VBY1_OSD_OSD_DATA_CAPTURE_1_dummy_7_0_mask                              (0x000000FF)
#define  VBY1_OSD_OSD_DATA_CAPTURE_1_dummy_7_0(data)                             (0x000000FF&(data))
#define  VBY1_OSD_OSD_DATA_CAPTURE_1_get_dummy_7_0(data)                         (0x000000FF&(data))

#define  VBY1_OSD_OSD_DATA_CAPTURE_2                                            0x1802D83C
#define  VBY1_OSD_OSD_DATA_CAPTURE_2_reg_addr                                    "0xB802D83C"
#define  VBY1_OSD_OSD_DATA_CAPTURE_2_reg                                         0xB802D83C
#define  VBY1_OSD_OSD_DATA_CAPTURE_2_inst_addr                                   "0x000F"
#define  set_VBY1_OSD_OSD_DATA_CAPTURE_2_reg(data)                               (*((volatile unsigned int*)VBY1_OSD_OSD_DATA_CAPTURE_2_reg)=data)
#define  get_VBY1_OSD_OSD_DATA_CAPTURE_2_reg                                     (*((volatile unsigned int*)VBY1_OSD_OSD_DATA_CAPTURE_2_reg))
#define  VBY1_OSD_OSD_DATA_CAPTURE_2_capture_data_l_shift                        (0)
#define  VBY1_OSD_OSD_DATA_CAPTURE_2_capture_data_l_mask                         (0xFFFFFFFF)
#define  VBY1_OSD_OSD_DATA_CAPTURE_2_capture_data_l(data)                        (0xFFFFFFFF&(data))
#define  VBY1_OSD_OSD_DATA_CAPTURE_2_get_capture_data_l(data)                    (0xFFFFFFFF&(data))

#define  VBY1_OSD_OSD_DBG_EN                                                    0x1802D850
#define  VBY1_OSD_OSD_DBG_EN_reg_addr                                            "0xB802D850"
#define  VBY1_OSD_OSD_DBG_EN_reg                                                 0xB802D850
#define  VBY1_OSD_OSD_DBG_EN_inst_addr                                           "0x0010"
#define  set_VBY1_OSD_OSD_DBG_EN_reg(data)                                       (*((volatile unsigned int*)VBY1_OSD_OSD_DBG_EN_reg)=data)
#define  get_VBY1_OSD_OSD_DBG_EN_reg                                             (*((volatile unsigned int*)VBY1_OSD_OSD_DBG_EN_reg))
#define  VBY1_OSD_OSD_DBG_EN_dbg_en_shift                                        (0)
#define  VBY1_OSD_OSD_DBG_EN_dbg_en_mask                                         (0x00000001)
#define  VBY1_OSD_OSD_DBG_EN_dbg_en(data)                                        (0x00000001&(data))
#define  VBY1_OSD_OSD_DBG_EN_get_dbg_en(data)                                    (0x00000001&(data))

#define  VBY1_OSD_OSD_DBG_DATA                                                  0x1802D854
#define  VBY1_OSD_OSD_DBG_DATA_reg_addr                                          "0xB802D854"
#define  VBY1_OSD_OSD_DBG_DATA_reg                                               0xB802D854
#define  VBY1_OSD_OSD_DBG_DATA_inst_addr                                         "0x0011"
#define  set_VBY1_OSD_OSD_DBG_DATA_reg(data)                                     (*((volatile unsigned int*)VBY1_OSD_OSD_DBG_DATA_reg)=data)
#define  get_VBY1_OSD_OSD_DBG_DATA_reg                                           (*((volatile unsigned int*)VBY1_OSD_OSD_DBG_DATA_reg))
#define  VBY1_OSD_OSD_DBG_DATA_dbg_data_shift                                    (0)
#define  VBY1_OSD_OSD_DBG_DATA_dbg_data_mask                                     (0xFFFFFFFF)
#define  VBY1_OSD_OSD_DBG_DATA_dbg_data(data)                                    (0xFFFFFFFF&(data))
#define  VBY1_OSD_OSD_DBG_DATA_get_dbg_data(data)                                (0xFFFFFFFF&(data))

#define  VBY1_OSD_OSD_DPHY_CTL                                                  0x1802D858
#define  VBY1_OSD_OSD_DPHY_CTL_reg_addr                                          "0xB802D858"
#define  VBY1_OSD_OSD_DPHY_CTL_reg                                               0xB802D858
#define  VBY1_OSD_OSD_DPHY_CTL_inst_addr                                         "0x0012"
#define  set_VBY1_OSD_OSD_DPHY_CTL_reg(data)                                     (*((volatile unsigned int*)VBY1_OSD_OSD_DPHY_CTL_reg)=data)
#define  get_VBY1_OSD_OSD_DPHY_CTL_reg                                           (*((volatile unsigned int*)VBY1_OSD_OSD_DPHY_CTL_reg))
#define  VBY1_OSD_OSD_DPHY_CTL_e8b10b_en_shift                                   (31)
#define  VBY1_OSD_OSD_DPHY_CTL_e8b10b_initial_running_disparity_shift            (30)
#define  VBY1_OSD_OSD_DPHY_CTL_e8b10b_dis_i_shift                                (29)
#define  VBY1_OSD_OSD_DPHY_CTL_e8b10b_dis_j_shift                                (28)
#define  VBY1_OSD_OSD_DPHY_CTL_scr_sel_shift                                     (20)
#define  VBY1_OSD_OSD_DPHY_CTL_scramble_en_shift                                 (16)
#define  VBY1_OSD_OSD_DPHY_CTL_scramble_initial_value_shift                      (0)
#define  VBY1_OSD_OSD_DPHY_CTL_e8b10b_en_mask                                    (0x80000000)
#define  VBY1_OSD_OSD_DPHY_CTL_e8b10b_initial_running_disparity_mask             (0x40000000)
#define  VBY1_OSD_OSD_DPHY_CTL_e8b10b_dis_i_mask                                 (0x20000000)
#define  VBY1_OSD_OSD_DPHY_CTL_e8b10b_dis_j_mask                                 (0x10000000)
#define  VBY1_OSD_OSD_DPHY_CTL_scr_sel_mask                                      (0x00100000)
#define  VBY1_OSD_OSD_DPHY_CTL_scramble_en_mask                                  (0x00010000)
#define  VBY1_OSD_OSD_DPHY_CTL_scramble_initial_value_mask                       (0x0000FFFF)
#define  VBY1_OSD_OSD_DPHY_CTL_e8b10b_en(data)                                   (0x80000000&((data)<<31))
#define  VBY1_OSD_OSD_DPHY_CTL_e8b10b_initial_running_disparity(data)            (0x40000000&((data)<<30))
#define  VBY1_OSD_OSD_DPHY_CTL_e8b10b_dis_i(data)                                (0x20000000&((data)<<29))
#define  VBY1_OSD_OSD_DPHY_CTL_e8b10b_dis_j(data)                                (0x10000000&((data)<<28))
#define  VBY1_OSD_OSD_DPHY_CTL_scr_sel(data)                                     (0x00100000&((data)<<20))
#define  VBY1_OSD_OSD_DPHY_CTL_scramble_en(data)                                 (0x00010000&((data)<<16))
#define  VBY1_OSD_OSD_DPHY_CTL_scramble_initial_value(data)                      (0x0000FFFF&(data))
#define  VBY1_OSD_OSD_DPHY_CTL_get_e8b10b_en(data)                               ((0x80000000&(data))>>31)
#define  VBY1_OSD_OSD_DPHY_CTL_get_e8b10b_initial_running_disparity(data)        ((0x40000000&(data))>>30)
#define  VBY1_OSD_OSD_DPHY_CTL_get_e8b10b_dis_i(data)                            ((0x20000000&(data))>>29)
#define  VBY1_OSD_OSD_DPHY_CTL_get_e8b10b_dis_j(data)                            ((0x10000000&(data))>>28)
#define  VBY1_OSD_OSD_DPHY_CTL_get_scr_sel(data)                                 ((0x00100000&(data))>>20)
#define  VBY1_OSD_OSD_DPHY_CTL_get_scramble_en(data)                             ((0x00010000&(data))>>16)
#define  VBY1_OSD_OSD_DPHY_CTL_get_scramble_initial_value(data)                  (0x0000FFFF&(data))

#define  VBY1_OSD_OSD_DPHY_RD                                                   0x1802D85C
#define  VBY1_OSD_OSD_DPHY_RD_reg_addr                                           "0xB802D85C"
#define  VBY1_OSD_OSD_DPHY_RD_reg                                                0xB802D85C
#define  VBY1_OSD_OSD_DPHY_RD_inst_addr                                          "0x0013"
#define  set_VBY1_OSD_OSD_DPHY_RD_reg(data)                                      (*((volatile unsigned int*)VBY1_OSD_OSD_DPHY_RD_reg)=data)
#define  get_VBY1_OSD_OSD_DPHY_RD_reg                                            (*((volatile unsigned int*)VBY1_OSD_OSD_DPHY_RD_reg))
#define  VBY1_OSD_OSD_DPHY_RD_e8b10b_running_disparity_shift                     (0)
#define  VBY1_OSD_OSD_DPHY_RD_e8b10b_running_disparity_mask                      (0x0000000F)
#define  VBY1_OSD_OSD_DPHY_RD_e8b10b_running_disparity(data)                     (0x0000000F&(data))
#define  VBY1_OSD_OSD_DPHY_RD_get_e8b10b_running_disparity(data)                 (0x0000000F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======VBY1_OSD register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  vby1_aphy0_7_in_sel:2;
        RBus_UInt32  vby1_aphy8_15_in_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  lclk_inv_sel:1;
        RBus_UInt32  vby1_dclk_div_sel:3;
        RBus_UInt32  color_format:4;
        RBus_UInt32  res3:6;
        RBus_UInt32  win:10;
    };
}vby1_osd_osd_video_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  lane_count:5;
        RBus_UInt32  res2:13;
        RBus_UInt32  byte_mode:3;
    };
}vby1_osd_osd_lane_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ctl:16;
    };
}vby1_osd_osd_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_en:1;
        RBus_UInt32  pll_stable:1;
        RBus_UInt32  transfer_en:1;
        RBus_UInt32  video_trans_mode:1;
        RBus_UInt32  debounce_cnt:4;
        RBus_UInt32  bs_after_aln:1;
        RBus_UInt32  be_before_aln:1;
        RBus_UInt32  reg_delay:22;
    };
}vby1_osd_osd_transmit_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d810_31_8:24;
        RBus_UInt32  res1:2;
        RBus_UInt32  aln_finish:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  video_en:1;
        RBus_UInt32  aln_en:1;
        RBus_UInt32  cdr_en:1;
    };
}vby1_osd_osd_transmit_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  three_mode:2;
        RBus_UInt32  three_en:1;
    };
}vby1_osd_osd_three_flag_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_crc_en:4;
        RBus_UInt32  res2:13;
        RBus_UInt32  reg_crc_auto_cmp_en:1;
        RBus_UInt32  reg_crc_conti:1;
        RBus_UInt32  reg_crc_start:1;
    };
}vby1_osd_osd_crc_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}vby1_osd_osd_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_crc_des:32;
    };
}vby1_osd_osd_crc_des_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  crc_err_cnt:16;
    };
}vby1_osd_osd_crc_error_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  fifo_vs_rst_en:2;
        RBus_UInt32  fifo_vs_rst_delay:16;
    };
}vby1_osd_osd_async_fifo_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  dummy1802d82c_3_0:4;
    };
}vby1_osd_osd_vby1_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  htpdn_mode_ctrl:1;
        RBus_UInt32  lockn_mode_ctrl:1;
        RBus_UInt32  fw_htpdn_set:1;
        RBus_UInt32  fw_lockn_set:1;
        RBus_UInt32  htpdn_ie:1;
        RBus_UInt32  lockn_ie:1;
        RBus_UInt32  htpdn_int_status:1;
        RBus_UInt32  lockn_int_status:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  vs_inv:1;
        RBus_UInt32  hs_inv:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  de_only_mode_vs_set:1;
        RBus_UInt32  de_only_mode_hs_set:1;
        RBus_UInt32  de_only_mode:1;
        RBus_UInt32  res3:12;
        RBus_UInt32  htpdn:1;
        RBus_UInt32  lockn:1;
        RBus_UInt32  hw_htpdn:1;
        RBus_UInt32  hw_lockn:1;
    };
}vby1_osd_osd_vby1_status_fw_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  capture_lane_sel:4;
        RBus_UInt32  capture_active_only:1;
        RBus_UInt32  capture_v:11;
        RBus_UInt32  capture_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  capture_h:13;
    };
}vby1_osd_osd_data_capture_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dummy1802d838_7_0:8;
    };
}vby1_osd_osd_data_capture_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  capture_data_l:32;
    };
}vby1_osd_osd_data_capture_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  dbg_en:1;
    };
}vby1_osd_osd_dbg_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_data:32;
    };
}vby1_osd_osd_dbg_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  e8b10b_en:1;
        RBus_UInt32  e8b10b_initial_running_disparity:1;
        RBus_UInt32  e8b10b_dis_i:1;
        RBus_UInt32  e8b10b_dis_j:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  scr_sel:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  scramble_en:1;
        RBus_UInt32  scramble_initial_value:16;
    };
}vby1_osd_osd_dphy_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  e8b10b_running_disparity:4;
    };
}vby1_osd_osd_dphy_rd_RBUS;

#else //apply LITTLE_ENDIAN

//======VBY1_OSD register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  win:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  color_format:4;
        RBus_UInt32  vby1_dclk_div_sel:3;
        RBus_UInt32  lclk_inv_sel:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  vby1_aphy8_15_in_sel:2;
        RBus_UInt32  vby1_aphy0_7_in_sel:2;
        RBus_UInt32  res3:2;
    };
}vby1_osd_osd_video_format_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  byte_mode:3;
        RBus_UInt32  res1:13;
        RBus_UInt32  lane_count:5;
        RBus_UInt32  res2:11;
    };
}vby1_osd_osd_lane_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctl:16;
        RBus_UInt32  res1:16;
    };
}vby1_osd_osd_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_delay:22;
        RBus_UInt32  be_before_aln:1;
        RBus_UInt32  bs_after_aln:1;
        RBus_UInt32  debounce_cnt:4;
        RBus_UInt32  video_trans_mode:1;
        RBus_UInt32  transfer_en:1;
        RBus_UInt32  pll_stable:1;
        RBus_UInt32  reg_en:1;
    };
}vby1_osd_osd_transmit_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cdr_en:1;
        RBus_UInt32  aln_en:1;
        RBus_UInt32  video_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  aln_finish:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  dummy1802d810_31_8:24;
    };
}vby1_osd_osd_transmit_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  three_en:1;
        RBus_UInt32  three_mode:2;
        RBus_UInt32  res1:29;
    };
}vby1_osd_osd_three_flag_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_crc_start:1;
        RBus_UInt32  reg_crc_conti:1;
        RBus_UInt32  reg_crc_auto_cmp_en:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  lane_crc_en:4;
        RBus_UInt32  res2:12;
    };
}vby1_osd_osd_crc_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}vby1_osd_osd_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_crc_des:32;
    };
}vby1_osd_osd_crc_des_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_err_cnt:16;
        RBus_UInt32  res1:16;
    };
}vby1_osd_osd_crc_error_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fifo_vs_rst_delay:16;
        RBus_UInt32  fifo_vs_rst_en:2;
        RBus_UInt32  res1:14;
    };
}vby1_osd_osd_async_fifo_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d82c_3_0:4;
        RBus_UInt32  res1:28;
    };
}vby1_osd_osd_vby1_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hw_lockn:1;
        RBus_UInt32  hw_htpdn:1;
        RBus_UInt32  lockn:1;
        RBus_UInt32  htpdn:1;
        RBus_UInt32  res1:12;
        RBus_UInt32  de_only_mode:1;
        RBus_UInt32  de_only_mode_hs_set:1;
        RBus_UInt32  de_only_mode_vs_set:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  hs_inv:1;
        RBus_UInt32  vs_inv:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  lockn_int_status:1;
        RBus_UInt32  htpdn_int_status:1;
        RBus_UInt32  lockn_ie:1;
        RBus_UInt32  htpdn_ie:1;
        RBus_UInt32  fw_lockn_set:1;
        RBus_UInt32  fw_htpdn_set:1;
        RBus_UInt32  lockn_mode_ctrl:1;
        RBus_UInt32  htpdn_mode_ctrl:1;
    };
}vby1_osd_osd_vby1_status_fw_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  capture_h:13;
        RBus_UInt32  res1:2;
        RBus_UInt32  capture_en:1;
        RBus_UInt32  capture_v:11;
        RBus_UInt32  capture_active_only:1;
        RBus_UInt32  capture_lane_sel:4;
    };
}vby1_osd_osd_data_capture_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d838_7_0:8;
        RBus_UInt32  res1:24;
    };
}vby1_osd_osd_data_capture_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  capture_data_l:32;
    };
}vby1_osd_osd_data_capture_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_en:1;
        RBus_UInt32  res1:31;
    };
}vby1_osd_osd_dbg_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_data:32;
    };
}vby1_osd_osd_dbg_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scramble_initial_value:16;
        RBus_UInt32  scramble_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  scr_sel:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  e8b10b_dis_j:1;
        RBus_UInt32  e8b10b_dis_i:1;
        RBus_UInt32  e8b10b_initial_running_disparity:1;
        RBus_UInt32  e8b10b_en:1;
    };
}vby1_osd_osd_dphy_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  e8b10b_running_disparity:4;
        RBus_UInt32  res1:28;
    };
}vby1_osd_osd_dphy_rd_RBUS;




#endif 


#endif 
